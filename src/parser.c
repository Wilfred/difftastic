#include <tree_sitter/parser.h>

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"

#define STATE_COUNT 862
#define SYMBOL_COUNT 113
#define TOKEN_COUNT 53
#define EXTERNAL_TOKEN_COUNT 3

enum {
    anon_sym_SEMI = 1,
    anon_sym_import = 2,
    anon_sym_COMMA = 3,
    anon_sym_as = 4,
    anon_sym_print = 5,
    anon_sym_return = 6,
    anon_sym_del = 7,
    sym_pass_statement = 8,
    sym_break_statement = 9,
    sym_continue_statement = 10,
    anon_sym_if = 11,
    anon_sym_COLON = 12,
    anon_sym_elif = 13,
    anon_sym_else = 14,
    anon_sym_for = 15,
    anon_sym_in = 16,
    anon_sym_while = 17,
    anon_sym_try = 18,
    anon_sym_except = 19,
    anon_sym_finally = 20,
    anon_sym_with = 21,
    anon_sym_def = 22,
    anon_sym_LPAREN = 23,
    anon_sym_RPAREN = 24,
    anon_sym_EQ = 25,
    anon_sym_STAR = 26,
    anon_sym_class = 27,
    anon_sym_AT = 28,
    anon_sym_DOT = 29,
    anon_sym_PLUS = 30,
    anon_sym_DASH = 31,
    anon_sym_SLASH = 32,
    anon_sym_STAR_STAR = 33,
    anon_sym_PIPE = 34,
    anon_sym_AMP = 35,
    anon_sym_CARET = 36,
    anon_sym_LT_LT = 37,
    anon_sym_GT_GT = 38,
    anon_sym_and = 39,
    anon_sym_or = 40,
    anon_sym_not = 41,
    anon_sym_LBRACK = 42,
    anon_sym_DOT_DOT_DOT = 43,
    anon_sym_RBRACK = 44,
    anon_sym_LBRACE = 45,
    anon_sym_RBRACE = 46,
    sym_number = 47,
    sym_identifier = 48,
    sym_comment = 49,
    sym__newline = 50,
    sym__indent = 51,
    sym__dedent = 52,
    sym_module = 53,
    sym__statement = 54,
    sym__simple_statement = 55,
    sym_import_statement = 56,
    sym_aliased_import = 57,
    sym_print_statement = 58,
    sym_expression_statement = 59,
    sym_return_statement = 60,
    sym_delete_statement = 61,
    sym__compound_statement = 62,
    sym_if_statement = 63,
    sym_elif_clause = 64,
    sym_else_clause = 65,
    sym_for_statement = 66,
    sym_while_statement = 67,
    sym_try_statement = 68,
    sym_except_clause = 69,
    sym_finally_clause = 70,
    sym_with_statement = 71,
    sym_with_item = 72,
    sym_function_definition = 73,
    sym_parameters = 74,
    sym_default_parameter = 75,
    sym_list_splat_parameter = 76,
    sym_dictionary_splat_parameter = 77,
    sym_class_definition = 78,
    sym_decorated_definition = 79,
    sym_decorator = 80,
    sym__suite = 81,
    sym_arguments = 82,
    sym_expression_list = 83,
    sym_dotted_name = 84,
    sym__expression = 85,
    sym_binary_operator = 86,
    sym_unary_operator = 87,
    sym_subscript = 88,
    sym_call = 89,
    sym_keyword_argument = 90,
    sym_list_splat_argument = 91,
    sym_dictionary_splat_argument = 92,
    sym_list = 93,
    sym_list_comprehension = 94,
    sym_dictionary = 95,
    sym_dictionary_comprehension = 96,
    sym_pair = 97,
    sym_set = 98,
    sym_set_comprehension = 99,
    aux_sym_module_repeat1 = 100,
    aux_sym_import_statement_repeat1 = 101,
    aux_sym_print_statement_repeat1 = 102,
    aux_sym_if_statement_repeat1 = 103,
    aux_sym_try_statement_repeat1 = 104,
    aux_sym_with_statement_repeat1 = 105,
    aux_sym_parameters_repeat1 = 106,
    aux_sym_decorated_definition_repeat1 = 107,
    aux_sym_dotted_name_repeat1 = 108,
    aux_sym_subscript_repeat1 = 109,
    aux_sym_call_repeat1 = 110,
    aux_sym_call_repeat2 = 111,
    aux_sym_dictionary_repeat1 = 112,
};

static const char *ts_symbol_names[] = {
    [ts_builtin_sym_end] = "END",
    [anon_sym_SEMI] = ";",
    [anon_sym_import] = "import",
    [anon_sym_COMMA] = ",",
    [anon_sym_as] = "as",
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
    [anon_sym_LPAREN] = "(",
    [anon_sym_RPAREN] = ")",
    [anon_sym_EQ] = "=",
    [anon_sym_STAR] = "*",
    [anon_sym_class] = "class",
    [anon_sym_AT] = "@",
    [anon_sym_DOT] = ".",
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
    [sym_aliased_import] = "aliased_import",
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
    [aux_sym_import_statement_repeat1] = "import_statement_repeat1",
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
    [anon_sym_EQ] = {
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
    [anon_sym_DOT] = {
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
    [sym_aliased_import] = {
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
    [aux_sym_import_statement_repeat1] = {
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
                ADVANCE(75);
            if (lookahead == 'n')
                ADVANCE(83);
            if (lookahead == 'o')
                ADVANCE(86);
            if (lookahead == 'p')
                ADVANCE(88);
            if (lookahead == 'r')
                ADVANCE(96);
            if (lookahead == 't')
                ADVANCE(102);
            if (lookahead == 'w')
                ADVANCE(105);
            if (lookahead == '{')
                ADVANCE(113);
            if (lookahead == '|')
                ADVANCE(114);
            if (lookahead == '}')
                ADVANCE(115);
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
                ('p' <= lookahead && lookahead <= 'z'))
                ADVANCE(26);
            if (lookahead == 'i')
                ADVANCE(67);
            if (lookahead == 'o')
                ADVANCE(73);
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
                ('a' <= lookahead && lookahead <= 'e') ||
                ('g' <= lookahead && lookahead <= 'l') ||
                ('o' <= lookahead && lookahead <= 'z'))
                ADVANCE(26);
            if (lookahead == 'f')
                ADVANCE(76);
            if (lookahead == 'm')
                ADVANCE(77);
            if (lookahead == 'n')
                ADVANCE(82);
            ACCEPT_TOKEN(sym_identifier);
        case 76:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(26);
            ACCEPT_TOKEN(anon_sym_if);
        case 77:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'o') ||
                ('q' <= lookahead && lookahead <= 'z'))
                ADVANCE(26);
            if (lookahead == 'p')
                ADVANCE(78);
            ACCEPT_TOKEN(sym_identifier);
        case 78:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'n') ||
                ('p' <= lookahead && lookahead <= 'z'))
                ADVANCE(26);
            if (lookahead == 'o')
                ADVANCE(79);
            ACCEPT_TOKEN(sym_identifier);
        case 79:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'q') ||
                ('s' <= lookahead && lookahead <= 'z'))
                ADVANCE(26);
            if (lookahead == 'r')
                ADVANCE(80);
            ACCEPT_TOKEN(sym_identifier);
        case 80:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 's') ||
                ('u' <= lookahead && lookahead <= 'z'))
                ADVANCE(26);
            if (lookahead == 't')
                ADVANCE(81);
            ACCEPT_TOKEN(sym_identifier);
        case 81:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(26);
            ACCEPT_TOKEN(anon_sym_import);
        case 82:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(26);
            ACCEPT_TOKEN(anon_sym_in);
        case 83:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'n') ||
                ('p' <= lookahead && lookahead <= 'z'))
                ADVANCE(26);
            if (lookahead == 'o')
                ADVANCE(84);
            ACCEPT_TOKEN(sym_identifier);
        case 84:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 's') ||
                ('u' <= lookahead && lookahead <= 'z'))
                ADVANCE(26);
            if (lookahead == 't')
                ADVANCE(85);
            ACCEPT_TOKEN(sym_identifier);
        case 85:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(26);
            ACCEPT_TOKEN(anon_sym_not);
        case 86:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'q') ||
                ('s' <= lookahead && lookahead <= 'z'))
                ADVANCE(26);
            if (lookahead == 'r')
                ADVANCE(87);
            ACCEPT_TOKEN(sym_identifier);
        case 87:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(26);
            ACCEPT_TOKEN(anon_sym_or);
        case 88:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('b' <= lookahead && lookahead <= 'q') ||
                ('s' <= lookahead && lookahead <= 'z'))
                ADVANCE(26);
            if (lookahead == 'a')
                ADVANCE(89);
            if (lookahead == 'r')
                ADVANCE(92);
            ACCEPT_TOKEN(sym_identifier);
        case 89:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'r') ||
                ('t' <= lookahead && lookahead <= 'z'))
                ADVANCE(26);
            if (lookahead == 's')
                ADVANCE(90);
            ACCEPT_TOKEN(sym_identifier);
        case 90:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'r') ||
                ('t' <= lookahead && lookahead <= 'z'))
                ADVANCE(26);
            if (lookahead == 's')
                ADVANCE(91);
            ACCEPT_TOKEN(sym_identifier);
        case 91:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(26);
            ACCEPT_TOKEN(sym_pass_statement);
        case 92:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'h') ||
                ('j' <= lookahead && lookahead <= 'z'))
                ADVANCE(26);
            if (lookahead == 'i')
                ADVANCE(93);
            ACCEPT_TOKEN(sym_identifier);
        case 93:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'm') ||
                ('o' <= lookahead && lookahead <= 'z'))
                ADVANCE(26);
            if (lookahead == 'n')
                ADVANCE(94);
            ACCEPT_TOKEN(sym_identifier);
        case 94:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 's') ||
                ('u' <= lookahead && lookahead <= 'z'))
                ADVANCE(26);
            if (lookahead == 't')
                ADVANCE(95);
            ACCEPT_TOKEN(sym_identifier);
        case 95:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(26);
            ACCEPT_TOKEN(anon_sym_print);
        case 96:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'z'))
                ADVANCE(26);
            if (lookahead == 'e')
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
                ('a' <= lookahead && lookahead <= 't') ||
                ('v' <= lookahead && lookahead <= 'z'))
                ADVANCE(26);
            if (lookahead == 'u')
                ADVANCE(99);
            ACCEPT_TOKEN(sym_identifier);
        case 99:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'q') ||
                ('s' <= lookahead && lookahead <= 'z'))
                ADVANCE(26);
            if (lookahead == 'r')
                ADVANCE(100);
            ACCEPT_TOKEN(sym_identifier);
        case 100:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'm') ||
                ('o' <= lookahead && lookahead <= 'z'))
                ADVANCE(26);
            if (lookahead == 'n')
                ADVANCE(101);
            ACCEPT_TOKEN(sym_identifier);
        case 101:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(26);
            ACCEPT_TOKEN(anon_sym_return);
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
                ('a' <= lookahead && lookahead <= 'x') ||
                (lookahead == 'z'))
                ADVANCE(26);
            if (lookahead == 'y')
                ADVANCE(104);
            ACCEPT_TOKEN(sym_identifier);
        case 104:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(26);
            ACCEPT_TOKEN(anon_sym_try);
        case 105:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'g') ||
                ('j' <= lookahead && lookahead <= 'z'))
                ADVANCE(26);
            if (lookahead == 'h')
                ADVANCE(106);
            if (lookahead == 'i')
                ADVANCE(110);
            ACCEPT_TOKEN(sym_identifier);
        case 106:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'h') ||
                ('j' <= lookahead && lookahead <= 'z'))
                ADVANCE(26);
            if (lookahead == 'i')
                ADVANCE(107);
            ACCEPT_TOKEN(sym_identifier);
        case 107:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'k') ||
                ('m' <= lookahead && lookahead <= 'z'))
                ADVANCE(26);
            if (lookahead == 'l')
                ADVANCE(108);
            ACCEPT_TOKEN(sym_identifier);
        case 108:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'z'))
                ADVANCE(26);
            if (lookahead == 'e')
                ADVANCE(109);
            ACCEPT_TOKEN(sym_identifier);
        case 109:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(26);
            ACCEPT_TOKEN(anon_sym_while);
        case 110:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 's') ||
                ('u' <= lookahead && lookahead <= 'z'))
                ADVANCE(26);
            if (lookahead == 't')
                ADVANCE(111);
            ACCEPT_TOKEN(sym_identifier);
        case 111:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'g') ||
                ('i' <= lookahead && lookahead <= 'z'))
                ADVANCE(26);
            if (lookahead == 'h')
                ADVANCE(112);
            ACCEPT_TOKEN(sym_identifier);
        case 112:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(26);
            ACCEPT_TOKEN(anon_sym_with);
        case 113:
            ACCEPT_TOKEN(anon_sym_LBRACE);
        case 114:
            ACCEPT_TOKEN(anon_sym_PIPE);
        case 115:
            ACCEPT_TOKEN(anon_sym_RBRACE);
        case 116:
            if (lookahead == 0)
                ADVANCE(1);
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(116);
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
                ADVANCE(117);
            if (lookahead == 'i')
                ADVANCE(118);
            if (lookahead == 'n')
                ADVANCE(83);
            if (lookahead == 'p')
                ADVANCE(88);
            if (lookahead == 'r')
                ADVANCE(96);
            if (lookahead == 't')
                ADVANCE(102);
            if (lookahead == 'w')
                ADVANCE(105);
            if (lookahead == '{')
                ADVANCE(113);
            LEX_ERROR();
        case 117:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'n') ||
                ('p' <= lookahead && lookahead <= 'z'))
                ADVANCE(26);
            if (lookahead == 'o')
                ADVANCE(73);
            ACCEPT_TOKEN(sym_identifier);
        case 118:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'e') ||
                ('g' <= lookahead && lookahead <= 'l') ||
                ('n' <= lookahead && lookahead <= 'z'))
                ADVANCE(26);
            if (lookahead == 'f')
                ADVANCE(76);
            if (lookahead == 'm')
                ADVANCE(77);
            ACCEPT_TOKEN(sym_identifier);
        case 119:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(119);
            if (lookahead == '#')
                ADVANCE(2);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(26);
            LEX_ERROR();
        case 120:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(120);
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
                ADVANCE(83);
            if (lookahead == '{')
                ADVANCE(113);
            LEX_ERROR();
        case 121:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(121);
            if (lookahead == '#')
                ADVANCE(2);
            LEX_ERROR();
        case 122:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(122);
            if (lookahead == '#')
                ADVANCE(2);
            if (lookahead == ':')
                ADVANCE(18);
            LEX_ERROR();
        case 123:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(123);
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
                ADVANCE(83);
            if (lookahead == '{')
                ADVANCE(113);
            LEX_ERROR();
        case 124:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(124);
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
                ADVANCE(83);
            if (lookahead == '{')
                ADVANCE(113);
            if (lookahead == '}')
                ADVANCE(115);
            LEX_ERROR();
        case 125:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(125);
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
                ADVANCE(126);
            if (lookahead == 'f')
                ADVANCE(130);
            if (lookahead == 'i')
                ADVANCE(133);
            if (lookahead == 'o')
                ADVANCE(135);
            if (lookahead == '|')
                ADVANCE(114);
            if (lookahead == '}')
                ADVANCE(115);
            LEX_ERROR();
        case 126:
            if (lookahead == 'n')
                ADVANCE(127);
            if (lookahead == 's')
                ADVANCE(129);
            LEX_ERROR();
        case 127:
            if (lookahead == 'd')
                ADVANCE(128);
            LEX_ERROR();
        case 128:
            ACCEPT_TOKEN(anon_sym_and);
        case 129:
            ACCEPT_TOKEN(anon_sym_as);
        case 130:
            if (lookahead == 'o')
                ADVANCE(131);
            LEX_ERROR();
        case 131:
            if (lookahead == 'r')
                ADVANCE(132);
            LEX_ERROR();
        case 132:
            ACCEPT_TOKEN(anon_sym_for);
        case 133:
            if (lookahead == 'n')
                ADVANCE(134);
            LEX_ERROR();
        case 134:
            ACCEPT_TOKEN(anon_sym_in);
        case 135:
            if (lookahead == 'r')
                ADVANCE(136);
            LEX_ERROR();
        case 136:
            ACCEPT_TOKEN(anon_sym_or);
        case 137:
            if (lookahead == 0)
                ADVANCE(1);
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(137);
            if (lookahead == '#')
                ADVANCE(2);
            LEX_ERROR();
        case 138:
            if (lookahead == 0)
                ADVANCE(1);
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(138);
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
                ADVANCE(117);
            if (lookahead == 'i')
                ADVANCE(118);
            if (lookahead == 'n')
                ADVANCE(83);
            if (lookahead == 'p')
                ADVANCE(88);
            if (lookahead == 'r')
                ADVANCE(96);
            if (lookahead == 't')
                ADVANCE(102);
            if (lookahead == 'w')
                ADVANCE(105);
            if (lookahead == '{')
                ADVANCE(113);
            LEX_ERROR();
        case 139:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(139);
            if (lookahead == '#')
                ADVANCE(2);
            if (lookahead == '@')
                ADVANCE(25);
            if (lookahead == 'c')
                ADVANCE(140);
            if (lookahead == 'd')
                ADVANCE(145);
            LEX_ERROR();
        case 140:
            if (lookahead == 'l')
                ADVANCE(141);
            LEX_ERROR();
        case 141:
            if (lookahead == 'a')
                ADVANCE(142);
            LEX_ERROR();
        case 142:
            if (lookahead == 's')
                ADVANCE(143);
            LEX_ERROR();
        case 143:
            if (lookahead == 's')
                ADVANCE(144);
            LEX_ERROR();
        case 144:
            ACCEPT_TOKEN(anon_sym_class);
        case 145:
            if (lookahead == 'e')
                ADVANCE(146);
            LEX_ERROR();
        case 146:
            if (lookahead == 'f')
                ADVANCE(147);
            LEX_ERROR();
        case 147:
            ACCEPT_TOKEN(anon_sym_def);
        case 148:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(148);
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
                ADVANCE(149);
            if (lookahead == 'o')
                ADVANCE(135);
            if (lookahead == '|')
                ADVANCE(114);
            LEX_ERROR();
        case 149:
            if (lookahead == 'n')
                ADVANCE(127);
            LEX_ERROR();
        case 150:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(150);
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
                ADVANCE(83);
            if (lookahead == '{')
                ADVANCE(113);
            LEX_ERROR();
        case 151:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(151);
            if (lookahead == '#')
                ADVANCE(2);
            if (lookahead == '.')
                ADVANCE(152);
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(16);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'm') ||
                ('o' <= lookahead && lookahead <= 'z'))
                ADVANCE(26);
            if (lookahead == '[')
                ADVANCE(27);
            if (lookahead == 'n')
                ADVANCE(83);
            if (lookahead == '{')
                ADVANCE(113);
            LEX_ERROR();
        case 152:
            if (lookahead == '.')
                ADVANCE(13);
            LEX_ERROR();
        case 153:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(153);
            if (lookahead == '#')
                ADVANCE(2);
            if (lookahead == ',')
                ADVANCE(10);
            if (lookahead == ']')
                ADVANCE(28);
            LEX_ERROR();
        case 154:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(154);
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
                ADVANCE(149);
            if (lookahead == 'o')
                ADVANCE(135);
            if (lookahead == '|')
                ADVANCE(114);
            LEX_ERROR();
        case 155:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(155);
            if (lookahead == '#')
                ADVANCE(2);
            if (lookahead == '.')
                ADVANCE(152);
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
                ADVANCE(83);
            if (lookahead == '{')
                ADVANCE(113);
            LEX_ERROR();
        case 156:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(156);
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
                ADVANCE(149);
            if (lookahead == 'o')
                ADVANCE(135);
            if (lookahead == '|')
                ADVANCE(114);
            LEX_ERROR();
        case 157:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(157);
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
                ADVANCE(149);
            if (lookahead == 'o')
                ADVANCE(135);
            if (lookahead == '|')
                ADVANCE(114);
            LEX_ERROR();
        case 158:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(158);
            if (lookahead == '#')
                ADVANCE(2);
            if (lookahead == ')')
                ADVANCE(6);
            if (lookahead == ',')
                ADVANCE(10);
            LEX_ERROR();
        case 159:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(159);
            if (lookahead == '#')
                ADVANCE(2);
            if (lookahead == ')')
                ADVANCE(6);
            LEX_ERROR();
        case 160:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(160);
            if (lookahead == '#')
                ADVANCE(2);
            if (lookahead == '*')
                ADVANCE(161);
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(16);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'm') ||
                ('o' <= lookahead && lookahead <= 'z'))
                ADVANCE(26);
            if (lookahead == '[')
                ADVANCE(27);
            if (lookahead == 'n')
                ADVANCE(83);
            if (lookahead == '{')
                ADVANCE(113);
            LEX_ERROR();
        case 161:
            if (lookahead == '*')
                ADVANCE(8);
            LEX_ERROR();
        case 162:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(162);
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
                ADVANCE(83);
            if (lookahead == '{')
                ADVANCE(113);
            LEX_ERROR();
        case 163:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(163);
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
                ADVANCE(149);
            if (lookahead == 'f')
                ADVANCE(130);
            if (lookahead == 'o')
                ADVANCE(135);
            if (lookahead == '|')
                ADVANCE(114);
            if (lookahead == '}')
                ADVANCE(115);
            LEX_ERROR();
        case 164:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(164);
            if (lookahead == '#')
                ADVANCE(2);
            if (lookahead == ',')
                ADVANCE(10);
            if (lookahead == 'f')
                ADVANCE(130);
            if (lookahead == '}')
                ADVANCE(115);
            LEX_ERROR();
        case 165:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(165);
            if (lookahead == '#')
                ADVANCE(2);
            if (lookahead == ',')
                ADVANCE(10);
            if (lookahead == '}')
                ADVANCE(115);
            LEX_ERROR();
        case 166:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(166);
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
                ADVANCE(149);
            if (lookahead == 'o')
                ADVANCE(135);
            if (lookahead == '|')
                ADVANCE(114);
            LEX_ERROR();
        case 167:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(167);
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
                ADVANCE(149);
            if (lookahead == 'o')
                ADVANCE(135);
            if (lookahead == '|')
                ADVANCE(114);
            if (lookahead == '}')
                ADVANCE(115);
            LEX_ERROR();
        case 168:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(168);
            if (lookahead == '#')
                ADVANCE(2);
            if (lookahead == 'i')
                ADVANCE(133);
            LEX_ERROR();
        case 169:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(169);
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
                ADVANCE(149);
            if (lookahead == 'i')
                ADVANCE(133);
            if (lookahead == 'o')
                ADVANCE(135);
            if (lookahead == '|')
                ADVANCE(114);
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
            if (lookahead == 'i')
                ADVANCE(133);
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
            if (lookahead == '<')
                ADVANCE(20);
            if (lookahead == '>')
                ADVANCE(23);
            if (lookahead == '[')
                ADVANCE(27);
            if (lookahead == '^')
                ADVANCE(29);
            if (lookahead == 'a')
                ADVANCE(149);
            if (lookahead == 'o')
                ADVANCE(135);
            if (lookahead == '|')
                ADVANCE(114);
            if (lookahead == '}')
                ADVANCE(115);
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
                ADVANCE(149);
            if (lookahead == 'f')
                ADVANCE(130);
            if (lookahead == 'o')
                ADVANCE(135);
            if (lookahead == '|')
                ADVANCE(114);
            if (lookahead == '}')
                ADVANCE(115);
            LEX_ERROR();
        case 173:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(173);
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
                ADVANCE(149);
            if (lookahead == 'f')
                ADVANCE(130);
            if (lookahead == 'o')
                ADVANCE(135);
            if (lookahead == '|')
                ADVANCE(114);
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
                ADVANCE(149);
            if (lookahead == 'o')
                ADVANCE(135);
            if (lookahead == '|')
                ADVANCE(114);
            LEX_ERROR();
        case 175:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(175);
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
                ADVANCE(149);
            if (lookahead == 'o')
                ADVANCE(135);
            if (lookahead == '|')
                ADVANCE(114);
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
                ADVANCE(149);
            if (lookahead == 'o')
                ADVANCE(135);
            if (lookahead == '|')
                ADVANCE(114);
            LEX_ERROR();
        case 177:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(177);
            if (lookahead == '#')
                ADVANCE(2);
            if (lookahead == '(')
                ADVANCE(5);
            if (lookahead == ',')
                ADVANCE(10);
            if (lookahead == '.')
                ADVANCE(178);
            if (lookahead == 'a')
                ADVANCE(179);
            LEX_ERROR();
        case 178:
            ACCEPT_TOKEN(anon_sym_DOT);
        case 179:
            if (lookahead == 's')
                ADVANCE(129);
            LEX_ERROR();
        case 180:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(180);
            if (lookahead == '#')
                ADVANCE(2);
            if (lookahead == '(')
                ADVANCE(5);
            LEX_ERROR();
        case 181:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(181);
            if (lookahead == '#')
                ADVANCE(2);
            if (lookahead == '(')
                ADVANCE(5);
            if (lookahead == ':')
                ADVANCE(18);
            LEX_ERROR();
        case 182:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(182);
            if (lookahead == '#')
                ADVANCE(2);
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(16);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == 'a') ||
                ('e' <= lookahead && lookahead <= 'h') ||
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
                ADVANCE(183);
            if (lookahead == 'd')
                ADVANCE(184);
            if (lookahead == 'i')
                ADVANCE(186);
            if (lookahead == 'n')
                ADVANCE(83);
            if (lookahead == 'p')
                ADVANCE(88);
            if (lookahead == 'r')
                ADVANCE(96);
            if (lookahead == '{')
                ADVANCE(113);
            LEX_ERROR();
        case 183:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'n') ||
                ('p' <= lookahead && lookahead <= 'z'))
                ADVANCE(26);
            if (lookahead == 'o')
                ADVANCE(44);
            ACCEPT_TOKEN(sym_identifier);
        case 184:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'z'))
                ADVANCE(26);
            if (lookahead == 'e')
                ADVANCE(185);
            ACCEPT_TOKEN(sym_identifier);
        case 185:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'k') ||
                ('m' <= lookahead && lookahead <= 'z'))
                ADVANCE(26);
            if (lookahead == 'l')
                ADVANCE(54);
            ACCEPT_TOKEN(sym_identifier);
        case 186:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'l') ||
                ('n' <= lookahead && lookahead <= 'z'))
                ADVANCE(26);
            if (lookahead == 'm')
                ADVANCE(77);
            ACCEPT_TOKEN(sym_identifier);
        case 187:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(187);
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
                ADVANCE(117);
            if (lookahead == 'i')
                ADVANCE(118);
            if (lookahead == 'n')
                ADVANCE(83);
            if (lookahead == 'p')
                ADVANCE(88);
            if (lookahead == 'r')
                ADVANCE(96);
            if (lookahead == 't')
                ADVANCE(102);
            if (lookahead == 'w')
                ADVANCE(105);
            if (lookahead == '{')
                ADVANCE(113);
            LEX_ERROR();
        case 188:
            if (lookahead == 0)
                ADVANCE(1);
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(188);
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
                ADVANCE(118);
            if (lookahead == 'n')
                ADVANCE(83);
            if (lookahead == 'p')
                ADVANCE(88);
            if (lookahead == 'r')
                ADVANCE(96);
            if (lookahead == 't')
                ADVANCE(102);
            if (lookahead == 'w')
                ADVANCE(105);
            if (lookahead == '{')
                ADVANCE(113);
            LEX_ERROR();
        case 189:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(189);
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
                ADVANCE(118);
            if (lookahead == 'n')
                ADVANCE(83);
            if (lookahead == 'p')
                ADVANCE(88);
            if (lookahead == 'r')
                ADVANCE(96);
            if (lookahead == 't')
                ADVANCE(102);
            if (lookahead == 'w')
                ADVANCE(105);
            if (lookahead == '{')
                ADVANCE(113);
            LEX_ERROR();
        case 190:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(190);
            if (lookahead == '#')
                ADVANCE(2);
            if (lookahead == ')')
                ADVANCE(6);
            if (lookahead == '*')
                ADVANCE(191);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(26);
            LEX_ERROR();
        case 191:
            ACCEPT_TOKEN(anon_sym_STAR);
        case 192:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(192);
            if (lookahead == '#')
                ADVANCE(2);
            if (lookahead == '*')
                ADVANCE(191);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(26);
            LEX_ERROR();
        case 193:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(193);
            if (lookahead == '#')
                ADVANCE(2);
            if (lookahead == ')')
                ADVANCE(6);
            if (lookahead == ',')
                ADVANCE(10);
            if (lookahead == '=')
                ADVANCE(22);
            LEX_ERROR();
        case 194:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(194);
            if (lookahead == '#')
                ADVANCE(2);
            if (lookahead == '*')
                ADVANCE(191);
            LEX_ERROR();
        case 195:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(195);
            if (lookahead == '#')
                ADVANCE(2);
            if (lookahead == ',')
                ADVANCE(10);
            if (lookahead == ':')
                ADVANCE(18);
            LEX_ERROR();
        case 196:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(196);
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
                ADVANCE(126);
            if (lookahead == 'o')
                ADVANCE(135);
            if (lookahead == '|')
                ADVANCE(114);
            LEX_ERROR();
        case 197:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(197);
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
                ADVANCE(149);
            if (lookahead == 'o')
                ADVANCE(135);
            if (lookahead == '|')
                ADVANCE(114);
            LEX_ERROR();
        case 198:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(198);
            if (lookahead == '#')
                ADVANCE(2);
            if (lookahead == 'e')
                ADVANCE(199);
            if (lookahead == 'f')
                ADVANCE(205);
            LEX_ERROR();
        case 199:
            if (lookahead == 'x')
                ADVANCE(200);
            LEX_ERROR();
        case 200:
            if (lookahead == 'c')
                ADVANCE(201);
            LEX_ERROR();
        case 201:
            if (lookahead == 'e')
                ADVANCE(202);
            LEX_ERROR();
        case 202:
            if (lookahead == 'p')
                ADVANCE(203);
            LEX_ERROR();
        case 203:
            if (lookahead == 't')
                ADVANCE(204);
            LEX_ERROR();
        case 204:
            ACCEPT_TOKEN(anon_sym_except);
        case 205:
            if (lookahead == 'i')
                ADVANCE(206);
            LEX_ERROR();
        case 206:
            if (lookahead == 'n')
                ADVANCE(207);
            LEX_ERROR();
        case 207:
            if (lookahead == 'a')
                ADVANCE(208);
            LEX_ERROR();
        case 208:
            if (lookahead == 'l')
                ADVANCE(209);
            LEX_ERROR();
        case 209:
            if (lookahead == 'l')
                ADVANCE(210);
            LEX_ERROR();
        case 210:
            if (lookahead == 'y')
                ADVANCE(211);
            LEX_ERROR();
        case 211:
            ACCEPT_TOKEN(anon_sym_finally);
        case 212:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(212);
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
                ADVANCE(213);
            if (lookahead == 'f')
                ADVANCE(66);
            if (lookahead == 'i')
                ADVANCE(118);
            if (lookahead == 'n')
                ADVANCE(83);
            if (lookahead == 'p')
                ADVANCE(88);
            if (lookahead == 'r')
                ADVANCE(96);
            if (lookahead == 't')
                ADVANCE(102);
            if (lookahead == 'w')
                ADVANCE(105);
            if (lookahead == '{')
                ADVANCE(113);
            LEX_ERROR();
        case 213:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'k') ||
                ('m' <= lookahead && lookahead <= 'w') ||
                (lookahead == 'y') ||
                (lookahead == 'z'))
                ADVANCE(26);
            if (lookahead == 'l')
                ADVANCE(214);
            if (lookahead == 'x')
                ADVANCE(61);
            ACCEPT_TOKEN(sym_identifier);
        case 214:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'r') ||
                ('t' <= lookahead && lookahead <= 'z'))
                ADVANCE(26);
            if (lookahead == 's')
                ADVANCE(59);
            ACCEPT_TOKEN(sym_identifier);
        case 215:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(215);
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
                ADVANCE(118);
            if (lookahead == 'n')
                ADVANCE(83);
            if (lookahead == 'p')
                ADVANCE(88);
            if (lookahead == 'r')
                ADVANCE(96);
            if (lookahead == 't')
                ADVANCE(102);
            if (lookahead == 'w')
                ADVANCE(105);
            if (lookahead == '{')
                ADVANCE(113);
            LEX_ERROR();
        case 216:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(216);
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
                ADVANCE(217);
            if (lookahead == 'f')
                ADVANCE(117);
            if (lookahead == 'i')
                ADVANCE(118);
            if (lookahead == 'n')
                ADVANCE(83);
            if (lookahead == 'p')
                ADVANCE(88);
            if (lookahead == 'r')
                ADVANCE(96);
            if (lookahead == 't')
                ADVANCE(102);
            if (lookahead == 'w')
                ADVANCE(105);
            if (lookahead == '{')
                ADVANCE(113);
            LEX_ERROR();
        case 217:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'k') ||
                ('m' <= lookahead && lookahead <= 'z'))
                ADVANCE(26);
            if (lookahead == 'l')
                ADVANCE(214);
            ACCEPT_TOKEN(sym_identifier);
        case 218:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(218);
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
                ADVANCE(219);
            if (lookahead == 'f')
                ADVANCE(117);
            if (lookahead == 'i')
                ADVANCE(118);
            if (lookahead == 'n')
                ADVANCE(83);
            if (lookahead == 'p')
                ADVANCE(88);
            if (lookahead == 'r')
                ADVANCE(96);
            if (lookahead == 't')
                ADVANCE(102);
            if (lookahead == 'w')
                ADVANCE(105);
            if (lookahead == '{')
                ADVANCE(113);
            LEX_ERROR();
        case 219:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'k') ||
                ('m' <= lookahead && lookahead <= 'z'))
                ADVANCE(26);
            if (lookahead == 'l')
                ADVANCE(56);
            ACCEPT_TOKEN(sym_identifier);
        case 220:
            if (lookahead == 0)
                ADVANCE(1);
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(220);
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
                ADVANCE(213);
            if (lookahead == 'f')
                ADVANCE(66);
            if (lookahead == 'i')
                ADVANCE(118);
            if (lookahead == 'n')
                ADVANCE(83);
            if (lookahead == 'p')
                ADVANCE(88);
            if (lookahead == 'r')
                ADVANCE(96);
            if (lookahead == 't')
                ADVANCE(102);
            if (lookahead == 'w')
                ADVANCE(105);
            if (lookahead == '{')
                ADVANCE(113);
            LEX_ERROR();
        case 221:
            if (lookahead == 0)
                ADVANCE(1);
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(221);
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
                ADVANCE(118);
            if (lookahead == 'n')
                ADVANCE(83);
            if (lookahead == 'p')
                ADVANCE(88);
            if (lookahead == 'r')
                ADVANCE(96);
            if (lookahead == 't')
                ADVANCE(102);
            if (lookahead == 'w')
                ADVANCE(105);
            if (lookahead == '{')
                ADVANCE(113);
            LEX_ERROR();
        case 222:
            if (lookahead == 0)
                ADVANCE(1);
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(222);
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
                ADVANCE(217);
            if (lookahead == 'f')
                ADVANCE(117);
            if (lookahead == 'i')
                ADVANCE(118);
            if (lookahead == 'n')
                ADVANCE(83);
            if (lookahead == 'p')
                ADVANCE(88);
            if (lookahead == 'r')
                ADVANCE(96);
            if (lookahead == 't')
                ADVANCE(102);
            if (lookahead == 'w')
                ADVANCE(105);
            if (lookahead == '{')
                ADVANCE(113);
            LEX_ERROR();
        case 223:
            if (lookahead == 0)
                ADVANCE(1);
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(223);
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
                ADVANCE(219);
            if (lookahead == 'f')
                ADVANCE(117);
            if (lookahead == 'i')
                ADVANCE(118);
            if (lookahead == 'n')
                ADVANCE(83);
            if (lookahead == 'p')
                ADVANCE(88);
            if (lookahead == 'r')
                ADVANCE(96);
            if (lookahead == 't')
                ADVANCE(102);
            if (lookahead == 'w')
                ADVANCE(105);
            if (lookahead == '{')
                ADVANCE(113);
            LEX_ERROR();
        case 224:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(224);
            if (lookahead == '#')
                ADVANCE(2);
            if (lookahead == ',')
                ADVANCE(10);
            LEX_ERROR();
        case 225:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(225);
            if (lookahead == '#')
                ADVANCE(2);
            if (lookahead == ',')
                ADVANCE(10);
            if (lookahead == 'a')
                ADVANCE(179);
            LEX_ERROR();
        case 226:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(226);
            if (lookahead == '#')
                ADVANCE(2);
            if (lookahead == ')')
                ADVANCE(6);
            if (lookahead == '*')
                ADVANCE(7);
            if (lookahead == '.')
                ADVANCE(152);
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
                ADVANCE(83);
            if (lookahead == '{')
                ADVANCE(113);
            if (lookahead == '}')
                ADVANCE(115);
            LEX_ERROR();
        case 227:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(227);
            if (lookahead == '#')
                ADVANCE(2);
            if (lookahead == '*')
                ADVANCE(191);
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(16);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'm') ||
                ('o' <= lookahead && lookahead <= 'z'))
                ADVANCE(26);
            if (lookahead == '[')
                ADVANCE(27);
            if (lookahead == 'n')
                ADVANCE(83);
            if (lookahead == '{')
                ADVANCE(113);
            LEX_ERROR();
        case 228:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(228);
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
                ADVANCE(178);
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
                ADVANCE(126);
            if (lookahead == 'f')
                ADVANCE(130);
            if (lookahead == 'i')
                ADVANCE(133);
            if (lookahead == 'o')
                ADVANCE(135);
            if (lookahead == '|')
                ADVANCE(114);
            if (lookahead == '}')
                ADVANCE(115);
            LEX_ERROR();
        case 229:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(229);
            if (lookahead == '#')
                ADVANCE(2);
            if (lookahead == ')')
                ADVANCE(6);
            if (lookahead == ':')
                ADVANCE(18);
            if (lookahead == 'i')
                ADVANCE(133);
            LEX_ERROR();
        case 230:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(230);
            if (lookahead == '#')
                ADVANCE(2);
            if (lookahead == '(')
                ADVANCE(5);
            if (lookahead == ',')
                ADVANCE(10);
            if (lookahead == 'a')
                ADVANCE(179);
            LEX_ERROR();
        case 231:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(231);
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
                ADVANCE(133);
            if (lookahead == '}')
                ADVANCE(115);
            LEX_ERROR();
        case 232:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(232);
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
                ADVANCE(83);
            if (lookahead == '{')
                ADVANCE(113);
            if (lookahead == '}')
                ADVANCE(115);
            LEX_ERROR();
        case 233:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(233);
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
                ADVANCE(149);
            if (lookahead == 'i')
                ADVANCE(133);
            if (lookahead == 'o')
                ADVANCE(135);
            if (lookahead == '|')
                ADVANCE(114);
            if (lookahead == '}')
                ADVANCE(115);
            LEX_ERROR();
        case 234:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(234);
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
                ADVANCE(149);
            if (lookahead == 'o')
                ADVANCE(135);
            if (lookahead == '|')
                ADVANCE(114);
            if (lookahead == '}')
                ADVANCE(115);
            LEX_ERROR();
        case 235:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(235);
            if (lookahead == '#')
                ADVANCE(2);
            if (lookahead == ')')
                ADVANCE(6);
            if (lookahead == '*')
                ADVANCE(191);
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(16);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'm') ||
                ('o' <= lookahead && lookahead <= 'z'))
                ADVANCE(26);
            if (lookahead == '[')
                ADVANCE(27);
            if (lookahead == 'n')
                ADVANCE(83);
            if (lookahead == '{')
                ADVANCE(113);
            LEX_ERROR();
        case 236:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(236);
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
                ADVANCE(149);
            if (lookahead == 'o')
                ADVANCE(135);
            if (lookahead == '|')
                ADVANCE(114);
            if (lookahead == '}')
                ADVANCE(115);
            LEX_ERROR();
        case 237:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(237);
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
                ADVANCE(178);
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
                ADVANCE(126);
            if (lookahead == 'i')
                ADVANCE(133);
            if (lookahead == 'o')
                ADVANCE(135);
            if (lookahead == '|')
                ADVANCE(114);
            if (lookahead == '}')
                ADVANCE(115);
            LEX_ERROR();
        case 238:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(238);
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
                ADVANCE(126);
            if (lookahead == 'i')
                ADVANCE(133);
            if (lookahead == 'o')
                ADVANCE(135);
            if (lookahead == '|')
                ADVANCE(114);
            if (lookahead == '}')
                ADVANCE(115);
            LEX_ERROR();
        default:
            LEX_ERROR();
    }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
    [0] = {.lex_state = 0, .external_tokens = 1},
    [1] = {.lex_state = 116},
    [2] = {.lex_state = 119},
    [3] = {.lex_state = 120},
    [4] = {.lex_state = 120},
    [5] = {.lex_state = 120},
    [6] = {.lex_state = 121, .external_tokens = 2},
    [7] = {.lex_state = 120},
    [8] = {.lex_state = 120},
    [9] = {.lex_state = 120},
    [10] = {.lex_state = 122},
    [11] = {.lex_state = 120},
    [12] = {.lex_state = 119},
    [13] = {.lex_state = 119},
    [14] = {.lex_state = 119},
    [15] = {.lex_state = 120},
    [16] = {.lex_state = 123},
    [17] = {.lex_state = 124},
    [18] = {.lex_state = 125, .external_tokens = 2},
    [19] = {.lex_state = 137},
    [20] = {.lex_state = 138, .external_tokens = 2},
    [21] = {.lex_state = 121, .external_tokens = 2},
    [22] = {.lex_state = 138, .external_tokens = 2},
    [23] = {.lex_state = 138, .external_tokens = 2},
    [24] = {.lex_state = 139},
    [25] = {.lex_state = 148, .external_tokens = 2},
    [26] = {.lex_state = 138, .external_tokens = 2},
    [27] = {.lex_state = 139},
    [28] = {.lex_state = 138, .external_tokens = 2},
    [29] = {.lex_state = 139},
    [30] = {.lex_state = 137},
    [31] = {.lex_state = 138, .external_tokens = 2},
    [32] = {.lex_state = 150},
    [33] = {.lex_state = 120},
    [34] = {.lex_state = 120},
    [35] = {.lex_state = 120},
    [36] = {.lex_state = 120},
    [37] = {.lex_state = 120},
    [38] = {.lex_state = 120},
    [39] = {.lex_state = 151},
    [40] = {.lex_state = 120},
    [41] = {.lex_state = 123},
    [42] = {.lex_state = 153},
    [43] = {.lex_state = 124},
    [44] = {.lex_state = 125},
    [45] = {.lex_state = 154},
    [46] = {.lex_state = 155},
    [47] = {.lex_state = 150},
    [48] = {.lex_state = 120},
    [49] = {.lex_state = 120},
    [50] = {.lex_state = 120},
    [51] = {.lex_state = 120},
    [52] = {.lex_state = 120},
    [53] = {.lex_state = 120},
    [54] = {.lex_state = 151},
    [55] = {.lex_state = 125, .external_tokens = 2},
    [56] = {.lex_state = 153},
    [57] = {.lex_state = 155},
    [58] = {.lex_state = 125, .external_tokens = 2},
    [59] = {.lex_state = 153},
    [60] = {.lex_state = 125, .external_tokens = 2},
    [61] = {.lex_state = 154},
    [62] = {.lex_state = 153},
    [63] = {.lex_state = 154},
    [64] = {.lex_state = 155},
    [65] = {.lex_state = 125},
    [66] = {.lex_state = 153},
    [67] = {.lex_state = 155},
    [68] = {.lex_state = 125},
    [69] = {.lex_state = 125},
    [70] = {.lex_state = 153},
    [71] = {.lex_state = 154},
    [72] = {.lex_state = 154},
    [73] = {.lex_state = 154},
    [74] = {.lex_state = 154},
    [75] = {.lex_state = 154},
    [76] = {.lex_state = 125},
    [77] = {.lex_state = 154},
    [78] = {.lex_state = 120},
    [79] = {.lex_state = 120},
    [80] = {.lex_state = 120},
    [81] = {.lex_state = 156},
    [82] = {.lex_state = 157},
    [83] = {.lex_state = 158},
    [84] = {.lex_state = 158},
    [85] = {.lex_state = 159},
    [86] = {.lex_state = 150},
    [87] = {.lex_state = 157},
    [88] = {.lex_state = 158},
    [89] = {.lex_state = 158},
    [90] = {.lex_state = 159},
    [91] = {.lex_state = 125},
    [92] = {.lex_state = 160},
    [93] = {.lex_state = 158},
    [94] = {.lex_state = 160},
    [95] = {.lex_state = 125},
    [96] = {.lex_state = 157},
    [97] = {.lex_state = 158},
    [98] = {.lex_state = 159},
    [99] = {.lex_state = 125},
    [100] = {.lex_state = 120},
    [101] = {.lex_state = 120},
    [102] = {.lex_state = 120},
    [103] = {.lex_state = 120},
    [104] = {.lex_state = 120},
    [105] = {.lex_state = 120},
    [106] = {.lex_state = 157},
    [107] = {.lex_state = 157},
    [108] = {.lex_state = 157},
    [109] = {.lex_state = 157},
    [110] = {.lex_state = 157},
    [111] = {.lex_state = 157},
    [112] = {.lex_state = 158},
    [113] = {.lex_state = 159},
    [114] = {.lex_state = 125},
    [115] = {.lex_state = 162},
    [116] = {.lex_state = 125},
    [117] = {.lex_state = 160},
    [118] = {.lex_state = 158},
    [119] = {.lex_state = 160},
    [120] = {.lex_state = 159},
    [121] = {.lex_state = 162},
    [122] = {.lex_state = 120},
    [123] = {.lex_state = 157},
    [124] = {.lex_state = 120},
    [125] = {.lex_state = 125},
    [126] = {.lex_state = 163},
    [127] = {.lex_state = 164},
    [128] = {.lex_state = 124},
    [129] = {.lex_state = 120},
    [130] = {.lex_state = 125},
    [131] = {.lex_state = 165},
    [132] = {.lex_state = 124},
    [133] = {.lex_state = 125},
    [134] = {.lex_state = 120},
    [135] = {.lex_state = 125},
    [136] = {.lex_state = 166},
    [137] = {.lex_state = 165},
    [138] = {.lex_state = 120},
    [139] = {.lex_state = 120},
    [140] = {.lex_state = 120},
    [141] = {.lex_state = 120},
    [142] = {.lex_state = 120},
    [143] = {.lex_state = 120},
    [144] = {.lex_state = 120},
    [145] = {.lex_state = 166},
    [146] = {.lex_state = 166},
    [147] = {.lex_state = 166},
    [148] = {.lex_state = 166},
    [149] = {.lex_state = 166},
    [150] = {.lex_state = 120},
    [151] = {.lex_state = 167},
    [152] = {.lex_state = 120},
    [153] = {.lex_state = 120},
    [154] = {.lex_state = 120},
    [155] = {.lex_state = 120},
    [156] = {.lex_state = 120},
    [157] = {.lex_state = 120},
    [158] = {.lex_state = 167},
    [159] = {.lex_state = 167},
    [160] = {.lex_state = 167},
    [161] = {.lex_state = 167},
    [162] = {.lex_state = 167},
    [163] = {.lex_state = 120},
    [164] = {.lex_state = 168},
    [165] = {.lex_state = 169},
    [166] = {.lex_state = 120},
    [167] = {.lex_state = 120},
    [168] = {.lex_state = 120},
    [169] = {.lex_state = 120},
    [170] = {.lex_state = 120},
    [171] = {.lex_state = 120},
    [172] = {.lex_state = 120},
    [173] = {.lex_state = 170},
    [174] = {.lex_state = 120},
    [175] = {.lex_state = 169},
    [176] = {.lex_state = 169},
    [177] = {.lex_state = 169},
    [178] = {.lex_state = 169},
    [179] = {.lex_state = 169},
    [180] = {.lex_state = 169},
    [181] = {.lex_state = 169},
    [182] = {.lex_state = 120},
    [183] = {.lex_state = 120},
    [184] = {.lex_state = 171},
    [185] = {.lex_state = 120},
    [186] = {.lex_state = 120},
    [187] = {.lex_state = 120},
    [188] = {.lex_state = 120},
    [189] = {.lex_state = 120},
    [190] = {.lex_state = 120},
    [191] = {.lex_state = 125},
    [192] = {.lex_state = 171},
    [193] = {.lex_state = 171},
    [194] = {.lex_state = 171},
    [195] = {.lex_state = 171},
    [196] = {.lex_state = 171},
    [197] = {.lex_state = 165},
    [198] = {.lex_state = 124},
    [199] = {.lex_state = 120},
    [200] = {.lex_state = 120},
    [201] = {.lex_state = 120},
    [202] = {.lex_state = 120},
    [203] = {.lex_state = 120},
    [204] = {.lex_state = 120},
    [205] = {.lex_state = 120},
    [206] = {.lex_state = 120},
    [207] = {.lex_state = 125},
    [208] = {.lex_state = 165},
    [209] = {.lex_state = 124},
    [210] = {.lex_state = 125},
    [211] = {.lex_state = 125},
    [212] = {.lex_state = 167},
    [213] = {.lex_state = 163},
    [214] = {.lex_state = 163},
    [215] = {.lex_state = 163},
    [216] = {.lex_state = 163},
    [217] = {.lex_state = 163},
    [218] = {.lex_state = 168},
    [219] = {.lex_state = 120},
    [220] = {.lex_state = 171},
    [221] = {.lex_state = 125},
    [222] = {.lex_state = 120},
    [223] = {.lex_state = 172},
    [224] = {.lex_state = 120},
    [225] = {.lex_state = 120},
    [226] = {.lex_state = 120},
    [227] = {.lex_state = 120},
    [228] = {.lex_state = 120},
    [229] = {.lex_state = 120},
    [230] = {.lex_state = 172},
    [231] = {.lex_state = 172},
    [232] = {.lex_state = 172},
    [233] = {.lex_state = 172},
    [234] = {.lex_state = 172},
    [235] = {.lex_state = 167},
    [236] = {.lex_state = 120},
    [237] = {.lex_state = 125},
    [238] = {.lex_state = 173},
    [239] = {.lex_state = 123},
    [240] = {.lex_state = 120},
    [241] = {.lex_state = 120},
    [242] = {.lex_state = 120},
    [243] = {.lex_state = 120},
    [244] = {.lex_state = 120},
    [245] = {.lex_state = 120},
    [246] = {.lex_state = 120},
    [247] = {.lex_state = 125},
    [248] = {.lex_state = 153},
    [249] = {.lex_state = 123},
    [250] = {.lex_state = 125},
    [251] = {.lex_state = 125},
    [252] = {.lex_state = 154},
    [253] = {.lex_state = 173},
    [254] = {.lex_state = 173},
    [255] = {.lex_state = 173},
    [256] = {.lex_state = 173},
    [257] = {.lex_state = 173},
    [258] = {.lex_state = 168},
    [259] = {.lex_state = 120},
    [260] = {.lex_state = 120},
    [261] = {.lex_state = 174},
    [262] = {.lex_state = 120},
    [263] = {.lex_state = 120},
    [264] = {.lex_state = 120},
    [265] = {.lex_state = 120},
    [266] = {.lex_state = 120},
    [267] = {.lex_state = 120},
    [268] = {.lex_state = 125},
    [269] = {.lex_state = 174},
    [270] = {.lex_state = 174},
    [271] = {.lex_state = 174},
    [272] = {.lex_state = 174},
    [273] = {.lex_state = 174},
    [274] = {.lex_state = 154},
    [275] = {.lex_state = 125},
    [276] = {.lex_state = 120},
    [277] = {.lex_state = 175},
    [278] = {.lex_state = 120},
    [279] = {.lex_state = 120},
    [280] = {.lex_state = 120},
    [281] = {.lex_state = 120},
    [282] = {.lex_state = 120},
    [283] = {.lex_state = 120},
    [284] = {.lex_state = 175},
    [285] = {.lex_state = 175},
    [286] = {.lex_state = 175},
    [287] = {.lex_state = 175},
    [288] = {.lex_state = 175},
    [289] = {.lex_state = 157},
    [290] = {.lex_state = 148, .external_tokens = 2},
    [291] = {.lex_state = 148, .external_tokens = 2},
    [292] = {.lex_state = 148, .external_tokens = 2},
    [293] = {.lex_state = 148, .external_tokens = 2},
    [294] = {.lex_state = 176, .external_tokens = 2},
    [295] = {.lex_state = 148, .external_tokens = 2},
    [296] = {.lex_state = 157},
    [297] = {.lex_state = 158},
    [298] = {.lex_state = 158},
    [299] = {.lex_state = 159},
    [300] = {.lex_state = 150},
    [301] = {.lex_state = 157},
    [302] = {.lex_state = 158},
    [303] = {.lex_state = 158},
    [304] = {.lex_state = 159},
    [305] = {.lex_state = 125, .external_tokens = 2},
    [306] = {.lex_state = 160},
    [307] = {.lex_state = 158},
    [308] = {.lex_state = 160},
    [309] = {.lex_state = 125, .external_tokens = 2},
    [310] = {.lex_state = 159},
    [311] = {.lex_state = 125, .external_tokens = 2},
    [312] = {.lex_state = 159},
    [313] = {.lex_state = 125, .external_tokens = 2},
    [314] = {.lex_state = 162},
    [315] = {.lex_state = 125, .external_tokens = 2},
    [316] = {.lex_state = 160},
    [317] = {.lex_state = 158},
    [318] = {.lex_state = 160},
    [319] = {.lex_state = 159},
    [320] = {.lex_state = 162},
    [321] = {.lex_state = 138, .external_tokens = 2},
    [322] = {.lex_state = 125, .external_tokens = 2},
    [323] = {.lex_state = 163},
    [324] = {.lex_state = 164},
    [325] = {.lex_state = 124},
    [326] = {.lex_state = 120},
    [327] = {.lex_state = 125, .external_tokens = 2},
    [328] = {.lex_state = 165},
    [329] = {.lex_state = 124},
    [330] = {.lex_state = 125, .external_tokens = 2},
    [331] = {.lex_state = 125, .external_tokens = 2},
    [332] = {.lex_state = 168},
    [333] = {.lex_state = 120},
    [334] = {.lex_state = 171},
    [335] = {.lex_state = 125, .external_tokens = 2},
    [336] = {.lex_state = 124},
    [337] = {.lex_state = 120},
    [338] = {.lex_state = 125, .external_tokens = 2},
    [339] = {.lex_state = 165},
    [340] = {.lex_state = 124},
    [341] = {.lex_state = 125, .external_tokens = 2},
    [342] = {.lex_state = 125, .external_tokens = 2},
    [343] = {.lex_state = 168},
    [344] = {.lex_state = 120},
    [345] = {.lex_state = 171},
    [346] = {.lex_state = 125, .external_tokens = 2},
    [347] = {.lex_state = 125, .external_tokens = 2},
    [348] = {.lex_state = 173},
    [349] = {.lex_state = 123},
    [350] = {.lex_state = 120},
    [351] = {.lex_state = 125, .external_tokens = 2},
    [352] = {.lex_state = 153},
    [353] = {.lex_state = 123},
    [354] = {.lex_state = 125, .external_tokens = 2},
    [355] = {.lex_state = 125, .external_tokens = 2},
    [356] = {.lex_state = 168},
    [357] = {.lex_state = 120},
    [358] = {.lex_state = 174},
    [359] = {.lex_state = 125, .external_tokens = 2},
    [360] = {.lex_state = 176, .external_tokens = 2},
    [361] = {.lex_state = 177, .external_tokens = 2},
    [362] = {.lex_state = 180, .external_tokens = 2},
    [363] = {.lex_state = 120},
    [364] = {.lex_state = 139},
    [365] = {.lex_state = 121, .external_tokens = 2},
    [366] = {.lex_state = 139},
    [367] = {.lex_state = 157},
    [368] = {.lex_state = 120},
    [369] = {.lex_state = 121, .external_tokens = 2},
    [370] = {.lex_state = 158},
    [371] = {.lex_state = 120},
    [372] = {.lex_state = 121, .external_tokens = 2},
    [373] = {.lex_state = 157},
    [374] = {.lex_state = 157},
    [375] = {.lex_state = 119},
    [376] = {.lex_state = 177, .external_tokens = 2},
    [377] = {.lex_state = 119},
    [378] = {.lex_state = 177, .external_tokens = 2},
    [379] = {.lex_state = 177, .external_tokens = 2},
    [380] = {.lex_state = 181},
    [381] = {.lex_state = 182, .external_tokens = 3},
    [382] = {.lex_state = 120},
    [383] = {.lex_state = 159},
    [384] = {.lex_state = 157},
    [385] = {.lex_state = 158},
    [386] = {.lex_state = 122},
    [387] = {.lex_state = 182, .external_tokens = 3},
    [388] = {.lex_state = 187, .external_tokens = 4},
    [389] = {.lex_state = 121, .external_tokens = 2},
    [390] = {.lex_state = 138, .external_tokens = 2},
    [391] = {.lex_state = 188, .external_tokens = 2},
    [392] = {.lex_state = 120},
    [393] = {.lex_state = 120},
    [394] = {.lex_state = 120},
    [395] = {.lex_state = 122},
    [396] = {.lex_state = 120},
    [397] = {.lex_state = 119},
    [398] = {.lex_state = 119},
    [399] = {.lex_state = 187, .external_tokens = 4},
    [400] = {.lex_state = 121, .external_tokens = 2},
    [401] = {.lex_state = 187, .external_tokens = 4},
    [402] = {.lex_state = 187, .external_tokens = 4},
    [403] = {.lex_state = 187, .external_tokens = 4},
    [404] = {.lex_state = 139},
    [405] = {.lex_state = 187, .external_tokens = 4},
    [406] = {.lex_state = 188, .external_tokens = 2},
    [407] = {.lex_state = 187, .external_tokens = 4},
    [408] = {.lex_state = 187, .external_tokens = 4},
    [409] = {.lex_state = 181},
    [410] = {.lex_state = 182, .external_tokens = 3},
    [411] = {.lex_state = 120},
    [412] = {.lex_state = 159},
    [413] = {.lex_state = 122},
    [414] = {.lex_state = 182, .external_tokens = 3},
    [415] = {.lex_state = 187, .external_tokens = 4},
    [416] = {.lex_state = 121, .external_tokens = 2},
    [417] = {.lex_state = 187, .external_tokens = 4},
    [418] = {.lex_state = 189, .external_tokens = 4},
    [419] = {.lex_state = 187, .external_tokens = 4},
    [420] = {.lex_state = 189, .external_tokens = 4},
    [421] = {.lex_state = 187, .external_tokens = 4},
    [422] = {.lex_state = 180},
    [423] = {.lex_state = 190},
    [424] = {.lex_state = 122},
    [425] = {.lex_state = 182, .external_tokens = 3},
    [426] = {.lex_state = 187, .external_tokens = 4},
    [427] = {.lex_state = 122},
    [428] = {.lex_state = 192},
    [429] = {.lex_state = 193},
    [430] = {.lex_state = 158},
    [431] = {.lex_state = 158},
    [432] = {.lex_state = 159},
    [433] = {.lex_state = 192},
    [434] = {.lex_state = 193},
    [435] = {.lex_state = 158},
    [436] = {.lex_state = 158},
    [437] = {.lex_state = 159},
    [438] = {.lex_state = 122},
    [439] = {.lex_state = 194},
    [440] = {.lex_state = 194},
    [441] = {.lex_state = 159},
    [442] = {.lex_state = 122},
    [443] = {.lex_state = 119},
    [444] = {.lex_state = 159},
    [445] = {.lex_state = 190},
    [446] = {.lex_state = 122},
    [447] = {.lex_state = 120},
    [448] = {.lex_state = 157},
    [449] = {.lex_state = 122},
    [450] = {.lex_state = 194},
    [451] = {.lex_state = 159},
    [452] = {.lex_state = 190},
    [453] = {.lex_state = 158},
    [454] = {.lex_state = 120},
    [455] = {.lex_state = 195},
    [456] = {.lex_state = 196},
    [457] = {.lex_state = 120},
    [458] = {.lex_state = 120},
    [459] = {.lex_state = 120},
    [460] = {.lex_state = 120},
    [461] = {.lex_state = 120},
    [462] = {.lex_state = 120},
    [463] = {.lex_state = 120},
    [464] = {.lex_state = 196},
    [465] = {.lex_state = 196},
    [466] = {.lex_state = 196},
    [467] = {.lex_state = 196},
    [468] = {.lex_state = 196},
    [469] = {.lex_state = 120},
    [470] = {.lex_state = 197},
    [471] = {.lex_state = 120},
    [472] = {.lex_state = 120},
    [473] = {.lex_state = 120},
    [474] = {.lex_state = 120},
    [475] = {.lex_state = 120},
    [476] = {.lex_state = 120},
    [477] = {.lex_state = 197},
    [478] = {.lex_state = 197},
    [479] = {.lex_state = 197},
    [480] = {.lex_state = 197},
    [481] = {.lex_state = 197},
    [482] = {.lex_state = 120},
    [483] = {.lex_state = 182, .external_tokens = 3},
    [484] = {.lex_state = 195},
    [485] = {.lex_state = 120},
    [486] = {.lex_state = 182, .external_tokens = 3},
    [487] = {.lex_state = 187, .external_tokens = 4},
    [488] = {.lex_state = 195},
    [489] = {.lex_state = 187, .external_tokens = 4},
    [490] = {.lex_state = 195},
    [491] = {.lex_state = 182, .external_tokens = 3},
    [492] = {.lex_state = 187, .external_tokens = 4},
    [493] = {.lex_state = 121, .external_tokens = 2},
    [494] = {.lex_state = 198},
    [495] = {.lex_state = 120},
    [496] = {.lex_state = 122},
    [497] = {.lex_state = 212, .external_tokens = 4},
    [498] = {.lex_state = 187, .external_tokens = 4},
    [499] = {.lex_state = 212, .external_tokens = 4},
    [500] = {.lex_state = 122},
    [501] = {.lex_state = 215, .external_tokens = 4},
    [502] = {.lex_state = 212, .external_tokens = 4},
    [503] = {.lex_state = 187, .external_tokens = 4},
    [504] = {.lex_state = 187, .external_tokens = 4},
    [505] = {.lex_state = 182, .external_tokens = 3},
    [506] = {.lex_state = 215, .external_tokens = 4},
    [507] = {.lex_state = 182, .external_tokens = 3},
    [508] = {.lex_state = 187, .external_tokens = 4},
    [509] = {.lex_state = 196},
    [510] = {.lex_state = 120},
    [511] = {.lex_state = 182, .external_tokens = 3},
    [512] = {.lex_state = 212, .external_tokens = 4},
    [513] = {.lex_state = 166},
    [514] = {.lex_state = 182, .external_tokens = 3},
    [515] = {.lex_state = 212, .external_tokens = 4},
    [516] = {.lex_state = 198},
    [517] = {.lex_state = 187, .external_tokens = 4},
    [518] = {.lex_state = 198},
    [519] = {.lex_state = 166},
    [520] = {.lex_state = 182, .external_tokens = 3},
    [521] = {.lex_state = 216, .external_tokens = 4},
    [522] = {.lex_state = 187, .external_tokens = 4},
    [523] = {.lex_state = 168},
    [524] = {.lex_state = 120},
    [525] = {.lex_state = 122},
    [526] = {.lex_state = 197},
    [527] = {.lex_state = 120},
    [528] = {.lex_state = 195},
    [529] = {.lex_state = 120},
    [530] = {.lex_state = 197},
    [531] = {.lex_state = 197},
    [532] = {.lex_state = 182, .external_tokens = 3},
    [533] = {.lex_state = 216, .external_tokens = 4},
    [534] = {.lex_state = 187, .external_tokens = 4},
    [535] = {.lex_state = 166},
    [536] = {.lex_state = 182, .external_tokens = 3},
    [537] = {.lex_state = 218, .external_tokens = 4},
    [538] = {.lex_state = 120},
    [539] = {.lex_state = 218, .external_tokens = 4},
    [540] = {.lex_state = 187, .external_tokens = 4},
    [541] = {.lex_state = 218, .external_tokens = 4},
    [542] = {.lex_state = 218, .external_tokens = 4},
    [543] = {.lex_state = 187, .external_tokens = 4},
    [544] = {.lex_state = 166},
    [545] = {.lex_state = 182, .external_tokens = 3},
    [546] = {.lex_state = 218, .external_tokens = 4},
    [547] = {.lex_state = 138, .external_tokens = 2},
    [548] = {.lex_state = 180},
    [549] = {.lex_state = 122},
    [550] = {.lex_state = 182, .external_tokens = 3},
    [551] = {.lex_state = 138, .external_tokens = 2},
    [552] = {.lex_state = 195},
    [553] = {.lex_state = 182, .external_tokens = 3},
    [554] = {.lex_state = 195},
    [555] = {.lex_state = 182, .external_tokens = 3},
    [556] = {.lex_state = 138, .external_tokens = 2},
    [557] = {.lex_state = 138, .external_tokens = 2},
    [558] = {.lex_state = 182, .external_tokens = 3},
    [559] = {.lex_state = 198},
    [560] = {.lex_state = 120},
    [561] = {.lex_state = 122},
    [562] = {.lex_state = 220, .external_tokens = 2},
    [563] = {.lex_state = 138, .external_tokens = 2},
    [564] = {.lex_state = 220, .external_tokens = 2},
    [565] = {.lex_state = 122},
    [566] = {.lex_state = 221, .external_tokens = 2},
    [567] = {.lex_state = 220, .external_tokens = 2},
    [568] = {.lex_state = 138, .external_tokens = 2},
    [569] = {.lex_state = 138, .external_tokens = 2},
    [570] = {.lex_state = 182, .external_tokens = 3},
    [571] = {.lex_state = 221, .external_tokens = 2},
    [572] = {.lex_state = 182, .external_tokens = 3},
    [573] = {.lex_state = 138, .external_tokens = 2},
    [574] = {.lex_state = 196},
    [575] = {.lex_state = 120},
    [576] = {.lex_state = 182, .external_tokens = 3},
    [577] = {.lex_state = 220, .external_tokens = 2},
    [578] = {.lex_state = 166},
    [579] = {.lex_state = 182, .external_tokens = 3},
    [580] = {.lex_state = 220, .external_tokens = 2},
    [581] = {.lex_state = 166},
    [582] = {.lex_state = 182, .external_tokens = 3},
    [583] = {.lex_state = 222, .external_tokens = 2},
    [584] = {.lex_state = 138, .external_tokens = 2},
    [585] = {.lex_state = 168},
    [586] = {.lex_state = 120},
    [587] = {.lex_state = 122},
    [588] = {.lex_state = 182, .external_tokens = 3},
    [589] = {.lex_state = 222, .external_tokens = 2},
    [590] = {.lex_state = 138, .external_tokens = 2},
    [591] = {.lex_state = 166},
    [592] = {.lex_state = 182, .external_tokens = 3},
    [593] = {.lex_state = 223, .external_tokens = 2},
    [594] = {.lex_state = 120},
    [595] = {.lex_state = 223, .external_tokens = 2},
    [596] = {.lex_state = 138, .external_tokens = 2},
    [597] = {.lex_state = 223, .external_tokens = 2},
    [598] = {.lex_state = 223, .external_tokens = 2},
    [599] = {.lex_state = 138, .external_tokens = 2},
    [600] = {.lex_state = 166},
    [601] = {.lex_state = 182, .external_tokens = 3},
    [602] = {.lex_state = 223, .external_tokens = 2},
    [603] = {.lex_state = 120},
    [604] = {.lex_state = 121, .external_tokens = 2},
    [605] = {.lex_state = 176, .external_tokens = 2},
    [606] = {.lex_state = 120},
    [607] = {.lex_state = 120},
    [608] = {.lex_state = 120},
    [609] = {.lex_state = 120},
    [610] = {.lex_state = 120},
    [611] = {.lex_state = 120},
    [612] = {.lex_state = 120},
    [613] = {.lex_state = 224, .external_tokens = 2},
    [614] = {.lex_state = 120},
    [615] = {.lex_state = 176, .external_tokens = 2},
    [616] = {.lex_state = 176, .external_tokens = 2},
    [617] = {.lex_state = 176, .external_tokens = 2},
    [618] = {.lex_state = 176, .external_tokens = 2},
    [619] = {.lex_state = 176, .external_tokens = 2},
    [620] = {.lex_state = 176, .external_tokens = 2},
    [621] = {.lex_state = 176, .external_tokens = 2},
    [622] = {.lex_state = 121, .external_tokens = 2},
    [623] = {.lex_state = 176, .external_tokens = 2},
    [624] = {.lex_state = 224, .external_tokens = 2},
    [625] = {.lex_state = 224, .external_tokens = 2},
    [626] = {.lex_state = 225, .external_tokens = 2},
    [627] = {.lex_state = 119, .external_tokens = 2},
    [628] = {.lex_state = 119},
    [629] = {.lex_state = 224, .external_tokens = 2},
    [630] = {.lex_state = 119, .external_tokens = 2},
    [631] = {.lex_state = 224, .external_tokens = 2},
    [632] = {.lex_state = 225, .external_tokens = 2},
    [633] = {.lex_state = 224, .external_tokens = 2},
    [634] = {.lex_state = 224, .external_tokens = 2},
    [635] = {.lex_state = 225, .external_tokens = 2},
    [636] = {.lex_state = 226, .external_tokens = 2},
    [637] = {.lex_state = 120},
    [638] = {.lex_state = 120},
    [639] = {.lex_state = 182, .external_tokens = 3},
    [640] = {.lex_state = 120},
    [641] = {.lex_state = 122},
    [642] = {.lex_state = 120},
    [643] = {.lex_state = 120},
    [644] = {.lex_state = 120},
    [645] = {.lex_state = 122},
    [646] = {.lex_state = 120},
    [647] = {.lex_state = 122},
    [648] = {.lex_state = 120},
    [649] = {.lex_state = 119},
    [650] = {.lex_state = 162},
    [651] = {.lex_state = 125, .external_tokens = 2},
    [652] = {.lex_state = 120},
    [653] = {.lex_state = 227},
    [654] = {.lex_state = 119},
    [655] = {.lex_state = 119},
    [656] = {.lex_state = 120},
    [657] = {.lex_state = 120},
    [658] = {.lex_state = 120},
    [659] = {.lex_state = 155},
    [660] = {.lex_state = 153},
    [661] = {.lex_state = 125, .external_tokens = 2},
    [662] = {.lex_state = 125, .external_tokens = 2},
    [663] = {.lex_state = 228, .external_tokens = 2},
    [664] = {.lex_state = 188, .external_tokens = 5},
    [665] = {.lex_state = 187, .external_tokens = 4},
    [666] = {.lex_state = 188, .external_tokens = 5},
    [667] = {.lex_state = 138, .external_tokens = 5},
    [668] = {.lex_state = 121, .external_tokens = 2},
    [669] = {.lex_state = 224, .external_tokens = 2},
    [670] = {.lex_state = 138, .external_tokens = 5},
    [671] = {.lex_state = 138, .external_tokens = 5},
    [672] = {.lex_state = 223, .external_tokens = 5},
    [673] = {.lex_state = 221, .external_tokens = 5},
    [674] = {.lex_state = 220, .external_tokens = 5},
    [675] = {.lex_state = 138, .external_tokens = 5},
    [676] = {.lex_state = 195},
    [677] = {.lex_state = 138, .external_tokens = 5},
    [678] = {.lex_state = 122},
    [679] = {.lex_state = 158},
    [680] = {.lex_state = 158},
    [681] = {.lex_state = 159},
    [682] = {.lex_state = 139},
    [683] = {.lex_state = 188, .external_tokens = 5},
    [684] = {.lex_state = 229, .external_tokens = 2},
    [685] = {.lex_state = 230, .external_tokens = 2},
    [686] = {.lex_state = 125, .external_tokens = 2},
    [687] = {.lex_state = 158},
    [688] = {.lex_state = 158},
    [689] = {.lex_state = 159},
    [690] = {.lex_state = 164},
    [691] = {.lex_state = 138, .external_tokens = 5},
    [692] = {.lex_state = 231, .external_tokens = 2},
    [693] = {.lex_state = 223, .external_tokens = 5},
    [694] = {.lex_state = 220, .external_tokens = 5},
    [695] = {.lex_state = 195},
    [696] = {.lex_state = 139},
    [697] = {.lex_state = 158},
    [698] = {.lex_state = 160},
    [699] = {.lex_state = 125, .external_tokens = 2},
    [700] = {.lex_state = 159},
    [701] = {.lex_state = 125, .external_tokens = 2},
    [702] = {.lex_state = 138, .external_tokens = 5},
    [703] = {.lex_state = 182, .external_tokens = 3},
    [704] = {.lex_state = 121, .external_tokens = 2},
    [705] = {.lex_state = 138, .external_tokens = 5},
    [706] = {.lex_state = 188, .external_tokens = 5},
    [707] = {.lex_state = 187, .external_tokens = 4},
    [708] = {.lex_state = 188, .external_tokens = 5},
    [709] = {.lex_state = 221, .external_tokens = 5},
    [710] = {.lex_state = 220, .external_tokens = 5},
    [711] = {.lex_state = 138, .external_tokens = 5},
    [712] = {.lex_state = 138, .external_tokens = 5},
    [713] = {.lex_state = 223, .external_tokens = 5},
    [714] = {.lex_state = 138, .external_tokens = 5},
    [715] = {.lex_state = 182, .external_tokens = 3},
    [716] = {.lex_state = 221, .external_tokens = 5},
    [717] = {.lex_state = 232},
    [718] = {.lex_state = 120},
    [719] = {.lex_state = 233, .external_tokens = 2},
    [720] = {.lex_state = 120},
    [721] = {.lex_state = 233, .external_tokens = 2},
    [722] = {.lex_state = 233, .external_tokens = 2},
    [723] = {.lex_state = 120},
    [724] = {.lex_state = 138, .external_tokens = 5},
    [725] = {.lex_state = 121, .external_tokens = 2},
    [726] = {.lex_state = 138, .external_tokens = 5},
    [727] = {.lex_state = 168},
    [728] = {.lex_state = 120},
    [729] = {.lex_state = 122},
    [730] = {.lex_state = 182, .external_tokens = 3},
    [731] = {.lex_state = 222, .external_tokens = 5},
    [732] = {.lex_state = 138, .external_tokens = 5},
    [733] = {.lex_state = 125, .external_tokens = 2},
    [734] = {.lex_state = 160},
    [735] = {.lex_state = 125, .external_tokens = 2},
    [736] = {.lex_state = 159},
    [737] = {.lex_state = 125, .external_tokens = 2},
    [738] = {.lex_state = 162},
    [739] = {.lex_state = 226},
    [740] = {.lex_state = 120},
    [741] = {.lex_state = 182, .external_tokens = 3},
    [742] = {.lex_state = 120},
    [743] = {.lex_state = 125, .external_tokens = 2},
    [744] = {.lex_state = 125, .external_tokens = 2},
    [745] = {.lex_state = 125, .external_tokens = 2},
    [746] = {.lex_state = 125, .external_tokens = 2},
    [747] = {.lex_state = 168},
    [748] = {.lex_state = 120},
    [749] = {.lex_state = 120},
    [750] = {.lex_state = 234},
    [751] = {.lex_state = 120},
    [752] = {.lex_state = 234},
    [753] = {.lex_state = 234},
    [754] = {.lex_state = 120},
    [755] = {.lex_state = 188, .external_tokens = 5},
    [756] = {.lex_state = 172, .external_tokens = 2},
    [757] = {.lex_state = 120},
    [758] = {.lex_state = 172, .external_tokens = 2},
    [759] = {.lex_state = 223, .external_tokens = 5},
    [760] = {.lex_state = 138, .external_tokens = 5},
    [761] = {.lex_state = 172, .external_tokens = 2},
    [762] = {.lex_state = 197},
    [763] = {.lex_state = 182, .external_tokens = 3},
    [764] = {.lex_state = 220, .external_tokens = 5},
    [765] = {.lex_state = 125, .external_tokens = 2},
    [766] = {.lex_state = 233, .external_tokens = 2},
    [767] = {.lex_state = 122},
    [768] = {.lex_state = 182, .external_tokens = 3},
    [769] = {.lex_state = 138, .external_tokens = 5},
    [770] = {.lex_state = 138, .external_tokens = 5},
    [771] = {.lex_state = 220, .external_tokens = 5},
    [772] = {.lex_state = 138, .external_tokens = 5},
    [773] = {.lex_state = 122},
    [774] = {.lex_state = 194},
    [775] = {.lex_state = 122},
    [776] = {.lex_state = 159},
    [777] = {.lex_state = 122},
    [778] = {.lex_state = 190},
    [779] = {.lex_state = 122},
    [780] = {.lex_state = 182, .external_tokens = 3},
    [781] = {.lex_state = 138, .external_tokens = 5},
    [782] = {.lex_state = 182, .external_tokens = 3},
    [783] = {.lex_state = 138, .external_tokens = 5},
    [784] = {.lex_state = 188, .external_tokens = 5},
    [785] = {.lex_state = 182, .external_tokens = 3},
    [786] = {.lex_state = 235},
    [787] = {.lex_state = 156},
    [788] = {.lex_state = 159},
    [789] = {.lex_state = 138, .external_tokens = 5},
    [790] = {.lex_state = 173},
    [791] = {.lex_state = 155},
    [792] = {.lex_state = 125, .external_tokens = 2},
    [793] = {.lex_state = 154},
    [794] = {.lex_state = 125, .external_tokens = 2},
    [795] = {.lex_state = 125, .external_tokens = 2},
    [796] = {.lex_state = 177, .external_tokens = 2},
    [797] = {.lex_state = 181},
    [798] = {.lex_state = 120},
    [799] = {.lex_state = 125, .external_tokens = 2},
    [800] = {.lex_state = 125, .external_tokens = 2},
    [801] = {.lex_state = 157},
    [802] = {.lex_state = 227},
    [803] = {.lex_state = 156},
    [804] = {.lex_state = 157},
    [805] = {.lex_state = 162},
    [806] = {.lex_state = 125, .external_tokens = 2},
    [807] = {.lex_state = 158},
    [808] = {.lex_state = 157},
    [809] = {.lex_state = 180},
    [810] = {.lex_state = 195},
    [811] = {.lex_state = 182, .external_tokens = 3},
    [812] = {.lex_state = 138, .external_tokens = 5},
    [813] = {.lex_state = 196},
    [814] = {.lex_state = 120},
    [815] = {.lex_state = 182, .external_tokens = 3},
    [816] = {.lex_state = 220, .external_tokens = 5},
    [817] = {.lex_state = 166},
    [818] = {.lex_state = 182, .external_tokens = 3},
    [819] = {.lex_state = 198},
    [820] = {.lex_state = 166},
    [821] = {.lex_state = 182, .external_tokens = 3},
    [822] = {.lex_state = 222, .external_tokens = 5},
    [823] = {.lex_state = 138, .external_tokens = 5},
    [824] = {.lex_state = 120},
    [825] = {.lex_state = 236},
    [826] = {.lex_state = 120},
    [827] = {.lex_state = 125, .external_tokens = 2},
    [828] = {.lex_state = 236},
    [829] = {.lex_state = 236},
    [830] = {.lex_state = 168},
    [831] = {.lex_state = 166},
    [832] = {.lex_state = 182, .external_tokens = 3},
    [833] = {.lex_state = 223, .external_tokens = 5},
    [834] = {.lex_state = 166},
    [835] = {.lex_state = 182, .external_tokens = 3},
    [836] = {.lex_state = 223, .external_tokens = 5},
    [837] = {.lex_state = 138, .external_tokens = 5},
    [838] = {.lex_state = 197, .external_tokens = 2},
    [839] = {.lex_state = 125, .external_tokens = 2},
    [840] = {.lex_state = 120},
    [841] = {.lex_state = 153},
    [842] = {.lex_state = 125, .external_tokens = 2},
    [843] = {.lex_state = 125, .external_tokens = 2},
    [844] = {.lex_state = 237, .external_tokens = 2},
    [845] = {.lex_state = 224, .external_tokens = 2},
    [846] = {.lex_state = 195},
    [847] = {.lex_state = 225, .external_tokens = 2},
    [848] = {.lex_state = 238, .external_tokens = 2},
    [849] = {.lex_state = 158},
    [850] = {.lex_state = 159},
    [851] = {.lex_state = 165},
    [852] = {.lex_state = 125, .external_tokens = 2},
    [853] = {.lex_state = 182, .external_tokens = 3},
    [854] = {.lex_state = 120},
    [855] = {.lex_state = 238, .external_tokens = 2},
    [856] = {.lex_state = 120},
    [857] = {.lex_state = 167, .external_tokens = 2},
    [858] = {.lex_state = 120},
    [859] = {.lex_state = 167, .external_tokens = 2},
    [860] = {.lex_state = 167, .external_tokens = 2},
    [861] = {.lex_state = 238, .external_tokens = 2},
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
        [sym_module] = STATE(19),
        [sym__statement] = STATE(667),
        [sym__simple_statement] = STATE(668),
        [sym_import_statement] = STATE(6),
        [sym_aliased_import] = STATE(669),
        [sym_print_statement] = STATE(6),
        [sym_expression_statement] = STATE(6),
        [sym_return_statement] = STATE(6),
        [sym_delete_statement] = STATE(6),
        [sym__compound_statement] = STATE(670),
        [sym_if_statement] = STATE(671),
        [sym_elif_clause] = STATE(672),
        [sym_else_clause] = STATE(673),
        [sym_for_statement] = STATE(671),
        [sym_while_statement] = STATE(671),
        [sym_try_statement] = STATE(671),
        [sym_except_clause] = STATE(674),
        [sym_finally_clause] = STATE(675),
        [sym_with_statement] = STATE(671),
        [sym_with_item] = STATE(676),
        [sym_function_definition] = STATE(677),
        [sym_parameters] = STATE(678),
        [sym_default_parameter] = STATE(679),
        [sym_list_splat_parameter] = STATE(680),
        [sym_dictionary_splat_parameter] = STATE(681),
        [sym_class_definition] = STATE(677),
        [sym_decorated_definition] = STATE(671),
        [sym_decorator] = STATE(682),
        [sym__suite] = STATE(683),
        [sym_arguments] = STATE(365),
        [sym_expression_list] = STATE(684),
        [sym_dotted_name] = STATE(685),
        [sym__expression] = STATE(686),
        [sym_binary_operator] = STATE(18),
        [sym_unary_operator] = STATE(18),
        [sym_subscript] = STATE(18),
        [sym_call] = STATE(18),
        [sym_keyword_argument] = STATE(687),
        [sym_list_splat_argument] = STATE(688),
        [sym_dictionary_splat_argument] = STATE(689),
        [sym_list] = STATE(18),
        [sym_list_comprehension] = STATE(18),
        [sym_dictionary] = STATE(18),
        [sym_dictionary_comprehension] = STATE(18),
        [sym_pair] = STATE(690),
        [sym_set] = STATE(18),
        [sym_set_comprehension] = STATE(18),
        [aux_sym_module_repeat1] = STATE(691),
        [aux_sym_import_statement_repeat1] = STATE(629),
        [aux_sym_print_statement_repeat1] = STATE(692),
        [aux_sym_if_statement_repeat1] = STATE(693),
        [aux_sym_try_statement_repeat1] = STATE(694),
        [aux_sym_with_statement_repeat1] = STATE(695),
        [aux_sym_parameters_repeat1] = STATE(433),
        [aux_sym_decorated_definition_repeat1] = STATE(696),
        [aux_sym_dotted_name_repeat1] = STATE(376),
        [aux_sym_subscript_repeat1] = STATE(56),
        [aux_sym_call_repeat1] = STATE(300),
        [aux_sym_call_repeat2] = STATE(697),
        [aux_sym_dictionary_repeat1] = STATE(328),
        [ts_builtin_sym_end] = ACTIONS(1),
        [anon_sym_SEMI] = ACTIONS(3),
        [anon_sym_import] = ACTIONS(5),
        [anon_sym_COMMA] = ACTIONS(7),
        [anon_sym_as] = ACTIONS(9),
        [anon_sym_print] = ACTIONS(11),
        [anon_sym_return] = ACTIONS(13),
        [anon_sym_del] = ACTIONS(15),
        [sym_pass_statement] = ACTIONS(17),
        [sym_break_statement] = ACTIONS(17),
        [sym_continue_statement] = ACTIONS(17),
        [anon_sym_if] = ACTIONS(19),
        [anon_sym_COLON] = ACTIONS(21),
        [anon_sym_elif] = ACTIONS(23),
        [anon_sym_else] = ACTIONS(25),
        [anon_sym_for] = ACTIONS(27),
        [anon_sym_in] = ACTIONS(29),
        [anon_sym_while] = ACTIONS(31),
        [anon_sym_try] = ACTIONS(33),
        [anon_sym_except] = ACTIONS(35),
        [anon_sym_finally] = ACTIONS(37),
        [anon_sym_with] = ACTIONS(39),
        [anon_sym_def] = ACTIONS(41),
        [anon_sym_LPAREN] = ACTIONS(43),
        [anon_sym_RPAREN] = ACTIONS(45),
        [anon_sym_EQ] = ACTIONS(47),
        [anon_sym_STAR] = ACTIONS(49),
        [anon_sym_class] = ACTIONS(51),
        [anon_sym_AT] = ACTIONS(53),
        [anon_sym_DOT] = ACTIONS(55),
        [anon_sym_PLUS] = ACTIONS(57),
        [anon_sym_DASH] = ACTIONS(57),
        [anon_sym_SLASH] = ACTIONS(57),
        [anon_sym_STAR_STAR] = ACTIONS(59),
        [anon_sym_PIPE] = ACTIONS(57),
        [anon_sym_AMP] = ACTIONS(57),
        [anon_sym_CARET] = ACTIONS(57),
        [anon_sym_LT_LT] = ACTIONS(57),
        [anon_sym_GT_GT] = ACTIONS(57),
        [anon_sym_and] = ACTIONS(61),
        [anon_sym_or] = ACTIONS(61),
        [anon_sym_not] = ACTIONS(63),
        [anon_sym_LBRACK] = ACTIONS(65),
        [anon_sym_DOT_DOT_DOT] = ACTIONS(67),
        [anon_sym_RBRACK] = ACTIONS(69),
        [anon_sym_LBRACE] = ACTIONS(71),
        [anon_sym_RBRACE] = ACTIONS(73),
        [sym_number] = ACTIONS(75),
        [sym_identifier] = ACTIONS(77),
        [sym_comment] = ACTIONS(79),
        [sym__newline] = ACTIONS(81),
        [sym__indent] = ACTIONS(83),
        [sym__dedent] = ACTIONS(85),
    },
    [1] = {
        [sym_module] = STATE(19),
        [sym__statement] = STATE(20),
        [sym__simple_statement] = STATE(21),
        [sym_import_statement] = STATE(6),
        [sym_print_statement] = STATE(6),
        [sym_expression_statement] = STATE(6),
        [sym_return_statement] = STATE(6),
        [sym_delete_statement] = STATE(6),
        [sym__compound_statement] = STATE(22),
        [sym_if_statement] = STATE(23),
        [sym_for_statement] = STATE(23),
        [sym_while_statement] = STATE(23),
        [sym_try_statement] = STATE(23),
        [sym_with_statement] = STATE(23),
        [sym_function_definition] = STATE(23),
        [sym_class_definition] = STATE(23),
        [sym_decorated_definition] = STATE(23),
        [sym_decorator] = STATE(24),
        [sym__expression] = STATE(25),
        [sym_binary_operator] = STATE(18),
        [sym_unary_operator] = STATE(18),
        [sym_subscript] = STATE(18),
        [sym_call] = STATE(18),
        [sym_list] = STATE(18),
        [sym_list_comprehension] = STATE(18),
        [sym_dictionary] = STATE(18),
        [sym_dictionary_comprehension] = STATE(18),
        [sym_set] = STATE(18),
        [sym_set_comprehension] = STATE(18),
        [aux_sym_module_repeat1] = STATE(26),
        [aux_sym_decorated_definition_repeat1] = STATE(27),
        [ts_builtin_sym_end] = ACTIONS(87),
        [anon_sym_import] = ACTIONS(89),
        [anon_sym_print] = ACTIONS(91),
        [anon_sym_return] = ACTIONS(93),
        [anon_sym_del] = ACTIONS(95),
        [sym_pass_statement] = ACTIONS(97),
        [sym_break_statement] = ACTIONS(97),
        [sym_continue_statement] = ACTIONS(97),
        [anon_sym_if] = ACTIONS(99),
        [anon_sym_for] = ACTIONS(101),
        [anon_sym_while] = ACTIONS(103),
        [anon_sym_try] = ACTIONS(105),
        [anon_sym_with] = ACTIONS(107),
        [anon_sym_def] = ACTIONS(109),
        [anon_sym_class] = ACTIONS(111),
        [anon_sym_AT] = ACTIONS(113),
        [anon_sym_not] = ACTIONS(115),
        [anon_sym_LBRACK] = ACTIONS(117),
        [anon_sym_LBRACE] = ACTIONS(119),
        [sym_number] = ACTIONS(121),
        [sym_identifier] = ACTIONS(123),
        [sym_comment] = ACTIONS(79),
    },
    [2] = {
        [sym_aliased_import] = STATE(625),
        [sym_dotted_name] = STATE(626),
        [sym_identifier] = ACTIONS(125),
        [sym_comment] = ACTIONS(79),
    },
    [3] = {
        [sym__expression] = STATE(623),
        [sym_binary_operator] = STATE(18),
        [sym_unary_operator] = STATE(18),
        [sym_subscript] = STATE(18),
        [sym_call] = STATE(18),
        [sym_list] = STATE(18),
        [sym_list_comprehension] = STATE(18),
        [sym_dictionary] = STATE(18),
        [sym_dictionary_comprehension] = STATE(18),
        [sym_set] = STATE(18),
        [sym_set_comprehension] = STATE(18),
        [anon_sym_not] = ACTIONS(127),
        [anon_sym_LBRACK] = ACTIONS(117),
        [anon_sym_LBRACE] = ACTIONS(119),
        [sym_number] = ACTIONS(121),
        [sym_identifier] = ACTIONS(123),
        [sym_comment] = ACTIONS(79),
    },
    [4] = {
        [sym_expression_list] = STATE(622),
        [sym__expression] = STATE(605),
        [sym_binary_operator] = STATE(18),
        [sym_unary_operator] = STATE(18),
        [sym_subscript] = STATE(18),
        [sym_call] = STATE(18),
        [sym_list] = STATE(18),
        [sym_list_comprehension] = STATE(18),
        [sym_dictionary] = STATE(18),
        [sym_dictionary_comprehension] = STATE(18),
        [sym_set] = STATE(18),
        [sym_set_comprehension] = STATE(18),
        [anon_sym_not] = ACTIONS(127),
        [anon_sym_LBRACK] = ACTIONS(117),
        [anon_sym_LBRACE] = ACTIONS(119),
        [sym_number] = ACTIONS(121),
        [sym_identifier] = ACTIONS(123),
        [sym_comment] = ACTIONS(79),
    },
    [5] = {
        [sym_expression_list] = STATE(604),
        [sym__expression] = STATE(605),
        [sym_binary_operator] = STATE(18),
        [sym_unary_operator] = STATE(18),
        [sym_subscript] = STATE(18),
        [sym_call] = STATE(18),
        [sym_list] = STATE(18),
        [sym_list_comprehension] = STATE(18),
        [sym_dictionary] = STATE(18),
        [sym_dictionary_comprehension] = STATE(18),
        [sym_set] = STATE(18),
        [sym_set_comprehension] = STATE(18),
        [anon_sym_not] = ACTIONS(127),
        [anon_sym_LBRACK] = ACTIONS(117),
        [anon_sym_LBRACE] = ACTIONS(119),
        [sym_number] = ACTIONS(121),
        [sym_identifier] = ACTIONS(123),
        [sym_comment] = ACTIONS(79),
    },
    [6] = {
        [sym_comment] = ACTIONS(79),
        [sym__newline] = ACTIONS(129),
    },
    [7] = {
        [sym__expression] = STATE(591),
        [sym_binary_operator] = STATE(44),
        [sym_unary_operator] = STATE(44),
        [sym_subscript] = STATE(44),
        [sym_call] = STATE(44),
        [sym_list] = STATE(44),
        [sym_list_comprehension] = STATE(44),
        [sym_dictionary] = STATE(44),
        [sym_dictionary_comprehension] = STATE(44),
        [sym_set] = STATE(44),
        [sym_set_comprehension] = STATE(44),
        [anon_sym_not] = ACTIONS(131),
        [anon_sym_LBRACK] = ACTIONS(133),
        [anon_sym_LBRACE] = ACTIONS(135),
        [sym_number] = ACTIONS(137),
        [sym_identifier] = ACTIONS(139),
        [sym_comment] = ACTIONS(79),
    },
    [8] = {
        [sym_expression_list] = STATE(585),
        [sym__expression] = STATE(165),
        [sym_binary_operator] = STATE(44),
        [sym_unary_operator] = STATE(44),
        [sym_subscript] = STATE(44),
        [sym_call] = STATE(44),
        [sym_list] = STATE(44),
        [sym_list_comprehension] = STATE(44),
        [sym_dictionary] = STATE(44),
        [sym_dictionary_comprehension] = STATE(44),
        [sym_set] = STATE(44),
        [sym_set_comprehension] = STATE(44),
        [anon_sym_not] = ACTIONS(141),
        [anon_sym_LBRACK] = ACTIONS(133),
        [anon_sym_LBRACE] = ACTIONS(135),
        [sym_number] = ACTIONS(137),
        [sym_identifier] = ACTIONS(139),
        [sym_comment] = ACTIONS(79),
    },
    [9] = {
        [sym__expression] = STATE(581),
        [sym_binary_operator] = STATE(44),
        [sym_unary_operator] = STATE(44),
        [sym_subscript] = STATE(44),
        [sym_call] = STATE(44),
        [sym_list] = STATE(44),
        [sym_list_comprehension] = STATE(44),
        [sym_dictionary] = STATE(44),
        [sym_dictionary_comprehension] = STATE(44),
        [sym_set] = STATE(44),
        [sym_set_comprehension] = STATE(44),
        [anon_sym_not] = ACTIONS(131),
        [anon_sym_LBRACK] = ACTIONS(133),
        [anon_sym_LBRACE] = ACTIONS(135),
        [sym_number] = ACTIONS(137),
        [sym_identifier] = ACTIONS(139),
        [sym_comment] = ACTIONS(79),
    },
    [10] = {
        [anon_sym_COLON] = ACTIONS(143),
        [sym_comment] = ACTIONS(79),
    },
    [11] = {
        [sym_with_item] = STATE(552),
        [sym__expression] = STATE(456),
        [sym_binary_operator] = STATE(44),
        [sym_unary_operator] = STATE(44),
        [sym_subscript] = STATE(44),
        [sym_call] = STATE(44),
        [sym_list] = STATE(44),
        [sym_list_comprehension] = STATE(44),
        [sym_dictionary] = STATE(44),
        [sym_dictionary_comprehension] = STATE(44),
        [sym_set] = STATE(44),
        [sym_set_comprehension] = STATE(44),
        [anon_sym_not] = ACTIONS(145),
        [anon_sym_LBRACK] = ACTIONS(133),
        [anon_sym_LBRACE] = ACTIONS(135),
        [sym_number] = ACTIONS(137),
        [sym_identifier] = ACTIONS(139),
        [sym_comment] = ACTIONS(79),
    },
    [12] = {
        [sym_identifier] = ACTIONS(147),
        [sym_comment] = ACTIONS(79),
    },
    [13] = {
        [sym_identifier] = ACTIONS(149),
        [sym_comment] = ACTIONS(79),
    },
    [14] = {
        [sym_dotted_name] = STATE(362),
        [sym_identifier] = ACTIONS(125),
        [sym_comment] = ACTIONS(79),
    },
    [15] = {
        [sym__expression] = STATE(360),
        [sym_binary_operator] = STATE(18),
        [sym_unary_operator] = STATE(18),
        [sym_subscript] = STATE(18),
        [sym_call] = STATE(18),
        [sym_list] = STATE(18),
        [sym_list_comprehension] = STATE(18),
        [sym_dictionary] = STATE(18),
        [sym_dictionary_comprehension] = STATE(18),
        [sym_set] = STATE(18),
        [sym_set_comprehension] = STATE(18),
        [anon_sym_not] = ACTIONS(115),
        [anon_sym_LBRACK] = ACTIONS(117),
        [anon_sym_LBRACE] = ACTIONS(119),
        [sym_number] = ACTIONS(121),
        [sym_identifier] = ACTIONS(123),
        [sym_comment] = ACTIONS(79),
    },
    [16] = {
        [sym__expression] = STATE(348),
        [sym_binary_operator] = STATE(44),
        [sym_unary_operator] = STATE(44),
        [sym_subscript] = STATE(44),
        [sym_call] = STATE(44),
        [sym_list] = STATE(44),
        [sym_list_comprehension] = STATE(44),
        [sym_dictionary] = STATE(44),
        [sym_dictionary_comprehension] = STATE(44),
        [sym_set] = STATE(44),
        [sym_set_comprehension] = STATE(44),
        [anon_sym_not] = ACTIONS(151),
        [anon_sym_LBRACK] = ACTIONS(133),
        [anon_sym_RBRACK] = ACTIONS(153),
        [anon_sym_LBRACE] = ACTIONS(135),
        [sym_number] = ACTIONS(137),
        [sym_identifier] = ACTIONS(139),
        [sym_comment] = ACTIONS(79),
    },
    [17] = {
        [sym__expression] = STATE(323),
        [sym_binary_operator] = STATE(44),
        [sym_unary_operator] = STATE(44),
        [sym_subscript] = STATE(44),
        [sym_call] = STATE(44),
        [sym_list] = STATE(44),
        [sym_list_comprehension] = STATE(44),
        [sym_dictionary] = STATE(44),
        [sym_dictionary_comprehension] = STATE(44),
        [sym_pair] = STATE(324),
        [sym_set] = STATE(44),
        [sym_set_comprehension] = STATE(44),
        [anon_sym_not] = ACTIONS(155),
        [anon_sym_LBRACK] = ACTIONS(133),
        [anon_sym_LBRACE] = ACTIONS(135),
        [anon_sym_RBRACE] = ACTIONS(157),
        [sym_number] = ACTIONS(137),
        [sym_identifier] = ACTIONS(139),
        [sym_comment] = ACTIONS(79),
    },
    [18] = {
        [anon_sym_COMMA] = ACTIONS(159),
        [anon_sym_as] = ACTIONS(159),
        [anon_sym_COLON] = ACTIONS(159),
        [anon_sym_for] = ACTIONS(159),
        [anon_sym_in] = ACTIONS(159),
        [anon_sym_LPAREN] = ACTIONS(159),
        [anon_sym_RPAREN] = ACTIONS(159),
        [anon_sym_STAR] = ACTIONS(161),
        [anon_sym_PLUS] = ACTIONS(159),
        [anon_sym_DASH] = ACTIONS(159),
        [anon_sym_SLASH] = ACTIONS(159),
        [anon_sym_STAR_STAR] = ACTIONS(159),
        [anon_sym_PIPE] = ACTIONS(159),
        [anon_sym_AMP] = ACTIONS(159),
        [anon_sym_CARET] = ACTIONS(159),
        [anon_sym_LT_LT] = ACTIONS(159),
        [anon_sym_GT_GT] = ACTIONS(159),
        [anon_sym_and] = ACTIONS(159),
        [anon_sym_or] = ACTIONS(159),
        [anon_sym_LBRACK] = ACTIONS(159),
        [anon_sym_RBRACK] = ACTIONS(159),
        [anon_sym_RBRACE] = ACTIONS(159),
        [sym_comment] = ACTIONS(79),
        [sym__newline] = ACTIONS(159),
    },
    [19] = {
        [ts_builtin_sym_end] = ACTIONS(163),
        [sym_comment] = ACTIONS(79),
    },
    [20] = {
        [ts_builtin_sym_end] = ACTIONS(165),
        [anon_sym_SEMI] = ACTIONS(165),
        [anon_sym_import] = ACTIONS(167),
        [anon_sym_print] = ACTIONS(167),
        [anon_sym_return] = ACTIONS(167),
        [anon_sym_del] = ACTIONS(167),
        [sym_pass_statement] = ACTIONS(167),
        [sym_break_statement] = ACTIONS(167),
        [sym_continue_statement] = ACTIONS(167),
        [anon_sym_if] = ACTIONS(167),
        [anon_sym_for] = ACTIONS(167),
        [anon_sym_while] = ACTIONS(167),
        [anon_sym_try] = ACTIONS(167),
        [anon_sym_with] = ACTIONS(167),
        [anon_sym_def] = ACTIONS(167),
        [anon_sym_class] = ACTIONS(167),
        [anon_sym_AT] = ACTIONS(165),
        [anon_sym_not] = ACTIONS(167),
        [anon_sym_LBRACK] = ACTIONS(165),
        [anon_sym_LBRACE] = ACTIONS(165),
        [sym_number] = ACTIONS(167),
        [sym_identifier] = ACTIONS(169),
        [sym_comment] = ACTIONS(79),
        [sym__newline] = ACTIONS(165),
    },
    [21] = {
        [sym_comment] = ACTIONS(79),
        [sym__newline] = ACTIONS(171),
    },
    [22] = {
        [ts_builtin_sym_end] = ACTIONS(173),
        [anon_sym_SEMI] = ACTIONS(173),
        [anon_sym_import] = ACTIONS(175),
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
        [sym_comment] = ACTIONS(79),
        [sym__newline] = ACTIONS(173),
    },
    [23] = {
        [ts_builtin_sym_end] = ACTIONS(179),
        [anon_sym_SEMI] = ACTIONS(179),
        [anon_sym_import] = ACTIONS(181),
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
        [sym_number] = ACTIONS(181),
        [sym_identifier] = ACTIONS(183),
        [sym_comment] = ACTIONS(79),
        [sym__newline] = ACTIONS(179),
    },
    [24] = {
        [anon_sym_def] = ACTIONS(185),
        [anon_sym_class] = ACTIONS(185),
        [anon_sym_AT] = ACTIONS(185),
        [sym_comment] = ACTIONS(79),
    },
    [25] = {
        [anon_sym_LPAREN] = ACTIONS(187),
        [anon_sym_STAR] = ACTIONS(189),
        [anon_sym_PLUS] = ACTIONS(191),
        [anon_sym_DASH] = ACTIONS(191),
        [anon_sym_SLASH] = ACTIONS(193),
        [anon_sym_STAR_STAR] = ACTIONS(195),
        [anon_sym_PIPE] = ACTIONS(197),
        [anon_sym_AMP] = ACTIONS(199),
        [anon_sym_CARET] = ACTIONS(201),
        [anon_sym_LT_LT] = ACTIONS(191),
        [anon_sym_GT_GT] = ACTIONS(191),
        [anon_sym_and] = ACTIONS(199),
        [anon_sym_or] = ACTIONS(197),
        [anon_sym_LBRACK] = ACTIONS(203),
        [sym_comment] = ACTIONS(79),
        [sym__newline] = ACTIONS(205),
    },
    [26] = {
        [sym__statement] = STATE(31),
        [sym__simple_statement] = STATE(21),
        [sym_import_statement] = STATE(6),
        [sym_print_statement] = STATE(6),
        [sym_expression_statement] = STATE(6),
        [sym_return_statement] = STATE(6),
        [sym_delete_statement] = STATE(6),
        [sym__compound_statement] = STATE(22),
        [sym_if_statement] = STATE(23),
        [sym_for_statement] = STATE(23),
        [sym_while_statement] = STATE(23),
        [sym_try_statement] = STATE(23),
        [sym_with_statement] = STATE(23),
        [sym_function_definition] = STATE(23),
        [sym_class_definition] = STATE(23),
        [sym_decorated_definition] = STATE(23),
        [sym_decorator] = STATE(24),
        [sym__expression] = STATE(25),
        [sym_binary_operator] = STATE(18),
        [sym_unary_operator] = STATE(18),
        [sym_subscript] = STATE(18),
        [sym_call] = STATE(18),
        [sym_list] = STATE(18),
        [sym_list_comprehension] = STATE(18),
        [sym_dictionary] = STATE(18),
        [sym_dictionary_comprehension] = STATE(18),
        [sym_set] = STATE(18),
        [sym_set_comprehension] = STATE(18),
        [aux_sym_decorated_definition_repeat1] = STATE(27),
        [ts_builtin_sym_end] = ACTIONS(207),
        [anon_sym_SEMI] = ACTIONS(209),
        [anon_sym_import] = ACTIONS(89),
        [anon_sym_print] = ACTIONS(91),
        [anon_sym_return] = ACTIONS(93),
        [anon_sym_del] = ACTIONS(95),
        [sym_pass_statement] = ACTIONS(97),
        [sym_break_statement] = ACTIONS(97),
        [sym_continue_statement] = ACTIONS(97),
        [anon_sym_if] = ACTIONS(99),
        [anon_sym_for] = ACTIONS(101),
        [anon_sym_while] = ACTIONS(103),
        [anon_sym_try] = ACTIONS(105),
        [anon_sym_with] = ACTIONS(107),
        [anon_sym_def] = ACTIONS(109),
        [anon_sym_class] = ACTIONS(111),
        [anon_sym_AT] = ACTIONS(113),
        [anon_sym_not] = ACTIONS(115),
        [anon_sym_LBRACK] = ACTIONS(117),
        [anon_sym_LBRACE] = ACTIONS(119),
        [sym_number] = ACTIONS(121),
        [sym_identifier] = ACTIONS(123),
        [sym_comment] = ACTIONS(79),
        [sym__newline] = ACTIONS(209),
    },
    [27] = {
        [sym_function_definition] = STATE(28),
        [sym_class_definition] = STATE(28),
        [sym_decorator] = STATE(29),
        [anon_sym_def] = ACTIONS(211),
        [anon_sym_class] = ACTIONS(213),
        [anon_sym_AT] = ACTIONS(113),
        [sym_comment] = ACTIONS(79),
    },
    [28] = {
        [ts_builtin_sym_end] = ACTIONS(215),
        [anon_sym_SEMI] = ACTIONS(215),
        [anon_sym_import] = ACTIONS(217),
        [anon_sym_print] = ACTIONS(217),
        [anon_sym_return] = ACTIONS(217),
        [anon_sym_del] = ACTIONS(217),
        [sym_pass_statement] = ACTIONS(217),
        [sym_break_statement] = ACTIONS(217),
        [sym_continue_statement] = ACTIONS(217),
        [anon_sym_if] = ACTIONS(217),
        [anon_sym_for] = ACTIONS(217),
        [anon_sym_while] = ACTIONS(217),
        [anon_sym_try] = ACTIONS(217),
        [anon_sym_with] = ACTIONS(217),
        [anon_sym_def] = ACTIONS(217),
        [anon_sym_class] = ACTIONS(217),
        [anon_sym_AT] = ACTIONS(215),
        [anon_sym_not] = ACTIONS(217),
        [anon_sym_LBRACK] = ACTIONS(215),
        [anon_sym_LBRACE] = ACTIONS(215),
        [sym_number] = ACTIONS(217),
        [sym_identifier] = ACTIONS(219),
        [sym_comment] = ACTIONS(79),
        [sym__newline] = ACTIONS(215),
    },
    [29] = {
        [anon_sym_def] = ACTIONS(221),
        [anon_sym_class] = ACTIONS(221),
        [anon_sym_AT] = ACTIONS(221),
        [sym_comment] = ACTIONS(79),
    },
    [30] = {
        [ts_builtin_sym_end] = ACTIONS(223),
        [sym_comment] = ACTIONS(79),
    },
    [31] = {
        [ts_builtin_sym_end] = ACTIONS(225),
        [anon_sym_SEMI] = ACTIONS(225),
        [anon_sym_import] = ACTIONS(227),
        [anon_sym_print] = ACTIONS(227),
        [anon_sym_return] = ACTIONS(227),
        [anon_sym_del] = ACTIONS(227),
        [sym_pass_statement] = ACTIONS(227),
        [sym_break_statement] = ACTIONS(227),
        [sym_continue_statement] = ACTIONS(227),
        [anon_sym_if] = ACTIONS(227),
        [anon_sym_for] = ACTIONS(227),
        [anon_sym_while] = ACTIONS(227),
        [anon_sym_try] = ACTIONS(227),
        [anon_sym_with] = ACTIONS(227),
        [anon_sym_def] = ACTIONS(227),
        [anon_sym_class] = ACTIONS(227),
        [anon_sym_AT] = ACTIONS(225),
        [anon_sym_not] = ACTIONS(227),
        [anon_sym_LBRACK] = ACTIONS(225),
        [anon_sym_LBRACE] = ACTIONS(225),
        [sym_number] = ACTIONS(227),
        [sym_identifier] = ACTIONS(229),
        [sym_comment] = ACTIONS(79),
        [sym__newline] = ACTIONS(225),
    },
    [32] = {
        [sym__expression] = STATE(296),
        [sym_binary_operator] = STATE(44),
        [sym_unary_operator] = STATE(44),
        [sym_subscript] = STATE(44),
        [sym_call] = STATE(44),
        [sym_keyword_argument] = STATE(297),
        [sym_list_splat_argument] = STATE(298),
        [sym_dictionary_splat_argument] = STATE(299),
        [sym_list] = STATE(44),
        [sym_list_comprehension] = STATE(44),
        [sym_dictionary] = STATE(44),
        [sym_dictionary_comprehension] = STATE(44),
        [sym_set] = STATE(44),
        [sym_set_comprehension] = STATE(44),
        [aux_sym_call_repeat1] = STATE(300),
        [anon_sym_STAR] = ACTIONS(231),
        [anon_sym_STAR_STAR] = ACTIONS(233),
        [anon_sym_not] = ACTIONS(235),
        [anon_sym_LBRACK] = ACTIONS(133),
        [anon_sym_LBRACE] = ACTIONS(135),
        [sym_number] = ACTIONS(137),
        [sym_identifier] = ACTIONS(237),
        [sym_comment] = ACTIONS(79),
    },
    [33] = {
        [sym__expression] = STATE(295),
        [sym_binary_operator] = STATE(18),
        [sym_unary_operator] = STATE(18),
        [sym_subscript] = STATE(18),
        [sym_call] = STATE(18),
        [sym_list] = STATE(18),
        [sym_list_comprehension] = STATE(18),
        [sym_dictionary] = STATE(18),
        [sym_dictionary_comprehension] = STATE(18),
        [sym_set] = STATE(18),
        [sym_set_comprehension] = STATE(18),
        [anon_sym_not] = ACTIONS(115),
        [anon_sym_LBRACK] = ACTIONS(117),
        [anon_sym_LBRACE] = ACTIONS(119),
        [sym_number] = ACTIONS(121),
        [sym_identifier] = ACTIONS(123),
        [sym_comment] = ACTIONS(79),
    },
    [34] = {
        [sym__expression] = STATE(292),
        [sym_binary_operator] = STATE(18),
        [sym_unary_operator] = STATE(18),
        [sym_subscript] = STATE(18),
        [sym_call] = STATE(18),
        [sym_list] = STATE(18),
        [sym_list_comprehension] = STATE(18),
        [sym_dictionary] = STATE(18),
        [sym_dictionary_comprehension] = STATE(18),
        [sym_set] = STATE(18),
        [sym_set_comprehension] = STATE(18),
        [anon_sym_not] = ACTIONS(115),
        [anon_sym_LBRACK] = ACTIONS(117),
        [anon_sym_LBRACE] = ACTIONS(119),
        [sym_number] = ACTIONS(121),
        [sym_identifier] = ACTIONS(123),
        [sym_comment] = ACTIONS(79),
    },
    [35] = {
        [sym__expression] = STATE(294),
        [sym_binary_operator] = STATE(18),
        [sym_unary_operator] = STATE(18),
        [sym_subscript] = STATE(18),
        [sym_call] = STATE(18),
        [sym_list] = STATE(18),
        [sym_list_comprehension] = STATE(18),
        [sym_dictionary] = STATE(18),
        [sym_dictionary_comprehension] = STATE(18),
        [sym_set] = STATE(18),
        [sym_set_comprehension] = STATE(18),
        [anon_sym_not] = ACTIONS(115),
        [anon_sym_LBRACK] = ACTIONS(117),
        [anon_sym_LBRACE] = ACTIONS(119),
        [sym_number] = ACTIONS(121),
        [sym_identifier] = ACTIONS(123),
        [sym_comment] = ACTIONS(79),
    },
    [36] = {
        [sym__expression] = STATE(290),
        [sym_binary_operator] = STATE(18),
        [sym_unary_operator] = STATE(18),
        [sym_subscript] = STATE(18),
        [sym_call] = STATE(18),
        [sym_list] = STATE(18),
        [sym_list_comprehension] = STATE(18),
        [sym_dictionary] = STATE(18),
        [sym_dictionary_comprehension] = STATE(18),
        [sym_set] = STATE(18),
        [sym_set_comprehension] = STATE(18),
        [anon_sym_not] = ACTIONS(115),
        [anon_sym_LBRACK] = ACTIONS(117),
        [anon_sym_LBRACE] = ACTIONS(119),
        [sym_number] = ACTIONS(121),
        [sym_identifier] = ACTIONS(123),
        [sym_comment] = ACTIONS(79),
    },
    [37] = {
        [sym__expression] = STATE(291),
        [sym_binary_operator] = STATE(18),
        [sym_unary_operator] = STATE(18),
        [sym_subscript] = STATE(18),
        [sym_call] = STATE(18),
        [sym_list] = STATE(18),
        [sym_list_comprehension] = STATE(18),
        [sym_dictionary] = STATE(18),
        [sym_dictionary_comprehension] = STATE(18),
        [sym_set] = STATE(18),
        [sym_set_comprehension] = STATE(18),
        [anon_sym_not] = ACTIONS(115),
        [anon_sym_LBRACK] = ACTIONS(117),
        [anon_sym_LBRACE] = ACTIONS(119),
        [sym_number] = ACTIONS(121),
        [sym_identifier] = ACTIONS(123),
        [sym_comment] = ACTIONS(79),
    },
    [38] = {
        [sym__expression] = STATE(293),
        [sym_binary_operator] = STATE(18),
        [sym_unary_operator] = STATE(18),
        [sym_subscript] = STATE(18),
        [sym_call] = STATE(18),
        [sym_list] = STATE(18),
        [sym_list_comprehension] = STATE(18),
        [sym_dictionary] = STATE(18),
        [sym_dictionary_comprehension] = STATE(18),
        [sym_set] = STATE(18),
        [sym_set_comprehension] = STATE(18),
        [anon_sym_not] = ACTIONS(115),
        [anon_sym_LBRACK] = ACTIONS(117),
        [anon_sym_LBRACE] = ACTIONS(119),
        [sym_number] = ACTIONS(121),
        [sym_identifier] = ACTIONS(123),
        [sym_comment] = ACTIONS(79),
    },
    [39] = {
        [sym__expression] = STATE(45),
        [sym_binary_operator] = STATE(44),
        [sym_unary_operator] = STATE(44),
        [sym_subscript] = STATE(44),
        [sym_call] = STATE(44),
        [sym_list] = STATE(44),
        [sym_list_comprehension] = STATE(44),
        [sym_dictionary] = STATE(44),
        [sym_dictionary_comprehension] = STATE(44),
        [sym_set] = STATE(44),
        [sym_set_comprehension] = STATE(44),
        [anon_sym_not] = ACTIONS(239),
        [anon_sym_LBRACK] = ACTIONS(133),
        [anon_sym_DOT_DOT_DOT] = ACTIONS(241),
        [anon_sym_LBRACE] = ACTIONS(135),
        [sym_number] = ACTIONS(137),
        [sym_identifier] = ACTIONS(139),
        [sym_comment] = ACTIONS(79),
    },
    [40] = {
        [sym__expression] = STATE(275),
        [sym_binary_operator] = STATE(44),
        [sym_unary_operator] = STATE(44),
        [sym_subscript] = STATE(44),
        [sym_call] = STATE(44),
        [sym_list] = STATE(44),
        [sym_list_comprehension] = STATE(44),
        [sym_dictionary] = STATE(44),
        [sym_dictionary_comprehension] = STATE(44),
        [sym_set] = STATE(44),
        [sym_set_comprehension] = STATE(44),
        [anon_sym_not] = ACTIONS(239),
        [anon_sym_LBRACK] = ACTIONS(133),
        [anon_sym_LBRACE] = ACTIONS(135),
        [sym_number] = ACTIONS(137),
        [sym_identifier] = ACTIONS(139),
        [sym_comment] = ACTIONS(79),
    },
    [41] = {
        [sym__expression] = STATE(238),
        [sym_binary_operator] = STATE(44),
        [sym_unary_operator] = STATE(44),
        [sym_subscript] = STATE(44),
        [sym_call] = STATE(44),
        [sym_list] = STATE(44),
        [sym_list_comprehension] = STATE(44),
        [sym_dictionary] = STATE(44),
        [sym_dictionary_comprehension] = STATE(44),
        [sym_set] = STATE(44),
        [sym_set_comprehension] = STATE(44),
        [anon_sym_not] = ACTIONS(151),
        [anon_sym_LBRACK] = ACTIONS(133),
        [anon_sym_RBRACK] = ACTIONS(243),
        [anon_sym_LBRACE] = ACTIONS(135),
        [sym_number] = ACTIONS(137),
        [sym_identifier] = ACTIONS(139),
        [sym_comment] = ACTIONS(79),
    },
    [42] = {
        [aux_sym_subscript_repeat1] = STATE(56),
        [anon_sym_COMMA] = ACTIONS(245),
        [anon_sym_RBRACK] = ACTIONS(247),
        [sym_comment] = ACTIONS(79),
    },
    [43] = {
        [sym__expression] = STATE(126),
        [sym_binary_operator] = STATE(44),
        [sym_unary_operator] = STATE(44),
        [sym_subscript] = STATE(44),
        [sym_call] = STATE(44),
        [sym_list] = STATE(44),
        [sym_list_comprehension] = STATE(44),
        [sym_dictionary] = STATE(44),
        [sym_dictionary_comprehension] = STATE(44),
        [sym_pair] = STATE(127),
        [sym_set] = STATE(44),
        [sym_set_comprehension] = STATE(44),
        [anon_sym_not] = ACTIONS(155),
        [anon_sym_LBRACK] = ACTIONS(133),
        [anon_sym_LBRACE] = ACTIONS(135),
        [anon_sym_RBRACE] = ACTIONS(249),
        [sym_number] = ACTIONS(137),
        [sym_identifier] = ACTIONS(139),
        [sym_comment] = ACTIONS(79),
    },
    [44] = {
        [anon_sym_COMMA] = ACTIONS(159),
        [anon_sym_as] = ACTIONS(159),
        [anon_sym_COLON] = ACTIONS(159),
        [anon_sym_for] = ACTIONS(159),
        [anon_sym_in] = ACTIONS(159),
        [anon_sym_LPAREN] = ACTIONS(159),
        [anon_sym_RPAREN] = ACTIONS(159),
        [anon_sym_STAR] = ACTIONS(161),
        [anon_sym_PLUS] = ACTIONS(159),
        [anon_sym_DASH] = ACTIONS(159),
        [anon_sym_SLASH] = ACTIONS(159),
        [anon_sym_STAR_STAR] = ACTIONS(159),
        [anon_sym_PIPE] = ACTIONS(159),
        [anon_sym_AMP] = ACTIONS(159),
        [anon_sym_CARET] = ACTIONS(159),
        [anon_sym_LT_LT] = ACTIONS(159),
        [anon_sym_GT_GT] = ACTIONS(159),
        [anon_sym_and] = ACTIONS(159),
        [anon_sym_or] = ACTIONS(159),
        [anon_sym_LBRACK] = ACTIONS(159),
        [anon_sym_RBRACK] = ACTIONS(159),
        [anon_sym_RBRACE] = ACTIONS(159),
        [sym_comment] = ACTIONS(79),
    },
    [45] = {
        [aux_sym_subscript_repeat1] = STATE(56),
        [anon_sym_COMMA] = ACTIONS(245),
        [anon_sym_LPAREN] = ACTIONS(251),
        [anon_sym_STAR] = ACTIONS(253),
        [anon_sym_PLUS] = ACTIONS(255),
        [anon_sym_DASH] = ACTIONS(255),
        [anon_sym_SLASH] = ACTIONS(257),
        [anon_sym_STAR_STAR] = ACTIONS(259),
        [anon_sym_PIPE] = ACTIONS(261),
        [anon_sym_AMP] = ACTIONS(263),
        [anon_sym_CARET] = ACTIONS(265),
        [anon_sym_LT_LT] = ACTIONS(255),
        [anon_sym_GT_GT] = ACTIONS(255),
        [anon_sym_and] = ACTIONS(263),
        [anon_sym_or] = ACTIONS(261),
        [anon_sym_LBRACK] = ACTIONS(267),
        [anon_sym_RBRACK] = ACTIONS(247),
        [sym_comment] = ACTIONS(79),
    },
    [46] = {
        [sym__expression] = STATE(71),
        [sym_binary_operator] = STATE(44),
        [sym_unary_operator] = STATE(44),
        [sym_subscript] = STATE(44),
        [sym_call] = STATE(44),
        [sym_list] = STATE(44),
        [sym_list_comprehension] = STATE(44),
        [sym_dictionary] = STATE(44),
        [sym_dictionary_comprehension] = STATE(44),
        [sym_set] = STATE(44),
        [sym_set_comprehension] = STATE(44),
        [anon_sym_not] = ACTIONS(239),
        [anon_sym_LBRACK] = ACTIONS(133),
        [anon_sym_DOT_DOT_DOT] = ACTIONS(269),
        [anon_sym_RBRACK] = ACTIONS(271),
        [anon_sym_LBRACE] = ACTIONS(135),
        [sym_number] = ACTIONS(137),
        [sym_identifier] = ACTIONS(139),
        [sym_comment] = ACTIONS(79),
    },
    [47] = {
        [sym__expression] = STATE(82),
        [sym_binary_operator] = STATE(44),
        [sym_unary_operator] = STATE(44),
        [sym_subscript] = STATE(44),
        [sym_call] = STATE(44),
        [sym_keyword_argument] = STATE(83),
        [sym_list_splat_argument] = STATE(84),
        [sym_dictionary_splat_argument] = STATE(85),
        [sym_list] = STATE(44),
        [sym_list_comprehension] = STATE(44),
        [sym_dictionary] = STATE(44),
        [sym_dictionary_comprehension] = STATE(44),
        [sym_set] = STATE(44),
        [sym_set_comprehension] = STATE(44),
        [aux_sym_call_repeat1] = STATE(86),
        [anon_sym_STAR] = ACTIONS(231),
        [anon_sym_STAR_STAR] = ACTIONS(233),
        [anon_sym_not] = ACTIONS(235),
        [anon_sym_LBRACK] = ACTIONS(133),
        [anon_sym_LBRACE] = ACTIONS(135),
        [sym_number] = ACTIONS(137),
        [sym_identifier] = ACTIONS(237),
        [sym_comment] = ACTIONS(79),
    },
    [48] = {
        [sym__expression] = STATE(77),
        [sym_binary_operator] = STATE(44),
        [sym_unary_operator] = STATE(44),
        [sym_subscript] = STATE(44),
        [sym_call] = STATE(44),
        [sym_list] = STATE(44),
        [sym_list_comprehension] = STATE(44),
        [sym_dictionary] = STATE(44),
        [sym_dictionary_comprehension] = STATE(44),
        [sym_set] = STATE(44),
        [sym_set_comprehension] = STATE(44),
        [anon_sym_not] = ACTIONS(239),
        [anon_sym_LBRACK] = ACTIONS(133),
        [anon_sym_LBRACE] = ACTIONS(135),
        [sym_number] = ACTIONS(137),
        [sym_identifier] = ACTIONS(139),
        [sym_comment] = ACTIONS(79),
    },
    [49] = {
        [sym__expression] = STATE(74),
        [sym_binary_operator] = STATE(44),
        [sym_unary_operator] = STATE(44),
        [sym_subscript] = STATE(44),
        [sym_call] = STATE(44),
        [sym_list] = STATE(44),
        [sym_list_comprehension] = STATE(44),
        [sym_dictionary] = STATE(44),
        [sym_dictionary_comprehension] = STATE(44),
        [sym_set] = STATE(44),
        [sym_set_comprehension] = STATE(44),
        [anon_sym_not] = ACTIONS(239),
        [anon_sym_LBRACK] = ACTIONS(133),
        [anon_sym_LBRACE] = ACTIONS(135),
        [sym_number] = ACTIONS(137),
        [sym_identifier] = ACTIONS(139),
        [sym_comment] = ACTIONS(79),
    },
    [50] = {
        [sym__expression] = STATE(76),
        [sym_binary_operator] = STATE(44),
        [sym_unary_operator] = STATE(44),
        [sym_subscript] = STATE(44),
        [sym_call] = STATE(44),
        [sym_list] = STATE(44),
        [sym_list_comprehension] = STATE(44),
        [sym_dictionary] = STATE(44),
        [sym_dictionary_comprehension] = STATE(44),
        [sym_set] = STATE(44),
        [sym_set_comprehension] = STATE(44),
        [anon_sym_not] = ACTIONS(239),
        [anon_sym_LBRACK] = ACTIONS(133),
        [anon_sym_LBRACE] = ACTIONS(135),
        [sym_number] = ACTIONS(137),
        [sym_identifier] = ACTIONS(139),
        [sym_comment] = ACTIONS(79),
    },
    [51] = {
        [sym__expression] = STATE(72),
        [sym_binary_operator] = STATE(44),
        [sym_unary_operator] = STATE(44),
        [sym_subscript] = STATE(44),
        [sym_call] = STATE(44),
        [sym_list] = STATE(44),
        [sym_list_comprehension] = STATE(44),
        [sym_dictionary] = STATE(44),
        [sym_dictionary_comprehension] = STATE(44),
        [sym_set] = STATE(44),
        [sym_set_comprehension] = STATE(44),
        [anon_sym_not] = ACTIONS(239),
        [anon_sym_LBRACK] = ACTIONS(133),
        [anon_sym_LBRACE] = ACTIONS(135),
        [sym_number] = ACTIONS(137),
        [sym_identifier] = ACTIONS(139),
        [sym_comment] = ACTIONS(79),
    },
    [52] = {
        [sym__expression] = STATE(73),
        [sym_binary_operator] = STATE(44),
        [sym_unary_operator] = STATE(44),
        [sym_subscript] = STATE(44),
        [sym_call] = STATE(44),
        [sym_list] = STATE(44),
        [sym_list_comprehension] = STATE(44),
        [sym_dictionary] = STATE(44),
        [sym_dictionary_comprehension] = STATE(44),
        [sym_set] = STATE(44),
        [sym_set_comprehension] = STATE(44),
        [anon_sym_not] = ACTIONS(239),
        [anon_sym_LBRACK] = ACTIONS(133),
        [anon_sym_LBRACE] = ACTIONS(135),
        [sym_number] = ACTIONS(137),
        [sym_identifier] = ACTIONS(139),
        [sym_comment] = ACTIONS(79),
    },
    [53] = {
        [sym__expression] = STATE(75),
        [sym_binary_operator] = STATE(44),
        [sym_unary_operator] = STATE(44),
        [sym_subscript] = STATE(44),
        [sym_call] = STATE(44),
        [sym_list] = STATE(44),
        [sym_list_comprehension] = STATE(44),
        [sym_dictionary] = STATE(44),
        [sym_dictionary_comprehension] = STATE(44),
        [sym_set] = STATE(44),
        [sym_set_comprehension] = STATE(44),
        [anon_sym_not] = ACTIONS(239),
        [anon_sym_LBRACK] = ACTIONS(133),
        [anon_sym_LBRACE] = ACTIONS(135),
        [sym_number] = ACTIONS(137),
        [sym_identifier] = ACTIONS(139),
        [sym_comment] = ACTIONS(79),
    },
    [54] = {
        [sym__expression] = STATE(63),
        [sym_binary_operator] = STATE(44),
        [sym_unary_operator] = STATE(44),
        [sym_subscript] = STATE(44),
        [sym_call] = STATE(44),
        [sym_list] = STATE(44),
        [sym_list_comprehension] = STATE(44),
        [sym_dictionary] = STATE(44),
        [sym_dictionary_comprehension] = STATE(44),
        [sym_set] = STATE(44),
        [sym_set_comprehension] = STATE(44),
        [anon_sym_not] = ACTIONS(239),
        [anon_sym_LBRACK] = ACTIONS(133),
        [anon_sym_DOT_DOT_DOT] = ACTIONS(273),
        [anon_sym_LBRACE] = ACTIONS(135),
        [sym_number] = ACTIONS(137),
        [sym_identifier] = ACTIONS(139),
        [sym_comment] = ACTIONS(79),
    },
    [55] = {
        [anon_sym_COMMA] = ACTIONS(275),
        [anon_sym_as] = ACTIONS(275),
        [anon_sym_COLON] = ACTIONS(275),
        [anon_sym_for] = ACTIONS(275),
        [anon_sym_in] = ACTIONS(275),
        [anon_sym_LPAREN] = ACTIONS(275),
        [anon_sym_RPAREN] = ACTIONS(275),
        [anon_sym_STAR] = ACTIONS(277),
        [anon_sym_PLUS] = ACTIONS(275),
        [anon_sym_DASH] = ACTIONS(275),
        [anon_sym_SLASH] = ACTIONS(275),
        [anon_sym_STAR_STAR] = ACTIONS(275),
        [anon_sym_PIPE] = ACTIONS(275),
        [anon_sym_AMP] = ACTIONS(275),
        [anon_sym_CARET] = ACTIONS(275),
        [anon_sym_LT_LT] = ACTIONS(275),
        [anon_sym_GT_GT] = ACTIONS(275),
        [anon_sym_and] = ACTIONS(275),
        [anon_sym_or] = ACTIONS(275),
        [anon_sym_LBRACK] = ACTIONS(275),
        [anon_sym_RBRACK] = ACTIONS(275),
        [anon_sym_RBRACE] = ACTIONS(275),
        [sym_comment] = ACTIONS(79),
        [sym__newline] = ACTIONS(275),
    },
    [56] = {
        [anon_sym_COMMA] = ACTIONS(279),
        [anon_sym_RBRACK] = ACTIONS(271),
        [sym_comment] = ACTIONS(79),
    },
    [57] = {
        [sym__expression] = STATE(61),
        [sym_binary_operator] = STATE(44),
        [sym_unary_operator] = STATE(44),
        [sym_subscript] = STATE(44),
        [sym_call] = STATE(44),
        [sym_list] = STATE(44),
        [sym_list_comprehension] = STATE(44),
        [sym_dictionary] = STATE(44),
        [sym_dictionary_comprehension] = STATE(44),
        [sym_set] = STATE(44),
        [sym_set_comprehension] = STATE(44),
        [anon_sym_not] = ACTIONS(239),
        [anon_sym_LBRACK] = ACTIONS(133),
        [anon_sym_DOT_DOT_DOT] = ACTIONS(281),
        [anon_sym_RBRACK] = ACTIONS(283),
        [anon_sym_LBRACE] = ACTIONS(135),
        [sym_number] = ACTIONS(137),
        [sym_identifier] = ACTIONS(139),
        [sym_comment] = ACTIONS(79),
    },
    [58] = {
        [anon_sym_COMMA] = ACTIONS(285),
        [anon_sym_as] = ACTIONS(285),
        [anon_sym_COLON] = ACTIONS(285),
        [anon_sym_for] = ACTIONS(285),
        [anon_sym_in] = ACTIONS(285),
        [anon_sym_LPAREN] = ACTIONS(285),
        [anon_sym_RPAREN] = ACTIONS(285),
        [anon_sym_STAR] = ACTIONS(287),
        [anon_sym_PLUS] = ACTIONS(285),
        [anon_sym_DASH] = ACTIONS(285),
        [anon_sym_SLASH] = ACTIONS(285),
        [anon_sym_STAR_STAR] = ACTIONS(285),
        [anon_sym_PIPE] = ACTIONS(285),
        [anon_sym_AMP] = ACTIONS(285),
        [anon_sym_CARET] = ACTIONS(285),
        [anon_sym_LT_LT] = ACTIONS(285),
        [anon_sym_GT_GT] = ACTIONS(285),
        [anon_sym_and] = ACTIONS(285),
        [anon_sym_or] = ACTIONS(285),
        [anon_sym_LBRACK] = ACTIONS(285),
        [anon_sym_RBRACK] = ACTIONS(285),
        [anon_sym_RBRACE] = ACTIONS(285),
        [sym_comment] = ACTIONS(79),
        [sym__newline] = ACTIONS(285),
    },
    [59] = {
        [anon_sym_COMMA] = ACTIONS(289),
        [anon_sym_RBRACK] = ACTIONS(289),
        [sym_comment] = ACTIONS(79),
    },
    [60] = {
        [anon_sym_COMMA] = ACTIONS(291),
        [anon_sym_as] = ACTIONS(291),
        [anon_sym_COLON] = ACTIONS(291),
        [anon_sym_for] = ACTIONS(291),
        [anon_sym_in] = ACTIONS(291),
        [anon_sym_LPAREN] = ACTIONS(291),
        [anon_sym_RPAREN] = ACTIONS(291),
        [anon_sym_STAR] = ACTIONS(293),
        [anon_sym_PLUS] = ACTIONS(291),
        [anon_sym_DASH] = ACTIONS(291),
        [anon_sym_SLASH] = ACTIONS(291),
        [anon_sym_STAR_STAR] = ACTIONS(291),
        [anon_sym_PIPE] = ACTIONS(291),
        [anon_sym_AMP] = ACTIONS(291),
        [anon_sym_CARET] = ACTIONS(291),
        [anon_sym_LT_LT] = ACTIONS(291),
        [anon_sym_GT_GT] = ACTIONS(291),
        [anon_sym_and] = ACTIONS(291),
        [anon_sym_or] = ACTIONS(291),
        [anon_sym_LBRACK] = ACTIONS(291),
        [anon_sym_RBRACK] = ACTIONS(291),
        [anon_sym_RBRACE] = ACTIONS(291),
        [sym_comment] = ACTIONS(79),
        [sym__newline] = ACTIONS(291),
    },
    [61] = {
        [anon_sym_COMMA] = ACTIONS(289),
        [anon_sym_LPAREN] = ACTIONS(251),
        [anon_sym_STAR] = ACTIONS(253),
        [anon_sym_PLUS] = ACTIONS(255),
        [anon_sym_DASH] = ACTIONS(255),
        [anon_sym_SLASH] = ACTIONS(257),
        [anon_sym_STAR_STAR] = ACTIONS(259),
        [anon_sym_PIPE] = ACTIONS(261),
        [anon_sym_AMP] = ACTIONS(263),
        [anon_sym_CARET] = ACTIONS(265),
        [anon_sym_LT_LT] = ACTIONS(255),
        [anon_sym_GT_GT] = ACTIONS(255),
        [anon_sym_and] = ACTIONS(263),
        [anon_sym_or] = ACTIONS(261),
        [anon_sym_LBRACK] = ACTIONS(267),
        [anon_sym_RBRACK] = ACTIONS(289),
        [sym_comment] = ACTIONS(79),
    },
    [62] = {
        [aux_sym_subscript_repeat1] = STATE(66),
        [anon_sym_COMMA] = ACTIONS(295),
        [anon_sym_RBRACK] = ACTIONS(297),
        [sym_comment] = ACTIONS(79),
    },
    [63] = {
        [aux_sym_subscript_repeat1] = STATE(66),
        [anon_sym_COMMA] = ACTIONS(295),
        [anon_sym_LPAREN] = ACTIONS(251),
        [anon_sym_STAR] = ACTIONS(253),
        [anon_sym_PLUS] = ACTIONS(255),
        [anon_sym_DASH] = ACTIONS(255),
        [anon_sym_SLASH] = ACTIONS(257),
        [anon_sym_STAR_STAR] = ACTIONS(259),
        [anon_sym_PIPE] = ACTIONS(261),
        [anon_sym_AMP] = ACTIONS(263),
        [anon_sym_CARET] = ACTIONS(265),
        [anon_sym_LT_LT] = ACTIONS(255),
        [anon_sym_GT_GT] = ACTIONS(255),
        [anon_sym_and] = ACTIONS(263),
        [anon_sym_or] = ACTIONS(261),
        [anon_sym_LBRACK] = ACTIONS(267),
        [anon_sym_RBRACK] = ACTIONS(297),
        [sym_comment] = ACTIONS(79),
    },
    [64] = {
        [sym__expression] = STATE(71),
        [sym_binary_operator] = STATE(44),
        [sym_unary_operator] = STATE(44),
        [sym_subscript] = STATE(44),
        [sym_call] = STATE(44),
        [sym_list] = STATE(44),
        [sym_list_comprehension] = STATE(44),
        [sym_dictionary] = STATE(44),
        [sym_dictionary_comprehension] = STATE(44),
        [sym_set] = STATE(44),
        [sym_set_comprehension] = STATE(44),
        [anon_sym_not] = ACTIONS(239),
        [anon_sym_LBRACK] = ACTIONS(133),
        [anon_sym_DOT_DOT_DOT] = ACTIONS(269),
        [anon_sym_RBRACK] = ACTIONS(299),
        [anon_sym_LBRACE] = ACTIONS(135),
        [sym_number] = ACTIONS(137),
        [sym_identifier] = ACTIONS(139),
        [sym_comment] = ACTIONS(79),
    },
    [65] = {
        [anon_sym_COMMA] = ACTIONS(275),
        [anon_sym_as] = ACTIONS(275),
        [anon_sym_COLON] = ACTIONS(275),
        [anon_sym_for] = ACTIONS(275),
        [anon_sym_in] = ACTIONS(275),
        [anon_sym_LPAREN] = ACTIONS(275),
        [anon_sym_RPAREN] = ACTIONS(275),
        [anon_sym_STAR] = ACTIONS(277),
        [anon_sym_PLUS] = ACTIONS(275),
        [anon_sym_DASH] = ACTIONS(275),
        [anon_sym_SLASH] = ACTIONS(275),
        [anon_sym_STAR_STAR] = ACTIONS(275),
        [anon_sym_PIPE] = ACTIONS(275),
        [anon_sym_AMP] = ACTIONS(275),
        [anon_sym_CARET] = ACTIONS(275),
        [anon_sym_LT_LT] = ACTIONS(275),
        [anon_sym_GT_GT] = ACTIONS(275),
        [anon_sym_and] = ACTIONS(275),
        [anon_sym_or] = ACTIONS(275),
        [anon_sym_LBRACK] = ACTIONS(275),
        [anon_sym_RBRACK] = ACTIONS(275),
        [anon_sym_RBRACE] = ACTIONS(275),
        [sym_comment] = ACTIONS(79),
    },
    [66] = {
        [anon_sym_COMMA] = ACTIONS(301),
        [anon_sym_RBRACK] = ACTIONS(299),
        [sym_comment] = ACTIONS(79),
    },
    [67] = {
        [sym__expression] = STATE(61),
        [sym_binary_operator] = STATE(44),
        [sym_unary_operator] = STATE(44),
        [sym_subscript] = STATE(44),
        [sym_call] = STATE(44),
        [sym_list] = STATE(44),
        [sym_list_comprehension] = STATE(44),
        [sym_dictionary] = STATE(44),
        [sym_dictionary_comprehension] = STATE(44),
        [sym_set] = STATE(44),
        [sym_set_comprehension] = STATE(44),
        [anon_sym_not] = ACTIONS(239),
        [anon_sym_LBRACK] = ACTIONS(133),
        [anon_sym_DOT_DOT_DOT] = ACTIONS(281),
        [anon_sym_RBRACK] = ACTIONS(303),
        [anon_sym_LBRACE] = ACTIONS(135),
        [sym_number] = ACTIONS(137),
        [sym_identifier] = ACTIONS(139),
        [sym_comment] = ACTIONS(79),
    },
    [68] = {
        [anon_sym_COMMA] = ACTIONS(285),
        [anon_sym_as] = ACTIONS(285),
        [anon_sym_COLON] = ACTIONS(285),
        [anon_sym_for] = ACTIONS(285),
        [anon_sym_in] = ACTIONS(285),
        [anon_sym_LPAREN] = ACTIONS(285),
        [anon_sym_RPAREN] = ACTIONS(285),
        [anon_sym_STAR] = ACTIONS(287),
        [anon_sym_PLUS] = ACTIONS(285),
        [anon_sym_DASH] = ACTIONS(285),
        [anon_sym_SLASH] = ACTIONS(285),
        [anon_sym_STAR_STAR] = ACTIONS(285),
        [anon_sym_PIPE] = ACTIONS(285),
        [anon_sym_AMP] = ACTIONS(285),
        [anon_sym_CARET] = ACTIONS(285),
        [anon_sym_LT_LT] = ACTIONS(285),
        [anon_sym_GT_GT] = ACTIONS(285),
        [anon_sym_and] = ACTIONS(285),
        [anon_sym_or] = ACTIONS(285),
        [anon_sym_LBRACK] = ACTIONS(285),
        [anon_sym_RBRACK] = ACTIONS(285),
        [anon_sym_RBRACE] = ACTIONS(285),
        [sym_comment] = ACTIONS(79),
    },
    [69] = {
        [anon_sym_COMMA] = ACTIONS(291),
        [anon_sym_as] = ACTIONS(291),
        [anon_sym_COLON] = ACTIONS(291),
        [anon_sym_for] = ACTIONS(291),
        [anon_sym_in] = ACTIONS(291),
        [anon_sym_LPAREN] = ACTIONS(291),
        [anon_sym_RPAREN] = ACTIONS(291),
        [anon_sym_STAR] = ACTIONS(293),
        [anon_sym_PLUS] = ACTIONS(291),
        [anon_sym_DASH] = ACTIONS(291),
        [anon_sym_SLASH] = ACTIONS(291),
        [anon_sym_STAR_STAR] = ACTIONS(291),
        [anon_sym_PIPE] = ACTIONS(291),
        [anon_sym_AMP] = ACTIONS(291),
        [anon_sym_CARET] = ACTIONS(291),
        [anon_sym_LT_LT] = ACTIONS(291),
        [anon_sym_GT_GT] = ACTIONS(291),
        [anon_sym_and] = ACTIONS(291),
        [anon_sym_or] = ACTIONS(291),
        [anon_sym_LBRACK] = ACTIONS(291),
        [anon_sym_RBRACK] = ACTIONS(291),
        [anon_sym_RBRACE] = ACTIONS(291),
        [sym_comment] = ACTIONS(79),
    },
    [70] = {
        [anon_sym_COMMA] = ACTIONS(305),
        [anon_sym_RBRACK] = ACTIONS(305),
        [sym_comment] = ACTIONS(79),
    },
    [71] = {
        [anon_sym_COMMA] = ACTIONS(305),
        [anon_sym_LPAREN] = ACTIONS(251),
        [anon_sym_STAR] = ACTIONS(253),
        [anon_sym_PLUS] = ACTIONS(255),
        [anon_sym_DASH] = ACTIONS(255),
        [anon_sym_SLASH] = ACTIONS(257),
        [anon_sym_STAR_STAR] = ACTIONS(259),
        [anon_sym_PIPE] = ACTIONS(261),
        [anon_sym_AMP] = ACTIONS(263),
        [anon_sym_CARET] = ACTIONS(265),
        [anon_sym_LT_LT] = ACTIONS(255),
        [anon_sym_GT_GT] = ACTIONS(255),
        [anon_sym_and] = ACTIONS(263),
        [anon_sym_or] = ACTIONS(261),
        [anon_sym_LBRACK] = ACTIONS(267),
        [anon_sym_RBRACK] = ACTIONS(305),
        [sym_comment] = ACTIONS(79),
    },
    [72] = {
        [anon_sym_COMMA] = ACTIONS(307),
        [anon_sym_LPAREN] = ACTIONS(251),
        [anon_sym_STAR] = ACTIONS(253),
        [anon_sym_PLUS] = ACTIONS(255),
        [anon_sym_DASH] = ACTIONS(255),
        [anon_sym_SLASH] = ACTIONS(257),
        [anon_sym_STAR_STAR] = ACTIONS(259),
        [anon_sym_PIPE] = ACTIONS(307),
        [anon_sym_AMP] = ACTIONS(263),
        [anon_sym_CARET] = ACTIONS(265),
        [anon_sym_LT_LT] = ACTIONS(255),
        [anon_sym_GT_GT] = ACTIONS(255),
        [anon_sym_and] = ACTIONS(263),
        [anon_sym_or] = ACTIONS(307),
        [anon_sym_LBRACK] = ACTIONS(307),
        [anon_sym_RBRACK] = ACTIONS(307),
        [sym_comment] = ACTIONS(79),
    },
    [73] = {
        [anon_sym_COMMA] = ACTIONS(307),
        [anon_sym_LPAREN] = ACTIONS(251),
        [anon_sym_STAR] = ACTIONS(253),
        [anon_sym_PLUS] = ACTIONS(255),
        [anon_sym_DASH] = ACTIONS(255),
        [anon_sym_SLASH] = ACTIONS(257),
        [anon_sym_STAR_STAR] = ACTIONS(259),
        [anon_sym_PIPE] = ACTIONS(307),
        [anon_sym_AMP] = ACTIONS(307),
        [anon_sym_CARET] = ACTIONS(265),
        [anon_sym_LT_LT] = ACTIONS(255),
        [anon_sym_GT_GT] = ACTIONS(255),
        [anon_sym_and] = ACTIONS(307),
        [anon_sym_or] = ACTIONS(307),
        [anon_sym_LBRACK] = ACTIONS(307),
        [anon_sym_RBRACK] = ACTIONS(307),
        [sym_comment] = ACTIONS(79),
    },
    [74] = {
        [anon_sym_COMMA] = ACTIONS(307),
        [anon_sym_LPAREN] = ACTIONS(251),
        [anon_sym_STAR] = ACTIONS(253),
        [anon_sym_PLUS] = ACTIONS(307),
        [anon_sym_DASH] = ACTIONS(307),
        [anon_sym_SLASH] = ACTIONS(257),
        [anon_sym_STAR_STAR] = ACTIONS(259),
        [anon_sym_PIPE] = ACTIONS(307),
        [anon_sym_AMP] = ACTIONS(307),
        [anon_sym_CARET] = ACTIONS(307),
        [anon_sym_LT_LT] = ACTIONS(307),
        [anon_sym_GT_GT] = ACTIONS(307),
        [anon_sym_and] = ACTIONS(307),
        [anon_sym_or] = ACTIONS(307),
        [anon_sym_LBRACK] = ACTIONS(307),
        [anon_sym_RBRACK] = ACTIONS(307),
        [sym_comment] = ACTIONS(79),
    },
    [75] = {
        [anon_sym_COMMA] = ACTIONS(307),
        [anon_sym_LPAREN] = ACTIONS(251),
        [anon_sym_STAR] = ACTIONS(253),
        [anon_sym_PLUS] = ACTIONS(255),
        [anon_sym_DASH] = ACTIONS(255),
        [anon_sym_SLASH] = ACTIONS(257),
        [anon_sym_STAR_STAR] = ACTIONS(259),
        [anon_sym_PIPE] = ACTIONS(307),
        [anon_sym_AMP] = ACTIONS(307),
        [anon_sym_CARET] = ACTIONS(307),
        [anon_sym_LT_LT] = ACTIONS(255),
        [anon_sym_GT_GT] = ACTIONS(255),
        [anon_sym_and] = ACTIONS(307),
        [anon_sym_or] = ACTIONS(307),
        [anon_sym_LBRACK] = ACTIONS(307),
        [anon_sym_RBRACK] = ACTIONS(307),
        [sym_comment] = ACTIONS(79),
    },
    [76] = {
        [anon_sym_COMMA] = ACTIONS(307),
        [anon_sym_as] = ACTIONS(307),
        [anon_sym_COLON] = ACTIONS(307),
        [anon_sym_for] = ACTIONS(307),
        [anon_sym_in] = ACTIONS(307),
        [anon_sym_LPAREN] = ACTIONS(251),
        [anon_sym_RPAREN] = ACTIONS(307),
        [anon_sym_STAR] = ACTIONS(309),
        [anon_sym_PLUS] = ACTIONS(307),
        [anon_sym_DASH] = ACTIONS(307),
        [anon_sym_SLASH] = ACTIONS(307),
        [anon_sym_STAR_STAR] = ACTIONS(307),
        [anon_sym_PIPE] = ACTIONS(307),
        [anon_sym_AMP] = ACTIONS(307),
        [anon_sym_CARET] = ACTIONS(307),
        [anon_sym_LT_LT] = ACTIONS(307),
        [anon_sym_GT_GT] = ACTIONS(307),
        [anon_sym_and] = ACTIONS(307),
        [anon_sym_or] = ACTIONS(307),
        [anon_sym_LBRACK] = ACTIONS(307),
        [anon_sym_RBRACK] = ACTIONS(307),
        [anon_sym_RBRACE] = ACTIONS(307),
        [sym_comment] = ACTIONS(79),
    },
    [77] = {
        [anon_sym_COMMA] = ACTIONS(307),
        [anon_sym_LPAREN] = ACTIONS(251),
        [anon_sym_STAR] = ACTIONS(309),
        [anon_sym_PLUS] = ACTIONS(307),
        [anon_sym_DASH] = ACTIONS(307),
        [anon_sym_SLASH] = ACTIONS(307),
        [anon_sym_STAR_STAR] = ACTIONS(259),
        [anon_sym_PIPE] = ACTIONS(307),
        [anon_sym_AMP] = ACTIONS(307),
        [anon_sym_CARET] = ACTIONS(307),
        [anon_sym_LT_LT] = ACTIONS(307),
        [anon_sym_GT_GT] = ACTIONS(307),
        [anon_sym_and] = ACTIONS(307),
        [anon_sym_or] = ACTIONS(307),
        [anon_sym_LBRACK] = ACTIONS(307),
        [anon_sym_RBRACK] = ACTIONS(307),
        [sym_comment] = ACTIONS(79),
    },
    [78] = {
        [sym__expression] = STATE(289),
        [sym_binary_operator] = STATE(44),
        [sym_unary_operator] = STATE(44),
        [sym_subscript] = STATE(44),
        [sym_call] = STATE(44),
        [sym_list] = STATE(44),
        [sym_list_comprehension] = STATE(44),
        [sym_dictionary] = STATE(44),
        [sym_dictionary_comprehension] = STATE(44),
        [sym_set] = STATE(44),
        [sym_set_comprehension] = STATE(44),
        [anon_sym_not] = ACTIONS(235),
        [anon_sym_LBRACK] = ACTIONS(133),
        [anon_sym_LBRACE] = ACTIONS(135),
        [sym_number] = ACTIONS(137),
        [sym_identifier] = ACTIONS(139),
        [sym_comment] = ACTIONS(79),
    },
    [79] = {
        [sym__expression] = STATE(277),
        [sym_binary_operator] = STATE(44),
        [sym_unary_operator] = STATE(44),
        [sym_subscript] = STATE(44),
        [sym_call] = STATE(44),
        [sym_list] = STATE(44),
        [sym_list_comprehension] = STATE(44),
        [sym_dictionary] = STATE(44),
        [sym_dictionary_comprehension] = STATE(44),
        [sym_set] = STATE(44),
        [sym_set_comprehension] = STATE(44),
        [anon_sym_not] = ACTIONS(311),
        [anon_sym_LBRACK] = ACTIONS(133),
        [anon_sym_LBRACE] = ACTIONS(135),
        [sym_number] = ACTIONS(137),
        [sym_identifier] = ACTIONS(139),
        [sym_comment] = ACTIONS(79),
    },
    [80] = {
        [sym__expression] = STATE(275),
        [sym_binary_operator] = STATE(44),
        [sym_unary_operator] = STATE(44),
        [sym_subscript] = STATE(44),
        [sym_call] = STATE(44),
        [sym_list] = STATE(44),
        [sym_list_comprehension] = STATE(44),
        [sym_dictionary] = STATE(44),
        [sym_dictionary_comprehension] = STATE(44),
        [sym_set] = STATE(44),
        [sym_set_comprehension] = STATE(44),
        [anon_sym_not] = ACTIONS(235),
        [anon_sym_LBRACK] = ACTIONS(133),
        [anon_sym_LBRACE] = ACTIONS(135),
        [sym_number] = ACTIONS(137),
        [sym_identifier] = ACTIONS(139),
        [sym_comment] = ACTIONS(79),
    },
    [81] = {
        [anon_sym_COMMA] = ACTIONS(159),
        [anon_sym_LPAREN] = ACTIONS(159),
        [anon_sym_RPAREN] = ACTIONS(159),
        [anon_sym_EQ] = ACTIONS(313),
        [anon_sym_STAR] = ACTIONS(161),
        [anon_sym_PLUS] = ACTIONS(159),
        [anon_sym_DASH] = ACTIONS(159),
        [anon_sym_SLASH] = ACTIONS(159),
        [anon_sym_STAR_STAR] = ACTIONS(159),
        [anon_sym_PIPE] = ACTIONS(159),
        [anon_sym_AMP] = ACTIONS(159),
        [anon_sym_CARET] = ACTIONS(159),
        [anon_sym_LT_LT] = ACTIONS(159),
        [anon_sym_GT_GT] = ACTIONS(159),
        [anon_sym_and] = ACTIONS(159),
        [anon_sym_or] = ACTIONS(159),
        [anon_sym_LBRACK] = ACTIONS(159),
        [sym_comment] = ACTIONS(79),
    },
    [82] = {
        [anon_sym_COMMA] = ACTIONS(315),
        [anon_sym_LPAREN] = ACTIONS(251),
        [anon_sym_RPAREN] = ACTIONS(317),
        [anon_sym_STAR] = ACTIONS(319),
        [anon_sym_PLUS] = ACTIONS(321),
        [anon_sym_DASH] = ACTIONS(321),
        [anon_sym_SLASH] = ACTIONS(323),
        [anon_sym_STAR_STAR] = ACTIONS(325),
        [anon_sym_PIPE] = ACTIONS(327),
        [anon_sym_AMP] = ACTIONS(329),
        [anon_sym_CARET] = ACTIONS(331),
        [anon_sym_LT_LT] = ACTIONS(321),
        [anon_sym_GT_GT] = ACTIONS(321),
        [anon_sym_and] = ACTIONS(329),
        [anon_sym_or] = ACTIONS(327),
        [anon_sym_LBRACK] = ACTIONS(267),
        [sym_comment] = ACTIONS(79),
    },
    [83] = {
        [anon_sym_COMMA] = ACTIONS(315),
        [anon_sym_RPAREN] = ACTIONS(317),
        [sym_comment] = ACTIONS(79),
    },
    [84] = {
        [aux_sym_call_repeat2] = STATE(118),
        [anon_sym_COMMA] = ACTIONS(333),
        [anon_sym_RPAREN] = ACTIONS(317),
        [sym_comment] = ACTIONS(79),
    },
    [85] = {
        [anon_sym_RPAREN] = ACTIONS(317),
        [sym_comment] = ACTIONS(79),
    },
    [86] = {
        [sym__expression] = STATE(87),
        [sym_binary_operator] = STATE(44),
        [sym_unary_operator] = STATE(44),
        [sym_subscript] = STATE(44),
        [sym_call] = STATE(44),
        [sym_keyword_argument] = STATE(88),
        [sym_list_splat_argument] = STATE(89),
        [sym_dictionary_splat_argument] = STATE(90),
        [sym_list] = STATE(44),
        [sym_list_comprehension] = STATE(44),
        [sym_dictionary] = STATE(44),
        [sym_dictionary_comprehension] = STATE(44),
        [sym_set] = STATE(44),
        [sym_set_comprehension] = STATE(44),
        [anon_sym_STAR] = ACTIONS(231),
        [anon_sym_STAR_STAR] = ACTIONS(233),
        [anon_sym_not] = ACTIONS(235),
        [anon_sym_LBRACK] = ACTIONS(133),
        [anon_sym_LBRACE] = ACTIONS(135),
        [sym_number] = ACTIONS(137),
        [sym_identifier] = ACTIONS(237),
        [sym_comment] = ACTIONS(79),
    },
    [87] = {
        [anon_sym_COMMA] = ACTIONS(335),
        [anon_sym_LPAREN] = ACTIONS(251),
        [anon_sym_RPAREN] = ACTIONS(337),
        [anon_sym_STAR] = ACTIONS(319),
        [anon_sym_PLUS] = ACTIONS(321),
        [anon_sym_DASH] = ACTIONS(321),
        [anon_sym_SLASH] = ACTIONS(323),
        [anon_sym_STAR_STAR] = ACTIONS(325),
        [anon_sym_PIPE] = ACTIONS(327),
        [anon_sym_AMP] = ACTIONS(329),
        [anon_sym_CARET] = ACTIONS(331),
        [anon_sym_LT_LT] = ACTIONS(321),
        [anon_sym_GT_GT] = ACTIONS(321),
        [anon_sym_and] = ACTIONS(329),
        [anon_sym_or] = ACTIONS(327),
        [anon_sym_LBRACK] = ACTIONS(267),
        [sym_comment] = ACTIONS(79),
    },
    [88] = {
        [anon_sym_COMMA] = ACTIONS(335),
        [anon_sym_RPAREN] = ACTIONS(337),
        [sym_comment] = ACTIONS(79),
    },
    [89] = {
        [aux_sym_call_repeat2] = STATE(93),
        [anon_sym_COMMA] = ACTIONS(339),
        [anon_sym_RPAREN] = ACTIONS(337),
        [sym_comment] = ACTIONS(79),
    },
    [90] = {
        [anon_sym_RPAREN] = ACTIONS(337),
        [sym_comment] = ACTIONS(79),
    },
    [91] = {
        [anon_sym_COMMA] = ACTIONS(341),
        [anon_sym_as] = ACTIONS(341),
        [anon_sym_COLON] = ACTIONS(341),
        [anon_sym_for] = ACTIONS(341),
        [anon_sym_in] = ACTIONS(341),
        [anon_sym_LPAREN] = ACTIONS(341),
        [anon_sym_RPAREN] = ACTIONS(341),
        [anon_sym_STAR] = ACTIONS(343),
        [anon_sym_PLUS] = ACTIONS(341),
        [anon_sym_DASH] = ACTIONS(341),
        [anon_sym_SLASH] = ACTIONS(341),
        [anon_sym_STAR_STAR] = ACTIONS(341),
        [anon_sym_PIPE] = ACTIONS(341),
        [anon_sym_AMP] = ACTIONS(341),
        [anon_sym_CARET] = ACTIONS(341),
        [anon_sym_LT_LT] = ACTIONS(341),
        [anon_sym_GT_GT] = ACTIONS(341),
        [anon_sym_and] = ACTIONS(341),
        [anon_sym_or] = ACTIONS(341),
        [anon_sym_LBRACK] = ACTIONS(341),
        [anon_sym_RBRACK] = ACTIONS(341),
        [anon_sym_RBRACE] = ACTIONS(341),
        [sym_comment] = ACTIONS(79),
    },
    [92] = {
        [sym__expression] = STATE(111),
        [sym_binary_operator] = STATE(44),
        [sym_unary_operator] = STATE(44),
        [sym_subscript] = STATE(44),
        [sym_call] = STATE(44),
        [sym_keyword_argument] = STATE(112),
        [sym_dictionary_splat_argument] = STATE(113),
        [sym_list] = STATE(44),
        [sym_list_comprehension] = STATE(44),
        [sym_dictionary] = STATE(44),
        [sym_dictionary_comprehension] = STATE(44),
        [sym_set] = STATE(44),
        [sym_set_comprehension] = STATE(44),
        [anon_sym_STAR_STAR] = ACTIONS(233),
        [anon_sym_not] = ACTIONS(235),
        [anon_sym_LBRACK] = ACTIONS(133),
        [anon_sym_LBRACE] = ACTIONS(135),
        [sym_number] = ACTIONS(137),
        [sym_identifier] = ACTIONS(237),
        [sym_comment] = ACTIONS(79),
    },
    [93] = {
        [anon_sym_COMMA] = ACTIONS(345),
        [anon_sym_RPAREN] = ACTIONS(347),
        [sym_comment] = ACTIONS(79),
    },
    [94] = {
        [sym__expression] = STATE(96),
        [sym_binary_operator] = STATE(44),
        [sym_unary_operator] = STATE(44),
        [sym_subscript] = STATE(44),
        [sym_call] = STATE(44),
        [sym_keyword_argument] = STATE(97),
        [sym_dictionary_splat_argument] = STATE(98),
        [sym_list] = STATE(44),
        [sym_list_comprehension] = STATE(44),
        [sym_dictionary] = STATE(44),
        [sym_dictionary_comprehension] = STATE(44),
        [sym_set] = STATE(44),
        [sym_set_comprehension] = STATE(44),
        [anon_sym_STAR_STAR] = ACTIONS(233),
        [anon_sym_not] = ACTIONS(235),
        [anon_sym_LBRACK] = ACTIONS(133),
        [anon_sym_LBRACE] = ACTIONS(135),
        [sym_number] = ACTIONS(137),
        [sym_identifier] = ACTIONS(237),
        [sym_comment] = ACTIONS(79),
    },
    [95] = {
        [anon_sym_COMMA] = ACTIONS(349),
        [anon_sym_as] = ACTIONS(349),
        [anon_sym_COLON] = ACTIONS(349),
        [anon_sym_for] = ACTIONS(349),
        [anon_sym_in] = ACTIONS(349),
        [anon_sym_LPAREN] = ACTIONS(349),
        [anon_sym_RPAREN] = ACTIONS(349),
        [anon_sym_STAR] = ACTIONS(351),
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
        [sym_comment] = ACTIONS(79),
    },
    [96] = {
        [anon_sym_COMMA] = ACTIONS(353),
        [anon_sym_LPAREN] = ACTIONS(251),
        [anon_sym_RPAREN] = ACTIONS(353),
        [anon_sym_STAR] = ACTIONS(319),
        [anon_sym_PLUS] = ACTIONS(321),
        [anon_sym_DASH] = ACTIONS(321),
        [anon_sym_SLASH] = ACTIONS(323),
        [anon_sym_STAR_STAR] = ACTIONS(325),
        [anon_sym_PIPE] = ACTIONS(327),
        [anon_sym_AMP] = ACTIONS(329),
        [anon_sym_CARET] = ACTIONS(331),
        [anon_sym_LT_LT] = ACTIONS(321),
        [anon_sym_GT_GT] = ACTIONS(321),
        [anon_sym_and] = ACTIONS(329),
        [anon_sym_or] = ACTIONS(327),
        [anon_sym_LBRACK] = ACTIONS(267),
        [sym_comment] = ACTIONS(79),
    },
    [97] = {
        [anon_sym_COMMA] = ACTIONS(353),
        [anon_sym_RPAREN] = ACTIONS(353),
        [sym_comment] = ACTIONS(79),
    },
    [98] = {
        [anon_sym_RPAREN] = ACTIONS(355),
        [sym_comment] = ACTIONS(79),
    },
    [99] = {
        [anon_sym_COMMA] = ACTIONS(357),
        [anon_sym_as] = ACTIONS(357),
        [anon_sym_COLON] = ACTIONS(357),
        [anon_sym_for] = ACTIONS(357),
        [anon_sym_in] = ACTIONS(357),
        [anon_sym_LPAREN] = ACTIONS(357),
        [anon_sym_RPAREN] = ACTIONS(357),
        [anon_sym_STAR] = ACTIONS(359),
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
        [sym_comment] = ACTIONS(79),
    },
    [100] = {
        [sym__expression] = STATE(110),
        [sym_binary_operator] = STATE(44),
        [sym_unary_operator] = STATE(44),
        [sym_subscript] = STATE(44),
        [sym_call] = STATE(44),
        [sym_list] = STATE(44),
        [sym_list_comprehension] = STATE(44),
        [sym_dictionary] = STATE(44),
        [sym_dictionary_comprehension] = STATE(44),
        [sym_set] = STATE(44),
        [sym_set_comprehension] = STATE(44),
        [anon_sym_not] = ACTIONS(235),
        [anon_sym_LBRACK] = ACTIONS(133),
        [anon_sym_LBRACE] = ACTIONS(135),
        [sym_number] = ACTIONS(137),
        [sym_identifier] = ACTIONS(139),
        [sym_comment] = ACTIONS(79),
    },
    [101] = {
        [sym__expression] = STATE(108),
        [sym_binary_operator] = STATE(44),
        [sym_unary_operator] = STATE(44),
        [sym_subscript] = STATE(44),
        [sym_call] = STATE(44),
        [sym_list] = STATE(44),
        [sym_list_comprehension] = STATE(44),
        [sym_dictionary] = STATE(44),
        [sym_dictionary_comprehension] = STATE(44),
        [sym_set] = STATE(44),
        [sym_set_comprehension] = STATE(44),
        [anon_sym_not] = ACTIONS(235),
        [anon_sym_LBRACK] = ACTIONS(133),
        [anon_sym_LBRACE] = ACTIONS(135),
        [sym_number] = ACTIONS(137),
        [sym_identifier] = ACTIONS(139),
        [sym_comment] = ACTIONS(79),
    },
    [102] = {
        [sym__expression] = STATE(76),
        [sym_binary_operator] = STATE(44),
        [sym_unary_operator] = STATE(44),
        [sym_subscript] = STATE(44),
        [sym_call] = STATE(44),
        [sym_list] = STATE(44),
        [sym_list_comprehension] = STATE(44),
        [sym_dictionary] = STATE(44),
        [sym_dictionary_comprehension] = STATE(44),
        [sym_set] = STATE(44),
        [sym_set_comprehension] = STATE(44),
        [anon_sym_not] = ACTIONS(235),
        [anon_sym_LBRACK] = ACTIONS(133),
        [anon_sym_LBRACE] = ACTIONS(135),
        [sym_number] = ACTIONS(137),
        [sym_identifier] = ACTIONS(139),
        [sym_comment] = ACTIONS(79),
    },
    [103] = {
        [sym__expression] = STATE(106),
        [sym_binary_operator] = STATE(44),
        [sym_unary_operator] = STATE(44),
        [sym_subscript] = STATE(44),
        [sym_call] = STATE(44),
        [sym_list] = STATE(44),
        [sym_list_comprehension] = STATE(44),
        [sym_dictionary] = STATE(44),
        [sym_dictionary_comprehension] = STATE(44),
        [sym_set] = STATE(44),
        [sym_set_comprehension] = STATE(44),
        [anon_sym_not] = ACTIONS(235),
        [anon_sym_LBRACK] = ACTIONS(133),
        [anon_sym_LBRACE] = ACTIONS(135),
        [sym_number] = ACTIONS(137),
        [sym_identifier] = ACTIONS(139),
        [sym_comment] = ACTIONS(79),
    },
    [104] = {
        [sym__expression] = STATE(107),
        [sym_binary_operator] = STATE(44),
        [sym_unary_operator] = STATE(44),
        [sym_subscript] = STATE(44),
        [sym_call] = STATE(44),
        [sym_list] = STATE(44),
        [sym_list_comprehension] = STATE(44),
        [sym_dictionary] = STATE(44),
        [sym_dictionary_comprehension] = STATE(44),
        [sym_set] = STATE(44),
        [sym_set_comprehension] = STATE(44),
        [anon_sym_not] = ACTIONS(235),
        [anon_sym_LBRACK] = ACTIONS(133),
        [anon_sym_LBRACE] = ACTIONS(135),
        [sym_number] = ACTIONS(137),
        [sym_identifier] = ACTIONS(139),
        [sym_comment] = ACTIONS(79),
    },
    [105] = {
        [sym__expression] = STATE(109),
        [sym_binary_operator] = STATE(44),
        [sym_unary_operator] = STATE(44),
        [sym_subscript] = STATE(44),
        [sym_call] = STATE(44),
        [sym_list] = STATE(44),
        [sym_list_comprehension] = STATE(44),
        [sym_dictionary] = STATE(44),
        [sym_dictionary_comprehension] = STATE(44),
        [sym_set] = STATE(44),
        [sym_set_comprehension] = STATE(44),
        [anon_sym_not] = ACTIONS(235),
        [anon_sym_LBRACK] = ACTIONS(133),
        [anon_sym_LBRACE] = ACTIONS(135),
        [sym_number] = ACTIONS(137),
        [sym_identifier] = ACTIONS(139),
        [sym_comment] = ACTIONS(79),
    },
    [106] = {
        [anon_sym_COMMA] = ACTIONS(307),
        [anon_sym_LPAREN] = ACTIONS(251),
        [anon_sym_RPAREN] = ACTIONS(307),
        [anon_sym_STAR] = ACTIONS(319),
        [anon_sym_PLUS] = ACTIONS(321),
        [anon_sym_DASH] = ACTIONS(321),
        [anon_sym_SLASH] = ACTIONS(323),
        [anon_sym_STAR_STAR] = ACTIONS(325),
        [anon_sym_PIPE] = ACTIONS(307),
        [anon_sym_AMP] = ACTIONS(329),
        [anon_sym_CARET] = ACTIONS(331),
        [anon_sym_LT_LT] = ACTIONS(321),
        [anon_sym_GT_GT] = ACTIONS(321),
        [anon_sym_and] = ACTIONS(329),
        [anon_sym_or] = ACTIONS(307),
        [anon_sym_LBRACK] = ACTIONS(307),
        [sym_comment] = ACTIONS(79),
    },
    [107] = {
        [anon_sym_COMMA] = ACTIONS(307),
        [anon_sym_LPAREN] = ACTIONS(251),
        [anon_sym_RPAREN] = ACTIONS(307),
        [anon_sym_STAR] = ACTIONS(319),
        [anon_sym_PLUS] = ACTIONS(321),
        [anon_sym_DASH] = ACTIONS(321),
        [anon_sym_SLASH] = ACTIONS(323),
        [anon_sym_STAR_STAR] = ACTIONS(325),
        [anon_sym_PIPE] = ACTIONS(307),
        [anon_sym_AMP] = ACTIONS(307),
        [anon_sym_CARET] = ACTIONS(331),
        [anon_sym_LT_LT] = ACTIONS(321),
        [anon_sym_GT_GT] = ACTIONS(321),
        [anon_sym_and] = ACTIONS(307),
        [anon_sym_or] = ACTIONS(307),
        [anon_sym_LBRACK] = ACTIONS(307),
        [sym_comment] = ACTIONS(79),
    },
    [108] = {
        [anon_sym_COMMA] = ACTIONS(307),
        [anon_sym_LPAREN] = ACTIONS(251),
        [anon_sym_RPAREN] = ACTIONS(307),
        [anon_sym_STAR] = ACTIONS(319),
        [anon_sym_PLUS] = ACTIONS(307),
        [anon_sym_DASH] = ACTIONS(307),
        [anon_sym_SLASH] = ACTIONS(323),
        [anon_sym_STAR_STAR] = ACTIONS(325),
        [anon_sym_PIPE] = ACTIONS(307),
        [anon_sym_AMP] = ACTIONS(307),
        [anon_sym_CARET] = ACTIONS(307),
        [anon_sym_LT_LT] = ACTIONS(307),
        [anon_sym_GT_GT] = ACTIONS(307),
        [anon_sym_and] = ACTIONS(307),
        [anon_sym_or] = ACTIONS(307),
        [anon_sym_LBRACK] = ACTIONS(307),
        [sym_comment] = ACTIONS(79),
    },
    [109] = {
        [anon_sym_COMMA] = ACTIONS(307),
        [anon_sym_LPAREN] = ACTIONS(251),
        [anon_sym_RPAREN] = ACTIONS(307),
        [anon_sym_STAR] = ACTIONS(319),
        [anon_sym_PLUS] = ACTIONS(321),
        [anon_sym_DASH] = ACTIONS(321),
        [anon_sym_SLASH] = ACTIONS(323),
        [anon_sym_STAR_STAR] = ACTIONS(325),
        [anon_sym_PIPE] = ACTIONS(307),
        [anon_sym_AMP] = ACTIONS(307),
        [anon_sym_CARET] = ACTIONS(307),
        [anon_sym_LT_LT] = ACTIONS(321),
        [anon_sym_GT_GT] = ACTIONS(321),
        [anon_sym_and] = ACTIONS(307),
        [anon_sym_or] = ACTIONS(307),
        [anon_sym_LBRACK] = ACTIONS(307),
        [sym_comment] = ACTIONS(79),
    },
    [110] = {
        [anon_sym_COMMA] = ACTIONS(307),
        [anon_sym_LPAREN] = ACTIONS(251),
        [anon_sym_RPAREN] = ACTIONS(307),
        [anon_sym_STAR] = ACTIONS(309),
        [anon_sym_PLUS] = ACTIONS(307),
        [anon_sym_DASH] = ACTIONS(307),
        [anon_sym_SLASH] = ACTIONS(307),
        [anon_sym_STAR_STAR] = ACTIONS(325),
        [anon_sym_PIPE] = ACTIONS(307),
        [anon_sym_AMP] = ACTIONS(307),
        [anon_sym_CARET] = ACTIONS(307),
        [anon_sym_LT_LT] = ACTIONS(307),
        [anon_sym_GT_GT] = ACTIONS(307),
        [anon_sym_and] = ACTIONS(307),
        [anon_sym_or] = ACTIONS(307),
        [anon_sym_LBRACK] = ACTIONS(307),
        [sym_comment] = ACTIONS(79),
    },
    [111] = {
        [anon_sym_COMMA] = ACTIONS(361),
        [anon_sym_LPAREN] = ACTIONS(251),
        [anon_sym_RPAREN] = ACTIONS(361),
        [anon_sym_STAR] = ACTIONS(319),
        [anon_sym_PLUS] = ACTIONS(321),
        [anon_sym_DASH] = ACTIONS(321),
        [anon_sym_SLASH] = ACTIONS(323),
        [anon_sym_STAR_STAR] = ACTIONS(325),
        [anon_sym_PIPE] = ACTIONS(327),
        [anon_sym_AMP] = ACTIONS(329),
        [anon_sym_CARET] = ACTIONS(331),
        [anon_sym_LT_LT] = ACTIONS(321),
        [anon_sym_GT_GT] = ACTIONS(321),
        [anon_sym_and] = ACTIONS(329),
        [anon_sym_or] = ACTIONS(327),
        [anon_sym_LBRACK] = ACTIONS(267),
        [sym_comment] = ACTIONS(79),
    },
    [112] = {
        [anon_sym_COMMA] = ACTIONS(361),
        [anon_sym_RPAREN] = ACTIONS(361),
        [sym_comment] = ACTIONS(79),
    },
    [113] = {
        [anon_sym_RPAREN] = ACTIONS(363),
        [sym_comment] = ACTIONS(79),
    },
    [114] = {
        [anon_sym_COMMA] = ACTIONS(365),
        [anon_sym_as] = ACTIONS(365),
        [anon_sym_COLON] = ACTIONS(365),
        [anon_sym_for] = ACTIONS(365),
        [anon_sym_in] = ACTIONS(365),
        [anon_sym_LPAREN] = ACTIONS(365),
        [anon_sym_RPAREN] = ACTIONS(365),
        [anon_sym_STAR] = ACTIONS(367),
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
        [sym_comment] = ACTIONS(79),
    },
    [115] = {
        [anon_sym_RPAREN] = ACTIONS(347),
        [anon_sym_STAR] = ACTIONS(369),
        [anon_sym_STAR_STAR] = ACTIONS(371),
        [anon_sym_not] = ACTIONS(369),
        [anon_sym_LBRACK] = ACTIONS(371),
        [anon_sym_LBRACE] = ACTIONS(371),
        [sym_number] = ACTIONS(369),
        [sym_identifier] = ACTIONS(373),
        [sym_comment] = ACTIONS(79),
    },
    [116] = {
        [anon_sym_COMMA] = ACTIONS(375),
        [anon_sym_as] = ACTIONS(375),
        [anon_sym_COLON] = ACTIONS(375),
        [anon_sym_for] = ACTIONS(375),
        [anon_sym_in] = ACTIONS(375),
        [anon_sym_LPAREN] = ACTIONS(375),
        [anon_sym_RPAREN] = ACTIONS(375),
        [anon_sym_STAR] = ACTIONS(377),
        [anon_sym_PLUS] = ACTIONS(375),
        [anon_sym_DASH] = ACTIONS(375),
        [anon_sym_SLASH] = ACTIONS(375),
        [anon_sym_STAR_STAR] = ACTIONS(375),
        [anon_sym_PIPE] = ACTIONS(375),
        [anon_sym_AMP] = ACTIONS(375),
        [anon_sym_CARET] = ACTIONS(375),
        [anon_sym_LT_LT] = ACTIONS(375),
        [anon_sym_GT_GT] = ACTIONS(375),
        [anon_sym_and] = ACTIONS(375),
        [anon_sym_or] = ACTIONS(375),
        [anon_sym_LBRACK] = ACTIONS(375),
        [anon_sym_RBRACK] = ACTIONS(375),
        [anon_sym_RBRACE] = ACTIONS(375),
        [sym_comment] = ACTIONS(79),
    },
    [117] = {
        [sym__expression] = STATE(111),
        [sym_binary_operator] = STATE(44),
        [sym_unary_operator] = STATE(44),
        [sym_subscript] = STATE(44),
        [sym_call] = STATE(44),
        [sym_keyword_argument] = STATE(112),
        [sym_dictionary_splat_argument] = STATE(120),
        [sym_list] = STATE(44),
        [sym_list_comprehension] = STATE(44),
        [sym_dictionary] = STATE(44),
        [sym_dictionary_comprehension] = STATE(44),
        [sym_set] = STATE(44),
        [sym_set_comprehension] = STATE(44),
        [anon_sym_STAR_STAR] = ACTIONS(233),
        [anon_sym_not] = ACTIONS(235),
        [anon_sym_LBRACK] = ACTIONS(133),
        [anon_sym_LBRACE] = ACTIONS(135),
        [sym_number] = ACTIONS(137),
        [sym_identifier] = ACTIONS(237),
        [sym_comment] = ACTIONS(79),
    },
    [118] = {
        [anon_sym_COMMA] = ACTIONS(379),
        [anon_sym_RPAREN] = ACTIONS(337),
        [sym_comment] = ACTIONS(79),
    },
    [119] = {
        [sym__expression] = STATE(96),
        [sym_binary_operator] = STATE(44),
        [sym_unary_operator] = STATE(44),
        [sym_subscript] = STATE(44),
        [sym_call] = STATE(44),
        [sym_keyword_argument] = STATE(97),
        [sym_dictionary_splat_argument] = STATE(113),
        [sym_list] = STATE(44),
        [sym_list_comprehension] = STATE(44),
        [sym_dictionary] = STATE(44),
        [sym_dictionary_comprehension] = STATE(44),
        [sym_set] = STATE(44),
        [sym_set_comprehension] = STATE(44),
        [anon_sym_STAR_STAR] = ACTIONS(233),
        [anon_sym_not] = ACTIONS(235),
        [anon_sym_LBRACK] = ACTIONS(133),
        [anon_sym_LBRACE] = ACTIONS(135),
        [sym_number] = ACTIONS(137),
        [sym_identifier] = ACTIONS(237),
        [sym_comment] = ACTIONS(79),
    },
    [120] = {
        [anon_sym_RPAREN] = ACTIONS(347),
        [sym_comment] = ACTIONS(79),
    },
    [121] = {
        [anon_sym_RPAREN] = ACTIONS(337),
        [anon_sym_STAR] = ACTIONS(381),
        [anon_sym_STAR_STAR] = ACTIONS(383),
        [anon_sym_not] = ACTIONS(381),
        [anon_sym_LBRACK] = ACTIONS(383),
        [anon_sym_LBRACE] = ACTIONS(383),
        [sym_number] = ACTIONS(381),
        [sym_identifier] = ACTIONS(385),
        [sym_comment] = ACTIONS(79),
    },
    [122] = {
        [sym__expression] = STATE(123),
        [sym_binary_operator] = STATE(44),
        [sym_unary_operator] = STATE(44),
        [sym_subscript] = STATE(44),
        [sym_call] = STATE(44),
        [sym_list] = STATE(44),
        [sym_list_comprehension] = STATE(44),
        [sym_dictionary] = STATE(44),
        [sym_dictionary_comprehension] = STATE(44),
        [sym_set] = STATE(44),
        [sym_set_comprehension] = STATE(44),
        [anon_sym_not] = ACTIONS(235),
        [anon_sym_LBRACK] = ACTIONS(133),
        [anon_sym_LBRACE] = ACTIONS(135),
        [sym_number] = ACTIONS(137),
        [sym_identifier] = ACTIONS(139),
        [sym_comment] = ACTIONS(79),
    },
    [123] = {
        [anon_sym_COMMA] = ACTIONS(387),
        [anon_sym_LPAREN] = ACTIONS(251),
        [anon_sym_RPAREN] = ACTIONS(387),
        [anon_sym_STAR] = ACTIONS(319),
        [anon_sym_PLUS] = ACTIONS(321),
        [anon_sym_DASH] = ACTIONS(321),
        [anon_sym_SLASH] = ACTIONS(323),
        [anon_sym_STAR_STAR] = ACTIONS(325),
        [anon_sym_PIPE] = ACTIONS(327),
        [anon_sym_AMP] = ACTIONS(329),
        [anon_sym_CARET] = ACTIONS(331),
        [anon_sym_LT_LT] = ACTIONS(321),
        [anon_sym_GT_GT] = ACTIONS(321),
        [anon_sym_and] = ACTIONS(329),
        [anon_sym_or] = ACTIONS(327),
        [anon_sym_LBRACK] = ACTIONS(267),
        [sym_comment] = ACTIONS(79),
    },
    [124] = {
        [sym__expression] = STATE(275),
        [sym_binary_operator] = STATE(44),
        [sym_unary_operator] = STATE(44),
        [sym_subscript] = STATE(44),
        [sym_call] = STATE(44),
        [sym_list] = STATE(44),
        [sym_list_comprehension] = STATE(44),
        [sym_dictionary] = STATE(44),
        [sym_dictionary_comprehension] = STATE(44),
        [sym_set] = STATE(44),
        [sym_set_comprehension] = STATE(44),
        [anon_sym_not] = ACTIONS(155),
        [anon_sym_LBRACK] = ACTIONS(133),
        [anon_sym_LBRACE] = ACTIONS(135),
        [sym_number] = ACTIONS(137),
        [sym_identifier] = ACTIONS(139),
        [sym_comment] = ACTIONS(79),
    },
    [125] = {
        [anon_sym_COMMA] = ACTIONS(389),
        [anon_sym_as] = ACTIONS(389),
        [anon_sym_COLON] = ACTIONS(389),
        [anon_sym_for] = ACTIONS(389),
        [anon_sym_in] = ACTIONS(389),
        [anon_sym_LPAREN] = ACTIONS(389),
        [anon_sym_RPAREN] = ACTIONS(389),
        [anon_sym_STAR] = ACTIONS(391),
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
        [sym_comment] = ACTIONS(79),
    },
    [126] = {
        [aux_sym_print_statement_repeat1] = STATE(208),
        [anon_sym_COMMA] = ACTIONS(393),
        [anon_sym_COLON] = ACTIONS(395),
        [anon_sym_for] = ACTIONS(397),
        [anon_sym_LPAREN] = ACTIONS(251),
        [anon_sym_STAR] = ACTIONS(399),
        [anon_sym_PLUS] = ACTIONS(401),
        [anon_sym_DASH] = ACTIONS(401),
        [anon_sym_SLASH] = ACTIONS(403),
        [anon_sym_STAR_STAR] = ACTIONS(405),
        [anon_sym_PIPE] = ACTIONS(407),
        [anon_sym_AMP] = ACTIONS(409),
        [anon_sym_CARET] = ACTIONS(411),
        [anon_sym_LT_LT] = ACTIONS(401),
        [anon_sym_GT_GT] = ACTIONS(401),
        [anon_sym_and] = ACTIONS(409),
        [anon_sym_or] = ACTIONS(407),
        [anon_sym_LBRACK] = ACTIONS(267),
        [anon_sym_RBRACE] = ACTIONS(413),
        [sym_comment] = ACTIONS(79),
    },
    [127] = {
        [aux_sym_dictionary_repeat1] = STATE(131),
        [anon_sym_COMMA] = ACTIONS(415),
        [anon_sym_for] = ACTIONS(417),
        [anon_sym_RBRACE] = ACTIONS(419),
        [sym_comment] = ACTIONS(79),
    },
    [128] = {
        [sym__expression] = STATE(136),
        [sym_binary_operator] = STATE(44),
        [sym_unary_operator] = STATE(44),
        [sym_subscript] = STATE(44),
        [sym_call] = STATE(44),
        [sym_list] = STATE(44),
        [sym_list_comprehension] = STATE(44),
        [sym_dictionary] = STATE(44),
        [sym_dictionary_comprehension] = STATE(44),
        [sym_pair] = STATE(197),
        [sym_set] = STATE(44),
        [sym_set_comprehension] = STATE(44),
        [anon_sym_not] = ACTIONS(131),
        [anon_sym_LBRACK] = ACTIONS(133),
        [anon_sym_LBRACE] = ACTIONS(135),
        [anon_sym_RBRACE] = ACTIONS(421),
        [sym_number] = ACTIONS(137),
        [sym_identifier] = ACTIONS(139),
        [sym_comment] = ACTIONS(79),
    },
    [129] = {
        [sym_expression_list] = STATE(164),
        [sym__expression] = STATE(165),
        [sym_binary_operator] = STATE(44),
        [sym_unary_operator] = STATE(44),
        [sym_subscript] = STATE(44),
        [sym_call] = STATE(44),
        [sym_list] = STATE(44),
        [sym_list_comprehension] = STATE(44),
        [sym_dictionary] = STATE(44),
        [sym_dictionary_comprehension] = STATE(44),
        [sym_set] = STATE(44),
        [sym_set_comprehension] = STATE(44),
        [anon_sym_not] = ACTIONS(141),
        [anon_sym_LBRACK] = ACTIONS(133),
        [anon_sym_LBRACE] = ACTIONS(135),
        [sym_number] = ACTIONS(137),
        [sym_identifier] = ACTIONS(139),
        [sym_comment] = ACTIONS(79),
    },
    [130] = {
        [anon_sym_COMMA] = ACTIONS(423),
        [anon_sym_as] = ACTIONS(423),
        [anon_sym_COLON] = ACTIONS(423),
        [anon_sym_for] = ACTIONS(423),
        [anon_sym_in] = ACTIONS(423),
        [anon_sym_LPAREN] = ACTIONS(423),
        [anon_sym_RPAREN] = ACTIONS(423),
        [anon_sym_STAR] = ACTIONS(425),
        [anon_sym_PLUS] = ACTIONS(423),
        [anon_sym_DASH] = ACTIONS(423),
        [anon_sym_SLASH] = ACTIONS(423),
        [anon_sym_STAR_STAR] = ACTIONS(423),
        [anon_sym_PIPE] = ACTIONS(423),
        [anon_sym_AMP] = ACTIONS(423),
        [anon_sym_CARET] = ACTIONS(423),
        [anon_sym_LT_LT] = ACTIONS(423),
        [anon_sym_GT_GT] = ACTIONS(423),
        [anon_sym_and] = ACTIONS(423),
        [anon_sym_or] = ACTIONS(423),
        [anon_sym_LBRACK] = ACTIONS(423),
        [anon_sym_RBRACK] = ACTIONS(423),
        [anon_sym_RBRACE] = ACTIONS(423),
        [sym_comment] = ACTIONS(79),
    },
    [131] = {
        [anon_sym_COMMA] = ACTIONS(427),
        [anon_sym_RBRACE] = ACTIONS(421),
        [sym_comment] = ACTIONS(79),
    },
    [132] = {
        [sym__expression] = STATE(136),
        [sym_binary_operator] = STATE(44),
        [sym_unary_operator] = STATE(44),
        [sym_subscript] = STATE(44),
        [sym_call] = STATE(44),
        [sym_list] = STATE(44),
        [sym_list_comprehension] = STATE(44),
        [sym_dictionary] = STATE(44),
        [sym_dictionary_comprehension] = STATE(44),
        [sym_pair] = STATE(137),
        [sym_set] = STATE(44),
        [sym_set_comprehension] = STATE(44),
        [anon_sym_not] = ACTIONS(131),
        [anon_sym_LBRACK] = ACTIONS(133),
        [anon_sym_LBRACE] = ACTIONS(135),
        [anon_sym_RBRACE] = ACTIONS(429),
        [sym_number] = ACTIONS(137),
        [sym_identifier] = ACTIONS(139),
        [sym_comment] = ACTIONS(79),
    },
    [133] = {
        [anon_sym_COMMA] = ACTIONS(431),
        [anon_sym_as] = ACTIONS(431),
        [anon_sym_COLON] = ACTIONS(431),
        [anon_sym_for] = ACTIONS(431),
        [anon_sym_in] = ACTIONS(431),
        [anon_sym_LPAREN] = ACTIONS(431),
        [anon_sym_RPAREN] = ACTIONS(431),
        [anon_sym_STAR] = ACTIONS(433),
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
        [sym_comment] = ACTIONS(79),
    },
    [134] = {
        [sym__expression] = STATE(275),
        [sym_binary_operator] = STATE(44),
        [sym_unary_operator] = STATE(44),
        [sym_subscript] = STATE(44),
        [sym_call] = STATE(44),
        [sym_list] = STATE(44),
        [sym_list_comprehension] = STATE(44),
        [sym_dictionary] = STATE(44),
        [sym_dictionary_comprehension] = STATE(44),
        [sym_set] = STATE(44),
        [sym_set_comprehension] = STATE(44),
        [anon_sym_not] = ACTIONS(131),
        [anon_sym_LBRACK] = ACTIONS(133),
        [anon_sym_LBRACE] = ACTIONS(135),
        [sym_number] = ACTIONS(137),
        [sym_identifier] = ACTIONS(139),
        [sym_comment] = ACTIONS(79),
    },
    [135] = {
        [anon_sym_COMMA] = ACTIONS(435),
        [anon_sym_as] = ACTIONS(435),
        [anon_sym_COLON] = ACTIONS(435),
        [anon_sym_for] = ACTIONS(435),
        [anon_sym_in] = ACTIONS(435),
        [anon_sym_LPAREN] = ACTIONS(435),
        [anon_sym_RPAREN] = ACTIONS(435),
        [anon_sym_STAR] = ACTIONS(437),
        [anon_sym_PLUS] = ACTIONS(435),
        [anon_sym_DASH] = ACTIONS(435),
        [anon_sym_SLASH] = ACTIONS(435),
        [anon_sym_STAR_STAR] = ACTIONS(435),
        [anon_sym_PIPE] = ACTIONS(435),
        [anon_sym_AMP] = ACTIONS(435),
        [anon_sym_CARET] = ACTIONS(435),
        [anon_sym_LT_LT] = ACTIONS(435),
        [anon_sym_GT_GT] = ACTIONS(435),
        [anon_sym_and] = ACTIONS(435),
        [anon_sym_or] = ACTIONS(435),
        [anon_sym_LBRACK] = ACTIONS(435),
        [anon_sym_RBRACK] = ACTIONS(435),
        [anon_sym_RBRACE] = ACTIONS(435),
        [sym_comment] = ACTIONS(79),
    },
    [136] = {
        [anon_sym_COLON] = ACTIONS(439),
        [anon_sym_LPAREN] = ACTIONS(251),
        [anon_sym_STAR] = ACTIONS(441),
        [anon_sym_PLUS] = ACTIONS(443),
        [anon_sym_DASH] = ACTIONS(443),
        [anon_sym_SLASH] = ACTIONS(445),
        [anon_sym_STAR_STAR] = ACTIONS(447),
        [anon_sym_PIPE] = ACTIONS(449),
        [anon_sym_AMP] = ACTIONS(451),
        [anon_sym_CARET] = ACTIONS(453),
        [anon_sym_LT_LT] = ACTIONS(443),
        [anon_sym_GT_GT] = ACTIONS(443),
        [anon_sym_and] = ACTIONS(451),
        [anon_sym_or] = ACTIONS(449),
        [anon_sym_LBRACK] = ACTIONS(267),
        [sym_comment] = ACTIONS(79),
    },
    [137] = {
        [anon_sym_COMMA] = ACTIONS(455),
        [anon_sym_RBRACE] = ACTIONS(455),
        [sym_comment] = ACTIONS(79),
    },
    [138] = {
        [sym__expression] = STATE(151),
        [sym_binary_operator] = STATE(44),
        [sym_unary_operator] = STATE(44),
        [sym_subscript] = STATE(44),
        [sym_call] = STATE(44),
        [sym_list] = STATE(44),
        [sym_list_comprehension] = STATE(44),
        [sym_dictionary] = STATE(44),
        [sym_dictionary_comprehension] = STATE(44),
        [sym_set] = STATE(44),
        [sym_set_comprehension] = STATE(44),
        [anon_sym_not] = ACTIONS(457),
        [anon_sym_LBRACK] = ACTIONS(133),
        [anon_sym_LBRACE] = ACTIONS(135),
        [sym_number] = ACTIONS(137),
        [sym_identifier] = ACTIONS(139),
        [sym_comment] = ACTIONS(79),
    },
    [139] = {
        [sym__expression] = STATE(149),
        [sym_binary_operator] = STATE(44),
        [sym_unary_operator] = STATE(44),
        [sym_subscript] = STATE(44),
        [sym_call] = STATE(44),
        [sym_list] = STATE(44),
        [sym_list_comprehension] = STATE(44),
        [sym_dictionary] = STATE(44),
        [sym_dictionary_comprehension] = STATE(44),
        [sym_set] = STATE(44),
        [sym_set_comprehension] = STATE(44),
        [anon_sym_not] = ACTIONS(131),
        [anon_sym_LBRACK] = ACTIONS(133),
        [anon_sym_LBRACE] = ACTIONS(135),
        [sym_number] = ACTIONS(137),
        [sym_identifier] = ACTIONS(139),
        [sym_comment] = ACTIONS(79),
    },
    [140] = {
        [sym__expression] = STATE(147),
        [sym_binary_operator] = STATE(44),
        [sym_unary_operator] = STATE(44),
        [sym_subscript] = STATE(44),
        [sym_call] = STATE(44),
        [sym_list] = STATE(44),
        [sym_list_comprehension] = STATE(44),
        [sym_dictionary] = STATE(44),
        [sym_dictionary_comprehension] = STATE(44),
        [sym_set] = STATE(44),
        [sym_set_comprehension] = STATE(44),
        [anon_sym_not] = ACTIONS(131),
        [anon_sym_LBRACK] = ACTIONS(133),
        [anon_sym_LBRACE] = ACTIONS(135),
        [sym_number] = ACTIONS(137),
        [sym_identifier] = ACTIONS(139),
        [sym_comment] = ACTIONS(79),
    },
    [141] = {
        [sym__expression] = STATE(76),
        [sym_binary_operator] = STATE(44),
        [sym_unary_operator] = STATE(44),
        [sym_subscript] = STATE(44),
        [sym_call] = STATE(44),
        [sym_list] = STATE(44),
        [sym_list_comprehension] = STATE(44),
        [sym_dictionary] = STATE(44),
        [sym_dictionary_comprehension] = STATE(44),
        [sym_set] = STATE(44),
        [sym_set_comprehension] = STATE(44),
        [anon_sym_not] = ACTIONS(131),
        [anon_sym_LBRACK] = ACTIONS(133),
        [anon_sym_LBRACE] = ACTIONS(135),
        [sym_number] = ACTIONS(137),
        [sym_identifier] = ACTIONS(139),
        [sym_comment] = ACTIONS(79),
    },
    [142] = {
        [sym__expression] = STATE(145),
        [sym_binary_operator] = STATE(44),
        [sym_unary_operator] = STATE(44),
        [sym_subscript] = STATE(44),
        [sym_call] = STATE(44),
        [sym_list] = STATE(44),
        [sym_list_comprehension] = STATE(44),
        [sym_dictionary] = STATE(44),
        [sym_dictionary_comprehension] = STATE(44),
        [sym_set] = STATE(44),
        [sym_set_comprehension] = STATE(44),
        [anon_sym_not] = ACTIONS(131),
        [anon_sym_LBRACK] = ACTIONS(133),
        [anon_sym_LBRACE] = ACTIONS(135),
        [sym_number] = ACTIONS(137),
        [sym_identifier] = ACTIONS(139),
        [sym_comment] = ACTIONS(79),
    },
    [143] = {
        [sym__expression] = STATE(146),
        [sym_binary_operator] = STATE(44),
        [sym_unary_operator] = STATE(44),
        [sym_subscript] = STATE(44),
        [sym_call] = STATE(44),
        [sym_list] = STATE(44),
        [sym_list_comprehension] = STATE(44),
        [sym_dictionary] = STATE(44),
        [sym_dictionary_comprehension] = STATE(44),
        [sym_set] = STATE(44),
        [sym_set_comprehension] = STATE(44),
        [anon_sym_not] = ACTIONS(131),
        [anon_sym_LBRACK] = ACTIONS(133),
        [anon_sym_LBRACE] = ACTIONS(135),
        [sym_number] = ACTIONS(137),
        [sym_identifier] = ACTIONS(139),
        [sym_comment] = ACTIONS(79),
    },
    [144] = {
        [sym__expression] = STATE(148),
        [sym_binary_operator] = STATE(44),
        [sym_unary_operator] = STATE(44),
        [sym_subscript] = STATE(44),
        [sym_call] = STATE(44),
        [sym_list] = STATE(44),
        [sym_list_comprehension] = STATE(44),
        [sym_dictionary] = STATE(44),
        [sym_dictionary_comprehension] = STATE(44),
        [sym_set] = STATE(44),
        [sym_set_comprehension] = STATE(44),
        [anon_sym_not] = ACTIONS(131),
        [anon_sym_LBRACK] = ACTIONS(133),
        [anon_sym_LBRACE] = ACTIONS(135),
        [sym_number] = ACTIONS(137),
        [sym_identifier] = ACTIONS(139),
        [sym_comment] = ACTIONS(79),
    },
    [145] = {
        [anon_sym_COLON] = ACTIONS(307),
        [anon_sym_LPAREN] = ACTIONS(251),
        [anon_sym_STAR] = ACTIONS(441),
        [anon_sym_PLUS] = ACTIONS(443),
        [anon_sym_DASH] = ACTIONS(443),
        [anon_sym_SLASH] = ACTIONS(445),
        [anon_sym_STAR_STAR] = ACTIONS(447),
        [anon_sym_PIPE] = ACTIONS(307),
        [anon_sym_AMP] = ACTIONS(451),
        [anon_sym_CARET] = ACTIONS(453),
        [anon_sym_LT_LT] = ACTIONS(443),
        [anon_sym_GT_GT] = ACTIONS(443),
        [anon_sym_and] = ACTIONS(451),
        [anon_sym_or] = ACTIONS(307),
        [anon_sym_LBRACK] = ACTIONS(307),
        [sym_comment] = ACTIONS(79),
    },
    [146] = {
        [anon_sym_COLON] = ACTIONS(307),
        [anon_sym_LPAREN] = ACTIONS(251),
        [anon_sym_STAR] = ACTIONS(441),
        [anon_sym_PLUS] = ACTIONS(443),
        [anon_sym_DASH] = ACTIONS(443),
        [anon_sym_SLASH] = ACTIONS(445),
        [anon_sym_STAR_STAR] = ACTIONS(447),
        [anon_sym_PIPE] = ACTIONS(307),
        [anon_sym_AMP] = ACTIONS(307),
        [anon_sym_CARET] = ACTIONS(453),
        [anon_sym_LT_LT] = ACTIONS(443),
        [anon_sym_GT_GT] = ACTIONS(443),
        [anon_sym_and] = ACTIONS(307),
        [anon_sym_or] = ACTIONS(307),
        [anon_sym_LBRACK] = ACTIONS(307),
        [sym_comment] = ACTIONS(79),
    },
    [147] = {
        [anon_sym_COLON] = ACTIONS(307),
        [anon_sym_LPAREN] = ACTIONS(251),
        [anon_sym_STAR] = ACTIONS(441),
        [anon_sym_PLUS] = ACTIONS(307),
        [anon_sym_DASH] = ACTIONS(307),
        [anon_sym_SLASH] = ACTIONS(445),
        [anon_sym_STAR_STAR] = ACTIONS(447),
        [anon_sym_PIPE] = ACTIONS(307),
        [anon_sym_AMP] = ACTIONS(307),
        [anon_sym_CARET] = ACTIONS(307),
        [anon_sym_LT_LT] = ACTIONS(307),
        [anon_sym_GT_GT] = ACTIONS(307),
        [anon_sym_and] = ACTIONS(307),
        [anon_sym_or] = ACTIONS(307),
        [anon_sym_LBRACK] = ACTIONS(307),
        [sym_comment] = ACTIONS(79),
    },
    [148] = {
        [anon_sym_COLON] = ACTIONS(307),
        [anon_sym_LPAREN] = ACTIONS(251),
        [anon_sym_STAR] = ACTIONS(441),
        [anon_sym_PLUS] = ACTIONS(443),
        [anon_sym_DASH] = ACTIONS(443),
        [anon_sym_SLASH] = ACTIONS(445),
        [anon_sym_STAR_STAR] = ACTIONS(447),
        [anon_sym_PIPE] = ACTIONS(307),
        [anon_sym_AMP] = ACTIONS(307),
        [anon_sym_CARET] = ACTIONS(307),
        [anon_sym_LT_LT] = ACTIONS(443),
        [anon_sym_GT_GT] = ACTIONS(443),
        [anon_sym_and] = ACTIONS(307),
        [anon_sym_or] = ACTIONS(307),
        [anon_sym_LBRACK] = ACTIONS(307),
        [sym_comment] = ACTIONS(79),
    },
    [149] = {
        [anon_sym_COLON] = ACTIONS(307),
        [anon_sym_LPAREN] = ACTIONS(251),
        [anon_sym_STAR] = ACTIONS(309),
        [anon_sym_PLUS] = ACTIONS(307),
        [anon_sym_DASH] = ACTIONS(307),
        [anon_sym_SLASH] = ACTIONS(307),
        [anon_sym_STAR_STAR] = ACTIONS(447),
        [anon_sym_PIPE] = ACTIONS(307),
        [anon_sym_AMP] = ACTIONS(307),
        [anon_sym_CARET] = ACTIONS(307),
        [anon_sym_LT_LT] = ACTIONS(307),
        [anon_sym_GT_GT] = ACTIONS(307),
        [anon_sym_and] = ACTIONS(307),
        [anon_sym_or] = ACTIONS(307),
        [anon_sym_LBRACK] = ACTIONS(307),
        [sym_comment] = ACTIONS(79),
    },
    [150] = {
        [sym__expression] = STATE(275),
        [sym_binary_operator] = STATE(44),
        [sym_unary_operator] = STATE(44),
        [sym_subscript] = STATE(44),
        [sym_call] = STATE(44),
        [sym_list] = STATE(44),
        [sym_list_comprehension] = STATE(44),
        [sym_dictionary] = STATE(44),
        [sym_dictionary_comprehension] = STATE(44),
        [sym_set] = STATE(44),
        [sym_set_comprehension] = STATE(44),
        [anon_sym_not] = ACTIONS(457),
        [anon_sym_LBRACK] = ACTIONS(133),
        [anon_sym_LBRACE] = ACTIONS(135),
        [sym_number] = ACTIONS(137),
        [sym_identifier] = ACTIONS(139),
        [sym_comment] = ACTIONS(79),
    },
    [151] = {
        [anon_sym_COMMA] = ACTIONS(459),
        [anon_sym_LPAREN] = ACTIONS(251),
        [anon_sym_STAR] = ACTIONS(461),
        [anon_sym_PLUS] = ACTIONS(463),
        [anon_sym_DASH] = ACTIONS(463),
        [anon_sym_SLASH] = ACTIONS(465),
        [anon_sym_STAR_STAR] = ACTIONS(467),
        [anon_sym_PIPE] = ACTIONS(469),
        [anon_sym_AMP] = ACTIONS(471),
        [anon_sym_CARET] = ACTIONS(473),
        [anon_sym_LT_LT] = ACTIONS(463),
        [anon_sym_GT_GT] = ACTIONS(463),
        [anon_sym_and] = ACTIONS(471),
        [anon_sym_or] = ACTIONS(469),
        [anon_sym_LBRACK] = ACTIONS(267),
        [anon_sym_RBRACE] = ACTIONS(459),
        [sym_comment] = ACTIONS(79),
    },
    [152] = {
        [sym__expression] = STATE(162),
        [sym_binary_operator] = STATE(44),
        [sym_unary_operator] = STATE(44),
        [sym_subscript] = STATE(44),
        [sym_call] = STATE(44),
        [sym_list] = STATE(44),
        [sym_list_comprehension] = STATE(44),
        [sym_dictionary] = STATE(44),
        [sym_dictionary_comprehension] = STATE(44),
        [sym_set] = STATE(44),
        [sym_set_comprehension] = STATE(44),
        [anon_sym_not] = ACTIONS(457),
        [anon_sym_LBRACK] = ACTIONS(133),
        [anon_sym_LBRACE] = ACTIONS(135),
        [sym_number] = ACTIONS(137),
        [sym_identifier] = ACTIONS(139),
        [sym_comment] = ACTIONS(79),
    },
    [153] = {
        [sym__expression] = STATE(160),
        [sym_binary_operator] = STATE(44),
        [sym_unary_operator] = STATE(44),
        [sym_subscript] = STATE(44),
        [sym_call] = STATE(44),
        [sym_list] = STATE(44),
        [sym_list_comprehension] = STATE(44),
        [sym_dictionary] = STATE(44),
        [sym_dictionary_comprehension] = STATE(44),
        [sym_set] = STATE(44),
        [sym_set_comprehension] = STATE(44),
        [anon_sym_not] = ACTIONS(457),
        [anon_sym_LBRACK] = ACTIONS(133),
        [anon_sym_LBRACE] = ACTIONS(135),
        [sym_number] = ACTIONS(137),
        [sym_identifier] = ACTIONS(139),
        [sym_comment] = ACTIONS(79),
    },
    [154] = {
        [sym__expression] = STATE(76),
        [sym_binary_operator] = STATE(44),
        [sym_unary_operator] = STATE(44),
        [sym_subscript] = STATE(44),
        [sym_call] = STATE(44),
        [sym_list] = STATE(44),
        [sym_list_comprehension] = STATE(44),
        [sym_dictionary] = STATE(44),
        [sym_dictionary_comprehension] = STATE(44),
        [sym_set] = STATE(44),
        [sym_set_comprehension] = STATE(44),
        [anon_sym_not] = ACTIONS(457),
        [anon_sym_LBRACK] = ACTIONS(133),
        [anon_sym_LBRACE] = ACTIONS(135),
        [sym_number] = ACTIONS(137),
        [sym_identifier] = ACTIONS(139),
        [sym_comment] = ACTIONS(79),
    },
    [155] = {
        [sym__expression] = STATE(158),
        [sym_binary_operator] = STATE(44),
        [sym_unary_operator] = STATE(44),
        [sym_subscript] = STATE(44),
        [sym_call] = STATE(44),
        [sym_list] = STATE(44),
        [sym_list_comprehension] = STATE(44),
        [sym_dictionary] = STATE(44),
        [sym_dictionary_comprehension] = STATE(44),
        [sym_set] = STATE(44),
        [sym_set_comprehension] = STATE(44),
        [anon_sym_not] = ACTIONS(457),
        [anon_sym_LBRACK] = ACTIONS(133),
        [anon_sym_LBRACE] = ACTIONS(135),
        [sym_number] = ACTIONS(137),
        [sym_identifier] = ACTIONS(139),
        [sym_comment] = ACTIONS(79),
    },
    [156] = {
        [sym__expression] = STATE(159),
        [sym_binary_operator] = STATE(44),
        [sym_unary_operator] = STATE(44),
        [sym_subscript] = STATE(44),
        [sym_call] = STATE(44),
        [sym_list] = STATE(44),
        [sym_list_comprehension] = STATE(44),
        [sym_dictionary] = STATE(44),
        [sym_dictionary_comprehension] = STATE(44),
        [sym_set] = STATE(44),
        [sym_set_comprehension] = STATE(44),
        [anon_sym_not] = ACTIONS(457),
        [anon_sym_LBRACK] = ACTIONS(133),
        [anon_sym_LBRACE] = ACTIONS(135),
        [sym_number] = ACTIONS(137),
        [sym_identifier] = ACTIONS(139),
        [sym_comment] = ACTIONS(79),
    },
    [157] = {
        [sym__expression] = STATE(161),
        [sym_binary_operator] = STATE(44),
        [sym_unary_operator] = STATE(44),
        [sym_subscript] = STATE(44),
        [sym_call] = STATE(44),
        [sym_list] = STATE(44),
        [sym_list_comprehension] = STATE(44),
        [sym_dictionary] = STATE(44),
        [sym_dictionary_comprehension] = STATE(44),
        [sym_set] = STATE(44),
        [sym_set_comprehension] = STATE(44),
        [anon_sym_not] = ACTIONS(457),
        [anon_sym_LBRACK] = ACTIONS(133),
        [anon_sym_LBRACE] = ACTIONS(135),
        [sym_number] = ACTIONS(137),
        [sym_identifier] = ACTIONS(139),
        [sym_comment] = ACTIONS(79),
    },
    [158] = {
        [anon_sym_COMMA] = ACTIONS(307),
        [anon_sym_LPAREN] = ACTIONS(251),
        [anon_sym_STAR] = ACTIONS(461),
        [anon_sym_PLUS] = ACTIONS(463),
        [anon_sym_DASH] = ACTIONS(463),
        [anon_sym_SLASH] = ACTIONS(465),
        [anon_sym_STAR_STAR] = ACTIONS(467),
        [anon_sym_PIPE] = ACTIONS(307),
        [anon_sym_AMP] = ACTIONS(471),
        [anon_sym_CARET] = ACTIONS(473),
        [anon_sym_LT_LT] = ACTIONS(463),
        [anon_sym_GT_GT] = ACTIONS(463),
        [anon_sym_and] = ACTIONS(471),
        [anon_sym_or] = ACTIONS(307),
        [anon_sym_LBRACK] = ACTIONS(307),
        [anon_sym_RBRACE] = ACTIONS(307),
        [sym_comment] = ACTIONS(79),
    },
    [159] = {
        [anon_sym_COMMA] = ACTIONS(307),
        [anon_sym_LPAREN] = ACTIONS(251),
        [anon_sym_STAR] = ACTIONS(461),
        [anon_sym_PLUS] = ACTIONS(463),
        [anon_sym_DASH] = ACTIONS(463),
        [anon_sym_SLASH] = ACTIONS(465),
        [anon_sym_STAR_STAR] = ACTIONS(467),
        [anon_sym_PIPE] = ACTIONS(307),
        [anon_sym_AMP] = ACTIONS(307),
        [anon_sym_CARET] = ACTIONS(473),
        [anon_sym_LT_LT] = ACTIONS(463),
        [anon_sym_GT_GT] = ACTIONS(463),
        [anon_sym_and] = ACTIONS(307),
        [anon_sym_or] = ACTIONS(307),
        [anon_sym_LBRACK] = ACTIONS(307),
        [anon_sym_RBRACE] = ACTIONS(307),
        [sym_comment] = ACTIONS(79),
    },
    [160] = {
        [anon_sym_COMMA] = ACTIONS(307),
        [anon_sym_LPAREN] = ACTIONS(251),
        [anon_sym_STAR] = ACTIONS(461),
        [anon_sym_PLUS] = ACTIONS(307),
        [anon_sym_DASH] = ACTIONS(307),
        [anon_sym_SLASH] = ACTIONS(465),
        [anon_sym_STAR_STAR] = ACTIONS(467),
        [anon_sym_PIPE] = ACTIONS(307),
        [anon_sym_AMP] = ACTIONS(307),
        [anon_sym_CARET] = ACTIONS(307),
        [anon_sym_LT_LT] = ACTIONS(307),
        [anon_sym_GT_GT] = ACTIONS(307),
        [anon_sym_and] = ACTIONS(307),
        [anon_sym_or] = ACTIONS(307),
        [anon_sym_LBRACK] = ACTIONS(307),
        [anon_sym_RBRACE] = ACTIONS(307),
        [sym_comment] = ACTIONS(79),
    },
    [161] = {
        [anon_sym_COMMA] = ACTIONS(307),
        [anon_sym_LPAREN] = ACTIONS(251),
        [anon_sym_STAR] = ACTIONS(461),
        [anon_sym_PLUS] = ACTIONS(463),
        [anon_sym_DASH] = ACTIONS(463),
        [anon_sym_SLASH] = ACTIONS(465),
        [anon_sym_STAR_STAR] = ACTIONS(467),
        [anon_sym_PIPE] = ACTIONS(307),
        [anon_sym_AMP] = ACTIONS(307),
        [anon_sym_CARET] = ACTIONS(307),
        [anon_sym_LT_LT] = ACTIONS(463),
        [anon_sym_GT_GT] = ACTIONS(463),
        [anon_sym_and] = ACTIONS(307),
        [anon_sym_or] = ACTIONS(307),
        [anon_sym_LBRACK] = ACTIONS(307),
        [anon_sym_RBRACE] = ACTIONS(307),
        [sym_comment] = ACTIONS(79),
    },
    [162] = {
        [anon_sym_COMMA] = ACTIONS(307),
        [anon_sym_LPAREN] = ACTIONS(251),
        [anon_sym_STAR] = ACTIONS(309),
        [anon_sym_PLUS] = ACTIONS(307),
        [anon_sym_DASH] = ACTIONS(307),
        [anon_sym_SLASH] = ACTIONS(307),
        [anon_sym_STAR_STAR] = ACTIONS(467),
        [anon_sym_PIPE] = ACTIONS(307),
        [anon_sym_AMP] = ACTIONS(307),
        [anon_sym_CARET] = ACTIONS(307),
        [anon_sym_LT_LT] = ACTIONS(307),
        [anon_sym_GT_GT] = ACTIONS(307),
        [anon_sym_and] = ACTIONS(307),
        [anon_sym_or] = ACTIONS(307),
        [anon_sym_LBRACK] = ACTIONS(307),
        [anon_sym_RBRACE] = ACTIONS(307),
        [sym_comment] = ACTIONS(79),
    },
    [163] = {
        [sym__expression] = STATE(275),
        [sym_binary_operator] = STATE(44),
        [sym_unary_operator] = STATE(44),
        [sym_subscript] = STATE(44),
        [sym_call] = STATE(44),
        [sym_list] = STATE(44),
        [sym_list_comprehension] = STATE(44),
        [sym_dictionary] = STATE(44),
        [sym_dictionary_comprehension] = STATE(44),
        [sym_set] = STATE(44),
        [sym_set_comprehension] = STATE(44),
        [anon_sym_not] = ACTIONS(141),
        [anon_sym_LBRACK] = ACTIONS(133),
        [anon_sym_LBRACE] = ACTIONS(135),
        [sym_number] = ACTIONS(137),
        [sym_identifier] = ACTIONS(139),
        [sym_comment] = ACTIONS(79),
    },
    [164] = {
        [anon_sym_in] = ACTIONS(475),
        [sym_comment] = ACTIONS(79),
    },
    [165] = {
        [aux_sym_print_statement_repeat1] = STATE(173),
        [anon_sym_COMMA] = ACTIONS(477),
        [anon_sym_in] = ACTIONS(479),
        [anon_sym_LPAREN] = ACTIONS(251),
        [anon_sym_STAR] = ACTIONS(481),
        [anon_sym_PLUS] = ACTIONS(483),
        [anon_sym_DASH] = ACTIONS(483),
        [anon_sym_SLASH] = ACTIONS(485),
        [anon_sym_STAR_STAR] = ACTIONS(487),
        [anon_sym_PIPE] = ACTIONS(489),
        [anon_sym_AMP] = ACTIONS(491),
        [anon_sym_CARET] = ACTIONS(493),
        [anon_sym_LT_LT] = ACTIONS(483),
        [anon_sym_GT_GT] = ACTIONS(483),
        [anon_sym_and] = ACTIONS(491),
        [anon_sym_or] = ACTIONS(489),
        [anon_sym_LBRACK] = ACTIONS(267),
        [sym_comment] = ACTIONS(79),
    },
    [166] = {
        [sym__expression] = STATE(181),
        [sym_binary_operator] = STATE(44),
        [sym_unary_operator] = STATE(44),
        [sym_subscript] = STATE(44),
        [sym_call] = STATE(44),
        [sym_list] = STATE(44),
        [sym_list_comprehension] = STATE(44),
        [sym_dictionary] = STATE(44),
        [sym_dictionary_comprehension] = STATE(44),
        [sym_set] = STATE(44),
        [sym_set_comprehension] = STATE(44),
        [anon_sym_not] = ACTIONS(141),
        [anon_sym_LBRACK] = ACTIONS(133),
        [anon_sym_LBRACE] = ACTIONS(135),
        [sym_number] = ACTIONS(137),
        [sym_identifier] = ACTIONS(139),
        [sym_comment] = ACTIONS(79),
    },
    [167] = {
        [sym__expression] = STATE(180),
        [sym_binary_operator] = STATE(44),
        [sym_unary_operator] = STATE(44),
        [sym_subscript] = STATE(44),
        [sym_call] = STATE(44),
        [sym_list] = STATE(44),
        [sym_list_comprehension] = STATE(44),
        [sym_dictionary] = STATE(44),
        [sym_dictionary_comprehension] = STATE(44),
        [sym_set] = STATE(44),
        [sym_set_comprehension] = STATE(44),
        [anon_sym_not] = ACTIONS(141),
        [anon_sym_LBRACK] = ACTIONS(133),
        [anon_sym_LBRACE] = ACTIONS(135),
        [sym_number] = ACTIONS(137),
        [sym_identifier] = ACTIONS(139),
        [sym_comment] = ACTIONS(79),
    },
    [168] = {
        [sym__expression] = STATE(178),
        [sym_binary_operator] = STATE(44),
        [sym_unary_operator] = STATE(44),
        [sym_subscript] = STATE(44),
        [sym_call] = STATE(44),
        [sym_list] = STATE(44),
        [sym_list_comprehension] = STATE(44),
        [sym_dictionary] = STATE(44),
        [sym_dictionary_comprehension] = STATE(44),
        [sym_set] = STATE(44),
        [sym_set_comprehension] = STATE(44),
        [anon_sym_not] = ACTIONS(141),
        [anon_sym_LBRACK] = ACTIONS(133),
        [anon_sym_LBRACE] = ACTIONS(135),
        [sym_number] = ACTIONS(137),
        [sym_identifier] = ACTIONS(139),
        [sym_comment] = ACTIONS(79),
    },
    [169] = {
        [sym__expression] = STATE(76),
        [sym_binary_operator] = STATE(44),
        [sym_unary_operator] = STATE(44),
        [sym_subscript] = STATE(44),
        [sym_call] = STATE(44),
        [sym_list] = STATE(44),
        [sym_list_comprehension] = STATE(44),
        [sym_dictionary] = STATE(44),
        [sym_dictionary_comprehension] = STATE(44),
        [sym_set] = STATE(44),
        [sym_set_comprehension] = STATE(44),
        [anon_sym_not] = ACTIONS(141),
        [anon_sym_LBRACK] = ACTIONS(133),
        [anon_sym_LBRACE] = ACTIONS(135),
        [sym_number] = ACTIONS(137),
        [sym_identifier] = ACTIONS(139),
        [sym_comment] = ACTIONS(79),
    },
    [170] = {
        [sym__expression] = STATE(176),
        [sym_binary_operator] = STATE(44),
        [sym_unary_operator] = STATE(44),
        [sym_subscript] = STATE(44),
        [sym_call] = STATE(44),
        [sym_list] = STATE(44),
        [sym_list_comprehension] = STATE(44),
        [sym_dictionary] = STATE(44),
        [sym_dictionary_comprehension] = STATE(44),
        [sym_set] = STATE(44),
        [sym_set_comprehension] = STATE(44),
        [anon_sym_not] = ACTIONS(141),
        [anon_sym_LBRACK] = ACTIONS(133),
        [anon_sym_LBRACE] = ACTIONS(135),
        [sym_number] = ACTIONS(137),
        [sym_identifier] = ACTIONS(139),
        [sym_comment] = ACTIONS(79),
    },
    [171] = {
        [sym__expression] = STATE(177),
        [sym_binary_operator] = STATE(44),
        [sym_unary_operator] = STATE(44),
        [sym_subscript] = STATE(44),
        [sym_call] = STATE(44),
        [sym_list] = STATE(44),
        [sym_list_comprehension] = STATE(44),
        [sym_dictionary] = STATE(44),
        [sym_dictionary_comprehension] = STATE(44),
        [sym_set] = STATE(44),
        [sym_set_comprehension] = STATE(44),
        [anon_sym_not] = ACTIONS(141),
        [anon_sym_LBRACK] = ACTIONS(133),
        [anon_sym_LBRACE] = ACTIONS(135),
        [sym_number] = ACTIONS(137),
        [sym_identifier] = ACTIONS(139),
        [sym_comment] = ACTIONS(79),
    },
    [172] = {
        [sym__expression] = STATE(179),
        [sym_binary_operator] = STATE(44),
        [sym_unary_operator] = STATE(44),
        [sym_subscript] = STATE(44),
        [sym_call] = STATE(44),
        [sym_list] = STATE(44),
        [sym_list_comprehension] = STATE(44),
        [sym_dictionary] = STATE(44),
        [sym_dictionary_comprehension] = STATE(44),
        [sym_set] = STATE(44),
        [sym_set_comprehension] = STATE(44),
        [anon_sym_not] = ACTIONS(141),
        [anon_sym_LBRACK] = ACTIONS(133),
        [anon_sym_LBRACE] = ACTIONS(135),
        [sym_number] = ACTIONS(137),
        [sym_identifier] = ACTIONS(139),
        [sym_comment] = ACTIONS(79),
    },
    [173] = {
        [anon_sym_COMMA] = ACTIONS(495),
        [anon_sym_in] = ACTIONS(497),
        [sym_comment] = ACTIONS(79),
    },
    [174] = {
        [sym__expression] = STATE(175),
        [sym_binary_operator] = STATE(44),
        [sym_unary_operator] = STATE(44),
        [sym_subscript] = STATE(44),
        [sym_call] = STATE(44),
        [sym_list] = STATE(44),
        [sym_list_comprehension] = STATE(44),
        [sym_dictionary] = STATE(44),
        [sym_dictionary_comprehension] = STATE(44),
        [sym_set] = STATE(44),
        [sym_set_comprehension] = STATE(44),
        [anon_sym_not] = ACTIONS(141),
        [anon_sym_LBRACK] = ACTIONS(133),
        [anon_sym_LBRACE] = ACTIONS(135),
        [sym_number] = ACTIONS(137),
        [sym_identifier] = ACTIONS(139),
        [sym_comment] = ACTIONS(79),
    },
    [175] = {
        [anon_sym_COMMA] = ACTIONS(499),
        [anon_sym_in] = ACTIONS(499),
        [anon_sym_LPAREN] = ACTIONS(251),
        [anon_sym_STAR] = ACTIONS(481),
        [anon_sym_PLUS] = ACTIONS(483),
        [anon_sym_DASH] = ACTIONS(483),
        [anon_sym_SLASH] = ACTIONS(485),
        [anon_sym_STAR_STAR] = ACTIONS(487),
        [anon_sym_PIPE] = ACTIONS(489),
        [anon_sym_AMP] = ACTIONS(491),
        [anon_sym_CARET] = ACTIONS(493),
        [anon_sym_LT_LT] = ACTIONS(483),
        [anon_sym_GT_GT] = ACTIONS(483),
        [anon_sym_and] = ACTIONS(491),
        [anon_sym_or] = ACTIONS(489),
        [anon_sym_LBRACK] = ACTIONS(267),
        [sym_comment] = ACTIONS(79),
    },
    [176] = {
        [anon_sym_COMMA] = ACTIONS(307),
        [anon_sym_in] = ACTIONS(307),
        [anon_sym_LPAREN] = ACTIONS(251),
        [anon_sym_STAR] = ACTIONS(481),
        [anon_sym_PLUS] = ACTIONS(483),
        [anon_sym_DASH] = ACTIONS(483),
        [anon_sym_SLASH] = ACTIONS(485),
        [anon_sym_STAR_STAR] = ACTIONS(487),
        [anon_sym_PIPE] = ACTIONS(307),
        [anon_sym_AMP] = ACTIONS(491),
        [anon_sym_CARET] = ACTIONS(493),
        [anon_sym_LT_LT] = ACTIONS(483),
        [anon_sym_GT_GT] = ACTIONS(483),
        [anon_sym_and] = ACTIONS(491),
        [anon_sym_or] = ACTIONS(307),
        [anon_sym_LBRACK] = ACTIONS(307),
        [sym_comment] = ACTIONS(79),
    },
    [177] = {
        [anon_sym_COMMA] = ACTIONS(307),
        [anon_sym_in] = ACTIONS(307),
        [anon_sym_LPAREN] = ACTIONS(251),
        [anon_sym_STAR] = ACTIONS(481),
        [anon_sym_PLUS] = ACTIONS(483),
        [anon_sym_DASH] = ACTIONS(483),
        [anon_sym_SLASH] = ACTIONS(485),
        [anon_sym_STAR_STAR] = ACTIONS(487),
        [anon_sym_PIPE] = ACTIONS(307),
        [anon_sym_AMP] = ACTIONS(307),
        [anon_sym_CARET] = ACTIONS(493),
        [anon_sym_LT_LT] = ACTIONS(483),
        [anon_sym_GT_GT] = ACTIONS(483),
        [anon_sym_and] = ACTIONS(307),
        [anon_sym_or] = ACTIONS(307),
        [anon_sym_LBRACK] = ACTIONS(307),
        [sym_comment] = ACTIONS(79),
    },
    [178] = {
        [anon_sym_COMMA] = ACTIONS(307),
        [anon_sym_in] = ACTIONS(307),
        [anon_sym_LPAREN] = ACTIONS(251),
        [anon_sym_STAR] = ACTIONS(481),
        [anon_sym_PLUS] = ACTIONS(307),
        [anon_sym_DASH] = ACTIONS(307),
        [anon_sym_SLASH] = ACTIONS(485),
        [anon_sym_STAR_STAR] = ACTIONS(487),
        [anon_sym_PIPE] = ACTIONS(307),
        [anon_sym_AMP] = ACTIONS(307),
        [anon_sym_CARET] = ACTIONS(307),
        [anon_sym_LT_LT] = ACTIONS(307),
        [anon_sym_GT_GT] = ACTIONS(307),
        [anon_sym_and] = ACTIONS(307),
        [anon_sym_or] = ACTIONS(307),
        [anon_sym_LBRACK] = ACTIONS(307),
        [sym_comment] = ACTIONS(79),
    },
    [179] = {
        [anon_sym_COMMA] = ACTIONS(307),
        [anon_sym_in] = ACTIONS(307),
        [anon_sym_LPAREN] = ACTIONS(251),
        [anon_sym_STAR] = ACTIONS(481),
        [anon_sym_PLUS] = ACTIONS(483),
        [anon_sym_DASH] = ACTIONS(483),
        [anon_sym_SLASH] = ACTIONS(485),
        [anon_sym_STAR_STAR] = ACTIONS(487),
        [anon_sym_PIPE] = ACTIONS(307),
        [anon_sym_AMP] = ACTIONS(307),
        [anon_sym_CARET] = ACTIONS(307),
        [anon_sym_LT_LT] = ACTIONS(483),
        [anon_sym_GT_GT] = ACTIONS(483),
        [anon_sym_and] = ACTIONS(307),
        [anon_sym_or] = ACTIONS(307),
        [anon_sym_LBRACK] = ACTIONS(307),
        [sym_comment] = ACTIONS(79),
    },
    [180] = {
        [anon_sym_COMMA] = ACTIONS(307),
        [anon_sym_in] = ACTIONS(307),
        [anon_sym_LPAREN] = ACTIONS(251),
        [anon_sym_STAR] = ACTIONS(309),
        [anon_sym_PLUS] = ACTIONS(307),
        [anon_sym_DASH] = ACTIONS(307),
        [anon_sym_SLASH] = ACTIONS(307),
        [anon_sym_STAR_STAR] = ACTIONS(487),
        [anon_sym_PIPE] = ACTIONS(307),
        [anon_sym_AMP] = ACTIONS(307),
        [anon_sym_CARET] = ACTIONS(307),
        [anon_sym_LT_LT] = ACTIONS(307),
        [anon_sym_GT_GT] = ACTIONS(307),
        [anon_sym_and] = ACTIONS(307),
        [anon_sym_or] = ACTIONS(307),
        [anon_sym_LBRACK] = ACTIONS(307),
        [sym_comment] = ACTIONS(79),
    },
    [181] = {
        [anon_sym_COMMA] = ACTIONS(501),
        [anon_sym_in] = ACTIONS(501),
        [anon_sym_LPAREN] = ACTIONS(251),
        [anon_sym_STAR] = ACTIONS(481),
        [anon_sym_PLUS] = ACTIONS(483),
        [anon_sym_DASH] = ACTIONS(483),
        [anon_sym_SLASH] = ACTIONS(485),
        [anon_sym_STAR_STAR] = ACTIONS(487),
        [anon_sym_PIPE] = ACTIONS(489),
        [anon_sym_AMP] = ACTIONS(491),
        [anon_sym_CARET] = ACTIONS(493),
        [anon_sym_LT_LT] = ACTIONS(483),
        [anon_sym_GT_GT] = ACTIONS(483),
        [anon_sym_and] = ACTIONS(491),
        [anon_sym_or] = ACTIONS(489),
        [anon_sym_LBRACK] = ACTIONS(267),
        [sym_comment] = ACTIONS(79),
    },
    [182] = {
        [sym__expression] = STATE(184),
        [sym_binary_operator] = STATE(44),
        [sym_unary_operator] = STATE(44),
        [sym_subscript] = STATE(44),
        [sym_call] = STATE(44),
        [sym_list] = STATE(44),
        [sym_list_comprehension] = STATE(44),
        [sym_dictionary] = STATE(44),
        [sym_dictionary_comprehension] = STATE(44),
        [sym_set] = STATE(44),
        [sym_set_comprehension] = STATE(44),
        [anon_sym_not] = ACTIONS(503),
        [anon_sym_LBRACK] = ACTIONS(133),
        [anon_sym_LBRACE] = ACTIONS(135),
        [sym_number] = ACTIONS(137),
        [sym_identifier] = ACTIONS(139),
        [sym_comment] = ACTIONS(79),
    },
    [183] = {
        [sym__expression] = STATE(275),
        [sym_binary_operator] = STATE(44),
        [sym_unary_operator] = STATE(44),
        [sym_subscript] = STATE(44),
        [sym_call] = STATE(44),
        [sym_list] = STATE(44),
        [sym_list_comprehension] = STATE(44),
        [sym_dictionary] = STATE(44),
        [sym_dictionary_comprehension] = STATE(44),
        [sym_set] = STATE(44),
        [sym_set_comprehension] = STATE(44),
        [anon_sym_not] = ACTIONS(503),
        [anon_sym_LBRACK] = ACTIONS(133),
        [anon_sym_LBRACE] = ACTIONS(135),
        [sym_number] = ACTIONS(137),
        [sym_identifier] = ACTIONS(139),
        [sym_comment] = ACTIONS(79),
    },
    [184] = {
        [anon_sym_LPAREN] = ACTIONS(251),
        [anon_sym_STAR] = ACTIONS(505),
        [anon_sym_PLUS] = ACTIONS(507),
        [anon_sym_DASH] = ACTIONS(507),
        [anon_sym_SLASH] = ACTIONS(509),
        [anon_sym_STAR_STAR] = ACTIONS(511),
        [anon_sym_PIPE] = ACTIONS(513),
        [anon_sym_AMP] = ACTIONS(515),
        [anon_sym_CARET] = ACTIONS(517),
        [anon_sym_LT_LT] = ACTIONS(507),
        [anon_sym_GT_GT] = ACTIONS(507),
        [anon_sym_and] = ACTIONS(515),
        [anon_sym_or] = ACTIONS(513),
        [anon_sym_LBRACK] = ACTIONS(267),
        [anon_sym_RBRACE] = ACTIONS(519),
        [sym_comment] = ACTIONS(79),
    },
    [185] = {
        [sym__expression] = STATE(196),
        [sym_binary_operator] = STATE(44),
        [sym_unary_operator] = STATE(44),
        [sym_subscript] = STATE(44),
        [sym_call] = STATE(44),
        [sym_list] = STATE(44),
        [sym_list_comprehension] = STATE(44),
        [sym_dictionary] = STATE(44),
        [sym_dictionary_comprehension] = STATE(44),
        [sym_set] = STATE(44),
        [sym_set_comprehension] = STATE(44),
        [anon_sym_not] = ACTIONS(503),
        [anon_sym_LBRACK] = ACTIONS(133),
        [anon_sym_LBRACE] = ACTIONS(135),
        [sym_number] = ACTIONS(137),
        [sym_identifier] = ACTIONS(139),
        [sym_comment] = ACTIONS(79),
    },
    [186] = {
        [sym__expression] = STATE(194),
        [sym_binary_operator] = STATE(44),
        [sym_unary_operator] = STATE(44),
        [sym_subscript] = STATE(44),
        [sym_call] = STATE(44),
        [sym_list] = STATE(44),
        [sym_list_comprehension] = STATE(44),
        [sym_dictionary] = STATE(44),
        [sym_dictionary_comprehension] = STATE(44),
        [sym_set] = STATE(44),
        [sym_set_comprehension] = STATE(44),
        [anon_sym_not] = ACTIONS(503),
        [anon_sym_LBRACK] = ACTIONS(133),
        [anon_sym_LBRACE] = ACTIONS(135),
        [sym_number] = ACTIONS(137),
        [sym_identifier] = ACTIONS(139),
        [sym_comment] = ACTIONS(79),
    },
    [187] = {
        [sym__expression] = STATE(76),
        [sym_binary_operator] = STATE(44),
        [sym_unary_operator] = STATE(44),
        [sym_subscript] = STATE(44),
        [sym_call] = STATE(44),
        [sym_list] = STATE(44),
        [sym_list_comprehension] = STATE(44),
        [sym_dictionary] = STATE(44),
        [sym_dictionary_comprehension] = STATE(44),
        [sym_set] = STATE(44),
        [sym_set_comprehension] = STATE(44),
        [anon_sym_not] = ACTIONS(503),
        [anon_sym_LBRACK] = ACTIONS(133),
        [anon_sym_LBRACE] = ACTIONS(135),
        [sym_number] = ACTIONS(137),
        [sym_identifier] = ACTIONS(139),
        [sym_comment] = ACTIONS(79),
    },
    [188] = {
        [sym__expression] = STATE(192),
        [sym_binary_operator] = STATE(44),
        [sym_unary_operator] = STATE(44),
        [sym_subscript] = STATE(44),
        [sym_call] = STATE(44),
        [sym_list] = STATE(44),
        [sym_list_comprehension] = STATE(44),
        [sym_dictionary] = STATE(44),
        [sym_dictionary_comprehension] = STATE(44),
        [sym_set] = STATE(44),
        [sym_set_comprehension] = STATE(44),
        [anon_sym_not] = ACTIONS(503),
        [anon_sym_LBRACK] = ACTIONS(133),
        [anon_sym_LBRACE] = ACTIONS(135),
        [sym_number] = ACTIONS(137),
        [sym_identifier] = ACTIONS(139),
        [sym_comment] = ACTIONS(79),
    },
    [189] = {
        [sym__expression] = STATE(193),
        [sym_binary_operator] = STATE(44),
        [sym_unary_operator] = STATE(44),
        [sym_subscript] = STATE(44),
        [sym_call] = STATE(44),
        [sym_list] = STATE(44),
        [sym_list_comprehension] = STATE(44),
        [sym_dictionary] = STATE(44),
        [sym_dictionary_comprehension] = STATE(44),
        [sym_set] = STATE(44),
        [sym_set_comprehension] = STATE(44),
        [anon_sym_not] = ACTIONS(503),
        [anon_sym_LBRACK] = ACTIONS(133),
        [anon_sym_LBRACE] = ACTIONS(135),
        [sym_number] = ACTIONS(137),
        [sym_identifier] = ACTIONS(139),
        [sym_comment] = ACTIONS(79),
    },
    [190] = {
        [sym__expression] = STATE(195),
        [sym_binary_operator] = STATE(44),
        [sym_unary_operator] = STATE(44),
        [sym_subscript] = STATE(44),
        [sym_call] = STATE(44),
        [sym_list] = STATE(44),
        [sym_list_comprehension] = STATE(44),
        [sym_dictionary] = STATE(44),
        [sym_dictionary_comprehension] = STATE(44),
        [sym_set] = STATE(44),
        [sym_set_comprehension] = STATE(44),
        [anon_sym_not] = ACTIONS(503),
        [anon_sym_LBRACK] = ACTIONS(133),
        [anon_sym_LBRACE] = ACTIONS(135),
        [sym_number] = ACTIONS(137),
        [sym_identifier] = ACTIONS(139),
        [sym_comment] = ACTIONS(79),
    },
    [191] = {
        [anon_sym_COMMA] = ACTIONS(521),
        [anon_sym_as] = ACTIONS(521),
        [anon_sym_COLON] = ACTIONS(521),
        [anon_sym_for] = ACTIONS(521),
        [anon_sym_in] = ACTIONS(521),
        [anon_sym_LPAREN] = ACTIONS(521),
        [anon_sym_RPAREN] = ACTIONS(521),
        [anon_sym_STAR] = ACTIONS(523),
        [anon_sym_PLUS] = ACTIONS(521),
        [anon_sym_DASH] = ACTIONS(521),
        [anon_sym_SLASH] = ACTIONS(521),
        [anon_sym_STAR_STAR] = ACTIONS(521),
        [anon_sym_PIPE] = ACTIONS(521),
        [anon_sym_AMP] = ACTIONS(521),
        [anon_sym_CARET] = ACTIONS(521),
        [anon_sym_LT_LT] = ACTIONS(521),
        [anon_sym_GT_GT] = ACTIONS(521),
        [anon_sym_and] = ACTIONS(521),
        [anon_sym_or] = ACTIONS(521),
        [anon_sym_LBRACK] = ACTIONS(521),
        [anon_sym_RBRACK] = ACTIONS(521),
        [anon_sym_RBRACE] = ACTIONS(521),
        [sym_comment] = ACTIONS(79),
    },
    [192] = {
        [anon_sym_LPAREN] = ACTIONS(251),
        [anon_sym_STAR] = ACTIONS(505),
        [anon_sym_PLUS] = ACTIONS(507),
        [anon_sym_DASH] = ACTIONS(507),
        [anon_sym_SLASH] = ACTIONS(509),
        [anon_sym_STAR_STAR] = ACTIONS(511),
        [anon_sym_PIPE] = ACTIONS(307),
        [anon_sym_AMP] = ACTIONS(515),
        [anon_sym_CARET] = ACTIONS(517),
        [anon_sym_LT_LT] = ACTIONS(507),
        [anon_sym_GT_GT] = ACTIONS(507),
        [anon_sym_and] = ACTIONS(515),
        [anon_sym_or] = ACTIONS(307),
        [anon_sym_LBRACK] = ACTIONS(307),
        [anon_sym_RBRACE] = ACTIONS(307),
        [sym_comment] = ACTIONS(79),
    },
    [193] = {
        [anon_sym_LPAREN] = ACTIONS(251),
        [anon_sym_STAR] = ACTIONS(505),
        [anon_sym_PLUS] = ACTIONS(507),
        [anon_sym_DASH] = ACTIONS(507),
        [anon_sym_SLASH] = ACTIONS(509),
        [anon_sym_STAR_STAR] = ACTIONS(511),
        [anon_sym_PIPE] = ACTIONS(307),
        [anon_sym_AMP] = ACTIONS(307),
        [anon_sym_CARET] = ACTIONS(517),
        [anon_sym_LT_LT] = ACTIONS(507),
        [anon_sym_GT_GT] = ACTIONS(507),
        [anon_sym_and] = ACTIONS(307),
        [anon_sym_or] = ACTIONS(307),
        [anon_sym_LBRACK] = ACTIONS(307),
        [anon_sym_RBRACE] = ACTIONS(307),
        [sym_comment] = ACTIONS(79),
    },
    [194] = {
        [anon_sym_LPAREN] = ACTIONS(251),
        [anon_sym_STAR] = ACTIONS(505),
        [anon_sym_PLUS] = ACTIONS(307),
        [anon_sym_DASH] = ACTIONS(307),
        [anon_sym_SLASH] = ACTIONS(509),
        [anon_sym_STAR_STAR] = ACTIONS(511),
        [anon_sym_PIPE] = ACTIONS(307),
        [anon_sym_AMP] = ACTIONS(307),
        [anon_sym_CARET] = ACTIONS(307),
        [anon_sym_LT_LT] = ACTIONS(307),
        [anon_sym_GT_GT] = ACTIONS(307),
        [anon_sym_and] = ACTIONS(307),
        [anon_sym_or] = ACTIONS(307),
        [anon_sym_LBRACK] = ACTIONS(307),
        [anon_sym_RBRACE] = ACTIONS(307),
        [sym_comment] = ACTIONS(79),
    },
    [195] = {
        [anon_sym_LPAREN] = ACTIONS(251),
        [anon_sym_STAR] = ACTIONS(505),
        [anon_sym_PLUS] = ACTIONS(507),
        [anon_sym_DASH] = ACTIONS(507),
        [anon_sym_SLASH] = ACTIONS(509),
        [anon_sym_STAR_STAR] = ACTIONS(511),
        [anon_sym_PIPE] = ACTIONS(307),
        [anon_sym_AMP] = ACTIONS(307),
        [anon_sym_CARET] = ACTIONS(307),
        [anon_sym_LT_LT] = ACTIONS(507),
        [anon_sym_GT_GT] = ACTIONS(507),
        [anon_sym_and] = ACTIONS(307),
        [anon_sym_or] = ACTIONS(307),
        [anon_sym_LBRACK] = ACTIONS(307),
        [anon_sym_RBRACE] = ACTIONS(307),
        [sym_comment] = ACTIONS(79),
    },
    [196] = {
        [anon_sym_LPAREN] = ACTIONS(251),
        [anon_sym_STAR] = ACTIONS(309),
        [anon_sym_PLUS] = ACTIONS(307),
        [anon_sym_DASH] = ACTIONS(307),
        [anon_sym_SLASH] = ACTIONS(307),
        [anon_sym_STAR_STAR] = ACTIONS(511),
        [anon_sym_PIPE] = ACTIONS(307),
        [anon_sym_AMP] = ACTIONS(307),
        [anon_sym_CARET] = ACTIONS(307),
        [anon_sym_LT_LT] = ACTIONS(307),
        [anon_sym_GT_GT] = ACTIONS(307),
        [anon_sym_and] = ACTIONS(307),
        [anon_sym_or] = ACTIONS(307),
        [anon_sym_LBRACK] = ACTIONS(307),
        [anon_sym_RBRACE] = ACTIONS(307),
        [sym_comment] = ACTIONS(79),
    },
    [197] = {
        [anon_sym_COMMA] = ACTIONS(525),
        [anon_sym_RBRACE] = ACTIONS(525),
        [sym_comment] = ACTIONS(79),
    },
    [198] = {
        [sym__expression] = STATE(235),
        [sym_binary_operator] = STATE(44),
        [sym_unary_operator] = STATE(44),
        [sym_subscript] = STATE(44),
        [sym_call] = STATE(44),
        [sym_list] = STATE(44),
        [sym_list_comprehension] = STATE(44),
        [sym_dictionary] = STATE(44),
        [sym_dictionary_comprehension] = STATE(44),
        [sym_set] = STATE(44),
        [sym_set_comprehension] = STATE(44),
        [anon_sym_not] = ACTIONS(457),
        [anon_sym_LBRACK] = ACTIONS(133),
        [anon_sym_LBRACE] = ACTIONS(135),
        [anon_sym_RBRACE] = ACTIONS(527),
        [sym_number] = ACTIONS(137),
        [sym_identifier] = ACTIONS(139),
        [sym_comment] = ACTIONS(79),
    },
    [199] = {
        [sym__expression] = STATE(223),
        [sym_binary_operator] = STATE(44),
        [sym_unary_operator] = STATE(44),
        [sym_subscript] = STATE(44),
        [sym_call] = STATE(44),
        [sym_list] = STATE(44),
        [sym_list_comprehension] = STATE(44),
        [sym_dictionary] = STATE(44),
        [sym_dictionary_comprehension] = STATE(44),
        [sym_set] = STATE(44),
        [sym_set_comprehension] = STATE(44),
        [anon_sym_not] = ACTIONS(529),
        [anon_sym_LBRACK] = ACTIONS(133),
        [anon_sym_LBRACE] = ACTIONS(135),
        [sym_number] = ACTIONS(137),
        [sym_identifier] = ACTIONS(139),
        [sym_comment] = ACTIONS(79),
    },
    [200] = {
        [sym_expression_list] = STATE(218),
        [sym__expression] = STATE(165),
        [sym_binary_operator] = STATE(44),
        [sym_unary_operator] = STATE(44),
        [sym_subscript] = STATE(44),
        [sym_call] = STATE(44),
        [sym_list] = STATE(44),
        [sym_list_comprehension] = STATE(44),
        [sym_dictionary] = STATE(44),
        [sym_dictionary_comprehension] = STATE(44),
        [sym_set] = STATE(44),
        [sym_set_comprehension] = STATE(44),
        [anon_sym_not] = ACTIONS(141),
        [anon_sym_LBRACK] = ACTIONS(133),
        [anon_sym_LBRACE] = ACTIONS(135),
        [sym_number] = ACTIONS(137),
        [sym_identifier] = ACTIONS(139),
        [sym_comment] = ACTIONS(79),
    },
    [201] = {
        [sym__expression] = STATE(217),
        [sym_binary_operator] = STATE(44),
        [sym_unary_operator] = STATE(44),
        [sym_subscript] = STATE(44),
        [sym_call] = STATE(44),
        [sym_list] = STATE(44),
        [sym_list_comprehension] = STATE(44),
        [sym_dictionary] = STATE(44),
        [sym_dictionary_comprehension] = STATE(44),
        [sym_set] = STATE(44),
        [sym_set_comprehension] = STATE(44),
        [anon_sym_not] = ACTIONS(155),
        [anon_sym_LBRACK] = ACTIONS(133),
        [anon_sym_LBRACE] = ACTIONS(135),
        [sym_number] = ACTIONS(137),
        [sym_identifier] = ACTIONS(139),
        [sym_comment] = ACTIONS(79),
    },
    [202] = {
        [sym__expression] = STATE(215),
        [sym_binary_operator] = STATE(44),
        [sym_unary_operator] = STATE(44),
        [sym_subscript] = STATE(44),
        [sym_call] = STATE(44),
        [sym_list] = STATE(44),
        [sym_list_comprehension] = STATE(44),
        [sym_dictionary] = STATE(44),
        [sym_dictionary_comprehension] = STATE(44),
        [sym_set] = STATE(44),
        [sym_set_comprehension] = STATE(44),
        [anon_sym_not] = ACTIONS(155),
        [anon_sym_LBRACK] = ACTIONS(133),
        [anon_sym_LBRACE] = ACTIONS(135),
        [sym_number] = ACTIONS(137),
        [sym_identifier] = ACTIONS(139),
        [sym_comment] = ACTIONS(79),
    },
    [203] = {
        [sym__expression] = STATE(76),
        [sym_binary_operator] = STATE(44),
        [sym_unary_operator] = STATE(44),
        [sym_subscript] = STATE(44),
        [sym_call] = STATE(44),
        [sym_list] = STATE(44),
        [sym_list_comprehension] = STATE(44),
        [sym_dictionary] = STATE(44),
        [sym_dictionary_comprehension] = STATE(44),
        [sym_set] = STATE(44),
        [sym_set_comprehension] = STATE(44),
        [anon_sym_not] = ACTIONS(155),
        [anon_sym_LBRACK] = ACTIONS(133),
        [anon_sym_LBRACE] = ACTIONS(135),
        [sym_number] = ACTIONS(137),
        [sym_identifier] = ACTIONS(139),
        [sym_comment] = ACTIONS(79),
    },
    [204] = {
        [sym__expression] = STATE(213),
        [sym_binary_operator] = STATE(44),
        [sym_unary_operator] = STATE(44),
        [sym_subscript] = STATE(44),
        [sym_call] = STATE(44),
        [sym_list] = STATE(44),
        [sym_list_comprehension] = STATE(44),
        [sym_dictionary] = STATE(44),
        [sym_dictionary_comprehension] = STATE(44),
        [sym_set] = STATE(44),
        [sym_set_comprehension] = STATE(44),
        [anon_sym_not] = ACTIONS(155),
        [anon_sym_LBRACK] = ACTIONS(133),
        [anon_sym_LBRACE] = ACTIONS(135),
        [sym_number] = ACTIONS(137),
        [sym_identifier] = ACTIONS(139),
        [sym_comment] = ACTIONS(79),
    },
    [205] = {
        [sym__expression] = STATE(214),
        [sym_binary_operator] = STATE(44),
        [sym_unary_operator] = STATE(44),
        [sym_subscript] = STATE(44),
        [sym_call] = STATE(44),
        [sym_list] = STATE(44),
        [sym_list_comprehension] = STATE(44),
        [sym_dictionary] = STATE(44),
        [sym_dictionary_comprehension] = STATE(44),
        [sym_set] = STATE(44),
        [sym_set_comprehension] = STATE(44),
        [anon_sym_not] = ACTIONS(155),
        [anon_sym_LBRACK] = ACTIONS(133),
        [anon_sym_LBRACE] = ACTIONS(135),
        [sym_number] = ACTIONS(137),
        [sym_identifier] = ACTIONS(139),
        [sym_comment] = ACTIONS(79),
    },
    [206] = {
        [sym__expression] = STATE(216),
        [sym_binary_operator] = STATE(44),
        [sym_unary_operator] = STATE(44),
        [sym_subscript] = STATE(44),
        [sym_call] = STATE(44),
        [sym_list] = STATE(44),
        [sym_list_comprehension] = STATE(44),
        [sym_dictionary] = STATE(44),
        [sym_dictionary_comprehension] = STATE(44),
        [sym_set] = STATE(44),
        [sym_set_comprehension] = STATE(44),
        [anon_sym_not] = ACTIONS(155),
        [anon_sym_LBRACK] = ACTIONS(133),
        [anon_sym_LBRACE] = ACTIONS(135),
        [sym_number] = ACTIONS(137),
        [sym_identifier] = ACTIONS(139),
        [sym_comment] = ACTIONS(79),
    },
    [207] = {
        [anon_sym_COMMA] = ACTIONS(531),
        [anon_sym_as] = ACTIONS(531),
        [anon_sym_COLON] = ACTIONS(531),
        [anon_sym_for] = ACTIONS(531),
        [anon_sym_in] = ACTIONS(531),
        [anon_sym_LPAREN] = ACTIONS(531),
        [anon_sym_RPAREN] = ACTIONS(531),
        [anon_sym_STAR] = ACTIONS(533),
        [anon_sym_PLUS] = ACTIONS(531),
        [anon_sym_DASH] = ACTIONS(531),
        [anon_sym_SLASH] = ACTIONS(531),
        [anon_sym_STAR_STAR] = ACTIONS(531),
        [anon_sym_PIPE] = ACTIONS(531),
        [anon_sym_AMP] = ACTIONS(531),
        [anon_sym_CARET] = ACTIONS(531),
        [anon_sym_LT_LT] = ACTIONS(531),
        [anon_sym_GT_GT] = ACTIONS(531),
        [anon_sym_and] = ACTIONS(531),
        [anon_sym_or] = ACTIONS(531),
        [anon_sym_LBRACK] = ACTIONS(531),
        [anon_sym_RBRACK] = ACTIONS(531),
        [anon_sym_RBRACE] = ACTIONS(531),
        [sym_comment] = ACTIONS(79),
    },
    [208] = {
        [anon_sym_COMMA] = ACTIONS(535),
        [anon_sym_RBRACE] = ACTIONS(527),
        [sym_comment] = ACTIONS(79),
    },
    [209] = {
        [sym__expression] = STATE(212),
        [sym_binary_operator] = STATE(44),
        [sym_unary_operator] = STATE(44),
        [sym_subscript] = STATE(44),
        [sym_call] = STATE(44),
        [sym_list] = STATE(44),
        [sym_list_comprehension] = STATE(44),
        [sym_dictionary] = STATE(44),
        [sym_dictionary_comprehension] = STATE(44),
        [sym_set] = STATE(44),
        [sym_set_comprehension] = STATE(44),
        [anon_sym_not] = ACTIONS(457),
        [anon_sym_LBRACK] = ACTIONS(133),
        [anon_sym_LBRACE] = ACTIONS(135),
        [anon_sym_RBRACE] = ACTIONS(537),
        [sym_number] = ACTIONS(137),
        [sym_identifier] = ACTIONS(139),
        [sym_comment] = ACTIONS(79),
    },
    [210] = {
        [anon_sym_COMMA] = ACTIONS(539),
        [anon_sym_as] = ACTIONS(539),
        [anon_sym_COLON] = ACTIONS(539),
        [anon_sym_for] = ACTIONS(539),
        [anon_sym_in] = ACTIONS(539),
        [anon_sym_LPAREN] = ACTIONS(539),
        [anon_sym_RPAREN] = ACTIONS(539),
        [anon_sym_STAR] = ACTIONS(541),
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
        [sym_comment] = ACTIONS(79),
    },
    [211] = {
        [anon_sym_COMMA] = ACTIONS(543),
        [anon_sym_as] = ACTIONS(543),
        [anon_sym_COLON] = ACTIONS(543),
        [anon_sym_for] = ACTIONS(543),
        [anon_sym_in] = ACTIONS(543),
        [anon_sym_LPAREN] = ACTIONS(543),
        [anon_sym_RPAREN] = ACTIONS(543),
        [anon_sym_STAR] = ACTIONS(545),
        [anon_sym_PLUS] = ACTIONS(543),
        [anon_sym_DASH] = ACTIONS(543),
        [anon_sym_SLASH] = ACTIONS(543),
        [anon_sym_STAR_STAR] = ACTIONS(543),
        [anon_sym_PIPE] = ACTIONS(543),
        [anon_sym_AMP] = ACTIONS(543),
        [anon_sym_CARET] = ACTIONS(543),
        [anon_sym_LT_LT] = ACTIONS(543),
        [anon_sym_GT_GT] = ACTIONS(543),
        [anon_sym_and] = ACTIONS(543),
        [anon_sym_or] = ACTIONS(543),
        [anon_sym_LBRACK] = ACTIONS(543),
        [anon_sym_RBRACK] = ACTIONS(543),
        [anon_sym_RBRACE] = ACTIONS(543),
        [sym_comment] = ACTIONS(79),
    },
    [212] = {
        [anon_sym_COMMA] = ACTIONS(499),
        [anon_sym_LPAREN] = ACTIONS(251),
        [anon_sym_STAR] = ACTIONS(461),
        [anon_sym_PLUS] = ACTIONS(463),
        [anon_sym_DASH] = ACTIONS(463),
        [anon_sym_SLASH] = ACTIONS(465),
        [anon_sym_STAR_STAR] = ACTIONS(467),
        [anon_sym_PIPE] = ACTIONS(469),
        [anon_sym_AMP] = ACTIONS(471),
        [anon_sym_CARET] = ACTIONS(473),
        [anon_sym_LT_LT] = ACTIONS(463),
        [anon_sym_GT_GT] = ACTIONS(463),
        [anon_sym_and] = ACTIONS(471),
        [anon_sym_or] = ACTIONS(469),
        [anon_sym_LBRACK] = ACTIONS(267),
        [anon_sym_RBRACE] = ACTIONS(499),
        [sym_comment] = ACTIONS(79),
    },
    [213] = {
        [anon_sym_COMMA] = ACTIONS(307),
        [anon_sym_COLON] = ACTIONS(307),
        [anon_sym_for] = ACTIONS(307),
        [anon_sym_LPAREN] = ACTIONS(251),
        [anon_sym_STAR] = ACTIONS(399),
        [anon_sym_PLUS] = ACTIONS(401),
        [anon_sym_DASH] = ACTIONS(401),
        [anon_sym_SLASH] = ACTIONS(403),
        [anon_sym_STAR_STAR] = ACTIONS(405),
        [anon_sym_PIPE] = ACTIONS(307),
        [anon_sym_AMP] = ACTIONS(409),
        [anon_sym_CARET] = ACTIONS(411),
        [anon_sym_LT_LT] = ACTIONS(401),
        [anon_sym_GT_GT] = ACTIONS(401),
        [anon_sym_and] = ACTIONS(409),
        [anon_sym_or] = ACTIONS(307),
        [anon_sym_LBRACK] = ACTIONS(307),
        [anon_sym_RBRACE] = ACTIONS(307),
        [sym_comment] = ACTIONS(79),
    },
    [214] = {
        [anon_sym_COMMA] = ACTIONS(307),
        [anon_sym_COLON] = ACTIONS(307),
        [anon_sym_for] = ACTIONS(307),
        [anon_sym_LPAREN] = ACTIONS(251),
        [anon_sym_STAR] = ACTIONS(399),
        [anon_sym_PLUS] = ACTIONS(401),
        [anon_sym_DASH] = ACTIONS(401),
        [anon_sym_SLASH] = ACTIONS(403),
        [anon_sym_STAR_STAR] = ACTIONS(405),
        [anon_sym_PIPE] = ACTIONS(307),
        [anon_sym_AMP] = ACTIONS(307),
        [anon_sym_CARET] = ACTIONS(411),
        [anon_sym_LT_LT] = ACTIONS(401),
        [anon_sym_GT_GT] = ACTIONS(401),
        [anon_sym_and] = ACTIONS(307),
        [anon_sym_or] = ACTIONS(307),
        [anon_sym_LBRACK] = ACTIONS(307),
        [anon_sym_RBRACE] = ACTIONS(307),
        [sym_comment] = ACTIONS(79),
    },
    [215] = {
        [anon_sym_COMMA] = ACTIONS(307),
        [anon_sym_COLON] = ACTIONS(307),
        [anon_sym_for] = ACTIONS(307),
        [anon_sym_LPAREN] = ACTIONS(251),
        [anon_sym_STAR] = ACTIONS(399),
        [anon_sym_PLUS] = ACTIONS(307),
        [anon_sym_DASH] = ACTIONS(307),
        [anon_sym_SLASH] = ACTIONS(403),
        [anon_sym_STAR_STAR] = ACTIONS(405),
        [anon_sym_PIPE] = ACTIONS(307),
        [anon_sym_AMP] = ACTIONS(307),
        [anon_sym_CARET] = ACTIONS(307),
        [anon_sym_LT_LT] = ACTIONS(307),
        [anon_sym_GT_GT] = ACTIONS(307),
        [anon_sym_and] = ACTIONS(307),
        [anon_sym_or] = ACTIONS(307),
        [anon_sym_LBRACK] = ACTIONS(307),
        [anon_sym_RBRACE] = ACTIONS(307),
        [sym_comment] = ACTIONS(79),
    },
    [216] = {
        [anon_sym_COMMA] = ACTIONS(307),
        [anon_sym_COLON] = ACTIONS(307),
        [anon_sym_for] = ACTIONS(307),
        [anon_sym_LPAREN] = ACTIONS(251),
        [anon_sym_STAR] = ACTIONS(399),
        [anon_sym_PLUS] = ACTIONS(401),
        [anon_sym_DASH] = ACTIONS(401),
        [anon_sym_SLASH] = ACTIONS(403),
        [anon_sym_STAR_STAR] = ACTIONS(405),
        [anon_sym_PIPE] = ACTIONS(307),
        [anon_sym_AMP] = ACTIONS(307),
        [anon_sym_CARET] = ACTIONS(307),
        [anon_sym_LT_LT] = ACTIONS(401),
        [anon_sym_GT_GT] = ACTIONS(401),
        [anon_sym_and] = ACTIONS(307),
        [anon_sym_or] = ACTIONS(307),
        [anon_sym_LBRACK] = ACTIONS(307),
        [anon_sym_RBRACE] = ACTIONS(307),
        [sym_comment] = ACTIONS(79),
    },
    [217] = {
        [anon_sym_COMMA] = ACTIONS(307),
        [anon_sym_COLON] = ACTIONS(307),
        [anon_sym_for] = ACTIONS(307),
        [anon_sym_LPAREN] = ACTIONS(251),
        [anon_sym_STAR] = ACTIONS(309),
        [anon_sym_PLUS] = ACTIONS(307),
        [anon_sym_DASH] = ACTIONS(307),
        [anon_sym_SLASH] = ACTIONS(307),
        [anon_sym_STAR_STAR] = ACTIONS(405),
        [anon_sym_PIPE] = ACTIONS(307),
        [anon_sym_AMP] = ACTIONS(307),
        [anon_sym_CARET] = ACTIONS(307),
        [anon_sym_LT_LT] = ACTIONS(307),
        [anon_sym_GT_GT] = ACTIONS(307),
        [anon_sym_and] = ACTIONS(307),
        [anon_sym_or] = ACTIONS(307),
        [anon_sym_LBRACK] = ACTIONS(307),
        [anon_sym_RBRACE] = ACTIONS(307),
        [sym_comment] = ACTIONS(79),
    },
    [218] = {
        [anon_sym_in] = ACTIONS(547),
        [sym_comment] = ACTIONS(79),
    },
    [219] = {
        [sym__expression] = STATE(220),
        [sym_binary_operator] = STATE(44),
        [sym_unary_operator] = STATE(44),
        [sym_subscript] = STATE(44),
        [sym_call] = STATE(44),
        [sym_list] = STATE(44),
        [sym_list_comprehension] = STATE(44),
        [sym_dictionary] = STATE(44),
        [sym_dictionary_comprehension] = STATE(44),
        [sym_set] = STATE(44),
        [sym_set_comprehension] = STATE(44),
        [anon_sym_not] = ACTIONS(503),
        [anon_sym_LBRACK] = ACTIONS(133),
        [anon_sym_LBRACE] = ACTIONS(135),
        [sym_number] = ACTIONS(137),
        [sym_identifier] = ACTIONS(139),
        [sym_comment] = ACTIONS(79),
    },
    [220] = {
        [anon_sym_LPAREN] = ACTIONS(251),
        [anon_sym_STAR] = ACTIONS(505),
        [anon_sym_PLUS] = ACTIONS(507),
        [anon_sym_DASH] = ACTIONS(507),
        [anon_sym_SLASH] = ACTIONS(509),
        [anon_sym_STAR_STAR] = ACTIONS(511),
        [anon_sym_PIPE] = ACTIONS(513),
        [anon_sym_AMP] = ACTIONS(515),
        [anon_sym_CARET] = ACTIONS(517),
        [anon_sym_LT_LT] = ACTIONS(507),
        [anon_sym_GT_GT] = ACTIONS(507),
        [anon_sym_and] = ACTIONS(515),
        [anon_sym_or] = ACTIONS(513),
        [anon_sym_LBRACK] = ACTIONS(267),
        [anon_sym_RBRACE] = ACTIONS(549),
        [sym_comment] = ACTIONS(79),
    },
    [221] = {
        [anon_sym_COMMA] = ACTIONS(551),
        [anon_sym_as] = ACTIONS(551),
        [anon_sym_COLON] = ACTIONS(551),
        [anon_sym_for] = ACTIONS(551),
        [anon_sym_in] = ACTIONS(551),
        [anon_sym_LPAREN] = ACTIONS(551),
        [anon_sym_RPAREN] = ACTIONS(551),
        [anon_sym_STAR] = ACTIONS(553),
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
        [sym_comment] = ACTIONS(79),
    },
    [222] = {
        [sym__expression] = STATE(275),
        [sym_binary_operator] = STATE(44),
        [sym_unary_operator] = STATE(44),
        [sym_subscript] = STATE(44),
        [sym_call] = STATE(44),
        [sym_list] = STATE(44),
        [sym_list_comprehension] = STATE(44),
        [sym_dictionary] = STATE(44),
        [sym_dictionary_comprehension] = STATE(44),
        [sym_set] = STATE(44),
        [sym_set_comprehension] = STATE(44),
        [anon_sym_not] = ACTIONS(529),
        [anon_sym_LBRACK] = ACTIONS(133),
        [anon_sym_LBRACE] = ACTIONS(135),
        [sym_number] = ACTIONS(137),
        [sym_identifier] = ACTIONS(139),
        [sym_comment] = ACTIONS(79),
    },
    [223] = {
        [anon_sym_COMMA] = ACTIONS(459),
        [anon_sym_for] = ACTIONS(459),
        [anon_sym_LPAREN] = ACTIONS(251),
        [anon_sym_STAR] = ACTIONS(555),
        [anon_sym_PLUS] = ACTIONS(557),
        [anon_sym_DASH] = ACTIONS(557),
        [anon_sym_SLASH] = ACTIONS(559),
        [anon_sym_STAR_STAR] = ACTIONS(561),
        [anon_sym_PIPE] = ACTIONS(563),
        [anon_sym_AMP] = ACTIONS(565),
        [anon_sym_CARET] = ACTIONS(567),
        [anon_sym_LT_LT] = ACTIONS(557),
        [anon_sym_GT_GT] = ACTIONS(557),
        [anon_sym_and] = ACTIONS(565),
        [anon_sym_or] = ACTIONS(563),
        [anon_sym_LBRACK] = ACTIONS(267),
        [anon_sym_RBRACE] = ACTIONS(459),
        [sym_comment] = ACTIONS(79),
    },
    [224] = {
        [sym__expression] = STATE(234),
        [sym_binary_operator] = STATE(44),
        [sym_unary_operator] = STATE(44),
        [sym_subscript] = STATE(44),
        [sym_call] = STATE(44),
        [sym_list] = STATE(44),
        [sym_list_comprehension] = STATE(44),
        [sym_dictionary] = STATE(44),
        [sym_dictionary_comprehension] = STATE(44),
        [sym_set] = STATE(44),
        [sym_set_comprehension] = STATE(44),
        [anon_sym_not] = ACTIONS(529),
        [anon_sym_LBRACK] = ACTIONS(133),
        [anon_sym_LBRACE] = ACTIONS(135),
        [sym_number] = ACTIONS(137),
        [sym_identifier] = ACTIONS(139),
        [sym_comment] = ACTIONS(79),
    },
    [225] = {
        [sym__expression] = STATE(232),
        [sym_binary_operator] = STATE(44),
        [sym_unary_operator] = STATE(44),
        [sym_subscript] = STATE(44),
        [sym_call] = STATE(44),
        [sym_list] = STATE(44),
        [sym_list_comprehension] = STATE(44),
        [sym_dictionary] = STATE(44),
        [sym_dictionary_comprehension] = STATE(44),
        [sym_set] = STATE(44),
        [sym_set_comprehension] = STATE(44),
        [anon_sym_not] = ACTIONS(529),
        [anon_sym_LBRACK] = ACTIONS(133),
        [anon_sym_LBRACE] = ACTIONS(135),
        [sym_number] = ACTIONS(137),
        [sym_identifier] = ACTIONS(139),
        [sym_comment] = ACTIONS(79),
    },
    [226] = {
        [sym__expression] = STATE(76),
        [sym_binary_operator] = STATE(44),
        [sym_unary_operator] = STATE(44),
        [sym_subscript] = STATE(44),
        [sym_call] = STATE(44),
        [sym_list] = STATE(44),
        [sym_list_comprehension] = STATE(44),
        [sym_dictionary] = STATE(44),
        [sym_dictionary_comprehension] = STATE(44),
        [sym_set] = STATE(44),
        [sym_set_comprehension] = STATE(44),
        [anon_sym_not] = ACTIONS(529),
        [anon_sym_LBRACK] = ACTIONS(133),
        [anon_sym_LBRACE] = ACTIONS(135),
        [sym_number] = ACTIONS(137),
        [sym_identifier] = ACTIONS(139),
        [sym_comment] = ACTIONS(79),
    },
    [227] = {
        [sym__expression] = STATE(230),
        [sym_binary_operator] = STATE(44),
        [sym_unary_operator] = STATE(44),
        [sym_subscript] = STATE(44),
        [sym_call] = STATE(44),
        [sym_list] = STATE(44),
        [sym_list_comprehension] = STATE(44),
        [sym_dictionary] = STATE(44),
        [sym_dictionary_comprehension] = STATE(44),
        [sym_set] = STATE(44),
        [sym_set_comprehension] = STATE(44),
        [anon_sym_not] = ACTIONS(529),
        [anon_sym_LBRACK] = ACTIONS(133),
        [anon_sym_LBRACE] = ACTIONS(135),
        [sym_number] = ACTIONS(137),
        [sym_identifier] = ACTIONS(139),
        [sym_comment] = ACTIONS(79),
    },
    [228] = {
        [sym__expression] = STATE(231),
        [sym_binary_operator] = STATE(44),
        [sym_unary_operator] = STATE(44),
        [sym_subscript] = STATE(44),
        [sym_call] = STATE(44),
        [sym_list] = STATE(44),
        [sym_list_comprehension] = STATE(44),
        [sym_dictionary] = STATE(44),
        [sym_dictionary_comprehension] = STATE(44),
        [sym_set] = STATE(44),
        [sym_set_comprehension] = STATE(44),
        [anon_sym_not] = ACTIONS(529),
        [anon_sym_LBRACK] = ACTIONS(133),
        [anon_sym_LBRACE] = ACTIONS(135),
        [sym_number] = ACTIONS(137),
        [sym_identifier] = ACTIONS(139),
        [sym_comment] = ACTIONS(79),
    },
    [229] = {
        [sym__expression] = STATE(233),
        [sym_binary_operator] = STATE(44),
        [sym_unary_operator] = STATE(44),
        [sym_subscript] = STATE(44),
        [sym_call] = STATE(44),
        [sym_list] = STATE(44),
        [sym_list_comprehension] = STATE(44),
        [sym_dictionary] = STATE(44),
        [sym_dictionary_comprehension] = STATE(44),
        [sym_set] = STATE(44),
        [sym_set_comprehension] = STATE(44),
        [anon_sym_not] = ACTIONS(529),
        [anon_sym_LBRACK] = ACTIONS(133),
        [anon_sym_LBRACE] = ACTIONS(135),
        [sym_number] = ACTIONS(137),
        [sym_identifier] = ACTIONS(139),
        [sym_comment] = ACTIONS(79),
    },
    [230] = {
        [anon_sym_COMMA] = ACTIONS(307),
        [anon_sym_for] = ACTIONS(307),
        [anon_sym_LPAREN] = ACTIONS(251),
        [anon_sym_STAR] = ACTIONS(555),
        [anon_sym_PLUS] = ACTIONS(557),
        [anon_sym_DASH] = ACTIONS(557),
        [anon_sym_SLASH] = ACTIONS(559),
        [anon_sym_STAR_STAR] = ACTIONS(561),
        [anon_sym_PIPE] = ACTIONS(307),
        [anon_sym_AMP] = ACTIONS(565),
        [anon_sym_CARET] = ACTIONS(567),
        [anon_sym_LT_LT] = ACTIONS(557),
        [anon_sym_GT_GT] = ACTIONS(557),
        [anon_sym_and] = ACTIONS(565),
        [anon_sym_or] = ACTIONS(307),
        [anon_sym_LBRACK] = ACTIONS(307),
        [anon_sym_RBRACE] = ACTIONS(307),
        [sym_comment] = ACTIONS(79),
    },
    [231] = {
        [anon_sym_COMMA] = ACTIONS(307),
        [anon_sym_for] = ACTIONS(307),
        [anon_sym_LPAREN] = ACTIONS(251),
        [anon_sym_STAR] = ACTIONS(555),
        [anon_sym_PLUS] = ACTIONS(557),
        [anon_sym_DASH] = ACTIONS(557),
        [anon_sym_SLASH] = ACTIONS(559),
        [anon_sym_STAR_STAR] = ACTIONS(561),
        [anon_sym_PIPE] = ACTIONS(307),
        [anon_sym_AMP] = ACTIONS(307),
        [anon_sym_CARET] = ACTIONS(567),
        [anon_sym_LT_LT] = ACTIONS(557),
        [anon_sym_GT_GT] = ACTIONS(557),
        [anon_sym_and] = ACTIONS(307),
        [anon_sym_or] = ACTIONS(307),
        [anon_sym_LBRACK] = ACTIONS(307),
        [anon_sym_RBRACE] = ACTIONS(307),
        [sym_comment] = ACTIONS(79),
    },
    [232] = {
        [anon_sym_COMMA] = ACTIONS(307),
        [anon_sym_for] = ACTIONS(307),
        [anon_sym_LPAREN] = ACTIONS(251),
        [anon_sym_STAR] = ACTIONS(555),
        [anon_sym_PLUS] = ACTIONS(307),
        [anon_sym_DASH] = ACTIONS(307),
        [anon_sym_SLASH] = ACTIONS(559),
        [anon_sym_STAR_STAR] = ACTIONS(561),
        [anon_sym_PIPE] = ACTIONS(307),
        [anon_sym_AMP] = ACTIONS(307),
        [anon_sym_CARET] = ACTIONS(307),
        [anon_sym_LT_LT] = ACTIONS(307),
        [anon_sym_GT_GT] = ACTIONS(307),
        [anon_sym_and] = ACTIONS(307),
        [anon_sym_or] = ACTIONS(307),
        [anon_sym_LBRACK] = ACTIONS(307),
        [anon_sym_RBRACE] = ACTIONS(307),
        [sym_comment] = ACTIONS(79),
    },
    [233] = {
        [anon_sym_COMMA] = ACTIONS(307),
        [anon_sym_for] = ACTIONS(307),
        [anon_sym_LPAREN] = ACTIONS(251),
        [anon_sym_STAR] = ACTIONS(555),
        [anon_sym_PLUS] = ACTIONS(557),
        [anon_sym_DASH] = ACTIONS(557),
        [anon_sym_SLASH] = ACTIONS(559),
        [anon_sym_STAR_STAR] = ACTIONS(561),
        [anon_sym_PIPE] = ACTIONS(307),
        [anon_sym_AMP] = ACTIONS(307),
        [anon_sym_CARET] = ACTIONS(307),
        [anon_sym_LT_LT] = ACTIONS(557),
        [anon_sym_GT_GT] = ACTIONS(557),
        [anon_sym_and] = ACTIONS(307),
        [anon_sym_or] = ACTIONS(307),
        [anon_sym_LBRACK] = ACTIONS(307),
        [anon_sym_RBRACE] = ACTIONS(307),
        [sym_comment] = ACTIONS(79),
    },
    [234] = {
        [anon_sym_COMMA] = ACTIONS(307),
        [anon_sym_for] = ACTIONS(307),
        [anon_sym_LPAREN] = ACTIONS(251),
        [anon_sym_STAR] = ACTIONS(309),
        [anon_sym_PLUS] = ACTIONS(307),
        [anon_sym_DASH] = ACTIONS(307),
        [anon_sym_SLASH] = ACTIONS(307),
        [anon_sym_STAR_STAR] = ACTIONS(561),
        [anon_sym_PIPE] = ACTIONS(307),
        [anon_sym_AMP] = ACTIONS(307),
        [anon_sym_CARET] = ACTIONS(307),
        [anon_sym_LT_LT] = ACTIONS(307),
        [anon_sym_GT_GT] = ACTIONS(307),
        [anon_sym_and] = ACTIONS(307),
        [anon_sym_or] = ACTIONS(307),
        [anon_sym_LBRACK] = ACTIONS(307),
        [anon_sym_RBRACE] = ACTIONS(307),
        [sym_comment] = ACTIONS(79),
    },
    [235] = {
        [anon_sym_COMMA] = ACTIONS(501),
        [anon_sym_LPAREN] = ACTIONS(251),
        [anon_sym_STAR] = ACTIONS(461),
        [anon_sym_PLUS] = ACTIONS(463),
        [anon_sym_DASH] = ACTIONS(463),
        [anon_sym_SLASH] = ACTIONS(465),
        [anon_sym_STAR_STAR] = ACTIONS(467),
        [anon_sym_PIPE] = ACTIONS(469),
        [anon_sym_AMP] = ACTIONS(471),
        [anon_sym_CARET] = ACTIONS(473),
        [anon_sym_LT_LT] = ACTIONS(463),
        [anon_sym_GT_GT] = ACTIONS(463),
        [anon_sym_and] = ACTIONS(471),
        [anon_sym_or] = ACTIONS(469),
        [anon_sym_LBRACK] = ACTIONS(267),
        [anon_sym_RBRACE] = ACTIONS(501),
        [sym_comment] = ACTIONS(79),
    },
    [236] = {
        [sym__expression] = STATE(275),
        [sym_binary_operator] = STATE(44),
        [sym_unary_operator] = STATE(44),
        [sym_subscript] = STATE(44),
        [sym_call] = STATE(44),
        [sym_list] = STATE(44),
        [sym_list_comprehension] = STATE(44),
        [sym_dictionary] = STATE(44),
        [sym_dictionary_comprehension] = STATE(44),
        [sym_set] = STATE(44),
        [sym_set_comprehension] = STATE(44),
        [anon_sym_not] = ACTIONS(151),
        [anon_sym_LBRACK] = ACTIONS(133),
        [anon_sym_LBRACE] = ACTIONS(135),
        [sym_number] = ACTIONS(137),
        [sym_identifier] = ACTIONS(139),
        [sym_comment] = ACTIONS(79),
    },
    [237] = {
        [anon_sym_COMMA] = ACTIONS(569),
        [anon_sym_as] = ACTIONS(569),
        [anon_sym_COLON] = ACTIONS(569),
        [anon_sym_for] = ACTIONS(569),
        [anon_sym_in] = ACTIONS(569),
        [anon_sym_LPAREN] = ACTIONS(569),
        [anon_sym_RPAREN] = ACTIONS(569),
        [anon_sym_STAR] = ACTIONS(571),
        [anon_sym_PLUS] = ACTIONS(569),
        [anon_sym_DASH] = ACTIONS(569),
        [anon_sym_SLASH] = ACTIONS(569),
        [anon_sym_STAR_STAR] = ACTIONS(569),
        [anon_sym_PIPE] = ACTIONS(569),
        [anon_sym_AMP] = ACTIONS(569),
        [anon_sym_CARET] = ACTIONS(569),
        [anon_sym_LT_LT] = ACTIONS(569),
        [anon_sym_GT_GT] = ACTIONS(569),
        [anon_sym_and] = ACTIONS(569),
        [anon_sym_or] = ACTIONS(569),
        [anon_sym_LBRACK] = ACTIONS(569),
        [anon_sym_RBRACK] = ACTIONS(569),
        [anon_sym_RBRACE] = ACTIONS(569),
        [sym_comment] = ACTIONS(79),
    },
    [238] = {
        [aux_sym_print_statement_repeat1] = STATE(248),
        [anon_sym_COMMA] = ACTIONS(573),
        [anon_sym_for] = ACTIONS(575),
        [anon_sym_LPAREN] = ACTIONS(251),
        [anon_sym_STAR] = ACTIONS(577),
        [anon_sym_PLUS] = ACTIONS(579),
        [anon_sym_DASH] = ACTIONS(579),
        [anon_sym_SLASH] = ACTIONS(581),
        [anon_sym_STAR_STAR] = ACTIONS(583),
        [anon_sym_PIPE] = ACTIONS(585),
        [anon_sym_AMP] = ACTIONS(587),
        [anon_sym_CARET] = ACTIONS(589),
        [anon_sym_LT_LT] = ACTIONS(579),
        [anon_sym_GT_GT] = ACTIONS(579),
        [anon_sym_and] = ACTIONS(587),
        [anon_sym_or] = ACTIONS(585),
        [anon_sym_LBRACK] = ACTIONS(267),
        [anon_sym_RBRACK] = ACTIONS(591),
        [sym_comment] = ACTIONS(79),
    },
    [239] = {
        [sym__expression] = STATE(274),
        [sym_binary_operator] = STATE(44),
        [sym_unary_operator] = STATE(44),
        [sym_subscript] = STATE(44),
        [sym_call] = STATE(44),
        [sym_list] = STATE(44),
        [sym_list_comprehension] = STATE(44),
        [sym_dictionary] = STATE(44),
        [sym_dictionary_comprehension] = STATE(44),
        [sym_set] = STATE(44),
        [sym_set_comprehension] = STATE(44),
        [anon_sym_not] = ACTIONS(239),
        [anon_sym_LBRACK] = ACTIONS(133),
        [anon_sym_RBRACK] = ACTIONS(593),
        [anon_sym_LBRACE] = ACTIONS(135),
        [sym_number] = ACTIONS(137),
        [sym_identifier] = ACTIONS(139),
        [sym_comment] = ACTIONS(79),
    },
    [240] = {
        [sym_expression_list] = STATE(258),
        [sym__expression] = STATE(165),
        [sym_binary_operator] = STATE(44),
        [sym_unary_operator] = STATE(44),
        [sym_subscript] = STATE(44),
        [sym_call] = STATE(44),
        [sym_list] = STATE(44),
        [sym_list_comprehension] = STATE(44),
        [sym_dictionary] = STATE(44),
        [sym_dictionary_comprehension] = STATE(44),
        [sym_set] = STATE(44),
        [sym_set_comprehension] = STATE(44),
        [anon_sym_not] = ACTIONS(141),
        [anon_sym_LBRACK] = ACTIONS(133),
        [anon_sym_LBRACE] = ACTIONS(135),
        [sym_number] = ACTIONS(137),
        [sym_identifier] = ACTIONS(139),
        [sym_comment] = ACTIONS(79),
    },
    [241] = {
        [sym__expression] = STATE(257),
        [sym_binary_operator] = STATE(44),
        [sym_unary_operator] = STATE(44),
        [sym_subscript] = STATE(44),
        [sym_call] = STATE(44),
        [sym_list] = STATE(44),
        [sym_list_comprehension] = STATE(44),
        [sym_dictionary] = STATE(44),
        [sym_dictionary_comprehension] = STATE(44),
        [sym_set] = STATE(44),
        [sym_set_comprehension] = STATE(44),
        [anon_sym_not] = ACTIONS(151),
        [anon_sym_LBRACK] = ACTIONS(133),
        [anon_sym_LBRACE] = ACTIONS(135),
        [sym_number] = ACTIONS(137),
        [sym_identifier] = ACTIONS(139),
        [sym_comment] = ACTIONS(79),
    },
    [242] = {
        [sym__expression] = STATE(255),
        [sym_binary_operator] = STATE(44),
        [sym_unary_operator] = STATE(44),
        [sym_subscript] = STATE(44),
        [sym_call] = STATE(44),
        [sym_list] = STATE(44),
        [sym_list_comprehension] = STATE(44),
        [sym_dictionary] = STATE(44),
        [sym_dictionary_comprehension] = STATE(44),
        [sym_set] = STATE(44),
        [sym_set_comprehension] = STATE(44),
        [anon_sym_not] = ACTIONS(151),
        [anon_sym_LBRACK] = ACTIONS(133),
        [anon_sym_LBRACE] = ACTIONS(135),
        [sym_number] = ACTIONS(137),
        [sym_identifier] = ACTIONS(139),
        [sym_comment] = ACTIONS(79),
    },
    [243] = {
        [sym__expression] = STATE(76),
        [sym_binary_operator] = STATE(44),
        [sym_unary_operator] = STATE(44),
        [sym_subscript] = STATE(44),
        [sym_call] = STATE(44),
        [sym_list] = STATE(44),
        [sym_list_comprehension] = STATE(44),
        [sym_dictionary] = STATE(44),
        [sym_dictionary_comprehension] = STATE(44),
        [sym_set] = STATE(44),
        [sym_set_comprehension] = STATE(44),
        [anon_sym_not] = ACTIONS(151),
        [anon_sym_LBRACK] = ACTIONS(133),
        [anon_sym_LBRACE] = ACTIONS(135),
        [sym_number] = ACTIONS(137),
        [sym_identifier] = ACTIONS(139),
        [sym_comment] = ACTIONS(79),
    },
    [244] = {
        [sym__expression] = STATE(253),
        [sym_binary_operator] = STATE(44),
        [sym_unary_operator] = STATE(44),
        [sym_subscript] = STATE(44),
        [sym_call] = STATE(44),
        [sym_list] = STATE(44),
        [sym_list_comprehension] = STATE(44),
        [sym_dictionary] = STATE(44),
        [sym_dictionary_comprehension] = STATE(44),
        [sym_set] = STATE(44),
        [sym_set_comprehension] = STATE(44),
        [anon_sym_not] = ACTIONS(151),
        [anon_sym_LBRACK] = ACTIONS(133),
        [anon_sym_LBRACE] = ACTIONS(135),
        [sym_number] = ACTIONS(137),
        [sym_identifier] = ACTIONS(139),
        [sym_comment] = ACTIONS(79),
    },
    [245] = {
        [sym__expression] = STATE(254),
        [sym_binary_operator] = STATE(44),
        [sym_unary_operator] = STATE(44),
        [sym_subscript] = STATE(44),
        [sym_call] = STATE(44),
        [sym_list] = STATE(44),
        [sym_list_comprehension] = STATE(44),
        [sym_dictionary] = STATE(44),
        [sym_dictionary_comprehension] = STATE(44),
        [sym_set] = STATE(44),
        [sym_set_comprehension] = STATE(44),
        [anon_sym_not] = ACTIONS(151),
        [anon_sym_LBRACK] = ACTIONS(133),
        [anon_sym_LBRACE] = ACTIONS(135),
        [sym_number] = ACTIONS(137),
        [sym_identifier] = ACTIONS(139),
        [sym_comment] = ACTIONS(79),
    },
    [246] = {
        [sym__expression] = STATE(256),
        [sym_binary_operator] = STATE(44),
        [sym_unary_operator] = STATE(44),
        [sym_subscript] = STATE(44),
        [sym_call] = STATE(44),
        [sym_list] = STATE(44),
        [sym_list_comprehension] = STATE(44),
        [sym_dictionary] = STATE(44),
        [sym_dictionary_comprehension] = STATE(44),
        [sym_set] = STATE(44),
        [sym_set_comprehension] = STATE(44),
        [anon_sym_not] = ACTIONS(151),
        [anon_sym_LBRACK] = ACTIONS(133),
        [anon_sym_LBRACE] = ACTIONS(135),
        [sym_number] = ACTIONS(137),
        [sym_identifier] = ACTIONS(139),
        [sym_comment] = ACTIONS(79),
    },
    [247] = {
        [anon_sym_COMMA] = ACTIONS(595),
        [anon_sym_as] = ACTIONS(595),
        [anon_sym_COLON] = ACTIONS(595),
        [anon_sym_for] = ACTIONS(595),
        [anon_sym_in] = ACTIONS(595),
        [anon_sym_LPAREN] = ACTIONS(595),
        [anon_sym_RPAREN] = ACTIONS(595),
        [anon_sym_STAR] = ACTIONS(597),
        [anon_sym_PLUS] = ACTIONS(595),
        [anon_sym_DASH] = ACTIONS(595),
        [anon_sym_SLASH] = ACTIONS(595),
        [anon_sym_STAR_STAR] = ACTIONS(595),
        [anon_sym_PIPE] = ACTIONS(595),
        [anon_sym_AMP] = ACTIONS(595),
        [anon_sym_CARET] = ACTIONS(595),
        [anon_sym_LT_LT] = ACTIONS(595),
        [anon_sym_GT_GT] = ACTIONS(595),
        [anon_sym_and] = ACTIONS(595),
        [anon_sym_or] = ACTIONS(595),
        [anon_sym_LBRACK] = ACTIONS(595),
        [anon_sym_RBRACK] = ACTIONS(595),
        [anon_sym_RBRACE] = ACTIONS(595),
        [sym_comment] = ACTIONS(79),
    },
    [248] = {
        [anon_sym_COMMA] = ACTIONS(599),
        [anon_sym_RBRACK] = ACTIONS(593),
        [sym_comment] = ACTIONS(79),
    },
    [249] = {
        [sym__expression] = STATE(252),
        [sym_binary_operator] = STATE(44),
        [sym_unary_operator] = STATE(44),
        [sym_subscript] = STATE(44),
        [sym_call] = STATE(44),
        [sym_list] = STATE(44),
        [sym_list_comprehension] = STATE(44),
        [sym_dictionary] = STATE(44),
        [sym_dictionary_comprehension] = STATE(44),
        [sym_set] = STATE(44),
        [sym_set_comprehension] = STATE(44),
        [anon_sym_not] = ACTIONS(239),
        [anon_sym_LBRACK] = ACTIONS(133),
        [anon_sym_RBRACK] = ACTIONS(601),
        [anon_sym_LBRACE] = ACTIONS(135),
        [sym_number] = ACTIONS(137),
        [sym_identifier] = ACTIONS(139),
        [sym_comment] = ACTIONS(79),
    },
    [250] = {
        [anon_sym_COMMA] = ACTIONS(603),
        [anon_sym_as] = ACTIONS(603),
        [anon_sym_COLON] = ACTIONS(603),
        [anon_sym_for] = ACTIONS(603),
        [anon_sym_in] = ACTIONS(603),
        [anon_sym_LPAREN] = ACTIONS(603),
        [anon_sym_RPAREN] = ACTIONS(603),
        [anon_sym_STAR] = ACTIONS(605),
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
        [sym_comment] = ACTIONS(79),
    },
    [251] = {
        [anon_sym_COMMA] = ACTIONS(607),
        [anon_sym_as] = ACTIONS(607),
        [anon_sym_COLON] = ACTIONS(607),
        [anon_sym_for] = ACTIONS(607),
        [anon_sym_in] = ACTIONS(607),
        [anon_sym_LPAREN] = ACTIONS(607),
        [anon_sym_RPAREN] = ACTIONS(607),
        [anon_sym_STAR] = ACTIONS(609),
        [anon_sym_PLUS] = ACTIONS(607),
        [anon_sym_DASH] = ACTIONS(607),
        [anon_sym_SLASH] = ACTIONS(607),
        [anon_sym_STAR_STAR] = ACTIONS(607),
        [anon_sym_PIPE] = ACTIONS(607),
        [anon_sym_AMP] = ACTIONS(607),
        [anon_sym_CARET] = ACTIONS(607),
        [anon_sym_LT_LT] = ACTIONS(607),
        [anon_sym_GT_GT] = ACTIONS(607),
        [anon_sym_and] = ACTIONS(607),
        [anon_sym_or] = ACTIONS(607),
        [anon_sym_LBRACK] = ACTIONS(607),
        [anon_sym_RBRACK] = ACTIONS(607),
        [anon_sym_RBRACE] = ACTIONS(607),
        [sym_comment] = ACTIONS(79),
    },
    [252] = {
        [anon_sym_COMMA] = ACTIONS(499),
        [anon_sym_LPAREN] = ACTIONS(251),
        [anon_sym_STAR] = ACTIONS(253),
        [anon_sym_PLUS] = ACTIONS(255),
        [anon_sym_DASH] = ACTIONS(255),
        [anon_sym_SLASH] = ACTIONS(257),
        [anon_sym_STAR_STAR] = ACTIONS(259),
        [anon_sym_PIPE] = ACTIONS(261),
        [anon_sym_AMP] = ACTIONS(263),
        [anon_sym_CARET] = ACTIONS(265),
        [anon_sym_LT_LT] = ACTIONS(255),
        [anon_sym_GT_GT] = ACTIONS(255),
        [anon_sym_and] = ACTIONS(263),
        [anon_sym_or] = ACTIONS(261),
        [anon_sym_LBRACK] = ACTIONS(267),
        [anon_sym_RBRACK] = ACTIONS(499),
        [sym_comment] = ACTIONS(79),
    },
    [253] = {
        [anon_sym_COMMA] = ACTIONS(307),
        [anon_sym_for] = ACTIONS(307),
        [anon_sym_LPAREN] = ACTIONS(251),
        [anon_sym_STAR] = ACTIONS(577),
        [anon_sym_PLUS] = ACTIONS(579),
        [anon_sym_DASH] = ACTIONS(579),
        [anon_sym_SLASH] = ACTIONS(581),
        [anon_sym_STAR_STAR] = ACTIONS(583),
        [anon_sym_PIPE] = ACTIONS(307),
        [anon_sym_AMP] = ACTIONS(587),
        [anon_sym_CARET] = ACTIONS(589),
        [anon_sym_LT_LT] = ACTIONS(579),
        [anon_sym_GT_GT] = ACTIONS(579),
        [anon_sym_and] = ACTIONS(587),
        [anon_sym_or] = ACTIONS(307),
        [anon_sym_LBRACK] = ACTIONS(307),
        [anon_sym_RBRACK] = ACTIONS(307),
        [sym_comment] = ACTIONS(79),
    },
    [254] = {
        [anon_sym_COMMA] = ACTIONS(307),
        [anon_sym_for] = ACTIONS(307),
        [anon_sym_LPAREN] = ACTIONS(251),
        [anon_sym_STAR] = ACTIONS(577),
        [anon_sym_PLUS] = ACTIONS(579),
        [anon_sym_DASH] = ACTIONS(579),
        [anon_sym_SLASH] = ACTIONS(581),
        [anon_sym_STAR_STAR] = ACTIONS(583),
        [anon_sym_PIPE] = ACTIONS(307),
        [anon_sym_AMP] = ACTIONS(307),
        [anon_sym_CARET] = ACTIONS(589),
        [anon_sym_LT_LT] = ACTIONS(579),
        [anon_sym_GT_GT] = ACTIONS(579),
        [anon_sym_and] = ACTIONS(307),
        [anon_sym_or] = ACTIONS(307),
        [anon_sym_LBRACK] = ACTIONS(307),
        [anon_sym_RBRACK] = ACTIONS(307),
        [sym_comment] = ACTIONS(79),
    },
    [255] = {
        [anon_sym_COMMA] = ACTIONS(307),
        [anon_sym_for] = ACTIONS(307),
        [anon_sym_LPAREN] = ACTIONS(251),
        [anon_sym_STAR] = ACTIONS(577),
        [anon_sym_PLUS] = ACTIONS(307),
        [anon_sym_DASH] = ACTIONS(307),
        [anon_sym_SLASH] = ACTIONS(581),
        [anon_sym_STAR_STAR] = ACTIONS(583),
        [anon_sym_PIPE] = ACTIONS(307),
        [anon_sym_AMP] = ACTIONS(307),
        [anon_sym_CARET] = ACTIONS(307),
        [anon_sym_LT_LT] = ACTIONS(307),
        [anon_sym_GT_GT] = ACTIONS(307),
        [anon_sym_and] = ACTIONS(307),
        [anon_sym_or] = ACTIONS(307),
        [anon_sym_LBRACK] = ACTIONS(307),
        [anon_sym_RBRACK] = ACTIONS(307),
        [sym_comment] = ACTIONS(79),
    },
    [256] = {
        [anon_sym_COMMA] = ACTIONS(307),
        [anon_sym_for] = ACTIONS(307),
        [anon_sym_LPAREN] = ACTIONS(251),
        [anon_sym_STAR] = ACTIONS(577),
        [anon_sym_PLUS] = ACTIONS(579),
        [anon_sym_DASH] = ACTIONS(579),
        [anon_sym_SLASH] = ACTIONS(581),
        [anon_sym_STAR_STAR] = ACTIONS(583),
        [anon_sym_PIPE] = ACTIONS(307),
        [anon_sym_AMP] = ACTIONS(307),
        [anon_sym_CARET] = ACTIONS(307),
        [anon_sym_LT_LT] = ACTIONS(579),
        [anon_sym_GT_GT] = ACTIONS(579),
        [anon_sym_and] = ACTIONS(307),
        [anon_sym_or] = ACTIONS(307),
        [anon_sym_LBRACK] = ACTIONS(307),
        [anon_sym_RBRACK] = ACTIONS(307),
        [sym_comment] = ACTIONS(79),
    },
    [257] = {
        [anon_sym_COMMA] = ACTIONS(307),
        [anon_sym_for] = ACTIONS(307),
        [anon_sym_LPAREN] = ACTIONS(251),
        [anon_sym_STAR] = ACTIONS(309),
        [anon_sym_PLUS] = ACTIONS(307),
        [anon_sym_DASH] = ACTIONS(307),
        [anon_sym_SLASH] = ACTIONS(307),
        [anon_sym_STAR_STAR] = ACTIONS(583),
        [anon_sym_PIPE] = ACTIONS(307),
        [anon_sym_AMP] = ACTIONS(307),
        [anon_sym_CARET] = ACTIONS(307),
        [anon_sym_LT_LT] = ACTIONS(307),
        [anon_sym_GT_GT] = ACTIONS(307),
        [anon_sym_and] = ACTIONS(307),
        [anon_sym_or] = ACTIONS(307),
        [anon_sym_LBRACK] = ACTIONS(307),
        [anon_sym_RBRACK] = ACTIONS(307),
        [sym_comment] = ACTIONS(79),
    },
    [258] = {
        [anon_sym_in] = ACTIONS(611),
        [sym_comment] = ACTIONS(79),
    },
    [259] = {
        [sym__expression] = STATE(261),
        [sym_binary_operator] = STATE(44),
        [sym_unary_operator] = STATE(44),
        [sym_subscript] = STATE(44),
        [sym_call] = STATE(44),
        [sym_list] = STATE(44),
        [sym_list_comprehension] = STATE(44),
        [sym_dictionary] = STATE(44),
        [sym_dictionary_comprehension] = STATE(44),
        [sym_set] = STATE(44),
        [sym_set_comprehension] = STATE(44),
        [anon_sym_not] = ACTIONS(613),
        [anon_sym_LBRACK] = ACTIONS(133),
        [anon_sym_LBRACE] = ACTIONS(135),
        [sym_number] = ACTIONS(137),
        [sym_identifier] = ACTIONS(139),
        [sym_comment] = ACTIONS(79),
    },
    [260] = {
        [sym__expression] = STATE(275),
        [sym_binary_operator] = STATE(44),
        [sym_unary_operator] = STATE(44),
        [sym_subscript] = STATE(44),
        [sym_call] = STATE(44),
        [sym_list] = STATE(44),
        [sym_list_comprehension] = STATE(44),
        [sym_dictionary] = STATE(44),
        [sym_dictionary_comprehension] = STATE(44),
        [sym_set] = STATE(44),
        [sym_set_comprehension] = STATE(44),
        [anon_sym_not] = ACTIONS(613),
        [anon_sym_LBRACK] = ACTIONS(133),
        [anon_sym_LBRACE] = ACTIONS(135),
        [sym_number] = ACTIONS(137),
        [sym_identifier] = ACTIONS(139),
        [sym_comment] = ACTIONS(79),
    },
    [261] = {
        [anon_sym_LPAREN] = ACTIONS(251),
        [anon_sym_STAR] = ACTIONS(615),
        [anon_sym_PLUS] = ACTIONS(617),
        [anon_sym_DASH] = ACTIONS(617),
        [anon_sym_SLASH] = ACTIONS(619),
        [anon_sym_STAR_STAR] = ACTIONS(621),
        [anon_sym_PIPE] = ACTIONS(623),
        [anon_sym_AMP] = ACTIONS(625),
        [anon_sym_CARET] = ACTIONS(627),
        [anon_sym_LT_LT] = ACTIONS(617),
        [anon_sym_GT_GT] = ACTIONS(617),
        [anon_sym_and] = ACTIONS(625),
        [anon_sym_or] = ACTIONS(623),
        [anon_sym_LBRACK] = ACTIONS(267),
        [anon_sym_RBRACK] = ACTIONS(629),
        [sym_comment] = ACTIONS(79),
    },
    [262] = {
        [sym__expression] = STATE(273),
        [sym_binary_operator] = STATE(44),
        [sym_unary_operator] = STATE(44),
        [sym_subscript] = STATE(44),
        [sym_call] = STATE(44),
        [sym_list] = STATE(44),
        [sym_list_comprehension] = STATE(44),
        [sym_dictionary] = STATE(44),
        [sym_dictionary_comprehension] = STATE(44),
        [sym_set] = STATE(44),
        [sym_set_comprehension] = STATE(44),
        [anon_sym_not] = ACTIONS(613),
        [anon_sym_LBRACK] = ACTIONS(133),
        [anon_sym_LBRACE] = ACTIONS(135),
        [sym_number] = ACTIONS(137),
        [sym_identifier] = ACTIONS(139),
        [sym_comment] = ACTIONS(79),
    },
    [263] = {
        [sym__expression] = STATE(271),
        [sym_binary_operator] = STATE(44),
        [sym_unary_operator] = STATE(44),
        [sym_subscript] = STATE(44),
        [sym_call] = STATE(44),
        [sym_list] = STATE(44),
        [sym_list_comprehension] = STATE(44),
        [sym_dictionary] = STATE(44),
        [sym_dictionary_comprehension] = STATE(44),
        [sym_set] = STATE(44),
        [sym_set_comprehension] = STATE(44),
        [anon_sym_not] = ACTIONS(613),
        [anon_sym_LBRACK] = ACTIONS(133),
        [anon_sym_LBRACE] = ACTIONS(135),
        [sym_number] = ACTIONS(137),
        [sym_identifier] = ACTIONS(139),
        [sym_comment] = ACTIONS(79),
    },
    [264] = {
        [sym__expression] = STATE(76),
        [sym_binary_operator] = STATE(44),
        [sym_unary_operator] = STATE(44),
        [sym_subscript] = STATE(44),
        [sym_call] = STATE(44),
        [sym_list] = STATE(44),
        [sym_list_comprehension] = STATE(44),
        [sym_dictionary] = STATE(44),
        [sym_dictionary_comprehension] = STATE(44),
        [sym_set] = STATE(44),
        [sym_set_comprehension] = STATE(44),
        [anon_sym_not] = ACTIONS(613),
        [anon_sym_LBRACK] = ACTIONS(133),
        [anon_sym_LBRACE] = ACTIONS(135),
        [sym_number] = ACTIONS(137),
        [sym_identifier] = ACTIONS(139),
        [sym_comment] = ACTIONS(79),
    },
    [265] = {
        [sym__expression] = STATE(269),
        [sym_binary_operator] = STATE(44),
        [sym_unary_operator] = STATE(44),
        [sym_subscript] = STATE(44),
        [sym_call] = STATE(44),
        [sym_list] = STATE(44),
        [sym_list_comprehension] = STATE(44),
        [sym_dictionary] = STATE(44),
        [sym_dictionary_comprehension] = STATE(44),
        [sym_set] = STATE(44),
        [sym_set_comprehension] = STATE(44),
        [anon_sym_not] = ACTIONS(613),
        [anon_sym_LBRACK] = ACTIONS(133),
        [anon_sym_LBRACE] = ACTIONS(135),
        [sym_number] = ACTIONS(137),
        [sym_identifier] = ACTIONS(139),
        [sym_comment] = ACTIONS(79),
    },
    [266] = {
        [sym__expression] = STATE(270),
        [sym_binary_operator] = STATE(44),
        [sym_unary_operator] = STATE(44),
        [sym_subscript] = STATE(44),
        [sym_call] = STATE(44),
        [sym_list] = STATE(44),
        [sym_list_comprehension] = STATE(44),
        [sym_dictionary] = STATE(44),
        [sym_dictionary_comprehension] = STATE(44),
        [sym_set] = STATE(44),
        [sym_set_comprehension] = STATE(44),
        [anon_sym_not] = ACTIONS(613),
        [anon_sym_LBRACK] = ACTIONS(133),
        [anon_sym_LBRACE] = ACTIONS(135),
        [sym_number] = ACTIONS(137),
        [sym_identifier] = ACTIONS(139),
        [sym_comment] = ACTIONS(79),
    },
    [267] = {
        [sym__expression] = STATE(272),
        [sym_binary_operator] = STATE(44),
        [sym_unary_operator] = STATE(44),
        [sym_subscript] = STATE(44),
        [sym_call] = STATE(44),
        [sym_list] = STATE(44),
        [sym_list_comprehension] = STATE(44),
        [sym_dictionary] = STATE(44),
        [sym_dictionary_comprehension] = STATE(44),
        [sym_set] = STATE(44),
        [sym_set_comprehension] = STATE(44),
        [anon_sym_not] = ACTIONS(613),
        [anon_sym_LBRACK] = ACTIONS(133),
        [anon_sym_LBRACE] = ACTIONS(135),
        [sym_number] = ACTIONS(137),
        [sym_identifier] = ACTIONS(139),
        [sym_comment] = ACTIONS(79),
    },
    [268] = {
        [anon_sym_COMMA] = ACTIONS(631),
        [anon_sym_as] = ACTIONS(631),
        [anon_sym_COLON] = ACTIONS(631),
        [anon_sym_for] = ACTIONS(631),
        [anon_sym_in] = ACTIONS(631),
        [anon_sym_LPAREN] = ACTIONS(631),
        [anon_sym_RPAREN] = ACTIONS(631),
        [anon_sym_STAR] = ACTIONS(633),
        [anon_sym_PLUS] = ACTIONS(631),
        [anon_sym_DASH] = ACTIONS(631),
        [anon_sym_SLASH] = ACTIONS(631),
        [anon_sym_STAR_STAR] = ACTIONS(631),
        [anon_sym_PIPE] = ACTIONS(631),
        [anon_sym_AMP] = ACTIONS(631),
        [anon_sym_CARET] = ACTIONS(631),
        [anon_sym_LT_LT] = ACTIONS(631),
        [anon_sym_GT_GT] = ACTIONS(631),
        [anon_sym_and] = ACTIONS(631),
        [anon_sym_or] = ACTIONS(631),
        [anon_sym_LBRACK] = ACTIONS(631),
        [anon_sym_RBRACK] = ACTIONS(631),
        [anon_sym_RBRACE] = ACTIONS(631),
        [sym_comment] = ACTIONS(79),
    },
    [269] = {
        [anon_sym_LPAREN] = ACTIONS(251),
        [anon_sym_STAR] = ACTIONS(615),
        [anon_sym_PLUS] = ACTIONS(617),
        [anon_sym_DASH] = ACTIONS(617),
        [anon_sym_SLASH] = ACTIONS(619),
        [anon_sym_STAR_STAR] = ACTIONS(621),
        [anon_sym_PIPE] = ACTIONS(307),
        [anon_sym_AMP] = ACTIONS(625),
        [anon_sym_CARET] = ACTIONS(627),
        [anon_sym_LT_LT] = ACTIONS(617),
        [anon_sym_GT_GT] = ACTIONS(617),
        [anon_sym_and] = ACTIONS(625),
        [anon_sym_or] = ACTIONS(307),
        [anon_sym_LBRACK] = ACTIONS(307),
        [anon_sym_RBRACK] = ACTIONS(307),
        [sym_comment] = ACTIONS(79),
    },
    [270] = {
        [anon_sym_LPAREN] = ACTIONS(251),
        [anon_sym_STAR] = ACTIONS(615),
        [anon_sym_PLUS] = ACTIONS(617),
        [anon_sym_DASH] = ACTIONS(617),
        [anon_sym_SLASH] = ACTIONS(619),
        [anon_sym_STAR_STAR] = ACTIONS(621),
        [anon_sym_PIPE] = ACTIONS(307),
        [anon_sym_AMP] = ACTIONS(307),
        [anon_sym_CARET] = ACTIONS(627),
        [anon_sym_LT_LT] = ACTIONS(617),
        [anon_sym_GT_GT] = ACTIONS(617),
        [anon_sym_and] = ACTIONS(307),
        [anon_sym_or] = ACTIONS(307),
        [anon_sym_LBRACK] = ACTIONS(307),
        [anon_sym_RBRACK] = ACTIONS(307),
        [sym_comment] = ACTIONS(79),
    },
    [271] = {
        [anon_sym_LPAREN] = ACTIONS(251),
        [anon_sym_STAR] = ACTIONS(615),
        [anon_sym_PLUS] = ACTIONS(307),
        [anon_sym_DASH] = ACTIONS(307),
        [anon_sym_SLASH] = ACTIONS(619),
        [anon_sym_STAR_STAR] = ACTIONS(621),
        [anon_sym_PIPE] = ACTIONS(307),
        [anon_sym_AMP] = ACTIONS(307),
        [anon_sym_CARET] = ACTIONS(307),
        [anon_sym_LT_LT] = ACTIONS(307),
        [anon_sym_GT_GT] = ACTIONS(307),
        [anon_sym_and] = ACTIONS(307),
        [anon_sym_or] = ACTIONS(307),
        [anon_sym_LBRACK] = ACTIONS(307),
        [anon_sym_RBRACK] = ACTIONS(307),
        [sym_comment] = ACTIONS(79),
    },
    [272] = {
        [anon_sym_LPAREN] = ACTIONS(251),
        [anon_sym_STAR] = ACTIONS(615),
        [anon_sym_PLUS] = ACTIONS(617),
        [anon_sym_DASH] = ACTIONS(617),
        [anon_sym_SLASH] = ACTIONS(619),
        [anon_sym_STAR_STAR] = ACTIONS(621),
        [anon_sym_PIPE] = ACTIONS(307),
        [anon_sym_AMP] = ACTIONS(307),
        [anon_sym_CARET] = ACTIONS(307),
        [anon_sym_LT_LT] = ACTIONS(617),
        [anon_sym_GT_GT] = ACTIONS(617),
        [anon_sym_and] = ACTIONS(307),
        [anon_sym_or] = ACTIONS(307),
        [anon_sym_LBRACK] = ACTIONS(307),
        [anon_sym_RBRACK] = ACTIONS(307),
        [sym_comment] = ACTIONS(79),
    },
    [273] = {
        [anon_sym_LPAREN] = ACTIONS(251),
        [anon_sym_STAR] = ACTIONS(309),
        [anon_sym_PLUS] = ACTIONS(307),
        [anon_sym_DASH] = ACTIONS(307),
        [anon_sym_SLASH] = ACTIONS(307),
        [anon_sym_STAR_STAR] = ACTIONS(621),
        [anon_sym_PIPE] = ACTIONS(307),
        [anon_sym_AMP] = ACTIONS(307),
        [anon_sym_CARET] = ACTIONS(307),
        [anon_sym_LT_LT] = ACTIONS(307),
        [anon_sym_GT_GT] = ACTIONS(307),
        [anon_sym_and] = ACTIONS(307),
        [anon_sym_or] = ACTIONS(307),
        [anon_sym_LBRACK] = ACTIONS(307),
        [anon_sym_RBRACK] = ACTIONS(307),
        [sym_comment] = ACTIONS(79),
    },
    [274] = {
        [anon_sym_COMMA] = ACTIONS(501),
        [anon_sym_LPAREN] = ACTIONS(251),
        [anon_sym_STAR] = ACTIONS(253),
        [anon_sym_PLUS] = ACTIONS(255),
        [anon_sym_DASH] = ACTIONS(255),
        [anon_sym_SLASH] = ACTIONS(257),
        [anon_sym_STAR_STAR] = ACTIONS(259),
        [anon_sym_PIPE] = ACTIONS(261),
        [anon_sym_AMP] = ACTIONS(263),
        [anon_sym_CARET] = ACTIONS(265),
        [anon_sym_LT_LT] = ACTIONS(255),
        [anon_sym_GT_GT] = ACTIONS(255),
        [anon_sym_and] = ACTIONS(263),
        [anon_sym_or] = ACTIONS(261),
        [anon_sym_LBRACK] = ACTIONS(267),
        [anon_sym_RBRACK] = ACTIONS(501),
        [sym_comment] = ACTIONS(79),
    },
    [275] = {
        [anon_sym_COMMA] = ACTIONS(635),
        [anon_sym_as] = ACTIONS(635),
        [anon_sym_COLON] = ACTIONS(635),
        [anon_sym_for] = ACTIONS(635),
        [anon_sym_in] = ACTIONS(635),
        [anon_sym_LPAREN] = ACTIONS(251),
        [anon_sym_RPAREN] = ACTIONS(635),
        [anon_sym_STAR] = ACTIONS(637),
        [anon_sym_PLUS] = ACTIONS(635),
        [anon_sym_DASH] = ACTIONS(635),
        [anon_sym_SLASH] = ACTIONS(635),
        [anon_sym_STAR_STAR] = ACTIONS(635),
        [anon_sym_PIPE] = ACTIONS(635),
        [anon_sym_AMP] = ACTIONS(635),
        [anon_sym_CARET] = ACTIONS(635),
        [anon_sym_LT_LT] = ACTIONS(635),
        [anon_sym_GT_GT] = ACTIONS(635),
        [anon_sym_and] = ACTIONS(635),
        [anon_sym_or] = ACTIONS(635),
        [anon_sym_LBRACK] = ACTIONS(635),
        [anon_sym_RBRACK] = ACTIONS(635),
        [anon_sym_RBRACE] = ACTIONS(635),
        [sym_comment] = ACTIONS(79),
    },
    [276] = {
        [sym__expression] = STATE(275),
        [sym_binary_operator] = STATE(44),
        [sym_unary_operator] = STATE(44),
        [sym_subscript] = STATE(44),
        [sym_call] = STATE(44),
        [sym_list] = STATE(44),
        [sym_list_comprehension] = STATE(44),
        [sym_dictionary] = STATE(44),
        [sym_dictionary_comprehension] = STATE(44),
        [sym_set] = STATE(44),
        [sym_set_comprehension] = STATE(44),
        [anon_sym_not] = ACTIONS(311),
        [anon_sym_LBRACK] = ACTIONS(133),
        [anon_sym_LBRACE] = ACTIONS(135),
        [sym_number] = ACTIONS(137),
        [sym_identifier] = ACTIONS(139),
        [sym_comment] = ACTIONS(79),
    },
    [277] = {
        [anon_sym_LPAREN] = ACTIONS(251),
        [anon_sym_RPAREN] = ACTIONS(639),
        [anon_sym_STAR] = ACTIONS(641),
        [anon_sym_PLUS] = ACTIONS(643),
        [anon_sym_DASH] = ACTIONS(643),
        [anon_sym_SLASH] = ACTIONS(645),
        [anon_sym_STAR_STAR] = ACTIONS(647),
        [anon_sym_PIPE] = ACTIONS(649),
        [anon_sym_AMP] = ACTIONS(651),
        [anon_sym_CARET] = ACTIONS(653),
        [anon_sym_LT_LT] = ACTIONS(643),
        [anon_sym_GT_GT] = ACTIONS(643),
        [anon_sym_and] = ACTIONS(651),
        [anon_sym_or] = ACTIONS(649),
        [anon_sym_LBRACK] = ACTIONS(267),
        [sym_comment] = ACTIONS(79),
    },
    [278] = {
        [sym__expression] = STATE(288),
        [sym_binary_operator] = STATE(44),
        [sym_unary_operator] = STATE(44),
        [sym_subscript] = STATE(44),
        [sym_call] = STATE(44),
        [sym_list] = STATE(44),
        [sym_list_comprehension] = STATE(44),
        [sym_dictionary] = STATE(44),
        [sym_dictionary_comprehension] = STATE(44),
        [sym_set] = STATE(44),
        [sym_set_comprehension] = STATE(44),
        [anon_sym_not] = ACTIONS(311),
        [anon_sym_LBRACK] = ACTIONS(133),
        [anon_sym_LBRACE] = ACTIONS(135),
        [sym_number] = ACTIONS(137),
        [sym_identifier] = ACTIONS(139),
        [sym_comment] = ACTIONS(79),
    },
    [279] = {
        [sym__expression] = STATE(286),
        [sym_binary_operator] = STATE(44),
        [sym_unary_operator] = STATE(44),
        [sym_subscript] = STATE(44),
        [sym_call] = STATE(44),
        [sym_list] = STATE(44),
        [sym_list_comprehension] = STATE(44),
        [sym_dictionary] = STATE(44),
        [sym_dictionary_comprehension] = STATE(44),
        [sym_set] = STATE(44),
        [sym_set_comprehension] = STATE(44),
        [anon_sym_not] = ACTIONS(311),
        [anon_sym_LBRACK] = ACTIONS(133),
        [anon_sym_LBRACE] = ACTIONS(135),
        [sym_number] = ACTIONS(137),
        [sym_identifier] = ACTIONS(139),
        [sym_comment] = ACTIONS(79),
    },
    [280] = {
        [sym__expression] = STATE(76),
        [sym_binary_operator] = STATE(44),
        [sym_unary_operator] = STATE(44),
        [sym_subscript] = STATE(44),
        [sym_call] = STATE(44),
        [sym_list] = STATE(44),
        [sym_list_comprehension] = STATE(44),
        [sym_dictionary] = STATE(44),
        [sym_dictionary_comprehension] = STATE(44),
        [sym_set] = STATE(44),
        [sym_set_comprehension] = STATE(44),
        [anon_sym_not] = ACTIONS(311),
        [anon_sym_LBRACK] = ACTIONS(133),
        [anon_sym_LBRACE] = ACTIONS(135),
        [sym_number] = ACTIONS(137),
        [sym_identifier] = ACTIONS(139),
        [sym_comment] = ACTIONS(79),
    },
    [281] = {
        [sym__expression] = STATE(284),
        [sym_binary_operator] = STATE(44),
        [sym_unary_operator] = STATE(44),
        [sym_subscript] = STATE(44),
        [sym_call] = STATE(44),
        [sym_list] = STATE(44),
        [sym_list_comprehension] = STATE(44),
        [sym_dictionary] = STATE(44),
        [sym_dictionary_comprehension] = STATE(44),
        [sym_set] = STATE(44),
        [sym_set_comprehension] = STATE(44),
        [anon_sym_not] = ACTIONS(311),
        [anon_sym_LBRACK] = ACTIONS(133),
        [anon_sym_LBRACE] = ACTIONS(135),
        [sym_number] = ACTIONS(137),
        [sym_identifier] = ACTIONS(139),
        [sym_comment] = ACTIONS(79),
    },
    [282] = {
        [sym__expression] = STATE(285),
        [sym_binary_operator] = STATE(44),
        [sym_unary_operator] = STATE(44),
        [sym_subscript] = STATE(44),
        [sym_call] = STATE(44),
        [sym_list] = STATE(44),
        [sym_list_comprehension] = STATE(44),
        [sym_dictionary] = STATE(44),
        [sym_dictionary_comprehension] = STATE(44),
        [sym_set] = STATE(44),
        [sym_set_comprehension] = STATE(44),
        [anon_sym_not] = ACTIONS(311),
        [anon_sym_LBRACK] = ACTIONS(133),
        [anon_sym_LBRACE] = ACTIONS(135),
        [sym_number] = ACTIONS(137),
        [sym_identifier] = ACTIONS(139),
        [sym_comment] = ACTIONS(79),
    },
    [283] = {
        [sym__expression] = STATE(287),
        [sym_binary_operator] = STATE(44),
        [sym_unary_operator] = STATE(44),
        [sym_subscript] = STATE(44),
        [sym_call] = STATE(44),
        [sym_list] = STATE(44),
        [sym_list_comprehension] = STATE(44),
        [sym_dictionary] = STATE(44),
        [sym_dictionary_comprehension] = STATE(44),
        [sym_set] = STATE(44),
        [sym_set_comprehension] = STATE(44),
        [anon_sym_not] = ACTIONS(311),
        [anon_sym_LBRACK] = ACTIONS(133),
        [anon_sym_LBRACE] = ACTIONS(135),
        [sym_number] = ACTIONS(137),
        [sym_identifier] = ACTIONS(139),
        [sym_comment] = ACTIONS(79),
    },
    [284] = {
        [anon_sym_LPAREN] = ACTIONS(251),
        [anon_sym_RPAREN] = ACTIONS(307),
        [anon_sym_STAR] = ACTIONS(641),
        [anon_sym_PLUS] = ACTIONS(643),
        [anon_sym_DASH] = ACTIONS(643),
        [anon_sym_SLASH] = ACTIONS(645),
        [anon_sym_STAR_STAR] = ACTIONS(647),
        [anon_sym_PIPE] = ACTIONS(307),
        [anon_sym_AMP] = ACTIONS(651),
        [anon_sym_CARET] = ACTIONS(653),
        [anon_sym_LT_LT] = ACTIONS(643),
        [anon_sym_GT_GT] = ACTIONS(643),
        [anon_sym_and] = ACTIONS(651),
        [anon_sym_or] = ACTIONS(307),
        [anon_sym_LBRACK] = ACTIONS(307),
        [sym_comment] = ACTIONS(79),
    },
    [285] = {
        [anon_sym_LPAREN] = ACTIONS(251),
        [anon_sym_RPAREN] = ACTIONS(307),
        [anon_sym_STAR] = ACTIONS(641),
        [anon_sym_PLUS] = ACTIONS(643),
        [anon_sym_DASH] = ACTIONS(643),
        [anon_sym_SLASH] = ACTIONS(645),
        [anon_sym_STAR_STAR] = ACTIONS(647),
        [anon_sym_PIPE] = ACTIONS(307),
        [anon_sym_AMP] = ACTIONS(307),
        [anon_sym_CARET] = ACTIONS(653),
        [anon_sym_LT_LT] = ACTIONS(643),
        [anon_sym_GT_GT] = ACTIONS(643),
        [anon_sym_and] = ACTIONS(307),
        [anon_sym_or] = ACTIONS(307),
        [anon_sym_LBRACK] = ACTIONS(307),
        [sym_comment] = ACTIONS(79),
    },
    [286] = {
        [anon_sym_LPAREN] = ACTIONS(251),
        [anon_sym_RPAREN] = ACTIONS(307),
        [anon_sym_STAR] = ACTIONS(641),
        [anon_sym_PLUS] = ACTIONS(307),
        [anon_sym_DASH] = ACTIONS(307),
        [anon_sym_SLASH] = ACTIONS(645),
        [anon_sym_STAR_STAR] = ACTIONS(647),
        [anon_sym_PIPE] = ACTIONS(307),
        [anon_sym_AMP] = ACTIONS(307),
        [anon_sym_CARET] = ACTIONS(307),
        [anon_sym_LT_LT] = ACTIONS(307),
        [anon_sym_GT_GT] = ACTIONS(307),
        [anon_sym_and] = ACTIONS(307),
        [anon_sym_or] = ACTIONS(307),
        [anon_sym_LBRACK] = ACTIONS(307),
        [sym_comment] = ACTIONS(79),
    },
    [287] = {
        [anon_sym_LPAREN] = ACTIONS(251),
        [anon_sym_RPAREN] = ACTIONS(307),
        [anon_sym_STAR] = ACTIONS(641),
        [anon_sym_PLUS] = ACTIONS(643),
        [anon_sym_DASH] = ACTIONS(643),
        [anon_sym_SLASH] = ACTIONS(645),
        [anon_sym_STAR_STAR] = ACTIONS(647),
        [anon_sym_PIPE] = ACTIONS(307),
        [anon_sym_AMP] = ACTIONS(307),
        [anon_sym_CARET] = ACTIONS(307),
        [anon_sym_LT_LT] = ACTIONS(643),
        [anon_sym_GT_GT] = ACTIONS(643),
        [anon_sym_and] = ACTIONS(307),
        [anon_sym_or] = ACTIONS(307),
        [anon_sym_LBRACK] = ACTIONS(307),
        [sym_comment] = ACTIONS(79),
    },
    [288] = {
        [anon_sym_LPAREN] = ACTIONS(251),
        [anon_sym_RPAREN] = ACTIONS(307),
        [anon_sym_STAR] = ACTIONS(309),
        [anon_sym_PLUS] = ACTIONS(307),
        [anon_sym_DASH] = ACTIONS(307),
        [anon_sym_SLASH] = ACTIONS(307),
        [anon_sym_STAR_STAR] = ACTIONS(647),
        [anon_sym_PIPE] = ACTIONS(307),
        [anon_sym_AMP] = ACTIONS(307),
        [anon_sym_CARET] = ACTIONS(307),
        [anon_sym_LT_LT] = ACTIONS(307),
        [anon_sym_GT_GT] = ACTIONS(307),
        [anon_sym_and] = ACTIONS(307),
        [anon_sym_or] = ACTIONS(307),
        [anon_sym_LBRACK] = ACTIONS(307),
        [sym_comment] = ACTIONS(79),
    },
    [289] = {
        [anon_sym_COMMA] = ACTIONS(655),
        [anon_sym_LPAREN] = ACTIONS(251),
        [anon_sym_RPAREN] = ACTIONS(655),
        [anon_sym_STAR] = ACTIONS(319),
        [anon_sym_PLUS] = ACTIONS(321),
        [anon_sym_DASH] = ACTIONS(321),
        [anon_sym_SLASH] = ACTIONS(323),
        [anon_sym_STAR_STAR] = ACTIONS(325),
        [anon_sym_PIPE] = ACTIONS(327),
        [anon_sym_AMP] = ACTIONS(329),
        [anon_sym_CARET] = ACTIONS(331),
        [anon_sym_LT_LT] = ACTIONS(321),
        [anon_sym_GT_GT] = ACTIONS(321),
        [anon_sym_and] = ACTIONS(329),
        [anon_sym_or] = ACTIONS(327),
        [anon_sym_LBRACK] = ACTIONS(267),
        [sym_comment] = ACTIONS(79),
    },
    [290] = {
        [anon_sym_LPAREN] = ACTIONS(187),
        [anon_sym_STAR] = ACTIONS(189),
        [anon_sym_PLUS] = ACTIONS(191),
        [anon_sym_DASH] = ACTIONS(191),
        [anon_sym_SLASH] = ACTIONS(193),
        [anon_sym_STAR_STAR] = ACTIONS(195),
        [anon_sym_PIPE] = ACTIONS(307),
        [anon_sym_AMP] = ACTIONS(199),
        [anon_sym_CARET] = ACTIONS(201),
        [anon_sym_LT_LT] = ACTIONS(191),
        [anon_sym_GT_GT] = ACTIONS(191),
        [anon_sym_and] = ACTIONS(199),
        [anon_sym_or] = ACTIONS(307),
        [anon_sym_LBRACK] = ACTIONS(307),
        [sym_comment] = ACTIONS(79),
        [sym__newline] = ACTIONS(307),
    },
    [291] = {
        [anon_sym_LPAREN] = ACTIONS(187),
        [anon_sym_STAR] = ACTIONS(189),
        [anon_sym_PLUS] = ACTIONS(191),
        [anon_sym_DASH] = ACTIONS(191),
        [anon_sym_SLASH] = ACTIONS(193),
        [anon_sym_STAR_STAR] = ACTIONS(195),
        [anon_sym_PIPE] = ACTIONS(307),
        [anon_sym_AMP] = ACTIONS(307),
        [anon_sym_CARET] = ACTIONS(201),
        [anon_sym_LT_LT] = ACTIONS(191),
        [anon_sym_GT_GT] = ACTIONS(191),
        [anon_sym_and] = ACTIONS(307),
        [anon_sym_or] = ACTIONS(307),
        [anon_sym_LBRACK] = ACTIONS(307),
        [sym_comment] = ACTIONS(79),
        [sym__newline] = ACTIONS(307),
    },
    [292] = {
        [anon_sym_LPAREN] = ACTIONS(187),
        [anon_sym_STAR] = ACTIONS(189),
        [anon_sym_PLUS] = ACTIONS(307),
        [anon_sym_DASH] = ACTIONS(307),
        [anon_sym_SLASH] = ACTIONS(193),
        [anon_sym_STAR_STAR] = ACTIONS(195),
        [anon_sym_PIPE] = ACTIONS(307),
        [anon_sym_AMP] = ACTIONS(307),
        [anon_sym_CARET] = ACTIONS(307),
        [anon_sym_LT_LT] = ACTIONS(307),
        [anon_sym_GT_GT] = ACTIONS(307),
        [anon_sym_and] = ACTIONS(307),
        [anon_sym_or] = ACTIONS(307),
        [anon_sym_LBRACK] = ACTIONS(307),
        [sym_comment] = ACTIONS(79),
        [sym__newline] = ACTIONS(307),
    },
    [293] = {
        [anon_sym_LPAREN] = ACTIONS(187),
        [anon_sym_STAR] = ACTIONS(189),
        [anon_sym_PLUS] = ACTIONS(191),
        [anon_sym_DASH] = ACTIONS(191),
        [anon_sym_SLASH] = ACTIONS(193),
        [anon_sym_STAR_STAR] = ACTIONS(195),
        [anon_sym_PIPE] = ACTIONS(307),
        [anon_sym_AMP] = ACTIONS(307),
        [anon_sym_CARET] = ACTIONS(307),
        [anon_sym_LT_LT] = ACTIONS(191),
        [anon_sym_GT_GT] = ACTIONS(191),
        [anon_sym_and] = ACTIONS(307),
        [anon_sym_or] = ACTIONS(307),
        [anon_sym_LBRACK] = ACTIONS(307),
        [sym_comment] = ACTIONS(79),
        [sym__newline] = ACTIONS(307),
    },
    [294] = {
        [anon_sym_COMMA] = ACTIONS(307),
        [anon_sym_LPAREN] = ACTIONS(187),
        [anon_sym_STAR] = ACTIONS(309),
        [anon_sym_PLUS] = ACTIONS(307),
        [anon_sym_DASH] = ACTIONS(307),
        [anon_sym_SLASH] = ACTIONS(307),
        [anon_sym_STAR_STAR] = ACTIONS(307),
        [anon_sym_PIPE] = ACTIONS(307),
        [anon_sym_AMP] = ACTIONS(307),
        [anon_sym_CARET] = ACTIONS(307),
        [anon_sym_LT_LT] = ACTIONS(307),
        [anon_sym_GT_GT] = ACTIONS(307),
        [anon_sym_and] = ACTIONS(307),
        [anon_sym_or] = ACTIONS(307),
        [anon_sym_LBRACK] = ACTIONS(307),
        [sym_comment] = ACTIONS(79),
        [sym__newline] = ACTIONS(307),
    },
    [295] = {
        [anon_sym_LPAREN] = ACTIONS(187),
        [anon_sym_STAR] = ACTIONS(309),
        [anon_sym_PLUS] = ACTIONS(307),
        [anon_sym_DASH] = ACTIONS(307),
        [anon_sym_SLASH] = ACTIONS(307),
        [anon_sym_STAR_STAR] = ACTIONS(195),
        [anon_sym_PIPE] = ACTIONS(307),
        [anon_sym_AMP] = ACTIONS(307),
        [anon_sym_CARET] = ACTIONS(307),
        [anon_sym_LT_LT] = ACTIONS(307),
        [anon_sym_GT_GT] = ACTIONS(307),
        [anon_sym_and] = ACTIONS(307),
        [anon_sym_or] = ACTIONS(307),
        [anon_sym_LBRACK] = ACTIONS(307),
        [sym_comment] = ACTIONS(79),
        [sym__newline] = ACTIONS(307),
    },
    [296] = {
        [anon_sym_COMMA] = ACTIONS(657),
        [anon_sym_LPAREN] = ACTIONS(251),
        [anon_sym_RPAREN] = ACTIONS(659),
        [anon_sym_STAR] = ACTIONS(319),
        [anon_sym_PLUS] = ACTIONS(321),
        [anon_sym_DASH] = ACTIONS(321),
        [anon_sym_SLASH] = ACTIONS(323),
        [anon_sym_STAR_STAR] = ACTIONS(325),
        [anon_sym_PIPE] = ACTIONS(327),
        [anon_sym_AMP] = ACTIONS(329),
        [anon_sym_CARET] = ACTIONS(331),
        [anon_sym_LT_LT] = ACTIONS(321),
        [anon_sym_GT_GT] = ACTIONS(321),
        [anon_sym_and] = ACTIONS(329),
        [anon_sym_or] = ACTIONS(327),
        [anon_sym_LBRACK] = ACTIONS(267),
        [sym_comment] = ACTIONS(79),
    },
    [297] = {
        [anon_sym_COMMA] = ACTIONS(657),
        [anon_sym_RPAREN] = ACTIONS(659),
        [sym_comment] = ACTIONS(79),
    },
    [298] = {
        [aux_sym_call_repeat2] = STATE(317),
        [anon_sym_COMMA] = ACTIONS(661),
        [anon_sym_RPAREN] = ACTIONS(659),
        [sym_comment] = ACTIONS(79),
    },
    [299] = {
        [anon_sym_RPAREN] = ACTIONS(659),
        [sym_comment] = ACTIONS(79),
    },
    [300] = {
        [sym__expression] = STATE(301),
        [sym_binary_operator] = STATE(44),
        [sym_unary_operator] = STATE(44),
        [sym_subscript] = STATE(44),
        [sym_call] = STATE(44),
        [sym_keyword_argument] = STATE(302),
        [sym_list_splat_argument] = STATE(303),
        [sym_dictionary_splat_argument] = STATE(304),
        [sym_list] = STATE(44),
        [sym_list_comprehension] = STATE(44),
        [sym_dictionary] = STATE(44),
        [sym_dictionary_comprehension] = STATE(44),
        [sym_set] = STATE(44),
        [sym_set_comprehension] = STATE(44),
        [anon_sym_STAR] = ACTIONS(231),
        [anon_sym_STAR_STAR] = ACTIONS(233),
        [anon_sym_not] = ACTIONS(235),
        [anon_sym_LBRACK] = ACTIONS(133),
        [anon_sym_LBRACE] = ACTIONS(135),
        [sym_number] = ACTIONS(137),
        [sym_identifier] = ACTIONS(237),
        [sym_comment] = ACTIONS(79),
    },
    [301] = {
        [anon_sym_COMMA] = ACTIONS(663),
        [anon_sym_LPAREN] = ACTIONS(251),
        [anon_sym_RPAREN] = ACTIONS(665),
        [anon_sym_STAR] = ACTIONS(319),
        [anon_sym_PLUS] = ACTIONS(321),
        [anon_sym_DASH] = ACTIONS(321),
        [anon_sym_SLASH] = ACTIONS(323),
        [anon_sym_STAR_STAR] = ACTIONS(325),
        [anon_sym_PIPE] = ACTIONS(327),
        [anon_sym_AMP] = ACTIONS(329),
        [anon_sym_CARET] = ACTIONS(331),
        [anon_sym_LT_LT] = ACTIONS(321),
        [anon_sym_GT_GT] = ACTIONS(321),
        [anon_sym_and] = ACTIONS(329),
        [anon_sym_or] = ACTIONS(327),
        [anon_sym_LBRACK] = ACTIONS(267),
        [sym_comment] = ACTIONS(79),
    },
    [302] = {
        [anon_sym_COMMA] = ACTIONS(663),
        [anon_sym_RPAREN] = ACTIONS(665),
        [sym_comment] = ACTIONS(79),
    },
    [303] = {
        [aux_sym_call_repeat2] = STATE(307),
        [anon_sym_COMMA] = ACTIONS(667),
        [anon_sym_RPAREN] = ACTIONS(665),
        [sym_comment] = ACTIONS(79),
    },
    [304] = {
        [anon_sym_RPAREN] = ACTIONS(665),
        [sym_comment] = ACTIONS(79),
    },
    [305] = {
        [anon_sym_COMMA] = ACTIONS(341),
        [anon_sym_as] = ACTIONS(341),
        [anon_sym_COLON] = ACTIONS(341),
        [anon_sym_for] = ACTIONS(341),
        [anon_sym_in] = ACTIONS(341),
        [anon_sym_LPAREN] = ACTIONS(341),
        [anon_sym_RPAREN] = ACTIONS(341),
        [anon_sym_STAR] = ACTIONS(343),
        [anon_sym_PLUS] = ACTIONS(341),
        [anon_sym_DASH] = ACTIONS(341),
        [anon_sym_SLASH] = ACTIONS(341),
        [anon_sym_STAR_STAR] = ACTIONS(341),
        [anon_sym_PIPE] = ACTIONS(341),
        [anon_sym_AMP] = ACTIONS(341),
        [anon_sym_CARET] = ACTIONS(341),
        [anon_sym_LT_LT] = ACTIONS(341),
        [anon_sym_GT_GT] = ACTIONS(341),
        [anon_sym_and] = ACTIONS(341),
        [anon_sym_or] = ACTIONS(341),
        [anon_sym_LBRACK] = ACTIONS(341),
        [anon_sym_RBRACK] = ACTIONS(341),
        [anon_sym_RBRACE] = ACTIONS(341),
        [sym_comment] = ACTIONS(79),
        [sym__newline] = ACTIONS(341),
    },
    [306] = {
        [sym__expression] = STATE(111),
        [sym_binary_operator] = STATE(44),
        [sym_unary_operator] = STATE(44),
        [sym_subscript] = STATE(44),
        [sym_call] = STATE(44),
        [sym_keyword_argument] = STATE(112),
        [sym_dictionary_splat_argument] = STATE(312),
        [sym_list] = STATE(44),
        [sym_list_comprehension] = STATE(44),
        [sym_dictionary] = STATE(44),
        [sym_dictionary_comprehension] = STATE(44),
        [sym_set] = STATE(44),
        [sym_set_comprehension] = STATE(44),
        [anon_sym_STAR_STAR] = ACTIONS(233),
        [anon_sym_not] = ACTIONS(235),
        [anon_sym_LBRACK] = ACTIONS(133),
        [anon_sym_LBRACE] = ACTIONS(135),
        [sym_number] = ACTIONS(137),
        [sym_identifier] = ACTIONS(237),
        [sym_comment] = ACTIONS(79),
    },
    [307] = {
        [anon_sym_COMMA] = ACTIONS(669),
        [anon_sym_RPAREN] = ACTIONS(671),
        [sym_comment] = ACTIONS(79),
    },
    [308] = {
        [sym__expression] = STATE(96),
        [sym_binary_operator] = STATE(44),
        [sym_unary_operator] = STATE(44),
        [sym_subscript] = STATE(44),
        [sym_call] = STATE(44),
        [sym_keyword_argument] = STATE(97),
        [sym_dictionary_splat_argument] = STATE(310),
        [sym_list] = STATE(44),
        [sym_list_comprehension] = STATE(44),
        [sym_dictionary] = STATE(44),
        [sym_dictionary_comprehension] = STATE(44),
        [sym_set] = STATE(44),
        [sym_set_comprehension] = STATE(44),
        [anon_sym_STAR_STAR] = ACTIONS(233),
        [anon_sym_not] = ACTIONS(235),
        [anon_sym_LBRACK] = ACTIONS(133),
        [anon_sym_LBRACE] = ACTIONS(135),
        [sym_number] = ACTIONS(137),
        [sym_identifier] = ACTIONS(237),
        [sym_comment] = ACTIONS(79),
    },
    [309] = {
        [anon_sym_COMMA] = ACTIONS(349),
        [anon_sym_as] = ACTIONS(349),
        [anon_sym_COLON] = ACTIONS(349),
        [anon_sym_for] = ACTIONS(349),
        [anon_sym_in] = ACTIONS(349),
        [anon_sym_LPAREN] = ACTIONS(349),
        [anon_sym_RPAREN] = ACTIONS(349),
        [anon_sym_STAR] = ACTIONS(351),
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
        [sym_comment] = ACTIONS(79),
        [sym__newline] = ACTIONS(349),
    },
    [310] = {
        [anon_sym_RPAREN] = ACTIONS(673),
        [sym_comment] = ACTIONS(79),
    },
    [311] = {
        [anon_sym_COMMA] = ACTIONS(357),
        [anon_sym_as] = ACTIONS(357),
        [anon_sym_COLON] = ACTIONS(357),
        [anon_sym_for] = ACTIONS(357),
        [anon_sym_in] = ACTIONS(357),
        [anon_sym_LPAREN] = ACTIONS(357),
        [anon_sym_RPAREN] = ACTIONS(357),
        [anon_sym_STAR] = ACTIONS(359),
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
        [sym_comment] = ACTIONS(79),
        [sym__newline] = ACTIONS(357),
    },
    [312] = {
        [anon_sym_RPAREN] = ACTIONS(675),
        [sym_comment] = ACTIONS(79),
    },
    [313] = {
        [anon_sym_COMMA] = ACTIONS(365),
        [anon_sym_as] = ACTIONS(365),
        [anon_sym_COLON] = ACTIONS(365),
        [anon_sym_for] = ACTIONS(365),
        [anon_sym_in] = ACTIONS(365),
        [anon_sym_LPAREN] = ACTIONS(365),
        [anon_sym_RPAREN] = ACTIONS(365),
        [anon_sym_STAR] = ACTIONS(367),
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
        [sym_comment] = ACTIONS(79),
        [sym__newline] = ACTIONS(365),
    },
    [314] = {
        [anon_sym_RPAREN] = ACTIONS(671),
        [anon_sym_STAR] = ACTIONS(369),
        [anon_sym_STAR_STAR] = ACTIONS(371),
        [anon_sym_not] = ACTIONS(369),
        [anon_sym_LBRACK] = ACTIONS(371),
        [anon_sym_LBRACE] = ACTIONS(371),
        [sym_number] = ACTIONS(369),
        [sym_identifier] = ACTIONS(373),
        [sym_comment] = ACTIONS(79),
    },
    [315] = {
        [anon_sym_COMMA] = ACTIONS(375),
        [anon_sym_as] = ACTIONS(375),
        [anon_sym_COLON] = ACTIONS(375),
        [anon_sym_for] = ACTIONS(375),
        [anon_sym_in] = ACTIONS(375),
        [anon_sym_LPAREN] = ACTIONS(375),
        [anon_sym_RPAREN] = ACTIONS(375),
        [anon_sym_STAR] = ACTIONS(377),
        [anon_sym_PLUS] = ACTIONS(375),
        [anon_sym_DASH] = ACTIONS(375),
        [anon_sym_SLASH] = ACTIONS(375),
        [anon_sym_STAR_STAR] = ACTIONS(375),
        [anon_sym_PIPE] = ACTIONS(375),
        [anon_sym_AMP] = ACTIONS(375),
        [anon_sym_CARET] = ACTIONS(375),
        [anon_sym_LT_LT] = ACTIONS(375),
        [anon_sym_GT_GT] = ACTIONS(375),
        [anon_sym_and] = ACTIONS(375),
        [anon_sym_or] = ACTIONS(375),
        [anon_sym_LBRACK] = ACTIONS(375),
        [anon_sym_RBRACK] = ACTIONS(375),
        [anon_sym_RBRACE] = ACTIONS(375),
        [sym_comment] = ACTIONS(79),
        [sym__newline] = ACTIONS(375),
    },
    [316] = {
        [sym__expression] = STATE(111),
        [sym_binary_operator] = STATE(44),
        [sym_unary_operator] = STATE(44),
        [sym_subscript] = STATE(44),
        [sym_call] = STATE(44),
        [sym_keyword_argument] = STATE(112),
        [sym_dictionary_splat_argument] = STATE(319),
        [sym_list] = STATE(44),
        [sym_list_comprehension] = STATE(44),
        [sym_dictionary] = STATE(44),
        [sym_dictionary_comprehension] = STATE(44),
        [sym_set] = STATE(44),
        [sym_set_comprehension] = STATE(44),
        [anon_sym_STAR_STAR] = ACTIONS(233),
        [anon_sym_not] = ACTIONS(235),
        [anon_sym_LBRACK] = ACTIONS(133),
        [anon_sym_LBRACE] = ACTIONS(135),
        [sym_number] = ACTIONS(137),
        [sym_identifier] = ACTIONS(237),
        [sym_comment] = ACTIONS(79),
    },
    [317] = {
        [anon_sym_COMMA] = ACTIONS(677),
        [anon_sym_RPAREN] = ACTIONS(665),
        [sym_comment] = ACTIONS(79),
    },
    [318] = {
        [sym__expression] = STATE(96),
        [sym_binary_operator] = STATE(44),
        [sym_unary_operator] = STATE(44),
        [sym_subscript] = STATE(44),
        [sym_call] = STATE(44),
        [sym_keyword_argument] = STATE(97),
        [sym_dictionary_splat_argument] = STATE(312),
        [sym_list] = STATE(44),
        [sym_list_comprehension] = STATE(44),
        [sym_dictionary] = STATE(44),
        [sym_dictionary_comprehension] = STATE(44),
        [sym_set] = STATE(44),
        [sym_set_comprehension] = STATE(44),
        [anon_sym_STAR_STAR] = ACTIONS(233),
        [anon_sym_not] = ACTIONS(235),
        [anon_sym_LBRACK] = ACTIONS(133),
        [anon_sym_LBRACE] = ACTIONS(135),
        [sym_number] = ACTIONS(137),
        [sym_identifier] = ACTIONS(237),
        [sym_comment] = ACTIONS(79),
    },
    [319] = {
        [anon_sym_RPAREN] = ACTIONS(671),
        [sym_comment] = ACTIONS(79),
    },
    [320] = {
        [anon_sym_RPAREN] = ACTIONS(665),
        [anon_sym_STAR] = ACTIONS(381),
        [anon_sym_STAR_STAR] = ACTIONS(383),
        [anon_sym_not] = ACTIONS(381),
        [anon_sym_LBRACK] = ACTIONS(383),
        [anon_sym_LBRACE] = ACTIONS(383),
        [sym_number] = ACTIONS(381),
        [sym_identifier] = ACTIONS(385),
        [sym_comment] = ACTIONS(79),
    },
    [321] = {
        [ts_builtin_sym_end] = ACTIONS(679),
        [anon_sym_SEMI] = ACTIONS(679),
        [anon_sym_import] = ACTIONS(681),
        [anon_sym_print] = ACTIONS(681),
        [anon_sym_return] = ACTIONS(681),
        [anon_sym_del] = ACTIONS(681),
        [sym_pass_statement] = ACTIONS(681),
        [sym_break_statement] = ACTIONS(681),
        [sym_continue_statement] = ACTIONS(681),
        [anon_sym_if] = ACTIONS(681),
        [anon_sym_for] = ACTIONS(681),
        [anon_sym_while] = ACTIONS(681),
        [anon_sym_try] = ACTIONS(681),
        [anon_sym_with] = ACTIONS(681),
        [anon_sym_def] = ACTIONS(681),
        [anon_sym_class] = ACTIONS(681),
        [anon_sym_AT] = ACTIONS(679),
        [anon_sym_not] = ACTIONS(681),
        [anon_sym_LBRACK] = ACTIONS(679),
        [anon_sym_LBRACE] = ACTIONS(679),
        [sym_number] = ACTIONS(681),
        [sym_identifier] = ACTIONS(683),
        [sym_comment] = ACTIONS(79),
        [sym__newline] = ACTIONS(679),
    },
    [322] = {
        [anon_sym_COMMA] = ACTIONS(389),
        [anon_sym_as] = ACTIONS(389),
        [anon_sym_COLON] = ACTIONS(389),
        [anon_sym_for] = ACTIONS(389),
        [anon_sym_in] = ACTIONS(389),
        [anon_sym_LPAREN] = ACTIONS(389),
        [anon_sym_RPAREN] = ACTIONS(389),
        [anon_sym_STAR] = ACTIONS(391),
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
        [sym_comment] = ACTIONS(79),
        [sym__newline] = ACTIONS(389),
    },
    [323] = {
        [aux_sym_print_statement_repeat1] = STATE(339),
        [anon_sym_COMMA] = ACTIONS(685),
        [anon_sym_COLON] = ACTIONS(395),
        [anon_sym_for] = ACTIONS(687),
        [anon_sym_LPAREN] = ACTIONS(251),
        [anon_sym_STAR] = ACTIONS(399),
        [anon_sym_PLUS] = ACTIONS(401),
        [anon_sym_DASH] = ACTIONS(401),
        [anon_sym_SLASH] = ACTIONS(403),
        [anon_sym_STAR_STAR] = ACTIONS(405),
        [anon_sym_PIPE] = ACTIONS(407),
        [anon_sym_AMP] = ACTIONS(409),
        [anon_sym_CARET] = ACTIONS(411),
        [anon_sym_LT_LT] = ACTIONS(401),
        [anon_sym_GT_GT] = ACTIONS(401),
        [anon_sym_and] = ACTIONS(409),
        [anon_sym_or] = ACTIONS(407),
        [anon_sym_LBRACK] = ACTIONS(267),
        [anon_sym_RBRACE] = ACTIONS(689),
        [sym_comment] = ACTIONS(79),
    },
    [324] = {
        [aux_sym_dictionary_repeat1] = STATE(328),
        [anon_sym_COMMA] = ACTIONS(691),
        [anon_sym_for] = ACTIONS(693),
        [anon_sym_RBRACE] = ACTIONS(695),
        [sym_comment] = ACTIONS(79),
    },
    [325] = {
        [sym__expression] = STATE(136),
        [sym_binary_operator] = STATE(44),
        [sym_unary_operator] = STATE(44),
        [sym_subscript] = STATE(44),
        [sym_call] = STATE(44),
        [sym_list] = STATE(44),
        [sym_list_comprehension] = STATE(44),
        [sym_dictionary] = STATE(44),
        [sym_dictionary_comprehension] = STATE(44),
        [sym_pair] = STATE(197),
        [sym_set] = STATE(44),
        [sym_set_comprehension] = STATE(44),
        [anon_sym_not] = ACTIONS(131),
        [anon_sym_LBRACK] = ACTIONS(133),
        [anon_sym_LBRACE] = ACTIONS(135),
        [anon_sym_RBRACE] = ACTIONS(697),
        [sym_number] = ACTIONS(137),
        [sym_identifier] = ACTIONS(139),
        [sym_comment] = ACTIONS(79),
    },
    [326] = {
        [sym_expression_list] = STATE(332),
        [sym__expression] = STATE(165),
        [sym_binary_operator] = STATE(44),
        [sym_unary_operator] = STATE(44),
        [sym_subscript] = STATE(44),
        [sym_call] = STATE(44),
        [sym_list] = STATE(44),
        [sym_list_comprehension] = STATE(44),
        [sym_dictionary] = STATE(44),
        [sym_dictionary_comprehension] = STATE(44),
        [sym_set] = STATE(44),
        [sym_set_comprehension] = STATE(44),
        [anon_sym_not] = ACTIONS(141),
        [anon_sym_LBRACK] = ACTIONS(133),
        [anon_sym_LBRACE] = ACTIONS(135),
        [sym_number] = ACTIONS(137),
        [sym_identifier] = ACTIONS(139),
        [sym_comment] = ACTIONS(79),
    },
    [327] = {
        [anon_sym_COMMA] = ACTIONS(423),
        [anon_sym_as] = ACTIONS(423),
        [anon_sym_COLON] = ACTIONS(423),
        [anon_sym_for] = ACTIONS(423),
        [anon_sym_in] = ACTIONS(423),
        [anon_sym_LPAREN] = ACTIONS(423),
        [anon_sym_RPAREN] = ACTIONS(423),
        [anon_sym_STAR] = ACTIONS(425),
        [anon_sym_PLUS] = ACTIONS(423),
        [anon_sym_DASH] = ACTIONS(423),
        [anon_sym_SLASH] = ACTIONS(423),
        [anon_sym_STAR_STAR] = ACTIONS(423),
        [anon_sym_PIPE] = ACTIONS(423),
        [anon_sym_AMP] = ACTIONS(423),
        [anon_sym_CARET] = ACTIONS(423),
        [anon_sym_LT_LT] = ACTIONS(423),
        [anon_sym_GT_GT] = ACTIONS(423),
        [anon_sym_and] = ACTIONS(423),
        [anon_sym_or] = ACTIONS(423),
        [anon_sym_LBRACK] = ACTIONS(423),
        [anon_sym_RBRACK] = ACTIONS(423),
        [anon_sym_RBRACE] = ACTIONS(423),
        [sym_comment] = ACTIONS(79),
        [sym__newline] = ACTIONS(423),
    },
    [328] = {
        [anon_sym_COMMA] = ACTIONS(699),
        [anon_sym_RBRACE] = ACTIONS(697),
        [sym_comment] = ACTIONS(79),
    },
    [329] = {
        [sym__expression] = STATE(136),
        [sym_binary_operator] = STATE(44),
        [sym_unary_operator] = STATE(44),
        [sym_subscript] = STATE(44),
        [sym_call] = STATE(44),
        [sym_list] = STATE(44),
        [sym_list_comprehension] = STATE(44),
        [sym_dictionary] = STATE(44),
        [sym_dictionary_comprehension] = STATE(44),
        [sym_pair] = STATE(137),
        [sym_set] = STATE(44),
        [sym_set_comprehension] = STATE(44),
        [anon_sym_not] = ACTIONS(131),
        [anon_sym_LBRACK] = ACTIONS(133),
        [anon_sym_LBRACE] = ACTIONS(135),
        [anon_sym_RBRACE] = ACTIONS(701),
        [sym_number] = ACTIONS(137),
        [sym_identifier] = ACTIONS(139),
        [sym_comment] = ACTIONS(79),
    },
    [330] = {
        [anon_sym_COMMA] = ACTIONS(431),
        [anon_sym_as] = ACTIONS(431),
        [anon_sym_COLON] = ACTIONS(431),
        [anon_sym_for] = ACTIONS(431),
        [anon_sym_in] = ACTIONS(431),
        [anon_sym_LPAREN] = ACTIONS(431),
        [anon_sym_RPAREN] = ACTIONS(431),
        [anon_sym_STAR] = ACTIONS(433),
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
        [sym_comment] = ACTIONS(79),
        [sym__newline] = ACTIONS(431),
    },
    [331] = {
        [anon_sym_COMMA] = ACTIONS(435),
        [anon_sym_as] = ACTIONS(435),
        [anon_sym_COLON] = ACTIONS(435),
        [anon_sym_for] = ACTIONS(435),
        [anon_sym_in] = ACTIONS(435),
        [anon_sym_LPAREN] = ACTIONS(435),
        [anon_sym_RPAREN] = ACTIONS(435),
        [anon_sym_STAR] = ACTIONS(437),
        [anon_sym_PLUS] = ACTIONS(435),
        [anon_sym_DASH] = ACTIONS(435),
        [anon_sym_SLASH] = ACTIONS(435),
        [anon_sym_STAR_STAR] = ACTIONS(435),
        [anon_sym_PIPE] = ACTIONS(435),
        [anon_sym_AMP] = ACTIONS(435),
        [anon_sym_CARET] = ACTIONS(435),
        [anon_sym_LT_LT] = ACTIONS(435),
        [anon_sym_GT_GT] = ACTIONS(435),
        [anon_sym_and] = ACTIONS(435),
        [anon_sym_or] = ACTIONS(435),
        [anon_sym_LBRACK] = ACTIONS(435),
        [anon_sym_RBRACK] = ACTIONS(435),
        [anon_sym_RBRACE] = ACTIONS(435),
        [sym_comment] = ACTIONS(79),
        [sym__newline] = ACTIONS(435),
    },
    [332] = {
        [anon_sym_in] = ACTIONS(703),
        [sym_comment] = ACTIONS(79),
    },
    [333] = {
        [sym__expression] = STATE(334),
        [sym_binary_operator] = STATE(44),
        [sym_unary_operator] = STATE(44),
        [sym_subscript] = STATE(44),
        [sym_call] = STATE(44),
        [sym_list] = STATE(44),
        [sym_list_comprehension] = STATE(44),
        [sym_dictionary] = STATE(44),
        [sym_dictionary_comprehension] = STATE(44),
        [sym_set] = STATE(44),
        [sym_set_comprehension] = STATE(44),
        [anon_sym_not] = ACTIONS(503),
        [anon_sym_LBRACK] = ACTIONS(133),
        [anon_sym_LBRACE] = ACTIONS(135),
        [sym_number] = ACTIONS(137),
        [sym_identifier] = ACTIONS(139),
        [sym_comment] = ACTIONS(79),
    },
    [334] = {
        [anon_sym_LPAREN] = ACTIONS(251),
        [anon_sym_STAR] = ACTIONS(505),
        [anon_sym_PLUS] = ACTIONS(507),
        [anon_sym_DASH] = ACTIONS(507),
        [anon_sym_SLASH] = ACTIONS(509),
        [anon_sym_STAR_STAR] = ACTIONS(511),
        [anon_sym_PIPE] = ACTIONS(513),
        [anon_sym_AMP] = ACTIONS(515),
        [anon_sym_CARET] = ACTIONS(517),
        [anon_sym_LT_LT] = ACTIONS(507),
        [anon_sym_GT_GT] = ACTIONS(507),
        [anon_sym_and] = ACTIONS(515),
        [anon_sym_or] = ACTIONS(513),
        [anon_sym_LBRACK] = ACTIONS(267),
        [anon_sym_RBRACE] = ACTIONS(705),
        [sym_comment] = ACTIONS(79),
    },
    [335] = {
        [anon_sym_COMMA] = ACTIONS(521),
        [anon_sym_as] = ACTIONS(521),
        [anon_sym_COLON] = ACTIONS(521),
        [anon_sym_for] = ACTIONS(521),
        [anon_sym_in] = ACTIONS(521),
        [anon_sym_LPAREN] = ACTIONS(521),
        [anon_sym_RPAREN] = ACTIONS(521),
        [anon_sym_STAR] = ACTIONS(523),
        [anon_sym_PLUS] = ACTIONS(521),
        [anon_sym_DASH] = ACTIONS(521),
        [anon_sym_SLASH] = ACTIONS(521),
        [anon_sym_STAR_STAR] = ACTIONS(521),
        [anon_sym_PIPE] = ACTIONS(521),
        [anon_sym_AMP] = ACTIONS(521),
        [anon_sym_CARET] = ACTIONS(521),
        [anon_sym_LT_LT] = ACTIONS(521),
        [anon_sym_GT_GT] = ACTIONS(521),
        [anon_sym_and] = ACTIONS(521),
        [anon_sym_or] = ACTIONS(521),
        [anon_sym_LBRACK] = ACTIONS(521),
        [anon_sym_RBRACK] = ACTIONS(521),
        [anon_sym_RBRACE] = ACTIONS(521),
        [sym_comment] = ACTIONS(79),
        [sym__newline] = ACTIONS(521),
    },
    [336] = {
        [sym__expression] = STATE(235),
        [sym_binary_operator] = STATE(44),
        [sym_unary_operator] = STATE(44),
        [sym_subscript] = STATE(44),
        [sym_call] = STATE(44),
        [sym_list] = STATE(44),
        [sym_list_comprehension] = STATE(44),
        [sym_dictionary] = STATE(44),
        [sym_dictionary_comprehension] = STATE(44),
        [sym_set] = STATE(44),
        [sym_set_comprehension] = STATE(44),
        [anon_sym_not] = ACTIONS(457),
        [anon_sym_LBRACK] = ACTIONS(133),
        [anon_sym_LBRACE] = ACTIONS(135),
        [anon_sym_RBRACE] = ACTIONS(707),
        [sym_number] = ACTIONS(137),
        [sym_identifier] = ACTIONS(139),
        [sym_comment] = ACTIONS(79),
    },
    [337] = {
        [sym_expression_list] = STATE(343),
        [sym__expression] = STATE(165),
        [sym_binary_operator] = STATE(44),
        [sym_unary_operator] = STATE(44),
        [sym_subscript] = STATE(44),
        [sym_call] = STATE(44),
        [sym_list] = STATE(44),
        [sym_list_comprehension] = STATE(44),
        [sym_dictionary] = STATE(44),
        [sym_dictionary_comprehension] = STATE(44),
        [sym_set] = STATE(44),
        [sym_set_comprehension] = STATE(44),
        [anon_sym_not] = ACTIONS(141),
        [anon_sym_LBRACK] = ACTIONS(133),
        [anon_sym_LBRACE] = ACTIONS(135),
        [sym_number] = ACTIONS(137),
        [sym_identifier] = ACTIONS(139),
        [sym_comment] = ACTIONS(79),
    },
    [338] = {
        [anon_sym_COMMA] = ACTIONS(531),
        [anon_sym_as] = ACTIONS(531),
        [anon_sym_COLON] = ACTIONS(531),
        [anon_sym_for] = ACTIONS(531),
        [anon_sym_in] = ACTIONS(531),
        [anon_sym_LPAREN] = ACTIONS(531),
        [anon_sym_RPAREN] = ACTIONS(531),
        [anon_sym_STAR] = ACTIONS(533),
        [anon_sym_PLUS] = ACTIONS(531),
        [anon_sym_DASH] = ACTIONS(531),
        [anon_sym_SLASH] = ACTIONS(531),
        [anon_sym_STAR_STAR] = ACTIONS(531),
        [anon_sym_PIPE] = ACTIONS(531),
        [anon_sym_AMP] = ACTIONS(531),
        [anon_sym_CARET] = ACTIONS(531),
        [anon_sym_LT_LT] = ACTIONS(531),
        [anon_sym_GT_GT] = ACTIONS(531),
        [anon_sym_and] = ACTIONS(531),
        [anon_sym_or] = ACTIONS(531),
        [anon_sym_LBRACK] = ACTIONS(531),
        [anon_sym_RBRACK] = ACTIONS(531),
        [anon_sym_RBRACE] = ACTIONS(531),
        [sym_comment] = ACTIONS(79),
        [sym__newline] = ACTIONS(531),
    },
    [339] = {
        [anon_sym_COMMA] = ACTIONS(709),
        [anon_sym_RBRACE] = ACTIONS(707),
        [sym_comment] = ACTIONS(79),
    },
    [340] = {
        [sym__expression] = STATE(212),
        [sym_binary_operator] = STATE(44),
        [sym_unary_operator] = STATE(44),
        [sym_subscript] = STATE(44),
        [sym_call] = STATE(44),
        [sym_list] = STATE(44),
        [sym_list_comprehension] = STATE(44),
        [sym_dictionary] = STATE(44),
        [sym_dictionary_comprehension] = STATE(44),
        [sym_set] = STATE(44),
        [sym_set_comprehension] = STATE(44),
        [anon_sym_not] = ACTIONS(457),
        [anon_sym_LBRACK] = ACTIONS(133),
        [anon_sym_LBRACE] = ACTIONS(135),
        [anon_sym_RBRACE] = ACTIONS(711),
        [sym_number] = ACTIONS(137),
        [sym_identifier] = ACTIONS(139),
        [sym_comment] = ACTIONS(79),
    },
    [341] = {
        [anon_sym_COMMA] = ACTIONS(539),
        [anon_sym_as] = ACTIONS(539),
        [anon_sym_COLON] = ACTIONS(539),
        [anon_sym_for] = ACTIONS(539),
        [anon_sym_in] = ACTIONS(539),
        [anon_sym_LPAREN] = ACTIONS(539),
        [anon_sym_RPAREN] = ACTIONS(539),
        [anon_sym_STAR] = ACTIONS(541),
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
        [sym_comment] = ACTIONS(79),
        [sym__newline] = ACTIONS(539),
    },
    [342] = {
        [anon_sym_COMMA] = ACTIONS(543),
        [anon_sym_as] = ACTIONS(543),
        [anon_sym_COLON] = ACTIONS(543),
        [anon_sym_for] = ACTIONS(543),
        [anon_sym_in] = ACTIONS(543),
        [anon_sym_LPAREN] = ACTIONS(543),
        [anon_sym_RPAREN] = ACTIONS(543),
        [anon_sym_STAR] = ACTIONS(545),
        [anon_sym_PLUS] = ACTIONS(543),
        [anon_sym_DASH] = ACTIONS(543),
        [anon_sym_SLASH] = ACTIONS(543),
        [anon_sym_STAR_STAR] = ACTIONS(543),
        [anon_sym_PIPE] = ACTIONS(543),
        [anon_sym_AMP] = ACTIONS(543),
        [anon_sym_CARET] = ACTIONS(543),
        [anon_sym_LT_LT] = ACTIONS(543),
        [anon_sym_GT_GT] = ACTIONS(543),
        [anon_sym_and] = ACTIONS(543),
        [anon_sym_or] = ACTIONS(543),
        [anon_sym_LBRACK] = ACTIONS(543),
        [anon_sym_RBRACK] = ACTIONS(543),
        [anon_sym_RBRACE] = ACTIONS(543),
        [sym_comment] = ACTIONS(79),
        [sym__newline] = ACTIONS(543),
    },
    [343] = {
        [anon_sym_in] = ACTIONS(713),
        [sym_comment] = ACTIONS(79),
    },
    [344] = {
        [sym__expression] = STATE(345),
        [sym_binary_operator] = STATE(44),
        [sym_unary_operator] = STATE(44),
        [sym_subscript] = STATE(44),
        [sym_call] = STATE(44),
        [sym_list] = STATE(44),
        [sym_list_comprehension] = STATE(44),
        [sym_dictionary] = STATE(44),
        [sym_dictionary_comprehension] = STATE(44),
        [sym_set] = STATE(44),
        [sym_set_comprehension] = STATE(44),
        [anon_sym_not] = ACTIONS(503),
        [anon_sym_LBRACK] = ACTIONS(133),
        [anon_sym_LBRACE] = ACTIONS(135),
        [sym_number] = ACTIONS(137),
        [sym_identifier] = ACTIONS(139),
        [sym_comment] = ACTIONS(79),
    },
    [345] = {
        [anon_sym_LPAREN] = ACTIONS(251),
        [anon_sym_STAR] = ACTIONS(505),
        [anon_sym_PLUS] = ACTIONS(507),
        [anon_sym_DASH] = ACTIONS(507),
        [anon_sym_SLASH] = ACTIONS(509),
        [anon_sym_STAR_STAR] = ACTIONS(511),
        [anon_sym_PIPE] = ACTIONS(513),
        [anon_sym_AMP] = ACTIONS(515),
        [anon_sym_CARET] = ACTIONS(517),
        [anon_sym_LT_LT] = ACTIONS(507),
        [anon_sym_GT_GT] = ACTIONS(507),
        [anon_sym_and] = ACTIONS(515),
        [anon_sym_or] = ACTIONS(513),
        [anon_sym_LBRACK] = ACTIONS(267),
        [anon_sym_RBRACE] = ACTIONS(715),
        [sym_comment] = ACTIONS(79),
    },
    [346] = {
        [anon_sym_COMMA] = ACTIONS(551),
        [anon_sym_as] = ACTIONS(551),
        [anon_sym_COLON] = ACTIONS(551),
        [anon_sym_for] = ACTIONS(551),
        [anon_sym_in] = ACTIONS(551),
        [anon_sym_LPAREN] = ACTIONS(551),
        [anon_sym_RPAREN] = ACTIONS(551),
        [anon_sym_STAR] = ACTIONS(553),
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
        [sym_comment] = ACTIONS(79),
        [sym__newline] = ACTIONS(551),
    },
    [347] = {
        [anon_sym_COMMA] = ACTIONS(569),
        [anon_sym_as] = ACTIONS(569),
        [anon_sym_COLON] = ACTIONS(569),
        [anon_sym_for] = ACTIONS(569),
        [anon_sym_in] = ACTIONS(569),
        [anon_sym_LPAREN] = ACTIONS(569),
        [anon_sym_RPAREN] = ACTIONS(569),
        [anon_sym_STAR] = ACTIONS(571),
        [anon_sym_PLUS] = ACTIONS(569),
        [anon_sym_DASH] = ACTIONS(569),
        [anon_sym_SLASH] = ACTIONS(569),
        [anon_sym_STAR_STAR] = ACTIONS(569),
        [anon_sym_PIPE] = ACTIONS(569),
        [anon_sym_AMP] = ACTIONS(569),
        [anon_sym_CARET] = ACTIONS(569),
        [anon_sym_LT_LT] = ACTIONS(569),
        [anon_sym_GT_GT] = ACTIONS(569),
        [anon_sym_and] = ACTIONS(569),
        [anon_sym_or] = ACTIONS(569),
        [anon_sym_LBRACK] = ACTIONS(569),
        [anon_sym_RBRACK] = ACTIONS(569),
        [anon_sym_RBRACE] = ACTIONS(569),
        [sym_comment] = ACTIONS(79),
        [sym__newline] = ACTIONS(569),
    },
    [348] = {
        [aux_sym_print_statement_repeat1] = STATE(352),
        [anon_sym_COMMA] = ACTIONS(717),
        [anon_sym_for] = ACTIONS(719),
        [anon_sym_LPAREN] = ACTIONS(251),
        [anon_sym_STAR] = ACTIONS(577),
        [anon_sym_PLUS] = ACTIONS(579),
        [anon_sym_DASH] = ACTIONS(579),
        [anon_sym_SLASH] = ACTIONS(581),
        [anon_sym_STAR_STAR] = ACTIONS(583),
        [anon_sym_PIPE] = ACTIONS(585),
        [anon_sym_AMP] = ACTIONS(587),
        [anon_sym_CARET] = ACTIONS(589),
        [anon_sym_LT_LT] = ACTIONS(579),
        [anon_sym_GT_GT] = ACTIONS(579),
        [anon_sym_and] = ACTIONS(587),
        [anon_sym_or] = ACTIONS(585),
        [anon_sym_LBRACK] = ACTIONS(267),
        [anon_sym_RBRACK] = ACTIONS(721),
        [sym_comment] = ACTIONS(79),
    },
    [349] = {
        [sym__expression] = STATE(274),
        [sym_binary_operator] = STATE(44),
        [sym_unary_operator] = STATE(44),
        [sym_subscript] = STATE(44),
        [sym_call] = STATE(44),
        [sym_list] = STATE(44),
        [sym_list_comprehension] = STATE(44),
        [sym_dictionary] = STATE(44),
        [sym_dictionary_comprehension] = STATE(44),
        [sym_set] = STATE(44),
        [sym_set_comprehension] = STATE(44),
        [anon_sym_not] = ACTIONS(239),
        [anon_sym_LBRACK] = ACTIONS(133),
        [anon_sym_RBRACK] = ACTIONS(723),
        [anon_sym_LBRACE] = ACTIONS(135),
        [sym_number] = ACTIONS(137),
        [sym_identifier] = ACTIONS(139),
        [sym_comment] = ACTIONS(79),
    },
    [350] = {
        [sym_expression_list] = STATE(356),
        [sym__expression] = STATE(165),
        [sym_binary_operator] = STATE(44),
        [sym_unary_operator] = STATE(44),
        [sym_subscript] = STATE(44),
        [sym_call] = STATE(44),
        [sym_list] = STATE(44),
        [sym_list_comprehension] = STATE(44),
        [sym_dictionary] = STATE(44),
        [sym_dictionary_comprehension] = STATE(44),
        [sym_set] = STATE(44),
        [sym_set_comprehension] = STATE(44),
        [anon_sym_not] = ACTIONS(141),
        [anon_sym_LBRACK] = ACTIONS(133),
        [anon_sym_LBRACE] = ACTIONS(135),
        [sym_number] = ACTIONS(137),
        [sym_identifier] = ACTIONS(139),
        [sym_comment] = ACTIONS(79),
    },
    [351] = {
        [anon_sym_COMMA] = ACTIONS(595),
        [anon_sym_as] = ACTIONS(595),
        [anon_sym_COLON] = ACTIONS(595),
        [anon_sym_for] = ACTIONS(595),
        [anon_sym_in] = ACTIONS(595),
        [anon_sym_LPAREN] = ACTIONS(595),
        [anon_sym_RPAREN] = ACTIONS(595),
        [anon_sym_STAR] = ACTIONS(597),
        [anon_sym_PLUS] = ACTIONS(595),
        [anon_sym_DASH] = ACTIONS(595),
        [anon_sym_SLASH] = ACTIONS(595),
        [anon_sym_STAR_STAR] = ACTIONS(595),
        [anon_sym_PIPE] = ACTIONS(595),
        [anon_sym_AMP] = ACTIONS(595),
        [anon_sym_CARET] = ACTIONS(595),
        [anon_sym_LT_LT] = ACTIONS(595),
        [anon_sym_GT_GT] = ACTIONS(595),
        [anon_sym_and] = ACTIONS(595),
        [anon_sym_or] = ACTIONS(595),
        [anon_sym_LBRACK] = ACTIONS(595),
        [anon_sym_RBRACK] = ACTIONS(595),
        [anon_sym_RBRACE] = ACTIONS(595),
        [sym_comment] = ACTIONS(79),
        [sym__newline] = ACTIONS(595),
    },
    [352] = {
        [anon_sym_COMMA] = ACTIONS(725),
        [anon_sym_RBRACK] = ACTIONS(723),
        [sym_comment] = ACTIONS(79),
    },
    [353] = {
        [sym__expression] = STATE(252),
        [sym_binary_operator] = STATE(44),
        [sym_unary_operator] = STATE(44),
        [sym_subscript] = STATE(44),
        [sym_call] = STATE(44),
        [sym_list] = STATE(44),
        [sym_list_comprehension] = STATE(44),
        [sym_dictionary] = STATE(44),
        [sym_dictionary_comprehension] = STATE(44),
        [sym_set] = STATE(44),
        [sym_set_comprehension] = STATE(44),
        [anon_sym_not] = ACTIONS(239),
        [anon_sym_LBRACK] = ACTIONS(133),
        [anon_sym_RBRACK] = ACTIONS(727),
        [anon_sym_LBRACE] = ACTIONS(135),
        [sym_number] = ACTIONS(137),
        [sym_identifier] = ACTIONS(139),
        [sym_comment] = ACTIONS(79),
    },
    [354] = {
        [anon_sym_COMMA] = ACTIONS(603),
        [anon_sym_as] = ACTIONS(603),
        [anon_sym_COLON] = ACTIONS(603),
        [anon_sym_for] = ACTIONS(603),
        [anon_sym_in] = ACTIONS(603),
        [anon_sym_LPAREN] = ACTIONS(603),
        [anon_sym_RPAREN] = ACTIONS(603),
        [anon_sym_STAR] = ACTIONS(605),
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
        [sym_comment] = ACTIONS(79),
        [sym__newline] = ACTIONS(603),
    },
    [355] = {
        [anon_sym_COMMA] = ACTIONS(607),
        [anon_sym_as] = ACTIONS(607),
        [anon_sym_COLON] = ACTIONS(607),
        [anon_sym_for] = ACTIONS(607),
        [anon_sym_in] = ACTIONS(607),
        [anon_sym_LPAREN] = ACTIONS(607),
        [anon_sym_RPAREN] = ACTIONS(607),
        [anon_sym_STAR] = ACTIONS(609),
        [anon_sym_PLUS] = ACTIONS(607),
        [anon_sym_DASH] = ACTIONS(607),
        [anon_sym_SLASH] = ACTIONS(607),
        [anon_sym_STAR_STAR] = ACTIONS(607),
        [anon_sym_PIPE] = ACTIONS(607),
        [anon_sym_AMP] = ACTIONS(607),
        [anon_sym_CARET] = ACTIONS(607),
        [anon_sym_LT_LT] = ACTIONS(607),
        [anon_sym_GT_GT] = ACTIONS(607),
        [anon_sym_and] = ACTIONS(607),
        [anon_sym_or] = ACTIONS(607),
        [anon_sym_LBRACK] = ACTIONS(607),
        [anon_sym_RBRACK] = ACTIONS(607),
        [anon_sym_RBRACE] = ACTIONS(607),
        [sym_comment] = ACTIONS(79),
        [sym__newline] = ACTIONS(607),
    },
    [356] = {
        [anon_sym_in] = ACTIONS(729),
        [sym_comment] = ACTIONS(79),
    },
    [357] = {
        [sym__expression] = STATE(358),
        [sym_binary_operator] = STATE(44),
        [sym_unary_operator] = STATE(44),
        [sym_subscript] = STATE(44),
        [sym_call] = STATE(44),
        [sym_list] = STATE(44),
        [sym_list_comprehension] = STATE(44),
        [sym_dictionary] = STATE(44),
        [sym_dictionary_comprehension] = STATE(44),
        [sym_set] = STATE(44),
        [sym_set_comprehension] = STATE(44),
        [anon_sym_not] = ACTIONS(613),
        [anon_sym_LBRACK] = ACTIONS(133),
        [anon_sym_LBRACE] = ACTIONS(135),
        [sym_number] = ACTIONS(137),
        [sym_identifier] = ACTIONS(139),
        [sym_comment] = ACTIONS(79),
    },
    [358] = {
        [anon_sym_LPAREN] = ACTIONS(251),
        [anon_sym_STAR] = ACTIONS(615),
        [anon_sym_PLUS] = ACTIONS(617),
        [anon_sym_DASH] = ACTIONS(617),
        [anon_sym_SLASH] = ACTIONS(619),
        [anon_sym_STAR_STAR] = ACTIONS(621),
        [anon_sym_PIPE] = ACTIONS(623),
        [anon_sym_AMP] = ACTIONS(625),
        [anon_sym_CARET] = ACTIONS(627),
        [anon_sym_LT_LT] = ACTIONS(617),
        [anon_sym_GT_GT] = ACTIONS(617),
        [anon_sym_and] = ACTIONS(625),
        [anon_sym_or] = ACTIONS(623),
        [anon_sym_LBRACK] = ACTIONS(267),
        [anon_sym_RBRACK] = ACTIONS(731),
        [sym_comment] = ACTIONS(79),
    },
    [359] = {
        [anon_sym_COMMA] = ACTIONS(631),
        [anon_sym_as] = ACTIONS(631),
        [anon_sym_COLON] = ACTIONS(631),
        [anon_sym_for] = ACTIONS(631),
        [anon_sym_in] = ACTIONS(631),
        [anon_sym_LPAREN] = ACTIONS(631),
        [anon_sym_RPAREN] = ACTIONS(631),
        [anon_sym_STAR] = ACTIONS(633),
        [anon_sym_PLUS] = ACTIONS(631),
        [anon_sym_DASH] = ACTIONS(631),
        [anon_sym_SLASH] = ACTIONS(631),
        [anon_sym_STAR_STAR] = ACTIONS(631),
        [anon_sym_PIPE] = ACTIONS(631),
        [anon_sym_AMP] = ACTIONS(631),
        [anon_sym_CARET] = ACTIONS(631),
        [anon_sym_LT_LT] = ACTIONS(631),
        [anon_sym_GT_GT] = ACTIONS(631),
        [anon_sym_and] = ACTIONS(631),
        [anon_sym_or] = ACTIONS(631),
        [anon_sym_LBRACK] = ACTIONS(631),
        [anon_sym_RBRACK] = ACTIONS(631),
        [anon_sym_RBRACE] = ACTIONS(631),
        [sym_comment] = ACTIONS(79),
        [sym__newline] = ACTIONS(631),
    },
    [360] = {
        [anon_sym_COMMA] = ACTIONS(635),
        [anon_sym_LPAREN] = ACTIONS(187),
        [anon_sym_STAR] = ACTIONS(637),
        [anon_sym_PLUS] = ACTIONS(635),
        [anon_sym_DASH] = ACTIONS(635),
        [anon_sym_SLASH] = ACTIONS(635),
        [anon_sym_STAR_STAR] = ACTIONS(635),
        [anon_sym_PIPE] = ACTIONS(635),
        [anon_sym_AMP] = ACTIONS(635),
        [anon_sym_CARET] = ACTIONS(635),
        [anon_sym_LT_LT] = ACTIONS(635),
        [anon_sym_GT_GT] = ACTIONS(635),
        [anon_sym_and] = ACTIONS(635),
        [anon_sym_or] = ACTIONS(635),
        [anon_sym_LBRACK] = ACTIONS(635),
        [sym_comment] = ACTIONS(79),
        [sym__newline] = ACTIONS(635),
    },
    [361] = {
        [aux_sym_dotted_name_repeat1] = STATE(376),
        [anon_sym_COMMA] = ACTIONS(733),
        [anon_sym_as] = ACTIONS(733),
        [anon_sym_LPAREN] = ACTIONS(733),
        [anon_sym_DOT] = ACTIONS(735),
        [sym_comment] = ACTIONS(79),
        [sym__newline] = ACTIONS(733),
    },
    [362] = {
        [sym_arguments] = STATE(365),
        [anon_sym_LPAREN] = ACTIONS(737),
        [sym_comment] = ACTIONS(79),
        [sym__newline] = ACTIONS(739),
    },
    [363] = {
        [sym__expression] = STATE(367),
        [sym_binary_operator] = STATE(44),
        [sym_unary_operator] = STATE(44),
        [sym_subscript] = STATE(44),
        [sym_call] = STATE(44),
        [sym_list] = STATE(44),
        [sym_list_comprehension] = STATE(44),
        [sym_dictionary] = STATE(44),
        [sym_dictionary_comprehension] = STATE(44),
        [sym_set] = STATE(44),
        [sym_set_comprehension] = STATE(44),
        [anon_sym_not] = ACTIONS(235),
        [anon_sym_LBRACK] = ACTIONS(133),
        [anon_sym_LBRACE] = ACTIONS(135),
        [sym_number] = ACTIONS(137),
        [sym_identifier] = ACTIONS(139),
        [sym_comment] = ACTIONS(79),
    },
    [364] = {
        [anon_sym_def] = ACTIONS(741),
        [anon_sym_class] = ACTIONS(741),
        [anon_sym_AT] = ACTIONS(741),
        [sym_comment] = ACTIONS(79),
    },
    [365] = {
        [sym_comment] = ACTIONS(79),
        [sym__newline] = ACTIONS(743),
    },
    [366] = {
        [anon_sym_def] = ACTIONS(745),
        [anon_sym_class] = ACTIONS(745),
        [anon_sym_AT] = ACTIONS(745),
        [sym_comment] = ACTIONS(79),
    },
    [367] = {
        [aux_sym_print_statement_repeat1] = STATE(370),
        [anon_sym_COMMA] = ACTIONS(747),
        [anon_sym_LPAREN] = ACTIONS(251),
        [anon_sym_RPAREN] = ACTIONS(749),
        [anon_sym_STAR] = ACTIONS(319),
        [anon_sym_PLUS] = ACTIONS(321),
        [anon_sym_DASH] = ACTIONS(321),
        [anon_sym_SLASH] = ACTIONS(323),
        [anon_sym_STAR_STAR] = ACTIONS(325),
        [anon_sym_PIPE] = ACTIONS(327),
        [anon_sym_AMP] = ACTIONS(329),
        [anon_sym_CARET] = ACTIONS(331),
        [anon_sym_LT_LT] = ACTIONS(321),
        [anon_sym_GT_GT] = ACTIONS(321),
        [anon_sym_and] = ACTIONS(329),
        [anon_sym_or] = ACTIONS(327),
        [anon_sym_LBRACK] = ACTIONS(267),
        [sym_comment] = ACTIONS(79),
    },
    [368] = {
        [sym__expression] = STATE(374),
        [sym_binary_operator] = STATE(44),
        [sym_unary_operator] = STATE(44),
        [sym_subscript] = STATE(44),
        [sym_call] = STATE(44),
        [sym_list] = STATE(44),
        [sym_list_comprehension] = STATE(44),
        [sym_dictionary] = STATE(44),
        [sym_dictionary_comprehension] = STATE(44),
        [sym_set] = STATE(44),
        [sym_set_comprehension] = STATE(44),
        [anon_sym_not] = ACTIONS(235),
        [anon_sym_LBRACK] = ACTIONS(133),
        [anon_sym_LBRACE] = ACTIONS(135),
        [sym_number] = ACTIONS(137),
        [sym_identifier] = ACTIONS(139),
        [sym_comment] = ACTIONS(79),
    },
    [369] = {
        [sym_comment] = ACTIONS(79),
        [sym__newline] = ACTIONS(751),
    },
    [370] = {
        [anon_sym_COMMA] = ACTIONS(753),
        [anon_sym_RPAREN] = ACTIONS(755),
        [sym_comment] = ACTIONS(79),
    },
    [371] = {
        [sym__expression] = STATE(373),
        [sym_binary_operator] = STATE(44),
        [sym_unary_operator] = STATE(44),
        [sym_subscript] = STATE(44),
        [sym_call] = STATE(44),
        [sym_list] = STATE(44),
        [sym_list_comprehension] = STATE(44),
        [sym_dictionary] = STATE(44),
        [sym_dictionary_comprehension] = STATE(44),
        [sym_set] = STATE(44),
        [sym_set_comprehension] = STATE(44),
        [anon_sym_not] = ACTIONS(235),
        [anon_sym_LBRACK] = ACTIONS(133),
        [anon_sym_LBRACE] = ACTIONS(135),
        [sym_number] = ACTIONS(137),
        [sym_identifier] = ACTIONS(139),
        [sym_comment] = ACTIONS(79),
    },
    [372] = {
        [sym_comment] = ACTIONS(79),
        [sym__newline] = ACTIONS(757),
    },
    [373] = {
        [anon_sym_COMMA] = ACTIONS(499),
        [anon_sym_LPAREN] = ACTIONS(251),
        [anon_sym_RPAREN] = ACTIONS(499),
        [anon_sym_STAR] = ACTIONS(319),
        [anon_sym_PLUS] = ACTIONS(321),
        [anon_sym_DASH] = ACTIONS(321),
        [anon_sym_SLASH] = ACTIONS(323),
        [anon_sym_STAR_STAR] = ACTIONS(325),
        [anon_sym_PIPE] = ACTIONS(327),
        [anon_sym_AMP] = ACTIONS(329),
        [anon_sym_CARET] = ACTIONS(331),
        [anon_sym_LT_LT] = ACTIONS(321),
        [anon_sym_GT_GT] = ACTIONS(321),
        [anon_sym_and] = ACTIONS(329),
        [anon_sym_or] = ACTIONS(327),
        [anon_sym_LBRACK] = ACTIONS(267),
        [sym_comment] = ACTIONS(79),
    },
    [374] = {
        [anon_sym_COMMA] = ACTIONS(501),
        [anon_sym_LPAREN] = ACTIONS(251),
        [anon_sym_RPAREN] = ACTIONS(501),
        [anon_sym_STAR] = ACTIONS(319),
        [anon_sym_PLUS] = ACTIONS(321),
        [anon_sym_DASH] = ACTIONS(321),
        [anon_sym_SLASH] = ACTIONS(323),
        [anon_sym_STAR_STAR] = ACTIONS(325),
        [anon_sym_PIPE] = ACTIONS(327),
        [anon_sym_AMP] = ACTIONS(329),
        [anon_sym_CARET] = ACTIONS(331),
        [anon_sym_LT_LT] = ACTIONS(321),
        [anon_sym_GT_GT] = ACTIONS(321),
        [anon_sym_and] = ACTIONS(329),
        [anon_sym_or] = ACTIONS(327),
        [anon_sym_LBRACK] = ACTIONS(267),
        [sym_comment] = ACTIONS(79),
    },
    [375] = {
        [sym_identifier] = ACTIONS(759),
        [sym_comment] = ACTIONS(79),
    },
    [376] = {
        [anon_sym_COMMA] = ACTIONS(761),
        [anon_sym_as] = ACTIONS(761),
        [anon_sym_LPAREN] = ACTIONS(761),
        [anon_sym_DOT] = ACTIONS(763),
        [sym_comment] = ACTIONS(79),
        [sym__newline] = ACTIONS(761),
    },
    [377] = {
        [sym_identifier] = ACTIONS(765),
        [sym_comment] = ACTIONS(79),
    },
    [378] = {
        [anon_sym_COMMA] = ACTIONS(767),
        [anon_sym_as] = ACTIONS(767),
        [anon_sym_LPAREN] = ACTIONS(767),
        [anon_sym_DOT] = ACTIONS(767),
        [sym_comment] = ACTIONS(79),
        [sym__newline] = ACTIONS(767),
    },
    [379] = {
        [anon_sym_COMMA] = ACTIONS(769),
        [anon_sym_as] = ACTIONS(769),
        [anon_sym_LPAREN] = ACTIONS(769),
        [anon_sym_DOT] = ACTIONS(769),
        [sym_comment] = ACTIONS(79),
        [sym__newline] = ACTIONS(769),
    },
    [380] = {
        [anon_sym_COLON] = ACTIONS(771),
        [anon_sym_LPAREN] = ACTIONS(773),
        [sym_comment] = ACTIONS(79),
    },
    [381] = {
        [sym__simple_statement] = STATE(389),
        [sym_import_statement] = STATE(6),
        [sym_print_statement] = STATE(6),
        [sym_expression_statement] = STATE(6),
        [sym_return_statement] = STATE(6),
        [sym_delete_statement] = STATE(6),
        [sym__suite] = STATE(547),
        [sym__expression] = STATE(25),
        [sym_binary_operator] = STATE(18),
        [sym_unary_operator] = STATE(18),
        [sym_subscript] = STATE(18),
        [sym_call] = STATE(18),
        [sym_list] = STATE(18),
        [sym_list_comprehension] = STATE(18),
        [sym_dictionary] = STATE(18),
        [sym_dictionary_comprehension] = STATE(18),
        [sym_set] = STATE(18),
        [sym_set_comprehension] = STATE(18),
        [anon_sym_import] = ACTIONS(89),
        [anon_sym_print] = ACTIONS(91),
        [anon_sym_return] = ACTIONS(93),
        [anon_sym_del] = ACTIONS(95),
        [sym_pass_statement] = ACTIONS(97),
        [sym_break_statement] = ACTIONS(97),
        [sym_continue_statement] = ACTIONS(97),
        [anon_sym_not] = ACTIONS(115),
        [anon_sym_LBRACK] = ACTIONS(117),
        [anon_sym_LBRACE] = ACTIONS(119),
        [sym_number] = ACTIONS(121),
        [sym_identifier] = ACTIONS(123),
        [sym_comment] = ACTIONS(79),
        [sym__indent] = ACTIONS(775),
    },
    [382] = {
        [sym_expression_list] = STATE(383),
        [sym__expression] = STATE(384),
        [sym_binary_operator] = STATE(44),
        [sym_unary_operator] = STATE(44),
        [sym_subscript] = STATE(44),
        [sym_call] = STATE(44),
        [sym_list] = STATE(44),
        [sym_list_comprehension] = STATE(44),
        [sym_dictionary] = STATE(44),
        [sym_dictionary_comprehension] = STATE(44),
        [sym_set] = STATE(44),
        [sym_set_comprehension] = STATE(44),
        [anon_sym_not] = ACTIONS(235),
        [anon_sym_LBRACK] = ACTIONS(133),
        [anon_sym_LBRACE] = ACTIONS(135),
        [sym_number] = ACTIONS(137),
        [sym_identifier] = ACTIONS(139),
        [sym_comment] = ACTIONS(79),
    },
    [383] = {
        [anon_sym_RPAREN] = ACTIONS(777),
        [sym_comment] = ACTIONS(79),
    },
    [384] = {
        [aux_sym_print_statement_repeat1] = STATE(385),
        [anon_sym_COMMA] = ACTIONS(747),
        [anon_sym_LPAREN] = ACTIONS(251),
        [anon_sym_RPAREN] = ACTIONS(479),
        [anon_sym_STAR] = ACTIONS(319),
        [anon_sym_PLUS] = ACTIONS(321),
        [anon_sym_DASH] = ACTIONS(321),
        [anon_sym_SLASH] = ACTIONS(323),
        [anon_sym_STAR_STAR] = ACTIONS(325),
        [anon_sym_PIPE] = ACTIONS(327),
        [anon_sym_AMP] = ACTIONS(329),
        [anon_sym_CARET] = ACTIONS(331),
        [anon_sym_LT_LT] = ACTIONS(321),
        [anon_sym_GT_GT] = ACTIONS(321),
        [anon_sym_and] = ACTIONS(329),
        [anon_sym_or] = ACTIONS(327),
        [anon_sym_LBRACK] = ACTIONS(267),
        [sym_comment] = ACTIONS(79),
    },
    [385] = {
        [anon_sym_COMMA] = ACTIONS(753),
        [anon_sym_RPAREN] = ACTIONS(497),
        [sym_comment] = ACTIONS(79),
    },
    [386] = {
        [anon_sym_COLON] = ACTIONS(779),
        [sym_comment] = ACTIONS(79),
    },
    [387] = {
        [sym__simple_statement] = STATE(389),
        [sym_import_statement] = STATE(6),
        [sym_print_statement] = STATE(6),
        [sym_expression_statement] = STATE(6),
        [sym_return_statement] = STATE(6),
        [sym_delete_statement] = STATE(6),
        [sym__suite] = STATE(390),
        [sym__expression] = STATE(25),
        [sym_binary_operator] = STATE(18),
        [sym_unary_operator] = STATE(18),
        [sym_subscript] = STATE(18),
        [sym_call] = STATE(18),
        [sym_list] = STATE(18),
        [sym_list_comprehension] = STATE(18),
        [sym_dictionary] = STATE(18),
        [sym_dictionary_comprehension] = STATE(18),
        [sym_set] = STATE(18),
        [sym_set_comprehension] = STATE(18),
        [anon_sym_import] = ACTIONS(89),
        [anon_sym_print] = ACTIONS(91),
        [anon_sym_return] = ACTIONS(93),
        [anon_sym_del] = ACTIONS(95),
        [sym_pass_statement] = ACTIONS(97),
        [sym_break_statement] = ACTIONS(97),
        [sym_continue_statement] = ACTIONS(97),
        [anon_sym_not] = ACTIONS(115),
        [anon_sym_LBRACK] = ACTIONS(117),
        [anon_sym_LBRACE] = ACTIONS(119),
        [sym_number] = ACTIONS(121),
        [sym_identifier] = ACTIONS(123),
        [sym_comment] = ACTIONS(79),
        [sym__indent] = ACTIONS(775),
    },
    [388] = {
        [sym__statement] = STATE(399),
        [sym__simple_statement] = STATE(400),
        [sym_import_statement] = STATE(6),
        [sym_print_statement] = STATE(6),
        [sym_expression_statement] = STATE(6),
        [sym_return_statement] = STATE(6),
        [sym_delete_statement] = STATE(6),
        [sym__compound_statement] = STATE(401),
        [sym_if_statement] = STATE(402),
        [sym_for_statement] = STATE(402),
        [sym_while_statement] = STATE(402),
        [sym_try_statement] = STATE(402),
        [sym_with_statement] = STATE(402),
        [sym_function_definition] = STATE(402),
        [sym_class_definition] = STATE(402),
        [sym_decorated_definition] = STATE(402),
        [sym_decorator] = STATE(24),
        [sym__expression] = STATE(25),
        [sym_binary_operator] = STATE(18),
        [sym_unary_operator] = STATE(18),
        [sym_subscript] = STATE(18),
        [sym_call] = STATE(18),
        [sym_list] = STATE(18),
        [sym_list_comprehension] = STATE(18),
        [sym_dictionary] = STATE(18),
        [sym_dictionary_comprehension] = STATE(18),
        [sym_set] = STATE(18),
        [sym_set_comprehension] = STATE(18),
        [aux_sym_module_repeat1] = STATE(403),
        [aux_sym_decorated_definition_repeat1] = STATE(404),
        [anon_sym_import] = ACTIONS(89),
        [anon_sym_print] = ACTIONS(91),
        [anon_sym_return] = ACTIONS(93),
        [anon_sym_del] = ACTIONS(95),
        [sym_pass_statement] = ACTIONS(97),
        [sym_break_statement] = ACTIONS(97),
        [sym_continue_statement] = ACTIONS(97),
        [anon_sym_if] = ACTIONS(781),
        [anon_sym_for] = ACTIONS(783),
        [anon_sym_while] = ACTIONS(785),
        [anon_sym_try] = ACTIONS(787),
        [anon_sym_with] = ACTIONS(789),
        [anon_sym_def] = ACTIONS(791),
        [anon_sym_class] = ACTIONS(793),
        [anon_sym_AT] = ACTIONS(113),
        [anon_sym_not] = ACTIONS(115),
        [anon_sym_LBRACK] = ACTIONS(117),
        [anon_sym_LBRACE] = ACTIONS(119),
        [sym_number] = ACTIONS(121),
        [sym_identifier] = ACTIONS(123),
        [sym_comment] = ACTIONS(79),
        [sym__dedent] = ACTIONS(795),
    },
    [389] = {
        [sym_comment] = ACTIONS(79),
        [sym__newline] = ACTIONS(795),
    },
    [390] = {
        [ts_builtin_sym_end] = ACTIONS(797),
        [anon_sym_SEMI] = ACTIONS(797),
        [anon_sym_import] = ACTIONS(799),
        [anon_sym_print] = ACTIONS(799),
        [anon_sym_return] = ACTIONS(799),
        [anon_sym_del] = ACTIONS(799),
        [sym_pass_statement] = ACTIONS(799),
        [sym_break_statement] = ACTIONS(799),
        [sym_continue_statement] = ACTIONS(799),
        [anon_sym_if] = ACTIONS(799),
        [anon_sym_for] = ACTIONS(799),
        [anon_sym_while] = ACTIONS(799),
        [anon_sym_try] = ACTIONS(799),
        [anon_sym_with] = ACTIONS(799),
        [anon_sym_def] = ACTIONS(799),
        [anon_sym_class] = ACTIONS(799),
        [anon_sym_AT] = ACTIONS(797),
        [anon_sym_not] = ACTIONS(799),
        [anon_sym_LBRACK] = ACTIONS(797),
        [anon_sym_LBRACE] = ACTIONS(797),
        [sym_number] = ACTIONS(799),
        [sym_identifier] = ACTIONS(801),
        [sym_comment] = ACTIONS(79),
        [sym__newline] = ACTIONS(797),
    },
    [391] = {
        [ts_builtin_sym_end] = ACTIONS(803),
        [anon_sym_SEMI] = ACTIONS(803),
        [anon_sym_import] = ACTIONS(805),
        [anon_sym_print] = ACTIONS(805),
        [anon_sym_return] = ACTIONS(805),
        [anon_sym_del] = ACTIONS(805),
        [sym_pass_statement] = ACTIONS(805),
        [sym_break_statement] = ACTIONS(805),
        [sym_continue_statement] = ACTIONS(805),
        [anon_sym_if] = ACTIONS(805),
        [anon_sym_elif] = ACTIONS(805),
        [anon_sym_else] = ACTIONS(805),
        [anon_sym_for] = ACTIONS(805),
        [anon_sym_while] = ACTIONS(805),
        [anon_sym_try] = ACTIONS(805),
        [anon_sym_except] = ACTIONS(805),
        [anon_sym_finally] = ACTIONS(805),
        [anon_sym_with] = ACTIONS(805),
        [anon_sym_def] = ACTIONS(805),
        [anon_sym_class] = ACTIONS(805),
        [anon_sym_AT] = ACTIONS(803),
        [anon_sym_not] = ACTIONS(805),
        [anon_sym_LBRACK] = ACTIONS(803),
        [anon_sym_LBRACE] = ACTIONS(803),
        [sym_number] = ACTIONS(805),
        [sym_identifier] = ACTIONS(807),
        [sym_comment] = ACTIONS(79),
        [sym__newline] = ACTIONS(803),
    },
    [392] = {
        [sym__expression] = STATE(535),
        [sym_binary_operator] = STATE(44),
        [sym_unary_operator] = STATE(44),
        [sym_subscript] = STATE(44),
        [sym_call] = STATE(44),
        [sym_list] = STATE(44),
        [sym_list_comprehension] = STATE(44),
        [sym_dictionary] = STATE(44),
        [sym_dictionary_comprehension] = STATE(44),
        [sym_set] = STATE(44),
        [sym_set_comprehension] = STATE(44),
        [anon_sym_not] = ACTIONS(131),
        [anon_sym_LBRACK] = ACTIONS(133),
        [anon_sym_LBRACE] = ACTIONS(135),
        [sym_number] = ACTIONS(137),
        [sym_identifier] = ACTIONS(139),
        [sym_comment] = ACTIONS(79),
    },
    [393] = {
        [sym_expression_list] = STATE(523),
        [sym__expression] = STATE(165),
        [sym_binary_operator] = STATE(44),
        [sym_unary_operator] = STATE(44),
        [sym_subscript] = STATE(44),
        [sym_call] = STATE(44),
        [sym_list] = STATE(44),
        [sym_list_comprehension] = STATE(44),
        [sym_dictionary] = STATE(44),
        [sym_dictionary_comprehension] = STATE(44),
        [sym_set] = STATE(44),
        [sym_set_comprehension] = STATE(44),
        [anon_sym_not] = ACTIONS(141),
        [anon_sym_LBRACK] = ACTIONS(133),
        [anon_sym_LBRACE] = ACTIONS(135),
        [sym_number] = ACTIONS(137),
        [sym_identifier] = ACTIONS(139),
        [sym_comment] = ACTIONS(79),
    },
    [394] = {
        [sym__expression] = STATE(519),
        [sym_binary_operator] = STATE(44),
        [sym_unary_operator] = STATE(44),
        [sym_subscript] = STATE(44),
        [sym_call] = STATE(44),
        [sym_list] = STATE(44),
        [sym_list_comprehension] = STATE(44),
        [sym_dictionary] = STATE(44),
        [sym_dictionary_comprehension] = STATE(44),
        [sym_set] = STATE(44),
        [sym_set_comprehension] = STATE(44),
        [anon_sym_not] = ACTIONS(131),
        [anon_sym_LBRACK] = ACTIONS(133),
        [anon_sym_LBRACE] = ACTIONS(135),
        [sym_number] = ACTIONS(137),
        [sym_identifier] = ACTIONS(139),
        [sym_comment] = ACTIONS(79),
    },
    [395] = {
        [anon_sym_COLON] = ACTIONS(809),
        [sym_comment] = ACTIONS(79),
    },
    [396] = {
        [sym_with_item] = STATE(455),
        [sym__expression] = STATE(456),
        [sym_binary_operator] = STATE(44),
        [sym_unary_operator] = STATE(44),
        [sym_subscript] = STATE(44),
        [sym_call] = STATE(44),
        [sym_list] = STATE(44),
        [sym_list_comprehension] = STATE(44),
        [sym_dictionary] = STATE(44),
        [sym_dictionary_comprehension] = STATE(44),
        [sym_set] = STATE(44),
        [sym_set_comprehension] = STATE(44),
        [anon_sym_not] = ACTIONS(145),
        [anon_sym_LBRACK] = ACTIONS(133),
        [anon_sym_LBRACE] = ACTIONS(135),
        [sym_number] = ACTIONS(137),
        [sym_identifier] = ACTIONS(139),
        [sym_comment] = ACTIONS(79),
    },
    [397] = {
        [sym_identifier] = ACTIONS(811),
        [sym_comment] = ACTIONS(79),
    },
    [398] = {
        [sym_identifier] = ACTIONS(813),
        [sym_comment] = ACTIONS(79),
    },
    [399] = {
        [anon_sym_import] = ACTIONS(167),
        [anon_sym_print] = ACTIONS(167),
        [anon_sym_return] = ACTIONS(167),
        [anon_sym_del] = ACTIONS(167),
        [sym_pass_statement] = ACTIONS(167),
        [sym_break_statement] = ACTIONS(167),
        [sym_continue_statement] = ACTIONS(167),
        [anon_sym_if] = ACTIONS(167),
        [anon_sym_for] = ACTIONS(167),
        [anon_sym_while] = ACTIONS(167),
        [anon_sym_try] = ACTIONS(167),
        [anon_sym_with] = ACTIONS(167),
        [anon_sym_def] = ACTIONS(167),
        [anon_sym_class] = ACTIONS(167),
        [anon_sym_AT] = ACTIONS(165),
        [anon_sym_not] = ACTIONS(167),
        [anon_sym_LBRACK] = ACTIONS(165),
        [anon_sym_LBRACE] = ACTIONS(165),
        [sym_number] = ACTIONS(167),
        [sym_identifier] = ACTIONS(169),
        [sym_comment] = ACTIONS(79),
        [sym__dedent] = ACTIONS(165),
    },
    [400] = {
        [sym_comment] = ACTIONS(79),
        [sym__newline] = ACTIONS(815),
    },
    [401] = {
        [anon_sym_import] = ACTIONS(175),
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
        [sym_comment] = ACTIONS(79),
        [sym__dedent] = ACTIONS(173),
    },
    [402] = {
        [anon_sym_import] = ACTIONS(181),
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
        [sym_number] = ACTIONS(181),
        [sym_identifier] = ACTIONS(183),
        [sym_comment] = ACTIONS(79),
        [sym__dedent] = ACTIONS(179),
    },
    [403] = {
        [sym__statement] = STATE(407),
        [sym__simple_statement] = STATE(400),
        [sym_import_statement] = STATE(6),
        [sym_print_statement] = STATE(6),
        [sym_expression_statement] = STATE(6),
        [sym_return_statement] = STATE(6),
        [sym_delete_statement] = STATE(6),
        [sym__compound_statement] = STATE(401),
        [sym_if_statement] = STATE(402),
        [sym_for_statement] = STATE(402),
        [sym_while_statement] = STATE(402),
        [sym_try_statement] = STATE(402),
        [sym_with_statement] = STATE(402),
        [sym_function_definition] = STATE(402),
        [sym_class_definition] = STATE(402),
        [sym_decorated_definition] = STATE(402),
        [sym_decorator] = STATE(24),
        [sym__expression] = STATE(25),
        [sym_binary_operator] = STATE(18),
        [sym_unary_operator] = STATE(18),
        [sym_subscript] = STATE(18),
        [sym_call] = STATE(18),
        [sym_list] = STATE(18),
        [sym_list_comprehension] = STATE(18),
        [sym_dictionary] = STATE(18),
        [sym_dictionary_comprehension] = STATE(18),
        [sym_set] = STATE(18),
        [sym_set_comprehension] = STATE(18),
        [aux_sym_decorated_definition_repeat1] = STATE(404),
        [anon_sym_import] = ACTIONS(89),
        [anon_sym_print] = ACTIONS(91),
        [anon_sym_return] = ACTIONS(93),
        [anon_sym_del] = ACTIONS(95),
        [sym_pass_statement] = ACTIONS(97),
        [sym_break_statement] = ACTIONS(97),
        [sym_continue_statement] = ACTIONS(97),
        [anon_sym_if] = ACTIONS(781),
        [anon_sym_for] = ACTIONS(783),
        [anon_sym_while] = ACTIONS(785),
        [anon_sym_try] = ACTIONS(787),
        [anon_sym_with] = ACTIONS(789),
        [anon_sym_def] = ACTIONS(791),
        [anon_sym_class] = ACTIONS(793),
        [anon_sym_AT] = ACTIONS(113),
        [anon_sym_not] = ACTIONS(115),
        [anon_sym_LBRACK] = ACTIONS(117),
        [anon_sym_LBRACE] = ACTIONS(119),
        [sym_number] = ACTIONS(121),
        [sym_identifier] = ACTIONS(123),
        [sym_comment] = ACTIONS(79),
        [sym__dedent] = ACTIONS(817),
    },
    [404] = {
        [sym_function_definition] = STATE(405),
        [sym_class_definition] = STATE(405),
        [sym_decorator] = STATE(29),
        [anon_sym_def] = ACTIONS(819),
        [anon_sym_class] = ACTIONS(821),
        [anon_sym_AT] = ACTIONS(113),
        [sym_comment] = ACTIONS(79),
    },
    [405] = {
        [anon_sym_import] = ACTIONS(217),
        [anon_sym_print] = ACTIONS(217),
        [anon_sym_return] = ACTIONS(217),
        [anon_sym_del] = ACTIONS(217),
        [sym_pass_statement] = ACTIONS(217),
        [sym_break_statement] = ACTIONS(217),
        [sym_continue_statement] = ACTIONS(217),
        [anon_sym_if] = ACTIONS(217),
        [anon_sym_for] = ACTIONS(217),
        [anon_sym_while] = ACTIONS(217),
        [anon_sym_try] = ACTIONS(217),
        [anon_sym_with] = ACTIONS(217),
        [anon_sym_def] = ACTIONS(217),
        [anon_sym_class] = ACTIONS(217),
        [anon_sym_AT] = ACTIONS(215),
        [anon_sym_not] = ACTIONS(217),
        [anon_sym_LBRACK] = ACTIONS(215),
        [anon_sym_LBRACE] = ACTIONS(215),
        [sym_number] = ACTIONS(217),
        [sym_identifier] = ACTIONS(219),
        [sym_comment] = ACTIONS(79),
        [sym__dedent] = ACTIONS(215),
    },
    [406] = {
        [ts_builtin_sym_end] = ACTIONS(823),
        [anon_sym_SEMI] = ACTIONS(823),
        [anon_sym_import] = ACTIONS(825),
        [anon_sym_print] = ACTIONS(825),
        [anon_sym_return] = ACTIONS(825),
        [anon_sym_del] = ACTIONS(825),
        [sym_pass_statement] = ACTIONS(825),
        [sym_break_statement] = ACTIONS(825),
        [sym_continue_statement] = ACTIONS(825),
        [anon_sym_if] = ACTIONS(825),
        [anon_sym_elif] = ACTIONS(825),
        [anon_sym_else] = ACTIONS(825),
        [anon_sym_for] = ACTIONS(825),
        [anon_sym_while] = ACTIONS(825),
        [anon_sym_try] = ACTIONS(825),
        [anon_sym_except] = ACTIONS(825),
        [anon_sym_finally] = ACTIONS(825),
        [anon_sym_with] = ACTIONS(825),
        [anon_sym_def] = ACTIONS(825),
        [anon_sym_class] = ACTIONS(825),
        [anon_sym_AT] = ACTIONS(823),
        [anon_sym_not] = ACTIONS(825),
        [anon_sym_LBRACK] = ACTIONS(823),
        [anon_sym_LBRACE] = ACTIONS(823),
        [sym_number] = ACTIONS(825),
        [sym_identifier] = ACTIONS(827),
        [sym_comment] = ACTIONS(79),
        [sym__newline] = ACTIONS(823),
    },
    [407] = {
        [anon_sym_import] = ACTIONS(227),
        [anon_sym_print] = ACTIONS(227),
        [anon_sym_return] = ACTIONS(227),
        [anon_sym_del] = ACTIONS(227),
        [sym_pass_statement] = ACTIONS(227),
        [sym_break_statement] = ACTIONS(227),
        [sym_continue_statement] = ACTIONS(227),
        [anon_sym_if] = ACTIONS(227),
        [anon_sym_for] = ACTIONS(227),
        [anon_sym_while] = ACTIONS(227),
        [anon_sym_try] = ACTIONS(227),
        [anon_sym_with] = ACTIONS(227),
        [anon_sym_def] = ACTIONS(227),
        [anon_sym_class] = ACTIONS(227),
        [anon_sym_AT] = ACTIONS(225),
        [anon_sym_not] = ACTIONS(227),
        [anon_sym_LBRACK] = ACTIONS(225),
        [anon_sym_LBRACE] = ACTIONS(225),
        [sym_number] = ACTIONS(227),
        [sym_identifier] = ACTIONS(229),
        [sym_comment] = ACTIONS(79),
        [sym__dedent] = ACTIONS(225),
    },
    [408] = {
        [anon_sym_import] = ACTIONS(681),
        [anon_sym_print] = ACTIONS(681),
        [anon_sym_return] = ACTIONS(681),
        [anon_sym_del] = ACTIONS(681),
        [sym_pass_statement] = ACTIONS(681),
        [sym_break_statement] = ACTIONS(681),
        [sym_continue_statement] = ACTIONS(681),
        [anon_sym_if] = ACTIONS(681),
        [anon_sym_for] = ACTIONS(681),
        [anon_sym_while] = ACTIONS(681),
        [anon_sym_try] = ACTIONS(681),
        [anon_sym_with] = ACTIONS(681),
        [anon_sym_def] = ACTIONS(681),
        [anon_sym_class] = ACTIONS(681),
        [anon_sym_AT] = ACTIONS(679),
        [anon_sym_not] = ACTIONS(681),
        [anon_sym_LBRACK] = ACTIONS(679),
        [anon_sym_LBRACE] = ACTIONS(679),
        [sym_number] = ACTIONS(681),
        [sym_identifier] = ACTIONS(683),
        [sym_comment] = ACTIONS(79),
        [sym__dedent] = ACTIONS(679),
    },
    [409] = {
        [anon_sym_COLON] = ACTIONS(829),
        [anon_sym_LPAREN] = ACTIONS(831),
        [sym_comment] = ACTIONS(79),
    },
    [410] = {
        [sym__simple_statement] = STATE(416),
        [sym_import_statement] = STATE(6),
        [sym_print_statement] = STATE(6),
        [sym_expression_statement] = STATE(6),
        [sym_return_statement] = STATE(6),
        [sym_delete_statement] = STATE(6),
        [sym__suite] = STATE(421),
        [sym__expression] = STATE(25),
        [sym_binary_operator] = STATE(18),
        [sym_unary_operator] = STATE(18),
        [sym_subscript] = STATE(18),
        [sym_call] = STATE(18),
        [sym_list] = STATE(18),
        [sym_list_comprehension] = STATE(18),
        [sym_dictionary] = STATE(18),
        [sym_dictionary_comprehension] = STATE(18),
        [sym_set] = STATE(18),
        [sym_set_comprehension] = STATE(18),
        [anon_sym_import] = ACTIONS(89),
        [anon_sym_print] = ACTIONS(91),
        [anon_sym_return] = ACTIONS(93),
        [anon_sym_del] = ACTIONS(95),
        [sym_pass_statement] = ACTIONS(97),
        [sym_break_statement] = ACTIONS(97),
        [sym_continue_statement] = ACTIONS(97),
        [anon_sym_not] = ACTIONS(115),
        [anon_sym_LBRACK] = ACTIONS(117),
        [anon_sym_LBRACE] = ACTIONS(119),
        [sym_number] = ACTIONS(121),
        [sym_identifier] = ACTIONS(123),
        [sym_comment] = ACTIONS(79),
        [sym__indent] = ACTIONS(833),
    },
    [411] = {
        [sym_expression_list] = STATE(412),
        [sym__expression] = STATE(384),
        [sym_binary_operator] = STATE(44),
        [sym_unary_operator] = STATE(44),
        [sym_subscript] = STATE(44),
        [sym_call] = STATE(44),
        [sym_list] = STATE(44),
        [sym_list_comprehension] = STATE(44),
        [sym_dictionary] = STATE(44),
        [sym_dictionary_comprehension] = STATE(44),
        [sym_set] = STATE(44),
        [sym_set_comprehension] = STATE(44),
        [anon_sym_not] = ACTIONS(235),
        [anon_sym_LBRACK] = ACTIONS(133),
        [anon_sym_LBRACE] = ACTIONS(135),
        [sym_number] = ACTIONS(137),
        [sym_identifier] = ACTIONS(139),
        [sym_comment] = ACTIONS(79),
    },
    [412] = {
        [anon_sym_RPAREN] = ACTIONS(835),
        [sym_comment] = ACTIONS(79),
    },
    [413] = {
        [anon_sym_COLON] = ACTIONS(837),
        [sym_comment] = ACTIONS(79),
    },
    [414] = {
        [sym__simple_statement] = STATE(416),
        [sym_import_statement] = STATE(6),
        [sym_print_statement] = STATE(6),
        [sym_expression_statement] = STATE(6),
        [sym_return_statement] = STATE(6),
        [sym_delete_statement] = STATE(6),
        [sym__suite] = STATE(417),
        [sym__expression] = STATE(25),
        [sym_binary_operator] = STATE(18),
        [sym_unary_operator] = STATE(18),
        [sym_subscript] = STATE(18),
        [sym_call] = STATE(18),
        [sym_list] = STATE(18),
        [sym_list_comprehension] = STATE(18),
        [sym_dictionary] = STATE(18),
        [sym_dictionary_comprehension] = STATE(18),
        [sym_set] = STATE(18),
        [sym_set_comprehension] = STATE(18),
        [anon_sym_import] = ACTIONS(89),
        [anon_sym_print] = ACTIONS(91),
        [anon_sym_return] = ACTIONS(93),
        [anon_sym_del] = ACTIONS(95),
        [sym_pass_statement] = ACTIONS(97),
        [sym_break_statement] = ACTIONS(97),
        [sym_continue_statement] = ACTIONS(97),
        [anon_sym_not] = ACTIONS(115),
        [anon_sym_LBRACK] = ACTIONS(117),
        [anon_sym_LBRACE] = ACTIONS(119),
        [sym_number] = ACTIONS(121),
        [sym_identifier] = ACTIONS(123),
        [sym_comment] = ACTIONS(79),
        [sym__indent] = ACTIONS(833),
    },
    [415] = {
        [sym__statement] = STATE(399),
        [sym__simple_statement] = STATE(400),
        [sym_import_statement] = STATE(6),
        [sym_print_statement] = STATE(6),
        [sym_expression_statement] = STATE(6),
        [sym_return_statement] = STATE(6),
        [sym_delete_statement] = STATE(6),
        [sym__compound_statement] = STATE(401),
        [sym_if_statement] = STATE(402),
        [sym_for_statement] = STATE(402),
        [sym_while_statement] = STATE(402),
        [sym_try_statement] = STATE(402),
        [sym_with_statement] = STATE(402),
        [sym_function_definition] = STATE(402),
        [sym_class_definition] = STATE(402),
        [sym_decorated_definition] = STATE(402),
        [sym_decorator] = STATE(24),
        [sym__expression] = STATE(25),
        [sym_binary_operator] = STATE(18),
        [sym_unary_operator] = STATE(18),
        [sym_subscript] = STATE(18),
        [sym_call] = STATE(18),
        [sym_list] = STATE(18),
        [sym_list_comprehension] = STATE(18),
        [sym_dictionary] = STATE(18),
        [sym_dictionary_comprehension] = STATE(18),
        [sym_set] = STATE(18),
        [sym_set_comprehension] = STATE(18),
        [aux_sym_module_repeat1] = STATE(419),
        [aux_sym_decorated_definition_repeat1] = STATE(404),
        [anon_sym_import] = ACTIONS(89),
        [anon_sym_print] = ACTIONS(91),
        [anon_sym_return] = ACTIONS(93),
        [anon_sym_del] = ACTIONS(95),
        [sym_pass_statement] = ACTIONS(97),
        [sym_break_statement] = ACTIONS(97),
        [sym_continue_statement] = ACTIONS(97),
        [anon_sym_if] = ACTIONS(781),
        [anon_sym_for] = ACTIONS(783),
        [anon_sym_while] = ACTIONS(785),
        [anon_sym_try] = ACTIONS(787),
        [anon_sym_with] = ACTIONS(789),
        [anon_sym_def] = ACTIONS(791),
        [anon_sym_class] = ACTIONS(793),
        [anon_sym_AT] = ACTIONS(113),
        [anon_sym_not] = ACTIONS(115),
        [anon_sym_LBRACK] = ACTIONS(117),
        [anon_sym_LBRACE] = ACTIONS(119),
        [sym_number] = ACTIONS(121),
        [sym_identifier] = ACTIONS(123),
        [sym_comment] = ACTIONS(79),
        [sym__dedent] = ACTIONS(839),
    },
    [416] = {
        [sym_comment] = ACTIONS(79),
        [sym__newline] = ACTIONS(839),
    },
    [417] = {
        [anon_sym_import] = ACTIONS(799),
        [anon_sym_print] = ACTIONS(799),
        [anon_sym_return] = ACTIONS(799),
        [anon_sym_del] = ACTIONS(799),
        [sym_pass_statement] = ACTIONS(799),
        [sym_break_statement] = ACTIONS(799),
        [sym_continue_statement] = ACTIONS(799),
        [anon_sym_if] = ACTIONS(799),
        [anon_sym_for] = ACTIONS(799),
        [anon_sym_while] = ACTIONS(799),
        [anon_sym_try] = ACTIONS(799),
        [anon_sym_with] = ACTIONS(799),
        [anon_sym_def] = ACTIONS(799),
        [anon_sym_class] = ACTIONS(799),
        [anon_sym_AT] = ACTIONS(797),
        [anon_sym_not] = ACTIONS(799),
        [anon_sym_LBRACK] = ACTIONS(797),
        [anon_sym_LBRACE] = ACTIONS(797),
        [sym_number] = ACTIONS(799),
        [sym_identifier] = ACTIONS(801),
        [sym_comment] = ACTIONS(79),
        [sym__dedent] = ACTIONS(797),
    },
    [418] = {
        [anon_sym_import] = ACTIONS(805),
        [anon_sym_print] = ACTIONS(805),
        [anon_sym_return] = ACTIONS(805),
        [anon_sym_del] = ACTIONS(805),
        [sym_pass_statement] = ACTIONS(805),
        [sym_break_statement] = ACTIONS(805),
        [sym_continue_statement] = ACTIONS(805),
        [anon_sym_if] = ACTIONS(805),
        [anon_sym_elif] = ACTIONS(805),
        [anon_sym_else] = ACTIONS(805),
        [anon_sym_for] = ACTIONS(805),
        [anon_sym_while] = ACTIONS(805),
        [anon_sym_try] = ACTIONS(805),
        [anon_sym_except] = ACTIONS(805),
        [anon_sym_finally] = ACTIONS(805),
        [anon_sym_with] = ACTIONS(805),
        [anon_sym_def] = ACTIONS(805),
        [anon_sym_class] = ACTIONS(805),
        [anon_sym_AT] = ACTIONS(803),
        [anon_sym_not] = ACTIONS(805),
        [anon_sym_LBRACK] = ACTIONS(803),
        [anon_sym_LBRACE] = ACTIONS(803),
        [sym_number] = ACTIONS(805),
        [sym_identifier] = ACTIONS(807),
        [sym_comment] = ACTIONS(79),
        [sym__dedent] = ACTIONS(803),
    },
    [419] = {
        [sym__statement] = STATE(407),
        [sym__simple_statement] = STATE(400),
        [sym_import_statement] = STATE(6),
        [sym_print_statement] = STATE(6),
        [sym_expression_statement] = STATE(6),
        [sym_return_statement] = STATE(6),
        [sym_delete_statement] = STATE(6),
        [sym__compound_statement] = STATE(401),
        [sym_if_statement] = STATE(402),
        [sym_for_statement] = STATE(402),
        [sym_while_statement] = STATE(402),
        [sym_try_statement] = STATE(402),
        [sym_with_statement] = STATE(402),
        [sym_function_definition] = STATE(402),
        [sym_class_definition] = STATE(402),
        [sym_decorated_definition] = STATE(402),
        [sym_decorator] = STATE(24),
        [sym__expression] = STATE(25),
        [sym_binary_operator] = STATE(18),
        [sym_unary_operator] = STATE(18),
        [sym_subscript] = STATE(18),
        [sym_call] = STATE(18),
        [sym_list] = STATE(18),
        [sym_list_comprehension] = STATE(18),
        [sym_dictionary] = STATE(18),
        [sym_dictionary_comprehension] = STATE(18),
        [sym_set] = STATE(18),
        [sym_set_comprehension] = STATE(18),
        [aux_sym_decorated_definition_repeat1] = STATE(404),
        [anon_sym_import] = ACTIONS(89),
        [anon_sym_print] = ACTIONS(91),
        [anon_sym_return] = ACTIONS(93),
        [anon_sym_del] = ACTIONS(95),
        [sym_pass_statement] = ACTIONS(97),
        [sym_break_statement] = ACTIONS(97),
        [sym_continue_statement] = ACTIONS(97),
        [anon_sym_if] = ACTIONS(781),
        [anon_sym_for] = ACTIONS(783),
        [anon_sym_while] = ACTIONS(785),
        [anon_sym_try] = ACTIONS(787),
        [anon_sym_with] = ACTIONS(789),
        [anon_sym_def] = ACTIONS(791),
        [anon_sym_class] = ACTIONS(793),
        [anon_sym_AT] = ACTIONS(113),
        [anon_sym_not] = ACTIONS(115),
        [anon_sym_LBRACK] = ACTIONS(117),
        [anon_sym_LBRACE] = ACTIONS(119),
        [sym_number] = ACTIONS(121),
        [sym_identifier] = ACTIONS(123),
        [sym_comment] = ACTIONS(79),
        [sym__dedent] = ACTIONS(841),
    },
    [420] = {
        [anon_sym_import] = ACTIONS(825),
        [anon_sym_print] = ACTIONS(825),
        [anon_sym_return] = ACTIONS(825),
        [anon_sym_del] = ACTIONS(825),
        [sym_pass_statement] = ACTIONS(825),
        [sym_break_statement] = ACTIONS(825),
        [sym_continue_statement] = ACTIONS(825),
        [anon_sym_if] = ACTIONS(825),
        [anon_sym_elif] = ACTIONS(825),
        [anon_sym_else] = ACTIONS(825),
        [anon_sym_for] = ACTIONS(825),
        [anon_sym_while] = ACTIONS(825),
        [anon_sym_try] = ACTIONS(825),
        [anon_sym_except] = ACTIONS(825),
        [anon_sym_finally] = ACTIONS(825),
        [anon_sym_with] = ACTIONS(825),
        [anon_sym_def] = ACTIONS(825),
        [anon_sym_class] = ACTIONS(825),
        [anon_sym_AT] = ACTIONS(823),
        [anon_sym_not] = ACTIONS(825),
        [anon_sym_LBRACK] = ACTIONS(823),
        [anon_sym_LBRACE] = ACTIONS(823),
        [sym_number] = ACTIONS(825),
        [sym_identifier] = ACTIONS(827),
        [sym_comment] = ACTIONS(79),
        [sym__dedent] = ACTIONS(823),
    },
    [421] = {
        [anon_sym_import] = ACTIONS(843),
        [anon_sym_print] = ACTIONS(843),
        [anon_sym_return] = ACTIONS(843),
        [anon_sym_del] = ACTIONS(843),
        [sym_pass_statement] = ACTIONS(843),
        [sym_break_statement] = ACTIONS(843),
        [sym_continue_statement] = ACTIONS(843),
        [anon_sym_if] = ACTIONS(843),
        [anon_sym_for] = ACTIONS(843),
        [anon_sym_while] = ACTIONS(843),
        [anon_sym_try] = ACTIONS(843),
        [anon_sym_with] = ACTIONS(843),
        [anon_sym_def] = ACTIONS(843),
        [anon_sym_class] = ACTIONS(843),
        [anon_sym_AT] = ACTIONS(845),
        [anon_sym_not] = ACTIONS(843),
        [anon_sym_LBRACK] = ACTIONS(845),
        [anon_sym_LBRACE] = ACTIONS(845),
        [sym_number] = ACTIONS(843),
        [sym_identifier] = ACTIONS(847),
        [sym_comment] = ACTIONS(79),
        [sym__dedent] = ACTIONS(845),
    },
    [422] = {
        [sym_parameters] = STATE(424),
        [anon_sym_LPAREN] = ACTIONS(849),
        [sym_comment] = ACTIONS(79),
    },
    [423] = {
        [sym_default_parameter] = STATE(430),
        [sym_list_splat_parameter] = STATE(431),
        [sym_dictionary_splat_parameter] = STATE(432),
        [aux_sym_parameters_repeat1] = STATE(433),
        [anon_sym_RPAREN] = ACTIONS(851),
        [anon_sym_STAR] = ACTIONS(853),
        [sym_identifier] = ACTIONS(855),
        [sym_comment] = ACTIONS(79),
    },
    [424] = {
        [anon_sym_COLON] = ACTIONS(857),
        [sym_comment] = ACTIONS(79),
    },
    [425] = {
        [sym__simple_statement] = STATE(416),
        [sym_import_statement] = STATE(6),
        [sym_print_statement] = STATE(6),
        [sym_expression_statement] = STATE(6),
        [sym_return_statement] = STATE(6),
        [sym_delete_statement] = STATE(6),
        [sym__suite] = STATE(426),
        [sym__expression] = STATE(25),
        [sym_binary_operator] = STATE(18),
        [sym_unary_operator] = STATE(18),
        [sym_subscript] = STATE(18),
        [sym_call] = STATE(18),
        [sym_list] = STATE(18),
        [sym_list_comprehension] = STATE(18),
        [sym_dictionary] = STATE(18),
        [sym_dictionary_comprehension] = STATE(18),
        [sym_set] = STATE(18),
        [sym_set_comprehension] = STATE(18),
        [anon_sym_import] = ACTIONS(89),
        [anon_sym_print] = ACTIONS(91),
        [anon_sym_return] = ACTIONS(93),
        [anon_sym_del] = ACTIONS(95),
        [sym_pass_statement] = ACTIONS(97),
        [sym_break_statement] = ACTIONS(97),
        [sym_continue_statement] = ACTIONS(97),
        [anon_sym_not] = ACTIONS(115),
        [anon_sym_LBRACK] = ACTIONS(117),
        [anon_sym_LBRACE] = ACTIONS(119),
        [sym_number] = ACTIONS(121),
        [sym_identifier] = ACTIONS(123),
        [sym_comment] = ACTIONS(79),
        [sym__indent] = ACTIONS(833),
    },
    [426] = {
        [anon_sym_import] = ACTIONS(859),
        [anon_sym_print] = ACTIONS(859),
        [anon_sym_return] = ACTIONS(859),
        [anon_sym_del] = ACTIONS(859),
        [sym_pass_statement] = ACTIONS(859),
        [sym_break_statement] = ACTIONS(859),
        [sym_continue_statement] = ACTIONS(859),
        [anon_sym_if] = ACTIONS(859),
        [anon_sym_for] = ACTIONS(859),
        [anon_sym_while] = ACTIONS(859),
        [anon_sym_try] = ACTIONS(859),
        [anon_sym_with] = ACTIONS(859),
        [anon_sym_def] = ACTIONS(859),
        [anon_sym_class] = ACTIONS(859),
        [anon_sym_AT] = ACTIONS(861),
        [anon_sym_not] = ACTIONS(859),
        [anon_sym_LBRACK] = ACTIONS(861),
        [anon_sym_LBRACE] = ACTIONS(861),
        [sym_number] = ACTIONS(859),
        [sym_identifier] = ACTIONS(863),
        [sym_comment] = ACTIONS(79),
        [sym__dedent] = ACTIONS(861),
    },
    [427] = {
        [anon_sym_COLON] = ACTIONS(865),
        [sym_comment] = ACTIONS(79),
    },
    [428] = {
        [anon_sym_STAR] = ACTIONS(867),
        [sym_identifier] = ACTIONS(869),
        [sym_comment] = ACTIONS(79),
    },
    [429] = {
        [anon_sym_COMMA] = ACTIONS(871),
        [anon_sym_RPAREN] = ACTIONS(873),
        [anon_sym_EQ] = ACTIONS(875),
        [sym_comment] = ACTIONS(79),
    },
    [430] = {
        [anon_sym_COMMA] = ACTIONS(871),
        [anon_sym_RPAREN] = ACTIONS(873),
        [sym_comment] = ACTIONS(79),
    },
    [431] = {
        [anon_sym_COMMA] = ACTIONS(877),
        [anon_sym_RPAREN] = ACTIONS(873),
        [sym_comment] = ACTIONS(79),
    },
    [432] = {
        [anon_sym_RPAREN] = ACTIONS(873),
        [sym_comment] = ACTIONS(79),
    },
    [433] = {
        [sym_default_parameter] = STATE(435),
        [sym_list_splat_parameter] = STATE(436),
        [sym_dictionary_splat_parameter] = STATE(437),
        [anon_sym_STAR] = ACTIONS(853),
        [sym_identifier] = ACTIONS(879),
        [sym_comment] = ACTIONS(79),
    },
    [434] = {
        [anon_sym_COMMA] = ACTIONS(881),
        [anon_sym_RPAREN] = ACTIONS(883),
        [anon_sym_EQ] = ACTIONS(875),
        [sym_comment] = ACTIONS(79),
    },
    [435] = {
        [anon_sym_COMMA] = ACTIONS(881),
        [anon_sym_RPAREN] = ACTIONS(883),
        [sym_comment] = ACTIONS(79),
    },
    [436] = {
        [anon_sym_COMMA] = ACTIONS(885),
        [anon_sym_RPAREN] = ACTIONS(883),
        [sym_comment] = ACTIONS(79),
    },
    [437] = {
        [anon_sym_RPAREN] = ACTIONS(883),
        [sym_comment] = ACTIONS(79),
    },
    [438] = {
        [anon_sym_COLON] = ACTIONS(887),
        [sym_comment] = ACTIONS(79),
    },
    [439] = {
        [sym_dictionary_splat_parameter] = STATE(441),
        [anon_sym_STAR] = ACTIONS(889),
        [sym_comment] = ACTIONS(79),
    },
    [440] = {
        [anon_sym_STAR] = ACTIONS(867),
        [sym_comment] = ACTIONS(79),
    },
    [441] = {
        [anon_sym_RPAREN] = ACTIONS(891),
        [sym_comment] = ACTIONS(79),
    },
    [442] = {
        [anon_sym_COLON] = ACTIONS(893),
        [sym_comment] = ACTIONS(79),
    },
    [443] = {
        [sym_identifier] = ACTIONS(895),
        [sym_comment] = ACTIONS(79),
    },
    [444] = {
        [anon_sym_RPAREN] = ACTIONS(897),
        [sym_comment] = ACTIONS(79),
    },
    [445] = {
        [anon_sym_RPAREN] = ACTIONS(899),
        [anon_sym_STAR] = ACTIONS(901),
        [sym_identifier] = ACTIONS(903),
        [sym_comment] = ACTIONS(79),
    },
    [446] = {
        [anon_sym_COLON] = ACTIONS(905),
        [sym_comment] = ACTIONS(79),
    },
    [447] = {
        [sym__expression] = STATE(448),
        [sym_binary_operator] = STATE(44),
        [sym_unary_operator] = STATE(44),
        [sym_subscript] = STATE(44),
        [sym_call] = STATE(44),
        [sym_list] = STATE(44),
        [sym_list_comprehension] = STATE(44),
        [sym_dictionary] = STATE(44),
        [sym_dictionary_comprehension] = STATE(44),
        [sym_set] = STATE(44),
        [sym_set_comprehension] = STATE(44),
        [anon_sym_not] = ACTIONS(235),
        [anon_sym_LBRACK] = ACTIONS(133),
        [anon_sym_LBRACE] = ACTIONS(135),
        [sym_number] = ACTIONS(137),
        [sym_identifier] = ACTIONS(139),
        [sym_comment] = ACTIONS(79),
    },
    [448] = {
        [anon_sym_COMMA] = ACTIONS(907),
        [anon_sym_LPAREN] = ACTIONS(251),
        [anon_sym_RPAREN] = ACTIONS(907),
        [anon_sym_STAR] = ACTIONS(319),
        [anon_sym_PLUS] = ACTIONS(321),
        [anon_sym_DASH] = ACTIONS(321),
        [anon_sym_SLASH] = ACTIONS(323),
        [anon_sym_STAR_STAR] = ACTIONS(325),
        [anon_sym_PIPE] = ACTIONS(327),
        [anon_sym_AMP] = ACTIONS(329),
        [anon_sym_CARET] = ACTIONS(331),
        [anon_sym_LT_LT] = ACTIONS(321),
        [anon_sym_GT_GT] = ACTIONS(321),
        [anon_sym_and] = ACTIONS(329),
        [anon_sym_or] = ACTIONS(327),
        [anon_sym_LBRACK] = ACTIONS(267),
        [sym_comment] = ACTIONS(79),
    },
    [449] = {
        [anon_sym_COLON] = ACTIONS(909),
        [sym_comment] = ACTIONS(79),
    },
    [450] = {
        [sym_dictionary_splat_parameter] = STATE(451),
        [anon_sym_STAR] = ACTIONS(889),
        [sym_comment] = ACTIONS(79),
    },
    [451] = {
        [anon_sym_RPAREN] = ACTIONS(899),
        [sym_comment] = ACTIONS(79),
    },
    [452] = {
        [anon_sym_RPAREN] = ACTIONS(883),
        [anon_sym_STAR] = ACTIONS(911),
        [sym_identifier] = ACTIONS(913),
        [sym_comment] = ACTIONS(79),
    },
    [453] = {
        [anon_sym_COMMA] = ACTIONS(915),
        [anon_sym_RPAREN] = ACTIONS(915),
        [sym_comment] = ACTIONS(79),
    },
    [454] = {
        [sym__expression] = STATE(275),
        [sym_binary_operator] = STATE(44),
        [sym_unary_operator] = STATE(44),
        [sym_subscript] = STATE(44),
        [sym_call] = STATE(44),
        [sym_list] = STATE(44),
        [sym_list_comprehension] = STATE(44),
        [sym_dictionary] = STATE(44),
        [sym_dictionary_comprehension] = STATE(44),
        [sym_set] = STATE(44),
        [sym_set_comprehension] = STATE(44),
        [anon_sym_not] = ACTIONS(145),
        [anon_sym_LBRACK] = ACTIONS(133),
        [anon_sym_LBRACE] = ACTIONS(135),
        [sym_number] = ACTIONS(137),
        [sym_identifier] = ACTIONS(139),
        [sym_comment] = ACTIONS(79),
    },
    [455] = {
        [aux_sym_with_statement_repeat1] = STATE(484),
        [anon_sym_COMMA] = ACTIONS(917),
        [anon_sym_COLON] = ACTIONS(919),
        [sym_comment] = ACTIONS(79),
    },
    [456] = {
        [anon_sym_COMMA] = ACTIONS(921),
        [anon_sym_as] = ACTIONS(923),
        [anon_sym_COLON] = ACTIONS(921),
        [anon_sym_LPAREN] = ACTIONS(251),
        [anon_sym_STAR] = ACTIONS(925),
        [anon_sym_PLUS] = ACTIONS(927),
        [anon_sym_DASH] = ACTIONS(927),
        [anon_sym_SLASH] = ACTIONS(929),
        [anon_sym_STAR_STAR] = ACTIONS(931),
        [anon_sym_PIPE] = ACTIONS(933),
        [anon_sym_AMP] = ACTIONS(935),
        [anon_sym_CARET] = ACTIONS(937),
        [anon_sym_LT_LT] = ACTIONS(927),
        [anon_sym_GT_GT] = ACTIONS(927),
        [anon_sym_and] = ACTIONS(935),
        [anon_sym_or] = ACTIONS(933),
        [anon_sym_LBRACK] = ACTIONS(267),
        [sym_comment] = ACTIONS(79),
    },
    [457] = {
        [sym__expression] = STATE(470),
        [sym_binary_operator] = STATE(44),
        [sym_unary_operator] = STATE(44),
        [sym_subscript] = STATE(44),
        [sym_call] = STATE(44),
        [sym_list] = STATE(44),
        [sym_list_comprehension] = STATE(44),
        [sym_dictionary] = STATE(44),
        [sym_dictionary_comprehension] = STATE(44),
        [sym_set] = STATE(44),
        [sym_set_comprehension] = STATE(44),
        [anon_sym_not] = ACTIONS(939),
        [anon_sym_LBRACK] = ACTIONS(133),
        [anon_sym_LBRACE] = ACTIONS(135),
        [sym_number] = ACTIONS(137),
        [sym_identifier] = ACTIONS(139),
        [sym_comment] = ACTIONS(79),
    },
    [458] = {
        [sym__expression] = STATE(468),
        [sym_binary_operator] = STATE(44),
        [sym_unary_operator] = STATE(44),
        [sym_subscript] = STATE(44),
        [sym_call] = STATE(44),
        [sym_list] = STATE(44),
        [sym_list_comprehension] = STATE(44),
        [sym_dictionary] = STATE(44),
        [sym_dictionary_comprehension] = STATE(44),
        [sym_set] = STATE(44),
        [sym_set_comprehension] = STATE(44),
        [anon_sym_not] = ACTIONS(145),
        [anon_sym_LBRACK] = ACTIONS(133),
        [anon_sym_LBRACE] = ACTIONS(135),
        [sym_number] = ACTIONS(137),
        [sym_identifier] = ACTIONS(139),
        [sym_comment] = ACTIONS(79),
    },
    [459] = {
        [sym__expression] = STATE(466),
        [sym_binary_operator] = STATE(44),
        [sym_unary_operator] = STATE(44),
        [sym_subscript] = STATE(44),
        [sym_call] = STATE(44),
        [sym_list] = STATE(44),
        [sym_list_comprehension] = STATE(44),
        [sym_dictionary] = STATE(44),
        [sym_dictionary_comprehension] = STATE(44),
        [sym_set] = STATE(44),
        [sym_set_comprehension] = STATE(44),
        [anon_sym_not] = ACTIONS(145),
        [anon_sym_LBRACK] = ACTIONS(133),
        [anon_sym_LBRACE] = ACTIONS(135),
        [sym_number] = ACTIONS(137),
        [sym_identifier] = ACTIONS(139),
        [sym_comment] = ACTIONS(79),
    },
    [460] = {
        [sym__expression] = STATE(76),
        [sym_binary_operator] = STATE(44),
        [sym_unary_operator] = STATE(44),
        [sym_subscript] = STATE(44),
        [sym_call] = STATE(44),
        [sym_list] = STATE(44),
        [sym_list_comprehension] = STATE(44),
        [sym_dictionary] = STATE(44),
        [sym_dictionary_comprehension] = STATE(44),
        [sym_set] = STATE(44),
        [sym_set_comprehension] = STATE(44),
        [anon_sym_not] = ACTIONS(145),
        [anon_sym_LBRACK] = ACTIONS(133),
        [anon_sym_LBRACE] = ACTIONS(135),
        [sym_number] = ACTIONS(137),
        [sym_identifier] = ACTIONS(139),
        [sym_comment] = ACTIONS(79),
    },
    [461] = {
        [sym__expression] = STATE(464),
        [sym_binary_operator] = STATE(44),
        [sym_unary_operator] = STATE(44),
        [sym_subscript] = STATE(44),
        [sym_call] = STATE(44),
        [sym_list] = STATE(44),
        [sym_list_comprehension] = STATE(44),
        [sym_dictionary] = STATE(44),
        [sym_dictionary_comprehension] = STATE(44),
        [sym_set] = STATE(44),
        [sym_set_comprehension] = STATE(44),
        [anon_sym_not] = ACTIONS(145),
        [anon_sym_LBRACK] = ACTIONS(133),
        [anon_sym_LBRACE] = ACTIONS(135),
        [sym_number] = ACTIONS(137),
        [sym_identifier] = ACTIONS(139),
        [sym_comment] = ACTIONS(79),
    },
    [462] = {
        [sym__expression] = STATE(465),
        [sym_binary_operator] = STATE(44),
        [sym_unary_operator] = STATE(44),
        [sym_subscript] = STATE(44),
        [sym_call] = STATE(44),
        [sym_list] = STATE(44),
        [sym_list_comprehension] = STATE(44),
        [sym_dictionary] = STATE(44),
        [sym_dictionary_comprehension] = STATE(44),
        [sym_set] = STATE(44),
        [sym_set_comprehension] = STATE(44),
        [anon_sym_not] = ACTIONS(145),
        [anon_sym_LBRACK] = ACTIONS(133),
        [anon_sym_LBRACE] = ACTIONS(135),
        [sym_number] = ACTIONS(137),
        [sym_identifier] = ACTIONS(139),
        [sym_comment] = ACTIONS(79),
    },
    [463] = {
        [sym__expression] = STATE(467),
        [sym_binary_operator] = STATE(44),
        [sym_unary_operator] = STATE(44),
        [sym_subscript] = STATE(44),
        [sym_call] = STATE(44),
        [sym_list] = STATE(44),
        [sym_list_comprehension] = STATE(44),
        [sym_dictionary] = STATE(44),
        [sym_dictionary_comprehension] = STATE(44),
        [sym_set] = STATE(44),
        [sym_set_comprehension] = STATE(44),
        [anon_sym_not] = ACTIONS(145),
        [anon_sym_LBRACK] = ACTIONS(133),
        [anon_sym_LBRACE] = ACTIONS(135),
        [sym_number] = ACTIONS(137),
        [sym_identifier] = ACTIONS(139),
        [sym_comment] = ACTIONS(79),
    },
    [464] = {
        [anon_sym_COMMA] = ACTIONS(307),
        [anon_sym_as] = ACTIONS(307),
        [anon_sym_COLON] = ACTIONS(307),
        [anon_sym_LPAREN] = ACTIONS(251),
        [anon_sym_STAR] = ACTIONS(925),
        [anon_sym_PLUS] = ACTIONS(927),
        [anon_sym_DASH] = ACTIONS(927),
        [anon_sym_SLASH] = ACTIONS(929),
        [anon_sym_STAR_STAR] = ACTIONS(931),
        [anon_sym_PIPE] = ACTIONS(307),
        [anon_sym_AMP] = ACTIONS(935),
        [anon_sym_CARET] = ACTIONS(937),
        [anon_sym_LT_LT] = ACTIONS(927),
        [anon_sym_GT_GT] = ACTIONS(927),
        [anon_sym_and] = ACTIONS(935),
        [anon_sym_or] = ACTIONS(307),
        [anon_sym_LBRACK] = ACTIONS(307),
        [sym_comment] = ACTIONS(79),
    },
    [465] = {
        [anon_sym_COMMA] = ACTIONS(307),
        [anon_sym_as] = ACTIONS(307),
        [anon_sym_COLON] = ACTIONS(307),
        [anon_sym_LPAREN] = ACTIONS(251),
        [anon_sym_STAR] = ACTIONS(925),
        [anon_sym_PLUS] = ACTIONS(927),
        [anon_sym_DASH] = ACTIONS(927),
        [anon_sym_SLASH] = ACTIONS(929),
        [anon_sym_STAR_STAR] = ACTIONS(931),
        [anon_sym_PIPE] = ACTIONS(307),
        [anon_sym_AMP] = ACTIONS(307),
        [anon_sym_CARET] = ACTIONS(937),
        [anon_sym_LT_LT] = ACTIONS(927),
        [anon_sym_GT_GT] = ACTIONS(927),
        [anon_sym_and] = ACTIONS(307),
        [anon_sym_or] = ACTIONS(307),
        [anon_sym_LBRACK] = ACTIONS(307),
        [sym_comment] = ACTIONS(79),
    },
    [466] = {
        [anon_sym_COMMA] = ACTIONS(307),
        [anon_sym_as] = ACTIONS(307),
        [anon_sym_COLON] = ACTIONS(307),
        [anon_sym_LPAREN] = ACTIONS(251),
        [anon_sym_STAR] = ACTIONS(925),
        [anon_sym_PLUS] = ACTIONS(307),
        [anon_sym_DASH] = ACTIONS(307),
        [anon_sym_SLASH] = ACTIONS(929),
        [anon_sym_STAR_STAR] = ACTIONS(931),
        [anon_sym_PIPE] = ACTIONS(307),
        [anon_sym_AMP] = ACTIONS(307),
        [anon_sym_CARET] = ACTIONS(307),
        [anon_sym_LT_LT] = ACTIONS(307),
        [anon_sym_GT_GT] = ACTIONS(307),
        [anon_sym_and] = ACTIONS(307),
        [anon_sym_or] = ACTIONS(307),
        [anon_sym_LBRACK] = ACTIONS(307),
        [sym_comment] = ACTIONS(79),
    },
    [467] = {
        [anon_sym_COMMA] = ACTIONS(307),
        [anon_sym_as] = ACTIONS(307),
        [anon_sym_COLON] = ACTIONS(307),
        [anon_sym_LPAREN] = ACTIONS(251),
        [anon_sym_STAR] = ACTIONS(925),
        [anon_sym_PLUS] = ACTIONS(927),
        [anon_sym_DASH] = ACTIONS(927),
        [anon_sym_SLASH] = ACTIONS(929),
        [anon_sym_STAR_STAR] = ACTIONS(931),
        [anon_sym_PIPE] = ACTIONS(307),
        [anon_sym_AMP] = ACTIONS(307),
        [anon_sym_CARET] = ACTIONS(307),
        [anon_sym_LT_LT] = ACTIONS(927),
        [anon_sym_GT_GT] = ACTIONS(927),
        [anon_sym_and] = ACTIONS(307),
        [anon_sym_or] = ACTIONS(307),
        [anon_sym_LBRACK] = ACTIONS(307),
        [sym_comment] = ACTIONS(79),
    },
    [468] = {
        [anon_sym_COMMA] = ACTIONS(307),
        [anon_sym_as] = ACTIONS(307),
        [anon_sym_COLON] = ACTIONS(307),
        [anon_sym_LPAREN] = ACTIONS(251),
        [anon_sym_STAR] = ACTIONS(309),
        [anon_sym_PLUS] = ACTIONS(307),
        [anon_sym_DASH] = ACTIONS(307),
        [anon_sym_SLASH] = ACTIONS(307),
        [anon_sym_STAR_STAR] = ACTIONS(931),
        [anon_sym_PIPE] = ACTIONS(307),
        [anon_sym_AMP] = ACTIONS(307),
        [anon_sym_CARET] = ACTIONS(307),
        [anon_sym_LT_LT] = ACTIONS(307),
        [anon_sym_GT_GT] = ACTIONS(307),
        [anon_sym_and] = ACTIONS(307),
        [anon_sym_or] = ACTIONS(307),
        [anon_sym_LBRACK] = ACTIONS(307),
        [sym_comment] = ACTIONS(79),
    },
    [469] = {
        [sym__expression] = STATE(275),
        [sym_binary_operator] = STATE(44),
        [sym_unary_operator] = STATE(44),
        [sym_subscript] = STATE(44),
        [sym_call] = STATE(44),
        [sym_list] = STATE(44),
        [sym_list_comprehension] = STATE(44),
        [sym_dictionary] = STATE(44),
        [sym_dictionary_comprehension] = STATE(44),
        [sym_set] = STATE(44),
        [sym_set_comprehension] = STATE(44),
        [anon_sym_not] = ACTIONS(939),
        [anon_sym_LBRACK] = ACTIONS(133),
        [anon_sym_LBRACE] = ACTIONS(135),
        [sym_number] = ACTIONS(137),
        [sym_identifier] = ACTIONS(139),
        [sym_comment] = ACTIONS(79),
    },
    [470] = {
        [anon_sym_COMMA] = ACTIONS(941),
        [anon_sym_COLON] = ACTIONS(941),
        [anon_sym_LPAREN] = ACTIONS(251),
        [anon_sym_STAR] = ACTIONS(943),
        [anon_sym_PLUS] = ACTIONS(945),
        [anon_sym_DASH] = ACTIONS(945),
        [anon_sym_SLASH] = ACTIONS(947),
        [anon_sym_STAR_STAR] = ACTIONS(949),
        [anon_sym_PIPE] = ACTIONS(951),
        [anon_sym_AMP] = ACTIONS(953),
        [anon_sym_CARET] = ACTIONS(955),
        [anon_sym_LT_LT] = ACTIONS(945),
        [anon_sym_GT_GT] = ACTIONS(945),
        [anon_sym_and] = ACTIONS(953),
        [anon_sym_or] = ACTIONS(951),
        [anon_sym_LBRACK] = ACTIONS(267),
        [sym_comment] = ACTIONS(79),
    },
    [471] = {
        [sym__expression] = STATE(481),
        [sym_binary_operator] = STATE(44),
        [sym_unary_operator] = STATE(44),
        [sym_subscript] = STATE(44),
        [sym_call] = STATE(44),
        [sym_list] = STATE(44),
        [sym_list_comprehension] = STATE(44),
        [sym_dictionary] = STATE(44),
        [sym_dictionary_comprehension] = STATE(44),
        [sym_set] = STATE(44),
        [sym_set_comprehension] = STATE(44),
        [anon_sym_not] = ACTIONS(939),
        [anon_sym_LBRACK] = ACTIONS(133),
        [anon_sym_LBRACE] = ACTIONS(135),
        [sym_number] = ACTIONS(137),
        [sym_identifier] = ACTIONS(139),
        [sym_comment] = ACTIONS(79),
    },
    [472] = {
        [sym__expression] = STATE(479),
        [sym_binary_operator] = STATE(44),
        [sym_unary_operator] = STATE(44),
        [sym_subscript] = STATE(44),
        [sym_call] = STATE(44),
        [sym_list] = STATE(44),
        [sym_list_comprehension] = STATE(44),
        [sym_dictionary] = STATE(44),
        [sym_dictionary_comprehension] = STATE(44),
        [sym_set] = STATE(44),
        [sym_set_comprehension] = STATE(44),
        [anon_sym_not] = ACTIONS(939),
        [anon_sym_LBRACK] = ACTIONS(133),
        [anon_sym_LBRACE] = ACTIONS(135),
        [sym_number] = ACTIONS(137),
        [sym_identifier] = ACTIONS(139),
        [sym_comment] = ACTIONS(79),
    },
    [473] = {
        [sym__expression] = STATE(76),
        [sym_binary_operator] = STATE(44),
        [sym_unary_operator] = STATE(44),
        [sym_subscript] = STATE(44),
        [sym_call] = STATE(44),
        [sym_list] = STATE(44),
        [sym_list_comprehension] = STATE(44),
        [sym_dictionary] = STATE(44),
        [sym_dictionary_comprehension] = STATE(44),
        [sym_set] = STATE(44),
        [sym_set_comprehension] = STATE(44),
        [anon_sym_not] = ACTIONS(939),
        [anon_sym_LBRACK] = ACTIONS(133),
        [anon_sym_LBRACE] = ACTIONS(135),
        [sym_number] = ACTIONS(137),
        [sym_identifier] = ACTIONS(139),
        [sym_comment] = ACTIONS(79),
    },
    [474] = {
        [sym__expression] = STATE(477),
        [sym_binary_operator] = STATE(44),
        [sym_unary_operator] = STATE(44),
        [sym_subscript] = STATE(44),
        [sym_call] = STATE(44),
        [sym_list] = STATE(44),
        [sym_list_comprehension] = STATE(44),
        [sym_dictionary] = STATE(44),
        [sym_dictionary_comprehension] = STATE(44),
        [sym_set] = STATE(44),
        [sym_set_comprehension] = STATE(44),
        [anon_sym_not] = ACTIONS(939),
        [anon_sym_LBRACK] = ACTIONS(133),
        [anon_sym_LBRACE] = ACTIONS(135),
        [sym_number] = ACTIONS(137),
        [sym_identifier] = ACTIONS(139),
        [sym_comment] = ACTIONS(79),
    },
    [475] = {
        [sym__expression] = STATE(478),
        [sym_binary_operator] = STATE(44),
        [sym_unary_operator] = STATE(44),
        [sym_subscript] = STATE(44),
        [sym_call] = STATE(44),
        [sym_list] = STATE(44),
        [sym_list_comprehension] = STATE(44),
        [sym_dictionary] = STATE(44),
        [sym_dictionary_comprehension] = STATE(44),
        [sym_set] = STATE(44),
        [sym_set_comprehension] = STATE(44),
        [anon_sym_not] = ACTIONS(939),
        [anon_sym_LBRACK] = ACTIONS(133),
        [anon_sym_LBRACE] = ACTIONS(135),
        [sym_number] = ACTIONS(137),
        [sym_identifier] = ACTIONS(139),
        [sym_comment] = ACTIONS(79),
    },
    [476] = {
        [sym__expression] = STATE(480),
        [sym_binary_operator] = STATE(44),
        [sym_unary_operator] = STATE(44),
        [sym_subscript] = STATE(44),
        [sym_call] = STATE(44),
        [sym_list] = STATE(44),
        [sym_list_comprehension] = STATE(44),
        [sym_dictionary] = STATE(44),
        [sym_dictionary_comprehension] = STATE(44),
        [sym_set] = STATE(44),
        [sym_set_comprehension] = STATE(44),
        [anon_sym_not] = ACTIONS(939),
        [anon_sym_LBRACK] = ACTIONS(133),
        [anon_sym_LBRACE] = ACTIONS(135),
        [sym_number] = ACTIONS(137),
        [sym_identifier] = ACTIONS(139),
        [sym_comment] = ACTIONS(79),
    },
    [477] = {
        [anon_sym_COMMA] = ACTIONS(307),
        [anon_sym_COLON] = ACTIONS(307),
        [anon_sym_LPAREN] = ACTIONS(251),
        [anon_sym_STAR] = ACTIONS(943),
        [anon_sym_PLUS] = ACTIONS(945),
        [anon_sym_DASH] = ACTIONS(945),
        [anon_sym_SLASH] = ACTIONS(947),
        [anon_sym_STAR_STAR] = ACTIONS(949),
        [anon_sym_PIPE] = ACTIONS(307),
        [anon_sym_AMP] = ACTIONS(953),
        [anon_sym_CARET] = ACTIONS(955),
        [anon_sym_LT_LT] = ACTIONS(945),
        [anon_sym_GT_GT] = ACTIONS(945),
        [anon_sym_and] = ACTIONS(953),
        [anon_sym_or] = ACTIONS(307),
        [anon_sym_LBRACK] = ACTIONS(307),
        [sym_comment] = ACTIONS(79),
    },
    [478] = {
        [anon_sym_COMMA] = ACTIONS(307),
        [anon_sym_COLON] = ACTIONS(307),
        [anon_sym_LPAREN] = ACTIONS(251),
        [anon_sym_STAR] = ACTIONS(943),
        [anon_sym_PLUS] = ACTIONS(945),
        [anon_sym_DASH] = ACTIONS(945),
        [anon_sym_SLASH] = ACTIONS(947),
        [anon_sym_STAR_STAR] = ACTIONS(949),
        [anon_sym_PIPE] = ACTIONS(307),
        [anon_sym_AMP] = ACTIONS(307),
        [anon_sym_CARET] = ACTIONS(955),
        [anon_sym_LT_LT] = ACTIONS(945),
        [anon_sym_GT_GT] = ACTIONS(945),
        [anon_sym_and] = ACTIONS(307),
        [anon_sym_or] = ACTIONS(307),
        [anon_sym_LBRACK] = ACTIONS(307),
        [sym_comment] = ACTIONS(79),
    },
    [479] = {
        [anon_sym_COMMA] = ACTIONS(307),
        [anon_sym_COLON] = ACTIONS(307),
        [anon_sym_LPAREN] = ACTIONS(251),
        [anon_sym_STAR] = ACTIONS(943),
        [anon_sym_PLUS] = ACTIONS(307),
        [anon_sym_DASH] = ACTIONS(307),
        [anon_sym_SLASH] = ACTIONS(947),
        [anon_sym_STAR_STAR] = ACTIONS(949),
        [anon_sym_PIPE] = ACTIONS(307),
        [anon_sym_AMP] = ACTIONS(307),
        [anon_sym_CARET] = ACTIONS(307),
        [anon_sym_LT_LT] = ACTIONS(307),
        [anon_sym_GT_GT] = ACTIONS(307),
        [anon_sym_and] = ACTIONS(307),
        [anon_sym_or] = ACTIONS(307),
        [anon_sym_LBRACK] = ACTIONS(307),
        [sym_comment] = ACTIONS(79),
    },
    [480] = {
        [anon_sym_COMMA] = ACTIONS(307),
        [anon_sym_COLON] = ACTIONS(307),
        [anon_sym_LPAREN] = ACTIONS(251),
        [anon_sym_STAR] = ACTIONS(943),
        [anon_sym_PLUS] = ACTIONS(945),
        [anon_sym_DASH] = ACTIONS(945),
        [anon_sym_SLASH] = ACTIONS(947),
        [anon_sym_STAR_STAR] = ACTIONS(949),
        [anon_sym_PIPE] = ACTIONS(307),
        [anon_sym_AMP] = ACTIONS(307),
        [anon_sym_CARET] = ACTIONS(307),
        [anon_sym_LT_LT] = ACTIONS(945),
        [anon_sym_GT_GT] = ACTIONS(945),
        [anon_sym_and] = ACTIONS(307),
        [anon_sym_or] = ACTIONS(307),
        [anon_sym_LBRACK] = ACTIONS(307),
        [sym_comment] = ACTIONS(79),
    },
    [481] = {
        [anon_sym_COMMA] = ACTIONS(307),
        [anon_sym_COLON] = ACTIONS(307),
        [anon_sym_LPAREN] = ACTIONS(251),
        [anon_sym_STAR] = ACTIONS(309),
        [anon_sym_PLUS] = ACTIONS(307),
        [anon_sym_DASH] = ACTIONS(307),
        [anon_sym_SLASH] = ACTIONS(307),
        [anon_sym_STAR_STAR] = ACTIONS(949),
        [anon_sym_PIPE] = ACTIONS(307),
        [anon_sym_AMP] = ACTIONS(307),
        [anon_sym_CARET] = ACTIONS(307),
        [anon_sym_LT_LT] = ACTIONS(307),
        [anon_sym_GT_GT] = ACTIONS(307),
        [anon_sym_and] = ACTIONS(307),
        [anon_sym_or] = ACTIONS(307),
        [anon_sym_LBRACK] = ACTIONS(307),
        [sym_comment] = ACTIONS(79),
    },
    [482] = {
        [sym_with_item] = STATE(490),
        [sym__expression] = STATE(456),
        [sym_binary_operator] = STATE(44),
        [sym_unary_operator] = STATE(44),
        [sym_subscript] = STATE(44),
        [sym_call] = STATE(44),
        [sym_list] = STATE(44),
        [sym_list_comprehension] = STATE(44),
        [sym_dictionary] = STATE(44),
        [sym_dictionary_comprehension] = STATE(44),
        [sym_set] = STATE(44),
        [sym_set_comprehension] = STATE(44),
        [anon_sym_not] = ACTIONS(145),
        [anon_sym_LBRACK] = ACTIONS(133),
        [anon_sym_LBRACE] = ACTIONS(135),
        [sym_number] = ACTIONS(137),
        [sym_identifier] = ACTIONS(139),
        [sym_comment] = ACTIONS(79),
    },
    [483] = {
        [sym__simple_statement] = STATE(416),
        [sym_import_statement] = STATE(6),
        [sym_print_statement] = STATE(6),
        [sym_expression_statement] = STATE(6),
        [sym_return_statement] = STATE(6),
        [sym_delete_statement] = STATE(6),
        [sym__suite] = STATE(489),
        [sym__expression] = STATE(25),
        [sym_binary_operator] = STATE(18),
        [sym_unary_operator] = STATE(18),
        [sym_subscript] = STATE(18),
        [sym_call] = STATE(18),
        [sym_list] = STATE(18),
        [sym_list_comprehension] = STATE(18),
        [sym_dictionary] = STATE(18),
        [sym_dictionary_comprehension] = STATE(18),
        [sym_set] = STATE(18),
        [sym_set_comprehension] = STATE(18),
        [anon_sym_import] = ACTIONS(89),
        [anon_sym_print] = ACTIONS(91),
        [anon_sym_return] = ACTIONS(93),
        [anon_sym_del] = ACTIONS(95),
        [sym_pass_statement] = ACTIONS(97),
        [sym_break_statement] = ACTIONS(97),
        [sym_continue_statement] = ACTIONS(97),
        [anon_sym_not] = ACTIONS(115),
        [anon_sym_LBRACK] = ACTIONS(117),
        [anon_sym_LBRACE] = ACTIONS(119),
        [sym_number] = ACTIONS(121),
        [sym_identifier] = ACTIONS(123),
        [sym_comment] = ACTIONS(79),
        [sym__indent] = ACTIONS(833),
    },
    [484] = {
        [anon_sym_COMMA] = ACTIONS(957),
        [anon_sym_COLON] = ACTIONS(959),
        [sym_comment] = ACTIONS(79),
    },
    [485] = {
        [sym_with_item] = STATE(488),
        [sym__expression] = STATE(456),
        [sym_binary_operator] = STATE(44),
        [sym_unary_operator] = STATE(44),
        [sym_subscript] = STATE(44),
        [sym_call] = STATE(44),
        [sym_list] = STATE(44),
        [sym_list_comprehension] = STATE(44),
        [sym_dictionary] = STATE(44),
        [sym_dictionary_comprehension] = STATE(44),
        [sym_set] = STATE(44),
        [sym_set_comprehension] = STATE(44),
        [anon_sym_not] = ACTIONS(145),
        [anon_sym_LBRACK] = ACTIONS(133),
        [anon_sym_LBRACE] = ACTIONS(135),
        [sym_number] = ACTIONS(137),
        [sym_identifier] = ACTIONS(139),
        [sym_comment] = ACTIONS(79),
    },
    [486] = {
        [sym__simple_statement] = STATE(416),
        [sym_import_statement] = STATE(6),
        [sym_print_statement] = STATE(6),
        [sym_expression_statement] = STATE(6),
        [sym_return_statement] = STATE(6),
        [sym_delete_statement] = STATE(6),
        [sym__suite] = STATE(487),
        [sym__expression] = STATE(25),
        [sym_binary_operator] = STATE(18),
        [sym_unary_operator] = STATE(18),
        [sym_subscript] = STATE(18),
        [sym_call] = STATE(18),
        [sym_list] = STATE(18),
        [sym_list_comprehension] = STATE(18),
        [sym_dictionary] = STATE(18),
        [sym_dictionary_comprehension] = STATE(18),
        [sym_set] = STATE(18),
        [sym_set_comprehension] = STATE(18),
        [anon_sym_import] = ACTIONS(89),
        [anon_sym_print] = ACTIONS(91),
        [anon_sym_return] = ACTIONS(93),
        [anon_sym_del] = ACTIONS(95),
        [sym_pass_statement] = ACTIONS(97),
        [sym_break_statement] = ACTIONS(97),
        [sym_continue_statement] = ACTIONS(97),
        [anon_sym_not] = ACTIONS(115),
        [anon_sym_LBRACK] = ACTIONS(117),
        [anon_sym_LBRACE] = ACTIONS(119),
        [sym_number] = ACTIONS(121),
        [sym_identifier] = ACTIONS(123),
        [sym_comment] = ACTIONS(79),
        [sym__indent] = ACTIONS(833),
    },
    [487] = {
        [anon_sym_import] = ACTIONS(961),
        [anon_sym_print] = ACTIONS(961),
        [anon_sym_return] = ACTIONS(961),
        [anon_sym_del] = ACTIONS(961),
        [sym_pass_statement] = ACTIONS(961),
        [sym_break_statement] = ACTIONS(961),
        [sym_continue_statement] = ACTIONS(961),
        [anon_sym_if] = ACTIONS(961),
        [anon_sym_for] = ACTIONS(961),
        [anon_sym_while] = ACTIONS(961),
        [anon_sym_try] = ACTIONS(961),
        [anon_sym_with] = ACTIONS(961),
        [anon_sym_def] = ACTIONS(961),
        [anon_sym_class] = ACTIONS(961),
        [anon_sym_AT] = ACTIONS(963),
        [anon_sym_not] = ACTIONS(961),
        [anon_sym_LBRACK] = ACTIONS(963),
        [anon_sym_LBRACE] = ACTIONS(963),
        [sym_number] = ACTIONS(961),
        [sym_identifier] = ACTIONS(965),
        [sym_comment] = ACTIONS(79),
        [sym__dedent] = ACTIONS(963),
    },
    [488] = {
        [anon_sym_COMMA] = ACTIONS(967),
        [anon_sym_COLON] = ACTIONS(967),
        [sym_comment] = ACTIONS(79),
    },
    [489] = {
        [anon_sym_import] = ACTIONS(969),
        [anon_sym_print] = ACTIONS(969),
        [anon_sym_return] = ACTIONS(969),
        [anon_sym_del] = ACTIONS(969),
        [sym_pass_statement] = ACTIONS(969),
        [sym_break_statement] = ACTIONS(969),
        [sym_continue_statement] = ACTIONS(969),
        [anon_sym_if] = ACTIONS(969),
        [anon_sym_for] = ACTIONS(969),
        [anon_sym_while] = ACTIONS(969),
        [anon_sym_try] = ACTIONS(969),
        [anon_sym_with] = ACTIONS(969),
        [anon_sym_def] = ACTIONS(969),
        [anon_sym_class] = ACTIONS(969),
        [anon_sym_AT] = ACTIONS(971),
        [anon_sym_not] = ACTIONS(969),
        [anon_sym_LBRACK] = ACTIONS(971),
        [anon_sym_LBRACE] = ACTIONS(971),
        [sym_number] = ACTIONS(969),
        [sym_identifier] = ACTIONS(973),
        [sym_comment] = ACTIONS(79),
        [sym__dedent] = ACTIONS(971),
    },
    [490] = {
        [anon_sym_COMMA] = ACTIONS(975),
        [anon_sym_COLON] = ACTIONS(975),
        [sym_comment] = ACTIONS(79),
    },
    [491] = {
        [sym__simple_statement] = STATE(493),
        [sym_import_statement] = STATE(6),
        [sym_print_statement] = STATE(6),
        [sym_expression_statement] = STATE(6),
        [sym_return_statement] = STATE(6),
        [sym_delete_statement] = STATE(6),
        [sym__suite] = STATE(494),
        [sym__expression] = STATE(25),
        [sym_binary_operator] = STATE(18),
        [sym_unary_operator] = STATE(18),
        [sym_subscript] = STATE(18),
        [sym_call] = STATE(18),
        [sym_list] = STATE(18),
        [sym_list_comprehension] = STATE(18),
        [sym_dictionary] = STATE(18),
        [sym_dictionary_comprehension] = STATE(18),
        [sym_set] = STATE(18),
        [sym_set_comprehension] = STATE(18),
        [anon_sym_import] = ACTIONS(89),
        [anon_sym_print] = ACTIONS(91),
        [anon_sym_return] = ACTIONS(93),
        [anon_sym_del] = ACTIONS(95),
        [sym_pass_statement] = ACTIONS(97),
        [sym_break_statement] = ACTIONS(97),
        [sym_continue_statement] = ACTIONS(97),
        [anon_sym_not] = ACTIONS(115),
        [anon_sym_LBRACK] = ACTIONS(117),
        [anon_sym_LBRACE] = ACTIONS(119),
        [sym_number] = ACTIONS(121),
        [sym_identifier] = ACTIONS(123),
        [sym_comment] = ACTIONS(79),
        [sym__indent] = ACTIONS(977),
    },
    [492] = {
        [sym__statement] = STATE(399),
        [sym__simple_statement] = STATE(400),
        [sym_import_statement] = STATE(6),
        [sym_print_statement] = STATE(6),
        [sym_expression_statement] = STATE(6),
        [sym_return_statement] = STATE(6),
        [sym_delete_statement] = STATE(6),
        [sym__compound_statement] = STATE(401),
        [sym_if_statement] = STATE(402),
        [sym_for_statement] = STATE(402),
        [sym_while_statement] = STATE(402),
        [sym_try_statement] = STATE(402),
        [sym_with_statement] = STATE(402),
        [sym_function_definition] = STATE(402),
        [sym_class_definition] = STATE(402),
        [sym_decorated_definition] = STATE(402),
        [sym_decorator] = STATE(24),
        [sym__expression] = STATE(25),
        [sym_binary_operator] = STATE(18),
        [sym_unary_operator] = STATE(18),
        [sym_subscript] = STATE(18),
        [sym_call] = STATE(18),
        [sym_list] = STATE(18),
        [sym_list_comprehension] = STATE(18),
        [sym_dictionary] = STATE(18),
        [sym_dictionary_comprehension] = STATE(18),
        [sym_set] = STATE(18),
        [sym_set_comprehension] = STATE(18),
        [aux_sym_module_repeat1] = STATE(517),
        [aux_sym_decorated_definition_repeat1] = STATE(404),
        [anon_sym_import] = ACTIONS(89),
        [anon_sym_print] = ACTIONS(91),
        [anon_sym_return] = ACTIONS(93),
        [anon_sym_del] = ACTIONS(95),
        [sym_pass_statement] = ACTIONS(97),
        [sym_break_statement] = ACTIONS(97),
        [sym_continue_statement] = ACTIONS(97),
        [anon_sym_if] = ACTIONS(781),
        [anon_sym_for] = ACTIONS(783),
        [anon_sym_while] = ACTIONS(785),
        [anon_sym_try] = ACTIONS(787),
        [anon_sym_with] = ACTIONS(789),
        [anon_sym_def] = ACTIONS(791),
        [anon_sym_class] = ACTIONS(793),
        [anon_sym_AT] = ACTIONS(113),
        [anon_sym_not] = ACTIONS(115),
        [anon_sym_LBRACK] = ACTIONS(117),
        [anon_sym_LBRACE] = ACTIONS(119),
        [sym_number] = ACTIONS(121),
        [sym_identifier] = ACTIONS(123),
        [sym_comment] = ACTIONS(79),
        [sym__dedent] = ACTIONS(979),
    },
    [493] = {
        [sym_comment] = ACTIONS(79),
        [sym__newline] = ACTIONS(979),
    },
    [494] = {
        [sym_except_clause] = STATE(497),
        [sym_finally_clause] = STATE(498),
        [aux_sym_try_statement_repeat1] = STATE(499),
        [anon_sym_except] = ACTIONS(981),
        [anon_sym_finally] = ACTIONS(983),
        [sym_comment] = ACTIONS(79),
    },
    [495] = {
        [sym__expression] = STATE(509),
        [sym_binary_operator] = STATE(44),
        [sym_unary_operator] = STATE(44),
        [sym_subscript] = STATE(44),
        [sym_call] = STATE(44),
        [sym_list] = STATE(44),
        [sym_list_comprehension] = STATE(44),
        [sym_dictionary] = STATE(44),
        [sym_dictionary_comprehension] = STATE(44),
        [sym_set] = STATE(44),
        [sym_set_comprehension] = STATE(44),
        [anon_sym_not] = ACTIONS(145),
        [anon_sym_LBRACK] = ACTIONS(133),
        [anon_sym_LBRACE] = ACTIONS(135),
        [sym_number] = ACTIONS(137),
        [sym_identifier] = ACTIONS(139),
        [sym_comment] = ACTIONS(79),
    },
    [496] = {
        [anon_sym_COLON] = ACTIONS(985),
        [sym_comment] = ACTIONS(79),
    },
    [497] = {
        [anon_sym_import] = ACTIONS(987),
        [anon_sym_print] = ACTIONS(987),
        [anon_sym_return] = ACTIONS(987),
        [anon_sym_del] = ACTIONS(987),
        [sym_pass_statement] = ACTIONS(987),
        [sym_break_statement] = ACTIONS(987),
        [sym_continue_statement] = ACTIONS(987),
        [anon_sym_if] = ACTIONS(987),
        [anon_sym_else] = ACTIONS(987),
        [anon_sym_for] = ACTIONS(987),
        [anon_sym_while] = ACTIONS(987),
        [anon_sym_try] = ACTIONS(987),
        [anon_sym_except] = ACTIONS(987),
        [anon_sym_finally] = ACTIONS(987),
        [anon_sym_with] = ACTIONS(987),
        [anon_sym_def] = ACTIONS(987),
        [anon_sym_class] = ACTIONS(987),
        [anon_sym_AT] = ACTIONS(989),
        [anon_sym_not] = ACTIONS(987),
        [anon_sym_LBRACK] = ACTIONS(989),
        [anon_sym_LBRACE] = ACTIONS(989),
        [sym_number] = ACTIONS(987),
        [sym_identifier] = ACTIONS(991),
        [sym_comment] = ACTIONS(79),
        [sym__dedent] = ACTIONS(989),
    },
    [498] = {
        [anon_sym_import] = ACTIONS(993),
        [anon_sym_print] = ACTIONS(993),
        [anon_sym_return] = ACTIONS(993),
        [anon_sym_del] = ACTIONS(993),
        [sym_pass_statement] = ACTIONS(993),
        [sym_break_statement] = ACTIONS(993),
        [sym_continue_statement] = ACTIONS(993),
        [anon_sym_if] = ACTIONS(993),
        [anon_sym_for] = ACTIONS(993),
        [anon_sym_while] = ACTIONS(993),
        [anon_sym_try] = ACTIONS(993),
        [anon_sym_with] = ACTIONS(993),
        [anon_sym_def] = ACTIONS(993),
        [anon_sym_class] = ACTIONS(993),
        [anon_sym_AT] = ACTIONS(995),
        [anon_sym_not] = ACTIONS(993),
        [anon_sym_LBRACK] = ACTIONS(995),
        [anon_sym_LBRACE] = ACTIONS(995),
        [sym_number] = ACTIONS(993),
        [sym_identifier] = ACTIONS(997),
        [sym_comment] = ACTIONS(79),
        [sym__dedent] = ACTIONS(995),
    },
    [499] = {
        [sym_else_clause] = STATE(501),
        [sym_except_clause] = STATE(502),
        [sym_finally_clause] = STATE(503),
        [anon_sym_import] = ACTIONS(993),
        [anon_sym_print] = ACTIONS(993),
        [anon_sym_return] = ACTIONS(993),
        [anon_sym_del] = ACTIONS(993),
        [sym_pass_statement] = ACTIONS(993),
        [sym_break_statement] = ACTIONS(993),
        [sym_continue_statement] = ACTIONS(993),
        [anon_sym_if] = ACTIONS(993),
        [anon_sym_else] = ACTIONS(999),
        [anon_sym_for] = ACTIONS(993),
        [anon_sym_while] = ACTIONS(993),
        [anon_sym_try] = ACTIONS(993),
        [anon_sym_except] = ACTIONS(1001),
        [anon_sym_finally] = ACTIONS(1003),
        [anon_sym_with] = ACTIONS(993),
        [anon_sym_def] = ACTIONS(993),
        [anon_sym_class] = ACTIONS(993),
        [anon_sym_AT] = ACTIONS(995),
        [anon_sym_not] = ACTIONS(993),
        [anon_sym_LBRACK] = ACTIONS(995),
        [anon_sym_LBRACE] = ACTIONS(995),
        [sym_number] = ACTIONS(993),
        [sym_identifier] = ACTIONS(997),
        [sym_comment] = ACTIONS(79),
        [sym__dedent] = ACTIONS(995),
    },
    [500] = {
        [anon_sym_COLON] = ACTIONS(1005),
        [sym_comment] = ACTIONS(79),
    },
    [501] = {
        [sym_finally_clause] = STATE(504),
        [anon_sym_import] = ACTIONS(1007),
        [anon_sym_print] = ACTIONS(1007),
        [anon_sym_return] = ACTIONS(1007),
        [anon_sym_del] = ACTIONS(1007),
        [sym_pass_statement] = ACTIONS(1007),
        [sym_break_statement] = ACTIONS(1007),
        [sym_continue_statement] = ACTIONS(1007),
        [anon_sym_if] = ACTIONS(1007),
        [anon_sym_for] = ACTIONS(1007),
        [anon_sym_while] = ACTIONS(1007),
        [anon_sym_try] = ACTIONS(1007),
        [anon_sym_finally] = ACTIONS(1003),
        [anon_sym_with] = ACTIONS(1007),
        [anon_sym_def] = ACTIONS(1007),
        [anon_sym_class] = ACTIONS(1007),
        [anon_sym_AT] = ACTIONS(1009),
        [anon_sym_not] = ACTIONS(1007),
        [anon_sym_LBRACK] = ACTIONS(1009),
        [anon_sym_LBRACE] = ACTIONS(1009),
        [sym_number] = ACTIONS(1007),
        [sym_identifier] = ACTIONS(1011),
        [sym_comment] = ACTIONS(79),
        [sym__dedent] = ACTIONS(1009),
    },
    [502] = {
        [anon_sym_import] = ACTIONS(1013),
        [anon_sym_print] = ACTIONS(1013),
        [anon_sym_return] = ACTIONS(1013),
        [anon_sym_del] = ACTIONS(1013),
        [sym_pass_statement] = ACTIONS(1013),
        [sym_break_statement] = ACTIONS(1013),
        [sym_continue_statement] = ACTIONS(1013),
        [anon_sym_if] = ACTIONS(1013),
        [anon_sym_else] = ACTIONS(1013),
        [anon_sym_for] = ACTIONS(1013),
        [anon_sym_while] = ACTIONS(1013),
        [anon_sym_try] = ACTIONS(1013),
        [anon_sym_except] = ACTIONS(1013),
        [anon_sym_finally] = ACTIONS(1013),
        [anon_sym_with] = ACTIONS(1013),
        [anon_sym_def] = ACTIONS(1013),
        [anon_sym_class] = ACTIONS(1013),
        [anon_sym_AT] = ACTIONS(1015),
        [anon_sym_not] = ACTIONS(1013),
        [anon_sym_LBRACK] = ACTIONS(1015),
        [anon_sym_LBRACE] = ACTIONS(1015),
        [sym_number] = ACTIONS(1013),
        [sym_identifier] = ACTIONS(1017),
        [sym_comment] = ACTIONS(79),
        [sym__dedent] = ACTIONS(1015),
    },
    [503] = {
        [anon_sym_import] = ACTIONS(1007),
        [anon_sym_print] = ACTIONS(1007),
        [anon_sym_return] = ACTIONS(1007),
        [anon_sym_del] = ACTIONS(1007),
        [sym_pass_statement] = ACTIONS(1007),
        [sym_break_statement] = ACTIONS(1007),
        [sym_continue_statement] = ACTIONS(1007),
        [anon_sym_if] = ACTIONS(1007),
        [anon_sym_for] = ACTIONS(1007),
        [anon_sym_while] = ACTIONS(1007),
        [anon_sym_try] = ACTIONS(1007),
        [anon_sym_with] = ACTIONS(1007),
        [anon_sym_def] = ACTIONS(1007),
        [anon_sym_class] = ACTIONS(1007),
        [anon_sym_AT] = ACTIONS(1009),
        [anon_sym_not] = ACTIONS(1007),
        [anon_sym_LBRACK] = ACTIONS(1009),
        [anon_sym_LBRACE] = ACTIONS(1009),
        [sym_number] = ACTIONS(1007),
        [sym_identifier] = ACTIONS(1011),
        [sym_comment] = ACTIONS(79),
        [sym__dedent] = ACTIONS(1009),
    },
    [504] = {
        [anon_sym_import] = ACTIONS(1019),
        [anon_sym_print] = ACTIONS(1019),
        [anon_sym_return] = ACTIONS(1019),
        [anon_sym_del] = ACTIONS(1019),
        [sym_pass_statement] = ACTIONS(1019),
        [sym_break_statement] = ACTIONS(1019),
        [sym_continue_statement] = ACTIONS(1019),
        [anon_sym_if] = ACTIONS(1019),
        [anon_sym_for] = ACTIONS(1019),
        [anon_sym_while] = ACTIONS(1019),
        [anon_sym_try] = ACTIONS(1019),
        [anon_sym_with] = ACTIONS(1019),
        [anon_sym_def] = ACTIONS(1019),
        [anon_sym_class] = ACTIONS(1019),
        [anon_sym_AT] = ACTIONS(1021),
        [anon_sym_not] = ACTIONS(1019),
        [anon_sym_LBRACK] = ACTIONS(1021),
        [anon_sym_LBRACE] = ACTIONS(1021),
        [sym_number] = ACTIONS(1019),
        [sym_identifier] = ACTIONS(1023),
        [sym_comment] = ACTIONS(79),
        [sym__dedent] = ACTIONS(1021),
    },
    [505] = {
        [sym__simple_statement] = STATE(416),
        [sym_import_statement] = STATE(6),
        [sym_print_statement] = STATE(6),
        [sym_expression_statement] = STATE(6),
        [sym_return_statement] = STATE(6),
        [sym_delete_statement] = STATE(6),
        [sym__suite] = STATE(506),
        [sym__expression] = STATE(25),
        [sym_binary_operator] = STATE(18),
        [sym_unary_operator] = STATE(18),
        [sym_subscript] = STATE(18),
        [sym_call] = STATE(18),
        [sym_list] = STATE(18),
        [sym_list_comprehension] = STATE(18),
        [sym_dictionary] = STATE(18),
        [sym_dictionary_comprehension] = STATE(18),
        [sym_set] = STATE(18),
        [sym_set_comprehension] = STATE(18),
        [anon_sym_import] = ACTIONS(89),
        [anon_sym_print] = ACTIONS(91),
        [anon_sym_return] = ACTIONS(93),
        [anon_sym_del] = ACTIONS(95),
        [sym_pass_statement] = ACTIONS(97),
        [sym_break_statement] = ACTIONS(97),
        [sym_continue_statement] = ACTIONS(97),
        [anon_sym_not] = ACTIONS(115),
        [anon_sym_LBRACK] = ACTIONS(117),
        [anon_sym_LBRACE] = ACTIONS(119),
        [sym_number] = ACTIONS(121),
        [sym_identifier] = ACTIONS(123),
        [sym_comment] = ACTIONS(79),
        [sym__indent] = ACTIONS(833),
    },
    [506] = {
        [anon_sym_import] = ACTIONS(1025),
        [anon_sym_print] = ACTIONS(1025),
        [anon_sym_return] = ACTIONS(1025),
        [anon_sym_del] = ACTIONS(1025),
        [sym_pass_statement] = ACTIONS(1025),
        [sym_break_statement] = ACTIONS(1025),
        [sym_continue_statement] = ACTIONS(1025),
        [anon_sym_if] = ACTIONS(1025),
        [anon_sym_for] = ACTIONS(1025),
        [anon_sym_while] = ACTIONS(1025),
        [anon_sym_try] = ACTIONS(1025),
        [anon_sym_finally] = ACTIONS(1025),
        [anon_sym_with] = ACTIONS(1025),
        [anon_sym_def] = ACTIONS(1025),
        [anon_sym_class] = ACTIONS(1025),
        [anon_sym_AT] = ACTIONS(1027),
        [anon_sym_not] = ACTIONS(1025),
        [anon_sym_LBRACK] = ACTIONS(1027),
        [anon_sym_LBRACE] = ACTIONS(1027),
        [sym_number] = ACTIONS(1025),
        [sym_identifier] = ACTIONS(1029),
        [sym_comment] = ACTIONS(79),
        [sym__dedent] = ACTIONS(1027),
    },
    [507] = {
        [sym__simple_statement] = STATE(416),
        [sym_import_statement] = STATE(6),
        [sym_print_statement] = STATE(6),
        [sym_expression_statement] = STATE(6),
        [sym_return_statement] = STATE(6),
        [sym_delete_statement] = STATE(6),
        [sym__suite] = STATE(508),
        [sym__expression] = STATE(25),
        [sym_binary_operator] = STATE(18),
        [sym_unary_operator] = STATE(18),
        [sym_subscript] = STATE(18),
        [sym_call] = STATE(18),
        [sym_list] = STATE(18),
        [sym_list_comprehension] = STATE(18),
        [sym_dictionary] = STATE(18),
        [sym_dictionary_comprehension] = STATE(18),
        [sym_set] = STATE(18),
        [sym_set_comprehension] = STATE(18),
        [anon_sym_import] = ACTIONS(89),
        [anon_sym_print] = ACTIONS(91),
        [anon_sym_return] = ACTIONS(93),
        [anon_sym_del] = ACTIONS(95),
        [sym_pass_statement] = ACTIONS(97),
        [sym_break_statement] = ACTIONS(97),
        [sym_continue_statement] = ACTIONS(97),
        [anon_sym_not] = ACTIONS(115),
        [anon_sym_LBRACK] = ACTIONS(117),
        [anon_sym_LBRACE] = ACTIONS(119),
        [sym_number] = ACTIONS(121),
        [sym_identifier] = ACTIONS(123),
        [sym_comment] = ACTIONS(79),
        [sym__indent] = ACTIONS(833),
    },
    [508] = {
        [anon_sym_import] = ACTIONS(1031),
        [anon_sym_print] = ACTIONS(1031),
        [anon_sym_return] = ACTIONS(1031),
        [anon_sym_del] = ACTIONS(1031),
        [sym_pass_statement] = ACTIONS(1031),
        [sym_break_statement] = ACTIONS(1031),
        [sym_continue_statement] = ACTIONS(1031),
        [anon_sym_if] = ACTIONS(1031),
        [anon_sym_for] = ACTIONS(1031),
        [anon_sym_while] = ACTIONS(1031),
        [anon_sym_try] = ACTIONS(1031),
        [anon_sym_with] = ACTIONS(1031),
        [anon_sym_def] = ACTIONS(1031),
        [anon_sym_class] = ACTIONS(1031),
        [anon_sym_AT] = ACTIONS(1033),
        [anon_sym_not] = ACTIONS(1031),
        [anon_sym_LBRACK] = ACTIONS(1033),
        [anon_sym_LBRACE] = ACTIONS(1033),
        [sym_number] = ACTIONS(1031),
        [sym_identifier] = ACTIONS(1035),
        [sym_comment] = ACTIONS(79),
        [sym__dedent] = ACTIONS(1033),
    },
    [509] = {
        [anon_sym_COMMA] = ACTIONS(1037),
        [anon_sym_as] = ACTIONS(1037),
        [anon_sym_COLON] = ACTIONS(1039),
        [anon_sym_LPAREN] = ACTIONS(251),
        [anon_sym_STAR] = ACTIONS(925),
        [anon_sym_PLUS] = ACTIONS(927),
        [anon_sym_DASH] = ACTIONS(927),
        [anon_sym_SLASH] = ACTIONS(929),
        [anon_sym_STAR_STAR] = ACTIONS(931),
        [anon_sym_PIPE] = ACTIONS(933),
        [anon_sym_AMP] = ACTIONS(935),
        [anon_sym_CARET] = ACTIONS(937),
        [anon_sym_LT_LT] = ACTIONS(927),
        [anon_sym_GT_GT] = ACTIONS(927),
        [anon_sym_and] = ACTIONS(935),
        [anon_sym_or] = ACTIONS(933),
        [anon_sym_LBRACK] = ACTIONS(267),
        [sym_comment] = ACTIONS(79),
    },
    [510] = {
        [sym__expression] = STATE(513),
        [sym_binary_operator] = STATE(44),
        [sym_unary_operator] = STATE(44),
        [sym_subscript] = STATE(44),
        [sym_call] = STATE(44),
        [sym_list] = STATE(44),
        [sym_list_comprehension] = STATE(44),
        [sym_dictionary] = STATE(44),
        [sym_dictionary_comprehension] = STATE(44),
        [sym_set] = STATE(44),
        [sym_set_comprehension] = STATE(44),
        [anon_sym_not] = ACTIONS(131),
        [anon_sym_LBRACK] = ACTIONS(133),
        [anon_sym_LBRACE] = ACTIONS(135),
        [sym_number] = ACTIONS(137),
        [sym_identifier] = ACTIONS(139),
        [sym_comment] = ACTIONS(79),
    },
    [511] = {
        [sym__simple_statement] = STATE(416),
        [sym_import_statement] = STATE(6),
        [sym_print_statement] = STATE(6),
        [sym_expression_statement] = STATE(6),
        [sym_return_statement] = STATE(6),
        [sym_delete_statement] = STATE(6),
        [sym__suite] = STATE(512),
        [sym__expression] = STATE(25),
        [sym_binary_operator] = STATE(18),
        [sym_unary_operator] = STATE(18),
        [sym_subscript] = STATE(18),
        [sym_call] = STATE(18),
        [sym_list] = STATE(18),
        [sym_list_comprehension] = STATE(18),
        [sym_dictionary] = STATE(18),
        [sym_dictionary_comprehension] = STATE(18),
        [sym_set] = STATE(18),
        [sym_set_comprehension] = STATE(18),
        [anon_sym_import] = ACTIONS(89),
        [anon_sym_print] = ACTIONS(91),
        [anon_sym_return] = ACTIONS(93),
        [anon_sym_del] = ACTIONS(95),
        [sym_pass_statement] = ACTIONS(97),
        [sym_break_statement] = ACTIONS(97),
        [sym_continue_statement] = ACTIONS(97),
        [anon_sym_not] = ACTIONS(115),
        [anon_sym_LBRACK] = ACTIONS(117),
        [anon_sym_LBRACE] = ACTIONS(119),
        [sym_number] = ACTIONS(121),
        [sym_identifier] = ACTIONS(123),
        [sym_comment] = ACTIONS(79),
        [sym__indent] = ACTIONS(833),
    },
    [512] = {
        [anon_sym_import] = ACTIONS(1041),
        [anon_sym_print] = ACTIONS(1041),
        [anon_sym_return] = ACTIONS(1041),
        [anon_sym_del] = ACTIONS(1041),
        [sym_pass_statement] = ACTIONS(1041),
        [sym_break_statement] = ACTIONS(1041),
        [sym_continue_statement] = ACTIONS(1041),
        [anon_sym_if] = ACTIONS(1041),
        [anon_sym_else] = ACTIONS(1041),
        [anon_sym_for] = ACTIONS(1041),
        [anon_sym_while] = ACTIONS(1041),
        [anon_sym_try] = ACTIONS(1041),
        [anon_sym_except] = ACTIONS(1041),
        [anon_sym_finally] = ACTIONS(1041),
        [anon_sym_with] = ACTIONS(1041),
        [anon_sym_def] = ACTIONS(1041),
        [anon_sym_class] = ACTIONS(1041),
        [anon_sym_AT] = ACTIONS(1043),
        [anon_sym_not] = ACTIONS(1041),
        [anon_sym_LBRACK] = ACTIONS(1043),
        [anon_sym_LBRACE] = ACTIONS(1043),
        [sym_number] = ACTIONS(1041),
        [sym_identifier] = ACTIONS(1045),
        [sym_comment] = ACTIONS(79),
        [sym__dedent] = ACTIONS(1043),
    },
    [513] = {
        [anon_sym_COLON] = ACTIONS(1047),
        [anon_sym_LPAREN] = ACTIONS(251),
        [anon_sym_STAR] = ACTIONS(441),
        [anon_sym_PLUS] = ACTIONS(443),
        [anon_sym_DASH] = ACTIONS(443),
        [anon_sym_SLASH] = ACTIONS(445),
        [anon_sym_STAR_STAR] = ACTIONS(447),
        [anon_sym_PIPE] = ACTIONS(449),
        [anon_sym_AMP] = ACTIONS(451),
        [anon_sym_CARET] = ACTIONS(453),
        [anon_sym_LT_LT] = ACTIONS(443),
        [anon_sym_GT_GT] = ACTIONS(443),
        [anon_sym_and] = ACTIONS(451),
        [anon_sym_or] = ACTIONS(449),
        [anon_sym_LBRACK] = ACTIONS(267),
        [sym_comment] = ACTIONS(79),
    },
    [514] = {
        [sym__simple_statement] = STATE(416),
        [sym_import_statement] = STATE(6),
        [sym_print_statement] = STATE(6),
        [sym_expression_statement] = STATE(6),
        [sym_return_statement] = STATE(6),
        [sym_delete_statement] = STATE(6),
        [sym__suite] = STATE(515),
        [sym__expression] = STATE(25),
        [sym_binary_operator] = STATE(18),
        [sym_unary_operator] = STATE(18),
        [sym_subscript] = STATE(18),
        [sym_call] = STATE(18),
        [sym_list] = STATE(18),
        [sym_list_comprehension] = STATE(18),
        [sym_dictionary] = STATE(18),
        [sym_dictionary_comprehension] = STATE(18),
        [sym_set] = STATE(18),
        [sym_set_comprehension] = STATE(18),
        [anon_sym_import] = ACTIONS(89),
        [anon_sym_print] = ACTIONS(91),
        [anon_sym_return] = ACTIONS(93),
        [anon_sym_del] = ACTIONS(95),
        [sym_pass_statement] = ACTIONS(97),
        [sym_break_statement] = ACTIONS(97),
        [sym_continue_statement] = ACTIONS(97),
        [anon_sym_not] = ACTIONS(115),
        [anon_sym_LBRACK] = ACTIONS(117),
        [anon_sym_LBRACE] = ACTIONS(119),
        [sym_number] = ACTIONS(121),
        [sym_identifier] = ACTIONS(123),
        [sym_comment] = ACTIONS(79),
        [sym__indent] = ACTIONS(833),
    },
    [515] = {
        [anon_sym_import] = ACTIONS(1049),
        [anon_sym_print] = ACTIONS(1049),
        [anon_sym_return] = ACTIONS(1049),
        [anon_sym_del] = ACTIONS(1049),
        [sym_pass_statement] = ACTIONS(1049),
        [sym_break_statement] = ACTIONS(1049),
        [sym_continue_statement] = ACTIONS(1049),
        [anon_sym_if] = ACTIONS(1049),
        [anon_sym_else] = ACTIONS(1049),
        [anon_sym_for] = ACTIONS(1049),
        [anon_sym_while] = ACTIONS(1049),
        [anon_sym_try] = ACTIONS(1049),
        [anon_sym_except] = ACTIONS(1049),
        [anon_sym_finally] = ACTIONS(1049),
        [anon_sym_with] = ACTIONS(1049),
        [anon_sym_def] = ACTIONS(1049),
        [anon_sym_class] = ACTIONS(1049),
        [anon_sym_AT] = ACTIONS(1051),
        [anon_sym_not] = ACTIONS(1049),
        [anon_sym_LBRACK] = ACTIONS(1051),
        [anon_sym_LBRACE] = ACTIONS(1051),
        [sym_number] = ACTIONS(1049),
        [sym_identifier] = ACTIONS(1053),
        [sym_comment] = ACTIONS(79),
        [sym__dedent] = ACTIONS(1051),
    },
    [516] = {
        [anon_sym_except] = ACTIONS(803),
        [anon_sym_finally] = ACTIONS(803),
        [sym_comment] = ACTIONS(79),
    },
    [517] = {
        [sym__statement] = STATE(407),
        [sym__simple_statement] = STATE(400),
        [sym_import_statement] = STATE(6),
        [sym_print_statement] = STATE(6),
        [sym_expression_statement] = STATE(6),
        [sym_return_statement] = STATE(6),
        [sym_delete_statement] = STATE(6),
        [sym__compound_statement] = STATE(401),
        [sym_if_statement] = STATE(402),
        [sym_for_statement] = STATE(402),
        [sym_while_statement] = STATE(402),
        [sym_try_statement] = STATE(402),
        [sym_with_statement] = STATE(402),
        [sym_function_definition] = STATE(402),
        [sym_class_definition] = STATE(402),
        [sym_decorated_definition] = STATE(402),
        [sym_decorator] = STATE(24),
        [sym__expression] = STATE(25),
        [sym_binary_operator] = STATE(18),
        [sym_unary_operator] = STATE(18),
        [sym_subscript] = STATE(18),
        [sym_call] = STATE(18),
        [sym_list] = STATE(18),
        [sym_list_comprehension] = STATE(18),
        [sym_dictionary] = STATE(18),
        [sym_dictionary_comprehension] = STATE(18),
        [sym_set] = STATE(18),
        [sym_set_comprehension] = STATE(18),
        [aux_sym_decorated_definition_repeat1] = STATE(404),
        [anon_sym_import] = ACTIONS(89),
        [anon_sym_print] = ACTIONS(91),
        [anon_sym_return] = ACTIONS(93),
        [anon_sym_del] = ACTIONS(95),
        [sym_pass_statement] = ACTIONS(97),
        [sym_break_statement] = ACTIONS(97),
        [sym_continue_statement] = ACTIONS(97),
        [anon_sym_if] = ACTIONS(781),
        [anon_sym_for] = ACTIONS(783),
        [anon_sym_while] = ACTIONS(785),
        [anon_sym_try] = ACTIONS(787),
        [anon_sym_with] = ACTIONS(789),
        [anon_sym_def] = ACTIONS(791),
        [anon_sym_class] = ACTIONS(793),
        [anon_sym_AT] = ACTIONS(113),
        [anon_sym_not] = ACTIONS(115),
        [anon_sym_LBRACK] = ACTIONS(117),
        [anon_sym_LBRACE] = ACTIONS(119),
        [sym_number] = ACTIONS(121),
        [sym_identifier] = ACTIONS(123),
        [sym_comment] = ACTIONS(79),
        [sym__dedent] = ACTIONS(1055),
    },
    [518] = {
        [anon_sym_except] = ACTIONS(823),
        [anon_sym_finally] = ACTIONS(823),
        [sym_comment] = ACTIONS(79),
    },
    [519] = {
        [anon_sym_COLON] = ACTIONS(1057),
        [anon_sym_LPAREN] = ACTIONS(251),
        [anon_sym_STAR] = ACTIONS(441),
        [anon_sym_PLUS] = ACTIONS(443),
        [anon_sym_DASH] = ACTIONS(443),
        [anon_sym_SLASH] = ACTIONS(445),
        [anon_sym_STAR_STAR] = ACTIONS(447),
        [anon_sym_PIPE] = ACTIONS(449),
        [anon_sym_AMP] = ACTIONS(451),
        [anon_sym_CARET] = ACTIONS(453),
        [anon_sym_LT_LT] = ACTIONS(443),
        [anon_sym_GT_GT] = ACTIONS(443),
        [anon_sym_and] = ACTIONS(451),
        [anon_sym_or] = ACTIONS(449),
        [anon_sym_LBRACK] = ACTIONS(267),
        [sym_comment] = ACTIONS(79),
    },
    [520] = {
        [sym__simple_statement] = STATE(416),
        [sym_import_statement] = STATE(6),
        [sym_print_statement] = STATE(6),
        [sym_expression_statement] = STATE(6),
        [sym_return_statement] = STATE(6),
        [sym_delete_statement] = STATE(6),
        [sym__suite] = STATE(521),
        [sym__expression] = STATE(25),
        [sym_binary_operator] = STATE(18),
        [sym_unary_operator] = STATE(18),
        [sym_subscript] = STATE(18),
        [sym_call] = STATE(18),
        [sym_list] = STATE(18),
        [sym_list_comprehension] = STATE(18),
        [sym_dictionary] = STATE(18),
        [sym_dictionary_comprehension] = STATE(18),
        [sym_set] = STATE(18),
        [sym_set_comprehension] = STATE(18),
        [anon_sym_import] = ACTIONS(89),
        [anon_sym_print] = ACTIONS(91),
        [anon_sym_return] = ACTIONS(93),
        [anon_sym_del] = ACTIONS(95),
        [sym_pass_statement] = ACTIONS(97),
        [sym_break_statement] = ACTIONS(97),
        [sym_continue_statement] = ACTIONS(97),
        [anon_sym_not] = ACTIONS(115),
        [anon_sym_LBRACK] = ACTIONS(117),
        [anon_sym_LBRACE] = ACTIONS(119),
        [sym_number] = ACTIONS(121),
        [sym_identifier] = ACTIONS(123),
        [sym_comment] = ACTIONS(79),
        [sym__indent] = ACTIONS(833),
    },
    [521] = {
        [sym_else_clause] = STATE(522),
        [anon_sym_import] = ACTIONS(1059),
        [anon_sym_print] = ACTIONS(1059),
        [anon_sym_return] = ACTIONS(1059),
        [anon_sym_del] = ACTIONS(1059),
        [sym_pass_statement] = ACTIONS(1059),
        [sym_break_statement] = ACTIONS(1059),
        [sym_continue_statement] = ACTIONS(1059),
        [anon_sym_if] = ACTIONS(1059),
        [anon_sym_else] = ACTIONS(999),
        [anon_sym_for] = ACTIONS(1059),
        [anon_sym_while] = ACTIONS(1059),
        [anon_sym_try] = ACTIONS(1059),
        [anon_sym_with] = ACTIONS(1059),
        [anon_sym_def] = ACTIONS(1059),
        [anon_sym_class] = ACTIONS(1059),
        [anon_sym_AT] = ACTIONS(1061),
        [anon_sym_not] = ACTIONS(1059),
        [anon_sym_LBRACK] = ACTIONS(1061),
        [anon_sym_LBRACE] = ACTIONS(1061),
        [sym_number] = ACTIONS(1059),
        [sym_identifier] = ACTIONS(1063),
        [sym_comment] = ACTIONS(79),
        [sym__dedent] = ACTIONS(1061),
    },
    [522] = {
        [anon_sym_import] = ACTIONS(1065),
        [anon_sym_print] = ACTIONS(1065),
        [anon_sym_return] = ACTIONS(1065),
        [anon_sym_del] = ACTIONS(1065),
        [sym_pass_statement] = ACTIONS(1065),
        [sym_break_statement] = ACTIONS(1065),
        [sym_continue_statement] = ACTIONS(1065),
        [anon_sym_if] = ACTIONS(1065),
        [anon_sym_for] = ACTIONS(1065),
        [anon_sym_while] = ACTIONS(1065),
        [anon_sym_try] = ACTIONS(1065),
        [anon_sym_with] = ACTIONS(1065),
        [anon_sym_def] = ACTIONS(1065),
        [anon_sym_class] = ACTIONS(1065),
        [anon_sym_AT] = ACTIONS(1067),
        [anon_sym_not] = ACTIONS(1065),
        [anon_sym_LBRACK] = ACTIONS(1067),
        [anon_sym_LBRACE] = ACTIONS(1067),
        [sym_number] = ACTIONS(1065),
        [sym_identifier] = ACTIONS(1069),
        [sym_comment] = ACTIONS(79),
        [sym__dedent] = ACTIONS(1067),
    },
    [523] = {
        [anon_sym_in] = ACTIONS(1071),
        [sym_comment] = ACTIONS(79),
    },
    [524] = {
        [sym_expression_list] = STATE(525),
        [sym__expression] = STATE(526),
        [sym_binary_operator] = STATE(44),
        [sym_unary_operator] = STATE(44),
        [sym_subscript] = STATE(44),
        [sym_call] = STATE(44),
        [sym_list] = STATE(44),
        [sym_list_comprehension] = STATE(44),
        [sym_dictionary] = STATE(44),
        [sym_dictionary_comprehension] = STATE(44),
        [sym_set] = STATE(44),
        [sym_set_comprehension] = STATE(44),
        [anon_sym_not] = ACTIONS(939),
        [anon_sym_LBRACK] = ACTIONS(133),
        [anon_sym_LBRACE] = ACTIONS(135),
        [sym_number] = ACTIONS(137),
        [sym_identifier] = ACTIONS(139),
        [sym_comment] = ACTIONS(79),
    },
    [525] = {
        [anon_sym_COLON] = ACTIONS(1073),
        [sym_comment] = ACTIONS(79),
    },
    [526] = {
        [aux_sym_print_statement_repeat1] = STATE(528),
        [anon_sym_COMMA] = ACTIONS(1075),
        [anon_sym_COLON] = ACTIONS(479),
        [anon_sym_LPAREN] = ACTIONS(251),
        [anon_sym_STAR] = ACTIONS(943),
        [anon_sym_PLUS] = ACTIONS(945),
        [anon_sym_DASH] = ACTIONS(945),
        [anon_sym_SLASH] = ACTIONS(947),
        [anon_sym_STAR_STAR] = ACTIONS(949),
        [anon_sym_PIPE] = ACTIONS(951),
        [anon_sym_AMP] = ACTIONS(953),
        [anon_sym_CARET] = ACTIONS(955),
        [anon_sym_LT_LT] = ACTIONS(945),
        [anon_sym_GT_GT] = ACTIONS(945),
        [anon_sym_and] = ACTIONS(953),
        [anon_sym_or] = ACTIONS(951),
        [anon_sym_LBRACK] = ACTIONS(267),
        [sym_comment] = ACTIONS(79),
    },
    [527] = {
        [sym__expression] = STATE(531),
        [sym_binary_operator] = STATE(44),
        [sym_unary_operator] = STATE(44),
        [sym_subscript] = STATE(44),
        [sym_call] = STATE(44),
        [sym_list] = STATE(44),
        [sym_list_comprehension] = STATE(44),
        [sym_dictionary] = STATE(44),
        [sym_dictionary_comprehension] = STATE(44),
        [sym_set] = STATE(44),
        [sym_set_comprehension] = STATE(44),
        [anon_sym_not] = ACTIONS(939),
        [anon_sym_LBRACK] = ACTIONS(133),
        [anon_sym_LBRACE] = ACTIONS(135),
        [sym_number] = ACTIONS(137),
        [sym_identifier] = ACTIONS(139),
        [sym_comment] = ACTIONS(79),
    },
    [528] = {
        [anon_sym_COMMA] = ACTIONS(1077),
        [anon_sym_COLON] = ACTIONS(497),
        [sym_comment] = ACTIONS(79),
    },
    [529] = {
        [sym__expression] = STATE(530),
        [sym_binary_operator] = STATE(44),
        [sym_unary_operator] = STATE(44),
        [sym_subscript] = STATE(44),
        [sym_call] = STATE(44),
        [sym_list] = STATE(44),
        [sym_list_comprehension] = STATE(44),
        [sym_dictionary] = STATE(44),
        [sym_dictionary_comprehension] = STATE(44),
        [sym_set] = STATE(44),
        [sym_set_comprehension] = STATE(44),
        [anon_sym_not] = ACTIONS(939),
        [anon_sym_LBRACK] = ACTIONS(133),
        [anon_sym_LBRACE] = ACTIONS(135),
        [sym_number] = ACTIONS(137),
        [sym_identifier] = ACTIONS(139),
        [sym_comment] = ACTIONS(79),
    },
    [530] = {
        [anon_sym_COMMA] = ACTIONS(499),
        [anon_sym_COLON] = ACTIONS(499),
        [anon_sym_LPAREN] = ACTIONS(251),
        [anon_sym_STAR] = ACTIONS(943),
        [anon_sym_PLUS] = ACTIONS(945),
        [anon_sym_DASH] = ACTIONS(945),
        [anon_sym_SLASH] = ACTIONS(947),
        [anon_sym_STAR_STAR] = ACTIONS(949),
        [anon_sym_PIPE] = ACTIONS(951),
        [anon_sym_AMP] = ACTIONS(953),
        [anon_sym_CARET] = ACTIONS(955),
        [anon_sym_LT_LT] = ACTIONS(945),
        [anon_sym_GT_GT] = ACTIONS(945),
        [anon_sym_and] = ACTIONS(953),
        [anon_sym_or] = ACTIONS(951),
        [anon_sym_LBRACK] = ACTIONS(267),
        [sym_comment] = ACTIONS(79),
    },
    [531] = {
        [anon_sym_COMMA] = ACTIONS(501),
        [anon_sym_COLON] = ACTIONS(501),
        [anon_sym_LPAREN] = ACTIONS(251),
        [anon_sym_STAR] = ACTIONS(943),
        [anon_sym_PLUS] = ACTIONS(945),
        [anon_sym_DASH] = ACTIONS(945),
        [anon_sym_SLASH] = ACTIONS(947),
        [anon_sym_STAR_STAR] = ACTIONS(949),
        [anon_sym_PIPE] = ACTIONS(951),
        [anon_sym_AMP] = ACTIONS(953),
        [anon_sym_CARET] = ACTIONS(955),
        [anon_sym_LT_LT] = ACTIONS(945),
        [anon_sym_GT_GT] = ACTIONS(945),
        [anon_sym_and] = ACTIONS(953),
        [anon_sym_or] = ACTIONS(951),
        [anon_sym_LBRACK] = ACTIONS(267),
        [sym_comment] = ACTIONS(79),
    },
    [532] = {
        [sym__simple_statement] = STATE(416),
        [sym_import_statement] = STATE(6),
        [sym_print_statement] = STATE(6),
        [sym_expression_statement] = STATE(6),
        [sym_return_statement] = STATE(6),
        [sym_delete_statement] = STATE(6),
        [sym__suite] = STATE(533),
        [sym__expression] = STATE(25),
        [sym_binary_operator] = STATE(18),
        [sym_unary_operator] = STATE(18),
        [sym_subscript] = STATE(18),
        [sym_call] = STATE(18),
        [sym_list] = STATE(18),
        [sym_list_comprehension] = STATE(18),
        [sym_dictionary] = STATE(18),
        [sym_dictionary_comprehension] = STATE(18),
        [sym_set] = STATE(18),
        [sym_set_comprehension] = STATE(18),
        [anon_sym_import] = ACTIONS(89),
        [anon_sym_print] = ACTIONS(91),
        [anon_sym_return] = ACTIONS(93),
        [anon_sym_del] = ACTIONS(95),
        [sym_pass_statement] = ACTIONS(97),
        [sym_break_statement] = ACTIONS(97),
        [sym_continue_statement] = ACTIONS(97),
        [anon_sym_not] = ACTIONS(115),
        [anon_sym_LBRACK] = ACTIONS(117),
        [anon_sym_LBRACE] = ACTIONS(119),
        [sym_number] = ACTIONS(121),
        [sym_identifier] = ACTIONS(123),
        [sym_comment] = ACTIONS(79),
        [sym__indent] = ACTIONS(833),
    },
    [533] = {
        [sym_else_clause] = STATE(534),
        [anon_sym_import] = ACTIONS(1079),
        [anon_sym_print] = ACTIONS(1079),
        [anon_sym_return] = ACTIONS(1079),
        [anon_sym_del] = ACTIONS(1079),
        [sym_pass_statement] = ACTIONS(1079),
        [sym_break_statement] = ACTIONS(1079),
        [sym_continue_statement] = ACTIONS(1079),
        [anon_sym_if] = ACTIONS(1079),
        [anon_sym_else] = ACTIONS(999),
        [anon_sym_for] = ACTIONS(1079),
        [anon_sym_while] = ACTIONS(1079),
        [anon_sym_try] = ACTIONS(1079),
        [anon_sym_with] = ACTIONS(1079),
        [anon_sym_def] = ACTIONS(1079),
        [anon_sym_class] = ACTIONS(1079),
        [anon_sym_AT] = ACTIONS(1081),
        [anon_sym_not] = ACTIONS(1079),
        [anon_sym_LBRACK] = ACTIONS(1081),
        [anon_sym_LBRACE] = ACTIONS(1081),
        [sym_number] = ACTIONS(1079),
        [sym_identifier] = ACTIONS(1083),
        [sym_comment] = ACTIONS(79),
        [sym__dedent] = ACTIONS(1081),
    },
    [534] = {
        [anon_sym_import] = ACTIONS(1085),
        [anon_sym_print] = ACTIONS(1085),
        [anon_sym_return] = ACTIONS(1085),
        [anon_sym_del] = ACTIONS(1085),
        [sym_pass_statement] = ACTIONS(1085),
        [sym_break_statement] = ACTIONS(1085),
        [sym_continue_statement] = ACTIONS(1085),
        [anon_sym_if] = ACTIONS(1085),
        [anon_sym_for] = ACTIONS(1085),
        [anon_sym_while] = ACTIONS(1085),
        [anon_sym_try] = ACTIONS(1085),
        [anon_sym_with] = ACTIONS(1085),
        [anon_sym_def] = ACTIONS(1085),
        [anon_sym_class] = ACTIONS(1085),
        [anon_sym_AT] = ACTIONS(1087),
        [anon_sym_not] = ACTIONS(1085),
        [anon_sym_LBRACK] = ACTIONS(1087),
        [anon_sym_LBRACE] = ACTIONS(1087),
        [sym_number] = ACTIONS(1085),
        [sym_identifier] = ACTIONS(1089),
        [sym_comment] = ACTIONS(79),
        [sym__dedent] = ACTIONS(1087),
    },
    [535] = {
        [anon_sym_COLON] = ACTIONS(1091),
        [anon_sym_LPAREN] = ACTIONS(251),
        [anon_sym_STAR] = ACTIONS(441),
        [anon_sym_PLUS] = ACTIONS(443),
        [anon_sym_DASH] = ACTIONS(443),
        [anon_sym_SLASH] = ACTIONS(445),
        [anon_sym_STAR_STAR] = ACTIONS(447),
        [anon_sym_PIPE] = ACTIONS(449),
        [anon_sym_AMP] = ACTIONS(451),
        [anon_sym_CARET] = ACTIONS(453),
        [anon_sym_LT_LT] = ACTIONS(443),
        [anon_sym_GT_GT] = ACTIONS(443),
        [anon_sym_and] = ACTIONS(451),
        [anon_sym_or] = ACTIONS(449),
        [anon_sym_LBRACK] = ACTIONS(267),
        [sym_comment] = ACTIONS(79),
    },
    [536] = {
        [sym__simple_statement] = STATE(416),
        [sym_import_statement] = STATE(6),
        [sym_print_statement] = STATE(6),
        [sym_expression_statement] = STATE(6),
        [sym_return_statement] = STATE(6),
        [sym_delete_statement] = STATE(6),
        [sym__suite] = STATE(537),
        [sym__expression] = STATE(25),
        [sym_binary_operator] = STATE(18),
        [sym_unary_operator] = STATE(18),
        [sym_subscript] = STATE(18),
        [sym_call] = STATE(18),
        [sym_list] = STATE(18),
        [sym_list_comprehension] = STATE(18),
        [sym_dictionary] = STATE(18),
        [sym_dictionary_comprehension] = STATE(18),
        [sym_set] = STATE(18),
        [sym_set_comprehension] = STATE(18),
        [anon_sym_import] = ACTIONS(89),
        [anon_sym_print] = ACTIONS(91),
        [anon_sym_return] = ACTIONS(93),
        [anon_sym_del] = ACTIONS(95),
        [sym_pass_statement] = ACTIONS(97),
        [sym_break_statement] = ACTIONS(97),
        [sym_continue_statement] = ACTIONS(97),
        [anon_sym_not] = ACTIONS(115),
        [anon_sym_LBRACK] = ACTIONS(117),
        [anon_sym_LBRACE] = ACTIONS(119),
        [sym_number] = ACTIONS(121),
        [sym_identifier] = ACTIONS(123),
        [sym_comment] = ACTIONS(79),
        [sym__indent] = ACTIONS(833),
    },
    [537] = {
        [sym_elif_clause] = STATE(539),
        [sym_else_clause] = STATE(540),
        [aux_sym_if_statement_repeat1] = STATE(541),
        [anon_sym_import] = ACTIONS(1093),
        [anon_sym_print] = ACTIONS(1093),
        [anon_sym_return] = ACTIONS(1093),
        [anon_sym_del] = ACTIONS(1093),
        [sym_pass_statement] = ACTIONS(1093),
        [sym_break_statement] = ACTIONS(1093),
        [sym_continue_statement] = ACTIONS(1093),
        [anon_sym_if] = ACTIONS(1093),
        [anon_sym_elif] = ACTIONS(1095),
        [anon_sym_else] = ACTIONS(999),
        [anon_sym_for] = ACTIONS(1093),
        [anon_sym_while] = ACTIONS(1093),
        [anon_sym_try] = ACTIONS(1093),
        [anon_sym_with] = ACTIONS(1093),
        [anon_sym_def] = ACTIONS(1093),
        [anon_sym_class] = ACTIONS(1093),
        [anon_sym_AT] = ACTIONS(1097),
        [anon_sym_not] = ACTIONS(1093),
        [anon_sym_LBRACK] = ACTIONS(1097),
        [anon_sym_LBRACE] = ACTIONS(1097),
        [sym_number] = ACTIONS(1093),
        [sym_identifier] = ACTIONS(1099),
        [sym_comment] = ACTIONS(79),
        [sym__dedent] = ACTIONS(1097),
    },
    [538] = {
        [sym__expression] = STATE(544),
        [sym_binary_operator] = STATE(44),
        [sym_unary_operator] = STATE(44),
        [sym_subscript] = STATE(44),
        [sym_call] = STATE(44),
        [sym_list] = STATE(44),
        [sym_list_comprehension] = STATE(44),
        [sym_dictionary] = STATE(44),
        [sym_dictionary_comprehension] = STATE(44),
        [sym_set] = STATE(44),
        [sym_set_comprehension] = STATE(44),
        [anon_sym_not] = ACTIONS(131),
        [anon_sym_LBRACK] = ACTIONS(133),
        [anon_sym_LBRACE] = ACTIONS(135),
        [sym_number] = ACTIONS(137),
        [sym_identifier] = ACTIONS(139),
        [sym_comment] = ACTIONS(79),
    },
    [539] = {
        [anon_sym_import] = ACTIONS(1101),
        [anon_sym_print] = ACTIONS(1101),
        [anon_sym_return] = ACTIONS(1101),
        [anon_sym_del] = ACTIONS(1101),
        [sym_pass_statement] = ACTIONS(1101),
        [sym_break_statement] = ACTIONS(1101),
        [sym_continue_statement] = ACTIONS(1101),
        [anon_sym_if] = ACTIONS(1101),
        [anon_sym_elif] = ACTIONS(1101),
        [anon_sym_else] = ACTIONS(1101),
        [anon_sym_for] = ACTIONS(1101),
        [anon_sym_while] = ACTIONS(1101),
        [anon_sym_try] = ACTIONS(1101),
        [anon_sym_with] = ACTIONS(1101),
        [anon_sym_def] = ACTIONS(1101),
        [anon_sym_class] = ACTIONS(1101),
        [anon_sym_AT] = ACTIONS(1103),
        [anon_sym_not] = ACTIONS(1101),
        [anon_sym_LBRACK] = ACTIONS(1103),
        [anon_sym_LBRACE] = ACTIONS(1103),
        [sym_number] = ACTIONS(1101),
        [sym_identifier] = ACTIONS(1105),
        [sym_comment] = ACTIONS(79),
        [sym__dedent] = ACTIONS(1103),
    },
    [540] = {
        [anon_sym_import] = ACTIONS(1107),
        [anon_sym_print] = ACTIONS(1107),
        [anon_sym_return] = ACTIONS(1107),
        [anon_sym_del] = ACTIONS(1107),
        [sym_pass_statement] = ACTIONS(1107),
        [sym_break_statement] = ACTIONS(1107),
        [sym_continue_statement] = ACTIONS(1107),
        [anon_sym_if] = ACTIONS(1107),
        [anon_sym_for] = ACTIONS(1107),
        [anon_sym_while] = ACTIONS(1107),
        [anon_sym_try] = ACTIONS(1107),
        [anon_sym_with] = ACTIONS(1107),
        [anon_sym_def] = ACTIONS(1107),
        [anon_sym_class] = ACTIONS(1107),
        [anon_sym_AT] = ACTIONS(1109),
        [anon_sym_not] = ACTIONS(1107),
        [anon_sym_LBRACK] = ACTIONS(1109),
        [anon_sym_LBRACE] = ACTIONS(1109),
        [sym_number] = ACTIONS(1107),
        [sym_identifier] = ACTIONS(1111),
        [sym_comment] = ACTIONS(79),
        [sym__dedent] = ACTIONS(1109),
    },
    [541] = {
        [sym_elif_clause] = STATE(542),
        [sym_else_clause] = STATE(543),
        [anon_sym_import] = ACTIONS(1107),
        [anon_sym_print] = ACTIONS(1107),
        [anon_sym_return] = ACTIONS(1107),
        [anon_sym_del] = ACTIONS(1107),
        [sym_pass_statement] = ACTIONS(1107),
        [sym_break_statement] = ACTIONS(1107),
        [sym_continue_statement] = ACTIONS(1107),
        [anon_sym_if] = ACTIONS(1107),
        [anon_sym_elif] = ACTIONS(1095),
        [anon_sym_else] = ACTIONS(999),
        [anon_sym_for] = ACTIONS(1107),
        [anon_sym_while] = ACTIONS(1107),
        [anon_sym_try] = ACTIONS(1107),
        [anon_sym_with] = ACTIONS(1107),
        [anon_sym_def] = ACTIONS(1107),
        [anon_sym_class] = ACTIONS(1107),
        [anon_sym_AT] = ACTIONS(1109),
        [anon_sym_not] = ACTIONS(1107),
        [anon_sym_LBRACK] = ACTIONS(1109),
        [anon_sym_LBRACE] = ACTIONS(1109),
        [sym_number] = ACTIONS(1107),
        [sym_identifier] = ACTIONS(1111),
        [sym_comment] = ACTIONS(79),
        [sym__dedent] = ACTIONS(1109),
    },
    [542] = {
        [anon_sym_import] = ACTIONS(1113),
        [anon_sym_print] = ACTIONS(1113),
        [anon_sym_return] = ACTIONS(1113),
        [anon_sym_del] = ACTIONS(1113),
        [sym_pass_statement] = ACTIONS(1113),
        [sym_break_statement] = ACTIONS(1113),
        [sym_continue_statement] = ACTIONS(1113),
        [anon_sym_if] = ACTIONS(1113),
        [anon_sym_elif] = ACTIONS(1113),
        [anon_sym_else] = ACTIONS(1113),
        [anon_sym_for] = ACTIONS(1113),
        [anon_sym_while] = ACTIONS(1113),
        [anon_sym_try] = ACTIONS(1113),
        [anon_sym_with] = ACTIONS(1113),
        [anon_sym_def] = ACTIONS(1113),
        [anon_sym_class] = ACTIONS(1113),
        [anon_sym_AT] = ACTIONS(1115),
        [anon_sym_not] = ACTIONS(1113),
        [anon_sym_LBRACK] = ACTIONS(1115),
        [anon_sym_LBRACE] = ACTIONS(1115),
        [sym_number] = ACTIONS(1113),
        [sym_identifier] = ACTIONS(1117),
        [sym_comment] = ACTIONS(79),
        [sym__dedent] = ACTIONS(1115),
    },
    [543] = {
        [anon_sym_import] = ACTIONS(1119),
        [anon_sym_print] = ACTIONS(1119),
        [anon_sym_return] = ACTIONS(1119),
        [anon_sym_del] = ACTIONS(1119),
        [sym_pass_statement] = ACTIONS(1119),
        [sym_break_statement] = ACTIONS(1119),
        [sym_continue_statement] = ACTIONS(1119),
        [anon_sym_if] = ACTIONS(1119),
        [anon_sym_for] = ACTIONS(1119),
        [anon_sym_while] = ACTIONS(1119),
        [anon_sym_try] = ACTIONS(1119),
        [anon_sym_with] = ACTIONS(1119),
        [anon_sym_def] = ACTIONS(1119),
        [anon_sym_class] = ACTIONS(1119),
        [anon_sym_AT] = ACTIONS(1121),
        [anon_sym_not] = ACTIONS(1119),
        [anon_sym_LBRACK] = ACTIONS(1121),
        [anon_sym_LBRACE] = ACTIONS(1121),
        [sym_number] = ACTIONS(1119),
        [sym_identifier] = ACTIONS(1123),
        [sym_comment] = ACTIONS(79),
        [sym__dedent] = ACTIONS(1121),
    },
    [544] = {
        [anon_sym_COLON] = ACTIONS(1125),
        [anon_sym_LPAREN] = ACTIONS(251),
        [anon_sym_STAR] = ACTIONS(441),
        [anon_sym_PLUS] = ACTIONS(443),
        [anon_sym_DASH] = ACTIONS(443),
        [anon_sym_SLASH] = ACTIONS(445),
        [anon_sym_STAR_STAR] = ACTIONS(447),
        [anon_sym_PIPE] = ACTIONS(449),
        [anon_sym_AMP] = ACTIONS(451),
        [anon_sym_CARET] = ACTIONS(453),
        [anon_sym_LT_LT] = ACTIONS(443),
        [anon_sym_GT_GT] = ACTIONS(443),
        [anon_sym_and] = ACTIONS(451),
        [anon_sym_or] = ACTIONS(449),
        [anon_sym_LBRACK] = ACTIONS(267),
        [sym_comment] = ACTIONS(79),
    },
    [545] = {
        [sym__simple_statement] = STATE(416),
        [sym_import_statement] = STATE(6),
        [sym_print_statement] = STATE(6),
        [sym_expression_statement] = STATE(6),
        [sym_return_statement] = STATE(6),
        [sym_delete_statement] = STATE(6),
        [sym__suite] = STATE(546),
        [sym__expression] = STATE(25),
        [sym_binary_operator] = STATE(18),
        [sym_unary_operator] = STATE(18),
        [sym_subscript] = STATE(18),
        [sym_call] = STATE(18),
        [sym_list] = STATE(18),
        [sym_list_comprehension] = STATE(18),
        [sym_dictionary] = STATE(18),
        [sym_dictionary_comprehension] = STATE(18),
        [sym_set] = STATE(18),
        [sym_set_comprehension] = STATE(18),
        [anon_sym_import] = ACTIONS(89),
        [anon_sym_print] = ACTIONS(91),
        [anon_sym_return] = ACTIONS(93),
        [anon_sym_del] = ACTIONS(95),
        [sym_pass_statement] = ACTIONS(97),
        [sym_break_statement] = ACTIONS(97),
        [sym_continue_statement] = ACTIONS(97),
        [anon_sym_not] = ACTIONS(115),
        [anon_sym_LBRACK] = ACTIONS(117),
        [anon_sym_LBRACE] = ACTIONS(119),
        [sym_number] = ACTIONS(121),
        [sym_identifier] = ACTIONS(123),
        [sym_comment] = ACTIONS(79),
        [sym__indent] = ACTIONS(833),
    },
    [546] = {
        [anon_sym_import] = ACTIONS(1127),
        [anon_sym_print] = ACTIONS(1127),
        [anon_sym_return] = ACTIONS(1127),
        [anon_sym_del] = ACTIONS(1127),
        [sym_pass_statement] = ACTIONS(1127),
        [sym_break_statement] = ACTIONS(1127),
        [sym_continue_statement] = ACTIONS(1127),
        [anon_sym_if] = ACTIONS(1127),
        [anon_sym_elif] = ACTIONS(1127),
        [anon_sym_else] = ACTIONS(1127),
        [anon_sym_for] = ACTIONS(1127),
        [anon_sym_while] = ACTIONS(1127),
        [anon_sym_try] = ACTIONS(1127),
        [anon_sym_with] = ACTIONS(1127),
        [anon_sym_def] = ACTIONS(1127),
        [anon_sym_class] = ACTIONS(1127),
        [anon_sym_AT] = ACTIONS(1129),
        [anon_sym_not] = ACTIONS(1127),
        [anon_sym_LBRACK] = ACTIONS(1129),
        [anon_sym_LBRACE] = ACTIONS(1129),
        [sym_number] = ACTIONS(1127),
        [sym_identifier] = ACTIONS(1131),
        [sym_comment] = ACTIONS(79),
        [sym__dedent] = ACTIONS(1129),
    },
    [547] = {
        [ts_builtin_sym_end] = ACTIONS(845),
        [anon_sym_SEMI] = ACTIONS(845),
        [anon_sym_import] = ACTIONS(843),
        [anon_sym_print] = ACTIONS(843),
        [anon_sym_return] = ACTIONS(843),
        [anon_sym_del] = ACTIONS(843),
        [sym_pass_statement] = ACTIONS(843),
        [sym_break_statement] = ACTIONS(843),
        [sym_continue_statement] = ACTIONS(843),
        [anon_sym_if] = ACTIONS(843),
        [anon_sym_for] = ACTIONS(843),
        [anon_sym_while] = ACTIONS(843),
        [anon_sym_try] = ACTIONS(843),
        [anon_sym_with] = ACTIONS(843),
        [anon_sym_def] = ACTIONS(843),
        [anon_sym_class] = ACTIONS(843),
        [anon_sym_AT] = ACTIONS(845),
        [anon_sym_not] = ACTIONS(843),
        [anon_sym_LBRACK] = ACTIONS(845),
        [anon_sym_LBRACE] = ACTIONS(845),
        [sym_number] = ACTIONS(843),
        [sym_identifier] = ACTIONS(847),
        [sym_comment] = ACTIONS(79),
        [sym__newline] = ACTIONS(845),
    },
    [548] = {
        [sym_parameters] = STATE(549),
        [anon_sym_LPAREN] = ACTIONS(849),
        [sym_comment] = ACTIONS(79),
    },
    [549] = {
        [anon_sym_COLON] = ACTIONS(1133),
        [sym_comment] = ACTIONS(79),
    },
    [550] = {
        [sym__simple_statement] = STATE(389),
        [sym_import_statement] = STATE(6),
        [sym_print_statement] = STATE(6),
        [sym_expression_statement] = STATE(6),
        [sym_return_statement] = STATE(6),
        [sym_delete_statement] = STATE(6),
        [sym__suite] = STATE(551),
        [sym__expression] = STATE(25),
        [sym_binary_operator] = STATE(18),
        [sym_unary_operator] = STATE(18),
        [sym_subscript] = STATE(18),
        [sym_call] = STATE(18),
        [sym_list] = STATE(18),
        [sym_list_comprehension] = STATE(18),
        [sym_dictionary] = STATE(18),
        [sym_dictionary_comprehension] = STATE(18),
        [sym_set] = STATE(18),
        [sym_set_comprehension] = STATE(18),
        [anon_sym_import] = ACTIONS(89),
        [anon_sym_print] = ACTIONS(91),
        [anon_sym_return] = ACTIONS(93),
        [anon_sym_del] = ACTIONS(95),
        [sym_pass_statement] = ACTIONS(97),
        [sym_break_statement] = ACTIONS(97),
        [sym_continue_statement] = ACTIONS(97),
        [anon_sym_not] = ACTIONS(115),
        [anon_sym_LBRACK] = ACTIONS(117),
        [anon_sym_LBRACE] = ACTIONS(119),
        [sym_number] = ACTIONS(121),
        [sym_identifier] = ACTIONS(123),
        [sym_comment] = ACTIONS(79),
        [sym__indent] = ACTIONS(775),
    },
    [551] = {
        [ts_builtin_sym_end] = ACTIONS(861),
        [anon_sym_SEMI] = ACTIONS(861),
        [anon_sym_import] = ACTIONS(859),
        [anon_sym_print] = ACTIONS(859),
        [anon_sym_return] = ACTIONS(859),
        [anon_sym_del] = ACTIONS(859),
        [sym_pass_statement] = ACTIONS(859),
        [sym_break_statement] = ACTIONS(859),
        [sym_continue_statement] = ACTIONS(859),
        [anon_sym_if] = ACTIONS(859),
        [anon_sym_for] = ACTIONS(859),
        [anon_sym_while] = ACTIONS(859),
        [anon_sym_try] = ACTIONS(859),
        [anon_sym_with] = ACTIONS(859),
        [anon_sym_def] = ACTIONS(859),
        [anon_sym_class] = ACTIONS(859),
        [anon_sym_AT] = ACTIONS(861),
        [anon_sym_not] = ACTIONS(859),
        [anon_sym_LBRACK] = ACTIONS(861),
        [anon_sym_LBRACE] = ACTIONS(861),
        [sym_number] = ACTIONS(859),
        [sym_identifier] = ACTIONS(863),
        [sym_comment] = ACTIONS(79),
        [sym__newline] = ACTIONS(861),
    },
    [552] = {
        [aux_sym_with_statement_repeat1] = STATE(554),
        [anon_sym_COMMA] = ACTIONS(917),
        [anon_sym_COLON] = ACTIONS(1135),
        [sym_comment] = ACTIONS(79),
    },
    [553] = {
        [sym__simple_statement] = STATE(389),
        [sym_import_statement] = STATE(6),
        [sym_print_statement] = STATE(6),
        [sym_expression_statement] = STATE(6),
        [sym_return_statement] = STATE(6),
        [sym_delete_statement] = STATE(6),
        [sym__suite] = STATE(557),
        [sym__expression] = STATE(25),
        [sym_binary_operator] = STATE(18),
        [sym_unary_operator] = STATE(18),
        [sym_subscript] = STATE(18),
        [sym_call] = STATE(18),
        [sym_list] = STATE(18),
        [sym_list_comprehension] = STATE(18),
        [sym_dictionary] = STATE(18),
        [sym_dictionary_comprehension] = STATE(18),
        [sym_set] = STATE(18),
        [sym_set_comprehension] = STATE(18),
        [anon_sym_import] = ACTIONS(89),
        [anon_sym_print] = ACTIONS(91),
        [anon_sym_return] = ACTIONS(93),
        [anon_sym_del] = ACTIONS(95),
        [sym_pass_statement] = ACTIONS(97),
        [sym_break_statement] = ACTIONS(97),
        [sym_continue_statement] = ACTIONS(97),
        [anon_sym_not] = ACTIONS(115),
        [anon_sym_LBRACK] = ACTIONS(117),
        [anon_sym_LBRACE] = ACTIONS(119),
        [sym_number] = ACTIONS(121),
        [sym_identifier] = ACTIONS(123),
        [sym_comment] = ACTIONS(79),
        [sym__indent] = ACTIONS(775),
    },
    [554] = {
        [anon_sym_COMMA] = ACTIONS(957),
        [anon_sym_COLON] = ACTIONS(1137),
        [sym_comment] = ACTIONS(79),
    },
    [555] = {
        [sym__simple_statement] = STATE(389),
        [sym_import_statement] = STATE(6),
        [sym_print_statement] = STATE(6),
        [sym_expression_statement] = STATE(6),
        [sym_return_statement] = STATE(6),
        [sym_delete_statement] = STATE(6),
        [sym__suite] = STATE(556),
        [sym__expression] = STATE(25),
        [sym_binary_operator] = STATE(18),
        [sym_unary_operator] = STATE(18),
        [sym_subscript] = STATE(18),
        [sym_call] = STATE(18),
        [sym_list] = STATE(18),
        [sym_list_comprehension] = STATE(18),
        [sym_dictionary] = STATE(18),
        [sym_dictionary_comprehension] = STATE(18),
        [sym_set] = STATE(18),
        [sym_set_comprehension] = STATE(18),
        [anon_sym_import] = ACTIONS(89),
        [anon_sym_print] = ACTIONS(91),
        [anon_sym_return] = ACTIONS(93),
        [anon_sym_del] = ACTIONS(95),
        [sym_pass_statement] = ACTIONS(97),
        [sym_break_statement] = ACTIONS(97),
        [sym_continue_statement] = ACTIONS(97),
        [anon_sym_not] = ACTIONS(115),
        [anon_sym_LBRACK] = ACTIONS(117),
        [anon_sym_LBRACE] = ACTIONS(119),
        [sym_number] = ACTIONS(121),
        [sym_identifier] = ACTIONS(123),
        [sym_comment] = ACTIONS(79),
        [sym__indent] = ACTIONS(775),
    },
    [556] = {
        [ts_builtin_sym_end] = ACTIONS(963),
        [anon_sym_SEMI] = ACTIONS(963),
        [anon_sym_import] = ACTIONS(961),
        [anon_sym_print] = ACTIONS(961),
        [anon_sym_return] = ACTIONS(961),
        [anon_sym_del] = ACTIONS(961),
        [sym_pass_statement] = ACTIONS(961),
        [sym_break_statement] = ACTIONS(961),
        [sym_continue_statement] = ACTIONS(961),
        [anon_sym_if] = ACTIONS(961),
        [anon_sym_for] = ACTIONS(961),
        [anon_sym_while] = ACTIONS(961),
        [anon_sym_try] = ACTIONS(961),
        [anon_sym_with] = ACTIONS(961),
        [anon_sym_def] = ACTIONS(961),
        [anon_sym_class] = ACTIONS(961),
        [anon_sym_AT] = ACTIONS(963),
        [anon_sym_not] = ACTIONS(961),
        [anon_sym_LBRACK] = ACTIONS(963),
        [anon_sym_LBRACE] = ACTIONS(963),
        [sym_number] = ACTIONS(961),
        [sym_identifier] = ACTIONS(965),
        [sym_comment] = ACTIONS(79),
        [sym__newline] = ACTIONS(963),
    },
    [557] = {
        [ts_builtin_sym_end] = ACTIONS(971),
        [anon_sym_SEMI] = ACTIONS(971),
        [anon_sym_import] = ACTIONS(969),
        [anon_sym_print] = ACTIONS(969),
        [anon_sym_return] = ACTIONS(969),
        [anon_sym_del] = ACTIONS(969),
        [sym_pass_statement] = ACTIONS(969),
        [sym_break_statement] = ACTIONS(969),
        [sym_continue_statement] = ACTIONS(969),
        [anon_sym_if] = ACTIONS(969),
        [anon_sym_for] = ACTIONS(969),
        [anon_sym_while] = ACTIONS(969),
        [anon_sym_try] = ACTIONS(969),
        [anon_sym_with] = ACTIONS(969),
        [anon_sym_def] = ACTIONS(969),
        [anon_sym_class] = ACTIONS(969),
        [anon_sym_AT] = ACTIONS(971),
        [anon_sym_not] = ACTIONS(969),
        [anon_sym_LBRACK] = ACTIONS(971),
        [anon_sym_LBRACE] = ACTIONS(971),
        [sym_number] = ACTIONS(969),
        [sym_identifier] = ACTIONS(973),
        [sym_comment] = ACTIONS(79),
        [sym__newline] = ACTIONS(971),
    },
    [558] = {
        [sym__simple_statement] = STATE(493),
        [sym_import_statement] = STATE(6),
        [sym_print_statement] = STATE(6),
        [sym_expression_statement] = STATE(6),
        [sym_return_statement] = STATE(6),
        [sym_delete_statement] = STATE(6),
        [sym__suite] = STATE(559),
        [sym__expression] = STATE(25),
        [sym_binary_operator] = STATE(18),
        [sym_unary_operator] = STATE(18),
        [sym_subscript] = STATE(18),
        [sym_call] = STATE(18),
        [sym_list] = STATE(18),
        [sym_list_comprehension] = STATE(18),
        [sym_dictionary] = STATE(18),
        [sym_dictionary_comprehension] = STATE(18),
        [sym_set] = STATE(18),
        [sym_set_comprehension] = STATE(18),
        [anon_sym_import] = ACTIONS(89),
        [anon_sym_print] = ACTIONS(91),
        [anon_sym_return] = ACTIONS(93),
        [anon_sym_del] = ACTIONS(95),
        [sym_pass_statement] = ACTIONS(97),
        [sym_break_statement] = ACTIONS(97),
        [sym_continue_statement] = ACTIONS(97),
        [anon_sym_not] = ACTIONS(115),
        [anon_sym_LBRACK] = ACTIONS(117),
        [anon_sym_LBRACE] = ACTIONS(119),
        [sym_number] = ACTIONS(121),
        [sym_identifier] = ACTIONS(123),
        [sym_comment] = ACTIONS(79),
        [sym__indent] = ACTIONS(977),
    },
    [559] = {
        [sym_except_clause] = STATE(562),
        [sym_finally_clause] = STATE(563),
        [aux_sym_try_statement_repeat1] = STATE(564),
        [anon_sym_except] = ACTIONS(1139),
        [anon_sym_finally] = ACTIONS(1141),
        [sym_comment] = ACTIONS(79),
    },
    [560] = {
        [sym__expression] = STATE(574),
        [sym_binary_operator] = STATE(44),
        [sym_unary_operator] = STATE(44),
        [sym_subscript] = STATE(44),
        [sym_call] = STATE(44),
        [sym_list] = STATE(44),
        [sym_list_comprehension] = STATE(44),
        [sym_dictionary] = STATE(44),
        [sym_dictionary_comprehension] = STATE(44),
        [sym_set] = STATE(44),
        [sym_set_comprehension] = STATE(44),
        [anon_sym_not] = ACTIONS(145),
        [anon_sym_LBRACK] = ACTIONS(133),
        [anon_sym_LBRACE] = ACTIONS(135),
        [sym_number] = ACTIONS(137),
        [sym_identifier] = ACTIONS(139),
        [sym_comment] = ACTIONS(79),
    },
    [561] = {
        [anon_sym_COLON] = ACTIONS(1143),
        [sym_comment] = ACTIONS(79),
    },
    [562] = {
        [ts_builtin_sym_end] = ACTIONS(989),
        [anon_sym_SEMI] = ACTIONS(989),
        [anon_sym_import] = ACTIONS(987),
        [anon_sym_print] = ACTIONS(987),
        [anon_sym_return] = ACTIONS(987),
        [anon_sym_del] = ACTIONS(987),
        [sym_pass_statement] = ACTIONS(987),
        [sym_break_statement] = ACTIONS(987),
        [sym_continue_statement] = ACTIONS(987),
        [anon_sym_if] = ACTIONS(987),
        [anon_sym_else] = ACTIONS(987),
        [anon_sym_for] = ACTIONS(987),
        [anon_sym_while] = ACTIONS(987),
        [anon_sym_try] = ACTIONS(987),
        [anon_sym_except] = ACTIONS(987),
        [anon_sym_finally] = ACTIONS(987),
        [anon_sym_with] = ACTIONS(987),
        [anon_sym_def] = ACTIONS(987),
        [anon_sym_class] = ACTIONS(987),
        [anon_sym_AT] = ACTIONS(989),
        [anon_sym_not] = ACTIONS(987),
        [anon_sym_LBRACK] = ACTIONS(989),
        [anon_sym_LBRACE] = ACTIONS(989),
        [sym_number] = ACTIONS(987),
        [sym_identifier] = ACTIONS(991),
        [sym_comment] = ACTIONS(79),
        [sym__newline] = ACTIONS(989),
    },
    [563] = {
        [ts_builtin_sym_end] = ACTIONS(995),
        [anon_sym_SEMI] = ACTIONS(995),
        [anon_sym_import] = ACTIONS(993),
        [anon_sym_print] = ACTIONS(993),
        [anon_sym_return] = ACTIONS(993),
        [anon_sym_del] = ACTIONS(993),
        [sym_pass_statement] = ACTIONS(993),
        [sym_break_statement] = ACTIONS(993),
        [sym_continue_statement] = ACTIONS(993),
        [anon_sym_if] = ACTIONS(993),
        [anon_sym_for] = ACTIONS(993),
        [anon_sym_while] = ACTIONS(993),
        [anon_sym_try] = ACTIONS(993),
        [anon_sym_with] = ACTIONS(993),
        [anon_sym_def] = ACTIONS(993),
        [anon_sym_class] = ACTIONS(993),
        [anon_sym_AT] = ACTIONS(995),
        [anon_sym_not] = ACTIONS(993),
        [anon_sym_LBRACK] = ACTIONS(995),
        [anon_sym_LBRACE] = ACTIONS(995),
        [sym_number] = ACTIONS(993),
        [sym_identifier] = ACTIONS(997),
        [sym_comment] = ACTIONS(79),
        [sym__newline] = ACTIONS(995),
    },
    [564] = {
        [sym_else_clause] = STATE(566),
        [sym_except_clause] = STATE(567),
        [sym_finally_clause] = STATE(568),
        [ts_builtin_sym_end] = ACTIONS(995),
        [anon_sym_SEMI] = ACTIONS(995),
        [anon_sym_import] = ACTIONS(993),
        [anon_sym_print] = ACTIONS(993),
        [anon_sym_return] = ACTIONS(993),
        [anon_sym_del] = ACTIONS(993),
        [sym_pass_statement] = ACTIONS(993),
        [sym_break_statement] = ACTIONS(993),
        [sym_continue_statement] = ACTIONS(993),
        [anon_sym_if] = ACTIONS(993),
        [anon_sym_else] = ACTIONS(1145),
        [anon_sym_for] = ACTIONS(993),
        [anon_sym_while] = ACTIONS(993),
        [anon_sym_try] = ACTIONS(993),
        [anon_sym_except] = ACTIONS(1147),
        [anon_sym_finally] = ACTIONS(1149),
        [anon_sym_with] = ACTIONS(993),
        [anon_sym_def] = ACTIONS(993),
        [anon_sym_class] = ACTIONS(993),
        [anon_sym_AT] = ACTIONS(995),
        [anon_sym_not] = ACTIONS(993),
        [anon_sym_LBRACK] = ACTIONS(995),
        [anon_sym_LBRACE] = ACTIONS(995),
        [sym_number] = ACTIONS(993),
        [sym_identifier] = ACTIONS(997),
        [sym_comment] = ACTIONS(79),
        [sym__newline] = ACTIONS(995),
    },
    [565] = {
        [anon_sym_COLON] = ACTIONS(1151),
        [sym_comment] = ACTIONS(79),
    },
    [566] = {
        [sym_finally_clause] = STATE(569),
        [ts_builtin_sym_end] = ACTIONS(1009),
        [anon_sym_SEMI] = ACTIONS(1009),
        [anon_sym_import] = ACTIONS(1007),
        [anon_sym_print] = ACTIONS(1007),
        [anon_sym_return] = ACTIONS(1007),
        [anon_sym_del] = ACTIONS(1007),
        [sym_pass_statement] = ACTIONS(1007),
        [sym_break_statement] = ACTIONS(1007),
        [sym_continue_statement] = ACTIONS(1007),
        [anon_sym_if] = ACTIONS(1007),
        [anon_sym_for] = ACTIONS(1007),
        [anon_sym_while] = ACTIONS(1007),
        [anon_sym_try] = ACTIONS(1007),
        [anon_sym_finally] = ACTIONS(1149),
        [anon_sym_with] = ACTIONS(1007),
        [anon_sym_def] = ACTIONS(1007),
        [anon_sym_class] = ACTIONS(1007),
        [anon_sym_AT] = ACTIONS(1009),
        [anon_sym_not] = ACTIONS(1007),
        [anon_sym_LBRACK] = ACTIONS(1009),
        [anon_sym_LBRACE] = ACTIONS(1009),
        [sym_number] = ACTIONS(1007),
        [sym_identifier] = ACTIONS(1011),
        [sym_comment] = ACTIONS(79),
        [sym__newline] = ACTIONS(1009),
    },
    [567] = {
        [ts_builtin_sym_end] = ACTIONS(1015),
        [anon_sym_SEMI] = ACTIONS(1015),
        [anon_sym_import] = ACTIONS(1013),
        [anon_sym_print] = ACTIONS(1013),
        [anon_sym_return] = ACTIONS(1013),
        [anon_sym_del] = ACTIONS(1013),
        [sym_pass_statement] = ACTIONS(1013),
        [sym_break_statement] = ACTIONS(1013),
        [sym_continue_statement] = ACTIONS(1013),
        [anon_sym_if] = ACTIONS(1013),
        [anon_sym_else] = ACTIONS(1013),
        [anon_sym_for] = ACTIONS(1013),
        [anon_sym_while] = ACTIONS(1013),
        [anon_sym_try] = ACTIONS(1013),
        [anon_sym_except] = ACTIONS(1013),
        [anon_sym_finally] = ACTIONS(1013),
        [anon_sym_with] = ACTIONS(1013),
        [anon_sym_def] = ACTIONS(1013),
        [anon_sym_class] = ACTIONS(1013),
        [anon_sym_AT] = ACTIONS(1015),
        [anon_sym_not] = ACTIONS(1013),
        [anon_sym_LBRACK] = ACTIONS(1015),
        [anon_sym_LBRACE] = ACTIONS(1015),
        [sym_number] = ACTIONS(1013),
        [sym_identifier] = ACTIONS(1017),
        [sym_comment] = ACTIONS(79),
        [sym__newline] = ACTIONS(1015),
    },
    [568] = {
        [ts_builtin_sym_end] = ACTIONS(1009),
        [anon_sym_SEMI] = ACTIONS(1009),
        [anon_sym_import] = ACTIONS(1007),
        [anon_sym_print] = ACTIONS(1007),
        [anon_sym_return] = ACTIONS(1007),
        [anon_sym_del] = ACTIONS(1007),
        [sym_pass_statement] = ACTIONS(1007),
        [sym_break_statement] = ACTIONS(1007),
        [sym_continue_statement] = ACTIONS(1007),
        [anon_sym_if] = ACTIONS(1007),
        [anon_sym_for] = ACTIONS(1007),
        [anon_sym_while] = ACTIONS(1007),
        [anon_sym_try] = ACTIONS(1007),
        [anon_sym_with] = ACTIONS(1007),
        [anon_sym_def] = ACTIONS(1007),
        [anon_sym_class] = ACTIONS(1007),
        [anon_sym_AT] = ACTIONS(1009),
        [anon_sym_not] = ACTIONS(1007),
        [anon_sym_LBRACK] = ACTIONS(1009),
        [anon_sym_LBRACE] = ACTIONS(1009),
        [sym_number] = ACTIONS(1007),
        [sym_identifier] = ACTIONS(1011),
        [sym_comment] = ACTIONS(79),
        [sym__newline] = ACTIONS(1009),
    },
    [569] = {
        [ts_builtin_sym_end] = ACTIONS(1021),
        [anon_sym_SEMI] = ACTIONS(1021),
        [anon_sym_import] = ACTIONS(1019),
        [anon_sym_print] = ACTIONS(1019),
        [anon_sym_return] = ACTIONS(1019),
        [anon_sym_del] = ACTIONS(1019),
        [sym_pass_statement] = ACTIONS(1019),
        [sym_break_statement] = ACTIONS(1019),
        [sym_continue_statement] = ACTIONS(1019),
        [anon_sym_if] = ACTIONS(1019),
        [anon_sym_for] = ACTIONS(1019),
        [anon_sym_while] = ACTIONS(1019),
        [anon_sym_try] = ACTIONS(1019),
        [anon_sym_with] = ACTIONS(1019),
        [anon_sym_def] = ACTIONS(1019),
        [anon_sym_class] = ACTIONS(1019),
        [anon_sym_AT] = ACTIONS(1021),
        [anon_sym_not] = ACTIONS(1019),
        [anon_sym_LBRACK] = ACTIONS(1021),
        [anon_sym_LBRACE] = ACTIONS(1021),
        [sym_number] = ACTIONS(1019),
        [sym_identifier] = ACTIONS(1023),
        [sym_comment] = ACTIONS(79),
        [sym__newline] = ACTIONS(1021),
    },
    [570] = {
        [sym__simple_statement] = STATE(389),
        [sym_import_statement] = STATE(6),
        [sym_print_statement] = STATE(6),
        [sym_expression_statement] = STATE(6),
        [sym_return_statement] = STATE(6),
        [sym_delete_statement] = STATE(6),
        [sym__suite] = STATE(571),
        [sym__expression] = STATE(25),
        [sym_binary_operator] = STATE(18),
        [sym_unary_operator] = STATE(18),
        [sym_subscript] = STATE(18),
        [sym_call] = STATE(18),
        [sym_list] = STATE(18),
        [sym_list_comprehension] = STATE(18),
        [sym_dictionary] = STATE(18),
        [sym_dictionary_comprehension] = STATE(18),
        [sym_set] = STATE(18),
        [sym_set_comprehension] = STATE(18),
        [anon_sym_import] = ACTIONS(89),
        [anon_sym_print] = ACTIONS(91),
        [anon_sym_return] = ACTIONS(93),
        [anon_sym_del] = ACTIONS(95),
        [sym_pass_statement] = ACTIONS(97),
        [sym_break_statement] = ACTIONS(97),
        [sym_continue_statement] = ACTIONS(97),
        [anon_sym_not] = ACTIONS(115),
        [anon_sym_LBRACK] = ACTIONS(117),
        [anon_sym_LBRACE] = ACTIONS(119),
        [sym_number] = ACTIONS(121),
        [sym_identifier] = ACTIONS(123),
        [sym_comment] = ACTIONS(79),
        [sym__indent] = ACTIONS(775),
    },
    [571] = {
        [ts_builtin_sym_end] = ACTIONS(1027),
        [anon_sym_SEMI] = ACTIONS(1027),
        [anon_sym_import] = ACTIONS(1025),
        [anon_sym_print] = ACTIONS(1025),
        [anon_sym_return] = ACTIONS(1025),
        [anon_sym_del] = ACTIONS(1025),
        [sym_pass_statement] = ACTIONS(1025),
        [sym_break_statement] = ACTIONS(1025),
        [sym_continue_statement] = ACTIONS(1025),
        [anon_sym_if] = ACTIONS(1025),
        [anon_sym_for] = ACTIONS(1025),
        [anon_sym_while] = ACTIONS(1025),
        [anon_sym_try] = ACTIONS(1025),
        [anon_sym_finally] = ACTIONS(1025),
        [anon_sym_with] = ACTIONS(1025),
        [anon_sym_def] = ACTIONS(1025),
        [anon_sym_class] = ACTIONS(1025),
        [anon_sym_AT] = ACTIONS(1027),
        [anon_sym_not] = ACTIONS(1025),
        [anon_sym_LBRACK] = ACTIONS(1027),
        [anon_sym_LBRACE] = ACTIONS(1027),
        [sym_number] = ACTIONS(1025),
        [sym_identifier] = ACTIONS(1029),
        [sym_comment] = ACTIONS(79),
        [sym__newline] = ACTIONS(1027),
    },
    [572] = {
        [sym__simple_statement] = STATE(389),
        [sym_import_statement] = STATE(6),
        [sym_print_statement] = STATE(6),
        [sym_expression_statement] = STATE(6),
        [sym_return_statement] = STATE(6),
        [sym_delete_statement] = STATE(6),
        [sym__suite] = STATE(573),
        [sym__expression] = STATE(25),
        [sym_binary_operator] = STATE(18),
        [sym_unary_operator] = STATE(18),
        [sym_subscript] = STATE(18),
        [sym_call] = STATE(18),
        [sym_list] = STATE(18),
        [sym_list_comprehension] = STATE(18),
        [sym_dictionary] = STATE(18),
        [sym_dictionary_comprehension] = STATE(18),
        [sym_set] = STATE(18),
        [sym_set_comprehension] = STATE(18),
        [anon_sym_import] = ACTIONS(89),
        [anon_sym_print] = ACTIONS(91),
        [anon_sym_return] = ACTIONS(93),
        [anon_sym_del] = ACTIONS(95),
        [sym_pass_statement] = ACTIONS(97),
        [sym_break_statement] = ACTIONS(97),
        [sym_continue_statement] = ACTIONS(97),
        [anon_sym_not] = ACTIONS(115),
        [anon_sym_LBRACK] = ACTIONS(117),
        [anon_sym_LBRACE] = ACTIONS(119),
        [sym_number] = ACTIONS(121),
        [sym_identifier] = ACTIONS(123),
        [sym_comment] = ACTIONS(79),
        [sym__indent] = ACTIONS(775),
    },
    [573] = {
        [ts_builtin_sym_end] = ACTIONS(1033),
        [anon_sym_SEMI] = ACTIONS(1033),
        [anon_sym_import] = ACTIONS(1031),
        [anon_sym_print] = ACTIONS(1031),
        [anon_sym_return] = ACTIONS(1031),
        [anon_sym_del] = ACTIONS(1031),
        [sym_pass_statement] = ACTIONS(1031),
        [sym_break_statement] = ACTIONS(1031),
        [sym_continue_statement] = ACTIONS(1031),
        [anon_sym_if] = ACTIONS(1031),
        [anon_sym_for] = ACTIONS(1031),
        [anon_sym_while] = ACTIONS(1031),
        [anon_sym_try] = ACTIONS(1031),
        [anon_sym_with] = ACTIONS(1031),
        [anon_sym_def] = ACTIONS(1031),
        [anon_sym_class] = ACTIONS(1031),
        [anon_sym_AT] = ACTIONS(1033),
        [anon_sym_not] = ACTIONS(1031),
        [anon_sym_LBRACK] = ACTIONS(1033),
        [anon_sym_LBRACE] = ACTIONS(1033),
        [sym_number] = ACTIONS(1031),
        [sym_identifier] = ACTIONS(1035),
        [sym_comment] = ACTIONS(79),
        [sym__newline] = ACTIONS(1033),
    },
    [574] = {
        [anon_sym_COMMA] = ACTIONS(1153),
        [anon_sym_as] = ACTIONS(1153),
        [anon_sym_COLON] = ACTIONS(1155),
        [anon_sym_LPAREN] = ACTIONS(251),
        [anon_sym_STAR] = ACTIONS(925),
        [anon_sym_PLUS] = ACTIONS(927),
        [anon_sym_DASH] = ACTIONS(927),
        [anon_sym_SLASH] = ACTIONS(929),
        [anon_sym_STAR_STAR] = ACTIONS(931),
        [anon_sym_PIPE] = ACTIONS(933),
        [anon_sym_AMP] = ACTIONS(935),
        [anon_sym_CARET] = ACTIONS(937),
        [anon_sym_LT_LT] = ACTIONS(927),
        [anon_sym_GT_GT] = ACTIONS(927),
        [anon_sym_and] = ACTIONS(935),
        [anon_sym_or] = ACTIONS(933),
        [anon_sym_LBRACK] = ACTIONS(267),
        [sym_comment] = ACTIONS(79),
    },
    [575] = {
        [sym__expression] = STATE(578),
        [sym_binary_operator] = STATE(44),
        [sym_unary_operator] = STATE(44),
        [sym_subscript] = STATE(44),
        [sym_call] = STATE(44),
        [sym_list] = STATE(44),
        [sym_list_comprehension] = STATE(44),
        [sym_dictionary] = STATE(44),
        [sym_dictionary_comprehension] = STATE(44),
        [sym_set] = STATE(44),
        [sym_set_comprehension] = STATE(44),
        [anon_sym_not] = ACTIONS(131),
        [anon_sym_LBRACK] = ACTIONS(133),
        [anon_sym_LBRACE] = ACTIONS(135),
        [sym_number] = ACTIONS(137),
        [sym_identifier] = ACTIONS(139),
        [sym_comment] = ACTIONS(79),
    },
    [576] = {
        [sym__simple_statement] = STATE(389),
        [sym_import_statement] = STATE(6),
        [sym_print_statement] = STATE(6),
        [sym_expression_statement] = STATE(6),
        [sym_return_statement] = STATE(6),
        [sym_delete_statement] = STATE(6),
        [sym__suite] = STATE(577),
        [sym__expression] = STATE(25),
        [sym_binary_operator] = STATE(18),
        [sym_unary_operator] = STATE(18),
        [sym_subscript] = STATE(18),
        [sym_call] = STATE(18),
        [sym_list] = STATE(18),
        [sym_list_comprehension] = STATE(18),
        [sym_dictionary] = STATE(18),
        [sym_dictionary_comprehension] = STATE(18),
        [sym_set] = STATE(18),
        [sym_set_comprehension] = STATE(18),
        [anon_sym_import] = ACTIONS(89),
        [anon_sym_print] = ACTIONS(91),
        [anon_sym_return] = ACTIONS(93),
        [anon_sym_del] = ACTIONS(95),
        [sym_pass_statement] = ACTIONS(97),
        [sym_break_statement] = ACTIONS(97),
        [sym_continue_statement] = ACTIONS(97),
        [anon_sym_not] = ACTIONS(115),
        [anon_sym_LBRACK] = ACTIONS(117),
        [anon_sym_LBRACE] = ACTIONS(119),
        [sym_number] = ACTIONS(121),
        [sym_identifier] = ACTIONS(123),
        [sym_comment] = ACTIONS(79),
        [sym__indent] = ACTIONS(775),
    },
    [577] = {
        [ts_builtin_sym_end] = ACTIONS(1043),
        [anon_sym_SEMI] = ACTIONS(1043),
        [anon_sym_import] = ACTIONS(1041),
        [anon_sym_print] = ACTIONS(1041),
        [anon_sym_return] = ACTIONS(1041),
        [anon_sym_del] = ACTIONS(1041),
        [sym_pass_statement] = ACTIONS(1041),
        [sym_break_statement] = ACTIONS(1041),
        [sym_continue_statement] = ACTIONS(1041),
        [anon_sym_if] = ACTIONS(1041),
        [anon_sym_else] = ACTIONS(1041),
        [anon_sym_for] = ACTIONS(1041),
        [anon_sym_while] = ACTIONS(1041),
        [anon_sym_try] = ACTIONS(1041),
        [anon_sym_except] = ACTIONS(1041),
        [anon_sym_finally] = ACTIONS(1041),
        [anon_sym_with] = ACTIONS(1041),
        [anon_sym_def] = ACTIONS(1041),
        [anon_sym_class] = ACTIONS(1041),
        [anon_sym_AT] = ACTIONS(1043),
        [anon_sym_not] = ACTIONS(1041),
        [anon_sym_LBRACK] = ACTIONS(1043),
        [anon_sym_LBRACE] = ACTIONS(1043),
        [sym_number] = ACTIONS(1041),
        [sym_identifier] = ACTIONS(1045),
        [sym_comment] = ACTIONS(79),
        [sym__newline] = ACTIONS(1043),
    },
    [578] = {
        [anon_sym_COLON] = ACTIONS(1157),
        [anon_sym_LPAREN] = ACTIONS(251),
        [anon_sym_STAR] = ACTIONS(441),
        [anon_sym_PLUS] = ACTIONS(443),
        [anon_sym_DASH] = ACTIONS(443),
        [anon_sym_SLASH] = ACTIONS(445),
        [anon_sym_STAR_STAR] = ACTIONS(447),
        [anon_sym_PIPE] = ACTIONS(449),
        [anon_sym_AMP] = ACTIONS(451),
        [anon_sym_CARET] = ACTIONS(453),
        [anon_sym_LT_LT] = ACTIONS(443),
        [anon_sym_GT_GT] = ACTIONS(443),
        [anon_sym_and] = ACTIONS(451),
        [anon_sym_or] = ACTIONS(449),
        [anon_sym_LBRACK] = ACTIONS(267),
        [sym_comment] = ACTIONS(79),
    },
    [579] = {
        [sym__simple_statement] = STATE(389),
        [sym_import_statement] = STATE(6),
        [sym_print_statement] = STATE(6),
        [sym_expression_statement] = STATE(6),
        [sym_return_statement] = STATE(6),
        [sym_delete_statement] = STATE(6),
        [sym__suite] = STATE(580),
        [sym__expression] = STATE(25),
        [sym_binary_operator] = STATE(18),
        [sym_unary_operator] = STATE(18),
        [sym_subscript] = STATE(18),
        [sym_call] = STATE(18),
        [sym_list] = STATE(18),
        [sym_list_comprehension] = STATE(18),
        [sym_dictionary] = STATE(18),
        [sym_dictionary_comprehension] = STATE(18),
        [sym_set] = STATE(18),
        [sym_set_comprehension] = STATE(18),
        [anon_sym_import] = ACTIONS(89),
        [anon_sym_print] = ACTIONS(91),
        [anon_sym_return] = ACTIONS(93),
        [anon_sym_del] = ACTIONS(95),
        [sym_pass_statement] = ACTIONS(97),
        [sym_break_statement] = ACTIONS(97),
        [sym_continue_statement] = ACTIONS(97),
        [anon_sym_not] = ACTIONS(115),
        [anon_sym_LBRACK] = ACTIONS(117),
        [anon_sym_LBRACE] = ACTIONS(119),
        [sym_number] = ACTIONS(121),
        [sym_identifier] = ACTIONS(123),
        [sym_comment] = ACTIONS(79),
        [sym__indent] = ACTIONS(775),
    },
    [580] = {
        [ts_builtin_sym_end] = ACTIONS(1051),
        [anon_sym_SEMI] = ACTIONS(1051),
        [anon_sym_import] = ACTIONS(1049),
        [anon_sym_print] = ACTIONS(1049),
        [anon_sym_return] = ACTIONS(1049),
        [anon_sym_del] = ACTIONS(1049),
        [sym_pass_statement] = ACTIONS(1049),
        [sym_break_statement] = ACTIONS(1049),
        [sym_continue_statement] = ACTIONS(1049),
        [anon_sym_if] = ACTIONS(1049),
        [anon_sym_else] = ACTIONS(1049),
        [anon_sym_for] = ACTIONS(1049),
        [anon_sym_while] = ACTIONS(1049),
        [anon_sym_try] = ACTIONS(1049),
        [anon_sym_except] = ACTIONS(1049),
        [anon_sym_finally] = ACTIONS(1049),
        [anon_sym_with] = ACTIONS(1049),
        [anon_sym_def] = ACTIONS(1049),
        [anon_sym_class] = ACTIONS(1049),
        [anon_sym_AT] = ACTIONS(1051),
        [anon_sym_not] = ACTIONS(1049),
        [anon_sym_LBRACK] = ACTIONS(1051),
        [anon_sym_LBRACE] = ACTIONS(1051),
        [sym_number] = ACTIONS(1049),
        [sym_identifier] = ACTIONS(1053),
        [sym_comment] = ACTIONS(79),
        [sym__newline] = ACTIONS(1051),
    },
    [581] = {
        [anon_sym_COLON] = ACTIONS(1159),
        [anon_sym_LPAREN] = ACTIONS(251),
        [anon_sym_STAR] = ACTIONS(441),
        [anon_sym_PLUS] = ACTIONS(443),
        [anon_sym_DASH] = ACTIONS(443),
        [anon_sym_SLASH] = ACTIONS(445),
        [anon_sym_STAR_STAR] = ACTIONS(447),
        [anon_sym_PIPE] = ACTIONS(449),
        [anon_sym_AMP] = ACTIONS(451),
        [anon_sym_CARET] = ACTIONS(453),
        [anon_sym_LT_LT] = ACTIONS(443),
        [anon_sym_GT_GT] = ACTIONS(443),
        [anon_sym_and] = ACTIONS(451),
        [anon_sym_or] = ACTIONS(449),
        [anon_sym_LBRACK] = ACTIONS(267),
        [sym_comment] = ACTIONS(79),
    },
    [582] = {
        [sym__simple_statement] = STATE(389),
        [sym_import_statement] = STATE(6),
        [sym_print_statement] = STATE(6),
        [sym_expression_statement] = STATE(6),
        [sym_return_statement] = STATE(6),
        [sym_delete_statement] = STATE(6),
        [sym__suite] = STATE(583),
        [sym__expression] = STATE(25),
        [sym_binary_operator] = STATE(18),
        [sym_unary_operator] = STATE(18),
        [sym_subscript] = STATE(18),
        [sym_call] = STATE(18),
        [sym_list] = STATE(18),
        [sym_list_comprehension] = STATE(18),
        [sym_dictionary] = STATE(18),
        [sym_dictionary_comprehension] = STATE(18),
        [sym_set] = STATE(18),
        [sym_set_comprehension] = STATE(18),
        [anon_sym_import] = ACTIONS(89),
        [anon_sym_print] = ACTIONS(91),
        [anon_sym_return] = ACTIONS(93),
        [anon_sym_del] = ACTIONS(95),
        [sym_pass_statement] = ACTIONS(97),
        [sym_break_statement] = ACTIONS(97),
        [sym_continue_statement] = ACTIONS(97),
        [anon_sym_not] = ACTIONS(115),
        [anon_sym_LBRACK] = ACTIONS(117),
        [anon_sym_LBRACE] = ACTIONS(119),
        [sym_number] = ACTIONS(121),
        [sym_identifier] = ACTIONS(123),
        [sym_comment] = ACTIONS(79),
        [sym__indent] = ACTIONS(775),
    },
    [583] = {
        [sym_else_clause] = STATE(584),
        [ts_builtin_sym_end] = ACTIONS(1061),
        [anon_sym_SEMI] = ACTIONS(1061),
        [anon_sym_import] = ACTIONS(1059),
        [anon_sym_print] = ACTIONS(1059),
        [anon_sym_return] = ACTIONS(1059),
        [anon_sym_del] = ACTIONS(1059),
        [sym_pass_statement] = ACTIONS(1059),
        [sym_break_statement] = ACTIONS(1059),
        [sym_continue_statement] = ACTIONS(1059),
        [anon_sym_if] = ACTIONS(1059),
        [anon_sym_else] = ACTIONS(1145),
        [anon_sym_for] = ACTIONS(1059),
        [anon_sym_while] = ACTIONS(1059),
        [anon_sym_try] = ACTIONS(1059),
        [anon_sym_with] = ACTIONS(1059),
        [anon_sym_def] = ACTIONS(1059),
        [anon_sym_class] = ACTIONS(1059),
        [anon_sym_AT] = ACTIONS(1061),
        [anon_sym_not] = ACTIONS(1059),
        [anon_sym_LBRACK] = ACTIONS(1061),
        [anon_sym_LBRACE] = ACTIONS(1061),
        [sym_number] = ACTIONS(1059),
        [sym_identifier] = ACTIONS(1063),
        [sym_comment] = ACTIONS(79),
        [sym__newline] = ACTIONS(1061),
    },
    [584] = {
        [ts_builtin_sym_end] = ACTIONS(1067),
        [anon_sym_SEMI] = ACTIONS(1067),
        [anon_sym_import] = ACTIONS(1065),
        [anon_sym_print] = ACTIONS(1065),
        [anon_sym_return] = ACTIONS(1065),
        [anon_sym_del] = ACTIONS(1065),
        [sym_pass_statement] = ACTIONS(1065),
        [sym_break_statement] = ACTIONS(1065),
        [sym_continue_statement] = ACTIONS(1065),
        [anon_sym_if] = ACTIONS(1065),
        [anon_sym_for] = ACTIONS(1065),
        [anon_sym_while] = ACTIONS(1065),
        [anon_sym_try] = ACTIONS(1065),
        [anon_sym_with] = ACTIONS(1065),
        [anon_sym_def] = ACTIONS(1065),
        [anon_sym_class] = ACTIONS(1065),
        [anon_sym_AT] = ACTIONS(1067),
        [anon_sym_not] = ACTIONS(1065),
        [anon_sym_LBRACK] = ACTIONS(1067),
        [anon_sym_LBRACE] = ACTIONS(1067),
        [sym_number] = ACTIONS(1065),
        [sym_identifier] = ACTIONS(1069),
        [sym_comment] = ACTIONS(79),
        [sym__newline] = ACTIONS(1067),
    },
    [585] = {
        [anon_sym_in] = ACTIONS(1161),
        [sym_comment] = ACTIONS(79),
    },
    [586] = {
        [sym_expression_list] = STATE(587),
        [sym__expression] = STATE(526),
        [sym_binary_operator] = STATE(44),
        [sym_unary_operator] = STATE(44),
        [sym_subscript] = STATE(44),
        [sym_call] = STATE(44),
        [sym_list] = STATE(44),
        [sym_list_comprehension] = STATE(44),
        [sym_dictionary] = STATE(44),
        [sym_dictionary_comprehension] = STATE(44),
        [sym_set] = STATE(44),
        [sym_set_comprehension] = STATE(44),
        [anon_sym_not] = ACTIONS(939),
        [anon_sym_LBRACK] = ACTIONS(133),
        [anon_sym_LBRACE] = ACTIONS(135),
        [sym_number] = ACTIONS(137),
        [sym_identifier] = ACTIONS(139),
        [sym_comment] = ACTIONS(79),
    },
    [587] = {
        [anon_sym_COLON] = ACTIONS(1163),
        [sym_comment] = ACTIONS(79),
    },
    [588] = {
        [sym__simple_statement] = STATE(389),
        [sym_import_statement] = STATE(6),
        [sym_print_statement] = STATE(6),
        [sym_expression_statement] = STATE(6),
        [sym_return_statement] = STATE(6),
        [sym_delete_statement] = STATE(6),
        [sym__suite] = STATE(589),
        [sym__expression] = STATE(25),
        [sym_binary_operator] = STATE(18),
        [sym_unary_operator] = STATE(18),
        [sym_subscript] = STATE(18),
        [sym_call] = STATE(18),
        [sym_list] = STATE(18),
        [sym_list_comprehension] = STATE(18),
        [sym_dictionary] = STATE(18),
        [sym_dictionary_comprehension] = STATE(18),
        [sym_set] = STATE(18),
        [sym_set_comprehension] = STATE(18),
        [anon_sym_import] = ACTIONS(89),
        [anon_sym_print] = ACTIONS(91),
        [anon_sym_return] = ACTIONS(93),
        [anon_sym_del] = ACTIONS(95),
        [sym_pass_statement] = ACTIONS(97),
        [sym_break_statement] = ACTIONS(97),
        [sym_continue_statement] = ACTIONS(97),
        [anon_sym_not] = ACTIONS(115),
        [anon_sym_LBRACK] = ACTIONS(117),
        [anon_sym_LBRACE] = ACTIONS(119),
        [sym_number] = ACTIONS(121),
        [sym_identifier] = ACTIONS(123),
        [sym_comment] = ACTIONS(79),
        [sym__indent] = ACTIONS(775),
    },
    [589] = {
        [sym_else_clause] = STATE(590),
        [ts_builtin_sym_end] = ACTIONS(1081),
        [anon_sym_SEMI] = ACTIONS(1081),
        [anon_sym_import] = ACTIONS(1079),
        [anon_sym_print] = ACTIONS(1079),
        [anon_sym_return] = ACTIONS(1079),
        [anon_sym_del] = ACTIONS(1079),
        [sym_pass_statement] = ACTIONS(1079),
        [sym_break_statement] = ACTIONS(1079),
        [sym_continue_statement] = ACTIONS(1079),
        [anon_sym_if] = ACTIONS(1079),
        [anon_sym_else] = ACTIONS(1145),
        [anon_sym_for] = ACTIONS(1079),
        [anon_sym_while] = ACTIONS(1079),
        [anon_sym_try] = ACTIONS(1079),
        [anon_sym_with] = ACTIONS(1079),
        [anon_sym_def] = ACTIONS(1079),
        [anon_sym_class] = ACTIONS(1079),
        [anon_sym_AT] = ACTIONS(1081),
        [anon_sym_not] = ACTIONS(1079),
        [anon_sym_LBRACK] = ACTIONS(1081),
        [anon_sym_LBRACE] = ACTIONS(1081),
        [sym_number] = ACTIONS(1079),
        [sym_identifier] = ACTIONS(1083),
        [sym_comment] = ACTIONS(79),
        [sym__newline] = ACTIONS(1081),
    },
    [590] = {
        [ts_builtin_sym_end] = ACTIONS(1087),
        [anon_sym_SEMI] = ACTIONS(1087),
        [anon_sym_import] = ACTIONS(1085),
        [anon_sym_print] = ACTIONS(1085),
        [anon_sym_return] = ACTIONS(1085),
        [anon_sym_del] = ACTIONS(1085),
        [sym_pass_statement] = ACTIONS(1085),
        [sym_break_statement] = ACTIONS(1085),
        [sym_continue_statement] = ACTIONS(1085),
        [anon_sym_if] = ACTIONS(1085),
        [anon_sym_for] = ACTIONS(1085),
        [anon_sym_while] = ACTIONS(1085),
        [anon_sym_try] = ACTIONS(1085),
        [anon_sym_with] = ACTIONS(1085),
        [anon_sym_def] = ACTIONS(1085),
        [anon_sym_class] = ACTIONS(1085),
        [anon_sym_AT] = ACTIONS(1087),
        [anon_sym_not] = ACTIONS(1085),
        [anon_sym_LBRACK] = ACTIONS(1087),
        [anon_sym_LBRACE] = ACTIONS(1087),
        [sym_number] = ACTIONS(1085),
        [sym_identifier] = ACTIONS(1089),
        [sym_comment] = ACTIONS(79),
        [sym__newline] = ACTIONS(1087),
    },
    [591] = {
        [anon_sym_COLON] = ACTIONS(1165),
        [anon_sym_LPAREN] = ACTIONS(251),
        [anon_sym_STAR] = ACTIONS(441),
        [anon_sym_PLUS] = ACTIONS(443),
        [anon_sym_DASH] = ACTIONS(443),
        [anon_sym_SLASH] = ACTIONS(445),
        [anon_sym_STAR_STAR] = ACTIONS(447),
        [anon_sym_PIPE] = ACTIONS(449),
        [anon_sym_AMP] = ACTIONS(451),
        [anon_sym_CARET] = ACTIONS(453),
        [anon_sym_LT_LT] = ACTIONS(443),
        [anon_sym_GT_GT] = ACTIONS(443),
        [anon_sym_and] = ACTIONS(451),
        [anon_sym_or] = ACTIONS(449),
        [anon_sym_LBRACK] = ACTIONS(267),
        [sym_comment] = ACTIONS(79),
    },
    [592] = {
        [sym__simple_statement] = STATE(389),
        [sym_import_statement] = STATE(6),
        [sym_print_statement] = STATE(6),
        [sym_expression_statement] = STATE(6),
        [sym_return_statement] = STATE(6),
        [sym_delete_statement] = STATE(6),
        [sym__suite] = STATE(593),
        [sym__expression] = STATE(25),
        [sym_binary_operator] = STATE(18),
        [sym_unary_operator] = STATE(18),
        [sym_subscript] = STATE(18),
        [sym_call] = STATE(18),
        [sym_list] = STATE(18),
        [sym_list_comprehension] = STATE(18),
        [sym_dictionary] = STATE(18),
        [sym_dictionary_comprehension] = STATE(18),
        [sym_set] = STATE(18),
        [sym_set_comprehension] = STATE(18),
        [anon_sym_import] = ACTIONS(89),
        [anon_sym_print] = ACTIONS(91),
        [anon_sym_return] = ACTIONS(93),
        [anon_sym_del] = ACTIONS(95),
        [sym_pass_statement] = ACTIONS(97),
        [sym_break_statement] = ACTIONS(97),
        [sym_continue_statement] = ACTIONS(97),
        [anon_sym_not] = ACTIONS(115),
        [anon_sym_LBRACK] = ACTIONS(117),
        [anon_sym_LBRACE] = ACTIONS(119),
        [sym_number] = ACTIONS(121),
        [sym_identifier] = ACTIONS(123),
        [sym_comment] = ACTIONS(79),
        [sym__indent] = ACTIONS(775),
    },
    [593] = {
        [sym_elif_clause] = STATE(595),
        [sym_else_clause] = STATE(596),
        [aux_sym_if_statement_repeat1] = STATE(597),
        [ts_builtin_sym_end] = ACTIONS(1097),
        [anon_sym_SEMI] = ACTIONS(1097),
        [anon_sym_import] = ACTIONS(1093),
        [anon_sym_print] = ACTIONS(1093),
        [anon_sym_return] = ACTIONS(1093),
        [anon_sym_del] = ACTIONS(1093),
        [sym_pass_statement] = ACTIONS(1093),
        [sym_break_statement] = ACTIONS(1093),
        [sym_continue_statement] = ACTIONS(1093),
        [anon_sym_if] = ACTIONS(1093),
        [anon_sym_elif] = ACTIONS(1167),
        [anon_sym_else] = ACTIONS(1145),
        [anon_sym_for] = ACTIONS(1093),
        [anon_sym_while] = ACTIONS(1093),
        [anon_sym_try] = ACTIONS(1093),
        [anon_sym_with] = ACTIONS(1093),
        [anon_sym_def] = ACTIONS(1093),
        [anon_sym_class] = ACTIONS(1093),
        [anon_sym_AT] = ACTIONS(1097),
        [anon_sym_not] = ACTIONS(1093),
        [anon_sym_LBRACK] = ACTIONS(1097),
        [anon_sym_LBRACE] = ACTIONS(1097),
        [sym_number] = ACTIONS(1093),
        [sym_identifier] = ACTIONS(1099),
        [sym_comment] = ACTIONS(79),
        [sym__newline] = ACTIONS(1097),
    },
    [594] = {
        [sym__expression] = STATE(600),
        [sym_binary_operator] = STATE(44),
        [sym_unary_operator] = STATE(44),
        [sym_subscript] = STATE(44),
        [sym_call] = STATE(44),
        [sym_list] = STATE(44),
        [sym_list_comprehension] = STATE(44),
        [sym_dictionary] = STATE(44),
        [sym_dictionary_comprehension] = STATE(44),
        [sym_set] = STATE(44),
        [sym_set_comprehension] = STATE(44),
        [anon_sym_not] = ACTIONS(131),
        [anon_sym_LBRACK] = ACTIONS(133),
        [anon_sym_LBRACE] = ACTIONS(135),
        [sym_number] = ACTIONS(137),
        [sym_identifier] = ACTIONS(139),
        [sym_comment] = ACTIONS(79),
    },
    [595] = {
        [ts_builtin_sym_end] = ACTIONS(1103),
        [anon_sym_SEMI] = ACTIONS(1103),
        [anon_sym_import] = ACTIONS(1101),
        [anon_sym_print] = ACTIONS(1101),
        [anon_sym_return] = ACTIONS(1101),
        [anon_sym_del] = ACTIONS(1101),
        [sym_pass_statement] = ACTIONS(1101),
        [sym_break_statement] = ACTIONS(1101),
        [sym_continue_statement] = ACTIONS(1101),
        [anon_sym_if] = ACTIONS(1101),
        [anon_sym_elif] = ACTIONS(1101),
        [anon_sym_else] = ACTIONS(1101),
        [anon_sym_for] = ACTIONS(1101),
        [anon_sym_while] = ACTIONS(1101),
        [anon_sym_try] = ACTIONS(1101),
        [anon_sym_with] = ACTIONS(1101),
        [anon_sym_def] = ACTIONS(1101),
        [anon_sym_class] = ACTIONS(1101),
        [anon_sym_AT] = ACTIONS(1103),
        [anon_sym_not] = ACTIONS(1101),
        [anon_sym_LBRACK] = ACTIONS(1103),
        [anon_sym_LBRACE] = ACTIONS(1103),
        [sym_number] = ACTIONS(1101),
        [sym_identifier] = ACTIONS(1105),
        [sym_comment] = ACTIONS(79),
        [sym__newline] = ACTIONS(1103),
    },
    [596] = {
        [ts_builtin_sym_end] = ACTIONS(1109),
        [anon_sym_SEMI] = ACTIONS(1109),
        [anon_sym_import] = ACTIONS(1107),
        [anon_sym_print] = ACTIONS(1107),
        [anon_sym_return] = ACTIONS(1107),
        [anon_sym_del] = ACTIONS(1107),
        [sym_pass_statement] = ACTIONS(1107),
        [sym_break_statement] = ACTIONS(1107),
        [sym_continue_statement] = ACTIONS(1107),
        [anon_sym_if] = ACTIONS(1107),
        [anon_sym_for] = ACTIONS(1107),
        [anon_sym_while] = ACTIONS(1107),
        [anon_sym_try] = ACTIONS(1107),
        [anon_sym_with] = ACTIONS(1107),
        [anon_sym_def] = ACTIONS(1107),
        [anon_sym_class] = ACTIONS(1107),
        [anon_sym_AT] = ACTIONS(1109),
        [anon_sym_not] = ACTIONS(1107),
        [anon_sym_LBRACK] = ACTIONS(1109),
        [anon_sym_LBRACE] = ACTIONS(1109),
        [sym_number] = ACTIONS(1107),
        [sym_identifier] = ACTIONS(1111),
        [sym_comment] = ACTIONS(79),
        [sym__newline] = ACTIONS(1109),
    },
    [597] = {
        [sym_elif_clause] = STATE(598),
        [sym_else_clause] = STATE(599),
        [ts_builtin_sym_end] = ACTIONS(1109),
        [anon_sym_SEMI] = ACTIONS(1109),
        [anon_sym_import] = ACTIONS(1107),
        [anon_sym_print] = ACTIONS(1107),
        [anon_sym_return] = ACTIONS(1107),
        [anon_sym_del] = ACTIONS(1107),
        [sym_pass_statement] = ACTIONS(1107),
        [sym_break_statement] = ACTIONS(1107),
        [sym_continue_statement] = ACTIONS(1107),
        [anon_sym_if] = ACTIONS(1107),
        [anon_sym_elif] = ACTIONS(1167),
        [anon_sym_else] = ACTIONS(1145),
        [anon_sym_for] = ACTIONS(1107),
        [anon_sym_while] = ACTIONS(1107),
        [anon_sym_try] = ACTIONS(1107),
        [anon_sym_with] = ACTIONS(1107),
        [anon_sym_def] = ACTIONS(1107),
        [anon_sym_class] = ACTIONS(1107),
        [anon_sym_AT] = ACTIONS(1109),
        [anon_sym_not] = ACTIONS(1107),
        [anon_sym_LBRACK] = ACTIONS(1109),
        [anon_sym_LBRACE] = ACTIONS(1109),
        [sym_number] = ACTIONS(1107),
        [sym_identifier] = ACTIONS(1111),
        [sym_comment] = ACTIONS(79),
        [sym__newline] = ACTIONS(1109),
    },
    [598] = {
        [ts_builtin_sym_end] = ACTIONS(1115),
        [anon_sym_SEMI] = ACTIONS(1115),
        [anon_sym_import] = ACTIONS(1113),
        [anon_sym_print] = ACTIONS(1113),
        [anon_sym_return] = ACTIONS(1113),
        [anon_sym_del] = ACTIONS(1113),
        [sym_pass_statement] = ACTIONS(1113),
        [sym_break_statement] = ACTIONS(1113),
        [sym_continue_statement] = ACTIONS(1113),
        [anon_sym_if] = ACTIONS(1113),
        [anon_sym_elif] = ACTIONS(1113),
        [anon_sym_else] = ACTIONS(1113),
        [anon_sym_for] = ACTIONS(1113),
        [anon_sym_while] = ACTIONS(1113),
        [anon_sym_try] = ACTIONS(1113),
        [anon_sym_with] = ACTIONS(1113),
        [anon_sym_def] = ACTIONS(1113),
        [anon_sym_class] = ACTIONS(1113),
        [anon_sym_AT] = ACTIONS(1115),
        [anon_sym_not] = ACTIONS(1113),
        [anon_sym_LBRACK] = ACTIONS(1115),
        [anon_sym_LBRACE] = ACTIONS(1115),
        [sym_number] = ACTIONS(1113),
        [sym_identifier] = ACTIONS(1117),
        [sym_comment] = ACTIONS(79),
        [sym__newline] = ACTIONS(1115),
    },
    [599] = {
        [ts_builtin_sym_end] = ACTIONS(1121),
        [anon_sym_SEMI] = ACTIONS(1121),
        [anon_sym_import] = ACTIONS(1119),
        [anon_sym_print] = ACTIONS(1119),
        [anon_sym_return] = ACTIONS(1119),
        [anon_sym_del] = ACTIONS(1119),
        [sym_pass_statement] = ACTIONS(1119),
        [sym_break_statement] = ACTIONS(1119),
        [sym_continue_statement] = ACTIONS(1119),
        [anon_sym_if] = ACTIONS(1119),
        [anon_sym_for] = ACTIONS(1119),
        [anon_sym_while] = ACTIONS(1119),
        [anon_sym_try] = ACTIONS(1119),
        [anon_sym_with] = ACTIONS(1119),
        [anon_sym_def] = ACTIONS(1119),
        [anon_sym_class] = ACTIONS(1119),
        [anon_sym_AT] = ACTIONS(1121),
        [anon_sym_not] = ACTIONS(1119),
        [anon_sym_LBRACK] = ACTIONS(1121),
        [anon_sym_LBRACE] = ACTIONS(1121),
        [sym_number] = ACTIONS(1119),
        [sym_identifier] = ACTIONS(1123),
        [sym_comment] = ACTIONS(79),
        [sym__newline] = ACTIONS(1121),
    },
    [600] = {
        [anon_sym_COLON] = ACTIONS(1169),
        [anon_sym_LPAREN] = ACTIONS(251),
        [anon_sym_STAR] = ACTIONS(441),
        [anon_sym_PLUS] = ACTIONS(443),
        [anon_sym_DASH] = ACTIONS(443),
        [anon_sym_SLASH] = ACTIONS(445),
        [anon_sym_STAR_STAR] = ACTIONS(447),
        [anon_sym_PIPE] = ACTIONS(449),
        [anon_sym_AMP] = ACTIONS(451),
        [anon_sym_CARET] = ACTIONS(453),
        [anon_sym_LT_LT] = ACTIONS(443),
        [anon_sym_GT_GT] = ACTIONS(443),
        [anon_sym_and] = ACTIONS(451),
        [anon_sym_or] = ACTIONS(449),
        [anon_sym_LBRACK] = ACTIONS(267),
        [sym_comment] = ACTIONS(79),
    },
    [601] = {
        [sym__simple_statement] = STATE(389),
        [sym_import_statement] = STATE(6),
        [sym_print_statement] = STATE(6),
        [sym_expression_statement] = STATE(6),
        [sym_return_statement] = STATE(6),
        [sym_delete_statement] = STATE(6),
        [sym__suite] = STATE(602),
        [sym__expression] = STATE(25),
        [sym_binary_operator] = STATE(18),
        [sym_unary_operator] = STATE(18),
        [sym_subscript] = STATE(18),
        [sym_call] = STATE(18),
        [sym_list] = STATE(18),
        [sym_list_comprehension] = STATE(18),
        [sym_dictionary] = STATE(18),
        [sym_dictionary_comprehension] = STATE(18),
        [sym_set] = STATE(18),
        [sym_set_comprehension] = STATE(18),
        [anon_sym_import] = ACTIONS(89),
        [anon_sym_print] = ACTIONS(91),
        [anon_sym_return] = ACTIONS(93),
        [anon_sym_del] = ACTIONS(95),
        [sym_pass_statement] = ACTIONS(97),
        [sym_break_statement] = ACTIONS(97),
        [sym_continue_statement] = ACTIONS(97),
        [anon_sym_not] = ACTIONS(115),
        [anon_sym_LBRACK] = ACTIONS(117),
        [anon_sym_LBRACE] = ACTIONS(119),
        [sym_number] = ACTIONS(121),
        [sym_identifier] = ACTIONS(123),
        [sym_comment] = ACTIONS(79),
        [sym__indent] = ACTIONS(775),
    },
    [602] = {
        [ts_builtin_sym_end] = ACTIONS(1129),
        [anon_sym_SEMI] = ACTIONS(1129),
        [anon_sym_import] = ACTIONS(1127),
        [anon_sym_print] = ACTIONS(1127),
        [anon_sym_return] = ACTIONS(1127),
        [anon_sym_del] = ACTIONS(1127),
        [sym_pass_statement] = ACTIONS(1127),
        [sym_break_statement] = ACTIONS(1127),
        [sym_continue_statement] = ACTIONS(1127),
        [anon_sym_if] = ACTIONS(1127),
        [anon_sym_elif] = ACTIONS(1127),
        [anon_sym_else] = ACTIONS(1127),
        [anon_sym_for] = ACTIONS(1127),
        [anon_sym_while] = ACTIONS(1127),
        [anon_sym_try] = ACTIONS(1127),
        [anon_sym_with] = ACTIONS(1127),
        [anon_sym_def] = ACTIONS(1127),
        [anon_sym_class] = ACTIONS(1127),
        [anon_sym_AT] = ACTIONS(1129),
        [anon_sym_not] = ACTIONS(1127),
        [anon_sym_LBRACK] = ACTIONS(1129),
        [anon_sym_LBRACE] = ACTIONS(1129),
        [sym_number] = ACTIONS(1127),
        [sym_identifier] = ACTIONS(1131),
        [sym_comment] = ACTIONS(79),
        [sym__newline] = ACTIONS(1129),
    },
    [603] = {
        [sym__expression] = STATE(360),
        [sym_binary_operator] = STATE(18),
        [sym_unary_operator] = STATE(18),
        [sym_subscript] = STATE(18),
        [sym_call] = STATE(18),
        [sym_list] = STATE(18),
        [sym_list_comprehension] = STATE(18),
        [sym_dictionary] = STATE(18),
        [sym_dictionary_comprehension] = STATE(18),
        [sym_set] = STATE(18),
        [sym_set_comprehension] = STATE(18),
        [anon_sym_not] = ACTIONS(127),
        [anon_sym_LBRACK] = ACTIONS(117),
        [anon_sym_LBRACE] = ACTIONS(119),
        [sym_number] = ACTIONS(121),
        [sym_identifier] = ACTIONS(123),
        [sym_comment] = ACTIONS(79),
    },
    [604] = {
        [sym_comment] = ACTIONS(79),
        [sym__newline] = ACTIONS(1171),
    },
    [605] = {
        [aux_sym_print_statement_repeat1] = STATE(613),
        [anon_sym_COMMA] = ACTIONS(1173),
        [anon_sym_LPAREN] = ACTIONS(187),
        [anon_sym_STAR] = ACTIONS(1175),
        [anon_sym_PLUS] = ACTIONS(1177),
        [anon_sym_DASH] = ACTIONS(1177),
        [anon_sym_SLASH] = ACTIONS(1179),
        [anon_sym_STAR_STAR] = ACTIONS(1181),
        [anon_sym_PIPE] = ACTIONS(1183),
        [anon_sym_AMP] = ACTIONS(1185),
        [anon_sym_CARET] = ACTIONS(1187),
        [anon_sym_LT_LT] = ACTIONS(1177),
        [anon_sym_GT_GT] = ACTIONS(1177),
        [anon_sym_and] = ACTIONS(1185),
        [anon_sym_or] = ACTIONS(1183),
        [anon_sym_LBRACK] = ACTIONS(203),
        [sym_comment] = ACTIONS(79),
        [sym__newline] = ACTIONS(479),
    },
    [606] = {
        [sym__expression] = STATE(621),
        [sym_binary_operator] = STATE(18),
        [sym_unary_operator] = STATE(18),
        [sym_subscript] = STATE(18),
        [sym_call] = STATE(18),
        [sym_list] = STATE(18),
        [sym_list_comprehension] = STATE(18),
        [sym_dictionary] = STATE(18),
        [sym_dictionary_comprehension] = STATE(18),
        [sym_set] = STATE(18),
        [sym_set_comprehension] = STATE(18),
        [anon_sym_not] = ACTIONS(127),
        [anon_sym_LBRACK] = ACTIONS(117),
        [anon_sym_LBRACE] = ACTIONS(119),
        [sym_number] = ACTIONS(121),
        [sym_identifier] = ACTIONS(123),
        [sym_comment] = ACTIONS(79),
    },
    [607] = {
        [sym__expression] = STATE(620),
        [sym_binary_operator] = STATE(18),
        [sym_unary_operator] = STATE(18),
        [sym_subscript] = STATE(18),
        [sym_call] = STATE(18),
        [sym_list] = STATE(18),
        [sym_list_comprehension] = STATE(18),
        [sym_dictionary] = STATE(18),
        [sym_dictionary_comprehension] = STATE(18),
        [sym_set] = STATE(18),
        [sym_set_comprehension] = STATE(18),
        [anon_sym_not] = ACTIONS(127),
        [anon_sym_LBRACK] = ACTIONS(117),
        [anon_sym_LBRACE] = ACTIONS(119),
        [sym_number] = ACTIONS(121),
        [sym_identifier] = ACTIONS(123),
        [sym_comment] = ACTIONS(79),
    },
    [608] = {
        [sym__expression] = STATE(618),
        [sym_binary_operator] = STATE(18),
        [sym_unary_operator] = STATE(18),
        [sym_subscript] = STATE(18),
        [sym_call] = STATE(18),
        [sym_list] = STATE(18),
        [sym_list_comprehension] = STATE(18),
        [sym_dictionary] = STATE(18),
        [sym_dictionary_comprehension] = STATE(18),
        [sym_set] = STATE(18),
        [sym_set_comprehension] = STATE(18),
        [anon_sym_not] = ACTIONS(127),
        [anon_sym_LBRACK] = ACTIONS(117),
        [anon_sym_LBRACE] = ACTIONS(119),
        [sym_number] = ACTIONS(121),
        [sym_identifier] = ACTIONS(123),
        [sym_comment] = ACTIONS(79),
    },
    [609] = {
        [sym__expression] = STATE(294),
        [sym_binary_operator] = STATE(18),
        [sym_unary_operator] = STATE(18),
        [sym_subscript] = STATE(18),
        [sym_call] = STATE(18),
        [sym_list] = STATE(18),
        [sym_list_comprehension] = STATE(18),
        [sym_dictionary] = STATE(18),
        [sym_dictionary_comprehension] = STATE(18),
        [sym_set] = STATE(18),
        [sym_set_comprehension] = STATE(18),
        [anon_sym_not] = ACTIONS(127),
        [anon_sym_LBRACK] = ACTIONS(117),
        [anon_sym_LBRACE] = ACTIONS(119),
        [sym_number] = ACTIONS(121),
        [sym_identifier] = ACTIONS(123),
        [sym_comment] = ACTIONS(79),
    },
    [610] = {
        [sym__expression] = STATE(616),
        [sym_binary_operator] = STATE(18),
        [sym_unary_operator] = STATE(18),
        [sym_subscript] = STATE(18),
        [sym_call] = STATE(18),
        [sym_list] = STATE(18),
        [sym_list_comprehension] = STATE(18),
        [sym_dictionary] = STATE(18),
        [sym_dictionary_comprehension] = STATE(18),
        [sym_set] = STATE(18),
        [sym_set_comprehension] = STATE(18),
        [anon_sym_not] = ACTIONS(127),
        [anon_sym_LBRACK] = ACTIONS(117),
        [anon_sym_LBRACE] = ACTIONS(119),
        [sym_number] = ACTIONS(121),
        [sym_identifier] = ACTIONS(123),
        [sym_comment] = ACTIONS(79),
    },
    [611] = {
        [sym__expression] = STATE(617),
        [sym_binary_operator] = STATE(18),
        [sym_unary_operator] = STATE(18),
        [sym_subscript] = STATE(18),
        [sym_call] = STATE(18),
        [sym_list] = STATE(18),
        [sym_list_comprehension] = STATE(18),
        [sym_dictionary] = STATE(18),
        [sym_dictionary_comprehension] = STATE(18),
        [sym_set] = STATE(18),
        [sym_set_comprehension] = STATE(18),
        [anon_sym_not] = ACTIONS(127),
        [anon_sym_LBRACK] = ACTIONS(117),
        [anon_sym_LBRACE] = ACTIONS(119),
        [sym_number] = ACTIONS(121),
        [sym_identifier] = ACTIONS(123),
        [sym_comment] = ACTIONS(79),
    },
    [612] = {
        [sym__expression] = STATE(619),
        [sym_binary_operator] = STATE(18),
        [sym_unary_operator] = STATE(18),
        [sym_subscript] = STATE(18),
        [sym_call] = STATE(18),
        [sym_list] = STATE(18),
        [sym_list_comprehension] = STATE(18),
        [sym_dictionary] = STATE(18),
        [sym_dictionary_comprehension] = STATE(18),
        [sym_set] = STATE(18),
        [sym_set_comprehension] = STATE(18),
        [anon_sym_not] = ACTIONS(127),
        [anon_sym_LBRACK] = ACTIONS(117),
        [anon_sym_LBRACE] = ACTIONS(119),
        [sym_number] = ACTIONS(121),
        [sym_identifier] = ACTIONS(123),
        [sym_comment] = ACTIONS(79),
    },
    [613] = {
        [anon_sym_COMMA] = ACTIONS(1189),
        [sym_comment] = ACTIONS(79),
        [sym__newline] = ACTIONS(497),
    },
    [614] = {
        [sym__expression] = STATE(615),
        [sym_binary_operator] = STATE(18),
        [sym_unary_operator] = STATE(18),
        [sym_subscript] = STATE(18),
        [sym_call] = STATE(18),
        [sym_list] = STATE(18),
        [sym_list_comprehension] = STATE(18),
        [sym_dictionary] = STATE(18),
        [sym_dictionary_comprehension] = STATE(18),
        [sym_set] = STATE(18),
        [sym_set_comprehension] = STATE(18),
        [anon_sym_not] = ACTIONS(127),
        [anon_sym_LBRACK] = ACTIONS(117),
        [anon_sym_LBRACE] = ACTIONS(119),
        [sym_number] = ACTIONS(121),
        [sym_identifier] = ACTIONS(123),
        [sym_comment] = ACTIONS(79),
    },
    [615] = {
        [anon_sym_COMMA] = ACTIONS(499),
        [anon_sym_LPAREN] = ACTIONS(187),
        [anon_sym_STAR] = ACTIONS(1175),
        [anon_sym_PLUS] = ACTIONS(1177),
        [anon_sym_DASH] = ACTIONS(1177),
        [anon_sym_SLASH] = ACTIONS(1179),
        [anon_sym_STAR_STAR] = ACTIONS(1181),
        [anon_sym_PIPE] = ACTIONS(1183),
        [anon_sym_AMP] = ACTIONS(1185),
        [anon_sym_CARET] = ACTIONS(1187),
        [anon_sym_LT_LT] = ACTIONS(1177),
        [anon_sym_GT_GT] = ACTIONS(1177),
        [anon_sym_and] = ACTIONS(1185),
        [anon_sym_or] = ACTIONS(1183),
        [anon_sym_LBRACK] = ACTIONS(203),
        [sym_comment] = ACTIONS(79),
        [sym__newline] = ACTIONS(499),
    },
    [616] = {
        [anon_sym_COMMA] = ACTIONS(307),
        [anon_sym_LPAREN] = ACTIONS(187),
        [anon_sym_STAR] = ACTIONS(1175),
        [anon_sym_PLUS] = ACTIONS(1177),
        [anon_sym_DASH] = ACTIONS(1177),
        [anon_sym_SLASH] = ACTIONS(1179),
        [anon_sym_STAR_STAR] = ACTIONS(1181),
        [anon_sym_PIPE] = ACTIONS(307),
        [anon_sym_AMP] = ACTIONS(1185),
        [anon_sym_CARET] = ACTIONS(1187),
        [anon_sym_LT_LT] = ACTIONS(1177),
        [anon_sym_GT_GT] = ACTIONS(1177),
        [anon_sym_and] = ACTIONS(1185),
        [anon_sym_or] = ACTIONS(307),
        [anon_sym_LBRACK] = ACTIONS(307),
        [sym_comment] = ACTIONS(79),
        [sym__newline] = ACTIONS(307),
    },
    [617] = {
        [anon_sym_COMMA] = ACTIONS(307),
        [anon_sym_LPAREN] = ACTIONS(187),
        [anon_sym_STAR] = ACTIONS(1175),
        [anon_sym_PLUS] = ACTIONS(1177),
        [anon_sym_DASH] = ACTIONS(1177),
        [anon_sym_SLASH] = ACTIONS(1179),
        [anon_sym_STAR_STAR] = ACTIONS(1181),
        [anon_sym_PIPE] = ACTIONS(307),
        [anon_sym_AMP] = ACTIONS(307),
        [anon_sym_CARET] = ACTIONS(1187),
        [anon_sym_LT_LT] = ACTIONS(1177),
        [anon_sym_GT_GT] = ACTIONS(1177),
        [anon_sym_and] = ACTIONS(307),
        [anon_sym_or] = ACTIONS(307),
        [anon_sym_LBRACK] = ACTIONS(307),
        [sym_comment] = ACTIONS(79),
        [sym__newline] = ACTIONS(307),
    },
    [618] = {
        [anon_sym_COMMA] = ACTIONS(307),
        [anon_sym_LPAREN] = ACTIONS(187),
        [anon_sym_STAR] = ACTIONS(1175),
        [anon_sym_PLUS] = ACTIONS(307),
        [anon_sym_DASH] = ACTIONS(307),
        [anon_sym_SLASH] = ACTIONS(1179),
        [anon_sym_STAR_STAR] = ACTIONS(1181),
        [anon_sym_PIPE] = ACTIONS(307),
        [anon_sym_AMP] = ACTIONS(307),
        [anon_sym_CARET] = ACTIONS(307),
        [anon_sym_LT_LT] = ACTIONS(307),
        [anon_sym_GT_GT] = ACTIONS(307),
        [anon_sym_and] = ACTIONS(307),
        [anon_sym_or] = ACTIONS(307),
        [anon_sym_LBRACK] = ACTIONS(307),
        [sym_comment] = ACTIONS(79),
        [sym__newline] = ACTIONS(307),
    },
    [619] = {
        [anon_sym_COMMA] = ACTIONS(307),
        [anon_sym_LPAREN] = ACTIONS(187),
        [anon_sym_STAR] = ACTIONS(1175),
        [anon_sym_PLUS] = ACTIONS(1177),
        [anon_sym_DASH] = ACTIONS(1177),
        [anon_sym_SLASH] = ACTIONS(1179),
        [anon_sym_STAR_STAR] = ACTIONS(1181),
        [anon_sym_PIPE] = ACTIONS(307),
        [anon_sym_AMP] = ACTIONS(307),
        [anon_sym_CARET] = ACTIONS(307),
        [anon_sym_LT_LT] = ACTIONS(1177),
        [anon_sym_GT_GT] = ACTIONS(1177),
        [anon_sym_and] = ACTIONS(307),
        [anon_sym_or] = ACTIONS(307),
        [anon_sym_LBRACK] = ACTIONS(307),
        [sym_comment] = ACTIONS(79),
        [sym__newline] = ACTIONS(307),
    },
    [620] = {
        [anon_sym_COMMA] = ACTIONS(307),
        [anon_sym_LPAREN] = ACTIONS(187),
        [anon_sym_STAR] = ACTIONS(309),
        [anon_sym_PLUS] = ACTIONS(307),
        [anon_sym_DASH] = ACTIONS(307),
        [anon_sym_SLASH] = ACTIONS(307),
        [anon_sym_STAR_STAR] = ACTIONS(1181),
        [anon_sym_PIPE] = ACTIONS(307),
        [anon_sym_AMP] = ACTIONS(307),
        [anon_sym_CARET] = ACTIONS(307),
        [anon_sym_LT_LT] = ACTIONS(307),
        [anon_sym_GT_GT] = ACTIONS(307),
        [anon_sym_and] = ACTIONS(307),
        [anon_sym_or] = ACTIONS(307),
        [anon_sym_LBRACK] = ACTIONS(307),
        [sym_comment] = ACTIONS(79),
        [sym__newline] = ACTIONS(307),
    },
    [621] = {
        [anon_sym_COMMA] = ACTIONS(501),
        [anon_sym_LPAREN] = ACTIONS(187),
        [anon_sym_STAR] = ACTIONS(1175),
        [anon_sym_PLUS] = ACTIONS(1177),
        [anon_sym_DASH] = ACTIONS(1177),
        [anon_sym_SLASH] = ACTIONS(1179),
        [anon_sym_STAR_STAR] = ACTIONS(1181),
        [anon_sym_PIPE] = ACTIONS(1183),
        [anon_sym_AMP] = ACTIONS(1185),
        [anon_sym_CARET] = ACTIONS(1187),
        [anon_sym_LT_LT] = ACTIONS(1177),
        [anon_sym_GT_GT] = ACTIONS(1177),
        [anon_sym_and] = ACTIONS(1185),
        [anon_sym_or] = ACTIONS(1183),
        [anon_sym_LBRACK] = ACTIONS(203),
        [sym_comment] = ACTIONS(79),
        [sym__newline] = ACTIONS(501),
    },
    [622] = {
        [sym_comment] = ACTIONS(79),
        [sym__newline] = ACTIONS(1191),
    },
    [623] = {
        [aux_sym_print_statement_repeat1] = STATE(624),
        [anon_sym_COMMA] = ACTIONS(1173),
        [anon_sym_LPAREN] = ACTIONS(187),
        [anon_sym_STAR] = ACTIONS(1175),
        [anon_sym_PLUS] = ACTIONS(1177),
        [anon_sym_DASH] = ACTIONS(1177),
        [anon_sym_SLASH] = ACTIONS(1179),
        [anon_sym_STAR_STAR] = ACTIONS(1181),
        [anon_sym_PIPE] = ACTIONS(1183),
        [anon_sym_AMP] = ACTIONS(1185),
        [anon_sym_CARET] = ACTIONS(1187),
        [anon_sym_LT_LT] = ACTIONS(1177),
        [anon_sym_GT_GT] = ACTIONS(1177),
        [anon_sym_and] = ACTIONS(1185),
        [anon_sym_or] = ACTIONS(1183),
        [anon_sym_LBRACK] = ACTIONS(203),
        [sym_comment] = ACTIONS(79),
        [sym__newline] = ACTIONS(1193),
    },
    [624] = {
        [anon_sym_COMMA] = ACTIONS(1189),
        [sym_comment] = ACTIONS(79),
        [sym__newline] = ACTIONS(1195),
    },
    [625] = {
        [aux_sym_import_statement_repeat1] = STATE(629),
        [anon_sym_COMMA] = ACTIONS(1197),
        [sym_comment] = ACTIONS(79),
        [sym__newline] = ACTIONS(1199),
    },
    [626] = {
        [aux_sym_import_statement_repeat1] = STATE(629),
        [anon_sym_COMMA] = ACTIONS(1197),
        [anon_sym_as] = ACTIONS(1201),
        [sym_comment] = ACTIONS(79),
        [sym__newline] = ACTIONS(1199),
    },
    [627] = {
        [sym_aliased_import] = STATE(634),
        [sym_dotted_name] = STATE(635),
        [sym_identifier] = ACTIONS(125),
        [sym_comment] = ACTIONS(79),
        [sym__newline] = ACTIONS(1203),
    },
    [628] = {
        [sym_identifier] = ACTIONS(1205),
        [sym_comment] = ACTIONS(79),
    },
    [629] = {
        [anon_sym_COMMA] = ACTIONS(1207),
        [sym_comment] = ACTIONS(79),
        [sym__newline] = ACTIONS(1203),
    },
    [630] = {
        [sym_aliased_import] = STATE(631),
        [sym_dotted_name] = STATE(632),
        [sym_identifier] = ACTIONS(125),
        [sym_comment] = ACTIONS(79),
        [sym__newline] = ACTIONS(1209),
    },
    [631] = {
        [anon_sym_COMMA] = ACTIONS(1211),
        [sym_comment] = ACTIONS(79),
        [sym__newline] = ACTIONS(1211),
    },
    [632] = {
        [anon_sym_COMMA] = ACTIONS(1211),
        [anon_sym_as] = ACTIONS(1201),
        [sym_comment] = ACTIONS(79),
        [sym__newline] = ACTIONS(1211),
    },
    [633] = {
        [anon_sym_COMMA] = ACTIONS(1213),
        [sym_comment] = ACTIONS(79),
        [sym__newline] = ACTIONS(1213),
    },
    [634] = {
        [anon_sym_COMMA] = ACTIONS(1215),
        [sym_comment] = ACTIONS(79),
        [sym__newline] = ACTIONS(1215),
    },
    [635] = {
        [anon_sym_COMMA] = ACTIONS(1215),
        [anon_sym_as] = ACTIONS(1201),
        [sym_comment] = ACTIONS(79),
        [sym__newline] = ACTIONS(1215),
    },
    [636] = {
        [sym_aliased_import] = STATE(845),
        [sym_with_item] = STATE(846),
        [sym_dictionary_splat_parameter] = STATE(776),
        [sym_dotted_name] = STATE(847),
        [sym__expression] = STATE(848),
        [sym_binary_operator] = STATE(18),
        [sym_unary_operator] = STATE(18),
        [sym_subscript] = STATE(18),
        [sym_call] = STATE(18),
        [sym_keyword_argument] = STATE(849),
        [sym_dictionary_splat_argument] = STATE(850),
        [sym_list] = STATE(18),
        [sym_list_comprehension] = STATE(18),
        [sym_dictionary] = STATE(18),
        [sym_dictionary_comprehension] = STATE(18),
        [sym_pair] = STATE(851),
        [sym_set] = STATE(18),
        [sym_set_comprehension] = STATE(18),
        [anon_sym_RPAREN] = ACTIONS(1217),
        [anon_sym_STAR] = ACTIONS(1219),
        [anon_sym_STAR_STAR] = ACTIONS(1225),
        [anon_sym_not] = ACTIONS(1229),
        [anon_sym_LBRACK] = ACTIONS(1233),
        [anon_sym_DOT_DOT_DOT] = ACTIONS(1237),
        [anon_sym_RBRACK] = ACTIONS(1239),
        [anon_sym_LBRACE] = ACTIONS(1241),
        [anon_sym_RBRACE] = ACTIONS(1245),
        [sym_number] = ACTIONS(1247),
        [sym_identifier] = ACTIONS(1251),
        [sym_comment] = ACTIONS(79),
        [sym__newline] = ACTIONS(1257),
    },
    [637] = {
        [sym__expression] = STATE(762),
        [sym_binary_operator] = STATE(44),
        [sym_unary_operator] = STATE(44),
        [sym_subscript] = STATE(44),
        [sym_call] = STATE(44),
        [sym_list] = STATE(44),
        [sym_list_comprehension] = STATE(44),
        [sym_dictionary] = STATE(44),
        [sym_dictionary_comprehension] = STATE(44),
        [sym_set] = STATE(44),
        [sym_set_comprehension] = STATE(44),
        [anon_sym_not] = ACTIONS(939),
        [anon_sym_LBRACK] = ACTIONS(133),
        [anon_sym_LBRACE] = ACTIONS(135),
        [sym_number] = ACTIONS(137),
        [sym_identifier] = ACTIONS(1260),
        [sym_comment] = ACTIONS(79),
    },
    [638] = {
        [sym__expression] = STATE(834),
        [sym_binary_operator] = STATE(44),
        [sym_unary_operator] = STATE(44),
        [sym_subscript] = STATE(44),
        [sym_call] = STATE(44),
        [sym_list] = STATE(44),
        [sym_list_comprehension] = STATE(44),
        [sym_dictionary] = STATE(44),
        [sym_dictionary_comprehension] = STATE(44),
        [sym_set] = STATE(44),
        [sym_set_comprehension] = STATE(44),
        [anon_sym_not] = ACTIONS(131),
        [anon_sym_LBRACK] = ACTIONS(133),
        [anon_sym_LBRACE] = ACTIONS(135),
        [sym_number] = ACTIONS(137),
        [sym_identifier] = ACTIONS(139),
        [sym_comment] = ACTIONS(79),
    },
    [639] = {
        [sym__simple_statement] = STATE(704),
        [sym_import_statement] = STATE(6),
        [sym_print_statement] = STATE(6),
        [sym_expression_statement] = STATE(6),
        [sym_return_statement] = STATE(6),
        [sym_delete_statement] = STATE(6),
        [sym__suite] = STATE(683),
        [sym__expression] = STATE(756),
        [sym_binary_operator] = STATE(18),
        [sym_unary_operator] = STATE(18),
        [sym_subscript] = STATE(18),
        [sym_call] = STATE(18),
        [sym_list] = STATE(18),
        [sym_list_comprehension] = STATE(18),
        [sym_dictionary] = STATE(18),
        [sym_dictionary_comprehension] = STATE(18),
        [sym_set] = STATE(18),
        [sym_set_comprehension] = STATE(18),
        [anon_sym_import] = ACTIONS(89),
        [anon_sym_print] = ACTIONS(91),
        [anon_sym_return] = ACTIONS(93),
        [anon_sym_del] = ACTIONS(95),
        [sym_pass_statement] = ACTIONS(97),
        [sym_break_statement] = ACTIONS(97),
        [sym_continue_statement] = ACTIONS(97),
        [anon_sym_not] = ACTIONS(1262),
        [anon_sym_LBRACK] = ACTIONS(117),
        [anon_sym_LBRACE] = ACTIONS(119),
        [sym_number] = ACTIONS(121),
        [sym_identifier] = ACTIONS(123),
        [sym_comment] = ACTIONS(79),
        [sym__indent] = ACTIONS(1264),
    },
    [640] = {
        [sym__expression] = STATE(831),
        [sym_binary_operator] = STATE(44),
        [sym_unary_operator] = STATE(44),
        [sym_subscript] = STATE(44),
        [sym_call] = STATE(44),
        [sym_list] = STATE(44),
        [sym_list_comprehension] = STATE(44),
        [sym_dictionary] = STATE(44),
        [sym_dictionary_comprehension] = STATE(44),
        [sym_set] = STATE(44),
        [sym_set_comprehension] = STATE(44),
        [anon_sym_not] = ACTIONS(131),
        [anon_sym_LBRACK] = ACTIONS(133),
        [anon_sym_LBRACE] = ACTIONS(135),
        [sym_number] = ACTIONS(137),
        [sym_identifier] = ACTIONS(139),
        [sym_comment] = ACTIONS(79),
    },
    [641] = {
        [anon_sym_COLON] = ACTIONS(1266),
        [sym_comment] = ACTIONS(79),
    },
    [642] = {
        [sym_expression_list] = STATE(830),
        [sym__expression] = STATE(165),
        [sym_binary_operator] = STATE(44),
        [sym_unary_operator] = STATE(44),
        [sym_subscript] = STATE(44),
        [sym_call] = STATE(44),
        [sym_list] = STATE(44),
        [sym_list_comprehension] = STATE(44),
        [sym_dictionary] = STATE(44),
        [sym_dictionary_comprehension] = STATE(44),
        [sym_set] = STATE(44),
        [sym_set_comprehension] = STATE(44),
        [anon_sym_not] = ACTIONS(141),
        [anon_sym_LBRACK] = ACTIONS(133),
        [anon_sym_LBRACE] = ACTIONS(135),
        [sym_number] = ACTIONS(137),
        [sym_identifier] = ACTIONS(139),
        [sym_comment] = ACTIONS(79),
    },
    [643] = {
        [sym_expression_list] = STATE(729),
        [sym__expression] = STATE(825),
        [sym_binary_operator] = STATE(44),
        [sym_unary_operator] = STATE(44),
        [sym_subscript] = STATE(44),
        [sym_call] = STATE(44),
        [sym_list] = STATE(44),
        [sym_list_comprehension] = STATE(44),
        [sym_dictionary] = STATE(44),
        [sym_dictionary_comprehension] = STATE(44),
        [sym_set] = STATE(44),
        [sym_set_comprehension] = STATE(44),
        [anon_sym_not] = ACTIONS(1268),
        [anon_sym_LBRACK] = ACTIONS(133),
        [anon_sym_LBRACE] = ACTIONS(135),
        [sym_number] = ACTIONS(137),
        [sym_identifier] = ACTIONS(139),
        [sym_comment] = ACTIONS(79),
    },
    [644] = {
        [sym__expression] = STATE(820),
        [sym_binary_operator] = STATE(44),
        [sym_unary_operator] = STATE(44),
        [sym_subscript] = STATE(44),
        [sym_call] = STATE(44),
        [sym_list] = STATE(44),
        [sym_list_comprehension] = STATE(44),
        [sym_dictionary] = STATE(44),
        [sym_dictionary_comprehension] = STATE(44),
        [sym_set] = STATE(44),
        [sym_set_comprehension] = STATE(44),
        [anon_sym_not] = ACTIONS(131),
        [anon_sym_LBRACK] = ACTIONS(133),
        [anon_sym_LBRACE] = ACTIONS(135),
        [sym_number] = ACTIONS(137),
        [sym_identifier] = ACTIONS(139),
        [sym_comment] = ACTIONS(79),
    },
    [645] = {
        [anon_sym_COLON] = ACTIONS(1270),
        [sym_comment] = ACTIONS(79),
    },
    [646] = {
        [sym__expression] = STATE(813),
        [sym_binary_operator] = STATE(44),
        [sym_unary_operator] = STATE(44),
        [sym_subscript] = STATE(44),
        [sym_call] = STATE(44),
        [sym_list] = STATE(44),
        [sym_list_comprehension] = STATE(44),
        [sym_dictionary] = STATE(44),
        [sym_dictionary_comprehension] = STATE(44),
        [sym_set] = STATE(44),
        [sym_set_comprehension] = STATE(44),
        [anon_sym_not] = ACTIONS(145),
        [anon_sym_LBRACK] = ACTIONS(133),
        [anon_sym_LBRACE] = ACTIONS(135),
        [sym_number] = ACTIONS(137),
        [sym_identifier] = ACTIONS(139),
        [sym_comment] = ACTIONS(79),
    },
    [647] = {
        [anon_sym_COLON] = ACTIONS(1272),
        [sym_comment] = ACTIONS(79),
    },
    [648] = {
        [sym_with_item] = STATE(810),
        [sym__expression] = STATE(456),
        [sym_binary_operator] = STATE(44),
        [sym_unary_operator] = STATE(44),
        [sym_subscript] = STATE(44),
        [sym_call] = STATE(44),
        [sym_list] = STATE(44),
        [sym_list_comprehension] = STATE(44),
        [sym_dictionary] = STATE(44),
        [sym_dictionary_comprehension] = STATE(44),
        [sym_set] = STATE(44),
        [sym_set_comprehension] = STATE(44),
        [anon_sym_not] = ACTIONS(145),
        [anon_sym_LBRACK] = ACTIONS(133),
        [anon_sym_LBRACE] = ACTIONS(135),
        [sym_number] = ACTIONS(137),
        [sym_identifier] = ACTIONS(139),
        [sym_comment] = ACTIONS(79),
    },
    [649] = {
        [sym_identifier] = ACTIONS(1274),
        [sym_comment] = ACTIONS(79),
    },
    [650] = {
        [sym_default_parameter] = STATE(430),
        [sym_list_splat_parameter] = STATE(431),
        [sym_dictionary_splat_parameter] = STATE(432),
        [sym_expression_list] = STATE(788),
        [sym__expression] = STATE(804),
        [sym_binary_operator] = STATE(44),
        [sym_unary_operator] = STATE(44),
        [sym_subscript] = STATE(44),
        [sym_call] = STATE(44),
        [sym_keyword_argument] = STATE(297),
        [sym_list_splat_argument] = STATE(298),
        [sym_dictionary_splat_argument] = STATE(299),
        [sym_list] = STATE(44),
        [sym_list_comprehension] = STATE(44),
        [sym_dictionary] = STATE(44),
        [sym_dictionary_comprehension] = STATE(44),
        [sym_set] = STATE(44),
        [sym_set_comprehension] = STATE(44),
        [aux_sym_parameters_repeat1] = STATE(433),
        [aux_sym_call_repeat1] = STATE(300),
        [anon_sym_RPAREN] = ACTIONS(851),
        [anon_sym_STAR] = ACTIONS(1276),
        [anon_sym_STAR_STAR] = ACTIONS(233),
        [anon_sym_not] = ACTIONS(235),
        [anon_sym_LBRACK] = ACTIONS(133),
        [anon_sym_LBRACE] = ACTIONS(135),
        [sym_number] = ACTIONS(137),
        [sym_identifier] = ACTIONS(1278),
        [sym_comment] = ACTIONS(79),
    },
    [651] = {
        [anon_sym_COMMA] = ACTIONS(1280),
        [anon_sym_as] = ACTIONS(1280),
        [anon_sym_COLON] = ACTIONS(1286),
        [anon_sym_for] = ACTIONS(1280),
        [anon_sym_in] = ACTIONS(1280),
        [anon_sym_LPAREN] = ACTIONS(1280),
        [anon_sym_RPAREN] = ACTIONS(1280),
        [anon_sym_STAR] = ACTIONS(1298),
        [anon_sym_PLUS] = ACTIONS(1280),
        [anon_sym_DASH] = ACTIONS(1280),
        [anon_sym_SLASH] = ACTIONS(1280),
        [anon_sym_STAR_STAR] = ACTIONS(1280),
        [anon_sym_PIPE] = ACTIONS(1280),
        [anon_sym_AMP] = ACTIONS(1280),
        [anon_sym_CARET] = ACTIONS(1280),
        [anon_sym_LT_LT] = ACTIONS(1280),
        [anon_sym_GT_GT] = ACTIONS(1280),
        [anon_sym_and] = ACTIONS(1280),
        [anon_sym_or] = ACTIONS(1280),
        [anon_sym_LBRACK] = ACTIONS(1280),
        [anon_sym_RBRACK] = ACTIONS(1280),
        [anon_sym_RBRACE] = ACTIONS(1280),
        [sym_comment] = ACTIONS(79),
        [sym__newline] = ACTIONS(1304),
    },
    [652] = {
        [sym__expression] = STATE(801),
        [sym_binary_operator] = STATE(44),
        [sym_unary_operator] = STATE(44),
        [sym_subscript] = STATE(44),
        [sym_call] = STATE(44),
        [sym_list] = STATE(44),
        [sym_list_comprehension] = STATE(44),
        [sym_dictionary] = STATE(44),
        [sym_dictionary_comprehension] = STATE(44),
        [sym_set] = STATE(44),
        [sym_set_comprehension] = STATE(44),
        [anon_sym_not] = ACTIONS(235),
        [anon_sym_LBRACK] = ACTIONS(133),
        [anon_sym_LBRACE] = ACTIONS(135),
        [sym_number] = ACTIONS(137),
        [sym_identifier] = ACTIONS(139),
        [sym_comment] = ACTIONS(79),
    },
    [653] = {
        [sym__expression] = STATE(800),
        [sym_binary_operator] = STATE(18),
        [sym_unary_operator] = STATE(18),
        [sym_subscript] = STATE(18),
        [sym_call] = STATE(18),
        [sym_list] = STATE(18),
        [sym_list_comprehension] = STATE(18),
        [sym_dictionary] = STATE(18),
        [sym_dictionary_comprehension] = STATE(18),
        [sym_set] = STATE(18),
        [sym_set_comprehension] = STATE(18),
        [anon_sym_STAR] = ACTIONS(867),
        [anon_sym_not] = ACTIONS(1312),
        [anon_sym_LBRACK] = ACTIONS(117),
        [anon_sym_LBRACE] = ACTIONS(119),
        [sym_number] = ACTIONS(121),
        [sym_identifier] = ACTIONS(1314),
        [sym_comment] = ACTIONS(79),
    },
    [654] = {
        [sym_identifier] = ACTIONS(1316),
        [sym_comment] = ACTIONS(79),
    },
    [655] = {
        [sym_identifier] = ACTIONS(1318),
        [sym_comment] = ACTIONS(79),
    },
    [656] = {
        [sym__expression] = STATE(746),
        [sym_binary_operator] = STATE(18),
        [sym_unary_operator] = STATE(18),
        [sym_subscript] = STATE(18),
        [sym_call] = STATE(18),
        [sym_list] = STATE(18),
        [sym_list_comprehension] = STATE(18),
        [sym_dictionary] = STATE(18),
        [sym_dictionary_comprehension] = STATE(18),
        [sym_set] = STATE(18),
        [sym_set_comprehension] = STATE(18),
        [anon_sym_not] = ACTIONS(1312),
        [anon_sym_LBRACK] = ACTIONS(117),
        [anon_sym_LBRACE] = ACTIONS(119),
        [sym_number] = ACTIONS(121),
        [sym_identifier] = ACTIONS(123),
        [sym_comment] = ACTIONS(79),
    },
    [657] = {
        [sym__expression] = STATE(795),
        [sym_binary_operator] = STATE(18),
        [sym_unary_operator] = STATE(18),
        [sym_subscript] = STATE(18),
        [sym_call] = STATE(18),
        [sym_list] = STATE(18),
        [sym_list_comprehension] = STATE(18),
        [sym_dictionary] = STATE(18),
        [sym_dictionary_comprehension] = STATE(18),
        [sym_set] = STATE(18),
        [sym_set_comprehension] = STATE(18),
        [anon_sym_not] = ACTIONS(1312),
        [anon_sym_LBRACK] = ACTIONS(117),
        [anon_sym_LBRACE] = ACTIONS(119),
        [sym_number] = ACTIONS(121),
        [sym_identifier] = ACTIONS(123),
        [sym_comment] = ACTIONS(79),
    },
    [658] = {
        [sym__expression] = STATE(794),
        [sym_binary_operator] = STATE(18),
        [sym_unary_operator] = STATE(18),
        [sym_subscript] = STATE(18),
        [sym_call] = STATE(18),
        [sym_list] = STATE(18),
        [sym_list_comprehension] = STATE(18),
        [sym_dictionary] = STATE(18),
        [sym_dictionary_comprehension] = STATE(18),
        [sym_set] = STATE(18),
        [sym_set_comprehension] = STATE(18),
        [anon_sym_not] = ACTIONS(1312),
        [anon_sym_LBRACK] = ACTIONS(117),
        [anon_sym_LBRACE] = ACTIONS(119),
        [sym_number] = ACTIONS(121),
        [sym_identifier] = ACTIONS(123),
        [sym_comment] = ACTIONS(79),
    },
    [659] = {
        [sym__expression] = STATE(790),
        [sym_binary_operator] = STATE(44),
        [sym_unary_operator] = STATE(44),
        [sym_subscript] = STATE(44),
        [sym_call] = STATE(44),
        [sym_list] = STATE(44),
        [sym_list_comprehension] = STATE(44),
        [sym_dictionary] = STATE(44),
        [sym_dictionary_comprehension] = STATE(44),
        [sym_set] = STATE(44),
        [sym_set_comprehension] = STATE(44),
        [anon_sym_not] = ACTIONS(151),
        [anon_sym_LBRACK] = ACTIONS(133),
        [anon_sym_DOT_DOT_DOT] = ACTIONS(241),
        [anon_sym_RBRACK] = ACTIONS(153),
        [anon_sym_LBRACE] = ACTIONS(135),
        [sym_number] = ACTIONS(137),
        [sym_identifier] = ACTIONS(139),
        [sym_comment] = ACTIONS(79),
    },
    [660] = {
        [aux_sym_subscript_repeat1] = STATE(56),
        [anon_sym_COMMA] = ACTIONS(1320),
        [anon_sym_RBRACK] = ACTIONS(1324),
        [sym_comment] = ACTIONS(79),
    },
    [661] = {
        [anon_sym_COMMA] = ACTIONS(1328),
        [anon_sym_as] = ACTIONS(1328),
        [anon_sym_COLON] = ACTIONS(1328),
        [anon_sym_for] = ACTIONS(1328),
        [anon_sym_in] = ACTIONS(1328),
        [anon_sym_LPAREN] = ACTIONS(1328),
        [anon_sym_RPAREN] = ACTIONS(1328),
        [anon_sym_STAR] = ACTIONS(1337),
        [anon_sym_PLUS] = ACTIONS(1328),
        [anon_sym_DASH] = ACTIONS(1328),
        [anon_sym_SLASH] = ACTIONS(1328),
        [anon_sym_STAR_STAR] = ACTIONS(1328),
        [anon_sym_PIPE] = ACTIONS(1328),
        [anon_sym_AMP] = ACTIONS(1328),
        [anon_sym_CARET] = ACTIONS(1328),
        [anon_sym_LT_LT] = ACTIONS(1328),
        [anon_sym_GT_GT] = ACTIONS(1328),
        [anon_sym_and] = ACTIONS(1328),
        [anon_sym_or] = ACTIONS(1328),
        [anon_sym_LBRACK] = ACTIONS(1328),
        [anon_sym_RBRACK] = ACTIONS(1328),
        [anon_sym_RBRACE] = ACTIONS(1328),
        [sym_comment] = ACTIONS(79),
        [sym__newline] = ACTIONS(1328),
    },
    [662] = {
        [anon_sym_COMMA] = ACTIONS(1346),
        [anon_sym_as] = ACTIONS(1346),
        [anon_sym_COLON] = ACTIONS(1346),
        [anon_sym_for] = ACTIONS(1346),
        [anon_sym_in] = ACTIONS(1346),
        [anon_sym_LPAREN] = ACTIONS(1346),
        [anon_sym_RPAREN] = ACTIONS(1346),
        [anon_sym_STAR] = ACTIONS(1356),
        [anon_sym_PLUS] = ACTIONS(1346),
        [anon_sym_DASH] = ACTIONS(1346),
        [anon_sym_SLASH] = ACTIONS(1346),
        [anon_sym_STAR_STAR] = ACTIONS(1346),
        [anon_sym_PIPE] = ACTIONS(1346),
        [anon_sym_AMP] = ACTIONS(1346),
        [anon_sym_CARET] = ACTIONS(1346),
        [anon_sym_LT_LT] = ACTIONS(1346),
        [anon_sym_GT_GT] = ACTIONS(1346),
        [anon_sym_and] = ACTIONS(1346),
        [anon_sym_or] = ACTIONS(1346),
        [anon_sym_LBRACK] = ACTIONS(1346),
        [anon_sym_RBRACK] = ACTIONS(1346),
        [anon_sym_RBRACE] = ACTIONS(1346),
        [sym_comment] = ACTIONS(79),
        [sym__newline] = ACTIONS(1346),
    },
    [663] = {
        [sym_parameters] = STATE(678),
        [aux_sym_dotted_name_repeat1] = STATE(376),
        [anon_sym_COMMA] = ACTIONS(1366),
        [anon_sym_as] = ACTIONS(1374),
        [anon_sym_COLON] = ACTIONS(1379),
        [anon_sym_for] = ACTIONS(159),
        [anon_sym_in] = ACTIONS(159),
        [anon_sym_LPAREN] = ACTIONS(1382),
        [anon_sym_RPAREN] = ACTIONS(1388),
        [anon_sym_EQ] = ACTIONS(1393),
        [anon_sym_STAR] = ACTIONS(161),
        [anon_sym_DOT] = ACTIONS(1395),
        [anon_sym_PLUS] = ACTIONS(159),
        [anon_sym_DASH] = ACTIONS(159),
        [anon_sym_SLASH] = ACTIONS(159),
        [anon_sym_STAR_STAR] = ACTIONS(159),
        [anon_sym_PIPE] = ACTIONS(159),
        [anon_sym_AMP] = ACTIONS(159),
        [anon_sym_CARET] = ACTIONS(159),
        [anon_sym_LT_LT] = ACTIONS(159),
        [anon_sym_GT_GT] = ACTIONS(159),
        [anon_sym_and] = ACTIONS(159),
        [anon_sym_or] = ACTIONS(159),
        [anon_sym_LBRACK] = ACTIONS(159),
        [anon_sym_RBRACK] = ACTIONS(159),
        [anon_sym_RBRACE] = ACTIONS(159),
        [sym_comment] = ACTIONS(79),
        [sym__newline] = ACTIONS(1399),
    },
    [664] = {
        [ts_builtin_sym_end] = ACTIONS(1405),
        [anon_sym_SEMI] = ACTIONS(1409),
        [anon_sym_import] = ACTIONS(1412),
        [anon_sym_print] = ACTIONS(1412),
        [anon_sym_return] = ACTIONS(1412),
        [anon_sym_del] = ACTIONS(1412),
        [sym_pass_statement] = ACTIONS(1412),
        [sym_break_statement] = ACTIONS(1412),
        [sym_continue_statement] = ACTIONS(1412),
        [anon_sym_if] = ACTIONS(1412),
        [anon_sym_elif] = ACTIONS(805),
        [anon_sym_else] = ACTIONS(805),
        [anon_sym_for] = ACTIONS(1412),
        [anon_sym_while] = ACTIONS(1412),
        [anon_sym_try] = ACTIONS(1412),
        [anon_sym_except] = ACTIONS(805),
        [anon_sym_finally] = ACTIONS(805),
        [anon_sym_with] = ACTIONS(1412),
        [anon_sym_def] = ACTIONS(1415),
        [anon_sym_class] = ACTIONS(1415),
        [anon_sym_AT] = ACTIONS(1420),
        [anon_sym_not] = ACTIONS(1412),
        [anon_sym_LBRACK] = ACTIONS(1409),
        [anon_sym_LBRACE] = ACTIONS(1409),
        [sym_number] = ACTIONS(1412),
        [sym_identifier] = ACTIONS(1425),
        [sym_comment] = ACTIONS(79),
        [sym__newline] = ACTIONS(1409),
        [sym__dedent] = ACTIONS(1409),
    },
    [665] = {
        [sym__statement] = STATE(399),
        [sym__simple_statement] = STATE(400),
        [sym_import_statement] = STATE(6),
        [sym_print_statement] = STATE(6),
        [sym_expression_statement] = STATE(6),
        [sym_return_statement] = STATE(6),
        [sym_delete_statement] = STATE(6),
        [sym__compound_statement] = STATE(401),
        [sym_if_statement] = STATE(402),
        [sym_for_statement] = STATE(402),
        [sym_while_statement] = STATE(402),
        [sym_try_statement] = STATE(402),
        [sym_with_statement] = STATE(402),
        [sym_function_definition] = STATE(402),
        [sym_class_definition] = STATE(402),
        [sym_decorated_definition] = STATE(402),
        [sym_decorator] = STATE(24),
        [sym__expression] = STATE(25),
        [sym_binary_operator] = STATE(18),
        [sym_unary_operator] = STATE(18),
        [sym_subscript] = STATE(18),
        [sym_call] = STATE(18),
        [sym_list] = STATE(18),
        [sym_list_comprehension] = STATE(18),
        [sym_dictionary] = STATE(18),
        [sym_dictionary_comprehension] = STATE(18),
        [sym_set] = STATE(18),
        [sym_set_comprehension] = STATE(18),
        [aux_sym_module_repeat1] = STATE(707),
        [aux_sym_decorated_definition_repeat1] = STATE(404),
        [anon_sym_import] = ACTIONS(89),
        [anon_sym_print] = ACTIONS(91),
        [anon_sym_return] = ACTIONS(93),
        [anon_sym_del] = ACTIONS(95),
        [sym_pass_statement] = ACTIONS(97),
        [sym_break_statement] = ACTIONS(97),
        [sym_continue_statement] = ACTIONS(97),
        [anon_sym_if] = ACTIONS(781),
        [anon_sym_for] = ACTIONS(783),
        [anon_sym_while] = ACTIONS(785),
        [anon_sym_try] = ACTIONS(787),
        [anon_sym_with] = ACTIONS(789),
        [anon_sym_def] = ACTIONS(791),
        [anon_sym_class] = ACTIONS(793),
        [anon_sym_AT] = ACTIONS(113),
        [anon_sym_not] = ACTIONS(115),
        [anon_sym_LBRACK] = ACTIONS(117),
        [anon_sym_LBRACE] = ACTIONS(119),
        [sym_number] = ACTIONS(121),
        [sym_identifier] = ACTIONS(123),
        [sym_comment] = ACTIONS(79),
        [sym__dedent] = ACTIONS(1428),
    },
    [666] = {
        [ts_builtin_sym_end] = ACTIONS(1430),
        [anon_sym_SEMI] = ACTIONS(1430),
        [anon_sym_import] = ACTIONS(1433),
        [anon_sym_print] = ACTIONS(1433),
        [anon_sym_return] = ACTIONS(1433),
        [anon_sym_del] = ACTIONS(1433),
        [sym_pass_statement] = ACTIONS(1433),
        [sym_break_statement] = ACTIONS(1433),
        [sym_continue_statement] = ACTIONS(1433),
        [anon_sym_if] = ACTIONS(1433),
        [anon_sym_elif] = ACTIONS(1433),
        [anon_sym_else] = ACTIONS(1433),
        [anon_sym_for] = ACTIONS(1433),
        [anon_sym_while] = ACTIONS(1433),
        [anon_sym_try] = ACTIONS(1433),
        [anon_sym_except] = ACTIONS(1433),
        [anon_sym_finally] = ACTIONS(1433),
        [anon_sym_with] = ACTIONS(1433),
        [anon_sym_def] = ACTIONS(1433),
        [anon_sym_class] = ACTIONS(1433),
        [anon_sym_AT] = ACTIONS(1430),
        [anon_sym_not] = ACTIONS(1433),
        [anon_sym_LBRACK] = ACTIONS(1430),
        [anon_sym_LBRACE] = ACTIONS(1430),
        [sym_number] = ACTIONS(1433),
        [sym_identifier] = ACTIONS(1436),
        [sym_comment] = ACTIONS(79),
        [sym__newline] = ACTIONS(1430),
        [sym__dedent] = ACTIONS(1430),
    },
    [667] = {
        [ts_builtin_sym_end] = ACTIONS(1439),
        [anon_sym_SEMI] = ACTIONS(1439),
        [anon_sym_import] = ACTIONS(1442),
        [anon_sym_print] = ACTIONS(1442),
        [anon_sym_return] = ACTIONS(1442),
        [anon_sym_del] = ACTIONS(1442),
        [sym_pass_statement] = ACTIONS(1442),
        [sym_break_statement] = ACTIONS(1442),
        [sym_continue_statement] = ACTIONS(1442),
        [anon_sym_if] = ACTIONS(1442),
        [anon_sym_for] = ACTIONS(1442),
        [anon_sym_while] = ACTIONS(1442),
        [anon_sym_try] = ACTIONS(1442),
        [anon_sym_with] = ACTIONS(1442),
        [anon_sym_def] = ACTIONS(1442),
        [anon_sym_class] = ACTIONS(1442),
        [anon_sym_AT] = ACTIONS(1439),
        [anon_sym_not] = ACTIONS(1442),
        [anon_sym_LBRACK] = ACTIONS(1439),
        [anon_sym_LBRACE] = ACTIONS(1439),
        [sym_number] = ACTIONS(1442),
        [sym_identifier] = ACTIONS(1445),
        [sym_comment] = ACTIONS(79),
        [sym__newline] = ACTIONS(1439),
        [sym__dedent] = ACTIONS(1439),
    },
    [668] = {
        [sym_comment] = ACTIONS(79),
        [sym__newline] = ACTIONS(1448),
    },
    [669] = {
        [aux_sym_import_statement_repeat1] = STATE(629),
        [anon_sym_COMMA] = ACTIONS(1450),
        [sym_comment] = ACTIONS(79),
        [sym__newline] = ACTIONS(1454),
    },
    [670] = {
        [ts_builtin_sym_end] = ACTIONS(173),
        [anon_sym_SEMI] = ACTIONS(173),
        [anon_sym_import] = ACTIONS(175),
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
        [sym_comment] = ACTIONS(79),
        [sym__newline] = ACTIONS(173),
        [sym__dedent] = ACTIONS(173),
    },
    [671] = {
        [ts_builtin_sym_end] = ACTIONS(179),
        [anon_sym_SEMI] = ACTIONS(179),
        [anon_sym_import] = ACTIONS(181),
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
        [sym_number] = ACTIONS(181),
        [sym_identifier] = ACTIONS(183),
        [sym_comment] = ACTIONS(79),
        [sym__newline] = ACTIONS(179),
        [sym__dedent] = ACTIONS(179),
    },
    [672] = {
        [ts_builtin_sym_end] = ACTIONS(1458),
        [anon_sym_SEMI] = ACTIONS(1458),
        [anon_sym_import] = ACTIONS(1461),
        [anon_sym_print] = ACTIONS(1461),
        [anon_sym_return] = ACTIONS(1461),
        [anon_sym_del] = ACTIONS(1461),
        [sym_pass_statement] = ACTIONS(1461),
        [sym_break_statement] = ACTIONS(1461),
        [sym_continue_statement] = ACTIONS(1461),
        [anon_sym_if] = ACTIONS(1461),
        [anon_sym_elif] = ACTIONS(1461),
        [anon_sym_else] = ACTIONS(1461),
        [anon_sym_for] = ACTIONS(1461),
        [anon_sym_while] = ACTIONS(1461),
        [anon_sym_try] = ACTIONS(1461),
        [anon_sym_with] = ACTIONS(1461),
        [anon_sym_def] = ACTIONS(1461),
        [anon_sym_class] = ACTIONS(1461),
        [anon_sym_AT] = ACTIONS(1458),
        [anon_sym_not] = ACTIONS(1461),
        [anon_sym_LBRACK] = ACTIONS(1458),
        [anon_sym_LBRACE] = ACTIONS(1458),
        [sym_number] = ACTIONS(1461),
        [sym_identifier] = ACTIONS(1464),
        [sym_comment] = ACTIONS(79),
        [sym__newline] = ACTIONS(1458),
        [sym__dedent] = ACTIONS(1458),
    },
    [673] = {
        [sym_finally_clause] = STATE(712),
        [ts_builtin_sym_end] = ACTIONS(1467),
        [anon_sym_SEMI] = ACTIONS(1467),
        [anon_sym_import] = ACTIONS(1473),
        [anon_sym_print] = ACTIONS(1473),
        [anon_sym_return] = ACTIONS(1473),
        [anon_sym_del] = ACTIONS(1473),
        [sym_pass_statement] = ACTIONS(1473),
        [sym_break_statement] = ACTIONS(1473),
        [sym_continue_statement] = ACTIONS(1473),
        [anon_sym_if] = ACTIONS(1473),
        [anon_sym_for] = ACTIONS(1473),
        [anon_sym_while] = ACTIONS(1473),
        [anon_sym_try] = ACTIONS(1473),
        [anon_sym_finally] = ACTIONS(1479),
        [anon_sym_with] = ACTIONS(1473),
        [anon_sym_def] = ACTIONS(1473),
        [anon_sym_class] = ACTIONS(1473),
        [anon_sym_AT] = ACTIONS(1467),
        [anon_sym_not] = ACTIONS(1473),
        [anon_sym_LBRACK] = ACTIONS(1467),
        [anon_sym_LBRACE] = ACTIONS(1467),
        [sym_number] = ACTIONS(1473),
        [sym_identifier] = ACTIONS(1481),
        [sym_comment] = ACTIONS(79),
        [sym__newline] = ACTIONS(1467),
        [sym__dedent] = ACTIONS(1467),
    },
    [674] = {
        [ts_builtin_sym_end] = ACTIONS(1487),
        [anon_sym_SEMI] = ACTIONS(1487),
        [anon_sym_import] = ACTIONS(1490),
        [anon_sym_print] = ACTIONS(1490),
        [anon_sym_return] = ACTIONS(1490),
        [anon_sym_del] = ACTIONS(1490),
        [sym_pass_statement] = ACTIONS(1490),
        [sym_break_statement] = ACTIONS(1490),
        [sym_continue_statement] = ACTIONS(1490),
        [anon_sym_if] = ACTIONS(1490),
        [anon_sym_else] = ACTIONS(1490),
        [anon_sym_for] = ACTIONS(1490),
        [anon_sym_while] = ACTIONS(1490),
        [anon_sym_try] = ACTIONS(1490),
        [anon_sym_except] = ACTIONS(1490),
        [anon_sym_finally] = ACTIONS(1490),
        [anon_sym_with] = ACTIONS(1490),
        [anon_sym_def] = ACTIONS(1490),
        [anon_sym_class] = ACTIONS(1490),
        [anon_sym_AT] = ACTIONS(1487),
        [anon_sym_not] = ACTIONS(1490),
        [anon_sym_LBRACK] = ACTIONS(1487),
        [anon_sym_LBRACE] = ACTIONS(1487),
        [sym_number] = ACTIONS(1490),
        [sym_identifier] = ACTIONS(1493),
        [sym_comment] = ACTIONS(79),
        [sym__newline] = ACTIONS(1487),
        [sym__dedent] = ACTIONS(1487),
    },
    [675] = {
        [ts_builtin_sym_end] = ACTIONS(1496),
        [anon_sym_SEMI] = ACTIONS(1496),
        [anon_sym_import] = ACTIONS(1500),
        [anon_sym_print] = ACTIONS(1500),
        [anon_sym_return] = ACTIONS(1500),
        [anon_sym_del] = ACTIONS(1500),
        [sym_pass_statement] = ACTIONS(1500),
        [sym_break_statement] = ACTIONS(1500),
        [sym_continue_statement] = ACTIONS(1500),
        [anon_sym_if] = ACTIONS(1500),
        [anon_sym_for] = ACTIONS(1500),
        [anon_sym_while] = ACTIONS(1500),
        [anon_sym_try] = ACTIONS(1500),
        [anon_sym_with] = ACTIONS(1500),
        [anon_sym_def] = ACTIONS(1500),
        [anon_sym_class] = ACTIONS(1500),
        [anon_sym_AT] = ACTIONS(1496),
        [anon_sym_not] = ACTIONS(1500),
        [anon_sym_LBRACK] = ACTIONS(1496),
        [anon_sym_LBRACE] = ACTIONS(1496),
        [sym_number] = ACTIONS(1500),
        [sym_identifier] = ACTIONS(1504),
        [sym_comment] = ACTIONS(79),
        [sym__newline] = ACTIONS(1496),
        [sym__dedent] = ACTIONS(1496),
    },
    [676] = {
        [aux_sym_with_statement_repeat1] = STATE(695),
        [anon_sym_COMMA] = ACTIONS(1508),
        [anon_sym_COLON] = ACTIONS(1512),
        [sym_comment] = ACTIONS(79),
    },
    [677] = {
        [ts_builtin_sym_end] = ACTIONS(1516),
        [anon_sym_SEMI] = ACTIONS(1516),
        [anon_sym_import] = ACTIONS(1519),
        [anon_sym_print] = ACTIONS(1519),
        [anon_sym_return] = ACTIONS(1519),
        [anon_sym_del] = ACTIONS(1519),
        [sym_pass_statement] = ACTIONS(1519),
        [sym_break_statement] = ACTIONS(1519),
        [sym_continue_statement] = ACTIONS(1519),
        [anon_sym_if] = ACTIONS(1519),
        [anon_sym_for] = ACTIONS(1519),
        [anon_sym_while] = ACTIONS(1519),
        [anon_sym_try] = ACTIONS(1519),
        [anon_sym_with] = ACTIONS(1519),
        [anon_sym_def] = ACTIONS(1519),
        [anon_sym_class] = ACTIONS(1519),
        [anon_sym_AT] = ACTIONS(1516),
        [anon_sym_not] = ACTIONS(1519),
        [anon_sym_LBRACK] = ACTIONS(1516),
        [anon_sym_LBRACE] = ACTIONS(1516),
        [sym_number] = ACTIONS(1519),
        [sym_identifier] = ACTIONS(1522),
        [sym_comment] = ACTIONS(79),
        [sym__newline] = ACTIONS(1516),
        [sym__dedent] = ACTIONS(1516),
    },
    [678] = {
        [anon_sym_COLON] = ACTIONS(1525),
        [sym_comment] = ACTIONS(79),
    },
    [679] = {
        [anon_sym_COMMA] = ACTIONS(1527),
        [anon_sym_RPAREN] = ACTIONS(1529),
        [sym_comment] = ACTIONS(79),
    },
    [680] = {
        [anon_sym_COMMA] = ACTIONS(1531),
        [anon_sym_RPAREN] = ACTIONS(1529),
        [sym_comment] = ACTIONS(79),
    },
    [681] = {
        [anon_sym_RPAREN] = ACTIONS(1533),
        [sym_comment] = ACTIONS(79),
    },
    [682] = {
        [anon_sym_def] = ACTIONS(1535),
        [anon_sym_class] = ACTIONS(1535),
        [anon_sym_AT] = ACTIONS(1535),
        [sym_comment] = ACTIONS(79),
    },
    [683] = {
        [sym_elif_clause] = STATE(759),
        [sym_else_clause] = STATE(770),
        [sym_except_clause] = STATE(771),
        [sym_finally_clause] = STATE(772),
        [aux_sym_if_statement_repeat1] = STATE(693),
        [aux_sym_try_statement_repeat1] = STATE(694),
        [ts_builtin_sym_end] = ACTIONS(1538),
        [anon_sym_SEMI] = ACTIONS(1538),
        [anon_sym_import] = ACTIONS(1552),
        [anon_sym_print] = ACTIONS(1552),
        [anon_sym_return] = ACTIONS(1552),
        [anon_sym_del] = ACTIONS(1552),
        [sym_pass_statement] = ACTIONS(1552),
        [sym_break_statement] = ACTIONS(1552),
        [sym_continue_statement] = ACTIONS(1552),
        [anon_sym_if] = ACTIONS(1552),
        [anon_sym_elif] = ACTIONS(1566),
        [anon_sym_else] = ACTIONS(1569),
        [anon_sym_for] = ACTIONS(1552),
        [anon_sym_while] = ACTIONS(1552),
        [anon_sym_try] = ACTIONS(1552),
        [anon_sym_except] = ACTIONS(1574),
        [anon_sym_finally] = ACTIONS(1578),
        [anon_sym_with] = ACTIONS(1552),
        [anon_sym_def] = ACTIONS(1552),
        [anon_sym_class] = ACTIONS(1552),
        [anon_sym_AT] = ACTIONS(1538),
        [anon_sym_not] = ACTIONS(1552),
        [anon_sym_LBRACK] = ACTIONS(1538),
        [anon_sym_LBRACE] = ACTIONS(1538),
        [sym_number] = ACTIONS(1552),
        [sym_identifier] = ACTIONS(1583),
        [sym_comment] = ACTIONS(79),
        [sym__newline] = ACTIONS(1538),
        [sym__dedent] = ACTIONS(1538),
    },
    [684] = {
        [anon_sym_COLON] = ACTIONS(1597),
        [anon_sym_in] = ACTIONS(1599),
        [anon_sym_RPAREN] = ACTIONS(1601),
        [sym_comment] = ACTIONS(79),
        [sym__newline] = ACTIONS(1603),
    },
    [685] = {
        [sym_arguments] = STATE(365),
        [aux_sym_import_statement_repeat1] = STATE(629),
        [anon_sym_COMMA] = ACTIONS(1450),
        [anon_sym_as] = ACTIONS(1201),
        [anon_sym_LPAREN] = ACTIONS(737),
        [sym_comment] = ACTIONS(79),
        [sym__newline] = ACTIONS(1606),
    },
    [686] = {
        [aux_sym_print_statement_repeat1] = STATE(692),
        [aux_sym_subscript_repeat1] = STATE(56),
        [anon_sym_COMMA] = ACTIONS(1611),
        [anon_sym_as] = ACTIONS(1627),
        [anon_sym_COLON] = ACTIONS(1631),
        [anon_sym_for] = ACTIONS(1640),
        [anon_sym_in] = ACTIONS(1645),
        [anon_sym_LPAREN] = ACTIONS(1651),
        [anon_sym_RPAREN] = ACTIONS(1655),
        [anon_sym_STAR] = ACTIONS(1668),
        [anon_sym_PLUS] = ACTIONS(1672),
        [anon_sym_DASH] = ACTIONS(1672),
        [anon_sym_SLASH] = ACTIONS(1672),
        [anon_sym_STAR_STAR] = ACTIONS(1672),
        [anon_sym_PIPE] = ACTIONS(1672),
        [anon_sym_AMP] = ACTIONS(1672),
        [anon_sym_CARET] = ACTIONS(1672),
        [anon_sym_LT_LT] = ACTIONS(1672),
        [anon_sym_GT_GT] = ACTIONS(1672),
        [anon_sym_and] = ACTIONS(1672),
        [anon_sym_or] = ACTIONS(1672),
        [anon_sym_LBRACK] = ACTIONS(1676),
        [anon_sym_RBRACK] = ACTIONS(1680),
        [anon_sym_RBRACE] = ACTIONS(1688),
        [sym_comment] = ACTIONS(79),
        [sym__newline] = ACTIONS(1695),
    },
    [687] = {
        [anon_sym_COMMA] = ACTIONS(1703),
        [anon_sym_RPAREN] = ACTIONS(1707),
        [sym_comment] = ACTIONS(79),
    },
    [688] = {
        [aux_sym_call_repeat2] = STATE(697),
        [anon_sym_COMMA] = ACTIONS(1711),
        [anon_sym_RPAREN] = ACTIONS(1713),
        [sym_comment] = ACTIONS(79),
    },
    [689] = {
        [anon_sym_RPAREN] = ACTIONS(1715),
        [sym_comment] = ACTIONS(79),
    },
    [690] = {
        [aux_sym_dictionary_repeat1] = STATE(328),
        [anon_sym_COMMA] = ACTIONS(1717),
        [anon_sym_for] = ACTIONS(693),
        [anon_sym_RBRACE] = ACTIONS(1721),
        [sym_comment] = ACTIONS(79),
    },
    [691] = {
        [sym__statement] = STATE(724),
        [sym__simple_statement] = STATE(725),
        [sym_import_statement] = STATE(6),
        [sym_print_statement] = STATE(6),
        [sym_expression_statement] = STATE(6),
        [sym_return_statement] = STATE(6),
        [sym_delete_statement] = STATE(6),
        [sym__compound_statement] = STATE(670),
        [sym_if_statement] = STATE(671),
        [sym_for_statement] = STATE(671),
        [sym_while_statement] = STATE(671),
        [sym_try_statement] = STATE(671),
        [sym_with_statement] = STATE(671),
        [sym_function_definition] = STATE(671),
        [sym_class_definition] = STATE(671),
        [sym_decorated_definition] = STATE(671),
        [sym_decorator] = STATE(24),
        [sym__expression] = STATE(25),
        [sym_binary_operator] = STATE(18),
        [sym_unary_operator] = STATE(18),
        [sym_subscript] = STATE(18),
        [sym_call] = STATE(18),
        [sym_list] = STATE(18),
        [sym_list_comprehension] = STATE(18),
        [sym_dictionary] = STATE(18),
        [sym_dictionary_comprehension] = STATE(18),
        [sym_set] = STATE(18),
        [sym_set_comprehension] = STATE(18),
        [aux_sym_decorated_definition_repeat1] = STATE(696),
        [ts_builtin_sym_end] = ACTIONS(207),
        [anon_sym_SEMI] = ACTIONS(209),
        [anon_sym_import] = ACTIONS(89),
        [anon_sym_print] = ACTIONS(91),
        [anon_sym_return] = ACTIONS(93),
        [anon_sym_del] = ACTIONS(95),
        [sym_pass_statement] = ACTIONS(97),
        [sym_break_statement] = ACTIONS(97),
        [sym_continue_statement] = ACTIONS(97),
        [anon_sym_if] = ACTIONS(1725),
        [anon_sym_for] = ACTIONS(1727),
        [anon_sym_while] = ACTIONS(1729),
        [anon_sym_try] = ACTIONS(1731),
        [anon_sym_with] = ACTIONS(1733),
        [anon_sym_def] = ACTIONS(1735),
        [anon_sym_class] = ACTIONS(1737),
        [anon_sym_AT] = ACTIONS(113),
        [anon_sym_not] = ACTIONS(115),
        [anon_sym_LBRACK] = ACTIONS(117),
        [anon_sym_LBRACE] = ACTIONS(119),
        [sym_number] = ACTIONS(121),
        [sym_identifier] = ACTIONS(123),
        [sym_comment] = ACTIONS(79),
        [sym__newline] = ACTIONS(209),
        [sym__dedent] = ACTIONS(1739),
    },
    [692] = {
        [anon_sym_COMMA] = ACTIONS(1741),
        [anon_sym_COLON] = ACTIONS(497),
        [anon_sym_in] = ACTIONS(497),
        [anon_sym_RPAREN] = ACTIONS(1743),
        [anon_sym_RBRACK] = ACTIONS(723),
        [anon_sym_RBRACE] = ACTIONS(707),
        [sym_comment] = ACTIONS(79),
        [sym__newline] = ACTIONS(1746),
    },
    [693] = {
        [sym_elif_clause] = STATE(713),
        [sym_else_clause] = STATE(714),
        [ts_builtin_sym_end] = ACTIONS(1109),
        [anon_sym_SEMI] = ACTIONS(1109),
        [anon_sym_import] = ACTIONS(1107),
        [anon_sym_print] = ACTIONS(1107),
        [anon_sym_return] = ACTIONS(1107),
        [anon_sym_del] = ACTIONS(1107),
        [sym_pass_statement] = ACTIONS(1107),
        [sym_break_statement] = ACTIONS(1107),
        [sym_continue_statement] = ACTIONS(1107),
        [anon_sym_if] = ACTIONS(1107),
        [anon_sym_elif] = ACTIONS(1749),
        [anon_sym_else] = ACTIONS(1751),
        [anon_sym_for] = ACTIONS(1107),
        [anon_sym_while] = ACTIONS(1107),
        [anon_sym_try] = ACTIONS(1107),
        [anon_sym_with] = ACTIONS(1107),
        [anon_sym_def] = ACTIONS(1107),
        [anon_sym_class] = ACTIONS(1107),
        [anon_sym_AT] = ACTIONS(1109),
        [anon_sym_not] = ACTIONS(1107),
        [anon_sym_LBRACK] = ACTIONS(1109),
        [anon_sym_LBRACE] = ACTIONS(1109),
        [sym_number] = ACTIONS(1107),
        [sym_identifier] = ACTIONS(1111),
        [sym_comment] = ACTIONS(79),
        [sym__newline] = ACTIONS(1109),
        [sym__dedent] = ACTIONS(1109),
    },
    [694] = {
        [sym_else_clause] = STATE(709),
        [sym_except_clause] = STATE(710),
        [sym_finally_clause] = STATE(711),
        [ts_builtin_sym_end] = ACTIONS(995),
        [anon_sym_SEMI] = ACTIONS(995),
        [anon_sym_import] = ACTIONS(993),
        [anon_sym_print] = ACTIONS(993),
        [anon_sym_return] = ACTIONS(993),
        [anon_sym_del] = ACTIONS(993),
        [sym_pass_statement] = ACTIONS(993),
        [sym_break_statement] = ACTIONS(993),
        [sym_continue_statement] = ACTIONS(993),
        [anon_sym_if] = ACTIONS(993),
        [anon_sym_else] = ACTIONS(1751),
        [anon_sym_for] = ACTIONS(993),
        [anon_sym_while] = ACTIONS(993),
        [anon_sym_try] = ACTIONS(993),
        [anon_sym_except] = ACTIONS(1753),
        [anon_sym_finally] = ACTIONS(1479),
        [anon_sym_with] = ACTIONS(993),
        [anon_sym_def] = ACTIONS(993),
        [anon_sym_class] = ACTIONS(993),
        [anon_sym_AT] = ACTIONS(995),
        [anon_sym_not] = ACTIONS(993),
        [anon_sym_LBRACK] = ACTIONS(995),
        [anon_sym_LBRACE] = ACTIONS(995),
        [sym_number] = ACTIONS(993),
        [sym_identifier] = ACTIONS(997),
        [sym_comment] = ACTIONS(79),
        [sym__newline] = ACTIONS(995),
        [sym__dedent] = ACTIONS(995),
    },
    [695] = {
        [anon_sym_COMMA] = ACTIONS(957),
        [anon_sym_COLON] = ACTIONS(1755),
        [sym_comment] = ACTIONS(79),
    },
    [696] = {
        [sym_function_definition] = STATE(702),
        [sym_class_definition] = STATE(702),
        [sym_decorator] = STATE(29),
        [anon_sym_def] = ACTIONS(1757),
        [anon_sym_class] = ACTIONS(1759),
        [anon_sym_AT] = ACTIONS(113),
        [sym_comment] = ACTIONS(79),
    },
    [697] = {
        [anon_sym_COMMA] = ACTIONS(1761),
        [anon_sym_RPAREN] = ACTIONS(1763),
        [sym_comment] = ACTIONS(79),
    },
    [698] = {
        [sym__expression] = STATE(96),
        [sym_binary_operator] = STATE(44),
        [sym_unary_operator] = STATE(44),
        [sym_subscript] = STATE(44),
        [sym_call] = STATE(44),
        [sym_keyword_argument] = STATE(97),
        [sym_dictionary_splat_argument] = STATE(700),
        [sym_list] = STATE(44),
        [sym_list_comprehension] = STATE(44),
        [sym_dictionary] = STATE(44),
        [sym_dictionary_comprehension] = STATE(44),
        [sym_set] = STATE(44),
        [sym_set_comprehension] = STATE(44),
        [anon_sym_STAR_STAR] = ACTIONS(233),
        [anon_sym_not] = ACTIONS(235),
        [anon_sym_LBRACK] = ACTIONS(133),
        [anon_sym_LBRACE] = ACTIONS(135),
        [sym_number] = ACTIONS(137),
        [sym_identifier] = ACTIONS(237),
        [sym_comment] = ACTIONS(79),
    },
    [699] = {
        [anon_sym_COMMA] = ACTIONS(1765),
        [anon_sym_as] = ACTIONS(1765),
        [anon_sym_COLON] = ACTIONS(1765),
        [anon_sym_for] = ACTIONS(1765),
        [anon_sym_in] = ACTIONS(1765),
        [anon_sym_LPAREN] = ACTIONS(1765),
        [anon_sym_RPAREN] = ACTIONS(1765),
        [anon_sym_STAR] = ACTIONS(1768),
        [anon_sym_PLUS] = ACTIONS(1765),
        [anon_sym_DASH] = ACTIONS(1765),
        [anon_sym_SLASH] = ACTIONS(1765),
        [anon_sym_STAR_STAR] = ACTIONS(1765),
        [anon_sym_PIPE] = ACTIONS(1765),
        [anon_sym_AMP] = ACTIONS(1765),
        [anon_sym_CARET] = ACTIONS(1765),
        [anon_sym_LT_LT] = ACTIONS(1765),
        [anon_sym_GT_GT] = ACTIONS(1765),
        [anon_sym_and] = ACTIONS(1765),
        [anon_sym_or] = ACTIONS(1765),
        [anon_sym_LBRACK] = ACTIONS(1765),
        [anon_sym_RBRACK] = ACTIONS(1765),
        [anon_sym_RBRACE] = ACTIONS(1765),
        [sym_comment] = ACTIONS(79),
        [sym__newline] = ACTIONS(1765),
    },
    [700] = {
        [anon_sym_RPAREN] = ACTIONS(1771),
        [sym_comment] = ACTIONS(79),
    },
    [701] = {
        [anon_sym_COMMA] = ACTIONS(1773),
        [anon_sym_as] = ACTIONS(1773),
        [anon_sym_COLON] = ACTIONS(1773),
        [anon_sym_for] = ACTIONS(1773),
        [anon_sym_in] = ACTIONS(1773),
        [anon_sym_LPAREN] = ACTIONS(1773),
        [anon_sym_RPAREN] = ACTIONS(1773),
        [anon_sym_STAR] = ACTIONS(1776),
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
        [anon_sym_LBRACK] = ACTIONS(1773),
        [anon_sym_RBRACK] = ACTIONS(1773),
        [anon_sym_RBRACE] = ACTIONS(1773),
        [sym_comment] = ACTIONS(79),
        [sym__newline] = ACTIONS(1773),
    },
    [702] = {
        [ts_builtin_sym_end] = ACTIONS(215),
        [anon_sym_SEMI] = ACTIONS(215),
        [anon_sym_import] = ACTIONS(217),
        [anon_sym_print] = ACTIONS(217),
        [anon_sym_return] = ACTIONS(217),
        [anon_sym_del] = ACTIONS(217),
        [sym_pass_statement] = ACTIONS(217),
        [sym_break_statement] = ACTIONS(217),
        [sym_continue_statement] = ACTIONS(217),
        [anon_sym_if] = ACTIONS(217),
        [anon_sym_for] = ACTIONS(217),
        [anon_sym_while] = ACTIONS(217),
        [anon_sym_try] = ACTIONS(217),
        [anon_sym_with] = ACTIONS(217),
        [anon_sym_def] = ACTIONS(217),
        [anon_sym_class] = ACTIONS(217),
        [anon_sym_AT] = ACTIONS(215),
        [anon_sym_not] = ACTIONS(217),
        [anon_sym_LBRACK] = ACTIONS(215),
        [anon_sym_LBRACE] = ACTIONS(215),
        [sym_number] = ACTIONS(217),
        [sym_identifier] = ACTIONS(219),
        [sym_comment] = ACTIONS(79),
        [sym__newline] = ACTIONS(215),
        [sym__dedent] = ACTIONS(215),
    },
    [703] = {
        [sym__simple_statement] = STATE(704),
        [sym_import_statement] = STATE(6),
        [sym_print_statement] = STATE(6),
        [sym_expression_statement] = STATE(6),
        [sym_return_statement] = STATE(6),
        [sym_delete_statement] = STATE(6),
        [sym__suite] = STATE(705),
        [sym__expression] = STATE(25),
        [sym_binary_operator] = STATE(18),
        [sym_unary_operator] = STATE(18),
        [sym_subscript] = STATE(18),
        [sym_call] = STATE(18),
        [sym_list] = STATE(18),
        [sym_list_comprehension] = STATE(18),
        [sym_dictionary] = STATE(18),
        [sym_dictionary_comprehension] = STATE(18),
        [sym_set] = STATE(18),
        [sym_set_comprehension] = STATE(18),
        [anon_sym_import] = ACTIONS(89),
        [anon_sym_print] = ACTIONS(91),
        [anon_sym_return] = ACTIONS(93),
        [anon_sym_del] = ACTIONS(95),
        [sym_pass_statement] = ACTIONS(97),
        [sym_break_statement] = ACTIONS(97),
        [sym_continue_statement] = ACTIONS(97),
        [anon_sym_not] = ACTIONS(115),
        [anon_sym_LBRACK] = ACTIONS(117),
        [anon_sym_LBRACE] = ACTIONS(119),
        [sym_number] = ACTIONS(121),
        [sym_identifier] = ACTIONS(123),
        [sym_comment] = ACTIONS(79),
        [sym__indent] = ACTIONS(1264),
    },
    [704] = {
        [sym_comment] = ACTIONS(79),
        [sym__newline] = ACTIONS(1428),
    },
    [705] = {
        [ts_builtin_sym_end] = ACTIONS(963),
        [anon_sym_SEMI] = ACTIONS(963),
        [anon_sym_import] = ACTIONS(961),
        [anon_sym_print] = ACTIONS(961),
        [anon_sym_return] = ACTIONS(961),
        [anon_sym_del] = ACTIONS(961),
        [sym_pass_statement] = ACTIONS(961),
        [sym_break_statement] = ACTIONS(961),
        [sym_continue_statement] = ACTIONS(961),
        [anon_sym_if] = ACTIONS(961),
        [anon_sym_for] = ACTIONS(961),
        [anon_sym_while] = ACTIONS(961),
        [anon_sym_try] = ACTIONS(961),
        [anon_sym_with] = ACTIONS(961),
        [anon_sym_def] = ACTIONS(961),
        [anon_sym_class] = ACTIONS(961),
        [anon_sym_AT] = ACTIONS(963),
        [anon_sym_not] = ACTIONS(961),
        [anon_sym_LBRACK] = ACTIONS(963),
        [anon_sym_LBRACE] = ACTIONS(963),
        [sym_number] = ACTIONS(961),
        [sym_identifier] = ACTIONS(965),
        [sym_comment] = ACTIONS(79),
        [sym__newline] = ACTIONS(963),
        [sym__dedent] = ACTIONS(963),
    },
    [706] = {
        [ts_builtin_sym_end] = ACTIONS(803),
        [anon_sym_SEMI] = ACTIONS(803),
        [anon_sym_import] = ACTIONS(805),
        [anon_sym_print] = ACTIONS(805),
        [anon_sym_return] = ACTIONS(805),
        [anon_sym_del] = ACTIONS(805),
        [sym_pass_statement] = ACTIONS(805),
        [sym_break_statement] = ACTIONS(805),
        [sym_continue_statement] = ACTIONS(805),
        [anon_sym_if] = ACTIONS(805),
        [anon_sym_elif] = ACTIONS(805),
        [anon_sym_else] = ACTIONS(805),
        [anon_sym_for] = ACTIONS(805),
        [anon_sym_while] = ACTIONS(805),
        [anon_sym_try] = ACTIONS(805),
        [anon_sym_except] = ACTIONS(805),
        [anon_sym_finally] = ACTIONS(805),
        [anon_sym_with] = ACTIONS(805),
        [anon_sym_def] = ACTIONS(805),
        [anon_sym_class] = ACTIONS(805),
        [anon_sym_AT] = ACTIONS(803),
        [anon_sym_not] = ACTIONS(805),
        [anon_sym_LBRACK] = ACTIONS(803),
        [anon_sym_LBRACE] = ACTIONS(803),
        [sym_number] = ACTIONS(805),
        [sym_identifier] = ACTIONS(807),
        [sym_comment] = ACTIONS(79),
        [sym__newline] = ACTIONS(803),
        [sym__dedent] = ACTIONS(803),
    },
    [707] = {
        [sym__statement] = STATE(407),
        [sym__simple_statement] = STATE(400),
        [sym_import_statement] = STATE(6),
        [sym_print_statement] = STATE(6),
        [sym_expression_statement] = STATE(6),
        [sym_return_statement] = STATE(6),
        [sym_delete_statement] = STATE(6),
        [sym__compound_statement] = STATE(401),
        [sym_if_statement] = STATE(402),
        [sym_for_statement] = STATE(402),
        [sym_while_statement] = STATE(402),
        [sym_try_statement] = STATE(402),
        [sym_with_statement] = STATE(402),
        [sym_function_definition] = STATE(402),
        [sym_class_definition] = STATE(402),
        [sym_decorated_definition] = STATE(402),
        [sym_decorator] = STATE(24),
        [sym__expression] = STATE(25),
        [sym_binary_operator] = STATE(18),
        [sym_unary_operator] = STATE(18),
        [sym_subscript] = STATE(18),
        [sym_call] = STATE(18),
        [sym_list] = STATE(18),
        [sym_list_comprehension] = STATE(18),
        [sym_dictionary] = STATE(18),
        [sym_dictionary_comprehension] = STATE(18),
        [sym_set] = STATE(18),
        [sym_set_comprehension] = STATE(18),
        [aux_sym_decorated_definition_repeat1] = STATE(404),
        [anon_sym_import] = ACTIONS(89),
        [anon_sym_print] = ACTIONS(91),
        [anon_sym_return] = ACTIONS(93),
        [anon_sym_del] = ACTIONS(95),
        [sym_pass_statement] = ACTIONS(97),
        [sym_break_statement] = ACTIONS(97),
        [sym_continue_statement] = ACTIONS(97),
        [anon_sym_if] = ACTIONS(781),
        [anon_sym_for] = ACTIONS(783),
        [anon_sym_while] = ACTIONS(785),
        [anon_sym_try] = ACTIONS(787),
        [anon_sym_with] = ACTIONS(789),
        [anon_sym_def] = ACTIONS(791),
        [anon_sym_class] = ACTIONS(793),
        [anon_sym_AT] = ACTIONS(113),
        [anon_sym_not] = ACTIONS(115),
        [anon_sym_LBRACK] = ACTIONS(117),
        [anon_sym_LBRACE] = ACTIONS(119),
        [sym_number] = ACTIONS(121),
        [sym_identifier] = ACTIONS(123),
        [sym_comment] = ACTIONS(79),
        [sym__dedent] = ACTIONS(1739),
    },
    [708] = {
        [ts_builtin_sym_end] = ACTIONS(823),
        [anon_sym_SEMI] = ACTIONS(823),
        [anon_sym_import] = ACTIONS(825),
        [anon_sym_print] = ACTIONS(825),
        [anon_sym_return] = ACTIONS(825),
        [anon_sym_del] = ACTIONS(825),
        [sym_pass_statement] = ACTIONS(825),
        [sym_break_statement] = ACTIONS(825),
        [sym_continue_statement] = ACTIONS(825),
        [anon_sym_if] = ACTIONS(825),
        [anon_sym_elif] = ACTIONS(825),
        [anon_sym_else] = ACTIONS(825),
        [anon_sym_for] = ACTIONS(825),
        [anon_sym_while] = ACTIONS(825),
        [anon_sym_try] = ACTIONS(825),
        [anon_sym_except] = ACTIONS(825),
        [anon_sym_finally] = ACTIONS(825),
        [anon_sym_with] = ACTIONS(825),
        [anon_sym_def] = ACTIONS(825),
        [anon_sym_class] = ACTIONS(825),
        [anon_sym_AT] = ACTIONS(823),
        [anon_sym_not] = ACTIONS(825),
        [anon_sym_LBRACK] = ACTIONS(823),
        [anon_sym_LBRACE] = ACTIONS(823),
        [sym_number] = ACTIONS(825),
        [sym_identifier] = ACTIONS(827),
        [sym_comment] = ACTIONS(79),
        [sym__newline] = ACTIONS(823),
        [sym__dedent] = ACTIONS(823),
    },
    [709] = {
        [sym_finally_clause] = STATE(712),
        [ts_builtin_sym_end] = ACTIONS(1009),
        [anon_sym_SEMI] = ACTIONS(1009),
        [anon_sym_import] = ACTIONS(1007),
        [anon_sym_print] = ACTIONS(1007),
        [anon_sym_return] = ACTIONS(1007),
        [anon_sym_del] = ACTIONS(1007),
        [sym_pass_statement] = ACTIONS(1007),
        [sym_break_statement] = ACTIONS(1007),
        [sym_continue_statement] = ACTIONS(1007),
        [anon_sym_if] = ACTIONS(1007),
        [anon_sym_for] = ACTIONS(1007),
        [anon_sym_while] = ACTIONS(1007),
        [anon_sym_try] = ACTIONS(1007),
        [anon_sym_finally] = ACTIONS(1479),
        [anon_sym_with] = ACTIONS(1007),
        [anon_sym_def] = ACTIONS(1007),
        [anon_sym_class] = ACTIONS(1007),
        [anon_sym_AT] = ACTIONS(1009),
        [anon_sym_not] = ACTIONS(1007),
        [anon_sym_LBRACK] = ACTIONS(1009),
        [anon_sym_LBRACE] = ACTIONS(1009),
        [sym_number] = ACTIONS(1007),
        [sym_identifier] = ACTIONS(1011),
        [sym_comment] = ACTIONS(79),
        [sym__newline] = ACTIONS(1009),
        [sym__dedent] = ACTIONS(1009),
    },
    [710] = {
        [ts_builtin_sym_end] = ACTIONS(1015),
        [anon_sym_SEMI] = ACTIONS(1015),
        [anon_sym_import] = ACTIONS(1013),
        [anon_sym_print] = ACTIONS(1013),
        [anon_sym_return] = ACTIONS(1013),
        [anon_sym_del] = ACTIONS(1013),
        [sym_pass_statement] = ACTIONS(1013),
        [sym_break_statement] = ACTIONS(1013),
        [sym_continue_statement] = ACTIONS(1013),
        [anon_sym_if] = ACTIONS(1013),
        [anon_sym_else] = ACTIONS(1013),
        [anon_sym_for] = ACTIONS(1013),
        [anon_sym_while] = ACTIONS(1013),
        [anon_sym_try] = ACTIONS(1013),
        [anon_sym_except] = ACTIONS(1013),
        [anon_sym_finally] = ACTIONS(1013),
        [anon_sym_with] = ACTIONS(1013),
        [anon_sym_def] = ACTIONS(1013),
        [anon_sym_class] = ACTIONS(1013),
        [anon_sym_AT] = ACTIONS(1015),
        [anon_sym_not] = ACTIONS(1013),
        [anon_sym_LBRACK] = ACTIONS(1015),
        [anon_sym_LBRACE] = ACTIONS(1015),
        [sym_number] = ACTIONS(1013),
        [sym_identifier] = ACTIONS(1017),
        [sym_comment] = ACTIONS(79),
        [sym__newline] = ACTIONS(1015),
        [sym__dedent] = ACTIONS(1015),
    },
    [711] = {
        [ts_builtin_sym_end] = ACTIONS(1009),
        [anon_sym_SEMI] = ACTIONS(1009),
        [anon_sym_import] = ACTIONS(1007),
        [anon_sym_print] = ACTIONS(1007),
        [anon_sym_return] = ACTIONS(1007),
        [anon_sym_del] = ACTIONS(1007),
        [sym_pass_statement] = ACTIONS(1007),
        [sym_break_statement] = ACTIONS(1007),
        [sym_continue_statement] = ACTIONS(1007),
        [anon_sym_if] = ACTIONS(1007),
        [anon_sym_for] = ACTIONS(1007),
        [anon_sym_while] = ACTIONS(1007),
        [anon_sym_try] = ACTIONS(1007),
        [anon_sym_with] = ACTIONS(1007),
        [anon_sym_def] = ACTIONS(1007),
        [anon_sym_class] = ACTIONS(1007),
        [anon_sym_AT] = ACTIONS(1009),
        [anon_sym_not] = ACTIONS(1007),
        [anon_sym_LBRACK] = ACTIONS(1009),
        [anon_sym_LBRACE] = ACTIONS(1009),
        [sym_number] = ACTIONS(1007),
        [sym_identifier] = ACTIONS(1011),
        [sym_comment] = ACTIONS(79),
        [sym__newline] = ACTIONS(1009),
        [sym__dedent] = ACTIONS(1009),
    },
    [712] = {
        [ts_builtin_sym_end] = ACTIONS(1021),
        [anon_sym_SEMI] = ACTIONS(1021),
        [anon_sym_import] = ACTIONS(1019),
        [anon_sym_print] = ACTIONS(1019),
        [anon_sym_return] = ACTIONS(1019),
        [anon_sym_del] = ACTIONS(1019),
        [sym_pass_statement] = ACTIONS(1019),
        [sym_break_statement] = ACTIONS(1019),
        [sym_continue_statement] = ACTIONS(1019),
        [anon_sym_if] = ACTIONS(1019),
        [anon_sym_for] = ACTIONS(1019),
        [anon_sym_while] = ACTIONS(1019),
        [anon_sym_try] = ACTIONS(1019),
        [anon_sym_with] = ACTIONS(1019),
        [anon_sym_def] = ACTIONS(1019),
        [anon_sym_class] = ACTIONS(1019),
        [anon_sym_AT] = ACTIONS(1021),
        [anon_sym_not] = ACTIONS(1019),
        [anon_sym_LBRACK] = ACTIONS(1021),
        [anon_sym_LBRACE] = ACTIONS(1021),
        [sym_number] = ACTIONS(1019),
        [sym_identifier] = ACTIONS(1023),
        [sym_comment] = ACTIONS(79),
        [sym__newline] = ACTIONS(1021),
        [sym__dedent] = ACTIONS(1021),
    },
    [713] = {
        [ts_builtin_sym_end] = ACTIONS(1115),
        [anon_sym_SEMI] = ACTIONS(1115),
        [anon_sym_import] = ACTIONS(1113),
        [anon_sym_print] = ACTIONS(1113),
        [anon_sym_return] = ACTIONS(1113),
        [anon_sym_del] = ACTIONS(1113),
        [sym_pass_statement] = ACTIONS(1113),
        [sym_break_statement] = ACTIONS(1113),
        [sym_continue_statement] = ACTIONS(1113),
        [anon_sym_if] = ACTIONS(1113),
        [anon_sym_elif] = ACTIONS(1113),
        [anon_sym_else] = ACTIONS(1113),
        [anon_sym_for] = ACTIONS(1113),
        [anon_sym_while] = ACTIONS(1113),
        [anon_sym_try] = ACTIONS(1113),
        [anon_sym_with] = ACTIONS(1113),
        [anon_sym_def] = ACTIONS(1113),
        [anon_sym_class] = ACTIONS(1113),
        [anon_sym_AT] = ACTIONS(1115),
        [anon_sym_not] = ACTIONS(1113),
        [anon_sym_LBRACK] = ACTIONS(1115),
        [anon_sym_LBRACE] = ACTIONS(1115),
        [sym_number] = ACTIONS(1113),
        [sym_identifier] = ACTIONS(1117),
        [sym_comment] = ACTIONS(79),
        [sym__newline] = ACTIONS(1115),
        [sym__dedent] = ACTIONS(1115),
    },
    [714] = {
        [ts_builtin_sym_end] = ACTIONS(1121),
        [anon_sym_SEMI] = ACTIONS(1121),
        [anon_sym_import] = ACTIONS(1119),
        [anon_sym_print] = ACTIONS(1119),
        [anon_sym_return] = ACTIONS(1119),
        [anon_sym_del] = ACTIONS(1119),
        [sym_pass_statement] = ACTIONS(1119),
        [sym_break_statement] = ACTIONS(1119),
        [sym_continue_statement] = ACTIONS(1119),
        [anon_sym_if] = ACTIONS(1119),
        [anon_sym_for] = ACTIONS(1119),
        [anon_sym_while] = ACTIONS(1119),
        [anon_sym_try] = ACTIONS(1119),
        [anon_sym_with] = ACTIONS(1119),
        [anon_sym_def] = ACTIONS(1119),
        [anon_sym_class] = ACTIONS(1119),
        [anon_sym_AT] = ACTIONS(1121),
        [anon_sym_not] = ACTIONS(1119),
        [anon_sym_LBRACK] = ACTIONS(1121),
        [anon_sym_LBRACE] = ACTIONS(1121),
        [sym_number] = ACTIONS(1119),
        [sym_identifier] = ACTIONS(1123),
        [sym_comment] = ACTIONS(79),
        [sym__newline] = ACTIONS(1121),
        [sym__dedent] = ACTIONS(1121),
    },
    [715] = {
        [sym__simple_statement] = STATE(704),
        [sym_import_statement] = STATE(6),
        [sym_print_statement] = STATE(6),
        [sym_expression_statement] = STATE(6),
        [sym_return_statement] = STATE(6),
        [sym_delete_statement] = STATE(6),
        [sym__suite] = STATE(716),
        [sym__expression] = STATE(25),
        [sym_binary_operator] = STATE(18),
        [sym_unary_operator] = STATE(18),
        [sym_subscript] = STATE(18),
        [sym_call] = STATE(18),
        [sym_list] = STATE(18),
        [sym_list_comprehension] = STATE(18),
        [sym_dictionary] = STATE(18),
        [sym_dictionary_comprehension] = STATE(18),
        [sym_set] = STATE(18),
        [sym_set_comprehension] = STATE(18),
        [anon_sym_import] = ACTIONS(89),
        [anon_sym_print] = ACTIONS(91),
        [anon_sym_return] = ACTIONS(93),
        [anon_sym_del] = ACTIONS(95),
        [sym_pass_statement] = ACTIONS(97),
        [sym_break_statement] = ACTIONS(97),
        [sym_continue_statement] = ACTIONS(97),
        [anon_sym_not] = ACTIONS(115),
        [anon_sym_LBRACK] = ACTIONS(117),
        [anon_sym_LBRACE] = ACTIONS(119),
        [sym_number] = ACTIONS(121),
        [sym_identifier] = ACTIONS(123),
        [sym_comment] = ACTIONS(79),
        [sym__indent] = ACTIONS(1264),
    },
    [716] = {
        [ts_builtin_sym_end] = ACTIONS(1027),
        [anon_sym_SEMI] = ACTIONS(1027),
        [anon_sym_import] = ACTIONS(1025),
        [anon_sym_print] = ACTIONS(1025),
        [anon_sym_return] = ACTIONS(1025),
        [anon_sym_del] = ACTIONS(1025),
        [sym_pass_statement] = ACTIONS(1025),
        [sym_break_statement] = ACTIONS(1025),
        [sym_continue_statement] = ACTIONS(1025),
        [anon_sym_if] = ACTIONS(1025),
        [anon_sym_for] = ACTIONS(1025),
        [anon_sym_while] = ACTIONS(1025),
        [anon_sym_try] = ACTIONS(1025),
        [anon_sym_finally] = ACTIONS(1025),
        [anon_sym_with] = ACTIONS(1025),
        [anon_sym_def] = ACTIONS(1025),
        [anon_sym_class] = ACTIONS(1025),
        [anon_sym_AT] = ACTIONS(1027),
        [anon_sym_not] = ACTIONS(1025),
        [anon_sym_LBRACK] = ACTIONS(1027),
        [anon_sym_LBRACE] = ACTIONS(1027),
        [sym_number] = ACTIONS(1025),
        [sym_identifier] = ACTIONS(1029),
        [sym_comment] = ACTIONS(79),
        [sym__newline] = ACTIONS(1027),
        [sym__dedent] = ACTIONS(1027),
    },
    [717] = {
        [sym__expression] = STATE(719),
        [sym_binary_operator] = STATE(18),
        [sym_unary_operator] = STATE(18),
        [sym_subscript] = STATE(18),
        [sym_call] = STATE(18),
        [sym_list] = STATE(18),
        [sym_list_comprehension] = STATE(18),
        [sym_dictionary] = STATE(18),
        [sym_dictionary_comprehension] = STATE(18),
        [sym_set] = STATE(18),
        [sym_set_comprehension] = STATE(18),
        [anon_sym_not] = ACTIONS(1779),
        [anon_sym_LBRACK] = ACTIONS(117),
        [anon_sym_RBRACK] = ACTIONS(727),
        [anon_sym_LBRACE] = ACTIONS(119),
        [anon_sym_RBRACE] = ACTIONS(711),
        [sym_number] = ACTIONS(121),
        [sym_identifier] = ACTIONS(123),
        [sym_comment] = ACTIONS(79),
    },
    [718] = {
        [sym__expression] = STATE(722),
        [sym_binary_operator] = STATE(18),
        [sym_unary_operator] = STATE(18),
        [sym_subscript] = STATE(18),
        [sym_call] = STATE(18),
        [sym_list] = STATE(18),
        [sym_list_comprehension] = STATE(18),
        [sym_dictionary] = STATE(18),
        [sym_dictionary_comprehension] = STATE(18),
        [sym_set] = STATE(18),
        [sym_set_comprehension] = STATE(18),
        [anon_sym_not] = ACTIONS(1779),
        [anon_sym_LBRACK] = ACTIONS(117),
        [anon_sym_LBRACE] = ACTIONS(119),
        [sym_number] = ACTIONS(121),
        [sym_identifier] = ACTIONS(123),
        [sym_comment] = ACTIONS(79),
    },
    [719] = {
        [anon_sym_COMMA] = ACTIONS(499),
        [anon_sym_COLON] = ACTIONS(499),
        [anon_sym_in] = ACTIONS(499),
        [anon_sym_LPAREN] = ACTIONS(187),
        [anon_sym_RPAREN] = ACTIONS(499),
        [anon_sym_STAR] = ACTIONS(1781),
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
        [anon_sym_LBRACK] = ACTIONS(203),
        [anon_sym_RBRACK] = ACTIONS(499),
        [anon_sym_RBRACE] = ACTIONS(499),
        [sym_comment] = ACTIONS(79),
        [sym__newline] = ACTIONS(499),
    },
    [720] = {
        [sym__expression] = STATE(721),
        [sym_binary_operator] = STATE(18),
        [sym_unary_operator] = STATE(18),
        [sym_subscript] = STATE(18),
        [sym_call] = STATE(18),
        [sym_list] = STATE(18),
        [sym_list_comprehension] = STATE(18),
        [sym_dictionary] = STATE(18),
        [sym_dictionary_comprehension] = STATE(18),
        [sym_set] = STATE(18),
        [sym_set_comprehension] = STATE(18),
        [anon_sym_not] = ACTIONS(1779),
        [anon_sym_LBRACK] = ACTIONS(117),
        [anon_sym_LBRACE] = ACTIONS(119),
        [sym_number] = ACTIONS(121),
        [sym_identifier] = ACTIONS(123),
        [sym_comment] = ACTIONS(79),
    },
    [721] = {
        [anon_sym_COMMA] = ACTIONS(307),
        [anon_sym_COLON] = ACTIONS(307),
        [anon_sym_in] = ACTIONS(307),
        [anon_sym_LPAREN] = ACTIONS(1785),
        [anon_sym_RPAREN] = ACTIONS(307),
        [anon_sym_STAR] = ACTIONS(1788),
        [anon_sym_PLUS] = ACTIONS(1791),
        [anon_sym_DASH] = ACTIONS(1791),
        [anon_sym_SLASH] = ACTIONS(1791),
        [anon_sym_STAR_STAR] = ACTIONS(1791),
        [anon_sym_PIPE] = ACTIONS(1791),
        [anon_sym_AMP] = ACTIONS(1791),
        [anon_sym_CARET] = ACTIONS(1791),
        [anon_sym_LT_LT] = ACTIONS(1791),
        [anon_sym_GT_GT] = ACTIONS(1791),
        [anon_sym_and] = ACTIONS(1791),
        [anon_sym_or] = ACTIONS(1791),
        [anon_sym_LBRACK] = ACTIONS(1794),
        [anon_sym_RBRACK] = ACTIONS(307),
        [anon_sym_RBRACE] = ACTIONS(307),
        [sym_comment] = ACTIONS(79),
        [sym__newline] = ACTIONS(307),
    },
    [722] = {
        [anon_sym_COMMA] = ACTIONS(635),
        [anon_sym_COLON] = ACTIONS(635),
        [anon_sym_in] = ACTIONS(635),
        [anon_sym_LPAREN] = ACTIONS(1797),
        [anon_sym_RPAREN] = ACTIONS(635),
        [anon_sym_STAR] = ACTIONS(1800),
        [anon_sym_PLUS] = ACTIONS(1803),
        [anon_sym_DASH] = ACTIONS(1803),
        [anon_sym_SLASH] = ACTIONS(1803),
        [anon_sym_STAR_STAR] = ACTIONS(1803),
        [anon_sym_PIPE] = ACTIONS(1803),
        [anon_sym_AMP] = ACTIONS(1803),
        [anon_sym_CARET] = ACTIONS(1803),
        [anon_sym_LT_LT] = ACTIONS(1803),
        [anon_sym_GT_GT] = ACTIONS(1803),
        [anon_sym_and] = ACTIONS(1803),
        [anon_sym_or] = ACTIONS(1803),
        [anon_sym_LBRACK] = ACTIONS(1806),
        [anon_sym_RBRACK] = ACTIONS(635),
        [anon_sym_RBRACE] = ACTIONS(635),
        [sym_comment] = ACTIONS(79),
        [sym__newline] = ACTIONS(635),
    },
    [723] = {
        [sym_expression_list] = STATE(727),
        [sym__expression] = STATE(165),
        [sym_binary_operator] = STATE(44),
        [sym_unary_operator] = STATE(44),
        [sym_subscript] = STATE(44),
        [sym_call] = STATE(44),
        [sym_list] = STATE(44),
        [sym_list_comprehension] = STATE(44),
        [sym_dictionary] = STATE(44),
        [sym_dictionary_comprehension] = STATE(44),
        [sym_set] = STATE(44),
        [sym_set_comprehension] = STATE(44),
        [anon_sym_not] = ACTIONS(141),
        [anon_sym_LBRACK] = ACTIONS(133),
        [anon_sym_LBRACE] = ACTIONS(135),
        [sym_number] = ACTIONS(137),
        [sym_identifier] = ACTIONS(139),
        [sym_comment] = ACTIONS(79),
    },
    [724] = {
        [ts_builtin_sym_end] = ACTIONS(225),
        [anon_sym_SEMI] = ACTIONS(225),
        [anon_sym_import] = ACTIONS(227),
        [anon_sym_print] = ACTIONS(227),
        [anon_sym_return] = ACTIONS(227),
        [anon_sym_del] = ACTIONS(227),
        [sym_pass_statement] = ACTIONS(227),
        [sym_break_statement] = ACTIONS(227),
        [sym_continue_statement] = ACTIONS(227),
        [anon_sym_if] = ACTIONS(227),
        [anon_sym_for] = ACTIONS(227),
        [anon_sym_while] = ACTIONS(227),
        [anon_sym_try] = ACTIONS(227),
        [anon_sym_with] = ACTIONS(227),
        [anon_sym_def] = ACTIONS(227),
        [anon_sym_class] = ACTIONS(227),
        [anon_sym_AT] = ACTIONS(225),
        [anon_sym_not] = ACTIONS(227),
        [anon_sym_LBRACK] = ACTIONS(225),
        [anon_sym_LBRACE] = ACTIONS(225),
        [sym_number] = ACTIONS(227),
        [sym_identifier] = ACTIONS(229),
        [sym_comment] = ACTIONS(79),
        [sym__newline] = ACTIONS(225),
        [sym__dedent] = ACTIONS(225),
    },
    [725] = {
        [sym_comment] = ACTIONS(79),
        [sym__newline] = ACTIONS(1809),
    },
    [726] = {
        [ts_builtin_sym_end] = ACTIONS(679),
        [anon_sym_SEMI] = ACTIONS(679),
        [anon_sym_import] = ACTIONS(681),
        [anon_sym_print] = ACTIONS(681),
        [anon_sym_return] = ACTIONS(681),
        [anon_sym_del] = ACTIONS(681),
        [sym_pass_statement] = ACTIONS(681),
        [sym_break_statement] = ACTIONS(681),
        [sym_continue_statement] = ACTIONS(681),
        [anon_sym_if] = ACTIONS(681),
        [anon_sym_for] = ACTIONS(681),
        [anon_sym_while] = ACTIONS(681),
        [anon_sym_try] = ACTIONS(681),
        [anon_sym_with] = ACTIONS(681),
        [anon_sym_def] = ACTIONS(681),
        [anon_sym_class] = ACTIONS(681),
        [anon_sym_AT] = ACTIONS(679),
        [anon_sym_not] = ACTIONS(681),
        [anon_sym_LBRACK] = ACTIONS(679),
        [anon_sym_LBRACE] = ACTIONS(679),
        [sym_number] = ACTIONS(681),
        [sym_identifier] = ACTIONS(683),
        [sym_comment] = ACTIONS(79),
        [sym__newline] = ACTIONS(679),
        [sym__dedent] = ACTIONS(679),
    },
    [727] = {
        [anon_sym_in] = ACTIONS(1811),
        [sym_comment] = ACTIONS(79),
    },
    [728] = {
        [sym_expression_list] = STATE(729),
        [sym__expression] = STATE(526),
        [sym_binary_operator] = STATE(44),
        [sym_unary_operator] = STATE(44),
        [sym_subscript] = STATE(44),
        [sym_call] = STATE(44),
        [sym_list] = STATE(44),
        [sym_list_comprehension] = STATE(44),
        [sym_dictionary] = STATE(44),
        [sym_dictionary_comprehension] = STATE(44),
        [sym_set] = STATE(44),
        [sym_set_comprehension] = STATE(44),
        [anon_sym_not] = ACTIONS(939),
        [anon_sym_LBRACK] = ACTIONS(133),
        [anon_sym_LBRACE] = ACTIONS(135),
        [sym_number] = ACTIONS(137),
        [sym_identifier] = ACTIONS(139),
        [sym_comment] = ACTIONS(79),
    },
    [729] = {
        [anon_sym_COLON] = ACTIONS(1597),
        [sym_comment] = ACTIONS(79),
    },
    [730] = {
        [sym__simple_statement] = STATE(704),
        [sym_import_statement] = STATE(6),
        [sym_print_statement] = STATE(6),
        [sym_expression_statement] = STATE(6),
        [sym_return_statement] = STATE(6),
        [sym_delete_statement] = STATE(6),
        [sym__suite] = STATE(731),
        [sym__expression] = STATE(25),
        [sym_binary_operator] = STATE(18),
        [sym_unary_operator] = STATE(18),
        [sym_subscript] = STATE(18),
        [sym_call] = STATE(18),
        [sym_list] = STATE(18),
        [sym_list_comprehension] = STATE(18),
        [sym_dictionary] = STATE(18),
        [sym_dictionary_comprehension] = STATE(18),
        [sym_set] = STATE(18),
        [sym_set_comprehension] = STATE(18),
        [anon_sym_import] = ACTIONS(89),
        [anon_sym_print] = ACTIONS(91),
        [anon_sym_return] = ACTIONS(93),
        [anon_sym_del] = ACTIONS(95),
        [sym_pass_statement] = ACTIONS(97),
        [sym_break_statement] = ACTIONS(97),
        [sym_continue_statement] = ACTIONS(97),
        [anon_sym_not] = ACTIONS(115),
        [anon_sym_LBRACK] = ACTIONS(117),
        [anon_sym_LBRACE] = ACTIONS(119),
        [sym_number] = ACTIONS(121),
        [sym_identifier] = ACTIONS(123),
        [sym_comment] = ACTIONS(79),
        [sym__indent] = ACTIONS(1264),
    },
    [731] = {
        [sym_else_clause] = STATE(732),
        [ts_builtin_sym_end] = ACTIONS(1081),
        [anon_sym_SEMI] = ACTIONS(1081),
        [anon_sym_import] = ACTIONS(1079),
        [anon_sym_print] = ACTIONS(1079),
        [anon_sym_return] = ACTIONS(1079),
        [anon_sym_del] = ACTIONS(1079),
        [sym_pass_statement] = ACTIONS(1079),
        [sym_break_statement] = ACTIONS(1079),
        [sym_continue_statement] = ACTIONS(1079),
        [anon_sym_if] = ACTIONS(1079),
        [anon_sym_else] = ACTIONS(1751),
        [anon_sym_for] = ACTIONS(1079),
        [anon_sym_while] = ACTIONS(1079),
        [anon_sym_try] = ACTIONS(1079),
        [anon_sym_with] = ACTIONS(1079),
        [anon_sym_def] = ACTIONS(1079),
        [anon_sym_class] = ACTIONS(1079),
        [anon_sym_AT] = ACTIONS(1081),
        [anon_sym_not] = ACTIONS(1079),
        [anon_sym_LBRACK] = ACTIONS(1081),
        [anon_sym_LBRACE] = ACTIONS(1081),
        [sym_number] = ACTIONS(1079),
        [sym_identifier] = ACTIONS(1083),
        [sym_comment] = ACTIONS(79),
        [sym__newline] = ACTIONS(1081),
        [sym__dedent] = ACTIONS(1081),
    },
    [732] = {
        [ts_builtin_sym_end] = ACTIONS(1087),
        [anon_sym_SEMI] = ACTIONS(1087),
        [anon_sym_import] = ACTIONS(1085),
        [anon_sym_print] = ACTIONS(1085),
        [anon_sym_return] = ACTIONS(1085),
        [anon_sym_del] = ACTIONS(1085),
        [sym_pass_statement] = ACTIONS(1085),
        [sym_break_statement] = ACTIONS(1085),
        [sym_continue_statement] = ACTIONS(1085),
        [anon_sym_if] = ACTIONS(1085),
        [anon_sym_for] = ACTIONS(1085),
        [anon_sym_while] = ACTIONS(1085),
        [anon_sym_try] = ACTIONS(1085),
        [anon_sym_with] = ACTIONS(1085),
        [anon_sym_def] = ACTIONS(1085),
        [anon_sym_class] = ACTIONS(1085),
        [anon_sym_AT] = ACTIONS(1087),
        [anon_sym_not] = ACTIONS(1085),
        [anon_sym_LBRACK] = ACTIONS(1087),
        [anon_sym_LBRACE] = ACTIONS(1087),
        [sym_number] = ACTIONS(1085),
        [sym_identifier] = ACTIONS(1089),
        [sym_comment] = ACTIONS(79),
        [sym__newline] = ACTIONS(1087),
        [sym__dedent] = ACTIONS(1087),
    },
    [733] = {
        [anon_sym_COMMA] = ACTIONS(1280),
        [anon_sym_as] = ACTIONS(1280),
        [anon_sym_COLON] = ACTIONS(1280),
        [anon_sym_for] = ACTIONS(1280),
        [anon_sym_in] = ACTIONS(1280),
        [anon_sym_LPAREN] = ACTIONS(1280),
        [anon_sym_RPAREN] = ACTIONS(1280),
        [anon_sym_STAR] = ACTIONS(1298),
        [anon_sym_PLUS] = ACTIONS(1280),
        [anon_sym_DASH] = ACTIONS(1280),
        [anon_sym_SLASH] = ACTIONS(1280),
        [anon_sym_STAR_STAR] = ACTIONS(1280),
        [anon_sym_PIPE] = ACTIONS(1280),
        [anon_sym_AMP] = ACTIONS(1280),
        [anon_sym_CARET] = ACTIONS(1280),
        [anon_sym_LT_LT] = ACTIONS(1280),
        [anon_sym_GT_GT] = ACTIONS(1280),
        [anon_sym_and] = ACTIONS(1280),
        [anon_sym_or] = ACTIONS(1280),
        [anon_sym_LBRACK] = ACTIONS(1280),
        [anon_sym_RBRACK] = ACTIONS(1280),
        [anon_sym_RBRACE] = ACTIONS(1280),
        [sym_comment] = ACTIONS(79),
        [sym__newline] = ACTIONS(1280),
    },
    [734] = {
        [sym__expression] = STATE(111),
        [sym_binary_operator] = STATE(44),
        [sym_unary_operator] = STATE(44),
        [sym_subscript] = STATE(44),
        [sym_call] = STATE(44),
        [sym_keyword_argument] = STATE(112),
        [sym_dictionary_splat_argument] = STATE(736),
        [sym_list] = STATE(44),
        [sym_list_comprehension] = STATE(44),
        [sym_dictionary] = STATE(44),
        [sym_dictionary_comprehension] = STATE(44),
        [sym_set] = STATE(44),
        [sym_set_comprehension] = STATE(44),
        [anon_sym_STAR_STAR] = ACTIONS(233),
        [anon_sym_not] = ACTIONS(235),
        [anon_sym_LBRACK] = ACTIONS(133),
        [anon_sym_LBRACE] = ACTIONS(135),
        [sym_number] = ACTIONS(137),
        [sym_identifier] = ACTIONS(237),
        [sym_comment] = ACTIONS(79),
    },
    [735] = {
        [anon_sym_COMMA] = ACTIONS(1813),
        [anon_sym_as] = ACTIONS(1813),
        [anon_sym_COLON] = ACTIONS(1813),
        [anon_sym_for] = ACTIONS(1813),
        [anon_sym_in] = ACTIONS(1813),
        [anon_sym_LPAREN] = ACTIONS(1813),
        [anon_sym_RPAREN] = ACTIONS(1813),
        [anon_sym_STAR] = ACTIONS(1816),
        [anon_sym_PLUS] = ACTIONS(1813),
        [anon_sym_DASH] = ACTIONS(1813),
        [anon_sym_SLASH] = ACTIONS(1813),
        [anon_sym_STAR_STAR] = ACTIONS(1813),
        [anon_sym_PIPE] = ACTIONS(1813),
        [anon_sym_AMP] = ACTIONS(1813),
        [anon_sym_CARET] = ACTIONS(1813),
        [anon_sym_LT_LT] = ACTIONS(1813),
        [anon_sym_GT_GT] = ACTIONS(1813),
        [anon_sym_and] = ACTIONS(1813),
        [anon_sym_or] = ACTIONS(1813),
        [anon_sym_LBRACK] = ACTIONS(1813),
        [anon_sym_RBRACK] = ACTIONS(1813),
        [anon_sym_RBRACE] = ACTIONS(1813),
        [sym_comment] = ACTIONS(79),
        [sym__newline] = ACTIONS(1813),
    },
    [736] = {
        [anon_sym_RPAREN] = ACTIONS(1819),
        [sym_comment] = ACTIONS(79),
    },
    [737] = {
        [anon_sym_COMMA] = ACTIONS(1821),
        [anon_sym_as] = ACTIONS(1821),
        [anon_sym_COLON] = ACTIONS(1821),
        [anon_sym_for] = ACTIONS(1821),
        [anon_sym_in] = ACTIONS(1821),
        [anon_sym_LPAREN] = ACTIONS(1821),
        [anon_sym_RPAREN] = ACTIONS(1821),
        [anon_sym_STAR] = ACTIONS(1824),
        [anon_sym_PLUS] = ACTIONS(1821),
        [anon_sym_DASH] = ACTIONS(1821),
        [anon_sym_SLASH] = ACTIONS(1821),
        [anon_sym_STAR_STAR] = ACTIONS(1821),
        [anon_sym_PIPE] = ACTIONS(1821),
        [anon_sym_AMP] = ACTIONS(1821),
        [anon_sym_CARET] = ACTIONS(1821),
        [anon_sym_LT_LT] = ACTIONS(1821),
        [anon_sym_GT_GT] = ACTIONS(1821),
        [anon_sym_and] = ACTIONS(1821),
        [anon_sym_or] = ACTIONS(1821),
        [anon_sym_LBRACK] = ACTIONS(1821),
        [anon_sym_RBRACK] = ACTIONS(1821),
        [anon_sym_RBRACE] = ACTIONS(1821),
        [sym_comment] = ACTIONS(79),
        [sym__newline] = ACTIONS(1821),
    },
    [738] = {
        [anon_sym_RPAREN] = ACTIONS(1763),
        [anon_sym_STAR] = ACTIONS(1827),
        [anon_sym_STAR_STAR] = ACTIONS(1830),
        [anon_sym_not] = ACTIONS(1827),
        [anon_sym_LBRACK] = ACTIONS(1830),
        [anon_sym_LBRACE] = ACTIONS(1830),
        [sym_number] = ACTIONS(1827),
        [sym_identifier] = ACTIONS(1833),
        [sym_comment] = ACTIONS(79),
    },
    [739] = {
        [sym__expression] = STATE(766),
        [sym_binary_operator] = STATE(18),
        [sym_unary_operator] = STATE(18),
        [sym_subscript] = STATE(18),
        [sym_call] = STATE(18),
        [sym_list] = STATE(18),
        [sym_list_comprehension] = STATE(18),
        [sym_dictionary] = STATE(18),
        [sym_dictionary_comprehension] = STATE(18),
        [sym_set] = STATE(18),
        [sym_set_comprehension] = STATE(18),
        [anon_sym_RPAREN] = ACTIONS(1763),
        [anon_sym_STAR] = ACTIONS(1827),
        [anon_sym_STAR_STAR] = ACTIONS(1830),
        [anon_sym_not] = ACTIONS(1836),
        [anon_sym_LBRACK] = ACTIONS(1233),
        [anon_sym_DOT_DOT_DOT] = ACTIONS(269),
        [anon_sym_RBRACK] = ACTIONS(1840),
        [anon_sym_LBRACE] = ACTIONS(1241),
        [anon_sym_RBRACE] = ACTIONS(707),
        [sym_number] = ACTIONS(1247),
        [sym_identifier] = ACTIONS(1842),
        [sym_comment] = ACTIONS(79),
    },
    [740] = {
        [sym__expression] = STATE(762),
        [sym_binary_operator] = STATE(44),
        [sym_unary_operator] = STATE(44),
        [sym_subscript] = STATE(44),
        [sym_call] = STATE(44),
        [sym_list] = STATE(44),
        [sym_list_comprehension] = STATE(44),
        [sym_dictionary] = STATE(44),
        [sym_dictionary_comprehension] = STATE(44),
        [sym_set] = STATE(44),
        [sym_set_comprehension] = STATE(44),
        [anon_sym_not] = ACTIONS(939),
        [anon_sym_LBRACK] = ACTIONS(133),
        [anon_sym_LBRACE] = ACTIONS(135),
        [sym_number] = ACTIONS(137),
        [sym_identifier] = ACTIONS(139),
        [sym_comment] = ACTIONS(79),
    },
    [741] = {
        [sym__simple_statement] = STATE(704),
        [sym_import_statement] = STATE(6),
        [sym_print_statement] = STATE(6),
        [sym_expression_statement] = STATE(6),
        [sym_return_statement] = STATE(6),
        [sym_delete_statement] = STATE(6),
        [sym__suite] = STATE(755),
        [sym__expression] = STATE(756),
        [sym_binary_operator] = STATE(18),
        [sym_unary_operator] = STATE(18),
        [sym_subscript] = STATE(18),
        [sym_call] = STATE(18),
        [sym_list] = STATE(18),
        [sym_list_comprehension] = STATE(18),
        [sym_dictionary] = STATE(18),
        [sym_dictionary_comprehension] = STATE(18),
        [sym_set] = STATE(18),
        [sym_set_comprehension] = STATE(18),
        [anon_sym_import] = ACTIONS(89),
        [anon_sym_print] = ACTIONS(91),
        [anon_sym_return] = ACTIONS(93),
        [anon_sym_del] = ACTIONS(95),
        [sym_pass_statement] = ACTIONS(97),
        [sym_break_statement] = ACTIONS(97),
        [sym_continue_statement] = ACTIONS(97),
        [anon_sym_not] = ACTIONS(1262),
        [anon_sym_LBRACK] = ACTIONS(117),
        [anon_sym_LBRACE] = ACTIONS(119),
        [sym_number] = ACTIONS(121),
        [sym_identifier] = ACTIONS(123),
        [sym_comment] = ACTIONS(79),
        [sym__indent] = ACTIONS(1264),
    },
    [742] = {
        [sym_expression_list] = STATE(747),
        [sym__expression] = STATE(165),
        [sym_binary_operator] = STATE(44),
        [sym_unary_operator] = STATE(44),
        [sym_subscript] = STATE(44),
        [sym_call] = STATE(44),
        [sym_list] = STATE(44),
        [sym_list_comprehension] = STATE(44),
        [sym_dictionary] = STATE(44),
        [sym_dictionary_comprehension] = STATE(44),
        [sym_set] = STATE(44),
        [sym_set_comprehension] = STATE(44),
        [anon_sym_not] = ACTIONS(141),
        [anon_sym_LBRACK] = ACTIONS(133),
        [anon_sym_LBRACE] = ACTIONS(135),
        [sym_number] = ACTIONS(137),
        [sym_identifier] = ACTIONS(139),
        [sym_comment] = ACTIONS(79),
    },
    [743] = {
        [anon_sym_COMMA] = ACTIONS(1813),
        [anon_sym_as] = ACTIONS(1813),
        [anon_sym_COLON] = ACTIONS(1813),
        [anon_sym_for] = ACTIONS(1813),
        [anon_sym_in] = ACTIONS(1813),
        [anon_sym_LPAREN] = ACTIONS(1813),
        [anon_sym_RPAREN] = ACTIONS(1813),
        [anon_sym_STAR] = ACTIONS(1816),
        [anon_sym_PLUS] = ACTIONS(1813),
        [anon_sym_DASH] = ACTIONS(1813),
        [anon_sym_SLASH] = ACTIONS(1813),
        [anon_sym_STAR_STAR] = ACTIONS(1813),
        [anon_sym_PIPE] = ACTIONS(1813),
        [anon_sym_AMP] = ACTIONS(1813),
        [anon_sym_CARET] = ACTIONS(1813),
        [anon_sym_LT_LT] = ACTIONS(1813),
        [anon_sym_GT_GT] = ACTIONS(1813),
        [anon_sym_and] = ACTIONS(1813),
        [anon_sym_or] = ACTIONS(1813),
        [anon_sym_LBRACK] = ACTIONS(1813),
        [anon_sym_RBRACK] = ACTIONS(1813),
        [anon_sym_RBRACE] = ACTIONS(1813),
        [sym_comment] = ACTIONS(79),
        [sym__newline] = ACTIONS(1846),
    },
    [744] = {
        [anon_sym_COMMA] = ACTIONS(1850),
        [anon_sym_as] = ACTIONS(1850),
        [anon_sym_COLON] = ACTIONS(1850),
        [anon_sym_for] = ACTIONS(1850),
        [anon_sym_in] = ACTIONS(1850),
        [anon_sym_LPAREN] = ACTIONS(1850),
        [anon_sym_RPAREN] = ACTIONS(1850),
        [anon_sym_STAR] = ACTIONS(1854),
        [anon_sym_PLUS] = ACTIONS(1850),
        [anon_sym_DASH] = ACTIONS(1850),
        [anon_sym_SLASH] = ACTIONS(1850),
        [anon_sym_STAR_STAR] = ACTIONS(1850),
        [anon_sym_PIPE] = ACTIONS(1850),
        [anon_sym_AMP] = ACTIONS(1850),
        [anon_sym_CARET] = ACTIONS(1850),
        [anon_sym_LT_LT] = ACTIONS(1850),
        [anon_sym_GT_GT] = ACTIONS(1850),
        [anon_sym_and] = ACTIONS(1850),
        [anon_sym_or] = ACTIONS(1850),
        [anon_sym_LBRACK] = ACTIONS(1850),
        [anon_sym_RBRACK] = ACTIONS(1850),
        [anon_sym_RBRACE] = ACTIONS(1850),
        [sym_comment] = ACTIONS(79),
        [sym__newline] = ACTIONS(1850),
    },
    [745] = {
        [anon_sym_COMMA] = ACTIONS(1858),
        [anon_sym_as] = ACTIONS(1858),
        [anon_sym_COLON] = ACTIONS(1858),
        [anon_sym_for] = ACTIONS(1858),
        [anon_sym_in] = ACTIONS(1858),
        [anon_sym_LPAREN] = ACTIONS(1858),
        [anon_sym_RPAREN] = ACTIONS(1858),
        [anon_sym_STAR] = ACTIONS(1862),
        [anon_sym_PLUS] = ACTIONS(1858),
        [anon_sym_DASH] = ACTIONS(1858),
        [anon_sym_SLASH] = ACTIONS(1858),
        [anon_sym_STAR_STAR] = ACTIONS(1858),
        [anon_sym_PIPE] = ACTIONS(1858),
        [anon_sym_AMP] = ACTIONS(1858),
        [anon_sym_CARET] = ACTIONS(1858),
        [anon_sym_LT_LT] = ACTIONS(1858),
        [anon_sym_GT_GT] = ACTIONS(1858),
        [anon_sym_and] = ACTIONS(1858),
        [anon_sym_or] = ACTIONS(1858),
        [anon_sym_LBRACK] = ACTIONS(1858),
        [anon_sym_RBRACK] = ACTIONS(1858),
        [anon_sym_RBRACE] = ACTIONS(1858),
        [sym_comment] = ACTIONS(79),
        [sym__newline] = ACTIONS(1858),
    },
    [746] = {
        [anon_sym_COMMA] = ACTIONS(307),
        [anon_sym_as] = ACTIONS(307),
        [anon_sym_COLON] = ACTIONS(307),
        [anon_sym_for] = ACTIONS(307),
        [anon_sym_in] = ACTIONS(307),
        [anon_sym_LPAREN] = ACTIONS(1785),
        [anon_sym_RPAREN] = ACTIONS(307),
        [anon_sym_STAR] = ACTIONS(1866),
        [anon_sym_PLUS] = ACTIONS(1869),
        [anon_sym_DASH] = ACTIONS(1869),
        [anon_sym_SLASH] = ACTIONS(1869),
        [anon_sym_STAR_STAR] = ACTIONS(1869),
        [anon_sym_PIPE] = ACTIONS(1869),
        [anon_sym_AMP] = ACTIONS(1869),
        [anon_sym_CARET] = ACTIONS(1869),
        [anon_sym_LT_LT] = ACTIONS(1869),
        [anon_sym_GT_GT] = ACTIONS(1869),
        [anon_sym_and] = ACTIONS(1869),
        [anon_sym_or] = ACTIONS(1869),
        [anon_sym_LBRACK] = ACTIONS(1794),
        [anon_sym_RBRACK] = ACTIONS(307),
        [anon_sym_RBRACE] = ACTIONS(307),
        [sym_comment] = ACTIONS(79),
        [sym__newline] = ACTIONS(307),
    },
    [747] = {
        [anon_sym_in] = ACTIONS(1872),
        [sym_comment] = ACTIONS(79),
    },
    [748] = {
        [sym__expression] = STATE(750),
        [sym_binary_operator] = STATE(44),
        [sym_unary_operator] = STATE(44),
        [sym_subscript] = STATE(44),
        [sym_call] = STATE(44),
        [sym_list] = STATE(44),
        [sym_list_comprehension] = STATE(44),
        [sym_dictionary] = STATE(44),
        [sym_dictionary_comprehension] = STATE(44),
        [sym_set] = STATE(44),
        [sym_set_comprehension] = STATE(44),
        [anon_sym_not] = ACTIONS(1874),
        [anon_sym_LBRACK] = ACTIONS(133),
        [anon_sym_LBRACE] = ACTIONS(135),
        [sym_number] = ACTIONS(137),
        [sym_identifier] = ACTIONS(139),
        [sym_comment] = ACTIONS(79),
    },
    [749] = {
        [sym__expression] = STATE(753),
        [sym_binary_operator] = STATE(44),
        [sym_unary_operator] = STATE(44),
        [sym_subscript] = STATE(44),
        [sym_call] = STATE(44),
        [sym_list] = STATE(44),
        [sym_list_comprehension] = STATE(44),
        [sym_dictionary] = STATE(44),
        [sym_dictionary_comprehension] = STATE(44),
        [sym_set] = STATE(44),
        [sym_set_comprehension] = STATE(44),
        [anon_sym_not] = ACTIONS(1874),
        [anon_sym_LBRACK] = ACTIONS(133),
        [anon_sym_LBRACE] = ACTIONS(135),
        [sym_number] = ACTIONS(137),
        [sym_identifier] = ACTIONS(139),
        [sym_comment] = ACTIONS(79),
    },
    [750] = {
        [anon_sym_LPAREN] = ACTIONS(251),
        [anon_sym_STAR] = ACTIONS(1876),
        [anon_sym_PLUS] = ACTIONS(1878),
        [anon_sym_DASH] = ACTIONS(1878),
        [anon_sym_SLASH] = ACTIONS(1878),
        [anon_sym_STAR_STAR] = ACTIONS(1878),
        [anon_sym_PIPE] = ACTIONS(1878),
        [anon_sym_AMP] = ACTIONS(1878),
        [anon_sym_CARET] = ACTIONS(1878),
        [anon_sym_LT_LT] = ACTIONS(1878),
        [anon_sym_GT_GT] = ACTIONS(1878),
        [anon_sym_and] = ACTIONS(1878),
        [anon_sym_or] = ACTIONS(1878),
        [anon_sym_LBRACK] = ACTIONS(267),
        [anon_sym_RBRACK] = ACTIONS(731),
        [anon_sym_RBRACE] = ACTIONS(715),
        [sym_comment] = ACTIONS(79),
    },
    [751] = {
        [sym__expression] = STATE(752),
        [sym_binary_operator] = STATE(44),
        [sym_unary_operator] = STATE(44),
        [sym_subscript] = STATE(44),
        [sym_call] = STATE(44),
        [sym_list] = STATE(44),
        [sym_list_comprehension] = STATE(44),
        [sym_dictionary] = STATE(44),
        [sym_dictionary_comprehension] = STATE(44),
        [sym_set] = STATE(44),
        [sym_set_comprehension] = STATE(44),
        [anon_sym_not] = ACTIONS(1874),
        [anon_sym_LBRACK] = ACTIONS(133),
        [anon_sym_LBRACE] = ACTIONS(135),
        [sym_number] = ACTIONS(137),
        [sym_identifier] = ACTIONS(139),
        [sym_comment] = ACTIONS(79),
    },
    [752] = {
        [anon_sym_LPAREN] = ACTIONS(1880),
        [anon_sym_STAR] = ACTIONS(1883),
        [anon_sym_PLUS] = ACTIONS(1886),
        [anon_sym_DASH] = ACTIONS(1886),
        [anon_sym_SLASH] = ACTIONS(1886),
        [anon_sym_STAR_STAR] = ACTIONS(1886),
        [anon_sym_PIPE] = ACTIONS(1886),
        [anon_sym_AMP] = ACTIONS(1886),
        [anon_sym_CARET] = ACTIONS(1886),
        [anon_sym_LT_LT] = ACTIONS(1886),
        [anon_sym_GT_GT] = ACTIONS(1886),
        [anon_sym_and] = ACTIONS(1886),
        [anon_sym_or] = ACTIONS(1886),
        [anon_sym_LBRACK] = ACTIONS(1889),
        [anon_sym_RBRACK] = ACTIONS(307),
        [anon_sym_RBRACE] = ACTIONS(307),
        [sym_comment] = ACTIONS(79),
    },
    [753] = {
        [anon_sym_LPAREN] = ACTIONS(1892),
        [anon_sym_STAR] = ACTIONS(1895),
        [anon_sym_PLUS] = ACTIONS(1898),
        [anon_sym_DASH] = ACTIONS(1898),
        [anon_sym_SLASH] = ACTIONS(1898),
        [anon_sym_STAR_STAR] = ACTIONS(1898),
        [anon_sym_PIPE] = ACTIONS(1898),
        [anon_sym_AMP] = ACTIONS(1898),
        [anon_sym_CARET] = ACTIONS(1898),
        [anon_sym_LT_LT] = ACTIONS(1898),
        [anon_sym_GT_GT] = ACTIONS(1898),
        [anon_sym_and] = ACTIONS(1898),
        [anon_sym_or] = ACTIONS(1898),
        [anon_sym_LBRACK] = ACTIONS(1901),
        [anon_sym_RBRACK] = ACTIONS(635),
        [anon_sym_RBRACE] = ACTIONS(635),
        [sym_comment] = ACTIONS(79),
    },
    [754] = {
        [sym__expression] = STATE(761),
        [sym_binary_operator] = STATE(18),
        [sym_unary_operator] = STATE(18),
        [sym_subscript] = STATE(18),
        [sym_call] = STATE(18),
        [sym_list] = STATE(18),
        [sym_list_comprehension] = STATE(18),
        [sym_dictionary] = STATE(18),
        [sym_dictionary_comprehension] = STATE(18),
        [sym_set] = STATE(18),
        [sym_set_comprehension] = STATE(18),
        [anon_sym_not] = ACTIONS(1262),
        [anon_sym_LBRACK] = ACTIONS(117),
        [anon_sym_LBRACE] = ACTIONS(119),
        [sym_number] = ACTIONS(121),
        [sym_identifier] = ACTIONS(123),
        [sym_comment] = ACTIONS(79),
    },
    [755] = {
        [sym_elif_clause] = STATE(759),
        [sym_else_clause] = STATE(760),
        [aux_sym_if_statement_repeat1] = STATE(693),
        [ts_builtin_sym_end] = ACTIONS(1904),
        [anon_sym_SEMI] = ACTIONS(1904),
        [anon_sym_import] = ACTIONS(1910),
        [anon_sym_print] = ACTIONS(1910),
        [anon_sym_return] = ACTIONS(1910),
        [anon_sym_del] = ACTIONS(1910),
        [sym_pass_statement] = ACTIONS(1910),
        [sym_break_statement] = ACTIONS(1910),
        [sym_continue_statement] = ACTIONS(1910),
        [anon_sym_if] = ACTIONS(1910),
        [anon_sym_elif] = ACTIONS(1566),
        [anon_sym_else] = ACTIONS(1569),
        [anon_sym_for] = ACTIONS(1910),
        [anon_sym_while] = ACTIONS(1910),
        [anon_sym_try] = ACTIONS(1910),
        [anon_sym_except] = ACTIONS(1916),
        [anon_sym_finally] = ACTIONS(1916),
        [anon_sym_with] = ACTIONS(1910),
        [anon_sym_def] = ACTIONS(1910),
        [anon_sym_class] = ACTIONS(1910),
        [anon_sym_AT] = ACTIONS(1904),
        [anon_sym_not] = ACTIONS(1910),
        [anon_sym_LBRACK] = ACTIONS(1904),
        [anon_sym_LBRACE] = ACTIONS(1904),
        [sym_number] = ACTIONS(1910),
        [sym_identifier] = ACTIONS(1919),
        [sym_comment] = ACTIONS(79),
        [sym__newline] = ACTIONS(1904),
        [sym__dedent] = ACTIONS(1904),
    },
    [756] = {
        [anon_sym_COMMA] = ACTIONS(459),
        [anon_sym_for] = ACTIONS(459),
        [anon_sym_LPAREN] = ACTIONS(187),
        [anon_sym_STAR] = ACTIONS(1925),
        [anon_sym_PLUS] = ACTIONS(1927),
        [anon_sym_DASH] = ACTIONS(1927),
        [anon_sym_SLASH] = ACTIONS(1927),
        [anon_sym_STAR_STAR] = ACTIONS(1927),
        [anon_sym_PIPE] = ACTIONS(1927),
        [anon_sym_AMP] = ACTIONS(1927),
        [anon_sym_CARET] = ACTIONS(1927),
        [anon_sym_LT_LT] = ACTIONS(1927),
        [anon_sym_GT_GT] = ACTIONS(1927),
        [anon_sym_and] = ACTIONS(1927),
        [anon_sym_or] = ACTIONS(1927),
        [anon_sym_LBRACK] = ACTIONS(203),
        [anon_sym_RBRACE] = ACTIONS(459),
        [sym_comment] = ACTIONS(79),
        [sym__newline] = ACTIONS(205),
    },
    [757] = {
        [sym__expression] = STATE(758),
        [sym_binary_operator] = STATE(18),
        [sym_unary_operator] = STATE(18),
        [sym_subscript] = STATE(18),
        [sym_call] = STATE(18),
        [sym_list] = STATE(18),
        [sym_list_comprehension] = STATE(18),
        [sym_dictionary] = STATE(18),
        [sym_dictionary_comprehension] = STATE(18),
        [sym_set] = STATE(18),
        [sym_set_comprehension] = STATE(18),
        [anon_sym_not] = ACTIONS(1262),
        [anon_sym_LBRACK] = ACTIONS(117),
        [anon_sym_LBRACE] = ACTIONS(119),
        [sym_number] = ACTIONS(121),
        [sym_identifier] = ACTIONS(123),
        [sym_comment] = ACTIONS(79),
    },
    [758] = {
        [anon_sym_COMMA] = ACTIONS(307),
        [anon_sym_for] = ACTIONS(307),
        [anon_sym_LPAREN] = ACTIONS(1785),
        [anon_sym_STAR] = ACTIONS(1929),
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
        [anon_sym_LBRACK] = ACTIONS(1794),
        [anon_sym_RBRACE] = ACTIONS(307),
        [sym_comment] = ACTIONS(79),
        [sym__newline] = ACTIONS(307),
    },
    [759] = {
        [ts_builtin_sym_end] = ACTIONS(1103),
        [anon_sym_SEMI] = ACTIONS(1103),
        [anon_sym_import] = ACTIONS(1101),
        [anon_sym_print] = ACTIONS(1101),
        [anon_sym_return] = ACTIONS(1101),
        [anon_sym_del] = ACTIONS(1101),
        [sym_pass_statement] = ACTIONS(1101),
        [sym_break_statement] = ACTIONS(1101),
        [sym_continue_statement] = ACTIONS(1101),
        [anon_sym_if] = ACTIONS(1101),
        [anon_sym_elif] = ACTIONS(1101),
        [anon_sym_else] = ACTIONS(1101),
        [anon_sym_for] = ACTIONS(1101),
        [anon_sym_while] = ACTIONS(1101),
        [anon_sym_try] = ACTIONS(1101),
        [anon_sym_with] = ACTIONS(1101),
        [anon_sym_def] = ACTIONS(1101),
        [anon_sym_class] = ACTIONS(1101),
        [anon_sym_AT] = ACTIONS(1103),
        [anon_sym_not] = ACTIONS(1101),
        [anon_sym_LBRACK] = ACTIONS(1103),
        [anon_sym_LBRACE] = ACTIONS(1103),
        [sym_number] = ACTIONS(1101),
        [sym_identifier] = ACTIONS(1105),
        [sym_comment] = ACTIONS(79),
        [sym__newline] = ACTIONS(1103),
        [sym__dedent] = ACTIONS(1103),
    },
    [760] = {
        [ts_builtin_sym_end] = ACTIONS(1935),
        [anon_sym_SEMI] = ACTIONS(1935),
        [anon_sym_import] = ACTIONS(1938),
        [anon_sym_print] = ACTIONS(1938),
        [anon_sym_return] = ACTIONS(1938),
        [anon_sym_del] = ACTIONS(1938),
        [sym_pass_statement] = ACTIONS(1938),
        [sym_break_statement] = ACTIONS(1938),
        [sym_continue_statement] = ACTIONS(1938),
        [anon_sym_if] = ACTIONS(1938),
        [anon_sym_for] = ACTIONS(1938),
        [anon_sym_while] = ACTIONS(1938),
        [anon_sym_try] = ACTIONS(1938),
        [anon_sym_with] = ACTIONS(1938),
        [anon_sym_def] = ACTIONS(1938),
        [anon_sym_class] = ACTIONS(1938),
        [anon_sym_AT] = ACTIONS(1935),
        [anon_sym_not] = ACTIONS(1938),
        [anon_sym_LBRACK] = ACTIONS(1935),
        [anon_sym_LBRACE] = ACTIONS(1935),
        [sym_number] = ACTIONS(1938),
        [sym_identifier] = ACTIONS(1941),
        [sym_comment] = ACTIONS(79),
        [sym__newline] = ACTIONS(1935),
        [sym__dedent] = ACTIONS(1935),
    },
    [761] = {
        [anon_sym_COMMA] = ACTIONS(635),
        [anon_sym_for] = ACTIONS(635),
        [anon_sym_LPAREN] = ACTIONS(1797),
        [anon_sym_STAR] = ACTIONS(1944),
        [anon_sym_PLUS] = ACTIONS(1947),
        [anon_sym_DASH] = ACTIONS(1947),
        [anon_sym_SLASH] = ACTIONS(1947),
        [anon_sym_STAR_STAR] = ACTIONS(1947),
        [anon_sym_PIPE] = ACTIONS(1947),
        [anon_sym_AMP] = ACTIONS(1947),
        [anon_sym_CARET] = ACTIONS(1947),
        [anon_sym_LT_LT] = ACTIONS(1947),
        [anon_sym_GT_GT] = ACTIONS(1947),
        [anon_sym_and] = ACTIONS(1947),
        [anon_sym_or] = ACTIONS(1947),
        [anon_sym_LBRACK] = ACTIONS(1806),
        [anon_sym_RBRACE] = ACTIONS(635),
        [sym_comment] = ACTIONS(79),
        [sym__newline] = ACTIONS(635),
    },
    [762] = {
        [anon_sym_COMMA] = ACTIONS(941),
        [anon_sym_COLON] = ACTIONS(1950),
        [anon_sym_LPAREN] = ACTIONS(251),
        [anon_sym_STAR] = ACTIONS(943),
        [anon_sym_PLUS] = ACTIONS(945),
        [anon_sym_DASH] = ACTIONS(945),
        [anon_sym_SLASH] = ACTIONS(947),
        [anon_sym_STAR_STAR] = ACTIONS(949),
        [anon_sym_PIPE] = ACTIONS(951),
        [anon_sym_AMP] = ACTIONS(953),
        [anon_sym_CARET] = ACTIONS(955),
        [anon_sym_LT_LT] = ACTIONS(945),
        [anon_sym_GT_GT] = ACTIONS(945),
        [anon_sym_and] = ACTIONS(953),
        [anon_sym_or] = ACTIONS(951),
        [anon_sym_LBRACK] = ACTIONS(267),
        [sym_comment] = ACTIONS(79),
    },
    [763] = {
        [sym__simple_statement] = STATE(704),
        [sym_import_statement] = STATE(6),
        [sym_print_statement] = STATE(6),
        [sym_expression_statement] = STATE(6),
        [sym_return_statement] = STATE(6),
        [sym_delete_statement] = STATE(6),
        [sym__suite] = STATE(764),
        [sym__expression] = STATE(25),
        [sym_binary_operator] = STATE(18),
        [sym_unary_operator] = STATE(18),
        [sym_subscript] = STATE(18),
        [sym_call] = STATE(18),
        [sym_list] = STATE(18),
        [sym_list_comprehension] = STATE(18),
        [sym_dictionary] = STATE(18),
        [sym_dictionary_comprehension] = STATE(18),
        [sym_set] = STATE(18),
        [sym_set_comprehension] = STATE(18),
        [anon_sym_import] = ACTIONS(89),
        [anon_sym_print] = ACTIONS(91),
        [anon_sym_return] = ACTIONS(93),
        [anon_sym_del] = ACTIONS(95),
        [sym_pass_statement] = ACTIONS(97),
        [sym_break_statement] = ACTIONS(97),
        [sym_continue_statement] = ACTIONS(97),
        [anon_sym_not] = ACTIONS(115),
        [anon_sym_LBRACK] = ACTIONS(117),
        [anon_sym_LBRACE] = ACTIONS(119),
        [sym_number] = ACTIONS(121),
        [sym_identifier] = ACTIONS(123),
        [sym_comment] = ACTIONS(79),
        [sym__indent] = ACTIONS(1264),
    },
    [764] = {
        [ts_builtin_sym_end] = ACTIONS(1051),
        [anon_sym_SEMI] = ACTIONS(1051),
        [anon_sym_import] = ACTIONS(1049),
        [anon_sym_print] = ACTIONS(1049),
        [anon_sym_return] = ACTIONS(1049),
        [anon_sym_del] = ACTIONS(1049),
        [sym_pass_statement] = ACTIONS(1049),
        [sym_break_statement] = ACTIONS(1049),
        [sym_continue_statement] = ACTIONS(1049),
        [anon_sym_if] = ACTIONS(1049),
        [anon_sym_else] = ACTIONS(1049),
        [anon_sym_for] = ACTIONS(1049),
        [anon_sym_while] = ACTIONS(1049),
        [anon_sym_try] = ACTIONS(1049),
        [anon_sym_except] = ACTIONS(1049),
        [anon_sym_finally] = ACTIONS(1049),
        [anon_sym_with] = ACTIONS(1049),
        [anon_sym_def] = ACTIONS(1049),
        [anon_sym_class] = ACTIONS(1049),
        [anon_sym_AT] = ACTIONS(1051),
        [anon_sym_not] = ACTIONS(1049),
        [anon_sym_LBRACK] = ACTIONS(1051),
        [anon_sym_LBRACE] = ACTIONS(1051),
        [sym_number] = ACTIONS(1049),
        [sym_identifier] = ACTIONS(1053),
        [sym_comment] = ACTIONS(79),
        [sym__newline] = ACTIONS(1051),
        [sym__dedent] = ACTIONS(1051),
    },
    [765] = {
        [anon_sym_COMMA] = ACTIONS(1953),
        [anon_sym_as] = ACTIONS(1953),
        [anon_sym_COLON] = ACTIONS(1953),
        [anon_sym_for] = ACTIONS(1953),
        [anon_sym_in] = ACTIONS(1953),
        [anon_sym_LPAREN] = ACTIONS(1953),
        [anon_sym_RPAREN] = ACTIONS(1953),
        [anon_sym_STAR] = ACTIONS(1956),
        [anon_sym_PLUS] = ACTIONS(1953),
        [anon_sym_DASH] = ACTIONS(1953),
        [anon_sym_SLASH] = ACTIONS(1953),
        [anon_sym_STAR_STAR] = ACTIONS(1953),
        [anon_sym_PIPE] = ACTIONS(1953),
        [anon_sym_AMP] = ACTIONS(1953),
        [anon_sym_CARET] = ACTIONS(1953),
        [anon_sym_LT_LT] = ACTIONS(1953),
        [anon_sym_GT_GT] = ACTIONS(1953),
        [anon_sym_and] = ACTIONS(1953),
        [anon_sym_or] = ACTIONS(1953),
        [anon_sym_LBRACK] = ACTIONS(1953),
        [anon_sym_RBRACK] = ACTIONS(1953),
        [anon_sym_RBRACE] = ACTIONS(1953),
        [sym_comment] = ACTIONS(79),
        [sym__newline] = ACTIONS(1953),
    },
    [766] = {
        [anon_sym_COMMA] = ACTIONS(1959),
        [anon_sym_COLON] = ACTIONS(1962),
        [anon_sym_in] = ACTIONS(501),
        [anon_sym_LPAREN] = ACTIONS(187),
        [anon_sym_RPAREN] = ACTIONS(501),
        [anon_sym_STAR] = ACTIONS(1781),
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
        [anon_sym_LBRACK] = ACTIONS(203),
        [anon_sym_RBRACK] = ACTIONS(1959),
        [anon_sym_RBRACE] = ACTIONS(501),
        [sym_comment] = ACTIONS(79),
        [sym__newline] = ACTIONS(501),
    },
    [767] = {
        [anon_sym_COLON] = ACTIONS(1965),
        [sym_comment] = ACTIONS(79),
    },
    [768] = {
        [sym__simple_statement] = STATE(704),
        [sym_import_statement] = STATE(6),
        [sym_print_statement] = STATE(6),
        [sym_expression_statement] = STATE(6),
        [sym_return_statement] = STATE(6),
        [sym_delete_statement] = STATE(6),
        [sym__suite] = STATE(769),
        [sym__expression] = STATE(25),
        [sym_binary_operator] = STATE(18),
        [sym_unary_operator] = STATE(18),
        [sym_subscript] = STATE(18),
        [sym_call] = STATE(18),
        [sym_list] = STATE(18),
        [sym_list_comprehension] = STATE(18),
        [sym_dictionary] = STATE(18),
        [sym_dictionary_comprehension] = STATE(18),
        [sym_set] = STATE(18),
        [sym_set_comprehension] = STATE(18),
        [anon_sym_import] = ACTIONS(89),
        [anon_sym_print] = ACTIONS(91),
        [anon_sym_return] = ACTIONS(93),
        [anon_sym_del] = ACTIONS(95),
        [sym_pass_statement] = ACTIONS(97),
        [sym_break_statement] = ACTIONS(97),
        [sym_continue_statement] = ACTIONS(97),
        [anon_sym_not] = ACTIONS(115),
        [anon_sym_LBRACK] = ACTIONS(117),
        [anon_sym_LBRACE] = ACTIONS(119),
        [sym_number] = ACTIONS(121),
        [sym_identifier] = ACTIONS(123),
        [sym_comment] = ACTIONS(79),
        [sym__indent] = ACTIONS(1264),
    },
    [769] = {
        [ts_builtin_sym_end] = ACTIONS(797),
        [anon_sym_SEMI] = ACTIONS(797),
        [anon_sym_import] = ACTIONS(799),
        [anon_sym_print] = ACTIONS(799),
        [anon_sym_return] = ACTIONS(799),
        [anon_sym_del] = ACTIONS(799),
        [sym_pass_statement] = ACTIONS(799),
        [sym_break_statement] = ACTIONS(799),
        [sym_continue_statement] = ACTIONS(799),
        [anon_sym_if] = ACTIONS(799),
        [anon_sym_for] = ACTIONS(799),
        [anon_sym_while] = ACTIONS(799),
        [anon_sym_try] = ACTIONS(799),
        [anon_sym_with] = ACTIONS(799),
        [anon_sym_def] = ACTIONS(799),
        [anon_sym_class] = ACTIONS(799),
        [anon_sym_AT] = ACTIONS(797),
        [anon_sym_not] = ACTIONS(799),
        [anon_sym_LBRACK] = ACTIONS(797),
        [anon_sym_LBRACE] = ACTIONS(797),
        [sym_number] = ACTIONS(799),
        [sym_identifier] = ACTIONS(801),
        [sym_comment] = ACTIONS(79),
        [sym__newline] = ACTIONS(797),
        [sym__dedent] = ACTIONS(797),
    },
    [770] = {
        [ts_builtin_sym_end] = ACTIONS(1967),
        [anon_sym_SEMI] = ACTIONS(1967),
        [anon_sym_import] = ACTIONS(1971),
        [anon_sym_print] = ACTIONS(1971),
        [anon_sym_return] = ACTIONS(1971),
        [anon_sym_del] = ACTIONS(1971),
        [sym_pass_statement] = ACTIONS(1971),
        [sym_break_statement] = ACTIONS(1971),
        [sym_continue_statement] = ACTIONS(1971),
        [anon_sym_if] = ACTIONS(1971),
        [anon_sym_for] = ACTIONS(1971),
        [anon_sym_while] = ACTIONS(1971),
        [anon_sym_try] = ACTIONS(1971),
        [anon_sym_with] = ACTIONS(1971),
        [anon_sym_def] = ACTIONS(1971),
        [anon_sym_class] = ACTIONS(1971),
        [anon_sym_AT] = ACTIONS(1967),
        [anon_sym_not] = ACTIONS(1971),
        [anon_sym_LBRACK] = ACTIONS(1967),
        [anon_sym_LBRACE] = ACTIONS(1967),
        [sym_number] = ACTIONS(1971),
        [sym_identifier] = ACTIONS(1975),
        [sym_comment] = ACTIONS(79),
        [sym__newline] = ACTIONS(1967),
        [sym__dedent] = ACTIONS(1967),
    },
    [771] = {
        [ts_builtin_sym_end] = ACTIONS(989),
        [anon_sym_SEMI] = ACTIONS(989),
        [anon_sym_import] = ACTIONS(987),
        [anon_sym_print] = ACTIONS(987),
        [anon_sym_return] = ACTIONS(987),
        [anon_sym_del] = ACTIONS(987),
        [sym_pass_statement] = ACTIONS(987),
        [sym_break_statement] = ACTIONS(987),
        [sym_continue_statement] = ACTIONS(987),
        [anon_sym_if] = ACTIONS(987),
        [anon_sym_else] = ACTIONS(987),
        [anon_sym_for] = ACTIONS(987),
        [anon_sym_while] = ACTIONS(987),
        [anon_sym_try] = ACTIONS(987),
        [anon_sym_except] = ACTIONS(987),
        [anon_sym_finally] = ACTIONS(987),
        [anon_sym_with] = ACTIONS(987),
        [anon_sym_def] = ACTIONS(987),
        [anon_sym_class] = ACTIONS(987),
        [anon_sym_AT] = ACTIONS(989),
        [anon_sym_not] = ACTIONS(987),
        [anon_sym_LBRACK] = ACTIONS(989),
        [anon_sym_LBRACE] = ACTIONS(989),
        [sym_number] = ACTIONS(987),
        [sym_identifier] = ACTIONS(991),
        [sym_comment] = ACTIONS(79),
        [sym__newline] = ACTIONS(989),
        [sym__dedent] = ACTIONS(989),
    },
    [772] = {
        [ts_builtin_sym_end] = ACTIONS(995),
        [anon_sym_SEMI] = ACTIONS(995),
        [anon_sym_import] = ACTIONS(993),
        [anon_sym_print] = ACTIONS(993),
        [anon_sym_return] = ACTIONS(993),
        [anon_sym_del] = ACTIONS(993),
        [sym_pass_statement] = ACTIONS(993),
        [sym_break_statement] = ACTIONS(993),
        [sym_continue_statement] = ACTIONS(993),
        [anon_sym_if] = ACTIONS(993),
        [anon_sym_for] = ACTIONS(993),
        [anon_sym_while] = ACTIONS(993),
        [anon_sym_try] = ACTIONS(993),
        [anon_sym_with] = ACTIONS(993),
        [anon_sym_def] = ACTIONS(993),
        [anon_sym_class] = ACTIONS(993),
        [anon_sym_AT] = ACTIONS(995),
        [anon_sym_not] = ACTIONS(993),
        [anon_sym_LBRACK] = ACTIONS(995),
        [anon_sym_LBRACE] = ACTIONS(995),
        [sym_number] = ACTIONS(993),
        [sym_identifier] = ACTIONS(997),
        [sym_comment] = ACTIONS(79),
        [sym__newline] = ACTIONS(995),
        [sym__dedent] = ACTIONS(995),
    },
    [773] = {
        [anon_sym_COLON] = ACTIONS(1979),
        [sym_comment] = ACTIONS(79),
    },
    [774] = {
        [sym_dictionary_splat_parameter] = STATE(776),
        [anon_sym_STAR] = ACTIONS(889),
        [sym_comment] = ACTIONS(79),
    },
    [775] = {
        [anon_sym_COLON] = ACTIONS(1984),
        [sym_comment] = ACTIONS(79),
    },
    [776] = {
        [anon_sym_RPAREN] = ACTIONS(1987),
        [sym_comment] = ACTIONS(79),
    },
    [777] = {
        [anon_sym_COLON] = ACTIONS(1989),
        [sym_comment] = ACTIONS(79),
    },
    [778] = {
        [anon_sym_RPAREN] = ACTIONS(1992),
        [anon_sym_STAR] = ACTIONS(1994),
        [sym_identifier] = ACTIONS(1997),
        [sym_comment] = ACTIONS(79),
    },
    [779] = {
        [anon_sym_COLON] = ACTIONS(2000),
        [sym_comment] = ACTIONS(79),
    },
    [780] = {
        [sym__simple_statement] = STATE(704),
        [sym_import_statement] = STATE(6),
        [sym_print_statement] = STATE(6),
        [sym_expression_statement] = STATE(6),
        [sym_return_statement] = STATE(6),
        [sym_delete_statement] = STATE(6),
        [sym__suite] = STATE(781),
        [sym__expression] = STATE(25),
        [sym_binary_operator] = STATE(18),
        [sym_unary_operator] = STATE(18),
        [sym_subscript] = STATE(18),
        [sym_call] = STATE(18),
        [sym_list] = STATE(18),
        [sym_list_comprehension] = STATE(18),
        [sym_dictionary] = STATE(18),
        [sym_dictionary_comprehension] = STATE(18),
        [sym_set] = STATE(18),
        [sym_set_comprehension] = STATE(18),
        [anon_sym_import] = ACTIONS(89),
        [anon_sym_print] = ACTIONS(91),
        [anon_sym_return] = ACTIONS(93),
        [anon_sym_del] = ACTIONS(95),
        [sym_pass_statement] = ACTIONS(97),
        [sym_break_statement] = ACTIONS(97),
        [sym_continue_statement] = ACTIONS(97),
        [anon_sym_not] = ACTIONS(115),
        [anon_sym_LBRACK] = ACTIONS(117),
        [anon_sym_LBRACE] = ACTIONS(119),
        [sym_number] = ACTIONS(121),
        [sym_identifier] = ACTIONS(123),
        [sym_comment] = ACTIONS(79),
        [sym__indent] = ACTIONS(1264),
    },
    [781] = {
        [ts_builtin_sym_end] = ACTIONS(861),
        [anon_sym_SEMI] = ACTIONS(861),
        [anon_sym_import] = ACTIONS(859),
        [anon_sym_print] = ACTIONS(859),
        [anon_sym_return] = ACTIONS(859),
        [anon_sym_del] = ACTIONS(859),
        [sym_pass_statement] = ACTIONS(859),
        [sym_break_statement] = ACTIONS(859),
        [sym_continue_statement] = ACTIONS(859),
        [anon_sym_if] = ACTIONS(859),
        [anon_sym_for] = ACTIONS(859),
        [anon_sym_while] = ACTIONS(859),
        [anon_sym_try] = ACTIONS(859),
        [anon_sym_with] = ACTIONS(859),
        [anon_sym_def] = ACTIONS(859),
        [anon_sym_class] = ACTIONS(859),
        [anon_sym_AT] = ACTIONS(861),
        [anon_sym_not] = ACTIONS(859),
        [anon_sym_LBRACK] = ACTIONS(861),
        [anon_sym_LBRACE] = ACTIONS(861),
        [sym_number] = ACTIONS(859),
        [sym_identifier] = ACTIONS(863),
        [sym_comment] = ACTIONS(79),
        [sym__newline] = ACTIONS(861),
        [sym__dedent] = ACTIONS(861),
    },
    [782] = {
        [sym__simple_statement] = STATE(704),
        [sym_import_statement] = STATE(6),
        [sym_print_statement] = STATE(6),
        [sym_expression_statement] = STATE(6),
        [sym_return_statement] = STATE(6),
        [sym_delete_statement] = STATE(6),
        [sym__suite] = STATE(783),
        [sym__expression] = STATE(25),
        [sym_binary_operator] = STATE(18),
        [sym_unary_operator] = STATE(18),
        [sym_subscript] = STATE(18),
        [sym_call] = STATE(18),
        [sym_list] = STATE(18),
        [sym_list_comprehension] = STATE(18),
        [sym_dictionary] = STATE(18),
        [sym_dictionary_comprehension] = STATE(18),
        [sym_set] = STATE(18),
        [sym_set_comprehension] = STATE(18),
        [anon_sym_import] = ACTIONS(89),
        [anon_sym_print] = ACTIONS(91),
        [anon_sym_return] = ACTIONS(93),
        [anon_sym_del] = ACTIONS(95),
        [sym_pass_statement] = ACTIONS(97),
        [sym_break_statement] = ACTIONS(97),
        [sym_continue_statement] = ACTIONS(97),
        [anon_sym_not] = ACTIONS(115),
        [anon_sym_LBRACK] = ACTIONS(117),
        [anon_sym_LBRACE] = ACTIONS(119),
        [sym_number] = ACTIONS(121),
        [sym_identifier] = ACTIONS(123),
        [sym_comment] = ACTIONS(79),
        [sym__indent] = ACTIONS(1264),
    },
    [783] = {
        [ts_builtin_sym_end] = ACTIONS(971),
        [anon_sym_SEMI] = ACTIONS(971),
        [anon_sym_import] = ACTIONS(969),
        [anon_sym_print] = ACTIONS(969),
        [anon_sym_return] = ACTIONS(969),
        [anon_sym_del] = ACTIONS(969),
        [sym_pass_statement] = ACTIONS(969),
        [sym_break_statement] = ACTIONS(969),
        [sym_continue_statement] = ACTIONS(969),
        [anon_sym_if] = ACTIONS(969),
        [anon_sym_for] = ACTIONS(969),
        [anon_sym_while] = ACTIONS(969),
        [anon_sym_try] = ACTIONS(969),
        [anon_sym_with] = ACTIONS(969),
        [anon_sym_def] = ACTIONS(969),
        [anon_sym_class] = ACTIONS(969),
        [anon_sym_AT] = ACTIONS(971),
        [anon_sym_not] = ACTIONS(969),
        [anon_sym_LBRACK] = ACTIONS(971),
        [anon_sym_LBRACE] = ACTIONS(971),
        [sym_number] = ACTIONS(969),
        [sym_identifier] = ACTIONS(973),
        [sym_comment] = ACTIONS(79),
        [sym__newline] = ACTIONS(971),
        [sym__dedent] = ACTIONS(971),
    },
    [784] = {
        [ts_builtin_sym_end] = ACTIONS(1409),
        [anon_sym_SEMI] = ACTIONS(1409),
        [anon_sym_import] = ACTIONS(1412),
        [anon_sym_print] = ACTIONS(1412),
        [anon_sym_return] = ACTIONS(1412),
        [anon_sym_del] = ACTIONS(1412),
        [sym_pass_statement] = ACTIONS(1412),
        [sym_break_statement] = ACTIONS(1412),
        [sym_continue_statement] = ACTIONS(1412),
        [anon_sym_if] = ACTIONS(1412),
        [anon_sym_elif] = ACTIONS(805),
        [anon_sym_else] = ACTIONS(805),
        [anon_sym_for] = ACTIONS(1412),
        [anon_sym_while] = ACTIONS(1412),
        [anon_sym_try] = ACTIONS(1412),
        [anon_sym_except] = ACTIONS(805),
        [anon_sym_finally] = ACTIONS(805),
        [anon_sym_with] = ACTIONS(1412),
        [anon_sym_def] = ACTIONS(1412),
        [anon_sym_class] = ACTIONS(1412),
        [anon_sym_AT] = ACTIONS(1409),
        [anon_sym_not] = ACTIONS(1412),
        [anon_sym_LBRACK] = ACTIONS(1409),
        [anon_sym_LBRACE] = ACTIONS(1409),
        [sym_number] = ACTIONS(1412),
        [sym_identifier] = ACTIONS(1425),
        [sym_comment] = ACTIONS(79),
        [sym__newline] = ACTIONS(1409),
        [sym__dedent] = ACTIONS(1409),
    },
    [785] = {
        [sym__simple_statement] = STATE(704),
        [sym_import_statement] = STATE(6),
        [sym_print_statement] = STATE(6),
        [sym_expression_statement] = STATE(6),
        [sym_return_statement] = STATE(6),
        [sym_delete_statement] = STATE(6),
        [sym__suite] = STATE(789),
        [sym__expression] = STATE(25),
        [sym_binary_operator] = STATE(18),
        [sym_unary_operator] = STATE(18),
        [sym_subscript] = STATE(18),
        [sym_call] = STATE(18),
        [sym_list] = STATE(18),
        [sym_list_comprehension] = STATE(18),
        [sym_dictionary] = STATE(18),
        [sym_dictionary_comprehension] = STATE(18),
        [sym_set] = STATE(18),
        [sym_set_comprehension] = STATE(18),
        [anon_sym_import] = ACTIONS(89),
        [anon_sym_print] = ACTIONS(91),
        [anon_sym_return] = ACTIONS(93),
        [anon_sym_del] = ACTIONS(95),
        [sym_pass_statement] = ACTIONS(97),
        [sym_break_statement] = ACTIONS(97),
        [sym_continue_statement] = ACTIONS(97),
        [anon_sym_not] = ACTIONS(115),
        [anon_sym_LBRACK] = ACTIONS(117),
        [anon_sym_LBRACE] = ACTIONS(119),
        [sym_number] = ACTIONS(121),
        [sym_identifier] = ACTIONS(123),
        [sym_comment] = ACTIONS(79),
        [sym__indent] = ACTIONS(1264),
    },
    [786] = {
        [sym_default_parameter] = STATE(430),
        [sym_list_splat_parameter] = STATE(431),
        [sym_dictionary_splat_parameter] = STATE(432),
        [sym_expression_list] = STATE(788),
        [sym__expression] = STATE(384),
        [sym_binary_operator] = STATE(44),
        [sym_unary_operator] = STATE(44),
        [sym_subscript] = STATE(44),
        [sym_call] = STATE(44),
        [sym_list] = STATE(44),
        [sym_list_comprehension] = STATE(44),
        [sym_dictionary] = STATE(44),
        [sym_dictionary_comprehension] = STATE(44),
        [sym_set] = STATE(44),
        [sym_set_comprehension] = STATE(44),
        [aux_sym_parameters_repeat1] = STATE(433),
        [anon_sym_RPAREN] = ACTIONS(851),
        [anon_sym_STAR] = ACTIONS(853),
        [anon_sym_not] = ACTIONS(235),
        [anon_sym_LBRACK] = ACTIONS(133),
        [anon_sym_LBRACE] = ACTIONS(135),
        [sym_number] = ACTIONS(137),
        [sym_identifier] = ACTIONS(2003),
        [sym_comment] = ACTIONS(79),
    },
    [787] = {
        [anon_sym_COMMA] = ACTIONS(2005),
        [anon_sym_LPAREN] = ACTIONS(159),
        [anon_sym_RPAREN] = ACTIONS(2008),
        [anon_sym_EQ] = ACTIONS(875),
        [anon_sym_STAR] = ACTIONS(161),
        [anon_sym_PLUS] = ACTIONS(159),
        [anon_sym_DASH] = ACTIONS(159),
        [anon_sym_SLASH] = ACTIONS(159),
        [anon_sym_STAR_STAR] = ACTIONS(159),
        [anon_sym_PIPE] = ACTIONS(159),
        [anon_sym_AMP] = ACTIONS(159),
        [anon_sym_CARET] = ACTIONS(159),
        [anon_sym_LT_LT] = ACTIONS(159),
        [anon_sym_GT_GT] = ACTIONS(159),
        [anon_sym_and] = ACTIONS(159),
        [anon_sym_or] = ACTIONS(159),
        [anon_sym_LBRACK] = ACTIONS(159),
        [sym_comment] = ACTIONS(79),
    },
    [788] = {
        [anon_sym_RPAREN] = ACTIONS(1601),
        [sym_comment] = ACTIONS(79),
    },
    [789] = {
        [ts_builtin_sym_end] = ACTIONS(845),
        [anon_sym_SEMI] = ACTIONS(845),
        [anon_sym_import] = ACTIONS(843),
        [anon_sym_print] = ACTIONS(843),
        [anon_sym_return] = ACTIONS(843),
        [anon_sym_del] = ACTIONS(843),
        [sym_pass_statement] = ACTIONS(843),
        [sym_break_statement] = ACTIONS(843),
        [sym_continue_statement] = ACTIONS(843),
        [anon_sym_if] = ACTIONS(843),
        [anon_sym_for] = ACTIONS(843),
        [anon_sym_while] = ACTIONS(843),
        [anon_sym_try] = ACTIONS(843),
        [anon_sym_with] = ACTIONS(843),
        [anon_sym_def] = ACTIONS(843),
        [anon_sym_class] = ACTIONS(843),
        [anon_sym_AT] = ACTIONS(845),
        [anon_sym_not] = ACTIONS(843),
        [anon_sym_LBRACK] = ACTIONS(845),
        [anon_sym_LBRACE] = ACTIONS(845),
        [sym_number] = ACTIONS(843),
        [sym_identifier] = ACTIONS(847),
        [sym_comment] = ACTIONS(79),
        [sym__newline] = ACTIONS(845),
        [sym__dedent] = ACTIONS(845),
    },
    [790] = {
        [aux_sym_print_statement_repeat1] = STATE(352),
        [aux_sym_subscript_repeat1] = STATE(56),
        [anon_sym_COMMA] = ACTIONS(2011),
        [anon_sym_for] = ACTIONS(719),
        [anon_sym_LPAREN] = ACTIONS(251),
        [anon_sym_STAR] = ACTIONS(577),
        [anon_sym_PLUS] = ACTIONS(579),
        [anon_sym_DASH] = ACTIONS(579),
        [anon_sym_SLASH] = ACTIONS(581),
        [anon_sym_STAR_STAR] = ACTIONS(583),
        [anon_sym_PIPE] = ACTIONS(585),
        [anon_sym_AMP] = ACTIONS(587),
        [anon_sym_CARET] = ACTIONS(589),
        [anon_sym_LT_LT] = ACTIONS(579),
        [anon_sym_GT_GT] = ACTIONS(579),
        [anon_sym_and] = ACTIONS(587),
        [anon_sym_or] = ACTIONS(585),
        [anon_sym_LBRACK] = ACTIONS(267),
        [anon_sym_RBRACK] = ACTIONS(2013),
        [sym_comment] = ACTIONS(79),
    },
    [791] = {
        [sym__expression] = STATE(793),
        [sym_binary_operator] = STATE(44),
        [sym_unary_operator] = STATE(44),
        [sym_subscript] = STATE(44),
        [sym_call] = STATE(44),
        [sym_list] = STATE(44),
        [sym_list_comprehension] = STATE(44),
        [sym_dictionary] = STATE(44),
        [sym_dictionary_comprehension] = STATE(44),
        [sym_set] = STATE(44),
        [sym_set_comprehension] = STATE(44),
        [anon_sym_not] = ACTIONS(239),
        [anon_sym_LBRACK] = ACTIONS(133),
        [anon_sym_DOT_DOT_DOT] = ACTIONS(269),
        [anon_sym_RBRACK] = ACTIONS(1840),
        [anon_sym_LBRACE] = ACTIONS(135),
        [sym_number] = ACTIONS(137),
        [sym_identifier] = ACTIONS(139),
        [sym_comment] = ACTIONS(79),
    },
    [792] = {
        [anon_sym_COMMA] = ACTIONS(2015),
        [anon_sym_as] = ACTIONS(2015),
        [anon_sym_COLON] = ACTIONS(2015),
        [anon_sym_for] = ACTIONS(2015),
        [anon_sym_in] = ACTIONS(2015),
        [anon_sym_LPAREN] = ACTIONS(2015),
        [anon_sym_RPAREN] = ACTIONS(2015),
        [anon_sym_STAR] = ACTIONS(2018),
        [anon_sym_PLUS] = ACTIONS(2015),
        [anon_sym_DASH] = ACTIONS(2015),
        [anon_sym_SLASH] = ACTIONS(2015),
        [anon_sym_STAR_STAR] = ACTIONS(2015),
        [anon_sym_PIPE] = ACTIONS(2015),
        [anon_sym_AMP] = ACTIONS(2015),
        [anon_sym_CARET] = ACTIONS(2015),
        [anon_sym_LT_LT] = ACTIONS(2015),
        [anon_sym_GT_GT] = ACTIONS(2015),
        [anon_sym_and] = ACTIONS(2015),
        [anon_sym_or] = ACTIONS(2015),
        [anon_sym_LBRACK] = ACTIONS(2015),
        [anon_sym_RBRACK] = ACTIONS(2015),
        [anon_sym_RBRACE] = ACTIONS(2015),
        [sym_comment] = ACTIONS(79),
        [sym__newline] = ACTIONS(2015),
    },
    [793] = {
        [anon_sym_COMMA] = ACTIONS(1959),
        [anon_sym_LPAREN] = ACTIONS(251),
        [anon_sym_STAR] = ACTIONS(253),
        [anon_sym_PLUS] = ACTIONS(255),
        [anon_sym_DASH] = ACTIONS(255),
        [anon_sym_SLASH] = ACTIONS(257),
        [anon_sym_STAR_STAR] = ACTIONS(259),
        [anon_sym_PIPE] = ACTIONS(261),
        [anon_sym_AMP] = ACTIONS(263),
        [anon_sym_CARET] = ACTIONS(265),
        [anon_sym_LT_LT] = ACTIONS(255),
        [anon_sym_GT_GT] = ACTIONS(255),
        [anon_sym_and] = ACTIONS(263),
        [anon_sym_or] = ACTIONS(261),
        [anon_sym_LBRACK] = ACTIONS(267),
        [anon_sym_RBRACK] = ACTIONS(1959),
        [sym_comment] = ACTIONS(79),
    },
    [794] = {
        [anon_sym_COMMA] = ACTIONS(635),
        [anon_sym_as] = ACTIONS(635),
        [anon_sym_COLON] = ACTIONS(635),
        [anon_sym_for] = ACTIONS(635),
        [anon_sym_in] = ACTIONS(635),
        [anon_sym_LPAREN] = ACTIONS(1797),
        [anon_sym_RPAREN] = ACTIONS(635),
        [anon_sym_STAR] = ACTIONS(2021),
        [anon_sym_PLUS] = ACTIONS(2024),
        [anon_sym_DASH] = ACTIONS(2024),
        [anon_sym_SLASH] = ACTIONS(2024),
        [anon_sym_STAR_STAR] = ACTIONS(2024),
        [anon_sym_PIPE] = ACTIONS(2024),
        [anon_sym_AMP] = ACTIONS(2024),
        [anon_sym_CARET] = ACTIONS(2024),
        [anon_sym_LT_LT] = ACTIONS(2024),
        [anon_sym_GT_GT] = ACTIONS(2024),
        [anon_sym_and] = ACTIONS(2024),
        [anon_sym_or] = ACTIONS(2024),
        [anon_sym_LBRACK] = ACTIONS(1806),
        [anon_sym_RBRACK] = ACTIONS(635),
        [anon_sym_RBRACE] = ACTIONS(635),
        [sym_comment] = ACTIONS(79),
        [sym__newline] = ACTIONS(635),
    },
    [795] = {
        [anon_sym_COMMA] = ACTIONS(307),
        [anon_sym_as] = ACTIONS(307),
        [anon_sym_COLON] = ACTIONS(307),
        [anon_sym_for] = ACTIONS(307),
        [anon_sym_in] = ACTIONS(307),
        [anon_sym_LPAREN] = ACTIONS(1785),
        [anon_sym_RPAREN] = ACTIONS(2027),
        [anon_sym_STAR] = ACTIONS(1866),
        [anon_sym_PLUS] = ACTIONS(1869),
        [anon_sym_DASH] = ACTIONS(1869),
        [anon_sym_SLASH] = ACTIONS(1869),
        [anon_sym_STAR_STAR] = ACTIONS(1869),
        [anon_sym_PIPE] = ACTIONS(1869),
        [anon_sym_AMP] = ACTIONS(1869),
        [anon_sym_CARET] = ACTIONS(1869),
        [anon_sym_LT_LT] = ACTIONS(1869),
        [anon_sym_GT_GT] = ACTIONS(1869),
        [anon_sym_and] = ACTIONS(1869),
        [anon_sym_or] = ACTIONS(1869),
        [anon_sym_LBRACK] = ACTIONS(1794),
        [anon_sym_RBRACK] = ACTIONS(307),
        [anon_sym_RBRACE] = ACTIONS(307),
        [sym_comment] = ACTIONS(79),
        [sym__newline] = ACTIONS(307),
    },
    [796] = {
        [anon_sym_COMMA] = ACTIONS(2030),
        [anon_sym_as] = ACTIONS(2030),
        [anon_sym_LPAREN] = ACTIONS(2030),
        [anon_sym_DOT] = ACTIONS(2030),
        [sym_comment] = ACTIONS(79),
        [sym__newline] = ACTIONS(2030),
    },
    [797] = {
        [anon_sym_COLON] = ACTIONS(2033),
        [anon_sym_LPAREN] = ACTIONS(2035),
        [sym_comment] = ACTIONS(79),
    },
    [798] = {
        [sym_expression_list] = STATE(788),
        [sym__expression] = STATE(384),
        [sym_binary_operator] = STATE(44),
        [sym_unary_operator] = STATE(44),
        [sym_subscript] = STATE(44),
        [sym_call] = STATE(44),
        [sym_list] = STATE(44),
        [sym_list_comprehension] = STATE(44),
        [sym_dictionary] = STATE(44),
        [sym_dictionary_comprehension] = STATE(44),
        [sym_set] = STATE(44),
        [sym_set_comprehension] = STATE(44),
        [anon_sym_not] = ACTIONS(235),
        [anon_sym_LBRACK] = ACTIONS(133),
        [anon_sym_LBRACE] = ACTIONS(135),
        [sym_number] = ACTIONS(137),
        [sym_identifier] = ACTIONS(139),
        [sym_comment] = ACTIONS(79),
    },
    [799] = {
        [anon_sym_COMMA] = ACTIONS(2037),
        [anon_sym_as] = ACTIONS(159),
        [anon_sym_COLON] = ACTIONS(159),
        [anon_sym_for] = ACTIONS(159),
        [anon_sym_in] = ACTIONS(159),
        [anon_sym_LPAREN] = ACTIONS(159),
        [anon_sym_RPAREN] = ACTIONS(2040),
        [anon_sym_STAR] = ACTIONS(161),
        [anon_sym_PLUS] = ACTIONS(159),
        [anon_sym_DASH] = ACTIONS(159),
        [anon_sym_SLASH] = ACTIONS(159),
        [anon_sym_STAR_STAR] = ACTIONS(159),
        [anon_sym_PIPE] = ACTIONS(159),
        [anon_sym_AMP] = ACTIONS(159),
        [anon_sym_CARET] = ACTIONS(159),
        [anon_sym_LT_LT] = ACTIONS(159),
        [anon_sym_GT_GT] = ACTIONS(159),
        [anon_sym_and] = ACTIONS(159),
        [anon_sym_or] = ACTIONS(159),
        [anon_sym_LBRACK] = ACTIONS(159),
        [anon_sym_RBRACK] = ACTIONS(159),
        [anon_sym_RBRACE] = ACTIONS(159),
        [sym_comment] = ACTIONS(79),
        [sym__newline] = ACTIONS(159),
    },
    [800] = {
        [anon_sym_COMMA] = ACTIONS(2044),
        [anon_sym_as] = ACTIONS(307),
        [anon_sym_COLON] = ACTIONS(307),
        [anon_sym_for] = ACTIONS(307),
        [anon_sym_in] = ACTIONS(307),
        [anon_sym_LPAREN] = ACTIONS(1785),
        [anon_sym_RPAREN] = ACTIONS(2044),
        [anon_sym_STAR] = ACTIONS(1866),
        [anon_sym_PLUS] = ACTIONS(1869),
        [anon_sym_DASH] = ACTIONS(1869),
        [anon_sym_SLASH] = ACTIONS(1869),
        [anon_sym_STAR_STAR] = ACTIONS(1869),
        [anon_sym_PIPE] = ACTIONS(1869),
        [anon_sym_AMP] = ACTIONS(1869),
        [anon_sym_CARET] = ACTIONS(1869),
        [anon_sym_LT_LT] = ACTIONS(1869),
        [anon_sym_GT_GT] = ACTIONS(1869),
        [anon_sym_and] = ACTIONS(1869),
        [anon_sym_or] = ACTIONS(1869),
        [anon_sym_LBRACK] = ACTIONS(1794),
        [anon_sym_RBRACK] = ACTIONS(307),
        [anon_sym_RBRACE] = ACTIONS(307),
        [sym_comment] = ACTIONS(79),
        [sym__newline] = ACTIONS(307),
    },
    [801] = {
        [anon_sym_COMMA] = ACTIONS(2047),
        [anon_sym_LPAREN] = ACTIONS(251),
        [anon_sym_RPAREN] = ACTIONS(2047),
        [anon_sym_STAR] = ACTIONS(319),
        [anon_sym_PLUS] = ACTIONS(321),
        [anon_sym_DASH] = ACTIONS(321),
        [anon_sym_SLASH] = ACTIONS(323),
        [anon_sym_STAR_STAR] = ACTIONS(325),
        [anon_sym_PIPE] = ACTIONS(327),
        [anon_sym_AMP] = ACTIONS(329),
        [anon_sym_CARET] = ACTIONS(331),
        [anon_sym_LT_LT] = ACTIONS(321),
        [anon_sym_GT_GT] = ACTIONS(321),
        [anon_sym_and] = ACTIONS(329),
        [anon_sym_or] = ACTIONS(327),
        [anon_sym_LBRACK] = ACTIONS(267),
        [sym_comment] = ACTIONS(79),
    },
    [802] = {
        [sym__expression] = STATE(289),
        [sym_binary_operator] = STATE(44),
        [sym_unary_operator] = STATE(44),
        [sym_subscript] = STATE(44),
        [sym_call] = STATE(44),
        [sym_list] = STATE(44),
        [sym_list_comprehension] = STATE(44),
        [sym_dictionary] = STATE(44),
        [sym_dictionary_comprehension] = STATE(44),
        [sym_set] = STATE(44),
        [sym_set_comprehension] = STATE(44),
        [anon_sym_STAR] = ACTIONS(867),
        [anon_sym_not] = ACTIONS(235),
        [anon_sym_LBRACK] = ACTIONS(133),
        [anon_sym_LBRACE] = ACTIONS(135),
        [sym_number] = ACTIONS(137),
        [sym_identifier] = ACTIONS(2050),
        [sym_comment] = ACTIONS(79),
    },
    [803] = {
        [anon_sym_COMMA] = ACTIONS(2005),
        [anon_sym_LPAREN] = ACTIONS(159),
        [anon_sym_RPAREN] = ACTIONS(2008),
        [anon_sym_EQ] = ACTIONS(1393),
        [anon_sym_STAR] = ACTIONS(161),
        [anon_sym_PLUS] = ACTIONS(159),
        [anon_sym_DASH] = ACTIONS(159),
        [anon_sym_SLASH] = ACTIONS(159),
        [anon_sym_STAR_STAR] = ACTIONS(159),
        [anon_sym_PIPE] = ACTIONS(159),
        [anon_sym_AMP] = ACTIONS(159),
        [anon_sym_CARET] = ACTIONS(159),
        [anon_sym_LT_LT] = ACTIONS(159),
        [anon_sym_GT_GT] = ACTIONS(159),
        [anon_sym_and] = ACTIONS(159),
        [anon_sym_or] = ACTIONS(159),
        [anon_sym_LBRACK] = ACTIONS(159),
        [sym_comment] = ACTIONS(79),
    },
    [804] = {
        [aux_sym_print_statement_repeat1] = STATE(807),
        [anon_sym_COMMA] = ACTIONS(2052),
        [anon_sym_LPAREN] = ACTIONS(251),
        [anon_sym_RPAREN] = ACTIONS(2054),
        [anon_sym_STAR] = ACTIONS(319),
        [anon_sym_PLUS] = ACTIONS(321),
        [anon_sym_DASH] = ACTIONS(321),
        [anon_sym_SLASH] = ACTIONS(323),
        [anon_sym_STAR_STAR] = ACTIONS(325),
        [anon_sym_PIPE] = ACTIONS(327),
        [anon_sym_AMP] = ACTIONS(329),
        [anon_sym_CARET] = ACTIONS(331),
        [anon_sym_LT_LT] = ACTIONS(321),
        [anon_sym_GT_GT] = ACTIONS(321),
        [anon_sym_and] = ACTIONS(329),
        [anon_sym_or] = ACTIONS(327),
        [anon_sym_LBRACK] = ACTIONS(267),
        [sym_comment] = ACTIONS(79),
    },
    [805] = {
        [sym__expression] = STATE(374),
        [sym_binary_operator] = STATE(44),
        [sym_unary_operator] = STATE(44),
        [sym_subscript] = STATE(44),
        [sym_call] = STATE(44),
        [sym_list] = STATE(44),
        [sym_list_comprehension] = STATE(44),
        [sym_dictionary] = STATE(44),
        [sym_dictionary_comprehension] = STATE(44),
        [sym_set] = STATE(44),
        [sym_set_comprehension] = STATE(44),
        [anon_sym_RPAREN] = ACTIONS(665),
        [anon_sym_STAR] = ACTIONS(381),
        [anon_sym_STAR_STAR] = ACTIONS(383),
        [anon_sym_not] = ACTIONS(2057),
        [anon_sym_LBRACK] = ACTIONS(2060),
        [anon_sym_LBRACE] = ACTIONS(2063),
        [sym_number] = ACTIONS(2066),
        [sym_identifier] = ACTIONS(2069),
        [sym_comment] = ACTIONS(79),
    },
    [806] = {
        [anon_sym_COMMA] = ACTIONS(375),
        [anon_sym_as] = ACTIONS(375),
        [anon_sym_COLON] = ACTIONS(375),
        [anon_sym_for] = ACTIONS(375),
        [anon_sym_in] = ACTIONS(375),
        [anon_sym_LPAREN] = ACTIONS(375),
        [anon_sym_RPAREN] = ACTIONS(375),
        [anon_sym_STAR] = ACTIONS(377),
        [anon_sym_PLUS] = ACTIONS(375),
        [anon_sym_DASH] = ACTIONS(375),
        [anon_sym_SLASH] = ACTIONS(375),
        [anon_sym_STAR_STAR] = ACTIONS(375),
        [anon_sym_PIPE] = ACTIONS(375),
        [anon_sym_AMP] = ACTIONS(375),
        [anon_sym_CARET] = ACTIONS(375),
        [anon_sym_LT_LT] = ACTIONS(375),
        [anon_sym_GT_GT] = ACTIONS(375),
        [anon_sym_and] = ACTIONS(375),
        [anon_sym_or] = ACTIONS(375),
        [anon_sym_LBRACK] = ACTIONS(375),
        [anon_sym_RBRACK] = ACTIONS(375),
        [anon_sym_RBRACE] = ACTIONS(375),
        [sym_comment] = ACTIONS(79),
        [sym__newline] = ACTIONS(2072),
    },
    [807] = {
        [anon_sym_COMMA] = ACTIONS(753),
        [anon_sym_RPAREN] = ACTIONS(1743),
        [sym_comment] = ACTIONS(79),
    },
    [808] = {
        [anon_sym_COMMA] = ACTIONS(2037),
        [anon_sym_LPAREN] = ACTIONS(159),
        [anon_sym_RPAREN] = ACTIONS(2037),
        [anon_sym_STAR] = ACTIONS(161),
        [anon_sym_PLUS] = ACTIONS(159),
        [anon_sym_DASH] = ACTIONS(159),
        [anon_sym_SLASH] = ACTIONS(159),
        [anon_sym_STAR_STAR] = ACTIONS(159),
        [anon_sym_PIPE] = ACTIONS(159),
        [anon_sym_AMP] = ACTIONS(159),
        [anon_sym_CARET] = ACTIONS(159),
        [anon_sym_LT_LT] = ACTIONS(159),
        [anon_sym_GT_GT] = ACTIONS(159),
        [anon_sym_and] = ACTIONS(159),
        [anon_sym_or] = ACTIONS(159),
        [anon_sym_LBRACK] = ACTIONS(159),
        [sym_comment] = ACTIONS(79),
    },
    [809] = {
        [sym_parameters] = STATE(678),
        [anon_sym_LPAREN] = ACTIONS(849),
        [sym_comment] = ACTIONS(79),
    },
    [810] = {
        [aux_sym_with_statement_repeat1] = STATE(695),
        [anon_sym_COMMA] = ACTIONS(917),
        [anon_sym_COLON] = ACTIONS(2075),
        [sym_comment] = ACTIONS(79),
    },
    [811] = {
        [sym__simple_statement] = STATE(704),
        [sym_import_statement] = STATE(6),
        [sym_print_statement] = STATE(6),
        [sym_expression_statement] = STATE(6),
        [sym_return_statement] = STATE(6),
        [sym_delete_statement] = STATE(6),
        [sym__suite] = STATE(812),
        [sym__expression] = STATE(25),
        [sym_binary_operator] = STATE(18),
        [sym_unary_operator] = STATE(18),
        [sym_subscript] = STATE(18),
        [sym_call] = STATE(18),
        [sym_list] = STATE(18),
        [sym_list_comprehension] = STATE(18),
        [sym_dictionary] = STATE(18),
        [sym_dictionary_comprehension] = STATE(18),
        [sym_set] = STATE(18),
        [sym_set_comprehension] = STATE(18),
        [anon_sym_import] = ACTIONS(89),
        [anon_sym_print] = ACTIONS(91),
        [anon_sym_return] = ACTIONS(93),
        [anon_sym_del] = ACTIONS(95),
        [sym_pass_statement] = ACTIONS(97),
        [sym_break_statement] = ACTIONS(97),
        [sym_continue_statement] = ACTIONS(97),
        [anon_sym_not] = ACTIONS(115),
        [anon_sym_LBRACK] = ACTIONS(117),
        [anon_sym_LBRACE] = ACTIONS(119),
        [sym_number] = ACTIONS(121),
        [sym_identifier] = ACTIONS(123),
        [sym_comment] = ACTIONS(79),
        [sym__indent] = ACTIONS(1264),
    },
    [812] = {
        [ts_builtin_sym_end] = ACTIONS(1033),
        [anon_sym_SEMI] = ACTIONS(1033),
        [anon_sym_import] = ACTIONS(1031),
        [anon_sym_print] = ACTIONS(1031),
        [anon_sym_return] = ACTIONS(1031),
        [anon_sym_del] = ACTIONS(1031),
        [sym_pass_statement] = ACTIONS(1031),
        [sym_break_statement] = ACTIONS(1031),
        [sym_continue_statement] = ACTIONS(1031),
        [anon_sym_if] = ACTIONS(1031),
        [anon_sym_for] = ACTIONS(1031),
        [anon_sym_while] = ACTIONS(1031),
        [anon_sym_try] = ACTIONS(1031),
        [anon_sym_with] = ACTIONS(1031),
        [anon_sym_def] = ACTIONS(1031),
        [anon_sym_class] = ACTIONS(1031),
        [anon_sym_AT] = ACTIONS(1033),
        [anon_sym_not] = ACTIONS(1031),
        [anon_sym_LBRACK] = ACTIONS(1033),
        [anon_sym_LBRACE] = ACTIONS(1033),
        [sym_number] = ACTIONS(1031),
        [sym_identifier] = ACTIONS(1035),
        [sym_comment] = ACTIONS(79),
        [sym__newline] = ACTIONS(1033),
        [sym__dedent] = ACTIONS(1033),
    },
    [813] = {
        [anon_sym_COMMA] = ACTIONS(2077),
        [anon_sym_as] = ACTIONS(2077),
        [anon_sym_COLON] = ACTIONS(2079),
        [anon_sym_LPAREN] = ACTIONS(251),
        [anon_sym_STAR] = ACTIONS(925),
        [anon_sym_PLUS] = ACTIONS(927),
        [anon_sym_DASH] = ACTIONS(927),
        [anon_sym_SLASH] = ACTIONS(929),
        [anon_sym_STAR_STAR] = ACTIONS(931),
        [anon_sym_PIPE] = ACTIONS(933),
        [anon_sym_AMP] = ACTIONS(935),
        [anon_sym_CARET] = ACTIONS(937),
        [anon_sym_LT_LT] = ACTIONS(927),
        [anon_sym_GT_GT] = ACTIONS(927),
        [anon_sym_and] = ACTIONS(935),
        [anon_sym_or] = ACTIONS(933),
        [anon_sym_LBRACK] = ACTIONS(267),
        [sym_comment] = ACTIONS(79),
    },
    [814] = {
        [sym__expression] = STATE(817),
        [sym_binary_operator] = STATE(44),
        [sym_unary_operator] = STATE(44),
        [sym_subscript] = STATE(44),
        [sym_call] = STATE(44),
        [sym_list] = STATE(44),
        [sym_list_comprehension] = STATE(44),
        [sym_dictionary] = STATE(44),
        [sym_dictionary_comprehension] = STATE(44),
        [sym_set] = STATE(44),
        [sym_set_comprehension] = STATE(44),
        [anon_sym_not] = ACTIONS(131),
        [anon_sym_LBRACK] = ACTIONS(133),
        [anon_sym_LBRACE] = ACTIONS(135),
        [sym_number] = ACTIONS(137),
        [sym_identifier] = ACTIONS(139),
        [sym_comment] = ACTIONS(79),
    },
    [815] = {
        [sym__simple_statement] = STATE(704),
        [sym_import_statement] = STATE(6),
        [sym_print_statement] = STATE(6),
        [sym_expression_statement] = STATE(6),
        [sym_return_statement] = STATE(6),
        [sym_delete_statement] = STATE(6),
        [sym__suite] = STATE(816),
        [sym__expression] = STATE(25),
        [sym_binary_operator] = STATE(18),
        [sym_unary_operator] = STATE(18),
        [sym_subscript] = STATE(18),
        [sym_call] = STATE(18),
        [sym_list] = STATE(18),
        [sym_list_comprehension] = STATE(18),
        [sym_dictionary] = STATE(18),
        [sym_dictionary_comprehension] = STATE(18),
        [sym_set] = STATE(18),
        [sym_set_comprehension] = STATE(18),
        [anon_sym_import] = ACTIONS(89),
        [anon_sym_print] = ACTIONS(91),
        [anon_sym_return] = ACTIONS(93),
        [anon_sym_del] = ACTIONS(95),
        [sym_pass_statement] = ACTIONS(97),
        [sym_break_statement] = ACTIONS(97),
        [sym_continue_statement] = ACTIONS(97),
        [anon_sym_not] = ACTIONS(115),
        [anon_sym_LBRACK] = ACTIONS(117),
        [anon_sym_LBRACE] = ACTIONS(119),
        [sym_number] = ACTIONS(121),
        [sym_identifier] = ACTIONS(123),
        [sym_comment] = ACTIONS(79),
        [sym__indent] = ACTIONS(1264),
    },
    [816] = {
        [ts_builtin_sym_end] = ACTIONS(1043),
        [anon_sym_SEMI] = ACTIONS(1043),
        [anon_sym_import] = ACTIONS(1041),
        [anon_sym_print] = ACTIONS(1041),
        [anon_sym_return] = ACTIONS(1041),
        [anon_sym_del] = ACTIONS(1041),
        [sym_pass_statement] = ACTIONS(1041),
        [sym_break_statement] = ACTIONS(1041),
        [sym_continue_statement] = ACTIONS(1041),
        [anon_sym_if] = ACTIONS(1041),
        [anon_sym_else] = ACTIONS(1041),
        [anon_sym_for] = ACTIONS(1041),
        [anon_sym_while] = ACTIONS(1041),
        [anon_sym_try] = ACTIONS(1041),
        [anon_sym_except] = ACTIONS(1041),
        [anon_sym_finally] = ACTIONS(1041),
        [anon_sym_with] = ACTIONS(1041),
        [anon_sym_def] = ACTIONS(1041),
        [anon_sym_class] = ACTIONS(1041),
        [anon_sym_AT] = ACTIONS(1043),
        [anon_sym_not] = ACTIONS(1041),
        [anon_sym_LBRACK] = ACTIONS(1043),
        [anon_sym_LBRACE] = ACTIONS(1043),
        [sym_number] = ACTIONS(1041),
        [sym_identifier] = ACTIONS(1045),
        [sym_comment] = ACTIONS(79),
        [sym__newline] = ACTIONS(1043),
        [sym__dedent] = ACTIONS(1043),
    },
    [817] = {
        [anon_sym_COLON] = ACTIONS(2081),
        [anon_sym_LPAREN] = ACTIONS(251),
        [anon_sym_STAR] = ACTIONS(441),
        [anon_sym_PLUS] = ACTIONS(443),
        [anon_sym_DASH] = ACTIONS(443),
        [anon_sym_SLASH] = ACTIONS(445),
        [anon_sym_STAR_STAR] = ACTIONS(447),
        [anon_sym_PIPE] = ACTIONS(449),
        [anon_sym_AMP] = ACTIONS(451),
        [anon_sym_CARET] = ACTIONS(453),
        [anon_sym_LT_LT] = ACTIONS(443),
        [anon_sym_GT_GT] = ACTIONS(443),
        [anon_sym_and] = ACTIONS(451),
        [anon_sym_or] = ACTIONS(449),
        [anon_sym_LBRACK] = ACTIONS(267),
        [sym_comment] = ACTIONS(79),
    },
    [818] = {
        [sym__simple_statement] = STATE(493),
        [sym_import_statement] = STATE(6),
        [sym_print_statement] = STATE(6),
        [sym_expression_statement] = STATE(6),
        [sym_return_statement] = STATE(6),
        [sym_delete_statement] = STATE(6),
        [sym__suite] = STATE(819),
        [sym__expression] = STATE(25),
        [sym_binary_operator] = STATE(18),
        [sym_unary_operator] = STATE(18),
        [sym_subscript] = STATE(18),
        [sym_call] = STATE(18),
        [sym_list] = STATE(18),
        [sym_list_comprehension] = STATE(18),
        [sym_dictionary] = STATE(18),
        [sym_dictionary_comprehension] = STATE(18),
        [sym_set] = STATE(18),
        [sym_set_comprehension] = STATE(18),
        [anon_sym_import] = ACTIONS(89),
        [anon_sym_print] = ACTIONS(91),
        [anon_sym_return] = ACTIONS(93),
        [anon_sym_del] = ACTIONS(95),
        [sym_pass_statement] = ACTIONS(97),
        [sym_break_statement] = ACTIONS(97),
        [sym_continue_statement] = ACTIONS(97),
        [anon_sym_not] = ACTIONS(115),
        [anon_sym_LBRACK] = ACTIONS(117),
        [anon_sym_LBRACE] = ACTIONS(119),
        [sym_number] = ACTIONS(121),
        [sym_identifier] = ACTIONS(123),
        [sym_comment] = ACTIONS(79),
        [sym__indent] = ACTIONS(977),
    },
    [819] = {
        [sym_except_clause] = STATE(771),
        [sym_finally_clause] = STATE(772),
        [aux_sym_try_statement_repeat1] = STATE(694),
        [anon_sym_except] = ACTIONS(2083),
        [anon_sym_finally] = ACTIONS(2085),
        [sym_comment] = ACTIONS(79),
    },
    [820] = {
        [anon_sym_COLON] = ACTIONS(2087),
        [anon_sym_LPAREN] = ACTIONS(251),
        [anon_sym_STAR] = ACTIONS(441),
        [anon_sym_PLUS] = ACTIONS(443),
        [anon_sym_DASH] = ACTIONS(443),
        [anon_sym_SLASH] = ACTIONS(445),
        [anon_sym_STAR_STAR] = ACTIONS(447),
        [anon_sym_PIPE] = ACTIONS(449),
        [anon_sym_AMP] = ACTIONS(451),
        [anon_sym_CARET] = ACTIONS(453),
        [anon_sym_LT_LT] = ACTIONS(443),
        [anon_sym_GT_GT] = ACTIONS(443),
        [anon_sym_and] = ACTIONS(451),
        [anon_sym_or] = ACTIONS(449),
        [anon_sym_LBRACK] = ACTIONS(267),
        [sym_comment] = ACTIONS(79),
    },
    [821] = {
        [sym__simple_statement] = STATE(704),
        [sym_import_statement] = STATE(6),
        [sym_print_statement] = STATE(6),
        [sym_expression_statement] = STATE(6),
        [sym_return_statement] = STATE(6),
        [sym_delete_statement] = STATE(6),
        [sym__suite] = STATE(822),
        [sym__expression] = STATE(25),
        [sym_binary_operator] = STATE(18),
        [sym_unary_operator] = STATE(18),
        [sym_subscript] = STATE(18),
        [sym_call] = STATE(18),
        [sym_list] = STATE(18),
        [sym_list_comprehension] = STATE(18),
        [sym_dictionary] = STATE(18),
        [sym_dictionary_comprehension] = STATE(18),
        [sym_set] = STATE(18),
        [sym_set_comprehension] = STATE(18),
        [anon_sym_import] = ACTIONS(89),
        [anon_sym_print] = ACTIONS(91),
        [anon_sym_return] = ACTIONS(93),
        [anon_sym_del] = ACTIONS(95),
        [sym_pass_statement] = ACTIONS(97),
        [sym_break_statement] = ACTIONS(97),
        [sym_continue_statement] = ACTIONS(97),
        [anon_sym_not] = ACTIONS(115),
        [anon_sym_LBRACK] = ACTIONS(117),
        [anon_sym_LBRACE] = ACTIONS(119),
        [sym_number] = ACTIONS(121),
        [sym_identifier] = ACTIONS(123),
        [sym_comment] = ACTIONS(79),
        [sym__indent] = ACTIONS(1264),
    },
    [822] = {
        [sym_else_clause] = STATE(823),
        [ts_builtin_sym_end] = ACTIONS(1061),
        [anon_sym_SEMI] = ACTIONS(1061),
        [anon_sym_import] = ACTIONS(1059),
        [anon_sym_print] = ACTIONS(1059),
        [anon_sym_return] = ACTIONS(1059),
        [anon_sym_del] = ACTIONS(1059),
        [sym_pass_statement] = ACTIONS(1059),
        [sym_break_statement] = ACTIONS(1059),
        [sym_continue_statement] = ACTIONS(1059),
        [anon_sym_if] = ACTIONS(1059),
        [anon_sym_else] = ACTIONS(1751),
        [anon_sym_for] = ACTIONS(1059),
        [anon_sym_while] = ACTIONS(1059),
        [anon_sym_try] = ACTIONS(1059),
        [anon_sym_with] = ACTIONS(1059),
        [anon_sym_def] = ACTIONS(1059),
        [anon_sym_class] = ACTIONS(1059),
        [anon_sym_AT] = ACTIONS(1061),
        [anon_sym_not] = ACTIONS(1059),
        [anon_sym_LBRACK] = ACTIONS(1061),
        [anon_sym_LBRACE] = ACTIONS(1061),
        [sym_number] = ACTIONS(1059),
        [sym_identifier] = ACTIONS(1063),
        [sym_comment] = ACTIONS(79),
        [sym__newline] = ACTIONS(1061),
        [sym__dedent] = ACTIONS(1061),
    },
    [823] = {
        [ts_builtin_sym_end] = ACTIONS(1067),
        [anon_sym_SEMI] = ACTIONS(1067),
        [anon_sym_import] = ACTIONS(1065),
        [anon_sym_print] = ACTIONS(1065),
        [anon_sym_return] = ACTIONS(1065),
        [anon_sym_del] = ACTIONS(1065),
        [sym_pass_statement] = ACTIONS(1065),
        [sym_break_statement] = ACTIONS(1065),
        [sym_continue_statement] = ACTIONS(1065),
        [anon_sym_if] = ACTIONS(1065),
        [anon_sym_for] = ACTIONS(1065),
        [anon_sym_while] = ACTIONS(1065),
        [anon_sym_try] = ACTIONS(1065),
        [anon_sym_with] = ACTIONS(1065),
        [anon_sym_def] = ACTIONS(1065),
        [anon_sym_class] = ACTIONS(1065),
        [anon_sym_AT] = ACTIONS(1067),
        [anon_sym_not] = ACTIONS(1065),
        [anon_sym_LBRACK] = ACTIONS(1067),
        [anon_sym_LBRACE] = ACTIONS(1067),
        [sym_number] = ACTIONS(1065),
        [sym_identifier] = ACTIONS(1069),
        [sym_comment] = ACTIONS(79),
        [sym__newline] = ACTIONS(1067),
        [sym__dedent] = ACTIONS(1067),
    },
    [824] = {
        [sym__expression] = STATE(829),
        [sym_binary_operator] = STATE(44),
        [sym_unary_operator] = STATE(44),
        [sym_subscript] = STATE(44),
        [sym_call] = STATE(44),
        [sym_list] = STATE(44),
        [sym_list_comprehension] = STATE(44),
        [sym_dictionary] = STATE(44),
        [sym_dictionary_comprehension] = STATE(44),
        [sym_set] = STATE(44),
        [sym_set_comprehension] = STATE(44),
        [anon_sym_not] = ACTIONS(1268),
        [anon_sym_LBRACK] = ACTIONS(133),
        [anon_sym_LBRACE] = ACTIONS(135),
        [sym_number] = ACTIONS(137),
        [sym_identifier] = ACTIONS(139),
        [sym_comment] = ACTIONS(79),
    },
    [825] = {
        [aux_sym_print_statement_repeat1] = STATE(528),
        [anon_sym_COMMA] = ACTIONS(1075),
        [anon_sym_COLON] = ACTIONS(479),
        [anon_sym_LPAREN] = ACTIONS(251),
        [anon_sym_STAR] = ACTIONS(2089),
        [anon_sym_PLUS] = ACTIONS(2091),
        [anon_sym_DASH] = ACTIONS(2091),
        [anon_sym_SLASH] = ACTIONS(2091),
        [anon_sym_STAR_STAR] = ACTIONS(2091),
        [anon_sym_PIPE] = ACTIONS(2091),
        [anon_sym_AMP] = ACTIONS(2091),
        [anon_sym_CARET] = ACTIONS(2091),
        [anon_sym_LT_LT] = ACTIONS(2091),
        [anon_sym_GT_GT] = ACTIONS(2091),
        [anon_sym_and] = ACTIONS(2091),
        [anon_sym_or] = ACTIONS(2091),
        [anon_sym_LBRACK] = ACTIONS(267),
        [anon_sym_RBRACK] = ACTIONS(731),
        [anon_sym_RBRACE] = ACTIONS(2093),
        [sym_comment] = ACTIONS(79),
    },
    [826] = {
        [sym__expression] = STATE(828),
        [sym_binary_operator] = STATE(44),
        [sym_unary_operator] = STATE(44),
        [sym_subscript] = STATE(44),
        [sym_call] = STATE(44),
        [sym_list] = STATE(44),
        [sym_list_comprehension] = STATE(44),
        [sym_dictionary] = STATE(44),
        [sym_dictionary_comprehension] = STATE(44),
        [sym_set] = STATE(44),
        [sym_set_comprehension] = STATE(44),
        [anon_sym_not] = ACTIONS(1268),
        [anon_sym_LBRACK] = ACTIONS(133),
        [anon_sym_LBRACE] = ACTIONS(135),
        [sym_number] = ACTIONS(137),
        [sym_identifier] = ACTIONS(139),
        [sym_comment] = ACTIONS(79),
    },
    [827] = {
        [anon_sym_COMMA] = ACTIONS(2095),
        [anon_sym_as] = ACTIONS(2095),
        [anon_sym_COLON] = ACTIONS(2095),
        [anon_sym_for] = ACTIONS(2095),
        [anon_sym_in] = ACTIONS(2095),
        [anon_sym_LPAREN] = ACTIONS(2095),
        [anon_sym_RPAREN] = ACTIONS(2095),
        [anon_sym_STAR] = ACTIONS(2098),
        [anon_sym_PLUS] = ACTIONS(2095),
        [anon_sym_DASH] = ACTIONS(2095),
        [anon_sym_SLASH] = ACTIONS(2095),
        [anon_sym_STAR_STAR] = ACTIONS(2095),
        [anon_sym_PIPE] = ACTIONS(2095),
        [anon_sym_AMP] = ACTIONS(2095),
        [anon_sym_CARET] = ACTIONS(2095),
        [anon_sym_LT_LT] = ACTIONS(2095),
        [anon_sym_GT_GT] = ACTIONS(2095),
        [anon_sym_and] = ACTIONS(2095),
        [anon_sym_or] = ACTIONS(2095),
        [anon_sym_LBRACK] = ACTIONS(2095),
        [anon_sym_RBRACK] = ACTIONS(2095),
        [anon_sym_RBRACE] = ACTIONS(2095),
        [sym_comment] = ACTIONS(79),
        [sym__newline] = ACTIONS(2095),
    },
    [828] = {
        [anon_sym_COMMA] = ACTIONS(307),
        [anon_sym_COLON] = ACTIONS(307),
        [anon_sym_LPAREN] = ACTIONS(1880),
        [anon_sym_STAR] = ACTIONS(2101),
        [anon_sym_PLUS] = ACTIONS(2104),
        [anon_sym_DASH] = ACTIONS(2104),
        [anon_sym_SLASH] = ACTIONS(2104),
        [anon_sym_STAR_STAR] = ACTIONS(2104),
        [anon_sym_PIPE] = ACTIONS(2104),
        [anon_sym_AMP] = ACTIONS(2104),
        [anon_sym_CARET] = ACTIONS(2104),
        [anon_sym_LT_LT] = ACTIONS(2104),
        [anon_sym_GT_GT] = ACTIONS(2104),
        [anon_sym_and] = ACTIONS(2104),
        [anon_sym_or] = ACTIONS(2104),
        [anon_sym_LBRACK] = ACTIONS(1889),
        [anon_sym_RBRACK] = ACTIONS(307),
        [anon_sym_RBRACE] = ACTIONS(307),
        [sym_comment] = ACTIONS(79),
    },
    [829] = {
        [anon_sym_COMMA] = ACTIONS(635),
        [anon_sym_COLON] = ACTIONS(635),
        [anon_sym_LPAREN] = ACTIONS(1892),
        [anon_sym_STAR] = ACTIONS(2107),
        [anon_sym_PLUS] = ACTIONS(2110),
        [anon_sym_DASH] = ACTIONS(2110),
        [anon_sym_SLASH] = ACTIONS(2110),
        [anon_sym_STAR_STAR] = ACTIONS(2110),
        [anon_sym_PIPE] = ACTIONS(2110),
        [anon_sym_AMP] = ACTIONS(2110),
        [anon_sym_CARET] = ACTIONS(2110),
        [anon_sym_LT_LT] = ACTIONS(2110),
        [anon_sym_GT_GT] = ACTIONS(2110),
        [anon_sym_and] = ACTIONS(2110),
        [anon_sym_or] = ACTIONS(2110),
        [anon_sym_LBRACK] = ACTIONS(1901),
        [anon_sym_RBRACK] = ACTIONS(635),
        [anon_sym_RBRACE] = ACTIONS(635),
        [sym_comment] = ACTIONS(79),
    },
    [830] = {
        [anon_sym_in] = ACTIONS(1599),
        [sym_comment] = ACTIONS(79),
    },
    [831] = {
        [anon_sym_COLON] = ACTIONS(2113),
        [anon_sym_LPAREN] = ACTIONS(251),
        [anon_sym_STAR] = ACTIONS(441),
        [anon_sym_PLUS] = ACTIONS(443),
        [anon_sym_DASH] = ACTIONS(443),
        [anon_sym_SLASH] = ACTIONS(445),
        [anon_sym_STAR_STAR] = ACTIONS(447),
        [anon_sym_PIPE] = ACTIONS(449),
        [anon_sym_AMP] = ACTIONS(451),
        [anon_sym_CARET] = ACTIONS(453),
        [anon_sym_LT_LT] = ACTIONS(443),
        [anon_sym_GT_GT] = ACTIONS(443),
        [anon_sym_and] = ACTIONS(451),
        [anon_sym_or] = ACTIONS(449),
        [anon_sym_LBRACK] = ACTIONS(267),
        [sym_comment] = ACTIONS(79),
    },
    [832] = {
        [sym__simple_statement] = STATE(704),
        [sym_import_statement] = STATE(6),
        [sym_print_statement] = STATE(6),
        [sym_expression_statement] = STATE(6),
        [sym_return_statement] = STATE(6),
        [sym_delete_statement] = STATE(6),
        [sym__suite] = STATE(833),
        [sym__expression] = STATE(25),
        [sym_binary_operator] = STATE(18),
        [sym_unary_operator] = STATE(18),
        [sym_subscript] = STATE(18),
        [sym_call] = STATE(18),
        [sym_list] = STATE(18),
        [sym_list_comprehension] = STATE(18),
        [sym_dictionary] = STATE(18),
        [sym_dictionary_comprehension] = STATE(18),
        [sym_set] = STATE(18),
        [sym_set_comprehension] = STATE(18),
        [anon_sym_import] = ACTIONS(89),
        [anon_sym_print] = ACTIONS(91),
        [anon_sym_return] = ACTIONS(93),
        [anon_sym_del] = ACTIONS(95),
        [sym_pass_statement] = ACTIONS(97),
        [sym_break_statement] = ACTIONS(97),
        [sym_continue_statement] = ACTIONS(97),
        [anon_sym_not] = ACTIONS(115),
        [anon_sym_LBRACK] = ACTIONS(117),
        [anon_sym_LBRACE] = ACTIONS(119),
        [sym_number] = ACTIONS(121),
        [sym_identifier] = ACTIONS(123),
        [sym_comment] = ACTIONS(79),
        [sym__indent] = ACTIONS(1264),
    },
    [833] = {
        [ts_builtin_sym_end] = ACTIONS(1129),
        [anon_sym_SEMI] = ACTIONS(1129),
        [anon_sym_import] = ACTIONS(1127),
        [anon_sym_print] = ACTIONS(1127),
        [anon_sym_return] = ACTIONS(1127),
        [anon_sym_del] = ACTIONS(1127),
        [sym_pass_statement] = ACTIONS(1127),
        [sym_break_statement] = ACTIONS(1127),
        [sym_continue_statement] = ACTIONS(1127),
        [anon_sym_if] = ACTIONS(1127),
        [anon_sym_elif] = ACTIONS(1127),
        [anon_sym_else] = ACTIONS(1127),
        [anon_sym_for] = ACTIONS(1127),
        [anon_sym_while] = ACTIONS(1127),
        [anon_sym_try] = ACTIONS(1127),
        [anon_sym_with] = ACTIONS(1127),
        [anon_sym_def] = ACTIONS(1127),
        [anon_sym_class] = ACTIONS(1127),
        [anon_sym_AT] = ACTIONS(1129),
        [anon_sym_not] = ACTIONS(1127),
        [anon_sym_LBRACK] = ACTIONS(1129),
        [anon_sym_LBRACE] = ACTIONS(1129),
        [sym_number] = ACTIONS(1127),
        [sym_identifier] = ACTIONS(1131),
        [sym_comment] = ACTIONS(79),
        [sym__newline] = ACTIONS(1129),
        [sym__dedent] = ACTIONS(1129),
    },
    [834] = {
        [anon_sym_COLON] = ACTIONS(2115),
        [anon_sym_LPAREN] = ACTIONS(251),
        [anon_sym_STAR] = ACTIONS(441),
        [anon_sym_PLUS] = ACTIONS(443),
        [anon_sym_DASH] = ACTIONS(443),
        [anon_sym_SLASH] = ACTIONS(445),
        [anon_sym_STAR_STAR] = ACTIONS(447),
        [anon_sym_PIPE] = ACTIONS(449),
        [anon_sym_AMP] = ACTIONS(451),
        [anon_sym_CARET] = ACTIONS(453),
        [anon_sym_LT_LT] = ACTIONS(443),
        [anon_sym_GT_GT] = ACTIONS(443),
        [anon_sym_and] = ACTIONS(451),
        [anon_sym_or] = ACTIONS(449),
        [anon_sym_LBRACK] = ACTIONS(267),
        [sym_comment] = ACTIONS(79),
    },
    [835] = {
        [sym__simple_statement] = STATE(704),
        [sym_import_statement] = STATE(6),
        [sym_print_statement] = STATE(6),
        [sym_expression_statement] = STATE(6),
        [sym_return_statement] = STATE(6),
        [sym_delete_statement] = STATE(6),
        [sym__suite] = STATE(836),
        [sym__expression] = STATE(25),
        [sym_binary_operator] = STATE(18),
        [sym_unary_operator] = STATE(18),
        [sym_subscript] = STATE(18),
        [sym_call] = STATE(18),
        [sym_list] = STATE(18),
        [sym_list_comprehension] = STATE(18),
        [sym_dictionary] = STATE(18),
        [sym_dictionary_comprehension] = STATE(18),
        [sym_set] = STATE(18),
        [sym_set_comprehension] = STATE(18),
        [anon_sym_import] = ACTIONS(89),
        [anon_sym_print] = ACTIONS(91),
        [anon_sym_return] = ACTIONS(93),
        [anon_sym_del] = ACTIONS(95),
        [sym_pass_statement] = ACTIONS(97),
        [sym_break_statement] = ACTIONS(97),
        [sym_continue_statement] = ACTIONS(97),
        [anon_sym_not] = ACTIONS(115),
        [anon_sym_LBRACK] = ACTIONS(117),
        [anon_sym_LBRACE] = ACTIONS(119),
        [sym_number] = ACTIONS(121),
        [sym_identifier] = ACTIONS(123),
        [sym_comment] = ACTIONS(79),
        [sym__indent] = ACTIONS(1264),
    },
    [836] = {
        [sym_elif_clause] = STATE(759),
        [sym_else_clause] = STATE(837),
        [aux_sym_if_statement_repeat1] = STATE(693),
        [ts_builtin_sym_end] = ACTIONS(1097),
        [anon_sym_SEMI] = ACTIONS(1097),
        [anon_sym_import] = ACTIONS(1093),
        [anon_sym_print] = ACTIONS(1093),
        [anon_sym_return] = ACTIONS(1093),
        [anon_sym_del] = ACTIONS(1093),
        [sym_pass_statement] = ACTIONS(1093),
        [sym_break_statement] = ACTIONS(1093),
        [sym_continue_statement] = ACTIONS(1093),
        [anon_sym_if] = ACTIONS(1093),
        [anon_sym_elif] = ACTIONS(1749),
        [anon_sym_else] = ACTIONS(1751),
        [anon_sym_for] = ACTIONS(1093),
        [anon_sym_while] = ACTIONS(1093),
        [anon_sym_try] = ACTIONS(1093),
        [anon_sym_with] = ACTIONS(1093),
        [anon_sym_def] = ACTIONS(1093),
        [anon_sym_class] = ACTIONS(1093),
        [anon_sym_AT] = ACTIONS(1097),
        [anon_sym_not] = ACTIONS(1093),
        [anon_sym_LBRACK] = ACTIONS(1097),
        [anon_sym_LBRACE] = ACTIONS(1097),
        [sym_number] = ACTIONS(1093),
        [sym_identifier] = ACTIONS(1099),
        [sym_comment] = ACTIONS(79),
        [sym__newline] = ACTIONS(1097),
        [sym__dedent] = ACTIONS(1097),
    },
    [837] = {
        [ts_builtin_sym_end] = ACTIONS(1109),
        [anon_sym_SEMI] = ACTIONS(1109),
        [anon_sym_import] = ACTIONS(1107),
        [anon_sym_print] = ACTIONS(1107),
        [anon_sym_return] = ACTIONS(1107),
        [anon_sym_del] = ACTIONS(1107),
        [sym_pass_statement] = ACTIONS(1107),
        [sym_break_statement] = ACTIONS(1107),
        [sym_continue_statement] = ACTIONS(1107),
        [anon_sym_if] = ACTIONS(1107),
        [anon_sym_for] = ACTIONS(1107),
        [anon_sym_while] = ACTIONS(1107),
        [anon_sym_try] = ACTIONS(1107),
        [anon_sym_with] = ACTIONS(1107),
        [anon_sym_def] = ACTIONS(1107),
        [anon_sym_class] = ACTIONS(1107),
        [anon_sym_AT] = ACTIONS(1109),
        [anon_sym_not] = ACTIONS(1107),
        [anon_sym_LBRACK] = ACTIONS(1109),
        [anon_sym_LBRACE] = ACTIONS(1109),
        [sym_number] = ACTIONS(1107),
        [sym_identifier] = ACTIONS(1111),
        [sym_comment] = ACTIONS(79),
        [sym__newline] = ACTIONS(1109),
        [sym__dedent] = ACTIONS(1109),
    },
    [838] = {
        [anon_sym_COMMA] = ACTIONS(2117),
        [anon_sym_COLON] = ACTIONS(159),
        [anon_sym_LPAREN] = ACTIONS(159),
        [anon_sym_STAR] = ACTIONS(161),
        [anon_sym_PLUS] = ACTIONS(159),
        [anon_sym_DASH] = ACTIONS(159),
        [anon_sym_SLASH] = ACTIONS(159),
        [anon_sym_STAR_STAR] = ACTIONS(159),
        [anon_sym_PIPE] = ACTIONS(159),
        [anon_sym_AMP] = ACTIONS(159),
        [anon_sym_CARET] = ACTIONS(159),
        [anon_sym_LT_LT] = ACTIONS(159),
        [anon_sym_GT_GT] = ACTIONS(159),
        [anon_sym_and] = ACTIONS(159),
        [anon_sym_or] = ACTIONS(159),
        [anon_sym_LBRACK] = ACTIONS(159),
        [sym_comment] = ACTIONS(79),
        [sym__newline] = ACTIONS(1213),
    },
    [839] = {
        [anon_sym_COMMA] = ACTIONS(1765),
        [anon_sym_as] = ACTIONS(1765),
        [anon_sym_COLON] = ACTIONS(2120),
        [anon_sym_for] = ACTIONS(1765),
        [anon_sym_in] = ACTIONS(1765),
        [anon_sym_LPAREN] = ACTIONS(1765),
        [anon_sym_RPAREN] = ACTIONS(1765),
        [anon_sym_STAR] = ACTIONS(1768),
        [anon_sym_PLUS] = ACTIONS(1765),
        [anon_sym_DASH] = ACTIONS(1765),
        [anon_sym_SLASH] = ACTIONS(1765),
        [anon_sym_STAR_STAR] = ACTIONS(1765),
        [anon_sym_PIPE] = ACTIONS(1765),
        [anon_sym_AMP] = ACTIONS(1765),
        [anon_sym_CARET] = ACTIONS(1765),
        [anon_sym_LT_LT] = ACTIONS(1765),
        [anon_sym_GT_GT] = ACTIONS(1765),
        [anon_sym_and] = ACTIONS(1765),
        [anon_sym_or] = ACTIONS(1765),
        [anon_sym_LBRACK] = ACTIONS(1765),
        [anon_sym_RBRACK] = ACTIONS(1765),
        [anon_sym_RBRACE] = ACTIONS(1765),
        [sym_comment] = ACTIONS(79),
        [sym__newline] = ACTIONS(1765),
    },
    [840] = {
        [sym__expression] = STATE(861),
        [sym_binary_operator] = STATE(18),
        [sym_unary_operator] = STATE(18),
        [sym_subscript] = STATE(18),
        [sym_call] = STATE(18),
        [sym_list] = STATE(18),
        [sym_list_comprehension] = STATE(18),
        [sym_dictionary] = STATE(18),
        [sym_dictionary_comprehension] = STATE(18),
        [sym_set] = STATE(18),
        [sym_set_comprehension] = STATE(18),
        [anon_sym_not] = ACTIONS(2125),
        [anon_sym_LBRACK] = ACTIONS(117),
        [anon_sym_LBRACE] = ACTIONS(119),
        [sym_number] = ACTIONS(121),
        [sym_identifier] = ACTIONS(123),
        [sym_comment] = ACTIONS(79),
    },
    [841] = {
        [anon_sym_COMMA] = ACTIONS(2127),
        [anon_sym_RBRACK] = ACTIONS(2127),
        [sym_comment] = ACTIONS(79),
    },
    [842] = {
        [anon_sym_COMMA] = ACTIONS(2130),
        [anon_sym_as] = ACTIONS(2130),
        [anon_sym_COLON] = ACTIONS(2130),
        [anon_sym_for] = ACTIONS(2130),
        [anon_sym_in] = ACTIONS(2130),
        [anon_sym_LPAREN] = ACTIONS(2130),
        [anon_sym_RPAREN] = ACTIONS(2130),
        [anon_sym_STAR] = ACTIONS(2135),
        [anon_sym_PLUS] = ACTIONS(2130),
        [anon_sym_DASH] = ACTIONS(2130),
        [anon_sym_SLASH] = ACTIONS(2130),
        [anon_sym_STAR_STAR] = ACTIONS(2130),
        [anon_sym_PIPE] = ACTIONS(2130),
        [anon_sym_AMP] = ACTIONS(2130),
        [anon_sym_CARET] = ACTIONS(2130),
        [anon_sym_LT_LT] = ACTIONS(2130),
        [anon_sym_GT_GT] = ACTIONS(2130),
        [anon_sym_and] = ACTIONS(2130),
        [anon_sym_or] = ACTIONS(2130),
        [anon_sym_LBRACK] = ACTIONS(2130),
        [anon_sym_RBRACK] = ACTIONS(2130),
        [anon_sym_RBRACE] = ACTIONS(2130),
        [sym_comment] = ACTIONS(79),
        [sym__newline] = ACTIONS(2130),
    },
    [843] = {
        [anon_sym_COMMA] = ACTIONS(2140),
        [anon_sym_as] = ACTIONS(2140),
        [anon_sym_COLON] = ACTIONS(2140),
        [anon_sym_for] = ACTIONS(2140),
        [anon_sym_in] = ACTIONS(2140),
        [anon_sym_LPAREN] = ACTIONS(2140),
        [anon_sym_RPAREN] = ACTIONS(2140),
        [anon_sym_STAR] = ACTIONS(2145),
        [anon_sym_PLUS] = ACTIONS(2140),
        [anon_sym_DASH] = ACTIONS(2140),
        [anon_sym_SLASH] = ACTIONS(2140),
        [anon_sym_STAR_STAR] = ACTIONS(2140),
        [anon_sym_PIPE] = ACTIONS(2140),
        [anon_sym_AMP] = ACTIONS(2140),
        [anon_sym_CARET] = ACTIONS(2140),
        [anon_sym_LT_LT] = ACTIONS(2140),
        [anon_sym_GT_GT] = ACTIONS(2140),
        [anon_sym_and] = ACTIONS(2140),
        [anon_sym_or] = ACTIONS(2140),
        [anon_sym_LBRACK] = ACTIONS(2140),
        [anon_sym_RBRACK] = ACTIONS(2140),
        [anon_sym_RBRACE] = ACTIONS(2140),
        [sym_comment] = ACTIONS(79),
        [sym__newline] = ACTIONS(2140),
    },
    [844] = {
        [aux_sym_dotted_name_repeat1] = STATE(376),
        [anon_sym_COMMA] = ACTIONS(2150),
        [anon_sym_as] = ACTIONS(2150),
        [anon_sym_COLON] = ACTIONS(159),
        [anon_sym_in] = ACTIONS(159),
        [anon_sym_LPAREN] = ACTIONS(159),
        [anon_sym_RPAREN] = ACTIONS(159),
        [anon_sym_EQ] = ACTIONS(313),
        [anon_sym_STAR] = ACTIONS(161),
        [anon_sym_DOT] = ACTIONS(735),
        [anon_sym_PLUS] = ACTIONS(159),
        [anon_sym_DASH] = ACTIONS(159),
        [anon_sym_SLASH] = ACTIONS(159),
        [anon_sym_STAR_STAR] = ACTIONS(159),
        [anon_sym_PIPE] = ACTIONS(159),
        [anon_sym_AMP] = ACTIONS(159),
        [anon_sym_CARET] = ACTIONS(159),
        [anon_sym_LT_LT] = ACTIONS(159),
        [anon_sym_GT_GT] = ACTIONS(159),
        [anon_sym_and] = ACTIONS(159),
        [anon_sym_or] = ACTIONS(159),
        [anon_sym_LBRACK] = ACTIONS(159),
        [anon_sym_RBRACK] = ACTIONS(159),
        [anon_sym_RBRACE] = ACTIONS(159),
        [sym_comment] = ACTIONS(79),
        [sym__newline] = ACTIONS(2150),
    },
    [845] = {
        [anon_sym_COMMA] = ACTIONS(2153),
        [sym_comment] = ACTIONS(79),
        [sym__newline] = ACTIONS(2153),
    },
    [846] = {
        [anon_sym_COMMA] = ACTIONS(2156),
        [anon_sym_COLON] = ACTIONS(2156),
        [sym_comment] = ACTIONS(79),
    },
    [847] = {
        [anon_sym_COMMA] = ACTIONS(2153),
        [anon_sym_as] = ACTIONS(1201),
        [sym_comment] = ACTIONS(79),
        [sym__newline] = ACTIONS(2153),
    },
    [848] = {
        [anon_sym_COMMA] = ACTIONS(2159),
        [anon_sym_as] = ACTIONS(923),
        [anon_sym_COLON] = ACTIONS(2167),
        [anon_sym_in] = ACTIONS(2172),
        [anon_sym_LPAREN] = ACTIONS(187),
        [anon_sym_RPAREN] = ACTIONS(2175),
        [anon_sym_STAR] = ACTIONS(2180),
        [anon_sym_PLUS] = ACTIONS(2182),
        [anon_sym_DASH] = ACTIONS(2182),
        [anon_sym_SLASH] = ACTIONS(2182),
        [anon_sym_STAR_STAR] = ACTIONS(2182),
        [anon_sym_PIPE] = ACTIONS(2182),
        [anon_sym_AMP] = ACTIONS(2182),
        [anon_sym_CARET] = ACTIONS(2182),
        [anon_sym_LT_LT] = ACTIONS(2182),
        [anon_sym_GT_GT] = ACTIONS(2182),
        [anon_sym_and] = ACTIONS(2182),
        [anon_sym_or] = ACTIONS(2182),
        [anon_sym_LBRACK] = ACTIONS(203),
        [anon_sym_RBRACK] = ACTIONS(2184),
        [anon_sym_RBRACE] = ACTIONS(2172),
        [sym_comment] = ACTIONS(79),
        [sym__newline] = ACTIONS(2172),
    },
    [849] = {
        [anon_sym_COMMA] = ACTIONS(2189),
        [anon_sym_RPAREN] = ACTIONS(2189),
        [sym_comment] = ACTIONS(79),
    },
    [850] = {
        [anon_sym_RPAREN] = ACTIONS(2192),
        [sym_comment] = ACTIONS(79),
    },
    [851] = {
        [anon_sym_COMMA] = ACTIONS(2194),
        [anon_sym_RBRACE] = ACTIONS(2194),
        [sym_comment] = ACTIONS(79),
    },
    [852] = {
        [anon_sym_COMMA] = ACTIONS(2197),
        [anon_sym_as] = ACTIONS(2197),
        [anon_sym_COLON] = ACTIONS(2197),
        [anon_sym_for] = ACTIONS(2197),
        [anon_sym_in] = ACTIONS(2197),
        [anon_sym_LPAREN] = ACTIONS(2197),
        [anon_sym_RPAREN] = ACTIONS(2197),
        [anon_sym_STAR] = ACTIONS(2201),
        [anon_sym_PLUS] = ACTIONS(2197),
        [anon_sym_DASH] = ACTIONS(2197),
        [anon_sym_SLASH] = ACTIONS(2197),
        [anon_sym_STAR_STAR] = ACTIONS(2197),
        [anon_sym_PIPE] = ACTIONS(2197),
        [anon_sym_AMP] = ACTIONS(2197),
        [anon_sym_CARET] = ACTIONS(2197),
        [anon_sym_LT_LT] = ACTIONS(2197),
        [anon_sym_GT_GT] = ACTIONS(2197),
        [anon_sym_and] = ACTIONS(2197),
        [anon_sym_or] = ACTIONS(2197),
        [anon_sym_LBRACK] = ACTIONS(2197),
        [anon_sym_RBRACK] = ACTIONS(2197),
        [anon_sym_RBRACE] = ACTIONS(2197),
        [sym_comment] = ACTIONS(79),
        [sym__newline] = ACTIONS(2197),
    },
    [853] = {
        [sym__simple_statement] = STATE(704),
        [sym_import_statement] = STATE(6),
        [sym_print_statement] = STATE(6),
        [sym_expression_statement] = STATE(6),
        [sym_return_statement] = STATE(6),
        [sym_delete_statement] = STATE(6),
        [sym__suite] = STATE(764),
        [sym__expression] = STATE(857),
        [sym_binary_operator] = STATE(18),
        [sym_unary_operator] = STATE(18),
        [sym_subscript] = STATE(18),
        [sym_call] = STATE(18),
        [sym_list] = STATE(18),
        [sym_list_comprehension] = STATE(18),
        [sym_dictionary] = STATE(18),
        [sym_dictionary_comprehension] = STATE(18),
        [sym_set] = STATE(18),
        [sym_set_comprehension] = STATE(18),
        [anon_sym_import] = ACTIONS(89),
        [anon_sym_print] = ACTIONS(91),
        [anon_sym_return] = ACTIONS(93),
        [anon_sym_del] = ACTIONS(95),
        [sym_pass_statement] = ACTIONS(97),
        [sym_break_statement] = ACTIONS(97),
        [sym_continue_statement] = ACTIONS(97),
        [anon_sym_not] = ACTIONS(2205),
        [anon_sym_LBRACK] = ACTIONS(117),
        [anon_sym_LBRACE] = ACTIONS(119),
        [sym_number] = ACTIONS(121),
        [sym_identifier] = ACTIONS(123),
        [sym_comment] = ACTIONS(79),
        [sym__indent] = ACTIONS(1264),
    },
    [854] = {
        [sym__expression] = STATE(855),
        [sym_binary_operator] = STATE(18),
        [sym_unary_operator] = STATE(18),
        [sym_subscript] = STATE(18),
        [sym_call] = STATE(18),
        [sym_list] = STATE(18),
        [sym_list_comprehension] = STATE(18),
        [sym_dictionary] = STATE(18),
        [sym_dictionary_comprehension] = STATE(18),
        [sym_set] = STATE(18),
        [sym_set_comprehension] = STATE(18),
        [anon_sym_not] = ACTIONS(2125),
        [anon_sym_LBRACK] = ACTIONS(117),
        [anon_sym_LBRACE] = ACTIONS(119),
        [sym_number] = ACTIONS(121),
        [sym_identifier] = ACTIONS(123),
        [sym_comment] = ACTIONS(79),
    },
    [855] = {
        [anon_sym_COMMA] = ACTIONS(307),
        [anon_sym_as] = ACTIONS(307),
        [anon_sym_COLON] = ACTIONS(307),
        [anon_sym_in] = ACTIONS(307),
        [anon_sym_LPAREN] = ACTIONS(1785),
        [anon_sym_RPAREN] = ACTIONS(307),
        [anon_sym_STAR] = ACTIONS(2207),
        [anon_sym_PLUS] = ACTIONS(2210),
        [anon_sym_DASH] = ACTIONS(2210),
        [anon_sym_SLASH] = ACTIONS(2210),
        [anon_sym_STAR_STAR] = ACTIONS(2210),
        [anon_sym_PIPE] = ACTIONS(2210),
        [anon_sym_AMP] = ACTIONS(2210),
        [anon_sym_CARET] = ACTIONS(2210),
        [anon_sym_LT_LT] = ACTIONS(2210),
        [anon_sym_GT_GT] = ACTIONS(2210),
        [anon_sym_and] = ACTIONS(2210),
        [anon_sym_or] = ACTIONS(2210),
        [anon_sym_LBRACK] = ACTIONS(1794),
        [anon_sym_RBRACK] = ACTIONS(307),
        [anon_sym_RBRACE] = ACTIONS(307),
        [sym_comment] = ACTIONS(79),
        [sym__newline] = ACTIONS(307),
    },
    [856] = {
        [sym__expression] = STATE(860),
        [sym_binary_operator] = STATE(18),
        [sym_unary_operator] = STATE(18),
        [sym_subscript] = STATE(18),
        [sym_call] = STATE(18),
        [sym_list] = STATE(18),
        [sym_list_comprehension] = STATE(18),
        [sym_dictionary] = STATE(18),
        [sym_dictionary_comprehension] = STATE(18),
        [sym_set] = STATE(18),
        [sym_set_comprehension] = STATE(18),
        [anon_sym_not] = ACTIONS(2205),
        [anon_sym_LBRACK] = ACTIONS(117),
        [anon_sym_LBRACE] = ACTIONS(119),
        [sym_number] = ACTIONS(121),
        [sym_identifier] = ACTIONS(123),
        [sym_comment] = ACTIONS(79),
    },
    [857] = {
        [anon_sym_COMMA] = ACTIONS(459),
        [anon_sym_LPAREN] = ACTIONS(187),
        [anon_sym_STAR] = ACTIONS(2213),
        [anon_sym_PLUS] = ACTIONS(2215),
        [anon_sym_DASH] = ACTIONS(2215),
        [anon_sym_SLASH] = ACTIONS(2215),
        [anon_sym_STAR_STAR] = ACTIONS(2215),
        [anon_sym_PIPE] = ACTIONS(2215),
        [anon_sym_AMP] = ACTIONS(2215),
        [anon_sym_CARET] = ACTIONS(2215),
        [anon_sym_LT_LT] = ACTIONS(2215),
        [anon_sym_GT_GT] = ACTIONS(2215),
        [anon_sym_and] = ACTIONS(2215),
        [anon_sym_or] = ACTIONS(2215),
        [anon_sym_LBRACK] = ACTIONS(203),
        [anon_sym_RBRACE] = ACTIONS(459),
        [sym_comment] = ACTIONS(79),
        [sym__newline] = ACTIONS(205),
    },
    [858] = {
        [sym__expression] = STATE(859),
        [sym_binary_operator] = STATE(18),
        [sym_unary_operator] = STATE(18),
        [sym_subscript] = STATE(18),
        [sym_call] = STATE(18),
        [sym_list] = STATE(18),
        [sym_list_comprehension] = STATE(18),
        [sym_dictionary] = STATE(18),
        [sym_dictionary_comprehension] = STATE(18),
        [sym_set] = STATE(18),
        [sym_set_comprehension] = STATE(18),
        [anon_sym_not] = ACTIONS(2205),
        [anon_sym_LBRACK] = ACTIONS(117),
        [anon_sym_LBRACE] = ACTIONS(119),
        [sym_number] = ACTIONS(121),
        [sym_identifier] = ACTIONS(123),
        [sym_comment] = ACTIONS(79),
    },
    [859] = {
        [anon_sym_COMMA] = ACTIONS(307),
        [anon_sym_LPAREN] = ACTIONS(1785),
        [anon_sym_STAR] = ACTIONS(2217),
        [anon_sym_PLUS] = ACTIONS(2220),
        [anon_sym_DASH] = ACTIONS(2220),
        [anon_sym_SLASH] = ACTIONS(2220),
        [anon_sym_STAR_STAR] = ACTIONS(2220),
        [anon_sym_PIPE] = ACTIONS(2220),
        [anon_sym_AMP] = ACTIONS(2220),
        [anon_sym_CARET] = ACTIONS(2220),
        [anon_sym_LT_LT] = ACTIONS(2220),
        [anon_sym_GT_GT] = ACTIONS(2220),
        [anon_sym_and] = ACTIONS(2220),
        [anon_sym_or] = ACTIONS(2220),
        [anon_sym_LBRACK] = ACTIONS(1794),
        [anon_sym_RBRACE] = ACTIONS(307),
        [sym_comment] = ACTIONS(79),
        [sym__newline] = ACTIONS(307),
    },
    [860] = {
        [anon_sym_COMMA] = ACTIONS(635),
        [anon_sym_LPAREN] = ACTIONS(1797),
        [anon_sym_STAR] = ACTIONS(2223),
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
        [anon_sym_LBRACK] = ACTIONS(1806),
        [anon_sym_RBRACE] = ACTIONS(635),
        [sym_comment] = ACTIONS(79),
        [sym__newline] = ACTIONS(635),
    },
    [861] = {
        [anon_sym_COMMA] = ACTIONS(635),
        [anon_sym_as] = ACTIONS(635),
        [anon_sym_COLON] = ACTIONS(635),
        [anon_sym_in] = ACTIONS(635),
        [anon_sym_LPAREN] = ACTIONS(1797),
        [anon_sym_RPAREN] = ACTIONS(635),
        [anon_sym_STAR] = ACTIONS(2229),
        [anon_sym_PLUS] = ACTIONS(2232),
        [anon_sym_DASH] = ACTIONS(2232),
        [anon_sym_SLASH] = ACTIONS(2232),
        [anon_sym_STAR_STAR] = ACTIONS(2232),
        [anon_sym_PIPE] = ACTIONS(2232),
        [anon_sym_AMP] = ACTIONS(2232),
        [anon_sym_CARET] = ACTIONS(2232),
        [anon_sym_LT_LT] = ACTIONS(2232),
        [anon_sym_GT_GT] = ACTIONS(2232),
        [anon_sym_and] = ACTIONS(2232),
        [anon_sym_or] = ACTIONS(2232),
        [anon_sym_LBRACK] = ACTIONS(1806),
        [anon_sym_RBRACK] = ACTIONS(635),
        [anon_sym_RBRACE] = ACTIONS(635),
        [sym_comment] = ACTIONS(79),
        [sym__newline] = ACTIONS(635),
    },
};

static TSParseActionEntry ts_parse_actions[] = {
    [0] = {.count = 0, .reusable = false, .depends_on_lookahead = false},
    [1] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(0),
    [3] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(30),
    [5] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(2),
    [7] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(636),
    [9] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(637),
    [11] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(3),
    [13] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(4),
    [15] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(5),
    [17] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(6),
    [19] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(638),
    [21] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(639),
    [23] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(640),
    [25] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(641),
    [27] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(642),
    [29] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(643),
    [31] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(644),
    [33] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(645),
    [35] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(646),
    [37] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(647),
    [39] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(648),
    [41] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(649),
    [43] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(650),
    [45] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(651),
    [47] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(652),
    [49] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(653),
    [51] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(654),
    [53] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(14),
    [55] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(655),
    [57] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(656),
    [59] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(657),
    [61] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(656),
    [63] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(658),
    [65] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(659),
    [67] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(660),
    [69] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(661),
    [71] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(17),
    [73] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(662),
    [75] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(18),
    [77] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, RECOVER(663),
    [79] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT_EXTRA(),
    [81] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(664),
    [83] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(665),
    [85] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(666),
    [87] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_module, 0),
    [89] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(2),
    [91] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(3),
    [93] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(4),
    [95] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(5),
    [97] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(6),
    [99] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(7),
    [101] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(8),
    [103] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(9),
    [105] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(10),
    [107] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(11),
    [109] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(12),
    [111] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(13),
    [113] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(14),
    [115] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(15),
    [117] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(16),
    [119] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(17),
    [121] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(18),
    [123] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(18),
    [125] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(361),
    [127] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(603),
    [129] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__simple_statement, 1),
    [131] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(134),
    [133] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(41),
    [135] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(43),
    [137] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(44),
    [139] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(44),
    [141] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(163),
    [143] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(558),
    [145] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(454),
    [147] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(548),
    [149] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(380),
    [151] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(236),
    [153] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(347),
    [155] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(124),
    [157] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(322),
    [159] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__expression, 1),
    [161] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__expression, 1),
    [163] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, ACCEPT_INPUT(),
    [165] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_module_repeat1, 1),
    [167] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_module_repeat1, 1),
    [169] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_module_repeat1, 1),
    [171] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(321),
    [173] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__statement, 1),
    [175] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__statement, 1),
    [177] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__statement, 1),
    [179] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__compound_statement, 1),
    [181] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__compound_statement, 1),
    [183] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__compound_statement, 1),
    [185] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_decorated_definition_repeat1, 1),
    [187] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(32),
    [189] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(33),
    [191] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(34),
    [193] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(33),
    [195] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(35),
    [197] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(36),
    [199] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(37),
    [201] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(38),
    [203] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(39),
    [205] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_expression_statement, 1),
    [207] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_module, 1),
    [209] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(30),
    [211] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(12),
    [213] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(13),
    [215] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_decorated_definition, 2),
    [217] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_decorated_definition, 2),
    [219] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_decorated_definition, 2),
    [221] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_decorated_definition_repeat1, 2),
    [223] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_module, 2),
    [225] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_module_repeat1, 2),
    [227] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_module_repeat1, 2),
    [229] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_module_repeat1, 2),
    [231] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(78),
    [233] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(79),
    [235] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(80),
    [237] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(81),
    [239] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(40),
    [241] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(42),
    [243] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(237),
    [245] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(46),
    [247] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(55),
    [249] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(125),
    [251] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(47),
    [253] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(48),
    [255] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(49),
    [257] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(48),
    [259] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(50),
    [261] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(51),
    [263] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(52),
    [265] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(53),
    [267] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(54),
    [269] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(70),
    [271] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(58),
    [273] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(62),
    [275] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_subscript, 4),
    [277] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_subscript, 4),
    [279] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(57),
    [281] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(59),
    [283] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(60),
    [285] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_subscript, 5),
    [287] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_subscript, 5),
    [289] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_subscript_repeat1, 3),
    [291] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_subscript, 6),
    [293] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_subscript, 6),
    [295] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(64),
    [297] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(65),
    [299] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(68),
    [301] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(67),
    [303] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(69),
    [305] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_subscript_repeat1, 2),
    [307] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE_FRAGILE(sym_binary_operator, 3),
    [309] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE_FRAGILE(sym_binary_operator, 3),
    [311] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(276),
    [313] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(122),
    [315] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(121),
    [317] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(116),
    [319] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(100),
    [321] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(101),
    [323] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(100),
    [325] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(102),
    [327] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(103),
    [329] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(104),
    [331] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(105),
    [333] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(117),
    [335] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(115),
    [337] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(91),
    [339] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(92),
    [341] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_call, 5),
    [343] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_call, 5),
    [345] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(94),
    [347] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(95),
    [349] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_call, 6),
    [351] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_call, 6),
    [353] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_call_repeat2, 3),
    [355] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(99),
    [357] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_call, 8),
    [359] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_call, 8),
    [361] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_call_repeat2, 2),
    [363] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(114),
    [365] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_call, 7),
    [367] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_call, 7),
    [369] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_call_repeat1, 3),
    [371] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_call_repeat1, 3),
    [373] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_call_repeat1, 3),
    [375] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_call, 4),
    [377] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_call, 4),
    [379] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(119),
    [381] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_call_repeat1, 2),
    [383] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_call_repeat1, 2),
    [385] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_call_repeat1, 2),
    [387] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_keyword_argument, 3),
    [389] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_dictionary, 2),
    [391] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_dictionary, 2),
    [393] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(198),
    [395] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(199),
    [397] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(200),
    [399] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(201),
    [401] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(202),
    [403] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(201),
    [405] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(203),
    [407] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(204),
    [409] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(205),
    [411] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(206),
    [413] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(207),
    [415] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(128),
    [417] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(129),
    [419] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(130),
    [421] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(133),
    [423] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_dictionary, 3),
    [425] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_dictionary, 3),
    [427] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(132),
    [429] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(135),
    [431] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_dictionary, 4),
    [433] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_dictionary, 4),
    [435] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_dictionary, 5),
    [437] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_dictionary, 5),
    [439] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(138),
    [441] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(139),
    [443] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(140),
    [445] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(139),
    [447] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(141),
    [449] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(142),
    [451] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(143),
    [453] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(144),
    [455] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_dictionary_repeat1, 3),
    [457] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(150),
    [459] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_pair, 3),
    [461] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(152),
    [463] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(153),
    [465] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(152),
    [467] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(154),
    [469] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(155),
    [471] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(156),
    [473] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(157),
    [475] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(182),
    [477] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(166),
    [479] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_expression_list, 1),
    [481] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(167),
    [483] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(168),
    [485] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(167),
    [487] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(169),
    [489] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(170),
    [491] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(171),
    [493] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(172),
    [495] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(174),
    [497] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_expression_list, 2),
    [499] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_print_statement_repeat1, 3),
    [501] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_print_statement_repeat1, 2),
    [503] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(183),
    [505] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(185),
    [507] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(186),
    [509] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(185),
    [511] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(187),
    [513] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(188),
    [515] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(189),
    [517] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(190),
    [519] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(191),
    [521] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_dictionary_comprehension, 7),
    [523] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_dictionary_comprehension, 7),
    [525] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_dictionary_repeat1, 2),
    [527] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(210),
    [529] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(222),
    [531] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_set, 3),
    [533] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_set, 3),
    [535] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(209),
    [537] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(211),
    [539] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_set, 4),
    [541] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_set, 4),
    [543] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_set, 5),
    [545] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_set, 5),
    [547] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(219),
    [549] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(221),
    [551] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_set_comprehension, 7),
    [553] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_set_comprehension, 7),
    [555] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(224),
    [557] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(225),
    [559] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(224),
    [561] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(226),
    [563] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(227),
    [565] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(228),
    [567] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(229),
    [569] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_list, 2),
    [571] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_list, 2),
    [573] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(239),
    [575] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(240),
    [577] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(241),
    [579] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(242),
    [581] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(241),
    [583] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(243),
    [585] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(244),
    [587] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(245),
    [589] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(246),
    [591] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(247),
    [593] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(250),
    [595] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_list, 3),
    [597] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_list, 3),
    [599] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(249),
    [601] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(251),
    [603] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_list, 4),
    [605] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_list, 4),
    [607] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_list, 5),
    [609] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_list, 5),
    [611] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(259),
    [613] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(260),
    [615] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(262),
    [617] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(263),
    [619] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(262),
    [621] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(264),
    [623] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(265),
    [625] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(266),
    [627] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(267),
    [629] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(268),
    [631] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_list_comprehension, 7),
    [633] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_list_comprehension, 7),
    [635] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE_FRAGILE(sym_unary_operator, 2),
    [637] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE_FRAGILE(sym_unary_operator, 2),
    [639] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_dictionary_splat_argument, 2),
    [641] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(278),
    [643] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(279),
    [645] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(278),
    [647] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(280),
    [649] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(281),
    [651] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(282),
    [653] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(283),
    [655] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_list_splat_argument, 2),
    [657] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(320),
    [659] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(315),
    [661] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(316),
    [663] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(314),
    [665] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(305),
    [667] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(306),
    [669] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(308),
    [671] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(309),
    [673] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(311),
    [675] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(313),
    [677] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(318),
    [679] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__statement, 2),
    [681] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__statement, 2),
    [683] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__statement, 2),
    [685] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(336),
    [687] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(337),
    [689] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(338),
    [691] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(325),
    [693] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(326),
    [695] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(327),
    [697] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(330),
    [699] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(329),
    [701] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(331),
    [703] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(333),
    [705] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(335),
    [707] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(341),
    [709] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(340),
    [711] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(342),
    [713] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(344),
    [715] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(346),
    [717] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(349),
    [719] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(350),
    [721] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(351),
    [723] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(354),
    [725] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(353),
    [727] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(355),
    [729] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(357),
    [731] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(359),
    [733] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_dotted_name, 1),
    [735] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(375),
    [737] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(363),
    [739] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(364),
    [741] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_decorator, 3),
    [743] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(366),
    [745] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_decorator, 4),
    [747] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(368),
    [749] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(369),
    [751] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_arguments, 3),
    [753] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(371),
    [755] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(372),
    [757] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_arguments, 4),
    [759] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(379),
    [761] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_dotted_name, 2),
    [763] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(377),
    [765] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(378),
    [767] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_dotted_name_repeat1, 3),
    [769] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_dotted_name_repeat1, 2),
    [771] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(381),
    [773] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(382),
    [775] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(388),
    [777] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(386),
    [779] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(387),
    [781] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(392),
    [783] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(393),
    [785] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(394),
    [787] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(395),
    [789] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(396),
    [791] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(397),
    [793] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(398),
    [795] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(391),
    [797] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_class_definition, 7),
    [799] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_class_definition, 7),
    [801] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_class_definition, 7),
    [803] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__suite, 2),
    [805] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__suite, 2),
    [807] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__suite, 2),
    [809] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(491),
    [811] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(422),
    [813] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(409),
    [815] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(408),
    [817] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(406),
    [819] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(397),
    [821] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(398),
    [823] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__suite, 3),
    [825] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__suite, 3),
    [827] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__suite, 3),
    [829] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(410),
    [831] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(411),
    [833] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(415),
    [835] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(413),
    [837] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(414),
    [839] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(418),
    [841] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(420),
    [843] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_class_definition, 4),
    [845] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_class_definition, 4),
    [847] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_class_definition, 4),
    [849] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(423),
    [851] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(427),
    [853] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(428),
    [855] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(429),
    [857] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(425),
    [859] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_function_definition, 5),
    [861] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_function_definition, 5),
    [863] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_function_definition, 5),
    [865] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_parameters, 2),
    [867] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(443),
    [869] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(453),
    [871] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(452),
    [873] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(449),
    [875] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(447),
    [877] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(450),
    [879] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(434),
    [881] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(445),
    [883] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(438),
    [885] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(439),
    [887] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_parameters, 4),
    [889] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(440),
    [891] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(442),
    [893] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_parameters, 6),
    [895] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(444),
    [897] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_dictionary_splat_parameter, 3),
    [899] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(446),
    [901] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_parameters_repeat1, 3),
    [903] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_parameters_repeat1, 3),
    [905] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_parameters, 5),
    [907] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_default_parameter, 3),
    [909] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_parameters, 3),
    [911] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_parameters_repeat1, 2),
    [913] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_parameters_repeat1, 2),
    [915] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_list_splat_parameter, 2),
    [917] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(482),
    [919] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(483),
    [921] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_with_item, 1),
    [923] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(457),
    [925] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(458),
    [927] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(459),
    [929] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(458),
    [931] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(460),
    [933] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(461),
    [935] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(462),
    [937] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(463),
    [939] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(469),
    [941] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_with_item, 3),
    [943] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(471),
    [945] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(472),
    [947] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(471),
    [949] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(473),
    [951] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(474),
    [953] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(475),
    [955] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(476),
    [957] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(485),
    [959] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(486),
    [961] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_with_statement, 5),
    [963] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_with_statement, 5),
    [965] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_with_statement, 5),
    [967] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_with_statement_repeat1, 3),
    [969] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_with_statement, 4),
    [971] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_with_statement, 4),
    [973] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_with_statement, 4),
    [975] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_with_statement_repeat1, 2),
    [977] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(492),
    [979] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(516),
    [981] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(495),
    [983] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(496),
    [985] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(507),
    [987] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_try_statement_repeat1, 1),
    [989] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_try_statement_repeat1, 1),
    [991] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_try_statement_repeat1, 1),
    [993] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_try_statement, 4),
    [995] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_try_statement, 4),
    [997] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_try_statement, 4),
    [999] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(500),
    [1001] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(495),
    [1003] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(496),
    [1005] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(505),
    [1007] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_try_statement, 5),
    [1009] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_try_statement, 5),
    [1011] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_try_statement, 5),
    [1013] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_try_statement_repeat1, 2),
    [1015] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_try_statement_repeat1, 2),
    [1017] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_try_statement_repeat1, 2),
    [1019] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_try_statement, 6),
    [1021] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_try_statement, 6),
    [1023] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_try_statement, 6),
    [1025] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_else_clause, 3),
    [1027] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_else_clause, 3),
    [1029] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_else_clause, 3),
    [1031] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_finally_clause, 3),
    [1033] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_finally_clause, 3),
    [1035] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_finally_clause, 3),
    [1037] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(510),
    [1039] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(511),
    [1041] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_except_clause, 4),
    [1043] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_except_clause, 4),
    [1045] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_except_clause, 4),
    [1047] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(514),
    [1049] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_except_clause, 6),
    [1051] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_except_clause, 6),
    [1053] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_except_clause, 6),
    [1055] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(518),
    [1057] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(520),
    [1059] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_while_statement, 4),
    [1061] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_while_statement, 4),
    [1063] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_while_statement, 4),
    [1065] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_while_statement, 5),
    [1067] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_while_statement, 5),
    [1069] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_while_statement, 5),
    [1071] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(524),
    [1073] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(532),
    [1075] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(527),
    [1077] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(529),
    [1079] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_for_statement, 6),
    [1081] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_for_statement, 6),
    [1083] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_for_statement, 6),
    [1085] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_for_statement, 7),
    [1087] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_for_statement, 7),
    [1089] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_for_statement, 7),
    [1091] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(536),
    [1093] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_if_statement, 4),
    [1095] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(538),
    [1097] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_if_statement, 4),
    [1099] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_if_statement, 4),
    [1101] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_if_statement_repeat1, 1),
    [1103] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_if_statement_repeat1, 1),
    [1105] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_if_statement_repeat1, 1),
    [1107] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_if_statement, 5),
    [1109] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_if_statement, 5),
    [1111] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_if_statement, 5),
    [1113] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_if_statement_repeat1, 2),
    [1115] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_if_statement_repeat1, 2),
    [1117] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_if_statement_repeat1, 2),
    [1119] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_if_statement, 6),
    [1121] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_if_statement, 6),
    [1123] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_if_statement, 6),
    [1125] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(545),
    [1127] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_elif_clause, 4),
    [1129] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_elif_clause, 4),
    [1131] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_elif_clause, 4),
    [1133] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(550),
    [1135] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(553),
    [1137] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(555),
    [1139] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(560),
    [1141] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(561),
    [1143] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(572),
    [1145] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(565),
    [1147] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(560),
    [1149] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(561),
    [1151] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(570),
    [1153] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(575),
    [1155] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(576),
    [1157] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(579),
    [1159] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(582),
    [1161] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(586),
    [1163] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(588),
    [1165] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(592),
    [1167] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(594),
    [1169] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(601),
    [1171] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_delete_statement, 2),
    [1173] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(606),
    [1175] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(607),
    [1177] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(608),
    [1179] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(607),
    [1181] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(609),
    [1183] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(610),
    [1185] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(611),
    [1187] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(612),
    [1189] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(614),
    [1191] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_return_statement, 2),
    [1193] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_print_statement, 2),
    [1195] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_print_statement, 3),
    [1197] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(627),
    [1199] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_import_statement, 2),
    [1201] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(628),
    [1203] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_import_statement, 3),
    [1205] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(633),
    [1207] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(630),
    [1209] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_import_statement, 4),
    [1211] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_import_statement_repeat1, 3),
    [1213] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_aliased_import, 3),
    [1215] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_import_statement_repeat1, 2),
    [1217] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(839),
    [1219] = {.count = 5, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_parameters_repeat1, 2), REDUCE(aux_sym_call_repeat1, 2), REDUCE(aux_sym_parameters_repeat1, 3), REDUCE(aux_sym_call_repeat1, 3), SHIFT(440),
    [1225] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_call_repeat1, 2), REDUCE(aux_sym_call_repeat1, 3), SHIFT(79),
    [1229] = {.count = 3, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_call_repeat1, 2), REDUCE(aux_sym_call_repeat1, 3), SHIFT(840),
    [1233] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_call_repeat1, 2), REDUCE(aux_sym_call_repeat1, 3), SHIFT(16),
    [1237] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(841),
    [1239] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(842),
    [1241] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_call_repeat1, 2), REDUCE(aux_sym_call_repeat1, 3), SHIFT(17),
    [1245] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(843),
    [1247] = {.count = 3, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_call_repeat1, 2), REDUCE(aux_sym_call_repeat1, 3), SHIFT(18),
    [1251] = {.count = 5, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_parameters_repeat1, 2), REDUCE(aux_sym_call_repeat1, 2), REDUCE(aux_sym_parameters_repeat1, 3), REDUCE(aux_sym_call_repeat1, 3), SHIFT(844),
    [1257] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_import_statement, 3), REDUCE(sym_import_statement, 4),
    [1260] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(838),
    [1262] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(754),
    [1264] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(665),
    [1266] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(715),
    [1268] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(824),
    [1270] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(818),
    [1272] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(811),
    [1274] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(809),
    [1276] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(802),
    [1278] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(803),
    [1280] = {.count = 5, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_call, 4), REDUCE(sym_call, 5), REDUCE(sym_call, 6), REDUCE(sym_call, 7), REDUCE(sym_call, 8),
    [1286] = {.count = 11, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_parameters, 2), REDUCE(sym_parameters, 3), REDUCE(sym_parameters, 4), REDUCE(sym_call, 4), REDUCE(sym_parameters, 5), REDUCE(sym_call, 5), REDUCE(sym_parameters, 6), REDUCE(sym_call, 6), REDUCE(sym_call, 7), REDUCE(sym_call, 8), SHIFT(768),
    [1298] = {.count = 5, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_call, 4), REDUCE(sym_call, 5), REDUCE(sym_call, 6), REDUCE(sym_call, 7), REDUCE(sym_call, 8),
    [1304] = {.count = 7, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_arguments, 3), REDUCE(sym_arguments, 4), REDUCE(sym_call, 4), REDUCE(sym_call, 5), REDUCE(sym_call, 6), REDUCE(sym_call, 7), REDUCE(sym_call, 8),
    [1312] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(658),
    [1314] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(799),
    [1316] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(797),
    [1318] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(796),
    [1320] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_subscript_repeat1, 2), REDUCE(aux_sym_subscript_repeat1, 3), SHIFT(46),
    [1324] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_subscript_repeat1, 2), REDUCE(aux_sym_subscript_repeat1, 3), SHIFT(55),
    [1328] = {.count = 8, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_list, 2), REDUCE(sym_list, 3), REDUCE(sym_subscript, 4), REDUCE(sym_list, 4), REDUCE(sym_subscript, 5), REDUCE(sym_list, 5), REDUCE(sym_subscript, 6), REDUCE(sym_list_comprehension, 7),
    [1337] = {.count = 8, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_list, 2), REDUCE(sym_list, 3), REDUCE(sym_subscript, 4), REDUCE(sym_list, 4), REDUCE(sym_subscript, 5), REDUCE(sym_list, 5), REDUCE(sym_subscript, 6), REDUCE(sym_list_comprehension, 7),
    [1346] = {.count = 9, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_dictionary, 2), REDUCE(sym_dictionary, 3), REDUCE(sym_set, 3), REDUCE(sym_dictionary, 4), REDUCE(sym_set, 4), REDUCE(sym_dictionary, 5), REDUCE(sym_set, 5), REDUCE(sym_dictionary_comprehension, 7), REDUCE(sym_set_comprehension, 7),
    [1356] = {.count = 9, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_dictionary, 2), REDUCE(sym_dictionary, 3), REDUCE(sym_set, 3), REDUCE(sym_dictionary, 4), REDUCE(sym_set, 4), REDUCE(sym_dictionary, 5), REDUCE(sym_set, 5), REDUCE(sym_dictionary_comprehension, 7), REDUCE(sym_set_comprehension, 7),
    [1366] = {.count = 7, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_dotted_name, 1), REDUCE(sym__expression, 1), REDUCE(sym_list_splat_parameter, 2), REDUCE(aux_sym_dotted_name_repeat1, 2), REDUCE(sym_aliased_import, 3), REDUCE(aux_sym_dotted_name_repeat1, 3), SHIFT(778),
    [1374] = {.count = 4, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_dotted_name, 1), REDUCE(sym__expression, 1), REDUCE(aux_sym_dotted_name_repeat1, 2), REDUCE(aux_sym_dotted_name_repeat1, 3),
    [1379] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__expression, 1), SHIFT(785),
    [1382] = {.count = 5, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_dotted_name, 1), REDUCE(sym__expression, 1), REDUCE(aux_sym_dotted_name_repeat1, 2), REDUCE(aux_sym_dotted_name_repeat1, 3), SHIFT(786),
    [1388] = {.count = 4, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__expression, 1), REDUCE(sym_list_splat_parameter, 2), REDUCE(sym_dictionary_splat_parameter, 3), SHIFT(775),
    [1393] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(652),
    [1395] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_dotted_name_repeat1, 2), REDUCE(aux_sym_dotted_name_repeat1, 3), SHIFT(375),
    [1399] = {.count = 5, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_dotted_name, 1), REDUCE(sym__expression, 1), REDUCE(aux_sym_dotted_name_repeat1, 2), REDUCE(sym_aliased_import, 3), REDUCE(aux_sym_dotted_name_repeat1, 3),
    [1405] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_module, 2), REDUCE(sym__statement, 2), REDUCE(sym__suite, 2),
    [1409] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__statement, 2), REDUCE(sym__suite, 2),
    [1412] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__statement, 2), REDUCE(sym__suite, 2),
    [1415] = {.count = 4, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__statement, 2), REDUCE(sym__suite, 2), REDUCE(sym_decorator, 3), REDUCE(sym_decorator, 4),
    [1420] = {.count = 4, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__statement, 2), REDUCE(sym__suite, 2), REDUCE(sym_decorator, 3), REDUCE(sym_decorator, 4),
    [1425] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__statement, 2), REDUCE(sym__suite, 2),
    [1428] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(706),
    [1430] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__suite, 2), REDUCE(sym__suite, 3),
    [1433] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__suite, 2), REDUCE(sym__suite, 3),
    [1436] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__suite, 2), REDUCE(sym__suite, 3),
    [1439] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_module_repeat1, 1), REDUCE(aux_sym_module_repeat1, 2),
    [1442] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_module_repeat1, 1), REDUCE(aux_sym_module_repeat1, 2),
    [1445] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_module_repeat1, 1), REDUCE(aux_sym_module_repeat1, 2),
    [1448] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(784),
    [1450] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_import_statement_repeat1, 2), REDUCE(aux_sym_import_statement_repeat1, 3), SHIFT(627),
    [1454] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_import_statement, 2), REDUCE(aux_sym_import_statement_repeat1, 2), REDUCE(aux_sym_import_statement_repeat1, 3),
    [1458] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_if_statement_repeat1, 1), REDUCE(aux_sym_if_statement_repeat1, 2),
    [1461] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_if_statement_repeat1, 1), REDUCE(aux_sym_if_statement_repeat1, 2),
    [1464] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_if_statement_repeat1, 1), REDUCE(aux_sym_if_statement_repeat1, 2),
    [1467] = {.count = 5, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_if_statement, 5), REDUCE(sym_while_statement, 5), REDUCE(sym_try_statement, 5), REDUCE(sym_if_statement, 6), REDUCE(sym_for_statement, 7),
    [1473] = {.count = 5, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_if_statement, 5), REDUCE(sym_while_statement, 5), REDUCE(sym_try_statement, 5), REDUCE(sym_if_statement, 6), REDUCE(sym_for_statement, 7),
    [1479] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(647),
    [1481] = {.count = 5, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_if_statement, 5), REDUCE(sym_while_statement, 5), REDUCE(sym_try_statement, 5), REDUCE(sym_if_statement, 6), REDUCE(sym_for_statement, 7),
    [1487] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_try_statement_repeat1, 1), REDUCE(aux_sym_try_statement_repeat1, 2),
    [1490] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_try_statement_repeat1, 1), REDUCE(aux_sym_try_statement_repeat1, 2),
    [1493] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_try_statement_repeat1, 1), REDUCE(aux_sym_try_statement_repeat1, 2),
    [1496] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_try_statement, 4), REDUCE(sym_try_statement, 5), REDUCE(sym_try_statement, 6),
    [1500] = {.count = 3, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_try_statement, 4), REDUCE(sym_try_statement, 5), REDUCE(sym_try_statement, 6),
    [1504] = {.count = 3, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_try_statement, 4), REDUCE(sym_try_statement, 5), REDUCE(sym_try_statement, 6),
    [1508] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_with_statement_repeat1, 2), REDUCE(aux_sym_with_statement_repeat1, 3), SHIFT(482),
    [1512] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_with_statement_repeat1, 2), REDUCE(aux_sym_with_statement_repeat1, 3), SHIFT(782),
    [1516] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__compound_statement, 1), REDUCE(sym_decorated_definition, 2),
    [1519] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__compound_statement, 1), REDUCE(sym_decorated_definition, 2),
    [1522] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__compound_statement, 1), REDUCE(sym_decorated_definition, 2),
    [1525] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(780),
    [1527] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(778),
    [1529] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(775),
    [1531] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(774),
    [1533] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(773),
    [1535] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_decorated_definition_repeat1, 1), REDUCE(aux_sym_decorated_definition_repeat1, 2),
    [1538] = {.count = 13, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_else_clause, 3), REDUCE(sym_finally_clause, 3), REDUCE(sym_if_statement, 4), REDUCE(sym_elif_clause, 4), REDUCE(sym_while_statement, 4), REDUCE(sym_except_clause, 4), REDUCE(sym_with_statement, 4), REDUCE(sym_class_definition, 4), REDUCE(sym_with_statement, 5), REDUCE(sym_function_definition, 5), REDUCE(sym_for_statement, 6), REDUCE(sym_except_clause, 6), REDUCE(sym_class_definition, 7),
    [1552] = {.count = 13, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_else_clause, 3), REDUCE(sym_finally_clause, 3), REDUCE(sym_if_statement, 4), REDUCE(sym_elif_clause, 4), REDUCE(sym_while_statement, 4), REDUCE(sym_except_clause, 4), REDUCE(sym_with_statement, 4), REDUCE(sym_class_definition, 4), REDUCE(sym_with_statement, 5), REDUCE(sym_function_definition, 5), REDUCE(sym_for_statement, 6), REDUCE(sym_except_clause, 6), REDUCE(sym_class_definition, 7),
    [1566] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_elif_clause, 4), SHIFT(640),
    [1569] = {.count = 4, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_elif_clause, 4), REDUCE(sym_except_clause, 4), REDUCE(sym_except_clause, 6), SHIFT(641),
    [1574] = {.count = 3, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_except_clause, 4), REDUCE(sym_except_clause, 6), SHIFT(646),
    [1578] = {.count = 4, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_else_clause, 3), REDUCE(sym_except_clause, 4), REDUCE(sym_except_clause, 6), SHIFT(647),
    [1583] = {.count = 13, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_else_clause, 3), REDUCE(sym_finally_clause, 3), REDUCE(sym_if_statement, 4), REDUCE(sym_elif_clause, 4), REDUCE(sym_while_statement, 4), REDUCE(sym_except_clause, 4), REDUCE(sym_with_statement, 4), REDUCE(sym_class_definition, 4), REDUCE(sym_with_statement, 5), REDUCE(sym_function_definition, 5), REDUCE(sym_for_statement, 6), REDUCE(sym_except_clause, 6), REDUCE(sym_class_definition, 7),
    [1597] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(730),
    [1599] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(643),
    [1601] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(767),
    [1603] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_return_statement, 2), REDUCE(sym_delete_statement, 2),
    [1606] = {.count = 4, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_import_statement, 2), REDUCE(aux_sym_import_statement_repeat1, 2), REDUCE(aux_sym_import_statement_repeat1, 3), SHIFT(364),
    [1611] = {.count = 15, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_with_item, 1), REDUCE_FRAGILE(sym_unary_operator, 2), REDUCE(sym_list_splat_argument, 2), REDUCE(aux_sym_print_statement_repeat1, 2), REDUCE(aux_sym_subscript_repeat1, 2), REDUCE(aux_sym_call_repeat2, 2), REDUCE(sym_with_item, 3), REDUCE(sym_default_parameter, 3), REDUCE_FRAGILE(sym_binary_operator, 3), REDUCE(sym_keyword_argument, 3), REDUCE(sym_pair, 3), REDUCE(aux_sym_print_statement_repeat1, 3), REDUCE(aux_sym_subscript_repeat1, 3), REDUCE(aux_sym_call_repeat2, 3), SHIFT(739),
    [1627] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE_FRAGILE(sym_unary_operator, 2), REDUCE_FRAGILE(sym_binary_operator, 3), SHIFT(740),
    [1631] = {.count = 8, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_with_item, 1), REDUCE(sym_expression_list, 1), REDUCE_FRAGILE(sym_unary_operator, 2), REDUCE(aux_sym_print_statement_repeat1, 2), REDUCE(sym_with_item, 3), REDUCE_FRAGILE(sym_binary_operator, 3), REDUCE(aux_sym_print_statement_repeat1, 3), SHIFT(741),
    [1640] = {.count = 4, .reusable = true, .depends_on_lookahead = false}, REDUCE_FRAGILE(sym_unary_operator, 2), REDUCE_FRAGILE(sym_binary_operator, 3), REDUCE(sym_pair, 3), SHIFT(742),
    [1645] = {.count = 5, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_expression_list, 1), REDUCE_FRAGILE(sym_unary_operator, 2), REDUCE(aux_sym_print_statement_repeat1, 2), REDUCE_FRAGILE(sym_binary_operator, 3), REDUCE(aux_sym_print_statement_repeat1, 3),
    [1651] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE_FRAGILE(sym_unary_operator, 2), REDUCE_FRAGILE(sym_binary_operator, 3), SHIFT(32),
    [1655] = {.count = 12, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_expression_list, 1), REDUCE_FRAGILE(sym_unary_operator, 2), REDUCE(sym_list_splat_argument, 2), REDUCE(sym_dictionary_splat_argument, 2), REDUCE(aux_sym_print_statement_repeat1, 2), REDUCE(aux_sym_call_repeat2, 2), REDUCE(sym_default_parameter, 3), REDUCE_FRAGILE(sym_binary_operator, 3), REDUCE(sym_keyword_argument, 3), REDUCE(aux_sym_print_statement_repeat1, 3), REDUCE(aux_sym_call_repeat2, 3), SHIFT(743),
    [1668] = {.count = 3, .reusable = true, .depends_on_lookahead = true}, REDUCE_FRAGILE(sym_unary_operator, 2), REDUCE_FRAGILE(sym_binary_operator, 3), SHIFT(656),
    [1672] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE_FRAGILE(sym_unary_operator, 2), REDUCE_FRAGILE(sym_binary_operator, 3), SHIFT(656),
    [1676] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE_FRAGILE(sym_unary_operator, 2), REDUCE_FRAGILE(sym_binary_operator, 3), SHIFT(39),
    [1680] = {.count = 7, .reusable = true, .depends_on_lookahead = false}, REDUCE_FRAGILE(sym_unary_operator, 2), REDUCE(aux_sym_print_statement_repeat1, 2), REDUCE(aux_sym_subscript_repeat1, 2), REDUCE_FRAGILE(sym_binary_operator, 3), REDUCE(aux_sym_print_statement_repeat1, 3), REDUCE(aux_sym_subscript_repeat1, 3), SHIFT(744),
    [1688] = {.count = 6, .reusable = true, .depends_on_lookahead = false}, REDUCE_FRAGILE(sym_unary_operator, 2), REDUCE(aux_sym_print_statement_repeat1, 2), REDUCE_FRAGILE(sym_binary_operator, 3), REDUCE(sym_pair, 3), REDUCE(aux_sym_print_statement_repeat1, 3), SHIFT(745),
    [1695] = {.count = 7, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_expression_statement, 1), REDUCE(sym_expression_list, 1), REDUCE(sym_print_statement, 2), REDUCE_FRAGILE(sym_unary_operator, 2), REDUCE(aux_sym_print_statement_repeat1, 2), REDUCE_FRAGILE(sym_binary_operator, 3), REDUCE(aux_sym_print_statement_repeat1, 3),
    [1703] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_call_repeat2, 2), REDUCE(aux_sym_call_repeat2, 3), SHIFT(738),
    [1707] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_call_repeat2, 2), REDUCE(aux_sym_call_repeat2, 3), SHIFT(735),
    [1711] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(734),
    [1713] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(735),
    [1715] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(733),
    [1717] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_dictionary_repeat1, 2), REDUCE(aux_sym_dictionary_repeat1, 3), SHIFT(325),
    [1721] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_dictionary_repeat1, 2), REDUCE(aux_sym_dictionary_repeat1, 3), SHIFT(327),
    [1725] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(638),
    [1727] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(723),
    [1729] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(644),
    [1731] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(645),
    [1733] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(648),
    [1735] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(649),
    [1737] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(654),
    [1739] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(708),
    [1741] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(717),
    [1743] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_expression_list, 2), SHIFT(372),
    [1746] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_expression_list, 2), REDUCE(sym_print_statement, 3),
    [1749] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(640),
    [1751] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(641),
    [1753] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(646),
    [1755] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(703),
    [1757] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(649),
    [1759] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(654),
    [1761] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(698),
    [1763] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(699),
    [1765] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_call, 5), REDUCE(sym_call, 6),
    [1768] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_call, 5), REDUCE(sym_call, 6),
    [1771] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(701),
    [1773] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_call, 7), REDUCE(sym_call, 8),
    [1776] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_call, 7), REDUCE(sym_call, 8),
    [1779] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(718),
    [1781] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(720),
    [1783] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(720),
    [1785] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE_FRAGILE(sym_binary_operator, 3), SHIFT(32),
    [1788] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE_FRAGILE(sym_binary_operator, 3), SHIFT(720),
    [1791] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE_FRAGILE(sym_binary_operator, 3), SHIFT(720),
    [1794] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE_FRAGILE(sym_binary_operator, 3), SHIFT(39),
    [1797] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE_FRAGILE(sym_unary_operator, 2), SHIFT(32),
    [1800] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE_FRAGILE(sym_unary_operator, 2), SHIFT(720),
    [1803] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE_FRAGILE(sym_unary_operator, 2), SHIFT(720),
    [1806] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE_FRAGILE(sym_unary_operator, 2), SHIFT(39),
    [1809] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(726),
    [1811] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(728),
    [1813] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_call, 4), REDUCE(sym_call, 5),
    [1816] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_call, 4), REDUCE(sym_call, 5),
    [1819] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(737),
    [1821] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_call, 6), REDUCE(sym_call, 7),
    [1824] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_call, 6), REDUCE(sym_call, 7),
    [1827] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_call_repeat1, 2), REDUCE(aux_sym_call_repeat1, 3),
    [1830] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_call_repeat1, 2), REDUCE(aux_sym_call_repeat1, 3),
    [1833] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_call_repeat1, 2), REDUCE(aux_sym_call_repeat1, 3),
    [1836] = {.count = 3, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_call_repeat1, 2), REDUCE(aux_sym_call_repeat1, 3), SHIFT(718),
    [1840] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(765),
    [1842] = {.count = 3, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_call_repeat1, 2), REDUCE(aux_sym_call_repeat1, 3), SHIFT(18),
    [1846] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_arguments, 3), REDUCE(sym_call, 4), REDUCE(sym_call, 5),
    [1850] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_list, 3), REDUCE(sym_subscript, 4), REDUCE(sym_list_comprehension, 7),
    [1854] = {.count = 3, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_list, 3), REDUCE(sym_subscript, 4), REDUCE(sym_list_comprehension, 7),
    [1858] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_set, 3), REDUCE(sym_dictionary_comprehension, 7), REDUCE(sym_set_comprehension, 7),
    [1862] = {.count = 3, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_set, 3), REDUCE(sym_dictionary_comprehension, 7), REDUCE(sym_set_comprehension, 7),
    [1866] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE_FRAGILE(sym_binary_operator, 3), SHIFT(656),
    [1869] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE_FRAGILE(sym_binary_operator, 3), SHIFT(656),
    [1872] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(748),
    [1874] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(749),
    [1876] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(751),
    [1878] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(751),
    [1880] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE_FRAGILE(sym_binary_operator, 3), SHIFT(47),
    [1883] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE_FRAGILE(sym_binary_operator, 3), SHIFT(751),
    [1886] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE_FRAGILE(sym_binary_operator, 3), SHIFT(751),
    [1889] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE_FRAGILE(sym_binary_operator, 3), SHIFT(54),
    [1892] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE_FRAGILE(sym_unary_operator, 2), SHIFT(47),
    [1895] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE_FRAGILE(sym_unary_operator, 2), SHIFT(751),
    [1898] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE_FRAGILE(sym_unary_operator, 2), SHIFT(751),
    [1901] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE_FRAGILE(sym_unary_operator, 2), SHIFT(54),
    [1904] = {.count = 5, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_if_statement, 4), REDUCE(sym_elif_clause, 4), REDUCE(sym_while_statement, 4), REDUCE(sym_except_clause, 4), REDUCE(sym_except_clause, 6),
    [1910] = {.count = 5, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_if_statement, 4), REDUCE(sym_elif_clause, 4), REDUCE(sym_while_statement, 4), REDUCE(sym_except_clause, 4), REDUCE(sym_except_clause, 6),
    [1916] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_except_clause, 4), REDUCE(sym_except_clause, 6),
    [1919] = {.count = 5, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_if_statement, 4), REDUCE(sym_elif_clause, 4), REDUCE(sym_while_statement, 4), REDUCE(sym_except_clause, 4), REDUCE(sym_except_clause, 6),
    [1925] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(757),
    [1927] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(757),
    [1929] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE_FRAGILE(sym_binary_operator, 3), SHIFT(757),
    [1932] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE_FRAGILE(sym_binary_operator, 3), SHIFT(757),
    [1935] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_if_statement, 5), REDUCE(sym_while_statement, 5),
    [1938] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_if_statement, 5), REDUCE(sym_while_statement, 5),
    [1941] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_if_statement, 5), REDUCE(sym_while_statement, 5),
    [1944] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE_FRAGILE(sym_unary_operator, 2), SHIFT(757),
    [1947] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE_FRAGILE(sym_unary_operator, 2), SHIFT(757),
    [1950] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_with_item, 3), SHIFT(763),
    [1953] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_list, 4), REDUCE(sym_subscript, 5),
    [1956] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_list, 4), REDUCE(sym_subscript, 5),
    [1959] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_print_statement_repeat1, 2), REDUCE(aux_sym_subscript_repeat1, 2),
    [1962] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_print_statement_repeat1, 2), SHIFT(763),
    [1965] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(768),
    [1967] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_if_statement, 5), REDUCE(sym_while_statement, 5), REDUCE(sym_for_statement, 7),
    [1971] = {.count = 3, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_if_statement, 5), REDUCE(sym_while_statement, 5), REDUCE(sym_for_statement, 7),
    [1975] = {.count = 3, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_if_statement, 5), REDUCE(sym_while_statement, 5), REDUCE(sym_for_statement, 7),
    [1979] = {.count = 4, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_parameters, 3), REDUCE(sym_parameters, 4), REDUCE(sym_parameters, 5), REDUCE(sym_parameters, 6),
    [1984] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_parameters, 3), REDUCE(sym_parameters, 4),
    [1987] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(777),
    [1989] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_parameters, 5), REDUCE(sym_parameters, 6),
    [1992] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(779),
    [1994] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_parameters_repeat1, 2), REDUCE(aux_sym_parameters_repeat1, 3),
    [1997] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_parameters_repeat1, 2), REDUCE(aux_sym_parameters_repeat1, 3),
    [2000] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_parameters, 4), REDUCE(sym_parameters, 5),
    [2003] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(787),
    [2005] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__expression, 1), SHIFT(452),
    [2008] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__expression, 1), SHIFT(449),
    [2011] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(791),
    [2013] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(792),
    [2015] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_list, 3), REDUCE(sym_subscript, 4),
    [2018] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_list, 3), REDUCE(sym_subscript, 4),
    [2021] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE_FRAGILE(sym_unary_operator, 2), SHIFT(656),
    [2024] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE_FRAGILE(sym_unary_operator, 2), SHIFT(656),
    [2027] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_dictionary_splat_argument, 2), REDUCE_FRAGILE(sym_binary_operator, 3),
    [2030] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_dotted_name_repeat1, 2), REDUCE(aux_sym_dotted_name_repeat1, 3),
    [2033] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(785),
    [2035] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(798),
    [2037] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__expression, 1), REDUCE(sym_list_splat_parameter, 2),
    [2040] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__expression, 1), REDUCE(sym_list_splat_parameter, 2), REDUCE(sym_dictionary_splat_parameter, 3),
    [2044] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_list_splat_argument, 2), REDUCE_FRAGILE(sym_binary_operator, 3),
    [2047] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_default_parameter, 3), REDUCE(sym_keyword_argument, 3),
    [2050] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(808),
    [2052] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(805),
    [2054] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_expression_list, 1), SHIFT(806),
    [2057] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_call_repeat1, 2), SHIFT(80),
    [2060] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_call_repeat1, 2), SHIFT(41),
    [2063] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_call_repeat1, 2), SHIFT(43),
    [2066] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_call_repeat1, 2), SHIFT(44),
    [2069] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_call_repeat1, 2), SHIFT(44),
    [2072] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_arguments, 3), REDUCE(sym_call, 4),
    [2075] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(782),
    [2077] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(814),
    [2079] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(815),
    [2081] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(763),
    [2083] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(646),
    [2085] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(647),
    [2087] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(821),
    [2089] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(826),
    [2091] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(826),
    [2093] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(827),
    [2095] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_dictionary_comprehension, 7), REDUCE(sym_set_comprehension, 7),
    [2098] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_dictionary_comprehension, 7), REDUCE(sym_set_comprehension, 7),
    [2101] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE_FRAGILE(sym_binary_operator, 3), SHIFT(826),
    [2104] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE_FRAGILE(sym_binary_operator, 3), SHIFT(826),
    [2107] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE_FRAGILE(sym_unary_operator, 2), SHIFT(826),
    [2110] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE_FRAGILE(sym_unary_operator, 2), SHIFT(826),
    [2113] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(832),
    [2115] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(835),
    [2117] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__expression, 1), REDUCE(sym_aliased_import, 3),
    [2120] = {.count = 4, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_parameters, 4), REDUCE(sym_parameters, 5), REDUCE(sym_call, 5), REDUCE(sym_call, 6),
    [2125] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(840),
    [2127] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_subscript_repeat1, 2), REDUCE(aux_sym_subscript_repeat1, 3),
    [2130] = {.count = 4, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_list, 4), REDUCE(sym_subscript, 5), REDUCE(sym_list, 5), REDUCE(sym_subscript, 6),
    [2135] = {.count = 4, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_list, 4), REDUCE(sym_subscript, 5), REDUCE(sym_list, 5), REDUCE(sym_subscript, 6),
    [2140] = {.count = 4, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_dictionary, 4), REDUCE(sym_set, 4), REDUCE(sym_dictionary, 5), REDUCE(sym_set, 5),
    [2145] = {.count = 4, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_dictionary, 4), REDUCE(sym_set, 4), REDUCE(sym_dictionary, 5), REDUCE(sym_set, 5),
    [2150] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_dotted_name, 1), REDUCE(sym__expression, 1),
    [2153] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_import_statement_repeat1, 2), REDUCE(aux_sym_import_statement_repeat1, 3),
    [2156] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_with_statement_repeat1, 2), REDUCE(aux_sym_with_statement_repeat1, 3),
    [2159] = {.count = 7, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_with_item, 1), REDUCE(aux_sym_print_statement_repeat1, 2), REDUCE(aux_sym_subscript_repeat1, 2), REDUCE(aux_sym_call_repeat2, 2), REDUCE(aux_sym_print_statement_repeat1, 3), REDUCE(aux_sym_subscript_repeat1, 3), REDUCE(aux_sym_call_repeat2, 3),
    [2167] = {.count = 4, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_with_item, 1), REDUCE(aux_sym_print_statement_repeat1, 2), REDUCE(aux_sym_print_statement_repeat1, 3), SHIFT(853),
    [2172] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_print_statement_repeat1, 2), REDUCE(aux_sym_print_statement_repeat1, 3),
    [2175] = {.count = 4, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_print_statement_repeat1, 2), REDUCE(aux_sym_call_repeat2, 2), REDUCE(aux_sym_print_statement_repeat1, 3), REDUCE(aux_sym_call_repeat2, 3),
    [2180] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(854),
    [2182] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(854),
    [2184] = {.count = 4, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_print_statement_repeat1, 2), REDUCE(aux_sym_subscript_repeat1, 2), REDUCE(aux_sym_print_statement_repeat1, 3), REDUCE(aux_sym_subscript_repeat1, 3),
    [2189] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_call_repeat2, 2), REDUCE(aux_sym_call_repeat2, 3),
    [2192] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(852),
    [2194] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_dictionary_repeat1, 2), REDUCE(aux_sym_dictionary_repeat1, 3),
    [2197] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_call, 6), REDUCE(sym_call, 7), REDUCE(sym_call, 8),
    [2201] = {.count = 3, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_call, 6), REDUCE(sym_call, 7), REDUCE(sym_call, 8),
    [2205] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(856),
    [2207] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE_FRAGILE(sym_binary_operator, 3), SHIFT(854),
    [2210] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE_FRAGILE(sym_binary_operator, 3), SHIFT(854),
    [2213] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(858),
    [2215] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(858),
    [2217] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE_FRAGILE(sym_binary_operator, 3), SHIFT(858),
    [2220] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE_FRAGILE(sym_binary_operator, 3), SHIFT(858),
    [2223] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE_FRAGILE(sym_unary_operator, 2), SHIFT(858),
    [2226] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE_FRAGILE(sym_unary_operator, 2), SHIFT(858),
    [2229] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE_FRAGILE(sym_unary_operator, 2), SHIFT(854),
    [2232] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE_FRAGILE(sym_unary_operator, 2), SHIFT(854),
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
