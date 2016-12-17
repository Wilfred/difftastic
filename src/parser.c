#include <tree_sitter/parser.h>

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"

#define STATE_COUNT 905
#define SYMBOL_COUNT 118
#define TOKEN_COUNT 54
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
    sym_number = 48,
    sym_identifier = 49,
    sym_comment = 50,
    sym__newline = 51,
    sym__indent = 52,
    sym__dedent = 53,
    sym_module = 54,
    sym__statement = 55,
    sym__simple_statement = 56,
    sym_import_statement = 57,
    sym_import_from_statement = 58,
    sym__import_list = 59,
    sym_aliased_import = 60,
    sym_wildcard_import = 61,
    sym_print_statement = 62,
    sym_expression_statement = 63,
    sym_return_statement = 64,
    sym_delete_statement = 65,
    sym__compound_statement = 66,
    sym_if_statement = 67,
    sym_elif_clause = 68,
    sym_else_clause = 69,
    sym_for_statement = 70,
    sym_while_statement = 71,
    sym_try_statement = 72,
    sym_except_clause = 73,
    sym_finally_clause = 74,
    sym_with_statement = 75,
    sym_with_item = 76,
    sym_function_definition = 77,
    sym_parameters = 78,
    sym_default_parameter = 79,
    sym_list_splat_parameter = 80,
    sym_dictionary_splat_parameter = 81,
    sym_class_definition = 82,
    sym_decorated_definition = 83,
    sym_decorator = 84,
    sym__suite = 85,
    sym_arguments = 86,
    sym_expression_list = 87,
    sym_dotted_name = 88,
    sym__expression = 89,
    sym_binary_operator = 90,
    sym_unary_operator = 91,
    sym_subscript = 92,
    sym_call = 93,
    sym_keyword_argument = 94,
    sym_list_splat_argument = 95,
    sym_dictionary_splat_argument = 96,
    sym_list = 97,
    sym_list_comprehension = 98,
    sym_dictionary = 99,
    sym_dictionary_comprehension = 100,
    sym_pair = 101,
    sym_set = 102,
    sym_set_comprehension = 103,
    aux_sym_module_repeat1 = 104,
    aux_sym_import_from_statement_repeat1 = 105,
    aux_sym__import_list_repeat1 = 106,
    aux_sym_print_statement_repeat1 = 107,
    aux_sym_if_statement_repeat1 = 108,
    aux_sym_try_statement_repeat1 = 109,
    aux_sym_with_statement_repeat1 = 110,
    aux_sym_parameters_repeat1 = 111,
    aux_sym_decorated_definition_repeat1 = 112,
    aux_sym_dotted_name_repeat1 = 113,
    aux_sym_subscript_repeat1 = 114,
    aux_sym_call_repeat1 = 115,
    aux_sym_call_repeat2 = 116,
    aux_sym_dictionary_repeat1 = 117,
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
            if (lookahead == '#')
                ADVANCE(2);
            if (lookahead == '&')
                ADVANCE(4);
            if (lookahead == '(')
                ADVANCE(5);
            if (lookahead == ')')
                ADVANCE(6);
            if (lookahead == '*')
                ADVANCE(7);
            if (lookahead == '+')
                ADVANCE(9);
            if (lookahead == ',')
                ADVANCE(10);
            if (lookahead == '-')
                ADVANCE(11);
            if (lookahead == '.')
                ADVANCE(12);
            if (lookahead == '/')
                ADVANCE(15);
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(16);
            if (lookahead == ':')
                ADVANCE(18);
            if (lookahead == ';')
                ADVANCE(19);
            if (lookahead == '<')
                ADVANCE(20);
            if (lookahead == '=')
                ADVANCE(22);
            if (lookahead == '>')
                ADVANCE(23);
            if (lookahead == '@')
                ADVANCE(25);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == 'g') ||
                (lookahead == 'h') ||
                ('j' <= lookahead && lookahead <= 'm') ||
                (lookahead == 'q') ||
                (lookahead == 's') ||
                (lookahead == 'u') ||
                (lookahead == 'v') ||
                ('x' <= lookahead && lookahead <= 'z'))
                ADVANCE(26);
            if (lookahead == '[')
                ADVANCE(27);
            if (lookahead == ']')
                ADVANCE(28);
            if (lookahead == '^')
                ADVANCE(29);
            if (lookahead == 'a')
                ADVANCE(30);
            if (lookahead == 'b')
                ADVANCE(34);
            if (lookahead == 'c')
                ADVANCE(39);
            if (lookahead == 'd')
                ADVANCE(51);
            if (lookahead == 'e')
                ADVANCE(55);
            if (lookahead == 'f')
                ADVANCE(66);
            if (lookahead == 'i')
                ADVANCE(78);
            if (lookahead == 'n')
                ADVANCE(86);
            if (lookahead == 'o')
                ADVANCE(89);
            if (lookahead == 'p')
                ADVANCE(91);
            if (lookahead == 'r')
                ADVANCE(99);
            if (lookahead == 't')
                ADVANCE(105);
            if (lookahead == 'w')
                ADVANCE(108);
            if (lookahead == '{')
                ADVANCE(116);
            if (lookahead == '|')
                ADVANCE(117);
            if (lookahead == '}')
                ADVANCE(118);
            LEX_ERROR();
        case 1:
            ACCEPT_TOKEN(ts_builtin_sym_end);
        case 2:
            if (!((lookahead == 0) ||
                (lookahead == '\n')))
                ADVANCE(3);
            LEX_ERROR();
        case 3:
            if (!((lookahead == 0) ||
                (lookahead == '\n')))
                ADVANCE(3);
            ACCEPT_TOKEN(sym_comment);
        case 4:
            ACCEPT_TOKEN(anon_sym_AMP);
        case 5:
            ACCEPT_TOKEN(anon_sym_LPAREN);
        case 6:
            ACCEPT_TOKEN(anon_sym_RPAREN);
        case 7:
            if (lookahead == '*')
                ADVANCE(8);
            ACCEPT_TOKEN(anon_sym_STAR);
        case 8:
            ACCEPT_TOKEN(anon_sym_STAR_STAR);
        case 9:
            ACCEPT_TOKEN(anon_sym_PLUS);
        case 10:
            ACCEPT_TOKEN(anon_sym_COMMA);
        case 11:
            ACCEPT_TOKEN(anon_sym_DASH);
        case 12:
            if (lookahead == '.')
                ADVANCE(13);
            ACCEPT_TOKEN(anon_sym_DOT);
        case 13:
            if (lookahead == '.')
                ADVANCE(14);
            LEX_ERROR();
        case 14:
            ACCEPT_TOKEN(anon_sym_DOT_DOT_DOT);
        case 15:
            ACCEPT_TOKEN(anon_sym_SLASH);
        case 16:
            if (lookahead == '.')
                ADVANCE(17);
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(16);
            ACCEPT_TOKEN(sym_number);
        case 17:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(17);
            ACCEPT_TOKEN(sym_number);
        case 18:
            ACCEPT_TOKEN(anon_sym_COLON);
        case 19:
            ACCEPT_TOKEN(anon_sym_SEMI);
        case 20:
            if (lookahead == '<')
                ADVANCE(21);
            LEX_ERROR();
        case 21:
            ACCEPT_TOKEN(anon_sym_LT_LT);
        case 22:
            ACCEPT_TOKEN(anon_sym_EQ);
        case 23:
            if (lookahead == '>')
                ADVANCE(24);
            LEX_ERROR();
        case 24:
            ACCEPT_TOKEN(anon_sym_GT_GT);
        case 25:
            ACCEPT_TOKEN(anon_sym_AT);
        case 26:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(26);
            ACCEPT_TOKEN(sym_identifier);
        case 27:
            ACCEPT_TOKEN(anon_sym_LBRACK);
        case 28:
            ACCEPT_TOKEN(anon_sym_RBRACK);
        case 29:
            ACCEPT_TOKEN(anon_sym_CARET);
        case 30:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'm') ||
                ('o' <= lookahead && lookahead <= 'r') ||
                ('t' <= lookahead && lookahead <= 'z'))
                ADVANCE(26);
            if (lookahead == 'n')
                ADVANCE(31);
            if (lookahead == 's')
                ADVANCE(33);
            ACCEPT_TOKEN(sym_identifier);
        case 31:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'c') ||
                ('e' <= lookahead && lookahead <= 'z'))
                ADVANCE(26);
            if (lookahead == 'd')
                ADVANCE(32);
            ACCEPT_TOKEN(sym_identifier);
        case 32:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(26);
            ACCEPT_TOKEN(anon_sym_and);
        case 33:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(26);
            ACCEPT_TOKEN(anon_sym_as);
        case 34:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'q') ||
                ('s' <= lookahead && lookahead <= 'z'))
                ADVANCE(26);
            if (lookahead == 'r')
                ADVANCE(35);
            ACCEPT_TOKEN(sym_identifier);
        case 35:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'z'))
                ADVANCE(26);
            if (lookahead == 'e')
                ADVANCE(36);
            ACCEPT_TOKEN(sym_identifier);
        case 36:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(26);
            if (lookahead == 'a')
                ADVANCE(37);
            ACCEPT_TOKEN(sym_identifier);
        case 37:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'j') ||
                ('l' <= lookahead && lookahead <= 'z'))
                ADVANCE(26);
            if (lookahead == 'k')
                ADVANCE(38);
            ACCEPT_TOKEN(sym_identifier);
        case 38:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(26);
            ACCEPT_TOKEN(sym_break_statement);
        case 39:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'k') ||
                (lookahead == 'm') ||
                (lookahead == 'n') ||
                ('p' <= lookahead && lookahead <= 'z'))
                ADVANCE(26);
            if (lookahead == 'l')
                ADVANCE(40);
            if (lookahead == 'o')
                ADVANCE(44);
            ACCEPT_TOKEN(sym_identifier);
        case 40:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(26);
            if (lookahead == 'a')
                ADVANCE(41);
            ACCEPT_TOKEN(sym_identifier);
        case 41:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'r') ||
                ('t' <= lookahead && lookahead <= 'z'))
                ADVANCE(26);
            if (lookahead == 's')
                ADVANCE(42);
            ACCEPT_TOKEN(sym_identifier);
        case 42:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'r') ||
                ('t' <= lookahead && lookahead <= 'z'))
                ADVANCE(26);
            if (lookahead == 's')
                ADVANCE(43);
            ACCEPT_TOKEN(sym_identifier);
        case 43:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(26);
            ACCEPT_TOKEN(anon_sym_class);
        case 44:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'm') ||
                ('o' <= lookahead && lookahead <= 'z'))
                ADVANCE(26);
            if (lookahead == 'n')
                ADVANCE(45);
            ACCEPT_TOKEN(sym_identifier);
        case 45:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 's') ||
                ('u' <= lookahead && lookahead <= 'z'))
                ADVANCE(26);
            if (lookahead == 't')
                ADVANCE(46);
            ACCEPT_TOKEN(sym_identifier);
        case 46:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'h') ||
                ('j' <= lookahead && lookahead <= 'z'))
                ADVANCE(26);
            if (lookahead == 'i')
                ADVANCE(47);
            ACCEPT_TOKEN(sym_identifier);
        case 47:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'm') ||
                ('o' <= lookahead && lookahead <= 'z'))
                ADVANCE(26);
            if (lookahead == 'n')
                ADVANCE(48);
            ACCEPT_TOKEN(sym_identifier);
        case 48:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 't') ||
                ('v' <= lookahead && lookahead <= 'z'))
                ADVANCE(26);
            if (lookahead == 'u')
                ADVANCE(49);
            ACCEPT_TOKEN(sym_identifier);
        case 49:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'z'))
                ADVANCE(26);
            if (lookahead == 'e')
                ADVANCE(50);
            ACCEPT_TOKEN(sym_identifier);
        case 50:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(26);
            ACCEPT_TOKEN(sym_continue_statement);
        case 51:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'z'))
                ADVANCE(26);
            if (lookahead == 'e')
                ADVANCE(52);
            ACCEPT_TOKEN(sym_identifier);
        case 52:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'e') ||
                ('g' <= lookahead && lookahead <= 'k') ||
                ('m' <= lookahead && lookahead <= 'z'))
                ADVANCE(26);
            if (lookahead == 'f')
                ADVANCE(53);
            if (lookahead == 'l')
                ADVANCE(54);
            ACCEPT_TOKEN(sym_identifier);
        case 53:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(26);
            ACCEPT_TOKEN(anon_sym_def);
        case 54:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(26);
            ACCEPT_TOKEN(anon_sym_del);
        case 55:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'k') ||
                ('m' <= lookahead && lookahead <= 'w') ||
                (lookahead == 'y') ||
                (lookahead == 'z'))
                ADVANCE(26);
            if (lookahead == 'l')
                ADVANCE(56);
            if (lookahead == 'x')
                ADVANCE(61);
            ACCEPT_TOKEN(sym_identifier);
        case 56:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'h') ||
                ('j' <= lookahead && lookahead <= 'r') ||
                ('t' <= lookahead && lookahead <= 'z'))
                ADVANCE(26);
            if (lookahead == 'i')
                ADVANCE(57);
            if (lookahead == 's')
                ADVANCE(59);
            ACCEPT_TOKEN(sym_identifier);
        case 57:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'e') ||
                ('g' <= lookahead && lookahead <= 'z'))
                ADVANCE(26);
            if (lookahead == 'f')
                ADVANCE(58);
            ACCEPT_TOKEN(sym_identifier);
        case 58:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(26);
            ACCEPT_TOKEN(anon_sym_elif);
        case 59:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'z'))
                ADVANCE(26);
            if (lookahead == 'e')
                ADVANCE(60);
            ACCEPT_TOKEN(sym_identifier);
        case 60:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(26);
            ACCEPT_TOKEN(anon_sym_else);
        case 61:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                (lookahead == 'a') ||
                (lookahead == 'b') ||
                ('d' <= lookahead && lookahead <= 'z'))
                ADVANCE(26);
            if (lookahead == 'c')
                ADVANCE(62);
            ACCEPT_TOKEN(sym_identifier);
        case 62:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'z'))
                ADVANCE(26);
            if (lookahead == 'e')
                ADVANCE(63);
            ACCEPT_TOKEN(sym_identifier);
        case 63:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'o') ||
                ('q' <= lookahead && lookahead <= 'z'))
                ADVANCE(26);
            if (lookahead == 'p')
                ADVANCE(64);
            ACCEPT_TOKEN(sym_identifier);
        case 64:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 's') ||
                ('u' <= lookahead && lookahead <= 'z'))
                ADVANCE(26);
            if (lookahead == 't')
                ADVANCE(65);
            ACCEPT_TOKEN(sym_identifier);
        case 65:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(26);
            ACCEPT_TOKEN(anon_sym_except);
        case 66:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'h') ||
                ('j' <= lookahead && lookahead <= 'n') ||
                (lookahead == 'p') ||
                (lookahead == 'q') ||
                ('s' <= lookahead && lookahead <= 'z'))
                ADVANCE(26);
            if (lookahead == 'i')
                ADVANCE(67);
            if (lookahead == 'o')
                ADVANCE(73);
            if (lookahead == 'r')
                ADVANCE(75);
            ACCEPT_TOKEN(sym_identifier);
        case 67:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'm') ||
                ('o' <= lookahead && lookahead <= 'z'))
                ADVANCE(26);
            if (lookahead == 'n')
                ADVANCE(68);
            ACCEPT_TOKEN(sym_identifier);
        case 68:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(26);
            if (lookahead == 'a')
                ADVANCE(69);
            ACCEPT_TOKEN(sym_identifier);
        case 69:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'k') ||
                ('m' <= lookahead && lookahead <= 'z'))
                ADVANCE(26);
            if (lookahead == 'l')
                ADVANCE(70);
            ACCEPT_TOKEN(sym_identifier);
        case 70:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'k') ||
                ('m' <= lookahead && lookahead <= 'z'))
                ADVANCE(26);
            if (lookahead == 'l')
                ADVANCE(71);
            ACCEPT_TOKEN(sym_identifier);
        case 71:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'x') ||
                (lookahead == 'z'))
                ADVANCE(26);
            if (lookahead == 'y')
                ADVANCE(72);
            ACCEPT_TOKEN(sym_identifier);
        case 72:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(26);
            ACCEPT_TOKEN(anon_sym_finally);
        case 73:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'q') ||
                ('s' <= lookahead && lookahead <= 'z'))
                ADVANCE(26);
            if (lookahead == 'r')
                ADVANCE(74);
            ACCEPT_TOKEN(sym_identifier);
        case 74:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(26);
            ACCEPT_TOKEN(anon_sym_for);
        case 75:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'n') ||
                ('p' <= lookahead && lookahead <= 'z'))
                ADVANCE(26);
            if (lookahead == 'o')
                ADVANCE(76);
            ACCEPT_TOKEN(sym_identifier);
        case 76:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'l') ||
                ('n' <= lookahead && lookahead <= 'z'))
                ADVANCE(26);
            if (lookahead == 'm')
                ADVANCE(77);
            ACCEPT_TOKEN(sym_identifier);
        case 77:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(26);
            ACCEPT_TOKEN(anon_sym_from);
        case 78:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'e') ||
                ('g' <= lookahead && lookahead <= 'l') ||
                ('o' <= lookahead && lookahead <= 'z'))
                ADVANCE(26);
            if (lookahead == 'f')
                ADVANCE(79);
            if (lookahead == 'm')
                ADVANCE(80);
            if (lookahead == 'n')
                ADVANCE(85);
            ACCEPT_TOKEN(sym_identifier);
        case 79:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(26);
            ACCEPT_TOKEN(anon_sym_if);
        case 80:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'o') ||
                ('q' <= lookahead && lookahead <= 'z'))
                ADVANCE(26);
            if (lookahead == 'p')
                ADVANCE(81);
            ACCEPT_TOKEN(sym_identifier);
        case 81:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'n') ||
                ('p' <= lookahead && lookahead <= 'z'))
                ADVANCE(26);
            if (lookahead == 'o')
                ADVANCE(82);
            ACCEPT_TOKEN(sym_identifier);
        case 82:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'q') ||
                ('s' <= lookahead && lookahead <= 'z'))
                ADVANCE(26);
            if (lookahead == 'r')
                ADVANCE(83);
            ACCEPT_TOKEN(sym_identifier);
        case 83:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 's') ||
                ('u' <= lookahead && lookahead <= 'z'))
                ADVANCE(26);
            if (lookahead == 't')
                ADVANCE(84);
            ACCEPT_TOKEN(sym_identifier);
        case 84:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(26);
            ACCEPT_TOKEN(anon_sym_import);
        case 85:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(26);
            ACCEPT_TOKEN(anon_sym_in);
        case 86:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'n') ||
                ('p' <= lookahead && lookahead <= 'z'))
                ADVANCE(26);
            if (lookahead == 'o')
                ADVANCE(87);
            ACCEPT_TOKEN(sym_identifier);
        case 87:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 's') ||
                ('u' <= lookahead && lookahead <= 'z'))
                ADVANCE(26);
            if (lookahead == 't')
                ADVANCE(88);
            ACCEPT_TOKEN(sym_identifier);
        case 88:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(26);
            ACCEPT_TOKEN(anon_sym_not);
        case 89:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'q') ||
                ('s' <= lookahead && lookahead <= 'z'))
                ADVANCE(26);
            if (lookahead == 'r')
                ADVANCE(90);
            ACCEPT_TOKEN(sym_identifier);
        case 90:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(26);
            ACCEPT_TOKEN(anon_sym_or);
        case 91:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('b' <= lookahead && lookahead <= 'q') ||
                ('s' <= lookahead && lookahead <= 'z'))
                ADVANCE(26);
            if (lookahead == 'a')
                ADVANCE(92);
            if (lookahead == 'r')
                ADVANCE(95);
            ACCEPT_TOKEN(sym_identifier);
        case 92:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'r') ||
                ('t' <= lookahead && lookahead <= 'z'))
                ADVANCE(26);
            if (lookahead == 's')
                ADVANCE(93);
            ACCEPT_TOKEN(sym_identifier);
        case 93:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'r') ||
                ('t' <= lookahead && lookahead <= 'z'))
                ADVANCE(26);
            if (lookahead == 's')
                ADVANCE(94);
            ACCEPT_TOKEN(sym_identifier);
        case 94:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(26);
            ACCEPT_TOKEN(sym_pass_statement);
        case 95:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'h') ||
                ('j' <= lookahead && lookahead <= 'z'))
                ADVANCE(26);
            if (lookahead == 'i')
                ADVANCE(96);
            ACCEPT_TOKEN(sym_identifier);
        case 96:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'm') ||
                ('o' <= lookahead && lookahead <= 'z'))
                ADVANCE(26);
            if (lookahead == 'n')
                ADVANCE(97);
            ACCEPT_TOKEN(sym_identifier);
        case 97:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 's') ||
                ('u' <= lookahead && lookahead <= 'z'))
                ADVANCE(26);
            if (lookahead == 't')
                ADVANCE(98);
            ACCEPT_TOKEN(sym_identifier);
        case 98:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(26);
            ACCEPT_TOKEN(anon_sym_print);
        case 99:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'z'))
                ADVANCE(26);
            if (lookahead == 'e')
                ADVANCE(100);
            ACCEPT_TOKEN(sym_identifier);
        case 100:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 's') ||
                ('u' <= lookahead && lookahead <= 'z'))
                ADVANCE(26);
            if (lookahead == 't')
                ADVANCE(101);
            ACCEPT_TOKEN(sym_identifier);
        case 101:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 't') ||
                ('v' <= lookahead && lookahead <= 'z'))
                ADVANCE(26);
            if (lookahead == 'u')
                ADVANCE(102);
            ACCEPT_TOKEN(sym_identifier);
        case 102:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'q') ||
                ('s' <= lookahead && lookahead <= 'z'))
                ADVANCE(26);
            if (lookahead == 'r')
                ADVANCE(103);
            ACCEPT_TOKEN(sym_identifier);
        case 103:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'm') ||
                ('o' <= lookahead && lookahead <= 'z'))
                ADVANCE(26);
            if (lookahead == 'n')
                ADVANCE(104);
            ACCEPT_TOKEN(sym_identifier);
        case 104:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(26);
            ACCEPT_TOKEN(anon_sym_return);
        case 105:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'q') ||
                ('s' <= lookahead && lookahead <= 'z'))
                ADVANCE(26);
            if (lookahead == 'r')
                ADVANCE(106);
            ACCEPT_TOKEN(sym_identifier);
        case 106:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'x') ||
                (lookahead == 'z'))
                ADVANCE(26);
            if (lookahead == 'y')
                ADVANCE(107);
            ACCEPT_TOKEN(sym_identifier);
        case 107:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(26);
            ACCEPT_TOKEN(anon_sym_try);
        case 108:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'g') ||
                ('j' <= lookahead && lookahead <= 'z'))
                ADVANCE(26);
            if (lookahead == 'h')
                ADVANCE(109);
            if (lookahead == 'i')
                ADVANCE(113);
            ACCEPT_TOKEN(sym_identifier);
        case 109:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'h') ||
                ('j' <= lookahead && lookahead <= 'z'))
                ADVANCE(26);
            if (lookahead == 'i')
                ADVANCE(110);
            ACCEPT_TOKEN(sym_identifier);
        case 110:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'k') ||
                ('m' <= lookahead && lookahead <= 'z'))
                ADVANCE(26);
            if (lookahead == 'l')
                ADVANCE(111);
            ACCEPT_TOKEN(sym_identifier);
        case 111:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'z'))
                ADVANCE(26);
            if (lookahead == 'e')
                ADVANCE(112);
            ACCEPT_TOKEN(sym_identifier);
        case 112:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(26);
            ACCEPT_TOKEN(anon_sym_while);
        case 113:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 's') ||
                ('u' <= lookahead && lookahead <= 'z'))
                ADVANCE(26);
            if (lookahead == 't')
                ADVANCE(114);
            ACCEPT_TOKEN(sym_identifier);
        case 114:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'g') ||
                ('i' <= lookahead && lookahead <= 'z'))
                ADVANCE(26);
            if (lookahead == 'h')
                ADVANCE(115);
            ACCEPT_TOKEN(sym_identifier);
        case 115:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(26);
            ACCEPT_TOKEN(anon_sym_with);
        case 116:
            ACCEPT_TOKEN(anon_sym_LBRACE);
        case 117:
            ACCEPT_TOKEN(anon_sym_PIPE);
        case 118:
            ACCEPT_TOKEN(anon_sym_RBRACE);
        case 119:
            if (lookahead == 0)
                ADVANCE(1);
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(119);
            if (lookahead == '#')
                ADVANCE(2);
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(16);
            if (lookahead == '@')
                ADVANCE(25);
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
                ADVANCE(26);
            if (lookahead == '[')
                ADVANCE(27);
            if (lookahead == 'b')
                ADVANCE(34);
            if (lookahead == 'c')
                ADVANCE(39);
            if (lookahead == 'd')
                ADVANCE(51);
            if (lookahead == 'f')
                ADVANCE(120);
            if (lookahead == 'i')
                ADVANCE(121);
            if (lookahead == 'n')
                ADVANCE(86);
            if (lookahead == 'p')
                ADVANCE(91);
            if (lookahead == 'r')
                ADVANCE(99);
            if (lookahead == 't')
                ADVANCE(105);
            if (lookahead == 'w')
                ADVANCE(108);
            if (lookahead == '{')
                ADVANCE(116);
            LEX_ERROR();
        case 120:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'n') ||
                (lookahead == 'p') ||
                (lookahead == 'q') ||
                ('s' <= lookahead && lookahead <= 'z'))
                ADVANCE(26);
            if (lookahead == 'o')
                ADVANCE(73);
            if (lookahead == 'r')
                ADVANCE(75);
            ACCEPT_TOKEN(sym_identifier);
        case 121:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'e') ||
                ('g' <= lookahead && lookahead <= 'l') ||
                ('n' <= lookahead && lookahead <= 'z'))
                ADVANCE(26);
            if (lookahead == 'f')
                ADVANCE(79);
            if (lookahead == 'm')
                ADVANCE(80);
            ACCEPT_TOKEN(sym_identifier);
        case 122:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(122);
            if (lookahead == '#')
                ADVANCE(2);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(26);
            LEX_ERROR();
        case 123:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(123);
            if (lookahead == '#')
                ADVANCE(2);
            if (lookahead == '.')
                ADVANCE(124);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(26);
            LEX_ERROR();
        case 124:
            ACCEPT_TOKEN(anon_sym_DOT);
        case 125:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(125);
            if (lookahead == '#')
                ADVANCE(2);
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(16);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'm') ||
                ('o' <= lookahead && lookahead <= 'z'))
                ADVANCE(26);
            if (lookahead == '[')
                ADVANCE(27);
            if (lookahead == 'n')
                ADVANCE(86);
            if (lookahead == '{')
                ADVANCE(116);
            LEX_ERROR();
        case 126:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(126);
            if (lookahead == '#')
                ADVANCE(2);
            LEX_ERROR();
        case 127:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(127);
            if (lookahead == '#')
                ADVANCE(2);
            if (lookahead == ':')
                ADVANCE(18);
            LEX_ERROR();
        case 128:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(128);
            if (lookahead == '#')
                ADVANCE(2);
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(16);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'm') ||
                ('o' <= lookahead && lookahead <= 'z'))
                ADVANCE(26);
            if (lookahead == '[')
                ADVANCE(27);
            if (lookahead == ']')
                ADVANCE(28);
            if (lookahead == 'n')
                ADVANCE(86);
            if (lookahead == '{')
                ADVANCE(116);
            LEX_ERROR();
        case 129:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(129);
            if (lookahead == '#')
                ADVANCE(2);
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(16);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'm') ||
                ('o' <= lookahead && lookahead <= 'z'))
                ADVANCE(26);
            if (lookahead == '[')
                ADVANCE(27);
            if (lookahead == 'n')
                ADVANCE(86);
            if (lookahead == '{')
                ADVANCE(116);
            if (lookahead == '}')
                ADVANCE(118);
            LEX_ERROR();
        case 130:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(130);
            if (lookahead == '#')
                ADVANCE(2);
            if (lookahead == '&')
                ADVANCE(4);
            if (lookahead == '(')
                ADVANCE(5);
            if (lookahead == ')')
                ADVANCE(6);
            if (lookahead == '*')
                ADVANCE(7);
            if (lookahead == '+')
                ADVANCE(9);
            if (lookahead == ',')
                ADVANCE(10);
            if (lookahead == '-')
                ADVANCE(11);
            if (lookahead == '/')
                ADVANCE(15);
            if (lookahead == ':')
                ADVANCE(18);
            if (lookahead == '<')
                ADVANCE(20);
            if (lookahead == '>')
                ADVANCE(23);
            if (lookahead == '[')
                ADVANCE(27);
            if (lookahead == ']')
                ADVANCE(28);
            if (lookahead == '^')
                ADVANCE(29);
            if (lookahead == 'a')
                ADVANCE(131);
            if (lookahead == 'f')
                ADVANCE(135);
            if (lookahead == 'i')
                ADVANCE(138);
            if (lookahead == 'o')
                ADVANCE(140);
            if (lookahead == '|')
                ADVANCE(117);
            if (lookahead == '}')
                ADVANCE(118);
            LEX_ERROR();
        case 131:
            if (lookahead == 'n')
                ADVANCE(132);
            if (lookahead == 's')
                ADVANCE(134);
            LEX_ERROR();
        case 132:
            if (lookahead == 'd')
                ADVANCE(133);
            LEX_ERROR();
        case 133:
            ACCEPT_TOKEN(anon_sym_and);
        case 134:
            ACCEPT_TOKEN(anon_sym_as);
        case 135:
            if (lookahead == 'o')
                ADVANCE(136);
            LEX_ERROR();
        case 136:
            if (lookahead == 'r')
                ADVANCE(137);
            LEX_ERROR();
        case 137:
            ACCEPT_TOKEN(anon_sym_for);
        case 138:
            if (lookahead == 'n')
                ADVANCE(139);
            LEX_ERROR();
        case 139:
            ACCEPT_TOKEN(anon_sym_in);
        case 140:
            if (lookahead == 'r')
                ADVANCE(141);
            LEX_ERROR();
        case 141:
            ACCEPT_TOKEN(anon_sym_or);
        case 142:
            if (lookahead == 0)
                ADVANCE(1);
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(142);
            if (lookahead == '#')
                ADVANCE(2);
            LEX_ERROR();
        case 143:
            if (lookahead == 0)
                ADVANCE(1);
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(143);
            if (lookahead == '#')
                ADVANCE(2);
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(16);
            if (lookahead == ';')
                ADVANCE(19);
            if (lookahead == '@')
                ADVANCE(25);
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
                ADVANCE(26);
            if (lookahead == '[')
                ADVANCE(27);
            if (lookahead == 'b')
                ADVANCE(34);
            if (lookahead == 'c')
                ADVANCE(39);
            if (lookahead == 'd')
                ADVANCE(51);
            if (lookahead == 'f')
                ADVANCE(120);
            if (lookahead == 'i')
                ADVANCE(121);
            if (lookahead == 'n')
                ADVANCE(86);
            if (lookahead == 'p')
                ADVANCE(91);
            if (lookahead == 'r')
                ADVANCE(99);
            if (lookahead == 't')
                ADVANCE(105);
            if (lookahead == 'w')
                ADVANCE(108);
            if (lookahead == '{')
                ADVANCE(116);
            LEX_ERROR();
        case 144:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(144);
            if (lookahead == '#')
                ADVANCE(2);
            if (lookahead == '@')
                ADVANCE(25);
            if (lookahead == 'c')
                ADVANCE(145);
            if (lookahead == 'd')
                ADVANCE(150);
            LEX_ERROR();
        case 145:
            if (lookahead == 'l')
                ADVANCE(146);
            LEX_ERROR();
        case 146:
            if (lookahead == 'a')
                ADVANCE(147);
            LEX_ERROR();
        case 147:
            if (lookahead == 's')
                ADVANCE(148);
            LEX_ERROR();
        case 148:
            if (lookahead == 's')
                ADVANCE(149);
            LEX_ERROR();
        case 149:
            ACCEPT_TOKEN(anon_sym_class);
        case 150:
            if (lookahead == 'e')
                ADVANCE(151);
            LEX_ERROR();
        case 151:
            if (lookahead == 'f')
                ADVANCE(152);
            LEX_ERROR();
        case 152:
            ACCEPT_TOKEN(anon_sym_def);
        case 153:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(153);
            if (lookahead == '#')
                ADVANCE(2);
            if (lookahead == '&')
                ADVANCE(4);
            if (lookahead == '(')
                ADVANCE(5);
            if (lookahead == '*')
                ADVANCE(7);
            if (lookahead == '+')
                ADVANCE(9);
            if (lookahead == '-')
                ADVANCE(11);
            if (lookahead == '/')
                ADVANCE(15);
            if (lookahead == '<')
                ADVANCE(20);
            if (lookahead == '>')
                ADVANCE(23);
            if (lookahead == '[')
                ADVANCE(27);
            if (lookahead == '^')
                ADVANCE(29);
            if (lookahead == 'a')
                ADVANCE(154);
            if (lookahead == 'o')
                ADVANCE(140);
            if (lookahead == '|')
                ADVANCE(117);
            LEX_ERROR();
        case 154:
            if (lookahead == 'n')
                ADVANCE(132);
            LEX_ERROR();
        case 155:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(155);
            if (lookahead == '#')
                ADVANCE(2);
            if (lookahead == '*')
                ADVANCE(7);
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(16);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'm') ||
                ('o' <= lookahead && lookahead <= 'z'))
                ADVANCE(26);
            if (lookahead == '[')
                ADVANCE(27);
            if (lookahead == 'n')
                ADVANCE(86);
            if (lookahead == '{')
                ADVANCE(116);
            LEX_ERROR();
        case 156:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(156);
            if (lookahead == '#')
                ADVANCE(2);
            if (lookahead == '.')
                ADVANCE(157);
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(16);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'm') ||
                ('o' <= lookahead && lookahead <= 'z'))
                ADVANCE(26);
            if (lookahead == '[')
                ADVANCE(27);
            if (lookahead == 'n')
                ADVANCE(86);
            if (lookahead == '{')
                ADVANCE(116);
            LEX_ERROR();
        case 157:
            if (lookahead == '.')
                ADVANCE(13);
            LEX_ERROR();
        case 158:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(158);
            if (lookahead == '#')
                ADVANCE(2);
            if (lookahead == ',')
                ADVANCE(10);
            if (lookahead == ']')
                ADVANCE(28);
            LEX_ERROR();
        case 159:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(159);
            if (lookahead == '#')
                ADVANCE(2);
            if (lookahead == '&')
                ADVANCE(4);
            if (lookahead == '(')
                ADVANCE(5);
            if (lookahead == '*')
                ADVANCE(7);
            if (lookahead == '+')
                ADVANCE(9);
            if (lookahead == ',')
                ADVANCE(10);
            if (lookahead == '-')
                ADVANCE(11);
            if (lookahead == '/')
                ADVANCE(15);
            if (lookahead == '<')
                ADVANCE(20);
            if (lookahead == '>')
                ADVANCE(23);
            if (lookahead == '[')
                ADVANCE(27);
            if (lookahead == ']')
                ADVANCE(28);
            if (lookahead == '^')
                ADVANCE(29);
            if (lookahead == 'a')
                ADVANCE(154);
            if (lookahead == 'o')
                ADVANCE(140);
            if (lookahead == '|')
                ADVANCE(117);
            LEX_ERROR();
        case 160:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(160);
            if (lookahead == '#')
                ADVANCE(2);
            if (lookahead == '.')
                ADVANCE(157);
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(16);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'm') ||
                ('o' <= lookahead && lookahead <= 'z'))
                ADVANCE(26);
            if (lookahead == '[')
                ADVANCE(27);
            if (lookahead == ']')
                ADVANCE(28);
            if (lookahead == 'n')
                ADVANCE(86);
            if (lookahead == '{')
                ADVANCE(116);
            LEX_ERROR();
        case 161:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(161);
            if (lookahead == '#')
                ADVANCE(2);
            if (lookahead == '&')
                ADVANCE(4);
            if (lookahead == '(')
                ADVANCE(5);
            if (lookahead == ')')
                ADVANCE(6);
            if (lookahead == '*')
                ADVANCE(7);
            if (lookahead == '+')
                ADVANCE(9);
            if (lookahead == ',')
                ADVANCE(10);
            if (lookahead == '-')
                ADVANCE(11);
            if (lookahead == '/')
                ADVANCE(15);
            if (lookahead == '<')
                ADVANCE(20);
            if (lookahead == '=')
                ADVANCE(22);
            if (lookahead == '>')
                ADVANCE(23);
            if (lookahead == '[')
                ADVANCE(27);
            if (lookahead == '^')
                ADVANCE(29);
            if (lookahead == 'a')
                ADVANCE(154);
            if (lookahead == 'o')
                ADVANCE(140);
            if (lookahead == '|')
                ADVANCE(117);
            LEX_ERROR();
        case 162:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(162);
            if (lookahead == '#')
                ADVANCE(2);
            if (lookahead == '&')
                ADVANCE(4);
            if (lookahead == '(')
                ADVANCE(5);
            if (lookahead == ')')
                ADVANCE(6);
            if (lookahead == '*')
                ADVANCE(7);
            if (lookahead == '+')
                ADVANCE(9);
            if (lookahead == ',')
                ADVANCE(10);
            if (lookahead == '-')
                ADVANCE(11);
            if (lookahead == '/')
                ADVANCE(15);
            if (lookahead == '<')
                ADVANCE(20);
            if (lookahead == '>')
                ADVANCE(23);
            if (lookahead == '[')
                ADVANCE(27);
            if (lookahead == '^')
                ADVANCE(29);
            if (lookahead == 'a')
                ADVANCE(154);
            if (lookahead == 'o')
                ADVANCE(140);
            if (lookahead == '|')
                ADVANCE(117);
            LEX_ERROR();
        case 163:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(163);
            if (lookahead == '#')
                ADVANCE(2);
            if (lookahead == ')')
                ADVANCE(6);
            if (lookahead == ',')
                ADVANCE(10);
            LEX_ERROR();
        case 164:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(164);
            if (lookahead == '#')
                ADVANCE(2);
            if (lookahead == ')')
                ADVANCE(6);
            LEX_ERROR();
        case 165:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(165);
            if (lookahead == '#')
                ADVANCE(2);
            if (lookahead == '*')
                ADVANCE(166);
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(16);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'm') ||
                ('o' <= lookahead && lookahead <= 'z'))
                ADVANCE(26);
            if (lookahead == '[')
                ADVANCE(27);
            if (lookahead == 'n')
                ADVANCE(86);
            if (lookahead == '{')
                ADVANCE(116);
            LEX_ERROR();
        case 166:
            if (lookahead == '*')
                ADVANCE(8);
            LEX_ERROR();
        case 167:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(167);
            if (lookahead == '#')
                ADVANCE(2);
            if (lookahead == ')')
                ADVANCE(6);
            if (lookahead == '*')
                ADVANCE(7);
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(16);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'm') ||
                ('o' <= lookahead && lookahead <= 'z'))
                ADVANCE(26);
            if (lookahead == '[')
                ADVANCE(27);
            if (lookahead == 'n')
                ADVANCE(86);
            if (lookahead == '{')
                ADVANCE(116);
            LEX_ERROR();
        case 168:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(168);
            if (lookahead == '#')
                ADVANCE(2);
            if (lookahead == '&')
                ADVANCE(4);
            if (lookahead == '(')
                ADVANCE(5);
            if (lookahead == '*')
                ADVANCE(7);
            if (lookahead == '+')
                ADVANCE(9);
            if (lookahead == ',')
                ADVANCE(10);
            if (lookahead == '-')
                ADVANCE(11);
            if (lookahead == '/')
                ADVANCE(15);
            if (lookahead == ':')
                ADVANCE(18);
            if (lookahead == '<')
                ADVANCE(20);
            if (lookahead == '>')
                ADVANCE(23);
            if (lookahead == '[')
                ADVANCE(27);
            if (lookahead == '^')
                ADVANCE(29);
            if (lookahead == 'a')
                ADVANCE(154);
            if (lookahead == 'f')
                ADVANCE(135);
            if (lookahead == 'o')
                ADVANCE(140);
            if (lookahead == '|')
                ADVANCE(117);
            if (lookahead == '}')
                ADVANCE(118);
            LEX_ERROR();
        case 169:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(169);
            if (lookahead == '#')
                ADVANCE(2);
            if (lookahead == ',')
                ADVANCE(10);
            if (lookahead == 'f')
                ADVANCE(135);
            if (lookahead == '}')
                ADVANCE(118);
            LEX_ERROR();
        case 170:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(170);
            if (lookahead == '#')
                ADVANCE(2);
            if (lookahead == ',')
                ADVANCE(10);
            if (lookahead == '}')
                ADVANCE(118);
            LEX_ERROR();
        case 171:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(171);
            if (lookahead == '#')
                ADVANCE(2);
            if (lookahead == '&')
                ADVANCE(4);
            if (lookahead == '(')
                ADVANCE(5);
            if (lookahead == '*')
                ADVANCE(7);
            if (lookahead == '+')
                ADVANCE(9);
            if (lookahead == '-')
                ADVANCE(11);
            if (lookahead == '/')
                ADVANCE(15);
            if (lookahead == ':')
                ADVANCE(18);
            if (lookahead == '<')
                ADVANCE(20);
            if (lookahead == '>')
                ADVANCE(23);
            if (lookahead == '[')
                ADVANCE(27);
            if (lookahead == '^')
                ADVANCE(29);
            if (lookahead == 'a')
                ADVANCE(154);
            if (lookahead == 'o')
                ADVANCE(140);
            if (lookahead == '|')
                ADVANCE(117);
            LEX_ERROR();
        case 172:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(172);
            if (lookahead == '#')
                ADVANCE(2);
            if (lookahead == '&')
                ADVANCE(4);
            if (lookahead == '(')
                ADVANCE(5);
            if (lookahead == '*')
                ADVANCE(7);
            if (lookahead == '+')
                ADVANCE(9);
            if (lookahead == ',')
                ADVANCE(10);
            if (lookahead == '-')
                ADVANCE(11);
            if (lookahead == '/')
                ADVANCE(15);
            if (lookahead == '<')
                ADVANCE(20);
            if (lookahead == '>')
                ADVANCE(23);
            if (lookahead == '[')
                ADVANCE(27);
            if (lookahead == '^')
                ADVANCE(29);
            if (lookahead == 'a')
                ADVANCE(154);
            if (lookahead == 'o')
                ADVANCE(140);
            if (lookahead == '|')
                ADVANCE(117);
            if (lookahead == '}')
                ADVANCE(118);
            LEX_ERROR();
        case 173:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(173);
            if (lookahead == '#')
                ADVANCE(2);
            if (lookahead == 'i')
                ADVANCE(138);
            LEX_ERROR();
        case 174:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(174);
            if (lookahead == '#')
                ADVANCE(2);
            if (lookahead == '&')
                ADVANCE(4);
            if (lookahead == '(')
                ADVANCE(5);
            if (lookahead == '*')
                ADVANCE(7);
            if (lookahead == '+')
                ADVANCE(9);
            if (lookahead == ',')
                ADVANCE(10);
            if (lookahead == '-')
                ADVANCE(11);
            if (lookahead == '/')
                ADVANCE(15);
            if (lookahead == '<')
                ADVANCE(20);
            if (lookahead == '>')
                ADVANCE(23);
            if (lookahead == '[')
                ADVANCE(27);
            if (lookahead == '^')
                ADVANCE(29);
            if (lookahead == 'a')
                ADVANCE(154);
            if (lookahead == 'i')
                ADVANCE(138);
            if (lookahead == 'o')
                ADVANCE(140);
            if (lookahead == '|')
                ADVANCE(117);
            LEX_ERROR();
        case 175:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(175);
            if (lookahead == '#')
                ADVANCE(2);
            if (lookahead == ',')
                ADVANCE(10);
            if (lookahead == 'i')
                ADVANCE(138);
            LEX_ERROR();
        case 176:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(176);
            if (lookahead == '#')
                ADVANCE(2);
            if (lookahead == '&')
                ADVANCE(4);
            if (lookahead == '(')
                ADVANCE(5);
            if (lookahead == '*')
                ADVANCE(7);
            if (lookahead == '+')
                ADVANCE(9);
            if (lookahead == '-')
                ADVANCE(11);
            if (lookahead == '/')
                ADVANCE(15);
            if (lookahead == '<')
                ADVANCE(20);
            if (lookahead == '>')
                ADVANCE(23);
            if (lookahead == '[')
                ADVANCE(27);
            if (lookahead == '^')
                ADVANCE(29);
            if (lookahead == 'a')
                ADVANCE(154);
            if (lookahead == 'o')
                ADVANCE(140);
            if (lookahead == '|')
                ADVANCE(117);
            if (lookahead == '}')
                ADVANCE(118);
            LEX_ERROR();
        case 177:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(177);
            if (lookahead == '#')
                ADVANCE(2);
            if (lookahead == '&')
                ADVANCE(4);
            if (lookahead == '(')
                ADVANCE(5);
            if (lookahead == '*')
                ADVANCE(7);
            if (lookahead == '+')
                ADVANCE(9);
            if (lookahead == ',')
                ADVANCE(10);
            if (lookahead == '-')
                ADVANCE(11);
            if (lookahead == '/')
                ADVANCE(15);
            if (lookahead == '<')
                ADVANCE(20);
            if (lookahead == '>')
                ADVANCE(23);
            if (lookahead == '[')
                ADVANCE(27);
            if (lookahead == '^')
                ADVANCE(29);
            if (lookahead == 'a')
                ADVANCE(154);
            if (lookahead == 'f')
                ADVANCE(135);
            if (lookahead == 'o')
                ADVANCE(140);
            if (lookahead == '|')
                ADVANCE(117);
            if (lookahead == '}')
                ADVANCE(118);
            LEX_ERROR();
        case 178:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(178);
            if (lookahead == '#')
                ADVANCE(2);
            if (lookahead == '&')
                ADVANCE(4);
            if (lookahead == '(')
                ADVANCE(5);
            if (lookahead == '*')
                ADVANCE(7);
            if (lookahead == '+')
                ADVANCE(9);
            if (lookahead == ',')
                ADVANCE(10);
            if (lookahead == '-')
                ADVANCE(11);
            if (lookahead == '/')
                ADVANCE(15);
            if (lookahead == '<')
                ADVANCE(20);
            if (lookahead == '>')
                ADVANCE(23);
            if (lookahead == '[')
                ADVANCE(27);
            if (lookahead == ']')
                ADVANCE(28);
            if (lookahead == '^')
                ADVANCE(29);
            if (lookahead == 'a')
                ADVANCE(154);
            if (lookahead == 'f')
                ADVANCE(135);
            if (lookahead == 'o')
                ADVANCE(140);
            if (lookahead == '|')
                ADVANCE(117);
            LEX_ERROR();
        case 179:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(179);
            if (lookahead == '#')
                ADVANCE(2);
            if (lookahead == '&')
                ADVANCE(4);
            if (lookahead == '(')
                ADVANCE(5);
            if (lookahead == '*')
                ADVANCE(7);
            if (lookahead == '+')
                ADVANCE(9);
            if (lookahead == '-')
                ADVANCE(11);
            if (lookahead == '/')
                ADVANCE(15);
            if (lookahead == '<')
                ADVANCE(20);
            if (lookahead == '>')
                ADVANCE(23);
            if (lookahead == '[')
                ADVANCE(27);
            if (lookahead == ']')
                ADVANCE(28);
            if (lookahead == '^')
                ADVANCE(29);
            if (lookahead == 'a')
                ADVANCE(154);
            if (lookahead == 'o')
                ADVANCE(140);
            if (lookahead == '|')
                ADVANCE(117);
            LEX_ERROR();
        case 180:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(180);
            if (lookahead == '#')
                ADVANCE(2);
            if (lookahead == '&')
                ADVANCE(4);
            if (lookahead == '(')
                ADVANCE(5);
            if (lookahead == ')')
                ADVANCE(6);
            if (lookahead == '*')
                ADVANCE(7);
            if (lookahead == '+')
                ADVANCE(9);
            if (lookahead == '-')
                ADVANCE(11);
            if (lookahead == '/')
                ADVANCE(15);
            if (lookahead == '<')
                ADVANCE(20);
            if (lookahead == '>')
                ADVANCE(23);
            if (lookahead == '[')
                ADVANCE(27);
            if (lookahead == '^')
                ADVANCE(29);
            if (lookahead == 'a')
                ADVANCE(154);
            if (lookahead == 'o')
                ADVANCE(140);
            if (lookahead == '|')
                ADVANCE(117);
            LEX_ERROR();
        case 181:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(181);
            if (lookahead == '#')
                ADVANCE(2);
            if (lookahead == '&')
                ADVANCE(4);
            if (lookahead == '(')
                ADVANCE(5);
            if (lookahead == '*')
                ADVANCE(7);
            if (lookahead == '+')
                ADVANCE(9);
            if (lookahead == ',')
                ADVANCE(10);
            if (lookahead == '-')
                ADVANCE(11);
            if (lookahead == '/')
                ADVANCE(15);
            if (lookahead == '<')
                ADVANCE(20);
            if (lookahead == '>')
                ADVANCE(23);
            if (lookahead == '[')
                ADVANCE(27);
            if (lookahead == '^')
                ADVANCE(29);
            if (lookahead == 'a')
                ADVANCE(154);
            if (lookahead == 'o')
                ADVANCE(140);
            if (lookahead == '|')
                ADVANCE(117);
            LEX_ERROR();
        case 182:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(182);
            if (lookahead == '#')
                ADVANCE(2);
            if (lookahead == '(')
                ADVANCE(5);
            if (lookahead == ')')
                ADVANCE(6);
            if (lookahead == ',')
                ADVANCE(10);
            if (lookahead == '.')
                ADVANCE(124);
            if (lookahead == 'a')
                ADVANCE(183);
            LEX_ERROR();
        case 183:
            if (lookahead == 's')
                ADVANCE(134);
            LEX_ERROR();
        case 184:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(184);
            if (lookahead == '#')
                ADVANCE(2);
            if (lookahead == '(')
                ADVANCE(5);
            LEX_ERROR();
        case 185:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(185);
            if (lookahead == '#')
                ADVANCE(2);
            if (lookahead == '(')
                ADVANCE(5);
            if (lookahead == ')')
                ADVANCE(6);
            if (lookahead == ',')
                ADVANCE(10);
            if (lookahead == '.')
                ADVANCE(124);
            if (lookahead == 'a')
                ADVANCE(183);
            if (lookahead == 'i')
                ADVANCE(186);
            LEX_ERROR();
        case 186:
            if (lookahead == 'm')
                ADVANCE(187);
            LEX_ERROR();
        case 187:
            if (lookahead == 'p')
                ADVANCE(188);
            LEX_ERROR();
        case 188:
            if (lookahead == 'o')
                ADVANCE(189);
            LEX_ERROR();
        case 189:
            if (lookahead == 'r')
                ADVANCE(190);
            LEX_ERROR();
        case 190:
            if (lookahead == 't')
                ADVANCE(191);
            LEX_ERROR();
        case 191:
            ACCEPT_TOKEN(anon_sym_import);
        case 192:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(192);
            if (lookahead == '#')
                ADVANCE(2);
            if (lookahead == '(')
                ADVANCE(5);
            if (lookahead == ':')
                ADVANCE(18);
            LEX_ERROR();
        case 193:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(193);
            if (lookahead == '#')
                ADVANCE(2);
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(16);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == 'a') ||
                (lookahead == 'e') ||
                (lookahead == 'g') ||
                (lookahead == 'h') ||
                ('j' <= lookahead && lookahead <= 'm') ||
                (lookahead == 'o') ||
                (lookahead == 'q') ||
                ('s' <= lookahead && lookahead <= 'z'))
                ADVANCE(26);
            if (lookahead == '[')
                ADVANCE(27);
            if (lookahead == 'b')
                ADVANCE(34);
            if (lookahead == 'c')
                ADVANCE(194);
            if (lookahead == 'd')
                ADVANCE(195);
            if (lookahead == 'f')
                ADVANCE(197);
            if (lookahead == 'i')
                ADVANCE(198);
            if (lookahead == 'n')
                ADVANCE(86);
            if (lookahead == 'p')
                ADVANCE(91);
            if (lookahead == 'r')
                ADVANCE(99);
            if (lookahead == '{')
                ADVANCE(116);
            LEX_ERROR();
        case 194:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'n') ||
                ('p' <= lookahead && lookahead <= 'z'))
                ADVANCE(26);
            if (lookahead == 'o')
                ADVANCE(44);
            ACCEPT_TOKEN(sym_identifier);
        case 195:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'z'))
                ADVANCE(26);
            if (lookahead == 'e')
                ADVANCE(196);
            ACCEPT_TOKEN(sym_identifier);
        case 196:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'k') ||
                ('m' <= lookahead && lookahead <= 'z'))
                ADVANCE(26);
            if (lookahead == 'l')
                ADVANCE(54);
            ACCEPT_TOKEN(sym_identifier);
        case 197:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'q') ||
                ('s' <= lookahead && lookahead <= 'z'))
                ADVANCE(26);
            if (lookahead == 'r')
                ADVANCE(75);
            ACCEPT_TOKEN(sym_identifier);
        case 198:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'l') ||
                ('n' <= lookahead && lookahead <= 'z'))
                ADVANCE(26);
            if (lookahead == 'm')
                ADVANCE(80);
            ACCEPT_TOKEN(sym_identifier);
        case 199:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(199);
            if (lookahead == '#')
                ADVANCE(2);
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(16);
            if (lookahead == '@')
                ADVANCE(25);
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
                ADVANCE(26);
            if (lookahead == '[')
                ADVANCE(27);
            if (lookahead == 'b')
                ADVANCE(34);
            if (lookahead == 'c')
                ADVANCE(39);
            if (lookahead == 'd')
                ADVANCE(51);
            if (lookahead == 'f')
                ADVANCE(120);
            if (lookahead == 'i')
                ADVANCE(121);
            if (lookahead == 'n')
                ADVANCE(86);
            if (lookahead == 'p')
                ADVANCE(91);
            if (lookahead == 'r')
                ADVANCE(99);
            if (lookahead == 't')
                ADVANCE(105);
            if (lookahead == 'w')
                ADVANCE(108);
            if (lookahead == '{')
                ADVANCE(116);
            LEX_ERROR();
        case 200:
            if (lookahead == 0)
                ADVANCE(1);
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(200);
            if (lookahead == '#')
                ADVANCE(2);
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(16);
            if (lookahead == ';')
                ADVANCE(19);
            if (lookahead == '@')
                ADVANCE(25);
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
                ADVANCE(26);
            if (lookahead == '[')
                ADVANCE(27);
            if (lookahead == 'b')
                ADVANCE(34);
            if (lookahead == 'c')
                ADVANCE(39);
            if (lookahead == 'd')
                ADVANCE(51);
            if (lookahead == 'e')
                ADVANCE(55);
            if (lookahead == 'f')
                ADVANCE(66);
            if (lookahead == 'i')
                ADVANCE(121);
            if (lookahead == 'n')
                ADVANCE(86);
            if (lookahead == 'p')
                ADVANCE(91);
            if (lookahead == 'r')
                ADVANCE(99);
            if (lookahead == 't')
                ADVANCE(105);
            if (lookahead == 'w')
                ADVANCE(108);
            if (lookahead == '{')
                ADVANCE(116);
            LEX_ERROR();
        case 201:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(201);
            if (lookahead == '#')
                ADVANCE(2);
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(16);
            if (lookahead == '@')
                ADVANCE(25);
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
                ADVANCE(26);
            if (lookahead == '[')
                ADVANCE(27);
            if (lookahead == 'b')
                ADVANCE(34);
            if (lookahead == 'c')
                ADVANCE(39);
            if (lookahead == 'd')
                ADVANCE(51);
            if (lookahead == 'e')
                ADVANCE(55);
            if (lookahead == 'f')
                ADVANCE(66);
            if (lookahead == 'i')
                ADVANCE(121);
            if (lookahead == 'n')
                ADVANCE(86);
            if (lookahead == 'p')
                ADVANCE(91);
            if (lookahead == 'r')
                ADVANCE(99);
            if (lookahead == 't')
                ADVANCE(105);
            if (lookahead == 'w')
                ADVANCE(108);
            if (lookahead == '{')
                ADVANCE(116);
            LEX_ERROR();
        case 202:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(202);
            if (lookahead == '#')
                ADVANCE(2);
            if (lookahead == ')')
                ADVANCE(6);
            if (lookahead == '*')
                ADVANCE(203);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(26);
            LEX_ERROR();
        case 203:
            ACCEPT_TOKEN(anon_sym_STAR);
        case 204:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(204);
            if (lookahead == '#')
                ADVANCE(2);
            if (lookahead == '*')
                ADVANCE(203);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(26);
            LEX_ERROR();
        case 205:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(205);
            if (lookahead == '#')
                ADVANCE(2);
            if (lookahead == ')')
                ADVANCE(6);
            if (lookahead == ',')
                ADVANCE(10);
            if (lookahead == '=')
                ADVANCE(22);
            LEX_ERROR();
        case 206:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(206);
            if (lookahead == '#')
                ADVANCE(2);
            if (lookahead == '*')
                ADVANCE(203);
            LEX_ERROR();
        case 207:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(207);
            if (lookahead == '#')
                ADVANCE(2);
            if (lookahead == ',')
                ADVANCE(10);
            if (lookahead == ':')
                ADVANCE(18);
            LEX_ERROR();
        case 208:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(208);
            if (lookahead == '#')
                ADVANCE(2);
            if (lookahead == '&')
                ADVANCE(4);
            if (lookahead == '(')
                ADVANCE(5);
            if (lookahead == '*')
                ADVANCE(7);
            if (lookahead == '+')
                ADVANCE(9);
            if (lookahead == ',')
                ADVANCE(10);
            if (lookahead == '-')
                ADVANCE(11);
            if (lookahead == '/')
                ADVANCE(15);
            if (lookahead == ':')
                ADVANCE(18);
            if (lookahead == '<')
                ADVANCE(20);
            if (lookahead == '>')
                ADVANCE(23);
            if (lookahead == '[')
                ADVANCE(27);
            if (lookahead == '^')
                ADVANCE(29);
            if (lookahead == 'a')
                ADVANCE(131);
            if (lookahead == 'o')
                ADVANCE(140);
            if (lookahead == '|')
                ADVANCE(117);
            LEX_ERROR();
        case 209:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(209);
            if (lookahead == '#')
                ADVANCE(2);
            if (lookahead == '&')
                ADVANCE(4);
            if (lookahead == '(')
                ADVANCE(5);
            if (lookahead == '*')
                ADVANCE(7);
            if (lookahead == '+')
                ADVANCE(9);
            if (lookahead == ',')
                ADVANCE(10);
            if (lookahead == '-')
                ADVANCE(11);
            if (lookahead == '/')
                ADVANCE(15);
            if (lookahead == ':')
                ADVANCE(18);
            if (lookahead == '<')
                ADVANCE(20);
            if (lookahead == '>')
                ADVANCE(23);
            if (lookahead == '[')
                ADVANCE(27);
            if (lookahead == '^')
                ADVANCE(29);
            if (lookahead == 'a')
                ADVANCE(154);
            if (lookahead == 'o')
                ADVANCE(140);
            if (lookahead == '|')
                ADVANCE(117);
            LEX_ERROR();
        case 210:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(210);
            if (lookahead == '#')
                ADVANCE(2);
            if (lookahead == 'e')
                ADVANCE(211);
            if (lookahead == 'f')
                ADVANCE(217);
            LEX_ERROR();
        case 211:
            if (lookahead == 'x')
                ADVANCE(212);
            LEX_ERROR();
        case 212:
            if (lookahead == 'c')
                ADVANCE(213);
            LEX_ERROR();
        case 213:
            if (lookahead == 'e')
                ADVANCE(214);
            LEX_ERROR();
        case 214:
            if (lookahead == 'p')
                ADVANCE(215);
            LEX_ERROR();
        case 215:
            if (lookahead == 't')
                ADVANCE(216);
            LEX_ERROR();
        case 216:
            ACCEPT_TOKEN(anon_sym_except);
        case 217:
            if (lookahead == 'i')
                ADVANCE(218);
            LEX_ERROR();
        case 218:
            if (lookahead == 'n')
                ADVANCE(219);
            LEX_ERROR();
        case 219:
            if (lookahead == 'a')
                ADVANCE(220);
            LEX_ERROR();
        case 220:
            if (lookahead == 'l')
                ADVANCE(221);
            LEX_ERROR();
        case 221:
            if (lookahead == 'l')
                ADVANCE(222);
            LEX_ERROR();
        case 222:
            if (lookahead == 'y')
                ADVANCE(223);
            LEX_ERROR();
        case 223:
            ACCEPT_TOKEN(anon_sym_finally);
        case 224:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(224);
            if (lookahead == '#')
                ADVANCE(2);
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(16);
            if (lookahead == '@')
                ADVANCE(25);
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
                ADVANCE(26);
            if (lookahead == '[')
                ADVANCE(27);
            if (lookahead == 'b')
                ADVANCE(34);
            if (lookahead == 'c')
                ADVANCE(39);
            if (lookahead == 'd')
                ADVANCE(51);
            if (lookahead == 'e')
                ADVANCE(225);
            if (lookahead == 'f')
                ADVANCE(66);
            if (lookahead == 'i')
                ADVANCE(121);
            if (lookahead == 'n')
                ADVANCE(86);
            if (lookahead == 'p')
                ADVANCE(91);
            if (lookahead == 'r')
                ADVANCE(99);
            if (lookahead == 't')
                ADVANCE(105);
            if (lookahead == 'w')
                ADVANCE(108);
            if (lookahead == '{')
                ADVANCE(116);
            LEX_ERROR();
        case 225:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'k') ||
                ('m' <= lookahead && lookahead <= 'w') ||
                (lookahead == 'y') ||
                (lookahead == 'z'))
                ADVANCE(26);
            if (lookahead == 'l')
                ADVANCE(226);
            if (lookahead == 'x')
                ADVANCE(61);
            ACCEPT_TOKEN(sym_identifier);
        case 226:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'r') ||
                ('t' <= lookahead && lookahead <= 'z'))
                ADVANCE(26);
            if (lookahead == 's')
                ADVANCE(59);
            ACCEPT_TOKEN(sym_identifier);
        case 227:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(227);
            if (lookahead == '#')
                ADVANCE(2);
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(16);
            if (lookahead == '@')
                ADVANCE(25);
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
                ADVANCE(26);
            if (lookahead == '[')
                ADVANCE(27);
            if (lookahead == 'b')
                ADVANCE(34);
            if (lookahead == 'c')
                ADVANCE(39);
            if (lookahead == 'd')
                ADVANCE(51);
            if (lookahead == 'f')
                ADVANCE(66);
            if (lookahead == 'i')
                ADVANCE(121);
            if (lookahead == 'n')
                ADVANCE(86);
            if (lookahead == 'p')
                ADVANCE(91);
            if (lookahead == 'r')
                ADVANCE(99);
            if (lookahead == 't')
                ADVANCE(105);
            if (lookahead == 'w')
                ADVANCE(108);
            if (lookahead == '{')
                ADVANCE(116);
            LEX_ERROR();
        case 228:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(228);
            if (lookahead == '#')
                ADVANCE(2);
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(16);
            if (lookahead == '@')
                ADVANCE(25);
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
                ADVANCE(26);
            if (lookahead == '[')
                ADVANCE(27);
            if (lookahead == 'b')
                ADVANCE(34);
            if (lookahead == 'c')
                ADVANCE(39);
            if (lookahead == 'd')
                ADVANCE(51);
            if (lookahead == 'e')
                ADVANCE(229);
            if (lookahead == 'f')
                ADVANCE(120);
            if (lookahead == 'i')
                ADVANCE(121);
            if (lookahead == 'n')
                ADVANCE(86);
            if (lookahead == 'p')
                ADVANCE(91);
            if (lookahead == 'r')
                ADVANCE(99);
            if (lookahead == 't')
                ADVANCE(105);
            if (lookahead == 'w')
                ADVANCE(108);
            if (lookahead == '{')
                ADVANCE(116);
            LEX_ERROR();
        case 229:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'k') ||
                ('m' <= lookahead && lookahead <= 'z'))
                ADVANCE(26);
            if (lookahead == 'l')
                ADVANCE(226);
            ACCEPT_TOKEN(sym_identifier);
        case 230:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(230);
            if (lookahead == '#')
                ADVANCE(2);
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(16);
            if (lookahead == '@')
                ADVANCE(25);
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
                ADVANCE(26);
            if (lookahead == '[')
                ADVANCE(27);
            if (lookahead == 'b')
                ADVANCE(34);
            if (lookahead == 'c')
                ADVANCE(39);
            if (lookahead == 'd')
                ADVANCE(51);
            if (lookahead == 'e')
                ADVANCE(231);
            if (lookahead == 'f')
                ADVANCE(120);
            if (lookahead == 'i')
                ADVANCE(121);
            if (lookahead == 'n')
                ADVANCE(86);
            if (lookahead == 'p')
                ADVANCE(91);
            if (lookahead == 'r')
                ADVANCE(99);
            if (lookahead == 't')
                ADVANCE(105);
            if (lookahead == 'w')
                ADVANCE(108);
            if (lookahead == '{')
                ADVANCE(116);
            LEX_ERROR();
        case 231:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'k') ||
                ('m' <= lookahead && lookahead <= 'z'))
                ADVANCE(26);
            if (lookahead == 'l')
                ADVANCE(56);
            ACCEPT_TOKEN(sym_identifier);
        case 232:
            if (lookahead == 0)
                ADVANCE(1);
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(232);
            if (lookahead == '#')
                ADVANCE(2);
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(16);
            if (lookahead == ';')
                ADVANCE(19);
            if (lookahead == '@')
                ADVANCE(25);
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
                ADVANCE(26);
            if (lookahead == '[')
                ADVANCE(27);
            if (lookahead == 'b')
                ADVANCE(34);
            if (lookahead == 'c')
                ADVANCE(39);
            if (lookahead == 'd')
                ADVANCE(51);
            if (lookahead == 'e')
                ADVANCE(225);
            if (lookahead == 'f')
                ADVANCE(66);
            if (lookahead == 'i')
                ADVANCE(121);
            if (lookahead == 'n')
                ADVANCE(86);
            if (lookahead == 'p')
                ADVANCE(91);
            if (lookahead == 'r')
                ADVANCE(99);
            if (lookahead == 't')
                ADVANCE(105);
            if (lookahead == 'w')
                ADVANCE(108);
            if (lookahead == '{')
                ADVANCE(116);
            LEX_ERROR();
        case 233:
            if (lookahead == 0)
                ADVANCE(1);
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(233);
            if (lookahead == '#')
                ADVANCE(2);
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(16);
            if (lookahead == ';')
                ADVANCE(19);
            if (lookahead == '@')
                ADVANCE(25);
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
                ADVANCE(26);
            if (lookahead == '[')
                ADVANCE(27);
            if (lookahead == 'b')
                ADVANCE(34);
            if (lookahead == 'c')
                ADVANCE(39);
            if (lookahead == 'd')
                ADVANCE(51);
            if (lookahead == 'f')
                ADVANCE(66);
            if (lookahead == 'i')
                ADVANCE(121);
            if (lookahead == 'n')
                ADVANCE(86);
            if (lookahead == 'p')
                ADVANCE(91);
            if (lookahead == 'r')
                ADVANCE(99);
            if (lookahead == 't')
                ADVANCE(105);
            if (lookahead == 'w')
                ADVANCE(108);
            if (lookahead == '{')
                ADVANCE(116);
            LEX_ERROR();
        case 234:
            if (lookahead == 0)
                ADVANCE(1);
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(234);
            if (lookahead == '#')
                ADVANCE(2);
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(16);
            if (lookahead == ';')
                ADVANCE(19);
            if (lookahead == '@')
                ADVANCE(25);
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
                ADVANCE(26);
            if (lookahead == '[')
                ADVANCE(27);
            if (lookahead == 'b')
                ADVANCE(34);
            if (lookahead == 'c')
                ADVANCE(39);
            if (lookahead == 'd')
                ADVANCE(51);
            if (lookahead == 'e')
                ADVANCE(229);
            if (lookahead == 'f')
                ADVANCE(120);
            if (lookahead == 'i')
                ADVANCE(121);
            if (lookahead == 'n')
                ADVANCE(86);
            if (lookahead == 'p')
                ADVANCE(91);
            if (lookahead == 'r')
                ADVANCE(99);
            if (lookahead == 't')
                ADVANCE(105);
            if (lookahead == 'w')
                ADVANCE(108);
            if (lookahead == '{')
                ADVANCE(116);
            LEX_ERROR();
        case 235:
            if (lookahead == 0)
                ADVANCE(1);
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(235);
            if (lookahead == '#')
                ADVANCE(2);
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(16);
            if (lookahead == ';')
                ADVANCE(19);
            if (lookahead == '@')
                ADVANCE(25);
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
                ADVANCE(26);
            if (lookahead == '[')
                ADVANCE(27);
            if (lookahead == 'b')
                ADVANCE(34);
            if (lookahead == 'c')
                ADVANCE(39);
            if (lookahead == 'd')
                ADVANCE(51);
            if (lookahead == 'e')
                ADVANCE(231);
            if (lookahead == 'f')
                ADVANCE(120);
            if (lookahead == 'i')
                ADVANCE(121);
            if (lookahead == 'n')
                ADVANCE(86);
            if (lookahead == 'p')
                ADVANCE(91);
            if (lookahead == 'r')
                ADVANCE(99);
            if (lookahead == 't')
                ADVANCE(105);
            if (lookahead == 'w')
                ADVANCE(108);
            if (lookahead == '{')
                ADVANCE(116);
            LEX_ERROR();
        case 236:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(236);
            if (lookahead == '#')
                ADVANCE(2);
            if (lookahead == ',')
                ADVANCE(10);
            LEX_ERROR();
        case 237:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(237);
            if (lookahead == '#')
                ADVANCE(2);
            if (lookahead == '.')
                ADVANCE(124);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'h') ||
                ('j' <= lookahead && lookahead <= 'z'))
                ADVANCE(26);
            if (lookahead == 'i')
                ADVANCE(198);
            LEX_ERROR();
        case 238:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(238);
            if (lookahead == '#')
                ADVANCE(2);
            if (lookahead == ')')
                ADVANCE(6);
            if (lookahead == ',')
                ADVANCE(10);
            if (lookahead == '.')
                ADVANCE(124);
            if (lookahead == 'a')
                ADVANCE(183);
            if (lookahead == 'i')
                ADVANCE(186);
            LEX_ERROR();
        case 239:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(239);
            if (lookahead == '#')
                ADVANCE(2);
            if (lookahead == 'i')
                ADVANCE(186);
            LEX_ERROR();
        case 240:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(240);
            if (lookahead == '#')
                ADVANCE(2);
            if (lookahead == '(')
                ADVANCE(5);
            if (lookahead == '*')
                ADVANCE(203);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(26);
            LEX_ERROR();
        case 241:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(241);
            if (lookahead == '#')
                ADVANCE(2);
            if (lookahead == ',')
                ADVANCE(10);
            if (lookahead == 'a')
                ADVANCE(183);
            LEX_ERROR();
        case 242:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(242);
            if (lookahead == '#')
                ADVANCE(2);
            if (lookahead == ')')
                ADVANCE(6);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(26);
            LEX_ERROR();
        case 243:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(243);
            if (lookahead == '#')
                ADVANCE(2);
            if (lookahead == ')')
                ADVANCE(6);
            if (lookahead == ',')
                ADVANCE(10);
            if (lookahead == 'a')
                ADVANCE(183);
            LEX_ERROR();
        case 244:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(244);
            if (lookahead == '#')
                ADVANCE(2);
            if (lookahead == ')')
                ADVANCE(6);
            if (lookahead == '*')
                ADVANCE(7);
            if (lookahead == '.')
                ADVANCE(157);
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(16);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'm') ||
                ('o' <= lookahead && lookahead <= 'z'))
                ADVANCE(26);
            if (lookahead == '[')
                ADVANCE(27);
            if (lookahead == ']')
                ADVANCE(28);
            if (lookahead == 'n')
                ADVANCE(86);
            if (lookahead == '{')
                ADVANCE(116);
            if (lookahead == '}')
                ADVANCE(118);
            LEX_ERROR();
        case 245:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(245);
            if (lookahead == '#')
                ADVANCE(2);
            if (lookahead == '*')
                ADVANCE(203);
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(16);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'm') ||
                ('o' <= lookahead && lookahead <= 'z'))
                ADVANCE(26);
            if (lookahead == '[')
                ADVANCE(27);
            if (lookahead == 'n')
                ADVANCE(86);
            if (lookahead == '{')
                ADVANCE(116);
            LEX_ERROR();
        case 246:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(246);
            if (lookahead == '#')
                ADVANCE(2);
            if (lookahead == '&')
                ADVANCE(4);
            if (lookahead == '(')
                ADVANCE(5);
            if (lookahead == ')')
                ADVANCE(6);
            if (lookahead == '*')
                ADVANCE(7);
            if (lookahead == '+')
                ADVANCE(9);
            if (lookahead == ',')
                ADVANCE(10);
            if (lookahead == '-')
                ADVANCE(11);
            if (lookahead == '.')
                ADVANCE(124);
            if (lookahead == '/')
                ADVANCE(15);
            if (lookahead == ':')
                ADVANCE(18);
            if (lookahead == '<')
                ADVANCE(20);
            if (lookahead == '=')
                ADVANCE(22);
            if (lookahead == '>')
                ADVANCE(23);
            if (lookahead == '[')
                ADVANCE(27);
            if (lookahead == ']')
                ADVANCE(28);
            if (lookahead == '^')
                ADVANCE(29);
            if (lookahead == 'a')
                ADVANCE(131);
            if (lookahead == 'f')
                ADVANCE(135);
            if (lookahead == 'i')
                ADVANCE(247);
            if (lookahead == 'o')
                ADVANCE(140);
            if (lookahead == '|')
                ADVANCE(117);
            if (lookahead == '}')
                ADVANCE(118);
            LEX_ERROR();
        case 247:
            if (lookahead == 'm')
                ADVANCE(187);
            if (lookahead == 'n')
                ADVANCE(139);
            LEX_ERROR();
        case 248:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(248);
            if (lookahead == '#')
                ADVANCE(2);
            if (lookahead == ')')
                ADVANCE(6);
            if (lookahead == ':')
                ADVANCE(18);
            if (lookahead == 'i')
                ADVANCE(138);
            LEX_ERROR();
        case 249:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(249);
            if (lookahead == '#')
                ADVANCE(2);
            if (lookahead == '(')
                ADVANCE(5);
            if (lookahead == ')')
                ADVANCE(6);
            if (lookahead == ',')
                ADVANCE(10);
            if (lookahead == 'a')
                ADVANCE(183);
            if (lookahead == 'i')
                ADVANCE(186);
            LEX_ERROR();
        case 250:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(250);
            if (lookahead == '#')
                ADVANCE(2);
            if (lookahead == ')')
                ADVANCE(6);
            if (lookahead == ',')
                ADVANCE(10);
            if (lookahead == ':')
                ADVANCE(18);
            if (lookahead == ']')
                ADVANCE(28);
            if (lookahead == 'i')
                ADVANCE(138);
            if (lookahead == '}')
                ADVANCE(118);
            LEX_ERROR();
        case 251:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(251);
            if (lookahead == '#')
                ADVANCE(2);
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(16);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'm') ||
                ('o' <= lookahead && lookahead <= 'z'))
                ADVANCE(26);
            if (lookahead == '[')
                ADVANCE(27);
            if (lookahead == ']')
                ADVANCE(28);
            if (lookahead == 'n')
                ADVANCE(86);
            if (lookahead == '{')
                ADVANCE(116);
            if (lookahead == '}')
                ADVANCE(118);
            LEX_ERROR();
        case 252:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(252);
            if (lookahead == '#')
                ADVANCE(2);
            if (lookahead == '&')
                ADVANCE(4);
            if (lookahead == '(')
                ADVANCE(5);
            if (lookahead == ')')
                ADVANCE(6);
            if (lookahead == '*')
                ADVANCE(7);
            if (lookahead == '+')
                ADVANCE(9);
            if (lookahead == ',')
                ADVANCE(10);
            if (lookahead == '-')
                ADVANCE(11);
            if (lookahead == '/')
                ADVANCE(15);
            if (lookahead == ':')
                ADVANCE(18);
            if (lookahead == '<')
                ADVANCE(20);
            if (lookahead == '>')
                ADVANCE(23);
            if (lookahead == '[')
                ADVANCE(27);
            if (lookahead == ']')
                ADVANCE(28);
            if (lookahead == '^')
                ADVANCE(29);
            if (lookahead == 'a')
                ADVANCE(154);
            if (lookahead == 'i')
                ADVANCE(138);
            if (lookahead == 'o')
                ADVANCE(140);
            if (lookahead == '|')
                ADVANCE(117);
            if (lookahead == '}')
                ADVANCE(118);
            LEX_ERROR();
        case 253:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(253);
            if (lookahead == '#')
                ADVANCE(2);
            if (lookahead == '&')
                ADVANCE(4);
            if (lookahead == '(')
                ADVANCE(5);
            if (lookahead == '*')
                ADVANCE(7);
            if (lookahead == '+')
                ADVANCE(9);
            if (lookahead == '-')
                ADVANCE(11);
            if (lookahead == '/')
                ADVANCE(15);
            if (lookahead == '<')
                ADVANCE(20);
            if (lookahead == '>')
                ADVANCE(23);
            if (lookahead == '[')
                ADVANCE(27);
            if (lookahead == ']')
                ADVANCE(28);
            if (lookahead == '^')
                ADVANCE(29);
            if (lookahead == 'a')
                ADVANCE(154);
            if (lookahead == 'o')
                ADVANCE(140);
            if (lookahead == '|')
                ADVANCE(117);
            if (lookahead == '}')
                ADVANCE(118);
            LEX_ERROR();
        case 254:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(254);
            if (lookahead == '#')
                ADVANCE(2);
            if (lookahead == ')')
                ADVANCE(6);
            if (lookahead == '*')
                ADVANCE(203);
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(16);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'm') ||
                ('o' <= lookahead && lookahead <= 'z'))
                ADVANCE(26);
            if (lookahead == '[')
                ADVANCE(27);
            if (lookahead == 'n')
                ADVANCE(86);
            if (lookahead == '{')
                ADVANCE(116);
            LEX_ERROR();
        case 255:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(255);
            if (lookahead == '#')
                ADVANCE(2);
            if (lookahead == '&')
                ADVANCE(4);
            if (lookahead == '(')
                ADVANCE(5);
            if (lookahead == '*')
                ADVANCE(7);
            if (lookahead == '+')
                ADVANCE(9);
            if (lookahead == ',')
                ADVANCE(10);
            if (lookahead == '-')
                ADVANCE(11);
            if (lookahead == '/')
                ADVANCE(15);
            if (lookahead == ':')
                ADVANCE(18);
            if (lookahead == '<')
                ADVANCE(20);
            if (lookahead == '>')
                ADVANCE(23);
            if (lookahead == '[')
                ADVANCE(27);
            if (lookahead == ']')
                ADVANCE(28);
            if (lookahead == '^')
                ADVANCE(29);
            if (lookahead == 'a')
                ADVANCE(154);
            if (lookahead == 'o')
                ADVANCE(140);
            if (lookahead == '|')
                ADVANCE(117);
            if (lookahead == '}')
                ADVANCE(118);
            LEX_ERROR();
        case 256:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(256);
            if (lookahead == '#')
                ADVANCE(2);
            if (lookahead == '&')
                ADVANCE(4);
            if (lookahead == '(')
                ADVANCE(5);
            if (lookahead == ')')
                ADVANCE(6);
            if (lookahead == '*')
                ADVANCE(7);
            if (lookahead == '+')
                ADVANCE(9);
            if (lookahead == ',')
                ADVANCE(10);
            if (lookahead == '-')
                ADVANCE(11);
            if (lookahead == '/')
                ADVANCE(15);
            if (lookahead == ':')
                ADVANCE(18);
            if (lookahead == '<')
                ADVANCE(20);
            if (lookahead == '>')
                ADVANCE(23);
            if (lookahead == '[')
                ADVANCE(27);
            if (lookahead == '^')
                ADVANCE(29);
            if (lookahead == 'a')
                ADVANCE(154);
            if (lookahead == 'o')
                ADVANCE(140);
            if (lookahead == '|')
                ADVANCE(117);
            LEX_ERROR();
        case 257:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(257);
            if (lookahead == '#')
                ADVANCE(2);
            if (lookahead == '&')
                ADVANCE(4);
            if (lookahead == '(')
                ADVANCE(5);
            if (lookahead == ')')
                ADVANCE(6);
            if (lookahead == '*')
                ADVANCE(7);
            if (lookahead == '+')
                ADVANCE(9);
            if (lookahead == ',')
                ADVANCE(10);
            if (lookahead == '-')
                ADVANCE(11);
            if (lookahead == '.')
                ADVANCE(124);
            if (lookahead == '/')
                ADVANCE(15);
            if (lookahead == ':')
                ADVANCE(18);
            if (lookahead == '<')
                ADVANCE(20);
            if (lookahead == '=')
                ADVANCE(22);
            if (lookahead == '>')
                ADVANCE(23);
            if (lookahead == '[')
                ADVANCE(27);
            if (lookahead == ']')
                ADVANCE(28);
            if (lookahead == '^')
                ADVANCE(29);
            if (lookahead == 'a')
                ADVANCE(131);
            if (lookahead == 'i')
                ADVANCE(138);
            if (lookahead == 'o')
                ADVANCE(140);
            if (lookahead == '|')
                ADVANCE(117);
            if (lookahead == '}')
                ADVANCE(118);
            LEX_ERROR();
        case 258:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(258);
            if (lookahead == '#')
                ADVANCE(2);
            if (lookahead == '&')
                ADVANCE(4);
            if (lookahead == '(')
                ADVANCE(5);
            if (lookahead == ')')
                ADVANCE(6);
            if (lookahead == '*')
                ADVANCE(7);
            if (lookahead == '+')
                ADVANCE(9);
            if (lookahead == ',')
                ADVANCE(10);
            if (lookahead == '-')
                ADVANCE(11);
            if (lookahead == '/')
                ADVANCE(15);
            if (lookahead == ':')
                ADVANCE(18);
            if (lookahead == '<')
                ADVANCE(20);
            if (lookahead == '>')
                ADVANCE(23);
            if (lookahead == '[')
                ADVANCE(27);
            if (lookahead == ']')
                ADVANCE(28);
            if (lookahead == '^')
                ADVANCE(29);
            if (lookahead == 'a')
                ADVANCE(131);
            if (lookahead == 'i')
                ADVANCE(138);
            if (lookahead == 'o')
                ADVANCE(140);
            if (lookahead == '|')
                ADVANCE(117);
            if (lookahead == '}')
                ADVANCE(118);
            LEX_ERROR();
        case 259:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(259);
            if (lookahead == '#')
                ADVANCE(2);
            if (lookahead == '&')
                ADVANCE(4);
            if (lookahead == '(')
                ADVANCE(5);
            if (lookahead == ')')
                ADVANCE(6);
            if (lookahead == '*')
                ADVANCE(7);
            if (lookahead == '+')
                ADVANCE(9);
            if (lookahead == ',')
                ADVANCE(10);
            if (lookahead == '-')
                ADVANCE(11);
            if (lookahead == '.')
                ADVANCE(124);
            if (lookahead == '/')
                ADVANCE(15);
            if (lookahead == '<')
                ADVANCE(20);
            if (lookahead == '=')
                ADVANCE(22);
            if (lookahead == '>')
                ADVANCE(23);
            if (lookahead == '[')
                ADVANCE(27);
            if (lookahead == '^')
                ADVANCE(29);
            if (lookahead == 'a')
                ADVANCE(131);
            if (lookahead == 'o')
                ADVANCE(140);
            if (lookahead == '|')
                ADVANCE(117);
            LEX_ERROR();
        default:
            LEX_ERROR();
    }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
    [0] = {.lex_state = 0, .external_tokens = 1},
    [1] = {.lex_state = 119},
    [2] = {.lex_state = 122},
    [3] = {.lex_state = 123},
    [4] = {.lex_state = 125},
    [5] = {.lex_state = 125},
    [6] = {.lex_state = 125},
    [7] = {.lex_state = 126, .external_tokens = 2},
    [8] = {.lex_state = 125},
    [9] = {.lex_state = 125},
    [10] = {.lex_state = 125},
    [11] = {.lex_state = 127},
    [12] = {.lex_state = 125},
    [13] = {.lex_state = 122},
    [14] = {.lex_state = 122},
    [15] = {.lex_state = 122},
    [16] = {.lex_state = 125},
    [17] = {.lex_state = 128},
    [18] = {.lex_state = 129},
    [19] = {.lex_state = 130, .external_tokens = 2},
    [20] = {.lex_state = 142},
    [21] = {.lex_state = 143, .external_tokens = 2},
    [22] = {.lex_state = 126, .external_tokens = 2},
    [23] = {.lex_state = 143, .external_tokens = 2},
    [24] = {.lex_state = 143, .external_tokens = 2},
    [25] = {.lex_state = 144},
    [26] = {.lex_state = 153, .external_tokens = 2},
    [27] = {.lex_state = 143, .external_tokens = 2},
    [28] = {.lex_state = 144},
    [29] = {.lex_state = 143, .external_tokens = 2},
    [30] = {.lex_state = 144},
    [31] = {.lex_state = 142},
    [32] = {.lex_state = 143, .external_tokens = 2},
    [33] = {.lex_state = 155},
    [34] = {.lex_state = 125},
    [35] = {.lex_state = 125},
    [36] = {.lex_state = 125},
    [37] = {.lex_state = 125},
    [38] = {.lex_state = 125},
    [39] = {.lex_state = 125},
    [40] = {.lex_state = 156},
    [41] = {.lex_state = 125},
    [42] = {.lex_state = 128},
    [43] = {.lex_state = 158},
    [44] = {.lex_state = 129},
    [45] = {.lex_state = 130},
    [46] = {.lex_state = 159},
    [47] = {.lex_state = 155},
    [48] = {.lex_state = 160},
    [49] = {.lex_state = 125},
    [50] = {.lex_state = 125},
    [51] = {.lex_state = 125},
    [52] = {.lex_state = 125},
    [53] = {.lex_state = 125},
    [54] = {.lex_state = 125},
    [55] = {.lex_state = 156},
    [56] = {.lex_state = 130, .external_tokens = 2},
    [57] = {.lex_state = 158},
    [58] = {.lex_state = 160},
    [59] = {.lex_state = 130, .external_tokens = 2},
    [60] = {.lex_state = 158},
    [61] = {.lex_state = 130, .external_tokens = 2},
    [62] = {.lex_state = 159},
    [63] = {.lex_state = 158},
    [64] = {.lex_state = 159},
    [65] = {.lex_state = 160},
    [66] = {.lex_state = 130},
    [67] = {.lex_state = 158},
    [68] = {.lex_state = 160},
    [69] = {.lex_state = 130},
    [70] = {.lex_state = 130},
    [71] = {.lex_state = 158},
    [72] = {.lex_state = 159},
    [73] = {.lex_state = 159},
    [74] = {.lex_state = 159},
    [75] = {.lex_state = 159},
    [76] = {.lex_state = 159},
    [77] = {.lex_state = 130},
    [78] = {.lex_state = 159},
    [79] = {.lex_state = 125},
    [80] = {.lex_state = 125},
    [81] = {.lex_state = 125},
    [82] = {.lex_state = 161},
    [83] = {.lex_state = 162},
    [84] = {.lex_state = 163},
    [85] = {.lex_state = 163},
    [86] = {.lex_state = 164},
    [87] = {.lex_state = 155},
    [88] = {.lex_state = 162},
    [89] = {.lex_state = 163},
    [90] = {.lex_state = 163},
    [91] = {.lex_state = 164},
    [92] = {.lex_state = 130},
    [93] = {.lex_state = 165},
    [94] = {.lex_state = 163},
    [95] = {.lex_state = 130},
    [96] = {.lex_state = 165},
    [97] = {.lex_state = 162},
    [98] = {.lex_state = 163},
    [99] = {.lex_state = 164},
    [100] = {.lex_state = 130},
    [101] = {.lex_state = 125},
    [102] = {.lex_state = 125},
    [103] = {.lex_state = 125},
    [104] = {.lex_state = 125},
    [105] = {.lex_state = 125},
    [106] = {.lex_state = 125},
    [107] = {.lex_state = 162},
    [108] = {.lex_state = 162},
    [109] = {.lex_state = 162},
    [110] = {.lex_state = 162},
    [111] = {.lex_state = 162},
    [112] = {.lex_state = 162},
    [113] = {.lex_state = 163},
    [114] = {.lex_state = 164},
    [115] = {.lex_state = 130},
    [116] = {.lex_state = 167},
    [117] = {.lex_state = 130},
    [118] = {.lex_state = 165},
    [119] = {.lex_state = 163},
    [120] = {.lex_state = 165},
    [121] = {.lex_state = 164},
    [122] = {.lex_state = 167},
    [123] = {.lex_state = 125},
    [124] = {.lex_state = 162},
    [125] = {.lex_state = 125},
    [126] = {.lex_state = 130},
    [127] = {.lex_state = 168},
    [128] = {.lex_state = 169},
    [129] = {.lex_state = 129},
    [130] = {.lex_state = 125},
    [131] = {.lex_state = 130},
    [132] = {.lex_state = 170},
    [133] = {.lex_state = 129},
    [134] = {.lex_state = 130},
    [135] = {.lex_state = 125},
    [136] = {.lex_state = 130},
    [137] = {.lex_state = 171},
    [138] = {.lex_state = 170},
    [139] = {.lex_state = 125},
    [140] = {.lex_state = 125},
    [141] = {.lex_state = 125},
    [142] = {.lex_state = 125},
    [143] = {.lex_state = 125},
    [144] = {.lex_state = 125},
    [145] = {.lex_state = 125},
    [146] = {.lex_state = 171},
    [147] = {.lex_state = 171},
    [148] = {.lex_state = 171},
    [149] = {.lex_state = 171},
    [150] = {.lex_state = 171},
    [151] = {.lex_state = 125},
    [152] = {.lex_state = 172},
    [153] = {.lex_state = 125},
    [154] = {.lex_state = 125},
    [155] = {.lex_state = 125},
    [156] = {.lex_state = 125},
    [157] = {.lex_state = 125},
    [158] = {.lex_state = 125},
    [159] = {.lex_state = 172},
    [160] = {.lex_state = 172},
    [161] = {.lex_state = 172},
    [162] = {.lex_state = 172},
    [163] = {.lex_state = 172},
    [164] = {.lex_state = 125},
    [165] = {.lex_state = 173},
    [166] = {.lex_state = 174},
    [167] = {.lex_state = 125},
    [168] = {.lex_state = 125},
    [169] = {.lex_state = 125},
    [170] = {.lex_state = 125},
    [171] = {.lex_state = 125},
    [172] = {.lex_state = 125},
    [173] = {.lex_state = 125},
    [174] = {.lex_state = 175},
    [175] = {.lex_state = 125},
    [176] = {.lex_state = 174},
    [177] = {.lex_state = 174},
    [178] = {.lex_state = 174},
    [179] = {.lex_state = 174},
    [180] = {.lex_state = 174},
    [181] = {.lex_state = 174},
    [182] = {.lex_state = 174},
    [183] = {.lex_state = 125},
    [184] = {.lex_state = 125},
    [185] = {.lex_state = 176},
    [186] = {.lex_state = 125},
    [187] = {.lex_state = 125},
    [188] = {.lex_state = 125},
    [189] = {.lex_state = 125},
    [190] = {.lex_state = 125},
    [191] = {.lex_state = 125},
    [192] = {.lex_state = 130},
    [193] = {.lex_state = 176},
    [194] = {.lex_state = 176},
    [195] = {.lex_state = 176},
    [196] = {.lex_state = 176},
    [197] = {.lex_state = 176},
    [198] = {.lex_state = 170},
    [199] = {.lex_state = 129},
    [200] = {.lex_state = 125},
    [201] = {.lex_state = 125},
    [202] = {.lex_state = 125},
    [203] = {.lex_state = 125},
    [204] = {.lex_state = 125},
    [205] = {.lex_state = 125},
    [206] = {.lex_state = 125},
    [207] = {.lex_state = 125},
    [208] = {.lex_state = 130},
    [209] = {.lex_state = 170},
    [210] = {.lex_state = 129},
    [211] = {.lex_state = 130},
    [212] = {.lex_state = 130},
    [213] = {.lex_state = 172},
    [214] = {.lex_state = 168},
    [215] = {.lex_state = 168},
    [216] = {.lex_state = 168},
    [217] = {.lex_state = 168},
    [218] = {.lex_state = 168},
    [219] = {.lex_state = 173},
    [220] = {.lex_state = 125},
    [221] = {.lex_state = 176},
    [222] = {.lex_state = 130},
    [223] = {.lex_state = 125},
    [224] = {.lex_state = 177},
    [225] = {.lex_state = 125},
    [226] = {.lex_state = 125},
    [227] = {.lex_state = 125},
    [228] = {.lex_state = 125},
    [229] = {.lex_state = 125},
    [230] = {.lex_state = 125},
    [231] = {.lex_state = 177},
    [232] = {.lex_state = 177},
    [233] = {.lex_state = 177},
    [234] = {.lex_state = 177},
    [235] = {.lex_state = 177},
    [236] = {.lex_state = 172},
    [237] = {.lex_state = 125},
    [238] = {.lex_state = 130},
    [239] = {.lex_state = 178},
    [240] = {.lex_state = 128},
    [241] = {.lex_state = 125},
    [242] = {.lex_state = 125},
    [243] = {.lex_state = 125},
    [244] = {.lex_state = 125},
    [245] = {.lex_state = 125},
    [246] = {.lex_state = 125},
    [247] = {.lex_state = 125},
    [248] = {.lex_state = 130},
    [249] = {.lex_state = 158},
    [250] = {.lex_state = 128},
    [251] = {.lex_state = 130},
    [252] = {.lex_state = 130},
    [253] = {.lex_state = 159},
    [254] = {.lex_state = 178},
    [255] = {.lex_state = 178},
    [256] = {.lex_state = 178},
    [257] = {.lex_state = 178},
    [258] = {.lex_state = 178},
    [259] = {.lex_state = 173},
    [260] = {.lex_state = 125},
    [261] = {.lex_state = 125},
    [262] = {.lex_state = 179},
    [263] = {.lex_state = 125},
    [264] = {.lex_state = 125},
    [265] = {.lex_state = 125},
    [266] = {.lex_state = 125},
    [267] = {.lex_state = 125},
    [268] = {.lex_state = 125},
    [269] = {.lex_state = 130},
    [270] = {.lex_state = 179},
    [271] = {.lex_state = 179},
    [272] = {.lex_state = 179},
    [273] = {.lex_state = 179},
    [274] = {.lex_state = 179},
    [275] = {.lex_state = 159},
    [276] = {.lex_state = 130},
    [277] = {.lex_state = 125},
    [278] = {.lex_state = 180},
    [279] = {.lex_state = 125},
    [280] = {.lex_state = 125},
    [281] = {.lex_state = 125},
    [282] = {.lex_state = 125},
    [283] = {.lex_state = 125},
    [284] = {.lex_state = 125},
    [285] = {.lex_state = 180},
    [286] = {.lex_state = 180},
    [287] = {.lex_state = 180},
    [288] = {.lex_state = 180},
    [289] = {.lex_state = 180},
    [290] = {.lex_state = 162},
    [291] = {.lex_state = 153, .external_tokens = 2},
    [292] = {.lex_state = 153, .external_tokens = 2},
    [293] = {.lex_state = 153, .external_tokens = 2},
    [294] = {.lex_state = 153, .external_tokens = 2},
    [295] = {.lex_state = 181, .external_tokens = 2},
    [296] = {.lex_state = 153, .external_tokens = 2},
    [297] = {.lex_state = 162},
    [298] = {.lex_state = 163},
    [299] = {.lex_state = 163},
    [300] = {.lex_state = 164},
    [301] = {.lex_state = 155},
    [302] = {.lex_state = 162},
    [303] = {.lex_state = 163},
    [304] = {.lex_state = 163},
    [305] = {.lex_state = 164},
    [306] = {.lex_state = 130, .external_tokens = 2},
    [307] = {.lex_state = 165},
    [308] = {.lex_state = 163},
    [309] = {.lex_state = 130, .external_tokens = 2},
    [310] = {.lex_state = 165},
    [311] = {.lex_state = 164},
    [312] = {.lex_state = 130, .external_tokens = 2},
    [313] = {.lex_state = 164},
    [314] = {.lex_state = 130, .external_tokens = 2},
    [315] = {.lex_state = 167},
    [316] = {.lex_state = 130, .external_tokens = 2},
    [317] = {.lex_state = 165},
    [318] = {.lex_state = 163},
    [319] = {.lex_state = 165},
    [320] = {.lex_state = 164},
    [321] = {.lex_state = 167},
    [322] = {.lex_state = 143, .external_tokens = 2},
    [323] = {.lex_state = 130, .external_tokens = 2},
    [324] = {.lex_state = 168},
    [325] = {.lex_state = 169},
    [326] = {.lex_state = 129},
    [327] = {.lex_state = 125},
    [328] = {.lex_state = 130, .external_tokens = 2},
    [329] = {.lex_state = 170},
    [330] = {.lex_state = 129},
    [331] = {.lex_state = 130, .external_tokens = 2},
    [332] = {.lex_state = 130, .external_tokens = 2},
    [333] = {.lex_state = 173},
    [334] = {.lex_state = 125},
    [335] = {.lex_state = 176},
    [336] = {.lex_state = 130, .external_tokens = 2},
    [337] = {.lex_state = 129},
    [338] = {.lex_state = 125},
    [339] = {.lex_state = 130, .external_tokens = 2},
    [340] = {.lex_state = 170},
    [341] = {.lex_state = 129},
    [342] = {.lex_state = 130, .external_tokens = 2},
    [343] = {.lex_state = 130, .external_tokens = 2},
    [344] = {.lex_state = 173},
    [345] = {.lex_state = 125},
    [346] = {.lex_state = 176},
    [347] = {.lex_state = 130, .external_tokens = 2},
    [348] = {.lex_state = 130, .external_tokens = 2},
    [349] = {.lex_state = 178},
    [350] = {.lex_state = 128},
    [351] = {.lex_state = 125},
    [352] = {.lex_state = 130, .external_tokens = 2},
    [353] = {.lex_state = 158},
    [354] = {.lex_state = 128},
    [355] = {.lex_state = 130, .external_tokens = 2},
    [356] = {.lex_state = 130, .external_tokens = 2},
    [357] = {.lex_state = 173},
    [358] = {.lex_state = 125},
    [359] = {.lex_state = 179},
    [360] = {.lex_state = 130, .external_tokens = 2},
    [361] = {.lex_state = 181, .external_tokens = 2},
    [362] = {.lex_state = 182, .external_tokens = 2},
    [363] = {.lex_state = 184, .external_tokens = 2},
    [364] = {.lex_state = 125},
    [365] = {.lex_state = 144},
    [366] = {.lex_state = 126, .external_tokens = 2},
    [367] = {.lex_state = 144},
    [368] = {.lex_state = 162},
    [369] = {.lex_state = 126, .external_tokens = 2},
    [370] = {.lex_state = 125},
    [371] = {.lex_state = 163},
    [372] = {.lex_state = 126, .external_tokens = 2},
    [373] = {.lex_state = 125},
    [374] = {.lex_state = 162},
    [375] = {.lex_state = 162},
    [376] = {.lex_state = 122},
    [377] = {.lex_state = 185, .external_tokens = 2},
    [378] = {.lex_state = 122},
    [379] = {.lex_state = 185, .external_tokens = 2},
    [380] = {.lex_state = 185, .external_tokens = 2},
    [381] = {.lex_state = 192},
    [382] = {.lex_state = 125},
    [383] = {.lex_state = 193, .external_tokens = 3},
    [384] = {.lex_state = 199, .external_tokens = 4},
    [385] = {.lex_state = 126, .external_tokens = 2},
    [386] = {.lex_state = 143, .external_tokens = 2},
    [387] = {.lex_state = 200, .external_tokens = 2},
    [388] = {.lex_state = 125},
    [389] = {.lex_state = 125},
    [390] = {.lex_state = 125},
    [391] = {.lex_state = 127},
    [392] = {.lex_state = 125},
    [393] = {.lex_state = 122},
    [394] = {.lex_state = 122},
    [395] = {.lex_state = 199, .external_tokens = 4},
    [396] = {.lex_state = 126, .external_tokens = 2},
    [397] = {.lex_state = 199, .external_tokens = 4},
    [398] = {.lex_state = 199, .external_tokens = 4},
    [399] = {.lex_state = 199, .external_tokens = 4},
    [400] = {.lex_state = 144},
    [401] = {.lex_state = 199, .external_tokens = 4},
    [402] = {.lex_state = 200, .external_tokens = 2},
    [403] = {.lex_state = 199, .external_tokens = 4},
    [404] = {.lex_state = 199, .external_tokens = 4},
    [405] = {.lex_state = 192},
    [406] = {.lex_state = 125},
    [407] = {.lex_state = 193, .external_tokens = 3},
    [408] = {.lex_state = 199, .external_tokens = 4},
    [409] = {.lex_state = 126, .external_tokens = 2},
    [410] = {.lex_state = 199, .external_tokens = 4},
    [411] = {.lex_state = 201, .external_tokens = 4},
    [412] = {.lex_state = 199, .external_tokens = 4},
    [413] = {.lex_state = 201, .external_tokens = 4},
    [414] = {.lex_state = 164},
    [415] = {.lex_state = 162},
    [416] = {.lex_state = 163},
    [417] = {.lex_state = 127},
    [418] = {.lex_state = 193, .external_tokens = 3},
    [419] = {.lex_state = 199, .external_tokens = 4},
    [420] = {.lex_state = 184},
    [421] = {.lex_state = 202},
    [422] = {.lex_state = 127},
    [423] = {.lex_state = 193, .external_tokens = 3},
    [424] = {.lex_state = 199, .external_tokens = 4},
    [425] = {.lex_state = 127},
    [426] = {.lex_state = 204},
    [427] = {.lex_state = 205},
    [428] = {.lex_state = 163},
    [429] = {.lex_state = 163},
    [430] = {.lex_state = 164},
    [431] = {.lex_state = 204},
    [432] = {.lex_state = 205},
    [433] = {.lex_state = 163},
    [434] = {.lex_state = 163},
    [435] = {.lex_state = 164},
    [436] = {.lex_state = 127},
    [437] = {.lex_state = 206},
    [438] = {.lex_state = 206},
    [439] = {.lex_state = 164},
    [440] = {.lex_state = 127},
    [441] = {.lex_state = 122},
    [442] = {.lex_state = 164},
    [443] = {.lex_state = 202},
    [444] = {.lex_state = 127},
    [445] = {.lex_state = 125},
    [446] = {.lex_state = 162},
    [447] = {.lex_state = 127},
    [448] = {.lex_state = 206},
    [449] = {.lex_state = 164},
    [450] = {.lex_state = 202},
    [451] = {.lex_state = 163},
    [452] = {.lex_state = 125},
    [453] = {.lex_state = 207},
    [454] = {.lex_state = 208},
    [455] = {.lex_state = 125},
    [456] = {.lex_state = 125},
    [457] = {.lex_state = 125},
    [458] = {.lex_state = 125},
    [459] = {.lex_state = 125},
    [460] = {.lex_state = 125},
    [461] = {.lex_state = 125},
    [462] = {.lex_state = 208},
    [463] = {.lex_state = 208},
    [464] = {.lex_state = 208},
    [465] = {.lex_state = 208},
    [466] = {.lex_state = 208},
    [467] = {.lex_state = 125},
    [468] = {.lex_state = 209},
    [469] = {.lex_state = 125},
    [470] = {.lex_state = 125},
    [471] = {.lex_state = 125},
    [472] = {.lex_state = 125},
    [473] = {.lex_state = 125},
    [474] = {.lex_state = 125},
    [475] = {.lex_state = 209},
    [476] = {.lex_state = 209},
    [477] = {.lex_state = 209},
    [478] = {.lex_state = 209},
    [479] = {.lex_state = 209},
    [480] = {.lex_state = 125},
    [481] = {.lex_state = 193, .external_tokens = 3},
    [482] = {.lex_state = 207},
    [483] = {.lex_state = 125},
    [484] = {.lex_state = 193, .external_tokens = 3},
    [485] = {.lex_state = 199, .external_tokens = 4},
    [486] = {.lex_state = 207},
    [487] = {.lex_state = 199, .external_tokens = 4},
    [488] = {.lex_state = 207},
    [489] = {.lex_state = 193, .external_tokens = 3},
    [490] = {.lex_state = 199, .external_tokens = 4},
    [491] = {.lex_state = 126, .external_tokens = 2},
    [492] = {.lex_state = 210},
    [493] = {.lex_state = 125},
    [494] = {.lex_state = 127},
    [495] = {.lex_state = 224, .external_tokens = 4},
    [496] = {.lex_state = 199, .external_tokens = 4},
    [497] = {.lex_state = 224, .external_tokens = 4},
    [498] = {.lex_state = 127},
    [499] = {.lex_state = 227, .external_tokens = 4},
    [500] = {.lex_state = 224, .external_tokens = 4},
    [501] = {.lex_state = 199, .external_tokens = 4},
    [502] = {.lex_state = 199, .external_tokens = 4},
    [503] = {.lex_state = 193, .external_tokens = 3},
    [504] = {.lex_state = 227, .external_tokens = 4},
    [505] = {.lex_state = 193, .external_tokens = 3},
    [506] = {.lex_state = 199, .external_tokens = 4},
    [507] = {.lex_state = 208},
    [508] = {.lex_state = 125},
    [509] = {.lex_state = 193, .external_tokens = 3},
    [510] = {.lex_state = 224, .external_tokens = 4},
    [511] = {.lex_state = 171},
    [512] = {.lex_state = 193, .external_tokens = 3},
    [513] = {.lex_state = 224, .external_tokens = 4},
    [514] = {.lex_state = 210},
    [515] = {.lex_state = 199, .external_tokens = 4},
    [516] = {.lex_state = 210},
    [517] = {.lex_state = 171},
    [518] = {.lex_state = 193, .external_tokens = 3},
    [519] = {.lex_state = 228, .external_tokens = 4},
    [520] = {.lex_state = 199, .external_tokens = 4},
    [521] = {.lex_state = 173},
    [522] = {.lex_state = 125},
    [523] = {.lex_state = 127},
    [524] = {.lex_state = 209},
    [525] = {.lex_state = 125},
    [526] = {.lex_state = 207},
    [527] = {.lex_state = 125},
    [528] = {.lex_state = 209},
    [529] = {.lex_state = 209},
    [530] = {.lex_state = 193, .external_tokens = 3},
    [531] = {.lex_state = 228, .external_tokens = 4},
    [532] = {.lex_state = 199, .external_tokens = 4},
    [533] = {.lex_state = 171},
    [534] = {.lex_state = 193, .external_tokens = 3},
    [535] = {.lex_state = 230, .external_tokens = 4},
    [536] = {.lex_state = 125},
    [537] = {.lex_state = 230, .external_tokens = 4},
    [538] = {.lex_state = 199, .external_tokens = 4},
    [539] = {.lex_state = 230, .external_tokens = 4},
    [540] = {.lex_state = 230, .external_tokens = 4},
    [541] = {.lex_state = 199, .external_tokens = 4},
    [542] = {.lex_state = 171},
    [543] = {.lex_state = 193, .external_tokens = 3},
    [544] = {.lex_state = 230, .external_tokens = 4},
    [545] = {.lex_state = 164},
    [546] = {.lex_state = 127},
    [547] = {.lex_state = 193, .external_tokens = 3},
    [548] = {.lex_state = 143, .external_tokens = 2},
    [549] = {.lex_state = 184},
    [550] = {.lex_state = 127},
    [551] = {.lex_state = 193, .external_tokens = 3},
    [552] = {.lex_state = 143, .external_tokens = 2},
    [553] = {.lex_state = 207},
    [554] = {.lex_state = 193, .external_tokens = 3},
    [555] = {.lex_state = 207},
    [556] = {.lex_state = 193, .external_tokens = 3},
    [557] = {.lex_state = 143, .external_tokens = 2},
    [558] = {.lex_state = 143, .external_tokens = 2},
    [559] = {.lex_state = 193, .external_tokens = 3},
    [560] = {.lex_state = 210},
    [561] = {.lex_state = 125},
    [562] = {.lex_state = 127},
    [563] = {.lex_state = 232, .external_tokens = 2},
    [564] = {.lex_state = 143, .external_tokens = 2},
    [565] = {.lex_state = 232, .external_tokens = 2},
    [566] = {.lex_state = 127},
    [567] = {.lex_state = 233, .external_tokens = 2},
    [568] = {.lex_state = 232, .external_tokens = 2},
    [569] = {.lex_state = 143, .external_tokens = 2},
    [570] = {.lex_state = 143, .external_tokens = 2},
    [571] = {.lex_state = 193, .external_tokens = 3},
    [572] = {.lex_state = 233, .external_tokens = 2},
    [573] = {.lex_state = 193, .external_tokens = 3},
    [574] = {.lex_state = 143, .external_tokens = 2},
    [575] = {.lex_state = 208},
    [576] = {.lex_state = 125},
    [577] = {.lex_state = 193, .external_tokens = 3},
    [578] = {.lex_state = 232, .external_tokens = 2},
    [579] = {.lex_state = 171},
    [580] = {.lex_state = 193, .external_tokens = 3},
    [581] = {.lex_state = 232, .external_tokens = 2},
    [582] = {.lex_state = 171},
    [583] = {.lex_state = 193, .external_tokens = 3},
    [584] = {.lex_state = 234, .external_tokens = 2},
    [585] = {.lex_state = 143, .external_tokens = 2},
    [586] = {.lex_state = 173},
    [587] = {.lex_state = 125},
    [588] = {.lex_state = 127},
    [589] = {.lex_state = 193, .external_tokens = 3},
    [590] = {.lex_state = 234, .external_tokens = 2},
    [591] = {.lex_state = 143, .external_tokens = 2},
    [592] = {.lex_state = 171},
    [593] = {.lex_state = 193, .external_tokens = 3},
    [594] = {.lex_state = 235, .external_tokens = 2},
    [595] = {.lex_state = 125},
    [596] = {.lex_state = 235, .external_tokens = 2},
    [597] = {.lex_state = 143, .external_tokens = 2},
    [598] = {.lex_state = 235, .external_tokens = 2},
    [599] = {.lex_state = 235, .external_tokens = 2},
    [600] = {.lex_state = 143, .external_tokens = 2},
    [601] = {.lex_state = 171},
    [602] = {.lex_state = 193, .external_tokens = 3},
    [603] = {.lex_state = 235, .external_tokens = 2},
    [604] = {.lex_state = 125},
    [605] = {.lex_state = 126, .external_tokens = 2},
    [606] = {.lex_state = 181, .external_tokens = 2},
    [607] = {.lex_state = 125},
    [608] = {.lex_state = 125},
    [609] = {.lex_state = 125},
    [610] = {.lex_state = 125},
    [611] = {.lex_state = 125},
    [612] = {.lex_state = 125},
    [613] = {.lex_state = 125},
    [614] = {.lex_state = 236, .external_tokens = 2},
    [615] = {.lex_state = 125},
    [616] = {.lex_state = 181, .external_tokens = 2},
    [617] = {.lex_state = 181, .external_tokens = 2},
    [618] = {.lex_state = 181, .external_tokens = 2},
    [619] = {.lex_state = 181, .external_tokens = 2},
    [620] = {.lex_state = 181, .external_tokens = 2},
    [621] = {.lex_state = 181, .external_tokens = 2},
    [622] = {.lex_state = 181, .external_tokens = 2},
    [623] = {.lex_state = 126, .external_tokens = 2},
    [624] = {.lex_state = 181, .external_tokens = 2},
    [625] = {.lex_state = 236, .external_tokens = 2},
    [626] = {.lex_state = 237},
    [627] = {.lex_state = 238},
    [628] = {.lex_state = 239},
    [629] = {.lex_state = 237},
    [630] = {.lex_state = 240},
    [631] = {.lex_state = 237},
    [632] = {.lex_state = 239},
    [633] = {.lex_state = 240},
    [634] = {.lex_state = 122},
    [635] = {.lex_state = 126, .external_tokens = 2},
    [636] = {.lex_state = 126, .external_tokens = 2},
    [637] = {.lex_state = 236, .external_tokens = 2},
    [638] = {.lex_state = 241, .external_tokens = 2},
    [639] = {.lex_state = 242, .external_tokens = 2},
    [640] = {.lex_state = 122},
    [641] = {.lex_state = 163, .external_tokens = 2},
    [642] = {.lex_state = 242, .external_tokens = 2},
    [643] = {.lex_state = 163, .external_tokens = 2},
    [644] = {.lex_state = 243, .external_tokens = 2},
    [645] = {.lex_state = 163, .external_tokens = 2},
    [646] = {.lex_state = 163, .external_tokens = 2},
    [647] = {.lex_state = 243, .external_tokens = 2},
    [648] = {.lex_state = 164},
    [649] = {.lex_state = 163},
    [650] = {.lex_state = 243},
    [651] = {.lex_state = 242},
    [652] = {.lex_state = 122},
    [653] = {.lex_state = 163},
    [654] = {.lex_state = 242},
    [655] = {.lex_state = 163},
    [656] = {.lex_state = 243},
    [657] = {.lex_state = 163},
    [658] = {.lex_state = 163},
    [659] = {.lex_state = 243},
    [660] = {.lex_state = 126, .external_tokens = 2},
    [661] = {.lex_state = 122},
    [662] = {.lex_state = 238},
    [663] = {.lex_state = 122},
    [664] = {.lex_state = 238},
    [665] = {.lex_state = 238},
    [666] = {.lex_state = 122},
    [667] = {.lex_state = 126, .external_tokens = 2},
    [668] = {.lex_state = 164},
    [669] = {.lex_state = 126, .external_tokens = 2},
    [670] = {.lex_state = 126, .external_tokens = 2},
    [671] = {.lex_state = 240},
    [672] = {.lex_state = 237},
    [673] = {.lex_state = 167},
    [674] = {.lex_state = 130, .external_tokens = 2},
    [675] = {.lex_state = 244, .external_tokens = 2},
    [676] = {.lex_state = 125},
    [677] = {.lex_state = 245, .external_tokens = 2},
    [678] = {.lex_state = 125},
    [679] = {.lex_state = 193, .external_tokens = 3},
    [680] = {.lex_state = 125},
    [681] = {.lex_state = 127},
    [682] = {.lex_state = 125},
    [683] = {.lex_state = 125},
    [684] = {.lex_state = 125},
    [685] = {.lex_state = 127},
    [686] = {.lex_state = 125},
    [687] = {.lex_state = 127},
    [688] = {.lex_state = 125},
    [689] = {.lex_state = 122},
    [690] = {.lex_state = 125},
    [691] = {.lex_state = 122},
    [692] = {.lex_state = 125},
    [693] = {.lex_state = 125},
    [694] = {.lex_state = 125},
    [695] = {.lex_state = 160},
    [696] = {.lex_state = 158},
    [697] = {.lex_state = 130, .external_tokens = 2},
    [698] = {.lex_state = 130, .external_tokens = 2},
    [699] = {.lex_state = 246, .external_tokens = 2},
    [700] = {.lex_state = 200, .external_tokens = 5},
    [701] = {.lex_state = 199, .external_tokens = 4},
    [702] = {.lex_state = 200, .external_tokens = 5},
    [703] = {.lex_state = 143, .external_tokens = 5},
    [704] = {.lex_state = 126, .external_tokens = 2},
    [705] = {.lex_state = 164, .external_tokens = 2},
    [706] = {.lex_state = 163, .external_tokens = 2},
    [707] = {.lex_state = 126, .external_tokens = 2},
    [708] = {.lex_state = 143, .external_tokens = 5},
    [709] = {.lex_state = 143, .external_tokens = 5},
    [710] = {.lex_state = 235, .external_tokens = 5},
    [711] = {.lex_state = 233, .external_tokens = 5},
    [712] = {.lex_state = 232, .external_tokens = 5},
    [713] = {.lex_state = 143, .external_tokens = 5},
    [714] = {.lex_state = 207},
    [715] = {.lex_state = 143, .external_tokens = 5},
    [716] = {.lex_state = 127},
    [717] = {.lex_state = 163},
    [718] = {.lex_state = 163},
    [719] = {.lex_state = 164},
    [720] = {.lex_state = 144},
    [721] = {.lex_state = 200, .external_tokens = 5},
    [722] = {.lex_state = 248, .external_tokens = 2},
    [723] = {.lex_state = 249, .external_tokens = 2},
    [724] = {.lex_state = 130, .external_tokens = 2},
    [725] = {.lex_state = 163},
    [726] = {.lex_state = 163},
    [727] = {.lex_state = 164},
    [728] = {.lex_state = 169},
    [729] = {.lex_state = 143, .external_tokens = 5},
    [730] = {.lex_state = 250, .external_tokens = 2},
    [731] = {.lex_state = 235, .external_tokens = 5},
    [732] = {.lex_state = 232, .external_tokens = 5},
    [733] = {.lex_state = 207},
    [734] = {.lex_state = 144},
    [735] = {.lex_state = 163},
    [736] = {.lex_state = 130, .external_tokens = 2},
    [737] = {.lex_state = 165},
    [738] = {.lex_state = 164},
    [739] = {.lex_state = 130, .external_tokens = 2},
    [740] = {.lex_state = 143, .external_tokens = 5},
    [741] = {.lex_state = 193, .external_tokens = 3},
    [742] = {.lex_state = 126, .external_tokens = 2},
    [743] = {.lex_state = 143, .external_tokens = 5},
    [744] = {.lex_state = 200, .external_tokens = 5},
    [745] = {.lex_state = 199, .external_tokens = 4},
    [746] = {.lex_state = 200, .external_tokens = 5},
    [747] = {.lex_state = 233, .external_tokens = 5},
    [748] = {.lex_state = 232, .external_tokens = 5},
    [749] = {.lex_state = 143, .external_tokens = 5},
    [750] = {.lex_state = 143, .external_tokens = 5},
    [751] = {.lex_state = 235, .external_tokens = 5},
    [752] = {.lex_state = 143, .external_tokens = 5},
    [753] = {.lex_state = 193, .external_tokens = 3},
    [754] = {.lex_state = 233, .external_tokens = 5},
    [755] = {.lex_state = 251},
    [756] = {.lex_state = 125},
    [757] = {.lex_state = 252, .external_tokens = 2},
    [758] = {.lex_state = 125},
    [759] = {.lex_state = 252, .external_tokens = 2},
    [760] = {.lex_state = 252, .external_tokens = 2},
    [761] = {.lex_state = 125},
    [762] = {.lex_state = 143, .external_tokens = 5},
    [763] = {.lex_state = 126, .external_tokens = 2},
    [764] = {.lex_state = 143, .external_tokens = 5},
    [765] = {.lex_state = 173},
    [766] = {.lex_state = 125},
    [767] = {.lex_state = 127},
    [768] = {.lex_state = 193, .external_tokens = 3},
    [769] = {.lex_state = 234, .external_tokens = 5},
    [770] = {.lex_state = 143, .external_tokens = 5},
    [771] = {.lex_state = 130, .external_tokens = 2},
    [772] = {.lex_state = 130, .external_tokens = 2},
    [773] = {.lex_state = 165},
    [774] = {.lex_state = 164},
    [775] = {.lex_state = 130, .external_tokens = 2},
    [776] = {.lex_state = 167},
    [777] = {.lex_state = 130, .external_tokens = 2},
    [778] = {.lex_state = 244},
    [779] = {.lex_state = 125},
    [780] = {.lex_state = 193, .external_tokens = 3},
    [781] = {.lex_state = 125},
    [782] = {.lex_state = 130, .external_tokens = 2},
    [783] = {.lex_state = 130, .external_tokens = 2},
    [784] = {.lex_state = 130, .external_tokens = 2},
    [785] = {.lex_state = 173},
    [786] = {.lex_state = 125},
    [787] = {.lex_state = 125},
    [788] = {.lex_state = 253},
    [789] = {.lex_state = 125},
    [790] = {.lex_state = 253},
    [791] = {.lex_state = 253},
    [792] = {.lex_state = 125},
    [793] = {.lex_state = 200, .external_tokens = 5},
    [794] = {.lex_state = 177, .external_tokens = 2},
    [795] = {.lex_state = 125},
    [796] = {.lex_state = 177, .external_tokens = 2},
    [797] = {.lex_state = 235, .external_tokens = 5},
    [798] = {.lex_state = 143, .external_tokens = 5},
    [799] = {.lex_state = 177, .external_tokens = 2},
    [800] = {.lex_state = 209},
    [801] = {.lex_state = 193, .external_tokens = 3},
    [802] = {.lex_state = 232, .external_tokens = 5},
    [803] = {.lex_state = 130, .external_tokens = 2},
    [804] = {.lex_state = 252, .external_tokens = 2},
    [805] = {.lex_state = 240},
    [806] = {.lex_state = 122},
    [807] = {.lex_state = 164},
    [808] = {.lex_state = 126, .external_tokens = 2},
    [809] = {.lex_state = 127},
    [810] = {.lex_state = 193, .external_tokens = 3},
    [811] = {.lex_state = 143, .external_tokens = 5},
    [812] = {.lex_state = 143, .external_tokens = 5},
    [813] = {.lex_state = 232, .external_tokens = 5},
    [814] = {.lex_state = 143, .external_tokens = 5},
    [815] = {.lex_state = 127},
    [816] = {.lex_state = 127},
    [817] = {.lex_state = 206},
    [818] = {.lex_state = 164},
    [819] = {.lex_state = 127},
    [820] = {.lex_state = 202},
    [821] = {.lex_state = 127},
    [822] = {.lex_state = 193, .external_tokens = 3},
    [823] = {.lex_state = 143, .external_tokens = 5},
    [824] = {.lex_state = 193, .external_tokens = 3},
    [825] = {.lex_state = 143, .external_tokens = 5},
    [826] = {.lex_state = 200, .external_tokens = 5},
    [827] = {.lex_state = 254},
    [828] = {.lex_state = 193, .external_tokens = 3},
    [829] = {.lex_state = 143, .external_tokens = 5},
    [830] = {.lex_state = 161},
    [831] = {.lex_state = 164},
    [832] = {.lex_state = 178},
    [833] = {.lex_state = 160},
    [834] = {.lex_state = 130, .external_tokens = 2},
    [835] = {.lex_state = 159},
    [836] = {.lex_state = 130, .external_tokens = 2},
    [837] = {.lex_state = 130, .external_tokens = 2},
    [838] = {.lex_state = 192},
    [839] = {.lex_state = 125},
    [840] = {.lex_state = 162},
    [841] = {.lex_state = 184},
    [842] = {.lex_state = 207},
    [843] = {.lex_state = 193, .external_tokens = 3},
    [844] = {.lex_state = 143, .external_tokens = 5},
    [845] = {.lex_state = 208},
    [846] = {.lex_state = 125},
    [847] = {.lex_state = 193, .external_tokens = 3},
    [848] = {.lex_state = 232, .external_tokens = 5},
    [849] = {.lex_state = 171},
    [850] = {.lex_state = 193, .external_tokens = 3},
    [851] = {.lex_state = 210},
    [852] = {.lex_state = 171},
    [853] = {.lex_state = 193, .external_tokens = 3},
    [854] = {.lex_state = 234, .external_tokens = 5},
    [855] = {.lex_state = 143, .external_tokens = 5},
    [856] = {.lex_state = 125},
    [857] = {.lex_state = 255},
    [858] = {.lex_state = 125},
    [859] = {.lex_state = 130, .external_tokens = 2},
    [860] = {.lex_state = 255},
    [861] = {.lex_state = 255},
    [862] = {.lex_state = 173},
    [863] = {.lex_state = 171},
    [864] = {.lex_state = 193, .external_tokens = 3},
    [865] = {.lex_state = 235, .external_tokens = 5},
    [866] = {.lex_state = 171},
    [867] = {.lex_state = 193, .external_tokens = 3},
    [868] = {.lex_state = 235, .external_tokens = 5},
    [869] = {.lex_state = 143, .external_tokens = 5},
    [870] = {.lex_state = 130, .external_tokens = 2},
    [871] = {.lex_state = 130, .external_tokens = 2},
    [872] = {.lex_state = 256, .external_tokens = 2},
    [873] = {.lex_state = 130, .external_tokens = 2},
    [874] = {.lex_state = 125},
    [875] = {.lex_state = 158},
    [876] = {.lex_state = 130, .external_tokens = 2},
    [877] = {.lex_state = 130, .external_tokens = 2},
    [878] = {.lex_state = 257, .external_tokens = 2},
    [879] = {.lex_state = 163, .external_tokens = 2},
    [880] = {.lex_state = 207},
    [881] = {.lex_state = 243, .external_tokens = 2},
    [882] = {.lex_state = 258, .external_tokens = 2},
    [883] = {.lex_state = 163},
    [884] = {.lex_state = 164},
    [885] = {.lex_state = 170},
    [886] = {.lex_state = 130, .external_tokens = 2},
    [887] = {.lex_state = 125},
    [888] = {.lex_state = 193, .external_tokens = 3},
    [889] = {.lex_state = 258, .external_tokens = 2},
    [890] = {.lex_state = 125},
    [891] = {.lex_state = 172, .external_tokens = 2},
    [892] = {.lex_state = 125},
    [893] = {.lex_state = 172, .external_tokens = 2},
    [894] = {.lex_state = 172, .external_tokens = 2},
    [895] = {.lex_state = 258, .external_tokens = 2},
    [896] = {.lex_state = 245},
    [897] = {.lex_state = 259},
    [898] = {.lex_state = 162},
    [899] = {.lex_state = 130, .external_tokens = 2},
    [900] = {.lex_state = 167},
    [901] = {.lex_state = 163},
    [902] = {.lex_state = 162},
    [903] = {.lex_state = 185, .external_tokens = 2},
    [904] = {.lex_state = 126, .external_tokens = 2},
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
        [sym_number] = ACTIONS(77),
        [sym_identifier] = ACTIONS(79),
        [sym_comment] = ACTIONS(81),
        [sym__newline] = ACTIONS(83),
        [sym__indent] = ACTIONS(85),
        [sym__dedent] = ACTIONS(87),
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
        [ts_builtin_sym_end] = ACTIONS(89),
        [anon_sym_import] = ACTIONS(91),
        [anon_sym_from] = ACTIONS(93),
        [anon_sym_print] = ACTIONS(95),
        [anon_sym_return] = ACTIONS(97),
        [anon_sym_del] = ACTIONS(99),
        [sym_pass_statement] = ACTIONS(101),
        [sym_break_statement] = ACTIONS(101),
        [sym_continue_statement] = ACTIONS(101),
        [anon_sym_if] = ACTIONS(103),
        [anon_sym_for] = ACTIONS(105),
        [anon_sym_while] = ACTIONS(107),
        [anon_sym_try] = ACTIONS(109),
        [anon_sym_with] = ACTIONS(111),
        [anon_sym_def] = ACTIONS(113),
        [anon_sym_class] = ACTIONS(115),
        [anon_sym_AT] = ACTIONS(117),
        [anon_sym_not] = ACTIONS(119),
        [anon_sym_LBRACK] = ACTIONS(121),
        [anon_sym_LBRACE] = ACTIONS(123),
        [sym_number] = ACTIONS(125),
        [sym_identifier] = ACTIONS(127),
        [sym_comment] = ACTIONS(81),
    },
    [2] = {
        [sym__import_list] = STATE(670),
        [sym_aliased_import] = STATE(637),
        [sym_dotted_name] = STATE(638),
        [sym_identifier] = ACTIONS(129),
        [sym_comment] = ACTIONS(81),
    },
    [3] = {
        [sym_dotted_name] = STATE(628),
        [aux_sym_import_from_statement_repeat1] = STATE(629),
        [anon_sym_DOT] = ACTIONS(131),
        [sym_identifier] = ACTIONS(133),
        [sym_comment] = ACTIONS(81),
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
        [anon_sym_not] = ACTIONS(135),
        [anon_sym_LBRACK] = ACTIONS(121),
        [anon_sym_LBRACE] = ACTIONS(123),
        [sym_number] = ACTIONS(125),
        [sym_identifier] = ACTIONS(127),
        [sym_comment] = ACTIONS(81),
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
        [anon_sym_not] = ACTIONS(135),
        [anon_sym_LBRACK] = ACTIONS(121),
        [anon_sym_LBRACE] = ACTIONS(123),
        [sym_number] = ACTIONS(125),
        [sym_identifier] = ACTIONS(127),
        [sym_comment] = ACTIONS(81),
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
        [anon_sym_not] = ACTIONS(135),
        [anon_sym_LBRACK] = ACTIONS(121),
        [anon_sym_LBRACE] = ACTIONS(123),
        [sym_number] = ACTIONS(125),
        [sym_identifier] = ACTIONS(127),
        [sym_comment] = ACTIONS(81),
    },
    [7] = {
        [sym_comment] = ACTIONS(81),
        [sym__newline] = ACTIONS(137),
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
        [anon_sym_not] = ACTIONS(139),
        [anon_sym_LBRACK] = ACTIONS(141),
        [anon_sym_LBRACE] = ACTIONS(143),
        [sym_number] = ACTIONS(145),
        [sym_identifier] = ACTIONS(147),
        [sym_comment] = ACTIONS(81),
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
        [anon_sym_not] = ACTIONS(149),
        [anon_sym_LBRACK] = ACTIONS(141),
        [anon_sym_LBRACE] = ACTIONS(143),
        [sym_number] = ACTIONS(145),
        [sym_identifier] = ACTIONS(147),
        [sym_comment] = ACTIONS(81),
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
        [anon_sym_not] = ACTIONS(139),
        [anon_sym_LBRACK] = ACTIONS(141),
        [anon_sym_LBRACE] = ACTIONS(143),
        [sym_number] = ACTIONS(145),
        [sym_identifier] = ACTIONS(147),
        [sym_comment] = ACTIONS(81),
    },
    [11] = {
        [anon_sym_COLON] = ACTIONS(151),
        [sym_comment] = ACTIONS(81),
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
        [anon_sym_not] = ACTIONS(153),
        [anon_sym_LBRACK] = ACTIONS(141),
        [anon_sym_LBRACE] = ACTIONS(143),
        [sym_number] = ACTIONS(145),
        [sym_identifier] = ACTIONS(147),
        [sym_comment] = ACTIONS(81),
    },
    [13] = {
        [sym_identifier] = ACTIONS(155),
        [sym_comment] = ACTIONS(81),
    },
    [14] = {
        [sym_identifier] = ACTIONS(157),
        [sym_comment] = ACTIONS(81),
    },
    [15] = {
        [sym_dotted_name] = STATE(363),
        [sym_identifier] = ACTIONS(129),
        [sym_comment] = ACTIONS(81),
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
        [anon_sym_not] = ACTIONS(119),
        [anon_sym_LBRACK] = ACTIONS(121),
        [anon_sym_LBRACE] = ACTIONS(123),
        [sym_number] = ACTIONS(125),
        [sym_identifier] = ACTIONS(127),
        [sym_comment] = ACTIONS(81),
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
        [anon_sym_not] = ACTIONS(159),
        [anon_sym_LBRACK] = ACTIONS(141),
        [anon_sym_RBRACK] = ACTIONS(161),
        [anon_sym_LBRACE] = ACTIONS(143),
        [sym_number] = ACTIONS(145),
        [sym_identifier] = ACTIONS(147),
        [sym_comment] = ACTIONS(81),
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
        [anon_sym_not] = ACTIONS(163),
        [anon_sym_LBRACK] = ACTIONS(141),
        [anon_sym_LBRACE] = ACTIONS(143),
        [anon_sym_RBRACE] = ACTIONS(165),
        [sym_number] = ACTIONS(145),
        [sym_identifier] = ACTIONS(147),
        [sym_comment] = ACTIONS(81),
    },
    [19] = {
        [anon_sym_LPAREN] = ACTIONS(167),
        [anon_sym_RPAREN] = ACTIONS(167),
        [anon_sym_COMMA] = ACTIONS(167),
        [anon_sym_as] = ACTIONS(167),
        [anon_sym_STAR] = ACTIONS(169),
        [anon_sym_COLON] = ACTIONS(167),
        [anon_sym_for] = ACTIONS(167),
        [anon_sym_in] = ACTIONS(167),
        [anon_sym_PLUS] = ACTIONS(167),
        [anon_sym_DASH] = ACTIONS(167),
        [anon_sym_SLASH] = ACTIONS(167),
        [anon_sym_STAR_STAR] = ACTIONS(167),
        [anon_sym_PIPE] = ACTIONS(167),
        [anon_sym_AMP] = ACTIONS(167),
        [anon_sym_CARET] = ACTIONS(167),
        [anon_sym_LT_LT] = ACTIONS(167),
        [anon_sym_GT_GT] = ACTIONS(167),
        [anon_sym_and] = ACTIONS(167),
        [anon_sym_or] = ACTIONS(167),
        [anon_sym_LBRACK] = ACTIONS(167),
        [anon_sym_RBRACK] = ACTIONS(167),
        [anon_sym_RBRACE] = ACTIONS(167),
        [sym_comment] = ACTIONS(81),
        [sym__newline] = ACTIONS(167),
    },
    [20] = {
        [ts_builtin_sym_end] = ACTIONS(171),
        [sym_comment] = ACTIONS(81),
    },
    [21] = {
        [ts_builtin_sym_end] = ACTIONS(173),
        [anon_sym_SEMI] = ACTIONS(173),
        [anon_sym_import] = ACTIONS(175),
        [anon_sym_from] = ACTIONS(175),
        [anon_sym_print] = ACTIONS(175),
        [anon_sym_return] = ACTIONS(175),
        [anon_sym_del] = ACTIONS(175),
        [sym_pass_statement] = ACTIONS(175),
        [sym_break_statement] = ACTIONS(175),
        [sym_continue_statement] = ACTIONS(175),
        [anon_sym_if] = ACTIONS(175),
        [anon_sym_for] = ACTIONS(175),
        [anon_sym_while] = ACTIONS(175),
        [anon_sym_try] = ACTIONS(175),
        [anon_sym_with] = ACTIONS(175),
        [anon_sym_def] = ACTIONS(175),
        [anon_sym_class] = ACTIONS(175),
        [anon_sym_AT] = ACTIONS(173),
        [anon_sym_not] = ACTIONS(175),
        [anon_sym_LBRACK] = ACTIONS(173),
        [anon_sym_LBRACE] = ACTIONS(173),
        [sym_number] = ACTIONS(175),
        [sym_identifier] = ACTIONS(177),
        [sym_comment] = ACTIONS(81),
        [sym__newline] = ACTIONS(173),
    },
    [22] = {
        [sym_comment] = ACTIONS(81),
        [sym__newline] = ACTIONS(179),
    },
    [23] = {
        [ts_builtin_sym_end] = ACTIONS(181),
        [anon_sym_SEMI] = ACTIONS(181),
        [anon_sym_import] = ACTIONS(183),
        [anon_sym_from] = ACTIONS(183),
        [anon_sym_print] = ACTIONS(183),
        [anon_sym_return] = ACTIONS(183),
        [anon_sym_del] = ACTIONS(183),
        [sym_pass_statement] = ACTIONS(183),
        [sym_break_statement] = ACTIONS(183),
        [sym_continue_statement] = ACTIONS(183),
        [anon_sym_if] = ACTIONS(183),
        [anon_sym_for] = ACTIONS(183),
        [anon_sym_while] = ACTIONS(183),
        [anon_sym_try] = ACTIONS(183),
        [anon_sym_with] = ACTIONS(183),
        [anon_sym_def] = ACTIONS(183),
        [anon_sym_class] = ACTIONS(183),
        [anon_sym_AT] = ACTIONS(181),
        [anon_sym_not] = ACTIONS(183),
        [anon_sym_LBRACK] = ACTIONS(181),
        [anon_sym_LBRACE] = ACTIONS(181),
        [sym_number] = ACTIONS(183),
        [sym_identifier] = ACTIONS(185),
        [sym_comment] = ACTIONS(81),
        [sym__newline] = ACTIONS(181),
    },
    [24] = {
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
        [sym_number] = ACTIONS(189),
        [sym_identifier] = ACTIONS(191),
        [sym_comment] = ACTIONS(81),
        [sym__newline] = ACTIONS(187),
    },
    [25] = {
        [anon_sym_def] = ACTIONS(193),
        [anon_sym_class] = ACTIONS(193),
        [anon_sym_AT] = ACTIONS(193),
        [sym_comment] = ACTIONS(81),
    },
    [26] = {
        [anon_sym_LPAREN] = ACTIONS(195),
        [anon_sym_STAR] = ACTIONS(197),
        [anon_sym_PLUS] = ACTIONS(199),
        [anon_sym_DASH] = ACTIONS(199),
        [anon_sym_SLASH] = ACTIONS(201),
        [anon_sym_STAR_STAR] = ACTIONS(203),
        [anon_sym_PIPE] = ACTIONS(205),
        [anon_sym_AMP] = ACTIONS(207),
        [anon_sym_CARET] = ACTIONS(209),
        [anon_sym_LT_LT] = ACTIONS(199),
        [anon_sym_GT_GT] = ACTIONS(199),
        [anon_sym_and] = ACTIONS(207),
        [anon_sym_or] = ACTIONS(205),
        [anon_sym_LBRACK] = ACTIONS(211),
        [sym_comment] = ACTIONS(81),
        [sym__newline] = ACTIONS(213),
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
        [ts_builtin_sym_end] = ACTIONS(215),
        [anon_sym_SEMI] = ACTIONS(217),
        [anon_sym_import] = ACTIONS(91),
        [anon_sym_from] = ACTIONS(93),
        [anon_sym_print] = ACTIONS(95),
        [anon_sym_return] = ACTIONS(97),
        [anon_sym_del] = ACTIONS(99),
        [sym_pass_statement] = ACTIONS(101),
        [sym_break_statement] = ACTIONS(101),
        [sym_continue_statement] = ACTIONS(101),
        [anon_sym_if] = ACTIONS(103),
        [anon_sym_for] = ACTIONS(105),
        [anon_sym_while] = ACTIONS(107),
        [anon_sym_try] = ACTIONS(109),
        [anon_sym_with] = ACTIONS(111),
        [anon_sym_def] = ACTIONS(113),
        [anon_sym_class] = ACTIONS(115),
        [anon_sym_AT] = ACTIONS(117),
        [anon_sym_not] = ACTIONS(119),
        [anon_sym_LBRACK] = ACTIONS(121),
        [anon_sym_LBRACE] = ACTIONS(123),
        [sym_number] = ACTIONS(125),
        [sym_identifier] = ACTIONS(127),
        [sym_comment] = ACTIONS(81),
        [sym__newline] = ACTIONS(217),
    },
    [28] = {
        [sym_function_definition] = STATE(29),
        [sym_class_definition] = STATE(29),
        [sym_decorator] = STATE(30),
        [anon_sym_def] = ACTIONS(219),
        [anon_sym_class] = ACTIONS(221),
        [anon_sym_AT] = ACTIONS(117),
        [sym_comment] = ACTIONS(81),
    },
    [29] = {
        [ts_builtin_sym_end] = ACTIONS(223),
        [anon_sym_SEMI] = ACTIONS(223),
        [anon_sym_import] = ACTIONS(225),
        [anon_sym_from] = ACTIONS(225),
        [anon_sym_print] = ACTIONS(225),
        [anon_sym_return] = ACTIONS(225),
        [anon_sym_del] = ACTIONS(225),
        [sym_pass_statement] = ACTIONS(225),
        [sym_break_statement] = ACTIONS(225),
        [sym_continue_statement] = ACTIONS(225),
        [anon_sym_if] = ACTIONS(225),
        [anon_sym_for] = ACTIONS(225),
        [anon_sym_while] = ACTIONS(225),
        [anon_sym_try] = ACTIONS(225),
        [anon_sym_with] = ACTIONS(225),
        [anon_sym_def] = ACTIONS(225),
        [anon_sym_class] = ACTIONS(225),
        [anon_sym_AT] = ACTIONS(223),
        [anon_sym_not] = ACTIONS(225),
        [anon_sym_LBRACK] = ACTIONS(223),
        [anon_sym_LBRACE] = ACTIONS(223),
        [sym_number] = ACTIONS(225),
        [sym_identifier] = ACTIONS(227),
        [sym_comment] = ACTIONS(81),
        [sym__newline] = ACTIONS(223),
    },
    [30] = {
        [anon_sym_def] = ACTIONS(229),
        [anon_sym_class] = ACTIONS(229),
        [anon_sym_AT] = ACTIONS(229),
        [sym_comment] = ACTIONS(81),
    },
    [31] = {
        [ts_builtin_sym_end] = ACTIONS(231),
        [sym_comment] = ACTIONS(81),
    },
    [32] = {
        [ts_builtin_sym_end] = ACTIONS(233),
        [anon_sym_SEMI] = ACTIONS(233),
        [anon_sym_import] = ACTIONS(235),
        [anon_sym_from] = ACTIONS(235),
        [anon_sym_print] = ACTIONS(235),
        [anon_sym_return] = ACTIONS(235),
        [anon_sym_del] = ACTIONS(235),
        [sym_pass_statement] = ACTIONS(235),
        [sym_break_statement] = ACTIONS(235),
        [sym_continue_statement] = ACTIONS(235),
        [anon_sym_if] = ACTIONS(235),
        [anon_sym_for] = ACTIONS(235),
        [anon_sym_while] = ACTIONS(235),
        [anon_sym_try] = ACTIONS(235),
        [anon_sym_with] = ACTIONS(235),
        [anon_sym_def] = ACTIONS(235),
        [anon_sym_class] = ACTIONS(235),
        [anon_sym_AT] = ACTIONS(233),
        [anon_sym_not] = ACTIONS(235),
        [anon_sym_LBRACK] = ACTIONS(233),
        [anon_sym_LBRACE] = ACTIONS(233),
        [sym_number] = ACTIONS(235),
        [sym_identifier] = ACTIONS(237),
        [sym_comment] = ACTIONS(81),
        [sym__newline] = ACTIONS(233),
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
        [anon_sym_STAR] = ACTIONS(239),
        [anon_sym_STAR_STAR] = ACTIONS(241),
        [anon_sym_not] = ACTIONS(243),
        [anon_sym_LBRACK] = ACTIONS(141),
        [anon_sym_LBRACE] = ACTIONS(143),
        [sym_number] = ACTIONS(145),
        [sym_identifier] = ACTIONS(245),
        [sym_comment] = ACTIONS(81),
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
        [anon_sym_not] = ACTIONS(119),
        [anon_sym_LBRACK] = ACTIONS(121),
        [anon_sym_LBRACE] = ACTIONS(123),
        [sym_number] = ACTIONS(125),
        [sym_identifier] = ACTIONS(127),
        [sym_comment] = ACTIONS(81),
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
        [anon_sym_not] = ACTIONS(119),
        [anon_sym_LBRACK] = ACTIONS(121),
        [anon_sym_LBRACE] = ACTIONS(123),
        [sym_number] = ACTIONS(125),
        [sym_identifier] = ACTIONS(127),
        [sym_comment] = ACTIONS(81),
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
        [anon_sym_not] = ACTIONS(119),
        [anon_sym_LBRACK] = ACTIONS(121),
        [anon_sym_LBRACE] = ACTIONS(123),
        [sym_number] = ACTIONS(125),
        [sym_identifier] = ACTIONS(127),
        [sym_comment] = ACTIONS(81),
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
        [anon_sym_not] = ACTIONS(119),
        [anon_sym_LBRACK] = ACTIONS(121),
        [anon_sym_LBRACE] = ACTIONS(123),
        [sym_number] = ACTIONS(125),
        [sym_identifier] = ACTIONS(127),
        [sym_comment] = ACTIONS(81),
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
        [anon_sym_not] = ACTIONS(119),
        [anon_sym_LBRACK] = ACTIONS(121),
        [anon_sym_LBRACE] = ACTIONS(123),
        [sym_number] = ACTIONS(125),
        [sym_identifier] = ACTIONS(127),
        [sym_comment] = ACTIONS(81),
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
        [anon_sym_not] = ACTIONS(119),
        [anon_sym_LBRACK] = ACTIONS(121),
        [anon_sym_LBRACE] = ACTIONS(123),
        [sym_number] = ACTIONS(125),
        [sym_identifier] = ACTIONS(127),
        [sym_comment] = ACTIONS(81),
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
        [anon_sym_not] = ACTIONS(247),
        [anon_sym_LBRACK] = ACTIONS(141),
        [anon_sym_DOT_DOT_DOT] = ACTIONS(249),
        [anon_sym_LBRACE] = ACTIONS(143),
        [sym_number] = ACTIONS(145),
        [sym_identifier] = ACTIONS(147),
        [sym_comment] = ACTIONS(81),
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
        [anon_sym_not] = ACTIONS(247),
        [anon_sym_LBRACK] = ACTIONS(141),
        [anon_sym_LBRACE] = ACTIONS(143),
        [sym_number] = ACTIONS(145),
        [sym_identifier] = ACTIONS(147),
        [sym_comment] = ACTIONS(81),
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
        [anon_sym_not] = ACTIONS(159),
        [anon_sym_LBRACK] = ACTIONS(141),
        [anon_sym_RBRACK] = ACTIONS(251),
        [anon_sym_LBRACE] = ACTIONS(143),
        [sym_number] = ACTIONS(145),
        [sym_identifier] = ACTIONS(147),
        [sym_comment] = ACTIONS(81),
    },
    [43] = {
        [aux_sym_subscript_repeat1] = STATE(57),
        [anon_sym_COMMA] = ACTIONS(253),
        [anon_sym_RBRACK] = ACTIONS(255),
        [sym_comment] = ACTIONS(81),
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
        [anon_sym_not] = ACTIONS(163),
        [anon_sym_LBRACK] = ACTIONS(141),
        [anon_sym_LBRACE] = ACTIONS(143),
        [anon_sym_RBRACE] = ACTIONS(257),
        [sym_number] = ACTIONS(145),
        [sym_identifier] = ACTIONS(147),
        [sym_comment] = ACTIONS(81),
    },
    [45] = {
        [anon_sym_LPAREN] = ACTIONS(167),
        [anon_sym_RPAREN] = ACTIONS(167),
        [anon_sym_COMMA] = ACTIONS(167),
        [anon_sym_as] = ACTIONS(167),
        [anon_sym_STAR] = ACTIONS(169),
        [anon_sym_COLON] = ACTIONS(167),
        [anon_sym_for] = ACTIONS(167),
        [anon_sym_in] = ACTIONS(167),
        [anon_sym_PLUS] = ACTIONS(167),
        [anon_sym_DASH] = ACTIONS(167),
        [anon_sym_SLASH] = ACTIONS(167),
        [anon_sym_STAR_STAR] = ACTIONS(167),
        [anon_sym_PIPE] = ACTIONS(167),
        [anon_sym_AMP] = ACTIONS(167),
        [anon_sym_CARET] = ACTIONS(167),
        [anon_sym_LT_LT] = ACTIONS(167),
        [anon_sym_GT_GT] = ACTIONS(167),
        [anon_sym_and] = ACTIONS(167),
        [anon_sym_or] = ACTIONS(167),
        [anon_sym_LBRACK] = ACTIONS(167),
        [anon_sym_RBRACK] = ACTIONS(167),
        [anon_sym_RBRACE] = ACTIONS(167),
        [sym_comment] = ACTIONS(81),
    },
    [46] = {
        [aux_sym_subscript_repeat1] = STATE(57),
        [anon_sym_LPAREN] = ACTIONS(259),
        [anon_sym_COMMA] = ACTIONS(253),
        [anon_sym_STAR] = ACTIONS(261),
        [anon_sym_PLUS] = ACTIONS(263),
        [anon_sym_DASH] = ACTIONS(263),
        [anon_sym_SLASH] = ACTIONS(265),
        [anon_sym_STAR_STAR] = ACTIONS(267),
        [anon_sym_PIPE] = ACTIONS(269),
        [anon_sym_AMP] = ACTIONS(271),
        [anon_sym_CARET] = ACTIONS(273),
        [anon_sym_LT_LT] = ACTIONS(263),
        [anon_sym_GT_GT] = ACTIONS(263),
        [anon_sym_and] = ACTIONS(271),
        [anon_sym_or] = ACTIONS(269),
        [anon_sym_LBRACK] = ACTIONS(275),
        [anon_sym_RBRACK] = ACTIONS(255),
        [sym_comment] = ACTIONS(81),
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
        [anon_sym_STAR] = ACTIONS(239),
        [anon_sym_STAR_STAR] = ACTIONS(241),
        [anon_sym_not] = ACTIONS(243),
        [anon_sym_LBRACK] = ACTIONS(141),
        [anon_sym_LBRACE] = ACTIONS(143),
        [sym_number] = ACTIONS(145),
        [sym_identifier] = ACTIONS(245),
        [sym_comment] = ACTIONS(81),
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
        [anon_sym_not] = ACTIONS(247),
        [anon_sym_LBRACK] = ACTIONS(141),
        [anon_sym_DOT_DOT_DOT] = ACTIONS(277),
        [anon_sym_RBRACK] = ACTIONS(279),
        [anon_sym_LBRACE] = ACTIONS(143),
        [sym_number] = ACTIONS(145),
        [sym_identifier] = ACTIONS(147),
        [sym_comment] = ACTIONS(81),
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
        [anon_sym_not] = ACTIONS(247),
        [anon_sym_LBRACK] = ACTIONS(141),
        [anon_sym_LBRACE] = ACTIONS(143),
        [sym_number] = ACTIONS(145),
        [sym_identifier] = ACTIONS(147),
        [sym_comment] = ACTIONS(81),
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
        [anon_sym_not] = ACTIONS(247),
        [anon_sym_LBRACK] = ACTIONS(141),
        [anon_sym_LBRACE] = ACTIONS(143),
        [sym_number] = ACTIONS(145),
        [sym_identifier] = ACTIONS(147),
        [sym_comment] = ACTIONS(81),
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
        [anon_sym_not] = ACTIONS(247),
        [anon_sym_LBRACK] = ACTIONS(141),
        [anon_sym_LBRACE] = ACTIONS(143),
        [sym_number] = ACTIONS(145),
        [sym_identifier] = ACTIONS(147),
        [sym_comment] = ACTIONS(81),
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
        [anon_sym_not] = ACTIONS(247),
        [anon_sym_LBRACK] = ACTIONS(141),
        [anon_sym_LBRACE] = ACTIONS(143),
        [sym_number] = ACTIONS(145),
        [sym_identifier] = ACTIONS(147),
        [sym_comment] = ACTIONS(81),
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
        [anon_sym_not] = ACTIONS(247),
        [anon_sym_LBRACK] = ACTIONS(141),
        [anon_sym_LBRACE] = ACTIONS(143),
        [sym_number] = ACTIONS(145),
        [sym_identifier] = ACTIONS(147),
        [sym_comment] = ACTIONS(81),
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
        [anon_sym_not] = ACTIONS(247),
        [anon_sym_LBRACK] = ACTIONS(141),
        [anon_sym_LBRACE] = ACTIONS(143),
        [sym_number] = ACTIONS(145),
        [sym_identifier] = ACTIONS(147),
        [sym_comment] = ACTIONS(81),
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
        [anon_sym_not] = ACTIONS(247),
        [anon_sym_LBRACK] = ACTIONS(141),
        [anon_sym_DOT_DOT_DOT] = ACTIONS(281),
        [anon_sym_LBRACE] = ACTIONS(143),
        [sym_number] = ACTIONS(145),
        [sym_identifier] = ACTIONS(147),
        [sym_comment] = ACTIONS(81),
    },
    [56] = {
        [anon_sym_LPAREN] = ACTIONS(283),
        [anon_sym_RPAREN] = ACTIONS(283),
        [anon_sym_COMMA] = ACTIONS(283),
        [anon_sym_as] = ACTIONS(283),
        [anon_sym_STAR] = ACTIONS(285),
        [anon_sym_COLON] = ACTIONS(283),
        [anon_sym_for] = ACTIONS(283),
        [anon_sym_in] = ACTIONS(283),
        [anon_sym_PLUS] = ACTIONS(283),
        [anon_sym_DASH] = ACTIONS(283),
        [anon_sym_SLASH] = ACTIONS(283),
        [anon_sym_STAR_STAR] = ACTIONS(283),
        [anon_sym_PIPE] = ACTIONS(283),
        [anon_sym_AMP] = ACTIONS(283),
        [anon_sym_CARET] = ACTIONS(283),
        [anon_sym_LT_LT] = ACTIONS(283),
        [anon_sym_GT_GT] = ACTIONS(283),
        [anon_sym_and] = ACTIONS(283),
        [anon_sym_or] = ACTIONS(283),
        [anon_sym_LBRACK] = ACTIONS(283),
        [anon_sym_RBRACK] = ACTIONS(283),
        [anon_sym_RBRACE] = ACTIONS(283),
        [sym_comment] = ACTIONS(81),
        [sym__newline] = ACTIONS(283),
    },
    [57] = {
        [anon_sym_COMMA] = ACTIONS(287),
        [anon_sym_RBRACK] = ACTIONS(279),
        [sym_comment] = ACTIONS(81),
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
        [anon_sym_not] = ACTIONS(247),
        [anon_sym_LBRACK] = ACTIONS(141),
        [anon_sym_DOT_DOT_DOT] = ACTIONS(289),
        [anon_sym_RBRACK] = ACTIONS(291),
        [anon_sym_LBRACE] = ACTIONS(143),
        [sym_number] = ACTIONS(145),
        [sym_identifier] = ACTIONS(147),
        [sym_comment] = ACTIONS(81),
    },
    [59] = {
        [anon_sym_LPAREN] = ACTIONS(293),
        [anon_sym_RPAREN] = ACTIONS(293),
        [anon_sym_COMMA] = ACTIONS(293),
        [anon_sym_as] = ACTIONS(293),
        [anon_sym_STAR] = ACTIONS(295),
        [anon_sym_COLON] = ACTIONS(293),
        [anon_sym_for] = ACTIONS(293),
        [anon_sym_in] = ACTIONS(293),
        [anon_sym_PLUS] = ACTIONS(293),
        [anon_sym_DASH] = ACTIONS(293),
        [anon_sym_SLASH] = ACTIONS(293),
        [anon_sym_STAR_STAR] = ACTIONS(293),
        [anon_sym_PIPE] = ACTIONS(293),
        [anon_sym_AMP] = ACTIONS(293),
        [anon_sym_CARET] = ACTIONS(293),
        [anon_sym_LT_LT] = ACTIONS(293),
        [anon_sym_GT_GT] = ACTIONS(293),
        [anon_sym_and] = ACTIONS(293),
        [anon_sym_or] = ACTIONS(293),
        [anon_sym_LBRACK] = ACTIONS(293),
        [anon_sym_RBRACK] = ACTIONS(293),
        [anon_sym_RBRACE] = ACTIONS(293),
        [sym_comment] = ACTIONS(81),
        [sym__newline] = ACTIONS(293),
    },
    [60] = {
        [anon_sym_COMMA] = ACTIONS(297),
        [anon_sym_RBRACK] = ACTIONS(297),
        [sym_comment] = ACTIONS(81),
    },
    [61] = {
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
        [sym_comment] = ACTIONS(81),
        [sym__newline] = ACTIONS(299),
    },
    [62] = {
        [anon_sym_LPAREN] = ACTIONS(259),
        [anon_sym_COMMA] = ACTIONS(297),
        [anon_sym_STAR] = ACTIONS(261),
        [anon_sym_PLUS] = ACTIONS(263),
        [anon_sym_DASH] = ACTIONS(263),
        [anon_sym_SLASH] = ACTIONS(265),
        [anon_sym_STAR_STAR] = ACTIONS(267),
        [anon_sym_PIPE] = ACTIONS(269),
        [anon_sym_AMP] = ACTIONS(271),
        [anon_sym_CARET] = ACTIONS(273),
        [anon_sym_LT_LT] = ACTIONS(263),
        [anon_sym_GT_GT] = ACTIONS(263),
        [anon_sym_and] = ACTIONS(271),
        [anon_sym_or] = ACTIONS(269),
        [anon_sym_LBRACK] = ACTIONS(275),
        [anon_sym_RBRACK] = ACTIONS(297),
        [sym_comment] = ACTIONS(81),
    },
    [63] = {
        [aux_sym_subscript_repeat1] = STATE(67),
        [anon_sym_COMMA] = ACTIONS(303),
        [anon_sym_RBRACK] = ACTIONS(305),
        [sym_comment] = ACTIONS(81),
    },
    [64] = {
        [aux_sym_subscript_repeat1] = STATE(67),
        [anon_sym_LPAREN] = ACTIONS(259),
        [anon_sym_COMMA] = ACTIONS(303),
        [anon_sym_STAR] = ACTIONS(261),
        [anon_sym_PLUS] = ACTIONS(263),
        [anon_sym_DASH] = ACTIONS(263),
        [anon_sym_SLASH] = ACTIONS(265),
        [anon_sym_STAR_STAR] = ACTIONS(267),
        [anon_sym_PIPE] = ACTIONS(269),
        [anon_sym_AMP] = ACTIONS(271),
        [anon_sym_CARET] = ACTIONS(273),
        [anon_sym_LT_LT] = ACTIONS(263),
        [anon_sym_GT_GT] = ACTIONS(263),
        [anon_sym_and] = ACTIONS(271),
        [anon_sym_or] = ACTIONS(269),
        [anon_sym_LBRACK] = ACTIONS(275),
        [anon_sym_RBRACK] = ACTIONS(305),
        [sym_comment] = ACTIONS(81),
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
        [anon_sym_not] = ACTIONS(247),
        [anon_sym_LBRACK] = ACTIONS(141),
        [anon_sym_DOT_DOT_DOT] = ACTIONS(277),
        [anon_sym_RBRACK] = ACTIONS(307),
        [anon_sym_LBRACE] = ACTIONS(143),
        [sym_number] = ACTIONS(145),
        [sym_identifier] = ACTIONS(147),
        [sym_comment] = ACTIONS(81),
    },
    [66] = {
        [anon_sym_LPAREN] = ACTIONS(283),
        [anon_sym_RPAREN] = ACTIONS(283),
        [anon_sym_COMMA] = ACTIONS(283),
        [anon_sym_as] = ACTIONS(283),
        [anon_sym_STAR] = ACTIONS(285),
        [anon_sym_COLON] = ACTIONS(283),
        [anon_sym_for] = ACTIONS(283),
        [anon_sym_in] = ACTIONS(283),
        [anon_sym_PLUS] = ACTIONS(283),
        [anon_sym_DASH] = ACTIONS(283),
        [anon_sym_SLASH] = ACTIONS(283),
        [anon_sym_STAR_STAR] = ACTIONS(283),
        [anon_sym_PIPE] = ACTIONS(283),
        [anon_sym_AMP] = ACTIONS(283),
        [anon_sym_CARET] = ACTIONS(283),
        [anon_sym_LT_LT] = ACTIONS(283),
        [anon_sym_GT_GT] = ACTIONS(283),
        [anon_sym_and] = ACTIONS(283),
        [anon_sym_or] = ACTIONS(283),
        [anon_sym_LBRACK] = ACTIONS(283),
        [anon_sym_RBRACK] = ACTIONS(283),
        [anon_sym_RBRACE] = ACTIONS(283),
        [sym_comment] = ACTIONS(81),
    },
    [67] = {
        [anon_sym_COMMA] = ACTIONS(309),
        [anon_sym_RBRACK] = ACTIONS(307),
        [sym_comment] = ACTIONS(81),
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
        [anon_sym_not] = ACTIONS(247),
        [anon_sym_LBRACK] = ACTIONS(141),
        [anon_sym_DOT_DOT_DOT] = ACTIONS(289),
        [anon_sym_RBRACK] = ACTIONS(311),
        [anon_sym_LBRACE] = ACTIONS(143),
        [sym_number] = ACTIONS(145),
        [sym_identifier] = ACTIONS(147),
        [sym_comment] = ACTIONS(81),
    },
    [69] = {
        [anon_sym_LPAREN] = ACTIONS(293),
        [anon_sym_RPAREN] = ACTIONS(293),
        [anon_sym_COMMA] = ACTIONS(293),
        [anon_sym_as] = ACTIONS(293),
        [anon_sym_STAR] = ACTIONS(295),
        [anon_sym_COLON] = ACTIONS(293),
        [anon_sym_for] = ACTIONS(293),
        [anon_sym_in] = ACTIONS(293),
        [anon_sym_PLUS] = ACTIONS(293),
        [anon_sym_DASH] = ACTIONS(293),
        [anon_sym_SLASH] = ACTIONS(293),
        [anon_sym_STAR_STAR] = ACTIONS(293),
        [anon_sym_PIPE] = ACTIONS(293),
        [anon_sym_AMP] = ACTIONS(293),
        [anon_sym_CARET] = ACTIONS(293),
        [anon_sym_LT_LT] = ACTIONS(293),
        [anon_sym_GT_GT] = ACTIONS(293),
        [anon_sym_and] = ACTIONS(293),
        [anon_sym_or] = ACTIONS(293),
        [anon_sym_LBRACK] = ACTIONS(293),
        [anon_sym_RBRACK] = ACTIONS(293),
        [anon_sym_RBRACE] = ACTIONS(293),
        [sym_comment] = ACTIONS(81),
    },
    [70] = {
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
        [sym_comment] = ACTIONS(81),
    },
    [71] = {
        [anon_sym_COMMA] = ACTIONS(313),
        [anon_sym_RBRACK] = ACTIONS(313),
        [sym_comment] = ACTIONS(81),
    },
    [72] = {
        [anon_sym_LPAREN] = ACTIONS(259),
        [anon_sym_COMMA] = ACTIONS(313),
        [anon_sym_STAR] = ACTIONS(261),
        [anon_sym_PLUS] = ACTIONS(263),
        [anon_sym_DASH] = ACTIONS(263),
        [anon_sym_SLASH] = ACTIONS(265),
        [anon_sym_STAR_STAR] = ACTIONS(267),
        [anon_sym_PIPE] = ACTIONS(269),
        [anon_sym_AMP] = ACTIONS(271),
        [anon_sym_CARET] = ACTIONS(273),
        [anon_sym_LT_LT] = ACTIONS(263),
        [anon_sym_GT_GT] = ACTIONS(263),
        [anon_sym_and] = ACTIONS(271),
        [anon_sym_or] = ACTIONS(269),
        [anon_sym_LBRACK] = ACTIONS(275),
        [anon_sym_RBRACK] = ACTIONS(313),
        [sym_comment] = ACTIONS(81),
    },
    [73] = {
        [anon_sym_LPAREN] = ACTIONS(259),
        [anon_sym_COMMA] = ACTIONS(315),
        [anon_sym_STAR] = ACTIONS(261),
        [anon_sym_PLUS] = ACTIONS(263),
        [anon_sym_DASH] = ACTIONS(263),
        [anon_sym_SLASH] = ACTIONS(265),
        [anon_sym_STAR_STAR] = ACTIONS(267),
        [anon_sym_PIPE] = ACTIONS(315),
        [anon_sym_AMP] = ACTIONS(271),
        [anon_sym_CARET] = ACTIONS(273),
        [anon_sym_LT_LT] = ACTIONS(263),
        [anon_sym_GT_GT] = ACTIONS(263),
        [anon_sym_and] = ACTIONS(271),
        [anon_sym_or] = ACTIONS(315),
        [anon_sym_LBRACK] = ACTIONS(315),
        [anon_sym_RBRACK] = ACTIONS(315),
        [sym_comment] = ACTIONS(81),
    },
    [74] = {
        [anon_sym_LPAREN] = ACTIONS(259),
        [anon_sym_COMMA] = ACTIONS(315),
        [anon_sym_STAR] = ACTIONS(261),
        [anon_sym_PLUS] = ACTIONS(263),
        [anon_sym_DASH] = ACTIONS(263),
        [anon_sym_SLASH] = ACTIONS(265),
        [anon_sym_STAR_STAR] = ACTIONS(267),
        [anon_sym_PIPE] = ACTIONS(315),
        [anon_sym_AMP] = ACTIONS(315),
        [anon_sym_CARET] = ACTIONS(273),
        [anon_sym_LT_LT] = ACTIONS(263),
        [anon_sym_GT_GT] = ACTIONS(263),
        [anon_sym_and] = ACTIONS(315),
        [anon_sym_or] = ACTIONS(315),
        [anon_sym_LBRACK] = ACTIONS(315),
        [anon_sym_RBRACK] = ACTIONS(315),
        [sym_comment] = ACTIONS(81),
    },
    [75] = {
        [anon_sym_LPAREN] = ACTIONS(259),
        [anon_sym_COMMA] = ACTIONS(315),
        [anon_sym_STAR] = ACTIONS(261),
        [anon_sym_PLUS] = ACTIONS(315),
        [anon_sym_DASH] = ACTIONS(315),
        [anon_sym_SLASH] = ACTIONS(265),
        [anon_sym_STAR_STAR] = ACTIONS(267),
        [anon_sym_PIPE] = ACTIONS(315),
        [anon_sym_AMP] = ACTIONS(315),
        [anon_sym_CARET] = ACTIONS(315),
        [anon_sym_LT_LT] = ACTIONS(315),
        [anon_sym_GT_GT] = ACTIONS(315),
        [anon_sym_and] = ACTIONS(315),
        [anon_sym_or] = ACTIONS(315),
        [anon_sym_LBRACK] = ACTIONS(315),
        [anon_sym_RBRACK] = ACTIONS(315),
        [sym_comment] = ACTIONS(81),
    },
    [76] = {
        [anon_sym_LPAREN] = ACTIONS(259),
        [anon_sym_COMMA] = ACTIONS(315),
        [anon_sym_STAR] = ACTIONS(261),
        [anon_sym_PLUS] = ACTIONS(263),
        [anon_sym_DASH] = ACTIONS(263),
        [anon_sym_SLASH] = ACTIONS(265),
        [anon_sym_STAR_STAR] = ACTIONS(267),
        [anon_sym_PIPE] = ACTIONS(315),
        [anon_sym_AMP] = ACTIONS(315),
        [anon_sym_CARET] = ACTIONS(315),
        [anon_sym_LT_LT] = ACTIONS(263),
        [anon_sym_GT_GT] = ACTIONS(263),
        [anon_sym_and] = ACTIONS(315),
        [anon_sym_or] = ACTIONS(315),
        [anon_sym_LBRACK] = ACTIONS(315),
        [anon_sym_RBRACK] = ACTIONS(315),
        [sym_comment] = ACTIONS(81),
    },
    [77] = {
        [anon_sym_LPAREN] = ACTIONS(259),
        [anon_sym_RPAREN] = ACTIONS(315),
        [anon_sym_COMMA] = ACTIONS(315),
        [anon_sym_as] = ACTIONS(315),
        [anon_sym_STAR] = ACTIONS(317),
        [anon_sym_COLON] = ACTIONS(315),
        [anon_sym_for] = ACTIONS(315),
        [anon_sym_in] = ACTIONS(315),
        [anon_sym_PLUS] = ACTIONS(315),
        [anon_sym_DASH] = ACTIONS(315),
        [anon_sym_SLASH] = ACTIONS(315),
        [anon_sym_STAR_STAR] = ACTIONS(315),
        [anon_sym_PIPE] = ACTIONS(315),
        [anon_sym_AMP] = ACTIONS(315),
        [anon_sym_CARET] = ACTIONS(315),
        [anon_sym_LT_LT] = ACTIONS(315),
        [anon_sym_GT_GT] = ACTIONS(315),
        [anon_sym_and] = ACTIONS(315),
        [anon_sym_or] = ACTIONS(315),
        [anon_sym_LBRACK] = ACTIONS(315),
        [anon_sym_RBRACK] = ACTIONS(315),
        [anon_sym_RBRACE] = ACTIONS(315),
        [sym_comment] = ACTIONS(81),
    },
    [78] = {
        [anon_sym_LPAREN] = ACTIONS(259),
        [anon_sym_COMMA] = ACTIONS(315),
        [anon_sym_STAR] = ACTIONS(317),
        [anon_sym_PLUS] = ACTIONS(315),
        [anon_sym_DASH] = ACTIONS(315),
        [anon_sym_SLASH] = ACTIONS(315),
        [anon_sym_STAR_STAR] = ACTIONS(267),
        [anon_sym_PIPE] = ACTIONS(315),
        [anon_sym_AMP] = ACTIONS(315),
        [anon_sym_CARET] = ACTIONS(315),
        [anon_sym_LT_LT] = ACTIONS(315),
        [anon_sym_GT_GT] = ACTIONS(315),
        [anon_sym_and] = ACTIONS(315),
        [anon_sym_or] = ACTIONS(315),
        [anon_sym_LBRACK] = ACTIONS(315),
        [anon_sym_RBRACK] = ACTIONS(315),
        [sym_comment] = ACTIONS(81),
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
        [anon_sym_not] = ACTIONS(243),
        [anon_sym_LBRACK] = ACTIONS(141),
        [anon_sym_LBRACE] = ACTIONS(143),
        [sym_number] = ACTIONS(145),
        [sym_identifier] = ACTIONS(147),
        [sym_comment] = ACTIONS(81),
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
        [anon_sym_not] = ACTIONS(319),
        [anon_sym_LBRACK] = ACTIONS(141),
        [anon_sym_LBRACE] = ACTIONS(143),
        [sym_number] = ACTIONS(145),
        [sym_identifier] = ACTIONS(147),
        [sym_comment] = ACTIONS(81),
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
        [anon_sym_not] = ACTIONS(243),
        [anon_sym_LBRACK] = ACTIONS(141),
        [anon_sym_LBRACE] = ACTIONS(143),
        [sym_number] = ACTIONS(145),
        [sym_identifier] = ACTIONS(147),
        [sym_comment] = ACTIONS(81),
    },
    [82] = {
        [anon_sym_LPAREN] = ACTIONS(167),
        [anon_sym_RPAREN] = ACTIONS(167),
        [anon_sym_COMMA] = ACTIONS(167),
        [anon_sym_STAR] = ACTIONS(169),
        [anon_sym_EQ] = ACTIONS(321),
        [anon_sym_PLUS] = ACTIONS(167),
        [anon_sym_DASH] = ACTIONS(167),
        [anon_sym_SLASH] = ACTIONS(167),
        [anon_sym_STAR_STAR] = ACTIONS(167),
        [anon_sym_PIPE] = ACTIONS(167),
        [anon_sym_AMP] = ACTIONS(167),
        [anon_sym_CARET] = ACTIONS(167),
        [anon_sym_LT_LT] = ACTIONS(167),
        [anon_sym_GT_GT] = ACTIONS(167),
        [anon_sym_and] = ACTIONS(167),
        [anon_sym_or] = ACTIONS(167),
        [anon_sym_LBRACK] = ACTIONS(167),
        [sym_comment] = ACTIONS(81),
    },
    [83] = {
        [anon_sym_LPAREN] = ACTIONS(259),
        [anon_sym_RPAREN] = ACTIONS(323),
        [anon_sym_COMMA] = ACTIONS(325),
        [anon_sym_STAR] = ACTIONS(327),
        [anon_sym_PLUS] = ACTIONS(329),
        [anon_sym_DASH] = ACTIONS(329),
        [anon_sym_SLASH] = ACTIONS(331),
        [anon_sym_STAR_STAR] = ACTIONS(333),
        [anon_sym_PIPE] = ACTIONS(335),
        [anon_sym_AMP] = ACTIONS(337),
        [anon_sym_CARET] = ACTIONS(339),
        [anon_sym_LT_LT] = ACTIONS(329),
        [anon_sym_GT_GT] = ACTIONS(329),
        [anon_sym_and] = ACTIONS(337),
        [anon_sym_or] = ACTIONS(335),
        [anon_sym_LBRACK] = ACTIONS(275),
        [sym_comment] = ACTIONS(81),
    },
    [84] = {
        [anon_sym_RPAREN] = ACTIONS(323),
        [anon_sym_COMMA] = ACTIONS(325),
        [sym_comment] = ACTIONS(81),
    },
    [85] = {
        [aux_sym_call_repeat2] = STATE(119),
        [anon_sym_RPAREN] = ACTIONS(323),
        [anon_sym_COMMA] = ACTIONS(341),
        [sym_comment] = ACTIONS(81),
    },
    [86] = {
        [anon_sym_RPAREN] = ACTIONS(323),
        [sym_comment] = ACTIONS(81),
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
        [anon_sym_STAR] = ACTIONS(239),
        [anon_sym_STAR_STAR] = ACTIONS(241),
        [anon_sym_not] = ACTIONS(243),
        [anon_sym_LBRACK] = ACTIONS(141),
        [anon_sym_LBRACE] = ACTIONS(143),
        [sym_number] = ACTIONS(145),
        [sym_identifier] = ACTIONS(245),
        [sym_comment] = ACTIONS(81),
    },
    [88] = {
        [anon_sym_LPAREN] = ACTIONS(259),
        [anon_sym_RPAREN] = ACTIONS(343),
        [anon_sym_COMMA] = ACTIONS(345),
        [anon_sym_STAR] = ACTIONS(327),
        [anon_sym_PLUS] = ACTIONS(329),
        [anon_sym_DASH] = ACTIONS(329),
        [anon_sym_SLASH] = ACTIONS(331),
        [anon_sym_STAR_STAR] = ACTIONS(333),
        [anon_sym_PIPE] = ACTIONS(335),
        [anon_sym_AMP] = ACTIONS(337),
        [anon_sym_CARET] = ACTIONS(339),
        [anon_sym_LT_LT] = ACTIONS(329),
        [anon_sym_GT_GT] = ACTIONS(329),
        [anon_sym_and] = ACTIONS(337),
        [anon_sym_or] = ACTIONS(335),
        [anon_sym_LBRACK] = ACTIONS(275),
        [sym_comment] = ACTIONS(81),
    },
    [89] = {
        [anon_sym_RPAREN] = ACTIONS(343),
        [anon_sym_COMMA] = ACTIONS(345),
        [sym_comment] = ACTIONS(81),
    },
    [90] = {
        [aux_sym_call_repeat2] = STATE(94),
        [anon_sym_RPAREN] = ACTIONS(343),
        [anon_sym_COMMA] = ACTIONS(347),
        [sym_comment] = ACTIONS(81),
    },
    [91] = {
        [anon_sym_RPAREN] = ACTIONS(343),
        [sym_comment] = ACTIONS(81),
    },
    [92] = {
        [anon_sym_LPAREN] = ACTIONS(349),
        [anon_sym_RPAREN] = ACTIONS(349),
        [anon_sym_COMMA] = ACTIONS(349),
        [anon_sym_as] = ACTIONS(349),
        [anon_sym_STAR] = ACTIONS(351),
        [anon_sym_COLON] = ACTIONS(349),
        [anon_sym_for] = ACTIONS(349),
        [anon_sym_in] = ACTIONS(349),
        [anon_sym_PLUS] = ACTIONS(349),
        [anon_sym_DASH] = ACTIONS(349),
        [anon_sym_SLASH] = ACTIONS(349),
        [anon_sym_STAR_STAR] = ACTIONS(349),
        [anon_sym_PIPE] = ACTIONS(349),
        [anon_sym_AMP] = ACTIONS(349),
        [anon_sym_CARET] = ACTIONS(349),
        [anon_sym_LT_LT] = ACTIONS(349),
        [anon_sym_GT_GT] = ACTIONS(349),
        [anon_sym_and] = ACTIONS(349),
        [anon_sym_or] = ACTIONS(349),
        [anon_sym_LBRACK] = ACTIONS(349),
        [anon_sym_RBRACK] = ACTIONS(349),
        [anon_sym_RBRACE] = ACTIONS(349),
        [sym_comment] = ACTIONS(81),
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
        [anon_sym_STAR_STAR] = ACTIONS(241),
        [anon_sym_not] = ACTIONS(243),
        [anon_sym_LBRACK] = ACTIONS(141),
        [anon_sym_LBRACE] = ACTIONS(143),
        [sym_number] = ACTIONS(145),
        [sym_identifier] = ACTIONS(245),
        [sym_comment] = ACTIONS(81),
    },
    [94] = {
        [anon_sym_RPAREN] = ACTIONS(353),
        [anon_sym_COMMA] = ACTIONS(355),
        [sym_comment] = ACTIONS(81),
    },
    [95] = {
        [anon_sym_LPAREN] = ACTIONS(357),
        [anon_sym_RPAREN] = ACTIONS(357),
        [anon_sym_COMMA] = ACTIONS(357),
        [anon_sym_as] = ACTIONS(357),
        [anon_sym_STAR] = ACTIONS(359),
        [anon_sym_COLON] = ACTIONS(357),
        [anon_sym_for] = ACTIONS(357),
        [anon_sym_in] = ACTIONS(357),
        [anon_sym_PLUS] = ACTIONS(357),
        [anon_sym_DASH] = ACTIONS(357),
        [anon_sym_SLASH] = ACTIONS(357),
        [anon_sym_STAR_STAR] = ACTIONS(357),
        [anon_sym_PIPE] = ACTIONS(357),
        [anon_sym_AMP] = ACTIONS(357),
        [anon_sym_CARET] = ACTIONS(357),
        [anon_sym_LT_LT] = ACTIONS(357),
        [anon_sym_GT_GT] = ACTIONS(357),
        [anon_sym_and] = ACTIONS(357),
        [anon_sym_or] = ACTIONS(357),
        [anon_sym_LBRACK] = ACTIONS(357),
        [anon_sym_RBRACK] = ACTIONS(357),
        [anon_sym_RBRACE] = ACTIONS(357),
        [sym_comment] = ACTIONS(81),
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
        [anon_sym_STAR_STAR] = ACTIONS(241),
        [anon_sym_not] = ACTIONS(243),
        [anon_sym_LBRACK] = ACTIONS(141),
        [anon_sym_LBRACE] = ACTIONS(143),
        [sym_number] = ACTIONS(145),
        [sym_identifier] = ACTIONS(245),
        [sym_comment] = ACTIONS(81),
    },
    [97] = {
        [anon_sym_LPAREN] = ACTIONS(259),
        [anon_sym_RPAREN] = ACTIONS(361),
        [anon_sym_COMMA] = ACTIONS(361),
        [anon_sym_STAR] = ACTIONS(327),
        [anon_sym_PLUS] = ACTIONS(329),
        [anon_sym_DASH] = ACTIONS(329),
        [anon_sym_SLASH] = ACTIONS(331),
        [anon_sym_STAR_STAR] = ACTIONS(333),
        [anon_sym_PIPE] = ACTIONS(335),
        [anon_sym_AMP] = ACTIONS(337),
        [anon_sym_CARET] = ACTIONS(339),
        [anon_sym_LT_LT] = ACTIONS(329),
        [anon_sym_GT_GT] = ACTIONS(329),
        [anon_sym_and] = ACTIONS(337),
        [anon_sym_or] = ACTIONS(335),
        [anon_sym_LBRACK] = ACTIONS(275),
        [sym_comment] = ACTIONS(81),
    },
    [98] = {
        [anon_sym_RPAREN] = ACTIONS(361),
        [anon_sym_COMMA] = ACTIONS(361),
        [sym_comment] = ACTIONS(81),
    },
    [99] = {
        [anon_sym_RPAREN] = ACTIONS(363),
        [sym_comment] = ACTIONS(81),
    },
    [100] = {
        [anon_sym_LPAREN] = ACTIONS(365),
        [anon_sym_RPAREN] = ACTIONS(365),
        [anon_sym_COMMA] = ACTIONS(365),
        [anon_sym_as] = ACTIONS(365),
        [anon_sym_STAR] = ACTIONS(367),
        [anon_sym_COLON] = ACTIONS(365),
        [anon_sym_for] = ACTIONS(365),
        [anon_sym_in] = ACTIONS(365),
        [anon_sym_PLUS] = ACTIONS(365),
        [anon_sym_DASH] = ACTIONS(365),
        [anon_sym_SLASH] = ACTIONS(365),
        [anon_sym_STAR_STAR] = ACTIONS(365),
        [anon_sym_PIPE] = ACTIONS(365),
        [anon_sym_AMP] = ACTIONS(365),
        [anon_sym_CARET] = ACTIONS(365),
        [anon_sym_LT_LT] = ACTIONS(365),
        [anon_sym_GT_GT] = ACTIONS(365),
        [anon_sym_and] = ACTIONS(365),
        [anon_sym_or] = ACTIONS(365),
        [anon_sym_LBRACK] = ACTIONS(365),
        [anon_sym_RBRACK] = ACTIONS(365),
        [anon_sym_RBRACE] = ACTIONS(365),
        [sym_comment] = ACTIONS(81),
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
        [anon_sym_not] = ACTIONS(243),
        [anon_sym_LBRACK] = ACTIONS(141),
        [anon_sym_LBRACE] = ACTIONS(143),
        [sym_number] = ACTIONS(145),
        [sym_identifier] = ACTIONS(147),
        [sym_comment] = ACTIONS(81),
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
        [anon_sym_not] = ACTIONS(243),
        [anon_sym_LBRACK] = ACTIONS(141),
        [anon_sym_LBRACE] = ACTIONS(143),
        [sym_number] = ACTIONS(145),
        [sym_identifier] = ACTIONS(147),
        [sym_comment] = ACTIONS(81),
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
        [anon_sym_not] = ACTIONS(243),
        [anon_sym_LBRACK] = ACTIONS(141),
        [anon_sym_LBRACE] = ACTIONS(143),
        [sym_number] = ACTIONS(145),
        [sym_identifier] = ACTIONS(147),
        [sym_comment] = ACTIONS(81),
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
        [anon_sym_not] = ACTIONS(243),
        [anon_sym_LBRACK] = ACTIONS(141),
        [anon_sym_LBRACE] = ACTIONS(143),
        [sym_number] = ACTIONS(145),
        [sym_identifier] = ACTIONS(147),
        [sym_comment] = ACTIONS(81),
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
        [anon_sym_not] = ACTIONS(243),
        [anon_sym_LBRACK] = ACTIONS(141),
        [anon_sym_LBRACE] = ACTIONS(143),
        [sym_number] = ACTIONS(145),
        [sym_identifier] = ACTIONS(147),
        [sym_comment] = ACTIONS(81),
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
        [anon_sym_not] = ACTIONS(243),
        [anon_sym_LBRACK] = ACTIONS(141),
        [anon_sym_LBRACE] = ACTIONS(143),
        [sym_number] = ACTIONS(145),
        [sym_identifier] = ACTIONS(147),
        [sym_comment] = ACTIONS(81),
    },
    [107] = {
        [anon_sym_LPAREN] = ACTIONS(259),
        [anon_sym_RPAREN] = ACTIONS(315),
        [anon_sym_COMMA] = ACTIONS(315),
        [anon_sym_STAR] = ACTIONS(327),
        [anon_sym_PLUS] = ACTIONS(329),
        [anon_sym_DASH] = ACTIONS(329),
        [anon_sym_SLASH] = ACTIONS(331),
        [anon_sym_STAR_STAR] = ACTIONS(333),
        [anon_sym_PIPE] = ACTIONS(315),
        [anon_sym_AMP] = ACTIONS(337),
        [anon_sym_CARET] = ACTIONS(339),
        [anon_sym_LT_LT] = ACTIONS(329),
        [anon_sym_GT_GT] = ACTIONS(329),
        [anon_sym_and] = ACTIONS(337),
        [anon_sym_or] = ACTIONS(315),
        [anon_sym_LBRACK] = ACTIONS(315),
        [sym_comment] = ACTIONS(81),
    },
    [108] = {
        [anon_sym_LPAREN] = ACTIONS(259),
        [anon_sym_RPAREN] = ACTIONS(315),
        [anon_sym_COMMA] = ACTIONS(315),
        [anon_sym_STAR] = ACTIONS(327),
        [anon_sym_PLUS] = ACTIONS(329),
        [anon_sym_DASH] = ACTIONS(329),
        [anon_sym_SLASH] = ACTIONS(331),
        [anon_sym_STAR_STAR] = ACTIONS(333),
        [anon_sym_PIPE] = ACTIONS(315),
        [anon_sym_AMP] = ACTIONS(315),
        [anon_sym_CARET] = ACTIONS(339),
        [anon_sym_LT_LT] = ACTIONS(329),
        [anon_sym_GT_GT] = ACTIONS(329),
        [anon_sym_and] = ACTIONS(315),
        [anon_sym_or] = ACTIONS(315),
        [anon_sym_LBRACK] = ACTIONS(315),
        [sym_comment] = ACTIONS(81),
    },
    [109] = {
        [anon_sym_LPAREN] = ACTIONS(259),
        [anon_sym_RPAREN] = ACTIONS(315),
        [anon_sym_COMMA] = ACTIONS(315),
        [anon_sym_STAR] = ACTIONS(327),
        [anon_sym_PLUS] = ACTIONS(315),
        [anon_sym_DASH] = ACTIONS(315),
        [anon_sym_SLASH] = ACTIONS(331),
        [anon_sym_STAR_STAR] = ACTIONS(333),
        [anon_sym_PIPE] = ACTIONS(315),
        [anon_sym_AMP] = ACTIONS(315),
        [anon_sym_CARET] = ACTIONS(315),
        [anon_sym_LT_LT] = ACTIONS(315),
        [anon_sym_GT_GT] = ACTIONS(315),
        [anon_sym_and] = ACTIONS(315),
        [anon_sym_or] = ACTIONS(315),
        [anon_sym_LBRACK] = ACTIONS(315),
        [sym_comment] = ACTIONS(81),
    },
    [110] = {
        [anon_sym_LPAREN] = ACTIONS(259),
        [anon_sym_RPAREN] = ACTIONS(315),
        [anon_sym_COMMA] = ACTIONS(315),
        [anon_sym_STAR] = ACTIONS(327),
        [anon_sym_PLUS] = ACTIONS(329),
        [anon_sym_DASH] = ACTIONS(329),
        [anon_sym_SLASH] = ACTIONS(331),
        [anon_sym_STAR_STAR] = ACTIONS(333),
        [anon_sym_PIPE] = ACTIONS(315),
        [anon_sym_AMP] = ACTIONS(315),
        [anon_sym_CARET] = ACTIONS(315),
        [anon_sym_LT_LT] = ACTIONS(329),
        [anon_sym_GT_GT] = ACTIONS(329),
        [anon_sym_and] = ACTIONS(315),
        [anon_sym_or] = ACTIONS(315),
        [anon_sym_LBRACK] = ACTIONS(315),
        [sym_comment] = ACTIONS(81),
    },
    [111] = {
        [anon_sym_LPAREN] = ACTIONS(259),
        [anon_sym_RPAREN] = ACTIONS(315),
        [anon_sym_COMMA] = ACTIONS(315),
        [anon_sym_STAR] = ACTIONS(317),
        [anon_sym_PLUS] = ACTIONS(315),
        [anon_sym_DASH] = ACTIONS(315),
        [anon_sym_SLASH] = ACTIONS(315),
        [anon_sym_STAR_STAR] = ACTIONS(333),
        [anon_sym_PIPE] = ACTIONS(315),
        [anon_sym_AMP] = ACTIONS(315),
        [anon_sym_CARET] = ACTIONS(315),
        [anon_sym_LT_LT] = ACTIONS(315),
        [anon_sym_GT_GT] = ACTIONS(315),
        [anon_sym_and] = ACTIONS(315),
        [anon_sym_or] = ACTIONS(315),
        [anon_sym_LBRACK] = ACTIONS(315),
        [sym_comment] = ACTIONS(81),
    },
    [112] = {
        [anon_sym_LPAREN] = ACTIONS(259),
        [anon_sym_RPAREN] = ACTIONS(369),
        [anon_sym_COMMA] = ACTIONS(369),
        [anon_sym_STAR] = ACTIONS(327),
        [anon_sym_PLUS] = ACTIONS(329),
        [anon_sym_DASH] = ACTIONS(329),
        [anon_sym_SLASH] = ACTIONS(331),
        [anon_sym_STAR_STAR] = ACTIONS(333),
        [anon_sym_PIPE] = ACTIONS(335),
        [anon_sym_AMP] = ACTIONS(337),
        [anon_sym_CARET] = ACTIONS(339),
        [anon_sym_LT_LT] = ACTIONS(329),
        [anon_sym_GT_GT] = ACTIONS(329),
        [anon_sym_and] = ACTIONS(337),
        [anon_sym_or] = ACTIONS(335),
        [anon_sym_LBRACK] = ACTIONS(275),
        [sym_comment] = ACTIONS(81),
    },
    [113] = {
        [anon_sym_RPAREN] = ACTIONS(369),
        [anon_sym_COMMA] = ACTIONS(369),
        [sym_comment] = ACTIONS(81),
    },
    [114] = {
        [anon_sym_RPAREN] = ACTIONS(371),
        [sym_comment] = ACTIONS(81),
    },
    [115] = {
        [anon_sym_LPAREN] = ACTIONS(373),
        [anon_sym_RPAREN] = ACTIONS(373),
        [anon_sym_COMMA] = ACTIONS(373),
        [anon_sym_as] = ACTIONS(373),
        [anon_sym_STAR] = ACTIONS(375),
        [anon_sym_COLON] = ACTIONS(373),
        [anon_sym_for] = ACTIONS(373),
        [anon_sym_in] = ACTIONS(373),
        [anon_sym_PLUS] = ACTIONS(373),
        [anon_sym_DASH] = ACTIONS(373),
        [anon_sym_SLASH] = ACTIONS(373),
        [anon_sym_STAR_STAR] = ACTIONS(373),
        [anon_sym_PIPE] = ACTIONS(373),
        [anon_sym_AMP] = ACTIONS(373),
        [anon_sym_CARET] = ACTIONS(373),
        [anon_sym_LT_LT] = ACTIONS(373),
        [anon_sym_GT_GT] = ACTIONS(373),
        [anon_sym_and] = ACTIONS(373),
        [anon_sym_or] = ACTIONS(373),
        [anon_sym_LBRACK] = ACTIONS(373),
        [anon_sym_RBRACK] = ACTIONS(373),
        [anon_sym_RBRACE] = ACTIONS(373),
        [sym_comment] = ACTIONS(81),
    },
    [116] = {
        [anon_sym_RPAREN] = ACTIONS(353),
        [anon_sym_STAR] = ACTIONS(377),
        [anon_sym_STAR_STAR] = ACTIONS(379),
        [anon_sym_not] = ACTIONS(377),
        [anon_sym_LBRACK] = ACTIONS(379),
        [anon_sym_LBRACE] = ACTIONS(379),
        [sym_number] = ACTIONS(377),
        [sym_identifier] = ACTIONS(381),
        [sym_comment] = ACTIONS(81),
    },
    [117] = {
        [anon_sym_LPAREN] = ACTIONS(383),
        [anon_sym_RPAREN] = ACTIONS(383),
        [anon_sym_COMMA] = ACTIONS(383),
        [anon_sym_as] = ACTIONS(383),
        [anon_sym_STAR] = ACTIONS(385),
        [anon_sym_COLON] = ACTIONS(383),
        [anon_sym_for] = ACTIONS(383),
        [anon_sym_in] = ACTIONS(383),
        [anon_sym_PLUS] = ACTIONS(383),
        [anon_sym_DASH] = ACTIONS(383),
        [anon_sym_SLASH] = ACTIONS(383),
        [anon_sym_STAR_STAR] = ACTIONS(383),
        [anon_sym_PIPE] = ACTIONS(383),
        [anon_sym_AMP] = ACTIONS(383),
        [anon_sym_CARET] = ACTIONS(383),
        [anon_sym_LT_LT] = ACTIONS(383),
        [anon_sym_GT_GT] = ACTIONS(383),
        [anon_sym_and] = ACTIONS(383),
        [anon_sym_or] = ACTIONS(383),
        [anon_sym_LBRACK] = ACTIONS(383),
        [anon_sym_RBRACK] = ACTIONS(383),
        [anon_sym_RBRACE] = ACTIONS(383),
        [sym_comment] = ACTIONS(81),
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
        [anon_sym_STAR_STAR] = ACTIONS(241),
        [anon_sym_not] = ACTIONS(243),
        [anon_sym_LBRACK] = ACTIONS(141),
        [anon_sym_LBRACE] = ACTIONS(143),
        [sym_number] = ACTIONS(145),
        [sym_identifier] = ACTIONS(245),
        [sym_comment] = ACTIONS(81),
    },
    [119] = {
        [anon_sym_RPAREN] = ACTIONS(343),
        [anon_sym_COMMA] = ACTIONS(387),
        [sym_comment] = ACTIONS(81),
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
        [anon_sym_STAR_STAR] = ACTIONS(241),
        [anon_sym_not] = ACTIONS(243),
        [anon_sym_LBRACK] = ACTIONS(141),
        [anon_sym_LBRACE] = ACTIONS(143),
        [sym_number] = ACTIONS(145),
        [sym_identifier] = ACTIONS(245),
        [sym_comment] = ACTIONS(81),
    },
    [121] = {
        [anon_sym_RPAREN] = ACTIONS(353),
        [sym_comment] = ACTIONS(81),
    },
    [122] = {
        [anon_sym_RPAREN] = ACTIONS(343),
        [anon_sym_STAR] = ACTIONS(389),
        [anon_sym_STAR_STAR] = ACTIONS(391),
        [anon_sym_not] = ACTIONS(389),
        [anon_sym_LBRACK] = ACTIONS(391),
        [anon_sym_LBRACE] = ACTIONS(391),
        [sym_number] = ACTIONS(389),
        [sym_identifier] = ACTIONS(393),
        [sym_comment] = ACTIONS(81),
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
        [anon_sym_not] = ACTIONS(243),
        [anon_sym_LBRACK] = ACTIONS(141),
        [anon_sym_LBRACE] = ACTIONS(143),
        [sym_number] = ACTIONS(145),
        [sym_identifier] = ACTIONS(147),
        [sym_comment] = ACTIONS(81),
    },
    [124] = {
        [anon_sym_LPAREN] = ACTIONS(259),
        [anon_sym_RPAREN] = ACTIONS(395),
        [anon_sym_COMMA] = ACTIONS(395),
        [anon_sym_STAR] = ACTIONS(327),
        [anon_sym_PLUS] = ACTIONS(329),
        [anon_sym_DASH] = ACTIONS(329),
        [anon_sym_SLASH] = ACTIONS(331),
        [anon_sym_STAR_STAR] = ACTIONS(333),
        [anon_sym_PIPE] = ACTIONS(335),
        [anon_sym_AMP] = ACTIONS(337),
        [anon_sym_CARET] = ACTIONS(339),
        [anon_sym_LT_LT] = ACTIONS(329),
        [anon_sym_GT_GT] = ACTIONS(329),
        [anon_sym_and] = ACTIONS(337),
        [anon_sym_or] = ACTIONS(335),
        [anon_sym_LBRACK] = ACTIONS(275),
        [sym_comment] = ACTIONS(81),
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
        [anon_sym_not] = ACTIONS(163),
        [anon_sym_LBRACK] = ACTIONS(141),
        [anon_sym_LBRACE] = ACTIONS(143),
        [sym_number] = ACTIONS(145),
        [sym_identifier] = ACTIONS(147),
        [sym_comment] = ACTIONS(81),
    },
    [126] = {
        [anon_sym_LPAREN] = ACTIONS(397),
        [anon_sym_RPAREN] = ACTIONS(397),
        [anon_sym_COMMA] = ACTIONS(397),
        [anon_sym_as] = ACTIONS(397),
        [anon_sym_STAR] = ACTIONS(399),
        [anon_sym_COLON] = ACTIONS(397),
        [anon_sym_for] = ACTIONS(397),
        [anon_sym_in] = ACTIONS(397),
        [anon_sym_PLUS] = ACTIONS(397),
        [anon_sym_DASH] = ACTIONS(397),
        [anon_sym_SLASH] = ACTIONS(397),
        [anon_sym_STAR_STAR] = ACTIONS(397),
        [anon_sym_PIPE] = ACTIONS(397),
        [anon_sym_AMP] = ACTIONS(397),
        [anon_sym_CARET] = ACTIONS(397),
        [anon_sym_LT_LT] = ACTIONS(397),
        [anon_sym_GT_GT] = ACTIONS(397),
        [anon_sym_and] = ACTIONS(397),
        [anon_sym_or] = ACTIONS(397),
        [anon_sym_LBRACK] = ACTIONS(397),
        [anon_sym_RBRACK] = ACTIONS(397),
        [anon_sym_RBRACE] = ACTIONS(397),
        [sym_comment] = ACTIONS(81),
    },
    [127] = {
        [aux_sym_print_statement_repeat1] = STATE(209),
        [anon_sym_LPAREN] = ACTIONS(259),
        [anon_sym_COMMA] = ACTIONS(401),
        [anon_sym_STAR] = ACTIONS(403),
        [anon_sym_COLON] = ACTIONS(405),
        [anon_sym_for] = ACTIONS(407),
        [anon_sym_PLUS] = ACTIONS(409),
        [anon_sym_DASH] = ACTIONS(409),
        [anon_sym_SLASH] = ACTIONS(411),
        [anon_sym_STAR_STAR] = ACTIONS(413),
        [anon_sym_PIPE] = ACTIONS(415),
        [anon_sym_AMP] = ACTIONS(417),
        [anon_sym_CARET] = ACTIONS(419),
        [anon_sym_LT_LT] = ACTIONS(409),
        [anon_sym_GT_GT] = ACTIONS(409),
        [anon_sym_and] = ACTIONS(417),
        [anon_sym_or] = ACTIONS(415),
        [anon_sym_LBRACK] = ACTIONS(275),
        [anon_sym_RBRACE] = ACTIONS(421),
        [sym_comment] = ACTIONS(81),
    },
    [128] = {
        [aux_sym_dictionary_repeat1] = STATE(132),
        [anon_sym_COMMA] = ACTIONS(423),
        [anon_sym_for] = ACTIONS(425),
        [anon_sym_RBRACE] = ACTIONS(427),
        [sym_comment] = ACTIONS(81),
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
        [anon_sym_not] = ACTIONS(139),
        [anon_sym_LBRACK] = ACTIONS(141),
        [anon_sym_LBRACE] = ACTIONS(143),
        [anon_sym_RBRACE] = ACTIONS(429),
        [sym_number] = ACTIONS(145),
        [sym_identifier] = ACTIONS(147),
        [sym_comment] = ACTIONS(81),
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
        [anon_sym_not] = ACTIONS(149),
        [anon_sym_LBRACK] = ACTIONS(141),
        [anon_sym_LBRACE] = ACTIONS(143),
        [sym_number] = ACTIONS(145),
        [sym_identifier] = ACTIONS(147),
        [sym_comment] = ACTIONS(81),
    },
    [131] = {
        [anon_sym_LPAREN] = ACTIONS(431),
        [anon_sym_RPAREN] = ACTIONS(431),
        [anon_sym_COMMA] = ACTIONS(431),
        [anon_sym_as] = ACTIONS(431),
        [anon_sym_STAR] = ACTIONS(433),
        [anon_sym_COLON] = ACTIONS(431),
        [anon_sym_for] = ACTIONS(431),
        [anon_sym_in] = ACTIONS(431),
        [anon_sym_PLUS] = ACTIONS(431),
        [anon_sym_DASH] = ACTIONS(431),
        [anon_sym_SLASH] = ACTIONS(431),
        [anon_sym_STAR_STAR] = ACTIONS(431),
        [anon_sym_PIPE] = ACTIONS(431),
        [anon_sym_AMP] = ACTIONS(431),
        [anon_sym_CARET] = ACTIONS(431),
        [anon_sym_LT_LT] = ACTIONS(431),
        [anon_sym_GT_GT] = ACTIONS(431),
        [anon_sym_and] = ACTIONS(431),
        [anon_sym_or] = ACTIONS(431),
        [anon_sym_LBRACK] = ACTIONS(431),
        [anon_sym_RBRACK] = ACTIONS(431),
        [anon_sym_RBRACE] = ACTIONS(431),
        [sym_comment] = ACTIONS(81),
    },
    [132] = {
        [anon_sym_COMMA] = ACTIONS(435),
        [anon_sym_RBRACE] = ACTIONS(429),
        [sym_comment] = ACTIONS(81),
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
        [anon_sym_not] = ACTIONS(139),
        [anon_sym_LBRACK] = ACTIONS(141),
        [anon_sym_LBRACE] = ACTIONS(143),
        [anon_sym_RBRACE] = ACTIONS(437),
        [sym_number] = ACTIONS(145),
        [sym_identifier] = ACTIONS(147),
        [sym_comment] = ACTIONS(81),
    },
    [134] = {
        [anon_sym_LPAREN] = ACTIONS(439),
        [anon_sym_RPAREN] = ACTIONS(439),
        [anon_sym_COMMA] = ACTIONS(439),
        [anon_sym_as] = ACTIONS(439),
        [anon_sym_STAR] = ACTIONS(441),
        [anon_sym_COLON] = ACTIONS(439),
        [anon_sym_for] = ACTIONS(439),
        [anon_sym_in] = ACTIONS(439),
        [anon_sym_PLUS] = ACTIONS(439),
        [anon_sym_DASH] = ACTIONS(439),
        [anon_sym_SLASH] = ACTIONS(439),
        [anon_sym_STAR_STAR] = ACTIONS(439),
        [anon_sym_PIPE] = ACTIONS(439),
        [anon_sym_AMP] = ACTIONS(439),
        [anon_sym_CARET] = ACTIONS(439),
        [anon_sym_LT_LT] = ACTIONS(439),
        [anon_sym_GT_GT] = ACTIONS(439),
        [anon_sym_and] = ACTIONS(439),
        [anon_sym_or] = ACTIONS(439),
        [anon_sym_LBRACK] = ACTIONS(439),
        [anon_sym_RBRACK] = ACTIONS(439),
        [anon_sym_RBRACE] = ACTIONS(439),
        [sym_comment] = ACTIONS(81),
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
        [anon_sym_not] = ACTIONS(139),
        [anon_sym_LBRACK] = ACTIONS(141),
        [anon_sym_LBRACE] = ACTIONS(143),
        [sym_number] = ACTIONS(145),
        [sym_identifier] = ACTIONS(147),
        [sym_comment] = ACTIONS(81),
    },
    [136] = {
        [anon_sym_LPAREN] = ACTIONS(443),
        [anon_sym_RPAREN] = ACTIONS(443),
        [anon_sym_COMMA] = ACTIONS(443),
        [anon_sym_as] = ACTIONS(443),
        [anon_sym_STAR] = ACTIONS(445),
        [anon_sym_COLON] = ACTIONS(443),
        [anon_sym_for] = ACTIONS(443),
        [anon_sym_in] = ACTIONS(443),
        [anon_sym_PLUS] = ACTIONS(443),
        [anon_sym_DASH] = ACTIONS(443),
        [anon_sym_SLASH] = ACTIONS(443),
        [anon_sym_STAR_STAR] = ACTIONS(443),
        [anon_sym_PIPE] = ACTIONS(443),
        [anon_sym_AMP] = ACTIONS(443),
        [anon_sym_CARET] = ACTIONS(443),
        [anon_sym_LT_LT] = ACTIONS(443),
        [anon_sym_GT_GT] = ACTIONS(443),
        [anon_sym_and] = ACTIONS(443),
        [anon_sym_or] = ACTIONS(443),
        [anon_sym_LBRACK] = ACTIONS(443),
        [anon_sym_RBRACK] = ACTIONS(443),
        [anon_sym_RBRACE] = ACTIONS(443),
        [sym_comment] = ACTIONS(81),
    },
    [137] = {
        [anon_sym_LPAREN] = ACTIONS(259),
        [anon_sym_STAR] = ACTIONS(447),
        [anon_sym_COLON] = ACTIONS(449),
        [anon_sym_PLUS] = ACTIONS(451),
        [anon_sym_DASH] = ACTIONS(451),
        [anon_sym_SLASH] = ACTIONS(453),
        [anon_sym_STAR_STAR] = ACTIONS(455),
        [anon_sym_PIPE] = ACTIONS(457),
        [anon_sym_AMP] = ACTIONS(459),
        [anon_sym_CARET] = ACTIONS(461),
        [anon_sym_LT_LT] = ACTIONS(451),
        [anon_sym_GT_GT] = ACTIONS(451),
        [anon_sym_and] = ACTIONS(459),
        [anon_sym_or] = ACTIONS(457),
        [anon_sym_LBRACK] = ACTIONS(275),
        [sym_comment] = ACTIONS(81),
    },
    [138] = {
        [anon_sym_COMMA] = ACTIONS(463),
        [anon_sym_RBRACE] = ACTIONS(463),
        [sym_comment] = ACTIONS(81),
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
        [anon_sym_not] = ACTIONS(139),
        [anon_sym_LBRACK] = ACTIONS(141),
        [anon_sym_LBRACE] = ACTIONS(143),
        [sym_number] = ACTIONS(145),
        [sym_identifier] = ACTIONS(147),
        [sym_comment] = ACTIONS(81),
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
        [anon_sym_not] = ACTIONS(465),
        [anon_sym_LBRACK] = ACTIONS(141),
        [anon_sym_LBRACE] = ACTIONS(143),
        [sym_number] = ACTIONS(145),
        [sym_identifier] = ACTIONS(147),
        [sym_comment] = ACTIONS(81),
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
        [anon_sym_not] = ACTIONS(139),
        [anon_sym_LBRACK] = ACTIONS(141),
        [anon_sym_LBRACE] = ACTIONS(143),
        [sym_number] = ACTIONS(145),
        [sym_identifier] = ACTIONS(147),
        [sym_comment] = ACTIONS(81),
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
        [anon_sym_not] = ACTIONS(139),
        [anon_sym_LBRACK] = ACTIONS(141),
        [anon_sym_LBRACE] = ACTIONS(143),
        [sym_number] = ACTIONS(145),
        [sym_identifier] = ACTIONS(147),
        [sym_comment] = ACTIONS(81),
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
        [anon_sym_not] = ACTIONS(139),
        [anon_sym_LBRACK] = ACTIONS(141),
        [anon_sym_LBRACE] = ACTIONS(143),
        [sym_number] = ACTIONS(145),
        [sym_identifier] = ACTIONS(147),
        [sym_comment] = ACTIONS(81),
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
        [anon_sym_not] = ACTIONS(139),
        [anon_sym_LBRACK] = ACTIONS(141),
        [anon_sym_LBRACE] = ACTIONS(143),
        [sym_number] = ACTIONS(145),
        [sym_identifier] = ACTIONS(147),
        [sym_comment] = ACTIONS(81),
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
        [anon_sym_not] = ACTIONS(139),
        [anon_sym_LBRACK] = ACTIONS(141),
        [anon_sym_LBRACE] = ACTIONS(143),
        [sym_number] = ACTIONS(145),
        [sym_identifier] = ACTIONS(147),
        [sym_comment] = ACTIONS(81),
    },
    [146] = {
        [anon_sym_LPAREN] = ACTIONS(259),
        [anon_sym_STAR] = ACTIONS(447),
        [anon_sym_COLON] = ACTIONS(315),
        [anon_sym_PLUS] = ACTIONS(451),
        [anon_sym_DASH] = ACTIONS(451),
        [anon_sym_SLASH] = ACTIONS(453),
        [anon_sym_STAR_STAR] = ACTIONS(455),
        [anon_sym_PIPE] = ACTIONS(315),
        [anon_sym_AMP] = ACTIONS(459),
        [anon_sym_CARET] = ACTIONS(461),
        [anon_sym_LT_LT] = ACTIONS(451),
        [anon_sym_GT_GT] = ACTIONS(451),
        [anon_sym_and] = ACTIONS(459),
        [anon_sym_or] = ACTIONS(315),
        [anon_sym_LBRACK] = ACTIONS(315),
        [sym_comment] = ACTIONS(81),
    },
    [147] = {
        [anon_sym_LPAREN] = ACTIONS(259),
        [anon_sym_STAR] = ACTIONS(447),
        [anon_sym_COLON] = ACTIONS(315),
        [anon_sym_PLUS] = ACTIONS(451),
        [anon_sym_DASH] = ACTIONS(451),
        [anon_sym_SLASH] = ACTIONS(453),
        [anon_sym_STAR_STAR] = ACTIONS(455),
        [anon_sym_PIPE] = ACTIONS(315),
        [anon_sym_AMP] = ACTIONS(315),
        [anon_sym_CARET] = ACTIONS(461),
        [anon_sym_LT_LT] = ACTIONS(451),
        [anon_sym_GT_GT] = ACTIONS(451),
        [anon_sym_and] = ACTIONS(315),
        [anon_sym_or] = ACTIONS(315),
        [anon_sym_LBRACK] = ACTIONS(315),
        [sym_comment] = ACTIONS(81),
    },
    [148] = {
        [anon_sym_LPAREN] = ACTIONS(259),
        [anon_sym_STAR] = ACTIONS(447),
        [anon_sym_COLON] = ACTIONS(315),
        [anon_sym_PLUS] = ACTIONS(315),
        [anon_sym_DASH] = ACTIONS(315),
        [anon_sym_SLASH] = ACTIONS(453),
        [anon_sym_STAR_STAR] = ACTIONS(455),
        [anon_sym_PIPE] = ACTIONS(315),
        [anon_sym_AMP] = ACTIONS(315),
        [anon_sym_CARET] = ACTIONS(315),
        [anon_sym_LT_LT] = ACTIONS(315),
        [anon_sym_GT_GT] = ACTIONS(315),
        [anon_sym_and] = ACTIONS(315),
        [anon_sym_or] = ACTIONS(315),
        [anon_sym_LBRACK] = ACTIONS(315),
        [sym_comment] = ACTIONS(81),
    },
    [149] = {
        [anon_sym_LPAREN] = ACTIONS(259),
        [anon_sym_STAR] = ACTIONS(447),
        [anon_sym_COLON] = ACTIONS(315),
        [anon_sym_PLUS] = ACTIONS(451),
        [anon_sym_DASH] = ACTIONS(451),
        [anon_sym_SLASH] = ACTIONS(453),
        [anon_sym_STAR_STAR] = ACTIONS(455),
        [anon_sym_PIPE] = ACTIONS(315),
        [anon_sym_AMP] = ACTIONS(315),
        [anon_sym_CARET] = ACTIONS(315),
        [anon_sym_LT_LT] = ACTIONS(451),
        [anon_sym_GT_GT] = ACTIONS(451),
        [anon_sym_and] = ACTIONS(315),
        [anon_sym_or] = ACTIONS(315),
        [anon_sym_LBRACK] = ACTIONS(315),
        [sym_comment] = ACTIONS(81),
    },
    [150] = {
        [anon_sym_LPAREN] = ACTIONS(259),
        [anon_sym_STAR] = ACTIONS(317),
        [anon_sym_COLON] = ACTIONS(315),
        [anon_sym_PLUS] = ACTIONS(315),
        [anon_sym_DASH] = ACTIONS(315),
        [anon_sym_SLASH] = ACTIONS(315),
        [anon_sym_STAR_STAR] = ACTIONS(455),
        [anon_sym_PIPE] = ACTIONS(315),
        [anon_sym_AMP] = ACTIONS(315),
        [anon_sym_CARET] = ACTIONS(315),
        [anon_sym_LT_LT] = ACTIONS(315),
        [anon_sym_GT_GT] = ACTIONS(315),
        [anon_sym_and] = ACTIONS(315),
        [anon_sym_or] = ACTIONS(315),
        [anon_sym_LBRACK] = ACTIONS(315),
        [sym_comment] = ACTIONS(81),
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
        [anon_sym_not] = ACTIONS(465),
        [anon_sym_LBRACK] = ACTIONS(141),
        [anon_sym_LBRACE] = ACTIONS(143),
        [sym_number] = ACTIONS(145),
        [sym_identifier] = ACTIONS(147),
        [sym_comment] = ACTIONS(81),
    },
    [152] = {
        [anon_sym_LPAREN] = ACTIONS(259),
        [anon_sym_COMMA] = ACTIONS(467),
        [anon_sym_STAR] = ACTIONS(469),
        [anon_sym_PLUS] = ACTIONS(471),
        [anon_sym_DASH] = ACTIONS(471),
        [anon_sym_SLASH] = ACTIONS(473),
        [anon_sym_STAR_STAR] = ACTIONS(475),
        [anon_sym_PIPE] = ACTIONS(477),
        [anon_sym_AMP] = ACTIONS(479),
        [anon_sym_CARET] = ACTIONS(481),
        [anon_sym_LT_LT] = ACTIONS(471),
        [anon_sym_GT_GT] = ACTIONS(471),
        [anon_sym_and] = ACTIONS(479),
        [anon_sym_or] = ACTIONS(477),
        [anon_sym_LBRACK] = ACTIONS(275),
        [anon_sym_RBRACE] = ACTIONS(467),
        [sym_comment] = ACTIONS(81),
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
        [anon_sym_not] = ACTIONS(465),
        [anon_sym_LBRACK] = ACTIONS(141),
        [anon_sym_LBRACE] = ACTIONS(143),
        [sym_number] = ACTIONS(145),
        [sym_identifier] = ACTIONS(147),
        [sym_comment] = ACTIONS(81),
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
        [anon_sym_not] = ACTIONS(465),
        [anon_sym_LBRACK] = ACTIONS(141),
        [anon_sym_LBRACE] = ACTIONS(143),
        [sym_number] = ACTIONS(145),
        [sym_identifier] = ACTIONS(147),
        [sym_comment] = ACTIONS(81),
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
        [anon_sym_not] = ACTIONS(465),
        [anon_sym_LBRACK] = ACTIONS(141),
        [anon_sym_LBRACE] = ACTIONS(143),
        [sym_number] = ACTIONS(145),
        [sym_identifier] = ACTIONS(147),
        [sym_comment] = ACTIONS(81),
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
        [anon_sym_not] = ACTIONS(465),
        [anon_sym_LBRACK] = ACTIONS(141),
        [anon_sym_LBRACE] = ACTIONS(143),
        [sym_number] = ACTIONS(145),
        [sym_identifier] = ACTIONS(147),
        [sym_comment] = ACTIONS(81),
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
        [anon_sym_not] = ACTIONS(465),
        [anon_sym_LBRACK] = ACTIONS(141),
        [anon_sym_LBRACE] = ACTIONS(143),
        [sym_number] = ACTIONS(145),
        [sym_identifier] = ACTIONS(147),
        [sym_comment] = ACTIONS(81),
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
        [anon_sym_not] = ACTIONS(465),
        [anon_sym_LBRACK] = ACTIONS(141),
        [anon_sym_LBRACE] = ACTIONS(143),
        [sym_number] = ACTIONS(145),
        [sym_identifier] = ACTIONS(147),
        [sym_comment] = ACTIONS(81),
    },
    [159] = {
        [anon_sym_LPAREN] = ACTIONS(259),
        [anon_sym_COMMA] = ACTIONS(315),
        [anon_sym_STAR] = ACTIONS(469),
        [anon_sym_PLUS] = ACTIONS(471),
        [anon_sym_DASH] = ACTIONS(471),
        [anon_sym_SLASH] = ACTIONS(473),
        [anon_sym_STAR_STAR] = ACTIONS(475),
        [anon_sym_PIPE] = ACTIONS(315),
        [anon_sym_AMP] = ACTIONS(479),
        [anon_sym_CARET] = ACTIONS(481),
        [anon_sym_LT_LT] = ACTIONS(471),
        [anon_sym_GT_GT] = ACTIONS(471),
        [anon_sym_and] = ACTIONS(479),
        [anon_sym_or] = ACTIONS(315),
        [anon_sym_LBRACK] = ACTIONS(315),
        [anon_sym_RBRACE] = ACTIONS(315),
        [sym_comment] = ACTIONS(81),
    },
    [160] = {
        [anon_sym_LPAREN] = ACTIONS(259),
        [anon_sym_COMMA] = ACTIONS(315),
        [anon_sym_STAR] = ACTIONS(469),
        [anon_sym_PLUS] = ACTIONS(471),
        [anon_sym_DASH] = ACTIONS(471),
        [anon_sym_SLASH] = ACTIONS(473),
        [anon_sym_STAR_STAR] = ACTIONS(475),
        [anon_sym_PIPE] = ACTIONS(315),
        [anon_sym_AMP] = ACTIONS(315),
        [anon_sym_CARET] = ACTIONS(481),
        [anon_sym_LT_LT] = ACTIONS(471),
        [anon_sym_GT_GT] = ACTIONS(471),
        [anon_sym_and] = ACTIONS(315),
        [anon_sym_or] = ACTIONS(315),
        [anon_sym_LBRACK] = ACTIONS(315),
        [anon_sym_RBRACE] = ACTIONS(315),
        [sym_comment] = ACTIONS(81),
    },
    [161] = {
        [anon_sym_LPAREN] = ACTIONS(259),
        [anon_sym_COMMA] = ACTIONS(315),
        [anon_sym_STAR] = ACTIONS(469),
        [anon_sym_PLUS] = ACTIONS(315),
        [anon_sym_DASH] = ACTIONS(315),
        [anon_sym_SLASH] = ACTIONS(473),
        [anon_sym_STAR_STAR] = ACTIONS(475),
        [anon_sym_PIPE] = ACTIONS(315),
        [anon_sym_AMP] = ACTIONS(315),
        [anon_sym_CARET] = ACTIONS(315),
        [anon_sym_LT_LT] = ACTIONS(315),
        [anon_sym_GT_GT] = ACTIONS(315),
        [anon_sym_and] = ACTIONS(315),
        [anon_sym_or] = ACTIONS(315),
        [anon_sym_LBRACK] = ACTIONS(315),
        [anon_sym_RBRACE] = ACTIONS(315),
        [sym_comment] = ACTIONS(81),
    },
    [162] = {
        [anon_sym_LPAREN] = ACTIONS(259),
        [anon_sym_COMMA] = ACTIONS(315),
        [anon_sym_STAR] = ACTIONS(469),
        [anon_sym_PLUS] = ACTIONS(471),
        [anon_sym_DASH] = ACTIONS(471),
        [anon_sym_SLASH] = ACTIONS(473),
        [anon_sym_STAR_STAR] = ACTIONS(475),
        [anon_sym_PIPE] = ACTIONS(315),
        [anon_sym_AMP] = ACTIONS(315),
        [anon_sym_CARET] = ACTIONS(315),
        [anon_sym_LT_LT] = ACTIONS(471),
        [anon_sym_GT_GT] = ACTIONS(471),
        [anon_sym_and] = ACTIONS(315),
        [anon_sym_or] = ACTIONS(315),
        [anon_sym_LBRACK] = ACTIONS(315),
        [anon_sym_RBRACE] = ACTIONS(315),
        [sym_comment] = ACTIONS(81),
    },
    [163] = {
        [anon_sym_LPAREN] = ACTIONS(259),
        [anon_sym_COMMA] = ACTIONS(315),
        [anon_sym_STAR] = ACTIONS(317),
        [anon_sym_PLUS] = ACTIONS(315),
        [anon_sym_DASH] = ACTIONS(315),
        [anon_sym_SLASH] = ACTIONS(315),
        [anon_sym_STAR_STAR] = ACTIONS(475),
        [anon_sym_PIPE] = ACTIONS(315),
        [anon_sym_AMP] = ACTIONS(315),
        [anon_sym_CARET] = ACTIONS(315),
        [anon_sym_LT_LT] = ACTIONS(315),
        [anon_sym_GT_GT] = ACTIONS(315),
        [anon_sym_and] = ACTIONS(315),
        [anon_sym_or] = ACTIONS(315),
        [anon_sym_LBRACK] = ACTIONS(315),
        [anon_sym_RBRACE] = ACTIONS(315),
        [sym_comment] = ACTIONS(81),
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
        [anon_sym_not] = ACTIONS(149),
        [anon_sym_LBRACK] = ACTIONS(141),
        [anon_sym_LBRACE] = ACTIONS(143),
        [sym_number] = ACTIONS(145),
        [sym_identifier] = ACTIONS(147),
        [sym_comment] = ACTIONS(81),
    },
    [165] = {
        [anon_sym_in] = ACTIONS(483),
        [sym_comment] = ACTIONS(81),
    },
    [166] = {
        [aux_sym_print_statement_repeat1] = STATE(174),
        [anon_sym_LPAREN] = ACTIONS(259),
        [anon_sym_COMMA] = ACTIONS(485),
        [anon_sym_STAR] = ACTIONS(487),
        [anon_sym_in] = ACTIONS(489),
        [anon_sym_PLUS] = ACTIONS(491),
        [anon_sym_DASH] = ACTIONS(491),
        [anon_sym_SLASH] = ACTIONS(493),
        [anon_sym_STAR_STAR] = ACTIONS(495),
        [anon_sym_PIPE] = ACTIONS(497),
        [anon_sym_AMP] = ACTIONS(499),
        [anon_sym_CARET] = ACTIONS(501),
        [anon_sym_LT_LT] = ACTIONS(491),
        [anon_sym_GT_GT] = ACTIONS(491),
        [anon_sym_and] = ACTIONS(499),
        [anon_sym_or] = ACTIONS(497),
        [anon_sym_LBRACK] = ACTIONS(275),
        [sym_comment] = ACTIONS(81),
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
        [anon_sym_not] = ACTIONS(149),
        [anon_sym_LBRACK] = ACTIONS(141),
        [anon_sym_LBRACE] = ACTIONS(143),
        [sym_number] = ACTIONS(145),
        [sym_identifier] = ACTIONS(147),
        [sym_comment] = ACTIONS(81),
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
        [anon_sym_not] = ACTIONS(149),
        [anon_sym_LBRACK] = ACTIONS(141),
        [anon_sym_LBRACE] = ACTIONS(143),
        [sym_number] = ACTIONS(145),
        [sym_identifier] = ACTIONS(147),
        [sym_comment] = ACTIONS(81),
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
        [anon_sym_not] = ACTIONS(149),
        [anon_sym_LBRACK] = ACTIONS(141),
        [anon_sym_LBRACE] = ACTIONS(143),
        [sym_number] = ACTIONS(145),
        [sym_identifier] = ACTIONS(147),
        [sym_comment] = ACTIONS(81),
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
        [anon_sym_not] = ACTIONS(149),
        [anon_sym_LBRACK] = ACTIONS(141),
        [anon_sym_LBRACE] = ACTIONS(143),
        [sym_number] = ACTIONS(145),
        [sym_identifier] = ACTIONS(147),
        [sym_comment] = ACTIONS(81),
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
        [anon_sym_not] = ACTIONS(149),
        [anon_sym_LBRACK] = ACTIONS(141),
        [anon_sym_LBRACE] = ACTIONS(143),
        [sym_number] = ACTIONS(145),
        [sym_identifier] = ACTIONS(147),
        [sym_comment] = ACTIONS(81),
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
        [anon_sym_not] = ACTIONS(149),
        [anon_sym_LBRACK] = ACTIONS(141),
        [anon_sym_LBRACE] = ACTIONS(143),
        [sym_number] = ACTIONS(145),
        [sym_identifier] = ACTIONS(147),
        [sym_comment] = ACTIONS(81),
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
        [anon_sym_not] = ACTIONS(149),
        [anon_sym_LBRACK] = ACTIONS(141),
        [anon_sym_LBRACE] = ACTIONS(143),
        [sym_number] = ACTIONS(145),
        [sym_identifier] = ACTIONS(147),
        [sym_comment] = ACTIONS(81),
    },
    [174] = {
        [anon_sym_COMMA] = ACTIONS(503),
        [anon_sym_in] = ACTIONS(505),
        [sym_comment] = ACTIONS(81),
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
        [anon_sym_not] = ACTIONS(149),
        [anon_sym_LBRACK] = ACTIONS(141),
        [anon_sym_LBRACE] = ACTIONS(143),
        [sym_number] = ACTIONS(145),
        [sym_identifier] = ACTIONS(147),
        [sym_comment] = ACTIONS(81),
    },
    [176] = {
        [anon_sym_LPAREN] = ACTIONS(259),
        [anon_sym_COMMA] = ACTIONS(507),
        [anon_sym_STAR] = ACTIONS(487),
        [anon_sym_in] = ACTIONS(507),
        [anon_sym_PLUS] = ACTIONS(491),
        [anon_sym_DASH] = ACTIONS(491),
        [anon_sym_SLASH] = ACTIONS(493),
        [anon_sym_STAR_STAR] = ACTIONS(495),
        [anon_sym_PIPE] = ACTIONS(497),
        [anon_sym_AMP] = ACTIONS(499),
        [anon_sym_CARET] = ACTIONS(501),
        [anon_sym_LT_LT] = ACTIONS(491),
        [anon_sym_GT_GT] = ACTIONS(491),
        [anon_sym_and] = ACTIONS(499),
        [anon_sym_or] = ACTIONS(497),
        [anon_sym_LBRACK] = ACTIONS(275),
        [sym_comment] = ACTIONS(81),
    },
    [177] = {
        [anon_sym_LPAREN] = ACTIONS(259),
        [anon_sym_COMMA] = ACTIONS(315),
        [anon_sym_STAR] = ACTIONS(487),
        [anon_sym_in] = ACTIONS(315),
        [anon_sym_PLUS] = ACTIONS(491),
        [anon_sym_DASH] = ACTIONS(491),
        [anon_sym_SLASH] = ACTIONS(493),
        [anon_sym_STAR_STAR] = ACTIONS(495),
        [anon_sym_PIPE] = ACTIONS(315),
        [anon_sym_AMP] = ACTIONS(499),
        [anon_sym_CARET] = ACTIONS(501),
        [anon_sym_LT_LT] = ACTIONS(491),
        [anon_sym_GT_GT] = ACTIONS(491),
        [anon_sym_and] = ACTIONS(499),
        [anon_sym_or] = ACTIONS(315),
        [anon_sym_LBRACK] = ACTIONS(315),
        [sym_comment] = ACTIONS(81),
    },
    [178] = {
        [anon_sym_LPAREN] = ACTIONS(259),
        [anon_sym_COMMA] = ACTIONS(315),
        [anon_sym_STAR] = ACTIONS(487),
        [anon_sym_in] = ACTIONS(315),
        [anon_sym_PLUS] = ACTIONS(491),
        [anon_sym_DASH] = ACTIONS(491),
        [anon_sym_SLASH] = ACTIONS(493),
        [anon_sym_STAR_STAR] = ACTIONS(495),
        [anon_sym_PIPE] = ACTIONS(315),
        [anon_sym_AMP] = ACTIONS(315),
        [anon_sym_CARET] = ACTIONS(501),
        [anon_sym_LT_LT] = ACTIONS(491),
        [anon_sym_GT_GT] = ACTIONS(491),
        [anon_sym_and] = ACTIONS(315),
        [anon_sym_or] = ACTIONS(315),
        [anon_sym_LBRACK] = ACTIONS(315),
        [sym_comment] = ACTIONS(81),
    },
    [179] = {
        [anon_sym_LPAREN] = ACTIONS(259),
        [anon_sym_COMMA] = ACTIONS(315),
        [anon_sym_STAR] = ACTIONS(487),
        [anon_sym_in] = ACTIONS(315),
        [anon_sym_PLUS] = ACTIONS(315),
        [anon_sym_DASH] = ACTIONS(315),
        [anon_sym_SLASH] = ACTIONS(493),
        [anon_sym_STAR_STAR] = ACTIONS(495),
        [anon_sym_PIPE] = ACTIONS(315),
        [anon_sym_AMP] = ACTIONS(315),
        [anon_sym_CARET] = ACTIONS(315),
        [anon_sym_LT_LT] = ACTIONS(315),
        [anon_sym_GT_GT] = ACTIONS(315),
        [anon_sym_and] = ACTIONS(315),
        [anon_sym_or] = ACTIONS(315),
        [anon_sym_LBRACK] = ACTIONS(315),
        [sym_comment] = ACTIONS(81),
    },
    [180] = {
        [anon_sym_LPAREN] = ACTIONS(259),
        [anon_sym_COMMA] = ACTIONS(315),
        [anon_sym_STAR] = ACTIONS(487),
        [anon_sym_in] = ACTIONS(315),
        [anon_sym_PLUS] = ACTIONS(491),
        [anon_sym_DASH] = ACTIONS(491),
        [anon_sym_SLASH] = ACTIONS(493),
        [anon_sym_STAR_STAR] = ACTIONS(495),
        [anon_sym_PIPE] = ACTIONS(315),
        [anon_sym_AMP] = ACTIONS(315),
        [anon_sym_CARET] = ACTIONS(315),
        [anon_sym_LT_LT] = ACTIONS(491),
        [anon_sym_GT_GT] = ACTIONS(491),
        [anon_sym_and] = ACTIONS(315),
        [anon_sym_or] = ACTIONS(315),
        [anon_sym_LBRACK] = ACTIONS(315),
        [sym_comment] = ACTIONS(81),
    },
    [181] = {
        [anon_sym_LPAREN] = ACTIONS(259),
        [anon_sym_COMMA] = ACTIONS(315),
        [anon_sym_STAR] = ACTIONS(317),
        [anon_sym_in] = ACTIONS(315),
        [anon_sym_PLUS] = ACTIONS(315),
        [anon_sym_DASH] = ACTIONS(315),
        [anon_sym_SLASH] = ACTIONS(315),
        [anon_sym_STAR_STAR] = ACTIONS(495),
        [anon_sym_PIPE] = ACTIONS(315),
        [anon_sym_AMP] = ACTIONS(315),
        [anon_sym_CARET] = ACTIONS(315),
        [anon_sym_LT_LT] = ACTIONS(315),
        [anon_sym_GT_GT] = ACTIONS(315),
        [anon_sym_and] = ACTIONS(315),
        [anon_sym_or] = ACTIONS(315),
        [anon_sym_LBRACK] = ACTIONS(315),
        [sym_comment] = ACTIONS(81),
    },
    [182] = {
        [anon_sym_LPAREN] = ACTIONS(259),
        [anon_sym_COMMA] = ACTIONS(509),
        [anon_sym_STAR] = ACTIONS(487),
        [anon_sym_in] = ACTIONS(509),
        [anon_sym_PLUS] = ACTIONS(491),
        [anon_sym_DASH] = ACTIONS(491),
        [anon_sym_SLASH] = ACTIONS(493),
        [anon_sym_STAR_STAR] = ACTIONS(495),
        [anon_sym_PIPE] = ACTIONS(497),
        [anon_sym_AMP] = ACTIONS(499),
        [anon_sym_CARET] = ACTIONS(501),
        [anon_sym_LT_LT] = ACTIONS(491),
        [anon_sym_GT_GT] = ACTIONS(491),
        [anon_sym_and] = ACTIONS(499),
        [anon_sym_or] = ACTIONS(497),
        [anon_sym_LBRACK] = ACTIONS(275),
        [sym_comment] = ACTIONS(81),
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
        [anon_sym_not] = ACTIONS(511),
        [anon_sym_LBRACK] = ACTIONS(141),
        [anon_sym_LBRACE] = ACTIONS(143),
        [sym_number] = ACTIONS(145),
        [sym_identifier] = ACTIONS(147),
        [sym_comment] = ACTIONS(81),
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
        [anon_sym_not] = ACTIONS(511),
        [anon_sym_LBRACK] = ACTIONS(141),
        [anon_sym_LBRACE] = ACTIONS(143),
        [sym_number] = ACTIONS(145),
        [sym_identifier] = ACTIONS(147),
        [sym_comment] = ACTIONS(81),
    },
    [185] = {
        [anon_sym_LPAREN] = ACTIONS(259),
        [anon_sym_STAR] = ACTIONS(513),
        [anon_sym_PLUS] = ACTIONS(515),
        [anon_sym_DASH] = ACTIONS(515),
        [anon_sym_SLASH] = ACTIONS(517),
        [anon_sym_STAR_STAR] = ACTIONS(519),
        [anon_sym_PIPE] = ACTIONS(521),
        [anon_sym_AMP] = ACTIONS(523),
        [anon_sym_CARET] = ACTIONS(525),
        [anon_sym_LT_LT] = ACTIONS(515),
        [anon_sym_GT_GT] = ACTIONS(515),
        [anon_sym_and] = ACTIONS(523),
        [anon_sym_or] = ACTIONS(521),
        [anon_sym_LBRACK] = ACTIONS(275),
        [anon_sym_RBRACE] = ACTIONS(527),
        [sym_comment] = ACTIONS(81),
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
        [anon_sym_not] = ACTIONS(511),
        [anon_sym_LBRACK] = ACTIONS(141),
        [anon_sym_LBRACE] = ACTIONS(143),
        [sym_number] = ACTIONS(145),
        [sym_identifier] = ACTIONS(147),
        [sym_comment] = ACTIONS(81),
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
        [anon_sym_not] = ACTIONS(511),
        [anon_sym_LBRACK] = ACTIONS(141),
        [anon_sym_LBRACE] = ACTIONS(143),
        [sym_number] = ACTIONS(145),
        [sym_identifier] = ACTIONS(147),
        [sym_comment] = ACTIONS(81),
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
        [anon_sym_not] = ACTIONS(511),
        [anon_sym_LBRACK] = ACTIONS(141),
        [anon_sym_LBRACE] = ACTIONS(143),
        [sym_number] = ACTIONS(145),
        [sym_identifier] = ACTIONS(147),
        [sym_comment] = ACTIONS(81),
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
        [anon_sym_not] = ACTIONS(511),
        [anon_sym_LBRACK] = ACTIONS(141),
        [anon_sym_LBRACE] = ACTIONS(143),
        [sym_number] = ACTIONS(145),
        [sym_identifier] = ACTIONS(147),
        [sym_comment] = ACTIONS(81),
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
        [anon_sym_not] = ACTIONS(511),
        [anon_sym_LBRACK] = ACTIONS(141),
        [anon_sym_LBRACE] = ACTIONS(143),
        [sym_number] = ACTIONS(145),
        [sym_identifier] = ACTIONS(147),
        [sym_comment] = ACTIONS(81),
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
        [anon_sym_not] = ACTIONS(511),
        [anon_sym_LBRACK] = ACTIONS(141),
        [anon_sym_LBRACE] = ACTIONS(143),
        [sym_number] = ACTIONS(145),
        [sym_identifier] = ACTIONS(147),
        [sym_comment] = ACTIONS(81),
    },
    [192] = {
        [anon_sym_LPAREN] = ACTIONS(529),
        [anon_sym_RPAREN] = ACTIONS(529),
        [anon_sym_COMMA] = ACTIONS(529),
        [anon_sym_as] = ACTIONS(529),
        [anon_sym_STAR] = ACTIONS(531),
        [anon_sym_COLON] = ACTIONS(529),
        [anon_sym_for] = ACTIONS(529),
        [anon_sym_in] = ACTIONS(529),
        [anon_sym_PLUS] = ACTIONS(529),
        [anon_sym_DASH] = ACTIONS(529),
        [anon_sym_SLASH] = ACTIONS(529),
        [anon_sym_STAR_STAR] = ACTIONS(529),
        [anon_sym_PIPE] = ACTIONS(529),
        [anon_sym_AMP] = ACTIONS(529),
        [anon_sym_CARET] = ACTIONS(529),
        [anon_sym_LT_LT] = ACTIONS(529),
        [anon_sym_GT_GT] = ACTIONS(529),
        [anon_sym_and] = ACTIONS(529),
        [anon_sym_or] = ACTIONS(529),
        [anon_sym_LBRACK] = ACTIONS(529),
        [anon_sym_RBRACK] = ACTIONS(529),
        [anon_sym_RBRACE] = ACTIONS(529),
        [sym_comment] = ACTIONS(81),
    },
    [193] = {
        [anon_sym_LPAREN] = ACTIONS(259),
        [anon_sym_STAR] = ACTIONS(513),
        [anon_sym_PLUS] = ACTIONS(515),
        [anon_sym_DASH] = ACTIONS(515),
        [anon_sym_SLASH] = ACTIONS(517),
        [anon_sym_STAR_STAR] = ACTIONS(519),
        [anon_sym_PIPE] = ACTIONS(315),
        [anon_sym_AMP] = ACTIONS(523),
        [anon_sym_CARET] = ACTIONS(525),
        [anon_sym_LT_LT] = ACTIONS(515),
        [anon_sym_GT_GT] = ACTIONS(515),
        [anon_sym_and] = ACTIONS(523),
        [anon_sym_or] = ACTIONS(315),
        [anon_sym_LBRACK] = ACTIONS(315),
        [anon_sym_RBRACE] = ACTIONS(315),
        [sym_comment] = ACTIONS(81),
    },
    [194] = {
        [anon_sym_LPAREN] = ACTIONS(259),
        [anon_sym_STAR] = ACTIONS(513),
        [anon_sym_PLUS] = ACTIONS(515),
        [anon_sym_DASH] = ACTIONS(515),
        [anon_sym_SLASH] = ACTIONS(517),
        [anon_sym_STAR_STAR] = ACTIONS(519),
        [anon_sym_PIPE] = ACTIONS(315),
        [anon_sym_AMP] = ACTIONS(315),
        [anon_sym_CARET] = ACTIONS(525),
        [anon_sym_LT_LT] = ACTIONS(515),
        [anon_sym_GT_GT] = ACTIONS(515),
        [anon_sym_and] = ACTIONS(315),
        [anon_sym_or] = ACTIONS(315),
        [anon_sym_LBRACK] = ACTIONS(315),
        [anon_sym_RBRACE] = ACTIONS(315),
        [sym_comment] = ACTIONS(81),
    },
    [195] = {
        [anon_sym_LPAREN] = ACTIONS(259),
        [anon_sym_STAR] = ACTIONS(513),
        [anon_sym_PLUS] = ACTIONS(315),
        [anon_sym_DASH] = ACTIONS(315),
        [anon_sym_SLASH] = ACTIONS(517),
        [anon_sym_STAR_STAR] = ACTIONS(519),
        [anon_sym_PIPE] = ACTIONS(315),
        [anon_sym_AMP] = ACTIONS(315),
        [anon_sym_CARET] = ACTIONS(315),
        [anon_sym_LT_LT] = ACTIONS(315),
        [anon_sym_GT_GT] = ACTIONS(315),
        [anon_sym_and] = ACTIONS(315),
        [anon_sym_or] = ACTIONS(315),
        [anon_sym_LBRACK] = ACTIONS(315),
        [anon_sym_RBRACE] = ACTIONS(315),
        [sym_comment] = ACTIONS(81),
    },
    [196] = {
        [anon_sym_LPAREN] = ACTIONS(259),
        [anon_sym_STAR] = ACTIONS(513),
        [anon_sym_PLUS] = ACTIONS(515),
        [anon_sym_DASH] = ACTIONS(515),
        [anon_sym_SLASH] = ACTIONS(517),
        [anon_sym_STAR_STAR] = ACTIONS(519),
        [anon_sym_PIPE] = ACTIONS(315),
        [anon_sym_AMP] = ACTIONS(315),
        [anon_sym_CARET] = ACTIONS(315),
        [anon_sym_LT_LT] = ACTIONS(515),
        [anon_sym_GT_GT] = ACTIONS(515),
        [anon_sym_and] = ACTIONS(315),
        [anon_sym_or] = ACTIONS(315),
        [anon_sym_LBRACK] = ACTIONS(315),
        [anon_sym_RBRACE] = ACTIONS(315),
        [sym_comment] = ACTIONS(81),
    },
    [197] = {
        [anon_sym_LPAREN] = ACTIONS(259),
        [anon_sym_STAR] = ACTIONS(317),
        [anon_sym_PLUS] = ACTIONS(315),
        [anon_sym_DASH] = ACTIONS(315),
        [anon_sym_SLASH] = ACTIONS(315),
        [anon_sym_STAR_STAR] = ACTIONS(519),
        [anon_sym_PIPE] = ACTIONS(315),
        [anon_sym_AMP] = ACTIONS(315),
        [anon_sym_CARET] = ACTIONS(315),
        [anon_sym_LT_LT] = ACTIONS(315),
        [anon_sym_GT_GT] = ACTIONS(315),
        [anon_sym_and] = ACTIONS(315),
        [anon_sym_or] = ACTIONS(315),
        [anon_sym_LBRACK] = ACTIONS(315),
        [anon_sym_RBRACE] = ACTIONS(315),
        [sym_comment] = ACTIONS(81),
    },
    [198] = {
        [anon_sym_COMMA] = ACTIONS(533),
        [anon_sym_RBRACE] = ACTIONS(533),
        [sym_comment] = ACTIONS(81),
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
        [anon_sym_not] = ACTIONS(465),
        [anon_sym_LBRACK] = ACTIONS(141),
        [anon_sym_LBRACE] = ACTIONS(143),
        [anon_sym_RBRACE] = ACTIONS(535),
        [sym_number] = ACTIONS(145),
        [sym_identifier] = ACTIONS(147),
        [sym_comment] = ACTIONS(81),
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
        [anon_sym_not] = ACTIONS(163),
        [anon_sym_LBRACK] = ACTIONS(141),
        [anon_sym_LBRACE] = ACTIONS(143),
        [sym_number] = ACTIONS(145),
        [sym_identifier] = ACTIONS(147),
        [sym_comment] = ACTIONS(81),
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
        [anon_sym_not] = ACTIONS(537),
        [anon_sym_LBRACK] = ACTIONS(141),
        [anon_sym_LBRACE] = ACTIONS(143),
        [sym_number] = ACTIONS(145),
        [sym_identifier] = ACTIONS(147),
        [sym_comment] = ACTIONS(81),
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
        [anon_sym_not] = ACTIONS(149),
        [anon_sym_LBRACK] = ACTIONS(141),
        [anon_sym_LBRACE] = ACTIONS(143),
        [sym_number] = ACTIONS(145),
        [sym_identifier] = ACTIONS(147),
        [sym_comment] = ACTIONS(81),
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
        [anon_sym_not] = ACTIONS(163),
        [anon_sym_LBRACK] = ACTIONS(141),
        [anon_sym_LBRACE] = ACTIONS(143),
        [sym_number] = ACTIONS(145),
        [sym_identifier] = ACTIONS(147),
        [sym_comment] = ACTIONS(81),
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
        [anon_sym_not] = ACTIONS(163),
        [anon_sym_LBRACK] = ACTIONS(141),
        [anon_sym_LBRACE] = ACTIONS(143),
        [sym_number] = ACTIONS(145),
        [sym_identifier] = ACTIONS(147),
        [sym_comment] = ACTIONS(81),
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
        [anon_sym_not] = ACTIONS(163),
        [anon_sym_LBRACK] = ACTIONS(141),
        [anon_sym_LBRACE] = ACTIONS(143),
        [sym_number] = ACTIONS(145),
        [sym_identifier] = ACTIONS(147),
        [sym_comment] = ACTIONS(81),
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
        [anon_sym_not] = ACTIONS(163),
        [anon_sym_LBRACK] = ACTIONS(141),
        [anon_sym_LBRACE] = ACTIONS(143),
        [sym_number] = ACTIONS(145),
        [sym_identifier] = ACTIONS(147),
        [sym_comment] = ACTIONS(81),
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
        [anon_sym_not] = ACTIONS(163),
        [anon_sym_LBRACK] = ACTIONS(141),
        [anon_sym_LBRACE] = ACTIONS(143),
        [sym_number] = ACTIONS(145),
        [sym_identifier] = ACTIONS(147),
        [sym_comment] = ACTIONS(81),
    },
    [208] = {
        [anon_sym_LPAREN] = ACTIONS(539),
        [anon_sym_RPAREN] = ACTIONS(539),
        [anon_sym_COMMA] = ACTIONS(539),
        [anon_sym_as] = ACTIONS(539),
        [anon_sym_STAR] = ACTIONS(541),
        [anon_sym_COLON] = ACTIONS(539),
        [anon_sym_for] = ACTIONS(539),
        [anon_sym_in] = ACTIONS(539),
        [anon_sym_PLUS] = ACTIONS(539),
        [anon_sym_DASH] = ACTIONS(539),
        [anon_sym_SLASH] = ACTIONS(539),
        [anon_sym_STAR_STAR] = ACTIONS(539),
        [anon_sym_PIPE] = ACTIONS(539),
        [anon_sym_AMP] = ACTIONS(539),
        [anon_sym_CARET] = ACTIONS(539),
        [anon_sym_LT_LT] = ACTIONS(539),
        [anon_sym_GT_GT] = ACTIONS(539),
        [anon_sym_and] = ACTIONS(539),
        [anon_sym_or] = ACTIONS(539),
        [anon_sym_LBRACK] = ACTIONS(539),
        [anon_sym_RBRACK] = ACTIONS(539),
        [anon_sym_RBRACE] = ACTIONS(539),
        [sym_comment] = ACTIONS(81),
    },
    [209] = {
        [anon_sym_COMMA] = ACTIONS(543),
        [anon_sym_RBRACE] = ACTIONS(535),
        [sym_comment] = ACTIONS(81),
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
        [anon_sym_not] = ACTIONS(465),
        [anon_sym_LBRACK] = ACTIONS(141),
        [anon_sym_LBRACE] = ACTIONS(143),
        [anon_sym_RBRACE] = ACTIONS(545),
        [sym_number] = ACTIONS(145),
        [sym_identifier] = ACTIONS(147),
        [sym_comment] = ACTIONS(81),
    },
    [211] = {
        [anon_sym_LPAREN] = ACTIONS(547),
        [anon_sym_RPAREN] = ACTIONS(547),
        [anon_sym_COMMA] = ACTIONS(547),
        [anon_sym_as] = ACTIONS(547),
        [anon_sym_STAR] = ACTIONS(549),
        [anon_sym_COLON] = ACTIONS(547),
        [anon_sym_for] = ACTIONS(547),
        [anon_sym_in] = ACTIONS(547),
        [anon_sym_PLUS] = ACTIONS(547),
        [anon_sym_DASH] = ACTIONS(547),
        [anon_sym_SLASH] = ACTIONS(547),
        [anon_sym_STAR_STAR] = ACTIONS(547),
        [anon_sym_PIPE] = ACTIONS(547),
        [anon_sym_AMP] = ACTIONS(547),
        [anon_sym_CARET] = ACTIONS(547),
        [anon_sym_LT_LT] = ACTIONS(547),
        [anon_sym_GT_GT] = ACTIONS(547),
        [anon_sym_and] = ACTIONS(547),
        [anon_sym_or] = ACTIONS(547),
        [anon_sym_LBRACK] = ACTIONS(547),
        [anon_sym_RBRACK] = ACTIONS(547),
        [anon_sym_RBRACE] = ACTIONS(547),
        [sym_comment] = ACTIONS(81),
    },
    [212] = {
        [anon_sym_LPAREN] = ACTIONS(551),
        [anon_sym_RPAREN] = ACTIONS(551),
        [anon_sym_COMMA] = ACTIONS(551),
        [anon_sym_as] = ACTIONS(551),
        [anon_sym_STAR] = ACTIONS(553),
        [anon_sym_COLON] = ACTIONS(551),
        [anon_sym_for] = ACTIONS(551),
        [anon_sym_in] = ACTIONS(551),
        [anon_sym_PLUS] = ACTIONS(551),
        [anon_sym_DASH] = ACTIONS(551),
        [anon_sym_SLASH] = ACTIONS(551),
        [anon_sym_STAR_STAR] = ACTIONS(551),
        [anon_sym_PIPE] = ACTIONS(551),
        [anon_sym_AMP] = ACTIONS(551),
        [anon_sym_CARET] = ACTIONS(551),
        [anon_sym_LT_LT] = ACTIONS(551),
        [anon_sym_GT_GT] = ACTIONS(551),
        [anon_sym_and] = ACTIONS(551),
        [anon_sym_or] = ACTIONS(551),
        [anon_sym_LBRACK] = ACTIONS(551),
        [anon_sym_RBRACK] = ACTIONS(551),
        [anon_sym_RBRACE] = ACTIONS(551),
        [sym_comment] = ACTIONS(81),
    },
    [213] = {
        [anon_sym_LPAREN] = ACTIONS(259),
        [anon_sym_COMMA] = ACTIONS(507),
        [anon_sym_STAR] = ACTIONS(469),
        [anon_sym_PLUS] = ACTIONS(471),
        [anon_sym_DASH] = ACTIONS(471),
        [anon_sym_SLASH] = ACTIONS(473),
        [anon_sym_STAR_STAR] = ACTIONS(475),
        [anon_sym_PIPE] = ACTIONS(477),
        [anon_sym_AMP] = ACTIONS(479),
        [anon_sym_CARET] = ACTIONS(481),
        [anon_sym_LT_LT] = ACTIONS(471),
        [anon_sym_GT_GT] = ACTIONS(471),
        [anon_sym_and] = ACTIONS(479),
        [anon_sym_or] = ACTIONS(477),
        [anon_sym_LBRACK] = ACTIONS(275),
        [anon_sym_RBRACE] = ACTIONS(507),
        [sym_comment] = ACTIONS(81),
    },
    [214] = {
        [anon_sym_LPAREN] = ACTIONS(259),
        [anon_sym_COMMA] = ACTIONS(315),
        [anon_sym_STAR] = ACTIONS(403),
        [anon_sym_COLON] = ACTIONS(315),
        [anon_sym_for] = ACTIONS(315),
        [anon_sym_PLUS] = ACTIONS(409),
        [anon_sym_DASH] = ACTIONS(409),
        [anon_sym_SLASH] = ACTIONS(411),
        [anon_sym_STAR_STAR] = ACTIONS(413),
        [anon_sym_PIPE] = ACTIONS(315),
        [anon_sym_AMP] = ACTIONS(417),
        [anon_sym_CARET] = ACTIONS(419),
        [anon_sym_LT_LT] = ACTIONS(409),
        [anon_sym_GT_GT] = ACTIONS(409),
        [anon_sym_and] = ACTIONS(417),
        [anon_sym_or] = ACTIONS(315),
        [anon_sym_LBRACK] = ACTIONS(315),
        [anon_sym_RBRACE] = ACTIONS(315),
        [sym_comment] = ACTIONS(81),
    },
    [215] = {
        [anon_sym_LPAREN] = ACTIONS(259),
        [anon_sym_COMMA] = ACTIONS(315),
        [anon_sym_STAR] = ACTIONS(403),
        [anon_sym_COLON] = ACTIONS(315),
        [anon_sym_for] = ACTIONS(315),
        [anon_sym_PLUS] = ACTIONS(409),
        [anon_sym_DASH] = ACTIONS(409),
        [anon_sym_SLASH] = ACTIONS(411),
        [anon_sym_STAR_STAR] = ACTIONS(413),
        [anon_sym_PIPE] = ACTIONS(315),
        [anon_sym_AMP] = ACTIONS(315),
        [anon_sym_CARET] = ACTIONS(419),
        [anon_sym_LT_LT] = ACTIONS(409),
        [anon_sym_GT_GT] = ACTIONS(409),
        [anon_sym_and] = ACTIONS(315),
        [anon_sym_or] = ACTIONS(315),
        [anon_sym_LBRACK] = ACTIONS(315),
        [anon_sym_RBRACE] = ACTIONS(315),
        [sym_comment] = ACTIONS(81),
    },
    [216] = {
        [anon_sym_LPAREN] = ACTIONS(259),
        [anon_sym_COMMA] = ACTIONS(315),
        [anon_sym_STAR] = ACTIONS(403),
        [anon_sym_COLON] = ACTIONS(315),
        [anon_sym_for] = ACTIONS(315),
        [anon_sym_PLUS] = ACTIONS(315),
        [anon_sym_DASH] = ACTIONS(315),
        [anon_sym_SLASH] = ACTIONS(411),
        [anon_sym_STAR_STAR] = ACTIONS(413),
        [anon_sym_PIPE] = ACTIONS(315),
        [anon_sym_AMP] = ACTIONS(315),
        [anon_sym_CARET] = ACTIONS(315),
        [anon_sym_LT_LT] = ACTIONS(315),
        [anon_sym_GT_GT] = ACTIONS(315),
        [anon_sym_and] = ACTIONS(315),
        [anon_sym_or] = ACTIONS(315),
        [anon_sym_LBRACK] = ACTIONS(315),
        [anon_sym_RBRACE] = ACTIONS(315),
        [sym_comment] = ACTIONS(81),
    },
    [217] = {
        [anon_sym_LPAREN] = ACTIONS(259),
        [anon_sym_COMMA] = ACTIONS(315),
        [anon_sym_STAR] = ACTIONS(403),
        [anon_sym_COLON] = ACTIONS(315),
        [anon_sym_for] = ACTIONS(315),
        [anon_sym_PLUS] = ACTIONS(409),
        [anon_sym_DASH] = ACTIONS(409),
        [anon_sym_SLASH] = ACTIONS(411),
        [anon_sym_STAR_STAR] = ACTIONS(413),
        [anon_sym_PIPE] = ACTIONS(315),
        [anon_sym_AMP] = ACTIONS(315),
        [anon_sym_CARET] = ACTIONS(315),
        [anon_sym_LT_LT] = ACTIONS(409),
        [anon_sym_GT_GT] = ACTIONS(409),
        [anon_sym_and] = ACTIONS(315),
        [anon_sym_or] = ACTIONS(315),
        [anon_sym_LBRACK] = ACTIONS(315),
        [anon_sym_RBRACE] = ACTIONS(315),
        [sym_comment] = ACTIONS(81),
    },
    [218] = {
        [anon_sym_LPAREN] = ACTIONS(259),
        [anon_sym_COMMA] = ACTIONS(315),
        [anon_sym_STAR] = ACTIONS(317),
        [anon_sym_COLON] = ACTIONS(315),
        [anon_sym_for] = ACTIONS(315),
        [anon_sym_PLUS] = ACTIONS(315),
        [anon_sym_DASH] = ACTIONS(315),
        [anon_sym_SLASH] = ACTIONS(315),
        [anon_sym_STAR_STAR] = ACTIONS(413),
        [anon_sym_PIPE] = ACTIONS(315),
        [anon_sym_AMP] = ACTIONS(315),
        [anon_sym_CARET] = ACTIONS(315),
        [anon_sym_LT_LT] = ACTIONS(315),
        [anon_sym_GT_GT] = ACTIONS(315),
        [anon_sym_and] = ACTIONS(315),
        [anon_sym_or] = ACTIONS(315),
        [anon_sym_LBRACK] = ACTIONS(315),
        [anon_sym_RBRACE] = ACTIONS(315),
        [sym_comment] = ACTIONS(81),
    },
    [219] = {
        [anon_sym_in] = ACTIONS(555),
        [sym_comment] = ACTIONS(81),
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
        [anon_sym_not] = ACTIONS(511),
        [anon_sym_LBRACK] = ACTIONS(141),
        [anon_sym_LBRACE] = ACTIONS(143),
        [sym_number] = ACTIONS(145),
        [sym_identifier] = ACTIONS(147),
        [sym_comment] = ACTIONS(81),
    },
    [221] = {
        [anon_sym_LPAREN] = ACTIONS(259),
        [anon_sym_STAR] = ACTIONS(513),
        [anon_sym_PLUS] = ACTIONS(515),
        [anon_sym_DASH] = ACTIONS(515),
        [anon_sym_SLASH] = ACTIONS(517),
        [anon_sym_STAR_STAR] = ACTIONS(519),
        [anon_sym_PIPE] = ACTIONS(521),
        [anon_sym_AMP] = ACTIONS(523),
        [anon_sym_CARET] = ACTIONS(525),
        [anon_sym_LT_LT] = ACTIONS(515),
        [anon_sym_GT_GT] = ACTIONS(515),
        [anon_sym_and] = ACTIONS(523),
        [anon_sym_or] = ACTIONS(521),
        [anon_sym_LBRACK] = ACTIONS(275),
        [anon_sym_RBRACE] = ACTIONS(557),
        [sym_comment] = ACTIONS(81),
    },
    [222] = {
        [anon_sym_LPAREN] = ACTIONS(559),
        [anon_sym_RPAREN] = ACTIONS(559),
        [anon_sym_COMMA] = ACTIONS(559),
        [anon_sym_as] = ACTIONS(559),
        [anon_sym_STAR] = ACTIONS(561),
        [anon_sym_COLON] = ACTIONS(559),
        [anon_sym_for] = ACTIONS(559),
        [anon_sym_in] = ACTIONS(559),
        [anon_sym_PLUS] = ACTIONS(559),
        [anon_sym_DASH] = ACTIONS(559),
        [anon_sym_SLASH] = ACTIONS(559),
        [anon_sym_STAR_STAR] = ACTIONS(559),
        [anon_sym_PIPE] = ACTIONS(559),
        [anon_sym_AMP] = ACTIONS(559),
        [anon_sym_CARET] = ACTIONS(559),
        [anon_sym_LT_LT] = ACTIONS(559),
        [anon_sym_GT_GT] = ACTIONS(559),
        [anon_sym_and] = ACTIONS(559),
        [anon_sym_or] = ACTIONS(559),
        [anon_sym_LBRACK] = ACTIONS(559),
        [anon_sym_RBRACK] = ACTIONS(559),
        [anon_sym_RBRACE] = ACTIONS(559),
        [sym_comment] = ACTIONS(81),
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
        [anon_sym_not] = ACTIONS(537),
        [anon_sym_LBRACK] = ACTIONS(141),
        [anon_sym_LBRACE] = ACTIONS(143),
        [sym_number] = ACTIONS(145),
        [sym_identifier] = ACTIONS(147),
        [sym_comment] = ACTIONS(81),
    },
    [224] = {
        [anon_sym_LPAREN] = ACTIONS(259),
        [anon_sym_COMMA] = ACTIONS(467),
        [anon_sym_STAR] = ACTIONS(563),
        [anon_sym_for] = ACTIONS(467),
        [anon_sym_PLUS] = ACTIONS(565),
        [anon_sym_DASH] = ACTIONS(565),
        [anon_sym_SLASH] = ACTIONS(567),
        [anon_sym_STAR_STAR] = ACTIONS(569),
        [anon_sym_PIPE] = ACTIONS(571),
        [anon_sym_AMP] = ACTIONS(573),
        [anon_sym_CARET] = ACTIONS(575),
        [anon_sym_LT_LT] = ACTIONS(565),
        [anon_sym_GT_GT] = ACTIONS(565),
        [anon_sym_and] = ACTIONS(573),
        [anon_sym_or] = ACTIONS(571),
        [anon_sym_LBRACK] = ACTIONS(275),
        [anon_sym_RBRACE] = ACTIONS(467),
        [sym_comment] = ACTIONS(81),
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
        [anon_sym_not] = ACTIONS(537),
        [anon_sym_LBRACK] = ACTIONS(141),
        [anon_sym_LBRACE] = ACTIONS(143),
        [sym_number] = ACTIONS(145),
        [sym_identifier] = ACTIONS(147),
        [sym_comment] = ACTIONS(81),
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
        [anon_sym_not] = ACTIONS(537),
        [anon_sym_LBRACK] = ACTIONS(141),
        [anon_sym_LBRACE] = ACTIONS(143),
        [sym_number] = ACTIONS(145),
        [sym_identifier] = ACTIONS(147),
        [sym_comment] = ACTIONS(81),
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
        [anon_sym_not] = ACTIONS(537),
        [anon_sym_LBRACK] = ACTIONS(141),
        [anon_sym_LBRACE] = ACTIONS(143),
        [sym_number] = ACTIONS(145),
        [sym_identifier] = ACTIONS(147),
        [sym_comment] = ACTIONS(81),
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
        [anon_sym_not] = ACTIONS(537),
        [anon_sym_LBRACK] = ACTIONS(141),
        [anon_sym_LBRACE] = ACTIONS(143),
        [sym_number] = ACTIONS(145),
        [sym_identifier] = ACTIONS(147),
        [sym_comment] = ACTIONS(81),
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
        [anon_sym_not] = ACTIONS(537),
        [anon_sym_LBRACK] = ACTIONS(141),
        [anon_sym_LBRACE] = ACTIONS(143),
        [sym_number] = ACTIONS(145),
        [sym_identifier] = ACTIONS(147),
        [sym_comment] = ACTIONS(81),
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
        [anon_sym_not] = ACTIONS(537),
        [anon_sym_LBRACK] = ACTIONS(141),
        [anon_sym_LBRACE] = ACTIONS(143),
        [sym_number] = ACTIONS(145),
        [sym_identifier] = ACTIONS(147),
        [sym_comment] = ACTIONS(81),
    },
    [231] = {
        [anon_sym_LPAREN] = ACTIONS(259),
        [anon_sym_COMMA] = ACTIONS(315),
        [anon_sym_STAR] = ACTIONS(563),
        [anon_sym_for] = ACTIONS(315),
        [anon_sym_PLUS] = ACTIONS(565),
        [anon_sym_DASH] = ACTIONS(565),
        [anon_sym_SLASH] = ACTIONS(567),
        [anon_sym_STAR_STAR] = ACTIONS(569),
        [anon_sym_PIPE] = ACTIONS(315),
        [anon_sym_AMP] = ACTIONS(573),
        [anon_sym_CARET] = ACTIONS(575),
        [anon_sym_LT_LT] = ACTIONS(565),
        [anon_sym_GT_GT] = ACTIONS(565),
        [anon_sym_and] = ACTIONS(573),
        [anon_sym_or] = ACTIONS(315),
        [anon_sym_LBRACK] = ACTIONS(315),
        [anon_sym_RBRACE] = ACTIONS(315),
        [sym_comment] = ACTIONS(81),
    },
    [232] = {
        [anon_sym_LPAREN] = ACTIONS(259),
        [anon_sym_COMMA] = ACTIONS(315),
        [anon_sym_STAR] = ACTIONS(563),
        [anon_sym_for] = ACTIONS(315),
        [anon_sym_PLUS] = ACTIONS(565),
        [anon_sym_DASH] = ACTIONS(565),
        [anon_sym_SLASH] = ACTIONS(567),
        [anon_sym_STAR_STAR] = ACTIONS(569),
        [anon_sym_PIPE] = ACTIONS(315),
        [anon_sym_AMP] = ACTIONS(315),
        [anon_sym_CARET] = ACTIONS(575),
        [anon_sym_LT_LT] = ACTIONS(565),
        [anon_sym_GT_GT] = ACTIONS(565),
        [anon_sym_and] = ACTIONS(315),
        [anon_sym_or] = ACTIONS(315),
        [anon_sym_LBRACK] = ACTIONS(315),
        [anon_sym_RBRACE] = ACTIONS(315),
        [sym_comment] = ACTIONS(81),
    },
    [233] = {
        [anon_sym_LPAREN] = ACTIONS(259),
        [anon_sym_COMMA] = ACTIONS(315),
        [anon_sym_STAR] = ACTIONS(563),
        [anon_sym_for] = ACTIONS(315),
        [anon_sym_PLUS] = ACTIONS(315),
        [anon_sym_DASH] = ACTIONS(315),
        [anon_sym_SLASH] = ACTIONS(567),
        [anon_sym_STAR_STAR] = ACTIONS(569),
        [anon_sym_PIPE] = ACTIONS(315),
        [anon_sym_AMP] = ACTIONS(315),
        [anon_sym_CARET] = ACTIONS(315),
        [anon_sym_LT_LT] = ACTIONS(315),
        [anon_sym_GT_GT] = ACTIONS(315),
        [anon_sym_and] = ACTIONS(315),
        [anon_sym_or] = ACTIONS(315),
        [anon_sym_LBRACK] = ACTIONS(315),
        [anon_sym_RBRACE] = ACTIONS(315),
        [sym_comment] = ACTIONS(81),
    },
    [234] = {
        [anon_sym_LPAREN] = ACTIONS(259),
        [anon_sym_COMMA] = ACTIONS(315),
        [anon_sym_STAR] = ACTIONS(563),
        [anon_sym_for] = ACTIONS(315),
        [anon_sym_PLUS] = ACTIONS(565),
        [anon_sym_DASH] = ACTIONS(565),
        [anon_sym_SLASH] = ACTIONS(567),
        [anon_sym_STAR_STAR] = ACTIONS(569),
        [anon_sym_PIPE] = ACTIONS(315),
        [anon_sym_AMP] = ACTIONS(315),
        [anon_sym_CARET] = ACTIONS(315),
        [anon_sym_LT_LT] = ACTIONS(565),
        [anon_sym_GT_GT] = ACTIONS(565),
        [anon_sym_and] = ACTIONS(315),
        [anon_sym_or] = ACTIONS(315),
        [anon_sym_LBRACK] = ACTIONS(315),
        [anon_sym_RBRACE] = ACTIONS(315),
        [sym_comment] = ACTIONS(81),
    },
    [235] = {
        [anon_sym_LPAREN] = ACTIONS(259),
        [anon_sym_COMMA] = ACTIONS(315),
        [anon_sym_STAR] = ACTIONS(317),
        [anon_sym_for] = ACTIONS(315),
        [anon_sym_PLUS] = ACTIONS(315),
        [anon_sym_DASH] = ACTIONS(315),
        [anon_sym_SLASH] = ACTIONS(315),
        [anon_sym_STAR_STAR] = ACTIONS(569),
        [anon_sym_PIPE] = ACTIONS(315),
        [anon_sym_AMP] = ACTIONS(315),
        [anon_sym_CARET] = ACTIONS(315),
        [anon_sym_LT_LT] = ACTIONS(315),
        [anon_sym_GT_GT] = ACTIONS(315),
        [anon_sym_and] = ACTIONS(315),
        [anon_sym_or] = ACTIONS(315),
        [anon_sym_LBRACK] = ACTIONS(315),
        [anon_sym_RBRACE] = ACTIONS(315),
        [sym_comment] = ACTIONS(81),
    },
    [236] = {
        [anon_sym_LPAREN] = ACTIONS(259),
        [anon_sym_COMMA] = ACTIONS(509),
        [anon_sym_STAR] = ACTIONS(469),
        [anon_sym_PLUS] = ACTIONS(471),
        [anon_sym_DASH] = ACTIONS(471),
        [anon_sym_SLASH] = ACTIONS(473),
        [anon_sym_STAR_STAR] = ACTIONS(475),
        [anon_sym_PIPE] = ACTIONS(477),
        [anon_sym_AMP] = ACTIONS(479),
        [anon_sym_CARET] = ACTIONS(481),
        [anon_sym_LT_LT] = ACTIONS(471),
        [anon_sym_GT_GT] = ACTIONS(471),
        [anon_sym_and] = ACTIONS(479),
        [anon_sym_or] = ACTIONS(477),
        [anon_sym_LBRACK] = ACTIONS(275),
        [anon_sym_RBRACE] = ACTIONS(509),
        [sym_comment] = ACTIONS(81),
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
        [anon_sym_not] = ACTIONS(159),
        [anon_sym_LBRACK] = ACTIONS(141),
        [anon_sym_LBRACE] = ACTIONS(143),
        [sym_number] = ACTIONS(145),
        [sym_identifier] = ACTIONS(147),
        [sym_comment] = ACTIONS(81),
    },
    [238] = {
        [anon_sym_LPAREN] = ACTIONS(577),
        [anon_sym_RPAREN] = ACTIONS(577),
        [anon_sym_COMMA] = ACTIONS(577),
        [anon_sym_as] = ACTIONS(577),
        [anon_sym_STAR] = ACTIONS(579),
        [anon_sym_COLON] = ACTIONS(577),
        [anon_sym_for] = ACTIONS(577),
        [anon_sym_in] = ACTIONS(577),
        [anon_sym_PLUS] = ACTIONS(577),
        [anon_sym_DASH] = ACTIONS(577),
        [anon_sym_SLASH] = ACTIONS(577),
        [anon_sym_STAR_STAR] = ACTIONS(577),
        [anon_sym_PIPE] = ACTIONS(577),
        [anon_sym_AMP] = ACTIONS(577),
        [anon_sym_CARET] = ACTIONS(577),
        [anon_sym_LT_LT] = ACTIONS(577),
        [anon_sym_GT_GT] = ACTIONS(577),
        [anon_sym_and] = ACTIONS(577),
        [anon_sym_or] = ACTIONS(577),
        [anon_sym_LBRACK] = ACTIONS(577),
        [anon_sym_RBRACK] = ACTIONS(577),
        [anon_sym_RBRACE] = ACTIONS(577),
        [sym_comment] = ACTIONS(81),
    },
    [239] = {
        [aux_sym_print_statement_repeat1] = STATE(249),
        [anon_sym_LPAREN] = ACTIONS(259),
        [anon_sym_COMMA] = ACTIONS(581),
        [anon_sym_STAR] = ACTIONS(583),
        [anon_sym_for] = ACTIONS(585),
        [anon_sym_PLUS] = ACTIONS(587),
        [anon_sym_DASH] = ACTIONS(587),
        [anon_sym_SLASH] = ACTIONS(589),
        [anon_sym_STAR_STAR] = ACTIONS(591),
        [anon_sym_PIPE] = ACTIONS(593),
        [anon_sym_AMP] = ACTIONS(595),
        [anon_sym_CARET] = ACTIONS(597),
        [anon_sym_LT_LT] = ACTIONS(587),
        [anon_sym_GT_GT] = ACTIONS(587),
        [anon_sym_and] = ACTIONS(595),
        [anon_sym_or] = ACTIONS(593),
        [anon_sym_LBRACK] = ACTIONS(275),
        [anon_sym_RBRACK] = ACTIONS(599),
        [sym_comment] = ACTIONS(81),
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
        [anon_sym_not] = ACTIONS(247),
        [anon_sym_LBRACK] = ACTIONS(141),
        [anon_sym_RBRACK] = ACTIONS(601),
        [anon_sym_LBRACE] = ACTIONS(143),
        [sym_number] = ACTIONS(145),
        [sym_identifier] = ACTIONS(147),
        [sym_comment] = ACTIONS(81),
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
        [anon_sym_not] = ACTIONS(159),
        [anon_sym_LBRACK] = ACTIONS(141),
        [anon_sym_LBRACE] = ACTIONS(143),
        [sym_number] = ACTIONS(145),
        [sym_identifier] = ACTIONS(147),
        [sym_comment] = ACTIONS(81),
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
        [anon_sym_not] = ACTIONS(149),
        [anon_sym_LBRACK] = ACTIONS(141),
        [anon_sym_LBRACE] = ACTIONS(143),
        [sym_number] = ACTIONS(145),
        [sym_identifier] = ACTIONS(147),
        [sym_comment] = ACTIONS(81),
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
        [anon_sym_not] = ACTIONS(159),
        [anon_sym_LBRACK] = ACTIONS(141),
        [anon_sym_LBRACE] = ACTIONS(143),
        [sym_number] = ACTIONS(145),
        [sym_identifier] = ACTIONS(147),
        [sym_comment] = ACTIONS(81),
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
        [anon_sym_not] = ACTIONS(159),
        [anon_sym_LBRACK] = ACTIONS(141),
        [anon_sym_LBRACE] = ACTIONS(143),
        [sym_number] = ACTIONS(145),
        [sym_identifier] = ACTIONS(147),
        [sym_comment] = ACTIONS(81),
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
        [anon_sym_not] = ACTIONS(159),
        [anon_sym_LBRACK] = ACTIONS(141),
        [anon_sym_LBRACE] = ACTIONS(143),
        [sym_number] = ACTIONS(145),
        [sym_identifier] = ACTIONS(147),
        [sym_comment] = ACTIONS(81),
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
        [anon_sym_not] = ACTIONS(159),
        [anon_sym_LBRACK] = ACTIONS(141),
        [anon_sym_LBRACE] = ACTIONS(143),
        [sym_number] = ACTIONS(145),
        [sym_identifier] = ACTIONS(147),
        [sym_comment] = ACTIONS(81),
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
        [anon_sym_not] = ACTIONS(159),
        [anon_sym_LBRACK] = ACTIONS(141),
        [anon_sym_LBRACE] = ACTIONS(143),
        [sym_number] = ACTIONS(145),
        [sym_identifier] = ACTIONS(147),
        [sym_comment] = ACTIONS(81),
    },
    [248] = {
        [anon_sym_LPAREN] = ACTIONS(603),
        [anon_sym_RPAREN] = ACTIONS(603),
        [anon_sym_COMMA] = ACTIONS(603),
        [anon_sym_as] = ACTIONS(603),
        [anon_sym_STAR] = ACTIONS(605),
        [anon_sym_COLON] = ACTIONS(603),
        [anon_sym_for] = ACTIONS(603),
        [anon_sym_in] = ACTIONS(603),
        [anon_sym_PLUS] = ACTIONS(603),
        [anon_sym_DASH] = ACTIONS(603),
        [anon_sym_SLASH] = ACTIONS(603),
        [anon_sym_STAR_STAR] = ACTIONS(603),
        [anon_sym_PIPE] = ACTIONS(603),
        [anon_sym_AMP] = ACTIONS(603),
        [anon_sym_CARET] = ACTIONS(603),
        [anon_sym_LT_LT] = ACTIONS(603),
        [anon_sym_GT_GT] = ACTIONS(603),
        [anon_sym_and] = ACTIONS(603),
        [anon_sym_or] = ACTIONS(603),
        [anon_sym_LBRACK] = ACTIONS(603),
        [anon_sym_RBRACK] = ACTIONS(603),
        [anon_sym_RBRACE] = ACTIONS(603),
        [sym_comment] = ACTIONS(81),
    },
    [249] = {
        [anon_sym_COMMA] = ACTIONS(607),
        [anon_sym_RBRACK] = ACTIONS(601),
        [sym_comment] = ACTIONS(81),
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
        [anon_sym_not] = ACTIONS(247),
        [anon_sym_LBRACK] = ACTIONS(141),
        [anon_sym_RBRACK] = ACTIONS(609),
        [anon_sym_LBRACE] = ACTIONS(143),
        [sym_number] = ACTIONS(145),
        [sym_identifier] = ACTIONS(147),
        [sym_comment] = ACTIONS(81),
    },
    [251] = {
        [anon_sym_LPAREN] = ACTIONS(611),
        [anon_sym_RPAREN] = ACTIONS(611),
        [anon_sym_COMMA] = ACTIONS(611),
        [anon_sym_as] = ACTIONS(611),
        [anon_sym_STAR] = ACTIONS(613),
        [anon_sym_COLON] = ACTIONS(611),
        [anon_sym_for] = ACTIONS(611),
        [anon_sym_in] = ACTIONS(611),
        [anon_sym_PLUS] = ACTIONS(611),
        [anon_sym_DASH] = ACTIONS(611),
        [anon_sym_SLASH] = ACTIONS(611),
        [anon_sym_STAR_STAR] = ACTIONS(611),
        [anon_sym_PIPE] = ACTIONS(611),
        [anon_sym_AMP] = ACTIONS(611),
        [anon_sym_CARET] = ACTIONS(611),
        [anon_sym_LT_LT] = ACTIONS(611),
        [anon_sym_GT_GT] = ACTIONS(611),
        [anon_sym_and] = ACTIONS(611),
        [anon_sym_or] = ACTIONS(611),
        [anon_sym_LBRACK] = ACTIONS(611),
        [anon_sym_RBRACK] = ACTIONS(611),
        [anon_sym_RBRACE] = ACTIONS(611),
        [sym_comment] = ACTIONS(81),
    },
    [252] = {
        [anon_sym_LPAREN] = ACTIONS(615),
        [anon_sym_RPAREN] = ACTIONS(615),
        [anon_sym_COMMA] = ACTIONS(615),
        [anon_sym_as] = ACTIONS(615),
        [anon_sym_STAR] = ACTIONS(617),
        [anon_sym_COLON] = ACTIONS(615),
        [anon_sym_for] = ACTIONS(615),
        [anon_sym_in] = ACTIONS(615),
        [anon_sym_PLUS] = ACTIONS(615),
        [anon_sym_DASH] = ACTIONS(615),
        [anon_sym_SLASH] = ACTIONS(615),
        [anon_sym_STAR_STAR] = ACTIONS(615),
        [anon_sym_PIPE] = ACTIONS(615),
        [anon_sym_AMP] = ACTIONS(615),
        [anon_sym_CARET] = ACTIONS(615),
        [anon_sym_LT_LT] = ACTIONS(615),
        [anon_sym_GT_GT] = ACTIONS(615),
        [anon_sym_and] = ACTIONS(615),
        [anon_sym_or] = ACTIONS(615),
        [anon_sym_LBRACK] = ACTIONS(615),
        [anon_sym_RBRACK] = ACTIONS(615),
        [anon_sym_RBRACE] = ACTIONS(615),
        [sym_comment] = ACTIONS(81),
    },
    [253] = {
        [anon_sym_LPAREN] = ACTIONS(259),
        [anon_sym_COMMA] = ACTIONS(507),
        [anon_sym_STAR] = ACTIONS(261),
        [anon_sym_PLUS] = ACTIONS(263),
        [anon_sym_DASH] = ACTIONS(263),
        [anon_sym_SLASH] = ACTIONS(265),
        [anon_sym_STAR_STAR] = ACTIONS(267),
        [anon_sym_PIPE] = ACTIONS(269),
        [anon_sym_AMP] = ACTIONS(271),
        [anon_sym_CARET] = ACTIONS(273),
        [anon_sym_LT_LT] = ACTIONS(263),
        [anon_sym_GT_GT] = ACTIONS(263),
        [anon_sym_and] = ACTIONS(271),
        [anon_sym_or] = ACTIONS(269),
        [anon_sym_LBRACK] = ACTIONS(275),
        [anon_sym_RBRACK] = ACTIONS(507),
        [sym_comment] = ACTIONS(81),
    },
    [254] = {
        [anon_sym_LPAREN] = ACTIONS(259),
        [anon_sym_COMMA] = ACTIONS(315),
        [anon_sym_STAR] = ACTIONS(583),
        [anon_sym_for] = ACTIONS(315),
        [anon_sym_PLUS] = ACTIONS(587),
        [anon_sym_DASH] = ACTIONS(587),
        [anon_sym_SLASH] = ACTIONS(589),
        [anon_sym_STAR_STAR] = ACTIONS(591),
        [anon_sym_PIPE] = ACTIONS(315),
        [anon_sym_AMP] = ACTIONS(595),
        [anon_sym_CARET] = ACTIONS(597),
        [anon_sym_LT_LT] = ACTIONS(587),
        [anon_sym_GT_GT] = ACTIONS(587),
        [anon_sym_and] = ACTIONS(595),
        [anon_sym_or] = ACTIONS(315),
        [anon_sym_LBRACK] = ACTIONS(315),
        [anon_sym_RBRACK] = ACTIONS(315),
        [sym_comment] = ACTIONS(81),
    },
    [255] = {
        [anon_sym_LPAREN] = ACTIONS(259),
        [anon_sym_COMMA] = ACTIONS(315),
        [anon_sym_STAR] = ACTIONS(583),
        [anon_sym_for] = ACTIONS(315),
        [anon_sym_PLUS] = ACTIONS(587),
        [anon_sym_DASH] = ACTIONS(587),
        [anon_sym_SLASH] = ACTIONS(589),
        [anon_sym_STAR_STAR] = ACTIONS(591),
        [anon_sym_PIPE] = ACTIONS(315),
        [anon_sym_AMP] = ACTIONS(315),
        [anon_sym_CARET] = ACTIONS(597),
        [anon_sym_LT_LT] = ACTIONS(587),
        [anon_sym_GT_GT] = ACTIONS(587),
        [anon_sym_and] = ACTIONS(315),
        [anon_sym_or] = ACTIONS(315),
        [anon_sym_LBRACK] = ACTIONS(315),
        [anon_sym_RBRACK] = ACTIONS(315),
        [sym_comment] = ACTIONS(81),
    },
    [256] = {
        [anon_sym_LPAREN] = ACTIONS(259),
        [anon_sym_COMMA] = ACTIONS(315),
        [anon_sym_STAR] = ACTIONS(583),
        [anon_sym_for] = ACTIONS(315),
        [anon_sym_PLUS] = ACTIONS(315),
        [anon_sym_DASH] = ACTIONS(315),
        [anon_sym_SLASH] = ACTIONS(589),
        [anon_sym_STAR_STAR] = ACTIONS(591),
        [anon_sym_PIPE] = ACTIONS(315),
        [anon_sym_AMP] = ACTIONS(315),
        [anon_sym_CARET] = ACTIONS(315),
        [anon_sym_LT_LT] = ACTIONS(315),
        [anon_sym_GT_GT] = ACTIONS(315),
        [anon_sym_and] = ACTIONS(315),
        [anon_sym_or] = ACTIONS(315),
        [anon_sym_LBRACK] = ACTIONS(315),
        [anon_sym_RBRACK] = ACTIONS(315),
        [sym_comment] = ACTIONS(81),
    },
    [257] = {
        [anon_sym_LPAREN] = ACTIONS(259),
        [anon_sym_COMMA] = ACTIONS(315),
        [anon_sym_STAR] = ACTIONS(583),
        [anon_sym_for] = ACTIONS(315),
        [anon_sym_PLUS] = ACTIONS(587),
        [anon_sym_DASH] = ACTIONS(587),
        [anon_sym_SLASH] = ACTIONS(589),
        [anon_sym_STAR_STAR] = ACTIONS(591),
        [anon_sym_PIPE] = ACTIONS(315),
        [anon_sym_AMP] = ACTIONS(315),
        [anon_sym_CARET] = ACTIONS(315),
        [anon_sym_LT_LT] = ACTIONS(587),
        [anon_sym_GT_GT] = ACTIONS(587),
        [anon_sym_and] = ACTIONS(315),
        [anon_sym_or] = ACTIONS(315),
        [anon_sym_LBRACK] = ACTIONS(315),
        [anon_sym_RBRACK] = ACTIONS(315),
        [sym_comment] = ACTIONS(81),
    },
    [258] = {
        [anon_sym_LPAREN] = ACTIONS(259),
        [anon_sym_COMMA] = ACTIONS(315),
        [anon_sym_STAR] = ACTIONS(317),
        [anon_sym_for] = ACTIONS(315),
        [anon_sym_PLUS] = ACTIONS(315),
        [anon_sym_DASH] = ACTIONS(315),
        [anon_sym_SLASH] = ACTIONS(315),
        [anon_sym_STAR_STAR] = ACTIONS(591),
        [anon_sym_PIPE] = ACTIONS(315),
        [anon_sym_AMP] = ACTIONS(315),
        [anon_sym_CARET] = ACTIONS(315),
        [anon_sym_LT_LT] = ACTIONS(315),
        [anon_sym_GT_GT] = ACTIONS(315),
        [anon_sym_and] = ACTIONS(315),
        [anon_sym_or] = ACTIONS(315),
        [anon_sym_LBRACK] = ACTIONS(315),
        [anon_sym_RBRACK] = ACTIONS(315),
        [sym_comment] = ACTIONS(81),
    },
    [259] = {
        [anon_sym_in] = ACTIONS(619),
        [sym_comment] = ACTIONS(81),
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
        [anon_sym_not] = ACTIONS(621),
        [anon_sym_LBRACK] = ACTIONS(141),
        [anon_sym_LBRACE] = ACTIONS(143),
        [sym_number] = ACTIONS(145),
        [sym_identifier] = ACTIONS(147),
        [sym_comment] = ACTIONS(81),
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
        [anon_sym_not] = ACTIONS(621),
        [anon_sym_LBRACK] = ACTIONS(141),
        [anon_sym_LBRACE] = ACTIONS(143),
        [sym_number] = ACTIONS(145),
        [sym_identifier] = ACTIONS(147),
        [sym_comment] = ACTIONS(81),
    },
    [262] = {
        [anon_sym_LPAREN] = ACTIONS(259),
        [anon_sym_STAR] = ACTIONS(623),
        [anon_sym_PLUS] = ACTIONS(625),
        [anon_sym_DASH] = ACTIONS(625),
        [anon_sym_SLASH] = ACTIONS(627),
        [anon_sym_STAR_STAR] = ACTIONS(629),
        [anon_sym_PIPE] = ACTIONS(631),
        [anon_sym_AMP] = ACTIONS(633),
        [anon_sym_CARET] = ACTIONS(635),
        [anon_sym_LT_LT] = ACTIONS(625),
        [anon_sym_GT_GT] = ACTIONS(625),
        [anon_sym_and] = ACTIONS(633),
        [anon_sym_or] = ACTIONS(631),
        [anon_sym_LBRACK] = ACTIONS(275),
        [anon_sym_RBRACK] = ACTIONS(637),
        [sym_comment] = ACTIONS(81),
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
        [anon_sym_not] = ACTIONS(621),
        [anon_sym_LBRACK] = ACTIONS(141),
        [anon_sym_LBRACE] = ACTIONS(143),
        [sym_number] = ACTIONS(145),
        [sym_identifier] = ACTIONS(147),
        [sym_comment] = ACTIONS(81),
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
        [anon_sym_not] = ACTIONS(621),
        [anon_sym_LBRACK] = ACTIONS(141),
        [anon_sym_LBRACE] = ACTIONS(143),
        [sym_number] = ACTIONS(145),
        [sym_identifier] = ACTIONS(147),
        [sym_comment] = ACTIONS(81),
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
        [anon_sym_not] = ACTIONS(621),
        [anon_sym_LBRACK] = ACTIONS(141),
        [anon_sym_LBRACE] = ACTIONS(143),
        [sym_number] = ACTIONS(145),
        [sym_identifier] = ACTIONS(147),
        [sym_comment] = ACTIONS(81),
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
        [anon_sym_not] = ACTIONS(621),
        [anon_sym_LBRACK] = ACTIONS(141),
        [anon_sym_LBRACE] = ACTIONS(143),
        [sym_number] = ACTIONS(145),
        [sym_identifier] = ACTIONS(147),
        [sym_comment] = ACTIONS(81),
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
        [anon_sym_not] = ACTIONS(621),
        [anon_sym_LBRACK] = ACTIONS(141),
        [anon_sym_LBRACE] = ACTIONS(143),
        [sym_number] = ACTIONS(145),
        [sym_identifier] = ACTIONS(147),
        [sym_comment] = ACTIONS(81),
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
        [anon_sym_not] = ACTIONS(621),
        [anon_sym_LBRACK] = ACTIONS(141),
        [anon_sym_LBRACE] = ACTIONS(143),
        [sym_number] = ACTIONS(145),
        [sym_identifier] = ACTIONS(147),
        [sym_comment] = ACTIONS(81),
    },
    [269] = {
        [anon_sym_LPAREN] = ACTIONS(639),
        [anon_sym_RPAREN] = ACTIONS(639),
        [anon_sym_COMMA] = ACTIONS(639),
        [anon_sym_as] = ACTIONS(639),
        [anon_sym_STAR] = ACTIONS(641),
        [anon_sym_COLON] = ACTIONS(639),
        [anon_sym_for] = ACTIONS(639),
        [anon_sym_in] = ACTIONS(639),
        [anon_sym_PLUS] = ACTIONS(639),
        [anon_sym_DASH] = ACTIONS(639),
        [anon_sym_SLASH] = ACTIONS(639),
        [anon_sym_STAR_STAR] = ACTIONS(639),
        [anon_sym_PIPE] = ACTIONS(639),
        [anon_sym_AMP] = ACTIONS(639),
        [anon_sym_CARET] = ACTIONS(639),
        [anon_sym_LT_LT] = ACTIONS(639),
        [anon_sym_GT_GT] = ACTIONS(639),
        [anon_sym_and] = ACTIONS(639),
        [anon_sym_or] = ACTIONS(639),
        [anon_sym_LBRACK] = ACTIONS(639),
        [anon_sym_RBRACK] = ACTIONS(639),
        [anon_sym_RBRACE] = ACTIONS(639),
        [sym_comment] = ACTIONS(81),
    },
    [270] = {
        [anon_sym_LPAREN] = ACTIONS(259),
        [anon_sym_STAR] = ACTIONS(623),
        [anon_sym_PLUS] = ACTIONS(625),
        [anon_sym_DASH] = ACTIONS(625),
        [anon_sym_SLASH] = ACTIONS(627),
        [anon_sym_STAR_STAR] = ACTIONS(629),
        [anon_sym_PIPE] = ACTIONS(315),
        [anon_sym_AMP] = ACTIONS(633),
        [anon_sym_CARET] = ACTIONS(635),
        [anon_sym_LT_LT] = ACTIONS(625),
        [anon_sym_GT_GT] = ACTIONS(625),
        [anon_sym_and] = ACTIONS(633),
        [anon_sym_or] = ACTIONS(315),
        [anon_sym_LBRACK] = ACTIONS(315),
        [anon_sym_RBRACK] = ACTIONS(315),
        [sym_comment] = ACTIONS(81),
    },
    [271] = {
        [anon_sym_LPAREN] = ACTIONS(259),
        [anon_sym_STAR] = ACTIONS(623),
        [anon_sym_PLUS] = ACTIONS(625),
        [anon_sym_DASH] = ACTIONS(625),
        [anon_sym_SLASH] = ACTIONS(627),
        [anon_sym_STAR_STAR] = ACTIONS(629),
        [anon_sym_PIPE] = ACTIONS(315),
        [anon_sym_AMP] = ACTIONS(315),
        [anon_sym_CARET] = ACTIONS(635),
        [anon_sym_LT_LT] = ACTIONS(625),
        [anon_sym_GT_GT] = ACTIONS(625),
        [anon_sym_and] = ACTIONS(315),
        [anon_sym_or] = ACTIONS(315),
        [anon_sym_LBRACK] = ACTIONS(315),
        [anon_sym_RBRACK] = ACTIONS(315),
        [sym_comment] = ACTIONS(81),
    },
    [272] = {
        [anon_sym_LPAREN] = ACTIONS(259),
        [anon_sym_STAR] = ACTIONS(623),
        [anon_sym_PLUS] = ACTIONS(315),
        [anon_sym_DASH] = ACTIONS(315),
        [anon_sym_SLASH] = ACTIONS(627),
        [anon_sym_STAR_STAR] = ACTIONS(629),
        [anon_sym_PIPE] = ACTIONS(315),
        [anon_sym_AMP] = ACTIONS(315),
        [anon_sym_CARET] = ACTIONS(315),
        [anon_sym_LT_LT] = ACTIONS(315),
        [anon_sym_GT_GT] = ACTIONS(315),
        [anon_sym_and] = ACTIONS(315),
        [anon_sym_or] = ACTIONS(315),
        [anon_sym_LBRACK] = ACTIONS(315),
        [anon_sym_RBRACK] = ACTIONS(315),
        [sym_comment] = ACTIONS(81),
    },
    [273] = {
        [anon_sym_LPAREN] = ACTIONS(259),
        [anon_sym_STAR] = ACTIONS(623),
        [anon_sym_PLUS] = ACTIONS(625),
        [anon_sym_DASH] = ACTIONS(625),
        [anon_sym_SLASH] = ACTIONS(627),
        [anon_sym_STAR_STAR] = ACTIONS(629),
        [anon_sym_PIPE] = ACTIONS(315),
        [anon_sym_AMP] = ACTIONS(315),
        [anon_sym_CARET] = ACTIONS(315),
        [anon_sym_LT_LT] = ACTIONS(625),
        [anon_sym_GT_GT] = ACTIONS(625),
        [anon_sym_and] = ACTIONS(315),
        [anon_sym_or] = ACTIONS(315),
        [anon_sym_LBRACK] = ACTIONS(315),
        [anon_sym_RBRACK] = ACTIONS(315),
        [sym_comment] = ACTIONS(81),
    },
    [274] = {
        [anon_sym_LPAREN] = ACTIONS(259),
        [anon_sym_STAR] = ACTIONS(317),
        [anon_sym_PLUS] = ACTIONS(315),
        [anon_sym_DASH] = ACTIONS(315),
        [anon_sym_SLASH] = ACTIONS(315),
        [anon_sym_STAR_STAR] = ACTIONS(629),
        [anon_sym_PIPE] = ACTIONS(315),
        [anon_sym_AMP] = ACTIONS(315),
        [anon_sym_CARET] = ACTIONS(315),
        [anon_sym_LT_LT] = ACTIONS(315),
        [anon_sym_GT_GT] = ACTIONS(315),
        [anon_sym_and] = ACTIONS(315),
        [anon_sym_or] = ACTIONS(315),
        [anon_sym_LBRACK] = ACTIONS(315),
        [anon_sym_RBRACK] = ACTIONS(315),
        [sym_comment] = ACTIONS(81),
    },
    [275] = {
        [anon_sym_LPAREN] = ACTIONS(259),
        [anon_sym_COMMA] = ACTIONS(509),
        [anon_sym_STAR] = ACTIONS(261),
        [anon_sym_PLUS] = ACTIONS(263),
        [anon_sym_DASH] = ACTIONS(263),
        [anon_sym_SLASH] = ACTIONS(265),
        [anon_sym_STAR_STAR] = ACTIONS(267),
        [anon_sym_PIPE] = ACTIONS(269),
        [anon_sym_AMP] = ACTIONS(271),
        [anon_sym_CARET] = ACTIONS(273),
        [anon_sym_LT_LT] = ACTIONS(263),
        [anon_sym_GT_GT] = ACTIONS(263),
        [anon_sym_and] = ACTIONS(271),
        [anon_sym_or] = ACTIONS(269),
        [anon_sym_LBRACK] = ACTIONS(275),
        [anon_sym_RBRACK] = ACTIONS(509),
        [sym_comment] = ACTIONS(81),
    },
    [276] = {
        [anon_sym_LPAREN] = ACTIONS(259),
        [anon_sym_RPAREN] = ACTIONS(643),
        [anon_sym_COMMA] = ACTIONS(643),
        [anon_sym_as] = ACTIONS(643),
        [anon_sym_STAR] = ACTIONS(645),
        [anon_sym_COLON] = ACTIONS(643),
        [anon_sym_for] = ACTIONS(643),
        [anon_sym_in] = ACTIONS(643),
        [anon_sym_PLUS] = ACTIONS(643),
        [anon_sym_DASH] = ACTIONS(643),
        [anon_sym_SLASH] = ACTIONS(643),
        [anon_sym_STAR_STAR] = ACTIONS(643),
        [anon_sym_PIPE] = ACTIONS(643),
        [anon_sym_AMP] = ACTIONS(643),
        [anon_sym_CARET] = ACTIONS(643),
        [anon_sym_LT_LT] = ACTIONS(643),
        [anon_sym_GT_GT] = ACTIONS(643),
        [anon_sym_and] = ACTIONS(643),
        [anon_sym_or] = ACTIONS(643),
        [anon_sym_LBRACK] = ACTIONS(643),
        [anon_sym_RBRACK] = ACTIONS(643),
        [anon_sym_RBRACE] = ACTIONS(643),
        [sym_comment] = ACTIONS(81),
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
        [anon_sym_not] = ACTIONS(319),
        [anon_sym_LBRACK] = ACTIONS(141),
        [anon_sym_LBRACE] = ACTIONS(143),
        [sym_number] = ACTIONS(145),
        [sym_identifier] = ACTIONS(147),
        [sym_comment] = ACTIONS(81),
    },
    [278] = {
        [anon_sym_LPAREN] = ACTIONS(259),
        [anon_sym_RPAREN] = ACTIONS(647),
        [anon_sym_STAR] = ACTIONS(649),
        [anon_sym_PLUS] = ACTIONS(651),
        [anon_sym_DASH] = ACTIONS(651),
        [anon_sym_SLASH] = ACTIONS(653),
        [anon_sym_STAR_STAR] = ACTIONS(655),
        [anon_sym_PIPE] = ACTIONS(657),
        [anon_sym_AMP] = ACTIONS(659),
        [anon_sym_CARET] = ACTIONS(661),
        [anon_sym_LT_LT] = ACTIONS(651),
        [anon_sym_GT_GT] = ACTIONS(651),
        [anon_sym_and] = ACTIONS(659),
        [anon_sym_or] = ACTIONS(657),
        [anon_sym_LBRACK] = ACTIONS(275),
        [sym_comment] = ACTIONS(81),
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
        [anon_sym_not] = ACTIONS(319),
        [anon_sym_LBRACK] = ACTIONS(141),
        [anon_sym_LBRACE] = ACTIONS(143),
        [sym_number] = ACTIONS(145),
        [sym_identifier] = ACTIONS(147),
        [sym_comment] = ACTIONS(81),
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
        [anon_sym_not] = ACTIONS(319),
        [anon_sym_LBRACK] = ACTIONS(141),
        [anon_sym_LBRACE] = ACTIONS(143),
        [sym_number] = ACTIONS(145),
        [sym_identifier] = ACTIONS(147),
        [sym_comment] = ACTIONS(81),
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
        [anon_sym_not] = ACTIONS(319),
        [anon_sym_LBRACK] = ACTIONS(141),
        [anon_sym_LBRACE] = ACTIONS(143),
        [sym_number] = ACTIONS(145),
        [sym_identifier] = ACTIONS(147),
        [sym_comment] = ACTIONS(81),
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
        [anon_sym_not] = ACTIONS(319),
        [anon_sym_LBRACK] = ACTIONS(141),
        [anon_sym_LBRACE] = ACTIONS(143),
        [sym_number] = ACTIONS(145),
        [sym_identifier] = ACTIONS(147),
        [sym_comment] = ACTIONS(81),
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
        [anon_sym_not] = ACTIONS(319),
        [anon_sym_LBRACK] = ACTIONS(141),
        [anon_sym_LBRACE] = ACTIONS(143),
        [sym_number] = ACTIONS(145),
        [sym_identifier] = ACTIONS(147),
        [sym_comment] = ACTIONS(81),
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
        [anon_sym_not] = ACTIONS(319),
        [anon_sym_LBRACK] = ACTIONS(141),
        [anon_sym_LBRACE] = ACTIONS(143),
        [sym_number] = ACTIONS(145),
        [sym_identifier] = ACTIONS(147),
        [sym_comment] = ACTIONS(81),
    },
    [285] = {
        [anon_sym_LPAREN] = ACTIONS(259),
        [anon_sym_RPAREN] = ACTIONS(315),
        [anon_sym_STAR] = ACTIONS(649),
        [anon_sym_PLUS] = ACTIONS(651),
        [anon_sym_DASH] = ACTIONS(651),
        [anon_sym_SLASH] = ACTIONS(653),
        [anon_sym_STAR_STAR] = ACTIONS(655),
        [anon_sym_PIPE] = ACTIONS(315),
        [anon_sym_AMP] = ACTIONS(659),
        [anon_sym_CARET] = ACTIONS(661),
        [anon_sym_LT_LT] = ACTIONS(651),
        [anon_sym_GT_GT] = ACTIONS(651),
        [anon_sym_and] = ACTIONS(659),
        [anon_sym_or] = ACTIONS(315),
        [anon_sym_LBRACK] = ACTIONS(315),
        [sym_comment] = ACTIONS(81),
    },
    [286] = {
        [anon_sym_LPAREN] = ACTIONS(259),
        [anon_sym_RPAREN] = ACTIONS(315),
        [anon_sym_STAR] = ACTIONS(649),
        [anon_sym_PLUS] = ACTIONS(651),
        [anon_sym_DASH] = ACTIONS(651),
        [anon_sym_SLASH] = ACTIONS(653),
        [anon_sym_STAR_STAR] = ACTIONS(655),
        [anon_sym_PIPE] = ACTIONS(315),
        [anon_sym_AMP] = ACTIONS(315),
        [anon_sym_CARET] = ACTIONS(661),
        [anon_sym_LT_LT] = ACTIONS(651),
        [anon_sym_GT_GT] = ACTIONS(651),
        [anon_sym_and] = ACTIONS(315),
        [anon_sym_or] = ACTIONS(315),
        [anon_sym_LBRACK] = ACTIONS(315),
        [sym_comment] = ACTIONS(81),
    },
    [287] = {
        [anon_sym_LPAREN] = ACTIONS(259),
        [anon_sym_RPAREN] = ACTIONS(315),
        [anon_sym_STAR] = ACTIONS(649),
        [anon_sym_PLUS] = ACTIONS(315),
        [anon_sym_DASH] = ACTIONS(315),
        [anon_sym_SLASH] = ACTIONS(653),
        [anon_sym_STAR_STAR] = ACTIONS(655),
        [anon_sym_PIPE] = ACTIONS(315),
        [anon_sym_AMP] = ACTIONS(315),
        [anon_sym_CARET] = ACTIONS(315),
        [anon_sym_LT_LT] = ACTIONS(315),
        [anon_sym_GT_GT] = ACTIONS(315),
        [anon_sym_and] = ACTIONS(315),
        [anon_sym_or] = ACTIONS(315),
        [anon_sym_LBRACK] = ACTIONS(315),
        [sym_comment] = ACTIONS(81),
    },
    [288] = {
        [anon_sym_LPAREN] = ACTIONS(259),
        [anon_sym_RPAREN] = ACTIONS(315),
        [anon_sym_STAR] = ACTIONS(649),
        [anon_sym_PLUS] = ACTIONS(651),
        [anon_sym_DASH] = ACTIONS(651),
        [anon_sym_SLASH] = ACTIONS(653),
        [anon_sym_STAR_STAR] = ACTIONS(655),
        [anon_sym_PIPE] = ACTIONS(315),
        [anon_sym_AMP] = ACTIONS(315),
        [anon_sym_CARET] = ACTIONS(315),
        [anon_sym_LT_LT] = ACTIONS(651),
        [anon_sym_GT_GT] = ACTIONS(651),
        [anon_sym_and] = ACTIONS(315),
        [anon_sym_or] = ACTIONS(315),
        [anon_sym_LBRACK] = ACTIONS(315),
        [sym_comment] = ACTIONS(81),
    },
    [289] = {
        [anon_sym_LPAREN] = ACTIONS(259),
        [anon_sym_RPAREN] = ACTIONS(315),
        [anon_sym_STAR] = ACTIONS(317),
        [anon_sym_PLUS] = ACTIONS(315),
        [anon_sym_DASH] = ACTIONS(315),
        [anon_sym_SLASH] = ACTIONS(315),
        [anon_sym_STAR_STAR] = ACTIONS(655),
        [anon_sym_PIPE] = ACTIONS(315),
        [anon_sym_AMP] = ACTIONS(315),
        [anon_sym_CARET] = ACTIONS(315),
        [anon_sym_LT_LT] = ACTIONS(315),
        [anon_sym_GT_GT] = ACTIONS(315),
        [anon_sym_and] = ACTIONS(315),
        [anon_sym_or] = ACTIONS(315),
        [anon_sym_LBRACK] = ACTIONS(315),
        [sym_comment] = ACTIONS(81),
    },
    [290] = {
        [anon_sym_LPAREN] = ACTIONS(259),
        [anon_sym_RPAREN] = ACTIONS(663),
        [anon_sym_COMMA] = ACTIONS(663),
        [anon_sym_STAR] = ACTIONS(327),
        [anon_sym_PLUS] = ACTIONS(329),
        [anon_sym_DASH] = ACTIONS(329),
        [anon_sym_SLASH] = ACTIONS(331),
        [anon_sym_STAR_STAR] = ACTIONS(333),
        [anon_sym_PIPE] = ACTIONS(335),
        [anon_sym_AMP] = ACTIONS(337),
        [anon_sym_CARET] = ACTIONS(339),
        [anon_sym_LT_LT] = ACTIONS(329),
        [anon_sym_GT_GT] = ACTIONS(329),
        [anon_sym_and] = ACTIONS(337),
        [anon_sym_or] = ACTIONS(335),
        [anon_sym_LBRACK] = ACTIONS(275),
        [sym_comment] = ACTIONS(81),
    },
    [291] = {
        [anon_sym_LPAREN] = ACTIONS(195),
        [anon_sym_STAR] = ACTIONS(197),
        [anon_sym_PLUS] = ACTIONS(199),
        [anon_sym_DASH] = ACTIONS(199),
        [anon_sym_SLASH] = ACTIONS(201),
        [anon_sym_STAR_STAR] = ACTIONS(203),
        [anon_sym_PIPE] = ACTIONS(315),
        [anon_sym_AMP] = ACTIONS(207),
        [anon_sym_CARET] = ACTIONS(209),
        [anon_sym_LT_LT] = ACTIONS(199),
        [anon_sym_GT_GT] = ACTIONS(199),
        [anon_sym_and] = ACTIONS(207),
        [anon_sym_or] = ACTIONS(315),
        [anon_sym_LBRACK] = ACTIONS(315),
        [sym_comment] = ACTIONS(81),
        [sym__newline] = ACTIONS(315),
    },
    [292] = {
        [anon_sym_LPAREN] = ACTIONS(195),
        [anon_sym_STAR] = ACTIONS(197),
        [anon_sym_PLUS] = ACTIONS(199),
        [anon_sym_DASH] = ACTIONS(199),
        [anon_sym_SLASH] = ACTIONS(201),
        [anon_sym_STAR_STAR] = ACTIONS(203),
        [anon_sym_PIPE] = ACTIONS(315),
        [anon_sym_AMP] = ACTIONS(315),
        [anon_sym_CARET] = ACTIONS(209),
        [anon_sym_LT_LT] = ACTIONS(199),
        [anon_sym_GT_GT] = ACTIONS(199),
        [anon_sym_and] = ACTIONS(315),
        [anon_sym_or] = ACTIONS(315),
        [anon_sym_LBRACK] = ACTIONS(315),
        [sym_comment] = ACTIONS(81),
        [sym__newline] = ACTIONS(315),
    },
    [293] = {
        [anon_sym_LPAREN] = ACTIONS(195),
        [anon_sym_STAR] = ACTIONS(197),
        [anon_sym_PLUS] = ACTIONS(315),
        [anon_sym_DASH] = ACTIONS(315),
        [anon_sym_SLASH] = ACTIONS(201),
        [anon_sym_STAR_STAR] = ACTIONS(203),
        [anon_sym_PIPE] = ACTIONS(315),
        [anon_sym_AMP] = ACTIONS(315),
        [anon_sym_CARET] = ACTIONS(315),
        [anon_sym_LT_LT] = ACTIONS(315),
        [anon_sym_GT_GT] = ACTIONS(315),
        [anon_sym_and] = ACTIONS(315),
        [anon_sym_or] = ACTIONS(315),
        [anon_sym_LBRACK] = ACTIONS(315),
        [sym_comment] = ACTIONS(81),
        [sym__newline] = ACTIONS(315),
    },
    [294] = {
        [anon_sym_LPAREN] = ACTIONS(195),
        [anon_sym_STAR] = ACTIONS(197),
        [anon_sym_PLUS] = ACTIONS(199),
        [anon_sym_DASH] = ACTIONS(199),
        [anon_sym_SLASH] = ACTIONS(201),
        [anon_sym_STAR_STAR] = ACTIONS(203),
        [anon_sym_PIPE] = ACTIONS(315),
        [anon_sym_AMP] = ACTIONS(315),
        [anon_sym_CARET] = ACTIONS(315),
        [anon_sym_LT_LT] = ACTIONS(199),
        [anon_sym_GT_GT] = ACTIONS(199),
        [anon_sym_and] = ACTIONS(315),
        [anon_sym_or] = ACTIONS(315),
        [anon_sym_LBRACK] = ACTIONS(315),
        [sym_comment] = ACTIONS(81),
        [sym__newline] = ACTIONS(315),
    },
    [295] = {
        [anon_sym_LPAREN] = ACTIONS(195),
        [anon_sym_COMMA] = ACTIONS(315),
        [anon_sym_STAR] = ACTIONS(317),
        [anon_sym_PLUS] = ACTIONS(315),
        [anon_sym_DASH] = ACTIONS(315),
        [anon_sym_SLASH] = ACTIONS(315),
        [anon_sym_STAR_STAR] = ACTIONS(315),
        [anon_sym_PIPE] = ACTIONS(315),
        [anon_sym_AMP] = ACTIONS(315),
        [anon_sym_CARET] = ACTIONS(315),
        [anon_sym_LT_LT] = ACTIONS(315),
        [anon_sym_GT_GT] = ACTIONS(315),
        [anon_sym_and] = ACTIONS(315),
        [anon_sym_or] = ACTIONS(315),
        [anon_sym_LBRACK] = ACTIONS(315),
        [sym_comment] = ACTIONS(81),
        [sym__newline] = ACTIONS(315),
    },
    [296] = {
        [anon_sym_LPAREN] = ACTIONS(195),
        [anon_sym_STAR] = ACTIONS(317),
        [anon_sym_PLUS] = ACTIONS(315),
        [anon_sym_DASH] = ACTIONS(315),
        [anon_sym_SLASH] = ACTIONS(315),
        [anon_sym_STAR_STAR] = ACTIONS(203),
        [anon_sym_PIPE] = ACTIONS(315),
        [anon_sym_AMP] = ACTIONS(315),
        [anon_sym_CARET] = ACTIONS(315),
        [anon_sym_LT_LT] = ACTIONS(315),
        [anon_sym_GT_GT] = ACTIONS(315),
        [anon_sym_and] = ACTIONS(315),
        [anon_sym_or] = ACTIONS(315),
        [anon_sym_LBRACK] = ACTIONS(315),
        [sym_comment] = ACTIONS(81),
        [sym__newline] = ACTIONS(315),
    },
    [297] = {
        [anon_sym_LPAREN] = ACTIONS(259),
        [anon_sym_RPAREN] = ACTIONS(665),
        [anon_sym_COMMA] = ACTIONS(667),
        [anon_sym_STAR] = ACTIONS(327),
        [anon_sym_PLUS] = ACTIONS(329),
        [anon_sym_DASH] = ACTIONS(329),
        [anon_sym_SLASH] = ACTIONS(331),
        [anon_sym_STAR_STAR] = ACTIONS(333),
        [anon_sym_PIPE] = ACTIONS(335),
        [anon_sym_AMP] = ACTIONS(337),
        [anon_sym_CARET] = ACTIONS(339),
        [anon_sym_LT_LT] = ACTIONS(329),
        [anon_sym_GT_GT] = ACTIONS(329),
        [anon_sym_and] = ACTIONS(337),
        [anon_sym_or] = ACTIONS(335),
        [anon_sym_LBRACK] = ACTIONS(275),
        [sym_comment] = ACTIONS(81),
    },
    [298] = {
        [anon_sym_RPAREN] = ACTIONS(665),
        [anon_sym_COMMA] = ACTIONS(667),
        [sym_comment] = ACTIONS(81),
    },
    [299] = {
        [aux_sym_call_repeat2] = STATE(318),
        [anon_sym_RPAREN] = ACTIONS(665),
        [anon_sym_COMMA] = ACTIONS(669),
        [sym_comment] = ACTIONS(81),
    },
    [300] = {
        [anon_sym_RPAREN] = ACTIONS(665),
        [sym_comment] = ACTIONS(81),
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
        [anon_sym_STAR] = ACTIONS(239),
        [anon_sym_STAR_STAR] = ACTIONS(241),
        [anon_sym_not] = ACTIONS(243),
        [anon_sym_LBRACK] = ACTIONS(141),
        [anon_sym_LBRACE] = ACTIONS(143),
        [sym_number] = ACTIONS(145),
        [sym_identifier] = ACTIONS(245),
        [sym_comment] = ACTIONS(81),
    },
    [302] = {
        [anon_sym_LPAREN] = ACTIONS(259),
        [anon_sym_RPAREN] = ACTIONS(671),
        [anon_sym_COMMA] = ACTIONS(673),
        [anon_sym_STAR] = ACTIONS(327),
        [anon_sym_PLUS] = ACTIONS(329),
        [anon_sym_DASH] = ACTIONS(329),
        [anon_sym_SLASH] = ACTIONS(331),
        [anon_sym_STAR_STAR] = ACTIONS(333),
        [anon_sym_PIPE] = ACTIONS(335),
        [anon_sym_AMP] = ACTIONS(337),
        [anon_sym_CARET] = ACTIONS(339),
        [anon_sym_LT_LT] = ACTIONS(329),
        [anon_sym_GT_GT] = ACTIONS(329),
        [anon_sym_and] = ACTIONS(337),
        [anon_sym_or] = ACTIONS(335),
        [anon_sym_LBRACK] = ACTIONS(275),
        [sym_comment] = ACTIONS(81),
    },
    [303] = {
        [anon_sym_RPAREN] = ACTIONS(671),
        [anon_sym_COMMA] = ACTIONS(673),
        [sym_comment] = ACTIONS(81),
    },
    [304] = {
        [aux_sym_call_repeat2] = STATE(308),
        [anon_sym_RPAREN] = ACTIONS(671),
        [anon_sym_COMMA] = ACTIONS(675),
        [sym_comment] = ACTIONS(81),
    },
    [305] = {
        [anon_sym_RPAREN] = ACTIONS(671),
        [sym_comment] = ACTIONS(81),
    },
    [306] = {
        [anon_sym_LPAREN] = ACTIONS(349),
        [anon_sym_RPAREN] = ACTIONS(349),
        [anon_sym_COMMA] = ACTIONS(349),
        [anon_sym_as] = ACTIONS(349),
        [anon_sym_STAR] = ACTIONS(351),
        [anon_sym_COLON] = ACTIONS(349),
        [anon_sym_for] = ACTIONS(349),
        [anon_sym_in] = ACTIONS(349),
        [anon_sym_PLUS] = ACTIONS(349),
        [anon_sym_DASH] = ACTIONS(349),
        [anon_sym_SLASH] = ACTIONS(349),
        [anon_sym_STAR_STAR] = ACTIONS(349),
        [anon_sym_PIPE] = ACTIONS(349),
        [anon_sym_AMP] = ACTIONS(349),
        [anon_sym_CARET] = ACTIONS(349),
        [anon_sym_LT_LT] = ACTIONS(349),
        [anon_sym_GT_GT] = ACTIONS(349),
        [anon_sym_and] = ACTIONS(349),
        [anon_sym_or] = ACTIONS(349),
        [anon_sym_LBRACK] = ACTIONS(349),
        [anon_sym_RBRACK] = ACTIONS(349),
        [anon_sym_RBRACE] = ACTIONS(349),
        [sym_comment] = ACTIONS(81),
        [sym__newline] = ACTIONS(349),
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
        [anon_sym_STAR_STAR] = ACTIONS(241),
        [anon_sym_not] = ACTIONS(243),
        [anon_sym_LBRACK] = ACTIONS(141),
        [anon_sym_LBRACE] = ACTIONS(143),
        [sym_number] = ACTIONS(145),
        [sym_identifier] = ACTIONS(245),
        [sym_comment] = ACTIONS(81),
    },
    [308] = {
        [anon_sym_RPAREN] = ACTIONS(677),
        [anon_sym_COMMA] = ACTIONS(679),
        [sym_comment] = ACTIONS(81),
    },
    [309] = {
        [anon_sym_LPAREN] = ACTIONS(357),
        [anon_sym_RPAREN] = ACTIONS(357),
        [anon_sym_COMMA] = ACTIONS(357),
        [anon_sym_as] = ACTIONS(357),
        [anon_sym_STAR] = ACTIONS(359),
        [anon_sym_COLON] = ACTIONS(357),
        [anon_sym_for] = ACTIONS(357),
        [anon_sym_in] = ACTIONS(357),
        [anon_sym_PLUS] = ACTIONS(357),
        [anon_sym_DASH] = ACTIONS(357),
        [anon_sym_SLASH] = ACTIONS(357),
        [anon_sym_STAR_STAR] = ACTIONS(357),
        [anon_sym_PIPE] = ACTIONS(357),
        [anon_sym_AMP] = ACTIONS(357),
        [anon_sym_CARET] = ACTIONS(357),
        [anon_sym_LT_LT] = ACTIONS(357),
        [anon_sym_GT_GT] = ACTIONS(357),
        [anon_sym_and] = ACTIONS(357),
        [anon_sym_or] = ACTIONS(357),
        [anon_sym_LBRACK] = ACTIONS(357),
        [anon_sym_RBRACK] = ACTIONS(357),
        [anon_sym_RBRACE] = ACTIONS(357),
        [sym_comment] = ACTIONS(81),
        [sym__newline] = ACTIONS(357),
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
        [anon_sym_STAR_STAR] = ACTIONS(241),
        [anon_sym_not] = ACTIONS(243),
        [anon_sym_LBRACK] = ACTIONS(141),
        [anon_sym_LBRACE] = ACTIONS(143),
        [sym_number] = ACTIONS(145),
        [sym_identifier] = ACTIONS(245),
        [sym_comment] = ACTIONS(81),
    },
    [311] = {
        [anon_sym_RPAREN] = ACTIONS(681),
        [sym_comment] = ACTIONS(81),
    },
    [312] = {
        [anon_sym_LPAREN] = ACTIONS(365),
        [anon_sym_RPAREN] = ACTIONS(365),
        [anon_sym_COMMA] = ACTIONS(365),
        [anon_sym_as] = ACTIONS(365),
        [anon_sym_STAR] = ACTIONS(367),
        [anon_sym_COLON] = ACTIONS(365),
        [anon_sym_for] = ACTIONS(365),
        [anon_sym_in] = ACTIONS(365),
        [anon_sym_PLUS] = ACTIONS(365),
        [anon_sym_DASH] = ACTIONS(365),
        [anon_sym_SLASH] = ACTIONS(365),
        [anon_sym_STAR_STAR] = ACTIONS(365),
        [anon_sym_PIPE] = ACTIONS(365),
        [anon_sym_AMP] = ACTIONS(365),
        [anon_sym_CARET] = ACTIONS(365),
        [anon_sym_LT_LT] = ACTIONS(365),
        [anon_sym_GT_GT] = ACTIONS(365),
        [anon_sym_and] = ACTIONS(365),
        [anon_sym_or] = ACTIONS(365),
        [anon_sym_LBRACK] = ACTIONS(365),
        [anon_sym_RBRACK] = ACTIONS(365),
        [anon_sym_RBRACE] = ACTIONS(365),
        [sym_comment] = ACTIONS(81),
        [sym__newline] = ACTIONS(365),
    },
    [313] = {
        [anon_sym_RPAREN] = ACTIONS(683),
        [sym_comment] = ACTIONS(81),
    },
    [314] = {
        [anon_sym_LPAREN] = ACTIONS(373),
        [anon_sym_RPAREN] = ACTIONS(373),
        [anon_sym_COMMA] = ACTIONS(373),
        [anon_sym_as] = ACTIONS(373),
        [anon_sym_STAR] = ACTIONS(375),
        [anon_sym_COLON] = ACTIONS(373),
        [anon_sym_for] = ACTIONS(373),
        [anon_sym_in] = ACTIONS(373),
        [anon_sym_PLUS] = ACTIONS(373),
        [anon_sym_DASH] = ACTIONS(373),
        [anon_sym_SLASH] = ACTIONS(373),
        [anon_sym_STAR_STAR] = ACTIONS(373),
        [anon_sym_PIPE] = ACTIONS(373),
        [anon_sym_AMP] = ACTIONS(373),
        [anon_sym_CARET] = ACTIONS(373),
        [anon_sym_LT_LT] = ACTIONS(373),
        [anon_sym_GT_GT] = ACTIONS(373),
        [anon_sym_and] = ACTIONS(373),
        [anon_sym_or] = ACTIONS(373),
        [anon_sym_LBRACK] = ACTIONS(373),
        [anon_sym_RBRACK] = ACTIONS(373),
        [anon_sym_RBRACE] = ACTIONS(373),
        [sym_comment] = ACTIONS(81),
        [sym__newline] = ACTIONS(373),
    },
    [315] = {
        [anon_sym_RPAREN] = ACTIONS(677),
        [anon_sym_STAR] = ACTIONS(377),
        [anon_sym_STAR_STAR] = ACTIONS(379),
        [anon_sym_not] = ACTIONS(377),
        [anon_sym_LBRACK] = ACTIONS(379),
        [anon_sym_LBRACE] = ACTIONS(379),
        [sym_number] = ACTIONS(377),
        [sym_identifier] = ACTIONS(381),
        [sym_comment] = ACTIONS(81),
    },
    [316] = {
        [anon_sym_LPAREN] = ACTIONS(383),
        [anon_sym_RPAREN] = ACTIONS(383),
        [anon_sym_COMMA] = ACTIONS(383),
        [anon_sym_as] = ACTIONS(383),
        [anon_sym_STAR] = ACTIONS(385),
        [anon_sym_COLON] = ACTIONS(383),
        [anon_sym_for] = ACTIONS(383),
        [anon_sym_in] = ACTIONS(383),
        [anon_sym_PLUS] = ACTIONS(383),
        [anon_sym_DASH] = ACTIONS(383),
        [anon_sym_SLASH] = ACTIONS(383),
        [anon_sym_STAR_STAR] = ACTIONS(383),
        [anon_sym_PIPE] = ACTIONS(383),
        [anon_sym_AMP] = ACTIONS(383),
        [anon_sym_CARET] = ACTIONS(383),
        [anon_sym_LT_LT] = ACTIONS(383),
        [anon_sym_GT_GT] = ACTIONS(383),
        [anon_sym_and] = ACTIONS(383),
        [anon_sym_or] = ACTIONS(383),
        [anon_sym_LBRACK] = ACTIONS(383),
        [anon_sym_RBRACK] = ACTIONS(383),
        [anon_sym_RBRACE] = ACTIONS(383),
        [sym_comment] = ACTIONS(81),
        [sym__newline] = ACTIONS(383),
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
        [anon_sym_STAR_STAR] = ACTIONS(241),
        [anon_sym_not] = ACTIONS(243),
        [anon_sym_LBRACK] = ACTIONS(141),
        [anon_sym_LBRACE] = ACTIONS(143),
        [sym_number] = ACTIONS(145),
        [sym_identifier] = ACTIONS(245),
        [sym_comment] = ACTIONS(81),
    },
    [318] = {
        [anon_sym_RPAREN] = ACTIONS(671),
        [anon_sym_COMMA] = ACTIONS(685),
        [sym_comment] = ACTIONS(81),
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
        [anon_sym_STAR_STAR] = ACTIONS(241),
        [anon_sym_not] = ACTIONS(243),
        [anon_sym_LBRACK] = ACTIONS(141),
        [anon_sym_LBRACE] = ACTIONS(143),
        [sym_number] = ACTIONS(145),
        [sym_identifier] = ACTIONS(245),
        [sym_comment] = ACTIONS(81),
    },
    [320] = {
        [anon_sym_RPAREN] = ACTIONS(677),
        [sym_comment] = ACTIONS(81),
    },
    [321] = {
        [anon_sym_RPAREN] = ACTIONS(671),
        [anon_sym_STAR] = ACTIONS(389),
        [anon_sym_STAR_STAR] = ACTIONS(391),
        [anon_sym_not] = ACTIONS(389),
        [anon_sym_LBRACK] = ACTIONS(391),
        [anon_sym_LBRACE] = ACTIONS(391),
        [sym_number] = ACTIONS(389),
        [sym_identifier] = ACTIONS(393),
        [sym_comment] = ACTIONS(81),
    },
    [322] = {
        [ts_builtin_sym_end] = ACTIONS(687),
        [anon_sym_SEMI] = ACTIONS(687),
        [anon_sym_import] = ACTIONS(689),
        [anon_sym_from] = ACTIONS(689),
        [anon_sym_print] = ACTIONS(689),
        [anon_sym_return] = ACTIONS(689),
        [anon_sym_del] = ACTIONS(689),
        [sym_pass_statement] = ACTIONS(689),
        [sym_break_statement] = ACTIONS(689),
        [sym_continue_statement] = ACTIONS(689),
        [anon_sym_if] = ACTIONS(689),
        [anon_sym_for] = ACTIONS(689),
        [anon_sym_while] = ACTIONS(689),
        [anon_sym_try] = ACTIONS(689),
        [anon_sym_with] = ACTIONS(689),
        [anon_sym_def] = ACTIONS(689),
        [anon_sym_class] = ACTIONS(689),
        [anon_sym_AT] = ACTIONS(687),
        [anon_sym_not] = ACTIONS(689),
        [anon_sym_LBRACK] = ACTIONS(687),
        [anon_sym_LBRACE] = ACTIONS(687),
        [sym_number] = ACTIONS(689),
        [sym_identifier] = ACTIONS(691),
        [sym_comment] = ACTIONS(81),
        [sym__newline] = ACTIONS(687),
    },
    [323] = {
        [anon_sym_LPAREN] = ACTIONS(397),
        [anon_sym_RPAREN] = ACTIONS(397),
        [anon_sym_COMMA] = ACTIONS(397),
        [anon_sym_as] = ACTIONS(397),
        [anon_sym_STAR] = ACTIONS(399),
        [anon_sym_COLON] = ACTIONS(397),
        [anon_sym_for] = ACTIONS(397),
        [anon_sym_in] = ACTIONS(397),
        [anon_sym_PLUS] = ACTIONS(397),
        [anon_sym_DASH] = ACTIONS(397),
        [anon_sym_SLASH] = ACTIONS(397),
        [anon_sym_STAR_STAR] = ACTIONS(397),
        [anon_sym_PIPE] = ACTIONS(397),
        [anon_sym_AMP] = ACTIONS(397),
        [anon_sym_CARET] = ACTIONS(397),
        [anon_sym_LT_LT] = ACTIONS(397),
        [anon_sym_GT_GT] = ACTIONS(397),
        [anon_sym_and] = ACTIONS(397),
        [anon_sym_or] = ACTIONS(397),
        [anon_sym_LBRACK] = ACTIONS(397),
        [anon_sym_RBRACK] = ACTIONS(397),
        [anon_sym_RBRACE] = ACTIONS(397),
        [sym_comment] = ACTIONS(81),
        [sym__newline] = ACTIONS(397),
    },
    [324] = {
        [aux_sym_print_statement_repeat1] = STATE(340),
        [anon_sym_LPAREN] = ACTIONS(259),
        [anon_sym_COMMA] = ACTIONS(693),
        [anon_sym_STAR] = ACTIONS(403),
        [anon_sym_COLON] = ACTIONS(405),
        [anon_sym_for] = ACTIONS(695),
        [anon_sym_PLUS] = ACTIONS(409),
        [anon_sym_DASH] = ACTIONS(409),
        [anon_sym_SLASH] = ACTIONS(411),
        [anon_sym_STAR_STAR] = ACTIONS(413),
        [anon_sym_PIPE] = ACTIONS(415),
        [anon_sym_AMP] = ACTIONS(417),
        [anon_sym_CARET] = ACTIONS(419),
        [anon_sym_LT_LT] = ACTIONS(409),
        [anon_sym_GT_GT] = ACTIONS(409),
        [anon_sym_and] = ACTIONS(417),
        [anon_sym_or] = ACTIONS(415),
        [anon_sym_LBRACK] = ACTIONS(275),
        [anon_sym_RBRACE] = ACTIONS(697),
        [sym_comment] = ACTIONS(81),
    },
    [325] = {
        [aux_sym_dictionary_repeat1] = STATE(329),
        [anon_sym_COMMA] = ACTIONS(699),
        [anon_sym_for] = ACTIONS(701),
        [anon_sym_RBRACE] = ACTIONS(703),
        [sym_comment] = ACTIONS(81),
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
        [anon_sym_not] = ACTIONS(139),
        [anon_sym_LBRACK] = ACTIONS(141),
        [anon_sym_LBRACE] = ACTIONS(143),
        [anon_sym_RBRACE] = ACTIONS(705),
        [sym_number] = ACTIONS(145),
        [sym_identifier] = ACTIONS(147),
        [sym_comment] = ACTIONS(81),
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
        [anon_sym_not] = ACTIONS(149),
        [anon_sym_LBRACK] = ACTIONS(141),
        [anon_sym_LBRACE] = ACTIONS(143),
        [sym_number] = ACTIONS(145),
        [sym_identifier] = ACTIONS(147),
        [sym_comment] = ACTIONS(81),
    },
    [328] = {
        [anon_sym_LPAREN] = ACTIONS(431),
        [anon_sym_RPAREN] = ACTIONS(431),
        [anon_sym_COMMA] = ACTIONS(431),
        [anon_sym_as] = ACTIONS(431),
        [anon_sym_STAR] = ACTIONS(433),
        [anon_sym_COLON] = ACTIONS(431),
        [anon_sym_for] = ACTIONS(431),
        [anon_sym_in] = ACTIONS(431),
        [anon_sym_PLUS] = ACTIONS(431),
        [anon_sym_DASH] = ACTIONS(431),
        [anon_sym_SLASH] = ACTIONS(431),
        [anon_sym_STAR_STAR] = ACTIONS(431),
        [anon_sym_PIPE] = ACTIONS(431),
        [anon_sym_AMP] = ACTIONS(431),
        [anon_sym_CARET] = ACTIONS(431),
        [anon_sym_LT_LT] = ACTIONS(431),
        [anon_sym_GT_GT] = ACTIONS(431),
        [anon_sym_and] = ACTIONS(431),
        [anon_sym_or] = ACTIONS(431),
        [anon_sym_LBRACK] = ACTIONS(431),
        [anon_sym_RBRACK] = ACTIONS(431),
        [anon_sym_RBRACE] = ACTIONS(431),
        [sym_comment] = ACTIONS(81),
        [sym__newline] = ACTIONS(431),
    },
    [329] = {
        [anon_sym_COMMA] = ACTIONS(707),
        [anon_sym_RBRACE] = ACTIONS(705),
        [sym_comment] = ACTIONS(81),
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
        [anon_sym_not] = ACTIONS(139),
        [anon_sym_LBRACK] = ACTIONS(141),
        [anon_sym_LBRACE] = ACTIONS(143),
        [anon_sym_RBRACE] = ACTIONS(709),
        [sym_number] = ACTIONS(145),
        [sym_identifier] = ACTIONS(147),
        [sym_comment] = ACTIONS(81),
    },
    [331] = {
        [anon_sym_LPAREN] = ACTIONS(439),
        [anon_sym_RPAREN] = ACTIONS(439),
        [anon_sym_COMMA] = ACTIONS(439),
        [anon_sym_as] = ACTIONS(439),
        [anon_sym_STAR] = ACTIONS(441),
        [anon_sym_COLON] = ACTIONS(439),
        [anon_sym_for] = ACTIONS(439),
        [anon_sym_in] = ACTIONS(439),
        [anon_sym_PLUS] = ACTIONS(439),
        [anon_sym_DASH] = ACTIONS(439),
        [anon_sym_SLASH] = ACTIONS(439),
        [anon_sym_STAR_STAR] = ACTIONS(439),
        [anon_sym_PIPE] = ACTIONS(439),
        [anon_sym_AMP] = ACTIONS(439),
        [anon_sym_CARET] = ACTIONS(439),
        [anon_sym_LT_LT] = ACTIONS(439),
        [anon_sym_GT_GT] = ACTIONS(439),
        [anon_sym_and] = ACTIONS(439),
        [anon_sym_or] = ACTIONS(439),
        [anon_sym_LBRACK] = ACTIONS(439),
        [anon_sym_RBRACK] = ACTIONS(439),
        [anon_sym_RBRACE] = ACTIONS(439),
        [sym_comment] = ACTIONS(81),
        [sym__newline] = ACTIONS(439),
    },
    [332] = {
        [anon_sym_LPAREN] = ACTIONS(443),
        [anon_sym_RPAREN] = ACTIONS(443),
        [anon_sym_COMMA] = ACTIONS(443),
        [anon_sym_as] = ACTIONS(443),
        [anon_sym_STAR] = ACTIONS(445),
        [anon_sym_COLON] = ACTIONS(443),
        [anon_sym_for] = ACTIONS(443),
        [anon_sym_in] = ACTIONS(443),
        [anon_sym_PLUS] = ACTIONS(443),
        [anon_sym_DASH] = ACTIONS(443),
        [anon_sym_SLASH] = ACTIONS(443),
        [anon_sym_STAR_STAR] = ACTIONS(443),
        [anon_sym_PIPE] = ACTIONS(443),
        [anon_sym_AMP] = ACTIONS(443),
        [anon_sym_CARET] = ACTIONS(443),
        [anon_sym_LT_LT] = ACTIONS(443),
        [anon_sym_GT_GT] = ACTIONS(443),
        [anon_sym_and] = ACTIONS(443),
        [anon_sym_or] = ACTIONS(443),
        [anon_sym_LBRACK] = ACTIONS(443),
        [anon_sym_RBRACK] = ACTIONS(443),
        [anon_sym_RBRACE] = ACTIONS(443),
        [sym_comment] = ACTIONS(81),
        [sym__newline] = ACTIONS(443),
    },
    [333] = {
        [anon_sym_in] = ACTIONS(711),
        [sym_comment] = ACTIONS(81),
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
        [anon_sym_not] = ACTIONS(511),
        [anon_sym_LBRACK] = ACTIONS(141),
        [anon_sym_LBRACE] = ACTIONS(143),
        [sym_number] = ACTIONS(145),
        [sym_identifier] = ACTIONS(147),
        [sym_comment] = ACTIONS(81),
    },
    [335] = {
        [anon_sym_LPAREN] = ACTIONS(259),
        [anon_sym_STAR] = ACTIONS(513),
        [anon_sym_PLUS] = ACTIONS(515),
        [anon_sym_DASH] = ACTIONS(515),
        [anon_sym_SLASH] = ACTIONS(517),
        [anon_sym_STAR_STAR] = ACTIONS(519),
        [anon_sym_PIPE] = ACTIONS(521),
        [anon_sym_AMP] = ACTIONS(523),
        [anon_sym_CARET] = ACTIONS(525),
        [anon_sym_LT_LT] = ACTIONS(515),
        [anon_sym_GT_GT] = ACTIONS(515),
        [anon_sym_and] = ACTIONS(523),
        [anon_sym_or] = ACTIONS(521),
        [anon_sym_LBRACK] = ACTIONS(275),
        [anon_sym_RBRACE] = ACTIONS(713),
        [sym_comment] = ACTIONS(81),
    },
    [336] = {
        [anon_sym_LPAREN] = ACTIONS(529),
        [anon_sym_RPAREN] = ACTIONS(529),
        [anon_sym_COMMA] = ACTIONS(529),
        [anon_sym_as] = ACTIONS(529),
        [anon_sym_STAR] = ACTIONS(531),
        [anon_sym_COLON] = ACTIONS(529),
        [anon_sym_for] = ACTIONS(529),
        [anon_sym_in] = ACTIONS(529),
        [anon_sym_PLUS] = ACTIONS(529),
        [anon_sym_DASH] = ACTIONS(529),
        [anon_sym_SLASH] = ACTIONS(529),
        [anon_sym_STAR_STAR] = ACTIONS(529),
        [anon_sym_PIPE] = ACTIONS(529),
        [anon_sym_AMP] = ACTIONS(529),
        [anon_sym_CARET] = ACTIONS(529),
        [anon_sym_LT_LT] = ACTIONS(529),
        [anon_sym_GT_GT] = ACTIONS(529),
        [anon_sym_and] = ACTIONS(529),
        [anon_sym_or] = ACTIONS(529),
        [anon_sym_LBRACK] = ACTIONS(529),
        [anon_sym_RBRACK] = ACTIONS(529),
        [anon_sym_RBRACE] = ACTIONS(529),
        [sym_comment] = ACTIONS(81),
        [sym__newline] = ACTIONS(529),
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
        [anon_sym_not] = ACTIONS(465),
        [anon_sym_LBRACK] = ACTIONS(141),
        [anon_sym_LBRACE] = ACTIONS(143),
        [anon_sym_RBRACE] = ACTIONS(715),
        [sym_number] = ACTIONS(145),
        [sym_identifier] = ACTIONS(147),
        [sym_comment] = ACTIONS(81),
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
        [anon_sym_not] = ACTIONS(149),
        [anon_sym_LBRACK] = ACTIONS(141),
        [anon_sym_LBRACE] = ACTIONS(143),
        [sym_number] = ACTIONS(145),
        [sym_identifier] = ACTIONS(147),
        [sym_comment] = ACTIONS(81),
    },
    [339] = {
        [anon_sym_LPAREN] = ACTIONS(539),
        [anon_sym_RPAREN] = ACTIONS(539),
        [anon_sym_COMMA] = ACTIONS(539),
        [anon_sym_as] = ACTIONS(539),
        [anon_sym_STAR] = ACTIONS(541),
        [anon_sym_COLON] = ACTIONS(539),
        [anon_sym_for] = ACTIONS(539),
        [anon_sym_in] = ACTIONS(539),
        [anon_sym_PLUS] = ACTIONS(539),
        [anon_sym_DASH] = ACTIONS(539),
        [anon_sym_SLASH] = ACTIONS(539),
        [anon_sym_STAR_STAR] = ACTIONS(539),
        [anon_sym_PIPE] = ACTIONS(539),
        [anon_sym_AMP] = ACTIONS(539),
        [anon_sym_CARET] = ACTIONS(539),
        [anon_sym_LT_LT] = ACTIONS(539),
        [anon_sym_GT_GT] = ACTIONS(539),
        [anon_sym_and] = ACTIONS(539),
        [anon_sym_or] = ACTIONS(539),
        [anon_sym_LBRACK] = ACTIONS(539),
        [anon_sym_RBRACK] = ACTIONS(539),
        [anon_sym_RBRACE] = ACTIONS(539),
        [sym_comment] = ACTIONS(81),
        [sym__newline] = ACTIONS(539),
    },
    [340] = {
        [anon_sym_COMMA] = ACTIONS(717),
        [anon_sym_RBRACE] = ACTIONS(715),
        [sym_comment] = ACTIONS(81),
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
        [anon_sym_not] = ACTIONS(465),
        [anon_sym_LBRACK] = ACTIONS(141),
        [anon_sym_LBRACE] = ACTIONS(143),
        [anon_sym_RBRACE] = ACTIONS(719),
        [sym_number] = ACTIONS(145),
        [sym_identifier] = ACTIONS(147),
        [sym_comment] = ACTIONS(81),
    },
    [342] = {
        [anon_sym_LPAREN] = ACTIONS(547),
        [anon_sym_RPAREN] = ACTIONS(547),
        [anon_sym_COMMA] = ACTIONS(547),
        [anon_sym_as] = ACTIONS(547),
        [anon_sym_STAR] = ACTIONS(549),
        [anon_sym_COLON] = ACTIONS(547),
        [anon_sym_for] = ACTIONS(547),
        [anon_sym_in] = ACTIONS(547),
        [anon_sym_PLUS] = ACTIONS(547),
        [anon_sym_DASH] = ACTIONS(547),
        [anon_sym_SLASH] = ACTIONS(547),
        [anon_sym_STAR_STAR] = ACTIONS(547),
        [anon_sym_PIPE] = ACTIONS(547),
        [anon_sym_AMP] = ACTIONS(547),
        [anon_sym_CARET] = ACTIONS(547),
        [anon_sym_LT_LT] = ACTIONS(547),
        [anon_sym_GT_GT] = ACTIONS(547),
        [anon_sym_and] = ACTIONS(547),
        [anon_sym_or] = ACTIONS(547),
        [anon_sym_LBRACK] = ACTIONS(547),
        [anon_sym_RBRACK] = ACTIONS(547),
        [anon_sym_RBRACE] = ACTIONS(547),
        [sym_comment] = ACTIONS(81),
        [sym__newline] = ACTIONS(547),
    },
    [343] = {
        [anon_sym_LPAREN] = ACTIONS(551),
        [anon_sym_RPAREN] = ACTIONS(551),
        [anon_sym_COMMA] = ACTIONS(551),
        [anon_sym_as] = ACTIONS(551),
        [anon_sym_STAR] = ACTIONS(553),
        [anon_sym_COLON] = ACTIONS(551),
        [anon_sym_for] = ACTIONS(551),
        [anon_sym_in] = ACTIONS(551),
        [anon_sym_PLUS] = ACTIONS(551),
        [anon_sym_DASH] = ACTIONS(551),
        [anon_sym_SLASH] = ACTIONS(551),
        [anon_sym_STAR_STAR] = ACTIONS(551),
        [anon_sym_PIPE] = ACTIONS(551),
        [anon_sym_AMP] = ACTIONS(551),
        [anon_sym_CARET] = ACTIONS(551),
        [anon_sym_LT_LT] = ACTIONS(551),
        [anon_sym_GT_GT] = ACTIONS(551),
        [anon_sym_and] = ACTIONS(551),
        [anon_sym_or] = ACTIONS(551),
        [anon_sym_LBRACK] = ACTIONS(551),
        [anon_sym_RBRACK] = ACTIONS(551),
        [anon_sym_RBRACE] = ACTIONS(551),
        [sym_comment] = ACTIONS(81),
        [sym__newline] = ACTIONS(551),
    },
    [344] = {
        [anon_sym_in] = ACTIONS(721),
        [sym_comment] = ACTIONS(81),
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
        [anon_sym_not] = ACTIONS(511),
        [anon_sym_LBRACK] = ACTIONS(141),
        [anon_sym_LBRACE] = ACTIONS(143),
        [sym_number] = ACTIONS(145),
        [sym_identifier] = ACTIONS(147),
        [sym_comment] = ACTIONS(81),
    },
    [346] = {
        [anon_sym_LPAREN] = ACTIONS(259),
        [anon_sym_STAR] = ACTIONS(513),
        [anon_sym_PLUS] = ACTIONS(515),
        [anon_sym_DASH] = ACTIONS(515),
        [anon_sym_SLASH] = ACTIONS(517),
        [anon_sym_STAR_STAR] = ACTIONS(519),
        [anon_sym_PIPE] = ACTIONS(521),
        [anon_sym_AMP] = ACTIONS(523),
        [anon_sym_CARET] = ACTIONS(525),
        [anon_sym_LT_LT] = ACTIONS(515),
        [anon_sym_GT_GT] = ACTIONS(515),
        [anon_sym_and] = ACTIONS(523),
        [anon_sym_or] = ACTIONS(521),
        [anon_sym_LBRACK] = ACTIONS(275),
        [anon_sym_RBRACE] = ACTIONS(723),
        [sym_comment] = ACTIONS(81),
    },
    [347] = {
        [anon_sym_LPAREN] = ACTIONS(559),
        [anon_sym_RPAREN] = ACTIONS(559),
        [anon_sym_COMMA] = ACTIONS(559),
        [anon_sym_as] = ACTIONS(559),
        [anon_sym_STAR] = ACTIONS(561),
        [anon_sym_COLON] = ACTIONS(559),
        [anon_sym_for] = ACTIONS(559),
        [anon_sym_in] = ACTIONS(559),
        [anon_sym_PLUS] = ACTIONS(559),
        [anon_sym_DASH] = ACTIONS(559),
        [anon_sym_SLASH] = ACTIONS(559),
        [anon_sym_STAR_STAR] = ACTIONS(559),
        [anon_sym_PIPE] = ACTIONS(559),
        [anon_sym_AMP] = ACTIONS(559),
        [anon_sym_CARET] = ACTIONS(559),
        [anon_sym_LT_LT] = ACTIONS(559),
        [anon_sym_GT_GT] = ACTIONS(559),
        [anon_sym_and] = ACTIONS(559),
        [anon_sym_or] = ACTIONS(559),
        [anon_sym_LBRACK] = ACTIONS(559),
        [anon_sym_RBRACK] = ACTIONS(559),
        [anon_sym_RBRACE] = ACTIONS(559),
        [sym_comment] = ACTIONS(81),
        [sym__newline] = ACTIONS(559),
    },
    [348] = {
        [anon_sym_LPAREN] = ACTIONS(577),
        [anon_sym_RPAREN] = ACTIONS(577),
        [anon_sym_COMMA] = ACTIONS(577),
        [anon_sym_as] = ACTIONS(577),
        [anon_sym_STAR] = ACTIONS(579),
        [anon_sym_COLON] = ACTIONS(577),
        [anon_sym_for] = ACTIONS(577),
        [anon_sym_in] = ACTIONS(577),
        [anon_sym_PLUS] = ACTIONS(577),
        [anon_sym_DASH] = ACTIONS(577),
        [anon_sym_SLASH] = ACTIONS(577),
        [anon_sym_STAR_STAR] = ACTIONS(577),
        [anon_sym_PIPE] = ACTIONS(577),
        [anon_sym_AMP] = ACTIONS(577),
        [anon_sym_CARET] = ACTIONS(577),
        [anon_sym_LT_LT] = ACTIONS(577),
        [anon_sym_GT_GT] = ACTIONS(577),
        [anon_sym_and] = ACTIONS(577),
        [anon_sym_or] = ACTIONS(577),
        [anon_sym_LBRACK] = ACTIONS(577),
        [anon_sym_RBRACK] = ACTIONS(577),
        [anon_sym_RBRACE] = ACTIONS(577),
        [sym_comment] = ACTIONS(81),
        [sym__newline] = ACTIONS(577),
    },
    [349] = {
        [aux_sym_print_statement_repeat1] = STATE(353),
        [anon_sym_LPAREN] = ACTIONS(259),
        [anon_sym_COMMA] = ACTIONS(725),
        [anon_sym_STAR] = ACTIONS(583),
        [anon_sym_for] = ACTIONS(727),
        [anon_sym_PLUS] = ACTIONS(587),
        [anon_sym_DASH] = ACTIONS(587),
        [anon_sym_SLASH] = ACTIONS(589),
        [anon_sym_STAR_STAR] = ACTIONS(591),
        [anon_sym_PIPE] = ACTIONS(593),
        [anon_sym_AMP] = ACTIONS(595),
        [anon_sym_CARET] = ACTIONS(597),
        [anon_sym_LT_LT] = ACTIONS(587),
        [anon_sym_GT_GT] = ACTIONS(587),
        [anon_sym_and] = ACTIONS(595),
        [anon_sym_or] = ACTIONS(593),
        [anon_sym_LBRACK] = ACTIONS(275),
        [anon_sym_RBRACK] = ACTIONS(729),
        [sym_comment] = ACTIONS(81),
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
        [anon_sym_not] = ACTIONS(247),
        [anon_sym_LBRACK] = ACTIONS(141),
        [anon_sym_RBRACK] = ACTIONS(731),
        [anon_sym_LBRACE] = ACTIONS(143),
        [sym_number] = ACTIONS(145),
        [sym_identifier] = ACTIONS(147),
        [sym_comment] = ACTIONS(81),
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
        [anon_sym_not] = ACTIONS(149),
        [anon_sym_LBRACK] = ACTIONS(141),
        [anon_sym_LBRACE] = ACTIONS(143),
        [sym_number] = ACTIONS(145),
        [sym_identifier] = ACTIONS(147),
        [sym_comment] = ACTIONS(81),
    },
    [352] = {
        [anon_sym_LPAREN] = ACTIONS(603),
        [anon_sym_RPAREN] = ACTIONS(603),
        [anon_sym_COMMA] = ACTIONS(603),
        [anon_sym_as] = ACTIONS(603),
        [anon_sym_STAR] = ACTIONS(605),
        [anon_sym_COLON] = ACTIONS(603),
        [anon_sym_for] = ACTIONS(603),
        [anon_sym_in] = ACTIONS(603),
        [anon_sym_PLUS] = ACTIONS(603),
        [anon_sym_DASH] = ACTIONS(603),
        [anon_sym_SLASH] = ACTIONS(603),
        [anon_sym_STAR_STAR] = ACTIONS(603),
        [anon_sym_PIPE] = ACTIONS(603),
        [anon_sym_AMP] = ACTIONS(603),
        [anon_sym_CARET] = ACTIONS(603),
        [anon_sym_LT_LT] = ACTIONS(603),
        [anon_sym_GT_GT] = ACTIONS(603),
        [anon_sym_and] = ACTIONS(603),
        [anon_sym_or] = ACTIONS(603),
        [anon_sym_LBRACK] = ACTIONS(603),
        [anon_sym_RBRACK] = ACTIONS(603),
        [anon_sym_RBRACE] = ACTIONS(603),
        [sym_comment] = ACTIONS(81),
        [sym__newline] = ACTIONS(603),
    },
    [353] = {
        [anon_sym_COMMA] = ACTIONS(733),
        [anon_sym_RBRACK] = ACTIONS(731),
        [sym_comment] = ACTIONS(81),
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
        [anon_sym_not] = ACTIONS(247),
        [anon_sym_LBRACK] = ACTIONS(141),
        [anon_sym_RBRACK] = ACTIONS(735),
        [anon_sym_LBRACE] = ACTIONS(143),
        [sym_number] = ACTIONS(145),
        [sym_identifier] = ACTIONS(147),
        [sym_comment] = ACTIONS(81),
    },
    [355] = {
        [anon_sym_LPAREN] = ACTIONS(611),
        [anon_sym_RPAREN] = ACTIONS(611),
        [anon_sym_COMMA] = ACTIONS(611),
        [anon_sym_as] = ACTIONS(611),
        [anon_sym_STAR] = ACTIONS(613),
        [anon_sym_COLON] = ACTIONS(611),
        [anon_sym_for] = ACTIONS(611),
        [anon_sym_in] = ACTIONS(611),
        [anon_sym_PLUS] = ACTIONS(611),
        [anon_sym_DASH] = ACTIONS(611),
        [anon_sym_SLASH] = ACTIONS(611),
        [anon_sym_STAR_STAR] = ACTIONS(611),
        [anon_sym_PIPE] = ACTIONS(611),
        [anon_sym_AMP] = ACTIONS(611),
        [anon_sym_CARET] = ACTIONS(611),
        [anon_sym_LT_LT] = ACTIONS(611),
        [anon_sym_GT_GT] = ACTIONS(611),
        [anon_sym_and] = ACTIONS(611),
        [anon_sym_or] = ACTIONS(611),
        [anon_sym_LBRACK] = ACTIONS(611),
        [anon_sym_RBRACK] = ACTIONS(611),
        [anon_sym_RBRACE] = ACTIONS(611),
        [sym_comment] = ACTIONS(81),
        [sym__newline] = ACTIONS(611),
    },
    [356] = {
        [anon_sym_LPAREN] = ACTIONS(615),
        [anon_sym_RPAREN] = ACTIONS(615),
        [anon_sym_COMMA] = ACTIONS(615),
        [anon_sym_as] = ACTIONS(615),
        [anon_sym_STAR] = ACTIONS(617),
        [anon_sym_COLON] = ACTIONS(615),
        [anon_sym_for] = ACTIONS(615),
        [anon_sym_in] = ACTIONS(615),
        [anon_sym_PLUS] = ACTIONS(615),
        [anon_sym_DASH] = ACTIONS(615),
        [anon_sym_SLASH] = ACTIONS(615),
        [anon_sym_STAR_STAR] = ACTIONS(615),
        [anon_sym_PIPE] = ACTIONS(615),
        [anon_sym_AMP] = ACTIONS(615),
        [anon_sym_CARET] = ACTIONS(615),
        [anon_sym_LT_LT] = ACTIONS(615),
        [anon_sym_GT_GT] = ACTIONS(615),
        [anon_sym_and] = ACTIONS(615),
        [anon_sym_or] = ACTIONS(615),
        [anon_sym_LBRACK] = ACTIONS(615),
        [anon_sym_RBRACK] = ACTIONS(615),
        [anon_sym_RBRACE] = ACTIONS(615),
        [sym_comment] = ACTIONS(81),
        [sym__newline] = ACTIONS(615),
    },
    [357] = {
        [anon_sym_in] = ACTIONS(737),
        [sym_comment] = ACTIONS(81),
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
        [anon_sym_not] = ACTIONS(621),
        [anon_sym_LBRACK] = ACTIONS(141),
        [anon_sym_LBRACE] = ACTIONS(143),
        [sym_number] = ACTIONS(145),
        [sym_identifier] = ACTIONS(147),
        [sym_comment] = ACTIONS(81),
    },
    [359] = {
        [anon_sym_LPAREN] = ACTIONS(259),
        [anon_sym_STAR] = ACTIONS(623),
        [anon_sym_PLUS] = ACTIONS(625),
        [anon_sym_DASH] = ACTIONS(625),
        [anon_sym_SLASH] = ACTIONS(627),
        [anon_sym_STAR_STAR] = ACTIONS(629),
        [anon_sym_PIPE] = ACTIONS(631),
        [anon_sym_AMP] = ACTIONS(633),
        [anon_sym_CARET] = ACTIONS(635),
        [anon_sym_LT_LT] = ACTIONS(625),
        [anon_sym_GT_GT] = ACTIONS(625),
        [anon_sym_and] = ACTIONS(633),
        [anon_sym_or] = ACTIONS(631),
        [anon_sym_LBRACK] = ACTIONS(275),
        [anon_sym_RBRACK] = ACTIONS(739),
        [sym_comment] = ACTIONS(81),
    },
    [360] = {
        [anon_sym_LPAREN] = ACTIONS(639),
        [anon_sym_RPAREN] = ACTIONS(639),
        [anon_sym_COMMA] = ACTIONS(639),
        [anon_sym_as] = ACTIONS(639),
        [anon_sym_STAR] = ACTIONS(641),
        [anon_sym_COLON] = ACTIONS(639),
        [anon_sym_for] = ACTIONS(639),
        [anon_sym_in] = ACTIONS(639),
        [anon_sym_PLUS] = ACTIONS(639),
        [anon_sym_DASH] = ACTIONS(639),
        [anon_sym_SLASH] = ACTIONS(639),
        [anon_sym_STAR_STAR] = ACTIONS(639),
        [anon_sym_PIPE] = ACTIONS(639),
        [anon_sym_AMP] = ACTIONS(639),
        [anon_sym_CARET] = ACTIONS(639),
        [anon_sym_LT_LT] = ACTIONS(639),
        [anon_sym_GT_GT] = ACTIONS(639),
        [anon_sym_and] = ACTIONS(639),
        [anon_sym_or] = ACTIONS(639),
        [anon_sym_LBRACK] = ACTIONS(639),
        [anon_sym_RBRACK] = ACTIONS(639),
        [anon_sym_RBRACE] = ACTIONS(639),
        [sym_comment] = ACTIONS(81),
        [sym__newline] = ACTIONS(639),
    },
    [361] = {
        [anon_sym_LPAREN] = ACTIONS(195),
        [anon_sym_COMMA] = ACTIONS(643),
        [anon_sym_STAR] = ACTIONS(645),
        [anon_sym_PLUS] = ACTIONS(643),
        [anon_sym_DASH] = ACTIONS(643),
        [anon_sym_SLASH] = ACTIONS(643),
        [anon_sym_STAR_STAR] = ACTIONS(643),
        [anon_sym_PIPE] = ACTIONS(643),
        [anon_sym_AMP] = ACTIONS(643),
        [anon_sym_CARET] = ACTIONS(643),
        [anon_sym_LT_LT] = ACTIONS(643),
        [anon_sym_GT_GT] = ACTIONS(643),
        [anon_sym_and] = ACTIONS(643),
        [anon_sym_or] = ACTIONS(643),
        [anon_sym_LBRACK] = ACTIONS(643),
        [sym_comment] = ACTIONS(81),
        [sym__newline] = ACTIONS(643),
    },
    [362] = {
        [aux_sym_dotted_name_repeat1] = STATE(377),
        [anon_sym_DOT] = ACTIONS(741),
        [anon_sym_LPAREN] = ACTIONS(743),
        [anon_sym_RPAREN] = ACTIONS(743),
        [anon_sym_COMMA] = ACTIONS(743),
        [anon_sym_as] = ACTIONS(743),
        [sym_comment] = ACTIONS(81),
        [sym__newline] = ACTIONS(743),
    },
    [363] = {
        [sym_arguments] = STATE(366),
        [anon_sym_LPAREN] = ACTIONS(745),
        [sym_comment] = ACTIONS(81),
        [sym__newline] = ACTIONS(747),
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
        [anon_sym_not] = ACTIONS(243),
        [anon_sym_LBRACK] = ACTIONS(141),
        [anon_sym_LBRACE] = ACTIONS(143),
        [sym_number] = ACTIONS(145),
        [sym_identifier] = ACTIONS(147),
        [sym_comment] = ACTIONS(81),
    },
    [365] = {
        [anon_sym_def] = ACTIONS(749),
        [anon_sym_class] = ACTIONS(749),
        [anon_sym_AT] = ACTIONS(749),
        [sym_comment] = ACTIONS(81),
    },
    [366] = {
        [sym_comment] = ACTIONS(81),
        [sym__newline] = ACTIONS(751),
    },
    [367] = {
        [anon_sym_def] = ACTIONS(753),
        [anon_sym_class] = ACTIONS(753),
        [anon_sym_AT] = ACTIONS(753),
        [sym_comment] = ACTIONS(81),
    },
    [368] = {
        [aux_sym_print_statement_repeat1] = STATE(371),
        [anon_sym_LPAREN] = ACTIONS(259),
        [anon_sym_RPAREN] = ACTIONS(755),
        [anon_sym_COMMA] = ACTIONS(757),
        [anon_sym_STAR] = ACTIONS(327),
        [anon_sym_PLUS] = ACTIONS(329),
        [anon_sym_DASH] = ACTIONS(329),
        [anon_sym_SLASH] = ACTIONS(331),
        [anon_sym_STAR_STAR] = ACTIONS(333),
        [anon_sym_PIPE] = ACTIONS(335),
        [anon_sym_AMP] = ACTIONS(337),
        [anon_sym_CARET] = ACTIONS(339),
        [anon_sym_LT_LT] = ACTIONS(329),
        [anon_sym_GT_GT] = ACTIONS(329),
        [anon_sym_and] = ACTIONS(337),
        [anon_sym_or] = ACTIONS(335),
        [anon_sym_LBRACK] = ACTIONS(275),
        [sym_comment] = ACTIONS(81),
    },
    [369] = {
        [sym_comment] = ACTIONS(81),
        [sym__newline] = ACTIONS(759),
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
        [anon_sym_not] = ACTIONS(243),
        [anon_sym_LBRACK] = ACTIONS(141),
        [anon_sym_LBRACE] = ACTIONS(143),
        [sym_number] = ACTIONS(145),
        [sym_identifier] = ACTIONS(147),
        [sym_comment] = ACTIONS(81),
    },
    [371] = {
        [anon_sym_RPAREN] = ACTIONS(761),
        [anon_sym_COMMA] = ACTIONS(763),
        [sym_comment] = ACTIONS(81),
    },
    [372] = {
        [sym_comment] = ACTIONS(81),
        [sym__newline] = ACTIONS(765),
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
        [anon_sym_not] = ACTIONS(243),
        [anon_sym_LBRACK] = ACTIONS(141),
        [anon_sym_LBRACE] = ACTIONS(143),
        [sym_number] = ACTIONS(145),
        [sym_identifier] = ACTIONS(147),
        [sym_comment] = ACTIONS(81),
    },
    [374] = {
        [anon_sym_LPAREN] = ACTIONS(259),
        [anon_sym_RPAREN] = ACTIONS(507),
        [anon_sym_COMMA] = ACTIONS(507),
        [anon_sym_STAR] = ACTIONS(327),
        [anon_sym_PLUS] = ACTIONS(329),
        [anon_sym_DASH] = ACTIONS(329),
        [anon_sym_SLASH] = ACTIONS(331),
        [anon_sym_STAR_STAR] = ACTIONS(333),
        [anon_sym_PIPE] = ACTIONS(335),
        [anon_sym_AMP] = ACTIONS(337),
        [anon_sym_CARET] = ACTIONS(339),
        [anon_sym_LT_LT] = ACTIONS(329),
        [anon_sym_GT_GT] = ACTIONS(329),
        [anon_sym_and] = ACTIONS(337),
        [anon_sym_or] = ACTIONS(335),
        [anon_sym_LBRACK] = ACTIONS(275),
        [sym_comment] = ACTIONS(81),
    },
    [375] = {
        [anon_sym_LPAREN] = ACTIONS(259),
        [anon_sym_RPAREN] = ACTIONS(509),
        [anon_sym_COMMA] = ACTIONS(509),
        [anon_sym_STAR] = ACTIONS(327),
        [anon_sym_PLUS] = ACTIONS(329),
        [anon_sym_DASH] = ACTIONS(329),
        [anon_sym_SLASH] = ACTIONS(331),
        [anon_sym_STAR_STAR] = ACTIONS(333),
        [anon_sym_PIPE] = ACTIONS(335),
        [anon_sym_AMP] = ACTIONS(337),
        [anon_sym_CARET] = ACTIONS(339),
        [anon_sym_LT_LT] = ACTIONS(329),
        [anon_sym_GT_GT] = ACTIONS(329),
        [anon_sym_and] = ACTIONS(337),
        [anon_sym_or] = ACTIONS(335),
        [anon_sym_LBRACK] = ACTIONS(275),
        [sym_comment] = ACTIONS(81),
    },
    [376] = {
        [sym_identifier] = ACTIONS(767),
        [sym_comment] = ACTIONS(81),
    },
    [377] = {
        [anon_sym_import] = ACTIONS(769),
        [anon_sym_DOT] = ACTIONS(771),
        [anon_sym_LPAREN] = ACTIONS(769),
        [anon_sym_RPAREN] = ACTIONS(769),
        [anon_sym_COMMA] = ACTIONS(769),
        [anon_sym_as] = ACTIONS(769),
        [sym_comment] = ACTIONS(81),
        [sym__newline] = ACTIONS(769),
    },
    [378] = {
        [sym_identifier] = ACTIONS(773),
        [sym_comment] = ACTIONS(81),
    },
    [379] = {
        [anon_sym_import] = ACTIONS(775),
        [anon_sym_DOT] = ACTIONS(775),
        [anon_sym_LPAREN] = ACTIONS(775),
        [anon_sym_RPAREN] = ACTIONS(775),
        [anon_sym_COMMA] = ACTIONS(775),
        [anon_sym_as] = ACTIONS(775),
        [sym_comment] = ACTIONS(81),
        [sym__newline] = ACTIONS(775),
    },
    [380] = {
        [anon_sym_import] = ACTIONS(777),
        [anon_sym_DOT] = ACTIONS(777),
        [anon_sym_LPAREN] = ACTIONS(777),
        [anon_sym_RPAREN] = ACTIONS(777),
        [anon_sym_COMMA] = ACTIONS(777),
        [anon_sym_as] = ACTIONS(777),
        [sym_comment] = ACTIONS(81),
        [sym__newline] = ACTIONS(777),
    },
    [381] = {
        [anon_sym_LPAREN] = ACTIONS(779),
        [anon_sym_COLON] = ACTIONS(781),
        [sym_comment] = ACTIONS(81),
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
        [anon_sym_not] = ACTIONS(243),
        [anon_sym_LBRACK] = ACTIONS(141),
        [anon_sym_LBRACE] = ACTIONS(143),
        [sym_number] = ACTIONS(145),
        [sym_identifier] = ACTIONS(147),
        [sym_comment] = ACTIONS(81),
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
        [anon_sym_import] = ACTIONS(91),
        [anon_sym_from] = ACTIONS(93),
        [anon_sym_print] = ACTIONS(95),
        [anon_sym_return] = ACTIONS(97),
        [anon_sym_del] = ACTIONS(99),
        [sym_pass_statement] = ACTIONS(101),
        [sym_break_statement] = ACTIONS(101),
        [sym_continue_statement] = ACTIONS(101),
        [anon_sym_not] = ACTIONS(119),
        [anon_sym_LBRACK] = ACTIONS(121),
        [anon_sym_LBRACE] = ACTIONS(123),
        [sym_number] = ACTIONS(125),
        [sym_identifier] = ACTIONS(127),
        [sym_comment] = ACTIONS(81),
        [sym__indent] = ACTIONS(783),
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
        [anon_sym_import] = ACTIONS(91),
        [anon_sym_from] = ACTIONS(93),
        [anon_sym_print] = ACTIONS(95),
        [anon_sym_return] = ACTIONS(97),
        [anon_sym_del] = ACTIONS(99),
        [sym_pass_statement] = ACTIONS(101),
        [sym_break_statement] = ACTIONS(101),
        [sym_continue_statement] = ACTIONS(101),
        [anon_sym_if] = ACTIONS(785),
        [anon_sym_for] = ACTIONS(787),
        [anon_sym_while] = ACTIONS(789),
        [anon_sym_try] = ACTIONS(791),
        [anon_sym_with] = ACTIONS(793),
        [anon_sym_def] = ACTIONS(795),
        [anon_sym_class] = ACTIONS(797),
        [anon_sym_AT] = ACTIONS(117),
        [anon_sym_not] = ACTIONS(119),
        [anon_sym_LBRACK] = ACTIONS(121),
        [anon_sym_LBRACE] = ACTIONS(123),
        [sym_number] = ACTIONS(125),
        [sym_identifier] = ACTIONS(127),
        [sym_comment] = ACTIONS(81),
        [sym__dedent] = ACTIONS(799),
    },
    [385] = {
        [sym_comment] = ACTIONS(81),
        [sym__newline] = ACTIONS(799),
    },
    [386] = {
        [ts_builtin_sym_end] = ACTIONS(801),
        [anon_sym_SEMI] = ACTIONS(801),
        [anon_sym_import] = ACTIONS(803),
        [anon_sym_from] = ACTIONS(803),
        [anon_sym_print] = ACTIONS(803),
        [anon_sym_return] = ACTIONS(803),
        [anon_sym_del] = ACTIONS(803),
        [sym_pass_statement] = ACTIONS(803),
        [sym_break_statement] = ACTIONS(803),
        [sym_continue_statement] = ACTIONS(803),
        [anon_sym_if] = ACTIONS(803),
        [anon_sym_for] = ACTIONS(803),
        [anon_sym_while] = ACTIONS(803),
        [anon_sym_try] = ACTIONS(803),
        [anon_sym_with] = ACTIONS(803),
        [anon_sym_def] = ACTIONS(803),
        [anon_sym_class] = ACTIONS(803),
        [anon_sym_AT] = ACTIONS(801),
        [anon_sym_not] = ACTIONS(803),
        [anon_sym_LBRACK] = ACTIONS(801),
        [anon_sym_LBRACE] = ACTIONS(801),
        [sym_number] = ACTIONS(803),
        [sym_identifier] = ACTIONS(805),
        [sym_comment] = ACTIONS(81),
        [sym__newline] = ACTIONS(801),
    },
    [387] = {
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
        [anon_sym_elif] = ACTIONS(809),
        [anon_sym_else] = ACTIONS(809),
        [anon_sym_for] = ACTIONS(809),
        [anon_sym_while] = ACTIONS(809),
        [anon_sym_try] = ACTIONS(809),
        [anon_sym_except] = ACTIONS(809),
        [anon_sym_finally] = ACTIONS(809),
        [anon_sym_with] = ACTIONS(809),
        [anon_sym_def] = ACTIONS(809),
        [anon_sym_class] = ACTIONS(809),
        [anon_sym_AT] = ACTIONS(807),
        [anon_sym_not] = ACTIONS(809),
        [anon_sym_LBRACK] = ACTIONS(807),
        [anon_sym_LBRACE] = ACTIONS(807),
        [sym_number] = ACTIONS(809),
        [sym_identifier] = ACTIONS(811),
        [sym_comment] = ACTIONS(81),
        [sym__newline] = ACTIONS(807),
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
        [anon_sym_not] = ACTIONS(139),
        [anon_sym_LBRACK] = ACTIONS(141),
        [anon_sym_LBRACE] = ACTIONS(143),
        [sym_number] = ACTIONS(145),
        [sym_identifier] = ACTIONS(147),
        [sym_comment] = ACTIONS(81),
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
        [anon_sym_not] = ACTIONS(149),
        [anon_sym_LBRACK] = ACTIONS(141),
        [anon_sym_LBRACE] = ACTIONS(143),
        [sym_number] = ACTIONS(145),
        [sym_identifier] = ACTIONS(147),
        [sym_comment] = ACTIONS(81),
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
        [anon_sym_not] = ACTIONS(139),
        [anon_sym_LBRACK] = ACTIONS(141),
        [anon_sym_LBRACE] = ACTIONS(143),
        [sym_number] = ACTIONS(145),
        [sym_identifier] = ACTIONS(147),
        [sym_comment] = ACTIONS(81),
    },
    [391] = {
        [anon_sym_COLON] = ACTIONS(813),
        [sym_comment] = ACTIONS(81),
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
        [anon_sym_not] = ACTIONS(153),
        [anon_sym_LBRACK] = ACTIONS(141),
        [anon_sym_LBRACE] = ACTIONS(143),
        [sym_number] = ACTIONS(145),
        [sym_identifier] = ACTIONS(147),
        [sym_comment] = ACTIONS(81),
    },
    [393] = {
        [sym_identifier] = ACTIONS(815),
        [sym_comment] = ACTIONS(81),
    },
    [394] = {
        [sym_identifier] = ACTIONS(817),
        [sym_comment] = ACTIONS(81),
    },
    [395] = {
        [anon_sym_import] = ACTIONS(175),
        [anon_sym_from] = ACTIONS(175),
        [anon_sym_print] = ACTIONS(175),
        [anon_sym_return] = ACTIONS(175),
        [anon_sym_del] = ACTIONS(175),
        [sym_pass_statement] = ACTIONS(175),
        [sym_break_statement] = ACTIONS(175),
        [sym_continue_statement] = ACTIONS(175),
        [anon_sym_if] = ACTIONS(175),
        [anon_sym_for] = ACTIONS(175),
        [anon_sym_while] = ACTIONS(175),
        [anon_sym_try] = ACTIONS(175),
        [anon_sym_with] = ACTIONS(175),
        [anon_sym_def] = ACTIONS(175),
        [anon_sym_class] = ACTIONS(175),
        [anon_sym_AT] = ACTIONS(173),
        [anon_sym_not] = ACTIONS(175),
        [anon_sym_LBRACK] = ACTIONS(173),
        [anon_sym_LBRACE] = ACTIONS(173),
        [sym_number] = ACTIONS(175),
        [sym_identifier] = ACTIONS(177),
        [sym_comment] = ACTIONS(81),
        [sym__dedent] = ACTIONS(173),
    },
    [396] = {
        [sym_comment] = ACTIONS(81),
        [sym__newline] = ACTIONS(819),
    },
    [397] = {
        [anon_sym_import] = ACTIONS(183),
        [anon_sym_from] = ACTIONS(183),
        [anon_sym_print] = ACTIONS(183),
        [anon_sym_return] = ACTIONS(183),
        [anon_sym_del] = ACTIONS(183),
        [sym_pass_statement] = ACTIONS(183),
        [sym_break_statement] = ACTIONS(183),
        [sym_continue_statement] = ACTIONS(183),
        [anon_sym_if] = ACTIONS(183),
        [anon_sym_for] = ACTIONS(183),
        [anon_sym_while] = ACTIONS(183),
        [anon_sym_try] = ACTIONS(183),
        [anon_sym_with] = ACTIONS(183),
        [anon_sym_def] = ACTIONS(183),
        [anon_sym_class] = ACTIONS(183),
        [anon_sym_AT] = ACTIONS(181),
        [anon_sym_not] = ACTIONS(183),
        [anon_sym_LBRACK] = ACTIONS(181),
        [anon_sym_LBRACE] = ACTIONS(181),
        [sym_number] = ACTIONS(183),
        [sym_identifier] = ACTIONS(185),
        [sym_comment] = ACTIONS(81),
        [sym__dedent] = ACTIONS(181),
    },
    [398] = {
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
        [sym_number] = ACTIONS(189),
        [sym_identifier] = ACTIONS(191),
        [sym_comment] = ACTIONS(81),
        [sym__dedent] = ACTIONS(187),
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
        [anon_sym_import] = ACTIONS(91),
        [anon_sym_from] = ACTIONS(93),
        [anon_sym_print] = ACTIONS(95),
        [anon_sym_return] = ACTIONS(97),
        [anon_sym_del] = ACTIONS(99),
        [sym_pass_statement] = ACTIONS(101),
        [sym_break_statement] = ACTIONS(101),
        [sym_continue_statement] = ACTIONS(101),
        [anon_sym_if] = ACTIONS(785),
        [anon_sym_for] = ACTIONS(787),
        [anon_sym_while] = ACTIONS(789),
        [anon_sym_try] = ACTIONS(791),
        [anon_sym_with] = ACTIONS(793),
        [anon_sym_def] = ACTIONS(795),
        [anon_sym_class] = ACTIONS(797),
        [anon_sym_AT] = ACTIONS(117),
        [anon_sym_not] = ACTIONS(119),
        [anon_sym_LBRACK] = ACTIONS(121),
        [anon_sym_LBRACE] = ACTIONS(123),
        [sym_number] = ACTIONS(125),
        [sym_identifier] = ACTIONS(127),
        [sym_comment] = ACTIONS(81),
        [sym__dedent] = ACTIONS(821),
    },
    [400] = {
        [sym_function_definition] = STATE(401),
        [sym_class_definition] = STATE(401),
        [sym_decorator] = STATE(30),
        [anon_sym_def] = ACTIONS(823),
        [anon_sym_class] = ACTIONS(825),
        [anon_sym_AT] = ACTIONS(117),
        [sym_comment] = ACTIONS(81),
    },
    [401] = {
        [anon_sym_import] = ACTIONS(225),
        [anon_sym_from] = ACTIONS(225),
        [anon_sym_print] = ACTIONS(225),
        [anon_sym_return] = ACTIONS(225),
        [anon_sym_del] = ACTIONS(225),
        [sym_pass_statement] = ACTIONS(225),
        [sym_break_statement] = ACTIONS(225),
        [sym_continue_statement] = ACTIONS(225),
        [anon_sym_if] = ACTIONS(225),
        [anon_sym_for] = ACTIONS(225),
        [anon_sym_while] = ACTIONS(225),
        [anon_sym_try] = ACTIONS(225),
        [anon_sym_with] = ACTIONS(225),
        [anon_sym_def] = ACTIONS(225),
        [anon_sym_class] = ACTIONS(225),
        [anon_sym_AT] = ACTIONS(223),
        [anon_sym_not] = ACTIONS(225),
        [anon_sym_LBRACK] = ACTIONS(223),
        [anon_sym_LBRACE] = ACTIONS(223),
        [sym_number] = ACTIONS(225),
        [sym_identifier] = ACTIONS(227),
        [sym_comment] = ACTIONS(81),
        [sym__dedent] = ACTIONS(223),
    },
    [402] = {
        [ts_builtin_sym_end] = ACTIONS(827),
        [anon_sym_SEMI] = ACTIONS(827),
        [anon_sym_import] = ACTIONS(829),
        [anon_sym_from] = ACTIONS(829),
        [anon_sym_print] = ACTIONS(829),
        [anon_sym_return] = ACTIONS(829),
        [anon_sym_del] = ACTIONS(829),
        [sym_pass_statement] = ACTIONS(829),
        [sym_break_statement] = ACTIONS(829),
        [sym_continue_statement] = ACTIONS(829),
        [anon_sym_if] = ACTIONS(829),
        [anon_sym_elif] = ACTIONS(829),
        [anon_sym_else] = ACTIONS(829),
        [anon_sym_for] = ACTIONS(829),
        [anon_sym_while] = ACTIONS(829),
        [anon_sym_try] = ACTIONS(829),
        [anon_sym_except] = ACTIONS(829),
        [anon_sym_finally] = ACTIONS(829),
        [anon_sym_with] = ACTIONS(829),
        [anon_sym_def] = ACTIONS(829),
        [anon_sym_class] = ACTIONS(829),
        [anon_sym_AT] = ACTIONS(827),
        [anon_sym_not] = ACTIONS(829),
        [anon_sym_LBRACK] = ACTIONS(827),
        [anon_sym_LBRACE] = ACTIONS(827),
        [sym_number] = ACTIONS(829),
        [sym_identifier] = ACTIONS(831),
        [sym_comment] = ACTIONS(81),
        [sym__newline] = ACTIONS(827),
    },
    [403] = {
        [anon_sym_import] = ACTIONS(235),
        [anon_sym_from] = ACTIONS(235),
        [anon_sym_print] = ACTIONS(235),
        [anon_sym_return] = ACTIONS(235),
        [anon_sym_del] = ACTIONS(235),
        [sym_pass_statement] = ACTIONS(235),
        [sym_break_statement] = ACTIONS(235),
        [sym_continue_statement] = ACTIONS(235),
        [anon_sym_if] = ACTIONS(235),
        [anon_sym_for] = ACTIONS(235),
        [anon_sym_while] = ACTIONS(235),
        [anon_sym_try] = ACTIONS(235),
        [anon_sym_with] = ACTIONS(235),
        [anon_sym_def] = ACTIONS(235),
        [anon_sym_class] = ACTIONS(235),
        [anon_sym_AT] = ACTIONS(233),
        [anon_sym_not] = ACTIONS(235),
        [anon_sym_LBRACK] = ACTIONS(233),
        [anon_sym_LBRACE] = ACTIONS(233),
        [sym_number] = ACTIONS(235),
        [sym_identifier] = ACTIONS(237),
        [sym_comment] = ACTIONS(81),
        [sym__dedent] = ACTIONS(233),
    },
    [404] = {
        [anon_sym_import] = ACTIONS(689),
        [anon_sym_from] = ACTIONS(689),
        [anon_sym_print] = ACTIONS(689),
        [anon_sym_return] = ACTIONS(689),
        [anon_sym_del] = ACTIONS(689),
        [sym_pass_statement] = ACTIONS(689),
        [sym_break_statement] = ACTIONS(689),
        [sym_continue_statement] = ACTIONS(689),
        [anon_sym_if] = ACTIONS(689),
        [anon_sym_for] = ACTIONS(689),
        [anon_sym_while] = ACTIONS(689),
        [anon_sym_try] = ACTIONS(689),
        [anon_sym_with] = ACTIONS(689),
        [anon_sym_def] = ACTIONS(689),
        [anon_sym_class] = ACTIONS(689),
        [anon_sym_AT] = ACTIONS(687),
        [anon_sym_not] = ACTIONS(689),
        [anon_sym_LBRACK] = ACTIONS(687),
        [anon_sym_LBRACE] = ACTIONS(687),
        [sym_number] = ACTIONS(689),
        [sym_identifier] = ACTIONS(691),
        [sym_comment] = ACTIONS(81),
        [sym__dedent] = ACTIONS(687),
    },
    [405] = {
        [anon_sym_LPAREN] = ACTIONS(833),
        [anon_sym_COLON] = ACTIONS(835),
        [sym_comment] = ACTIONS(81),
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
        [anon_sym_not] = ACTIONS(243),
        [anon_sym_LBRACK] = ACTIONS(141),
        [anon_sym_LBRACE] = ACTIONS(143),
        [sym_number] = ACTIONS(145),
        [sym_identifier] = ACTIONS(147),
        [sym_comment] = ACTIONS(81),
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
        [anon_sym_import] = ACTIONS(91),
        [anon_sym_from] = ACTIONS(93),
        [anon_sym_print] = ACTIONS(95),
        [anon_sym_return] = ACTIONS(97),
        [anon_sym_del] = ACTIONS(99),
        [sym_pass_statement] = ACTIONS(101),
        [sym_break_statement] = ACTIONS(101),
        [sym_continue_statement] = ACTIONS(101),
        [anon_sym_not] = ACTIONS(119),
        [anon_sym_LBRACK] = ACTIONS(121),
        [anon_sym_LBRACE] = ACTIONS(123),
        [sym_number] = ACTIONS(125),
        [sym_identifier] = ACTIONS(127),
        [sym_comment] = ACTIONS(81),
        [sym__indent] = ACTIONS(837),
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
        [anon_sym_import] = ACTIONS(91),
        [anon_sym_from] = ACTIONS(93),
        [anon_sym_print] = ACTIONS(95),
        [anon_sym_return] = ACTIONS(97),
        [anon_sym_del] = ACTIONS(99),
        [sym_pass_statement] = ACTIONS(101),
        [sym_break_statement] = ACTIONS(101),
        [sym_continue_statement] = ACTIONS(101),
        [anon_sym_if] = ACTIONS(785),
        [anon_sym_for] = ACTIONS(787),
        [anon_sym_while] = ACTIONS(789),
        [anon_sym_try] = ACTIONS(791),
        [anon_sym_with] = ACTIONS(793),
        [anon_sym_def] = ACTIONS(795),
        [anon_sym_class] = ACTIONS(797),
        [anon_sym_AT] = ACTIONS(117),
        [anon_sym_not] = ACTIONS(119),
        [anon_sym_LBRACK] = ACTIONS(121),
        [anon_sym_LBRACE] = ACTIONS(123),
        [sym_number] = ACTIONS(125),
        [sym_identifier] = ACTIONS(127),
        [sym_comment] = ACTIONS(81),
        [sym__dedent] = ACTIONS(839),
    },
    [409] = {
        [sym_comment] = ACTIONS(81),
        [sym__newline] = ACTIONS(839),
    },
    [410] = {
        [anon_sym_import] = ACTIONS(803),
        [anon_sym_from] = ACTIONS(803),
        [anon_sym_print] = ACTIONS(803),
        [anon_sym_return] = ACTIONS(803),
        [anon_sym_del] = ACTIONS(803),
        [sym_pass_statement] = ACTIONS(803),
        [sym_break_statement] = ACTIONS(803),
        [sym_continue_statement] = ACTIONS(803),
        [anon_sym_if] = ACTIONS(803),
        [anon_sym_for] = ACTIONS(803),
        [anon_sym_while] = ACTIONS(803),
        [anon_sym_try] = ACTIONS(803),
        [anon_sym_with] = ACTIONS(803),
        [anon_sym_def] = ACTIONS(803),
        [anon_sym_class] = ACTIONS(803),
        [anon_sym_AT] = ACTIONS(801),
        [anon_sym_not] = ACTIONS(803),
        [anon_sym_LBRACK] = ACTIONS(801),
        [anon_sym_LBRACE] = ACTIONS(801),
        [sym_number] = ACTIONS(803),
        [sym_identifier] = ACTIONS(805),
        [sym_comment] = ACTIONS(81),
        [sym__dedent] = ACTIONS(801),
    },
    [411] = {
        [anon_sym_import] = ACTIONS(809),
        [anon_sym_from] = ACTIONS(809),
        [anon_sym_print] = ACTIONS(809),
        [anon_sym_return] = ACTIONS(809),
        [anon_sym_del] = ACTIONS(809),
        [sym_pass_statement] = ACTIONS(809),
        [sym_break_statement] = ACTIONS(809),
        [sym_continue_statement] = ACTIONS(809),
        [anon_sym_if] = ACTIONS(809),
        [anon_sym_elif] = ACTIONS(809),
        [anon_sym_else] = ACTIONS(809),
        [anon_sym_for] = ACTIONS(809),
        [anon_sym_while] = ACTIONS(809),
        [anon_sym_try] = ACTIONS(809),
        [anon_sym_except] = ACTIONS(809),
        [anon_sym_finally] = ACTIONS(809),
        [anon_sym_with] = ACTIONS(809),
        [anon_sym_def] = ACTIONS(809),
        [anon_sym_class] = ACTIONS(809),
        [anon_sym_AT] = ACTIONS(807),
        [anon_sym_not] = ACTIONS(809),
        [anon_sym_LBRACK] = ACTIONS(807),
        [anon_sym_LBRACE] = ACTIONS(807),
        [sym_number] = ACTIONS(809),
        [sym_identifier] = ACTIONS(811),
        [sym_comment] = ACTIONS(81),
        [sym__dedent] = ACTIONS(807),
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
        [anon_sym_import] = ACTIONS(91),
        [anon_sym_from] = ACTIONS(93),
        [anon_sym_print] = ACTIONS(95),
        [anon_sym_return] = ACTIONS(97),
        [anon_sym_del] = ACTIONS(99),
        [sym_pass_statement] = ACTIONS(101),
        [sym_break_statement] = ACTIONS(101),
        [sym_continue_statement] = ACTIONS(101),
        [anon_sym_if] = ACTIONS(785),
        [anon_sym_for] = ACTIONS(787),
        [anon_sym_while] = ACTIONS(789),
        [anon_sym_try] = ACTIONS(791),
        [anon_sym_with] = ACTIONS(793),
        [anon_sym_def] = ACTIONS(795),
        [anon_sym_class] = ACTIONS(797),
        [anon_sym_AT] = ACTIONS(117),
        [anon_sym_not] = ACTIONS(119),
        [anon_sym_LBRACK] = ACTIONS(121),
        [anon_sym_LBRACE] = ACTIONS(123),
        [sym_number] = ACTIONS(125),
        [sym_identifier] = ACTIONS(127),
        [sym_comment] = ACTIONS(81),
        [sym__dedent] = ACTIONS(841),
    },
    [413] = {
        [anon_sym_import] = ACTIONS(829),
        [anon_sym_from] = ACTIONS(829),
        [anon_sym_print] = ACTIONS(829),
        [anon_sym_return] = ACTIONS(829),
        [anon_sym_del] = ACTIONS(829),
        [sym_pass_statement] = ACTIONS(829),
        [sym_break_statement] = ACTIONS(829),
        [sym_continue_statement] = ACTIONS(829),
        [anon_sym_if] = ACTIONS(829),
        [anon_sym_elif] = ACTIONS(829),
        [anon_sym_else] = ACTIONS(829),
        [anon_sym_for] = ACTIONS(829),
        [anon_sym_while] = ACTIONS(829),
        [anon_sym_try] = ACTIONS(829),
        [anon_sym_except] = ACTIONS(829),
        [anon_sym_finally] = ACTIONS(829),
        [anon_sym_with] = ACTIONS(829),
        [anon_sym_def] = ACTIONS(829),
        [anon_sym_class] = ACTIONS(829),
        [anon_sym_AT] = ACTIONS(827),
        [anon_sym_not] = ACTIONS(829),
        [anon_sym_LBRACK] = ACTIONS(827),
        [anon_sym_LBRACE] = ACTIONS(827),
        [sym_number] = ACTIONS(829),
        [sym_identifier] = ACTIONS(831),
        [sym_comment] = ACTIONS(81),
        [sym__dedent] = ACTIONS(827),
    },
    [414] = {
        [anon_sym_RPAREN] = ACTIONS(843),
        [sym_comment] = ACTIONS(81),
    },
    [415] = {
        [aux_sym_print_statement_repeat1] = STATE(416),
        [anon_sym_LPAREN] = ACTIONS(259),
        [anon_sym_RPAREN] = ACTIONS(489),
        [anon_sym_COMMA] = ACTIONS(757),
        [anon_sym_STAR] = ACTIONS(327),
        [anon_sym_PLUS] = ACTIONS(329),
        [anon_sym_DASH] = ACTIONS(329),
        [anon_sym_SLASH] = ACTIONS(331),
        [anon_sym_STAR_STAR] = ACTIONS(333),
        [anon_sym_PIPE] = ACTIONS(335),
        [anon_sym_AMP] = ACTIONS(337),
        [anon_sym_CARET] = ACTIONS(339),
        [anon_sym_LT_LT] = ACTIONS(329),
        [anon_sym_GT_GT] = ACTIONS(329),
        [anon_sym_and] = ACTIONS(337),
        [anon_sym_or] = ACTIONS(335),
        [anon_sym_LBRACK] = ACTIONS(275),
        [sym_comment] = ACTIONS(81),
    },
    [416] = {
        [anon_sym_RPAREN] = ACTIONS(505),
        [anon_sym_COMMA] = ACTIONS(763),
        [sym_comment] = ACTIONS(81),
    },
    [417] = {
        [anon_sym_COLON] = ACTIONS(845),
        [sym_comment] = ACTIONS(81),
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
        [anon_sym_import] = ACTIONS(91),
        [anon_sym_from] = ACTIONS(93),
        [anon_sym_print] = ACTIONS(95),
        [anon_sym_return] = ACTIONS(97),
        [anon_sym_del] = ACTIONS(99),
        [sym_pass_statement] = ACTIONS(101),
        [sym_break_statement] = ACTIONS(101),
        [sym_continue_statement] = ACTIONS(101),
        [anon_sym_not] = ACTIONS(119),
        [anon_sym_LBRACK] = ACTIONS(121),
        [anon_sym_LBRACE] = ACTIONS(123),
        [sym_number] = ACTIONS(125),
        [sym_identifier] = ACTIONS(127),
        [sym_comment] = ACTIONS(81),
        [sym__indent] = ACTIONS(837),
    },
    [419] = {
        [anon_sym_import] = ACTIONS(847),
        [anon_sym_from] = ACTIONS(847),
        [anon_sym_print] = ACTIONS(847),
        [anon_sym_return] = ACTIONS(847),
        [anon_sym_del] = ACTIONS(847),
        [sym_pass_statement] = ACTIONS(847),
        [sym_break_statement] = ACTIONS(847),
        [sym_continue_statement] = ACTIONS(847),
        [anon_sym_if] = ACTIONS(847),
        [anon_sym_for] = ACTIONS(847),
        [anon_sym_while] = ACTIONS(847),
        [anon_sym_try] = ACTIONS(847),
        [anon_sym_with] = ACTIONS(847),
        [anon_sym_def] = ACTIONS(847),
        [anon_sym_class] = ACTIONS(847),
        [anon_sym_AT] = ACTIONS(849),
        [anon_sym_not] = ACTIONS(847),
        [anon_sym_LBRACK] = ACTIONS(849),
        [anon_sym_LBRACE] = ACTIONS(849),
        [sym_number] = ACTIONS(847),
        [sym_identifier] = ACTIONS(851),
        [sym_comment] = ACTIONS(81),
        [sym__dedent] = ACTIONS(849),
    },
    [420] = {
        [sym_parameters] = STATE(422),
        [anon_sym_LPAREN] = ACTIONS(853),
        [sym_comment] = ACTIONS(81),
    },
    [421] = {
        [sym_default_parameter] = STATE(428),
        [sym_list_splat_parameter] = STATE(429),
        [sym_dictionary_splat_parameter] = STATE(430),
        [aux_sym_parameters_repeat1] = STATE(431),
        [anon_sym_RPAREN] = ACTIONS(855),
        [anon_sym_STAR] = ACTIONS(857),
        [sym_identifier] = ACTIONS(859),
        [sym_comment] = ACTIONS(81),
    },
    [422] = {
        [anon_sym_COLON] = ACTIONS(861),
        [sym_comment] = ACTIONS(81),
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
        [anon_sym_import] = ACTIONS(91),
        [anon_sym_from] = ACTIONS(93),
        [anon_sym_print] = ACTIONS(95),
        [anon_sym_return] = ACTIONS(97),
        [anon_sym_del] = ACTIONS(99),
        [sym_pass_statement] = ACTIONS(101),
        [sym_break_statement] = ACTIONS(101),
        [sym_continue_statement] = ACTIONS(101),
        [anon_sym_not] = ACTIONS(119),
        [anon_sym_LBRACK] = ACTIONS(121),
        [anon_sym_LBRACE] = ACTIONS(123),
        [sym_number] = ACTIONS(125),
        [sym_identifier] = ACTIONS(127),
        [sym_comment] = ACTIONS(81),
        [sym__indent] = ACTIONS(837),
    },
    [424] = {
        [anon_sym_import] = ACTIONS(863),
        [anon_sym_from] = ACTIONS(863),
        [anon_sym_print] = ACTIONS(863),
        [anon_sym_return] = ACTIONS(863),
        [anon_sym_del] = ACTIONS(863),
        [sym_pass_statement] = ACTIONS(863),
        [sym_break_statement] = ACTIONS(863),
        [sym_continue_statement] = ACTIONS(863),
        [anon_sym_if] = ACTIONS(863),
        [anon_sym_for] = ACTIONS(863),
        [anon_sym_while] = ACTIONS(863),
        [anon_sym_try] = ACTIONS(863),
        [anon_sym_with] = ACTIONS(863),
        [anon_sym_def] = ACTIONS(863),
        [anon_sym_class] = ACTIONS(863),
        [anon_sym_AT] = ACTIONS(865),
        [anon_sym_not] = ACTIONS(863),
        [anon_sym_LBRACK] = ACTIONS(865),
        [anon_sym_LBRACE] = ACTIONS(865),
        [sym_number] = ACTIONS(863),
        [sym_identifier] = ACTIONS(867),
        [sym_comment] = ACTIONS(81),
        [sym__dedent] = ACTIONS(865),
    },
    [425] = {
        [anon_sym_COLON] = ACTIONS(869),
        [sym_comment] = ACTIONS(81),
    },
    [426] = {
        [anon_sym_STAR] = ACTIONS(871),
        [sym_identifier] = ACTIONS(873),
        [sym_comment] = ACTIONS(81),
    },
    [427] = {
        [anon_sym_RPAREN] = ACTIONS(875),
        [anon_sym_COMMA] = ACTIONS(877),
        [anon_sym_EQ] = ACTIONS(879),
        [sym_comment] = ACTIONS(81),
    },
    [428] = {
        [anon_sym_RPAREN] = ACTIONS(875),
        [anon_sym_COMMA] = ACTIONS(877),
        [sym_comment] = ACTIONS(81),
    },
    [429] = {
        [anon_sym_RPAREN] = ACTIONS(875),
        [anon_sym_COMMA] = ACTIONS(881),
        [sym_comment] = ACTIONS(81),
    },
    [430] = {
        [anon_sym_RPAREN] = ACTIONS(875),
        [sym_comment] = ACTIONS(81),
    },
    [431] = {
        [sym_default_parameter] = STATE(433),
        [sym_list_splat_parameter] = STATE(434),
        [sym_dictionary_splat_parameter] = STATE(435),
        [anon_sym_STAR] = ACTIONS(857),
        [sym_identifier] = ACTIONS(883),
        [sym_comment] = ACTIONS(81),
    },
    [432] = {
        [anon_sym_RPAREN] = ACTIONS(885),
        [anon_sym_COMMA] = ACTIONS(887),
        [anon_sym_EQ] = ACTIONS(879),
        [sym_comment] = ACTIONS(81),
    },
    [433] = {
        [anon_sym_RPAREN] = ACTIONS(885),
        [anon_sym_COMMA] = ACTIONS(887),
        [sym_comment] = ACTIONS(81),
    },
    [434] = {
        [anon_sym_RPAREN] = ACTIONS(885),
        [anon_sym_COMMA] = ACTIONS(889),
        [sym_comment] = ACTIONS(81),
    },
    [435] = {
        [anon_sym_RPAREN] = ACTIONS(885),
        [sym_comment] = ACTIONS(81),
    },
    [436] = {
        [anon_sym_COLON] = ACTIONS(891),
        [sym_comment] = ACTIONS(81),
    },
    [437] = {
        [sym_dictionary_splat_parameter] = STATE(439),
        [anon_sym_STAR] = ACTIONS(893),
        [sym_comment] = ACTIONS(81),
    },
    [438] = {
        [anon_sym_STAR] = ACTIONS(871),
        [sym_comment] = ACTIONS(81),
    },
    [439] = {
        [anon_sym_RPAREN] = ACTIONS(895),
        [sym_comment] = ACTIONS(81),
    },
    [440] = {
        [anon_sym_COLON] = ACTIONS(897),
        [sym_comment] = ACTIONS(81),
    },
    [441] = {
        [sym_identifier] = ACTIONS(899),
        [sym_comment] = ACTIONS(81),
    },
    [442] = {
        [anon_sym_RPAREN] = ACTIONS(901),
        [sym_comment] = ACTIONS(81),
    },
    [443] = {
        [anon_sym_RPAREN] = ACTIONS(903),
        [anon_sym_STAR] = ACTIONS(905),
        [sym_identifier] = ACTIONS(907),
        [sym_comment] = ACTIONS(81),
    },
    [444] = {
        [anon_sym_COLON] = ACTIONS(909),
        [sym_comment] = ACTIONS(81),
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
        [anon_sym_not] = ACTIONS(243),
        [anon_sym_LBRACK] = ACTIONS(141),
        [anon_sym_LBRACE] = ACTIONS(143),
        [sym_number] = ACTIONS(145),
        [sym_identifier] = ACTIONS(147),
        [sym_comment] = ACTIONS(81),
    },
    [446] = {
        [anon_sym_LPAREN] = ACTIONS(259),
        [anon_sym_RPAREN] = ACTIONS(911),
        [anon_sym_COMMA] = ACTIONS(911),
        [anon_sym_STAR] = ACTIONS(327),
        [anon_sym_PLUS] = ACTIONS(329),
        [anon_sym_DASH] = ACTIONS(329),
        [anon_sym_SLASH] = ACTIONS(331),
        [anon_sym_STAR_STAR] = ACTIONS(333),
        [anon_sym_PIPE] = ACTIONS(335),
        [anon_sym_AMP] = ACTIONS(337),
        [anon_sym_CARET] = ACTIONS(339),
        [anon_sym_LT_LT] = ACTIONS(329),
        [anon_sym_GT_GT] = ACTIONS(329),
        [anon_sym_and] = ACTIONS(337),
        [anon_sym_or] = ACTIONS(335),
        [anon_sym_LBRACK] = ACTIONS(275),
        [sym_comment] = ACTIONS(81),
    },
    [447] = {
        [anon_sym_COLON] = ACTIONS(913),
        [sym_comment] = ACTIONS(81),
    },
    [448] = {
        [sym_dictionary_splat_parameter] = STATE(449),
        [anon_sym_STAR] = ACTIONS(893),
        [sym_comment] = ACTIONS(81),
    },
    [449] = {
        [anon_sym_RPAREN] = ACTIONS(903),
        [sym_comment] = ACTIONS(81),
    },
    [450] = {
        [anon_sym_RPAREN] = ACTIONS(885),
        [anon_sym_STAR] = ACTIONS(915),
        [sym_identifier] = ACTIONS(917),
        [sym_comment] = ACTIONS(81),
    },
    [451] = {
        [anon_sym_RPAREN] = ACTIONS(919),
        [anon_sym_COMMA] = ACTIONS(919),
        [sym_comment] = ACTIONS(81),
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
        [anon_sym_not] = ACTIONS(153),
        [anon_sym_LBRACK] = ACTIONS(141),
        [anon_sym_LBRACE] = ACTIONS(143),
        [sym_number] = ACTIONS(145),
        [sym_identifier] = ACTIONS(147),
        [sym_comment] = ACTIONS(81),
    },
    [453] = {
        [aux_sym_with_statement_repeat1] = STATE(482),
        [anon_sym_COMMA] = ACTIONS(921),
        [anon_sym_COLON] = ACTIONS(923),
        [sym_comment] = ACTIONS(81),
    },
    [454] = {
        [anon_sym_LPAREN] = ACTIONS(259),
        [anon_sym_COMMA] = ACTIONS(925),
        [anon_sym_as] = ACTIONS(927),
        [anon_sym_STAR] = ACTIONS(929),
        [anon_sym_COLON] = ACTIONS(925),
        [anon_sym_PLUS] = ACTIONS(931),
        [anon_sym_DASH] = ACTIONS(931),
        [anon_sym_SLASH] = ACTIONS(933),
        [anon_sym_STAR_STAR] = ACTIONS(935),
        [anon_sym_PIPE] = ACTIONS(937),
        [anon_sym_AMP] = ACTIONS(939),
        [anon_sym_CARET] = ACTIONS(941),
        [anon_sym_LT_LT] = ACTIONS(931),
        [anon_sym_GT_GT] = ACTIONS(931),
        [anon_sym_and] = ACTIONS(939),
        [anon_sym_or] = ACTIONS(937),
        [anon_sym_LBRACK] = ACTIONS(275),
        [sym_comment] = ACTIONS(81),
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
        [anon_sym_not] = ACTIONS(943),
        [anon_sym_LBRACK] = ACTIONS(141),
        [anon_sym_LBRACE] = ACTIONS(143),
        [sym_number] = ACTIONS(145),
        [sym_identifier] = ACTIONS(147),
        [sym_comment] = ACTIONS(81),
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
        [anon_sym_not] = ACTIONS(153),
        [anon_sym_LBRACK] = ACTIONS(141),
        [anon_sym_LBRACE] = ACTIONS(143),
        [sym_number] = ACTIONS(145),
        [sym_identifier] = ACTIONS(147),
        [sym_comment] = ACTIONS(81),
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
        [anon_sym_not] = ACTIONS(153),
        [anon_sym_LBRACK] = ACTIONS(141),
        [anon_sym_LBRACE] = ACTIONS(143),
        [sym_number] = ACTIONS(145),
        [sym_identifier] = ACTIONS(147),
        [sym_comment] = ACTIONS(81),
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
        [anon_sym_not] = ACTIONS(153),
        [anon_sym_LBRACK] = ACTIONS(141),
        [anon_sym_LBRACE] = ACTIONS(143),
        [sym_number] = ACTIONS(145),
        [sym_identifier] = ACTIONS(147),
        [sym_comment] = ACTIONS(81),
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
        [anon_sym_not] = ACTIONS(153),
        [anon_sym_LBRACK] = ACTIONS(141),
        [anon_sym_LBRACE] = ACTIONS(143),
        [sym_number] = ACTIONS(145),
        [sym_identifier] = ACTIONS(147),
        [sym_comment] = ACTIONS(81),
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
        [anon_sym_not] = ACTIONS(153),
        [anon_sym_LBRACK] = ACTIONS(141),
        [anon_sym_LBRACE] = ACTIONS(143),
        [sym_number] = ACTIONS(145),
        [sym_identifier] = ACTIONS(147),
        [sym_comment] = ACTIONS(81),
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
        [anon_sym_not] = ACTIONS(153),
        [anon_sym_LBRACK] = ACTIONS(141),
        [anon_sym_LBRACE] = ACTIONS(143),
        [sym_number] = ACTIONS(145),
        [sym_identifier] = ACTIONS(147),
        [sym_comment] = ACTIONS(81),
    },
    [462] = {
        [anon_sym_LPAREN] = ACTIONS(259),
        [anon_sym_COMMA] = ACTIONS(315),
        [anon_sym_as] = ACTIONS(315),
        [anon_sym_STAR] = ACTIONS(929),
        [anon_sym_COLON] = ACTIONS(315),
        [anon_sym_PLUS] = ACTIONS(931),
        [anon_sym_DASH] = ACTIONS(931),
        [anon_sym_SLASH] = ACTIONS(933),
        [anon_sym_STAR_STAR] = ACTIONS(935),
        [anon_sym_PIPE] = ACTIONS(315),
        [anon_sym_AMP] = ACTIONS(939),
        [anon_sym_CARET] = ACTIONS(941),
        [anon_sym_LT_LT] = ACTIONS(931),
        [anon_sym_GT_GT] = ACTIONS(931),
        [anon_sym_and] = ACTIONS(939),
        [anon_sym_or] = ACTIONS(315),
        [anon_sym_LBRACK] = ACTIONS(315),
        [sym_comment] = ACTIONS(81),
    },
    [463] = {
        [anon_sym_LPAREN] = ACTIONS(259),
        [anon_sym_COMMA] = ACTIONS(315),
        [anon_sym_as] = ACTIONS(315),
        [anon_sym_STAR] = ACTIONS(929),
        [anon_sym_COLON] = ACTIONS(315),
        [anon_sym_PLUS] = ACTIONS(931),
        [anon_sym_DASH] = ACTIONS(931),
        [anon_sym_SLASH] = ACTIONS(933),
        [anon_sym_STAR_STAR] = ACTIONS(935),
        [anon_sym_PIPE] = ACTIONS(315),
        [anon_sym_AMP] = ACTIONS(315),
        [anon_sym_CARET] = ACTIONS(941),
        [anon_sym_LT_LT] = ACTIONS(931),
        [anon_sym_GT_GT] = ACTIONS(931),
        [anon_sym_and] = ACTIONS(315),
        [anon_sym_or] = ACTIONS(315),
        [anon_sym_LBRACK] = ACTIONS(315),
        [sym_comment] = ACTIONS(81),
    },
    [464] = {
        [anon_sym_LPAREN] = ACTIONS(259),
        [anon_sym_COMMA] = ACTIONS(315),
        [anon_sym_as] = ACTIONS(315),
        [anon_sym_STAR] = ACTIONS(929),
        [anon_sym_COLON] = ACTIONS(315),
        [anon_sym_PLUS] = ACTIONS(315),
        [anon_sym_DASH] = ACTIONS(315),
        [anon_sym_SLASH] = ACTIONS(933),
        [anon_sym_STAR_STAR] = ACTIONS(935),
        [anon_sym_PIPE] = ACTIONS(315),
        [anon_sym_AMP] = ACTIONS(315),
        [anon_sym_CARET] = ACTIONS(315),
        [anon_sym_LT_LT] = ACTIONS(315),
        [anon_sym_GT_GT] = ACTIONS(315),
        [anon_sym_and] = ACTIONS(315),
        [anon_sym_or] = ACTIONS(315),
        [anon_sym_LBRACK] = ACTIONS(315),
        [sym_comment] = ACTIONS(81),
    },
    [465] = {
        [anon_sym_LPAREN] = ACTIONS(259),
        [anon_sym_COMMA] = ACTIONS(315),
        [anon_sym_as] = ACTIONS(315),
        [anon_sym_STAR] = ACTIONS(929),
        [anon_sym_COLON] = ACTIONS(315),
        [anon_sym_PLUS] = ACTIONS(931),
        [anon_sym_DASH] = ACTIONS(931),
        [anon_sym_SLASH] = ACTIONS(933),
        [anon_sym_STAR_STAR] = ACTIONS(935),
        [anon_sym_PIPE] = ACTIONS(315),
        [anon_sym_AMP] = ACTIONS(315),
        [anon_sym_CARET] = ACTIONS(315),
        [anon_sym_LT_LT] = ACTIONS(931),
        [anon_sym_GT_GT] = ACTIONS(931),
        [anon_sym_and] = ACTIONS(315),
        [anon_sym_or] = ACTIONS(315),
        [anon_sym_LBRACK] = ACTIONS(315),
        [sym_comment] = ACTIONS(81),
    },
    [466] = {
        [anon_sym_LPAREN] = ACTIONS(259),
        [anon_sym_COMMA] = ACTIONS(315),
        [anon_sym_as] = ACTIONS(315),
        [anon_sym_STAR] = ACTIONS(317),
        [anon_sym_COLON] = ACTIONS(315),
        [anon_sym_PLUS] = ACTIONS(315),
        [anon_sym_DASH] = ACTIONS(315),
        [anon_sym_SLASH] = ACTIONS(315),
        [anon_sym_STAR_STAR] = ACTIONS(935),
        [anon_sym_PIPE] = ACTIONS(315),
        [anon_sym_AMP] = ACTIONS(315),
        [anon_sym_CARET] = ACTIONS(315),
        [anon_sym_LT_LT] = ACTIONS(315),
        [anon_sym_GT_GT] = ACTIONS(315),
        [anon_sym_and] = ACTIONS(315),
        [anon_sym_or] = ACTIONS(315),
        [anon_sym_LBRACK] = ACTIONS(315),
        [sym_comment] = ACTIONS(81),
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
        [anon_sym_not] = ACTIONS(943),
        [anon_sym_LBRACK] = ACTIONS(141),
        [anon_sym_LBRACE] = ACTIONS(143),
        [sym_number] = ACTIONS(145),
        [sym_identifier] = ACTIONS(147),
        [sym_comment] = ACTIONS(81),
    },
    [468] = {
        [anon_sym_LPAREN] = ACTIONS(259),
        [anon_sym_COMMA] = ACTIONS(945),
        [anon_sym_STAR] = ACTIONS(947),
        [anon_sym_COLON] = ACTIONS(945),
        [anon_sym_PLUS] = ACTIONS(949),
        [anon_sym_DASH] = ACTIONS(949),
        [anon_sym_SLASH] = ACTIONS(951),
        [anon_sym_STAR_STAR] = ACTIONS(953),
        [anon_sym_PIPE] = ACTIONS(955),
        [anon_sym_AMP] = ACTIONS(957),
        [anon_sym_CARET] = ACTIONS(959),
        [anon_sym_LT_LT] = ACTIONS(949),
        [anon_sym_GT_GT] = ACTIONS(949),
        [anon_sym_and] = ACTIONS(957),
        [anon_sym_or] = ACTIONS(955),
        [anon_sym_LBRACK] = ACTIONS(275),
        [sym_comment] = ACTIONS(81),
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
        [anon_sym_not] = ACTIONS(943),
        [anon_sym_LBRACK] = ACTIONS(141),
        [anon_sym_LBRACE] = ACTIONS(143),
        [sym_number] = ACTIONS(145),
        [sym_identifier] = ACTIONS(147),
        [sym_comment] = ACTIONS(81),
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
        [anon_sym_not] = ACTIONS(943),
        [anon_sym_LBRACK] = ACTIONS(141),
        [anon_sym_LBRACE] = ACTIONS(143),
        [sym_number] = ACTIONS(145),
        [sym_identifier] = ACTIONS(147),
        [sym_comment] = ACTIONS(81),
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
        [anon_sym_not] = ACTIONS(943),
        [anon_sym_LBRACK] = ACTIONS(141),
        [anon_sym_LBRACE] = ACTIONS(143),
        [sym_number] = ACTIONS(145),
        [sym_identifier] = ACTIONS(147),
        [sym_comment] = ACTIONS(81),
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
        [anon_sym_not] = ACTIONS(943),
        [anon_sym_LBRACK] = ACTIONS(141),
        [anon_sym_LBRACE] = ACTIONS(143),
        [sym_number] = ACTIONS(145),
        [sym_identifier] = ACTIONS(147),
        [sym_comment] = ACTIONS(81),
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
        [anon_sym_not] = ACTIONS(943),
        [anon_sym_LBRACK] = ACTIONS(141),
        [anon_sym_LBRACE] = ACTIONS(143),
        [sym_number] = ACTIONS(145),
        [sym_identifier] = ACTIONS(147),
        [sym_comment] = ACTIONS(81),
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
        [anon_sym_not] = ACTIONS(943),
        [anon_sym_LBRACK] = ACTIONS(141),
        [anon_sym_LBRACE] = ACTIONS(143),
        [sym_number] = ACTIONS(145),
        [sym_identifier] = ACTIONS(147),
        [sym_comment] = ACTIONS(81),
    },
    [475] = {
        [anon_sym_LPAREN] = ACTIONS(259),
        [anon_sym_COMMA] = ACTIONS(315),
        [anon_sym_STAR] = ACTIONS(947),
        [anon_sym_COLON] = ACTIONS(315),
        [anon_sym_PLUS] = ACTIONS(949),
        [anon_sym_DASH] = ACTIONS(949),
        [anon_sym_SLASH] = ACTIONS(951),
        [anon_sym_STAR_STAR] = ACTIONS(953),
        [anon_sym_PIPE] = ACTIONS(315),
        [anon_sym_AMP] = ACTIONS(957),
        [anon_sym_CARET] = ACTIONS(959),
        [anon_sym_LT_LT] = ACTIONS(949),
        [anon_sym_GT_GT] = ACTIONS(949),
        [anon_sym_and] = ACTIONS(957),
        [anon_sym_or] = ACTIONS(315),
        [anon_sym_LBRACK] = ACTIONS(315),
        [sym_comment] = ACTIONS(81),
    },
    [476] = {
        [anon_sym_LPAREN] = ACTIONS(259),
        [anon_sym_COMMA] = ACTIONS(315),
        [anon_sym_STAR] = ACTIONS(947),
        [anon_sym_COLON] = ACTIONS(315),
        [anon_sym_PLUS] = ACTIONS(949),
        [anon_sym_DASH] = ACTIONS(949),
        [anon_sym_SLASH] = ACTIONS(951),
        [anon_sym_STAR_STAR] = ACTIONS(953),
        [anon_sym_PIPE] = ACTIONS(315),
        [anon_sym_AMP] = ACTIONS(315),
        [anon_sym_CARET] = ACTIONS(959),
        [anon_sym_LT_LT] = ACTIONS(949),
        [anon_sym_GT_GT] = ACTIONS(949),
        [anon_sym_and] = ACTIONS(315),
        [anon_sym_or] = ACTIONS(315),
        [anon_sym_LBRACK] = ACTIONS(315),
        [sym_comment] = ACTIONS(81),
    },
    [477] = {
        [anon_sym_LPAREN] = ACTIONS(259),
        [anon_sym_COMMA] = ACTIONS(315),
        [anon_sym_STAR] = ACTIONS(947),
        [anon_sym_COLON] = ACTIONS(315),
        [anon_sym_PLUS] = ACTIONS(315),
        [anon_sym_DASH] = ACTIONS(315),
        [anon_sym_SLASH] = ACTIONS(951),
        [anon_sym_STAR_STAR] = ACTIONS(953),
        [anon_sym_PIPE] = ACTIONS(315),
        [anon_sym_AMP] = ACTIONS(315),
        [anon_sym_CARET] = ACTIONS(315),
        [anon_sym_LT_LT] = ACTIONS(315),
        [anon_sym_GT_GT] = ACTIONS(315),
        [anon_sym_and] = ACTIONS(315),
        [anon_sym_or] = ACTIONS(315),
        [anon_sym_LBRACK] = ACTIONS(315),
        [sym_comment] = ACTIONS(81),
    },
    [478] = {
        [anon_sym_LPAREN] = ACTIONS(259),
        [anon_sym_COMMA] = ACTIONS(315),
        [anon_sym_STAR] = ACTIONS(947),
        [anon_sym_COLON] = ACTIONS(315),
        [anon_sym_PLUS] = ACTIONS(949),
        [anon_sym_DASH] = ACTIONS(949),
        [anon_sym_SLASH] = ACTIONS(951),
        [anon_sym_STAR_STAR] = ACTIONS(953),
        [anon_sym_PIPE] = ACTIONS(315),
        [anon_sym_AMP] = ACTIONS(315),
        [anon_sym_CARET] = ACTIONS(315),
        [anon_sym_LT_LT] = ACTIONS(949),
        [anon_sym_GT_GT] = ACTIONS(949),
        [anon_sym_and] = ACTIONS(315),
        [anon_sym_or] = ACTIONS(315),
        [anon_sym_LBRACK] = ACTIONS(315),
        [sym_comment] = ACTIONS(81),
    },
    [479] = {
        [anon_sym_LPAREN] = ACTIONS(259),
        [anon_sym_COMMA] = ACTIONS(315),
        [anon_sym_STAR] = ACTIONS(317),
        [anon_sym_COLON] = ACTIONS(315),
        [anon_sym_PLUS] = ACTIONS(315),
        [anon_sym_DASH] = ACTIONS(315),
        [anon_sym_SLASH] = ACTIONS(315),
        [anon_sym_STAR_STAR] = ACTIONS(953),
        [anon_sym_PIPE] = ACTIONS(315),
        [anon_sym_AMP] = ACTIONS(315),
        [anon_sym_CARET] = ACTIONS(315),
        [anon_sym_LT_LT] = ACTIONS(315),
        [anon_sym_GT_GT] = ACTIONS(315),
        [anon_sym_and] = ACTIONS(315),
        [anon_sym_or] = ACTIONS(315),
        [anon_sym_LBRACK] = ACTIONS(315),
        [sym_comment] = ACTIONS(81),
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
        [anon_sym_not] = ACTIONS(153),
        [anon_sym_LBRACK] = ACTIONS(141),
        [anon_sym_LBRACE] = ACTIONS(143),
        [sym_number] = ACTIONS(145),
        [sym_identifier] = ACTIONS(147),
        [sym_comment] = ACTIONS(81),
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
        [anon_sym_import] = ACTIONS(91),
        [anon_sym_from] = ACTIONS(93),
        [anon_sym_print] = ACTIONS(95),
        [anon_sym_return] = ACTIONS(97),
        [anon_sym_del] = ACTIONS(99),
        [sym_pass_statement] = ACTIONS(101),
        [sym_break_statement] = ACTIONS(101),
        [sym_continue_statement] = ACTIONS(101),
        [anon_sym_not] = ACTIONS(119),
        [anon_sym_LBRACK] = ACTIONS(121),
        [anon_sym_LBRACE] = ACTIONS(123),
        [sym_number] = ACTIONS(125),
        [sym_identifier] = ACTIONS(127),
        [sym_comment] = ACTIONS(81),
        [sym__indent] = ACTIONS(837),
    },
    [482] = {
        [anon_sym_COMMA] = ACTIONS(961),
        [anon_sym_COLON] = ACTIONS(963),
        [sym_comment] = ACTIONS(81),
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
        [anon_sym_not] = ACTIONS(153),
        [anon_sym_LBRACK] = ACTIONS(141),
        [anon_sym_LBRACE] = ACTIONS(143),
        [sym_number] = ACTIONS(145),
        [sym_identifier] = ACTIONS(147),
        [sym_comment] = ACTIONS(81),
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
        [anon_sym_import] = ACTIONS(91),
        [anon_sym_from] = ACTIONS(93),
        [anon_sym_print] = ACTIONS(95),
        [anon_sym_return] = ACTIONS(97),
        [anon_sym_del] = ACTIONS(99),
        [sym_pass_statement] = ACTIONS(101),
        [sym_break_statement] = ACTIONS(101),
        [sym_continue_statement] = ACTIONS(101),
        [anon_sym_not] = ACTIONS(119),
        [anon_sym_LBRACK] = ACTIONS(121),
        [anon_sym_LBRACE] = ACTIONS(123),
        [sym_number] = ACTIONS(125),
        [sym_identifier] = ACTIONS(127),
        [sym_comment] = ACTIONS(81),
        [sym__indent] = ACTIONS(837),
    },
    [485] = {
        [anon_sym_import] = ACTIONS(965),
        [anon_sym_from] = ACTIONS(965),
        [anon_sym_print] = ACTIONS(965),
        [anon_sym_return] = ACTIONS(965),
        [anon_sym_del] = ACTIONS(965),
        [sym_pass_statement] = ACTIONS(965),
        [sym_break_statement] = ACTIONS(965),
        [sym_continue_statement] = ACTIONS(965),
        [anon_sym_if] = ACTIONS(965),
        [anon_sym_for] = ACTIONS(965),
        [anon_sym_while] = ACTIONS(965),
        [anon_sym_try] = ACTIONS(965),
        [anon_sym_with] = ACTIONS(965),
        [anon_sym_def] = ACTIONS(965),
        [anon_sym_class] = ACTIONS(965),
        [anon_sym_AT] = ACTIONS(967),
        [anon_sym_not] = ACTIONS(965),
        [anon_sym_LBRACK] = ACTIONS(967),
        [anon_sym_LBRACE] = ACTIONS(967),
        [sym_number] = ACTIONS(965),
        [sym_identifier] = ACTIONS(969),
        [sym_comment] = ACTIONS(81),
        [sym__dedent] = ACTIONS(967),
    },
    [486] = {
        [anon_sym_COMMA] = ACTIONS(971),
        [anon_sym_COLON] = ACTIONS(971),
        [sym_comment] = ACTIONS(81),
    },
    [487] = {
        [anon_sym_import] = ACTIONS(973),
        [anon_sym_from] = ACTIONS(973),
        [anon_sym_print] = ACTIONS(973),
        [anon_sym_return] = ACTIONS(973),
        [anon_sym_del] = ACTIONS(973),
        [sym_pass_statement] = ACTIONS(973),
        [sym_break_statement] = ACTIONS(973),
        [sym_continue_statement] = ACTIONS(973),
        [anon_sym_if] = ACTIONS(973),
        [anon_sym_for] = ACTIONS(973),
        [anon_sym_while] = ACTIONS(973),
        [anon_sym_try] = ACTIONS(973),
        [anon_sym_with] = ACTIONS(973),
        [anon_sym_def] = ACTIONS(973),
        [anon_sym_class] = ACTIONS(973),
        [anon_sym_AT] = ACTIONS(975),
        [anon_sym_not] = ACTIONS(973),
        [anon_sym_LBRACK] = ACTIONS(975),
        [anon_sym_LBRACE] = ACTIONS(975),
        [sym_number] = ACTIONS(973),
        [sym_identifier] = ACTIONS(977),
        [sym_comment] = ACTIONS(81),
        [sym__dedent] = ACTIONS(975),
    },
    [488] = {
        [anon_sym_COMMA] = ACTIONS(979),
        [anon_sym_COLON] = ACTIONS(979),
        [sym_comment] = ACTIONS(81),
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
        [anon_sym_import] = ACTIONS(91),
        [anon_sym_from] = ACTIONS(93),
        [anon_sym_print] = ACTIONS(95),
        [anon_sym_return] = ACTIONS(97),
        [anon_sym_del] = ACTIONS(99),
        [sym_pass_statement] = ACTIONS(101),
        [sym_break_statement] = ACTIONS(101),
        [sym_continue_statement] = ACTIONS(101),
        [anon_sym_not] = ACTIONS(119),
        [anon_sym_LBRACK] = ACTIONS(121),
        [anon_sym_LBRACE] = ACTIONS(123),
        [sym_number] = ACTIONS(125),
        [sym_identifier] = ACTIONS(127),
        [sym_comment] = ACTIONS(81),
        [sym__indent] = ACTIONS(981),
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
        [anon_sym_import] = ACTIONS(91),
        [anon_sym_from] = ACTIONS(93),
        [anon_sym_print] = ACTIONS(95),
        [anon_sym_return] = ACTIONS(97),
        [anon_sym_del] = ACTIONS(99),
        [sym_pass_statement] = ACTIONS(101),
        [sym_break_statement] = ACTIONS(101),
        [sym_continue_statement] = ACTIONS(101),
        [anon_sym_if] = ACTIONS(785),
        [anon_sym_for] = ACTIONS(787),
        [anon_sym_while] = ACTIONS(789),
        [anon_sym_try] = ACTIONS(791),
        [anon_sym_with] = ACTIONS(793),
        [anon_sym_def] = ACTIONS(795),
        [anon_sym_class] = ACTIONS(797),
        [anon_sym_AT] = ACTIONS(117),
        [anon_sym_not] = ACTIONS(119),
        [anon_sym_LBRACK] = ACTIONS(121),
        [anon_sym_LBRACE] = ACTIONS(123),
        [sym_number] = ACTIONS(125),
        [sym_identifier] = ACTIONS(127),
        [sym_comment] = ACTIONS(81),
        [sym__dedent] = ACTIONS(983),
    },
    [491] = {
        [sym_comment] = ACTIONS(81),
        [sym__newline] = ACTIONS(983),
    },
    [492] = {
        [sym_except_clause] = STATE(495),
        [sym_finally_clause] = STATE(496),
        [aux_sym_try_statement_repeat1] = STATE(497),
        [anon_sym_except] = ACTIONS(985),
        [anon_sym_finally] = ACTIONS(987),
        [sym_comment] = ACTIONS(81),
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
        [anon_sym_not] = ACTIONS(153),
        [anon_sym_LBRACK] = ACTIONS(141),
        [anon_sym_LBRACE] = ACTIONS(143),
        [sym_number] = ACTIONS(145),
        [sym_identifier] = ACTIONS(147),
        [sym_comment] = ACTIONS(81),
    },
    [494] = {
        [anon_sym_COLON] = ACTIONS(989),
        [sym_comment] = ACTIONS(81),
    },
    [495] = {
        [anon_sym_import] = ACTIONS(991),
        [anon_sym_from] = ACTIONS(991),
        [anon_sym_print] = ACTIONS(991),
        [anon_sym_return] = ACTIONS(991),
        [anon_sym_del] = ACTIONS(991),
        [sym_pass_statement] = ACTIONS(991),
        [sym_break_statement] = ACTIONS(991),
        [sym_continue_statement] = ACTIONS(991),
        [anon_sym_if] = ACTIONS(991),
        [anon_sym_else] = ACTIONS(991),
        [anon_sym_for] = ACTIONS(991),
        [anon_sym_while] = ACTIONS(991),
        [anon_sym_try] = ACTIONS(991),
        [anon_sym_except] = ACTIONS(991),
        [anon_sym_finally] = ACTIONS(991),
        [anon_sym_with] = ACTIONS(991),
        [anon_sym_def] = ACTIONS(991),
        [anon_sym_class] = ACTIONS(991),
        [anon_sym_AT] = ACTIONS(993),
        [anon_sym_not] = ACTIONS(991),
        [anon_sym_LBRACK] = ACTIONS(993),
        [anon_sym_LBRACE] = ACTIONS(993),
        [sym_number] = ACTIONS(991),
        [sym_identifier] = ACTIONS(995),
        [sym_comment] = ACTIONS(81),
        [sym__dedent] = ACTIONS(993),
    },
    [496] = {
        [anon_sym_import] = ACTIONS(997),
        [anon_sym_from] = ACTIONS(997),
        [anon_sym_print] = ACTIONS(997),
        [anon_sym_return] = ACTIONS(997),
        [anon_sym_del] = ACTIONS(997),
        [sym_pass_statement] = ACTIONS(997),
        [sym_break_statement] = ACTIONS(997),
        [sym_continue_statement] = ACTIONS(997),
        [anon_sym_if] = ACTIONS(997),
        [anon_sym_for] = ACTIONS(997),
        [anon_sym_while] = ACTIONS(997),
        [anon_sym_try] = ACTIONS(997),
        [anon_sym_with] = ACTIONS(997),
        [anon_sym_def] = ACTIONS(997),
        [anon_sym_class] = ACTIONS(997),
        [anon_sym_AT] = ACTIONS(999),
        [anon_sym_not] = ACTIONS(997),
        [anon_sym_LBRACK] = ACTIONS(999),
        [anon_sym_LBRACE] = ACTIONS(999),
        [sym_number] = ACTIONS(997),
        [sym_identifier] = ACTIONS(1001),
        [sym_comment] = ACTIONS(81),
        [sym__dedent] = ACTIONS(999),
    },
    [497] = {
        [sym_else_clause] = STATE(499),
        [sym_except_clause] = STATE(500),
        [sym_finally_clause] = STATE(501),
        [anon_sym_import] = ACTIONS(997),
        [anon_sym_from] = ACTIONS(997),
        [anon_sym_print] = ACTIONS(997),
        [anon_sym_return] = ACTIONS(997),
        [anon_sym_del] = ACTIONS(997),
        [sym_pass_statement] = ACTIONS(997),
        [sym_break_statement] = ACTIONS(997),
        [sym_continue_statement] = ACTIONS(997),
        [anon_sym_if] = ACTIONS(997),
        [anon_sym_else] = ACTIONS(1003),
        [anon_sym_for] = ACTIONS(997),
        [anon_sym_while] = ACTIONS(997),
        [anon_sym_try] = ACTIONS(997),
        [anon_sym_except] = ACTIONS(1005),
        [anon_sym_finally] = ACTIONS(1007),
        [anon_sym_with] = ACTIONS(997),
        [anon_sym_def] = ACTIONS(997),
        [anon_sym_class] = ACTIONS(997),
        [anon_sym_AT] = ACTIONS(999),
        [anon_sym_not] = ACTIONS(997),
        [anon_sym_LBRACK] = ACTIONS(999),
        [anon_sym_LBRACE] = ACTIONS(999),
        [sym_number] = ACTIONS(997),
        [sym_identifier] = ACTIONS(1001),
        [sym_comment] = ACTIONS(81),
        [sym__dedent] = ACTIONS(999),
    },
    [498] = {
        [anon_sym_COLON] = ACTIONS(1009),
        [sym_comment] = ACTIONS(81),
    },
    [499] = {
        [sym_finally_clause] = STATE(502),
        [anon_sym_import] = ACTIONS(1011),
        [anon_sym_from] = ACTIONS(1011),
        [anon_sym_print] = ACTIONS(1011),
        [anon_sym_return] = ACTIONS(1011),
        [anon_sym_del] = ACTIONS(1011),
        [sym_pass_statement] = ACTIONS(1011),
        [sym_break_statement] = ACTIONS(1011),
        [sym_continue_statement] = ACTIONS(1011),
        [anon_sym_if] = ACTIONS(1011),
        [anon_sym_for] = ACTIONS(1011),
        [anon_sym_while] = ACTIONS(1011),
        [anon_sym_try] = ACTIONS(1011),
        [anon_sym_finally] = ACTIONS(1007),
        [anon_sym_with] = ACTIONS(1011),
        [anon_sym_def] = ACTIONS(1011),
        [anon_sym_class] = ACTIONS(1011),
        [anon_sym_AT] = ACTIONS(1013),
        [anon_sym_not] = ACTIONS(1011),
        [anon_sym_LBRACK] = ACTIONS(1013),
        [anon_sym_LBRACE] = ACTIONS(1013),
        [sym_number] = ACTIONS(1011),
        [sym_identifier] = ACTIONS(1015),
        [sym_comment] = ACTIONS(81),
        [sym__dedent] = ACTIONS(1013),
    },
    [500] = {
        [anon_sym_import] = ACTIONS(1017),
        [anon_sym_from] = ACTIONS(1017),
        [anon_sym_print] = ACTIONS(1017),
        [anon_sym_return] = ACTIONS(1017),
        [anon_sym_del] = ACTIONS(1017),
        [sym_pass_statement] = ACTIONS(1017),
        [sym_break_statement] = ACTIONS(1017),
        [sym_continue_statement] = ACTIONS(1017),
        [anon_sym_if] = ACTIONS(1017),
        [anon_sym_else] = ACTIONS(1017),
        [anon_sym_for] = ACTIONS(1017),
        [anon_sym_while] = ACTIONS(1017),
        [anon_sym_try] = ACTIONS(1017),
        [anon_sym_except] = ACTIONS(1017),
        [anon_sym_finally] = ACTIONS(1017),
        [anon_sym_with] = ACTIONS(1017),
        [anon_sym_def] = ACTIONS(1017),
        [anon_sym_class] = ACTIONS(1017),
        [anon_sym_AT] = ACTIONS(1019),
        [anon_sym_not] = ACTIONS(1017),
        [anon_sym_LBRACK] = ACTIONS(1019),
        [anon_sym_LBRACE] = ACTIONS(1019),
        [sym_number] = ACTIONS(1017),
        [sym_identifier] = ACTIONS(1021),
        [sym_comment] = ACTIONS(81),
        [sym__dedent] = ACTIONS(1019),
    },
    [501] = {
        [anon_sym_import] = ACTIONS(1011),
        [anon_sym_from] = ACTIONS(1011),
        [anon_sym_print] = ACTIONS(1011),
        [anon_sym_return] = ACTIONS(1011),
        [anon_sym_del] = ACTIONS(1011),
        [sym_pass_statement] = ACTIONS(1011),
        [sym_break_statement] = ACTIONS(1011),
        [sym_continue_statement] = ACTIONS(1011),
        [anon_sym_if] = ACTIONS(1011),
        [anon_sym_for] = ACTIONS(1011),
        [anon_sym_while] = ACTIONS(1011),
        [anon_sym_try] = ACTIONS(1011),
        [anon_sym_with] = ACTIONS(1011),
        [anon_sym_def] = ACTIONS(1011),
        [anon_sym_class] = ACTIONS(1011),
        [anon_sym_AT] = ACTIONS(1013),
        [anon_sym_not] = ACTIONS(1011),
        [anon_sym_LBRACK] = ACTIONS(1013),
        [anon_sym_LBRACE] = ACTIONS(1013),
        [sym_number] = ACTIONS(1011),
        [sym_identifier] = ACTIONS(1015),
        [sym_comment] = ACTIONS(81),
        [sym__dedent] = ACTIONS(1013),
    },
    [502] = {
        [anon_sym_import] = ACTIONS(1023),
        [anon_sym_from] = ACTIONS(1023),
        [anon_sym_print] = ACTIONS(1023),
        [anon_sym_return] = ACTIONS(1023),
        [anon_sym_del] = ACTIONS(1023),
        [sym_pass_statement] = ACTIONS(1023),
        [sym_break_statement] = ACTIONS(1023),
        [sym_continue_statement] = ACTIONS(1023),
        [anon_sym_if] = ACTIONS(1023),
        [anon_sym_for] = ACTIONS(1023),
        [anon_sym_while] = ACTIONS(1023),
        [anon_sym_try] = ACTIONS(1023),
        [anon_sym_with] = ACTIONS(1023),
        [anon_sym_def] = ACTIONS(1023),
        [anon_sym_class] = ACTIONS(1023),
        [anon_sym_AT] = ACTIONS(1025),
        [anon_sym_not] = ACTIONS(1023),
        [anon_sym_LBRACK] = ACTIONS(1025),
        [anon_sym_LBRACE] = ACTIONS(1025),
        [sym_number] = ACTIONS(1023),
        [sym_identifier] = ACTIONS(1027),
        [sym_comment] = ACTIONS(81),
        [sym__dedent] = ACTIONS(1025),
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
        [anon_sym_import] = ACTIONS(91),
        [anon_sym_from] = ACTIONS(93),
        [anon_sym_print] = ACTIONS(95),
        [anon_sym_return] = ACTIONS(97),
        [anon_sym_del] = ACTIONS(99),
        [sym_pass_statement] = ACTIONS(101),
        [sym_break_statement] = ACTIONS(101),
        [sym_continue_statement] = ACTIONS(101),
        [anon_sym_not] = ACTIONS(119),
        [anon_sym_LBRACK] = ACTIONS(121),
        [anon_sym_LBRACE] = ACTIONS(123),
        [sym_number] = ACTIONS(125),
        [sym_identifier] = ACTIONS(127),
        [sym_comment] = ACTIONS(81),
        [sym__indent] = ACTIONS(837),
    },
    [504] = {
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
        [anon_sym_finally] = ACTIONS(1029),
        [anon_sym_with] = ACTIONS(1029),
        [anon_sym_def] = ACTIONS(1029),
        [anon_sym_class] = ACTIONS(1029),
        [anon_sym_AT] = ACTIONS(1031),
        [anon_sym_not] = ACTIONS(1029),
        [anon_sym_LBRACK] = ACTIONS(1031),
        [anon_sym_LBRACE] = ACTIONS(1031),
        [sym_number] = ACTIONS(1029),
        [sym_identifier] = ACTIONS(1033),
        [sym_comment] = ACTIONS(81),
        [sym__dedent] = ACTIONS(1031),
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
        [anon_sym_import] = ACTIONS(91),
        [anon_sym_from] = ACTIONS(93),
        [anon_sym_print] = ACTIONS(95),
        [anon_sym_return] = ACTIONS(97),
        [anon_sym_del] = ACTIONS(99),
        [sym_pass_statement] = ACTIONS(101),
        [sym_break_statement] = ACTIONS(101),
        [sym_continue_statement] = ACTIONS(101),
        [anon_sym_not] = ACTIONS(119),
        [anon_sym_LBRACK] = ACTIONS(121),
        [anon_sym_LBRACE] = ACTIONS(123),
        [sym_number] = ACTIONS(125),
        [sym_identifier] = ACTIONS(127),
        [sym_comment] = ACTIONS(81),
        [sym__indent] = ACTIONS(837),
    },
    [506] = {
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
        [anon_sym_with] = ACTIONS(1035),
        [anon_sym_def] = ACTIONS(1035),
        [anon_sym_class] = ACTIONS(1035),
        [anon_sym_AT] = ACTIONS(1037),
        [anon_sym_not] = ACTIONS(1035),
        [anon_sym_LBRACK] = ACTIONS(1037),
        [anon_sym_LBRACE] = ACTIONS(1037),
        [sym_number] = ACTIONS(1035),
        [sym_identifier] = ACTIONS(1039),
        [sym_comment] = ACTIONS(81),
        [sym__dedent] = ACTIONS(1037),
    },
    [507] = {
        [anon_sym_LPAREN] = ACTIONS(259),
        [anon_sym_COMMA] = ACTIONS(1041),
        [anon_sym_as] = ACTIONS(1041),
        [anon_sym_STAR] = ACTIONS(929),
        [anon_sym_COLON] = ACTIONS(1043),
        [anon_sym_PLUS] = ACTIONS(931),
        [anon_sym_DASH] = ACTIONS(931),
        [anon_sym_SLASH] = ACTIONS(933),
        [anon_sym_STAR_STAR] = ACTIONS(935),
        [anon_sym_PIPE] = ACTIONS(937),
        [anon_sym_AMP] = ACTIONS(939),
        [anon_sym_CARET] = ACTIONS(941),
        [anon_sym_LT_LT] = ACTIONS(931),
        [anon_sym_GT_GT] = ACTIONS(931),
        [anon_sym_and] = ACTIONS(939),
        [anon_sym_or] = ACTIONS(937),
        [anon_sym_LBRACK] = ACTIONS(275),
        [sym_comment] = ACTIONS(81),
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
        [anon_sym_not] = ACTIONS(139),
        [anon_sym_LBRACK] = ACTIONS(141),
        [anon_sym_LBRACE] = ACTIONS(143),
        [sym_number] = ACTIONS(145),
        [sym_identifier] = ACTIONS(147),
        [sym_comment] = ACTIONS(81),
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
        [anon_sym_import] = ACTIONS(91),
        [anon_sym_from] = ACTIONS(93),
        [anon_sym_print] = ACTIONS(95),
        [anon_sym_return] = ACTIONS(97),
        [anon_sym_del] = ACTIONS(99),
        [sym_pass_statement] = ACTIONS(101),
        [sym_break_statement] = ACTIONS(101),
        [sym_continue_statement] = ACTIONS(101),
        [anon_sym_not] = ACTIONS(119),
        [anon_sym_LBRACK] = ACTIONS(121),
        [anon_sym_LBRACE] = ACTIONS(123),
        [sym_number] = ACTIONS(125),
        [sym_identifier] = ACTIONS(127),
        [sym_comment] = ACTIONS(81),
        [sym__indent] = ACTIONS(837),
    },
    [510] = {
        [anon_sym_import] = ACTIONS(1045),
        [anon_sym_from] = ACTIONS(1045),
        [anon_sym_print] = ACTIONS(1045),
        [anon_sym_return] = ACTIONS(1045),
        [anon_sym_del] = ACTIONS(1045),
        [sym_pass_statement] = ACTIONS(1045),
        [sym_break_statement] = ACTIONS(1045),
        [sym_continue_statement] = ACTIONS(1045),
        [anon_sym_if] = ACTIONS(1045),
        [anon_sym_else] = ACTIONS(1045),
        [anon_sym_for] = ACTIONS(1045),
        [anon_sym_while] = ACTIONS(1045),
        [anon_sym_try] = ACTIONS(1045),
        [anon_sym_except] = ACTIONS(1045),
        [anon_sym_finally] = ACTIONS(1045),
        [anon_sym_with] = ACTIONS(1045),
        [anon_sym_def] = ACTIONS(1045),
        [anon_sym_class] = ACTIONS(1045),
        [anon_sym_AT] = ACTIONS(1047),
        [anon_sym_not] = ACTIONS(1045),
        [anon_sym_LBRACK] = ACTIONS(1047),
        [anon_sym_LBRACE] = ACTIONS(1047),
        [sym_number] = ACTIONS(1045),
        [sym_identifier] = ACTIONS(1049),
        [sym_comment] = ACTIONS(81),
        [sym__dedent] = ACTIONS(1047),
    },
    [511] = {
        [anon_sym_LPAREN] = ACTIONS(259),
        [anon_sym_STAR] = ACTIONS(447),
        [anon_sym_COLON] = ACTIONS(1051),
        [anon_sym_PLUS] = ACTIONS(451),
        [anon_sym_DASH] = ACTIONS(451),
        [anon_sym_SLASH] = ACTIONS(453),
        [anon_sym_STAR_STAR] = ACTIONS(455),
        [anon_sym_PIPE] = ACTIONS(457),
        [anon_sym_AMP] = ACTIONS(459),
        [anon_sym_CARET] = ACTIONS(461),
        [anon_sym_LT_LT] = ACTIONS(451),
        [anon_sym_GT_GT] = ACTIONS(451),
        [anon_sym_and] = ACTIONS(459),
        [anon_sym_or] = ACTIONS(457),
        [anon_sym_LBRACK] = ACTIONS(275),
        [sym_comment] = ACTIONS(81),
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
        [anon_sym_import] = ACTIONS(91),
        [anon_sym_from] = ACTIONS(93),
        [anon_sym_print] = ACTIONS(95),
        [anon_sym_return] = ACTIONS(97),
        [anon_sym_del] = ACTIONS(99),
        [sym_pass_statement] = ACTIONS(101),
        [sym_break_statement] = ACTIONS(101),
        [sym_continue_statement] = ACTIONS(101),
        [anon_sym_not] = ACTIONS(119),
        [anon_sym_LBRACK] = ACTIONS(121),
        [anon_sym_LBRACE] = ACTIONS(123),
        [sym_number] = ACTIONS(125),
        [sym_identifier] = ACTIONS(127),
        [sym_comment] = ACTIONS(81),
        [sym__indent] = ACTIONS(837),
    },
    [513] = {
        [anon_sym_import] = ACTIONS(1053),
        [anon_sym_from] = ACTIONS(1053),
        [anon_sym_print] = ACTIONS(1053),
        [anon_sym_return] = ACTIONS(1053),
        [anon_sym_del] = ACTIONS(1053),
        [sym_pass_statement] = ACTIONS(1053),
        [sym_break_statement] = ACTIONS(1053),
        [sym_continue_statement] = ACTIONS(1053),
        [anon_sym_if] = ACTIONS(1053),
        [anon_sym_else] = ACTIONS(1053),
        [anon_sym_for] = ACTIONS(1053),
        [anon_sym_while] = ACTIONS(1053),
        [anon_sym_try] = ACTIONS(1053),
        [anon_sym_except] = ACTIONS(1053),
        [anon_sym_finally] = ACTIONS(1053),
        [anon_sym_with] = ACTIONS(1053),
        [anon_sym_def] = ACTIONS(1053),
        [anon_sym_class] = ACTIONS(1053),
        [anon_sym_AT] = ACTIONS(1055),
        [anon_sym_not] = ACTIONS(1053),
        [anon_sym_LBRACK] = ACTIONS(1055),
        [anon_sym_LBRACE] = ACTIONS(1055),
        [sym_number] = ACTIONS(1053),
        [sym_identifier] = ACTIONS(1057),
        [sym_comment] = ACTIONS(81),
        [sym__dedent] = ACTIONS(1055),
    },
    [514] = {
        [anon_sym_except] = ACTIONS(807),
        [anon_sym_finally] = ACTIONS(807),
        [sym_comment] = ACTIONS(81),
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
        [anon_sym_import] = ACTIONS(91),
        [anon_sym_from] = ACTIONS(93),
        [anon_sym_print] = ACTIONS(95),
        [anon_sym_return] = ACTIONS(97),
        [anon_sym_del] = ACTIONS(99),
        [sym_pass_statement] = ACTIONS(101),
        [sym_break_statement] = ACTIONS(101),
        [sym_continue_statement] = ACTIONS(101),
        [anon_sym_if] = ACTIONS(785),
        [anon_sym_for] = ACTIONS(787),
        [anon_sym_while] = ACTIONS(789),
        [anon_sym_try] = ACTIONS(791),
        [anon_sym_with] = ACTIONS(793),
        [anon_sym_def] = ACTIONS(795),
        [anon_sym_class] = ACTIONS(797),
        [anon_sym_AT] = ACTIONS(117),
        [anon_sym_not] = ACTIONS(119),
        [anon_sym_LBRACK] = ACTIONS(121),
        [anon_sym_LBRACE] = ACTIONS(123),
        [sym_number] = ACTIONS(125),
        [sym_identifier] = ACTIONS(127),
        [sym_comment] = ACTIONS(81),
        [sym__dedent] = ACTIONS(1059),
    },
    [516] = {
        [anon_sym_except] = ACTIONS(827),
        [anon_sym_finally] = ACTIONS(827),
        [sym_comment] = ACTIONS(81),
    },
    [517] = {
        [anon_sym_LPAREN] = ACTIONS(259),
        [anon_sym_STAR] = ACTIONS(447),
        [anon_sym_COLON] = ACTIONS(1061),
        [anon_sym_PLUS] = ACTIONS(451),
        [anon_sym_DASH] = ACTIONS(451),
        [anon_sym_SLASH] = ACTIONS(453),
        [anon_sym_STAR_STAR] = ACTIONS(455),
        [anon_sym_PIPE] = ACTIONS(457),
        [anon_sym_AMP] = ACTIONS(459),
        [anon_sym_CARET] = ACTIONS(461),
        [anon_sym_LT_LT] = ACTIONS(451),
        [anon_sym_GT_GT] = ACTIONS(451),
        [anon_sym_and] = ACTIONS(459),
        [anon_sym_or] = ACTIONS(457),
        [anon_sym_LBRACK] = ACTIONS(275),
        [sym_comment] = ACTIONS(81),
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
        [anon_sym_import] = ACTIONS(91),
        [anon_sym_from] = ACTIONS(93),
        [anon_sym_print] = ACTIONS(95),
        [anon_sym_return] = ACTIONS(97),
        [anon_sym_del] = ACTIONS(99),
        [sym_pass_statement] = ACTIONS(101),
        [sym_break_statement] = ACTIONS(101),
        [sym_continue_statement] = ACTIONS(101),
        [anon_sym_not] = ACTIONS(119),
        [anon_sym_LBRACK] = ACTIONS(121),
        [anon_sym_LBRACE] = ACTIONS(123),
        [sym_number] = ACTIONS(125),
        [sym_identifier] = ACTIONS(127),
        [sym_comment] = ACTIONS(81),
        [sym__indent] = ACTIONS(837),
    },
    [519] = {
        [sym_else_clause] = STATE(520),
        [anon_sym_import] = ACTIONS(1063),
        [anon_sym_from] = ACTIONS(1063),
        [anon_sym_print] = ACTIONS(1063),
        [anon_sym_return] = ACTIONS(1063),
        [anon_sym_del] = ACTIONS(1063),
        [sym_pass_statement] = ACTIONS(1063),
        [sym_break_statement] = ACTIONS(1063),
        [sym_continue_statement] = ACTIONS(1063),
        [anon_sym_if] = ACTIONS(1063),
        [anon_sym_else] = ACTIONS(1003),
        [anon_sym_for] = ACTIONS(1063),
        [anon_sym_while] = ACTIONS(1063),
        [anon_sym_try] = ACTIONS(1063),
        [anon_sym_with] = ACTIONS(1063),
        [anon_sym_def] = ACTIONS(1063),
        [anon_sym_class] = ACTIONS(1063),
        [anon_sym_AT] = ACTIONS(1065),
        [anon_sym_not] = ACTIONS(1063),
        [anon_sym_LBRACK] = ACTIONS(1065),
        [anon_sym_LBRACE] = ACTIONS(1065),
        [sym_number] = ACTIONS(1063),
        [sym_identifier] = ACTIONS(1067),
        [sym_comment] = ACTIONS(81),
        [sym__dedent] = ACTIONS(1065),
    },
    [520] = {
        [anon_sym_import] = ACTIONS(1069),
        [anon_sym_from] = ACTIONS(1069),
        [anon_sym_print] = ACTIONS(1069),
        [anon_sym_return] = ACTIONS(1069),
        [anon_sym_del] = ACTIONS(1069),
        [sym_pass_statement] = ACTIONS(1069),
        [sym_break_statement] = ACTIONS(1069),
        [sym_continue_statement] = ACTIONS(1069),
        [anon_sym_if] = ACTIONS(1069),
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
        [sym_number] = ACTIONS(1069),
        [sym_identifier] = ACTIONS(1073),
        [sym_comment] = ACTIONS(81),
        [sym__dedent] = ACTIONS(1071),
    },
    [521] = {
        [anon_sym_in] = ACTIONS(1075),
        [sym_comment] = ACTIONS(81),
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
        [anon_sym_not] = ACTIONS(943),
        [anon_sym_LBRACK] = ACTIONS(141),
        [anon_sym_LBRACE] = ACTIONS(143),
        [sym_number] = ACTIONS(145),
        [sym_identifier] = ACTIONS(147),
        [sym_comment] = ACTIONS(81),
    },
    [523] = {
        [anon_sym_COLON] = ACTIONS(1077),
        [sym_comment] = ACTIONS(81),
    },
    [524] = {
        [aux_sym_print_statement_repeat1] = STATE(526),
        [anon_sym_LPAREN] = ACTIONS(259),
        [anon_sym_COMMA] = ACTIONS(1079),
        [anon_sym_STAR] = ACTIONS(947),
        [anon_sym_COLON] = ACTIONS(489),
        [anon_sym_PLUS] = ACTIONS(949),
        [anon_sym_DASH] = ACTIONS(949),
        [anon_sym_SLASH] = ACTIONS(951),
        [anon_sym_STAR_STAR] = ACTIONS(953),
        [anon_sym_PIPE] = ACTIONS(955),
        [anon_sym_AMP] = ACTIONS(957),
        [anon_sym_CARET] = ACTIONS(959),
        [anon_sym_LT_LT] = ACTIONS(949),
        [anon_sym_GT_GT] = ACTIONS(949),
        [anon_sym_and] = ACTIONS(957),
        [anon_sym_or] = ACTIONS(955),
        [anon_sym_LBRACK] = ACTIONS(275),
        [sym_comment] = ACTIONS(81),
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
        [anon_sym_not] = ACTIONS(943),
        [anon_sym_LBRACK] = ACTIONS(141),
        [anon_sym_LBRACE] = ACTIONS(143),
        [sym_number] = ACTIONS(145),
        [sym_identifier] = ACTIONS(147),
        [sym_comment] = ACTIONS(81),
    },
    [526] = {
        [anon_sym_COMMA] = ACTIONS(1081),
        [anon_sym_COLON] = ACTIONS(505),
        [sym_comment] = ACTIONS(81),
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
        [anon_sym_not] = ACTIONS(943),
        [anon_sym_LBRACK] = ACTIONS(141),
        [anon_sym_LBRACE] = ACTIONS(143),
        [sym_number] = ACTIONS(145),
        [sym_identifier] = ACTIONS(147),
        [sym_comment] = ACTIONS(81),
    },
    [528] = {
        [anon_sym_LPAREN] = ACTIONS(259),
        [anon_sym_COMMA] = ACTIONS(507),
        [anon_sym_STAR] = ACTIONS(947),
        [anon_sym_COLON] = ACTIONS(507),
        [anon_sym_PLUS] = ACTIONS(949),
        [anon_sym_DASH] = ACTIONS(949),
        [anon_sym_SLASH] = ACTIONS(951),
        [anon_sym_STAR_STAR] = ACTIONS(953),
        [anon_sym_PIPE] = ACTIONS(955),
        [anon_sym_AMP] = ACTIONS(957),
        [anon_sym_CARET] = ACTIONS(959),
        [anon_sym_LT_LT] = ACTIONS(949),
        [anon_sym_GT_GT] = ACTIONS(949),
        [anon_sym_and] = ACTIONS(957),
        [anon_sym_or] = ACTIONS(955),
        [anon_sym_LBRACK] = ACTIONS(275),
        [sym_comment] = ACTIONS(81),
    },
    [529] = {
        [anon_sym_LPAREN] = ACTIONS(259),
        [anon_sym_COMMA] = ACTIONS(509),
        [anon_sym_STAR] = ACTIONS(947),
        [anon_sym_COLON] = ACTIONS(509),
        [anon_sym_PLUS] = ACTIONS(949),
        [anon_sym_DASH] = ACTIONS(949),
        [anon_sym_SLASH] = ACTIONS(951),
        [anon_sym_STAR_STAR] = ACTIONS(953),
        [anon_sym_PIPE] = ACTIONS(955),
        [anon_sym_AMP] = ACTIONS(957),
        [anon_sym_CARET] = ACTIONS(959),
        [anon_sym_LT_LT] = ACTIONS(949),
        [anon_sym_GT_GT] = ACTIONS(949),
        [anon_sym_and] = ACTIONS(957),
        [anon_sym_or] = ACTIONS(955),
        [anon_sym_LBRACK] = ACTIONS(275),
        [sym_comment] = ACTIONS(81),
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
        [anon_sym_import] = ACTIONS(91),
        [anon_sym_from] = ACTIONS(93),
        [anon_sym_print] = ACTIONS(95),
        [anon_sym_return] = ACTIONS(97),
        [anon_sym_del] = ACTIONS(99),
        [sym_pass_statement] = ACTIONS(101),
        [sym_break_statement] = ACTIONS(101),
        [sym_continue_statement] = ACTIONS(101),
        [anon_sym_not] = ACTIONS(119),
        [anon_sym_LBRACK] = ACTIONS(121),
        [anon_sym_LBRACE] = ACTIONS(123),
        [sym_number] = ACTIONS(125),
        [sym_identifier] = ACTIONS(127),
        [sym_comment] = ACTIONS(81),
        [sym__indent] = ACTIONS(837),
    },
    [531] = {
        [sym_else_clause] = STATE(532),
        [anon_sym_import] = ACTIONS(1083),
        [anon_sym_from] = ACTIONS(1083),
        [anon_sym_print] = ACTIONS(1083),
        [anon_sym_return] = ACTIONS(1083),
        [anon_sym_del] = ACTIONS(1083),
        [sym_pass_statement] = ACTIONS(1083),
        [sym_break_statement] = ACTIONS(1083),
        [sym_continue_statement] = ACTIONS(1083),
        [anon_sym_if] = ACTIONS(1083),
        [anon_sym_else] = ACTIONS(1003),
        [anon_sym_for] = ACTIONS(1083),
        [anon_sym_while] = ACTIONS(1083),
        [anon_sym_try] = ACTIONS(1083),
        [anon_sym_with] = ACTIONS(1083),
        [anon_sym_def] = ACTIONS(1083),
        [anon_sym_class] = ACTIONS(1083),
        [anon_sym_AT] = ACTIONS(1085),
        [anon_sym_not] = ACTIONS(1083),
        [anon_sym_LBRACK] = ACTIONS(1085),
        [anon_sym_LBRACE] = ACTIONS(1085),
        [sym_number] = ACTIONS(1083),
        [sym_identifier] = ACTIONS(1087),
        [sym_comment] = ACTIONS(81),
        [sym__dedent] = ACTIONS(1085),
    },
    [532] = {
        [anon_sym_import] = ACTIONS(1089),
        [anon_sym_from] = ACTIONS(1089),
        [anon_sym_print] = ACTIONS(1089),
        [anon_sym_return] = ACTIONS(1089),
        [anon_sym_del] = ACTIONS(1089),
        [sym_pass_statement] = ACTIONS(1089),
        [sym_break_statement] = ACTIONS(1089),
        [sym_continue_statement] = ACTIONS(1089),
        [anon_sym_if] = ACTIONS(1089),
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
        [sym_number] = ACTIONS(1089),
        [sym_identifier] = ACTIONS(1093),
        [sym_comment] = ACTIONS(81),
        [sym__dedent] = ACTIONS(1091),
    },
    [533] = {
        [anon_sym_LPAREN] = ACTIONS(259),
        [anon_sym_STAR] = ACTIONS(447),
        [anon_sym_COLON] = ACTIONS(1095),
        [anon_sym_PLUS] = ACTIONS(451),
        [anon_sym_DASH] = ACTIONS(451),
        [anon_sym_SLASH] = ACTIONS(453),
        [anon_sym_STAR_STAR] = ACTIONS(455),
        [anon_sym_PIPE] = ACTIONS(457),
        [anon_sym_AMP] = ACTIONS(459),
        [anon_sym_CARET] = ACTIONS(461),
        [anon_sym_LT_LT] = ACTIONS(451),
        [anon_sym_GT_GT] = ACTIONS(451),
        [anon_sym_and] = ACTIONS(459),
        [anon_sym_or] = ACTIONS(457),
        [anon_sym_LBRACK] = ACTIONS(275),
        [sym_comment] = ACTIONS(81),
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
        [anon_sym_import] = ACTIONS(91),
        [anon_sym_from] = ACTIONS(93),
        [anon_sym_print] = ACTIONS(95),
        [anon_sym_return] = ACTIONS(97),
        [anon_sym_del] = ACTIONS(99),
        [sym_pass_statement] = ACTIONS(101),
        [sym_break_statement] = ACTIONS(101),
        [sym_continue_statement] = ACTIONS(101),
        [anon_sym_not] = ACTIONS(119),
        [anon_sym_LBRACK] = ACTIONS(121),
        [anon_sym_LBRACE] = ACTIONS(123),
        [sym_number] = ACTIONS(125),
        [sym_identifier] = ACTIONS(127),
        [sym_comment] = ACTIONS(81),
        [sym__indent] = ACTIONS(837),
    },
    [535] = {
        [sym_elif_clause] = STATE(537),
        [sym_else_clause] = STATE(538),
        [aux_sym_if_statement_repeat1] = STATE(539),
        [anon_sym_import] = ACTIONS(1097),
        [anon_sym_from] = ACTIONS(1097),
        [anon_sym_print] = ACTIONS(1097),
        [anon_sym_return] = ACTIONS(1097),
        [anon_sym_del] = ACTIONS(1097),
        [sym_pass_statement] = ACTIONS(1097),
        [sym_break_statement] = ACTIONS(1097),
        [sym_continue_statement] = ACTIONS(1097),
        [anon_sym_if] = ACTIONS(1097),
        [anon_sym_elif] = ACTIONS(1099),
        [anon_sym_else] = ACTIONS(1003),
        [anon_sym_for] = ACTIONS(1097),
        [anon_sym_while] = ACTIONS(1097),
        [anon_sym_try] = ACTIONS(1097),
        [anon_sym_with] = ACTIONS(1097),
        [anon_sym_def] = ACTIONS(1097),
        [anon_sym_class] = ACTIONS(1097),
        [anon_sym_AT] = ACTIONS(1101),
        [anon_sym_not] = ACTIONS(1097),
        [anon_sym_LBRACK] = ACTIONS(1101),
        [anon_sym_LBRACE] = ACTIONS(1101),
        [sym_number] = ACTIONS(1097),
        [sym_identifier] = ACTIONS(1103),
        [sym_comment] = ACTIONS(81),
        [sym__dedent] = ACTIONS(1101),
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
        [anon_sym_not] = ACTIONS(139),
        [anon_sym_LBRACK] = ACTIONS(141),
        [anon_sym_LBRACE] = ACTIONS(143),
        [sym_number] = ACTIONS(145),
        [sym_identifier] = ACTIONS(147),
        [sym_comment] = ACTIONS(81),
    },
    [537] = {
        [anon_sym_import] = ACTIONS(1105),
        [anon_sym_from] = ACTIONS(1105),
        [anon_sym_print] = ACTIONS(1105),
        [anon_sym_return] = ACTIONS(1105),
        [anon_sym_del] = ACTIONS(1105),
        [sym_pass_statement] = ACTIONS(1105),
        [sym_break_statement] = ACTIONS(1105),
        [sym_continue_statement] = ACTIONS(1105),
        [anon_sym_if] = ACTIONS(1105),
        [anon_sym_elif] = ACTIONS(1105),
        [anon_sym_else] = ACTIONS(1105),
        [anon_sym_for] = ACTIONS(1105),
        [anon_sym_while] = ACTIONS(1105),
        [anon_sym_try] = ACTIONS(1105),
        [anon_sym_with] = ACTIONS(1105),
        [anon_sym_def] = ACTIONS(1105),
        [anon_sym_class] = ACTIONS(1105),
        [anon_sym_AT] = ACTIONS(1107),
        [anon_sym_not] = ACTIONS(1105),
        [anon_sym_LBRACK] = ACTIONS(1107),
        [anon_sym_LBRACE] = ACTIONS(1107),
        [sym_number] = ACTIONS(1105),
        [sym_identifier] = ACTIONS(1109),
        [sym_comment] = ACTIONS(81),
        [sym__dedent] = ACTIONS(1107),
    },
    [538] = {
        [anon_sym_import] = ACTIONS(1111),
        [anon_sym_from] = ACTIONS(1111),
        [anon_sym_print] = ACTIONS(1111),
        [anon_sym_return] = ACTIONS(1111),
        [anon_sym_del] = ACTIONS(1111),
        [sym_pass_statement] = ACTIONS(1111),
        [sym_break_statement] = ACTIONS(1111),
        [sym_continue_statement] = ACTIONS(1111),
        [anon_sym_if] = ACTIONS(1111),
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
        [sym_number] = ACTIONS(1111),
        [sym_identifier] = ACTIONS(1115),
        [sym_comment] = ACTIONS(81),
        [sym__dedent] = ACTIONS(1113),
    },
    [539] = {
        [sym_elif_clause] = STATE(540),
        [sym_else_clause] = STATE(541),
        [anon_sym_import] = ACTIONS(1111),
        [anon_sym_from] = ACTIONS(1111),
        [anon_sym_print] = ACTIONS(1111),
        [anon_sym_return] = ACTIONS(1111),
        [anon_sym_del] = ACTIONS(1111),
        [sym_pass_statement] = ACTIONS(1111),
        [sym_break_statement] = ACTIONS(1111),
        [sym_continue_statement] = ACTIONS(1111),
        [anon_sym_if] = ACTIONS(1111),
        [anon_sym_elif] = ACTIONS(1099),
        [anon_sym_else] = ACTIONS(1003),
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
        [sym_number] = ACTIONS(1111),
        [sym_identifier] = ACTIONS(1115),
        [sym_comment] = ACTIONS(81),
        [sym__dedent] = ACTIONS(1113),
    },
    [540] = {
        [anon_sym_import] = ACTIONS(1117),
        [anon_sym_from] = ACTIONS(1117),
        [anon_sym_print] = ACTIONS(1117),
        [anon_sym_return] = ACTIONS(1117),
        [anon_sym_del] = ACTIONS(1117),
        [sym_pass_statement] = ACTIONS(1117),
        [sym_break_statement] = ACTIONS(1117),
        [sym_continue_statement] = ACTIONS(1117),
        [anon_sym_if] = ACTIONS(1117),
        [anon_sym_elif] = ACTIONS(1117),
        [anon_sym_else] = ACTIONS(1117),
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
        [sym_number] = ACTIONS(1117),
        [sym_identifier] = ACTIONS(1121),
        [sym_comment] = ACTIONS(81),
        [sym__dedent] = ACTIONS(1119),
    },
    [541] = {
        [anon_sym_import] = ACTIONS(1123),
        [anon_sym_from] = ACTIONS(1123),
        [anon_sym_print] = ACTIONS(1123),
        [anon_sym_return] = ACTIONS(1123),
        [anon_sym_del] = ACTIONS(1123),
        [sym_pass_statement] = ACTIONS(1123),
        [sym_break_statement] = ACTIONS(1123),
        [sym_continue_statement] = ACTIONS(1123),
        [anon_sym_if] = ACTIONS(1123),
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
        [sym_number] = ACTIONS(1123),
        [sym_identifier] = ACTIONS(1127),
        [sym_comment] = ACTIONS(81),
        [sym__dedent] = ACTIONS(1125),
    },
    [542] = {
        [anon_sym_LPAREN] = ACTIONS(259),
        [anon_sym_STAR] = ACTIONS(447),
        [anon_sym_COLON] = ACTIONS(1129),
        [anon_sym_PLUS] = ACTIONS(451),
        [anon_sym_DASH] = ACTIONS(451),
        [anon_sym_SLASH] = ACTIONS(453),
        [anon_sym_STAR_STAR] = ACTIONS(455),
        [anon_sym_PIPE] = ACTIONS(457),
        [anon_sym_AMP] = ACTIONS(459),
        [anon_sym_CARET] = ACTIONS(461),
        [anon_sym_LT_LT] = ACTIONS(451),
        [anon_sym_GT_GT] = ACTIONS(451),
        [anon_sym_and] = ACTIONS(459),
        [anon_sym_or] = ACTIONS(457),
        [anon_sym_LBRACK] = ACTIONS(275),
        [sym_comment] = ACTIONS(81),
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
        [anon_sym_import] = ACTIONS(91),
        [anon_sym_from] = ACTIONS(93),
        [anon_sym_print] = ACTIONS(95),
        [anon_sym_return] = ACTIONS(97),
        [anon_sym_del] = ACTIONS(99),
        [sym_pass_statement] = ACTIONS(101),
        [sym_break_statement] = ACTIONS(101),
        [sym_continue_statement] = ACTIONS(101),
        [anon_sym_not] = ACTIONS(119),
        [anon_sym_LBRACK] = ACTIONS(121),
        [anon_sym_LBRACE] = ACTIONS(123),
        [sym_number] = ACTIONS(125),
        [sym_identifier] = ACTIONS(127),
        [sym_comment] = ACTIONS(81),
        [sym__indent] = ACTIONS(837),
    },
    [544] = {
        [anon_sym_import] = ACTIONS(1131),
        [anon_sym_from] = ACTIONS(1131),
        [anon_sym_print] = ACTIONS(1131),
        [anon_sym_return] = ACTIONS(1131),
        [anon_sym_del] = ACTIONS(1131),
        [sym_pass_statement] = ACTIONS(1131),
        [sym_break_statement] = ACTIONS(1131),
        [sym_continue_statement] = ACTIONS(1131),
        [anon_sym_if] = ACTIONS(1131),
        [anon_sym_elif] = ACTIONS(1131),
        [anon_sym_else] = ACTIONS(1131),
        [anon_sym_for] = ACTIONS(1131),
        [anon_sym_while] = ACTIONS(1131),
        [anon_sym_try] = ACTIONS(1131),
        [anon_sym_with] = ACTIONS(1131),
        [anon_sym_def] = ACTIONS(1131),
        [anon_sym_class] = ACTIONS(1131),
        [anon_sym_AT] = ACTIONS(1133),
        [anon_sym_not] = ACTIONS(1131),
        [anon_sym_LBRACK] = ACTIONS(1133),
        [anon_sym_LBRACE] = ACTIONS(1133),
        [sym_number] = ACTIONS(1131),
        [sym_identifier] = ACTIONS(1135),
        [sym_comment] = ACTIONS(81),
        [sym__dedent] = ACTIONS(1133),
    },
    [545] = {
        [anon_sym_RPAREN] = ACTIONS(1137),
        [sym_comment] = ACTIONS(81),
    },
    [546] = {
        [anon_sym_COLON] = ACTIONS(1139),
        [sym_comment] = ACTIONS(81),
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
        [anon_sym_import] = ACTIONS(91),
        [anon_sym_from] = ACTIONS(93),
        [anon_sym_print] = ACTIONS(95),
        [anon_sym_return] = ACTIONS(97),
        [anon_sym_del] = ACTIONS(99),
        [sym_pass_statement] = ACTIONS(101),
        [sym_break_statement] = ACTIONS(101),
        [sym_continue_statement] = ACTIONS(101),
        [anon_sym_not] = ACTIONS(119),
        [anon_sym_LBRACK] = ACTIONS(121),
        [anon_sym_LBRACE] = ACTIONS(123),
        [sym_number] = ACTIONS(125),
        [sym_identifier] = ACTIONS(127),
        [sym_comment] = ACTIONS(81),
        [sym__indent] = ACTIONS(783),
    },
    [548] = {
        [ts_builtin_sym_end] = ACTIONS(849),
        [anon_sym_SEMI] = ACTIONS(849),
        [anon_sym_import] = ACTIONS(847),
        [anon_sym_from] = ACTIONS(847),
        [anon_sym_print] = ACTIONS(847),
        [anon_sym_return] = ACTIONS(847),
        [anon_sym_del] = ACTIONS(847),
        [sym_pass_statement] = ACTIONS(847),
        [sym_break_statement] = ACTIONS(847),
        [sym_continue_statement] = ACTIONS(847),
        [anon_sym_if] = ACTIONS(847),
        [anon_sym_for] = ACTIONS(847),
        [anon_sym_while] = ACTIONS(847),
        [anon_sym_try] = ACTIONS(847),
        [anon_sym_with] = ACTIONS(847),
        [anon_sym_def] = ACTIONS(847),
        [anon_sym_class] = ACTIONS(847),
        [anon_sym_AT] = ACTIONS(849),
        [anon_sym_not] = ACTIONS(847),
        [anon_sym_LBRACK] = ACTIONS(849),
        [anon_sym_LBRACE] = ACTIONS(849),
        [sym_number] = ACTIONS(847),
        [sym_identifier] = ACTIONS(851),
        [sym_comment] = ACTIONS(81),
        [sym__newline] = ACTIONS(849),
    },
    [549] = {
        [sym_parameters] = STATE(550),
        [anon_sym_LPAREN] = ACTIONS(853),
        [sym_comment] = ACTIONS(81),
    },
    [550] = {
        [anon_sym_COLON] = ACTIONS(1141),
        [sym_comment] = ACTIONS(81),
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
        [anon_sym_import] = ACTIONS(91),
        [anon_sym_from] = ACTIONS(93),
        [anon_sym_print] = ACTIONS(95),
        [anon_sym_return] = ACTIONS(97),
        [anon_sym_del] = ACTIONS(99),
        [sym_pass_statement] = ACTIONS(101),
        [sym_break_statement] = ACTIONS(101),
        [sym_continue_statement] = ACTIONS(101),
        [anon_sym_not] = ACTIONS(119),
        [anon_sym_LBRACK] = ACTIONS(121),
        [anon_sym_LBRACE] = ACTIONS(123),
        [sym_number] = ACTIONS(125),
        [sym_identifier] = ACTIONS(127),
        [sym_comment] = ACTIONS(81),
        [sym__indent] = ACTIONS(783),
    },
    [552] = {
        [ts_builtin_sym_end] = ACTIONS(865),
        [anon_sym_SEMI] = ACTIONS(865),
        [anon_sym_import] = ACTIONS(863),
        [anon_sym_from] = ACTIONS(863),
        [anon_sym_print] = ACTIONS(863),
        [anon_sym_return] = ACTIONS(863),
        [anon_sym_del] = ACTIONS(863),
        [sym_pass_statement] = ACTIONS(863),
        [sym_break_statement] = ACTIONS(863),
        [sym_continue_statement] = ACTIONS(863),
        [anon_sym_if] = ACTIONS(863),
        [anon_sym_for] = ACTIONS(863),
        [anon_sym_while] = ACTIONS(863),
        [anon_sym_try] = ACTIONS(863),
        [anon_sym_with] = ACTIONS(863),
        [anon_sym_def] = ACTIONS(863),
        [anon_sym_class] = ACTIONS(863),
        [anon_sym_AT] = ACTIONS(865),
        [anon_sym_not] = ACTIONS(863),
        [anon_sym_LBRACK] = ACTIONS(865),
        [anon_sym_LBRACE] = ACTIONS(865),
        [sym_number] = ACTIONS(863),
        [sym_identifier] = ACTIONS(867),
        [sym_comment] = ACTIONS(81),
        [sym__newline] = ACTIONS(865),
    },
    [553] = {
        [aux_sym_with_statement_repeat1] = STATE(555),
        [anon_sym_COMMA] = ACTIONS(921),
        [anon_sym_COLON] = ACTIONS(1143),
        [sym_comment] = ACTIONS(81),
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
        [anon_sym_import] = ACTIONS(91),
        [anon_sym_from] = ACTIONS(93),
        [anon_sym_print] = ACTIONS(95),
        [anon_sym_return] = ACTIONS(97),
        [anon_sym_del] = ACTIONS(99),
        [sym_pass_statement] = ACTIONS(101),
        [sym_break_statement] = ACTIONS(101),
        [sym_continue_statement] = ACTIONS(101),
        [anon_sym_not] = ACTIONS(119),
        [anon_sym_LBRACK] = ACTIONS(121),
        [anon_sym_LBRACE] = ACTIONS(123),
        [sym_number] = ACTIONS(125),
        [sym_identifier] = ACTIONS(127),
        [sym_comment] = ACTIONS(81),
        [sym__indent] = ACTIONS(783),
    },
    [555] = {
        [anon_sym_COMMA] = ACTIONS(961),
        [anon_sym_COLON] = ACTIONS(1145),
        [sym_comment] = ACTIONS(81),
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
        [anon_sym_import] = ACTIONS(91),
        [anon_sym_from] = ACTIONS(93),
        [anon_sym_print] = ACTIONS(95),
        [anon_sym_return] = ACTIONS(97),
        [anon_sym_del] = ACTIONS(99),
        [sym_pass_statement] = ACTIONS(101),
        [sym_break_statement] = ACTIONS(101),
        [sym_continue_statement] = ACTIONS(101),
        [anon_sym_not] = ACTIONS(119),
        [anon_sym_LBRACK] = ACTIONS(121),
        [anon_sym_LBRACE] = ACTIONS(123),
        [sym_number] = ACTIONS(125),
        [sym_identifier] = ACTIONS(127),
        [sym_comment] = ACTIONS(81),
        [sym__indent] = ACTIONS(783),
    },
    [557] = {
        [ts_builtin_sym_end] = ACTIONS(967),
        [anon_sym_SEMI] = ACTIONS(967),
        [anon_sym_import] = ACTIONS(965),
        [anon_sym_from] = ACTIONS(965),
        [anon_sym_print] = ACTIONS(965),
        [anon_sym_return] = ACTIONS(965),
        [anon_sym_del] = ACTIONS(965),
        [sym_pass_statement] = ACTIONS(965),
        [sym_break_statement] = ACTIONS(965),
        [sym_continue_statement] = ACTIONS(965),
        [anon_sym_if] = ACTIONS(965),
        [anon_sym_for] = ACTIONS(965),
        [anon_sym_while] = ACTIONS(965),
        [anon_sym_try] = ACTIONS(965),
        [anon_sym_with] = ACTIONS(965),
        [anon_sym_def] = ACTIONS(965),
        [anon_sym_class] = ACTIONS(965),
        [anon_sym_AT] = ACTIONS(967),
        [anon_sym_not] = ACTIONS(965),
        [anon_sym_LBRACK] = ACTIONS(967),
        [anon_sym_LBRACE] = ACTIONS(967),
        [sym_number] = ACTIONS(965),
        [sym_identifier] = ACTIONS(969),
        [sym_comment] = ACTIONS(81),
        [sym__newline] = ACTIONS(967),
    },
    [558] = {
        [ts_builtin_sym_end] = ACTIONS(975),
        [anon_sym_SEMI] = ACTIONS(975),
        [anon_sym_import] = ACTIONS(973),
        [anon_sym_from] = ACTIONS(973),
        [anon_sym_print] = ACTIONS(973),
        [anon_sym_return] = ACTIONS(973),
        [anon_sym_del] = ACTIONS(973),
        [sym_pass_statement] = ACTIONS(973),
        [sym_break_statement] = ACTIONS(973),
        [sym_continue_statement] = ACTIONS(973),
        [anon_sym_if] = ACTIONS(973),
        [anon_sym_for] = ACTIONS(973),
        [anon_sym_while] = ACTIONS(973),
        [anon_sym_try] = ACTIONS(973),
        [anon_sym_with] = ACTIONS(973),
        [anon_sym_def] = ACTIONS(973),
        [anon_sym_class] = ACTIONS(973),
        [anon_sym_AT] = ACTIONS(975),
        [anon_sym_not] = ACTIONS(973),
        [anon_sym_LBRACK] = ACTIONS(975),
        [anon_sym_LBRACE] = ACTIONS(975),
        [sym_number] = ACTIONS(973),
        [sym_identifier] = ACTIONS(977),
        [sym_comment] = ACTIONS(81),
        [sym__newline] = ACTIONS(975),
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
        [anon_sym_import] = ACTIONS(91),
        [anon_sym_from] = ACTIONS(93),
        [anon_sym_print] = ACTIONS(95),
        [anon_sym_return] = ACTIONS(97),
        [anon_sym_del] = ACTIONS(99),
        [sym_pass_statement] = ACTIONS(101),
        [sym_break_statement] = ACTIONS(101),
        [sym_continue_statement] = ACTIONS(101),
        [anon_sym_not] = ACTIONS(119),
        [anon_sym_LBRACK] = ACTIONS(121),
        [anon_sym_LBRACE] = ACTIONS(123),
        [sym_number] = ACTIONS(125),
        [sym_identifier] = ACTIONS(127),
        [sym_comment] = ACTIONS(81),
        [sym__indent] = ACTIONS(981),
    },
    [560] = {
        [sym_except_clause] = STATE(563),
        [sym_finally_clause] = STATE(564),
        [aux_sym_try_statement_repeat1] = STATE(565),
        [anon_sym_except] = ACTIONS(1147),
        [anon_sym_finally] = ACTIONS(1149),
        [sym_comment] = ACTIONS(81),
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
        [anon_sym_not] = ACTIONS(153),
        [anon_sym_LBRACK] = ACTIONS(141),
        [anon_sym_LBRACE] = ACTIONS(143),
        [sym_number] = ACTIONS(145),
        [sym_identifier] = ACTIONS(147),
        [sym_comment] = ACTIONS(81),
    },
    [562] = {
        [anon_sym_COLON] = ACTIONS(1151),
        [sym_comment] = ACTIONS(81),
    },
    [563] = {
        [ts_builtin_sym_end] = ACTIONS(993),
        [anon_sym_SEMI] = ACTIONS(993),
        [anon_sym_import] = ACTIONS(991),
        [anon_sym_from] = ACTIONS(991),
        [anon_sym_print] = ACTIONS(991),
        [anon_sym_return] = ACTIONS(991),
        [anon_sym_del] = ACTIONS(991),
        [sym_pass_statement] = ACTIONS(991),
        [sym_break_statement] = ACTIONS(991),
        [sym_continue_statement] = ACTIONS(991),
        [anon_sym_if] = ACTIONS(991),
        [anon_sym_else] = ACTIONS(991),
        [anon_sym_for] = ACTIONS(991),
        [anon_sym_while] = ACTIONS(991),
        [anon_sym_try] = ACTIONS(991),
        [anon_sym_except] = ACTIONS(991),
        [anon_sym_finally] = ACTIONS(991),
        [anon_sym_with] = ACTIONS(991),
        [anon_sym_def] = ACTIONS(991),
        [anon_sym_class] = ACTIONS(991),
        [anon_sym_AT] = ACTIONS(993),
        [anon_sym_not] = ACTIONS(991),
        [anon_sym_LBRACK] = ACTIONS(993),
        [anon_sym_LBRACE] = ACTIONS(993),
        [sym_number] = ACTIONS(991),
        [sym_identifier] = ACTIONS(995),
        [sym_comment] = ACTIONS(81),
        [sym__newline] = ACTIONS(993),
    },
    [564] = {
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
        [anon_sym_for] = ACTIONS(997),
        [anon_sym_while] = ACTIONS(997),
        [anon_sym_try] = ACTIONS(997),
        [anon_sym_with] = ACTIONS(997),
        [anon_sym_def] = ACTIONS(997),
        [anon_sym_class] = ACTIONS(997),
        [anon_sym_AT] = ACTIONS(999),
        [anon_sym_not] = ACTIONS(997),
        [anon_sym_LBRACK] = ACTIONS(999),
        [anon_sym_LBRACE] = ACTIONS(999),
        [sym_number] = ACTIONS(997),
        [sym_identifier] = ACTIONS(1001),
        [sym_comment] = ACTIONS(81),
        [sym__newline] = ACTIONS(999),
    },
    [565] = {
        [sym_else_clause] = STATE(567),
        [sym_except_clause] = STATE(568),
        [sym_finally_clause] = STATE(569),
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
        [anon_sym_else] = ACTIONS(1153),
        [anon_sym_for] = ACTIONS(997),
        [anon_sym_while] = ACTIONS(997),
        [anon_sym_try] = ACTIONS(997),
        [anon_sym_except] = ACTIONS(1155),
        [anon_sym_finally] = ACTIONS(1157),
        [anon_sym_with] = ACTIONS(997),
        [anon_sym_def] = ACTIONS(997),
        [anon_sym_class] = ACTIONS(997),
        [anon_sym_AT] = ACTIONS(999),
        [anon_sym_not] = ACTIONS(997),
        [anon_sym_LBRACK] = ACTIONS(999),
        [anon_sym_LBRACE] = ACTIONS(999),
        [sym_number] = ACTIONS(997),
        [sym_identifier] = ACTIONS(1001),
        [sym_comment] = ACTIONS(81),
        [sym__newline] = ACTIONS(999),
    },
    [566] = {
        [anon_sym_COLON] = ACTIONS(1159),
        [sym_comment] = ACTIONS(81),
    },
    [567] = {
        [sym_finally_clause] = STATE(570),
        [ts_builtin_sym_end] = ACTIONS(1013),
        [anon_sym_SEMI] = ACTIONS(1013),
        [anon_sym_import] = ACTIONS(1011),
        [anon_sym_from] = ACTIONS(1011),
        [anon_sym_print] = ACTIONS(1011),
        [anon_sym_return] = ACTIONS(1011),
        [anon_sym_del] = ACTIONS(1011),
        [sym_pass_statement] = ACTIONS(1011),
        [sym_break_statement] = ACTIONS(1011),
        [sym_continue_statement] = ACTIONS(1011),
        [anon_sym_if] = ACTIONS(1011),
        [anon_sym_for] = ACTIONS(1011),
        [anon_sym_while] = ACTIONS(1011),
        [anon_sym_try] = ACTIONS(1011),
        [anon_sym_finally] = ACTIONS(1157),
        [anon_sym_with] = ACTIONS(1011),
        [anon_sym_def] = ACTIONS(1011),
        [anon_sym_class] = ACTIONS(1011),
        [anon_sym_AT] = ACTIONS(1013),
        [anon_sym_not] = ACTIONS(1011),
        [anon_sym_LBRACK] = ACTIONS(1013),
        [anon_sym_LBRACE] = ACTIONS(1013),
        [sym_number] = ACTIONS(1011),
        [sym_identifier] = ACTIONS(1015),
        [sym_comment] = ACTIONS(81),
        [sym__newline] = ACTIONS(1013),
    },
    [568] = {
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
        [anon_sym_else] = ACTIONS(1017),
        [anon_sym_for] = ACTIONS(1017),
        [anon_sym_while] = ACTIONS(1017),
        [anon_sym_try] = ACTIONS(1017),
        [anon_sym_except] = ACTIONS(1017),
        [anon_sym_finally] = ACTIONS(1017),
        [anon_sym_with] = ACTIONS(1017),
        [anon_sym_def] = ACTIONS(1017),
        [anon_sym_class] = ACTIONS(1017),
        [anon_sym_AT] = ACTIONS(1019),
        [anon_sym_not] = ACTIONS(1017),
        [anon_sym_LBRACK] = ACTIONS(1019),
        [anon_sym_LBRACE] = ACTIONS(1019),
        [sym_number] = ACTIONS(1017),
        [sym_identifier] = ACTIONS(1021),
        [sym_comment] = ACTIONS(81),
        [sym__newline] = ACTIONS(1019),
    },
    [569] = {
        [ts_builtin_sym_end] = ACTIONS(1013),
        [anon_sym_SEMI] = ACTIONS(1013),
        [anon_sym_import] = ACTIONS(1011),
        [anon_sym_from] = ACTIONS(1011),
        [anon_sym_print] = ACTIONS(1011),
        [anon_sym_return] = ACTIONS(1011),
        [anon_sym_del] = ACTIONS(1011),
        [sym_pass_statement] = ACTIONS(1011),
        [sym_break_statement] = ACTIONS(1011),
        [sym_continue_statement] = ACTIONS(1011),
        [anon_sym_if] = ACTIONS(1011),
        [anon_sym_for] = ACTIONS(1011),
        [anon_sym_while] = ACTIONS(1011),
        [anon_sym_try] = ACTIONS(1011),
        [anon_sym_with] = ACTIONS(1011),
        [anon_sym_def] = ACTIONS(1011),
        [anon_sym_class] = ACTIONS(1011),
        [anon_sym_AT] = ACTIONS(1013),
        [anon_sym_not] = ACTIONS(1011),
        [anon_sym_LBRACK] = ACTIONS(1013),
        [anon_sym_LBRACE] = ACTIONS(1013),
        [sym_number] = ACTIONS(1011),
        [sym_identifier] = ACTIONS(1015),
        [sym_comment] = ACTIONS(81),
        [sym__newline] = ACTIONS(1013),
    },
    [570] = {
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
        [anon_sym_for] = ACTIONS(1023),
        [anon_sym_while] = ACTIONS(1023),
        [anon_sym_try] = ACTIONS(1023),
        [anon_sym_with] = ACTIONS(1023),
        [anon_sym_def] = ACTIONS(1023),
        [anon_sym_class] = ACTIONS(1023),
        [anon_sym_AT] = ACTIONS(1025),
        [anon_sym_not] = ACTIONS(1023),
        [anon_sym_LBRACK] = ACTIONS(1025),
        [anon_sym_LBRACE] = ACTIONS(1025),
        [sym_number] = ACTIONS(1023),
        [sym_identifier] = ACTIONS(1027),
        [sym_comment] = ACTIONS(81),
        [sym__newline] = ACTIONS(1025),
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
        [anon_sym_import] = ACTIONS(91),
        [anon_sym_from] = ACTIONS(93),
        [anon_sym_print] = ACTIONS(95),
        [anon_sym_return] = ACTIONS(97),
        [anon_sym_del] = ACTIONS(99),
        [sym_pass_statement] = ACTIONS(101),
        [sym_break_statement] = ACTIONS(101),
        [sym_continue_statement] = ACTIONS(101),
        [anon_sym_not] = ACTIONS(119),
        [anon_sym_LBRACK] = ACTIONS(121),
        [anon_sym_LBRACE] = ACTIONS(123),
        [sym_number] = ACTIONS(125),
        [sym_identifier] = ACTIONS(127),
        [sym_comment] = ACTIONS(81),
        [sym__indent] = ACTIONS(783),
    },
    [572] = {
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
        [anon_sym_finally] = ACTIONS(1029),
        [anon_sym_with] = ACTIONS(1029),
        [anon_sym_def] = ACTIONS(1029),
        [anon_sym_class] = ACTIONS(1029),
        [anon_sym_AT] = ACTIONS(1031),
        [anon_sym_not] = ACTIONS(1029),
        [anon_sym_LBRACK] = ACTIONS(1031),
        [anon_sym_LBRACE] = ACTIONS(1031),
        [sym_number] = ACTIONS(1029),
        [sym_identifier] = ACTIONS(1033),
        [sym_comment] = ACTIONS(81),
        [sym__newline] = ACTIONS(1031),
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
        [anon_sym_import] = ACTIONS(91),
        [anon_sym_from] = ACTIONS(93),
        [anon_sym_print] = ACTIONS(95),
        [anon_sym_return] = ACTIONS(97),
        [anon_sym_del] = ACTIONS(99),
        [sym_pass_statement] = ACTIONS(101),
        [sym_break_statement] = ACTIONS(101),
        [sym_continue_statement] = ACTIONS(101),
        [anon_sym_not] = ACTIONS(119),
        [anon_sym_LBRACK] = ACTIONS(121),
        [anon_sym_LBRACE] = ACTIONS(123),
        [sym_number] = ACTIONS(125),
        [sym_identifier] = ACTIONS(127),
        [sym_comment] = ACTIONS(81),
        [sym__indent] = ACTIONS(783),
    },
    [574] = {
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
        [anon_sym_with] = ACTIONS(1035),
        [anon_sym_def] = ACTIONS(1035),
        [anon_sym_class] = ACTIONS(1035),
        [anon_sym_AT] = ACTIONS(1037),
        [anon_sym_not] = ACTIONS(1035),
        [anon_sym_LBRACK] = ACTIONS(1037),
        [anon_sym_LBRACE] = ACTIONS(1037),
        [sym_number] = ACTIONS(1035),
        [sym_identifier] = ACTIONS(1039),
        [sym_comment] = ACTIONS(81),
        [sym__newline] = ACTIONS(1037),
    },
    [575] = {
        [anon_sym_LPAREN] = ACTIONS(259),
        [anon_sym_COMMA] = ACTIONS(1161),
        [anon_sym_as] = ACTIONS(1161),
        [anon_sym_STAR] = ACTIONS(929),
        [anon_sym_COLON] = ACTIONS(1163),
        [anon_sym_PLUS] = ACTIONS(931),
        [anon_sym_DASH] = ACTIONS(931),
        [anon_sym_SLASH] = ACTIONS(933),
        [anon_sym_STAR_STAR] = ACTIONS(935),
        [anon_sym_PIPE] = ACTIONS(937),
        [anon_sym_AMP] = ACTIONS(939),
        [anon_sym_CARET] = ACTIONS(941),
        [anon_sym_LT_LT] = ACTIONS(931),
        [anon_sym_GT_GT] = ACTIONS(931),
        [anon_sym_and] = ACTIONS(939),
        [anon_sym_or] = ACTIONS(937),
        [anon_sym_LBRACK] = ACTIONS(275),
        [sym_comment] = ACTIONS(81),
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
        [anon_sym_not] = ACTIONS(139),
        [anon_sym_LBRACK] = ACTIONS(141),
        [anon_sym_LBRACE] = ACTIONS(143),
        [sym_number] = ACTIONS(145),
        [sym_identifier] = ACTIONS(147),
        [sym_comment] = ACTIONS(81),
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
        [anon_sym_import] = ACTIONS(91),
        [anon_sym_from] = ACTIONS(93),
        [anon_sym_print] = ACTIONS(95),
        [anon_sym_return] = ACTIONS(97),
        [anon_sym_del] = ACTIONS(99),
        [sym_pass_statement] = ACTIONS(101),
        [sym_break_statement] = ACTIONS(101),
        [sym_continue_statement] = ACTIONS(101),
        [anon_sym_not] = ACTIONS(119),
        [anon_sym_LBRACK] = ACTIONS(121),
        [anon_sym_LBRACE] = ACTIONS(123),
        [sym_number] = ACTIONS(125),
        [sym_identifier] = ACTIONS(127),
        [sym_comment] = ACTIONS(81),
        [sym__indent] = ACTIONS(783),
    },
    [578] = {
        [ts_builtin_sym_end] = ACTIONS(1047),
        [anon_sym_SEMI] = ACTIONS(1047),
        [anon_sym_import] = ACTIONS(1045),
        [anon_sym_from] = ACTIONS(1045),
        [anon_sym_print] = ACTIONS(1045),
        [anon_sym_return] = ACTIONS(1045),
        [anon_sym_del] = ACTIONS(1045),
        [sym_pass_statement] = ACTIONS(1045),
        [sym_break_statement] = ACTIONS(1045),
        [sym_continue_statement] = ACTIONS(1045),
        [anon_sym_if] = ACTIONS(1045),
        [anon_sym_else] = ACTIONS(1045),
        [anon_sym_for] = ACTIONS(1045),
        [anon_sym_while] = ACTIONS(1045),
        [anon_sym_try] = ACTIONS(1045),
        [anon_sym_except] = ACTIONS(1045),
        [anon_sym_finally] = ACTIONS(1045),
        [anon_sym_with] = ACTIONS(1045),
        [anon_sym_def] = ACTIONS(1045),
        [anon_sym_class] = ACTIONS(1045),
        [anon_sym_AT] = ACTIONS(1047),
        [anon_sym_not] = ACTIONS(1045),
        [anon_sym_LBRACK] = ACTIONS(1047),
        [anon_sym_LBRACE] = ACTIONS(1047),
        [sym_number] = ACTIONS(1045),
        [sym_identifier] = ACTIONS(1049),
        [sym_comment] = ACTIONS(81),
        [sym__newline] = ACTIONS(1047),
    },
    [579] = {
        [anon_sym_LPAREN] = ACTIONS(259),
        [anon_sym_STAR] = ACTIONS(447),
        [anon_sym_COLON] = ACTIONS(1165),
        [anon_sym_PLUS] = ACTIONS(451),
        [anon_sym_DASH] = ACTIONS(451),
        [anon_sym_SLASH] = ACTIONS(453),
        [anon_sym_STAR_STAR] = ACTIONS(455),
        [anon_sym_PIPE] = ACTIONS(457),
        [anon_sym_AMP] = ACTIONS(459),
        [anon_sym_CARET] = ACTIONS(461),
        [anon_sym_LT_LT] = ACTIONS(451),
        [anon_sym_GT_GT] = ACTIONS(451),
        [anon_sym_and] = ACTIONS(459),
        [anon_sym_or] = ACTIONS(457),
        [anon_sym_LBRACK] = ACTIONS(275),
        [sym_comment] = ACTIONS(81),
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
        [anon_sym_import] = ACTIONS(91),
        [anon_sym_from] = ACTIONS(93),
        [anon_sym_print] = ACTIONS(95),
        [anon_sym_return] = ACTIONS(97),
        [anon_sym_del] = ACTIONS(99),
        [sym_pass_statement] = ACTIONS(101),
        [sym_break_statement] = ACTIONS(101),
        [sym_continue_statement] = ACTIONS(101),
        [anon_sym_not] = ACTIONS(119),
        [anon_sym_LBRACK] = ACTIONS(121),
        [anon_sym_LBRACE] = ACTIONS(123),
        [sym_number] = ACTIONS(125),
        [sym_identifier] = ACTIONS(127),
        [sym_comment] = ACTIONS(81),
        [sym__indent] = ACTIONS(783),
    },
    [581] = {
        [ts_builtin_sym_end] = ACTIONS(1055),
        [anon_sym_SEMI] = ACTIONS(1055),
        [anon_sym_import] = ACTIONS(1053),
        [anon_sym_from] = ACTIONS(1053),
        [anon_sym_print] = ACTIONS(1053),
        [anon_sym_return] = ACTIONS(1053),
        [anon_sym_del] = ACTIONS(1053),
        [sym_pass_statement] = ACTIONS(1053),
        [sym_break_statement] = ACTIONS(1053),
        [sym_continue_statement] = ACTIONS(1053),
        [anon_sym_if] = ACTIONS(1053),
        [anon_sym_else] = ACTIONS(1053),
        [anon_sym_for] = ACTIONS(1053),
        [anon_sym_while] = ACTIONS(1053),
        [anon_sym_try] = ACTIONS(1053),
        [anon_sym_except] = ACTIONS(1053),
        [anon_sym_finally] = ACTIONS(1053),
        [anon_sym_with] = ACTIONS(1053),
        [anon_sym_def] = ACTIONS(1053),
        [anon_sym_class] = ACTIONS(1053),
        [anon_sym_AT] = ACTIONS(1055),
        [anon_sym_not] = ACTIONS(1053),
        [anon_sym_LBRACK] = ACTIONS(1055),
        [anon_sym_LBRACE] = ACTIONS(1055),
        [sym_number] = ACTIONS(1053),
        [sym_identifier] = ACTIONS(1057),
        [sym_comment] = ACTIONS(81),
        [sym__newline] = ACTIONS(1055),
    },
    [582] = {
        [anon_sym_LPAREN] = ACTIONS(259),
        [anon_sym_STAR] = ACTIONS(447),
        [anon_sym_COLON] = ACTIONS(1167),
        [anon_sym_PLUS] = ACTIONS(451),
        [anon_sym_DASH] = ACTIONS(451),
        [anon_sym_SLASH] = ACTIONS(453),
        [anon_sym_STAR_STAR] = ACTIONS(455),
        [anon_sym_PIPE] = ACTIONS(457),
        [anon_sym_AMP] = ACTIONS(459),
        [anon_sym_CARET] = ACTIONS(461),
        [anon_sym_LT_LT] = ACTIONS(451),
        [anon_sym_GT_GT] = ACTIONS(451),
        [anon_sym_and] = ACTIONS(459),
        [anon_sym_or] = ACTIONS(457),
        [anon_sym_LBRACK] = ACTIONS(275),
        [sym_comment] = ACTIONS(81),
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
        [anon_sym_import] = ACTIONS(91),
        [anon_sym_from] = ACTIONS(93),
        [anon_sym_print] = ACTIONS(95),
        [anon_sym_return] = ACTIONS(97),
        [anon_sym_del] = ACTIONS(99),
        [sym_pass_statement] = ACTIONS(101),
        [sym_break_statement] = ACTIONS(101),
        [sym_continue_statement] = ACTIONS(101),
        [anon_sym_not] = ACTIONS(119),
        [anon_sym_LBRACK] = ACTIONS(121),
        [anon_sym_LBRACE] = ACTIONS(123),
        [sym_number] = ACTIONS(125),
        [sym_identifier] = ACTIONS(127),
        [sym_comment] = ACTIONS(81),
        [sym__indent] = ACTIONS(783),
    },
    [584] = {
        [sym_else_clause] = STATE(585),
        [ts_builtin_sym_end] = ACTIONS(1065),
        [anon_sym_SEMI] = ACTIONS(1065),
        [anon_sym_import] = ACTIONS(1063),
        [anon_sym_from] = ACTIONS(1063),
        [anon_sym_print] = ACTIONS(1063),
        [anon_sym_return] = ACTIONS(1063),
        [anon_sym_del] = ACTIONS(1063),
        [sym_pass_statement] = ACTIONS(1063),
        [sym_break_statement] = ACTIONS(1063),
        [sym_continue_statement] = ACTIONS(1063),
        [anon_sym_if] = ACTIONS(1063),
        [anon_sym_else] = ACTIONS(1153),
        [anon_sym_for] = ACTIONS(1063),
        [anon_sym_while] = ACTIONS(1063),
        [anon_sym_try] = ACTIONS(1063),
        [anon_sym_with] = ACTIONS(1063),
        [anon_sym_def] = ACTIONS(1063),
        [anon_sym_class] = ACTIONS(1063),
        [anon_sym_AT] = ACTIONS(1065),
        [anon_sym_not] = ACTIONS(1063),
        [anon_sym_LBRACK] = ACTIONS(1065),
        [anon_sym_LBRACE] = ACTIONS(1065),
        [sym_number] = ACTIONS(1063),
        [sym_identifier] = ACTIONS(1067),
        [sym_comment] = ACTIONS(81),
        [sym__newline] = ACTIONS(1065),
    },
    [585] = {
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
        [sym_number] = ACTIONS(1069),
        [sym_identifier] = ACTIONS(1073),
        [sym_comment] = ACTIONS(81),
        [sym__newline] = ACTIONS(1071),
    },
    [586] = {
        [anon_sym_in] = ACTIONS(1169),
        [sym_comment] = ACTIONS(81),
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
        [anon_sym_not] = ACTIONS(943),
        [anon_sym_LBRACK] = ACTIONS(141),
        [anon_sym_LBRACE] = ACTIONS(143),
        [sym_number] = ACTIONS(145),
        [sym_identifier] = ACTIONS(147),
        [sym_comment] = ACTIONS(81),
    },
    [588] = {
        [anon_sym_COLON] = ACTIONS(1171),
        [sym_comment] = ACTIONS(81),
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
        [anon_sym_import] = ACTIONS(91),
        [anon_sym_from] = ACTIONS(93),
        [anon_sym_print] = ACTIONS(95),
        [anon_sym_return] = ACTIONS(97),
        [anon_sym_del] = ACTIONS(99),
        [sym_pass_statement] = ACTIONS(101),
        [sym_break_statement] = ACTIONS(101),
        [sym_continue_statement] = ACTIONS(101),
        [anon_sym_not] = ACTIONS(119),
        [anon_sym_LBRACK] = ACTIONS(121),
        [anon_sym_LBRACE] = ACTIONS(123),
        [sym_number] = ACTIONS(125),
        [sym_identifier] = ACTIONS(127),
        [sym_comment] = ACTIONS(81),
        [sym__indent] = ACTIONS(783),
    },
    [590] = {
        [sym_else_clause] = STATE(591),
        [ts_builtin_sym_end] = ACTIONS(1085),
        [anon_sym_SEMI] = ACTIONS(1085),
        [anon_sym_import] = ACTIONS(1083),
        [anon_sym_from] = ACTIONS(1083),
        [anon_sym_print] = ACTIONS(1083),
        [anon_sym_return] = ACTIONS(1083),
        [anon_sym_del] = ACTIONS(1083),
        [sym_pass_statement] = ACTIONS(1083),
        [sym_break_statement] = ACTIONS(1083),
        [sym_continue_statement] = ACTIONS(1083),
        [anon_sym_if] = ACTIONS(1083),
        [anon_sym_else] = ACTIONS(1153),
        [anon_sym_for] = ACTIONS(1083),
        [anon_sym_while] = ACTIONS(1083),
        [anon_sym_try] = ACTIONS(1083),
        [anon_sym_with] = ACTIONS(1083),
        [anon_sym_def] = ACTIONS(1083),
        [anon_sym_class] = ACTIONS(1083),
        [anon_sym_AT] = ACTIONS(1085),
        [anon_sym_not] = ACTIONS(1083),
        [anon_sym_LBRACK] = ACTIONS(1085),
        [anon_sym_LBRACE] = ACTIONS(1085),
        [sym_number] = ACTIONS(1083),
        [sym_identifier] = ACTIONS(1087),
        [sym_comment] = ACTIONS(81),
        [sym__newline] = ACTIONS(1085),
    },
    [591] = {
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
        [sym_number] = ACTIONS(1089),
        [sym_identifier] = ACTIONS(1093),
        [sym_comment] = ACTIONS(81),
        [sym__newline] = ACTIONS(1091),
    },
    [592] = {
        [anon_sym_LPAREN] = ACTIONS(259),
        [anon_sym_STAR] = ACTIONS(447),
        [anon_sym_COLON] = ACTIONS(1173),
        [anon_sym_PLUS] = ACTIONS(451),
        [anon_sym_DASH] = ACTIONS(451),
        [anon_sym_SLASH] = ACTIONS(453),
        [anon_sym_STAR_STAR] = ACTIONS(455),
        [anon_sym_PIPE] = ACTIONS(457),
        [anon_sym_AMP] = ACTIONS(459),
        [anon_sym_CARET] = ACTIONS(461),
        [anon_sym_LT_LT] = ACTIONS(451),
        [anon_sym_GT_GT] = ACTIONS(451),
        [anon_sym_and] = ACTIONS(459),
        [anon_sym_or] = ACTIONS(457),
        [anon_sym_LBRACK] = ACTIONS(275),
        [sym_comment] = ACTIONS(81),
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
        [anon_sym_import] = ACTIONS(91),
        [anon_sym_from] = ACTIONS(93),
        [anon_sym_print] = ACTIONS(95),
        [anon_sym_return] = ACTIONS(97),
        [anon_sym_del] = ACTIONS(99),
        [sym_pass_statement] = ACTIONS(101),
        [sym_break_statement] = ACTIONS(101),
        [sym_continue_statement] = ACTIONS(101),
        [anon_sym_not] = ACTIONS(119),
        [anon_sym_LBRACK] = ACTIONS(121),
        [anon_sym_LBRACE] = ACTIONS(123),
        [sym_number] = ACTIONS(125),
        [sym_identifier] = ACTIONS(127),
        [sym_comment] = ACTIONS(81),
        [sym__indent] = ACTIONS(783),
    },
    [594] = {
        [sym_elif_clause] = STATE(596),
        [sym_else_clause] = STATE(597),
        [aux_sym_if_statement_repeat1] = STATE(598),
        [ts_builtin_sym_end] = ACTIONS(1101),
        [anon_sym_SEMI] = ACTIONS(1101),
        [anon_sym_import] = ACTIONS(1097),
        [anon_sym_from] = ACTIONS(1097),
        [anon_sym_print] = ACTIONS(1097),
        [anon_sym_return] = ACTIONS(1097),
        [anon_sym_del] = ACTIONS(1097),
        [sym_pass_statement] = ACTIONS(1097),
        [sym_break_statement] = ACTIONS(1097),
        [sym_continue_statement] = ACTIONS(1097),
        [anon_sym_if] = ACTIONS(1097),
        [anon_sym_elif] = ACTIONS(1175),
        [anon_sym_else] = ACTIONS(1153),
        [anon_sym_for] = ACTIONS(1097),
        [anon_sym_while] = ACTIONS(1097),
        [anon_sym_try] = ACTIONS(1097),
        [anon_sym_with] = ACTIONS(1097),
        [anon_sym_def] = ACTIONS(1097),
        [anon_sym_class] = ACTIONS(1097),
        [anon_sym_AT] = ACTIONS(1101),
        [anon_sym_not] = ACTIONS(1097),
        [anon_sym_LBRACK] = ACTIONS(1101),
        [anon_sym_LBRACE] = ACTIONS(1101),
        [sym_number] = ACTIONS(1097),
        [sym_identifier] = ACTIONS(1103),
        [sym_comment] = ACTIONS(81),
        [sym__newline] = ACTIONS(1101),
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
        [anon_sym_not] = ACTIONS(139),
        [anon_sym_LBRACK] = ACTIONS(141),
        [anon_sym_LBRACE] = ACTIONS(143),
        [sym_number] = ACTIONS(145),
        [sym_identifier] = ACTIONS(147),
        [sym_comment] = ACTIONS(81),
    },
    [596] = {
        [ts_builtin_sym_end] = ACTIONS(1107),
        [anon_sym_SEMI] = ACTIONS(1107),
        [anon_sym_import] = ACTIONS(1105),
        [anon_sym_from] = ACTIONS(1105),
        [anon_sym_print] = ACTIONS(1105),
        [anon_sym_return] = ACTIONS(1105),
        [anon_sym_del] = ACTIONS(1105),
        [sym_pass_statement] = ACTIONS(1105),
        [sym_break_statement] = ACTIONS(1105),
        [sym_continue_statement] = ACTIONS(1105),
        [anon_sym_if] = ACTIONS(1105),
        [anon_sym_elif] = ACTIONS(1105),
        [anon_sym_else] = ACTIONS(1105),
        [anon_sym_for] = ACTIONS(1105),
        [anon_sym_while] = ACTIONS(1105),
        [anon_sym_try] = ACTIONS(1105),
        [anon_sym_with] = ACTIONS(1105),
        [anon_sym_def] = ACTIONS(1105),
        [anon_sym_class] = ACTIONS(1105),
        [anon_sym_AT] = ACTIONS(1107),
        [anon_sym_not] = ACTIONS(1105),
        [anon_sym_LBRACK] = ACTIONS(1107),
        [anon_sym_LBRACE] = ACTIONS(1107),
        [sym_number] = ACTIONS(1105),
        [sym_identifier] = ACTIONS(1109),
        [sym_comment] = ACTIONS(81),
        [sym__newline] = ACTIONS(1107),
    },
    [597] = {
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
        [sym_number] = ACTIONS(1111),
        [sym_identifier] = ACTIONS(1115),
        [sym_comment] = ACTIONS(81),
        [sym__newline] = ACTIONS(1113),
    },
    [598] = {
        [sym_elif_clause] = STATE(599),
        [sym_else_clause] = STATE(600),
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
        [anon_sym_elif] = ACTIONS(1175),
        [anon_sym_else] = ACTIONS(1153),
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
        [sym_number] = ACTIONS(1111),
        [sym_identifier] = ACTIONS(1115),
        [sym_comment] = ACTIONS(81),
        [sym__newline] = ACTIONS(1113),
    },
    [599] = {
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
        [anon_sym_elif] = ACTIONS(1117),
        [anon_sym_else] = ACTIONS(1117),
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
        [sym_number] = ACTIONS(1117),
        [sym_identifier] = ACTIONS(1121),
        [sym_comment] = ACTIONS(81),
        [sym__newline] = ACTIONS(1119),
    },
    [600] = {
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
        [sym_number] = ACTIONS(1123),
        [sym_identifier] = ACTIONS(1127),
        [sym_comment] = ACTIONS(81),
        [sym__newline] = ACTIONS(1125),
    },
    [601] = {
        [anon_sym_LPAREN] = ACTIONS(259),
        [anon_sym_STAR] = ACTIONS(447),
        [anon_sym_COLON] = ACTIONS(1177),
        [anon_sym_PLUS] = ACTIONS(451),
        [anon_sym_DASH] = ACTIONS(451),
        [anon_sym_SLASH] = ACTIONS(453),
        [anon_sym_STAR_STAR] = ACTIONS(455),
        [anon_sym_PIPE] = ACTIONS(457),
        [anon_sym_AMP] = ACTIONS(459),
        [anon_sym_CARET] = ACTIONS(461),
        [anon_sym_LT_LT] = ACTIONS(451),
        [anon_sym_GT_GT] = ACTIONS(451),
        [anon_sym_and] = ACTIONS(459),
        [anon_sym_or] = ACTIONS(457),
        [anon_sym_LBRACK] = ACTIONS(275),
        [sym_comment] = ACTIONS(81),
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
        [anon_sym_import] = ACTIONS(91),
        [anon_sym_from] = ACTIONS(93),
        [anon_sym_print] = ACTIONS(95),
        [anon_sym_return] = ACTIONS(97),
        [anon_sym_del] = ACTIONS(99),
        [sym_pass_statement] = ACTIONS(101),
        [sym_break_statement] = ACTIONS(101),
        [sym_continue_statement] = ACTIONS(101),
        [anon_sym_not] = ACTIONS(119),
        [anon_sym_LBRACK] = ACTIONS(121),
        [anon_sym_LBRACE] = ACTIONS(123),
        [sym_number] = ACTIONS(125),
        [sym_identifier] = ACTIONS(127),
        [sym_comment] = ACTIONS(81),
        [sym__indent] = ACTIONS(783),
    },
    [603] = {
        [ts_builtin_sym_end] = ACTIONS(1133),
        [anon_sym_SEMI] = ACTIONS(1133),
        [anon_sym_import] = ACTIONS(1131),
        [anon_sym_from] = ACTIONS(1131),
        [anon_sym_print] = ACTIONS(1131),
        [anon_sym_return] = ACTIONS(1131),
        [anon_sym_del] = ACTIONS(1131),
        [sym_pass_statement] = ACTIONS(1131),
        [sym_break_statement] = ACTIONS(1131),
        [sym_continue_statement] = ACTIONS(1131),
        [anon_sym_if] = ACTIONS(1131),
        [anon_sym_elif] = ACTIONS(1131),
        [anon_sym_else] = ACTIONS(1131),
        [anon_sym_for] = ACTIONS(1131),
        [anon_sym_while] = ACTIONS(1131),
        [anon_sym_try] = ACTIONS(1131),
        [anon_sym_with] = ACTIONS(1131),
        [anon_sym_def] = ACTIONS(1131),
        [anon_sym_class] = ACTIONS(1131),
        [anon_sym_AT] = ACTIONS(1133),
        [anon_sym_not] = ACTIONS(1131),
        [anon_sym_LBRACK] = ACTIONS(1133),
        [anon_sym_LBRACE] = ACTIONS(1133),
        [sym_number] = ACTIONS(1131),
        [sym_identifier] = ACTIONS(1135),
        [sym_comment] = ACTIONS(81),
        [sym__newline] = ACTIONS(1133),
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
        [anon_sym_not] = ACTIONS(135),
        [anon_sym_LBRACK] = ACTIONS(121),
        [anon_sym_LBRACE] = ACTIONS(123),
        [sym_number] = ACTIONS(125),
        [sym_identifier] = ACTIONS(127),
        [sym_comment] = ACTIONS(81),
    },
    [605] = {
        [sym_comment] = ACTIONS(81),
        [sym__newline] = ACTIONS(1179),
    },
    [606] = {
        [aux_sym_print_statement_repeat1] = STATE(614),
        [anon_sym_LPAREN] = ACTIONS(195),
        [anon_sym_COMMA] = ACTIONS(1181),
        [anon_sym_STAR] = ACTIONS(1183),
        [anon_sym_PLUS] = ACTIONS(1185),
        [anon_sym_DASH] = ACTIONS(1185),
        [anon_sym_SLASH] = ACTIONS(1187),
        [anon_sym_STAR_STAR] = ACTIONS(1189),
        [anon_sym_PIPE] = ACTIONS(1191),
        [anon_sym_AMP] = ACTIONS(1193),
        [anon_sym_CARET] = ACTIONS(1195),
        [anon_sym_LT_LT] = ACTIONS(1185),
        [anon_sym_GT_GT] = ACTIONS(1185),
        [anon_sym_and] = ACTIONS(1193),
        [anon_sym_or] = ACTIONS(1191),
        [anon_sym_LBRACK] = ACTIONS(211),
        [sym_comment] = ACTIONS(81),
        [sym__newline] = ACTIONS(489),
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
        [anon_sym_not] = ACTIONS(135),
        [anon_sym_LBRACK] = ACTIONS(121),
        [anon_sym_LBRACE] = ACTIONS(123),
        [sym_number] = ACTIONS(125),
        [sym_identifier] = ACTIONS(127),
        [sym_comment] = ACTIONS(81),
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
        [anon_sym_not] = ACTIONS(135),
        [anon_sym_LBRACK] = ACTIONS(121),
        [anon_sym_LBRACE] = ACTIONS(123),
        [sym_number] = ACTIONS(125),
        [sym_identifier] = ACTIONS(127),
        [sym_comment] = ACTIONS(81),
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
        [anon_sym_not] = ACTIONS(135),
        [anon_sym_LBRACK] = ACTIONS(121),
        [anon_sym_LBRACE] = ACTIONS(123),
        [sym_number] = ACTIONS(125),
        [sym_identifier] = ACTIONS(127),
        [sym_comment] = ACTIONS(81),
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
        [anon_sym_not] = ACTIONS(135),
        [anon_sym_LBRACK] = ACTIONS(121),
        [anon_sym_LBRACE] = ACTIONS(123),
        [sym_number] = ACTIONS(125),
        [sym_identifier] = ACTIONS(127),
        [sym_comment] = ACTIONS(81),
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
        [anon_sym_not] = ACTIONS(135),
        [anon_sym_LBRACK] = ACTIONS(121),
        [anon_sym_LBRACE] = ACTIONS(123),
        [sym_number] = ACTIONS(125),
        [sym_identifier] = ACTIONS(127),
        [sym_comment] = ACTIONS(81),
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
        [anon_sym_not] = ACTIONS(135),
        [anon_sym_LBRACK] = ACTIONS(121),
        [anon_sym_LBRACE] = ACTIONS(123),
        [sym_number] = ACTIONS(125),
        [sym_identifier] = ACTIONS(127),
        [sym_comment] = ACTIONS(81),
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
        [anon_sym_not] = ACTIONS(135),
        [anon_sym_LBRACK] = ACTIONS(121),
        [anon_sym_LBRACE] = ACTIONS(123),
        [sym_number] = ACTIONS(125),
        [sym_identifier] = ACTIONS(127),
        [sym_comment] = ACTIONS(81),
    },
    [614] = {
        [anon_sym_COMMA] = ACTIONS(1197),
        [sym_comment] = ACTIONS(81),
        [sym__newline] = ACTIONS(505),
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
        [anon_sym_not] = ACTIONS(135),
        [anon_sym_LBRACK] = ACTIONS(121),
        [anon_sym_LBRACE] = ACTIONS(123),
        [sym_number] = ACTIONS(125),
        [sym_identifier] = ACTIONS(127),
        [sym_comment] = ACTIONS(81),
    },
    [616] = {
        [anon_sym_LPAREN] = ACTIONS(195),
        [anon_sym_COMMA] = ACTIONS(507),
        [anon_sym_STAR] = ACTIONS(1183),
        [anon_sym_PLUS] = ACTIONS(1185),
        [anon_sym_DASH] = ACTIONS(1185),
        [anon_sym_SLASH] = ACTIONS(1187),
        [anon_sym_STAR_STAR] = ACTIONS(1189),
        [anon_sym_PIPE] = ACTIONS(1191),
        [anon_sym_AMP] = ACTIONS(1193),
        [anon_sym_CARET] = ACTIONS(1195),
        [anon_sym_LT_LT] = ACTIONS(1185),
        [anon_sym_GT_GT] = ACTIONS(1185),
        [anon_sym_and] = ACTIONS(1193),
        [anon_sym_or] = ACTIONS(1191),
        [anon_sym_LBRACK] = ACTIONS(211),
        [sym_comment] = ACTIONS(81),
        [sym__newline] = ACTIONS(507),
    },
    [617] = {
        [anon_sym_LPAREN] = ACTIONS(195),
        [anon_sym_COMMA] = ACTIONS(315),
        [anon_sym_STAR] = ACTIONS(1183),
        [anon_sym_PLUS] = ACTIONS(1185),
        [anon_sym_DASH] = ACTIONS(1185),
        [anon_sym_SLASH] = ACTIONS(1187),
        [anon_sym_STAR_STAR] = ACTIONS(1189),
        [anon_sym_PIPE] = ACTIONS(315),
        [anon_sym_AMP] = ACTIONS(1193),
        [anon_sym_CARET] = ACTIONS(1195),
        [anon_sym_LT_LT] = ACTIONS(1185),
        [anon_sym_GT_GT] = ACTIONS(1185),
        [anon_sym_and] = ACTIONS(1193),
        [anon_sym_or] = ACTIONS(315),
        [anon_sym_LBRACK] = ACTIONS(315),
        [sym_comment] = ACTIONS(81),
        [sym__newline] = ACTIONS(315),
    },
    [618] = {
        [anon_sym_LPAREN] = ACTIONS(195),
        [anon_sym_COMMA] = ACTIONS(315),
        [anon_sym_STAR] = ACTIONS(1183),
        [anon_sym_PLUS] = ACTIONS(1185),
        [anon_sym_DASH] = ACTIONS(1185),
        [anon_sym_SLASH] = ACTIONS(1187),
        [anon_sym_STAR_STAR] = ACTIONS(1189),
        [anon_sym_PIPE] = ACTIONS(315),
        [anon_sym_AMP] = ACTIONS(315),
        [anon_sym_CARET] = ACTIONS(1195),
        [anon_sym_LT_LT] = ACTIONS(1185),
        [anon_sym_GT_GT] = ACTIONS(1185),
        [anon_sym_and] = ACTIONS(315),
        [anon_sym_or] = ACTIONS(315),
        [anon_sym_LBRACK] = ACTIONS(315),
        [sym_comment] = ACTIONS(81),
        [sym__newline] = ACTIONS(315),
    },
    [619] = {
        [anon_sym_LPAREN] = ACTIONS(195),
        [anon_sym_COMMA] = ACTIONS(315),
        [anon_sym_STAR] = ACTIONS(1183),
        [anon_sym_PLUS] = ACTIONS(315),
        [anon_sym_DASH] = ACTIONS(315),
        [anon_sym_SLASH] = ACTIONS(1187),
        [anon_sym_STAR_STAR] = ACTIONS(1189),
        [anon_sym_PIPE] = ACTIONS(315),
        [anon_sym_AMP] = ACTIONS(315),
        [anon_sym_CARET] = ACTIONS(315),
        [anon_sym_LT_LT] = ACTIONS(315),
        [anon_sym_GT_GT] = ACTIONS(315),
        [anon_sym_and] = ACTIONS(315),
        [anon_sym_or] = ACTIONS(315),
        [anon_sym_LBRACK] = ACTIONS(315),
        [sym_comment] = ACTIONS(81),
        [sym__newline] = ACTIONS(315),
    },
    [620] = {
        [anon_sym_LPAREN] = ACTIONS(195),
        [anon_sym_COMMA] = ACTIONS(315),
        [anon_sym_STAR] = ACTIONS(1183),
        [anon_sym_PLUS] = ACTIONS(1185),
        [anon_sym_DASH] = ACTIONS(1185),
        [anon_sym_SLASH] = ACTIONS(1187),
        [anon_sym_STAR_STAR] = ACTIONS(1189),
        [anon_sym_PIPE] = ACTIONS(315),
        [anon_sym_AMP] = ACTIONS(315),
        [anon_sym_CARET] = ACTIONS(315),
        [anon_sym_LT_LT] = ACTIONS(1185),
        [anon_sym_GT_GT] = ACTIONS(1185),
        [anon_sym_and] = ACTIONS(315),
        [anon_sym_or] = ACTIONS(315),
        [anon_sym_LBRACK] = ACTIONS(315),
        [sym_comment] = ACTIONS(81),
        [sym__newline] = ACTIONS(315),
    },
    [621] = {
        [anon_sym_LPAREN] = ACTIONS(195),
        [anon_sym_COMMA] = ACTIONS(315),
        [anon_sym_STAR] = ACTIONS(317),
        [anon_sym_PLUS] = ACTIONS(315),
        [anon_sym_DASH] = ACTIONS(315),
        [anon_sym_SLASH] = ACTIONS(315),
        [anon_sym_STAR_STAR] = ACTIONS(1189),
        [anon_sym_PIPE] = ACTIONS(315),
        [anon_sym_AMP] = ACTIONS(315),
        [anon_sym_CARET] = ACTIONS(315),
        [anon_sym_LT_LT] = ACTIONS(315),
        [anon_sym_GT_GT] = ACTIONS(315),
        [anon_sym_and] = ACTIONS(315),
        [anon_sym_or] = ACTIONS(315),
        [anon_sym_LBRACK] = ACTIONS(315),
        [sym_comment] = ACTIONS(81),
        [sym__newline] = ACTIONS(315),
    },
    [622] = {
        [anon_sym_LPAREN] = ACTIONS(195),
        [anon_sym_COMMA] = ACTIONS(509),
        [anon_sym_STAR] = ACTIONS(1183),
        [anon_sym_PLUS] = ACTIONS(1185),
        [anon_sym_DASH] = ACTIONS(1185),
        [anon_sym_SLASH] = ACTIONS(1187),
        [anon_sym_STAR_STAR] = ACTIONS(1189),
        [anon_sym_PIPE] = ACTIONS(1191),
        [anon_sym_AMP] = ACTIONS(1193),
        [anon_sym_CARET] = ACTIONS(1195),
        [anon_sym_LT_LT] = ACTIONS(1185),
        [anon_sym_GT_GT] = ACTIONS(1185),
        [anon_sym_and] = ACTIONS(1193),
        [anon_sym_or] = ACTIONS(1191),
        [anon_sym_LBRACK] = ACTIONS(211),
        [sym_comment] = ACTIONS(81),
        [sym__newline] = ACTIONS(509),
    },
    [623] = {
        [sym_comment] = ACTIONS(81),
        [sym__newline] = ACTIONS(1199),
    },
    [624] = {
        [aux_sym_print_statement_repeat1] = STATE(625),
        [anon_sym_LPAREN] = ACTIONS(195),
        [anon_sym_COMMA] = ACTIONS(1181),
        [anon_sym_STAR] = ACTIONS(1183),
        [anon_sym_PLUS] = ACTIONS(1185),
        [anon_sym_DASH] = ACTIONS(1185),
        [anon_sym_SLASH] = ACTIONS(1187),
        [anon_sym_STAR_STAR] = ACTIONS(1189),
        [anon_sym_PIPE] = ACTIONS(1191),
        [anon_sym_AMP] = ACTIONS(1193),
        [anon_sym_CARET] = ACTIONS(1195),
        [anon_sym_LT_LT] = ACTIONS(1185),
        [anon_sym_GT_GT] = ACTIONS(1185),
        [anon_sym_and] = ACTIONS(1193),
        [anon_sym_or] = ACTIONS(1191),
        [anon_sym_LBRACK] = ACTIONS(211),
        [sym_comment] = ACTIONS(81),
        [sym__newline] = ACTIONS(1201),
    },
    [625] = {
        [anon_sym_COMMA] = ACTIONS(1197),
        [sym_comment] = ACTIONS(81),
        [sym__newline] = ACTIONS(1203),
    },
    [626] = {
        [anon_sym_import] = ACTIONS(1205),
        [anon_sym_DOT] = ACTIONS(1207),
        [sym_identifier] = ACTIONS(1209),
        [sym_comment] = ACTIONS(81),
    },
    [627] = {
        [aux_sym_dotted_name_repeat1] = STATE(662),
        [anon_sym_import] = ACTIONS(743),
        [anon_sym_DOT] = ACTIONS(1211),
        [anon_sym_RPAREN] = ACTIONS(743),
        [anon_sym_COMMA] = ACTIONS(743),
        [anon_sym_as] = ACTIONS(743),
        [sym_comment] = ACTIONS(81),
    },
    [628] = {
        [anon_sym_import] = ACTIONS(1213),
        [sym_comment] = ACTIONS(81),
    },
    [629] = {
        [sym_dotted_name] = STATE(632),
        [anon_sym_import] = ACTIONS(1215),
        [anon_sym_DOT] = ACTIONS(1217),
        [sym_identifier] = ACTIONS(1219),
        [sym_comment] = ACTIONS(81),
    },
    [630] = {
        [sym__import_list] = STATE(667),
        [sym_aliased_import] = STATE(637),
        [sym_wildcard_import] = STATE(667),
        [sym_dotted_name] = STATE(638),
        [anon_sym_LPAREN] = ACTIONS(1221),
        [anon_sym_STAR] = ACTIONS(1223),
        [sym_identifier] = ACTIONS(129),
        [sym_comment] = ACTIONS(81),
    },
    [631] = {
        [anon_sym_import] = ACTIONS(1225),
        [anon_sym_DOT] = ACTIONS(1227),
        [sym_identifier] = ACTIONS(1229),
        [sym_comment] = ACTIONS(81),
    },
    [632] = {
        [anon_sym_import] = ACTIONS(1231),
        [sym_comment] = ACTIONS(81),
    },
    [633] = {
        [sym__import_list] = STATE(636),
        [sym_aliased_import] = STATE(637),
        [sym_wildcard_import] = STATE(636),
        [sym_dotted_name] = STATE(638),
        [anon_sym_LPAREN] = ACTIONS(1233),
        [anon_sym_STAR] = ACTIONS(1223),
        [sym_identifier] = ACTIONS(129),
        [sym_comment] = ACTIONS(81),
    },
    [634] = {
        [sym__import_list] = STATE(648),
        [sym_aliased_import] = STATE(649),
        [sym_dotted_name] = STATE(650),
        [sym_identifier] = ACTIONS(133),
        [sym_comment] = ACTIONS(81),
    },
    [635] = {
        [sym_comment] = ACTIONS(81),
        [sym__newline] = ACTIONS(1235),
    },
    [636] = {
        [sym_comment] = ACTIONS(81),
        [sym__newline] = ACTIONS(1237),
    },
    [637] = {
        [aux_sym__import_list_repeat1] = STATE(641),
        [anon_sym_COMMA] = ACTIONS(1239),
        [sym_comment] = ACTIONS(81),
        [sym__newline] = ACTIONS(1241),
    },
    [638] = {
        [aux_sym__import_list_repeat1] = STATE(641),
        [anon_sym_COMMA] = ACTIONS(1239),
        [anon_sym_as] = ACTIONS(1243),
        [sym_comment] = ACTIONS(81),
        [sym__newline] = ACTIONS(1241),
    },
    [639] = {
        [sym_aliased_import] = STATE(646),
        [sym_dotted_name] = STATE(647),
        [anon_sym_RPAREN] = ACTIONS(1245),
        [sym_identifier] = ACTIONS(129),
        [sym_comment] = ACTIONS(81),
        [sym__newline] = ACTIONS(1245),
    },
    [640] = {
        [sym_identifier] = ACTIONS(1247),
        [sym_comment] = ACTIONS(81),
    },
    [641] = {
        [anon_sym_RPAREN] = ACTIONS(1245),
        [anon_sym_COMMA] = ACTIONS(1249),
        [sym_comment] = ACTIONS(81),
        [sym__newline] = ACTIONS(1245),
    },
    [642] = {
        [sym_aliased_import] = STATE(643),
        [sym_dotted_name] = STATE(644),
        [anon_sym_RPAREN] = ACTIONS(1251),
        [sym_identifier] = ACTIONS(129),
        [sym_comment] = ACTIONS(81),
        [sym__newline] = ACTIONS(1251),
    },
    [643] = {
        [anon_sym_RPAREN] = ACTIONS(1253),
        [anon_sym_COMMA] = ACTIONS(1253),
        [sym_comment] = ACTIONS(81),
        [sym__newline] = ACTIONS(1253),
    },
    [644] = {
        [anon_sym_RPAREN] = ACTIONS(1253),
        [anon_sym_COMMA] = ACTIONS(1253),
        [anon_sym_as] = ACTIONS(1243),
        [sym_comment] = ACTIONS(81),
        [sym__newline] = ACTIONS(1253),
    },
    [645] = {
        [anon_sym_RPAREN] = ACTIONS(1255),
        [anon_sym_COMMA] = ACTIONS(1255),
        [sym_comment] = ACTIONS(81),
        [sym__newline] = ACTIONS(1255),
    },
    [646] = {
        [anon_sym_RPAREN] = ACTIONS(1257),
        [anon_sym_COMMA] = ACTIONS(1257),
        [sym_comment] = ACTIONS(81),
        [sym__newline] = ACTIONS(1257),
    },
    [647] = {
        [anon_sym_RPAREN] = ACTIONS(1257),
        [anon_sym_COMMA] = ACTIONS(1257),
        [anon_sym_as] = ACTIONS(1243),
        [sym_comment] = ACTIONS(81),
        [sym__newline] = ACTIONS(1257),
    },
    [648] = {
        [anon_sym_RPAREN] = ACTIONS(1259),
        [sym_comment] = ACTIONS(81),
    },
    [649] = {
        [aux_sym__import_list_repeat1] = STATE(653),
        [anon_sym_RPAREN] = ACTIONS(1241),
        [anon_sym_COMMA] = ACTIONS(1261),
        [sym_comment] = ACTIONS(81),
    },
    [650] = {
        [aux_sym__import_list_repeat1] = STATE(653),
        [anon_sym_RPAREN] = ACTIONS(1241),
        [anon_sym_COMMA] = ACTIONS(1261),
        [anon_sym_as] = ACTIONS(1263),
        [sym_comment] = ACTIONS(81),
    },
    [651] = {
        [sym_aliased_import] = STATE(658),
        [sym_dotted_name] = STATE(659),
        [anon_sym_RPAREN] = ACTIONS(1245),
        [sym_identifier] = ACTIONS(133),
        [sym_comment] = ACTIONS(81),
    },
    [652] = {
        [sym_identifier] = ACTIONS(1265),
        [sym_comment] = ACTIONS(81),
    },
    [653] = {
        [anon_sym_RPAREN] = ACTIONS(1245),
        [anon_sym_COMMA] = ACTIONS(1267),
        [sym_comment] = ACTIONS(81),
    },
    [654] = {
        [sym_aliased_import] = STATE(655),
        [sym_dotted_name] = STATE(656),
        [anon_sym_RPAREN] = ACTIONS(1251),
        [sym_identifier] = ACTIONS(133),
        [sym_comment] = ACTIONS(81),
    },
    [655] = {
        [anon_sym_RPAREN] = ACTIONS(1253),
        [anon_sym_COMMA] = ACTIONS(1253),
        [sym_comment] = ACTIONS(81),
    },
    [656] = {
        [anon_sym_RPAREN] = ACTIONS(1253),
        [anon_sym_COMMA] = ACTIONS(1253),
        [anon_sym_as] = ACTIONS(1263),
        [sym_comment] = ACTIONS(81),
    },
    [657] = {
        [anon_sym_RPAREN] = ACTIONS(1255),
        [anon_sym_COMMA] = ACTIONS(1255),
        [sym_comment] = ACTIONS(81),
    },
    [658] = {
        [anon_sym_RPAREN] = ACTIONS(1257),
        [anon_sym_COMMA] = ACTIONS(1257),
        [sym_comment] = ACTIONS(81),
    },
    [659] = {
        [anon_sym_RPAREN] = ACTIONS(1257),
        [anon_sym_COMMA] = ACTIONS(1257),
        [anon_sym_as] = ACTIONS(1263),
        [sym_comment] = ACTIONS(81),
    },
    [660] = {
        [sym_comment] = ACTIONS(81),
        [sym__newline] = ACTIONS(1269),
    },
    [661] = {
        [sym_identifier] = ACTIONS(1271),
        [sym_comment] = ACTIONS(81),
    },
    [662] = {
        [anon_sym_import] = ACTIONS(769),
        [anon_sym_DOT] = ACTIONS(1273),
        [anon_sym_RPAREN] = ACTIONS(769),
        [anon_sym_COMMA] = ACTIONS(769),
        [anon_sym_as] = ACTIONS(769),
        [sym_comment] = ACTIONS(81),
    },
    [663] = {
        [sym_identifier] = ACTIONS(1275),
        [sym_comment] = ACTIONS(81),
    },
    [664] = {
        [anon_sym_import] = ACTIONS(775),
        [anon_sym_DOT] = ACTIONS(775),
        [anon_sym_RPAREN] = ACTIONS(775),
        [anon_sym_COMMA] = ACTIONS(775),
        [anon_sym_as] = ACTIONS(775),
        [sym_comment] = ACTIONS(81),
    },
    [665] = {
        [anon_sym_import] = ACTIONS(777),
        [anon_sym_DOT] = ACTIONS(777),
        [anon_sym_RPAREN] = ACTIONS(777),
        [anon_sym_COMMA] = ACTIONS(777),
        [anon_sym_as] = ACTIONS(777),
        [sym_comment] = ACTIONS(81),
    },
    [666] = {
        [sym__import_list] = STATE(668),
        [sym_aliased_import] = STATE(649),
        [sym_dotted_name] = STATE(650),
        [sym_identifier] = ACTIONS(133),
        [sym_comment] = ACTIONS(81),
    },
    [667] = {
        [sym_comment] = ACTIONS(81),
        [sym__newline] = ACTIONS(1277),
    },
    [668] = {
        [anon_sym_RPAREN] = ACTIONS(1279),
        [sym_comment] = ACTIONS(81),
    },
    [669] = {
        [sym_comment] = ACTIONS(81),
        [sym__newline] = ACTIONS(1281),
    },
    [670] = {
        [sym_comment] = ACTIONS(81),
        [sym__newline] = ACTIONS(1283),
    },
    [671] = {
        [sym__import_list] = STATE(904),
        [sym_aliased_import] = STATE(637),
        [sym_wildcard_import] = STATE(707),
        [sym_dotted_name] = STATE(638),
        [anon_sym_LPAREN] = ACTIONS(1285),
        [anon_sym_STAR] = ACTIONS(1223),
        [sym_identifier] = ACTIONS(129),
        [sym_comment] = ACTIONS(81),
    },
    [672] = {
        [anon_sym_import] = ACTIONS(1287),
        [anon_sym_DOT] = ACTIONS(1290),
        [sym_identifier] = ACTIONS(1293),
        [sym_comment] = ACTIONS(81),
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
        [anon_sym_RPAREN] = ACTIONS(855),
        [anon_sym_STAR] = ACTIONS(1297),
        [anon_sym_STAR_STAR] = ACTIONS(241),
        [anon_sym_not] = ACTIONS(243),
        [anon_sym_LBRACK] = ACTIONS(141),
        [anon_sym_LBRACE] = ACTIONS(143),
        [sym_number] = ACTIONS(145),
        [sym_identifier] = ACTIONS(1299),
        [sym_comment] = ACTIONS(81),
    },
    [674] = {
        [anon_sym_LPAREN] = ACTIONS(1301),
        [anon_sym_RPAREN] = ACTIONS(1301),
        [anon_sym_COMMA] = ACTIONS(1301),
        [anon_sym_as] = ACTIONS(1301),
        [anon_sym_STAR] = ACTIONS(1307),
        [anon_sym_COLON] = ACTIONS(1313),
        [anon_sym_for] = ACTIONS(1301),
        [anon_sym_in] = ACTIONS(1301),
        [anon_sym_PLUS] = ACTIONS(1301),
        [anon_sym_DASH] = ACTIONS(1301),
        [anon_sym_SLASH] = ACTIONS(1301),
        [anon_sym_STAR_STAR] = ACTIONS(1301),
        [anon_sym_PIPE] = ACTIONS(1301),
        [anon_sym_AMP] = ACTIONS(1301),
        [anon_sym_CARET] = ACTIONS(1301),
        [anon_sym_LT_LT] = ACTIONS(1301),
        [anon_sym_GT_GT] = ACTIONS(1301),
        [anon_sym_and] = ACTIONS(1301),
        [anon_sym_or] = ACTIONS(1301),
        [anon_sym_LBRACK] = ACTIONS(1301),
        [anon_sym_RBRACK] = ACTIONS(1301),
        [anon_sym_RBRACE] = ACTIONS(1301),
        [sym_comment] = ACTIONS(81),
        [sym__newline] = ACTIONS(1325),
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
        [anon_sym_RPAREN] = ACTIONS(1335),
        [anon_sym_STAR] = ACTIONS(1339),
        [anon_sym_STAR_STAR] = ACTIONS(1345),
        [anon_sym_not] = ACTIONS(1349),
        [anon_sym_LBRACK] = ACTIONS(1353),
        [anon_sym_DOT_DOT_DOT] = ACTIONS(1357),
        [anon_sym_RBRACK] = ACTIONS(1359),
        [anon_sym_LBRACE] = ACTIONS(1361),
        [anon_sym_RBRACE] = ACTIONS(1365),
        [sym_number] = ACTIONS(1367),
        [sym_identifier] = ACTIONS(1371),
        [sym_comment] = ACTIONS(81),
        [sym__newline] = ACTIONS(1377),
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
        [anon_sym_not] = ACTIONS(943),
        [anon_sym_LBRACK] = ACTIONS(141),
        [anon_sym_LBRACE] = ACTIONS(143),
        [sym_number] = ACTIONS(145),
        [sym_identifier] = ACTIONS(1380),
        [sym_comment] = ACTIONS(81),
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
        [anon_sym_STAR] = ACTIONS(871),
        [anon_sym_not] = ACTIONS(1382),
        [anon_sym_LBRACK] = ACTIONS(121),
        [anon_sym_LBRACE] = ACTIONS(123),
        [sym_number] = ACTIONS(125),
        [sym_identifier] = ACTIONS(1384),
        [sym_comment] = ACTIONS(81),
        [sym__newline] = ACTIONS(1235),
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
        [anon_sym_not] = ACTIONS(139),
        [anon_sym_LBRACK] = ACTIONS(141),
        [anon_sym_LBRACE] = ACTIONS(143),
        [sym_number] = ACTIONS(145),
        [sym_identifier] = ACTIONS(147),
        [sym_comment] = ACTIONS(81),
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
        [anon_sym_import] = ACTIONS(91),
        [anon_sym_from] = ACTIONS(93),
        [anon_sym_print] = ACTIONS(95),
        [anon_sym_return] = ACTIONS(97),
        [anon_sym_del] = ACTIONS(99),
        [sym_pass_statement] = ACTIONS(101),
        [sym_break_statement] = ACTIONS(101),
        [sym_continue_statement] = ACTIONS(101),
        [anon_sym_not] = ACTIONS(1386),
        [anon_sym_LBRACK] = ACTIONS(121),
        [anon_sym_LBRACE] = ACTIONS(123),
        [sym_number] = ACTIONS(125),
        [sym_identifier] = ACTIONS(127),
        [sym_comment] = ACTIONS(81),
        [sym__indent] = ACTIONS(1388),
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
        [anon_sym_not] = ACTIONS(139),
        [anon_sym_LBRACK] = ACTIONS(141),
        [anon_sym_LBRACE] = ACTIONS(143),
        [sym_number] = ACTIONS(145),
        [sym_identifier] = ACTIONS(147),
        [sym_comment] = ACTIONS(81),
    },
    [681] = {
        [anon_sym_COLON] = ACTIONS(1390),
        [sym_comment] = ACTIONS(81),
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
        [anon_sym_not] = ACTIONS(149),
        [anon_sym_LBRACK] = ACTIONS(141),
        [anon_sym_LBRACE] = ACTIONS(143),
        [sym_number] = ACTIONS(145),
        [sym_identifier] = ACTIONS(147),
        [sym_comment] = ACTIONS(81),
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
        [anon_sym_not] = ACTIONS(1392),
        [anon_sym_LBRACK] = ACTIONS(141),
        [anon_sym_LBRACE] = ACTIONS(143),
        [sym_number] = ACTIONS(145),
        [sym_identifier] = ACTIONS(147),
        [sym_comment] = ACTIONS(81),
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
        [anon_sym_not] = ACTIONS(139),
        [anon_sym_LBRACK] = ACTIONS(141),
        [anon_sym_LBRACE] = ACTIONS(143),
        [sym_number] = ACTIONS(145),
        [sym_identifier] = ACTIONS(147),
        [sym_comment] = ACTIONS(81),
    },
    [685] = {
        [anon_sym_COLON] = ACTIONS(1394),
        [sym_comment] = ACTIONS(81),
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
        [anon_sym_not] = ACTIONS(153),
        [anon_sym_LBRACK] = ACTIONS(141),
        [anon_sym_LBRACE] = ACTIONS(143),
        [sym_number] = ACTIONS(145),
        [sym_identifier] = ACTIONS(147),
        [sym_comment] = ACTIONS(81),
    },
    [687] = {
        [anon_sym_COLON] = ACTIONS(1396),
        [sym_comment] = ACTIONS(81),
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
        [anon_sym_not] = ACTIONS(153),
        [anon_sym_LBRACK] = ACTIONS(141),
        [anon_sym_LBRACE] = ACTIONS(143),
        [sym_number] = ACTIONS(145),
        [sym_identifier] = ACTIONS(147),
        [sym_comment] = ACTIONS(81),
    },
    [689] = {
        [sym_identifier] = ACTIONS(1398),
        [sym_comment] = ACTIONS(81),
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
        [anon_sym_not] = ACTIONS(243),
        [anon_sym_LBRACK] = ACTIONS(141),
        [anon_sym_LBRACE] = ACTIONS(143),
        [sym_number] = ACTIONS(145),
        [sym_identifier] = ACTIONS(147),
        [sym_comment] = ACTIONS(81),
    },
    [691] = {
        [sym_identifier] = ACTIONS(1400),
        [sym_comment] = ACTIONS(81),
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
        [anon_sym_not] = ACTIONS(1382),
        [anon_sym_LBRACK] = ACTIONS(121),
        [anon_sym_LBRACE] = ACTIONS(123),
        [sym_number] = ACTIONS(125),
        [sym_identifier] = ACTIONS(127),
        [sym_comment] = ACTIONS(81),
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
        [anon_sym_not] = ACTIONS(1382),
        [anon_sym_LBRACK] = ACTIONS(121),
        [anon_sym_LBRACE] = ACTIONS(123),
        [sym_number] = ACTIONS(125),
        [sym_identifier] = ACTIONS(127),
        [sym_comment] = ACTIONS(81),
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
        [anon_sym_not] = ACTIONS(1382),
        [anon_sym_LBRACK] = ACTIONS(121),
        [anon_sym_LBRACE] = ACTIONS(123),
        [sym_number] = ACTIONS(125),
        [sym_identifier] = ACTIONS(127),
        [sym_comment] = ACTIONS(81),
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
        [anon_sym_not] = ACTIONS(159),
        [anon_sym_LBRACK] = ACTIONS(141),
        [anon_sym_DOT_DOT_DOT] = ACTIONS(249),
        [anon_sym_RBRACK] = ACTIONS(161),
        [anon_sym_LBRACE] = ACTIONS(143),
        [sym_number] = ACTIONS(145),
        [sym_identifier] = ACTIONS(147),
        [sym_comment] = ACTIONS(81),
    },
    [696] = {
        [aux_sym_subscript_repeat1] = STATE(57),
        [anon_sym_COMMA] = ACTIONS(1402),
        [anon_sym_RBRACK] = ACTIONS(1406),
        [sym_comment] = ACTIONS(81),
    },
    [697] = {
        [anon_sym_LPAREN] = ACTIONS(1410),
        [anon_sym_RPAREN] = ACTIONS(1410),
        [anon_sym_COMMA] = ACTIONS(1410),
        [anon_sym_as] = ACTIONS(1410),
        [anon_sym_STAR] = ACTIONS(1419),
        [anon_sym_COLON] = ACTIONS(1410),
        [anon_sym_for] = ACTIONS(1410),
        [anon_sym_in] = ACTIONS(1410),
        [anon_sym_PLUS] = ACTIONS(1410),
        [anon_sym_DASH] = ACTIONS(1410),
        [anon_sym_SLASH] = ACTIONS(1410),
        [anon_sym_STAR_STAR] = ACTIONS(1410),
        [anon_sym_PIPE] = ACTIONS(1410),
        [anon_sym_AMP] = ACTIONS(1410),
        [anon_sym_CARET] = ACTIONS(1410),
        [anon_sym_LT_LT] = ACTIONS(1410),
        [anon_sym_GT_GT] = ACTIONS(1410),
        [anon_sym_and] = ACTIONS(1410),
        [anon_sym_or] = ACTIONS(1410),
        [anon_sym_LBRACK] = ACTIONS(1410),
        [anon_sym_RBRACK] = ACTIONS(1410),
        [anon_sym_RBRACE] = ACTIONS(1410),
        [sym_comment] = ACTIONS(81),
        [sym__newline] = ACTIONS(1410),
    },
    [698] = {
        [anon_sym_LPAREN] = ACTIONS(1428),
        [anon_sym_RPAREN] = ACTIONS(1428),
        [anon_sym_COMMA] = ACTIONS(1428),
        [anon_sym_as] = ACTIONS(1428),
        [anon_sym_STAR] = ACTIONS(1438),
        [anon_sym_COLON] = ACTIONS(1428),
        [anon_sym_for] = ACTIONS(1428),
        [anon_sym_in] = ACTIONS(1428),
        [anon_sym_PLUS] = ACTIONS(1428),
        [anon_sym_DASH] = ACTIONS(1428),
        [anon_sym_SLASH] = ACTIONS(1428),
        [anon_sym_STAR_STAR] = ACTIONS(1428),
        [anon_sym_PIPE] = ACTIONS(1428),
        [anon_sym_AMP] = ACTIONS(1428),
        [anon_sym_CARET] = ACTIONS(1428),
        [anon_sym_LT_LT] = ACTIONS(1428),
        [anon_sym_GT_GT] = ACTIONS(1428),
        [anon_sym_and] = ACTIONS(1428),
        [anon_sym_or] = ACTIONS(1428),
        [anon_sym_LBRACK] = ACTIONS(1428),
        [anon_sym_RBRACK] = ACTIONS(1428),
        [anon_sym_RBRACE] = ACTIONS(1428),
        [sym_comment] = ACTIONS(81),
        [sym__newline] = ACTIONS(1428),
    },
    [699] = {
        [sym_parameters] = STATE(716),
        [aux_sym_dotted_name_repeat1] = STATE(377),
        [anon_sym_import] = ACTIONS(1448),
        [anon_sym_DOT] = ACTIONS(1452),
        [anon_sym_LPAREN] = ACTIONS(1456),
        [anon_sym_RPAREN] = ACTIONS(1462),
        [anon_sym_COMMA] = ACTIONS(1471),
        [anon_sym_as] = ACTIONS(1479),
        [anon_sym_STAR] = ACTIONS(169),
        [anon_sym_COLON] = ACTIONS(1484),
        [anon_sym_for] = ACTIONS(167),
        [anon_sym_in] = ACTIONS(167),
        [anon_sym_EQ] = ACTIONS(1487),
        [anon_sym_PLUS] = ACTIONS(167),
        [anon_sym_DASH] = ACTIONS(167),
        [anon_sym_SLASH] = ACTIONS(167),
        [anon_sym_STAR_STAR] = ACTIONS(167),
        [anon_sym_PIPE] = ACTIONS(167),
        [anon_sym_AMP] = ACTIONS(167),
        [anon_sym_CARET] = ACTIONS(167),
        [anon_sym_LT_LT] = ACTIONS(167),
        [anon_sym_GT_GT] = ACTIONS(167),
        [anon_sym_and] = ACTIONS(167),
        [anon_sym_or] = ACTIONS(167),
        [anon_sym_LBRACK] = ACTIONS(167),
        [anon_sym_RBRACK] = ACTIONS(167),
        [anon_sym_RBRACE] = ACTIONS(167),
        [sym_comment] = ACTIONS(81),
        [sym__newline] = ACTIONS(1489),
    },
    [700] = {
        [ts_builtin_sym_end] = ACTIONS(1495),
        [anon_sym_SEMI] = ACTIONS(1499),
        [anon_sym_import] = ACTIONS(1502),
        [anon_sym_from] = ACTIONS(1502),
        [anon_sym_print] = ACTIONS(1502),
        [anon_sym_return] = ACTIONS(1502),
        [anon_sym_del] = ACTIONS(1502),
        [sym_pass_statement] = ACTIONS(1502),
        [sym_break_statement] = ACTIONS(1502),
        [sym_continue_statement] = ACTIONS(1502),
        [anon_sym_if] = ACTIONS(1502),
        [anon_sym_elif] = ACTIONS(809),
        [anon_sym_else] = ACTIONS(809),
        [anon_sym_for] = ACTIONS(1502),
        [anon_sym_while] = ACTIONS(1502),
        [anon_sym_try] = ACTIONS(1502),
        [anon_sym_except] = ACTIONS(809),
        [anon_sym_finally] = ACTIONS(809),
        [anon_sym_with] = ACTIONS(1502),
        [anon_sym_def] = ACTIONS(1505),
        [anon_sym_class] = ACTIONS(1505),
        [anon_sym_AT] = ACTIONS(1510),
        [anon_sym_not] = ACTIONS(1502),
        [anon_sym_LBRACK] = ACTIONS(1499),
        [anon_sym_LBRACE] = ACTIONS(1499),
        [sym_number] = ACTIONS(1502),
        [sym_identifier] = ACTIONS(1515),
        [sym_comment] = ACTIONS(81),
        [sym__newline] = ACTIONS(1499),
        [sym__dedent] = ACTIONS(1499),
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
        [anon_sym_import] = ACTIONS(91),
        [anon_sym_from] = ACTIONS(93),
        [anon_sym_print] = ACTIONS(95),
        [anon_sym_return] = ACTIONS(97),
        [anon_sym_del] = ACTIONS(99),
        [sym_pass_statement] = ACTIONS(101),
        [sym_break_statement] = ACTIONS(101),
        [sym_continue_statement] = ACTIONS(101),
        [anon_sym_if] = ACTIONS(785),
        [anon_sym_for] = ACTIONS(787),
        [anon_sym_while] = ACTIONS(789),
        [anon_sym_try] = ACTIONS(791),
        [anon_sym_with] = ACTIONS(793),
        [anon_sym_def] = ACTIONS(795),
        [anon_sym_class] = ACTIONS(797),
        [anon_sym_AT] = ACTIONS(117),
        [anon_sym_not] = ACTIONS(119),
        [anon_sym_LBRACK] = ACTIONS(121),
        [anon_sym_LBRACE] = ACTIONS(123),
        [sym_number] = ACTIONS(125),
        [sym_identifier] = ACTIONS(127),
        [sym_comment] = ACTIONS(81),
        [sym__dedent] = ACTIONS(1518),
    },
    [702] = {
        [ts_builtin_sym_end] = ACTIONS(1520),
        [anon_sym_SEMI] = ACTIONS(1520),
        [anon_sym_import] = ACTIONS(1523),
        [anon_sym_from] = ACTIONS(1523),
        [anon_sym_print] = ACTIONS(1523),
        [anon_sym_return] = ACTIONS(1523),
        [anon_sym_del] = ACTIONS(1523),
        [sym_pass_statement] = ACTIONS(1523),
        [sym_break_statement] = ACTIONS(1523),
        [sym_continue_statement] = ACTIONS(1523),
        [anon_sym_if] = ACTIONS(1523),
        [anon_sym_elif] = ACTIONS(1523),
        [anon_sym_else] = ACTIONS(1523),
        [anon_sym_for] = ACTIONS(1523),
        [anon_sym_while] = ACTIONS(1523),
        [anon_sym_try] = ACTIONS(1523),
        [anon_sym_except] = ACTIONS(1523),
        [anon_sym_finally] = ACTIONS(1523),
        [anon_sym_with] = ACTIONS(1523),
        [anon_sym_def] = ACTIONS(1523),
        [anon_sym_class] = ACTIONS(1523),
        [anon_sym_AT] = ACTIONS(1520),
        [anon_sym_not] = ACTIONS(1523),
        [anon_sym_LBRACK] = ACTIONS(1520),
        [anon_sym_LBRACE] = ACTIONS(1520),
        [sym_number] = ACTIONS(1523),
        [sym_identifier] = ACTIONS(1526),
        [sym_comment] = ACTIONS(81),
        [sym__newline] = ACTIONS(1520),
        [sym__dedent] = ACTIONS(1520),
    },
    [703] = {
        [ts_builtin_sym_end] = ACTIONS(1529),
        [anon_sym_SEMI] = ACTIONS(1529),
        [anon_sym_import] = ACTIONS(1532),
        [anon_sym_from] = ACTIONS(1532),
        [anon_sym_print] = ACTIONS(1532),
        [anon_sym_return] = ACTIONS(1532),
        [anon_sym_del] = ACTIONS(1532),
        [sym_pass_statement] = ACTIONS(1532),
        [sym_break_statement] = ACTIONS(1532),
        [sym_continue_statement] = ACTIONS(1532),
        [anon_sym_if] = ACTIONS(1532),
        [anon_sym_for] = ACTIONS(1532),
        [anon_sym_while] = ACTIONS(1532),
        [anon_sym_try] = ACTIONS(1532),
        [anon_sym_with] = ACTIONS(1532),
        [anon_sym_def] = ACTIONS(1532),
        [anon_sym_class] = ACTIONS(1532),
        [anon_sym_AT] = ACTIONS(1529),
        [anon_sym_not] = ACTIONS(1532),
        [anon_sym_LBRACK] = ACTIONS(1529),
        [anon_sym_LBRACE] = ACTIONS(1529),
        [sym_number] = ACTIONS(1532),
        [sym_identifier] = ACTIONS(1535),
        [sym_comment] = ACTIONS(81),
        [sym__newline] = ACTIONS(1529),
        [sym__dedent] = ACTIONS(1529),
    },
    [704] = {
        [sym_comment] = ACTIONS(81),
        [sym__newline] = ACTIONS(1538),
    },
    [705] = {
        [anon_sym_RPAREN] = ACTIONS(1540),
        [sym_comment] = ACTIONS(81),
        [sym__newline] = ACTIONS(1542),
    },
    [706] = {
        [aux_sym__import_list_repeat1] = STATE(641),
        [anon_sym_RPAREN] = ACTIONS(1546),
        [anon_sym_COMMA] = ACTIONS(1550),
        [sym_comment] = ACTIONS(81),
        [sym__newline] = ACTIONS(1546),
    },
    [707] = {
        [sym_comment] = ACTIONS(81),
        [sym__newline] = ACTIONS(1554),
    },
    [708] = {
        [ts_builtin_sym_end] = ACTIONS(181),
        [anon_sym_SEMI] = ACTIONS(181),
        [anon_sym_import] = ACTIONS(183),
        [anon_sym_from] = ACTIONS(183),
        [anon_sym_print] = ACTIONS(183),
        [anon_sym_return] = ACTIONS(183),
        [anon_sym_del] = ACTIONS(183),
        [sym_pass_statement] = ACTIONS(183),
        [sym_break_statement] = ACTIONS(183),
        [sym_continue_statement] = ACTIONS(183),
        [anon_sym_if] = ACTIONS(183),
        [anon_sym_for] = ACTIONS(183),
        [anon_sym_while] = ACTIONS(183),
        [anon_sym_try] = ACTIONS(183),
        [anon_sym_with] = ACTIONS(183),
        [anon_sym_def] = ACTIONS(183),
        [anon_sym_class] = ACTIONS(183),
        [anon_sym_AT] = ACTIONS(181),
        [anon_sym_not] = ACTIONS(183),
        [anon_sym_LBRACK] = ACTIONS(181),
        [anon_sym_LBRACE] = ACTIONS(181),
        [sym_number] = ACTIONS(183),
        [sym_identifier] = ACTIONS(185),
        [sym_comment] = ACTIONS(81),
        [sym__newline] = ACTIONS(181),
        [sym__dedent] = ACTIONS(181),
    },
    [709] = {
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
        [sym_number] = ACTIONS(189),
        [sym_identifier] = ACTIONS(191),
        [sym_comment] = ACTIONS(81),
        [sym__newline] = ACTIONS(187),
        [sym__dedent] = ACTIONS(187),
    },
    [710] = {
        [ts_builtin_sym_end] = ACTIONS(1557),
        [anon_sym_SEMI] = ACTIONS(1557),
        [anon_sym_import] = ACTIONS(1560),
        [anon_sym_from] = ACTIONS(1560),
        [anon_sym_print] = ACTIONS(1560),
        [anon_sym_return] = ACTIONS(1560),
        [anon_sym_del] = ACTIONS(1560),
        [sym_pass_statement] = ACTIONS(1560),
        [sym_break_statement] = ACTIONS(1560),
        [sym_continue_statement] = ACTIONS(1560),
        [anon_sym_if] = ACTIONS(1560),
        [anon_sym_elif] = ACTIONS(1560),
        [anon_sym_else] = ACTIONS(1560),
        [anon_sym_for] = ACTIONS(1560),
        [anon_sym_while] = ACTIONS(1560),
        [anon_sym_try] = ACTIONS(1560),
        [anon_sym_with] = ACTIONS(1560),
        [anon_sym_def] = ACTIONS(1560),
        [anon_sym_class] = ACTIONS(1560),
        [anon_sym_AT] = ACTIONS(1557),
        [anon_sym_not] = ACTIONS(1560),
        [anon_sym_LBRACK] = ACTIONS(1557),
        [anon_sym_LBRACE] = ACTIONS(1557),
        [sym_number] = ACTIONS(1560),
        [sym_identifier] = ACTIONS(1563),
        [sym_comment] = ACTIONS(81),
        [sym__newline] = ACTIONS(1557),
        [sym__dedent] = ACTIONS(1557),
    },
    [711] = {
        [sym_finally_clause] = STATE(750),
        [ts_builtin_sym_end] = ACTIONS(1566),
        [anon_sym_SEMI] = ACTIONS(1566),
        [anon_sym_import] = ACTIONS(1572),
        [anon_sym_from] = ACTIONS(1572),
        [anon_sym_print] = ACTIONS(1572),
        [anon_sym_return] = ACTIONS(1572),
        [anon_sym_del] = ACTIONS(1572),
        [sym_pass_statement] = ACTIONS(1572),
        [sym_break_statement] = ACTIONS(1572),
        [sym_continue_statement] = ACTIONS(1572),
        [anon_sym_if] = ACTIONS(1572),
        [anon_sym_for] = ACTIONS(1572),
        [anon_sym_while] = ACTIONS(1572),
        [anon_sym_try] = ACTIONS(1572),
        [anon_sym_finally] = ACTIONS(1578),
        [anon_sym_with] = ACTIONS(1572),
        [anon_sym_def] = ACTIONS(1572),
        [anon_sym_class] = ACTIONS(1572),
        [anon_sym_AT] = ACTIONS(1566),
        [anon_sym_not] = ACTIONS(1572),
        [anon_sym_LBRACK] = ACTIONS(1566),
        [anon_sym_LBRACE] = ACTIONS(1566),
        [sym_number] = ACTIONS(1572),
        [sym_identifier] = ACTIONS(1580),
        [sym_comment] = ACTIONS(81),
        [sym__newline] = ACTIONS(1566),
        [sym__dedent] = ACTIONS(1566),
    },
    [712] = {
        [ts_builtin_sym_end] = ACTIONS(1586),
        [anon_sym_SEMI] = ACTIONS(1586),
        [anon_sym_import] = ACTIONS(1589),
        [anon_sym_from] = ACTIONS(1589),
        [anon_sym_print] = ACTIONS(1589),
        [anon_sym_return] = ACTIONS(1589),
        [anon_sym_del] = ACTIONS(1589),
        [sym_pass_statement] = ACTIONS(1589),
        [sym_break_statement] = ACTIONS(1589),
        [sym_continue_statement] = ACTIONS(1589),
        [anon_sym_if] = ACTIONS(1589),
        [anon_sym_else] = ACTIONS(1589),
        [anon_sym_for] = ACTIONS(1589),
        [anon_sym_while] = ACTIONS(1589),
        [anon_sym_try] = ACTIONS(1589),
        [anon_sym_except] = ACTIONS(1589),
        [anon_sym_finally] = ACTIONS(1589),
        [anon_sym_with] = ACTIONS(1589),
        [anon_sym_def] = ACTIONS(1589),
        [anon_sym_class] = ACTIONS(1589),
        [anon_sym_AT] = ACTIONS(1586),
        [anon_sym_not] = ACTIONS(1589),
        [anon_sym_LBRACK] = ACTIONS(1586),
        [anon_sym_LBRACE] = ACTIONS(1586),
        [sym_number] = ACTIONS(1589),
        [sym_identifier] = ACTIONS(1592),
        [sym_comment] = ACTIONS(81),
        [sym__newline] = ACTIONS(1586),
        [sym__dedent] = ACTIONS(1586),
    },
    [713] = {
        [ts_builtin_sym_end] = ACTIONS(1595),
        [anon_sym_SEMI] = ACTIONS(1595),
        [anon_sym_import] = ACTIONS(1599),
        [anon_sym_from] = ACTIONS(1599),
        [anon_sym_print] = ACTIONS(1599),
        [anon_sym_return] = ACTIONS(1599),
        [anon_sym_del] = ACTIONS(1599),
        [sym_pass_statement] = ACTIONS(1599),
        [sym_break_statement] = ACTIONS(1599),
        [sym_continue_statement] = ACTIONS(1599),
        [anon_sym_if] = ACTIONS(1599),
        [anon_sym_for] = ACTIONS(1599),
        [anon_sym_while] = ACTIONS(1599),
        [anon_sym_try] = ACTIONS(1599),
        [anon_sym_with] = ACTIONS(1599),
        [anon_sym_def] = ACTIONS(1599),
        [anon_sym_class] = ACTIONS(1599),
        [anon_sym_AT] = ACTIONS(1595),
        [anon_sym_not] = ACTIONS(1599),
        [anon_sym_LBRACK] = ACTIONS(1595),
        [anon_sym_LBRACE] = ACTIONS(1595),
        [sym_number] = ACTIONS(1599),
        [sym_identifier] = ACTIONS(1603),
        [sym_comment] = ACTIONS(81),
        [sym__newline] = ACTIONS(1595),
        [sym__dedent] = ACTIONS(1595),
    },
    [714] = {
        [aux_sym_with_statement_repeat1] = STATE(733),
        [anon_sym_COMMA] = ACTIONS(1607),
        [anon_sym_COLON] = ACTIONS(1611),
        [sym_comment] = ACTIONS(81),
    },
    [715] = {
        [ts_builtin_sym_end] = ACTIONS(1615),
        [anon_sym_SEMI] = ACTIONS(1615),
        [anon_sym_import] = ACTIONS(1618),
        [anon_sym_from] = ACTIONS(1618),
        [anon_sym_print] = ACTIONS(1618),
        [anon_sym_return] = ACTIONS(1618),
        [anon_sym_del] = ACTIONS(1618),
        [sym_pass_statement] = ACTIONS(1618),
        [sym_break_statement] = ACTIONS(1618),
        [sym_continue_statement] = ACTIONS(1618),
        [anon_sym_if] = ACTIONS(1618),
        [anon_sym_for] = ACTIONS(1618),
        [anon_sym_while] = ACTIONS(1618),
        [anon_sym_try] = ACTIONS(1618),
        [anon_sym_with] = ACTIONS(1618),
        [anon_sym_def] = ACTIONS(1618),
        [anon_sym_class] = ACTIONS(1618),
        [anon_sym_AT] = ACTIONS(1615),
        [anon_sym_not] = ACTIONS(1618),
        [anon_sym_LBRACK] = ACTIONS(1615),
        [anon_sym_LBRACE] = ACTIONS(1615),
        [sym_number] = ACTIONS(1618),
        [sym_identifier] = ACTIONS(1621),
        [sym_comment] = ACTIONS(81),
        [sym__newline] = ACTIONS(1615),
        [sym__dedent] = ACTIONS(1615),
    },
    [716] = {
        [anon_sym_COLON] = ACTIONS(1624),
        [sym_comment] = ACTIONS(81),
    },
    [717] = {
        [anon_sym_RPAREN] = ACTIONS(1626),
        [anon_sym_COMMA] = ACTIONS(1628),
        [sym_comment] = ACTIONS(81),
    },
    [718] = {
        [anon_sym_RPAREN] = ACTIONS(1626),
        [anon_sym_COMMA] = ACTIONS(1630),
        [sym_comment] = ACTIONS(81),
    },
    [719] = {
        [anon_sym_RPAREN] = ACTIONS(1632),
        [sym_comment] = ACTIONS(81),
    },
    [720] = {
        [anon_sym_def] = ACTIONS(1634),
        [anon_sym_class] = ACTIONS(1634),
        [anon_sym_AT] = ACTIONS(1634),
        [sym_comment] = ACTIONS(81),
    },
    [721] = {
        [sym_elif_clause] = STATE(797),
        [sym_else_clause] = STATE(812),
        [sym_except_clause] = STATE(813),
        [sym_finally_clause] = STATE(814),
        [aux_sym_if_statement_repeat1] = STATE(731),
        [aux_sym_try_statement_repeat1] = STATE(732),
        [ts_builtin_sym_end] = ACTIONS(1637),
        [anon_sym_SEMI] = ACTIONS(1637),
        [anon_sym_import] = ACTIONS(1651),
        [anon_sym_from] = ACTIONS(1651),
        [anon_sym_print] = ACTIONS(1651),
        [anon_sym_return] = ACTIONS(1651),
        [anon_sym_del] = ACTIONS(1651),
        [sym_pass_statement] = ACTIONS(1651),
        [sym_break_statement] = ACTIONS(1651),
        [sym_continue_statement] = ACTIONS(1651),
        [anon_sym_if] = ACTIONS(1651),
        [anon_sym_elif] = ACTIONS(1665),
        [anon_sym_else] = ACTIONS(1668),
        [anon_sym_for] = ACTIONS(1651),
        [anon_sym_while] = ACTIONS(1651),
        [anon_sym_try] = ACTIONS(1651),
        [anon_sym_except] = ACTIONS(1673),
        [anon_sym_finally] = ACTIONS(1677),
        [anon_sym_with] = ACTIONS(1651),
        [anon_sym_def] = ACTIONS(1651),
        [anon_sym_class] = ACTIONS(1651),
        [anon_sym_AT] = ACTIONS(1637),
        [anon_sym_not] = ACTIONS(1651),
        [anon_sym_LBRACK] = ACTIONS(1637),
        [anon_sym_LBRACE] = ACTIONS(1637),
        [sym_number] = ACTIONS(1651),
        [sym_identifier] = ACTIONS(1682),
        [sym_comment] = ACTIONS(81),
        [sym__newline] = ACTIONS(1637),
        [sym__dedent] = ACTIONS(1637),
    },
    [722] = {
        [anon_sym_RPAREN] = ACTIONS(1696),
        [anon_sym_COLON] = ACTIONS(1698),
        [anon_sym_in] = ACTIONS(1700),
        [sym_comment] = ACTIONS(81),
        [sym__newline] = ACTIONS(1702),
    },
    [723] = {
        [sym_arguments] = STATE(366),
        [aux_sym__import_list_repeat1] = STATE(641),
        [anon_sym_import] = ACTIONS(1705),
        [anon_sym_LPAREN] = ACTIONS(745),
        [anon_sym_RPAREN] = ACTIONS(1546),
        [anon_sym_COMMA] = ACTIONS(1550),
        [anon_sym_as] = ACTIONS(1243),
        [sym_comment] = ACTIONS(81),
        [sym__newline] = ACTIONS(1707),
    },
    [724] = {
        [aux_sym_print_statement_repeat1] = STATE(730),
        [aux_sym_subscript_repeat1] = STATE(57),
        [anon_sym_LPAREN] = ACTIONS(1712),
        [anon_sym_RPAREN] = ACTIONS(1716),
        [anon_sym_COMMA] = ACTIONS(1729),
        [anon_sym_as] = ACTIONS(1745),
        [anon_sym_STAR] = ACTIONS(1749),
        [anon_sym_COLON] = ACTIONS(1753),
        [anon_sym_for] = ACTIONS(1762),
        [anon_sym_in] = ACTIONS(1767),
        [anon_sym_PLUS] = ACTIONS(1773),
        [anon_sym_DASH] = ACTIONS(1773),
        [anon_sym_SLASH] = ACTIONS(1773),
        [anon_sym_STAR_STAR] = ACTIONS(1773),
        [anon_sym_PIPE] = ACTIONS(1773),
        [anon_sym_AMP] = ACTIONS(1773),
        [anon_sym_CARET] = ACTIONS(1773),
        [anon_sym_LT_LT] = ACTIONS(1773),
        [anon_sym_GT_GT] = ACTIONS(1773),
        [anon_sym_and] = ACTIONS(1773),
        [anon_sym_or] = ACTIONS(1773),
        [anon_sym_LBRACK] = ACTIONS(1777),
        [anon_sym_RBRACK] = ACTIONS(1781),
        [anon_sym_RBRACE] = ACTIONS(1789),
        [sym_comment] = ACTIONS(81),
        [sym__newline] = ACTIONS(1796),
    },
    [725] = {
        [anon_sym_RPAREN] = ACTIONS(1804),
        [anon_sym_COMMA] = ACTIONS(1808),
        [sym_comment] = ACTIONS(81),
    },
    [726] = {
        [aux_sym_call_repeat2] = STATE(735),
        [anon_sym_RPAREN] = ACTIONS(1812),
        [anon_sym_COMMA] = ACTIONS(1814),
        [sym_comment] = ACTIONS(81),
    },
    [727] = {
        [anon_sym_RPAREN] = ACTIONS(1816),
        [sym_comment] = ACTIONS(81),
    },
    [728] = {
        [aux_sym_dictionary_repeat1] = STATE(329),
        [anon_sym_COMMA] = ACTIONS(1818),
        [anon_sym_for] = ACTIONS(701),
        [anon_sym_RBRACE] = ACTIONS(1822),
        [sym_comment] = ACTIONS(81),
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
        [ts_builtin_sym_end] = ACTIONS(215),
        [anon_sym_SEMI] = ACTIONS(217),
        [anon_sym_import] = ACTIONS(91),
        [anon_sym_from] = ACTIONS(93),
        [anon_sym_print] = ACTIONS(95),
        [anon_sym_return] = ACTIONS(97),
        [anon_sym_del] = ACTIONS(99),
        [sym_pass_statement] = ACTIONS(101),
        [sym_break_statement] = ACTIONS(101),
        [sym_continue_statement] = ACTIONS(101),
        [anon_sym_if] = ACTIONS(1826),
        [anon_sym_for] = ACTIONS(1828),
        [anon_sym_while] = ACTIONS(1830),
        [anon_sym_try] = ACTIONS(1832),
        [anon_sym_with] = ACTIONS(1834),
        [anon_sym_def] = ACTIONS(1836),
        [anon_sym_class] = ACTIONS(1838),
        [anon_sym_AT] = ACTIONS(117),
        [anon_sym_not] = ACTIONS(119),
        [anon_sym_LBRACK] = ACTIONS(121),
        [anon_sym_LBRACE] = ACTIONS(123),
        [sym_number] = ACTIONS(125),
        [sym_identifier] = ACTIONS(127),
        [sym_comment] = ACTIONS(81),
        [sym__newline] = ACTIONS(217),
        [sym__dedent] = ACTIONS(1840),
    },
    [730] = {
        [anon_sym_RPAREN] = ACTIONS(1842),
        [anon_sym_COMMA] = ACTIONS(1845),
        [anon_sym_COLON] = ACTIONS(505),
        [anon_sym_in] = ACTIONS(505),
        [anon_sym_RBRACK] = ACTIONS(731),
        [anon_sym_RBRACE] = ACTIONS(715),
        [sym_comment] = ACTIONS(81),
        [sym__newline] = ACTIONS(1847),
    },
    [731] = {
        [sym_elif_clause] = STATE(751),
        [sym_else_clause] = STATE(752),
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
        [anon_sym_elif] = ACTIONS(1850),
        [anon_sym_else] = ACTIONS(1852),
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
        [sym_number] = ACTIONS(1111),
        [sym_identifier] = ACTIONS(1115),
        [sym_comment] = ACTIONS(81),
        [sym__newline] = ACTIONS(1113),
        [sym__dedent] = ACTIONS(1113),
    },
    [732] = {
        [sym_else_clause] = STATE(747),
        [sym_except_clause] = STATE(748),
        [sym_finally_clause] = STATE(749),
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
        [anon_sym_else] = ACTIONS(1852),
        [anon_sym_for] = ACTIONS(997),
        [anon_sym_while] = ACTIONS(997),
        [anon_sym_try] = ACTIONS(997),
        [anon_sym_except] = ACTIONS(1854),
        [anon_sym_finally] = ACTIONS(1578),
        [anon_sym_with] = ACTIONS(997),
        [anon_sym_def] = ACTIONS(997),
        [anon_sym_class] = ACTIONS(997),
        [anon_sym_AT] = ACTIONS(999),
        [anon_sym_not] = ACTIONS(997),
        [anon_sym_LBRACK] = ACTIONS(999),
        [anon_sym_LBRACE] = ACTIONS(999),
        [sym_number] = ACTIONS(997),
        [sym_identifier] = ACTIONS(1001),
        [sym_comment] = ACTIONS(81),
        [sym__newline] = ACTIONS(999),
        [sym__dedent] = ACTIONS(999),
    },
    [733] = {
        [anon_sym_COMMA] = ACTIONS(961),
        [anon_sym_COLON] = ACTIONS(1856),
        [sym_comment] = ACTIONS(81),
    },
    [734] = {
        [sym_function_definition] = STATE(740),
        [sym_class_definition] = STATE(740),
        [sym_decorator] = STATE(30),
        [anon_sym_def] = ACTIONS(1858),
        [anon_sym_class] = ACTIONS(1860),
        [anon_sym_AT] = ACTIONS(117),
        [sym_comment] = ACTIONS(81),
    },
    [735] = {
        [anon_sym_RPAREN] = ACTIONS(1862),
        [anon_sym_COMMA] = ACTIONS(1864),
        [sym_comment] = ACTIONS(81),
    },
    [736] = {
        [anon_sym_LPAREN] = ACTIONS(1866),
        [anon_sym_RPAREN] = ACTIONS(1866),
        [anon_sym_COMMA] = ACTIONS(1866),
        [anon_sym_as] = ACTIONS(1866),
        [anon_sym_STAR] = ACTIONS(1869),
        [anon_sym_COLON] = ACTIONS(1866),
        [anon_sym_for] = ACTIONS(1866),
        [anon_sym_in] = ACTIONS(1866),
        [anon_sym_PLUS] = ACTIONS(1866),
        [anon_sym_DASH] = ACTIONS(1866),
        [anon_sym_SLASH] = ACTIONS(1866),
        [anon_sym_STAR_STAR] = ACTIONS(1866),
        [anon_sym_PIPE] = ACTIONS(1866),
        [anon_sym_AMP] = ACTIONS(1866),
        [anon_sym_CARET] = ACTIONS(1866),
        [anon_sym_LT_LT] = ACTIONS(1866),
        [anon_sym_GT_GT] = ACTIONS(1866),
        [anon_sym_and] = ACTIONS(1866),
        [anon_sym_or] = ACTIONS(1866),
        [anon_sym_LBRACK] = ACTIONS(1866),
        [anon_sym_RBRACK] = ACTIONS(1866),
        [anon_sym_RBRACE] = ACTIONS(1866),
        [sym_comment] = ACTIONS(81),
        [sym__newline] = ACTIONS(1866),
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
        [anon_sym_STAR_STAR] = ACTIONS(241),
        [anon_sym_not] = ACTIONS(243),
        [anon_sym_LBRACK] = ACTIONS(141),
        [anon_sym_LBRACE] = ACTIONS(143),
        [sym_number] = ACTIONS(145),
        [sym_identifier] = ACTIONS(245),
        [sym_comment] = ACTIONS(81),
    },
    [738] = {
        [anon_sym_RPAREN] = ACTIONS(1872),
        [sym_comment] = ACTIONS(81),
    },
    [739] = {
        [anon_sym_LPAREN] = ACTIONS(1874),
        [anon_sym_RPAREN] = ACTIONS(1874),
        [anon_sym_COMMA] = ACTIONS(1874),
        [anon_sym_as] = ACTIONS(1874),
        [anon_sym_STAR] = ACTIONS(1877),
        [anon_sym_COLON] = ACTIONS(1874),
        [anon_sym_for] = ACTIONS(1874),
        [anon_sym_in] = ACTIONS(1874),
        [anon_sym_PLUS] = ACTIONS(1874),
        [anon_sym_DASH] = ACTIONS(1874),
        [anon_sym_SLASH] = ACTIONS(1874),
        [anon_sym_STAR_STAR] = ACTIONS(1874),
        [anon_sym_PIPE] = ACTIONS(1874),
        [anon_sym_AMP] = ACTIONS(1874),
        [anon_sym_CARET] = ACTIONS(1874),
        [anon_sym_LT_LT] = ACTIONS(1874),
        [anon_sym_GT_GT] = ACTIONS(1874),
        [anon_sym_and] = ACTIONS(1874),
        [anon_sym_or] = ACTIONS(1874),
        [anon_sym_LBRACK] = ACTIONS(1874),
        [anon_sym_RBRACK] = ACTIONS(1874),
        [anon_sym_RBRACE] = ACTIONS(1874),
        [sym_comment] = ACTIONS(81),
        [sym__newline] = ACTIONS(1874),
    },
    [740] = {
        [ts_builtin_sym_end] = ACTIONS(223),
        [anon_sym_SEMI] = ACTIONS(223),
        [anon_sym_import] = ACTIONS(225),
        [anon_sym_from] = ACTIONS(225),
        [anon_sym_print] = ACTIONS(225),
        [anon_sym_return] = ACTIONS(225),
        [anon_sym_del] = ACTIONS(225),
        [sym_pass_statement] = ACTIONS(225),
        [sym_break_statement] = ACTIONS(225),
        [sym_continue_statement] = ACTIONS(225),
        [anon_sym_if] = ACTIONS(225),
        [anon_sym_for] = ACTIONS(225),
        [anon_sym_while] = ACTIONS(225),
        [anon_sym_try] = ACTIONS(225),
        [anon_sym_with] = ACTIONS(225),
        [anon_sym_def] = ACTIONS(225),
        [anon_sym_class] = ACTIONS(225),
        [anon_sym_AT] = ACTIONS(223),
        [anon_sym_not] = ACTIONS(225),
        [anon_sym_LBRACK] = ACTIONS(223),
        [anon_sym_LBRACE] = ACTIONS(223),
        [sym_number] = ACTIONS(225),
        [sym_identifier] = ACTIONS(227),
        [sym_comment] = ACTIONS(81),
        [sym__newline] = ACTIONS(223),
        [sym__dedent] = ACTIONS(223),
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
        [anon_sym_import] = ACTIONS(91),
        [anon_sym_from] = ACTIONS(93),
        [anon_sym_print] = ACTIONS(95),
        [anon_sym_return] = ACTIONS(97),
        [anon_sym_del] = ACTIONS(99),
        [sym_pass_statement] = ACTIONS(101),
        [sym_break_statement] = ACTIONS(101),
        [sym_continue_statement] = ACTIONS(101),
        [anon_sym_not] = ACTIONS(119),
        [anon_sym_LBRACK] = ACTIONS(121),
        [anon_sym_LBRACE] = ACTIONS(123),
        [sym_number] = ACTIONS(125),
        [sym_identifier] = ACTIONS(127),
        [sym_comment] = ACTIONS(81),
        [sym__indent] = ACTIONS(1388),
    },
    [742] = {
        [sym_comment] = ACTIONS(81),
        [sym__newline] = ACTIONS(1518),
    },
    [743] = {
        [ts_builtin_sym_end] = ACTIONS(967),
        [anon_sym_SEMI] = ACTIONS(967),
        [anon_sym_import] = ACTIONS(965),
        [anon_sym_from] = ACTIONS(965),
        [anon_sym_print] = ACTIONS(965),
        [anon_sym_return] = ACTIONS(965),
        [anon_sym_del] = ACTIONS(965),
        [sym_pass_statement] = ACTIONS(965),
        [sym_break_statement] = ACTIONS(965),
        [sym_continue_statement] = ACTIONS(965),
        [anon_sym_if] = ACTIONS(965),
        [anon_sym_for] = ACTIONS(965),
        [anon_sym_while] = ACTIONS(965),
        [anon_sym_try] = ACTIONS(965),
        [anon_sym_with] = ACTIONS(965),
        [anon_sym_def] = ACTIONS(965),
        [anon_sym_class] = ACTIONS(965),
        [anon_sym_AT] = ACTIONS(967),
        [anon_sym_not] = ACTIONS(965),
        [anon_sym_LBRACK] = ACTIONS(967),
        [anon_sym_LBRACE] = ACTIONS(967),
        [sym_number] = ACTIONS(965),
        [sym_identifier] = ACTIONS(969),
        [sym_comment] = ACTIONS(81),
        [sym__newline] = ACTIONS(967),
        [sym__dedent] = ACTIONS(967),
    },
    [744] = {
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
        [anon_sym_elif] = ACTIONS(809),
        [anon_sym_else] = ACTIONS(809),
        [anon_sym_for] = ACTIONS(809),
        [anon_sym_while] = ACTIONS(809),
        [anon_sym_try] = ACTIONS(809),
        [anon_sym_except] = ACTIONS(809),
        [anon_sym_finally] = ACTIONS(809),
        [anon_sym_with] = ACTIONS(809),
        [anon_sym_def] = ACTIONS(809),
        [anon_sym_class] = ACTIONS(809),
        [anon_sym_AT] = ACTIONS(807),
        [anon_sym_not] = ACTIONS(809),
        [anon_sym_LBRACK] = ACTIONS(807),
        [anon_sym_LBRACE] = ACTIONS(807),
        [sym_number] = ACTIONS(809),
        [sym_identifier] = ACTIONS(811),
        [sym_comment] = ACTIONS(81),
        [sym__newline] = ACTIONS(807),
        [sym__dedent] = ACTIONS(807),
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
        [anon_sym_import] = ACTIONS(91),
        [anon_sym_from] = ACTIONS(93),
        [anon_sym_print] = ACTIONS(95),
        [anon_sym_return] = ACTIONS(97),
        [anon_sym_del] = ACTIONS(99),
        [sym_pass_statement] = ACTIONS(101),
        [sym_break_statement] = ACTIONS(101),
        [sym_continue_statement] = ACTIONS(101),
        [anon_sym_if] = ACTIONS(785),
        [anon_sym_for] = ACTIONS(787),
        [anon_sym_while] = ACTIONS(789),
        [anon_sym_try] = ACTIONS(791),
        [anon_sym_with] = ACTIONS(793),
        [anon_sym_def] = ACTIONS(795),
        [anon_sym_class] = ACTIONS(797),
        [anon_sym_AT] = ACTIONS(117),
        [anon_sym_not] = ACTIONS(119),
        [anon_sym_LBRACK] = ACTIONS(121),
        [anon_sym_LBRACE] = ACTIONS(123),
        [sym_number] = ACTIONS(125),
        [sym_identifier] = ACTIONS(127),
        [sym_comment] = ACTIONS(81),
        [sym__dedent] = ACTIONS(1840),
    },
    [746] = {
        [ts_builtin_sym_end] = ACTIONS(827),
        [anon_sym_SEMI] = ACTIONS(827),
        [anon_sym_import] = ACTIONS(829),
        [anon_sym_from] = ACTIONS(829),
        [anon_sym_print] = ACTIONS(829),
        [anon_sym_return] = ACTIONS(829),
        [anon_sym_del] = ACTIONS(829),
        [sym_pass_statement] = ACTIONS(829),
        [sym_break_statement] = ACTIONS(829),
        [sym_continue_statement] = ACTIONS(829),
        [anon_sym_if] = ACTIONS(829),
        [anon_sym_elif] = ACTIONS(829),
        [anon_sym_else] = ACTIONS(829),
        [anon_sym_for] = ACTIONS(829),
        [anon_sym_while] = ACTIONS(829),
        [anon_sym_try] = ACTIONS(829),
        [anon_sym_except] = ACTIONS(829),
        [anon_sym_finally] = ACTIONS(829),
        [anon_sym_with] = ACTIONS(829),
        [anon_sym_def] = ACTIONS(829),
        [anon_sym_class] = ACTIONS(829),
        [anon_sym_AT] = ACTIONS(827),
        [anon_sym_not] = ACTIONS(829),
        [anon_sym_LBRACK] = ACTIONS(827),
        [anon_sym_LBRACE] = ACTIONS(827),
        [sym_number] = ACTIONS(829),
        [sym_identifier] = ACTIONS(831),
        [sym_comment] = ACTIONS(81),
        [sym__newline] = ACTIONS(827),
        [sym__dedent] = ACTIONS(827),
    },
    [747] = {
        [sym_finally_clause] = STATE(750),
        [ts_builtin_sym_end] = ACTIONS(1013),
        [anon_sym_SEMI] = ACTIONS(1013),
        [anon_sym_import] = ACTIONS(1011),
        [anon_sym_from] = ACTIONS(1011),
        [anon_sym_print] = ACTIONS(1011),
        [anon_sym_return] = ACTIONS(1011),
        [anon_sym_del] = ACTIONS(1011),
        [sym_pass_statement] = ACTIONS(1011),
        [sym_break_statement] = ACTIONS(1011),
        [sym_continue_statement] = ACTIONS(1011),
        [anon_sym_if] = ACTIONS(1011),
        [anon_sym_for] = ACTIONS(1011),
        [anon_sym_while] = ACTIONS(1011),
        [anon_sym_try] = ACTIONS(1011),
        [anon_sym_finally] = ACTIONS(1578),
        [anon_sym_with] = ACTIONS(1011),
        [anon_sym_def] = ACTIONS(1011),
        [anon_sym_class] = ACTIONS(1011),
        [anon_sym_AT] = ACTIONS(1013),
        [anon_sym_not] = ACTIONS(1011),
        [anon_sym_LBRACK] = ACTIONS(1013),
        [anon_sym_LBRACE] = ACTIONS(1013),
        [sym_number] = ACTIONS(1011),
        [sym_identifier] = ACTIONS(1015),
        [sym_comment] = ACTIONS(81),
        [sym__newline] = ACTIONS(1013),
        [sym__dedent] = ACTIONS(1013),
    },
    [748] = {
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
        [anon_sym_else] = ACTIONS(1017),
        [anon_sym_for] = ACTIONS(1017),
        [anon_sym_while] = ACTIONS(1017),
        [anon_sym_try] = ACTIONS(1017),
        [anon_sym_except] = ACTIONS(1017),
        [anon_sym_finally] = ACTIONS(1017),
        [anon_sym_with] = ACTIONS(1017),
        [anon_sym_def] = ACTIONS(1017),
        [anon_sym_class] = ACTIONS(1017),
        [anon_sym_AT] = ACTIONS(1019),
        [anon_sym_not] = ACTIONS(1017),
        [anon_sym_LBRACK] = ACTIONS(1019),
        [anon_sym_LBRACE] = ACTIONS(1019),
        [sym_number] = ACTIONS(1017),
        [sym_identifier] = ACTIONS(1021),
        [sym_comment] = ACTIONS(81),
        [sym__newline] = ACTIONS(1019),
        [sym__dedent] = ACTIONS(1019),
    },
    [749] = {
        [ts_builtin_sym_end] = ACTIONS(1013),
        [anon_sym_SEMI] = ACTIONS(1013),
        [anon_sym_import] = ACTIONS(1011),
        [anon_sym_from] = ACTIONS(1011),
        [anon_sym_print] = ACTIONS(1011),
        [anon_sym_return] = ACTIONS(1011),
        [anon_sym_del] = ACTIONS(1011),
        [sym_pass_statement] = ACTIONS(1011),
        [sym_break_statement] = ACTIONS(1011),
        [sym_continue_statement] = ACTIONS(1011),
        [anon_sym_if] = ACTIONS(1011),
        [anon_sym_for] = ACTIONS(1011),
        [anon_sym_while] = ACTIONS(1011),
        [anon_sym_try] = ACTIONS(1011),
        [anon_sym_with] = ACTIONS(1011),
        [anon_sym_def] = ACTIONS(1011),
        [anon_sym_class] = ACTIONS(1011),
        [anon_sym_AT] = ACTIONS(1013),
        [anon_sym_not] = ACTIONS(1011),
        [anon_sym_LBRACK] = ACTIONS(1013),
        [anon_sym_LBRACE] = ACTIONS(1013),
        [sym_number] = ACTIONS(1011),
        [sym_identifier] = ACTIONS(1015),
        [sym_comment] = ACTIONS(81),
        [sym__newline] = ACTIONS(1013),
        [sym__dedent] = ACTIONS(1013),
    },
    [750] = {
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
        [anon_sym_for] = ACTIONS(1023),
        [anon_sym_while] = ACTIONS(1023),
        [anon_sym_try] = ACTIONS(1023),
        [anon_sym_with] = ACTIONS(1023),
        [anon_sym_def] = ACTIONS(1023),
        [anon_sym_class] = ACTIONS(1023),
        [anon_sym_AT] = ACTIONS(1025),
        [anon_sym_not] = ACTIONS(1023),
        [anon_sym_LBRACK] = ACTIONS(1025),
        [anon_sym_LBRACE] = ACTIONS(1025),
        [sym_number] = ACTIONS(1023),
        [sym_identifier] = ACTIONS(1027),
        [sym_comment] = ACTIONS(81),
        [sym__newline] = ACTIONS(1025),
        [sym__dedent] = ACTIONS(1025),
    },
    [751] = {
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
        [anon_sym_elif] = ACTIONS(1117),
        [anon_sym_else] = ACTIONS(1117),
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
        [sym_number] = ACTIONS(1117),
        [sym_identifier] = ACTIONS(1121),
        [sym_comment] = ACTIONS(81),
        [sym__newline] = ACTIONS(1119),
        [sym__dedent] = ACTIONS(1119),
    },
    [752] = {
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
        [sym_number] = ACTIONS(1123),
        [sym_identifier] = ACTIONS(1127),
        [sym_comment] = ACTIONS(81),
        [sym__newline] = ACTIONS(1125),
        [sym__dedent] = ACTIONS(1125),
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
        [anon_sym_import] = ACTIONS(91),
        [anon_sym_from] = ACTIONS(93),
        [anon_sym_print] = ACTIONS(95),
        [anon_sym_return] = ACTIONS(97),
        [anon_sym_del] = ACTIONS(99),
        [sym_pass_statement] = ACTIONS(101),
        [sym_break_statement] = ACTIONS(101),
        [sym_continue_statement] = ACTIONS(101),
        [anon_sym_not] = ACTIONS(119),
        [anon_sym_LBRACK] = ACTIONS(121),
        [anon_sym_LBRACE] = ACTIONS(123),
        [sym_number] = ACTIONS(125),
        [sym_identifier] = ACTIONS(127),
        [sym_comment] = ACTIONS(81),
        [sym__indent] = ACTIONS(1388),
    },
    [754] = {
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
        [anon_sym_finally] = ACTIONS(1029),
        [anon_sym_with] = ACTIONS(1029),
        [anon_sym_def] = ACTIONS(1029),
        [anon_sym_class] = ACTIONS(1029),
        [anon_sym_AT] = ACTIONS(1031),
        [anon_sym_not] = ACTIONS(1029),
        [anon_sym_LBRACK] = ACTIONS(1031),
        [anon_sym_LBRACE] = ACTIONS(1031),
        [sym_number] = ACTIONS(1029),
        [sym_identifier] = ACTIONS(1033),
        [sym_comment] = ACTIONS(81),
        [sym__newline] = ACTIONS(1031),
        [sym__dedent] = ACTIONS(1031),
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
        [anon_sym_not] = ACTIONS(1880),
        [anon_sym_LBRACK] = ACTIONS(121),
        [anon_sym_RBRACK] = ACTIONS(735),
        [anon_sym_LBRACE] = ACTIONS(123),
        [anon_sym_RBRACE] = ACTIONS(719),
        [sym_number] = ACTIONS(125),
        [sym_identifier] = ACTIONS(127),
        [sym_comment] = ACTIONS(81),
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
        [anon_sym_not] = ACTIONS(1880),
        [anon_sym_LBRACK] = ACTIONS(121),
        [anon_sym_LBRACE] = ACTIONS(123),
        [sym_number] = ACTIONS(125),
        [sym_identifier] = ACTIONS(127),
        [sym_comment] = ACTIONS(81),
    },
    [757] = {
        [anon_sym_LPAREN] = ACTIONS(195),
        [anon_sym_RPAREN] = ACTIONS(507),
        [anon_sym_COMMA] = ACTIONS(507),
        [anon_sym_STAR] = ACTIONS(1882),
        [anon_sym_COLON] = ACTIONS(507),
        [anon_sym_in] = ACTIONS(507),
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
        [anon_sym_LBRACK] = ACTIONS(211),
        [anon_sym_RBRACK] = ACTIONS(507),
        [anon_sym_RBRACE] = ACTIONS(507),
        [sym_comment] = ACTIONS(81),
        [sym__newline] = ACTIONS(507),
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
        [anon_sym_not] = ACTIONS(1880),
        [anon_sym_LBRACK] = ACTIONS(121),
        [anon_sym_LBRACE] = ACTIONS(123),
        [sym_number] = ACTIONS(125),
        [sym_identifier] = ACTIONS(127),
        [sym_comment] = ACTIONS(81),
    },
    [759] = {
        [anon_sym_LPAREN] = ACTIONS(1886),
        [anon_sym_RPAREN] = ACTIONS(315),
        [anon_sym_COMMA] = ACTIONS(315),
        [anon_sym_STAR] = ACTIONS(1889),
        [anon_sym_COLON] = ACTIONS(315),
        [anon_sym_in] = ACTIONS(315),
        [anon_sym_PLUS] = ACTIONS(1892),
        [anon_sym_DASH] = ACTIONS(1892),
        [anon_sym_SLASH] = ACTIONS(1892),
        [anon_sym_STAR_STAR] = ACTIONS(1892),
        [anon_sym_PIPE] = ACTIONS(1892),
        [anon_sym_AMP] = ACTIONS(1892),
        [anon_sym_CARET] = ACTIONS(1892),
        [anon_sym_LT_LT] = ACTIONS(1892),
        [anon_sym_GT_GT] = ACTIONS(1892),
        [anon_sym_and] = ACTIONS(1892),
        [anon_sym_or] = ACTIONS(1892),
        [anon_sym_LBRACK] = ACTIONS(1895),
        [anon_sym_RBRACK] = ACTIONS(315),
        [anon_sym_RBRACE] = ACTIONS(315),
        [sym_comment] = ACTIONS(81),
        [sym__newline] = ACTIONS(315),
    },
    [760] = {
        [anon_sym_LPAREN] = ACTIONS(1898),
        [anon_sym_RPAREN] = ACTIONS(643),
        [anon_sym_COMMA] = ACTIONS(643),
        [anon_sym_STAR] = ACTIONS(1901),
        [anon_sym_COLON] = ACTIONS(643),
        [anon_sym_in] = ACTIONS(643),
        [anon_sym_PLUS] = ACTIONS(1904),
        [anon_sym_DASH] = ACTIONS(1904),
        [anon_sym_SLASH] = ACTIONS(1904),
        [anon_sym_STAR_STAR] = ACTIONS(1904),
        [anon_sym_PIPE] = ACTIONS(1904),
        [anon_sym_AMP] = ACTIONS(1904),
        [anon_sym_CARET] = ACTIONS(1904),
        [anon_sym_LT_LT] = ACTIONS(1904),
        [anon_sym_GT_GT] = ACTIONS(1904),
        [anon_sym_and] = ACTIONS(1904),
        [anon_sym_or] = ACTIONS(1904),
        [anon_sym_LBRACK] = ACTIONS(1907),
        [anon_sym_RBRACK] = ACTIONS(643),
        [anon_sym_RBRACE] = ACTIONS(643),
        [sym_comment] = ACTIONS(81),
        [sym__newline] = ACTIONS(643),
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
        [anon_sym_not] = ACTIONS(149),
        [anon_sym_LBRACK] = ACTIONS(141),
        [anon_sym_LBRACE] = ACTIONS(143),
        [sym_number] = ACTIONS(145),
        [sym_identifier] = ACTIONS(147),
        [sym_comment] = ACTIONS(81),
    },
    [762] = {
        [ts_builtin_sym_end] = ACTIONS(233),
        [anon_sym_SEMI] = ACTIONS(233),
        [anon_sym_import] = ACTIONS(235),
        [anon_sym_from] = ACTIONS(235),
        [anon_sym_print] = ACTIONS(235),
        [anon_sym_return] = ACTIONS(235),
        [anon_sym_del] = ACTIONS(235),
        [sym_pass_statement] = ACTIONS(235),
        [sym_break_statement] = ACTIONS(235),
        [sym_continue_statement] = ACTIONS(235),
        [anon_sym_if] = ACTIONS(235),
        [anon_sym_for] = ACTIONS(235),
        [anon_sym_while] = ACTIONS(235),
        [anon_sym_try] = ACTIONS(235),
        [anon_sym_with] = ACTIONS(235),
        [anon_sym_def] = ACTIONS(235),
        [anon_sym_class] = ACTIONS(235),
        [anon_sym_AT] = ACTIONS(233),
        [anon_sym_not] = ACTIONS(235),
        [anon_sym_LBRACK] = ACTIONS(233),
        [anon_sym_LBRACE] = ACTIONS(233),
        [sym_number] = ACTIONS(235),
        [sym_identifier] = ACTIONS(237),
        [sym_comment] = ACTIONS(81),
        [sym__newline] = ACTIONS(233),
        [sym__dedent] = ACTIONS(233),
    },
    [763] = {
        [sym_comment] = ACTIONS(81),
        [sym__newline] = ACTIONS(1910),
    },
    [764] = {
        [ts_builtin_sym_end] = ACTIONS(687),
        [anon_sym_SEMI] = ACTIONS(687),
        [anon_sym_import] = ACTIONS(689),
        [anon_sym_from] = ACTIONS(689),
        [anon_sym_print] = ACTIONS(689),
        [anon_sym_return] = ACTIONS(689),
        [anon_sym_del] = ACTIONS(689),
        [sym_pass_statement] = ACTIONS(689),
        [sym_break_statement] = ACTIONS(689),
        [sym_continue_statement] = ACTIONS(689),
        [anon_sym_if] = ACTIONS(689),
        [anon_sym_for] = ACTIONS(689),
        [anon_sym_while] = ACTIONS(689),
        [anon_sym_try] = ACTIONS(689),
        [anon_sym_with] = ACTIONS(689),
        [anon_sym_def] = ACTIONS(689),
        [anon_sym_class] = ACTIONS(689),
        [anon_sym_AT] = ACTIONS(687),
        [anon_sym_not] = ACTIONS(689),
        [anon_sym_LBRACK] = ACTIONS(687),
        [anon_sym_LBRACE] = ACTIONS(687),
        [sym_number] = ACTIONS(689),
        [sym_identifier] = ACTIONS(691),
        [sym_comment] = ACTIONS(81),
        [sym__newline] = ACTIONS(687),
        [sym__dedent] = ACTIONS(687),
    },
    [765] = {
        [anon_sym_in] = ACTIONS(1912),
        [sym_comment] = ACTIONS(81),
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
        [anon_sym_not] = ACTIONS(943),
        [anon_sym_LBRACK] = ACTIONS(141),
        [anon_sym_LBRACE] = ACTIONS(143),
        [sym_number] = ACTIONS(145),
        [sym_identifier] = ACTIONS(147),
        [sym_comment] = ACTIONS(81),
    },
    [767] = {
        [anon_sym_COLON] = ACTIONS(1698),
        [sym_comment] = ACTIONS(81),
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
        [anon_sym_import] = ACTIONS(91),
        [anon_sym_from] = ACTIONS(93),
        [anon_sym_print] = ACTIONS(95),
        [anon_sym_return] = ACTIONS(97),
        [anon_sym_del] = ACTIONS(99),
        [sym_pass_statement] = ACTIONS(101),
        [sym_break_statement] = ACTIONS(101),
        [sym_continue_statement] = ACTIONS(101),
        [anon_sym_not] = ACTIONS(119),
        [anon_sym_LBRACK] = ACTIONS(121),
        [anon_sym_LBRACE] = ACTIONS(123),
        [sym_number] = ACTIONS(125),
        [sym_identifier] = ACTIONS(127),
        [sym_comment] = ACTIONS(81),
        [sym__indent] = ACTIONS(1388),
    },
    [769] = {
        [sym_else_clause] = STATE(770),
        [ts_builtin_sym_end] = ACTIONS(1085),
        [anon_sym_SEMI] = ACTIONS(1085),
        [anon_sym_import] = ACTIONS(1083),
        [anon_sym_from] = ACTIONS(1083),
        [anon_sym_print] = ACTIONS(1083),
        [anon_sym_return] = ACTIONS(1083),
        [anon_sym_del] = ACTIONS(1083),
        [sym_pass_statement] = ACTIONS(1083),
        [sym_break_statement] = ACTIONS(1083),
        [sym_continue_statement] = ACTIONS(1083),
        [anon_sym_if] = ACTIONS(1083),
        [anon_sym_else] = ACTIONS(1852),
        [anon_sym_for] = ACTIONS(1083),
        [anon_sym_while] = ACTIONS(1083),
        [anon_sym_try] = ACTIONS(1083),
        [anon_sym_with] = ACTIONS(1083),
        [anon_sym_def] = ACTIONS(1083),
        [anon_sym_class] = ACTIONS(1083),
        [anon_sym_AT] = ACTIONS(1085),
        [anon_sym_not] = ACTIONS(1083),
        [anon_sym_LBRACK] = ACTIONS(1085),
        [anon_sym_LBRACE] = ACTIONS(1085),
        [sym_number] = ACTIONS(1083),
        [sym_identifier] = ACTIONS(1087),
        [sym_comment] = ACTIONS(81),
        [sym__newline] = ACTIONS(1085),
        [sym__dedent] = ACTIONS(1085),
    },
    [770] = {
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
        [sym_number] = ACTIONS(1089),
        [sym_identifier] = ACTIONS(1093),
        [sym_comment] = ACTIONS(81),
        [sym__newline] = ACTIONS(1091),
        [sym__dedent] = ACTIONS(1091),
    },
    [771] = {
        [anon_sym_LPAREN] = ACTIONS(1301),
        [anon_sym_RPAREN] = ACTIONS(1301),
        [anon_sym_COMMA] = ACTIONS(1301),
        [anon_sym_as] = ACTIONS(1301),
        [anon_sym_STAR] = ACTIONS(1307),
        [anon_sym_COLON] = ACTIONS(1301),
        [anon_sym_for] = ACTIONS(1301),
        [anon_sym_in] = ACTIONS(1301),
        [anon_sym_PLUS] = ACTIONS(1301),
        [anon_sym_DASH] = ACTIONS(1301),
        [anon_sym_SLASH] = ACTIONS(1301),
        [anon_sym_STAR_STAR] = ACTIONS(1301),
        [anon_sym_PIPE] = ACTIONS(1301),
        [anon_sym_AMP] = ACTIONS(1301),
        [anon_sym_CARET] = ACTIONS(1301),
        [anon_sym_LT_LT] = ACTIONS(1301),
        [anon_sym_GT_GT] = ACTIONS(1301),
        [anon_sym_and] = ACTIONS(1301),
        [anon_sym_or] = ACTIONS(1301),
        [anon_sym_LBRACK] = ACTIONS(1301),
        [anon_sym_RBRACK] = ACTIONS(1301),
        [anon_sym_RBRACE] = ACTIONS(1301),
        [sym_comment] = ACTIONS(81),
        [sym__newline] = ACTIONS(1301),
    },
    [772] = {
        [anon_sym_LPAREN] = ACTIONS(1914),
        [anon_sym_RPAREN] = ACTIONS(1914),
        [anon_sym_COMMA] = ACTIONS(1914),
        [anon_sym_as] = ACTIONS(1914),
        [anon_sym_STAR] = ACTIONS(1917),
        [anon_sym_COLON] = ACTIONS(1914),
        [anon_sym_for] = ACTIONS(1914),
        [anon_sym_in] = ACTIONS(1914),
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
        [anon_sym_LBRACK] = ACTIONS(1914),
        [anon_sym_RBRACK] = ACTIONS(1914),
        [anon_sym_RBRACE] = ACTIONS(1914),
        [sym_comment] = ACTIONS(81),
        [sym__newline] = ACTIONS(1914),
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
        [anon_sym_STAR_STAR] = ACTIONS(241),
        [anon_sym_not] = ACTIONS(243),
        [anon_sym_LBRACK] = ACTIONS(141),
        [anon_sym_LBRACE] = ACTIONS(143),
        [sym_number] = ACTIONS(145),
        [sym_identifier] = ACTIONS(245),
        [sym_comment] = ACTIONS(81),
    },
    [774] = {
        [anon_sym_RPAREN] = ACTIONS(1920),
        [sym_comment] = ACTIONS(81),
    },
    [775] = {
        [anon_sym_LPAREN] = ACTIONS(1922),
        [anon_sym_RPAREN] = ACTIONS(1922),
        [anon_sym_COMMA] = ACTIONS(1922),
        [anon_sym_as] = ACTIONS(1922),
        [anon_sym_STAR] = ACTIONS(1925),
        [anon_sym_COLON] = ACTIONS(1922),
        [anon_sym_for] = ACTIONS(1922),
        [anon_sym_in] = ACTIONS(1922),
        [anon_sym_PLUS] = ACTIONS(1922),
        [anon_sym_DASH] = ACTIONS(1922),
        [anon_sym_SLASH] = ACTIONS(1922),
        [anon_sym_STAR_STAR] = ACTIONS(1922),
        [anon_sym_PIPE] = ACTIONS(1922),
        [anon_sym_AMP] = ACTIONS(1922),
        [anon_sym_CARET] = ACTIONS(1922),
        [anon_sym_LT_LT] = ACTIONS(1922),
        [anon_sym_GT_GT] = ACTIONS(1922),
        [anon_sym_and] = ACTIONS(1922),
        [anon_sym_or] = ACTIONS(1922),
        [anon_sym_LBRACK] = ACTIONS(1922),
        [anon_sym_RBRACK] = ACTIONS(1922),
        [anon_sym_RBRACE] = ACTIONS(1922),
        [sym_comment] = ACTIONS(81),
        [sym__newline] = ACTIONS(1922),
    },
    [776] = {
        [anon_sym_RPAREN] = ACTIONS(1862),
        [anon_sym_STAR] = ACTIONS(1928),
        [anon_sym_STAR_STAR] = ACTIONS(1931),
        [anon_sym_not] = ACTIONS(1928),
        [anon_sym_LBRACK] = ACTIONS(1931),
        [anon_sym_LBRACE] = ACTIONS(1931),
        [sym_number] = ACTIONS(1928),
        [sym_identifier] = ACTIONS(1934),
        [sym_comment] = ACTIONS(81),
    },
    [777] = {
        [anon_sym_LPAREN] = ACTIONS(1914),
        [anon_sym_RPAREN] = ACTIONS(1914),
        [anon_sym_COMMA] = ACTIONS(1914),
        [anon_sym_as] = ACTIONS(1914),
        [anon_sym_STAR] = ACTIONS(1917),
        [anon_sym_COLON] = ACTIONS(1914),
        [anon_sym_for] = ACTIONS(1914),
        [anon_sym_in] = ACTIONS(1914),
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
        [anon_sym_LBRACK] = ACTIONS(1914),
        [anon_sym_RBRACK] = ACTIONS(1914),
        [anon_sym_RBRACE] = ACTIONS(1914),
        [sym_comment] = ACTIONS(81),
        [sym__newline] = ACTIONS(1937),
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
        [anon_sym_RPAREN] = ACTIONS(1862),
        [anon_sym_STAR] = ACTIONS(1928),
        [anon_sym_STAR_STAR] = ACTIONS(1931),
        [anon_sym_not] = ACTIONS(1941),
        [anon_sym_LBRACK] = ACTIONS(1353),
        [anon_sym_DOT_DOT_DOT] = ACTIONS(277),
        [anon_sym_RBRACK] = ACTIONS(1945),
        [anon_sym_LBRACE] = ACTIONS(1361),
        [anon_sym_RBRACE] = ACTIONS(715),
        [sym_number] = ACTIONS(1367),
        [sym_identifier] = ACTIONS(1947),
        [sym_comment] = ACTIONS(81),
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
        [anon_sym_not] = ACTIONS(943),
        [anon_sym_LBRACK] = ACTIONS(141),
        [anon_sym_LBRACE] = ACTIONS(143),
        [sym_number] = ACTIONS(145),
        [sym_identifier] = ACTIONS(147),
        [sym_comment] = ACTIONS(81),
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
        [anon_sym_import] = ACTIONS(91),
        [anon_sym_from] = ACTIONS(93),
        [anon_sym_print] = ACTIONS(95),
        [anon_sym_return] = ACTIONS(97),
        [anon_sym_del] = ACTIONS(99),
        [sym_pass_statement] = ACTIONS(101),
        [sym_break_statement] = ACTIONS(101),
        [sym_continue_statement] = ACTIONS(101),
        [anon_sym_not] = ACTIONS(1386),
        [anon_sym_LBRACK] = ACTIONS(121),
        [anon_sym_LBRACE] = ACTIONS(123),
        [sym_number] = ACTIONS(125),
        [sym_identifier] = ACTIONS(127),
        [sym_comment] = ACTIONS(81),
        [sym__indent] = ACTIONS(1388),
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
        [anon_sym_not] = ACTIONS(149),
        [anon_sym_LBRACK] = ACTIONS(141),
        [anon_sym_LBRACE] = ACTIONS(143),
        [sym_number] = ACTIONS(145),
        [sym_identifier] = ACTIONS(147),
        [sym_comment] = ACTIONS(81),
    },
    [782] = {
        [anon_sym_LPAREN] = ACTIONS(1951),
        [anon_sym_RPAREN] = ACTIONS(1951),
        [anon_sym_COMMA] = ACTIONS(1951),
        [anon_sym_as] = ACTIONS(1951),
        [anon_sym_STAR] = ACTIONS(1955),
        [anon_sym_COLON] = ACTIONS(1951),
        [anon_sym_for] = ACTIONS(1951),
        [anon_sym_in] = ACTIONS(1951),
        [anon_sym_PLUS] = ACTIONS(1951),
        [anon_sym_DASH] = ACTIONS(1951),
        [anon_sym_SLASH] = ACTIONS(1951),
        [anon_sym_STAR_STAR] = ACTIONS(1951),
        [anon_sym_PIPE] = ACTIONS(1951),
        [anon_sym_AMP] = ACTIONS(1951),
        [anon_sym_CARET] = ACTIONS(1951),
        [anon_sym_LT_LT] = ACTIONS(1951),
        [anon_sym_GT_GT] = ACTIONS(1951),
        [anon_sym_and] = ACTIONS(1951),
        [anon_sym_or] = ACTIONS(1951),
        [anon_sym_LBRACK] = ACTIONS(1951),
        [anon_sym_RBRACK] = ACTIONS(1951),
        [anon_sym_RBRACE] = ACTIONS(1951),
        [sym_comment] = ACTIONS(81),
        [sym__newline] = ACTIONS(1951),
    },
    [783] = {
        [anon_sym_LPAREN] = ACTIONS(1959),
        [anon_sym_RPAREN] = ACTIONS(1959),
        [anon_sym_COMMA] = ACTIONS(1959),
        [anon_sym_as] = ACTIONS(1959),
        [anon_sym_STAR] = ACTIONS(1963),
        [anon_sym_COLON] = ACTIONS(1959),
        [anon_sym_for] = ACTIONS(1959),
        [anon_sym_in] = ACTIONS(1959),
        [anon_sym_PLUS] = ACTIONS(1959),
        [anon_sym_DASH] = ACTIONS(1959),
        [anon_sym_SLASH] = ACTIONS(1959),
        [anon_sym_STAR_STAR] = ACTIONS(1959),
        [anon_sym_PIPE] = ACTIONS(1959),
        [anon_sym_AMP] = ACTIONS(1959),
        [anon_sym_CARET] = ACTIONS(1959),
        [anon_sym_LT_LT] = ACTIONS(1959),
        [anon_sym_GT_GT] = ACTIONS(1959),
        [anon_sym_and] = ACTIONS(1959),
        [anon_sym_or] = ACTIONS(1959),
        [anon_sym_LBRACK] = ACTIONS(1959),
        [anon_sym_RBRACK] = ACTIONS(1959),
        [anon_sym_RBRACE] = ACTIONS(1959),
        [sym_comment] = ACTIONS(81),
        [sym__newline] = ACTIONS(1959),
    },
    [784] = {
        [anon_sym_LPAREN] = ACTIONS(1886),
        [anon_sym_RPAREN] = ACTIONS(315),
        [anon_sym_COMMA] = ACTIONS(315),
        [anon_sym_as] = ACTIONS(315),
        [anon_sym_STAR] = ACTIONS(1967),
        [anon_sym_COLON] = ACTIONS(315),
        [anon_sym_for] = ACTIONS(315),
        [anon_sym_in] = ACTIONS(315),
        [anon_sym_PLUS] = ACTIONS(1970),
        [anon_sym_DASH] = ACTIONS(1970),
        [anon_sym_SLASH] = ACTIONS(1970),
        [anon_sym_STAR_STAR] = ACTIONS(1970),
        [anon_sym_PIPE] = ACTIONS(1970),
        [anon_sym_AMP] = ACTIONS(1970),
        [anon_sym_CARET] = ACTIONS(1970),
        [anon_sym_LT_LT] = ACTIONS(1970),
        [anon_sym_GT_GT] = ACTIONS(1970),
        [anon_sym_and] = ACTIONS(1970),
        [anon_sym_or] = ACTIONS(1970),
        [anon_sym_LBRACK] = ACTIONS(1895),
        [anon_sym_RBRACK] = ACTIONS(315),
        [anon_sym_RBRACE] = ACTIONS(315),
        [sym_comment] = ACTIONS(81),
        [sym__newline] = ACTIONS(315),
    },
    [785] = {
        [anon_sym_in] = ACTIONS(1973),
        [sym_comment] = ACTIONS(81),
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
        [anon_sym_not] = ACTIONS(1975),
        [anon_sym_LBRACK] = ACTIONS(141),
        [anon_sym_LBRACE] = ACTIONS(143),
        [sym_number] = ACTIONS(145),
        [sym_identifier] = ACTIONS(147),
        [sym_comment] = ACTIONS(81),
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
        [anon_sym_not] = ACTIONS(1975),
        [anon_sym_LBRACK] = ACTIONS(141),
        [anon_sym_LBRACE] = ACTIONS(143),
        [sym_number] = ACTIONS(145),
        [sym_identifier] = ACTIONS(147),
        [sym_comment] = ACTIONS(81),
    },
    [788] = {
        [anon_sym_LPAREN] = ACTIONS(259),
        [anon_sym_STAR] = ACTIONS(1977),
        [anon_sym_PLUS] = ACTIONS(1979),
        [anon_sym_DASH] = ACTIONS(1979),
        [anon_sym_SLASH] = ACTIONS(1979),
        [anon_sym_STAR_STAR] = ACTIONS(1979),
        [anon_sym_PIPE] = ACTIONS(1979),
        [anon_sym_AMP] = ACTIONS(1979),
        [anon_sym_CARET] = ACTIONS(1979),
        [anon_sym_LT_LT] = ACTIONS(1979),
        [anon_sym_GT_GT] = ACTIONS(1979),
        [anon_sym_and] = ACTIONS(1979),
        [anon_sym_or] = ACTIONS(1979),
        [anon_sym_LBRACK] = ACTIONS(275),
        [anon_sym_RBRACK] = ACTIONS(739),
        [anon_sym_RBRACE] = ACTIONS(723),
        [sym_comment] = ACTIONS(81),
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
        [anon_sym_not] = ACTIONS(1975),
        [anon_sym_LBRACK] = ACTIONS(141),
        [anon_sym_LBRACE] = ACTIONS(143),
        [sym_number] = ACTIONS(145),
        [sym_identifier] = ACTIONS(147),
        [sym_comment] = ACTIONS(81),
    },
    [790] = {
        [anon_sym_LPAREN] = ACTIONS(1981),
        [anon_sym_STAR] = ACTIONS(1984),
        [anon_sym_PLUS] = ACTIONS(1987),
        [anon_sym_DASH] = ACTIONS(1987),
        [anon_sym_SLASH] = ACTIONS(1987),
        [anon_sym_STAR_STAR] = ACTIONS(1987),
        [anon_sym_PIPE] = ACTIONS(1987),
        [anon_sym_AMP] = ACTIONS(1987),
        [anon_sym_CARET] = ACTIONS(1987),
        [anon_sym_LT_LT] = ACTIONS(1987),
        [anon_sym_GT_GT] = ACTIONS(1987),
        [anon_sym_and] = ACTIONS(1987),
        [anon_sym_or] = ACTIONS(1987),
        [anon_sym_LBRACK] = ACTIONS(1990),
        [anon_sym_RBRACK] = ACTIONS(315),
        [anon_sym_RBRACE] = ACTIONS(315),
        [sym_comment] = ACTIONS(81),
    },
    [791] = {
        [anon_sym_LPAREN] = ACTIONS(1993),
        [anon_sym_STAR] = ACTIONS(1996),
        [anon_sym_PLUS] = ACTIONS(1999),
        [anon_sym_DASH] = ACTIONS(1999),
        [anon_sym_SLASH] = ACTIONS(1999),
        [anon_sym_STAR_STAR] = ACTIONS(1999),
        [anon_sym_PIPE] = ACTIONS(1999),
        [anon_sym_AMP] = ACTIONS(1999),
        [anon_sym_CARET] = ACTIONS(1999),
        [anon_sym_LT_LT] = ACTIONS(1999),
        [anon_sym_GT_GT] = ACTIONS(1999),
        [anon_sym_and] = ACTIONS(1999),
        [anon_sym_or] = ACTIONS(1999),
        [anon_sym_LBRACK] = ACTIONS(2002),
        [anon_sym_RBRACK] = ACTIONS(643),
        [anon_sym_RBRACE] = ACTIONS(643),
        [sym_comment] = ACTIONS(81),
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
        [anon_sym_not] = ACTIONS(1386),
        [anon_sym_LBRACK] = ACTIONS(121),
        [anon_sym_LBRACE] = ACTIONS(123),
        [sym_number] = ACTIONS(125),
        [sym_identifier] = ACTIONS(127),
        [sym_comment] = ACTIONS(81),
    },
    [793] = {
        [sym_elif_clause] = STATE(797),
        [sym_else_clause] = STATE(798),
        [aux_sym_if_statement_repeat1] = STATE(731),
        [ts_builtin_sym_end] = ACTIONS(2005),
        [anon_sym_SEMI] = ACTIONS(2005),
        [anon_sym_import] = ACTIONS(2011),
        [anon_sym_from] = ACTIONS(2011),
        [anon_sym_print] = ACTIONS(2011),
        [anon_sym_return] = ACTIONS(2011),
        [anon_sym_del] = ACTIONS(2011),
        [sym_pass_statement] = ACTIONS(2011),
        [sym_break_statement] = ACTIONS(2011),
        [sym_continue_statement] = ACTIONS(2011),
        [anon_sym_if] = ACTIONS(2011),
        [anon_sym_elif] = ACTIONS(1665),
        [anon_sym_else] = ACTIONS(1668),
        [anon_sym_for] = ACTIONS(2011),
        [anon_sym_while] = ACTIONS(2011),
        [anon_sym_try] = ACTIONS(2011),
        [anon_sym_except] = ACTIONS(2017),
        [anon_sym_finally] = ACTIONS(2017),
        [anon_sym_with] = ACTIONS(2011),
        [anon_sym_def] = ACTIONS(2011),
        [anon_sym_class] = ACTIONS(2011),
        [anon_sym_AT] = ACTIONS(2005),
        [anon_sym_not] = ACTIONS(2011),
        [anon_sym_LBRACK] = ACTIONS(2005),
        [anon_sym_LBRACE] = ACTIONS(2005),
        [sym_number] = ACTIONS(2011),
        [sym_identifier] = ACTIONS(2020),
        [sym_comment] = ACTIONS(81),
        [sym__newline] = ACTIONS(2005),
        [sym__dedent] = ACTIONS(2005),
    },
    [794] = {
        [anon_sym_LPAREN] = ACTIONS(195),
        [anon_sym_COMMA] = ACTIONS(467),
        [anon_sym_STAR] = ACTIONS(2026),
        [anon_sym_for] = ACTIONS(467),
        [anon_sym_PLUS] = ACTIONS(2028),
        [anon_sym_DASH] = ACTIONS(2028),
        [anon_sym_SLASH] = ACTIONS(2028),
        [anon_sym_STAR_STAR] = ACTIONS(2028),
        [anon_sym_PIPE] = ACTIONS(2028),
        [anon_sym_AMP] = ACTIONS(2028),
        [anon_sym_CARET] = ACTIONS(2028),
        [anon_sym_LT_LT] = ACTIONS(2028),
        [anon_sym_GT_GT] = ACTIONS(2028),
        [anon_sym_and] = ACTIONS(2028),
        [anon_sym_or] = ACTIONS(2028),
        [anon_sym_LBRACK] = ACTIONS(211),
        [anon_sym_RBRACE] = ACTIONS(467),
        [sym_comment] = ACTIONS(81),
        [sym__newline] = ACTIONS(213),
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
        [anon_sym_not] = ACTIONS(1386),
        [anon_sym_LBRACK] = ACTIONS(121),
        [anon_sym_LBRACE] = ACTIONS(123),
        [sym_number] = ACTIONS(125),
        [sym_identifier] = ACTIONS(127),
        [sym_comment] = ACTIONS(81),
    },
    [796] = {
        [anon_sym_LPAREN] = ACTIONS(1886),
        [anon_sym_COMMA] = ACTIONS(315),
        [anon_sym_STAR] = ACTIONS(2030),
        [anon_sym_for] = ACTIONS(315),
        [anon_sym_PLUS] = ACTIONS(2033),
        [anon_sym_DASH] = ACTIONS(2033),
        [anon_sym_SLASH] = ACTIONS(2033),
        [anon_sym_STAR_STAR] = ACTIONS(2033),
        [anon_sym_PIPE] = ACTIONS(2033),
        [anon_sym_AMP] = ACTIONS(2033),
        [anon_sym_CARET] = ACTIONS(2033),
        [anon_sym_LT_LT] = ACTIONS(2033),
        [anon_sym_GT_GT] = ACTIONS(2033),
        [anon_sym_and] = ACTIONS(2033),
        [anon_sym_or] = ACTIONS(2033),
        [anon_sym_LBRACK] = ACTIONS(1895),
        [anon_sym_RBRACE] = ACTIONS(315),
        [sym_comment] = ACTIONS(81),
        [sym__newline] = ACTIONS(315),
    },
    [797] = {
        [ts_builtin_sym_end] = ACTIONS(1107),
        [anon_sym_SEMI] = ACTIONS(1107),
        [anon_sym_import] = ACTIONS(1105),
        [anon_sym_from] = ACTIONS(1105),
        [anon_sym_print] = ACTIONS(1105),
        [anon_sym_return] = ACTIONS(1105),
        [anon_sym_del] = ACTIONS(1105),
        [sym_pass_statement] = ACTIONS(1105),
        [sym_break_statement] = ACTIONS(1105),
        [sym_continue_statement] = ACTIONS(1105),
        [anon_sym_if] = ACTIONS(1105),
        [anon_sym_elif] = ACTIONS(1105),
        [anon_sym_else] = ACTIONS(1105),
        [anon_sym_for] = ACTIONS(1105),
        [anon_sym_while] = ACTIONS(1105),
        [anon_sym_try] = ACTIONS(1105),
        [anon_sym_with] = ACTIONS(1105),
        [anon_sym_def] = ACTIONS(1105),
        [anon_sym_class] = ACTIONS(1105),
        [anon_sym_AT] = ACTIONS(1107),
        [anon_sym_not] = ACTIONS(1105),
        [anon_sym_LBRACK] = ACTIONS(1107),
        [anon_sym_LBRACE] = ACTIONS(1107),
        [sym_number] = ACTIONS(1105),
        [sym_identifier] = ACTIONS(1109),
        [sym_comment] = ACTIONS(81),
        [sym__newline] = ACTIONS(1107),
        [sym__dedent] = ACTIONS(1107),
    },
    [798] = {
        [ts_builtin_sym_end] = ACTIONS(2036),
        [anon_sym_SEMI] = ACTIONS(2036),
        [anon_sym_import] = ACTIONS(2039),
        [anon_sym_from] = ACTIONS(2039),
        [anon_sym_print] = ACTIONS(2039),
        [anon_sym_return] = ACTIONS(2039),
        [anon_sym_del] = ACTIONS(2039),
        [sym_pass_statement] = ACTIONS(2039),
        [sym_break_statement] = ACTIONS(2039),
        [sym_continue_statement] = ACTIONS(2039),
        [anon_sym_if] = ACTIONS(2039),
        [anon_sym_for] = ACTIONS(2039),
        [anon_sym_while] = ACTIONS(2039),
        [anon_sym_try] = ACTIONS(2039),
        [anon_sym_with] = ACTIONS(2039),
        [anon_sym_def] = ACTIONS(2039),
        [anon_sym_class] = ACTIONS(2039),
        [anon_sym_AT] = ACTIONS(2036),
        [anon_sym_not] = ACTIONS(2039),
        [anon_sym_LBRACK] = ACTIONS(2036),
        [anon_sym_LBRACE] = ACTIONS(2036),
        [sym_number] = ACTIONS(2039),
        [sym_identifier] = ACTIONS(2042),
        [sym_comment] = ACTIONS(81),
        [sym__newline] = ACTIONS(2036),
        [sym__dedent] = ACTIONS(2036),
    },
    [799] = {
        [anon_sym_LPAREN] = ACTIONS(1898),
        [anon_sym_COMMA] = ACTIONS(643),
        [anon_sym_STAR] = ACTIONS(2045),
        [anon_sym_for] = ACTIONS(643),
        [anon_sym_PLUS] = ACTIONS(2048),
        [anon_sym_DASH] = ACTIONS(2048),
        [anon_sym_SLASH] = ACTIONS(2048),
        [anon_sym_STAR_STAR] = ACTIONS(2048),
        [anon_sym_PIPE] = ACTIONS(2048),
        [anon_sym_AMP] = ACTIONS(2048),
        [anon_sym_CARET] = ACTIONS(2048),
        [anon_sym_LT_LT] = ACTIONS(2048),
        [anon_sym_GT_GT] = ACTIONS(2048),
        [anon_sym_and] = ACTIONS(2048),
        [anon_sym_or] = ACTIONS(2048),
        [anon_sym_LBRACK] = ACTIONS(1907),
        [anon_sym_RBRACE] = ACTIONS(643),
        [sym_comment] = ACTIONS(81),
        [sym__newline] = ACTIONS(643),
    },
    [800] = {
        [anon_sym_LPAREN] = ACTIONS(259),
        [anon_sym_COMMA] = ACTIONS(945),
        [anon_sym_STAR] = ACTIONS(947),
        [anon_sym_COLON] = ACTIONS(2051),
        [anon_sym_PLUS] = ACTIONS(949),
        [anon_sym_DASH] = ACTIONS(949),
        [anon_sym_SLASH] = ACTIONS(951),
        [anon_sym_STAR_STAR] = ACTIONS(953),
        [anon_sym_PIPE] = ACTIONS(955),
        [anon_sym_AMP] = ACTIONS(957),
        [anon_sym_CARET] = ACTIONS(959),
        [anon_sym_LT_LT] = ACTIONS(949),
        [anon_sym_GT_GT] = ACTIONS(949),
        [anon_sym_and] = ACTIONS(957),
        [anon_sym_or] = ACTIONS(955),
        [anon_sym_LBRACK] = ACTIONS(275),
        [sym_comment] = ACTIONS(81),
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
        [anon_sym_import] = ACTIONS(91),
        [anon_sym_from] = ACTIONS(93),
        [anon_sym_print] = ACTIONS(95),
        [anon_sym_return] = ACTIONS(97),
        [anon_sym_del] = ACTIONS(99),
        [sym_pass_statement] = ACTIONS(101),
        [sym_break_statement] = ACTIONS(101),
        [sym_continue_statement] = ACTIONS(101),
        [anon_sym_not] = ACTIONS(119),
        [anon_sym_LBRACK] = ACTIONS(121),
        [anon_sym_LBRACE] = ACTIONS(123),
        [sym_number] = ACTIONS(125),
        [sym_identifier] = ACTIONS(127),
        [sym_comment] = ACTIONS(81),
        [sym__indent] = ACTIONS(1388),
    },
    [802] = {
        [ts_builtin_sym_end] = ACTIONS(1055),
        [anon_sym_SEMI] = ACTIONS(1055),
        [anon_sym_import] = ACTIONS(1053),
        [anon_sym_from] = ACTIONS(1053),
        [anon_sym_print] = ACTIONS(1053),
        [anon_sym_return] = ACTIONS(1053),
        [anon_sym_del] = ACTIONS(1053),
        [sym_pass_statement] = ACTIONS(1053),
        [sym_break_statement] = ACTIONS(1053),
        [sym_continue_statement] = ACTIONS(1053),
        [anon_sym_if] = ACTIONS(1053),
        [anon_sym_else] = ACTIONS(1053),
        [anon_sym_for] = ACTIONS(1053),
        [anon_sym_while] = ACTIONS(1053),
        [anon_sym_try] = ACTIONS(1053),
        [anon_sym_except] = ACTIONS(1053),
        [anon_sym_finally] = ACTIONS(1053),
        [anon_sym_with] = ACTIONS(1053),
        [anon_sym_def] = ACTIONS(1053),
        [anon_sym_class] = ACTIONS(1053),
        [anon_sym_AT] = ACTIONS(1055),
        [anon_sym_not] = ACTIONS(1053),
        [anon_sym_LBRACK] = ACTIONS(1055),
        [anon_sym_LBRACE] = ACTIONS(1055),
        [sym_number] = ACTIONS(1053),
        [sym_identifier] = ACTIONS(1057),
        [sym_comment] = ACTIONS(81),
        [sym__newline] = ACTIONS(1055),
        [sym__dedent] = ACTIONS(1055),
    },
    [803] = {
        [anon_sym_LPAREN] = ACTIONS(2054),
        [anon_sym_RPAREN] = ACTIONS(2054),
        [anon_sym_COMMA] = ACTIONS(2054),
        [anon_sym_as] = ACTIONS(2054),
        [anon_sym_STAR] = ACTIONS(2057),
        [anon_sym_COLON] = ACTIONS(2054),
        [anon_sym_for] = ACTIONS(2054),
        [anon_sym_in] = ACTIONS(2054),
        [anon_sym_PLUS] = ACTIONS(2054),
        [anon_sym_DASH] = ACTIONS(2054),
        [anon_sym_SLASH] = ACTIONS(2054),
        [anon_sym_STAR_STAR] = ACTIONS(2054),
        [anon_sym_PIPE] = ACTIONS(2054),
        [anon_sym_AMP] = ACTIONS(2054),
        [anon_sym_CARET] = ACTIONS(2054),
        [anon_sym_LT_LT] = ACTIONS(2054),
        [anon_sym_GT_GT] = ACTIONS(2054),
        [anon_sym_and] = ACTIONS(2054),
        [anon_sym_or] = ACTIONS(2054),
        [anon_sym_LBRACK] = ACTIONS(2054),
        [anon_sym_RBRACK] = ACTIONS(2054),
        [anon_sym_RBRACE] = ACTIONS(2054),
        [sym_comment] = ACTIONS(81),
        [sym__newline] = ACTIONS(2054),
    },
    [804] = {
        [anon_sym_LPAREN] = ACTIONS(195),
        [anon_sym_RPAREN] = ACTIONS(509),
        [anon_sym_COMMA] = ACTIONS(2060),
        [anon_sym_STAR] = ACTIONS(1882),
        [anon_sym_COLON] = ACTIONS(2063),
        [anon_sym_in] = ACTIONS(509),
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
        [anon_sym_LBRACK] = ACTIONS(211),
        [anon_sym_RBRACK] = ACTIONS(2060),
        [anon_sym_RBRACE] = ACTIONS(509),
        [sym_comment] = ACTIONS(81),
        [sym__newline] = ACTIONS(509),
    },
    [805] = {
        [sym__import_list] = STATE(707),
        [sym_aliased_import] = STATE(637),
        [sym_wildcard_import] = STATE(707),
        [sym_dotted_name] = STATE(638),
        [anon_sym_LPAREN] = ACTIONS(1285),
        [anon_sym_STAR] = ACTIONS(1223),
        [sym_identifier] = ACTIONS(129),
        [sym_comment] = ACTIONS(81),
    },
    [806] = {
        [sym__import_list] = STATE(807),
        [sym_aliased_import] = STATE(649),
        [sym_dotted_name] = STATE(650),
        [sym_identifier] = ACTIONS(133),
        [sym_comment] = ACTIONS(81),
    },
    [807] = {
        [anon_sym_RPAREN] = ACTIONS(1540),
        [sym_comment] = ACTIONS(81),
    },
    [808] = {
        [sym_comment] = ACTIONS(81),
        [sym__newline] = ACTIONS(2066),
    },
    [809] = {
        [anon_sym_COLON] = ACTIONS(2069),
        [sym_comment] = ACTIONS(81),
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
        [anon_sym_import] = ACTIONS(91),
        [anon_sym_from] = ACTIONS(93),
        [anon_sym_print] = ACTIONS(95),
        [anon_sym_return] = ACTIONS(97),
        [anon_sym_del] = ACTIONS(99),
        [sym_pass_statement] = ACTIONS(101),
        [sym_break_statement] = ACTIONS(101),
        [sym_continue_statement] = ACTIONS(101),
        [anon_sym_not] = ACTIONS(119),
        [anon_sym_LBRACK] = ACTIONS(121),
        [anon_sym_LBRACE] = ACTIONS(123),
        [sym_number] = ACTIONS(125),
        [sym_identifier] = ACTIONS(127),
        [sym_comment] = ACTIONS(81),
        [sym__indent] = ACTIONS(1388),
    },
    [811] = {
        [ts_builtin_sym_end] = ACTIONS(849),
        [anon_sym_SEMI] = ACTIONS(849),
        [anon_sym_import] = ACTIONS(847),
        [anon_sym_from] = ACTIONS(847),
        [anon_sym_print] = ACTIONS(847),
        [anon_sym_return] = ACTIONS(847),
        [anon_sym_del] = ACTIONS(847),
        [sym_pass_statement] = ACTIONS(847),
        [sym_break_statement] = ACTIONS(847),
        [sym_continue_statement] = ACTIONS(847),
        [anon_sym_if] = ACTIONS(847),
        [anon_sym_for] = ACTIONS(847),
        [anon_sym_while] = ACTIONS(847),
        [anon_sym_try] = ACTIONS(847),
        [anon_sym_with] = ACTIONS(847),
        [anon_sym_def] = ACTIONS(847),
        [anon_sym_class] = ACTIONS(847),
        [anon_sym_AT] = ACTIONS(849),
        [anon_sym_not] = ACTIONS(847),
        [anon_sym_LBRACK] = ACTIONS(849),
        [anon_sym_LBRACE] = ACTIONS(849),
        [sym_number] = ACTIONS(847),
        [sym_identifier] = ACTIONS(851),
        [sym_comment] = ACTIONS(81),
        [sym__newline] = ACTIONS(849),
        [sym__dedent] = ACTIONS(849),
    },
    [812] = {
        [ts_builtin_sym_end] = ACTIONS(2071),
        [anon_sym_SEMI] = ACTIONS(2071),
        [anon_sym_import] = ACTIONS(2075),
        [anon_sym_from] = ACTIONS(2075),
        [anon_sym_print] = ACTIONS(2075),
        [anon_sym_return] = ACTIONS(2075),
        [anon_sym_del] = ACTIONS(2075),
        [sym_pass_statement] = ACTIONS(2075),
        [sym_break_statement] = ACTIONS(2075),
        [sym_continue_statement] = ACTIONS(2075),
        [anon_sym_if] = ACTIONS(2075),
        [anon_sym_for] = ACTIONS(2075),
        [anon_sym_while] = ACTIONS(2075),
        [anon_sym_try] = ACTIONS(2075),
        [anon_sym_with] = ACTIONS(2075),
        [anon_sym_def] = ACTIONS(2075),
        [anon_sym_class] = ACTIONS(2075),
        [anon_sym_AT] = ACTIONS(2071),
        [anon_sym_not] = ACTIONS(2075),
        [anon_sym_LBRACK] = ACTIONS(2071),
        [anon_sym_LBRACE] = ACTIONS(2071),
        [sym_number] = ACTIONS(2075),
        [sym_identifier] = ACTIONS(2079),
        [sym_comment] = ACTIONS(81),
        [sym__newline] = ACTIONS(2071),
        [sym__dedent] = ACTIONS(2071),
    },
    [813] = {
        [ts_builtin_sym_end] = ACTIONS(993),
        [anon_sym_SEMI] = ACTIONS(993),
        [anon_sym_import] = ACTIONS(991),
        [anon_sym_from] = ACTIONS(991),
        [anon_sym_print] = ACTIONS(991),
        [anon_sym_return] = ACTIONS(991),
        [anon_sym_del] = ACTIONS(991),
        [sym_pass_statement] = ACTIONS(991),
        [sym_break_statement] = ACTIONS(991),
        [sym_continue_statement] = ACTIONS(991),
        [anon_sym_if] = ACTIONS(991),
        [anon_sym_else] = ACTIONS(991),
        [anon_sym_for] = ACTIONS(991),
        [anon_sym_while] = ACTIONS(991),
        [anon_sym_try] = ACTIONS(991),
        [anon_sym_except] = ACTIONS(991),
        [anon_sym_finally] = ACTIONS(991),
        [anon_sym_with] = ACTIONS(991),
        [anon_sym_def] = ACTIONS(991),
        [anon_sym_class] = ACTIONS(991),
        [anon_sym_AT] = ACTIONS(993),
        [anon_sym_not] = ACTIONS(991),
        [anon_sym_LBRACK] = ACTIONS(993),
        [anon_sym_LBRACE] = ACTIONS(993),
        [sym_number] = ACTIONS(991),
        [sym_identifier] = ACTIONS(995),
        [sym_comment] = ACTIONS(81),
        [sym__newline] = ACTIONS(993),
        [sym__dedent] = ACTIONS(993),
    },
    [814] = {
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
        [anon_sym_for] = ACTIONS(997),
        [anon_sym_while] = ACTIONS(997),
        [anon_sym_try] = ACTIONS(997),
        [anon_sym_with] = ACTIONS(997),
        [anon_sym_def] = ACTIONS(997),
        [anon_sym_class] = ACTIONS(997),
        [anon_sym_AT] = ACTIONS(999),
        [anon_sym_not] = ACTIONS(997),
        [anon_sym_LBRACK] = ACTIONS(999),
        [anon_sym_LBRACE] = ACTIONS(999),
        [sym_number] = ACTIONS(997),
        [sym_identifier] = ACTIONS(1001),
        [sym_comment] = ACTIONS(81),
        [sym__newline] = ACTIONS(999),
        [sym__dedent] = ACTIONS(999),
    },
    [815] = {
        [anon_sym_COLON] = ACTIONS(2083),
        [sym_comment] = ACTIONS(81),
    },
    [816] = {
        [anon_sym_COLON] = ACTIONS(2088),
        [sym_comment] = ACTIONS(81),
    },
    [817] = {
        [sym_dictionary_splat_parameter] = STATE(818),
        [anon_sym_STAR] = ACTIONS(893),
        [sym_comment] = ACTIONS(81),
    },
    [818] = {
        [anon_sym_RPAREN] = ACTIONS(2091),
        [sym_comment] = ACTIONS(81),
    },
    [819] = {
        [anon_sym_COLON] = ACTIONS(2093),
        [sym_comment] = ACTIONS(81),
    },
    [820] = {
        [anon_sym_RPAREN] = ACTIONS(2096),
        [anon_sym_STAR] = ACTIONS(2098),
        [sym_identifier] = ACTIONS(2101),
        [sym_comment] = ACTIONS(81),
    },
    [821] = {
        [anon_sym_COLON] = ACTIONS(2104),
        [sym_comment] = ACTIONS(81),
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
        [anon_sym_import] = ACTIONS(91),
        [anon_sym_from] = ACTIONS(93),
        [anon_sym_print] = ACTIONS(95),
        [anon_sym_return] = ACTIONS(97),
        [anon_sym_del] = ACTIONS(99),
        [sym_pass_statement] = ACTIONS(101),
        [sym_break_statement] = ACTIONS(101),
        [sym_continue_statement] = ACTIONS(101),
        [anon_sym_not] = ACTIONS(119),
        [anon_sym_LBRACK] = ACTIONS(121),
        [anon_sym_LBRACE] = ACTIONS(123),
        [sym_number] = ACTIONS(125),
        [sym_identifier] = ACTIONS(127),
        [sym_comment] = ACTIONS(81),
        [sym__indent] = ACTIONS(1388),
    },
    [823] = {
        [ts_builtin_sym_end] = ACTIONS(865),
        [anon_sym_SEMI] = ACTIONS(865),
        [anon_sym_import] = ACTIONS(863),
        [anon_sym_from] = ACTIONS(863),
        [anon_sym_print] = ACTIONS(863),
        [anon_sym_return] = ACTIONS(863),
        [anon_sym_del] = ACTIONS(863),
        [sym_pass_statement] = ACTIONS(863),
        [sym_break_statement] = ACTIONS(863),
        [sym_continue_statement] = ACTIONS(863),
        [anon_sym_if] = ACTIONS(863),
        [anon_sym_for] = ACTIONS(863),
        [anon_sym_while] = ACTIONS(863),
        [anon_sym_try] = ACTIONS(863),
        [anon_sym_with] = ACTIONS(863),
        [anon_sym_def] = ACTIONS(863),
        [anon_sym_class] = ACTIONS(863),
        [anon_sym_AT] = ACTIONS(865),
        [anon_sym_not] = ACTIONS(863),
        [anon_sym_LBRACK] = ACTIONS(865),
        [anon_sym_LBRACE] = ACTIONS(865),
        [sym_number] = ACTIONS(863),
        [sym_identifier] = ACTIONS(867),
        [sym_comment] = ACTIONS(81),
        [sym__newline] = ACTIONS(865),
        [sym__dedent] = ACTIONS(865),
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
        [anon_sym_import] = ACTIONS(91),
        [anon_sym_from] = ACTIONS(93),
        [anon_sym_print] = ACTIONS(95),
        [anon_sym_return] = ACTIONS(97),
        [anon_sym_del] = ACTIONS(99),
        [sym_pass_statement] = ACTIONS(101),
        [sym_break_statement] = ACTIONS(101),
        [sym_continue_statement] = ACTIONS(101),
        [anon_sym_not] = ACTIONS(119),
        [anon_sym_LBRACK] = ACTIONS(121),
        [anon_sym_LBRACE] = ACTIONS(123),
        [sym_number] = ACTIONS(125),
        [sym_identifier] = ACTIONS(127),
        [sym_comment] = ACTIONS(81),
        [sym__indent] = ACTIONS(1388),
    },
    [825] = {
        [ts_builtin_sym_end] = ACTIONS(975),
        [anon_sym_SEMI] = ACTIONS(975),
        [anon_sym_import] = ACTIONS(973),
        [anon_sym_from] = ACTIONS(973),
        [anon_sym_print] = ACTIONS(973),
        [anon_sym_return] = ACTIONS(973),
        [anon_sym_del] = ACTIONS(973),
        [sym_pass_statement] = ACTIONS(973),
        [sym_break_statement] = ACTIONS(973),
        [sym_continue_statement] = ACTIONS(973),
        [anon_sym_if] = ACTIONS(973),
        [anon_sym_for] = ACTIONS(973),
        [anon_sym_while] = ACTIONS(973),
        [anon_sym_try] = ACTIONS(973),
        [anon_sym_with] = ACTIONS(973),
        [anon_sym_def] = ACTIONS(973),
        [anon_sym_class] = ACTIONS(973),
        [anon_sym_AT] = ACTIONS(975),
        [anon_sym_not] = ACTIONS(973),
        [anon_sym_LBRACK] = ACTIONS(975),
        [anon_sym_LBRACE] = ACTIONS(975),
        [sym_number] = ACTIONS(973),
        [sym_identifier] = ACTIONS(977),
        [sym_comment] = ACTIONS(81),
        [sym__newline] = ACTIONS(975),
        [sym__dedent] = ACTIONS(975),
    },
    [826] = {
        [ts_builtin_sym_end] = ACTIONS(1499),
        [anon_sym_SEMI] = ACTIONS(1499),
        [anon_sym_import] = ACTIONS(1502),
        [anon_sym_from] = ACTIONS(1502),
        [anon_sym_print] = ACTIONS(1502),
        [anon_sym_return] = ACTIONS(1502),
        [anon_sym_del] = ACTIONS(1502),
        [sym_pass_statement] = ACTIONS(1502),
        [sym_break_statement] = ACTIONS(1502),
        [sym_continue_statement] = ACTIONS(1502),
        [anon_sym_if] = ACTIONS(1502),
        [anon_sym_elif] = ACTIONS(809),
        [anon_sym_else] = ACTIONS(809),
        [anon_sym_for] = ACTIONS(1502),
        [anon_sym_while] = ACTIONS(1502),
        [anon_sym_try] = ACTIONS(1502),
        [anon_sym_except] = ACTIONS(809),
        [anon_sym_finally] = ACTIONS(809),
        [anon_sym_with] = ACTIONS(1502),
        [anon_sym_def] = ACTIONS(1502),
        [anon_sym_class] = ACTIONS(1502),
        [anon_sym_AT] = ACTIONS(1499),
        [anon_sym_not] = ACTIONS(1502),
        [anon_sym_LBRACK] = ACTIONS(1499),
        [anon_sym_LBRACE] = ACTIONS(1499),
        [sym_number] = ACTIONS(1502),
        [sym_identifier] = ACTIONS(1515),
        [sym_comment] = ACTIONS(81),
        [sym__newline] = ACTIONS(1499),
        [sym__dedent] = ACTIONS(1499),
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
        [anon_sym_RPAREN] = ACTIONS(855),
        [anon_sym_STAR] = ACTIONS(857),
        [anon_sym_not] = ACTIONS(243),
        [anon_sym_LBRACK] = ACTIONS(141),
        [anon_sym_LBRACE] = ACTIONS(143),
        [sym_number] = ACTIONS(145),
        [sym_identifier] = ACTIONS(2107),
        [sym_comment] = ACTIONS(81),
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
        [anon_sym_import] = ACTIONS(91),
        [anon_sym_from] = ACTIONS(93),
        [anon_sym_print] = ACTIONS(95),
        [anon_sym_return] = ACTIONS(97),
        [anon_sym_del] = ACTIONS(99),
        [sym_pass_statement] = ACTIONS(101),
        [sym_break_statement] = ACTIONS(101),
        [sym_continue_statement] = ACTIONS(101),
        [anon_sym_not] = ACTIONS(119),
        [anon_sym_LBRACK] = ACTIONS(121),
        [anon_sym_LBRACE] = ACTIONS(123),
        [sym_number] = ACTIONS(125),
        [sym_identifier] = ACTIONS(127),
        [sym_comment] = ACTIONS(81),
        [sym__indent] = ACTIONS(1388),
    },
    [829] = {
        [ts_builtin_sym_end] = ACTIONS(801),
        [anon_sym_SEMI] = ACTIONS(801),
        [anon_sym_import] = ACTIONS(803),
        [anon_sym_from] = ACTIONS(803),
        [anon_sym_print] = ACTIONS(803),
        [anon_sym_return] = ACTIONS(803),
        [anon_sym_del] = ACTIONS(803),
        [sym_pass_statement] = ACTIONS(803),
        [sym_break_statement] = ACTIONS(803),
        [sym_continue_statement] = ACTIONS(803),
        [anon_sym_if] = ACTIONS(803),
        [anon_sym_for] = ACTIONS(803),
        [anon_sym_while] = ACTIONS(803),
        [anon_sym_try] = ACTIONS(803),
        [anon_sym_with] = ACTIONS(803),
        [anon_sym_def] = ACTIONS(803),
        [anon_sym_class] = ACTIONS(803),
        [anon_sym_AT] = ACTIONS(801),
        [anon_sym_not] = ACTIONS(803),
        [anon_sym_LBRACK] = ACTIONS(801),
        [anon_sym_LBRACE] = ACTIONS(801),
        [sym_number] = ACTIONS(803),
        [sym_identifier] = ACTIONS(805),
        [sym_comment] = ACTIONS(81),
        [sym__newline] = ACTIONS(801),
        [sym__dedent] = ACTIONS(801),
    },
    [830] = {
        [anon_sym_LPAREN] = ACTIONS(167),
        [anon_sym_RPAREN] = ACTIONS(2109),
        [anon_sym_COMMA] = ACTIONS(2112),
        [anon_sym_STAR] = ACTIONS(169),
        [anon_sym_EQ] = ACTIONS(879),
        [anon_sym_PLUS] = ACTIONS(167),
        [anon_sym_DASH] = ACTIONS(167),
        [anon_sym_SLASH] = ACTIONS(167),
        [anon_sym_STAR_STAR] = ACTIONS(167),
        [anon_sym_PIPE] = ACTIONS(167),
        [anon_sym_AMP] = ACTIONS(167),
        [anon_sym_CARET] = ACTIONS(167),
        [anon_sym_LT_LT] = ACTIONS(167),
        [anon_sym_GT_GT] = ACTIONS(167),
        [anon_sym_and] = ACTIONS(167),
        [anon_sym_or] = ACTIONS(167),
        [anon_sym_LBRACK] = ACTIONS(167),
        [sym_comment] = ACTIONS(81),
    },
    [831] = {
        [anon_sym_RPAREN] = ACTIONS(1696),
        [sym_comment] = ACTIONS(81),
    },
    [832] = {
        [aux_sym_print_statement_repeat1] = STATE(353),
        [aux_sym_subscript_repeat1] = STATE(57),
        [anon_sym_LPAREN] = ACTIONS(259),
        [anon_sym_COMMA] = ACTIONS(2115),
        [anon_sym_STAR] = ACTIONS(583),
        [anon_sym_for] = ACTIONS(727),
        [anon_sym_PLUS] = ACTIONS(587),
        [anon_sym_DASH] = ACTIONS(587),
        [anon_sym_SLASH] = ACTIONS(589),
        [anon_sym_STAR_STAR] = ACTIONS(591),
        [anon_sym_PIPE] = ACTIONS(593),
        [anon_sym_AMP] = ACTIONS(595),
        [anon_sym_CARET] = ACTIONS(597),
        [anon_sym_LT_LT] = ACTIONS(587),
        [anon_sym_GT_GT] = ACTIONS(587),
        [anon_sym_and] = ACTIONS(595),
        [anon_sym_or] = ACTIONS(593),
        [anon_sym_LBRACK] = ACTIONS(275),
        [anon_sym_RBRACK] = ACTIONS(2117),
        [sym_comment] = ACTIONS(81),
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
        [anon_sym_not] = ACTIONS(247),
        [anon_sym_LBRACK] = ACTIONS(141),
        [anon_sym_DOT_DOT_DOT] = ACTIONS(277),
        [anon_sym_RBRACK] = ACTIONS(1945),
        [anon_sym_LBRACE] = ACTIONS(143),
        [sym_number] = ACTIONS(145),
        [sym_identifier] = ACTIONS(147),
        [sym_comment] = ACTIONS(81),
    },
    [834] = {
        [anon_sym_LPAREN] = ACTIONS(2119),
        [anon_sym_RPAREN] = ACTIONS(2119),
        [anon_sym_COMMA] = ACTIONS(2119),
        [anon_sym_as] = ACTIONS(2119),
        [anon_sym_STAR] = ACTIONS(2122),
        [anon_sym_COLON] = ACTIONS(2119),
        [anon_sym_for] = ACTIONS(2119),
        [anon_sym_in] = ACTIONS(2119),
        [anon_sym_PLUS] = ACTIONS(2119),
        [anon_sym_DASH] = ACTIONS(2119),
        [anon_sym_SLASH] = ACTIONS(2119),
        [anon_sym_STAR_STAR] = ACTIONS(2119),
        [anon_sym_PIPE] = ACTIONS(2119),
        [anon_sym_AMP] = ACTIONS(2119),
        [anon_sym_CARET] = ACTIONS(2119),
        [anon_sym_LT_LT] = ACTIONS(2119),
        [anon_sym_GT_GT] = ACTIONS(2119),
        [anon_sym_and] = ACTIONS(2119),
        [anon_sym_or] = ACTIONS(2119),
        [anon_sym_LBRACK] = ACTIONS(2119),
        [anon_sym_RBRACK] = ACTIONS(2119),
        [anon_sym_RBRACE] = ACTIONS(2119),
        [sym_comment] = ACTIONS(81),
        [sym__newline] = ACTIONS(2119),
    },
    [835] = {
        [anon_sym_LPAREN] = ACTIONS(259),
        [anon_sym_COMMA] = ACTIONS(2060),
        [anon_sym_STAR] = ACTIONS(261),
        [anon_sym_PLUS] = ACTIONS(263),
        [anon_sym_DASH] = ACTIONS(263),
        [anon_sym_SLASH] = ACTIONS(265),
        [anon_sym_STAR_STAR] = ACTIONS(267),
        [anon_sym_PIPE] = ACTIONS(269),
        [anon_sym_AMP] = ACTIONS(271),
        [anon_sym_CARET] = ACTIONS(273),
        [anon_sym_LT_LT] = ACTIONS(263),
        [anon_sym_GT_GT] = ACTIONS(263),
        [anon_sym_and] = ACTIONS(271),
        [anon_sym_or] = ACTIONS(269),
        [anon_sym_LBRACK] = ACTIONS(275),
        [anon_sym_RBRACK] = ACTIONS(2060),
        [sym_comment] = ACTIONS(81),
    },
    [836] = {
        [anon_sym_LPAREN] = ACTIONS(1898),
        [anon_sym_RPAREN] = ACTIONS(643),
        [anon_sym_COMMA] = ACTIONS(643),
        [anon_sym_as] = ACTIONS(643),
        [anon_sym_STAR] = ACTIONS(2125),
        [anon_sym_COLON] = ACTIONS(643),
        [anon_sym_for] = ACTIONS(643),
        [anon_sym_in] = ACTIONS(643),
        [anon_sym_PLUS] = ACTIONS(2128),
        [anon_sym_DASH] = ACTIONS(2128),
        [anon_sym_SLASH] = ACTIONS(2128),
        [anon_sym_STAR_STAR] = ACTIONS(2128),
        [anon_sym_PIPE] = ACTIONS(2128),
        [anon_sym_AMP] = ACTIONS(2128),
        [anon_sym_CARET] = ACTIONS(2128),
        [anon_sym_LT_LT] = ACTIONS(2128),
        [anon_sym_GT_GT] = ACTIONS(2128),
        [anon_sym_and] = ACTIONS(2128),
        [anon_sym_or] = ACTIONS(2128),
        [anon_sym_LBRACK] = ACTIONS(1907),
        [anon_sym_RBRACK] = ACTIONS(643),
        [anon_sym_RBRACE] = ACTIONS(643),
        [sym_comment] = ACTIONS(81),
        [sym__newline] = ACTIONS(643),
    },
    [837] = {
        [anon_sym_LPAREN] = ACTIONS(1886),
        [anon_sym_RPAREN] = ACTIONS(2131),
        [anon_sym_COMMA] = ACTIONS(315),
        [anon_sym_as] = ACTIONS(315),
        [anon_sym_STAR] = ACTIONS(1967),
        [anon_sym_COLON] = ACTIONS(315),
        [anon_sym_for] = ACTIONS(315),
        [anon_sym_in] = ACTIONS(315),
        [anon_sym_PLUS] = ACTIONS(1970),
        [anon_sym_DASH] = ACTIONS(1970),
        [anon_sym_SLASH] = ACTIONS(1970),
        [anon_sym_STAR_STAR] = ACTIONS(1970),
        [anon_sym_PIPE] = ACTIONS(1970),
        [anon_sym_AMP] = ACTIONS(1970),
        [anon_sym_CARET] = ACTIONS(1970),
        [anon_sym_LT_LT] = ACTIONS(1970),
        [anon_sym_GT_GT] = ACTIONS(1970),
        [anon_sym_and] = ACTIONS(1970),
        [anon_sym_or] = ACTIONS(1970),
        [anon_sym_LBRACK] = ACTIONS(1895),
        [anon_sym_RBRACK] = ACTIONS(315),
        [anon_sym_RBRACE] = ACTIONS(315),
        [sym_comment] = ACTIONS(81),
        [sym__newline] = ACTIONS(315),
    },
    [838] = {
        [anon_sym_LPAREN] = ACTIONS(2134),
        [anon_sym_COLON] = ACTIONS(2136),
        [sym_comment] = ACTIONS(81),
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
        [anon_sym_not] = ACTIONS(243),
        [anon_sym_LBRACK] = ACTIONS(141),
        [anon_sym_LBRACE] = ACTIONS(143),
        [sym_number] = ACTIONS(145),
        [sym_identifier] = ACTIONS(147),
        [sym_comment] = ACTIONS(81),
    },
    [840] = {
        [anon_sym_LPAREN] = ACTIONS(259),
        [anon_sym_RPAREN] = ACTIONS(2138),
        [anon_sym_COMMA] = ACTIONS(2138),
        [anon_sym_STAR] = ACTIONS(327),
        [anon_sym_PLUS] = ACTIONS(329),
        [anon_sym_DASH] = ACTIONS(329),
        [anon_sym_SLASH] = ACTIONS(331),
        [anon_sym_STAR_STAR] = ACTIONS(333),
        [anon_sym_PIPE] = ACTIONS(335),
        [anon_sym_AMP] = ACTIONS(337),
        [anon_sym_CARET] = ACTIONS(339),
        [anon_sym_LT_LT] = ACTIONS(329),
        [anon_sym_GT_GT] = ACTIONS(329),
        [anon_sym_and] = ACTIONS(337),
        [anon_sym_or] = ACTIONS(335),
        [anon_sym_LBRACK] = ACTIONS(275),
        [sym_comment] = ACTIONS(81),
    },
    [841] = {
        [sym_parameters] = STATE(716),
        [anon_sym_LPAREN] = ACTIONS(853),
        [sym_comment] = ACTIONS(81),
    },
    [842] = {
        [aux_sym_with_statement_repeat1] = STATE(733),
        [anon_sym_COMMA] = ACTIONS(921),
        [anon_sym_COLON] = ACTIONS(2141),
        [sym_comment] = ACTIONS(81),
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
        [anon_sym_import] = ACTIONS(91),
        [anon_sym_from] = ACTIONS(93),
        [anon_sym_print] = ACTIONS(95),
        [anon_sym_return] = ACTIONS(97),
        [anon_sym_del] = ACTIONS(99),
        [sym_pass_statement] = ACTIONS(101),
        [sym_break_statement] = ACTIONS(101),
        [sym_continue_statement] = ACTIONS(101),
        [anon_sym_not] = ACTIONS(119),
        [anon_sym_LBRACK] = ACTIONS(121),
        [anon_sym_LBRACE] = ACTIONS(123),
        [sym_number] = ACTIONS(125),
        [sym_identifier] = ACTIONS(127),
        [sym_comment] = ACTIONS(81),
        [sym__indent] = ACTIONS(1388),
    },
    [844] = {
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
        [anon_sym_with] = ACTIONS(1035),
        [anon_sym_def] = ACTIONS(1035),
        [anon_sym_class] = ACTIONS(1035),
        [anon_sym_AT] = ACTIONS(1037),
        [anon_sym_not] = ACTIONS(1035),
        [anon_sym_LBRACK] = ACTIONS(1037),
        [anon_sym_LBRACE] = ACTIONS(1037),
        [sym_number] = ACTIONS(1035),
        [sym_identifier] = ACTIONS(1039),
        [sym_comment] = ACTIONS(81),
        [sym__newline] = ACTIONS(1037),
        [sym__dedent] = ACTIONS(1037),
    },
    [845] = {
        [anon_sym_LPAREN] = ACTIONS(259),
        [anon_sym_COMMA] = ACTIONS(2143),
        [anon_sym_as] = ACTIONS(2143),
        [anon_sym_STAR] = ACTIONS(929),
        [anon_sym_COLON] = ACTIONS(2145),
        [anon_sym_PLUS] = ACTIONS(931),
        [anon_sym_DASH] = ACTIONS(931),
        [anon_sym_SLASH] = ACTIONS(933),
        [anon_sym_STAR_STAR] = ACTIONS(935),
        [anon_sym_PIPE] = ACTIONS(937),
        [anon_sym_AMP] = ACTIONS(939),
        [anon_sym_CARET] = ACTIONS(941),
        [anon_sym_LT_LT] = ACTIONS(931),
        [anon_sym_GT_GT] = ACTIONS(931),
        [anon_sym_and] = ACTIONS(939),
        [anon_sym_or] = ACTIONS(937),
        [anon_sym_LBRACK] = ACTIONS(275),
        [sym_comment] = ACTIONS(81),
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
        [anon_sym_not] = ACTIONS(139),
        [anon_sym_LBRACK] = ACTIONS(141),
        [anon_sym_LBRACE] = ACTIONS(143),
        [sym_number] = ACTIONS(145),
        [sym_identifier] = ACTIONS(147),
        [sym_comment] = ACTIONS(81),
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
        [anon_sym_import] = ACTIONS(91),
        [anon_sym_from] = ACTIONS(93),
        [anon_sym_print] = ACTIONS(95),
        [anon_sym_return] = ACTIONS(97),
        [anon_sym_del] = ACTIONS(99),
        [sym_pass_statement] = ACTIONS(101),
        [sym_break_statement] = ACTIONS(101),
        [sym_continue_statement] = ACTIONS(101),
        [anon_sym_not] = ACTIONS(119),
        [anon_sym_LBRACK] = ACTIONS(121),
        [anon_sym_LBRACE] = ACTIONS(123),
        [sym_number] = ACTIONS(125),
        [sym_identifier] = ACTIONS(127),
        [sym_comment] = ACTIONS(81),
        [sym__indent] = ACTIONS(1388),
    },
    [848] = {
        [ts_builtin_sym_end] = ACTIONS(1047),
        [anon_sym_SEMI] = ACTIONS(1047),
        [anon_sym_import] = ACTIONS(1045),
        [anon_sym_from] = ACTIONS(1045),
        [anon_sym_print] = ACTIONS(1045),
        [anon_sym_return] = ACTIONS(1045),
        [anon_sym_del] = ACTIONS(1045),
        [sym_pass_statement] = ACTIONS(1045),
        [sym_break_statement] = ACTIONS(1045),
        [sym_continue_statement] = ACTIONS(1045),
        [anon_sym_if] = ACTIONS(1045),
        [anon_sym_else] = ACTIONS(1045),
        [anon_sym_for] = ACTIONS(1045),
        [anon_sym_while] = ACTIONS(1045),
        [anon_sym_try] = ACTIONS(1045),
        [anon_sym_except] = ACTIONS(1045),
        [anon_sym_finally] = ACTIONS(1045),
        [anon_sym_with] = ACTIONS(1045),
        [anon_sym_def] = ACTIONS(1045),
        [anon_sym_class] = ACTIONS(1045),
        [anon_sym_AT] = ACTIONS(1047),
        [anon_sym_not] = ACTIONS(1045),
        [anon_sym_LBRACK] = ACTIONS(1047),
        [anon_sym_LBRACE] = ACTIONS(1047),
        [sym_number] = ACTIONS(1045),
        [sym_identifier] = ACTIONS(1049),
        [sym_comment] = ACTIONS(81),
        [sym__newline] = ACTIONS(1047),
        [sym__dedent] = ACTIONS(1047),
    },
    [849] = {
        [anon_sym_LPAREN] = ACTIONS(259),
        [anon_sym_STAR] = ACTIONS(447),
        [anon_sym_COLON] = ACTIONS(2147),
        [anon_sym_PLUS] = ACTIONS(451),
        [anon_sym_DASH] = ACTIONS(451),
        [anon_sym_SLASH] = ACTIONS(453),
        [anon_sym_STAR_STAR] = ACTIONS(455),
        [anon_sym_PIPE] = ACTIONS(457),
        [anon_sym_AMP] = ACTIONS(459),
        [anon_sym_CARET] = ACTIONS(461),
        [anon_sym_LT_LT] = ACTIONS(451),
        [anon_sym_GT_GT] = ACTIONS(451),
        [anon_sym_and] = ACTIONS(459),
        [anon_sym_or] = ACTIONS(457),
        [anon_sym_LBRACK] = ACTIONS(275),
        [sym_comment] = ACTIONS(81),
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
        [anon_sym_import] = ACTIONS(91),
        [anon_sym_from] = ACTIONS(93),
        [anon_sym_print] = ACTIONS(95),
        [anon_sym_return] = ACTIONS(97),
        [anon_sym_del] = ACTIONS(99),
        [sym_pass_statement] = ACTIONS(101),
        [sym_break_statement] = ACTIONS(101),
        [sym_continue_statement] = ACTIONS(101),
        [anon_sym_not] = ACTIONS(119),
        [anon_sym_LBRACK] = ACTIONS(121),
        [anon_sym_LBRACE] = ACTIONS(123),
        [sym_number] = ACTIONS(125),
        [sym_identifier] = ACTIONS(127),
        [sym_comment] = ACTIONS(81),
        [sym__indent] = ACTIONS(981),
    },
    [851] = {
        [sym_except_clause] = STATE(813),
        [sym_finally_clause] = STATE(814),
        [aux_sym_try_statement_repeat1] = STATE(732),
        [anon_sym_except] = ACTIONS(2149),
        [anon_sym_finally] = ACTIONS(2151),
        [sym_comment] = ACTIONS(81),
    },
    [852] = {
        [anon_sym_LPAREN] = ACTIONS(259),
        [anon_sym_STAR] = ACTIONS(447),
        [anon_sym_COLON] = ACTIONS(2153),
        [anon_sym_PLUS] = ACTIONS(451),
        [anon_sym_DASH] = ACTIONS(451),
        [anon_sym_SLASH] = ACTIONS(453),
        [anon_sym_STAR_STAR] = ACTIONS(455),
        [anon_sym_PIPE] = ACTIONS(457),
        [anon_sym_AMP] = ACTIONS(459),
        [anon_sym_CARET] = ACTIONS(461),
        [anon_sym_LT_LT] = ACTIONS(451),
        [anon_sym_GT_GT] = ACTIONS(451),
        [anon_sym_and] = ACTIONS(459),
        [anon_sym_or] = ACTIONS(457),
        [anon_sym_LBRACK] = ACTIONS(275),
        [sym_comment] = ACTIONS(81),
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
        [anon_sym_import] = ACTIONS(91),
        [anon_sym_from] = ACTIONS(93),
        [anon_sym_print] = ACTIONS(95),
        [anon_sym_return] = ACTIONS(97),
        [anon_sym_del] = ACTIONS(99),
        [sym_pass_statement] = ACTIONS(101),
        [sym_break_statement] = ACTIONS(101),
        [sym_continue_statement] = ACTIONS(101),
        [anon_sym_not] = ACTIONS(119),
        [anon_sym_LBRACK] = ACTIONS(121),
        [anon_sym_LBRACE] = ACTIONS(123),
        [sym_number] = ACTIONS(125),
        [sym_identifier] = ACTIONS(127),
        [sym_comment] = ACTIONS(81),
        [sym__indent] = ACTIONS(1388),
    },
    [854] = {
        [sym_else_clause] = STATE(855),
        [ts_builtin_sym_end] = ACTIONS(1065),
        [anon_sym_SEMI] = ACTIONS(1065),
        [anon_sym_import] = ACTIONS(1063),
        [anon_sym_from] = ACTIONS(1063),
        [anon_sym_print] = ACTIONS(1063),
        [anon_sym_return] = ACTIONS(1063),
        [anon_sym_del] = ACTIONS(1063),
        [sym_pass_statement] = ACTIONS(1063),
        [sym_break_statement] = ACTIONS(1063),
        [sym_continue_statement] = ACTIONS(1063),
        [anon_sym_if] = ACTIONS(1063),
        [anon_sym_else] = ACTIONS(1852),
        [anon_sym_for] = ACTIONS(1063),
        [anon_sym_while] = ACTIONS(1063),
        [anon_sym_try] = ACTIONS(1063),
        [anon_sym_with] = ACTIONS(1063),
        [anon_sym_def] = ACTIONS(1063),
        [anon_sym_class] = ACTIONS(1063),
        [anon_sym_AT] = ACTIONS(1065),
        [anon_sym_not] = ACTIONS(1063),
        [anon_sym_LBRACK] = ACTIONS(1065),
        [anon_sym_LBRACE] = ACTIONS(1065),
        [sym_number] = ACTIONS(1063),
        [sym_identifier] = ACTIONS(1067),
        [sym_comment] = ACTIONS(81),
        [sym__newline] = ACTIONS(1065),
        [sym__dedent] = ACTIONS(1065),
    },
    [855] = {
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
        [sym_number] = ACTIONS(1069),
        [sym_identifier] = ACTIONS(1073),
        [sym_comment] = ACTIONS(81),
        [sym__newline] = ACTIONS(1071),
        [sym__dedent] = ACTIONS(1071),
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
        [anon_sym_not] = ACTIONS(1392),
        [anon_sym_LBRACK] = ACTIONS(141),
        [anon_sym_LBRACE] = ACTIONS(143),
        [sym_number] = ACTIONS(145),
        [sym_identifier] = ACTIONS(147),
        [sym_comment] = ACTIONS(81),
    },
    [857] = {
        [aux_sym_print_statement_repeat1] = STATE(526),
        [anon_sym_LPAREN] = ACTIONS(259),
        [anon_sym_COMMA] = ACTIONS(1079),
        [anon_sym_STAR] = ACTIONS(2155),
        [anon_sym_COLON] = ACTIONS(489),
        [anon_sym_PLUS] = ACTIONS(2157),
        [anon_sym_DASH] = ACTIONS(2157),
        [anon_sym_SLASH] = ACTIONS(2157),
        [anon_sym_STAR_STAR] = ACTIONS(2157),
        [anon_sym_PIPE] = ACTIONS(2157),
        [anon_sym_AMP] = ACTIONS(2157),
        [anon_sym_CARET] = ACTIONS(2157),
        [anon_sym_LT_LT] = ACTIONS(2157),
        [anon_sym_GT_GT] = ACTIONS(2157),
        [anon_sym_and] = ACTIONS(2157),
        [anon_sym_or] = ACTIONS(2157),
        [anon_sym_LBRACK] = ACTIONS(275),
        [anon_sym_RBRACK] = ACTIONS(739),
        [anon_sym_RBRACE] = ACTIONS(2159),
        [sym_comment] = ACTIONS(81),
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
        [anon_sym_not] = ACTIONS(1392),
        [anon_sym_LBRACK] = ACTIONS(141),
        [anon_sym_LBRACE] = ACTIONS(143),
        [sym_number] = ACTIONS(145),
        [sym_identifier] = ACTIONS(147),
        [sym_comment] = ACTIONS(81),
    },
    [859] = {
        [anon_sym_LPAREN] = ACTIONS(2161),
        [anon_sym_RPAREN] = ACTIONS(2161),
        [anon_sym_COMMA] = ACTIONS(2161),
        [anon_sym_as] = ACTIONS(2161),
        [anon_sym_STAR] = ACTIONS(2164),
        [anon_sym_COLON] = ACTIONS(2161),
        [anon_sym_for] = ACTIONS(2161),
        [anon_sym_in] = ACTIONS(2161),
        [anon_sym_PLUS] = ACTIONS(2161),
        [anon_sym_DASH] = ACTIONS(2161),
        [anon_sym_SLASH] = ACTIONS(2161),
        [anon_sym_STAR_STAR] = ACTIONS(2161),
        [anon_sym_PIPE] = ACTIONS(2161),
        [anon_sym_AMP] = ACTIONS(2161),
        [anon_sym_CARET] = ACTIONS(2161),
        [anon_sym_LT_LT] = ACTIONS(2161),
        [anon_sym_GT_GT] = ACTIONS(2161),
        [anon_sym_and] = ACTIONS(2161),
        [anon_sym_or] = ACTIONS(2161),
        [anon_sym_LBRACK] = ACTIONS(2161),
        [anon_sym_RBRACK] = ACTIONS(2161),
        [anon_sym_RBRACE] = ACTIONS(2161),
        [sym_comment] = ACTIONS(81),
        [sym__newline] = ACTIONS(2161),
    },
    [860] = {
        [anon_sym_LPAREN] = ACTIONS(1981),
        [anon_sym_COMMA] = ACTIONS(315),
        [anon_sym_STAR] = ACTIONS(2167),
        [anon_sym_COLON] = ACTIONS(315),
        [anon_sym_PLUS] = ACTIONS(2170),
        [anon_sym_DASH] = ACTIONS(2170),
        [anon_sym_SLASH] = ACTIONS(2170),
        [anon_sym_STAR_STAR] = ACTIONS(2170),
        [anon_sym_PIPE] = ACTIONS(2170),
        [anon_sym_AMP] = ACTIONS(2170),
        [anon_sym_CARET] = ACTIONS(2170),
        [anon_sym_LT_LT] = ACTIONS(2170),
        [anon_sym_GT_GT] = ACTIONS(2170),
        [anon_sym_and] = ACTIONS(2170),
        [anon_sym_or] = ACTIONS(2170),
        [anon_sym_LBRACK] = ACTIONS(1990),
        [anon_sym_RBRACK] = ACTIONS(315),
        [anon_sym_RBRACE] = ACTIONS(315),
        [sym_comment] = ACTIONS(81),
    },
    [861] = {
        [anon_sym_LPAREN] = ACTIONS(1993),
        [anon_sym_COMMA] = ACTIONS(643),
        [anon_sym_STAR] = ACTIONS(2173),
        [anon_sym_COLON] = ACTIONS(643),
        [anon_sym_PLUS] = ACTIONS(2176),
        [anon_sym_DASH] = ACTIONS(2176),
        [anon_sym_SLASH] = ACTIONS(2176),
        [anon_sym_STAR_STAR] = ACTIONS(2176),
        [anon_sym_PIPE] = ACTIONS(2176),
        [anon_sym_AMP] = ACTIONS(2176),
        [anon_sym_CARET] = ACTIONS(2176),
        [anon_sym_LT_LT] = ACTIONS(2176),
        [anon_sym_GT_GT] = ACTIONS(2176),
        [anon_sym_and] = ACTIONS(2176),
        [anon_sym_or] = ACTIONS(2176),
        [anon_sym_LBRACK] = ACTIONS(2002),
        [anon_sym_RBRACK] = ACTIONS(643),
        [anon_sym_RBRACE] = ACTIONS(643),
        [sym_comment] = ACTIONS(81),
    },
    [862] = {
        [anon_sym_in] = ACTIONS(1700),
        [sym_comment] = ACTIONS(81),
    },
    [863] = {
        [anon_sym_LPAREN] = ACTIONS(259),
        [anon_sym_STAR] = ACTIONS(447),
        [anon_sym_COLON] = ACTIONS(2179),
        [anon_sym_PLUS] = ACTIONS(451),
        [anon_sym_DASH] = ACTIONS(451),
        [anon_sym_SLASH] = ACTIONS(453),
        [anon_sym_STAR_STAR] = ACTIONS(455),
        [anon_sym_PIPE] = ACTIONS(457),
        [anon_sym_AMP] = ACTIONS(459),
        [anon_sym_CARET] = ACTIONS(461),
        [anon_sym_LT_LT] = ACTIONS(451),
        [anon_sym_GT_GT] = ACTIONS(451),
        [anon_sym_and] = ACTIONS(459),
        [anon_sym_or] = ACTIONS(457),
        [anon_sym_LBRACK] = ACTIONS(275),
        [sym_comment] = ACTIONS(81),
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
        [anon_sym_import] = ACTIONS(91),
        [anon_sym_from] = ACTIONS(93),
        [anon_sym_print] = ACTIONS(95),
        [anon_sym_return] = ACTIONS(97),
        [anon_sym_del] = ACTIONS(99),
        [sym_pass_statement] = ACTIONS(101),
        [sym_break_statement] = ACTIONS(101),
        [sym_continue_statement] = ACTIONS(101),
        [anon_sym_not] = ACTIONS(119),
        [anon_sym_LBRACK] = ACTIONS(121),
        [anon_sym_LBRACE] = ACTIONS(123),
        [sym_number] = ACTIONS(125),
        [sym_identifier] = ACTIONS(127),
        [sym_comment] = ACTIONS(81),
        [sym__indent] = ACTIONS(1388),
    },
    [865] = {
        [ts_builtin_sym_end] = ACTIONS(1133),
        [anon_sym_SEMI] = ACTIONS(1133),
        [anon_sym_import] = ACTIONS(1131),
        [anon_sym_from] = ACTIONS(1131),
        [anon_sym_print] = ACTIONS(1131),
        [anon_sym_return] = ACTIONS(1131),
        [anon_sym_del] = ACTIONS(1131),
        [sym_pass_statement] = ACTIONS(1131),
        [sym_break_statement] = ACTIONS(1131),
        [sym_continue_statement] = ACTIONS(1131),
        [anon_sym_if] = ACTIONS(1131),
        [anon_sym_elif] = ACTIONS(1131),
        [anon_sym_else] = ACTIONS(1131),
        [anon_sym_for] = ACTIONS(1131),
        [anon_sym_while] = ACTIONS(1131),
        [anon_sym_try] = ACTIONS(1131),
        [anon_sym_with] = ACTIONS(1131),
        [anon_sym_def] = ACTIONS(1131),
        [anon_sym_class] = ACTIONS(1131),
        [anon_sym_AT] = ACTIONS(1133),
        [anon_sym_not] = ACTIONS(1131),
        [anon_sym_LBRACK] = ACTIONS(1133),
        [anon_sym_LBRACE] = ACTIONS(1133),
        [sym_number] = ACTIONS(1131),
        [sym_identifier] = ACTIONS(1135),
        [sym_comment] = ACTIONS(81),
        [sym__newline] = ACTIONS(1133),
        [sym__dedent] = ACTIONS(1133),
    },
    [866] = {
        [anon_sym_LPAREN] = ACTIONS(259),
        [anon_sym_STAR] = ACTIONS(447),
        [anon_sym_COLON] = ACTIONS(2181),
        [anon_sym_PLUS] = ACTIONS(451),
        [anon_sym_DASH] = ACTIONS(451),
        [anon_sym_SLASH] = ACTIONS(453),
        [anon_sym_STAR_STAR] = ACTIONS(455),
        [anon_sym_PIPE] = ACTIONS(457),
        [anon_sym_AMP] = ACTIONS(459),
        [anon_sym_CARET] = ACTIONS(461),
        [anon_sym_LT_LT] = ACTIONS(451),
        [anon_sym_GT_GT] = ACTIONS(451),
        [anon_sym_and] = ACTIONS(459),
        [anon_sym_or] = ACTIONS(457),
        [anon_sym_LBRACK] = ACTIONS(275),
        [sym_comment] = ACTIONS(81),
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
        [anon_sym_import] = ACTIONS(91),
        [anon_sym_from] = ACTIONS(93),
        [anon_sym_print] = ACTIONS(95),
        [anon_sym_return] = ACTIONS(97),
        [anon_sym_del] = ACTIONS(99),
        [sym_pass_statement] = ACTIONS(101),
        [sym_break_statement] = ACTIONS(101),
        [sym_continue_statement] = ACTIONS(101),
        [anon_sym_not] = ACTIONS(119),
        [anon_sym_LBRACK] = ACTIONS(121),
        [anon_sym_LBRACE] = ACTIONS(123),
        [sym_number] = ACTIONS(125),
        [sym_identifier] = ACTIONS(127),
        [sym_comment] = ACTIONS(81),
        [sym__indent] = ACTIONS(1388),
    },
    [868] = {
        [sym_elif_clause] = STATE(797),
        [sym_else_clause] = STATE(869),
        [aux_sym_if_statement_repeat1] = STATE(731),
        [ts_builtin_sym_end] = ACTIONS(1101),
        [anon_sym_SEMI] = ACTIONS(1101),
        [anon_sym_import] = ACTIONS(1097),
        [anon_sym_from] = ACTIONS(1097),
        [anon_sym_print] = ACTIONS(1097),
        [anon_sym_return] = ACTIONS(1097),
        [anon_sym_del] = ACTIONS(1097),
        [sym_pass_statement] = ACTIONS(1097),
        [sym_break_statement] = ACTIONS(1097),
        [sym_continue_statement] = ACTIONS(1097),
        [anon_sym_if] = ACTIONS(1097),
        [anon_sym_elif] = ACTIONS(1850),
        [anon_sym_else] = ACTIONS(1852),
        [anon_sym_for] = ACTIONS(1097),
        [anon_sym_while] = ACTIONS(1097),
        [anon_sym_try] = ACTIONS(1097),
        [anon_sym_with] = ACTIONS(1097),
        [anon_sym_def] = ACTIONS(1097),
        [anon_sym_class] = ACTIONS(1097),
        [anon_sym_AT] = ACTIONS(1101),
        [anon_sym_not] = ACTIONS(1097),
        [anon_sym_LBRACK] = ACTIONS(1101),
        [anon_sym_LBRACE] = ACTIONS(1101),
        [sym_number] = ACTIONS(1097),
        [sym_identifier] = ACTIONS(1103),
        [sym_comment] = ACTIONS(81),
        [sym__newline] = ACTIONS(1101),
        [sym__dedent] = ACTIONS(1101),
    },
    [869] = {
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
        [sym_number] = ACTIONS(1111),
        [sym_identifier] = ACTIONS(1115),
        [sym_comment] = ACTIONS(81),
        [sym__newline] = ACTIONS(1113),
        [sym__dedent] = ACTIONS(1113),
    },
    [870] = {
        [anon_sym_LPAREN] = ACTIONS(167),
        [anon_sym_RPAREN] = ACTIONS(2183),
        [anon_sym_COMMA] = ACTIONS(2187),
        [anon_sym_as] = ACTIONS(167),
        [anon_sym_STAR] = ACTIONS(169),
        [anon_sym_COLON] = ACTIONS(167),
        [anon_sym_for] = ACTIONS(167),
        [anon_sym_in] = ACTIONS(167),
        [anon_sym_PLUS] = ACTIONS(167),
        [anon_sym_DASH] = ACTIONS(167),
        [anon_sym_SLASH] = ACTIONS(167),
        [anon_sym_STAR_STAR] = ACTIONS(167),
        [anon_sym_PIPE] = ACTIONS(167),
        [anon_sym_AMP] = ACTIONS(167),
        [anon_sym_CARET] = ACTIONS(167),
        [anon_sym_LT_LT] = ACTIONS(167),
        [anon_sym_GT_GT] = ACTIONS(167),
        [anon_sym_and] = ACTIONS(167),
        [anon_sym_or] = ACTIONS(167),
        [anon_sym_LBRACK] = ACTIONS(167),
        [anon_sym_RBRACK] = ACTIONS(167),
        [anon_sym_RBRACE] = ACTIONS(167),
        [sym_comment] = ACTIONS(81),
        [sym__newline] = ACTIONS(167),
    },
    [871] = {
        [anon_sym_LPAREN] = ACTIONS(1886),
        [anon_sym_RPAREN] = ACTIONS(2190),
        [anon_sym_COMMA] = ACTIONS(2190),
        [anon_sym_as] = ACTIONS(315),
        [anon_sym_STAR] = ACTIONS(1967),
        [anon_sym_COLON] = ACTIONS(315),
        [anon_sym_for] = ACTIONS(315),
        [anon_sym_in] = ACTIONS(315),
        [anon_sym_PLUS] = ACTIONS(1970),
        [anon_sym_DASH] = ACTIONS(1970),
        [anon_sym_SLASH] = ACTIONS(1970),
        [anon_sym_STAR_STAR] = ACTIONS(1970),
        [anon_sym_PIPE] = ACTIONS(1970),
        [anon_sym_AMP] = ACTIONS(1970),
        [anon_sym_CARET] = ACTIONS(1970),
        [anon_sym_LT_LT] = ACTIONS(1970),
        [anon_sym_GT_GT] = ACTIONS(1970),
        [anon_sym_and] = ACTIONS(1970),
        [anon_sym_or] = ACTIONS(1970),
        [anon_sym_LBRACK] = ACTIONS(1895),
        [anon_sym_RBRACK] = ACTIONS(315),
        [anon_sym_RBRACE] = ACTIONS(315),
        [sym_comment] = ACTIONS(81),
        [sym__newline] = ACTIONS(315),
    },
    [872] = {
        [anon_sym_LPAREN] = ACTIONS(167),
        [anon_sym_RPAREN] = ACTIONS(1255),
        [anon_sym_COMMA] = ACTIONS(2193),
        [anon_sym_STAR] = ACTIONS(169),
        [anon_sym_COLON] = ACTIONS(167),
        [anon_sym_PLUS] = ACTIONS(167),
        [anon_sym_DASH] = ACTIONS(167),
        [anon_sym_SLASH] = ACTIONS(167),
        [anon_sym_STAR_STAR] = ACTIONS(167),
        [anon_sym_PIPE] = ACTIONS(167),
        [anon_sym_AMP] = ACTIONS(167),
        [anon_sym_CARET] = ACTIONS(167),
        [anon_sym_LT_LT] = ACTIONS(167),
        [anon_sym_GT_GT] = ACTIONS(167),
        [anon_sym_and] = ACTIONS(167),
        [anon_sym_or] = ACTIONS(167),
        [anon_sym_LBRACK] = ACTIONS(167),
        [sym_comment] = ACTIONS(81),
        [sym__newline] = ACTIONS(1255),
    },
    [873] = {
        [anon_sym_LPAREN] = ACTIONS(1866),
        [anon_sym_RPAREN] = ACTIONS(1866),
        [anon_sym_COMMA] = ACTIONS(1866),
        [anon_sym_as] = ACTIONS(1866),
        [anon_sym_STAR] = ACTIONS(1869),
        [anon_sym_COLON] = ACTIONS(2196),
        [anon_sym_for] = ACTIONS(1866),
        [anon_sym_in] = ACTIONS(1866),
        [anon_sym_PLUS] = ACTIONS(1866),
        [anon_sym_DASH] = ACTIONS(1866),
        [anon_sym_SLASH] = ACTIONS(1866),
        [anon_sym_STAR_STAR] = ACTIONS(1866),
        [anon_sym_PIPE] = ACTIONS(1866),
        [anon_sym_AMP] = ACTIONS(1866),
        [anon_sym_CARET] = ACTIONS(1866),
        [anon_sym_LT_LT] = ACTIONS(1866),
        [anon_sym_GT_GT] = ACTIONS(1866),
        [anon_sym_and] = ACTIONS(1866),
        [anon_sym_or] = ACTIONS(1866),
        [anon_sym_LBRACK] = ACTIONS(1866),
        [anon_sym_RBRACK] = ACTIONS(1866),
        [anon_sym_RBRACE] = ACTIONS(1866),
        [sym_comment] = ACTIONS(81),
        [sym__newline] = ACTIONS(1866),
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
        [anon_sym_not] = ACTIONS(2201),
        [anon_sym_LBRACK] = ACTIONS(121),
        [anon_sym_LBRACE] = ACTIONS(123),
        [sym_number] = ACTIONS(125),
        [sym_identifier] = ACTIONS(127),
        [sym_comment] = ACTIONS(81),
    },
    [875] = {
        [anon_sym_COMMA] = ACTIONS(2203),
        [anon_sym_RBRACK] = ACTIONS(2203),
        [sym_comment] = ACTIONS(81),
    },
    [876] = {
        [anon_sym_LPAREN] = ACTIONS(2206),
        [anon_sym_RPAREN] = ACTIONS(2206),
        [anon_sym_COMMA] = ACTIONS(2206),
        [anon_sym_as] = ACTIONS(2206),
        [anon_sym_STAR] = ACTIONS(2211),
        [anon_sym_COLON] = ACTIONS(2206),
        [anon_sym_for] = ACTIONS(2206),
        [anon_sym_in] = ACTIONS(2206),
        [anon_sym_PLUS] = ACTIONS(2206),
        [anon_sym_DASH] = ACTIONS(2206),
        [anon_sym_SLASH] = ACTIONS(2206),
        [anon_sym_STAR_STAR] = ACTIONS(2206),
        [anon_sym_PIPE] = ACTIONS(2206),
        [anon_sym_AMP] = ACTIONS(2206),
        [anon_sym_CARET] = ACTIONS(2206),
        [anon_sym_LT_LT] = ACTIONS(2206),
        [anon_sym_GT_GT] = ACTIONS(2206),
        [anon_sym_and] = ACTIONS(2206),
        [anon_sym_or] = ACTIONS(2206),
        [anon_sym_LBRACK] = ACTIONS(2206),
        [anon_sym_RBRACK] = ACTIONS(2206),
        [anon_sym_RBRACE] = ACTIONS(2206),
        [sym_comment] = ACTIONS(81),
        [sym__newline] = ACTIONS(2206),
    },
    [877] = {
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
        [sym_comment] = ACTIONS(81),
        [sym__newline] = ACTIONS(2216),
    },
    [878] = {
        [aux_sym_dotted_name_repeat1] = STATE(377),
        [anon_sym_DOT] = ACTIONS(741),
        [anon_sym_LPAREN] = ACTIONS(167),
        [anon_sym_RPAREN] = ACTIONS(2226),
        [anon_sym_COMMA] = ACTIONS(2226),
        [anon_sym_as] = ACTIONS(2226),
        [anon_sym_STAR] = ACTIONS(169),
        [anon_sym_COLON] = ACTIONS(167),
        [anon_sym_in] = ACTIONS(167),
        [anon_sym_EQ] = ACTIONS(321),
        [anon_sym_PLUS] = ACTIONS(167),
        [anon_sym_DASH] = ACTIONS(167),
        [anon_sym_SLASH] = ACTIONS(167),
        [anon_sym_STAR_STAR] = ACTIONS(167),
        [anon_sym_PIPE] = ACTIONS(167),
        [anon_sym_AMP] = ACTIONS(167),
        [anon_sym_CARET] = ACTIONS(167),
        [anon_sym_LT_LT] = ACTIONS(167),
        [anon_sym_GT_GT] = ACTIONS(167),
        [anon_sym_and] = ACTIONS(167),
        [anon_sym_or] = ACTIONS(167),
        [anon_sym_LBRACK] = ACTIONS(167),
        [anon_sym_RBRACK] = ACTIONS(167),
        [anon_sym_RBRACE] = ACTIONS(167),
        [sym_comment] = ACTIONS(81),
        [sym__newline] = ACTIONS(2226),
    },
    [879] = {
        [anon_sym_RPAREN] = ACTIONS(2229),
        [anon_sym_COMMA] = ACTIONS(2229),
        [sym_comment] = ACTIONS(81),
        [sym__newline] = ACTIONS(2229),
    },
    [880] = {
        [anon_sym_COMMA] = ACTIONS(2232),
        [anon_sym_COLON] = ACTIONS(2232),
        [sym_comment] = ACTIONS(81),
    },
    [881] = {
        [anon_sym_RPAREN] = ACTIONS(2229),
        [anon_sym_COMMA] = ACTIONS(2229),
        [anon_sym_as] = ACTIONS(1243),
        [sym_comment] = ACTIONS(81),
        [sym__newline] = ACTIONS(2229),
    },
    [882] = {
        [anon_sym_LPAREN] = ACTIONS(195),
        [anon_sym_RPAREN] = ACTIONS(2235),
        [anon_sym_COMMA] = ACTIONS(2240),
        [anon_sym_as] = ACTIONS(927),
        [anon_sym_STAR] = ACTIONS(2248),
        [anon_sym_COLON] = ACTIONS(2250),
        [anon_sym_in] = ACTIONS(2255),
        [anon_sym_PLUS] = ACTIONS(2258),
        [anon_sym_DASH] = ACTIONS(2258),
        [anon_sym_SLASH] = ACTIONS(2258),
        [anon_sym_STAR_STAR] = ACTIONS(2258),
        [anon_sym_PIPE] = ACTIONS(2258),
        [anon_sym_AMP] = ACTIONS(2258),
        [anon_sym_CARET] = ACTIONS(2258),
        [anon_sym_LT_LT] = ACTIONS(2258),
        [anon_sym_GT_GT] = ACTIONS(2258),
        [anon_sym_and] = ACTIONS(2258),
        [anon_sym_or] = ACTIONS(2258),
        [anon_sym_LBRACK] = ACTIONS(211),
        [anon_sym_RBRACK] = ACTIONS(2260),
        [anon_sym_RBRACE] = ACTIONS(2255),
        [sym_comment] = ACTIONS(81),
        [sym__newline] = ACTIONS(2255),
    },
    [883] = {
        [anon_sym_RPAREN] = ACTIONS(2265),
        [anon_sym_COMMA] = ACTIONS(2265),
        [sym_comment] = ACTIONS(81),
    },
    [884] = {
        [anon_sym_RPAREN] = ACTIONS(2268),
        [sym_comment] = ACTIONS(81),
    },
    [885] = {
        [anon_sym_COMMA] = ACTIONS(2270),
        [anon_sym_RBRACE] = ACTIONS(2270),
        [sym_comment] = ACTIONS(81),
    },
    [886] = {
        [anon_sym_LPAREN] = ACTIONS(2273),
        [anon_sym_RPAREN] = ACTIONS(2273),
        [anon_sym_COMMA] = ACTIONS(2273),
        [anon_sym_as] = ACTIONS(2273),
        [anon_sym_STAR] = ACTIONS(2277),
        [anon_sym_COLON] = ACTIONS(2273),
        [anon_sym_for] = ACTIONS(2273),
        [anon_sym_in] = ACTIONS(2273),
        [anon_sym_PLUS] = ACTIONS(2273),
        [anon_sym_DASH] = ACTIONS(2273),
        [anon_sym_SLASH] = ACTIONS(2273),
        [anon_sym_STAR_STAR] = ACTIONS(2273),
        [anon_sym_PIPE] = ACTIONS(2273),
        [anon_sym_AMP] = ACTIONS(2273),
        [anon_sym_CARET] = ACTIONS(2273),
        [anon_sym_LT_LT] = ACTIONS(2273),
        [anon_sym_GT_GT] = ACTIONS(2273),
        [anon_sym_and] = ACTIONS(2273),
        [anon_sym_or] = ACTIONS(2273),
        [anon_sym_LBRACK] = ACTIONS(2273),
        [anon_sym_RBRACK] = ACTIONS(2273),
        [anon_sym_RBRACE] = ACTIONS(2273),
        [sym_comment] = ACTIONS(81),
        [sym__newline] = ACTIONS(2273),
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
        [anon_sym_not] = ACTIONS(2201),
        [anon_sym_LBRACK] = ACTIONS(121),
        [anon_sym_LBRACE] = ACTIONS(123),
        [sym_number] = ACTIONS(125),
        [sym_identifier] = ACTIONS(127),
        [sym_comment] = ACTIONS(81),
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
        [anon_sym_import] = ACTIONS(91),
        [anon_sym_from] = ACTIONS(93),
        [anon_sym_print] = ACTIONS(95),
        [anon_sym_return] = ACTIONS(97),
        [anon_sym_del] = ACTIONS(99),
        [sym_pass_statement] = ACTIONS(101),
        [sym_break_statement] = ACTIONS(101),
        [sym_continue_statement] = ACTIONS(101),
        [anon_sym_not] = ACTIONS(2281),
        [anon_sym_LBRACK] = ACTIONS(121),
        [anon_sym_LBRACE] = ACTIONS(123),
        [sym_number] = ACTIONS(125),
        [sym_identifier] = ACTIONS(127),
        [sym_comment] = ACTIONS(81),
        [sym__indent] = ACTIONS(1388),
    },
    [889] = {
        [anon_sym_LPAREN] = ACTIONS(1886),
        [anon_sym_RPAREN] = ACTIONS(315),
        [anon_sym_COMMA] = ACTIONS(315),
        [anon_sym_as] = ACTIONS(315),
        [anon_sym_STAR] = ACTIONS(2283),
        [anon_sym_COLON] = ACTIONS(315),
        [anon_sym_in] = ACTIONS(315),
        [anon_sym_PLUS] = ACTIONS(2286),
        [anon_sym_DASH] = ACTIONS(2286),
        [anon_sym_SLASH] = ACTIONS(2286),
        [anon_sym_STAR_STAR] = ACTIONS(2286),
        [anon_sym_PIPE] = ACTIONS(2286),
        [anon_sym_AMP] = ACTIONS(2286),
        [anon_sym_CARET] = ACTIONS(2286),
        [anon_sym_LT_LT] = ACTIONS(2286),
        [anon_sym_GT_GT] = ACTIONS(2286),
        [anon_sym_and] = ACTIONS(2286),
        [anon_sym_or] = ACTIONS(2286),
        [anon_sym_LBRACK] = ACTIONS(1895),
        [anon_sym_RBRACK] = ACTIONS(315),
        [anon_sym_RBRACE] = ACTIONS(315),
        [sym_comment] = ACTIONS(81),
        [sym__newline] = ACTIONS(315),
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
        [anon_sym_not] = ACTIONS(2281),
        [anon_sym_LBRACK] = ACTIONS(121),
        [anon_sym_LBRACE] = ACTIONS(123),
        [sym_number] = ACTIONS(125),
        [sym_identifier] = ACTIONS(127),
        [sym_comment] = ACTIONS(81),
    },
    [891] = {
        [anon_sym_LPAREN] = ACTIONS(195),
        [anon_sym_COMMA] = ACTIONS(467),
        [anon_sym_STAR] = ACTIONS(2289),
        [anon_sym_PLUS] = ACTIONS(2291),
        [anon_sym_DASH] = ACTIONS(2291),
        [anon_sym_SLASH] = ACTIONS(2291),
        [anon_sym_STAR_STAR] = ACTIONS(2291),
        [anon_sym_PIPE] = ACTIONS(2291),
        [anon_sym_AMP] = ACTIONS(2291),
        [anon_sym_CARET] = ACTIONS(2291),
        [anon_sym_LT_LT] = ACTIONS(2291),
        [anon_sym_GT_GT] = ACTIONS(2291),
        [anon_sym_and] = ACTIONS(2291),
        [anon_sym_or] = ACTIONS(2291),
        [anon_sym_LBRACK] = ACTIONS(211),
        [anon_sym_RBRACE] = ACTIONS(467),
        [sym_comment] = ACTIONS(81),
        [sym__newline] = ACTIONS(213),
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
        [anon_sym_not] = ACTIONS(2281),
        [anon_sym_LBRACK] = ACTIONS(121),
        [anon_sym_LBRACE] = ACTIONS(123),
        [sym_number] = ACTIONS(125),
        [sym_identifier] = ACTIONS(127),
        [sym_comment] = ACTIONS(81),
    },
    [893] = {
        [anon_sym_LPAREN] = ACTIONS(1886),
        [anon_sym_COMMA] = ACTIONS(315),
        [anon_sym_STAR] = ACTIONS(2293),
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
        [anon_sym_LBRACK] = ACTIONS(1895),
        [anon_sym_RBRACE] = ACTIONS(315),
        [sym_comment] = ACTIONS(81),
        [sym__newline] = ACTIONS(315),
    },
    [894] = {
        [anon_sym_LPAREN] = ACTIONS(1898),
        [anon_sym_COMMA] = ACTIONS(643),
        [anon_sym_STAR] = ACTIONS(2299),
        [anon_sym_PLUS] = ACTIONS(2302),
        [anon_sym_DASH] = ACTIONS(2302),
        [anon_sym_SLASH] = ACTIONS(2302),
        [anon_sym_STAR_STAR] = ACTIONS(2302),
        [anon_sym_PIPE] = ACTIONS(2302),
        [anon_sym_AMP] = ACTIONS(2302),
        [anon_sym_CARET] = ACTIONS(2302),
        [anon_sym_LT_LT] = ACTIONS(2302),
        [anon_sym_GT_GT] = ACTIONS(2302),
        [anon_sym_and] = ACTIONS(2302),
        [anon_sym_or] = ACTIONS(2302),
        [anon_sym_LBRACK] = ACTIONS(1907),
        [anon_sym_RBRACE] = ACTIONS(643),
        [sym_comment] = ACTIONS(81),
        [sym__newline] = ACTIONS(643),
    },
    [895] = {
        [anon_sym_LPAREN] = ACTIONS(1898),
        [anon_sym_RPAREN] = ACTIONS(643),
        [anon_sym_COMMA] = ACTIONS(643),
        [anon_sym_as] = ACTIONS(643),
        [anon_sym_STAR] = ACTIONS(2305),
        [anon_sym_COLON] = ACTIONS(643),
        [anon_sym_in] = ACTIONS(643),
        [anon_sym_PLUS] = ACTIONS(2308),
        [anon_sym_DASH] = ACTIONS(2308),
        [anon_sym_SLASH] = ACTIONS(2308),
        [anon_sym_STAR_STAR] = ACTIONS(2308),
        [anon_sym_PIPE] = ACTIONS(2308),
        [anon_sym_AMP] = ACTIONS(2308),
        [anon_sym_CARET] = ACTIONS(2308),
        [anon_sym_LT_LT] = ACTIONS(2308),
        [anon_sym_GT_GT] = ACTIONS(2308),
        [anon_sym_and] = ACTIONS(2308),
        [anon_sym_or] = ACTIONS(2308),
        [anon_sym_LBRACK] = ACTIONS(1907),
        [anon_sym_RBRACK] = ACTIONS(643),
        [anon_sym_RBRACE] = ACTIONS(643),
        [sym_comment] = ACTIONS(81),
        [sym__newline] = ACTIONS(643),
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
        [anon_sym_STAR] = ACTIONS(871),
        [anon_sym_not] = ACTIONS(243),
        [anon_sym_LBRACK] = ACTIONS(141),
        [anon_sym_LBRACE] = ACTIONS(143),
        [sym_number] = ACTIONS(145),
        [sym_identifier] = ACTIONS(2311),
        [sym_comment] = ACTIONS(81),
    },
    [897] = {
        [aux_sym_dotted_name_repeat1] = STATE(662),
        [anon_sym_DOT] = ACTIONS(1211),
        [anon_sym_LPAREN] = ACTIONS(167),
        [anon_sym_RPAREN] = ACTIONS(2313),
        [anon_sym_COMMA] = ACTIONS(2317),
        [anon_sym_as] = ACTIONS(743),
        [anon_sym_STAR] = ACTIONS(169),
        [anon_sym_EQ] = ACTIONS(1487),
        [anon_sym_PLUS] = ACTIONS(167),
        [anon_sym_DASH] = ACTIONS(167),
        [anon_sym_SLASH] = ACTIONS(167),
        [anon_sym_STAR_STAR] = ACTIONS(167),
        [anon_sym_PIPE] = ACTIONS(167),
        [anon_sym_AMP] = ACTIONS(167),
        [anon_sym_CARET] = ACTIONS(167),
        [anon_sym_LT_LT] = ACTIONS(167),
        [anon_sym_GT_GT] = ACTIONS(167),
        [anon_sym_and] = ACTIONS(167),
        [anon_sym_or] = ACTIONS(167),
        [anon_sym_LBRACK] = ACTIONS(167),
        [sym_comment] = ACTIONS(81),
    },
    [898] = {
        [aux_sym_print_statement_repeat1] = STATE(901),
        [anon_sym_LPAREN] = ACTIONS(259),
        [anon_sym_RPAREN] = ACTIONS(2321),
        [anon_sym_COMMA] = ACTIONS(2324),
        [anon_sym_STAR] = ACTIONS(327),
        [anon_sym_PLUS] = ACTIONS(329),
        [anon_sym_DASH] = ACTIONS(329),
        [anon_sym_SLASH] = ACTIONS(331),
        [anon_sym_STAR_STAR] = ACTIONS(333),
        [anon_sym_PIPE] = ACTIONS(335),
        [anon_sym_AMP] = ACTIONS(337),
        [anon_sym_CARET] = ACTIONS(339),
        [anon_sym_LT_LT] = ACTIONS(329),
        [anon_sym_GT_GT] = ACTIONS(329),
        [anon_sym_and] = ACTIONS(337),
        [anon_sym_or] = ACTIONS(335),
        [anon_sym_LBRACK] = ACTIONS(275),
        [sym_comment] = ACTIONS(81),
    },
    [899] = {
        [anon_sym_LPAREN] = ACTIONS(383),
        [anon_sym_RPAREN] = ACTIONS(383),
        [anon_sym_COMMA] = ACTIONS(383),
        [anon_sym_as] = ACTIONS(383),
        [anon_sym_STAR] = ACTIONS(385),
        [anon_sym_COLON] = ACTIONS(383),
        [anon_sym_for] = ACTIONS(383),
        [anon_sym_in] = ACTIONS(383),
        [anon_sym_PLUS] = ACTIONS(383),
        [anon_sym_DASH] = ACTIONS(383),
        [anon_sym_SLASH] = ACTIONS(383),
        [anon_sym_STAR_STAR] = ACTIONS(383),
        [anon_sym_PIPE] = ACTIONS(383),
        [anon_sym_AMP] = ACTIONS(383),
        [anon_sym_CARET] = ACTIONS(383),
        [anon_sym_LT_LT] = ACTIONS(383),
        [anon_sym_GT_GT] = ACTIONS(383),
        [anon_sym_and] = ACTIONS(383),
        [anon_sym_or] = ACTIONS(383),
        [anon_sym_LBRACK] = ACTIONS(383),
        [anon_sym_RBRACK] = ACTIONS(383),
        [anon_sym_RBRACE] = ACTIONS(383),
        [sym_comment] = ACTIONS(81),
        [sym__newline] = ACTIONS(2326),
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
        [anon_sym_RPAREN] = ACTIONS(671),
        [anon_sym_STAR] = ACTIONS(389),
        [anon_sym_STAR_STAR] = ACTIONS(391),
        [anon_sym_not] = ACTIONS(2329),
        [anon_sym_LBRACK] = ACTIONS(2332),
        [anon_sym_LBRACE] = ACTIONS(2335),
        [sym_number] = ACTIONS(2338),
        [sym_identifier] = ACTIONS(2341),
        [sym_comment] = ACTIONS(81),
    },
    [901] = {
        [anon_sym_RPAREN] = ACTIONS(1842),
        [anon_sym_COMMA] = ACTIONS(763),
        [sym_comment] = ACTIONS(81),
    },
    [902] = {
        [anon_sym_LPAREN] = ACTIONS(167),
        [anon_sym_RPAREN] = ACTIONS(2187),
        [anon_sym_COMMA] = ACTIONS(2187),
        [anon_sym_STAR] = ACTIONS(169),
        [anon_sym_PLUS] = ACTIONS(167),
        [anon_sym_DASH] = ACTIONS(167),
        [anon_sym_SLASH] = ACTIONS(167),
        [anon_sym_STAR_STAR] = ACTIONS(167),
        [anon_sym_PIPE] = ACTIONS(167),
        [anon_sym_AMP] = ACTIONS(167),
        [anon_sym_CARET] = ACTIONS(167),
        [anon_sym_LT_LT] = ACTIONS(167),
        [anon_sym_GT_GT] = ACTIONS(167),
        [anon_sym_and] = ACTIONS(167),
        [anon_sym_or] = ACTIONS(167),
        [anon_sym_LBRACK] = ACTIONS(167),
        [sym_comment] = ACTIONS(81),
    },
    [903] = {
        [anon_sym_import] = ACTIONS(2344),
        [anon_sym_DOT] = ACTIONS(2344),
        [anon_sym_LPAREN] = ACTIONS(2344),
        [anon_sym_RPAREN] = ACTIONS(2344),
        [anon_sym_COMMA] = ACTIONS(2344),
        [anon_sym_as] = ACTIONS(2344),
        [sym_comment] = ACTIONS(81),
        [sym__newline] = ACTIONS(2344),
    },
    [904] = {
        [sym_comment] = ACTIONS(81),
        [sym__newline] = ACTIONS(1542),
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
    [77] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(19),
    [79] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, RECOVER(699),
    [81] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT_EXTRA(),
    [83] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(700),
    [85] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(701),
    [87] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(702),
    [89] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_module, 0),
    [91] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(2),
    [93] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(3),
    [95] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(4),
    [97] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(5),
    [99] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(6),
    [101] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(7),
    [103] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(8),
    [105] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(9),
    [107] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(10),
    [109] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(11),
    [111] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(12),
    [113] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(13),
    [115] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(14),
    [117] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(15),
    [119] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(16),
    [121] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(17),
    [123] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(18),
    [125] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(19),
    [127] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(19),
    [129] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(362),
    [131] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(626),
    [133] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(627),
    [135] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(604),
    [137] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__simple_statement, 1),
    [139] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(135),
    [141] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(42),
    [143] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(44),
    [145] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(45),
    [147] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(45),
    [149] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(164),
    [151] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(559),
    [153] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(452),
    [155] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(549),
    [157] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(381),
    [159] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(237),
    [161] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(348),
    [163] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(125),
    [165] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(323),
    [167] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__expression, 1),
    [169] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__expression, 1),
    [171] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, ACCEPT_INPUT(),
    [173] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_module_repeat1, 1),
    [175] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_module_repeat1, 1),
    [177] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_module_repeat1, 1),
    [179] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(322),
    [181] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__statement, 1),
    [183] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__statement, 1),
    [185] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__statement, 1),
    [187] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__compound_statement, 1),
    [189] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__compound_statement, 1),
    [191] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__compound_statement, 1),
    [193] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_decorated_definition_repeat1, 1),
    [195] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(33),
    [197] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(34),
    [199] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(35),
    [201] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(34),
    [203] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(36),
    [205] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(37),
    [207] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(38),
    [209] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(39),
    [211] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(40),
    [213] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_expression_statement, 1),
    [215] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_module, 1),
    [217] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(31),
    [219] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(13),
    [221] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(14),
    [223] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_decorated_definition, 2),
    [225] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_decorated_definition, 2),
    [227] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_decorated_definition, 2),
    [229] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_decorated_definition_repeat1, 2),
    [231] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_module, 2),
    [233] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_module_repeat1, 2),
    [235] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_module_repeat1, 2),
    [237] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_module_repeat1, 2),
    [239] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(79),
    [241] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(80),
    [243] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(81),
    [245] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(82),
    [247] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(41),
    [249] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(43),
    [251] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(238),
    [253] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(48),
    [255] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(56),
    [257] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(126),
    [259] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(47),
    [261] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(49),
    [263] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(50),
    [265] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(49),
    [267] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(51),
    [269] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(52),
    [271] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(53),
    [273] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(54),
    [275] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(55),
    [277] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(71),
    [279] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(59),
    [281] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(63),
    [283] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_subscript, 4),
    [285] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_subscript, 4),
    [287] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(58),
    [289] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(60),
    [291] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(61),
    [293] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_subscript, 5),
    [295] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_subscript, 5),
    [297] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_subscript_repeat1, 3),
    [299] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_subscript, 6),
    [301] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_subscript, 6),
    [303] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(65),
    [305] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(66),
    [307] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(69),
    [309] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(68),
    [311] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(70),
    [313] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_subscript_repeat1, 2),
    [315] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE_FRAGILE(sym_binary_operator, 3),
    [317] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE_FRAGILE(sym_binary_operator, 3),
    [319] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(277),
    [321] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(123),
    [323] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(117),
    [325] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(122),
    [327] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(101),
    [329] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(102),
    [331] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(101),
    [333] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(103),
    [335] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(104),
    [337] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(105),
    [339] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(106),
    [341] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(118),
    [343] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(92),
    [345] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(116),
    [347] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(93),
    [349] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_call, 5),
    [351] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_call, 5),
    [353] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(95),
    [355] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(96),
    [357] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_call, 6),
    [359] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_call, 6),
    [361] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_call_repeat2, 3),
    [363] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(100),
    [365] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_call, 8),
    [367] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_call, 8),
    [369] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_call_repeat2, 2),
    [371] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(115),
    [373] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_call, 7),
    [375] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_call, 7),
    [377] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_call_repeat1, 3),
    [379] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_call_repeat1, 3),
    [381] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_call_repeat1, 3),
    [383] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_call, 4),
    [385] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_call, 4),
    [387] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(120),
    [389] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_call_repeat1, 2),
    [391] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_call_repeat1, 2),
    [393] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_call_repeat1, 2),
    [395] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_keyword_argument, 3),
    [397] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_dictionary, 2),
    [399] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_dictionary, 2),
    [401] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(199),
    [403] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(200),
    [405] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(201),
    [407] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(202),
    [409] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(203),
    [411] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(200),
    [413] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(204),
    [415] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(205),
    [417] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(206),
    [419] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(207),
    [421] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(208),
    [423] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(129),
    [425] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(130),
    [427] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(131),
    [429] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(134),
    [431] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_dictionary, 3),
    [433] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_dictionary, 3),
    [435] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(133),
    [437] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(136),
    [439] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_dictionary, 4),
    [441] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_dictionary, 4),
    [443] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_dictionary, 5),
    [445] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_dictionary, 5),
    [447] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(139),
    [449] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(140),
    [451] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(141),
    [453] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(139),
    [455] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(142),
    [457] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(143),
    [459] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(144),
    [461] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(145),
    [463] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_dictionary_repeat1, 3),
    [465] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(151),
    [467] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_pair, 3),
    [469] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(153),
    [471] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(154),
    [473] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(153),
    [475] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(155),
    [477] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(156),
    [479] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(157),
    [481] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(158),
    [483] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(183),
    [485] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(167),
    [487] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(168),
    [489] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_expression_list, 1),
    [491] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(169),
    [493] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(168),
    [495] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(170),
    [497] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(171),
    [499] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(172),
    [501] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(173),
    [503] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(175),
    [505] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_expression_list, 2),
    [507] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_print_statement_repeat1, 3),
    [509] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_print_statement_repeat1, 2),
    [511] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(184),
    [513] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(186),
    [515] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(187),
    [517] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(186),
    [519] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(188),
    [521] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(189),
    [523] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(190),
    [525] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(191),
    [527] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(192),
    [529] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_dictionary_comprehension, 7),
    [531] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_dictionary_comprehension, 7),
    [533] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_dictionary_repeat1, 2),
    [535] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(211),
    [537] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(223),
    [539] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_set, 3),
    [541] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_set, 3),
    [543] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(210),
    [545] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(212),
    [547] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_set, 4),
    [549] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_set, 4),
    [551] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_set, 5),
    [553] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_set, 5),
    [555] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(220),
    [557] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(222),
    [559] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_set_comprehension, 7),
    [561] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_set_comprehension, 7),
    [563] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(225),
    [565] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(226),
    [567] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(225),
    [569] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(227),
    [571] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(228),
    [573] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(229),
    [575] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(230),
    [577] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_list, 2),
    [579] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_list, 2),
    [581] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(240),
    [583] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(241),
    [585] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(242),
    [587] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(243),
    [589] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(241),
    [591] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(244),
    [593] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(245),
    [595] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(246),
    [597] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(247),
    [599] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(248),
    [601] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(251),
    [603] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_list, 3),
    [605] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_list, 3),
    [607] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(250),
    [609] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(252),
    [611] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_list, 4),
    [613] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_list, 4),
    [615] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_list, 5),
    [617] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_list, 5),
    [619] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(260),
    [621] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(261),
    [623] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(263),
    [625] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(264),
    [627] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(263),
    [629] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(265),
    [631] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(266),
    [633] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(267),
    [635] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(268),
    [637] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(269),
    [639] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_list_comprehension, 7),
    [641] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_list_comprehension, 7),
    [643] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE_FRAGILE(sym_unary_operator, 2),
    [645] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE_FRAGILE(sym_unary_operator, 2),
    [647] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_dictionary_splat_argument, 2),
    [649] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(279),
    [651] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(280),
    [653] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(279),
    [655] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(281),
    [657] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(282),
    [659] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(283),
    [661] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(284),
    [663] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_list_splat_argument, 2),
    [665] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(316),
    [667] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(321),
    [669] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(317),
    [671] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(306),
    [673] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(315),
    [675] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(307),
    [677] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(309),
    [679] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(310),
    [681] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(312),
    [683] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(314),
    [685] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(319),
    [687] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__statement, 2),
    [689] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__statement, 2),
    [691] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__statement, 2),
    [693] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(337),
    [695] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(338),
    [697] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(339),
    [699] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(326),
    [701] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(327),
    [703] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(328),
    [705] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(331),
    [707] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(330),
    [709] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(332),
    [711] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(334),
    [713] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(336),
    [715] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(342),
    [717] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(341),
    [719] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(343),
    [721] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(345),
    [723] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(347),
    [725] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(350),
    [727] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(351),
    [729] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(352),
    [731] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(355),
    [733] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(354),
    [735] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(356),
    [737] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(358),
    [739] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(360),
    [741] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(376),
    [743] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_dotted_name, 1),
    [745] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(364),
    [747] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(365),
    [749] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_decorator, 3),
    [751] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(367),
    [753] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_decorator, 4),
    [755] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(369),
    [757] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(370),
    [759] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_arguments, 3),
    [761] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(372),
    [763] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(373),
    [765] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_arguments, 4),
    [767] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(380),
    [769] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_dotted_name, 2),
    [771] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(378),
    [773] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(379),
    [775] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_dotted_name_repeat1, 3),
    [777] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_dotted_name_repeat1, 2),
    [779] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(382),
    [781] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(383),
    [783] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(384),
    [785] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(388),
    [787] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(389),
    [789] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(390),
    [791] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(391),
    [793] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(392),
    [795] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(393),
    [797] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(394),
    [799] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(387),
    [801] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_class_definition, 4),
    [803] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_class_definition, 4),
    [805] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_class_definition, 4),
    [807] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__suite, 2),
    [809] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__suite, 2),
    [811] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__suite, 2),
    [813] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(489),
    [815] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(420),
    [817] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(405),
    [819] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(404),
    [821] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(402),
    [823] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(393),
    [825] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(394),
    [827] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__suite, 3),
    [829] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__suite, 3),
    [831] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__suite, 3),
    [833] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(406),
    [835] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(407),
    [837] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(408),
    [839] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(411),
    [841] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(413),
    [843] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(417),
    [845] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(418),
    [847] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_class_definition, 7),
    [849] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_class_definition, 7),
    [851] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_class_definition, 7),
    [853] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(421),
    [855] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(425),
    [857] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(426),
    [859] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(427),
    [861] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(423),
    [863] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_function_definition, 5),
    [865] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_function_definition, 5),
    [867] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_function_definition, 5),
    [869] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_parameters, 2),
    [871] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(441),
    [873] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(451),
    [875] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(447),
    [877] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(450),
    [879] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(445),
    [881] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(448),
    [883] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(432),
    [885] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(436),
    [887] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(443),
    [889] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(437),
    [891] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_parameters, 4),
    [893] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(438),
    [895] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(440),
    [897] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_parameters, 6),
    [899] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(442),
    [901] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_dictionary_splat_parameter, 3),
    [903] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(444),
    [905] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_parameters_repeat1, 3),
    [907] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_parameters_repeat1, 3),
    [909] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_parameters, 5),
    [911] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_default_parameter, 3),
    [913] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_parameters, 3),
    [915] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_parameters_repeat1, 2),
    [917] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_parameters_repeat1, 2),
    [919] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_list_splat_parameter, 2),
    [921] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(480),
    [923] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(481),
    [925] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_with_item, 1),
    [927] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(455),
    [929] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(456),
    [931] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(457),
    [933] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(456),
    [935] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(458),
    [937] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(459),
    [939] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(460),
    [941] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(461),
    [943] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(467),
    [945] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_with_item, 3),
    [947] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(469),
    [949] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(470),
    [951] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(469),
    [953] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(471),
    [955] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(472),
    [957] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(473),
    [959] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(474),
    [961] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(483),
    [963] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(484),
    [965] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_with_statement, 5),
    [967] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_with_statement, 5),
    [969] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_with_statement, 5),
    [971] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_with_statement_repeat1, 3),
    [973] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_with_statement, 4),
    [975] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_with_statement, 4),
    [977] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_with_statement, 4),
    [979] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_with_statement_repeat1, 2),
    [981] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(490),
    [983] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(514),
    [985] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(493),
    [987] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(494),
    [989] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(505),
    [991] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_try_statement_repeat1, 1),
    [993] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_try_statement_repeat1, 1),
    [995] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_try_statement_repeat1, 1),
    [997] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_try_statement, 4),
    [999] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_try_statement, 4),
    [1001] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_try_statement, 4),
    [1003] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(498),
    [1005] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(493),
    [1007] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(494),
    [1009] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(503),
    [1011] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_try_statement, 5),
    [1013] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_try_statement, 5),
    [1015] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_try_statement, 5),
    [1017] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_try_statement_repeat1, 2),
    [1019] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_try_statement_repeat1, 2),
    [1021] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_try_statement_repeat1, 2),
    [1023] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_try_statement, 6),
    [1025] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_try_statement, 6),
    [1027] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_try_statement, 6),
    [1029] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_else_clause, 3),
    [1031] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_else_clause, 3),
    [1033] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_else_clause, 3),
    [1035] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_finally_clause, 3),
    [1037] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_finally_clause, 3),
    [1039] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_finally_clause, 3),
    [1041] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(508),
    [1043] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(509),
    [1045] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_except_clause, 4),
    [1047] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_except_clause, 4),
    [1049] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_except_clause, 4),
    [1051] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(512),
    [1053] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_except_clause, 6),
    [1055] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_except_clause, 6),
    [1057] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_except_clause, 6),
    [1059] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(516),
    [1061] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(518),
    [1063] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_while_statement, 4),
    [1065] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_while_statement, 4),
    [1067] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_while_statement, 4),
    [1069] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_while_statement, 5),
    [1071] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_while_statement, 5),
    [1073] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_while_statement, 5),
    [1075] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(522),
    [1077] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(530),
    [1079] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(525),
    [1081] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(527),
    [1083] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_for_statement, 6),
    [1085] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_for_statement, 6),
    [1087] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_for_statement, 6),
    [1089] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_for_statement, 7),
    [1091] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_for_statement, 7),
    [1093] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_for_statement, 7),
    [1095] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(534),
    [1097] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_if_statement, 4),
    [1099] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(536),
    [1101] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_if_statement, 4),
    [1103] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_if_statement, 4),
    [1105] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_if_statement_repeat1, 1),
    [1107] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_if_statement_repeat1, 1),
    [1109] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_if_statement_repeat1, 1),
    [1111] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_if_statement, 5),
    [1113] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_if_statement, 5),
    [1115] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_if_statement, 5),
    [1117] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_if_statement_repeat1, 2),
    [1119] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_if_statement_repeat1, 2),
    [1121] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_if_statement_repeat1, 2),
    [1123] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_if_statement, 6),
    [1125] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_if_statement, 6),
    [1127] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_if_statement, 6),
    [1129] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(543),
    [1131] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_elif_clause, 4),
    [1133] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_elif_clause, 4),
    [1135] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_elif_clause, 4),
    [1137] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(546),
    [1139] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(547),
    [1141] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(551),
    [1143] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(554),
    [1145] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(556),
    [1147] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(561),
    [1149] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(562),
    [1151] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(573),
    [1153] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(566),
    [1155] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(561),
    [1157] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(562),
    [1159] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(571),
    [1161] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(576),
    [1163] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(577),
    [1165] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(580),
    [1167] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(583),
    [1169] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(587),
    [1171] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(589),
    [1173] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(593),
    [1175] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(595),
    [1177] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(602),
    [1179] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_delete_statement, 2),
    [1181] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(607),
    [1183] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(608),
    [1185] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(609),
    [1187] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(608),
    [1189] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(610),
    [1191] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(611),
    [1193] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(612),
    [1195] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(613),
    [1197] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(615),
    [1199] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_return_statement, 2),
    [1201] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_print_statement, 2),
    [1203] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_print_statement, 3),
    [1205] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_import_from_statement_repeat1, 1),
    [1207] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_import_from_statement_repeat1, 1),
    [1209] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_import_from_statement_repeat1, 1),
    [1211] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(661),
    [1213] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(630),
    [1215] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(630),
    [1217] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(631),
    [1219] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(627),
    [1221] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(666),
    [1223] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(635),
    [1225] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_import_from_statement_repeat1, 2),
    [1227] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_import_from_statement_repeat1, 2),
    [1229] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_import_from_statement_repeat1, 2),
    [1231] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(633),
    [1233] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(634),
    [1235] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_wildcard_import, 1),
    [1237] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_import_from_statement, 5),
    [1239] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(639),
    [1241] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__import_list, 1),
    [1243] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(640),
    [1245] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__import_list, 2),
    [1247] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(645),
    [1249] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(642),
    [1251] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__import_list, 3),
    [1253] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym__import_list_repeat1, 3),
    [1255] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_aliased_import, 3),
    [1257] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym__import_list_repeat1, 2),
    [1259] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(660),
    [1261] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(651),
    [1263] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(652),
    [1265] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(657),
    [1267] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(654),
    [1269] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_import_from_statement, 7),
    [1271] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(665),
    [1273] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(663),
    [1275] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(664),
    [1277] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_import_from_statement, 4),
    [1279] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(669),
    [1281] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_import_from_statement, 6),
    [1283] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_import_statement, 2),
    [1285] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(806),
    [1287] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_import_from_statement_repeat1, 1), REDUCE(aux_sym_import_from_statement_repeat1, 2),
    [1290] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_import_from_statement_repeat1, 1), REDUCE(aux_sym_import_from_statement_repeat1, 2),
    [1293] = {.count = 3, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_import_from_statement_repeat1, 1), REDUCE(aux_sym_import_from_statement_repeat1, 2), SHIFT(903),
    [1297] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(896),
    [1299] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(897),
    [1301] = {.count = 5, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_call, 4), REDUCE(sym_call, 5), REDUCE(sym_call, 6), REDUCE(sym_call, 7), REDUCE(sym_call, 8),
    [1307] = {.count = 5, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_call, 4), REDUCE(sym_call, 5), REDUCE(sym_call, 6), REDUCE(sym_call, 7), REDUCE(sym_call, 8),
    [1313] = {.count = 11, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_parameters, 2), REDUCE(sym_parameters, 3), REDUCE(sym_parameters, 4), REDUCE(sym_call, 4), REDUCE(sym_parameters, 5), REDUCE(sym_call, 5), REDUCE(sym_parameters, 6), REDUCE(sym_call, 6), REDUCE(sym_call, 7), REDUCE(sym_call, 8), SHIFT(810),
    [1325] = {.count = 9, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_arguments, 3), REDUCE(sym_arguments, 4), REDUCE(sym_call, 4), REDUCE(sym_call, 5), REDUCE(sym_import_from_statement, 6), REDUCE(sym_call, 6), REDUCE(sym_import_from_statement, 7), REDUCE(sym_call, 7), REDUCE(sym_call, 8),
    [1335] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__import_list, 2), REDUCE(sym__import_list, 3), SHIFT(873),
    [1339] = {.count = 5, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_parameters_repeat1, 2), REDUCE(aux_sym_call_repeat1, 2), REDUCE(aux_sym_parameters_repeat1, 3), REDUCE(aux_sym_call_repeat1, 3), SHIFT(438),
    [1345] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_call_repeat1, 2), REDUCE(aux_sym_call_repeat1, 3), SHIFT(80),
    [1349] = {.count = 3, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_call_repeat1, 2), REDUCE(aux_sym_call_repeat1, 3), SHIFT(874),
    [1353] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_call_repeat1, 2), REDUCE(aux_sym_call_repeat1, 3), SHIFT(17),
    [1357] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(875),
    [1359] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(876),
    [1361] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_call_repeat1, 2), REDUCE(aux_sym_call_repeat1, 3), SHIFT(18),
    [1365] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(877),
    [1367] = {.count = 3, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_call_repeat1, 2), REDUCE(aux_sym_call_repeat1, 3), SHIFT(19),
    [1371] = {.count = 5, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_parameters_repeat1, 2), REDUCE(aux_sym_call_repeat1, 2), REDUCE(aux_sym_parameters_repeat1, 3), REDUCE(aux_sym_call_repeat1, 3), SHIFT(878),
    [1377] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__import_list, 2), REDUCE(sym__import_list, 3),
    [1380] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(872),
    [1382] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(694),
    [1384] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(870),
    [1386] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(792),
    [1388] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(701),
    [1390] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(753),
    [1392] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(856),
    [1394] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(850),
    [1396] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(843),
    [1398] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(841),
    [1400] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(838),
    [1402] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_subscript_repeat1, 2), REDUCE(aux_sym_subscript_repeat1, 3), SHIFT(48),
    [1406] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_subscript_repeat1, 2), REDUCE(aux_sym_subscript_repeat1, 3), SHIFT(56),
    [1410] = {.count = 8, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_list, 2), REDUCE(sym_list, 3), REDUCE(sym_subscript, 4), REDUCE(sym_list, 4), REDUCE(sym_subscript, 5), REDUCE(sym_list, 5), REDUCE(sym_subscript, 6), REDUCE(sym_list_comprehension, 7),
    [1419] = {.count = 8, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_list, 2), REDUCE(sym_list, 3), REDUCE(sym_subscript, 4), REDUCE(sym_list, 4), REDUCE(sym_subscript, 5), REDUCE(sym_list, 5), REDUCE(sym_subscript, 6), REDUCE(sym_list_comprehension, 7),
    [1428] = {.count = 9, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_dictionary, 2), REDUCE(sym_dictionary, 3), REDUCE(sym_set, 3), REDUCE(sym_dictionary, 4), REDUCE(sym_set, 4), REDUCE(sym_dictionary, 5), REDUCE(sym_set, 5), REDUCE(sym_dictionary_comprehension, 7), REDUCE(sym_set_comprehension, 7),
    [1438] = {.count = 9, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_dictionary, 2), REDUCE(sym_dictionary, 3), REDUCE(sym_set, 3), REDUCE(sym_dictionary, 4), REDUCE(sym_set, 4), REDUCE(sym_dictionary, 5), REDUCE(sym_set, 5), REDUCE(sym_dictionary_comprehension, 7), REDUCE(sym_set_comprehension, 7),
    [1448] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_dotted_name, 1), REDUCE(aux_sym_dotted_name_repeat1, 2), REDUCE(aux_sym_dotted_name_repeat1, 3),
    [1452] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_dotted_name_repeat1, 2), REDUCE(aux_sym_dotted_name_repeat1, 3), SHIFT(376),
    [1456] = {.count = 5, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_dotted_name, 1), REDUCE(sym__expression, 1), REDUCE(aux_sym_dotted_name_repeat1, 2), REDUCE(aux_sym_dotted_name_repeat1, 3), SHIFT(827),
    [1462] = {.count = 8, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_dotted_name, 1), REDUCE(sym__expression, 1), REDUCE(sym_list_splat_parameter, 2), REDUCE(aux_sym_dotted_name_repeat1, 2), REDUCE(sym_aliased_import, 3), REDUCE(sym_dictionary_splat_parameter, 3), REDUCE(aux_sym_dotted_name_repeat1, 3), SHIFT(816),
    [1471] = {.count = 7, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_dotted_name, 1), REDUCE(sym__expression, 1), REDUCE(sym_list_splat_parameter, 2), REDUCE(aux_sym_dotted_name_repeat1, 2), REDUCE(sym_aliased_import, 3), REDUCE(aux_sym_dotted_name_repeat1, 3), SHIFT(820),
    [1479] = {.count = 4, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_dotted_name, 1), REDUCE(sym__expression, 1), REDUCE(aux_sym_dotted_name_repeat1, 2), REDUCE(aux_sym_dotted_name_repeat1, 3),
    [1484] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__expression, 1), SHIFT(828),
    [1487] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(690),
    [1489] = {.count = 5, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_dotted_name, 1), REDUCE(sym__expression, 1), REDUCE(aux_sym_dotted_name_repeat1, 2), REDUCE(sym_aliased_import, 3), REDUCE(aux_sym_dotted_name_repeat1, 3),
    [1495] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_module, 2), REDUCE(sym__statement, 2), REDUCE(sym__suite, 2),
    [1499] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__statement, 2), REDUCE(sym__suite, 2),
    [1502] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__statement, 2), REDUCE(sym__suite, 2),
    [1505] = {.count = 4, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__statement, 2), REDUCE(sym__suite, 2), REDUCE(sym_decorator, 3), REDUCE(sym_decorator, 4),
    [1510] = {.count = 4, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__statement, 2), REDUCE(sym__suite, 2), REDUCE(sym_decorator, 3), REDUCE(sym_decorator, 4),
    [1515] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__statement, 2), REDUCE(sym__suite, 2),
    [1518] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(744),
    [1520] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__suite, 2), REDUCE(sym__suite, 3),
    [1523] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__suite, 2), REDUCE(sym__suite, 3),
    [1526] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__suite, 2), REDUCE(sym__suite, 3),
    [1529] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_module_repeat1, 1), REDUCE(aux_sym_module_repeat1, 2),
    [1532] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_module_repeat1, 1), REDUCE(aux_sym_module_repeat1, 2),
    [1535] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_module_repeat1, 1), REDUCE(aux_sym_module_repeat1, 2),
    [1538] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(826),
    [1540] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(808),
    [1542] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_import_statement, 2), REDUCE(sym_import_from_statement, 4), REDUCE(sym_import_from_statement, 5),
    [1546] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__import_list, 1), REDUCE(aux_sym__import_list_repeat1, 2), REDUCE(aux_sym__import_list_repeat1, 3),
    [1550] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym__import_list_repeat1, 2), REDUCE(aux_sym__import_list_repeat1, 3), SHIFT(639),
    [1554] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_import_from_statement, 4), REDUCE(sym_import_from_statement, 5),
    [1557] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_if_statement_repeat1, 1), REDUCE(aux_sym_if_statement_repeat1, 2),
    [1560] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_if_statement_repeat1, 1), REDUCE(aux_sym_if_statement_repeat1, 2),
    [1563] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_if_statement_repeat1, 1), REDUCE(aux_sym_if_statement_repeat1, 2),
    [1566] = {.count = 5, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_if_statement, 5), REDUCE(sym_while_statement, 5), REDUCE(sym_try_statement, 5), REDUCE(sym_if_statement, 6), REDUCE(sym_for_statement, 7),
    [1572] = {.count = 5, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_if_statement, 5), REDUCE(sym_while_statement, 5), REDUCE(sym_try_statement, 5), REDUCE(sym_if_statement, 6), REDUCE(sym_for_statement, 7),
    [1578] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(687),
    [1580] = {.count = 5, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_if_statement, 5), REDUCE(sym_while_statement, 5), REDUCE(sym_try_statement, 5), REDUCE(sym_if_statement, 6), REDUCE(sym_for_statement, 7),
    [1586] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_try_statement_repeat1, 1), REDUCE(aux_sym_try_statement_repeat1, 2),
    [1589] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_try_statement_repeat1, 1), REDUCE(aux_sym_try_statement_repeat1, 2),
    [1592] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_try_statement_repeat1, 1), REDUCE(aux_sym_try_statement_repeat1, 2),
    [1595] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_try_statement, 4), REDUCE(sym_try_statement, 5), REDUCE(sym_try_statement, 6),
    [1599] = {.count = 3, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_try_statement, 4), REDUCE(sym_try_statement, 5), REDUCE(sym_try_statement, 6),
    [1603] = {.count = 3, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_try_statement, 4), REDUCE(sym_try_statement, 5), REDUCE(sym_try_statement, 6),
    [1607] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_with_statement_repeat1, 2), REDUCE(aux_sym_with_statement_repeat1, 3), SHIFT(480),
    [1611] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_with_statement_repeat1, 2), REDUCE(aux_sym_with_statement_repeat1, 3), SHIFT(824),
    [1615] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__compound_statement, 1), REDUCE(sym_decorated_definition, 2),
    [1618] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__compound_statement, 1), REDUCE(sym_decorated_definition, 2),
    [1621] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__compound_statement, 1), REDUCE(sym_decorated_definition, 2),
    [1624] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(822),
    [1626] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(816),
    [1628] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(820),
    [1630] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(817),
    [1632] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(815),
    [1634] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_decorated_definition_repeat1, 1), REDUCE(aux_sym_decorated_definition_repeat1, 2),
    [1637] = {.count = 13, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_else_clause, 3), REDUCE(sym_finally_clause, 3), REDUCE(sym_if_statement, 4), REDUCE(sym_elif_clause, 4), REDUCE(sym_while_statement, 4), REDUCE(sym_except_clause, 4), REDUCE(sym_with_statement, 4), REDUCE(sym_class_definition, 4), REDUCE(sym_with_statement, 5), REDUCE(sym_function_definition, 5), REDUCE(sym_for_statement, 6), REDUCE(sym_except_clause, 6), REDUCE(sym_class_definition, 7),
    [1651] = {.count = 13, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_else_clause, 3), REDUCE(sym_finally_clause, 3), REDUCE(sym_if_statement, 4), REDUCE(sym_elif_clause, 4), REDUCE(sym_while_statement, 4), REDUCE(sym_except_clause, 4), REDUCE(sym_with_statement, 4), REDUCE(sym_class_definition, 4), REDUCE(sym_with_statement, 5), REDUCE(sym_function_definition, 5), REDUCE(sym_for_statement, 6), REDUCE(sym_except_clause, 6), REDUCE(sym_class_definition, 7),
    [1665] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_elif_clause, 4), SHIFT(680),
    [1668] = {.count = 4, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_elif_clause, 4), REDUCE(sym_except_clause, 4), REDUCE(sym_except_clause, 6), SHIFT(681),
    [1673] = {.count = 3, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_except_clause, 4), REDUCE(sym_except_clause, 6), SHIFT(686),
    [1677] = {.count = 4, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_else_clause, 3), REDUCE(sym_except_clause, 4), REDUCE(sym_except_clause, 6), SHIFT(687),
    [1682] = {.count = 13, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_else_clause, 3), REDUCE(sym_finally_clause, 3), REDUCE(sym_if_statement, 4), REDUCE(sym_elif_clause, 4), REDUCE(sym_while_statement, 4), REDUCE(sym_except_clause, 4), REDUCE(sym_with_statement, 4), REDUCE(sym_class_definition, 4), REDUCE(sym_with_statement, 5), REDUCE(sym_function_definition, 5), REDUCE(sym_for_statement, 6), REDUCE(sym_except_clause, 6), REDUCE(sym_class_definition, 7),
    [1696] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(809),
    [1698] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(768),
    [1700] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(683),
    [1702] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_return_statement, 2), REDUCE(sym_delete_statement, 2),
    [1705] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(805),
    [1707] = {.count = 4, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__import_list, 1), REDUCE(aux_sym__import_list_repeat1, 2), REDUCE(aux_sym__import_list_repeat1, 3), SHIFT(365),
    [1712] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE_FRAGILE(sym_unary_operator, 2), REDUCE_FRAGILE(sym_binary_operator, 3), SHIFT(33),
    [1716] = {.count = 12, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_expression_list, 1), REDUCE_FRAGILE(sym_unary_operator, 2), REDUCE(sym_list_splat_argument, 2), REDUCE(sym_dictionary_splat_argument, 2), REDUCE(aux_sym_print_statement_repeat1, 2), REDUCE(aux_sym_call_repeat2, 2), REDUCE(sym_default_parameter, 3), REDUCE_FRAGILE(sym_binary_operator, 3), REDUCE(sym_keyword_argument, 3), REDUCE(aux_sym_print_statement_repeat1, 3), REDUCE(aux_sym_call_repeat2, 3), SHIFT(777),
    [1729] = {.count = 15, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_with_item, 1), REDUCE_FRAGILE(sym_unary_operator, 2), REDUCE(sym_list_splat_argument, 2), REDUCE(aux_sym_print_statement_repeat1, 2), REDUCE(aux_sym_subscript_repeat1, 2), REDUCE(aux_sym_call_repeat2, 2), REDUCE(sym_with_item, 3), REDUCE(sym_default_parameter, 3), REDUCE_FRAGILE(sym_binary_operator, 3), REDUCE(sym_keyword_argument, 3), REDUCE(sym_pair, 3), REDUCE(aux_sym_print_statement_repeat1, 3), REDUCE(aux_sym_subscript_repeat1, 3), REDUCE(aux_sym_call_repeat2, 3), SHIFT(778),
    [1745] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE_FRAGILE(sym_unary_operator, 2), REDUCE_FRAGILE(sym_binary_operator, 3), SHIFT(779),
    [1749] = {.count = 3, .reusable = true, .depends_on_lookahead = true}, REDUCE_FRAGILE(sym_unary_operator, 2), REDUCE_FRAGILE(sym_binary_operator, 3), SHIFT(692),
    [1753] = {.count = 8, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_with_item, 1), REDUCE(sym_expression_list, 1), REDUCE_FRAGILE(sym_unary_operator, 2), REDUCE(aux_sym_print_statement_repeat1, 2), REDUCE(sym_with_item, 3), REDUCE_FRAGILE(sym_binary_operator, 3), REDUCE(aux_sym_print_statement_repeat1, 3), SHIFT(780),
    [1762] = {.count = 4, .reusable = true, .depends_on_lookahead = false}, REDUCE_FRAGILE(sym_unary_operator, 2), REDUCE_FRAGILE(sym_binary_operator, 3), REDUCE(sym_pair, 3), SHIFT(781),
    [1767] = {.count = 5, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_expression_list, 1), REDUCE_FRAGILE(sym_unary_operator, 2), REDUCE(aux_sym_print_statement_repeat1, 2), REDUCE_FRAGILE(sym_binary_operator, 3), REDUCE(aux_sym_print_statement_repeat1, 3),
    [1773] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE_FRAGILE(sym_unary_operator, 2), REDUCE_FRAGILE(sym_binary_operator, 3), SHIFT(692),
    [1777] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE_FRAGILE(sym_unary_operator, 2), REDUCE_FRAGILE(sym_binary_operator, 3), SHIFT(40),
    [1781] = {.count = 7, .reusable = true, .depends_on_lookahead = false}, REDUCE_FRAGILE(sym_unary_operator, 2), REDUCE(aux_sym_print_statement_repeat1, 2), REDUCE(aux_sym_subscript_repeat1, 2), REDUCE_FRAGILE(sym_binary_operator, 3), REDUCE(aux_sym_print_statement_repeat1, 3), REDUCE(aux_sym_subscript_repeat1, 3), SHIFT(782),
    [1789] = {.count = 6, .reusable = true, .depends_on_lookahead = false}, REDUCE_FRAGILE(sym_unary_operator, 2), REDUCE(aux_sym_print_statement_repeat1, 2), REDUCE_FRAGILE(sym_binary_operator, 3), REDUCE(sym_pair, 3), REDUCE(aux_sym_print_statement_repeat1, 3), SHIFT(783),
    [1796] = {.count = 7, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_expression_statement, 1), REDUCE(sym_expression_list, 1), REDUCE(sym_print_statement, 2), REDUCE_FRAGILE(sym_unary_operator, 2), REDUCE(aux_sym_print_statement_repeat1, 2), REDUCE_FRAGILE(sym_binary_operator, 3), REDUCE(aux_sym_print_statement_repeat1, 3),
    [1804] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_call_repeat2, 2), REDUCE(aux_sym_call_repeat2, 3), SHIFT(772),
    [1808] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_call_repeat2, 2), REDUCE(aux_sym_call_repeat2, 3), SHIFT(776),
    [1812] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(772),
    [1814] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(773),
    [1816] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(771),
    [1818] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_dictionary_repeat1, 2), REDUCE(aux_sym_dictionary_repeat1, 3), SHIFT(326),
    [1822] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_dictionary_repeat1, 2), REDUCE(aux_sym_dictionary_repeat1, 3), SHIFT(328),
    [1826] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(678),
    [1828] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(761),
    [1830] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(684),
    [1832] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(685),
    [1834] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(688),
    [1836] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(689),
    [1838] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(691),
    [1840] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(746),
    [1842] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_expression_list, 2), SHIFT(372),
    [1845] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(755),
    [1847] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_expression_list, 2), REDUCE(sym_print_statement, 3),
    [1850] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(680),
    [1852] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(681),
    [1854] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(686),
    [1856] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(741),
    [1858] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(689),
    [1860] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(691),
    [1862] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(736),
    [1864] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(737),
    [1866] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_call, 5), REDUCE(sym_call, 6),
    [1869] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_call, 5), REDUCE(sym_call, 6),
    [1872] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(739),
    [1874] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_call, 7), REDUCE(sym_call, 8),
    [1877] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_call, 7), REDUCE(sym_call, 8),
    [1880] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(756),
    [1882] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(758),
    [1884] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(758),
    [1886] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE_FRAGILE(sym_binary_operator, 3), SHIFT(33),
    [1889] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE_FRAGILE(sym_binary_operator, 3), SHIFT(758),
    [1892] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE_FRAGILE(sym_binary_operator, 3), SHIFT(758),
    [1895] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE_FRAGILE(sym_binary_operator, 3), SHIFT(40),
    [1898] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE_FRAGILE(sym_unary_operator, 2), SHIFT(33),
    [1901] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE_FRAGILE(sym_unary_operator, 2), SHIFT(758),
    [1904] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE_FRAGILE(sym_unary_operator, 2), SHIFT(758),
    [1907] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE_FRAGILE(sym_unary_operator, 2), SHIFT(40),
    [1910] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(764),
    [1912] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(766),
    [1914] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_call, 4), REDUCE(sym_call, 5),
    [1917] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_call, 4), REDUCE(sym_call, 5),
    [1920] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(775),
    [1922] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_call, 6), REDUCE(sym_call, 7),
    [1925] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_call, 6), REDUCE(sym_call, 7),
    [1928] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_call_repeat1, 2), REDUCE(aux_sym_call_repeat1, 3),
    [1931] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_call_repeat1, 2), REDUCE(aux_sym_call_repeat1, 3),
    [1934] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_call_repeat1, 2), REDUCE(aux_sym_call_repeat1, 3),
    [1937] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_arguments, 3), REDUCE(sym_call, 4), REDUCE(sym_call, 5),
    [1941] = {.count = 3, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_call_repeat1, 2), REDUCE(aux_sym_call_repeat1, 3), SHIFT(756),
    [1945] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(803),
    [1947] = {.count = 3, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_call_repeat1, 2), REDUCE(aux_sym_call_repeat1, 3), SHIFT(19),
    [1951] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_list, 3), REDUCE(sym_subscript, 4), REDUCE(sym_list_comprehension, 7),
    [1955] = {.count = 3, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_list, 3), REDUCE(sym_subscript, 4), REDUCE(sym_list_comprehension, 7),
    [1959] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_set, 3), REDUCE(sym_dictionary_comprehension, 7), REDUCE(sym_set_comprehension, 7),
    [1963] = {.count = 3, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_set, 3), REDUCE(sym_dictionary_comprehension, 7), REDUCE(sym_set_comprehension, 7),
    [1967] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE_FRAGILE(sym_binary_operator, 3), SHIFT(692),
    [1970] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE_FRAGILE(sym_binary_operator, 3), SHIFT(692),
    [1973] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(786),
    [1975] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(787),
    [1977] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(789),
    [1979] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(789),
    [1981] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE_FRAGILE(sym_binary_operator, 3), SHIFT(47),
    [1984] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE_FRAGILE(sym_binary_operator, 3), SHIFT(789),
    [1987] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE_FRAGILE(sym_binary_operator, 3), SHIFT(789),
    [1990] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE_FRAGILE(sym_binary_operator, 3), SHIFT(55),
    [1993] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE_FRAGILE(sym_unary_operator, 2), SHIFT(47),
    [1996] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE_FRAGILE(sym_unary_operator, 2), SHIFT(789),
    [1999] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE_FRAGILE(sym_unary_operator, 2), SHIFT(789),
    [2002] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE_FRAGILE(sym_unary_operator, 2), SHIFT(55),
    [2005] = {.count = 5, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_if_statement, 4), REDUCE(sym_elif_clause, 4), REDUCE(sym_while_statement, 4), REDUCE(sym_except_clause, 4), REDUCE(sym_except_clause, 6),
    [2011] = {.count = 5, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_if_statement, 4), REDUCE(sym_elif_clause, 4), REDUCE(sym_while_statement, 4), REDUCE(sym_except_clause, 4), REDUCE(sym_except_clause, 6),
    [2017] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_except_clause, 4), REDUCE(sym_except_clause, 6),
    [2020] = {.count = 5, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_if_statement, 4), REDUCE(sym_elif_clause, 4), REDUCE(sym_while_statement, 4), REDUCE(sym_except_clause, 4), REDUCE(sym_except_clause, 6),
    [2026] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(795),
    [2028] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(795),
    [2030] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE_FRAGILE(sym_binary_operator, 3), SHIFT(795),
    [2033] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE_FRAGILE(sym_binary_operator, 3), SHIFT(795),
    [2036] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_if_statement, 5), REDUCE(sym_while_statement, 5),
    [2039] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_if_statement, 5), REDUCE(sym_while_statement, 5),
    [2042] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_if_statement, 5), REDUCE(sym_while_statement, 5),
    [2045] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE_FRAGILE(sym_unary_operator, 2), SHIFT(795),
    [2048] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE_FRAGILE(sym_unary_operator, 2), SHIFT(795),
    [2051] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_with_item, 3), SHIFT(801),
    [2054] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_list, 4), REDUCE(sym_subscript, 5),
    [2057] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_list, 4), REDUCE(sym_subscript, 5),
    [2060] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_print_statement_repeat1, 2), REDUCE(aux_sym_subscript_repeat1, 2),
    [2063] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_print_statement_repeat1, 2), SHIFT(801),
    [2066] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_import_from_statement, 6), REDUCE(sym_import_from_statement, 7),
    [2069] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(810),
    [2071] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_if_statement, 5), REDUCE(sym_while_statement, 5), REDUCE(sym_for_statement, 7),
    [2075] = {.count = 3, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_if_statement, 5), REDUCE(sym_while_statement, 5), REDUCE(sym_for_statement, 7),
    [2079] = {.count = 3, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_if_statement, 5), REDUCE(sym_while_statement, 5), REDUCE(sym_for_statement, 7),
    [2083] = {.count = 4, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_parameters, 3), REDUCE(sym_parameters, 4), REDUCE(sym_parameters, 5), REDUCE(sym_parameters, 6),
    [2088] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_parameters, 3), REDUCE(sym_parameters, 4),
    [2091] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(819),
    [2093] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_parameters, 5), REDUCE(sym_parameters, 6),
    [2096] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(821),
    [2098] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_parameters_repeat1, 2), REDUCE(aux_sym_parameters_repeat1, 3),
    [2101] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_parameters_repeat1, 2), REDUCE(aux_sym_parameters_repeat1, 3),
    [2104] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_parameters, 4), REDUCE(sym_parameters, 5),
    [2107] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(830),
    [2109] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__expression, 1), SHIFT(447),
    [2112] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__expression, 1), SHIFT(450),
    [2115] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(833),
    [2117] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(834),
    [2119] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_list, 3), REDUCE(sym_subscript, 4),
    [2122] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_list, 3), REDUCE(sym_subscript, 4),
    [2125] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE_FRAGILE(sym_unary_operator, 2), SHIFT(692),
    [2128] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE_FRAGILE(sym_unary_operator, 2), SHIFT(692),
    [2131] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_dictionary_splat_argument, 2), REDUCE_FRAGILE(sym_binary_operator, 3),
    [2134] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(839),
    [2136] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(828),
    [2138] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_default_parameter, 3), REDUCE(sym_keyword_argument, 3),
    [2141] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(824),
    [2143] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(846),
    [2145] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(847),
    [2147] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(801),
    [2149] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(686),
    [2151] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(687),
    [2153] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(853),
    [2155] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(858),
    [2157] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(858),
    [2159] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(859),
    [2161] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_dictionary_comprehension, 7), REDUCE(sym_set_comprehension, 7),
    [2164] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_dictionary_comprehension, 7), REDUCE(sym_set_comprehension, 7),
    [2167] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE_FRAGILE(sym_binary_operator, 3), SHIFT(858),
    [2170] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE_FRAGILE(sym_binary_operator, 3), SHIFT(858),
    [2173] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE_FRAGILE(sym_unary_operator, 2), SHIFT(858),
    [2176] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE_FRAGILE(sym_unary_operator, 2), SHIFT(858),
    [2179] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(864),
    [2181] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(867),
    [2183] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__expression, 1), REDUCE(sym_list_splat_parameter, 2), REDUCE(sym_dictionary_splat_parameter, 3),
    [2187] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__expression, 1), REDUCE(sym_list_splat_parameter, 2),
    [2190] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_list_splat_argument, 2), REDUCE_FRAGILE(sym_binary_operator, 3),
    [2193] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__expression, 1), REDUCE(sym_aliased_import, 3),
    [2196] = {.count = 4, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_parameters, 4), REDUCE(sym_parameters, 5), REDUCE(sym_call, 5), REDUCE(sym_call, 6),
    [2201] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(874),
    [2203] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_subscript_repeat1, 2), REDUCE(aux_sym_subscript_repeat1, 3),
    [2206] = {.count = 4, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_list, 4), REDUCE(sym_subscript, 5), REDUCE(sym_list, 5), REDUCE(sym_subscript, 6),
    [2211] = {.count = 4, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_list, 4), REDUCE(sym_subscript, 5), REDUCE(sym_list, 5), REDUCE(sym_subscript, 6),
    [2216] = {.count = 4, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_dictionary, 4), REDUCE(sym_set, 4), REDUCE(sym_dictionary, 5), REDUCE(sym_set, 5),
    [2221] = {.count = 4, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_dictionary, 4), REDUCE(sym_set, 4), REDUCE(sym_dictionary, 5), REDUCE(sym_set, 5),
    [2226] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_dotted_name, 1), REDUCE(sym__expression, 1),
    [2229] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym__import_list_repeat1, 2), REDUCE(aux_sym__import_list_repeat1, 3),
    [2232] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_with_statement_repeat1, 2), REDUCE(aux_sym_with_statement_repeat1, 3),
    [2235] = {.count = 4, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_print_statement_repeat1, 2), REDUCE(aux_sym_call_repeat2, 2), REDUCE(aux_sym_print_statement_repeat1, 3), REDUCE(aux_sym_call_repeat2, 3),
    [2240] = {.count = 7, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_with_item, 1), REDUCE(aux_sym_print_statement_repeat1, 2), REDUCE(aux_sym_subscript_repeat1, 2), REDUCE(aux_sym_call_repeat2, 2), REDUCE(aux_sym_print_statement_repeat1, 3), REDUCE(aux_sym_subscript_repeat1, 3), REDUCE(aux_sym_call_repeat2, 3),
    [2248] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(887),
    [2250] = {.count = 4, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_with_item, 1), REDUCE(aux_sym_print_statement_repeat1, 2), REDUCE(aux_sym_print_statement_repeat1, 3), SHIFT(888),
    [2255] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_print_statement_repeat1, 2), REDUCE(aux_sym_print_statement_repeat1, 3),
    [2258] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(887),
    [2260] = {.count = 4, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_print_statement_repeat1, 2), REDUCE(aux_sym_subscript_repeat1, 2), REDUCE(aux_sym_print_statement_repeat1, 3), REDUCE(aux_sym_subscript_repeat1, 3),
    [2265] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_call_repeat2, 2), REDUCE(aux_sym_call_repeat2, 3),
    [2268] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(886),
    [2270] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_dictionary_repeat1, 2), REDUCE(aux_sym_dictionary_repeat1, 3),
    [2273] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_call, 6), REDUCE(sym_call, 7), REDUCE(sym_call, 8),
    [2277] = {.count = 3, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_call, 6), REDUCE(sym_call, 7), REDUCE(sym_call, 8),
    [2281] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(890),
    [2283] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE_FRAGILE(sym_binary_operator, 3), SHIFT(887),
    [2286] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE_FRAGILE(sym_binary_operator, 3), SHIFT(887),
    [2289] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(892),
    [2291] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(892),
    [2293] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE_FRAGILE(sym_binary_operator, 3), SHIFT(892),
    [2296] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE_FRAGILE(sym_binary_operator, 3), SHIFT(892),
    [2299] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE_FRAGILE(sym_unary_operator, 2), SHIFT(892),
    [2302] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE_FRAGILE(sym_unary_operator, 2), SHIFT(892),
    [2305] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE_FRAGILE(sym_unary_operator, 2), SHIFT(887),
    [2308] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE_FRAGILE(sym_unary_operator, 2), SHIFT(887),
    [2311] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(902),
    [2313] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_dotted_name, 1), REDUCE(sym__expression, 1), SHIFT(447),
    [2317] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_dotted_name, 1), REDUCE(sym__expression, 1), SHIFT(450),
    [2321] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_expression_list, 1), SHIFT(899),
    [2324] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(900),
    [2326] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_arguments, 3), REDUCE(sym_call, 4),
    [2329] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_call_repeat1, 2), SHIFT(81),
    [2332] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_call_repeat1, 2), SHIFT(42),
    [2335] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_call_repeat1, 2), SHIFT(44),
    [2338] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_call_repeat1, 2), SHIFT(45),
    [2341] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_call_repeat1, 2), SHIFT(45),
    [2344] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_dotted_name_repeat1, 2), REDUCE(aux_sym_dotted_name_repeat1, 3),
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
