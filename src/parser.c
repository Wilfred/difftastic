#include <tree_sitter/parser.h>

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"

#define STATE_COUNT 905
#define SYMBOL_COUNT 119
#define TOKEN_COUNT 55
#define EXTERNAL_TOKEN_COUNT 3

enum {
    anon_sym_SEMI = 1,
    anon_sym_import = 2,
    anon_sym_from = 3,
    anon_sym_DOT = 4,
    anon_sym_LPAREN = 5,
    anon_sym_RPAREN = 6,
    anon_sym_COMMA = 7,
    anon_sym_as = 8,
    anon_sym_STAR = 9,
    anon_sym_print = 10,
    anon_sym_return = 11,
    anon_sym_del = 12,
    sym_pass_statement = 13,
    sym_break_statement = 14,
    sym_continue_statement = 15,
    anon_sym_if = 16,
    anon_sym_COLON = 17,
    anon_sym_elif = 18,
    anon_sym_else = 19,
    anon_sym_for = 20,
    anon_sym_in = 21,
    anon_sym_while = 22,
    anon_sym_try = 23,
    anon_sym_except = 24,
    anon_sym_finally = 25,
    anon_sym_with = 26,
    anon_sym_def = 27,
    anon_sym_EQ = 28,
    anon_sym_class = 29,
    anon_sym_AT = 30,
    anon_sym_PLUS = 31,
    anon_sym_DASH = 32,
    anon_sym_SLASH = 33,
    anon_sym_STAR_STAR = 34,
    anon_sym_PIPE = 35,
    anon_sym_AMP = 36,
    anon_sym_CARET = 37,
    anon_sym_LT_LT = 38,
    anon_sym_GT_GT = 39,
    anon_sym_and = 40,
    anon_sym_or = 41,
    anon_sym_not = 42,
    anon_sym_LBRACK = 43,
    anon_sym_DOT_DOT_DOT = 44,
    anon_sym_RBRACK = 45,
    anon_sym_LBRACE = 46,
    anon_sym_RBRACE = 47,
    sym_string = 48,
    sym_number = 49,
    sym_identifier = 50,
    sym_comment = 51,
    sym__newline = 52,
    sym__indent = 53,
    sym__dedent = 54,
    sym_module = 55,
    sym__statement = 56,
    sym__simple_statement = 57,
    sym_import_statement = 58,
    sym_import_from_statement = 59,
    sym__import_list = 60,
    sym_aliased_import = 61,
    sym_wildcard_import = 62,
    sym_print_statement = 63,
    sym_expression_statement = 64,
    sym_return_statement = 65,
    sym_delete_statement = 66,
    sym__compound_statement = 67,
    sym_if_statement = 68,
    sym_elif_clause = 69,
    sym_else_clause = 70,
    sym_for_statement = 71,
    sym_while_statement = 72,
    sym_try_statement = 73,
    sym_except_clause = 74,
    sym_finally_clause = 75,
    sym_with_statement = 76,
    sym_with_item = 77,
    sym_function_definition = 78,
    sym_parameters = 79,
    sym_default_parameter = 80,
    sym_list_splat_parameter = 81,
    sym_dictionary_splat_parameter = 82,
    sym_class_definition = 83,
    sym_decorated_definition = 84,
    sym_decorator = 85,
    sym__suite = 86,
    sym_arguments = 87,
    sym_expression_list = 88,
    sym_dotted_name = 89,
    sym__expression = 90,
    sym_binary_operator = 91,
    sym_unary_operator = 92,
    sym_subscript = 93,
    sym_call = 94,
    sym_keyword_argument = 95,
    sym_list_splat_argument = 96,
    sym_dictionary_splat_argument = 97,
    sym_list = 98,
    sym_list_comprehension = 99,
    sym_dictionary = 100,
    sym_dictionary_comprehension = 101,
    sym_pair = 102,
    sym_set = 103,
    sym_set_comprehension = 104,
    aux_sym_module_repeat1 = 105,
    aux_sym_import_from_statement_repeat1 = 106,
    aux_sym__import_list_repeat1 = 107,
    aux_sym_print_statement_repeat1 = 108,
    aux_sym_if_statement_repeat1 = 109,
    aux_sym_try_statement_repeat1 = 110,
    aux_sym_with_statement_repeat1 = 111,
    aux_sym_parameters_repeat1 = 112,
    aux_sym_decorated_definition_repeat1 = 113,
    aux_sym_dotted_name_repeat1 = 114,
    aux_sym_subscript_repeat1 = 115,
    aux_sym_call_repeat1 = 116,
    aux_sym_call_repeat2 = 117,
    aux_sym_dictionary_repeat1 = 118,
};

static const char *ts_symbol_names[] = {
    [ts_builtin_sym_end] = "END",
    [anon_sym_SEMI] = ";",
    [anon_sym_import] = "import",
    [anon_sym_from] = "from",
    [anon_sym_DOT] = ".",
    [anon_sym_LPAREN] = "(",
    [anon_sym_RPAREN] = ")",
    [anon_sym_COMMA] = ",",
    [anon_sym_as] = "as",
    [anon_sym_STAR] = "*",
    [anon_sym_print] = "print",
    [anon_sym_return] = "return",
    [anon_sym_del] = "del",
    [sym_pass_statement] = "pass_statement",
    [sym_break_statement] = "break_statement",
    [sym_continue_statement] = "continue_statement",
    [anon_sym_if] = "if",
    [anon_sym_COLON] = ":",
    [anon_sym_elif] = "elif",
    [anon_sym_else] = "else",
    [anon_sym_for] = "for",
    [anon_sym_in] = "in",
    [anon_sym_while] = "while",
    [anon_sym_try] = "try",
    [anon_sym_except] = "except",
    [anon_sym_finally] = "finally",
    [anon_sym_with] = "with",
    [anon_sym_def] = "def",
    [anon_sym_EQ] = "=",
    [anon_sym_class] = "class",
    [anon_sym_AT] = "@",
    [anon_sym_PLUS] = "+",
    [anon_sym_DASH] = "-",
    [anon_sym_SLASH] = "/",
    [anon_sym_STAR_STAR] = "**",
    [anon_sym_PIPE] = "|",
    [anon_sym_AMP] = "&",
    [anon_sym_CARET] = "^",
    [anon_sym_LT_LT] = "<<",
    [anon_sym_GT_GT] = ">>",
    [anon_sym_and] = "and",
    [anon_sym_or] = "or",
    [anon_sym_not] = "not",
    [anon_sym_LBRACK] = "[",
    [anon_sym_DOT_DOT_DOT] = "...",
    [anon_sym_RBRACK] = "]",
    [anon_sym_LBRACE] = "{",
    [anon_sym_RBRACE] = "}",
    [sym_string] = "string",
    [sym_number] = "number",
    [sym_identifier] = "identifier",
    [sym_comment] = "comment",
    [sym__newline] = "_newline",
    [sym__indent] = "_indent",
    [sym__dedent] = "_dedent",
    [sym_module] = "module",
    [sym__statement] = "_statement",
    [sym__simple_statement] = "_simple_statement",
    [sym_import_statement] = "import_statement",
    [sym_import_from_statement] = "import_from_statement",
    [sym__import_list] = "_import_list",
    [sym_aliased_import] = "aliased_import",
    [sym_wildcard_import] = "wildcard_import",
    [sym_print_statement] = "print_statement",
    [sym_expression_statement] = "expression_statement",
    [sym_return_statement] = "return_statement",
    [sym_delete_statement] = "delete_statement",
    [sym__compound_statement] = "_compound_statement",
    [sym_if_statement] = "if_statement",
    [sym_elif_clause] = "elif_clause",
    [sym_else_clause] = "else_clause",
    [sym_for_statement] = "for_statement",
    [sym_while_statement] = "while_statement",
    [sym_try_statement] = "try_statement",
    [sym_except_clause] = "except_clause",
    [sym_finally_clause] = "finally_clause",
    [sym_with_statement] = "with_statement",
    [sym_with_item] = "with_item",
    [sym_function_definition] = "function_definition",
    [sym_parameters] = "parameters",
    [sym_default_parameter] = "default_parameter",
    [sym_list_splat_parameter] = "list_splat_parameter",
    [sym_dictionary_splat_parameter] = "dictionary_splat_parameter",
    [sym_class_definition] = "class_definition",
    [sym_decorated_definition] = "decorated_definition",
    [sym_decorator] = "decorator",
    [sym__suite] = "_suite",
    [sym_arguments] = "arguments",
    [sym_expression_list] = "expression_list",
    [sym_dotted_name] = "dotted_name",
    [sym__expression] = "_expression",
    [sym_binary_operator] = "binary_operator",
    [sym_unary_operator] = "unary_operator",
    [sym_subscript] = "subscript",
    [sym_call] = "call",
    [sym_keyword_argument] = "keyword_argument",
    [sym_list_splat_argument] = "list_splat_argument",
    [sym_dictionary_splat_argument] = "dictionary_splat_argument",
    [sym_list] = "list",
    [sym_list_comprehension] = "list_comprehension",
    [sym_dictionary] = "dictionary",
    [sym_dictionary_comprehension] = "dictionary_comprehension",
    [sym_pair] = "pair",
    [sym_set] = "set",
    [sym_set_comprehension] = "set_comprehension",
    [aux_sym_module_repeat1] = "module_repeat1",
    [aux_sym_import_from_statement_repeat1] = "import_from_statement_repeat1",
    [aux_sym__import_list_repeat1] = "_import_list_repeat1",
    [aux_sym_print_statement_repeat1] = "print_statement_repeat1",
    [aux_sym_if_statement_repeat1] = "if_statement_repeat1",
    [aux_sym_try_statement_repeat1] = "try_statement_repeat1",
    [aux_sym_with_statement_repeat1] = "with_statement_repeat1",
    [aux_sym_parameters_repeat1] = "parameters_repeat1",
    [aux_sym_decorated_definition_repeat1] = "decorated_definition_repeat1",
    [aux_sym_dotted_name_repeat1] = "dotted_name_repeat1",
    [aux_sym_subscript_repeat1] = "subscript_repeat1",
    [aux_sym_call_repeat1] = "call_repeat1",
    [aux_sym_call_repeat2] = "call_repeat2",
    [aux_sym_dictionary_repeat1] = "dictionary_repeat1",
};

static const TSSymbolMetadata ts_symbol_metadata[SYMBOL_COUNT] = {
    [ts_builtin_sym_end] = {
        .visible = false,
        .named = true,
        .structural = true,
        .extra = false,
    },
    [anon_sym_SEMI] = {
        .visible = true,
        .named = false,
        .structural = true,
        .extra = false,
    },
    [anon_sym_import] = {
        .visible = true,
        .named = false,
        .structural = true,
        .extra = false,
    },
    [anon_sym_from] = {
        .visible = true,
        .named = false,
        .structural = true,
        .extra = false,
    },
    [anon_sym_DOT] = {
        .visible = true,
        .named = false,
        .structural = true,
        .extra = false,
    },
    [anon_sym_LPAREN] = {
        .visible = true,
        .named = false,
        .structural = true,
        .extra = false,
    },
    [anon_sym_RPAREN] = {
        .visible = true,
        .named = false,
        .structural = true,
        .extra = false,
    },
    [anon_sym_COMMA] = {
        .visible = true,
        .named = false,
        .structural = true,
        .extra = false,
    },
    [anon_sym_as] = {
        .visible = true,
        .named = false,
        .structural = true,
        .extra = false,
    },
    [anon_sym_STAR] = {
        .visible = true,
        .named = false,
        .structural = true,
        .extra = false,
    },
    [anon_sym_print] = {
        .visible = true,
        .named = false,
        .structural = true,
        .extra = false,
    },
    [anon_sym_return] = {
        .visible = true,
        .named = false,
        .structural = true,
        .extra = false,
    },
    [anon_sym_del] = {
        .visible = true,
        .named = false,
        .structural = true,
        .extra = false,
    },
    [sym_pass_statement] = {
        .visible = true,
        .named = true,
        .structural = true,
        .extra = false,
    },
    [sym_break_statement] = {
        .visible = true,
        .named = true,
        .structural = true,
        .extra = false,
    },
    [sym_continue_statement] = {
        .visible = true,
        .named = true,
        .structural = true,
        .extra = false,
    },
    [anon_sym_if] = {
        .visible = true,
        .named = false,
        .structural = true,
        .extra = false,
    },
    [anon_sym_COLON] = {
        .visible = true,
        .named = false,
        .structural = true,
        .extra = false,
    },
    [anon_sym_elif] = {
        .visible = true,
        .named = false,
        .structural = true,
        .extra = false,
    },
    [anon_sym_else] = {
        .visible = true,
        .named = false,
        .structural = true,
        .extra = false,
    },
    [anon_sym_for] = {
        .visible = true,
        .named = false,
        .structural = true,
        .extra = false,
    },
    [anon_sym_in] = {
        .visible = true,
        .named = false,
        .structural = true,
        .extra = false,
    },
    [anon_sym_while] = {
        .visible = true,
        .named = false,
        .structural = true,
        .extra = false,
    },
    [anon_sym_try] = {
        .visible = true,
        .named = false,
        .structural = true,
        .extra = false,
    },
    [anon_sym_except] = {
        .visible = true,
        .named = false,
        .structural = true,
        .extra = false,
    },
    [anon_sym_finally] = {
        .visible = true,
        .named = false,
        .structural = true,
        .extra = false,
    },
    [anon_sym_with] = {
        .visible = true,
        .named = false,
        .structural = true,
        .extra = false,
    },
    [anon_sym_def] = {
        .visible = true,
        .named = false,
        .structural = true,
        .extra = false,
    },
    [anon_sym_EQ] = {
        .visible = true,
        .named = false,
        .structural = true,
        .extra = false,
    },
    [anon_sym_class] = {
        .visible = true,
        .named = false,
        .structural = true,
        .extra = false,
    },
    [anon_sym_AT] = {
        .visible = true,
        .named = false,
        .structural = true,
        .extra = false,
    },
    [anon_sym_PLUS] = {
        .visible = true,
        .named = false,
        .structural = true,
        .extra = false,
    },
    [anon_sym_DASH] = {
        .visible = true,
        .named = false,
        .structural = true,
        .extra = false,
    },
    [anon_sym_SLASH] = {
        .visible = true,
        .named = false,
        .structural = true,
        .extra = false,
    },
    [anon_sym_STAR_STAR] = {
        .visible = true,
        .named = false,
        .structural = true,
        .extra = false,
    },
    [anon_sym_PIPE] = {
        .visible = true,
        .named = false,
        .structural = true,
        .extra = false,
    },
    [anon_sym_AMP] = {
        .visible = true,
        .named = false,
        .structural = true,
        .extra = false,
    },
    [anon_sym_CARET] = {
        .visible = true,
        .named = false,
        .structural = true,
        .extra = false,
    },
    [anon_sym_LT_LT] = {
        .visible = true,
        .named = false,
        .structural = true,
        .extra = false,
    },
    [anon_sym_GT_GT] = {
        .visible = true,
        .named = false,
        .structural = true,
        .extra = false,
    },
    [anon_sym_and] = {
        .visible = true,
        .named = false,
        .structural = true,
        .extra = false,
    },
    [anon_sym_or] = {
        .visible = true,
        .named = false,
        .structural = true,
        .extra = false,
    },
    [anon_sym_not] = {
        .visible = true,
        .named = false,
        .structural = true,
        .extra = false,
    },
    [anon_sym_LBRACK] = {
        .visible = true,
        .named = false,
        .structural = true,
        .extra = false,
    },
    [anon_sym_DOT_DOT_DOT] = {
        .visible = true,
        .named = false,
        .structural = true,
        .extra = false,
    },
    [anon_sym_RBRACK] = {
        .visible = true,
        .named = false,
        .structural = true,
        .extra = false,
    },
    [anon_sym_LBRACE] = {
        .visible = true,
        .named = false,
        .structural = true,
        .extra = false,
    },
    [anon_sym_RBRACE] = {
        .visible = true,
        .named = false,
        .structural = true,
        .extra = false,
    },
    [sym_string] = {
        .visible = true,
        .named = true,
        .structural = true,
        .extra = false,
    },
    [sym_number] = {
        .visible = true,
        .named = true,
        .structural = true,
        .extra = false,
    },
    [sym_identifier] = {
        .visible = true,
        .named = true,
        .structural = true,
        .extra = false,
    },
    [sym_comment] = {
        .visible = true,
        .named = true,
        .structural = false,
        .extra = true,
    },
    [sym__newline] = {
        .visible = false,
        .named = true,
        .structural = true,
        .extra = false,
    },
    [sym__indent] = {
        .visible = false,
        .named = true,
        .structural = true,
        .extra = false,
    },
    [sym__dedent] = {
        .visible = false,
        .named = true,
        .structural = true,
        .extra = false,
    },
    [sym_module] = {
        .visible = true,
        .named = true,
        .structural = true,
        .extra = false,
    },
    [sym__statement] = {
        .visible = false,
        .named = true,
        .structural = true,
        .extra = false,
    },
    [sym__simple_statement] = {
        .visible = false,
        .named = true,
        .structural = true,
        .extra = false,
    },
    [sym_import_statement] = {
        .visible = true,
        .named = true,
        .structural = true,
        .extra = false,
    },
    [sym_import_from_statement] = {
        .visible = true,
        .named = true,
        .structural = true,
        .extra = false,
    },
    [sym__import_list] = {
        .visible = false,
        .named = true,
        .structural = true,
        .extra = false,
    },
    [sym_aliased_import] = {
        .visible = true,
        .named = true,
        .structural = true,
        .extra = false,
    },
    [sym_wildcard_import] = {
        .visible = true,
        .named = true,
        .structural = true,
        .extra = false,
    },
    [sym_print_statement] = {
        .visible = true,
        .named = true,
        .structural = true,
        .extra = false,
    },
    [sym_expression_statement] = {
        .visible = true,
        .named = true,
        .structural = true,
        .extra = false,
    },
    [sym_return_statement] = {
        .visible = true,
        .named = true,
        .structural = true,
        .extra = false,
    },
    [sym_delete_statement] = {
        .visible = true,
        .named = true,
        .structural = true,
        .extra = false,
    },
    [sym__compound_statement] = {
        .visible = false,
        .named = true,
        .structural = true,
        .extra = false,
    },
    [sym_if_statement] = {
        .visible = true,
        .named = true,
        .structural = true,
        .extra = false,
    },
    [sym_elif_clause] = {
        .visible = true,
        .named = true,
        .structural = true,
        .extra = false,
    },
    [sym_else_clause] = {
        .visible = true,
        .named = true,
        .structural = true,
        .extra = false,
    },
    [sym_for_statement] = {
        .visible = true,
        .named = true,
        .structural = true,
        .extra = false,
    },
    [sym_while_statement] = {
        .visible = true,
        .named = true,
        .structural = true,
        .extra = false,
    },
    [sym_try_statement] = {
        .visible = true,
        .named = true,
        .structural = true,
        .extra = false,
    },
    [sym_except_clause] = {
        .visible = true,
        .named = true,
        .structural = true,
        .extra = false,
    },
    [sym_finally_clause] = {
        .visible = true,
        .named = true,
        .structural = true,
        .extra = false,
    },
    [sym_with_statement] = {
        .visible = true,
        .named = true,
        .structural = true,
        .extra = false,
    },
    [sym_with_item] = {
        .visible = true,
        .named = true,
        .structural = true,
        .extra = false,
    },
    [sym_function_definition] = {
        .visible = true,
        .named = true,
        .structural = true,
        .extra = false,
    },
    [sym_parameters] = {
        .visible = true,
        .named = true,
        .structural = true,
        .extra = false,
    },
    [sym_default_parameter] = {
        .visible = true,
        .named = true,
        .structural = true,
        .extra = false,
    },
    [sym_list_splat_parameter] = {
        .visible = true,
        .named = true,
        .structural = true,
        .extra = false,
    },
    [sym_dictionary_splat_parameter] = {
        .visible = true,
        .named = true,
        .structural = true,
        .extra = false,
    },
    [sym_class_definition] = {
        .visible = true,
        .named = true,
        .structural = true,
        .extra = false,
    },
    [sym_decorated_definition] = {
        .visible = true,
        .named = true,
        .structural = true,
        .extra = false,
    },
    [sym_decorator] = {
        .visible = true,
        .named = true,
        .structural = true,
        .extra = false,
    },
    [sym__suite] = {
        .visible = false,
        .named = true,
        .structural = true,
        .extra = false,
    },
    [sym_arguments] = {
        .visible = true,
        .named = true,
        .structural = true,
        .extra = false,
    },
    [sym_expression_list] = {
        .visible = true,
        .named = true,
        .structural = true,
        .extra = false,
    },
    [sym_dotted_name] = {
        .visible = true,
        .named = true,
        .structural = true,
        .extra = false,
    },
    [sym__expression] = {
        .visible = false,
        .named = true,
        .structural = true,
        .extra = false,
    },
    [sym_binary_operator] = {
        .visible = true,
        .named = true,
        .structural = true,
        .extra = false,
    },
    [sym_unary_operator] = {
        .visible = true,
        .named = true,
        .structural = true,
        .extra = false,
    },
    [sym_subscript] = {
        .visible = true,
        .named = true,
        .structural = true,
        .extra = false,
    },
    [sym_call] = {
        .visible = true,
        .named = true,
        .structural = true,
        .extra = false,
    },
    [sym_keyword_argument] = {
        .visible = true,
        .named = true,
        .structural = true,
        .extra = false,
    },
    [sym_list_splat_argument] = {
        .visible = true,
        .named = true,
        .structural = true,
        .extra = false,
    },
    [sym_dictionary_splat_argument] = {
        .visible = true,
        .named = true,
        .structural = true,
        .extra = false,
    },
    [sym_list] = {
        .visible = true,
        .named = true,
        .structural = true,
        .extra = false,
    },
    [sym_list_comprehension] = {
        .visible = true,
        .named = true,
        .structural = true,
        .extra = false,
    },
    [sym_dictionary] = {
        .visible = true,
        .named = true,
        .structural = true,
        .extra = false,
    },
    [sym_dictionary_comprehension] = {
        .visible = true,
        .named = true,
        .structural = true,
        .extra = false,
    },
    [sym_pair] = {
        .visible = true,
        .named = true,
        .structural = true,
        .extra = false,
    },
    [sym_set] = {
        .visible = true,
        .named = true,
        .structural = true,
        .extra = false,
    },
    [sym_set_comprehension] = {
        .visible = true,
        .named = true,
        .structural = true,
        .extra = false,
    },
    [aux_sym_module_repeat1] = {
        .visible = false,
        .named = false,
        .structural = true,
        .extra = false,
    },
    [aux_sym_import_from_statement_repeat1] = {
        .visible = false,
        .named = false,
        .structural = true,
        .extra = false,
    },
    [aux_sym__import_list_repeat1] = {
        .visible = false,
        .named = false,
        .structural = true,
        .extra = false,
    },
    [aux_sym_print_statement_repeat1] = {
        .visible = false,
        .named = false,
        .structural = true,
        .extra = false,
    },
    [aux_sym_if_statement_repeat1] = {
        .visible = false,
        .named = false,
        .structural = true,
        .extra = false,
    },
    [aux_sym_try_statement_repeat1] = {
        .visible = false,
        .named = false,
        .structural = true,
        .extra = false,
    },
    [aux_sym_with_statement_repeat1] = {
        .visible = false,
        .named = false,
        .structural = true,
        .extra = false,
    },
    [aux_sym_parameters_repeat1] = {
        .visible = false,
        .named = false,
        .structural = true,
        .extra = false,
    },
    [aux_sym_decorated_definition_repeat1] = {
        .visible = false,
        .named = false,
        .structural = true,
        .extra = false,
    },
    [aux_sym_dotted_name_repeat1] = {
        .visible = false,
        .named = false,
        .structural = true,
        .extra = false,
    },
    [aux_sym_subscript_repeat1] = {
        .visible = false,
        .named = false,
        .structural = true,
        .extra = false,
    },
    [aux_sym_call_repeat1] = {
        .visible = false,
        .named = false,
        .structural = true,
        .extra = false,
    },
    [aux_sym_call_repeat2] = {
        .visible = false,
        .named = false,
        .structural = true,
        .extra = false,
    },
    [aux_sym_dictionary_repeat1] = {
        .visible = false,
        .named = false,
        .structural = true,
        .extra = false,
    },
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
    START_LEXER();
    switch (state) {
        case 0:
            if (lookahead == 0)
                ADVANCE(1);
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(0);
            if (lookahead == '\"')
                ADVANCE(2);
            if (lookahead == '#')
                ADVANCE(5);
            if (lookahead == '&')
                ADVANCE(7);
            if (lookahead == '\'')
                ADVANCE(8);
            if (lookahead == '(')
                ADVANCE(10);
            if (lookahead == ')')
                ADVANCE(11);
            if (lookahead == '*')
                ADVANCE(12);
            if (lookahead == '+')
                ADVANCE(14);
            if (lookahead == ',')
                ADVANCE(15);
            if (lookahead == '-')
                ADVANCE(16);
            if (lookahead == '.')
                ADVANCE(17);
            if (lookahead == '/')
                ADVANCE(20);
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(21);
            if (lookahead == ':')
                ADVANCE(23);
            if (lookahead == ';')
                ADVANCE(24);
            if (lookahead == '<')
                ADVANCE(25);
            if (lookahead == '=')
                ADVANCE(27);
            if (lookahead == '>')
                ADVANCE(28);
            if (lookahead == '@')
                ADVANCE(30);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == 'g') ||
                (lookahead == 'h') ||
                ('j' <= lookahead && lookahead <= 'm') ||
                (lookahead == 'q') ||
                (lookahead == 's') ||
                (lookahead == 'u') ||
                (lookahead == 'v') ||
                ('x' <= lookahead && lookahead <= 'z'))
                ADVANCE(31);
            if (lookahead == '[')
                ADVANCE(32);
            if (lookahead == ']')
                ADVANCE(33);
            if (lookahead == '^')
                ADVANCE(34);
            if (lookahead == 'a')
                ADVANCE(35);
            if (lookahead == 'b')
                ADVANCE(39);
            if (lookahead == 'c')
                ADVANCE(44);
            if (lookahead == 'd')
                ADVANCE(56);
            if (lookahead == 'e')
                ADVANCE(60);
            if (lookahead == 'f')
                ADVANCE(71);
            if (lookahead == 'i')
                ADVANCE(83);
            if (lookahead == 'n')
                ADVANCE(91);
            if (lookahead == 'o')
                ADVANCE(94);
            if (lookahead == 'p')
                ADVANCE(96);
            if (lookahead == 'r')
                ADVANCE(104);
            if (lookahead == 't')
                ADVANCE(110);
            if (lookahead == 'w')
                ADVANCE(113);
            if (lookahead == '{')
                ADVANCE(121);
            if (lookahead == '|')
                ADVANCE(122);
            if (lookahead == '}')
                ADVANCE(123);
            LEX_ERROR();
        case 1:
            ACCEPT_TOKEN(ts_builtin_sym_end);
        case 2:
            if (lookahead == '\"')
                ADVANCE(3);
            if (lookahead == '\\')
                ADVANCE(4);
            if (!((lookahead == 0) ||
                (lookahead == '\"') ||
                (lookahead == '\\')))
                ADVANCE(2);
            LEX_ERROR();
        case 3:
            ACCEPT_TOKEN(sym_string);
        case 4:
            if (!((lookahead == 0) ||
                (lookahead == '\n')))
                ADVANCE(2);
            LEX_ERROR();
        case 5:
            if (!((lookahead == 0) ||
                (lookahead == '\n')))
                ADVANCE(6);
            LEX_ERROR();
        case 6:
            if (!((lookahead == 0) ||
                (lookahead == '\n')))
                ADVANCE(6);
            ACCEPT_TOKEN(sym_comment);
        case 7:
            ACCEPT_TOKEN(anon_sym_AMP);
        case 8:
            if (lookahead == '\'')
                ADVANCE(3);
            if (lookahead == '\\')
                ADVANCE(9);
            if (!((lookahead == 0) ||
                (lookahead == '\'') ||
                (lookahead == '\\')))
                ADVANCE(8);
            LEX_ERROR();
        case 9:
            if (!((lookahead == 0) ||
                (lookahead == '\n')))
                ADVANCE(8);
            LEX_ERROR();
        case 10:
            ACCEPT_TOKEN(anon_sym_LPAREN);
        case 11:
            ACCEPT_TOKEN(anon_sym_RPAREN);
        case 12:
            if (lookahead == '*')
                ADVANCE(13);
            ACCEPT_TOKEN(anon_sym_STAR);
        case 13:
            ACCEPT_TOKEN(anon_sym_STAR_STAR);
        case 14:
            ACCEPT_TOKEN(anon_sym_PLUS);
        case 15:
            ACCEPT_TOKEN(anon_sym_COMMA);
        case 16:
            ACCEPT_TOKEN(anon_sym_DASH);
        case 17:
            if (lookahead == '.')
                ADVANCE(18);
            ACCEPT_TOKEN(anon_sym_DOT);
        case 18:
            if (lookahead == '.')
                ADVANCE(19);
            LEX_ERROR();
        case 19:
            ACCEPT_TOKEN(anon_sym_DOT_DOT_DOT);
        case 20:
            ACCEPT_TOKEN(anon_sym_SLASH);
        case 21:
            if (lookahead == '.')
                ADVANCE(22);
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(21);
            ACCEPT_TOKEN(sym_number);
        case 22:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(22);
            ACCEPT_TOKEN(sym_number);
        case 23:
            ACCEPT_TOKEN(anon_sym_COLON);
        case 24:
            ACCEPT_TOKEN(anon_sym_SEMI);
        case 25:
            if (lookahead == '<')
                ADVANCE(26);
            LEX_ERROR();
        case 26:
            ACCEPT_TOKEN(anon_sym_LT_LT);
        case 27:
            ACCEPT_TOKEN(anon_sym_EQ);
        case 28:
            if (lookahead == '>')
                ADVANCE(29);
            LEX_ERROR();
        case 29:
            ACCEPT_TOKEN(anon_sym_GT_GT);
        case 30:
            ACCEPT_TOKEN(anon_sym_AT);
        case 31:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(31);
            ACCEPT_TOKEN(sym_identifier);
        case 32:
            ACCEPT_TOKEN(anon_sym_LBRACK);
        case 33:
            ACCEPT_TOKEN(anon_sym_RBRACK);
        case 34:
            ACCEPT_TOKEN(anon_sym_CARET);
        case 35:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'm') ||
                ('o' <= lookahead && lookahead <= 'r') ||
                ('t' <= lookahead && lookahead <= 'z'))
                ADVANCE(31);
            if (lookahead == 'n')
                ADVANCE(36);
            if (lookahead == 's')
                ADVANCE(38);
            ACCEPT_TOKEN(sym_identifier);
        case 36:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'c') ||
                ('e' <= lookahead && lookahead <= 'z'))
                ADVANCE(31);
            if (lookahead == 'd')
                ADVANCE(37);
            ACCEPT_TOKEN(sym_identifier);
        case 37:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(31);
            ACCEPT_TOKEN(anon_sym_and);
        case 38:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(31);
            ACCEPT_TOKEN(anon_sym_as);
        case 39:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'q') ||
                ('s' <= lookahead && lookahead <= 'z'))
                ADVANCE(31);
            if (lookahead == 'r')
                ADVANCE(40);
            ACCEPT_TOKEN(sym_identifier);
        case 40:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'z'))
                ADVANCE(31);
            if (lookahead == 'e')
                ADVANCE(41);
            ACCEPT_TOKEN(sym_identifier);
        case 41:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(31);
            if (lookahead == 'a')
                ADVANCE(42);
            ACCEPT_TOKEN(sym_identifier);
        case 42:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'j') ||
                ('l' <= lookahead && lookahead <= 'z'))
                ADVANCE(31);
            if (lookahead == 'k')
                ADVANCE(43);
            ACCEPT_TOKEN(sym_identifier);
        case 43:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(31);
            ACCEPT_TOKEN(sym_break_statement);
        case 44:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'k') ||
                (lookahead == 'm') ||
                (lookahead == 'n') ||
                ('p' <= lookahead && lookahead <= 'z'))
                ADVANCE(31);
            if (lookahead == 'l')
                ADVANCE(45);
            if (lookahead == 'o')
                ADVANCE(49);
            ACCEPT_TOKEN(sym_identifier);
        case 45:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(31);
            if (lookahead == 'a')
                ADVANCE(46);
            ACCEPT_TOKEN(sym_identifier);
        case 46:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'r') ||
                ('t' <= lookahead && lookahead <= 'z'))
                ADVANCE(31);
            if (lookahead == 's')
                ADVANCE(47);
            ACCEPT_TOKEN(sym_identifier);
        case 47:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'r') ||
                ('t' <= lookahead && lookahead <= 'z'))
                ADVANCE(31);
            if (lookahead == 's')
                ADVANCE(48);
            ACCEPT_TOKEN(sym_identifier);
        case 48:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(31);
            ACCEPT_TOKEN(anon_sym_class);
        case 49:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'm') ||
                ('o' <= lookahead && lookahead <= 'z'))
                ADVANCE(31);
            if (lookahead == 'n')
                ADVANCE(50);
            ACCEPT_TOKEN(sym_identifier);
        case 50:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 's') ||
                ('u' <= lookahead && lookahead <= 'z'))
                ADVANCE(31);
            if (lookahead == 't')
                ADVANCE(51);
            ACCEPT_TOKEN(sym_identifier);
        case 51:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'h') ||
                ('j' <= lookahead && lookahead <= 'z'))
                ADVANCE(31);
            if (lookahead == 'i')
                ADVANCE(52);
            ACCEPT_TOKEN(sym_identifier);
        case 52:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'm') ||
                ('o' <= lookahead && lookahead <= 'z'))
                ADVANCE(31);
            if (lookahead == 'n')
                ADVANCE(53);
            ACCEPT_TOKEN(sym_identifier);
        case 53:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 't') ||
                ('v' <= lookahead && lookahead <= 'z'))
                ADVANCE(31);
            if (lookahead == 'u')
                ADVANCE(54);
            ACCEPT_TOKEN(sym_identifier);
        case 54:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'z'))
                ADVANCE(31);
            if (lookahead == 'e')
                ADVANCE(55);
            ACCEPT_TOKEN(sym_identifier);
        case 55:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(31);
            ACCEPT_TOKEN(sym_continue_statement);
        case 56:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'z'))
                ADVANCE(31);
            if (lookahead == 'e')
                ADVANCE(57);
            ACCEPT_TOKEN(sym_identifier);
        case 57:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'e') ||
                ('g' <= lookahead && lookahead <= 'k') ||
                ('m' <= lookahead && lookahead <= 'z'))
                ADVANCE(31);
            if (lookahead == 'f')
                ADVANCE(58);
            if (lookahead == 'l')
                ADVANCE(59);
            ACCEPT_TOKEN(sym_identifier);
        case 58:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(31);
            ACCEPT_TOKEN(anon_sym_def);
        case 59:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(31);
            ACCEPT_TOKEN(anon_sym_del);
        case 60:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'k') ||
                ('m' <= lookahead && lookahead <= 'w') ||
                (lookahead == 'y') ||
                (lookahead == 'z'))
                ADVANCE(31);
            if (lookahead == 'l')
                ADVANCE(61);
            if (lookahead == 'x')
                ADVANCE(66);
            ACCEPT_TOKEN(sym_identifier);
        case 61:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'h') ||
                ('j' <= lookahead && lookahead <= 'r') ||
                ('t' <= lookahead && lookahead <= 'z'))
                ADVANCE(31);
            if (lookahead == 'i')
                ADVANCE(62);
            if (lookahead == 's')
                ADVANCE(64);
            ACCEPT_TOKEN(sym_identifier);
        case 62:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'e') ||
                ('g' <= lookahead && lookahead <= 'z'))
                ADVANCE(31);
            if (lookahead == 'f')
                ADVANCE(63);
            ACCEPT_TOKEN(sym_identifier);
        case 63:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(31);
            ACCEPT_TOKEN(anon_sym_elif);
        case 64:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'z'))
                ADVANCE(31);
            if (lookahead == 'e')
                ADVANCE(65);
            ACCEPT_TOKEN(sym_identifier);
        case 65:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(31);
            ACCEPT_TOKEN(anon_sym_else);
        case 66:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                (lookahead == 'a') ||
                (lookahead == 'b') ||
                ('d' <= lookahead && lookahead <= 'z'))
                ADVANCE(31);
            if (lookahead == 'c')
                ADVANCE(67);
            ACCEPT_TOKEN(sym_identifier);
        case 67:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'z'))
                ADVANCE(31);
            if (lookahead == 'e')
                ADVANCE(68);
            ACCEPT_TOKEN(sym_identifier);
        case 68:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'o') ||
                ('q' <= lookahead && lookahead <= 'z'))
                ADVANCE(31);
            if (lookahead == 'p')
                ADVANCE(69);
            ACCEPT_TOKEN(sym_identifier);
        case 69:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 's') ||
                ('u' <= lookahead && lookahead <= 'z'))
                ADVANCE(31);
            if (lookahead == 't')
                ADVANCE(70);
            ACCEPT_TOKEN(sym_identifier);
        case 70:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(31);
            ACCEPT_TOKEN(anon_sym_except);
        case 71:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'h') ||
                ('j' <= lookahead && lookahead <= 'n') ||
                (lookahead == 'p') ||
                (lookahead == 'q') ||
                ('s' <= lookahead && lookahead <= 'z'))
                ADVANCE(31);
            if (lookahead == 'i')
                ADVANCE(72);
            if (lookahead == 'o')
                ADVANCE(78);
            if (lookahead == 'r')
                ADVANCE(80);
            ACCEPT_TOKEN(sym_identifier);
        case 72:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'm') ||
                ('o' <= lookahead && lookahead <= 'z'))
                ADVANCE(31);
            if (lookahead == 'n')
                ADVANCE(73);
            ACCEPT_TOKEN(sym_identifier);
        case 73:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(31);
            if (lookahead == 'a')
                ADVANCE(74);
            ACCEPT_TOKEN(sym_identifier);
        case 74:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'k') ||
                ('m' <= lookahead && lookahead <= 'z'))
                ADVANCE(31);
            if (lookahead == 'l')
                ADVANCE(75);
            ACCEPT_TOKEN(sym_identifier);
        case 75:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'k') ||
                ('m' <= lookahead && lookahead <= 'z'))
                ADVANCE(31);
            if (lookahead == 'l')
                ADVANCE(76);
            ACCEPT_TOKEN(sym_identifier);
        case 76:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'x') ||
                (lookahead == 'z'))
                ADVANCE(31);
            if (lookahead == 'y')
                ADVANCE(77);
            ACCEPT_TOKEN(sym_identifier);
        case 77:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(31);
            ACCEPT_TOKEN(anon_sym_finally);
        case 78:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'q') ||
                ('s' <= lookahead && lookahead <= 'z'))
                ADVANCE(31);
            if (lookahead == 'r')
                ADVANCE(79);
            ACCEPT_TOKEN(sym_identifier);
        case 79:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(31);
            ACCEPT_TOKEN(anon_sym_for);
        case 80:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'n') ||
                ('p' <= lookahead && lookahead <= 'z'))
                ADVANCE(31);
            if (lookahead == 'o')
                ADVANCE(81);
            ACCEPT_TOKEN(sym_identifier);
        case 81:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'l') ||
                ('n' <= lookahead && lookahead <= 'z'))
                ADVANCE(31);
            if (lookahead == 'm')
                ADVANCE(82);
            ACCEPT_TOKEN(sym_identifier);
        case 82:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(31);
            ACCEPT_TOKEN(anon_sym_from);
        case 83:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'e') ||
                ('g' <= lookahead && lookahead <= 'l') ||
                ('o' <= lookahead && lookahead <= 'z'))
                ADVANCE(31);
            if (lookahead == 'f')
                ADVANCE(84);
            if (lookahead == 'm')
                ADVANCE(85);
            if (lookahead == 'n')
                ADVANCE(90);
            ACCEPT_TOKEN(sym_identifier);
        case 84:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(31);
            ACCEPT_TOKEN(anon_sym_if);
        case 85:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'o') ||
                ('q' <= lookahead && lookahead <= 'z'))
                ADVANCE(31);
            if (lookahead == 'p')
                ADVANCE(86);
            ACCEPT_TOKEN(sym_identifier);
        case 86:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'n') ||
                ('p' <= lookahead && lookahead <= 'z'))
                ADVANCE(31);
            if (lookahead == 'o')
                ADVANCE(87);
            ACCEPT_TOKEN(sym_identifier);
        case 87:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'q') ||
                ('s' <= lookahead && lookahead <= 'z'))
                ADVANCE(31);
            if (lookahead == 'r')
                ADVANCE(88);
            ACCEPT_TOKEN(sym_identifier);
        case 88:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 's') ||
                ('u' <= lookahead && lookahead <= 'z'))
                ADVANCE(31);
            if (lookahead == 't')
                ADVANCE(89);
            ACCEPT_TOKEN(sym_identifier);
        case 89:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(31);
            ACCEPT_TOKEN(anon_sym_import);
        case 90:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(31);
            ACCEPT_TOKEN(anon_sym_in);
        case 91:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'n') ||
                ('p' <= lookahead && lookahead <= 'z'))
                ADVANCE(31);
            if (lookahead == 'o')
                ADVANCE(92);
            ACCEPT_TOKEN(sym_identifier);
        case 92:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 's') ||
                ('u' <= lookahead && lookahead <= 'z'))
                ADVANCE(31);
            if (lookahead == 't')
                ADVANCE(93);
            ACCEPT_TOKEN(sym_identifier);
        case 93:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(31);
            ACCEPT_TOKEN(anon_sym_not);
        case 94:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'q') ||
                ('s' <= lookahead && lookahead <= 'z'))
                ADVANCE(31);
            if (lookahead == 'r')
                ADVANCE(95);
            ACCEPT_TOKEN(sym_identifier);
        case 95:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(31);
            ACCEPT_TOKEN(anon_sym_or);
        case 96:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('b' <= lookahead && lookahead <= 'q') ||
                ('s' <= lookahead && lookahead <= 'z'))
                ADVANCE(31);
            if (lookahead == 'a')
                ADVANCE(97);
            if (lookahead == 'r')
                ADVANCE(100);
            ACCEPT_TOKEN(sym_identifier);
        case 97:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'r') ||
                ('t' <= lookahead && lookahead <= 'z'))
                ADVANCE(31);
            if (lookahead == 's')
                ADVANCE(98);
            ACCEPT_TOKEN(sym_identifier);
        case 98:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'r') ||
                ('t' <= lookahead && lookahead <= 'z'))
                ADVANCE(31);
            if (lookahead == 's')
                ADVANCE(99);
            ACCEPT_TOKEN(sym_identifier);
        case 99:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(31);
            ACCEPT_TOKEN(sym_pass_statement);
        case 100:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'h') ||
                ('j' <= lookahead && lookahead <= 'z'))
                ADVANCE(31);
            if (lookahead == 'i')
                ADVANCE(101);
            ACCEPT_TOKEN(sym_identifier);
        case 101:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'm') ||
                ('o' <= lookahead && lookahead <= 'z'))
                ADVANCE(31);
            if (lookahead == 'n')
                ADVANCE(102);
            ACCEPT_TOKEN(sym_identifier);
        case 102:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 's') ||
                ('u' <= lookahead && lookahead <= 'z'))
                ADVANCE(31);
            if (lookahead == 't')
                ADVANCE(103);
            ACCEPT_TOKEN(sym_identifier);
        case 103:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(31);
            ACCEPT_TOKEN(anon_sym_print);
        case 104:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'z'))
                ADVANCE(31);
            if (lookahead == 'e')
                ADVANCE(105);
            ACCEPT_TOKEN(sym_identifier);
        case 105:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 's') ||
                ('u' <= lookahead && lookahead <= 'z'))
                ADVANCE(31);
            if (lookahead == 't')
                ADVANCE(106);
            ACCEPT_TOKEN(sym_identifier);
        case 106:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 't') ||
                ('v' <= lookahead && lookahead <= 'z'))
                ADVANCE(31);
            if (lookahead == 'u')
                ADVANCE(107);
            ACCEPT_TOKEN(sym_identifier);
        case 107:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'q') ||
                ('s' <= lookahead && lookahead <= 'z'))
                ADVANCE(31);
            if (lookahead == 'r')
                ADVANCE(108);
            ACCEPT_TOKEN(sym_identifier);
        case 108:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'm') ||
                ('o' <= lookahead && lookahead <= 'z'))
                ADVANCE(31);
            if (lookahead == 'n')
                ADVANCE(109);
            ACCEPT_TOKEN(sym_identifier);
        case 109:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(31);
            ACCEPT_TOKEN(anon_sym_return);
        case 110:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'q') ||
                ('s' <= lookahead && lookahead <= 'z'))
                ADVANCE(31);
            if (lookahead == 'r')
                ADVANCE(111);
            ACCEPT_TOKEN(sym_identifier);
        case 111:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'x') ||
                (lookahead == 'z'))
                ADVANCE(31);
            if (lookahead == 'y')
                ADVANCE(112);
            ACCEPT_TOKEN(sym_identifier);
        case 112:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(31);
            ACCEPT_TOKEN(anon_sym_try);
        case 113:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'g') ||
                ('j' <= lookahead && lookahead <= 'z'))
                ADVANCE(31);
            if (lookahead == 'h')
                ADVANCE(114);
            if (lookahead == 'i')
                ADVANCE(118);
            ACCEPT_TOKEN(sym_identifier);
        case 114:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'h') ||
                ('j' <= lookahead && lookahead <= 'z'))
                ADVANCE(31);
            if (lookahead == 'i')
                ADVANCE(115);
            ACCEPT_TOKEN(sym_identifier);
        case 115:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'k') ||
                ('m' <= lookahead && lookahead <= 'z'))
                ADVANCE(31);
            if (lookahead == 'l')
                ADVANCE(116);
            ACCEPT_TOKEN(sym_identifier);
        case 116:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'z'))
                ADVANCE(31);
            if (lookahead == 'e')
                ADVANCE(117);
            ACCEPT_TOKEN(sym_identifier);
        case 117:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(31);
            ACCEPT_TOKEN(anon_sym_while);
        case 118:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 's') ||
                ('u' <= lookahead && lookahead <= 'z'))
                ADVANCE(31);
            if (lookahead == 't')
                ADVANCE(119);
            ACCEPT_TOKEN(sym_identifier);
        case 119:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'g') ||
                ('i' <= lookahead && lookahead <= 'z'))
                ADVANCE(31);
            if (lookahead == 'h')
                ADVANCE(120);
            ACCEPT_TOKEN(sym_identifier);
        case 120:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(31);
            ACCEPT_TOKEN(anon_sym_with);
        case 121:
            ACCEPT_TOKEN(anon_sym_LBRACE);
        case 122:
            ACCEPT_TOKEN(anon_sym_PIPE);
        case 123:
            ACCEPT_TOKEN(anon_sym_RBRACE);
        case 124:
            if (lookahead == 0)
                ADVANCE(1);
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(124);
            if (lookahead == '\"')
                ADVANCE(2);
            if (lookahead == '#')
                ADVANCE(5);
            if (lookahead == '\'')
                ADVANCE(8);
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(21);
            if (lookahead == '@')
                ADVANCE(30);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == 'a') ||
                (lookahead == 'e') ||
                (lookahead == 'g') ||
                (lookahead == 'h') ||
                ('j' <= lookahead && lookahead <= 'm') ||
                (lookahead == 'o') ||
                (lookahead == 'q') ||
                (lookahead == 's') ||
                (lookahead == 'u') ||
                (lookahead == 'v') ||
                ('x' <= lookahead && lookahead <= 'z'))
                ADVANCE(31);
            if (lookahead == '[')
                ADVANCE(32);
            if (lookahead == 'b')
                ADVANCE(39);
            if (lookahead == 'c')
                ADVANCE(44);
            if (lookahead == 'd')
                ADVANCE(56);
            if (lookahead == 'f')
                ADVANCE(125);
            if (lookahead == 'i')
                ADVANCE(126);
            if (lookahead == 'n')
                ADVANCE(91);
            if (lookahead == 'p')
                ADVANCE(96);
            if (lookahead == 'r')
                ADVANCE(104);
            if (lookahead == 't')
                ADVANCE(110);
            if (lookahead == 'w')
                ADVANCE(113);
            if (lookahead == '{')
                ADVANCE(121);
            LEX_ERROR();
        case 125:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'n') ||
                (lookahead == 'p') ||
                (lookahead == 'q') ||
                ('s' <= lookahead && lookahead <= 'z'))
                ADVANCE(31);
            if (lookahead == 'o')
                ADVANCE(78);
            if (lookahead == 'r')
                ADVANCE(80);
            ACCEPT_TOKEN(sym_identifier);
        case 126:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'e') ||
                ('g' <= lookahead && lookahead <= 'l') ||
                ('n' <= lookahead && lookahead <= 'z'))
                ADVANCE(31);
            if (lookahead == 'f')
                ADVANCE(84);
            if (lookahead == 'm')
                ADVANCE(85);
            ACCEPT_TOKEN(sym_identifier);
        case 127:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(127);
            if (lookahead == '#')
                ADVANCE(5);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(31);
            LEX_ERROR();
        case 128:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(128);
            if (lookahead == '#')
                ADVANCE(5);
            if (lookahead == '.')
                ADVANCE(129);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(31);
            LEX_ERROR();
        case 129:
            ACCEPT_TOKEN(anon_sym_DOT);
        case 130:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(130);
            if (lookahead == '\"')
                ADVANCE(2);
            if (lookahead == '#')
                ADVANCE(5);
            if (lookahead == '\'')
                ADVANCE(8);
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(21);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'm') ||
                ('o' <= lookahead && lookahead <= 'z'))
                ADVANCE(31);
            if (lookahead == '[')
                ADVANCE(32);
            if (lookahead == 'n')
                ADVANCE(91);
            if (lookahead == '{')
                ADVANCE(121);
            LEX_ERROR();
        case 131:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(131);
            if (lookahead == '#')
                ADVANCE(5);
            LEX_ERROR();
        case 132:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(132);
            if (lookahead == '#')
                ADVANCE(5);
            if (lookahead == ':')
                ADVANCE(23);
            LEX_ERROR();
        case 133:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(133);
            if (lookahead == '\"')
                ADVANCE(2);
            if (lookahead == '#')
                ADVANCE(5);
            if (lookahead == '\'')
                ADVANCE(8);
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(21);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'm') ||
                ('o' <= lookahead && lookahead <= 'z'))
                ADVANCE(31);
            if (lookahead == '[')
                ADVANCE(32);
            if (lookahead == ']')
                ADVANCE(33);
            if (lookahead == 'n')
                ADVANCE(91);
            if (lookahead == '{')
                ADVANCE(121);
            LEX_ERROR();
        case 134:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(134);
            if (lookahead == '\"')
                ADVANCE(2);
            if (lookahead == '#')
                ADVANCE(5);
            if (lookahead == '\'')
                ADVANCE(8);
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(21);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'm') ||
                ('o' <= lookahead && lookahead <= 'z'))
                ADVANCE(31);
            if (lookahead == '[')
                ADVANCE(32);
            if (lookahead == 'n')
                ADVANCE(91);
            if (lookahead == '{')
                ADVANCE(121);
            if (lookahead == '}')
                ADVANCE(123);
            LEX_ERROR();
        case 135:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(135);
            if (lookahead == '#')
                ADVANCE(5);
            if (lookahead == '&')
                ADVANCE(7);
            if (lookahead == '(')
                ADVANCE(10);
            if (lookahead == ')')
                ADVANCE(11);
            if (lookahead == '*')
                ADVANCE(12);
            if (lookahead == '+')
                ADVANCE(14);
            if (lookahead == ',')
                ADVANCE(15);
            if (lookahead == '-')
                ADVANCE(16);
            if (lookahead == '/')
                ADVANCE(20);
            if (lookahead == ':')
                ADVANCE(23);
            if (lookahead == '<')
                ADVANCE(25);
            if (lookahead == '>')
                ADVANCE(28);
            if (lookahead == '[')
                ADVANCE(32);
            if (lookahead == ']')
                ADVANCE(33);
            if (lookahead == '^')
                ADVANCE(34);
            if (lookahead == 'a')
                ADVANCE(136);
            if (lookahead == 'f')
                ADVANCE(140);
            if (lookahead == 'i')
                ADVANCE(143);
            if (lookahead == 'o')
                ADVANCE(145);
            if (lookahead == '|')
                ADVANCE(122);
            if (lookahead == '}')
                ADVANCE(123);
            LEX_ERROR();
        case 136:
            if (lookahead == 'n')
                ADVANCE(137);
            if (lookahead == 's')
                ADVANCE(139);
            LEX_ERROR();
        case 137:
            if (lookahead == 'd')
                ADVANCE(138);
            LEX_ERROR();
        case 138:
            ACCEPT_TOKEN(anon_sym_and);
        case 139:
            ACCEPT_TOKEN(anon_sym_as);
        case 140:
            if (lookahead == 'o')
                ADVANCE(141);
            LEX_ERROR();
        case 141:
            if (lookahead == 'r')
                ADVANCE(142);
            LEX_ERROR();
        case 142:
            ACCEPT_TOKEN(anon_sym_for);
        case 143:
            if (lookahead == 'n')
                ADVANCE(144);
            LEX_ERROR();
        case 144:
            ACCEPT_TOKEN(anon_sym_in);
        case 145:
            if (lookahead == 'r')
                ADVANCE(146);
            LEX_ERROR();
        case 146:
            ACCEPT_TOKEN(anon_sym_or);
        case 147:
            if (lookahead == 0)
                ADVANCE(1);
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(147);
            if (lookahead == '#')
                ADVANCE(5);
            LEX_ERROR();
        case 148:
            if (lookahead == 0)
                ADVANCE(1);
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(148);
            if (lookahead == '\"')
                ADVANCE(2);
            if (lookahead == '#')
                ADVANCE(5);
            if (lookahead == '\'')
                ADVANCE(8);
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(21);
            if (lookahead == ';')
                ADVANCE(24);
            if (lookahead == '@')
                ADVANCE(30);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == 'a') ||
                (lookahead == 'e') ||
                (lookahead == 'g') ||
                (lookahead == 'h') ||
                ('j' <= lookahead && lookahead <= 'm') ||
                (lookahead == 'o') ||
                (lookahead == 'q') ||
                (lookahead == 's') ||
                (lookahead == 'u') ||
                (lookahead == 'v') ||
                ('x' <= lookahead && lookahead <= 'z'))
                ADVANCE(31);
            if (lookahead == '[')
                ADVANCE(32);
            if (lookahead == 'b')
                ADVANCE(39);
            if (lookahead == 'c')
                ADVANCE(44);
            if (lookahead == 'd')
                ADVANCE(56);
            if (lookahead == 'f')
                ADVANCE(125);
            if (lookahead == 'i')
                ADVANCE(126);
            if (lookahead == 'n')
                ADVANCE(91);
            if (lookahead == 'p')
                ADVANCE(96);
            if (lookahead == 'r')
                ADVANCE(104);
            if (lookahead == 't')
                ADVANCE(110);
            if (lookahead == 'w')
                ADVANCE(113);
            if (lookahead == '{')
                ADVANCE(121);
            LEX_ERROR();
        case 149:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(149);
            if (lookahead == '#')
                ADVANCE(5);
            if (lookahead == '@')
                ADVANCE(30);
            if (lookahead == 'c')
                ADVANCE(150);
            if (lookahead == 'd')
                ADVANCE(155);
            LEX_ERROR();
        case 150:
            if (lookahead == 'l')
                ADVANCE(151);
            LEX_ERROR();
        case 151:
            if (lookahead == 'a')
                ADVANCE(152);
            LEX_ERROR();
        case 152:
            if (lookahead == 's')
                ADVANCE(153);
            LEX_ERROR();
        case 153:
            if (lookahead == 's')
                ADVANCE(154);
            LEX_ERROR();
        case 154:
            ACCEPT_TOKEN(anon_sym_class);
        case 155:
            if (lookahead == 'e')
                ADVANCE(156);
            LEX_ERROR();
        case 156:
            if (lookahead == 'f')
                ADVANCE(157);
            LEX_ERROR();
        case 157:
            ACCEPT_TOKEN(anon_sym_def);
        case 158:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(158);
            if (lookahead == '#')
                ADVANCE(5);
            if (lookahead == '&')
                ADVANCE(7);
            if (lookahead == '(')
                ADVANCE(10);
            if (lookahead == '*')
                ADVANCE(12);
            if (lookahead == '+')
                ADVANCE(14);
            if (lookahead == '-')
                ADVANCE(16);
            if (lookahead == '/')
                ADVANCE(20);
            if (lookahead == '<')
                ADVANCE(25);
            if (lookahead == '>')
                ADVANCE(28);
            if (lookahead == '[')
                ADVANCE(32);
            if (lookahead == '^')
                ADVANCE(34);
            if (lookahead == 'a')
                ADVANCE(159);
            if (lookahead == 'o')
                ADVANCE(145);
            if (lookahead == '|')
                ADVANCE(122);
            LEX_ERROR();
        case 159:
            if (lookahead == 'n')
                ADVANCE(137);
            LEX_ERROR();
        case 160:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(160);
            if (lookahead == '\"')
                ADVANCE(2);
            if (lookahead == '#')
                ADVANCE(5);
            if (lookahead == '\'')
                ADVANCE(8);
            if (lookahead == '*')
                ADVANCE(12);
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(21);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'm') ||
                ('o' <= lookahead && lookahead <= 'z'))
                ADVANCE(31);
            if (lookahead == '[')
                ADVANCE(32);
            if (lookahead == 'n')
                ADVANCE(91);
            if (lookahead == '{')
                ADVANCE(121);
            LEX_ERROR();
        case 161:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(161);
            if (lookahead == '\"')
                ADVANCE(2);
            if (lookahead == '#')
                ADVANCE(5);
            if (lookahead == '\'')
                ADVANCE(8);
            if (lookahead == '.')
                ADVANCE(162);
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(21);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'm') ||
                ('o' <= lookahead && lookahead <= 'z'))
                ADVANCE(31);
            if (lookahead == '[')
                ADVANCE(32);
            if (lookahead == 'n')
                ADVANCE(91);
            if (lookahead == '{')
                ADVANCE(121);
            LEX_ERROR();
        case 162:
            if (lookahead == '.')
                ADVANCE(18);
            LEX_ERROR();
        case 163:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(163);
            if (lookahead == '#')
                ADVANCE(5);
            if (lookahead == ',')
                ADVANCE(15);
            if (lookahead == ']')
                ADVANCE(33);
            LEX_ERROR();
        case 164:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(164);
            if (lookahead == '#')
                ADVANCE(5);
            if (lookahead == '&')
                ADVANCE(7);
            if (lookahead == '(')
                ADVANCE(10);
            if (lookahead == '*')
                ADVANCE(12);
            if (lookahead == '+')
                ADVANCE(14);
            if (lookahead == ',')
                ADVANCE(15);
            if (lookahead == '-')
                ADVANCE(16);
            if (lookahead == '/')
                ADVANCE(20);
            if (lookahead == '<')
                ADVANCE(25);
            if (lookahead == '>')
                ADVANCE(28);
            if (lookahead == '[')
                ADVANCE(32);
            if (lookahead == ']')
                ADVANCE(33);
            if (lookahead == '^')
                ADVANCE(34);
            if (lookahead == 'a')
                ADVANCE(159);
            if (lookahead == 'o')
                ADVANCE(145);
            if (lookahead == '|')
                ADVANCE(122);
            LEX_ERROR();
        case 165:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(165);
            if (lookahead == '\"')
                ADVANCE(2);
            if (lookahead == '#')
                ADVANCE(5);
            if (lookahead == '\'')
                ADVANCE(8);
            if (lookahead == '.')
                ADVANCE(162);
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(21);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'm') ||
                ('o' <= lookahead && lookahead <= 'z'))
                ADVANCE(31);
            if (lookahead == '[')
                ADVANCE(32);
            if (lookahead == ']')
                ADVANCE(33);
            if (lookahead == 'n')
                ADVANCE(91);
            if (lookahead == '{')
                ADVANCE(121);
            LEX_ERROR();
        case 166:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(166);
            if (lookahead == '#')
                ADVANCE(5);
            if (lookahead == '&')
                ADVANCE(7);
            if (lookahead == '(')
                ADVANCE(10);
            if (lookahead == ')')
                ADVANCE(11);
            if (lookahead == '*')
                ADVANCE(12);
            if (lookahead == '+')
                ADVANCE(14);
            if (lookahead == ',')
                ADVANCE(15);
            if (lookahead == '-')
                ADVANCE(16);
            if (lookahead == '/')
                ADVANCE(20);
            if (lookahead == '<')
                ADVANCE(25);
            if (lookahead == '=')
                ADVANCE(27);
            if (lookahead == '>')
                ADVANCE(28);
            if (lookahead == '[')
                ADVANCE(32);
            if (lookahead == '^')
                ADVANCE(34);
            if (lookahead == 'a')
                ADVANCE(159);
            if (lookahead == 'o')
                ADVANCE(145);
            if (lookahead == '|')
                ADVANCE(122);
            LEX_ERROR();
        case 167:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(167);
            if (lookahead == '#')
                ADVANCE(5);
            if (lookahead == '&')
                ADVANCE(7);
            if (lookahead == '(')
                ADVANCE(10);
            if (lookahead == ')')
                ADVANCE(11);
            if (lookahead == '*')
                ADVANCE(12);
            if (lookahead == '+')
                ADVANCE(14);
            if (lookahead == ',')
                ADVANCE(15);
            if (lookahead == '-')
                ADVANCE(16);
            if (lookahead == '/')
                ADVANCE(20);
            if (lookahead == '<')
                ADVANCE(25);
            if (lookahead == '>')
                ADVANCE(28);
            if (lookahead == '[')
                ADVANCE(32);
            if (lookahead == '^')
                ADVANCE(34);
            if (lookahead == 'a')
                ADVANCE(159);
            if (lookahead == 'o')
                ADVANCE(145);
            if (lookahead == '|')
                ADVANCE(122);
            LEX_ERROR();
        case 168:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(168);
            if (lookahead == '#')
                ADVANCE(5);
            if (lookahead == ')')
                ADVANCE(11);
            if (lookahead == ',')
                ADVANCE(15);
            LEX_ERROR();
        case 169:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(169);
            if (lookahead == '#')
                ADVANCE(5);
            if (lookahead == ')')
                ADVANCE(11);
            LEX_ERROR();
        case 170:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(170);
            if (lookahead == '\"')
                ADVANCE(2);
            if (lookahead == '#')
                ADVANCE(5);
            if (lookahead == '\'')
                ADVANCE(8);
            if (lookahead == '*')
                ADVANCE(171);
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(21);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'm') ||
                ('o' <= lookahead && lookahead <= 'z'))
                ADVANCE(31);
            if (lookahead == '[')
                ADVANCE(32);
            if (lookahead == 'n')
                ADVANCE(91);
            if (lookahead == '{')
                ADVANCE(121);
            LEX_ERROR();
        case 171:
            if (lookahead == '*')
                ADVANCE(13);
            LEX_ERROR();
        case 172:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(172);
            if (lookahead == '\"')
                ADVANCE(2);
            if (lookahead == '#')
                ADVANCE(5);
            if (lookahead == '\'')
                ADVANCE(8);
            if (lookahead == ')')
                ADVANCE(11);
            if (lookahead == '*')
                ADVANCE(12);
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(21);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'm') ||
                ('o' <= lookahead && lookahead <= 'z'))
                ADVANCE(31);
            if (lookahead == '[')
                ADVANCE(32);
            if (lookahead == 'n')
                ADVANCE(91);
            if (lookahead == '{')
                ADVANCE(121);
            LEX_ERROR();
        case 173:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(173);
            if (lookahead == '#')
                ADVANCE(5);
            if (lookahead == '&')
                ADVANCE(7);
            if (lookahead == '(')
                ADVANCE(10);
            if (lookahead == '*')
                ADVANCE(12);
            if (lookahead == '+')
                ADVANCE(14);
            if (lookahead == ',')
                ADVANCE(15);
            if (lookahead == '-')
                ADVANCE(16);
            if (lookahead == '/')
                ADVANCE(20);
            if (lookahead == ':')
                ADVANCE(23);
            if (lookahead == '<')
                ADVANCE(25);
            if (lookahead == '>')
                ADVANCE(28);
            if (lookahead == '[')
                ADVANCE(32);
            if (lookahead == '^')
                ADVANCE(34);
            if (lookahead == 'a')
                ADVANCE(159);
            if (lookahead == 'f')
                ADVANCE(140);
            if (lookahead == 'o')
                ADVANCE(145);
            if (lookahead == '|')
                ADVANCE(122);
            if (lookahead == '}')
                ADVANCE(123);
            LEX_ERROR();
        case 174:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(174);
            if (lookahead == '#')
                ADVANCE(5);
            if (lookahead == ',')
                ADVANCE(15);
            if (lookahead == 'f')
                ADVANCE(140);
            if (lookahead == '}')
                ADVANCE(123);
            LEX_ERROR();
        case 175:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(175);
            if (lookahead == '#')
                ADVANCE(5);
            if (lookahead == ',')
                ADVANCE(15);
            if (lookahead == '}')
                ADVANCE(123);
            LEX_ERROR();
        case 176:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(176);
            if (lookahead == '#')
                ADVANCE(5);
            if (lookahead == '&')
                ADVANCE(7);
            if (lookahead == '(')
                ADVANCE(10);
            if (lookahead == '*')
                ADVANCE(12);
            if (lookahead == '+')
                ADVANCE(14);
            if (lookahead == '-')
                ADVANCE(16);
            if (lookahead == '/')
                ADVANCE(20);
            if (lookahead == ':')
                ADVANCE(23);
            if (lookahead == '<')
                ADVANCE(25);
            if (lookahead == '>')
                ADVANCE(28);
            if (lookahead == '[')
                ADVANCE(32);
            if (lookahead == '^')
                ADVANCE(34);
            if (lookahead == 'a')
                ADVANCE(159);
            if (lookahead == 'o')
                ADVANCE(145);
            if (lookahead == '|')
                ADVANCE(122);
            LEX_ERROR();
        case 177:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(177);
            if (lookahead == '#')
                ADVANCE(5);
            if (lookahead == '&')
                ADVANCE(7);
            if (lookahead == '(')
                ADVANCE(10);
            if (lookahead == '*')
                ADVANCE(12);
            if (lookahead == '+')
                ADVANCE(14);
            if (lookahead == ',')
                ADVANCE(15);
            if (lookahead == '-')
                ADVANCE(16);
            if (lookahead == '/')
                ADVANCE(20);
            if (lookahead == '<')
                ADVANCE(25);
            if (lookahead == '>')
                ADVANCE(28);
            if (lookahead == '[')
                ADVANCE(32);
            if (lookahead == '^')
                ADVANCE(34);
            if (lookahead == 'a')
                ADVANCE(159);
            if (lookahead == 'o')
                ADVANCE(145);
            if (lookahead == '|')
                ADVANCE(122);
            if (lookahead == '}')
                ADVANCE(123);
            LEX_ERROR();
        case 178:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(178);
            if (lookahead == '#')
                ADVANCE(5);
            if (lookahead == 'i')
                ADVANCE(143);
            LEX_ERROR();
        case 179:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(179);
            if (lookahead == '#')
                ADVANCE(5);
            if (lookahead == '&')
                ADVANCE(7);
            if (lookahead == '(')
                ADVANCE(10);
            if (lookahead == '*')
                ADVANCE(12);
            if (lookahead == '+')
                ADVANCE(14);
            if (lookahead == ',')
                ADVANCE(15);
            if (lookahead == '-')
                ADVANCE(16);
            if (lookahead == '/')
                ADVANCE(20);
            if (lookahead == '<')
                ADVANCE(25);
            if (lookahead == '>')
                ADVANCE(28);
            if (lookahead == '[')
                ADVANCE(32);
            if (lookahead == '^')
                ADVANCE(34);
            if (lookahead == 'a')
                ADVANCE(159);
            if (lookahead == 'i')
                ADVANCE(143);
            if (lookahead == 'o')
                ADVANCE(145);
            if (lookahead == '|')
                ADVANCE(122);
            LEX_ERROR();
        case 180:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(180);
            if (lookahead == '#')
                ADVANCE(5);
            if (lookahead == ',')
                ADVANCE(15);
            if (lookahead == 'i')
                ADVANCE(143);
            LEX_ERROR();
        case 181:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(181);
            if (lookahead == '#')
                ADVANCE(5);
            if (lookahead == '&')
                ADVANCE(7);
            if (lookahead == '(')
                ADVANCE(10);
            if (lookahead == '*')
                ADVANCE(12);
            if (lookahead == '+')
                ADVANCE(14);
            if (lookahead == '-')
                ADVANCE(16);
            if (lookahead == '/')
                ADVANCE(20);
            if (lookahead == '<')
                ADVANCE(25);
            if (lookahead == '>')
                ADVANCE(28);
            if (lookahead == '[')
                ADVANCE(32);
            if (lookahead == '^')
                ADVANCE(34);
            if (lookahead == 'a')
                ADVANCE(159);
            if (lookahead == 'o')
                ADVANCE(145);
            if (lookahead == '|')
                ADVANCE(122);
            if (lookahead == '}')
                ADVANCE(123);
            LEX_ERROR();
        case 182:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(182);
            if (lookahead == '#')
                ADVANCE(5);
            if (lookahead == '&')
                ADVANCE(7);
            if (lookahead == '(')
                ADVANCE(10);
            if (lookahead == '*')
                ADVANCE(12);
            if (lookahead == '+')
                ADVANCE(14);
            if (lookahead == ',')
                ADVANCE(15);
            if (lookahead == '-')
                ADVANCE(16);
            if (lookahead == '/')
                ADVANCE(20);
            if (lookahead == '<')
                ADVANCE(25);
            if (lookahead == '>')
                ADVANCE(28);
            if (lookahead == '[')
                ADVANCE(32);
            if (lookahead == '^')
                ADVANCE(34);
            if (lookahead == 'a')
                ADVANCE(159);
            if (lookahead == 'f')
                ADVANCE(140);
            if (lookahead == 'o')
                ADVANCE(145);
            if (lookahead == '|')
                ADVANCE(122);
            if (lookahead == '}')
                ADVANCE(123);
            LEX_ERROR();
        case 183:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(183);
            if (lookahead == '#')
                ADVANCE(5);
            if (lookahead == '&')
                ADVANCE(7);
            if (lookahead == '(')
                ADVANCE(10);
            if (lookahead == '*')
                ADVANCE(12);
            if (lookahead == '+')
                ADVANCE(14);
            if (lookahead == ',')
                ADVANCE(15);
            if (lookahead == '-')
                ADVANCE(16);
            if (lookahead == '/')
                ADVANCE(20);
            if (lookahead == '<')
                ADVANCE(25);
            if (lookahead == '>')
                ADVANCE(28);
            if (lookahead == '[')
                ADVANCE(32);
            if (lookahead == ']')
                ADVANCE(33);
            if (lookahead == '^')
                ADVANCE(34);
            if (lookahead == 'a')
                ADVANCE(159);
            if (lookahead == 'f')
                ADVANCE(140);
            if (lookahead == 'o')
                ADVANCE(145);
            if (lookahead == '|')
                ADVANCE(122);
            LEX_ERROR();
        case 184:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(184);
            if (lookahead == '#')
                ADVANCE(5);
            if (lookahead == '&')
                ADVANCE(7);
            if (lookahead == '(')
                ADVANCE(10);
            if (lookahead == '*')
                ADVANCE(12);
            if (lookahead == '+')
                ADVANCE(14);
            if (lookahead == '-')
                ADVANCE(16);
            if (lookahead == '/')
                ADVANCE(20);
            if (lookahead == '<')
                ADVANCE(25);
            if (lookahead == '>')
                ADVANCE(28);
            if (lookahead == '[')
                ADVANCE(32);
            if (lookahead == ']')
                ADVANCE(33);
            if (lookahead == '^')
                ADVANCE(34);
            if (lookahead == 'a')
                ADVANCE(159);
            if (lookahead == 'o')
                ADVANCE(145);
            if (lookahead == '|')
                ADVANCE(122);
            LEX_ERROR();
        case 185:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(185);
            if (lookahead == '#')
                ADVANCE(5);
            if (lookahead == '&')
                ADVANCE(7);
            if (lookahead == '(')
                ADVANCE(10);
            if (lookahead == ')')
                ADVANCE(11);
            if (lookahead == '*')
                ADVANCE(12);
            if (lookahead == '+')
                ADVANCE(14);
            if (lookahead == '-')
                ADVANCE(16);
            if (lookahead == '/')
                ADVANCE(20);
            if (lookahead == '<')
                ADVANCE(25);
            if (lookahead == '>')
                ADVANCE(28);
            if (lookahead == '[')
                ADVANCE(32);
            if (lookahead == '^')
                ADVANCE(34);
            if (lookahead == 'a')
                ADVANCE(159);
            if (lookahead == 'o')
                ADVANCE(145);
            if (lookahead == '|')
                ADVANCE(122);
            LEX_ERROR();
        case 186:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(186);
            if (lookahead == '#')
                ADVANCE(5);
            if (lookahead == '&')
                ADVANCE(7);
            if (lookahead == '(')
                ADVANCE(10);
            if (lookahead == '*')
                ADVANCE(12);
            if (lookahead == '+')
                ADVANCE(14);
            if (lookahead == ',')
                ADVANCE(15);
            if (lookahead == '-')
                ADVANCE(16);
            if (lookahead == '/')
                ADVANCE(20);
            if (lookahead == '<')
                ADVANCE(25);
            if (lookahead == '>')
                ADVANCE(28);
            if (lookahead == '[')
                ADVANCE(32);
            if (lookahead == '^')
                ADVANCE(34);
            if (lookahead == 'a')
                ADVANCE(159);
            if (lookahead == 'o')
                ADVANCE(145);
            if (lookahead == '|')
                ADVANCE(122);
            LEX_ERROR();
        case 187:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(187);
            if (lookahead == '#')
                ADVANCE(5);
            if (lookahead == '(')
                ADVANCE(10);
            if (lookahead == ')')
                ADVANCE(11);
            if (lookahead == ',')
                ADVANCE(15);
            if (lookahead == '.')
                ADVANCE(129);
            if (lookahead == 'a')
                ADVANCE(188);
            LEX_ERROR();
        case 188:
            if (lookahead == 's')
                ADVANCE(139);
            LEX_ERROR();
        case 189:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(189);
            if (lookahead == '#')
                ADVANCE(5);
            if (lookahead == '(')
                ADVANCE(10);
            LEX_ERROR();
        case 190:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(190);
            if (lookahead == '#')
                ADVANCE(5);
            if (lookahead == '(')
                ADVANCE(10);
            if (lookahead == ')')
                ADVANCE(11);
            if (lookahead == ',')
                ADVANCE(15);
            if (lookahead == '.')
                ADVANCE(129);
            if (lookahead == 'a')
                ADVANCE(188);
            if (lookahead == 'i')
                ADVANCE(191);
            LEX_ERROR();
        case 191:
            if (lookahead == 'm')
                ADVANCE(192);
            LEX_ERROR();
        case 192:
            if (lookahead == 'p')
                ADVANCE(193);
            LEX_ERROR();
        case 193:
            if (lookahead == 'o')
                ADVANCE(194);
            LEX_ERROR();
        case 194:
            if (lookahead == 'r')
                ADVANCE(195);
            LEX_ERROR();
        case 195:
            if (lookahead == 't')
                ADVANCE(196);
            LEX_ERROR();
        case 196:
            ACCEPT_TOKEN(anon_sym_import);
        case 197:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(197);
            if (lookahead == '#')
                ADVANCE(5);
            if (lookahead == '(')
                ADVANCE(10);
            if (lookahead == ':')
                ADVANCE(23);
            LEX_ERROR();
        case 198:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(198);
            if (lookahead == '\"')
                ADVANCE(2);
            if (lookahead == '#')
                ADVANCE(5);
            if (lookahead == '\'')
                ADVANCE(8);
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(21);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == 'a') ||
                (lookahead == 'e') ||
                (lookahead == 'g') ||
                (lookahead == 'h') ||
                ('j' <= lookahead && lookahead <= 'm') ||
                (lookahead == 'o') ||
                (lookahead == 'q') ||
                ('s' <= lookahead && lookahead <= 'z'))
                ADVANCE(31);
            if (lookahead == '[')
                ADVANCE(32);
            if (lookahead == 'b')
                ADVANCE(39);
            if (lookahead == 'c')
                ADVANCE(199);
            if (lookahead == 'd')
                ADVANCE(200);
            if (lookahead == 'f')
                ADVANCE(202);
            if (lookahead == 'i')
                ADVANCE(203);
            if (lookahead == 'n')
                ADVANCE(91);
            if (lookahead == 'p')
                ADVANCE(96);
            if (lookahead == 'r')
                ADVANCE(104);
            if (lookahead == '{')
                ADVANCE(121);
            LEX_ERROR();
        case 199:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'n') ||
                ('p' <= lookahead && lookahead <= 'z'))
                ADVANCE(31);
            if (lookahead == 'o')
                ADVANCE(49);
            ACCEPT_TOKEN(sym_identifier);
        case 200:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'z'))
                ADVANCE(31);
            if (lookahead == 'e')
                ADVANCE(201);
            ACCEPT_TOKEN(sym_identifier);
        case 201:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'k') ||
                ('m' <= lookahead && lookahead <= 'z'))
                ADVANCE(31);
            if (lookahead == 'l')
                ADVANCE(59);
            ACCEPT_TOKEN(sym_identifier);
        case 202:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'q') ||
                ('s' <= lookahead && lookahead <= 'z'))
                ADVANCE(31);
            if (lookahead == 'r')
                ADVANCE(80);
            ACCEPT_TOKEN(sym_identifier);
        case 203:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'l') ||
                ('n' <= lookahead && lookahead <= 'z'))
                ADVANCE(31);
            if (lookahead == 'm')
                ADVANCE(85);
            ACCEPT_TOKEN(sym_identifier);
        case 204:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(204);
            if (lookahead == '\"')
                ADVANCE(2);
            if (lookahead == '#')
                ADVANCE(5);
            if (lookahead == '\'')
                ADVANCE(8);
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(21);
            if (lookahead == '@')
                ADVANCE(30);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == 'a') ||
                (lookahead == 'e') ||
                (lookahead == 'g') ||
                (lookahead == 'h') ||
                ('j' <= lookahead && lookahead <= 'm') ||
                (lookahead == 'o') ||
                (lookahead == 'q') ||
                (lookahead == 's') ||
                (lookahead == 'u') ||
                (lookahead == 'v') ||
                ('x' <= lookahead && lookahead <= 'z'))
                ADVANCE(31);
            if (lookahead == '[')
                ADVANCE(32);
            if (lookahead == 'b')
                ADVANCE(39);
            if (lookahead == 'c')
                ADVANCE(44);
            if (lookahead == 'd')
                ADVANCE(56);
            if (lookahead == 'f')
                ADVANCE(125);
            if (lookahead == 'i')
                ADVANCE(126);
            if (lookahead == 'n')
                ADVANCE(91);
            if (lookahead == 'p')
                ADVANCE(96);
            if (lookahead == 'r')
                ADVANCE(104);
            if (lookahead == 't')
                ADVANCE(110);
            if (lookahead == 'w')
                ADVANCE(113);
            if (lookahead == '{')
                ADVANCE(121);
            LEX_ERROR();
        case 205:
            if (lookahead == 0)
                ADVANCE(1);
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(205);
            if (lookahead == '\"')
                ADVANCE(2);
            if (lookahead == '#')
                ADVANCE(5);
            if (lookahead == '\'')
                ADVANCE(8);
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(21);
            if (lookahead == ';')
                ADVANCE(24);
            if (lookahead == '@')
                ADVANCE(30);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == 'a') ||
                (lookahead == 'g') ||
                (lookahead == 'h') ||
                ('j' <= lookahead && lookahead <= 'm') ||
                (lookahead == 'o') ||
                (lookahead == 'q') ||
                (lookahead == 's') ||
                (lookahead == 'u') ||
                (lookahead == 'v') ||
                ('x' <= lookahead && lookahead <= 'z'))
                ADVANCE(31);
            if (lookahead == '[')
                ADVANCE(32);
            if (lookahead == 'b')
                ADVANCE(39);
            if (lookahead == 'c')
                ADVANCE(44);
            if (lookahead == 'd')
                ADVANCE(56);
            if (lookahead == 'e')
                ADVANCE(60);
            if (lookahead == 'f')
                ADVANCE(71);
            if (lookahead == 'i')
                ADVANCE(126);
            if (lookahead == 'n')
                ADVANCE(91);
            if (lookahead == 'p')
                ADVANCE(96);
            if (lookahead == 'r')
                ADVANCE(104);
            if (lookahead == 't')
                ADVANCE(110);
            if (lookahead == 'w')
                ADVANCE(113);
            if (lookahead == '{')
                ADVANCE(121);
            LEX_ERROR();
        case 206:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(206);
            if (lookahead == '\"')
                ADVANCE(2);
            if (lookahead == '#')
                ADVANCE(5);
            if (lookahead == '\'')
                ADVANCE(8);
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(21);
            if (lookahead == '@')
                ADVANCE(30);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == 'a') ||
                (lookahead == 'g') ||
                (lookahead == 'h') ||
                ('j' <= lookahead && lookahead <= 'm') ||
                (lookahead == 'o') ||
                (lookahead == 'q') ||
                (lookahead == 's') ||
                (lookahead == 'u') ||
                (lookahead == 'v') ||
                ('x' <= lookahead && lookahead <= 'z'))
                ADVANCE(31);
            if (lookahead == '[')
                ADVANCE(32);
            if (lookahead == 'b')
                ADVANCE(39);
            if (lookahead == 'c')
                ADVANCE(44);
            if (lookahead == 'd')
                ADVANCE(56);
            if (lookahead == 'e')
                ADVANCE(60);
            if (lookahead == 'f')
                ADVANCE(71);
            if (lookahead == 'i')
                ADVANCE(126);
            if (lookahead == 'n')
                ADVANCE(91);
            if (lookahead == 'p')
                ADVANCE(96);
            if (lookahead == 'r')
                ADVANCE(104);
            if (lookahead == 't')
                ADVANCE(110);
            if (lookahead == 'w')
                ADVANCE(113);
            if (lookahead == '{')
                ADVANCE(121);
            LEX_ERROR();
        case 207:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(207);
            if (lookahead == '#')
                ADVANCE(5);
            if (lookahead == ')')
                ADVANCE(11);
            if (lookahead == '*')
                ADVANCE(208);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(31);
            LEX_ERROR();
        case 208:
            ACCEPT_TOKEN(anon_sym_STAR);
        case 209:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(209);
            if (lookahead == '#')
                ADVANCE(5);
            if (lookahead == '*')
                ADVANCE(208);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(31);
            LEX_ERROR();
        case 210:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(210);
            if (lookahead == '#')
                ADVANCE(5);
            if (lookahead == ')')
                ADVANCE(11);
            if (lookahead == ',')
                ADVANCE(15);
            if (lookahead == '=')
                ADVANCE(27);
            LEX_ERROR();
        case 211:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(211);
            if (lookahead == '#')
                ADVANCE(5);
            if (lookahead == '*')
                ADVANCE(208);
            LEX_ERROR();
        case 212:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(212);
            if (lookahead == '#')
                ADVANCE(5);
            if (lookahead == ',')
                ADVANCE(15);
            if (lookahead == ':')
                ADVANCE(23);
            LEX_ERROR();
        case 213:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(213);
            if (lookahead == '#')
                ADVANCE(5);
            if (lookahead == '&')
                ADVANCE(7);
            if (lookahead == '(')
                ADVANCE(10);
            if (lookahead == '*')
                ADVANCE(12);
            if (lookahead == '+')
                ADVANCE(14);
            if (lookahead == ',')
                ADVANCE(15);
            if (lookahead == '-')
                ADVANCE(16);
            if (lookahead == '/')
                ADVANCE(20);
            if (lookahead == ':')
                ADVANCE(23);
            if (lookahead == '<')
                ADVANCE(25);
            if (lookahead == '>')
                ADVANCE(28);
            if (lookahead == '[')
                ADVANCE(32);
            if (lookahead == '^')
                ADVANCE(34);
            if (lookahead == 'a')
                ADVANCE(136);
            if (lookahead == 'o')
                ADVANCE(145);
            if (lookahead == '|')
                ADVANCE(122);
            LEX_ERROR();
        case 214:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(214);
            if (lookahead == '#')
                ADVANCE(5);
            if (lookahead == '&')
                ADVANCE(7);
            if (lookahead == '(')
                ADVANCE(10);
            if (lookahead == '*')
                ADVANCE(12);
            if (lookahead == '+')
                ADVANCE(14);
            if (lookahead == ',')
                ADVANCE(15);
            if (lookahead == '-')
                ADVANCE(16);
            if (lookahead == '/')
                ADVANCE(20);
            if (lookahead == ':')
                ADVANCE(23);
            if (lookahead == '<')
                ADVANCE(25);
            if (lookahead == '>')
                ADVANCE(28);
            if (lookahead == '[')
                ADVANCE(32);
            if (lookahead == '^')
                ADVANCE(34);
            if (lookahead == 'a')
                ADVANCE(159);
            if (lookahead == 'o')
                ADVANCE(145);
            if (lookahead == '|')
                ADVANCE(122);
            LEX_ERROR();
        case 215:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(215);
            if (lookahead == '#')
                ADVANCE(5);
            if (lookahead == 'e')
                ADVANCE(216);
            if (lookahead == 'f')
                ADVANCE(222);
            LEX_ERROR();
        case 216:
            if (lookahead == 'x')
                ADVANCE(217);
            LEX_ERROR();
        case 217:
            if (lookahead == 'c')
                ADVANCE(218);
            LEX_ERROR();
        case 218:
            if (lookahead == 'e')
                ADVANCE(219);
            LEX_ERROR();
        case 219:
            if (lookahead == 'p')
                ADVANCE(220);
            LEX_ERROR();
        case 220:
            if (lookahead == 't')
                ADVANCE(221);
            LEX_ERROR();
        case 221:
            ACCEPT_TOKEN(anon_sym_except);
        case 222:
            if (lookahead == 'i')
                ADVANCE(223);
            LEX_ERROR();
        case 223:
            if (lookahead == 'n')
                ADVANCE(224);
            LEX_ERROR();
        case 224:
            if (lookahead == 'a')
                ADVANCE(225);
            LEX_ERROR();
        case 225:
            if (lookahead == 'l')
                ADVANCE(226);
            LEX_ERROR();
        case 226:
            if (lookahead == 'l')
                ADVANCE(227);
            LEX_ERROR();
        case 227:
            if (lookahead == 'y')
                ADVANCE(228);
            LEX_ERROR();
        case 228:
            ACCEPT_TOKEN(anon_sym_finally);
        case 229:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(229);
            if (lookahead == '\"')
                ADVANCE(2);
            if (lookahead == '#')
                ADVANCE(5);
            if (lookahead == '\'')
                ADVANCE(8);
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(21);
            if (lookahead == '@')
                ADVANCE(30);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == 'a') ||
                (lookahead == 'g') ||
                (lookahead == 'h') ||
                ('j' <= lookahead && lookahead <= 'm') ||
                (lookahead == 'o') ||
                (lookahead == 'q') ||
                (lookahead == 's') ||
                (lookahead == 'u') ||
                (lookahead == 'v') ||
                ('x' <= lookahead && lookahead <= 'z'))
                ADVANCE(31);
            if (lookahead == '[')
                ADVANCE(32);
            if (lookahead == 'b')
                ADVANCE(39);
            if (lookahead == 'c')
                ADVANCE(44);
            if (lookahead == 'd')
                ADVANCE(56);
            if (lookahead == 'e')
                ADVANCE(230);
            if (lookahead == 'f')
                ADVANCE(71);
            if (lookahead == 'i')
                ADVANCE(126);
            if (lookahead == 'n')
                ADVANCE(91);
            if (lookahead == 'p')
                ADVANCE(96);
            if (lookahead == 'r')
                ADVANCE(104);
            if (lookahead == 't')
                ADVANCE(110);
            if (lookahead == 'w')
                ADVANCE(113);
            if (lookahead == '{')
                ADVANCE(121);
            LEX_ERROR();
        case 230:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'k') ||
                ('m' <= lookahead && lookahead <= 'w') ||
                (lookahead == 'y') ||
                (lookahead == 'z'))
                ADVANCE(31);
            if (lookahead == 'l')
                ADVANCE(231);
            if (lookahead == 'x')
                ADVANCE(66);
            ACCEPT_TOKEN(sym_identifier);
        case 231:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'r') ||
                ('t' <= lookahead && lookahead <= 'z'))
                ADVANCE(31);
            if (lookahead == 's')
                ADVANCE(64);
            ACCEPT_TOKEN(sym_identifier);
        case 232:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(232);
            if (lookahead == '\"')
                ADVANCE(2);
            if (lookahead == '#')
                ADVANCE(5);
            if (lookahead == '\'')
                ADVANCE(8);
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(21);
            if (lookahead == '@')
                ADVANCE(30);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == 'a') ||
                (lookahead == 'e') ||
                (lookahead == 'g') ||
                (lookahead == 'h') ||
                ('j' <= lookahead && lookahead <= 'm') ||
                (lookahead == 'o') ||
                (lookahead == 'q') ||
                (lookahead == 's') ||
                (lookahead == 'u') ||
                (lookahead == 'v') ||
                ('x' <= lookahead && lookahead <= 'z'))
                ADVANCE(31);
            if (lookahead == '[')
                ADVANCE(32);
            if (lookahead == 'b')
                ADVANCE(39);
            if (lookahead == 'c')
                ADVANCE(44);
            if (lookahead == 'd')
                ADVANCE(56);
            if (lookahead == 'f')
                ADVANCE(71);
            if (lookahead == 'i')
                ADVANCE(126);
            if (lookahead == 'n')
                ADVANCE(91);
            if (lookahead == 'p')
                ADVANCE(96);
            if (lookahead == 'r')
                ADVANCE(104);
            if (lookahead == 't')
                ADVANCE(110);
            if (lookahead == 'w')
                ADVANCE(113);
            if (lookahead == '{')
                ADVANCE(121);
            LEX_ERROR();
        case 233:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(233);
            if (lookahead == '\"')
                ADVANCE(2);
            if (lookahead == '#')
                ADVANCE(5);
            if (lookahead == '\'')
                ADVANCE(8);
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(21);
            if (lookahead == '@')
                ADVANCE(30);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == 'a') ||
                (lookahead == 'g') ||
                (lookahead == 'h') ||
                ('j' <= lookahead && lookahead <= 'm') ||
                (lookahead == 'o') ||
                (lookahead == 'q') ||
                (lookahead == 's') ||
                (lookahead == 'u') ||
                (lookahead == 'v') ||
                ('x' <= lookahead && lookahead <= 'z'))
                ADVANCE(31);
            if (lookahead == '[')
                ADVANCE(32);
            if (lookahead == 'b')
                ADVANCE(39);
            if (lookahead == 'c')
                ADVANCE(44);
            if (lookahead == 'd')
                ADVANCE(56);
            if (lookahead == 'e')
                ADVANCE(234);
            if (lookahead == 'f')
                ADVANCE(125);
            if (lookahead == 'i')
                ADVANCE(126);
            if (lookahead == 'n')
                ADVANCE(91);
            if (lookahead == 'p')
                ADVANCE(96);
            if (lookahead == 'r')
                ADVANCE(104);
            if (lookahead == 't')
                ADVANCE(110);
            if (lookahead == 'w')
                ADVANCE(113);
            if (lookahead == '{')
                ADVANCE(121);
            LEX_ERROR();
        case 234:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'k') ||
                ('m' <= lookahead && lookahead <= 'z'))
                ADVANCE(31);
            if (lookahead == 'l')
                ADVANCE(231);
            ACCEPT_TOKEN(sym_identifier);
        case 235:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(235);
            if (lookahead == '\"')
                ADVANCE(2);
            if (lookahead == '#')
                ADVANCE(5);
            if (lookahead == '\'')
                ADVANCE(8);
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(21);
            if (lookahead == '@')
                ADVANCE(30);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == 'a') ||
                (lookahead == 'g') ||
                (lookahead == 'h') ||
                ('j' <= lookahead && lookahead <= 'm') ||
                (lookahead == 'o') ||
                (lookahead == 'q') ||
                (lookahead == 's') ||
                (lookahead == 'u') ||
                (lookahead == 'v') ||
                ('x' <= lookahead && lookahead <= 'z'))
                ADVANCE(31);
            if (lookahead == '[')
                ADVANCE(32);
            if (lookahead == 'b')
                ADVANCE(39);
            if (lookahead == 'c')
                ADVANCE(44);
            if (lookahead == 'd')
                ADVANCE(56);
            if (lookahead == 'e')
                ADVANCE(236);
            if (lookahead == 'f')
                ADVANCE(125);
            if (lookahead == 'i')
                ADVANCE(126);
            if (lookahead == 'n')
                ADVANCE(91);
            if (lookahead == 'p')
                ADVANCE(96);
            if (lookahead == 'r')
                ADVANCE(104);
            if (lookahead == 't')
                ADVANCE(110);
            if (lookahead == 'w')
                ADVANCE(113);
            if (lookahead == '{')
                ADVANCE(121);
            LEX_ERROR();
        case 236:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'k') ||
                ('m' <= lookahead && lookahead <= 'z'))
                ADVANCE(31);
            if (lookahead == 'l')
                ADVANCE(61);
            ACCEPT_TOKEN(sym_identifier);
        case 237:
            if (lookahead == 0)
                ADVANCE(1);
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(237);
            if (lookahead == '\"')
                ADVANCE(2);
            if (lookahead == '#')
                ADVANCE(5);
            if (lookahead == '\'')
                ADVANCE(8);
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(21);
            if (lookahead == ';')
                ADVANCE(24);
            if (lookahead == '@')
                ADVANCE(30);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == 'a') ||
                (lookahead == 'g') ||
                (lookahead == 'h') ||
                ('j' <= lookahead && lookahead <= 'm') ||
                (lookahead == 'o') ||
                (lookahead == 'q') ||
                (lookahead == 's') ||
                (lookahead == 'u') ||
                (lookahead == 'v') ||
                ('x' <= lookahead && lookahead <= 'z'))
                ADVANCE(31);
            if (lookahead == '[')
                ADVANCE(32);
            if (lookahead == 'b')
                ADVANCE(39);
            if (lookahead == 'c')
                ADVANCE(44);
            if (lookahead == 'd')
                ADVANCE(56);
            if (lookahead == 'e')
                ADVANCE(230);
            if (lookahead == 'f')
                ADVANCE(71);
            if (lookahead == 'i')
                ADVANCE(126);
            if (lookahead == 'n')
                ADVANCE(91);
            if (lookahead == 'p')
                ADVANCE(96);
            if (lookahead == 'r')
                ADVANCE(104);
            if (lookahead == 't')
                ADVANCE(110);
            if (lookahead == 'w')
                ADVANCE(113);
            if (lookahead == '{')
                ADVANCE(121);
            LEX_ERROR();
        case 238:
            if (lookahead == 0)
                ADVANCE(1);
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(238);
            if (lookahead == '\"')
                ADVANCE(2);
            if (lookahead == '#')
                ADVANCE(5);
            if (lookahead == '\'')
                ADVANCE(8);
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(21);
            if (lookahead == ';')
                ADVANCE(24);
            if (lookahead == '@')
                ADVANCE(30);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == 'a') ||
                (lookahead == 'e') ||
                (lookahead == 'g') ||
                (lookahead == 'h') ||
                ('j' <= lookahead && lookahead <= 'm') ||
                (lookahead == 'o') ||
                (lookahead == 'q') ||
                (lookahead == 's') ||
                (lookahead == 'u') ||
                (lookahead == 'v') ||
                ('x' <= lookahead && lookahead <= 'z'))
                ADVANCE(31);
            if (lookahead == '[')
                ADVANCE(32);
            if (lookahead == 'b')
                ADVANCE(39);
            if (lookahead == 'c')
                ADVANCE(44);
            if (lookahead == 'd')
                ADVANCE(56);
            if (lookahead == 'f')
                ADVANCE(71);
            if (lookahead == 'i')
                ADVANCE(126);
            if (lookahead == 'n')
                ADVANCE(91);
            if (lookahead == 'p')
                ADVANCE(96);
            if (lookahead == 'r')
                ADVANCE(104);
            if (lookahead == 't')
                ADVANCE(110);
            if (lookahead == 'w')
                ADVANCE(113);
            if (lookahead == '{')
                ADVANCE(121);
            LEX_ERROR();
        case 239:
            if (lookahead == 0)
                ADVANCE(1);
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(239);
            if (lookahead == '\"')
                ADVANCE(2);
            if (lookahead == '#')
                ADVANCE(5);
            if (lookahead == '\'')
                ADVANCE(8);
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(21);
            if (lookahead == ';')
                ADVANCE(24);
            if (lookahead == '@')
                ADVANCE(30);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == 'a') ||
                (lookahead == 'g') ||
                (lookahead == 'h') ||
                ('j' <= lookahead && lookahead <= 'm') ||
                (lookahead == 'o') ||
                (lookahead == 'q') ||
                (lookahead == 's') ||
                (lookahead == 'u') ||
                (lookahead == 'v') ||
                ('x' <= lookahead && lookahead <= 'z'))
                ADVANCE(31);
            if (lookahead == '[')
                ADVANCE(32);
            if (lookahead == 'b')
                ADVANCE(39);
            if (lookahead == 'c')
                ADVANCE(44);
            if (lookahead == 'd')
                ADVANCE(56);
            if (lookahead == 'e')
                ADVANCE(234);
            if (lookahead == 'f')
                ADVANCE(125);
            if (lookahead == 'i')
                ADVANCE(126);
            if (lookahead == 'n')
                ADVANCE(91);
            if (lookahead == 'p')
                ADVANCE(96);
            if (lookahead == 'r')
                ADVANCE(104);
            if (lookahead == 't')
                ADVANCE(110);
            if (lookahead == 'w')
                ADVANCE(113);
            if (lookahead == '{')
                ADVANCE(121);
            LEX_ERROR();
        case 240:
            if (lookahead == 0)
                ADVANCE(1);
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(240);
            if (lookahead == '\"')
                ADVANCE(2);
            if (lookahead == '#')
                ADVANCE(5);
            if (lookahead == '\'')
                ADVANCE(8);
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(21);
            if (lookahead == ';')
                ADVANCE(24);
            if (lookahead == '@')
                ADVANCE(30);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == 'a') ||
                (lookahead == 'g') ||
                (lookahead == 'h') ||
                ('j' <= lookahead && lookahead <= 'm') ||
                (lookahead == 'o') ||
                (lookahead == 'q') ||
                (lookahead == 's') ||
                (lookahead == 'u') ||
                (lookahead == 'v') ||
                ('x' <= lookahead && lookahead <= 'z'))
                ADVANCE(31);
            if (lookahead == '[')
                ADVANCE(32);
            if (lookahead == 'b')
                ADVANCE(39);
            if (lookahead == 'c')
                ADVANCE(44);
            if (lookahead == 'd')
                ADVANCE(56);
            if (lookahead == 'e')
                ADVANCE(236);
            if (lookahead == 'f')
                ADVANCE(125);
            if (lookahead == 'i')
                ADVANCE(126);
            if (lookahead == 'n')
                ADVANCE(91);
            if (lookahead == 'p')
                ADVANCE(96);
            if (lookahead == 'r')
                ADVANCE(104);
            if (lookahead == 't')
                ADVANCE(110);
            if (lookahead == 'w')
                ADVANCE(113);
            if (lookahead == '{')
                ADVANCE(121);
            LEX_ERROR();
        case 241:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(241);
            if (lookahead == '#')
                ADVANCE(5);
            if (lookahead == ',')
                ADVANCE(15);
            LEX_ERROR();
        case 242:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(242);
            if (lookahead == '#')
                ADVANCE(5);
            if (lookahead == '.')
                ADVANCE(129);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'h') ||
                ('j' <= lookahead && lookahead <= 'z'))
                ADVANCE(31);
            if (lookahead == 'i')
                ADVANCE(203);
            LEX_ERROR();
        case 243:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(243);
            if (lookahead == '#')
                ADVANCE(5);
            if (lookahead == ')')
                ADVANCE(11);
            if (lookahead == ',')
                ADVANCE(15);
            if (lookahead == '.')
                ADVANCE(129);
            if (lookahead == 'a')
                ADVANCE(188);
            if (lookahead == 'i')
                ADVANCE(191);
            LEX_ERROR();
        case 244:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(244);
            if (lookahead == '#')
                ADVANCE(5);
            if (lookahead == 'i')
                ADVANCE(191);
            LEX_ERROR();
        case 245:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(245);
            if (lookahead == '#')
                ADVANCE(5);
            if (lookahead == '(')
                ADVANCE(10);
            if (lookahead == '*')
                ADVANCE(208);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(31);
            LEX_ERROR();
        case 246:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(246);
            if (lookahead == '#')
                ADVANCE(5);
            if (lookahead == ',')
                ADVANCE(15);
            if (lookahead == 'a')
                ADVANCE(188);
            LEX_ERROR();
        case 247:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(247);
            if (lookahead == '#')
                ADVANCE(5);
            if (lookahead == ')')
                ADVANCE(11);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(31);
            LEX_ERROR();
        case 248:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(248);
            if (lookahead == '#')
                ADVANCE(5);
            if (lookahead == ')')
                ADVANCE(11);
            if (lookahead == ',')
                ADVANCE(15);
            if (lookahead == 'a')
                ADVANCE(188);
            LEX_ERROR();
        case 249:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(249);
            if (lookahead == '\"')
                ADVANCE(2);
            if (lookahead == '#')
                ADVANCE(5);
            if (lookahead == '\'')
                ADVANCE(8);
            if (lookahead == ')')
                ADVANCE(11);
            if (lookahead == '*')
                ADVANCE(12);
            if (lookahead == '.')
                ADVANCE(162);
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(21);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'm') ||
                ('o' <= lookahead && lookahead <= 'z'))
                ADVANCE(31);
            if (lookahead == '[')
                ADVANCE(32);
            if (lookahead == ']')
                ADVANCE(33);
            if (lookahead == 'n')
                ADVANCE(91);
            if (lookahead == '{')
                ADVANCE(121);
            if (lookahead == '}')
                ADVANCE(123);
            LEX_ERROR();
        case 250:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(250);
            if (lookahead == '\"')
                ADVANCE(2);
            if (lookahead == '#')
                ADVANCE(5);
            if (lookahead == '\'')
                ADVANCE(8);
            if (lookahead == '*')
                ADVANCE(208);
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(21);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'm') ||
                ('o' <= lookahead && lookahead <= 'z'))
                ADVANCE(31);
            if (lookahead == '[')
                ADVANCE(32);
            if (lookahead == 'n')
                ADVANCE(91);
            if (lookahead == '{')
                ADVANCE(121);
            LEX_ERROR();
        case 251:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(251);
            if (lookahead == '#')
                ADVANCE(5);
            if (lookahead == '&')
                ADVANCE(7);
            if (lookahead == '(')
                ADVANCE(10);
            if (lookahead == ')')
                ADVANCE(11);
            if (lookahead == '*')
                ADVANCE(12);
            if (lookahead == '+')
                ADVANCE(14);
            if (lookahead == ',')
                ADVANCE(15);
            if (lookahead == '-')
                ADVANCE(16);
            if (lookahead == '.')
                ADVANCE(129);
            if (lookahead == '/')
                ADVANCE(20);
            if (lookahead == ':')
                ADVANCE(23);
            if (lookahead == '<')
                ADVANCE(25);
            if (lookahead == '=')
                ADVANCE(27);
            if (lookahead == '>')
                ADVANCE(28);
            if (lookahead == '[')
                ADVANCE(32);
            if (lookahead == ']')
                ADVANCE(33);
            if (lookahead == '^')
                ADVANCE(34);
            if (lookahead == 'a')
                ADVANCE(136);
            if (lookahead == 'f')
                ADVANCE(140);
            if (lookahead == 'i')
                ADVANCE(252);
            if (lookahead == 'o')
                ADVANCE(145);
            if (lookahead == '|')
                ADVANCE(122);
            if (lookahead == '}')
                ADVANCE(123);
            LEX_ERROR();
        case 252:
            if (lookahead == 'm')
                ADVANCE(192);
            if (lookahead == 'n')
                ADVANCE(144);
            LEX_ERROR();
        case 253:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(253);
            if (lookahead == '#')
                ADVANCE(5);
            if (lookahead == ')')
                ADVANCE(11);
            if (lookahead == ':')
                ADVANCE(23);
            if (lookahead == 'i')
                ADVANCE(143);
            LEX_ERROR();
        case 254:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(254);
            if (lookahead == '#')
                ADVANCE(5);
            if (lookahead == '(')
                ADVANCE(10);
            if (lookahead == ')')
                ADVANCE(11);
            if (lookahead == ',')
                ADVANCE(15);
            if (lookahead == 'a')
                ADVANCE(188);
            if (lookahead == 'i')
                ADVANCE(191);
            LEX_ERROR();
        case 255:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(255);
            if (lookahead == '#')
                ADVANCE(5);
            if (lookahead == ')')
                ADVANCE(11);
            if (lookahead == ',')
                ADVANCE(15);
            if (lookahead == ':')
                ADVANCE(23);
            if (lookahead == ']')
                ADVANCE(33);
            if (lookahead == 'i')
                ADVANCE(143);
            if (lookahead == '}')
                ADVANCE(123);
            LEX_ERROR();
        case 256:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(256);
            if (lookahead == '\"')
                ADVANCE(2);
            if (lookahead == '#')
                ADVANCE(5);
            if (lookahead == '\'')
                ADVANCE(8);
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(21);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'm') ||
                ('o' <= lookahead && lookahead <= 'z'))
                ADVANCE(31);
            if (lookahead == '[')
                ADVANCE(32);
            if (lookahead == ']')
                ADVANCE(33);
            if (lookahead == 'n')
                ADVANCE(91);
            if (lookahead == '{')
                ADVANCE(121);
            if (lookahead == '}')
                ADVANCE(123);
            LEX_ERROR();
        case 257:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(257);
            if (lookahead == '#')
                ADVANCE(5);
            if (lookahead == '&')
                ADVANCE(7);
            if (lookahead == '(')
                ADVANCE(10);
            if (lookahead == ')')
                ADVANCE(11);
            if (lookahead == '*')
                ADVANCE(12);
            if (lookahead == '+')
                ADVANCE(14);
            if (lookahead == ',')
                ADVANCE(15);
            if (lookahead == '-')
                ADVANCE(16);
            if (lookahead == '/')
                ADVANCE(20);
            if (lookahead == ':')
                ADVANCE(23);
            if (lookahead == '<')
                ADVANCE(25);
            if (lookahead == '>')
                ADVANCE(28);
            if (lookahead == '[')
                ADVANCE(32);
            if (lookahead == ']')
                ADVANCE(33);
            if (lookahead == '^')
                ADVANCE(34);
            if (lookahead == 'a')
                ADVANCE(159);
            if (lookahead == 'i')
                ADVANCE(143);
            if (lookahead == 'o')
                ADVANCE(145);
            if (lookahead == '|')
                ADVANCE(122);
            if (lookahead == '}')
                ADVANCE(123);
            LEX_ERROR();
        case 258:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(258);
            if (lookahead == '#')
                ADVANCE(5);
            if (lookahead == '&')
                ADVANCE(7);
            if (lookahead == '(')
                ADVANCE(10);
            if (lookahead == '*')
                ADVANCE(12);
            if (lookahead == '+')
                ADVANCE(14);
            if (lookahead == '-')
                ADVANCE(16);
            if (lookahead == '/')
                ADVANCE(20);
            if (lookahead == '<')
                ADVANCE(25);
            if (lookahead == '>')
                ADVANCE(28);
            if (lookahead == '[')
                ADVANCE(32);
            if (lookahead == ']')
                ADVANCE(33);
            if (lookahead == '^')
                ADVANCE(34);
            if (lookahead == 'a')
                ADVANCE(159);
            if (lookahead == 'o')
                ADVANCE(145);
            if (lookahead == '|')
                ADVANCE(122);
            if (lookahead == '}')
                ADVANCE(123);
            LEX_ERROR();
        case 259:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(259);
            if (lookahead == '\"')
                ADVANCE(2);
            if (lookahead == '#')
                ADVANCE(5);
            if (lookahead == '\'')
                ADVANCE(8);
            if (lookahead == ')')
                ADVANCE(11);
            if (lookahead == '*')
                ADVANCE(208);
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(21);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'm') ||
                ('o' <= lookahead && lookahead <= 'z'))
                ADVANCE(31);
            if (lookahead == '[')
                ADVANCE(32);
            if (lookahead == 'n')
                ADVANCE(91);
            if (lookahead == '{')
                ADVANCE(121);
            LEX_ERROR();
        case 260:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(260);
            if (lookahead == '#')
                ADVANCE(5);
            if (lookahead == '&')
                ADVANCE(7);
            if (lookahead == '(')
                ADVANCE(10);
            if (lookahead == '*')
                ADVANCE(12);
            if (lookahead == '+')
                ADVANCE(14);
            if (lookahead == ',')
                ADVANCE(15);
            if (lookahead == '-')
                ADVANCE(16);
            if (lookahead == '/')
                ADVANCE(20);
            if (lookahead == ':')
                ADVANCE(23);
            if (lookahead == '<')
                ADVANCE(25);
            if (lookahead == '>')
                ADVANCE(28);
            if (lookahead == '[')
                ADVANCE(32);
            if (lookahead == ']')
                ADVANCE(33);
            if (lookahead == '^')
                ADVANCE(34);
            if (lookahead == 'a')
                ADVANCE(159);
            if (lookahead == 'o')
                ADVANCE(145);
            if (lookahead == '|')
                ADVANCE(122);
            if (lookahead == '}')
                ADVANCE(123);
            LEX_ERROR();
        case 261:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(261);
            if (lookahead == '#')
                ADVANCE(5);
            if (lookahead == '&')
                ADVANCE(7);
            if (lookahead == '(')
                ADVANCE(10);
            if (lookahead == ')')
                ADVANCE(11);
            if (lookahead == '*')
                ADVANCE(12);
            if (lookahead == '+')
                ADVANCE(14);
            if (lookahead == ',')
                ADVANCE(15);
            if (lookahead == '-')
                ADVANCE(16);
            if (lookahead == '/')
                ADVANCE(20);
            if (lookahead == ':')
                ADVANCE(23);
            if (lookahead == '<')
                ADVANCE(25);
            if (lookahead == '>')
                ADVANCE(28);
            if (lookahead == '[')
                ADVANCE(32);
            if (lookahead == '^')
                ADVANCE(34);
            if (lookahead == 'a')
                ADVANCE(159);
            if (lookahead == 'o')
                ADVANCE(145);
            if (lookahead == '|')
                ADVANCE(122);
            LEX_ERROR();
        case 262:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(262);
            if (lookahead == '#')
                ADVANCE(5);
            if (lookahead == '&')
                ADVANCE(7);
            if (lookahead == '(')
                ADVANCE(10);
            if (lookahead == ')')
                ADVANCE(11);
            if (lookahead == '*')
                ADVANCE(12);
            if (lookahead == '+')
                ADVANCE(14);
            if (lookahead == ',')
                ADVANCE(15);
            if (lookahead == '-')
                ADVANCE(16);
            if (lookahead == '.')
                ADVANCE(129);
            if (lookahead == '/')
                ADVANCE(20);
            if (lookahead == ':')
                ADVANCE(23);
            if (lookahead == '<')
                ADVANCE(25);
            if (lookahead == '=')
                ADVANCE(27);
            if (lookahead == '>')
                ADVANCE(28);
            if (lookahead == '[')
                ADVANCE(32);
            if (lookahead == ']')
                ADVANCE(33);
            if (lookahead == '^')
                ADVANCE(34);
            if (lookahead == 'a')
                ADVANCE(136);
            if (lookahead == 'i')
                ADVANCE(143);
            if (lookahead == 'o')
                ADVANCE(145);
            if (lookahead == '|')
                ADVANCE(122);
            if (lookahead == '}')
                ADVANCE(123);
            LEX_ERROR();
        case 263:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(263);
            if (lookahead == '#')
                ADVANCE(5);
            if (lookahead == '&')
                ADVANCE(7);
            if (lookahead == '(')
                ADVANCE(10);
            if (lookahead == ')')
                ADVANCE(11);
            if (lookahead == '*')
                ADVANCE(12);
            if (lookahead == '+')
                ADVANCE(14);
            if (lookahead == ',')
                ADVANCE(15);
            if (lookahead == '-')
                ADVANCE(16);
            if (lookahead == '/')
                ADVANCE(20);
            if (lookahead == ':')
                ADVANCE(23);
            if (lookahead == '<')
                ADVANCE(25);
            if (lookahead == '>')
                ADVANCE(28);
            if (lookahead == '[')
                ADVANCE(32);
            if (lookahead == ']')
                ADVANCE(33);
            if (lookahead == '^')
                ADVANCE(34);
            if (lookahead == 'a')
                ADVANCE(136);
            if (lookahead == 'i')
                ADVANCE(143);
            if (lookahead == 'o')
                ADVANCE(145);
            if (lookahead == '|')
                ADVANCE(122);
            if (lookahead == '}')
                ADVANCE(123);
            LEX_ERROR();
        case 264:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(264);
            if (lookahead == '#')
                ADVANCE(5);
            if (lookahead == '&')
                ADVANCE(7);
            if (lookahead == '(')
                ADVANCE(10);
            if (lookahead == ')')
                ADVANCE(11);
            if (lookahead == '*')
                ADVANCE(12);
            if (lookahead == '+')
                ADVANCE(14);
            if (lookahead == ',')
                ADVANCE(15);
            if (lookahead == '-')
                ADVANCE(16);
            if (lookahead == '.')
                ADVANCE(129);
            if (lookahead == '/')
                ADVANCE(20);
            if (lookahead == '<')
                ADVANCE(25);
            if (lookahead == '=')
                ADVANCE(27);
            if (lookahead == '>')
                ADVANCE(28);
            if (lookahead == '[')
                ADVANCE(32);
            if (lookahead == '^')
                ADVANCE(34);
            if (lookahead == 'a')
                ADVANCE(136);
            if (lookahead == 'o')
                ADVANCE(145);
            if (lookahead == '|')
                ADVANCE(122);
            LEX_ERROR();
        default:
            LEX_ERROR();
    }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
    [0] = {.lex_state = 0, .external_tokens = 1},
    [1] = {.lex_state = 124},
    [2] = {.lex_state = 127},
    [3] = {.lex_state = 128},
    [4] = {.lex_state = 130},
    [5] = {.lex_state = 130},
    [6] = {.lex_state = 130},
    [7] = {.lex_state = 131, .external_tokens = 2},
    [8] = {.lex_state = 130},
    [9] = {.lex_state = 130},
    [10] = {.lex_state = 130},
    [11] = {.lex_state = 132},
    [12] = {.lex_state = 130},
    [13] = {.lex_state = 127},
    [14] = {.lex_state = 127},
    [15] = {.lex_state = 127},
    [16] = {.lex_state = 130},
    [17] = {.lex_state = 133},
    [18] = {.lex_state = 134},
    [19] = {.lex_state = 135, .external_tokens = 2},
    [20] = {.lex_state = 147},
    [21] = {.lex_state = 148, .external_tokens = 2},
    [22] = {.lex_state = 131, .external_tokens = 2},
    [23] = {.lex_state = 148, .external_tokens = 2},
    [24] = {.lex_state = 148, .external_tokens = 2},
    [25] = {.lex_state = 149},
    [26] = {.lex_state = 158, .external_tokens = 2},
    [27] = {.lex_state = 148, .external_tokens = 2},
    [28] = {.lex_state = 149},
    [29] = {.lex_state = 148, .external_tokens = 2},
    [30] = {.lex_state = 149},
    [31] = {.lex_state = 147},
    [32] = {.lex_state = 148, .external_tokens = 2},
    [33] = {.lex_state = 160},
    [34] = {.lex_state = 130},
    [35] = {.lex_state = 130},
    [36] = {.lex_state = 130},
    [37] = {.lex_state = 130},
    [38] = {.lex_state = 130},
    [39] = {.lex_state = 130},
    [40] = {.lex_state = 161},
    [41] = {.lex_state = 130},
    [42] = {.lex_state = 133},
    [43] = {.lex_state = 163},
    [44] = {.lex_state = 134},
    [45] = {.lex_state = 135},
    [46] = {.lex_state = 164},
    [47] = {.lex_state = 160},
    [48] = {.lex_state = 165},
    [49] = {.lex_state = 130},
    [50] = {.lex_state = 130},
    [51] = {.lex_state = 130},
    [52] = {.lex_state = 130},
    [53] = {.lex_state = 130},
    [54] = {.lex_state = 130},
    [55] = {.lex_state = 161},
    [56] = {.lex_state = 135, .external_tokens = 2},
    [57] = {.lex_state = 163},
    [58] = {.lex_state = 165},
    [59] = {.lex_state = 135, .external_tokens = 2},
    [60] = {.lex_state = 163},
    [61] = {.lex_state = 135, .external_tokens = 2},
    [62] = {.lex_state = 164},
    [63] = {.lex_state = 163},
    [64] = {.lex_state = 164},
    [65] = {.lex_state = 165},
    [66] = {.lex_state = 135},
    [67] = {.lex_state = 163},
    [68] = {.lex_state = 165},
    [69] = {.lex_state = 135},
    [70] = {.lex_state = 135},
    [71] = {.lex_state = 163},
    [72] = {.lex_state = 164},
    [73] = {.lex_state = 164},
    [74] = {.lex_state = 164},
    [75] = {.lex_state = 164},
    [76] = {.lex_state = 164},
    [77] = {.lex_state = 135},
    [78] = {.lex_state = 164},
    [79] = {.lex_state = 130},
    [80] = {.lex_state = 130},
    [81] = {.lex_state = 130},
    [82] = {.lex_state = 166},
    [83] = {.lex_state = 167},
    [84] = {.lex_state = 168},
    [85] = {.lex_state = 168},
    [86] = {.lex_state = 169},
    [87] = {.lex_state = 160},
    [88] = {.lex_state = 167},
    [89] = {.lex_state = 168},
    [90] = {.lex_state = 168},
    [91] = {.lex_state = 169},
    [92] = {.lex_state = 135},
    [93] = {.lex_state = 170},
    [94] = {.lex_state = 168},
    [95] = {.lex_state = 135},
    [96] = {.lex_state = 170},
    [97] = {.lex_state = 167},
    [98] = {.lex_state = 168},
    [99] = {.lex_state = 169},
    [100] = {.lex_state = 135},
    [101] = {.lex_state = 130},
    [102] = {.lex_state = 130},
    [103] = {.lex_state = 130},
    [104] = {.lex_state = 130},
    [105] = {.lex_state = 130},
    [106] = {.lex_state = 130},
    [107] = {.lex_state = 167},
    [108] = {.lex_state = 167},
    [109] = {.lex_state = 167},
    [110] = {.lex_state = 167},
    [111] = {.lex_state = 167},
    [112] = {.lex_state = 167},
    [113] = {.lex_state = 168},
    [114] = {.lex_state = 169},
    [115] = {.lex_state = 135},
    [116] = {.lex_state = 172},
    [117] = {.lex_state = 135},
    [118] = {.lex_state = 170},
    [119] = {.lex_state = 168},
    [120] = {.lex_state = 170},
    [121] = {.lex_state = 169},
    [122] = {.lex_state = 172},
    [123] = {.lex_state = 130},
    [124] = {.lex_state = 167},
    [125] = {.lex_state = 130},
    [126] = {.lex_state = 135},
    [127] = {.lex_state = 173},
    [128] = {.lex_state = 174},
    [129] = {.lex_state = 134},
    [130] = {.lex_state = 130},
    [131] = {.lex_state = 135},
    [132] = {.lex_state = 175},
    [133] = {.lex_state = 134},
    [134] = {.lex_state = 135},
    [135] = {.lex_state = 130},
    [136] = {.lex_state = 135},
    [137] = {.lex_state = 176},
    [138] = {.lex_state = 175},
    [139] = {.lex_state = 130},
    [140] = {.lex_state = 130},
    [141] = {.lex_state = 130},
    [142] = {.lex_state = 130},
    [143] = {.lex_state = 130},
    [144] = {.lex_state = 130},
    [145] = {.lex_state = 130},
    [146] = {.lex_state = 176},
    [147] = {.lex_state = 176},
    [148] = {.lex_state = 176},
    [149] = {.lex_state = 176},
    [150] = {.lex_state = 176},
    [151] = {.lex_state = 130},
    [152] = {.lex_state = 177},
    [153] = {.lex_state = 130},
    [154] = {.lex_state = 130},
    [155] = {.lex_state = 130},
    [156] = {.lex_state = 130},
    [157] = {.lex_state = 130},
    [158] = {.lex_state = 130},
    [159] = {.lex_state = 177},
    [160] = {.lex_state = 177},
    [161] = {.lex_state = 177},
    [162] = {.lex_state = 177},
    [163] = {.lex_state = 177},
    [164] = {.lex_state = 130},
    [165] = {.lex_state = 178},
    [166] = {.lex_state = 179},
    [167] = {.lex_state = 130},
    [168] = {.lex_state = 130},
    [169] = {.lex_state = 130},
    [170] = {.lex_state = 130},
    [171] = {.lex_state = 130},
    [172] = {.lex_state = 130},
    [173] = {.lex_state = 130},
    [174] = {.lex_state = 180},
    [175] = {.lex_state = 130},
    [176] = {.lex_state = 179},
    [177] = {.lex_state = 179},
    [178] = {.lex_state = 179},
    [179] = {.lex_state = 179},
    [180] = {.lex_state = 179},
    [181] = {.lex_state = 179},
    [182] = {.lex_state = 179},
    [183] = {.lex_state = 130},
    [184] = {.lex_state = 130},
    [185] = {.lex_state = 181},
    [186] = {.lex_state = 130},
    [187] = {.lex_state = 130},
    [188] = {.lex_state = 130},
    [189] = {.lex_state = 130},
    [190] = {.lex_state = 130},
    [191] = {.lex_state = 130},
    [192] = {.lex_state = 135},
    [193] = {.lex_state = 181},
    [194] = {.lex_state = 181},
    [195] = {.lex_state = 181},
    [196] = {.lex_state = 181},
    [197] = {.lex_state = 181},
    [198] = {.lex_state = 175},
    [199] = {.lex_state = 134},
    [200] = {.lex_state = 130},
    [201] = {.lex_state = 130},
    [202] = {.lex_state = 130},
    [203] = {.lex_state = 130},
    [204] = {.lex_state = 130},
    [205] = {.lex_state = 130},
    [206] = {.lex_state = 130},
    [207] = {.lex_state = 130},
    [208] = {.lex_state = 135},
    [209] = {.lex_state = 175},
    [210] = {.lex_state = 134},
    [211] = {.lex_state = 135},
    [212] = {.lex_state = 135},
    [213] = {.lex_state = 177},
    [214] = {.lex_state = 173},
    [215] = {.lex_state = 173},
    [216] = {.lex_state = 173},
    [217] = {.lex_state = 173},
    [218] = {.lex_state = 173},
    [219] = {.lex_state = 178},
    [220] = {.lex_state = 130},
    [221] = {.lex_state = 181},
    [222] = {.lex_state = 135},
    [223] = {.lex_state = 130},
    [224] = {.lex_state = 182},
    [225] = {.lex_state = 130},
    [226] = {.lex_state = 130},
    [227] = {.lex_state = 130},
    [228] = {.lex_state = 130},
    [229] = {.lex_state = 130},
    [230] = {.lex_state = 130},
    [231] = {.lex_state = 182},
    [232] = {.lex_state = 182},
    [233] = {.lex_state = 182},
    [234] = {.lex_state = 182},
    [235] = {.lex_state = 182},
    [236] = {.lex_state = 177},
    [237] = {.lex_state = 130},
    [238] = {.lex_state = 135},
    [239] = {.lex_state = 183},
    [240] = {.lex_state = 133},
    [241] = {.lex_state = 130},
    [242] = {.lex_state = 130},
    [243] = {.lex_state = 130},
    [244] = {.lex_state = 130},
    [245] = {.lex_state = 130},
    [246] = {.lex_state = 130},
    [247] = {.lex_state = 130},
    [248] = {.lex_state = 135},
    [249] = {.lex_state = 163},
    [250] = {.lex_state = 133},
    [251] = {.lex_state = 135},
    [252] = {.lex_state = 135},
    [253] = {.lex_state = 164},
    [254] = {.lex_state = 183},
    [255] = {.lex_state = 183},
    [256] = {.lex_state = 183},
    [257] = {.lex_state = 183},
    [258] = {.lex_state = 183},
    [259] = {.lex_state = 178},
    [260] = {.lex_state = 130},
    [261] = {.lex_state = 130},
    [262] = {.lex_state = 184},
    [263] = {.lex_state = 130},
    [264] = {.lex_state = 130},
    [265] = {.lex_state = 130},
    [266] = {.lex_state = 130},
    [267] = {.lex_state = 130},
    [268] = {.lex_state = 130},
    [269] = {.lex_state = 135},
    [270] = {.lex_state = 184},
    [271] = {.lex_state = 184},
    [272] = {.lex_state = 184},
    [273] = {.lex_state = 184},
    [274] = {.lex_state = 184},
    [275] = {.lex_state = 164},
    [276] = {.lex_state = 135},
    [277] = {.lex_state = 130},
    [278] = {.lex_state = 185},
    [279] = {.lex_state = 130},
    [280] = {.lex_state = 130},
    [281] = {.lex_state = 130},
    [282] = {.lex_state = 130},
    [283] = {.lex_state = 130},
    [284] = {.lex_state = 130},
    [285] = {.lex_state = 185},
    [286] = {.lex_state = 185},
    [287] = {.lex_state = 185},
    [288] = {.lex_state = 185},
    [289] = {.lex_state = 185},
    [290] = {.lex_state = 167},
    [291] = {.lex_state = 158, .external_tokens = 2},
    [292] = {.lex_state = 158, .external_tokens = 2},
    [293] = {.lex_state = 158, .external_tokens = 2},
    [294] = {.lex_state = 158, .external_tokens = 2},
    [295] = {.lex_state = 186, .external_tokens = 2},
    [296] = {.lex_state = 158, .external_tokens = 2},
    [297] = {.lex_state = 167},
    [298] = {.lex_state = 168},
    [299] = {.lex_state = 168},
    [300] = {.lex_state = 169},
    [301] = {.lex_state = 160},
    [302] = {.lex_state = 167},
    [303] = {.lex_state = 168},
    [304] = {.lex_state = 168},
    [305] = {.lex_state = 169},
    [306] = {.lex_state = 135, .external_tokens = 2},
    [307] = {.lex_state = 170},
    [308] = {.lex_state = 168},
    [309] = {.lex_state = 135, .external_tokens = 2},
    [310] = {.lex_state = 170},
    [311] = {.lex_state = 169},
    [312] = {.lex_state = 135, .external_tokens = 2},
    [313] = {.lex_state = 169},
    [314] = {.lex_state = 135, .external_tokens = 2},
    [315] = {.lex_state = 172},
    [316] = {.lex_state = 135, .external_tokens = 2},
    [317] = {.lex_state = 170},
    [318] = {.lex_state = 168},
    [319] = {.lex_state = 170},
    [320] = {.lex_state = 169},
    [321] = {.lex_state = 172},
    [322] = {.lex_state = 148, .external_tokens = 2},
    [323] = {.lex_state = 135, .external_tokens = 2},
    [324] = {.lex_state = 173},
    [325] = {.lex_state = 174},
    [326] = {.lex_state = 134},
    [327] = {.lex_state = 130},
    [328] = {.lex_state = 135, .external_tokens = 2},
    [329] = {.lex_state = 175},
    [330] = {.lex_state = 134},
    [331] = {.lex_state = 135, .external_tokens = 2},
    [332] = {.lex_state = 135, .external_tokens = 2},
    [333] = {.lex_state = 178},
    [334] = {.lex_state = 130},
    [335] = {.lex_state = 181},
    [336] = {.lex_state = 135, .external_tokens = 2},
    [337] = {.lex_state = 134},
    [338] = {.lex_state = 130},
    [339] = {.lex_state = 135, .external_tokens = 2},
    [340] = {.lex_state = 175},
    [341] = {.lex_state = 134},
    [342] = {.lex_state = 135, .external_tokens = 2},
    [343] = {.lex_state = 135, .external_tokens = 2},
    [344] = {.lex_state = 178},
    [345] = {.lex_state = 130},
    [346] = {.lex_state = 181},
    [347] = {.lex_state = 135, .external_tokens = 2},
    [348] = {.lex_state = 135, .external_tokens = 2},
    [349] = {.lex_state = 183},
    [350] = {.lex_state = 133},
    [351] = {.lex_state = 130},
    [352] = {.lex_state = 135, .external_tokens = 2},
    [353] = {.lex_state = 163},
    [354] = {.lex_state = 133},
    [355] = {.lex_state = 135, .external_tokens = 2},
    [356] = {.lex_state = 135, .external_tokens = 2},
    [357] = {.lex_state = 178},
    [358] = {.lex_state = 130},
    [359] = {.lex_state = 184},
    [360] = {.lex_state = 135, .external_tokens = 2},
    [361] = {.lex_state = 186, .external_tokens = 2},
    [362] = {.lex_state = 187, .external_tokens = 2},
    [363] = {.lex_state = 189, .external_tokens = 2},
    [364] = {.lex_state = 130},
    [365] = {.lex_state = 149},
    [366] = {.lex_state = 131, .external_tokens = 2},
    [367] = {.lex_state = 149},
    [368] = {.lex_state = 167},
    [369] = {.lex_state = 131, .external_tokens = 2},
    [370] = {.lex_state = 130},
    [371] = {.lex_state = 168},
    [372] = {.lex_state = 131, .external_tokens = 2},
    [373] = {.lex_state = 130},
    [374] = {.lex_state = 167},
    [375] = {.lex_state = 167},
    [376] = {.lex_state = 127},
    [377] = {.lex_state = 190, .external_tokens = 2},
    [378] = {.lex_state = 127},
    [379] = {.lex_state = 190, .external_tokens = 2},
    [380] = {.lex_state = 190, .external_tokens = 2},
    [381] = {.lex_state = 197},
    [382] = {.lex_state = 130},
    [383] = {.lex_state = 198, .external_tokens = 3},
    [384] = {.lex_state = 204, .external_tokens = 4},
    [385] = {.lex_state = 131, .external_tokens = 2},
    [386] = {.lex_state = 148, .external_tokens = 2},
    [387] = {.lex_state = 205, .external_tokens = 2},
    [388] = {.lex_state = 130},
    [389] = {.lex_state = 130},
    [390] = {.lex_state = 130},
    [391] = {.lex_state = 132},
    [392] = {.lex_state = 130},
    [393] = {.lex_state = 127},
    [394] = {.lex_state = 127},
    [395] = {.lex_state = 204, .external_tokens = 4},
    [396] = {.lex_state = 131, .external_tokens = 2},
    [397] = {.lex_state = 204, .external_tokens = 4},
    [398] = {.lex_state = 204, .external_tokens = 4},
    [399] = {.lex_state = 204, .external_tokens = 4},
    [400] = {.lex_state = 149},
    [401] = {.lex_state = 204, .external_tokens = 4},
    [402] = {.lex_state = 205, .external_tokens = 2},
    [403] = {.lex_state = 204, .external_tokens = 4},
    [404] = {.lex_state = 204, .external_tokens = 4},
    [405] = {.lex_state = 197},
    [406] = {.lex_state = 130},
    [407] = {.lex_state = 198, .external_tokens = 3},
    [408] = {.lex_state = 204, .external_tokens = 4},
    [409] = {.lex_state = 131, .external_tokens = 2},
    [410] = {.lex_state = 204, .external_tokens = 4},
    [411] = {.lex_state = 206, .external_tokens = 4},
    [412] = {.lex_state = 204, .external_tokens = 4},
    [413] = {.lex_state = 206, .external_tokens = 4},
    [414] = {.lex_state = 169},
    [415] = {.lex_state = 167},
    [416] = {.lex_state = 168},
    [417] = {.lex_state = 132},
    [418] = {.lex_state = 198, .external_tokens = 3},
    [419] = {.lex_state = 204, .external_tokens = 4},
    [420] = {.lex_state = 189},
    [421] = {.lex_state = 207},
    [422] = {.lex_state = 132},
    [423] = {.lex_state = 198, .external_tokens = 3},
    [424] = {.lex_state = 204, .external_tokens = 4},
    [425] = {.lex_state = 132},
    [426] = {.lex_state = 209},
    [427] = {.lex_state = 210},
    [428] = {.lex_state = 168},
    [429] = {.lex_state = 168},
    [430] = {.lex_state = 169},
    [431] = {.lex_state = 209},
    [432] = {.lex_state = 210},
    [433] = {.lex_state = 168},
    [434] = {.lex_state = 168},
    [435] = {.lex_state = 169},
    [436] = {.lex_state = 132},
    [437] = {.lex_state = 211},
    [438] = {.lex_state = 211},
    [439] = {.lex_state = 169},
    [440] = {.lex_state = 132},
    [441] = {.lex_state = 127},
    [442] = {.lex_state = 169},
    [443] = {.lex_state = 207},
    [444] = {.lex_state = 132},
    [445] = {.lex_state = 130},
    [446] = {.lex_state = 167},
    [447] = {.lex_state = 132},
    [448] = {.lex_state = 211},
    [449] = {.lex_state = 169},
    [450] = {.lex_state = 207},
    [451] = {.lex_state = 168},
    [452] = {.lex_state = 130},
    [453] = {.lex_state = 212},
    [454] = {.lex_state = 213},
    [455] = {.lex_state = 130},
    [456] = {.lex_state = 130},
    [457] = {.lex_state = 130},
    [458] = {.lex_state = 130},
    [459] = {.lex_state = 130},
    [460] = {.lex_state = 130},
    [461] = {.lex_state = 130},
    [462] = {.lex_state = 213},
    [463] = {.lex_state = 213},
    [464] = {.lex_state = 213},
    [465] = {.lex_state = 213},
    [466] = {.lex_state = 213},
    [467] = {.lex_state = 130},
    [468] = {.lex_state = 214},
    [469] = {.lex_state = 130},
    [470] = {.lex_state = 130},
    [471] = {.lex_state = 130},
    [472] = {.lex_state = 130},
    [473] = {.lex_state = 130},
    [474] = {.lex_state = 130},
    [475] = {.lex_state = 214},
    [476] = {.lex_state = 214},
    [477] = {.lex_state = 214},
    [478] = {.lex_state = 214},
    [479] = {.lex_state = 214},
    [480] = {.lex_state = 130},
    [481] = {.lex_state = 198, .external_tokens = 3},
    [482] = {.lex_state = 212},
    [483] = {.lex_state = 130},
    [484] = {.lex_state = 198, .external_tokens = 3},
    [485] = {.lex_state = 204, .external_tokens = 4},
    [486] = {.lex_state = 212},
    [487] = {.lex_state = 204, .external_tokens = 4},
    [488] = {.lex_state = 212},
    [489] = {.lex_state = 198, .external_tokens = 3},
    [490] = {.lex_state = 204, .external_tokens = 4},
    [491] = {.lex_state = 131, .external_tokens = 2},
    [492] = {.lex_state = 215},
    [493] = {.lex_state = 130},
    [494] = {.lex_state = 132},
    [495] = {.lex_state = 229, .external_tokens = 4},
    [496] = {.lex_state = 204, .external_tokens = 4},
    [497] = {.lex_state = 229, .external_tokens = 4},
    [498] = {.lex_state = 132},
    [499] = {.lex_state = 232, .external_tokens = 4},
    [500] = {.lex_state = 229, .external_tokens = 4},
    [501] = {.lex_state = 204, .external_tokens = 4},
    [502] = {.lex_state = 204, .external_tokens = 4},
    [503] = {.lex_state = 198, .external_tokens = 3},
    [504] = {.lex_state = 232, .external_tokens = 4},
    [505] = {.lex_state = 198, .external_tokens = 3},
    [506] = {.lex_state = 204, .external_tokens = 4},
    [507] = {.lex_state = 213},
    [508] = {.lex_state = 130},
    [509] = {.lex_state = 198, .external_tokens = 3},
    [510] = {.lex_state = 229, .external_tokens = 4},
    [511] = {.lex_state = 176},
    [512] = {.lex_state = 198, .external_tokens = 3},
    [513] = {.lex_state = 229, .external_tokens = 4},
    [514] = {.lex_state = 215},
    [515] = {.lex_state = 204, .external_tokens = 4},
    [516] = {.lex_state = 215},
    [517] = {.lex_state = 176},
    [518] = {.lex_state = 198, .external_tokens = 3},
    [519] = {.lex_state = 233, .external_tokens = 4},
    [520] = {.lex_state = 204, .external_tokens = 4},
    [521] = {.lex_state = 178},
    [522] = {.lex_state = 130},
    [523] = {.lex_state = 132},
    [524] = {.lex_state = 214},
    [525] = {.lex_state = 130},
    [526] = {.lex_state = 212},
    [527] = {.lex_state = 130},
    [528] = {.lex_state = 214},
    [529] = {.lex_state = 214},
    [530] = {.lex_state = 198, .external_tokens = 3},
    [531] = {.lex_state = 233, .external_tokens = 4},
    [532] = {.lex_state = 204, .external_tokens = 4},
    [533] = {.lex_state = 176},
    [534] = {.lex_state = 198, .external_tokens = 3},
    [535] = {.lex_state = 235, .external_tokens = 4},
    [536] = {.lex_state = 130},
    [537] = {.lex_state = 235, .external_tokens = 4},
    [538] = {.lex_state = 204, .external_tokens = 4},
    [539] = {.lex_state = 235, .external_tokens = 4},
    [540] = {.lex_state = 235, .external_tokens = 4},
    [541] = {.lex_state = 204, .external_tokens = 4},
    [542] = {.lex_state = 176},
    [543] = {.lex_state = 198, .external_tokens = 3},
    [544] = {.lex_state = 235, .external_tokens = 4},
    [545] = {.lex_state = 169},
    [546] = {.lex_state = 132},
    [547] = {.lex_state = 198, .external_tokens = 3},
    [548] = {.lex_state = 148, .external_tokens = 2},
    [549] = {.lex_state = 189},
    [550] = {.lex_state = 132},
    [551] = {.lex_state = 198, .external_tokens = 3},
    [552] = {.lex_state = 148, .external_tokens = 2},
    [553] = {.lex_state = 212},
    [554] = {.lex_state = 198, .external_tokens = 3},
    [555] = {.lex_state = 212},
    [556] = {.lex_state = 198, .external_tokens = 3},
    [557] = {.lex_state = 148, .external_tokens = 2},
    [558] = {.lex_state = 148, .external_tokens = 2},
    [559] = {.lex_state = 198, .external_tokens = 3},
    [560] = {.lex_state = 215},
    [561] = {.lex_state = 130},
    [562] = {.lex_state = 132},
    [563] = {.lex_state = 237, .external_tokens = 2},
    [564] = {.lex_state = 148, .external_tokens = 2},
    [565] = {.lex_state = 237, .external_tokens = 2},
    [566] = {.lex_state = 132},
    [567] = {.lex_state = 238, .external_tokens = 2},
    [568] = {.lex_state = 237, .external_tokens = 2},
    [569] = {.lex_state = 148, .external_tokens = 2},
    [570] = {.lex_state = 148, .external_tokens = 2},
    [571] = {.lex_state = 198, .external_tokens = 3},
    [572] = {.lex_state = 238, .external_tokens = 2},
    [573] = {.lex_state = 198, .external_tokens = 3},
    [574] = {.lex_state = 148, .external_tokens = 2},
    [575] = {.lex_state = 213},
    [576] = {.lex_state = 130},
    [577] = {.lex_state = 198, .external_tokens = 3},
    [578] = {.lex_state = 237, .external_tokens = 2},
    [579] = {.lex_state = 176},
    [580] = {.lex_state = 198, .external_tokens = 3},
    [581] = {.lex_state = 237, .external_tokens = 2},
    [582] = {.lex_state = 176},
    [583] = {.lex_state = 198, .external_tokens = 3},
    [584] = {.lex_state = 239, .external_tokens = 2},
    [585] = {.lex_state = 148, .external_tokens = 2},
    [586] = {.lex_state = 178},
    [587] = {.lex_state = 130},
    [588] = {.lex_state = 132},
    [589] = {.lex_state = 198, .external_tokens = 3},
    [590] = {.lex_state = 239, .external_tokens = 2},
    [591] = {.lex_state = 148, .external_tokens = 2},
    [592] = {.lex_state = 176},
    [593] = {.lex_state = 198, .external_tokens = 3},
    [594] = {.lex_state = 240, .external_tokens = 2},
    [595] = {.lex_state = 130},
    [596] = {.lex_state = 240, .external_tokens = 2},
    [597] = {.lex_state = 148, .external_tokens = 2},
    [598] = {.lex_state = 240, .external_tokens = 2},
    [599] = {.lex_state = 240, .external_tokens = 2},
    [600] = {.lex_state = 148, .external_tokens = 2},
    [601] = {.lex_state = 176},
    [602] = {.lex_state = 198, .external_tokens = 3},
    [603] = {.lex_state = 240, .external_tokens = 2},
    [604] = {.lex_state = 130},
    [605] = {.lex_state = 131, .external_tokens = 2},
    [606] = {.lex_state = 186, .external_tokens = 2},
    [607] = {.lex_state = 130},
    [608] = {.lex_state = 130},
    [609] = {.lex_state = 130},
    [610] = {.lex_state = 130},
    [611] = {.lex_state = 130},
    [612] = {.lex_state = 130},
    [613] = {.lex_state = 130},
    [614] = {.lex_state = 241, .external_tokens = 2},
    [615] = {.lex_state = 130},
    [616] = {.lex_state = 186, .external_tokens = 2},
    [617] = {.lex_state = 186, .external_tokens = 2},
    [618] = {.lex_state = 186, .external_tokens = 2},
    [619] = {.lex_state = 186, .external_tokens = 2},
    [620] = {.lex_state = 186, .external_tokens = 2},
    [621] = {.lex_state = 186, .external_tokens = 2},
    [622] = {.lex_state = 186, .external_tokens = 2},
    [623] = {.lex_state = 131, .external_tokens = 2},
    [624] = {.lex_state = 186, .external_tokens = 2},
    [625] = {.lex_state = 241, .external_tokens = 2},
    [626] = {.lex_state = 242},
    [627] = {.lex_state = 243},
    [628] = {.lex_state = 244},
    [629] = {.lex_state = 242},
    [630] = {.lex_state = 245},
    [631] = {.lex_state = 242},
    [632] = {.lex_state = 244},
    [633] = {.lex_state = 245},
    [634] = {.lex_state = 127},
    [635] = {.lex_state = 131, .external_tokens = 2},
    [636] = {.lex_state = 131, .external_tokens = 2},
    [637] = {.lex_state = 241, .external_tokens = 2},
    [638] = {.lex_state = 246, .external_tokens = 2},
    [639] = {.lex_state = 247, .external_tokens = 2},
    [640] = {.lex_state = 127},
    [641] = {.lex_state = 168, .external_tokens = 2},
    [642] = {.lex_state = 247, .external_tokens = 2},
    [643] = {.lex_state = 168, .external_tokens = 2},
    [644] = {.lex_state = 248, .external_tokens = 2},
    [645] = {.lex_state = 168, .external_tokens = 2},
    [646] = {.lex_state = 168, .external_tokens = 2},
    [647] = {.lex_state = 248, .external_tokens = 2},
    [648] = {.lex_state = 169},
    [649] = {.lex_state = 168},
    [650] = {.lex_state = 248},
    [651] = {.lex_state = 247},
    [652] = {.lex_state = 127},
    [653] = {.lex_state = 168},
    [654] = {.lex_state = 247},
    [655] = {.lex_state = 168},
    [656] = {.lex_state = 248},
    [657] = {.lex_state = 168},
    [658] = {.lex_state = 168},
    [659] = {.lex_state = 248},
    [660] = {.lex_state = 131, .external_tokens = 2},
    [661] = {.lex_state = 127},
    [662] = {.lex_state = 243},
    [663] = {.lex_state = 127},
    [664] = {.lex_state = 243},
    [665] = {.lex_state = 243},
    [666] = {.lex_state = 127},
    [667] = {.lex_state = 131, .external_tokens = 2},
    [668] = {.lex_state = 169},
    [669] = {.lex_state = 131, .external_tokens = 2},
    [670] = {.lex_state = 131, .external_tokens = 2},
    [671] = {.lex_state = 245},
    [672] = {.lex_state = 242},
    [673] = {.lex_state = 172},
    [674] = {.lex_state = 135, .external_tokens = 2},
    [675] = {.lex_state = 249, .external_tokens = 2},
    [676] = {.lex_state = 130},
    [677] = {.lex_state = 250, .external_tokens = 2},
    [678] = {.lex_state = 130},
    [679] = {.lex_state = 198, .external_tokens = 3},
    [680] = {.lex_state = 130},
    [681] = {.lex_state = 132},
    [682] = {.lex_state = 130},
    [683] = {.lex_state = 130},
    [684] = {.lex_state = 130},
    [685] = {.lex_state = 132},
    [686] = {.lex_state = 130},
    [687] = {.lex_state = 132},
    [688] = {.lex_state = 130},
    [689] = {.lex_state = 127},
    [690] = {.lex_state = 130},
    [691] = {.lex_state = 127},
    [692] = {.lex_state = 130},
    [693] = {.lex_state = 130},
    [694] = {.lex_state = 130},
    [695] = {.lex_state = 165},
    [696] = {.lex_state = 163},
    [697] = {.lex_state = 135, .external_tokens = 2},
    [698] = {.lex_state = 135, .external_tokens = 2},
    [699] = {.lex_state = 251, .external_tokens = 2},
    [700] = {.lex_state = 205, .external_tokens = 5},
    [701] = {.lex_state = 204, .external_tokens = 4},
    [702] = {.lex_state = 205, .external_tokens = 5},
    [703] = {.lex_state = 148, .external_tokens = 5},
    [704] = {.lex_state = 131, .external_tokens = 2},
    [705] = {.lex_state = 169, .external_tokens = 2},
    [706] = {.lex_state = 168, .external_tokens = 2},
    [707] = {.lex_state = 131, .external_tokens = 2},
    [708] = {.lex_state = 148, .external_tokens = 5},
    [709] = {.lex_state = 148, .external_tokens = 5},
    [710] = {.lex_state = 240, .external_tokens = 5},
    [711] = {.lex_state = 238, .external_tokens = 5},
    [712] = {.lex_state = 237, .external_tokens = 5},
    [713] = {.lex_state = 148, .external_tokens = 5},
    [714] = {.lex_state = 212},
    [715] = {.lex_state = 148, .external_tokens = 5},
    [716] = {.lex_state = 132},
    [717] = {.lex_state = 168},
    [718] = {.lex_state = 168},
    [719] = {.lex_state = 169},
    [720] = {.lex_state = 149},
    [721] = {.lex_state = 205, .external_tokens = 5},
    [722] = {.lex_state = 253, .external_tokens = 2},
    [723] = {.lex_state = 254, .external_tokens = 2},
    [724] = {.lex_state = 135, .external_tokens = 2},
    [725] = {.lex_state = 168},
    [726] = {.lex_state = 168},
    [727] = {.lex_state = 169},
    [728] = {.lex_state = 174},
    [729] = {.lex_state = 148, .external_tokens = 5},
    [730] = {.lex_state = 255, .external_tokens = 2},
    [731] = {.lex_state = 240, .external_tokens = 5},
    [732] = {.lex_state = 237, .external_tokens = 5},
    [733] = {.lex_state = 212},
    [734] = {.lex_state = 149},
    [735] = {.lex_state = 168},
    [736] = {.lex_state = 135, .external_tokens = 2},
    [737] = {.lex_state = 170},
    [738] = {.lex_state = 169},
    [739] = {.lex_state = 135, .external_tokens = 2},
    [740] = {.lex_state = 148, .external_tokens = 5},
    [741] = {.lex_state = 198, .external_tokens = 3},
    [742] = {.lex_state = 131, .external_tokens = 2},
    [743] = {.lex_state = 148, .external_tokens = 5},
    [744] = {.lex_state = 205, .external_tokens = 5},
    [745] = {.lex_state = 204, .external_tokens = 4},
    [746] = {.lex_state = 205, .external_tokens = 5},
    [747] = {.lex_state = 238, .external_tokens = 5},
    [748] = {.lex_state = 237, .external_tokens = 5},
    [749] = {.lex_state = 148, .external_tokens = 5},
    [750] = {.lex_state = 148, .external_tokens = 5},
    [751] = {.lex_state = 240, .external_tokens = 5},
    [752] = {.lex_state = 148, .external_tokens = 5},
    [753] = {.lex_state = 198, .external_tokens = 3},
    [754] = {.lex_state = 238, .external_tokens = 5},
    [755] = {.lex_state = 256},
    [756] = {.lex_state = 130},
    [757] = {.lex_state = 257, .external_tokens = 2},
    [758] = {.lex_state = 130},
    [759] = {.lex_state = 257, .external_tokens = 2},
    [760] = {.lex_state = 257, .external_tokens = 2},
    [761] = {.lex_state = 130},
    [762] = {.lex_state = 148, .external_tokens = 5},
    [763] = {.lex_state = 131, .external_tokens = 2},
    [764] = {.lex_state = 148, .external_tokens = 5},
    [765] = {.lex_state = 178},
    [766] = {.lex_state = 130},
    [767] = {.lex_state = 132},
    [768] = {.lex_state = 198, .external_tokens = 3},
    [769] = {.lex_state = 239, .external_tokens = 5},
    [770] = {.lex_state = 148, .external_tokens = 5},
    [771] = {.lex_state = 135, .external_tokens = 2},
    [772] = {.lex_state = 135, .external_tokens = 2},
    [773] = {.lex_state = 170},
    [774] = {.lex_state = 169},
    [775] = {.lex_state = 135, .external_tokens = 2},
    [776] = {.lex_state = 172},
    [777] = {.lex_state = 135, .external_tokens = 2},
    [778] = {.lex_state = 249},
    [779] = {.lex_state = 130},
    [780] = {.lex_state = 198, .external_tokens = 3},
    [781] = {.lex_state = 130},
    [782] = {.lex_state = 135, .external_tokens = 2},
    [783] = {.lex_state = 135, .external_tokens = 2},
    [784] = {.lex_state = 135, .external_tokens = 2},
    [785] = {.lex_state = 178},
    [786] = {.lex_state = 130},
    [787] = {.lex_state = 130},
    [788] = {.lex_state = 258},
    [789] = {.lex_state = 130},
    [790] = {.lex_state = 258},
    [791] = {.lex_state = 258},
    [792] = {.lex_state = 130},
    [793] = {.lex_state = 205, .external_tokens = 5},
    [794] = {.lex_state = 182, .external_tokens = 2},
    [795] = {.lex_state = 130},
    [796] = {.lex_state = 182, .external_tokens = 2},
    [797] = {.lex_state = 240, .external_tokens = 5},
    [798] = {.lex_state = 148, .external_tokens = 5},
    [799] = {.lex_state = 182, .external_tokens = 2},
    [800] = {.lex_state = 214},
    [801] = {.lex_state = 198, .external_tokens = 3},
    [802] = {.lex_state = 237, .external_tokens = 5},
    [803] = {.lex_state = 135, .external_tokens = 2},
    [804] = {.lex_state = 257, .external_tokens = 2},
    [805] = {.lex_state = 245},
    [806] = {.lex_state = 127},
    [807] = {.lex_state = 169},
    [808] = {.lex_state = 131, .external_tokens = 2},
    [809] = {.lex_state = 132},
    [810] = {.lex_state = 198, .external_tokens = 3},
    [811] = {.lex_state = 148, .external_tokens = 5},
    [812] = {.lex_state = 148, .external_tokens = 5},
    [813] = {.lex_state = 237, .external_tokens = 5},
    [814] = {.lex_state = 148, .external_tokens = 5},
    [815] = {.lex_state = 132},
    [816] = {.lex_state = 132},
    [817] = {.lex_state = 211},
    [818] = {.lex_state = 169},
    [819] = {.lex_state = 132},
    [820] = {.lex_state = 207},
    [821] = {.lex_state = 132},
    [822] = {.lex_state = 198, .external_tokens = 3},
    [823] = {.lex_state = 148, .external_tokens = 5},
    [824] = {.lex_state = 198, .external_tokens = 3},
    [825] = {.lex_state = 148, .external_tokens = 5},
    [826] = {.lex_state = 205, .external_tokens = 5},
    [827] = {.lex_state = 259},
    [828] = {.lex_state = 198, .external_tokens = 3},
    [829] = {.lex_state = 148, .external_tokens = 5},
    [830] = {.lex_state = 166},
    [831] = {.lex_state = 169},
    [832] = {.lex_state = 183},
    [833] = {.lex_state = 165},
    [834] = {.lex_state = 135, .external_tokens = 2},
    [835] = {.lex_state = 164},
    [836] = {.lex_state = 135, .external_tokens = 2},
    [837] = {.lex_state = 135, .external_tokens = 2},
    [838] = {.lex_state = 197},
    [839] = {.lex_state = 130},
    [840] = {.lex_state = 167},
    [841] = {.lex_state = 189},
    [842] = {.lex_state = 212},
    [843] = {.lex_state = 198, .external_tokens = 3},
    [844] = {.lex_state = 148, .external_tokens = 5},
    [845] = {.lex_state = 213},
    [846] = {.lex_state = 130},
    [847] = {.lex_state = 198, .external_tokens = 3},
    [848] = {.lex_state = 237, .external_tokens = 5},
    [849] = {.lex_state = 176},
    [850] = {.lex_state = 198, .external_tokens = 3},
    [851] = {.lex_state = 215},
    [852] = {.lex_state = 176},
    [853] = {.lex_state = 198, .external_tokens = 3},
    [854] = {.lex_state = 239, .external_tokens = 5},
    [855] = {.lex_state = 148, .external_tokens = 5},
    [856] = {.lex_state = 130},
    [857] = {.lex_state = 260},
    [858] = {.lex_state = 130},
    [859] = {.lex_state = 135, .external_tokens = 2},
    [860] = {.lex_state = 260},
    [861] = {.lex_state = 260},
    [862] = {.lex_state = 178},
    [863] = {.lex_state = 176},
    [864] = {.lex_state = 198, .external_tokens = 3},
    [865] = {.lex_state = 240, .external_tokens = 5},
    [866] = {.lex_state = 176},
    [867] = {.lex_state = 198, .external_tokens = 3},
    [868] = {.lex_state = 240, .external_tokens = 5},
    [869] = {.lex_state = 148, .external_tokens = 5},
    [870] = {.lex_state = 135, .external_tokens = 2},
    [871] = {.lex_state = 135, .external_tokens = 2},
    [872] = {.lex_state = 261, .external_tokens = 2},
    [873] = {.lex_state = 135, .external_tokens = 2},
    [874] = {.lex_state = 130},
    [875] = {.lex_state = 163},
    [876] = {.lex_state = 135, .external_tokens = 2},
    [877] = {.lex_state = 135, .external_tokens = 2},
    [878] = {.lex_state = 262, .external_tokens = 2},
    [879] = {.lex_state = 168, .external_tokens = 2},
    [880] = {.lex_state = 212},
    [881] = {.lex_state = 248, .external_tokens = 2},
    [882] = {.lex_state = 263, .external_tokens = 2},
    [883] = {.lex_state = 168},
    [884] = {.lex_state = 169},
    [885] = {.lex_state = 175},
    [886] = {.lex_state = 135, .external_tokens = 2},
    [887] = {.lex_state = 130},
    [888] = {.lex_state = 198, .external_tokens = 3},
    [889] = {.lex_state = 263, .external_tokens = 2},
    [890] = {.lex_state = 130},
    [891] = {.lex_state = 177, .external_tokens = 2},
    [892] = {.lex_state = 130},
    [893] = {.lex_state = 177, .external_tokens = 2},
    [894] = {.lex_state = 177, .external_tokens = 2},
    [895] = {.lex_state = 263, .external_tokens = 2},
    [896] = {.lex_state = 250},
    [897] = {.lex_state = 264},
    [898] = {.lex_state = 167},
    [899] = {.lex_state = 135, .external_tokens = 2},
    [900] = {.lex_state = 172},
    [901] = {.lex_state = 168},
    [902] = {.lex_state = 167},
    [903] = {.lex_state = 190, .external_tokens = 2},
    [904] = {.lex_state = 131, .external_tokens = 2},
};

enum {
    ts_external_token__newline,
    ts_external_token__indent,
    ts_external_token__dedent,
};

TSSymbol ts_external_token_symbol_map[EXTERNAL_TOKEN_COUNT] = {
    [ts_external_token__newline] = sym__newline,
    [ts_external_token__indent] = sym__indent,
    [ts_external_token__dedent] = sym__dedent,
};

static bool ts_external_token_lists[6][EXTERNAL_TOKEN_COUNT] = {
    [1] = {
        [ts_external_token__newline] = true,
        [ts_external_token__indent] = true,
        [ts_external_token__dedent] = true,
    },
    [2] = {
        [ts_external_token__newline] = true,
    },
    [3] = {
        [ts_external_token__indent] = true,
    },
    [4] = {
        [ts_external_token__dedent] = true,
    },
    [5] = {
        [ts_external_token__newline] = true,
        [ts_external_token__dedent] = true,
    },
};

static unsigned short ts_parse_table[STATE_COUNT][SYMBOL_COUNT] = {
    [0] = {
        [sym_module] = STATE(20),
        [sym__statement] = STATE(703),
        [sym__simple_statement] = STATE(704),
        [sym_import_statement] = STATE(7),
        [sym_import_from_statement] = STATE(7),
        [sym__import_list] = STATE(705),
        [sym_aliased_import] = STATE(706),
        [sym_wildcard_import] = STATE(707),
        [sym_print_statement] = STATE(7),
        [sym_expression_statement] = STATE(7),
        [sym_return_statement] = STATE(7),
        [sym_delete_statement] = STATE(7),
        [sym__compound_statement] = STATE(708),
        [sym_if_statement] = STATE(709),
        [sym_elif_clause] = STATE(710),
        [sym_else_clause] = STATE(711),
        [sym_for_statement] = STATE(709),
        [sym_while_statement] = STATE(709),
        [sym_try_statement] = STATE(709),
        [sym_except_clause] = STATE(712),
        [sym_finally_clause] = STATE(713),
        [sym_with_statement] = STATE(709),
        [sym_with_item] = STATE(714),
        [sym_function_definition] = STATE(715),
        [sym_parameters] = STATE(716),
        [sym_default_parameter] = STATE(717),
        [sym_list_splat_parameter] = STATE(718),
        [sym_dictionary_splat_parameter] = STATE(719),
        [sym_class_definition] = STATE(715),
        [sym_decorated_definition] = STATE(709),
        [sym_decorator] = STATE(720),
        [sym__suite] = STATE(721),
        [sym_arguments] = STATE(366),
        [sym_expression_list] = STATE(722),
        [sym_dotted_name] = STATE(723),
        [sym__expression] = STATE(724),
        [sym_binary_operator] = STATE(19),
        [sym_unary_operator] = STATE(19),
        [sym_subscript] = STATE(19),
        [sym_call] = STATE(19),
        [sym_keyword_argument] = STATE(725),
        [sym_list_splat_argument] = STATE(726),
        [sym_dictionary_splat_argument] = STATE(727),
        [sym_list] = STATE(19),
        [sym_list_comprehension] = STATE(19),
        [sym_dictionary] = STATE(19),
        [sym_dictionary_comprehension] = STATE(19),
        [sym_pair] = STATE(728),
        [sym_set] = STATE(19),
        [sym_set_comprehension] = STATE(19),
        [aux_sym_module_repeat1] = STATE(729),
        [aux_sym_import_from_statement_repeat1] = STATE(629),
        [aux_sym__import_list_repeat1] = STATE(641),
        [aux_sym_print_statement_repeat1] = STATE(730),
        [aux_sym_if_statement_repeat1] = STATE(731),
        [aux_sym_try_statement_repeat1] = STATE(732),
        [aux_sym_with_statement_repeat1] = STATE(733),
        [aux_sym_parameters_repeat1] = STATE(431),
        [aux_sym_decorated_definition_repeat1] = STATE(734),
        [aux_sym_dotted_name_repeat1] = STATE(377),
        [aux_sym_subscript_repeat1] = STATE(57),
        [aux_sym_call_repeat1] = STATE(301),
        [aux_sym_call_repeat2] = STATE(735),
        [aux_sym_dictionary_repeat1] = STATE(329),
        [ts_builtin_sym_end] = ACTIONS(1),
        [anon_sym_SEMI] = ACTIONS(3),
        [anon_sym_import] = ACTIONS(5),
        [anon_sym_from] = ACTIONS(7),
        [anon_sym_DOT] = ACTIONS(9),
        [anon_sym_LPAREN] = ACTIONS(11),
        [anon_sym_RPAREN] = ACTIONS(13),
        [anon_sym_COMMA] = ACTIONS(15),
        [anon_sym_as] = ACTIONS(17),
        [anon_sym_STAR] = ACTIONS(19),
        [anon_sym_print] = ACTIONS(21),
        [anon_sym_return] = ACTIONS(23),
        [anon_sym_del] = ACTIONS(25),
        [sym_pass_statement] = ACTIONS(27),
        [sym_break_statement] = ACTIONS(27),
        [sym_continue_statement] = ACTIONS(27),
        [anon_sym_if] = ACTIONS(29),
        [anon_sym_COLON] = ACTIONS(31),
        [anon_sym_elif] = ACTIONS(33),
        [anon_sym_else] = ACTIONS(35),
        [anon_sym_for] = ACTIONS(37),
        [anon_sym_in] = ACTIONS(39),
        [anon_sym_while] = ACTIONS(41),
        [anon_sym_try] = ACTIONS(43),
        [anon_sym_except] = ACTIONS(45),
        [anon_sym_finally] = ACTIONS(47),
        [anon_sym_with] = ACTIONS(49),
        [anon_sym_def] = ACTIONS(51),
        [anon_sym_EQ] = ACTIONS(53),
        [anon_sym_class] = ACTIONS(55),
        [anon_sym_AT] = ACTIONS(57),
        [anon_sym_PLUS] = ACTIONS(59),
        [anon_sym_DASH] = ACTIONS(59),
        [anon_sym_SLASH] = ACTIONS(59),
        [anon_sym_STAR_STAR] = ACTIONS(61),
        [anon_sym_PIPE] = ACTIONS(59),
        [anon_sym_AMP] = ACTIONS(59),
        [anon_sym_CARET] = ACTIONS(59),
        [anon_sym_LT_LT] = ACTIONS(59),
        [anon_sym_GT_GT] = ACTIONS(59),
        [anon_sym_and] = ACTIONS(63),
        [anon_sym_or] = ACTIONS(63),
        [anon_sym_not] = ACTIONS(65),
        [anon_sym_LBRACK] = ACTIONS(67),
        [anon_sym_DOT_DOT_DOT] = ACTIONS(69),
        [anon_sym_RBRACK] = ACTIONS(71),
        [anon_sym_LBRACE] = ACTIONS(73),
        [anon_sym_RBRACE] = ACTIONS(75),
        [sym_string] = ACTIONS(77),
        [sym_number] = ACTIONS(79),
        [sym_identifier] = ACTIONS(81),
        [sym_comment] = ACTIONS(83),
        [sym__newline] = ACTIONS(85),
        [sym__indent] = ACTIONS(87),
        [sym__dedent] = ACTIONS(89),
    },
    [1] = {
        [sym_module] = STATE(20),
        [sym__statement] = STATE(21),
        [sym__simple_statement] = STATE(22),
        [sym_import_statement] = STATE(7),
        [sym_import_from_statement] = STATE(7),
        [sym_print_statement] = STATE(7),
        [sym_expression_statement] = STATE(7),
        [sym_return_statement] = STATE(7),
        [sym_delete_statement] = STATE(7),
        [sym__compound_statement] = STATE(23),
        [sym_if_statement] = STATE(24),
        [sym_for_statement] = STATE(24),
        [sym_while_statement] = STATE(24),
        [sym_try_statement] = STATE(24),
        [sym_with_statement] = STATE(24),
        [sym_function_definition] = STATE(24),
        [sym_class_definition] = STATE(24),
        [sym_decorated_definition] = STATE(24),
        [sym_decorator] = STATE(25),
        [sym__expression] = STATE(26),
        [sym_binary_operator] = STATE(19),
        [sym_unary_operator] = STATE(19),
        [sym_subscript] = STATE(19),
        [sym_call] = STATE(19),
        [sym_list] = STATE(19),
        [sym_list_comprehension] = STATE(19),
        [sym_dictionary] = STATE(19),
        [sym_dictionary_comprehension] = STATE(19),
        [sym_set] = STATE(19),
        [sym_set_comprehension] = STATE(19),
        [aux_sym_module_repeat1] = STATE(27),
        [aux_sym_decorated_definition_repeat1] = STATE(28),
        [ts_builtin_sym_end] = ACTIONS(91),
        [anon_sym_import] = ACTIONS(93),
        [anon_sym_from] = ACTIONS(95),
        [anon_sym_print] = ACTIONS(97),
        [anon_sym_return] = ACTIONS(99),
        [anon_sym_del] = ACTIONS(101),
        [sym_pass_statement] = ACTIONS(103),
        [sym_break_statement] = ACTIONS(103),
        [sym_continue_statement] = ACTIONS(103),
        [anon_sym_if] = ACTIONS(105),
        [anon_sym_for] = ACTIONS(107),
        [anon_sym_while] = ACTIONS(109),
        [anon_sym_try] = ACTIONS(111),
        [anon_sym_with] = ACTIONS(113),
        [anon_sym_def] = ACTIONS(115),
        [anon_sym_class] = ACTIONS(117),
        [anon_sym_AT] = ACTIONS(119),
        [anon_sym_not] = ACTIONS(121),
        [anon_sym_LBRACK] = ACTIONS(123),
        [anon_sym_LBRACE] = ACTIONS(125),
        [sym_string] = ACTIONS(127),
        [sym_number] = ACTIONS(129),
        [sym_identifier] = ACTIONS(131),
        [sym_comment] = ACTIONS(83),
    },
    [2] = {
        [sym__import_list] = STATE(670),
        [sym_aliased_import] = STATE(637),
        [sym_dotted_name] = STATE(638),
        [sym_identifier] = ACTIONS(133),
        [sym_comment] = ACTIONS(83),
    },
    [3] = {
        [sym_dotted_name] = STATE(628),
        [aux_sym_import_from_statement_repeat1] = STATE(629),
        [anon_sym_DOT] = ACTIONS(135),
        [sym_identifier] = ACTIONS(137),
        [sym_comment] = ACTIONS(83),
    },
    [4] = {
        [sym__expression] = STATE(624),
        [sym_binary_operator] = STATE(19),
        [sym_unary_operator] = STATE(19),
        [sym_subscript] = STATE(19),
        [sym_call] = STATE(19),
        [sym_list] = STATE(19),
        [sym_list_comprehension] = STATE(19),
        [sym_dictionary] = STATE(19),
        [sym_dictionary_comprehension] = STATE(19),
        [sym_set] = STATE(19),
        [sym_set_comprehension] = STATE(19),
        [anon_sym_not] = ACTIONS(139),
        [anon_sym_LBRACK] = ACTIONS(123),
        [anon_sym_LBRACE] = ACTIONS(125),
        [sym_string] = ACTIONS(127),
        [sym_number] = ACTIONS(129),
        [sym_identifier] = ACTIONS(131),
        [sym_comment] = ACTIONS(83),
    },
    [5] = {
        [sym_expression_list] = STATE(623),
        [sym__expression] = STATE(606),
        [sym_binary_operator] = STATE(19),
        [sym_unary_operator] = STATE(19),
        [sym_subscript] = STATE(19),
        [sym_call] = STATE(19),
        [sym_list] = STATE(19),
        [sym_list_comprehension] = STATE(19),
        [sym_dictionary] = STATE(19),
        [sym_dictionary_comprehension] = STATE(19),
        [sym_set] = STATE(19),
        [sym_set_comprehension] = STATE(19),
        [anon_sym_not] = ACTIONS(139),
        [anon_sym_LBRACK] = ACTIONS(123),
        [anon_sym_LBRACE] = ACTIONS(125),
        [sym_string] = ACTIONS(127),
        [sym_number] = ACTIONS(129),
        [sym_identifier] = ACTIONS(131),
        [sym_comment] = ACTIONS(83),
    },
    [6] = {
        [sym_expression_list] = STATE(605),
        [sym__expression] = STATE(606),
        [sym_binary_operator] = STATE(19),
        [sym_unary_operator] = STATE(19),
        [sym_subscript] = STATE(19),
        [sym_call] = STATE(19),
        [sym_list] = STATE(19),
        [sym_list_comprehension] = STATE(19),
        [sym_dictionary] = STATE(19),
        [sym_dictionary_comprehension] = STATE(19),
        [sym_set] = STATE(19),
        [sym_set_comprehension] = STATE(19),
        [anon_sym_not] = ACTIONS(139),
        [anon_sym_LBRACK] = ACTIONS(123),
        [anon_sym_LBRACE] = ACTIONS(125),
        [sym_string] = ACTIONS(127),
        [sym_number] = ACTIONS(129),
        [sym_identifier] = ACTIONS(131),
        [sym_comment] = ACTIONS(83),
    },
    [7] = {
        [sym_comment] = ACTIONS(83),
        [sym__newline] = ACTIONS(141),
    },
    [8] = {
        [sym__expression] = STATE(592),
        [sym_binary_operator] = STATE(45),
        [sym_unary_operator] = STATE(45),
        [sym_subscript] = STATE(45),
        [sym_call] = STATE(45),
        [sym_list] = STATE(45),
        [sym_list_comprehension] = STATE(45),
        [sym_dictionary] = STATE(45),
        [sym_dictionary_comprehension] = STATE(45),
        [sym_set] = STATE(45),
        [sym_set_comprehension] = STATE(45),
        [anon_sym_not] = ACTIONS(143),
        [anon_sym_LBRACK] = ACTIONS(145),
        [anon_sym_LBRACE] = ACTIONS(147),
        [sym_string] = ACTIONS(149),
        [sym_number] = ACTIONS(151),
        [sym_identifier] = ACTIONS(153),
        [sym_comment] = ACTIONS(83),
    },
    [9] = {
        [sym_expression_list] = STATE(586),
        [sym__expression] = STATE(166),
        [sym_binary_operator] = STATE(45),
        [sym_unary_operator] = STATE(45),
        [sym_subscript] = STATE(45),
        [sym_call] = STATE(45),
        [sym_list] = STATE(45),
        [sym_list_comprehension] = STATE(45),
        [sym_dictionary] = STATE(45),
        [sym_dictionary_comprehension] = STATE(45),
        [sym_set] = STATE(45),
        [sym_set_comprehension] = STATE(45),
        [anon_sym_not] = ACTIONS(155),
        [anon_sym_LBRACK] = ACTIONS(145),
        [anon_sym_LBRACE] = ACTIONS(147),
        [sym_string] = ACTIONS(149),
        [sym_number] = ACTIONS(151),
        [sym_identifier] = ACTIONS(153),
        [sym_comment] = ACTIONS(83),
    },
    [10] = {
        [sym__expression] = STATE(582),
        [sym_binary_operator] = STATE(45),
        [sym_unary_operator] = STATE(45),
        [sym_subscript] = STATE(45),
        [sym_call] = STATE(45),
        [sym_list] = STATE(45),
        [sym_list_comprehension] = STATE(45),
        [sym_dictionary] = STATE(45),
        [sym_dictionary_comprehension] = STATE(45),
        [sym_set] = STATE(45),
        [sym_set_comprehension] = STATE(45),
        [anon_sym_not] = ACTIONS(143),
        [anon_sym_LBRACK] = ACTIONS(145),
        [anon_sym_LBRACE] = ACTIONS(147),
        [sym_string] = ACTIONS(149),
        [sym_number] = ACTIONS(151),
        [sym_identifier] = ACTIONS(153),
        [sym_comment] = ACTIONS(83),
    },
    [11] = {
        [anon_sym_COLON] = ACTIONS(157),
        [sym_comment] = ACTIONS(83),
    },
    [12] = {
        [sym_with_item] = STATE(553),
        [sym__expression] = STATE(454),
        [sym_binary_operator] = STATE(45),
        [sym_unary_operator] = STATE(45),
        [sym_subscript] = STATE(45),
        [sym_call] = STATE(45),
        [sym_list] = STATE(45),
        [sym_list_comprehension] = STATE(45),
        [sym_dictionary] = STATE(45),
        [sym_dictionary_comprehension] = STATE(45),
        [sym_set] = STATE(45),
        [sym_set_comprehension] = STATE(45),
        [anon_sym_not] = ACTIONS(159),
        [anon_sym_LBRACK] = ACTIONS(145),
        [anon_sym_LBRACE] = ACTIONS(147),
        [sym_string] = ACTIONS(149),
        [sym_number] = ACTIONS(151),
        [sym_identifier] = ACTIONS(153),
        [sym_comment] = ACTIONS(83),
    },
    [13] = {
        [sym_identifier] = ACTIONS(161),
        [sym_comment] = ACTIONS(83),
    },
    [14] = {
        [sym_identifier] = ACTIONS(163),
        [sym_comment] = ACTIONS(83),
    },
    [15] = {
        [sym_dotted_name] = STATE(363),
        [sym_identifier] = ACTIONS(133),
        [sym_comment] = ACTIONS(83),
    },
    [16] = {
        [sym__expression] = STATE(361),
        [sym_binary_operator] = STATE(19),
        [sym_unary_operator] = STATE(19),
        [sym_subscript] = STATE(19),
        [sym_call] = STATE(19),
        [sym_list] = STATE(19),
        [sym_list_comprehension] = STATE(19),
        [sym_dictionary] = STATE(19),
        [sym_dictionary_comprehension] = STATE(19),
        [sym_set] = STATE(19),
        [sym_set_comprehension] = STATE(19),
        [anon_sym_not] = ACTIONS(121),
        [anon_sym_LBRACK] = ACTIONS(123),
        [anon_sym_LBRACE] = ACTIONS(125),
        [sym_string] = ACTIONS(127),
        [sym_number] = ACTIONS(129),
        [sym_identifier] = ACTIONS(131),
        [sym_comment] = ACTIONS(83),
    },
    [17] = {
        [sym__expression] = STATE(349),
        [sym_binary_operator] = STATE(45),
        [sym_unary_operator] = STATE(45),
        [sym_subscript] = STATE(45),
        [sym_call] = STATE(45),
        [sym_list] = STATE(45),
        [sym_list_comprehension] = STATE(45),
        [sym_dictionary] = STATE(45),
        [sym_dictionary_comprehension] = STATE(45),
        [sym_set] = STATE(45),
        [sym_set_comprehension] = STATE(45),
        [anon_sym_not] = ACTIONS(165),
        [anon_sym_LBRACK] = ACTIONS(145),
        [anon_sym_RBRACK] = ACTIONS(167),
        [anon_sym_LBRACE] = ACTIONS(147),
        [sym_string] = ACTIONS(149),
        [sym_number] = ACTIONS(151),
        [sym_identifier] = ACTIONS(153),
        [sym_comment] = ACTIONS(83),
    },
    [18] = {
        [sym__expression] = STATE(324),
        [sym_binary_operator] = STATE(45),
        [sym_unary_operator] = STATE(45),
        [sym_subscript] = STATE(45),
        [sym_call] = STATE(45),
        [sym_list] = STATE(45),
        [sym_list_comprehension] = STATE(45),
        [sym_dictionary] = STATE(45),
        [sym_dictionary_comprehension] = STATE(45),
        [sym_pair] = STATE(325),
        [sym_set] = STATE(45),
        [sym_set_comprehension] = STATE(45),
        [anon_sym_not] = ACTIONS(169),
        [anon_sym_LBRACK] = ACTIONS(145),
        [anon_sym_LBRACE] = ACTIONS(147),
        [anon_sym_RBRACE] = ACTIONS(171),
        [sym_string] = ACTIONS(149),
        [sym_number] = ACTIONS(151),
        [sym_identifier] = ACTIONS(153),
        [sym_comment] = ACTIONS(83),
    },
    [19] = {
        [anon_sym_LPAREN] = ACTIONS(173),
        [anon_sym_RPAREN] = ACTIONS(173),
        [anon_sym_COMMA] = ACTIONS(173),
        [anon_sym_as] = ACTIONS(173),
        [anon_sym_STAR] = ACTIONS(175),
        [anon_sym_COLON] = ACTIONS(173),
        [anon_sym_for] = ACTIONS(173),
        [anon_sym_in] = ACTIONS(173),
        [anon_sym_PLUS] = ACTIONS(173),
        [anon_sym_DASH] = ACTIONS(173),
        [anon_sym_SLASH] = ACTIONS(173),
        [anon_sym_STAR_STAR] = ACTIONS(173),
        [anon_sym_PIPE] = ACTIONS(173),
        [anon_sym_AMP] = ACTIONS(173),
        [anon_sym_CARET] = ACTIONS(173),
        [anon_sym_LT_LT] = ACTIONS(173),
        [anon_sym_GT_GT] = ACTIONS(173),
        [anon_sym_and] = ACTIONS(173),
        [anon_sym_or] = ACTIONS(173),
        [anon_sym_LBRACK] = ACTIONS(173),
        [anon_sym_RBRACK] = ACTIONS(173),
        [anon_sym_RBRACE] = ACTIONS(173),
        [sym_comment] = ACTIONS(83),
        [sym__newline] = ACTIONS(173),
    },
    [20] = {
        [ts_builtin_sym_end] = ACTIONS(177),
        [sym_comment] = ACTIONS(83),
    },
    [21] = {
        [ts_builtin_sym_end] = ACTIONS(179),
        [anon_sym_SEMI] = ACTIONS(179),
        [anon_sym_import] = ACTIONS(181),
        [anon_sym_from] = ACTIONS(181),
        [anon_sym_print] = ACTIONS(181),
        [anon_sym_return] = ACTIONS(181),
        [anon_sym_del] = ACTIONS(181),
        [sym_pass_statement] = ACTIONS(181),
        [sym_break_statement] = ACTIONS(181),
        [sym_continue_statement] = ACTIONS(181),
        [anon_sym_if] = ACTIONS(181),
        [anon_sym_for] = ACTIONS(181),
        [anon_sym_while] = ACTIONS(181),
        [anon_sym_try] = ACTIONS(181),
        [anon_sym_with] = ACTIONS(181),
        [anon_sym_def] = ACTIONS(181),
        [anon_sym_class] = ACTIONS(181),
        [anon_sym_AT] = ACTIONS(179),
        [anon_sym_not] = ACTIONS(181),
        [anon_sym_LBRACK] = ACTIONS(179),
        [anon_sym_LBRACE] = ACTIONS(179),
        [sym_string] = ACTIONS(179),
        [sym_number] = ACTIONS(181),
        [sym_identifier] = ACTIONS(183),
        [sym_comment] = ACTIONS(83),
        [sym__newline] = ACTIONS(179),
    },
    [22] = {
        [sym_comment] = ACTIONS(83),
        [sym__newline] = ACTIONS(185),
    },
    [23] = {
        [ts_builtin_sym_end] = ACTIONS(187),
        [anon_sym_SEMI] = ACTIONS(187),
        [anon_sym_import] = ACTIONS(189),
        [anon_sym_from] = ACTIONS(189),
        [anon_sym_print] = ACTIONS(189),
        [anon_sym_return] = ACTIONS(189),
        [anon_sym_del] = ACTIONS(189),
        [sym_pass_statement] = ACTIONS(189),
        [sym_break_statement] = ACTIONS(189),
        [sym_continue_statement] = ACTIONS(189),
        [anon_sym_if] = ACTIONS(189),
        [anon_sym_for] = ACTIONS(189),
        [anon_sym_while] = ACTIONS(189),
        [anon_sym_try] = ACTIONS(189),
        [anon_sym_with] = ACTIONS(189),
        [anon_sym_def] = ACTIONS(189),
        [anon_sym_class] = ACTIONS(189),
        [anon_sym_AT] = ACTIONS(187),
        [anon_sym_not] = ACTIONS(189),
        [anon_sym_LBRACK] = ACTIONS(187),
        [anon_sym_LBRACE] = ACTIONS(187),
        [sym_string] = ACTIONS(187),
        [sym_number] = ACTIONS(189),
        [sym_identifier] = ACTIONS(191),
        [sym_comment] = ACTIONS(83),
        [sym__newline] = ACTIONS(187),
    },
    [24] = {
        [ts_builtin_sym_end] = ACTIONS(193),
        [anon_sym_SEMI] = ACTIONS(193),
        [anon_sym_import] = ACTIONS(195),
        [anon_sym_from] = ACTIONS(195),
        [anon_sym_print] = ACTIONS(195),
        [anon_sym_return] = ACTIONS(195),
        [anon_sym_del] = ACTIONS(195),
        [sym_pass_statement] = ACTIONS(195),
        [sym_break_statement] = ACTIONS(195),
        [sym_continue_statement] = ACTIONS(195),
        [anon_sym_if] = ACTIONS(195),
        [anon_sym_for] = ACTIONS(195),
        [anon_sym_while] = ACTIONS(195),
        [anon_sym_try] = ACTIONS(195),
        [anon_sym_with] = ACTIONS(195),
        [anon_sym_def] = ACTIONS(195),
        [anon_sym_class] = ACTIONS(195),
        [anon_sym_AT] = ACTIONS(193),
        [anon_sym_not] = ACTIONS(195),
        [anon_sym_LBRACK] = ACTIONS(193),
        [anon_sym_LBRACE] = ACTIONS(193),
        [sym_string] = ACTIONS(193),
        [sym_number] = ACTIONS(195),
        [sym_identifier] = ACTIONS(197),
        [sym_comment] = ACTIONS(83),
        [sym__newline] = ACTIONS(193),
    },
    [25] = {
        [anon_sym_def] = ACTIONS(199),
        [anon_sym_class] = ACTIONS(199),
        [anon_sym_AT] = ACTIONS(199),
        [sym_comment] = ACTIONS(83),
    },
    [26] = {
        [anon_sym_LPAREN] = ACTIONS(201),
        [anon_sym_STAR] = ACTIONS(203),
        [anon_sym_PLUS] = ACTIONS(205),
        [anon_sym_DASH] = ACTIONS(205),
        [anon_sym_SLASH] = ACTIONS(207),
        [anon_sym_STAR_STAR] = ACTIONS(209),
        [anon_sym_PIPE] = ACTIONS(211),
        [anon_sym_AMP] = ACTIONS(213),
        [anon_sym_CARET] = ACTIONS(215),
        [anon_sym_LT_LT] = ACTIONS(205),
        [anon_sym_GT_GT] = ACTIONS(205),
        [anon_sym_and] = ACTIONS(213),
        [anon_sym_or] = ACTIONS(211),
        [anon_sym_LBRACK] = ACTIONS(217),
        [sym_comment] = ACTIONS(83),
        [sym__newline] = ACTIONS(219),
    },
    [27] = {
        [sym__statement] = STATE(32),
        [sym__simple_statement] = STATE(22),
        [sym_import_statement] = STATE(7),
        [sym_import_from_statement] = STATE(7),
        [sym_print_statement] = STATE(7),
        [sym_expression_statement] = STATE(7),
        [sym_return_statement] = STATE(7),
        [sym_delete_statement] = STATE(7),
        [sym__compound_statement] = STATE(23),
        [sym_if_statement] = STATE(24),
        [sym_for_statement] = STATE(24),
        [sym_while_statement] = STATE(24),
        [sym_try_statement] = STATE(24),
        [sym_with_statement] = STATE(24),
        [sym_function_definition] = STATE(24),
        [sym_class_definition] = STATE(24),
        [sym_decorated_definition] = STATE(24),
        [sym_decorator] = STATE(25),
        [sym__expression] = STATE(26),
        [sym_binary_operator] = STATE(19),
        [sym_unary_operator] = STATE(19),
        [sym_subscript] = STATE(19),
        [sym_call] = STATE(19),
        [sym_list] = STATE(19),
        [sym_list_comprehension] = STATE(19),
        [sym_dictionary] = STATE(19),
        [sym_dictionary_comprehension] = STATE(19),
        [sym_set] = STATE(19),
        [sym_set_comprehension] = STATE(19),
        [aux_sym_decorated_definition_repeat1] = STATE(28),
        [ts_builtin_sym_end] = ACTIONS(221),
        [anon_sym_SEMI] = ACTIONS(223),
        [anon_sym_import] = ACTIONS(93),
        [anon_sym_from] = ACTIONS(95),
        [anon_sym_print] = ACTIONS(97),
        [anon_sym_return] = ACTIONS(99),
        [anon_sym_del] = ACTIONS(101),
        [sym_pass_statement] = ACTIONS(103),
        [sym_break_statement] = ACTIONS(103),
        [sym_continue_statement] = ACTIONS(103),
        [anon_sym_if] = ACTIONS(105),
        [anon_sym_for] = ACTIONS(107),
        [anon_sym_while] = ACTIONS(109),
        [anon_sym_try] = ACTIONS(111),
        [anon_sym_with] = ACTIONS(113),
        [anon_sym_def] = ACTIONS(115),
        [anon_sym_class] = ACTIONS(117),
        [anon_sym_AT] = ACTIONS(119),
        [anon_sym_not] = ACTIONS(121),
        [anon_sym_LBRACK] = ACTIONS(123),
        [anon_sym_LBRACE] = ACTIONS(125),
        [sym_string] = ACTIONS(127),
        [sym_number] = ACTIONS(129),
        [sym_identifier] = ACTIONS(131),
        [sym_comment] = ACTIONS(83),
        [sym__newline] = ACTIONS(223),
    },
    [28] = {
        [sym_function_definition] = STATE(29),
        [sym_class_definition] = STATE(29),
        [sym_decorator] = STATE(30),
        [anon_sym_def] = ACTIONS(225),
        [anon_sym_class] = ACTIONS(227),
        [anon_sym_AT] = ACTIONS(119),
        [sym_comment] = ACTIONS(83),
    },
    [29] = {
        [ts_builtin_sym_end] = ACTIONS(229),
        [anon_sym_SEMI] = ACTIONS(229),
        [anon_sym_import] = ACTIONS(231),
        [anon_sym_from] = ACTIONS(231),
        [anon_sym_print] = ACTIONS(231),
        [anon_sym_return] = ACTIONS(231),
        [anon_sym_del] = ACTIONS(231),
        [sym_pass_statement] = ACTIONS(231),
        [sym_break_statement] = ACTIONS(231),
        [sym_continue_statement] = ACTIONS(231),
        [anon_sym_if] = ACTIONS(231),
        [anon_sym_for] = ACTIONS(231),
        [anon_sym_while] = ACTIONS(231),
        [anon_sym_try] = ACTIONS(231),
        [anon_sym_with] = ACTIONS(231),
        [anon_sym_def] = ACTIONS(231),
        [anon_sym_class] = ACTIONS(231),
        [anon_sym_AT] = ACTIONS(229),
        [anon_sym_not] = ACTIONS(231),
        [anon_sym_LBRACK] = ACTIONS(229),
        [anon_sym_LBRACE] = ACTIONS(229),
        [sym_string] = ACTIONS(229),
        [sym_number] = ACTIONS(231),
        [sym_identifier] = ACTIONS(233),
        [sym_comment] = ACTIONS(83),
        [sym__newline] = ACTIONS(229),
    },
    [30] = {
        [anon_sym_def] = ACTIONS(235),
        [anon_sym_class] = ACTIONS(235),
        [anon_sym_AT] = ACTIONS(235),
        [sym_comment] = ACTIONS(83),
    },
    [31] = {
        [ts_builtin_sym_end] = ACTIONS(237),
        [sym_comment] = ACTIONS(83),
    },
    [32] = {
        [ts_builtin_sym_end] = ACTIONS(239),
        [anon_sym_SEMI] = ACTIONS(239),
        [anon_sym_import] = ACTIONS(241),
        [anon_sym_from] = ACTIONS(241),
        [anon_sym_print] = ACTIONS(241),
        [anon_sym_return] = ACTIONS(241),
        [anon_sym_del] = ACTIONS(241),
        [sym_pass_statement] = ACTIONS(241),
        [sym_break_statement] = ACTIONS(241),
        [sym_continue_statement] = ACTIONS(241),
        [anon_sym_if] = ACTIONS(241),
        [anon_sym_for] = ACTIONS(241),
        [anon_sym_while] = ACTIONS(241),
        [anon_sym_try] = ACTIONS(241),
        [anon_sym_with] = ACTIONS(241),
        [anon_sym_def] = ACTIONS(241),
        [anon_sym_class] = ACTIONS(241),
        [anon_sym_AT] = ACTIONS(239),
        [anon_sym_not] = ACTIONS(241),
        [anon_sym_LBRACK] = ACTIONS(239),
        [anon_sym_LBRACE] = ACTIONS(239),
        [sym_string] = ACTIONS(239),
        [sym_number] = ACTIONS(241),
        [sym_identifier] = ACTIONS(243),
        [sym_comment] = ACTIONS(83),
        [sym__newline] = ACTIONS(239),
    },
    [33] = {
        [sym__expression] = STATE(297),
        [sym_binary_operator] = STATE(45),
        [sym_unary_operator] = STATE(45),
        [sym_subscript] = STATE(45),
        [sym_call] = STATE(45),
        [sym_keyword_argument] = STATE(298),
        [sym_list_splat_argument] = STATE(299),
        [sym_dictionary_splat_argument] = STATE(300),
        [sym_list] = STATE(45),
        [sym_list_comprehension] = STATE(45),
        [sym_dictionary] = STATE(45),
        [sym_dictionary_comprehension] = STATE(45),
        [sym_set] = STATE(45),
        [sym_set_comprehension] = STATE(45),
        [aux_sym_call_repeat1] = STATE(301),
        [anon_sym_STAR] = ACTIONS(245),
        [anon_sym_STAR_STAR] = ACTIONS(247),
        [anon_sym_not] = ACTIONS(249),
        [anon_sym_LBRACK] = ACTIONS(145),
        [anon_sym_LBRACE] = ACTIONS(147),
        [sym_string] = ACTIONS(149),
        [sym_number] = ACTIONS(151),
        [sym_identifier] = ACTIONS(251),
        [sym_comment] = ACTIONS(83),
    },
    [34] = {
        [sym__expression] = STATE(296),
        [sym_binary_operator] = STATE(19),
        [sym_unary_operator] = STATE(19),
        [sym_subscript] = STATE(19),
        [sym_call] = STATE(19),
        [sym_list] = STATE(19),
        [sym_list_comprehension] = STATE(19),
        [sym_dictionary] = STATE(19),
        [sym_dictionary_comprehension] = STATE(19),
        [sym_set] = STATE(19),
        [sym_set_comprehension] = STATE(19),
        [anon_sym_not] = ACTIONS(121),
        [anon_sym_LBRACK] = ACTIONS(123),
        [anon_sym_LBRACE] = ACTIONS(125),
        [sym_string] = ACTIONS(127),
        [sym_number] = ACTIONS(129),
        [sym_identifier] = ACTIONS(131),
        [sym_comment] = ACTIONS(83),
    },
    [35] = {
        [sym__expression] = STATE(293),
        [sym_binary_operator] = STATE(19),
        [sym_unary_operator] = STATE(19),
        [sym_subscript] = STATE(19),
        [sym_call] = STATE(19),
        [sym_list] = STATE(19),
        [sym_list_comprehension] = STATE(19),
        [sym_dictionary] = STATE(19),
        [sym_dictionary_comprehension] = STATE(19),
        [sym_set] = STATE(19),
        [sym_set_comprehension] = STATE(19),
        [anon_sym_not] = ACTIONS(121),
        [anon_sym_LBRACK] = ACTIONS(123),
        [anon_sym_LBRACE] = ACTIONS(125),
        [sym_string] = ACTIONS(127),
        [sym_number] = ACTIONS(129),
        [sym_identifier] = ACTIONS(131),
        [sym_comment] = ACTIONS(83),
    },
    [36] = {
        [sym__expression] = STATE(295),
        [sym_binary_operator] = STATE(19),
        [sym_unary_operator] = STATE(19),
        [sym_subscript] = STATE(19),
        [sym_call] = STATE(19),
        [sym_list] = STATE(19),
        [sym_list_comprehension] = STATE(19),
        [sym_dictionary] = STATE(19),
        [sym_dictionary_comprehension] = STATE(19),
        [sym_set] = STATE(19),
        [sym_set_comprehension] = STATE(19),
        [anon_sym_not] = ACTIONS(121),
        [anon_sym_LBRACK] = ACTIONS(123),
        [anon_sym_LBRACE] = ACTIONS(125),
        [sym_string] = ACTIONS(127),
        [sym_number] = ACTIONS(129),
        [sym_identifier] = ACTIONS(131),
        [sym_comment] = ACTIONS(83),
    },
    [37] = {
        [sym__expression] = STATE(291),
        [sym_binary_operator] = STATE(19),
        [sym_unary_operator] = STATE(19),
        [sym_subscript] = STATE(19),
        [sym_call] = STATE(19),
        [sym_list] = STATE(19),
        [sym_list_comprehension] = STATE(19),
        [sym_dictionary] = STATE(19),
        [sym_dictionary_comprehension] = STATE(19),
        [sym_set] = STATE(19),
        [sym_set_comprehension] = STATE(19),
        [anon_sym_not] = ACTIONS(121),
        [anon_sym_LBRACK] = ACTIONS(123),
        [anon_sym_LBRACE] = ACTIONS(125),
        [sym_string] = ACTIONS(127),
        [sym_number] = ACTIONS(129),
        [sym_identifier] = ACTIONS(131),
        [sym_comment] = ACTIONS(83),
    },
    [38] = {
        [sym__expression] = STATE(292),
        [sym_binary_operator] = STATE(19),
        [sym_unary_operator] = STATE(19),
        [sym_subscript] = STATE(19),
        [sym_call] = STATE(19),
        [sym_list] = STATE(19),
        [sym_list_comprehension] = STATE(19),
        [sym_dictionary] = STATE(19),
        [sym_dictionary_comprehension] = STATE(19),
        [sym_set] = STATE(19),
        [sym_set_comprehension] = STATE(19),
        [anon_sym_not] = ACTIONS(121),
        [anon_sym_LBRACK] = ACTIONS(123),
        [anon_sym_LBRACE] = ACTIONS(125),
        [sym_string] = ACTIONS(127),
        [sym_number] = ACTIONS(129),
        [sym_identifier] = ACTIONS(131),
        [sym_comment] = ACTIONS(83),
    },
    [39] = {
        [sym__expression] = STATE(294),
        [sym_binary_operator] = STATE(19),
        [sym_unary_operator] = STATE(19),
        [sym_subscript] = STATE(19),
        [sym_call] = STATE(19),
        [sym_list] = STATE(19),
        [sym_list_comprehension] = STATE(19),
        [sym_dictionary] = STATE(19),
        [sym_dictionary_comprehension] = STATE(19),
        [sym_set] = STATE(19),
        [sym_set_comprehension] = STATE(19),
        [anon_sym_not] = ACTIONS(121),
        [anon_sym_LBRACK] = ACTIONS(123),
        [anon_sym_LBRACE] = ACTIONS(125),
        [sym_string] = ACTIONS(127),
        [sym_number] = ACTIONS(129),
        [sym_identifier] = ACTIONS(131),
        [sym_comment] = ACTIONS(83),
    },
    [40] = {
        [sym__expression] = STATE(46),
        [sym_binary_operator] = STATE(45),
        [sym_unary_operator] = STATE(45),
        [sym_subscript] = STATE(45),
        [sym_call] = STATE(45),
        [sym_list] = STATE(45),
        [sym_list_comprehension] = STATE(45),
        [sym_dictionary] = STATE(45),
        [sym_dictionary_comprehension] = STATE(45),
        [sym_set] = STATE(45),
        [sym_set_comprehension] = STATE(45),
        [anon_sym_not] = ACTIONS(253),
        [anon_sym_LBRACK] = ACTIONS(145),
        [anon_sym_DOT_DOT_DOT] = ACTIONS(255),
        [anon_sym_LBRACE] = ACTIONS(147),
        [sym_string] = ACTIONS(149),
        [sym_number] = ACTIONS(151),
        [sym_identifier] = ACTIONS(153),
        [sym_comment] = ACTIONS(83),
    },
    [41] = {
        [sym__expression] = STATE(276),
        [sym_binary_operator] = STATE(45),
        [sym_unary_operator] = STATE(45),
        [sym_subscript] = STATE(45),
        [sym_call] = STATE(45),
        [sym_list] = STATE(45),
        [sym_list_comprehension] = STATE(45),
        [sym_dictionary] = STATE(45),
        [sym_dictionary_comprehension] = STATE(45),
        [sym_set] = STATE(45),
        [sym_set_comprehension] = STATE(45),
        [anon_sym_not] = ACTIONS(253),
        [anon_sym_LBRACK] = ACTIONS(145),
        [anon_sym_LBRACE] = ACTIONS(147),
        [sym_string] = ACTIONS(149),
        [sym_number] = ACTIONS(151),
        [sym_identifier] = ACTIONS(153),
        [sym_comment] = ACTIONS(83),
    },
    [42] = {
        [sym__expression] = STATE(239),
        [sym_binary_operator] = STATE(45),
        [sym_unary_operator] = STATE(45),
        [sym_subscript] = STATE(45),
        [sym_call] = STATE(45),
        [sym_list] = STATE(45),
        [sym_list_comprehension] = STATE(45),
        [sym_dictionary] = STATE(45),
        [sym_dictionary_comprehension] = STATE(45),
        [sym_set] = STATE(45),
        [sym_set_comprehension] = STATE(45),
        [anon_sym_not] = ACTIONS(165),
        [anon_sym_LBRACK] = ACTIONS(145),
        [anon_sym_RBRACK] = ACTIONS(257),
        [anon_sym_LBRACE] = ACTIONS(147),
        [sym_string] = ACTIONS(149),
        [sym_number] = ACTIONS(151),
        [sym_identifier] = ACTIONS(153),
        [sym_comment] = ACTIONS(83),
    },
    [43] = {
        [aux_sym_subscript_repeat1] = STATE(57),
        [anon_sym_COMMA] = ACTIONS(259),
        [anon_sym_RBRACK] = ACTIONS(261),
        [sym_comment] = ACTIONS(83),
    },
    [44] = {
        [sym__expression] = STATE(127),
        [sym_binary_operator] = STATE(45),
        [sym_unary_operator] = STATE(45),
        [sym_subscript] = STATE(45),
        [sym_call] = STATE(45),
        [sym_list] = STATE(45),
        [sym_list_comprehension] = STATE(45),
        [sym_dictionary] = STATE(45),
        [sym_dictionary_comprehension] = STATE(45),
        [sym_pair] = STATE(128),
        [sym_set] = STATE(45),
        [sym_set_comprehension] = STATE(45),
        [anon_sym_not] = ACTIONS(169),
        [anon_sym_LBRACK] = ACTIONS(145),
        [anon_sym_LBRACE] = ACTIONS(147),
        [anon_sym_RBRACE] = ACTIONS(263),
        [sym_string] = ACTIONS(149),
        [sym_number] = ACTIONS(151),
        [sym_identifier] = ACTIONS(153),
        [sym_comment] = ACTIONS(83),
    },
    [45] = {
        [anon_sym_LPAREN] = ACTIONS(173),
        [anon_sym_RPAREN] = ACTIONS(173),
        [anon_sym_COMMA] = ACTIONS(173),
        [anon_sym_as] = ACTIONS(173),
        [anon_sym_STAR] = ACTIONS(175),
        [anon_sym_COLON] = ACTIONS(173),
        [anon_sym_for] = ACTIONS(173),
        [anon_sym_in] = ACTIONS(173),
        [anon_sym_PLUS] = ACTIONS(173),
        [anon_sym_DASH] = ACTIONS(173),
        [anon_sym_SLASH] = ACTIONS(173),
        [anon_sym_STAR_STAR] = ACTIONS(173),
        [anon_sym_PIPE] = ACTIONS(173),
        [anon_sym_AMP] = ACTIONS(173),
        [anon_sym_CARET] = ACTIONS(173),
        [anon_sym_LT_LT] = ACTIONS(173),
        [anon_sym_GT_GT] = ACTIONS(173),
        [anon_sym_and] = ACTIONS(173),
        [anon_sym_or] = ACTIONS(173),
        [anon_sym_LBRACK] = ACTIONS(173),
        [anon_sym_RBRACK] = ACTIONS(173),
        [anon_sym_RBRACE] = ACTIONS(173),
        [sym_comment] = ACTIONS(83),
    },
    [46] = {
        [aux_sym_subscript_repeat1] = STATE(57),
        [anon_sym_LPAREN] = ACTIONS(265),
        [anon_sym_COMMA] = ACTIONS(259),
        [anon_sym_STAR] = ACTIONS(267),
        [anon_sym_PLUS] = ACTIONS(269),
        [anon_sym_DASH] = ACTIONS(269),
        [anon_sym_SLASH] = ACTIONS(271),
        [anon_sym_STAR_STAR] = ACTIONS(273),
        [anon_sym_PIPE] = ACTIONS(275),
        [anon_sym_AMP] = ACTIONS(277),
        [anon_sym_CARET] = ACTIONS(279),
        [anon_sym_LT_LT] = ACTIONS(269),
        [anon_sym_GT_GT] = ACTIONS(269),
        [anon_sym_and] = ACTIONS(277),
        [anon_sym_or] = ACTIONS(275),
        [anon_sym_LBRACK] = ACTIONS(281),
        [anon_sym_RBRACK] = ACTIONS(261),
        [sym_comment] = ACTIONS(83),
    },
    [47] = {
        [sym__expression] = STATE(83),
        [sym_binary_operator] = STATE(45),
        [sym_unary_operator] = STATE(45),
        [sym_subscript] = STATE(45),
        [sym_call] = STATE(45),
        [sym_keyword_argument] = STATE(84),
        [sym_list_splat_argument] = STATE(85),
        [sym_dictionary_splat_argument] = STATE(86),
        [sym_list] = STATE(45),
        [sym_list_comprehension] = STATE(45),
        [sym_dictionary] = STATE(45),
        [sym_dictionary_comprehension] = STATE(45),
        [sym_set] = STATE(45),
        [sym_set_comprehension] = STATE(45),
        [aux_sym_call_repeat1] = STATE(87),
        [anon_sym_STAR] = ACTIONS(245),
        [anon_sym_STAR_STAR] = ACTIONS(247),
        [anon_sym_not] = ACTIONS(249),
        [anon_sym_LBRACK] = ACTIONS(145),
        [anon_sym_LBRACE] = ACTIONS(147),
        [sym_string] = ACTIONS(149),
        [sym_number] = ACTIONS(151),
        [sym_identifier] = ACTIONS(251),
        [sym_comment] = ACTIONS(83),
    },
    [48] = {
        [sym__expression] = STATE(72),
        [sym_binary_operator] = STATE(45),
        [sym_unary_operator] = STATE(45),
        [sym_subscript] = STATE(45),
        [sym_call] = STATE(45),
        [sym_list] = STATE(45),
        [sym_list_comprehension] = STATE(45),
        [sym_dictionary] = STATE(45),
        [sym_dictionary_comprehension] = STATE(45),
        [sym_set] = STATE(45),
        [sym_set_comprehension] = STATE(45),
        [anon_sym_not] = ACTIONS(253),
        [anon_sym_LBRACK] = ACTIONS(145),
        [anon_sym_DOT_DOT_DOT] = ACTIONS(283),
        [anon_sym_RBRACK] = ACTIONS(285),
        [anon_sym_LBRACE] = ACTIONS(147),
        [sym_string] = ACTIONS(149),
        [sym_number] = ACTIONS(151),
        [sym_identifier] = ACTIONS(153),
        [sym_comment] = ACTIONS(83),
    },
    [49] = {
        [sym__expression] = STATE(78),
        [sym_binary_operator] = STATE(45),
        [sym_unary_operator] = STATE(45),
        [sym_subscript] = STATE(45),
        [sym_call] = STATE(45),
        [sym_list] = STATE(45),
        [sym_list_comprehension] = STATE(45),
        [sym_dictionary] = STATE(45),
        [sym_dictionary_comprehension] = STATE(45),
        [sym_set] = STATE(45),
        [sym_set_comprehension] = STATE(45),
        [anon_sym_not] = ACTIONS(253),
        [anon_sym_LBRACK] = ACTIONS(145),
        [anon_sym_LBRACE] = ACTIONS(147),
        [sym_string] = ACTIONS(149),
        [sym_number] = ACTIONS(151),
        [sym_identifier] = ACTIONS(153),
        [sym_comment] = ACTIONS(83),
    },
    [50] = {
        [sym__expression] = STATE(75),
        [sym_binary_operator] = STATE(45),
        [sym_unary_operator] = STATE(45),
        [sym_subscript] = STATE(45),
        [sym_call] = STATE(45),
        [sym_list] = STATE(45),
        [sym_list_comprehension] = STATE(45),
        [sym_dictionary] = STATE(45),
        [sym_dictionary_comprehension] = STATE(45),
        [sym_set] = STATE(45),
        [sym_set_comprehension] = STATE(45),
        [anon_sym_not] = ACTIONS(253),
        [anon_sym_LBRACK] = ACTIONS(145),
        [anon_sym_LBRACE] = ACTIONS(147),
        [sym_string] = ACTIONS(149),
        [sym_number] = ACTIONS(151),
        [sym_identifier] = ACTIONS(153),
        [sym_comment] = ACTIONS(83),
    },
    [51] = {
        [sym__expression] = STATE(77),
        [sym_binary_operator] = STATE(45),
        [sym_unary_operator] = STATE(45),
        [sym_subscript] = STATE(45),
        [sym_call] = STATE(45),
        [sym_list] = STATE(45),
        [sym_list_comprehension] = STATE(45),
        [sym_dictionary] = STATE(45),
        [sym_dictionary_comprehension] = STATE(45),
        [sym_set] = STATE(45),
        [sym_set_comprehension] = STATE(45),
        [anon_sym_not] = ACTIONS(253),
        [anon_sym_LBRACK] = ACTIONS(145),
        [anon_sym_LBRACE] = ACTIONS(147),
        [sym_string] = ACTIONS(149),
        [sym_number] = ACTIONS(151),
        [sym_identifier] = ACTIONS(153),
        [sym_comment] = ACTIONS(83),
    },
    [52] = {
        [sym__expression] = STATE(73),
        [sym_binary_operator] = STATE(45),
        [sym_unary_operator] = STATE(45),
        [sym_subscript] = STATE(45),
        [sym_call] = STATE(45),
        [sym_list] = STATE(45),
        [sym_list_comprehension] = STATE(45),
        [sym_dictionary] = STATE(45),
        [sym_dictionary_comprehension] = STATE(45),
        [sym_set] = STATE(45),
        [sym_set_comprehension] = STATE(45),
        [anon_sym_not] = ACTIONS(253),
        [anon_sym_LBRACK] = ACTIONS(145),
        [anon_sym_LBRACE] = ACTIONS(147),
        [sym_string] = ACTIONS(149),
        [sym_number] = ACTIONS(151),
        [sym_identifier] = ACTIONS(153),
        [sym_comment] = ACTIONS(83),
    },
    [53] = {
        [sym__expression] = STATE(74),
        [sym_binary_operator] = STATE(45),
        [sym_unary_operator] = STATE(45),
        [sym_subscript] = STATE(45),
        [sym_call] = STATE(45),
        [sym_list] = STATE(45),
        [sym_list_comprehension] = STATE(45),
        [sym_dictionary] = STATE(45),
        [sym_dictionary_comprehension] = STATE(45),
        [sym_set] = STATE(45),
        [sym_set_comprehension] = STATE(45),
        [anon_sym_not] = ACTIONS(253),
        [anon_sym_LBRACK] = ACTIONS(145),
        [anon_sym_LBRACE] = ACTIONS(147),
        [sym_string] = ACTIONS(149),
        [sym_number] = ACTIONS(151),
        [sym_identifier] = ACTIONS(153),
        [sym_comment] = ACTIONS(83),
    },
    [54] = {
        [sym__expression] = STATE(76),
        [sym_binary_operator] = STATE(45),
        [sym_unary_operator] = STATE(45),
        [sym_subscript] = STATE(45),
        [sym_call] = STATE(45),
        [sym_list] = STATE(45),
        [sym_list_comprehension] = STATE(45),
        [sym_dictionary] = STATE(45),
        [sym_dictionary_comprehension] = STATE(45),
        [sym_set] = STATE(45),
        [sym_set_comprehension] = STATE(45),
        [anon_sym_not] = ACTIONS(253),
        [anon_sym_LBRACK] = ACTIONS(145),
        [anon_sym_LBRACE] = ACTIONS(147),
        [sym_string] = ACTIONS(149),
        [sym_number] = ACTIONS(151),
        [sym_identifier] = ACTIONS(153),
        [sym_comment] = ACTIONS(83),
    },
    [55] = {
        [sym__expression] = STATE(64),
        [sym_binary_operator] = STATE(45),
        [sym_unary_operator] = STATE(45),
        [sym_subscript] = STATE(45),
        [sym_call] = STATE(45),
        [sym_list] = STATE(45),
        [sym_list_comprehension] = STATE(45),
        [sym_dictionary] = STATE(45),
        [sym_dictionary_comprehension] = STATE(45),
        [sym_set] = STATE(45),
        [sym_set_comprehension] = STATE(45),
        [anon_sym_not] = ACTIONS(253),
        [anon_sym_LBRACK] = ACTIONS(145),
        [anon_sym_DOT_DOT_DOT] = ACTIONS(287),
        [anon_sym_LBRACE] = ACTIONS(147),
        [sym_string] = ACTIONS(149),
        [sym_number] = ACTIONS(151),
        [sym_identifier] = ACTIONS(153),
        [sym_comment] = ACTIONS(83),
    },
    [56] = {
        [anon_sym_LPAREN] = ACTIONS(289),
        [anon_sym_RPAREN] = ACTIONS(289),
        [anon_sym_COMMA] = ACTIONS(289),
        [anon_sym_as] = ACTIONS(289),
        [anon_sym_STAR] = ACTIONS(291),
        [anon_sym_COLON] = ACTIONS(289),
        [anon_sym_for] = ACTIONS(289),
        [anon_sym_in] = ACTIONS(289),
        [anon_sym_PLUS] = ACTIONS(289),
        [anon_sym_DASH] = ACTIONS(289),
        [anon_sym_SLASH] = ACTIONS(289),
        [anon_sym_STAR_STAR] = ACTIONS(289),
        [anon_sym_PIPE] = ACTIONS(289),
        [anon_sym_AMP] = ACTIONS(289),
        [anon_sym_CARET] = ACTIONS(289),
        [anon_sym_LT_LT] = ACTIONS(289),
        [anon_sym_GT_GT] = ACTIONS(289),
        [anon_sym_and] = ACTIONS(289),
        [anon_sym_or] = ACTIONS(289),
        [anon_sym_LBRACK] = ACTIONS(289),
        [anon_sym_RBRACK] = ACTIONS(289),
        [anon_sym_RBRACE] = ACTIONS(289),
        [sym_comment] = ACTIONS(83),
        [sym__newline] = ACTIONS(289),
    },
    [57] = {
        [anon_sym_COMMA] = ACTIONS(293),
        [anon_sym_RBRACK] = ACTIONS(285),
        [sym_comment] = ACTIONS(83),
    },
    [58] = {
        [sym__expression] = STATE(62),
        [sym_binary_operator] = STATE(45),
        [sym_unary_operator] = STATE(45),
        [sym_subscript] = STATE(45),
        [sym_call] = STATE(45),
        [sym_list] = STATE(45),
        [sym_list_comprehension] = STATE(45),
        [sym_dictionary] = STATE(45),
        [sym_dictionary_comprehension] = STATE(45),
        [sym_set] = STATE(45),
        [sym_set_comprehension] = STATE(45),
        [anon_sym_not] = ACTIONS(253),
        [anon_sym_LBRACK] = ACTIONS(145),
        [anon_sym_DOT_DOT_DOT] = ACTIONS(295),
        [anon_sym_RBRACK] = ACTIONS(297),
        [anon_sym_LBRACE] = ACTIONS(147),
        [sym_string] = ACTIONS(149),
        [sym_number] = ACTIONS(151),
        [sym_identifier] = ACTIONS(153),
        [sym_comment] = ACTIONS(83),
    },
    [59] = {
        [anon_sym_LPAREN] = ACTIONS(299),
        [anon_sym_RPAREN] = ACTIONS(299),
        [anon_sym_COMMA] = ACTIONS(299),
        [anon_sym_as] = ACTIONS(299),
        [anon_sym_STAR] = ACTIONS(301),
        [anon_sym_COLON] = ACTIONS(299),
        [anon_sym_for] = ACTIONS(299),
        [anon_sym_in] = ACTIONS(299),
        [anon_sym_PLUS] = ACTIONS(299),
        [anon_sym_DASH] = ACTIONS(299),
        [anon_sym_SLASH] = ACTIONS(299),
        [anon_sym_STAR_STAR] = ACTIONS(299),
        [anon_sym_PIPE] = ACTIONS(299),
        [anon_sym_AMP] = ACTIONS(299),
        [anon_sym_CARET] = ACTIONS(299),
        [anon_sym_LT_LT] = ACTIONS(299),
        [anon_sym_GT_GT] = ACTIONS(299),
        [anon_sym_and] = ACTIONS(299),
        [anon_sym_or] = ACTIONS(299),
        [anon_sym_LBRACK] = ACTIONS(299),
        [anon_sym_RBRACK] = ACTIONS(299),
        [anon_sym_RBRACE] = ACTIONS(299),
        [sym_comment] = ACTIONS(83),
        [sym__newline] = ACTIONS(299),
    },
    [60] = {
        [anon_sym_COMMA] = ACTIONS(303),
        [anon_sym_RBRACK] = ACTIONS(303),
        [sym_comment] = ACTIONS(83),
    },
    [61] = {
        [anon_sym_LPAREN] = ACTIONS(305),
        [anon_sym_RPAREN] = ACTIONS(305),
        [anon_sym_COMMA] = ACTIONS(305),
        [anon_sym_as] = ACTIONS(305),
        [anon_sym_STAR] = ACTIONS(307),
        [anon_sym_COLON] = ACTIONS(305),
        [anon_sym_for] = ACTIONS(305),
        [anon_sym_in] = ACTIONS(305),
        [anon_sym_PLUS] = ACTIONS(305),
        [anon_sym_DASH] = ACTIONS(305),
        [anon_sym_SLASH] = ACTIONS(305),
        [anon_sym_STAR_STAR] = ACTIONS(305),
        [anon_sym_PIPE] = ACTIONS(305),
        [anon_sym_AMP] = ACTIONS(305),
        [anon_sym_CARET] = ACTIONS(305),
        [anon_sym_LT_LT] = ACTIONS(305),
        [anon_sym_GT_GT] = ACTIONS(305),
        [anon_sym_and] = ACTIONS(305),
        [anon_sym_or] = ACTIONS(305),
        [anon_sym_LBRACK] = ACTIONS(305),
        [anon_sym_RBRACK] = ACTIONS(305),
        [anon_sym_RBRACE] = ACTIONS(305),
        [sym_comment] = ACTIONS(83),
        [sym__newline] = ACTIONS(305),
    },
    [62] = {
        [anon_sym_LPAREN] = ACTIONS(265),
        [anon_sym_COMMA] = ACTIONS(303),
        [anon_sym_STAR] = ACTIONS(267),
        [anon_sym_PLUS] = ACTIONS(269),
        [anon_sym_DASH] = ACTIONS(269),
        [anon_sym_SLASH] = ACTIONS(271),
        [anon_sym_STAR_STAR] = ACTIONS(273),
        [anon_sym_PIPE] = ACTIONS(275),
        [anon_sym_AMP] = ACTIONS(277),
        [anon_sym_CARET] = ACTIONS(279),
        [anon_sym_LT_LT] = ACTIONS(269),
        [anon_sym_GT_GT] = ACTIONS(269),
        [anon_sym_and] = ACTIONS(277),
        [anon_sym_or] = ACTIONS(275),
        [anon_sym_LBRACK] = ACTIONS(281),
        [anon_sym_RBRACK] = ACTIONS(303),
        [sym_comment] = ACTIONS(83),
    },
    [63] = {
        [aux_sym_subscript_repeat1] = STATE(67),
        [anon_sym_COMMA] = ACTIONS(309),
        [anon_sym_RBRACK] = ACTIONS(311),
        [sym_comment] = ACTIONS(83),
    },
    [64] = {
        [aux_sym_subscript_repeat1] = STATE(67),
        [anon_sym_LPAREN] = ACTIONS(265),
        [anon_sym_COMMA] = ACTIONS(309),
        [anon_sym_STAR] = ACTIONS(267),
        [anon_sym_PLUS] = ACTIONS(269),
        [anon_sym_DASH] = ACTIONS(269),
        [anon_sym_SLASH] = ACTIONS(271),
        [anon_sym_STAR_STAR] = ACTIONS(273),
        [anon_sym_PIPE] = ACTIONS(275),
        [anon_sym_AMP] = ACTIONS(277),
        [anon_sym_CARET] = ACTIONS(279),
        [anon_sym_LT_LT] = ACTIONS(269),
        [anon_sym_GT_GT] = ACTIONS(269),
        [anon_sym_and] = ACTIONS(277),
        [anon_sym_or] = ACTIONS(275),
        [anon_sym_LBRACK] = ACTIONS(281),
        [anon_sym_RBRACK] = ACTIONS(311),
        [sym_comment] = ACTIONS(83),
    },
    [65] = {
        [sym__expression] = STATE(72),
        [sym_binary_operator] = STATE(45),
        [sym_unary_operator] = STATE(45),
        [sym_subscript] = STATE(45),
        [sym_call] = STATE(45),
        [sym_list] = STATE(45),
        [sym_list_comprehension] = STATE(45),
        [sym_dictionary] = STATE(45),
        [sym_dictionary_comprehension] = STATE(45),
        [sym_set] = STATE(45),
        [sym_set_comprehension] = STATE(45),
        [anon_sym_not] = ACTIONS(253),
        [anon_sym_LBRACK] = ACTIONS(145),
        [anon_sym_DOT_DOT_DOT] = ACTIONS(283),
        [anon_sym_RBRACK] = ACTIONS(313),
        [anon_sym_LBRACE] = ACTIONS(147),
        [sym_string] = ACTIONS(149),
        [sym_number] = ACTIONS(151),
        [sym_identifier] = ACTIONS(153),
        [sym_comment] = ACTIONS(83),
    },
    [66] = {
        [anon_sym_LPAREN] = ACTIONS(289),
        [anon_sym_RPAREN] = ACTIONS(289),
        [anon_sym_COMMA] = ACTIONS(289),
        [anon_sym_as] = ACTIONS(289),
        [anon_sym_STAR] = ACTIONS(291),
        [anon_sym_COLON] = ACTIONS(289),
        [anon_sym_for] = ACTIONS(289),
        [anon_sym_in] = ACTIONS(289),
        [anon_sym_PLUS] = ACTIONS(289),
        [anon_sym_DASH] = ACTIONS(289),
        [anon_sym_SLASH] = ACTIONS(289),
        [anon_sym_STAR_STAR] = ACTIONS(289),
        [anon_sym_PIPE] = ACTIONS(289),
        [anon_sym_AMP] = ACTIONS(289),
        [anon_sym_CARET] = ACTIONS(289),
        [anon_sym_LT_LT] = ACTIONS(289),
        [anon_sym_GT_GT] = ACTIONS(289),
        [anon_sym_and] = ACTIONS(289),
        [anon_sym_or] = ACTIONS(289),
        [anon_sym_LBRACK] = ACTIONS(289),
        [anon_sym_RBRACK] = ACTIONS(289),
        [anon_sym_RBRACE] = ACTIONS(289),
        [sym_comment] = ACTIONS(83),
    },
    [67] = {
        [anon_sym_COMMA] = ACTIONS(315),
        [anon_sym_RBRACK] = ACTIONS(313),
        [sym_comment] = ACTIONS(83),
    },
    [68] = {
        [sym__expression] = STATE(62),
        [sym_binary_operator] = STATE(45),
        [sym_unary_operator] = STATE(45),
        [sym_subscript] = STATE(45),
        [sym_call] = STATE(45),
        [sym_list] = STATE(45),
        [sym_list_comprehension] = STATE(45),
        [sym_dictionary] = STATE(45),
        [sym_dictionary_comprehension] = STATE(45),
        [sym_set] = STATE(45),
        [sym_set_comprehension] = STATE(45),
        [anon_sym_not] = ACTIONS(253),
        [anon_sym_LBRACK] = ACTIONS(145),
        [anon_sym_DOT_DOT_DOT] = ACTIONS(295),
        [anon_sym_RBRACK] = ACTIONS(317),
        [anon_sym_LBRACE] = ACTIONS(147),
        [sym_string] = ACTIONS(149),
        [sym_number] = ACTIONS(151),
        [sym_identifier] = ACTIONS(153),
        [sym_comment] = ACTIONS(83),
    },
    [69] = {
        [anon_sym_LPAREN] = ACTIONS(299),
        [anon_sym_RPAREN] = ACTIONS(299),
        [anon_sym_COMMA] = ACTIONS(299),
        [anon_sym_as] = ACTIONS(299),
        [anon_sym_STAR] = ACTIONS(301),
        [anon_sym_COLON] = ACTIONS(299),
        [anon_sym_for] = ACTIONS(299),
        [anon_sym_in] = ACTIONS(299),
        [anon_sym_PLUS] = ACTIONS(299),
        [anon_sym_DASH] = ACTIONS(299),
        [anon_sym_SLASH] = ACTIONS(299),
        [anon_sym_STAR_STAR] = ACTIONS(299),
        [anon_sym_PIPE] = ACTIONS(299),
        [anon_sym_AMP] = ACTIONS(299),
        [anon_sym_CARET] = ACTIONS(299),
        [anon_sym_LT_LT] = ACTIONS(299),
        [anon_sym_GT_GT] = ACTIONS(299),
        [anon_sym_and] = ACTIONS(299),
        [anon_sym_or] = ACTIONS(299),
        [anon_sym_LBRACK] = ACTIONS(299),
        [anon_sym_RBRACK] = ACTIONS(299),
        [anon_sym_RBRACE] = ACTIONS(299),
        [sym_comment] = ACTIONS(83),
    },
    [70] = {
        [anon_sym_LPAREN] = ACTIONS(305),
        [anon_sym_RPAREN] = ACTIONS(305),
        [anon_sym_COMMA] = ACTIONS(305),
        [anon_sym_as] = ACTIONS(305),
        [anon_sym_STAR] = ACTIONS(307),
        [anon_sym_COLON] = ACTIONS(305),
        [anon_sym_for] = ACTIONS(305),
        [anon_sym_in] = ACTIONS(305),
        [anon_sym_PLUS] = ACTIONS(305),
        [anon_sym_DASH] = ACTIONS(305),
        [anon_sym_SLASH] = ACTIONS(305),
        [anon_sym_STAR_STAR] = ACTIONS(305),
        [anon_sym_PIPE] = ACTIONS(305),
        [anon_sym_AMP] = ACTIONS(305),
        [anon_sym_CARET] = ACTIONS(305),
        [anon_sym_LT_LT] = ACTIONS(305),
        [anon_sym_GT_GT] = ACTIONS(305),
        [anon_sym_and] = ACTIONS(305),
        [anon_sym_or] = ACTIONS(305),
        [anon_sym_LBRACK] = ACTIONS(305),
        [anon_sym_RBRACK] = ACTIONS(305),
        [anon_sym_RBRACE] = ACTIONS(305),
        [sym_comment] = ACTIONS(83),
    },
    [71] = {
        [anon_sym_COMMA] = ACTIONS(319),
        [anon_sym_RBRACK] = ACTIONS(319),
        [sym_comment] = ACTIONS(83),
    },
    [72] = {
        [anon_sym_LPAREN] = ACTIONS(265),
        [anon_sym_COMMA] = ACTIONS(319),
        [anon_sym_STAR] = ACTIONS(267),
        [anon_sym_PLUS] = ACTIONS(269),
        [anon_sym_DASH] = ACTIONS(269),
        [anon_sym_SLASH] = ACTIONS(271),
        [anon_sym_STAR_STAR] = ACTIONS(273),
        [anon_sym_PIPE] = ACTIONS(275),
        [anon_sym_AMP] = ACTIONS(277),
        [anon_sym_CARET] = ACTIONS(279),
        [anon_sym_LT_LT] = ACTIONS(269),
        [anon_sym_GT_GT] = ACTIONS(269),
        [anon_sym_and] = ACTIONS(277),
        [anon_sym_or] = ACTIONS(275),
        [anon_sym_LBRACK] = ACTIONS(281),
        [anon_sym_RBRACK] = ACTIONS(319),
        [sym_comment] = ACTIONS(83),
    },
    [73] = {
        [anon_sym_LPAREN] = ACTIONS(265),
        [anon_sym_COMMA] = ACTIONS(321),
        [anon_sym_STAR] = ACTIONS(267),
        [anon_sym_PLUS] = ACTIONS(269),
        [anon_sym_DASH] = ACTIONS(269),
        [anon_sym_SLASH] = ACTIONS(271),
        [anon_sym_STAR_STAR] = ACTIONS(273),
        [anon_sym_PIPE] = ACTIONS(321),
        [anon_sym_AMP] = ACTIONS(277),
        [anon_sym_CARET] = ACTIONS(279),
        [anon_sym_LT_LT] = ACTIONS(269),
        [anon_sym_GT_GT] = ACTIONS(269),
        [anon_sym_and] = ACTIONS(277),
        [anon_sym_or] = ACTIONS(321),
        [anon_sym_LBRACK] = ACTIONS(321),
        [anon_sym_RBRACK] = ACTIONS(321),
        [sym_comment] = ACTIONS(83),
    },
    [74] = {
        [anon_sym_LPAREN] = ACTIONS(265),
        [anon_sym_COMMA] = ACTIONS(321),
        [anon_sym_STAR] = ACTIONS(267),
        [anon_sym_PLUS] = ACTIONS(269),
        [anon_sym_DASH] = ACTIONS(269),
        [anon_sym_SLASH] = ACTIONS(271),
        [anon_sym_STAR_STAR] = ACTIONS(273),
        [anon_sym_PIPE] = ACTIONS(321),
        [anon_sym_AMP] = ACTIONS(321),
        [anon_sym_CARET] = ACTIONS(279),
        [anon_sym_LT_LT] = ACTIONS(269),
        [anon_sym_GT_GT] = ACTIONS(269),
        [anon_sym_and] = ACTIONS(321),
        [anon_sym_or] = ACTIONS(321),
        [anon_sym_LBRACK] = ACTIONS(321),
        [anon_sym_RBRACK] = ACTIONS(321),
        [sym_comment] = ACTIONS(83),
    },
    [75] = {
        [anon_sym_LPAREN] = ACTIONS(265),
        [anon_sym_COMMA] = ACTIONS(321),
        [anon_sym_STAR] = ACTIONS(267),
        [anon_sym_PLUS] = ACTIONS(321),
        [anon_sym_DASH] = ACTIONS(321),
        [anon_sym_SLASH] = ACTIONS(271),
        [anon_sym_STAR_STAR] = ACTIONS(273),
        [anon_sym_PIPE] = ACTIONS(321),
        [anon_sym_AMP] = ACTIONS(321),
        [anon_sym_CARET] = ACTIONS(321),
        [anon_sym_LT_LT] = ACTIONS(321),
        [anon_sym_GT_GT] = ACTIONS(321),
        [anon_sym_and] = ACTIONS(321),
        [anon_sym_or] = ACTIONS(321),
        [anon_sym_LBRACK] = ACTIONS(321),
        [anon_sym_RBRACK] = ACTIONS(321),
        [sym_comment] = ACTIONS(83),
    },
    [76] = {
        [anon_sym_LPAREN] = ACTIONS(265),
        [anon_sym_COMMA] = ACTIONS(321),
        [anon_sym_STAR] = ACTIONS(267),
        [anon_sym_PLUS] = ACTIONS(269),
        [anon_sym_DASH] = ACTIONS(269),
        [anon_sym_SLASH] = ACTIONS(271),
        [anon_sym_STAR_STAR] = ACTIONS(273),
        [anon_sym_PIPE] = ACTIONS(321),
        [anon_sym_AMP] = ACTIONS(321),
        [anon_sym_CARET] = ACTIONS(321),
        [anon_sym_LT_LT] = ACTIONS(269),
        [anon_sym_GT_GT] = ACTIONS(269),
        [anon_sym_and] = ACTIONS(321),
        [anon_sym_or] = ACTIONS(321),
        [anon_sym_LBRACK] = ACTIONS(321),
        [anon_sym_RBRACK] = ACTIONS(321),
        [sym_comment] = ACTIONS(83),
    },
    [77] = {
        [anon_sym_LPAREN] = ACTIONS(265),
        [anon_sym_RPAREN] = ACTIONS(321),
        [anon_sym_COMMA] = ACTIONS(321),
        [anon_sym_as] = ACTIONS(321),
        [anon_sym_STAR] = ACTIONS(323),
        [anon_sym_COLON] = ACTIONS(321),
        [anon_sym_for] = ACTIONS(321),
        [anon_sym_in] = ACTIONS(321),
        [anon_sym_PLUS] = ACTIONS(321),
        [anon_sym_DASH] = ACTIONS(321),
        [anon_sym_SLASH] = ACTIONS(321),
        [anon_sym_STAR_STAR] = ACTIONS(321),
        [anon_sym_PIPE] = ACTIONS(321),
        [anon_sym_AMP] = ACTIONS(321),
        [anon_sym_CARET] = ACTIONS(321),
        [anon_sym_LT_LT] = ACTIONS(321),
        [anon_sym_GT_GT] = ACTIONS(321),
        [anon_sym_and] = ACTIONS(321),
        [anon_sym_or] = ACTIONS(321),
        [anon_sym_LBRACK] = ACTIONS(321),
        [anon_sym_RBRACK] = ACTIONS(321),
        [anon_sym_RBRACE] = ACTIONS(321),
        [sym_comment] = ACTIONS(83),
    },
    [78] = {
        [anon_sym_LPAREN] = ACTIONS(265),
        [anon_sym_COMMA] = ACTIONS(321),
        [anon_sym_STAR] = ACTIONS(323),
        [anon_sym_PLUS] = ACTIONS(321),
        [anon_sym_DASH] = ACTIONS(321),
        [anon_sym_SLASH] = ACTIONS(321),
        [anon_sym_STAR_STAR] = ACTIONS(273),
        [anon_sym_PIPE] = ACTIONS(321),
        [anon_sym_AMP] = ACTIONS(321),
        [anon_sym_CARET] = ACTIONS(321),
        [anon_sym_LT_LT] = ACTIONS(321),
        [anon_sym_GT_GT] = ACTIONS(321),
        [anon_sym_and] = ACTIONS(321),
        [anon_sym_or] = ACTIONS(321),
        [anon_sym_LBRACK] = ACTIONS(321),
        [anon_sym_RBRACK] = ACTIONS(321),
        [sym_comment] = ACTIONS(83),
    },
    [79] = {
        [sym__expression] = STATE(290),
        [sym_binary_operator] = STATE(45),
        [sym_unary_operator] = STATE(45),
        [sym_subscript] = STATE(45),
        [sym_call] = STATE(45),
        [sym_list] = STATE(45),
        [sym_list_comprehension] = STATE(45),
        [sym_dictionary] = STATE(45),
        [sym_dictionary_comprehension] = STATE(45),
        [sym_set] = STATE(45),
        [sym_set_comprehension] = STATE(45),
        [anon_sym_not] = ACTIONS(249),
        [anon_sym_LBRACK] = ACTIONS(145),
        [anon_sym_LBRACE] = ACTIONS(147),
        [sym_string] = ACTIONS(149),
        [sym_number] = ACTIONS(151),
        [sym_identifier] = ACTIONS(153),
        [sym_comment] = ACTIONS(83),
    },
    [80] = {
        [sym__expression] = STATE(278),
        [sym_binary_operator] = STATE(45),
        [sym_unary_operator] = STATE(45),
        [sym_subscript] = STATE(45),
        [sym_call] = STATE(45),
        [sym_list] = STATE(45),
        [sym_list_comprehension] = STATE(45),
        [sym_dictionary] = STATE(45),
        [sym_dictionary_comprehension] = STATE(45),
        [sym_set] = STATE(45),
        [sym_set_comprehension] = STATE(45),
        [anon_sym_not] = ACTIONS(325),
        [anon_sym_LBRACK] = ACTIONS(145),
        [anon_sym_LBRACE] = ACTIONS(147),
        [sym_string] = ACTIONS(149),
        [sym_number] = ACTIONS(151),
        [sym_identifier] = ACTIONS(153),
        [sym_comment] = ACTIONS(83),
    },
    [81] = {
        [sym__expression] = STATE(276),
        [sym_binary_operator] = STATE(45),
        [sym_unary_operator] = STATE(45),
        [sym_subscript] = STATE(45),
        [sym_call] = STATE(45),
        [sym_list] = STATE(45),
        [sym_list_comprehension] = STATE(45),
        [sym_dictionary] = STATE(45),
        [sym_dictionary_comprehension] = STATE(45),
        [sym_set] = STATE(45),
        [sym_set_comprehension] = STATE(45),
        [anon_sym_not] = ACTIONS(249),
        [anon_sym_LBRACK] = ACTIONS(145),
        [anon_sym_LBRACE] = ACTIONS(147),
        [sym_string] = ACTIONS(149),
        [sym_number] = ACTIONS(151),
        [sym_identifier] = ACTIONS(153),
        [sym_comment] = ACTIONS(83),
    },
    [82] = {
        [anon_sym_LPAREN] = ACTIONS(173),
        [anon_sym_RPAREN] = ACTIONS(173),
        [anon_sym_COMMA] = ACTIONS(173),
        [anon_sym_STAR] = ACTIONS(175),
        [anon_sym_EQ] = ACTIONS(327),
        [anon_sym_PLUS] = ACTIONS(173),
        [anon_sym_DASH] = ACTIONS(173),
        [anon_sym_SLASH] = ACTIONS(173),
        [anon_sym_STAR_STAR] = ACTIONS(173),
        [anon_sym_PIPE] = ACTIONS(173),
        [anon_sym_AMP] = ACTIONS(173),
        [anon_sym_CARET] = ACTIONS(173),
        [anon_sym_LT_LT] = ACTIONS(173),
        [anon_sym_GT_GT] = ACTIONS(173),
        [anon_sym_and] = ACTIONS(173),
        [anon_sym_or] = ACTIONS(173),
        [anon_sym_LBRACK] = ACTIONS(173),
        [sym_comment] = ACTIONS(83),
    },
    [83] = {
        [anon_sym_LPAREN] = ACTIONS(265),
        [anon_sym_RPAREN] = ACTIONS(329),
        [anon_sym_COMMA] = ACTIONS(331),
        [anon_sym_STAR] = ACTIONS(333),
        [anon_sym_PLUS] = ACTIONS(335),
        [anon_sym_DASH] = ACTIONS(335),
        [anon_sym_SLASH] = ACTIONS(337),
        [anon_sym_STAR_STAR] = ACTIONS(339),
        [anon_sym_PIPE] = ACTIONS(341),
        [anon_sym_AMP] = ACTIONS(343),
        [anon_sym_CARET] = ACTIONS(345),
        [anon_sym_LT_LT] = ACTIONS(335),
        [anon_sym_GT_GT] = ACTIONS(335),
        [anon_sym_and] = ACTIONS(343),
        [anon_sym_or] = ACTIONS(341),
        [anon_sym_LBRACK] = ACTIONS(281),
        [sym_comment] = ACTIONS(83),
    },
    [84] = {
        [anon_sym_RPAREN] = ACTIONS(329),
        [anon_sym_COMMA] = ACTIONS(331),
        [sym_comment] = ACTIONS(83),
    },
    [85] = {
        [aux_sym_call_repeat2] = STATE(119),
        [anon_sym_RPAREN] = ACTIONS(329),
        [anon_sym_COMMA] = ACTIONS(347),
        [sym_comment] = ACTIONS(83),
    },
    [86] = {
        [anon_sym_RPAREN] = ACTIONS(329),
        [sym_comment] = ACTIONS(83),
    },
    [87] = {
        [sym__expression] = STATE(88),
        [sym_binary_operator] = STATE(45),
        [sym_unary_operator] = STATE(45),
        [sym_subscript] = STATE(45),
        [sym_call] = STATE(45),
        [sym_keyword_argument] = STATE(89),
        [sym_list_splat_argument] = STATE(90),
        [sym_dictionary_splat_argument] = STATE(91),
        [sym_list] = STATE(45),
        [sym_list_comprehension] = STATE(45),
        [sym_dictionary] = STATE(45),
        [sym_dictionary_comprehension] = STATE(45),
        [sym_set] = STATE(45),
        [sym_set_comprehension] = STATE(45),
        [anon_sym_STAR] = ACTIONS(245),
        [anon_sym_STAR_STAR] = ACTIONS(247),
        [anon_sym_not] = ACTIONS(249),
        [anon_sym_LBRACK] = ACTIONS(145),
        [anon_sym_LBRACE] = ACTIONS(147),
        [sym_string] = ACTIONS(149),
        [sym_number] = ACTIONS(151),
        [sym_identifier] = ACTIONS(251),
        [sym_comment] = ACTIONS(83),
    },
    [88] = {
        [anon_sym_LPAREN] = ACTIONS(265),
        [anon_sym_RPAREN] = ACTIONS(349),
        [anon_sym_COMMA] = ACTIONS(351),
        [anon_sym_STAR] = ACTIONS(333),
        [anon_sym_PLUS] = ACTIONS(335),
        [anon_sym_DASH] = ACTIONS(335),
        [anon_sym_SLASH] = ACTIONS(337),
        [anon_sym_STAR_STAR] = ACTIONS(339),
        [anon_sym_PIPE] = ACTIONS(341),
        [anon_sym_AMP] = ACTIONS(343),
        [anon_sym_CARET] = ACTIONS(345),
        [anon_sym_LT_LT] = ACTIONS(335),
        [anon_sym_GT_GT] = ACTIONS(335),
        [anon_sym_and] = ACTIONS(343),
        [anon_sym_or] = ACTIONS(341),
        [anon_sym_LBRACK] = ACTIONS(281),
        [sym_comment] = ACTIONS(83),
    },
    [89] = {
        [anon_sym_RPAREN] = ACTIONS(349),
        [anon_sym_COMMA] = ACTIONS(351),
        [sym_comment] = ACTIONS(83),
    },
    [90] = {
        [aux_sym_call_repeat2] = STATE(94),
        [anon_sym_RPAREN] = ACTIONS(349),
        [anon_sym_COMMA] = ACTIONS(353),
        [sym_comment] = ACTIONS(83),
    },
    [91] = {
        [anon_sym_RPAREN] = ACTIONS(349),
        [sym_comment] = ACTIONS(83),
    },
    [92] = {
        [anon_sym_LPAREN] = ACTIONS(355),
        [anon_sym_RPAREN] = ACTIONS(355),
        [anon_sym_COMMA] = ACTIONS(355),
        [anon_sym_as] = ACTIONS(355),
        [anon_sym_STAR] = ACTIONS(357),
        [anon_sym_COLON] = ACTIONS(355),
        [anon_sym_for] = ACTIONS(355),
        [anon_sym_in] = ACTIONS(355),
        [anon_sym_PLUS] = ACTIONS(355),
        [anon_sym_DASH] = ACTIONS(355),
        [anon_sym_SLASH] = ACTIONS(355),
        [anon_sym_STAR_STAR] = ACTIONS(355),
        [anon_sym_PIPE] = ACTIONS(355),
        [anon_sym_AMP] = ACTIONS(355),
        [anon_sym_CARET] = ACTIONS(355),
        [anon_sym_LT_LT] = ACTIONS(355),
        [anon_sym_GT_GT] = ACTIONS(355),
        [anon_sym_and] = ACTIONS(355),
        [anon_sym_or] = ACTIONS(355),
        [anon_sym_LBRACK] = ACTIONS(355),
        [anon_sym_RBRACK] = ACTIONS(355),
        [anon_sym_RBRACE] = ACTIONS(355),
        [sym_comment] = ACTIONS(83),
    },
    [93] = {
        [sym__expression] = STATE(112),
        [sym_binary_operator] = STATE(45),
        [sym_unary_operator] = STATE(45),
        [sym_subscript] = STATE(45),
        [sym_call] = STATE(45),
        [sym_keyword_argument] = STATE(113),
        [sym_dictionary_splat_argument] = STATE(114),
        [sym_list] = STATE(45),
        [sym_list_comprehension] = STATE(45),
        [sym_dictionary] = STATE(45),
        [sym_dictionary_comprehension] = STATE(45),
        [sym_set] = STATE(45),
        [sym_set_comprehension] = STATE(45),
        [anon_sym_STAR_STAR] = ACTIONS(247),
        [anon_sym_not] = ACTIONS(249),
        [anon_sym_LBRACK] = ACTIONS(145),
        [anon_sym_LBRACE] = ACTIONS(147),
        [sym_string] = ACTIONS(149),
        [sym_number] = ACTIONS(151),
        [sym_identifier] = ACTIONS(251),
        [sym_comment] = ACTIONS(83),
    },
    [94] = {
        [anon_sym_RPAREN] = ACTIONS(359),
        [anon_sym_COMMA] = ACTIONS(361),
        [sym_comment] = ACTIONS(83),
    },
    [95] = {
        [anon_sym_LPAREN] = ACTIONS(363),
        [anon_sym_RPAREN] = ACTIONS(363),
        [anon_sym_COMMA] = ACTIONS(363),
        [anon_sym_as] = ACTIONS(363),
        [anon_sym_STAR] = ACTIONS(365),
        [anon_sym_COLON] = ACTIONS(363),
        [anon_sym_for] = ACTIONS(363),
        [anon_sym_in] = ACTIONS(363),
        [anon_sym_PLUS] = ACTIONS(363),
        [anon_sym_DASH] = ACTIONS(363),
        [anon_sym_SLASH] = ACTIONS(363),
        [anon_sym_STAR_STAR] = ACTIONS(363),
        [anon_sym_PIPE] = ACTIONS(363),
        [anon_sym_AMP] = ACTIONS(363),
        [anon_sym_CARET] = ACTIONS(363),
        [anon_sym_LT_LT] = ACTIONS(363),
        [anon_sym_GT_GT] = ACTIONS(363),
        [anon_sym_and] = ACTIONS(363),
        [anon_sym_or] = ACTIONS(363),
        [anon_sym_LBRACK] = ACTIONS(363),
        [anon_sym_RBRACK] = ACTIONS(363),
        [anon_sym_RBRACE] = ACTIONS(363),
        [sym_comment] = ACTIONS(83),
    },
    [96] = {
        [sym__expression] = STATE(97),
        [sym_binary_operator] = STATE(45),
        [sym_unary_operator] = STATE(45),
        [sym_subscript] = STATE(45),
        [sym_call] = STATE(45),
        [sym_keyword_argument] = STATE(98),
        [sym_dictionary_splat_argument] = STATE(99),
        [sym_list] = STATE(45),
        [sym_list_comprehension] = STATE(45),
        [sym_dictionary] = STATE(45),
        [sym_dictionary_comprehension] = STATE(45),
        [sym_set] = STATE(45),
        [sym_set_comprehension] = STATE(45),
        [anon_sym_STAR_STAR] = ACTIONS(247),
        [anon_sym_not] = ACTIONS(249),
        [anon_sym_LBRACK] = ACTIONS(145),
        [anon_sym_LBRACE] = ACTIONS(147),
        [sym_string] = ACTIONS(149),
        [sym_number] = ACTIONS(151),
        [sym_identifier] = ACTIONS(251),
        [sym_comment] = ACTIONS(83),
    },
    [97] = {
        [anon_sym_LPAREN] = ACTIONS(265),
        [anon_sym_RPAREN] = ACTIONS(367),
        [anon_sym_COMMA] = ACTIONS(367),
        [anon_sym_STAR] = ACTIONS(333),
        [anon_sym_PLUS] = ACTIONS(335),
        [anon_sym_DASH] = ACTIONS(335),
        [anon_sym_SLASH] = ACTIONS(337),
        [anon_sym_STAR_STAR] = ACTIONS(339),
        [anon_sym_PIPE] = ACTIONS(341),
        [anon_sym_AMP] = ACTIONS(343),
        [anon_sym_CARET] = ACTIONS(345),
        [anon_sym_LT_LT] = ACTIONS(335),
        [anon_sym_GT_GT] = ACTIONS(335),
        [anon_sym_and] = ACTIONS(343),
        [anon_sym_or] = ACTIONS(341),
        [anon_sym_LBRACK] = ACTIONS(281),
        [sym_comment] = ACTIONS(83),
    },
    [98] = {
        [anon_sym_RPAREN] = ACTIONS(367),
        [anon_sym_COMMA] = ACTIONS(367),
        [sym_comment] = ACTIONS(83),
    },
    [99] = {
        [anon_sym_RPAREN] = ACTIONS(369),
        [sym_comment] = ACTIONS(83),
    },
    [100] = {
        [anon_sym_LPAREN] = ACTIONS(371),
        [anon_sym_RPAREN] = ACTIONS(371),
        [anon_sym_COMMA] = ACTIONS(371),
        [anon_sym_as] = ACTIONS(371),
        [anon_sym_STAR] = ACTIONS(373),
        [anon_sym_COLON] = ACTIONS(371),
        [anon_sym_for] = ACTIONS(371),
        [anon_sym_in] = ACTIONS(371),
        [anon_sym_PLUS] = ACTIONS(371),
        [anon_sym_DASH] = ACTIONS(371),
        [anon_sym_SLASH] = ACTIONS(371),
        [anon_sym_STAR_STAR] = ACTIONS(371),
        [anon_sym_PIPE] = ACTIONS(371),
        [anon_sym_AMP] = ACTIONS(371),
        [anon_sym_CARET] = ACTIONS(371),
        [anon_sym_LT_LT] = ACTIONS(371),
        [anon_sym_GT_GT] = ACTIONS(371),
        [anon_sym_and] = ACTIONS(371),
        [anon_sym_or] = ACTIONS(371),
        [anon_sym_LBRACK] = ACTIONS(371),
        [anon_sym_RBRACK] = ACTIONS(371),
        [anon_sym_RBRACE] = ACTIONS(371),
        [sym_comment] = ACTIONS(83),
    },
    [101] = {
        [sym__expression] = STATE(111),
        [sym_binary_operator] = STATE(45),
        [sym_unary_operator] = STATE(45),
        [sym_subscript] = STATE(45),
        [sym_call] = STATE(45),
        [sym_list] = STATE(45),
        [sym_list_comprehension] = STATE(45),
        [sym_dictionary] = STATE(45),
        [sym_dictionary_comprehension] = STATE(45),
        [sym_set] = STATE(45),
        [sym_set_comprehension] = STATE(45),
        [anon_sym_not] = ACTIONS(249),
        [anon_sym_LBRACK] = ACTIONS(145),
        [anon_sym_LBRACE] = ACTIONS(147),
        [sym_string] = ACTIONS(149),
        [sym_number] = ACTIONS(151),
        [sym_identifier] = ACTIONS(153),
        [sym_comment] = ACTIONS(83),
    },
    [102] = {
        [sym__expression] = STATE(109),
        [sym_binary_operator] = STATE(45),
        [sym_unary_operator] = STATE(45),
        [sym_subscript] = STATE(45),
        [sym_call] = STATE(45),
        [sym_list] = STATE(45),
        [sym_list_comprehension] = STATE(45),
        [sym_dictionary] = STATE(45),
        [sym_dictionary_comprehension] = STATE(45),
        [sym_set] = STATE(45),
        [sym_set_comprehension] = STATE(45),
        [anon_sym_not] = ACTIONS(249),
        [anon_sym_LBRACK] = ACTIONS(145),
        [anon_sym_LBRACE] = ACTIONS(147),
        [sym_string] = ACTIONS(149),
        [sym_number] = ACTIONS(151),
        [sym_identifier] = ACTIONS(153),
        [sym_comment] = ACTIONS(83),
    },
    [103] = {
        [sym__expression] = STATE(77),
        [sym_binary_operator] = STATE(45),
        [sym_unary_operator] = STATE(45),
        [sym_subscript] = STATE(45),
        [sym_call] = STATE(45),
        [sym_list] = STATE(45),
        [sym_list_comprehension] = STATE(45),
        [sym_dictionary] = STATE(45),
        [sym_dictionary_comprehension] = STATE(45),
        [sym_set] = STATE(45),
        [sym_set_comprehension] = STATE(45),
        [anon_sym_not] = ACTIONS(249),
        [anon_sym_LBRACK] = ACTIONS(145),
        [anon_sym_LBRACE] = ACTIONS(147),
        [sym_string] = ACTIONS(149),
        [sym_number] = ACTIONS(151),
        [sym_identifier] = ACTIONS(153),
        [sym_comment] = ACTIONS(83),
    },
    [104] = {
        [sym__expression] = STATE(107),
        [sym_binary_operator] = STATE(45),
        [sym_unary_operator] = STATE(45),
        [sym_subscript] = STATE(45),
        [sym_call] = STATE(45),
        [sym_list] = STATE(45),
        [sym_list_comprehension] = STATE(45),
        [sym_dictionary] = STATE(45),
        [sym_dictionary_comprehension] = STATE(45),
        [sym_set] = STATE(45),
        [sym_set_comprehension] = STATE(45),
        [anon_sym_not] = ACTIONS(249),
        [anon_sym_LBRACK] = ACTIONS(145),
        [anon_sym_LBRACE] = ACTIONS(147),
        [sym_string] = ACTIONS(149),
        [sym_number] = ACTIONS(151),
        [sym_identifier] = ACTIONS(153),
        [sym_comment] = ACTIONS(83),
    },
    [105] = {
        [sym__expression] = STATE(108),
        [sym_binary_operator] = STATE(45),
        [sym_unary_operator] = STATE(45),
        [sym_subscript] = STATE(45),
        [sym_call] = STATE(45),
        [sym_list] = STATE(45),
        [sym_list_comprehension] = STATE(45),
        [sym_dictionary] = STATE(45),
        [sym_dictionary_comprehension] = STATE(45),
        [sym_set] = STATE(45),
        [sym_set_comprehension] = STATE(45),
        [anon_sym_not] = ACTIONS(249),
        [anon_sym_LBRACK] = ACTIONS(145),
        [anon_sym_LBRACE] = ACTIONS(147),
        [sym_string] = ACTIONS(149),
        [sym_number] = ACTIONS(151),
        [sym_identifier] = ACTIONS(153),
        [sym_comment] = ACTIONS(83),
    },
    [106] = {
        [sym__expression] = STATE(110),
        [sym_binary_operator] = STATE(45),
        [sym_unary_operator] = STATE(45),
        [sym_subscript] = STATE(45),
        [sym_call] = STATE(45),
        [sym_list] = STATE(45),
        [sym_list_comprehension] = STATE(45),
        [sym_dictionary] = STATE(45),
        [sym_dictionary_comprehension] = STATE(45),
        [sym_set] = STATE(45),
        [sym_set_comprehension] = STATE(45),
        [anon_sym_not] = ACTIONS(249),
        [anon_sym_LBRACK] = ACTIONS(145),
        [anon_sym_LBRACE] = ACTIONS(147),
        [sym_string] = ACTIONS(149),
        [sym_number] = ACTIONS(151),
        [sym_identifier] = ACTIONS(153),
        [sym_comment] = ACTIONS(83),
    },
    [107] = {
        [anon_sym_LPAREN] = ACTIONS(265),
        [anon_sym_RPAREN] = ACTIONS(321),
        [anon_sym_COMMA] = ACTIONS(321),
        [anon_sym_STAR] = ACTIONS(333),
        [anon_sym_PLUS] = ACTIONS(335),
        [anon_sym_DASH] = ACTIONS(335),
        [anon_sym_SLASH] = ACTIONS(337),
        [anon_sym_STAR_STAR] = ACTIONS(339),
        [anon_sym_PIPE] = ACTIONS(321),
        [anon_sym_AMP] = ACTIONS(343),
        [anon_sym_CARET] = ACTIONS(345),
        [anon_sym_LT_LT] = ACTIONS(335),
        [anon_sym_GT_GT] = ACTIONS(335),
        [anon_sym_and] = ACTIONS(343),
        [anon_sym_or] = ACTIONS(321),
        [anon_sym_LBRACK] = ACTIONS(321),
        [sym_comment] = ACTIONS(83),
    },
    [108] = {
        [anon_sym_LPAREN] = ACTIONS(265),
        [anon_sym_RPAREN] = ACTIONS(321),
        [anon_sym_COMMA] = ACTIONS(321),
        [anon_sym_STAR] = ACTIONS(333),
        [anon_sym_PLUS] = ACTIONS(335),
        [anon_sym_DASH] = ACTIONS(335),
        [anon_sym_SLASH] = ACTIONS(337),
        [anon_sym_STAR_STAR] = ACTIONS(339),
        [anon_sym_PIPE] = ACTIONS(321),
        [anon_sym_AMP] = ACTIONS(321),
        [anon_sym_CARET] = ACTIONS(345),
        [anon_sym_LT_LT] = ACTIONS(335),
        [anon_sym_GT_GT] = ACTIONS(335),
        [anon_sym_and] = ACTIONS(321),
        [anon_sym_or] = ACTIONS(321),
        [anon_sym_LBRACK] = ACTIONS(321),
        [sym_comment] = ACTIONS(83),
    },
    [109] = {
        [anon_sym_LPAREN] = ACTIONS(265),
        [anon_sym_RPAREN] = ACTIONS(321),
        [anon_sym_COMMA] = ACTIONS(321),
        [anon_sym_STAR] = ACTIONS(333),
        [anon_sym_PLUS] = ACTIONS(321),
        [anon_sym_DASH] = ACTIONS(321),
        [anon_sym_SLASH] = ACTIONS(337),
        [anon_sym_STAR_STAR] = ACTIONS(339),
        [anon_sym_PIPE] = ACTIONS(321),
        [anon_sym_AMP] = ACTIONS(321),
        [anon_sym_CARET] = ACTIONS(321),
        [anon_sym_LT_LT] = ACTIONS(321),
        [anon_sym_GT_GT] = ACTIONS(321),
        [anon_sym_and] = ACTIONS(321),
        [anon_sym_or] = ACTIONS(321),
        [anon_sym_LBRACK] = ACTIONS(321),
        [sym_comment] = ACTIONS(83),
    },
    [110] = {
        [anon_sym_LPAREN] = ACTIONS(265),
        [anon_sym_RPAREN] = ACTIONS(321),
        [anon_sym_COMMA] = ACTIONS(321),
        [anon_sym_STAR] = ACTIONS(333),
        [anon_sym_PLUS] = ACTIONS(335),
        [anon_sym_DASH] = ACTIONS(335),
        [anon_sym_SLASH] = ACTIONS(337),
        [anon_sym_STAR_STAR] = ACTIONS(339),
        [anon_sym_PIPE] = ACTIONS(321),
        [anon_sym_AMP] = ACTIONS(321),
        [anon_sym_CARET] = ACTIONS(321),
        [anon_sym_LT_LT] = ACTIONS(335),
        [anon_sym_GT_GT] = ACTIONS(335),
        [anon_sym_and] = ACTIONS(321),
        [anon_sym_or] = ACTIONS(321),
        [anon_sym_LBRACK] = ACTIONS(321),
        [sym_comment] = ACTIONS(83),
    },
    [111] = {
        [anon_sym_LPAREN] = ACTIONS(265),
        [anon_sym_RPAREN] = ACTIONS(321),
        [anon_sym_COMMA] = ACTIONS(321),
        [anon_sym_STAR] = ACTIONS(323),
        [anon_sym_PLUS] = ACTIONS(321),
        [anon_sym_DASH] = ACTIONS(321),
        [anon_sym_SLASH] = ACTIONS(321),
        [anon_sym_STAR_STAR] = ACTIONS(339),
        [anon_sym_PIPE] = ACTIONS(321),
        [anon_sym_AMP] = ACTIONS(321),
        [anon_sym_CARET] = ACTIONS(321),
        [anon_sym_LT_LT] = ACTIONS(321),
        [anon_sym_GT_GT] = ACTIONS(321),
        [anon_sym_and] = ACTIONS(321),
        [anon_sym_or] = ACTIONS(321),
        [anon_sym_LBRACK] = ACTIONS(321),
        [sym_comment] = ACTIONS(83),
    },
    [112] = {
        [anon_sym_LPAREN] = ACTIONS(265),
        [anon_sym_RPAREN] = ACTIONS(375),
        [anon_sym_COMMA] = ACTIONS(375),
        [anon_sym_STAR] = ACTIONS(333),
        [anon_sym_PLUS] = ACTIONS(335),
        [anon_sym_DASH] = ACTIONS(335),
        [anon_sym_SLASH] = ACTIONS(337),
        [anon_sym_STAR_STAR] = ACTIONS(339),
        [anon_sym_PIPE] = ACTIONS(341),
        [anon_sym_AMP] = ACTIONS(343),
        [anon_sym_CARET] = ACTIONS(345),
        [anon_sym_LT_LT] = ACTIONS(335),
        [anon_sym_GT_GT] = ACTIONS(335),
        [anon_sym_and] = ACTIONS(343),
        [anon_sym_or] = ACTIONS(341),
        [anon_sym_LBRACK] = ACTIONS(281),
        [sym_comment] = ACTIONS(83),
    },
    [113] = {
        [anon_sym_RPAREN] = ACTIONS(375),
        [anon_sym_COMMA] = ACTIONS(375),
        [sym_comment] = ACTIONS(83),
    },
    [114] = {
        [anon_sym_RPAREN] = ACTIONS(377),
        [sym_comment] = ACTIONS(83),
    },
    [115] = {
        [anon_sym_LPAREN] = ACTIONS(379),
        [anon_sym_RPAREN] = ACTIONS(379),
        [anon_sym_COMMA] = ACTIONS(379),
        [anon_sym_as] = ACTIONS(379),
        [anon_sym_STAR] = ACTIONS(381),
        [anon_sym_COLON] = ACTIONS(379),
        [anon_sym_for] = ACTIONS(379),
        [anon_sym_in] = ACTIONS(379),
        [anon_sym_PLUS] = ACTIONS(379),
        [anon_sym_DASH] = ACTIONS(379),
        [anon_sym_SLASH] = ACTIONS(379),
        [anon_sym_STAR_STAR] = ACTIONS(379),
        [anon_sym_PIPE] = ACTIONS(379),
        [anon_sym_AMP] = ACTIONS(379),
        [anon_sym_CARET] = ACTIONS(379),
        [anon_sym_LT_LT] = ACTIONS(379),
        [anon_sym_GT_GT] = ACTIONS(379),
        [anon_sym_and] = ACTIONS(379),
        [anon_sym_or] = ACTIONS(379),
        [anon_sym_LBRACK] = ACTIONS(379),
        [anon_sym_RBRACK] = ACTIONS(379),
        [anon_sym_RBRACE] = ACTIONS(379),
        [sym_comment] = ACTIONS(83),
    },
    [116] = {
        [anon_sym_RPAREN] = ACTIONS(359),
        [anon_sym_STAR] = ACTIONS(383),
        [anon_sym_STAR_STAR] = ACTIONS(385),
        [anon_sym_not] = ACTIONS(383),
        [anon_sym_LBRACK] = ACTIONS(385),
        [anon_sym_LBRACE] = ACTIONS(385),
        [sym_string] = ACTIONS(385),
        [sym_number] = ACTIONS(383),
        [sym_identifier] = ACTIONS(387),
        [sym_comment] = ACTIONS(83),
    },
    [117] = {
        [anon_sym_LPAREN] = ACTIONS(389),
        [anon_sym_RPAREN] = ACTIONS(389),
        [anon_sym_COMMA] = ACTIONS(389),
        [anon_sym_as] = ACTIONS(389),
        [anon_sym_STAR] = ACTIONS(391),
        [anon_sym_COLON] = ACTIONS(389),
        [anon_sym_for] = ACTIONS(389),
        [anon_sym_in] = ACTIONS(389),
        [anon_sym_PLUS] = ACTIONS(389),
        [anon_sym_DASH] = ACTIONS(389),
        [anon_sym_SLASH] = ACTIONS(389),
        [anon_sym_STAR_STAR] = ACTIONS(389),
        [anon_sym_PIPE] = ACTIONS(389),
        [anon_sym_AMP] = ACTIONS(389),
        [anon_sym_CARET] = ACTIONS(389),
        [anon_sym_LT_LT] = ACTIONS(389),
        [anon_sym_GT_GT] = ACTIONS(389),
        [anon_sym_and] = ACTIONS(389),
        [anon_sym_or] = ACTIONS(389),
        [anon_sym_LBRACK] = ACTIONS(389),
        [anon_sym_RBRACK] = ACTIONS(389),
        [anon_sym_RBRACE] = ACTIONS(389),
        [sym_comment] = ACTIONS(83),
    },
    [118] = {
        [sym__expression] = STATE(112),
        [sym_binary_operator] = STATE(45),
        [sym_unary_operator] = STATE(45),
        [sym_subscript] = STATE(45),
        [sym_call] = STATE(45),
        [sym_keyword_argument] = STATE(113),
        [sym_dictionary_splat_argument] = STATE(121),
        [sym_list] = STATE(45),
        [sym_list_comprehension] = STATE(45),
        [sym_dictionary] = STATE(45),
        [sym_dictionary_comprehension] = STATE(45),
        [sym_set] = STATE(45),
        [sym_set_comprehension] = STATE(45),
        [anon_sym_STAR_STAR] = ACTIONS(247),
        [anon_sym_not] = ACTIONS(249),
        [anon_sym_LBRACK] = ACTIONS(145),
        [anon_sym_LBRACE] = ACTIONS(147),
        [sym_string] = ACTIONS(149),
        [sym_number] = ACTIONS(151),
        [sym_identifier] = ACTIONS(251),
        [sym_comment] = ACTIONS(83),
    },
    [119] = {
        [anon_sym_RPAREN] = ACTIONS(349),
        [anon_sym_COMMA] = ACTIONS(393),
        [sym_comment] = ACTIONS(83),
    },
    [120] = {
        [sym__expression] = STATE(97),
        [sym_binary_operator] = STATE(45),
        [sym_unary_operator] = STATE(45),
        [sym_subscript] = STATE(45),
        [sym_call] = STATE(45),
        [sym_keyword_argument] = STATE(98),
        [sym_dictionary_splat_argument] = STATE(114),
        [sym_list] = STATE(45),
        [sym_list_comprehension] = STATE(45),
        [sym_dictionary] = STATE(45),
        [sym_dictionary_comprehension] = STATE(45),
        [sym_set] = STATE(45),
        [sym_set_comprehension] = STATE(45),
        [anon_sym_STAR_STAR] = ACTIONS(247),
        [anon_sym_not] = ACTIONS(249),
        [anon_sym_LBRACK] = ACTIONS(145),
        [anon_sym_LBRACE] = ACTIONS(147),
        [sym_string] = ACTIONS(149),
        [sym_number] = ACTIONS(151),
        [sym_identifier] = ACTIONS(251),
        [sym_comment] = ACTIONS(83),
    },
    [121] = {
        [anon_sym_RPAREN] = ACTIONS(359),
        [sym_comment] = ACTIONS(83),
    },
    [122] = {
        [anon_sym_RPAREN] = ACTIONS(349),
        [anon_sym_STAR] = ACTIONS(395),
        [anon_sym_STAR_STAR] = ACTIONS(397),
        [anon_sym_not] = ACTIONS(395),
        [anon_sym_LBRACK] = ACTIONS(397),
        [anon_sym_LBRACE] = ACTIONS(397),
        [sym_string] = ACTIONS(397),
        [sym_number] = ACTIONS(395),
        [sym_identifier] = ACTIONS(399),
        [sym_comment] = ACTIONS(83),
    },
    [123] = {
        [sym__expression] = STATE(124),
        [sym_binary_operator] = STATE(45),
        [sym_unary_operator] = STATE(45),
        [sym_subscript] = STATE(45),
        [sym_call] = STATE(45),
        [sym_list] = STATE(45),
        [sym_list_comprehension] = STATE(45),
        [sym_dictionary] = STATE(45),
        [sym_dictionary_comprehension] = STATE(45),
        [sym_set] = STATE(45),
        [sym_set_comprehension] = STATE(45),
        [anon_sym_not] = ACTIONS(249),
        [anon_sym_LBRACK] = ACTIONS(145),
        [anon_sym_LBRACE] = ACTIONS(147),
        [sym_string] = ACTIONS(149),
        [sym_number] = ACTIONS(151),
        [sym_identifier] = ACTIONS(153),
        [sym_comment] = ACTIONS(83),
    },
    [124] = {
        [anon_sym_LPAREN] = ACTIONS(265),
        [anon_sym_RPAREN] = ACTIONS(401),
        [anon_sym_COMMA] = ACTIONS(401),
        [anon_sym_STAR] = ACTIONS(333),
        [anon_sym_PLUS] = ACTIONS(335),
        [anon_sym_DASH] = ACTIONS(335),
        [anon_sym_SLASH] = ACTIONS(337),
        [anon_sym_STAR_STAR] = ACTIONS(339),
        [anon_sym_PIPE] = ACTIONS(341),
        [anon_sym_AMP] = ACTIONS(343),
        [anon_sym_CARET] = ACTIONS(345),
        [anon_sym_LT_LT] = ACTIONS(335),
        [anon_sym_GT_GT] = ACTIONS(335),
        [anon_sym_and] = ACTIONS(343),
        [anon_sym_or] = ACTIONS(341),
        [anon_sym_LBRACK] = ACTIONS(281),
        [sym_comment] = ACTIONS(83),
    },
    [125] = {
        [sym__expression] = STATE(276),
        [sym_binary_operator] = STATE(45),
        [sym_unary_operator] = STATE(45),
        [sym_subscript] = STATE(45),
        [sym_call] = STATE(45),
        [sym_list] = STATE(45),
        [sym_list_comprehension] = STATE(45),
        [sym_dictionary] = STATE(45),
        [sym_dictionary_comprehension] = STATE(45),
        [sym_set] = STATE(45),
        [sym_set_comprehension] = STATE(45),
        [anon_sym_not] = ACTIONS(169),
        [anon_sym_LBRACK] = ACTIONS(145),
        [anon_sym_LBRACE] = ACTIONS(147),
        [sym_string] = ACTIONS(149),
        [sym_number] = ACTIONS(151),
        [sym_identifier] = ACTIONS(153),
        [sym_comment] = ACTIONS(83),
    },
    [126] = {
        [anon_sym_LPAREN] = ACTIONS(403),
        [anon_sym_RPAREN] = ACTIONS(403),
        [anon_sym_COMMA] = ACTIONS(403),
        [anon_sym_as] = ACTIONS(403),
        [anon_sym_STAR] = ACTIONS(405),
        [anon_sym_COLON] = ACTIONS(403),
        [anon_sym_for] = ACTIONS(403),
        [anon_sym_in] = ACTIONS(403),
        [anon_sym_PLUS] = ACTIONS(403),
        [anon_sym_DASH] = ACTIONS(403),
        [anon_sym_SLASH] = ACTIONS(403),
        [anon_sym_STAR_STAR] = ACTIONS(403),
        [anon_sym_PIPE] = ACTIONS(403),
        [anon_sym_AMP] = ACTIONS(403),
        [anon_sym_CARET] = ACTIONS(403),
        [anon_sym_LT_LT] = ACTIONS(403),
        [anon_sym_GT_GT] = ACTIONS(403),
        [anon_sym_and] = ACTIONS(403),
        [anon_sym_or] = ACTIONS(403),
        [anon_sym_LBRACK] = ACTIONS(403),
        [anon_sym_RBRACK] = ACTIONS(403),
        [anon_sym_RBRACE] = ACTIONS(403),
        [sym_comment] = ACTIONS(83),
    },
    [127] = {
        [aux_sym_print_statement_repeat1] = STATE(209),
        [anon_sym_LPAREN] = ACTIONS(265),
        [anon_sym_COMMA] = ACTIONS(407),
        [anon_sym_STAR] = ACTIONS(409),
        [anon_sym_COLON] = ACTIONS(411),
        [anon_sym_for] = ACTIONS(413),
        [anon_sym_PLUS] = ACTIONS(415),
        [anon_sym_DASH] = ACTIONS(415),
        [anon_sym_SLASH] = ACTIONS(417),
        [anon_sym_STAR_STAR] = ACTIONS(419),
        [anon_sym_PIPE] = ACTIONS(421),
        [anon_sym_AMP] = ACTIONS(423),
        [anon_sym_CARET] = ACTIONS(425),
        [anon_sym_LT_LT] = ACTIONS(415),
        [anon_sym_GT_GT] = ACTIONS(415),
        [anon_sym_and] = ACTIONS(423),
        [anon_sym_or] = ACTIONS(421),
        [anon_sym_LBRACK] = ACTIONS(281),
        [anon_sym_RBRACE] = ACTIONS(427),
        [sym_comment] = ACTIONS(83),
    },
    [128] = {
        [aux_sym_dictionary_repeat1] = STATE(132),
        [anon_sym_COMMA] = ACTIONS(429),
        [anon_sym_for] = ACTIONS(431),
        [anon_sym_RBRACE] = ACTIONS(433),
        [sym_comment] = ACTIONS(83),
    },
    [129] = {
        [sym__expression] = STATE(137),
        [sym_binary_operator] = STATE(45),
        [sym_unary_operator] = STATE(45),
        [sym_subscript] = STATE(45),
        [sym_call] = STATE(45),
        [sym_list] = STATE(45),
        [sym_list_comprehension] = STATE(45),
        [sym_dictionary] = STATE(45),
        [sym_dictionary_comprehension] = STATE(45),
        [sym_pair] = STATE(198),
        [sym_set] = STATE(45),
        [sym_set_comprehension] = STATE(45),
        [anon_sym_not] = ACTIONS(143),
        [anon_sym_LBRACK] = ACTIONS(145),
        [anon_sym_LBRACE] = ACTIONS(147),
        [anon_sym_RBRACE] = ACTIONS(435),
        [sym_string] = ACTIONS(149),
        [sym_number] = ACTIONS(151),
        [sym_identifier] = ACTIONS(153),
        [sym_comment] = ACTIONS(83),
    },
    [130] = {
        [sym_expression_list] = STATE(165),
        [sym__expression] = STATE(166),
        [sym_binary_operator] = STATE(45),
        [sym_unary_operator] = STATE(45),
        [sym_subscript] = STATE(45),
        [sym_call] = STATE(45),
        [sym_list] = STATE(45),
        [sym_list_comprehension] = STATE(45),
        [sym_dictionary] = STATE(45),
        [sym_dictionary_comprehension] = STATE(45),
        [sym_set] = STATE(45),
        [sym_set_comprehension] = STATE(45),
        [anon_sym_not] = ACTIONS(155),
        [anon_sym_LBRACK] = ACTIONS(145),
        [anon_sym_LBRACE] = ACTIONS(147),
        [sym_string] = ACTIONS(149),
        [sym_number] = ACTIONS(151),
        [sym_identifier] = ACTIONS(153),
        [sym_comment] = ACTIONS(83),
    },
    [131] = {
        [anon_sym_LPAREN] = ACTIONS(437),
        [anon_sym_RPAREN] = ACTIONS(437),
        [anon_sym_COMMA] = ACTIONS(437),
        [anon_sym_as] = ACTIONS(437),
        [anon_sym_STAR] = ACTIONS(439),
        [anon_sym_COLON] = ACTIONS(437),
        [anon_sym_for] = ACTIONS(437),
        [anon_sym_in] = ACTIONS(437),
        [anon_sym_PLUS] = ACTIONS(437),
        [anon_sym_DASH] = ACTIONS(437),
        [anon_sym_SLASH] = ACTIONS(437),
        [anon_sym_STAR_STAR] = ACTIONS(437),
        [anon_sym_PIPE] = ACTIONS(437),
        [anon_sym_AMP] = ACTIONS(437),
        [anon_sym_CARET] = ACTIONS(437),
        [anon_sym_LT_LT] = ACTIONS(437),
        [anon_sym_GT_GT] = ACTIONS(437),
        [anon_sym_and] = ACTIONS(437),
        [anon_sym_or] = ACTIONS(437),
        [anon_sym_LBRACK] = ACTIONS(437),
        [anon_sym_RBRACK] = ACTIONS(437),
        [anon_sym_RBRACE] = ACTIONS(437),
        [sym_comment] = ACTIONS(83),
    },
    [132] = {
        [anon_sym_COMMA] = ACTIONS(441),
        [anon_sym_RBRACE] = ACTIONS(435),
        [sym_comment] = ACTIONS(83),
    },
    [133] = {
        [sym__expression] = STATE(137),
        [sym_binary_operator] = STATE(45),
        [sym_unary_operator] = STATE(45),
        [sym_subscript] = STATE(45),
        [sym_call] = STATE(45),
        [sym_list] = STATE(45),
        [sym_list_comprehension] = STATE(45),
        [sym_dictionary] = STATE(45),
        [sym_dictionary_comprehension] = STATE(45),
        [sym_pair] = STATE(138),
        [sym_set] = STATE(45),
        [sym_set_comprehension] = STATE(45),
        [anon_sym_not] = ACTIONS(143),
        [anon_sym_LBRACK] = ACTIONS(145),
        [anon_sym_LBRACE] = ACTIONS(147),
        [anon_sym_RBRACE] = ACTIONS(443),
        [sym_string] = ACTIONS(149),
        [sym_number] = ACTIONS(151),
        [sym_identifier] = ACTIONS(153),
        [sym_comment] = ACTIONS(83),
    },
    [134] = {
        [anon_sym_LPAREN] = ACTIONS(445),
        [anon_sym_RPAREN] = ACTIONS(445),
        [anon_sym_COMMA] = ACTIONS(445),
        [anon_sym_as] = ACTIONS(445),
        [anon_sym_STAR] = ACTIONS(447),
        [anon_sym_COLON] = ACTIONS(445),
        [anon_sym_for] = ACTIONS(445),
        [anon_sym_in] = ACTIONS(445),
        [anon_sym_PLUS] = ACTIONS(445),
        [anon_sym_DASH] = ACTIONS(445),
        [anon_sym_SLASH] = ACTIONS(445),
        [anon_sym_STAR_STAR] = ACTIONS(445),
        [anon_sym_PIPE] = ACTIONS(445),
        [anon_sym_AMP] = ACTIONS(445),
        [anon_sym_CARET] = ACTIONS(445),
        [anon_sym_LT_LT] = ACTIONS(445),
        [anon_sym_GT_GT] = ACTIONS(445),
        [anon_sym_and] = ACTIONS(445),
        [anon_sym_or] = ACTIONS(445),
        [anon_sym_LBRACK] = ACTIONS(445),
        [anon_sym_RBRACK] = ACTIONS(445),
        [anon_sym_RBRACE] = ACTIONS(445),
        [sym_comment] = ACTIONS(83),
    },
    [135] = {
        [sym__expression] = STATE(276),
        [sym_binary_operator] = STATE(45),
        [sym_unary_operator] = STATE(45),
        [sym_subscript] = STATE(45),
        [sym_call] = STATE(45),
        [sym_list] = STATE(45),
        [sym_list_comprehension] = STATE(45),
        [sym_dictionary] = STATE(45),
        [sym_dictionary_comprehension] = STATE(45),
        [sym_set] = STATE(45),
        [sym_set_comprehension] = STATE(45),
        [anon_sym_not] = ACTIONS(143),
        [anon_sym_LBRACK] = ACTIONS(145),
        [anon_sym_LBRACE] = ACTIONS(147),
        [sym_string] = ACTIONS(149),
        [sym_number] = ACTIONS(151),
        [sym_identifier] = ACTIONS(153),
        [sym_comment] = ACTIONS(83),
    },
    [136] = {
        [anon_sym_LPAREN] = ACTIONS(449),
        [anon_sym_RPAREN] = ACTIONS(449),
        [anon_sym_COMMA] = ACTIONS(449),
        [anon_sym_as] = ACTIONS(449),
        [anon_sym_STAR] = ACTIONS(451),
        [anon_sym_COLON] = ACTIONS(449),
        [anon_sym_for] = ACTIONS(449),
        [anon_sym_in] = ACTIONS(449),
        [anon_sym_PLUS] = ACTIONS(449),
        [anon_sym_DASH] = ACTIONS(449),
        [anon_sym_SLASH] = ACTIONS(449),
        [anon_sym_STAR_STAR] = ACTIONS(449),
        [anon_sym_PIPE] = ACTIONS(449),
        [anon_sym_AMP] = ACTIONS(449),
        [anon_sym_CARET] = ACTIONS(449),
        [anon_sym_LT_LT] = ACTIONS(449),
        [anon_sym_GT_GT] = ACTIONS(449),
        [anon_sym_and] = ACTIONS(449),
        [anon_sym_or] = ACTIONS(449),
        [anon_sym_LBRACK] = ACTIONS(449),
        [anon_sym_RBRACK] = ACTIONS(449),
        [anon_sym_RBRACE] = ACTIONS(449),
        [sym_comment] = ACTIONS(83),
    },
    [137] = {
        [anon_sym_LPAREN] = ACTIONS(265),
        [anon_sym_STAR] = ACTIONS(453),
        [anon_sym_COLON] = ACTIONS(455),
        [anon_sym_PLUS] = ACTIONS(457),
        [anon_sym_DASH] = ACTIONS(457),
        [anon_sym_SLASH] = ACTIONS(459),
        [anon_sym_STAR_STAR] = ACTIONS(461),
        [anon_sym_PIPE] = ACTIONS(463),
        [anon_sym_AMP] = ACTIONS(465),
        [anon_sym_CARET] = ACTIONS(467),
        [anon_sym_LT_LT] = ACTIONS(457),
        [anon_sym_GT_GT] = ACTIONS(457),
        [anon_sym_and] = ACTIONS(465),
        [anon_sym_or] = ACTIONS(463),
        [anon_sym_LBRACK] = ACTIONS(281),
        [sym_comment] = ACTIONS(83),
    },
    [138] = {
        [anon_sym_COMMA] = ACTIONS(469),
        [anon_sym_RBRACE] = ACTIONS(469),
        [sym_comment] = ACTIONS(83),
    },
    [139] = {
        [sym__expression] = STATE(150),
        [sym_binary_operator] = STATE(45),
        [sym_unary_operator] = STATE(45),
        [sym_subscript] = STATE(45),
        [sym_call] = STATE(45),
        [sym_list] = STATE(45),
        [sym_list_comprehension] = STATE(45),
        [sym_dictionary] = STATE(45),
        [sym_dictionary_comprehension] = STATE(45),
        [sym_set] = STATE(45),
        [sym_set_comprehension] = STATE(45),
        [anon_sym_not] = ACTIONS(143),
        [anon_sym_LBRACK] = ACTIONS(145),
        [anon_sym_LBRACE] = ACTIONS(147),
        [sym_string] = ACTIONS(149),
        [sym_number] = ACTIONS(151),
        [sym_identifier] = ACTIONS(153),
        [sym_comment] = ACTIONS(83),
    },
    [140] = {
        [sym__expression] = STATE(152),
        [sym_binary_operator] = STATE(45),
        [sym_unary_operator] = STATE(45),
        [sym_subscript] = STATE(45),
        [sym_call] = STATE(45),
        [sym_list] = STATE(45),
        [sym_list_comprehension] = STATE(45),
        [sym_dictionary] = STATE(45),
        [sym_dictionary_comprehension] = STATE(45),
        [sym_set] = STATE(45),
        [sym_set_comprehension] = STATE(45),
        [anon_sym_not] = ACTIONS(471),
        [anon_sym_LBRACK] = ACTIONS(145),
        [anon_sym_LBRACE] = ACTIONS(147),
        [sym_string] = ACTIONS(149),
        [sym_number] = ACTIONS(151),
        [sym_identifier] = ACTIONS(153),
        [sym_comment] = ACTIONS(83),
    },
    [141] = {
        [sym__expression] = STATE(148),
        [sym_binary_operator] = STATE(45),
        [sym_unary_operator] = STATE(45),
        [sym_subscript] = STATE(45),
        [sym_call] = STATE(45),
        [sym_list] = STATE(45),
        [sym_list_comprehension] = STATE(45),
        [sym_dictionary] = STATE(45),
        [sym_dictionary_comprehension] = STATE(45),
        [sym_set] = STATE(45),
        [sym_set_comprehension] = STATE(45),
        [anon_sym_not] = ACTIONS(143),
        [anon_sym_LBRACK] = ACTIONS(145),
        [anon_sym_LBRACE] = ACTIONS(147),
        [sym_string] = ACTIONS(149),
        [sym_number] = ACTIONS(151),
        [sym_identifier] = ACTIONS(153),
        [sym_comment] = ACTIONS(83),
    },
    [142] = {
        [sym__expression] = STATE(77),
        [sym_binary_operator] = STATE(45),
        [sym_unary_operator] = STATE(45),
        [sym_subscript] = STATE(45),
        [sym_call] = STATE(45),
        [sym_list] = STATE(45),
        [sym_list_comprehension] = STATE(45),
        [sym_dictionary] = STATE(45),
        [sym_dictionary_comprehension] = STATE(45),
        [sym_set] = STATE(45),
        [sym_set_comprehension] = STATE(45),
        [anon_sym_not] = ACTIONS(143),
        [anon_sym_LBRACK] = ACTIONS(145),
        [anon_sym_LBRACE] = ACTIONS(147),
        [sym_string] = ACTIONS(149),
        [sym_number] = ACTIONS(151),
        [sym_identifier] = ACTIONS(153),
        [sym_comment] = ACTIONS(83),
    },
    [143] = {
        [sym__expression] = STATE(146),
        [sym_binary_operator] = STATE(45),
        [sym_unary_operator] = STATE(45),
        [sym_subscript] = STATE(45),
        [sym_call] = STATE(45),
        [sym_list] = STATE(45),
        [sym_list_comprehension] = STATE(45),
        [sym_dictionary] = STATE(45),
        [sym_dictionary_comprehension] = STATE(45),
        [sym_set] = STATE(45),
        [sym_set_comprehension] = STATE(45),
        [anon_sym_not] = ACTIONS(143),
        [anon_sym_LBRACK] = ACTIONS(145),
        [anon_sym_LBRACE] = ACTIONS(147),
        [sym_string] = ACTIONS(149),
        [sym_number] = ACTIONS(151),
        [sym_identifier] = ACTIONS(153),
        [sym_comment] = ACTIONS(83),
    },
    [144] = {
        [sym__expression] = STATE(147),
        [sym_binary_operator] = STATE(45),
        [sym_unary_operator] = STATE(45),
        [sym_subscript] = STATE(45),
        [sym_call] = STATE(45),
        [sym_list] = STATE(45),
        [sym_list_comprehension] = STATE(45),
        [sym_dictionary] = STATE(45),
        [sym_dictionary_comprehension] = STATE(45),
        [sym_set] = STATE(45),
        [sym_set_comprehension] = STATE(45),
        [anon_sym_not] = ACTIONS(143),
        [anon_sym_LBRACK] = ACTIONS(145),
        [anon_sym_LBRACE] = ACTIONS(147),
        [sym_string] = ACTIONS(149),
        [sym_number] = ACTIONS(151),
        [sym_identifier] = ACTIONS(153),
        [sym_comment] = ACTIONS(83),
    },
    [145] = {
        [sym__expression] = STATE(149),
        [sym_binary_operator] = STATE(45),
        [sym_unary_operator] = STATE(45),
        [sym_subscript] = STATE(45),
        [sym_call] = STATE(45),
        [sym_list] = STATE(45),
        [sym_list_comprehension] = STATE(45),
        [sym_dictionary] = STATE(45),
        [sym_dictionary_comprehension] = STATE(45),
        [sym_set] = STATE(45),
        [sym_set_comprehension] = STATE(45),
        [anon_sym_not] = ACTIONS(143),
        [anon_sym_LBRACK] = ACTIONS(145),
        [anon_sym_LBRACE] = ACTIONS(147),
        [sym_string] = ACTIONS(149),
        [sym_number] = ACTIONS(151),
        [sym_identifier] = ACTIONS(153),
        [sym_comment] = ACTIONS(83),
    },
    [146] = {
        [anon_sym_LPAREN] = ACTIONS(265),
        [anon_sym_STAR] = ACTIONS(453),
        [anon_sym_COLON] = ACTIONS(321),
        [anon_sym_PLUS] = ACTIONS(457),
        [anon_sym_DASH] = ACTIONS(457),
        [anon_sym_SLASH] = ACTIONS(459),
        [anon_sym_STAR_STAR] = ACTIONS(461),
        [anon_sym_PIPE] = ACTIONS(321),
        [anon_sym_AMP] = ACTIONS(465),
        [anon_sym_CARET] = ACTIONS(467),
        [anon_sym_LT_LT] = ACTIONS(457),
        [anon_sym_GT_GT] = ACTIONS(457),
        [anon_sym_and] = ACTIONS(465),
        [anon_sym_or] = ACTIONS(321),
        [anon_sym_LBRACK] = ACTIONS(321),
        [sym_comment] = ACTIONS(83),
    },
    [147] = {
        [anon_sym_LPAREN] = ACTIONS(265),
        [anon_sym_STAR] = ACTIONS(453),
        [anon_sym_COLON] = ACTIONS(321),
        [anon_sym_PLUS] = ACTIONS(457),
        [anon_sym_DASH] = ACTIONS(457),
        [anon_sym_SLASH] = ACTIONS(459),
        [anon_sym_STAR_STAR] = ACTIONS(461),
        [anon_sym_PIPE] = ACTIONS(321),
        [anon_sym_AMP] = ACTIONS(321),
        [anon_sym_CARET] = ACTIONS(467),
        [anon_sym_LT_LT] = ACTIONS(457),
        [anon_sym_GT_GT] = ACTIONS(457),
        [anon_sym_and] = ACTIONS(321),
        [anon_sym_or] = ACTIONS(321),
        [anon_sym_LBRACK] = ACTIONS(321),
        [sym_comment] = ACTIONS(83),
    },
    [148] = {
        [anon_sym_LPAREN] = ACTIONS(265),
        [anon_sym_STAR] = ACTIONS(453),
        [anon_sym_COLON] = ACTIONS(321),
        [anon_sym_PLUS] = ACTIONS(321),
        [anon_sym_DASH] = ACTIONS(321),
        [anon_sym_SLASH] = ACTIONS(459),
        [anon_sym_STAR_STAR] = ACTIONS(461),
        [anon_sym_PIPE] = ACTIONS(321),
        [anon_sym_AMP] = ACTIONS(321),
        [anon_sym_CARET] = ACTIONS(321),
        [anon_sym_LT_LT] = ACTIONS(321),
        [anon_sym_GT_GT] = ACTIONS(321),
        [anon_sym_and] = ACTIONS(321),
        [anon_sym_or] = ACTIONS(321),
        [anon_sym_LBRACK] = ACTIONS(321),
        [sym_comment] = ACTIONS(83),
    },
    [149] = {
        [anon_sym_LPAREN] = ACTIONS(265),
        [anon_sym_STAR] = ACTIONS(453),
        [anon_sym_COLON] = ACTIONS(321),
        [anon_sym_PLUS] = ACTIONS(457),
        [anon_sym_DASH] = ACTIONS(457),
        [anon_sym_SLASH] = ACTIONS(459),
        [anon_sym_STAR_STAR] = ACTIONS(461),
        [anon_sym_PIPE] = ACTIONS(321),
        [anon_sym_AMP] = ACTIONS(321),
        [anon_sym_CARET] = ACTIONS(321),
        [anon_sym_LT_LT] = ACTIONS(457),
        [anon_sym_GT_GT] = ACTIONS(457),
        [anon_sym_and] = ACTIONS(321),
        [anon_sym_or] = ACTIONS(321),
        [anon_sym_LBRACK] = ACTIONS(321),
        [sym_comment] = ACTIONS(83),
    },
    [150] = {
        [anon_sym_LPAREN] = ACTIONS(265),
        [anon_sym_STAR] = ACTIONS(323),
        [anon_sym_COLON] = ACTIONS(321),
        [anon_sym_PLUS] = ACTIONS(321),
        [anon_sym_DASH] = ACTIONS(321),
        [anon_sym_SLASH] = ACTIONS(321),
        [anon_sym_STAR_STAR] = ACTIONS(461),
        [anon_sym_PIPE] = ACTIONS(321),
        [anon_sym_AMP] = ACTIONS(321),
        [anon_sym_CARET] = ACTIONS(321),
        [anon_sym_LT_LT] = ACTIONS(321),
        [anon_sym_GT_GT] = ACTIONS(321),
        [anon_sym_and] = ACTIONS(321),
        [anon_sym_or] = ACTIONS(321),
        [anon_sym_LBRACK] = ACTIONS(321),
        [sym_comment] = ACTIONS(83),
    },
    [151] = {
        [sym__expression] = STATE(276),
        [sym_binary_operator] = STATE(45),
        [sym_unary_operator] = STATE(45),
        [sym_subscript] = STATE(45),
        [sym_call] = STATE(45),
        [sym_list] = STATE(45),
        [sym_list_comprehension] = STATE(45),
        [sym_dictionary] = STATE(45),
        [sym_dictionary_comprehension] = STATE(45),
        [sym_set] = STATE(45),
        [sym_set_comprehension] = STATE(45),
        [anon_sym_not] = ACTIONS(471),
        [anon_sym_LBRACK] = ACTIONS(145),
        [anon_sym_LBRACE] = ACTIONS(147),
        [sym_string] = ACTIONS(149),
        [sym_number] = ACTIONS(151),
        [sym_identifier] = ACTIONS(153),
        [sym_comment] = ACTIONS(83),
    },
    [152] = {
        [anon_sym_LPAREN] = ACTIONS(265),
        [anon_sym_COMMA] = ACTIONS(473),
        [anon_sym_STAR] = ACTIONS(475),
        [anon_sym_PLUS] = ACTIONS(477),
        [anon_sym_DASH] = ACTIONS(477),
        [anon_sym_SLASH] = ACTIONS(479),
        [anon_sym_STAR_STAR] = ACTIONS(481),
        [anon_sym_PIPE] = ACTIONS(483),
        [anon_sym_AMP] = ACTIONS(485),
        [anon_sym_CARET] = ACTIONS(487),
        [anon_sym_LT_LT] = ACTIONS(477),
        [anon_sym_GT_GT] = ACTIONS(477),
        [anon_sym_and] = ACTIONS(485),
        [anon_sym_or] = ACTIONS(483),
        [anon_sym_LBRACK] = ACTIONS(281),
        [anon_sym_RBRACE] = ACTIONS(473),
        [sym_comment] = ACTIONS(83),
    },
    [153] = {
        [sym__expression] = STATE(163),
        [sym_binary_operator] = STATE(45),
        [sym_unary_operator] = STATE(45),
        [sym_subscript] = STATE(45),
        [sym_call] = STATE(45),
        [sym_list] = STATE(45),
        [sym_list_comprehension] = STATE(45),
        [sym_dictionary] = STATE(45),
        [sym_dictionary_comprehension] = STATE(45),
        [sym_set] = STATE(45),
        [sym_set_comprehension] = STATE(45),
        [anon_sym_not] = ACTIONS(471),
        [anon_sym_LBRACK] = ACTIONS(145),
        [anon_sym_LBRACE] = ACTIONS(147),
        [sym_string] = ACTIONS(149),
        [sym_number] = ACTIONS(151),
        [sym_identifier] = ACTIONS(153),
        [sym_comment] = ACTIONS(83),
    },
    [154] = {
        [sym__expression] = STATE(161),
        [sym_binary_operator] = STATE(45),
        [sym_unary_operator] = STATE(45),
        [sym_subscript] = STATE(45),
        [sym_call] = STATE(45),
        [sym_list] = STATE(45),
        [sym_list_comprehension] = STATE(45),
        [sym_dictionary] = STATE(45),
        [sym_dictionary_comprehension] = STATE(45),
        [sym_set] = STATE(45),
        [sym_set_comprehension] = STATE(45),
        [anon_sym_not] = ACTIONS(471),
        [anon_sym_LBRACK] = ACTIONS(145),
        [anon_sym_LBRACE] = ACTIONS(147),
        [sym_string] = ACTIONS(149),
        [sym_number] = ACTIONS(151),
        [sym_identifier] = ACTIONS(153),
        [sym_comment] = ACTIONS(83),
    },
    [155] = {
        [sym__expression] = STATE(77),
        [sym_binary_operator] = STATE(45),
        [sym_unary_operator] = STATE(45),
        [sym_subscript] = STATE(45),
        [sym_call] = STATE(45),
        [sym_list] = STATE(45),
        [sym_list_comprehension] = STATE(45),
        [sym_dictionary] = STATE(45),
        [sym_dictionary_comprehension] = STATE(45),
        [sym_set] = STATE(45),
        [sym_set_comprehension] = STATE(45),
        [anon_sym_not] = ACTIONS(471),
        [anon_sym_LBRACK] = ACTIONS(145),
        [anon_sym_LBRACE] = ACTIONS(147),
        [sym_string] = ACTIONS(149),
        [sym_number] = ACTIONS(151),
        [sym_identifier] = ACTIONS(153),
        [sym_comment] = ACTIONS(83),
    },
    [156] = {
        [sym__expression] = STATE(159),
        [sym_binary_operator] = STATE(45),
        [sym_unary_operator] = STATE(45),
        [sym_subscript] = STATE(45),
        [sym_call] = STATE(45),
        [sym_list] = STATE(45),
        [sym_list_comprehension] = STATE(45),
        [sym_dictionary] = STATE(45),
        [sym_dictionary_comprehension] = STATE(45),
        [sym_set] = STATE(45),
        [sym_set_comprehension] = STATE(45),
        [anon_sym_not] = ACTIONS(471),
        [anon_sym_LBRACK] = ACTIONS(145),
        [anon_sym_LBRACE] = ACTIONS(147),
        [sym_string] = ACTIONS(149),
        [sym_number] = ACTIONS(151),
        [sym_identifier] = ACTIONS(153),
        [sym_comment] = ACTIONS(83),
    },
    [157] = {
        [sym__expression] = STATE(160),
        [sym_binary_operator] = STATE(45),
        [sym_unary_operator] = STATE(45),
        [sym_subscript] = STATE(45),
        [sym_call] = STATE(45),
        [sym_list] = STATE(45),
        [sym_list_comprehension] = STATE(45),
        [sym_dictionary] = STATE(45),
        [sym_dictionary_comprehension] = STATE(45),
        [sym_set] = STATE(45),
        [sym_set_comprehension] = STATE(45),
        [anon_sym_not] = ACTIONS(471),
        [anon_sym_LBRACK] = ACTIONS(145),
        [anon_sym_LBRACE] = ACTIONS(147),
        [sym_string] = ACTIONS(149),
        [sym_number] = ACTIONS(151),
        [sym_identifier] = ACTIONS(153),
        [sym_comment] = ACTIONS(83),
    },
    [158] = {
        [sym__expression] = STATE(162),
        [sym_binary_operator] = STATE(45),
        [sym_unary_operator] = STATE(45),
        [sym_subscript] = STATE(45),
        [sym_call] = STATE(45),
        [sym_list] = STATE(45),
        [sym_list_comprehension] = STATE(45),
        [sym_dictionary] = STATE(45),
        [sym_dictionary_comprehension] = STATE(45),
        [sym_set] = STATE(45),
        [sym_set_comprehension] = STATE(45),
        [anon_sym_not] = ACTIONS(471),
        [anon_sym_LBRACK] = ACTIONS(145),
        [anon_sym_LBRACE] = ACTIONS(147),
        [sym_string] = ACTIONS(149),
        [sym_number] = ACTIONS(151),
        [sym_identifier] = ACTIONS(153),
        [sym_comment] = ACTIONS(83),
    },
    [159] = {
        [anon_sym_LPAREN] = ACTIONS(265),
        [anon_sym_COMMA] = ACTIONS(321),
        [anon_sym_STAR] = ACTIONS(475),
        [anon_sym_PLUS] = ACTIONS(477),
        [anon_sym_DASH] = ACTIONS(477),
        [anon_sym_SLASH] = ACTIONS(479),
        [anon_sym_STAR_STAR] = ACTIONS(481),
        [anon_sym_PIPE] = ACTIONS(321),
        [anon_sym_AMP] = ACTIONS(485),
        [anon_sym_CARET] = ACTIONS(487),
        [anon_sym_LT_LT] = ACTIONS(477),
        [anon_sym_GT_GT] = ACTIONS(477),
        [anon_sym_and] = ACTIONS(485),
        [anon_sym_or] = ACTIONS(321),
        [anon_sym_LBRACK] = ACTIONS(321),
        [anon_sym_RBRACE] = ACTIONS(321),
        [sym_comment] = ACTIONS(83),
    },
    [160] = {
        [anon_sym_LPAREN] = ACTIONS(265),
        [anon_sym_COMMA] = ACTIONS(321),
        [anon_sym_STAR] = ACTIONS(475),
        [anon_sym_PLUS] = ACTIONS(477),
        [anon_sym_DASH] = ACTIONS(477),
        [anon_sym_SLASH] = ACTIONS(479),
        [anon_sym_STAR_STAR] = ACTIONS(481),
        [anon_sym_PIPE] = ACTIONS(321),
        [anon_sym_AMP] = ACTIONS(321),
        [anon_sym_CARET] = ACTIONS(487),
        [anon_sym_LT_LT] = ACTIONS(477),
        [anon_sym_GT_GT] = ACTIONS(477),
        [anon_sym_and] = ACTIONS(321),
        [anon_sym_or] = ACTIONS(321),
        [anon_sym_LBRACK] = ACTIONS(321),
        [anon_sym_RBRACE] = ACTIONS(321),
        [sym_comment] = ACTIONS(83),
    },
    [161] = {
        [anon_sym_LPAREN] = ACTIONS(265),
        [anon_sym_COMMA] = ACTIONS(321),
        [anon_sym_STAR] = ACTIONS(475),
        [anon_sym_PLUS] = ACTIONS(321),
        [anon_sym_DASH] = ACTIONS(321),
        [anon_sym_SLASH] = ACTIONS(479),
        [anon_sym_STAR_STAR] = ACTIONS(481),
        [anon_sym_PIPE] = ACTIONS(321),
        [anon_sym_AMP] = ACTIONS(321),
        [anon_sym_CARET] = ACTIONS(321),
        [anon_sym_LT_LT] = ACTIONS(321),
        [anon_sym_GT_GT] = ACTIONS(321),
        [anon_sym_and] = ACTIONS(321),
        [anon_sym_or] = ACTIONS(321),
        [anon_sym_LBRACK] = ACTIONS(321),
        [anon_sym_RBRACE] = ACTIONS(321),
        [sym_comment] = ACTIONS(83),
    },
    [162] = {
        [anon_sym_LPAREN] = ACTIONS(265),
        [anon_sym_COMMA] = ACTIONS(321),
        [anon_sym_STAR] = ACTIONS(475),
        [anon_sym_PLUS] = ACTIONS(477),
        [anon_sym_DASH] = ACTIONS(477),
        [anon_sym_SLASH] = ACTIONS(479),
        [anon_sym_STAR_STAR] = ACTIONS(481),
        [anon_sym_PIPE] = ACTIONS(321),
        [anon_sym_AMP] = ACTIONS(321),
        [anon_sym_CARET] = ACTIONS(321),
        [anon_sym_LT_LT] = ACTIONS(477),
        [anon_sym_GT_GT] = ACTIONS(477),
        [anon_sym_and] = ACTIONS(321),
        [anon_sym_or] = ACTIONS(321),
        [anon_sym_LBRACK] = ACTIONS(321),
        [anon_sym_RBRACE] = ACTIONS(321),
        [sym_comment] = ACTIONS(83),
    },
    [163] = {
        [anon_sym_LPAREN] = ACTIONS(265),
        [anon_sym_COMMA] = ACTIONS(321),
        [anon_sym_STAR] = ACTIONS(323),
        [anon_sym_PLUS] = ACTIONS(321),
        [anon_sym_DASH] = ACTIONS(321),
        [anon_sym_SLASH] = ACTIONS(321),
        [anon_sym_STAR_STAR] = ACTIONS(481),
        [anon_sym_PIPE] = ACTIONS(321),
        [anon_sym_AMP] = ACTIONS(321),
        [anon_sym_CARET] = ACTIONS(321),
        [anon_sym_LT_LT] = ACTIONS(321),
        [anon_sym_GT_GT] = ACTIONS(321),
        [anon_sym_and] = ACTIONS(321),
        [anon_sym_or] = ACTIONS(321),
        [anon_sym_LBRACK] = ACTIONS(321),
        [anon_sym_RBRACE] = ACTIONS(321),
        [sym_comment] = ACTIONS(83),
    },
    [164] = {
        [sym__expression] = STATE(276),
        [sym_binary_operator] = STATE(45),
        [sym_unary_operator] = STATE(45),
        [sym_subscript] = STATE(45),
        [sym_call] = STATE(45),
        [sym_list] = STATE(45),
        [sym_list_comprehension] = STATE(45),
        [sym_dictionary] = STATE(45),
        [sym_dictionary_comprehension] = STATE(45),
        [sym_set] = STATE(45),
        [sym_set_comprehension] = STATE(45),
        [anon_sym_not] = ACTIONS(155),
        [anon_sym_LBRACK] = ACTIONS(145),
        [anon_sym_LBRACE] = ACTIONS(147),
        [sym_string] = ACTIONS(149),
        [sym_number] = ACTIONS(151),
        [sym_identifier] = ACTIONS(153),
        [sym_comment] = ACTIONS(83),
    },
    [165] = {
        [anon_sym_in] = ACTIONS(489),
        [sym_comment] = ACTIONS(83),
    },
    [166] = {
        [aux_sym_print_statement_repeat1] = STATE(174),
        [anon_sym_LPAREN] = ACTIONS(265),
        [anon_sym_COMMA] = ACTIONS(491),
        [anon_sym_STAR] = ACTIONS(493),
        [anon_sym_in] = ACTIONS(495),
        [anon_sym_PLUS] = ACTIONS(497),
        [anon_sym_DASH] = ACTIONS(497),
        [anon_sym_SLASH] = ACTIONS(499),
        [anon_sym_STAR_STAR] = ACTIONS(501),
        [anon_sym_PIPE] = ACTIONS(503),
        [anon_sym_AMP] = ACTIONS(505),
        [anon_sym_CARET] = ACTIONS(507),
        [anon_sym_LT_LT] = ACTIONS(497),
        [anon_sym_GT_GT] = ACTIONS(497),
        [anon_sym_and] = ACTIONS(505),
        [anon_sym_or] = ACTIONS(503),
        [anon_sym_LBRACK] = ACTIONS(281),
        [sym_comment] = ACTIONS(83),
    },
    [167] = {
        [sym__expression] = STATE(182),
        [sym_binary_operator] = STATE(45),
        [sym_unary_operator] = STATE(45),
        [sym_subscript] = STATE(45),
        [sym_call] = STATE(45),
        [sym_list] = STATE(45),
        [sym_list_comprehension] = STATE(45),
        [sym_dictionary] = STATE(45),
        [sym_dictionary_comprehension] = STATE(45),
        [sym_set] = STATE(45),
        [sym_set_comprehension] = STATE(45),
        [anon_sym_not] = ACTIONS(155),
        [anon_sym_LBRACK] = ACTIONS(145),
        [anon_sym_LBRACE] = ACTIONS(147),
        [sym_string] = ACTIONS(149),
        [sym_number] = ACTIONS(151),
        [sym_identifier] = ACTIONS(153),
        [sym_comment] = ACTIONS(83),
    },
    [168] = {
        [sym__expression] = STATE(181),
        [sym_binary_operator] = STATE(45),
        [sym_unary_operator] = STATE(45),
        [sym_subscript] = STATE(45),
        [sym_call] = STATE(45),
        [sym_list] = STATE(45),
        [sym_list_comprehension] = STATE(45),
        [sym_dictionary] = STATE(45),
        [sym_dictionary_comprehension] = STATE(45),
        [sym_set] = STATE(45),
        [sym_set_comprehension] = STATE(45),
        [anon_sym_not] = ACTIONS(155),
        [anon_sym_LBRACK] = ACTIONS(145),
        [anon_sym_LBRACE] = ACTIONS(147),
        [sym_string] = ACTIONS(149),
        [sym_number] = ACTIONS(151),
        [sym_identifier] = ACTIONS(153),
        [sym_comment] = ACTIONS(83),
    },
    [169] = {
        [sym__expression] = STATE(179),
        [sym_binary_operator] = STATE(45),
        [sym_unary_operator] = STATE(45),
        [sym_subscript] = STATE(45),
        [sym_call] = STATE(45),
        [sym_list] = STATE(45),
        [sym_list_comprehension] = STATE(45),
        [sym_dictionary] = STATE(45),
        [sym_dictionary_comprehension] = STATE(45),
        [sym_set] = STATE(45),
        [sym_set_comprehension] = STATE(45),
        [anon_sym_not] = ACTIONS(155),
        [anon_sym_LBRACK] = ACTIONS(145),
        [anon_sym_LBRACE] = ACTIONS(147),
        [sym_string] = ACTIONS(149),
        [sym_number] = ACTIONS(151),
        [sym_identifier] = ACTIONS(153),
        [sym_comment] = ACTIONS(83),
    },
    [170] = {
        [sym__expression] = STATE(77),
        [sym_binary_operator] = STATE(45),
        [sym_unary_operator] = STATE(45),
        [sym_subscript] = STATE(45),
        [sym_call] = STATE(45),
        [sym_list] = STATE(45),
        [sym_list_comprehension] = STATE(45),
        [sym_dictionary] = STATE(45),
        [sym_dictionary_comprehension] = STATE(45),
        [sym_set] = STATE(45),
        [sym_set_comprehension] = STATE(45),
        [anon_sym_not] = ACTIONS(155),
        [anon_sym_LBRACK] = ACTIONS(145),
        [anon_sym_LBRACE] = ACTIONS(147),
        [sym_string] = ACTIONS(149),
        [sym_number] = ACTIONS(151),
        [sym_identifier] = ACTIONS(153),
        [sym_comment] = ACTIONS(83),
    },
    [171] = {
        [sym__expression] = STATE(177),
        [sym_binary_operator] = STATE(45),
        [sym_unary_operator] = STATE(45),
        [sym_subscript] = STATE(45),
        [sym_call] = STATE(45),
        [sym_list] = STATE(45),
        [sym_list_comprehension] = STATE(45),
        [sym_dictionary] = STATE(45),
        [sym_dictionary_comprehension] = STATE(45),
        [sym_set] = STATE(45),
        [sym_set_comprehension] = STATE(45),
        [anon_sym_not] = ACTIONS(155),
        [anon_sym_LBRACK] = ACTIONS(145),
        [anon_sym_LBRACE] = ACTIONS(147),
        [sym_string] = ACTIONS(149),
        [sym_number] = ACTIONS(151),
        [sym_identifier] = ACTIONS(153),
        [sym_comment] = ACTIONS(83),
    },
    [172] = {
        [sym__expression] = STATE(178),
        [sym_binary_operator] = STATE(45),
        [sym_unary_operator] = STATE(45),
        [sym_subscript] = STATE(45),
        [sym_call] = STATE(45),
        [sym_list] = STATE(45),
        [sym_list_comprehension] = STATE(45),
        [sym_dictionary] = STATE(45),
        [sym_dictionary_comprehension] = STATE(45),
        [sym_set] = STATE(45),
        [sym_set_comprehension] = STATE(45),
        [anon_sym_not] = ACTIONS(155),
        [anon_sym_LBRACK] = ACTIONS(145),
        [anon_sym_LBRACE] = ACTIONS(147),
        [sym_string] = ACTIONS(149),
        [sym_number] = ACTIONS(151),
        [sym_identifier] = ACTIONS(153),
        [sym_comment] = ACTIONS(83),
    },
    [173] = {
        [sym__expression] = STATE(180),
        [sym_binary_operator] = STATE(45),
        [sym_unary_operator] = STATE(45),
        [sym_subscript] = STATE(45),
        [sym_call] = STATE(45),
        [sym_list] = STATE(45),
        [sym_list_comprehension] = STATE(45),
        [sym_dictionary] = STATE(45),
        [sym_dictionary_comprehension] = STATE(45),
        [sym_set] = STATE(45),
        [sym_set_comprehension] = STATE(45),
        [anon_sym_not] = ACTIONS(155),
        [anon_sym_LBRACK] = ACTIONS(145),
        [anon_sym_LBRACE] = ACTIONS(147),
        [sym_string] = ACTIONS(149),
        [sym_number] = ACTIONS(151),
        [sym_identifier] = ACTIONS(153),
        [sym_comment] = ACTIONS(83),
    },
    [174] = {
        [anon_sym_COMMA] = ACTIONS(509),
        [anon_sym_in] = ACTIONS(511),
        [sym_comment] = ACTIONS(83),
    },
    [175] = {
        [sym__expression] = STATE(176),
        [sym_binary_operator] = STATE(45),
        [sym_unary_operator] = STATE(45),
        [sym_subscript] = STATE(45),
        [sym_call] = STATE(45),
        [sym_list] = STATE(45),
        [sym_list_comprehension] = STATE(45),
        [sym_dictionary] = STATE(45),
        [sym_dictionary_comprehension] = STATE(45),
        [sym_set] = STATE(45),
        [sym_set_comprehension] = STATE(45),
        [anon_sym_not] = ACTIONS(155),
        [anon_sym_LBRACK] = ACTIONS(145),
        [anon_sym_LBRACE] = ACTIONS(147),
        [sym_string] = ACTIONS(149),
        [sym_number] = ACTIONS(151),
        [sym_identifier] = ACTIONS(153),
        [sym_comment] = ACTIONS(83),
    },
    [176] = {
        [anon_sym_LPAREN] = ACTIONS(265),
        [anon_sym_COMMA] = ACTIONS(513),
        [anon_sym_STAR] = ACTIONS(493),
        [anon_sym_in] = ACTIONS(513),
        [anon_sym_PLUS] = ACTIONS(497),
        [anon_sym_DASH] = ACTIONS(497),
        [anon_sym_SLASH] = ACTIONS(499),
        [anon_sym_STAR_STAR] = ACTIONS(501),
        [anon_sym_PIPE] = ACTIONS(503),
        [anon_sym_AMP] = ACTIONS(505),
        [anon_sym_CARET] = ACTIONS(507),
        [anon_sym_LT_LT] = ACTIONS(497),
        [anon_sym_GT_GT] = ACTIONS(497),
        [anon_sym_and] = ACTIONS(505),
        [anon_sym_or] = ACTIONS(503),
        [anon_sym_LBRACK] = ACTIONS(281),
        [sym_comment] = ACTIONS(83),
    },
    [177] = {
        [anon_sym_LPAREN] = ACTIONS(265),
        [anon_sym_COMMA] = ACTIONS(321),
        [anon_sym_STAR] = ACTIONS(493),
        [anon_sym_in] = ACTIONS(321),
        [anon_sym_PLUS] = ACTIONS(497),
        [anon_sym_DASH] = ACTIONS(497),
        [anon_sym_SLASH] = ACTIONS(499),
        [anon_sym_STAR_STAR] = ACTIONS(501),
        [anon_sym_PIPE] = ACTIONS(321),
        [anon_sym_AMP] = ACTIONS(505),
        [anon_sym_CARET] = ACTIONS(507),
        [anon_sym_LT_LT] = ACTIONS(497),
        [anon_sym_GT_GT] = ACTIONS(497),
        [anon_sym_and] = ACTIONS(505),
        [anon_sym_or] = ACTIONS(321),
        [anon_sym_LBRACK] = ACTIONS(321),
        [sym_comment] = ACTIONS(83),
    },
    [178] = {
        [anon_sym_LPAREN] = ACTIONS(265),
        [anon_sym_COMMA] = ACTIONS(321),
        [anon_sym_STAR] = ACTIONS(493),
        [anon_sym_in] = ACTIONS(321),
        [anon_sym_PLUS] = ACTIONS(497),
        [anon_sym_DASH] = ACTIONS(497),
        [anon_sym_SLASH] = ACTIONS(499),
        [anon_sym_STAR_STAR] = ACTIONS(501),
        [anon_sym_PIPE] = ACTIONS(321),
        [anon_sym_AMP] = ACTIONS(321),
        [anon_sym_CARET] = ACTIONS(507),
        [anon_sym_LT_LT] = ACTIONS(497),
        [anon_sym_GT_GT] = ACTIONS(497),
        [anon_sym_and] = ACTIONS(321),
        [anon_sym_or] = ACTIONS(321),
        [anon_sym_LBRACK] = ACTIONS(321),
        [sym_comment] = ACTIONS(83),
    },
    [179] = {
        [anon_sym_LPAREN] = ACTIONS(265),
        [anon_sym_COMMA] = ACTIONS(321),
        [anon_sym_STAR] = ACTIONS(493),
        [anon_sym_in] = ACTIONS(321),
        [anon_sym_PLUS] = ACTIONS(321),
        [anon_sym_DASH] = ACTIONS(321),
        [anon_sym_SLASH] = ACTIONS(499),
        [anon_sym_STAR_STAR] = ACTIONS(501),
        [anon_sym_PIPE] = ACTIONS(321),
        [anon_sym_AMP] = ACTIONS(321),
        [anon_sym_CARET] = ACTIONS(321),
        [anon_sym_LT_LT] = ACTIONS(321),
        [anon_sym_GT_GT] = ACTIONS(321),
        [anon_sym_and] = ACTIONS(321),
        [anon_sym_or] = ACTIONS(321),
        [anon_sym_LBRACK] = ACTIONS(321),
        [sym_comment] = ACTIONS(83),
    },
    [180] = {
        [anon_sym_LPAREN] = ACTIONS(265),
        [anon_sym_COMMA] = ACTIONS(321),
        [anon_sym_STAR] = ACTIONS(493),
        [anon_sym_in] = ACTIONS(321),
        [anon_sym_PLUS] = ACTIONS(497),
        [anon_sym_DASH] = ACTIONS(497),
        [anon_sym_SLASH] = ACTIONS(499),
        [anon_sym_STAR_STAR] = ACTIONS(501),
        [anon_sym_PIPE] = ACTIONS(321),
        [anon_sym_AMP] = ACTIONS(321),
        [anon_sym_CARET] = ACTIONS(321),
        [anon_sym_LT_LT] = ACTIONS(497),
        [anon_sym_GT_GT] = ACTIONS(497),
        [anon_sym_and] = ACTIONS(321),
        [anon_sym_or] = ACTIONS(321),
        [anon_sym_LBRACK] = ACTIONS(321),
        [sym_comment] = ACTIONS(83),
    },
    [181] = {
        [anon_sym_LPAREN] = ACTIONS(265),
        [anon_sym_COMMA] = ACTIONS(321),
        [anon_sym_STAR] = ACTIONS(323),
        [anon_sym_in] = ACTIONS(321),
        [anon_sym_PLUS] = ACTIONS(321),
        [anon_sym_DASH] = ACTIONS(321),
        [anon_sym_SLASH] = ACTIONS(321),
        [anon_sym_STAR_STAR] = ACTIONS(501),
        [anon_sym_PIPE] = ACTIONS(321),
        [anon_sym_AMP] = ACTIONS(321),
        [anon_sym_CARET] = ACTIONS(321),
        [anon_sym_LT_LT] = ACTIONS(321),
        [anon_sym_GT_GT] = ACTIONS(321),
        [anon_sym_and] = ACTIONS(321),
        [anon_sym_or] = ACTIONS(321),
        [anon_sym_LBRACK] = ACTIONS(321),
        [sym_comment] = ACTIONS(83),
    },
    [182] = {
        [anon_sym_LPAREN] = ACTIONS(265),
        [anon_sym_COMMA] = ACTIONS(515),
        [anon_sym_STAR] = ACTIONS(493),
        [anon_sym_in] = ACTIONS(515),
        [anon_sym_PLUS] = ACTIONS(497),
        [anon_sym_DASH] = ACTIONS(497),
        [anon_sym_SLASH] = ACTIONS(499),
        [anon_sym_STAR_STAR] = ACTIONS(501),
        [anon_sym_PIPE] = ACTIONS(503),
        [anon_sym_AMP] = ACTIONS(505),
        [anon_sym_CARET] = ACTIONS(507),
        [anon_sym_LT_LT] = ACTIONS(497),
        [anon_sym_GT_GT] = ACTIONS(497),
        [anon_sym_and] = ACTIONS(505),
        [anon_sym_or] = ACTIONS(503),
        [anon_sym_LBRACK] = ACTIONS(281),
        [sym_comment] = ACTIONS(83),
    },
    [183] = {
        [sym__expression] = STATE(185),
        [sym_binary_operator] = STATE(45),
        [sym_unary_operator] = STATE(45),
        [sym_subscript] = STATE(45),
        [sym_call] = STATE(45),
        [sym_list] = STATE(45),
        [sym_list_comprehension] = STATE(45),
        [sym_dictionary] = STATE(45),
        [sym_dictionary_comprehension] = STATE(45),
        [sym_set] = STATE(45),
        [sym_set_comprehension] = STATE(45),
        [anon_sym_not] = ACTIONS(517),
        [anon_sym_LBRACK] = ACTIONS(145),
        [anon_sym_LBRACE] = ACTIONS(147),
        [sym_string] = ACTIONS(149),
        [sym_number] = ACTIONS(151),
        [sym_identifier] = ACTIONS(153),
        [sym_comment] = ACTIONS(83),
    },
    [184] = {
        [sym__expression] = STATE(276),
        [sym_binary_operator] = STATE(45),
        [sym_unary_operator] = STATE(45),
        [sym_subscript] = STATE(45),
        [sym_call] = STATE(45),
        [sym_list] = STATE(45),
        [sym_list_comprehension] = STATE(45),
        [sym_dictionary] = STATE(45),
        [sym_dictionary_comprehension] = STATE(45),
        [sym_set] = STATE(45),
        [sym_set_comprehension] = STATE(45),
        [anon_sym_not] = ACTIONS(517),
        [anon_sym_LBRACK] = ACTIONS(145),
        [anon_sym_LBRACE] = ACTIONS(147),
        [sym_string] = ACTIONS(149),
        [sym_number] = ACTIONS(151),
        [sym_identifier] = ACTIONS(153),
        [sym_comment] = ACTIONS(83),
    },
    [185] = {
        [anon_sym_LPAREN] = ACTIONS(265),
        [anon_sym_STAR] = ACTIONS(519),
        [anon_sym_PLUS] = ACTIONS(521),
        [anon_sym_DASH] = ACTIONS(521),
        [anon_sym_SLASH] = ACTIONS(523),
        [anon_sym_STAR_STAR] = ACTIONS(525),
        [anon_sym_PIPE] = ACTIONS(527),
        [anon_sym_AMP] = ACTIONS(529),
        [anon_sym_CARET] = ACTIONS(531),
        [anon_sym_LT_LT] = ACTIONS(521),
        [anon_sym_GT_GT] = ACTIONS(521),
        [anon_sym_and] = ACTIONS(529),
        [anon_sym_or] = ACTIONS(527),
        [anon_sym_LBRACK] = ACTIONS(281),
        [anon_sym_RBRACE] = ACTIONS(533),
        [sym_comment] = ACTIONS(83),
    },
    [186] = {
        [sym__expression] = STATE(197),
        [sym_binary_operator] = STATE(45),
        [sym_unary_operator] = STATE(45),
        [sym_subscript] = STATE(45),
        [sym_call] = STATE(45),
        [sym_list] = STATE(45),
        [sym_list_comprehension] = STATE(45),
        [sym_dictionary] = STATE(45),
        [sym_dictionary_comprehension] = STATE(45),
        [sym_set] = STATE(45),
        [sym_set_comprehension] = STATE(45),
        [anon_sym_not] = ACTIONS(517),
        [anon_sym_LBRACK] = ACTIONS(145),
        [anon_sym_LBRACE] = ACTIONS(147),
        [sym_string] = ACTIONS(149),
        [sym_number] = ACTIONS(151),
        [sym_identifier] = ACTIONS(153),
        [sym_comment] = ACTIONS(83),
    },
    [187] = {
        [sym__expression] = STATE(195),
        [sym_binary_operator] = STATE(45),
        [sym_unary_operator] = STATE(45),
        [sym_subscript] = STATE(45),
        [sym_call] = STATE(45),
        [sym_list] = STATE(45),
        [sym_list_comprehension] = STATE(45),
        [sym_dictionary] = STATE(45),
        [sym_dictionary_comprehension] = STATE(45),
        [sym_set] = STATE(45),
        [sym_set_comprehension] = STATE(45),
        [anon_sym_not] = ACTIONS(517),
        [anon_sym_LBRACK] = ACTIONS(145),
        [anon_sym_LBRACE] = ACTIONS(147),
        [sym_string] = ACTIONS(149),
        [sym_number] = ACTIONS(151),
        [sym_identifier] = ACTIONS(153),
        [sym_comment] = ACTIONS(83),
    },
    [188] = {
        [sym__expression] = STATE(77),
        [sym_binary_operator] = STATE(45),
        [sym_unary_operator] = STATE(45),
        [sym_subscript] = STATE(45),
        [sym_call] = STATE(45),
        [sym_list] = STATE(45),
        [sym_list_comprehension] = STATE(45),
        [sym_dictionary] = STATE(45),
        [sym_dictionary_comprehension] = STATE(45),
        [sym_set] = STATE(45),
        [sym_set_comprehension] = STATE(45),
        [anon_sym_not] = ACTIONS(517),
        [anon_sym_LBRACK] = ACTIONS(145),
        [anon_sym_LBRACE] = ACTIONS(147),
        [sym_string] = ACTIONS(149),
        [sym_number] = ACTIONS(151),
        [sym_identifier] = ACTIONS(153),
        [sym_comment] = ACTIONS(83),
    },
    [189] = {
        [sym__expression] = STATE(193),
        [sym_binary_operator] = STATE(45),
        [sym_unary_operator] = STATE(45),
        [sym_subscript] = STATE(45),
        [sym_call] = STATE(45),
        [sym_list] = STATE(45),
        [sym_list_comprehension] = STATE(45),
        [sym_dictionary] = STATE(45),
        [sym_dictionary_comprehension] = STATE(45),
        [sym_set] = STATE(45),
        [sym_set_comprehension] = STATE(45),
        [anon_sym_not] = ACTIONS(517),
        [anon_sym_LBRACK] = ACTIONS(145),
        [anon_sym_LBRACE] = ACTIONS(147),
        [sym_string] = ACTIONS(149),
        [sym_number] = ACTIONS(151),
        [sym_identifier] = ACTIONS(153),
        [sym_comment] = ACTIONS(83),
    },
    [190] = {
        [sym__expression] = STATE(194),
        [sym_binary_operator] = STATE(45),
        [sym_unary_operator] = STATE(45),
        [sym_subscript] = STATE(45),
        [sym_call] = STATE(45),
        [sym_list] = STATE(45),
        [sym_list_comprehension] = STATE(45),
        [sym_dictionary] = STATE(45),
        [sym_dictionary_comprehension] = STATE(45),
        [sym_set] = STATE(45),
        [sym_set_comprehension] = STATE(45),
        [anon_sym_not] = ACTIONS(517),
        [anon_sym_LBRACK] = ACTIONS(145),
        [anon_sym_LBRACE] = ACTIONS(147),
        [sym_string] = ACTIONS(149),
        [sym_number] = ACTIONS(151),
        [sym_identifier] = ACTIONS(153),
        [sym_comment] = ACTIONS(83),
    },
    [191] = {
        [sym__expression] = STATE(196),
        [sym_binary_operator] = STATE(45),
        [sym_unary_operator] = STATE(45),
        [sym_subscript] = STATE(45),
        [sym_call] = STATE(45),
        [sym_list] = STATE(45),
        [sym_list_comprehension] = STATE(45),
        [sym_dictionary] = STATE(45),
        [sym_dictionary_comprehension] = STATE(45),
        [sym_set] = STATE(45),
        [sym_set_comprehension] = STATE(45),
        [anon_sym_not] = ACTIONS(517),
        [anon_sym_LBRACK] = ACTIONS(145),
        [anon_sym_LBRACE] = ACTIONS(147),
        [sym_string] = ACTIONS(149),
        [sym_number] = ACTIONS(151),
        [sym_identifier] = ACTIONS(153),
        [sym_comment] = ACTIONS(83),
    },
    [192] = {
        [anon_sym_LPAREN] = ACTIONS(535),
        [anon_sym_RPAREN] = ACTIONS(535),
        [anon_sym_COMMA] = ACTIONS(535),
        [anon_sym_as] = ACTIONS(535),
        [anon_sym_STAR] = ACTIONS(537),
        [anon_sym_COLON] = ACTIONS(535),
        [anon_sym_for] = ACTIONS(535),
        [anon_sym_in] = ACTIONS(535),
        [anon_sym_PLUS] = ACTIONS(535),
        [anon_sym_DASH] = ACTIONS(535),
        [anon_sym_SLASH] = ACTIONS(535),
        [anon_sym_STAR_STAR] = ACTIONS(535),
        [anon_sym_PIPE] = ACTIONS(535),
        [anon_sym_AMP] = ACTIONS(535),
        [anon_sym_CARET] = ACTIONS(535),
        [anon_sym_LT_LT] = ACTIONS(535),
        [anon_sym_GT_GT] = ACTIONS(535),
        [anon_sym_and] = ACTIONS(535),
        [anon_sym_or] = ACTIONS(535),
        [anon_sym_LBRACK] = ACTIONS(535),
        [anon_sym_RBRACK] = ACTIONS(535),
        [anon_sym_RBRACE] = ACTIONS(535),
        [sym_comment] = ACTIONS(83),
    },
    [193] = {
        [anon_sym_LPAREN] = ACTIONS(265),
        [anon_sym_STAR] = ACTIONS(519),
        [anon_sym_PLUS] = ACTIONS(521),
        [anon_sym_DASH] = ACTIONS(521),
        [anon_sym_SLASH] = ACTIONS(523),
        [anon_sym_STAR_STAR] = ACTIONS(525),
        [anon_sym_PIPE] = ACTIONS(321),
        [anon_sym_AMP] = ACTIONS(529),
        [anon_sym_CARET] = ACTIONS(531),
        [anon_sym_LT_LT] = ACTIONS(521),
        [anon_sym_GT_GT] = ACTIONS(521),
        [anon_sym_and] = ACTIONS(529),
        [anon_sym_or] = ACTIONS(321),
        [anon_sym_LBRACK] = ACTIONS(321),
        [anon_sym_RBRACE] = ACTIONS(321),
        [sym_comment] = ACTIONS(83),
    },
    [194] = {
        [anon_sym_LPAREN] = ACTIONS(265),
        [anon_sym_STAR] = ACTIONS(519),
        [anon_sym_PLUS] = ACTIONS(521),
        [anon_sym_DASH] = ACTIONS(521),
        [anon_sym_SLASH] = ACTIONS(523),
        [anon_sym_STAR_STAR] = ACTIONS(525),
        [anon_sym_PIPE] = ACTIONS(321),
        [anon_sym_AMP] = ACTIONS(321),
        [anon_sym_CARET] = ACTIONS(531),
        [anon_sym_LT_LT] = ACTIONS(521),
        [anon_sym_GT_GT] = ACTIONS(521),
        [anon_sym_and] = ACTIONS(321),
        [anon_sym_or] = ACTIONS(321),
        [anon_sym_LBRACK] = ACTIONS(321),
        [anon_sym_RBRACE] = ACTIONS(321),
        [sym_comment] = ACTIONS(83),
    },
    [195] = {
        [anon_sym_LPAREN] = ACTIONS(265),
        [anon_sym_STAR] = ACTIONS(519),
        [anon_sym_PLUS] = ACTIONS(321),
        [anon_sym_DASH] = ACTIONS(321),
        [anon_sym_SLASH] = ACTIONS(523),
        [anon_sym_STAR_STAR] = ACTIONS(525),
        [anon_sym_PIPE] = ACTIONS(321),
        [anon_sym_AMP] = ACTIONS(321),
        [anon_sym_CARET] = ACTIONS(321),
        [anon_sym_LT_LT] = ACTIONS(321),
        [anon_sym_GT_GT] = ACTIONS(321),
        [anon_sym_and] = ACTIONS(321),
        [anon_sym_or] = ACTIONS(321),
        [anon_sym_LBRACK] = ACTIONS(321),
        [anon_sym_RBRACE] = ACTIONS(321),
        [sym_comment] = ACTIONS(83),
    },
    [196] = {
        [anon_sym_LPAREN] = ACTIONS(265),
        [anon_sym_STAR] = ACTIONS(519),
        [anon_sym_PLUS] = ACTIONS(521),
        [anon_sym_DASH] = ACTIONS(521),
        [anon_sym_SLASH] = ACTIONS(523),
        [anon_sym_STAR_STAR] = ACTIONS(525),
        [anon_sym_PIPE] = ACTIONS(321),
        [anon_sym_AMP] = ACTIONS(321),
        [anon_sym_CARET] = ACTIONS(321),
        [anon_sym_LT_LT] = ACTIONS(521),
        [anon_sym_GT_GT] = ACTIONS(521),
        [anon_sym_and] = ACTIONS(321),
        [anon_sym_or] = ACTIONS(321),
        [anon_sym_LBRACK] = ACTIONS(321),
        [anon_sym_RBRACE] = ACTIONS(321),
        [sym_comment] = ACTIONS(83),
    },
    [197] = {
        [anon_sym_LPAREN] = ACTIONS(265),
        [anon_sym_STAR] = ACTIONS(323),
        [anon_sym_PLUS] = ACTIONS(321),
        [anon_sym_DASH] = ACTIONS(321),
        [anon_sym_SLASH] = ACTIONS(321),
        [anon_sym_STAR_STAR] = ACTIONS(525),
        [anon_sym_PIPE] = ACTIONS(321),
        [anon_sym_AMP] = ACTIONS(321),
        [anon_sym_CARET] = ACTIONS(321),
        [anon_sym_LT_LT] = ACTIONS(321),
        [anon_sym_GT_GT] = ACTIONS(321),
        [anon_sym_and] = ACTIONS(321),
        [anon_sym_or] = ACTIONS(321),
        [anon_sym_LBRACK] = ACTIONS(321),
        [anon_sym_RBRACE] = ACTIONS(321),
        [sym_comment] = ACTIONS(83),
    },
    [198] = {
        [anon_sym_COMMA] = ACTIONS(539),
        [anon_sym_RBRACE] = ACTIONS(539),
        [sym_comment] = ACTIONS(83),
    },
    [199] = {
        [sym__expression] = STATE(236),
        [sym_binary_operator] = STATE(45),
        [sym_unary_operator] = STATE(45),
        [sym_subscript] = STATE(45),
        [sym_call] = STATE(45),
        [sym_list] = STATE(45),
        [sym_list_comprehension] = STATE(45),
        [sym_dictionary] = STATE(45),
        [sym_dictionary_comprehension] = STATE(45),
        [sym_set] = STATE(45),
        [sym_set_comprehension] = STATE(45),
        [anon_sym_not] = ACTIONS(471),
        [anon_sym_LBRACK] = ACTIONS(145),
        [anon_sym_LBRACE] = ACTIONS(147),
        [anon_sym_RBRACE] = ACTIONS(541),
        [sym_string] = ACTIONS(149),
        [sym_number] = ACTIONS(151),
        [sym_identifier] = ACTIONS(153),
        [sym_comment] = ACTIONS(83),
    },
    [200] = {
        [sym__expression] = STATE(218),
        [sym_binary_operator] = STATE(45),
        [sym_unary_operator] = STATE(45),
        [sym_subscript] = STATE(45),
        [sym_call] = STATE(45),
        [sym_list] = STATE(45),
        [sym_list_comprehension] = STATE(45),
        [sym_dictionary] = STATE(45),
        [sym_dictionary_comprehension] = STATE(45),
        [sym_set] = STATE(45),
        [sym_set_comprehension] = STATE(45),
        [anon_sym_not] = ACTIONS(169),
        [anon_sym_LBRACK] = ACTIONS(145),
        [anon_sym_LBRACE] = ACTIONS(147),
        [sym_string] = ACTIONS(149),
        [sym_number] = ACTIONS(151),
        [sym_identifier] = ACTIONS(153),
        [sym_comment] = ACTIONS(83),
    },
    [201] = {
        [sym__expression] = STATE(224),
        [sym_binary_operator] = STATE(45),
        [sym_unary_operator] = STATE(45),
        [sym_subscript] = STATE(45),
        [sym_call] = STATE(45),
        [sym_list] = STATE(45),
        [sym_list_comprehension] = STATE(45),
        [sym_dictionary] = STATE(45),
        [sym_dictionary_comprehension] = STATE(45),
        [sym_set] = STATE(45),
        [sym_set_comprehension] = STATE(45),
        [anon_sym_not] = ACTIONS(543),
        [anon_sym_LBRACK] = ACTIONS(145),
        [anon_sym_LBRACE] = ACTIONS(147),
        [sym_string] = ACTIONS(149),
        [sym_number] = ACTIONS(151),
        [sym_identifier] = ACTIONS(153),
        [sym_comment] = ACTIONS(83),
    },
    [202] = {
        [sym_expression_list] = STATE(219),
        [sym__expression] = STATE(166),
        [sym_binary_operator] = STATE(45),
        [sym_unary_operator] = STATE(45),
        [sym_subscript] = STATE(45),
        [sym_call] = STATE(45),
        [sym_list] = STATE(45),
        [sym_list_comprehension] = STATE(45),
        [sym_dictionary] = STATE(45),
        [sym_dictionary_comprehension] = STATE(45),
        [sym_set] = STATE(45),
        [sym_set_comprehension] = STATE(45),
        [anon_sym_not] = ACTIONS(155),
        [anon_sym_LBRACK] = ACTIONS(145),
        [anon_sym_LBRACE] = ACTIONS(147),
        [sym_string] = ACTIONS(149),
        [sym_number] = ACTIONS(151),
        [sym_identifier] = ACTIONS(153),
        [sym_comment] = ACTIONS(83),
    },
    [203] = {
        [sym__expression] = STATE(216),
        [sym_binary_operator] = STATE(45),
        [sym_unary_operator] = STATE(45),
        [sym_subscript] = STATE(45),
        [sym_call] = STATE(45),
        [sym_list] = STATE(45),
        [sym_list_comprehension] = STATE(45),
        [sym_dictionary] = STATE(45),
        [sym_dictionary_comprehension] = STATE(45),
        [sym_set] = STATE(45),
        [sym_set_comprehension] = STATE(45),
        [anon_sym_not] = ACTIONS(169),
        [anon_sym_LBRACK] = ACTIONS(145),
        [anon_sym_LBRACE] = ACTIONS(147),
        [sym_string] = ACTIONS(149),
        [sym_number] = ACTIONS(151),
        [sym_identifier] = ACTIONS(153),
        [sym_comment] = ACTIONS(83),
    },
    [204] = {
        [sym__expression] = STATE(77),
        [sym_binary_operator] = STATE(45),
        [sym_unary_operator] = STATE(45),
        [sym_subscript] = STATE(45),
        [sym_call] = STATE(45),
        [sym_list] = STATE(45),
        [sym_list_comprehension] = STATE(45),
        [sym_dictionary] = STATE(45),
        [sym_dictionary_comprehension] = STATE(45),
        [sym_set] = STATE(45),
        [sym_set_comprehension] = STATE(45),
        [anon_sym_not] = ACTIONS(169),
        [anon_sym_LBRACK] = ACTIONS(145),
        [anon_sym_LBRACE] = ACTIONS(147),
        [sym_string] = ACTIONS(149),
        [sym_number] = ACTIONS(151),
        [sym_identifier] = ACTIONS(153),
        [sym_comment] = ACTIONS(83),
    },
    [205] = {
        [sym__expression] = STATE(214),
        [sym_binary_operator] = STATE(45),
        [sym_unary_operator] = STATE(45),
        [sym_subscript] = STATE(45),
        [sym_call] = STATE(45),
        [sym_list] = STATE(45),
        [sym_list_comprehension] = STATE(45),
        [sym_dictionary] = STATE(45),
        [sym_dictionary_comprehension] = STATE(45),
        [sym_set] = STATE(45),
        [sym_set_comprehension] = STATE(45),
        [anon_sym_not] = ACTIONS(169),
        [anon_sym_LBRACK] = ACTIONS(145),
        [anon_sym_LBRACE] = ACTIONS(147),
        [sym_string] = ACTIONS(149),
        [sym_number] = ACTIONS(151),
        [sym_identifier] = ACTIONS(153),
        [sym_comment] = ACTIONS(83),
    },
    [206] = {
        [sym__expression] = STATE(215),
        [sym_binary_operator] = STATE(45),
        [sym_unary_operator] = STATE(45),
        [sym_subscript] = STATE(45),
        [sym_call] = STATE(45),
        [sym_list] = STATE(45),
        [sym_list_comprehension] = STATE(45),
        [sym_dictionary] = STATE(45),
        [sym_dictionary_comprehension] = STATE(45),
        [sym_set] = STATE(45),
        [sym_set_comprehension] = STATE(45),
        [anon_sym_not] = ACTIONS(169),
        [anon_sym_LBRACK] = ACTIONS(145),
        [anon_sym_LBRACE] = ACTIONS(147),
        [sym_string] = ACTIONS(149),
        [sym_number] = ACTIONS(151),
        [sym_identifier] = ACTIONS(153),
        [sym_comment] = ACTIONS(83),
    },
    [207] = {
        [sym__expression] = STATE(217),
        [sym_binary_operator] = STATE(45),
        [sym_unary_operator] = STATE(45),
        [sym_subscript] = STATE(45),
        [sym_call] = STATE(45),
        [sym_list] = STATE(45),
        [sym_list_comprehension] = STATE(45),
        [sym_dictionary] = STATE(45),
        [sym_dictionary_comprehension] = STATE(45),
        [sym_set] = STATE(45),
        [sym_set_comprehension] = STATE(45),
        [anon_sym_not] = ACTIONS(169),
        [anon_sym_LBRACK] = ACTIONS(145),
        [anon_sym_LBRACE] = ACTIONS(147),
        [sym_string] = ACTIONS(149),
        [sym_number] = ACTIONS(151),
        [sym_identifier] = ACTIONS(153),
        [sym_comment] = ACTIONS(83),
    },
    [208] = {
        [anon_sym_LPAREN] = ACTIONS(545),
        [anon_sym_RPAREN] = ACTIONS(545),
        [anon_sym_COMMA] = ACTIONS(545),
        [anon_sym_as] = ACTIONS(545),
        [anon_sym_STAR] = ACTIONS(547),
        [anon_sym_COLON] = ACTIONS(545),
        [anon_sym_for] = ACTIONS(545),
        [anon_sym_in] = ACTIONS(545),
        [anon_sym_PLUS] = ACTIONS(545),
        [anon_sym_DASH] = ACTIONS(545),
        [anon_sym_SLASH] = ACTIONS(545),
        [anon_sym_STAR_STAR] = ACTIONS(545),
        [anon_sym_PIPE] = ACTIONS(545),
        [anon_sym_AMP] = ACTIONS(545),
        [anon_sym_CARET] = ACTIONS(545),
        [anon_sym_LT_LT] = ACTIONS(545),
        [anon_sym_GT_GT] = ACTIONS(545),
        [anon_sym_and] = ACTIONS(545),
        [anon_sym_or] = ACTIONS(545),
        [anon_sym_LBRACK] = ACTIONS(545),
        [anon_sym_RBRACK] = ACTIONS(545),
        [anon_sym_RBRACE] = ACTIONS(545),
        [sym_comment] = ACTIONS(83),
    },
    [209] = {
        [anon_sym_COMMA] = ACTIONS(549),
        [anon_sym_RBRACE] = ACTIONS(541),
        [sym_comment] = ACTIONS(83),
    },
    [210] = {
        [sym__expression] = STATE(213),
        [sym_binary_operator] = STATE(45),
        [sym_unary_operator] = STATE(45),
        [sym_subscript] = STATE(45),
        [sym_call] = STATE(45),
        [sym_list] = STATE(45),
        [sym_list_comprehension] = STATE(45),
        [sym_dictionary] = STATE(45),
        [sym_dictionary_comprehension] = STATE(45),
        [sym_set] = STATE(45),
        [sym_set_comprehension] = STATE(45),
        [anon_sym_not] = ACTIONS(471),
        [anon_sym_LBRACK] = ACTIONS(145),
        [anon_sym_LBRACE] = ACTIONS(147),
        [anon_sym_RBRACE] = ACTIONS(551),
        [sym_string] = ACTIONS(149),
        [sym_number] = ACTIONS(151),
        [sym_identifier] = ACTIONS(153),
        [sym_comment] = ACTIONS(83),
    },
    [211] = {
        [anon_sym_LPAREN] = ACTIONS(553),
        [anon_sym_RPAREN] = ACTIONS(553),
        [anon_sym_COMMA] = ACTIONS(553),
        [anon_sym_as] = ACTIONS(553),
        [anon_sym_STAR] = ACTIONS(555),
        [anon_sym_COLON] = ACTIONS(553),
        [anon_sym_for] = ACTIONS(553),
        [anon_sym_in] = ACTIONS(553),
        [anon_sym_PLUS] = ACTIONS(553),
        [anon_sym_DASH] = ACTIONS(553),
        [anon_sym_SLASH] = ACTIONS(553),
        [anon_sym_STAR_STAR] = ACTIONS(553),
        [anon_sym_PIPE] = ACTIONS(553),
        [anon_sym_AMP] = ACTIONS(553),
        [anon_sym_CARET] = ACTIONS(553),
        [anon_sym_LT_LT] = ACTIONS(553),
        [anon_sym_GT_GT] = ACTIONS(553),
        [anon_sym_and] = ACTIONS(553),
        [anon_sym_or] = ACTIONS(553),
        [anon_sym_LBRACK] = ACTIONS(553),
        [anon_sym_RBRACK] = ACTIONS(553),
        [anon_sym_RBRACE] = ACTIONS(553),
        [sym_comment] = ACTIONS(83),
    },
    [212] = {
        [anon_sym_LPAREN] = ACTIONS(557),
        [anon_sym_RPAREN] = ACTIONS(557),
        [anon_sym_COMMA] = ACTIONS(557),
        [anon_sym_as] = ACTIONS(557),
        [anon_sym_STAR] = ACTIONS(559),
        [anon_sym_COLON] = ACTIONS(557),
        [anon_sym_for] = ACTIONS(557),
        [anon_sym_in] = ACTIONS(557),
        [anon_sym_PLUS] = ACTIONS(557),
        [anon_sym_DASH] = ACTIONS(557),
        [anon_sym_SLASH] = ACTIONS(557),
        [anon_sym_STAR_STAR] = ACTIONS(557),
        [anon_sym_PIPE] = ACTIONS(557),
        [anon_sym_AMP] = ACTIONS(557),
        [anon_sym_CARET] = ACTIONS(557),
        [anon_sym_LT_LT] = ACTIONS(557),
        [anon_sym_GT_GT] = ACTIONS(557),
        [anon_sym_and] = ACTIONS(557),
        [anon_sym_or] = ACTIONS(557),
        [anon_sym_LBRACK] = ACTIONS(557),
        [anon_sym_RBRACK] = ACTIONS(557),
        [anon_sym_RBRACE] = ACTIONS(557),
        [sym_comment] = ACTIONS(83),
    },
    [213] = {
        [anon_sym_LPAREN] = ACTIONS(265),
        [anon_sym_COMMA] = ACTIONS(513),
        [anon_sym_STAR] = ACTIONS(475),
        [anon_sym_PLUS] = ACTIONS(477),
        [anon_sym_DASH] = ACTIONS(477),
        [anon_sym_SLASH] = ACTIONS(479),
        [anon_sym_STAR_STAR] = ACTIONS(481),
        [anon_sym_PIPE] = ACTIONS(483),
        [anon_sym_AMP] = ACTIONS(485),
        [anon_sym_CARET] = ACTIONS(487),
        [anon_sym_LT_LT] = ACTIONS(477),
        [anon_sym_GT_GT] = ACTIONS(477),
        [anon_sym_and] = ACTIONS(485),
        [anon_sym_or] = ACTIONS(483),
        [anon_sym_LBRACK] = ACTIONS(281),
        [anon_sym_RBRACE] = ACTIONS(513),
        [sym_comment] = ACTIONS(83),
    },
    [214] = {
        [anon_sym_LPAREN] = ACTIONS(265),
        [anon_sym_COMMA] = ACTIONS(321),
        [anon_sym_STAR] = ACTIONS(409),
        [anon_sym_COLON] = ACTIONS(321),
        [anon_sym_for] = ACTIONS(321),
        [anon_sym_PLUS] = ACTIONS(415),
        [anon_sym_DASH] = ACTIONS(415),
        [anon_sym_SLASH] = ACTIONS(417),
        [anon_sym_STAR_STAR] = ACTIONS(419),
        [anon_sym_PIPE] = ACTIONS(321),
        [anon_sym_AMP] = ACTIONS(423),
        [anon_sym_CARET] = ACTIONS(425),
        [anon_sym_LT_LT] = ACTIONS(415),
        [anon_sym_GT_GT] = ACTIONS(415),
        [anon_sym_and] = ACTIONS(423),
        [anon_sym_or] = ACTIONS(321),
        [anon_sym_LBRACK] = ACTIONS(321),
        [anon_sym_RBRACE] = ACTIONS(321),
        [sym_comment] = ACTIONS(83),
    },
    [215] = {
        [anon_sym_LPAREN] = ACTIONS(265),
        [anon_sym_COMMA] = ACTIONS(321),
        [anon_sym_STAR] = ACTIONS(409),
        [anon_sym_COLON] = ACTIONS(321),
        [anon_sym_for] = ACTIONS(321),
        [anon_sym_PLUS] = ACTIONS(415),
        [anon_sym_DASH] = ACTIONS(415),
        [anon_sym_SLASH] = ACTIONS(417),
        [anon_sym_STAR_STAR] = ACTIONS(419),
        [anon_sym_PIPE] = ACTIONS(321),
        [anon_sym_AMP] = ACTIONS(321),
        [anon_sym_CARET] = ACTIONS(425),
        [anon_sym_LT_LT] = ACTIONS(415),
        [anon_sym_GT_GT] = ACTIONS(415),
        [anon_sym_and] = ACTIONS(321),
        [anon_sym_or] = ACTIONS(321),
        [anon_sym_LBRACK] = ACTIONS(321),
        [anon_sym_RBRACE] = ACTIONS(321),
        [sym_comment] = ACTIONS(83),
    },
    [216] = {
        [anon_sym_LPAREN] = ACTIONS(265),
        [anon_sym_COMMA] = ACTIONS(321),
        [anon_sym_STAR] = ACTIONS(409),
        [anon_sym_COLON] = ACTIONS(321),
        [anon_sym_for] = ACTIONS(321),
        [anon_sym_PLUS] = ACTIONS(321),
        [anon_sym_DASH] = ACTIONS(321),
        [anon_sym_SLASH] = ACTIONS(417),
        [anon_sym_STAR_STAR] = ACTIONS(419),
        [anon_sym_PIPE] = ACTIONS(321),
        [anon_sym_AMP] = ACTIONS(321),
        [anon_sym_CARET] = ACTIONS(321),
        [anon_sym_LT_LT] = ACTIONS(321),
        [anon_sym_GT_GT] = ACTIONS(321),
        [anon_sym_and] = ACTIONS(321),
        [anon_sym_or] = ACTIONS(321),
        [anon_sym_LBRACK] = ACTIONS(321),
        [anon_sym_RBRACE] = ACTIONS(321),
        [sym_comment] = ACTIONS(83),
    },
    [217] = {
        [anon_sym_LPAREN] = ACTIONS(265),
        [anon_sym_COMMA] = ACTIONS(321),
        [anon_sym_STAR] = ACTIONS(409),
        [anon_sym_COLON] = ACTIONS(321),
        [anon_sym_for] = ACTIONS(321),
        [anon_sym_PLUS] = ACTIONS(415),
        [anon_sym_DASH] = ACTIONS(415),
        [anon_sym_SLASH] = ACTIONS(417),
        [anon_sym_STAR_STAR] = ACTIONS(419),
        [anon_sym_PIPE] = ACTIONS(321),
        [anon_sym_AMP] = ACTIONS(321),
        [anon_sym_CARET] = ACTIONS(321),
        [anon_sym_LT_LT] = ACTIONS(415),
        [anon_sym_GT_GT] = ACTIONS(415),
        [anon_sym_and] = ACTIONS(321),
        [anon_sym_or] = ACTIONS(321),
        [anon_sym_LBRACK] = ACTIONS(321),
        [anon_sym_RBRACE] = ACTIONS(321),
        [sym_comment] = ACTIONS(83),
    },
    [218] = {
        [anon_sym_LPAREN] = ACTIONS(265),
        [anon_sym_COMMA] = ACTIONS(321),
        [anon_sym_STAR] = ACTIONS(323),
        [anon_sym_COLON] = ACTIONS(321),
        [anon_sym_for] = ACTIONS(321),
        [anon_sym_PLUS] = ACTIONS(321),
        [anon_sym_DASH] = ACTIONS(321),
        [anon_sym_SLASH] = ACTIONS(321),
        [anon_sym_STAR_STAR] = ACTIONS(419),
        [anon_sym_PIPE] = ACTIONS(321),
        [anon_sym_AMP] = ACTIONS(321),
        [anon_sym_CARET] = ACTIONS(321),
        [anon_sym_LT_LT] = ACTIONS(321),
        [anon_sym_GT_GT] = ACTIONS(321),
        [anon_sym_and] = ACTIONS(321),
        [anon_sym_or] = ACTIONS(321),
        [anon_sym_LBRACK] = ACTIONS(321),
        [anon_sym_RBRACE] = ACTIONS(321),
        [sym_comment] = ACTIONS(83),
    },
    [219] = {
        [anon_sym_in] = ACTIONS(561),
        [sym_comment] = ACTIONS(83),
    },
    [220] = {
        [sym__expression] = STATE(221),
        [sym_binary_operator] = STATE(45),
        [sym_unary_operator] = STATE(45),
        [sym_subscript] = STATE(45),
        [sym_call] = STATE(45),
        [sym_list] = STATE(45),
        [sym_list_comprehension] = STATE(45),
        [sym_dictionary] = STATE(45),
        [sym_dictionary_comprehension] = STATE(45),
        [sym_set] = STATE(45),
        [sym_set_comprehension] = STATE(45),
        [anon_sym_not] = ACTIONS(517),
        [anon_sym_LBRACK] = ACTIONS(145),
        [anon_sym_LBRACE] = ACTIONS(147),
        [sym_string] = ACTIONS(149),
        [sym_number] = ACTIONS(151),
        [sym_identifier] = ACTIONS(153),
        [sym_comment] = ACTIONS(83),
    },
    [221] = {
        [anon_sym_LPAREN] = ACTIONS(265),
        [anon_sym_STAR] = ACTIONS(519),
        [anon_sym_PLUS] = ACTIONS(521),
        [anon_sym_DASH] = ACTIONS(521),
        [anon_sym_SLASH] = ACTIONS(523),
        [anon_sym_STAR_STAR] = ACTIONS(525),
        [anon_sym_PIPE] = ACTIONS(527),
        [anon_sym_AMP] = ACTIONS(529),
        [anon_sym_CARET] = ACTIONS(531),
        [anon_sym_LT_LT] = ACTIONS(521),
        [anon_sym_GT_GT] = ACTIONS(521),
        [anon_sym_and] = ACTIONS(529),
        [anon_sym_or] = ACTIONS(527),
        [anon_sym_LBRACK] = ACTIONS(281),
        [anon_sym_RBRACE] = ACTIONS(563),
        [sym_comment] = ACTIONS(83),
    },
    [222] = {
        [anon_sym_LPAREN] = ACTIONS(565),
        [anon_sym_RPAREN] = ACTIONS(565),
        [anon_sym_COMMA] = ACTIONS(565),
        [anon_sym_as] = ACTIONS(565),
        [anon_sym_STAR] = ACTIONS(567),
        [anon_sym_COLON] = ACTIONS(565),
        [anon_sym_for] = ACTIONS(565),
        [anon_sym_in] = ACTIONS(565),
        [anon_sym_PLUS] = ACTIONS(565),
        [anon_sym_DASH] = ACTIONS(565),
        [anon_sym_SLASH] = ACTIONS(565),
        [anon_sym_STAR_STAR] = ACTIONS(565),
        [anon_sym_PIPE] = ACTIONS(565),
        [anon_sym_AMP] = ACTIONS(565),
        [anon_sym_CARET] = ACTIONS(565),
        [anon_sym_LT_LT] = ACTIONS(565),
        [anon_sym_GT_GT] = ACTIONS(565),
        [anon_sym_and] = ACTIONS(565),
        [anon_sym_or] = ACTIONS(565),
        [anon_sym_LBRACK] = ACTIONS(565),
        [anon_sym_RBRACK] = ACTIONS(565),
        [anon_sym_RBRACE] = ACTIONS(565),
        [sym_comment] = ACTIONS(83),
    },
    [223] = {
        [sym__expression] = STATE(276),
        [sym_binary_operator] = STATE(45),
        [sym_unary_operator] = STATE(45),
        [sym_subscript] = STATE(45),
        [sym_call] = STATE(45),
        [sym_list] = STATE(45),
        [sym_list_comprehension] = STATE(45),
        [sym_dictionary] = STATE(45),
        [sym_dictionary_comprehension] = STATE(45),
        [sym_set] = STATE(45),
        [sym_set_comprehension] = STATE(45),
        [anon_sym_not] = ACTIONS(543),
        [anon_sym_LBRACK] = ACTIONS(145),
        [anon_sym_LBRACE] = ACTIONS(147),
        [sym_string] = ACTIONS(149),
        [sym_number] = ACTIONS(151),
        [sym_identifier] = ACTIONS(153),
        [sym_comment] = ACTIONS(83),
    },
    [224] = {
        [anon_sym_LPAREN] = ACTIONS(265),
        [anon_sym_COMMA] = ACTIONS(473),
        [anon_sym_STAR] = ACTIONS(569),
        [anon_sym_for] = ACTIONS(473),
        [anon_sym_PLUS] = ACTIONS(571),
        [anon_sym_DASH] = ACTIONS(571),
        [anon_sym_SLASH] = ACTIONS(573),
        [anon_sym_STAR_STAR] = ACTIONS(575),
        [anon_sym_PIPE] = ACTIONS(577),
        [anon_sym_AMP] = ACTIONS(579),
        [anon_sym_CARET] = ACTIONS(581),
        [anon_sym_LT_LT] = ACTIONS(571),
        [anon_sym_GT_GT] = ACTIONS(571),
        [anon_sym_and] = ACTIONS(579),
        [anon_sym_or] = ACTIONS(577),
        [anon_sym_LBRACK] = ACTIONS(281),
        [anon_sym_RBRACE] = ACTIONS(473),
        [sym_comment] = ACTIONS(83),
    },
    [225] = {
        [sym__expression] = STATE(235),
        [sym_binary_operator] = STATE(45),
        [sym_unary_operator] = STATE(45),
        [sym_subscript] = STATE(45),
        [sym_call] = STATE(45),
        [sym_list] = STATE(45),
        [sym_list_comprehension] = STATE(45),
        [sym_dictionary] = STATE(45),
        [sym_dictionary_comprehension] = STATE(45),
        [sym_set] = STATE(45),
        [sym_set_comprehension] = STATE(45),
        [anon_sym_not] = ACTIONS(543),
        [anon_sym_LBRACK] = ACTIONS(145),
        [anon_sym_LBRACE] = ACTIONS(147),
        [sym_string] = ACTIONS(149),
        [sym_number] = ACTIONS(151),
        [sym_identifier] = ACTIONS(153),
        [sym_comment] = ACTIONS(83),
    },
    [226] = {
        [sym__expression] = STATE(233),
        [sym_binary_operator] = STATE(45),
        [sym_unary_operator] = STATE(45),
        [sym_subscript] = STATE(45),
        [sym_call] = STATE(45),
        [sym_list] = STATE(45),
        [sym_list_comprehension] = STATE(45),
        [sym_dictionary] = STATE(45),
        [sym_dictionary_comprehension] = STATE(45),
        [sym_set] = STATE(45),
        [sym_set_comprehension] = STATE(45),
        [anon_sym_not] = ACTIONS(543),
        [anon_sym_LBRACK] = ACTIONS(145),
        [anon_sym_LBRACE] = ACTIONS(147),
        [sym_string] = ACTIONS(149),
        [sym_number] = ACTIONS(151),
        [sym_identifier] = ACTIONS(153),
        [sym_comment] = ACTIONS(83),
    },
    [227] = {
        [sym__expression] = STATE(77),
        [sym_binary_operator] = STATE(45),
        [sym_unary_operator] = STATE(45),
        [sym_subscript] = STATE(45),
        [sym_call] = STATE(45),
        [sym_list] = STATE(45),
        [sym_list_comprehension] = STATE(45),
        [sym_dictionary] = STATE(45),
        [sym_dictionary_comprehension] = STATE(45),
        [sym_set] = STATE(45),
        [sym_set_comprehension] = STATE(45),
        [anon_sym_not] = ACTIONS(543),
        [anon_sym_LBRACK] = ACTIONS(145),
        [anon_sym_LBRACE] = ACTIONS(147),
        [sym_string] = ACTIONS(149),
        [sym_number] = ACTIONS(151),
        [sym_identifier] = ACTIONS(153),
        [sym_comment] = ACTIONS(83),
    },
    [228] = {
        [sym__expression] = STATE(231),
        [sym_binary_operator] = STATE(45),
        [sym_unary_operator] = STATE(45),
        [sym_subscript] = STATE(45),
        [sym_call] = STATE(45),
        [sym_list] = STATE(45),
        [sym_list_comprehension] = STATE(45),
        [sym_dictionary] = STATE(45),
        [sym_dictionary_comprehension] = STATE(45),
        [sym_set] = STATE(45),
        [sym_set_comprehension] = STATE(45),
        [anon_sym_not] = ACTIONS(543),
        [anon_sym_LBRACK] = ACTIONS(145),
        [anon_sym_LBRACE] = ACTIONS(147),
        [sym_string] = ACTIONS(149),
        [sym_number] = ACTIONS(151),
        [sym_identifier] = ACTIONS(153),
        [sym_comment] = ACTIONS(83),
    },
    [229] = {
        [sym__expression] = STATE(232),
        [sym_binary_operator] = STATE(45),
        [sym_unary_operator] = STATE(45),
        [sym_subscript] = STATE(45),
        [sym_call] = STATE(45),
        [sym_list] = STATE(45),
        [sym_list_comprehension] = STATE(45),
        [sym_dictionary] = STATE(45),
        [sym_dictionary_comprehension] = STATE(45),
        [sym_set] = STATE(45),
        [sym_set_comprehension] = STATE(45),
        [anon_sym_not] = ACTIONS(543),
        [anon_sym_LBRACK] = ACTIONS(145),
        [anon_sym_LBRACE] = ACTIONS(147),
        [sym_string] = ACTIONS(149),
        [sym_number] = ACTIONS(151),
        [sym_identifier] = ACTIONS(153),
        [sym_comment] = ACTIONS(83),
    },
    [230] = {
        [sym__expression] = STATE(234),
        [sym_binary_operator] = STATE(45),
        [sym_unary_operator] = STATE(45),
        [sym_subscript] = STATE(45),
        [sym_call] = STATE(45),
        [sym_list] = STATE(45),
        [sym_list_comprehension] = STATE(45),
        [sym_dictionary] = STATE(45),
        [sym_dictionary_comprehension] = STATE(45),
        [sym_set] = STATE(45),
        [sym_set_comprehension] = STATE(45),
        [anon_sym_not] = ACTIONS(543),
        [anon_sym_LBRACK] = ACTIONS(145),
        [anon_sym_LBRACE] = ACTIONS(147),
        [sym_string] = ACTIONS(149),
        [sym_number] = ACTIONS(151),
        [sym_identifier] = ACTIONS(153),
        [sym_comment] = ACTIONS(83),
    },
    [231] = {
        [anon_sym_LPAREN] = ACTIONS(265),
        [anon_sym_COMMA] = ACTIONS(321),
        [anon_sym_STAR] = ACTIONS(569),
        [anon_sym_for] = ACTIONS(321),
        [anon_sym_PLUS] = ACTIONS(571),
        [anon_sym_DASH] = ACTIONS(571),
        [anon_sym_SLASH] = ACTIONS(573),
        [anon_sym_STAR_STAR] = ACTIONS(575),
        [anon_sym_PIPE] = ACTIONS(321),
        [anon_sym_AMP] = ACTIONS(579),
        [anon_sym_CARET] = ACTIONS(581),
        [anon_sym_LT_LT] = ACTIONS(571),
        [anon_sym_GT_GT] = ACTIONS(571),
        [anon_sym_and] = ACTIONS(579),
        [anon_sym_or] = ACTIONS(321),
        [anon_sym_LBRACK] = ACTIONS(321),
        [anon_sym_RBRACE] = ACTIONS(321),
        [sym_comment] = ACTIONS(83),
    },
    [232] = {
        [anon_sym_LPAREN] = ACTIONS(265),
        [anon_sym_COMMA] = ACTIONS(321),
        [anon_sym_STAR] = ACTIONS(569),
        [anon_sym_for] = ACTIONS(321),
        [anon_sym_PLUS] = ACTIONS(571),
        [anon_sym_DASH] = ACTIONS(571),
        [anon_sym_SLASH] = ACTIONS(573),
        [anon_sym_STAR_STAR] = ACTIONS(575),
        [anon_sym_PIPE] = ACTIONS(321),
        [anon_sym_AMP] = ACTIONS(321),
        [anon_sym_CARET] = ACTIONS(581),
        [anon_sym_LT_LT] = ACTIONS(571),
        [anon_sym_GT_GT] = ACTIONS(571),
        [anon_sym_and] = ACTIONS(321),
        [anon_sym_or] = ACTIONS(321),
        [anon_sym_LBRACK] = ACTIONS(321),
        [anon_sym_RBRACE] = ACTIONS(321),
        [sym_comment] = ACTIONS(83),
    },
    [233] = {
        [anon_sym_LPAREN] = ACTIONS(265),
        [anon_sym_COMMA] = ACTIONS(321),
        [anon_sym_STAR] = ACTIONS(569),
        [anon_sym_for] = ACTIONS(321),
        [anon_sym_PLUS] = ACTIONS(321),
        [anon_sym_DASH] = ACTIONS(321),
        [anon_sym_SLASH] = ACTIONS(573),
        [anon_sym_STAR_STAR] = ACTIONS(575),
        [anon_sym_PIPE] = ACTIONS(321),
        [anon_sym_AMP] = ACTIONS(321),
        [anon_sym_CARET] = ACTIONS(321),
        [anon_sym_LT_LT] = ACTIONS(321),
        [anon_sym_GT_GT] = ACTIONS(321),
        [anon_sym_and] = ACTIONS(321),
        [anon_sym_or] = ACTIONS(321),
        [anon_sym_LBRACK] = ACTIONS(321),
        [anon_sym_RBRACE] = ACTIONS(321),
        [sym_comment] = ACTIONS(83),
    },
    [234] = {
        [anon_sym_LPAREN] = ACTIONS(265),
        [anon_sym_COMMA] = ACTIONS(321),
        [anon_sym_STAR] = ACTIONS(569),
        [anon_sym_for] = ACTIONS(321),
        [anon_sym_PLUS] = ACTIONS(571),
        [anon_sym_DASH] = ACTIONS(571),
        [anon_sym_SLASH] = ACTIONS(573),
        [anon_sym_STAR_STAR] = ACTIONS(575),
        [anon_sym_PIPE] = ACTIONS(321),
        [anon_sym_AMP] = ACTIONS(321),
        [anon_sym_CARET] = ACTIONS(321),
        [anon_sym_LT_LT] = ACTIONS(571),
        [anon_sym_GT_GT] = ACTIONS(571),
        [anon_sym_and] = ACTIONS(321),
        [anon_sym_or] = ACTIONS(321),
        [anon_sym_LBRACK] = ACTIONS(321),
        [anon_sym_RBRACE] = ACTIONS(321),
        [sym_comment] = ACTIONS(83),
    },
    [235] = {
        [anon_sym_LPAREN] = ACTIONS(265),
        [anon_sym_COMMA] = ACTIONS(321),
        [anon_sym_STAR] = ACTIONS(323),
        [anon_sym_for] = ACTIONS(321),
        [anon_sym_PLUS] = ACTIONS(321),
        [anon_sym_DASH] = ACTIONS(321),
        [anon_sym_SLASH] = ACTIONS(321),
        [anon_sym_STAR_STAR] = ACTIONS(575),
        [anon_sym_PIPE] = ACTIONS(321),
        [anon_sym_AMP] = ACTIONS(321),
        [anon_sym_CARET] = ACTIONS(321),
        [anon_sym_LT_LT] = ACTIONS(321),
        [anon_sym_GT_GT] = ACTIONS(321),
        [anon_sym_and] = ACTIONS(321),
        [anon_sym_or] = ACTIONS(321),
        [anon_sym_LBRACK] = ACTIONS(321),
        [anon_sym_RBRACE] = ACTIONS(321),
        [sym_comment] = ACTIONS(83),
    },
    [236] = {
        [anon_sym_LPAREN] = ACTIONS(265),
        [anon_sym_COMMA] = ACTIONS(515),
        [anon_sym_STAR] = ACTIONS(475),
        [anon_sym_PLUS] = ACTIONS(477),
        [anon_sym_DASH] = ACTIONS(477),
        [anon_sym_SLASH] = ACTIONS(479),
        [anon_sym_STAR_STAR] = ACTIONS(481),
        [anon_sym_PIPE] = ACTIONS(483),
        [anon_sym_AMP] = ACTIONS(485),
        [anon_sym_CARET] = ACTIONS(487),
        [anon_sym_LT_LT] = ACTIONS(477),
        [anon_sym_GT_GT] = ACTIONS(477),
        [anon_sym_and] = ACTIONS(485),
        [anon_sym_or] = ACTIONS(483),
        [anon_sym_LBRACK] = ACTIONS(281),
        [anon_sym_RBRACE] = ACTIONS(515),
        [sym_comment] = ACTIONS(83),
    },
    [237] = {
        [sym__expression] = STATE(276),
        [sym_binary_operator] = STATE(45),
        [sym_unary_operator] = STATE(45),
        [sym_subscript] = STATE(45),
        [sym_call] = STATE(45),
        [sym_list] = STATE(45),
        [sym_list_comprehension] = STATE(45),
        [sym_dictionary] = STATE(45),
        [sym_dictionary_comprehension] = STATE(45),
        [sym_set] = STATE(45),
        [sym_set_comprehension] = STATE(45),
        [anon_sym_not] = ACTIONS(165),
        [anon_sym_LBRACK] = ACTIONS(145),
        [anon_sym_LBRACE] = ACTIONS(147),
        [sym_string] = ACTIONS(149),
        [sym_number] = ACTIONS(151),
        [sym_identifier] = ACTIONS(153),
        [sym_comment] = ACTIONS(83),
    },
    [238] = {
        [anon_sym_LPAREN] = ACTIONS(583),
        [anon_sym_RPAREN] = ACTIONS(583),
        [anon_sym_COMMA] = ACTIONS(583),
        [anon_sym_as] = ACTIONS(583),
        [anon_sym_STAR] = ACTIONS(585),
        [anon_sym_COLON] = ACTIONS(583),
        [anon_sym_for] = ACTIONS(583),
        [anon_sym_in] = ACTIONS(583),
        [anon_sym_PLUS] = ACTIONS(583),
        [anon_sym_DASH] = ACTIONS(583),
        [anon_sym_SLASH] = ACTIONS(583),
        [anon_sym_STAR_STAR] = ACTIONS(583),
        [anon_sym_PIPE] = ACTIONS(583),
        [anon_sym_AMP] = ACTIONS(583),
        [anon_sym_CARET] = ACTIONS(583),
        [anon_sym_LT_LT] = ACTIONS(583),
        [anon_sym_GT_GT] = ACTIONS(583),
        [anon_sym_and] = ACTIONS(583),
        [anon_sym_or] = ACTIONS(583),
        [anon_sym_LBRACK] = ACTIONS(583),
        [anon_sym_RBRACK] = ACTIONS(583),
        [anon_sym_RBRACE] = ACTIONS(583),
        [sym_comment] = ACTIONS(83),
    },
    [239] = {
        [aux_sym_print_statement_repeat1] = STATE(249),
        [anon_sym_LPAREN] = ACTIONS(265),
        [anon_sym_COMMA] = ACTIONS(587),
        [anon_sym_STAR] = ACTIONS(589),
        [anon_sym_for] = ACTIONS(591),
        [anon_sym_PLUS] = ACTIONS(593),
        [anon_sym_DASH] = ACTIONS(593),
        [anon_sym_SLASH] = ACTIONS(595),
        [anon_sym_STAR_STAR] = ACTIONS(597),
        [anon_sym_PIPE] = ACTIONS(599),
        [anon_sym_AMP] = ACTIONS(601),
        [anon_sym_CARET] = ACTIONS(603),
        [anon_sym_LT_LT] = ACTIONS(593),
        [anon_sym_GT_GT] = ACTIONS(593),
        [anon_sym_and] = ACTIONS(601),
        [anon_sym_or] = ACTIONS(599),
        [anon_sym_LBRACK] = ACTIONS(281),
        [anon_sym_RBRACK] = ACTIONS(605),
        [sym_comment] = ACTIONS(83),
    },
    [240] = {
        [sym__expression] = STATE(275),
        [sym_binary_operator] = STATE(45),
        [sym_unary_operator] = STATE(45),
        [sym_subscript] = STATE(45),
        [sym_call] = STATE(45),
        [sym_list] = STATE(45),
        [sym_list_comprehension] = STATE(45),
        [sym_dictionary] = STATE(45),
        [sym_dictionary_comprehension] = STATE(45),
        [sym_set] = STATE(45),
        [sym_set_comprehension] = STATE(45),
        [anon_sym_not] = ACTIONS(253),
        [anon_sym_LBRACK] = ACTIONS(145),
        [anon_sym_RBRACK] = ACTIONS(607),
        [anon_sym_LBRACE] = ACTIONS(147),
        [sym_string] = ACTIONS(149),
        [sym_number] = ACTIONS(151),
        [sym_identifier] = ACTIONS(153),
        [sym_comment] = ACTIONS(83),
    },
    [241] = {
        [sym__expression] = STATE(258),
        [sym_binary_operator] = STATE(45),
        [sym_unary_operator] = STATE(45),
        [sym_subscript] = STATE(45),
        [sym_call] = STATE(45),
        [sym_list] = STATE(45),
        [sym_list_comprehension] = STATE(45),
        [sym_dictionary] = STATE(45),
        [sym_dictionary_comprehension] = STATE(45),
        [sym_set] = STATE(45),
        [sym_set_comprehension] = STATE(45),
        [anon_sym_not] = ACTIONS(165),
        [anon_sym_LBRACK] = ACTIONS(145),
        [anon_sym_LBRACE] = ACTIONS(147),
        [sym_string] = ACTIONS(149),
        [sym_number] = ACTIONS(151),
        [sym_identifier] = ACTIONS(153),
        [sym_comment] = ACTIONS(83),
    },
    [242] = {
        [sym_expression_list] = STATE(259),
        [sym__expression] = STATE(166),
        [sym_binary_operator] = STATE(45),
        [sym_unary_operator] = STATE(45),
        [sym_subscript] = STATE(45),
        [sym_call] = STATE(45),
        [sym_list] = STATE(45),
        [sym_list_comprehension] = STATE(45),
        [sym_dictionary] = STATE(45),
        [sym_dictionary_comprehension] = STATE(45),
        [sym_set] = STATE(45),
        [sym_set_comprehension] = STATE(45),
        [anon_sym_not] = ACTIONS(155),
        [anon_sym_LBRACK] = ACTIONS(145),
        [anon_sym_LBRACE] = ACTIONS(147),
        [sym_string] = ACTIONS(149),
        [sym_number] = ACTIONS(151),
        [sym_identifier] = ACTIONS(153),
        [sym_comment] = ACTIONS(83),
    },
    [243] = {
        [sym__expression] = STATE(256),
        [sym_binary_operator] = STATE(45),
        [sym_unary_operator] = STATE(45),
        [sym_subscript] = STATE(45),
        [sym_call] = STATE(45),
        [sym_list] = STATE(45),
        [sym_list_comprehension] = STATE(45),
        [sym_dictionary] = STATE(45),
        [sym_dictionary_comprehension] = STATE(45),
        [sym_set] = STATE(45),
        [sym_set_comprehension] = STATE(45),
        [anon_sym_not] = ACTIONS(165),
        [anon_sym_LBRACK] = ACTIONS(145),
        [anon_sym_LBRACE] = ACTIONS(147),
        [sym_string] = ACTIONS(149),
        [sym_number] = ACTIONS(151),
        [sym_identifier] = ACTIONS(153),
        [sym_comment] = ACTIONS(83),
    },
    [244] = {
        [sym__expression] = STATE(77),
        [sym_binary_operator] = STATE(45),
        [sym_unary_operator] = STATE(45),
        [sym_subscript] = STATE(45),
        [sym_call] = STATE(45),
        [sym_list] = STATE(45),
        [sym_list_comprehension] = STATE(45),
        [sym_dictionary] = STATE(45),
        [sym_dictionary_comprehension] = STATE(45),
        [sym_set] = STATE(45),
        [sym_set_comprehension] = STATE(45),
        [anon_sym_not] = ACTIONS(165),
        [anon_sym_LBRACK] = ACTIONS(145),
        [anon_sym_LBRACE] = ACTIONS(147),
        [sym_string] = ACTIONS(149),
        [sym_number] = ACTIONS(151),
        [sym_identifier] = ACTIONS(153),
        [sym_comment] = ACTIONS(83),
    },
    [245] = {
        [sym__expression] = STATE(254),
        [sym_binary_operator] = STATE(45),
        [sym_unary_operator] = STATE(45),
        [sym_subscript] = STATE(45),
        [sym_call] = STATE(45),
        [sym_list] = STATE(45),
        [sym_list_comprehension] = STATE(45),
        [sym_dictionary] = STATE(45),
        [sym_dictionary_comprehension] = STATE(45),
        [sym_set] = STATE(45),
        [sym_set_comprehension] = STATE(45),
        [anon_sym_not] = ACTIONS(165),
        [anon_sym_LBRACK] = ACTIONS(145),
        [anon_sym_LBRACE] = ACTIONS(147),
        [sym_string] = ACTIONS(149),
        [sym_number] = ACTIONS(151),
        [sym_identifier] = ACTIONS(153),
        [sym_comment] = ACTIONS(83),
    },
    [246] = {
        [sym__expression] = STATE(255),
        [sym_binary_operator] = STATE(45),
        [sym_unary_operator] = STATE(45),
        [sym_subscript] = STATE(45),
        [sym_call] = STATE(45),
        [sym_list] = STATE(45),
        [sym_list_comprehension] = STATE(45),
        [sym_dictionary] = STATE(45),
        [sym_dictionary_comprehension] = STATE(45),
        [sym_set] = STATE(45),
        [sym_set_comprehension] = STATE(45),
        [anon_sym_not] = ACTIONS(165),
        [anon_sym_LBRACK] = ACTIONS(145),
        [anon_sym_LBRACE] = ACTIONS(147),
        [sym_string] = ACTIONS(149),
        [sym_number] = ACTIONS(151),
        [sym_identifier] = ACTIONS(153),
        [sym_comment] = ACTIONS(83),
    },
    [247] = {
        [sym__expression] = STATE(257),
        [sym_binary_operator] = STATE(45),
        [sym_unary_operator] = STATE(45),
        [sym_subscript] = STATE(45),
        [sym_call] = STATE(45),
        [sym_list] = STATE(45),
        [sym_list_comprehension] = STATE(45),
        [sym_dictionary] = STATE(45),
        [sym_dictionary_comprehension] = STATE(45),
        [sym_set] = STATE(45),
        [sym_set_comprehension] = STATE(45),
        [anon_sym_not] = ACTIONS(165),
        [anon_sym_LBRACK] = ACTIONS(145),
        [anon_sym_LBRACE] = ACTIONS(147),
        [sym_string] = ACTIONS(149),
        [sym_number] = ACTIONS(151),
        [sym_identifier] = ACTIONS(153),
        [sym_comment] = ACTIONS(83),
    },
    [248] = {
        [anon_sym_LPAREN] = ACTIONS(609),
        [anon_sym_RPAREN] = ACTIONS(609),
        [anon_sym_COMMA] = ACTIONS(609),
        [anon_sym_as] = ACTIONS(609),
        [anon_sym_STAR] = ACTIONS(611),
        [anon_sym_COLON] = ACTIONS(609),
        [anon_sym_for] = ACTIONS(609),
        [anon_sym_in] = ACTIONS(609),
        [anon_sym_PLUS] = ACTIONS(609),
        [anon_sym_DASH] = ACTIONS(609),
        [anon_sym_SLASH] = ACTIONS(609),
        [anon_sym_STAR_STAR] = ACTIONS(609),
        [anon_sym_PIPE] = ACTIONS(609),
        [anon_sym_AMP] = ACTIONS(609),
        [anon_sym_CARET] = ACTIONS(609),
        [anon_sym_LT_LT] = ACTIONS(609),
        [anon_sym_GT_GT] = ACTIONS(609),
        [anon_sym_and] = ACTIONS(609),
        [anon_sym_or] = ACTIONS(609),
        [anon_sym_LBRACK] = ACTIONS(609),
        [anon_sym_RBRACK] = ACTIONS(609),
        [anon_sym_RBRACE] = ACTIONS(609),
        [sym_comment] = ACTIONS(83),
    },
    [249] = {
        [anon_sym_COMMA] = ACTIONS(613),
        [anon_sym_RBRACK] = ACTIONS(607),
        [sym_comment] = ACTIONS(83),
    },
    [250] = {
        [sym__expression] = STATE(253),
        [sym_binary_operator] = STATE(45),
        [sym_unary_operator] = STATE(45),
        [sym_subscript] = STATE(45),
        [sym_call] = STATE(45),
        [sym_list] = STATE(45),
        [sym_list_comprehension] = STATE(45),
        [sym_dictionary] = STATE(45),
        [sym_dictionary_comprehension] = STATE(45),
        [sym_set] = STATE(45),
        [sym_set_comprehension] = STATE(45),
        [anon_sym_not] = ACTIONS(253),
        [anon_sym_LBRACK] = ACTIONS(145),
        [anon_sym_RBRACK] = ACTIONS(615),
        [anon_sym_LBRACE] = ACTIONS(147),
        [sym_string] = ACTIONS(149),
        [sym_number] = ACTIONS(151),
        [sym_identifier] = ACTIONS(153),
        [sym_comment] = ACTIONS(83),
    },
    [251] = {
        [anon_sym_LPAREN] = ACTIONS(617),
        [anon_sym_RPAREN] = ACTIONS(617),
        [anon_sym_COMMA] = ACTIONS(617),
        [anon_sym_as] = ACTIONS(617),
        [anon_sym_STAR] = ACTIONS(619),
        [anon_sym_COLON] = ACTIONS(617),
        [anon_sym_for] = ACTIONS(617),
        [anon_sym_in] = ACTIONS(617),
        [anon_sym_PLUS] = ACTIONS(617),
        [anon_sym_DASH] = ACTIONS(617),
        [anon_sym_SLASH] = ACTIONS(617),
        [anon_sym_STAR_STAR] = ACTIONS(617),
        [anon_sym_PIPE] = ACTIONS(617),
        [anon_sym_AMP] = ACTIONS(617),
        [anon_sym_CARET] = ACTIONS(617),
        [anon_sym_LT_LT] = ACTIONS(617),
        [anon_sym_GT_GT] = ACTIONS(617),
        [anon_sym_and] = ACTIONS(617),
        [anon_sym_or] = ACTIONS(617),
        [anon_sym_LBRACK] = ACTIONS(617),
        [anon_sym_RBRACK] = ACTIONS(617),
        [anon_sym_RBRACE] = ACTIONS(617),
        [sym_comment] = ACTIONS(83),
    },
    [252] = {
        [anon_sym_LPAREN] = ACTIONS(621),
        [anon_sym_RPAREN] = ACTIONS(621),
        [anon_sym_COMMA] = ACTIONS(621),
        [anon_sym_as] = ACTIONS(621),
        [anon_sym_STAR] = ACTIONS(623),
        [anon_sym_COLON] = ACTIONS(621),
        [anon_sym_for] = ACTIONS(621),
        [anon_sym_in] = ACTIONS(621),
        [anon_sym_PLUS] = ACTIONS(621),
        [anon_sym_DASH] = ACTIONS(621),
        [anon_sym_SLASH] = ACTIONS(621),
        [anon_sym_STAR_STAR] = ACTIONS(621),
        [anon_sym_PIPE] = ACTIONS(621),
        [anon_sym_AMP] = ACTIONS(621),
        [anon_sym_CARET] = ACTIONS(621),
        [anon_sym_LT_LT] = ACTIONS(621),
        [anon_sym_GT_GT] = ACTIONS(621),
        [anon_sym_and] = ACTIONS(621),
        [anon_sym_or] = ACTIONS(621),
        [anon_sym_LBRACK] = ACTIONS(621),
        [anon_sym_RBRACK] = ACTIONS(621),
        [anon_sym_RBRACE] = ACTIONS(621),
        [sym_comment] = ACTIONS(83),
    },
    [253] = {
        [anon_sym_LPAREN] = ACTIONS(265),
        [anon_sym_COMMA] = ACTIONS(513),
        [anon_sym_STAR] = ACTIONS(267),
        [anon_sym_PLUS] = ACTIONS(269),
        [anon_sym_DASH] = ACTIONS(269),
        [anon_sym_SLASH] = ACTIONS(271),
        [anon_sym_STAR_STAR] = ACTIONS(273),
        [anon_sym_PIPE] = ACTIONS(275),
        [anon_sym_AMP] = ACTIONS(277),
        [anon_sym_CARET] = ACTIONS(279),
        [anon_sym_LT_LT] = ACTIONS(269),
        [anon_sym_GT_GT] = ACTIONS(269),
        [anon_sym_and] = ACTIONS(277),
        [anon_sym_or] = ACTIONS(275),
        [anon_sym_LBRACK] = ACTIONS(281),
        [anon_sym_RBRACK] = ACTIONS(513),
        [sym_comment] = ACTIONS(83),
    },
    [254] = {
        [anon_sym_LPAREN] = ACTIONS(265),
        [anon_sym_COMMA] = ACTIONS(321),
        [anon_sym_STAR] = ACTIONS(589),
        [anon_sym_for] = ACTIONS(321),
        [anon_sym_PLUS] = ACTIONS(593),
        [anon_sym_DASH] = ACTIONS(593),
        [anon_sym_SLASH] = ACTIONS(595),
        [anon_sym_STAR_STAR] = ACTIONS(597),
        [anon_sym_PIPE] = ACTIONS(321),
        [anon_sym_AMP] = ACTIONS(601),
        [anon_sym_CARET] = ACTIONS(603),
        [anon_sym_LT_LT] = ACTIONS(593),
        [anon_sym_GT_GT] = ACTIONS(593),
        [anon_sym_and] = ACTIONS(601),
        [anon_sym_or] = ACTIONS(321),
        [anon_sym_LBRACK] = ACTIONS(321),
        [anon_sym_RBRACK] = ACTIONS(321),
        [sym_comment] = ACTIONS(83),
    },
    [255] = {
        [anon_sym_LPAREN] = ACTIONS(265),
        [anon_sym_COMMA] = ACTIONS(321),
        [anon_sym_STAR] = ACTIONS(589),
        [anon_sym_for] = ACTIONS(321),
        [anon_sym_PLUS] = ACTIONS(593),
        [anon_sym_DASH] = ACTIONS(593),
        [anon_sym_SLASH] = ACTIONS(595),
        [anon_sym_STAR_STAR] = ACTIONS(597),
        [anon_sym_PIPE] = ACTIONS(321),
        [anon_sym_AMP] = ACTIONS(321),
        [anon_sym_CARET] = ACTIONS(603),
        [anon_sym_LT_LT] = ACTIONS(593),
        [anon_sym_GT_GT] = ACTIONS(593),
        [anon_sym_and] = ACTIONS(321),
        [anon_sym_or] = ACTIONS(321),
        [anon_sym_LBRACK] = ACTIONS(321),
        [anon_sym_RBRACK] = ACTIONS(321),
        [sym_comment] = ACTIONS(83),
    },
    [256] = {
        [anon_sym_LPAREN] = ACTIONS(265),
        [anon_sym_COMMA] = ACTIONS(321),
        [anon_sym_STAR] = ACTIONS(589),
        [anon_sym_for] = ACTIONS(321),
        [anon_sym_PLUS] = ACTIONS(321),
        [anon_sym_DASH] = ACTIONS(321),
        [anon_sym_SLASH] = ACTIONS(595),
        [anon_sym_STAR_STAR] = ACTIONS(597),
        [anon_sym_PIPE] = ACTIONS(321),
        [anon_sym_AMP] = ACTIONS(321),
        [anon_sym_CARET] = ACTIONS(321),
        [anon_sym_LT_LT] = ACTIONS(321),
        [anon_sym_GT_GT] = ACTIONS(321),
        [anon_sym_and] = ACTIONS(321),
        [anon_sym_or] = ACTIONS(321),
        [anon_sym_LBRACK] = ACTIONS(321),
        [anon_sym_RBRACK] = ACTIONS(321),
        [sym_comment] = ACTIONS(83),
    },
    [257] = {
        [anon_sym_LPAREN] = ACTIONS(265),
        [anon_sym_COMMA] = ACTIONS(321),
        [anon_sym_STAR] = ACTIONS(589),
        [anon_sym_for] = ACTIONS(321),
        [anon_sym_PLUS] = ACTIONS(593),
        [anon_sym_DASH] = ACTIONS(593),
        [anon_sym_SLASH] = ACTIONS(595),
        [anon_sym_STAR_STAR] = ACTIONS(597),
        [anon_sym_PIPE] = ACTIONS(321),
        [anon_sym_AMP] = ACTIONS(321),
        [anon_sym_CARET] = ACTIONS(321),
        [anon_sym_LT_LT] = ACTIONS(593),
        [anon_sym_GT_GT] = ACTIONS(593),
        [anon_sym_and] = ACTIONS(321),
        [anon_sym_or] = ACTIONS(321),
        [anon_sym_LBRACK] = ACTIONS(321),
        [anon_sym_RBRACK] = ACTIONS(321),
        [sym_comment] = ACTIONS(83),
    },
    [258] = {
        [anon_sym_LPAREN] = ACTIONS(265),
        [anon_sym_COMMA] = ACTIONS(321),
        [anon_sym_STAR] = ACTIONS(323),
        [anon_sym_for] = ACTIONS(321),
        [anon_sym_PLUS] = ACTIONS(321),
        [anon_sym_DASH] = ACTIONS(321),
        [anon_sym_SLASH] = ACTIONS(321),
        [anon_sym_STAR_STAR] = ACTIONS(597),
        [anon_sym_PIPE] = ACTIONS(321),
        [anon_sym_AMP] = ACTIONS(321),
        [anon_sym_CARET] = ACTIONS(321),
        [anon_sym_LT_LT] = ACTIONS(321),
        [anon_sym_GT_GT] = ACTIONS(321),
        [anon_sym_and] = ACTIONS(321),
        [anon_sym_or] = ACTIONS(321),
        [anon_sym_LBRACK] = ACTIONS(321),
        [anon_sym_RBRACK] = ACTIONS(321),
        [sym_comment] = ACTIONS(83),
    },
    [259] = {
        [anon_sym_in] = ACTIONS(625),
        [sym_comment] = ACTIONS(83),
    },
    [260] = {
        [sym__expression] = STATE(262),
        [sym_binary_operator] = STATE(45),
        [sym_unary_operator] = STATE(45),
        [sym_subscript] = STATE(45),
        [sym_call] = STATE(45),
        [sym_list] = STATE(45),
        [sym_list_comprehension] = STATE(45),
        [sym_dictionary] = STATE(45),
        [sym_dictionary_comprehension] = STATE(45),
        [sym_set] = STATE(45),
        [sym_set_comprehension] = STATE(45),
        [anon_sym_not] = ACTIONS(627),
        [anon_sym_LBRACK] = ACTIONS(145),
        [anon_sym_LBRACE] = ACTIONS(147),
        [sym_string] = ACTIONS(149),
        [sym_number] = ACTIONS(151),
        [sym_identifier] = ACTIONS(153),
        [sym_comment] = ACTIONS(83),
    },
    [261] = {
        [sym__expression] = STATE(276),
        [sym_binary_operator] = STATE(45),
        [sym_unary_operator] = STATE(45),
        [sym_subscript] = STATE(45),
        [sym_call] = STATE(45),
        [sym_list] = STATE(45),
        [sym_list_comprehension] = STATE(45),
        [sym_dictionary] = STATE(45),
        [sym_dictionary_comprehension] = STATE(45),
        [sym_set] = STATE(45),
        [sym_set_comprehension] = STATE(45),
        [anon_sym_not] = ACTIONS(627),
        [anon_sym_LBRACK] = ACTIONS(145),
        [anon_sym_LBRACE] = ACTIONS(147),
        [sym_string] = ACTIONS(149),
        [sym_number] = ACTIONS(151),
        [sym_identifier] = ACTIONS(153),
        [sym_comment] = ACTIONS(83),
    },
    [262] = {
        [anon_sym_LPAREN] = ACTIONS(265),
        [anon_sym_STAR] = ACTIONS(629),
        [anon_sym_PLUS] = ACTIONS(631),
        [anon_sym_DASH] = ACTIONS(631),
        [anon_sym_SLASH] = ACTIONS(633),
        [anon_sym_STAR_STAR] = ACTIONS(635),
        [anon_sym_PIPE] = ACTIONS(637),
        [anon_sym_AMP] = ACTIONS(639),
        [anon_sym_CARET] = ACTIONS(641),
        [anon_sym_LT_LT] = ACTIONS(631),
        [anon_sym_GT_GT] = ACTIONS(631),
        [anon_sym_and] = ACTIONS(639),
        [anon_sym_or] = ACTIONS(637),
        [anon_sym_LBRACK] = ACTIONS(281),
        [anon_sym_RBRACK] = ACTIONS(643),
        [sym_comment] = ACTIONS(83),
    },
    [263] = {
        [sym__expression] = STATE(274),
        [sym_binary_operator] = STATE(45),
        [sym_unary_operator] = STATE(45),
        [sym_subscript] = STATE(45),
        [sym_call] = STATE(45),
        [sym_list] = STATE(45),
        [sym_list_comprehension] = STATE(45),
        [sym_dictionary] = STATE(45),
        [sym_dictionary_comprehension] = STATE(45),
        [sym_set] = STATE(45),
        [sym_set_comprehension] = STATE(45),
        [anon_sym_not] = ACTIONS(627),
        [anon_sym_LBRACK] = ACTIONS(145),
        [anon_sym_LBRACE] = ACTIONS(147),
        [sym_string] = ACTIONS(149),
        [sym_number] = ACTIONS(151),
        [sym_identifier] = ACTIONS(153),
        [sym_comment] = ACTIONS(83),
    },
    [264] = {
        [sym__expression] = STATE(272),
        [sym_binary_operator] = STATE(45),
        [sym_unary_operator] = STATE(45),
        [sym_subscript] = STATE(45),
        [sym_call] = STATE(45),
        [sym_list] = STATE(45),
        [sym_list_comprehension] = STATE(45),
        [sym_dictionary] = STATE(45),
        [sym_dictionary_comprehension] = STATE(45),
        [sym_set] = STATE(45),
        [sym_set_comprehension] = STATE(45),
        [anon_sym_not] = ACTIONS(627),
        [anon_sym_LBRACK] = ACTIONS(145),
        [anon_sym_LBRACE] = ACTIONS(147),
        [sym_string] = ACTIONS(149),
        [sym_number] = ACTIONS(151),
        [sym_identifier] = ACTIONS(153),
        [sym_comment] = ACTIONS(83),
    },
    [265] = {
        [sym__expression] = STATE(77),
        [sym_binary_operator] = STATE(45),
        [sym_unary_operator] = STATE(45),
        [sym_subscript] = STATE(45),
        [sym_call] = STATE(45),
        [sym_list] = STATE(45),
        [sym_list_comprehension] = STATE(45),
        [sym_dictionary] = STATE(45),
        [sym_dictionary_comprehension] = STATE(45),
        [sym_set] = STATE(45),
        [sym_set_comprehension] = STATE(45),
        [anon_sym_not] = ACTIONS(627),
        [anon_sym_LBRACK] = ACTIONS(145),
        [anon_sym_LBRACE] = ACTIONS(147),
        [sym_string] = ACTIONS(149),
        [sym_number] = ACTIONS(151),
        [sym_identifier] = ACTIONS(153),
        [sym_comment] = ACTIONS(83),
    },
    [266] = {
        [sym__expression] = STATE(270),
        [sym_binary_operator] = STATE(45),
        [sym_unary_operator] = STATE(45),
        [sym_subscript] = STATE(45),
        [sym_call] = STATE(45),
        [sym_list] = STATE(45),
        [sym_list_comprehension] = STATE(45),
        [sym_dictionary] = STATE(45),
        [sym_dictionary_comprehension] = STATE(45),
        [sym_set] = STATE(45),
        [sym_set_comprehension] = STATE(45),
        [anon_sym_not] = ACTIONS(627),
        [anon_sym_LBRACK] = ACTIONS(145),
        [anon_sym_LBRACE] = ACTIONS(147),
        [sym_string] = ACTIONS(149),
        [sym_number] = ACTIONS(151),
        [sym_identifier] = ACTIONS(153),
        [sym_comment] = ACTIONS(83),
    },
    [267] = {
        [sym__expression] = STATE(271),
        [sym_binary_operator] = STATE(45),
        [sym_unary_operator] = STATE(45),
        [sym_subscript] = STATE(45),
        [sym_call] = STATE(45),
        [sym_list] = STATE(45),
        [sym_list_comprehension] = STATE(45),
        [sym_dictionary] = STATE(45),
        [sym_dictionary_comprehension] = STATE(45),
        [sym_set] = STATE(45),
        [sym_set_comprehension] = STATE(45),
        [anon_sym_not] = ACTIONS(627),
        [anon_sym_LBRACK] = ACTIONS(145),
        [anon_sym_LBRACE] = ACTIONS(147),
        [sym_string] = ACTIONS(149),
        [sym_number] = ACTIONS(151),
        [sym_identifier] = ACTIONS(153),
        [sym_comment] = ACTIONS(83),
    },
    [268] = {
        [sym__expression] = STATE(273),
        [sym_binary_operator] = STATE(45),
        [sym_unary_operator] = STATE(45),
        [sym_subscript] = STATE(45),
        [sym_call] = STATE(45),
        [sym_list] = STATE(45),
        [sym_list_comprehension] = STATE(45),
        [sym_dictionary] = STATE(45),
        [sym_dictionary_comprehension] = STATE(45),
        [sym_set] = STATE(45),
        [sym_set_comprehension] = STATE(45),
        [anon_sym_not] = ACTIONS(627),
        [anon_sym_LBRACK] = ACTIONS(145),
        [anon_sym_LBRACE] = ACTIONS(147),
        [sym_string] = ACTIONS(149),
        [sym_number] = ACTIONS(151),
        [sym_identifier] = ACTIONS(153),
        [sym_comment] = ACTIONS(83),
    },
    [269] = {
        [anon_sym_LPAREN] = ACTIONS(645),
        [anon_sym_RPAREN] = ACTIONS(645),
        [anon_sym_COMMA] = ACTIONS(645),
        [anon_sym_as] = ACTIONS(645),
        [anon_sym_STAR] = ACTIONS(647),
        [anon_sym_COLON] = ACTIONS(645),
        [anon_sym_for] = ACTIONS(645),
        [anon_sym_in] = ACTIONS(645),
        [anon_sym_PLUS] = ACTIONS(645),
        [anon_sym_DASH] = ACTIONS(645),
        [anon_sym_SLASH] = ACTIONS(645),
        [anon_sym_STAR_STAR] = ACTIONS(645),
        [anon_sym_PIPE] = ACTIONS(645),
        [anon_sym_AMP] = ACTIONS(645),
        [anon_sym_CARET] = ACTIONS(645),
        [anon_sym_LT_LT] = ACTIONS(645),
        [anon_sym_GT_GT] = ACTIONS(645),
        [anon_sym_and] = ACTIONS(645),
        [anon_sym_or] = ACTIONS(645),
        [anon_sym_LBRACK] = ACTIONS(645),
        [anon_sym_RBRACK] = ACTIONS(645),
        [anon_sym_RBRACE] = ACTIONS(645),
        [sym_comment] = ACTIONS(83),
    },
    [270] = {
        [anon_sym_LPAREN] = ACTIONS(265),
        [anon_sym_STAR] = ACTIONS(629),
        [anon_sym_PLUS] = ACTIONS(631),
        [anon_sym_DASH] = ACTIONS(631),
        [anon_sym_SLASH] = ACTIONS(633),
        [anon_sym_STAR_STAR] = ACTIONS(635),
        [anon_sym_PIPE] = ACTIONS(321),
        [anon_sym_AMP] = ACTIONS(639),
        [anon_sym_CARET] = ACTIONS(641),
        [anon_sym_LT_LT] = ACTIONS(631),
        [anon_sym_GT_GT] = ACTIONS(631),
        [anon_sym_and] = ACTIONS(639),
        [anon_sym_or] = ACTIONS(321),
        [anon_sym_LBRACK] = ACTIONS(321),
        [anon_sym_RBRACK] = ACTIONS(321),
        [sym_comment] = ACTIONS(83),
    },
    [271] = {
        [anon_sym_LPAREN] = ACTIONS(265),
        [anon_sym_STAR] = ACTIONS(629),
        [anon_sym_PLUS] = ACTIONS(631),
        [anon_sym_DASH] = ACTIONS(631),
        [anon_sym_SLASH] = ACTIONS(633),
        [anon_sym_STAR_STAR] = ACTIONS(635),
        [anon_sym_PIPE] = ACTIONS(321),
        [anon_sym_AMP] = ACTIONS(321),
        [anon_sym_CARET] = ACTIONS(641),
        [anon_sym_LT_LT] = ACTIONS(631),
        [anon_sym_GT_GT] = ACTIONS(631),
        [anon_sym_and] = ACTIONS(321),
        [anon_sym_or] = ACTIONS(321),
        [anon_sym_LBRACK] = ACTIONS(321),
        [anon_sym_RBRACK] = ACTIONS(321),
        [sym_comment] = ACTIONS(83),
    },
    [272] = {
        [anon_sym_LPAREN] = ACTIONS(265),
        [anon_sym_STAR] = ACTIONS(629),
        [anon_sym_PLUS] = ACTIONS(321),
        [anon_sym_DASH] = ACTIONS(321),
        [anon_sym_SLASH] = ACTIONS(633),
        [anon_sym_STAR_STAR] = ACTIONS(635),
        [anon_sym_PIPE] = ACTIONS(321),
        [anon_sym_AMP] = ACTIONS(321),
        [anon_sym_CARET] = ACTIONS(321),
        [anon_sym_LT_LT] = ACTIONS(321),
        [anon_sym_GT_GT] = ACTIONS(321),
        [anon_sym_and] = ACTIONS(321),
        [anon_sym_or] = ACTIONS(321),
        [anon_sym_LBRACK] = ACTIONS(321),
        [anon_sym_RBRACK] = ACTIONS(321),
        [sym_comment] = ACTIONS(83),
    },
    [273] = {
        [anon_sym_LPAREN] = ACTIONS(265),
        [anon_sym_STAR] = ACTIONS(629),
        [anon_sym_PLUS] = ACTIONS(631),
        [anon_sym_DASH] = ACTIONS(631),
        [anon_sym_SLASH] = ACTIONS(633),
        [anon_sym_STAR_STAR] = ACTIONS(635),
        [anon_sym_PIPE] = ACTIONS(321),
        [anon_sym_AMP] = ACTIONS(321),
        [anon_sym_CARET] = ACTIONS(321),
        [anon_sym_LT_LT] = ACTIONS(631),
        [anon_sym_GT_GT] = ACTIONS(631),
        [anon_sym_and] = ACTIONS(321),
        [anon_sym_or] = ACTIONS(321),
        [anon_sym_LBRACK] = ACTIONS(321),
        [anon_sym_RBRACK] = ACTIONS(321),
        [sym_comment] = ACTIONS(83),
    },
    [274] = {
        [anon_sym_LPAREN] = ACTIONS(265),
        [anon_sym_STAR] = ACTIONS(323),
        [anon_sym_PLUS] = ACTIONS(321),
        [anon_sym_DASH] = ACTIONS(321),
        [anon_sym_SLASH] = ACTIONS(321),
        [anon_sym_STAR_STAR] = ACTIONS(635),
        [anon_sym_PIPE] = ACTIONS(321),
        [anon_sym_AMP] = ACTIONS(321),
        [anon_sym_CARET] = ACTIONS(321),
        [anon_sym_LT_LT] = ACTIONS(321),
        [anon_sym_GT_GT] = ACTIONS(321),
        [anon_sym_and] = ACTIONS(321),
        [anon_sym_or] = ACTIONS(321),
        [anon_sym_LBRACK] = ACTIONS(321),
        [anon_sym_RBRACK] = ACTIONS(321),
        [sym_comment] = ACTIONS(83),
    },
    [275] = {
        [anon_sym_LPAREN] = ACTIONS(265),
        [anon_sym_COMMA] = ACTIONS(515),
        [anon_sym_STAR] = ACTIONS(267),
        [anon_sym_PLUS] = ACTIONS(269),
        [anon_sym_DASH] = ACTIONS(269),
        [anon_sym_SLASH] = ACTIONS(271),
        [anon_sym_STAR_STAR] = ACTIONS(273),
        [anon_sym_PIPE] = ACTIONS(275),
        [anon_sym_AMP] = ACTIONS(277),
        [anon_sym_CARET] = ACTIONS(279),
        [anon_sym_LT_LT] = ACTIONS(269),
        [anon_sym_GT_GT] = ACTIONS(269),
        [anon_sym_and] = ACTIONS(277),
        [anon_sym_or] = ACTIONS(275),
        [anon_sym_LBRACK] = ACTIONS(281),
        [anon_sym_RBRACK] = ACTIONS(515),
        [sym_comment] = ACTIONS(83),
    },
    [276] = {
        [anon_sym_LPAREN] = ACTIONS(265),
        [anon_sym_RPAREN] = ACTIONS(649),
        [anon_sym_COMMA] = ACTIONS(649),
        [anon_sym_as] = ACTIONS(649),
        [anon_sym_STAR] = ACTIONS(651),
        [anon_sym_COLON] = ACTIONS(649),
        [anon_sym_for] = ACTIONS(649),
        [anon_sym_in] = ACTIONS(649),
        [anon_sym_PLUS] = ACTIONS(649),
        [anon_sym_DASH] = ACTIONS(649),
        [anon_sym_SLASH] = ACTIONS(649),
        [anon_sym_STAR_STAR] = ACTIONS(649),
        [anon_sym_PIPE] = ACTIONS(649),
        [anon_sym_AMP] = ACTIONS(649),
        [anon_sym_CARET] = ACTIONS(649),
        [anon_sym_LT_LT] = ACTIONS(649),
        [anon_sym_GT_GT] = ACTIONS(649),
        [anon_sym_and] = ACTIONS(649),
        [anon_sym_or] = ACTIONS(649),
        [anon_sym_LBRACK] = ACTIONS(649),
        [anon_sym_RBRACK] = ACTIONS(649),
        [anon_sym_RBRACE] = ACTIONS(649),
        [sym_comment] = ACTIONS(83),
    },
    [277] = {
        [sym__expression] = STATE(276),
        [sym_binary_operator] = STATE(45),
        [sym_unary_operator] = STATE(45),
        [sym_subscript] = STATE(45),
        [sym_call] = STATE(45),
        [sym_list] = STATE(45),
        [sym_list_comprehension] = STATE(45),
        [sym_dictionary] = STATE(45),
        [sym_dictionary_comprehension] = STATE(45),
        [sym_set] = STATE(45),
        [sym_set_comprehension] = STATE(45),
        [anon_sym_not] = ACTIONS(325),
        [anon_sym_LBRACK] = ACTIONS(145),
        [anon_sym_LBRACE] = ACTIONS(147),
        [sym_string] = ACTIONS(149),
        [sym_number] = ACTIONS(151),
        [sym_identifier] = ACTIONS(153),
        [sym_comment] = ACTIONS(83),
    },
    [278] = {
        [anon_sym_LPAREN] = ACTIONS(265),
        [anon_sym_RPAREN] = ACTIONS(653),
        [anon_sym_STAR] = ACTIONS(655),
        [anon_sym_PLUS] = ACTIONS(657),
        [anon_sym_DASH] = ACTIONS(657),
        [anon_sym_SLASH] = ACTIONS(659),
        [anon_sym_STAR_STAR] = ACTIONS(661),
        [anon_sym_PIPE] = ACTIONS(663),
        [anon_sym_AMP] = ACTIONS(665),
        [anon_sym_CARET] = ACTIONS(667),
        [anon_sym_LT_LT] = ACTIONS(657),
        [anon_sym_GT_GT] = ACTIONS(657),
        [anon_sym_and] = ACTIONS(665),
        [anon_sym_or] = ACTIONS(663),
        [anon_sym_LBRACK] = ACTIONS(281),
        [sym_comment] = ACTIONS(83),
    },
    [279] = {
        [sym__expression] = STATE(289),
        [sym_binary_operator] = STATE(45),
        [sym_unary_operator] = STATE(45),
        [sym_subscript] = STATE(45),
        [sym_call] = STATE(45),
        [sym_list] = STATE(45),
        [sym_list_comprehension] = STATE(45),
        [sym_dictionary] = STATE(45),
        [sym_dictionary_comprehension] = STATE(45),
        [sym_set] = STATE(45),
        [sym_set_comprehension] = STATE(45),
        [anon_sym_not] = ACTIONS(325),
        [anon_sym_LBRACK] = ACTIONS(145),
        [anon_sym_LBRACE] = ACTIONS(147),
        [sym_string] = ACTIONS(149),
        [sym_number] = ACTIONS(151),
        [sym_identifier] = ACTIONS(153),
        [sym_comment] = ACTIONS(83),
    },
    [280] = {
        [sym__expression] = STATE(287),
        [sym_binary_operator] = STATE(45),
        [sym_unary_operator] = STATE(45),
        [sym_subscript] = STATE(45),
        [sym_call] = STATE(45),
        [sym_list] = STATE(45),
        [sym_list_comprehension] = STATE(45),
        [sym_dictionary] = STATE(45),
        [sym_dictionary_comprehension] = STATE(45),
        [sym_set] = STATE(45),
        [sym_set_comprehension] = STATE(45),
        [anon_sym_not] = ACTIONS(325),
        [anon_sym_LBRACK] = ACTIONS(145),
        [anon_sym_LBRACE] = ACTIONS(147),
        [sym_string] = ACTIONS(149),
        [sym_number] = ACTIONS(151),
        [sym_identifier] = ACTIONS(153),
        [sym_comment] = ACTIONS(83),
    },
    [281] = {
        [sym__expression] = STATE(77),
        [sym_binary_operator] = STATE(45),
        [sym_unary_operator] = STATE(45),
        [sym_subscript] = STATE(45),
        [sym_call] = STATE(45),
        [sym_list] = STATE(45),
        [sym_list_comprehension] = STATE(45),
        [sym_dictionary] = STATE(45),
        [sym_dictionary_comprehension] = STATE(45),
        [sym_set] = STATE(45),
        [sym_set_comprehension] = STATE(45),
        [anon_sym_not] = ACTIONS(325),
        [anon_sym_LBRACK] = ACTIONS(145),
        [anon_sym_LBRACE] = ACTIONS(147),
        [sym_string] = ACTIONS(149),
        [sym_number] = ACTIONS(151),
        [sym_identifier] = ACTIONS(153),
        [sym_comment] = ACTIONS(83),
    },
    [282] = {
        [sym__expression] = STATE(285),
        [sym_binary_operator] = STATE(45),
        [sym_unary_operator] = STATE(45),
        [sym_subscript] = STATE(45),
        [sym_call] = STATE(45),
        [sym_list] = STATE(45),
        [sym_list_comprehension] = STATE(45),
        [sym_dictionary] = STATE(45),
        [sym_dictionary_comprehension] = STATE(45),
        [sym_set] = STATE(45),
        [sym_set_comprehension] = STATE(45),
        [anon_sym_not] = ACTIONS(325),
        [anon_sym_LBRACK] = ACTIONS(145),
        [anon_sym_LBRACE] = ACTIONS(147),
        [sym_string] = ACTIONS(149),
        [sym_number] = ACTIONS(151),
        [sym_identifier] = ACTIONS(153),
        [sym_comment] = ACTIONS(83),
    },
    [283] = {
        [sym__expression] = STATE(286),
        [sym_binary_operator] = STATE(45),
        [sym_unary_operator] = STATE(45),
        [sym_subscript] = STATE(45),
        [sym_call] = STATE(45),
        [sym_list] = STATE(45),
        [sym_list_comprehension] = STATE(45),
        [sym_dictionary] = STATE(45),
        [sym_dictionary_comprehension] = STATE(45),
        [sym_set] = STATE(45),
        [sym_set_comprehension] = STATE(45),
        [anon_sym_not] = ACTIONS(325),
        [anon_sym_LBRACK] = ACTIONS(145),
        [anon_sym_LBRACE] = ACTIONS(147),
        [sym_string] = ACTIONS(149),
        [sym_number] = ACTIONS(151),
        [sym_identifier] = ACTIONS(153),
        [sym_comment] = ACTIONS(83),
    },
    [284] = {
        [sym__expression] = STATE(288),
        [sym_binary_operator] = STATE(45),
        [sym_unary_operator] = STATE(45),
        [sym_subscript] = STATE(45),
        [sym_call] = STATE(45),
        [sym_list] = STATE(45),
        [sym_list_comprehension] = STATE(45),
        [sym_dictionary] = STATE(45),
        [sym_dictionary_comprehension] = STATE(45),
        [sym_set] = STATE(45),
        [sym_set_comprehension] = STATE(45),
        [anon_sym_not] = ACTIONS(325),
        [anon_sym_LBRACK] = ACTIONS(145),
        [anon_sym_LBRACE] = ACTIONS(147),
        [sym_string] = ACTIONS(149),
        [sym_number] = ACTIONS(151),
        [sym_identifier] = ACTIONS(153),
        [sym_comment] = ACTIONS(83),
    },
    [285] = {
        [anon_sym_LPAREN] = ACTIONS(265),
        [anon_sym_RPAREN] = ACTIONS(321),
        [anon_sym_STAR] = ACTIONS(655),
        [anon_sym_PLUS] = ACTIONS(657),
        [anon_sym_DASH] = ACTIONS(657),
        [anon_sym_SLASH] = ACTIONS(659),
        [anon_sym_STAR_STAR] = ACTIONS(661),
        [anon_sym_PIPE] = ACTIONS(321),
        [anon_sym_AMP] = ACTIONS(665),
        [anon_sym_CARET] = ACTIONS(667),
        [anon_sym_LT_LT] = ACTIONS(657),
        [anon_sym_GT_GT] = ACTIONS(657),
        [anon_sym_and] = ACTIONS(665),
        [anon_sym_or] = ACTIONS(321),
        [anon_sym_LBRACK] = ACTIONS(321),
        [sym_comment] = ACTIONS(83),
    },
    [286] = {
        [anon_sym_LPAREN] = ACTIONS(265),
        [anon_sym_RPAREN] = ACTIONS(321),
        [anon_sym_STAR] = ACTIONS(655),
        [anon_sym_PLUS] = ACTIONS(657),
        [anon_sym_DASH] = ACTIONS(657),
        [anon_sym_SLASH] = ACTIONS(659),
        [anon_sym_STAR_STAR] = ACTIONS(661),
        [anon_sym_PIPE] = ACTIONS(321),
        [anon_sym_AMP] = ACTIONS(321),
        [anon_sym_CARET] = ACTIONS(667),
        [anon_sym_LT_LT] = ACTIONS(657),
        [anon_sym_GT_GT] = ACTIONS(657),
        [anon_sym_and] = ACTIONS(321),
        [anon_sym_or] = ACTIONS(321),
        [anon_sym_LBRACK] = ACTIONS(321),
        [sym_comment] = ACTIONS(83),
    },
    [287] = {
        [anon_sym_LPAREN] = ACTIONS(265),
        [anon_sym_RPAREN] = ACTIONS(321),
        [anon_sym_STAR] = ACTIONS(655),
        [anon_sym_PLUS] = ACTIONS(321),
        [anon_sym_DASH] = ACTIONS(321),
        [anon_sym_SLASH] = ACTIONS(659),
        [anon_sym_STAR_STAR] = ACTIONS(661),
        [anon_sym_PIPE] = ACTIONS(321),
        [anon_sym_AMP] = ACTIONS(321),
        [anon_sym_CARET] = ACTIONS(321),
        [anon_sym_LT_LT] = ACTIONS(321),
        [anon_sym_GT_GT] = ACTIONS(321),
        [anon_sym_and] = ACTIONS(321),
        [anon_sym_or] = ACTIONS(321),
        [anon_sym_LBRACK] = ACTIONS(321),
        [sym_comment] = ACTIONS(83),
    },
    [288] = {
        [anon_sym_LPAREN] = ACTIONS(265),
        [anon_sym_RPAREN] = ACTIONS(321),
        [anon_sym_STAR] = ACTIONS(655),
        [anon_sym_PLUS] = ACTIONS(657),
        [anon_sym_DASH] = ACTIONS(657),
        [anon_sym_SLASH] = ACTIONS(659),
        [anon_sym_STAR_STAR] = ACTIONS(661),
        [anon_sym_PIPE] = ACTIONS(321),
        [anon_sym_AMP] = ACTIONS(321),
        [anon_sym_CARET] = ACTIONS(321),
        [anon_sym_LT_LT] = ACTIONS(657),
        [anon_sym_GT_GT] = ACTIONS(657),
        [anon_sym_and] = ACTIONS(321),
        [anon_sym_or] = ACTIONS(321),
        [anon_sym_LBRACK] = ACTIONS(321),
        [sym_comment] = ACTIONS(83),
    },
    [289] = {
        [anon_sym_LPAREN] = ACTIONS(265),
        [anon_sym_RPAREN] = ACTIONS(321),
        [anon_sym_STAR] = ACTIONS(323),
        [anon_sym_PLUS] = ACTIONS(321),
        [anon_sym_DASH] = ACTIONS(321),
        [anon_sym_SLASH] = ACTIONS(321),
        [anon_sym_STAR_STAR] = ACTIONS(661),
        [anon_sym_PIPE] = ACTIONS(321),
        [anon_sym_AMP] = ACTIONS(321),
        [anon_sym_CARET] = ACTIONS(321),
        [anon_sym_LT_LT] = ACTIONS(321),
        [anon_sym_GT_GT] = ACTIONS(321),
        [anon_sym_and] = ACTIONS(321),
        [anon_sym_or] = ACTIONS(321),
        [anon_sym_LBRACK] = ACTIONS(321),
        [sym_comment] = ACTIONS(83),
    },
    [290] = {
        [anon_sym_LPAREN] = ACTIONS(265),
        [anon_sym_RPAREN] = ACTIONS(669),
        [anon_sym_COMMA] = ACTIONS(669),
        [anon_sym_STAR] = ACTIONS(333),
        [anon_sym_PLUS] = ACTIONS(335),
        [anon_sym_DASH] = ACTIONS(335),
        [anon_sym_SLASH] = ACTIONS(337),
        [anon_sym_STAR_STAR] = ACTIONS(339),
        [anon_sym_PIPE] = ACTIONS(341),
        [anon_sym_AMP] = ACTIONS(343),
        [anon_sym_CARET] = ACTIONS(345),
        [anon_sym_LT_LT] = ACTIONS(335),
        [anon_sym_GT_GT] = ACTIONS(335),
        [anon_sym_and] = ACTIONS(343),
        [anon_sym_or] = ACTIONS(341),
        [anon_sym_LBRACK] = ACTIONS(281),
        [sym_comment] = ACTIONS(83),
    },
    [291] = {
        [anon_sym_LPAREN] = ACTIONS(201),
        [anon_sym_STAR] = ACTIONS(203),
        [anon_sym_PLUS] = ACTIONS(205),
        [anon_sym_DASH] = ACTIONS(205),
        [anon_sym_SLASH] = ACTIONS(207),
        [anon_sym_STAR_STAR] = ACTIONS(209),
        [anon_sym_PIPE] = ACTIONS(321),
        [anon_sym_AMP] = ACTIONS(213),
        [anon_sym_CARET] = ACTIONS(215),
        [anon_sym_LT_LT] = ACTIONS(205),
        [anon_sym_GT_GT] = ACTIONS(205),
        [anon_sym_and] = ACTIONS(213),
        [anon_sym_or] = ACTIONS(321),
        [anon_sym_LBRACK] = ACTIONS(321),
        [sym_comment] = ACTIONS(83),
        [sym__newline] = ACTIONS(321),
    },
    [292] = {
        [anon_sym_LPAREN] = ACTIONS(201),
        [anon_sym_STAR] = ACTIONS(203),
        [anon_sym_PLUS] = ACTIONS(205),
        [anon_sym_DASH] = ACTIONS(205),
        [anon_sym_SLASH] = ACTIONS(207),
        [anon_sym_STAR_STAR] = ACTIONS(209),
        [anon_sym_PIPE] = ACTIONS(321),
        [anon_sym_AMP] = ACTIONS(321),
        [anon_sym_CARET] = ACTIONS(215),
        [anon_sym_LT_LT] = ACTIONS(205),
        [anon_sym_GT_GT] = ACTIONS(205),
        [anon_sym_and] = ACTIONS(321),
        [anon_sym_or] = ACTIONS(321),
        [anon_sym_LBRACK] = ACTIONS(321),
        [sym_comment] = ACTIONS(83),
        [sym__newline] = ACTIONS(321),
    },
    [293] = {
        [anon_sym_LPAREN] = ACTIONS(201),
        [anon_sym_STAR] = ACTIONS(203),
        [anon_sym_PLUS] = ACTIONS(321),
        [anon_sym_DASH] = ACTIONS(321),
        [anon_sym_SLASH] = ACTIONS(207),
        [anon_sym_STAR_STAR] = ACTIONS(209),
        [anon_sym_PIPE] = ACTIONS(321),
        [anon_sym_AMP] = ACTIONS(321),
        [anon_sym_CARET] = ACTIONS(321),
        [anon_sym_LT_LT] = ACTIONS(321),
        [anon_sym_GT_GT] = ACTIONS(321),
        [anon_sym_and] = ACTIONS(321),
        [anon_sym_or] = ACTIONS(321),
        [anon_sym_LBRACK] = ACTIONS(321),
        [sym_comment] = ACTIONS(83),
        [sym__newline] = ACTIONS(321),
    },
    [294] = {
        [anon_sym_LPAREN] = ACTIONS(201),
        [anon_sym_STAR] = ACTIONS(203),
        [anon_sym_PLUS] = ACTIONS(205),
        [anon_sym_DASH] = ACTIONS(205),
        [anon_sym_SLASH] = ACTIONS(207),
        [anon_sym_STAR_STAR] = ACTIONS(209),
        [anon_sym_PIPE] = ACTIONS(321),
        [anon_sym_AMP] = ACTIONS(321),
        [anon_sym_CARET] = ACTIONS(321),
        [anon_sym_LT_LT] = ACTIONS(205),
        [anon_sym_GT_GT] = ACTIONS(205),
        [anon_sym_and] = ACTIONS(321),
        [anon_sym_or] = ACTIONS(321),
        [anon_sym_LBRACK] = ACTIONS(321),
        [sym_comment] = ACTIONS(83),
        [sym__newline] = ACTIONS(321),
    },
    [295] = {
        [anon_sym_LPAREN] = ACTIONS(201),
        [anon_sym_COMMA] = ACTIONS(321),
        [anon_sym_STAR] = ACTIONS(323),
        [anon_sym_PLUS] = ACTIONS(321),
        [anon_sym_DASH] = ACTIONS(321),
        [anon_sym_SLASH] = ACTIONS(321),
        [anon_sym_STAR_STAR] = ACTIONS(321),
        [anon_sym_PIPE] = ACTIONS(321),
        [anon_sym_AMP] = ACTIONS(321),
        [anon_sym_CARET] = ACTIONS(321),
        [anon_sym_LT_LT] = ACTIONS(321),
        [anon_sym_GT_GT] = ACTIONS(321),
        [anon_sym_and] = ACTIONS(321),
        [anon_sym_or] = ACTIONS(321),
        [anon_sym_LBRACK] = ACTIONS(321),
        [sym_comment] = ACTIONS(83),
        [sym__newline] = ACTIONS(321),
    },
    [296] = {
        [anon_sym_LPAREN] = ACTIONS(201),
        [anon_sym_STAR] = ACTIONS(323),
        [anon_sym_PLUS] = ACTIONS(321),
        [anon_sym_DASH] = ACTIONS(321),
        [anon_sym_SLASH] = ACTIONS(321),
        [anon_sym_STAR_STAR] = ACTIONS(209),
        [anon_sym_PIPE] = ACTIONS(321),
        [anon_sym_AMP] = ACTIONS(321),
        [anon_sym_CARET] = ACTIONS(321),
        [anon_sym_LT_LT] = ACTIONS(321),
        [anon_sym_GT_GT] = ACTIONS(321),
        [anon_sym_and] = ACTIONS(321),
        [anon_sym_or] = ACTIONS(321),
        [anon_sym_LBRACK] = ACTIONS(321),
        [sym_comment] = ACTIONS(83),
        [sym__newline] = ACTIONS(321),
    },
    [297] = {
        [anon_sym_LPAREN] = ACTIONS(265),
        [anon_sym_RPAREN] = ACTIONS(671),
        [anon_sym_COMMA] = ACTIONS(673),
        [anon_sym_STAR] = ACTIONS(333),
        [anon_sym_PLUS] = ACTIONS(335),
        [anon_sym_DASH] = ACTIONS(335),
        [anon_sym_SLASH] = ACTIONS(337),
        [anon_sym_STAR_STAR] = ACTIONS(339),
        [anon_sym_PIPE] = ACTIONS(341),
        [anon_sym_AMP] = ACTIONS(343),
        [anon_sym_CARET] = ACTIONS(345),
        [anon_sym_LT_LT] = ACTIONS(335),
        [anon_sym_GT_GT] = ACTIONS(335),
        [anon_sym_and] = ACTIONS(343),
        [anon_sym_or] = ACTIONS(341),
        [anon_sym_LBRACK] = ACTIONS(281),
        [sym_comment] = ACTIONS(83),
    },
    [298] = {
        [anon_sym_RPAREN] = ACTIONS(671),
        [anon_sym_COMMA] = ACTIONS(673),
        [sym_comment] = ACTIONS(83),
    },
    [299] = {
        [aux_sym_call_repeat2] = STATE(318),
        [anon_sym_RPAREN] = ACTIONS(671),
        [anon_sym_COMMA] = ACTIONS(675),
        [sym_comment] = ACTIONS(83),
    },
    [300] = {
        [anon_sym_RPAREN] = ACTIONS(671),
        [sym_comment] = ACTIONS(83),
    },
    [301] = {
        [sym__expression] = STATE(302),
        [sym_binary_operator] = STATE(45),
        [sym_unary_operator] = STATE(45),
        [sym_subscript] = STATE(45),
        [sym_call] = STATE(45),
        [sym_keyword_argument] = STATE(303),
        [sym_list_splat_argument] = STATE(304),
        [sym_dictionary_splat_argument] = STATE(305),
        [sym_list] = STATE(45),
        [sym_list_comprehension] = STATE(45),
        [sym_dictionary] = STATE(45),
        [sym_dictionary_comprehension] = STATE(45),
        [sym_set] = STATE(45),
        [sym_set_comprehension] = STATE(45),
        [anon_sym_STAR] = ACTIONS(245),
        [anon_sym_STAR_STAR] = ACTIONS(247),
        [anon_sym_not] = ACTIONS(249),
        [anon_sym_LBRACK] = ACTIONS(145),
        [anon_sym_LBRACE] = ACTIONS(147),
        [sym_string] = ACTIONS(149),
        [sym_number] = ACTIONS(151),
        [sym_identifier] = ACTIONS(251),
        [sym_comment] = ACTIONS(83),
    },
    [302] = {
        [anon_sym_LPAREN] = ACTIONS(265),
        [anon_sym_RPAREN] = ACTIONS(677),
        [anon_sym_COMMA] = ACTIONS(679),
        [anon_sym_STAR] = ACTIONS(333),
        [anon_sym_PLUS] = ACTIONS(335),
        [anon_sym_DASH] = ACTIONS(335),
        [anon_sym_SLASH] = ACTIONS(337),
        [anon_sym_STAR_STAR] = ACTIONS(339),
        [anon_sym_PIPE] = ACTIONS(341),
        [anon_sym_AMP] = ACTIONS(343),
        [anon_sym_CARET] = ACTIONS(345),
        [anon_sym_LT_LT] = ACTIONS(335),
        [anon_sym_GT_GT] = ACTIONS(335),
        [anon_sym_and] = ACTIONS(343),
        [anon_sym_or] = ACTIONS(341),
        [anon_sym_LBRACK] = ACTIONS(281),
        [sym_comment] = ACTIONS(83),
    },
    [303] = {
        [anon_sym_RPAREN] = ACTIONS(677),
        [anon_sym_COMMA] = ACTIONS(679),
        [sym_comment] = ACTIONS(83),
    },
    [304] = {
        [aux_sym_call_repeat2] = STATE(308),
        [anon_sym_RPAREN] = ACTIONS(677),
        [anon_sym_COMMA] = ACTIONS(681),
        [sym_comment] = ACTIONS(83),
    },
    [305] = {
        [anon_sym_RPAREN] = ACTIONS(677),
        [sym_comment] = ACTIONS(83),
    },
    [306] = {
        [anon_sym_LPAREN] = ACTIONS(355),
        [anon_sym_RPAREN] = ACTIONS(355),
        [anon_sym_COMMA] = ACTIONS(355),
        [anon_sym_as] = ACTIONS(355),
        [anon_sym_STAR] = ACTIONS(357),
        [anon_sym_COLON] = ACTIONS(355),
        [anon_sym_for] = ACTIONS(355),
        [anon_sym_in] = ACTIONS(355),
        [anon_sym_PLUS] = ACTIONS(355),
        [anon_sym_DASH] = ACTIONS(355),
        [anon_sym_SLASH] = ACTIONS(355),
        [anon_sym_STAR_STAR] = ACTIONS(355),
        [anon_sym_PIPE] = ACTIONS(355),
        [anon_sym_AMP] = ACTIONS(355),
        [anon_sym_CARET] = ACTIONS(355),
        [anon_sym_LT_LT] = ACTIONS(355),
        [anon_sym_GT_GT] = ACTIONS(355),
        [anon_sym_and] = ACTIONS(355),
        [anon_sym_or] = ACTIONS(355),
        [anon_sym_LBRACK] = ACTIONS(355),
        [anon_sym_RBRACK] = ACTIONS(355),
        [anon_sym_RBRACE] = ACTIONS(355),
        [sym_comment] = ACTIONS(83),
        [sym__newline] = ACTIONS(355),
    },
    [307] = {
        [sym__expression] = STATE(112),
        [sym_binary_operator] = STATE(45),
        [sym_unary_operator] = STATE(45),
        [sym_subscript] = STATE(45),
        [sym_call] = STATE(45),
        [sym_keyword_argument] = STATE(113),
        [sym_dictionary_splat_argument] = STATE(313),
        [sym_list] = STATE(45),
        [sym_list_comprehension] = STATE(45),
        [sym_dictionary] = STATE(45),
        [sym_dictionary_comprehension] = STATE(45),
        [sym_set] = STATE(45),
        [sym_set_comprehension] = STATE(45),
        [anon_sym_STAR_STAR] = ACTIONS(247),
        [anon_sym_not] = ACTIONS(249),
        [anon_sym_LBRACK] = ACTIONS(145),
        [anon_sym_LBRACE] = ACTIONS(147),
        [sym_string] = ACTIONS(149),
        [sym_number] = ACTIONS(151),
        [sym_identifier] = ACTIONS(251),
        [sym_comment] = ACTIONS(83),
    },
    [308] = {
        [anon_sym_RPAREN] = ACTIONS(683),
        [anon_sym_COMMA] = ACTIONS(685),
        [sym_comment] = ACTIONS(83),
    },
    [309] = {
        [anon_sym_LPAREN] = ACTIONS(363),
        [anon_sym_RPAREN] = ACTIONS(363),
        [anon_sym_COMMA] = ACTIONS(363),
        [anon_sym_as] = ACTIONS(363),
        [anon_sym_STAR] = ACTIONS(365),
        [anon_sym_COLON] = ACTIONS(363),
        [anon_sym_for] = ACTIONS(363),
        [anon_sym_in] = ACTIONS(363),
        [anon_sym_PLUS] = ACTIONS(363),
        [anon_sym_DASH] = ACTIONS(363),
        [anon_sym_SLASH] = ACTIONS(363),
        [anon_sym_STAR_STAR] = ACTIONS(363),
        [anon_sym_PIPE] = ACTIONS(363),
        [anon_sym_AMP] = ACTIONS(363),
        [anon_sym_CARET] = ACTIONS(363),
        [anon_sym_LT_LT] = ACTIONS(363),
        [anon_sym_GT_GT] = ACTIONS(363),
        [anon_sym_and] = ACTIONS(363),
        [anon_sym_or] = ACTIONS(363),
        [anon_sym_LBRACK] = ACTIONS(363),
        [anon_sym_RBRACK] = ACTIONS(363),
        [anon_sym_RBRACE] = ACTIONS(363),
        [sym_comment] = ACTIONS(83),
        [sym__newline] = ACTIONS(363),
    },
    [310] = {
        [sym__expression] = STATE(97),
        [sym_binary_operator] = STATE(45),
        [sym_unary_operator] = STATE(45),
        [sym_subscript] = STATE(45),
        [sym_call] = STATE(45),
        [sym_keyword_argument] = STATE(98),
        [sym_dictionary_splat_argument] = STATE(311),
        [sym_list] = STATE(45),
        [sym_list_comprehension] = STATE(45),
        [sym_dictionary] = STATE(45),
        [sym_dictionary_comprehension] = STATE(45),
        [sym_set] = STATE(45),
        [sym_set_comprehension] = STATE(45),
        [anon_sym_STAR_STAR] = ACTIONS(247),
        [anon_sym_not] = ACTIONS(249),
        [anon_sym_LBRACK] = ACTIONS(145),
        [anon_sym_LBRACE] = ACTIONS(147),
        [sym_string] = ACTIONS(149),
        [sym_number] = ACTIONS(151),
        [sym_identifier] = ACTIONS(251),
        [sym_comment] = ACTIONS(83),
    },
    [311] = {
        [anon_sym_RPAREN] = ACTIONS(687),
        [sym_comment] = ACTIONS(83),
    },
    [312] = {
        [anon_sym_LPAREN] = ACTIONS(371),
        [anon_sym_RPAREN] = ACTIONS(371),
        [anon_sym_COMMA] = ACTIONS(371),
        [anon_sym_as] = ACTIONS(371),
        [anon_sym_STAR] = ACTIONS(373),
        [anon_sym_COLON] = ACTIONS(371),
        [anon_sym_for] = ACTIONS(371),
        [anon_sym_in] = ACTIONS(371),
        [anon_sym_PLUS] = ACTIONS(371),
        [anon_sym_DASH] = ACTIONS(371),
        [anon_sym_SLASH] = ACTIONS(371),
        [anon_sym_STAR_STAR] = ACTIONS(371),
        [anon_sym_PIPE] = ACTIONS(371),
        [anon_sym_AMP] = ACTIONS(371),
        [anon_sym_CARET] = ACTIONS(371),
        [anon_sym_LT_LT] = ACTIONS(371),
        [anon_sym_GT_GT] = ACTIONS(371),
        [anon_sym_and] = ACTIONS(371),
        [anon_sym_or] = ACTIONS(371),
        [anon_sym_LBRACK] = ACTIONS(371),
        [anon_sym_RBRACK] = ACTIONS(371),
        [anon_sym_RBRACE] = ACTIONS(371),
        [sym_comment] = ACTIONS(83),
        [sym__newline] = ACTIONS(371),
    },
    [313] = {
        [anon_sym_RPAREN] = ACTIONS(689),
        [sym_comment] = ACTIONS(83),
    },
    [314] = {
        [anon_sym_LPAREN] = ACTIONS(379),
        [anon_sym_RPAREN] = ACTIONS(379),
        [anon_sym_COMMA] = ACTIONS(379),
        [anon_sym_as] = ACTIONS(379),
        [anon_sym_STAR] = ACTIONS(381),
        [anon_sym_COLON] = ACTIONS(379),
        [anon_sym_for] = ACTIONS(379),
        [anon_sym_in] = ACTIONS(379),
        [anon_sym_PLUS] = ACTIONS(379),
        [anon_sym_DASH] = ACTIONS(379),
        [anon_sym_SLASH] = ACTIONS(379),
        [anon_sym_STAR_STAR] = ACTIONS(379),
        [anon_sym_PIPE] = ACTIONS(379),
        [anon_sym_AMP] = ACTIONS(379),
        [anon_sym_CARET] = ACTIONS(379),
        [anon_sym_LT_LT] = ACTIONS(379),
        [anon_sym_GT_GT] = ACTIONS(379),
        [anon_sym_and] = ACTIONS(379),
        [anon_sym_or] = ACTIONS(379),
        [anon_sym_LBRACK] = ACTIONS(379),
        [anon_sym_RBRACK] = ACTIONS(379),
        [anon_sym_RBRACE] = ACTIONS(379),
        [sym_comment] = ACTIONS(83),
        [sym__newline] = ACTIONS(379),
    },
    [315] = {
        [anon_sym_RPAREN] = ACTIONS(683),
        [anon_sym_STAR] = ACTIONS(383),
        [anon_sym_STAR_STAR] = ACTIONS(385),
        [anon_sym_not] = ACTIONS(383),
        [anon_sym_LBRACK] = ACTIONS(385),
        [anon_sym_LBRACE] = ACTIONS(385),
        [sym_string] = ACTIONS(385),
        [sym_number] = ACTIONS(383),
        [sym_identifier] = ACTIONS(387),
        [sym_comment] = ACTIONS(83),
    },
    [316] = {
        [anon_sym_LPAREN] = ACTIONS(389),
        [anon_sym_RPAREN] = ACTIONS(389),
        [anon_sym_COMMA] = ACTIONS(389),
        [anon_sym_as] = ACTIONS(389),
        [anon_sym_STAR] = ACTIONS(391),
        [anon_sym_COLON] = ACTIONS(389),
        [anon_sym_for] = ACTIONS(389),
        [anon_sym_in] = ACTIONS(389),
        [anon_sym_PLUS] = ACTIONS(389),
        [anon_sym_DASH] = ACTIONS(389),
        [anon_sym_SLASH] = ACTIONS(389),
        [anon_sym_STAR_STAR] = ACTIONS(389),
        [anon_sym_PIPE] = ACTIONS(389),
        [anon_sym_AMP] = ACTIONS(389),
        [anon_sym_CARET] = ACTIONS(389),
        [anon_sym_LT_LT] = ACTIONS(389),
        [anon_sym_GT_GT] = ACTIONS(389),
        [anon_sym_and] = ACTIONS(389),
        [anon_sym_or] = ACTIONS(389),
        [anon_sym_LBRACK] = ACTIONS(389),
        [anon_sym_RBRACK] = ACTIONS(389),
        [anon_sym_RBRACE] = ACTIONS(389),
        [sym_comment] = ACTIONS(83),
        [sym__newline] = ACTIONS(389),
    },
    [317] = {
        [sym__expression] = STATE(112),
        [sym_binary_operator] = STATE(45),
        [sym_unary_operator] = STATE(45),
        [sym_subscript] = STATE(45),
        [sym_call] = STATE(45),
        [sym_keyword_argument] = STATE(113),
        [sym_dictionary_splat_argument] = STATE(320),
        [sym_list] = STATE(45),
        [sym_list_comprehension] = STATE(45),
        [sym_dictionary] = STATE(45),
        [sym_dictionary_comprehension] = STATE(45),
        [sym_set] = STATE(45),
        [sym_set_comprehension] = STATE(45),
        [anon_sym_STAR_STAR] = ACTIONS(247),
        [anon_sym_not] = ACTIONS(249),
        [anon_sym_LBRACK] = ACTIONS(145),
        [anon_sym_LBRACE] = ACTIONS(147),
        [sym_string] = ACTIONS(149),
        [sym_number] = ACTIONS(151),
        [sym_identifier] = ACTIONS(251),
        [sym_comment] = ACTIONS(83),
    },
    [318] = {
        [anon_sym_RPAREN] = ACTIONS(677),
        [anon_sym_COMMA] = ACTIONS(691),
        [sym_comment] = ACTIONS(83),
    },
    [319] = {
        [sym__expression] = STATE(97),
        [sym_binary_operator] = STATE(45),
        [sym_unary_operator] = STATE(45),
        [sym_subscript] = STATE(45),
        [sym_call] = STATE(45),
        [sym_keyword_argument] = STATE(98),
        [sym_dictionary_splat_argument] = STATE(313),
        [sym_list] = STATE(45),
        [sym_list_comprehension] = STATE(45),
        [sym_dictionary] = STATE(45),
        [sym_dictionary_comprehension] = STATE(45),
        [sym_set] = STATE(45),
        [sym_set_comprehension] = STATE(45),
        [anon_sym_STAR_STAR] = ACTIONS(247),
        [anon_sym_not] = ACTIONS(249),
        [anon_sym_LBRACK] = ACTIONS(145),
        [anon_sym_LBRACE] = ACTIONS(147),
        [sym_string] = ACTIONS(149),
        [sym_number] = ACTIONS(151),
        [sym_identifier] = ACTIONS(251),
        [sym_comment] = ACTIONS(83),
    },
    [320] = {
        [anon_sym_RPAREN] = ACTIONS(683),
        [sym_comment] = ACTIONS(83),
    },
    [321] = {
        [anon_sym_RPAREN] = ACTIONS(677),
        [anon_sym_STAR] = ACTIONS(395),
        [anon_sym_STAR_STAR] = ACTIONS(397),
        [anon_sym_not] = ACTIONS(395),
        [anon_sym_LBRACK] = ACTIONS(397),
        [anon_sym_LBRACE] = ACTIONS(397),
        [sym_string] = ACTIONS(397),
        [sym_number] = ACTIONS(395),
        [sym_identifier] = ACTIONS(399),
        [sym_comment] = ACTIONS(83),
    },
    [322] = {
        [ts_builtin_sym_end] = ACTIONS(693),
        [anon_sym_SEMI] = ACTIONS(693),
        [anon_sym_import] = ACTIONS(695),
        [anon_sym_from] = ACTIONS(695),
        [anon_sym_print] = ACTIONS(695),
        [anon_sym_return] = ACTIONS(695),
        [anon_sym_del] = ACTIONS(695),
        [sym_pass_statement] = ACTIONS(695),
        [sym_break_statement] = ACTIONS(695),
        [sym_continue_statement] = ACTIONS(695),
        [anon_sym_if] = ACTIONS(695),
        [anon_sym_for] = ACTIONS(695),
        [anon_sym_while] = ACTIONS(695),
        [anon_sym_try] = ACTIONS(695),
        [anon_sym_with] = ACTIONS(695),
        [anon_sym_def] = ACTIONS(695),
        [anon_sym_class] = ACTIONS(695),
        [anon_sym_AT] = ACTIONS(693),
        [anon_sym_not] = ACTIONS(695),
        [anon_sym_LBRACK] = ACTIONS(693),
        [anon_sym_LBRACE] = ACTIONS(693),
        [sym_string] = ACTIONS(693),
        [sym_number] = ACTIONS(695),
        [sym_identifier] = ACTIONS(697),
        [sym_comment] = ACTIONS(83),
        [sym__newline] = ACTIONS(693),
    },
    [323] = {
        [anon_sym_LPAREN] = ACTIONS(403),
        [anon_sym_RPAREN] = ACTIONS(403),
        [anon_sym_COMMA] = ACTIONS(403),
        [anon_sym_as] = ACTIONS(403),
        [anon_sym_STAR] = ACTIONS(405),
        [anon_sym_COLON] = ACTIONS(403),
        [anon_sym_for] = ACTIONS(403),
        [anon_sym_in] = ACTIONS(403),
        [anon_sym_PLUS] = ACTIONS(403),
        [anon_sym_DASH] = ACTIONS(403),
        [anon_sym_SLASH] = ACTIONS(403),
        [anon_sym_STAR_STAR] = ACTIONS(403),
        [anon_sym_PIPE] = ACTIONS(403),
        [anon_sym_AMP] = ACTIONS(403),
        [anon_sym_CARET] = ACTIONS(403),
        [anon_sym_LT_LT] = ACTIONS(403),
        [anon_sym_GT_GT] = ACTIONS(403),
        [anon_sym_and] = ACTIONS(403),
        [anon_sym_or] = ACTIONS(403),
        [anon_sym_LBRACK] = ACTIONS(403),
        [anon_sym_RBRACK] = ACTIONS(403),
        [anon_sym_RBRACE] = ACTIONS(403),
        [sym_comment] = ACTIONS(83),
        [sym__newline] = ACTIONS(403),
    },
    [324] = {
        [aux_sym_print_statement_repeat1] = STATE(340),
        [anon_sym_LPAREN] = ACTIONS(265),
        [anon_sym_COMMA] = ACTIONS(699),
        [anon_sym_STAR] = ACTIONS(409),
        [anon_sym_COLON] = ACTIONS(411),
        [anon_sym_for] = ACTIONS(701),
        [anon_sym_PLUS] = ACTIONS(415),
        [anon_sym_DASH] = ACTIONS(415),
        [anon_sym_SLASH] = ACTIONS(417),
        [anon_sym_STAR_STAR] = ACTIONS(419),
        [anon_sym_PIPE] = ACTIONS(421),
        [anon_sym_AMP] = ACTIONS(423),
        [anon_sym_CARET] = ACTIONS(425),
        [anon_sym_LT_LT] = ACTIONS(415),
        [anon_sym_GT_GT] = ACTIONS(415),
        [anon_sym_and] = ACTIONS(423),
        [anon_sym_or] = ACTIONS(421),
        [anon_sym_LBRACK] = ACTIONS(281),
        [anon_sym_RBRACE] = ACTIONS(703),
        [sym_comment] = ACTIONS(83),
    },
    [325] = {
        [aux_sym_dictionary_repeat1] = STATE(329),
        [anon_sym_COMMA] = ACTIONS(705),
        [anon_sym_for] = ACTIONS(707),
        [anon_sym_RBRACE] = ACTIONS(709),
        [sym_comment] = ACTIONS(83),
    },
    [326] = {
        [sym__expression] = STATE(137),
        [sym_binary_operator] = STATE(45),
        [sym_unary_operator] = STATE(45),
        [sym_subscript] = STATE(45),
        [sym_call] = STATE(45),
        [sym_list] = STATE(45),
        [sym_list_comprehension] = STATE(45),
        [sym_dictionary] = STATE(45),
        [sym_dictionary_comprehension] = STATE(45),
        [sym_pair] = STATE(198),
        [sym_set] = STATE(45),
        [sym_set_comprehension] = STATE(45),
        [anon_sym_not] = ACTIONS(143),
        [anon_sym_LBRACK] = ACTIONS(145),
        [anon_sym_LBRACE] = ACTIONS(147),
        [anon_sym_RBRACE] = ACTIONS(711),
        [sym_string] = ACTIONS(149),
        [sym_number] = ACTIONS(151),
        [sym_identifier] = ACTIONS(153),
        [sym_comment] = ACTIONS(83),
    },
    [327] = {
        [sym_expression_list] = STATE(333),
        [sym__expression] = STATE(166),
        [sym_binary_operator] = STATE(45),
        [sym_unary_operator] = STATE(45),
        [sym_subscript] = STATE(45),
        [sym_call] = STATE(45),
        [sym_list] = STATE(45),
        [sym_list_comprehension] = STATE(45),
        [sym_dictionary] = STATE(45),
        [sym_dictionary_comprehension] = STATE(45),
        [sym_set] = STATE(45),
        [sym_set_comprehension] = STATE(45),
        [anon_sym_not] = ACTIONS(155),
        [anon_sym_LBRACK] = ACTIONS(145),
        [anon_sym_LBRACE] = ACTIONS(147),
        [sym_string] = ACTIONS(149),
        [sym_number] = ACTIONS(151),
        [sym_identifier] = ACTIONS(153),
        [sym_comment] = ACTIONS(83),
    },
    [328] = {
        [anon_sym_LPAREN] = ACTIONS(437),
        [anon_sym_RPAREN] = ACTIONS(437),
        [anon_sym_COMMA] = ACTIONS(437),
        [anon_sym_as] = ACTIONS(437),
        [anon_sym_STAR] = ACTIONS(439),
        [anon_sym_COLON] = ACTIONS(437),
        [anon_sym_for] = ACTIONS(437),
        [anon_sym_in] = ACTIONS(437),
        [anon_sym_PLUS] = ACTIONS(437),
        [anon_sym_DASH] = ACTIONS(437),
        [anon_sym_SLASH] = ACTIONS(437),
        [anon_sym_STAR_STAR] = ACTIONS(437),
        [anon_sym_PIPE] = ACTIONS(437),
        [anon_sym_AMP] = ACTIONS(437),
        [anon_sym_CARET] = ACTIONS(437),
        [anon_sym_LT_LT] = ACTIONS(437),
        [anon_sym_GT_GT] = ACTIONS(437),
        [anon_sym_and] = ACTIONS(437),
        [anon_sym_or] = ACTIONS(437),
        [anon_sym_LBRACK] = ACTIONS(437),
        [anon_sym_RBRACK] = ACTIONS(437),
        [anon_sym_RBRACE] = ACTIONS(437),
        [sym_comment] = ACTIONS(83),
        [sym__newline] = ACTIONS(437),
    },
    [329] = {
        [anon_sym_COMMA] = ACTIONS(713),
        [anon_sym_RBRACE] = ACTIONS(711),
        [sym_comment] = ACTIONS(83),
    },
    [330] = {
        [sym__expression] = STATE(137),
        [sym_binary_operator] = STATE(45),
        [sym_unary_operator] = STATE(45),
        [sym_subscript] = STATE(45),
        [sym_call] = STATE(45),
        [sym_list] = STATE(45),
        [sym_list_comprehension] = STATE(45),
        [sym_dictionary] = STATE(45),
        [sym_dictionary_comprehension] = STATE(45),
        [sym_pair] = STATE(138),
        [sym_set] = STATE(45),
        [sym_set_comprehension] = STATE(45),
        [anon_sym_not] = ACTIONS(143),
        [anon_sym_LBRACK] = ACTIONS(145),
        [anon_sym_LBRACE] = ACTIONS(147),
        [anon_sym_RBRACE] = ACTIONS(715),
        [sym_string] = ACTIONS(149),
        [sym_number] = ACTIONS(151),
        [sym_identifier] = ACTIONS(153),
        [sym_comment] = ACTIONS(83),
    },
    [331] = {
        [anon_sym_LPAREN] = ACTIONS(445),
        [anon_sym_RPAREN] = ACTIONS(445),
        [anon_sym_COMMA] = ACTIONS(445),
        [anon_sym_as] = ACTIONS(445),
        [anon_sym_STAR] = ACTIONS(447),
        [anon_sym_COLON] = ACTIONS(445),
        [anon_sym_for] = ACTIONS(445),
        [anon_sym_in] = ACTIONS(445),
        [anon_sym_PLUS] = ACTIONS(445),
        [anon_sym_DASH] = ACTIONS(445),
        [anon_sym_SLASH] = ACTIONS(445),
        [anon_sym_STAR_STAR] = ACTIONS(445),
        [anon_sym_PIPE] = ACTIONS(445),
        [anon_sym_AMP] = ACTIONS(445),
        [anon_sym_CARET] = ACTIONS(445),
        [anon_sym_LT_LT] = ACTIONS(445),
        [anon_sym_GT_GT] = ACTIONS(445),
        [anon_sym_and] = ACTIONS(445),
        [anon_sym_or] = ACTIONS(445),
        [anon_sym_LBRACK] = ACTIONS(445),
        [anon_sym_RBRACK] = ACTIONS(445),
        [anon_sym_RBRACE] = ACTIONS(445),
        [sym_comment] = ACTIONS(83),
        [sym__newline] = ACTIONS(445),
    },
    [332] = {
        [anon_sym_LPAREN] = ACTIONS(449),
        [anon_sym_RPAREN] = ACTIONS(449),
        [anon_sym_COMMA] = ACTIONS(449),
        [anon_sym_as] = ACTIONS(449),
        [anon_sym_STAR] = ACTIONS(451),
        [anon_sym_COLON] = ACTIONS(449),
        [anon_sym_for] = ACTIONS(449),
        [anon_sym_in] = ACTIONS(449),
        [anon_sym_PLUS] = ACTIONS(449),
        [anon_sym_DASH] = ACTIONS(449),
        [anon_sym_SLASH] = ACTIONS(449),
        [anon_sym_STAR_STAR] = ACTIONS(449),
        [anon_sym_PIPE] = ACTIONS(449),
        [anon_sym_AMP] = ACTIONS(449),
        [anon_sym_CARET] = ACTIONS(449),
        [anon_sym_LT_LT] = ACTIONS(449),
        [anon_sym_GT_GT] = ACTIONS(449),
        [anon_sym_and] = ACTIONS(449),
        [anon_sym_or] = ACTIONS(449),
        [anon_sym_LBRACK] = ACTIONS(449),
        [anon_sym_RBRACK] = ACTIONS(449),
        [anon_sym_RBRACE] = ACTIONS(449),
        [sym_comment] = ACTIONS(83),
        [sym__newline] = ACTIONS(449),
    },
    [333] = {
        [anon_sym_in] = ACTIONS(717),
        [sym_comment] = ACTIONS(83),
    },
    [334] = {
        [sym__expression] = STATE(335),
        [sym_binary_operator] = STATE(45),
        [sym_unary_operator] = STATE(45),
        [sym_subscript] = STATE(45),
        [sym_call] = STATE(45),
        [sym_list] = STATE(45),
        [sym_list_comprehension] = STATE(45),
        [sym_dictionary] = STATE(45),
        [sym_dictionary_comprehension] = STATE(45),
        [sym_set] = STATE(45),
        [sym_set_comprehension] = STATE(45),
        [anon_sym_not] = ACTIONS(517),
        [anon_sym_LBRACK] = ACTIONS(145),
        [anon_sym_LBRACE] = ACTIONS(147),
        [sym_string] = ACTIONS(149),
        [sym_number] = ACTIONS(151),
        [sym_identifier] = ACTIONS(153),
        [sym_comment] = ACTIONS(83),
    },
    [335] = {
        [anon_sym_LPAREN] = ACTIONS(265),
        [anon_sym_STAR] = ACTIONS(519),
        [anon_sym_PLUS] = ACTIONS(521),
        [anon_sym_DASH] = ACTIONS(521),
        [anon_sym_SLASH] = ACTIONS(523),
        [anon_sym_STAR_STAR] = ACTIONS(525),
        [anon_sym_PIPE] = ACTIONS(527),
        [anon_sym_AMP] = ACTIONS(529),
        [anon_sym_CARET] = ACTIONS(531),
        [anon_sym_LT_LT] = ACTIONS(521),
        [anon_sym_GT_GT] = ACTIONS(521),
        [anon_sym_and] = ACTIONS(529),
        [anon_sym_or] = ACTIONS(527),
        [anon_sym_LBRACK] = ACTIONS(281),
        [anon_sym_RBRACE] = ACTIONS(719),
        [sym_comment] = ACTIONS(83),
    },
    [336] = {
        [anon_sym_LPAREN] = ACTIONS(535),
        [anon_sym_RPAREN] = ACTIONS(535),
        [anon_sym_COMMA] = ACTIONS(535),
        [anon_sym_as] = ACTIONS(535),
        [anon_sym_STAR] = ACTIONS(537),
        [anon_sym_COLON] = ACTIONS(535),
        [anon_sym_for] = ACTIONS(535),
        [anon_sym_in] = ACTIONS(535),
        [anon_sym_PLUS] = ACTIONS(535),
        [anon_sym_DASH] = ACTIONS(535),
        [anon_sym_SLASH] = ACTIONS(535),
        [anon_sym_STAR_STAR] = ACTIONS(535),
        [anon_sym_PIPE] = ACTIONS(535),
        [anon_sym_AMP] = ACTIONS(535),
        [anon_sym_CARET] = ACTIONS(535),
        [anon_sym_LT_LT] = ACTIONS(535),
        [anon_sym_GT_GT] = ACTIONS(535),
        [anon_sym_and] = ACTIONS(535),
        [anon_sym_or] = ACTIONS(535),
        [anon_sym_LBRACK] = ACTIONS(535),
        [anon_sym_RBRACK] = ACTIONS(535),
        [anon_sym_RBRACE] = ACTIONS(535),
        [sym_comment] = ACTIONS(83),
        [sym__newline] = ACTIONS(535),
    },
    [337] = {
        [sym__expression] = STATE(236),
        [sym_binary_operator] = STATE(45),
        [sym_unary_operator] = STATE(45),
        [sym_subscript] = STATE(45),
        [sym_call] = STATE(45),
        [sym_list] = STATE(45),
        [sym_list_comprehension] = STATE(45),
        [sym_dictionary] = STATE(45),
        [sym_dictionary_comprehension] = STATE(45),
        [sym_set] = STATE(45),
        [sym_set_comprehension] = STATE(45),
        [anon_sym_not] = ACTIONS(471),
        [anon_sym_LBRACK] = ACTIONS(145),
        [anon_sym_LBRACE] = ACTIONS(147),
        [anon_sym_RBRACE] = ACTIONS(721),
        [sym_string] = ACTIONS(149),
        [sym_number] = ACTIONS(151),
        [sym_identifier] = ACTIONS(153),
        [sym_comment] = ACTIONS(83),
    },
    [338] = {
        [sym_expression_list] = STATE(344),
        [sym__expression] = STATE(166),
        [sym_binary_operator] = STATE(45),
        [sym_unary_operator] = STATE(45),
        [sym_subscript] = STATE(45),
        [sym_call] = STATE(45),
        [sym_list] = STATE(45),
        [sym_list_comprehension] = STATE(45),
        [sym_dictionary] = STATE(45),
        [sym_dictionary_comprehension] = STATE(45),
        [sym_set] = STATE(45),
        [sym_set_comprehension] = STATE(45),
        [anon_sym_not] = ACTIONS(155),
        [anon_sym_LBRACK] = ACTIONS(145),
        [anon_sym_LBRACE] = ACTIONS(147),
        [sym_string] = ACTIONS(149),
        [sym_number] = ACTIONS(151),
        [sym_identifier] = ACTIONS(153),
        [sym_comment] = ACTIONS(83),
    },
    [339] = {
        [anon_sym_LPAREN] = ACTIONS(545),
        [anon_sym_RPAREN] = ACTIONS(545),
        [anon_sym_COMMA] = ACTIONS(545),
        [anon_sym_as] = ACTIONS(545),
        [anon_sym_STAR] = ACTIONS(547),
        [anon_sym_COLON] = ACTIONS(545),
        [anon_sym_for] = ACTIONS(545),
        [anon_sym_in] = ACTIONS(545),
        [anon_sym_PLUS] = ACTIONS(545),
        [anon_sym_DASH] = ACTIONS(545),
        [anon_sym_SLASH] = ACTIONS(545),
        [anon_sym_STAR_STAR] = ACTIONS(545),
        [anon_sym_PIPE] = ACTIONS(545),
        [anon_sym_AMP] = ACTIONS(545),
        [anon_sym_CARET] = ACTIONS(545),
        [anon_sym_LT_LT] = ACTIONS(545),
        [anon_sym_GT_GT] = ACTIONS(545),
        [anon_sym_and] = ACTIONS(545),
        [anon_sym_or] = ACTIONS(545),
        [anon_sym_LBRACK] = ACTIONS(545),
        [anon_sym_RBRACK] = ACTIONS(545),
        [anon_sym_RBRACE] = ACTIONS(545),
        [sym_comment] = ACTIONS(83),
        [sym__newline] = ACTIONS(545),
    },
    [340] = {
        [anon_sym_COMMA] = ACTIONS(723),
        [anon_sym_RBRACE] = ACTIONS(721),
        [sym_comment] = ACTIONS(83),
    },
    [341] = {
        [sym__expression] = STATE(213),
        [sym_binary_operator] = STATE(45),
        [sym_unary_operator] = STATE(45),
        [sym_subscript] = STATE(45),
        [sym_call] = STATE(45),
        [sym_list] = STATE(45),
        [sym_list_comprehension] = STATE(45),
        [sym_dictionary] = STATE(45),
        [sym_dictionary_comprehension] = STATE(45),
        [sym_set] = STATE(45),
        [sym_set_comprehension] = STATE(45),
        [anon_sym_not] = ACTIONS(471),
        [anon_sym_LBRACK] = ACTIONS(145),
        [anon_sym_LBRACE] = ACTIONS(147),
        [anon_sym_RBRACE] = ACTIONS(725),
        [sym_string] = ACTIONS(149),
        [sym_number] = ACTIONS(151),
        [sym_identifier] = ACTIONS(153),
        [sym_comment] = ACTIONS(83),
    },
    [342] = {
        [anon_sym_LPAREN] = ACTIONS(553),
        [anon_sym_RPAREN] = ACTIONS(553),
        [anon_sym_COMMA] = ACTIONS(553),
        [anon_sym_as] = ACTIONS(553),
        [anon_sym_STAR] = ACTIONS(555),
        [anon_sym_COLON] = ACTIONS(553),
        [anon_sym_for] = ACTIONS(553),
        [anon_sym_in] = ACTIONS(553),
        [anon_sym_PLUS] = ACTIONS(553),
        [anon_sym_DASH] = ACTIONS(553),
        [anon_sym_SLASH] = ACTIONS(553),
        [anon_sym_STAR_STAR] = ACTIONS(553),
        [anon_sym_PIPE] = ACTIONS(553),
        [anon_sym_AMP] = ACTIONS(553),
        [anon_sym_CARET] = ACTIONS(553),
        [anon_sym_LT_LT] = ACTIONS(553),
        [anon_sym_GT_GT] = ACTIONS(553),
        [anon_sym_and] = ACTIONS(553),
        [anon_sym_or] = ACTIONS(553),
        [anon_sym_LBRACK] = ACTIONS(553),
        [anon_sym_RBRACK] = ACTIONS(553),
        [anon_sym_RBRACE] = ACTIONS(553),
        [sym_comment] = ACTIONS(83),
        [sym__newline] = ACTIONS(553),
    },
    [343] = {
        [anon_sym_LPAREN] = ACTIONS(557),
        [anon_sym_RPAREN] = ACTIONS(557),
        [anon_sym_COMMA] = ACTIONS(557),
        [anon_sym_as] = ACTIONS(557),
        [anon_sym_STAR] = ACTIONS(559),
        [anon_sym_COLON] = ACTIONS(557),
        [anon_sym_for] = ACTIONS(557),
        [anon_sym_in] = ACTIONS(557),
        [anon_sym_PLUS] = ACTIONS(557),
        [anon_sym_DASH] = ACTIONS(557),
        [anon_sym_SLASH] = ACTIONS(557),
        [anon_sym_STAR_STAR] = ACTIONS(557),
        [anon_sym_PIPE] = ACTIONS(557),
        [anon_sym_AMP] = ACTIONS(557),
        [anon_sym_CARET] = ACTIONS(557),
        [anon_sym_LT_LT] = ACTIONS(557),
        [anon_sym_GT_GT] = ACTIONS(557),
        [anon_sym_and] = ACTIONS(557),
        [anon_sym_or] = ACTIONS(557),
        [anon_sym_LBRACK] = ACTIONS(557),
        [anon_sym_RBRACK] = ACTIONS(557),
        [anon_sym_RBRACE] = ACTIONS(557),
        [sym_comment] = ACTIONS(83),
        [sym__newline] = ACTIONS(557),
    },
    [344] = {
        [anon_sym_in] = ACTIONS(727),
        [sym_comment] = ACTIONS(83),
    },
    [345] = {
        [sym__expression] = STATE(346),
        [sym_binary_operator] = STATE(45),
        [sym_unary_operator] = STATE(45),
        [sym_subscript] = STATE(45),
        [sym_call] = STATE(45),
        [sym_list] = STATE(45),
        [sym_list_comprehension] = STATE(45),
        [sym_dictionary] = STATE(45),
        [sym_dictionary_comprehension] = STATE(45),
        [sym_set] = STATE(45),
        [sym_set_comprehension] = STATE(45),
        [anon_sym_not] = ACTIONS(517),
        [anon_sym_LBRACK] = ACTIONS(145),
        [anon_sym_LBRACE] = ACTIONS(147),
        [sym_string] = ACTIONS(149),
        [sym_number] = ACTIONS(151),
        [sym_identifier] = ACTIONS(153),
        [sym_comment] = ACTIONS(83),
    },
    [346] = {
        [anon_sym_LPAREN] = ACTIONS(265),
        [anon_sym_STAR] = ACTIONS(519),
        [anon_sym_PLUS] = ACTIONS(521),
        [anon_sym_DASH] = ACTIONS(521),
        [anon_sym_SLASH] = ACTIONS(523),
        [anon_sym_STAR_STAR] = ACTIONS(525),
        [anon_sym_PIPE] = ACTIONS(527),
        [anon_sym_AMP] = ACTIONS(529),
        [anon_sym_CARET] = ACTIONS(531),
        [anon_sym_LT_LT] = ACTIONS(521),
        [anon_sym_GT_GT] = ACTIONS(521),
        [anon_sym_and] = ACTIONS(529),
        [anon_sym_or] = ACTIONS(527),
        [anon_sym_LBRACK] = ACTIONS(281),
        [anon_sym_RBRACE] = ACTIONS(729),
        [sym_comment] = ACTIONS(83),
    },
    [347] = {
        [anon_sym_LPAREN] = ACTIONS(565),
        [anon_sym_RPAREN] = ACTIONS(565),
        [anon_sym_COMMA] = ACTIONS(565),
        [anon_sym_as] = ACTIONS(565),
        [anon_sym_STAR] = ACTIONS(567),
        [anon_sym_COLON] = ACTIONS(565),
        [anon_sym_for] = ACTIONS(565),
        [anon_sym_in] = ACTIONS(565),
        [anon_sym_PLUS] = ACTIONS(565),
        [anon_sym_DASH] = ACTIONS(565),
        [anon_sym_SLASH] = ACTIONS(565),
        [anon_sym_STAR_STAR] = ACTIONS(565),
        [anon_sym_PIPE] = ACTIONS(565),
        [anon_sym_AMP] = ACTIONS(565),
        [anon_sym_CARET] = ACTIONS(565),
        [anon_sym_LT_LT] = ACTIONS(565),
        [anon_sym_GT_GT] = ACTIONS(565),
        [anon_sym_and] = ACTIONS(565),
        [anon_sym_or] = ACTIONS(565),
        [anon_sym_LBRACK] = ACTIONS(565),
        [anon_sym_RBRACK] = ACTIONS(565),
        [anon_sym_RBRACE] = ACTIONS(565),
        [sym_comment] = ACTIONS(83),
        [sym__newline] = ACTIONS(565),
    },
    [348] = {
        [anon_sym_LPAREN] = ACTIONS(583),
        [anon_sym_RPAREN] = ACTIONS(583),
        [anon_sym_COMMA] = ACTIONS(583),
        [anon_sym_as] = ACTIONS(583),
        [anon_sym_STAR] = ACTIONS(585),
        [anon_sym_COLON] = ACTIONS(583),
        [anon_sym_for] = ACTIONS(583),
        [anon_sym_in] = ACTIONS(583),
        [anon_sym_PLUS] = ACTIONS(583),
        [anon_sym_DASH] = ACTIONS(583),
        [anon_sym_SLASH] = ACTIONS(583),
        [anon_sym_STAR_STAR] = ACTIONS(583),
        [anon_sym_PIPE] = ACTIONS(583),
        [anon_sym_AMP] = ACTIONS(583),
        [anon_sym_CARET] = ACTIONS(583),
        [anon_sym_LT_LT] = ACTIONS(583),
        [anon_sym_GT_GT] = ACTIONS(583),
        [anon_sym_and] = ACTIONS(583),
        [anon_sym_or] = ACTIONS(583),
        [anon_sym_LBRACK] = ACTIONS(583),
        [anon_sym_RBRACK] = ACTIONS(583),
        [anon_sym_RBRACE] = ACTIONS(583),
        [sym_comment] = ACTIONS(83),
        [sym__newline] = ACTIONS(583),
    },
    [349] = {
        [aux_sym_print_statement_repeat1] = STATE(353),
        [anon_sym_LPAREN] = ACTIONS(265),
        [anon_sym_COMMA] = ACTIONS(731),
        [anon_sym_STAR] = ACTIONS(589),
        [anon_sym_for] = ACTIONS(733),
        [anon_sym_PLUS] = ACTIONS(593),
        [anon_sym_DASH] = ACTIONS(593),
        [anon_sym_SLASH] = ACTIONS(595),
        [anon_sym_STAR_STAR] = ACTIONS(597),
        [anon_sym_PIPE] = ACTIONS(599),
        [anon_sym_AMP] = ACTIONS(601),
        [anon_sym_CARET] = ACTIONS(603),
        [anon_sym_LT_LT] = ACTIONS(593),
        [anon_sym_GT_GT] = ACTIONS(593),
        [anon_sym_and] = ACTIONS(601),
        [anon_sym_or] = ACTIONS(599),
        [anon_sym_LBRACK] = ACTIONS(281),
        [anon_sym_RBRACK] = ACTIONS(735),
        [sym_comment] = ACTIONS(83),
    },
    [350] = {
        [sym__expression] = STATE(275),
        [sym_binary_operator] = STATE(45),
        [sym_unary_operator] = STATE(45),
        [sym_subscript] = STATE(45),
        [sym_call] = STATE(45),
        [sym_list] = STATE(45),
        [sym_list_comprehension] = STATE(45),
        [sym_dictionary] = STATE(45),
        [sym_dictionary_comprehension] = STATE(45),
        [sym_set] = STATE(45),
        [sym_set_comprehension] = STATE(45),
        [anon_sym_not] = ACTIONS(253),
        [anon_sym_LBRACK] = ACTIONS(145),
        [anon_sym_RBRACK] = ACTIONS(737),
        [anon_sym_LBRACE] = ACTIONS(147),
        [sym_string] = ACTIONS(149),
        [sym_number] = ACTIONS(151),
        [sym_identifier] = ACTIONS(153),
        [sym_comment] = ACTIONS(83),
    },
    [351] = {
        [sym_expression_list] = STATE(357),
        [sym__expression] = STATE(166),
        [sym_binary_operator] = STATE(45),
        [sym_unary_operator] = STATE(45),
        [sym_subscript] = STATE(45),
        [sym_call] = STATE(45),
        [sym_list] = STATE(45),
        [sym_list_comprehension] = STATE(45),
        [sym_dictionary] = STATE(45),
        [sym_dictionary_comprehension] = STATE(45),
        [sym_set] = STATE(45),
        [sym_set_comprehension] = STATE(45),
        [anon_sym_not] = ACTIONS(155),
        [anon_sym_LBRACK] = ACTIONS(145),
        [anon_sym_LBRACE] = ACTIONS(147),
        [sym_string] = ACTIONS(149),
        [sym_number] = ACTIONS(151),
        [sym_identifier] = ACTIONS(153),
        [sym_comment] = ACTIONS(83),
    },
    [352] = {
        [anon_sym_LPAREN] = ACTIONS(609),
        [anon_sym_RPAREN] = ACTIONS(609),
        [anon_sym_COMMA] = ACTIONS(609),
        [anon_sym_as] = ACTIONS(609),
        [anon_sym_STAR] = ACTIONS(611),
        [anon_sym_COLON] = ACTIONS(609),
        [anon_sym_for] = ACTIONS(609),
        [anon_sym_in] = ACTIONS(609),
        [anon_sym_PLUS] = ACTIONS(609),
        [anon_sym_DASH] = ACTIONS(609),
        [anon_sym_SLASH] = ACTIONS(609),
        [anon_sym_STAR_STAR] = ACTIONS(609),
        [anon_sym_PIPE] = ACTIONS(609),
        [anon_sym_AMP] = ACTIONS(609),
        [anon_sym_CARET] = ACTIONS(609),
        [anon_sym_LT_LT] = ACTIONS(609),
        [anon_sym_GT_GT] = ACTIONS(609),
        [anon_sym_and] = ACTIONS(609),
        [anon_sym_or] = ACTIONS(609),
        [anon_sym_LBRACK] = ACTIONS(609),
        [anon_sym_RBRACK] = ACTIONS(609),
        [anon_sym_RBRACE] = ACTIONS(609),
        [sym_comment] = ACTIONS(83),
        [sym__newline] = ACTIONS(609),
    },
    [353] = {
        [anon_sym_COMMA] = ACTIONS(739),
        [anon_sym_RBRACK] = ACTIONS(737),
        [sym_comment] = ACTIONS(83),
    },
    [354] = {
        [sym__expression] = STATE(253),
        [sym_binary_operator] = STATE(45),
        [sym_unary_operator] = STATE(45),
        [sym_subscript] = STATE(45),
        [sym_call] = STATE(45),
        [sym_list] = STATE(45),
        [sym_list_comprehension] = STATE(45),
        [sym_dictionary] = STATE(45),
        [sym_dictionary_comprehension] = STATE(45),
        [sym_set] = STATE(45),
        [sym_set_comprehension] = STATE(45),
        [anon_sym_not] = ACTIONS(253),
        [anon_sym_LBRACK] = ACTIONS(145),
        [anon_sym_RBRACK] = ACTIONS(741),
        [anon_sym_LBRACE] = ACTIONS(147),
        [sym_string] = ACTIONS(149),
        [sym_number] = ACTIONS(151),
        [sym_identifier] = ACTIONS(153),
        [sym_comment] = ACTIONS(83),
    },
    [355] = {
        [anon_sym_LPAREN] = ACTIONS(617),
        [anon_sym_RPAREN] = ACTIONS(617),
        [anon_sym_COMMA] = ACTIONS(617),
        [anon_sym_as] = ACTIONS(617),
        [anon_sym_STAR] = ACTIONS(619),
        [anon_sym_COLON] = ACTIONS(617),
        [anon_sym_for] = ACTIONS(617),
        [anon_sym_in] = ACTIONS(617),
        [anon_sym_PLUS] = ACTIONS(617),
        [anon_sym_DASH] = ACTIONS(617),
        [anon_sym_SLASH] = ACTIONS(617),
        [anon_sym_STAR_STAR] = ACTIONS(617),
        [anon_sym_PIPE] = ACTIONS(617),
        [anon_sym_AMP] = ACTIONS(617),
        [anon_sym_CARET] = ACTIONS(617),
        [anon_sym_LT_LT] = ACTIONS(617),
        [anon_sym_GT_GT] = ACTIONS(617),
        [anon_sym_and] = ACTIONS(617),
        [anon_sym_or] = ACTIONS(617),
        [anon_sym_LBRACK] = ACTIONS(617),
        [anon_sym_RBRACK] = ACTIONS(617),
        [anon_sym_RBRACE] = ACTIONS(617),
        [sym_comment] = ACTIONS(83),
        [sym__newline] = ACTIONS(617),
    },
    [356] = {
        [anon_sym_LPAREN] = ACTIONS(621),
        [anon_sym_RPAREN] = ACTIONS(621),
        [anon_sym_COMMA] = ACTIONS(621),
        [anon_sym_as] = ACTIONS(621),
        [anon_sym_STAR] = ACTIONS(623),
        [anon_sym_COLON] = ACTIONS(621),
        [anon_sym_for] = ACTIONS(621),
        [anon_sym_in] = ACTIONS(621),
        [anon_sym_PLUS] = ACTIONS(621),
        [anon_sym_DASH] = ACTIONS(621),
        [anon_sym_SLASH] = ACTIONS(621),
        [anon_sym_STAR_STAR] = ACTIONS(621),
        [anon_sym_PIPE] = ACTIONS(621),
        [anon_sym_AMP] = ACTIONS(621),
        [anon_sym_CARET] = ACTIONS(621),
        [anon_sym_LT_LT] = ACTIONS(621),
        [anon_sym_GT_GT] = ACTIONS(621),
        [anon_sym_and] = ACTIONS(621),
        [anon_sym_or] = ACTIONS(621),
        [anon_sym_LBRACK] = ACTIONS(621),
        [anon_sym_RBRACK] = ACTIONS(621),
        [anon_sym_RBRACE] = ACTIONS(621),
        [sym_comment] = ACTIONS(83),
        [sym__newline] = ACTIONS(621),
    },
    [357] = {
        [anon_sym_in] = ACTIONS(743),
        [sym_comment] = ACTIONS(83),
    },
    [358] = {
        [sym__expression] = STATE(359),
        [sym_binary_operator] = STATE(45),
        [sym_unary_operator] = STATE(45),
        [sym_subscript] = STATE(45),
        [sym_call] = STATE(45),
        [sym_list] = STATE(45),
        [sym_list_comprehension] = STATE(45),
        [sym_dictionary] = STATE(45),
        [sym_dictionary_comprehension] = STATE(45),
        [sym_set] = STATE(45),
        [sym_set_comprehension] = STATE(45),
        [anon_sym_not] = ACTIONS(627),
        [anon_sym_LBRACK] = ACTIONS(145),
        [anon_sym_LBRACE] = ACTIONS(147),
        [sym_string] = ACTIONS(149),
        [sym_number] = ACTIONS(151),
        [sym_identifier] = ACTIONS(153),
        [sym_comment] = ACTIONS(83),
    },
    [359] = {
        [anon_sym_LPAREN] = ACTIONS(265),
        [anon_sym_STAR] = ACTIONS(629),
        [anon_sym_PLUS] = ACTIONS(631),
        [anon_sym_DASH] = ACTIONS(631),
        [anon_sym_SLASH] = ACTIONS(633),
        [anon_sym_STAR_STAR] = ACTIONS(635),
        [anon_sym_PIPE] = ACTIONS(637),
        [anon_sym_AMP] = ACTIONS(639),
        [anon_sym_CARET] = ACTIONS(641),
        [anon_sym_LT_LT] = ACTIONS(631),
        [anon_sym_GT_GT] = ACTIONS(631),
        [anon_sym_and] = ACTIONS(639),
        [anon_sym_or] = ACTIONS(637),
        [anon_sym_LBRACK] = ACTIONS(281),
        [anon_sym_RBRACK] = ACTIONS(745),
        [sym_comment] = ACTIONS(83),
    },
    [360] = {
        [anon_sym_LPAREN] = ACTIONS(645),
        [anon_sym_RPAREN] = ACTIONS(645),
        [anon_sym_COMMA] = ACTIONS(645),
        [anon_sym_as] = ACTIONS(645),
        [anon_sym_STAR] = ACTIONS(647),
        [anon_sym_COLON] = ACTIONS(645),
        [anon_sym_for] = ACTIONS(645),
        [anon_sym_in] = ACTIONS(645),
        [anon_sym_PLUS] = ACTIONS(645),
        [anon_sym_DASH] = ACTIONS(645),
        [anon_sym_SLASH] = ACTIONS(645),
        [anon_sym_STAR_STAR] = ACTIONS(645),
        [anon_sym_PIPE] = ACTIONS(645),
        [anon_sym_AMP] = ACTIONS(645),
        [anon_sym_CARET] = ACTIONS(645),
        [anon_sym_LT_LT] = ACTIONS(645),
        [anon_sym_GT_GT] = ACTIONS(645),
        [anon_sym_and] = ACTIONS(645),
        [anon_sym_or] = ACTIONS(645),
        [anon_sym_LBRACK] = ACTIONS(645),
        [anon_sym_RBRACK] = ACTIONS(645),
        [anon_sym_RBRACE] = ACTIONS(645),
        [sym_comment] = ACTIONS(83),
        [sym__newline] = ACTIONS(645),
    },
    [361] = {
        [anon_sym_LPAREN] = ACTIONS(201),
        [anon_sym_COMMA] = ACTIONS(649),
        [anon_sym_STAR] = ACTIONS(651),
        [anon_sym_PLUS] = ACTIONS(649),
        [anon_sym_DASH] = ACTIONS(649),
        [anon_sym_SLASH] = ACTIONS(649),
        [anon_sym_STAR_STAR] = ACTIONS(649),
        [anon_sym_PIPE] = ACTIONS(649),
        [anon_sym_AMP] = ACTIONS(649),
        [anon_sym_CARET] = ACTIONS(649),
        [anon_sym_LT_LT] = ACTIONS(649),
        [anon_sym_GT_GT] = ACTIONS(649),
        [anon_sym_and] = ACTIONS(649),
        [anon_sym_or] = ACTIONS(649),
        [anon_sym_LBRACK] = ACTIONS(649),
        [sym_comment] = ACTIONS(83),
        [sym__newline] = ACTIONS(649),
    },
    [362] = {
        [aux_sym_dotted_name_repeat1] = STATE(377),
        [anon_sym_DOT] = ACTIONS(747),
        [anon_sym_LPAREN] = ACTIONS(749),
        [anon_sym_RPAREN] = ACTIONS(749),
        [anon_sym_COMMA] = ACTIONS(749),
        [anon_sym_as] = ACTIONS(749),
        [sym_comment] = ACTIONS(83),
        [sym__newline] = ACTIONS(749),
    },
    [363] = {
        [sym_arguments] = STATE(366),
        [anon_sym_LPAREN] = ACTIONS(751),
        [sym_comment] = ACTIONS(83),
        [sym__newline] = ACTIONS(753),
    },
    [364] = {
        [sym__expression] = STATE(368),
        [sym_binary_operator] = STATE(45),
        [sym_unary_operator] = STATE(45),
        [sym_subscript] = STATE(45),
        [sym_call] = STATE(45),
        [sym_list] = STATE(45),
        [sym_list_comprehension] = STATE(45),
        [sym_dictionary] = STATE(45),
        [sym_dictionary_comprehension] = STATE(45),
        [sym_set] = STATE(45),
        [sym_set_comprehension] = STATE(45),
        [anon_sym_not] = ACTIONS(249),
        [anon_sym_LBRACK] = ACTIONS(145),
        [anon_sym_LBRACE] = ACTIONS(147),
        [sym_string] = ACTIONS(149),
        [sym_number] = ACTIONS(151),
        [sym_identifier] = ACTIONS(153),
        [sym_comment] = ACTIONS(83),
    },
    [365] = {
        [anon_sym_def] = ACTIONS(755),
        [anon_sym_class] = ACTIONS(755),
        [anon_sym_AT] = ACTIONS(755),
        [sym_comment] = ACTIONS(83),
    },
    [366] = {
        [sym_comment] = ACTIONS(83),
        [sym__newline] = ACTIONS(757),
    },
    [367] = {
        [anon_sym_def] = ACTIONS(759),
        [anon_sym_class] = ACTIONS(759),
        [anon_sym_AT] = ACTIONS(759),
        [sym_comment] = ACTIONS(83),
    },
    [368] = {
        [aux_sym_print_statement_repeat1] = STATE(371),
        [anon_sym_LPAREN] = ACTIONS(265),
        [anon_sym_RPAREN] = ACTIONS(761),
        [anon_sym_COMMA] = ACTIONS(763),
        [anon_sym_STAR] = ACTIONS(333),
        [anon_sym_PLUS] = ACTIONS(335),
        [anon_sym_DASH] = ACTIONS(335),
        [anon_sym_SLASH] = ACTIONS(337),
        [anon_sym_STAR_STAR] = ACTIONS(339),
        [anon_sym_PIPE] = ACTIONS(341),
        [anon_sym_AMP] = ACTIONS(343),
        [anon_sym_CARET] = ACTIONS(345),
        [anon_sym_LT_LT] = ACTIONS(335),
        [anon_sym_GT_GT] = ACTIONS(335),
        [anon_sym_and] = ACTIONS(343),
        [anon_sym_or] = ACTIONS(341),
        [anon_sym_LBRACK] = ACTIONS(281),
        [sym_comment] = ACTIONS(83),
    },
    [369] = {
        [sym_comment] = ACTIONS(83),
        [sym__newline] = ACTIONS(765),
    },
    [370] = {
        [sym__expression] = STATE(375),
        [sym_binary_operator] = STATE(45),
        [sym_unary_operator] = STATE(45),
        [sym_subscript] = STATE(45),
        [sym_call] = STATE(45),
        [sym_list] = STATE(45),
        [sym_list_comprehension] = STATE(45),
        [sym_dictionary] = STATE(45),
        [sym_dictionary_comprehension] = STATE(45),
        [sym_set] = STATE(45),
        [sym_set_comprehension] = STATE(45),
        [anon_sym_not] = ACTIONS(249),
        [anon_sym_LBRACK] = ACTIONS(145),
        [anon_sym_LBRACE] = ACTIONS(147),
        [sym_string] = ACTIONS(149),
        [sym_number] = ACTIONS(151),
        [sym_identifier] = ACTIONS(153),
        [sym_comment] = ACTIONS(83),
    },
    [371] = {
        [anon_sym_RPAREN] = ACTIONS(767),
        [anon_sym_COMMA] = ACTIONS(769),
        [sym_comment] = ACTIONS(83),
    },
    [372] = {
        [sym_comment] = ACTIONS(83),
        [sym__newline] = ACTIONS(771),
    },
    [373] = {
        [sym__expression] = STATE(374),
        [sym_binary_operator] = STATE(45),
        [sym_unary_operator] = STATE(45),
        [sym_subscript] = STATE(45),
        [sym_call] = STATE(45),
        [sym_list] = STATE(45),
        [sym_list_comprehension] = STATE(45),
        [sym_dictionary] = STATE(45),
        [sym_dictionary_comprehension] = STATE(45),
        [sym_set] = STATE(45),
        [sym_set_comprehension] = STATE(45),
        [anon_sym_not] = ACTIONS(249),
        [anon_sym_LBRACK] = ACTIONS(145),
        [anon_sym_LBRACE] = ACTIONS(147),
        [sym_string] = ACTIONS(149),
        [sym_number] = ACTIONS(151),
        [sym_identifier] = ACTIONS(153),
        [sym_comment] = ACTIONS(83),
    },
    [374] = {
        [anon_sym_LPAREN] = ACTIONS(265),
        [anon_sym_RPAREN] = ACTIONS(513),
        [anon_sym_COMMA] = ACTIONS(513),
        [anon_sym_STAR] = ACTIONS(333),
        [anon_sym_PLUS] = ACTIONS(335),
        [anon_sym_DASH] = ACTIONS(335),
        [anon_sym_SLASH] = ACTIONS(337),
        [anon_sym_STAR_STAR] = ACTIONS(339),
        [anon_sym_PIPE] = ACTIONS(341),
        [anon_sym_AMP] = ACTIONS(343),
        [anon_sym_CARET] = ACTIONS(345),
        [anon_sym_LT_LT] = ACTIONS(335),
        [anon_sym_GT_GT] = ACTIONS(335),
        [anon_sym_and] = ACTIONS(343),
        [anon_sym_or] = ACTIONS(341),
        [anon_sym_LBRACK] = ACTIONS(281),
        [sym_comment] = ACTIONS(83),
    },
    [375] = {
        [anon_sym_LPAREN] = ACTIONS(265),
        [anon_sym_RPAREN] = ACTIONS(515),
        [anon_sym_COMMA] = ACTIONS(515),
        [anon_sym_STAR] = ACTIONS(333),
        [anon_sym_PLUS] = ACTIONS(335),
        [anon_sym_DASH] = ACTIONS(335),
        [anon_sym_SLASH] = ACTIONS(337),
        [anon_sym_STAR_STAR] = ACTIONS(339),
        [anon_sym_PIPE] = ACTIONS(341),
        [anon_sym_AMP] = ACTIONS(343),
        [anon_sym_CARET] = ACTIONS(345),
        [anon_sym_LT_LT] = ACTIONS(335),
        [anon_sym_GT_GT] = ACTIONS(335),
        [anon_sym_and] = ACTIONS(343),
        [anon_sym_or] = ACTIONS(341),
        [anon_sym_LBRACK] = ACTIONS(281),
        [sym_comment] = ACTIONS(83),
    },
    [376] = {
        [sym_identifier] = ACTIONS(773),
        [sym_comment] = ACTIONS(83),
    },
    [377] = {
        [anon_sym_import] = ACTIONS(775),
        [anon_sym_DOT] = ACTIONS(777),
        [anon_sym_LPAREN] = ACTIONS(775),
        [anon_sym_RPAREN] = ACTIONS(775),
        [anon_sym_COMMA] = ACTIONS(775),
        [anon_sym_as] = ACTIONS(775),
        [sym_comment] = ACTIONS(83),
        [sym__newline] = ACTIONS(775),
    },
    [378] = {
        [sym_identifier] = ACTIONS(779),
        [sym_comment] = ACTIONS(83),
    },
    [379] = {
        [anon_sym_import] = ACTIONS(781),
        [anon_sym_DOT] = ACTIONS(781),
        [anon_sym_LPAREN] = ACTIONS(781),
        [anon_sym_RPAREN] = ACTIONS(781),
        [anon_sym_COMMA] = ACTIONS(781),
        [anon_sym_as] = ACTIONS(781),
        [sym_comment] = ACTIONS(83),
        [sym__newline] = ACTIONS(781),
    },
    [380] = {
        [anon_sym_import] = ACTIONS(783),
        [anon_sym_DOT] = ACTIONS(783),
        [anon_sym_LPAREN] = ACTIONS(783),
        [anon_sym_RPAREN] = ACTIONS(783),
        [anon_sym_COMMA] = ACTIONS(783),
        [anon_sym_as] = ACTIONS(783),
        [sym_comment] = ACTIONS(83),
        [sym__newline] = ACTIONS(783),
    },
    [381] = {
        [anon_sym_LPAREN] = ACTIONS(785),
        [anon_sym_COLON] = ACTIONS(787),
        [sym_comment] = ACTIONS(83),
    },
    [382] = {
        [sym_expression_list] = STATE(545),
        [sym__expression] = STATE(415),
        [sym_binary_operator] = STATE(45),
        [sym_unary_operator] = STATE(45),
        [sym_subscript] = STATE(45),
        [sym_call] = STATE(45),
        [sym_list] = STATE(45),
        [sym_list_comprehension] = STATE(45),
        [sym_dictionary] = STATE(45),
        [sym_dictionary_comprehension] = STATE(45),
        [sym_set] = STATE(45),
        [sym_set_comprehension] = STATE(45),
        [anon_sym_not] = ACTIONS(249),
        [anon_sym_LBRACK] = ACTIONS(145),
        [anon_sym_LBRACE] = ACTIONS(147),
        [sym_string] = ACTIONS(149),
        [sym_number] = ACTIONS(151),
        [sym_identifier] = ACTIONS(153),
        [sym_comment] = ACTIONS(83),
    },
    [383] = {
        [sym__simple_statement] = STATE(385),
        [sym_import_statement] = STATE(7),
        [sym_import_from_statement] = STATE(7),
        [sym_print_statement] = STATE(7),
        [sym_expression_statement] = STATE(7),
        [sym_return_statement] = STATE(7),
        [sym_delete_statement] = STATE(7),
        [sym__suite] = STATE(386),
        [sym__expression] = STATE(26),
        [sym_binary_operator] = STATE(19),
        [sym_unary_operator] = STATE(19),
        [sym_subscript] = STATE(19),
        [sym_call] = STATE(19),
        [sym_list] = STATE(19),
        [sym_list_comprehension] = STATE(19),
        [sym_dictionary] = STATE(19),
        [sym_dictionary_comprehension] = STATE(19),
        [sym_set] = STATE(19),
        [sym_set_comprehension] = STATE(19),
        [anon_sym_import] = ACTIONS(93),
        [anon_sym_from] = ACTIONS(95),
        [anon_sym_print] = ACTIONS(97),
        [anon_sym_return] = ACTIONS(99),
        [anon_sym_del] = ACTIONS(101),
        [sym_pass_statement] = ACTIONS(103),
        [sym_break_statement] = ACTIONS(103),
        [sym_continue_statement] = ACTIONS(103),
        [anon_sym_not] = ACTIONS(121),
        [anon_sym_LBRACK] = ACTIONS(123),
        [anon_sym_LBRACE] = ACTIONS(125),
        [sym_string] = ACTIONS(127),
        [sym_number] = ACTIONS(129),
        [sym_identifier] = ACTIONS(131),
        [sym_comment] = ACTIONS(83),
        [sym__indent] = ACTIONS(789),
    },
    [384] = {
        [sym__statement] = STATE(395),
        [sym__simple_statement] = STATE(396),
        [sym_import_statement] = STATE(7),
        [sym_import_from_statement] = STATE(7),
        [sym_print_statement] = STATE(7),
        [sym_expression_statement] = STATE(7),
        [sym_return_statement] = STATE(7),
        [sym_delete_statement] = STATE(7),
        [sym__compound_statement] = STATE(397),
        [sym_if_statement] = STATE(398),
        [sym_for_statement] = STATE(398),
        [sym_while_statement] = STATE(398),
        [sym_try_statement] = STATE(398),
        [sym_with_statement] = STATE(398),
        [sym_function_definition] = STATE(398),
        [sym_class_definition] = STATE(398),
        [sym_decorated_definition] = STATE(398),
        [sym_decorator] = STATE(25),
        [sym__expression] = STATE(26),
        [sym_binary_operator] = STATE(19),
        [sym_unary_operator] = STATE(19),
        [sym_subscript] = STATE(19),
        [sym_call] = STATE(19),
        [sym_list] = STATE(19),
        [sym_list_comprehension] = STATE(19),
        [sym_dictionary] = STATE(19),
        [sym_dictionary_comprehension] = STATE(19),
        [sym_set] = STATE(19),
        [sym_set_comprehension] = STATE(19),
        [aux_sym_module_repeat1] = STATE(399),
        [aux_sym_decorated_definition_repeat1] = STATE(400),
        [anon_sym_import] = ACTIONS(93),
        [anon_sym_from] = ACTIONS(95),
        [anon_sym_print] = ACTIONS(97),
        [anon_sym_return] = ACTIONS(99),
        [anon_sym_del] = ACTIONS(101),
        [sym_pass_statement] = ACTIONS(103),
        [sym_break_statement] = ACTIONS(103),
        [sym_continue_statement] = ACTIONS(103),
        [anon_sym_if] = ACTIONS(791),
        [anon_sym_for] = ACTIONS(793),
        [anon_sym_while] = ACTIONS(795),
        [anon_sym_try] = ACTIONS(797),
        [anon_sym_with] = ACTIONS(799),
        [anon_sym_def] = ACTIONS(801),
        [anon_sym_class] = ACTIONS(803),
        [anon_sym_AT] = ACTIONS(119),
        [anon_sym_not] = ACTIONS(121),
        [anon_sym_LBRACK] = ACTIONS(123),
        [anon_sym_LBRACE] = ACTIONS(125),
        [sym_string] = ACTIONS(127),
        [sym_number] = ACTIONS(129),
        [sym_identifier] = ACTIONS(131),
        [sym_comment] = ACTIONS(83),
        [sym__dedent] = ACTIONS(805),
    },
    [385] = {
        [sym_comment] = ACTIONS(83),
        [sym__newline] = ACTIONS(805),
    },
    [386] = {
        [ts_builtin_sym_end] = ACTIONS(807),
        [anon_sym_SEMI] = ACTIONS(807),
        [anon_sym_import] = ACTIONS(809),
        [anon_sym_from] = ACTIONS(809),
        [anon_sym_print] = ACTIONS(809),
        [anon_sym_return] = ACTIONS(809),
        [anon_sym_del] = ACTIONS(809),
        [sym_pass_statement] = ACTIONS(809),
        [sym_break_statement] = ACTIONS(809),
        [sym_continue_statement] = ACTIONS(809),
        [anon_sym_if] = ACTIONS(809),
        [anon_sym_for] = ACTIONS(809),
        [anon_sym_while] = ACTIONS(809),
        [anon_sym_try] = ACTIONS(809),
        [anon_sym_with] = ACTIONS(809),
        [anon_sym_def] = ACTIONS(809),
        [anon_sym_class] = ACTIONS(809),
        [anon_sym_AT] = ACTIONS(807),
        [anon_sym_not] = ACTIONS(809),
        [anon_sym_LBRACK] = ACTIONS(807),
        [anon_sym_LBRACE] = ACTIONS(807),
        [sym_string] = ACTIONS(807),
        [sym_number] = ACTIONS(809),
        [sym_identifier] = ACTIONS(811),
        [sym_comment] = ACTIONS(83),
        [sym__newline] = ACTIONS(807),
    },
    [387] = {
        [ts_builtin_sym_end] = ACTIONS(813),
        [anon_sym_SEMI] = ACTIONS(813),
        [anon_sym_import] = ACTIONS(815),
        [anon_sym_from] = ACTIONS(815),
        [anon_sym_print] = ACTIONS(815),
        [anon_sym_return] = ACTIONS(815),
        [anon_sym_del] = ACTIONS(815),
        [sym_pass_statement] = ACTIONS(815),
        [sym_break_statement] = ACTIONS(815),
        [sym_continue_statement] = ACTIONS(815),
        [anon_sym_if] = ACTIONS(815),
        [anon_sym_elif] = ACTIONS(815),
        [anon_sym_else] = ACTIONS(815),
        [anon_sym_for] = ACTIONS(815),
        [anon_sym_while] = ACTIONS(815),
        [anon_sym_try] = ACTIONS(815),
        [anon_sym_except] = ACTIONS(815),
        [anon_sym_finally] = ACTIONS(815),
        [anon_sym_with] = ACTIONS(815),
        [anon_sym_def] = ACTIONS(815),
        [anon_sym_class] = ACTIONS(815),
        [anon_sym_AT] = ACTIONS(813),
        [anon_sym_not] = ACTIONS(815),
        [anon_sym_LBRACK] = ACTIONS(813),
        [anon_sym_LBRACE] = ACTIONS(813),
        [sym_string] = ACTIONS(813),
        [sym_number] = ACTIONS(815),
        [sym_identifier] = ACTIONS(817),
        [sym_comment] = ACTIONS(83),
        [sym__newline] = ACTIONS(813),
    },
    [388] = {
        [sym__expression] = STATE(533),
        [sym_binary_operator] = STATE(45),
        [sym_unary_operator] = STATE(45),
        [sym_subscript] = STATE(45),
        [sym_call] = STATE(45),
        [sym_list] = STATE(45),
        [sym_list_comprehension] = STATE(45),
        [sym_dictionary] = STATE(45),
        [sym_dictionary_comprehension] = STATE(45),
        [sym_set] = STATE(45),
        [sym_set_comprehension] = STATE(45),
        [anon_sym_not] = ACTIONS(143),
        [anon_sym_LBRACK] = ACTIONS(145),
        [anon_sym_LBRACE] = ACTIONS(147),
        [sym_string] = ACTIONS(149),
        [sym_number] = ACTIONS(151),
        [sym_identifier] = ACTIONS(153),
        [sym_comment] = ACTIONS(83),
    },
    [389] = {
        [sym_expression_list] = STATE(521),
        [sym__expression] = STATE(166),
        [sym_binary_operator] = STATE(45),
        [sym_unary_operator] = STATE(45),
        [sym_subscript] = STATE(45),
        [sym_call] = STATE(45),
        [sym_list] = STATE(45),
        [sym_list_comprehension] = STATE(45),
        [sym_dictionary] = STATE(45),
        [sym_dictionary_comprehension] = STATE(45),
        [sym_set] = STATE(45),
        [sym_set_comprehension] = STATE(45),
        [anon_sym_not] = ACTIONS(155),
        [anon_sym_LBRACK] = ACTIONS(145),
        [anon_sym_LBRACE] = ACTIONS(147),
        [sym_string] = ACTIONS(149),
        [sym_number] = ACTIONS(151),
        [sym_identifier] = ACTIONS(153),
        [sym_comment] = ACTIONS(83),
    },
    [390] = {
        [sym__expression] = STATE(517),
        [sym_binary_operator] = STATE(45),
        [sym_unary_operator] = STATE(45),
        [sym_subscript] = STATE(45),
        [sym_call] = STATE(45),
        [sym_list] = STATE(45),
        [sym_list_comprehension] = STATE(45),
        [sym_dictionary] = STATE(45),
        [sym_dictionary_comprehension] = STATE(45),
        [sym_set] = STATE(45),
        [sym_set_comprehension] = STATE(45),
        [anon_sym_not] = ACTIONS(143),
        [anon_sym_LBRACK] = ACTIONS(145),
        [anon_sym_LBRACE] = ACTIONS(147),
        [sym_string] = ACTIONS(149),
        [sym_number] = ACTIONS(151),
        [sym_identifier] = ACTIONS(153),
        [sym_comment] = ACTIONS(83),
    },
    [391] = {
        [anon_sym_COLON] = ACTIONS(819),
        [sym_comment] = ACTIONS(83),
    },
    [392] = {
        [sym_with_item] = STATE(453),
        [sym__expression] = STATE(454),
        [sym_binary_operator] = STATE(45),
        [sym_unary_operator] = STATE(45),
        [sym_subscript] = STATE(45),
        [sym_call] = STATE(45),
        [sym_list] = STATE(45),
        [sym_list_comprehension] = STATE(45),
        [sym_dictionary] = STATE(45),
        [sym_dictionary_comprehension] = STATE(45),
        [sym_set] = STATE(45),
        [sym_set_comprehension] = STATE(45),
        [anon_sym_not] = ACTIONS(159),
        [anon_sym_LBRACK] = ACTIONS(145),
        [anon_sym_LBRACE] = ACTIONS(147),
        [sym_string] = ACTIONS(149),
        [sym_number] = ACTIONS(151),
        [sym_identifier] = ACTIONS(153),
        [sym_comment] = ACTIONS(83),
    },
    [393] = {
        [sym_identifier] = ACTIONS(821),
        [sym_comment] = ACTIONS(83),
    },
    [394] = {
        [sym_identifier] = ACTIONS(823),
        [sym_comment] = ACTIONS(83),
    },
    [395] = {
        [anon_sym_import] = ACTIONS(181),
        [anon_sym_from] = ACTIONS(181),
        [anon_sym_print] = ACTIONS(181),
        [anon_sym_return] = ACTIONS(181),
        [anon_sym_del] = ACTIONS(181),
        [sym_pass_statement] = ACTIONS(181),
        [sym_break_statement] = ACTIONS(181),
        [sym_continue_statement] = ACTIONS(181),
        [anon_sym_if] = ACTIONS(181),
        [anon_sym_for] = ACTIONS(181),
        [anon_sym_while] = ACTIONS(181),
        [anon_sym_try] = ACTIONS(181),
        [anon_sym_with] = ACTIONS(181),
        [anon_sym_def] = ACTIONS(181),
        [anon_sym_class] = ACTIONS(181),
        [anon_sym_AT] = ACTIONS(179),
        [anon_sym_not] = ACTIONS(181),
        [anon_sym_LBRACK] = ACTIONS(179),
        [anon_sym_LBRACE] = ACTIONS(179),
        [sym_string] = ACTIONS(179),
        [sym_number] = ACTIONS(181),
        [sym_identifier] = ACTIONS(183),
        [sym_comment] = ACTIONS(83),
        [sym__dedent] = ACTIONS(179),
    },
    [396] = {
        [sym_comment] = ACTIONS(83),
        [sym__newline] = ACTIONS(825),
    },
    [397] = {
        [anon_sym_import] = ACTIONS(189),
        [anon_sym_from] = ACTIONS(189),
        [anon_sym_print] = ACTIONS(189),
        [anon_sym_return] = ACTIONS(189),
        [anon_sym_del] = ACTIONS(189),
        [sym_pass_statement] = ACTIONS(189),
        [sym_break_statement] = ACTIONS(189),
        [sym_continue_statement] = ACTIONS(189),
        [anon_sym_if] = ACTIONS(189),
        [anon_sym_for] = ACTIONS(189),
        [anon_sym_while] = ACTIONS(189),
        [anon_sym_try] = ACTIONS(189),
        [anon_sym_with] = ACTIONS(189),
        [anon_sym_def] = ACTIONS(189),
        [anon_sym_class] = ACTIONS(189),
        [anon_sym_AT] = ACTIONS(187),
        [anon_sym_not] = ACTIONS(189),
        [anon_sym_LBRACK] = ACTIONS(187),
        [anon_sym_LBRACE] = ACTIONS(187),
        [sym_string] = ACTIONS(187),
        [sym_number] = ACTIONS(189),
        [sym_identifier] = ACTIONS(191),
        [sym_comment] = ACTIONS(83),
        [sym__dedent] = ACTIONS(187),
    },
    [398] = {
        [anon_sym_import] = ACTIONS(195),
        [anon_sym_from] = ACTIONS(195),
        [anon_sym_print] = ACTIONS(195),
        [anon_sym_return] = ACTIONS(195),
        [anon_sym_del] = ACTIONS(195),
        [sym_pass_statement] = ACTIONS(195),
        [sym_break_statement] = ACTIONS(195),
        [sym_continue_statement] = ACTIONS(195),
        [anon_sym_if] = ACTIONS(195),
        [anon_sym_for] = ACTIONS(195),
        [anon_sym_while] = ACTIONS(195),
        [anon_sym_try] = ACTIONS(195),
        [anon_sym_with] = ACTIONS(195),
        [anon_sym_def] = ACTIONS(195),
        [anon_sym_class] = ACTIONS(195),
        [anon_sym_AT] = ACTIONS(193),
        [anon_sym_not] = ACTIONS(195),
        [anon_sym_LBRACK] = ACTIONS(193),
        [anon_sym_LBRACE] = ACTIONS(193),
        [sym_string] = ACTIONS(193),
        [sym_number] = ACTIONS(195),
        [sym_identifier] = ACTIONS(197),
        [sym_comment] = ACTIONS(83),
        [sym__dedent] = ACTIONS(193),
    },
    [399] = {
        [sym__statement] = STATE(403),
        [sym__simple_statement] = STATE(396),
        [sym_import_statement] = STATE(7),
        [sym_import_from_statement] = STATE(7),
        [sym_print_statement] = STATE(7),
        [sym_expression_statement] = STATE(7),
        [sym_return_statement] = STATE(7),
        [sym_delete_statement] = STATE(7),
        [sym__compound_statement] = STATE(397),
        [sym_if_statement] = STATE(398),
        [sym_for_statement] = STATE(398),
        [sym_while_statement] = STATE(398),
        [sym_try_statement] = STATE(398),
        [sym_with_statement] = STATE(398),
        [sym_function_definition] = STATE(398),
        [sym_class_definition] = STATE(398),
        [sym_decorated_definition] = STATE(398),
        [sym_decorator] = STATE(25),
        [sym__expression] = STATE(26),
        [sym_binary_operator] = STATE(19),
        [sym_unary_operator] = STATE(19),
        [sym_subscript] = STATE(19),
        [sym_call] = STATE(19),
        [sym_list] = STATE(19),
        [sym_list_comprehension] = STATE(19),
        [sym_dictionary] = STATE(19),
        [sym_dictionary_comprehension] = STATE(19),
        [sym_set] = STATE(19),
        [sym_set_comprehension] = STATE(19),
        [aux_sym_decorated_definition_repeat1] = STATE(400),
        [anon_sym_import] = ACTIONS(93),
        [anon_sym_from] = ACTIONS(95),
        [anon_sym_print] = ACTIONS(97),
        [anon_sym_return] = ACTIONS(99),
        [anon_sym_del] = ACTIONS(101),
        [sym_pass_statement] = ACTIONS(103),
        [sym_break_statement] = ACTIONS(103),
        [sym_continue_statement] = ACTIONS(103),
        [anon_sym_if] = ACTIONS(791),
        [anon_sym_for] = ACTIONS(793),
        [anon_sym_while] = ACTIONS(795),
        [anon_sym_try] = ACTIONS(797),
        [anon_sym_with] = ACTIONS(799),
        [anon_sym_def] = ACTIONS(801),
        [anon_sym_class] = ACTIONS(803),
        [anon_sym_AT] = ACTIONS(119),
        [anon_sym_not] = ACTIONS(121),
        [anon_sym_LBRACK] = ACTIONS(123),
        [anon_sym_LBRACE] = ACTIONS(125),
        [sym_string] = ACTIONS(127),
        [sym_number] = ACTIONS(129),
        [sym_identifier] = ACTIONS(131),
        [sym_comment] = ACTIONS(83),
        [sym__dedent] = ACTIONS(827),
    },
    [400] = {
        [sym_function_definition] = STATE(401),
        [sym_class_definition] = STATE(401),
        [sym_decorator] = STATE(30),
        [anon_sym_def] = ACTIONS(829),
        [anon_sym_class] = ACTIONS(831),
        [anon_sym_AT] = ACTIONS(119),
        [sym_comment] = ACTIONS(83),
    },
    [401] = {
        [anon_sym_import] = ACTIONS(231),
        [anon_sym_from] = ACTIONS(231),
        [anon_sym_print] = ACTIONS(231),
        [anon_sym_return] = ACTIONS(231),
        [anon_sym_del] = ACTIONS(231),
        [sym_pass_statement] = ACTIONS(231),
        [sym_break_statement] = ACTIONS(231),
        [sym_continue_statement] = ACTIONS(231),
        [anon_sym_if] = ACTIONS(231),
        [anon_sym_for] = ACTIONS(231),
        [anon_sym_while] = ACTIONS(231),
        [anon_sym_try] = ACTIONS(231),
        [anon_sym_with] = ACTIONS(231),
        [anon_sym_def] = ACTIONS(231),
        [anon_sym_class] = ACTIONS(231),
        [anon_sym_AT] = ACTIONS(229),
        [anon_sym_not] = ACTIONS(231),
        [anon_sym_LBRACK] = ACTIONS(229),
        [anon_sym_LBRACE] = ACTIONS(229),
        [sym_string] = ACTIONS(229),
        [sym_number] = ACTIONS(231),
        [sym_identifier] = ACTIONS(233),
        [sym_comment] = ACTIONS(83),
        [sym__dedent] = ACTIONS(229),
    },
    [402] = {
        [ts_builtin_sym_end] = ACTIONS(833),
        [anon_sym_SEMI] = ACTIONS(833),
        [anon_sym_import] = ACTIONS(835),
        [anon_sym_from] = ACTIONS(835),
        [anon_sym_print] = ACTIONS(835),
        [anon_sym_return] = ACTIONS(835),
        [anon_sym_del] = ACTIONS(835),
        [sym_pass_statement] = ACTIONS(835),
        [sym_break_statement] = ACTIONS(835),
        [sym_continue_statement] = ACTIONS(835),
        [anon_sym_if] = ACTIONS(835),
        [anon_sym_elif] = ACTIONS(835),
        [anon_sym_else] = ACTIONS(835),
        [anon_sym_for] = ACTIONS(835),
        [anon_sym_while] = ACTIONS(835),
        [anon_sym_try] = ACTIONS(835),
        [anon_sym_except] = ACTIONS(835),
        [anon_sym_finally] = ACTIONS(835),
        [anon_sym_with] = ACTIONS(835),
        [anon_sym_def] = ACTIONS(835),
        [anon_sym_class] = ACTIONS(835),
        [anon_sym_AT] = ACTIONS(833),
        [anon_sym_not] = ACTIONS(835),
        [anon_sym_LBRACK] = ACTIONS(833),
        [anon_sym_LBRACE] = ACTIONS(833),
        [sym_string] = ACTIONS(833),
        [sym_number] = ACTIONS(835),
        [sym_identifier] = ACTIONS(837),
        [sym_comment] = ACTIONS(83),
        [sym__newline] = ACTIONS(833),
    },
    [403] = {
        [anon_sym_import] = ACTIONS(241),
        [anon_sym_from] = ACTIONS(241),
        [anon_sym_print] = ACTIONS(241),
        [anon_sym_return] = ACTIONS(241),
        [anon_sym_del] = ACTIONS(241),
        [sym_pass_statement] = ACTIONS(241),
        [sym_break_statement] = ACTIONS(241),
        [sym_continue_statement] = ACTIONS(241),
        [anon_sym_if] = ACTIONS(241),
        [anon_sym_for] = ACTIONS(241),
        [anon_sym_while] = ACTIONS(241),
        [anon_sym_try] = ACTIONS(241),
        [anon_sym_with] = ACTIONS(241),
        [anon_sym_def] = ACTIONS(241),
        [anon_sym_class] = ACTIONS(241),
        [anon_sym_AT] = ACTIONS(239),
        [anon_sym_not] = ACTIONS(241),
        [anon_sym_LBRACK] = ACTIONS(239),
        [anon_sym_LBRACE] = ACTIONS(239),
        [sym_string] = ACTIONS(239),
        [sym_number] = ACTIONS(241),
        [sym_identifier] = ACTIONS(243),
        [sym_comment] = ACTIONS(83),
        [sym__dedent] = ACTIONS(239),
    },
    [404] = {
        [anon_sym_import] = ACTIONS(695),
        [anon_sym_from] = ACTIONS(695),
        [anon_sym_print] = ACTIONS(695),
        [anon_sym_return] = ACTIONS(695),
        [anon_sym_del] = ACTIONS(695),
        [sym_pass_statement] = ACTIONS(695),
        [sym_break_statement] = ACTIONS(695),
        [sym_continue_statement] = ACTIONS(695),
        [anon_sym_if] = ACTIONS(695),
        [anon_sym_for] = ACTIONS(695),
        [anon_sym_while] = ACTIONS(695),
        [anon_sym_try] = ACTIONS(695),
        [anon_sym_with] = ACTIONS(695),
        [anon_sym_def] = ACTIONS(695),
        [anon_sym_class] = ACTIONS(695),
        [anon_sym_AT] = ACTIONS(693),
        [anon_sym_not] = ACTIONS(695),
        [anon_sym_LBRACK] = ACTIONS(693),
        [anon_sym_LBRACE] = ACTIONS(693),
        [sym_string] = ACTIONS(693),
        [sym_number] = ACTIONS(695),
        [sym_identifier] = ACTIONS(697),
        [sym_comment] = ACTIONS(83),
        [sym__dedent] = ACTIONS(693),
    },
    [405] = {
        [anon_sym_LPAREN] = ACTIONS(839),
        [anon_sym_COLON] = ACTIONS(841),
        [sym_comment] = ACTIONS(83),
    },
    [406] = {
        [sym_expression_list] = STATE(414),
        [sym__expression] = STATE(415),
        [sym_binary_operator] = STATE(45),
        [sym_unary_operator] = STATE(45),
        [sym_subscript] = STATE(45),
        [sym_call] = STATE(45),
        [sym_list] = STATE(45),
        [sym_list_comprehension] = STATE(45),
        [sym_dictionary] = STATE(45),
        [sym_dictionary_comprehension] = STATE(45),
        [sym_set] = STATE(45),
        [sym_set_comprehension] = STATE(45),
        [anon_sym_not] = ACTIONS(249),
        [anon_sym_LBRACK] = ACTIONS(145),
        [anon_sym_LBRACE] = ACTIONS(147),
        [sym_string] = ACTIONS(149),
        [sym_number] = ACTIONS(151),
        [sym_identifier] = ACTIONS(153),
        [sym_comment] = ACTIONS(83),
    },
    [407] = {
        [sym__simple_statement] = STATE(409),
        [sym_import_statement] = STATE(7),
        [sym_import_from_statement] = STATE(7),
        [sym_print_statement] = STATE(7),
        [sym_expression_statement] = STATE(7),
        [sym_return_statement] = STATE(7),
        [sym_delete_statement] = STATE(7),
        [sym__suite] = STATE(410),
        [sym__expression] = STATE(26),
        [sym_binary_operator] = STATE(19),
        [sym_unary_operator] = STATE(19),
        [sym_subscript] = STATE(19),
        [sym_call] = STATE(19),
        [sym_list] = STATE(19),
        [sym_list_comprehension] = STATE(19),
        [sym_dictionary] = STATE(19),
        [sym_dictionary_comprehension] = STATE(19),
        [sym_set] = STATE(19),
        [sym_set_comprehension] = STATE(19),
        [anon_sym_import] = ACTIONS(93),
        [anon_sym_from] = ACTIONS(95),
        [anon_sym_print] = ACTIONS(97),
        [anon_sym_return] = ACTIONS(99),
        [anon_sym_del] = ACTIONS(101),
        [sym_pass_statement] = ACTIONS(103),
        [sym_break_statement] = ACTIONS(103),
        [sym_continue_statement] = ACTIONS(103),
        [anon_sym_not] = ACTIONS(121),
        [anon_sym_LBRACK] = ACTIONS(123),
        [anon_sym_LBRACE] = ACTIONS(125),
        [sym_string] = ACTIONS(127),
        [sym_number] = ACTIONS(129),
        [sym_identifier] = ACTIONS(131),
        [sym_comment] = ACTIONS(83),
        [sym__indent] = ACTIONS(843),
    },
    [408] = {
        [sym__statement] = STATE(395),
        [sym__simple_statement] = STATE(396),
        [sym_import_statement] = STATE(7),
        [sym_import_from_statement] = STATE(7),
        [sym_print_statement] = STATE(7),
        [sym_expression_statement] = STATE(7),
        [sym_return_statement] = STATE(7),
        [sym_delete_statement] = STATE(7),
        [sym__compound_statement] = STATE(397),
        [sym_if_statement] = STATE(398),
        [sym_for_statement] = STATE(398),
        [sym_while_statement] = STATE(398),
        [sym_try_statement] = STATE(398),
        [sym_with_statement] = STATE(398),
        [sym_function_definition] = STATE(398),
        [sym_class_definition] = STATE(398),
        [sym_decorated_definition] = STATE(398),
        [sym_decorator] = STATE(25),
        [sym__expression] = STATE(26),
        [sym_binary_operator] = STATE(19),
        [sym_unary_operator] = STATE(19),
        [sym_subscript] = STATE(19),
        [sym_call] = STATE(19),
        [sym_list] = STATE(19),
        [sym_list_comprehension] = STATE(19),
        [sym_dictionary] = STATE(19),
        [sym_dictionary_comprehension] = STATE(19),
        [sym_set] = STATE(19),
        [sym_set_comprehension] = STATE(19),
        [aux_sym_module_repeat1] = STATE(412),
        [aux_sym_decorated_definition_repeat1] = STATE(400),
        [anon_sym_import] = ACTIONS(93),
        [anon_sym_from] = ACTIONS(95),
        [anon_sym_print] = ACTIONS(97),
        [anon_sym_return] = ACTIONS(99),
        [anon_sym_del] = ACTIONS(101),
        [sym_pass_statement] = ACTIONS(103),
        [sym_break_statement] = ACTIONS(103),
        [sym_continue_statement] = ACTIONS(103),
        [anon_sym_if] = ACTIONS(791),
        [anon_sym_for] = ACTIONS(793),
        [anon_sym_while] = ACTIONS(795),
        [anon_sym_try] = ACTIONS(797),
        [anon_sym_with] = ACTIONS(799),
        [anon_sym_def] = ACTIONS(801),
        [anon_sym_class] = ACTIONS(803),
        [anon_sym_AT] = ACTIONS(119),
        [anon_sym_not] = ACTIONS(121),
        [anon_sym_LBRACK] = ACTIONS(123),
        [anon_sym_LBRACE] = ACTIONS(125),
        [sym_string] = ACTIONS(127),
        [sym_number] = ACTIONS(129),
        [sym_identifier] = ACTIONS(131),
        [sym_comment] = ACTIONS(83),
        [sym__dedent] = ACTIONS(845),
    },
    [409] = {
        [sym_comment] = ACTIONS(83),
        [sym__newline] = ACTIONS(845),
    },
    [410] = {
        [anon_sym_import] = ACTIONS(809),
        [anon_sym_from] = ACTIONS(809),
        [anon_sym_print] = ACTIONS(809),
        [anon_sym_return] = ACTIONS(809),
        [anon_sym_del] = ACTIONS(809),
        [sym_pass_statement] = ACTIONS(809),
        [sym_break_statement] = ACTIONS(809),
        [sym_continue_statement] = ACTIONS(809),
        [anon_sym_if] = ACTIONS(809),
        [anon_sym_for] = ACTIONS(809),
        [anon_sym_while] = ACTIONS(809),
        [anon_sym_try] = ACTIONS(809),
        [anon_sym_with] = ACTIONS(809),
        [anon_sym_def] = ACTIONS(809),
        [anon_sym_class] = ACTIONS(809),
        [anon_sym_AT] = ACTIONS(807),
        [anon_sym_not] = ACTIONS(809),
        [anon_sym_LBRACK] = ACTIONS(807),
        [anon_sym_LBRACE] = ACTIONS(807),
        [sym_string] = ACTIONS(807),
        [sym_number] = ACTIONS(809),
        [sym_identifier] = ACTIONS(811),
        [sym_comment] = ACTIONS(83),
        [sym__dedent] = ACTIONS(807),
    },
    [411] = {
        [anon_sym_import] = ACTIONS(815),
        [anon_sym_from] = ACTIONS(815),
        [anon_sym_print] = ACTIONS(815),
        [anon_sym_return] = ACTIONS(815),
        [anon_sym_del] = ACTIONS(815),
        [sym_pass_statement] = ACTIONS(815),
        [sym_break_statement] = ACTIONS(815),
        [sym_continue_statement] = ACTIONS(815),
        [anon_sym_if] = ACTIONS(815),
        [anon_sym_elif] = ACTIONS(815),
        [anon_sym_else] = ACTIONS(815),
        [anon_sym_for] = ACTIONS(815),
        [anon_sym_while] = ACTIONS(815),
        [anon_sym_try] = ACTIONS(815),
        [anon_sym_except] = ACTIONS(815),
        [anon_sym_finally] = ACTIONS(815),
        [anon_sym_with] = ACTIONS(815),
        [anon_sym_def] = ACTIONS(815),
        [anon_sym_class] = ACTIONS(815),
        [anon_sym_AT] = ACTIONS(813),
        [anon_sym_not] = ACTIONS(815),
        [anon_sym_LBRACK] = ACTIONS(813),
        [anon_sym_LBRACE] = ACTIONS(813),
        [sym_string] = ACTIONS(813),
        [sym_number] = ACTIONS(815),
        [sym_identifier] = ACTIONS(817),
        [sym_comment] = ACTIONS(83),
        [sym__dedent] = ACTIONS(813),
    },
    [412] = {
        [sym__statement] = STATE(403),
        [sym__simple_statement] = STATE(396),
        [sym_import_statement] = STATE(7),
        [sym_import_from_statement] = STATE(7),
        [sym_print_statement] = STATE(7),
        [sym_expression_statement] = STATE(7),
        [sym_return_statement] = STATE(7),
        [sym_delete_statement] = STATE(7),
        [sym__compound_statement] = STATE(397),
        [sym_if_statement] = STATE(398),
        [sym_for_statement] = STATE(398),
        [sym_while_statement] = STATE(398),
        [sym_try_statement] = STATE(398),
        [sym_with_statement] = STATE(398),
        [sym_function_definition] = STATE(398),
        [sym_class_definition] = STATE(398),
        [sym_decorated_definition] = STATE(398),
        [sym_decorator] = STATE(25),
        [sym__expression] = STATE(26),
        [sym_binary_operator] = STATE(19),
        [sym_unary_operator] = STATE(19),
        [sym_subscript] = STATE(19),
        [sym_call] = STATE(19),
        [sym_list] = STATE(19),
        [sym_list_comprehension] = STATE(19),
        [sym_dictionary] = STATE(19),
        [sym_dictionary_comprehension] = STATE(19),
        [sym_set] = STATE(19),
        [sym_set_comprehension] = STATE(19),
        [aux_sym_decorated_definition_repeat1] = STATE(400),
        [anon_sym_import] = ACTIONS(93),
        [anon_sym_from] = ACTIONS(95),
        [anon_sym_print] = ACTIONS(97),
        [anon_sym_return] = ACTIONS(99),
        [anon_sym_del] = ACTIONS(101),
        [sym_pass_statement] = ACTIONS(103),
        [sym_break_statement] = ACTIONS(103),
        [sym_continue_statement] = ACTIONS(103),
        [anon_sym_if] = ACTIONS(791),
        [anon_sym_for] = ACTIONS(793),
        [anon_sym_while] = ACTIONS(795),
        [anon_sym_try] = ACTIONS(797),
        [anon_sym_with] = ACTIONS(799),
        [anon_sym_def] = ACTIONS(801),
        [anon_sym_class] = ACTIONS(803),
        [anon_sym_AT] = ACTIONS(119),
        [anon_sym_not] = ACTIONS(121),
        [anon_sym_LBRACK] = ACTIONS(123),
        [anon_sym_LBRACE] = ACTIONS(125),
        [sym_string] = ACTIONS(127),
        [sym_number] = ACTIONS(129),
        [sym_identifier] = ACTIONS(131),
        [sym_comment] = ACTIONS(83),
        [sym__dedent] = ACTIONS(847),
    },
    [413] = {
        [anon_sym_import] = ACTIONS(835),
        [anon_sym_from] = ACTIONS(835),
        [anon_sym_print] = ACTIONS(835),
        [anon_sym_return] = ACTIONS(835),
        [anon_sym_del] = ACTIONS(835),
        [sym_pass_statement] = ACTIONS(835),
        [sym_break_statement] = ACTIONS(835),
        [sym_continue_statement] = ACTIONS(835),
        [anon_sym_if] = ACTIONS(835),
        [anon_sym_elif] = ACTIONS(835),
        [anon_sym_else] = ACTIONS(835),
        [anon_sym_for] = ACTIONS(835),
        [anon_sym_while] = ACTIONS(835),
        [anon_sym_try] = ACTIONS(835),
        [anon_sym_except] = ACTIONS(835),
        [anon_sym_finally] = ACTIONS(835),
        [anon_sym_with] = ACTIONS(835),
        [anon_sym_def] = ACTIONS(835),
        [anon_sym_class] = ACTIONS(835),
        [anon_sym_AT] = ACTIONS(833),
        [anon_sym_not] = ACTIONS(835),
        [anon_sym_LBRACK] = ACTIONS(833),
        [anon_sym_LBRACE] = ACTIONS(833),
        [sym_string] = ACTIONS(833),
        [sym_number] = ACTIONS(835),
        [sym_identifier] = ACTIONS(837),
        [sym_comment] = ACTIONS(83),
        [sym__dedent] = ACTIONS(833),
    },
    [414] = {
        [anon_sym_RPAREN] = ACTIONS(849),
        [sym_comment] = ACTIONS(83),
    },
    [415] = {
        [aux_sym_print_statement_repeat1] = STATE(416),
        [anon_sym_LPAREN] = ACTIONS(265),
        [anon_sym_RPAREN] = ACTIONS(495),
        [anon_sym_COMMA] = ACTIONS(763),
        [anon_sym_STAR] = ACTIONS(333),
        [anon_sym_PLUS] = ACTIONS(335),
        [anon_sym_DASH] = ACTIONS(335),
        [anon_sym_SLASH] = ACTIONS(337),
        [anon_sym_STAR_STAR] = ACTIONS(339),
        [anon_sym_PIPE] = ACTIONS(341),
        [anon_sym_AMP] = ACTIONS(343),
        [anon_sym_CARET] = ACTIONS(345),
        [anon_sym_LT_LT] = ACTIONS(335),
        [anon_sym_GT_GT] = ACTIONS(335),
        [anon_sym_and] = ACTIONS(343),
        [anon_sym_or] = ACTIONS(341),
        [anon_sym_LBRACK] = ACTIONS(281),
        [sym_comment] = ACTIONS(83),
    },
    [416] = {
        [anon_sym_RPAREN] = ACTIONS(511),
        [anon_sym_COMMA] = ACTIONS(769),
        [sym_comment] = ACTIONS(83),
    },
    [417] = {
        [anon_sym_COLON] = ACTIONS(851),
        [sym_comment] = ACTIONS(83),
    },
    [418] = {
        [sym__simple_statement] = STATE(409),
        [sym_import_statement] = STATE(7),
        [sym_import_from_statement] = STATE(7),
        [sym_print_statement] = STATE(7),
        [sym_expression_statement] = STATE(7),
        [sym_return_statement] = STATE(7),
        [sym_delete_statement] = STATE(7),
        [sym__suite] = STATE(419),
        [sym__expression] = STATE(26),
        [sym_binary_operator] = STATE(19),
        [sym_unary_operator] = STATE(19),
        [sym_subscript] = STATE(19),
        [sym_call] = STATE(19),
        [sym_list] = STATE(19),
        [sym_list_comprehension] = STATE(19),
        [sym_dictionary] = STATE(19),
        [sym_dictionary_comprehension] = STATE(19),
        [sym_set] = STATE(19),
        [sym_set_comprehension] = STATE(19),
        [anon_sym_import] = ACTIONS(93),
        [anon_sym_from] = ACTIONS(95),
        [anon_sym_print] = ACTIONS(97),
        [anon_sym_return] = ACTIONS(99),
        [anon_sym_del] = ACTIONS(101),
        [sym_pass_statement] = ACTIONS(103),
        [sym_break_statement] = ACTIONS(103),
        [sym_continue_statement] = ACTIONS(103),
        [anon_sym_not] = ACTIONS(121),
        [anon_sym_LBRACK] = ACTIONS(123),
        [anon_sym_LBRACE] = ACTIONS(125),
        [sym_string] = ACTIONS(127),
        [sym_number] = ACTIONS(129),
        [sym_identifier] = ACTIONS(131),
        [sym_comment] = ACTIONS(83),
        [sym__indent] = ACTIONS(843),
    },
    [419] = {
        [anon_sym_import] = ACTIONS(853),
        [anon_sym_from] = ACTIONS(853),
        [anon_sym_print] = ACTIONS(853),
        [anon_sym_return] = ACTIONS(853),
        [anon_sym_del] = ACTIONS(853),
        [sym_pass_statement] = ACTIONS(853),
        [sym_break_statement] = ACTIONS(853),
        [sym_continue_statement] = ACTIONS(853),
        [anon_sym_if] = ACTIONS(853),
        [anon_sym_for] = ACTIONS(853),
        [anon_sym_while] = ACTIONS(853),
        [anon_sym_try] = ACTIONS(853),
        [anon_sym_with] = ACTIONS(853),
        [anon_sym_def] = ACTIONS(853),
        [anon_sym_class] = ACTIONS(853),
        [anon_sym_AT] = ACTIONS(855),
        [anon_sym_not] = ACTIONS(853),
        [anon_sym_LBRACK] = ACTIONS(855),
        [anon_sym_LBRACE] = ACTIONS(855),
        [sym_string] = ACTIONS(855),
        [sym_number] = ACTIONS(853),
        [sym_identifier] = ACTIONS(857),
        [sym_comment] = ACTIONS(83),
        [sym__dedent] = ACTIONS(855),
    },
    [420] = {
        [sym_parameters] = STATE(422),
        [anon_sym_LPAREN] = ACTIONS(859),
        [sym_comment] = ACTIONS(83),
    },
    [421] = {
        [sym_default_parameter] = STATE(428),
        [sym_list_splat_parameter] = STATE(429),
        [sym_dictionary_splat_parameter] = STATE(430),
        [aux_sym_parameters_repeat1] = STATE(431),
        [anon_sym_RPAREN] = ACTIONS(861),
        [anon_sym_STAR] = ACTIONS(863),
        [sym_identifier] = ACTIONS(865),
        [sym_comment] = ACTIONS(83),
    },
    [422] = {
        [anon_sym_COLON] = ACTIONS(867),
        [sym_comment] = ACTIONS(83),
    },
    [423] = {
        [sym__simple_statement] = STATE(409),
        [sym_import_statement] = STATE(7),
        [sym_import_from_statement] = STATE(7),
        [sym_print_statement] = STATE(7),
        [sym_expression_statement] = STATE(7),
        [sym_return_statement] = STATE(7),
        [sym_delete_statement] = STATE(7),
        [sym__suite] = STATE(424),
        [sym__expression] = STATE(26),
        [sym_binary_operator] = STATE(19),
        [sym_unary_operator] = STATE(19),
        [sym_subscript] = STATE(19),
        [sym_call] = STATE(19),
        [sym_list] = STATE(19),
        [sym_list_comprehension] = STATE(19),
        [sym_dictionary] = STATE(19),
        [sym_dictionary_comprehension] = STATE(19),
        [sym_set] = STATE(19),
        [sym_set_comprehension] = STATE(19),
        [anon_sym_import] = ACTIONS(93),
        [anon_sym_from] = ACTIONS(95),
        [anon_sym_print] = ACTIONS(97),
        [anon_sym_return] = ACTIONS(99),
        [anon_sym_del] = ACTIONS(101),
        [sym_pass_statement] = ACTIONS(103),
        [sym_break_statement] = ACTIONS(103),
        [sym_continue_statement] = ACTIONS(103),
        [anon_sym_not] = ACTIONS(121),
        [anon_sym_LBRACK] = ACTIONS(123),
        [anon_sym_LBRACE] = ACTIONS(125),
        [sym_string] = ACTIONS(127),
        [sym_number] = ACTIONS(129),
        [sym_identifier] = ACTIONS(131),
        [sym_comment] = ACTIONS(83),
        [sym__indent] = ACTIONS(843),
    },
    [424] = {
        [anon_sym_import] = ACTIONS(869),
        [anon_sym_from] = ACTIONS(869),
        [anon_sym_print] = ACTIONS(869),
        [anon_sym_return] = ACTIONS(869),
        [anon_sym_del] = ACTIONS(869),
        [sym_pass_statement] = ACTIONS(869),
        [sym_break_statement] = ACTIONS(869),
        [sym_continue_statement] = ACTIONS(869),
        [anon_sym_if] = ACTIONS(869),
        [anon_sym_for] = ACTIONS(869),
        [anon_sym_while] = ACTIONS(869),
        [anon_sym_try] = ACTIONS(869),
        [anon_sym_with] = ACTIONS(869),
        [anon_sym_def] = ACTIONS(869),
        [anon_sym_class] = ACTIONS(869),
        [anon_sym_AT] = ACTIONS(871),
        [anon_sym_not] = ACTIONS(869),
        [anon_sym_LBRACK] = ACTIONS(871),
        [anon_sym_LBRACE] = ACTIONS(871),
        [sym_string] = ACTIONS(871),
        [sym_number] = ACTIONS(869),
        [sym_identifier] = ACTIONS(873),
        [sym_comment] = ACTIONS(83),
        [sym__dedent] = ACTIONS(871),
    },
    [425] = {
        [anon_sym_COLON] = ACTIONS(875),
        [sym_comment] = ACTIONS(83),
    },
    [426] = {
        [anon_sym_STAR] = ACTIONS(877),
        [sym_identifier] = ACTIONS(879),
        [sym_comment] = ACTIONS(83),
    },
    [427] = {
        [anon_sym_RPAREN] = ACTIONS(881),
        [anon_sym_COMMA] = ACTIONS(883),
        [anon_sym_EQ] = ACTIONS(885),
        [sym_comment] = ACTIONS(83),
    },
    [428] = {
        [anon_sym_RPAREN] = ACTIONS(881),
        [anon_sym_COMMA] = ACTIONS(883),
        [sym_comment] = ACTIONS(83),
    },
    [429] = {
        [anon_sym_RPAREN] = ACTIONS(881),
        [anon_sym_COMMA] = ACTIONS(887),
        [sym_comment] = ACTIONS(83),
    },
    [430] = {
        [anon_sym_RPAREN] = ACTIONS(881),
        [sym_comment] = ACTIONS(83),
    },
    [431] = {
        [sym_default_parameter] = STATE(433),
        [sym_list_splat_parameter] = STATE(434),
        [sym_dictionary_splat_parameter] = STATE(435),
        [anon_sym_STAR] = ACTIONS(863),
        [sym_identifier] = ACTIONS(889),
        [sym_comment] = ACTIONS(83),
    },
    [432] = {
        [anon_sym_RPAREN] = ACTIONS(891),
        [anon_sym_COMMA] = ACTIONS(893),
        [anon_sym_EQ] = ACTIONS(885),
        [sym_comment] = ACTIONS(83),
    },
    [433] = {
        [anon_sym_RPAREN] = ACTIONS(891),
        [anon_sym_COMMA] = ACTIONS(893),
        [sym_comment] = ACTIONS(83),
    },
    [434] = {
        [anon_sym_RPAREN] = ACTIONS(891),
        [anon_sym_COMMA] = ACTIONS(895),
        [sym_comment] = ACTIONS(83),
    },
    [435] = {
        [anon_sym_RPAREN] = ACTIONS(891),
        [sym_comment] = ACTIONS(83),
    },
    [436] = {
        [anon_sym_COLON] = ACTIONS(897),
        [sym_comment] = ACTIONS(83),
    },
    [437] = {
        [sym_dictionary_splat_parameter] = STATE(439),
        [anon_sym_STAR] = ACTIONS(899),
        [sym_comment] = ACTIONS(83),
    },
    [438] = {
        [anon_sym_STAR] = ACTIONS(877),
        [sym_comment] = ACTIONS(83),
    },
    [439] = {
        [anon_sym_RPAREN] = ACTIONS(901),
        [sym_comment] = ACTIONS(83),
    },
    [440] = {
        [anon_sym_COLON] = ACTIONS(903),
        [sym_comment] = ACTIONS(83),
    },
    [441] = {
        [sym_identifier] = ACTIONS(905),
        [sym_comment] = ACTIONS(83),
    },
    [442] = {
        [anon_sym_RPAREN] = ACTIONS(907),
        [sym_comment] = ACTIONS(83),
    },
    [443] = {
        [anon_sym_RPAREN] = ACTIONS(909),
        [anon_sym_STAR] = ACTIONS(911),
        [sym_identifier] = ACTIONS(913),
        [sym_comment] = ACTIONS(83),
    },
    [444] = {
        [anon_sym_COLON] = ACTIONS(915),
        [sym_comment] = ACTIONS(83),
    },
    [445] = {
        [sym__expression] = STATE(446),
        [sym_binary_operator] = STATE(45),
        [sym_unary_operator] = STATE(45),
        [sym_subscript] = STATE(45),
        [sym_call] = STATE(45),
        [sym_list] = STATE(45),
        [sym_list_comprehension] = STATE(45),
        [sym_dictionary] = STATE(45),
        [sym_dictionary_comprehension] = STATE(45),
        [sym_set] = STATE(45),
        [sym_set_comprehension] = STATE(45),
        [anon_sym_not] = ACTIONS(249),
        [anon_sym_LBRACK] = ACTIONS(145),
        [anon_sym_LBRACE] = ACTIONS(147),
        [sym_string] = ACTIONS(149),
        [sym_number] = ACTIONS(151),
        [sym_identifier] = ACTIONS(153),
        [sym_comment] = ACTIONS(83),
    },
    [446] = {
        [anon_sym_LPAREN] = ACTIONS(265),
        [anon_sym_RPAREN] = ACTIONS(917),
        [anon_sym_COMMA] = ACTIONS(917),
        [anon_sym_STAR] = ACTIONS(333),
        [anon_sym_PLUS] = ACTIONS(335),
        [anon_sym_DASH] = ACTIONS(335),
        [anon_sym_SLASH] = ACTIONS(337),
        [anon_sym_STAR_STAR] = ACTIONS(339),
        [anon_sym_PIPE] = ACTIONS(341),
        [anon_sym_AMP] = ACTIONS(343),
        [anon_sym_CARET] = ACTIONS(345),
        [anon_sym_LT_LT] = ACTIONS(335),
        [anon_sym_GT_GT] = ACTIONS(335),
        [anon_sym_and] = ACTIONS(343),
        [anon_sym_or] = ACTIONS(341),
        [anon_sym_LBRACK] = ACTIONS(281),
        [sym_comment] = ACTIONS(83),
    },
    [447] = {
        [anon_sym_COLON] = ACTIONS(919),
        [sym_comment] = ACTIONS(83),
    },
    [448] = {
        [sym_dictionary_splat_parameter] = STATE(449),
        [anon_sym_STAR] = ACTIONS(899),
        [sym_comment] = ACTIONS(83),
    },
    [449] = {
        [anon_sym_RPAREN] = ACTIONS(909),
        [sym_comment] = ACTIONS(83),
    },
    [450] = {
        [anon_sym_RPAREN] = ACTIONS(891),
        [anon_sym_STAR] = ACTIONS(921),
        [sym_identifier] = ACTIONS(923),
        [sym_comment] = ACTIONS(83),
    },
    [451] = {
        [anon_sym_RPAREN] = ACTIONS(925),
        [anon_sym_COMMA] = ACTIONS(925),
        [sym_comment] = ACTIONS(83),
    },
    [452] = {
        [sym__expression] = STATE(276),
        [sym_binary_operator] = STATE(45),
        [sym_unary_operator] = STATE(45),
        [sym_subscript] = STATE(45),
        [sym_call] = STATE(45),
        [sym_list] = STATE(45),
        [sym_list_comprehension] = STATE(45),
        [sym_dictionary] = STATE(45),
        [sym_dictionary_comprehension] = STATE(45),
        [sym_set] = STATE(45),
        [sym_set_comprehension] = STATE(45),
        [anon_sym_not] = ACTIONS(159),
        [anon_sym_LBRACK] = ACTIONS(145),
        [anon_sym_LBRACE] = ACTIONS(147),
        [sym_string] = ACTIONS(149),
        [sym_number] = ACTIONS(151),
        [sym_identifier] = ACTIONS(153),
        [sym_comment] = ACTIONS(83),
    },
    [453] = {
        [aux_sym_with_statement_repeat1] = STATE(482),
        [anon_sym_COMMA] = ACTIONS(927),
        [anon_sym_COLON] = ACTIONS(929),
        [sym_comment] = ACTIONS(83),
    },
    [454] = {
        [anon_sym_LPAREN] = ACTIONS(265),
        [anon_sym_COMMA] = ACTIONS(931),
        [anon_sym_as] = ACTIONS(933),
        [anon_sym_STAR] = ACTIONS(935),
        [anon_sym_COLON] = ACTIONS(931),
        [anon_sym_PLUS] = ACTIONS(937),
        [anon_sym_DASH] = ACTIONS(937),
        [anon_sym_SLASH] = ACTIONS(939),
        [anon_sym_STAR_STAR] = ACTIONS(941),
        [anon_sym_PIPE] = ACTIONS(943),
        [anon_sym_AMP] = ACTIONS(945),
        [anon_sym_CARET] = ACTIONS(947),
        [anon_sym_LT_LT] = ACTIONS(937),
        [anon_sym_GT_GT] = ACTIONS(937),
        [anon_sym_and] = ACTIONS(945),
        [anon_sym_or] = ACTIONS(943),
        [anon_sym_LBRACK] = ACTIONS(281),
        [sym_comment] = ACTIONS(83),
    },
    [455] = {
        [sym__expression] = STATE(468),
        [sym_binary_operator] = STATE(45),
        [sym_unary_operator] = STATE(45),
        [sym_subscript] = STATE(45),
        [sym_call] = STATE(45),
        [sym_list] = STATE(45),
        [sym_list_comprehension] = STATE(45),
        [sym_dictionary] = STATE(45),
        [sym_dictionary_comprehension] = STATE(45),
        [sym_set] = STATE(45),
        [sym_set_comprehension] = STATE(45),
        [anon_sym_not] = ACTIONS(949),
        [anon_sym_LBRACK] = ACTIONS(145),
        [anon_sym_LBRACE] = ACTIONS(147),
        [sym_string] = ACTIONS(149),
        [sym_number] = ACTIONS(151),
        [sym_identifier] = ACTIONS(153),
        [sym_comment] = ACTIONS(83),
    },
    [456] = {
        [sym__expression] = STATE(466),
        [sym_binary_operator] = STATE(45),
        [sym_unary_operator] = STATE(45),
        [sym_subscript] = STATE(45),
        [sym_call] = STATE(45),
        [sym_list] = STATE(45),
        [sym_list_comprehension] = STATE(45),
        [sym_dictionary] = STATE(45),
        [sym_dictionary_comprehension] = STATE(45),
        [sym_set] = STATE(45),
        [sym_set_comprehension] = STATE(45),
        [anon_sym_not] = ACTIONS(159),
        [anon_sym_LBRACK] = ACTIONS(145),
        [anon_sym_LBRACE] = ACTIONS(147),
        [sym_string] = ACTIONS(149),
        [sym_number] = ACTIONS(151),
        [sym_identifier] = ACTIONS(153),
        [sym_comment] = ACTIONS(83),
    },
    [457] = {
        [sym__expression] = STATE(464),
        [sym_binary_operator] = STATE(45),
        [sym_unary_operator] = STATE(45),
        [sym_subscript] = STATE(45),
        [sym_call] = STATE(45),
        [sym_list] = STATE(45),
        [sym_list_comprehension] = STATE(45),
        [sym_dictionary] = STATE(45),
        [sym_dictionary_comprehension] = STATE(45),
        [sym_set] = STATE(45),
        [sym_set_comprehension] = STATE(45),
        [anon_sym_not] = ACTIONS(159),
        [anon_sym_LBRACK] = ACTIONS(145),
        [anon_sym_LBRACE] = ACTIONS(147),
        [sym_string] = ACTIONS(149),
        [sym_number] = ACTIONS(151),
        [sym_identifier] = ACTIONS(153),
        [sym_comment] = ACTIONS(83),
    },
    [458] = {
        [sym__expression] = STATE(77),
        [sym_binary_operator] = STATE(45),
        [sym_unary_operator] = STATE(45),
        [sym_subscript] = STATE(45),
        [sym_call] = STATE(45),
        [sym_list] = STATE(45),
        [sym_list_comprehension] = STATE(45),
        [sym_dictionary] = STATE(45),
        [sym_dictionary_comprehension] = STATE(45),
        [sym_set] = STATE(45),
        [sym_set_comprehension] = STATE(45),
        [anon_sym_not] = ACTIONS(159),
        [anon_sym_LBRACK] = ACTIONS(145),
        [anon_sym_LBRACE] = ACTIONS(147),
        [sym_string] = ACTIONS(149),
        [sym_number] = ACTIONS(151),
        [sym_identifier] = ACTIONS(153),
        [sym_comment] = ACTIONS(83),
    },
    [459] = {
        [sym__expression] = STATE(462),
        [sym_binary_operator] = STATE(45),
        [sym_unary_operator] = STATE(45),
        [sym_subscript] = STATE(45),
        [sym_call] = STATE(45),
        [sym_list] = STATE(45),
        [sym_list_comprehension] = STATE(45),
        [sym_dictionary] = STATE(45),
        [sym_dictionary_comprehension] = STATE(45),
        [sym_set] = STATE(45),
        [sym_set_comprehension] = STATE(45),
        [anon_sym_not] = ACTIONS(159),
        [anon_sym_LBRACK] = ACTIONS(145),
        [anon_sym_LBRACE] = ACTIONS(147),
        [sym_string] = ACTIONS(149),
        [sym_number] = ACTIONS(151),
        [sym_identifier] = ACTIONS(153),
        [sym_comment] = ACTIONS(83),
    },
    [460] = {
        [sym__expression] = STATE(463),
        [sym_binary_operator] = STATE(45),
        [sym_unary_operator] = STATE(45),
        [sym_subscript] = STATE(45),
        [sym_call] = STATE(45),
        [sym_list] = STATE(45),
        [sym_list_comprehension] = STATE(45),
        [sym_dictionary] = STATE(45),
        [sym_dictionary_comprehension] = STATE(45),
        [sym_set] = STATE(45),
        [sym_set_comprehension] = STATE(45),
        [anon_sym_not] = ACTIONS(159),
        [anon_sym_LBRACK] = ACTIONS(145),
        [anon_sym_LBRACE] = ACTIONS(147),
        [sym_string] = ACTIONS(149),
        [sym_number] = ACTIONS(151),
        [sym_identifier] = ACTIONS(153),
        [sym_comment] = ACTIONS(83),
    },
    [461] = {
        [sym__expression] = STATE(465),
        [sym_binary_operator] = STATE(45),
        [sym_unary_operator] = STATE(45),
        [sym_subscript] = STATE(45),
        [sym_call] = STATE(45),
        [sym_list] = STATE(45),
        [sym_list_comprehension] = STATE(45),
        [sym_dictionary] = STATE(45),
        [sym_dictionary_comprehension] = STATE(45),
        [sym_set] = STATE(45),
        [sym_set_comprehension] = STATE(45),
        [anon_sym_not] = ACTIONS(159),
        [anon_sym_LBRACK] = ACTIONS(145),
        [anon_sym_LBRACE] = ACTIONS(147),
        [sym_string] = ACTIONS(149),
        [sym_number] = ACTIONS(151),
        [sym_identifier] = ACTIONS(153),
        [sym_comment] = ACTIONS(83),
    },
    [462] = {
        [anon_sym_LPAREN] = ACTIONS(265),
        [anon_sym_COMMA] = ACTIONS(321),
        [anon_sym_as] = ACTIONS(321),
        [anon_sym_STAR] = ACTIONS(935),
        [anon_sym_COLON] = ACTIONS(321),
        [anon_sym_PLUS] = ACTIONS(937),
        [anon_sym_DASH] = ACTIONS(937),
        [anon_sym_SLASH] = ACTIONS(939),
        [anon_sym_STAR_STAR] = ACTIONS(941),
        [anon_sym_PIPE] = ACTIONS(321),
        [anon_sym_AMP] = ACTIONS(945),
        [anon_sym_CARET] = ACTIONS(947),
        [anon_sym_LT_LT] = ACTIONS(937),
        [anon_sym_GT_GT] = ACTIONS(937),
        [anon_sym_and] = ACTIONS(945),
        [anon_sym_or] = ACTIONS(321),
        [anon_sym_LBRACK] = ACTIONS(321),
        [sym_comment] = ACTIONS(83),
    },
    [463] = {
        [anon_sym_LPAREN] = ACTIONS(265),
        [anon_sym_COMMA] = ACTIONS(321),
        [anon_sym_as] = ACTIONS(321),
        [anon_sym_STAR] = ACTIONS(935),
        [anon_sym_COLON] = ACTIONS(321),
        [anon_sym_PLUS] = ACTIONS(937),
        [anon_sym_DASH] = ACTIONS(937),
        [anon_sym_SLASH] = ACTIONS(939),
        [anon_sym_STAR_STAR] = ACTIONS(941),
        [anon_sym_PIPE] = ACTIONS(321),
        [anon_sym_AMP] = ACTIONS(321),
        [anon_sym_CARET] = ACTIONS(947),
        [anon_sym_LT_LT] = ACTIONS(937),
        [anon_sym_GT_GT] = ACTIONS(937),
        [anon_sym_and] = ACTIONS(321),
        [anon_sym_or] = ACTIONS(321),
        [anon_sym_LBRACK] = ACTIONS(321),
        [sym_comment] = ACTIONS(83),
    },
    [464] = {
        [anon_sym_LPAREN] = ACTIONS(265),
        [anon_sym_COMMA] = ACTIONS(321),
        [anon_sym_as] = ACTIONS(321),
        [anon_sym_STAR] = ACTIONS(935),
        [anon_sym_COLON] = ACTIONS(321),
        [anon_sym_PLUS] = ACTIONS(321),
        [anon_sym_DASH] = ACTIONS(321),
        [anon_sym_SLASH] = ACTIONS(939),
        [anon_sym_STAR_STAR] = ACTIONS(941),
        [anon_sym_PIPE] = ACTIONS(321),
        [anon_sym_AMP] = ACTIONS(321),
        [anon_sym_CARET] = ACTIONS(321),
        [anon_sym_LT_LT] = ACTIONS(321),
        [anon_sym_GT_GT] = ACTIONS(321),
        [anon_sym_and] = ACTIONS(321),
        [anon_sym_or] = ACTIONS(321),
        [anon_sym_LBRACK] = ACTIONS(321),
        [sym_comment] = ACTIONS(83),
    },
    [465] = {
        [anon_sym_LPAREN] = ACTIONS(265),
        [anon_sym_COMMA] = ACTIONS(321),
        [anon_sym_as] = ACTIONS(321),
        [anon_sym_STAR] = ACTIONS(935),
        [anon_sym_COLON] = ACTIONS(321),
        [anon_sym_PLUS] = ACTIONS(937),
        [anon_sym_DASH] = ACTIONS(937),
        [anon_sym_SLASH] = ACTIONS(939),
        [anon_sym_STAR_STAR] = ACTIONS(941),
        [anon_sym_PIPE] = ACTIONS(321),
        [anon_sym_AMP] = ACTIONS(321),
        [anon_sym_CARET] = ACTIONS(321),
        [anon_sym_LT_LT] = ACTIONS(937),
        [anon_sym_GT_GT] = ACTIONS(937),
        [anon_sym_and] = ACTIONS(321),
        [anon_sym_or] = ACTIONS(321),
        [anon_sym_LBRACK] = ACTIONS(321),
        [sym_comment] = ACTIONS(83),
    },
    [466] = {
        [anon_sym_LPAREN] = ACTIONS(265),
        [anon_sym_COMMA] = ACTIONS(321),
        [anon_sym_as] = ACTIONS(321),
        [anon_sym_STAR] = ACTIONS(323),
        [anon_sym_COLON] = ACTIONS(321),
        [anon_sym_PLUS] = ACTIONS(321),
        [anon_sym_DASH] = ACTIONS(321),
        [anon_sym_SLASH] = ACTIONS(321),
        [anon_sym_STAR_STAR] = ACTIONS(941),
        [anon_sym_PIPE] = ACTIONS(321),
        [anon_sym_AMP] = ACTIONS(321),
        [anon_sym_CARET] = ACTIONS(321),
        [anon_sym_LT_LT] = ACTIONS(321),
        [anon_sym_GT_GT] = ACTIONS(321),
        [anon_sym_and] = ACTIONS(321),
        [anon_sym_or] = ACTIONS(321),
        [anon_sym_LBRACK] = ACTIONS(321),
        [sym_comment] = ACTIONS(83),
    },
    [467] = {
        [sym__expression] = STATE(276),
        [sym_binary_operator] = STATE(45),
        [sym_unary_operator] = STATE(45),
        [sym_subscript] = STATE(45),
        [sym_call] = STATE(45),
        [sym_list] = STATE(45),
        [sym_list_comprehension] = STATE(45),
        [sym_dictionary] = STATE(45),
        [sym_dictionary_comprehension] = STATE(45),
        [sym_set] = STATE(45),
        [sym_set_comprehension] = STATE(45),
        [anon_sym_not] = ACTIONS(949),
        [anon_sym_LBRACK] = ACTIONS(145),
        [anon_sym_LBRACE] = ACTIONS(147),
        [sym_string] = ACTIONS(149),
        [sym_number] = ACTIONS(151),
        [sym_identifier] = ACTIONS(153),
        [sym_comment] = ACTIONS(83),
    },
    [468] = {
        [anon_sym_LPAREN] = ACTIONS(265),
        [anon_sym_COMMA] = ACTIONS(951),
        [anon_sym_STAR] = ACTIONS(953),
        [anon_sym_COLON] = ACTIONS(951),
        [anon_sym_PLUS] = ACTIONS(955),
        [anon_sym_DASH] = ACTIONS(955),
        [anon_sym_SLASH] = ACTIONS(957),
        [anon_sym_STAR_STAR] = ACTIONS(959),
        [anon_sym_PIPE] = ACTIONS(961),
        [anon_sym_AMP] = ACTIONS(963),
        [anon_sym_CARET] = ACTIONS(965),
        [anon_sym_LT_LT] = ACTIONS(955),
        [anon_sym_GT_GT] = ACTIONS(955),
        [anon_sym_and] = ACTIONS(963),
        [anon_sym_or] = ACTIONS(961),
        [anon_sym_LBRACK] = ACTIONS(281),
        [sym_comment] = ACTIONS(83),
    },
    [469] = {
        [sym__expression] = STATE(479),
        [sym_binary_operator] = STATE(45),
        [sym_unary_operator] = STATE(45),
        [sym_subscript] = STATE(45),
        [sym_call] = STATE(45),
        [sym_list] = STATE(45),
        [sym_list_comprehension] = STATE(45),
        [sym_dictionary] = STATE(45),
        [sym_dictionary_comprehension] = STATE(45),
        [sym_set] = STATE(45),
        [sym_set_comprehension] = STATE(45),
        [anon_sym_not] = ACTIONS(949),
        [anon_sym_LBRACK] = ACTIONS(145),
        [anon_sym_LBRACE] = ACTIONS(147),
        [sym_string] = ACTIONS(149),
        [sym_number] = ACTIONS(151),
        [sym_identifier] = ACTIONS(153),
        [sym_comment] = ACTIONS(83),
    },
    [470] = {
        [sym__expression] = STATE(477),
        [sym_binary_operator] = STATE(45),
        [sym_unary_operator] = STATE(45),
        [sym_subscript] = STATE(45),
        [sym_call] = STATE(45),
        [sym_list] = STATE(45),
        [sym_list_comprehension] = STATE(45),
        [sym_dictionary] = STATE(45),
        [sym_dictionary_comprehension] = STATE(45),
        [sym_set] = STATE(45),
        [sym_set_comprehension] = STATE(45),
        [anon_sym_not] = ACTIONS(949),
        [anon_sym_LBRACK] = ACTIONS(145),
        [anon_sym_LBRACE] = ACTIONS(147),
        [sym_string] = ACTIONS(149),
        [sym_number] = ACTIONS(151),
        [sym_identifier] = ACTIONS(153),
        [sym_comment] = ACTIONS(83),
    },
    [471] = {
        [sym__expression] = STATE(77),
        [sym_binary_operator] = STATE(45),
        [sym_unary_operator] = STATE(45),
        [sym_subscript] = STATE(45),
        [sym_call] = STATE(45),
        [sym_list] = STATE(45),
        [sym_list_comprehension] = STATE(45),
        [sym_dictionary] = STATE(45),
        [sym_dictionary_comprehension] = STATE(45),
        [sym_set] = STATE(45),
        [sym_set_comprehension] = STATE(45),
        [anon_sym_not] = ACTIONS(949),
        [anon_sym_LBRACK] = ACTIONS(145),
        [anon_sym_LBRACE] = ACTIONS(147),
        [sym_string] = ACTIONS(149),
        [sym_number] = ACTIONS(151),
        [sym_identifier] = ACTIONS(153),
        [sym_comment] = ACTIONS(83),
    },
    [472] = {
        [sym__expression] = STATE(475),
        [sym_binary_operator] = STATE(45),
        [sym_unary_operator] = STATE(45),
        [sym_subscript] = STATE(45),
        [sym_call] = STATE(45),
        [sym_list] = STATE(45),
        [sym_list_comprehension] = STATE(45),
        [sym_dictionary] = STATE(45),
        [sym_dictionary_comprehension] = STATE(45),
        [sym_set] = STATE(45),
        [sym_set_comprehension] = STATE(45),
        [anon_sym_not] = ACTIONS(949),
        [anon_sym_LBRACK] = ACTIONS(145),
        [anon_sym_LBRACE] = ACTIONS(147),
        [sym_string] = ACTIONS(149),
        [sym_number] = ACTIONS(151),
        [sym_identifier] = ACTIONS(153),
        [sym_comment] = ACTIONS(83),
    },
    [473] = {
        [sym__expression] = STATE(476),
        [sym_binary_operator] = STATE(45),
        [sym_unary_operator] = STATE(45),
        [sym_subscript] = STATE(45),
        [sym_call] = STATE(45),
        [sym_list] = STATE(45),
        [sym_list_comprehension] = STATE(45),
        [sym_dictionary] = STATE(45),
        [sym_dictionary_comprehension] = STATE(45),
        [sym_set] = STATE(45),
        [sym_set_comprehension] = STATE(45),
        [anon_sym_not] = ACTIONS(949),
        [anon_sym_LBRACK] = ACTIONS(145),
        [anon_sym_LBRACE] = ACTIONS(147),
        [sym_string] = ACTIONS(149),
        [sym_number] = ACTIONS(151),
        [sym_identifier] = ACTIONS(153),
        [sym_comment] = ACTIONS(83),
    },
    [474] = {
        [sym__expression] = STATE(478),
        [sym_binary_operator] = STATE(45),
        [sym_unary_operator] = STATE(45),
        [sym_subscript] = STATE(45),
        [sym_call] = STATE(45),
        [sym_list] = STATE(45),
        [sym_list_comprehension] = STATE(45),
        [sym_dictionary] = STATE(45),
        [sym_dictionary_comprehension] = STATE(45),
        [sym_set] = STATE(45),
        [sym_set_comprehension] = STATE(45),
        [anon_sym_not] = ACTIONS(949),
        [anon_sym_LBRACK] = ACTIONS(145),
        [anon_sym_LBRACE] = ACTIONS(147),
        [sym_string] = ACTIONS(149),
        [sym_number] = ACTIONS(151),
        [sym_identifier] = ACTIONS(153),
        [sym_comment] = ACTIONS(83),
    },
    [475] = {
        [anon_sym_LPAREN] = ACTIONS(265),
        [anon_sym_COMMA] = ACTIONS(321),
        [anon_sym_STAR] = ACTIONS(953),
        [anon_sym_COLON] = ACTIONS(321),
        [anon_sym_PLUS] = ACTIONS(955),
        [anon_sym_DASH] = ACTIONS(955),
        [anon_sym_SLASH] = ACTIONS(957),
        [anon_sym_STAR_STAR] = ACTIONS(959),
        [anon_sym_PIPE] = ACTIONS(321),
        [anon_sym_AMP] = ACTIONS(963),
        [anon_sym_CARET] = ACTIONS(965),
        [anon_sym_LT_LT] = ACTIONS(955),
        [anon_sym_GT_GT] = ACTIONS(955),
        [anon_sym_and] = ACTIONS(963),
        [anon_sym_or] = ACTIONS(321),
        [anon_sym_LBRACK] = ACTIONS(321),
        [sym_comment] = ACTIONS(83),
    },
    [476] = {
        [anon_sym_LPAREN] = ACTIONS(265),
        [anon_sym_COMMA] = ACTIONS(321),
        [anon_sym_STAR] = ACTIONS(953),
        [anon_sym_COLON] = ACTIONS(321),
        [anon_sym_PLUS] = ACTIONS(955),
        [anon_sym_DASH] = ACTIONS(955),
        [anon_sym_SLASH] = ACTIONS(957),
        [anon_sym_STAR_STAR] = ACTIONS(959),
        [anon_sym_PIPE] = ACTIONS(321),
        [anon_sym_AMP] = ACTIONS(321),
        [anon_sym_CARET] = ACTIONS(965),
        [anon_sym_LT_LT] = ACTIONS(955),
        [anon_sym_GT_GT] = ACTIONS(955),
        [anon_sym_and] = ACTIONS(321),
        [anon_sym_or] = ACTIONS(321),
        [anon_sym_LBRACK] = ACTIONS(321),
        [sym_comment] = ACTIONS(83),
    },
    [477] = {
        [anon_sym_LPAREN] = ACTIONS(265),
        [anon_sym_COMMA] = ACTIONS(321),
        [anon_sym_STAR] = ACTIONS(953),
        [anon_sym_COLON] = ACTIONS(321),
        [anon_sym_PLUS] = ACTIONS(321),
        [anon_sym_DASH] = ACTIONS(321),
        [anon_sym_SLASH] = ACTIONS(957),
        [anon_sym_STAR_STAR] = ACTIONS(959),
        [anon_sym_PIPE] = ACTIONS(321),
        [anon_sym_AMP] = ACTIONS(321),
        [anon_sym_CARET] = ACTIONS(321),
        [anon_sym_LT_LT] = ACTIONS(321),
        [anon_sym_GT_GT] = ACTIONS(321),
        [anon_sym_and] = ACTIONS(321),
        [anon_sym_or] = ACTIONS(321),
        [anon_sym_LBRACK] = ACTIONS(321),
        [sym_comment] = ACTIONS(83),
    },
    [478] = {
        [anon_sym_LPAREN] = ACTIONS(265),
        [anon_sym_COMMA] = ACTIONS(321),
        [anon_sym_STAR] = ACTIONS(953),
        [anon_sym_COLON] = ACTIONS(321),
        [anon_sym_PLUS] = ACTIONS(955),
        [anon_sym_DASH] = ACTIONS(955),
        [anon_sym_SLASH] = ACTIONS(957),
        [anon_sym_STAR_STAR] = ACTIONS(959),
        [anon_sym_PIPE] = ACTIONS(321),
        [anon_sym_AMP] = ACTIONS(321),
        [anon_sym_CARET] = ACTIONS(321),
        [anon_sym_LT_LT] = ACTIONS(955),
        [anon_sym_GT_GT] = ACTIONS(955),
        [anon_sym_and] = ACTIONS(321),
        [anon_sym_or] = ACTIONS(321),
        [anon_sym_LBRACK] = ACTIONS(321),
        [sym_comment] = ACTIONS(83),
    },
    [479] = {
        [anon_sym_LPAREN] = ACTIONS(265),
        [anon_sym_COMMA] = ACTIONS(321),
        [anon_sym_STAR] = ACTIONS(323),
        [anon_sym_COLON] = ACTIONS(321),
        [anon_sym_PLUS] = ACTIONS(321),
        [anon_sym_DASH] = ACTIONS(321),
        [anon_sym_SLASH] = ACTIONS(321),
        [anon_sym_STAR_STAR] = ACTIONS(959),
        [anon_sym_PIPE] = ACTIONS(321),
        [anon_sym_AMP] = ACTIONS(321),
        [anon_sym_CARET] = ACTIONS(321),
        [anon_sym_LT_LT] = ACTIONS(321),
        [anon_sym_GT_GT] = ACTIONS(321),
        [anon_sym_and] = ACTIONS(321),
        [anon_sym_or] = ACTIONS(321),
        [anon_sym_LBRACK] = ACTIONS(321),
        [sym_comment] = ACTIONS(83),
    },
    [480] = {
        [sym_with_item] = STATE(488),
        [sym__expression] = STATE(454),
        [sym_binary_operator] = STATE(45),
        [sym_unary_operator] = STATE(45),
        [sym_subscript] = STATE(45),
        [sym_call] = STATE(45),
        [sym_list] = STATE(45),
        [sym_list_comprehension] = STATE(45),
        [sym_dictionary] = STATE(45),
        [sym_dictionary_comprehension] = STATE(45),
        [sym_set] = STATE(45),
        [sym_set_comprehension] = STATE(45),
        [anon_sym_not] = ACTIONS(159),
        [anon_sym_LBRACK] = ACTIONS(145),
        [anon_sym_LBRACE] = ACTIONS(147),
        [sym_string] = ACTIONS(149),
        [sym_number] = ACTIONS(151),
        [sym_identifier] = ACTIONS(153),
        [sym_comment] = ACTIONS(83),
    },
    [481] = {
        [sym__simple_statement] = STATE(409),
        [sym_import_statement] = STATE(7),
        [sym_import_from_statement] = STATE(7),
        [sym_print_statement] = STATE(7),
        [sym_expression_statement] = STATE(7),
        [sym_return_statement] = STATE(7),
        [sym_delete_statement] = STATE(7),
        [sym__suite] = STATE(487),
        [sym__expression] = STATE(26),
        [sym_binary_operator] = STATE(19),
        [sym_unary_operator] = STATE(19),
        [sym_subscript] = STATE(19),
        [sym_call] = STATE(19),
        [sym_list] = STATE(19),
        [sym_list_comprehension] = STATE(19),
        [sym_dictionary] = STATE(19),
        [sym_dictionary_comprehension] = STATE(19),
        [sym_set] = STATE(19),
        [sym_set_comprehension] = STATE(19),
        [anon_sym_import] = ACTIONS(93),
        [anon_sym_from] = ACTIONS(95),
        [anon_sym_print] = ACTIONS(97),
        [anon_sym_return] = ACTIONS(99),
        [anon_sym_del] = ACTIONS(101),
        [sym_pass_statement] = ACTIONS(103),
        [sym_break_statement] = ACTIONS(103),
        [sym_continue_statement] = ACTIONS(103),
        [anon_sym_not] = ACTIONS(121),
        [anon_sym_LBRACK] = ACTIONS(123),
        [anon_sym_LBRACE] = ACTIONS(125),
        [sym_string] = ACTIONS(127),
        [sym_number] = ACTIONS(129),
        [sym_identifier] = ACTIONS(131),
        [sym_comment] = ACTIONS(83),
        [sym__indent] = ACTIONS(843),
    },
    [482] = {
        [anon_sym_COMMA] = ACTIONS(967),
        [anon_sym_COLON] = ACTIONS(969),
        [sym_comment] = ACTIONS(83),
    },
    [483] = {
        [sym_with_item] = STATE(486),
        [sym__expression] = STATE(454),
        [sym_binary_operator] = STATE(45),
        [sym_unary_operator] = STATE(45),
        [sym_subscript] = STATE(45),
        [sym_call] = STATE(45),
        [sym_list] = STATE(45),
        [sym_list_comprehension] = STATE(45),
        [sym_dictionary] = STATE(45),
        [sym_dictionary_comprehension] = STATE(45),
        [sym_set] = STATE(45),
        [sym_set_comprehension] = STATE(45),
        [anon_sym_not] = ACTIONS(159),
        [anon_sym_LBRACK] = ACTIONS(145),
        [anon_sym_LBRACE] = ACTIONS(147),
        [sym_string] = ACTIONS(149),
        [sym_number] = ACTIONS(151),
        [sym_identifier] = ACTIONS(153),
        [sym_comment] = ACTIONS(83),
    },
    [484] = {
        [sym__simple_statement] = STATE(409),
        [sym_import_statement] = STATE(7),
        [sym_import_from_statement] = STATE(7),
        [sym_print_statement] = STATE(7),
        [sym_expression_statement] = STATE(7),
        [sym_return_statement] = STATE(7),
        [sym_delete_statement] = STATE(7),
        [sym__suite] = STATE(485),
        [sym__expression] = STATE(26),
        [sym_binary_operator] = STATE(19),
        [sym_unary_operator] = STATE(19),
        [sym_subscript] = STATE(19),
        [sym_call] = STATE(19),
        [sym_list] = STATE(19),
        [sym_list_comprehension] = STATE(19),
        [sym_dictionary] = STATE(19),
        [sym_dictionary_comprehension] = STATE(19),
        [sym_set] = STATE(19),
        [sym_set_comprehension] = STATE(19),
        [anon_sym_import] = ACTIONS(93),
        [anon_sym_from] = ACTIONS(95),
        [anon_sym_print] = ACTIONS(97),
        [anon_sym_return] = ACTIONS(99),
        [anon_sym_del] = ACTIONS(101),
        [sym_pass_statement] = ACTIONS(103),
        [sym_break_statement] = ACTIONS(103),
        [sym_continue_statement] = ACTIONS(103),
        [anon_sym_not] = ACTIONS(121),
        [anon_sym_LBRACK] = ACTIONS(123),
        [anon_sym_LBRACE] = ACTIONS(125),
        [sym_string] = ACTIONS(127),
        [sym_number] = ACTIONS(129),
        [sym_identifier] = ACTIONS(131),
        [sym_comment] = ACTIONS(83),
        [sym__indent] = ACTIONS(843),
    },
    [485] = {
        [anon_sym_import] = ACTIONS(971),
        [anon_sym_from] = ACTIONS(971),
        [anon_sym_print] = ACTIONS(971),
        [anon_sym_return] = ACTIONS(971),
        [anon_sym_del] = ACTIONS(971),
        [sym_pass_statement] = ACTIONS(971),
        [sym_break_statement] = ACTIONS(971),
        [sym_continue_statement] = ACTIONS(971),
        [anon_sym_if] = ACTIONS(971),
        [anon_sym_for] = ACTIONS(971),
        [anon_sym_while] = ACTIONS(971),
        [anon_sym_try] = ACTIONS(971),
        [anon_sym_with] = ACTIONS(971),
        [anon_sym_def] = ACTIONS(971),
        [anon_sym_class] = ACTIONS(971),
        [anon_sym_AT] = ACTIONS(973),
        [anon_sym_not] = ACTIONS(971),
        [anon_sym_LBRACK] = ACTIONS(973),
        [anon_sym_LBRACE] = ACTIONS(973),
        [sym_string] = ACTIONS(973),
        [sym_number] = ACTIONS(971),
        [sym_identifier] = ACTIONS(975),
        [sym_comment] = ACTIONS(83),
        [sym__dedent] = ACTIONS(973),
    },
    [486] = {
        [anon_sym_COMMA] = ACTIONS(977),
        [anon_sym_COLON] = ACTIONS(977),
        [sym_comment] = ACTIONS(83),
    },
    [487] = {
        [anon_sym_import] = ACTIONS(979),
        [anon_sym_from] = ACTIONS(979),
        [anon_sym_print] = ACTIONS(979),
        [anon_sym_return] = ACTIONS(979),
        [anon_sym_del] = ACTIONS(979),
        [sym_pass_statement] = ACTIONS(979),
        [sym_break_statement] = ACTIONS(979),
        [sym_continue_statement] = ACTIONS(979),
        [anon_sym_if] = ACTIONS(979),
        [anon_sym_for] = ACTIONS(979),
        [anon_sym_while] = ACTIONS(979),
        [anon_sym_try] = ACTIONS(979),
        [anon_sym_with] = ACTIONS(979),
        [anon_sym_def] = ACTIONS(979),
        [anon_sym_class] = ACTIONS(979),
        [anon_sym_AT] = ACTIONS(981),
        [anon_sym_not] = ACTIONS(979),
        [anon_sym_LBRACK] = ACTIONS(981),
        [anon_sym_LBRACE] = ACTIONS(981),
        [sym_string] = ACTIONS(981),
        [sym_number] = ACTIONS(979),
        [sym_identifier] = ACTIONS(983),
        [sym_comment] = ACTIONS(83),
        [sym__dedent] = ACTIONS(981),
    },
    [488] = {
        [anon_sym_COMMA] = ACTIONS(985),
        [anon_sym_COLON] = ACTIONS(985),
        [sym_comment] = ACTIONS(83),
    },
    [489] = {
        [sym__simple_statement] = STATE(491),
        [sym_import_statement] = STATE(7),
        [sym_import_from_statement] = STATE(7),
        [sym_print_statement] = STATE(7),
        [sym_expression_statement] = STATE(7),
        [sym_return_statement] = STATE(7),
        [sym_delete_statement] = STATE(7),
        [sym__suite] = STATE(492),
        [sym__expression] = STATE(26),
        [sym_binary_operator] = STATE(19),
        [sym_unary_operator] = STATE(19),
        [sym_subscript] = STATE(19),
        [sym_call] = STATE(19),
        [sym_list] = STATE(19),
        [sym_list_comprehension] = STATE(19),
        [sym_dictionary] = STATE(19),
        [sym_dictionary_comprehension] = STATE(19),
        [sym_set] = STATE(19),
        [sym_set_comprehension] = STATE(19),
        [anon_sym_import] = ACTIONS(93),
        [anon_sym_from] = ACTIONS(95),
        [anon_sym_print] = ACTIONS(97),
        [anon_sym_return] = ACTIONS(99),
        [anon_sym_del] = ACTIONS(101),
        [sym_pass_statement] = ACTIONS(103),
        [sym_break_statement] = ACTIONS(103),
        [sym_continue_statement] = ACTIONS(103),
        [anon_sym_not] = ACTIONS(121),
        [anon_sym_LBRACK] = ACTIONS(123),
        [anon_sym_LBRACE] = ACTIONS(125),
        [sym_string] = ACTIONS(127),
        [sym_number] = ACTIONS(129),
        [sym_identifier] = ACTIONS(131),
        [sym_comment] = ACTIONS(83),
        [sym__indent] = ACTIONS(987),
    },
    [490] = {
        [sym__statement] = STATE(395),
        [sym__simple_statement] = STATE(396),
        [sym_import_statement] = STATE(7),
        [sym_import_from_statement] = STATE(7),
        [sym_print_statement] = STATE(7),
        [sym_expression_statement] = STATE(7),
        [sym_return_statement] = STATE(7),
        [sym_delete_statement] = STATE(7),
        [sym__compound_statement] = STATE(397),
        [sym_if_statement] = STATE(398),
        [sym_for_statement] = STATE(398),
        [sym_while_statement] = STATE(398),
        [sym_try_statement] = STATE(398),
        [sym_with_statement] = STATE(398),
        [sym_function_definition] = STATE(398),
        [sym_class_definition] = STATE(398),
        [sym_decorated_definition] = STATE(398),
        [sym_decorator] = STATE(25),
        [sym__expression] = STATE(26),
        [sym_binary_operator] = STATE(19),
        [sym_unary_operator] = STATE(19),
        [sym_subscript] = STATE(19),
        [sym_call] = STATE(19),
        [sym_list] = STATE(19),
        [sym_list_comprehension] = STATE(19),
        [sym_dictionary] = STATE(19),
        [sym_dictionary_comprehension] = STATE(19),
        [sym_set] = STATE(19),
        [sym_set_comprehension] = STATE(19),
        [aux_sym_module_repeat1] = STATE(515),
        [aux_sym_decorated_definition_repeat1] = STATE(400),
        [anon_sym_import] = ACTIONS(93),
        [anon_sym_from] = ACTIONS(95),
        [anon_sym_print] = ACTIONS(97),
        [anon_sym_return] = ACTIONS(99),
        [anon_sym_del] = ACTIONS(101),
        [sym_pass_statement] = ACTIONS(103),
        [sym_break_statement] = ACTIONS(103),
        [sym_continue_statement] = ACTIONS(103),
        [anon_sym_if] = ACTIONS(791),
        [anon_sym_for] = ACTIONS(793),
        [anon_sym_while] = ACTIONS(795),
        [anon_sym_try] = ACTIONS(797),
        [anon_sym_with] = ACTIONS(799),
        [anon_sym_def] = ACTIONS(801),
        [anon_sym_class] = ACTIONS(803),
        [anon_sym_AT] = ACTIONS(119),
        [anon_sym_not] = ACTIONS(121),
        [anon_sym_LBRACK] = ACTIONS(123),
        [anon_sym_LBRACE] = ACTIONS(125),
        [sym_string] = ACTIONS(127),
        [sym_number] = ACTIONS(129),
        [sym_identifier] = ACTIONS(131),
        [sym_comment] = ACTIONS(83),
        [sym__dedent] = ACTIONS(989),
    },
    [491] = {
        [sym_comment] = ACTIONS(83),
        [sym__newline] = ACTIONS(989),
    },
    [492] = {
        [sym_except_clause] = STATE(495),
        [sym_finally_clause] = STATE(496),
        [aux_sym_try_statement_repeat1] = STATE(497),
        [anon_sym_except] = ACTIONS(991),
        [anon_sym_finally] = ACTIONS(993),
        [sym_comment] = ACTIONS(83),
    },
    [493] = {
        [sym__expression] = STATE(507),
        [sym_binary_operator] = STATE(45),
        [sym_unary_operator] = STATE(45),
        [sym_subscript] = STATE(45),
        [sym_call] = STATE(45),
        [sym_list] = STATE(45),
        [sym_list_comprehension] = STATE(45),
        [sym_dictionary] = STATE(45),
        [sym_dictionary_comprehension] = STATE(45),
        [sym_set] = STATE(45),
        [sym_set_comprehension] = STATE(45),
        [anon_sym_not] = ACTIONS(159),
        [anon_sym_LBRACK] = ACTIONS(145),
        [anon_sym_LBRACE] = ACTIONS(147),
        [sym_string] = ACTIONS(149),
        [sym_number] = ACTIONS(151),
        [sym_identifier] = ACTIONS(153),
        [sym_comment] = ACTIONS(83),
    },
    [494] = {
        [anon_sym_COLON] = ACTIONS(995),
        [sym_comment] = ACTIONS(83),
    },
    [495] = {
        [anon_sym_import] = ACTIONS(997),
        [anon_sym_from] = ACTIONS(997),
        [anon_sym_print] = ACTIONS(997),
        [anon_sym_return] = ACTIONS(997),
        [anon_sym_del] = ACTIONS(997),
        [sym_pass_statement] = ACTIONS(997),
        [sym_break_statement] = ACTIONS(997),
        [sym_continue_statement] = ACTIONS(997),
        [anon_sym_if] = ACTIONS(997),
        [anon_sym_else] = ACTIONS(997),
        [anon_sym_for] = ACTIONS(997),
        [anon_sym_while] = ACTIONS(997),
        [anon_sym_try] = ACTIONS(997),
        [anon_sym_except] = ACTIONS(997),
        [anon_sym_finally] = ACTIONS(997),
        [anon_sym_with] = ACTIONS(997),
        [anon_sym_def] = ACTIONS(997),
        [anon_sym_class] = ACTIONS(997),
        [anon_sym_AT] = ACTIONS(999),
        [anon_sym_not] = ACTIONS(997),
        [anon_sym_LBRACK] = ACTIONS(999),
        [anon_sym_LBRACE] = ACTIONS(999),
        [sym_string] = ACTIONS(999),
        [sym_number] = ACTIONS(997),
        [sym_identifier] = ACTIONS(1001),
        [sym_comment] = ACTIONS(83),
        [sym__dedent] = ACTIONS(999),
    },
    [496] = {
        [anon_sym_import] = ACTIONS(1003),
        [anon_sym_from] = ACTIONS(1003),
        [anon_sym_print] = ACTIONS(1003),
        [anon_sym_return] = ACTIONS(1003),
        [anon_sym_del] = ACTIONS(1003),
        [sym_pass_statement] = ACTIONS(1003),
        [sym_break_statement] = ACTIONS(1003),
        [sym_continue_statement] = ACTIONS(1003),
        [anon_sym_if] = ACTIONS(1003),
        [anon_sym_for] = ACTIONS(1003),
        [anon_sym_while] = ACTIONS(1003),
        [anon_sym_try] = ACTIONS(1003),
        [anon_sym_with] = ACTIONS(1003),
        [anon_sym_def] = ACTIONS(1003),
        [anon_sym_class] = ACTIONS(1003),
        [anon_sym_AT] = ACTIONS(1005),
        [anon_sym_not] = ACTIONS(1003),
        [anon_sym_LBRACK] = ACTIONS(1005),
        [anon_sym_LBRACE] = ACTIONS(1005),
        [sym_string] = ACTIONS(1005),
        [sym_number] = ACTIONS(1003),
        [sym_identifier] = ACTIONS(1007),
        [sym_comment] = ACTIONS(83),
        [sym__dedent] = ACTIONS(1005),
    },
    [497] = {
        [sym_else_clause] = STATE(499),
        [sym_except_clause] = STATE(500),
        [sym_finally_clause] = STATE(501),
        [anon_sym_import] = ACTIONS(1003),
        [anon_sym_from] = ACTIONS(1003),
        [anon_sym_print] = ACTIONS(1003),
        [anon_sym_return] = ACTIONS(1003),
        [anon_sym_del] = ACTIONS(1003),
        [sym_pass_statement] = ACTIONS(1003),
        [sym_break_statement] = ACTIONS(1003),
        [sym_continue_statement] = ACTIONS(1003),
        [anon_sym_if] = ACTIONS(1003),
        [anon_sym_else] = ACTIONS(1009),
        [anon_sym_for] = ACTIONS(1003),
        [anon_sym_while] = ACTIONS(1003),
        [anon_sym_try] = ACTIONS(1003),
        [anon_sym_except] = ACTIONS(1011),
        [anon_sym_finally] = ACTIONS(1013),
        [anon_sym_with] = ACTIONS(1003),
        [anon_sym_def] = ACTIONS(1003),
        [anon_sym_class] = ACTIONS(1003),
        [anon_sym_AT] = ACTIONS(1005),
        [anon_sym_not] = ACTIONS(1003),
        [anon_sym_LBRACK] = ACTIONS(1005),
        [anon_sym_LBRACE] = ACTIONS(1005),
        [sym_string] = ACTIONS(1005),
        [sym_number] = ACTIONS(1003),
        [sym_identifier] = ACTIONS(1007),
        [sym_comment] = ACTIONS(83),
        [sym__dedent] = ACTIONS(1005),
    },
    [498] = {
        [anon_sym_COLON] = ACTIONS(1015),
        [sym_comment] = ACTIONS(83),
    },
    [499] = {
        [sym_finally_clause] = STATE(502),
        [anon_sym_import] = ACTIONS(1017),
        [anon_sym_from] = ACTIONS(1017),
        [anon_sym_print] = ACTIONS(1017),
        [anon_sym_return] = ACTIONS(1017),
        [anon_sym_del] = ACTIONS(1017),
        [sym_pass_statement] = ACTIONS(1017),
        [sym_break_statement] = ACTIONS(1017),
        [sym_continue_statement] = ACTIONS(1017),
        [anon_sym_if] = ACTIONS(1017),
        [anon_sym_for] = ACTIONS(1017),
        [anon_sym_while] = ACTIONS(1017),
        [anon_sym_try] = ACTIONS(1017),
        [anon_sym_finally] = ACTIONS(1013),
        [anon_sym_with] = ACTIONS(1017),
        [anon_sym_def] = ACTIONS(1017),
        [anon_sym_class] = ACTIONS(1017),
        [anon_sym_AT] = ACTIONS(1019),
        [anon_sym_not] = ACTIONS(1017),
        [anon_sym_LBRACK] = ACTIONS(1019),
        [anon_sym_LBRACE] = ACTIONS(1019),
        [sym_string] = ACTIONS(1019),
        [sym_number] = ACTIONS(1017),
        [sym_identifier] = ACTIONS(1021),
        [sym_comment] = ACTIONS(83),
        [sym__dedent] = ACTIONS(1019),
    },
    [500] = {
        [anon_sym_import] = ACTIONS(1023),
        [anon_sym_from] = ACTIONS(1023),
        [anon_sym_print] = ACTIONS(1023),
        [anon_sym_return] = ACTIONS(1023),
        [anon_sym_del] = ACTIONS(1023),
        [sym_pass_statement] = ACTIONS(1023),
        [sym_break_statement] = ACTIONS(1023),
        [sym_continue_statement] = ACTIONS(1023),
        [anon_sym_if] = ACTIONS(1023),
        [anon_sym_else] = ACTIONS(1023),
        [anon_sym_for] = ACTIONS(1023),
        [anon_sym_while] = ACTIONS(1023),
        [anon_sym_try] = ACTIONS(1023),
        [anon_sym_except] = ACTIONS(1023),
        [anon_sym_finally] = ACTIONS(1023),
        [anon_sym_with] = ACTIONS(1023),
        [anon_sym_def] = ACTIONS(1023),
        [anon_sym_class] = ACTIONS(1023),
        [anon_sym_AT] = ACTIONS(1025),
        [anon_sym_not] = ACTIONS(1023),
        [anon_sym_LBRACK] = ACTIONS(1025),
        [anon_sym_LBRACE] = ACTIONS(1025),
        [sym_string] = ACTIONS(1025),
        [sym_number] = ACTIONS(1023),
        [sym_identifier] = ACTIONS(1027),
        [sym_comment] = ACTIONS(83),
        [sym__dedent] = ACTIONS(1025),
    },
    [501] = {
        [anon_sym_import] = ACTIONS(1017),
        [anon_sym_from] = ACTIONS(1017),
        [anon_sym_print] = ACTIONS(1017),
        [anon_sym_return] = ACTIONS(1017),
        [anon_sym_del] = ACTIONS(1017),
        [sym_pass_statement] = ACTIONS(1017),
        [sym_break_statement] = ACTIONS(1017),
        [sym_continue_statement] = ACTIONS(1017),
        [anon_sym_if] = ACTIONS(1017),
        [anon_sym_for] = ACTIONS(1017),
        [anon_sym_while] = ACTIONS(1017),
        [anon_sym_try] = ACTIONS(1017),
        [anon_sym_with] = ACTIONS(1017),
        [anon_sym_def] = ACTIONS(1017),
        [anon_sym_class] = ACTIONS(1017),
        [anon_sym_AT] = ACTIONS(1019),
        [anon_sym_not] = ACTIONS(1017),
        [anon_sym_LBRACK] = ACTIONS(1019),
        [anon_sym_LBRACE] = ACTIONS(1019),
        [sym_string] = ACTIONS(1019),
        [sym_number] = ACTIONS(1017),
        [sym_identifier] = ACTIONS(1021),
        [sym_comment] = ACTIONS(83),
        [sym__dedent] = ACTIONS(1019),
    },
    [502] = {
        [anon_sym_import] = ACTIONS(1029),
        [anon_sym_from] = ACTIONS(1029),
        [anon_sym_print] = ACTIONS(1029),
        [anon_sym_return] = ACTIONS(1029),
        [anon_sym_del] = ACTIONS(1029),
        [sym_pass_statement] = ACTIONS(1029),
        [sym_break_statement] = ACTIONS(1029),
        [sym_continue_statement] = ACTIONS(1029),
        [anon_sym_if] = ACTIONS(1029),
        [anon_sym_for] = ACTIONS(1029),
        [anon_sym_while] = ACTIONS(1029),
        [anon_sym_try] = ACTIONS(1029),
        [anon_sym_with] = ACTIONS(1029),
        [anon_sym_def] = ACTIONS(1029),
        [anon_sym_class] = ACTIONS(1029),
        [anon_sym_AT] = ACTIONS(1031),
        [anon_sym_not] = ACTIONS(1029),
        [anon_sym_LBRACK] = ACTIONS(1031),
        [anon_sym_LBRACE] = ACTIONS(1031),
        [sym_string] = ACTIONS(1031),
        [sym_number] = ACTIONS(1029),
        [sym_identifier] = ACTIONS(1033),
        [sym_comment] = ACTIONS(83),
        [sym__dedent] = ACTIONS(1031),
    },
    [503] = {
        [sym__simple_statement] = STATE(409),
        [sym_import_statement] = STATE(7),
        [sym_import_from_statement] = STATE(7),
        [sym_print_statement] = STATE(7),
        [sym_expression_statement] = STATE(7),
        [sym_return_statement] = STATE(7),
        [sym_delete_statement] = STATE(7),
        [sym__suite] = STATE(504),
        [sym__expression] = STATE(26),
        [sym_binary_operator] = STATE(19),
        [sym_unary_operator] = STATE(19),
        [sym_subscript] = STATE(19),
        [sym_call] = STATE(19),
        [sym_list] = STATE(19),
        [sym_list_comprehension] = STATE(19),
        [sym_dictionary] = STATE(19),
        [sym_dictionary_comprehension] = STATE(19),
        [sym_set] = STATE(19),
        [sym_set_comprehension] = STATE(19),
        [anon_sym_import] = ACTIONS(93),
        [anon_sym_from] = ACTIONS(95),
        [anon_sym_print] = ACTIONS(97),
        [anon_sym_return] = ACTIONS(99),
        [anon_sym_del] = ACTIONS(101),
        [sym_pass_statement] = ACTIONS(103),
        [sym_break_statement] = ACTIONS(103),
        [sym_continue_statement] = ACTIONS(103),
        [anon_sym_not] = ACTIONS(121),
        [anon_sym_LBRACK] = ACTIONS(123),
        [anon_sym_LBRACE] = ACTIONS(125),
        [sym_string] = ACTIONS(127),
        [sym_number] = ACTIONS(129),
        [sym_identifier] = ACTIONS(131),
        [sym_comment] = ACTIONS(83),
        [sym__indent] = ACTIONS(843),
    },
    [504] = {
        [anon_sym_import] = ACTIONS(1035),
        [anon_sym_from] = ACTIONS(1035),
        [anon_sym_print] = ACTIONS(1035),
        [anon_sym_return] = ACTIONS(1035),
        [anon_sym_del] = ACTIONS(1035),
        [sym_pass_statement] = ACTIONS(1035),
        [sym_break_statement] = ACTIONS(1035),
        [sym_continue_statement] = ACTIONS(1035),
        [anon_sym_if] = ACTIONS(1035),
        [anon_sym_for] = ACTIONS(1035),
        [anon_sym_while] = ACTIONS(1035),
        [anon_sym_try] = ACTIONS(1035),
        [anon_sym_finally] = ACTIONS(1035),
        [anon_sym_with] = ACTIONS(1035),
        [anon_sym_def] = ACTIONS(1035),
        [anon_sym_class] = ACTIONS(1035),
        [anon_sym_AT] = ACTIONS(1037),
        [anon_sym_not] = ACTIONS(1035),
        [anon_sym_LBRACK] = ACTIONS(1037),
        [anon_sym_LBRACE] = ACTIONS(1037),
        [sym_string] = ACTIONS(1037),
        [sym_number] = ACTIONS(1035),
        [sym_identifier] = ACTIONS(1039),
        [sym_comment] = ACTIONS(83),
        [sym__dedent] = ACTIONS(1037),
    },
    [505] = {
        [sym__simple_statement] = STATE(409),
        [sym_import_statement] = STATE(7),
        [sym_import_from_statement] = STATE(7),
        [sym_print_statement] = STATE(7),
        [sym_expression_statement] = STATE(7),
        [sym_return_statement] = STATE(7),
        [sym_delete_statement] = STATE(7),
        [sym__suite] = STATE(506),
        [sym__expression] = STATE(26),
        [sym_binary_operator] = STATE(19),
        [sym_unary_operator] = STATE(19),
        [sym_subscript] = STATE(19),
        [sym_call] = STATE(19),
        [sym_list] = STATE(19),
        [sym_list_comprehension] = STATE(19),
        [sym_dictionary] = STATE(19),
        [sym_dictionary_comprehension] = STATE(19),
        [sym_set] = STATE(19),
        [sym_set_comprehension] = STATE(19),
        [anon_sym_import] = ACTIONS(93),
        [anon_sym_from] = ACTIONS(95),
        [anon_sym_print] = ACTIONS(97),
        [anon_sym_return] = ACTIONS(99),
        [anon_sym_del] = ACTIONS(101),
        [sym_pass_statement] = ACTIONS(103),
        [sym_break_statement] = ACTIONS(103),
        [sym_continue_statement] = ACTIONS(103),
        [anon_sym_not] = ACTIONS(121),
        [anon_sym_LBRACK] = ACTIONS(123),
        [anon_sym_LBRACE] = ACTIONS(125),
        [sym_string] = ACTIONS(127),
        [sym_number] = ACTIONS(129),
        [sym_identifier] = ACTIONS(131),
        [sym_comment] = ACTIONS(83),
        [sym__indent] = ACTIONS(843),
    },
    [506] = {
        [anon_sym_import] = ACTIONS(1041),
        [anon_sym_from] = ACTIONS(1041),
        [anon_sym_print] = ACTIONS(1041),
        [anon_sym_return] = ACTIONS(1041),
        [anon_sym_del] = ACTIONS(1041),
        [sym_pass_statement] = ACTIONS(1041),
        [sym_break_statement] = ACTIONS(1041),
        [sym_continue_statement] = ACTIONS(1041),
        [anon_sym_if] = ACTIONS(1041),
        [anon_sym_for] = ACTIONS(1041),
        [anon_sym_while] = ACTIONS(1041),
        [anon_sym_try] = ACTIONS(1041),
        [anon_sym_with] = ACTIONS(1041),
        [anon_sym_def] = ACTIONS(1041),
        [anon_sym_class] = ACTIONS(1041),
        [anon_sym_AT] = ACTIONS(1043),
        [anon_sym_not] = ACTIONS(1041),
        [anon_sym_LBRACK] = ACTIONS(1043),
        [anon_sym_LBRACE] = ACTIONS(1043),
        [sym_string] = ACTIONS(1043),
        [sym_number] = ACTIONS(1041),
        [sym_identifier] = ACTIONS(1045),
        [sym_comment] = ACTIONS(83),
        [sym__dedent] = ACTIONS(1043),
    },
    [507] = {
        [anon_sym_LPAREN] = ACTIONS(265),
        [anon_sym_COMMA] = ACTIONS(1047),
        [anon_sym_as] = ACTIONS(1047),
        [anon_sym_STAR] = ACTIONS(935),
        [anon_sym_COLON] = ACTIONS(1049),
        [anon_sym_PLUS] = ACTIONS(937),
        [anon_sym_DASH] = ACTIONS(937),
        [anon_sym_SLASH] = ACTIONS(939),
        [anon_sym_STAR_STAR] = ACTIONS(941),
        [anon_sym_PIPE] = ACTIONS(943),
        [anon_sym_AMP] = ACTIONS(945),
        [anon_sym_CARET] = ACTIONS(947),
        [anon_sym_LT_LT] = ACTIONS(937),
        [anon_sym_GT_GT] = ACTIONS(937),
        [anon_sym_and] = ACTIONS(945),
        [anon_sym_or] = ACTIONS(943),
        [anon_sym_LBRACK] = ACTIONS(281),
        [sym_comment] = ACTIONS(83),
    },
    [508] = {
        [sym__expression] = STATE(511),
        [sym_binary_operator] = STATE(45),
        [sym_unary_operator] = STATE(45),
        [sym_subscript] = STATE(45),
        [sym_call] = STATE(45),
        [sym_list] = STATE(45),
        [sym_list_comprehension] = STATE(45),
        [sym_dictionary] = STATE(45),
        [sym_dictionary_comprehension] = STATE(45),
        [sym_set] = STATE(45),
        [sym_set_comprehension] = STATE(45),
        [anon_sym_not] = ACTIONS(143),
        [anon_sym_LBRACK] = ACTIONS(145),
        [anon_sym_LBRACE] = ACTIONS(147),
        [sym_string] = ACTIONS(149),
        [sym_number] = ACTIONS(151),
        [sym_identifier] = ACTIONS(153),
        [sym_comment] = ACTIONS(83),
    },
    [509] = {
        [sym__simple_statement] = STATE(409),
        [sym_import_statement] = STATE(7),
        [sym_import_from_statement] = STATE(7),
        [sym_print_statement] = STATE(7),
        [sym_expression_statement] = STATE(7),
        [sym_return_statement] = STATE(7),
        [sym_delete_statement] = STATE(7),
        [sym__suite] = STATE(510),
        [sym__expression] = STATE(26),
        [sym_binary_operator] = STATE(19),
        [sym_unary_operator] = STATE(19),
        [sym_subscript] = STATE(19),
        [sym_call] = STATE(19),
        [sym_list] = STATE(19),
        [sym_list_comprehension] = STATE(19),
        [sym_dictionary] = STATE(19),
        [sym_dictionary_comprehension] = STATE(19),
        [sym_set] = STATE(19),
        [sym_set_comprehension] = STATE(19),
        [anon_sym_import] = ACTIONS(93),
        [anon_sym_from] = ACTIONS(95),
        [anon_sym_print] = ACTIONS(97),
        [anon_sym_return] = ACTIONS(99),
        [anon_sym_del] = ACTIONS(101),
        [sym_pass_statement] = ACTIONS(103),
        [sym_break_statement] = ACTIONS(103),
        [sym_continue_statement] = ACTIONS(103),
        [anon_sym_not] = ACTIONS(121),
        [anon_sym_LBRACK] = ACTIONS(123),
        [anon_sym_LBRACE] = ACTIONS(125),
        [sym_string] = ACTIONS(127),
        [sym_number] = ACTIONS(129),
        [sym_identifier] = ACTIONS(131),
        [sym_comment] = ACTIONS(83),
        [sym__indent] = ACTIONS(843),
    },
    [510] = {
        [anon_sym_import] = ACTIONS(1051),
        [anon_sym_from] = ACTIONS(1051),
        [anon_sym_print] = ACTIONS(1051),
        [anon_sym_return] = ACTIONS(1051),
        [anon_sym_del] = ACTIONS(1051),
        [sym_pass_statement] = ACTIONS(1051),
        [sym_break_statement] = ACTIONS(1051),
        [sym_continue_statement] = ACTIONS(1051),
        [anon_sym_if] = ACTIONS(1051),
        [anon_sym_else] = ACTIONS(1051),
        [anon_sym_for] = ACTIONS(1051),
        [anon_sym_while] = ACTIONS(1051),
        [anon_sym_try] = ACTIONS(1051),
        [anon_sym_except] = ACTIONS(1051),
        [anon_sym_finally] = ACTIONS(1051),
        [anon_sym_with] = ACTIONS(1051),
        [anon_sym_def] = ACTIONS(1051),
        [anon_sym_class] = ACTIONS(1051),
        [anon_sym_AT] = ACTIONS(1053),
        [anon_sym_not] = ACTIONS(1051),
        [anon_sym_LBRACK] = ACTIONS(1053),
        [anon_sym_LBRACE] = ACTIONS(1053),
        [sym_string] = ACTIONS(1053),
        [sym_number] = ACTIONS(1051),
        [sym_identifier] = ACTIONS(1055),
        [sym_comment] = ACTIONS(83),
        [sym__dedent] = ACTIONS(1053),
    },
    [511] = {
        [anon_sym_LPAREN] = ACTIONS(265),
        [anon_sym_STAR] = ACTIONS(453),
        [anon_sym_COLON] = ACTIONS(1057),
        [anon_sym_PLUS] = ACTIONS(457),
        [anon_sym_DASH] = ACTIONS(457),
        [anon_sym_SLASH] = ACTIONS(459),
        [anon_sym_STAR_STAR] = ACTIONS(461),
        [anon_sym_PIPE] = ACTIONS(463),
        [anon_sym_AMP] = ACTIONS(465),
        [anon_sym_CARET] = ACTIONS(467),
        [anon_sym_LT_LT] = ACTIONS(457),
        [anon_sym_GT_GT] = ACTIONS(457),
        [anon_sym_and] = ACTIONS(465),
        [anon_sym_or] = ACTIONS(463),
        [anon_sym_LBRACK] = ACTIONS(281),
        [sym_comment] = ACTIONS(83),
    },
    [512] = {
        [sym__simple_statement] = STATE(409),
        [sym_import_statement] = STATE(7),
        [sym_import_from_statement] = STATE(7),
        [sym_print_statement] = STATE(7),
        [sym_expression_statement] = STATE(7),
        [sym_return_statement] = STATE(7),
        [sym_delete_statement] = STATE(7),
        [sym__suite] = STATE(513),
        [sym__expression] = STATE(26),
        [sym_binary_operator] = STATE(19),
        [sym_unary_operator] = STATE(19),
        [sym_subscript] = STATE(19),
        [sym_call] = STATE(19),
        [sym_list] = STATE(19),
        [sym_list_comprehension] = STATE(19),
        [sym_dictionary] = STATE(19),
        [sym_dictionary_comprehension] = STATE(19),
        [sym_set] = STATE(19),
        [sym_set_comprehension] = STATE(19),
        [anon_sym_import] = ACTIONS(93),
        [anon_sym_from] = ACTIONS(95),
        [anon_sym_print] = ACTIONS(97),
        [anon_sym_return] = ACTIONS(99),
        [anon_sym_del] = ACTIONS(101),
        [sym_pass_statement] = ACTIONS(103),
        [sym_break_statement] = ACTIONS(103),
        [sym_continue_statement] = ACTIONS(103),
        [anon_sym_not] = ACTIONS(121),
        [anon_sym_LBRACK] = ACTIONS(123),
        [anon_sym_LBRACE] = ACTIONS(125),
        [sym_string] = ACTIONS(127),
        [sym_number] = ACTIONS(129),
        [sym_identifier] = ACTIONS(131),
        [sym_comment] = ACTIONS(83),
        [sym__indent] = ACTIONS(843),
    },
    [513] = {
        [anon_sym_import] = ACTIONS(1059),
        [anon_sym_from] = ACTIONS(1059),
        [anon_sym_print] = ACTIONS(1059),
        [anon_sym_return] = ACTIONS(1059),
        [anon_sym_del] = ACTIONS(1059),
        [sym_pass_statement] = ACTIONS(1059),
        [sym_break_statement] = ACTIONS(1059),
        [sym_continue_statement] = ACTIONS(1059),
        [anon_sym_if] = ACTIONS(1059),
        [anon_sym_else] = ACTIONS(1059),
        [anon_sym_for] = ACTIONS(1059),
        [anon_sym_while] = ACTIONS(1059),
        [anon_sym_try] = ACTIONS(1059),
        [anon_sym_except] = ACTIONS(1059),
        [anon_sym_finally] = ACTIONS(1059),
        [anon_sym_with] = ACTIONS(1059),
        [anon_sym_def] = ACTIONS(1059),
        [anon_sym_class] = ACTIONS(1059),
        [anon_sym_AT] = ACTIONS(1061),
        [anon_sym_not] = ACTIONS(1059),
        [anon_sym_LBRACK] = ACTIONS(1061),
        [anon_sym_LBRACE] = ACTIONS(1061),
        [sym_string] = ACTIONS(1061),
        [sym_number] = ACTIONS(1059),
        [sym_identifier] = ACTIONS(1063),
        [sym_comment] = ACTIONS(83),
        [sym__dedent] = ACTIONS(1061),
    },
    [514] = {
        [anon_sym_except] = ACTIONS(813),
        [anon_sym_finally] = ACTIONS(813),
        [sym_comment] = ACTIONS(83),
    },
    [515] = {
        [sym__statement] = STATE(403),
        [sym__simple_statement] = STATE(396),
        [sym_import_statement] = STATE(7),
        [sym_import_from_statement] = STATE(7),
        [sym_print_statement] = STATE(7),
        [sym_expression_statement] = STATE(7),
        [sym_return_statement] = STATE(7),
        [sym_delete_statement] = STATE(7),
        [sym__compound_statement] = STATE(397),
        [sym_if_statement] = STATE(398),
        [sym_for_statement] = STATE(398),
        [sym_while_statement] = STATE(398),
        [sym_try_statement] = STATE(398),
        [sym_with_statement] = STATE(398),
        [sym_function_definition] = STATE(398),
        [sym_class_definition] = STATE(398),
        [sym_decorated_definition] = STATE(398),
        [sym_decorator] = STATE(25),
        [sym__expression] = STATE(26),
        [sym_binary_operator] = STATE(19),
        [sym_unary_operator] = STATE(19),
        [sym_subscript] = STATE(19),
        [sym_call] = STATE(19),
        [sym_list] = STATE(19),
        [sym_list_comprehension] = STATE(19),
        [sym_dictionary] = STATE(19),
        [sym_dictionary_comprehension] = STATE(19),
        [sym_set] = STATE(19),
        [sym_set_comprehension] = STATE(19),
        [aux_sym_decorated_definition_repeat1] = STATE(400),
        [anon_sym_import] = ACTIONS(93),
        [anon_sym_from] = ACTIONS(95),
        [anon_sym_print] = ACTIONS(97),
        [anon_sym_return] = ACTIONS(99),
        [anon_sym_del] = ACTIONS(101),
        [sym_pass_statement] = ACTIONS(103),
        [sym_break_statement] = ACTIONS(103),
        [sym_continue_statement] = ACTIONS(103),
        [anon_sym_if] = ACTIONS(791),
        [anon_sym_for] = ACTIONS(793),
        [anon_sym_while] = ACTIONS(795),
        [anon_sym_try] = ACTIONS(797),
        [anon_sym_with] = ACTIONS(799),
        [anon_sym_def] = ACTIONS(801),
        [anon_sym_class] = ACTIONS(803),
        [anon_sym_AT] = ACTIONS(119),
        [anon_sym_not] = ACTIONS(121),
        [anon_sym_LBRACK] = ACTIONS(123),
        [anon_sym_LBRACE] = ACTIONS(125),
        [sym_string] = ACTIONS(127),
        [sym_number] = ACTIONS(129),
        [sym_identifier] = ACTIONS(131),
        [sym_comment] = ACTIONS(83),
        [sym__dedent] = ACTIONS(1065),
    },
    [516] = {
        [anon_sym_except] = ACTIONS(833),
        [anon_sym_finally] = ACTIONS(833),
        [sym_comment] = ACTIONS(83),
    },
    [517] = {
        [anon_sym_LPAREN] = ACTIONS(265),
        [anon_sym_STAR] = ACTIONS(453),
        [anon_sym_COLON] = ACTIONS(1067),
        [anon_sym_PLUS] = ACTIONS(457),
        [anon_sym_DASH] = ACTIONS(457),
        [anon_sym_SLASH] = ACTIONS(459),
        [anon_sym_STAR_STAR] = ACTIONS(461),
        [anon_sym_PIPE] = ACTIONS(463),
        [anon_sym_AMP] = ACTIONS(465),
        [anon_sym_CARET] = ACTIONS(467),
        [anon_sym_LT_LT] = ACTIONS(457),
        [anon_sym_GT_GT] = ACTIONS(457),
        [anon_sym_and] = ACTIONS(465),
        [anon_sym_or] = ACTIONS(463),
        [anon_sym_LBRACK] = ACTIONS(281),
        [sym_comment] = ACTIONS(83),
    },
    [518] = {
        [sym__simple_statement] = STATE(409),
        [sym_import_statement] = STATE(7),
        [sym_import_from_statement] = STATE(7),
        [sym_print_statement] = STATE(7),
        [sym_expression_statement] = STATE(7),
        [sym_return_statement] = STATE(7),
        [sym_delete_statement] = STATE(7),
        [sym__suite] = STATE(519),
        [sym__expression] = STATE(26),
        [sym_binary_operator] = STATE(19),
        [sym_unary_operator] = STATE(19),
        [sym_subscript] = STATE(19),
        [sym_call] = STATE(19),
        [sym_list] = STATE(19),
        [sym_list_comprehension] = STATE(19),
        [sym_dictionary] = STATE(19),
        [sym_dictionary_comprehension] = STATE(19),
        [sym_set] = STATE(19),
        [sym_set_comprehension] = STATE(19),
        [anon_sym_import] = ACTIONS(93),
        [anon_sym_from] = ACTIONS(95),
        [anon_sym_print] = ACTIONS(97),
        [anon_sym_return] = ACTIONS(99),
        [anon_sym_del] = ACTIONS(101),
        [sym_pass_statement] = ACTIONS(103),
        [sym_break_statement] = ACTIONS(103),
        [sym_continue_statement] = ACTIONS(103),
        [anon_sym_not] = ACTIONS(121),
        [anon_sym_LBRACK] = ACTIONS(123),
        [anon_sym_LBRACE] = ACTIONS(125),
        [sym_string] = ACTIONS(127),
        [sym_number] = ACTIONS(129),
        [sym_identifier] = ACTIONS(131),
        [sym_comment] = ACTIONS(83),
        [sym__indent] = ACTIONS(843),
    },
    [519] = {
        [sym_else_clause] = STATE(520),
        [anon_sym_import] = ACTIONS(1069),
        [anon_sym_from] = ACTIONS(1069),
        [anon_sym_print] = ACTIONS(1069),
        [anon_sym_return] = ACTIONS(1069),
        [anon_sym_del] = ACTIONS(1069),
        [sym_pass_statement] = ACTIONS(1069),
        [sym_break_statement] = ACTIONS(1069),
        [sym_continue_statement] = ACTIONS(1069),
        [anon_sym_if] = ACTIONS(1069),
        [anon_sym_else] = ACTIONS(1009),
        [anon_sym_for] = ACTIONS(1069),
        [anon_sym_while] = ACTIONS(1069),
        [anon_sym_try] = ACTIONS(1069),
        [anon_sym_with] = ACTIONS(1069),
        [anon_sym_def] = ACTIONS(1069),
        [anon_sym_class] = ACTIONS(1069),
        [anon_sym_AT] = ACTIONS(1071),
        [anon_sym_not] = ACTIONS(1069),
        [anon_sym_LBRACK] = ACTIONS(1071),
        [anon_sym_LBRACE] = ACTIONS(1071),
        [sym_string] = ACTIONS(1071),
        [sym_number] = ACTIONS(1069),
        [sym_identifier] = ACTIONS(1073),
        [sym_comment] = ACTIONS(83),
        [sym__dedent] = ACTIONS(1071),
    },
    [520] = {
        [anon_sym_import] = ACTIONS(1075),
        [anon_sym_from] = ACTIONS(1075),
        [anon_sym_print] = ACTIONS(1075),
        [anon_sym_return] = ACTIONS(1075),
        [anon_sym_del] = ACTIONS(1075),
        [sym_pass_statement] = ACTIONS(1075),
        [sym_break_statement] = ACTIONS(1075),
        [sym_continue_statement] = ACTIONS(1075),
        [anon_sym_if] = ACTIONS(1075),
        [anon_sym_for] = ACTIONS(1075),
        [anon_sym_while] = ACTIONS(1075),
        [anon_sym_try] = ACTIONS(1075),
        [anon_sym_with] = ACTIONS(1075),
        [anon_sym_def] = ACTIONS(1075),
        [anon_sym_class] = ACTIONS(1075),
        [anon_sym_AT] = ACTIONS(1077),
        [anon_sym_not] = ACTIONS(1075),
        [anon_sym_LBRACK] = ACTIONS(1077),
        [anon_sym_LBRACE] = ACTIONS(1077),
        [sym_string] = ACTIONS(1077),
        [sym_number] = ACTIONS(1075),
        [sym_identifier] = ACTIONS(1079),
        [sym_comment] = ACTIONS(83),
        [sym__dedent] = ACTIONS(1077),
    },
    [521] = {
        [anon_sym_in] = ACTIONS(1081),
        [sym_comment] = ACTIONS(83),
    },
    [522] = {
        [sym_expression_list] = STATE(523),
        [sym__expression] = STATE(524),
        [sym_binary_operator] = STATE(45),
        [sym_unary_operator] = STATE(45),
        [sym_subscript] = STATE(45),
        [sym_call] = STATE(45),
        [sym_list] = STATE(45),
        [sym_list_comprehension] = STATE(45),
        [sym_dictionary] = STATE(45),
        [sym_dictionary_comprehension] = STATE(45),
        [sym_set] = STATE(45),
        [sym_set_comprehension] = STATE(45),
        [anon_sym_not] = ACTIONS(949),
        [anon_sym_LBRACK] = ACTIONS(145),
        [anon_sym_LBRACE] = ACTIONS(147),
        [sym_string] = ACTIONS(149),
        [sym_number] = ACTIONS(151),
        [sym_identifier] = ACTIONS(153),
        [sym_comment] = ACTIONS(83),
    },
    [523] = {
        [anon_sym_COLON] = ACTIONS(1083),
        [sym_comment] = ACTIONS(83),
    },
    [524] = {
        [aux_sym_print_statement_repeat1] = STATE(526),
        [anon_sym_LPAREN] = ACTIONS(265),
        [anon_sym_COMMA] = ACTIONS(1085),
        [anon_sym_STAR] = ACTIONS(953),
        [anon_sym_COLON] = ACTIONS(495),
        [anon_sym_PLUS] = ACTIONS(955),
        [anon_sym_DASH] = ACTIONS(955),
        [anon_sym_SLASH] = ACTIONS(957),
        [anon_sym_STAR_STAR] = ACTIONS(959),
        [anon_sym_PIPE] = ACTIONS(961),
        [anon_sym_AMP] = ACTIONS(963),
        [anon_sym_CARET] = ACTIONS(965),
        [anon_sym_LT_LT] = ACTIONS(955),
        [anon_sym_GT_GT] = ACTIONS(955),
        [anon_sym_and] = ACTIONS(963),
        [anon_sym_or] = ACTIONS(961),
        [anon_sym_LBRACK] = ACTIONS(281),
        [sym_comment] = ACTIONS(83),
    },
    [525] = {
        [sym__expression] = STATE(529),
        [sym_binary_operator] = STATE(45),
        [sym_unary_operator] = STATE(45),
        [sym_subscript] = STATE(45),
        [sym_call] = STATE(45),
        [sym_list] = STATE(45),
        [sym_list_comprehension] = STATE(45),
        [sym_dictionary] = STATE(45),
        [sym_dictionary_comprehension] = STATE(45),
        [sym_set] = STATE(45),
        [sym_set_comprehension] = STATE(45),
        [anon_sym_not] = ACTIONS(949),
        [anon_sym_LBRACK] = ACTIONS(145),
        [anon_sym_LBRACE] = ACTIONS(147),
        [sym_string] = ACTIONS(149),
        [sym_number] = ACTIONS(151),
        [sym_identifier] = ACTIONS(153),
        [sym_comment] = ACTIONS(83),
    },
    [526] = {
        [anon_sym_COMMA] = ACTIONS(1087),
        [anon_sym_COLON] = ACTIONS(511),
        [sym_comment] = ACTIONS(83),
    },
    [527] = {
        [sym__expression] = STATE(528),
        [sym_binary_operator] = STATE(45),
        [sym_unary_operator] = STATE(45),
        [sym_subscript] = STATE(45),
        [sym_call] = STATE(45),
        [sym_list] = STATE(45),
        [sym_list_comprehension] = STATE(45),
        [sym_dictionary] = STATE(45),
        [sym_dictionary_comprehension] = STATE(45),
        [sym_set] = STATE(45),
        [sym_set_comprehension] = STATE(45),
        [anon_sym_not] = ACTIONS(949),
        [anon_sym_LBRACK] = ACTIONS(145),
        [anon_sym_LBRACE] = ACTIONS(147),
        [sym_string] = ACTIONS(149),
        [sym_number] = ACTIONS(151),
        [sym_identifier] = ACTIONS(153),
        [sym_comment] = ACTIONS(83),
    },
    [528] = {
        [anon_sym_LPAREN] = ACTIONS(265),
        [anon_sym_COMMA] = ACTIONS(513),
        [anon_sym_STAR] = ACTIONS(953),
        [anon_sym_COLON] = ACTIONS(513),
        [anon_sym_PLUS] = ACTIONS(955),
        [anon_sym_DASH] = ACTIONS(955),
        [anon_sym_SLASH] = ACTIONS(957),
        [anon_sym_STAR_STAR] = ACTIONS(959),
        [anon_sym_PIPE] = ACTIONS(961),
        [anon_sym_AMP] = ACTIONS(963),
        [anon_sym_CARET] = ACTIONS(965),
        [anon_sym_LT_LT] = ACTIONS(955),
        [anon_sym_GT_GT] = ACTIONS(955),
        [anon_sym_and] = ACTIONS(963),
        [anon_sym_or] = ACTIONS(961),
        [anon_sym_LBRACK] = ACTIONS(281),
        [sym_comment] = ACTIONS(83),
    },
    [529] = {
        [anon_sym_LPAREN] = ACTIONS(265),
        [anon_sym_COMMA] = ACTIONS(515),
        [anon_sym_STAR] = ACTIONS(953),
        [anon_sym_COLON] = ACTIONS(515),
        [anon_sym_PLUS] = ACTIONS(955),
        [anon_sym_DASH] = ACTIONS(955),
        [anon_sym_SLASH] = ACTIONS(957),
        [anon_sym_STAR_STAR] = ACTIONS(959),
        [anon_sym_PIPE] = ACTIONS(961),
        [anon_sym_AMP] = ACTIONS(963),
        [anon_sym_CARET] = ACTIONS(965),
        [anon_sym_LT_LT] = ACTIONS(955),
        [anon_sym_GT_GT] = ACTIONS(955),
        [anon_sym_and] = ACTIONS(963),
        [anon_sym_or] = ACTIONS(961),
        [anon_sym_LBRACK] = ACTIONS(281),
        [sym_comment] = ACTIONS(83),
    },
    [530] = {
        [sym__simple_statement] = STATE(409),
        [sym_import_statement] = STATE(7),
        [sym_import_from_statement] = STATE(7),
        [sym_print_statement] = STATE(7),
        [sym_expression_statement] = STATE(7),
        [sym_return_statement] = STATE(7),
        [sym_delete_statement] = STATE(7),
        [sym__suite] = STATE(531),
        [sym__expression] = STATE(26),
        [sym_binary_operator] = STATE(19),
        [sym_unary_operator] = STATE(19),
        [sym_subscript] = STATE(19),
        [sym_call] = STATE(19),
        [sym_list] = STATE(19),
        [sym_list_comprehension] = STATE(19),
        [sym_dictionary] = STATE(19),
        [sym_dictionary_comprehension] = STATE(19),
        [sym_set] = STATE(19),
        [sym_set_comprehension] = STATE(19),
        [anon_sym_import] = ACTIONS(93),
        [anon_sym_from] = ACTIONS(95),
        [anon_sym_print] = ACTIONS(97),
        [anon_sym_return] = ACTIONS(99),
        [anon_sym_del] = ACTIONS(101),
        [sym_pass_statement] = ACTIONS(103),
        [sym_break_statement] = ACTIONS(103),
        [sym_continue_statement] = ACTIONS(103),
        [anon_sym_not] = ACTIONS(121),
        [anon_sym_LBRACK] = ACTIONS(123),
        [anon_sym_LBRACE] = ACTIONS(125),
        [sym_string] = ACTIONS(127),
        [sym_number] = ACTIONS(129),
        [sym_identifier] = ACTIONS(131),
        [sym_comment] = ACTIONS(83),
        [sym__indent] = ACTIONS(843),
    },
    [531] = {
        [sym_else_clause] = STATE(532),
        [anon_sym_import] = ACTIONS(1089),
        [anon_sym_from] = ACTIONS(1089),
        [anon_sym_print] = ACTIONS(1089),
        [anon_sym_return] = ACTIONS(1089),
        [anon_sym_del] = ACTIONS(1089),
        [sym_pass_statement] = ACTIONS(1089),
        [sym_break_statement] = ACTIONS(1089),
        [sym_continue_statement] = ACTIONS(1089),
        [anon_sym_if] = ACTIONS(1089),
        [anon_sym_else] = ACTIONS(1009),
        [anon_sym_for] = ACTIONS(1089),
        [anon_sym_while] = ACTIONS(1089),
        [anon_sym_try] = ACTIONS(1089),
        [anon_sym_with] = ACTIONS(1089),
        [anon_sym_def] = ACTIONS(1089),
        [anon_sym_class] = ACTIONS(1089),
        [anon_sym_AT] = ACTIONS(1091),
        [anon_sym_not] = ACTIONS(1089),
        [anon_sym_LBRACK] = ACTIONS(1091),
        [anon_sym_LBRACE] = ACTIONS(1091),
        [sym_string] = ACTIONS(1091),
        [sym_number] = ACTIONS(1089),
        [sym_identifier] = ACTIONS(1093),
        [sym_comment] = ACTIONS(83),
        [sym__dedent] = ACTIONS(1091),
    },
    [532] = {
        [anon_sym_import] = ACTIONS(1095),
        [anon_sym_from] = ACTIONS(1095),
        [anon_sym_print] = ACTIONS(1095),
        [anon_sym_return] = ACTIONS(1095),
        [anon_sym_del] = ACTIONS(1095),
        [sym_pass_statement] = ACTIONS(1095),
        [sym_break_statement] = ACTIONS(1095),
        [sym_continue_statement] = ACTIONS(1095),
        [anon_sym_if] = ACTIONS(1095),
        [anon_sym_for] = ACTIONS(1095),
        [anon_sym_while] = ACTIONS(1095),
        [anon_sym_try] = ACTIONS(1095),
        [anon_sym_with] = ACTIONS(1095),
        [anon_sym_def] = ACTIONS(1095),
        [anon_sym_class] = ACTIONS(1095),
        [anon_sym_AT] = ACTIONS(1097),
        [anon_sym_not] = ACTIONS(1095),
        [anon_sym_LBRACK] = ACTIONS(1097),
        [anon_sym_LBRACE] = ACTIONS(1097),
        [sym_string] = ACTIONS(1097),
        [sym_number] = ACTIONS(1095),
        [sym_identifier] = ACTIONS(1099),
        [sym_comment] = ACTIONS(83),
        [sym__dedent] = ACTIONS(1097),
    },
    [533] = {
        [anon_sym_LPAREN] = ACTIONS(265),
        [anon_sym_STAR] = ACTIONS(453),
        [anon_sym_COLON] = ACTIONS(1101),
        [anon_sym_PLUS] = ACTIONS(457),
        [anon_sym_DASH] = ACTIONS(457),
        [anon_sym_SLASH] = ACTIONS(459),
        [anon_sym_STAR_STAR] = ACTIONS(461),
        [anon_sym_PIPE] = ACTIONS(463),
        [anon_sym_AMP] = ACTIONS(465),
        [anon_sym_CARET] = ACTIONS(467),
        [anon_sym_LT_LT] = ACTIONS(457),
        [anon_sym_GT_GT] = ACTIONS(457),
        [anon_sym_and] = ACTIONS(465),
        [anon_sym_or] = ACTIONS(463),
        [anon_sym_LBRACK] = ACTIONS(281),
        [sym_comment] = ACTIONS(83),
    },
    [534] = {
        [sym__simple_statement] = STATE(409),
        [sym_import_statement] = STATE(7),
        [sym_import_from_statement] = STATE(7),
        [sym_print_statement] = STATE(7),
        [sym_expression_statement] = STATE(7),
        [sym_return_statement] = STATE(7),
        [sym_delete_statement] = STATE(7),
        [sym__suite] = STATE(535),
        [sym__expression] = STATE(26),
        [sym_binary_operator] = STATE(19),
        [sym_unary_operator] = STATE(19),
        [sym_subscript] = STATE(19),
        [sym_call] = STATE(19),
        [sym_list] = STATE(19),
        [sym_list_comprehension] = STATE(19),
        [sym_dictionary] = STATE(19),
        [sym_dictionary_comprehension] = STATE(19),
        [sym_set] = STATE(19),
        [sym_set_comprehension] = STATE(19),
        [anon_sym_import] = ACTIONS(93),
        [anon_sym_from] = ACTIONS(95),
        [anon_sym_print] = ACTIONS(97),
        [anon_sym_return] = ACTIONS(99),
        [anon_sym_del] = ACTIONS(101),
        [sym_pass_statement] = ACTIONS(103),
        [sym_break_statement] = ACTIONS(103),
        [sym_continue_statement] = ACTIONS(103),
        [anon_sym_not] = ACTIONS(121),
        [anon_sym_LBRACK] = ACTIONS(123),
        [anon_sym_LBRACE] = ACTIONS(125),
        [sym_string] = ACTIONS(127),
        [sym_number] = ACTIONS(129),
        [sym_identifier] = ACTIONS(131),
        [sym_comment] = ACTIONS(83),
        [sym__indent] = ACTIONS(843),
    },
    [535] = {
        [sym_elif_clause] = STATE(537),
        [sym_else_clause] = STATE(538),
        [aux_sym_if_statement_repeat1] = STATE(539),
        [anon_sym_import] = ACTIONS(1103),
        [anon_sym_from] = ACTIONS(1103),
        [anon_sym_print] = ACTIONS(1103),
        [anon_sym_return] = ACTIONS(1103),
        [anon_sym_del] = ACTIONS(1103),
        [sym_pass_statement] = ACTIONS(1103),
        [sym_break_statement] = ACTIONS(1103),
        [sym_continue_statement] = ACTIONS(1103),
        [anon_sym_if] = ACTIONS(1103),
        [anon_sym_elif] = ACTIONS(1105),
        [anon_sym_else] = ACTIONS(1009),
        [anon_sym_for] = ACTIONS(1103),
        [anon_sym_while] = ACTIONS(1103),
        [anon_sym_try] = ACTIONS(1103),
        [anon_sym_with] = ACTIONS(1103),
        [anon_sym_def] = ACTIONS(1103),
        [anon_sym_class] = ACTIONS(1103),
        [anon_sym_AT] = ACTIONS(1107),
        [anon_sym_not] = ACTIONS(1103),
        [anon_sym_LBRACK] = ACTIONS(1107),
        [anon_sym_LBRACE] = ACTIONS(1107),
        [sym_string] = ACTIONS(1107),
        [sym_number] = ACTIONS(1103),
        [sym_identifier] = ACTIONS(1109),
        [sym_comment] = ACTIONS(83),
        [sym__dedent] = ACTIONS(1107),
    },
    [536] = {
        [sym__expression] = STATE(542),
        [sym_binary_operator] = STATE(45),
        [sym_unary_operator] = STATE(45),
        [sym_subscript] = STATE(45),
        [sym_call] = STATE(45),
        [sym_list] = STATE(45),
        [sym_list_comprehension] = STATE(45),
        [sym_dictionary] = STATE(45),
        [sym_dictionary_comprehension] = STATE(45),
        [sym_set] = STATE(45),
        [sym_set_comprehension] = STATE(45),
        [anon_sym_not] = ACTIONS(143),
        [anon_sym_LBRACK] = ACTIONS(145),
        [anon_sym_LBRACE] = ACTIONS(147),
        [sym_string] = ACTIONS(149),
        [sym_number] = ACTIONS(151),
        [sym_identifier] = ACTIONS(153),
        [sym_comment] = ACTIONS(83),
    },
    [537] = {
        [anon_sym_import] = ACTIONS(1111),
        [anon_sym_from] = ACTIONS(1111),
        [anon_sym_print] = ACTIONS(1111),
        [anon_sym_return] = ACTIONS(1111),
        [anon_sym_del] = ACTIONS(1111),
        [sym_pass_statement] = ACTIONS(1111),
        [sym_break_statement] = ACTIONS(1111),
        [sym_continue_statement] = ACTIONS(1111),
        [anon_sym_if] = ACTIONS(1111),
        [anon_sym_elif] = ACTIONS(1111),
        [anon_sym_else] = ACTIONS(1111),
        [anon_sym_for] = ACTIONS(1111),
        [anon_sym_while] = ACTIONS(1111),
        [anon_sym_try] = ACTIONS(1111),
        [anon_sym_with] = ACTIONS(1111),
        [anon_sym_def] = ACTIONS(1111),
        [anon_sym_class] = ACTIONS(1111),
        [anon_sym_AT] = ACTIONS(1113),
        [anon_sym_not] = ACTIONS(1111),
        [anon_sym_LBRACK] = ACTIONS(1113),
        [anon_sym_LBRACE] = ACTIONS(1113),
        [sym_string] = ACTIONS(1113),
        [sym_number] = ACTIONS(1111),
        [sym_identifier] = ACTIONS(1115),
        [sym_comment] = ACTIONS(83),
        [sym__dedent] = ACTIONS(1113),
    },
    [538] = {
        [anon_sym_import] = ACTIONS(1117),
        [anon_sym_from] = ACTIONS(1117),
        [anon_sym_print] = ACTIONS(1117),
        [anon_sym_return] = ACTIONS(1117),
        [anon_sym_del] = ACTIONS(1117),
        [sym_pass_statement] = ACTIONS(1117),
        [sym_break_statement] = ACTIONS(1117),
        [sym_continue_statement] = ACTIONS(1117),
        [anon_sym_if] = ACTIONS(1117),
        [anon_sym_for] = ACTIONS(1117),
        [anon_sym_while] = ACTIONS(1117),
        [anon_sym_try] = ACTIONS(1117),
        [anon_sym_with] = ACTIONS(1117),
        [anon_sym_def] = ACTIONS(1117),
        [anon_sym_class] = ACTIONS(1117),
        [anon_sym_AT] = ACTIONS(1119),
        [anon_sym_not] = ACTIONS(1117),
        [anon_sym_LBRACK] = ACTIONS(1119),
        [anon_sym_LBRACE] = ACTIONS(1119),
        [sym_string] = ACTIONS(1119),
        [sym_number] = ACTIONS(1117),
        [sym_identifier] = ACTIONS(1121),
        [sym_comment] = ACTIONS(83),
        [sym__dedent] = ACTIONS(1119),
    },
    [539] = {
        [sym_elif_clause] = STATE(540),
        [sym_else_clause] = STATE(541),
        [anon_sym_import] = ACTIONS(1117),
        [anon_sym_from] = ACTIONS(1117),
        [anon_sym_print] = ACTIONS(1117),
        [anon_sym_return] = ACTIONS(1117),
        [anon_sym_del] = ACTIONS(1117),
        [sym_pass_statement] = ACTIONS(1117),
        [sym_break_statement] = ACTIONS(1117),
        [sym_continue_statement] = ACTIONS(1117),
        [anon_sym_if] = ACTIONS(1117),
        [anon_sym_elif] = ACTIONS(1105),
        [anon_sym_else] = ACTIONS(1009),
        [anon_sym_for] = ACTIONS(1117),
        [anon_sym_while] = ACTIONS(1117),
        [anon_sym_try] = ACTIONS(1117),
        [anon_sym_with] = ACTIONS(1117),
        [anon_sym_def] = ACTIONS(1117),
        [anon_sym_class] = ACTIONS(1117),
        [anon_sym_AT] = ACTIONS(1119),
        [anon_sym_not] = ACTIONS(1117),
        [anon_sym_LBRACK] = ACTIONS(1119),
        [anon_sym_LBRACE] = ACTIONS(1119),
        [sym_string] = ACTIONS(1119),
        [sym_number] = ACTIONS(1117),
        [sym_identifier] = ACTIONS(1121),
        [sym_comment] = ACTIONS(83),
        [sym__dedent] = ACTIONS(1119),
    },
    [540] = {
        [anon_sym_import] = ACTIONS(1123),
        [anon_sym_from] = ACTIONS(1123),
        [anon_sym_print] = ACTIONS(1123),
        [anon_sym_return] = ACTIONS(1123),
        [anon_sym_del] = ACTIONS(1123),
        [sym_pass_statement] = ACTIONS(1123),
        [sym_break_statement] = ACTIONS(1123),
        [sym_continue_statement] = ACTIONS(1123),
        [anon_sym_if] = ACTIONS(1123),
        [anon_sym_elif] = ACTIONS(1123),
        [anon_sym_else] = ACTIONS(1123),
        [anon_sym_for] = ACTIONS(1123),
        [anon_sym_while] = ACTIONS(1123),
        [anon_sym_try] = ACTIONS(1123),
        [anon_sym_with] = ACTIONS(1123),
        [anon_sym_def] = ACTIONS(1123),
        [anon_sym_class] = ACTIONS(1123),
        [anon_sym_AT] = ACTIONS(1125),
        [anon_sym_not] = ACTIONS(1123),
        [anon_sym_LBRACK] = ACTIONS(1125),
        [anon_sym_LBRACE] = ACTIONS(1125),
        [sym_string] = ACTIONS(1125),
        [sym_number] = ACTIONS(1123),
        [sym_identifier] = ACTIONS(1127),
        [sym_comment] = ACTIONS(83),
        [sym__dedent] = ACTIONS(1125),
    },
    [541] = {
        [anon_sym_import] = ACTIONS(1129),
        [anon_sym_from] = ACTIONS(1129),
        [anon_sym_print] = ACTIONS(1129),
        [anon_sym_return] = ACTIONS(1129),
        [anon_sym_del] = ACTIONS(1129),
        [sym_pass_statement] = ACTIONS(1129),
        [sym_break_statement] = ACTIONS(1129),
        [sym_continue_statement] = ACTIONS(1129),
        [anon_sym_if] = ACTIONS(1129),
        [anon_sym_for] = ACTIONS(1129),
        [anon_sym_while] = ACTIONS(1129),
        [anon_sym_try] = ACTIONS(1129),
        [anon_sym_with] = ACTIONS(1129),
        [anon_sym_def] = ACTIONS(1129),
        [anon_sym_class] = ACTIONS(1129),
        [anon_sym_AT] = ACTIONS(1131),
        [anon_sym_not] = ACTIONS(1129),
        [anon_sym_LBRACK] = ACTIONS(1131),
        [anon_sym_LBRACE] = ACTIONS(1131),
        [sym_string] = ACTIONS(1131),
        [sym_number] = ACTIONS(1129),
        [sym_identifier] = ACTIONS(1133),
        [sym_comment] = ACTIONS(83),
        [sym__dedent] = ACTIONS(1131),
    },
    [542] = {
        [anon_sym_LPAREN] = ACTIONS(265),
        [anon_sym_STAR] = ACTIONS(453),
        [anon_sym_COLON] = ACTIONS(1135),
        [anon_sym_PLUS] = ACTIONS(457),
        [anon_sym_DASH] = ACTIONS(457),
        [anon_sym_SLASH] = ACTIONS(459),
        [anon_sym_STAR_STAR] = ACTIONS(461),
        [anon_sym_PIPE] = ACTIONS(463),
        [anon_sym_AMP] = ACTIONS(465),
        [anon_sym_CARET] = ACTIONS(467),
        [anon_sym_LT_LT] = ACTIONS(457),
        [anon_sym_GT_GT] = ACTIONS(457),
        [anon_sym_and] = ACTIONS(465),
        [anon_sym_or] = ACTIONS(463),
        [anon_sym_LBRACK] = ACTIONS(281),
        [sym_comment] = ACTIONS(83),
    },
    [543] = {
        [sym__simple_statement] = STATE(409),
        [sym_import_statement] = STATE(7),
        [sym_import_from_statement] = STATE(7),
        [sym_print_statement] = STATE(7),
        [sym_expression_statement] = STATE(7),
        [sym_return_statement] = STATE(7),
        [sym_delete_statement] = STATE(7),
        [sym__suite] = STATE(544),
        [sym__expression] = STATE(26),
        [sym_binary_operator] = STATE(19),
        [sym_unary_operator] = STATE(19),
        [sym_subscript] = STATE(19),
        [sym_call] = STATE(19),
        [sym_list] = STATE(19),
        [sym_list_comprehension] = STATE(19),
        [sym_dictionary] = STATE(19),
        [sym_dictionary_comprehension] = STATE(19),
        [sym_set] = STATE(19),
        [sym_set_comprehension] = STATE(19),
        [anon_sym_import] = ACTIONS(93),
        [anon_sym_from] = ACTIONS(95),
        [anon_sym_print] = ACTIONS(97),
        [anon_sym_return] = ACTIONS(99),
        [anon_sym_del] = ACTIONS(101),
        [sym_pass_statement] = ACTIONS(103),
        [sym_break_statement] = ACTIONS(103),
        [sym_continue_statement] = ACTIONS(103),
        [anon_sym_not] = ACTIONS(121),
        [anon_sym_LBRACK] = ACTIONS(123),
        [anon_sym_LBRACE] = ACTIONS(125),
        [sym_string] = ACTIONS(127),
        [sym_number] = ACTIONS(129),
        [sym_identifier] = ACTIONS(131),
        [sym_comment] = ACTIONS(83),
        [sym__indent] = ACTIONS(843),
    },
    [544] = {
        [anon_sym_import] = ACTIONS(1137),
        [anon_sym_from] = ACTIONS(1137),
        [anon_sym_print] = ACTIONS(1137),
        [anon_sym_return] = ACTIONS(1137),
        [anon_sym_del] = ACTIONS(1137),
        [sym_pass_statement] = ACTIONS(1137),
        [sym_break_statement] = ACTIONS(1137),
        [sym_continue_statement] = ACTIONS(1137),
        [anon_sym_if] = ACTIONS(1137),
        [anon_sym_elif] = ACTIONS(1137),
        [anon_sym_else] = ACTIONS(1137),
        [anon_sym_for] = ACTIONS(1137),
        [anon_sym_while] = ACTIONS(1137),
        [anon_sym_try] = ACTIONS(1137),
        [anon_sym_with] = ACTIONS(1137),
        [anon_sym_def] = ACTIONS(1137),
        [anon_sym_class] = ACTIONS(1137),
        [anon_sym_AT] = ACTIONS(1139),
        [anon_sym_not] = ACTIONS(1137),
        [anon_sym_LBRACK] = ACTIONS(1139),
        [anon_sym_LBRACE] = ACTIONS(1139),
        [sym_string] = ACTIONS(1139),
        [sym_number] = ACTIONS(1137),
        [sym_identifier] = ACTIONS(1141),
        [sym_comment] = ACTIONS(83),
        [sym__dedent] = ACTIONS(1139),
    },
    [545] = {
        [anon_sym_RPAREN] = ACTIONS(1143),
        [sym_comment] = ACTIONS(83),
    },
    [546] = {
        [anon_sym_COLON] = ACTIONS(1145),
        [sym_comment] = ACTIONS(83),
    },
    [547] = {
        [sym__simple_statement] = STATE(385),
        [sym_import_statement] = STATE(7),
        [sym_import_from_statement] = STATE(7),
        [sym_print_statement] = STATE(7),
        [sym_expression_statement] = STATE(7),
        [sym_return_statement] = STATE(7),
        [sym_delete_statement] = STATE(7),
        [sym__suite] = STATE(548),
        [sym__expression] = STATE(26),
        [sym_binary_operator] = STATE(19),
        [sym_unary_operator] = STATE(19),
        [sym_subscript] = STATE(19),
        [sym_call] = STATE(19),
        [sym_list] = STATE(19),
        [sym_list_comprehension] = STATE(19),
        [sym_dictionary] = STATE(19),
        [sym_dictionary_comprehension] = STATE(19),
        [sym_set] = STATE(19),
        [sym_set_comprehension] = STATE(19),
        [anon_sym_import] = ACTIONS(93),
        [anon_sym_from] = ACTIONS(95),
        [anon_sym_print] = ACTIONS(97),
        [anon_sym_return] = ACTIONS(99),
        [anon_sym_del] = ACTIONS(101),
        [sym_pass_statement] = ACTIONS(103),
        [sym_break_statement] = ACTIONS(103),
        [sym_continue_statement] = ACTIONS(103),
        [anon_sym_not] = ACTIONS(121),
        [anon_sym_LBRACK] = ACTIONS(123),
        [anon_sym_LBRACE] = ACTIONS(125),
        [sym_string] = ACTIONS(127),
        [sym_number] = ACTIONS(129),
        [sym_identifier] = ACTIONS(131),
        [sym_comment] = ACTIONS(83),
        [sym__indent] = ACTIONS(789),
    },
    [548] = {
        [ts_builtin_sym_end] = ACTIONS(855),
        [anon_sym_SEMI] = ACTIONS(855),
        [anon_sym_import] = ACTIONS(853),
        [anon_sym_from] = ACTIONS(853),
        [anon_sym_print] = ACTIONS(853),
        [anon_sym_return] = ACTIONS(853),
        [anon_sym_del] = ACTIONS(853),
        [sym_pass_statement] = ACTIONS(853),
        [sym_break_statement] = ACTIONS(853),
        [sym_continue_statement] = ACTIONS(853),
        [anon_sym_if] = ACTIONS(853),
        [anon_sym_for] = ACTIONS(853),
        [anon_sym_while] = ACTIONS(853),
        [anon_sym_try] = ACTIONS(853),
        [anon_sym_with] = ACTIONS(853),
        [anon_sym_def] = ACTIONS(853),
        [anon_sym_class] = ACTIONS(853),
        [anon_sym_AT] = ACTIONS(855),
        [anon_sym_not] = ACTIONS(853),
        [anon_sym_LBRACK] = ACTIONS(855),
        [anon_sym_LBRACE] = ACTIONS(855),
        [sym_string] = ACTIONS(855),
        [sym_number] = ACTIONS(853),
        [sym_identifier] = ACTIONS(857),
        [sym_comment] = ACTIONS(83),
        [sym__newline] = ACTIONS(855),
    },
    [549] = {
        [sym_parameters] = STATE(550),
        [anon_sym_LPAREN] = ACTIONS(859),
        [sym_comment] = ACTIONS(83),
    },
    [550] = {
        [anon_sym_COLON] = ACTIONS(1147),
        [sym_comment] = ACTIONS(83),
    },
    [551] = {
        [sym__simple_statement] = STATE(385),
        [sym_import_statement] = STATE(7),
        [sym_import_from_statement] = STATE(7),
        [sym_print_statement] = STATE(7),
        [sym_expression_statement] = STATE(7),
        [sym_return_statement] = STATE(7),
        [sym_delete_statement] = STATE(7),
        [sym__suite] = STATE(552),
        [sym__expression] = STATE(26),
        [sym_binary_operator] = STATE(19),
        [sym_unary_operator] = STATE(19),
        [sym_subscript] = STATE(19),
        [sym_call] = STATE(19),
        [sym_list] = STATE(19),
        [sym_list_comprehension] = STATE(19),
        [sym_dictionary] = STATE(19),
        [sym_dictionary_comprehension] = STATE(19),
        [sym_set] = STATE(19),
        [sym_set_comprehension] = STATE(19),
        [anon_sym_import] = ACTIONS(93),
        [anon_sym_from] = ACTIONS(95),
        [anon_sym_print] = ACTIONS(97),
        [anon_sym_return] = ACTIONS(99),
        [anon_sym_del] = ACTIONS(101),
        [sym_pass_statement] = ACTIONS(103),
        [sym_break_statement] = ACTIONS(103),
        [sym_continue_statement] = ACTIONS(103),
        [anon_sym_not] = ACTIONS(121),
        [anon_sym_LBRACK] = ACTIONS(123),
        [anon_sym_LBRACE] = ACTIONS(125),
        [sym_string] = ACTIONS(127),
        [sym_number] = ACTIONS(129),
        [sym_identifier] = ACTIONS(131),
        [sym_comment] = ACTIONS(83),
        [sym__indent] = ACTIONS(789),
    },
    [552] = {
        [ts_builtin_sym_end] = ACTIONS(871),
        [anon_sym_SEMI] = ACTIONS(871),
        [anon_sym_import] = ACTIONS(869),
        [anon_sym_from] = ACTIONS(869),
        [anon_sym_print] = ACTIONS(869),
        [anon_sym_return] = ACTIONS(869),
        [anon_sym_del] = ACTIONS(869),
        [sym_pass_statement] = ACTIONS(869),
        [sym_break_statement] = ACTIONS(869),
        [sym_continue_statement] = ACTIONS(869),
        [anon_sym_if] = ACTIONS(869),
        [anon_sym_for] = ACTIONS(869),
        [anon_sym_while] = ACTIONS(869),
        [anon_sym_try] = ACTIONS(869),
        [anon_sym_with] = ACTIONS(869),
        [anon_sym_def] = ACTIONS(869),
        [anon_sym_class] = ACTIONS(869),
        [anon_sym_AT] = ACTIONS(871),
        [anon_sym_not] = ACTIONS(869),
        [anon_sym_LBRACK] = ACTIONS(871),
        [anon_sym_LBRACE] = ACTIONS(871),
        [sym_string] = ACTIONS(871),
        [sym_number] = ACTIONS(869),
        [sym_identifier] = ACTIONS(873),
        [sym_comment] = ACTIONS(83),
        [sym__newline] = ACTIONS(871),
    },
    [553] = {
        [aux_sym_with_statement_repeat1] = STATE(555),
        [anon_sym_COMMA] = ACTIONS(927),
        [anon_sym_COLON] = ACTIONS(1149),
        [sym_comment] = ACTIONS(83),
    },
    [554] = {
        [sym__simple_statement] = STATE(385),
        [sym_import_statement] = STATE(7),
        [sym_import_from_statement] = STATE(7),
        [sym_print_statement] = STATE(7),
        [sym_expression_statement] = STATE(7),
        [sym_return_statement] = STATE(7),
        [sym_delete_statement] = STATE(7),
        [sym__suite] = STATE(558),
        [sym__expression] = STATE(26),
        [sym_binary_operator] = STATE(19),
        [sym_unary_operator] = STATE(19),
        [sym_subscript] = STATE(19),
        [sym_call] = STATE(19),
        [sym_list] = STATE(19),
        [sym_list_comprehension] = STATE(19),
        [sym_dictionary] = STATE(19),
        [sym_dictionary_comprehension] = STATE(19),
        [sym_set] = STATE(19),
        [sym_set_comprehension] = STATE(19),
        [anon_sym_import] = ACTIONS(93),
        [anon_sym_from] = ACTIONS(95),
        [anon_sym_print] = ACTIONS(97),
        [anon_sym_return] = ACTIONS(99),
        [anon_sym_del] = ACTIONS(101),
        [sym_pass_statement] = ACTIONS(103),
        [sym_break_statement] = ACTIONS(103),
        [sym_continue_statement] = ACTIONS(103),
        [anon_sym_not] = ACTIONS(121),
        [anon_sym_LBRACK] = ACTIONS(123),
        [anon_sym_LBRACE] = ACTIONS(125),
        [sym_string] = ACTIONS(127),
        [sym_number] = ACTIONS(129),
        [sym_identifier] = ACTIONS(131),
        [sym_comment] = ACTIONS(83),
        [sym__indent] = ACTIONS(789),
    },
    [555] = {
        [anon_sym_COMMA] = ACTIONS(967),
        [anon_sym_COLON] = ACTIONS(1151),
        [sym_comment] = ACTIONS(83),
    },
    [556] = {
        [sym__simple_statement] = STATE(385),
        [sym_import_statement] = STATE(7),
        [sym_import_from_statement] = STATE(7),
        [sym_print_statement] = STATE(7),
        [sym_expression_statement] = STATE(7),
        [sym_return_statement] = STATE(7),
        [sym_delete_statement] = STATE(7),
        [sym__suite] = STATE(557),
        [sym__expression] = STATE(26),
        [sym_binary_operator] = STATE(19),
        [sym_unary_operator] = STATE(19),
        [sym_subscript] = STATE(19),
        [sym_call] = STATE(19),
        [sym_list] = STATE(19),
        [sym_list_comprehension] = STATE(19),
        [sym_dictionary] = STATE(19),
        [sym_dictionary_comprehension] = STATE(19),
        [sym_set] = STATE(19),
        [sym_set_comprehension] = STATE(19),
        [anon_sym_import] = ACTIONS(93),
        [anon_sym_from] = ACTIONS(95),
        [anon_sym_print] = ACTIONS(97),
        [anon_sym_return] = ACTIONS(99),
        [anon_sym_del] = ACTIONS(101),
        [sym_pass_statement] = ACTIONS(103),
        [sym_break_statement] = ACTIONS(103),
        [sym_continue_statement] = ACTIONS(103),
        [anon_sym_not] = ACTIONS(121),
        [anon_sym_LBRACK] = ACTIONS(123),
        [anon_sym_LBRACE] = ACTIONS(125),
        [sym_string] = ACTIONS(127),
        [sym_number] = ACTIONS(129),
        [sym_identifier] = ACTIONS(131),
        [sym_comment] = ACTIONS(83),
        [sym__indent] = ACTIONS(789),
    },
    [557] = {
        [ts_builtin_sym_end] = ACTIONS(973),
        [anon_sym_SEMI] = ACTIONS(973),
        [anon_sym_import] = ACTIONS(971),
        [anon_sym_from] = ACTIONS(971),
        [anon_sym_print] = ACTIONS(971),
        [anon_sym_return] = ACTIONS(971),
        [anon_sym_del] = ACTIONS(971),
        [sym_pass_statement] = ACTIONS(971),
        [sym_break_statement] = ACTIONS(971),
        [sym_continue_statement] = ACTIONS(971),
        [anon_sym_if] = ACTIONS(971),
        [anon_sym_for] = ACTIONS(971),
        [anon_sym_while] = ACTIONS(971),
        [anon_sym_try] = ACTIONS(971),
        [anon_sym_with] = ACTIONS(971),
        [anon_sym_def] = ACTIONS(971),
        [anon_sym_class] = ACTIONS(971),
        [anon_sym_AT] = ACTIONS(973),
        [anon_sym_not] = ACTIONS(971),
        [anon_sym_LBRACK] = ACTIONS(973),
        [anon_sym_LBRACE] = ACTIONS(973),
        [sym_string] = ACTIONS(973),
        [sym_number] = ACTIONS(971),
        [sym_identifier] = ACTIONS(975),
        [sym_comment] = ACTIONS(83),
        [sym__newline] = ACTIONS(973),
    },
    [558] = {
        [ts_builtin_sym_end] = ACTIONS(981),
        [anon_sym_SEMI] = ACTIONS(981),
        [anon_sym_import] = ACTIONS(979),
        [anon_sym_from] = ACTIONS(979),
        [anon_sym_print] = ACTIONS(979),
        [anon_sym_return] = ACTIONS(979),
        [anon_sym_del] = ACTIONS(979),
        [sym_pass_statement] = ACTIONS(979),
        [sym_break_statement] = ACTIONS(979),
        [sym_continue_statement] = ACTIONS(979),
        [anon_sym_if] = ACTIONS(979),
        [anon_sym_for] = ACTIONS(979),
        [anon_sym_while] = ACTIONS(979),
        [anon_sym_try] = ACTIONS(979),
        [anon_sym_with] = ACTIONS(979),
        [anon_sym_def] = ACTIONS(979),
        [anon_sym_class] = ACTIONS(979),
        [anon_sym_AT] = ACTIONS(981),
        [anon_sym_not] = ACTIONS(979),
        [anon_sym_LBRACK] = ACTIONS(981),
        [anon_sym_LBRACE] = ACTIONS(981),
        [sym_string] = ACTIONS(981),
        [sym_number] = ACTIONS(979),
        [sym_identifier] = ACTIONS(983),
        [sym_comment] = ACTIONS(83),
        [sym__newline] = ACTIONS(981),
    },
    [559] = {
        [sym__simple_statement] = STATE(491),
        [sym_import_statement] = STATE(7),
        [sym_import_from_statement] = STATE(7),
        [sym_print_statement] = STATE(7),
        [sym_expression_statement] = STATE(7),
        [sym_return_statement] = STATE(7),
        [sym_delete_statement] = STATE(7),
        [sym__suite] = STATE(560),
        [sym__expression] = STATE(26),
        [sym_binary_operator] = STATE(19),
        [sym_unary_operator] = STATE(19),
        [sym_subscript] = STATE(19),
        [sym_call] = STATE(19),
        [sym_list] = STATE(19),
        [sym_list_comprehension] = STATE(19),
        [sym_dictionary] = STATE(19),
        [sym_dictionary_comprehension] = STATE(19),
        [sym_set] = STATE(19),
        [sym_set_comprehension] = STATE(19),
        [anon_sym_import] = ACTIONS(93),
        [anon_sym_from] = ACTIONS(95),
        [anon_sym_print] = ACTIONS(97),
        [anon_sym_return] = ACTIONS(99),
        [anon_sym_del] = ACTIONS(101),
        [sym_pass_statement] = ACTIONS(103),
        [sym_break_statement] = ACTIONS(103),
        [sym_continue_statement] = ACTIONS(103),
        [anon_sym_not] = ACTIONS(121),
        [anon_sym_LBRACK] = ACTIONS(123),
        [anon_sym_LBRACE] = ACTIONS(125),
        [sym_string] = ACTIONS(127),
        [sym_number] = ACTIONS(129),
        [sym_identifier] = ACTIONS(131),
        [sym_comment] = ACTIONS(83),
        [sym__indent] = ACTIONS(987),
    },
    [560] = {
        [sym_except_clause] = STATE(563),
        [sym_finally_clause] = STATE(564),
        [aux_sym_try_statement_repeat1] = STATE(565),
        [anon_sym_except] = ACTIONS(1153),
        [anon_sym_finally] = ACTIONS(1155),
        [sym_comment] = ACTIONS(83),
    },
    [561] = {
        [sym__expression] = STATE(575),
        [sym_binary_operator] = STATE(45),
        [sym_unary_operator] = STATE(45),
        [sym_subscript] = STATE(45),
        [sym_call] = STATE(45),
        [sym_list] = STATE(45),
        [sym_list_comprehension] = STATE(45),
        [sym_dictionary] = STATE(45),
        [sym_dictionary_comprehension] = STATE(45),
        [sym_set] = STATE(45),
        [sym_set_comprehension] = STATE(45),
        [anon_sym_not] = ACTIONS(159),
        [anon_sym_LBRACK] = ACTIONS(145),
        [anon_sym_LBRACE] = ACTIONS(147),
        [sym_string] = ACTIONS(149),
        [sym_number] = ACTIONS(151),
        [sym_identifier] = ACTIONS(153),
        [sym_comment] = ACTIONS(83),
    },
    [562] = {
        [anon_sym_COLON] = ACTIONS(1157),
        [sym_comment] = ACTIONS(83),
    },
    [563] = {
        [ts_builtin_sym_end] = ACTIONS(999),
        [anon_sym_SEMI] = ACTIONS(999),
        [anon_sym_import] = ACTIONS(997),
        [anon_sym_from] = ACTIONS(997),
        [anon_sym_print] = ACTIONS(997),
        [anon_sym_return] = ACTIONS(997),
        [anon_sym_del] = ACTIONS(997),
        [sym_pass_statement] = ACTIONS(997),
        [sym_break_statement] = ACTIONS(997),
        [sym_continue_statement] = ACTIONS(997),
        [anon_sym_if] = ACTIONS(997),
        [anon_sym_else] = ACTIONS(997),
        [anon_sym_for] = ACTIONS(997),
        [anon_sym_while] = ACTIONS(997),
        [anon_sym_try] = ACTIONS(997),
        [anon_sym_except] = ACTIONS(997),
        [anon_sym_finally] = ACTIONS(997),
        [anon_sym_with] = ACTIONS(997),
        [anon_sym_def] = ACTIONS(997),
        [anon_sym_class] = ACTIONS(997),
        [anon_sym_AT] = ACTIONS(999),
        [anon_sym_not] = ACTIONS(997),
        [anon_sym_LBRACK] = ACTIONS(999),
        [anon_sym_LBRACE] = ACTIONS(999),
        [sym_string] = ACTIONS(999),
        [sym_number] = ACTIONS(997),
        [sym_identifier] = ACTIONS(1001),
        [sym_comment] = ACTIONS(83),
        [sym__newline] = ACTIONS(999),
    },
    [564] = {
        [ts_builtin_sym_end] = ACTIONS(1005),
        [anon_sym_SEMI] = ACTIONS(1005),
        [anon_sym_import] = ACTIONS(1003),
        [anon_sym_from] = ACTIONS(1003),
        [anon_sym_print] = ACTIONS(1003),
        [anon_sym_return] = ACTIONS(1003),
        [anon_sym_del] = ACTIONS(1003),
        [sym_pass_statement] = ACTIONS(1003),
        [sym_break_statement] = ACTIONS(1003),
        [sym_continue_statement] = ACTIONS(1003),
        [anon_sym_if] = ACTIONS(1003),
        [anon_sym_for] = ACTIONS(1003),
        [anon_sym_while] = ACTIONS(1003),
        [anon_sym_try] = ACTIONS(1003),
        [anon_sym_with] = ACTIONS(1003),
        [anon_sym_def] = ACTIONS(1003),
        [anon_sym_class] = ACTIONS(1003),
        [anon_sym_AT] = ACTIONS(1005),
        [anon_sym_not] = ACTIONS(1003),
        [anon_sym_LBRACK] = ACTIONS(1005),
        [anon_sym_LBRACE] = ACTIONS(1005),
        [sym_string] = ACTIONS(1005),
        [sym_number] = ACTIONS(1003),
        [sym_identifier] = ACTIONS(1007),
        [sym_comment] = ACTIONS(83),
        [sym__newline] = ACTIONS(1005),
    },
    [565] = {
        [sym_else_clause] = STATE(567),
        [sym_except_clause] = STATE(568),
        [sym_finally_clause] = STATE(569),
        [ts_builtin_sym_end] = ACTIONS(1005),
        [anon_sym_SEMI] = ACTIONS(1005),
        [anon_sym_import] = ACTIONS(1003),
        [anon_sym_from] = ACTIONS(1003),
        [anon_sym_print] = ACTIONS(1003),
        [anon_sym_return] = ACTIONS(1003),
        [anon_sym_del] = ACTIONS(1003),
        [sym_pass_statement] = ACTIONS(1003),
        [sym_break_statement] = ACTIONS(1003),
        [sym_continue_statement] = ACTIONS(1003),
        [anon_sym_if] = ACTIONS(1003),
        [anon_sym_else] = ACTIONS(1159),
        [anon_sym_for] = ACTIONS(1003),
        [anon_sym_while] = ACTIONS(1003),
        [anon_sym_try] = ACTIONS(1003),
        [anon_sym_except] = ACTIONS(1161),
        [anon_sym_finally] = ACTIONS(1163),
        [anon_sym_with] = ACTIONS(1003),
        [anon_sym_def] = ACTIONS(1003),
        [anon_sym_class] = ACTIONS(1003),
        [anon_sym_AT] = ACTIONS(1005),
        [anon_sym_not] = ACTIONS(1003),
        [anon_sym_LBRACK] = ACTIONS(1005),
        [anon_sym_LBRACE] = ACTIONS(1005),
        [sym_string] = ACTIONS(1005),
        [sym_number] = ACTIONS(1003),
        [sym_identifier] = ACTIONS(1007),
        [sym_comment] = ACTIONS(83),
        [sym__newline] = ACTIONS(1005),
    },
    [566] = {
        [anon_sym_COLON] = ACTIONS(1165),
        [sym_comment] = ACTIONS(83),
    },
    [567] = {
        [sym_finally_clause] = STATE(570),
        [ts_builtin_sym_end] = ACTIONS(1019),
        [anon_sym_SEMI] = ACTIONS(1019),
        [anon_sym_import] = ACTIONS(1017),
        [anon_sym_from] = ACTIONS(1017),
        [anon_sym_print] = ACTIONS(1017),
        [anon_sym_return] = ACTIONS(1017),
        [anon_sym_del] = ACTIONS(1017),
        [sym_pass_statement] = ACTIONS(1017),
        [sym_break_statement] = ACTIONS(1017),
        [sym_continue_statement] = ACTIONS(1017),
        [anon_sym_if] = ACTIONS(1017),
        [anon_sym_for] = ACTIONS(1017),
        [anon_sym_while] = ACTIONS(1017),
        [anon_sym_try] = ACTIONS(1017),
        [anon_sym_finally] = ACTIONS(1163),
        [anon_sym_with] = ACTIONS(1017),
        [anon_sym_def] = ACTIONS(1017),
        [anon_sym_class] = ACTIONS(1017),
        [anon_sym_AT] = ACTIONS(1019),
        [anon_sym_not] = ACTIONS(1017),
        [anon_sym_LBRACK] = ACTIONS(1019),
        [anon_sym_LBRACE] = ACTIONS(1019),
        [sym_string] = ACTIONS(1019),
        [sym_number] = ACTIONS(1017),
        [sym_identifier] = ACTIONS(1021),
        [sym_comment] = ACTIONS(83),
        [sym__newline] = ACTIONS(1019),
    },
    [568] = {
        [ts_builtin_sym_end] = ACTIONS(1025),
        [anon_sym_SEMI] = ACTIONS(1025),
        [anon_sym_import] = ACTIONS(1023),
        [anon_sym_from] = ACTIONS(1023),
        [anon_sym_print] = ACTIONS(1023),
        [anon_sym_return] = ACTIONS(1023),
        [anon_sym_del] = ACTIONS(1023),
        [sym_pass_statement] = ACTIONS(1023),
        [sym_break_statement] = ACTIONS(1023),
        [sym_continue_statement] = ACTIONS(1023),
        [anon_sym_if] = ACTIONS(1023),
        [anon_sym_else] = ACTIONS(1023),
        [anon_sym_for] = ACTIONS(1023),
        [anon_sym_while] = ACTIONS(1023),
        [anon_sym_try] = ACTIONS(1023),
        [anon_sym_except] = ACTIONS(1023),
        [anon_sym_finally] = ACTIONS(1023),
        [anon_sym_with] = ACTIONS(1023),
        [anon_sym_def] = ACTIONS(1023),
        [anon_sym_class] = ACTIONS(1023),
        [anon_sym_AT] = ACTIONS(1025),
        [anon_sym_not] = ACTIONS(1023),
        [anon_sym_LBRACK] = ACTIONS(1025),
        [anon_sym_LBRACE] = ACTIONS(1025),
        [sym_string] = ACTIONS(1025),
        [sym_number] = ACTIONS(1023),
        [sym_identifier] = ACTIONS(1027),
        [sym_comment] = ACTIONS(83),
        [sym__newline] = ACTIONS(1025),
    },
    [569] = {
        [ts_builtin_sym_end] = ACTIONS(1019),
        [anon_sym_SEMI] = ACTIONS(1019),
        [anon_sym_import] = ACTIONS(1017),
        [anon_sym_from] = ACTIONS(1017),
        [anon_sym_print] = ACTIONS(1017),
        [anon_sym_return] = ACTIONS(1017),
        [anon_sym_del] = ACTIONS(1017),
        [sym_pass_statement] = ACTIONS(1017),
        [sym_break_statement] = ACTIONS(1017),
        [sym_continue_statement] = ACTIONS(1017),
        [anon_sym_if] = ACTIONS(1017),
        [anon_sym_for] = ACTIONS(1017),
        [anon_sym_while] = ACTIONS(1017),
        [anon_sym_try] = ACTIONS(1017),
        [anon_sym_with] = ACTIONS(1017),
        [anon_sym_def] = ACTIONS(1017),
        [anon_sym_class] = ACTIONS(1017),
        [anon_sym_AT] = ACTIONS(1019),
        [anon_sym_not] = ACTIONS(1017),
        [anon_sym_LBRACK] = ACTIONS(1019),
        [anon_sym_LBRACE] = ACTIONS(1019),
        [sym_string] = ACTIONS(1019),
        [sym_number] = ACTIONS(1017),
        [sym_identifier] = ACTIONS(1021),
        [sym_comment] = ACTIONS(83),
        [sym__newline] = ACTIONS(1019),
    },
    [570] = {
        [ts_builtin_sym_end] = ACTIONS(1031),
        [anon_sym_SEMI] = ACTIONS(1031),
        [anon_sym_import] = ACTIONS(1029),
        [anon_sym_from] = ACTIONS(1029),
        [anon_sym_print] = ACTIONS(1029),
        [anon_sym_return] = ACTIONS(1029),
        [anon_sym_del] = ACTIONS(1029),
        [sym_pass_statement] = ACTIONS(1029),
        [sym_break_statement] = ACTIONS(1029),
        [sym_continue_statement] = ACTIONS(1029),
        [anon_sym_if] = ACTIONS(1029),
        [anon_sym_for] = ACTIONS(1029),
        [anon_sym_while] = ACTIONS(1029),
        [anon_sym_try] = ACTIONS(1029),
        [anon_sym_with] = ACTIONS(1029),
        [anon_sym_def] = ACTIONS(1029),
        [anon_sym_class] = ACTIONS(1029),
        [anon_sym_AT] = ACTIONS(1031),
        [anon_sym_not] = ACTIONS(1029),
        [anon_sym_LBRACK] = ACTIONS(1031),
        [anon_sym_LBRACE] = ACTIONS(1031),
        [sym_string] = ACTIONS(1031),
        [sym_number] = ACTIONS(1029),
        [sym_identifier] = ACTIONS(1033),
        [sym_comment] = ACTIONS(83),
        [sym__newline] = ACTIONS(1031),
    },
    [571] = {
        [sym__simple_statement] = STATE(385),
        [sym_import_statement] = STATE(7),
        [sym_import_from_statement] = STATE(7),
        [sym_print_statement] = STATE(7),
        [sym_expression_statement] = STATE(7),
        [sym_return_statement] = STATE(7),
        [sym_delete_statement] = STATE(7),
        [sym__suite] = STATE(572),
        [sym__expression] = STATE(26),
        [sym_binary_operator] = STATE(19),
        [sym_unary_operator] = STATE(19),
        [sym_subscript] = STATE(19),
        [sym_call] = STATE(19),
        [sym_list] = STATE(19),
        [sym_list_comprehension] = STATE(19),
        [sym_dictionary] = STATE(19),
        [sym_dictionary_comprehension] = STATE(19),
        [sym_set] = STATE(19),
        [sym_set_comprehension] = STATE(19),
        [anon_sym_import] = ACTIONS(93),
        [anon_sym_from] = ACTIONS(95),
        [anon_sym_print] = ACTIONS(97),
        [anon_sym_return] = ACTIONS(99),
        [anon_sym_del] = ACTIONS(101),
        [sym_pass_statement] = ACTIONS(103),
        [sym_break_statement] = ACTIONS(103),
        [sym_continue_statement] = ACTIONS(103),
        [anon_sym_not] = ACTIONS(121),
        [anon_sym_LBRACK] = ACTIONS(123),
        [anon_sym_LBRACE] = ACTIONS(125),
        [sym_string] = ACTIONS(127),
        [sym_number] = ACTIONS(129),
        [sym_identifier] = ACTIONS(131),
        [sym_comment] = ACTIONS(83),
        [sym__indent] = ACTIONS(789),
    },
    [572] = {
        [ts_builtin_sym_end] = ACTIONS(1037),
        [anon_sym_SEMI] = ACTIONS(1037),
        [anon_sym_import] = ACTIONS(1035),
        [anon_sym_from] = ACTIONS(1035),
        [anon_sym_print] = ACTIONS(1035),
        [anon_sym_return] = ACTIONS(1035),
        [anon_sym_del] = ACTIONS(1035),
        [sym_pass_statement] = ACTIONS(1035),
        [sym_break_statement] = ACTIONS(1035),
        [sym_continue_statement] = ACTIONS(1035),
        [anon_sym_if] = ACTIONS(1035),
        [anon_sym_for] = ACTIONS(1035),
        [anon_sym_while] = ACTIONS(1035),
        [anon_sym_try] = ACTIONS(1035),
        [anon_sym_finally] = ACTIONS(1035),
        [anon_sym_with] = ACTIONS(1035),
        [anon_sym_def] = ACTIONS(1035),
        [anon_sym_class] = ACTIONS(1035),
        [anon_sym_AT] = ACTIONS(1037),
        [anon_sym_not] = ACTIONS(1035),
        [anon_sym_LBRACK] = ACTIONS(1037),
        [anon_sym_LBRACE] = ACTIONS(1037),
        [sym_string] = ACTIONS(1037),
        [sym_number] = ACTIONS(1035),
        [sym_identifier] = ACTIONS(1039),
        [sym_comment] = ACTIONS(83),
        [sym__newline] = ACTIONS(1037),
    },
    [573] = {
        [sym__simple_statement] = STATE(385),
        [sym_import_statement] = STATE(7),
        [sym_import_from_statement] = STATE(7),
        [sym_print_statement] = STATE(7),
        [sym_expression_statement] = STATE(7),
        [sym_return_statement] = STATE(7),
        [sym_delete_statement] = STATE(7),
        [sym__suite] = STATE(574),
        [sym__expression] = STATE(26),
        [sym_binary_operator] = STATE(19),
        [sym_unary_operator] = STATE(19),
        [sym_subscript] = STATE(19),
        [sym_call] = STATE(19),
        [sym_list] = STATE(19),
        [sym_list_comprehension] = STATE(19),
        [sym_dictionary] = STATE(19),
        [sym_dictionary_comprehension] = STATE(19),
        [sym_set] = STATE(19),
        [sym_set_comprehension] = STATE(19),
        [anon_sym_import] = ACTIONS(93),
        [anon_sym_from] = ACTIONS(95),
        [anon_sym_print] = ACTIONS(97),
        [anon_sym_return] = ACTIONS(99),
        [anon_sym_del] = ACTIONS(101),
        [sym_pass_statement] = ACTIONS(103),
        [sym_break_statement] = ACTIONS(103),
        [sym_continue_statement] = ACTIONS(103),
        [anon_sym_not] = ACTIONS(121),
        [anon_sym_LBRACK] = ACTIONS(123),
        [anon_sym_LBRACE] = ACTIONS(125),
        [sym_string] = ACTIONS(127),
        [sym_number] = ACTIONS(129),
        [sym_identifier] = ACTIONS(131),
        [sym_comment] = ACTIONS(83),
        [sym__indent] = ACTIONS(789),
    },
    [574] = {
        [ts_builtin_sym_end] = ACTIONS(1043),
        [anon_sym_SEMI] = ACTIONS(1043),
        [anon_sym_import] = ACTIONS(1041),
        [anon_sym_from] = ACTIONS(1041),
        [anon_sym_print] = ACTIONS(1041),
        [anon_sym_return] = ACTIONS(1041),
        [anon_sym_del] = ACTIONS(1041),
        [sym_pass_statement] = ACTIONS(1041),
        [sym_break_statement] = ACTIONS(1041),
        [sym_continue_statement] = ACTIONS(1041),
        [anon_sym_if] = ACTIONS(1041),
        [anon_sym_for] = ACTIONS(1041),
        [anon_sym_while] = ACTIONS(1041),
        [anon_sym_try] = ACTIONS(1041),
        [anon_sym_with] = ACTIONS(1041),
        [anon_sym_def] = ACTIONS(1041),
        [anon_sym_class] = ACTIONS(1041),
        [anon_sym_AT] = ACTIONS(1043),
        [anon_sym_not] = ACTIONS(1041),
        [anon_sym_LBRACK] = ACTIONS(1043),
        [anon_sym_LBRACE] = ACTIONS(1043),
        [sym_string] = ACTIONS(1043),
        [sym_number] = ACTIONS(1041),
        [sym_identifier] = ACTIONS(1045),
        [sym_comment] = ACTIONS(83),
        [sym__newline] = ACTIONS(1043),
    },
    [575] = {
        [anon_sym_LPAREN] = ACTIONS(265),
        [anon_sym_COMMA] = ACTIONS(1167),
        [anon_sym_as] = ACTIONS(1167),
        [anon_sym_STAR] = ACTIONS(935),
        [anon_sym_COLON] = ACTIONS(1169),
        [anon_sym_PLUS] = ACTIONS(937),
        [anon_sym_DASH] = ACTIONS(937),
        [anon_sym_SLASH] = ACTIONS(939),
        [anon_sym_STAR_STAR] = ACTIONS(941),
        [anon_sym_PIPE] = ACTIONS(943),
        [anon_sym_AMP] = ACTIONS(945),
        [anon_sym_CARET] = ACTIONS(947),
        [anon_sym_LT_LT] = ACTIONS(937),
        [anon_sym_GT_GT] = ACTIONS(937),
        [anon_sym_and] = ACTIONS(945),
        [anon_sym_or] = ACTIONS(943),
        [anon_sym_LBRACK] = ACTIONS(281),
        [sym_comment] = ACTIONS(83),
    },
    [576] = {
        [sym__expression] = STATE(579),
        [sym_binary_operator] = STATE(45),
        [sym_unary_operator] = STATE(45),
        [sym_subscript] = STATE(45),
        [sym_call] = STATE(45),
        [sym_list] = STATE(45),
        [sym_list_comprehension] = STATE(45),
        [sym_dictionary] = STATE(45),
        [sym_dictionary_comprehension] = STATE(45),
        [sym_set] = STATE(45),
        [sym_set_comprehension] = STATE(45),
        [anon_sym_not] = ACTIONS(143),
        [anon_sym_LBRACK] = ACTIONS(145),
        [anon_sym_LBRACE] = ACTIONS(147),
        [sym_string] = ACTIONS(149),
        [sym_number] = ACTIONS(151),
        [sym_identifier] = ACTIONS(153),
        [sym_comment] = ACTIONS(83),
    },
    [577] = {
        [sym__simple_statement] = STATE(385),
        [sym_import_statement] = STATE(7),
        [sym_import_from_statement] = STATE(7),
        [sym_print_statement] = STATE(7),
        [sym_expression_statement] = STATE(7),
        [sym_return_statement] = STATE(7),
        [sym_delete_statement] = STATE(7),
        [sym__suite] = STATE(578),
        [sym__expression] = STATE(26),
        [sym_binary_operator] = STATE(19),
        [sym_unary_operator] = STATE(19),
        [sym_subscript] = STATE(19),
        [sym_call] = STATE(19),
        [sym_list] = STATE(19),
        [sym_list_comprehension] = STATE(19),
        [sym_dictionary] = STATE(19),
        [sym_dictionary_comprehension] = STATE(19),
        [sym_set] = STATE(19),
        [sym_set_comprehension] = STATE(19),
        [anon_sym_import] = ACTIONS(93),
        [anon_sym_from] = ACTIONS(95),
        [anon_sym_print] = ACTIONS(97),
        [anon_sym_return] = ACTIONS(99),
        [anon_sym_del] = ACTIONS(101),
        [sym_pass_statement] = ACTIONS(103),
        [sym_break_statement] = ACTIONS(103),
        [sym_continue_statement] = ACTIONS(103),
        [anon_sym_not] = ACTIONS(121),
        [anon_sym_LBRACK] = ACTIONS(123),
        [anon_sym_LBRACE] = ACTIONS(125),
        [sym_string] = ACTIONS(127),
        [sym_number] = ACTIONS(129),
        [sym_identifier] = ACTIONS(131),
        [sym_comment] = ACTIONS(83),
        [sym__indent] = ACTIONS(789),
    },
    [578] = {
        [ts_builtin_sym_end] = ACTIONS(1053),
        [anon_sym_SEMI] = ACTIONS(1053),
        [anon_sym_import] = ACTIONS(1051),
        [anon_sym_from] = ACTIONS(1051),
        [anon_sym_print] = ACTIONS(1051),
        [anon_sym_return] = ACTIONS(1051),
        [anon_sym_del] = ACTIONS(1051),
        [sym_pass_statement] = ACTIONS(1051),
        [sym_break_statement] = ACTIONS(1051),
        [sym_continue_statement] = ACTIONS(1051),
        [anon_sym_if] = ACTIONS(1051),
        [anon_sym_else] = ACTIONS(1051),
        [anon_sym_for] = ACTIONS(1051),
        [anon_sym_while] = ACTIONS(1051),
        [anon_sym_try] = ACTIONS(1051),
        [anon_sym_except] = ACTIONS(1051),
        [anon_sym_finally] = ACTIONS(1051),
        [anon_sym_with] = ACTIONS(1051),
        [anon_sym_def] = ACTIONS(1051),
        [anon_sym_class] = ACTIONS(1051),
        [anon_sym_AT] = ACTIONS(1053),
        [anon_sym_not] = ACTIONS(1051),
        [anon_sym_LBRACK] = ACTIONS(1053),
        [anon_sym_LBRACE] = ACTIONS(1053),
        [sym_string] = ACTIONS(1053),
        [sym_number] = ACTIONS(1051),
        [sym_identifier] = ACTIONS(1055),
        [sym_comment] = ACTIONS(83),
        [sym__newline] = ACTIONS(1053),
    },
    [579] = {
        [anon_sym_LPAREN] = ACTIONS(265),
        [anon_sym_STAR] = ACTIONS(453),
        [anon_sym_COLON] = ACTIONS(1171),
        [anon_sym_PLUS] = ACTIONS(457),
        [anon_sym_DASH] = ACTIONS(457),
        [anon_sym_SLASH] = ACTIONS(459),
        [anon_sym_STAR_STAR] = ACTIONS(461),
        [anon_sym_PIPE] = ACTIONS(463),
        [anon_sym_AMP] = ACTIONS(465),
        [anon_sym_CARET] = ACTIONS(467),
        [anon_sym_LT_LT] = ACTIONS(457),
        [anon_sym_GT_GT] = ACTIONS(457),
        [anon_sym_and] = ACTIONS(465),
        [anon_sym_or] = ACTIONS(463),
        [anon_sym_LBRACK] = ACTIONS(281),
        [sym_comment] = ACTIONS(83),
    },
    [580] = {
        [sym__simple_statement] = STATE(385),
        [sym_import_statement] = STATE(7),
        [sym_import_from_statement] = STATE(7),
        [sym_print_statement] = STATE(7),
        [sym_expression_statement] = STATE(7),
        [sym_return_statement] = STATE(7),
        [sym_delete_statement] = STATE(7),
        [sym__suite] = STATE(581),
        [sym__expression] = STATE(26),
        [sym_binary_operator] = STATE(19),
        [sym_unary_operator] = STATE(19),
        [sym_subscript] = STATE(19),
        [sym_call] = STATE(19),
        [sym_list] = STATE(19),
        [sym_list_comprehension] = STATE(19),
        [sym_dictionary] = STATE(19),
        [sym_dictionary_comprehension] = STATE(19),
        [sym_set] = STATE(19),
        [sym_set_comprehension] = STATE(19),
        [anon_sym_import] = ACTIONS(93),
        [anon_sym_from] = ACTIONS(95),
        [anon_sym_print] = ACTIONS(97),
        [anon_sym_return] = ACTIONS(99),
        [anon_sym_del] = ACTIONS(101),
        [sym_pass_statement] = ACTIONS(103),
        [sym_break_statement] = ACTIONS(103),
        [sym_continue_statement] = ACTIONS(103),
        [anon_sym_not] = ACTIONS(121),
        [anon_sym_LBRACK] = ACTIONS(123),
        [anon_sym_LBRACE] = ACTIONS(125),
        [sym_string] = ACTIONS(127),
        [sym_number] = ACTIONS(129),
        [sym_identifier] = ACTIONS(131),
        [sym_comment] = ACTIONS(83),
        [sym__indent] = ACTIONS(789),
    },
    [581] = {
        [ts_builtin_sym_end] = ACTIONS(1061),
        [anon_sym_SEMI] = ACTIONS(1061),
        [anon_sym_import] = ACTIONS(1059),
        [anon_sym_from] = ACTIONS(1059),
        [anon_sym_print] = ACTIONS(1059),
        [anon_sym_return] = ACTIONS(1059),
        [anon_sym_del] = ACTIONS(1059),
        [sym_pass_statement] = ACTIONS(1059),
        [sym_break_statement] = ACTIONS(1059),
        [sym_continue_statement] = ACTIONS(1059),
        [anon_sym_if] = ACTIONS(1059),
        [anon_sym_else] = ACTIONS(1059),
        [anon_sym_for] = ACTIONS(1059),
        [anon_sym_while] = ACTIONS(1059),
        [anon_sym_try] = ACTIONS(1059),
        [anon_sym_except] = ACTIONS(1059),
        [anon_sym_finally] = ACTIONS(1059),
        [anon_sym_with] = ACTIONS(1059),
        [anon_sym_def] = ACTIONS(1059),
        [anon_sym_class] = ACTIONS(1059),
        [anon_sym_AT] = ACTIONS(1061),
        [anon_sym_not] = ACTIONS(1059),
        [anon_sym_LBRACK] = ACTIONS(1061),
        [anon_sym_LBRACE] = ACTIONS(1061),
        [sym_string] = ACTIONS(1061),
        [sym_number] = ACTIONS(1059),
        [sym_identifier] = ACTIONS(1063),
        [sym_comment] = ACTIONS(83),
        [sym__newline] = ACTIONS(1061),
    },
    [582] = {
        [anon_sym_LPAREN] = ACTIONS(265),
        [anon_sym_STAR] = ACTIONS(453),
        [anon_sym_COLON] = ACTIONS(1173),
        [anon_sym_PLUS] = ACTIONS(457),
        [anon_sym_DASH] = ACTIONS(457),
        [anon_sym_SLASH] = ACTIONS(459),
        [anon_sym_STAR_STAR] = ACTIONS(461),
        [anon_sym_PIPE] = ACTIONS(463),
        [anon_sym_AMP] = ACTIONS(465),
        [anon_sym_CARET] = ACTIONS(467),
        [anon_sym_LT_LT] = ACTIONS(457),
        [anon_sym_GT_GT] = ACTIONS(457),
        [anon_sym_and] = ACTIONS(465),
        [anon_sym_or] = ACTIONS(463),
        [anon_sym_LBRACK] = ACTIONS(281),
        [sym_comment] = ACTIONS(83),
    },
    [583] = {
        [sym__simple_statement] = STATE(385),
        [sym_import_statement] = STATE(7),
        [sym_import_from_statement] = STATE(7),
        [sym_print_statement] = STATE(7),
        [sym_expression_statement] = STATE(7),
        [sym_return_statement] = STATE(7),
        [sym_delete_statement] = STATE(7),
        [sym__suite] = STATE(584),
        [sym__expression] = STATE(26),
        [sym_binary_operator] = STATE(19),
        [sym_unary_operator] = STATE(19),
        [sym_subscript] = STATE(19),
        [sym_call] = STATE(19),
        [sym_list] = STATE(19),
        [sym_list_comprehension] = STATE(19),
        [sym_dictionary] = STATE(19),
        [sym_dictionary_comprehension] = STATE(19),
        [sym_set] = STATE(19),
        [sym_set_comprehension] = STATE(19),
        [anon_sym_import] = ACTIONS(93),
        [anon_sym_from] = ACTIONS(95),
        [anon_sym_print] = ACTIONS(97),
        [anon_sym_return] = ACTIONS(99),
        [anon_sym_del] = ACTIONS(101),
        [sym_pass_statement] = ACTIONS(103),
        [sym_break_statement] = ACTIONS(103),
        [sym_continue_statement] = ACTIONS(103),
        [anon_sym_not] = ACTIONS(121),
        [anon_sym_LBRACK] = ACTIONS(123),
        [anon_sym_LBRACE] = ACTIONS(125),
        [sym_string] = ACTIONS(127),
        [sym_number] = ACTIONS(129),
        [sym_identifier] = ACTIONS(131),
        [sym_comment] = ACTIONS(83),
        [sym__indent] = ACTIONS(789),
    },
    [584] = {
        [sym_else_clause] = STATE(585),
        [ts_builtin_sym_end] = ACTIONS(1071),
        [anon_sym_SEMI] = ACTIONS(1071),
        [anon_sym_import] = ACTIONS(1069),
        [anon_sym_from] = ACTIONS(1069),
        [anon_sym_print] = ACTIONS(1069),
        [anon_sym_return] = ACTIONS(1069),
        [anon_sym_del] = ACTIONS(1069),
        [sym_pass_statement] = ACTIONS(1069),
        [sym_break_statement] = ACTIONS(1069),
        [sym_continue_statement] = ACTIONS(1069),
        [anon_sym_if] = ACTIONS(1069),
        [anon_sym_else] = ACTIONS(1159),
        [anon_sym_for] = ACTIONS(1069),
        [anon_sym_while] = ACTIONS(1069),
        [anon_sym_try] = ACTIONS(1069),
        [anon_sym_with] = ACTIONS(1069),
        [anon_sym_def] = ACTIONS(1069),
        [anon_sym_class] = ACTIONS(1069),
        [anon_sym_AT] = ACTIONS(1071),
        [anon_sym_not] = ACTIONS(1069),
        [anon_sym_LBRACK] = ACTIONS(1071),
        [anon_sym_LBRACE] = ACTIONS(1071),
        [sym_string] = ACTIONS(1071),
        [sym_number] = ACTIONS(1069),
        [sym_identifier] = ACTIONS(1073),
        [sym_comment] = ACTIONS(83),
        [sym__newline] = ACTIONS(1071),
    },
    [585] = {
        [ts_builtin_sym_end] = ACTIONS(1077),
        [anon_sym_SEMI] = ACTIONS(1077),
        [anon_sym_import] = ACTIONS(1075),
        [anon_sym_from] = ACTIONS(1075),
        [anon_sym_print] = ACTIONS(1075),
        [anon_sym_return] = ACTIONS(1075),
        [anon_sym_del] = ACTIONS(1075),
        [sym_pass_statement] = ACTIONS(1075),
        [sym_break_statement] = ACTIONS(1075),
        [sym_continue_statement] = ACTIONS(1075),
        [anon_sym_if] = ACTIONS(1075),
        [anon_sym_for] = ACTIONS(1075),
        [anon_sym_while] = ACTIONS(1075),
        [anon_sym_try] = ACTIONS(1075),
        [anon_sym_with] = ACTIONS(1075),
        [anon_sym_def] = ACTIONS(1075),
        [anon_sym_class] = ACTIONS(1075),
        [anon_sym_AT] = ACTIONS(1077),
        [anon_sym_not] = ACTIONS(1075),
        [anon_sym_LBRACK] = ACTIONS(1077),
        [anon_sym_LBRACE] = ACTIONS(1077),
        [sym_string] = ACTIONS(1077),
        [sym_number] = ACTIONS(1075),
        [sym_identifier] = ACTIONS(1079),
        [sym_comment] = ACTIONS(83),
        [sym__newline] = ACTIONS(1077),
    },
    [586] = {
        [anon_sym_in] = ACTIONS(1175),
        [sym_comment] = ACTIONS(83),
    },
    [587] = {
        [sym_expression_list] = STATE(588),
        [sym__expression] = STATE(524),
        [sym_binary_operator] = STATE(45),
        [sym_unary_operator] = STATE(45),
        [sym_subscript] = STATE(45),
        [sym_call] = STATE(45),
        [sym_list] = STATE(45),
        [sym_list_comprehension] = STATE(45),
        [sym_dictionary] = STATE(45),
        [sym_dictionary_comprehension] = STATE(45),
        [sym_set] = STATE(45),
        [sym_set_comprehension] = STATE(45),
        [anon_sym_not] = ACTIONS(949),
        [anon_sym_LBRACK] = ACTIONS(145),
        [anon_sym_LBRACE] = ACTIONS(147),
        [sym_string] = ACTIONS(149),
        [sym_number] = ACTIONS(151),
        [sym_identifier] = ACTIONS(153),
        [sym_comment] = ACTIONS(83),
    },
    [588] = {
        [anon_sym_COLON] = ACTIONS(1177),
        [sym_comment] = ACTIONS(83),
    },
    [589] = {
        [sym__simple_statement] = STATE(385),
        [sym_import_statement] = STATE(7),
        [sym_import_from_statement] = STATE(7),
        [sym_print_statement] = STATE(7),
        [sym_expression_statement] = STATE(7),
        [sym_return_statement] = STATE(7),
        [sym_delete_statement] = STATE(7),
        [sym__suite] = STATE(590),
        [sym__expression] = STATE(26),
        [sym_binary_operator] = STATE(19),
        [sym_unary_operator] = STATE(19),
        [sym_subscript] = STATE(19),
        [sym_call] = STATE(19),
        [sym_list] = STATE(19),
        [sym_list_comprehension] = STATE(19),
        [sym_dictionary] = STATE(19),
        [sym_dictionary_comprehension] = STATE(19),
        [sym_set] = STATE(19),
        [sym_set_comprehension] = STATE(19),
        [anon_sym_import] = ACTIONS(93),
        [anon_sym_from] = ACTIONS(95),
        [anon_sym_print] = ACTIONS(97),
        [anon_sym_return] = ACTIONS(99),
        [anon_sym_del] = ACTIONS(101),
        [sym_pass_statement] = ACTIONS(103),
        [sym_break_statement] = ACTIONS(103),
        [sym_continue_statement] = ACTIONS(103),
        [anon_sym_not] = ACTIONS(121),
        [anon_sym_LBRACK] = ACTIONS(123),
        [anon_sym_LBRACE] = ACTIONS(125),
        [sym_string] = ACTIONS(127),
        [sym_number] = ACTIONS(129),
        [sym_identifier] = ACTIONS(131),
        [sym_comment] = ACTIONS(83),
        [sym__indent] = ACTIONS(789),
    },
    [590] = {
        [sym_else_clause] = STATE(591),
        [ts_builtin_sym_end] = ACTIONS(1091),
        [anon_sym_SEMI] = ACTIONS(1091),
        [anon_sym_import] = ACTIONS(1089),
        [anon_sym_from] = ACTIONS(1089),
        [anon_sym_print] = ACTIONS(1089),
        [anon_sym_return] = ACTIONS(1089),
        [anon_sym_del] = ACTIONS(1089),
        [sym_pass_statement] = ACTIONS(1089),
        [sym_break_statement] = ACTIONS(1089),
        [sym_continue_statement] = ACTIONS(1089),
        [anon_sym_if] = ACTIONS(1089),
        [anon_sym_else] = ACTIONS(1159),
        [anon_sym_for] = ACTIONS(1089),
        [anon_sym_while] = ACTIONS(1089),
        [anon_sym_try] = ACTIONS(1089),
        [anon_sym_with] = ACTIONS(1089),
        [anon_sym_def] = ACTIONS(1089),
        [anon_sym_class] = ACTIONS(1089),
        [anon_sym_AT] = ACTIONS(1091),
        [anon_sym_not] = ACTIONS(1089),
        [anon_sym_LBRACK] = ACTIONS(1091),
        [anon_sym_LBRACE] = ACTIONS(1091),
        [sym_string] = ACTIONS(1091),
        [sym_number] = ACTIONS(1089),
        [sym_identifier] = ACTIONS(1093),
        [sym_comment] = ACTIONS(83),
        [sym__newline] = ACTIONS(1091),
    },
    [591] = {
        [ts_builtin_sym_end] = ACTIONS(1097),
        [anon_sym_SEMI] = ACTIONS(1097),
        [anon_sym_import] = ACTIONS(1095),
        [anon_sym_from] = ACTIONS(1095),
        [anon_sym_print] = ACTIONS(1095),
        [anon_sym_return] = ACTIONS(1095),
        [anon_sym_del] = ACTIONS(1095),
        [sym_pass_statement] = ACTIONS(1095),
        [sym_break_statement] = ACTIONS(1095),
        [sym_continue_statement] = ACTIONS(1095),
        [anon_sym_if] = ACTIONS(1095),
        [anon_sym_for] = ACTIONS(1095),
        [anon_sym_while] = ACTIONS(1095),
        [anon_sym_try] = ACTIONS(1095),
        [anon_sym_with] = ACTIONS(1095),
        [anon_sym_def] = ACTIONS(1095),
        [anon_sym_class] = ACTIONS(1095),
        [anon_sym_AT] = ACTIONS(1097),
        [anon_sym_not] = ACTIONS(1095),
        [anon_sym_LBRACK] = ACTIONS(1097),
        [anon_sym_LBRACE] = ACTIONS(1097),
        [sym_string] = ACTIONS(1097),
        [sym_number] = ACTIONS(1095),
        [sym_identifier] = ACTIONS(1099),
        [sym_comment] = ACTIONS(83),
        [sym__newline] = ACTIONS(1097),
    },
    [592] = {
        [anon_sym_LPAREN] = ACTIONS(265),
        [anon_sym_STAR] = ACTIONS(453),
        [anon_sym_COLON] = ACTIONS(1179),
        [anon_sym_PLUS] = ACTIONS(457),
        [anon_sym_DASH] = ACTIONS(457),
        [anon_sym_SLASH] = ACTIONS(459),
        [anon_sym_STAR_STAR] = ACTIONS(461),
        [anon_sym_PIPE] = ACTIONS(463),
        [anon_sym_AMP] = ACTIONS(465),
        [anon_sym_CARET] = ACTIONS(467),
        [anon_sym_LT_LT] = ACTIONS(457),
        [anon_sym_GT_GT] = ACTIONS(457),
        [anon_sym_and] = ACTIONS(465),
        [anon_sym_or] = ACTIONS(463),
        [anon_sym_LBRACK] = ACTIONS(281),
        [sym_comment] = ACTIONS(83),
    },
    [593] = {
        [sym__simple_statement] = STATE(385),
        [sym_import_statement] = STATE(7),
        [sym_import_from_statement] = STATE(7),
        [sym_print_statement] = STATE(7),
        [sym_expression_statement] = STATE(7),
        [sym_return_statement] = STATE(7),
        [sym_delete_statement] = STATE(7),
        [sym__suite] = STATE(594),
        [sym__expression] = STATE(26),
        [sym_binary_operator] = STATE(19),
        [sym_unary_operator] = STATE(19),
        [sym_subscript] = STATE(19),
        [sym_call] = STATE(19),
        [sym_list] = STATE(19),
        [sym_list_comprehension] = STATE(19),
        [sym_dictionary] = STATE(19),
        [sym_dictionary_comprehension] = STATE(19),
        [sym_set] = STATE(19),
        [sym_set_comprehension] = STATE(19),
        [anon_sym_import] = ACTIONS(93),
        [anon_sym_from] = ACTIONS(95),
        [anon_sym_print] = ACTIONS(97),
        [anon_sym_return] = ACTIONS(99),
        [anon_sym_del] = ACTIONS(101),
        [sym_pass_statement] = ACTIONS(103),
        [sym_break_statement] = ACTIONS(103),
        [sym_continue_statement] = ACTIONS(103),
        [anon_sym_not] = ACTIONS(121),
        [anon_sym_LBRACK] = ACTIONS(123),
        [anon_sym_LBRACE] = ACTIONS(125),
        [sym_string] = ACTIONS(127),
        [sym_number] = ACTIONS(129),
        [sym_identifier] = ACTIONS(131),
        [sym_comment] = ACTIONS(83),
        [sym__indent] = ACTIONS(789),
    },
    [594] = {
        [sym_elif_clause] = STATE(596),
        [sym_else_clause] = STATE(597),
        [aux_sym_if_statement_repeat1] = STATE(598),
        [ts_builtin_sym_end] = ACTIONS(1107),
        [anon_sym_SEMI] = ACTIONS(1107),
        [anon_sym_import] = ACTIONS(1103),
        [anon_sym_from] = ACTIONS(1103),
        [anon_sym_print] = ACTIONS(1103),
        [anon_sym_return] = ACTIONS(1103),
        [anon_sym_del] = ACTIONS(1103),
        [sym_pass_statement] = ACTIONS(1103),
        [sym_break_statement] = ACTIONS(1103),
        [sym_continue_statement] = ACTIONS(1103),
        [anon_sym_if] = ACTIONS(1103),
        [anon_sym_elif] = ACTIONS(1181),
        [anon_sym_else] = ACTIONS(1159),
        [anon_sym_for] = ACTIONS(1103),
        [anon_sym_while] = ACTIONS(1103),
        [anon_sym_try] = ACTIONS(1103),
        [anon_sym_with] = ACTIONS(1103),
        [anon_sym_def] = ACTIONS(1103),
        [anon_sym_class] = ACTIONS(1103),
        [anon_sym_AT] = ACTIONS(1107),
        [anon_sym_not] = ACTIONS(1103),
        [anon_sym_LBRACK] = ACTIONS(1107),
        [anon_sym_LBRACE] = ACTIONS(1107),
        [sym_string] = ACTIONS(1107),
        [sym_number] = ACTIONS(1103),
        [sym_identifier] = ACTIONS(1109),
        [sym_comment] = ACTIONS(83),
        [sym__newline] = ACTIONS(1107),
    },
    [595] = {
        [sym__expression] = STATE(601),
        [sym_binary_operator] = STATE(45),
        [sym_unary_operator] = STATE(45),
        [sym_subscript] = STATE(45),
        [sym_call] = STATE(45),
        [sym_list] = STATE(45),
        [sym_list_comprehension] = STATE(45),
        [sym_dictionary] = STATE(45),
        [sym_dictionary_comprehension] = STATE(45),
        [sym_set] = STATE(45),
        [sym_set_comprehension] = STATE(45),
        [anon_sym_not] = ACTIONS(143),
        [anon_sym_LBRACK] = ACTIONS(145),
        [anon_sym_LBRACE] = ACTIONS(147),
        [sym_string] = ACTIONS(149),
        [sym_number] = ACTIONS(151),
        [sym_identifier] = ACTIONS(153),
        [sym_comment] = ACTIONS(83),
    },
    [596] = {
        [ts_builtin_sym_end] = ACTIONS(1113),
        [anon_sym_SEMI] = ACTIONS(1113),
        [anon_sym_import] = ACTIONS(1111),
        [anon_sym_from] = ACTIONS(1111),
        [anon_sym_print] = ACTIONS(1111),
        [anon_sym_return] = ACTIONS(1111),
        [anon_sym_del] = ACTIONS(1111),
        [sym_pass_statement] = ACTIONS(1111),
        [sym_break_statement] = ACTIONS(1111),
        [sym_continue_statement] = ACTIONS(1111),
        [anon_sym_if] = ACTIONS(1111),
        [anon_sym_elif] = ACTIONS(1111),
        [anon_sym_else] = ACTIONS(1111),
        [anon_sym_for] = ACTIONS(1111),
        [anon_sym_while] = ACTIONS(1111),
        [anon_sym_try] = ACTIONS(1111),
        [anon_sym_with] = ACTIONS(1111),
        [anon_sym_def] = ACTIONS(1111),
        [anon_sym_class] = ACTIONS(1111),
        [anon_sym_AT] = ACTIONS(1113),
        [anon_sym_not] = ACTIONS(1111),
        [anon_sym_LBRACK] = ACTIONS(1113),
        [anon_sym_LBRACE] = ACTIONS(1113),
        [sym_string] = ACTIONS(1113),
        [sym_number] = ACTIONS(1111),
        [sym_identifier] = ACTIONS(1115),
        [sym_comment] = ACTIONS(83),
        [sym__newline] = ACTIONS(1113),
    },
    [597] = {
        [ts_builtin_sym_end] = ACTIONS(1119),
        [anon_sym_SEMI] = ACTIONS(1119),
        [anon_sym_import] = ACTIONS(1117),
        [anon_sym_from] = ACTIONS(1117),
        [anon_sym_print] = ACTIONS(1117),
        [anon_sym_return] = ACTIONS(1117),
        [anon_sym_del] = ACTIONS(1117),
        [sym_pass_statement] = ACTIONS(1117),
        [sym_break_statement] = ACTIONS(1117),
        [sym_continue_statement] = ACTIONS(1117),
        [anon_sym_if] = ACTIONS(1117),
        [anon_sym_for] = ACTIONS(1117),
        [anon_sym_while] = ACTIONS(1117),
        [anon_sym_try] = ACTIONS(1117),
        [anon_sym_with] = ACTIONS(1117),
        [anon_sym_def] = ACTIONS(1117),
        [anon_sym_class] = ACTIONS(1117),
        [anon_sym_AT] = ACTIONS(1119),
        [anon_sym_not] = ACTIONS(1117),
        [anon_sym_LBRACK] = ACTIONS(1119),
        [anon_sym_LBRACE] = ACTIONS(1119),
        [sym_string] = ACTIONS(1119),
        [sym_number] = ACTIONS(1117),
        [sym_identifier] = ACTIONS(1121),
        [sym_comment] = ACTIONS(83),
        [sym__newline] = ACTIONS(1119),
    },
    [598] = {
        [sym_elif_clause] = STATE(599),
        [sym_else_clause] = STATE(600),
        [ts_builtin_sym_end] = ACTIONS(1119),
        [anon_sym_SEMI] = ACTIONS(1119),
        [anon_sym_import] = ACTIONS(1117),
        [anon_sym_from] = ACTIONS(1117),
        [anon_sym_print] = ACTIONS(1117),
        [anon_sym_return] = ACTIONS(1117),
        [anon_sym_del] = ACTIONS(1117),
        [sym_pass_statement] = ACTIONS(1117),
        [sym_break_statement] = ACTIONS(1117),
        [sym_continue_statement] = ACTIONS(1117),
        [anon_sym_if] = ACTIONS(1117),
        [anon_sym_elif] = ACTIONS(1181),
        [anon_sym_else] = ACTIONS(1159),
        [anon_sym_for] = ACTIONS(1117),
        [anon_sym_while] = ACTIONS(1117),
        [anon_sym_try] = ACTIONS(1117),
        [anon_sym_with] = ACTIONS(1117),
        [anon_sym_def] = ACTIONS(1117),
        [anon_sym_class] = ACTIONS(1117),
        [anon_sym_AT] = ACTIONS(1119),
        [anon_sym_not] = ACTIONS(1117),
        [anon_sym_LBRACK] = ACTIONS(1119),
        [anon_sym_LBRACE] = ACTIONS(1119),
        [sym_string] = ACTIONS(1119),
        [sym_number] = ACTIONS(1117),
        [sym_identifier] = ACTIONS(1121),
        [sym_comment] = ACTIONS(83),
        [sym__newline] = ACTIONS(1119),
    },
    [599] = {
        [ts_builtin_sym_end] = ACTIONS(1125),
        [anon_sym_SEMI] = ACTIONS(1125),
        [anon_sym_import] = ACTIONS(1123),
        [anon_sym_from] = ACTIONS(1123),
        [anon_sym_print] = ACTIONS(1123),
        [anon_sym_return] = ACTIONS(1123),
        [anon_sym_del] = ACTIONS(1123),
        [sym_pass_statement] = ACTIONS(1123),
        [sym_break_statement] = ACTIONS(1123),
        [sym_continue_statement] = ACTIONS(1123),
        [anon_sym_if] = ACTIONS(1123),
        [anon_sym_elif] = ACTIONS(1123),
        [anon_sym_else] = ACTIONS(1123),
        [anon_sym_for] = ACTIONS(1123),
        [anon_sym_while] = ACTIONS(1123),
        [anon_sym_try] = ACTIONS(1123),
        [anon_sym_with] = ACTIONS(1123),
        [anon_sym_def] = ACTIONS(1123),
        [anon_sym_class] = ACTIONS(1123),
        [anon_sym_AT] = ACTIONS(1125),
        [anon_sym_not] = ACTIONS(1123),
        [anon_sym_LBRACK] = ACTIONS(1125),
        [anon_sym_LBRACE] = ACTIONS(1125),
        [sym_string] = ACTIONS(1125),
        [sym_number] = ACTIONS(1123),
        [sym_identifier] = ACTIONS(1127),
        [sym_comment] = ACTIONS(83),
        [sym__newline] = ACTIONS(1125),
    },
    [600] = {
        [ts_builtin_sym_end] = ACTIONS(1131),
        [anon_sym_SEMI] = ACTIONS(1131),
        [anon_sym_import] = ACTIONS(1129),
        [anon_sym_from] = ACTIONS(1129),
        [anon_sym_print] = ACTIONS(1129),
        [anon_sym_return] = ACTIONS(1129),
        [anon_sym_del] = ACTIONS(1129),
        [sym_pass_statement] = ACTIONS(1129),
        [sym_break_statement] = ACTIONS(1129),
        [sym_continue_statement] = ACTIONS(1129),
        [anon_sym_if] = ACTIONS(1129),
        [anon_sym_for] = ACTIONS(1129),
        [anon_sym_while] = ACTIONS(1129),
        [anon_sym_try] = ACTIONS(1129),
        [anon_sym_with] = ACTIONS(1129),
        [anon_sym_def] = ACTIONS(1129),
        [anon_sym_class] = ACTIONS(1129),
        [anon_sym_AT] = ACTIONS(1131),
        [anon_sym_not] = ACTIONS(1129),
        [anon_sym_LBRACK] = ACTIONS(1131),
        [anon_sym_LBRACE] = ACTIONS(1131),
        [sym_string] = ACTIONS(1131),
        [sym_number] = ACTIONS(1129),
        [sym_identifier] = ACTIONS(1133),
        [sym_comment] = ACTIONS(83),
        [sym__newline] = ACTIONS(1131),
    },
    [601] = {
        [anon_sym_LPAREN] = ACTIONS(265),
        [anon_sym_STAR] = ACTIONS(453),
        [anon_sym_COLON] = ACTIONS(1183),
        [anon_sym_PLUS] = ACTIONS(457),
        [anon_sym_DASH] = ACTIONS(457),
        [anon_sym_SLASH] = ACTIONS(459),
        [anon_sym_STAR_STAR] = ACTIONS(461),
        [anon_sym_PIPE] = ACTIONS(463),
        [anon_sym_AMP] = ACTIONS(465),
        [anon_sym_CARET] = ACTIONS(467),
        [anon_sym_LT_LT] = ACTIONS(457),
        [anon_sym_GT_GT] = ACTIONS(457),
        [anon_sym_and] = ACTIONS(465),
        [anon_sym_or] = ACTIONS(463),
        [anon_sym_LBRACK] = ACTIONS(281),
        [sym_comment] = ACTIONS(83),
    },
    [602] = {
        [sym__simple_statement] = STATE(385),
        [sym_import_statement] = STATE(7),
        [sym_import_from_statement] = STATE(7),
        [sym_print_statement] = STATE(7),
        [sym_expression_statement] = STATE(7),
        [sym_return_statement] = STATE(7),
        [sym_delete_statement] = STATE(7),
        [sym__suite] = STATE(603),
        [sym__expression] = STATE(26),
        [sym_binary_operator] = STATE(19),
        [sym_unary_operator] = STATE(19),
        [sym_subscript] = STATE(19),
        [sym_call] = STATE(19),
        [sym_list] = STATE(19),
        [sym_list_comprehension] = STATE(19),
        [sym_dictionary] = STATE(19),
        [sym_dictionary_comprehension] = STATE(19),
        [sym_set] = STATE(19),
        [sym_set_comprehension] = STATE(19),
        [anon_sym_import] = ACTIONS(93),
        [anon_sym_from] = ACTIONS(95),
        [anon_sym_print] = ACTIONS(97),
        [anon_sym_return] = ACTIONS(99),
        [anon_sym_del] = ACTIONS(101),
        [sym_pass_statement] = ACTIONS(103),
        [sym_break_statement] = ACTIONS(103),
        [sym_continue_statement] = ACTIONS(103),
        [anon_sym_not] = ACTIONS(121),
        [anon_sym_LBRACK] = ACTIONS(123),
        [anon_sym_LBRACE] = ACTIONS(125),
        [sym_string] = ACTIONS(127),
        [sym_number] = ACTIONS(129),
        [sym_identifier] = ACTIONS(131),
        [sym_comment] = ACTIONS(83),
        [sym__indent] = ACTIONS(789),
    },
    [603] = {
        [ts_builtin_sym_end] = ACTIONS(1139),
        [anon_sym_SEMI] = ACTIONS(1139),
        [anon_sym_import] = ACTIONS(1137),
        [anon_sym_from] = ACTIONS(1137),
        [anon_sym_print] = ACTIONS(1137),
        [anon_sym_return] = ACTIONS(1137),
        [anon_sym_del] = ACTIONS(1137),
        [sym_pass_statement] = ACTIONS(1137),
        [sym_break_statement] = ACTIONS(1137),
        [sym_continue_statement] = ACTIONS(1137),
        [anon_sym_if] = ACTIONS(1137),
        [anon_sym_elif] = ACTIONS(1137),
        [anon_sym_else] = ACTIONS(1137),
        [anon_sym_for] = ACTIONS(1137),
        [anon_sym_while] = ACTIONS(1137),
        [anon_sym_try] = ACTIONS(1137),
        [anon_sym_with] = ACTIONS(1137),
        [anon_sym_def] = ACTIONS(1137),
        [anon_sym_class] = ACTIONS(1137),
        [anon_sym_AT] = ACTIONS(1139),
        [anon_sym_not] = ACTIONS(1137),
        [anon_sym_LBRACK] = ACTIONS(1139),
        [anon_sym_LBRACE] = ACTIONS(1139),
        [sym_string] = ACTIONS(1139),
        [sym_number] = ACTIONS(1137),
        [sym_identifier] = ACTIONS(1141),
        [sym_comment] = ACTIONS(83),
        [sym__newline] = ACTIONS(1139),
    },
    [604] = {
        [sym__expression] = STATE(361),
        [sym_binary_operator] = STATE(19),
        [sym_unary_operator] = STATE(19),
        [sym_subscript] = STATE(19),
        [sym_call] = STATE(19),
        [sym_list] = STATE(19),
        [sym_list_comprehension] = STATE(19),
        [sym_dictionary] = STATE(19),
        [sym_dictionary_comprehension] = STATE(19),
        [sym_set] = STATE(19),
        [sym_set_comprehension] = STATE(19),
        [anon_sym_not] = ACTIONS(139),
        [anon_sym_LBRACK] = ACTIONS(123),
        [anon_sym_LBRACE] = ACTIONS(125),
        [sym_string] = ACTIONS(127),
        [sym_number] = ACTIONS(129),
        [sym_identifier] = ACTIONS(131),
        [sym_comment] = ACTIONS(83),
    },
    [605] = {
        [sym_comment] = ACTIONS(83),
        [sym__newline] = ACTIONS(1185),
    },
    [606] = {
        [aux_sym_print_statement_repeat1] = STATE(614),
        [anon_sym_LPAREN] = ACTIONS(201),
        [anon_sym_COMMA] = ACTIONS(1187),
        [anon_sym_STAR] = ACTIONS(1189),
        [anon_sym_PLUS] = ACTIONS(1191),
        [anon_sym_DASH] = ACTIONS(1191),
        [anon_sym_SLASH] = ACTIONS(1193),
        [anon_sym_STAR_STAR] = ACTIONS(1195),
        [anon_sym_PIPE] = ACTIONS(1197),
        [anon_sym_AMP] = ACTIONS(1199),
        [anon_sym_CARET] = ACTIONS(1201),
        [anon_sym_LT_LT] = ACTIONS(1191),
        [anon_sym_GT_GT] = ACTIONS(1191),
        [anon_sym_and] = ACTIONS(1199),
        [anon_sym_or] = ACTIONS(1197),
        [anon_sym_LBRACK] = ACTIONS(217),
        [sym_comment] = ACTIONS(83),
        [sym__newline] = ACTIONS(495),
    },
    [607] = {
        [sym__expression] = STATE(622),
        [sym_binary_operator] = STATE(19),
        [sym_unary_operator] = STATE(19),
        [sym_subscript] = STATE(19),
        [sym_call] = STATE(19),
        [sym_list] = STATE(19),
        [sym_list_comprehension] = STATE(19),
        [sym_dictionary] = STATE(19),
        [sym_dictionary_comprehension] = STATE(19),
        [sym_set] = STATE(19),
        [sym_set_comprehension] = STATE(19),
        [anon_sym_not] = ACTIONS(139),
        [anon_sym_LBRACK] = ACTIONS(123),
        [anon_sym_LBRACE] = ACTIONS(125),
        [sym_string] = ACTIONS(127),
        [sym_number] = ACTIONS(129),
        [sym_identifier] = ACTIONS(131),
        [sym_comment] = ACTIONS(83),
    },
    [608] = {
        [sym__expression] = STATE(621),
        [sym_binary_operator] = STATE(19),
        [sym_unary_operator] = STATE(19),
        [sym_subscript] = STATE(19),
        [sym_call] = STATE(19),
        [sym_list] = STATE(19),
        [sym_list_comprehension] = STATE(19),
        [sym_dictionary] = STATE(19),
        [sym_dictionary_comprehension] = STATE(19),
        [sym_set] = STATE(19),
        [sym_set_comprehension] = STATE(19),
        [anon_sym_not] = ACTIONS(139),
        [anon_sym_LBRACK] = ACTIONS(123),
        [anon_sym_LBRACE] = ACTIONS(125),
        [sym_string] = ACTIONS(127),
        [sym_number] = ACTIONS(129),
        [sym_identifier] = ACTIONS(131),
        [sym_comment] = ACTIONS(83),
    },
    [609] = {
        [sym__expression] = STATE(619),
        [sym_binary_operator] = STATE(19),
        [sym_unary_operator] = STATE(19),
        [sym_subscript] = STATE(19),
        [sym_call] = STATE(19),
        [sym_list] = STATE(19),
        [sym_list_comprehension] = STATE(19),
        [sym_dictionary] = STATE(19),
        [sym_dictionary_comprehension] = STATE(19),
        [sym_set] = STATE(19),
        [sym_set_comprehension] = STATE(19),
        [anon_sym_not] = ACTIONS(139),
        [anon_sym_LBRACK] = ACTIONS(123),
        [anon_sym_LBRACE] = ACTIONS(125),
        [sym_string] = ACTIONS(127),
        [sym_number] = ACTIONS(129),
        [sym_identifier] = ACTIONS(131),
        [sym_comment] = ACTIONS(83),
    },
    [610] = {
        [sym__expression] = STATE(295),
        [sym_binary_operator] = STATE(19),
        [sym_unary_operator] = STATE(19),
        [sym_subscript] = STATE(19),
        [sym_call] = STATE(19),
        [sym_list] = STATE(19),
        [sym_list_comprehension] = STATE(19),
        [sym_dictionary] = STATE(19),
        [sym_dictionary_comprehension] = STATE(19),
        [sym_set] = STATE(19),
        [sym_set_comprehension] = STATE(19),
        [anon_sym_not] = ACTIONS(139),
        [anon_sym_LBRACK] = ACTIONS(123),
        [anon_sym_LBRACE] = ACTIONS(125),
        [sym_string] = ACTIONS(127),
        [sym_number] = ACTIONS(129),
        [sym_identifier] = ACTIONS(131),
        [sym_comment] = ACTIONS(83),
    },
    [611] = {
        [sym__expression] = STATE(617),
        [sym_binary_operator] = STATE(19),
        [sym_unary_operator] = STATE(19),
        [sym_subscript] = STATE(19),
        [sym_call] = STATE(19),
        [sym_list] = STATE(19),
        [sym_list_comprehension] = STATE(19),
        [sym_dictionary] = STATE(19),
        [sym_dictionary_comprehension] = STATE(19),
        [sym_set] = STATE(19),
        [sym_set_comprehension] = STATE(19),
        [anon_sym_not] = ACTIONS(139),
        [anon_sym_LBRACK] = ACTIONS(123),
        [anon_sym_LBRACE] = ACTIONS(125),
        [sym_string] = ACTIONS(127),
        [sym_number] = ACTIONS(129),
        [sym_identifier] = ACTIONS(131),
        [sym_comment] = ACTIONS(83),
    },
    [612] = {
        [sym__expression] = STATE(618),
        [sym_binary_operator] = STATE(19),
        [sym_unary_operator] = STATE(19),
        [sym_subscript] = STATE(19),
        [sym_call] = STATE(19),
        [sym_list] = STATE(19),
        [sym_list_comprehension] = STATE(19),
        [sym_dictionary] = STATE(19),
        [sym_dictionary_comprehension] = STATE(19),
        [sym_set] = STATE(19),
        [sym_set_comprehension] = STATE(19),
        [anon_sym_not] = ACTIONS(139),
        [anon_sym_LBRACK] = ACTIONS(123),
        [anon_sym_LBRACE] = ACTIONS(125),
        [sym_string] = ACTIONS(127),
        [sym_number] = ACTIONS(129),
        [sym_identifier] = ACTIONS(131),
        [sym_comment] = ACTIONS(83),
    },
    [613] = {
        [sym__expression] = STATE(620),
        [sym_binary_operator] = STATE(19),
        [sym_unary_operator] = STATE(19),
        [sym_subscript] = STATE(19),
        [sym_call] = STATE(19),
        [sym_list] = STATE(19),
        [sym_list_comprehension] = STATE(19),
        [sym_dictionary] = STATE(19),
        [sym_dictionary_comprehension] = STATE(19),
        [sym_set] = STATE(19),
        [sym_set_comprehension] = STATE(19),
        [anon_sym_not] = ACTIONS(139),
        [anon_sym_LBRACK] = ACTIONS(123),
        [anon_sym_LBRACE] = ACTIONS(125),
        [sym_string] = ACTIONS(127),
        [sym_number] = ACTIONS(129),
        [sym_identifier] = ACTIONS(131),
        [sym_comment] = ACTIONS(83),
    },
    [614] = {
        [anon_sym_COMMA] = ACTIONS(1203),
        [sym_comment] = ACTIONS(83),
        [sym__newline] = ACTIONS(511),
    },
    [615] = {
        [sym__expression] = STATE(616),
        [sym_binary_operator] = STATE(19),
        [sym_unary_operator] = STATE(19),
        [sym_subscript] = STATE(19),
        [sym_call] = STATE(19),
        [sym_list] = STATE(19),
        [sym_list_comprehension] = STATE(19),
        [sym_dictionary] = STATE(19),
        [sym_dictionary_comprehension] = STATE(19),
        [sym_set] = STATE(19),
        [sym_set_comprehension] = STATE(19),
        [anon_sym_not] = ACTIONS(139),
        [anon_sym_LBRACK] = ACTIONS(123),
        [anon_sym_LBRACE] = ACTIONS(125),
        [sym_string] = ACTIONS(127),
        [sym_number] = ACTIONS(129),
        [sym_identifier] = ACTIONS(131),
        [sym_comment] = ACTIONS(83),
    },
    [616] = {
        [anon_sym_LPAREN] = ACTIONS(201),
        [anon_sym_COMMA] = ACTIONS(513),
        [anon_sym_STAR] = ACTIONS(1189),
        [anon_sym_PLUS] = ACTIONS(1191),
        [anon_sym_DASH] = ACTIONS(1191),
        [anon_sym_SLASH] = ACTIONS(1193),
        [anon_sym_STAR_STAR] = ACTIONS(1195),
        [anon_sym_PIPE] = ACTIONS(1197),
        [anon_sym_AMP] = ACTIONS(1199),
        [anon_sym_CARET] = ACTIONS(1201),
        [anon_sym_LT_LT] = ACTIONS(1191),
        [anon_sym_GT_GT] = ACTIONS(1191),
        [anon_sym_and] = ACTIONS(1199),
        [anon_sym_or] = ACTIONS(1197),
        [anon_sym_LBRACK] = ACTIONS(217),
        [sym_comment] = ACTIONS(83),
        [sym__newline] = ACTIONS(513),
    },
    [617] = {
        [anon_sym_LPAREN] = ACTIONS(201),
        [anon_sym_COMMA] = ACTIONS(321),
        [anon_sym_STAR] = ACTIONS(1189),
        [anon_sym_PLUS] = ACTIONS(1191),
        [anon_sym_DASH] = ACTIONS(1191),
        [anon_sym_SLASH] = ACTIONS(1193),
        [anon_sym_STAR_STAR] = ACTIONS(1195),
        [anon_sym_PIPE] = ACTIONS(321),
        [anon_sym_AMP] = ACTIONS(1199),
        [anon_sym_CARET] = ACTIONS(1201),
        [anon_sym_LT_LT] = ACTIONS(1191),
        [anon_sym_GT_GT] = ACTIONS(1191),
        [anon_sym_and] = ACTIONS(1199),
        [anon_sym_or] = ACTIONS(321),
        [anon_sym_LBRACK] = ACTIONS(321),
        [sym_comment] = ACTIONS(83),
        [sym__newline] = ACTIONS(321),
    },
    [618] = {
        [anon_sym_LPAREN] = ACTIONS(201),
        [anon_sym_COMMA] = ACTIONS(321),
        [anon_sym_STAR] = ACTIONS(1189),
        [anon_sym_PLUS] = ACTIONS(1191),
        [anon_sym_DASH] = ACTIONS(1191),
        [anon_sym_SLASH] = ACTIONS(1193),
        [anon_sym_STAR_STAR] = ACTIONS(1195),
        [anon_sym_PIPE] = ACTIONS(321),
        [anon_sym_AMP] = ACTIONS(321),
        [anon_sym_CARET] = ACTIONS(1201),
        [anon_sym_LT_LT] = ACTIONS(1191),
        [anon_sym_GT_GT] = ACTIONS(1191),
        [anon_sym_and] = ACTIONS(321),
        [anon_sym_or] = ACTIONS(321),
        [anon_sym_LBRACK] = ACTIONS(321),
        [sym_comment] = ACTIONS(83),
        [sym__newline] = ACTIONS(321),
    },
    [619] = {
        [anon_sym_LPAREN] = ACTIONS(201),
        [anon_sym_COMMA] = ACTIONS(321),
        [anon_sym_STAR] = ACTIONS(1189),
        [anon_sym_PLUS] = ACTIONS(321),
        [anon_sym_DASH] = ACTIONS(321),
        [anon_sym_SLASH] = ACTIONS(1193),
        [anon_sym_STAR_STAR] = ACTIONS(1195),
        [anon_sym_PIPE] = ACTIONS(321),
        [anon_sym_AMP] = ACTIONS(321),
        [anon_sym_CARET] = ACTIONS(321),
        [anon_sym_LT_LT] = ACTIONS(321),
        [anon_sym_GT_GT] = ACTIONS(321),
        [anon_sym_and] = ACTIONS(321),
        [anon_sym_or] = ACTIONS(321),
        [anon_sym_LBRACK] = ACTIONS(321),
        [sym_comment] = ACTIONS(83),
        [sym__newline] = ACTIONS(321),
    },
    [620] = {
        [anon_sym_LPAREN] = ACTIONS(201),
        [anon_sym_COMMA] = ACTIONS(321),
        [anon_sym_STAR] = ACTIONS(1189),
        [anon_sym_PLUS] = ACTIONS(1191),
        [anon_sym_DASH] = ACTIONS(1191),
        [anon_sym_SLASH] = ACTIONS(1193),
        [anon_sym_STAR_STAR] = ACTIONS(1195),
        [anon_sym_PIPE] = ACTIONS(321),
        [anon_sym_AMP] = ACTIONS(321),
        [anon_sym_CARET] = ACTIONS(321),
        [anon_sym_LT_LT] = ACTIONS(1191),
        [anon_sym_GT_GT] = ACTIONS(1191),
        [anon_sym_and] = ACTIONS(321),
        [anon_sym_or] = ACTIONS(321),
        [anon_sym_LBRACK] = ACTIONS(321),
        [sym_comment] = ACTIONS(83),
        [sym__newline] = ACTIONS(321),
    },
    [621] = {
        [anon_sym_LPAREN] = ACTIONS(201),
        [anon_sym_COMMA] = ACTIONS(321),
        [anon_sym_STAR] = ACTIONS(323),
        [anon_sym_PLUS] = ACTIONS(321),
        [anon_sym_DASH] = ACTIONS(321),
        [anon_sym_SLASH] = ACTIONS(321),
        [anon_sym_STAR_STAR] = ACTIONS(1195),
        [anon_sym_PIPE] = ACTIONS(321),
        [anon_sym_AMP] = ACTIONS(321),
        [anon_sym_CARET] = ACTIONS(321),
        [anon_sym_LT_LT] = ACTIONS(321),
        [anon_sym_GT_GT] = ACTIONS(321),
        [anon_sym_and] = ACTIONS(321),
        [anon_sym_or] = ACTIONS(321),
        [anon_sym_LBRACK] = ACTIONS(321),
        [sym_comment] = ACTIONS(83),
        [sym__newline] = ACTIONS(321),
    },
    [622] = {
        [anon_sym_LPAREN] = ACTIONS(201),
        [anon_sym_COMMA] = ACTIONS(515),
        [anon_sym_STAR] = ACTIONS(1189),
        [anon_sym_PLUS] = ACTIONS(1191),
        [anon_sym_DASH] = ACTIONS(1191),
        [anon_sym_SLASH] = ACTIONS(1193),
        [anon_sym_STAR_STAR] = ACTIONS(1195),
        [anon_sym_PIPE] = ACTIONS(1197),
        [anon_sym_AMP] = ACTIONS(1199),
        [anon_sym_CARET] = ACTIONS(1201),
        [anon_sym_LT_LT] = ACTIONS(1191),
        [anon_sym_GT_GT] = ACTIONS(1191),
        [anon_sym_and] = ACTIONS(1199),
        [anon_sym_or] = ACTIONS(1197),
        [anon_sym_LBRACK] = ACTIONS(217),
        [sym_comment] = ACTIONS(83),
        [sym__newline] = ACTIONS(515),
    },
    [623] = {
        [sym_comment] = ACTIONS(83),
        [sym__newline] = ACTIONS(1205),
    },
    [624] = {
        [aux_sym_print_statement_repeat1] = STATE(625),
        [anon_sym_LPAREN] = ACTIONS(201),
        [anon_sym_COMMA] = ACTIONS(1187),
        [anon_sym_STAR] = ACTIONS(1189),
        [anon_sym_PLUS] = ACTIONS(1191),
        [anon_sym_DASH] = ACTIONS(1191),
        [anon_sym_SLASH] = ACTIONS(1193),
        [anon_sym_STAR_STAR] = ACTIONS(1195),
        [anon_sym_PIPE] = ACTIONS(1197),
        [anon_sym_AMP] = ACTIONS(1199),
        [anon_sym_CARET] = ACTIONS(1201),
        [anon_sym_LT_LT] = ACTIONS(1191),
        [anon_sym_GT_GT] = ACTIONS(1191),
        [anon_sym_and] = ACTIONS(1199),
        [anon_sym_or] = ACTIONS(1197),
        [anon_sym_LBRACK] = ACTIONS(217),
        [sym_comment] = ACTIONS(83),
        [sym__newline] = ACTIONS(1207),
    },
    [625] = {
        [anon_sym_COMMA] = ACTIONS(1203),
        [sym_comment] = ACTIONS(83),
        [sym__newline] = ACTIONS(1209),
    },
    [626] = {
        [anon_sym_import] = ACTIONS(1211),
        [anon_sym_DOT] = ACTIONS(1213),
        [sym_identifier] = ACTIONS(1215),
        [sym_comment] = ACTIONS(83),
    },
    [627] = {
        [aux_sym_dotted_name_repeat1] = STATE(662),
        [anon_sym_import] = ACTIONS(749),
        [anon_sym_DOT] = ACTIONS(1217),
        [anon_sym_RPAREN] = ACTIONS(749),
        [anon_sym_COMMA] = ACTIONS(749),
        [anon_sym_as] = ACTIONS(749),
        [sym_comment] = ACTIONS(83),
    },
    [628] = {
        [anon_sym_import] = ACTIONS(1219),
        [sym_comment] = ACTIONS(83),
    },
    [629] = {
        [sym_dotted_name] = STATE(632),
        [anon_sym_import] = ACTIONS(1221),
        [anon_sym_DOT] = ACTIONS(1223),
        [sym_identifier] = ACTIONS(1225),
        [sym_comment] = ACTIONS(83),
    },
    [630] = {
        [sym__import_list] = STATE(667),
        [sym_aliased_import] = STATE(637),
        [sym_wildcard_import] = STATE(667),
        [sym_dotted_name] = STATE(638),
        [anon_sym_LPAREN] = ACTIONS(1227),
        [anon_sym_STAR] = ACTIONS(1229),
        [sym_identifier] = ACTIONS(133),
        [sym_comment] = ACTIONS(83),
    },
    [631] = {
        [anon_sym_import] = ACTIONS(1231),
        [anon_sym_DOT] = ACTIONS(1233),
        [sym_identifier] = ACTIONS(1235),
        [sym_comment] = ACTIONS(83),
    },
    [632] = {
        [anon_sym_import] = ACTIONS(1237),
        [sym_comment] = ACTIONS(83),
    },
    [633] = {
        [sym__import_list] = STATE(636),
        [sym_aliased_import] = STATE(637),
        [sym_wildcard_import] = STATE(636),
        [sym_dotted_name] = STATE(638),
        [anon_sym_LPAREN] = ACTIONS(1239),
        [anon_sym_STAR] = ACTIONS(1229),
        [sym_identifier] = ACTIONS(133),
        [sym_comment] = ACTIONS(83),
    },
    [634] = {
        [sym__import_list] = STATE(648),
        [sym_aliased_import] = STATE(649),
        [sym_dotted_name] = STATE(650),
        [sym_identifier] = ACTIONS(137),
        [sym_comment] = ACTIONS(83),
    },
    [635] = {
        [sym_comment] = ACTIONS(83),
        [sym__newline] = ACTIONS(1241),
    },
    [636] = {
        [sym_comment] = ACTIONS(83),
        [sym__newline] = ACTIONS(1243),
    },
    [637] = {
        [aux_sym__import_list_repeat1] = STATE(641),
        [anon_sym_COMMA] = ACTIONS(1245),
        [sym_comment] = ACTIONS(83),
        [sym__newline] = ACTIONS(1247),
    },
    [638] = {
        [aux_sym__import_list_repeat1] = STATE(641),
        [anon_sym_COMMA] = ACTIONS(1245),
        [anon_sym_as] = ACTIONS(1249),
        [sym_comment] = ACTIONS(83),
        [sym__newline] = ACTIONS(1247),
    },
    [639] = {
        [sym_aliased_import] = STATE(646),
        [sym_dotted_name] = STATE(647),
        [anon_sym_RPAREN] = ACTIONS(1251),
        [sym_identifier] = ACTIONS(133),
        [sym_comment] = ACTIONS(83),
        [sym__newline] = ACTIONS(1251),
    },
    [640] = {
        [sym_identifier] = ACTIONS(1253),
        [sym_comment] = ACTIONS(83),
    },
    [641] = {
        [anon_sym_RPAREN] = ACTIONS(1251),
        [anon_sym_COMMA] = ACTIONS(1255),
        [sym_comment] = ACTIONS(83),
        [sym__newline] = ACTIONS(1251),
    },
    [642] = {
        [sym_aliased_import] = STATE(643),
        [sym_dotted_name] = STATE(644),
        [anon_sym_RPAREN] = ACTIONS(1257),
        [sym_identifier] = ACTIONS(133),
        [sym_comment] = ACTIONS(83),
        [sym__newline] = ACTIONS(1257),
    },
    [643] = {
        [anon_sym_RPAREN] = ACTIONS(1259),
        [anon_sym_COMMA] = ACTIONS(1259),
        [sym_comment] = ACTIONS(83),
        [sym__newline] = ACTIONS(1259),
    },
    [644] = {
        [anon_sym_RPAREN] = ACTIONS(1259),
        [anon_sym_COMMA] = ACTIONS(1259),
        [anon_sym_as] = ACTIONS(1249),
        [sym_comment] = ACTIONS(83),
        [sym__newline] = ACTIONS(1259),
    },
    [645] = {
        [anon_sym_RPAREN] = ACTIONS(1261),
        [anon_sym_COMMA] = ACTIONS(1261),
        [sym_comment] = ACTIONS(83),
        [sym__newline] = ACTIONS(1261),
    },
    [646] = {
        [anon_sym_RPAREN] = ACTIONS(1263),
        [anon_sym_COMMA] = ACTIONS(1263),
        [sym_comment] = ACTIONS(83),
        [sym__newline] = ACTIONS(1263),
    },
    [647] = {
        [anon_sym_RPAREN] = ACTIONS(1263),
        [anon_sym_COMMA] = ACTIONS(1263),
        [anon_sym_as] = ACTIONS(1249),
        [sym_comment] = ACTIONS(83),
        [sym__newline] = ACTIONS(1263),
    },
    [648] = {
        [anon_sym_RPAREN] = ACTIONS(1265),
        [sym_comment] = ACTIONS(83),
    },
    [649] = {
        [aux_sym__import_list_repeat1] = STATE(653),
        [anon_sym_RPAREN] = ACTIONS(1247),
        [anon_sym_COMMA] = ACTIONS(1267),
        [sym_comment] = ACTIONS(83),
    },
    [650] = {
        [aux_sym__import_list_repeat1] = STATE(653),
        [anon_sym_RPAREN] = ACTIONS(1247),
        [anon_sym_COMMA] = ACTIONS(1267),
        [anon_sym_as] = ACTIONS(1269),
        [sym_comment] = ACTIONS(83),
    },
    [651] = {
        [sym_aliased_import] = STATE(658),
        [sym_dotted_name] = STATE(659),
        [anon_sym_RPAREN] = ACTIONS(1251),
        [sym_identifier] = ACTIONS(137),
        [sym_comment] = ACTIONS(83),
    },
    [652] = {
        [sym_identifier] = ACTIONS(1271),
        [sym_comment] = ACTIONS(83),
    },
    [653] = {
        [anon_sym_RPAREN] = ACTIONS(1251),
        [anon_sym_COMMA] = ACTIONS(1273),
        [sym_comment] = ACTIONS(83),
    },
    [654] = {
        [sym_aliased_import] = STATE(655),
        [sym_dotted_name] = STATE(656),
        [anon_sym_RPAREN] = ACTIONS(1257),
        [sym_identifier] = ACTIONS(137),
        [sym_comment] = ACTIONS(83),
    },
    [655] = {
        [anon_sym_RPAREN] = ACTIONS(1259),
        [anon_sym_COMMA] = ACTIONS(1259),
        [sym_comment] = ACTIONS(83),
    },
    [656] = {
        [anon_sym_RPAREN] = ACTIONS(1259),
        [anon_sym_COMMA] = ACTIONS(1259),
        [anon_sym_as] = ACTIONS(1269),
        [sym_comment] = ACTIONS(83),
    },
    [657] = {
        [anon_sym_RPAREN] = ACTIONS(1261),
        [anon_sym_COMMA] = ACTIONS(1261),
        [sym_comment] = ACTIONS(83),
    },
    [658] = {
        [anon_sym_RPAREN] = ACTIONS(1263),
        [anon_sym_COMMA] = ACTIONS(1263),
        [sym_comment] = ACTIONS(83),
    },
    [659] = {
        [anon_sym_RPAREN] = ACTIONS(1263),
        [anon_sym_COMMA] = ACTIONS(1263),
        [anon_sym_as] = ACTIONS(1269),
        [sym_comment] = ACTIONS(83),
    },
    [660] = {
        [sym_comment] = ACTIONS(83),
        [sym__newline] = ACTIONS(1275),
    },
    [661] = {
        [sym_identifier] = ACTIONS(1277),
        [sym_comment] = ACTIONS(83),
    },
    [662] = {
        [anon_sym_import] = ACTIONS(775),
        [anon_sym_DOT] = ACTIONS(1279),
        [anon_sym_RPAREN] = ACTIONS(775),
        [anon_sym_COMMA] = ACTIONS(775),
        [anon_sym_as] = ACTIONS(775),
        [sym_comment] = ACTIONS(83),
    },
    [663] = {
        [sym_identifier] = ACTIONS(1281),
        [sym_comment] = ACTIONS(83),
    },
    [664] = {
        [anon_sym_import] = ACTIONS(781),
        [anon_sym_DOT] = ACTIONS(781),
        [anon_sym_RPAREN] = ACTIONS(781),
        [anon_sym_COMMA] = ACTIONS(781),
        [anon_sym_as] = ACTIONS(781),
        [sym_comment] = ACTIONS(83),
    },
    [665] = {
        [anon_sym_import] = ACTIONS(783),
        [anon_sym_DOT] = ACTIONS(783),
        [anon_sym_RPAREN] = ACTIONS(783),
        [anon_sym_COMMA] = ACTIONS(783),
        [anon_sym_as] = ACTIONS(783),
        [sym_comment] = ACTIONS(83),
    },
    [666] = {
        [sym__import_list] = STATE(668),
        [sym_aliased_import] = STATE(649),
        [sym_dotted_name] = STATE(650),
        [sym_identifier] = ACTIONS(137),
        [sym_comment] = ACTIONS(83),
    },
    [667] = {
        [sym_comment] = ACTIONS(83),
        [sym__newline] = ACTIONS(1283),
    },
    [668] = {
        [anon_sym_RPAREN] = ACTIONS(1285),
        [sym_comment] = ACTIONS(83),
    },
    [669] = {
        [sym_comment] = ACTIONS(83),
        [sym__newline] = ACTIONS(1287),
    },
    [670] = {
        [sym_comment] = ACTIONS(83),
        [sym__newline] = ACTIONS(1289),
    },
    [671] = {
        [sym__import_list] = STATE(904),
        [sym_aliased_import] = STATE(637),
        [sym_wildcard_import] = STATE(707),
        [sym_dotted_name] = STATE(638),
        [anon_sym_LPAREN] = ACTIONS(1291),
        [anon_sym_STAR] = ACTIONS(1229),
        [sym_identifier] = ACTIONS(133),
        [sym_comment] = ACTIONS(83),
    },
    [672] = {
        [anon_sym_import] = ACTIONS(1293),
        [anon_sym_DOT] = ACTIONS(1296),
        [sym_identifier] = ACTIONS(1299),
        [sym_comment] = ACTIONS(83),
    },
    [673] = {
        [sym__import_list] = STATE(807),
        [sym_aliased_import] = STATE(649),
        [sym_default_parameter] = STATE(428),
        [sym_list_splat_parameter] = STATE(429),
        [sym_dictionary_splat_parameter] = STATE(430),
        [sym_expression_list] = STATE(831),
        [sym_dotted_name] = STATE(650),
        [sym__expression] = STATE(898),
        [sym_binary_operator] = STATE(45),
        [sym_unary_operator] = STATE(45),
        [sym_subscript] = STATE(45),
        [sym_call] = STATE(45),
        [sym_keyword_argument] = STATE(298),
        [sym_list_splat_argument] = STATE(299),
        [sym_dictionary_splat_argument] = STATE(300),
        [sym_list] = STATE(45),
        [sym_list_comprehension] = STATE(45),
        [sym_dictionary] = STATE(45),
        [sym_dictionary_comprehension] = STATE(45),
        [sym_set] = STATE(45),
        [sym_set_comprehension] = STATE(45),
        [aux_sym_parameters_repeat1] = STATE(431),
        [aux_sym_call_repeat1] = STATE(301),
        [anon_sym_RPAREN] = ACTIONS(861),
        [anon_sym_STAR] = ACTIONS(1303),
        [anon_sym_STAR_STAR] = ACTIONS(247),
        [anon_sym_not] = ACTIONS(249),
        [anon_sym_LBRACK] = ACTIONS(145),
        [anon_sym_LBRACE] = ACTIONS(147),
        [sym_string] = ACTIONS(149),
        [sym_number] = ACTIONS(151),
        [sym_identifier] = ACTIONS(1305),
        [sym_comment] = ACTIONS(83),
    },
    [674] = {
        [anon_sym_LPAREN] = ACTIONS(1307),
        [anon_sym_RPAREN] = ACTIONS(1307),
        [anon_sym_COMMA] = ACTIONS(1307),
        [anon_sym_as] = ACTIONS(1307),
        [anon_sym_STAR] = ACTIONS(1313),
        [anon_sym_COLON] = ACTIONS(1319),
        [anon_sym_for] = ACTIONS(1307),
        [anon_sym_in] = ACTIONS(1307),
        [anon_sym_PLUS] = ACTIONS(1307),
        [anon_sym_DASH] = ACTIONS(1307),
        [anon_sym_SLASH] = ACTIONS(1307),
        [anon_sym_STAR_STAR] = ACTIONS(1307),
        [anon_sym_PIPE] = ACTIONS(1307),
        [anon_sym_AMP] = ACTIONS(1307),
        [anon_sym_CARET] = ACTIONS(1307),
        [anon_sym_LT_LT] = ACTIONS(1307),
        [anon_sym_GT_GT] = ACTIONS(1307),
        [anon_sym_and] = ACTIONS(1307),
        [anon_sym_or] = ACTIONS(1307),
        [anon_sym_LBRACK] = ACTIONS(1307),
        [anon_sym_RBRACK] = ACTIONS(1307),
        [anon_sym_RBRACE] = ACTIONS(1307),
        [sym_comment] = ACTIONS(83),
        [sym__newline] = ACTIONS(1331),
    },
    [675] = {
        [sym_aliased_import] = STATE(879),
        [sym_with_item] = STATE(880),
        [sym_dictionary_splat_parameter] = STATE(818),
        [sym_dotted_name] = STATE(881),
        [sym__expression] = STATE(882),
        [sym_binary_operator] = STATE(19),
        [sym_unary_operator] = STATE(19),
        [sym_subscript] = STATE(19),
        [sym_call] = STATE(19),
        [sym_keyword_argument] = STATE(883),
        [sym_dictionary_splat_argument] = STATE(884),
        [sym_list] = STATE(19),
        [sym_list_comprehension] = STATE(19),
        [sym_dictionary] = STATE(19),
        [sym_dictionary_comprehension] = STATE(19),
        [sym_pair] = STATE(885),
        [sym_set] = STATE(19),
        [sym_set_comprehension] = STATE(19),
        [anon_sym_RPAREN] = ACTIONS(1341),
        [anon_sym_STAR] = ACTIONS(1345),
        [anon_sym_STAR_STAR] = ACTIONS(1351),
        [anon_sym_not] = ACTIONS(1355),
        [anon_sym_LBRACK] = ACTIONS(1359),
        [anon_sym_DOT_DOT_DOT] = ACTIONS(1363),
        [anon_sym_RBRACK] = ACTIONS(1365),
        [anon_sym_LBRACE] = ACTIONS(1367),
        [anon_sym_RBRACE] = ACTIONS(1371),
        [sym_string] = ACTIONS(1373),
        [sym_number] = ACTIONS(1377),
        [sym_identifier] = ACTIONS(1381),
        [sym_comment] = ACTIONS(83),
        [sym__newline] = ACTIONS(1387),
    },
    [676] = {
        [sym__expression] = STATE(800),
        [sym_binary_operator] = STATE(45),
        [sym_unary_operator] = STATE(45),
        [sym_subscript] = STATE(45),
        [sym_call] = STATE(45),
        [sym_list] = STATE(45),
        [sym_list_comprehension] = STATE(45),
        [sym_dictionary] = STATE(45),
        [sym_dictionary_comprehension] = STATE(45),
        [sym_set] = STATE(45),
        [sym_set_comprehension] = STATE(45),
        [anon_sym_not] = ACTIONS(949),
        [anon_sym_LBRACK] = ACTIONS(145),
        [anon_sym_LBRACE] = ACTIONS(147),
        [sym_string] = ACTIONS(149),
        [sym_number] = ACTIONS(151),
        [sym_identifier] = ACTIONS(1390),
        [sym_comment] = ACTIONS(83),
    },
    [677] = {
        [sym__expression] = STATE(871),
        [sym_binary_operator] = STATE(19),
        [sym_unary_operator] = STATE(19),
        [sym_subscript] = STATE(19),
        [sym_call] = STATE(19),
        [sym_list] = STATE(19),
        [sym_list_comprehension] = STATE(19),
        [sym_dictionary] = STATE(19),
        [sym_dictionary_comprehension] = STATE(19),
        [sym_set] = STATE(19),
        [sym_set_comprehension] = STATE(19),
        [anon_sym_STAR] = ACTIONS(877),
        [anon_sym_not] = ACTIONS(1392),
        [anon_sym_LBRACK] = ACTIONS(123),
        [anon_sym_LBRACE] = ACTIONS(125),
        [sym_string] = ACTIONS(127),
        [sym_number] = ACTIONS(129),
        [sym_identifier] = ACTIONS(1394),
        [sym_comment] = ACTIONS(83),
        [sym__newline] = ACTIONS(1241),
    },
    [678] = {
        [sym__expression] = STATE(866),
        [sym_binary_operator] = STATE(45),
        [sym_unary_operator] = STATE(45),
        [sym_subscript] = STATE(45),
        [sym_call] = STATE(45),
        [sym_list] = STATE(45),
        [sym_list_comprehension] = STATE(45),
        [sym_dictionary] = STATE(45),
        [sym_dictionary_comprehension] = STATE(45),
        [sym_set] = STATE(45),
        [sym_set_comprehension] = STATE(45),
        [anon_sym_not] = ACTIONS(143),
        [anon_sym_LBRACK] = ACTIONS(145),
        [anon_sym_LBRACE] = ACTIONS(147),
        [sym_string] = ACTIONS(149),
        [sym_number] = ACTIONS(151),
        [sym_identifier] = ACTIONS(153),
        [sym_comment] = ACTIONS(83),
    },
    [679] = {
        [sym__simple_statement] = STATE(742),
        [sym_import_statement] = STATE(7),
        [sym_import_from_statement] = STATE(7),
        [sym_print_statement] = STATE(7),
        [sym_expression_statement] = STATE(7),
        [sym_return_statement] = STATE(7),
        [sym_delete_statement] = STATE(7),
        [sym__suite] = STATE(721),
        [sym__expression] = STATE(794),
        [sym_binary_operator] = STATE(19),
        [sym_unary_operator] = STATE(19),
        [sym_subscript] = STATE(19),
        [sym_call] = STATE(19),
        [sym_list] = STATE(19),
        [sym_list_comprehension] = STATE(19),
        [sym_dictionary] = STATE(19),
        [sym_dictionary_comprehension] = STATE(19),
        [sym_set] = STATE(19),
        [sym_set_comprehension] = STATE(19),
        [anon_sym_import] = ACTIONS(93),
        [anon_sym_from] = ACTIONS(95),
        [anon_sym_print] = ACTIONS(97),
        [anon_sym_return] = ACTIONS(99),
        [anon_sym_del] = ACTIONS(101),
        [sym_pass_statement] = ACTIONS(103),
        [sym_break_statement] = ACTIONS(103),
        [sym_continue_statement] = ACTIONS(103),
        [anon_sym_not] = ACTIONS(1396),
        [anon_sym_LBRACK] = ACTIONS(123),
        [anon_sym_LBRACE] = ACTIONS(125),
        [sym_string] = ACTIONS(127),
        [sym_number] = ACTIONS(129),
        [sym_identifier] = ACTIONS(131),
        [sym_comment] = ACTIONS(83),
        [sym__indent] = ACTIONS(1398),
    },
    [680] = {
        [sym__expression] = STATE(863),
        [sym_binary_operator] = STATE(45),
        [sym_unary_operator] = STATE(45),
        [sym_subscript] = STATE(45),
        [sym_call] = STATE(45),
        [sym_list] = STATE(45),
        [sym_list_comprehension] = STATE(45),
        [sym_dictionary] = STATE(45),
        [sym_dictionary_comprehension] = STATE(45),
        [sym_set] = STATE(45),
        [sym_set_comprehension] = STATE(45),
        [anon_sym_not] = ACTIONS(143),
        [anon_sym_LBRACK] = ACTIONS(145),
        [anon_sym_LBRACE] = ACTIONS(147),
        [sym_string] = ACTIONS(149),
        [sym_number] = ACTIONS(151),
        [sym_identifier] = ACTIONS(153),
        [sym_comment] = ACTIONS(83),
    },
    [681] = {
        [anon_sym_COLON] = ACTIONS(1400),
        [sym_comment] = ACTIONS(83),
    },
    [682] = {
        [sym_expression_list] = STATE(862),
        [sym__expression] = STATE(166),
        [sym_binary_operator] = STATE(45),
        [sym_unary_operator] = STATE(45),
        [sym_subscript] = STATE(45),
        [sym_call] = STATE(45),
        [sym_list] = STATE(45),
        [sym_list_comprehension] = STATE(45),
        [sym_dictionary] = STATE(45),
        [sym_dictionary_comprehension] = STATE(45),
        [sym_set] = STATE(45),
        [sym_set_comprehension] = STATE(45),
        [anon_sym_not] = ACTIONS(155),
        [anon_sym_LBRACK] = ACTIONS(145),
        [anon_sym_LBRACE] = ACTIONS(147),
        [sym_string] = ACTIONS(149),
        [sym_number] = ACTIONS(151),
        [sym_identifier] = ACTIONS(153),
        [sym_comment] = ACTIONS(83),
    },
    [683] = {
        [sym_expression_list] = STATE(767),
        [sym__expression] = STATE(857),
        [sym_binary_operator] = STATE(45),
        [sym_unary_operator] = STATE(45),
        [sym_subscript] = STATE(45),
        [sym_call] = STATE(45),
        [sym_list] = STATE(45),
        [sym_list_comprehension] = STATE(45),
        [sym_dictionary] = STATE(45),
        [sym_dictionary_comprehension] = STATE(45),
        [sym_set] = STATE(45),
        [sym_set_comprehension] = STATE(45),
        [anon_sym_not] = ACTIONS(1402),
        [anon_sym_LBRACK] = ACTIONS(145),
        [anon_sym_LBRACE] = ACTIONS(147),
        [sym_string] = ACTIONS(149),
        [sym_number] = ACTIONS(151),
        [sym_identifier] = ACTIONS(153),
        [sym_comment] = ACTIONS(83),
    },
    [684] = {
        [sym__expression] = STATE(852),
        [sym_binary_operator] = STATE(45),
        [sym_unary_operator] = STATE(45),
        [sym_subscript] = STATE(45),
        [sym_call] = STATE(45),
        [sym_list] = STATE(45),
        [sym_list_comprehension] = STATE(45),
        [sym_dictionary] = STATE(45),
        [sym_dictionary_comprehension] = STATE(45),
        [sym_set] = STATE(45),
        [sym_set_comprehension] = STATE(45),
        [anon_sym_not] = ACTIONS(143),
        [anon_sym_LBRACK] = ACTIONS(145),
        [anon_sym_LBRACE] = ACTIONS(147),
        [sym_string] = ACTIONS(149),
        [sym_number] = ACTIONS(151),
        [sym_identifier] = ACTIONS(153),
        [sym_comment] = ACTIONS(83),
    },
    [685] = {
        [anon_sym_COLON] = ACTIONS(1404),
        [sym_comment] = ACTIONS(83),
    },
    [686] = {
        [sym__expression] = STATE(845),
        [sym_binary_operator] = STATE(45),
        [sym_unary_operator] = STATE(45),
        [sym_subscript] = STATE(45),
        [sym_call] = STATE(45),
        [sym_list] = STATE(45),
        [sym_list_comprehension] = STATE(45),
        [sym_dictionary] = STATE(45),
        [sym_dictionary_comprehension] = STATE(45),
        [sym_set] = STATE(45),
        [sym_set_comprehension] = STATE(45),
        [anon_sym_not] = ACTIONS(159),
        [anon_sym_LBRACK] = ACTIONS(145),
        [anon_sym_LBRACE] = ACTIONS(147),
        [sym_string] = ACTIONS(149),
        [sym_number] = ACTIONS(151),
        [sym_identifier] = ACTIONS(153),
        [sym_comment] = ACTIONS(83),
    },
    [687] = {
        [anon_sym_COLON] = ACTIONS(1406),
        [sym_comment] = ACTIONS(83),
    },
    [688] = {
        [sym_with_item] = STATE(842),
        [sym__expression] = STATE(454),
        [sym_binary_operator] = STATE(45),
        [sym_unary_operator] = STATE(45),
        [sym_subscript] = STATE(45),
        [sym_call] = STATE(45),
        [sym_list] = STATE(45),
        [sym_list_comprehension] = STATE(45),
        [sym_dictionary] = STATE(45),
        [sym_dictionary_comprehension] = STATE(45),
        [sym_set] = STATE(45),
        [sym_set_comprehension] = STATE(45),
        [anon_sym_not] = ACTIONS(159),
        [anon_sym_LBRACK] = ACTIONS(145),
        [anon_sym_LBRACE] = ACTIONS(147),
        [sym_string] = ACTIONS(149),
        [sym_number] = ACTIONS(151),
        [sym_identifier] = ACTIONS(153),
        [sym_comment] = ACTIONS(83),
    },
    [689] = {
        [sym_identifier] = ACTIONS(1408),
        [sym_comment] = ACTIONS(83),
    },
    [690] = {
        [sym__expression] = STATE(840),
        [sym_binary_operator] = STATE(45),
        [sym_unary_operator] = STATE(45),
        [sym_subscript] = STATE(45),
        [sym_call] = STATE(45),
        [sym_list] = STATE(45),
        [sym_list_comprehension] = STATE(45),
        [sym_dictionary] = STATE(45),
        [sym_dictionary_comprehension] = STATE(45),
        [sym_set] = STATE(45),
        [sym_set_comprehension] = STATE(45),
        [anon_sym_not] = ACTIONS(249),
        [anon_sym_LBRACK] = ACTIONS(145),
        [anon_sym_LBRACE] = ACTIONS(147),
        [sym_string] = ACTIONS(149),
        [sym_number] = ACTIONS(151),
        [sym_identifier] = ACTIONS(153),
        [sym_comment] = ACTIONS(83),
    },
    [691] = {
        [sym_identifier] = ACTIONS(1410),
        [sym_comment] = ACTIONS(83),
    },
    [692] = {
        [sym__expression] = STATE(784),
        [sym_binary_operator] = STATE(19),
        [sym_unary_operator] = STATE(19),
        [sym_subscript] = STATE(19),
        [sym_call] = STATE(19),
        [sym_list] = STATE(19),
        [sym_list_comprehension] = STATE(19),
        [sym_dictionary] = STATE(19),
        [sym_dictionary_comprehension] = STATE(19),
        [sym_set] = STATE(19),
        [sym_set_comprehension] = STATE(19),
        [anon_sym_not] = ACTIONS(1392),
        [anon_sym_LBRACK] = ACTIONS(123),
        [anon_sym_LBRACE] = ACTIONS(125),
        [sym_string] = ACTIONS(127),
        [sym_number] = ACTIONS(129),
        [sym_identifier] = ACTIONS(131),
        [sym_comment] = ACTIONS(83),
    },
    [693] = {
        [sym__expression] = STATE(837),
        [sym_binary_operator] = STATE(19),
        [sym_unary_operator] = STATE(19),
        [sym_subscript] = STATE(19),
        [sym_call] = STATE(19),
        [sym_list] = STATE(19),
        [sym_list_comprehension] = STATE(19),
        [sym_dictionary] = STATE(19),
        [sym_dictionary_comprehension] = STATE(19),
        [sym_set] = STATE(19),
        [sym_set_comprehension] = STATE(19),
        [anon_sym_not] = ACTIONS(1392),
        [anon_sym_LBRACK] = ACTIONS(123),
        [anon_sym_LBRACE] = ACTIONS(125),
        [sym_string] = ACTIONS(127),
        [sym_number] = ACTIONS(129),
        [sym_identifier] = ACTIONS(131),
        [sym_comment] = ACTIONS(83),
    },
    [694] = {
        [sym__expression] = STATE(836),
        [sym_binary_operator] = STATE(19),
        [sym_unary_operator] = STATE(19),
        [sym_subscript] = STATE(19),
        [sym_call] = STATE(19),
        [sym_list] = STATE(19),
        [sym_list_comprehension] = STATE(19),
        [sym_dictionary] = STATE(19),
        [sym_dictionary_comprehension] = STATE(19),
        [sym_set] = STATE(19),
        [sym_set_comprehension] = STATE(19),
        [anon_sym_not] = ACTIONS(1392),
        [anon_sym_LBRACK] = ACTIONS(123),
        [anon_sym_LBRACE] = ACTIONS(125),
        [sym_string] = ACTIONS(127),
        [sym_number] = ACTIONS(129),
        [sym_identifier] = ACTIONS(131),
        [sym_comment] = ACTIONS(83),
    },
    [695] = {
        [sym__expression] = STATE(832),
        [sym_binary_operator] = STATE(45),
        [sym_unary_operator] = STATE(45),
        [sym_subscript] = STATE(45),
        [sym_call] = STATE(45),
        [sym_list] = STATE(45),
        [sym_list_comprehension] = STATE(45),
        [sym_dictionary] = STATE(45),
        [sym_dictionary_comprehension] = STATE(45),
        [sym_set] = STATE(45),
        [sym_set_comprehension] = STATE(45),
        [anon_sym_not] = ACTIONS(165),
        [anon_sym_LBRACK] = ACTIONS(145),
        [anon_sym_DOT_DOT_DOT] = ACTIONS(255),
        [anon_sym_RBRACK] = ACTIONS(167),
        [anon_sym_LBRACE] = ACTIONS(147),
        [sym_string] = ACTIONS(149),
        [sym_number] = ACTIONS(151),
        [sym_identifier] = ACTIONS(153),
        [sym_comment] = ACTIONS(83),
    },
    [696] = {
        [aux_sym_subscript_repeat1] = STATE(57),
        [anon_sym_COMMA] = ACTIONS(1412),
        [anon_sym_RBRACK] = ACTIONS(1416),
        [sym_comment] = ACTIONS(83),
    },
    [697] = {
        [anon_sym_LPAREN] = ACTIONS(1420),
        [anon_sym_RPAREN] = ACTIONS(1420),
        [anon_sym_COMMA] = ACTIONS(1420),
        [anon_sym_as] = ACTIONS(1420),
        [anon_sym_STAR] = ACTIONS(1429),
        [anon_sym_COLON] = ACTIONS(1420),
        [anon_sym_for] = ACTIONS(1420),
        [anon_sym_in] = ACTIONS(1420),
        [anon_sym_PLUS] = ACTIONS(1420),
        [anon_sym_DASH] = ACTIONS(1420),
        [anon_sym_SLASH] = ACTIONS(1420),
        [anon_sym_STAR_STAR] = ACTIONS(1420),
        [anon_sym_PIPE] = ACTIONS(1420),
        [anon_sym_AMP] = ACTIONS(1420),
        [anon_sym_CARET] = ACTIONS(1420),
        [anon_sym_LT_LT] = ACTIONS(1420),
        [anon_sym_GT_GT] = ACTIONS(1420),
        [anon_sym_and] = ACTIONS(1420),
        [anon_sym_or] = ACTIONS(1420),
        [anon_sym_LBRACK] = ACTIONS(1420),
        [anon_sym_RBRACK] = ACTIONS(1420),
        [anon_sym_RBRACE] = ACTIONS(1420),
        [sym_comment] = ACTIONS(83),
        [sym__newline] = ACTIONS(1420),
    },
    [698] = {
        [anon_sym_LPAREN] = ACTIONS(1438),
        [anon_sym_RPAREN] = ACTIONS(1438),
        [anon_sym_COMMA] = ACTIONS(1438),
        [anon_sym_as] = ACTIONS(1438),
        [anon_sym_STAR] = ACTIONS(1448),
        [anon_sym_COLON] = ACTIONS(1438),
        [anon_sym_for] = ACTIONS(1438),
        [anon_sym_in] = ACTIONS(1438),
        [anon_sym_PLUS] = ACTIONS(1438),
        [anon_sym_DASH] = ACTIONS(1438),
        [anon_sym_SLASH] = ACTIONS(1438),
        [anon_sym_STAR_STAR] = ACTIONS(1438),
        [anon_sym_PIPE] = ACTIONS(1438),
        [anon_sym_AMP] = ACTIONS(1438),
        [anon_sym_CARET] = ACTIONS(1438),
        [anon_sym_LT_LT] = ACTIONS(1438),
        [anon_sym_GT_GT] = ACTIONS(1438),
        [anon_sym_and] = ACTIONS(1438),
        [anon_sym_or] = ACTIONS(1438),
        [anon_sym_LBRACK] = ACTIONS(1438),
        [anon_sym_RBRACK] = ACTIONS(1438),
        [anon_sym_RBRACE] = ACTIONS(1438),
        [sym_comment] = ACTIONS(83),
        [sym__newline] = ACTIONS(1438),
    },
    [699] = {
        [sym_parameters] = STATE(716),
        [aux_sym_dotted_name_repeat1] = STATE(377),
        [anon_sym_import] = ACTIONS(1458),
        [anon_sym_DOT] = ACTIONS(1462),
        [anon_sym_LPAREN] = ACTIONS(1466),
        [anon_sym_RPAREN] = ACTIONS(1472),
        [anon_sym_COMMA] = ACTIONS(1481),
        [anon_sym_as] = ACTIONS(1489),
        [anon_sym_STAR] = ACTIONS(175),
        [anon_sym_COLON] = ACTIONS(1494),
        [anon_sym_for] = ACTIONS(173),
        [anon_sym_in] = ACTIONS(173),
        [anon_sym_EQ] = ACTIONS(1497),
        [anon_sym_PLUS] = ACTIONS(173),
        [anon_sym_DASH] = ACTIONS(173),
        [anon_sym_SLASH] = ACTIONS(173),
        [anon_sym_STAR_STAR] = ACTIONS(173),
        [anon_sym_PIPE] = ACTIONS(173),
        [anon_sym_AMP] = ACTIONS(173),
        [anon_sym_CARET] = ACTIONS(173),
        [anon_sym_LT_LT] = ACTIONS(173),
        [anon_sym_GT_GT] = ACTIONS(173),
        [anon_sym_and] = ACTIONS(173),
        [anon_sym_or] = ACTIONS(173),
        [anon_sym_LBRACK] = ACTIONS(173),
        [anon_sym_RBRACK] = ACTIONS(173),
        [anon_sym_RBRACE] = ACTIONS(173),
        [sym_comment] = ACTIONS(83),
        [sym__newline] = ACTIONS(1499),
    },
    [700] = {
        [ts_builtin_sym_end] = ACTIONS(1505),
        [anon_sym_SEMI] = ACTIONS(1509),
        [anon_sym_import] = ACTIONS(1512),
        [anon_sym_from] = ACTIONS(1512),
        [anon_sym_print] = ACTIONS(1512),
        [anon_sym_return] = ACTIONS(1512),
        [anon_sym_del] = ACTIONS(1512),
        [sym_pass_statement] = ACTIONS(1512),
        [sym_break_statement] = ACTIONS(1512),
        [sym_continue_statement] = ACTIONS(1512),
        [anon_sym_if] = ACTIONS(1512),
        [anon_sym_elif] = ACTIONS(815),
        [anon_sym_else] = ACTIONS(815),
        [anon_sym_for] = ACTIONS(1512),
        [anon_sym_while] = ACTIONS(1512),
        [anon_sym_try] = ACTIONS(1512),
        [anon_sym_except] = ACTIONS(815),
        [anon_sym_finally] = ACTIONS(815),
        [anon_sym_with] = ACTIONS(1512),
        [anon_sym_def] = ACTIONS(1515),
        [anon_sym_class] = ACTIONS(1515),
        [anon_sym_AT] = ACTIONS(1520),
        [anon_sym_not] = ACTIONS(1512),
        [anon_sym_LBRACK] = ACTIONS(1509),
        [anon_sym_LBRACE] = ACTIONS(1509),
        [sym_string] = ACTIONS(1509),
        [sym_number] = ACTIONS(1512),
        [sym_identifier] = ACTIONS(1525),
        [sym_comment] = ACTIONS(83),
        [sym__newline] = ACTIONS(1509),
        [sym__dedent] = ACTIONS(1509),
    },
    [701] = {
        [sym__statement] = STATE(395),
        [sym__simple_statement] = STATE(396),
        [sym_import_statement] = STATE(7),
        [sym_import_from_statement] = STATE(7),
        [sym_print_statement] = STATE(7),
        [sym_expression_statement] = STATE(7),
        [sym_return_statement] = STATE(7),
        [sym_delete_statement] = STATE(7),
        [sym__compound_statement] = STATE(397),
        [sym_if_statement] = STATE(398),
        [sym_for_statement] = STATE(398),
        [sym_while_statement] = STATE(398),
        [sym_try_statement] = STATE(398),
        [sym_with_statement] = STATE(398),
        [sym_function_definition] = STATE(398),
        [sym_class_definition] = STATE(398),
        [sym_decorated_definition] = STATE(398),
        [sym_decorator] = STATE(25),
        [sym__expression] = STATE(26),
        [sym_binary_operator] = STATE(19),
        [sym_unary_operator] = STATE(19),
        [sym_subscript] = STATE(19),
        [sym_call] = STATE(19),
        [sym_list] = STATE(19),
        [sym_list_comprehension] = STATE(19),
        [sym_dictionary] = STATE(19),
        [sym_dictionary_comprehension] = STATE(19),
        [sym_set] = STATE(19),
        [sym_set_comprehension] = STATE(19),
        [aux_sym_module_repeat1] = STATE(745),
        [aux_sym_decorated_definition_repeat1] = STATE(400),
        [anon_sym_import] = ACTIONS(93),
        [anon_sym_from] = ACTIONS(95),
        [anon_sym_print] = ACTIONS(97),
        [anon_sym_return] = ACTIONS(99),
        [anon_sym_del] = ACTIONS(101),
        [sym_pass_statement] = ACTIONS(103),
        [sym_break_statement] = ACTIONS(103),
        [sym_continue_statement] = ACTIONS(103),
        [anon_sym_if] = ACTIONS(791),
        [anon_sym_for] = ACTIONS(793),
        [anon_sym_while] = ACTIONS(795),
        [anon_sym_try] = ACTIONS(797),
        [anon_sym_with] = ACTIONS(799),
        [anon_sym_def] = ACTIONS(801),
        [anon_sym_class] = ACTIONS(803),
        [anon_sym_AT] = ACTIONS(119),
        [anon_sym_not] = ACTIONS(121),
        [anon_sym_LBRACK] = ACTIONS(123),
        [anon_sym_LBRACE] = ACTIONS(125),
        [sym_string] = ACTIONS(127),
        [sym_number] = ACTIONS(129),
        [sym_identifier] = ACTIONS(131),
        [sym_comment] = ACTIONS(83),
        [sym__dedent] = ACTIONS(1528),
    },
    [702] = {
        [ts_builtin_sym_end] = ACTIONS(1530),
        [anon_sym_SEMI] = ACTIONS(1530),
        [anon_sym_import] = ACTIONS(1533),
        [anon_sym_from] = ACTIONS(1533),
        [anon_sym_print] = ACTIONS(1533),
        [anon_sym_return] = ACTIONS(1533),
        [anon_sym_del] = ACTIONS(1533),
        [sym_pass_statement] = ACTIONS(1533),
        [sym_break_statement] = ACTIONS(1533),
        [sym_continue_statement] = ACTIONS(1533),
        [anon_sym_if] = ACTIONS(1533),
        [anon_sym_elif] = ACTIONS(1533),
        [anon_sym_else] = ACTIONS(1533),
        [anon_sym_for] = ACTIONS(1533),
        [anon_sym_while] = ACTIONS(1533),
        [anon_sym_try] = ACTIONS(1533),
        [anon_sym_except] = ACTIONS(1533),
        [anon_sym_finally] = ACTIONS(1533),
        [anon_sym_with] = ACTIONS(1533),
        [anon_sym_def] = ACTIONS(1533),
        [anon_sym_class] = ACTIONS(1533),
        [anon_sym_AT] = ACTIONS(1530),
        [anon_sym_not] = ACTIONS(1533),
        [anon_sym_LBRACK] = ACTIONS(1530),
        [anon_sym_LBRACE] = ACTIONS(1530),
        [sym_string] = ACTIONS(1530),
        [sym_number] = ACTIONS(1533),
        [sym_identifier] = ACTIONS(1536),
        [sym_comment] = ACTIONS(83),
        [sym__newline] = ACTIONS(1530),
        [sym__dedent] = ACTIONS(1530),
    },
    [703] = {
        [ts_builtin_sym_end] = ACTIONS(1539),
        [anon_sym_SEMI] = ACTIONS(1539),
        [anon_sym_import] = ACTIONS(1542),
        [anon_sym_from] = ACTIONS(1542),
        [anon_sym_print] = ACTIONS(1542),
        [anon_sym_return] = ACTIONS(1542),
        [anon_sym_del] = ACTIONS(1542),
        [sym_pass_statement] = ACTIONS(1542),
        [sym_break_statement] = ACTIONS(1542),
        [sym_continue_statement] = ACTIONS(1542),
        [anon_sym_if] = ACTIONS(1542),
        [anon_sym_for] = ACTIONS(1542),
        [anon_sym_while] = ACTIONS(1542),
        [anon_sym_try] = ACTIONS(1542),
        [anon_sym_with] = ACTIONS(1542),
        [anon_sym_def] = ACTIONS(1542),
        [anon_sym_class] = ACTIONS(1542),
        [anon_sym_AT] = ACTIONS(1539),
        [anon_sym_not] = ACTIONS(1542),
        [anon_sym_LBRACK] = ACTIONS(1539),
        [anon_sym_LBRACE] = ACTIONS(1539),
        [sym_string] = ACTIONS(1539),
        [sym_number] = ACTIONS(1542),
        [sym_identifier] = ACTIONS(1545),
        [sym_comment] = ACTIONS(83),
        [sym__newline] = ACTIONS(1539),
        [sym__dedent] = ACTIONS(1539),
    },
    [704] = {
        [sym_comment] = ACTIONS(83),
        [sym__newline] = ACTIONS(1548),
    },
    [705] = {
        [anon_sym_RPAREN] = ACTIONS(1550),
        [sym_comment] = ACTIONS(83),
        [sym__newline] = ACTIONS(1552),
    },
    [706] = {
        [aux_sym__import_list_repeat1] = STATE(641),
        [anon_sym_RPAREN] = ACTIONS(1556),
        [anon_sym_COMMA] = ACTIONS(1560),
        [sym_comment] = ACTIONS(83),
        [sym__newline] = ACTIONS(1556),
    },
    [707] = {
        [sym_comment] = ACTIONS(83),
        [sym__newline] = ACTIONS(1564),
    },
    [708] = {
        [ts_builtin_sym_end] = ACTIONS(187),
        [anon_sym_SEMI] = ACTIONS(187),
        [anon_sym_import] = ACTIONS(189),
        [anon_sym_from] = ACTIONS(189),
        [anon_sym_print] = ACTIONS(189),
        [anon_sym_return] = ACTIONS(189),
        [anon_sym_del] = ACTIONS(189),
        [sym_pass_statement] = ACTIONS(189),
        [sym_break_statement] = ACTIONS(189),
        [sym_continue_statement] = ACTIONS(189),
        [anon_sym_if] = ACTIONS(189),
        [anon_sym_for] = ACTIONS(189),
        [anon_sym_while] = ACTIONS(189),
        [anon_sym_try] = ACTIONS(189),
        [anon_sym_with] = ACTIONS(189),
        [anon_sym_def] = ACTIONS(189),
        [anon_sym_class] = ACTIONS(189),
        [anon_sym_AT] = ACTIONS(187),
        [anon_sym_not] = ACTIONS(189),
        [anon_sym_LBRACK] = ACTIONS(187),
        [anon_sym_LBRACE] = ACTIONS(187),
        [sym_string] = ACTIONS(187),
        [sym_number] = ACTIONS(189),
        [sym_identifier] = ACTIONS(191),
        [sym_comment] = ACTIONS(83),
        [sym__newline] = ACTIONS(187),
        [sym__dedent] = ACTIONS(187),
    },
    [709] = {
        [ts_builtin_sym_end] = ACTIONS(193),
        [anon_sym_SEMI] = ACTIONS(193),
        [anon_sym_import] = ACTIONS(195),
        [anon_sym_from] = ACTIONS(195),
        [anon_sym_print] = ACTIONS(195),
        [anon_sym_return] = ACTIONS(195),
        [anon_sym_del] = ACTIONS(195),
        [sym_pass_statement] = ACTIONS(195),
        [sym_break_statement] = ACTIONS(195),
        [sym_continue_statement] = ACTIONS(195),
        [anon_sym_if] = ACTIONS(195),
        [anon_sym_for] = ACTIONS(195),
        [anon_sym_while] = ACTIONS(195),
        [anon_sym_try] = ACTIONS(195),
        [anon_sym_with] = ACTIONS(195),
        [anon_sym_def] = ACTIONS(195),
        [anon_sym_class] = ACTIONS(195),
        [anon_sym_AT] = ACTIONS(193),
        [anon_sym_not] = ACTIONS(195),
        [anon_sym_LBRACK] = ACTIONS(193),
        [anon_sym_LBRACE] = ACTIONS(193),
        [sym_string] = ACTIONS(193),
        [sym_number] = ACTIONS(195),
        [sym_identifier] = ACTIONS(197),
        [sym_comment] = ACTIONS(83),
        [sym__newline] = ACTIONS(193),
        [sym__dedent] = ACTIONS(193),
    },
    [710] = {
        [ts_builtin_sym_end] = ACTIONS(1567),
        [anon_sym_SEMI] = ACTIONS(1567),
        [anon_sym_import] = ACTIONS(1570),
        [anon_sym_from] = ACTIONS(1570),
        [anon_sym_print] = ACTIONS(1570),
        [anon_sym_return] = ACTIONS(1570),
        [anon_sym_del] = ACTIONS(1570),
        [sym_pass_statement] = ACTIONS(1570),
        [sym_break_statement] = ACTIONS(1570),
        [sym_continue_statement] = ACTIONS(1570),
        [anon_sym_if] = ACTIONS(1570),
        [anon_sym_elif] = ACTIONS(1570),
        [anon_sym_else] = ACTIONS(1570),
        [anon_sym_for] = ACTIONS(1570),
        [anon_sym_while] = ACTIONS(1570),
        [anon_sym_try] = ACTIONS(1570),
        [anon_sym_with] = ACTIONS(1570),
        [anon_sym_def] = ACTIONS(1570),
        [anon_sym_class] = ACTIONS(1570),
        [anon_sym_AT] = ACTIONS(1567),
        [anon_sym_not] = ACTIONS(1570),
        [anon_sym_LBRACK] = ACTIONS(1567),
        [anon_sym_LBRACE] = ACTIONS(1567),
        [sym_string] = ACTIONS(1567),
        [sym_number] = ACTIONS(1570),
        [sym_identifier] = ACTIONS(1573),
        [sym_comment] = ACTIONS(83),
        [sym__newline] = ACTIONS(1567),
        [sym__dedent] = ACTIONS(1567),
    },
    [711] = {
        [sym_finally_clause] = STATE(750),
        [ts_builtin_sym_end] = ACTIONS(1576),
        [anon_sym_SEMI] = ACTIONS(1576),
        [anon_sym_import] = ACTIONS(1582),
        [anon_sym_from] = ACTIONS(1582),
        [anon_sym_print] = ACTIONS(1582),
        [anon_sym_return] = ACTIONS(1582),
        [anon_sym_del] = ACTIONS(1582),
        [sym_pass_statement] = ACTIONS(1582),
        [sym_break_statement] = ACTIONS(1582),
        [sym_continue_statement] = ACTIONS(1582),
        [anon_sym_if] = ACTIONS(1582),
        [anon_sym_for] = ACTIONS(1582),
        [anon_sym_while] = ACTIONS(1582),
        [anon_sym_try] = ACTIONS(1582),
        [anon_sym_finally] = ACTIONS(1588),
        [anon_sym_with] = ACTIONS(1582),
        [anon_sym_def] = ACTIONS(1582),
        [anon_sym_class] = ACTIONS(1582),
        [anon_sym_AT] = ACTIONS(1576),
        [anon_sym_not] = ACTIONS(1582),
        [anon_sym_LBRACK] = ACTIONS(1576),
        [anon_sym_LBRACE] = ACTIONS(1576),
        [sym_string] = ACTIONS(1576),
        [sym_number] = ACTIONS(1582),
        [sym_identifier] = ACTIONS(1590),
        [sym_comment] = ACTIONS(83),
        [sym__newline] = ACTIONS(1576),
        [sym__dedent] = ACTIONS(1576),
    },
    [712] = {
        [ts_builtin_sym_end] = ACTIONS(1596),
        [anon_sym_SEMI] = ACTIONS(1596),
        [anon_sym_import] = ACTIONS(1599),
        [anon_sym_from] = ACTIONS(1599),
        [anon_sym_print] = ACTIONS(1599),
        [anon_sym_return] = ACTIONS(1599),
        [anon_sym_del] = ACTIONS(1599),
        [sym_pass_statement] = ACTIONS(1599),
        [sym_break_statement] = ACTIONS(1599),
        [sym_continue_statement] = ACTIONS(1599),
        [anon_sym_if] = ACTIONS(1599),
        [anon_sym_else] = ACTIONS(1599),
        [anon_sym_for] = ACTIONS(1599),
        [anon_sym_while] = ACTIONS(1599),
        [anon_sym_try] = ACTIONS(1599),
        [anon_sym_except] = ACTIONS(1599),
        [anon_sym_finally] = ACTIONS(1599),
        [anon_sym_with] = ACTIONS(1599),
        [anon_sym_def] = ACTIONS(1599),
        [anon_sym_class] = ACTIONS(1599),
        [anon_sym_AT] = ACTIONS(1596),
        [anon_sym_not] = ACTIONS(1599),
        [anon_sym_LBRACK] = ACTIONS(1596),
        [anon_sym_LBRACE] = ACTIONS(1596),
        [sym_string] = ACTIONS(1596),
        [sym_number] = ACTIONS(1599),
        [sym_identifier] = ACTIONS(1602),
        [sym_comment] = ACTIONS(83),
        [sym__newline] = ACTIONS(1596),
        [sym__dedent] = ACTIONS(1596),
    },
    [713] = {
        [ts_builtin_sym_end] = ACTIONS(1605),
        [anon_sym_SEMI] = ACTIONS(1605),
        [anon_sym_import] = ACTIONS(1609),
        [anon_sym_from] = ACTIONS(1609),
        [anon_sym_print] = ACTIONS(1609),
        [anon_sym_return] = ACTIONS(1609),
        [anon_sym_del] = ACTIONS(1609),
        [sym_pass_statement] = ACTIONS(1609),
        [sym_break_statement] = ACTIONS(1609),
        [sym_continue_statement] = ACTIONS(1609),
        [anon_sym_if] = ACTIONS(1609),
        [anon_sym_for] = ACTIONS(1609),
        [anon_sym_while] = ACTIONS(1609),
        [anon_sym_try] = ACTIONS(1609),
        [anon_sym_with] = ACTIONS(1609),
        [anon_sym_def] = ACTIONS(1609),
        [anon_sym_class] = ACTIONS(1609),
        [anon_sym_AT] = ACTIONS(1605),
        [anon_sym_not] = ACTIONS(1609),
        [anon_sym_LBRACK] = ACTIONS(1605),
        [anon_sym_LBRACE] = ACTIONS(1605),
        [sym_string] = ACTIONS(1605),
        [sym_number] = ACTIONS(1609),
        [sym_identifier] = ACTIONS(1613),
        [sym_comment] = ACTIONS(83),
        [sym__newline] = ACTIONS(1605),
        [sym__dedent] = ACTIONS(1605),
    },
    [714] = {
        [aux_sym_with_statement_repeat1] = STATE(733),
        [anon_sym_COMMA] = ACTIONS(1617),
        [anon_sym_COLON] = ACTIONS(1621),
        [sym_comment] = ACTIONS(83),
    },
    [715] = {
        [ts_builtin_sym_end] = ACTIONS(1625),
        [anon_sym_SEMI] = ACTIONS(1625),
        [anon_sym_import] = ACTIONS(1628),
        [anon_sym_from] = ACTIONS(1628),
        [anon_sym_print] = ACTIONS(1628),
        [anon_sym_return] = ACTIONS(1628),
        [anon_sym_del] = ACTIONS(1628),
        [sym_pass_statement] = ACTIONS(1628),
        [sym_break_statement] = ACTIONS(1628),
        [sym_continue_statement] = ACTIONS(1628),
        [anon_sym_if] = ACTIONS(1628),
        [anon_sym_for] = ACTIONS(1628),
        [anon_sym_while] = ACTIONS(1628),
        [anon_sym_try] = ACTIONS(1628),
        [anon_sym_with] = ACTIONS(1628),
        [anon_sym_def] = ACTIONS(1628),
        [anon_sym_class] = ACTIONS(1628),
        [anon_sym_AT] = ACTIONS(1625),
        [anon_sym_not] = ACTIONS(1628),
        [anon_sym_LBRACK] = ACTIONS(1625),
        [anon_sym_LBRACE] = ACTIONS(1625),
        [sym_string] = ACTIONS(1625),
        [sym_number] = ACTIONS(1628),
        [sym_identifier] = ACTIONS(1631),
        [sym_comment] = ACTIONS(83),
        [sym__newline] = ACTIONS(1625),
        [sym__dedent] = ACTIONS(1625),
    },
    [716] = {
        [anon_sym_COLON] = ACTIONS(1634),
        [sym_comment] = ACTIONS(83),
    },
    [717] = {
        [anon_sym_RPAREN] = ACTIONS(1636),
        [anon_sym_COMMA] = ACTIONS(1638),
        [sym_comment] = ACTIONS(83),
    },
    [718] = {
        [anon_sym_RPAREN] = ACTIONS(1636),
        [anon_sym_COMMA] = ACTIONS(1640),
        [sym_comment] = ACTIONS(83),
    },
    [719] = {
        [anon_sym_RPAREN] = ACTIONS(1642),
        [sym_comment] = ACTIONS(83),
    },
    [720] = {
        [anon_sym_def] = ACTIONS(1644),
        [anon_sym_class] = ACTIONS(1644),
        [anon_sym_AT] = ACTIONS(1644),
        [sym_comment] = ACTIONS(83),
    },
    [721] = {
        [sym_elif_clause] = STATE(797),
        [sym_else_clause] = STATE(812),
        [sym_except_clause] = STATE(813),
        [sym_finally_clause] = STATE(814),
        [aux_sym_if_statement_repeat1] = STATE(731),
        [aux_sym_try_statement_repeat1] = STATE(732),
        [ts_builtin_sym_end] = ACTIONS(1647),
        [anon_sym_SEMI] = ACTIONS(1647),
        [anon_sym_import] = ACTIONS(1661),
        [anon_sym_from] = ACTIONS(1661),
        [anon_sym_print] = ACTIONS(1661),
        [anon_sym_return] = ACTIONS(1661),
        [anon_sym_del] = ACTIONS(1661),
        [sym_pass_statement] = ACTIONS(1661),
        [sym_break_statement] = ACTIONS(1661),
        [sym_continue_statement] = ACTIONS(1661),
        [anon_sym_if] = ACTIONS(1661),
        [anon_sym_elif] = ACTIONS(1675),
        [anon_sym_else] = ACTIONS(1678),
        [anon_sym_for] = ACTIONS(1661),
        [anon_sym_while] = ACTIONS(1661),
        [anon_sym_try] = ACTIONS(1661),
        [anon_sym_except] = ACTIONS(1683),
        [anon_sym_finally] = ACTIONS(1687),
        [anon_sym_with] = ACTIONS(1661),
        [anon_sym_def] = ACTIONS(1661),
        [anon_sym_class] = ACTIONS(1661),
        [anon_sym_AT] = ACTIONS(1647),
        [anon_sym_not] = ACTIONS(1661),
        [anon_sym_LBRACK] = ACTIONS(1647),
        [anon_sym_LBRACE] = ACTIONS(1647),
        [sym_string] = ACTIONS(1647),
        [sym_number] = ACTIONS(1661),
        [sym_identifier] = ACTIONS(1692),
        [sym_comment] = ACTIONS(83),
        [sym__newline] = ACTIONS(1647),
        [sym__dedent] = ACTIONS(1647),
    },
    [722] = {
        [anon_sym_RPAREN] = ACTIONS(1706),
        [anon_sym_COLON] = ACTIONS(1708),
        [anon_sym_in] = ACTIONS(1710),
        [sym_comment] = ACTIONS(83),
        [sym__newline] = ACTIONS(1712),
    },
    [723] = {
        [sym_arguments] = STATE(366),
        [aux_sym__import_list_repeat1] = STATE(641),
        [anon_sym_import] = ACTIONS(1715),
        [anon_sym_LPAREN] = ACTIONS(751),
        [anon_sym_RPAREN] = ACTIONS(1556),
        [anon_sym_COMMA] = ACTIONS(1560),
        [anon_sym_as] = ACTIONS(1249),
        [sym_comment] = ACTIONS(83),
        [sym__newline] = ACTIONS(1717),
    },
    [724] = {
        [aux_sym_print_statement_repeat1] = STATE(730),
        [aux_sym_subscript_repeat1] = STATE(57),
        [anon_sym_LPAREN] = ACTIONS(1722),
        [anon_sym_RPAREN] = ACTIONS(1726),
        [anon_sym_COMMA] = ACTIONS(1739),
        [anon_sym_as] = ACTIONS(1755),
        [anon_sym_STAR] = ACTIONS(1759),
        [anon_sym_COLON] = ACTIONS(1763),
        [anon_sym_for] = ACTIONS(1772),
        [anon_sym_in] = ACTIONS(1777),
        [anon_sym_PLUS] = ACTIONS(1783),
        [anon_sym_DASH] = ACTIONS(1783),
        [anon_sym_SLASH] = ACTIONS(1783),
        [anon_sym_STAR_STAR] = ACTIONS(1783),
        [anon_sym_PIPE] = ACTIONS(1783),
        [anon_sym_AMP] = ACTIONS(1783),
        [anon_sym_CARET] = ACTIONS(1783),
        [anon_sym_LT_LT] = ACTIONS(1783),
        [anon_sym_GT_GT] = ACTIONS(1783),
        [anon_sym_and] = ACTIONS(1783),
        [anon_sym_or] = ACTIONS(1783),
        [anon_sym_LBRACK] = ACTIONS(1787),
        [anon_sym_RBRACK] = ACTIONS(1791),
        [anon_sym_RBRACE] = ACTIONS(1799),
        [sym_comment] = ACTIONS(83),
        [sym__newline] = ACTIONS(1806),
    },
    [725] = {
        [anon_sym_RPAREN] = ACTIONS(1814),
        [anon_sym_COMMA] = ACTIONS(1818),
        [sym_comment] = ACTIONS(83),
    },
    [726] = {
        [aux_sym_call_repeat2] = STATE(735),
        [anon_sym_RPAREN] = ACTIONS(1822),
        [anon_sym_COMMA] = ACTIONS(1824),
        [sym_comment] = ACTIONS(83),
    },
    [727] = {
        [anon_sym_RPAREN] = ACTIONS(1826),
        [sym_comment] = ACTIONS(83),
    },
    [728] = {
        [aux_sym_dictionary_repeat1] = STATE(329),
        [anon_sym_COMMA] = ACTIONS(1828),
        [anon_sym_for] = ACTIONS(707),
        [anon_sym_RBRACE] = ACTIONS(1832),
        [sym_comment] = ACTIONS(83),
    },
    [729] = {
        [sym__statement] = STATE(762),
        [sym__simple_statement] = STATE(763),
        [sym_import_statement] = STATE(7),
        [sym_import_from_statement] = STATE(7),
        [sym_print_statement] = STATE(7),
        [sym_expression_statement] = STATE(7),
        [sym_return_statement] = STATE(7),
        [sym_delete_statement] = STATE(7),
        [sym__compound_statement] = STATE(708),
        [sym_if_statement] = STATE(709),
        [sym_for_statement] = STATE(709),
        [sym_while_statement] = STATE(709),
        [sym_try_statement] = STATE(709),
        [sym_with_statement] = STATE(709),
        [sym_function_definition] = STATE(709),
        [sym_class_definition] = STATE(709),
        [sym_decorated_definition] = STATE(709),
        [sym_decorator] = STATE(25),
        [sym__expression] = STATE(26),
        [sym_binary_operator] = STATE(19),
        [sym_unary_operator] = STATE(19),
        [sym_subscript] = STATE(19),
        [sym_call] = STATE(19),
        [sym_list] = STATE(19),
        [sym_list_comprehension] = STATE(19),
        [sym_dictionary] = STATE(19),
        [sym_dictionary_comprehension] = STATE(19),
        [sym_set] = STATE(19),
        [sym_set_comprehension] = STATE(19),
        [aux_sym_decorated_definition_repeat1] = STATE(734),
        [ts_builtin_sym_end] = ACTIONS(221),
        [anon_sym_SEMI] = ACTIONS(223),
        [anon_sym_import] = ACTIONS(93),
        [anon_sym_from] = ACTIONS(95),
        [anon_sym_print] = ACTIONS(97),
        [anon_sym_return] = ACTIONS(99),
        [anon_sym_del] = ACTIONS(101),
        [sym_pass_statement] = ACTIONS(103),
        [sym_break_statement] = ACTIONS(103),
        [sym_continue_statement] = ACTIONS(103),
        [anon_sym_if] = ACTIONS(1836),
        [anon_sym_for] = ACTIONS(1838),
        [anon_sym_while] = ACTIONS(1840),
        [anon_sym_try] = ACTIONS(1842),
        [anon_sym_with] = ACTIONS(1844),
        [anon_sym_def] = ACTIONS(1846),
        [anon_sym_class] = ACTIONS(1848),
        [anon_sym_AT] = ACTIONS(119),
        [anon_sym_not] = ACTIONS(121),
        [anon_sym_LBRACK] = ACTIONS(123),
        [anon_sym_LBRACE] = ACTIONS(125),
        [sym_string] = ACTIONS(127),
        [sym_number] = ACTIONS(129),
        [sym_identifier] = ACTIONS(131),
        [sym_comment] = ACTIONS(83),
        [sym__newline] = ACTIONS(223),
        [sym__dedent] = ACTIONS(1850),
    },
    [730] = {
        [anon_sym_RPAREN] = ACTIONS(1852),
        [anon_sym_COMMA] = ACTIONS(1855),
        [anon_sym_COLON] = ACTIONS(511),
        [anon_sym_in] = ACTIONS(511),
        [anon_sym_RBRACK] = ACTIONS(737),
        [anon_sym_RBRACE] = ACTIONS(721),
        [sym_comment] = ACTIONS(83),
        [sym__newline] = ACTIONS(1857),
    },
    [731] = {
        [sym_elif_clause] = STATE(751),
        [sym_else_clause] = STATE(752),
        [ts_builtin_sym_end] = ACTIONS(1119),
        [anon_sym_SEMI] = ACTIONS(1119),
        [anon_sym_import] = ACTIONS(1117),
        [anon_sym_from] = ACTIONS(1117),
        [anon_sym_print] = ACTIONS(1117),
        [anon_sym_return] = ACTIONS(1117),
        [anon_sym_del] = ACTIONS(1117),
        [sym_pass_statement] = ACTIONS(1117),
        [sym_break_statement] = ACTIONS(1117),
        [sym_continue_statement] = ACTIONS(1117),
        [anon_sym_if] = ACTIONS(1117),
        [anon_sym_elif] = ACTIONS(1860),
        [anon_sym_else] = ACTIONS(1862),
        [anon_sym_for] = ACTIONS(1117),
        [anon_sym_while] = ACTIONS(1117),
        [anon_sym_try] = ACTIONS(1117),
        [anon_sym_with] = ACTIONS(1117),
        [anon_sym_def] = ACTIONS(1117),
        [anon_sym_class] = ACTIONS(1117),
        [anon_sym_AT] = ACTIONS(1119),
        [anon_sym_not] = ACTIONS(1117),
        [anon_sym_LBRACK] = ACTIONS(1119),
        [anon_sym_LBRACE] = ACTIONS(1119),
        [sym_string] = ACTIONS(1119),
        [sym_number] = ACTIONS(1117),
        [sym_identifier] = ACTIONS(1121),
        [sym_comment] = ACTIONS(83),
        [sym__newline] = ACTIONS(1119),
        [sym__dedent] = ACTIONS(1119),
    },
    [732] = {
        [sym_else_clause] = STATE(747),
        [sym_except_clause] = STATE(748),
        [sym_finally_clause] = STATE(749),
        [ts_builtin_sym_end] = ACTIONS(1005),
        [anon_sym_SEMI] = ACTIONS(1005),
        [anon_sym_import] = ACTIONS(1003),
        [anon_sym_from] = ACTIONS(1003),
        [anon_sym_print] = ACTIONS(1003),
        [anon_sym_return] = ACTIONS(1003),
        [anon_sym_del] = ACTIONS(1003),
        [sym_pass_statement] = ACTIONS(1003),
        [sym_break_statement] = ACTIONS(1003),
        [sym_continue_statement] = ACTIONS(1003),
        [anon_sym_if] = ACTIONS(1003),
        [anon_sym_else] = ACTIONS(1862),
        [anon_sym_for] = ACTIONS(1003),
        [anon_sym_while] = ACTIONS(1003),
        [anon_sym_try] = ACTIONS(1003),
        [anon_sym_except] = ACTIONS(1864),
        [anon_sym_finally] = ACTIONS(1588),
        [anon_sym_with] = ACTIONS(1003),
        [anon_sym_def] = ACTIONS(1003),
        [anon_sym_class] = ACTIONS(1003),
        [anon_sym_AT] = ACTIONS(1005),
        [anon_sym_not] = ACTIONS(1003),
        [anon_sym_LBRACK] = ACTIONS(1005),
        [anon_sym_LBRACE] = ACTIONS(1005),
        [sym_string] = ACTIONS(1005),
        [sym_number] = ACTIONS(1003),
        [sym_identifier] = ACTIONS(1007),
        [sym_comment] = ACTIONS(83),
        [sym__newline] = ACTIONS(1005),
        [sym__dedent] = ACTIONS(1005),
    },
    [733] = {
        [anon_sym_COMMA] = ACTIONS(967),
        [anon_sym_COLON] = ACTIONS(1866),
        [sym_comment] = ACTIONS(83),
    },
    [734] = {
        [sym_function_definition] = STATE(740),
        [sym_class_definition] = STATE(740),
        [sym_decorator] = STATE(30),
        [anon_sym_def] = ACTIONS(1868),
        [anon_sym_class] = ACTIONS(1870),
        [anon_sym_AT] = ACTIONS(119),
        [sym_comment] = ACTIONS(83),
    },
    [735] = {
        [anon_sym_RPAREN] = ACTIONS(1872),
        [anon_sym_COMMA] = ACTIONS(1874),
        [sym_comment] = ACTIONS(83),
    },
    [736] = {
        [anon_sym_LPAREN] = ACTIONS(1876),
        [anon_sym_RPAREN] = ACTIONS(1876),
        [anon_sym_COMMA] = ACTIONS(1876),
        [anon_sym_as] = ACTIONS(1876),
        [anon_sym_STAR] = ACTIONS(1879),
        [anon_sym_COLON] = ACTIONS(1876),
        [anon_sym_for] = ACTIONS(1876),
        [anon_sym_in] = ACTIONS(1876),
        [anon_sym_PLUS] = ACTIONS(1876),
        [anon_sym_DASH] = ACTIONS(1876),
        [anon_sym_SLASH] = ACTIONS(1876),
        [anon_sym_STAR_STAR] = ACTIONS(1876),
        [anon_sym_PIPE] = ACTIONS(1876),
        [anon_sym_AMP] = ACTIONS(1876),
        [anon_sym_CARET] = ACTIONS(1876),
        [anon_sym_LT_LT] = ACTIONS(1876),
        [anon_sym_GT_GT] = ACTIONS(1876),
        [anon_sym_and] = ACTIONS(1876),
        [anon_sym_or] = ACTIONS(1876),
        [anon_sym_LBRACK] = ACTIONS(1876),
        [anon_sym_RBRACK] = ACTIONS(1876),
        [anon_sym_RBRACE] = ACTIONS(1876),
        [sym_comment] = ACTIONS(83),
        [sym__newline] = ACTIONS(1876),
    },
    [737] = {
        [sym__expression] = STATE(97),
        [sym_binary_operator] = STATE(45),
        [sym_unary_operator] = STATE(45),
        [sym_subscript] = STATE(45),
        [sym_call] = STATE(45),
        [sym_keyword_argument] = STATE(98),
        [sym_dictionary_splat_argument] = STATE(738),
        [sym_list] = STATE(45),
        [sym_list_comprehension] = STATE(45),
        [sym_dictionary] = STATE(45),
        [sym_dictionary_comprehension] = STATE(45),
        [sym_set] = STATE(45),
        [sym_set_comprehension] = STATE(45),
        [anon_sym_STAR_STAR] = ACTIONS(247),
        [anon_sym_not] = ACTIONS(249),
        [anon_sym_LBRACK] = ACTIONS(145),
        [anon_sym_LBRACE] = ACTIONS(147),
        [sym_string] = ACTIONS(149),
        [sym_number] = ACTIONS(151),
        [sym_identifier] = ACTIONS(251),
        [sym_comment] = ACTIONS(83),
    },
    [738] = {
        [anon_sym_RPAREN] = ACTIONS(1882),
        [sym_comment] = ACTIONS(83),
    },
    [739] = {
        [anon_sym_LPAREN] = ACTIONS(1884),
        [anon_sym_RPAREN] = ACTIONS(1884),
        [anon_sym_COMMA] = ACTIONS(1884),
        [anon_sym_as] = ACTIONS(1884),
        [anon_sym_STAR] = ACTIONS(1887),
        [anon_sym_COLON] = ACTIONS(1884),
        [anon_sym_for] = ACTIONS(1884),
        [anon_sym_in] = ACTIONS(1884),
        [anon_sym_PLUS] = ACTIONS(1884),
        [anon_sym_DASH] = ACTIONS(1884),
        [anon_sym_SLASH] = ACTIONS(1884),
        [anon_sym_STAR_STAR] = ACTIONS(1884),
        [anon_sym_PIPE] = ACTIONS(1884),
        [anon_sym_AMP] = ACTIONS(1884),
        [anon_sym_CARET] = ACTIONS(1884),
        [anon_sym_LT_LT] = ACTIONS(1884),
        [anon_sym_GT_GT] = ACTIONS(1884),
        [anon_sym_and] = ACTIONS(1884),
        [anon_sym_or] = ACTIONS(1884),
        [anon_sym_LBRACK] = ACTIONS(1884),
        [anon_sym_RBRACK] = ACTIONS(1884),
        [anon_sym_RBRACE] = ACTIONS(1884),
        [sym_comment] = ACTIONS(83),
        [sym__newline] = ACTIONS(1884),
    },
    [740] = {
        [ts_builtin_sym_end] = ACTIONS(229),
        [anon_sym_SEMI] = ACTIONS(229),
        [anon_sym_import] = ACTIONS(231),
        [anon_sym_from] = ACTIONS(231),
        [anon_sym_print] = ACTIONS(231),
        [anon_sym_return] = ACTIONS(231),
        [anon_sym_del] = ACTIONS(231),
        [sym_pass_statement] = ACTIONS(231),
        [sym_break_statement] = ACTIONS(231),
        [sym_continue_statement] = ACTIONS(231),
        [anon_sym_if] = ACTIONS(231),
        [anon_sym_for] = ACTIONS(231),
        [anon_sym_while] = ACTIONS(231),
        [anon_sym_try] = ACTIONS(231),
        [anon_sym_with] = ACTIONS(231),
        [anon_sym_def] = ACTIONS(231),
        [anon_sym_class] = ACTIONS(231),
        [anon_sym_AT] = ACTIONS(229),
        [anon_sym_not] = ACTIONS(231),
        [anon_sym_LBRACK] = ACTIONS(229),
        [anon_sym_LBRACE] = ACTIONS(229),
        [sym_string] = ACTIONS(229),
        [sym_number] = ACTIONS(231),
        [sym_identifier] = ACTIONS(233),
        [sym_comment] = ACTIONS(83),
        [sym__newline] = ACTIONS(229),
        [sym__dedent] = ACTIONS(229),
    },
    [741] = {
        [sym__simple_statement] = STATE(742),
        [sym_import_statement] = STATE(7),
        [sym_import_from_statement] = STATE(7),
        [sym_print_statement] = STATE(7),
        [sym_expression_statement] = STATE(7),
        [sym_return_statement] = STATE(7),
        [sym_delete_statement] = STATE(7),
        [sym__suite] = STATE(743),
        [sym__expression] = STATE(26),
        [sym_binary_operator] = STATE(19),
        [sym_unary_operator] = STATE(19),
        [sym_subscript] = STATE(19),
        [sym_call] = STATE(19),
        [sym_list] = STATE(19),
        [sym_list_comprehension] = STATE(19),
        [sym_dictionary] = STATE(19),
        [sym_dictionary_comprehension] = STATE(19),
        [sym_set] = STATE(19),
        [sym_set_comprehension] = STATE(19),
        [anon_sym_import] = ACTIONS(93),
        [anon_sym_from] = ACTIONS(95),
        [anon_sym_print] = ACTIONS(97),
        [anon_sym_return] = ACTIONS(99),
        [anon_sym_del] = ACTIONS(101),
        [sym_pass_statement] = ACTIONS(103),
        [sym_break_statement] = ACTIONS(103),
        [sym_continue_statement] = ACTIONS(103),
        [anon_sym_not] = ACTIONS(121),
        [anon_sym_LBRACK] = ACTIONS(123),
        [anon_sym_LBRACE] = ACTIONS(125),
        [sym_string] = ACTIONS(127),
        [sym_number] = ACTIONS(129),
        [sym_identifier] = ACTIONS(131),
        [sym_comment] = ACTIONS(83),
        [sym__indent] = ACTIONS(1398),
    },
    [742] = {
        [sym_comment] = ACTIONS(83),
        [sym__newline] = ACTIONS(1528),
    },
    [743] = {
        [ts_builtin_sym_end] = ACTIONS(973),
        [anon_sym_SEMI] = ACTIONS(973),
        [anon_sym_import] = ACTIONS(971),
        [anon_sym_from] = ACTIONS(971),
        [anon_sym_print] = ACTIONS(971),
        [anon_sym_return] = ACTIONS(971),
        [anon_sym_del] = ACTIONS(971),
        [sym_pass_statement] = ACTIONS(971),
        [sym_break_statement] = ACTIONS(971),
        [sym_continue_statement] = ACTIONS(971),
        [anon_sym_if] = ACTIONS(971),
        [anon_sym_for] = ACTIONS(971),
        [anon_sym_while] = ACTIONS(971),
        [anon_sym_try] = ACTIONS(971),
        [anon_sym_with] = ACTIONS(971),
        [anon_sym_def] = ACTIONS(971),
        [anon_sym_class] = ACTIONS(971),
        [anon_sym_AT] = ACTIONS(973),
        [anon_sym_not] = ACTIONS(971),
        [anon_sym_LBRACK] = ACTIONS(973),
        [anon_sym_LBRACE] = ACTIONS(973),
        [sym_string] = ACTIONS(973),
        [sym_number] = ACTIONS(971),
        [sym_identifier] = ACTIONS(975),
        [sym_comment] = ACTIONS(83),
        [sym__newline] = ACTIONS(973),
        [sym__dedent] = ACTIONS(973),
    },
    [744] = {
        [ts_builtin_sym_end] = ACTIONS(813),
        [anon_sym_SEMI] = ACTIONS(813),
        [anon_sym_import] = ACTIONS(815),
        [anon_sym_from] = ACTIONS(815),
        [anon_sym_print] = ACTIONS(815),
        [anon_sym_return] = ACTIONS(815),
        [anon_sym_del] = ACTIONS(815),
        [sym_pass_statement] = ACTIONS(815),
        [sym_break_statement] = ACTIONS(815),
        [sym_continue_statement] = ACTIONS(815),
        [anon_sym_if] = ACTIONS(815),
        [anon_sym_elif] = ACTIONS(815),
        [anon_sym_else] = ACTIONS(815),
        [anon_sym_for] = ACTIONS(815),
        [anon_sym_while] = ACTIONS(815),
        [anon_sym_try] = ACTIONS(815),
        [anon_sym_except] = ACTIONS(815),
        [anon_sym_finally] = ACTIONS(815),
        [anon_sym_with] = ACTIONS(815),
        [anon_sym_def] = ACTIONS(815),
        [anon_sym_class] = ACTIONS(815),
        [anon_sym_AT] = ACTIONS(813),
        [anon_sym_not] = ACTIONS(815),
        [anon_sym_LBRACK] = ACTIONS(813),
        [anon_sym_LBRACE] = ACTIONS(813),
        [sym_string] = ACTIONS(813),
        [sym_number] = ACTIONS(815),
        [sym_identifier] = ACTIONS(817),
        [sym_comment] = ACTIONS(83),
        [sym__newline] = ACTIONS(813),
        [sym__dedent] = ACTIONS(813),
    },
    [745] = {
        [sym__statement] = STATE(403),
        [sym__simple_statement] = STATE(396),
        [sym_import_statement] = STATE(7),
        [sym_import_from_statement] = STATE(7),
        [sym_print_statement] = STATE(7),
        [sym_expression_statement] = STATE(7),
        [sym_return_statement] = STATE(7),
        [sym_delete_statement] = STATE(7),
        [sym__compound_statement] = STATE(397),
        [sym_if_statement] = STATE(398),
        [sym_for_statement] = STATE(398),
        [sym_while_statement] = STATE(398),
        [sym_try_statement] = STATE(398),
        [sym_with_statement] = STATE(398),
        [sym_function_definition] = STATE(398),
        [sym_class_definition] = STATE(398),
        [sym_decorated_definition] = STATE(398),
        [sym_decorator] = STATE(25),
        [sym__expression] = STATE(26),
        [sym_binary_operator] = STATE(19),
        [sym_unary_operator] = STATE(19),
        [sym_subscript] = STATE(19),
        [sym_call] = STATE(19),
        [sym_list] = STATE(19),
        [sym_list_comprehension] = STATE(19),
        [sym_dictionary] = STATE(19),
        [sym_dictionary_comprehension] = STATE(19),
        [sym_set] = STATE(19),
        [sym_set_comprehension] = STATE(19),
        [aux_sym_decorated_definition_repeat1] = STATE(400),
        [anon_sym_import] = ACTIONS(93),
        [anon_sym_from] = ACTIONS(95),
        [anon_sym_print] = ACTIONS(97),
        [anon_sym_return] = ACTIONS(99),
        [anon_sym_del] = ACTIONS(101),
        [sym_pass_statement] = ACTIONS(103),
        [sym_break_statement] = ACTIONS(103),
        [sym_continue_statement] = ACTIONS(103),
        [anon_sym_if] = ACTIONS(791),
        [anon_sym_for] = ACTIONS(793),
        [anon_sym_while] = ACTIONS(795),
        [anon_sym_try] = ACTIONS(797),
        [anon_sym_with] = ACTIONS(799),
        [anon_sym_def] = ACTIONS(801),
        [anon_sym_class] = ACTIONS(803),
        [anon_sym_AT] = ACTIONS(119),
        [anon_sym_not] = ACTIONS(121),
        [anon_sym_LBRACK] = ACTIONS(123),
        [anon_sym_LBRACE] = ACTIONS(125),
        [sym_string] = ACTIONS(127),
        [sym_number] = ACTIONS(129),
        [sym_identifier] = ACTIONS(131),
        [sym_comment] = ACTIONS(83),
        [sym__dedent] = ACTIONS(1850),
    },
    [746] = {
        [ts_builtin_sym_end] = ACTIONS(833),
        [anon_sym_SEMI] = ACTIONS(833),
        [anon_sym_import] = ACTIONS(835),
        [anon_sym_from] = ACTIONS(835),
        [anon_sym_print] = ACTIONS(835),
        [anon_sym_return] = ACTIONS(835),
        [anon_sym_del] = ACTIONS(835),
        [sym_pass_statement] = ACTIONS(835),
        [sym_break_statement] = ACTIONS(835),
        [sym_continue_statement] = ACTIONS(835),
        [anon_sym_if] = ACTIONS(835),
        [anon_sym_elif] = ACTIONS(835),
        [anon_sym_else] = ACTIONS(835),
        [anon_sym_for] = ACTIONS(835),
        [anon_sym_while] = ACTIONS(835),
        [anon_sym_try] = ACTIONS(835),
        [anon_sym_except] = ACTIONS(835),
        [anon_sym_finally] = ACTIONS(835),
        [anon_sym_with] = ACTIONS(835),
        [anon_sym_def] = ACTIONS(835),
        [anon_sym_class] = ACTIONS(835),
        [anon_sym_AT] = ACTIONS(833),
        [anon_sym_not] = ACTIONS(835),
        [anon_sym_LBRACK] = ACTIONS(833),
        [anon_sym_LBRACE] = ACTIONS(833),
        [sym_string] = ACTIONS(833),
        [sym_number] = ACTIONS(835),
        [sym_identifier] = ACTIONS(837),
        [sym_comment] = ACTIONS(83),
        [sym__newline] = ACTIONS(833),
        [sym__dedent] = ACTIONS(833),
    },
    [747] = {
        [sym_finally_clause] = STATE(750),
        [ts_builtin_sym_end] = ACTIONS(1019),
        [anon_sym_SEMI] = ACTIONS(1019),
        [anon_sym_import] = ACTIONS(1017),
        [anon_sym_from] = ACTIONS(1017),
        [anon_sym_print] = ACTIONS(1017),
        [anon_sym_return] = ACTIONS(1017),
        [anon_sym_del] = ACTIONS(1017),
        [sym_pass_statement] = ACTIONS(1017),
        [sym_break_statement] = ACTIONS(1017),
        [sym_continue_statement] = ACTIONS(1017),
        [anon_sym_if] = ACTIONS(1017),
        [anon_sym_for] = ACTIONS(1017),
        [anon_sym_while] = ACTIONS(1017),
        [anon_sym_try] = ACTIONS(1017),
        [anon_sym_finally] = ACTIONS(1588),
        [anon_sym_with] = ACTIONS(1017),
        [anon_sym_def] = ACTIONS(1017),
        [anon_sym_class] = ACTIONS(1017),
        [anon_sym_AT] = ACTIONS(1019),
        [anon_sym_not] = ACTIONS(1017),
        [anon_sym_LBRACK] = ACTIONS(1019),
        [anon_sym_LBRACE] = ACTIONS(1019),
        [sym_string] = ACTIONS(1019),
        [sym_number] = ACTIONS(1017),
        [sym_identifier] = ACTIONS(1021),
        [sym_comment] = ACTIONS(83),
        [sym__newline] = ACTIONS(1019),
        [sym__dedent] = ACTIONS(1019),
    },
    [748] = {
        [ts_builtin_sym_end] = ACTIONS(1025),
        [anon_sym_SEMI] = ACTIONS(1025),
        [anon_sym_import] = ACTIONS(1023),
        [anon_sym_from] = ACTIONS(1023),
        [anon_sym_print] = ACTIONS(1023),
        [anon_sym_return] = ACTIONS(1023),
        [anon_sym_del] = ACTIONS(1023),
        [sym_pass_statement] = ACTIONS(1023),
        [sym_break_statement] = ACTIONS(1023),
        [sym_continue_statement] = ACTIONS(1023),
        [anon_sym_if] = ACTIONS(1023),
        [anon_sym_else] = ACTIONS(1023),
        [anon_sym_for] = ACTIONS(1023),
        [anon_sym_while] = ACTIONS(1023),
        [anon_sym_try] = ACTIONS(1023),
        [anon_sym_except] = ACTIONS(1023),
        [anon_sym_finally] = ACTIONS(1023),
        [anon_sym_with] = ACTIONS(1023),
        [anon_sym_def] = ACTIONS(1023),
        [anon_sym_class] = ACTIONS(1023),
        [anon_sym_AT] = ACTIONS(1025),
        [anon_sym_not] = ACTIONS(1023),
        [anon_sym_LBRACK] = ACTIONS(1025),
        [anon_sym_LBRACE] = ACTIONS(1025),
        [sym_string] = ACTIONS(1025),
        [sym_number] = ACTIONS(1023),
        [sym_identifier] = ACTIONS(1027),
        [sym_comment] = ACTIONS(83),
        [sym__newline] = ACTIONS(1025),
        [sym__dedent] = ACTIONS(1025),
    },
    [749] = {
        [ts_builtin_sym_end] = ACTIONS(1019),
        [anon_sym_SEMI] = ACTIONS(1019),
        [anon_sym_import] = ACTIONS(1017),
        [anon_sym_from] = ACTIONS(1017),
        [anon_sym_print] = ACTIONS(1017),
        [anon_sym_return] = ACTIONS(1017),
        [anon_sym_del] = ACTIONS(1017),
        [sym_pass_statement] = ACTIONS(1017),
        [sym_break_statement] = ACTIONS(1017),
        [sym_continue_statement] = ACTIONS(1017),
        [anon_sym_if] = ACTIONS(1017),
        [anon_sym_for] = ACTIONS(1017),
        [anon_sym_while] = ACTIONS(1017),
        [anon_sym_try] = ACTIONS(1017),
        [anon_sym_with] = ACTIONS(1017),
        [anon_sym_def] = ACTIONS(1017),
        [anon_sym_class] = ACTIONS(1017),
        [anon_sym_AT] = ACTIONS(1019),
        [anon_sym_not] = ACTIONS(1017),
        [anon_sym_LBRACK] = ACTIONS(1019),
        [anon_sym_LBRACE] = ACTIONS(1019),
        [sym_string] = ACTIONS(1019),
        [sym_number] = ACTIONS(1017),
        [sym_identifier] = ACTIONS(1021),
        [sym_comment] = ACTIONS(83),
        [sym__newline] = ACTIONS(1019),
        [sym__dedent] = ACTIONS(1019),
    },
    [750] = {
        [ts_builtin_sym_end] = ACTIONS(1031),
        [anon_sym_SEMI] = ACTIONS(1031),
        [anon_sym_import] = ACTIONS(1029),
        [anon_sym_from] = ACTIONS(1029),
        [anon_sym_print] = ACTIONS(1029),
        [anon_sym_return] = ACTIONS(1029),
        [anon_sym_del] = ACTIONS(1029),
        [sym_pass_statement] = ACTIONS(1029),
        [sym_break_statement] = ACTIONS(1029),
        [sym_continue_statement] = ACTIONS(1029),
        [anon_sym_if] = ACTIONS(1029),
        [anon_sym_for] = ACTIONS(1029),
        [anon_sym_while] = ACTIONS(1029),
        [anon_sym_try] = ACTIONS(1029),
        [anon_sym_with] = ACTIONS(1029),
        [anon_sym_def] = ACTIONS(1029),
        [anon_sym_class] = ACTIONS(1029),
        [anon_sym_AT] = ACTIONS(1031),
        [anon_sym_not] = ACTIONS(1029),
        [anon_sym_LBRACK] = ACTIONS(1031),
        [anon_sym_LBRACE] = ACTIONS(1031),
        [sym_string] = ACTIONS(1031),
        [sym_number] = ACTIONS(1029),
        [sym_identifier] = ACTIONS(1033),
        [sym_comment] = ACTIONS(83),
        [sym__newline] = ACTIONS(1031),
        [sym__dedent] = ACTIONS(1031),
    },
    [751] = {
        [ts_builtin_sym_end] = ACTIONS(1125),
        [anon_sym_SEMI] = ACTIONS(1125),
        [anon_sym_import] = ACTIONS(1123),
        [anon_sym_from] = ACTIONS(1123),
        [anon_sym_print] = ACTIONS(1123),
        [anon_sym_return] = ACTIONS(1123),
        [anon_sym_del] = ACTIONS(1123),
        [sym_pass_statement] = ACTIONS(1123),
        [sym_break_statement] = ACTIONS(1123),
        [sym_continue_statement] = ACTIONS(1123),
        [anon_sym_if] = ACTIONS(1123),
        [anon_sym_elif] = ACTIONS(1123),
        [anon_sym_else] = ACTIONS(1123),
        [anon_sym_for] = ACTIONS(1123),
        [anon_sym_while] = ACTIONS(1123),
        [anon_sym_try] = ACTIONS(1123),
        [anon_sym_with] = ACTIONS(1123),
        [anon_sym_def] = ACTIONS(1123),
        [anon_sym_class] = ACTIONS(1123),
        [anon_sym_AT] = ACTIONS(1125),
        [anon_sym_not] = ACTIONS(1123),
        [anon_sym_LBRACK] = ACTIONS(1125),
        [anon_sym_LBRACE] = ACTIONS(1125),
        [sym_string] = ACTIONS(1125),
        [sym_number] = ACTIONS(1123),
        [sym_identifier] = ACTIONS(1127),
        [sym_comment] = ACTIONS(83),
        [sym__newline] = ACTIONS(1125),
        [sym__dedent] = ACTIONS(1125),
    },
    [752] = {
        [ts_builtin_sym_end] = ACTIONS(1131),
        [anon_sym_SEMI] = ACTIONS(1131),
        [anon_sym_import] = ACTIONS(1129),
        [anon_sym_from] = ACTIONS(1129),
        [anon_sym_print] = ACTIONS(1129),
        [anon_sym_return] = ACTIONS(1129),
        [anon_sym_del] = ACTIONS(1129),
        [sym_pass_statement] = ACTIONS(1129),
        [sym_break_statement] = ACTIONS(1129),
        [sym_continue_statement] = ACTIONS(1129),
        [anon_sym_if] = ACTIONS(1129),
        [anon_sym_for] = ACTIONS(1129),
        [anon_sym_while] = ACTIONS(1129),
        [anon_sym_try] = ACTIONS(1129),
        [anon_sym_with] = ACTIONS(1129),
        [anon_sym_def] = ACTIONS(1129),
        [anon_sym_class] = ACTIONS(1129),
        [anon_sym_AT] = ACTIONS(1131),
        [anon_sym_not] = ACTIONS(1129),
        [anon_sym_LBRACK] = ACTIONS(1131),
        [anon_sym_LBRACE] = ACTIONS(1131),
        [sym_string] = ACTIONS(1131),
        [sym_number] = ACTIONS(1129),
        [sym_identifier] = ACTIONS(1133),
        [sym_comment] = ACTIONS(83),
        [sym__newline] = ACTIONS(1131),
        [sym__dedent] = ACTIONS(1131),
    },
    [753] = {
        [sym__simple_statement] = STATE(742),
        [sym_import_statement] = STATE(7),
        [sym_import_from_statement] = STATE(7),
        [sym_print_statement] = STATE(7),
        [sym_expression_statement] = STATE(7),
        [sym_return_statement] = STATE(7),
        [sym_delete_statement] = STATE(7),
        [sym__suite] = STATE(754),
        [sym__expression] = STATE(26),
        [sym_binary_operator] = STATE(19),
        [sym_unary_operator] = STATE(19),
        [sym_subscript] = STATE(19),
        [sym_call] = STATE(19),
        [sym_list] = STATE(19),
        [sym_list_comprehension] = STATE(19),
        [sym_dictionary] = STATE(19),
        [sym_dictionary_comprehension] = STATE(19),
        [sym_set] = STATE(19),
        [sym_set_comprehension] = STATE(19),
        [anon_sym_import] = ACTIONS(93),
        [anon_sym_from] = ACTIONS(95),
        [anon_sym_print] = ACTIONS(97),
        [anon_sym_return] = ACTIONS(99),
        [anon_sym_del] = ACTIONS(101),
        [sym_pass_statement] = ACTIONS(103),
        [sym_break_statement] = ACTIONS(103),
        [sym_continue_statement] = ACTIONS(103),
        [anon_sym_not] = ACTIONS(121),
        [anon_sym_LBRACK] = ACTIONS(123),
        [anon_sym_LBRACE] = ACTIONS(125),
        [sym_string] = ACTIONS(127),
        [sym_number] = ACTIONS(129),
        [sym_identifier] = ACTIONS(131),
        [sym_comment] = ACTIONS(83),
        [sym__indent] = ACTIONS(1398),
    },
    [754] = {
        [ts_builtin_sym_end] = ACTIONS(1037),
        [anon_sym_SEMI] = ACTIONS(1037),
        [anon_sym_import] = ACTIONS(1035),
        [anon_sym_from] = ACTIONS(1035),
        [anon_sym_print] = ACTIONS(1035),
        [anon_sym_return] = ACTIONS(1035),
        [anon_sym_del] = ACTIONS(1035),
        [sym_pass_statement] = ACTIONS(1035),
        [sym_break_statement] = ACTIONS(1035),
        [sym_continue_statement] = ACTIONS(1035),
        [anon_sym_if] = ACTIONS(1035),
        [anon_sym_for] = ACTIONS(1035),
        [anon_sym_while] = ACTIONS(1035),
        [anon_sym_try] = ACTIONS(1035),
        [anon_sym_finally] = ACTIONS(1035),
        [anon_sym_with] = ACTIONS(1035),
        [anon_sym_def] = ACTIONS(1035),
        [anon_sym_class] = ACTIONS(1035),
        [anon_sym_AT] = ACTIONS(1037),
        [anon_sym_not] = ACTIONS(1035),
        [anon_sym_LBRACK] = ACTIONS(1037),
        [anon_sym_LBRACE] = ACTIONS(1037),
        [sym_string] = ACTIONS(1037),
        [sym_number] = ACTIONS(1035),
        [sym_identifier] = ACTIONS(1039),
        [sym_comment] = ACTIONS(83),
        [sym__newline] = ACTIONS(1037),
        [sym__dedent] = ACTIONS(1037),
    },
    [755] = {
        [sym__expression] = STATE(757),
        [sym_binary_operator] = STATE(19),
        [sym_unary_operator] = STATE(19),
        [sym_subscript] = STATE(19),
        [sym_call] = STATE(19),
        [sym_list] = STATE(19),
        [sym_list_comprehension] = STATE(19),
        [sym_dictionary] = STATE(19),
        [sym_dictionary_comprehension] = STATE(19),
        [sym_set] = STATE(19),
        [sym_set_comprehension] = STATE(19),
        [anon_sym_not] = ACTIONS(1890),
        [anon_sym_LBRACK] = ACTIONS(123),
        [anon_sym_RBRACK] = ACTIONS(741),
        [anon_sym_LBRACE] = ACTIONS(125),
        [anon_sym_RBRACE] = ACTIONS(725),
        [sym_string] = ACTIONS(127),
        [sym_number] = ACTIONS(129),
        [sym_identifier] = ACTIONS(131),
        [sym_comment] = ACTIONS(83),
    },
    [756] = {
        [sym__expression] = STATE(760),
        [sym_binary_operator] = STATE(19),
        [sym_unary_operator] = STATE(19),
        [sym_subscript] = STATE(19),
        [sym_call] = STATE(19),
        [sym_list] = STATE(19),
        [sym_list_comprehension] = STATE(19),
        [sym_dictionary] = STATE(19),
        [sym_dictionary_comprehension] = STATE(19),
        [sym_set] = STATE(19),
        [sym_set_comprehension] = STATE(19),
        [anon_sym_not] = ACTIONS(1890),
        [anon_sym_LBRACK] = ACTIONS(123),
        [anon_sym_LBRACE] = ACTIONS(125),
        [sym_string] = ACTIONS(127),
        [sym_number] = ACTIONS(129),
        [sym_identifier] = ACTIONS(131),
        [sym_comment] = ACTIONS(83),
    },
    [757] = {
        [anon_sym_LPAREN] = ACTIONS(201),
        [anon_sym_RPAREN] = ACTIONS(513),
        [anon_sym_COMMA] = ACTIONS(513),
        [anon_sym_STAR] = ACTIONS(1892),
        [anon_sym_COLON] = ACTIONS(513),
        [anon_sym_in] = ACTIONS(513),
        [anon_sym_PLUS] = ACTIONS(1894),
        [anon_sym_DASH] = ACTIONS(1894),
        [anon_sym_SLASH] = ACTIONS(1894),
        [anon_sym_STAR_STAR] = ACTIONS(1894),
        [anon_sym_PIPE] = ACTIONS(1894),
        [anon_sym_AMP] = ACTIONS(1894),
        [anon_sym_CARET] = ACTIONS(1894),
        [anon_sym_LT_LT] = ACTIONS(1894),
        [anon_sym_GT_GT] = ACTIONS(1894),
        [anon_sym_and] = ACTIONS(1894),
        [anon_sym_or] = ACTIONS(1894),
        [anon_sym_LBRACK] = ACTIONS(217),
        [anon_sym_RBRACK] = ACTIONS(513),
        [anon_sym_RBRACE] = ACTIONS(513),
        [sym_comment] = ACTIONS(83),
        [sym__newline] = ACTIONS(513),
    },
    [758] = {
        [sym__expression] = STATE(759),
        [sym_binary_operator] = STATE(19),
        [sym_unary_operator] = STATE(19),
        [sym_subscript] = STATE(19),
        [sym_call] = STATE(19),
        [sym_list] = STATE(19),
        [sym_list_comprehension] = STATE(19),
        [sym_dictionary] = STATE(19),
        [sym_dictionary_comprehension] = STATE(19),
        [sym_set] = STATE(19),
        [sym_set_comprehension] = STATE(19),
        [anon_sym_not] = ACTIONS(1890),
        [anon_sym_LBRACK] = ACTIONS(123),
        [anon_sym_LBRACE] = ACTIONS(125),
        [sym_string] = ACTIONS(127),
        [sym_number] = ACTIONS(129),
        [sym_identifier] = ACTIONS(131),
        [sym_comment] = ACTIONS(83),
    },
    [759] = {
        [anon_sym_LPAREN] = ACTIONS(1896),
        [anon_sym_RPAREN] = ACTIONS(321),
        [anon_sym_COMMA] = ACTIONS(321),
        [anon_sym_STAR] = ACTIONS(1899),
        [anon_sym_COLON] = ACTIONS(321),
        [anon_sym_in] = ACTIONS(321),
        [anon_sym_PLUS] = ACTIONS(1902),
        [anon_sym_DASH] = ACTIONS(1902),
        [anon_sym_SLASH] = ACTIONS(1902),
        [anon_sym_STAR_STAR] = ACTIONS(1902),
        [anon_sym_PIPE] = ACTIONS(1902),
        [anon_sym_AMP] = ACTIONS(1902),
        [anon_sym_CARET] = ACTIONS(1902),
        [anon_sym_LT_LT] = ACTIONS(1902),
        [anon_sym_GT_GT] = ACTIONS(1902),
        [anon_sym_and] = ACTIONS(1902),
        [anon_sym_or] = ACTIONS(1902),
        [anon_sym_LBRACK] = ACTIONS(1905),
        [anon_sym_RBRACK] = ACTIONS(321),
        [anon_sym_RBRACE] = ACTIONS(321),
        [sym_comment] = ACTIONS(83),
        [sym__newline] = ACTIONS(321),
    },
    [760] = {
        [anon_sym_LPAREN] = ACTIONS(1908),
        [anon_sym_RPAREN] = ACTIONS(649),
        [anon_sym_COMMA] = ACTIONS(649),
        [anon_sym_STAR] = ACTIONS(1911),
        [anon_sym_COLON] = ACTIONS(649),
        [anon_sym_in] = ACTIONS(649),
        [anon_sym_PLUS] = ACTIONS(1914),
        [anon_sym_DASH] = ACTIONS(1914),
        [anon_sym_SLASH] = ACTIONS(1914),
        [anon_sym_STAR_STAR] = ACTIONS(1914),
        [anon_sym_PIPE] = ACTIONS(1914),
        [anon_sym_AMP] = ACTIONS(1914),
        [anon_sym_CARET] = ACTIONS(1914),
        [anon_sym_LT_LT] = ACTIONS(1914),
        [anon_sym_GT_GT] = ACTIONS(1914),
        [anon_sym_and] = ACTIONS(1914),
        [anon_sym_or] = ACTIONS(1914),
        [anon_sym_LBRACK] = ACTIONS(1917),
        [anon_sym_RBRACK] = ACTIONS(649),
        [anon_sym_RBRACE] = ACTIONS(649),
        [sym_comment] = ACTIONS(83),
        [sym__newline] = ACTIONS(649),
    },
    [761] = {
        [sym_expression_list] = STATE(765),
        [sym__expression] = STATE(166),
        [sym_binary_operator] = STATE(45),
        [sym_unary_operator] = STATE(45),
        [sym_subscript] = STATE(45),
        [sym_call] = STATE(45),
        [sym_list] = STATE(45),
        [sym_list_comprehension] = STATE(45),
        [sym_dictionary] = STATE(45),
        [sym_dictionary_comprehension] = STATE(45),
        [sym_set] = STATE(45),
        [sym_set_comprehension] = STATE(45),
        [anon_sym_not] = ACTIONS(155),
        [anon_sym_LBRACK] = ACTIONS(145),
        [anon_sym_LBRACE] = ACTIONS(147),
        [sym_string] = ACTIONS(149),
        [sym_number] = ACTIONS(151),
        [sym_identifier] = ACTIONS(153),
        [sym_comment] = ACTIONS(83),
    },
    [762] = {
        [ts_builtin_sym_end] = ACTIONS(239),
        [anon_sym_SEMI] = ACTIONS(239),
        [anon_sym_import] = ACTIONS(241),
        [anon_sym_from] = ACTIONS(241),
        [anon_sym_print] = ACTIONS(241),
        [anon_sym_return] = ACTIONS(241),
        [anon_sym_del] = ACTIONS(241),
        [sym_pass_statement] = ACTIONS(241),
        [sym_break_statement] = ACTIONS(241),
        [sym_continue_statement] = ACTIONS(241),
        [anon_sym_if] = ACTIONS(241),
        [anon_sym_for] = ACTIONS(241),
        [anon_sym_while] = ACTIONS(241),
        [anon_sym_try] = ACTIONS(241),
        [anon_sym_with] = ACTIONS(241),
        [anon_sym_def] = ACTIONS(241),
        [anon_sym_class] = ACTIONS(241),
        [anon_sym_AT] = ACTIONS(239),
        [anon_sym_not] = ACTIONS(241),
        [anon_sym_LBRACK] = ACTIONS(239),
        [anon_sym_LBRACE] = ACTIONS(239),
        [sym_string] = ACTIONS(239),
        [sym_number] = ACTIONS(241),
        [sym_identifier] = ACTIONS(243),
        [sym_comment] = ACTIONS(83),
        [sym__newline] = ACTIONS(239),
        [sym__dedent] = ACTIONS(239),
    },
    [763] = {
        [sym_comment] = ACTIONS(83),
        [sym__newline] = ACTIONS(1920),
    },
    [764] = {
        [ts_builtin_sym_end] = ACTIONS(693),
        [anon_sym_SEMI] = ACTIONS(693),
        [anon_sym_import] = ACTIONS(695),
        [anon_sym_from] = ACTIONS(695),
        [anon_sym_print] = ACTIONS(695),
        [anon_sym_return] = ACTIONS(695),
        [anon_sym_del] = ACTIONS(695),
        [sym_pass_statement] = ACTIONS(695),
        [sym_break_statement] = ACTIONS(695),
        [sym_continue_statement] = ACTIONS(695),
        [anon_sym_if] = ACTIONS(695),
        [anon_sym_for] = ACTIONS(695),
        [anon_sym_while] = ACTIONS(695),
        [anon_sym_try] = ACTIONS(695),
        [anon_sym_with] = ACTIONS(695),
        [anon_sym_def] = ACTIONS(695),
        [anon_sym_class] = ACTIONS(695),
        [anon_sym_AT] = ACTIONS(693),
        [anon_sym_not] = ACTIONS(695),
        [anon_sym_LBRACK] = ACTIONS(693),
        [anon_sym_LBRACE] = ACTIONS(693),
        [sym_string] = ACTIONS(693),
        [sym_number] = ACTIONS(695),
        [sym_identifier] = ACTIONS(697),
        [sym_comment] = ACTIONS(83),
        [sym__newline] = ACTIONS(693),
        [sym__dedent] = ACTIONS(693),
    },
    [765] = {
        [anon_sym_in] = ACTIONS(1922),
        [sym_comment] = ACTIONS(83),
    },
    [766] = {
        [sym_expression_list] = STATE(767),
        [sym__expression] = STATE(524),
        [sym_binary_operator] = STATE(45),
        [sym_unary_operator] = STATE(45),
        [sym_subscript] = STATE(45),
        [sym_call] = STATE(45),
        [sym_list] = STATE(45),
        [sym_list_comprehension] = STATE(45),
        [sym_dictionary] = STATE(45),
        [sym_dictionary_comprehension] = STATE(45),
        [sym_set] = STATE(45),
        [sym_set_comprehension] = STATE(45),
        [anon_sym_not] = ACTIONS(949),
        [anon_sym_LBRACK] = ACTIONS(145),
        [anon_sym_LBRACE] = ACTIONS(147),
        [sym_string] = ACTIONS(149),
        [sym_number] = ACTIONS(151),
        [sym_identifier] = ACTIONS(153),
        [sym_comment] = ACTIONS(83),
    },
    [767] = {
        [anon_sym_COLON] = ACTIONS(1708),
        [sym_comment] = ACTIONS(83),
    },
    [768] = {
        [sym__simple_statement] = STATE(742),
        [sym_import_statement] = STATE(7),
        [sym_import_from_statement] = STATE(7),
        [sym_print_statement] = STATE(7),
        [sym_expression_statement] = STATE(7),
        [sym_return_statement] = STATE(7),
        [sym_delete_statement] = STATE(7),
        [sym__suite] = STATE(769),
        [sym__expression] = STATE(26),
        [sym_binary_operator] = STATE(19),
        [sym_unary_operator] = STATE(19),
        [sym_subscript] = STATE(19),
        [sym_call] = STATE(19),
        [sym_list] = STATE(19),
        [sym_list_comprehension] = STATE(19),
        [sym_dictionary] = STATE(19),
        [sym_dictionary_comprehension] = STATE(19),
        [sym_set] = STATE(19),
        [sym_set_comprehension] = STATE(19),
        [anon_sym_import] = ACTIONS(93),
        [anon_sym_from] = ACTIONS(95),
        [anon_sym_print] = ACTIONS(97),
        [anon_sym_return] = ACTIONS(99),
        [anon_sym_del] = ACTIONS(101),
        [sym_pass_statement] = ACTIONS(103),
        [sym_break_statement] = ACTIONS(103),
        [sym_continue_statement] = ACTIONS(103),
        [anon_sym_not] = ACTIONS(121),
        [anon_sym_LBRACK] = ACTIONS(123),
        [anon_sym_LBRACE] = ACTIONS(125),
        [sym_string] = ACTIONS(127),
        [sym_number] = ACTIONS(129),
        [sym_identifier] = ACTIONS(131),
        [sym_comment] = ACTIONS(83),
        [sym__indent] = ACTIONS(1398),
    },
    [769] = {
        [sym_else_clause] = STATE(770),
        [ts_builtin_sym_end] = ACTIONS(1091),
        [anon_sym_SEMI] = ACTIONS(1091),
        [anon_sym_import] = ACTIONS(1089),
        [anon_sym_from] = ACTIONS(1089),
        [anon_sym_print] = ACTIONS(1089),
        [anon_sym_return] = ACTIONS(1089),
        [anon_sym_del] = ACTIONS(1089),
        [sym_pass_statement] = ACTIONS(1089),
        [sym_break_statement] = ACTIONS(1089),
        [sym_continue_statement] = ACTIONS(1089),
        [anon_sym_if] = ACTIONS(1089),
        [anon_sym_else] = ACTIONS(1862),
        [anon_sym_for] = ACTIONS(1089),
        [anon_sym_while] = ACTIONS(1089),
        [anon_sym_try] = ACTIONS(1089),
        [anon_sym_with] = ACTIONS(1089),
        [anon_sym_def] = ACTIONS(1089),
        [anon_sym_class] = ACTIONS(1089),
        [anon_sym_AT] = ACTIONS(1091),
        [anon_sym_not] = ACTIONS(1089),
        [anon_sym_LBRACK] = ACTIONS(1091),
        [anon_sym_LBRACE] = ACTIONS(1091),
        [sym_string] = ACTIONS(1091),
        [sym_number] = ACTIONS(1089),
        [sym_identifier] = ACTIONS(1093),
        [sym_comment] = ACTIONS(83),
        [sym__newline] = ACTIONS(1091),
        [sym__dedent] = ACTIONS(1091),
    },
    [770] = {
        [ts_builtin_sym_end] = ACTIONS(1097),
        [anon_sym_SEMI] = ACTIONS(1097),
        [anon_sym_import] = ACTIONS(1095),
        [anon_sym_from] = ACTIONS(1095),
        [anon_sym_print] = ACTIONS(1095),
        [anon_sym_return] = ACTIONS(1095),
        [anon_sym_del] = ACTIONS(1095),
        [sym_pass_statement] = ACTIONS(1095),
        [sym_break_statement] = ACTIONS(1095),
        [sym_continue_statement] = ACTIONS(1095),
        [anon_sym_if] = ACTIONS(1095),
        [anon_sym_for] = ACTIONS(1095),
        [anon_sym_while] = ACTIONS(1095),
        [anon_sym_try] = ACTIONS(1095),
        [anon_sym_with] = ACTIONS(1095),
        [anon_sym_def] = ACTIONS(1095),
        [anon_sym_class] = ACTIONS(1095),
        [anon_sym_AT] = ACTIONS(1097),
        [anon_sym_not] = ACTIONS(1095),
        [anon_sym_LBRACK] = ACTIONS(1097),
        [anon_sym_LBRACE] = ACTIONS(1097),
        [sym_string] = ACTIONS(1097),
        [sym_number] = ACTIONS(1095),
        [sym_identifier] = ACTIONS(1099),
        [sym_comment] = ACTIONS(83),
        [sym__newline] = ACTIONS(1097),
        [sym__dedent] = ACTIONS(1097),
    },
    [771] = {
        [anon_sym_LPAREN] = ACTIONS(1307),
        [anon_sym_RPAREN] = ACTIONS(1307),
        [anon_sym_COMMA] = ACTIONS(1307),
        [anon_sym_as] = ACTIONS(1307),
        [anon_sym_STAR] = ACTIONS(1313),
        [anon_sym_COLON] = ACTIONS(1307),
        [anon_sym_for] = ACTIONS(1307),
        [anon_sym_in] = ACTIONS(1307),
        [anon_sym_PLUS] = ACTIONS(1307),
        [anon_sym_DASH] = ACTIONS(1307),
        [anon_sym_SLASH] = ACTIONS(1307),
        [anon_sym_STAR_STAR] = ACTIONS(1307),
        [anon_sym_PIPE] = ACTIONS(1307),
        [anon_sym_AMP] = ACTIONS(1307),
        [anon_sym_CARET] = ACTIONS(1307),
        [anon_sym_LT_LT] = ACTIONS(1307),
        [anon_sym_GT_GT] = ACTIONS(1307),
        [anon_sym_and] = ACTIONS(1307),
        [anon_sym_or] = ACTIONS(1307),
        [anon_sym_LBRACK] = ACTIONS(1307),
        [anon_sym_RBRACK] = ACTIONS(1307),
        [anon_sym_RBRACE] = ACTIONS(1307),
        [sym_comment] = ACTIONS(83),
        [sym__newline] = ACTIONS(1307),
    },
    [772] = {
        [anon_sym_LPAREN] = ACTIONS(1924),
        [anon_sym_RPAREN] = ACTIONS(1924),
        [anon_sym_COMMA] = ACTIONS(1924),
        [anon_sym_as] = ACTIONS(1924),
        [anon_sym_STAR] = ACTIONS(1927),
        [anon_sym_COLON] = ACTIONS(1924),
        [anon_sym_for] = ACTIONS(1924),
        [anon_sym_in] = ACTIONS(1924),
        [anon_sym_PLUS] = ACTIONS(1924),
        [anon_sym_DASH] = ACTIONS(1924),
        [anon_sym_SLASH] = ACTIONS(1924),
        [anon_sym_STAR_STAR] = ACTIONS(1924),
        [anon_sym_PIPE] = ACTIONS(1924),
        [anon_sym_AMP] = ACTIONS(1924),
        [anon_sym_CARET] = ACTIONS(1924),
        [anon_sym_LT_LT] = ACTIONS(1924),
        [anon_sym_GT_GT] = ACTIONS(1924),
        [anon_sym_and] = ACTIONS(1924),
        [anon_sym_or] = ACTIONS(1924),
        [anon_sym_LBRACK] = ACTIONS(1924),
        [anon_sym_RBRACK] = ACTIONS(1924),
        [anon_sym_RBRACE] = ACTIONS(1924),
        [sym_comment] = ACTIONS(83),
        [sym__newline] = ACTIONS(1924),
    },
    [773] = {
        [sym__expression] = STATE(112),
        [sym_binary_operator] = STATE(45),
        [sym_unary_operator] = STATE(45),
        [sym_subscript] = STATE(45),
        [sym_call] = STATE(45),
        [sym_keyword_argument] = STATE(113),
        [sym_dictionary_splat_argument] = STATE(774),
        [sym_list] = STATE(45),
        [sym_list_comprehension] = STATE(45),
        [sym_dictionary] = STATE(45),
        [sym_dictionary_comprehension] = STATE(45),
        [sym_set] = STATE(45),
        [sym_set_comprehension] = STATE(45),
        [anon_sym_STAR_STAR] = ACTIONS(247),
        [anon_sym_not] = ACTIONS(249),
        [anon_sym_LBRACK] = ACTIONS(145),
        [anon_sym_LBRACE] = ACTIONS(147),
        [sym_string] = ACTIONS(149),
        [sym_number] = ACTIONS(151),
        [sym_identifier] = ACTIONS(251),
        [sym_comment] = ACTIONS(83),
    },
    [774] = {
        [anon_sym_RPAREN] = ACTIONS(1930),
        [sym_comment] = ACTIONS(83),
    },
    [775] = {
        [anon_sym_LPAREN] = ACTIONS(1932),
        [anon_sym_RPAREN] = ACTIONS(1932),
        [anon_sym_COMMA] = ACTIONS(1932),
        [anon_sym_as] = ACTIONS(1932),
        [anon_sym_STAR] = ACTIONS(1935),
        [anon_sym_COLON] = ACTIONS(1932),
        [anon_sym_for] = ACTIONS(1932),
        [anon_sym_in] = ACTIONS(1932),
        [anon_sym_PLUS] = ACTIONS(1932),
        [anon_sym_DASH] = ACTIONS(1932),
        [anon_sym_SLASH] = ACTIONS(1932),
        [anon_sym_STAR_STAR] = ACTIONS(1932),
        [anon_sym_PIPE] = ACTIONS(1932),
        [anon_sym_AMP] = ACTIONS(1932),
        [anon_sym_CARET] = ACTIONS(1932),
        [anon_sym_LT_LT] = ACTIONS(1932),
        [anon_sym_GT_GT] = ACTIONS(1932),
        [anon_sym_and] = ACTIONS(1932),
        [anon_sym_or] = ACTIONS(1932),
        [anon_sym_LBRACK] = ACTIONS(1932),
        [anon_sym_RBRACK] = ACTIONS(1932),
        [anon_sym_RBRACE] = ACTIONS(1932),
        [sym_comment] = ACTIONS(83),
        [sym__newline] = ACTIONS(1932),
    },
    [776] = {
        [anon_sym_RPAREN] = ACTIONS(1872),
        [anon_sym_STAR] = ACTIONS(1938),
        [anon_sym_STAR_STAR] = ACTIONS(1941),
        [anon_sym_not] = ACTIONS(1938),
        [anon_sym_LBRACK] = ACTIONS(1941),
        [anon_sym_LBRACE] = ACTIONS(1941),
        [sym_string] = ACTIONS(1941),
        [sym_number] = ACTIONS(1938),
        [sym_identifier] = ACTIONS(1944),
        [sym_comment] = ACTIONS(83),
    },
    [777] = {
        [anon_sym_LPAREN] = ACTIONS(1924),
        [anon_sym_RPAREN] = ACTIONS(1924),
        [anon_sym_COMMA] = ACTIONS(1924),
        [anon_sym_as] = ACTIONS(1924),
        [anon_sym_STAR] = ACTIONS(1927),
        [anon_sym_COLON] = ACTIONS(1924),
        [anon_sym_for] = ACTIONS(1924),
        [anon_sym_in] = ACTIONS(1924),
        [anon_sym_PLUS] = ACTIONS(1924),
        [anon_sym_DASH] = ACTIONS(1924),
        [anon_sym_SLASH] = ACTIONS(1924),
        [anon_sym_STAR_STAR] = ACTIONS(1924),
        [anon_sym_PIPE] = ACTIONS(1924),
        [anon_sym_AMP] = ACTIONS(1924),
        [anon_sym_CARET] = ACTIONS(1924),
        [anon_sym_LT_LT] = ACTIONS(1924),
        [anon_sym_GT_GT] = ACTIONS(1924),
        [anon_sym_and] = ACTIONS(1924),
        [anon_sym_or] = ACTIONS(1924),
        [anon_sym_LBRACK] = ACTIONS(1924),
        [anon_sym_RBRACK] = ACTIONS(1924),
        [anon_sym_RBRACE] = ACTIONS(1924),
        [sym_comment] = ACTIONS(83),
        [sym__newline] = ACTIONS(1947),
    },
    [778] = {
        [sym__expression] = STATE(804),
        [sym_binary_operator] = STATE(19),
        [sym_unary_operator] = STATE(19),
        [sym_subscript] = STATE(19),
        [sym_call] = STATE(19),
        [sym_list] = STATE(19),
        [sym_list_comprehension] = STATE(19),
        [sym_dictionary] = STATE(19),
        [sym_dictionary_comprehension] = STATE(19),
        [sym_set] = STATE(19),
        [sym_set_comprehension] = STATE(19),
        [anon_sym_RPAREN] = ACTIONS(1872),
        [anon_sym_STAR] = ACTIONS(1938),
        [anon_sym_STAR_STAR] = ACTIONS(1941),
        [anon_sym_not] = ACTIONS(1951),
        [anon_sym_LBRACK] = ACTIONS(1359),
        [anon_sym_DOT_DOT_DOT] = ACTIONS(283),
        [anon_sym_RBRACK] = ACTIONS(1955),
        [anon_sym_LBRACE] = ACTIONS(1367),
        [anon_sym_RBRACE] = ACTIONS(721),
        [sym_string] = ACTIONS(1373),
        [sym_number] = ACTIONS(1377),
        [sym_identifier] = ACTIONS(1957),
        [sym_comment] = ACTIONS(83),
    },
    [779] = {
        [sym__expression] = STATE(800),
        [sym_binary_operator] = STATE(45),
        [sym_unary_operator] = STATE(45),
        [sym_subscript] = STATE(45),
        [sym_call] = STATE(45),
        [sym_list] = STATE(45),
        [sym_list_comprehension] = STATE(45),
        [sym_dictionary] = STATE(45),
        [sym_dictionary_comprehension] = STATE(45),
        [sym_set] = STATE(45),
        [sym_set_comprehension] = STATE(45),
        [anon_sym_not] = ACTIONS(949),
        [anon_sym_LBRACK] = ACTIONS(145),
        [anon_sym_LBRACE] = ACTIONS(147),
        [sym_string] = ACTIONS(149),
        [sym_number] = ACTIONS(151),
        [sym_identifier] = ACTIONS(153),
        [sym_comment] = ACTIONS(83),
    },
    [780] = {
        [sym__simple_statement] = STATE(742),
        [sym_import_statement] = STATE(7),
        [sym_import_from_statement] = STATE(7),
        [sym_print_statement] = STATE(7),
        [sym_expression_statement] = STATE(7),
        [sym_return_statement] = STATE(7),
        [sym_delete_statement] = STATE(7),
        [sym__suite] = STATE(793),
        [sym__expression] = STATE(794),
        [sym_binary_operator] = STATE(19),
        [sym_unary_operator] = STATE(19),
        [sym_subscript] = STATE(19),
        [sym_call] = STATE(19),
        [sym_list] = STATE(19),
        [sym_list_comprehension] = STATE(19),
        [sym_dictionary] = STATE(19),
        [sym_dictionary_comprehension] = STATE(19),
        [sym_set] = STATE(19),
        [sym_set_comprehension] = STATE(19),
        [anon_sym_import] = ACTIONS(93),
        [anon_sym_from] = ACTIONS(95),
        [anon_sym_print] = ACTIONS(97),
        [anon_sym_return] = ACTIONS(99),
        [anon_sym_del] = ACTIONS(101),
        [sym_pass_statement] = ACTIONS(103),
        [sym_break_statement] = ACTIONS(103),
        [sym_continue_statement] = ACTIONS(103),
        [anon_sym_not] = ACTIONS(1396),
        [anon_sym_LBRACK] = ACTIONS(123),
        [anon_sym_LBRACE] = ACTIONS(125),
        [sym_string] = ACTIONS(127),
        [sym_number] = ACTIONS(129),
        [sym_identifier] = ACTIONS(131),
        [sym_comment] = ACTIONS(83),
        [sym__indent] = ACTIONS(1398),
    },
    [781] = {
        [sym_expression_list] = STATE(785),
        [sym__expression] = STATE(166),
        [sym_binary_operator] = STATE(45),
        [sym_unary_operator] = STATE(45),
        [sym_subscript] = STATE(45),
        [sym_call] = STATE(45),
        [sym_list] = STATE(45),
        [sym_list_comprehension] = STATE(45),
        [sym_dictionary] = STATE(45),
        [sym_dictionary_comprehension] = STATE(45),
        [sym_set] = STATE(45),
        [sym_set_comprehension] = STATE(45),
        [anon_sym_not] = ACTIONS(155),
        [anon_sym_LBRACK] = ACTIONS(145),
        [anon_sym_LBRACE] = ACTIONS(147),
        [sym_string] = ACTIONS(149),
        [sym_number] = ACTIONS(151),
        [sym_identifier] = ACTIONS(153),
        [sym_comment] = ACTIONS(83),
    },
    [782] = {
        [anon_sym_LPAREN] = ACTIONS(1961),
        [anon_sym_RPAREN] = ACTIONS(1961),
        [anon_sym_COMMA] = ACTIONS(1961),
        [anon_sym_as] = ACTIONS(1961),
        [anon_sym_STAR] = ACTIONS(1965),
        [anon_sym_COLON] = ACTIONS(1961),
        [anon_sym_for] = ACTIONS(1961),
        [anon_sym_in] = ACTIONS(1961),
        [anon_sym_PLUS] = ACTIONS(1961),
        [anon_sym_DASH] = ACTIONS(1961),
        [anon_sym_SLASH] = ACTIONS(1961),
        [anon_sym_STAR_STAR] = ACTIONS(1961),
        [anon_sym_PIPE] = ACTIONS(1961),
        [anon_sym_AMP] = ACTIONS(1961),
        [anon_sym_CARET] = ACTIONS(1961),
        [anon_sym_LT_LT] = ACTIONS(1961),
        [anon_sym_GT_GT] = ACTIONS(1961),
        [anon_sym_and] = ACTIONS(1961),
        [anon_sym_or] = ACTIONS(1961),
        [anon_sym_LBRACK] = ACTIONS(1961),
        [anon_sym_RBRACK] = ACTIONS(1961),
        [anon_sym_RBRACE] = ACTIONS(1961),
        [sym_comment] = ACTIONS(83),
        [sym__newline] = ACTIONS(1961),
    },
    [783] = {
        [anon_sym_LPAREN] = ACTIONS(1969),
        [anon_sym_RPAREN] = ACTIONS(1969),
        [anon_sym_COMMA] = ACTIONS(1969),
        [anon_sym_as] = ACTIONS(1969),
        [anon_sym_STAR] = ACTIONS(1973),
        [anon_sym_COLON] = ACTIONS(1969),
        [anon_sym_for] = ACTIONS(1969),
        [anon_sym_in] = ACTIONS(1969),
        [anon_sym_PLUS] = ACTIONS(1969),
        [anon_sym_DASH] = ACTIONS(1969),
        [anon_sym_SLASH] = ACTIONS(1969),
        [anon_sym_STAR_STAR] = ACTIONS(1969),
        [anon_sym_PIPE] = ACTIONS(1969),
        [anon_sym_AMP] = ACTIONS(1969),
        [anon_sym_CARET] = ACTIONS(1969),
        [anon_sym_LT_LT] = ACTIONS(1969),
        [anon_sym_GT_GT] = ACTIONS(1969),
        [anon_sym_and] = ACTIONS(1969),
        [anon_sym_or] = ACTIONS(1969),
        [anon_sym_LBRACK] = ACTIONS(1969),
        [anon_sym_RBRACK] = ACTIONS(1969),
        [anon_sym_RBRACE] = ACTIONS(1969),
        [sym_comment] = ACTIONS(83),
        [sym__newline] = ACTIONS(1969),
    },
    [784] = {
        [anon_sym_LPAREN] = ACTIONS(1896),
        [anon_sym_RPAREN] = ACTIONS(321),
        [anon_sym_COMMA] = ACTIONS(321),
        [anon_sym_as] = ACTIONS(321),
        [anon_sym_STAR] = ACTIONS(1977),
        [anon_sym_COLON] = ACTIONS(321),
        [anon_sym_for] = ACTIONS(321),
        [anon_sym_in] = ACTIONS(321),
        [anon_sym_PLUS] = ACTIONS(1980),
        [anon_sym_DASH] = ACTIONS(1980),
        [anon_sym_SLASH] = ACTIONS(1980),
        [anon_sym_STAR_STAR] = ACTIONS(1980),
        [anon_sym_PIPE] = ACTIONS(1980),
        [anon_sym_AMP] = ACTIONS(1980),
        [anon_sym_CARET] = ACTIONS(1980),
        [anon_sym_LT_LT] = ACTIONS(1980),
        [anon_sym_GT_GT] = ACTIONS(1980),
        [anon_sym_and] = ACTIONS(1980),
        [anon_sym_or] = ACTIONS(1980),
        [anon_sym_LBRACK] = ACTIONS(1905),
        [anon_sym_RBRACK] = ACTIONS(321),
        [anon_sym_RBRACE] = ACTIONS(321),
        [sym_comment] = ACTIONS(83),
        [sym__newline] = ACTIONS(321),
    },
    [785] = {
        [anon_sym_in] = ACTIONS(1983),
        [sym_comment] = ACTIONS(83),
    },
    [786] = {
        [sym__expression] = STATE(788),
        [sym_binary_operator] = STATE(45),
        [sym_unary_operator] = STATE(45),
        [sym_subscript] = STATE(45),
        [sym_call] = STATE(45),
        [sym_list] = STATE(45),
        [sym_list_comprehension] = STATE(45),
        [sym_dictionary] = STATE(45),
        [sym_dictionary_comprehension] = STATE(45),
        [sym_set] = STATE(45),
        [sym_set_comprehension] = STATE(45),
        [anon_sym_not] = ACTIONS(1985),
        [anon_sym_LBRACK] = ACTIONS(145),
        [anon_sym_LBRACE] = ACTIONS(147),
        [sym_string] = ACTIONS(149),
        [sym_number] = ACTIONS(151),
        [sym_identifier] = ACTIONS(153),
        [sym_comment] = ACTIONS(83),
    },
    [787] = {
        [sym__expression] = STATE(791),
        [sym_binary_operator] = STATE(45),
        [sym_unary_operator] = STATE(45),
        [sym_subscript] = STATE(45),
        [sym_call] = STATE(45),
        [sym_list] = STATE(45),
        [sym_list_comprehension] = STATE(45),
        [sym_dictionary] = STATE(45),
        [sym_dictionary_comprehension] = STATE(45),
        [sym_set] = STATE(45),
        [sym_set_comprehension] = STATE(45),
        [anon_sym_not] = ACTIONS(1985),
        [anon_sym_LBRACK] = ACTIONS(145),
        [anon_sym_LBRACE] = ACTIONS(147),
        [sym_string] = ACTIONS(149),
        [sym_number] = ACTIONS(151),
        [sym_identifier] = ACTIONS(153),
        [sym_comment] = ACTIONS(83),
    },
    [788] = {
        [anon_sym_LPAREN] = ACTIONS(265),
        [anon_sym_STAR] = ACTIONS(1987),
        [anon_sym_PLUS] = ACTIONS(1989),
        [anon_sym_DASH] = ACTIONS(1989),
        [anon_sym_SLASH] = ACTIONS(1989),
        [anon_sym_STAR_STAR] = ACTIONS(1989),
        [anon_sym_PIPE] = ACTIONS(1989),
        [anon_sym_AMP] = ACTIONS(1989),
        [anon_sym_CARET] = ACTIONS(1989),
        [anon_sym_LT_LT] = ACTIONS(1989),
        [anon_sym_GT_GT] = ACTIONS(1989),
        [anon_sym_and] = ACTIONS(1989),
        [anon_sym_or] = ACTIONS(1989),
        [anon_sym_LBRACK] = ACTIONS(281),
        [anon_sym_RBRACK] = ACTIONS(745),
        [anon_sym_RBRACE] = ACTIONS(729),
        [sym_comment] = ACTIONS(83),
    },
    [789] = {
        [sym__expression] = STATE(790),
        [sym_binary_operator] = STATE(45),
        [sym_unary_operator] = STATE(45),
        [sym_subscript] = STATE(45),
        [sym_call] = STATE(45),
        [sym_list] = STATE(45),
        [sym_list_comprehension] = STATE(45),
        [sym_dictionary] = STATE(45),
        [sym_dictionary_comprehension] = STATE(45),
        [sym_set] = STATE(45),
        [sym_set_comprehension] = STATE(45),
        [anon_sym_not] = ACTIONS(1985),
        [anon_sym_LBRACK] = ACTIONS(145),
        [anon_sym_LBRACE] = ACTIONS(147),
        [sym_string] = ACTIONS(149),
        [sym_number] = ACTIONS(151),
        [sym_identifier] = ACTIONS(153),
        [sym_comment] = ACTIONS(83),
    },
    [790] = {
        [anon_sym_LPAREN] = ACTIONS(1991),
        [anon_sym_STAR] = ACTIONS(1994),
        [anon_sym_PLUS] = ACTIONS(1997),
        [anon_sym_DASH] = ACTIONS(1997),
        [anon_sym_SLASH] = ACTIONS(1997),
        [anon_sym_STAR_STAR] = ACTIONS(1997),
        [anon_sym_PIPE] = ACTIONS(1997),
        [anon_sym_AMP] = ACTIONS(1997),
        [anon_sym_CARET] = ACTIONS(1997),
        [anon_sym_LT_LT] = ACTIONS(1997),
        [anon_sym_GT_GT] = ACTIONS(1997),
        [anon_sym_and] = ACTIONS(1997),
        [anon_sym_or] = ACTIONS(1997),
        [anon_sym_LBRACK] = ACTIONS(2000),
        [anon_sym_RBRACK] = ACTIONS(321),
        [anon_sym_RBRACE] = ACTIONS(321),
        [sym_comment] = ACTIONS(83),
    },
    [791] = {
        [anon_sym_LPAREN] = ACTIONS(2003),
        [anon_sym_STAR] = ACTIONS(2006),
        [anon_sym_PLUS] = ACTIONS(2009),
        [anon_sym_DASH] = ACTIONS(2009),
        [anon_sym_SLASH] = ACTIONS(2009),
        [anon_sym_STAR_STAR] = ACTIONS(2009),
        [anon_sym_PIPE] = ACTIONS(2009),
        [anon_sym_AMP] = ACTIONS(2009),
        [anon_sym_CARET] = ACTIONS(2009),
        [anon_sym_LT_LT] = ACTIONS(2009),
        [anon_sym_GT_GT] = ACTIONS(2009),
        [anon_sym_and] = ACTIONS(2009),
        [anon_sym_or] = ACTIONS(2009),
        [anon_sym_LBRACK] = ACTIONS(2012),
        [anon_sym_RBRACK] = ACTIONS(649),
        [anon_sym_RBRACE] = ACTIONS(649),
        [sym_comment] = ACTIONS(83),
    },
    [792] = {
        [sym__expression] = STATE(799),
        [sym_binary_operator] = STATE(19),
        [sym_unary_operator] = STATE(19),
        [sym_subscript] = STATE(19),
        [sym_call] = STATE(19),
        [sym_list] = STATE(19),
        [sym_list_comprehension] = STATE(19),
        [sym_dictionary] = STATE(19),
        [sym_dictionary_comprehension] = STATE(19),
        [sym_set] = STATE(19),
        [sym_set_comprehension] = STATE(19),
        [anon_sym_not] = ACTIONS(1396),
        [anon_sym_LBRACK] = ACTIONS(123),
        [anon_sym_LBRACE] = ACTIONS(125),
        [sym_string] = ACTIONS(127),
        [sym_number] = ACTIONS(129),
        [sym_identifier] = ACTIONS(131),
        [sym_comment] = ACTIONS(83),
    },
    [793] = {
        [sym_elif_clause] = STATE(797),
        [sym_else_clause] = STATE(798),
        [aux_sym_if_statement_repeat1] = STATE(731),
        [ts_builtin_sym_end] = ACTIONS(2015),
        [anon_sym_SEMI] = ACTIONS(2015),
        [anon_sym_import] = ACTIONS(2021),
        [anon_sym_from] = ACTIONS(2021),
        [anon_sym_print] = ACTIONS(2021),
        [anon_sym_return] = ACTIONS(2021),
        [anon_sym_del] = ACTIONS(2021),
        [sym_pass_statement] = ACTIONS(2021),
        [sym_break_statement] = ACTIONS(2021),
        [sym_continue_statement] = ACTIONS(2021),
        [anon_sym_if] = ACTIONS(2021),
        [anon_sym_elif] = ACTIONS(1675),
        [anon_sym_else] = ACTIONS(1678),
        [anon_sym_for] = ACTIONS(2021),
        [anon_sym_while] = ACTIONS(2021),
        [anon_sym_try] = ACTIONS(2021),
        [anon_sym_except] = ACTIONS(2027),
        [anon_sym_finally] = ACTIONS(2027),
        [anon_sym_with] = ACTIONS(2021),
        [anon_sym_def] = ACTIONS(2021),
        [anon_sym_class] = ACTIONS(2021),
        [anon_sym_AT] = ACTIONS(2015),
        [anon_sym_not] = ACTIONS(2021),
        [anon_sym_LBRACK] = ACTIONS(2015),
        [anon_sym_LBRACE] = ACTIONS(2015),
        [sym_string] = ACTIONS(2015),
        [sym_number] = ACTIONS(2021),
        [sym_identifier] = ACTIONS(2030),
        [sym_comment] = ACTIONS(83),
        [sym__newline] = ACTIONS(2015),
        [sym__dedent] = ACTIONS(2015),
    },
    [794] = {
        [anon_sym_LPAREN] = ACTIONS(201),
        [anon_sym_COMMA] = ACTIONS(473),
        [anon_sym_STAR] = ACTIONS(2036),
        [anon_sym_for] = ACTIONS(473),
        [anon_sym_PLUS] = ACTIONS(2038),
        [anon_sym_DASH] = ACTIONS(2038),
        [anon_sym_SLASH] = ACTIONS(2038),
        [anon_sym_STAR_STAR] = ACTIONS(2038),
        [anon_sym_PIPE] = ACTIONS(2038),
        [anon_sym_AMP] = ACTIONS(2038),
        [anon_sym_CARET] = ACTIONS(2038),
        [anon_sym_LT_LT] = ACTIONS(2038),
        [anon_sym_GT_GT] = ACTIONS(2038),
        [anon_sym_and] = ACTIONS(2038),
        [anon_sym_or] = ACTIONS(2038),
        [anon_sym_LBRACK] = ACTIONS(217),
        [anon_sym_RBRACE] = ACTIONS(473),
        [sym_comment] = ACTIONS(83),
        [sym__newline] = ACTIONS(219),
    },
    [795] = {
        [sym__expression] = STATE(796),
        [sym_binary_operator] = STATE(19),
        [sym_unary_operator] = STATE(19),
        [sym_subscript] = STATE(19),
        [sym_call] = STATE(19),
        [sym_list] = STATE(19),
        [sym_list_comprehension] = STATE(19),
        [sym_dictionary] = STATE(19),
        [sym_dictionary_comprehension] = STATE(19),
        [sym_set] = STATE(19),
        [sym_set_comprehension] = STATE(19),
        [anon_sym_not] = ACTIONS(1396),
        [anon_sym_LBRACK] = ACTIONS(123),
        [anon_sym_LBRACE] = ACTIONS(125),
        [sym_string] = ACTIONS(127),
        [sym_number] = ACTIONS(129),
        [sym_identifier] = ACTIONS(131),
        [sym_comment] = ACTIONS(83),
    },
    [796] = {
        [anon_sym_LPAREN] = ACTIONS(1896),
        [anon_sym_COMMA] = ACTIONS(321),
        [anon_sym_STAR] = ACTIONS(2040),
        [anon_sym_for] = ACTIONS(321),
        [anon_sym_PLUS] = ACTIONS(2043),
        [anon_sym_DASH] = ACTIONS(2043),
        [anon_sym_SLASH] = ACTIONS(2043),
        [anon_sym_STAR_STAR] = ACTIONS(2043),
        [anon_sym_PIPE] = ACTIONS(2043),
        [anon_sym_AMP] = ACTIONS(2043),
        [anon_sym_CARET] = ACTIONS(2043),
        [anon_sym_LT_LT] = ACTIONS(2043),
        [anon_sym_GT_GT] = ACTIONS(2043),
        [anon_sym_and] = ACTIONS(2043),
        [anon_sym_or] = ACTIONS(2043),
        [anon_sym_LBRACK] = ACTIONS(1905),
        [anon_sym_RBRACE] = ACTIONS(321),
        [sym_comment] = ACTIONS(83),
        [sym__newline] = ACTIONS(321),
    },
    [797] = {
        [ts_builtin_sym_end] = ACTIONS(1113),
        [anon_sym_SEMI] = ACTIONS(1113),
        [anon_sym_import] = ACTIONS(1111),
        [anon_sym_from] = ACTIONS(1111),
        [anon_sym_print] = ACTIONS(1111),
        [anon_sym_return] = ACTIONS(1111),
        [anon_sym_del] = ACTIONS(1111),
        [sym_pass_statement] = ACTIONS(1111),
        [sym_break_statement] = ACTIONS(1111),
        [sym_continue_statement] = ACTIONS(1111),
        [anon_sym_if] = ACTIONS(1111),
        [anon_sym_elif] = ACTIONS(1111),
        [anon_sym_else] = ACTIONS(1111),
        [anon_sym_for] = ACTIONS(1111),
        [anon_sym_while] = ACTIONS(1111),
        [anon_sym_try] = ACTIONS(1111),
        [anon_sym_with] = ACTIONS(1111),
        [anon_sym_def] = ACTIONS(1111),
        [anon_sym_class] = ACTIONS(1111),
        [anon_sym_AT] = ACTIONS(1113),
        [anon_sym_not] = ACTIONS(1111),
        [anon_sym_LBRACK] = ACTIONS(1113),
        [anon_sym_LBRACE] = ACTIONS(1113),
        [sym_string] = ACTIONS(1113),
        [sym_number] = ACTIONS(1111),
        [sym_identifier] = ACTIONS(1115),
        [sym_comment] = ACTIONS(83),
        [sym__newline] = ACTIONS(1113),
        [sym__dedent] = ACTIONS(1113),
    },
    [798] = {
        [ts_builtin_sym_end] = ACTIONS(2046),
        [anon_sym_SEMI] = ACTIONS(2046),
        [anon_sym_import] = ACTIONS(2049),
        [anon_sym_from] = ACTIONS(2049),
        [anon_sym_print] = ACTIONS(2049),
        [anon_sym_return] = ACTIONS(2049),
        [anon_sym_del] = ACTIONS(2049),
        [sym_pass_statement] = ACTIONS(2049),
        [sym_break_statement] = ACTIONS(2049),
        [sym_continue_statement] = ACTIONS(2049),
        [anon_sym_if] = ACTIONS(2049),
        [anon_sym_for] = ACTIONS(2049),
        [anon_sym_while] = ACTIONS(2049),
        [anon_sym_try] = ACTIONS(2049),
        [anon_sym_with] = ACTIONS(2049),
        [anon_sym_def] = ACTIONS(2049),
        [anon_sym_class] = ACTIONS(2049),
        [anon_sym_AT] = ACTIONS(2046),
        [anon_sym_not] = ACTIONS(2049),
        [anon_sym_LBRACK] = ACTIONS(2046),
        [anon_sym_LBRACE] = ACTIONS(2046),
        [sym_string] = ACTIONS(2046),
        [sym_number] = ACTIONS(2049),
        [sym_identifier] = ACTIONS(2052),
        [sym_comment] = ACTIONS(83),
        [sym__newline] = ACTIONS(2046),
        [sym__dedent] = ACTIONS(2046),
    },
    [799] = {
        [anon_sym_LPAREN] = ACTIONS(1908),
        [anon_sym_COMMA] = ACTIONS(649),
        [anon_sym_STAR] = ACTIONS(2055),
        [anon_sym_for] = ACTIONS(649),
        [anon_sym_PLUS] = ACTIONS(2058),
        [anon_sym_DASH] = ACTIONS(2058),
        [anon_sym_SLASH] = ACTIONS(2058),
        [anon_sym_STAR_STAR] = ACTIONS(2058),
        [anon_sym_PIPE] = ACTIONS(2058),
        [anon_sym_AMP] = ACTIONS(2058),
        [anon_sym_CARET] = ACTIONS(2058),
        [anon_sym_LT_LT] = ACTIONS(2058),
        [anon_sym_GT_GT] = ACTIONS(2058),
        [anon_sym_and] = ACTIONS(2058),
        [anon_sym_or] = ACTIONS(2058),
        [anon_sym_LBRACK] = ACTIONS(1917),
        [anon_sym_RBRACE] = ACTIONS(649),
        [sym_comment] = ACTIONS(83),
        [sym__newline] = ACTIONS(649),
    },
    [800] = {
        [anon_sym_LPAREN] = ACTIONS(265),
        [anon_sym_COMMA] = ACTIONS(951),
        [anon_sym_STAR] = ACTIONS(953),
        [anon_sym_COLON] = ACTIONS(2061),
        [anon_sym_PLUS] = ACTIONS(955),
        [anon_sym_DASH] = ACTIONS(955),
        [anon_sym_SLASH] = ACTIONS(957),
        [anon_sym_STAR_STAR] = ACTIONS(959),
        [anon_sym_PIPE] = ACTIONS(961),
        [anon_sym_AMP] = ACTIONS(963),
        [anon_sym_CARET] = ACTIONS(965),
        [anon_sym_LT_LT] = ACTIONS(955),
        [anon_sym_GT_GT] = ACTIONS(955),
        [anon_sym_and] = ACTIONS(963),
        [anon_sym_or] = ACTIONS(961),
        [anon_sym_LBRACK] = ACTIONS(281),
        [sym_comment] = ACTIONS(83),
    },
    [801] = {
        [sym__simple_statement] = STATE(742),
        [sym_import_statement] = STATE(7),
        [sym_import_from_statement] = STATE(7),
        [sym_print_statement] = STATE(7),
        [sym_expression_statement] = STATE(7),
        [sym_return_statement] = STATE(7),
        [sym_delete_statement] = STATE(7),
        [sym__suite] = STATE(802),
        [sym__expression] = STATE(26),
        [sym_binary_operator] = STATE(19),
        [sym_unary_operator] = STATE(19),
        [sym_subscript] = STATE(19),
        [sym_call] = STATE(19),
        [sym_list] = STATE(19),
        [sym_list_comprehension] = STATE(19),
        [sym_dictionary] = STATE(19),
        [sym_dictionary_comprehension] = STATE(19),
        [sym_set] = STATE(19),
        [sym_set_comprehension] = STATE(19),
        [anon_sym_import] = ACTIONS(93),
        [anon_sym_from] = ACTIONS(95),
        [anon_sym_print] = ACTIONS(97),
        [anon_sym_return] = ACTIONS(99),
        [anon_sym_del] = ACTIONS(101),
        [sym_pass_statement] = ACTIONS(103),
        [sym_break_statement] = ACTIONS(103),
        [sym_continue_statement] = ACTIONS(103),
        [anon_sym_not] = ACTIONS(121),
        [anon_sym_LBRACK] = ACTIONS(123),
        [anon_sym_LBRACE] = ACTIONS(125),
        [sym_string] = ACTIONS(127),
        [sym_number] = ACTIONS(129),
        [sym_identifier] = ACTIONS(131),
        [sym_comment] = ACTIONS(83),
        [sym__indent] = ACTIONS(1398),
    },
    [802] = {
        [ts_builtin_sym_end] = ACTIONS(1061),
        [anon_sym_SEMI] = ACTIONS(1061),
        [anon_sym_import] = ACTIONS(1059),
        [anon_sym_from] = ACTIONS(1059),
        [anon_sym_print] = ACTIONS(1059),
        [anon_sym_return] = ACTIONS(1059),
        [anon_sym_del] = ACTIONS(1059),
        [sym_pass_statement] = ACTIONS(1059),
        [sym_break_statement] = ACTIONS(1059),
        [sym_continue_statement] = ACTIONS(1059),
        [anon_sym_if] = ACTIONS(1059),
        [anon_sym_else] = ACTIONS(1059),
        [anon_sym_for] = ACTIONS(1059),
        [anon_sym_while] = ACTIONS(1059),
        [anon_sym_try] = ACTIONS(1059),
        [anon_sym_except] = ACTIONS(1059),
        [anon_sym_finally] = ACTIONS(1059),
        [anon_sym_with] = ACTIONS(1059),
        [anon_sym_def] = ACTIONS(1059),
        [anon_sym_class] = ACTIONS(1059),
        [anon_sym_AT] = ACTIONS(1061),
        [anon_sym_not] = ACTIONS(1059),
        [anon_sym_LBRACK] = ACTIONS(1061),
        [anon_sym_LBRACE] = ACTIONS(1061),
        [sym_string] = ACTIONS(1061),
        [sym_number] = ACTIONS(1059),
        [sym_identifier] = ACTIONS(1063),
        [sym_comment] = ACTIONS(83),
        [sym__newline] = ACTIONS(1061),
        [sym__dedent] = ACTIONS(1061),
    },
    [803] = {
        [anon_sym_LPAREN] = ACTIONS(2064),
        [anon_sym_RPAREN] = ACTIONS(2064),
        [anon_sym_COMMA] = ACTIONS(2064),
        [anon_sym_as] = ACTIONS(2064),
        [anon_sym_STAR] = ACTIONS(2067),
        [anon_sym_COLON] = ACTIONS(2064),
        [anon_sym_for] = ACTIONS(2064),
        [anon_sym_in] = ACTIONS(2064),
        [anon_sym_PLUS] = ACTIONS(2064),
        [anon_sym_DASH] = ACTIONS(2064),
        [anon_sym_SLASH] = ACTIONS(2064),
        [anon_sym_STAR_STAR] = ACTIONS(2064),
        [anon_sym_PIPE] = ACTIONS(2064),
        [anon_sym_AMP] = ACTIONS(2064),
        [anon_sym_CARET] = ACTIONS(2064),
        [anon_sym_LT_LT] = ACTIONS(2064),
        [anon_sym_GT_GT] = ACTIONS(2064),
        [anon_sym_and] = ACTIONS(2064),
        [anon_sym_or] = ACTIONS(2064),
        [anon_sym_LBRACK] = ACTIONS(2064),
        [anon_sym_RBRACK] = ACTIONS(2064),
        [anon_sym_RBRACE] = ACTIONS(2064),
        [sym_comment] = ACTIONS(83),
        [sym__newline] = ACTIONS(2064),
    },
    [804] = {
        [anon_sym_LPAREN] = ACTIONS(201),
        [anon_sym_RPAREN] = ACTIONS(515),
        [anon_sym_COMMA] = ACTIONS(2070),
        [anon_sym_STAR] = ACTIONS(1892),
        [anon_sym_COLON] = ACTIONS(2073),
        [anon_sym_in] = ACTIONS(515),
        [anon_sym_PLUS] = ACTIONS(1894),
        [anon_sym_DASH] = ACTIONS(1894),
        [anon_sym_SLASH] = ACTIONS(1894),
        [anon_sym_STAR_STAR] = ACTIONS(1894),
        [anon_sym_PIPE] = ACTIONS(1894),
        [anon_sym_AMP] = ACTIONS(1894),
        [anon_sym_CARET] = ACTIONS(1894),
        [anon_sym_LT_LT] = ACTIONS(1894),
        [anon_sym_GT_GT] = ACTIONS(1894),
        [anon_sym_and] = ACTIONS(1894),
        [anon_sym_or] = ACTIONS(1894),
        [anon_sym_LBRACK] = ACTIONS(217),
        [anon_sym_RBRACK] = ACTIONS(2070),
        [anon_sym_RBRACE] = ACTIONS(515),
        [sym_comment] = ACTIONS(83),
        [sym__newline] = ACTIONS(515),
    },
    [805] = {
        [sym__import_list] = STATE(707),
        [sym_aliased_import] = STATE(637),
        [sym_wildcard_import] = STATE(707),
        [sym_dotted_name] = STATE(638),
        [anon_sym_LPAREN] = ACTIONS(1291),
        [anon_sym_STAR] = ACTIONS(1229),
        [sym_identifier] = ACTIONS(133),
        [sym_comment] = ACTIONS(83),
    },
    [806] = {
        [sym__import_list] = STATE(807),
        [sym_aliased_import] = STATE(649),
        [sym_dotted_name] = STATE(650),
        [sym_identifier] = ACTIONS(137),
        [sym_comment] = ACTIONS(83),
    },
    [807] = {
        [anon_sym_RPAREN] = ACTIONS(1550),
        [sym_comment] = ACTIONS(83),
    },
    [808] = {
        [sym_comment] = ACTIONS(83),
        [sym__newline] = ACTIONS(2076),
    },
    [809] = {
        [anon_sym_COLON] = ACTIONS(2079),
        [sym_comment] = ACTIONS(83),
    },
    [810] = {
        [sym__simple_statement] = STATE(742),
        [sym_import_statement] = STATE(7),
        [sym_import_from_statement] = STATE(7),
        [sym_print_statement] = STATE(7),
        [sym_expression_statement] = STATE(7),
        [sym_return_statement] = STATE(7),
        [sym_delete_statement] = STATE(7),
        [sym__suite] = STATE(811),
        [sym__expression] = STATE(26),
        [sym_binary_operator] = STATE(19),
        [sym_unary_operator] = STATE(19),
        [sym_subscript] = STATE(19),
        [sym_call] = STATE(19),
        [sym_list] = STATE(19),
        [sym_list_comprehension] = STATE(19),
        [sym_dictionary] = STATE(19),
        [sym_dictionary_comprehension] = STATE(19),
        [sym_set] = STATE(19),
        [sym_set_comprehension] = STATE(19),
        [anon_sym_import] = ACTIONS(93),
        [anon_sym_from] = ACTIONS(95),
        [anon_sym_print] = ACTIONS(97),
        [anon_sym_return] = ACTIONS(99),
        [anon_sym_del] = ACTIONS(101),
        [sym_pass_statement] = ACTIONS(103),
        [sym_break_statement] = ACTIONS(103),
        [sym_continue_statement] = ACTIONS(103),
        [anon_sym_not] = ACTIONS(121),
        [anon_sym_LBRACK] = ACTIONS(123),
        [anon_sym_LBRACE] = ACTIONS(125),
        [sym_string] = ACTIONS(127),
        [sym_number] = ACTIONS(129),
        [sym_identifier] = ACTIONS(131),
        [sym_comment] = ACTIONS(83),
        [sym__indent] = ACTIONS(1398),
    },
    [811] = {
        [ts_builtin_sym_end] = ACTIONS(855),
        [anon_sym_SEMI] = ACTIONS(855),
        [anon_sym_import] = ACTIONS(853),
        [anon_sym_from] = ACTIONS(853),
        [anon_sym_print] = ACTIONS(853),
        [anon_sym_return] = ACTIONS(853),
        [anon_sym_del] = ACTIONS(853),
        [sym_pass_statement] = ACTIONS(853),
        [sym_break_statement] = ACTIONS(853),
        [sym_continue_statement] = ACTIONS(853),
        [anon_sym_if] = ACTIONS(853),
        [anon_sym_for] = ACTIONS(853),
        [anon_sym_while] = ACTIONS(853),
        [anon_sym_try] = ACTIONS(853),
        [anon_sym_with] = ACTIONS(853),
        [anon_sym_def] = ACTIONS(853),
        [anon_sym_class] = ACTIONS(853),
        [anon_sym_AT] = ACTIONS(855),
        [anon_sym_not] = ACTIONS(853),
        [anon_sym_LBRACK] = ACTIONS(855),
        [anon_sym_LBRACE] = ACTIONS(855),
        [sym_string] = ACTIONS(855),
        [sym_number] = ACTIONS(853),
        [sym_identifier] = ACTIONS(857),
        [sym_comment] = ACTIONS(83),
        [sym__newline] = ACTIONS(855),
        [sym__dedent] = ACTIONS(855),
    },
    [812] = {
        [ts_builtin_sym_end] = ACTIONS(2081),
        [anon_sym_SEMI] = ACTIONS(2081),
        [anon_sym_import] = ACTIONS(2085),
        [anon_sym_from] = ACTIONS(2085),
        [anon_sym_print] = ACTIONS(2085),
        [anon_sym_return] = ACTIONS(2085),
        [anon_sym_del] = ACTIONS(2085),
        [sym_pass_statement] = ACTIONS(2085),
        [sym_break_statement] = ACTIONS(2085),
        [sym_continue_statement] = ACTIONS(2085),
        [anon_sym_if] = ACTIONS(2085),
        [anon_sym_for] = ACTIONS(2085),
        [anon_sym_while] = ACTIONS(2085),
        [anon_sym_try] = ACTIONS(2085),
        [anon_sym_with] = ACTIONS(2085),
        [anon_sym_def] = ACTIONS(2085),
        [anon_sym_class] = ACTIONS(2085),
        [anon_sym_AT] = ACTIONS(2081),
        [anon_sym_not] = ACTIONS(2085),
        [anon_sym_LBRACK] = ACTIONS(2081),
        [anon_sym_LBRACE] = ACTIONS(2081),
        [sym_string] = ACTIONS(2081),
        [sym_number] = ACTIONS(2085),
        [sym_identifier] = ACTIONS(2089),
        [sym_comment] = ACTIONS(83),
        [sym__newline] = ACTIONS(2081),
        [sym__dedent] = ACTIONS(2081),
    },
    [813] = {
        [ts_builtin_sym_end] = ACTIONS(999),
        [anon_sym_SEMI] = ACTIONS(999),
        [anon_sym_import] = ACTIONS(997),
        [anon_sym_from] = ACTIONS(997),
        [anon_sym_print] = ACTIONS(997),
        [anon_sym_return] = ACTIONS(997),
        [anon_sym_del] = ACTIONS(997),
        [sym_pass_statement] = ACTIONS(997),
        [sym_break_statement] = ACTIONS(997),
        [sym_continue_statement] = ACTIONS(997),
        [anon_sym_if] = ACTIONS(997),
        [anon_sym_else] = ACTIONS(997),
        [anon_sym_for] = ACTIONS(997),
        [anon_sym_while] = ACTIONS(997),
        [anon_sym_try] = ACTIONS(997),
        [anon_sym_except] = ACTIONS(997),
        [anon_sym_finally] = ACTIONS(997),
        [anon_sym_with] = ACTIONS(997),
        [anon_sym_def] = ACTIONS(997),
        [anon_sym_class] = ACTIONS(997),
        [anon_sym_AT] = ACTIONS(999),
        [anon_sym_not] = ACTIONS(997),
        [anon_sym_LBRACK] = ACTIONS(999),
        [anon_sym_LBRACE] = ACTIONS(999),
        [sym_string] = ACTIONS(999),
        [sym_number] = ACTIONS(997),
        [sym_identifier] = ACTIONS(1001),
        [sym_comment] = ACTIONS(83),
        [sym__newline] = ACTIONS(999),
        [sym__dedent] = ACTIONS(999),
    },
    [814] = {
        [ts_builtin_sym_end] = ACTIONS(1005),
        [anon_sym_SEMI] = ACTIONS(1005),
        [anon_sym_import] = ACTIONS(1003),
        [anon_sym_from] = ACTIONS(1003),
        [anon_sym_print] = ACTIONS(1003),
        [anon_sym_return] = ACTIONS(1003),
        [anon_sym_del] = ACTIONS(1003),
        [sym_pass_statement] = ACTIONS(1003),
        [sym_break_statement] = ACTIONS(1003),
        [sym_continue_statement] = ACTIONS(1003),
        [anon_sym_if] = ACTIONS(1003),
        [anon_sym_for] = ACTIONS(1003),
        [anon_sym_while] = ACTIONS(1003),
        [anon_sym_try] = ACTIONS(1003),
        [anon_sym_with] = ACTIONS(1003),
        [anon_sym_def] = ACTIONS(1003),
        [anon_sym_class] = ACTIONS(1003),
        [anon_sym_AT] = ACTIONS(1005),
        [anon_sym_not] = ACTIONS(1003),
        [anon_sym_LBRACK] = ACTIONS(1005),
        [anon_sym_LBRACE] = ACTIONS(1005),
        [sym_string] = ACTIONS(1005),
        [sym_number] = ACTIONS(1003),
        [sym_identifier] = ACTIONS(1007),
        [sym_comment] = ACTIONS(83),
        [sym__newline] = ACTIONS(1005),
        [sym__dedent] = ACTIONS(1005),
    },
    [815] = {
        [anon_sym_COLON] = ACTIONS(2093),
        [sym_comment] = ACTIONS(83),
    },
    [816] = {
        [anon_sym_COLON] = ACTIONS(2098),
        [sym_comment] = ACTIONS(83),
    },
    [817] = {
        [sym_dictionary_splat_parameter] = STATE(818),
        [anon_sym_STAR] = ACTIONS(899),
        [sym_comment] = ACTIONS(83),
    },
    [818] = {
        [anon_sym_RPAREN] = ACTIONS(2101),
        [sym_comment] = ACTIONS(83),
    },
    [819] = {
        [anon_sym_COLON] = ACTIONS(2103),
        [sym_comment] = ACTIONS(83),
    },
    [820] = {
        [anon_sym_RPAREN] = ACTIONS(2106),
        [anon_sym_STAR] = ACTIONS(2108),
        [sym_identifier] = ACTIONS(2111),
        [sym_comment] = ACTIONS(83),
    },
    [821] = {
        [anon_sym_COLON] = ACTIONS(2114),
        [sym_comment] = ACTIONS(83),
    },
    [822] = {
        [sym__simple_statement] = STATE(742),
        [sym_import_statement] = STATE(7),
        [sym_import_from_statement] = STATE(7),
        [sym_print_statement] = STATE(7),
        [sym_expression_statement] = STATE(7),
        [sym_return_statement] = STATE(7),
        [sym_delete_statement] = STATE(7),
        [sym__suite] = STATE(823),
        [sym__expression] = STATE(26),
        [sym_binary_operator] = STATE(19),
        [sym_unary_operator] = STATE(19),
        [sym_subscript] = STATE(19),
        [sym_call] = STATE(19),
        [sym_list] = STATE(19),
        [sym_list_comprehension] = STATE(19),
        [sym_dictionary] = STATE(19),
        [sym_dictionary_comprehension] = STATE(19),
        [sym_set] = STATE(19),
        [sym_set_comprehension] = STATE(19),
        [anon_sym_import] = ACTIONS(93),
        [anon_sym_from] = ACTIONS(95),
        [anon_sym_print] = ACTIONS(97),
        [anon_sym_return] = ACTIONS(99),
        [anon_sym_del] = ACTIONS(101),
        [sym_pass_statement] = ACTIONS(103),
        [sym_break_statement] = ACTIONS(103),
        [sym_continue_statement] = ACTIONS(103),
        [anon_sym_not] = ACTIONS(121),
        [anon_sym_LBRACK] = ACTIONS(123),
        [anon_sym_LBRACE] = ACTIONS(125),
        [sym_string] = ACTIONS(127),
        [sym_number] = ACTIONS(129),
        [sym_identifier] = ACTIONS(131),
        [sym_comment] = ACTIONS(83),
        [sym__indent] = ACTIONS(1398),
    },
    [823] = {
        [ts_builtin_sym_end] = ACTIONS(871),
        [anon_sym_SEMI] = ACTIONS(871),
        [anon_sym_import] = ACTIONS(869),
        [anon_sym_from] = ACTIONS(869),
        [anon_sym_print] = ACTIONS(869),
        [anon_sym_return] = ACTIONS(869),
        [anon_sym_del] = ACTIONS(869),
        [sym_pass_statement] = ACTIONS(869),
        [sym_break_statement] = ACTIONS(869),
        [sym_continue_statement] = ACTIONS(869),
        [anon_sym_if] = ACTIONS(869),
        [anon_sym_for] = ACTIONS(869),
        [anon_sym_while] = ACTIONS(869),
        [anon_sym_try] = ACTIONS(869),
        [anon_sym_with] = ACTIONS(869),
        [anon_sym_def] = ACTIONS(869),
        [anon_sym_class] = ACTIONS(869),
        [anon_sym_AT] = ACTIONS(871),
        [anon_sym_not] = ACTIONS(869),
        [anon_sym_LBRACK] = ACTIONS(871),
        [anon_sym_LBRACE] = ACTIONS(871),
        [sym_string] = ACTIONS(871),
        [sym_number] = ACTIONS(869),
        [sym_identifier] = ACTIONS(873),
        [sym_comment] = ACTIONS(83),
        [sym__newline] = ACTIONS(871),
        [sym__dedent] = ACTIONS(871),
    },
    [824] = {
        [sym__simple_statement] = STATE(742),
        [sym_import_statement] = STATE(7),
        [sym_import_from_statement] = STATE(7),
        [sym_print_statement] = STATE(7),
        [sym_expression_statement] = STATE(7),
        [sym_return_statement] = STATE(7),
        [sym_delete_statement] = STATE(7),
        [sym__suite] = STATE(825),
        [sym__expression] = STATE(26),
        [sym_binary_operator] = STATE(19),
        [sym_unary_operator] = STATE(19),
        [sym_subscript] = STATE(19),
        [sym_call] = STATE(19),
        [sym_list] = STATE(19),
        [sym_list_comprehension] = STATE(19),
        [sym_dictionary] = STATE(19),
        [sym_dictionary_comprehension] = STATE(19),
        [sym_set] = STATE(19),
        [sym_set_comprehension] = STATE(19),
        [anon_sym_import] = ACTIONS(93),
        [anon_sym_from] = ACTIONS(95),
        [anon_sym_print] = ACTIONS(97),
        [anon_sym_return] = ACTIONS(99),
        [anon_sym_del] = ACTIONS(101),
        [sym_pass_statement] = ACTIONS(103),
        [sym_break_statement] = ACTIONS(103),
        [sym_continue_statement] = ACTIONS(103),
        [anon_sym_not] = ACTIONS(121),
        [anon_sym_LBRACK] = ACTIONS(123),
        [anon_sym_LBRACE] = ACTIONS(125),
        [sym_string] = ACTIONS(127),
        [sym_number] = ACTIONS(129),
        [sym_identifier] = ACTIONS(131),
        [sym_comment] = ACTIONS(83),
        [sym__indent] = ACTIONS(1398),
    },
    [825] = {
        [ts_builtin_sym_end] = ACTIONS(981),
        [anon_sym_SEMI] = ACTIONS(981),
        [anon_sym_import] = ACTIONS(979),
        [anon_sym_from] = ACTIONS(979),
        [anon_sym_print] = ACTIONS(979),
        [anon_sym_return] = ACTIONS(979),
        [anon_sym_del] = ACTIONS(979),
        [sym_pass_statement] = ACTIONS(979),
        [sym_break_statement] = ACTIONS(979),
        [sym_continue_statement] = ACTIONS(979),
        [anon_sym_if] = ACTIONS(979),
        [anon_sym_for] = ACTIONS(979),
        [anon_sym_while] = ACTIONS(979),
        [anon_sym_try] = ACTIONS(979),
        [anon_sym_with] = ACTIONS(979),
        [anon_sym_def] = ACTIONS(979),
        [anon_sym_class] = ACTIONS(979),
        [anon_sym_AT] = ACTIONS(981),
        [anon_sym_not] = ACTIONS(979),
        [anon_sym_LBRACK] = ACTIONS(981),
        [anon_sym_LBRACE] = ACTIONS(981),
        [sym_string] = ACTIONS(981),
        [sym_number] = ACTIONS(979),
        [sym_identifier] = ACTIONS(983),
        [sym_comment] = ACTIONS(83),
        [sym__newline] = ACTIONS(981),
        [sym__dedent] = ACTIONS(981),
    },
    [826] = {
        [ts_builtin_sym_end] = ACTIONS(1509),
        [anon_sym_SEMI] = ACTIONS(1509),
        [anon_sym_import] = ACTIONS(1512),
        [anon_sym_from] = ACTIONS(1512),
        [anon_sym_print] = ACTIONS(1512),
        [anon_sym_return] = ACTIONS(1512),
        [anon_sym_del] = ACTIONS(1512),
        [sym_pass_statement] = ACTIONS(1512),
        [sym_break_statement] = ACTIONS(1512),
        [sym_continue_statement] = ACTIONS(1512),
        [anon_sym_if] = ACTIONS(1512),
        [anon_sym_elif] = ACTIONS(815),
        [anon_sym_else] = ACTIONS(815),
        [anon_sym_for] = ACTIONS(1512),
        [anon_sym_while] = ACTIONS(1512),
        [anon_sym_try] = ACTIONS(1512),
        [anon_sym_except] = ACTIONS(815),
        [anon_sym_finally] = ACTIONS(815),
        [anon_sym_with] = ACTIONS(1512),
        [anon_sym_def] = ACTIONS(1512),
        [anon_sym_class] = ACTIONS(1512),
        [anon_sym_AT] = ACTIONS(1509),
        [anon_sym_not] = ACTIONS(1512),
        [anon_sym_LBRACK] = ACTIONS(1509),
        [anon_sym_LBRACE] = ACTIONS(1509),
        [sym_string] = ACTIONS(1509),
        [sym_number] = ACTIONS(1512),
        [sym_identifier] = ACTIONS(1525),
        [sym_comment] = ACTIONS(83),
        [sym__newline] = ACTIONS(1509),
        [sym__dedent] = ACTIONS(1509),
    },
    [827] = {
        [sym_default_parameter] = STATE(428),
        [sym_list_splat_parameter] = STATE(429),
        [sym_dictionary_splat_parameter] = STATE(430),
        [sym_expression_list] = STATE(831),
        [sym__expression] = STATE(415),
        [sym_binary_operator] = STATE(45),
        [sym_unary_operator] = STATE(45),
        [sym_subscript] = STATE(45),
        [sym_call] = STATE(45),
        [sym_list] = STATE(45),
        [sym_list_comprehension] = STATE(45),
        [sym_dictionary] = STATE(45),
        [sym_dictionary_comprehension] = STATE(45),
        [sym_set] = STATE(45),
        [sym_set_comprehension] = STATE(45),
        [aux_sym_parameters_repeat1] = STATE(431),
        [anon_sym_RPAREN] = ACTIONS(861),
        [anon_sym_STAR] = ACTIONS(863),
        [anon_sym_not] = ACTIONS(249),
        [anon_sym_LBRACK] = ACTIONS(145),
        [anon_sym_LBRACE] = ACTIONS(147),
        [sym_string] = ACTIONS(149),
        [sym_number] = ACTIONS(151),
        [sym_identifier] = ACTIONS(2117),
        [sym_comment] = ACTIONS(83),
    },
    [828] = {
        [sym__simple_statement] = STATE(742),
        [sym_import_statement] = STATE(7),
        [sym_import_from_statement] = STATE(7),
        [sym_print_statement] = STATE(7),
        [sym_expression_statement] = STATE(7),
        [sym_return_statement] = STATE(7),
        [sym_delete_statement] = STATE(7),
        [sym__suite] = STATE(829),
        [sym__expression] = STATE(26),
        [sym_binary_operator] = STATE(19),
        [sym_unary_operator] = STATE(19),
        [sym_subscript] = STATE(19),
        [sym_call] = STATE(19),
        [sym_list] = STATE(19),
        [sym_list_comprehension] = STATE(19),
        [sym_dictionary] = STATE(19),
        [sym_dictionary_comprehension] = STATE(19),
        [sym_set] = STATE(19),
        [sym_set_comprehension] = STATE(19),
        [anon_sym_import] = ACTIONS(93),
        [anon_sym_from] = ACTIONS(95),
        [anon_sym_print] = ACTIONS(97),
        [anon_sym_return] = ACTIONS(99),
        [anon_sym_del] = ACTIONS(101),
        [sym_pass_statement] = ACTIONS(103),
        [sym_break_statement] = ACTIONS(103),
        [sym_continue_statement] = ACTIONS(103),
        [anon_sym_not] = ACTIONS(121),
        [anon_sym_LBRACK] = ACTIONS(123),
        [anon_sym_LBRACE] = ACTIONS(125),
        [sym_string] = ACTIONS(127),
        [sym_number] = ACTIONS(129),
        [sym_identifier] = ACTIONS(131),
        [sym_comment] = ACTIONS(83),
        [sym__indent] = ACTIONS(1398),
    },
    [829] = {
        [ts_builtin_sym_end] = ACTIONS(807),
        [anon_sym_SEMI] = ACTIONS(807),
        [anon_sym_import] = ACTIONS(809),
        [anon_sym_from] = ACTIONS(809),
        [anon_sym_print] = ACTIONS(809),
        [anon_sym_return] = ACTIONS(809),
        [anon_sym_del] = ACTIONS(809),
        [sym_pass_statement] = ACTIONS(809),
        [sym_break_statement] = ACTIONS(809),
        [sym_continue_statement] = ACTIONS(809),
        [anon_sym_if] = ACTIONS(809),
        [anon_sym_for] = ACTIONS(809),
        [anon_sym_while] = ACTIONS(809),
        [anon_sym_try] = ACTIONS(809),
        [anon_sym_with] = ACTIONS(809),
        [anon_sym_def] = ACTIONS(809),
        [anon_sym_class] = ACTIONS(809),
        [anon_sym_AT] = ACTIONS(807),
        [anon_sym_not] = ACTIONS(809),
        [anon_sym_LBRACK] = ACTIONS(807),
        [anon_sym_LBRACE] = ACTIONS(807),
        [sym_string] = ACTIONS(807),
        [sym_number] = ACTIONS(809),
        [sym_identifier] = ACTIONS(811),
        [sym_comment] = ACTIONS(83),
        [sym__newline] = ACTIONS(807),
        [sym__dedent] = ACTIONS(807),
    },
    [830] = {
        [anon_sym_LPAREN] = ACTIONS(173),
        [anon_sym_RPAREN] = ACTIONS(2119),
        [anon_sym_COMMA] = ACTIONS(2122),
        [anon_sym_STAR] = ACTIONS(175),
        [anon_sym_EQ] = ACTIONS(885),
        [anon_sym_PLUS] = ACTIONS(173),
        [anon_sym_DASH] = ACTIONS(173),
        [anon_sym_SLASH] = ACTIONS(173),
        [anon_sym_STAR_STAR] = ACTIONS(173),
        [anon_sym_PIPE] = ACTIONS(173),
        [anon_sym_AMP] = ACTIONS(173),
        [anon_sym_CARET] = ACTIONS(173),
        [anon_sym_LT_LT] = ACTIONS(173),
        [anon_sym_GT_GT] = ACTIONS(173),
        [anon_sym_and] = ACTIONS(173),
        [anon_sym_or] = ACTIONS(173),
        [anon_sym_LBRACK] = ACTIONS(173),
        [sym_comment] = ACTIONS(83),
    },
    [831] = {
        [anon_sym_RPAREN] = ACTIONS(1706),
        [sym_comment] = ACTIONS(83),
    },
    [832] = {
        [aux_sym_print_statement_repeat1] = STATE(353),
        [aux_sym_subscript_repeat1] = STATE(57),
        [anon_sym_LPAREN] = ACTIONS(265),
        [anon_sym_COMMA] = ACTIONS(2125),
        [anon_sym_STAR] = ACTIONS(589),
        [anon_sym_for] = ACTIONS(733),
        [anon_sym_PLUS] = ACTIONS(593),
        [anon_sym_DASH] = ACTIONS(593),
        [anon_sym_SLASH] = ACTIONS(595),
        [anon_sym_STAR_STAR] = ACTIONS(597),
        [anon_sym_PIPE] = ACTIONS(599),
        [anon_sym_AMP] = ACTIONS(601),
        [anon_sym_CARET] = ACTIONS(603),
        [anon_sym_LT_LT] = ACTIONS(593),
        [anon_sym_GT_GT] = ACTIONS(593),
        [anon_sym_and] = ACTIONS(601),
        [anon_sym_or] = ACTIONS(599),
        [anon_sym_LBRACK] = ACTIONS(281),
        [anon_sym_RBRACK] = ACTIONS(2127),
        [sym_comment] = ACTIONS(83),
    },
    [833] = {
        [sym__expression] = STATE(835),
        [sym_binary_operator] = STATE(45),
        [sym_unary_operator] = STATE(45),
        [sym_subscript] = STATE(45),
        [sym_call] = STATE(45),
        [sym_list] = STATE(45),
        [sym_list_comprehension] = STATE(45),
        [sym_dictionary] = STATE(45),
        [sym_dictionary_comprehension] = STATE(45),
        [sym_set] = STATE(45),
        [sym_set_comprehension] = STATE(45),
        [anon_sym_not] = ACTIONS(253),
        [anon_sym_LBRACK] = ACTIONS(145),
        [anon_sym_DOT_DOT_DOT] = ACTIONS(283),
        [anon_sym_RBRACK] = ACTIONS(1955),
        [anon_sym_LBRACE] = ACTIONS(147),
        [sym_string] = ACTIONS(149),
        [sym_number] = ACTIONS(151),
        [sym_identifier] = ACTIONS(153),
        [sym_comment] = ACTIONS(83),
    },
    [834] = {
        [anon_sym_LPAREN] = ACTIONS(2129),
        [anon_sym_RPAREN] = ACTIONS(2129),
        [anon_sym_COMMA] = ACTIONS(2129),
        [anon_sym_as] = ACTIONS(2129),
        [anon_sym_STAR] = ACTIONS(2132),
        [anon_sym_COLON] = ACTIONS(2129),
        [anon_sym_for] = ACTIONS(2129),
        [anon_sym_in] = ACTIONS(2129),
        [anon_sym_PLUS] = ACTIONS(2129),
        [anon_sym_DASH] = ACTIONS(2129),
        [anon_sym_SLASH] = ACTIONS(2129),
        [anon_sym_STAR_STAR] = ACTIONS(2129),
        [anon_sym_PIPE] = ACTIONS(2129),
        [anon_sym_AMP] = ACTIONS(2129),
        [anon_sym_CARET] = ACTIONS(2129),
        [anon_sym_LT_LT] = ACTIONS(2129),
        [anon_sym_GT_GT] = ACTIONS(2129),
        [anon_sym_and] = ACTIONS(2129),
        [anon_sym_or] = ACTIONS(2129),
        [anon_sym_LBRACK] = ACTIONS(2129),
        [anon_sym_RBRACK] = ACTIONS(2129),
        [anon_sym_RBRACE] = ACTIONS(2129),
        [sym_comment] = ACTIONS(83),
        [sym__newline] = ACTIONS(2129),
    },
    [835] = {
        [anon_sym_LPAREN] = ACTIONS(265),
        [anon_sym_COMMA] = ACTIONS(2070),
        [anon_sym_STAR] = ACTIONS(267),
        [anon_sym_PLUS] = ACTIONS(269),
        [anon_sym_DASH] = ACTIONS(269),
        [anon_sym_SLASH] = ACTIONS(271),
        [anon_sym_STAR_STAR] = ACTIONS(273),
        [anon_sym_PIPE] = ACTIONS(275),
        [anon_sym_AMP] = ACTIONS(277),
        [anon_sym_CARET] = ACTIONS(279),
        [anon_sym_LT_LT] = ACTIONS(269),
        [anon_sym_GT_GT] = ACTIONS(269),
        [anon_sym_and] = ACTIONS(277),
        [anon_sym_or] = ACTIONS(275),
        [anon_sym_LBRACK] = ACTIONS(281),
        [anon_sym_RBRACK] = ACTIONS(2070),
        [sym_comment] = ACTIONS(83),
    },
    [836] = {
        [anon_sym_LPAREN] = ACTIONS(1908),
        [anon_sym_RPAREN] = ACTIONS(649),
        [anon_sym_COMMA] = ACTIONS(649),
        [anon_sym_as] = ACTIONS(649),
        [anon_sym_STAR] = ACTIONS(2135),
        [anon_sym_COLON] = ACTIONS(649),
        [anon_sym_for] = ACTIONS(649),
        [anon_sym_in] = ACTIONS(649),
        [anon_sym_PLUS] = ACTIONS(2138),
        [anon_sym_DASH] = ACTIONS(2138),
        [anon_sym_SLASH] = ACTIONS(2138),
        [anon_sym_STAR_STAR] = ACTIONS(2138),
        [anon_sym_PIPE] = ACTIONS(2138),
        [anon_sym_AMP] = ACTIONS(2138),
        [anon_sym_CARET] = ACTIONS(2138),
        [anon_sym_LT_LT] = ACTIONS(2138),
        [anon_sym_GT_GT] = ACTIONS(2138),
        [anon_sym_and] = ACTIONS(2138),
        [anon_sym_or] = ACTIONS(2138),
        [anon_sym_LBRACK] = ACTIONS(1917),
        [anon_sym_RBRACK] = ACTIONS(649),
        [anon_sym_RBRACE] = ACTIONS(649),
        [sym_comment] = ACTIONS(83),
        [sym__newline] = ACTIONS(649),
    },
    [837] = {
        [anon_sym_LPAREN] = ACTIONS(1896),
        [anon_sym_RPAREN] = ACTIONS(2141),
        [anon_sym_COMMA] = ACTIONS(321),
        [anon_sym_as] = ACTIONS(321),
        [anon_sym_STAR] = ACTIONS(1977),
        [anon_sym_COLON] = ACTIONS(321),
        [anon_sym_for] = ACTIONS(321),
        [anon_sym_in] = ACTIONS(321),
        [anon_sym_PLUS] = ACTIONS(1980),
        [anon_sym_DASH] = ACTIONS(1980),
        [anon_sym_SLASH] = ACTIONS(1980),
        [anon_sym_STAR_STAR] = ACTIONS(1980),
        [anon_sym_PIPE] = ACTIONS(1980),
        [anon_sym_AMP] = ACTIONS(1980),
        [anon_sym_CARET] = ACTIONS(1980),
        [anon_sym_LT_LT] = ACTIONS(1980),
        [anon_sym_GT_GT] = ACTIONS(1980),
        [anon_sym_and] = ACTIONS(1980),
        [anon_sym_or] = ACTIONS(1980),
        [anon_sym_LBRACK] = ACTIONS(1905),
        [anon_sym_RBRACK] = ACTIONS(321),
        [anon_sym_RBRACE] = ACTIONS(321),
        [sym_comment] = ACTIONS(83),
        [sym__newline] = ACTIONS(321),
    },
    [838] = {
        [anon_sym_LPAREN] = ACTIONS(2144),
        [anon_sym_COLON] = ACTIONS(2146),
        [sym_comment] = ACTIONS(83),
    },
    [839] = {
        [sym_expression_list] = STATE(831),
        [sym__expression] = STATE(415),
        [sym_binary_operator] = STATE(45),
        [sym_unary_operator] = STATE(45),
        [sym_subscript] = STATE(45),
        [sym_call] = STATE(45),
        [sym_list] = STATE(45),
        [sym_list_comprehension] = STATE(45),
        [sym_dictionary] = STATE(45),
        [sym_dictionary_comprehension] = STATE(45),
        [sym_set] = STATE(45),
        [sym_set_comprehension] = STATE(45),
        [anon_sym_not] = ACTIONS(249),
        [anon_sym_LBRACK] = ACTIONS(145),
        [anon_sym_LBRACE] = ACTIONS(147),
        [sym_string] = ACTIONS(149),
        [sym_number] = ACTIONS(151),
        [sym_identifier] = ACTIONS(153),
        [sym_comment] = ACTIONS(83),
    },
    [840] = {
        [anon_sym_LPAREN] = ACTIONS(265),
        [anon_sym_RPAREN] = ACTIONS(2148),
        [anon_sym_COMMA] = ACTIONS(2148),
        [anon_sym_STAR] = ACTIONS(333),
        [anon_sym_PLUS] = ACTIONS(335),
        [anon_sym_DASH] = ACTIONS(335),
        [anon_sym_SLASH] = ACTIONS(337),
        [anon_sym_STAR_STAR] = ACTIONS(339),
        [anon_sym_PIPE] = ACTIONS(341),
        [anon_sym_AMP] = ACTIONS(343),
        [anon_sym_CARET] = ACTIONS(345),
        [anon_sym_LT_LT] = ACTIONS(335),
        [anon_sym_GT_GT] = ACTIONS(335),
        [anon_sym_and] = ACTIONS(343),
        [anon_sym_or] = ACTIONS(341),
        [anon_sym_LBRACK] = ACTIONS(281),
        [sym_comment] = ACTIONS(83),
    },
    [841] = {
        [sym_parameters] = STATE(716),
        [anon_sym_LPAREN] = ACTIONS(859),
        [sym_comment] = ACTIONS(83),
    },
    [842] = {
        [aux_sym_with_statement_repeat1] = STATE(733),
        [anon_sym_COMMA] = ACTIONS(927),
        [anon_sym_COLON] = ACTIONS(2151),
        [sym_comment] = ACTIONS(83),
    },
    [843] = {
        [sym__simple_statement] = STATE(742),
        [sym_import_statement] = STATE(7),
        [sym_import_from_statement] = STATE(7),
        [sym_print_statement] = STATE(7),
        [sym_expression_statement] = STATE(7),
        [sym_return_statement] = STATE(7),
        [sym_delete_statement] = STATE(7),
        [sym__suite] = STATE(844),
        [sym__expression] = STATE(26),
        [sym_binary_operator] = STATE(19),
        [sym_unary_operator] = STATE(19),
        [sym_subscript] = STATE(19),
        [sym_call] = STATE(19),
        [sym_list] = STATE(19),
        [sym_list_comprehension] = STATE(19),
        [sym_dictionary] = STATE(19),
        [sym_dictionary_comprehension] = STATE(19),
        [sym_set] = STATE(19),
        [sym_set_comprehension] = STATE(19),
        [anon_sym_import] = ACTIONS(93),
        [anon_sym_from] = ACTIONS(95),
        [anon_sym_print] = ACTIONS(97),
        [anon_sym_return] = ACTIONS(99),
        [anon_sym_del] = ACTIONS(101),
        [sym_pass_statement] = ACTIONS(103),
        [sym_break_statement] = ACTIONS(103),
        [sym_continue_statement] = ACTIONS(103),
        [anon_sym_not] = ACTIONS(121),
        [anon_sym_LBRACK] = ACTIONS(123),
        [anon_sym_LBRACE] = ACTIONS(125),
        [sym_string] = ACTIONS(127),
        [sym_number] = ACTIONS(129),
        [sym_identifier] = ACTIONS(131),
        [sym_comment] = ACTIONS(83),
        [sym__indent] = ACTIONS(1398),
    },
    [844] = {
        [ts_builtin_sym_end] = ACTIONS(1043),
        [anon_sym_SEMI] = ACTIONS(1043),
        [anon_sym_import] = ACTIONS(1041),
        [anon_sym_from] = ACTIONS(1041),
        [anon_sym_print] = ACTIONS(1041),
        [anon_sym_return] = ACTIONS(1041),
        [anon_sym_del] = ACTIONS(1041),
        [sym_pass_statement] = ACTIONS(1041),
        [sym_break_statement] = ACTIONS(1041),
        [sym_continue_statement] = ACTIONS(1041),
        [anon_sym_if] = ACTIONS(1041),
        [anon_sym_for] = ACTIONS(1041),
        [anon_sym_while] = ACTIONS(1041),
        [anon_sym_try] = ACTIONS(1041),
        [anon_sym_with] = ACTIONS(1041),
        [anon_sym_def] = ACTIONS(1041),
        [anon_sym_class] = ACTIONS(1041),
        [anon_sym_AT] = ACTIONS(1043),
        [anon_sym_not] = ACTIONS(1041),
        [anon_sym_LBRACK] = ACTIONS(1043),
        [anon_sym_LBRACE] = ACTIONS(1043),
        [sym_string] = ACTIONS(1043),
        [sym_number] = ACTIONS(1041),
        [sym_identifier] = ACTIONS(1045),
        [sym_comment] = ACTIONS(83),
        [sym__newline] = ACTIONS(1043),
        [sym__dedent] = ACTIONS(1043),
    },
    [845] = {
        [anon_sym_LPAREN] = ACTIONS(265),
        [anon_sym_COMMA] = ACTIONS(2153),
        [anon_sym_as] = ACTIONS(2153),
        [anon_sym_STAR] = ACTIONS(935),
        [anon_sym_COLON] = ACTIONS(2155),
        [anon_sym_PLUS] = ACTIONS(937),
        [anon_sym_DASH] = ACTIONS(937),
        [anon_sym_SLASH] = ACTIONS(939),
        [anon_sym_STAR_STAR] = ACTIONS(941),
        [anon_sym_PIPE] = ACTIONS(943),
        [anon_sym_AMP] = ACTIONS(945),
        [anon_sym_CARET] = ACTIONS(947),
        [anon_sym_LT_LT] = ACTIONS(937),
        [anon_sym_GT_GT] = ACTIONS(937),
        [anon_sym_and] = ACTIONS(945),
        [anon_sym_or] = ACTIONS(943),
        [anon_sym_LBRACK] = ACTIONS(281),
        [sym_comment] = ACTIONS(83),
    },
    [846] = {
        [sym__expression] = STATE(849),
        [sym_binary_operator] = STATE(45),
        [sym_unary_operator] = STATE(45),
        [sym_subscript] = STATE(45),
        [sym_call] = STATE(45),
        [sym_list] = STATE(45),
        [sym_list_comprehension] = STATE(45),
        [sym_dictionary] = STATE(45),
        [sym_dictionary_comprehension] = STATE(45),
        [sym_set] = STATE(45),
        [sym_set_comprehension] = STATE(45),
        [anon_sym_not] = ACTIONS(143),
        [anon_sym_LBRACK] = ACTIONS(145),
        [anon_sym_LBRACE] = ACTIONS(147),
        [sym_string] = ACTIONS(149),
        [sym_number] = ACTIONS(151),
        [sym_identifier] = ACTIONS(153),
        [sym_comment] = ACTIONS(83),
    },
    [847] = {
        [sym__simple_statement] = STATE(742),
        [sym_import_statement] = STATE(7),
        [sym_import_from_statement] = STATE(7),
        [sym_print_statement] = STATE(7),
        [sym_expression_statement] = STATE(7),
        [sym_return_statement] = STATE(7),
        [sym_delete_statement] = STATE(7),
        [sym__suite] = STATE(848),
        [sym__expression] = STATE(26),
        [sym_binary_operator] = STATE(19),
        [sym_unary_operator] = STATE(19),
        [sym_subscript] = STATE(19),
        [sym_call] = STATE(19),
        [sym_list] = STATE(19),
        [sym_list_comprehension] = STATE(19),
        [sym_dictionary] = STATE(19),
        [sym_dictionary_comprehension] = STATE(19),
        [sym_set] = STATE(19),
        [sym_set_comprehension] = STATE(19),
        [anon_sym_import] = ACTIONS(93),
        [anon_sym_from] = ACTIONS(95),
        [anon_sym_print] = ACTIONS(97),
        [anon_sym_return] = ACTIONS(99),
        [anon_sym_del] = ACTIONS(101),
        [sym_pass_statement] = ACTIONS(103),
        [sym_break_statement] = ACTIONS(103),
        [sym_continue_statement] = ACTIONS(103),
        [anon_sym_not] = ACTIONS(121),
        [anon_sym_LBRACK] = ACTIONS(123),
        [anon_sym_LBRACE] = ACTIONS(125),
        [sym_string] = ACTIONS(127),
        [sym_number] = ACTIONS(129),
        [sym_identifier] = ACTIONS(131),
        [sym_comment] = ACTIONS(83),
        [sym__indent] = ACTIONS(1398),
    },
    [848] = {
        [ts_builtin_sym_end] = ACTIONS(1053),
        [anon_sym_SEMI] = ACTIONS(1053),
        [anon_sym_import] = ACTIONS(1051),
        [anon_sym_from] = ACTIONS(1051),
        [anon_sym_print] = ACTIONS(1051),
        [anon_sym_return] = ACTIONS(1051),
        [anon_sym_del] = ACTIONS(1051),
        [sym_pass_statement] = ACTIONS(1051),
        [sym_break_statement] = ACTIONS(1051),
        [sym_continue_statement] = ACTIONS(1051),
        [anon_sym_if] = ACTIONS(1051),
        [anon_sym_else] = ACTIONS(1051),
        [anon_sym_for] = ACTIONS(1051),
        [anon_sym_while] = ACTIONS(1051),
        [anon_sym_try] = ACTIONS(1051),
        [anon_sym_except] = ACTIONS(1051),
        [anon_sym_finally] = ACTIONS(1051),
        [anon_sym_with] = ACTIONS(1051),
        [anon_sym_def] = ACTIONS(1051),
        [anon_sym_class] = ACTIONS(1051),
        [anon_sym_AT] = ACTIONS(1053),
        [anon_sym_not] = ACTIONS(1051),
        [anon_sym_LBRACK] = ACTIONS(1053),
        [anon_sym_LBRACE] = ACTIONS(1053),
        [sym_string] = ACTIONS(1053),
        [sym_number] = ACTIONS(1051),
        [sym_identifier] = ACTIONS(1055),
        [sym_comment] = ACTIONS(83),
        [sym__newline] = ACTIONS(1053),
        [sym__dedent] = ACTIONS(1053),
    },
    [849] = {
        [anon_sym_LPAREN] = ACTIONS(265),
        [anon_sym_STAR] = ACTIONS(453),
        [anon_sym_COLON] = ACTIONS(2157),
        [anon_sym_PLUS] = ACTIONS(457),
        [anon_sym_DASH] = ACTIONS(457),
        [anon_sym_SLASH] = ACTIONS(459),
        [anon_sym_STAR_STAR] = ACTIONS(461),
        [anon_sym_PIPE] = ACTIONS(463),
        [anon_sym_AMP] = ACTIONS(465),
        [anon_sym_CARET] = ACTIONS(467),
        [anon_sym_LT_LT] = ACTIONS(457),
        [anon_sym_GT_GT] = ACTIONS(457),
        [anon_sym_and] = ACTIONS(465),
        [anon_sym_or] = ACTIONS(463),
        [anon_sym_LBRACK] = ACTIONS(281),
        [sym_comment] = ACTIONS(83),
    },
    [850] = {
        [sym__simple_statement] = STATE(491),
        [sym_import_statement] = STATE(7),
        [sym_import_from_statement] = STATE(7),
        [sym_print_statement] = STATE(7),
        [sym_expression_statement] = STATE(7),
        [sym_return_statement] = STATE(7),
        [sym_delete_statement] = STATE(7),
        [sym__suite] = STATE(851),
        [sym__expression] = STATE(26),
        [sym_binary_operator] = STATE(19),
        [sym_unary_operator] = STATE(19),
        [sym_subscript] = STATE(19),
        [sym_call] = STATE(19),
        [sym_list] = STATE(19),
        [sym_list_comprehension] = STATE(19),
        [sym_dictionary] = STATE(19),
        [sym_dictionary_comprehension] = STATE(19),
        [sym_set] = STATE(19),
        [sym_set_comprehension] = STATE(19),
        [anon_sym_import] = ACTIONS(93),
        [anon_sym_from] = ACTIONS(95),
        [anon_sym_print] = ACTIONS(97),
        [anon_sym_return] = ACTIONS(99),
        [anon_sym_del] = ACTIONS(101),
        [sym_pass_statement] = ACTIONS(103),
        [sym_break_statement] = ACTIONS(103),
        [sym_continue_statement] = ACTIONS(103),
        [anon_sym_not] = ACTIONS(121),
        [anon_sym_LBRACK] = ACTIONS(123),
        [anon_sym_LBRACE] = ACTIONS(125),
        [sym_string] = ACTIONS(127),
        [sym_number] = ACTIONS(129),
        [sym_identifier] = ACTIONS(131),
        [sym_comment] = ACTIONS(83),
        [sym__indent] = ACTIONS(987),
    },
    [851] = {
        [sym_except_clause] = STATE(813),
        [sym_finally_clause] = STATE(814),
        [aux_sym_try_statement_repeat1] = STATE(732),
        [anon_sym_except] = ACTIONS(2159),
        [anon_sym_finally] = ACTIONS(2161),
        [sym_comment] = ACTIONS(83),
    },
    [852] = {
        [anon_sym_LPAREN] = ACTIONS(265),
        [anon_sym_STAR] = ACTIONS(453),
        [anon_sym_COLON] = ACTIONS(2163),
        [anon_sym_PLUS] = ACTIONS(457),
        [anon_sym_DASH] = ACTIONS(457),
        [anon_sym_SLASH] = ACTIONS(459),
        [anon_sym_STAR_STAR] = ACTIONS(461),
        [anon_sym_PIPE] = ACTIONS(463),
        [anon_sym_AMP] = ACTIONS(465),
        [anon_sym_CARET] = ACTIONS(467),
        [anon_sym_LT_LT] = ACTIONS(457),
        [anon_sym_GT_GT] = ACTIONS(457),
        [anon_sym_and] = ACTIONS(465),
        [anon_sym_or] = ACTIONS(463),
        [anon_sym_LBRACK] = ACTIONS(281),
        [sym_comment] = ACTIONS(83),
    },
    [853] = {
        [sym__simple_statement] = STATE(742),
        [sym_import_statement] = STATE(7),
        [sym_import_from_statement] = STATE(7),
        [sym_print_statement] = STATE(7),
        [sym_expression_statement] = STATE(7),
        [sym_return_statement] = STATE(7),
        [sym_delete_statement] = STATE(7),
        [sym__suite] = STATE(854),
        [sym__expression] = STATE(26),
        [sym_binary_operator] = STATE(19),
        [sym_unary_operator] = STATE(19),
        [sym_subscript] = STATE(19),
        [sym_call] = STATE(19),
        [sym_list] = STATE(19),
        [sym_list_comprehension] = STATE(19),
        [sym_dictionary] = STATE(19),
        [sym_dictionary_comprehension] = STATE(19),
        [sym_set] = STATE(19),
        [sym_set_comprehension] = STATE(19),
        [anon_sym_import] = ACTIONS(93),
        [anon_sym_from] = ACTIONS(95),
        [anon_sym_print] = ACTIONS(97),
        [anon_sym_return] = ACTIONS(99),
        [anon_sym_del] = ACTIONS(101),
        [sym_pass_statement] = ACTIONS(103),
        [sym_break_statement] = ACTIONS(103),
        [sym_continue_statement] = ACTIONS(103),
        [anon_sym_not] = ACTIONS(121),
        [anon_sym_LBRACK] = ACTIONS(123),
        [anon_sym_LBRACE] = ACTIONS(125),
        [sym_string] = ACTIONS(127),
        [sym_number] = ACTIONS(129),
        [sym_identifier] = ACTIONS(131),
        [sym_comment] = ACTIONS(83),
        [sym__indent] = ACTIONS(1398),
    },
    [854] = {
        [sym_else_clause] = STATE(855),
        [ts_builtin_sym_end] = ACTIONS(1071),
        [anon_sym_SEMI] = ACTIONS(1071),
        [anon_sym_import] = ACTIONS(1069),
        [anon_sym_from] = ACTIONS(1069),
        [anon_sym_print] = ACTIONS(1069),
        [anon_sym_return] = ACTIONS(1069),
        [anon_sym_del] = ACTIONS(1069),
        [sym_pass_statement] = ACTIONS(1069),
        [sym_break_statement] = ACTIONS(1069),
        [sym_continue_statement] = ACTIONS(1069),
        [anon_sym_if] = ACTIONS(1069),
        [anon_sym_else] = ACTIONS(1862),
        [anon_sym_for] = ACTIONS(1069),
        [anon_sym_while] = ACTIONS(1069),
        [anon_sym_try] = ACTIONS(1069),
        [anon_sym_with] = ACTIONS(1069),
        [anon_sym_def] = ACTIONS(1069),
        [anon_sym_class] = ACTIONS(1069),
        [anon_sym_AT] = ACTIONS(1071),
        [anon_sym_not] = ACTIONS(1069),
        [anon_sym_LBRACK] = ACTIONS(1071),
        [anon_sym_LBRACE] = ACTIONS(1071),
        [sym_string] = ACTIONS(1071),
        [sym_number] = ACTIONS(1069),
        [sym_identifier] = ACTIONS(1073),
        [sym_comment] = ACTIONS(83),
        [sym__newline] = ACTIONS(1071),
        [sym__dedent] = ACTIONS(1071),
    },
    [855] = {
        [ts_builtin_sym_end] = ACTIONS(1077),
        [anon_sym_SEMI] = ACTIONS(1077),
        [anon_sym_import] = ACTIONS(1075),
        [anon_sym_from] = ACTIONS(1075),
        [anon_sym_print] = ACTIONS(1075),
        [anon_sym_return] = ACTIONS(1075),
        [anon_sym_del] = ACTIONS(1075),
        [sym_pass_statement] = ACTIONS(1075),
        [sym_break_statement] = ACTIONS(1075),
        [sym_continue_statement] = ACTIONS(1075),
        [anon_sym_if] = ACTIONS(1075),
        [anon_sym_for] = ACTIONS(1075),
        [anon_sym_while] = ACTIONS(1075),
        [anon_sym_try] = ACTIONS(1075),
        [anon_sym_with] = ACTIONS(1075),
        [anon_sym_def] = ACTIONS(1075),
        [anon_sym_class] = ACTIONS(1075),
        [anon_sym_AT] = ACTIONS(1077),
        [anon_sym_not] = ACTIONS(1075),
        [anon_sym_LBRACK] = ACTIONS(1077),
        [anon_sym_LBRACE] = ACTIONS(1077),
        [sym_string] = ACTIONS(1077),
        [sym_number] = ACTIONS(1075),
        [sym_identifier] = ACTIONS(1079),
        [sym_comment] = ACTIONS(83),
        [sym__newline] = ACTIONS(1077),
        [sym__dedent] = ACTIONS(1077),
    },
    [856] = {
        [sym__expression] = STATE(861),
        [sym_binary_operator] = STATE(45),
        [sym_unary_operator] = STATE(45),
        [sym_subscript] = STATE(45),
        [sym_call] = STATE(45),
        [sym_list] = STATE(45),
        [sym_list_comprehension] = STATE(45),
        [sym_dictionary] = STATE(45),
        [sym_dictionary_comprehension] = STATE(45),
        [sym_set] = STATE(45),
        [sym_set_comprehension] = STATE(45),
        [anon_sym_not] = ACTIONS(1402),
        [anon_sym_LBRACK] = ACTIONS(145),
        [anon_sym_LBRACE] = ACTIONS(147),
        [sym_string] = ACTIONS(149),
        [sym_number] = ACTIONS(151),
        [sym_identifier] = ACTIONS(153),
        [sym_comment] = ACTIONS(83),
    },
    [857] = {
        [aux_sym_print_statement_repeat1] = STATE(526),
        [anon_sym_LPAREN] = ACTIONS(265),
        [anon_sym_COMMA] = ACTIONS(1085),
        [anon_sym_STAR] = ACTIONS(2165),
        [anon_sym_COLON] = ACTIONS(495),
        [anon_sym_PLUS] = ACTIONS(2167),
        [anon_sym_DASH] = ACTIONS(2167),
        [anon_sym_SLASH] = ACTIONS(2167),
        [anon_sym_STAR_STAR] = ACTIONS(2167),
        [anon_sym_PIPE] = ACTIONS(2167),
        [anon_sym_AMP] = ACTIONS(2167),
        [anon_sym_CARET] = ACTIONS(2167),
        [anon_sym_LT_LT] = ACTIONS(2167),
        [anon_sym_GT_GT] = ACTIONS(2167),
        [anon_sym_and] = ACTIONS(2167),
        [anon_sym_or] = ACTIONS(2167),
        [anon_sym_LBRACK] = ACTIONS(281),
        [anon_sym_RBRACK] = ACTIONS(745),
        [anon_sym_RBRACE] = ACTIONS(2169),
        [sym_comment] = ACTIONS(83),
    },
    [858] = {
        [sym__expression] = STATE(860),
        [sym_binary_operator] = STATE(45),
        [sym_unary_operator] = STATE(45),
        [sym_subscript] = STATE(45),
        [sym_call] = STATE(45),
        [sym_list] = STATE(45),
        [sym_list_comprehension] = STATE(45),
        [sym_dictionary] = STATE(45),
        [sym_dictionary_comprehension] = STATE(45),
        [sym_set] = STATE(45),
        [sym_set_comprehension] = STATE(45),
        [anon_sym_not] = ACTIONS(1402),
        [anon_sym_LBRACK] = ACTIONS(145),
        [anon_sym_LBRACE] = ACTIONS(147),
        [sym_string] = ACTIONS(149),
        [sym_number] = ACTIONS(151),
        [sym_identifier] = ACTIONS(153),
        [sym_comment] = ACTIONS(83),
    },
    [859] = {
        [anon_sym_LPAREN] = ACTIONS(2171),
        [anon_sym_RPAREN] = ACTIONS(2171),
        [anon_sym_COMMA] = ACTIONS(2171),
        [anon_sym_as] = ACTIONS(2171),
        [anon_sym_STAR] = ACTIONS(2174),
        [anon_sym_COLON] = ACTIONS(2171),
        [anon_sym_for] = ACTIONS(2171),
        [anon_sym_in] = ACTIONS(2171),
        [anon_sym_PLUS] = ACTIONS(2171),
        [anon_sym_DASH] = ACTIONS(2171),
        [anon_sym_SLASH] = ACTIONS(2171),
        [anon_sym_STAR_STAR] = ACTIONS(2171),
        [anon_sym_PIPE] = ACTIONS(2171),
        [anon_sym_AMP] = ACTIONS(2171),
        [anon_sym_CARET] = ACTIONS(2171),
        [anon_sym_LT_LT] = ACTIONS(2171),
        [anon_sym_GT_GT] = ACTIONS(2171),
        [anon_sym_and] = ACTIONS(2171),
        [anon_sym_or] = ACTIONS(2171),
        [anon_sym_LBRACK] = ACTIONS(2171),
        [anon_sym_RBRACK] = ACTIONS(2171),
        [anon_sym_RBRACE] = ACTIONS(2171),
        [sym_comment] = ACTIONS(83),
        [sym__newline] = ACTIONS(2171),
    },
    [860] = {
        [anon_sym_LPAREN] = ACTIONS(1991),
        [anon_sym_COMMA] = ACTIONS(321),
        [anon_sym_STAR] = ACTIONS(2177),
        [anon_sym_COLON] = ACTIONS(321),
        [anon_sym_PLUS] = ACTIONS(2180),
        [anon_sym_DASH] = ACTIONS(2180),
        [anon_sym_SLASH] = ACTIONS(2180),
        [anon_sym_STAR_STAR] = ACTIONS(2180),
        [anon_sym_PIPE] = ACTIONS(2180),
        [anon_sym_AMP] = ACTIONS(2180),
        [anon_sym_CARET] = ACTIONS(2180),
        [anon_sym_LT_LT] = ACTIONS(2180),
        [anon_sym_GT_GT] = ACTIONS(2180),
        [anon_sym_and] = ACTIONS(2180),
        [anon_sym_or] = ACTIONS(2180),
        [anon_sym_LBRACK] = ACTIONS(2000),
        [anon_sym_RBRACK] = ACTIONS(321),
        [anon_sym_RBRACE] = ACTIONS(321),
        [sym_comment] = ACTIONS(83),
    },
    [861] = {
        [anon_sym_LPAREN] = ACTIONS(2003),
        [anon_sym_COMMA] = ACTIONS(649),
        [anon_sym_STAR] = ACTIONS(2183),
        [anon_sym_COLON] = ACTIONS(649),
        [anon_sym_PLUS] = ACTIONS(2186),
        [anon_sym_DASH] = ACTIONS(2186),
        [anon_sym_SLASH] = ACTIONS(2186),
        [anon_sym_STAR_STAR] = ACTIONS(2186),
        [anon_sym_PIPE] = ACTIONS(2186),
        [anon_sym_AMP] = ACTIONS(2186),
        [anon_sym_CARET] = ACTIONS(2186),
        [anon_sym_LT_LT] = ACTIONS(2186),
        [anon_sym_GT_GT] = ACTIONS(2186),
        [anon_sym_and] = ACTIONS(2186),
        [anon_sym_or] = ACTIONS(2186),
        [anon_sym_LBRACK] = ACTIONS(2012),
        [anon_sym_RBRACK] = ACTIONS(649),
        [anon_sym_RBRACE] = ACTIONS(649),
        [sym_comment] = ACTIONS(83),
    },
    [862] = {
        [anon_sym_in] = ACTIONS(1710),
        [sym_comment] = ACTIONS(83),
    },
    [863] = {
        [anon_sym_LPAREN] = ACTIONS(265),
        [anon_sym_STAR] = ACTIONS(453),
        [anon_sym_COLON] = ACTIONS(2189),
        [anon_sym_PLUS] = ACTIONS(457),
        [anon_sym_DASH] = ACTIONS(457),
        [anon_sym_SLASH] = ACTIONS(459),
        [anon_sym_STAR_STAR] = ACTIONS(461),
        [anon_sym_PIPE] = ACTIONS(463),
        [anon_sym_AMP] = ACTIONS(465),
        [anon_sym_CARET] = ACTIONS(467),
        [anon_sym_LT_LT] = ACTIONS(457),
        [anon_sym_GT_GT] = ACTIONS(457),
        [anon_sym_and] = ACTIONS(465),
        [anon_sym_or] = ACTIONS(463),
        [anon_sym_LBRACK] = ACTIONS(281),
        [sym_comment] = ACTIONS(83),
    },
    [864] = {
        [sym__simple_statement] = STATE(742),
        [sym_import_statement] = STATE(7),
        [sym_import_from_statement] = STATE(7),
        [sym_print_statement] = STATE(7),
        [sym_expression_statement] = STATE(7),
        [sym_return_statement] = STATE(7),
        [sym_delete_statement] = STATE(7),
        [sym__suite] = STATE(865),
        [sym__expression] = STATE(26),
        [sym_binary_operator] = STATE(19),
        [sym_unary_operator] = STATE(19),
        [sym_subscript] = STATE(19),
        [sym_call] = STATE(19),
        [sym_list] = STATE(19),
        [sym_list_comprehension] = STATE(19),
        [sym_dictionary] = STATE(19),
        [sym_dictionary_comprehension] = STATE(19),
        [sym_set] = STATE(19),
        [sym_set_comprehension] = STATE(19),
        [anon_sym_import] = ACTIONS(93),
        [anon_sym_from] = ACTIONS(95),
        [anon_sym_print] = ACTIONS(97),
        [anon_sym_return] = ACTIONS(99),
        [anon_sym_del] = ACTIONS(101),
        [sym_pass_statement] = ACTIONS(103),
        [sym_break_statement] = ACTIONS(103),
        [sym_continue_statement] = ACTIONS(103),
        [anon_sym_not] = ACTIONS(121),
        [anon_sym_LBRACK] = ACTIONS(123),
        [anon_sym_LBRACE] = ACTIONS(125),
        [sym_string] = ACTIONS(127),
        [sym_number] = ACTIONS(129),
        [sym_identifier] = ACTIONS(131),
        [sym_comment] = ACTIONS(83),
        [sym__indent] = ACTIONS(1398),
    },
    [865] = {
        [ts_builtin_sym_end] = ACTIONS(1139),
        [anon_sym_SEMI] = ACTIONS(1139),
        [anon_sym_import] = ACTIONS(1137),
        [anon_sym_from] = ACTIONS(1137),
        [anon_sym_print] = ACTIONS(1137),
        [anon_sym_return] = ACTIONS(1137),
        [anon_sym_del] = ACTIONS(1137),
        [sym_pass_statement] = ACTIONS(1137),
        [sym_break_statement] = ACTIONS(1137),
        [sym_continue_statement] = ACTIONS(1137),
        [anon_sym_if] = ACTIONS(1137),
        [anon_sym_elif] = ACTIONS(1137),
        [anon_sym_else] = ACTIONS(1137),
        [anon_sym_for] = ACTIONS(1137),
        [anon_sym_while] = ACTIONS(1137),
        [anon_sym_try] = ACTIONS(1137),
        [anon_sym_with] = ACTIONS(1137),
        [anon_sym_def] = ACTIONS(1137),
        [anon_sym_class] = ACTIONS(1137),
        [anon_sym_AT] = ACTIONS(1139),
        [anon_sym_not] = ACTIONS(1137),
        [anon_sym_LBRACK] = ACTIONS(1139),
        [anon_sym_LBRACE] = ACTIONS(1139),
        [sym_string] = ACTIONS(1139),
        [sym_number] = ACTIONS(1137),
        [sym_identifier] = ACTIONS(1141),
        [sym_comment] = ACTIONS(83),
        [sym__newline] = ACTIONS(1139),
        [sym__dedent] = ACTIONS(1139),
    },
    [866] = {
        [anon_sym_LPAREN] = ACTIONS(265),
        [anon_sym_STAR] = ACTIONS(453),
        [anon_sym_COLON] = ACTIONS(2191),
        [anon_sym_PLUS] = ACTIONS(457),
        [anon_sym_DASH] = ACTIONS(457),
        [anon_sym_SLASH] = ACTIONS(459),
        [anon_sym_STAR_STAR] = ACTIONS(461),
        [anon_sym_PIPE] = ACTIONS(463),
        [anon_sym_AMP] = ACTIONS(465),
        [anon_sym_CARET] = ACTIONS(467),
        [anon_sym_LT_LT] = ACTIONS(457),
        [anon_sym_GT_GT] = ACTIONS(457),
        [anon_sym_and] = ACTIONS(465),
        [anon_sym_or] = ACTIONS(463),
        [anon_sym_LBRACK] = ACTIONS(281),
        [sym_comment] = ACTIONS(83),
    },
    [867] = {
        [sym__simple_statement] = STATE(742),
        [sym_import_statement] = STATE(7),
        [sym_import_from_statement] = STATE(7),
        [sym_print_statement] = STATE(7),
        [sym_expression_statement] = STATE(7),
        [sym_return_statement] = STATE(7),
        [sym_delete_statement] = STATE(7),
        [sym__suite] = STATE(868),
        [sym__expression] = STATE(26),
        [sym_binary_operator] = STATE(19),
        [sym_unary_operator] = STATE(19),
        [sym_subscript] = STATE(19),
        [sym_call] = STATE(19),
        [sym_list] = STATE(19),
        [sym_list_comprehension] = STATE(19),
        [sym_dictionary] = STATE(19),
        [sym_dictionary_comprehension] = STATE(19),
        [sym_set] = STATE(19),
        [sym_set_comprehension] = STATE(19),
        [anon_sym_import] = ACTIONS(93),
        [anon_sym_from] = ACTIONS(95),
        [anon_sym_print] = ACTIONS(97),
        [anon_sym_return] = ACTIONS(99),
        [anon_sym_del] = ACTIONS(101),
        [sym_pass_statement] = ACTIONS(103),
        [sym_break_statement] = ACTIONS(103),
        [sym_continue_statement] = ACTIONS(103),
        [anon_sym_not] = ACTIONS(121),
        [anon_sym_LBRACK] = ACTIONS(123),
        [anon_sym_LBRACE] = ACTIONS(125),
        [sym_string] = ACTIONS(127),
        [sym_number] = ACTIONS(129),
        [sym_identifier] = ACTIONS(131),
        [sym_comment] = ACTIONS(83),
        [sym__indent] = ACTIONS(1398),
    },
    [868] = {
        [sym_elif_clause] = STATE(797),
        [sym_else_clause] = STATE(869),
        [aux_sym_if_statement_repeat1] = STATE(731),
        [ts_builtin_sym_end] = ACTIONS(1107),
        [anon_sym_SEMI] = ACTIONS(1107),
        [anon_sym_import] = ACTIONS(1103),
        [anon_sym_from] = ACTIONS(1103),
        [anon_sym_print] = ACTIONS(1103),
        [anon_sym_return] = ACTIONS(1103),
        [anon_sym_del] = ACTIONS(1103),
        [sym_pass_statement] = ACTIONS(1103),
        [sym_break_statement] = ACTIONS(1103),
        [sym_continue_statement] = ACTIONS(1103),
        [anon_sym_if] = ACTIONS(1103),
        [anon_sym_elif] = ACTIONS(1860),
        [anon_sym_else] = ACTIONS(1862),
        [anon_sym_for] = ACTIONS(1103),
        [anon_sym_while] = ACTIONS(1103),
        [anon_sym_try] = ACTIONS(1103),
        [anon_sym_with] = ACTIONS(1103),
        [anon_sym_def] = ACTIONS(1103),
        [anon_sym_class] = ACTIONS(1103),
        [anon_sym_AT] = ACTIONS(1107),
        [anon_sym_not] = ACTIONS(1103),
        [anon_sym_LBRACK] = ACTIONS(1107),
        [anon_sym_LBRACE] = ACTIONS(1107),
        [sym_string] = ACTIONS(1107),
        [sym_number] = ACTIONS(1103),
        [sym_identifier] = ACTIONS(1109),
        [sym_comment] = ACTIONS(83),
        [sym__newline] = ACTIONS(1107),
        [sym__dedent] = ACTIONS(1107),
    },
    [869] = {
        [ts_builtin_sym_end] = ACTIONS(1119),
        [anon_sym_SEMI] = ACTIONS(1119),
        [anon_sym_import] = ACTIONS(1117),
        [anon_sym_from] = ACTIONS(1117),
        [anon_sym_print] = ACTIONS(1117),
        [anon_sym_return] = ACTIONS(1117),
        [anon_sym_del] = ACTIONS(1117),
        [sym_pass_statement] = ACTIONS(1117),
        [sym_break_statement] = ACTIONS(1117),
        [sym_continue_statement] = ACTIONS(1117),
        [anon_sym_if] = ACTIONS(1117),
        [anon_sym_for] = ACTIONS(1117),
        [anon_sym_while] = ACTIONS(1117),
        [anon_sym_try] = ACTIONS(1117),
        [anon_sym_with] = ACTIONS(1117),
        [anon_sym_def] = ACTIONS(1117),
        [anon_sym_class] = ACTIONS(1117),
        [anon_sym_AT] = ACTIONS(1119),
        [anon_sym_not] = ACTIONS(1117),
        [anon_sym_LBRACK] = ACTIONS(1119),
        [anon_sym_LBRACE] = ACTIONS(1119),
        [sym_string] = ACTIONS(1119),
        [sym_number] = ACTIONS(1117),
        [sym_identifier] = ACTIONS(1121),
        [sym_comment] = ACTIONS(83),
        [sym__newline] = ACTIONS(1119),
        [sym__dedent] = ACTIONS(1119),
    },
    [870] = {
        [anon_sym_LPAREN] = ACTIONS(173),
        [anon_sym_RPAREN] = ACTIONS(2193),
        [anon_sym_COMMA] = ACTIONS(2197),
        [anon_sym_as] = ACTIONS(173),
        [anon_sym_STAR] = ACTIONS(175),
        [anon_sym_COLON] = ACTIONS(173),
        [anon_sym_for] = ACTIONS(173),
        [anon_sym_in] = ACTIONS(173),
        [anon_sym_PLUS] = ACTIONS(173),
        [anon_sym_DASH] = ACTIONS(173),
        [anon_sym_SLASH] = ACTIONS(173),
        [anon_sym_STAR_STAR] = ACTIONS(173),
        [anon_sym_PIPE] = ACTIONS(173),
        [anon_sym_AMP] = ACTIONS(173),
        [anon_sym_CARET] = ACTIONS(173),
        [anon_sym_LT_LT] = ACTIONS(173),
        [anon_sym_GT_GT] = ACTIONS(173),
        [anon_sym_and] = ACTIONS(173),
        [anon_sym_or] = ACTIONS(173),
        [anon_sym_LBRACK] = ACTIONS(173),
        [anon_sym_RBRACK] = ACTIONS(173),
        [anon_sym_RBRACE] = ACTIONS(173),
        [sym_comment] = ACTIONS(83),
        [sym__newline] = ACTIONS(173),
    },
    [871] = {
        [anon_sym_LPAREN] = ACTIONS(1896),
        [anon_sym_RPAREN] = ACTIONS(2200),
        [anon_sym_COMMA] = ACTIONS(2200),
        [anon_sym_as] = ACTIONS(321),
        [anon_sym_STAR] = ACTIONS(1977),
        [anon_sym_COLON] = ACTIONS(321),
        [anon_sym_for] = ACTIONS(321),
        [anon_sym_in] = ACTIONS(321),
        [anon_sym_PLUS] = ACTIONS(1980),
        [anon_sym_DASH] = ACTIONS(1980),
        [anon_sym_SLASH] = ACTIONS(1980),
        [anon_sym_STAR_STAR] = ACTIONS(1980),
        [anon_sym_PIPE] = ACTIONS(1980),
        [anon_sym_AMP] = ACTIONS(1980),
        [anon_sym_CARET] = ACTIONS(1980),
        [anon_sym_LT_LT] = ACTIONS(1980),
        [anon_sym_GT_GT] = ACTIONS(1980),
        [anon_sym_and] = ACTIONS(1980),
        [anon_sym_or] = ACTIONS(1980),
        [anon_sym_LBRACK] = ACTIONS(1905),
        [anon_sym_RBRACK] = ACTIONS(321),
        [anon_sym_RBRACE] = ACTIONS(321),
        [sym_comment] = ACTIONS(83),
        [sym__newline] = ACTIONS(321),
    },
    [872] = {
        [anon_sym_LPAREN] = ACTIONS(173),
        [anon_sym_RPAREN] = ACTIONS(1261),
        [anon_sym_COMMA] = ACTIONS(2203),
        [anon_sym_STAR] = ACTIONS(175),
        [anon_sym_COLON] = ACTIONS(173),
        [anon_sym_PLUS] = ACTIONS(173),
        [anon_sym_DASH] = ACTIONS(173),
        [anon_sym_SLASH] = ACTIONS(173),
        [anon_sym_STAR_STAR] = ACTIONS(173),
        [anon_sym_PIPE] = ACTIONS(173),
        [anon_sym_AMP] = ACTIONS(173),
        [anon_sym_CARET] = ACTIONS(173),
        [anon_sym_LT_LT] = ACTIONS(173),
        [anon_sym_GT_GT] = ACTIONS(173),
        [anon_sym_and] = ACTIONS(173),
        [anon_sym_or] = ACTIONS(173),
        [anon_sym_LBRACK] = ACTIONS(173),
        [sym_comment] = ACTIONS(83),
        [sym__newline] = ACTIONS(1261),
    },
    [873] = {
        [anon_sym_LPAREN] = ACTIONS(1876),
        [anon_sym_RPAREN] = ACTIONS(1876),
        [anon_sym_COMMA] = ACTIONS(1876),
        [anon_sym_as] = ACTIONS(1876),
        [anon_sym_STAR] = ACTIONS(1879),
        [anon_sym_COLON] = ACTIONS(2206),
        [anon_sym_for] = ACTIONS(1876),
        [anon_sym_in] = ACTIONS(1876),
        [anon_sym_PLUS] = ACTIONS(1876),
        [anon_sym_DASH] = ACTIONS(1876),
        [anon_sym_SLASH] = ACTIONS(1876),
        [anon_sym_STAR_STAR] = ACTIONS(1876),
        [anon_sym_PIPE] = ACTIONS(1876),
        [anon_sym_AMP] = ACTIONS(1876),
        [anon_sym_CARET] = ACTIONS(1876),
        [anon_sym_LT_LT] = ACTIONS(1876),
        [anon_sym_GT_GT] = ACTIONS(1876),
        [anon_sym_and] = ACTIONS(1876),
        [anon_sym_or] = ACTIONS(1876),
        [anon_sym_LBRACK] = ACTIONS(1876),
        [anon_sym_RBRACK] = ACTIONS(1876),
        [anon_sym_RBRACE] = ACTIONS(1876),
        [sym_comment] = ACTIONS(83),
        [sym__newline] = ACTIONS(1876),
    },
    [874] = {
        [sym__expression] = STATE(895),
        [sym_binary_operator] = STATE(19),
        [sym_unary_operator] = STATE(19),
        [sym_subscript] = STATE(19),
        [sym_call] = STATE(19),
        [sym_list] = STATE(19),
        [sym_list_comprehension] = STATE(19),
        [sym_dictionary] = STATE(19),
        [sym_dictionary_comprehension] = STATE(19),
        [sym_set] = STATE(19),
        [sym_set_comprehension] = STATE(19),
        [anon_sym_not] = ACTIONS(2211),
        [anon_sym_LBRACK] = ACTIONS(123),
        [anon_sym_LBRACE] = ACTIONS(125),
        [sym_string] = ACTIONS(127),
        [sym_number] = ACTIONS(129),
        [sym_identifier] = ACTIONS(131),
        [sym_comment] = ACTIONS(83),
    },
    [875] = {
        [anon_sym_COMMA] = ACTIONS(2213),
        [anon_sym_RBRACK] = ACTIONS(2213),
        [sym_comment] = ACTIONS(83),
    },
    [876] = {
        [anon_sym_LPAREN] = ACTIONS(2216),
        [anon_sym_RPAREN] = ACTIONS(2216),
        [anon_sym_COMMA] = ACTIONS(2216),
        [anon_sym_as] = ACTIONS(2216),
        [anon_sym_STAR] = ACTIONS(2221),
        [anon_sym_COLON] = ACTIONS(2216),
        [anon_sym_for] = ACTIONS(2216),
        [anon_sym_in] = ACTIONS(2216),
        [anon_sym_PLUS] = ACTIONS(2216),
        [anon_sym_DASH] = ACTIONS(2216),
        [anon_sym_SLASH] = ACTIONS(2216),
        [anon_sym_STAR_STAR] = ACTIONS(2216),
        [anon_sym_PIPE] = ACTIONS(2216),
        [anon_sym_AMP] = ACTIONS(2216),
        [anon_sym_CARET] = ACTIONS(2216),
        [anon_sym_LT_LT] = ACTIONS(2216),
        [anon_sym_GT_GT] = ACTIONS(2216),
        [anon_sym_and] = ACTIONS(2216),
        [anon_sym_or] = ACTIONS(2216),
        [anon_sym_LBRACK] = ACTIONS(2216),
        [anon_sym_RBRACK] = ACTIONS(2216),
        [anon_sym_RBRACE] = ACTIONS(2216),
        [sym_comment] = ACTIONS(83),
        [sym__newline] = ACTIONS(2216),
    },
    [877] = {
        [anon_sym_LPAREN] = ACTIONS(2226),
        [anon_sym_RPAREN] = ACTIONS(2226),
        [anon_sym_COMMA] = ACTIONS(2226),
        [anon_sym_as] = ACTIONS(2226),
        [anon_sym_STAR] = ACTIONS(2231),
        [anon_sym_COLON] = ACTIONS(2226),
        [anon_sym_for] = ACTIONS(2226),
        [anon_sym_in] = ACTIONS(2226),
        [anon_sym_PLUS] = ACTIONS(2226),
        [anon_sym_DASH] = ACTIONS(2226),
        [anon_sym_SLASH] = ACTIONS(2226),
        [anon_sym_STAR_STAR] = ACTIONS(2226),
        [anon_sym_PIPE] = ACTIONS(2226),
        [anon_sym_AMP] = ACTIONS(2226),
        [anon_sym_CARET] = ACTIONS(2226),
        [anon_sym_LT_LT] = ACTIONS(2226),
        [anon_sym_GT_GT] = ACTIONS(2226),
        [anon_sym_and] = ACTIONS(2226),
        [anon_sym_or] = ACTIONS(2226),
        [anon_sym_LBRACK] = ACTIONS(2226),
        [anon_sym_RBRACK] = ACTIONS(2226),
        [anon_sym_RBRACE] = ACTIONS(2226),
        [sym_comment] = ACTIONS(83),
        [sym__newline] = ACTIONS(2226),
    },
    [878] = {
        [aux_sym_dotted_name_repeat1] = STATE(377),
        [anon_sym_DOT] = ACTIONS(747),
        [anon_sym_LPAREN] = ACTIONS(173),
        [anon_sym_RPAREN] = ACTIONS(2236),
        [anon_sym_COMMA] = ACTIONS(2236),
        [anon_sym_as] = ACTIONS(2236),
        [anon_sym_STAR] = ACTIONS(175),
        [anon_sym_COLON] = ACTIONS(173),
        [anon_sym_in] = ACTIONS(173),
        [anon_sym_EQ] = ACTIONS(327),
        [anon_sym_PLUS] = ACTIONS(173),
        [anon_sym_DASH] = ACTIONS(173),
        [anon_sym_SLASH] = ACTIONS(173),
        [anon_sym_STAR_STAR] = ACTIONS(173),
        [anon_sym_PIPE] = ACTIONS(173),
        [anon_sym_AMP] = ACTIONS(173),
        [anon_sym_CARET] = ACTIONS(173),
        [anon_sym_LT_LT] = ACTIONS(173),
        [anon_sym_GT_GT] = ACTIONS(173),
        [anon_sym_and] = ACTIONS(173),
        [anon_sym_or] = ACTIONS(173),
        [anon_sym_LBRACK] = ACTIONS(173),
        [anon_sym_RBRACK] = ACTIONS(173),
        [anon_sym_RBRACE] = ACTIONS(173),
        [sym_comment] = ACTIONS(83),
        [sym__newline] = ACTIONS(2236),
    },
    [879] = {
        [anon_sym_RPAREN] = ACTIONS(2239),
        [anon_sym_COMMA] = ACTIONS(2239),
        [sym_comment] = ACTIONS(83),
        [sym__newline] = ACTIONS(2239),
    },
    [880] = {
        [anon_sym_COMMA] = ACTIONS(2242),
        [anon_sym_COLON] = ACTIONS(2242),
        [sym_comment] = ACTIONS(83),
    },
    [881] = {
        [anon_sym_RPAREN] = ACTIONS(2239),
        [anon_sym_COMMA] = ACTIONS(2239),
        [anon_sym_as] = ACTIONS(1249),
        [sym_comment] = ACTIONS(83),
        [sym__newline] = ACTIONS(2239),
    },
    [882] = {
        [anon_sym_LPAREN] = ACTIONS(201),
        [anon_sym_RPAREN] = ACTIONS(2245),
        [anon_sym_COMMA] = ACTIONS(2250),
        [anon_sym_as] = ACTIONS(933),
        [anon_sym_STAR] = ACTIONS(2258),
        [anon_sym_COLON] = ACTIONS(2260),
        [anon_sym_in] = ACTIONS(2265),
        [anon_sym_PLUS] = ACTIONS(2268),
        [anon_sym_DASH] = ACTIONS(2268),
        [anon_sym_SLASH] = ACTIONS(2268),
        [anon_sym_STAR_STAR] = ACTIONS(2268),
        [anon_sym_PIPE] = ACTIONS(2268),
        [anon_sym_AMP] = ACTIONS(2268),
        [anon_sym_CARET] = ACTIONS(2268),
        [anon_sym_LT_LT] = ACTIONS(2268),
        [anon_sym_GT_GT] = ACTIONS(2268),
        [anon_sym_and] = ACTIONS(2268),
        [anon_sym_or] = ACTIONS(2268),
        [anon_sym_LBRACK] = ACTIONS(217),
        [anon_sym_RBRACK] = ACTIONS(2270),
        [anon_sym_RBRACE] = ACTIONS(2265),
        [sym_comment] = ACTIONS(83),
        [sym__newline] = ACTIONS(2265),
    },
    [883] = {
        [anon_sym_RPAREN] = ACTIONS(2275),
        [anon_sym_COMMA] = ACTIONS(2275),
        [sym_comment] = ACTIONS(83),
    },
    [884] = {
        [anon_sym_RPAREN] = ACTIONS(2278),
        [sym_comment] = ACTIONS(83),
    },
    [885] = {
        [anon_sym_COMMA] = ACTIONS(2280),
        [anon_sym_RBRACE] = ACTIONS(2280),
        [sym_comment] = ACTIONS(83),
    },
    [886] = {
        [anon_sym_LPAREN] = ACTIONS(2283),
        [anon_sym_RPAREN] = ACTIONS(2283),
        [anon_sym_COMMA] = ACTIONS(2283),
        [anon_sym_as] = ACTIONS(2283),
        [anon_sym_STAR] = ACTIONS(2287),
        [anon_sym_COLON] = ACTIONS(2283),
        [anon_sym_for] = ACTIONS(2283),
        [anon_sym_in] = ACTIONS(2283),
        [anon_sym_PLUS] = ACTIONS(2283),
        [anon_sym_DASH] = ACTIONS(2283),
        [anon_sym_SLASH] = ACTIONS(2283),
        [anon_sym_STAR_STAR] = ACTIONS(2283),
        [anon_sym_PIPE] = ACTIONS(2283),
        [anon_sym_AMP] = ACTIONS(2283),
        [anon_sym_CARET] = ACTIONS(2283),
        [anon_sym_LT_LT] = ACTIONS(2283),
        [anon_sym_GT_GT] = ACTIONS(2283),
        [anon_sym_and] = ACTIONS(2283),
        [anon_sym_or] = ACTIONS(2283),
        [anon_sym_LBRACK] = ACTIONS(2283),
        [anon_sym_RBRACK] = ACTIONS(2283),
        [anon_sym_RBRACE] = ACTIONS(2283),
        [sym_comment] = ACTIONS(83),
        [sym__newline] = ACTIONS(2283),
    },
    [887] = {
        [sym__expression] = STATE(889),
        [sym_binary_operator] = STATE(19),
        [sym_unary_operator] = STATE(19),
        [sym_subscript] = STATE(19),
        [sym_call] = STATE(19),
        [sym_list] = STATE(19),
        [sym_list_comprehension] = STATE(19),
        [sym_dictionary] = STATE(19),
        [sym_dictionary_comprehension] = STATE(19),
        [sym_set] = STATE(19),
        [sym_set_comprehension] = STATE(19),
        [anon_sym_not] = ACTIONS(2211),
        [anon_sym_LBRACK] = ACTIONS(123),
        [anon_sym_LBRACE] = ACTIONS(125),
        [sym_string] = ACTIONS(127),
        [sym_number] = ACTIONS(129),
        [sym_identifier] = ACTIONS(131),
        [sym_comment] = ACTIONS(83),
    },
    [888] = {
        [sym__simple_statement] = STATE(742),
        [sym_import_statement] = STATE(7),
        [sym_import_from_statement] = STATE(7),
        [sym_print_statement] = STATE(7),
        [sym_expression_statement] = STATE(7),
        [sym_return_statement] = STATE(7),
        [sym_delete_statement] = STATE(7),
        [sym__suite] = STATE(802),
        [sym__expression] = STATE(891),
        [sym_binary_operator] = STATE(19),
        [sym_unary_operator] = STATE(19),
        [sym_subscript] = STATE(19),
        [sym_call] = STATE(19),
        [sym_list] = STATE(19),
        [sym_list_comprehension] = STATE(19),
        [sym_dictionary] = STATE(19),
        [sym_dictionary_comprehension] = STATE(19),
        [sym_set] = STATE(19),
        [sym_set_comprehension] = STATE(19),
        [anon_sym_import] = ACTIONS(93),
        [anon_sym_from] = ACTIONS(95),
        [anon_sym_print] = ACTIONS(97),
        [anon_sym_return] = ACTIONS(99),
        [anon_sym_del] = ACTIONS(101),
        [sym_pass_statement] = ACTIONS(103),
        [sym_break_statement] = ACTIONS(103),
        [sym_continue_statement] = ACTIONS(103),
        [anon_sym_not] = ACTIONS(2291),
        [anon_sym_LBRACK] = ACTIONS(123),
        [anon_sym_LBRACE] = ACTIONS(125),
        [sym_string] = ACTIONS(127),
        [sym_number] = ACTIONS(129),
        [sym_identifier] = ACTIONS(131),
        [sym_comment] = ACTIONS(83),
        [sym__indent] = ACTIONS(1398),
    },
    [889] = {
        [anon_sym_LPAREN] = ACTIONS(1896),
        [anon_sym_RPAREN] = ACTIONS(321),
        [anon_sym_COMMA] = ACTIONS(321),
        [anon_sym_as] = ACTIONS(321),
        [anon_sym_STAR] = ACTIONS(2293),
        [anon_sym_COLON] = ACTIONS(321),
        [anon_sym_in] = ACTIONS(321),
        [anon_sym_PLUS] = ACTIONS(2296),
        [anon_sym_DASH] = ACTIONS(2296),
        [anon_sym_SLASH] = ACTIONS(2296),
        [anon_sym_STAR_STAR] = ACTIONS(2296),
        [anon_sym_PIPE] = ACTIONS(2296),
        [anon_sym_AMP] = ACTIONS(2296),
        [anon_sym_CARET] = ACTIONS(2296),
        [anon_sym_LT_LT] = ACTIONS(2296),
        [anon_sym_GT_GT] = ACTIONS(2296),
        [anon_sym_and] = ACTIONS(2296),
        [anon_sym_or] = ACTIONS(2296),
        [anon_sym_LBRACK] = ACTIONS(1905),
        [anon_sym_RBRACK] = ACTIONS(321),
        [anon_sym_RBRACE] = ACTIONS(321),
        [sym_comment] = ACTIONS(83),
        [sym__newline] = ACTIONS(321),
    },
    [890] = {
        [sym__expression] = STATE(894),
        [sym_binary_operator] = STATE(19),
        [sym_unary_operator] = STATE(19),
        [sym_subscript] = STATE(19),
        [sym_call] = STATE(19),
        [sym_list] = STATE(19),
        [sym_list_comprehension] = STATE(19),
        [sym_dictionary] = STATE(19),
        [sym_dictionary_comprehension] = STATE(19),
        [sym_set] = STATE(19),
        [sym_set_comprehension] = STATE(19),
        [anon_sym_not] = ACTIONS(2291),
        [anon_sym_LBRACK] = ACTIONS(123),
        [anon_sym_LBRACE] = ACTIONS(125),
        [sym_string] = ACTIONS(127),
        [sym_number] = ACTIONS(129),
        [sym_identifier] = ACTIONS(131),
        [sym_comment] = ACTIONS(83),
    },
    [891] = {
        [anon_sym_LPAREN] = ACTIONS(201),
        [anon_sym_COMMA] = ACTIONS(473),
        [anon_sym_STAR] = ACTIONS(2299),
        [anon_sym_PLUS] = ACTIONS(2301),
        [anon_sym_DASH] = ACTIONS(2301),
        [anon_sym_SLASH] = ACTIONS(2301),
        [anon_sym_STAR_STAR] = ACTIONS(2301),
        [anon_sym_PIPE] = ACTIONS(2301),
        [anon_sym_AMP] = ACTIONS(2301),
        [anon_sym_CARET] = ACTIONS(2301),
        [anon_sym_LT_LT] = ACTIONS(2301),
        [anon_sym_GT_GT] = ACTIONS(2301),
        [anon_sym_and] = ACTIONS(2301),
        [anon_sym_or] = ACTIONS(2301),
        [anon_sym_LBRACK] = ACTIONS(217),
        [anon_sym_RBRACE] = ACTIONS(473),
        [sym_comment] = ACTIONS(83),
        [sym__newline] = ACTIONS(219),
    },
    [892] = {
        [sym__expression] = STATE(893),
        [sym_binary_operator] = STATE(19),
        [sym_unary_operator] = STATE(19),
        [sym_subscript] = STATE(19),
        [sym_call] = STATE(19),
        [sym_list] = STATE(19),
        [sym_list_comprehension] = STATE(19),
        [sym_dictionary] = STATE(19),
        [sym_dictionary_comprehension] = STATE(19),
        [sym_set] = STATE(19),
        [sym_set_comprehension] = STATE(19),
        [anon_sym_not] = ACTIONS(2291),
        [anon_sym_LBRACK] = ACTIONS(123),
        [anon_sym_LBRACE] = ACTIONS(125),
        [sym_string] = ACTIONS(127),
        [sym_number] = ACTIONS(129),
        [sym_identifier] = ACTIONS(131),
        [sym_comment] = ACTIONS(83),
    },
    [893] = {
        [anon_sym_LPAREN] = ACTIONS(1896),
        [anon_sym_COMMA] = ACTIONS(321),
        [anon_sym_STAR] = ACTIONS(2303),
        [anon_sym_PLUS] = ACTIONS(2306),
        [anon_sym_DASH] = ACTIONS(2306),
        [anon_sym_SLASH] = ACTIONS(2306),
        [anon_sym_STAR_STAR] = ACTIONS(2306),
        [anon_sym_PIPE] = ACTIONS(2306),
        [anon_sym_AMP] = ACTIONS(2306),
        [anon_sym_CARET] = ACTIONS(2306),
        [anon_sym_LT_LT] = ACTIONS(2306),
        [anon_sym_GT_GT] = ACTIONS(2306),
        [anon_sym_and] = ACTIONS(2306),
        [anon_sym_or] = ACTIONS(2306),
        [anon_sym_LBRACK] = ACTIONS(1905),
        [anon_sym_RBRACE] = ACTIONS(321),
        [sym_comment] = ACTIONS(83),
        [sym__newline] = ACTIONS(321),
    },
    [894] = {
        [anon_sym_LPAREN] = ACTIONS(1908),
        [anon_sym_COMMA] = ACTIONS(649),
        [anon_sym_STAR] = ACTIONS(2309),
        [anon_sym_PLUS] = ACTIONS(2312),
        [anon_sym_DASH] = ACTIONS(2312),
        [anon_sym_SLASH] = ACTIONS(2312),
        [anon_sym_STAR_STAR] = ACTIONS(2312),
        [anon_sym_PIPE] = ACTIONS(2312),
        [anon_sym_AMP] = ACTIONS(2312),
        [anon_sym_CARET] = ACTIONS(2312),
        [anon_sym_LT_LT] = ACTIONS(2312),
        [anon_sym_GT_GT] = ACTIONS(2312),
        [anon_sym_and] = ACTIONS(2312),
        [anon_sym_or] = ACTIONS(2312),
        [anon_sym_LBRACK] = ACTIONS(1917),
        [anon_sym_RBRACE] = ACTIONS(649),
        [sym_comment] = ACTIONS(83),
        [sym__newline] = ACTIONS(649),
    },
    [895] = {
        [anon_sym_LPAREN] = ACTIONS(1908),
        [anon_sym_RPAREN] = ACTIONS(649),
        [anon_sym_COMMA] = ACTIONS(649),
        [anon_sym_as] = ACTIONS(649),
        [anon_sym_STAR] = ACTIONS(2315),
        [anon_sym_COLON] = ACTIONS(649),
        [anon_sym_in] = ACTIONS(649),
        [anon_sym_PLUS] = ACTIONS(2318),
        [anon_sym_DASH] = ACTIONS(2318),
        [anon_sym_SLASH] = ACTIONS(2318),
        [anon_sym_STAR_STAR] = ACTIONS(2318),
        [anon_sym_PIPE] = ACTIONS(2318),
        [anon_sym_AMP] = ACTIONS(2318),
        [anon_sym_CARET] = ACTIONS(2318),
        [anon_sym_LT_LT] = ACTIONS(2318),
        [anon_sym_GT_GT] = ACTIONS(2318),
        [anon_sym_and] = ACTIONS(2318),
        [anon_sym_or] = ACTIONS(2318),
        [anon_sym_LBRACK] = ACTIONS(1917),
        [anon_sym_RBRACK] = ACTIONS(649),
        [anon_sym_RBRACE] = ACTIONS(649),
        [sym_comment] = ACTIONS(83),
        [sym__newline] = ACTIONS(649),
    },
    [896] = {
        [sym__expression] = STATE(290),
        [sym_binary_operator] = STATE(45),
        [sym_unary_operator] = STATE(45),
        [sym_subscript] = STATE(45),
        [sym_call] = STATE(45),
        [sym_list] = STATE(45),
        [sym_list_comprehension] = STATE(45),
        [sym_dictionary] = STATE(45),
        [sym_dictionary_comprehension] = STATE(45),
        [sym_set] = STATE(45),
        [sym_set_comprehension] = STATE(45),
        [anon_sym_STAR] = ACTIONS(877),
        [anon_sym_not] = ACTIONS(249),
        [anon_sym_LBRACK] = ACTIONS(145),
        [anon_sym_LBRACE] = ACTIONS(147),
        [sym_string] = ACTIONS(149),
        [sym_number] = ACTIONS(151),
        [sym_identifier] = ACTIONS(2321),
        [sym_comment] = ACTIONS(83),
    },
    [897] = {
        [aux_sym_dotted_name_repeat1] = STATE(662),
        [anon_sym_DOT] = ACTIONS(1217),
        [anon_sym_LPAREN] = ACTIONS(173),
        [anon_sym_RPAREN] = ACTIONS(2323),
        [anon_sym_COMMA] = ACTIONS(2327),
        [anon_sym_as] = ACTIONS(749),
        [anon_sym_STAR] = ACTIONS(175),
        [anon_sym_EQ] = ACTIONS(1497),
        [anon_sym_PLUS] = ACTIONS(173),
        [anon_sym_DASH] = ACTIONS(173),
        [anon_sym_SLASH] = ACTIONS(173),
        [anon_sym_STAR_STAR] = ACTIONS(173),
        [anon_sym_PIPE] = ACTIONS(173),
        [anon_sym_AMP] = ACTIONS(173),
        [anon_sym_CARET] = ACTIONS(173),
        [anon_sym_LT_LT] = ACTIONS(173),
        [anon_sym_GT_GT] = ACTIONS(173),
        [anon_sym_and] = ACTIONS(173),
        [anon_sym_or] = ACTIONS(173),
        [anon_sym_LBRACK] = ACTIONS(173),
        [sym_comment] = ACTIONS(83),
    },
    [898] = {
        [aux_sym_print_statement_repeat1] = STATE(901),
        [anon_sym_LPAREN] = ACTIONS(265),
        [anon_sym_RPAREN] = ACTIONS(2331),
        [anon_sym_COMMA] = ACTIONS(2334),
        [anon_sym_STAR] = ACTIONS(333),
        [anon_sym_PLUS] = ACTIONS(335),
        [anon_sym_DASH] = ACTIONS(335),
        [anon_sym_SLASH] = ACTIONS(337),
        [anon_sym_STAR_STAR] = ACTIONS(339),
        [anon_sym_PIPE] = ACTIONS(341),
        [anon_sym_AMP] = ACTIONS(343),
        [anon_sym_CARET] = ACTIONS(345),
        [anon_sym_LT_LT] = ACTIONS(335),
        [anon_sym_GT_GT] = ACTIONS(335),
        [anon_sym_and] = ACTIONS(343),
        [anon_sym_or] = ACTIONS(341),
        [anon_sym_LBRACK] = ACTIONS(281),
        [sym_comment] = ACTIONS(83),
    },
    [899] = {
        [anon_sym_LPAREN] = ACTIONS(389),
        [anon_sym_RPAREN] = ACTIONS(389),
        [anon_sym_COMMA] = ACTIONS(389),
        [anon_sym_as] = ACTIONS(389),
        [anon_sym_STAR] = ACTIONS(391),
        [anon_sym_COLON] = ACTIONS(389),
        [anon_sym_for] = ACTIONS(389),
        [anon_sym_in] = ACTIONS(389),
        [anon_sym_PLUS] = ACTIONS(389),
        [anon_sym_DASH] = ACTIONS(389),
        [anon_sym_SLASH] = ACTIONS(389),
        [anon_sym_STAR_STAR] = ACTIONS(389),
        [anon_sym_PIPE] = ACTIONS(389),
        [anon_sym_AMP] = ACTIONS(389),
        [anon_sym_CARET] = ACTIONS(389),
        [anon_sym_LT_LT] = ACTIONS(389),
        [anon_sym_GT_GT] = ACTIONS(389),
        [anon_sym_and] = ACTIONS(389),
        [anon_sym_or] = ACTIONS(389),
        [anon_sym_LBRACK] = ACTIONS(389),
        [anon_sym_RBRACK] = ACTIONS(389),
        [anon_sym_RBRACE] = ACTIONS(389),
        [sym_comment] = ACTIONS(83),
        [sym__newline] = ACTIONS(2336),
    },
    [900] = {
        [sym__expression] = STATE(375),
        [sym_binary_operator] = STATE(45),
        [sym_unary_operator] = STATE(45),
        [sym_subscript] = STATE(45),
        [sym_call] = STATE(45),
        [sym_list] = STATE(45),
        [sym_list_comprehension] = STATE(45),
        [sym_dictionary] = STATE(45),
        [sym_dictionary_comprehension] = STATE(45),
        [sym_set] = STATE(45),
        [sym_set_comprehension] = STATE(45),
        [anon_sym_RPAREN] = ACTIONS(677),
        [anon_sym_STAR] = ACTIONS(395),
        [anon_sym_STAR_STAR] = ACTIONS(397),
        [anon_sym_not] = ACTIONS(2339),
        [anon_sym_LBRACK] = ACTIONS(2342),
        [anon_sym_LBRACE] = ACTIONS(2345),
        [sym_string] = ACTIONS(2348),
        [sym_number] = ACTIONS(2351),
        [sym_identifier] = ACTIONS(2354),
        [sym_comment] = ACTIONS(83),
    },
    [901] = {
        [anon_sym_RPAREN] = ACTIONS(1852),
        [anon_sym_COMMA] = ACTIONS(769),
        [sym_comment] = ACTIONS(83),
    },
    [902] = {
        [anon_sym_LPAREN] = ACTIONS(173),
        [anon_sym_RPAREN] = ACTIONS(2197),
        [anon_sym_COMMA] = ACTIONS(2197),
        [anon_sym_STAR] = ACTIONS(175),
        [anon_sym_PLUS] = ACTIONS(173),
        [anon_sym_DASH] = ACTIONS(173),
        [anon_sym_SLASH] = ACTIONS(173),
        [anon_sym_STAR_STAR] = ACTIONS(173),
        [anon_sym_PIPE] = ACTIONS(173),
        [anon_sym_AMP] = ACTIONS(173),
        [anon_sym_CARET] = ACTIONS(173),
        [anon_sym_LT_LT] = ACTIONS(173),
        [anon_sym_GT_GT] = ACTIONS(173),
        [anon_sym_and] = ACTIONS(173),
        [anon_sym_or] = ACTIONS(173),
        [anon_sym_LBRACK] = ACTIONS(173),
        [sym_comment] = ACTIONS(83),
    },
    [903] = {
        [anon_sym_import] = ACTIONS(2357),
        [anon_sym_DOT] = ACTIONS(2357),
        [anon_sym_LPAREN] = ACTIONS(2357),
        [anon_sym_RPAREN] = ACTIONS(2357),
        [anon_sym_COMMA] = ACTIONS(2357),
        [anon_sym_as] = ACTIONS(2357),
        [sym_comment] = ACTIONS(83),
        [sym__newline] = ACTIONS(2357),
    },
    [904] = {
        [sym_comment] = ACTIONS(83),
        [sym__newline] = ACTIONS(1552),
    },
};

static TSParseActionEntry ts_parse_actions[] = {
    [0] = {.count = 0, .reusable = false, .depends_on_lookahead = false},
    [1] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(0),
    [3] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(31),
    [5] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(671),
    [7] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(3),
    [9] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(672),
    [11] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(673),
    [13] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(674),
    [15] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(675),
    [17] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(676),
    [19] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(677),
    [21] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(4),
    [23] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(5),
    [25] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(6),
    [27] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(7),
    [29] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(678),
    [31] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(679),
    [33] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(680),
    [35] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(681),
    [37] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(682),
    [39] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(683),
    [41] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(684),
    [43] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(685),
    [45] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(686),
    [47] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(687),
    [49] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(688),
    [51] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(689),
    [53] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(690),
    [55] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(691),
    [57] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(15),
    [59] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(692),
    [61] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(693),
    [63] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(692),
    [65] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(694),
    [67] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(695),
    [69] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(696),
    [71] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(697),
    [73] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(18),
    [75] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(698),
    [77] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(19),
    [79] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(19),
    [81] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, RECOVER(699),
    [83] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT_EXTRA(),
    [85] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(700),
    [87] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(701),
    [89] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(702),
    [91] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_module, 0),
    [93] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(2),
    [95] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(3),
    [97] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(4),
    [99] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(5),
    [101] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(6),
    [103] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(7),
    [105] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(8),
    [107] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(9),
    [109] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(10),
    [111] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(11),
    [113] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(12),
    [115] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(13),
    [117] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(14),
    [119] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(15),
    [121] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(16),
    [123] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(17),
    [125] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(18),
    [127] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(19),
    [129] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(19),
    [131] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(19),
    [133] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(362),
    [135] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(626),
    [137] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(627),
    [139] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(604),
    [141] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__simple_statement, 1),
    [143] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(135),
    [145] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(42),
    [147] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(44),
    [149] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(45),
    [151] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(45),
    [153] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(45),
    [155] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(164),
    [157] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(559),
    [159] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(452),
    [161] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(549),
    [163] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(381),
    [165] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(237),
    [167] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(348),
    [169] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(125),
    [171] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(323),
    [173] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__expression, 1),
    [175] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__expression, 1),
    [177] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, ACCEPT_INPUT(),
    [179] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_module_repeat1, 1),
    [181] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_module_repeat1, 1),
    [183] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_module_repeat1, 1),
    [185] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(322),
    [187] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__statement, 1),
    [189] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__statement, 1),
    [191] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__statement, 1),
    [193] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__compound_statement, 1),
    [195] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__compound_statement, 1),
    [197] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__compound_statement, 1),
    [199] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_decorated_definition_repeat1, 1),
    [201] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(33),
    [203] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(34),
    [205] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(35),
    [207] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(34),
    [209] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(36),
    [211] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(37),
    [213] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(38),
    [215] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(39),
    [217] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(40),
    [219] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_expression_statement, 1),
    [221] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_module, 1),
    [223] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(31),
    [225] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(13),
    [227] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(14),
    [229] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_decorated_definition, 2),
    [231] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_decorated_definition, 2),
    [233] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_decorated_definition, 2),
    [235] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_decorated_definition_repeat1, 2),
    [237] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_module, 2),
    [239] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_module_repeat1, 2),
    [241] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_module_repeat1, 2),
    [243] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_module_repeat1, 2),
    [245] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(79),
    [247] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(80),
    [249] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(81),
    [251] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(82),
    [253] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(41),
    [255] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(43),
    [257] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(238),
    [259] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(48),
    [261] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(56),
    [263] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(126),
    [265] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(47),
    [267] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(49),
    [269] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(50),
    [271] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(49),
    [273] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(51),
    [275] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(52),
    [277] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(53),
    [279] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(54),
    [281] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(55),
    [283] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(71),
    [285] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(59),
    [287] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(63),
    [289] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_subscript, 4),
    [291] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_subscript, 4),
    [293] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(58),
    [295] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(60),
    [297] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(61),
    [299] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_subscript, 5),
    [301] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_subscript, 5),
    [303] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_subscript_repeat1, 3),
    [305] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_subscript, 6),
    [307] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_subscript, 6),
    [309] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(65),
    [311] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(66),
    [313] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(69),
    [315] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(68),
    [317] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(70),
    [319] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_subscript_repeat1, 2),
    [321] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE_FRAGILE(sym_binary_operator, 3),
    [323] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE_FRAGILE(sym_binary_operator, 3),
    [325] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(277),
    [327] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(123),
    [329] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(117),
    [331] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(122),
    [333] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(101),
    [335] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(102),
    [337] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(101),
    [339] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(103),
    [341] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(104),
    [343] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(105),
    [345] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(106),
    [347] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(118),
    [349] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(92),
    [351] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(116),
    [353] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(93),
    [355] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_call, 5),
    [357] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_call, 5),
    [359] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(95),
    [361] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(96),
    [363] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_call, 6),
    [365] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_call, 6),
    [367] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_call_repeat2, 3),
    [369] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(100),
    [371] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_call, 8),
    [373] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_call, 8),
    [375] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_call_repeat2, 2),
    [377] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(115),
    [379] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_call, 7),
    [381] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_call, 7),
    [383] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_call_repeat1, 3),
    [385] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_call_repeat1, 3),
    [387] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_call_repeat1, 3),
    [389] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_call, 4),
    [391] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_call, 4),
    [393] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(120),
    [395] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_call_repeat1, 2),
    [397] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_call_repeat1, 2),
    [399] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_call_repeat1, 2),
    [401] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_keyword_argument, 3),
    [403] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_dictionary, 2),
    [405] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_dictionary, 2),
    [407] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(199),
    [409] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(200),
    [411] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(201),
    [413] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(202),
    [415] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(203),
    [417] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(200),
    [419] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(204),
    [421] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(205),
    [423] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(206),
    [425] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(207),
    [427] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(208),
    [429] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(129),
    [431] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(130),
    [433] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(131),
    [435] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(134),
    [437] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_dictionary, 3),
    [439] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_dictionary, 3),
    [441] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(133),
    [443] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(136),
    [445] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_dictionary, 4),
    [447] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_dictionary, 4),
    [449] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_dictionary, 5),
    [451] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_dictionary, 5),
    [453] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(139),
    [455] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(140),
    [457] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(141),
    [459] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(139),
    [461] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(142),
    [463] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(143),
    [465] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(144),
    [467] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(145),
    [469] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_dictionary_repeat1, 3),
    [471] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(151),
    [473] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_pair, 3),
    [475] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(153),
    [477] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(154),
    [479] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(153),
    [481] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(155),
    [483] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(156),
    [485] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(157),
    [487] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(158),
    [489] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(183),
    [491] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(167),
    [493] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(168),
    [495] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_expression_list, 1),
    [497] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(169),
    [499] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(168),
    [501] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(170),
    [503] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(171),
    [505] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(172),
    [507] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(173),
    [509] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(175),
    [511] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_expression_list, 2),
    [513] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_print_statement_repeat1, 3),
    [515] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_print_statement_repeat1, 2),
    [517] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(184),
    [519] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(186),
    [521] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(187),
    [523] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(186),
    [525] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(188),
    [527] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(189),
    [529] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(190),
    [531] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(191),
    [533] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(192),
    [535] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_dictionary_comprehension, 7),
    [537] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_dictionary_comprehension, 7),
    [539] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_dictionary_repeat1, 2),
    [541] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(211),
    [543] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(223),
    [545] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_set, 3),
    [547] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_set, 3),
    [549] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(210),
    [551] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(212),
    [553] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_set, 4),
    [555] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_set, 4),
    [557] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_set, 5),
    [559] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_set, 5),
    [561] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(220),
    [563] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(222),
    [565] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_set_comprehension, 7),
    [567] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_set_comprehension, 7),
    [569] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(225),
    [571] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(226),
    [573] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(225),
    [575] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(227),
    [577] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(228),
    [579] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(229),
    [581] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(230),
    [583] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_list, 2),
    [585] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_list, 2),
    [587] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(240),
    [589] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(241),
    [591] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(242),
    [593] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(243),
    [595] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(241),
    [597] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(244),
    [599] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(245),
    [601] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(246),
    [603] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(247),
    [605] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(248),
    [607] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(251),
    [609] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_list, 3),
    [611] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_list, 3),
    [613] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(250),
    [615] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(252),
    [617] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_list, 4),
    [619] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_list, 4),
    [621] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_list, 5),
    [623] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_list, 5),
    [625] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(260),
    [627] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(261),
    [629] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(263),
    [631] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(264),
    [633] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(263),
    [635] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(265),
    [637] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(266),
    [639] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(267),
    [641] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(268),
    [643] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(269),
    [645] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_list_comprehension, 7),
    [647] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_list_comprehension, 7),
    [649] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE_FRAGILE(sym_unary_operator, 2),
    [651] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE_FRAGILE(sym_unary_operator, 2),
    [653] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_dictionary_splat_argument, 2),
    [655] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(279),
    [657] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(280),
    [659] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(279),
    [661] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(281),
    [663] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(282),
    [665] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(283),
    [667] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(284),
    [669] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_list_splat_argument, 2),
    [671] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(316),
    [673] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(321),
    [675] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(317),
    [677] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(306),
    [679] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(315),
    [681] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(307),
    [683] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(309),
    [685] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(310),
    [687] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(312),
    [689] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(314),
    [691] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(319),
    [693] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__statement, 2),
    [695] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__statement, 2),
    [697] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__statement, 2),
    [699] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(337),
    [701] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(338),
    [703] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(339),
    [705] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(326),
    [707] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(327),
    [709] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(328),
    [711] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(331),
    [713] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(330),
    [715] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(332),
    [717] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(334),
    [719] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(336),
    [721] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(342),
    [723] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(341),
    [725] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(343),
    [727] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(345),
    [729] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(347),
    [731] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(350),
    [733] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(351),
    [735] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(352),
    [737] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(355),
    [739] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(354),
    [741] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(356),
    [743] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(358),
    [745] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(360),
    [747] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(376),
    [749] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_dotted_name, 1),
    [751] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(364),
    [753] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(365),
    [755] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_decorator, 3),
    [757] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(367),
    [759] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_decorator, 4),
    [761] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(369),
    [763] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(370),
    [765] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_arguments, 3),
    [767] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(372),
    [769] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(373),
    [771] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_arguments, 4),
    [773] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(380),
    [775] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_dotted_name, 2),
    [777] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(378),
    [779] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(379),
    [781] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_dotted_name_repeat1, 3),
    [783] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_dotted_name_repeat1, 2),
    [785] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(382),
    [787] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(383),
    [789] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(384),
    [791] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(388),
    [793] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(389),
    [795] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(390),
    [797] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(391),
    [799] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(392),
    [801] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(393),
    [803] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(394),
    [805] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(387),
    [807] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_class_definition, 4),
    [809] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_class_definition, 4),
    [811] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_class_definition, 4),
    [813] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__suite, 2),
    [815] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__suite, 2),
    [817] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__suite, 2),
    [819] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(489),
    [821] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(420),
    [823] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(405),
    [825] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(404),
    [827] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(402),
    [829] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(393),
    [831] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(394),
    [833] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__suite, 3),
    [835] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__suite, 3),
    [837] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__suite, 3),
    [839] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(406),
    [841] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(407),
    [843] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(408),
    [845] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(411),
    [847] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(413),
    [849] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(417),
    [851] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(418),
    [853] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_class_definition, 7),
    [855] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_class_definition, 7),
    [857] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_class_definition, 7),
    [859] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(421),
    [861] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(425),
    [863] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(426),
    [865] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(427),
    [867] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(423),
    [869] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_function_definition, 5),
    [871] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_function_definition, 5),
    [873] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_function_definition, 5),
    [875] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_parameters, 2),
    [877] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(441),
    [879] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(451),
    [881] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(447),
    [883] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(450),
    [885] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(445),
    [887] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(448),
    [889] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(432),
    [891] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(436),
    [893] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(443),
    [895] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(437),
    [897] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_parameters, 4),
    [899] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(438),
    [901] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(440),
    [903] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_parameters, 6),
    [905] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(442),
    [907] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_dictionary_splat_parameter, 3),
    [909] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(444),
    [911] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_parameters_repeat1, 3),
    [913] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_parameters_repeat1, 3),
    [915] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_parameters, 5),
    [917] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_default_parameter, 3),
    [919] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_parameters, 3),
    [921] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_parameters_repeat1, 2),
    [923] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_parameters_repeat1, 2),
    [925] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_list_splat_parameter, 2),
    [927] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(480),
    [929] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(481),
    [931] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_with_item, 1),
    [933] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(455),
    [935] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(456),
    [937] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(457),
    [939] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(456),
    [941] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(458),
    [943] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(459),
    [945] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(460),
    [947] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(461),
    [949] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(467),
    [951] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_with_item, 3),
    [953] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(469),
    [955] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(470),
    [957] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(469),
    [959] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(471),
    [961] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(472),
    [963] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(473),
    [965] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(474),
    [967] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(483),
    [969] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(484),
    [971] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_with_statement, 5),
    [973] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_with_statement, 5),
    [975] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_with_statement, 5),
    [977] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_with_statement_repeat1, 3),
    [979] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_with_statement, 4),
    [981] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_with_statement, 4),
    [983] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_with_statement, 4),
    [985] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_with_statement_repeat1, 2),
    [987] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(490),
    [989] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(514),
    [991] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(493),
    [993] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(494),
    [995] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(505),
    [997] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_try_statement_repeat1, 1),
    [999] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_try_statement_repeat1, 1),
    [1001] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_try_statement_repeat1, 1),
    [1003] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_try_statement, 4),
    [1005] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_try_statement, 4),
    [1007] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_try_statement, 4),
    [1009] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(498),
    [1011] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(493),
    [1013] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(494),
    [1015] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(503),
    [1017] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_try_statement, 5),
    [1019] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_try_statement, 5),
    [1021] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_try_statement, 5),
    [1023] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_try_statement_repeat1, 2),
    [1025] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_try_statement_repeat1, 2),
    [1027] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_try_statement_repeat1, 2),
    [1029] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_try_statement, 6),
    [1031] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_try_statement, 6),
    [1033] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_try_statement, 6),
    [1035] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_else_clause, 3),
    [1037] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_else_clause, 3),
    [1039] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_else_clause, 3),
    [1041] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_finally_clause, 3),
    [1043] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_finally_clause, 3),
    [1045] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_finally_clause, 3),
    [1047] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(508),
    [1049] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(509),
    [1051] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_except_clause, 4),
    [1053] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_except_clause, 4),
    [1055] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_except_clause, 4),
    [1057] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(512),
    [1059] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_except_clause, 6),
    [1061] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_except_clause, 6),
    [1063] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_except_clause, 6),
    [1065] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(516),
    [1067] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(518),
    [1069] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_while_statement, 4),
    [1071] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_while_statement, 4),
    [1073] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_while_statement, 4),
    [1075] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_while_statement, 5),
    [1077] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_while_statement, 5),
    [1079] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_while_statement, 5),
    [1081] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(522),
    [1083] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(530),
    [1085] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(525),
    [1087] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(527),
    [1089] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_for_statement, 6),
    [1091] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_for_statement, 6),
    [1093] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_for_statement, 6),
    [1095] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_for_statement, 7),
    [1097] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_for_statement, 7),
    [1099] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_for_statement, 7),
    [1101] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(534),
    [1103] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_if_statement, 4),
    [1105] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(536),
    [1107] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_if_statement, 4),
    [1109] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_if_statement, 4),
    [1111] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_if_statement_repeat1, 1),
    [1113] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_if_statement_repeat1, 1),
    [1115] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_if_statement_repeat1, 1),
    [1117] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_if_statement, 5),
    [1119] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_if_statement, 5),
    [1121] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_if_statement, 5),
    [1123] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_if_statement_repeat1, 2),
    [1125] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_if_statement_repeat1, 2),
    [1127] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_if_statement_repeat1, 2),
    [1129] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_if_statement, 6),
    [1131] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_if_statement, 6),
    [1133] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_if_statement, 6),
    [1135] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(543),
    [1137] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_elif_clause, 4),
    [1139] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_elif_clause, 4),
    [1141] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_elif_clause, 4),
    [1143] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(546),
    [1145] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(547),
    [1147] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(551),
    [1149] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(554),
    [1151] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(556),
    [1153] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(561),
    [1155] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(562),
    [1157] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(573),
    [1159] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(566),
    [1161] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(561),
    [1163] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(562),
    [1165] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(571),
    [1167] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(576),
    [1169] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(577),
    [1171] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(580),
    [1173] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(583),
    [1175] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(587),
    [1177] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(589),
    [1179] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(593),
    [1181] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(595),
    [1183] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(602),
    [1185] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_delete_statement, 2),
    [1187] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(607),
    [1189] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(608),
    [1191] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(609),
    [1193] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(608),
    [1195] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(610),
    [1197] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(611),
    [1199] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(612),
    [1201] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(613),
    [1203] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(615),
    [1205] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_return_statement, 2),
    [1207] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_print_statement, 2),
    [1209] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_print_statement, 3),
    [1211] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_import_from_statement_repeat1, 1),
    [1213] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_import_from_statement_repeat1, 1),
    [1215] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_import_from_statement_repeat1, 1),
    [1217] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(661),
    [1219] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(630),
    [1221] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(630),
    [1223] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(631),
    [1225] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(627),
    [1227] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(666),
    [1229] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(635),
    [1231] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_import_from_statement_repeat1, 2),
    [1233] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_import_from_statement_repeat1, 2),
    [1235] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_import_from_statement_repeat1, 2),
    [1237] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(633),
    [1239] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(634),
    [1241] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_wildcard_import, 1),
    [1243] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_import_from_statement, 5),
    [1245] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(639),
    [1247] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__import_list, 1),
    [1249] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(640),
    [1251] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__import_list, 2),
    [1253] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(645),
    [1255] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(642),
    [1257] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__import_list, 3),
    [1259] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym__import_list_repeat1, 3),
    [1261] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_aliased_import, 3),
    [1263] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym__import_list_repeat1, 2),
    [1265] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(660),
    [1267] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(651),
    [1269] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(652),
    [1271] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(657),
    [1273] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(654),
    [1275] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_import_from_statement, 7),
    [1277] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(665),
    [1279] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(663),
    [1281] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(664),
    [1283] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_import_from_statement, 4),
    [1285] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(669),
    [1287] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_import_from_statement, 6),
    [1289] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_import_statement, 2),
    [1291] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(806),
    [1293] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_import_from_statement_repeat1, 1), REDUCE(aux_sym_import_from_statement_repeat1, 2),
    [1296] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_import_from_statement_repeat1, 1), REDUCE(aux_sym_import_from_statement_repeat1, 2),
    [1299] = {.count = 3, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_import_from_statement_repeat1, 1), REDUCE(aux_sym_import_from_statement_repeat1, 2), SHIFT(903),
    [1303] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(896),
    [1305] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(897),
    [1307] = {.count = 5, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_call, 4), REDUCE(sym_call, 5), REDUCE(sym_call, 6), REDUCE(sym_call, 7), REDUCE(sym_call, 8),
    [1313] = {.count = 5, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_call, 4), REDUCE(sym_call, 5), REDUCE(sym_call, 6), REDUCE(sym_call, 7), REDUCE(sym_call, 8),
    [1319] = {.count = 11, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_parameters, 2), REDUCE(sym_parameters, 3), REDUCE(sym_parameters, 4), REDUCE(sym_call, 4), REDUCE(sym_parameters, 5), REDUCE(sym_call, 5), REDUCE(sym_parameters, 6), REDUCE(sym_call, 6), REDUCE(sym_call, 7), REDUCE(sym_call, 8), SHIFT(810),
    [1331] = {.count = 9, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_arguments, 3), REDUCE(sym_arguments, 4), REDUCE(sym_call, 4), REDUCE(sym_call, 5), REDUCE(sym_import_from_statement, 6), REDUCE(sym_call, 6), REDUCE(sym_import_from_statement, 7), REDUCE(sym_call, 7), REDUCE(sym_call, 8),
    [1341] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__import_list, 2), REDUCE(sym__import_list, 3), SHIFT(873),
    [1345] = {.count = 5, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_parameters_repeat1, 2), REDUCE(aux_sym_call_repeat1, 2), REDUCE(aux_sym_parameters_repeat1, 3), REDUCE(aux_sym_call_repeat1, 3), SHIFT(438),
    [1351] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_call_repeat1, 2), REDUCE(aux_sym_call_repeat1, 3), SHIFT(80),
    [1355] = {.count = 3, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_call_repeat1, 2), REDUCE(aux_sym_call_repeat1, 3), SHIFT(874),
    [1359] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_call_repeat1, 2), REDUCE(aux_sym_call_repeat1, 3), SHIFT(17),
    [1363] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(875),
    [1365] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(876),
    [1367] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_call_repeat1, 2), REDUCE(aux_sym_call_repeat1, 3), SHIFT(18),
    [1371] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(877),
    [1373] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_call_repeat1, 2), REDUCE(aux_sym_call_repeat1, 3), SHIFT(19),
    [1377] = {.count = 3, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_call_repeat1, 2), REDUCE(aux_sym_call_repeat1, 3), SHIFT(19),
    [1381] = {.count = 5, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_parameters_repeat1, 2), REDUCE(aux_sym_call_repeat1, 2), REDUCE(aux_sym_parameters_repeat1, 3), REDUCE(aux_sym_call_repeat1, 3), SHIFT(878),
    [1387] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__import_list, 2), REDUCE(sym__import_list, 3),
    [1390] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(872),
    [1392] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(694),
    [1394] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(870),
    [1396] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(792),
    [1398] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(701),
    [1400] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(753),
    [1402] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(856),
    [1404] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(850),
    [1406] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(843),
    [1408] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(841),
    [1410] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(838),
    [1412] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_subscript_repeat1, 2), REDUCE(aux_sym_subscript_repeat1, 3), SHIFT(48),
    [1416] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_subscript_repeat1, 2), REDUCE(aux_sym_subscript_repeat1, 3), SHIFT(56),
    [1420] = {.count = 8, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_list, 2), REDUCE(sym_list, 3), REDUCE(sym_subscript, 4), REDUCE(sym_list, 4), REDUCE(sym_subscript, 5), REDUCE(sym_list, 5), REDUCE(sym_subscript, 6), REDUCE(sym_list_comprehension, 7),
    [1429] = {.count = 8, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_list, 2), REDUCE(sym_list, 3), REDUCE(sym_subscript, 4), REDUCE(sym_list, 4), REDUCE(sym_subscript, 5), REDUCE(sym_list, 5), REDUCE(sym_subscript, 6), REDUCE(sym_list_comprehension, 7),
    [1438] = {.count = 9, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_dictionary, 2), REDUCE(sym_dictionary, 3), REDUCE(sym_set, 3), REDUCE(sym_dictionary, 4), REDUCE(sym_set, 4), REDUCE(sym_dictionary, 5), REDUCE(sym_set, 5), REDUCE(sym_dictionary_comprehension, 7), REDUCE(sym_set_comprehension, 7),
    [1448] = {.count = 9, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_dictionary, 2), REDUCE(sym_dictionary, 3), REDUCE(sym_set, 3), REDUCE(sym_dictionary, 4), REDUCE(sym_set, 4), REDUCE(sym_dictionary, 5), REDUCE(sym_set, 5), REDUCE(sym_dictionary_comprehension, 7), REDUCE(sym_set_comprehension, 7),
    [1458] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_dotted_name, 1), REDUCE(aux_sym_dotted_name_repeat1, 2), REDUCE(aux_sym_dotted_name_repeat1, 3),
    [1462] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_dotted_name_repeat1, 2), REDUCE(aux_sym_dotted_name_repeat1, 3), SHIFT(376),
    [1466] = {.count = 5, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_dotted_name, 1), REDUCE(sym__expression, 1), REDUCE(aux_sym_dotted_name_repeat1, 2), REDUCE(aux_sym_dotted_name_repeat1, 3), SHIFT(827),
    [1472] = {.count = 8, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_dotted_name, 1), REDUCE(sym__expression, 1), REDUCE(sym_list_splat_parameter, 2), REDUCE(aux_sym_dotted_name_repeat1, 2), REDUCE(sym_aliased_import, 3), REDUCE(sym_dictionary_splat_parameter, 3), REDUCE(aux_sym_dotted_name_repeat1, 3), SHIFT(816),
    [1481] = {.count = 7, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_dotted_name, 1), REDUCE(sym__expression, 1), REDUCE(sym_list_splat_parameter, 2), REDUCE(aux_sym_dotted_name_repeat1, 2), REDUCE(sym_aliased_import, 3), REDUCE(aux_sym_dotted_name_repeat1, 3), SHIFT(820),
    [1489] = {.count = 4, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_dotted_name, 1), REDUCE(sym__expression, 1), REDUCE(aux_sym_dotted_name_repeat1, 2), REDUCE(aux_sym_dotted_name_repeat1, 3),
    [1494] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__expression, 1), SHIFT(828),
    [1497] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(690),
    [1499] = {.count = 5, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_dotted_name, 1), REDUCE(sym__expression, 1), REDUCE(aux_sym_dotted_name_repeat1, 2), REDUCE(sym_aliased_import, 3), REDUCE(aux_sym_dotted_name_repeat1, 3),
    [1505] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_module, 2), REDUCE(sym__statement, 2), REDUCE(sym__suite, 2),
    [1509] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__statement, 2), REDUCE(sym__suite, 2),
    [1512] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__statement, 2), REDUCE(sym__suite, 2),
    [1515] = {.count = 4, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__statement, 2), REDUCE(sym__suite, 2), REDUCE(sym_decorator, 3), REDUCE(sym_decorator, 4),
    [1520] = {.count = 4, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__statement, 2), REDUCE(sym__suite, 2), REDUCE(sym_decorator, 3), REDUCE(sym_decorator, 4),
    [1525] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__statement, 2), REDUCE(sym__suite, 2),
    [1528] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(744),
    [1530] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__suite, 2), REDUCE(sym__suite, 3),
    [1533] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__suite, 2), REDUCE(sym__suite, 3),
    [1536] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__suite, 2), REDUCE(sym__suite, 3),
    [1539] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_module_repeat1, 1), REDUCE(aux_sym_module_repeat1, 2),
    [1542] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_module_repeat1, 1), REDUCE(aux_sym_module_repeat1, 2),
    [1545] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_module_repeat1, 1), REDUCE(aux_sym_module_repeat1, 2),
    [1548] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(826),
    [1550] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(808),
    [1552] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_import_statement, 2), REDUCE(sym_import_from_statement, 4), REDUCE(sym_import_from_statement, 5),
    [1556] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__import_list, 1), REDUCE(aux_sym__import_list_repeat1, 2), REDUCE(aux_sym__import_list_repeat1, 3),
    [1560] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym__import_list_repeat1, 2), REDUCE(aux_sym__import_list_repeat1, 3), SHIFT(639),
    [1564] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_import_from_statement, 4), REDUCE(sym_import_from_statement, 5),
    [1567] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_if_statement_repeat1, 1), REDUCE(aux_sym_if_statement_repeat1, 2),
    [1570] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_if_statement_repeat1, 1), REDUCE(aux_sym_if_statement_repeat1, 2),
    [1573] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_if_statement_repeat1, 1), REDUCE(aux_sym_if_statement_repeat1, 2),
    [1576] = {.count = 5, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_if_statement, 5), REDUCE(sym_while_statement, 5), REDUCE(sym_try_statement, 5), REDUCE(sym_if_statement, 6), REDUCE(sym_for_statement, 7),
    [1582] = {.count = 5, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_if_statement, 5), REDUCE(sym_while_statement, 5), REDUCE(sym_try_statement, 5), REDUCE(sym_if_statement, 6), REDUCE(sym_for_statement, 7),
    [1588] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(687),
    [1590] = {.count = 5, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_if_statement, 5), REDUCE(sym_while_statement, 5), REDUCE(sym_try_statement, 5), REDUCE(sym_if_statement, 6), REDUCE(sym_for_statement, 7),
    [1596] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_try_statement_repeat1, 1), REDUCE(aux_sym_try_statement_repeat1, 2),
    [1599] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_try_statement_repeat1, 1), REDUCE(aux_sym_try_statement_repeat1, 2),
    [1602] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_try_statement_repeat1, 1), REDUCE(aux_sym_try_statement_repeat1, 2),
    [1605] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_try_statement, 4), REDUCE(sym_try_statement, 5), REDUCE(sym_try_statement, 6),
    [1609] = {.count = 3, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_try_statement, 4), REDUCE(sym_try_statement, 5), REDUCE(sym_try_statement, 6),
    [1613] = {.count = 3, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_try_statement, 4), REDUCE(sym_try_statement, 5), REDUCE(sym_try_statement, 6),
    [1617] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_with_statement_repeat1, 2), REDUCE(aux_sym_with_statement_repeat1, 3), SHIFT(480),
    [1621] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_with_statement_repeat1, 2), REDUCE(aux_sym_with_statement_repeat1, 3), SHIFT(824),
    [1625] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__compound_statement, 1), REDUCE(sym_decorated_definition, 2),
    [1628] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__compound_statement, 1), REDUCE(sym_decorated_definition, 2),
    [1631] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__compound_statement, 1), REDUCE(sym_decorated_definition, 2),
    [1634] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(822),
    [1636] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(816),
    [1638] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(820),
    [1640] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(817),
    [1642] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(815),
    [1644] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_decorated_definition_repeat1, 1), REDUCE(aux_sym_decorated_definition_repeat1, 2),
    [1647] = {.count = 13, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_else_clause, 3), REDUCE(sym_finally_clause, 3), REDUCE(sym_if_statement, 4), REDUCE(sym_elif_clause, 4), REDUCE(sym_while_statement, 4), REDUCE(sym_except_clause, 4), REDUCE(sym_with_statement, 4), REDUCE(sym_class_definition, 4), REDUCE(sym_with_statement, 5), REDUCE(sym_function_definition, 5), REDUCE(sym_for_statement, 6), REDUCE(sym_except_clause, 6), REDUCE(sym_class_definition, 7),
    [1661] = {.count = 13, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_else_clause, 3), REDUCE(sym_finally_clause, 3), REDUCE(sym_if_statement, 4), REDUCE(sym_elif_clause, 4), REDUCE(sym_while_statement, 4), REDUCE(sym_except_clause, 4), REDUCE(sym_with_statement, 4), REDUCE(sym_class_definition, 4), REDUCE(sym_with_statement, 5), REDUCE(sym_function_definition, 5), REDUCE(sym_for_statement, 6), REDUCE(sym_except_clause, 6), REDUCE(sym_class_definition, 7),
    [1675] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_elif_clause, 4), SHIFT(680),
    [1678] = {.count = 4, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_elif_clause, 4), REDUCE(sym_except_clause, 4), REDUCE(sym_except_clause, 6), SHIFT(681),
    [1683] = {.count = 3, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_except_clause, 4), REDUCE(sym_except_clause, 6), SHIFT(686),
    [1687] = {.count = 4, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_else_clause, 3), REDUCE(sym_except_clause, 4), REDUCE(sym_except_clause, 6), SHIFT(687),
    [1692] = {.count = 13, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_else_clause, 3), REDUCE(sym_finally_clause, 3), REDUCE(sym_if_statement, 4), REDUCE(sym_elif_clause, 4), REDUCE(sym_while_statement, 4), REDUCE(sym_except_clause, 4), REDUCE(sym_with_statement, 4), REDUCE(sym_class_definition, 4), REDUCE(sym_with_statement, 5), REDUCE(sym_function_definition, 5), REDUCE(sym_for_statement, 6), REDUCE(sym_except_clause, 6), REDUCE(sym_class_definition, 7),
    [1706] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(809),
    [1708] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(768),
    [1710] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(683),
    [1712] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_return_statement, 2), REDUCE(sym_delete_statement, 2),
    [1715] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(805),
    [1717] = {.count = 4, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__import_list, 1), REDUCE(aux_sym__import_list_repeat1, 2), REDUCE(aux_sym__import_list_repeat1, 3), SHIFT(365),
    [1722] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE_FRAGILE(sym_unary_operator, 2), REDUCE_FRAGILE(sym_binary_operator, 3), SHIFT(33),
    [1726] = {.count = 12, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_expression_list, 1), REDUCE_FRAGILE(sym_unary_operator, 2), REDUCE(sym_list_splat_argument, 2), REDUCE(sym_dictionary_splat_argument, 2), REDUCE(aux_sym_print_statement_repeat1, 2), REDUCE(aux_sym_call_repeat2, 2), REDUCE(sym_default_parameter, 3), REDUCE_FRAGILE(sym_binary_operator, 3), REDUCE(sym_keyword_argument, 3), REDUCE(aux_sym_print_statement_repeat1, 3), REDUCE(aux_sym_call_repeat2, 3), SHIFT(777),
    [1739] = {.count = 15, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_with_item, 1), REDUCE_FRAGILE(sym_unary_operator, 2), REDUCE(sym_list_splat_argument, 2), REDUCE(aux_sym_print_statement_repeat1, 2), REDUCE(aux_sym_subscript_repeat1, 2), REDUCE(aux_sym_call_repeat2, 2), REDUCE(sym_with_item, 3), REDUCE(sym_default_parameter, 3), REDUCE_FRAGILE(sym_binary_operator, 3), REDUCE(sym_keyword_argument, 3), REDUCE(sym_pair, 3), REDUCE(aux_sym_print_statement_repeat1, 3), REDUCE(aux_sym_subscript_repeat1, 3), REDUCE(aux_sym_call_repeat2, 3), SHIFT(778),
    [1755] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE_FRAGILE(sym_unary_operator, 2), REDUCE_FRAGILE(sym_binary_operator, 3), SHIFT(779),
    [1759] = {.count = 3, .reusable = true, .depends_on_lookahead = true}, REDUCE_FRAGILE(sym_unary_operator, 2), REDUCE_FRAGILE(sym_binary_operator, 3), SHIFT(692),
    [1763] = {.count = 8, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_with_item, 1), REDUCE(sym_expression_list, 1), REDUCE_FRAGILE(sym_unary_operator, 2), REDUCE(aux_sym_print_statement_repeat1, 2), REDUCE(sym_with_item, 3), REDUCE_FRAGILE(sym_binary_operator, 3), REDUCE(aux_sym_print_statement_repeat1, 3), SHIFT(780),
    [1772] = {.count = 4, .reusable = true, .depends_on_lookahead = false}, REDUCE_FRAGILE(sym_unary_operator, 2), REDUCE_FRAGILE(sym_binary_operator, 3), REDUCE(sym_pair, 3), SHIFT(781),
    [1777] = {.count = 5, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_expression_list, 1), REDUCE_FRAGILE(sym_unary_operator, 2), REDUCE(aux_sym_print_statement_repeat1, 2), REDUCE_FRAGILE(sym_binary_operator, 3), REDUCE(aux_sym_print_statement_repeat1, 3),
    [1783] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE_FRAGILE(sym_unary_operator, 2), REDUCE_FRAGILE(sym_binary_operator, 3), SHIFT(692),
    [1787] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE_FRAGILE(sym_unary_operator, 2), REDUCE_FRAGILE(sym_binary_operator, 3), SHIFT(40),
    [1791] = {.count = 7, .reusable = true, .depends_on_lookahead = false}, REDUCE_FRAGILE(sym_unary_operator, 2), REDUCE(aux_sym_print_statement_repeat1, 2), REDUCE(aux_sym_subscript_repeat1, 2), REDUCE_FRAGILE(sym_binary_operator, 3), REDUCE(aux_sym_print_statement_repeat1, 3), REDUCE(aux_sym_subscript_repeat1, 3), SHIFT(782),
    [1799] = {.count = 6, .reusable = true, .depends_on_lookahead = false}, REDUCE_FRAGILE(sym_unary_operator, 2), REDUCE(aux_sym_print_statement_repeat1, 2), REDUCE_FRAGILE(sym_binary_operator, 3), REDUCE(sym_pair, 3), REDUCE(aux_sym_print_statement_repeat1, 3), SHIFT(783),
    [1806] = {.count = 7, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_expression_statement, 1), REDUCE(sym_expression_list, 1), REDUCE(sym_print_statement, 2), REDUCE_FRAGILE(sym_unary_operator, 2), REDUCE(aux_sym_print_statement_repeat1, 2), REDUCE_FRAGILE(sym_binary_operator, 3), REDUCE(aux_sym_print_statement_repeat1, 3),
    [1814] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_call_repeat2, 2), REDUCE(aux_sym_call_repeat2, 3), SHIFT(772),
    [1818] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_call_repeat2, 2), REDUCE(aux_sym_call_repeat2, 3), SHIFT(776),
    [1822] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(772),
    [1824] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(773),
    [1826] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(771),
    [1828] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_dictionary_repeat1, 2), REDUCE(aux_sym_dictionary_repeat1, 3), SHIFT(326),
    [1832] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_dictionary_repeat1, 2), REDUCE(aux_sym_dictionary_repeat1, 3), SHIFT(328),
    [1836] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(678),
    [1838] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(761),
    [1840] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(684),
    [1842] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(685),
    [1844] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(688),
    [1846] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(689),
    [1848] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(691),
    [1850] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(746),
    [1852] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_expression_list, 2), SHIFT(372),
    [1855] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(755),
    [1857] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_expression_list, 2), REDUCE(sym_print_statement, 3),
    [1860] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(680),
    [1862] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(681),
    [1864] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(686),
    [1866] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(741),
    [1868] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(689),
    [1870] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(691),
    [1872] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(736),
    [1874] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(737),
    [1876] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_call, 5), REDUCE(sym_call, 6),
    [1879] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_call, 5), REDUCE(sym_call, 6),
    [1882] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(739),
    [1884] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_call, 7), REDUCE(sym_call, 8),
    [1887] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_call, 7), REDUCE(sym_call, 8),
    [1890] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(756),
    [1892] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(758),
    [1894] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(758),
    [1896] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE_FRAGILE(sym_binary_operator, 3), SHIFT(33),
    [1899] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE_FRAGILE(sym_binary_operator, 3), SHIFT(758),
    [1902] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE_FRAGILE(sym_binary_operator, 3), SHIFT(758),
    [1905] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE_FRAGILE(sym_binary_operator, 3), SHIFT(40),
    [1908] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE_FRAGILE(sym_unary_operator, 2), SHIFT(33),
    [1911] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE_FRAGILE(sym_unary_operator, 2), SHIFT(758),
    [1914] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE_FRAGILE(sym_unary_operator, 2), SHIFT(758),
    [1917] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE_FRAGILE(sym_unary_operator, 2), SHIFT(40),
    [1920] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(764),
    [1922] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(766),
    [1924] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_call, 4), REDUCE(sym_call, 5),
    [1927] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_call, 4), REDUCE(sym_call, 5),
    [1930] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(775),
    [1932] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_call, 6), REDUCE(sym_call, 7),
    [1935] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_call, 6), REDUCE(sym_call, 7),
    [1938] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_call_repeat1, 2), REDUCE(aux_sym_call_repeat1, 3),
    [1941] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_call_repeat1, 2), REDUCE(aux_sym_call_repeat1, 3),
    [1944] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_call_repeat1, 2), REDUCE(aux_sym_call_repeat1, 3),
    [1947] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_arguments, 3), REDUCE(sym_call, 4), REDUCE(sym_call, 5),
    [1951] = {.count = 3, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_call_repeat1, 2), REDUCE(aux_sym_call_repeat1, 3), SHIFT(756),
    [1955] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(803),
    [1957] = {.count = 3, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_call_repeat1, 2), REDUCE(aux_sym_call_repeat1, 3), SHIFT(19),
    [1961] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_list, 3), REDUCE(sym_subscript, 4), REDUCE(sym_list_comprehension, 7),
    [1965] = {.count = 3, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_list, 3), REDUCE(sym_subscript, 4), REDUCE(sym_list_comprehension, 7),
    [1969] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_set, 3), REDUCE(sym_dictionary_comprehension, 7), REDUCE(sym_set_comprehension, 7),
    [1973] = {.count = 3, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_set, 3), REDUCE(sym_dictionary_comprehension, 7), REDUCE(sym_set_comprehension, 7),
    [1977] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE_FRAGILE(sym_binary_operator, 3), SHIFT(692),
    [1980] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE_FRAGILE(sym_binary_operator, 3), SHIFT(692),
    [1983] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(786),
    [1985] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(787),
    [1987] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(789),
    [1989] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(789),
    [1991] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE_FRAGILE(sym_binary_operator, 3), SHIFT(47),
    [1994] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE_FRAGILE(sym_binary_operator, 3), SHIFT(789),
    [1997] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE_FRAGILE(sym_binary_operator, 3), SHIFT(789),
    [2000] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE_FRAGILE(sym_binary_operator, 3), SHIFT(55),
    [2003] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE_FRAGILE(sym_unary_operator, 2), SHIFT(47),
    [2006] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE_FRAGILE(sym_unary_operator, 2), SHIFT(789),
    [2009] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE_FRAGILE(sym_unary_operator, 2), SHIFT(789),
    [2012] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE_FRAGILE(sym_unary_operator, 2), SHIFT(55),
    [2015] = {.count = 5, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_if_statement, 4), REDUCE(sym_elif_clause, 4), REDUCE(sym_while_statement, 4), REDUCE(sym_except_clause, 4), REDUCE(sym_except_clause, 6),
    [2021] = {.count = 5, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_if_statement, 4), REDUCE(sym_elif_clause, 4), REDUCE(sym_while_statement, 4), REDUCE(sym_except_clause, 4), REDUCE(sym_except_clause, 6),
    [2027] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_except_clause, 4), REDUCE(sym_except_clause, 6),
    [2030] = {.count = 5, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_if_statement, 4), REDUCE(sym_elif_clause, 4), REDUCE(sym_while_statement, 4), REDUCE(sym_except_clause, 4), REDUCE(sym_except_clause, 6),
    [2036] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(795),
    [2038] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(795),
    [2040] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE_FRAGILE(sym_binary_operator, 3), SHIFT(795),
    [2043] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE_FRAGILE(sym_binary_operator, 3), SHIFT(795),
    [2046] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_if_statement, 5), REDUCE(sym_while_statement, 5),
    [2049] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_if_statement, 5), REDUCE(sym_while_statement, 5),
    [2052] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_if_statement, 5), REDUCE(sym_while_statement, 5),
    [2055] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE_FRAGILE(sym_unary_operator, 2), SHIFT(795),
    [2058] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE_FRAGILE(sym_unary_operator, 2), SHIFT(795),
    [2061] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_with_item, 3), SHIFT(801),
    [2064] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_list, 4), REDUCE(sym_subscript, 5),
    [2067] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_list, 4), REDUCE(sym_subscript, 5),
    [2070] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_print_statement_repeat1, 2), REDUCE(aux_sym_subscript_repeat1, 2),
    [2073] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_print_statement_repeat1, 2), SHIFT(801),
    [2076] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_import_from_statement, 6), REDUCE(sym_import_from_statement, 7),
    [2079] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(810),
    [2081] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_if_statement, 5), REDUCE(sym_while_statement, 5), REDUCE(sym_for_statement, 7),
    [2085] = {.count = 3, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_if_statement, 5), REDUCE(sym_while_statement, 5), REDUCE(sym_for_statement, 7),
    [2089] = {.count = 3, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_if_statement, 5), REDUCE(sym_while_statement, 5), REDUCE(sym_for_statement, 7),
    [2093] = {.count = 4, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_parameters, 3), REDUCE(sym_parameters, 4), REDUCE(sym_parameters, 5), REDUCE(sym_parameters, 6),
    [2098] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_parameters, 3), REDUCE(sym_parameters, 4),
    [2101] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(819),
    [2103] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_parameters, 5), REDUCE(sym_parameters, 6),
    [2106] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(821),
    [2108] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_parameters_repeat1, 2), REDUCE(aux_sym_parameters_repeat1, 3),
    [2111] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_parameters_repeat1, 2), REDUCE(aux_sym_parameters_repeat1, 3),
    [2114] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_parameters, 4), REDUCE(sym_parameters, 5),
    [2117] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(830),
    [2119] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__expression, 1), SHIFT(447),
    [2122] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__expression, 1), SHIFT(450),
    [2125] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(833),
    [2127] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(834),
    [2129] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_list, 3), REDUCE(sym_subscript, 4),
    [2132] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_list, 3), REDUCE(sym_subscript, 4),
    [2135] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE_FRAGILE(sym_unary_operator, 2), SHIFT(692),
    [2138] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE_FRAGILE(sym_unary_operator, 2), SHIFT(692),
    [2141] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_dictionary_splat_argument, 2), REDUCE_FRAGILE(sym_binary_operator, 3),
    [2144] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(839),
    [2146] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(828),
    [2148] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_default_parameter, 3), REDUCE(sym_keyword_argument, 3),
    [2151] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(824),
    [2153] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(846),
    [2155] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(847),
    [2157] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(801),
    [2159] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(686),
    [2161] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(687),
    [2163] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(853),
    [2165] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(858),
    [2167] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(858),
    [2169] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(859),
    [2171] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_dictionary_comprehension, 7), REDUCE(sym_set_comprehension, 7),
    [2174] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_dictionary_comprehension, 7), REDUCE(sym_set_comprehension, 7),
    [2177] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE_FRAGILE(sym_binary_operator, 3), SHIFT(858),
    [2180] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE_FRAGILE(sym_binary_operator, 3), SHIFT(858),
    [2183] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE_FRAGILE(sym_unary_operator, 2), SHIFT(858),
    [2186] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE_FRAGILE(sym_unary_operator, 2), SHIFT(858),
    [2189] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(864),
    [2191] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(867),
    [2193] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__expression, 1), REDUCE(sym_list_splat_parameter, 2), REDUCE(sym_dictionary_splat_parameter, 3),
    [2197] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__expression, 1), REDUCE(sym_list_splat_parameter, 2),
    [2200] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_list_splat_argument, 2), REDUCE_FRAGILE(sym_binary_operator, 3),
    [2203] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__expression, 1), REDUCE(sym_aliased_import, 3),
    [2206] = {.count = 4, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_parameters, 4), REDUCE(sym_parameters, 5), REDUCE(sym_call, 5), REDUCE(sym_call, 6),
    [2211] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(874),
    [2213] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_subscript_repeat1, 2), REDUCE(aux_sym_subscript_repeat1, 3),
    [2216] = {.count = 4, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_list, 4), REDUCE(sym_subscript, 5), REDUCE(sym_list, 5), REDUCE(sym_subscript, 6),
    [2221] = {.count = 4, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_list, 4), REDUCE(sym_subscript, 5), REDUCE(sym_list, 5), REDUCE(sym_subscript, 6),
    [2226] = {.count = 4, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_dictionary, 4), REDUCE(sym_set, 4), REDUCE(sym_dictionary, 5), REDUCE(sym_set, 5),
    [2231] = {.count = 4, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_dictionary, 4), REDUCE(sym_set, 4), REDUCE(sym_dictionary, 5), REDUCE(sym_set, 5),
    [2236] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_dotted_name, 1), REDUCE(sym__expression, 1),
    [2239] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym__import_list_repeat1, 2), REDUCE(aux_sym__import_list_repeat1, 3),
    [2242] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_with_statement_repeat1, 2), REDUCE(aux_sym_with_statement_repeat1, 3),
    [2245] = {.count = 4, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_print_statement_repeat1, 2), REDUCE(aux_sym_call_repeat2, 2), REDUCE(aux_sym_print_statement_repeat1, 3), REDUCE(aux_sym_call_repeat2, 3),
    [2250] = {.count = 7, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_with_item, 1), REDUCE(aux_sym_print_statement_repeat1, 2), REDUCE(aux_sym_subscript_repeat1, 2), REDUCE(aux_sym_call_repeat2, 2), REDUCE(aux_sym_print_statement_repeat1, 3), REDUCE(aux_sym_subscript_repeat1, 3), REDUCE(aux_sym_call_repeat2, 3),
    [2258] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(887),
    [2260] = {.count = 4, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_with_item, 1), REDUCE(aux_sym_print_statement_repeat1, 2), REDUCE(aux_sym_print_statement_repeat1, 3), SHIFT(888),
    [2265] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_print_statement_repeat1, 2), REDUCE(aux_sym_print_statement_repeat1, 3),
    [2268] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(887),
    [2270] = {.count = 4, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_print_statement_repeat1, 2), REDUCE(aux_sym_subscript_repeat1, 2), REDUCE(aux_sym_print_statement_repeat1, 3), REDUCE(aux_sym_subscript_repeat1, 3),
    [2275] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_call_repeat2, 2), REDUCE(aux_sym_call_repeat2, 3),
    [2278] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(886),
    [2280] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_dictionary_repeat1, 2), REDUCE(aux_sym_dictionary_repeat1, 3),
    [2283] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_call, 6), REDUCE(sym_call, 7), REDUCE(sym_call, 8),
    [2287] = {.count = 3, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_call, 6), REDUCE(sym_call, 7), REDUCE(sym_call, 8),
    [2291] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(890),
    [2293] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE_FRAGILE(sym_binary_operator, 3), SHIFT(887),
    [2296] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE_FRAGILE(sym_binary_operator, 3), SHIFT(887),
    [2299] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(892),
    [2301] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(892),
    [2303] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE_FRAGILE(sym_binary_operator, 3), SHIFT(892),
    [2306] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE_FRAGILE(sym_binary_operator, 3), SHIFT(892),
    [2309] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE_FRAGILE(sym_unary_operator, 2), SHIFT(892),
    [2312] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE_FRAGILE(sym_unary_operator, 2), SHIFT(892),
    [2315] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE_FRAGILE(sym_unary_operator, 2), SHIFT(887),
    [2318] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE_FRAGILE(sym_unary_operator, 2), SHIFT(887),
    [2321] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(902),
    [2323] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_dotted_name, 1), REDUCE(sym__expression, 1), SHIFT(447),
    [2327] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_dotted_name, 1), REDUCE(sym__expression, 1), SHIFT(450),
    [2331] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_expression_list, 1), SHIFT(899),
    [2334] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(900),
    [2336] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_arguments, 3), REDUCE(sym_call, 4),
    [2339] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_call_repeat1, 2), SHIFT(81),
    [2342] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_call_repeat1, 2), SHIFT(42),
    [2345] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_call_repeat1, 2), SHIFT(44),
    [2348] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_call_repeat1, 2), SHIFT(45),
    [2351] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_call_repeat1, 2), SHIFT(45),
    [2354] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_call_repeat1, 2), SHIFT(45),
    [2357] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_dotted_name_repeat1, 2), REDUCE(aux_sym_dotted_name_repeat1, 3),
};

void *ts_language_python_external_scanner_create();
bool ts_language_python_external_scanner_scan(void *, TSLexer *, const bool *);
void ts_language_python_external_scanner_destroy();

const TSLanguage *ts_language_python() {
    GET_LANGUAGE(
        ts_language_python_external_scanner_create,
        ts_language_python_external_scanner_scan,
        ts_language_python_external_scanner_destroy,
    );
}
