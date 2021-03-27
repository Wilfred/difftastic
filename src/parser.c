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
#define STATE_COUNT 498
#define LARGE_STATE_COUNT 15
#define SYMBOL_COUNT 157
#define ALIAS_COUNT 20
#define TOKEN_COUNT 80
#define EXTERNAL_TOKEN_COUNT 1
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 7
#define PRODUCTION_ID_COUNT 27

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
  anon_sym_ATat_DASHroot = 35,
  anon_sym_ATerror = 36,
  anon_sym_ATwarn = 37,
  anon_sym_ATdebug = 38,
  sym_nesting_selector = 39,
  anon_sym_STAR = 40,
  anon_sym_DOT = 41,
  anon_sym_COLON_COLON = 42,
  anon_sym_POUND = 43,
  anon_sym_LBRACK = 44,
  anon_sym_EQ = 45,
  anon_sym_TILDE_EQ = 46,
  anon_sym_CARET_EQ = 47,
  anon_sym_PIPE_EQ = 48,
  anon_sym_STAR_EQ = 49,
  anon_sym_DOLLAR_EQ = 50,
  anon_sym_RBRACK = 51,
  anon_sym_GT = 52,
  anon_sym_TILDE = 53,
  anon_sym_PLUS = 54,
  sym_important = 55,
  anon_sym_and = 56,
  anon_sym_or = 57,
  anon_sym_not = 58,
  anon_sym_only = 59,
  anon_sym_selector = 60,
  aux_sym_color_value_token1 = 61,
  sym_string_value = 62,
  aux_sym_integer_value_token1 = 63,
  aux_sym_float_value_token1 = 64,
  sym_unit = 65,
  anon_sym_DASH = 66,
  anon_sym_SLASH = 67,
  anon_sym_EQ_EQ = 68,
  anon_sym_LT = 69,
  anon_sym_BANG_EQ = 70,
  anon_sym_LT_EQ = 71,
  anon_sym_GT_EQ = 72,
  sym_identifier = 73,
  sym_variable_identifier = 74,
  sym_at_keyword = 75,
  sym_comment = 76,
  sym_single_line_comment = 77,
  sym_plain_value = 78,
  sym__descendant_operator = 79,
  sym_stylesheet = 80,
  sym_import_statement = 81,
  sym_media_statement = 82,
  sym_charset_statement = 83,
  sym_namespace_statement = 84,
  sym_keyframes_statement = 85,
  sym_keyframe_block_list = 86,
  sym_keyframe_block = 87,
  sym_from = 88,
  sym_supports_statement = 89,
  sym_at_rule = 90,
  sym_use_statement = 91,
  sym_forward_statement = 92,
  sym_parameters = 93,
  sym_parameter = 94,
  sym_mixin_statement = 95,
  sym_include_statement = 96,
  sym_include_arguments = 97,
  sym_include_argument = 98,
  sym_placeholder = 99,
  sym_extend_statement = 100,
  sym_if_statement = 101,
  sym_if_clause = 102,
  sym_else_if_clause = 103,
  sym_else_clause = 104,
  sym_each_statement = 105,
  sym_for_statement = 106,
  sym_while_statement = 107,
  sym_function_statement = 108,
  sym_return_statement = 109,
  sym_at_root_statement = 110,
  sym_error_statement = 111,
  sym_warn_statement = 112,
  sym_debug_statement = 113,
  sym_rule_set = 114,
  sym_selectors = 115,
  sym_block = 116,
  sym__selector = 117,
  sym_universal_selector = 118,
  sym_class_selector = 119,
  sym_pseudo_class_selector = 120,
  sym_pseudo_element_selector = 121,
  sym_id_selector = 122,
  sym_attribute_selector = 123,
  sym_child_selector = 124,
  sym_descendant_selector = 125,
  sym_sibling_selector = 126,
  sym_adjacent_sibling_selector = 127,
  sym_pseudo_class_arguments = 128,
  sym_declaration = 129,
  sym_last_declaration = 130,
  sym__query = 131,
  sym_feature_query = 132,
  sym_parenthesized_query = 133,
  sym_binary_query = 134,
  sym_unary_query = 135,
  sym_selector_query = 136,
  sym__value = 137,
  sym_parenthesized_value = 138,
  sym_color_value = 139,
  sym_integer_value = 140,
  sym_float_value = 141,
  sym_call_expression = 142,
  sym_binary_expression = 143,
  sym_arguments = 144,
  aux_sym_stylesheet_repeat1 = 145,
  aux_sym_import_statement_repeat1 = 146,
  aux_sym_keyframe_block_list_repeat1 = 147,
  aux_sym_parameters_repeat1 = 148,
  aux_sym_include_arguments_repeat1 = 149,
  aux_sym_if_statement_repeat1 = 150,
  aux_sym_selectors_repeat1 = 151,
  aux_sym_block_repeat1 = 152,
  aux_sym_pseudo_class_arguments_repeat1 = 153,
  aux_sym_pseudo_class_arguments_repeat2 = 154,
  aux_sym_declaration_repeat1 = 155,
  aux_sym_arguments_repeat1 = 156,
  alias_sym_argument_name = 157,
  alias_sym_argument_value = 158,
  alias_sym_attribute_name = 159,
  alias_sym_class_name = 160,
  alias_sym_condition = 161,
  alias_sym_default_value = 162,
  alias_sym_feature_name = 163,
  alias_sym_function_name = 164,
  alias_sym_id_name = 165,
  alias_sym_key = 166,
  alias_sym_keyframes_name = 167,
  alias_sym_keyword_query = 168,
  alias_sym_name = 169,
  alias_sym_namespace_name = 170,
  alias_sym_property_name = 171,
  alias_sym_tag_name = 172,
  alias_sym_through = 173,
  alias_sym_value = 174,
  alias_sym_variable = 175,
  alias_sym_variable_value = 176,
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
  [anon_sym_ATat_DASHroot] = "@at-root",
  [anon_sym_ATerror] = "@error",
  [anon_sym_ATwarn] = "@warn",
  [anon_sym_ATdebug] = "@debug",
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
  [sym_variable_identifier] = "variable_name",
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
  [sym_include_arguments] = "arguments",
  [sym_include_argument] = "argument",
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
  [sym_at_root_statement] = "at_root_statement",
  [sym_error_statement] = "error_statement",
  [sym_warn_statement] = "warn_statement",
  [sym_debug_statement] = "debug_statement",
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
  [anon_sym_ATat_DASHroot] = anon_sym_ATat_DASHroot,
  [anon_sym_ATerror] = anon_sym_ATerror,
  [anon_sym_ATwarn] = anon_sym_ATwarn,
  [anon_sym_ATdebug] = anon_sym_ATdebug,
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
  [sym_include_arguments] = sym_arguments,
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
  [sym_at_root_statement] = sym_at_root_statement,
  [sym_error_statement] = sym_error_statement,
  [sym_warn_statement] = sym_warn_statement,
  [sym_debug_statement] = sym_debug_statement,
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
  [anon_sym_ATat_DASHroot] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ATerror] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ATwarn] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ATdebug] = {
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
  [sym_at_root_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_error_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_warn_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_debug_statement] = {
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
  [alias_sym_variable_value] = {
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
    [0] = alias_sym_argument_value,
  },
  [18] = {
    [0] = alias_sym_property_name,
  },
  [19] = {
    [2] = alias_sym_attribute_name,
  },
  [20] = {
    [1] = alias_sym_value,
  },
  [21] = {
    [2] = alias_sym_condition,
  },
  [22] = {
    [1] = alias_sym_feature_name,
  },
  [23] = {
    [2] = alias_sym_default_value,
  },
  [24] = {
    [0] = alias_sym_argument_name,
    [2] = alias_sym_argument_value,
  },
  [25] = {
    [1] = alias_sym_key,
    [3] = alias_sym_value,
  },
  [26] = {
    [1] = alias_sym_variable,
    [3] = sym_from,
    [5] = alias_sym_through,
  },
};

static uint16_t ts_non_terminal_alias_map[] = {
  sym__value, 6,
    sym__value,
    alias_sym_argument_value,
    alias_sym_condition,
    alias_sym_default_value,
    alias_sym_through,
    sym_from,
  0,
};

static inline bool sym_identifier_character_set_1(int32_t c) {
  return (c < ','
    ? (c < '&'
      ? (c < '$'
        ? c == ' '
        : c <= '$')
      : (c <= '&' || (c >= '(' && c <= ')')))
    : (c <= '.' || (c < '_'
      ? (c < 'A'
        ? (c >= '0' && c <= '9')
        : c <= 'Z')
      : (c <= '_' || (c >= 'a' && c <= 'z')))));
}

static inline bool sym_single_line_comment_character_set_1(int32_t c) {
  return (c < ';'
    ? (c < ' '
      ? (c < '\r'
        ? c == '\t'
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

static inline bool sym_single_line_comment_character_set_2(int32_t c) {
  return (c < ';'
    ? (c < ' '
      ? (c < '\r'
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

static inline bool sym_plain_value_character_set_3(int32_t c) {
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
      : (c <= ']' || c == '}'))));
}

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(106);
      if (lookahead == '!') ADVANCE(39);
      if (lookahead == '"') ADVANCE(23);
      if (lookahead == '#') ADVANCE(154);
      if (lookahead == '$') ADVANCE(40);
      if (lookahead == '%') ADVANCE(130);
      if (lookahead == '&') ADVANCE(148);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == '(') ADVANCE(128);
      if (lookahead == ')') ADVANCE(129);
      if (lookahead == '*') ADVANCE(150);
      if (lookahead == '+') ADVANCE(170);
      if (lookahead == ',') ADVANCE(108);
      if (lookahead == '-') ADVANCE(252);
      if (lookahead == '.') ADVANCE(152);
      if (lookahead == '/') ADVANCE(253);
      if (lookahead == ':') ADVANCE(125);
      if (lookahead == ';') ADVANCE(109);
      if (lookahead == '<') ADVANCE(256);
      if (lookahead == '=') ADVANCE(158);
      if (lookahead == '>') ADVANCE(166);
      if (lookahead == '@') ADVANCE(46);
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
      if (lookahead == '{') ADVANCE(115);
      if (lookahead == '|') ADVANCE(44);
      if (lookahead == '}') ADVANCE(116);
      if (lookahead == '~') ADVANCE(168);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(33);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(102)
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('b' <= lookahead && lookahead <= 'd')) ADVANCE(96);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(219);
      END_STATE();
    case 1:
      if (lookahead == '!') ADVANCE(39);
      if (lookahead == '"') ADVANCE(23);
      if (lookahead == '#') ADVANCE(155);
      if (lookahead == '$') ADVANCE(97);
      if (lookahead == '%') ADVANCE(248);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == '(') ADVANCE(122);
      if (lookahead == ')') ADVANCE(123);
      if (lookahead == '*') ADVANCE(149);
      if (lookahead == '+') ADVANCE(170);
      if (lookahead == ',') ADVANCE(108);
      if (lookahead == '-') ADVANCE(250);
      if (lookahead == '.') ADVANCE(92);
      if (lookahead == '/') ADVANCE(254);
      if (lookahead == ';') ADVANCE(109);
      if (lookahead == '<') ADVANCE(256);
      if (lookahead == '=') ADVANCE(42);
      if (lookahead == '>') ADVANCE(166);
      if (lookahead == '_') ADVANCE(260);
      if (lookahead == '}') ADVANCE(116);
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
      if (lookahead == '$') ADVANCE(97);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == '(') ADVANCE(128);
      if (lookahead == ')') ADVANCE(123);
      if (lookahead == '*') ADVANCE(149);
      if (lookahead == '+') ADVANCE(170);
      if (lookahead == ',') ADVANCE(108);
      if (lookahead == '-') ADVANCE(250);
      if (lookahead == '.') ADVANCE(152);
      if (lookahead == '/') ADVANCE(254);
      if (lookahead == ':') ADVANCE(125);
      if (lookahead == ';') ADVANCE(109);
      if (lookahead == '<') ADVANCE(256);
      if (lookahead == '=') ADVANCE(42);
      if (lookahead == '>') ADVANCE(166);
      if (lookahead == '[') ADVANCE(156);
      if (lookahead == '_') ADVANCE(260);
      if (lookahead == '}') ADVANCE(116);
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
      if (lookahead == '$') ADVANCE(97);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == '(') ADVANCE(122);
      if (lookahead == ')') ADVANCE(123);
      if (lookahead == '*') ADVANCE(149);
      if (lookahead == '+') ADVANCE(170);
      if (lookahead == ',') ADVANCE(108);
      if (lookahead == '-') ADVANCE(250);
      if (lookahead == '.') ADVANCE(152);
      if (lookahead == '/') ADVANCE(254);
      if (lookahead == ':') ADVANCE(125);
      if (lookahead == ';') ADVANCE(109);
      if (lookahead == '<') ADVANCE(256);
      if (lookahead == '=') ADVANCE(42);
      if (lookahead == '>') ADVANCE(166);
      if (lookahead == '[') ADVANCE(156);
      if (lookahead == '_') ADVANCE(260);
      if (lookahead == '}') ADVANCE(116);
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
      if (lookahead == '$') ADVANCE(97);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == '(') ADVANCE(122);
      if (lookahead == ')') ADVANCE(123);
      if (lookahead == '*') ADVANCE(149);
      if (lookahead == '+') ADVANCE(170);
      if (lookahead == ',') ADVANCE(108);
      if (lookahead == '-') ADVANCE(250);
      if (lookahead == '.') ADVANCE(92);
      if (lookahead == '/') ADVANCE(254);
      if (lookahead == ';') ADVANCE(109);
      if (lookahead == '<') ADVANCE(256);
      if (lookahead == '=') ADVANCE(42);
      if (lookahead == '>') ADVANCE(166);
      if (lookahead == '_') ADVANCE(260);
      if (lookahead == '}') ADVANCE(116);
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
      if (lookahead == '$') ADVANCE(97);
      if (lookahead == '&') ADVANCE(148);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == '(') ADVANCE(122);
      if (lookahead == ')') ADVANCE(123);
      if (lookahead == '*') ADVANCE(149);
      if (lookahead == '+') ADVANCE(36);
      if (lookahead == ',') ADVANCE(108);
      if (lookahead == '-') ADVANCE(262);
      if (lookahead == '.') ADVANCE(152);
      if (lookahead == '/') ADVANCE(30);
      if (lookahead == ':') ADVANCE(125);
      if (lookahead == ';') ADVANCE(109);
      if (lookahead == '[') ADVANCE(156);
      if (lookahead == '_') ADVANCE(260);
      if (lookahead == '}') ADVANCE(116);
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
      if (lookahead == '(') ADVANCE(122);
      if (lookahead == '*') ADVANCE(149);
      if (lookahead == '+') ADVANCE(169);
      if (lookahead == '-') ADVANCE(251);
      if (lookahead == '/') ADVANCE(253);
      if (lookahead == ';') ADVANCE(109);
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
      if (lookahead == '(') ADVANCE(128);
      if (lookahead == '*') ADVANCE(149);
      if (lookahead == '+') ADVANCE(169);
      if (lookahead == '-') ADVANCE(251);
      if (lookahead == '/') ADVANCE(253);
      if (lookahead == ';') ADVANCE(109);
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
      if (lookahead == '(') ADVANCE(122);
      if (lookahead == '*') ADVANCE(149);
      if (lookahead == '+') ADVANCE(169);
      if (lookahead == '-') ADVANCE(251);
      if (lookahead == '/') ADVANCE(253);
      if (lookahead == ';') ADVANCE(109);
      if (lookahead == '<') ADVANCE(256);
      if (lookahead == '=') ADVANCE(42);
      if (lookahead == '>') ADVANCE(166);
      if (lookahead == 'n') ADVANCE(271);
      if (lookahead == 'o') ADVANCE(270);
      if (lookahead == 's') ADVANCE(267);
      if (lookahead == '{') ADVANCE(115);
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
      if (lookahead == '(') ADVANCE(122);
      if (lookahead == '*') ADVANCE(149);
      if (lookahead == '+') ADVANCE(169);
      if (lookahead == '-') ADVANCE(251);
      if (lookahead == '/') ADVANCE(253);
      if (lookahead == ';') ADVANCE(109);
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
      if (lookahead == '(') ADVANCE(128);
      if (lookahead == ')') ADVANCE(129);
      if (lookahead == '*') ADVANCE(149);
      if (lookahead == '+') ADVANCE(169);
      if (lookahead == ',') ADVANCE(108);
      if (lookahead == '-') ADVANCE(249);
      if (lookahead == '/') ADVANCE(253);
      if (lookahead == ':') ADVANCE(124);
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
      if (lookahead == '(') ADVANCE(128);
      if (lookahead == ')') ADVANCE(123);
      if (lookahead == '*') ADVANCE(149);
      if (lookahead == '+') ADVANCE(169);
      if (lookahead == ',') ADVANCE(108);
      if (lookahead == '-') ADVANCE(249);
      if (lookahead == '/') ADVANCE(253);
      if (lookahead == ':') ADVANCE(124);
      if (lookahead == ';') ADVANCE(109);
      if (lookahead == '<') ADVANCE(256);
      if (lookahead == '=') ADVANCE(42);
      if (lookahead == '>') ADVANCE(166);
      if (lookahead == ']') ADVANCE(164);
      if (lookahead == 'a') ADVANCE(67);
      if (lookahead == 'o') ADVANCE(77);
      if (lookahead == 't') ADVANCE(58);
      if (lookahead == '{') ADVANCE(115);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(12)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('b' <= lookahead && lookahead <= 'f')) ADVANCE(96);
      END_STATE();
    case 12:
      if (lookahead == '!') ADVANCE(38);
      if (lookahead == ')') ADVANCE(123);
      if (lookahead == '*') ADVANCE(149);
      if (lookahead == '+') ADVANCE(169);
      if (lookahead == ',') ADVANCE(108);
      if (lookahead == '-') ADVANCE(249);
      if (lookahead == '/') ADVANCE(253);
      if (lookahead == ':') ADVANCE(124);
      if (lookahead == ';') ADVANCE(109);
      if (lookahead == '<') ADVANCE(256);
      if (lookahead == '=') ADVANCE(42);
      if (lookahead == '>') ADVANCE(166);
      if (lookahead == ']') ADVANCE(164);
      if (lookahead == 'a') ADVANCE(66);
      if (lookahead == 'o') ADVANCE(77);
      if (lookahead == 't') ADVANCE(58);
      if (lookahead == '{') ADVANCE(115);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(12)
      END_STATE();
    case 13:
      if (lookahead == '!') ADVANCE(38);
      if (lookahead == ')') ADVANCE(123);
      if (lookahead == '*') ADVANCE(149);
      if (lookahead == '+') ADVANCE(169);
      if (lookahead == ',') ADVANCE(108);
      if (lookahead == '-') ADVANCE(249);
      if (lookahead == '/') ADVANCE(253);
      if (lookahead == ';') ADVANCE(109);
      if (lookahead == '<') ADVANCE(256);
      if (lookahead == '=') ADVANCE(42);
      if (lookahead == '>') ADVANCE(166);
      if (lookahead == ']') ADVANCE(164);
      if (lookahead == '{') ADVANCE(115);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(13)
      END_STATE();
    case 14:
      if (lookahead == '!') ADVANCE(38);
      if (lookahead == ')') ADVANCE(123);
      if (lookahead == '*') ADVANCE(149);
      if (lookahead == '+') ADVANCE(169);
      if (lookahead == ',') ADVANCE(108);
      if (lookahead == '-') ADVANCE(249);
      if (lookahead == '/') ADVANCE(253);
      if (lookahead == ';') ADVANCE(109);
      if (lookahead == '<') ADVANCE(256);
      if (lookahead == '=') ADVANCE(42);
      if (lookahead == '>') ADVANCE(166);
      if (lookahead == ']') ADVANCE(164);
      if (lookahead == '{') ADVANCE(115);
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
      if (lookahead == ',') ADVANCE(108);
      if (lookahead == '-') ADVANCE(249);
      if (lookahead == '/') ADVANCE(253);
      if (lookahead == ':') ADVANCE(124);
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
      if (lookahead == '$') ADVANCE(97);
      if (lookahead == '&') ADVANCE(148);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == '(') ADVANCE(122);
      if (lookahead == ')') ADVANCE(129);
      if (lookahead == '*') ADVANCE(149);
      if (lookahead == ',') ADVANCE(108);
      if (lookahead == '-') ADVANCE(280);
      if (lookahead == '.') ADVANCE(151);
      if (lookahead == '/') ADVANCE(29);
      if (lookahead == ':') ADVANCE(125);
      if (lookahead == '@') ADVANCE(48);
      if (lookahead == '[') ADVANCE(156);
      if (lookahead == '{') ADVANCE(115);
      if (lookahead == '}') ADVANCE(116);
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
      if (lookahead == '$') ADVANCE(97);
      if (lookahead == '&') ADVANCE(148);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == '(') ADVANCE(122);
      if (lookahead == '*') ADVANCE(149);
      if (lookahead == ',') ADVANCE(108);
      if (lookahead == '-') ADVANCE(280);
      if (lookahead == '.') ADVANCE(151);
      if (lookahead == '/') ADVANCE(29);
      if (lookahead == ':') ADVANCE(125);
      if (lookahead == '@') ADVANCE(48);
      if (lookahead == '[') ADVANCE(156);
      if (lookahead == '{') ADVANCE(115);
      if (lookahead == '}') ADVANCE(116);
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
      if (lookahead == '$') ADVANCE(97);
      if (lookahead == '&') ADVANCE(148);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == '*') ADVANCE(149);
      if (lookahead == '-') ADVANCE(280);
      if (lookahead == '.') ADVANCE(151);
      if (lookahead == '/') ADVANCE(29);
      if (lookahead == ':') ADVANCE(125);
      if (lookahead == '@') ADVANCE(47);
      if (lookahead == '[') ADVANCE(156);
      if (lookahead == '}') ADVANCE(116);
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
      if (lookahead == '(') ADVANCE(128);
      if (lookahead == '*') ADVANCE(149);
      if (lookahead == '.') ADVANCE(151);
      if (lookahead == '/') ADVANCE(29);
      if (lookahead == ':') ADVANCE(125);
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
      if (lookahead == ':') ADVANCE(125);
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
      if (lookahead == '\\') ADVANCE(100);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(23);
      END_STATE();
    case 24:
      if (lookahead == '#') ADVANCE(89);
      if (lookahead == '$') ADVANCE(40);
      if (lookahead == '(') ADVANCE(122);
      if (lookahead == '*') ADVANCE(41);
      if (lookahead == '/') ADVANCE(29);
      if (lookahead == ';') ADVANCE(109);
      if (lookahead == '=') ADVANCE(157);
      if (lookahead == ']') ADVANCE(164);
      if (lookahead == '^') ADVANCE(43);
      if (lookahead == 'n') ADVANCE(271);
      if (lookahead == 'o') ADVANCE(270);
      if (lookahead == 's') ADVANCE(267);
      if (lookahead == '{') ADVANCE(115);
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
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(96);
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
      if (lookahead == '$') ADVANCE(97);
      END_STATE();
    case 28:
      if (lookahead == '\'') ADVANCE(213);
      if (lookahead == '\\') ADVANCE(101);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(28);
      END_STATE();
    case 29:
      if (lookahead == '*') ADVANCE(32);
      if (lookahead == '/') ADVANCE(400);
      END_STATE();
    case 30:
      if (lookahead == '*') ADVANCE(32);
      if (lookahead == '/') ADVANCE(396);
      if (!sym_plain_value_character_set_1(lookahead)) ADVANCE(37);
      END_STATE();
    case 31:
      if (lookahead == '*') ADVANCE(31);
      if (lookahead == '/') ADVANCE(395);
      if (lookahead != 0) ADVANCE(32);
      END_STATE();
    case 32:
      if (lookahead == '*') ADVANCE(31);
      if (lookahead != 0) ADVANCE(32);
      END_STATE();
    case 33:
      if (lookahead == '-') ADVANCE(93);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(225);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(95);
      END_STATE();
    case 34:
      if (lookahead == '-') ADVANCE(93);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(224);
      END_STATE();
    case 35:
      if (lookahead == '-') ADVANCE(93);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(207);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(212);
      END_STATE();
    case 36:
      if (lookahead == '.') ADVANCE(92);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(34);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(217);
      END_STATE();
    case 37:
      if (lookahead == '/') ADVANCE(98);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(37);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(404);
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
      if (lookahead == 'a') ADVANCE(378);
      if (lookahead == 'c') ADVANCE(330);
      if (lookahead == 'd') ADVANCE(310);
      if (lookahead == 'e') ADVANCE(289);
      if (lookahead == 'f') ADVANCE(346);
      if (lookahead == 'i') ADVANCE(325);
      if (lookahead == 'k') ADVANCE(311);
      if (lookahead == 'm') ADVANCE(312);
      if (lookahead == 'n') ADVANCE(293);
      if (lookahead == 'r') ADVANCE(319);
      if (lookahead == 's') ADVANCE(387);
      if (lookahead == 'u') ADVANCE(375);
      if (lookahead == 'w') ADVANCE(295);
      if (lookahead == '-' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(393);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(394);
      END_STATE();
    case 47:
      if (lookahead == 'a') ADVANCE(378);
      if (lookahead == 'c') ADVANCE(330);
      if (lookahead == 'd') ADVANCE(310);
      if (lookahead == 'e') ADVANCE(289);
      if (lookahead == 'f') ADVANCE(353);
      if (lookahead == 'i') ADVANCE(325);
      if (lookahead == 'k') ADVANCE(311);
      if (lookahead == 'm') ADVANCE(312);
      if (lookahead == 'n') ADVANCE(293);
      if (lookahead == 'r') ADVANCE(319);
      if (lookahead == 's') ADVANCE(387);
      if (lookahead == 'w') ADVANCE(295);
      if (lookahead == '-' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(393);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(394);
      END_STATE();
    case 48:
      if (lookahead == 'a') ADVANCE(378);
      if (lookahead == 'c') ADVANCE(330);
      if (lookahead == 'd') ADVANCE(310);
      if (lookahead == 'e') ADVANCE(291);
      if (lookahead == 'f') ADVANCE(353);
      if (lookahead == 'i') ADVANCE(325);
      if (lookahead == 'k') ADVANCE(311);
      if (lookahead == 'm') ADVANCE(312);
      if (lookahead == 'n') ADVANCE(293);
      if (lookahead == 'r') ADVANCE(319);
      if (lookahead == 's') ADVANCE(387);
      if (lookahead == 'w') ADVANCE(295);
      if (lookahead == '-' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(393);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(394);
      END_STATE();
    case 49:
      if (lookahead == 'a') ADVANCE(69);
      END_STATE();
    case 50:
      if (lookahead == 'c') ADVANCE(330);
      if (lookahead == 'd') ADVANCE(310);
      if (lookahead == 'e') ADVANCE(292);
      if (lookahead == 'f') ADVANCE(346);
      if (lookahead == 'i') ADVANCE(325);
      if (lookahead == 'k') ADVANCE(311);
      if (lookahead == 'm') ADVANCE(312);
      if (lookahead == 'n') ADVANCE(293);
      if (lookahead == 's') ADVANCE(387);
      if (lookahead == 'u') ADVANCE(375);
      if (lookahead == 'w') ADVANCE(295);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(393);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(394);
      END_STATE();
    case 51:
      if (lookahead == 'c') ADVANCE(330);
      if (lookahead == 'd') ADVANCE(310);
      if (lookahead == 'e') ADVANCE(290);
      if (lookahead == 'f') ADVANCE(346);
      if (lookahead == 'i') ADVANCE(325);
      if (lookahead == 'k') ADVANCE(311);
      if (lookahead == 'm') ADVANCE(312);
      if (lookahead == 'n') ADVANCE(293);
      if (lookahead == 's') ADVANCE(387);
      if (lookahead == 'u') ADVANCE(375);
      if (lookahead == 'w') ADVANCE(295);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(393);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(394);
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
      if (lookahead == 'f') ADVANCE(134);
      if (lookahead == 'n') ADVANCE(136);
      END_STATE();
    case 57:
      if (lookahead == 'g') ADVANCE(60);
      END_STATE();
    case 58:
      if (lookahead == 'h') ADVANCE(81);
      END_STATE();
    case 59:
      if (lookahead == 'h') ADVANCE(81);
      if (lookahead == 'o') ADVANCE(118);
      END_STATE();
    case 60:
      if (lookahead == 'h') ADVANCE(139);
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
      if (lookahead == 'm') ADVANCE(117);
      END_STATE();
    case 66:
      if (lookahead == 'n') ADVANCE(53);
      END_STATE();
    case 67:
      if (lookahead == 'n') ADVANCE(53);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(95);
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
      if (lookahead == 'o') ADVANCE(118);
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
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(95);
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
      if (lookahead == 't') ADVANCE(49);
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
      if (lookahead == '{') ADVANCE(90);
      END_STATE();
    case 90:
      if (lookahead == '}') ADVANCE(280);
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(90);
      END_STATE();
    case 91:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(94);
      if (lookahead == '/') ADVANCE(29);
      if (lookahead == 'f') ADVANCE(79);
      if (lookahead == 't') ADVANCE(71);
      if (lookahead == '}') ADVANCE(116);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(91)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(220);
      END_STATE();
    case 92:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(223);
      END_STATE();
    case 93:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(224);
      END_STATE();
    case 94:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(220);
      END_STATE();
    case 95:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(212);
      END_STATE();
    case 96:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(95);
      END_STATE();
    case 97:
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(287);
      END_STATE();
    case 98:
      if (!sym_plain_value_character_set_2(lookahead)) ADVANCE(37);
      END_STATE();
    case 99:
      if (!sym_plain_value_character_set_2(lookahead)) ADVANCE(404);
      END_STATE();
    case 100:
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(23);
      if (lookahead == '"') ADVANCE(214);
      if (lookahead == '\\') ADVANCE(100);
      END_STATE();
    case 101:
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(28);
      if (lookahead == '\'') ADVANCE(215);
      if (lookahead == '\\') ADVANCE(101);
      END_STATE();
    case 102:
      if (eof) ADVANCE(106);
      if (lookahead == '!') ADVANCE(39);
      if (lookahead == '"') ADVANCE(23);
      if (lookahead == '#') ADVANCE(154);
      if (lookahead == '$') ADVANCE(40);
      if (lookahead == '%') ADVANCE(130);
      if (lookahead == '&') ADVANCE(148);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == '(') ADVANCE(122);
      if (lookahead == ')') ADVANCE(123);
      if (lookahead == '*') ADVANCE(150);
      if (lookahead == '+') ADVANCE(170);
      if (lookahead == ',') ADVANCE(108);
      if (lookahead == '-') ADVANCE(252);
      if (lookahead == '.') ADVANCE(152);
      if (lookahead == '/') ADVANCE(253);
      if (lookahead == ':') ADVANCE(125);
      if (lookahead == ';') ADVANCE(109);
      if (lookahead == '<') ADVANCE(256);
      if (lookahead == '=') ADVANCE(158);
      if (lookahead == '>') ADVANCE(166);
      if (lookahead == '@') ADVANCE(46);
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
      if (lookahead == '{') ADVANCE(115);
      if (lookahead == '|') ADVANCE(44);
      if (lookahead == '}') ADVANCE(116);
      if (lookahead == '~') ADVANCE(168);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(34);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(102)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(217);
      END_STATE();
    case 103:
      if (eof) ADVANCE(106);
      if (lookahead == '"') ADVANCE(23);
      if (lookahead == '#') ADVANCE(155);
      if (lookahead == '$') ADVANCE(97);
      if (lookahead == '%') ADVANCE(130);
      if (lookahead == '&') ADVANCE(148);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == '(') ADVANCE(128);
      if (lookahead == ')') ADVANCE(123);
      if (lookahead == '*') ADVANCE(149);
      if (lookahead == '+') ADVANCE(169);
      if (lookahead == ',') ADVANCE(108);
      if (lookahead == '-') ADVANCE(280);
      if (lookahead == '.') ADVANCE(151);
      if (lookahead == '/') ADVANCE(29);
      if (lookahead == ':') ADVANCE(125);
      if (lookahead == ';') ADVANCE(109);
      if (lookahead == '>') ADVANCE(165);
      if (lookahead == '@') ADVANCE(50);
      if (lookahead == '[') ADVANCE(156);
      if (lookahead == '{') ADVANCE(115);
      if (lookahead == '~') ADVANCE(167);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(104)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(263);
      END_STATE();
    case 104:
      if (eof) ADVANCE(106);
      if (lookahead == '"') ADVANCE(23);
      if (lookahead == '#') ADVANCE(155);
      if (lookahead == '$') ADVANCE(97);
      if (lookahead == '%') ADVANCE(130);
      if (lookahead == '&') ADVANCE(148);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == ')') ADVANCE(123);
      if (lookahead == '*') ADVANCE(149);
      if (lookahead == '+') ADVANCE(169);
      if (lookahead == ',') ADVANCE(108);
      if (lookahead == '-') ADVANCE(280);
      if (lookahead == '.') ADVANCE(151);
      if (lookahead == '/') ADVANCE(29);
      if (lookahead == ':') ADVANCE(125);
      if (lookahead == ';') ADVANCE(109);
      if (lookahead == '>') ADVANCE(165);
      if (lookahead == '@') ADVANCE(50);
      if (lookahead == '[') ADVANCE(156);
      if (lookahead == '{') ADVANCE(115);
      if (lookahead == '~') ADVANCE(167);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(104)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(263);
      END_STATE();
    case 105:
      if (eof) ADVANCE(106);
      if (lookahead == '"') ADVANCE(23);
      if (lookahead == '#') ADVANCE(155);
      if (lookahead == '$') ADVANCE(97);
      if (lookahead == '%') ADVANCE(130);
      if (lookahead == '&') ADVANCE(148);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == '*') ADVANCE(149);
      if (lookahead == '-') ADVANCE(280);
      if (lookahead == '.') ADVANCE(151);
      if (lookahead == '/') ADVANCE(29);
      if (lookahead == ':') ADVANCE(125);
      if (lookahead == '@') ADVANCE(51);
      if (lookahead == '[') ADVANCE(156);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(105)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(263);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(anon_sym_ATimport);
      if (lookahead == 'k') ADVANCE(324);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(393);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(394);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(anon_sym_ATmedia);
      if (lookahead == 'k') ADVANCE(324);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(393);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(394);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(anon_sym_ATcharset);
      if (lookahead == 'k') ADVANCE(324);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(393);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(394);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(anon_sym_ATnamespace);
      if (lookahead == 'k') ADVANCE(324);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(393);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(394);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(anon_sym_ATkeyframes);
      if (lookahead == 'k') ADVANCE(324);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(393);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(394);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(aux_sym_keyframes_statement_token1);
      if (lookahead == 'k') ADVANCE(324);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(393);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(394);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(anon_sym_from);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(sym_to);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(anon_sym_ATsupports);
      if (lookahead == 'k') ADVANCE(324);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(393);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(394);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(anon_sym_ATuse);
      if (lookahead == 'k') ADVANCE(324);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(393);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(394);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(anon_sym_ATforward);
      if (lookahead == 'k') ADVANCE(324);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(393);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(394);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead == ':') ADVANCE(153);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(anon_sym_ATmixin);
      if (lookahead == 'k') ADVANCE(324);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(393);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(394);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(anon_sym_ATinclude);
      if (lookahead == 'k') ADVANCE(324);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(393);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(394);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(anon_sym_LPAREN2);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(anon_sym_RPAREN2);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(anon_sym_ATextend);
      if (lookahead == 'k') ADVANCE(324);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(393);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(394);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(anon_sym_ATif);
      if (lookahead == 'k') ADVANCE(324);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(393);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(394);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(anon_sym_ATelse);
      if (lookahead == 'k') ADVANCE(324);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(393);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(394);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(anon_sym_if);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(anon_sym_ATeach);
      if (lookahead == 'k') ADVANCE(324);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(393);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(394);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(anon_sym_in);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(anon_sym_ATfor);
      if (lookahead == 'k') ADVANCE(324);
      if (lookahead == 'w') ADVANCE(298);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(393);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(394);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(anon_sym_ATfor);
      if (lookahead == 'k') ADVANCE(324);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(393);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(394);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(anon_sym_through);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(anon_sym_through);
      if (lookahead == '%' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(248);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(anon_sym_ATwhile);
      if (lookahead == 'k') ADVANCE(324);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(393);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(394);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(anon_sym_ATfunction);
      if (lookahead == 'k') ADVANCE(324);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(393);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(394);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(anon_sym_ATreturn);
      if (lookahead == 'k') ADVANCE(324);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(393);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(394);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(anon_sym_ATat_DASHroot);
      if (lookahead == 'k') ADVANCE(324);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(393);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(394);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(anon_sym_ATerror);
      if (lookahead == 'k') ADVANCE(324);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(393);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(394);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(anon_sym_ATwarn);
      if (lookahead == 'k') ADVANCE(324);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(393);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(394);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(anon_sym_ATdebug);
      if (lookahead == 'k') ADVANCE(324);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(393);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(394);
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
      if (lookahead == '{') ADVANCE(90);
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
      if (lookahead == '.') ADVANCE(92);
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
      if (lookahead == '#') ADVANCE(89);
      if (lookahead == '%') ADVANCE(248);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(280);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(238);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(anon_sym_not);
      if (lookahead == '#') ADVANCE(89);
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
      if (lookahead == '#') ADVANCE(89);
      if (lookahead == '%') ADVANCE(248);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(280);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(238);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(anon_sym_only);
      if (lookahead == '#') ADVANCE(89);
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
      if (lookahead == '#') ADVANCE(89);
      if (lookahead == '%') ADVANCE(248);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(280);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(238);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(anon_sym_selector);
      if (lookahead == '#') ADVANCE(89);
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
      if (lookahead == '#') ADVANCE(89);
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
      if (lookahead == '#') ADVANCE(89);
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
      if (lookahead == '#') ADVANCE(89);
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
      if (lookahead == '#') ADVANCE(89);
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
      if (lookahead == '#') ADVANCE(89);
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
      if (lookahead == '#') ADVANCE(89);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(280);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (lookahead == '-') ADVANCE(93);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(224);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (lookahead == '-') ADVANCE(93);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(202);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(183);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (lookahead == '-') ADVANCE(93);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(205);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(209);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (lookahead == '-') ADVANCE(93);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(203);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(208);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (lookahead == '-') ADVANCE(93);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(204);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(210);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (lookahead == '-') ADVANCE(93);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(206);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(211);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (lookahead == '.') ADVANCE(92);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(34);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(217);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (lookahead == '.') ADVANCE(92);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(190);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(183);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(196);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (lookahead == '.') ADVANCE(92);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(192);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(210);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(199);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (lookahead == '.') ADVANCE(92);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(193);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(209);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(200);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (lookahead == '.') ADVANCE(92);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(191);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(208);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(197);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (lookahead == '.') ADVANCE(92);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(194);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(211);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(198);
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
      if (lookahead == '\\') ADVANCE(100);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(23);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(sym_string_value);
      if (lookahead == '\'') ADVANCE(213);
      if (lookahead == '\\') ADVANCE(101);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(28);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(aux_sym_integer_value_token1);
      if (lookahead == '#') ADVANCE(89);
      if (lookahead == '.') ADVANCE(92);
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
      if (lookahead == '.') ADVANCE(92);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(34);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(217);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(aux_sym_integer_value_token1);
      if (lookahead == '.') ADVANCE(92);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(195);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(212);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(201);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(aux_sym_integer_value_token1);
      if (lookahead == '.') ADVANCE(92);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(35);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(95);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(218);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(aux_sym_integer_value_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(220);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(aux_sym_float_value_token1);
      if (lookahead == '#') ADVANCE(89);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(221);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(280);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(aux_sym_float_value_token1);
      if (lookahead == '#') ADVANCE(402);
      if (lookahead == '/') ADVANCE(99);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(222);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(285);
      if (!sym_plain_value_character_set_1(lookahead)) ADVANCE(404);
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
      if (lookahead == '#') ADVANCE(89);
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
      if (lookahead == '#') ADVANCE(89);
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
      if (lookahead == '#') ADVANCE(89);
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
      if (lookahead == '#') ADVANCE(89);
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
      if (lookahead == '#') ADVANCE(89);
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
      if (lookahead == '#') ADVANCE(89);
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
      if (lookahead == '#') ADVANCE(89);
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
      if (lookahead == '#') ADVANCE(89);
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
      if (lookahead == '#') ADVANCE(89);
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
      if (lookahead == '#') ADVANCE(89);
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
      if (lookahead == '#') ADVANCE(89);
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
      if (lookahead == '#') ADVANCE(89);
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
      if (lookahead == '#') ADVANCE(89);
      if (lookahead == '%') ADVANCE(248);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(280);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(238);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '#') ADVANCE(402);
      if (lookahead == '%') ADVANCE(241);
      if (lookahead == '-') ADVANCE(284);
      if (lookahead == '.') ADVANCE(401);
      if (lookahead == '/') ADVANCE(99);
      if (lookahead == '_') ADVANCE(283);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(222);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(240);
      if (!sym_plain_value_character_set_1(lookahead)) ADVANCE(404);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '#') ADVANCE(402);
      if (lookahead == '%') ADVANCE(241);
      if (lookahead == '.') ADVANCE(401);
      if (lookahead == '/') ADVANCE(99);
      if (lookahead == '_') ADVANCE(283);
      if (('-' <= lookahead && lookahead <= '9')) ADVANCE(285);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(240);
      if (!sym_plain_value_character_set_1(lookahead)) ADVANCE(404);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '/') ADVANCE(99);
      if (lookahead == '%' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(241);
      if (!sym_plain_value_character_set_1(lookahead)) ADVANCE(404);
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
      if (lookahead == 'h') ADVANCE(140);
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
      if (lookahead == '#') ADVANCE(89);
      if (lookahead == '.') ADVANCE(92);
      if (lookahead == '/') ADVANCE(98);
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
      if (lookahead == '#') ADVANCE(89);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(280);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '.') ADVANCE(92);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(34);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(217);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '*') ADVANCE(32);
      if (lookahead == '/') ADVANCE(400);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '*') ADVANCE(32);
      if (lookahead == '/') ADVANCE(396);
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
      if (lookahead == '#') ADVANCE(89);
      if (lookahead == '-') ADVANCE(264);
      if (lookahead == '.') ADVANCE(27);
      if (lookahead == '/') ADVANCE(98);
      if (lookahead == '_') ADVANCE(260);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(280);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(283);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '#') ADVANCE(89);
      if (lookahead == '-') ADVANCE(277);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(221);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(280);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '#') ADVANCE(89);
      if (lookahead == '.') ADVANCE(92);
      if (lookahead == '/') ADVANCE(98);
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
      if (lookahead == '#') ADVANCE(89);
      if (lookahead == '.') ADVANCE(27);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(280);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(263);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '#') ADVANCE(89);
      if (lookahead == '/') ADVANCE(98);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(264);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(280);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(285);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '#') ADVANCE(89);
      if (lookahead == 'c') ADVANCE(275);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(280);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '#') ADVANCE(89);
      if (lookahead == 'e') ADVANCE(265);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(280);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '#') ADVANCE(89);
      if (lookahead == 'e') ADVANCE(269);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(280);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '#') ADVANCE(89);
      if (lookahead == 'l') ADVANCE(276);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(280);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '#') ADVANCE(89);
      if (lookahead == 'l') ADVANCE(266);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(280);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '#') ADVANCE(89);
      if (lookahead == 'n') ADVANCE(268);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(280);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '#') ADVANCE(89);
      if (lookahead == 'o') ADVANCE(274);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(280);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '#') ADVANCE(89);
      if (lookahead == 'o') ADVANCE(273);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(280);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '#') ADVANCE(89);
      if (lookahead == 'r') ADVANCE(182);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(280);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '#') ADVANCE(89);
      if (lookahead == 't') ADVANCE(176);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(280);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '#') ADVANCE(89);
      if (lookahead == 't') ADVANCE(272);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(280);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '#') ADVANCE(89);
      if (lookahead == 'y') ADVANCE(179);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(280);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '#') ADVANCE(89);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(221);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(280);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '#') ADVANCE(89);
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
      if (lookahead == '#') ADVANCE(89);
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
      if (lookahead == '#') ADVANCE(89);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(280);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '#') ADVANCE(402);
      if (lookahead == '-') ADVANCE(284);
      if (lookahead == '.') ADVANCE(401);
      if (lookahead == '/') ADVANCE(99);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(222);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(283);
      if (!sym_plain_value_character_set_1(lookahead)) ADVANCE(404);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '#') ADVANCE(402);
      if (lookahead == '-') ADVANCE(284);
      if (lookahead == '/') ADVANCE(99);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(222);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(285);
      if (!sym_plain_value_character_set_1(lookahead)) ADVANCE(404);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '#') ADVANCE(402);
      if (lookahead == '.') ADVANCE(401);
      if (lookahead == '/') ADVANCE(99);
      if (('-' <= lookahead && lookahead <= '9')) ADVANCE(285);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(283);
      if (!sym_plain_value_character_set_1(lookahead)) ADVANCE(404);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '#') ADVANCE(402);
      if (lookahead == '/') ADVANCE(99);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(222);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(285);
      if (!sym_plain_value_character_set_1(lookahead)) ADVANCE(404);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '#') ADVANCE(402);
      if (lookahead == '/') ADVANCE(99);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(285);
      if (!sym_plain_value_character_set_1(lookahead)) ADVANCE(404);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '/') ADVANCE(99);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      if (!sym_plain_value_character_set_1(lookahead)) ADVANCE(404);
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
      if (lookahead == '-') ADVANCE(363);
      if (lookahead == 'k') ADVANCE(324);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(393);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(394);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'a') ADVANCE(303);
      if (lookahead == 'k') ADVANCE(324);
      if (lookahead == 'l') ADVANCE(376);
      if (lookahead == 'r') ADVANCE(358);
      if (lookahead == 'x') ADVANCE(385);
      if (lookahead == '-' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(393);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(394);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'a') ADVANCE(303);
      if (lookahead == 'k') ADVANCE(324);
      if (lookahead == 'l') ADVANCE(376);
      if (lookahead == 'r') ADVANCE(358);
      if (lookahead == '-' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(393);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(394);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'a') ADVANCE(303);
      if (lookahead == 'k') ADVANCE(324);
      if (lookahead == 'r') ADVANCE(358);
      if (lookahead == 'x') ADVANCE(385);
      if (lookahead == '-' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(393);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(394);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'a') ADVANCE(303);
      if (lookahead == 'k') ADVANCE(324);
      if (lookahead == 'r') ADVANCE(358);
      if (lookahead == '-' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(393);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(394);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'a') ADVANCE(337);
      if (lookahead == 'k') ADVANCE(324);
      if (lookahead == '-' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(393);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(394);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'a') ADVANCE(110);
      if (lookahead == 'k') ADVANCE(324);
      if (lookahead == '-' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(393);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(394);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'a') ADVANCE(362);
      if (lookahead == 'h') ADVANCE(331);
      if (lookahead == 'k') ADVANCE(324);
      if (lookahead == '-' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(393);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(394);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'a') ADVANCE(305);
      if (lookahead == 'k') ADVANCE(324);
      if (lookahead == '-' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(393);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(394);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'a') ADVANCE(368);
      if (lookahead == 'k') ADVANCE(324);
      if (lookahead == '-' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(393);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(394);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'a') ADVANCE(364);
      if (lookahead == 'k') ADVANCE(324);
      if (lookahead == '-' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(393);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(394);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'a') ADVANCE(338);
      if (lookahead == 'k') ADVANCE(324);
      if (lookahead == '-' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(393);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(394);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'a') ADVANCE(339);
      if (lookahead == 'k') ADVANCE(324);
      if (lookahead == '-' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(393);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(394);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'b') ADVANCE(386);
      if (lookahead == 'k') ADVANCE(324);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(393);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(394);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'c') ADVANCE(335);
      if (lookahead == 'k') ADVANCE(324);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(393);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(394);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'c') ADVANCE(329);
      if (lookahead == 'k') ADVANCE(324);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(393);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(394);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'c') ADVANCE(384);
      if (lookahead == 'k') ADVANCE(324);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(393);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(394);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'c') ADVANCE(317);
      if (lookahead == 'k') ADVANCE(324);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(393);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(394);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'd') ADVANCE(131);
      if (lookahead == 'k') ADVANCE(324);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(393);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(394);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'd') ADVANCE(121);
      if (lookahead == 'k') ADVANCE(324);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(393);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(394);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'd') ADVANCE(332);
      if (lookahead == 'k') ADVANCE(324);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(393);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(394);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'd') ADVANCE(316);
      if (lookahead == 'k') ADVANCE(324);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(393);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(394);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'e') ADVANCE(301);
      if (lookahead == 'k') ADVANCE(324);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(393);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(394);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'e') ADVANCE(391);
      if (lookahead == 'k') ADVANCE(324);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(393);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(394);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'e') ADVANCE(308);
      if (lookahead == 'i') ADVANCE(390);
      if (lookahead == 'k') ADVANCE(324);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(393);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(394);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'e') ADVANCE(120);
      if (lookahead == 'k') ADVANCE(324);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(393);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(394);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'e') ADVANCE(133);
      if (lookahead == 'k') ADVANCE(324);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(393);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(394);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'e') ADVANCE(141);
      if (lookahead == 'k') ADVANCE(324);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(393);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(394);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'e') ADVANCE(127);
      if (lookahead == 'k') ADVANCE(324);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(393);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(394);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'e') ADVANCE(112);
      if (lookahead == 'k') ADVANCE(324);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(393);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(394);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'e') ADVANCE(374);
      if (lookahead == 'k') ADVANCE(324);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(393);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(394);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'e') ADVANCE(382);
      if (lookahead == 'k') ADVANCE(324);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(393);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(394);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'e') ADVANCE(344);
      if (lookahead == 'k') ADVANCE(324);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(393);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(394);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'e') ADVANCE(372);
      if (lookahead == 'k') ADVANCE(324);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(393);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(394);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'e') ADVANCE(373);
      if (lookahead == 'k') ADVANCE(324);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(393);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(394);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'e') ADVANCE(381);
      if (lookahead == 'k') ADVANCE(324);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(393);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(394);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'e') ADVANCE(392);
      if (lookahead == 'k') ADVANCE(324);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(393);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(394);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'f') ADVANCE(132);
      if (lookahead == 'k') ADVANCE(324);
      if (lookahead == 'm') ADVANCE(355);
      if (lookahead == 'n') ADVANCE(302);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(393);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(394);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'f') ADVANCE(369);
      if (lookahead == 'k') ADVANCE(324);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(393);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(394);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'f') ADVANCE(370);
      if (lookahead == 'k') ADVANCE(324);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(393);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(394);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'g') ADVANCE(147);
      if (lookahead == 'k') ADVANCE(324);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(393);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(394);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'h') ADVANCE(135);
      if (lookahead == 'k') ADVANCE(324);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(393);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(394);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'h') ADVANCE(297);
      if (lookahead == 'k') ADVANCE(324);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(393);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(394);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'i') ADVANCE(336);
      if (lookahead == 'k') ADVANCE(324);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(393);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(394);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'i') ADVANCE(294);
      if (lookahead == 'k') ADVANCE(324);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(393);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(394);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'i') ADVANCE(341);
      if (lookahead == 'k') ADVANCE(324);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(393);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(394);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'i') ADVANCE(351);
      if (lookahead == 'k') ADVANCE(324);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(393);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(394);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(324);
      if (lookahead == 'l') ADVANCE(388);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(393);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(394);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(324);
      if (lookahead == 'l') ADVANCE(315);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(393);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(394);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(324);
      if (lookahead == 'm') ADVANCE(318);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(393);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(394);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(324);
      if (lookahead == 'm') ADVANCE(321);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(393);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(394);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(324);
      if (lookahead == 'm') ADVANCE(322);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(393);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(394);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(324);
      if (lookahead == 'n') ADVANCE(146);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(393);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(394);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(324);
      if (lookahead == 'n') ADVANCE(126);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(393);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(394);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(324);
      if (lookahead == 'n') ADVANCE(143);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(393);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(394);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(324);
      if (lookahead == 'n') ADVANCE(142);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(393);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(394);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(324);
      if (lookahead == 'n') ADVANCE(306);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(393);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(394);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(324);
      if (lookahead == 'n') ADVANCE(304);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(393);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(394);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(324);
      if (lookahead == 'o') ADVANCE(359);
      if (lookahead == 'u') ADVANCE(345);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(393);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(394);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(324);
      if (lookahead == 'o') ADVANCE(349);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(393);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(394);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(324);
      if (lookahead == 'o') ADVANCE(360);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(393);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(394);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(324);
      if (lookahead == 'o') ADVANCE(380);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(393);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(394);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(324);
      if (lookahead == 'o') ADVANCE(365);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(393);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(394);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(324);
      if (lookahead == 'o') ADVANCE(343);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(393);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(394);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(324);
      if (lookahead == 'o') ADVANCE(367);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(393);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(394);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(324);
      if (lookahead == 'o') ADVANCE(361);
      if (lookahead == 'u') ADVANCE(345);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(393);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(394);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(324);
      if (lookahead == 'p') ADVANCE(296);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(393);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(394);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(324);
      if (lookahead == 'p') ADVANCE(350);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(393);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(394);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(324);
      if (lookahead == 'p') ADVANCE(352);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(393);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(394);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(324);
      if (lookahead == 'p') ADVANCE(356);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(393);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(394);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(324);
      if (lookahead == 'r') ADVANCE(348);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(393);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(394);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(324);
      if (lookahead == 'r') ADVANCE(137);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(393);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(394);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(324);
      if (lookahead == 'r') ADVANCE(145);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(393);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(394);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(324);
      if (lookahead == 'r') ADVANCE(138);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(393);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(394);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(324);
      if (lookahead == 'r') ADVANCE(340);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(393);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(394);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(324);
      if (lookahead == 'r') ADVANCE(347);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(393);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(394);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(324);
      if (lookahead == 'r') ADVANCE(307);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(393);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(394);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(324);
      if (lookahead == 'r') ADVANCE(379);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(393);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(394);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(324);
      if (lookahead == 'r') ADVANCE(342);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(393);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(394);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(324);
      if (lookahead == 'r') ADVANCE(383);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(393);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(394);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(324);
      if (lookahead == 'r') ADVANCE(377);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(393);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(394);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(324);
      if (lookahead == 'r') ADVANCE(299);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(393);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(394);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(324);
      if (lookahead == 'r') ADVANCE(300);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(393);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(394);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(324);
      if (lookahead == 's') ADVANCE(119);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(393);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(394);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(324);
      if (lookahead == 's') ADVANCE(113);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(393);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(394);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(324);
      if (lookahead == 's') ADVANCE(114);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(393);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(394);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(324);
      if (lookahead == 's') ADVANCE(354);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(393);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(394);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(324);
      if (lookahead == 's') ADVANCE(313);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(393);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(394);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(324);
      if (lookahead == 's') ADVANCE(314);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(393);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(394);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(324);
      if (lookahead == 's') ADVANCE(323);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(393);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(394);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(324);
      if (lookahead == 't') ADVANCE(288);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(393);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(394);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(324);
      if (lookahead == 't') ADVANCE(107);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(393);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(394);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(324);
      if (lookahead == 't') ADVANCE(144);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(393);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(394);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(324);
      if (lookahead == 't') ADVANCE(111);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(393);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(394);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(324);
      if (lookahead == 't') ADVANCE(389);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(393);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(394);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(324);
      if (lookahead == 't') ADVANCE(371);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(393);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(394);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(324);
      if (lookahead == 't') ADVANCE(334);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(393);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(394);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(324);
      if (lookahead == 't') ADVANCE(320);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(393);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(394);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(324);
      if (lookahead == 'u') ADVANCE(328);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(393);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(394);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(324);
      if (lookahead == 'u') ADVANCE(357);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(393);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(394);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(324);
      if (lookahead == 'u') ADVANCE(309);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(393);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(394);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(324);
      if (lookahead == 'u') ADVANCE(366);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(393);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(394);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(324);
      if (lookahead == 'x') ADVANCE(333);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(393);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(394);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(324);
      if (lookahead == 'y') ADVANCE(326);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(393);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(394);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(324);
      if (lookahead == 'y') ADVANCE(327);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(393);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(394);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(324);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(393);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(394);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(394);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(sym_single_line_comment);
      if (lookahead == '/') ADVANCE(398);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(396);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(397);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(400);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(sym_single_line_comment);
      if (lookahead == '/') ADVANCE(399);
      if (sym_single_line_comment_character_set_1(lookahead)) ADVANCE(400);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(397);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(sym_single_line_comment);
      if (sym_single_line_comment_character_set_2(lookahead)) ADVANCE(400);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(396);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(sym_single_line_comment);
      if (sym_single_line_comment_character_set_2(lookahead)) ADVANCE(400);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(397);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(sym_single_line_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(400);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(sym_plain_value);
      if (lookahead == '$') ADVANCE(403);
      if (lookahead == '/') ADVANCE(99);
      if (!sym_plain_value_character_set_1(lookahead)) ADVANCE(404);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(sym_plain_value);
      if (lookahead == '/') ADVANCE(99);
      if (lookahead == '{') ADVANCE(90);
      if (!sym_plain_value_character_set_3(lookahead)) ADVANCE(404);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(sym_plain_value);
      if (lookahead == '/') ADVANCE(99);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      if (!sym_plain_value_character_set_1(lookahead)) ADVANCE(404);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(sym_plain_value);
      if (lookahead == '/') ADVANCE(99);
      if (!sym_plain_value_character_set_1(lookahead)) ADVANCE(404);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 103},
  [2] = {.lex_state = 18},
  [3] = {.lex_state = 18},
  [4] = {.lex_state = 18},
  [5] = {.lex_state = 18},
  [6] = {.lex_state = 18},
  [7] = {.lex_state = 18},
  [8] = {.lex_state = 18},
  [9] = {.lex_state = 18},
  [10] = {.lex_state = 18},
  [11] = {.lex_state = 18},
  [12] = {.lex_state = 103},
  [13] = {.lex_state = 18},
  [14] = {.lex_state = 103},
  [15] = {.lex_state = 20},
  [16] = {.lex_state = 20},
  [17] = {.lex_state = 105},
  [18] = {.lex_state = 105},
  [19] = {.lex_state = 105},
  [20] = {.lex_state = 20},
  [21] = {.lex_state = 5},
  [22] = {.lex_state = 105},
  [23] = {.lex_state = 105},
  [24] = {.lex_state = 20},
  [25] = {.lex_state = 20},
  [26] = {.lex_state = 20},
  [27] = {.lex_state = 20},
  [28] = {.lex_state = 5},
  [29] = {.lex_state = 105},
  [30] = {.lex_state = 20},
  [31] = {.lex_state = 105},
  [32] = {.lex_state = 105},
  [33] = {.lex_state = 18},
  [34] = {.lex_state = 18},
  [35] = {.lex_state = 18},
  [36] = {.lex_state = 103},
  [37] = {.lex_state = 18},
  [38] = {.lex_state = 103},
  [39] = {.lex_state = 103},
  [40] = {.lex_state = 103},
  [41] = {.lex_state = 18},
  [42] = {.lex_state = 103},
  [43] = {.lex_state = 103},
  [44] = {.lex_state = 103},
  [45] = {.lex_state = 103},
  [46] = {.lex_state = 103},
  [47] = {.lex_state = 103},
  [48] = {.lex_state = 103},
  [49] = {.lex_state = 103},
  [50] = {.lex_state = 103},
  [51] = {.lex_state = 103},
  [52] = {.lex_state = 18},
  [53] = {.lex_state = 103},
  [54] = {.lex_state = 18},
  [55] = {.lex_state = 18},
  [56] = {.lex_state = 103},
  [57] = {.lex_state = 18},
  [58] = {.lex_state = 18},
  [59] = {.lex_state = 18},
  [60] = {.lex_state = 18},
  [61] = {.lex_state = 103},
  [62] = {.lex_state = 18},
  [63] = {.lex_state = 18},
  [64] = {.lex_state = 18},
  [65] = {.lex_state = 18},
  [66] = {.lex_state = 18},
  [67] = {.lex_state = 103},
  [68] = {.lex_state = 18},
  [69] = {.lex_state = 18},
  [70] = {.lex_state = 18},
  [71] = {.lex_state = 18},
  [72] = {.lex_state = 18},
  [73] = {.lex_state = 18},
  [74] = {.lex_state = 18},
  [75] = {.lex_state = 18},
  [76] = {.lex_state = 18},
  [77] = {.lex_state = 18},
  [78] = {.lex_state = 103},
  [79] = {.lex_state = 103},
  [80] = {.lex_state = 103},
  [81] = {.lex_state = 103},
  [82] = {.lex_state = 103},
  [83] = {.lex_state = 103},
  [84] = {.lex_state = 103},
  [85] = {.lex_state = 103},
  [86] = {.lex_state = 18},
  [87] = {.lex_state = 18},
  [88] = {.lex_state = 18},
  [89] = {.lex_state = 103},
  [90] = {.lex_state = 18},
  [91] = {.lex_state = 18},
  [92] = {.lex_state = 18},
  [93] = {.lex_state = 103},
  [94] = {.lex_state = 103},
  [95] = {.lex_state = 103},
  [96] = {.lex_state = 103},
  [97] = {.lex_state = 103},
  [98] = {.lex_state = 103},
  [99] = {.lex_state = 18},
  [100] = {.lex_state = 18},
  [101] = {.lex_state = 103},
  [102] = {.lex_state = 18},
  [103] = {.lex_state = 18},
  [104] = {.lex_state = 103},
  [105] = {.lex_state = 18},
  [106] = {.lex_state = 18},
  [107] = {.lex_state = 103},
  [108] = {.lex_state = 18},
  [109] = {.lex_state = 103},
  [110] = {.lex_state = 103},
  [111] = {.lex_state = 18},
  [112] = {.lex_state = 18},
  [113] = {.lex_state = 18},
  [114] = {.lex_state = 103},
  [115] = {.lex_state = 103},
  [116] = {.lex_state = 103},
  [117] = {.lex_state = 103},
  [118] = {.lex_state = 103},
  [119] = {.lex_state = 103},
  [120] = {.lex_state = 18},
  [121] = {.lex_state = 3},
  [122] = {.lex_state = 3},
  [123] = {.lex_state = 3},
  [124] = {.lex_state = 3},
  [125] = {.lex_state = 3},
  [126] = {.lex_state = 2, .external_lex_state = 1},
  [127] = {.lex_state = 3, .external_lex_state = 1},
  [128] = {.lex_state = 2},
  [129] = {.lex_state = 1},
  [130] = {.lex_state = 1},
  [131] = {.lex_state = 3},
  [132] = {.lex_state = 3},
  [133] = {.lex_state = 3},
  [134] = {.lex_state = 3},
  [135] = {.lex_state = 3},
  [136] = {.lex_state = 3},
  [137] = {.lex_state = 3},
  [138] = {.lex_state = 3},
  [139] = {.lex_state = 3},
  [140] = {.lex_state = 3},
  [141] = {.lex_state = 3},
  [142] = {.lex_state = 8},
  [143] = {.lex_state = 3},
  [144] = {.lex_state = 3},
  [145] = {.lex_state = 8},
  [146] = {.lex_state = 3},
  [147] = {.lex_state = 21},
  [148] = {.lex_state = 21},
  [149] = {.lex_state = 5},
  [150] = {.lex_state = 21},
  [151] = {.lex_state = 21},
  [152] = {.lex_state = 5},
  [153] = {.lex_state = 5},
  [154] = {.lex_state = 5},
  [155] = {.lex_state = 5},
  [156] = {.lex_state = 5},
  [157] = {.lex_state = 21},
  [158] = {.lex_state = 21},
  [159] = {.lex_state = 5},
  [160] = {.lex_state = 5},
  [161] = {.lex_state = 5},
  [162] = {.lex_state = 5},
  [163] = {.lex_state = 5},
  [164] = {.lex_state = 5},
  [165] = {.lex_state = 5},
  [166] = {.lex_state = 11},
  [167] = {.lex_state = 5},
  [168] = {.lex_state = 7},
  [169] = {.lex_state = 6},
  [170] = {.lex_state = 6},
  [171] = {.lex_state = 5},
  [172] = {.lex_state = 5},
  [173] = {.lex_state = 5},
  [174] = {.lex_state = 8},
  [175] = {.lex_state = 5},
  [176] = {.lex_state = 5},
  [177] = {.lex_state = 14},
  [178] = {.lex_state = 8},
  [179] = {.lex_state = 14},
  [180] = {.lex_state = 11},
  [181] = {.lex_state = 8},
  [182] = {.lex_state = 8},
  [183] = {.lex_state = 5},
  [184] = {.lex_state = 8},
  [185] = {.lex_state = 8},
  [186] = {.lex_state = 11},
  [187] = {.lex_state = 11},
  [188] = {.lex_state = 8},
  [189] = {.lex_state = 11},
  [190] = {.lex_state = 11},
  [191] = {.lex_state = 11},
  [192] = {.lex_state = 8},
  [193] = {.lex_state = 8},
  [194] = {.lex_state = 5},
  [195] = {.lex_state = 5},
  [196] = {.lex_state = 11},
  [197] = {.lex_state = 8},
  [198] = {.lex_state = 11},
  [199] = {.lex_state = 5},
  [200] = {.lex_state = 11},
  [201] = {.lex_state = 8},
  [202] = {.lex_state = 11},
  [203] = {.lex_state = 11},
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
  [238] = {.lex_state = 5},
  [239] = {.lex_state = 5},
  [240] = {.lex_state = 5},
  [241] = {.lex_state = 5},
  [242] = {.lex_state = 5},
  [243] = {.lex_state = 5},
  [244] = {.lex_state = 5},
  [245] = {.lex_state = 5},
  [246] = {.lex_state = 5},
  [247] = {.lex_state = 5},
  [248] = {.lex_state = 5},
  [249] = {.lex_state = 5},
  [250] = {.lex_state = 5},
  [251] = {.lex_state = 5},
  [252] = {.lex_state = 24},
  [253] = {.lex_state = 103, .external_lex_state = 1},
  [254] = {.lex_state = 10},
  [255] = {.lex_state = 103, .external_lex_state = 1},
  [256] = {.lex_state = 24},
  [257] = {.lex_state = 10},
  [258] = {.lex_state = 10},
  [259] = {.lex_state = 10},
  [260] = {.lex_state = 103, .external_lex_state = 1},
  [261] = {.lex_state = 103, .external_lex_state = 1},
  [262] = {.lex_state = 103, .external_lex_state = 1},
  [263] = {.lex_state = 103, .external_lex_state = 1},
  [264] = {.lex_state = 16},
  [265] = {.lex_state = 103, .external_lex_state = 1},
  [266] = {.lex_state = 11},
  [267] = {.lex_state = 11},
  [268] = {.lex_state = 11},
  [269] = {.lex_state = 103, .external_lex_state = 1},
  [270] = {.lex_state = 103, .external_lex_state = 1},
  [271] = {.lex_state = 11},
  [272] = {.lex_state = 11},
  [273] = {.lex_state = 11},
  [274] = {.lex_state = 11},
  [275] = {.lex_state = 10},
  [276] = {.lex_state = 10},
  [277] = {.lex_state = 10},
  [278] = {.lex_state = 11},
  [279] = {.lex_state = 11},
  [280] = {.lex_state = 103, .external_lex_state = 1},
  [281] = {.lex_state = 11},
  [282] = {.lex_state = 10},
  [283] = {.lex_state = 10},
  [284] = {.lex_state = 16},
  [285] = {.lex_state = 103, .external_lex_state = 1},
  [286] = {.lex_state = 10},
  [287] = {.lex_state = 11},
  [288] = {.lex_state = 10},
  [289] = {.lex_state = 103, .external_lex_state = 1},
  [290] = {.lex_state = 103, .external_lex_state = 1},
  [291] = {.lex_state = 103, .external_lex_state = 1},
  [292] = {.lex_state = 103, .external_lex_state = 1},
  [293] = {.lex_state = 10},
  [294] = {.lex_state = 11},
  [295] = {.lex_state = 103, .external_lex_state = 1},
  [296] = {.lex_state = 103, .external_lex_state = 1},
  [297] = {.lex_state = 10},
  [298] = {.lex_state = 10},
  [299] = {.lex_state = 103, .external_lex_state = 1},
  [300] = {.lex_state = 10},
  [301] = {.lex_state = 10},
  [302] = {.lex_state = 11},
  [303] = {.lex_state = 10},
  [304] = {.lex_state = 11},
  [305] = {.lex_state = 103, .external_lex_state = 1},
  [306] = {.lex_state = 103, .external_lex_state = 1},
  [307] = {.lex_state = 103, .external_lex_state = 1},
  [308] = {.lex_state = 103, .external_lex_state = 1},
  [309] = {.lex_state = 103, .external_lex_state = 1},
  [310] = {.lex_state = 103, .external_lex_state = 1},
  [311] = {.lex_state = 103, .external_lex_state = 1},
  [312] = {.lex_state = 103, .external_lex_state = 1},
  [313] = {.lex_state = 11},
  [314] = {.lex_state = 24},
  [315] = {.lex_state = 24},
  [316] = {.lex_state = 24},
  [317] = {.lex_state = 11},
  [318] = {.lex_state = 24},
  [319] = {.lex_state = 11},
  [320] = {.lex_state = 103, .external_lex_state = 1},
  [321] = {.lex_state = 11},
  [322] = {.lex_state = 11},
  [323] = {.lex_state = 11},
  [324] = {.lex_state = 11},
  [325] = {.lex_state = 11},
  [326] = {.lex_state = 11},
  [327] = {.lex_state = 103, .external_lex_state = 1},
  [328] = {.lex_state = 11},
  [329] = {.lex_state = 24},
  [330] = {.lex_state = 103, .external_lex_state = 1},
  [331] = {.lex_state = 24},
  [332] = {.lex_state = 11},
  [333] = {.lex_state = 11},
  [334] = {.lex_state = 11},
  [335] = {.lex_state = 11},
  [336] = {.lex_state = 24},
  [337] = {.lex_state = 11},
  [338] = {.lex_state = 24},
  [339] = {.lex_state = 11},
  [340] = {.lex_state = 11},
  [341] = {.lex_state = 11},
  [342] = {.lex_state = 11},
  [343] = {.lex_state = 103, .external_lex_state = 1},
  [344] = {.lex_state = 11},
  [345] = {.lex_state = 103, .external_lex_state = 1},
  [346] = {.lex_state = 91},
  [347] = {.lex_state = 91},
  [348] = {.lex_state = 91},
  [349] = {.lex_state = 91},
  [350] = {.lex_state = 91},
  [351] = {.lex_state = 0},
  [352] = {.lex_state = 24},
  [353] = {.lex_state = 24},
  [354] = {.lex_state = 0},
  [355] = {.lex_state = 0},
  [356] = {.lex_state = 11},
  [357] = {.lex_state = 0},
  [358] = {.lex_state = 11},
  [359] = {.lex_state = 11},
  [360] = {.lex_state = 11},
  [361] = {.lex_state = 11},
  [362] = {.lex_state = 11},
  [363] = {.lex_state = 0},
  [364] = {.lex_state = 0},
  [365] = {.lex_state = 0},
  [366] = {.lex_state = 0},
  [367] = {.lex_state = 0},
  [368] = {.lex_state = 0},
  [369] = {.lex_state = 0},
  [370] = {.lex_state = 21},
  [371] = {.lex_state = 21},
  [372] = {.lex_state = 18},
  [373] = {.lex_state = 0},
  [374] = {.lex_state = 18},
  [375] = {.lex_state = 18},
  [376] = {.lex_state = 103},
  [377] = {.lex_state = 91},
  [378] = {.lex_state = 91},
  [379] = {.lex_state = 0},
  [380] = {.lex_state = 0},
  [381] = {.lex_state = 91},
  [382] = {.lex_state = 0},
  [383] = {.lex_state = 91},
  [384] = {.lex_state = 103},
  [385] = {.lex_state = 103},
  [386] = {.lex_state = 18},
  [387] = {.lex_state = 103},
  [388] = {.lex_state = 103},
  [389] = {.lex_state = 0},
  [390] = {.lex_state = 11},
  [391] = {.lex_state = 0},
  [392] = {.lex_state = 18},
  [393] = {.lex_state = 103},
  [394] = {.lex_state = 18},
  [395] = {.lex_state = 103},
  [396] = {.lex_state = 103},
  [397] = {.lex_state = 0},
  [398] = {.lex_state = 0},
  [399] = {.lex_state = 103},
  [400] = {.lex_state = 0},
  [401] = {.lex_state = 11},
  [402] = {.lex_state = 103},
  [403] = {.lex_state = 0},
  [404] = {.lex_state = 103},
  [405] = {.lex_state = 18},
  [406] = {.lex_state = 21},
  [407] = {.lex_state = 0},
  [408] = {.lex_state = 21},
  [409] = {.lex_state = 0},
  [410] = {.lex_state = 0},
  [411] = {.lex_state = 0},
  [412] = {.lex_state = 0},
  [413] = {.lex_state = 0},
  [414] = {.lex_state = 0},
  [415] = {.lex_state = 0},
  [416] = {.lex_state = 0},
  [417] = {.lex_state = 0},
  [418] = {.lex_state = 0},
  [419] = {.lex_state = 103},
  [420] = {.lex_state = 0},
  [421] = {.lex_state = 0},
  [422] = {.lex_state = 0},
  [423] = {.lex_state = 14},
  [424] = {.lex_state = 0},
  [425] = {.lex_state = 103},
  [426] = {.lex_state = 0},
  [427] = {.lex_state = 0},
  [428] = {.lex_state = 0},
  [429] = {.lex_state = 18},
  [430] = {.lex_state = 0},
  [431] = {.lex_state = 25},
  [432] = {.lex_state = 0},
  [433] = {.lex_state = 103},
  [434] = {.lex_state = 21},
  [435] = {.lex_state = 0},
  [436] = {.lex_state = 0},
  [437] = {.lex_state = 0},
  [438] = {.lex_state = 0},
  [439] = {.lex_state = 0},
  [440] = {.lex_state = 0},
  [441] = {.lex_state = 11},
  [442] = {.lex_state = 21},
  [443] = {.lex_state = 21},
  [444] = {.lex_state = 0},
  [445] = {.lex_state = 0},
  [446] = {.lex_state = 21},
  [447] = {.lex_state = 0},
  [448] = {.lex_state = 0},
  [449] = {.lex_state = 0},
  [450] = {.lex_state = 11},
  [451] = {.lex_state = 103},
  [452] = {.lex_state = 0},
  [453] = {.lex_state = 103},
  [454] = {.lex_state = 0},
  [455] = {.lex_state = 21},
  [456] = {.lex_state = 0},
  [457] = {.lex_state = 0},
  [458] = {.lex_state = 21},
  [459] = {.lex_state = 0},
  [460] = {.lex_state = 0},
  [461] = {.lex_state = 21},
  [462] = {.lex_state = 0},
  [463] = {.lex_state = 0},
  [464] = {.lex_state = 0},
  [465] = {.lex_state = 21},
  [466] = {.lex_state = 21},
  [467] = {.lex_state = 21},
  [468] = {.lex_state = 0},
  [469] = {.lex_state = 21},
  [470] = {.lex_state = 21},
  [471] = {.lex_state = 0},
  [472] = {.lex_state = 0},
  [473] = {.lex_state = 21},
  [474] = {.lex_state = 103},
  [475] = {.lex_state = 0},
  [476] = {.lex_state = 0},
  [477] = {.lex_state = 0},
  [478] = {.lex_state = 11},
  [479] = {.lex_state = 21},
  [480] = {.lex_state = 21},
  [481] = {.lex_state = 11},
  [482] = {.lex_state = 18},
  [483] = {.lex_state = 0},
  [484] = {.lex_state = 21},
  [485] = {.lex_state = 0},
  [486] = {.lex_state = 21},
  [487] = {.lex_state = 21},
  [488] = {.lex_state = 0},
  [489] = {.lex_state = 0},
  [490] = {.lex_state = 21},
  [491] = {.lex_state = 0},
  [492] = {.lex_state = 0},
  [493] = {.lex_state = 103},
  [494] = {.lex_state = 103},
  [495] = {.lex_state = 0},
  [496] = {.lex_state = 0},
  [497] = {.lex_state = 103},
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
    [anon_sym_ATat_DASHroot] = ACTIONS(1),
    [anon_sym_ATerror] = ACTIONS(1),
    [anon_sym_ATwarn] = ACTIONS(1),
    [anon_sym_ATdebug] = ACTIONS(1),
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
    [sym_stylesheet] = STATE(435),
    [sym_import_statement] = STATE(12),
    [sym_media_statement] = STATE(12),
    [sym_charset_statement] = STATE(12),
    [sym_namespace_statement] = STATE(12),
    [sym_keyframes_statement] = STATE(12),
    [sym_supports_statement] = STATE(12),
    [sym_at_rule] = STATE(12),
    [sym_use_statement] = STATE(12),
    [sym_forward_statement] = STATE(12),
    [sym_mixin_statement] = STATE(12),
    [sym_include_statement] = STATE(12),
    [sym_placeholder] = STATE(12),
    [sym_if_statement] = STATE(12),
    [sym_if_clause] = STATE(18),
    [sym_each_statement] = STATE(12),
    [sym_for_statement] = STATE(12),
    [sym_while_statement] = STATE(12),
    [sym_function_statement] = STATE(12),
    [sym_error_statement] = STATE(12),
    [sym_warn_statement] = STATE(12),
    [sym_debug_statement] = STATE(12),
    [sym_rule_set] = STATE(12),
    [sym_selectors] = STATE(430),
    [sym__selector] = STATE(263),
    [sym_universal_selector] = STATE(263),
    [sym_class_selector] = STATE(263),
    [sym_pseudo_class_selector] = STATE(263),
    [sym_pseudo_element_selector] = STATE(263),
    [sym_id_selector] = STATE(263),
    [sym_attribute_selector] = STATE(263),
    [sym_child_selector] = STATE(263),
    [sym_descendant_selector] = STATE(263),
    [sym_sibling_selector] = STATE(263),
    [sym_adjacent_sibling_selector] = STATE(263),
    [sym_declaration] = STATE(12),
    [aux_sym_stylesheet_repeat1] = STATE(12),
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
    [anon_sym_ATerror] = ACTIONS(41),
    [anon_sym_ATwarn] = ACTIONS(43),
    [anon_sym_ATdebug] = ACTIONS(45),
    [sym_nesting_selector] = ACTIONS(47),
    [anon_sym_STAR] = ACTIONS(49),
    [anon_sym_DOT] = ACTIONS(51),
    [anon_sym_COLON_COLON] = ACTIONS(53),
    [anon_sym_POUND] = ACTIONS(55),
    [anon_sym_LBRACK] = ACTIONS(57),
    [sym_string_value] = ACTIONS(47),
    [sym_identifier] = ACTIONS(59),
    [sym_variable_identifier] = ACTIONS(61),
    [sym_at_keyword] = ACTIONS(63),
    [sym_comment] = ACTIONS(3),
    [sym_single_line_comment] = ACTIONS(3),
  },
  [2] = {
    [sym_import_statement] = STATE(13),
    [sym_media_statement] = STATE(13),
    [sym_charset_statement] = STATE(13),
    [sym_namespace_statement] = STATE(13),
    [sym_keyframes_statement] = STATE(13),
    [sym_supports_statement] = STATE(13),
    [sym_at_rule] = STATE(13),
    [sym_mixin_statement] = STATE(13),
    [sym_include_statement] = STATE(13),
    [sym_extend_statement] = STATE(13),
    [sym_if_statement] = STATE(13),
    [sym_if_clause] = STATE(15),
    [sym_each_statement] = STATE(13),
    [sym_for_statement] = STATE(13),
    [sym_while_statement] = STATE(13),
    [sym_function_statement] = STATE(13),
    [sym_return_statement] = STATE(13),
    [sym_at_root_statement] = STATE(13),
    [sym_error_statement] = STATE(13),
    [sym_warn_statement] = STATE(13),
    [sym_debug_statement] = STATE(13),
    [sym_rule_set] = STATE(13),
    [sym_selectors] = STATE(411),
    [sym__selector] = STATE(263),
    [sym_universal_selector] = STATE(263),
    [sym_class_selector] = STATE(263),
    [sym_pseudo_class_selector] = STATE(263),
    [sym_pseudo_element_selector] = STATE(263),
    [sym_id_selector] = STATE(263),
    [sym_attribute_selector] = STATE(263),
    [sym_child_selector] = STATE(263),
    [sym_descendant_selector] = STATE(263),
    [sym_sibling_selector] = STATE(263),
    [sym_adjacent_sibling_selector] = STATE(263),
    [sym_declaration] = STATE(13),
    [sym_last_declaration] = STATE(495),
    [aux_sym_block_repeat1] = STATE(13),
    [anon_sym_ATimport] = ACTIONS(65),
    [anon_sym_ATmedia] = ACTIONS(67),
    [anon_sym_ATcharset] = ACTIONS(69),
    [anon_sym_ATnamespace] = ACTIONS(71),
    [anon_sym_ATkeyframes] = ACTIONS(73),
    [aux_sym_keyframes_statement_token1] = ACTIONS(73),
    [anon_sym_RBRACE] = ACTIONS(75),
    [anon_sym_ATsupports] = ACTIONS(77),
    [anon_sym_COLON] = ACTIONS(23),
    [anon_sym_ATmixin] = ACTIONS(79),
    [anon_sym_ATinclude] = ACTIONS(81),
    [anon_sym_ATextend] = ACTIONS(83),
    [anon_sym_ATif] = ACTIONS(85),
    [anon_sym_ATeach] = ACTIONS(87),
    [anon_sym_ATfor] = ACTIONS(89),
    [anon_sym_ATwhile] = ACTIONS(91),
    [anon_sym_ATfunction] = ACTIONS(93),
    [anon_sym_ATreturn] = ACTIONS(95),
    [anon_sym_ATat_DASHroot] = ACTIONS(97),
    [anon_sym_ATerror] = ACTIONS(99),
    [anon_sym_ATwarn] = ACTIONS(101),
    [anon_sym_ATdebug] = ACTIONS(103),
    [sym_nesting_selector] = ACTIONS(47),
    [anon_sym_STAR] = ACTIONS(49),
    [anon_sym_DOT] = ACTIONS(51),
    [anon_sym_COLON_COLON] = ACTIONS(53),
    [anon_sym_POUND] = ACTIONS(55),
    [anon_sym_LBRACK] = ACTIONS(57),
    [sym_string_value] = ACTIONS(47),
    [sym_identifier] = ACTIONS(105),
    [sym_variable_identifier] = ACTIONS(107),
    [sym_at_keyword] = ACTIONS(109),
    [sym_comment] = ACTIONS(3),
    [sym_single_line_comment] = ACTIONS(3),
  },
  [3] = {
    [sym_import_statement] = STATE(13),
    [sym_media_statement] = STATE(13),
    [sym_charset_statement] = STATE(13),
    [sym_namespace_statement] = STATE(13),
    [sym_keyframes_statement] = STATE(13),
    [sym_supports_statement] = STATE(13),
    [sym_at_rule] = STATE(13),
    [sym_mixin_statement] = STATE(13),
    [sym_include_statement] = STATE(13),
    [sym_extend_statement] = STATE(13),
    [sym_if_statement] = STATE(13),
    [sym_if_clause] = STATE(15),
    [sym_each_statement] = STATE(13),
    [sym_for_statement] = STATE(13),
    [sym_while_statement] = STATE(13),
    [sym_function_statement] = STATE(13),
    [sym_return_statement] = STATE(13),
    [sym_at_root_statement] = STATE(13),
    [sym_error_statement] = STATE(13),
    [sym_warn_statement] = STATE(13),
    [sym_debug_statement] = STATE(13),
    [sym_rule_set] = STATE(13),
    [sym_selectors] = STATE(411),
    [sym__selector] = STATE(263),
    [sym_universal_selector] = STATE(263),
    [sym_class_selector] = STATE(263),
    [sym_pseudo_class_selector] = STATE(263),
    [sym_pseudo_element_selector] = STATE(263),
    [sym_id_selector] = STATE(263),
    [sym_attribute_selector] = STATE(263),
    [sym_child_selector] = STATE(263),
    [sym_descendant_selector] = STATE(263),
    [sym_sibling_selector] = STATE(263),
    [sym_adjacent_sibling_selector] = STATE(263),
    [sym_declaration] = STATE(13),
    [sym_last_declaration] = STATE(462),
    [aux_sym_block_repeat1] = STATE(13),
    [anon_sym_ATimport] = ACTIONS(65),
    [anon_sym_ATmedia] = ACTIONS(67),
    [anon_sym_ATcharset] = ACTIONS(69),
    [anon_sym_ATnamespace] = ACTIONS(71),
    [anon_sym_ATkeyframes] = ACTIONS(73),
    [aux_sym_keyframes_statement_token1] = ACTIONS(73),
    [anon_sym_RBRACE] = ACTIONS(111),
    [anon_sym_ATsupports] = ACTIONS(77),
    [anon_sym_COLON] = ACTIONS(23),
    [anon_sym_ATmixin] = ACTIONS(79),
    [anon_sym_ATinclude] = ACTIONS(81),
    [anon_sym_ATextend] = ACTIONS(83),
    [anon_sym_ATif] = ACTIONS(85),
    [anon_sym_ATeach] = ACTIONS(87),
    [anon_sym_ATfor] = ACTIONS(89),
    [anon_sym_ATwhile] = ACTIONS(91),
    [anon_sym_ATfunction] = ACTIONS(93),
    [anon_sym_ATreturn] = ACTIONS(95),
    [anon_sym_ATat_DASHroot] = ACTIONS(97),
    [anon_sym_ATerror] = ACTIONS(99),
    [anon_sym_ATwarn] = ACTIONS(101),
    [anon_sym_ATdebug] = ACTIONS(103),
    [sym_nesting_selector] = ACTIONS(47),
    [anon_sym_STAR] = ACTIONS(49),
    [anon_sym_DOT] = ACTIONS(51),
    [anon_sym_COLON_COLON] = ACTIONS(53),
    [anon_sym_POUND] = ACTIONS(55),
    [anon_sym_LBRACK] = ACTIONS(57),
    [sym_string_value] = ACTIONS(47),
    [sym_identifier] = ACTIONS(105),
    [sym_variable_identifier] = ACTIONS(107),
    [sym_at_keyword] = ACTIONS(109),
    [sym_comment] = ACTIONS(3),
    [sym_single_line_comment] = ACTIONS(3),
  },
  [4] = {
    [sym_import_statement] = STATE(3),
    [sym_media_statement] = STATE(3),
    [sym_charset_statement] = STATE(3),
    [sym_namespace_statement] = STATE(3),
    [sym_keyframes_statement] = STATE(3),
    [sym_supports_statement] = STATE(3),
    [sym_at_rule] = STATE(3),
    [sym_mixin_statement] = STATE(3),
    [sym_include_statement] = STATE(3),
    [sym_extend_statement] = STATE(3),
    [sym_if_statement] = STATE(3),
    [sym_if_clause] = STATE(15),
    [sym_each_statement] = STATE(3),
    [sym_for_statement] = STATE(3),
    [sym_while_statement] = STATE(3),
    [sym_function_statement] = STATE(3),
    [sym_return_statement] = STATE(3),
    [sym_at_root_statement] = STATE(3),
    [sym_error_statement] = STATE(3),
    [sym_warn_statement] = STATE(3),
    [sym_debug_statement] = STATE(3),
    [sym_rule_set] = STATE(3),
    [sym_selectors] = STATE(411),
    [sym__selector] = STATE(263),
    [sym_universal_selector] = STATE(263),
    [sym_class_selector] = STATE(263),
    [sym_pseudo_class_selector] = STATE(263),
    [sym_pseudo_element_selector] = STATE(263),
    [sym_id_selector] = STATE(263),
    [sym_attribute_selector] = STATE(263),
    [sym_child_selector] = STATE(263),
    [sym_descendant_selector] = STATE(263),
    [sym_sibling_selector] = STATE(263),
    [sym_adjacent_sibling_selector] = STATE(263),
    [sym_declaration] = STATE(3),
    [sym_last_declaration] = STATE(460),
    [aux_sym_block_repeat1] = STATE(3),
    [anon_sym_ATimport] = ACTIONS(65),
    [anon_sym_ATmedia] = ACTIONS(67),
    [anon_sym_ATcharset] = ACTIONS(69),
    [anon_sym_ATnamespace] = ACTIONS(71),
    [anon_sym_ATkeyframes] = ACTIONS(73),
    [aux_sym_keyframes_statement_token1] = ACTIONS(73),
    [anon_sym_RBRACE] = ACTIONS(113),
    [anon_sym_ATsupports] = ACTIONS(77),
    [anon_sym_COLON] = ACTIONS(23),
    [anon_sym_ATmixin] = ACTIONS(79),
    [anon_sym_ATinclude] = ACTIONS(81),
    [anon_sym_ATextend] = ACTIONS(83),
    [anon_sym_ATif] = ACTIONS(85),
    [anon_sym_ATeach] = ACTIONS(87),
    [anon_sym_ATfor] = ACTIONS(89),
    [anon_sym_ATwhile] = ACTIONS(91),
    [anon_sym_ATfunction] = ACTIONS(93),
    [anon_sym_ATreturn] = ACTIONS(95),
    [anon_sym_ATat_DASHroot] = ACTIONS(97),
    [anon_sym_ATerror] = ACTIONS(99),
    [anon_sym_ATwarn] = ACTIONS(101),
    [anon_sym_ATdebug] = ACTIONS(103),
    [sym_nesting_selector] = ACTIONS(47),
    [anon_sym_STAR] = ACTIONS(49),
    [anon_sym_DOT] = ACTIONS(51),
    [anon_sym_COLON_COLON] = ACTIONS(53),
    [anon_sym_POUND] = ACTIONS(55),
    [anon_sym_LBRACK] = ACTIONS(57),
    [sym_string_value] = ACTIONS(47),
    [sym_identifier] = ACTIONS(105),
    [sym_variable_identifier] = ACTIONS(107),
    [sym_at_keyword] = ACTIONS(109),
    [sym_comment] = ACTIONS(3),
    [sym_single_line_comment] = ACTIONS(3),
  },
  [5] = {
    [sym_import_statement] = STATE(2),
    [sym_media_statement] = STATE(2),
    [sym_charset_statement] = STATE(2),
    [sym_namespace_statement] = STATE(2),
    [sym_keyframes_statement] = STATE(2),
    [sym_supports_statement] = STATE(2),
    [sym_at_rule] = STATE(2),
    [sym_mixin_statement] = STATE(2),
    [sym_include_statement] = STATE(2),
    [sym_extend_statement] = STATE(2),
    [sym_if_statement] = STATE(2),
    [sym_if_clause] = STATE(15),
    [sym_each_statement] = STATE(2),
    [sym_for_statement] = STATE(2),
    [sym_while_statement] = STATE(2),
    [sym_function_statement] = STATE(2),
    [sym_return_statement] = STATE(2),
    [sym_at_root_statement] = STATE(2),
    [sym_error_statement] = STATE(2),
    [sym_warn_statement] = STATE(2),
    [sym_debug_statement] = STATE(2),
    [sym_rule_set] = STATE(2),
    [sym_selectors] = STATE(411),
    [sym__selector] = STATE(263),
    [sym_universal_selector] = STATE(263),
    [sym_class_selector] = STATE(263),
    [sym_pseudo_class_selector] = STATE(263),
    [sym_pseudo_element_selector] = STATE(263),
    [sym_id_selector] = STATE(263),
    [sym_attribute_selector] = STATE(263),
    [sym_child_selector] = STATE(263),
    [sym_descendant_selector] = STATE(263),
    [sym_sibling_selector] = STATE(263),
    [sym_adjacent_sibling_selector] = STATE(263),
    [sym_declaration] = STATE(2),
    [sym_last_declaration] = STATE(472),
    [aux_sym_block_repeat1] = STATE(2),
    [anon_sym_ATimport] = ACTIONS(65),
    [anon_sym_ATmedia] = ACTIONS(67),
    [anon_sym_ATcharset] = ACTIONS(69),
    [anon_sym_ATnamespace] = ACTIONS(71),
    [anon_sym_ATkeyframes] = ACTIONS(73),
    [aux_sym_keyframes_statement_token1] = ACTIONS(73),
    [anon_sym_RBRACE] = ACTIONS(115),
    [anon_sym_ATsupports] = ACTIONS(77),
    [anon_sym_COLON] = ACTIONS(23),
    [anon_sym_ATmixin] = ACTIONS(79),
    [anon_sym_ATinclude] = ACTIONS(81),
    [anon_sym_ATextend] = ACTIONS(83),
    [anon_sym_ATif] = ACTIONS(85),
    [anon_sym_ATeach] = ACTIONS(87),
    [anon_sym_ATfor] = ACTIONS(89),
    [anon_sym_ATwhile] = ACTIONS(91),
    [anon_sym_ATfunction] = ACTIONS(93),
    [anon_sym_ATreturn] = ACTIONS(95),
    [anon_sym_ATat_DASHroot] = ACTIONS(97),
    [anon_sym_ATerror] = ACTIONS(99),
    [anon_sym_ATwarn] = ACTIONS(101),
    [anon_sym_ATdebug] = ACTIONS(103),
    [sym_nesting_selector] = ACTIONS(47),
    [anon_sym_STAR] = ACTIONS(49),
    [anon_sym_DOT] = ACTIONS(51),
    [anon_sym_COLON_COLON] = ACTIONS(53),
    [anon_sym_POUND] = ACTIONS(55),
    [anon_sym_LBRACK] = ACTIONS(57),
    [sym_string_value] = ACTIONS(47),
    [sym_identifier] = ACTIONS(105),
    [sym_variable_identifier] = ACTIONS(107),
    [sym_at_keyword] = ACTIONS(109),
    [sym_comment] = ACTIONS(3),
    [sym_single_line_comment] = ACTIONS(3),
  },
  [6] = {
    [sym_import_statement] = STATE(13),
    [sym_media_statement] = STATE(13),
    [sym_charset_statement] = STATE(13),
    [sym_namespace_statement] = STATE(13),
    [sym_keyframes_statement] = STATE(13),
    [sym_supports_statement] = STATE(13),
    [sym_at_rule] = STATE(13),
    [sym_mixin_statement] = STATE(13),
    [sym_include_statement] = STATE(13),
    [sym_extend_statement] = STATE(13),
    [sym_if_statement] = STATE(13),
    [sym_if_clause] = STATE(15),
    [sym_each_statement] = STATE(13),
    [sym_for_statement] = STATE(13),
    [sym_while_statement] = STATE(13),
    [sym_function_statement] = STATE(13),
    [sym_return_statement] = STATE(13),
    [sym_at_root_statement] = STATE(13),
    [sym_error_statement] = STATE(13),
    [sym_warn_statement] = STATE(13),
    [sym_debug_statement] = STATE(13),
    [sym_rule_set] = STATE(13),
    [sym_selectors] = STATE(411),
    [sym__selector] = STATE(263),
    [sym_universal_selector] = STATE(263),
    [sym_class_selector] = STATE(263),
    [sym_pseudo_class_selector] = STATE(263),
    [sym_pseudo_element_selector] = STATE(263),
    [sym_id_selector] = STATE(263),
    [sym_attribute_selector] = STATE(263),
    [sym_child_selector] = STATE(263),
    [sym_descendant_selector] = STATE(263),
    [sym_sibling_selector] = STATE(263),
    [sym_adjacent_sibling_selector] = STATE(263),
    [sym_declaration] = STATE(13),
    [sym_last_declaration] = STATE(457),
    [aux_sym_block_repeat1] = STATE(13),
    [anon_sym_ATimport] = ACTIONS(65),
    [anon_sym_ATmedia] = ACTIONS(67),
    [anon_sym_ATcharset] = ACTIONS(69),
    [anon_sym_ATnamespace] = ACTIONS(71),
    [anon_sym_ATkeyframes] = ACTIONS(73),
    [aux_sym_keyframes_statement_token1] = ACTIONS(73),
    [anon_sym_RBRACE] = ACTIONS(117),
    [anon_sym_ATsupports] = ACTIONS(77),
    [anon_sym_COLON] = ACTIONS(23),
    [anon_sym_ATmixin] = ACTIONS(79),
    [anon_sym_ATinclude] = ACTIONS(81),
    [anon_sym_ATextend] = ACTIONS(83),
    [anon_sym_ATif] = ACTIONS(85),
    [anon_sym_ATeach] = ACTIONS(87),
    [anon_sym_ATfor] = ACTIONS(89),
    [anon_sym_ATwhile] = ACTIONS(91),
    [anon_sym_ATfunction] = ACTIONS(93),
    [anon_sym_ATreturn] = ACTIONS(95),
    [anon_sym_ATat_DASHroot] = ACTIONS(97),
    [anon_sym_ATerror] = ACTIONS(99),
    [anon_sym_ATwarn] = ACTIONS(101),
    [anon_sym_ATdebug] = ACTIONS(103),
    [sym_nesting_selector] = ACTIONS(47),
    [anon_sym_STAR] = ACTIONS(49),
    [anon_sym_DOT] = ACTIONS(51),
    [anon_sym_COLON_COLON] = ACTIONS(53),
    [anon_sym_POUND] = ACTIONS(55),
    [anon_sym_LBRACK] = ACTIONS(57),
    [sym_string_value] = ACTIONS(47),
    [sym_identifier] = ACTIONS(105),
    [sym_variable_identifier] = ACTIONS(107),
    [sym_at_keyword] = ACTIONS(109),
    [sym_comment] = ACTIONS(3),
    [sym_single_line_comment] = ACTIONS(3),
  },
  [7] = {
    [sym_import_statement] = STATE(10),
    [sym_media_statement] = STATE(10),
    [sym_charset_statement] = STATE(10),
    [sym_namespace_statement] = STATE(10),
    [sym_keyframes_statement] = STATE(10),
    [sym_supports_statement] = STATE(10),
    [sym_at_rule] = STATE(10),
    [sym_mixin_statement] = STATE(10),
    [sym_include_statement] = STATE(10),
    [sym_extend_statement] = STATE(10),
    [sym_if_statement] = STATE(10),
    [sym_if_clause] = STATE(15),
    [sym_each_statement] = STATE(10),
    [sym_for_statement] = STATE(10),
    [sym_while_statement] = STATE(10),
    [sym_function_statement] = STATE(10),
    [sym_return_statement] = STATE(10),
    [sym_at_root_statement] = STATE(10),
    [sym_error_statement] = STATE(10),
    [sym_warn_statement] = STATE(10),
    [sym_debug_statement] = STATE(10),
    [sym_rule_set] = STATE(10),
    [sym_selectors] = STATE(411),
    [sym__selector] = STATE(263),
    [sym_universal_selector] = STATE(263),
    [sym_class_selector] = STATE(263),
    [sym_pseudo_class_selector] = STATE(263),
    [sym_pseudo_element_selector] = STATE(263),
    [sym_id_selector] = STATE(263),
    [sym_attribute_selector] = STATE(263),
    [sym_child_selector] = STATE(263),
    [sym_descendant_selector] = STATE(263),
    [sym_sibling_selector] = STATE(263),
    [sym_adjacent_sibling_selector] = STATE(263),
    [sym_declaration] = STATE(10),
    [sym_last_declaration] = STATE(456),
    [aux_sym_block_repeat1] = STATE(10),
    [anon_sym_ATimport] = ACTIONS(65),
    [anon_sym_ATmedia] = ACTIONS(67),
    [anon_sym_ATcharset] = ACTIONS(69),
    [anon_sym_ATnamespace] = ACTIONS(71),
    [anon_sym_ATkeyframes] = ACTIONS(73),
    [aux_sym_keyframes_statement_token1] = ACTIONS(73),
    [anon_sym_RBRACE] = ACTIONS(119),
    [anon_sym_ATsupports] = ACTIONS(77),
    [anon_sym_COLON] = ACTIONS(23),
    [anon_sym_ATmixin] = ACTIONS(79),
    [anon_sym_ATinclude] = ACTIONS(81),
    [anon_sym_ATextend] = ACTIONS(83),
    [anon_sym_ATif] = ACTIONS(85),
    [anon_sym_ATeach] = ACTIONS(87),
    [anon_sym_ATfor] = ACTIONS(89),
    [anon_sym_ATwhile] = ACTIONS(91),
    [anon_sym_ATfunction] = ACTIONS(93),
    [anon_sym_ATreturn] = ACTIONS(95),
    [anon_sym_ATat_DASHroot] = ACTIONS(97),
    [anon_sym_ATerror] = ACTIONS(99),
    [anon_sym_ATwarn] = ACTIONS(101),
    [anon_sym_ATdebug] = ACTIONS(103),
    [sym_nesting_selector] = ACTIONS(47),
    [anon_sym_STAR] = ACTIONS(49),
    [anon_sym_DOT] = ACTIONS(51),
    [anon_sym_COLON_COLON] = ACTIONS(53),
    [anon_sym_POUND] = ACTIONS(55),
    [anon_sym_LBRACK] = ACTIONS(57),
    [sym_string_value] = ACTIONS(47),
    [sym_identifier] = ACTIONS(105),
    [sym_variable_identifier] = ACTIONS(107),
    [sym_at_keyword] = ACTIONS(109),
    [sym_comment] = ACTIONS(3),
    [sym_single_line_comment] = ACTIONS(3),
  },
  [8] = {
    [sym_import_statement] = STATE(6),
    [sym_media_statement] = STATE(6),
    [sym_charset_statement] = STATE(6),
    [sym_namespace_statement] = STATE(6),
    [sym_keyframes_statement] = STATE(6),
    [sym_supports_statement] = STATE(6),
    [sym_at_rule] = STATE(6),
    [sym_mixin_statement] = STATE(6),
    [sym_include_statement] = STATE(6),
    [sym_extend_statement] = STATE(6),
    [sym_if_statement] = STATE(6),
    [sym_if_clause] = STATE(15),
    [sym_each_statement] = STATE(6),
    [sym_for_statement] = STATE(6),
    [sym_while_statement] = STATE(6),
    [sym_function_statement] = STATE(6),
    [sym_return_statement] = STATE(6),
    [sym_at_root_statement] = STATE(6),
    [sym_error_statement] = STATE(6),
    [sym_warn_statement] = STATE(6),
    [sym_debug_statement] = STATE(6),
    [sym_rule_set] = STATE(6),
    [sym_selectors] = STATE(411),
    [sym__selector] = STATE(263),
    [sym_universal_selector] = STATE(263),
    [sym_class_selector] = STATE(263),
    [sym_pseudo_class_selector] = STATE(263),
    [sym_pseudo_element_selector] = STATE(263),
    [sym_id_selector] = STATE(263),
    [sym_attribute_selector] = STATE(263),
    [sym_child_selector] = STATE(263),
    [sym_descendant_selector] = STATE(263),
    [sym_sibling_selector] = STATE(263),
    [sym_adjacent_sibling_selector] = STATE(263),
    [sym_declaration] = STATE(6),
    [sym_last_declaration] = STATE(454),
    [aux_sym_block_repeat1] = STATE(6),
    [anon_sym_ATimport] = ACTIONS(65),
    [anon_sym_ATmedia] = ACTIONS(67),
    [anon_sym_ATcharset] = ACTIONS(69),
    [anon_sym_ATnamespace] = ACTIONS(71),
    [anon_sym_ATkeyframes] = ACTIONS(73),
    [aux_sym_keyframes_statement_token1] = ACTIONS(73),
    [anon_sym_RBRACE] = ACTIONS(121),
    [anon_sym_ATsupports] = ACTIONS(77),
    [anon_sym_COLON] = ACTIONS(23),
    [anon_sym_ATmixin] = ACTIONS(79),
    [anon_sym_ATinclude] = ACTIONS(81),
    [anon_sym_ATextend] = ACTIONS(83),
    [anon_sym_ATif] = ACTIONS(85),
    [anon_sym_ATeach] = ACTIONS(87),
    [anon_sym_ATfor] = ACTIONS(89),
    [anon_sym_ATwhile] = ACTIONS(91),
    [anon_sym_ATfunction] = ACTIONS(93),
    [anon_sym_ATreturn] = ACTIONS(95),
    [anon_sym_ATat_DASHroot] = ACTIONS(97),
    [anon_sym_ATerror] = ACTIONS(99),
    [anon_sym_ATwarn] = ACTIONS(101),
    [anon_sym_ATdebug] = ACTIONS(103),
    [sym_nesting_selector] = ACTIONS(47),
    [anon_sym_STAR] = ACTIONS(49),
    [anon_sym_DOT] = ACTIONS(51),
    [anon_sym_COLON_COLON] = ACTIONS(53),
    [anon_sym_POUND] = ACTIONS(55),
    [anon_sym_LBRACK] = ACTIONS(57),
    [sym_string_value] = ACTIONS(47),
    [sym_identifier] = ACTIONS(105),
    [sym_variable_identifier] = ACTIONS(107),
    [sym_at_keyword] = ACTIONS(109),
    [sym_comment] = ACTIONS(3),
    [sym_single_line_comment] = ACTIONS(3),
  },
  [9] = {
    [sym_import_statement] = STATE(13),
    [sym_media_statement] = STATE(13),
    [sym_charset_statement] = STATE(13),
    [sym_namespace_statement] = STATE(13),
    [sym_keyframes_statement] = STATE(13),
    [sym_supports_statement] = STATE(13),
    [sym_at_rule] = STATE(13),
    [sym_mixin_statement] = STATE(13),
    [sym_include_statement] = STATE(13),
    [sym_extend_statement] = STATE(13),
    [sym_if_statement] = STATE(13),
    [sym_if_clause] = STATE(15),
    [sym_each_statement] = STATE(13),
    [sym_for_statement] = STATE(13),
    [sym_while_statement] = STATE(13),
    [sym_function_statement] = STATE(13),
    [sym_return_statement] = STATE(13),
    [sym_at_root_statement] = STATE(13),
    [sym_error_statement] = STATE(13),
    [sym_warn_statement] = STATE(13),
    [sym_debug_statement] = STATE(13),
    [sym_rule_set] = STATE(13),
    [sym_selectors] = STATE(411),
    [sym__selector] = STATE(263),
    [sym_universal_selector] = STATE(263),
    [sym_class_selector] = STATE(263),
    [sym_pseudo_class_selector] = STATE(263),
    [sym_pseudo_element_selector] = STATE(263),
    [sym_id_selector] = STATE(263),
    [sym_attribute_selector] = STATE(263),
    [sym_child_selector] = STATE(263),
    [sym_descendant_selector] = STATE(263),
    [sym_sibling_selector] = STATE(263),
    [sym_adjacent_sibling_selector] = STATE(263),
    [sym_declaration] = STATE(13),
    [sym_last_declaration] = STATE(448),
    [aux_sym_block_repeat1] = STATE(13),
    [anon_sym_ATimport] = ACTIONS(65),
    [anon_sym_ATmedia] = ACTIONS(67),
    [anon_sym_ATcharset] = ACTIONS(69),
    [anon_sym_ATnamespace] = ACTIONS(71),
    [anon_sym_ATkeyframes] = ACTIONS(73),
    [aux_sym_keyframes_statement_token1] = ACTIONS(73),
    [anon_sym_RBRACE] = ACTIONS(123),
    [anon_sym_ATsupports] = ACTIONS(77),
    [anon_sym_COLON] = ACTIONS(23),
    [anon_sym_ATmixin] = ACTIONS(79),
    [anon_sym_ATinclude] = ACTIONS(81),
    [anon_sym_ATextend] = ACTIONS(83),
    [anon_sym_ATif] = ACTIONS(85),
    [anon_sym_ATeach] = ACTIONS(87),
    [anon_sym_ATfor] = ACTIONS(89),
    [anon_sym_ATwhile] = ACTIONS(91),
    [anon_sym_ATfunction] = ACTIONS(93),
    [anon_sym_ATreturn] = ACTIONS(95),
    [anon_sym_ATat_DASHroot] = ACTIONS(97),
    [anon_sym_ATerror] = ACTIONS(99),
    [anon_sym_ATwarn] = ACTIONS(101),
    [anon_sym_ATdebug] = ACTIONS(103),
    [sym_nesting_selector] = ACTIONS(47),
    [anon_sym_STAR] = ACTIONS(49),
    [anon_sym_DOT] = ACTIONS(51),
    [anon_sym_COLON_COLON] = ACTIONS(53),
    [anon_sym_POUND] = ACTIONS(55),
    [anon_sym_LBRACK] = ACTIONS(57),
    [sym_string_value] = ACTIONS(47),
    [sym_identifier] = ACTIONS(105),
    [sym_variable_identifier] = ACTIONS(107),
    [sym_at_keyword] = ACTIONS(109),
    [sym_comment] = ACTIONS(3),
    [sym_single_line_comment] = ACTIONS(3),
  },
  [10] = {
    [sym_import_statement] = STATE(13),
    [sym_media_statement] = STATE(13),
    [sym_charset_statement] = STATE(13),
    [sym_namespace_statement] = STATE(13),
    [sym_keyframes_statement] = STATE(13),
    [sym_supports_statement] = STATE(13),
    [sym_at_rule] = STATE(13),
    [sym_mixin_statement] = STATE(13),
    [sym_include_statement] = STATE(13),
    [sym_extend_statement] = STATE(13),
    [sym_if_statement] = STATE(13),
    [sym_if_clause] = STATE(15),
    [sym_each_statement] = STATE(13),
    [sym_for_statement] = STATE(13),
    [sym_while_statement] = STATE(13),
    [sym_function_statement] = STATE(13),
    [sym_return_statement] = STATE(13),
    [sym_at_root_statement] = STATE(13),
    [sym_error_statement] = STATE(13),
    [sym_warn_statement] = STATE(13),
    [sym_debug_statement] = STATE(13),
    [sym_rule_set] = STATE(13),
    [sym_selectors] = STATE(411),
    [sym__selector] = STATE(263),
    [sym_universal_selector] = STATE(263),
    [sym_class_selector] = STATE(263),
    [sym_pseudo_class_selector] = STATE(263),
    [sym_pseudo_element_selector] = STATE(263),
    [sym_id_selector] = STATE(263),
    [sym_attribute_selector] = STATE(263),
    [sym_child_selector] = STATE(263),
    [sym_descendant_selector] = STATE(263),
    [sym_sibling_selector] = STATE(263),
    [sym_adjacent_sibling_selector] = STATE(263),
    [sym_declaration] = STATE(13),
    [sym_last_declaration] = STATE(436),
    [aux_sym_block_repeat1] = STATE(13),
    [anon_sym_ATimport] = ACTIONS(65),
    [anon_sym_ATmedia] = ACTIONS(67),
    [anon_sym_ATcharset] = ACTIONS(69),
    [anon_sym_ATnamespace] = ACTIONS(71),
    [anon_sym_ATkeyframes] = ACTIONS(73),
    [aux_sym_keyframes_statement_token1] = ACTIONS(73),
    [anon_sym_RBRACE] = ACTIONS(125),
    [anon_sym_ATsupports] = ACTIONS(77),
    [anon_sym_COLON] = ACTIONS(23),
    [anon_sym_ATmixin] = ACTIONS(79),
    [anon_sym_ATinclude] = ACTIONS(81),
    [anon_sym_ATextend] = ACTIONS(83),
    [anon_sym_ATif] = ACTIONS(85),
    [anon_sym_ATeach] = ACTIONS(87),
    [anon_sym_ATfor] = ACTIONS(89),
    [anon_sym_ATwhile] = ACTIONS(91),
    [anon_sym_ATfunction] = ACTIONS(93),
    [anon_sym_ATreturn] = ACTIONS(95),
    [anon_sym_ATat_DASHroot] = ACTIONS(97),
    [anon_sym_ATerror] = ACTIONS(99),
    [anon_sym_ATwarn] = ACTIONS(101),
    [anon_sym_ATdebug] = ACTIONS(103),
    [sym_nesting_selector] = ACTIONS(47),
    [anon_sym_STAR] = ACTIONS(49),
    [anon_sym_DOT] = ACTIONS(51),
    [anon_sym_COLON_COLON] = ACTIONS(53),
    [anon_sym_POUND] = ACTIONS(55),
    [anon_sym_LBRACK] = ACTIONS(57),
    [sym_string_value] = ACTIONS(47),
    [sym_identifier] = ACTIONS(105),
    [sym_variable_identifier] = ACTIONS(107),
    [sym_at_keyword] = ACTIONS(109),
    [sym_comment] = ACTIONS(3),
    [sym_single_line_comment] = ACTIONS(3),
  },
  [11] = {
    [sym_import_statement] = STATE(9),
    [sym_media_statement] = STATE(9),
    [sym_charset_statement] = STATE(9),
    [sym_namespace_statement] = STATE(9),
    [sym_keyframes_statement] = STATE(9),
    [sym_supports_statement] = STATE(9),
    [sym_at_rule] = STATE(9),
    [sym_mixin_statement] = STATE(9),
    [sym_include_statement] = STATE(9),
    [sym_extend_statement] = STATE(9),
    [sym_if_statement] = STATE(9),
    [sym_if_clause] = STATE(15),
    [sym_each_statement] = STATE(9),
    [sym_for_statement] = STATE(9),
    [sym_while_statement] = STATE(9),
    [sym_function_statement] = STATE(9),
    [sym_return_statement] = STATE(9),
    [sym_at_root_statement] = STATE(9),
    [sym_error_statement] = STATE(9),
    [sym_warn_statement] = STATE(9),
    [sym_debug_statement] = STATE(9),
    [sym_rule_set] = STATE(9),
    [sym_selectors] = STATE(411),
    [sym__selector] = STATE(263),
    [sym_universal_selector] = STATE(263),
    [sym_class_selector] = STATE(263),
    [sym_pseudo_class_selector] = STATE(263),
    [sym_pseudo_element_selector] = STATE(263),
    [sym_id_selector] = STATE(263),
    [sym_attribute_selector] = STATE(263),
    [sym_child_selector] = STATE(263),
    [sym_descendant_selector] = STATE(263),
    [sym_sibling_selector] = STATE(263),
    [sym_adjacent_sibling_selector] = STATE(263),
    [sym_declaration] = STATE(9),
    [sym_last_declaration] = STATE(445),
    [aux_sym_block_repeat1] = STATE(9),
    [anon_sym_ATimport] = ACTIONS(65),
    [anon_sym_ATmedia] = ACTIONS(67),
    [anon_sym_ATcharset] = ACTIONS(69),
    [anon_sym_ATnamespace] = ACTIONS(71),
    [anon_sym_ATkeyframes] = ACTIONS(73),
    [aux_sym_keyframes_statement_token1] = ACTIONS(73),
    [anon_sym_RBRACE] = ACTIONS(127),
    [anon_sym_ATsupports] = ACTIONS(77),
    [anon_sym_COLON] = ACTIONS(23),
    [anon_sym_ATmixin] = ACTIONS(79),
    [anon_sym_ATinclude] = ACTIONS(81),
    [anon_sym_ATextend] = ACTIONS(83),
    [anon_sym_ATif] = ACTIONS(85),
    [anon_sym_ATeach] = ACTIONS(87),
    [anon_sym_ATfor] = ACTIONS(89),
    [anon_sym_ATwhile] = ACTIONS(91),
    [anon_sym_ATfunction] = ACTIONS(93),
    [anon_sym_ATreturn] = ACTIONS(95),
    [anon_sym_ATat_DASHroot] = ACTIONS(97),
    [anon_sym_ATerror] = ACTIONS(99),
    [anon_sym_ATwarn] = ACTIONS(101),
    [anon_sym_ATdebug] = ACTIONS(103),
    [sym_nesting_selector] = ACTIONS(47),
    [anon_sym_STAR] = ACTIONS(49),
    [anon_sym_DOT] = ACTIONS(51),
    [anon_sym_COLON_COLON] = ACTIONS(53),
    [anon_sym_POUND] = ACTIONS(55),
    [anon_sym_LBRACK] = ACTIONS(57),
    [sym_string_value] = ACTIONS(47),
    [sym_identifier] = ACTIONS(105),
    [sym_variable_identifier] = ACTIONS(107),
    [sym_at_keyword] = ACTIONS(109),
    [sym_comment] = ACTIONS(3),
    [sym_single_line_comment] = ACTIONS(3),
  },
  [12] = {
    [sym_import_statement] = STATE(14),
    [sym_media_statement] = STATE(14),
    [sym_charset_statement] = STATE(14),
    [sym_namespace_statement] = STATE(14),
    [sym_keyframes_statement] = STATE(14),
    [sym_supports_statement] = STATE(14),
    [sym_at_rule] = STATE(14),
    [sym_use_statement] = STATE(14),
    [sym_forward_statement] = STATE(14),
    [sym_mixin_statement] = STATE(14),
    [sym_include_statement] = STATE(14),
    [sym_placeholder] = STATE(14),
    [sym_if_statement] = STATE(14),
    [sym_if_clause] = STATE(18),
    [sym_each_statement] = STATE(14),
    [sym_for_statement] = STATE(14),
    [sym_while_statement] = STATE(14),
    [sym_function_statement] = STATE(14),
    [sym_error_statement] = STATE(14),
    [sym_warn_statement] = STATE(14),
    [sym_debug_statement] = STATE(14),
    [sym_rule_set] = STATE(14),
    [sym_selectors] = STATE(430),
    [sym__selector] = STATE(263),
    [sym_universal_selector] = STATE(263),
    [sym_class_selector] = STATE(263),
    [sym_pseudo_class_selector] = STATE(263),
    [sym_pseudo_element_selector] = STATE(263),
    [sym_id_selector] = STATE(263),
    [sym_attribute_selector] = STATE(263),
    [sym_child_selector] = STATE(263),
    [sym_descendant_selector] = STATE(263),
    [sym_sibling_selector] = STATE(263),
    [sym_adjacent_sibling_selector] = STATE(263),
    [sym_declaration] = STATE(14),
    [aux_sym_stylesheet_repeat1] = STATE(14),
    [ts_builtin_sym_end] = ACTIONS(129),
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
    [anon_sym_ATerror] = ACTIONS(41),
    [anon_sym_ATwarn] = ACTIONS(43),
    [anon_sym_ATdebug] = ACTIONS(45),
    [sym_nesting_selector] = ACTIONS(47),
    [anon_sym_STAR] = ACTIONS(49),
    [anon_sym_DOT] = ACTIONS(51),
    [anon_sym_COLON_COLON] = ACTIONS(53),
    [anon_sym_POUND] = ACTIONS(55),
    [anon_sym_LBRACK] = ACTIONS(57),
    [sym_string_value] = ACTIONS(47),
    [sym_identifier] = ACTIONS(59),
    [sym_variable_identifier] = ACTIONS(61),
    [sym_at_keyword] = ACTIONS(63),
    [sym_comment] = ACTIONS(3),
    [sym_single_line_comment] = ACTIONS(3),
  },
  [13] = {
    [sym_import_statement] = STATE(13),
    [sym_media_statement] = STATE(13),
    [sym_charset_statement] = STATE(13),
    [sym_namespace_statement] = STATE(13),
    [sym_keyframes_statement] = STATE(13),
    [sym_supports_statement] = STATE(13),
    [sym_at_rule] = STATE(13),
    [sym_mixin_statement] = STATE(13),
    [sym_include_statement] = STATE(13),
    [sym_extend_statement] = STATE(13),
    [sym_if_statement] = STATE(13),
    [sym_if_clause] = STATE(15),
    [sym_each_statement] = STATE(13),
    [sym_for_statement] = STATE(13),
    [sym_while_statement] = STATE(13),
    [sym_function_statement] = STATE(13),
    [sym_return_statement] = STATE(13),
    [sym_at_root_statement] = STATE(13),
    [sym_error_statement] = STATE(13),
    [sym_warn_statement] = STATE(13),
    [sym_debug_statement] = STATE(13),
    [sym_rule_set] = STATE(13),
    [sym_selectors] = STATE(411),
    [sym__selector] = STATE(263),
    [sym_universal_selector] = STATE(263),
    [sym_class_selector] = STATE(263),
    [sym_pseudo_class_selector] = STATE(263),
    [sym_pseudo_element_selector] = STATE(263),
    [sym_id_selector] = STATE(263),
    [sym_attribute_selector] = STATE(263),
    [sym_child_selector] = STATE(263),
    [sym_descendant_selector] = STATE(263),
    [sym_sibling_selector] = STATE(263),
    [sym_adjacent_sibling_selector] = STATE(263),
    [sym_declaration] = STATE(13),
    [aux_sym_block_repeat1] = STATE(13),
    [anon_sym_ATimport] = ACTIONS(131),
    [anon_sym_ATmedia] = ACTIONS(134),
    [anon_sym_ATcharset] = ACTIONS(137),
    [anon_sym_ATnamespace] = ACTIONS(140),
    [anon_sym_ATkeyframes] = ACTIONS(143),
    [aux_sym_keyframes_statement_token1] = ACTIONS(143),
    [anon_sym_RBRACE] = ACTIONS(146),
    [anon_sym_ATsupports] = ACTIONS(148),
    [anon_sym_COLON] = ACTIONS(151),
    [anon_sym_ATmixin] = ACTIONS(154),
    [anon_sym_ATinclude] = ACTIONS(157),
    [anon_sym_ATextend] = ACTIONS(160),
    [anon_sym_ATif] = ACTIONS(163),
    [anon_sym_ATeach] = ACTIONS(166),
    [anon_sym_ATfor] = ACTIONS(169),
    [anon_sym_ATwhile] = ACTIONS(172),
    [anon_sym_ATfunction] = ACTIONS(175),
    [anon_sym_ATreturn] = ACTIONS(178),
    [anon_sym_ATat_DASHroot] = ACTIONS(181),
    [anon_sym_ATerror] = ACTIONS(184),
    [anon_sym_ATwarn] = ACTIONS(187),
    [anon_sym_ATdebug] = ACTIONS(190),
    [sym_nesting_selector] = ACTIONS(193),
    [anon_sym_STAR] = ACTIONS(196),
    [anon_sym_DOT] = ACTIONS(199),
    [anon_sym_COLON_COLON] = ACTIONS(202),
    [anon_sym_POUND] = ACTIONS(205),
    [anon_sym_LBRACK] = ACTIONS(208),
    [sym_string_value] = ACTIONS(193),
    [sym_identifier] = ACTIONS(211),
    [sym_variable_identifier] = ACTIONS(214),
    [sym_at_keyword] = ACTIONS(217),
    [sym_comment] = ACTIONS(3),
    [sym_single_line_comment] = ACTIONS(3),
  },
  [14] = {
    [sym_import_statement] = STATE(14),
    [sym_media_statement] = STATE(14),
    [sym_charset_statement] = STATE(14),
    [sym_namespace_statement] = STATE(14),
    [sym_keyframes_statement] = STATE(14),
    [sym_supports_statement] = STATE(14),
    [sym_at_rule] = STATE(14),
    [sym_use_statement] = STATE(14),
    [sym_forward_statement] = STATE(14),
    [sym_mixin_statement] = STATE(14),
    [sym_include_statement] = STATE(14),
    [sym_placeholder] = STATE(14),
    [sym_if_statement] = STATE(14),
    [sym_if_clause] = STATE(18),
    [sym_each_statement] = STATE(14),
    [sym_for_statement] = STATE(14),
    [sym_while_statement] = STATE(14),
    [sym_function_statement] = STATE(14),
    [sym_error_statement] = STATE(14),
    [sym_warn_statement] = STATE(14),
    [sym_debug_statement] = STATE(14),
    [sym_rule_set] = STATE(14),
    [sym_selectors] = STATE(430),
    [sym__selector] = STATE(263),
    [sym_universal_selector] = STATE(263),
    [sym_class_selector] = STATE(263),
    [sym_pseudo_class_selector] = STATE(263),
    [sym_pseudo_element_selector] = STATE(263),
    [sym_id_selector] = STATE(263),
    [sym_attribute_selector] = STATE(263),
    [sym_child_selector] = STATE(263),
    [sym_descendant_selector] = STATE(263),
    [sym_sibling_selector] = STATE(263),
    [sym_adjacent_sibling_selector] = STATE(263),
    [sym_declaration] = STATE(14),
    [aux_sym_stylesheet_repeat1] = STATE(14),
    [ts_builtin_sym_end] = ACTIONS(220),
    [anon_sym_ATimport] = ACTIONS(222),
    [anon_sym_ATmedia] = ACTIONS(225),
    [anon_sym_ATcharset] = ACTIONS(228),
    [anon_sym_ATnamespace] = ACTIONS(231),
    [anon_sym_ATkeyframes] = ACTIONS(234),
    [aux_sym_keyframes_statement_token1] = ACTIONS(234),
    [anon_sym_ATsupports] = ACTIONS(237),
    [anon_sym_ATuse] = ACTIONS(240),
    [anon_sym_ATforward] = ACTIONS(243),
    [anon_sym_COLON] = ACTIONS(246),
    [anon_sym_ATmixin] = ACTIONS(249),
    [anon_sym_ATinclude] = ACTIONS(252),
    [anon_sym_PERCENT] = ACTIONS(255),
    [anon_sym_ATif] = ACTIONS(258),
    [anon_sym_ATeach] = ACTIONS(261),
    [anon_sym_ATfor] = ACTIONS(264),
    [anon_sym_ATwhile] = ACTIONS(267),
    [anon_sym_ATfunction] = ACTIONS(270),
    [anon_sym_ATerror] = ACTIONS(273),
    [anon_sym_ATwarn] = ACTIONS(276),
    [anon_sym_ATdebug] = ACTIONS(279),
    [sym_nesting_selector] = ACTIONS(282),
    [anon_sym_STAR] = ACTIONS(285),
    [anon_sym_DOT] = ACTIONS(288),
    [anon_sym_COLON_COLON] = ACTIONS(291),
    [anon_sym_POUND] = ACTIONS(294),
    [anon_sym_LBRACK] = ACTIONS(297),
    [sym_string_value] = ACTIONS(282),
    [sym_identifier] = ACTIONS(300),
    [sym_variable_identifier] = ACTIONS(303),
    [sym_at_keyword] = ACTIONS(306),
    [sym_comment] = ACTIONS(3),
    [sym_single_line_comment] = ACTIONS(3),
  },
};

static uint16_t ts_small_parse_table[] = {
  [0] = 6,
    ACTIONS(313), 1,
      anon_sym_ATelse,
    STATE(91), 1,
      sym_else_clause,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    STATE(16), 2,
      sym_else_if_clause,
      aux_sym_if_statement_repeat1,
    ACTIONS(311), 8,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(309), 24,
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
      anon_sym_ATat_DASHroot,
      anon_sym_ATerror,
      anon_sym_ATwarn,
      anon_sym_ATdebug,
      anon_sym_POUND,
      sym_identifier,
      sym_at_keyword,
  [51] = 6,
    ACTIONS(313), 1,
      anon_sym_ATelse,
    STATE(86), 1,
      sym_else_clause,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    STATE(20), 2,
      sym_else_if_clause,
      aux_sym_if_statement_repeat1,
    ACTIONS(317), 8,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(315), 24,
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
      anon_sym_ATat_DASHroot,
      anon_sym_ATerror,
      anon_sym_ATwarn,
      anon_sym_ATdebug,
      anon_sym_POUND,
      sym_identifier,
      sym_at_keyword,
  [102] = 6,
    ACTIONS(319), 1,
      anon_sym_ATelse,
    STATE(80), 1,
      sym_else_clause,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    STATE(19), 2,
      sym_else_if_clause,
      aux_sym_if_statement_repeat1,
    ACTIONS(317), 9,
      ts_builtin_sym_end,
      anon_sym_PERCENT,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(315), 23,
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
      anon_sym_ATerror,
      anon_sym_ATwarn,
      anon_sym_ATdebug,
      anon_sym_POUND,
      sym_identifier,
      sym_at_keyword,
  [153] = 6,
    ACTIONS(319), 1,
      anon_sym_ATelse,
    STATE(81), 1,
      sym_else_clause,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    STATE(17), 2,
      sym_else_if_clause,
      aux_sym_if_statement_repeat1,
    ACTIONS(311), 9,
      ts_builtin_sym_end,
      anon_sym_PERCENT,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(309), 23,
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
      anon_sym_ATerror,
      anon_sym_ATwarn,
      anon_sym_ATdebug,
      anon_sym_POUND,
      sym_identifier,
      sym_at_keyword,
  [204] = 5,
    ACTIONS(325), 1,
      anon_sym_ATelse,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    STATE(19), 2,
      sym_else_if_clause,
      aux_sym_if_statement_repeat1,
    ACTIONS(321), 9,
      ts_builtin_sym_end,
      anon_sym_PERCENT,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(323), 23,
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
      anon_sym_ATerror,
      anon_sym_ATwarn,
      anon_sym_ATdebug,
      anon_sym_POUND,
      sym_identifier,
      sym_at_keyword,
  [252] = 5,
    ACTIONS(328), 1,
      anon_sym_ATelse,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    STATE(20), 2,
      sym_else_if_clause,
      aux_sym_if_statement_repeat1,
    ACTIONS(321), 8,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(323), 24,
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
      anon_sym_ATat_DASHroot,
      anon_sym_ATerror,
      anon_sym_ATwarn,
      anon_sym_ATdebug,
      anon_sym_POUND,
      sym_identifier,
      sym_at_keyword,
  [300] = 20,
    ACTIONS(23), 1,
      anon_sym_COLON,
    ACTIONS(49), 1,
      anon_sym_STAR,
    ACTIONS(53), 1,
      anon_sym_COLON_COLON,
    ACTIONS(57), 1,
      anon_sym_LBRACK,
    ACTIONS(331), 1,
      anon_sym_LPAREN,
    ACTIONS(333), 1,
      anon_sym_RPAREN,
    ACTIONS(335), 1,
      sym_nesting_selector,
    ACTIONS(337), 1,
      anon_sym_DOT,
    ACTIONS(339), 1,
      anon_sym_POUND,
    ACTIONS(341), 1,
      sym_string_value,
    ACTIONS(343), 1,
      aux_sym_integer_value_token1,
    ACTIONS(345), 1,
      aux_sym_float_value_token1,
    ACTIONS(347), 1,
      sym_identifier,
    ACTIONS(349), 1,
      sym_variable_identifier,
    ACTIONS(351), 1,
      sym_plain_value,
    STATE(146), 1,
      sym__value,
    STATE(165), 1,
      aux_sym_pseudo_class_arguments_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    STATE(134), 6,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
    STATE(306), 11,
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
  [377] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(353), 9,
      ts_builtin_sym_end,
      anon_sym_PERCENT,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(355), 24,
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
      anon_sym_ATerror,
      anon_sym_ATwarn,
      anon_sym_ATdebug,
      anon_sym_POUND,
      sym_identifier,
      sym_at_keyword,
  [419] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(357), 9,
      ts_builtin_sym_end,
      anon_sym_PERCENT,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(359), 24,
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
      anon_sym_ATerror,
      anon_sym_ATwarn,
      anon_sym_ATdebug,
      anon_sym_POUND,
      sym_identifier,
      sym_at_keyword,
  [461] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(353), 8,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(355), 25,
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
      anon_sym_ATat_DASHroot,
      anon_sym_ATerror,
      anon_sym_ATwarn,
      anon_sym_ATdebug,
      anon_sym_POUND,
      sym_identifier,
      sym_at_keyword,
  [503] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(363), 8,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(361), 25,
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
      anon_sym_ATat_DASHroot,
      anon_sym_ATerror,
      anon_sym_ATwarn,
      anon_sym_ATdebug,
      anon_sym_POUND,
      sym_identifier,
      sym_at_keyword,
  [545] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(367), 8,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(365), 25,
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
      anon_sym_ATat_DASHroot,
      anon_sym_ATerror,
      anon_sym_ATwarn,
      anon_sym_ATdebug,
      anon_sym_POUND,
      sym_identifier,
      sym_at_keyword,
  [587] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(371), 8,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(369), 25,
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
      anon_sym_ATat_DASHroot,
      anon_sym_ATerror,
      anon_sym_ATwarn,
      anon_sym_ATdebug,
      anon_sym_POUND,
      sym_identifier,
      sym_at_keyword,
  [629] = 19,
    ACTIONS(23), 1,
      anon_sym_COLON,
    ACTIONS(49), 1,
      anon_sym_STAR,
    ACTIONS(53), 1,
      anon_sym_COLON_COLON,
    ACTIONS(57), 1,
      anon_sym_LBRACK,
    ACTIONS(331), 1,
      anon_sym_LPAREN,
    ACTIONS(337), 1,
      anon_sym_DOT,
    ACTIONS(339), 1,
      anon_sym_POUND,
    ACTIONS(341), 1,
      sym_string_value,
    ACTIONS(343), 1,
      aux_sym_integer_value_token1,
    ACTIONS(345), 1,
      aux_sym_float_value_token1,
    ACTIONS(347), 1,
      sym_identifier,
    ACTIONS(349), 1,
      sym_variable_identifier,
    ACTIONS(351), 1,
      sym_plain_value,
    ACTIONS(373), 1,
      sym_nesting_selector,
    STATE(146), 1,
      sym__value,
    STATE(167), 1,
      aux_sym_pseudo_class_arguments_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    STATE(134), 6,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
    STATE(343), 11,
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
  [703] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(371), 9,
      ts_builtin_sym_end,
      anon_sym_PERCENT,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(369), 24,
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
      anon_sym_ATerror,
      anon_sym_ATwarn,
      anon_sym_ATdebug,
      anon_sym_POUND,
      sym_identifier,
      sym_at_keyword,
  [745] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(357), 8,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(359), 25,
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
      anon_sym_ATat_DASHroot,
      anon_sym_ATerror,
      anon_sym_ATwarn,
      anon_sym_ATdebug,
      anon_sym_POUND,
      sym_identifier,
      sym_at_keyword,
  [787] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(363), 9,
      ts_builtin_sym_end,
      anon_sym_PERCENT,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(361), 24,
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
      anon_sym_ATerror,
      anon_sym_ATwarn,
      anon_sym_ATdebug,
      anon_sym_POUND,
      sym_identifier,
      sym_at_keyword,
  [829] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(367), 9,
      ts_builtin_sym_end,
      anon_sym_PERCENT,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(365), 24,
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
      anon_sym_ATerror,
      anon_sym_ATwarn,
      anon_sym_ATdebug,
      anon_sym_POUND,
      sym_identifier,
      sym_at_keyword,
  [871] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(377), 8,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(375), 24,
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
      anon_sym_ATat_DASHroot,
      anon_sym_ATerror,
      anon_sym_ATwarn,
      anon_sym_ATdebug,
      anon_sym_POUND,
      sym_identifier,
      sym_at_keyword,
  [912] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(381), 8,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(379), 24,
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
      anon_sym_ATat_DASHroot,
      anon_sym_ATerror,
      anon_sym_ATwarn,
      anon_sym_ATdebug,
      anon_sym_POUND,
      sym_identifier,
      sym_at_keyword,
  [953] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(363), 8,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(361), 24,
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
      anon_sym_ATat_DASHroot,
      anon_sym_ATerror,
      anon_sym_ATwarn,
      anon_sym_ATdebug,
      anon_sym_POUND,
      sym_identifier,
      sym_at_keyword,
  [994] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(383), 9,
      ts_builtin_sym_end,
      anon_sym_PERCENT,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(385), 23,
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
      anon_sym_ATerror,
      anon_sym_ATwarn,
      anon_sym_ATdebug,
      anon_sym_POUND,
      sym_identifier,
      sym_at_keyword,
  [1035] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(367), 8,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(365), 24,
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
      anon_sym_ATat_DASHroot,
      anon_sym_ATerror,
      anon_sym_ATwarn,
      anon_sym_ATdebug,
      anon_sym_POUND,
      sym_identifier,
      sym_at_keyword,
  [1076] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(387), 9,
      ts_builtin_sym_end,
      anon_sym_PERCENT,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(389), 23,
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
      anon_sym_ATerror,
      anon_sym_ATwarn,
      anon_sym_ATdebug,
      anon_sym_POUND,
      sym_identifier,
      sym_at_keyword,
  [1117] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(367), 9,
      ts_builtin_sym_end,
      anon_sym_PERCENT,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(365), 23,
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
      anon_sym_ATerror,
      anon_sym_ATwarn,
      anon_sym_ATdebug,
      anon_sym_POUND,
      sym_identifier,
      sym_at_keyword,
  [1158] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(391), 9,
      ts_builtin_sym_end,
      anon_sym_PERCENT,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(393), 23,
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
      anon_sym_ATerror,
      anon_sym_ATwarn,
      anon_sym_ATdebug,
      anon_sym_POUND,
      sym_identifier,
      sym_at_keyword,
  [1199] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(371), 8,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(369), 24,
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
      anon_sym_ATat_DASHroot,
      anon_sym_ATerror,
      anon_sym_ATwarn,
      anon_sym_ATdebug,
      anon_sym_POUND,
      sym_identifier,
      sym_at_keyword,
  [1240] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(395), 9,
      ts_builtin_sym_end,
      anon_sym_PERCENT,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(397), 23,
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
      anon_sym_ATerror,
      anon_sym_ATwarn,
      anon_sym_ATdebug,
      anon_sym_POUND,
      sym_identifier,
      sym_at_keyword,
  [1281] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(399), 9,
      ts_builtin_sym_end,
      anon_sym_PERCENT,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(401), 23,
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
      anon_sym_ATerror,
      anon_sym_ATwarn,
      anon_sym_ATdebug,
      anon_sym_POUND,
      sym_identifier,
      sym_at_keyword,
  [1322] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(403), 9,
      ts_builtin_sym_end,
      anon_sym_PERCENT,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(405), 23,
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
      anon_sym_ATerror,
      anon_sym_ATwarn,
      anon_sym_ATdebug,
      anon_sym_POUND,
      sym_identifier,
      sym_at_keyword,
  [1363] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(407), 9,
      ts_builtin_sym_end,
      anon_sym_PERCENT,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(409), 23,
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
      anon_sym_ATerror,
      anon_sym_ATwarn,
      anon_sym_ATdebug,
      anon_sym_POUND,
      sym_identifier,
      sym_at_keyword,
  [1404] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(411), 9,
      ts_builtin_sym_end,
      anon_sym_PERCENT,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(413), 23,
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
      anon_sym_ATerror,
      anon_sym_ATwarn,
      anon_sym_ATdebug,
      anon_sym_POUND,
      sym_identifier,
      sym_at_keyword,
  [1445] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(415), 9,
      ts_builtin_sym_end,
      anon_sym_PERCENT,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(417), 23,
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
      anon_sym_ATerror,
      anon_sym_ATwarn,
      anon_sym_ATdebug,
      anon_sym_POUND,
      sym_identifier,
      sym_at_keyword,
  [1486] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(419), 9,
      ts_builtin_sym_end,
      anon_sym_PERCENT,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(421), 23,
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
      anon_sym_ATerror,
      anon_sym_ATwarn,
      anon_sym_ATdebug,
      anon_sym_POUND,
      sym_identifier,
      sym_at_keyword,
  [1527] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(423), 9,
      ts_builtin_sym_end,
      anon_sym_PERCENT,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(425), 23,
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
      anon_sym_ATerror,
      anon_sym_ATwarn,
      anon_sym_ATdebug,
      anon_sym_POUND,
      sym_identifier,
      sym_at_keyword,
  [1568] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(427), 9,
      ts_builtin_sym_end,
      anon_sym_PERCENT,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(429), 23,
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
      anon_sym_ATerror,
      anon_sym_ATwarn,
      anon_sym_ATdebug,
      anon_sym_POUND,
      sym_identifier,
      sym_at_keyword,
  [1609] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(431), 9,
      ts_builtin_sym_end,
      anon_sym_PERCENT,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(433), 23,
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
      anon_sym_ATerror,
      anon_sym_ATwarn,
      anon_sym_ATdebug,
      anon_sym_POUND,
      sym_identifier,
      sym_at_keyword,
  [1650] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(437), 8,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(435), 24,
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
      anon_sym_ATat_DASHroot,
      anon_sym_ATerror,
      anon_sym_ATwarn,
      anon_sym_ATdebug,
      anon_sym_POUND,
      sym_identifier,
      sym_at_keyword,
  [1691] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(439), 9,
      ts_builtin_sym_end,
      anon_sym_PERCENT,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(441), 23,
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
      anon_sym_ATerror,
      anon_sym_ATwarn,
      anon_sym_ATdebug,
      anon_sym_POUND,
      sym_identifier,
      sym_at_keyword,
  [1732] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(445), 8,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(443), 24,
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
      anon_sym_ATat_DASHroot,
      anon_sym_ATerror,
      anon_sym_ATwarn,
      anon_sym_ATdebug,
      anon_sym_POUND,
      sym_identifier,
      sym_at_keyword,
  [1773] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(449), 8,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(447), 24,
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
      anon_sym_ATat_DASHroot,
      anon_sym_ATerror,
      anon_sym_ATwarn,
      anon_sym_ATdebug,
      anon_sym_POUND,
      sym_identifier,
      sym_at_keyword,
  [1814] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(363), 9,
      ts_builtin_sym_end,
      anon_sym_PERCENT,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(361), 23,
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
      anon_sym_ATerror,
      anon_sym_ATwarn,
      anon_sym_ATdebug,
      anon_sym_POUND,
      sym_identifier,
      sym_at_keyword,
  [1855] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(453), 8,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(451), 24,
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
      anon_sym_ATat_DASHroot,
      anon_sym_ATerror,
      anon_sym_ATwarn,
      anon_sym_ATdebug,
      anon_sym_POUND,
      sym_identifier,
      sym_at_keyword,
  [1896] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(457), 8,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(455), 24,
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
      anon_sym_ATat_DASHroot,
      anon_sym_ATerror,
      anon_sym_ATwarn,
      anon_sym_ATdebug,
      anon_sym_POUND,
      sym_identifier,
      sym_at_keyword,
  [1937] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(461), 8,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(459), 24,
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
      anon_sym_ATat_DASHroot,
      anon_sym_ATerror,
      anon_sym_ATwarn,
      anon_sym_ATdebug,
      anon_sym_POUND,
      sym_identifier,
      sym_at_keyword,
  [1978] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(465), 8,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(463), 24,
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
      anon_sym_ATat_DASHroot,
      anon_sym_ATerror,
      anon_sym_ATwarn,
      anon_sym_ATdebug,
      anon_sym_POUND,
      sym_identifier,
      sym_at_keyword,
  [2019] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(465), 9,
      ts_builtin_sym_end,
      anon_sym_PERCENT,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(463), 23,
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
      anon_sym_ATerror,
      anon_sym_ATwarn,
      anon_sym_ATdebug,
      anon_sym_POUND,
      sym_identifier,
      sym_at_keyword,
  [2060] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(431), 8,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(433), 24,
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
      anon_sym_ATat_DASHroot,
      anon_sym_ATerror,
      anon_sym_ATwarn,
      anon_sym_ATdebug,
      anon_sym_POUND,
      sym_identifier,
      sym_at_keyword,
  [2101] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(427), 8,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(429), 24,
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
      anon_sym_ATat_DASHroot,
      anon_sym_ATerror,
      anon_sym_ATwarn,
      anon_sym_ATdebug,
      anon_sym_POUND,
      sym_identifier,
      sym_at_keyword,
  [2142] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(411), 8,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(413), 24,
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
      anon_sym_ATat_DASHroot,
      anon_sym_ATerror,
      anon_sym_ATwarn,
      anon_sym_ATdebug,
      anon_sym_POUND,
      sym_identifier,
      sym_at_keyword,
  [2183] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(407), 8,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(409), 24,
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
      anon_sym_ATat_DASHroot,
      anon_sym_ATerror,
      anon_sym_ATwarn,
      anon_sym_ATdebug,
      anon_sym_POUND,
      sym_identifier,
      sym_at_keyword,
  [2224] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(403), 8,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(405), 24,
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
      anon_sym_ATat_DASHroot,
      anon_sym_ATerror,
      anon_sym_ATwarn,
      anon_sym_ATdebug,
      anon_sym_POUND,
      sym_identifier,
      sym_at_keyword,
  [2265] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(461), 9,
      ts_builtin_sym_end,
      anon_sym_PERCENT,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(459), 23,
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
      anon_sym_ATerror,
      anon_sym_ATwarn,
      anon_sym_ATdebug,
      anon_sym_POUND,
      sym_identifier,
      sym_at_keyword,
  [2306] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(395), 8,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(397), 24,
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
      anon_sym_ATat_DASHroot,
      anon_sym_ATerror,
      anon_sym_ATwarn,
      anon_sym_ATdebug,
      anon_sym_POUND,
      sym_identifier,
      sym_at_keyword,
  [2347] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(387), 8,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(389), 24,
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
      anon_sym_ATat_DASHroot,
      anon_sym_ATerror,
      anon_sym_ATwarn,
      anon_sym_ATdebug,
      anon_sym_POUND,
      sym_identifier,
      sym_at_keyword,
  [2388] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(469), 8,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(467), 24,
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
      anon_sym_ATat_DASHroot,
      anon_sym_ATerror,
      anon_sym_ATwarn,
      anon_sym_ATdebug,
      anon_sym_POUND,
      sym_identifier,
      sym_at_keyword,
  [2429] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(383), 8,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(385), 24,
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
      anon_sym_ATat_DASHroot,
      anon_sym_ATerror,
      anon_sym_ATwarn,
      anon_sym_ATdebug,
      anon_sym_POUND,
      sym_identifier,
      sym_at_keyword,
  [2470] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(391), 8,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(393), 24,
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
      anon_sym_ATat_DASHroot,
      anon_sym_ATerror,
      anon_sym_ATwarn,
      anon_sym_ATdebug,
      anon_sym_POUND,
      sym_identifier,
      sym_at_keyword,
  [2511] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(399), 8,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(401), 24,
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
      anon_sym_ATat_DASHroot,
      anon_sym_ATerror,
      anon_sym_ATwarn,
      anon_sym_ATdebug,
      anon_sym_POUND,
      sym_identifier,
      sym_at_keyword,
  [2552] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(415), 8,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(417), 24,
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
      anon_sym_ATat_DASHroot,
      anon_sym_ATerror,
      anon_sym_ATwarn,
      anon_sym_ATdebug,
      anon_sym_POUND,
      sym_identifier,
      sym_at_keyword,
  [2593] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(419), 8,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(421), 24,
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
      anon_sym_ATat_DASHroot,
      anon_sym_ATerror,
      anon_sym_ATwarn,
      anon_sym_ATdebug,
      anon_sym_POUND,
      sym_identifier,
      sym_at_keyword,
  [2634] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(423), 8,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(425), 24,
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
      anon_sym_ATat_DASHroot,
      anon_sym_ATerror,
      anon_sym_ATwarn,
      anon_sym_ATdebug,
      anon_sym_POUND,
      sym_identifier,
      sym_at_keyword,
  [2675] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(439), 8,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(441), 24,
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
      anon_sym_ATat_DASHroot,
      anon_sym_ATerror,
      anon_sym_ATwarn,
      anon_sym_ATdebug,
      anon_sym_POUND,
      sym_identifier,
      sym_at_keyword,
  [2716] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(471), 9,
      ts_builtin_sym_end,
      anon_sym_PERCENT,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(473), 23,
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
      anon_sym_ATerror,
      anon_sym_ATwarn,
      anon_sym_ATdebug,
      anon_sym_POUND,
      sym_identifier,
      sym_at_keyword,
  [2757] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(457), 9,
      ts_builtin_sym_end,
      anon_sym_PERCENT,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(455), 23,
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
      anon_sym_ATerror,
      anon_sym_ATwarn,
      anon_sym_ATdebug,
      anon_sym_POUND,
      sym_identifier,
      sym_at_keyword,
  [2798] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(475), 9,
      ts_builtin_sym_end,
      anon_sym_PERCENT,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(477), 23,
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
      anon_sym_ATerror,
      anon_sym_ATwarn,
      anon_sym_ATdebug,
      anon_sym_POUND,
      sym_identifier,
      sym_at_keyword,
  [2839] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(317), 9,
      ts_builtin_sym_end,
      anon_sym_PERCENT,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(315), 23,
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
      anon_sym_ATerror,
      anon_sym_ATwarn,
      anon_sym_ATdebug,
      anon_sym_POUND,
      sym_identifier,
      sym_at_keyword,
  [2880] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(479), 9,
      ts_builtin_sym_end,
      anon_sym_PERCENT,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(481), 23,
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
      anon_sym_ATerror,
      anon_sym_ATwarn,
      anon_sym_ATdebug,
      anon_sym_POUND,
      sym_identifier,
      sym_at_keyword,
  [2921] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(483), 9,
      ts_builtin_sym_end,
      anon_sym_PERCENT,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(485), 23,
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
      anon_sym_ATerror,
      anon_sym_ATwarn,
      anon_sym_ATdebug,
      anon_sym_POUND,
      sym_identifier,
      sym_at_keyword,
  [2962] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(453), 9,
      ts_builtin_sym_end,
      anon_sym_PERCENT,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(451), 23,
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
      anon_sym_ATerror,
      anon_sym_ATwarn,
      anon_sym_ATdebug,
      anon_sym_POUND,
      sym_identifier,
      sym_at_keyword,
  [3003] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(487), 9,
      ts_builtin_sym_end,
      anon_sym_PERCENT,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(489), 23,
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
      anon_sym_ATerror,
      anon_sym_ATwarn,
      anon_sym_ATdebug,
      anon_sym_POUND,
      sym_identifier,
      sym_at_keyword,
  [3044] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(475), 8,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(477), 24,
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
      anon_sym_ATat_DASHroot,
      anon_sym_ATerror,
      anon_sym_ATwarn,
      anon_sym_ATdebug,
      anon_sym_POUND,
      sym_identifier,
      sym_at_keyword,
  [3085] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(483), 8,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(485), 24,
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
      anon_sym_ATat_DASHroot,
      anon_sym_ATerror,
      anon_sym_ATwarn,
      anon_sym_ATdebug,
      anon_sym_POUND,
      sym_identifier,
      sym_at_keyword,
  [3126] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(487), 8,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(489), 24,
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
      anon_sym_ATat_DASHroot,
      anon_sym_ATerror,
      anon_sym_ATwarn,
      anon_sym_ATdebug,
      anon_sym_POUND,
      sym_identifier,
      sym_at_keyword,
  [3167] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(371), 9,
      ts_builtin_sym_end,
      anon_sym_PERCENT,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(369), 23,
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
      anon_sym_ATerror,
      anon_sym_ATwarn,
      anon_sym_ATdebug,
      anon_sym_POUND,
      sym_identifier,
      sym_at_keyword,
  [3208] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(471), 8,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(473), 24,
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
      anon_sym_ATat_DASHroot,
      anon_sym_ATerror,
      anon_sym_ATwarn,
      anon_sym_ATdebug,
      anon_sym_POUND,
      sym_identifier,
      sym_at_keyword,
  [3249] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(317), 8,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(315), 24,
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
      anon_sym_ATat_DASHroot,
      anon_sym_ATerror,
      anon_sym_ATwarn,
      anon_sym_ATdebug,
      anon_sym_POUND,
      sym_identifier,
      sym_at_keyword,
  [3290] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(493), 8,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(491), 24,
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
      anon_sym_ATat_DASHroot,
      anon_sym_ATerror,
      anon_sym_ATwarn,
      anon_sym_ATdebug,
      anon_sym_POUND,
      sym_identifier,
      sym_at_keyword,
  [3331] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(493), 9,
      ts_builtin_sym_end,
      anon_sym_PERCENT,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(491), 23,
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
      anon_sym_ATerror,
      anon_sym_ATwarn,
      anon_sym_ATdebug,
      anon_sym_POUND,
      sym_identifier,
      sym_at_keyword,
  [3372] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(495), 9,
      ts_builtin_sym_end,
      anon_sym_PERCENT,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(497), 23,
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
      anon_sym_ATerror,
      anon_sym_ATwarn,
      anon_sym_ATdebug,
      anon_sym_POUND,
      sym_identifier,
      sym_at_keyword,
  [3413] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(499), 9,
      ts_builtin_sym_end,
      anon_sym_PERCENT,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(501), 23,
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
      anon_sym_ATerror,
      anon_sym_ATwarn,
      anon_sym_ATdebug,
      anon_sym_POUND,
      sym_identifier,
      sym_at_keyword,
  [3454] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(377), 9,
      ts_builtin_sym_end,
      anon_sym_PERCENT,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(375), 23,
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
      anon_sym_ATerror,
      anon_sym_ATwarn,
      anon_sym_ATdebug,
      anon_sym_POUND,
      sym_identifier,
      sym_at_keyword,
  [3495] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(503), 9,
      ts_builtin_sym_end,
      anon_sym_PERCENT,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(505), 23,
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
      anon_sym_ATerror,
      anon_sym_ATwarn,
      anon_sym_ATdebug,
      anon_sym_POUND,
      sym_identifier,
      sym_at_keyword,
  [3536] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(507), 9,
      ts_builtin_sym_end,
      anon_sym_PERCENT,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(509), 23,
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
      anon_sym_ATerror,
      anon_sym_ATwarn,
      anon_sym_ATdebug,
      anon_sym_POUND,
      sym_identifier,
      sym_at_keyword,
  [3577] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(495), 8,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(497), 24,
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
      anon_sym_ATat_DASHroot,
      anon_sym_ATerror,
      anon_sym_ATwarn,
      anon_sym_ATdebug,
      anon_sym_POUND,
      sym_identifier,
      sym_at_keyword,
  [3618] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(499), 8,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(501), 24,
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
      anon_sym_ATat_DASHroot,
      anon_sym_ATerror,
      anon_sym_ATwarn,
      anon_sym_ATdebug,
      anon_sym_POUND,
      sym_identifier,
      sym_at_keyword,
  [3659] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(469), 9,
      ts_builtin_sym_end,
      anon_sym_PERCENT,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(467), 23,
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
      anon_sym_ATerror,
      anon_sym_ATwarn,
      anon_sym_ATdebug,
      anon_sym_POUND,
      sym_identifier,
      sym_at_keyword,
  [3700] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(503), 8,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(505), 24,
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
      anon_sym_ATat_DASHroot,
      anon_sym_ATerror,
      anon_sym_ATwarn,
      anon_sym_ATdebug,
      anon_sym_POUND,
      sym_identifier,
      sym_at_keyword,
  [3741] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(479), 8,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(481), 24,
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
      anon_sym_ATat_DASHroot,
      anon_sym_ATerror,
      anon_sym_ATwarn,
      anon_sym_ATdebug,
      anon_sym_POUND,
      sym_identifier,
      sym_at_keyword,
  [3782] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(511), 9,
      ts_builtin_sym_end,
      anon_sym_PERCENT,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(513), 23,
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
      anon_sym_ATerror,
      anon_sym_ATwarn,
      anon_sym_ATdebug,
      anon_sym_POUND,
      sym_identifier,
      sym_at_keyword,
  [3823] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(517), 8,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(515), 24,
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
      anon_sym_ATat_DASHroot,
      anon_sym_ATerror,
      anon_sym_ATwarn,
      anon_sym_ATdebug,
      anon_sym_POUND,
      sym_identifier,
      sym_at_keyword,
  [3864] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(521), 8,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(519), 24,
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
      anon_sym_ATat_DASHroot,
      anon_sym_ATerror,
      anon_sym_ATwarn,
      anon_sym_ATdebug,
      anon_sym_POUND,
      sym_identifier,
      sym_at_keyword,
  [3905] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(381), 9,
      ts_builtin_sym_end,
      anon_sym_PERCENT,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(379), 23,
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
      anon_sym_ATerror,
      anon_sym_ATwarn,
      anon_sym_ATdebug,
      anon_sym_POUND,
      sym_identifier,
      sym_at_keyword,
  [3946] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(525), 8,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(523), 24,
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
      anon_sym_ATat_DASHroot,
      anon_sym_ATerror,
      anon_sym_ATwarn,
      anon_sym_ATdebug,
      anon_sym_POUND,
      sym_identifier,
      sym_at_keyword,
  [3987] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(527), 9,
      ts_builtin_sym_end,
      anon_sym_PERCENT,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(529), 23,
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
      anon_sym_ATerror,
      anon_sym_ATwarn,
      anon_sym_ATdebug,
      anon_sym_POUND,
      sym_identifier,
      sym_at_keyword,
  [4028] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(531), 9,
      ts_builtin_sym_end,
      anon_sym_PERCENT,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(533), 23,
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
      anon_sym_ATerror,
      anon_sym_ATwarn,
      anon_sym_ATdebug,
      anon_sym_POUND,
      sym_identifier,
      sym_at_keyword,
  [4069] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(537), 8,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(535), 24,
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
      anon_sym_ATat_DASHroot,
      anon_sym_ATerror,
      anon_sym_ATwarn,
      anon_sym_ATdebug,
      anon_sym_POUND,
      sym_identifier,
      sym_at_keyword,
  [4110] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(531), 8,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(533), 24,
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
      anon_sym_ATat_DASHroot,
      anon_sym_ATerror,
      anon_sym_ATwarn,
      anon_sym_ATdebug,
      anon_sym_POUND,
      sym_identifier,
      sym_at_keyword,
  [4151] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(527), 8,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(529), 24,
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
      anon_sym_ATat_DASHroot,
      anon_sym_ATerror,
      anon_sym_ATwarn,
      anon_sym_ATdebug,
      anon_sym_POUND,
      sym_identifier,
      sym_at_keyword,
  [4192] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(537), 9,
      ts_builtin_sym_end,
      anon_sym_PERCENT,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(535), 23,
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
      anon_sym_ATerror,
      anon_sym_ATwarn,
      anon_sym_ATdebug,
      anon_sym_POUND,
      sym_identifier,
      sym_at_keyword,
  [4233] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(525), 9,
      ts_builtin_sym_end,
      anon_sym_PERCENT,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(523), 23,
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
      anon_sym_ATerror,
      anon_sym_ATwarn,
      anon_sym_ATdebug,
      anon_sym_POUND,
      sym_identifier,
      sym_at_keyword,
  [4274] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(539), 9,
      ts_builtin_sym_end,
      anon_sym_PERCENT,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(541), 23,
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
      anon_sym_ATerror,
      anon_sym_ATwarn,
      anon_sym_ATdebug,
      anon_sym_POUND,
      sym_identifier,
      sym_at_keyword,
  [4315] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(543), 9,
      ts_builtin_sym_end,
      anon_sym_PERCENT,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(545), 23,
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
      anon_sym_ATerror,
      anon_sym_ATwarn,
      anon_sym_ATdebug,
      anon_sym_POUND,
      sym_identifier,
      sym_at_keyword,
  [4356] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(517), 9,
      ts_builtin_sym_end,
      anon_sym_PERCENT,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(515), 23,
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
      anon_sym_ATerror,
      anon_sym_ATwarn,
      anon_sym_ATdebug,
      anon_sym_POUND,
      sym_identifier,
      sym_at_keyword,
  [4397] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(521), 9,
      ts_builtin_sym_end,
      anon_sym_PERCENT,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(519), 23,
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
      anon_sym_ATerror,
      anon_sym_ATwarn,
      anon_sym_ATdebug,
      anon_sym_POUND,
      sym_identifier,
      sym_at_keyword,
  [4438] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(507), 8,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(509), 24,
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
      anon_sym_ATat_DASHroot,
      anon_sym_ATerror,
      anon_sym_ATwarn,
      anon_sym_ATdebug,
      anon_sym_POUND,
      sym_identifier,
      sym_at_keyword,
  [4479] = 18,
    ACTIONS(331), 1,
      anon_sym_LPAREN,
    ACTIONS(343), 1,
      aux_sym_integer_value_token1,
    ACTIONS(345), 1,
      aux_sym_float_value_token1,
    ACTIONS(349), 1,
      sym_variable_identifier,
    ACTIONS(351), 1,
      sym_plain_value,
    ACTIONS(547), 1,
      anon_sym_COMMA,
    ACTIONS(549), 1,
      anon_sym_SEMI,
    ACTIONS(551), 1,
      anon_sym_RBRACE,
    ACTIONS(555), 1,
      anon_sym_POUND,
    ACTIONS(559), 1,
      sym_important,
    ACTIONS(561), 1,
      sym_string_value,
    ACTIONS(563), 1,
      sym_identifier,
    STATE(143), 1,
      sym__value,
    STATE(155), 1,
      aux_sym_declaration_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(553), 5,
      anon_sym_STAR,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(557), 5,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
    STATE(134), 6,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [4548] = 17,
    ACTIONS(331), 1,
      anon_sym_LPAREN,
    ACTIONS(343), 1,
      aux_sym_integer_value_token1,
    ACTIONS(345), 1,
      aux_sym_float_value_token1,
    ACTIONS(349), 1,
      sym_variable_identifier,
    ACTIONS(351), 1,
      sym_plain_value,
    ACTIONS(547), 1,
      anon_sym_COMMA,
    ACTIONS(555), 1,
      anon_sym_POUND,
    ACTIONS(561), 1,
      sym_string_value,
    ACTIONS(563), 1,
      sym_identifier,
    ACTIONS(565), 1,
      anon_sym_SEMI,
    ACTIONS(567), 1,
      sym_important,
    STATE(143), 1,
      sym__value,
    STATE(163), 1,
      aux_sym_declaration_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(553), 5,
      anon_sym_STAR,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(557), 5,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
    STATE(134), 6,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [4614] = 17,
    ACTIONS(331), 1,
      anon_sym_LPAREN,
    ACTIONS(343), 1,
      aux_sym_integer_value_token1,
    ACTIONS(345), 1,
      aux_sym_float_value_token1,
    ACTIONS(349), 1,
      sym_variable_identifier,
    ACTIONS(351), 1,
      sym_plain_value,
    ACTIONS(547), 1,
      anon_sym_COMMA,
    ACTIONS(555), 1,
      anon_sym_POUND,
    ACTIONS(561), 1,
      sym_string_value,
    ACTIONS(563), 1,
      sym_identifier,
    ACTIONS(569), 1,
      anon_sym_SEMI,
    ACTIONS(571), 1,
      sym_important,
    STATE(143), 1,
      sym__value,
    STATE(162), 1,
      aux_sym_declaration_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(553), 5,
      anon_sym_STAR,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(557), 5,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
    STATE(134), 6,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [4680] = 17,
    ACTIONS(331), 1,
      anon_sym_LPAREN,
    ACTIONS(343), 1,
      aux_sym_integer_value_token1,
    ACTIONS(345), 1,
      aux_sym_float_value_token1,
    ACTIONS(349), 1,
      sym_variable_identifier,
    ACTIONS(351), 1,
      sym_plain_value,
    ACTIONS(547), 1,
      anon_sym_COMMA,
    ACTIONS(549), 1,
      anon_sym_SEMI,
    ACTIONS(555), 1,
      anon_sym_POUND,
    ACTIONS(561), 1,
      sym_string_value,
    ACTIONS(563), 1,
      sym_identifier,
    ACTIONS(573), 1,
      sym_important,
    STATE(143), 1,
      sym__value,
    STATE(160), 1,
      aux_sym_declaration_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(553), 5,
      anon_sym_STAR,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(557), 5,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
    STATE(134), 6,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [4746] = 17,
    ACTIONS(331), 1,
      anon_sym_LPAREN,
    ACTIONS(343), 1,
      aux_sym_integer_value_token1,
    ACTIONS(345), 1,
      aux_sym_float_value_token1,
    ACTIONS(349), 1,
      sym_variable_identifier,
    ACTIONS(351), 1,
      sym_plain_value,
    ACTIONS(547), 1,
      anon_sym_COMMA,
    ACTIONS(555), 1,
      anon_sym_POUND,
    ACTIONS(561), 1,
      sym_string_value,
    ACTIONS(563), 1,
      sym_identifier,
    ACTIONS(575), 1,
      anon_sym_SEMI,
    ACTIONS(577), 1,
      sym_important,
    STATE(143), 1,
      sym__value,
    STATE(161), 1,
      aux_sym_declaration_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(553), 5,
      anon_sym_STAR,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(557), 5,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
    STATE(134), 6,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [4812] = 7,
    ACTIONS(585), 1,
      anon_sym_LPAREN2,
    STATE(135), 1,
      sym_arguments,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(583), 5,
      anon_sym_COLON,
      anon_sym_DOT,
      anon_sym_POUND,
      anon_sym_GT,
      anon_sym_PLUS,
    ACTIONS(579), 6,
      sym__descendant_operator,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      anon_sym_TILDE,
    ACTIONS(587), 6,
      anon_sym_STAR,
      sym_string_value,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(581), 9,
      anon_sym_LPAREN,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      sym_identifier,
      sym_variable_identifier,
      sym_plain_value,
  [4857] = 5,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(593), 5,
      anon_sym_COLON,
      anon_sym_DOT,
      anon_sym_POUND,
      anon_sym_GT,
      anon_sym_PLUS,
    ACTIONS(589), 6,
      sym__descendant_operator,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      anon_sym_TILDE,
    ACTIONS(591), 7,
      anon_sym_LPAREN,
      anon_sym_STAR,
      sym_string_value,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(595), 8,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      sym_identifier,
      sym_variable_identifier,
      sym_plain_value,
  [4896] = 5,
    ACTIONS(585), 1,
      anon_sym_LPAREN2,
    STATE(135), 1,
      sym_arguments,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(587), 11,
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
    ACTIONS(581), 12,
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
  [4934] = 4,
    ACTIONS(601), 1,
      sym_unit,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(599), 11,
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
    ACTIONS(597), 12,
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
  [4969] = 4,
    ACTIONS(607), 1,
      sym_unit,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(605), 11,
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
    ACTIONS(603), 12,
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
  [5004] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(611), 11,
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
    ACTIONS(609), 12,
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
  [5036] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(615), 11,
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
    ACTIONS(613), 12,
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
  [5068] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(619), 11,
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
    ACTIONS(617), 12,
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
  [5100] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(595), 11,
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
    ACTIONS(591), 12,
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
  [5132] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(623), 11,
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
    ACTIONS(621), 12,
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
  [5164] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(627), 11,
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
    ACTIONS(625), 12,
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
  [5196] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(631), 11,
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
    ACTIONS(629), 12,
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
  [5228] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(635), 11,
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
    ACTIONS(633), 12,
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
  [5260] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(639), 11,
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
    ACTIONS(637), 12,
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
  [5292] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(643), 11,
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
    ACTIONS(641), 12,
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
  [5324] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(647), 11,
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
    ACTIONS(645), 12,
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
  [5356] = 9,
    ACTIONS(649), 1,
      anon_sym_SEMI,
    ACTIONS(651), 1,
      anon_sym_LPAREN,
    ACTIONS(659), 1,
      anon_sym_selector,
    ACTIONS(661), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(657), 2,
      anon_sym_not,
      anon_sym_only,
    ACTIONS(655), 4,
      anon_sym_GT,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
    ACTIONS(653), 6,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    STATE(368), 6,
      sym__query,
      sym_feature_query,
      sym_parenthesized_query,
      sym_binary_query,
      sym_unary_query,
      sym_selector_query,
  [5399] = 5,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(553), 5,
      anon_sym_STAR,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(557), 5,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
    ACTIONS(663), 6,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      sym_important,
      sym_string_value,
    ACTIONS(665), 6,
      anon_sym_POUND,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      sym_identifier,
      sym_variable_identifier,
      sym_plain_value,
  [5434] = 5,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(553), 5,
      anon_sym_STAR,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(557), 5,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
    ACTIONS(667), 6,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      sym_important,
      sym_string_value,
    ACTIONS(669), 6,
      anon_sym_POUND,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      sym_identifier,
      sym_variable_identifier,
      sym_plain_value,
  [5469] = 9,
    ACTIONS(651), 1,
      anon_sym_LPAREN,
    ACTIONS(659), 1,
      anon_sym_selector,
    ACTIONS(661), 1,
      sym_identifier,
    ACTIONS(671), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(657), 2,
      anon_sym_not,
      anon_sym_only,
    ACTIONS(655), 4,
      anon_sym_GT,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
    ACTIONS(653), 6,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    STATE(367), 6,
      sym__query,
      sym_feature_query,
      sym_parenthesized_query,
      sym_binary_query,
      sym_unary_query,
      sym_selector_query,
  [5512] = 5,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(553), 5,
      anon_sym_STAR,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(557), 5,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
    ACTIONS(673), 5,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_string_value,
    ACTIONS(675), 6,
      anon_sym_POUND,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      sym_identifier,
      sym_variable_identifier,
      sym_plain_value,
  [5546] = 10,
    ACTIONS(23), 1,
      anon_sym_COLON,
    ACTIONS(49), 1,
      anon_sym_STAR,
    ACTIONS(51), 1,
      anon_sym_DOT,
    ACTIONS(53), 1,
      anon_sym_COLON_COLON,
    ACTIONS(55), 1,
      anon_sym_POUND,
    ACTIONS(57), 1,
      anon_sym_LBRACK,
    ACTIONS(679), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(677), 2,
      sym_nesting_selector,
      sym_string_value,
    STATE(261), 11,
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
  [5589] = 10,
    ACTIONS(23), 1,
      anon_sym_COLON,
    ACTIONS(49), 1,
      anon_sym_STAR,
    ACTIONS(51), 1,
      anon_sym_DOT,
    ACTIONS(53), 1,
      anon_sym_COLON_COLON,
    ACTIONS(55), 1,
      anon_sym_POUND,
    ACTIONS(57), 1,
      anon_sym_LBRACK,
    ACTIONS(679), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(681), 2,
      sym_nesting_selector,
      sym_string_value,
    STATE(345), 11,
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
  [5632] = 15,
    ACTIONS(331), 1,
      anon_sym_LPAREN,
    ACTIONS(343), 1,
      aux_sym_integer_value_token1,
    ACTIONS(345), 1,
      aux_sym_float_value_token1,
    ACTIONS(349), 1,
      sym_variable_identifier,
    ACTIONS(351), 1,
      sym_plain_value,
    ACTIONS(555), 1,
      anon_sym_POUND,
    ACTIONS(561), 1,
      sym_string_value,
    ACTIONS(563), 1,
      sym_identifier,
    ACTIONS(685), 1,
      anon_sym_RPAREN,
    STATE(146), 1,
      sym__value,
    STATE(164), 1,
      aux_sym_pseudo_class_arguments_repeat1,
    STATE(376), 1,
      aux_sym_arguments_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(683), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
    STATE(134), 6,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [5685] = 10,
    ACTIONS(23), 1,
      anon_sym_COLON,
    ACTIONS(49), 1,
      anon_sym_STAR,
    ACTIONS(51), 1,
      anon_sym_DOT,
    ACTIONS(53), 1,
      anon_sym_COLON_COLON,
    ACTIONS(55), 1,
      anon_sym_POUND,
    ACTIONS(57), 1,
      anon_sym_LBRACK,
    ACTIONS(679), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(687), 2,
      sym_nesting_selector,
      sym_string_value,
    STATE(312), 11,
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
  [5728] = 10,
    ACTIONS(23), 1,
      anon_sym_COLON,
    ACTIONS(49), 1,
      anon_sym_STAR,
    ACTIONS(51), 1,
      anon_sym_DOT,
    ACTIONS(53), 1,
      anon_sym_COLON_COLON,
    ACTIONS(55), 1,
      anon_sym_POUND,
    ACTIONS(57), 1,
      anon_sym_LBRACK,
    ACTIONS(679), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(689), 2,
      sym_nesting_selector,
      sym_string_value,
    STATE(308), 11,
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
  [5771] = 15,
    ACTIONS(331), 1,
      anon_sym_LPAREN,
    ACTIONS(343), 1,
      aux_sym_integer_value_token1,
    ACTIONS(345), 1,
      aux_sym_float_value_token1,
    ACTIONS(349), 1,
      sym_variable_identifier,
    ACTIONS(351), 1,
      sym_plain_value,
    ACTIONS(555), 1,
      anon_sym_POUND,
    ACTIONS(561), 1,
      sym_string_value,
    ACTIONS(563), 1,
      sym_identifier,
    ACTIONS(691), 1,
      anon_sym_RPAREN,
    STATE(146), 1,
      sym__value,
    STATE(164), 1,
      aux_sym_pseudo_class_arguments_repeat1,
    STATE(388), 1,
      aux_sym_arguments_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(683), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
    STATE(134), 6,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [5824] = 15,
    ACTIONS(331), 1,
      anon_sym_LPAREN,
    ACTIONS(343), 1,
      aux_sym_integer_value_token1,
    ACTIONS(345), 1,
      aux_sym_float_value_token1,
    ACTIONS(349), 1,
      sym_variable_identifier,
    ACTIONS(351), 1,
      sym_plain_value,
    ACTIONS(555), 1,
      anon_sym_POUND,
    ACTIONS(561), 1,
      sym_string_value,
    ACTIONS(563), 1,
      sym_identifier,
    ACTIONS(693), 1,
      anon_sym_RPAREN,
    STATE(146), 1,
      sym__value,
    STATE(164), 1,
      aux_sym_pseudo_class_arguments_repeat1,
    STATE(384), 1,
      aux_sym_arguments_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(683), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
    STATE(134), 6,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [5877] = 14,
    ACTIONS(695), 1,
      anon_sym_COMMA,
    ACTIONS(698), 1,
      anon_sym_LPAREN,
    ACTIONS(701), 1,
      anon_sym_POUND,
    ACTIONS(704), 1,
      sym_string_value,
    ACTIONS(707), 1,
      aux_sym_integer_value_token1,
    ACTIONS(710), 1,
      aux_sym_float_value_token1,
    ACTIONS(713), 1,
      sym_identifier,
    ACTIONS(716), 1,
      sym_variable_identifier,
    ACTIONS(719), 1,
      sym_plain_value,
    STATE(143), 1,
      sym__value,
    STATE(154), 1,
      aux_sym_declaration_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(667), 3,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      sym_important,
    STATE(134), 6,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [5928] = 16,
    ACTIONS(331), 1,
      anon_sym_LPAREN,
    ACTIONS(343), 1,
      aux_sym_integer_value_token1,
    ACTIONS(345), 1,
      aux_sym_float_value_token1,
    ACTIONS(349), 1,
      sym_variable_identifier,
    ACTIONS(351), 1,
      sym_plain_value,
    ACTIONS(547), 1,
      anon_sym_COMMA,
    ACTIONS(555), 1,
      anon_sym_POUND,
    ACTIONS(561), 1,
      sym_string_value,
    ACTIONS(563), 1,
      sym_identifier,
    ACTIONS(722), 1,
      anon_sym_SEMI,
    ACTIONS(724), 1,
      anon_sym_RBRACE,
    ACTIONS(726), 1,
      sym_important,
    STATE(143), 1,
      sym__value,
    STATE(154), 1,
      aux_sym_declaration_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    STATE(134), 6,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [5983] = 15,
    ACTIONS(331), 1,
      anon_sym_LPAREN,
    ACTIONS(343), 1,
      aux_sym_integer_value_token1,
    ACTIONS(345), 1,
      aux_sym_float_value_token1,
    ACTIONS(349), 1,
      sym_variable_identifier,
    ACTIONS(351), 1,
      sym_plain_value,
    ACTIONS(555), 1,
      anon_sym_POUND,
    ACTIONS(561), 1,
      sym_string_value,
    ACTIONS(563), 1,
      sym_identifier,
    ACTIONS(728), 1,
      anon_sym_RPAREN,
    STATE(146), 1,
      sym__value,
    STATE(164), 1,
      aux_sym_pseudo_class_arguments_repeat1,
    STATE(387), 1,
      aux_sym_arguments_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(683), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
    STATE(134), 6,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [6036] = 10,
    ACTIONS(23), 1,
      anon_sym_COLON,
    ACTIONS(49), 1,
      anon_sym_STAR,
    ACTIONS(51), 1,
      anon_sym_DOT,
    ACTIONS(53), 1,
      anon_sym_COLON_COLON,
    ACTIONS(55), 1,
      anon_sym_POUND,
    ACTIONS(57), 1,
      anon_sym_LBRACK,
    ACTIONS(679), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(730), 2,
      sym_nesting_selector,
      sym_string_value,
    STATE(262), 11,
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
  [6079] = 10,
    ACTIONS(23), 1,
      anon_sym_COLON,
    ACTIONS(49), 1,
      anon_sym_STAR,
    ACTIONS(51), 1,
      anon_sym_DOT,
    ACTIONS(53), 1,
      anon_sym_COLON_COLON,
    ACTIONS(55), 1,
      anon_sym_POUND,
    ACTIONS(57), 1,
      anon_sym_LBRACK,
    ACTIONS(679), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(732), 2,
      sym_nesting_selector,
      sym_string_value,
    STATE(285), 11,
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
  [6122] = 13,
    ACTIONS(331), 1,
      anon_sym_LPAREN,
    ACTIONS(343), 1,
      aux_sym_integer_value_token1,
    ACTIONS(345), 1,
      aux_sym_float_value_token1,
    ACTIONS(349), 1,
      sym_variable_identifier,
    ACTIONS(351), 1,
      sym_plain_value,
    ACTIONS(555), 1,
      anon_sym_POUND,
    ACTIONS(561), 1,
      sym_string_value,
    ACTIONS(563), 1,
      sym_identifier,
    STATE(146), 1,
      sym__value,
    STATE(164), 1,
      aux_sym_pseudo_class_arguments_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(734), 3,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RPAREN,
    STATE(134), 6,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [6170] = 15,
    ACTIONS(331), 1,
      anon_sym_LPAREN,
    ACTIONS(343), 1,
      aux_sym_integer_value_token1,
    ACTIONS(345), 1,
      aux_sym_float_value_token1,
    ACTIONS(349), 1,
      sym_variable_identifier,
    ACTIONS(351), 1,
      sym_plain_value,
    ACTIONS(547), 1,
      anon_sym_COMMA,
    ACTIONS(555), 1,
      anon_sym_POUND,
    ACTIONS(561), 1,
      sym_string_value,
    ACTIONS(563), 1,
      sym_identifier,
    ACTIONS(722), 1,
      anon_sym_SEMI,
    ACTIONS(736), 1,
      sym_important,
    STATE(143), 1,
      sym__value,
    STATE(154), 1,
      aux_sym_declaration_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    STATE(134), 6,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [6222] = 15,
    ACTIONS(331), 1,
      anon_sym_LPAREN,
    ACTIONS(343), 1,
      aux_sym_integer_value_token1,
    ACTIONS(345), 1,
      aux_sym_float_value_token1,
    ACTIONS(349), 1,
      sym_variable_identifier,
    ACTIONS(351), 1,
      sym_plain_value,
    ACTIONS(547), 1,
      anon_sym_COMMA,
    ACTIONS(555), 1,
      anon_sym_POUND,
    ACTIONS(561), 1,
      sym_string_value,
    ACTIONS(563), 1,
      sym_identifier,
    ACTIONS(738), 1,
      anon_sym_SEMI,
    ACTIONS(740), 1,
      sym_important,
    STATE(143), 1,
      sym__value,
    STATE(154), 1,
      aux_sym_declaration_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    STATE(134), 6,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [6274] = 15,
    ACTIONS(331), 1,
      anon_sym_LPAREN,
    ACTIONS(343), 1,
      aux_sym_integer_value_token1,
    ACTIONS(345), 1,
      aux_sym_float_value_token1,
    ACTIONS(349), 1,
      sym_variable_identifier,
    ACTIONS(351), 1,
      sym_plain_value,
    ACTIONS(547), 1,
      anon_sym_COMMA,
    ACTIONS(555), 1,
      anon_sym_POUND,
    ACTIONS(561), 1,
      sym_string_value,
    ACTIONS(563), 1,
      sym_identifier,
    ACTIONS(742), 1,
      anon_sym_SEMI,
    ACTIONS(744), 1,
      sym_important,
    STATE(143), 1,
      sym__value,
    STATE(154), 1,
      aux_sym_declaration_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    STATE(134), 6,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [6326] = 15,
    ACTIONS(331), 1,
      anon_sym_LPAREN,
    ACTIONS(343), 1,
      aux_sym_integer_value_token1,
    ACTIONS(345), 1,
      aux_sym_float_value_token1,
    ACTIONS(349), 1,
      sym_variable_identifier,
    ACTIONS(351), 1,
      sym_plain_value,
    ACTIONS(547), 1,
      anon_sym_COMMA,
    ACTIONS(555), 1,
      anon_sym_POUND,
    ACTIONS(561), 1,
      sym_string_value,
    ACTIONS(563), 1,
      sym_identifier,
    ACTIONS(746), 1,
      anon_sym_SEMI,
    ACTIONS(748), 1,
      sym_important,
    STATE(143), 1,
      sym__value,
    STATE(154), 1,
      aux_sym_declaration_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    STATE(134), 6,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [6378] = 13,
    ACTIONS(752), 1,
      anon_sym_LPAREN,
    ACTIONS(755), 1,
      anon_sym_POUND,
    ACTIONS(758), 1,
      sym_string_value,
    ACTIONS(761), 1,
      aux_sym_integer_value_token1,
    ACTIONS(764), 1,
      aux_sym_float_value_token1,
    ACTIONS(767), 1,
      sym_identifier,
    ACTIONS(770), 1,
      sym_variable_identifier,
    ACTIONS(773), 1,
      sym_plain_value,
    STATE(146), 1,
      sym__value,
    STATE(164), 1,
      aux_sym_pseudo_class_arguments_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(750), 3,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RPAREN,
    STATE(134), 6,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [6426] = 15,
    ACTIONS(331), 1,
      anon_sym_LPAREN,
    ACTIONS(343), 1,
      aux_sym_integer_value_token1,
    ACTIONS(345), 1,
      aux_sym_float_value_token1,
    ACTIONS(349), 1,
      sym_variable_identifier,
    ACTIONS(351), 1,
      sym_plain_value,
    ACTIONS(555), 1,
      anon_sym_POUND,
    ACTIONS(561), 1,
      sym_string_value,
    ACTIONS(563), 1,
      sym_identifier,
    ACTIONS(776), 1,
      anon_sym_COMMA,
    ACTIONS(778), 1,
      anon_sym_RPAREN,
    STATE(146), 1,
      sym__value,
    STATE(164), 1,
      aux_sym_pseudo_class_arguments_repeat1,
    STATE(399), 1,
      aux_sym_pseudo_class_arguments_repeat2,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    STATE(134), 6,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [6478] = 5,
    ACTIONS(780), 1,
      anon_sym_LPAREN2,
    STATE(202), 1,
      sym_arguments,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(581), 3,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_LT,
    ACTIONS(587), 13,
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
  [6509] = 13,
    ACTIONS(331), 1,
      anon_sym_LPAREN,
    ACTIONS(343), 1,
      aux_sym_integer_value_token1,
    ACTIONS(345), 1,
      aux_sym_float_value_token1,
    ACTIONS(349), 1,
      sym_variable_identifier,
    ACTIONS(351), 1,
      sym_plain_value,
    ACTIONS(555), 1,
      anon_sym_POUND,
    ACTIONS(561), 1,
      sym_string_value,
    ACTIONS(563), 1,
      sym_identifier,
    STATE(146), 1,
      sym__value,
    STATE(164), 1,
      aux_sym_pseudo_class_arguments_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(782), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    STATE(134), 6,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [6556] = 5,
    ACTIONS(784), 1,
      anon_sym_LPAREN2,
    STATE(197), 1,
      sym_arguments,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(587), 7,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(581), 9,
      anon_sym_LPAREN,
      anon_sym_GT,
      anon_sym_not,
      anon_sym_only,
      anon_sym_selector,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      sym_identifier,
  [6587] = 4,
    ACTIONS(786), 1,
      sym_unit,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(597), 8,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(599), 8,
      anon_sym_GT,
      anon_sym_not,
      anon_sym_only,
      anon_sym_selector,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      sym_identifier,
  [6615] = 4,
    ACTIONS(788), 1,
      sym_unit,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(603), 8,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(605), 8,
      anon_sym_GT,
      anon_sym_not,
      anon_sym_only,
      anon_sym_selector,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      sym_identifier,
  [6643] = 13,
    ACTIONS(331), 1,
      anon_sym_LPAREN,
    ACTIONS(343), 1,
      aux_sym_integer_value_token1,
    ACTIONS(345), 1,
      aux_sym_float_value_token1,
    ACTIONS(349), 1,
      sym_variable_identifier,
    ACTIONS(351), 1,
      sym_plain_value,
    ACTIONS(555), 1,
      anon_sym_POUND,
    ACTIONS(561), 1,
      sym_string_value,
    ACTIONS(563), 1,
      sym_identifier,
    ACTIONS(790), 1,
      anon_sym_RPAREN,
    STATE(146), 1,
      sym__value,
    STATE(149), 1,
      aux_sym_pseudo_class_arguments_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    STATE(134), 6,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [6689] = 13,
    ACTIONS(331), 1,
      anon_sym_LPAREN,
    ACTIONS(343), 1,
      aux_sym_integer_value_token1,
    ACTIONS(345), 1,
      aux_sym_float_value_token1,
    ACTIONS(349), 1,
      sym_variable_identifier,
    ACTIONS(351), 1,
      sym_plain_value,
    ACTIONS(555), 1,
      anon_sym_POUND,
    ACTIONS(561), 1,
      sym_string_value,
    ACTIONS(563), 1,
      sym_identifier,
    ACTIONS(792), 1,
      anon_sym_RPAREN,
    STATE(146), 1,
      sym__value,
    STATE(152), 1,
      aux_sym_pseudo_class_arguments_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    STATE(134), 6,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [6735] = 13,
    ACTIONS(331), 1,
      anon_sym_LPAREN,
    ACTIONS(343), 1,
      aux_sym_integer_value_token1,
    ACTIONS(345), 1,
      aux_sym_float_value_token1,
    ACTIONS(349), 1,
      sym_variable_identifier,
    ACTIONS(351), 1,
      sym_plain_value,
    ACTIONS(555), 1,
      anon_sym_POUND,
    ACTIONS(561), 1,
      sym_string_value,
    ACTIONS(563), 1,
      sym_identifier,
    ACTIONS(794), 1,
      anon_sym_RPAREN,
    STATE(146), 1,
      sym__value,
    STATE(153), 1,
      aux_sym_pseudo_class_arguments_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    STATE(134), 6,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [6781] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(631), 8,
      anon_sym_GT,
      anon_sym_not,
      anon_sym_only,
      anon_sym_selector,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      sym_identifier,
    ACTIONS(629), 9,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [6807] = 13,
    ACTIONS(331), 1,
      anon_sym_LPAREN,
    ACTIONS(343), 1,
      aux_sym_integer_value_token1,
    ACTIONS(345), 1,
      aux_sym_float_value_token1,
    ACTIONS(349), 1,
      sym_variable_identifier,
    ACTIONS(351), 1,
      sym_plain_value,
    ACTIONS(555), 1,
      anon_sym_POUND,
    ACTIONS(561), 1,
      sym_string_value,
    ACTIONS(563), 1,
      sym_identifier,
    ACTIONS(796), 1,
      anon_sym_RPAREN,
    STATE(146), 1,
      sym__value,
    STATE(164), 1,
      aux_sym_pseudo_class_arguments_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    STATE(134), 6,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [6853] = 13,
    ACTIONS(331), 1,
      anon_sym_LPAREN,
    ACTIONS(343), 1,
      aux_sym_integer_value_token1,
    ACTIONS(345), 1,
      aux_sym_float_value_token1,
    ACTIONS(349), 1,
      sym_variable_identifier,
    ACTIONS(351), 1,
      sym_plain_value,
    ACTIONS(555), 1,
      anon_sym_POUND,
    ACTIONS(561), 1,
      sym_string_value,
    ACTIONS(563), 1,
      sym_identifier,
    ACTIONS(798), 1,
      anon_sym_RPAREN,
    STATE(146), 1,
      sym__value,
    STATE(156), 1,
      aux_sym_pseudo_class_arguments_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    STATE(134), 6,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [6899] = 4,
    ACTIONS(800), 1,
      sym_unit,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(605), 3,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_LT,
    ACTIONS(603), 12,
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
  [6926] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(617), 8,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(619), 8,
      anon_sym_GT,
      anon_sym_not,
      anon_sym_only,
      anon_sym_selector,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      sym_identifier,
  [6951] = 4,
    ACTIONS(802), 1,
      sym_unit,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(599), 3,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_LT,
    ACTIONS(597), 12,
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
  [6978] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(643), 3,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_LT,
    ACTIONS(641), 13,
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
  [7003] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(609), 8,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(611), 8,
      anon_sym_GT,
      anon_sym_not,
      anon_sym_only,
      anon_sym_selector,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      sym_identifier,
  [7028] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(637), 8,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(639), 8,
      anon_sym_GT,
      anon_sym_not,
      anon_sym_only,
      anon_sym_selector,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      sym_identifier,
  [7053] = 12,
    ACTIONS(804), 1,
      anon_sym_LPAREN,
    ACTIONS(806), 1,
      anon_sym_POUND,
    ACTIONS(808), 1,
      sym_string_value,
    ACTIONS(810), 1,
      aux_sym_integer_value_token1,
    ACTIONS(812), 1,
      aux_sym_float_value_token1,
    ACTIONS(814), 1,
      sym_identifier,
    ACTIONS(816), 1,
      sym_variable_identifier,
    ACTIONS(818), 1,
      sym_plain_value,
    STATE(293), 1,
      sym__value,
    STATE(429), 1,
      sym_include_argument,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    STATE(286), 6,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [7096] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(633), 8,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(635), 8,
      anon_sym_GT,
      anon_sym_not,
      anon_sym_only,
      anon_sym_selector,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      sym_identifier,
  [7121] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(591), 8,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(595), 8,
      anon_sym_GT,
      anon_sym_not,
      anon_sym_only,
      anon_sym_selector,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      sym_identifier,
  [7146] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(615), 3,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_LT,
    ACTIONS(613), 13,
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
  [7171] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(611), 3,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_LT,
    ACTIONS(609), 13,
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
  [7196] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(645), 8,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(647), 8,
      anon_sym_GT,
      anon_sym_not,
      anon_sym_only,
      anon_sym_selector,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      sym_identifier,
  [7221] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(619), 3,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_LT,
    ACTIONS(617), 13,
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
  [7246] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(595), 3,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_LT,
    ACTIONS(591), 13,
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
  [7271] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(639), 3,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_LT,
    ACTIONS(637), 13,
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
  [7296] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(641), 8,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(643), 8,
      anon_sym_GT,
      anon_sym_not,
      anon_sym_only,
      anon_sym_selector,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      sym_identifier,
  [7321] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(625), 8,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(627), 8,
      anon_sym_GT,
      anon_sym_not,
      anon_sym_only,
      anon_sym_selector,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      sym_identifier,
  [7346] = 12,
    ACTIONS(331), 1,
      anon_sym_LPAREN,
    ACTIONS(343), 1,
      aux_sym_integer_value_token1,
    ACTIONS(345), 1,
      aux_sym_float_value_token1,
    ACTIONS(349), 1,
      sym_variable_identifier,
    ACTIONS(351), 1,
      sym_plain_value,
    ACTIONS(555), 1,
      anon_sym_POUND,
    ACTIONS(561), 1,
      sym_string_value,
    ACTIONS(563), 1,
      sym_identifier,
    STATE(146), 1,
      sym__value,
    STATE(159), 1,
      aux_sym_pseudo_class_arguments_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    STATE(134), 6,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [7389] = 12,
    ACTIONS(331), 1,
      anon_sym_LPAREN,
    ACTIONS(343), 1,
      aux_sym_integer_value_token1,
    ACTIONS(345), 1,
      aux_sym_float_value_token1,
    ACTIONS(349), 1,
      sym_variable_identifier,
    ACTIONS(351), 1,
      sym_plain_value,
    ACTIONS(555), 1,
      anon_sym_POUND,
    ACTIONS(561), 1,
      sym_string_value,
    ACTIONS(563), 1,
      sym_identifier,
    STATE(146), 1,
      sym__value,
    STATE(175), 1,
      aux_sym_pseudo_class_arguments_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    STATE(134), 6,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [7432] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(635), 3,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_LT,
    ACTIONS(633), 13,
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
  [7457] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(621), 8,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(623), 8,
      anon_sym_GT,
      anon_sym_not,
      anon_sym_only,
      anon_sym_selector,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      sym_identifier,
  [7482] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(647), 3,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_LT,
    ACTIONS(645), 13,
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
  [7507] = 12,
    ACTIONS(804), 1,
      anon_sym_LPAREN,
    ACTIONS(806), 1,
      anon_sym_POUND,
    ACTIONS(808), 1,
      sym_string_value,
    ACTIONS(810), 1,
      aux_sym_integer_value_token1,
    ACTIONS(812), 1,
      aux_sym_float_value_token1,
    ACTIONS(814), 1,
      sym_identifier,
    ACTIONS(816), 1,
      sym_variable_identifier,
    ACTIONS(818), 1,
      sym_plain_value,
    STATE(293), 1,
      sym__value,
    STATE(394), 1,
      sym_include_argument,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    STATE(286), 6,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [7550] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(631), 3,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_LT,
    ACTIONS(629), 13,
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
  [7575] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(613), 8,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(615), 8,
      anon_sym_GT,
      anon_sym_not,
      anon_sym_only,
      anon_sym_selector,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      sym_identifier,
  [7600] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(623), 3,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_LT,
    ACTIONS(621), 13,
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
  [7625] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(627), 3,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_LT,
    ACTIONS(625), 13,
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
  [7650] = 11,
    ACTIONS(820), 1,
      anon_sym_LPAREN,
    ACTIONS(822), 1,
      anon_sym_POUND,
    ACTIONS(824), 1,
      sym_string_value,
    ACTIONS(826), 1,
      aux_sym_integer_value_token1,
    ACTIONS(828), 1,
      aux_sym_float_value_token1,
    ACTIONS(830), 1,
      sym_identifier,
    ACTIONS(832), 1,
      sym_variable_identifier,
    ACTIONS(834), 1,
      sym_plain_value,
    STATE(279), 1,
      sym__value,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    STATE(190), 6,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [7690] = 11,
    ACTIONS(820), 1,
      anon_sym_LPAREN,
    ACTIONS(822), 1,
      anon_sym_POUND,
    ACTIONS(824), 1,
      sym_string_value,
    ACTIONS(826), 1,
      aux_sym_integer_value_token1,
    ACTIONS(828), 1,
      aux_sym_float_value_token1,
    ACTIONS(830), 1,
      sym_identifier,
    ACTIONS(832), 1,
      sym_variable_identifier,
    ACTIONS(834), 1,
      sym_plain_value,
    STATE(268), 1,
      sym__value,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    STATE(190), 6,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [7730] = 11,
    ACTIONS(820), 1,
      anon_sym_LPAREN,
    ACTIONS(822), 1,
      anon_sym_POUND,
    ACTIONS(824), 1,
      sym_string_value,
    ACTIONS(830), 1,
      sym_identifier,
    ACTIONS(832), 1,
      sym_variable_identifier,
    ACTIONS(834), 1,
      sym_plain_value,
    ACTIONS(836), 1,
      aux_sym_integer_value_token1,
    ACTIONS(838), 1,
      aux_sym_float_value_token1,
    STATE(328), 1,
      sym__value,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    STATE(190), 6,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [7770] = 11,
    ACTIONS(331), 1,
      anon_sym_LPAREN,
    ACTIONS(343), 1,
      aux_sym_integer_value_token1,
    ACTIONS(345), 1,
      aux_sym_float_value_token1,
    ACTIONS(349), 1,
      sym_variable_identifier,
    ACTIONS(351), 1,
      sym_plain_value,
    ACTIONS(555), 1,
      anon_sym_POUND,
    ACTIONS(561), 1,
      sym_string_value,
    ACTIONS(563), 1,
      sym_identifier,
    STATE(144), 1,
      sym__value,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    STATE(134), 6,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [7810] = 11,
    ACTIONS(331), 1,
      anon_sym_LPAREN,
    ACTIONS(343), 1,
      aux_sym_integer_value_token1,
    ACTIONS(345), 1,
      aux_sym_float_value_token1,
    ACTIONS(349), 1,
      sym_variable_identifier,
    ACTIONS(351), 1,
      sym_plain_value,
    ACTIONS(555), 1,
      anon_sym_POUND,
    ACTIONS(561), 1,
      sym_string_value,
    ACTIONS(563), 1,
      sym_identifier,
    STATE(132), 1,
      sym__value,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    STATE(134), 6,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [7850] = 11,
    ACTIONS(820), 1,
      anon_sym_LPAREN,
    ACTIONS(822), 1,
      anon_sym_POUND,
    ACTIONS(824), 1,
      sym_string_value,
    ACTIONS(830), 1,
      sym_identifier,
    ACTIONS(832), 1,
      sym_variable_identifier,
    ACTIONS(834), 1,
      sym_plain_value,
    ACTIONS(836), 1,
      aux_sym_integer_value_token1,
    ACTIONS(838), 1,
      aux_sym_float_value_token1,
    STATE(334), 1,
      sym__value,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    STATE(190), 6,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [7890] = 11,
    ACTIONS(820), 1,
      anon_sym_LPAREN,
    ACTIONS(822), 1,
      anon_sym_POUND,
    ACTIONS(824), 1,
      sym_string_value,
    ACTIONS(826), 1,
      aux_sym_integer_value_token1,
    ACTIONS(828), 1,
      aux_sym_float_value_token1,
    ACTIONS(830), 1,
      sym_identifier,
    ACTIONS(832), 1,
      sym_variable_identifier,
    ACTIONS(834), 1,
      sym_plain_value,
    STATE(317), 1,
      sym__value,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    STATE(190), 6,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [7930] = 11,
    ACTIONS(331), 1,
      anon_sym_LPAREN,
    ACTIONS(343), 1,
      aux_sym_integer_value_token1,
    ACTIONS(345), 1,
      aux_sym_float_value_token1,
    ACTIONS(349), 1,
      sym_variable_identifier,
    ACTIONS(351), 1,
      sym_plain_value,
    ACTIONS(555), 1,
      anon_sym_POUND,
    ACTIONS(561), 1,
      sym_string_value,
    ACTIONS(563), 1,
      sym_identifier,
    STATE(121), 1,
      sym__value,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    STATE(134), 6,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [7970] = 11,
    ACTIONS(840), 1,
      anon_sym_LPAREN,
    ACTIONS(842), 1,
      anon_sym_POUND,
    ACTIONS(844), 1,
      sym_string_value,
    ACTIONS(846), 1,
      aux_sym_integer_value_token1,
    ACTIONS(848), 1,
      aux_sym_float_value_token1,
    ACTIONS(850), 1,
      sym_identifier,
    ACTIONS(852), 1,
      sym_variable_identifier,
    ACTIONS(854), 1,
      sym_plain_value,
    STATE(145), 1,
      sym__value,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    STATE(185), 6,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [8010] = 11,
    ACTIONS(331), 1,
      anon_sym_LPAREN,
    ACTIONS(343), 1,
      aux_sym_integer_value_token1,
    ACTIONS(345), 1,
      aux_sym_float_value_token1,
    ACTIONS(349), 1,
      sym_variable_identifier,
    ACTIONS(351), 1,
      sym_plain_value,
    ACTIONS(555), 1,
      anon_sym_POUND,
    ACTIONS(561), 1,
      sym_string_value,
    ACTIONS(563), 1,
      sym_identifier,
    STATE(125), 1,
      sym__value,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    STATE(134), 6,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [8050] = 11,
    ACTIONS(331), 1,
      anon_sym_LPAREN,
    ACTIONS(343), 1,
      aux_sym_integer_value_token1,
    ACTIONS(345), 1,
      aux_sym_float_value_token1,
    ACTIONS(349), 1,
      sym_variable_identifier,
    ACTIONS(351), 1,
      sym_plain_value,
    ACTIONS(555), 1,
      anon_sym_POUND,
    ACTIONS(561), 1,
      sym_string_value,
    ACTIONS(563), 1,
      sym_identifier,
    STATE(123), 1,
      sym__value,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    STATE(134), 6,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [8090] = 11,
    ACTIONS(804), 1,
      anon_sym_LPAREN,
    ACTIONS(806), 1,
      anon_sym_POUND,
    ACTIONS(808), 1,
      sym_string_value,
    ACTIONS(810), 1,
      aux_sym_integer_value_token1,
    ACTIONS(812), 1,
      aux_sym_float_value_token1,
    ACTIONS(814), 1,
      sym_identifier,
    ACTIONS(818), 1,
      sym_plain_value,
    ACTIONS(856), 1,
      sym_variable_identifier,
    STATE(300), 1,
      sym__value,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    STATE(286), 6,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [8130] = 11,
    ACTIONS(840), 1,
      anon_sym_LPAREN,
    ACTIONS(842), 1,
      anon_sym_POUND,
    ACTIONS(844), 1,
      sym_string_value,
    ACTIONS(846), 1,
      aux_sym_integer_value_token1,
    ACTIONS(848), 1,
      aux_sym_float_value_token1,
    ACTIONS(850), 1,
      sym_identifier,
    ACTIONS(852), 1,
      sym_variable_identifier,
    ACTIONS(854), 1,
      sym_plain_value,
    STATE(201), 1,
      sym__value,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    STATE(185), 6,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [8170] = 11,
    ACTIONS(820), 1,
      anon_sym_LPAREN,
    ACTIONS(822), 1,
      anon_sym_POUND,
    ACTIONS(824), 1,
      sym_string_value,
    ACTIONS(826), 1,
      aux_sym_integer_value_token1,
    ACTIONS(828), 1,
      aux_sym_float_value_token1,
    ACTIONS(830), 1,
      sym_identifier,
    ACTIONS(832), 1,
      sym_variable_identifier,
    ACTIONS(834), 1,
      sym_plain_value,
    STATE(319), 1,
      sym__value,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    STATE(190), 6,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [8210] = 11,
    ACTIONS(820), 1,
      anon_sym_LPAREN,
    ACTIONS(822), 1,
      anon_sym_POUND,
    ACTIONS(824), 1,
      sym_string_value,
    ACTIONS(830), 1,
      sym_identifier,
    ACTIONS(832), 1,
      sym_variable_identifier,
    ACTIONS(834), 1,
      sym_plain_value,
    ACTIONS(836), 1,
      aux_sym_integer_value_token1,
    ACTIONS(838), 1,
      aux_sym_float_value_token1,
    STATE(186), 1,
      sym__value,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    STATE(190), 6,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [8250] = 11,
    ACTIONS(820), 1,
      anon_sym_LPAREN,
    ACTIONS(822), 1,
      anon_sym_POUND,
    ACTIONS(824), 1,
      sym_string_value,
    ACTIONS(826), 1,
      aux_sym_integer_value_token1,
    ACTIONS(828), 1,
      aux_sym_float_value_token1,
    ACTIONS(830), 1,
      sym_identifier,
    ACTIONS(832), 1,
      sym_variable_identifier,
    ACTIONS(834), 1,
      sym_plain_value,
    STATE(325), 1,
      sym__value,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    STATE(190), 6,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [8290] = 11,
    ACTIONS(820), 1,
      anon_sym_LPAREN,
    ACTIONS(822), 1,
      anon_sym_POUND,
    ACTIONS(824), 1,
      sym_string_value,
    ACTIONS(826), 1,
      aux_sym_integer_value_token1,
    ACTIONS(828), 1,
      aux_sym_float_value_token1,
    ACTIONS(830), 1,
      sym_identifier,
    ACTIONS(832), 1,
      sym_variable_identifier,
    ACTIONS(834), 1,
      sym_plain_value,
    STATE(341), 1,
      sym__value,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    STATE(190), 6,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [8330] = 11,
    ACTIONS(820), 1,
      anon_sym_LPAREN,
    ACTIONS(822), 1,
      anon_sym_POUND,
    ACTIONS(824), 1,
      sym_string_value,
    ACTIONS(826), 1,
      aux_sym_integer_value_token1,
    ACTIONS(828), 1,
      aux_sym_float_value_token1,
    ACTIONS(830), 1,
      sym_identifier,
    ACTIONS(832), 1,
      sym_variable_identifier,
    ACTIONS(834), 1,
      sym_plain_value,
    STATE(332), 1,
      sym__value,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    STATE(190), 6,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [8370] = 11,
    ACTIONS(820), 1,
      anon_sym_LPAREN,
    ACTIONS(822), 1,
      anon_sym_POUND,
    ACTIONS(824), 1,
      sym_string_value,
    ACTIONS(826), 1,
      aux_sym_integer_value_token1,
    ACTIONS(828), 1,
      aux_sym_float_value_token1,
    ACTIONS(830), 1,
      sym_identifier,
    ACTIONS(832), 1,
      sym_variable_identifier,
    ACTIONS(834), 1,
      sym_plain_value,
    STATE(342), 1,
      sym__value,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    STATE(190), 6,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [8410] = 11,
    ACTIONS(820), 1,
      anon_sym_LPAREN,
    ACTIONS(822), 1,
      anon_sym_POUND,
    ACTIONS(824), 1,
      sym_string_value,
    ACTIONS(826), 1,
      aux_sym_integer_value_token1,
    ACTIONS(828), 1,
      aux_sym_float_value_token1,
    ACTIONS(830), 1,
      sym_identifier,
    ACTIONS(832), 1,
      sym_variable_identifier,
    ACTIONS(834), 1,
      sym_plain_value,
    STATE(287), 1,
      sym__value,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    STATE(190), 6,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [8450] = 11,
    ACTIONS(820), 1,
      anon_sym_LPAREN,
    ACTIONS(822), 1,
      anon_sym_POUND,
    ACTIONS(824), 1,
      sym_string_value,
    ACTIONS(826), 1,
      aux_sym_integer_value_token1,
    ACTIONS(828), 1,
      aux_sym_float_value_token1,
    ACTIONS(830), 1,
      sym_identifier,
    ACTIONS(832), 1,
      sym_variable_identifier,
    ACTIONS(834), 1,
      sym_plain_value,
    STATE(267), 1,
      sym__value,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    STATE(190), 6,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [8490] = 11,
    ACTIONS(820), 1,
      anon_sym_LPAREN,
    ACTIONS(822), 1,
      anon_sym_POUND,
    ACTIONS(824), 1,
      sym_string_value,
    ACTIONS(826), 1,
      aux_sym_integer_value_token1,
    ACTIONS(828), 1,
      aux_sym_float_value_token1,
    ACTIONS(830), 1,
      sym_identifier,
    ACTIONS(832), 1,
      sym_variable_identifier,
    ACTIONS(834), 1,
      sym_plain_value,
    STATE(271), 1,
      sym__value,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    STATE(190), 6,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [8530] = 11,
    ACTIONS(820), 1,
      anon_sym_LPAREN,
    ACTIONS(822), 1,
      anon_sym_POUND,
    ACTIONS(824), 1,
      sym_string_value,
    ACTIONS(826), 1,
      aux_sym_integer_value_token1,
    ACTIONS(828), 1,
      aux_sym_float_value_token1,
    ACTIONS(830), 1,
      sym_identifier,
    ACTIONS(832), 1,
      sym_variable_identifier,
    ACTIONS(834), 1,
      sym_plain_value,
    STATE(273), 1,
      sym__value,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    STATE(190), 6,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [8570] = 11,
    ACTIONS(820), 1,
      anon_sym_LPAREN,
    ACTIONS(822), 1,
      anon_sym_POUND,
    ACTIONS(824), 1,
      sym_string_value,
    ACTIONS(826), 1,
      aux_sym_integer_value_token1,
    ACTIONS(828), 1,
      aux_sym_float_value_token1,
    ACTIONS(830), 1,
      sym_identifier,
    ACTIONS(832), 1,
      sym_variable_identifier,
    ACTIONS(834), 1,
      sym_plain_value,
    STATE(186), 1,
      sym__value,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    STATE(190), 6,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [8610] = 11,
    ACTIONS(820), 1,
      anon_sym_LPAREN,
    ACTIONS(822), 1,
      anon_sym_POUND,
    ACTIONS(824), 1,
      sym_string_value,
    ACTIONS(826), 1,
      aux_sym_integer_value_token1,
    ACTIONS(828), 1,
      aux_sym_float_value_token1,
    ACTIONS(830), 1,
      sym_identifier,
    ACTIONS(832), 1,
      sym_variable_identifier,
    ACTIONS(834), 1,
      sym_plain_value,
    STATE(274), 1,
      sym__value,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    STATE(190), 6,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [8650] = 11,
    ACTIONS(331), 1,
      anon_sym_LPAREN,
    ACTIONS(343), 1,
      aux_sym_integer_value_token1,
    ACTIONS(345), 1,
      aux_sym_float_value_token1,
    ACTIONS(349), 1,
      sym_variable_identifier,
    ACTIONS(351), 1,
      sym_plain_value,
    ACTIONS(555), 1,
      anon_sym_POUND,
    ACTIONS(561), 1,
      sym_string_value,
    ACTIONS(563), 1,
      sym_identifier,
    STATE(122), 1,
      sym__value,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    STATE(134), 6,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [8690] = 11,
    ACTIONS(331), 1,
      anon_sym_LPAREN,
    ACTIONS(343), 1,
      aux_sym_integer_value_token1,
    ACTIONS(345), 1,
      aux_sym_float_value_token1,
    ACTIONS(349), 1,
      sym_variable_identifier,
    ACTIONS(351), 1,
      sym_plain_value,
    ACTIONS(555), 1,
      anon_sym_POUND,
    ACTIONS(561), 1,
      sym_string_value,
    ACTIONS(563), 1,
      sym_identifier,
    STATE(124), 1,
      sym__value,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    STATE(134), 6,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [8730] = 11,
    ACTIONS(820), 1,
      anon_sym_LPAREN,
    ACTIONS(822), 1,
      anon_sym_POUND,
    ACTIONS(824), 1,
      sym_string_value,
    ACTIONS(826), 1,
      aux_sym_integer_value_token1,
    ACTIONS(828), 1,
      aux_sym_float_value_token1,
    ACTIONS(830), 1,
      sym_identifier,
    ACTIONS(832), 1,
      sym_variable_identifier,
    ACTIONS(834), 1,
      sym_plain_value,
    STATE(344), 1,
      sym__value,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    STATE(190), 6,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [8770] = 11,
    ACTIONS(820), 1,
      anon_sym_LPAREN,
    ACTIONS(822), 1,
      anon_sym_POUND,
    ACTIONS(824), 1,
      sym_string_value,
    ACTIONS(826), 1,
      aux_sym_integer_value_token1,
    ACTIONS(828), 1,
      aux_sym_float_value_token1,
    ACTIONS(830), 1,
      sym_identifier,
    ACTIONS(832), 1,
      sym_variable_identifier,
    ACTIONS(834), 1,
      sym_plain_value,
    STATE(340), 1,
      sym__value,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    STATE(190), 6,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [8810] = 11,
    ACTIONS(820), 1,
      anon_sym_LPAREN,
    ACTIONS(822), 1,
      anon_sym_POUND,
    ACTIONS(824), 1,
      sym_string_value,
    ACTIONS(826), 1,
      aux_sym_integer_value_token1,
    ACTIONS(828), 1,
      aux_sym_float_value_token1,
    ACTIONS(830), 1,
      sym_identifier,
    ACTIONS(832), 1,
      sym_variable_identifier,
    ACTIONS(834), 1,
      sym_plain_value,
    STATE(335), 1,
      sym__value,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    STATE(190), 6,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [8850] = 11,
    ACTIONS(820), 1,
      anon_sym_LPAREN,
    ACTIONS(822), 1,
      anon_sym_POUND,
    ACTIONS(824), 1,
      sym_string_value,
    ACTIONS(826), 1,
      aux_sym_integer_value_token1,
    ACTIONS(828), 1,
      aux_sym_float_value_token1,
    ACTIONS(830), 1,
      sym_identifier,
    ACTIONS(832), 1,
      sym_variable_identifier,
    ACTIONS(834), 1,
      sym_plain_value,
    STATE(337), 1,
      sym__value,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    STATE(190), 6,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [8890] = 11,
    ACTIONS(820), 1,
      anon_sym_LPAREN,
    ACTIONS(822), 1,
      anon_sym_POUND,
    ACTIONS(824), 1,
      sym_string_value,
    ACTIONS(826), 1,
      aux_sym_integer_value_token1,
    ACTIONS(828), 1,
      aux_sym_float_value_token1,
    ACTIONS(830), 1,
      sym_identifier,
    ACTIONS(832), 1,
      sym_variable_identifier,
    ACTIONS(834), 1,
      sym_plain_value,
    STATE(272), 1,
      sym__value,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    STATE(190), 6,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [8930] = 11,
    ACTIONS(820), 1,
      anon_sym_LPAREN,
    ACTIONS(822), 1,
      anon_sym_POUND,
    ACTIONS(824), 1,
      sym_string_value,
    ACTIONS(826), 1,
      aux_sym_integer_value_token1,
    ACTIONS(828), 1,
      aux_sym_float_value_token1,
    ACTIONS(830), 1,
      sym_identifier,
    ACTIONS(832), 1,
      sym_variable_identifier,
    ACTIONS(834), 1,
      sym_plain_value,
    STATE(324), 1,
      sym__value,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    STATE(190), 6,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [8970] = 11,
    ACTIONS(820), 1,
      anon_sym_LPAREN,
    ACTIONS(822), 1,
      anon_sym_POUND,
    ACTIONS(824), 1,
      sym_string_value,
    ACTIONS(826), 1,
      aux_sym_integer_value_token1,
    ACTIONS(828), 1,
      aux_sym_float_value_token1,
    ACTIONS(830), 1,
      sym_identifier,
    ACTIONS(832), 1,
      sym_variable_identifier,
    ACTIONS(834), 1,
      sym_plain_value,
    STATE(322), 1,
      sym__value,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    STATE(190), 6,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [9010] = 11,
    ACTIONS(820), 1,
      anon_sym_LPAREN,
    ACTIONS(822), 1,
      anon_sym_POUND,
    ACTIONS(824), 1,
      sym_string_value,
    ACTIONS(826), 1,
      aux_sym_integer_value_token1,
    ACTIONS(828), 1,
      aux_sym_float_value_token1,
    ACTIONS(830), 1,
      sym_identifier,
    ACTIONS(832), 1,
      sym_variable_identifier,
    ACTIONS(834), 1,
      sym_plain_value,
    STATE(321), 1,
      sym__value,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    STATE(190), 6,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [9050] = 11,
    ACTIONS(804), 1,
      anon_sym_LPAREN,
    ACTIONS(806), 1,
      anon_sym_POUND,
    ACTIONS(808), 1,
      sym_string_value,
    ACTIONS(810), 1,
      aux_sym_integer_value_token1,
    ACTIONS(812), 1,
      aux_sym_float_value_token1,
    ACTIONS(814), 1,
      sym_identifier,
    ACTIONS(818), 1,
      sym_plain_value,
    ACTIONS(856), 1,
      sym_variable_identifier,
    STATE(275), 1,
      sym__value,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    STATE(286), 6,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [9090] = 11,
    ACTIONS(820), 1,
      anon_sym_LPAREN,
    ACTIONS(822), 1,
      anon_sym_POUND,
    ACTIONS(824), 1,
      sym_string_value,
    ACTIONS(826), 1,
      aux_sym_integer_value_token1,
    ACTIONS(828), 1,
      aux_sym_float_value_token1,
    ACTIONS(830), 1,
      sym_identifier,
    ACTIONS(832), 1,
      sym_variable_identifier,
    ACTIONS(834), 1,
      sym_plain_value,
    STATE(339), 1,
      sym__value,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    STATE(190), 6,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [9130] = 11,
    ACTIONS(820), 1,
      anon_sym_LPAREN,
    ACTIONS(822), 1,
      anon_sym_POUND,
    ACTIONS(824), 1,
      sym_string_value,
    ACTIONS(826), 1,
      aux_sym_integer_value_token1,
    ACTIONS(828), 1,
      aux_sym_float_value_token1,
    ACTIONS(830), 1,
      sym_identifier,
    ACTIONS(832), 1,
      sym_variable_identifier,
    ACTIONS(834), 1,
      sym_plain_value,
    STATE(302), 1,
      sym__value,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    STATE(190), 6,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [9170] = 11,
    ACTIONS(820), 1,
      anon_sym_LPAREN,
    ACTIONS(822), 1,
      anon_sym_POUND,
    ACTIONS(824), 1,
      sym_string_value,
    ACTIONS(826), 1,
      aux_sym_integer_value_token1,
    ACTIONS(828), 1,
      aux_sym_float_value_token1,
    ACTIONS(830), 1,
      sym_identifier,
    ACTIONS(832), 1,
      sym_variable_identifier,
    ACTIONS(834), 1,
      sym_plain_value,
    STATE(304), 1,
      sym__value,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    STATE(190), 6,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [9210] = 11,
    ACTIONS(820), 1,
      anon_sym_LPAREN,
    ACTIONS(822), 1,
      anon_sym_POUND,
    ACTIONS(824), 1,
      sym_string_value,
    ACTIONS(826), 1,
      aux_sym_integer_value_token1,
    ACTIONS(828), 1,
      aux_sym_float_value_token1,
    ACTIONS(830), 1,
      sym_identifier,
    ACTIONS(832), 1,
      sym_variable_identifier,
    ACTIONS(834), 1,
      sym_plain_value,
    STATE(278), 1,
      sym__value,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    STATE(190), 6,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [9250] = 11,
    ACTIONS(820), 1,
      anon_sym_LPAREN,
    ACTIONS(822), 1,
      anon_sym_POUND,
    ACTIONS(824), 1,
      sym_string_value,
    ACTIONS(826), 1,
      aux_sym_integer_value_token1,
    ACTIONS(828), 1,
      aux_sym_float_value_token1,
    ACTIONS(830), 1,
      sym_identifier,
    ACTIONS(832), 1,
      sym_variable_identifier,
    ACTIONS(834), 1,
      sym_plain_value,
    STATE(266), 1,
      sym__value,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    STATE(190), 6,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [9290] = 11,
    ACTIONS(820), 1,
      anon_sym_LPAREN,
    ACTIONS(822), 1,
      anon_sym_POUND,
    ACTIONS(824), 1,
      sym_string_value,
    ACTIONS(826), 1,
      aux_sym_integer_value_token1,
    ACTIONS(828), 1,
      aux_sym_float_value_token1,
    ACTIONS(830), 1,
      sym_identifier,
    ACTIONS(832), 1,
      sym_variable_identifier,
    ACTIONS(834), 1,
      sym_plain_value,
    STATE(333), 1,
      sym__value,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    STATE(190), 6,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [9330] = 11,
    ACTIONS(820), 1,
      anon_sym_LPAREN,
    ACTIONS(822), 1,
      anon_sym_POUND,
    ACTIONS(824), 1,
      sym_string_value,
    ACTIONS(826), 1,
      aux_sym_integer_value_token1,
    ACTIONS(828), 1,
      aux_sym_float_value_token1,
    ACTIONS(830), 1,
      sym_identifier,
    ACTIONS(832), 1,
      sym_variable_identifier,
    ACTIONS(834), 1,
      sym_plain_value,
    STATE(313), 1,
      sym__value,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    STATE(190), 6,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [9370] = 11,
    ACTIONS(820), 1,
      anon_sym_LPAREN,
    ACTIONS(822), 1,
      anon_sym_POUND,
    ACTIONS(824), 1,
      sym_string_value,
    ACTIONS(826), 1,
      aux_sym_integer_value_token1,
    ACTIONS(828), 1,
      aux_sym_float_value_token1,
    ACTIONS(830), 1,
      sym_identifier,
    ACTIONS(832), 1,
      sym_variable_identifier,
    ACTIONS(834), 1,
      sym_plain_value,
    STATE(294), 1,
      sym__value,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    STATE(190), 6,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [9410] = 11,
    ACTIONS(840), 1,
      anon_sym_LPAREN,
    ACTIONS(842), 1,
      anon_sym_POUND,
    ACTIONS(844), 1,
      sym_string_value,
    ACTIONS(846), 1,
      aux_sym_integer_value_token1,
    ACTIONS(848), 1,
      aux_sym_float_value_token1,
    ACTIONS(850), 1,
      sym_identifier,
    ACTIONS(852), 1,
      sym_variable_identifier,
    ACTIONS(854), 1,
      sym_plain_value,
    STATE(142), 1,
      sym__value,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    STATE(185), 6,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [9450] = 11,
    ACTIONS(820), 1,
      anon_sym_LPAREN,
    ACTIONS(822), 1,
      anon_sym_POUND,
    ACTIONS(824), 1,
      sym_string_value,
    ACTIONS(826), 1,
      aux_sym_integer_value_token1,
    ACTIONS(828), 1,
      aux_sym_float_value_token1,
    ACTIONS(830), 1,
      sym_identifier,
    ACTIONS(832), 1,
      sym_variable_identifier,
    ACTIONS(834), 1,
      sym_plain_value,
    STATE(323), 1,
      sym__value,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    STATE(190), 6,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [9490] = 11,
    ACTIONS(820), 1,
      anon_sym_LPAREN,
    ACTIONS(822), 1,
      anon_sym_POUND,
    ACTIONS(824), 1,
      sym_string_value,
    ACTIONS(826), 1,
      aux_sym_integer_value_token1,
    ACTIONS(828), 1,
      aux_sym_float_value_token1,
    ACTIONS(830), 1,
      sym_identifier,
    ACTIONS(832), 1,
      sym_variable_identifier,
    ACTIONS(834), 1,
      sym_plain_value,
    STATE(326), 1,
      sym__value,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    STATE(190), 6,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [9530] = 11,
    ACTIONS(820), 1,
      anon_sym_LPAREN,
    ACTIONS(822), 1,
      anon_sym_POUND,
    ACTIONS(824), 1,
      sym_string_value,
    ACTIONS(826), 1,
      aux_sym_integer_value_token1,
    ACTIONS(828), 1,
      aux_sym_float_value_token1,
    ACTIONS(830), 1,
      sym_identifier,
    ACTIONS(832), 1,
      sym_variable_identifier,
    ACTIONS(834), 1,
      sym_plain_value,
    STATE(281), 1,
      sym__value,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    STATE(190), 6,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [9570] = 9,
    ACTIONS(651), 1,
      anon_sym_LPAREN,
    ACTIONS(659), 1,
      anon_sym_selector,
    ACTIONS(661), 1,
      sym_identifier,
    ACTIONS(858), 1,
      anon_sym_SEMI,
    ACTIONS(860), 1,
      anon_sym_LBRACE,
    STATE(90), 1,
      sym_block,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(657), 2,
      anon_sym_not,
      anon_sym_only,
    STATE(351), 6,
      sym__query,
      sym_feature_query,
      sym_parenthesized_query,
      sym_binary_query,
      sym_unary_query,
      sym_selector_query,
  [9605] = 5,
    ACTIONS(864), 1,
      anon_sym_COLON,
    ACTIONS(866), 1,
      anon_sym_LPAREN2,
    STATE(311), 1,
      sym_pseudo_class_arguments,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(862), 11,
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
  [9632] = 5,
    ACTIONS(868), 1,
      anon_sym_LPAREN2,
    STATE(288), 1,
      sym_arguments,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(581), 3,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_LT,
    ACTIONS(587), 9,
      anon_sym_COMMA,
      anon_sym_RPAREN2,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [9659] = 5,
    ACTIONS(866), 1,
      anon_sym_LPAREN2,
    ACTIONS(872), 1,
      anon_sym_COLON,
    STATE(305), 1,
      sym_pseudo_class_arguments,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(870), 11,
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
  [9686] = 9,
    ACTIONS(651), 1,
      anon_sym_LPAREN,
    ACTIONS(659), 1,
      anon_sym_selector,
    ACTIONS(661), 1,
      sym_identifier,
    ACTIONS(874), 1,
      anon_sym_SEMI,
    ACTIONS(876), 1,
      anon_sym_LBRACE,
    STATE(78), 1,
      sym_block,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(657), 2,
      anon_sym_not,
      anon_sym_only,
    STATE(354), 6,
      sym__query,
      sym_feature_query,
      sym_parenthesized_query,
      sym_binary_query,
      sym_unary_query,
      sym_selector_query,
  [9721] = 4,
    ACTIONS(878), 1,
      sym_unit,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(605), 3,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_LT,
    ACTIONS(603), 9,
      anon_sym_COMMA,
      anon_sym_RPAREN2,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [9745] = 4,
    ACTIONS(880), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(611), 3,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_LT,
    ACTIONS(609), 9,
      anon_sym_COMMA,
      anon_sym_RPAREN2,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [9769] = 4,
    ACTIONS(882), 1,
      sym_unit,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(599), 3,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_LT,
    ACTIONS(597), 9,
      anon_sym_COMMA,
      anon_sym_RPAREN2,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [9793] = 3,
    ACTIONS(886), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(884), 11,
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
  [9814] = 4,
    ACTIONS(890), 1,
      anon_sym_COLON,
    ACTIONS(892), 1,
      anon_sym_DOT,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(888), 10,
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
  [9837] = 4,
    ACTIONS(892), 1,
      anon_sym_DOT,
    ACTIONS(896), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(894), 10,
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
  [9860] = 13,
    ACTIONS(892), 1,
      anon_sym_DOT,
    ACTIONS(898), 1,
      anon_sym_COMMA,
    ACTIONS(900), 1,
      anon_sym_LBRACE,
    ACTIONS(902), 1,
      anon_sym_COLON,
    ACTIONS(904), 1,
      anon_sym_COLON_COLON,
    ACTIONS(906), 1,
      anon_sym_POUND,
    ACTIONS(908), 1,
      anon_sym_LBRACK,
    ACTIONS(910), 1,
      anon_sym_GT,
    ACTIONS(912), 1,
      anon_sym_TILDE,
    ACTIONS(914), 1,
      anon_sym_PLUS,
    ACTIONS(916), 1,
      sym__descendant_operator,
    STATE(398), 1,
      aux_sym_selectors_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [9901] = 4,
    ACTIONS(918), 1,
      sym_unit,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(599), 4,
      anon_sym_through,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_LT,
    ACTIONS(597), 7,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [9924] = 3,
    ACTIONS(922), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(920), 11,
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
  [9945] = 5,
    ACTIONS(860), 1,
      anon_sym_LBRACE,
    STATE(55), 1,
      sym_block,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(926), 3,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_LT,
    ACTIONS(924), 7,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [9970] = 5,
    ACTIONS(860), 1,
      anon_sym_LBRACE,
    STATE(57), 1,
      sym_block,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(926), 3,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_LT,
    ACTIONS(924), 7,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [9995] = 5,
    ACTIONS(876), 1,
      anon_sym_LBRACE,
    STATE(46), 1,
      sym_block,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(926), 3,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_LT,
    ACTIONS(924), 7,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [10020] = 3,
    ACTIONS(930), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(928), 11,
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
  [10041] = 3,
    ACTIONS(934), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(932), 11,
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
  [10062] = 5,
    ACTIONS(860), 1,
      anon_sym_LBRACE,
    STATE(58), 1,
      sym_block,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(926), 3,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_LT,
    ACTIONS(924), 7,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [10087] = 4,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(936), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    ACTIONS(926), 3,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_LT,
    ACTIONS(924), 7,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [10110] = 5,
    ACTIONS(938), 1,
      anon_sym_LBRACE,
    STATE(30), 1,
      sym_block,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(926), 3,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_LT,
    ACTIONS(924), 7,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [10135] = 5,
    ACTIONS(860), 1,
      anon_sym_LBRACE,
    STATE(64), 1,
      sym_block,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(926), 3,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_LT,
    ACTIONS(924), 7,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [10160] = 4,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(940), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN2,
    ACTIONS(944), 3,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_LT,
    ACTIONS(942), 7,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [10183] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(611), 3,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_LT,
    ACTIONS(609), 9,
      anon_sym_COMMA,
      anon_sym_RPAREN2,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [10204] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(647), 3,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_LT,
    ACTIONS(645), 9,
      anon_sym_COMMA,
      anon_sym_RPAREN2,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [10225] = 5,
    ACTIONS(876), 1,
      anon_sym_LBRACE,
    STATE(79), 1,
      sym_block,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(926), 3,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_LT,
    ACTIONS(924), 7,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [10250] = 5,
    ACTIONS(876), 1,
      anon_sym_LBRACE,
    STATE(84), 1,
      sym_block,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(926), 3,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_LT,
    ACTIONS(924), 7,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [10275] = 3,
    ACTIONS(948), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(946), 11,
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
  [10296] = 5,
    ACTIONS(950), 1,
      anon_sym_LBRACE,
    STATE(22), 1,
      sym_block,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(926), 3,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_LT,
    ACTIONS(924), 7,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [10321] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(631), 3,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_LT,
    ACTIONS(629), 9,
      anon_sym_COMMA,
      anon_sym_RPAREN2,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [10342] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(627), 3,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_LT,
    ACTIONS(625), 9,
      anon_sym_COMMA,
      anon_sym_RPAREN2,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [10363] = 4,
    ACTIONS(952), 1,
      sym_unit,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(605), 4,
      anon_sym_through,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_LT,
    ACTIONS(603), 7,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [10386] = 4,
    ACTIONS(892), 1,
      anon_sym_DOT,
    ACTIONS(956), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(954), 10,
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
  [10409] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(595), 3,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_LT,
    ACTIONS(591), 9,
      anon_sym_COMMA,
      anon_sym_RPAREN2,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [10430] = 5,
    ACTIONS(876), 1,
      anon_sym_LBRACE,
    STATE(97), 1,
      sym_block,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(926), 3,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_LT,
    ACTIONS(924), 7,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [10455] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(623), 3,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_LT,
    ACTIONS(621), 9,
      anon_sym_COMMA,
      anon_sym_RPAREN2,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [10476] = 3,
    ACTIONS(960), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(958), 11,
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
  [10497] = 3,
    ACTIONS(964), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(962), 11,
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
  [10518] = 3,
    ACTIONS(968), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(966), 11,
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
  [10539] = 3,
    ACTIONS(972), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(970), 11,
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
  [10560] = 4,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(974), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN2,
    ACTIONS(944), 3,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_LT,
    ACTIONS(942), 7,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [10583] = 5,
    ACTIONS(950), 1,
      anon_sym_LBRACE,
    STATE(23), 1,
      sym_block,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(926), 3,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_LT,
    ACTIONS(924), 7,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [10608] = 3,
    ACTIONS(978), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(976), 11,
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
  [10629] = 3,
    ACTIONS(982), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(980), 11,
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
  [10650] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(619), 3,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_LT,
    ACTIONS(617), 9,
      anon_sym_COMMA,
      anon_sym_RPAREN2,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [10671] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(635), 3,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_LT,
    ACTIONS(633), 9,
      anon_sym_COMMA,
      anon_sym_RPAREN2,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [10692] = 3,
    ACTIONS(986), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(984), 11,
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
  [10713] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(615), 3,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_LT,
    ACTIONS(613), 9,
      anon_sym_COMMA,
      anon_sym_RPAREN2,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [10734] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(643), 3,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_LT,
    ACTIONS(641), 9,
      anon_sym_COMMA,
      anon_sym_RPAREN2,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [10755] = 5,
    ACTIONS(860), 1,
      anon_sym_LBRACE,
    STATE(102), 1,
      sym_block,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(926), 3,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_LT,
    ACTIONS(924), 7,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [10780] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(639), 3,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_LT,
    ACTIONS(637), 9,
      anon_sym_COMMA,
      anon_sym_RPAREN2,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [10801] = 5,
    ACTIONS(938), 1,
      anon_sym_LBRACE,
    STATE(24), 1,
      sym_block,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(926), 3,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_LT,
    ACTIONS(924), 7,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [10826] = 3,
    ACTIONS(990), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(988), 11,
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
  [10847] = 13,
    ACTIONS(776), 1,
      anon_sym_COMMA,
    ACTIONS(778), 1,
      anon_sym_RPAREN,
    ACTIONS(892), 1,
      anon_sym_DOT,
    ACTIONS(902), 1,
      anon_sym_COLON,
    ACTIONS(904), 1,
      anon_sym_COLON_COLON,
    ACTIONS(906), 1,
      anon_sym_POUND,
    ACTIONS(908), 1,
      anon_sym_LBRACK,
    ACTIONS(910), 1,
      anon_sym_GT,
    ACTIONS(912), 1,
      anon_sym_TILDE,
    ACTIONS(914), 1,
      anon_sym_PLUS,
    ACTIONS(916), 1,
      sym__descendant_operator,
    STATE(399), 1,
      aux_sym_pseudo_class_arguments_repeat2,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [10888] = 3,
    ACTIONS(583), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(579), 11,
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
  [10909] = 4,
    ACTIONS(892), 1,
      anon_sym_DOT,
    ACTIONS(994), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(992), 10,
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
  [10932] = 3,
    ACTIONS(998), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(996), 11,
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
  [10953] = 3,
    ACTIONS(1002), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(1000), 11,
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
  [10974] = 3,
    ACTIONS(1006), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(1004), 11,
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
  [10995] = 11,
    ACTIONS(892), 1,
      anon_sym_DOT,
    ACTIONS(902), 1,
      anon_sym_COLON,
    ACTIONS(904), 1,
      anon_sym_COLON_COLON,
    ACTIONS(906), 1,
      anon_sym_POUND,
    ACTIONS(908), 1,
      anon_sym_LBRACK,
    ACTIONS(910), 1,
      anon_sym_GT,
    ACTIONS(912), 1,
      anon_sym_TILDE,
    ACTIONS(914), 1,
      anon_sym_PLUS,
    ACTIONS(916), 1,
      sym__descendant_operator,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(1008), 2,
      anon_sym_COMMA,
      anon_sym_LBRACE,
  [11031] = 4,
    ACTIONS(1010), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(926), 3,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_LT,
    ACTIONS(924), 7,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [11053] = 6,
    ACTIONS(651), 1,
      anon_sym_LPAREN,
    ACTIONS(659), 1,
      anon_sym_selector,
    ACTIONS(661), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(657), 2,
      anon_sym_not,
      anon_sym_only,
    STATE(362), 6,
      sym__query,
      sym_feature_query,
      sym_parenthesized_query,
      sym_binary_query,
      sym_unary_query,
      sym_selector_query,
  [11079] = 6,
    ACTIONS(651), 1,
      anon_sym_LPAREN,
    ACTIONS(659), 1,
      anon_sym_selector,
    ACTIONS(1012), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(657), 2,
      anon_sym_not,
      anon_sym_only,
    STATE(401), 6,
      sym__query,
      sym_feature_query,
      sym_parenthesized_query,
      sym_binary_query,
      sym_unary_query,
      sym_selector_query,
  [11105] = 6,
    ACTIONS(651), 1,
      anon_sym_LPAREN,
    ACTIONS(659), 1,
      anon_sym_selector,
    ACTIONS(661), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(657), 2,
      anon_sym_not,
      anon_sym_only,
    STATE(366), 6,
      sym__query,
      sym_feature_query,
      sym_parenthesized_query,
      sym_binary_query,
      sym_unary_query,
      sym_selector_query,
  [11131] = 4,
    ACTIONS(1014), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(926), 3,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_LT,
    ACTIONS(924), 7,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [11153] = 6,
    ACTIONS(651), 1,
      anon_sym_LPAREN,
    ACTIONS(659), 1,
      anon_sym_selector,
    ACTIONS(661), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(657), 2,
      anon_sym_not,
      anon_sym_only,
    STATE(358), 6,
      sym__query,
      sym_feature_query,
      sym_parenthesized_query,
      sym_binary_query,
      sym_unary_query,
      sym_selector_query,
  [11179] = 4,
    ACTIONS(1016), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(926), 3,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_LT,
    ACTIONS(924), 7,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [11201] = 3,
    ACTIONS(1018), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(579), 10,
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
  [11221] = 4,
    ACTIONS(1021), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(926), 3,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_LT,
    ACTIONS(924), 7,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [11243] = 4,
    ACTIONS(1023), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(926), 3,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_LT,
    ACTIONS(924), 7,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [11265] = 4,
    ACTIONS(1025), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(926), 3,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_LT,
    ACTIONS(924), 7,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [11287] = 4,
    ACTIONS(1027), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(926), 3,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_LT,
    ACTIONS(924), 7,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [11309] = 4,
    ACTIONS(1029), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(926), 3,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_LT,
    ACTIONS(924), 7,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [11331] = 4,
    ACTIONS(1031), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(926), 3,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_LT,
    ACTIONS(924), 7,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [11353] = 3,
    ACTIONS(1033), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(579), 10,
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
  [11373] = 4,
    ACTIONS(1036), 1,
      anon_sym_through,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(1040), 3,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_LT,
    ACTIONS(1038), 7,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [11395] = 6,
    ACTIONS(651), 1,
      anon_sym_LPAREN,
    ACTIONS(659), 1,
      anon_sym_selector,
    ACTIONS(661), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(657), 2,
      anon_sym_not,
      anon_sym_only,
    STATE(389), 6,
      sym__query,
      sym_feature_query,
      sym_parenthesized_query,
      sym_binary_query,
      sym_unary_query,
      sym_selector_query,
  [11421] = 3,
    ACTIONS(1042), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(579), 10,
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
  [11441] = 6,
    ACTIONS(651), 1,
      anon_sym_LPAREN,
    ACTIONS(659), 1,
      anon_sym_selector,
    ACTIONS(661), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(657), 2,
      anon_sym_not,
      anon_sym_only,
    STATE(357), 6,
      sym__query,
      sym_feature_query,
      sym_parenthesized_query,
      sym_binary_query,
      sym_unary_query,
      sym_selector_query,
  [11467] = 4,
    ACTIONS(1044), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(926), 3,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_LT,
    ACTIONS(924), 7,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [11489] = 4,
    ACTIONS(1046), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(926), 3,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_LT,
    ACTIONS(924), 7,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [11511] = 4,
    ACTIONS(1048), 1,
      anon_sym_through,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(1040), 3,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_LT,
    ACTIONS(1038), 7,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [11533] = 4,
    ACTIONS(1050), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(926), 3,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_LT,
    ACTIONS(924), 7,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [11555] = 6,
    ACTIONS(651), 1,
      anon_sym_LPAREN,
    ACTIONS(659), 1,
      anon_sym_selector,
    ACTIONS(661), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(657), 2,
      anon_sym_not,
      anon_sym_only,
    STATE(355), 6,
      sym__query,
      sym_feature_query,
      sym_parenthesized_query,
      sym_binary_query,
      sym_unary_query,
      sym_selector_query,
  [11581] = 4,
    ACTIONS(1052), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(926), 3,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_LT,
    ACTIONS(924), 7,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [11603] = 6,
    ACTIONS(651), 1,
      anon_sym_LPAREN,
    ACTIONS(659), 1,
      anon_sym_selector,
    ACTIONS(661), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(657), 2,
      anon_sym_not,
      anon_sym_only,
    STATE(373), 6,
      sym__query,
      sym_feature_query,
      sym_parenthesized_query,
      sym_binary_query,
      sym_unary_query,
      sym_selector_query,
  [11629] = 4,
    ACTIONS(1054), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(926), 3,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_LT,
    ACTIONS(924), 7,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [11651] = 4,
    ACTIONS(1056), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(926), 3,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_LT,
    ACTIONS(924), 7,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [11673] = 4,
    ACTIONS(1058), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(926), 3,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_LT,
    ACTIONS(924), 7,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [11695] = 4,
    ACTIONS(1060), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(926), 3,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_LT,
    ACTIONS(924), 7,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [11717] = 11,
    ACTIONS(892), 1,
      anon_sym_DOT,
    ACTIONS(902), 1,
      anon_sym_COLON,
    ACTIONS(904), 1,
      anon_sym_COLON_COLON,
    ACTIONS(906), 1,
      anon_sym_POUND,
    ACTIONS(908), 1,
      anon_sym_LBRACK,
    ACTIONS(910), 1,
      anon_sym_GT,
    ACTIONS(912), 1,
      anon_sym_TILDE,
    ACTIONS(914), 1,
      anon_sym_PLUS,
    ACTIONS(916), 1,
      sym__descendant_operator,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(782), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [11753] = 4,
    ACTIONS(1062), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(926), 3,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_LT,
    ACTIONS(924), 7,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [11775] = 11,
    ACTIONS(892), 1,
      anon_sym_DOT,
    ACTIONS(902), 1,
      anon_sym_COLON,
    ACTIONS(904), 1,
      anon_sym_COLON_COLON,
    ACTIONS(906), 1,
      anon_sym_POUND,
    ACTIONS(908), 1,
      anon_sym_LBRACK,
    ACTIONS(910), 1,
      anon_sym_GT,
    ACTIONS(912), 1,
      anon_sym_TILDE,
    ACTIONS(914), 1,
      anon_sym_PLUS,
    ACTIONS(916), 1,
      sym__descendant_operator,
    ACTIONS(1064), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [11810] = 7,
    ACTIONS(1066), 1,
      anon_sym_RBRACE,
    ACTIONS(1068), 1,
      anon_sym_from,
    ACTIONS(1070), 1,
      sym_to,
    ACTIONS(1072), 1,
      aux_sym_integer_value_token1,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    STATE(349), 2,
      sym_keyframe_block,
      aux_sym_keyframe_block_list_repeat1,
    STATE(413), 2,
      sym_from,
      sym_integer_value,
  [11835] = 7,
    ACTIONS(1068), 1,
      anon_sym_from,
    ACTIONS(1070), 1,
      sym_to,
    ACTIONS(1072), 1,
      aux_sym_integer_value_token1,
    ACTIONS(1074), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    STATE(346), 2,
      sym_keyframe_block,
      aux_sym_keyframe_block_list_repeat1,
    STATE(413), 2,
      sym_from,
      sym_integer_value,
  [11860] = 7,
    ACTIONS(1068), 1,
      anon_sym_from,
    ACTIONS(1070), 1,
      sym_to,
    ACTIONS(1072), 1,
      aux_sym_integer_value_token1,
    ACTIONS(1076), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    STATE(349), 2,
      sym_keyframe_block,
      aux_sym_keyframe_block_list_repeat1,
    STATE(413), 2,
      sym_from,
      sym_integer_value,
  [11885] = 7,
    ACTIONS(1078), 1,
      anon_sym_RBRACE,
    ACTIONS(1080), 1,
      anon_sym_from,
    ACTIONS(1083), 1,
      sym_to,
    ACTIONS(1086), 1,
      aux_sym_integer_value_token1,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    STATE(349), 2,
      sym_keyframe_block,
      aux_sym_keyframe_block_list_repeat1,
    STATE(413), 2,
      sym_from,
      sym_integer_value,
  [11910] = 7,
    ACTIONS(1068), 1,
      anon_sym_from,
    ACTIONS(1070), 1,
      sym_to,
    ACTIONS(1072), 1,
      aux_sym_integer_value_token1,
    ACTIONS(1089), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    STATE(348), 2,
      sym_keyframe_block,
      aux_sym_keyframe_block_list_repeat1,
    STATE(413), 2,
      sym_from,
      sym_integer_value,
  [11935] = 7,
    ACTIONS(860), 1,
      anon_sym_LBRACE,
    ACTIONS(1091), 1,
      anon_sym_COMMA,
    ACTIONS(1093), 1,
      anon_sym_SEMI,
    STATE(88), 1,
      sym_block,
    STATE(364), 1,
      aux_sym_import_statement_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(1095), 2,
      anon_sym_and,
      anon_sym_or,
  [11959] = 3,
    ACTIONS(1099), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(1097), 6,
      anon_sym_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_STAR_EQ,
      anon_sym_DOLLAR_EQ,
  [11975] = 3,
    ACTIONS(1103), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(1101), 6,
      anon_sym_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_STAR_EQ,
      anon_sym_DOLLAR_EQ,
  [11991] = 7,
    ACTIONS(876), 1,
      anon_sym_LBRACE,
    ACTIONS(1091), 1,
      anon_sym_COMMA,
    ACTIONS(1105), 1,
      anon_sym_SEMI,
    STATE(85), 1,
      sym_block,
    STATE(365), 1,
      aux_sym_import_statement_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(1095), 2,
      anon_sym_and,
      anon_sym_or,
  [12015] = 6,
    ACTIONS(876), 1,
      anon_sym_LBRACE,
    ACTIONS(1091), 1,
      anon_sym_COMMA,
    STATE(107), 1,
      sym_block,
    STATE(382), 1,
      aux_sym_import_statement_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(1095), 2,
      anon_sym_and,
      anon_sym_or,
  [12036] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(1107), 6,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_RPAREN,
      anon_sym_and,
      anon_sym_or,
  [12049] = 6,
    ACTIONS(860), 1,
      anon_sym_LBRACE,
    ACTIONS(1091), 1,
      anon_sym_COMMA,
    STATE(34), 1,
      sym_block,
    STATE(380), 1,
      aux_sym_import_statement_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(1095), 2,
      anon_sym_and,
      anon_sym_or,
  [12070] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(1109), 6,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_RPAREN,
      anon_sym_and,
      anon_sym_or,
  [12083] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(1111), 6,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_RPAREN,
      anon_sym_and,
      anon_sym_or,
  [12096] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(1113), 6,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_RPAREN,
      anon_sym_and,
      anon_sym_or,
  [12109] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(1115), 6,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_RPAREN,
      anon_sym_and,
      anon_sym_or,
  [12122] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(1117), 6,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_RPAREN,
      anon_sym_and,
      anon_sym_or,
  [12135] = 6,
    ACTIONS(876), 1,
      anon_sym_LBRACE,
    ACTIONS(1119), 1,
      anon_sym_SEMI,
    ACTIONS(1121), 1,
      anon_sym_LPAREN2,
    STATE(118), 1,
      sym_block,
    STATE(410), 1,
      sym_include_arguments,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [12155] = 6,
    ACTIONS(860), 1,
      anon_sym_LBRACE,
    ACTIONS(1091), 1,
      anon_sym_COMMA,
    ACTIONS(1123), 1,
      anon_sym_SEMI,
    STATE(68), 1,
      sym_block,
    STATE(379), 1,
      aux_sym_import_statement_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [12175] = 6,
    ACTIONS(876), 1,
      anon_sym_LBRACE,
    ACTIONS(1091), 1,
      anon_sym_COMMA,
    ACTIONS(1125), 1,
      anon_sym_SEMI,
    STATE(42), 1,
      sym_block,
    STATE(379), 1,
      aux_sym_import_statement_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [12195] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(1095), 2,
      anon_sym_and,
      anon_sym_or,
    ACTIONS(1127), 3,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_LBRACE,
  [12209] = 5,
    ACTIONS(1091), 1,
      anon_sym_COMMA,
    ACTIONS(1129), 1,
      anon_sym_SEMI,
    STATE(403), 1,
      aux_sym_import_statement_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(1095), 2,
      anon_sym_and,
      anon_sym_or,
  [12227] = 5,
    ACTIONS(1091), 1,
      anon_sym_COMMA,
    ACTIONS(1131), 1,
      anon_sym_SEMI,
    STATE(391), 1,
      aux_sym_import_statement_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(1095), 2,
      anon_sym_and,
      anon_sym_or,
  [12245] = 6,
    ACTIONS(860), 1,
      anon_sym_LBRACE,
    ACTIONS(1121), 1,
      anon_sym_LPAREN2,
    ACTIONS(1133), 1,
      anon_sym_SEMI,
    STATE(105), 1,
      sym_block,
    STATE(407), 1,
      sym_include_arguments,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [12265] = 6,
    ACTIONS(784), 1,
      anon_sym_LPAREN2,
    ACTIONS(1135), 1,
      sym_string_value,
    ACTIONS(1137), 1,
      sym_identifier,
    STATE(197), 1,
      sym_arguments,
    STATE(477), 1,
      sym_call_expression,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [12285] = 6,
    ACTIONS(784), 1,
      anon_sym_LPAREN2,
    ACTIONS(1137), 1,
      sym_identifier,
    ACTIONS(1139), 1,
      sym_string_value,
    STATE(197), 1,
      sym_arguments,
    STATE(471), 1,
      sym_call_expression,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [12305] = 5,
    ACTIONS(876), 1,
      anon_sym_LBRACE,
    ACTIONS(1141), 1,
      anon_sym_LPAREN,
    STATE(96), 1,
      sym_block,
    STATE(422), 1,
      sym_parameters,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [12322] = 4,
    ACTIONS(876), 1,
      anon_sym_LBRACE,
    STATE(115), 1,
      sym_block,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(1095), 2,
      anon_sym_and,
      anon_sym_or,
  [12337] = 5,
    ACTIONS(876), 1,
      anon_sym_LBRACE,
    ACTIONS(1141), 1,
      anon_sym_LPAREN,
    STATE(119), 1,
      sym_block,
    STATE(416), 1,
      sym_parameters,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [12354] = 5,
    ACTIONS(860), 1,
      anon_sym_LBRACE,
    ACTIONS(1141), 1,
      anon_sym_LPAREN,
    STATE(106), 1,
      sym_block,
    STATE(418), 1,
      sym_parameters,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [12371] = 4,
    ACTIONS(1143), 1,
      anon_sym_RPAREN,
    STATE(385), 1,
      aux_sym_arguments_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(683), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [12386] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(371), 4,
      anon_sym_RBRACE,
      anon_sym_from,
      sym_to,
      aux_sym_integer_value_token1,
  [12397] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(1145), 4,
      anon_sym_RBRACE,
      anon_sym_from,
      sym_to,
      aux_sym_integer_value_token1,
  [12408] = 4,
    ACTIONS(1147), 1,
      anon_sym_COMMA,
    STATE(379), 1,
      aux_sym_import_statement_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(1127), 2,
      anon_sym_SEMI,
      anon_sym_LBRACE,
  [12423] = 5,
    ACTIONS(860), 1,
      anon_sym_LBRACE,
    ACTIONS(1091), 1,
      anon_sym_COMMA,
    STATE(76), 1,
      sym_block,
    STATE(379), 1,
      aux_sym_import_statement_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [12440] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(367), 4,
      anon_sym_RBRACE,
      anon_sym_from,
      sym_to,
      aux_sym_integer_value_token1,
  [12451] = 5,
    ACTIONS(876), 1,
      anon_sym_LBRACE,
    ACTIONS(1091), 1,
      anon_sym_COMMA,
    STATE(49), 1,
      sym_block,
    STATE(379), 1,
      aux_sym_import_statement_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [12468] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(363), 4,
      anon_sym_RBRACE,
      anon_sym_from,
      sym_to,
      aux_sym_integer_value_token1,
  [12479] = 4,
    ACTIONS(1150), 1,
      anon_sym_RPAREN,
    STATE(385), 1,
      aux_sym_arguments_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(683), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [12494] = 4,
    ACTIONS(734), 1,
      anon_sym_RPAREN,
    STATE(385), 1,
      aux_sym_arguments_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(1152), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [12509] = 5,
    ACTIONS(860), 1,
      anon_sym_LBRACE,
    ACTIONS(1141), 1,
      anon_sym_LPAREN,
    STATE(33), 1,
      sym_block,
    STATE(420), 1,
      sym_parameters,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [12526] = 4,
    ACTIONS(1155), 1,
      anon_sym_RPAREN,
    STATE(385), 1,
      aux_sym_arguments_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(683), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [12541] = 4,
    ACTIONS(1157), 1,
      anon_sym_RPAREN,
    STATE(385), 1,
      aux_sym_arguments_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(683), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [12556] = 4,
    ACTIONS(860), 1,
      anon_sym_LBRACE,
    STATE(108), 1,
      sym_block,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(1095), 2,
      anon_sym_and,
      anon_sym_or,
  [12571] = 3,
    ACTIONS(1159), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(1113), 3,
      anon_sym_RPAREN,
      anon_sym_and,
      anon_sym_or,
  [12584] = 4,
    ACTIONS(1091), 1,
      anon_sym_COMMA,
    ACTIONS(1161), 1,
      anon_sym_SEMI,
    STATE(379), 1,
      aux_sym_import_statement_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [12598] = 4,
    ACTIONS(1163), 1,
      anon_sym_COMMA,
    ACTIONS(1165), 1,
      anon_sym_RPAREN2,
    STATE(405), 1,
      aux_sym_include_arguments_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [12612] = 4,
    ACTIONS(1167), 1,
      anon_sym_COMMA,
    ACTIONS(1170), 1,
      anon_sym_RPAREN,
    STATE(393), 1,
      aux_sym_parameters_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [12626] = 4,
    ACTIONS(1163), 1,
      anon_sym_COMMA,
    ACTIONS(1172), 1,
      anon_sym_RPAREN2,
    STATE(392), 1,
      aux_sym_include_arguments_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [12640] = 4,
    ACTIONS(1174), 1,
      anon_sym_COMMA,
    ACTIONS(1176), 1,
      anon_sym_RPAREN,
    STATE(404), 1,
      aux_sym_parameters_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [12654] = 3,
    ACTIONS(1180), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(1178), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [12666] = 4,
    ACTIONS(876), 1,
      anon_sym_LBRACE,
    ACTIONS(1182), 1,
      anon_sym_if,
    STATE(83), 1,
      sym_block,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [12680] = 4,
    ACTIONS(898), 1,
      anon_sym_COMMA,
    ACTIONS(1184), 1,
      anon_sym_LBRACE,
    STATE(400), 1,
      aux_sym_selectors_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [12694] = 4,
    ACTIONS(776), 1,
      anon_sym_COMMA,
    ACTIONS(1186), 1,
      anon_sym_RPAREN,
    STATE(402), 1,
      aux_sym_pseudo_class_arguments_repeat2,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [12708] = 4,
    ACTIONS(1008), 1,
      anon_sym_LBRACE,
    ACTIONS(1188), 1,
      anon_sym_COMMA,
    STATE(400), 1,
      aux_sym_selectors_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [12722] = 3,
    ACTIONS(1191), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(1095), 2,
      anon_sym_and,
      anon_sym_or,
  [12734] = 4,
    ACTIONS(782), 1,
      anon_sym_RPAREN,
    ACTIONS(1193), 1,
      anon_sym_COMMA,
    STATE(402), 1,
      aux_sym_pseudo_class_arguments_repeat2,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [12748] = 4,
    ACTIONS(1091), 1,
      anon_sym_COMMA,
    ACTIONS(1196), 1,
      anon_sym_SEMI,
    STATE(379), 1,
      aux_sym_import_statement_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [12762] = 4,
    ACTIONS(1174), 1,
      anon_sym_COMMA,
    ACTIONS(1198), 1,
      anon_sym_RPAREN,
    STATE(393), 1,
      aux_sym_parameters_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [12776] = 4,
    ACTIONS(1200), 1,
      anon_sym_COMMA,
    ACTIONS(1203), 1,
      anon_sym_RPAREN2,
    STATE(405), 1,
      aux_sym_include_arguments_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [12790] = 4,
    ACTIONS(1205), 1,
      sym_string_value,
    ACTIONS(1207), 1,
      sym_identifier,
    STATE(452), 1,
      sym_call_expression,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [12804] = 4,
    ACTIONS(860), 1,
      anon_sym_LBRACE,
    ACTIONS(1209), 1,
      anon_sym_SEMI,
    STATE(72), 1,
      sym_block,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [12818] = 4,
    ACTIONS(1211), 1,
      sym_string_value,
    ACTIONS(1213), 1,
      sym_identifier,
    STATE(475), 1,
      sym_call_expression,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [12832] = 4,
    ACTIONS(860), 1,
      anon_sym_LBRACE,
    ACTIONS(1215), 1,
      anon_sym_if,
    STATE(87), 1,
      sym_block,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [12846] = 4,
    ACTIONS(876), 1,
      anon_sym_LBRACE,
    ACTIONS(1217), 1,
      anon_sym_SEMI,
    STATE(40), 1,
      sym_block,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [12860] = 3,
    ACTIONS(860), 1,
      anon_sym_LBRACE,
    STATE(103), 1,
      sym_block,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [12871] = 3,
    ACTIONS(1219), 1,
      anon_sym_LBRACE,
    STATE(111), 1,
      sym_keyframe_block_list,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [12882] = 3,
    ACTIONS(1221), 1,
      anon_sym_LBRACE,
    STATE(378), 1,
      sym_block,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [12893] = 3,
    ACTIONS(1223), 1,
      anon_sym_COMMA,
    ACTIONS(1225), 1,
      anon_sym_in,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [12904] = 3,
    ACTIONS(1227), 1,
      anon_sym_SEMI,
    ACTIONS(1229), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [12915] = 3,
    ACTIONS(876), 1,
      anon_sym_LBRACE,
    STATE(43), 1,
      sym_block,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [12926] = 3,
    ACTIONS(722), 1,
      anon_sym_SEMI,
    ACTIONS(724), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [12937] = 3,
    ACTIONS(860), 1,
      anon_sym_LBRACE,
    STATE(73), 1,
      sym_block,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [12948] = 3,
    ACTIONS(1231), 1,
      sym_variable_identifier,
    STATE(395), 1,
      sym_parameter,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [12959] = 3,
    ACTIONS(860), 1,
      anon_sym_LBRACE,
    STATE(71), 1,
      sym_block,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [12970] = 3,
    ACTIONS(784), 1,
      anon_sym_LPAREN2,
    STATE(197), 1,
      sym_arguments,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [12981] = 3,
    ACTIONS(876), 1,
      anon_sym_LBRACE,
    STATE(36), 1,
      sym_block,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [12992] = 3,
    ACTIONS(597), 1,
      anon_sym_LBRACE,
    ACTIONS(1233), 1,
      sym_unit,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [13003] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(1235), 2,
      anon_sym_SEMI,
      anon_sym_LBRACE,
  [13012] = 3,
    ACTIONS(1231), 1,
      sym_variable_identifier,
    STATE(433), 1,
      sym_parameter,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [13023] = 3,
    ACTIONS(876), 1,
      anon_sym_LBRACE,
    STATE(104), 1,
      sym_block,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [13034] = 3,
    ACTIONS(1237), 1,
      anon_sym_LBRACE,
    STATE(114), 1,
      sym_keyframe_block_list,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [13045] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(1239), 2,
      anon_sym_SEMI,
      anon_sym_LBRACE,
  [13054] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(1203), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN2,
  [13063] = 3,
    ACTIONS(876), 1,
      anon_sym_LBRACE,
    STATE(82), 1,
      sym_block,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [13074] = 3,
    ACTIONS(1241), 1,
      aux_sym_color_value_token1,
    ACTIONS(1243), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [13085] = 3,
    ACTIONS(1245), 1,
      anon_sym_COMMA,
    ACTIONS(1247), 1,
      anon_sym_in,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [13096] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(1170), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [13105] = 2,
    ACTIONS(1249), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [13113] = 2,
    ACTIONS(1251), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [13121] = 2,
    ACTIONS(1253), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [13129] = 2,
    ACTIONS(1255), 1,
      anon_sym_LBRACE,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [13137] = 2,
    ACTIONS(742), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [13145] = 2,
    ACTIONS(1227), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [13153] = 2,
    ACTIONS(1257), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [13161] = 2,
    ACTIONS(1259), 1,
      aux_sym_color_value_token1,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [13169] = 2,
    ACTIONS(1261), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [13177] = 2,
    ACTIONS(1263), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [13185] = 2,
    ACTIONS(746), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [13193] = 2,
    ACTIONS(123), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [13201] = 2,
    ACTIONS(1265), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [13209] = 2,
    ACTIONS(722), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [13217] = 2,
    ACTIONS(1267), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [13225] = 2,
    ACTIONS(1269), 1,
      anon_sym_from,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [13233] = 2,
    ACTIONS(1271), 1,
      aux_sym_color_value_token1,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [13241] = 2,
    ACTIONS(1273), 1,
      sym_variable_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [13249] = 2,
    ACTIONS(1275), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [13257] = 2,
    ACTIONS(1277), 1,
      sym_variable_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [13265] = 2,
    ACTIONS(117), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [13273] = 2,
    ACTIONS(1279), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [13281] = 2,
    ACTIONS(125), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [13289] = 2,
    ACTIONS(1281), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [13297] = 2,
    ACTIONS(1283), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [13305] = 2,
    ACTIONS(1285), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [13313] = 2,
    ACTIONS(111), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [13321] = 2,
    ACTIONS(1287), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [13329] = 2,
    ACTIONS(1289), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [13337] = 2,
    ACTIONS(1291), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [13345] = 2,
    ACTIONS(1293), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [13353] = 2,
    ACTIONS(1295), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [13361] = 2,
    ACTIONS(1297), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [13369] = 2,
    ACTIONS(1299), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [13377] = 2,
    ACTIONS(1301), 1,
      anon_sym_LBRACE,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [13385] = 2,
    ACTIONS(1303), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [13393] = 2,
    ACTIONS(1305), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [13401] = 2,
    ACTIONS(1307), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [13409] = 2,
    ACTIONS(75), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [13417] = 2,
    ACTIONS(1309), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [13425] = 2,
    ACTIONS(1311), 1,
      sym_variable_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [13433] = 2,
    ACTIONS(1313), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [13441] = 2,
    ACTIONS(1315), 1,
      anon_sym_LBRACE,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [13449] = 2,
    ACTIONS(1317), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [13457] = 2,
    ACTIONS(1319), 1,
      aux_sym_color_value_token1,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [13465] = 2,
    ACTIONS(1321), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [13473] = 2,
    ACTIONS(1323), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [13481] = 2,
    ACTIONS(1325), 1,
      aux_sym_color_value_token1,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [13489] = 2,
    ACTIONS(1327), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [13497] = 2,
    ACTIONS(1215), 1,
      anon_sym_if,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [13505] = 2,
    ACTIONS(1329), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [13513] = 2,
    ACTIONS(738), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [13521] = 2,
    ACTIONS(1331), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [13529] = 2,
    ACTIONS(1333), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [13537] = 2,
    ACTIONS(1182), 1,
      anon_sym_if,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [13545] = 2,
    ACTIONS(1335), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [13553] = 2,
    ACTIONS(1337), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [13561] = 2,
    ACTIONS(1339), 1,
      anon_sym_in,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [13569] = 2,
    ACTIONS(1341), 1,
      anon_sym_in,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [13577] = 2,
    ACTIONS(1343), 1,
      sym_variable_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [13585] = 2,
    ACTIONS(1345), 1,
      sym_variable_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [13593] = 2,
    ACTIONS(1347), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [13601] = 2,
    ACTIONS(1349), 1,
      anon_sym_from,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [13609] = 2,
    ACTIONS(1351), 1,
      sym_variable_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
};

static uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(15)] = 0,
  [SMALL_STATE(16)] = 51,
  [SMALL_STATE(17)] = 102,
  [SMALL_STATE(18)] = 153,
  [SMALL_STATE(19)] = 204,
  [SMALL_STATE(20)] = 252,
  [SMALL_STATE(21)] = 300,
  [SMALL_STATE(22)] = 377,
  [SMALL_STATE(23)] = 419,
  [SMALL_STATE(24)] = 461,
  [SMALL_STATE(25)] = 503,
  [SMALL_STATE(26)] = 545,
  [SMALL_STATE(27)] = 587,
  [SMALL_STATE(28)] = 629,
  [SMALL_STATE(29)] = 703,
  [SMALL_STATE(30)] = 745,
  [SMALL_STATE(31)] = 787,
  [SMALL_STATE(32)] = 829,
  [SMALL_STATE(33)] = 871,
  [SMALL_STATE(34)] = 912,
  [SMALL_STATE(35)] = 953,
  [SMALL_STATE(36)] = 994,
  [SMALL_STATE(37)] = 1035,
  [SMALL_STATE(38)] = 1076,
  [SMALL_STATE(39)] = 1117,
  [SMALL_STATE(40)] = 1158,
  [SMALL_STATE(41)] = 1199,
  [SMALL_STATE(42)] = 1240,
  [SMALL_STATE(43)] = 1281,
  [SMALL_STATE(44)] = 1322,
  [SMALL_STATE(45)] = 1363,
  [SMALL_STATE(46)] = 1404,
  [SMALL_STATE(47)] = 1445,
  [SMALL_STATE(48)] = 1486,
  [SMALL_STATE(49)] = 1527,
  [SMALL_STATE(50)] = 1568,
  [SMALL_STATE(51)] = 1609,
  [SMALL_STATE(52)] = 1650,
  [SMALL_STATE(53)] = 1691,
  [SMALL_STATE(54)] = 1732,
  [SMALL_STATE(55)] = 1773,
  [SMALL_STATE(56)] = 1814,
  [SMALL_STATE(57)] = 1855,
  [SMALL_STATE(58)] = 1896,
  [SMALL_STATE(59)] = 1937,
  [SMALL_STATE(60)] = 1978,
  [SMALL_STATE(61)] = 2019,
  [SMALL_STATE(62)] = 2060,
  [SMALL_STATE(63)] = 2101,
  [SMALL_STATE(64)] = 2142,
  [SMALL_STATE(65)] = 2183,
  [SMALL_STATE(66)] = 2224,
  [SMALL_STATE(67)] = 2265,
  [SMALL_STATE(68)] = 2306,
  [SMALL_STATE(69)] = 2347,
  [SMALL_STATE(70)] = 2388,
  [SMALL_STATE(71)] = 2429,
  [SMALL_STATE(72)] = 2470,
  [SMALL_STATE(73)] = 2511,
  [SMALL_STATE(74)] = 2552,
  [SMALL_STATE(75)] = 2593,
  [SMALL_STATE(76)] = 2634,
  [SMALL_STATE(77)] = 2675,
  [SMALL_STATE(78)] = 2716,
  [SMALL_STATE(79)] = 2757,
  [SMALL_STATE(80)] = 2798,
  [SMALL_STATE(81)] = 2839,
  [SMALL_STATE(82)] = 2880,
  [SMALL_STATE(83)] = 2921,
  [SMALL_STATE(84)] = 2962,
  [SMALL_STATE(85)] = 3003,
  [SMALL_STATE(86)] = 3044,
  [SMALL_STATE(87)] = 3085,
  [SMALL_STATE(88)] = 3126,
  [SMALL_STATE(89)] = 3167,
  [SMALL_STATE(90)] = 3208,
  [SMALL_STATE(91)] = 3249,
  [SMALL_STATE(92)] = 3290,
  [SMALL_STATE(93)] = 3331,
  [SMALL_STATE(94)] = 3372,
  [SMALL_STATE(95)] = 3413,
  [SMALL_STATE(96)] = 3454,
  [SMALL_STATE(97)] = 3495,
  [SMALL_STATE(98)] = 3536,
  [SMALL_STATE(99)] = 3577,
  [SMALL_STATE(100)] = 3618,
  [SMALL_STATE(101)] = 3659,
  [SMALL_STATE(102)] = 3700,
  [SMALL_STATE(103)] = 3741,
  [SMALL_STATE(104)] = 3782,
  [SMALL_STATE(105)] = 3823,
  [SMALL_STATE(106)] = 3864,
  [SMALL_STATE(107)] = 3905,
  [SMALL_STATE(108)] = 3946,
  [SMALL_STATE(109)] = 3987,
  [SMALL_STATE(110)] = 4028,
  [SMALL_STATE(111)] = 4069,
  [SMALL_STATE(112)] = 4110,
  [SMALL_STATE(113)] = 4151,
  [SMALL_STATE(114)] = 4192,
  [SMALL_STATE(115)] = 4233,
  [SMALL_STATE(116)] = 4274,
  [SMALL_STATE(117)] = 4315,
  [SMALL_STATE(118)] = 4356,
  [SMALL_STATE(119)] = 4397,
  [SMALL_STATE(120)] = 4438,
  [SMALL_STATE(121)] = 4479,
  [SMALL_STATE(122)] = 4548,
  [SMALL_STATE(123)] = 4614,
  [SMALL_STATE(124)] = 4680,
  [SMALL_STATE(125)] = 4746,
  [SMALL_STATE(126)] = 4812,
  [SMALL_STATE(127)] = 4857,
  [SMALL_STATE(128)] = 4896,
  [SMALL_STATE(129)] = 4934,
  [SMALL_STATE(130)] = 4969,
  [SMALL_STATE(131)] = 5004,
  [SMALL_STATE(132)] = 5036,
  [SMALL_STATE(133)] = 5068,
  [SMALL_STATE(134)] = 5100,
  [SMALL_STATE(135)] = 5132,
  [SMALL_STATE(136)] = 5164,
  [SMALL_STATE(137)] = 5196,
  [SMALL_STATE(138)] = 5228,
  [SMALL_STATE(139)] = 5260,
  [SMALL_STATE(140)] = 5292,
  [SMALL_STATE(141)] = 5324,
  [SMALL_STATE(142)] = 5356,
  [SMALL_STATE(143)] = 5399,
  [SMALL_STATE(144)] = 5434,
  [SMALL_STATE(145)] = 5469,
  [SMALL_STATE(146)] = 5512,
  [SMALL_STATE(147)] = 5546,
  [SMALL_STATE(148)] = 5589,
  [SMALL_STATE(149)] = 5632,
  [SMALL_STATE(150)] = 5685,
  [SMALL_STATE(151)] = 5728,
  [SMALL_STATE(152)] = 5771,
  [SMALL_STATE(153)] = 5824,
  [SMALL_STATE(154)] = 5877,
  [SMALL_STATE(155)] = 5928,
  [SMALL_STATE(156)] = 5983,
  [SMALL_STATE(157)] = 6036,
  [SMALL_STATE(158)] = 6079,
  [SMALL_STATE(159)] = 6122,
  [SMALL_STATE(160)] = 6170,
  [SMALL_STATE(161)] = 6222,
  [SMALL_STATE(162)] = 6274,
  [SMALL_STATE(163)] = 6326,
  [SMALL_STATE(164)] = 6378,
  [SMALL_STATE(165)] = 6426,
  [SMALL_STATE(166)] = 6478,
  [SMALL_STATE(167)] = 6509,
  [SMALL_STATE(168)] = 6556,
  [SMALL_STATE(169)] = 6587,
  [SMALL_STATE(170)] = 6615,
  [SMALL_STATE(171)] = 6643,
  [SMALL_STATE(172)] = 6689,
  [SMALL_STATE(173)] = 6735,
  [SMALL_STATE(174)] = 6781,
  [SMALL_STATE(175)] = 6807,
  [SMALL_STATE(176)] = 6853,
  [SMALL_STATE(177)] = 6899,
  [SMALL_STATE(178)] = 6926,
  [SMALL_STATE(179)] = 6951,
  [SMALL_STATE(180)] = 6978,
  [SMALL_STATE(181)] = 7003,
  [SMALL_STATE(182)] = 7028,
  [SMALL_STATE(183)] = 7053,
  [SMALL_STATE(184)] = 7096,
  [SMALL_STATE(185)] = 7121,
  [SMALL_STATE(186)] = 7146,
  [SMALL_STATE(187)] = 7171,
  [SMALL_STATE(188)] = 7196,
  [SMALL_STATE(189)] = 7221,
  [SMALL_STATE(190)] = 7246,
  [SMALL_STATE(191)] = 7271,
  [SMALL_STATE(192)] = 7296,
  [SMALL_STATE(193)] = 7321,
  [SMALL_STATE(194)] = 7346,
  [SMALL_STATE(195)] = 7389,
  [SMALL_STATE(196)] = 7432,
  [SMALL_STATE(197)] = 7457,
  [SMALL_STATE(198)] = 7482,
  [SMALL_STATE(199)] = 7507,
  [SMALL_STATE(200)] = 7550,
  [SMALL_STATE(201)] = 7575,
  [SMALL_STATE(202)] = 7600,
  [SMALL_STATE(203)] = 7625,
  [SMALL_STATE(204)] = 7650,
  [SMALL_STATE(205)] = 7690,
  [SMALL_STATE(206)] = 7730,
  [SMALL_STATE(207)] = 7770,
  [SMALL_STATE(208)] = 7810,
  [SMALL_STATE(209)] = 7850,
  [SMALL_STATE(210)] = 7890,
  [SMALL_STATE(211)] = 7930,
  [SMALL_STATE(212)] = 7970,
  [SMALL_STATE(213)] = 8010,
  [SMALL_STATE(214)] = 8050,
  [SMALL_STATE(215)] = 8090,
  [SMALL_STATE(216)] = 8130,
  [SMALL_STATE(217)] = 8170,
  [SMALL_STATE(218)] = 8210,
  [SMALL_STATE(219)] = 8250,
  [SMALL_STATE(220)] = 8290,
  [SMALL_STATE(221)] = 8330,
  [SMALL_STATE(222)] = 8370,
  [SMALL_STATE(223)] = 8410,
  [SMALL_STATE(224)] = 8450,
  [SMALL_STATE(225)] = 8490,
  [SMALL_STATE(226)] = 8530,
  [SMALL_STATE(227)] = 8570,
  [SMALL_STATE(228)] = 8610,
  [SMALL_STATE(229)] = 8650,
  [SMALL_STATE(230)] = 8690,
  [SMALL_STATE(231)] = 8730,
  [SMALL_STATE(232)] = 8770,
  [SMALL_STATE(233)] = 8810,
  [SMALL_STATE(234)] = 8850,
  [SMALL_STATE(235)] = 8890,
  [SMALL_STATE(236)] = 8930,
  [SMALL_STATE(237)] = 8970,
  [SMALL_STATE(238)] = 9010,
  [SMALL_STATE(239)] = 9050,
  [SMALL_STATE(240)] = 9090,
  [SMALL_STATE(241)] = 9130,
  [SMALL_STATE(242)] = 9170,
  [SMALL_STATE(243)] = 9210,
  [SMALL_STATE(244)] = 9250,
  [SMALL_STATE(245)] = 9290,
  [SMALL_STATE(246)] = 9330,
  [SMALL_STATE(247)] = 9370,
  [SMALL_STATE(248)] = 9410,
  [SMALL_STATE(249)] = 9450,
  [SMALL_STATE(250)] = 9490,
  [SMALL_STATE(251)] = 9530,
  [SMALL_STATE(252)] = 9570,
  [SMALL_STATE(253)] = 9605,
  [SMALL_STATE(254)] = 9632,
  [SMALL_STATE(255)] = 9659,
  [SMALL_STATE(256)] = 9686,
  [SMALL_STATE(257)] = 9721,
  [SMALL_STATE(258)] = 9745,
  [SMALL_STATE(259)] = 9769,
  [SMALL_STATE(260)] = 9793,
  [SMALL_STATE(261)] = 9814,
  [SMALL_STATE(262)] = 9837,
  [SMALL_STATE(263)] = 9860,
  [SMALL_STATE(264)] = 9901,
  [SMALL_STATE(265)] = 9924,
  [SMALL_STATE(266)] = 9945,
  [SMALL_STATE(267)] = 9970,
  [SMALL_STATE(268)] = 9995,
  [SMALL_STATE(269)] = 10020,
  [SMALL_STATE(270)] = 10041,
  [SMALL_STATE(271)] = 10062,
  [SMALL_STATE(272)] = 10087,
  [SMALL_STATE(273)] = 10110,
  [SMALL_STATE(274)] = 10135,
  [SMALL_STATE(275)] = 10160,
  [SMALL_STATE(276)] = 10183,
  [SMALL_STATE(277)] = 10204,
  [SMALL_STATE(278)] = 10225,
  [SMALL_STATE(279)] = 10250,
  [SMALL_STATE(280)] = 10275,
  [SMALL_STATE(281)] = 10296,
  [SMALL_STATE(282)] = 10321,
  [SMALL_STATE(283)] = 10342,
  [SMALL_STATE(284)] = 10363,
  [SMALL_STATE(285)] = 10386,
  [SMALL_STATE(286)] = 10409,
  [SMALL_STATE(287)] = 10430,
  [SMALL_STATE(288)] = 10455,
  [SMALL_STATE(289)] = 10476,
  [SMALL_STATE(290)] = 10497,
  [SMALL_STATE(291)] = 10518,
  [SMALL_STATE(292)] = 10539,
  [SMALL_STATE(293)] = 10560,
  [SMALL_STATE(294)] = 10583,
  [SMALL_STATE(295)] = 10608,
  [SMALL_STATE(296)] = 10629,
  [SMALL_STATE(297)] = 10650,
  [SMALL_STATE(298)] = 10671,
  [SMALL_STATE(299)] = 10692,
  [SMALL_STATE(300)] = 10713,
  [SMALL_STATE(301)] = 10734,
  [SMALL_STATE(302)] = 10755,
  [SMALL_STATE(303)] = 10780,
  [SMALL_STATE(304)] = 10801,
  [SMALL_STATE(305)] = 10826,
  [SMALL_STATE(306)] = 10847,
  [SMALL_STATE(307)] = 10888,
  [SMALL_STATE(308)] = 10909,
  [SMALL_STATE(309)] = 10932,
  [SMALL_STATE(310)] = 10953,
  [SMALL_STATE(311)] = 10974,
  [SMALL_STATE(312)] = 10995,
  [SMALL_STATE(313)] = 11031,
  [SMALL_STATE(314)] = 11053,
  [SMALL_STATE(315)] = 11079,
  [SMALL_STATE(316)] = 11105,
  [SMALL_STATE(317)] = 11131,
  [SMALL_STATE(318)] = 11153,
  [SMALL_STATE(319)] = 11179,
  [SMALL_STATE(320)] = 11201,
  [SMALL_STATE(321)] = 11221,
  [SMALL_STATE(322)] = 11243,
  [SMALL_STATE(323)] = 11265,
  [SMALL_STATE(324)] = 11287,
  [SMALL_STATE(325)] = 11309,
  [SMALL_STATE(326)] = 11331,
  [SMALL_STATE(327)] = 11353,
  [SMALL_STATE(328)] = 11373,
  [SMALL_STATE(329)] = 11395,
  [SMALL_STATE(330)] = 11421,
  [SMALL_STATE(331)] = 11441,
  [SMALL_STATE(332)] = 11467,
  [SMALL_STATE(333)] = 11489,
  [SMALL_STATE(334)] = 11511,
  [SMALL_STATE(335)] = 11533,
  [SMALL_STATE(336)] = 11555,
  [SMALL_STATE(337)] = 11581,
  [SMALL_STATE(338)] = 11603,
  [SMALL_STATE(339)] = 11629,
  [SMALL_STATE(340)] = 11651,
  [SMALL_STATE(341)] = 11673,
  [SMALL_STATE(342)] = 11695,
  [SMALL_STATE(343)] = 11717,
  [SMALL_STATE(344)] = 11753,
  [SMALL_STATE(345)] = 11775,
  [SMALL_STATE(346)] = 11810,
  [SMALL_STATE(347)] = 11835,
  [SMALL_STATE(348)] = 11860,
  [SMALL_STATE(349)] = 11885,
  [SMALL_STATE(350)] = 11910,
  [SMALL_STATE(351)] = 11935,
  [SMALL_STATE(352)] = 11959,
  [SMALL_STATE(353)] = 11975,
  [SMALL_STATE(354)] = 11991,
  [SMALL_STATE(355)] = 12015,
  [SMALL_STATE(356)] = 12036,
  [SMALL_STATE(357)] = 12049,
  [SMALL_STATE(358)] = 12070,
  [SMALL_STATE(359)] = 12083,
  [SMALL_STATE(360)] = 12096,
  [SMALL_STATE(361)] = 12109,
  [SMALL_STATE(362)] = 12122,
  [SMALL_STATE(363)] = 12135,
  [SMALL_STATE(364)] = 12155,
  [SMALL_STATE(365)] = 12175,
  [SMALL_STATE(366)] = 12195,
  [SMALL_STATE(367)] = 12209,
  [SMALL_STATE(368)] = 12227,
  [SMALL_STATE(369)] = 12245,
  [SMALL_STATE(370)] = 12265,
  [SMALL_STATE(371)] = 12285,
  [SMALL_STATE(372)] = 12305,
  [SMALL_STATE(373)] = 12322,
  [SMALL_STATE(374)] = 12337,
  [SMALL_STATE(375)] = 12354,
  [SMALL_STATE(376)] = 12371,
  [SMALL_STATE(377)] = 12386,
  [SMALL_STATE(378)] = 12397,
  [SMALL_STATE(379)] = 12408,
  [SMALL_STATE(380)] = 12423,
  [SMALL_STATE(381)] = 12440,
  [SMALL_STATE(382)] = 12451,
  [SMALL_STATE(383)] = 12468,
  [SMALL_STATE(384)] = 12479,
  [SMALL_STATE(385)] = 12494,
  [SMALL_STATE(386)] = 12509,
  [SMALL_STATE(387)] = 12526,
  [SMALL_STATE(388)] = 12541,
  [SMALL_STATE(389)] = 12556,
  [SMALL_STATE(390)] = 12571,
  [SMALL_STATE(391)] = 12584,
  [SMALL_STATE(392)] = 12598,
  [SMALL_STATE(393)] = 12612,
  [SMALL_STATE(394)] = 12626,
  [SMALL_STATE(395)] = 12640,
  [SMALL_STATE(396)] = 12654,
  [SMALL_STATE(397)] = 12666,
  [SMALL_STATE(398)] = 12680,
  [SMALL_STATE(399)] = 12694,
  [SMALL_STATE(400)] = 12708,
  [SMALL_STATE(401)] = 12722,
  [SMALL_STATE(402)] = 12734,
  [SMALL_STATE(403)] = 12748,
  [SMALL_STATE(404)] = 12762,
  [SMALL_STATE(405)] = 12776,
  [SMALL_STATE(406)] = 12790,
  [SMALL_STATE(407)] = 12804,
  [SMALL_STATE(408)] = 12818,
  [SMALL_STATE(409)] = 12832,
  [SMALL_STATE(410)] = 12846,
  [SMALL_STATE(411)] = 12860,
  [SMALL_STATE(412)] = 12871,
  [SMALL_STATE(413)] = 12882,
  [SMALL_STATE(414)] = 12893,
  [SMALL_STATE(415)] = 12904,
  [SMALL_STATE(416)] = 12915,
  [SMALL_STATE(417)] = 12926,
  [SMALL_STATE(418)] = 12937,
  [SMALL_STATE(419)] = 12948,
  [SMALL_STATE(420)] = 12959,
  [SMALL_STATE(421)] = 12970,
  [SMALL_STATE(422)] = 12981,
  [SMALL_STATE(423)] = 12992,
  [SMALL_STATE(424)] = 13003,
  [SMALL_STATE(425)] = 13012,
  [SMALL_STATE(426)] = 13023,
  [SMALL_STATE(427)] = 13034,
  [SMALL_STATE(428)] = 13045,
  [SMALL_STATE(429)] = 13054,
  [SMALL_STATE(430)] = 13063,
  [SMALL_STATE(431)] = 13074,
  [SMALL_STATE(432)] = 13085,
  [SMALL_STATE(433)] = 13096,
  [SMALL_STATE(434)] = 13105,
  [SMALL_STATE(435)] = 13113,
  [SMALL_STATE(436)] = 13121,
  [SMALL_STATE(437)] = 13129,
  [SMALL_STATE(438)] = 13137,
  [SMALL_STATE(439)] = 13145,
  [SMALL_STATE(440)] = 13153,
  [SMALL_STATE(441)] = 13161,
  [SMALL_STATE(442)] = 13169,
  [SMALL_STATE(443)] = 13177,
  [SMALL_STATE(444)] = 13185,
  [SMALL_STATE(445)] = 13193,
  [SMALL_STATE(446)] = 13201,
  [SMALL_STATE(447)] = 13209,
  [SMALL_STATE(448)] = 13217,
  [SMALL_STATE(449)] = 13225,
  [SMALL_STATE(450)] = 13233,
  [SMALL_STATE(451)] = 13241,
  [SMALL_STATE(452)] = 13249,
  [SMALL_STATE(453)] = 13257,
  [SMALL_STATE(454)] = 13265,
  [SMALL_STATE(455)] = 13273,
  [SMALL_STATE(456)] = 13281,
  [SMALL_STATE(457)] = 13289,
  [SMALL_STATE(458)] = 13297,
  [SMALL_STATE(459)] = 13305,
  [SMALL_STATE(460)] = 13313,
  [SMALL_STATE(461)] = 13321,
  [SMALL_STATE(462)] = 13329,
  [SMALL_STATE(463)] = 13337,
  [SMALL_STATE(464)] = 13345,
  [SMALL_STATE(465)] = 13353,
  [SMALL_STATE(466)] = 13361,
  [SMALL_STATE(467)] = 13369,
  [SMALL_STATE(468)] = 13377,
  [SMALL_STATE(469)] = 13385,
  [SMALL_STATE(470)] = 13393,
  [SMALL_STATE(471)] = 13401,
  [SMALL_STATE(472)] = 13409,
  [SMALL_STATE(473)] = 13417,
  [SMALL_STATE(474)] = 13425,
  [SMALL_STATE(475)] = 13433,
  [SMALL_STATE(476)] = 13441,
  [SMALL_STATE(477)] = 13449,
  [SMALL_STATE(478)] = 13457,
  [SMALL_STATE(479)] = 13465,
  [SMALL_STATE(480)] = 13473,
  [SMALL_STATE(481)] = 13481,
  [SMALL_STATE(482)] = 13489,
  [SMALL_STATE(483)] = 13497,
  [SMALL_STATE(484)] = 13505,
  [SMALL_STATE(485)] = 13513,
  [SMALL_STATE(486)] = 13521,
  [SMALL_STATE(487)] = 13529,
  [SMALL_STATE(488)] = 13537,
  [SMALL_STATE(489)] = 13545,
  [SMALL_STATE(490)] = 13553,
  [SMALL_STATE(491)] = 13561,
  [SMALL_STATE(492)] = 13569,
  [SMALL_STATE(493)] = 13577,
  [SMALL_STATE(494)] = 13585,
  [SMALL_STATE(495)] = 13593,
  [SMALL_STATE(496)] = 13601,
  [SMALL_STATE(497)] = 13609,
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stylesheet, 0),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(212),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(336),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(250),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(406),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(455),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(338),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(222),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(231),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(446),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(434),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(442),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(465),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(251),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(451),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(453),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(223),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(466),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(249),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(246),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(221),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(263),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(309),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(479),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(480),
  [55] = {.entry = {.count = 1, .reusable = false}}, SHIFT(458),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(461),
  [59] = {.entry = {.count = 1, .reusable = false}}, SHIFT(320),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(464),
  [63] = {.entry = {.count = 1, .reusable = false}}, SHIFT(256),
  [65] = {.entry = {.count = 1, .reusable = false}}, SHIFT(248),
  [67] = {.entry = {.count = 1, .reusable = false}}, SHIFT(331),
  [69] = {.entry = {.count = 1, .reusable = false}}, SHIFT(245),
  [71] = {.entry = {.count = 1, .reusable = false}}, SHIFT(408),
  [73] = {.entry = {.count = 1, .reusable = false}}, SHIFT(467),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [77] = {.entry = {.count = 1, .reusable = false}}, SHIFT(329),
  [79] = {.entry = {.count = 1, .reusable = false}}, SHIFT(469),
  [81] = {.entry = {.count = 1, .reusable = false}}, SHIFT(470),
  [83] = {.entry = {.count = 1, .reusable = false}}, SHIFT(233),
  [85] = {.entry = {.count = 1, .reusable = false}}, SHIFT(242),
  [87] = {.entry = {.count = 1, .reusable = false}}, SHIFT(493),
  [89] = {.entry = {.count = 1, .reusable = false}}, SHIFT(497),
  [91] = {.entry = {.count = 1, .reusable = false}}, SHIFT(241),
  [93] = {.entry = {.count = 1, .reusable = false}}, SHIFT(473),
  [95] = {.entry = {.count = 1, .reusable = false}}, SHIFT(240),
  [97] = {.entry = {.count = 1, .reusable = false}}, SHIFT(244),
  [99] = {.entry = {.count = 1, .reusable = false}}, SHIFT(238),
  [101] = {.entry = {.count = 1, .reusable = false}}, SHIFT(237),
  [103] = {.entry = {.count = 1, .reusable = false}}, SHIFT(236),
  [105] = {.entry = {.count = 1, .reusable = false}}, SHIFT(330),
  [107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(489),
  [109] = {.entry = {.count = 1, .reusable = false}}, SHIFT(252),
  [111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(381),
  [119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(377),
  [123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [129] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stylesheet, 1),
  [131] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(248),
  [134] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(331),
  [137] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(245),
  [140] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(408),
  [143] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(467),
  [146] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2),
  [148] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(329),
  [151] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(446),
  [154] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(469),
  [157] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(470),
  [160] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(233),
  [163] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(242),
  [166] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(493),
  [169] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(497),
  [172] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(241),
  [175] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(473),
  [178] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(240),
  [181] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(244),
  [184] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(238),
  [187] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(237),
  [190] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(236),
  [193] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(263),
  [196] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(309),
  [199] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(479),
  [202] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(480),
  [205] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(458),
  [208] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(461),
  [211] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(327),
  [214] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(489),
  [217] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(252),
  [220] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_stylesheet_repeat1, 2),
  [222] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(212),
  [225] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(336),
  [228] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(250),
  [231] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(406),
  [234] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(455),
  [237] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(338),
  [240] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(222),
  [243] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(231),
  [246] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(446),
  [249] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(434),
  [252] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(442),
  [255] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(465),
  [258] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(251),
  [261] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(451),
  [264] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(453),
  [267] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(223),
  [270] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(466),
  [273] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(249),
  [276] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(246),
  [279] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(221),
  [282] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(263),
  [285] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(309),
  [288] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(479),
  [291] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(480),
  [294] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(458),
  [297] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(461),
  [300] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(320),
  [303] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(464),
  [306] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(256),
  [309] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_statement, 1),
  [311] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 1),
  [313] = {.entry = {.count = 1, .reusable = false}}, SHIFT(409),
  [315] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_statement, 2),
  [317] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 2),
  [319] = {.entry = {.count = 1, .reusable = false}}, SHIFT(397),
  [321] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_if_statement_repeat1, 2),
  [323] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_if_statement_repeat1, 2),
  [325] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_if_statement_repeat1, 2), SHIFT_REPEAT(488),
  [328] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_if_statement_repeat1, 2), SHIFT_REPEAT(483),
  [331] = {.entry = {.count = 1, .reusable = true}}, SHIFT(220),
  [333] = {.entry = {.count = 1, .reusable = true}}, SHIFT(299),
  [335] = {.entry = {.count = 1, .reusable = true}}, SHIFT(306),
  [337] = {.entry = {.count = 1, .reusable = false}}, SHIFT(479),
  [339] = {.entry = {.count = 1, .reusable = false}}, SHIFT(431),
  [341] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [343] = {.entry = {.count = 1, .reusable = false}}, SHIFT(129),
  [345] = {.entry = {.count = 1, .reusable = false}}, SHIFT(130),
  [347] = {.entry = {.count = 1, .reusable = false}}, SHIFT(126),
  [349] = {.entry = {.count = 1, .reusable = false}}, SHIFT(131),
  [351] = {.entry = {.count = 1, .reusable = false}}, SHIFT(134),
  [353] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_clause, 3, .production_id = 11),
  [355] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_clause, 3, .production_id = 11),
  [357] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_else_if_clause, 4, .production_id = 21),
  [359] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_else_if_clause, 4, .production_id = 21),
  [361] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 4),
  [363] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 4),
  [365] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 3),
  [367] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 3),
  [369] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 2),
  [371] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 2),
  [373] = {.entry = {.count = 1, .reusable = true}}, SHIFT(343),
  [375] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_statement, 3, .production_id = 10),
  [377] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_statement, 3, .production_id = 10),
  [379] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_media_statement, 3),
  [381] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_media_statement, 3),
  [383] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_statement, 4, .production_id = 10),
  [385] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_statement, 4, .production_id = 10),
  [387] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_declaration, 4),
  [389] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_declaration, 4),
  [391] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_include_statement, 4),
  [393] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_include_statement, 4),
  [395] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_at_rule, 4),
  [397] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_at_rule, 4),
  [399] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mixin_statement, 4, .production_id = 10),
  [401] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_mixin_statement, 4, .production_id = 10),
  [403] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_statement, 5),
  [405] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_import_statement, 5),
  [407] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyframe_block_list, 3),
  [409] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_keyframe_block_list, 3),
  [411] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_each_statement, 5, .production_id = 20),
  [413] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_each_statement, 5, .production_id = 20),
  [415] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyframe_block_list, 2),
  [417] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_keyframe_block_list, 2),
  [419] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_namespace_statement, 4, .production_id = 16),
  [421] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_namespace_statement, 4, .production_id = 16),
  [423] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_media_statement, 4),
  [425] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_media_statement, 4),
  [427] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_declaration, 5, .production_id = 18),
  [429] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_declaration, 5, .production_id = 18),
  [431] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_declaration, 5),
  [433] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_declaration, 5),
  [435] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_extend_statement, 3),
  [437] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_extend_statement, 3),
  [439] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_statement, 4),
  [441] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_import_statement, 4),
  [443] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_return_statement, 3),
  [445] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return_statement, 3),
  [447] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_at_root_statement, 3),
  [449] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_at_root_statement, 3),
  [451] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_for_statement, 7, .production_id = 26),
  [453] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_statement, 7, .production_id = 26),
  [455] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_each_statement, 7, .production_id = 25),
  [457] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_each_statement, 7, .production_id = 25),
  [459] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_declaration, 6),
  [461] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_declaration, 6),
  [463] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_declaration, 6, .production_id = 18),
  [465] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_declaration, 6, .production_id = 18),
  [467] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_declaration, 4, .production_id = 18),
  [469] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_declaration, 4, .production_id = 18),
  [471] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_at_rule, 2),
  [473] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_at_rule, 2),
  [475] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 3),
  [477] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_statement, 3),
  [479] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule_set, 2),
  [481] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rule_set, 2),
  [483] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_else_clause, 2),
  [485] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_else_clause, 2),
  [487] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_at_rule, 3),
  [489] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_at_rule, 3),
  [491] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_debug_statement, 3),
  [493] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_debug_statement, 3),
  [495] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_warn_statement, 3),
  [497] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_warn_statement, 3),
  [499] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_error_statement, 3),
  [501] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_error_statement, 3),
  [503] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_while_statement, 3),
  [505] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_while_statement, 3),
  [507] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_statement, 3),
  [509] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_import_statement, 3),
  [511] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_placeholder, 3, .production_id = 10),
  [513] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_placeholder, 3, .production_id = 10),
  [515] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_include_statement, 3),
  [517] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_include_statement, 3),
  [519] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_mixin_statement, 3, .production_id = 10),
  [521] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mixin_statement, 3, .production_id = 10),
  [523] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_supports_statement, 3),
  [525] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_supports_statement, 3),
  [527] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_charset_statement, 3),
  [529] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_charset_statement, 3),
  [531] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_namespace_statement, 3),
  [533] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_namespace_statement, 3),
  [535] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_keyframes_statement, 3, .production_id = 9),
  [537] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyframes_statement, 3, .production_id = 9),
  [539] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_use_statement, 3),
  [541] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_use_statement, 3),
  [543] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_forward_statement, 3),
  [545] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_forward_statement, 3),
  [547] = {.entry = {.count = 1, .reusable = true}}, SHIFT(207),
  [549] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [551] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_last_declaration, 3, .production_id = 18),
  [553] = {.entry = {.count = 1, .reusable = true}}, SHIFT(208),
  [555] = {.entry = {.count = 1, .reusable = false}}, SHIFT(441),
  [557] = {.entry = {.count = 1, .reusable = false}}, SHIFT(208),
  [559] = {.entry = {.count = 1, .reusable = true}}, SHIFT(417),
  [561] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [563] = {.entry = {.count = 1, .reusable = false}}, SHIFT(128),
  [565] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [567] = {.entry = {.count = 1, .reusable = true}}, SHIFT(444),
  [569] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [571] = {.entry = {.count = 1, .reusable = true}}, SHIFT(438),
  [573] = {.entry = {.count = 1, .reusable = true}}, SHIFT(447),
  [575] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [577] = {.entry = {.count = 1, .reusable = true}}, SHIFT(485),
  [579] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__selector, 1, .production_id = 1),
  [581] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__value, 1, .production_id = 2),
  [583] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__selector, 1, .production_id = 1),
  [585] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [587] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__value, 1, .production_id = 2),
  [589] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__selector, 1),
  [591] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__value, 1),
  [593] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__selector, 1),
  [595] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__value, 1),
  [597] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_integer_value, 1),
  [599] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_integer_value, 1),
  [601] = {.entry = {.count = 1, .reusable = false}}, SHIFT(137),
  [603] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_float_value, 1),
  [605] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_float_value, 1),
  [607] = {.entry = {.count = 1, .reusable = false}}, SHIFT(136),
  [609] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__value, 1, .production_id = 3),
  [611] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__value, 1, .production_id = 3),
  [613] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_expression, 3),
  [615] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_expression, 3),
  [617] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parenthesized_value, 3),
  [619] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parenthesized_value, 3),
  [621] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call_expression, 2, .production_id = 8),
  [623] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_call_expression, 2, .production_id = 8),
  [625] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_float_value, 2),
  [627] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_float_value, 2),
  [629] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_integer_value, 2),
  [631] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_integer_value, 2),
  [633] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arguments, 2),
  [635] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arguments, 2),
  [637] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arguments, 4),
  [639] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arguments, 4),
  [641] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arguments, 3),
  [643] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arguments, 3),
  [645] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_color_value, 2),
  [647] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_color_value, 2),
  [649] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [651] = {.entry = {.count = 1, .reusable = true}}, SHIFT(315),
  [653] = {.entry = {.count = 1, .reusable = true}}, SHIFT(216),
  [655] = {.entry = {.count = 1, .reusable = false}}, SHIFT(216),
  [657] = {.entry = {.count = 1, .reusable = false}}, SHIFT(318),
  [659] = {.entry = {.count = 1, .reusable = false}}, SHIFT(482),
  [661] = {.entry = {.count = 1, .reusable = false}}, SHIFT(360),
  [663] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_declaration_repeat1, 1),
  [665] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_declaration_repeat1, 1),
  [667] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_declaration_repeat1, 2),
  [669] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_declaration_repeat1, 2),
  [671] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [673] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_pseudo_class_arguments_repeat1, 1),
  [675] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_pseudo_class_arguments_repeat1, 1),
  [677] = {.entry = {.count = 1, .reusable = true}}, SHIFT(261),
  [679] = {.entry = {.count = 1, .reusable = true}}, SHIFT(307),
  [681] = {.entry = {.count = 1, .reusable = true}}, SHIFT(345),
  [683] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [685] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [687] = {.entry = {.count = 1, .reusable = true}}, SHIFT(312),
  [689] = {.entry = {.count = 1, .reusable = true}}, SHIFT(308),
  [691] = {.entry = {.count = 1, .reusable = true}}, SHIFT(301),
  [693] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [695] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_declaration_repeat1, 2), SHIFT_REPEAT(207),
  [698] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_declaration_repeat1, 2), SHIFT_REPEAT(220),
  [701] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_declaration_repeat1, 2), SHIFT_REPEAT(441),
  [704] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_declaration_repeat1, 2), SHIFT_REPEAT(134),
  [707] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_declaration_repeat1, 2), SHIFT_REPEAT(129),
  [710] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_declaration_repeat1, 2), SHIFT_REPEAT(130),
  [713] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_declaration_repeat1, 2), SHIFT_REPEAT(128),
  [716] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_declaration_repeat1, 2), SHIFT_REPEAT(131),
  [719] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_declaration_repeat1, 2), SHIFT_REPEAT(134),
  [722] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [724] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_last_declaration, 4, .production_id = 18),
  [726] = {.entry = {.count = 1, .reusable = true}}, SHIFT(415),
  [728] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [730] = {.entry = {.count = 1, .reusable = true}}, SHIFT(262),
  [732] = {.entry = {.count = 1, .reusable = true}}, SHIFT(285),
  [734] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_arguments_repeat1, 2),
  [736] = {.entry = {.count = 1, .reusable = true}}, SHIFT(439),
  [738] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [740] = {.entry = {.count = 1, .reusable = true}}, SHIFT(463),
  [742] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [744] = {.entry = {.count = 1, .reusable = true}}, SHIFT(459),
  [746] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [748] = {.entry = {.count = 1, .reusable = true}}, SHIFT(440),
  [750] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_pseudo_class_arguments_repeat1, 2),
  [752] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_pseudo_class_arguments_repeat1, 2), SHIFT_REPEAT(220),
  [755] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_pseudo_class_arguments_repeat1, 2), SHIFT_REPEAT(441),
  [758] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_pseudo_class_arguments_repeat1, 2), SHIFT_REPEAT(134),
  [761] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_pseudo_class_arguments_repeat1, 2), SHIFT_REPEAT(129),
  [764] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_pseudo_class_arguments_repeat1, 2), SHIFT_REPEAT(130),
  [767] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_pseudo_class_arguments_repeat1, 2), SHIFT_REPEAT(128),
  [770] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_pseudo_class_arguments_repeat1, 2), SHIFT_REPEAT(131),
  [773] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_pseudo_class_arguments_repeat1, 2), SHIFT_REPEAT(134),
  [776] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [778] = {.entry = {.count = 1, .reusable = true}}, SHIFT(296),
  [780] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [782] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_pseudo_class_arguments_repeat2, 2),
  [784] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [786] = {.entry = {.count = 1, .reusable = false}}, SHIFT(174),
  [788] = {.entry = {.count = 1, .reusable = false}}, SHIFT(193),
  [790] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [792] = {.entry = {.count = 1, .reusable = true}}, SHIFT(298),
  [794] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [796] = {.entry = {.count = 1, .reusable = true}}, SHIFT(361),
  [798] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [800] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [802] = {.entry = {.count = 1, .reusable = true}}, SHIFT(200),
  [804] = {.entry = {.count = 1, .reusable = true}}, SHIFT(217),
  [806] = {.entry = {.count = 1, .reusable = false}}, SHIFT(450),
  [808] = {.entry = {.count = 1, .reusable = true}}, SHIFT(286),
  [810] = {.entry = {.count = 1, .reusable = false}}, SHIFT(259),
  [812] = {.entry = {.count = 1, .reusable = false}}, SHIFT(257),
  [814] = {.entry = {.count = 1, .reusable = false}}, SHIFT(254),
  [816] = {.entry = {.count = 1, .reusable = false}}, SHIFT(258),
  [818] = {.entry = {.count = 1, .reusable = false}}, SHIFT(286),
  [820] = {.entry = {.count = 1, .reusable = true}}, SHIFT(234),
  [822] = {.entry = {.count = 1, .reusable = false}}, SHIFT(478),
  [824] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [826] = {.entry = {.count = 1, .reusable = false}}, SHIFT(179),
  [828] = {.entry = {.count = 1, .reusable = false}}, SHIFT(177),
  [830] = {.entry = {.count = 1, .reusable = false}}, SHIFT(166),
  [832] = {.entry = {.count = 1, .reusable = false}}, SHIFT(187),
  [834] = {.entry = {.count = 1, .reusable = false}}, SHIFT(190),
  [836] = {.entry = {.count = 1, .reusable = false}}, SHIFT(264),
  [838] = {.entry = {.count = 1, .reusable = false}}, SHIFT(284),
  [840] = {.entry = {.count = 1, .reusable = true}}, SHIFT(210),
  [842] = {.entry = {.count = 1, .reusable = false}}, SHIFT(481),
  [844] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [846] = {.entry = {.count = 1, .reusable = false}}, SHIFT(169),
  [848] = {.entry = {.count = 1, .reusable = false}}, SHIFT(170),
  [850] = {.entry = {.count = 1, .reusable = false}}, SHIFT(168),
  [852] = {.entry = {.count = 1, .reusable = false}}, SHIFT(181),
  [854] = {.entry = {.count = 1, .reusable = false}}, SHIFT(185),
  [856] = {.entry = {.count = 1, .reusable = false}}, SHIFT(276),
  [858] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [860] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [862] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pseudo_class_selector, 3, .production_id = 13),
  [864] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pseudo_class_selector, 3, .production_id = 13),
  [866] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [868] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [870] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pseudo_class_selector, 2, .production_id = 5),
  [872] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pseudo_class_selector, 2, .production_id = 5),
  [874] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [876] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [878] = {.entry = {.count = 1, .reusable = true}}, SHIFT(283),
  [880] = {.entry = {.count = 1, .reusable = true}}, SHIFT(239),
  [882] = {.entry = {.count = 1, .reusable = true}}, SHIFT(282),
  [884] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute_selector, 6, .production_id = 19),
  [886] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attribute_selector, 6, .production_id = 19),
  [888] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_adjacent_sibling_selector, 3),
  [890] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_adjacent_sibling_selector, 3),
  [892] = {.entry = {.count = 1, .reusable = true}}, SHIFT(490),
  [894] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_child_selector, 3),
  [896] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_child_selector, 3),
  [898] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [900] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_selectors, 1),
  [902] = {.entry = {.count = 1, .reusable = false}}, SHIFT(443),
  [904] = {.entry = {.count = 1, .reusable = true}}, SHIFT(487),
  [906] = {.entry = {.count = 1, .reusable = true}}, SHIFT(486),
  [908] = {.entry = {.count = 1, .reusable = true}}, SHIFT(484),
  [910] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [912] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [914] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [916] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [918] = {.entry = {.count = 1, .reusable = false}}, SHIFT(200),
  [920] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_id_selector, 3, .production_id = 15),
  [922] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_id_selector, 3, .production_id = 15),
  [924] = {.entry = {.count = 1, .reusable = true}}, SHIFT(227),
  [926] = {.entry = {.count = 1, .reusable = false}}, SHIFT(227),
  [928] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pseudo_element_selector, 3, .production_id = 14),
  [930] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pseudo_element_selector, 3, .production_id = 14),
  [932] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pseudo_class_arguments, 4),
  [934] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pseudo_class_arguments, 4),
  [936] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 3, .production_id = 23),
  [938] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [940] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_include_argument, 3, .production_id = 24),
  [942] = {.entry = {.count = 1, .reusable = true}}, SHIFT(215),
  [944] = {.entry = {.count = 1, .reusable = false}}, SHIFT(215),
  [946] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_selector, 3, .production_id = 13),
  [948] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_class_selector, 3, .production_id = 13),
  [950] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [952] = {.entry = {.count = 1, .reusable = false}}, SHIFT(203),
  [954] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sibling_selector, 3),
  [956] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sibling_selector, 3),
  [958] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_selector, 2, .production_id = 5),
  [960] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_class_selector, 2, .production_id = 5),
  [962] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pseudo_element_selector, 2, .production_id = 6),
  [964] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pseudo_element_selector, 2, .production_id = 6),
  [966] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_id_selector, 2, .production_id = 7),
  [968] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_id_selector, 2, .production_id = 7),
  [970] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute_selector, 5, .production_id = 12),
  [972] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attribute_selector, 5, .production_id = 12),
  [974] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_include_argument, 1, .production_id = 17),
  [976] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute_selector, 3, .production_id = 12),
  [978] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attribute_selector, 3, .production_id = 12),
  [980] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pseudo_class_arguments, 3),
  [982] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pseudo_class_arguments, 3),
  [984] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pseudo_class_arguments, 2),
  [986] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pseudo_class_arguments, 2),
  [988] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pseudo_class_selector, 3, .production_id = 5),
  [990] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pseudo_class_selector, 3, .production_id = 5),
  [992] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_descendant_selector, 3),
  [994] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_descendant_selector, 3),
  [996] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_universal_selector, 1),
  [998] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_universal_selector, 1),
  [1000] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute_selector, 4, .production_id = 19),
  [1002] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attribute_selector, 4, .production_id = 19),
  [1004] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pseudo_class_selector, 4, .production_id = 13),
  [1006] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pseudo_class_selector, 4, .production_id = 13),
  [1008] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_selectors_repeat1, 2),
  [1010] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [1012] = {.entry = {.count = 1, .reusable = false}}, SHIFT(390),
  [1014] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [1016] = {.entry = {.count = 1, .reusable = true}}, SHIFT(297),
  [1018] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym__selector, 1, .production_id = 1), SHIFT(213),
  [1021] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [1023] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [1025] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [1027] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [1029] = {.entry = {.count = 1, .reusable = true}}, SHIFT(260),
  [1031] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [1033] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym__selector, 1, .production_id = 1), SHIFT(230),
  [1036] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
  [1038] = {.entry = {.count = 1, .reusable = true}}, SHIFT(218),
  [1040] = {.entry = {.count = 1, .reusable = false}}, SHIFT(218),
  [1042] = {.entry = {.count = 1, .reusable = false}}, SHIFT(211),
  [1044] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [1046] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [1048] = {.entry = {.count = 1, .reusable = true}}, SHIFT(224),
  [1050] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [1052] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [1054] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [1056] = {.entry = {.count = 1, .reusable = true}}, SHIFT(292),
  [1058] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [1060] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [1062] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [1064] = {.entry = {.count = 1, .reusable = true}}, SHIFT(359),
  [1066] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [1068] = {.entry = {.count = 1, .reusable = true}}, SHIFT(468),
  [1070] = {.entry = {.count = 1, .reusable = true}}, SHIFT(413),
  [1072] = {.entry = {.count = 1, .reusable = true}}, SHIFT(423),
  [1074] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [1076] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [1078] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_keyframe_block_list_repeat1, 2),
  [1080] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_keyframe_block_list_repeat1, 2), SHIFT_REPEAT(468),
  [1083] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_keyframe_block_list_repeat1, 2), SHIFT_REPEAT(413),
  [1086] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_keyframe_block_list_repeat1, 2), SHIFT_REPEAT(423),
  [1089] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [1091] = {.entry = {.count = 1, .reusable = true}}, SHIFT(316),
  [1093] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [1095] = {.entry = {.count = 1, .reusable = true}}, SHIFT(314),
  [1097] = {.entry = {.count = 1, .reusable = true}}, SHIFT(232),
  [1099] = {.entry = {.count = 1, .reusable = true}}, SHIFT(295),
  [1101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(219),
  [1103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(310),
  [1105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [1107] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parenthesized_query, 3),
  [1109] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unary_query, 2),
  [1111] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_selector_query, 4),
  [1113] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__query, 1, .production_id = 4),
  [1115] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_feature_query, 5, .production_id = 22),
  [1117] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_query, 3),
  [1119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [1121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
  [1123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [1125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [1127] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_import_statement_repeat1, 2),
  [1129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [1131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [1133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [1135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(477),
  [1137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(421),
  [1139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(471),
  [1141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(419),
  [1143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [1145] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyframe_block, 2),
  [1147] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_import_statement_repeat1, 2), SHIFT_REPEAT(316),
  [1150] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [1152] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_arguments_repeat1, 2), SHIFT_REPEAT(194),
  [1155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [1157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(303),
  [1159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [1161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [1163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [1165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(428),
  [1167] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_parameters_repeat1, 2), SHIFT_REPEAT(425),
  [1170] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parameters_repeat1, 2),
  [1172] = {.entry = {.count = 1, .reusable = true}}, SHIFT(424),
  [1174] = {.entry = {.count = 1, .reusable = true}}, SHIFT(425),
  [1176] = {.entry = {.count = 1, .reusable = true}}, SHIFT(476),
  [1178] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 1),
  [1180] = {.entry = {.count = 1, .reusable = true}}, SHIFT(235),
  [1182] = {.entry = {.count = 1, .reusable = true}}, SHIFT(247),
  [1184] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_selectors, 2),
  [1186] = {.entry = {.count = 1, .reusable = true}}, SHIFT(270),
  [1188] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_selectors_repeat1, 2), SHIFT_REPEAT(150),
  [1191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(356),
  [1193] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_pseudo_class_arguments_repeat2, 2), SHIFT_REPEAT(28),
  [1196] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [1198] = {.entry = {.count = 1, .reusable = true}}, SHIFT(437),
  [1200] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_include_arguments_repeat1, 2), SHIFT_REPEAT(183),
  [1203] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_include_arguments_repeat1, 2),
  [1205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(452),
  [1207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(370),
  [1209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [1211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(475),
  [1213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(371),
  [1215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(226),
  [1217] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [1219] = {.entry = {.count = 1, .reusable = true}}, SHIFT(347),
  [1221] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [1223] = {.entry = {.count = 1, .reusable = true}}, SHIFT(494),
  [1225] = {.entry = {.count = 1, .reusable = true}}, SHIFT(228),
  [1227] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [1229] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_last_declaration, 5, .production_id = 18),
  [1231] = {.entry = {.count = 1, .reusable = true}}, SHIFT(396),
  [1233] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [1235] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_include_arguments, 3),
  [1237] = {.entry = {.count = 1, .reusable = true}}, SHIFT(350),
  [1239] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_include_arguments, 4),
  [1241] = {.entry = {.count = 1, .reusable = false}}, SHIFT(141),
  [1243] = {.entry = {.count = 1, .reusable = false}}, SHIFT(291),
  [1245] = {.entry = {.count = 1, .reusable = true}}, SHIFT(474),
  [1247] = {.entry = {.count = 1, .reusable = true}}, SHIFT(205),
  [1249] = {.entry = {.count = 1, .reusable = true}}, SHIFT(374),
  [1251] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [1253] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [1255] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameters, 4),
  [1257] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [1259] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [1261] = {.entry = {.count = 1, .reusable = true}}, SHIFT(363),
  [1263] = {.entry = {.count = 1, .reusable = true}}, SHIFT(253),
  [1265] = {.entry = {.count = 1, .reusable = true}}, SHIFT(255),
  [1267] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [1269] = {.entry = {.count = 1, .reusable = true}}, SHIFT(206),
  [1271] = {.entry = {.count = 1, .reusable = true}}, SHIFT(277),
  [1273] = {.entry = {.count = 1, .reusable = true}}, SHIFT(432),
  [1275] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [1277] = {.entry = {.count = 1, .reusable = true}}, SHIFT(449),
  [1279] = {.entry = {.count = 1, .reusable = true}}, SHIFT(427),
  [1281] = {.entry = {.count = 1, .reusable = true}}, SHIFT(383),
  [1283] = {.entry = {.count = 1, .reusable = true}}, SHIFT(291),
  [1285] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [1287] = {.entry = {.count = 1, .reusable = true}}, SHIFT(352),
  [1289] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [1291] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [1293] = {.entry = {.count = 1, .reusable = true}}, SHIFT(214),
  [1295] = {.entry = {.count = 1, .reusable = true}}, SHIFT(426),
  [1297] = {.entry = {.count = 1, .reusable = true}}, SHIFT(372),
  [1299] = {.entry = {.count = 1, .reusable = true}}, SHIFT(412),
  [1301] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from, 1),
  [1303] = {.entry = {.count = 1, .reusable = true}}, SHIFT(375),
  [1305] = {.entry = {.count = 1, .reusable = true}}, SHIFT(369),
  [1307] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [1309] = {.entry = {.count = 1, .reusable = true}}, SHIFT(386),
  [1311] = {.entry = {.count = 1, .reusable = true}}, SHIFT(492),
  [1313] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [1315] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameters, 3),
  [1317] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [1319] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [1321] = {.entry = {.count = 1, .reusable = true}}, SHIFT(289),
  [1323] = {.entry = {.count = 1, .reusable = true}}, SHIFT(290),
  [1325] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [1327] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [1329] = {.entry = {.count = 1, .reusable = true}}, SHIFT(353),
  [1331] = {.entry = {.count = 1, .reusable = true}}, SHIFT(265),
  [1333] = {.entry = {.count = 1, .reusable = true}}, SHIFT(269),
  [1335] = {.entry = {.count = 1, .reusable = true}}, SHIFT(229),
  [1337] = {.entry = {.count = 1, .reusable = true}}, SHIFT(280),
  [1339] = {.entry = {.count = 1, .reusable = true}}, SHIFT(225),
  [1341] = {.entry = {.count = 1, .reusable = true}}, SHIFT(243),
  [1343] = {.entry = {.count = 1, .reusable = true}}, SHIFT(414),
  [1345] = {.entry = {.count = 1, .reusable = true}}, SHIFT(491),
  [1347] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [1349] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [1351] = {.entry = {.count = 1, .reusable = true}}, SHIFT(496),
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
