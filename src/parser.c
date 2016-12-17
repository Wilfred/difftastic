#include <tree_sitter/parser.h>

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"

#define STATE_COUNT 844
#define SYMBOL_COUNT 109
#define TOKEN_COUNT 52
#define EXTERNAL_TOKEN_COUNT 3

enum {
    anon_sym_SEMI = 1,
    anon_sym_print = 2,
    anon_sym_COMMA = 3,
    anon_sym_return = 4,
    anon_sym_del = 5,
    sym_pass_statement = 6,
    sym_break_statement = 7,
    sym_continue_statement = 8,
    anon_sym_if = 9,
    anon_sym_COLON = 10,
    anon_sym_elif = 11,
    anon_sym_else = 12,
    anon_sym_for = 13,
    anon_sym_in = 14,
    anon_sym_while = 15,
    anon_sym_try = 16,
    anon_sym_except = 17,
    anon_sym_as = 18,
    anon_sym_finally = 19,
    anon_sym_with = 20,
    anon_sym_def = 21,
    anon_sym_LPAREN = 22,
    anon_sym_RPAREN = 23,
    anon_sym_EQ = 24,
    anon_sym_STAR = 25,
    anon_sym_class = 26,
    anon_sym_AT = 27,
    anon_sym_DOT = 28,
    anon_sym_PLUS = 29,
    anon_sym_DASH = 30,
    anon_sym_SLASH = 31,
    anon_sym_STAR_STAR = 32,
    anon_sym_PIPE = 33,
    anon_sym_AMP = 34,
    anon_sym_CARET = 35,
    anon_sym_LT_LT = 36,
    anon_sym_GT_GT = 37,
    anon_sym_and = 38,
    anon_sym_or = 39,
    anon_sym_not = 40,
    anon_sym_LBRACK = 41,
    anon_sym_DOT_DOT_DOT = 42,
    anon_sym_RBRACK = 43,
    anon_sym_LBRACE = 44,
    anon_sym_RBRACE = 45,
    sym_number = 46,
    sym_identifier = 47,
    sym_comment = 48,
    sym__newline = 49,
    sym__indent = 50,
    sym__dedent = 51,
    sym_module = 52,
    sym__statement = 53,
    sym__simple_statement = 54,
    sym_print_statement = 55,
    sym_expression_statement = 56,
    sym_return_statement = 57,
    sym_delete_statement = 58,
    sym__compound_statement = 59,
    sym_if_statement = 60,
    sym_elif_clause = 61,
    sym_else_clause = 62,
    sym_for_statement = 63,
    sym_while_statement = 64,
    sym_try_statement = 65,
    sym_except_clause = 66,
    sym_finally_clause = 67,
    sym_with_statement = 68,
    sym_with_item = 69,
    sym_function_definition = 70,
    sym_parameters = 71,
    sym_default_parameter = 72,
    sym_list_splat_parameter = 73,
    sym_dictionary_splat_parameter = 74,
    sym_class_definition = 75,
    sym_decorated_definition = 76,
    sym_decorator = 77,
    sym__suite = 78,
    sym_arguments = 79,
    sym_expression_list = 80,
    sym_dotted_name = 81,
    sym__expression = 82,
    sym_binary_operator = 83,
    sym_unary_operator = 84,
    sym_subscript = 85,
    sym_call = 86,
    sym_keyword_argument = 87,
    sym_list_splat_argument = 88,
    sym_dictionary_splat_argument = 89,
    sym_list = 90,
    sym_list_comprehension = 91,
    sym_dictionary = 92,
    sym_dictionary_comprehension = 93,
    sym_pair = 94,
    sym_set = 95,
    sym_set_comprehension = 96,
    aux_sym_module_repeat1 = 97,
    aux_sym_print_statement_repeat1 = 98,
    aux_sym_if_statement_repeat1 = 99,
    aux_sym_try_statement_repeat1 = 100,
    aux_sym_with_statement_repeat1 = 101,
    aux_sym_parameters_repeat1 = 102,
    aux_sym_decorated_definition_repeat1 = 103,
    aux_sym_dotted_name_repeat1 = 104,
    aux_sym_subscript_repeat1 = 105,
    aux_sym_call_repeat1 = 106,
    aux_sym_call_repeat2 = 107,
    aux_sym_dictionary_repeat1 = 108,
};

static const char *ts_symbol_names[] = {
    [ts_builtin_sym_end] = "END",
    [anon_sym_SEMI] = ";",
    [anon_sym_print] = "print",
    [anon_sym_COMMA] = ",",
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
    [anon_sym_as] = "as",
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
    [anon_sym_print] = {
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
    [anon_sym_as] = {
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
                ADVANCE(78);
            if (lookahead == 'o')
                ADVANCE(81);
            if (lookahead == 'p')
                ADVANCE(83);
            if (lookahead == 'r')
                ADVANCE(91);
            if (lookahead == 't')
                ADVANCE(97);
            if (lookahead == 'w')
                ADVANCE(100);
            if (lookahead == '{')
                ADVANCE(108);
            if (lookahead == '|')
                ADVANCE(109);
            if (lookahead == '}')
                ADVANCE(110);
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
                ('g' <= lookahead && lookahead <= 'm') ||
                ('o' <= lookahead && lookahead <= 'z'))
                ADVANCE(26);
            if (lookahead == 'f')
                ADVANCE(76);
            if (lookahead == 'n')
                ADVANCE(77);
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
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(26);
            ACCEPT_TOKEN(anon_sym_in);
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
                ('a' <= lookahead && lookahead <= 's') ||
                ('u' <= lookahead && lookahead <= 'z'))
                ADVANCE(26);
            if (lookahead == 't')
                ADVANCE(80);
            ACCEPT_TOKEN(sym_identifier);
        case 80:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(26);
            ACCEPT_TOKEN(anon_sym_not);
        case 81:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'q') ||
                ('s' <= lookahead && lookahead <= 'z'))
                ADVANCE(26);
            if (lookahead == 'r')
                ADVANCE(82);
            ACCEPT_TOKEN(sym_identifier);
        case 82:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(26);
            ACCEPT_TOKEN(anon_sym_or);
        case 83:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('b' <= lookahead && lookahead <= 'q') ||
                ('s' <= lookahead && lookahead <= 'z'))
                ADVANCE(26);
            if (lookahead == 'a')
                ADVANCE(84);
            if (lookahead == 'r')
                ADVANCE(87);
            ACCEPT_TOKEN(sym_identifier);
        case 84:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'r') ||
                ('t' <= lookahead && lookahead <= 'z'))
                ADVANCE(26);
            if (lookahead == 's')
                ADVANCE(85);
            ACCEPT_TOKEN(sym_identifier);
        case 85:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'r') ||
                ('t' <= lookahead && lookahead <= 'z'))
                ADVANCE(26);
            if (lookahead == 's')
                ADVANCE(86);
            ACCEPT_TOKEN(sym_identifier);
        case 86:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(26);
            ACCEPT_TOKEN(sym_pass_statement);
        case 87:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'h') ||
                ('j' <= lookahead && lookahead <= 'z'))
                ADVANCE(26);
            if (lookahead == 'i')
                ADVANCE(88);
            ACCEPT_TOKEN(sym_identifier);
        case 88:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'm') ||
                ('o' <= lookahead && lookahead <= 'z'))
                ADVANCE(26);
            if (lookahead == 'n')
                ADVANCE(89);
            ACCEPT_TOKEN(sym_identifier);
        case 89:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 's') ||
                ('u' <= lookahead && lookahead <= 'z'))
                ADVANCE(26);
            if (lookahead == 't')
                ADVANCE(90);
            ACCEPT_TOKEN(sym_identifier);
        case 90:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(26);
            ACCEPT_TOKEN(anon_sym_print);
        case 91:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'z'))
                ADVANCE(26);
            if (lookahead == 'e')
                ADVANCE(92);
            ACCEPT_TOKEN(sym_identifier);
        case 92:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 's') ||
                ('u' <= lookahead && lookahead <= 'z'))
                ADVANCE(26);
            if (lookahead == 't')
                ADVANCE(93);
            ACCEPT_TOKEN(sym_identifier);
        case 93:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 't') ||
                ('v' <= lookahead && lookahead <= 'z'))
                ADVANCE(26);
            if (lookahead == 'u')
                ADVANCE(94);
            ACCEPT_TOKEN(sym_identifier);
        case 94:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'q') ||
                ('s' <= lookahead && lookahead <= 'z'))
                ADVANCE(26);
            if (lookahead == 'r')
                ADVANCE(95);
            ACCEPT_TOKEN(sym_identifier);
        case 95:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'm') ||
                ('o' <= lookahead && lookahead <= 'z'))
                ADVANCE(26);
            if (lookahead == 'n')
                ADVANCE(96);
            ACCEPT_TOKEN(sym_identifier);
        case 96:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(26);
            ACCEPT_TOKEN(anon_sym_return);
        case 97:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'q') ||
                ('s' <= lookahead && lookahead <= 'z'))
                ADVANCE(26);
            if (lookahead == 'r')
                ADVANCE(98);
            ACCEPT_TOKEN(sym_identifier);
        case 98:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'x') ||
                (lookahead == 'z'))
                ADVANCE(26);
            if (lookahead == 'y')
                ADVANCE(99);
            ACCEPT_TOKEN(sym_identifier);
        case 99:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(26);
            ACCEPT_TOKEN(anon_sym_try);
        case 100:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'g') ||
                ('j' <= lookahead && lookahead <= 'z'))
                ADVANCE(26);
            if (lookahead == 'h')
                ADVANCE(101);
            if (lookahead == 'i')
                ADVANCE(105);
            ACCEPT_TOKEN(sym_identifier);
        case 101:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'h') ||
                ('j' <= lookahead && lookahead <= 'z'))
                ADVANCE(26);
            if (lookahead == 'i')
                ADVANCE(102);
            ACCEPT_TOKEN(sym_identifier);
        case 102:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'k') ||
                ('m' <= lookahead && lookahead <= 'z'))
                ADVANCE(26);
            if (lookahead == 'l')
                ADVANCE(103);
            ACCEPT_TOKEN(sym_identifier);
        case 103:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'z'))
                ADVANCE(26);
            if (lookahead == 'e')
                ADVANCE(104);
            ACCEPT_TOKEN(sym_identifier);
        case 104:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(26);
            ACCEPT_TOKEN(anon_sym_while);
        case 105:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 's') ||
                ('u' <= lookahead && lookahead <= 'z'))
                ADVANCE(26);
            if (lookahead == 't')
                ADVANCE(106);
            ACCEPT_TOKEN(sym_identifier);
        case 106:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'g') ||
                ('i' <= lookahead && lookahead <= 'z'))
                ADVANCE(26);
            if (lookahead == 'h')
                ADVANCE(107);
            ACCEPT_TOKEN(sym_identifier);
        case 107:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(26);
            ACCEPT_TOKEN(anon_sym_with);
        case 108:
            ACCEPT_TOKEN(anon_sym_LBRACE);
        case 109:
            ACCEPT_TOKEN(anon_sym_PIPE);
        case 110:
            ACCEPT_TOKEN(anon_sym_RBRACE);
        case 111:
            if (lookahead == 0)
                ADVANCE(1);
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(111);
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
                ADVANCE(112);
            if (lookahead == 'i')
                ADVANCE(113);
            if (lookahead == 'n')
                ADVANCE(78);
            if (lookahead == 'p')
                ADVANCE(83);
            if (lookahead == 'r')
                ADVANCE(91);
            if (lookahead == 't')
                ADVANCE(97);
            if (lookahead == 'w')
                ADVANCE(100);
            if (lookahead == '{')
                ADVANCE(108);
            LEX_ERROR();
        case 112:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'n') ||
                ('p' <= lookahead && lookahead <= 'z'))
                ADVANCE(26);
            if (lookahead == 'o')
                ADVANCE(73);
            ACCEPT_TOKEN(sym_identifier);
        case 113:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'e') ||
                ('g' <= lookahead && lookahead <= 'z'))
                ADVANCE(26);
            if (lookahead == 'f')
                ADVANCE(76);
            ACCEPT_TOKEN(sym_identifier);
        case 114:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(114);
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
                ADVANCE(78);
            if (lookahead == '{')
                ADVANCE(108);
            LEX_ERROR();
        case 115:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(115);
            if (lookahead == '#')
                ADVANCE(2);
            LEX_ERROR();
        case 116:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(116);
            if (lookahead == '#')
                ADVANCE(2);
            if (lookahead == ':')
                ADVANCE(18);
            LEX_ERROR();
        case 117:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(117);
            if (lookahead == '#')
                ADVANCE(2);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(26);
            LEX_ERROR();
        case 118:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(118);
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
                ADVANCE(78);
            if (lookahead == '{')
                ADVANCE(108);
            LEX_ERROR();
        case 119:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(119);
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
                ADVANCE(78);
            if (lookahead == '{')
                ADVANCE(108);
            if (lookahead == '}')
                ADVANCE(110);
            LEX_ERROR();
        case 120:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(120);
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
                ADVANCE(121);
            if (lookahead == 'f')
                ADVANCE(125);
            if (lookahead == 'i')
                ADVANCE(128);
            if (lookahead == 'o')
                ADVANCE(130);
            if (lookahead == '|')
                ADVANCE(109);
            if (lookahead == '}')
                ADVANCE(110);
            LEX_ERROR();
        case 121:
            if (lookahead == 'n')
                ADVANCE(122);
            if (lookahead == 's')
                ADVANCE(124);
            LEX_ERROR();
        case 122:
            if (lookahead == 'd')
                ADVANCE(123);
            LEX_ERROR();
        case 123:
            ACCEPT_TOKEN(anon_sym_and);
        case 124:
            ACCEPT_TOKEN(anon_sym_as);
        case 125:
            if (lookahead == 'o')
                ADVANCE(126);
            LEX_ERROR();
        case 126:
            if (lookahead == 'r')
                ADVANCE(127);
            LEX_ERROR();
        case 127:
            ACCEPT_TOKEN(anon_sym_for);
        case 128:
            if (lookahead == 'n')
                ADVANCE(129);
            LEX_ERROR();
        case 129:
            ACCEPT_TOKEN(anon_sym_in);
        case 130:
            if (lookahead == 'r')
                ADVANCE(131);
            LEX_ERROR();
        case 131:
            ACCEPT_TOKEN(anon_sym_or);
        case 132:
            if (lookahead == 0)
                ADVANCE(1);
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(132);
            if (lookahead == '#')
                ADVANCE(2);
            LEX_ERROR();
        case 133:
            if (lookahead == 0)
                ADVANCE(1);
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(133);
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
                ADVANCE(112);
            if (lookahead == 'i')
                ADVANCE(113);
            if (lookahead == 'n')
                ADVANCE(78);
            if (lookahead == 'p')
                ADVANCE(83);
            if (lookahead == 'r')
                ADVANCE(91);
            if (lookahead == 't')
                ADVANCE(97);
            if (lookahead == 'w')
                ADVANCE(100);
            if (lookahead == '{')
                ADVANCE(108);
            LEX_ERROR();
        case 134:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(134);
            if (lookahead == '#')
                ADVANCE(2);
            if (lookahead == '@')
                ADVANCE(25);
            if (lookahead == 'c')
                ADVANCE(135);
            if (lookahead == 'd')
                ADVANCE(140);
            LEX_ERROR();
        case 135:
            if (lookahead == 'l')
                ADVANCE(136);
            LEX_ERROR();
        case 136:
            if (lookahead == 'a')
                ADVANCE(137);
            LEX_ERROR();
        case 137:
            if (lookahead == 's')
                ADVANCE(138);
            LEX_ERROR();
        case 138:
            if (lookahead == 's')
                ADVANCE(139);
            LEX_ERROR();
        case 139:
            ACCEPT_TOKEN(anon_sym_class);
        case 140:
            if (lookahead == 'e')
                ADVANCE(141);
            LEX_ERROR();
        case 141:
            if (lookahead == 'f')
                ADVANCE(142);
            LEX_ERROR();
        case 142:
            ACCEPT_TOKEN(anon_sym_def);
        case 143:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(143);
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
                ADVANCE(144);
            if (lookahead == 'o')
                ADVANCE(130);
            if (lookahead == '|')
                ADVANCE(109);
            LEX_ERROR();
        case 144:
            if (lookahead == 'n')
                ADVANCE(122);
            LEX_ERROR();
        case 145:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(145);
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
                ADVANCE(78);
            if (lookahead == '{')
                ADVANCE(108);
            LEX_ERROR();
        case 146:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(146);
            if (lookahead == '#')
                ADVANCE(2);
            if (lookahead == '.')
                ADVANCE(147);
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(16);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'm') ||
                ('o' <= lookahead && lookahead <= 'z'))
                ADVANCE(26);
            if (lookahead == '[')
                ADVANCE(27);
            if (lookahead == 'n')
                ADVANCE(78);
            if (lookahead == '{')
                ADVANCE(108);
            LEX_ERROR();
        case 147:
            if (lookahead == '.')
                ADVANCE(13);
            LEX_ERROR();
        case 148:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(148);
            if (lookahead == '#')
                ADVANCE(2);
            if (lookahead == ',')
                ADVANCE(10);
            if (lookahead == ']')
                ADVANCE(28);
            LEX_ERROR();
        case 149:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(149);
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
                ADVANCE(144);
            if (lookahead == 'o')
                ADVANCE(130);
            if (lookahead == '|')
                ADVANCE(109);
            LEX_ERROR();
        case 150:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(150);
            if (lookahead == '#')
                ADVANCE(2);
            if (lookahead == '.')
                ADVANCE(147);
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
                ADVANCE(78);
            if (lookahead == '{')
                ADVANCE(108);
            LEX_ERROR();
        case 151:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(151);
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
                ADVANCE(144);
            if (lookahead == 'o')
                ADVANCE(130);
            if (lookahead == '|')
                ADVANCE(109);
            LEX_ERROR();
        case 152:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(152);
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
                ADVANCE(144);
            if (lookahead == 'o')
                ADVANCE(130);
            if (lookahead == '|')
                ADVANCE(109);
            LEX_ERROR();
        case 153:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(153);
            if (lookahead == '#')
                ADVANCE(2);
            if (lookahead == ')')
                ADVANCE(6);
            if (lookahead == ',')
                ADVANCE(10);
            LEX_ERROR();
        case 154:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(154);
            if (lookahead == '#')
                ADVANCE(2);
            if (lookahead == ')')
                ADVANCE(6);
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
                ADVANCE(156);
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(16);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'm') ||
                ('o' <= lookahead && lookahead <= 'z'))
                ADVANCE(26);
            if (lookahead == '[')
                ADVANCE(27);
            if (lookahead == 'n')
                ADVANCE(78);
            if (lookahead == '{')
                ADVANCE(108);
            LEX_ERROR();
        case 156:
            if (lookahead == '*')
                ADVANCE(8);
            LEX_ERROR();
        case 157:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(157);
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
                ADVANCE(78);
            if (lookahead == '{')
                ADVANCE(108);
            LEX_ERROR();
        case 158:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(158);
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
                ADVANCE(144);
            if (lookahead == 'f')
                ADVANCE(125);
            if (lookahead == 'o')
                ADVANCE(130);
            if (lookahead == '|')
                ADVANCE(109);
            if (lookahead == '}')
                ADVANCE(110);
            LEX_ERROR();
        case 159:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(159);
            if (lookahead == '#')
                ADVANCE(2);
            if (lookahead == ',')
                ADVANCE(10);
            if (lookahead == 'f')
                ADVANCE(125);
            if (lookahead == '}')
                ADVANCE(110);
            LEX_ERROR();
        case 160:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(160);
            if (lookahead == '#')
                ADVANCE(2);
            if (lookahead == ',')
                ADVANCE(10);
            if (lookahead == '}')
                ADVANCE(110);
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
                ADVANCE(144);
            if (lookahead == 'o')
                ADVANCE(130);
            if (lookahead == '|')
                ADVANCE(109);
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
                ADVANCE(144);
            if (lookahead == 'o')
                ADVANCE(130);
            if (lookahead == '|')
                ADVANCE(109);
            if (lookahead == '}')
                ADVANCE(110);
            LEX_ERROR();
        case 163:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(163);
            if (lookahead == '#')
                ADVANCE(2);
            if (lookahead == 'i')
                ADVANCE(128);
            LEX_ERROR();
        case 164:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(164);
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
                ADVANCE(144);
            if (lookahead == 'i')
                ADVANCE(128);
            if (lookahead == 'o')
                ADVANCE(130);
            if (lookahead == '|')
                ADVANCE(109);
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
            if (lookahead == 'i')
                ADVANCE(128);
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
            if (lookahead == '<')
                ADVANCE(20);
            if (lookahead == '>')
                ADVANCE(23);
            if (lookahead == '[')
                ADVANCE(27);
            if (lookahead == '^')
                ADVANCE(29);
            if (lookahead == 'a')
                ADVANCE(144);
            if (lookahead == 'o')
                ADVANCE(130);
            if (lookahead == '|')
                ADVANCE(109);
            if (lookahead == '}')
                ADVANCE(110);
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
                ADVANCE(144);
            if (lookahead == 'f')
                ADVANCE(125);
            if (lookahead == 'o')
                ADVANCE(130);
            if (lookahead == '|')
                ADVANCE(109);
            if (lookahead == '}')
                ADVANCE(110);
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
                ADVANCE(144);
            if (lookahead == 'f')
                ADVANCE(125);
            if (lookahead == 'o')
                ADVANCE(130);
            if (lookahead == '|')
                ADVANCE(109);
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
                ADVANCE(144);
            if (lookahead == 'o')
                ADVANCE(130);
            if (lookahead == '|')
                ADVANCE(109);
            LEX_ERROR();
        case 170:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(170);
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
                ADVANCE(144);
            if (lookahead == 'o')
                ADVANCE(130);
            if (lookahead == '|')
                ADVANCE(109);
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
                ADVANCE(144);
            if (lookahead == 'o')
                ADVANCE(130);
            if (lookahead == '|')
                ADVANCE(109);
            LEX_ERROR();
        case 172:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(172);
            if (lookahead == '#')
                ADVANCE(2);
            if (lookahead == '(')
                ADVANCE(5);
            if (lookahead == '.')
                ADVANCE(173);
            LEX_ERROR();
        case 173:
            ACCEPT_TOKEN(anon_sym_DOT);
        case 174:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(174);
            if (lookahead == '#')
                ADVANCE(2);
            if (lookahead == '(')
                ADVANCE(5);
            LEX_ERROR();
        case 175:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(175);
            if (lookahead == '#')
                ADVANCE(2);
            if (lookahead == '(')
                ADVANCE(5);
            if (lookahead == ':')
                ADVANCE(18);
            LEX_ERROR();
        case 176:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(176);
            if (lookahead == '#')
                ADVANCE(2);
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(16);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == 'a') ||
                ('e' <= lookahead && lookahead <= 'm') ||
                (lookahead == 'o') ||
                (lookahead == 'q') ||
                ('s' <= lookahead && lookahead <= 'z'))
                ADVANCE(26);
            if (lookahead == '[')
                ADVANCE(27);
            if (lookahead == 'b')
                ADVANCE(34);
            if (lookahead == 'c')
                ADVANCE(177);
            if (lookahead == 'd')
                ADVANCE(178);
            if (lookahead == 'n')
                ADVANCE(78);
            if (lookahead == 'p')
                ADVANCE(83);
            if (lookahead == 'r')
                ADVANCE(91);
            if (lookahead == '{')
                ADVANCE(108);
            LEX_ERROR();
        case 177:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'n') ||
                ('p' <= lookahead && lookahead <= 'z'))
                ADVANCE(26);
            if (lookahead == 'o')
                ADVANCE(44);
            ACCEPT_TOKEN(sym_identifier);
        case 178:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'z'))
                ADVANCE(26);
            if (lookahead == 'e')
                ADVANCE(179);
            ACCEPT_TOKEN(sym_identifier);
        case 179:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'k') ||
                ('m' <= lookahead && lookahead <= 'z'))
                ADVANCE(26);
            if (lookahead == 'l')
                ADVANCE(54);
            ACCEPT_TOKEN(sym_identifier);
        case 180:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(180);
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
                ADVANCE(112);
            if (lookahead == 'i')
                ADVANCE(113);
            if (lookahead == 'n')
                ADVANCE(78);
            if (lookahead == 'p')
                ADVANCE(83);
            if (lookahead == 'r')
                ADVANCE(91);
            if (lookahead == 't')
                ADVANCE(97);
            if (lookahead == 'w')
                ADVANCE(100);
            if (lookahead == '{')
                ADVANCE(108);
            LEX_ERROR();
        case 181:
            if (lookahead == 0)
                ADVANCE(1);
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(181);
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
                ADVANCE(113);
            if (lookahead == 'n')
                ADVANCE(78);
            if (lookahead == 'p')
                ADVANCE(83);
            if (lookahead == 'r')
                ADVANCE(91);
            if (lookahead == 't')
                ADVANCE(97);
            if (lookahead == 'w')
                ADVANCE(100);
            if (lookahead == '{')
                ADVANCE(108);
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
                ADVANCE(113);
            if (lookahead == 'n')
                ADVANCE(78);
            if (lookahead == 'p')
                ADVANCE(83);
            if (lookahead == 'r')
                ADVANCE(91);
            if (lookahead == 't')
                ADVANCE(97);
            if (lookahead == 'w')
                ADVANCE(100);
            if (lookahead == '{')
                ADVANCE(108);
            LEX_ERROR();
        case 183:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(183);
            if (lookahead == '#')
                ADVANCE(2);
            if (lookahead == ')')
                ADVANCE(6);
            if (lookahead == '*')
                ADVANCE(184);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(26);
            LEX_ERROR();
        case 184:
            ACCEPT_TOKEN(anon_sym_STAR);
        case 185:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(185);
            if (lookahead == '#')
                ADVANCE(2);
            if (lookahead == '*')
                ADVANCE(184);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(26);
            LEX_ERROR();
        case 186:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(186);
            if (lookahead == '#')
                ADVANCE(2);
            if (lookahead == ')')
                ADVANCE(6);
            if (lookahead == ',')
                ADVANCE(10);
            if (lookahead == '=')
                ADVANCE(22);
            LEX_ERROR();
        case 187:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(187);
            if (lookahead == '#')
                ADVANCE(2);
            if (lookahead == '*')
                ADVANCE(184);
            LEX_ERROR();
        case 188:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(188);
            if (lookahead == '#')
                ADVANCE(2);
            if (lookahead == ',')
                ADVANCE(10);
            if (lookahead == ':')
                ADVANCE(18);
            LEX_ERROR();
        case 189:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(189);
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
                ADVANCE(121);
            if (lookahead == 'o')
                ADVANCE(130);
            if (lookahead == '|')
                ADVANCE(109);
            LEX_ERROR();
        case 190:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(190);
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
                ADVANCE(144);
            if (lookahead == 'o')
                ADVANCE(130);
            if (lookahead == '|')
                ADVANCE(109);
            LEX_ERROR();
        case 191:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(191);
            if (lookahead == '#')
                ADVANCE(2);
            if (lookahead == 'e')
                ADVANCE(192);
            if (lookahead == 'f')
                ADVANCE(198);
            LEX_ERROR();
        case 192:
            if (lookahead == 'x')
                ADVANCE(193);
            LEX_ERROR();
        case 193:
            if (lookahead == 'c')
                ADVANCE(194);
            LEX_ERROR();
        case 194:
            if (lookahead == 'e')
                ADVANCE(195);
            LEX_ERROR();
        case 195:
            if (lookahead == 'p')
                ADVANCE(196);
            LEX_ERROR();
        case 196:
            if (lookahead == 't')
                ADVANCE(197);
            LEX_ERROR();
        case 197:
            ACCEPT_TOKEN(anon_sym_except);
        case 198:
            if (lookahead == 'i')
                ADVANCE(199);
            LEX_ERROR();
        case 199:
            if (lookahead == 'n')
                ADVANCE(200);
            LEX_ERROR();
        case 200:
            if (lookahead == 'a')
                ADVANCE(201);
            LEX_ERROR();
        case 201:
            if (lookahead == 'l')
                ADVANCE(202);
            LEX_ERROR();
        case 202:
            if (lookahead == 'l')
                ADVANCE(203);
            LEX_ERROR();
        case 203:
            if (lookahead == 'y')
                ADVANCE(204);
            LEX_ERROR();
        case 204:
            ACCEPT_TOKEN(anon_sym_finally);
        case 205:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(205);
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
                ADVANCE(206);
            if (lookahead == 'f')
                ADVANCE(66);
            if (lookahead == 'i')
                ADVANCE(113);
            if (lookahead == 'n')
                ADVANCE(78);
            if (lookahead == 'p')
                ADVANCE(83);
            if (lookahead == 'r')
                ADVANCE(91);
            if (lookahead == 't')
                ADVANCE(97);
            if (lookahead == 'w')
                ADVANCE(100);
            if (lookahead == '{')
                ADVANCE(108);
            LEX_ERROR();
        case 206:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'k') ||
                ('m' <= lookahead && lookahead <= 'w') ||
                (lookahead == 'y') ||
                (lookahead == 'z'))
                ADVANCE(26);
            if (lookahead == 'l')
                ADVANCE(207);
            if (lookahead == 'x')
                ADVANCE(61);
            ACCEPT_TOKEN(sym_identifier);
        case 207:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'r') ||
                ('t' <= lookahead && lookahead <= 'z'))
                ADVANCE(26);
            if (lookahead == 's')
                ADVANCE(59);
            ACCEPT_TOKEN(sym_identifier);
        case 208:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(208);
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
                ADVANCE(113);
            if (lookahead == 'n')
                ADVANCE(78);
            if (lookahead == 'p')
                ADVANCE(83);
            if (lookahead == 'r')
                ADVANCE(91);
            if (lookahead == 't')
                ADVANCE(97);
            if (lookahead == 'w')
                ADVANCE(100);
            if (lookahead == '{')
                ADVANCE(108);
            LEX_ERROR();
        case 209:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(209);
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
                ADVANCE(210);
            if (lookahead == 'f')
                ADVANCE(112);
            if (lookahead == 'i')
                ADVANCE(113);
            if (lookahead == 'n')
                ADVANCE(78);
            if (lookahead == 'p')
                ADVANCE(83);
            if (lookahead == 'r')
                ADVANCE(91);
            if (lookahead == 't')
                ADVANCE(97);
            if (lookahead == 'w')
                ADVANCE(100);
            if (lookahead == '{')
                ADVANCE(108);
            LEX_ERROR();
        case 210:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'k') ||
                ('m' <= lookahead && lookahead <= 'z'))
                ADVANCE(26);
            if (lookahead == 'l')
                ADVANCE(207);
            ACCEPT_TOKEN(sym_identifier);
        case 211:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(211);
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
                ADVANCE(212);
            if (lookahead == 'f')
                ADVANCE(112);
            if (lookahead == 'i')
                ADVANCE(113);
            if (lookahead == 'n')
                ADVANCE(78);
            if (lookahead == 'p')
                ADVANCE(83);
            if (lookahead == 'r')
                ADVANCE(91);
            if (lookahead == 't')
                ADVANCE(97);
            if (lookahead == 'w')
                ADVANCE(100);
            if (lookahead == '{')
                ADVANCE(108);
            LEX_ERROR();
        case 212:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'k') ||
                ('m' <= lookahead && lookahead <= 'z'))
                ADVANCE(26);
            if (lookahead == 'l')
                ADVANCE(56);
            ACCEPT_TOKEN(sym_identifier);
        case 213:
            if (lookahead == 0)
                ADVANCE(1);
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(213);
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
                ADVANCE(206);
            if (lookahead == 'f')
                ADVANCE(66);
            if (lookahead == 'i')
                ADVANCE(113);
            if (lookahead == 'n')
                ADVANCE(78);
            if (lookahead == 'p')
                ADVANCE(83);
            if (lookahead == 'r')
                ADVANCE(91);
            if (lookahead == 't')
                ADVANCE(97);
            if (lookahead == 'w')
                ADVANCE(100);
            if (lookahead == '{')
                ADVANCE(108);
            LEX_ERROR();
        case 214:
            if (lookahead == 0)
                ADVANCE(1);
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(214);
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
                ADVANCE(113);
            if (lookahead == 'n')
                ADVANCE(78);
            if (lookahead == 'p')
                ADVANCE(83);
            if (lookahead == 'r')
                ADVANCE(91);
            if (lookahead == 't')
                ADVANCE(97);
            if (lookahead == 'w')
                ADVANCE(100);
            if (lookahead == '{')
                ADVANCE(108);
            LEX_ERROR();
        case 215:
            if (lookahead == 0)
                ADVANCE(1);
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(215);
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
                ADVANCE(210);
            if (lookahead == 'f')
                ADVANCE(112);
            if (lookahead == 'i')
                ADVANCE(113);
            if (lookahead == 'n')
                ADVANCE(78);
            if (lookahead == 'p')
                ADVANCE(83);
            if (lookahead == 'r')
                ADVANCE(91);
            if (lookahead == 't')
                ADVANCE(97);
            if (lookahead == 'w')
                ADVANCE(100);
            if (lookahead == '{')
                ADVANCE(108);
            LEX_ERROR();
        case 216:
            if (lookahead == 0)
                ADVANCE(1);
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(216);
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
                ADVANCE(212);
            if (lookahead == 'f')
                ADVANCE(112);
            if (lookahead == 'i')
                ADVANCE(113);
            if (lookahead == 'n')
                ADVANCE(78);
            if (lookahead == 'p')
                ADVANCE(83);
            if (lookahead == 'r')
                ADVANCE(91);
            if (lookahead == 't')
                ADVANCE(97);
            if (lookahead == 'w')
                ADVANCE(100);
            if (lookahead == '{')
                ADVANCE(108);
            LEX_ERROR();
        case 217:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(217);
            if (lookahead == '#')
                ADVANCE(2);
            if (lookahead == ',')
                ADVANCE(10);
            LEX_ERROR();
        case 218:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(218);
            if (lookahead == '#')
                ADVANCE(2);
            if (lookahead == ')')
                ADVANCE(6);
            if (lookahead == '*')
                ADVANCE(7);
            if (lookahead == '.')
                ADVANCE(147);
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
                ADVANCE(78);
            if (lookahead == '{')
                ADVANCE(108);
            if (lookahead == '}')
                ADVANCE(110);
            LEX_ERROR();
        case 219:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(219);
            if (lookahead == '#')
                ADVANCE(2);
            if (lookahead == '*')
                ADVANCE(184);
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(16);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'm') ||
                ('o' <= lookahead && lookahead <= 'z'))
                ADVANCE(26);
            if (lookahead == '[')
                ADVANCE(27);
            if (lookahead == 'n')
                ADVANCE(78);
            if (lookahead == '{')
                ADVANCE(108);
            LEX_ERROR();
        case 220:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(220);
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
                ADVANCE(173);
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
                ADVANCE(121);
            if (lookahead == 'f')
                ADVANCE(125);
            if (lookahead == 'i')
                ADVANCE(128);
            if (lookahead == 'o')
                ADVANCE(130);
            if (lookahead == '|')
                ADVANCE(109);
            if (lookahead == '}')
                ADVANCE(110);
            LEX_ERROR();
        case 221:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(221);
            if (lookahead == '#')
                ADVANCE(2);
            if (lookahead == ')')
                ADVANCE(6);
            if (lookahead == ':')
                ADVANCE(18);
            if (lookahead == 'i')
                ADVANCE(128);
            LEX_ERROR();
        case 222:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(222);
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
                ADVANCE(128);
            if (lookahead == '}')
                ADVANCE(110);
            LEX_ERROR();
        case 223:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(223);
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
                ADVANCE(78);
            if (lookahead == '{')
                ADVANCE(108);
            if (lookahead == '}')
                ADVANCE(110);
            LEX_ERROR();
        case 224:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(224);
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
                ADVANCE(144);
            if (lookahead == 'i')
                ADVANCE(128);
            if (lookahead == 'o')
                ADVANCE(130);
            if (lookahead == '|')
                ADVANCE(109);
            if (lookahead == '}')
                ADVANCE(110);
            LEX_ERROR();
        case 225:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(225);
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
                ADVANCE(144);
            if (lookahead == 'o')
                ADVANCE(130);
            if (lookahead == '|')
                ADVANCE(109);
            if (lookahead == '}')
                ADVANCE(110);
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
                ADVANCE(184);
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(16);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'm') ||
                ('o' <= lookahead && lookahead <= 'z'))
                ADVANCE(26);
            if (lookahead == '[')
                ADVANCE(27);
            if (lookahead == 'n')
                ADVANCE(78);
            if (lookahead == '{')
                ADVANCE(108);
            LEX_ERROR();
        case 227:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(227);
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
                ADVANCE(144);
            if (lookahead == 'o')
                ADVANCE(130);
            if (lookahead == '|')
                ADVANCE(109);
            if (lookahead == '}')
                ADVANCE(110);
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
                ADVANCE(121);
            if (lookahead == 'i')
                ADVANCE(128);
            if (lookahead == 'o')
                ADVANCE(130);
            if (lookahead == '|')
                ADVANCE(109);
            if (lookahead == '}')
                ADVANCE(110);
            LEX_ERROR();
        case 229:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(229);
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
                ADVANCE(121);
            if (lookahead == 'i')
                ADVANCE(128);
            if (lookahead == 'o')
                ADVANCE(130);
            if (lookahead == '|')
                ADVANCE(109);
            if (lookahead == '}')
                ADVANCE(110);
            LEX_ERROR();
        default:
            LEX_ERROR();
    }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
    [0] = {.lex_state = 0, .external_tokens = 1},
    [1] = {.lex_state = 111},
    [2] = {.lex_state = 114},
    [3] = {.lex_state = 114},
    [4] = {.lex_state = 114},
    [5] = {.lex_state = 115, .external_tokens = 2},
    [6] = {.lex_state = 114},
    [7] = {.lex_state = 114},
    [8] = {.lex_state = 114},
    [9] = {.lex_state = 116},
    [10] = {.lex_state = 114},
    [11] = {.lex_state = 117},
    [12] = {.lex_state = 117},
    [13] = {.lex_state = 117},
    [14] = {.lex_state = 114},
    [15] = {.lex_state = 118},
    [16] = {.lex_state = 119},
    [17] = {.lex_state = 120, .external_tokens = 2},
    [18] = {.lex_state = 132},
    [19] = {.lex_state = 133, .external_tokens = 2},
    [20] = {.lex_state = 115, .external_tokens = 2},
    [21] = {.lex_state = 133, .external_tokens = 2},
    [22] = {.lex_state = 133, .external_tokens = 2},
    [23] = {.lex_state = 134},
    [24] = {.lex_state = 143, .external_tokens = 2},
    [25] = {.lex_state = 133, .external_tokens = 2},
    [26] = {.lex_state = 134},
    [27] = {.lex_state = 133, .external_tokens = 2},
    [28] = {.lex_state = 134},
    [29] = {.lex_state = 132},
    [30] = {.lex_state = 133, .external_tokens = 2},
    [31] = {.lex_state = 145},
    [32] = {.lex_state = 114},
    [33] = {.lex_state = 114},
    [34] = {.lex_state = 114},
    [35] = {.lex_state = 114},
    [36] = {.lex_state = 114},
    [37] = {.lex_state = 114},
    [38] = {.lex_state = 146},
    [39] = {.lex_state = 114},
    [40] = {.lex_state = 118},
    [41] = {.lex_state = 148},
    [42] = {.lex_state = 119},
    [43] = {.lex_state = 120},
    [44] = {.lex_state = 149},
    [45] = {.lex_state = 150},
    [46] = {.lex_state = 145},
    [47] = {.lex_state = 114},
    [48] = {.lex_state = 114},
    [49] = {.lex_state = 114},
    [50] = {.lex_state = 114},
    [51] = {.lex_state = 114},
    [52] = {.lex_state = 114},
    [53] = {.lex_state = 146},
    [54] = {.lex_state = 120, .external_tokens = 2},
    [55] = {.lex_state = 148},
    [56] = {.lex_state = 150},
    [57] = {.lex_state = 120, .external_tokens = 2},
    [58] = {.lex_state = 148},
    [59] = {.lex_state = 120, .external_tokens = 2},
    [60] = {.lex_state = 149},
    [61] = {.lex_state = 148},
    [62] = {.lex_state = 149},
    [63] = {.lex_state = 150},
    [64] = {.lex_state = 120},
    [65] = {.lex_state = 148},
    [66] = {.lex_state = 150},
    [67] = {.lex_state = 120},
    [68] = {.lex_state = 120},
    [69] = {.lex_state = 148},
    [70] = {.lex_state = 149},
    [71] = {.lex_state = 149},
    [72] = {.lex_state = 149},
    [73] = {.lex_state = 149},
    [74] = {.lex_state = 149},
    [75] = {.lex_state = 120},
    [76] = {.lex_state = 149},
    [77] = {.lex_state = 114},
    [78] = {.lex_state = 114},
    [79] = {.lex_state = 114},
    [80] = {.lex_state = 151},
    [81] = {.lex_state = 152},
    [82] = {.lex_state = 153},
    [83] = {.lex_state = 153},
    [84] = {.lex_state = 154},
    [85] = {.lex_state = 145},
    [86] = {.lex_state = 152},
    [87] = {.lex_state = 153},
    [88] = {.lex_state = 153},
    [89] = {.lex_state = 154},
    [90] = {.lex_state = 120},
    [91] = {.lex_state = 155},
    [92] = {.lex_state = 153},
    [93] = {.lex_state = 155},
    [94] = {.lex_state = 120},
    [95] = {.lex_state = 152},
    [96] = {.lex_state = 153},
    [97] = {.lex_state = 154},
    [98] = {.lex_state = 120},
    [99] = {.lex_state = 114},
    [100] = {.lex_state = 114},
    [101] = {.lex_state = 114},
    [102] = {.lex_state = 114},
    [103] = {.lex_state = 114},
    [104] = {.lex_state = 114},
    [105] = {.lex_state = 152},
    [106] = {.lex_state = 152},
    [107] = {.lex_state = 152},
    [108] = {.lex_state = 152},
    [109] = {.lex_state = 152},
    [110] = {.lex_state = 152},
    [111] = {.lex_state = 153},
    [112] = {.lex_state = 154},
    [113] = {.lex_state = 120},
    [114] = {.lex_state = 157},
    [115] = {.lex_state = 120},
    [116] = {.lex_state = 155},
    [117] = {.lex_state = 153},
    [118] = {.lex_state = 155},
    [119] = {.lex_state = 154},
    [120] = {.lex_state = 157},
    [121] = {.lex_state = 114},
    [122] = {.lex_state = 152},
    [123] = {.lex_state = 114},
    [124] = {.lex_state = 120},
    [125] = {.lex_state = 158},
    [126] = {.lex_state = 159},
    [127] = {.lex_state = 119},
    [128] = {.lex_state = 114},
    [129] = {.lex_state = 120},
    [130] = {.lex_state = 160},
    [131] = {.lex_state = 119},
    [132] = {.lex_state = 120},
    [133] = {.lex_state = 114},
    [134] = {.lex_state = 120},
    [135] = {.lex_state = 161},
    [136] = {.lex_state = 160},
    [137] = {.lex_state = 114},
    [138] = {.lex_state = 114},
    [139] = {.lex_state = 114},
    [140] = {.lex_state = 114},
    [141] = {.lex_state = 114},
    [142] = {.lex_state = 114},
    [143] = {.lex_state = 114},
    [144] = {.lex_state = 161},
    [145] = {.lex_state = 161},
    [146] = {.lex_state = 161},
    [147] = {.lex_state = 161},
    [148] = {.lex_state = 161},
    [149] = {.lex_state = 114},
    [150] = {.lex_state = 162},
    [151] = {.lex_state = 114},
    [152] = {.lex_state = 114},
    [153] = {.lex_state = 114},
    [154] = {.lex_state = 114},
    [155] = {.lex_state = 114},
    [156] = {.lex_state = 114},
    [157] = {.lex_state = 162},
    [158] = {.lex_state = 162},
    [159] = {.lex_state = 162},
    [160] = {.lex_state = 162},
    [161] = {.lex_state = 162},
    [162] = {.lex_state = 114},
    [163] = {.lex_state = 163},
    [164] = {.lex_state = 164},
    [165] = {.lex_state = 114},
    [166] = {.lex_state = 114},
    [167] = {.lex_state = 114},
    [168] = {.lex_state = 114},
    [169] = {.lex_state = 114},
    [170] = {.lex_state = 114},
    [171] = {.lex_state = 114},
    [172] = {.lex_state = 165},
    [173] = {.lex_state = 114},
    [174] = {.lex_state = 164},
    [175] = {.lex_state = 164},
    [176] = {.lex_state = 164},
    [177] = {.lex_state = 164},
    [178] = {.lex_state = 164},
    [179] = {.lex_state = 164},
    [180] = {.lex_state = 164},
    [181] = {.lex_state = 114},
    [182] = {.lex_state = 114},
    [183] = {.lex_state = 166},
    [184] = {.lex_state = 114},
    [185] = {.lex_state = 114},
    [186] = {.lex_state = 114},
    [187] = {.lex_state = 114},
    [188] = {.lex_state = 114},
    [189] = {.lex_state = 114},
    [190] = {.lex_state = 120},
    [191] = {.lex_state = 166},
    [192] = {.lex_state = 166},
    [193] = {.lex_state = 166},
    [194] = {.lex_state = 166},
    [195] = {.lex_state = 166},
    [196] = {.lex_state = 160},
    [197] = {.lex_state = 119},
    [198] = {.lex_state = 114},
    [199] = {.lex_state = 114},
    [200] = {.lex_state = 114},
    [201] = {.lex_state = 114},
    [202] = {.lex_state = 114},
    [203] = {.lex_state = 114},
    [204] = {.lex_state = 114},
    [205] = {.lex_state = 114},
    [206] = {.lex_state = 120},
    [207] = {.lex_state = 160},
    [208] = {.lex_state = 119},
    [209] = {.lex_state = 120},
    [210] = {.lex_state = 120},
    [211] = {.lex_state = 162},
    [212] = {.lex_state = 158},
    [213] = {.lex_state = 158},
    [214] = {.lex_state = 158},
    [215] = {.lex_state = 158},
    [216] = {.lex_state = 158},
    [217] = {.lex_state = 163},
    [218] = {.lex_state = 114},
    [219] = {.lex_state = 166},
    [220] = {.lex_state = 120},
    [221] = {.lex_state = 114},
    [222] = {.lex_state = 167},
    [223] = {.lex_state = 114},
    [224] = {.lex_state = 114},
    [225] = {.lex_state = 114},
    [226] = {.lex_state = 114},
    [227] = {.lex_state = 114},
    [228] = {.lex_state = 114},
    [229] = {.lex_state = 167},
    [230] = {.lex_state = 167},
    [231] = {.lex_state = 167},
    [232] = {.lex_state = 167},
    [233] = {.lex_state = 167},
    [234] = {.lex_state = 162},
    [235] = {.lex_state = 114},
    [236] = {.lex_state = 120},
    [237] = {.lex_state = 168},
    [238] = {.lex_state = 118},
    [239] = {.lex_state = 114},
    [240] = {.lex_state = 114},
    [241] = {.lex_state = 114},
    [242] = {.lex_state = 114},
    [243] = {.lex_state = 114},
    [244] = {.lex_state = 114},
    [245] = {.lex_state = 114},
    [246] = {.lex_state = 120},
    [247] = {.lex_state = 148},
    [248] = {.lex_state = 118},
    [249] = {.lex_state = 120},
    [250] = {.lex_state = 120},
    [251] = {.lex_state = 149},
    [252] = {.lex_state = 168},
    [253] = {.lex_state = 168},
    [254] = {.lex_state = 168},
    [255] = {.lex_state = 168},
    [256] = {.lex_state = 168},
    [257] = {.lex_state = 163},
    [258] = {.lex_state = 114},
    [259] = {.lex_state = 114},
    [260] = {.lex_state = 169},
    [261] = {.lex_state = 114},
    [262] = {.lex_state = 114},
    [263] = {.lex_state = 114},
    [264] = {.lex_state = 114},
    [265] = {.lex_state = 114},
    [266] = {.lex_state = 114},
    [267] = {.lex_state = 120},
    [268] = {.lex_state = 169},
    [269] = {.lex_state = 169},
    [270] = {.lex_state = 169},
    [271] = {.lex_state = 169},
    [272] = {.lex_state = 169},
    [273] = {.lex_state = 149},
    [274] = {.lex_state = 120},
    [275] = {.lex_state = 114},
    [276] = {.lex_state = 170},
    [277] = {.lex_state = 114},
    [278] = {.lex_state = 114},
    [279] = {.lex_state = 114},
    [280] = {.lex_state = 114},
    [281] = {.lex_state = 114},
    [282] = {.lex_state = 114},
    [283] = {.lex_state = 170},
    [284] = {.lex_state = 170},
    [285] = {.lex_state = 170},
    [286] = {.lex_state = 170},
    [287] = {.lex_state = 170},
    [288] = {.lex_state = 152},
    [289] = {.lex_state = 143, .external_tokens = 2},
    [290] = {.lex_state = 143, .external_tokens = 2},
    [291] = {.lex_state = 143, .external_tokens = 2},
    [292] = {.lex_state = 143, .external_tokens = 2},
    [293] = {.lex_state = 171, .external_tokens = 2},
    [294] = {.lex_state = 143, .external_tokens = 2},
    [295] = {.lex_state = 152},
    [296] = {.lex_state = 153},
    [297] = {.lex_state = 153},
    [298] = {.lex_state = 154},
    [299] = {.lex_state = 145},
    [300] = {.lex_state = 152},
    [301] = {.lex_state = 153},
    [302] = {.lex_state = 153},
    [303] = {.lex_state = 154},
    [304] = {.lex_state = 120, .external_tokens = 2},
    [305] = {.lex_state = 155},
    [306] = {.lex_state = 153},
    [307] = {.lex_state = 155},
    [308] = {.lex_state = 120, .external_tokens = 2},
    [309] = {.lex_state = 154},
    [310] = {.lex_state = 120, .external_tokens = 2},
    [311] = {.lex_state = 154},
    [312] = {.lex_state = 120, .external_tokens = 2},
    [313] = {.lex_state = 157},
    [314] = {.lex_state = 120, .external_tokens = 2},
    [315] = {.lex_state = 155},
    [316] = {.lex_state = 153},
    [317] = {.lex_state = 155},
    [318] = {.lex_state = 154},
    [319] = {.lex_state = 157},
    [320] = {.lex_state = 133, .external_tokens = 2},
    [321] = {.lex_state = 120, .external_tokens = 2},
    [322] = {.lex_state = 158},
    [323] = {.lex_state = 159},
    [324] = {.lex_state = 119},
    [325] = {.lex_state = 114},
    [326] = {.lex_state = 120, .external_tokens = 2},
    [327] = {.lex_state = 160},
    [328] = {.lex_state = 119},
    [329] = {.lex_state = 120, .external_tokens = 2},
    [330] = {.lex_state = 120, .external_tokens = 2},
    [331] = {.lex_state = 163},
    [332] = {.lex_state = 114},
    [333] = {.lex_state = 166},
    [334] = {.lex_state = 120, .external_tokens = 2},
    [335] = {.lex_state = 119},
    [336] = {.lex_state = 114},
    [337] = {.lex_state = 120, .external_tokens = 2},
    [338] = {.lex_state = 160},
    [339] = {.lex_state = 119},
    [340] = {.lex_state = 120, .external_tokens = 2},
    [341] = {.lex_state = 120, .external_tokens = 2},
    [342] = {.lex_state = 163},
    [343] = {.lex_state = 114},
    [344] = {.lex_state = 166},
    [345] = {.lex_state = 120, .external_tokens = 2},
    [346] = {.lex_state = 120, .external_tokens = 2},
    [347] = {.lex_state = 168},
    [348] = {.lex_state = 118},
    [349] = {.lex_state = 114},
    [350] = {.lex_state = 120, .external_tokens = 2},
    [351] = {.lex_state = 148},
    [352] = {.lex_state = 118},
    [353] = {.lex_state = 120, .external_tokens = 2},
    [354] = {.lex_state = 120, .external_tokens = 2},
    [355] = {.lex_state = 163},
    [356] = {.lex_state = 114},
    [357] = {.lex_state = 169},
    [358] = {.lex_state = 120, .external_tokens = 2},
    [359] = {.lex_state = 171, .external_tokens = 2},
    [360] = {.lex_state = 172, .external_tokens = 2},
    [361] = {.lex_state = 174, .external_tokens = 2},
    [362] = {.lex_state = 114},
    [363] = {.lex_state = 134},
    [364] = {.lex_state = 115, .external_tokens = 2},
    [365] = {.lex_state = 134},
    [366] = {.lex_state = 152},
    [367] = {.lex_state = 114},
    [368] = {.lex_state = 115, .external_tokens = 2},
    [369] = {.lex_state = 153},
    [370] = {.lex_state = 114},
    [371] = {.lex_state = 115, .external_tokens = 2},
    [372] = {.lex_state = 152},
    [373] = {.lex_state = 152},
    [374] = {.lex_state = 117},
    [375] = {.lex_state = 172, .external_tokens = 2},
    [376] = {.lex_state = 117},
    [377] = {.lex_state = 172, .external_tokens = 2},
    [378] = {.lex_state = 172, .external_tokens = 2},
    [379] = {.lex_state = 175},
    [380] = {.lex_state = 176, .external_tokens = 3},
    [381] = {.lex_state = 114},
    [382] = {.lex_state = 154},
    [383] = {.lex_state = 152},
    [384] = {.lex_state = 153},
    [385] = {.lex_state = 116},
    [386] = {.lex_state = 176, .external_tokens = 3},
    [387] = {.lex_state = 180, .external_tokens = 4},
    [388] = {.lex_state = 115, .external_tokens = 2},
    [389] = {.lex_state = 133, .external_tokens = 2},
    [390] = {.lex_state = 181, .external_tokens = 2},
    [391] = {.lex_state = 114},
    [392] = {.lex_state = 114},
    [393] = {.lex_state = 114},
    [394] = {.lex_state = 116},
    [395] = {.lex_state = 114},
    [396] = {.lex_state = 117},
    [397] = {.lex_state = 117},
    [398] = {.lex_state = 180, .external_tokens = 4},
    [399] = {.lex_state = 115, .external_tokens = 2},
    [400] = {.lex_state = 180, .external_tokens = 4},
    [401] = {.lex_state = 180, .external_tokens = 4},
    [402] = {.lex_state = 180, .external_tokens = 4},
    [403] = {.lex_state = 134},
    [404] = {.lex_state = 180, .external_tokens = 4},
    [405] = {.lex_state = 181, .external_tokens = 2},
    [406] = {.lex_state = 180, .external_tokens = 4},
    [407] = {.lex_state = 180, .external_tokens = 4},
    [408] = {.lex_state = 175},
    [409] = {.lex_state = 176, .external_tokens = 3},
    [410] = {.lex_state = 114},
    [411] = {.lex_state = 154},
    [412] = {.lex_state = 116},
    [413] = {.lex_state = 176, .external_tokens = 3},
    [414] = {.lex_state = 180, .external_tokens = 4},
    [415] = {.lex_state = 115, .external_tokens = 2},
    [416] = {.lex_state = 180, .external_tokens = 4},
    [417] = {.lex_state = 182, .external_tokens = 4},
    [418] = {.lex_state = 180, .external_tokens = 4},
    [419] = {.lex_state = 182, .external_tokens = 4},
    [420] = {.lex_state = 180, .external_tokens = 4},
    [421] = {.lex_state = 174},
    [422] = {.lex_state = 183},
    [423] = {.lex_state = 116},
    [424] = {.lex_state = 176, .external_tokens = 3},
    [425] = {.lex_state = 180, .external_tokens = 4},
    [426] = {.lex_state = 116},
    [427] = {.lex_state = 185},
    [428] = {.lex_state = 186},
    [429] = {.lex_state = 153},
    [430] = {.lex_state = 153},
    [431] = {.lex_state = 154},
    [432] = {.lex_state = 185},
    [433] = {.lex_state = 186},
    [434] = {.lex_state = 153},
    [435] = {.lex_state = 153},
    [436] = {.lex_state = 154},
    [437] = {.lex_state = 116},
    [438] = {.lex_state = 187},
    [439] = {.lex_state = 187},
    [440] = {.lex_state = 154},
    [441] = {.lex_state = 116},
    [442] = {.lex_state = 117},
    [443] = {.lex_state = 154},
    [444] = {.lex_state = 183},
    [445] = {.lex_state = 116},
    [446] = {.lex_state = 114},
    [447] = {.lex_state = 152},
    [448] = {.lex_state = 116},
    [449] = {.lex_state = 187},
    [450] = {.lex_state = 154},
    [451] = {.lex_state = 183},
    [452] = {.lex_state = 153},
    [453] = {.lex_state = 114},
    [454] = {.lex_state = 188},
    [455] = {.lex_state = 189},
    [456] = {.lex_state = 114},
    [457] = {.lex_state = 114},
    [458] = {.lex_state = 114},
    [459] = {.lex_state = 114},
    [460] = {.lex_state = 114},
    [461] = {.lex_state = 114},
    [462] = {.lex_state = 114},
    [463] = {.lex_state = 189},
    [464] = {.lex_state = 189},
    [465] = {.lex_state = 189},
    [466] = {.lex_state = 189},
    [467] = {.lex_state = 189},
    [468] = {.lex_state = 114},
    [469] = {.lex_state = 190},
    [470] = {.lex_state = 114},
    [471] = {.lex_state = 114},
    [472] = {.lex_state = 114},
    [473] = {.lex_state = 114},
    [474] = {.lex_state = 114},
    [475] = {.lex_state = 114},
    [476] = {.lex_state = 190},
    [477] = {.lex_state = 190},
    [478] = {.lex_state = 190},
    [479] = {.lex_state = 190},
    [480] = {.lex_state = 190},
    [481] = {.lex_state = 114},
    [482] = {.lex_state = 176, .external_tokens = 3},
    [483] = {.lex_state = 188},
    [484] = {.lex_state = 114},
    [485] = {.lex_state = 176, .external_tokens = 3},
    [486] = {.lex_state = 180, .external_tokens = 4},
    [487] = {.lex_state = 188},
    [488] = {.lex_state = 180, .external_tokens = 4},
    [489] = {.lex_state = 188},
    [490] = {.lex_state = 176, .external_tokens = 3},
    [491] = {.lex_state = 180, .external_tokens = 4},
    [492] = {.lex_state = 115, .external_tokens = 2},
    [493] = {.lex_state = 191},
    [494] = {.lex_state = 114},
    [495] = {.lex_state = 116},
    [496] = {.lex_state = 205, .external_tokens = 4},
    [497] = {.lex_state = 180, .external_tokens = 4},
    [498] = {.lex_state = 205, .external_tokens = 4},
    [499] = {.lex_state = 116},
    [500] = {.lex_state = 208, .external_tokens = 4},
    [501] = {.lex_state = 205, .external_tokens = 4},
    [502] = {.lex_state = 180, .external_tokens = 4},
    [503] = {.lex_state = 180, .external_tokens = 4},
    [504] = {.lex_state = 176, .external_tokens = 3},
    [505] = {.lex_state = 208, .external_tokens = 4},
    [506] = {.lex_state = 176, .external_tokens = 3},
    [507] = {.lex_state = 180, .external_tokens = 4},
    [508] = {.lex_state = 189},
    [509] = {.lex_state = 114},
    [510] = {.lex_state = 176, .external_tokens = 3},
    [511] = {.lex_state = 161},
    [512] = {.lex_state = 176, .external_tokens = 3},
    [513] = {.lex_state = 205, .external_tokens = 4},
    [514] = {.lex_state = 205, .external_tokens = 4},
    [515] = {.lex_state = 191},
    [516] = {.lex_state = 180, .external_tokens = 4},
    [517] = {.lex_state = 191},
    [518] = {.lex_state = 161},
    [519] = {.lex_state = 176, .external_tokens = 3},
    [520] = {.lex_state = 209, .external_tokens = 4},
    [521] = {.lex_state = 180, .external_tokens = 4},
    [522] = {.lex_state = 163},
    [523] = {.lex_state = 114},
    [524] = {.lex_state = 116},
    [525] = {.lex_state = 190},
    [526] = {.lex_state = 114},
    [527] = {.lex_state = 188},
    [528] = {.lex_state = 114},
    [529] = {.lex_state = 190},
    [530] = {.lex_state = 190},
    [531] = {.lex_state = 176, .external_tokens = 3},
    [532] = {.lex_state = 209, .external_tokens = 4},
    [533] = {.lex_state = 180, .external_tokens = 4},
    [534] = {.lex_state = 161},
    [535] = {.lex_state = 176, .external_tokens = 3},
    [536] = {.lex_state = 211, .external_tokens = 4},
    [537] = {.lex_state = 114},
    [538] = {.lex_state = 211, .external_tokens = 4},
    [539] = {.lex_state = 180, .external_tokens = 4},
    [540] = {.lex_state = 211, .external_tokens = 4},
    [541] = {.lex_state = 211, .external_tokens = 4},
    [542] = {.lex_state = 180, .external_tokens = 4},
    [543] = {.lex_state = 161},
    [544] = {.lex_state = 176, .external_tokens = 3},
    [545] = {.lex_state = 211, .external_tokens = 4},
    [546] = {.lex_state = 133, .external_tokens = 2},
    [547] = {.lex_state = 174},
    [548] = {.lex_state = 116},
    [549] = {.lex_state = 176, .external_tokens = 3},
    [550] = {.lex_state = 133, .external_tokens = 2},
    [551] = {.lex_state = 188},
    [552] = {.lex_state = 176, .external_tokens = 3},
    [553] = {.lex_state = 188},
    [554] = {.lex_state = 176, .external_tokens = 3},
    [555] = {.lex_state = 133, .external_tokens = 2},
    [556] = {.lex_state = 133, .external_tokens = 2},
    [557] = {.lex_state = 176, .external_tokens = 3},
    [558] = {.lex_state = 191},
    [559] = {.lex_state = 114},
    [560] = {.lex_state = 116},
    [561] = {.lex_state = 213, .external_tokens = 2},
    [562] = {.lex_state = 133, .external_tokens = 2},
    [563] = {.lex_state = 213, .external_tokens = 2},
    [564] = {.lex_state = 116},
    [565] = {.lex_state = 214, .external_tokens = 2},
    [566] = {.lex_state = 213, .external_tokens = 2},
    [567] = {.lex_state = 133, .external_tokens = 2},
    [568] = {.lex_state = 133, .external_tokens = 2},
    [569] = {.lex_state = 176, .external_tokens = 3},
    [570] = {.lex_state = 214, .external_tokens = 2},
    [571] = {.lex_state = 176, .external_tokens = 3},
    [572] = {.lex_state = 133, .external_tokens = 2},
    [573] = {.lex_state = 189},
    [574] = {.lex_state = 114},
    [575] = {.lex_state = 176, .external_tokens = 3},
    [576] = {.lex_state = 161},
    [577] = {.lex_state = 176, .external_tokens = 3},
    [578] = {.lex_state = 213, .external_tokens = 2},
    [579] = {.lex_state = 213, .external_tokens = 2},
    [580] = {.lex_state = 161},
    [581] = {.lex_state = 176, .external_tokens = 3},
    [582] = {.lex_state = 215, .external_tokens = 2},
    [583] = {.lex_state = 133, .external_tokens = 2},
    [584] = {.lex_state = 163},
    [585] = {.lex_state = 114},
    [586] = {.lex_state = 116},
    [587] = {.lex_state = 176, .external_tokens = 3},
    [588] = {.lex_state = 215, .external_tokens = 2},
    [589] = {.lex_state = 133, .external_tokens = 2},
    [590] = {.lex_state = 161},
    [591] = {.lex_state = 176, .external_tokens = 3},
    [592] = {.lex_state = 216, .external_tokens = 2},
    [593] = {.lex_state = 114},
    [594] = {.lex_state = 216, .external_tokens = 2},
    [595] = {.lex_state = 133, .external_tokens = 2},
    [596] = {.lex_state = 216, .external_tokens = 2},
    [597] = {.lex_state = 216, .external_tokens = 2},
    [598] = {.lex_state = 133, .external_tokens = 2},
    [599] = {.lex_state = 161},
    [600] = {.lex_state = 176, .external_tokens = 3},
    [601] = {.lex_state = 216, .external_tokens = 2},
    [602] = {.lex_state = 114},
    [603] = {.lex_state = 115, .external_tokens = 2},
    [604] = {.lex_state = 171, .external_tokens = 2},
    [605] = {.lex_state = 114},
    [606] = {.lex_state = 114},
    [607] = {.lex_state = 114},
    [608] = {.lex_state = 114},
    [609] = {.lex_state = 114},
    [610] = {.lex_state = 114},
    [611] = {.lex_state = 114},
    [612] = {.lex_state = 217, .external_tokens = 2},
    [613] = {.lex_state = 114},
    [614] = {.lex_state = 171, .external_tokens = 2},
    [615] = {.lex_state = 171, .external_tokens = 2},
    [616] = {.lex_state = 171, .external_tokens = 2},
    [617] = {.lex_state = 171, .external_tokens = 2},
    [618] = {.lex_state = 171, .external_tokens = 2},
    [619] = {.lex_state = 171, .external_tokens = 2},
    [620] = {.lex_state = 171, .external_tokens = 2},
    [621] = {.lex_state = 115, .external_tokens = 2},
    [622] = {.lex_state = 171, .external_tokens = 2},
    [623] = {.lex_state = 217, .external_tokens = 2},
    [624] = {.lex_state = 218},
    [625] = {.lex_state = 114},
    [626] = {.lex_state = 176, .external_tokens = 3},
    [627] = {.lex_state = 114},
    [628] = {.lex_state = 116},
    [629] = {.lex_state = 114},
    [630] = {.lex_state = 114},
    [631] = {.lex_state = 114},
    [632] = {.lex_state = 116},
    [633] = {.lex_state = 114},
    [634] = {.lex_state = 114},
    [635] = {.lex_state = 116},
    [636] = {.lex_state = 114},
    [637] = {.lex_state = 117},
    [638] = {.lex_state = 157},
    [639] = {.lex_state = 120, .external_tokens = 2},
    [640] = {.lex_state = 114},
    [641] = {.lex_state = 219},
    [642] = {.lex_state = 117},
    [643] = {.lex_state = 117},
    [644] = {.lex_state = 114},
    [645] = {.lex_state = 114},
    [646] = {.lex_state = 114},
    [647] = {.lex_state = 150},
    [648] = {.lex_state = 148},
    [649] = {.lex_state = 120, .external_tokens = 2},
    [650] = {.lex_state = 120, .external_tokens = 2},
    [651] = {.lex_state = 220, .external_tokens = 2},
    [652] = {.lex_state = 181, .external_tokens = 5},
    [653] = {.lex_state = 180, .external_tokens = 4},
    [654] = {.lex_state = 181, .external_tokens = 5},
    [655] = {.lex_state = 133, .external_tokens = 5},
    [656] = {.lex_state = 115, .external_tokens = 2},
    [657] = {.lex_state = 133, .external_tokens = 5},
    [658] = {.lex_state = 133, .external_tokens = 5},
    [659] = {.lex_state = 216, .external_tokens = 5},
    [660] = {.lex_state = 214, .external_tokens = 5},
    [661] = {.lex_state = 213, .external_tokens = 5},
    [662] = {.lex_state = 133, .external_tokens = 5},
    [663] = {.lex_state = 188},
    [664] = {.lex_state = 133, .external_tokens = 5},
    [665] = {.lex_state = 116},
    [666] = {.lex_state = 153},
    [667] = {.lex_state = 153},
    [668] = {.lex_state = 154},
    [669] = {.lex_state = 134},
    [670] = {.lex_state = 181, .external_tokens = 5},
    [671] = {.lex_state = 221, .external_tokens = 2},
    [672] = {.lex_state = 120, .external_tokens = 2},
    [673] = {.lex_state = 153},
    [674] = {.lex_state = 153},
    [675] = {.lex_state = 154},
    [676] = {.lex_state = 159},
    [677] = {.lex_state = 133, .external_tokens = 5},
    [678] = {.lex_state = 222, .external_tokens = 2},
    [679] = {.lex_state = 216, .external_tokens = 5},
    [680] = {.lex_state = 213, .external_tokens = 5},
    [681] = {.lex_state = 188},
    [682] = {.lex_state = 134},
    [683] = {.lex_state = 153},
    [684] = {.lex_state = 155},
    [685] = {.lex_state = 120, .external_tokens = 2},
    [686] = {.lex_state = 154},
    [687] = {.lex_state = 120, .external_tokens = 2},
    [688] = {.lex_state = 133, .external_tokens = 5},
    [689] = {.lex_state = 176, .external_tokens = 3},
    [690] = {.lex_state = 115, .external_tokens = 2},
    [691] = {.lex_state = 133, .external_tokens = 5},
    [692] = {.lex_state = 181, .external_tokens = 5},
    [693] = {.lex_state = 180, .external_tokens = 4},
    [694] = {.lex_state = 181, .external_tokens = 5},
    [695] = {.lex_state = 214, .external_tokens = 5},
    [696] = {.lex_state = 213, .external_tokens = 5},
    [697] = {.lex_state = 133, .external_tokens = 5},
    [698] = {.lex_state = 133, .external_tokens = 5},
    [699] = {.lex_state = 216, .external_tokens = 5},
    [700] = {.lex_state = 133, .external_tokens = 5},
    [701] = {.lex_state = 176, .external_tokens = 3},
    [702] = {.lex_state = 214, .external_tokens = 5},
    [703] = {.lex_state = 223},
    [704] = {.lex_state = 114},
    [705] = {.lex_state = 224, .external_tokens = 2},
    [706] = {.lex_state = 114},
    [707] = {.lex_state = 224, .external_tokens = 2},
    [708] = {.lex_state = 224, .external_tokens = 2},
    [709] = {.lex_state = 114},
    [710] = {.lex_state = 133, .external_tokens = 5},
    [711] = {.lex_state = 115, .external_tokens = 2},
    [712] = {.lex_state = 133, .external_tokens = 5},
    [713] = {.lex_state = 163},
    [714] = {.lex_state = 114},
    [715] = {.lex_state = 116},
    [716] = {.lex_state = 176, .external_tokens = 3},
    [717] = {.lex_state = 215, .external_tokens = 5},
    [718] = {.lex_state = 133, .external_tokens = 5},
    [719] = {.lex_state = 120, .external_tokens = 2},
    [720] = {.lex_state = 155},
    [721] = {.lex_state = 120, .external_tokens = 2},
    [722] = {.lex_state = 154},
    [723] = {.lex_state = 120, .external_tokens = 2},
    [724] = {.lex_state = 157},
    [725] = {.lex_state = 218},
    [726] = {.lex_state = 176, .external_tokens = 3},
    [727] = {.lex_state = 114},
    [728] = {.lex_state = 120, .external_tokens = 2},
    [729] = {.lex_state = 120, .external_tokens = 2},
    [730] = {.lex_state = 120, .external_tokens = 2},
    [731] = {.lex_state = 120, .external_tokens = 2},
    [732] = {.lex_state = 163},
    [733] = {.lex_state = 114},
    [734] = {.lex_state = 114},
    [735] = {.lex_state = 225},
    [736] = {.lex_state = 114},
    [737] = {.lex_state = 225},
    [738] = {.lex_state = 225},
    [739] = {.lex_state = 114},
    [740] = {.lex_state = 181, .external_tokens = 5},
    [741] = {.lex_state = 167, .external_tokens = 2},
    [742] = {.lex_state = 114},
    [743] = {.lex_state = 167, .external_tokens = 2},
    [744] = {.lex_state = 216, .external_tokens = 5},
    [745] = {.lex_state = 133, .external_tokens = 5},
    [746] = {.lex_state = 167, .external_tokens = 2},
    [747] = {.lex_state = 120, .external_tokens = 2},
    [748] = {.lex_state = 224, .external_tokens = 2},
    [749] = {.lex_state = 176, .external_tokens = 3},
    [750] = {.lex_state = 213, .external_tokens = 5},
    [751] = {.lex_state = 116},
    [752] = {.lex_state = 176, .external_tokens = 3},
    [753] = {.lex_state = 133, .external_tokens = 5},
    [754] = {.lex_state = 133, .external_tokens = 5},
    [755] = {.lex_state = 213, .external_tokens = 5},
    [756] = {.lex_state = 133, .external_tokens = 5},
    [757] = {.lex_state = 116},
    [758] = {.lex_state = 187},
    [759] = {.lex_state = 116},
    [760] = {.lex_state = 154},
    [761] = {.lex_state = 116},
    [762] = {.lex_state = 183},
    [763] = {.lex_state = 116},
    [764] = {.lex_state = 176, .external_tokens = 3},
    [765] = {.lex_state = 133, .external_tokens = 5},
    [766] = {.lex_state = 176, .external_tokens = 3},
    [767] = {.lex_state = 133, .external_tokens = 5},
    [768] = {.lex_state = 181, .external_tokens = 5},
    [769] = {.lex_state = 176, .external_tokens = 3},
    [770] = {.lex_state = 226},
    [771] = {.lex_state = 151},
    [772] = {.lex_state = 154},
    [773] = {.lex_state = 133, .external_tokens = 5},
    [774] = {.lex_state = 168},
    [775] = {.lex_state = 150},
    [776] = {.lex_state = 120, .external_tokens = 2},
    [777] = {.lex_state = 149},
    [778] = {.lex_state = 120, .external_tokens = 2},
    [779] = {.lex_state = 120, .external_tokens = 2},
    [780] = {.lex_state = 172, .external_tokens = 2},
    [781] = {.lex_state = 175},
    [782] = {.lex_state = 114},
    [783] = {.lex_state = 120, .external_tokens = 2},
    [784] = {.lex_state = 120, .external_tokens = 2},
    [785] = {.lex_state = 152},
    [786] = {.lex_state = 219},
    [787] = {.lex_state = 151},
    [788] = {.lex_state = 152},
    [789] = {.lex_state = 157},
    [790] = {.lex_state = 120, .external_tokens = 2},
    [791] = {.lex_state = 153},
    [792] = {.lex_state = 152},
    [793] = {.lex_state = 174},
    [794] = {.lex_state = 188},
    [795] = {.lex_state = 176, .external_tokens = 3},
    [796] = {.lex_state = 133, .external_tokens = 5},
    [797] = {.lex_state = 190},
    [798] = {.lex_state = 189},
    [799] = {.lex_state = 114},
    [800] = {.lex_state = 176, .external_tokens = 3},
    [801] = {.lex_state = 161},
    [802] = {.lex_state = 213, .external_tokens = 5},
    [803] = {.lex_state = 176, .external_tokens = 3},
    [804] = {.lex_state = 191},
    [805] = {.lex_state = 161},
    [806] = {.lex_state = 176, .external_tokens = 3},
    [807] = {.lex_state = 215, .external_tokens = 5},
    [808] = {.lex_state = 133, .external_tokens = 5},
    [809] = {.lex_state = 114},
    [810] = {.lex_state = 227},
    [811] = {.lex_state = 114},
    [812] = {.lex_state = 120, .external_tokens = 2},
    [813] = {.lex_state = 227},
    [814] = {.lex_state = 227},
    [815] = {.lex_state = 163},
    [816] = {.lex_state = 161},
    [817] = {.lex_state = 176, .external_tokens = 3},
    [818] = {.lex_state = 216, .external_tokens = 5},
    [819] = {.lex_state = 161},
    [820] = {.lex_state = 176, .external_tokens = 3},
    [821] = {.lex_state = 216, .external_tokens = 5},
    [822] = {.lex_state = 133, .external_tokens = 5},
    [823] = {.lex_state = 120, .external_tokens = 2},
    [824] = {.lex_state = 114},
    [825] = {.lex_state = 148},
    [826] = {.lex_state = 120, .external_tokens = 2},
    [827] = {.lex_state = 120, .external_tokens = 2},
    [828] = {.lex_state = 228, .external_tokens = 2},
    [829] = {.lex_state = 188},
    [830] = {.lex_state = 229, .external_tokens = 2},
    [831] = {.lex_state = 153},
    [832] = {.lex_state = 154},
    [833] = {.lex_state = 160},
    [834] = {.lex_state = 120, .external_tokens = 2},
    [835] = {.lex_state = 176, .external_tokens = 3},
    [836] = {.lex_state = 114},
    [837] = {.lex_state = 229, .external_tokens = 2},
    [838] = {.lex_state = 114},
    [839] = {.lex_state = 162, .external_tokens = 2},
    [840] = {.lex_state = 114},
    [841] = {.lex_state = 162, .external_tokens = 2},
    [842] = {.lex_state = 162, .external_tokens = 2},
    [843] = {.lex_state = 229, .external_tokens = 2},
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
        [sym_module] = STATE(18),
        [sym__statement] = STATE(655),
        [sym__simple_statement] = STATE(656),
        [sym_print_statement] = STATE(5),
        [sym_expression_statement] = STATE(5),
        [sym_return_statement] = STATE(5),
        [sym_delete_statement] = STATE(5),
        [sym__compound_statement] = STATE(657),
        [sym_if_statement] = STATE(658),
        [sym_elif_clause] = STATE(659),
        [sym_else_clause] = STATE(660),
        [sym_for_statement] = STATE(658),
        [sym_while_statement] = STATE(658),
        [sym_try_statement] = STATE(658),
        [sym_except_clause] = STATE(661),
        [sym_finally_clause] = STATE(662),
        [sym_with_statement] = STATE(658),
        [sym_with_item] = STATE(663),
        [sym_function_definition] = STATE(664),
        [sym_parameters] = STATE(665),
        [sym_default_parameter] = STATE(666),
        [sym_list_splat_parameter] = STATE(667),
        [sym_dictionary_splat_parameter] = STATE(668),
        [sym_class_definition] = STATE(664),
        [sym_decorated_definition] = STATE(658),
        [sym_decorator] = STATE(669),
        [sym__suite] = STATE(670),
        [sym_arguments] = STATE(364),
        [sym_expression_list] = STATE(671),
        [sym_dotted_name] = STATE(361),
        [sym__expression] = STATE(672),
        [sym_binary_operator] = STATE(17),
        [sym_unary_operator] = STATE(17),
        [sym_subscript] = STATE(17),
        [sym_call] = STATE(17),
        [sym_keyword_argument] = STATE(673),
        [sym_list_splat_argument] = STATE(674),
        [sym_dictionary_splat_argument] = STATE(675),
        [sym_list] = STATE(17),
        [sym_list_comprehension] = STATE(17),
        [sym_dictionary] = STATE(17),
        [sym_dictionary_comprehension] = STATE(17),
        [sym_pair] = STATE(676),
        [sym_set] = STATE(17),
        [sym_set_comprehension] = STATE(17),
        [aux_sym_module_repeat1] = STATE(677),
        [aux_sym_print_statement_repeat1] = STATE(678),
        [aux_sym_if_statement_repeat1] = STATE(679),
        [aux_sym_try_statement_repeat1] = STATE(680),
        [aux_sym_with_statement_repeat1] = STATE(681),
        [aux_sym_parameters_repeat1] = STATE(432),
        [aux_sym_decorated_definition_repeat1] = STATE(682),
        [aux_sym_dotted_name_repeat1] = STATE(375),
        [aux_sym_subscript_repeat1] = STATE(55),
        [aux_sym_call_repeat1] = STATE(299),
        [aux_sym_call_repeat2] = STATE(683),
        [aux_sym_dictionary_repeat1] = STATE(327),
        [ts_builtin_sym_end] = ACTIONS(1),
        [anon_sym_SEMI] = ACTIONS(3),
        [anon_sym_print] = ACTIONS(5),
        [anon_sym_COMMA] = ACTIONS(7),
        [anon_sym_return] = ACTIONS(9),
        [anon_sym_del] = ACTIONS(11),
        [sym_pass_statement] = ACTIONS(13),
        [sym_break_statement] = ACTIONS(13),
        [sym_continue_statement] = ACTIONS(13),
        [anon_sym_if] = ACTIONS(15),
        [anon_sym_COLON] = ACTIONS(17),
        [anon_sym_elif] = ACTIONS(19),
        [anon_sym_else] = ACTIONS(21),
        [anon_sym_for] = ACTIONS(23),
        [anon_sym_in] = ACTIONS(25),
        [anon_sym_while] = ACTIONS(27),
        [anon_sym_try] = ACTIONS(29),
        [anon_sym_except] = ACTIONS(31),
        [anon_sym_as] = ACTIONS(33),
        [anon_sym_finally] = ACTIONS(35),
        [anon_sym_with] = ACTIONS(37),
        [anon_sym_def] = ACTIONS(39),
        [anon_sym_LPAREN] = ACTIONS(41),
        [anon_sym_RPAREN] = ACTIONS(43),
        [anon_sym_EQ] = ACTIONS(45),
        [anon_sym_STAR] = ACTIONS(47),
        [anon_sym_class] = ACTIONS(49),
        [anon_sym_AT] = ACTIONS(51),
        [anon_sym_DOT] = ACTIONS(53),
        [anon_sym_PLUS] = ACTIONS(55),
        [anon_sym_DASH] = ACTIONS(55),
        [anon_sym_SLASH] = ACTIONS(55),
        [anon_sym_STAR_STAR] = ACTIONS(57),
        [anon_sym_PIPE] = ACTIONS(55),
        [anon_sym_AMP] = ACTIONS(55),
        [anon_sym_CARET] = ACTIONS(55),
        [anon_sym_LT_LT] = ACTIONS(55),
        [anon_sym_GT_GT] = ACTIONS(55),
        [anon_sym_and] = ACTIONS(59),
        [anon_sym_or] = ACTIONS(59),
        [anon_sym_not] = ACTIONS(61),
        [anon_sym_LBRACK] = ACTIONS(63),
        [anon_sym_DOT_DOT_DOT] = ACTIONS(65),
        [anon_sym_RBRACK] = ACTIONS(67),
        [anon_sym_LBRACE] = ACTIONS(69),
        [anon_sym_RBRACE] = ACTIONS(71),
        [sym_number] = ACTIONS(73),
        [sym_identifier] = ACTIONS(75),
        [sym_comment] = ACTIONS(77),
        [sym__newline] = ACTIONS(79),
        [sym__indent] = ACTIONS(81),
        [sym__dedent] = ACTIONS(83),
    },
    [1] = {
        [sym_module] = STATE(18),
        [sym__statement] = STATE(19),
        [sym__simple_statement] = STATE(20),
        [sym_print_statement] = STATE(5),
        [sym_expression_statement] = STATE(5),
        [sym_return_statement] = STATE(5),
        [sym_delete_statement] = STATE(5),
        [sym__compound_statement] = STATE(21),
        [sym_if_statement] = STATE(22),
        [sym_for_statement] = STATE(22),
        [sym_while_statement] = STATE(22),
        [sym_try_statement] = STATE(22),
        [sym_with_statement] = STATE(22),
        [sym_function_definition] = STATE(22),
        [sym_class_definition] = STATE(22),
        [sym_decorated_definition] = STATE(22),
        [sym_decorator] = STATE(23),
        [sym__expression] = STATE(24),
        [sym_binary_operator] = STATE(17),
        [sym_unary_operator] = STATE(17),
        [sym_subscript] = STATE(17),
        [sym_call] = STATE(17),
        [sym_list] = STATE(17),
        [sym_list_comprehension] = STATE(17),
        [sym_dictionary] = STATE(17),
        [sym_dictionary_comprehension] = STATE(17),
        [sym_set] = STATE(17),
        [sym_set_comprehension] = STATE(17),
        [aux_sym_module_repeat1] = STATE(25),
        [aux_sym_decorated_definition_repeat1] = STATE(26),
        [ts_builtin_sym_end] = ACTIONS(85),
        [anon_sym_print] = ACTIONS(87),
        [anon_sym_return] = ACTIONS(89),
        [anon_sym_del] = ACTIONS(91),
        [sym_pass_statement] = ACTIONS(93),
        [sym_break_statement] = ACTIONS(93),
        [sym_continue_statement] = ACTIONS(93),
        [anon_sym_if] = ACTIONS(95),
        [anon_sym_for] = ACTIONS(97),
        [anon_sym_while] = ACTIONS(99),
        [anon_sym_try] = ACTIONS(101),
        [anon_sym_with] = ACTIONS(103),
        [anon_sym_def] = ACTIONS(105),
        [anon_sym_class] = ACTIONS(107),
        [anon_sym_AT] = ACTIONS(109),
        [anon_sym_not] = ACTIONS(111),
        [anon_sym_LBRACK] = ACTIONS(113),
        [anon_sym_LBRACE] = ACTIONS(115),
        [sym_number] = ACTIONS(117),
        [sym_identifier] = ACTIONS(119),
        [sym_comment] = ACTIONS(77),
    },
    [2] = {
        [sym__expression] = STATE(622),
        [sym_binary_operator] = STATE(17),
        [sym_unary_operator] = STATE(17),
        [sym_subscript] = STATE(17),
        [sym_call] = STATE(17),
        [sym_list] = STATE(17),
        [sym_list_comprehension] = STATE(17),
        [sym_dictionary] = STATE(17),
        [sym_dictionary_comprehension] = STATE(17),
        [sym_set] = STATE(17),
        [sym_set_comprehension] = STATE(17),
        [anon_sym_not] = ACTIONS(121),
        [anon_sym_LBRACK] = ACTIONS(113),
        [anon_sym_LBRACE] = ACTIONS(115),
        [sym_number] = ACTIONS(117),
        [sym_identifier] = ACTIONS(119),
        [sym_comment] = ACTIONS(77),
    },
    [3] = {
        [sym_expression_list] = STATE(621),
        [sym__expression] = STATE(604),
        [sym_binary_operator] = STATE(17),
        [sym_unary_operator] = STATE(17),
        [sym_subscript] = STATE(17),
        [sym_call] = STATE(17),
        [sym_list] = STATE(17),
        [sym_list_comprehension] = STATE(17),
        [sym_dictionary] = STATE(17),
        [sym_dictionary_comprehension] = STATE(17),
        [sym_set] = STATE(17),
        [sym_set_comprehension] = STATE(17),
        [anon_sym_not] = ACTIONS(121),
        [anon_sym_LBRACK] = ACTIONS(113),
        [anon_sym_LBRACE] = ACTIONS(115),
        [sym_number] = ACTIONS(117),
        [sym_identifier] = ACTIONS(119),
        [sym_comment] = ACTIONS(77),
    },
    [4] = {
        [sym_expression_list] = STATE(603),
        [sym__expression] = STATE(604),
        [sym_binary_operator] = STATE(17),
        [sym_unary_operator] = STATE(17),
        [sym_subscript] = STATE(17),
        [sym_call] = STATE(17),
        [sym_list] = STATE(17),
        [sym_list_comprehension] = STATE(17),
        [sym_dictionary] = STATE(17),
        [sym_dictionary_comprehension] = STATE(17),
        [sym_set] = STATE(17),
        [sym_set_comprehension] = STATE(17),
        [anon_sym_not] = ACTIONS(121),
        [anon_sym_LBRACK] = ACTIONS(113),
        [anon_sym_LBRACE] = ACTIONS(115),
        [sym_number] = ACTIONS(117),
        [sym_identifier] = ACTIONS(119),
        [sym_comment] = ACTIONS(77),
    },
    [5] = {
        [sym_comment] = ACTIONS(77),
        [sym__newline] = ACTIONS(123),
    },
    [6] = {
        [sym__expression] = STATE(590),
        [sym_binary_operator] = STATE(43),
        [sym_unary_operator] = STATE(43),
        [sym_subscript] = STATE(43),
        [sym_call] = STATE(43),
        [sym_list] = STATE(43),
        [sym_list_comprehension] = STATE(43),
        [sym_dictionary] = STATE(43),
        [sym_dictionary_comprehension] = STATE(43),
        [sym_set] = STATE(43),
        [sym_set_comprehension] = STATE(43),
        [anon_sym_not] = ACTIONS(125),
        [anon_sym_LBRACK] = ACTIONS(127),
        [anon_sym_LBRACE] = ACTIONS(129),
        [sym_number] = ACTIONS(131),
        [sym_identifier] = ACTIONS(133),
        [sym_comment] = ACTIONS(77),
    },
    [7] = {
        [sym_expression_list] = STATE(584),
        [sym__expression] = STATE(164),
        [sym_binary_operator] = STATE(43),
        [sym_unary_operator] = STATE(43),
        [sym_subscript] = STATE(43),
        [sym_call] = STATE(43),
        [sym_list] = STATE(43),
        [sym_list_comprehension] = STATE(43),
        [sym_dictionary] = STATE(43),
        [sym_dictionary_comprehension] = STATE(43),
        [sym_set] = STATE(43),
        [sym_set_comprehension] = STATE(43),
        [anon_sym_not] = ACTIONS(135),
        [anon_sym_LBRACK] = ACTIONS(127),
        [anon_sym_LBRACE] = ACTIONS(129),
        [sym_number] = ACTIONS(131),
        [sym_identifier] = ACTIONS(133),
        [sym_comment] = ACTIONS(77),
    },
    [8] = {
        [sym__expression] = STATE(580),
        [sym_binary_operator] = STATE(43),
        [sym_unary_operator] = STATE(43),
        [sym_subscript] = STATE(43),
        [sym_call] = STATE(43),
        [sym_list] = STATE(43),
        [sym_list_comprehension] = STATE(43),
        [sym_dictionary] = STATE(43),
        [sym_dictionary_comprehension] = STATE(43),
        [sym_set] = STATE(43),
        [sym_set_comprehension] = STATE(43),
        [anon_sym_not] = ACTIONS(125),
        [anon_sym_LBRACK] = ACTIONS(127),
        [anon_sym_LBRACE] = ACTIONS(129),
        [sym_number] = ACTIONS(131),
        [sym_identifier] = ACTIONS(133),
        [sym_comment] = ACTIONS(77),
    },
    [9] = {
        [anon_sym_COLON] = ACTIONS(137),
        [sym_comment] = ACTIONS(77),
    },
    [10] = {
        [sym_with_item] = STATE(551),
        [sym__expression] = STATE(455),
        [sym_binary_operator] = STATE(43),
        [sym_unary_operator] = STATE(43),
        [sym_subscript] = STATE(43),
        [sym_call] = STATE(43),
        [sym_list] = STATE(43),
        [sym_list_comprehension] = STATE(43),
        [sym_dictionary] = STATE(43),
        [sym_dictionary_comprehension] = STATE(43),
        [sym_set] = STATE(43),
        [sym_set_comprehension] = STATE(43),
        [anon_sym_not] = ACTIONS(139),
        [anon_sym_LBRACK] = ACTIONS(127),
        [anon_sym_LBRACE] = ACTIONS(129),
        [sym_number] = ACTIONS(131),
        [sym_identifier] = ACTIONS(133),
        [sym_comment] = ACTIONS(77),
    },
    [11] = {
        [sym_identifier] = ACTIONS(141),
        [sym_comment] = ACTIONS(77),
    },
    [12] = {
        [sym_identifier] = ACTIONS(143),
        [sym_comment] = ACTIONS(77),
    },
    [13] = {
        [sym_dotted_name] = STATE(361),
        [sym_identifier] = ACTIONS(145),
        [sym_comment] = ACTIONS(77),
    },
    [14] = {
        [sym__expression] = STATE(359),
        [sym_binary_operator] = STATE(17),
        [sym_unary_operator] = STATE(17),
        [sym_subscript] = STATE(17),
        [sym_call] = STATE(17),
        [sym_list] = STATE(17),
        [sym_list_comprehension] = STATE(17),
        [sym_dictionary] = STATE(17),
        [sym_dictionary_comprehension] = STATE(17),
        [sym_set] = STATE(17),
        [sym_set_comprehension] = STATE(17),
        [anon_sym_not] = ACTIONS(111),
        [anon_sym_LBRACK] = ACTIONS(113),
        [anon_sym_LBRACE] = ACTIONS(115),
        [sym_number] = ACTIONS(117),
        [sym_identifier] = ACTIONS(119),
        [sym_comment] = ACTIONS(77),
    },
    [15] = {
        [sym__expression] = STATE(347),
        [sym_binary_operator] = STATE(43),
        [sym_unary_operator] = STATE(43),
        [sym_subscript] = STATE(43),
        [sym_call] = STATE(43),
        [sym_list] = STATE(43),
        [sym_list_comprehension] = STATE(43),
        [sym_dictionary] = STATE(43),
        [sym_dictionary_comprehension] = STATE(43),
        [sym_set] = STATE(43),
        [sym_set_comprehension] = STATE(43),
        [anon_sym_not] = ACTIONS(147),
        [anon_sym_LBRACK] = ACTIONS(127),
        [anon_sym_RBRACK] = ACTIONS(149),
        [anon_sym_LBRACE] = ACTIONS(129),
        [sym_number] = ACTIONS(131),
        [sym_identifier] = ACTIONS(133),
        [sym_comment] = ACTIONS(77),
    },
    [16] = {
        [sym__expression] = STATE(322),
        [sym_binary_operator] = STATE(43),
        [sym_unary_operator] = STATE(43),
        [sym_subscript] = STATE(43),
        [sym_call] = STATE(43),
        [sym_list] = STATE(43),
        [sym_list_comprehension] = STATE(43),
        [sym_dictionary] = STATE(43),
        [sym_dictionary_comprehension] = STATE(43),
        [sym_pair] = STATE(323),
        [sym_set] = STATE(43),
        [sym_set_comprehension] = STATE(43),
        [anon_sym_not] = ACTIONS(151),
        [anon_sym_LBRACK] = ACTIONS(127),
        [anon_sym_LBRACE] = ACTIONS(129),
        [anon_sym_RBRACE] = ACTIONS(153),
        [sym_number] = ACTIONS(131),
        [sym_identifier] = ACTIONS(133),
        [sym_comment] = ACTIONS(77),
    },
    [17] = {
        [anon_sym_COMMA] = ACTIONS(155),
        [anon_sym_COLON] = ACTIONS(155),
        [anon_sym_for] = ACTIONS(155),
        [anon_sym_in] = ACTIONS(155),
        [anon_sym_as] = ACTIONS(155),
        [anon_sym_LPAREN] = ACTIONS(155),
        [anon_sym_RPAREN] = ACTIONS(155),
        [anon_sym_STAR] = ACTIONS(157),
        [anon_sym_PLUS] = ACTIONS(155),
        [anon_sym_DASH] = ACTIONS(155),
        [anon_sym_SLASH] = ACTIONS(155),
        [anon_sym_STAR_STAR] = ACTIONS(155),
        [anon_sym_PIPE] = ACTIONS(155),
        [anon_sym_AMP] = ACTIONS(155),
        [anon_sym_CARET] = ACTIONS(155),
        [anon_sym_LT_LT] = ACTIONS(155),
        [anon_sym_GT_GT] = ACTIONS(155),
        [anon_sym_and] = ACTIONS(155),
        [anon_sym_or] = ACTIONS(155),
        [anon_sym_LBRACK] = ACTIONS(155),
        [anon_sym_RBRACK] = ACTIONS(155),
        [anon_sym_RBRACE] = ACTIONS(155),
        [sym_comment] = ACTIONS(77),
        [sym__newline] = ACTIONS(155),
    },
    [18] = {
        [ts_builtin_sym_end] = ACTIONS(159),
        [sym_comment] = ACTIONS(77),
    },
    [19] = {
        [ts_builtin_sym_end] = ACTIONS(161),
        [anon_sym_SEMI] = ACTIONS(161),
        [anon_sym_print] = ACTIONS(163),
        [anon_sym_return] = ACTIONS(163),
        [anon_sym_del] = ACTIONS(163),
        [sym_pass_statement] = ACTIONS(163),
        [sym_break_statement] = ACTIONS(163),
        [sym_continue_statement] = ACTIONS(163),
        [anon_sym_if] = ACTIONS(163),
        [anon_sym_for] = ACTIONS(163),
        [anon_sym_while] = ACTIONS(163),
        [anon_sym_try] = ACTIONS(163),
        [anon_sym_with] = ACTIONS(163),
        [anon_sym_def] = ACTIONS(163),
        [anon_sym_class] = ACTIONS(163),
        [anon_sym_AT] = ACTIONS(161),
        [anon_sym_not] = ACTIONS(163),
        [anon_sym_LBRACK] = ACTIONS(161),
        [anon_sym_LBRACE] = ACTIONS(161),
        [sym_number] = ACTIONS(163),
        [sym_identifier] = ACTIONS(165),
        [sym_comment] = ACTIONS(77),
        [sym__newline] = ACTIONS(161),
    },
    [20] = {
        [sym_comment] = ACTIONS(77),
        [sym__newline] = ACTIONS(167),
    },
    [21] = {
        [ts_builtin_sym_end] = ACTIONS(169),
        [anon_sym_SEMI] = ACTIONS(169),
        [anon_sym_print] = ACTIONS(171),
        [anon_sym_return] = ACTIONS(171),
        [anon_sym_del] = ACTIONS(171),
        [sym_pass_statement] = ACTIONS(171),
        [sym_break_statement] = ACTIONS(171),
        [sym_continue_statement] = ACTIONS(171),
        [anon_sym_if] = ACTIONS(171),
        [anon_sym_for] = ACTIONS(171),
        [anon_sym_while] = ACTIONS(171),
        [anon_sym_try] = ACTIONS(171),
        [anon_sym_with] = ACTIONS(171),
        [anon_sym_def] = ACTIONS(171),
        [anon_sym_class] = ACTIONS(171),
        [anon_sym_AT] = ACTIONS(169),
        [anon_sym_not] = ACTIONS(171),
        [anon_sym_LBRACK] = ACTIONS(169),
        [anon_sym_LBRACE] = ACTIONS(169),
        [sym_number] = ACTIONS(171),
        [sym_identifier] = ACTIONS(173),
        [sym_comment] = ACTIONS(77),
        [sym__newline] = ACTIONS(169),
    },
    [22] = {
        [ts_builtin_sym_end] = ACTIONS(175),
        [anon_sym_SEMI] = ACTIONS(175),
        [anon_sym_print] = ACTIONS(177),
        [anon_sym_return] = ACTIONS(177),
        [anon_sym_del] = ACTIONS(177),
        [sym_pass_statement] = ACTIONS(177),
        [sym_break_statement] = ACTIONS(177),
        [sym_continue_statement] = ACTIONS(177),
        [anon_sym_if] = ACTIONS(177),
        [anon_sym_for] = ACTIONS(177),
        [anon_sym_while] = ACTIONS(177),
        [anon_sym_try] = ACTIONS(177),
        [anon_sym_with] = ACTIONS(177),
        [anon_sym_def] = ACTIONS(177),
        [anon_sym_class] = ACTIONS(177),
        [anon_sym_AT] = ACTIONS(175),
        [anon_sym_not] = ACTIONS(177),
        [anon_sym_LBRACK] = ACTIONS(175),
        [anon_sym_LBRACE] = ACTIONS(175),
        [sym_number] = ACTIONS(177),
        [sym_identifier] = ACTIONS(179),
        [sym_comment] = ACTIONS(77),
        [sym__newline] = ACTIONS(175),
    },
    [23] = {
        [anon_sym_def] = ACTIONS(181),
        [anon_sym_class] = ACTIONS(181),
        [anon_sym_AT] = ACTIONS(181),
        [sym_comment] = ACTIONS(77),
    },
    [24] = {
        [anon_sym_LPAREN] = ACTIONS(183),
        [anon_sym_STAR] = ACTIONS(185),
        [anon_sym_PLUS] = ACTIONS(187),
        [anon_sym_DASH] = ACTIONS(187),
        [anon_sym_SLASH] = ACTIONS(189),
        [anon_sym_STAR_STAR] = ACTIONS(191),
        [anon_sym_PIPE] = ACTIONS(193),
        [anon_sym_AMP] = ACTIONS(195),
        [anon_sym_CARET] = ACTIONS(197),
        [anon_sym_LT_LT] = ACTIONS(187),
        [anon_sym_GT_GT] = ACTIONS(187),
        [anon_sym_and] = ACTIONS(195),
        [anon_sym_or] = ACTIONS(193),
        [anon_sym_LBRACK] = ACTIONS(199),
        [sym_comment] = ACTIONS(77),
        [sym__newline] = ACTIONS(201),
    },
    [25] = {
        [sym__statement] = STATE(30),
        [sym__simple_statement] = STATE(20),
        [sym_print_statement] = STATE(5),
        [sym_expression_statement] = STATE(5),
        [sym_return_statement] = STATE(5),
        [sym_delete_statement] = STATE(5),
        [sym__compound_statement] = STATE(21),
        [sym_if_statement] = STATE(22),
        [sym_for_statement] = STATE(22),
        [sym_while_statement] = STATE(22),
        [sym_try_statement] = STATE(22),
        [sym_with_statement] = STATE(22),
        [sym_function_definition] = STATE(22),
        [sym_class_definition] = STATE(22),
        [sym_decorated_definition] = STATE(22),
        [sym_decorator] = STATE(23),
        [sym__expression] = STATE(24),
        [sym_binary_operator] = STATE(17),
        [sym_unary_operator] = STATE(17),
        [sym_subscript] = STATE(17),
        [sym_call] = STATE(17),
        [sym_list] = STATE(17),
        [sym_list_comprehension] = STATE(17),
        [sym_dictionary] = STATE(17),
        [sym_dictionary_comprehension] = STATE(17),
        [sym_set] = STATE(17),
        [sym_set_comprehension] = STATE(17),
        [aux_sym_decorated_definition_repeat1] = STATE(26),
        [ts_builtin_sym_end] = ACTIONS(203),
        [anon_sym_SEMI] = ACTIONS(205),
        [anon_sym_print] = ACTIONS(87),
        [anon_sym_return] = ACTIONS(89),
        [anon_sym_del] = ACTIONS(91),
        [sym_pass_statement] = ACTIONS(93),
        [sym_break_statement] = ACTIONS(93),
        [sym_continue_statement] = ACTIONS(93),
        [anon_sym_if] = ACTIONS(95),
        [anon_sym_for] = ACTIONS(97),
        [anon_sym_while] = ACTIONS(99),
        [anon_sym_try] = ACTIONS(101),
        [anon_sym_with] = ACTIONS(103),
        [anon_sym_def] = ACTIONS(105),
        [anon_sym_class] = ACTIONS(107),
        [anon_sym_AT] = ACTIONS(109),
        [anon_sym_not] = ACTIONS(111),
        [anon_sym_LBRACK] = ACTIONS(113),
        [anon_sym_LBRACE] = ACTIONS(115),
        [sym_number] = ACTIONS(117),
        [sym_identifier] = ACTIONS(119),
        [sym_comment] = ACTIONS(77),
        [sym__newline] = ACTIONS(205),
    },
    [26] = {
        [sym_function_definition] = STATE(27),
        [sym_class_definition] = STATE(27),
        [sym_decorator] = STATE(28),
        [anon_sym_def] = ACTIONS(207),
        [anon_sym_class] = ACTIONS(209),
        [anon_sym_AT] = ACTIONS(109),
        [sym_comment] = ACTIONS(77),
    },
    [27] = {
        [ts_builtin_sym_end] = ACTIONS(211),
        [anon_sym_SEMI] = ACTIONS(211),
        [anon_sym_print] = ACTIONS(213),
        [anon_sym_return] = ACTIONS(213),
        [anon_sym_del] = ACTIONS(213),
        [sym_pass_statement] = ACTIONS(213),
        [sym_break_statement] = ACTIONS(213),
        [sym_continue_statement] = ACTIONS(213),
        [anon_sym_if] = ACTIONS(213),
        [anon_sym_for] = ACTIONS(213),
        [anon_sym_while] = ACTIONS(213),
        [anon_sym_try] = ACTIONS(213),
        [anon_sym_with] = ACTIONS(213),
        [anon_sym_def] = ACTIONS(213),
        [anon_sym_class] = ACTIONS(213),
        [anon_sym_AT] = ACTIONS(211),
        [anon_sym_not] = ACTIONS(213),
        [anon_sym_LBRACK] = ACTIONS(211),
        [anon_sym_LBRACE] = ACTIONS(211),
        [sym_number] = ACTIONS(213),
        [sym_identifier] = ACTIONS(215),
        [sym_comment] = ACTIONS(77),
        [sym__newline] = ACTIONS(211),
    },
    [28] = {
        [anon_sym_def] = ACTIONS(217),
        [anon_sym_class] = ACTIONS(217),
        [anon_sym_AT] = ACTIONS(217),
        [sym_comment] = ACTIONS(77),
    },
    [29] = {
        [ts_builtin_sym_end] = ACTIONS(219),
        [sym_comment] = ACTIONS(77),
    },
    [30] = {
        [ts_builtin_sym_end] = ACTIONS(221),
        [anon_sym_SEMI] = ACTIONS(221),
        [anon_sym_print] = ACTIONS(223),
        [anon_sym_return] = ACTIONS(223),
        [anon_sym_del] = ACTIONS(223),
        [sym_pass_statement] = ACTIONS(223),
        [sym_break_statement] = ACTIONS(223),
        [sym_continue_statement] = ACTIONS(223),
        [anon_sym_if] = ACTIONS(223),
        [anon_sym_for] = ACTIONS(223),
        [anon_sym_while] = ACTIONS(223),
        [anon_sym_try] = ACTIONS(223),
        [anon_sym_with] = ACTIONS(223),
        [anon_sym_def] = ACTIONS(223),
        [anon_sym_class] = ACTIONS(223),
        [anon_sym_AT] = ACTIONS(221),
        [anon_sym_not] = ACTIONS(223),
        [anon_sym_LBRACK] = ACTIONS(221),
        [anon_sym_LBRACE] = ACTIONS(221),
        [sym_number] = ACTIONS(223),
        [sym_identifier] = ACTIONS(225),
        [sym_comment] = ACTIONS(77),
        [sym__newline] = ACTIONS(221),
    },
    [31] = {
        [sym__expression] = STATE(295),
        [sym_binary_operator] = STATE(43),
        [sym_unary_operator] = STATE(43),
        [sym_subscript] = STATE(43),
        [sym_call] = STATE(43),
        [sym_keyword_argument] = STATE(296),
        [sym_list_splat_argument] = STATE(297),
        [sym_dictionary_splat_argument] = STATE(298),
        [sym_list] = STATE(43),
        [sym_list_comprehension] = STATE(43),
        [sym_dictionary] = STATE(43),
        [sym_dictionary_comprehension] = STATE(43),
        [sym_set] = STATE(43),
        [sym_set_comprehension] = STATE(43),
        [aux_sym_call_repeat1] = STATE(299),
        [anon_sym_STAR] = ACTIONS(227),
        [anon_sym_STAR_STAR] = ACTIONS(229),
        [anon_sym_not] = ACTIONS(231),
        [anon_sym_LBRACK] = ACTIONS(127),
        [anon_sym_LBRACE] = ACTIONS(129),
        [sym_number] = ACTIONS(131),
        [sym_identifier] = ACTIONS(233),
        [sym_comment] = ACTIONS(77),
    },
    [32] = {
        [sym__expression] = STATE(294),
        [sym_binary_operator] = STATE(17),
        [sym_unary_operator] = STATE(17),
        [sym_subscript] = STATE(17),
        [sym_call] = STATE(17),
        [sym_list] = STATE(17),
        [sym_list_comprehension] = STATE(17),
        [sym_dictionary] = STATE(17),
        [sym_dictionary_comprehension] = STATE(17),
        [sym_set] = STATE(17),
        [sym_set_comprehension] = STATE(17),
        [anon_sym_not] = ACTIONS(111),
        [anon_sym_LBRACK] = ACTIONS(113),
        [anon_sym_LBRACE] = ACTIONS(115),
        [sym_number] = ACTIONS(117),
        [sym_identifier] = ACTIONS(119),
        [sym_comment] = ACTIONS(77),
    },
    [33] = {
        [sym__expression] = STATE(291),
        [sym_binary_operator] = STATE(17),
        [sym_unary_operator] = STATE(17),
        [sym_subscript] = STATE(17),
        [sym_call] = STATE(17),
        [sym_list] = STATE(17),
        [sym_list_comprehension] = STATE(17),
        [sym_dictionary] = STATE(17),
        [sym_dictionary_comprehension] = STATE(17),
        [sym_set] = STATE(17),
        [sym_set_comprehension] = STATE(17),
        [anon_sym_not] = ACTIONS(111),
        [anon_sym_LBRACK] = ACTIONS(113),
        [anon_sym_LBRACE] = ACTIONS(115),
        [sym_number] = ACTIONS(117),
        [sym_identifier] = ACTIONS(119),
        [sym_comment] = ACTIONS(77),
    },
    [34] = {
        [sym__expression] = STATE(293),
        [sym_binary_operator] = STATE(17),
        [sym_unary_operator] = STATE(17),
        [sym_subscript] = STATE(17),
        [sym_call] = STATE(17),
        [sym_list] = STATE(17),
        [sym_list_comprehension] = STATE(17),
        [sym_dictionary] = STATE(17),
        [sym_dictionary_comprehension] = STATE(17),
        [sym_set] = STATE(17),
        [sym_set_comprehension] = STATE(17),
        [anon_sym_not] = ACTIONS(111),
        [anon_sym_LBRACK] = ACTIONS(113),
        [anon_sym_LBRACE] = ACTIONS(115),
        [sym_number] = ACTIONS(117),
        [sym_identifier] = ACTIONS(119),
        [sym_comment] = ACTIONS(77),
    },
    [35] = {
        [sym__expression] = STATE(289),
        [sym_binary_operator] = STATE(17),
        [sym_unary_operator] = STATE(17),
        [sym_subscript] = STATE(17),
        [sym_call] = STATE(17),
        [sym_list] = STATE(17),
        [sym_list_comprehension] = STATE(17),
        [sym_dictionary] = STATE(17),
        [sym_dictionary_comprehension] = STATE(17),
        [sym_set] = STATE(17),
        [sym_set_comprehension] = STATE(17),
        [anon_sym_not] = ACTIONS(111),
        [anon_sym_LBRACK] = ACTIONS(113),
        [anon_sym_LBRACE] = ACTIONS(115),
        [sym_number] = ACTIONS(117),
        [sym_identifier] = ACTIONS(119),
        [sym_comment] = ACTIONS(77),
    },
    [36] = {
        [sym__expression] = STATE(290),
        [sym_binary_operator] = STATE(17),
        [sym_unary_operator] = STATE(17),
        [sym_subscript] = STATE(17),
        [sym_call] = STATE(17),
        [sym_list] = STATE(17),
        [sym_list_comprehension] = STATE(17),
        [sym_dictionary] = STATE(17),
        [sym_dictionary_comprehension] = STATE(17),
        [sym_set] = STATE(17),
        [sym_set_comprehension] = STATE(17),
        [anon_sym_not] = ACTIONS(111),
        [anon_sym_LBRACK] = ACTIONS(113),
        [anon_sym_LBRACE] = ACTIONS(115),
        [sym_number] = ACTIONS(117),
        [sym_identifier] = ACTIONS(119),
        [sym_comment] = ACTIONS(77),
    },
    [37] = {
        [sym__expression] = STATE(292),
        [sym_binary_operator] = STATE(17),
        [sym_unary_operator] = STATE(17),
        [sym_subscript] = STATE(17),
        [sym_call] = STATE(17),
        [sym_list] = STATE(17),
        [sym_list_comprehension] = STATE(17),
        [sym_dictionary] = STATE(17),
        [sym_dictionary_comprehension] = STATE(17),
        [sym_set] = STATE(17),
        [sym_set_comprehension] = STATE(17),
        [anon_sym_not] = ACTIONS(111),
        [anon_sym_LBRACK] = ACTIONS(113),
        [anon_sym_LBRACE] = ACTIONS(115),
        [sym_number] = ACTIONS(117),
        [sym_identifier] = ACTIONS(119),
        [sym_comment] = ACTIONS(77),
    },
    [38] = {
        [sym__expression] = STATE(44),
        [sym_binary_operator] = STATE(43),
        [sym_unary_operator] = STATE(43),
        [sym_subscript] = STATE(43),
        [sym_call] = STATE(43),
        [sym_list] = STATE(43),
        [sym_list_comprehension] = STATE(43),
        [sym_dictionary] = STATE(43),
        [sym_dictionary_comprehension] = STATE(43),
        [sym_set] = STATE(43),
        [sym_set_comprehension] = STATE(43),
        [anon_sym_not] = ACTIONS(235),
        [anon_sym_LBRACK] = ACTIONS(127),
        [anon_sym_DOT_DOT_DOT] = ACTIONS(237),
        [anon_sym_LBRACE] = ACTIONS(129),
        [sym_number] = ACTIONS(131),
        [sym_identifier] = ACTIONS(133),
        [sym_comment] = ACTIONS(77),
    },
    [39] = {
        [sym__expression] = STATE(274),
        [sym_binary_operator] = STATE(43),
        [sym_unary_operator] = STATE(43),
        [sym_subscript] = STATE(43),
        [sym_call] = STATE(43),
        [sym_list] = STATE(43),
        [sym_list_comprehension] = STATE(43),
        [sym_dictionary] = STATE(43),
        [sym_dictionary_comprehension] = STATE(43),
        [sym_set] = STATE(43),
        [sym_set_comprehension] = STATE(43),
        [anon_sym_not] = ACTIONS(235),
        [anon_sym_LBRACK] = ACTIONS(127),
        [anon_sym_LBRACE] = ACTIONS(129),
        [sym_number] = ACTIONS(131),
        [sym_identifier] = ACTIONS(133),
        [sym_comment] = ACTIONS(77),
    },
    [40] = {
        [sym__expression] = STATE(237),
        [sym_binary_operator] = STATE(43),
        [sym_unary_operator] = STATE(43),
        [sym_subscript] = STATE(43),
        [sym_call] = STATE(43),
        [sym_list] = STATE(43),
        [sym_list_comprehension] = STATE(43),
        [sym_dictionary] = STATE(43),
        [sym_dictionary_comprehension] = STATE(43),
        [sym_set] = STATE(43),
        [sym_set_comprehension] = STATE(43),
        [anon_sym_not] = ACTIONS(147),
        [anon_sym_LBRACK] = ACTIONS(127),
        [anon_sym_RBRACK] = ACTIONS(239),
        [anon_sym_LBRACE] = ACTIONS(129),
        [sym_number] = ACTIONS(131),
        [sym_identifier] = ACTIONS(133),
        [sym_comment] = ACTIONS(77),
    },
    [41] = {
        [aux_sym_subscript_repeat1] = STATE(55),
        [anon_sym_COMMA] = ACTIONS(241),
        [anon_sym_RBRACK] = ACTIONS(243),
        [sym_comment] = ACTIONS(77),
    },
    [42] = {
        [sym__expression] = STATE(125),
        [sym_binary_operator] = STATE(43),
        [sym_unary_operator] = STATE(43),
        [sym_subscript] = STATE(43),
        [sym_call] = STATE(43),
        [sym_list] = STATE(43),
        [sym_list_comprehension] = STATE(43),
        [sym_dictionary] = STATE(43),
        [sym_dictionary_comprehension] = STATE(43),
        [sym_pair] = STATE(126),
        [sym_set] = STATE(43),
        [sym_set_comprehension] = STATE(43),
        [anon_sym_not] = ACTIONS(151),
        [anon_sym_LBRACK] = ACTIONS(127),
        [anon_sym_LBRACE] = ACTIONS(129),
        [anon_sym_RBRACE] = ACTIONS(245),
        [sym_number] = ACTIONS(131),
        [sym_identifier] = ACTIONS(133),
        [sym_comment] = ACTIONS(77),
    },
    [43] = {
        [anon_sym_COMMA] = ACTIONS(155),
        [anon_sym_COLON] = ACTIONS(155),
        [anon_sym_for] = ACTIONS(155),
        [anon_sym_in] = ACTIONS(155),
        [anon_sym_as] = ACTIONS(155),
        [anon_sym_LPAREN] = ACTIONS(155),
        [anon_sym_RPAREN] = ACTIONS(155),
        [anon_sym_STAR] = ACTIONS(157),
        [anon_sym_PLUS] = ACTIONS(155),
        [anon_sym_DASH] = ACTIONS(155),
        [anon_sym_SLASH] = ACTIONS(155),
        [anon_sym_STAR_STAR] = ACTIONS(155),
        [anon_sym_PIPE] = ACTIONS(155),
        [anon_sym_AMP] = ACTIONS(155),
        [anon_sym_CARET] = ACTIONS(155),
        [anon_sym_LT_LT] = ACTIONS(155),
        [anon_sym_GT_GT] = ACTIONS(155),
        [anon_sym_and] = ACTIONS(155),
        [anon_sym_or] = ACTIONS(155),
        [anon_sym_LBRACK] = ACTIONS(155),
        [anon_sym_RBRACK] = ACTIONS(155),
        [anon_sym_RBRACE] = ACTIONS(155),
        [sym_comment] = ACTIONS(77),
    },
    [44] = {
        [aux_sym_subscript_repeat1] = STATE(55),
        [anon_sym_COMMA] = ACTIONS(241),
        [anon_sym_LPAREN] = ACTIONS(247),
        [anon_sym_STAR] = ACTIONS(249),
        [anon_sym_PLUS] = ACTIONS(251),
        [anon_sym_DASH] = ACTIONS(251),
        [anon_sym_SLASH] = ACTIONS(253),
        [anon_sym_STAR_STAR] = ACTIONS(255),
        [anon_sym_PIPE] = ACTIONS(257),
        [anon_sym_AMP] = ACTIONS(259),
        [anon_sym_CARET] = ACTIONS(261),
        [anon_sym_LT_LT] = ACTIONS(251),
        [anon_sym_GT_GT] = ACTIONS(251),
        [anon_sym_and] = ACTIONS(259),
        [anon_sym_or] = ACTIONS(257),
        [anon_sym_LBRACK] = ACTIONS(263),
        [anon_sym_RBRACK] = ACTIONS(243),
        [sym_comment] = ACTIONS(77),
    },
    [45] = {
        [sym__expression] = STATE(70),
        [sym_binary_operator] = STATE(43),
        [sym_unary_operator] = STATE(43),
        [sym_subscript] = STATE(43),
        [sym_call] = STATE(43),
        [sym_list] = STATE(43),
        [sym_list_comprehension] = STATE(43),
        [sym_dictionary] = STATE(43),
        [sym_dictionary_comprehension] = STATE(43),
        [sym_set] = STATE(43),
        [sym_set_comprehension] = STATE(43),
        [anon_sym_not] = ACTIONS(235),
        [anon_sym_LBRACK] = ACTIONS(127),
        [anon_sym_DOT_DOT_DOT] = ACTIONS(265),
        [anon_sym_RBRACK] = ACTIONS(267),
        [anon_sym_LBRACE] = ACTIONS(129),
        [sym_number] = ACTIONS(131),
        [sym_identifier] = ACTIONS(133),
        [sym_comment] = ACTIONS(77),
    },
    [46] = {
        [sym__expression] = STATE(81),
        [sym_binary_operator] = STATE(43),
        [sym_unary_operator] = STATE(43),
        [sym_subscript] = STATE(43),
        [sym_call] = STATE(43),
        [sym_keyword_argument] = STATE(82),
        [sym_list_splat_argument] = STATE(83),
        [sym_dictionary_splat_argument] = STATE(84),
        [sym_list] = STATE(43),
        [sym_list_comprehension] = STATE(43),
        [sym_dictionary] = STATE(43),
        [sym_dictionary_comprehension] = STATE(43),
        [sym_set] = STATE(43),
        [sym_set_comprehension] = STATE(43),
        [aux_sym_call_repeat1] = STATE(85),
        [anon_sym_STAR] = ACTIONS(227),
        [anon_sym_STAR_STAR] = ACTIONS(229),
        [anon_sym_not] = ACTIONS(231),
        [anon_sym_LBRACK] = ACTIONS(127),
        [anon_sym_LBRACE] = ACTIONS(129),
        [sym_number] = ACTIONS(131),
        [sym_identifier] = ACTIONS(233),
        [sym_comment] = ACTIONS(77),
    },
    [47] = {
        [sym__expression] = STATE(76),
        [sym_binary_operator] = STATE(43),
        [sym_unary_operator] = STATE(43),
        [sym_subscript] = STATE(43),
        [sym_call] = STATE(43),
        [sym_list] = STATE(43),
        [sym_list_comprehension] = STATE(43),
        [sym_dictionary] = STATE(43),
        [sym_dictionary_comprehension] = STATE(43),
        [sym_set] = STATE(43),
        [sym_set_comprehension] = STATE(43),
        [anon_sym_not] = ACTIONS(235),
        [anon_sym_LBRACK] = ACTIONS(127),
        [anon_sym_LBRACE] = ACTIONS(129),
        [sym_number] = ACTIONS(131),
        [sym_identifier] = ACTIONS(133),
        [sym_comment] = ACTIONS(77),
    },
    [48] = {
        [sym__expression] = STATE(73),
        [sym_binary_operator] = STATE(43),
        [sym_unary_operator] = STATE(43),
        [sym_subscript] = STATE(43),
        [sym_call] = STATE(43),
        [sym_list] = STATE(43),
        [sym_list_comprehension] = STATE(43),
        [sym_dictionary] = STATE(43),
        [sym_dictionary_comprehension] = STATE(43),
        [sym_set] = STATE(43),
        [sym_set_comprehension] = STATE(43),
        [anon_sym_not] = ACTIONS(235),
        [anon_sym_LBRACK] = ACTIONS(127),
        [anon_sym_LBRACE] = ACTIONS(129),
        [sym_number] = ACTIONS(131),
        [sym_identifier] = ACTIONS(133),
        [sym_comment] = ACTIONS(77),
    },
    [49] = {
        [sym__expression] = STATE(75),
        [sym_binary_operator] = STATE(43),
        [sym_unary_operator] = STATE(43),
        [sym_subscript] = STATE(43),
        [sym_call] = STATE(43),
        [sym_list] = STATE(43),
        [sym_list_comprehension] = STATE(43),
        [sym_dictionary] = STATE(43),
        [sym_dictionary_comprehension] = STATE(43),
        [sym_set] = STATE(43),
        [sym_set_comprehension] = STATE(43),
        [anon_sym_not] = ACTIONS(235),
        [anon_sym_LBRACK] = ACTIONS(127),
        [anon_sym_LBRACE] = ACTIONS(129),
        [sym_number] = ACTIONS(131),
        [sym_identifier] = ACTIONS(133),
        [sym_comment] = ACTIONS(77),
    },
    [50] = {
        [sym__expression] = STATE(71),
        [sym_binary_operator] = STATE(43),
        [sym_unary_operator] = STATE(43),
        [sym_subscript] = STATE(43),
        [sym_call] = STATE(43),
        [sym_list] = STATE(43),
        [sym_list_comprehension] = STATE(43),
        [sym_dictionary] = STATE(43),
        [sym_dictionary_comprehension] = STATE(43),
        [sym_set] = STATE(43),
        [sym_set_comprehension] = STATE(43),
        [anon_sym_not] = ACTIONS(235),
        [anon_sym_LBRACK] = ACTIONS(127),
        [anon_sym_LBRACE] = ACTIONS(129),
        [sym_number] = ACTIONS(131),
        [sym_identifier] = ACTIONS(133),
        [sym_comment] = ACTIONS(77),
    },
    [51] = {
        [sym__expression] = STATE(72),
        [sym_binary_operator] = STATE(43),
        [sym_unary_operator] = STATE(43),
        [sym_subscript] = STATE(43),
        [sym_call] = STATE(43),
        [sym_list] = STATE(43),
        [sym_list_comprehension] = STATE(43),
        [sym_dictionary] = STATE(43),
        [sym_dictionary_comprehension] = STATE(43),
        [sym_set] = STATE(43),
        [sym_set_comprehension] = STATE(43),
        [anon_sym_not] = ACTIONS(235),
        [anon_sym_LBRACK] = ACTIONS(127),
        [anon_sym_LBRACE] = ACTIONS(129),
        [sym_number] = ACTIONS(131),
        [sym_identifier] = ACTIONS(133),
        [sym_comment] = ACTIONS(77),
    },
    [52] = {
        [sym__expression] = STATE(74),
        [sym_binary_operator] = STATE(43),
        [sym_unary_operator] = STATE(43),
        [sym_subscript] = STATE(43),
        [sym_call] = STATE(43),
        [sym_list] = STATE(43),
        [sym_list_comprehension] = STATE(43),
        [sym_dictionary] = STATE(43),
        [sym_dictionary_comprehension] = STATE(43),
        [sym_set] = STATE(43),
        [sym_set_comprehension] = STATE(43),
        [anon_sym_not] = ACTIONS(235),
        [anon_sym_LBRACK] = ACTIONS(127),
        [anon_sym_LBRACE] = ACTIONS(129),
        [sym_number] = ACTIONS(131),
        [sym_identifier] = ACTIONS(133),
        [sym_comment] = ACTIONS(77),
    },
    [53] = {
        [sym__expression] = STATE(62),
        [sym_binary_operator] = STATE(43),
        [sym_unary_operator] = STATE(43),
        [sym_subscript] = STATE(43),
        [sym_call] = STATE(43),
        [sym_list] = STATE(43),
        [sym_list_comprehension] = STATE(43),
        [sym_dictionary] = STATE(43),
        [sym_dictionary_comprehension] = STATE(43),
        [sym_set] = STATE(43),
        [sym_set_comprehension] = STATE(43),
        [anon_sym_not] = ACTIONS(235),
        [anon_sym_LBRACK] = ACTIONS(127),
        [anon_sym_DOT_DOT_DOT] = ACTIONS(269),
        [anon_sym_LBRACE] = ACTIONS(129),
        [sym_number] = ACTIONS(131),
        [sym_identifier] = ACTIONS(133),
        [sym_comment] = ACTIONS(77),
    },
    [54] = {
        [anon_sym_COMMA] = ACTIONS(271),
        [anon_sym_COLON] = ACTIONS(271),
        [anon_sym_for] = ACTIONS(271),
        [anon_sym_in] = ACTIONS(271),
        [anon_sym_as] = ACTIONS(271),
        [anon_sym_LPAREN] = ACTIONS(271),
        [anon_sym_RPAREN] = ACTIONS(271),
        [anon_sym_STAR] = ACTIONS(273),
        [anon_sym_PLUS] = ACTIONS(271),
        [anon_sym_DASH] = ACTIONS(271),
        [anon_sym_SLASH] = ACTIONS(271),
        [anon_sym_STAR_STAR] = ACTIONS(271),
        [anon_sym_PIPE] = ACTIONS(271),
        [anon_sym_AMP] = ACTIONS(271),
        [anon_sym_CARET] = ACTIONS(271),
        [anon_sym_LT_LT] = ACTIONS(271),
        [anon_sym_GT_GT] = ACTIONS(271),
        [anon_sym_and] = ACTIONS(271),
        [anon_sym_or] = ACTIONS(271),
        [anon_sym_LBRACK] = ACTIONS(271),
        [anon_sym_RBRACK] = ACTIONS(271),
        [anon_sym_RBRACE] = ACTIONS(271),
        [sym_comment] = ACTIONS(77),
        [sym__newline] = ACTIONS(271),
    },
    [55] = {
        [anon_sym_COMMA] = ACTIONS(275),
        [anon_sym_RBRACK] = ACTIONS(267),
        [sym_comment] = ACTIONS(77),
    },
    [56] = {
        [sym__expression] = STATE(60),
        [sym_binary_operator] = STATE(43),
        [sym_unary_operator] = STATE(43),
        [sym_subscript] = STATE(43),
        [sym_call] = STATE(43),
        [sym_list] = STATE(43),
        [sym_list_comprehension] = STATE(43),
        [sym_dictionary] = STATE(43),
        [sym_dictionary_comprehension] = STATE(43),
        [sym_set] = STATE(43),
        [sym_set_comprehension] = STATE(43),
        [anon_sym_not] = ACTIONS(235),
        [anon_sym_LBRACK] = ACTIONS(127),
        [anon_sym_DOT_DOT_DOT] = ACTIONS(277),
        [anon_sym_RBRACK] = ACTIONS(279),
        [anon_sym_LBRACE] = ACTIONS(129),
        [sym_number] = ACTIONS(131),
        [sym_identifier] = ACTIONS(133),
        [sym_comment] = ACTIONS(77),
    },
    [57] = {
        [anon_sym_COMMA] = ACTIONS(281),
        [anon_sym_COLON] = ACTIONS(281),
        [anon_sym_for] = ACTIONS(281),
        [anon_sym_in] = ACTIONS(281),
        [anon_sym_as] = ACTIONS(281),
        [anon_sym_LPAREN] = ACTIONS(281),
        [anon_sym_RPAREN] = ACTIONS(281),
        [anon_sym_STAR] = ACTIONS(283),
        [anon_sym_PLUS] = ACTIONS(281),
        [anon_sym_DASH] = ACTIONS(281),
        [anon_sym_SLASH] = ACTIONS(281),
        [anon_sym_STAR_STAR] = ACTIONS(281),
        [anon_sym_PIPE] = ACTIONS(281),
        [anon_sym_AMP] = ACTIONS(281),
        [anon_sym_CARET] = ACTIONS(281),
        [anon_sym_LT_LT] = ACTIONS(281),
        [anon_sym_GT_GT] = ACTIONS(281),
        [anon_sym_and] = ACTIONS(281),
        [anon_sym_or] = ACTIONS(281),
        [anon_sym_LBRACK] = ACTIONS(281),
        [anon_sym_RBRACK] = ACTIONS(281),
        [anon_sym_RBRACE] = ACTIONS(281),
        [sym_comment] = ACTIONS(77),
        [sym__newline] = ACTIONS(281),
    },
    [58] = {
        [anon_sym_COMMA] = ACTIONS(285),
        [anon_sym_RBRACK] = ACTIONS(285),
        [sym_comment] = ACTIONS(77),
    },
    [59] = {
        [anon_sym_COMMA] = ACTIONS(287),
        [anon_sym_COLON] = ACTIONS(287),
        [anon_sym_for] = ACTIONS(287),
        [anon_sym_in] = ACTIONS(287),
        [anon_sym_as] = ACTIONS(287),
        [anon_sym_LPAREN] = ACTIONS(287),
        [anon_sym_RPAREN] = ACTIONS(287),
        [anon_sym_STAR] = ACTIONS(289),
        [anon_sym_PLUS] = ACTIONS(287),
        [anon_sym_DASH] = ACTIONS(287),
        [anon_sym_SLASH] = ACTIONS(287),
        [anon_sym_STAR_STAR] = ACTIONS(287),
        [anon_sym_PIPE] = ACTIONS(287),
        [anon_sym_AMP] = ACTIONS(287),
        [anon_sym_CARET] = ACTIONS(287),
        [anon_sym_LT_LT] = ACTIONS(287),
        [anon_sym_GT_GT] = ACTIONS(287),
        [anon_sym_and] = ACTIONS(287),
        [anon_sym_or] = ACTIONS(287),
        [anon_sym_LBRACK] = ACTIONS(287),
        [anon_sym_RBRACK] = ACTIONS(287),
        [anon_sym_RBRACE] = ACTIONS(287),
        [sym_comment] = ACTIONS(77),
        [sym__newline] = ACTIONS(287),
    },
    [60] = {
        [anon_sym_COMMA] = ACTIONS(285),
        [anon_sym_LPAREN] = ACTIONS(247),
        [anon_sym_STAR] = ACTIONS(249),
        [anon_sym_PLUS] = ACTIONS(251),
        [anon_sym_DASH] = ACTIONS(251),
        [anon_sym_SLASH] = ACTIONS(253),
        [anon_sym_STAR_STAR] = ACTIONS(255),
        [anon_sym_PIPE] = ACTIONS(257),
        [anon_sym_AMP] = ACTIONS(259),
        [anon_sym_CARET] = ACTIONS(261),
        [anon_sym_LT_LT] = ACTIONS(251),
        [anon_sym_GT_GT] = ACTIONS(251),
        [anon_sym_and] = ACTIONS(259),
        [anon_sym_or] = ACTIONS(257),
        [anon_sym_LBRACK] = ACTIONS(263),
        [anon_sym_RBRACK] = ACTIONS(285),
        [sym_comment] = ACTIONS(77),
    },
    [61] = {
        [aux_sym_subscript_repeat1] = STATE(65),
        [anon_sym_COMMA] = ACTIONS(291),
        [anon_sym_RBRACK] = ACTIONS(293),
        [sym_comment] = ACTIONS(77),
    },
    [62] = {
        [aux_sym_subscript_repeat1] = STATE(65),
        [anon_sym_COMMA] = ACTIONS(291),
        [anon_sym_LPAREN] = ACTIONS(247),
        [anon_sym_STAR] = ACTIONS(249),
        [anon_sym_PLUS] = ACTIONS(251),
        [anon_sym_DASH] = ACTIONS(251),
        [anon_sym_SLASH] = ACTIONS(253),
        [anon_sym_STAR_STAR] = ACTIONS(255),
        [anon_sym_PIPE] = ACTIONS(257),
        [anon_sym_AMP] = ACTIONS(259),
        [anon_sym_CARET] = ACTIONS(261),
        [anon_sym_LT_LT] = ACTIONS(251),
        [anon_sym_GT_GT] = ACTIONS(251),
        [anon_sym_and] = ACTIONS(259),
        [anon_sym_or] = ACTIONS(257),
        [anon_sym_LBRACK] = ACTIONS(263),
        [anon_sym_RBRACK] = ACTIONS(293),
        [sym_comment] = ACTIONS(77),
    },
    [63] = {
        [sym__expression] = STATE(70),
        [sym_binary_operator] = STATE(43),
        [sym_unary_operator] = STATE(43),
        [sym_subscript] = STATE(43),
        [sym_call] = STATE(43),
        [sym_list] = STATE(43),
        [sym_list_comprehension] = STATE(43),
        [sym_dictionary] = STATE(43),
        [sym_dictionary_comprehension] = STATE(43),
        [sym_set] = STATE(43),
        [sym_set_comprehension] = STATE(43),
        [anon_sym_not] = ACTIONS(235),
        [anon_sym_LBRACK] = ACTIONS(127),
        [anon_sym_DOT_DOT_DOT] = ACTIONS(265),
        [anon_sym_RBRACK] = ACTIONS(295),
        [anon_sym_LBRACE] = ACTIONS(129),
        [sym_number] = ACTIONS(131),
        [sym_identifier] = ACTIONS(133),
        [sym_comment] = ACTIONS(77),
    },
    [64] = {
        [anon_sym_COMMA] = ACTIONS(271),
        [anon_sym_COLON] = ACTIONS(271),
        [anon_sym_for] = ACTIONS(271),
        [anon_sym_in] = ACTIONS(271),
        [anon_sym_as] = ACTIONS(271),
        [anon_sym_LPAREN] = ACTIONS(271),
        [anon_sym_RPAREN] = ACTIONS(271),
        [anon_sym_STAR] = ACTIONS(273),
        [anon_sym_PLUS] = ACTIONS(271),
        [anon_sym_DASH] = ACTIONS(271),
        [anon_sym_SLASH] = ACTIONS(271),
        [anon_sym_STAR_STAR] = ACTIONS(271),
        [anon_sym_PIPE] = ACTIONS(271),
        [anon_sym_AMP] = ACTIONS(271),
        [anon_sym_CARET] = ACTIONS(271),
        [anon_sym_LT_LT] = ACTIONS(271),
        [anon_sym_GT_GT] = ACTIONS(271),
        [anon_sym_and] = ACTIONS(271),
        [anon_sym_or] = ACTIONS(271),
        [anon_sym_LBRACK] = ACTIONS(271),
        [anon_sym_RBRACK] = ACTIONS(271),
        [anon_sym_RBRACE] = ACTIONS(271),
        [sym_comment] = ACTIONS(77),
    },
    [65] = {
        [anon_sym_COMMA] = ACTIONS(297),
        [anon_sym_RBRACK] = ACTIONS(295),
        [sym_comment] = ACTIONS(77),
    },
    [66] = {
        [sym__expression] = STATE(60),
        [sym_binary_operator] = STATE(43),
        [sym_unary_operator] = STATE(43),
        [sym_subscript] = STATE(43),
        [sym_call] = STATE(43),
        [sym_list] = STATE(43),
        [sym_list_comprehension] = STATE(43),
        [sym_dictionary] = STATE(43),
        [sym_dictionary_comprehension] = STATE(43),
        [sym_set] = STATE(43),
        [sym_set_comprehension] = STATE(43),
        [anon_sym_not] = ACTIONS(235),
        [anon_sym_LBRACK] = ACTIONS(127),
        [anon_sym_DOT_DOT_DOT] = ACTIONS(277),
        [anon_sym_RBRACK] = ACTIONS(299),
        [anon_sym_LBRACE] = ACTIONS(129),
        [sym_number] = ACTIONS(131),
        [sym_identifier] = ACTIONS(133),
        [sym_comment] = ACTIONS(77),
    },
    [67] = {
        [anon_sym_COMMA] = ACTIONS(281),
        [anon_sym_COLON] = ACTIONS(281),
        [anon_sym_for] = ACTIONS(281),
        [anon_sym_in] = ACTIONS(281),
        [anon_sym_as] = ACTIONS(281),
        [anon_sym_LPAREN] = ACTIONS(281),
        [anon_sym_RPAREN] = ACTIONS(281),
        [anon_sym_STAR] = ACTIONS(283),
        [anon_sym_PLUS] = ACTIONS(281),
        [anon_sym_DASH] = ACTIONS(281),
        [anon_sym_SLASH] = ACTIONS(281),
        [anon_sym_STAR_STAR] = ACTIONS(281),
        [anon_sym_PIPE] = ACTIONS(281),
        [anon_sym_AMP] = ACTIONS(281),
        [anon_sym_CARET] = ACTIONS(281),
        [anon_sym_LT_LT] = ACTIONS(281),
        [anon_sym_GT_GT] = ACTIONS(281),
        [anon_sym_and] = ACTIONS(281),
        [anon_sym_or] = ACTIONS(281),
        [anon_sym_LBRACK] = ACTIONS(281),
        [anon_sym_RBRACK] = ACTIONS(281),
        [anon_sym_RBRACE] = ACTIONS(281),
        [sym_comment] = ACTIONS(77),
    },
    [68] = {
        [anon_sym_COMMA] = ACTIONS(287),
        [anon_sym_COLON] = ACTIONS(287),
        [anon_sym_for] = ACTIONS(287),
        [anon_sym_in] = ACTIONS(287),
        [anon_sym_as] = ACTIONS(287),
        [anon_sym_LPAREN] = ACTIONS(287),
        [anon_sym_RPAREN] = ACTIONS(287),
        [anon_sym_STAR] = ACTIONS(289),
        [anon_sym_PLUS] = ACTIONS(287),
        [anon_sym_DASH] = ACTIONS(287),
        [anon_sym_SLASH] = ACTIONS(287),
        [anon_sym_STAR_STAR] = ACTIONS(287),
        [anon_sym_PIPE] = ACTIONS(287),
        [anon_sym_AMP] = ACTIONS(287),
        [anon_sym_CARET] = ACTIONS(287),
        [anon_sym_LT_LT] = ACTIONS(287),
        [anon_sym_GT_GT] = ACTIONS(287),
        [anon_sym_and] = ACTIONS(287),
        [anon_sym_or] = ACTIONS(287),
        [anon_sym_LBRACK] = ACTIONS(287),
        [anon_sym_RBRACK] = ACTIONS(287),
        [anon_sym_RBRACE] = ACTIONS(287),
        [sym_comment] = ACTIONS(77),
    },
    [69] = {
        [anon_sym_COMMA] = ACTIONS(301),
        [anon_sym_RBRACK] = ACTIONS(301),
        [sym_comment] = ACTIONS(77),
    },
    [70] = {
        [anon_sym_COMMA] = ACTIONS(301),
        [anon_sym_LPAREN] = ACTIONS(247),
        [anon_sym_STAR] = ACTIONS(249),
        [anon_sym_PLUS] = ACTIONS(251),
        [anon_sym_DASH] = ACTIONS(251),
        [anon_sym_SLASH] = ACTIONS(253),
        [anon_sym_STAR_STAR] = ACTIONS(255),
        [anon_sym_PIPE] = ACTIONS(257),
        [anon_sym_AMP] = ACTIONS(259),
        [anon_sym_CARET] = ACTIONS(261),
        [anon_sym_LT_LT] = ACTIONS(251),
        [anon_sym_GT_GT] = ACTIONS(251),
        [anon_sym_and] = ACTIONS(259),
        [anon_sym_or] = ACTIONS(257),
        [anon_sym_LBRACK] = ACTIONS(263),
        [anon_sym_RBRACK] = ACTIONS(301),
        [sym_comment] = ACTIONS(77),
    },
    [71] = {
        [anon_sym_COMMA] = ACTIONS(303),
        [anon_sym_LPAREN] = ACTIONS(247),
        [anon_sym_STAR] = ACTIONS(249),
        [anon_sym_PLUS] = ACTIONS(251),
        [anon_sym_DASH] = ACTIONS(251),
        [anon_sym_SLASH] = ACTIONS(253),
        [anon_sym_STAR_STAR] = ACTIONS(255),
        [anon_sym_PIPE] = ACTIONS(303),
        [anon_sym_AMP] = ACTIONS(259),
        [anon_sym_CARET] = ACTIONS(261),
        [anon_sym_LT_LT] = ACTIONS(251),
        [anon_sym_GT_GT] = ACTIONS(251),
        [anon_sym_and] = ACTIONS(259),
        [anon_sym_or] = ACTIONS(303),
        [anon_sym_LBRACK] = ACTIONS(303),
        [anon_sym_RBRACK] = ACTIONS(303),
        [sym_comment] = ACTIONS(77),
    },
    [72] = {
        [anon_sym_COMMA] = ACTIONS(303),
        [anon_sym_LPAREN] = ACTIONS(247),
        [anon_sym_STAR] = ACTIONS(249),
        [anon_sym_PLUS] = ACTIONS(251),
        [anon_sym_DASH] = ACTIONS(251),
        [anon_sym_SLASH] = ACTIONS(253),
        [anon_sym_STAR_STAR] = ACTIONS(255),
        [anon_sym_PIPE] = ACTIONS(303),
        [anon_sym_AMP] = ACTIONS(303),
        [anon_sym_CARET] = ACTIONS(261),
        [anon_sym_LT_LT] = ACTIONS(251),
        [anon_sym_GT_GT] = ACTIONS(251),
        [anon_sym_and] = ACTIONS(303),
        [anon_sym_or] = ACTIONS(303),
        [anon_sym_LBRACK] = ACTIONS(303),
        [anon_sym_RBRACK] = ACTIONS(303),
        [sym_comment] = ACTIONS(77),
    },
    [73] = {
        [anon_sym_COMMA] = ACTIONS(303),
        [anon_sym_LPAREN] = ACTIONS(247),
        [anon_sym_STAR] = ACTIONS(249),
        [anon_sym_PLUS] = ACTIONS(303),
        [anon_sym_DASH] = ACTIONS(303),
        [anon_sym_SLASH] = ACTIONS(253),
        [anon_sym_STAR_STAR] = ACTIONS(255),
        [anon_sym_PIPE] = ACTIONS(303),
        [anon_sym_AMP] = ACTIONS(303),
        [anon_sym_CARET] = ACTIONS(303),
        [anon_sym_LT_LT] = ACTIONS(303),
        [anon_sym_GT_GT] = ACTIONS(303),
        [anon_sym_and] = ACTIONS(303),
        [anon_sym_or] = ACTIONS(303),
        [anon_sym_LBRACK] = ACTIONS(303),
        [anon_sym_RBRACK] = ACTIONS(303),
        [sym_comment] = ACTIONS(77),
    },
    [74] = {
        [anon_sym_COMMA] = ACTIONS(303),
        [anon_sym_LPAREN] = ACTIONS(247),
        [anon_sym_STAR] = ACTIONS(249),
        [anon_sym_PLUS] = ACTIONS(251),
        [anon_sym_DASH] = ACTIONS(251),
        [anon_sym_SLASH] = ACTIONS(253),
        [anon_sym_STAR_STAR] = ACTIONS(255),
        [anon_sym_PIPE] = ACTIONS(303),
        [anon_sym_AMP] = ACTIONS(303),
        [anon_sym_CARET] = ACTIONS(303),
        [anon_sym_LT_LT] = ACTIONS(251),
        [anon_sym_GT_GT] = ACTIONS(251),
        [anon_sym_and] = ACTIONS(303),
        [anon_sym_or] = ACTIONS(303),
        [anon_sym_LBRACK] = ACTIONS(303),
        [anon_sym_RBRACK] = ACTIONS(303),
        [sym_comment] = ACTIONS(77),
    },
    [75] = {
        [anon_sym_COMMA] = ACTIONS(303),
        [anon_sym_COLON] = ACTIONS(303),
        [anon_sym_for] = ACTIONS(303),
        [anon_sym_in] = ACTIONS(303),
        [anon_sym_as] = ACTIONS(303),
        [anon_sym_LPAREN] = ACTIONS(247),
        [anon_sym_RPAREN] = ACTIONS(303),
        [anon_sym_STAR] = ACTIONS(305),
        [anon_sym_PLUS] = ACTIONS(303),
        [anon_sym_DASH] = ACTIONS(303),
        [anon_sym_SLASH] = ACTIONS(303),
        [anon_sym_STAR_STAR] = ACTIONS(303),
        [anon_sym_PIPE] = ACTIONS(303),
        [anon_sym_AMP] = ACTIONS(303),
        [anon_sym_CARET] = ACTIONS(303),
        [anon_sym_LT_LT] = ACTIONS(303),
        [anon_sym_GT_GT] = ACTIONS(303),
        [anon_sym_and] = ACTIONS(303),
        [anon_sym_or] = ACTIONS(303),
        [anon_sym_LBRACK] = ACTIONS(303),
        [anon_sym_RBRACK] = ACTIONS(303),
        [anon_sym_RBRACE] = ACTIONS(303),
        [sym_comment] = ACTIONS(77),
    },
    [76] = {
        [anon_sym_COMMA] = ACTIONS(303),
        [anon_sym_LPAREN] = ACTIONS(247),
        [anon_sym_STAR] = ACTIONS(305),
        [anon_sym_PLUS] = ACTIONS(303),
        [anon_sym_DASH] = ACTIONS(303),
        [anon_sym_SLASH] = ACTIONS(303),
        [anon_sym_STAR_STAR] = ACTIONS(255),
        [anon_sym_PIPE] = ACTIONS(303),
        [anon_sym_AMP] = ACTIONS(303),
        [anon_sym_CARET] = ACTIONS(303),
        [anon_sym_LT_LT] = ACTIONS(303),
        [anon_sym_GT_GT] = ACTIONS(303),
        [anon_sym_and] = ACTIONS(303),
        [anon_sym_or] = ACTIONS(303),
        [anon_sym_LBRACK] = ACTIONS(303),
        [anon_sym_RBRACK] = ACTIONS(303),
        [sym_comment] = ACTIONS(77),
    },
    [77] = {
        [sym__expression] = STATE(288),
        [sym_binary_operator] = STATE(43),
        [sym_unary_operator] = STATE(43),
        [sym_subscript] = STATE(43),
        [sym_call] = STATE(43),
        [sym_list] = STATE(43),
        [sym_list_comprehension] = STATE(43),
        [sym_dictionary] = STATE(43),
        [sym_dictionary_comprehension] = STATE(43),
        [sym_set] = STATE(43),
        [sym_set_comprehension] = STATE(43),
        [anon_sym_not] = ACTIONS(231),
        [anon_sym_LBRACK] = ACTIONS(127),
        [anon_sym_LBRACE] = ACTIONS(129),
        [sym_number] = ACTIONS(131),
        [sym_identifier] = ACTIONS(133),
        [sym_comment] = ACTIONS(77),
    },
    [78] = {
        [sym__expression] = STATE(276),
        [sym_binary_operator] = STATE(43),
        [sym_unary_operator] = STATE(43),
        [sym_subscript] = STATE(43),
        [sym_call] = STATE(43),
        [sym_list] = STATE(43),
        [sym_list_comprehension] = STATE(43),
        [sym_dictionary] = STATE(43),
        [sym_dictionary_comprehension] = STATE(43),
        [sym_set] = STATE(43),
        [sym_set_comprehension] = STATE(43),
        [anon_sym_not] = ACTIONS(307),
        [anon_sym_LBRACK] = ACTIONS(127),
        [anon_sym_LBRACE] = ACTIONS(129),
        [sym_number] = ACTIONS(131),
        [sym_identifier] = ACTIONS(133),
        [sym_comment] = ACTIONS(77),
    },
    [79] = {
        [sym__expression] = STATE(274),
        [sym_binary_operator] = STATE(43),
        [sym_unary_operator] = STATE(43),
        [sym_subscript] = STATE(43),
        [sym_call] = STATE(43),
        [sym_list] = STATE(43),
        [sym_list_comprehension] = STATE(43),
        [sym_dictionary] = STATE(43),
        [sym_dictionary_comprehension] = STATE(43),
        [sym_set] = STATE(43),
        [sym_set_comprehension] = STATE(43),
        [anon_sym_not] = ACTIONS(231),
        [anon_sym_LBRACK] = ACTIONS(127),
        [anon_sym_LBRACE] = ACTIONS(129),
        [sym_number] = ACTIONS(131),
        [sym_identifier] = ACTIONS(133),
        [sym_comment] = ACTIONS(77),
    },
    [80] = {
        [anon_sym_COMMA] = ACTIONS(155),
        [anon_sym_LPAREN] = ACTIONS(155),
        [anon_sym_RPAREN] = ACTIONS(155),
        [anon_sym_EQ] = ACTIONS(309),
        [anon_sym_STAR] = ACTIONS(157),
        [anon_sym_PLUS] = ACTIONS(155),
        [anon_sym_DASH] = ACTIONS(155),
        [anon_sym_SLASH] = ACTIONS(155),
        [anon_sym_STAR_STAR] = ACTIONS(155),
        [anon_sym_PIPE] = ACTIONS(155),
        [anon_sym_AMP] = ACTIONS(155),
        [anon_sym_CARET] = ACTIONS(155),
        [anon_sym_LT_LT] = ACTIONS(155),
        [anon_sym_GT_GT] = ACTIONS(155),
        [anon_sym_and] = ACTIONS(155),
        [anon_sym_or] = ACTIONS(155),
        [anon_sym_LBRACK] = ACTIONS(155),
        [sym_comment] = ACTIONS(77),
    },
    [81] = {
        [anon_sym_COMMA] = ACTIONS(311),
        [anon_sym_LPAREN] = ACTIONS(247),
        [anon_sym_RPAREN] = ACTIONS(313),
        [anon_sym_STAR] = ACTIONS(315),
        [anon_sym_PLUS] = ACTIONS(317),
        [anon_sym_DASH] = ACTIONS(317),
        [anon_sym_SLASH] = ACTIONS(319),
        [anon_sym_STAR_STAR] = ACTIONS(321),
        [anon_sym_PIPE] = ACTIONS(323),
        [anon_sym_AMP] = ACTIONS(325),
        [anon_sym_CARET] = ACTIONS(327),
        [anon_sym_LT_LT] = ACTIONS(317),
        [anon_sym_GT_GT] = ACTIONS(317),
        [anon_sym_and] = ACTIONS(325),
        [anon_sym_or] = ACTIONS(323),
        [anon_sym_LBRACK] = ACTIONS(263),
        [sym_comment] = ACTIONS(77),
    },
    [82] = {
        [anon_sym_COMMA] = ACTIONS(311),
        [anon_sym_RPAREN] = ACTIONS(313),
        [sym_comment] = ACTIONS(77),
    },
    [83] = {
        [aux_sym_call_repeat2] = STATE(117),
        [anon_sym_COMMA] = ACTIONS(329),
        [anon_sym_RPAREN] = ACTIONS(313),
        [sym_comment] = ACTIONS(77),
    },
    [84] = {
        [anon_sym_RPAREN] = ACTIONS(313),
        [sym_comment] = ACTIONS(77),
    },
    [85] = {
        [sym__expression] = STATE(86),
        [sym_binary_operator] = STATE(43),
        [sym_unary_operator] = STATE(43),
        [sym_subscript] = STATE(43),
        [sym_call] = STATE(43),
        [sym_keyword_argument] = STATE(87),
        [sym_list_splat_argument] = STATE(88),
        [sym_dictionary_splat_argument] = STATE(89),
        [sym_list] = STATE(43),
        [sym_list_comprehension] = STATE(43),
        [sym_dictionary] = STATE(43),
        [sym_dictionary_comprehension] = STATE(43),
        [sym_set] = STATE(43),
        [sym_set_comprehension] = STATE(43),
        [anon_sym_STAR] = ACTIONS(227),
        [anon_sym_STAR_STAR] = ACTIONS(229),
        [anon_sym_not] = ACTIONS(231),
        [anon_sym_LBRACK] = ACTIONS(127),
        [anon_sym_LBRACE] = ACTIONS(129),
        [sym_number] = ACTIONS(131),
        [sym_identifier] = ACTIONS(233),
        [sym_comment] = ACTIONS(77),
    },
    [86] = {
        [anon_sym_COMMA] = ACTIONS(331),
        [anon_sym_LPAREN] = ACTIONS(247),
        [anon_sym_RPAREN] = ACTIONS(333),
        [anon_sym_STAR] = ACTIONS(315),
        [anon_sym_PLUS] = ACTIONS(317),
        [anon_sym_DASH] = ACTIONS(317),
        [anon_sym_SLASH] = ACTIONS(319),
        [anon_sym_STAR_STAR] = ACTIONS(321),
        [anon_sym_PIPE] = ACTIONS(323),
        [anon_sym_AMP] = ACTIONS(325),
        [anon_sym_CARET] = ACTIONS(327),
        [anon_sym_LT_LT] = ACTIONS(317),
        [anon_sym_GT_GT] = ACTIONS(317),
        [anon_sym_and] = ACTIONS(325),
        [anon_sym_or] = ACTIONS(323),
        [anon_sym_LBRACK] = ACTIONS(263),
        [sym_comment] = ACTIONS(77),
    },
    [87] = {
        [anon_sym_COMMA] = ACTIONS(331),
        [anon_sym_RPAREN] = ACTIONS(333),
        [sym_comment] = ACTIONS(77),
    },
    [88] = {
        [aux_sym_call_repeat2] = STATE(92),
        [anon_sym_COMMA] = ACTIONS(335),
        [anon_sym_RPAREN] = ACTIONS(333),
        [sym_comment] = ACTIONS(77),
    },
    [89] = {
        [anon_sym_RPAREN] = ACTIONS(333),
        [sym_comment] = ACTIONS(77),
    },
    [90] = {
        [anon_sym_COMMA] = ACTIONS(337),
        [anon_sym_COLON] = ACTIONS(337),
        [anon_sym_for] = ACTIONS(337),
        [anon_sym_in] = ACTIONS(337),
        [anon_sym_as] = ACTIONS(337),
        [anon_sym_LPAREN] = ACTIONS(337),
        [anon_sym_RPAREN] = ACTIONS(337),
        [anon_sym_STAR] = ACTIONS(339),
        [anon_sym_PLUS] = ACTIONS(337),
        [anon_sym_DASH] = ACTIONS(337),
        [anon_sym_SLASH] = ACTIONS(337),
        [anon_sym_STAR_STAR] = ACTIONS(337),
        [anon_sym_PIPE] = ACTIONS(337),
        [anon_sym_AMP] = ACTIONS(337),
        [anon_sym_CARET] = ACTIONS(337),
        [anon_sym_LT_LT] = ACTIONS(337),
        [anon_sym_GT_GT] = ACTIONS(337),
        [anon_sym_and] = ACTIONS(337),
        [anon_sym_or] = ACTIONS(337),
        [anon_sym_LBRACK] = ACTIONS(337),
        [anon_sym_RBRACK] = ACTIONS(337),
        [anon_sym_RBRACE] = ACTIONS(337),
        [sym_comment] = ACTIONS(77),
    },
    [91] = {
        [sym__expression] = STATE(110),
        [sym_binary_operator] = STATE(43),
        [sym_unary_operator] = STATE(43),
        [sym_subscript] = STATE(43),
        [sym_call] = STATE(43),
        [sym_keyword_argument] = STATE(111),
        [sym_dictionary_splat_argument] = STATE(112),
        [sym_list] = STATE(43),
        [sym_list_comprehension] = STATE(43),
        [sym_dictionary] = STATE(43),
        [sym_dictionary_comprehension] = STATE(43),
        [sym_set] = STATE(43),
        [sym_set_comprehension] = STATE(43),
        [anon_sym_STAR_STAR] = ACTIONS(229),
        [anon_sym_not] = ACTIONS(231),
        [anon_sym_LBRACK] = ACTIONS(127),
        [anon_sym_LBRACE] = ACTIONS(129),
        [sym_number] = ACTIONS(131),
        [sym_identifier] = ACTIONS(233),
        [sym_comment] = ACTIONS(77),
    },
    [92] = {
        [anon_sym_COMMA] = ACTIONS(341),
        [anon_sym_RPAREN] = ACTIONS(343),
        [sym_comment] = ACTIONS(77),
    },
    [93] = {
        [sym__expression] = STATE(95),
        [sym_binary_operator] = STATE(43),
        [sym_unary_operator] = STATE(43),
        [sym_subscript] = STATE(43),
        [sym_call] = STATE(43),
        [sym_keyword_argument] = STATE(96),
        [sym_dictionary_splat_argument] = STATE(97),
        [sym_list] = STATE(43),
        [sym_list_comprehension] = STATE(43),
        [sym_dictionary] = STATE(43),
        [sym_dictionary_comprehension] = STATE(43),
        [sym_set] = STATE(43),
        [sym_set_comprehension] = STATE(43),
        [anon_sym_STAR_STAR] = ACTIONS(229),
        [anon_sym_not] = ACTIONS(231),
        [anon_sym_LBRACK] = ACTIONS(127),
        [anon_sym_LBRACE] = ACTIONS(129),
        [sym_number] = ACTIONS(131),
        [sym_identifier] = ACTIONS(233),
        [sym_comment] = ACTIONS(77),
    },
    [94] = {
        [anon_sym_COMMA] = ACTIONS(345),
        [anon_sym_COLON] = ACTIONS(345),
        [anon_sym_for] = ACTIONS(345),
        [anon_sym_in] = ACTIONS(345),
        [anon_sym_as] = ACTIONS(345),
        [anon_sym_LPAREN] = ACTIONS(345),
        [anon_sym_RPAREN] = ACTIONS(345),
        [anon_sym_STAR] = ACTIONS(347),
        [anon_sym_PLUS] = ACTIONS(345),
        [anon_sym_DASH] = ACTIONS(345),
        [anon_sym_SLASH] = ACTIONS(345),
        [anon_sym_STAR_STAR] = ACTIONS(345),
        [anon_sym_PIPE] = ACTIONS(345),
        [anon_sym_AMP] = ACTIONS(345),
        [anon_sym_CARET] = ACTIONS(345),
        [anon_sym_LT_LT] = ACTIONS(345),
        [anon_sym_GT_GT] = ACTIONS(345),
        [anon_sym_and] = ACTIONS(345),
        [anon_sym_or] = ACTIONS(345),
        [anon_sym_LBRACK] = ACTIONS(345),
        [anon_sym_RBRACK] = ACTIONS(345),
        [anon_sym_RBRACE] = ACTIONS(345),
        [sym_comment] = ACTIONS(77),
    },
    [95] = {
        [anon_sym_COMMA] = ACTIONS(349),
        [anon_sym_LPAREN] = ACTIONS(247),
        [anon_sym_RPAREN] = ACTIONS(349),
        [anon_sym_STAR] = ACTIONS(315),
        [anon_sym_PLUS] = ACTIONS(317),
        [anon_sym_DASH] = ACTIONS(317),
        [anon_sym_SLASH] = ACTIONS(319),
        [anon_sym_STAR_STAR] = ACTIONS(321),
        [anon_sym_PIPE] = ACTIONS(323),
        [anon_sym_AMP] = ACTIONS(325),
        [anon_sym_CARET] = ACTIONS(327),
        [anon_sym_LT_LT] = ACTIONS(317),
        [anon_sym_GT_GT] = ACTIONS(317),
        [anon_sym_and] = ACTIONS(325),
        [anon_sym_or] = ACTIONS(323),
        [anon_sym_LBRACK] = ACTIONS(263),
        [sym_comment] = ACTIONS(77),
    },
    [96] = {
        [anon_sym_COMMA] = ACTIONS(349),
        [anon_sym_RPAREN] = ACTIONS(349),
        [sym_comment] = ACTIONS(77),
    },
    [97] = {
        [anon_sym_RPAREN] = ACTIONS(351),
        [sym_comment] = ACTIONS(77),
    },
    [98] = {
        [anon_sym_COMMA] = ACTIONS(353),
        [anon_sym_COLON] = ACTIONS(353),
        [anon_sym_for] = ACTIONS(353),
        [anon_sym_in] = ACTIONS(353),
        [anon_sym_as] = ACTIONS(353),
        [anon_sym_LPAREN] = ACTIONS(353),
        [anon_sym_RPAREN] = ACTIONS(353),
        [anon_sym_STAR] = ACTIONS(355),
        [anon_sym_PLUS] = ACTIONS(353),
        [anon_sym_DASH] = ACTIONS(353),
        [anon_sym_SLASH] = ACTIONS(353),
        [anon_sym_STAR_STAR] = ACTIONS(353),
        [anon_sym_PIPE] = ACTIONS(353),
        [anon_sym_AMP] = ACTIONS(353),
        [anon_sym_CARET] = ACTIONS(353),
        [anon_sym_LT_LT] = ACTIONS(353),
        [anon_sym_GT_GT] = ACTIONS(353),
        [anon_sym_and] = ACTIONS(353),
        [anon_sym_or] = ACTIONS(353),
        [anon_sym_LBRACK] = ACTIONS(353),
        [anon_sym_RBRACK] = ACTIONS(353),
        [anon_sym_RBRACE] = ACTIONS(353),
        [sym_comment] = ACTIONS(77),
    },
    [99] = {
        [sym__expression] = STATE(109),
        [sym_binary_operator] = STATE(43),
        [sym_unary_operator] = STATE(43),
        [sym_subscript] = STATE(43),
        [sym_call] = STATE(43),
        [sym_list] = STATE(43),
        [sym_list_comprehension] = STATE(43),
        [sym_dictionary] = STATE(43),
        [sym_dictionary_comprehension] = STATE(43),
        [sym_set] = STATE(43),
        [sym_set_comprehension] = STATE(43),
        [anon_sym_not] = ACTIONS(231),
        [anon_sym_LBRACK] = ACTIONS(127),
        [anon_sym_LBRACE] = ACTIONS(129),
        [sym_number] = ACTIONS(131),
        [sym_identifier] = ACTIONS(133),
        [sym_comment] = ACTIONS(77),
    },
    [100] = {
        [sym__expression] = STATE(107),
        [sym_binary_operator] = STATE(43),
        [sym_unary_operator] = STATE(43),
        [sym_subscript] = STATE(43),
        [sym_call] = STATE(43),
        [sym_list] = STATE(43),
        [sym_list_comprehension] = STATE(43),
        [sym_dictionary] = STATE(43),
        [sym_dictionary_comprehension] = STATE(43),
        [sym_set] = STATE(43),
        [sym_set_comprehension] = STATE(43),
        [anon_sym_not] = ACTIONS(231),
        [anon_sym_LBRACK] = ACTIONS(127),
        [anon_sym_LBRACE] = ACTIONS(129),
        [sym_number] = ACTIONS(131),
        [sym_identifier] = ACTIONS(133),
        [sym_comment] = ACTIONS(77),
    },
    [101] = {
        [sym__expression] = STATE(75),
        [sym_binary_operator] = STATE(43),
        [sym_unary_operator] = STATE(43),
        [sym_subscript] = STATE(43),
        [sym_call] = STATE(43),
        [sym_list] = STATE(43),
        [sym_list_comprehension] = STATE(43),
        [sym_dictionary] = STATE(43),
        [sym_dictionary_comprehension] = STATE(43),
        [sym_set] = STATE(43),
        [sym_set_comprehension] = STATE(43),
        [anon_sym_not] = ACTIONS(231),
        [anon_sym_LBRACK] = ACTIONS(127),
        [anon_sym_LBRACE] = ACTIONS(129),
        [sym_number] = ACTIONS(131),
        [sym_identifier] = ACTIONS(133),
        [sym_comment] = ACTIONS(77),
    },
    [102] = {
        [sym__expression] = STATE(105),
        [sym_binary_operator] = STATE(43),
        [sym_unary_operator] = STATE(43),
        [sym_subscript] = STATE(43),
        [sym_call] = STATE(43),
        [sym_list] = STATE(43),
        [sym_list_comprehension] = STATE(43),
        [sym_dictionary] = STATE(43),
        [sym_dictionary_comprehension] = STATE(43),
        [sym_set] = STATE(43),
        [sym_set_comprehension] = STATE(43),
        [anon_sym_not] = ACTIONS(231),
        [anon_sym_LBRACK] = ACTIONS(127),
        [anon_sym_LBRACE] = ACTIONS(129),
        [sym_number] = ACTIONS(131),
        [sym_identifier] = ACTIONS(133),
        [sym_comment] = ACTIONS(77),
    },
    [103] = {
        [sym__expression] = STATE(106),
        [sym_binary_operator] = STATE(43),
        [sym_unary_operator] = STATE(43),
        [sym_subscript] = STATE(43),
        [sym_call] = STATE(43),
        [sym_list] = STATE(43),
        [sym_list_comprehension] = STATE(43),
        [sym_dictionary] = STATE(43),
        [sym_dictionary_comprehension] = STATE(43),
        [sym_set] = STATE(43),
        [sym_set_comprehension] = STATE(43),
        [anon_sym_not] = ACTIONS(231),
        [anon_sym_LBRACK] = ACTIONS(127),
        [anon_sym_LBRACE] = ACTIONS(129),
        [sym_number] = ACTIONS(131),
        [sym_identifier] = ACTIONS(133),
        [sym_comment] = ACTIONS(77),
    },
    [104] = {
        [sym__expression] = STATE(108),
        [sym_binary_operator] = STATE(43),
        [sym_unary_operator] = STATE(43),
        [sym_subscript] = STATE(43),
        [sym_call] = STATE(43),
        [sym_list] = STATE(43),
        [sym_list_comprehension] = STATE(43),
        [sym_dictionary] = STATE(43),
        [sym_dictionary_comprehension] = STATE(43),
        [sym_set] = STATE(43),
        [sym_set_comprehension] = STATE(43),
        [anon_sym_not] = ACTIONS(231),
        [anon_sym_LBRACK] = ACTIONS(127),
        [anon_sym_LBRACE] = ACTIONS(129),
        [sym_number] = ACTIONS(131),
        [sym_identifier] = ACTIONS(133),
        [sym_comment] = ACTIONS(77),
    },
    [105] = {
        [anon_sym_COMMA] = ACTIONS(303),
        [anon_sym_LPAREN] = ACTIONS(247),
        [anon_sym_RPAREN] = ACTIONS(303),
        [anon_sym_STAR] = ACTIONS(315),
        [anon_sym_PLUS] = ACTIONS(317),
        [anon_sym_DASH] = ACTIONS(317),
        [anon_sym_SLASH] = ACTIONS(319),
        [anon_sym_STAR_STAR] = ACTIONS(321),
        [anon_sym_PIPE] = ACTIONS(303),
        [anon_sym_AMP] = ACTIONS(325),
        [anon_sym_CARET] = ACTIONS(327),
        [anon_sym_LT_LT] = ACTIONS(317),
        [anon_sym_GT_GT] = ACTIONS(317),
        [anon_sym_and] = ACTIONS(325),
        [anon_sym_or] = ACTIONS(303),
        [anon_sym_LBRACK] = ACTIONS(303),
        [sym_comment] = ACTIONS(77),
    },
    [106] = {
        [anon_sym_COMMA] = ACTIONS(303),
        [anon_sym_LPAREN] = ACTIONS(247),
        [anon_sym_RPAREN] = ACTIONS(303),
        [anon_sym_STAR] = ACTIONS(315),
        [anon_sym_PLUS] = ACTIONS(317),
        [anon_sym_DASH] = ACTIONS(317),
        [anon_sym_SLASH] = ACTIONS(319),
        [anon_sym_STAR_STAR] = ACTIONS(321),
        [anon_sym_PIPE] = ACTIONS(303),
        [anon_sym_AMP] = ACTIONS(303),
        [anon_sym_CARET] = ACTIONS(327),
        [anon_sym_LT_LT] = ACTIONS(317),
        [anon_sym_GT_GT] = ACTIONS(317),
        [anon_sym_and] = ACTIONS(303),
        [anon_sym_or] = ACTIONS(303),
        [anon_sym_LBRACK] = ACTIONS(303),
        [sym_comment] = ACTIONS(77),
    },
    [107] = {
        [anon_sym_COMMA] = ACTIONS(303),
        [anon_sym_LPAREN] = ACTIONS(247),
        [anon_sym_RPAREN] = ACTIONS(303),
        [anon_sym_STAR] = ACTIONS(315),
        [anon_sym_PLUS] = ACTIONS(303),
        [anon_sym_DASH] = ACTIONS(303),
        [anon_sym_SLASH] = ACTIONS(319),
        [anon_sym_STAR_STAR] = ACTIONS(321),
        [anon_sym_PIPE] = ACTIONS(303),
        [anon_sym_AMP] = ACTIONS(303),
        [anon_sym_CARET] = ACTIONS(303),
        [anon_sym_LT_LT] = ACTIONS(303),
        [anon_sym_GT_GT] = ACTIONS(303),
        [anon_sym_and] = ACTIONS(303),
        [anon_sym_or] = ACTIONS(303),
        [anon_sym_LBRACK] = ACTIONS(303),
        [sym_comment] = ACTIONS(77),
    },
    [108] = {
        [anon_sym_COMMA] = ACTIONS(303),
        [anon_sym_LPAREN] = ACTIONS(247),
        [anon_sym_RPAREN] = ACTIONS(303),
        [anon_sym_STAR] = ACTIONS(315),
        [anon_sym_PLUS] = ACTIONS(317),
        [anon_sym_DASH] = ACTIONS(317),
        [anon_sym_SLASH] = ACTIONS(319),
        [anon_sym_STAR_STAR] = ACTIONS(321),
        [anon_sym_PIPE] = ACTIONS(303),
        [anon_sym_AMP] = ACTIONS(303),
        [anon_sym_CARET] = ACTIONS(303),
        [anon_sym_LT_LT] = ACTIONS(317),
        [anon_sym_GT_GT] = ACTIONS(317),
        [anon_sym_and] = ACTIONS(303),
        [anon_sym_or] = ACTIONS(303),
        [anon_sym_LBRACK] = ACTIONS(303),
        [sym_comment] = ACTIONS(77),
    },
    [109] = {
        [anon_sym_COMMA] = ACTIONS(303),
        [anon_sym_LPAREN] = ACTIONS(247),
        [anon_sym_RPAREN] = ACTIONS(303),
        [anon_sym_STAR] = ACTIONS(305),
        [anon_sym_PLUS] = ACTIONS(303),
        [anon_sym_DASH] = ACTIONS(303),
        [anon_sym_SLASH] = ACTIONS(303),
        [anon_sym_STAR_STAR] = ACTIONS(321),
        [anon_sym_PIPE] = ACTIONS(303),
        [anon_sym_AMP] = ACTIONS(303),
        [anon_sym_CARET] = ACTIONS(303),
        [anon_sym_LT_LT] = ACTIONS(303),
        [anon_sym_GT_GT] = ACTIONS(303),
        [anon_sym_and] = ACTIONS(303),
        [anon_sym_or] = ACTIONS(303),
        [anon_sym_LBRACK] = ACTIONS(303),
        [sym_comment] = ACTIONS(77),
    },
    [110] = {
        [anon_sym_COMMA] = ACTIONS(357),
        [anon_sym_LPAREN] = ACTIONS(247),
        [anon_sym_RPAREN] = ACTIONS(357),
        [anon_sym_STAR] = ACTIONS(315),
        [anon_sym_PLUS] = ACTIONS(317),
        [anon_sym_DASH] = ACTIONS(317),
        [anon_sym_SLASH] = ACTIONS(319),
        [anon_sym_STAR_STAR] = ACTIONS(321),
        [anon_sym_PIPE] = ACTIONS(323),
        [anon_sym_AMP] = ACTIONS(325),
        [anon_sym_CARET] = ACTIONS(327),
        [anon_sym_LT_LT] = ACTIONS(317),
        [anon_sym_GT_GT] = ACTIONS(317),
        [anon_sym_and] = ACTIONS(325),
        [anon_sym_or] = ACTIONS(323),
        [anon_sym_LBRACK] = ACTIONS(263),
        [sym_comment] = ACTIONS(77),
    },
    [111] = {
        [anon_sym_COMMA] = ACTIONS(357),
        [anon_sym_RPAREN] = ACTIONS(357),
        [sym_comment] = ACTIONS(77),
    },
    [112] = {
        [anon_sym_RPAREN] = ACTIONS(359),
        [sym_comment] = ACTIONS(77),
    },
    [113] = {
        [anon_sym_COMMA] = ACTIONS(361),
        [anon_sym_COLON] = ACTIONS(361),
        [anon_sym_for] = ACTIONS(361),
        [anon_sym_in] = ACTIONS(361),
        [anon_sym_as] = ACTIONS(361),
        [anon_sym_LPAREN] = ACTIONS(361),
        [anon_sym_RPAREN] = ACTIONS(361),
        [anon_sym_STAR] = ACTIONS(363),
        [anon_sym_PLUS] = ACTIONS(361),
        [anon_sym_DASH] = ACTIONS(361),
        [anon_sym_SLASH] = ACTIONS(361),
        [anon_sym_STAR_STAR] = ACTIONS(361),
        [anon_sym_PIPE] = ACTIONS(361),
        [anon_sym_AMP] = ACTIONS(361),
        [anon_sym_CARET] = ACTIONS(361),
        [anon_sym_LT_LT] = ACTIONS(361),
        [anon_sym_GT_GT] = ACTIONS(361),
        [anon_sym_and] = ACTIONS(361),
        [anon_sym_or] = ACTIONS(361),
        [anon_sym_LBRACK] = ACTIONS(361),
        [anon_sym_RBRACK] = ACTIONS(361),
        [anon_sym_RBRACE] = ACTIONS(361),
        [sym_comment] = ACTIONS(77),
    },
    [114] = {
        [anon_sym_RPAREN] = ACTIONS(343),
        [anon_sym_STAR] = ACTIONS(365),
        [anon_sym_STAR_STAR] = ACTIONS(367),
        [anon_sym_not] = ACTIONS(365),
        [anon_sym_LBRACK] = ACTIONS(367),
        [anon_sym_LBRACE] = ACTIONS(367),
        [sym_number] = ACTIONS(365),
        [sym_identifier] = ACTIONS(369),
        [sym_comment] = ACTIONS(77),
    },
    [115] = {
        [anon_sym_COMMA] = ACTIONS(371),
        [anon_sym_COLON] = ACTIONS(371),
        [anon_sym_for] = ACTIONS(371),
        [anon_sym_in] = ACTIONS(371),
        [anon_sym_as] = ACTIONS(371),
        [anon_sym_LPAREN] = ACTIONS(371),
        [anon_sym_RPAREN] = ACTIONS(371),
        [anon_sym_STAR] = ACTIONS(373),
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
        [sym_comment] = ACTIONS(77),
    },
    [116] = {
        [sym__expression] = STATE(110),
        [sym_binary_operator] = STATE(43),
        [sym_unary_operator] = STATE(43),
        [sym_subscript] = STATE(43),
        [sym_call] = STATE(43),
        [sym_keyword_argument] = STATE(111),
        [sym_dictionary_splat_argument] = STATE(119),
        [sym_list] = STATE(43),
        [sym_list_comprehension] = STATE(43),
        [sym_dictionary] = STATE(43),
        [sym_dictionary_comprehension] = STATE(43),
        [sym_set] = STATE(43),
        [sym_set_comprehension] = STATE(43),
        [anon_sym_STAR_STAR] = ACTIONS(229),
        [anon_sym_not] = ACTIONS(231),
        [anon_sym_LBRACK] = ACTIONS(127),
        [anon_sym_LBRACE] = ACTIONS(129),
        [sym_number] = ACTIONS(131),
        [sym_identifier] = ACTIONS(233),
        [sym_comment] = ACTIONS(77),
    },
    [117] = {
        [anon_sym_COMMA] = ACTIONS(375),
        [anon_sym_RPAREN] = ACTIONS(333),
        [sym_comment] = ACTIONS(77),
    },
    [118] = {
        [sym__expression] = STATE(95),
        [sym_binary_operator] = STATE(43),
        [sym_unary_operator] = STATE(43),
        [sym_subscript] = STATE(43),
        [sym_call] = STATE(43),
        [sym_keyword_argument] = STATE(96),
        [sym_dictionary_splat_argument] = STATE(112),
        [sym_list] = STATE(43),
        [sym_list_comprehension] = STATE(43),
        [sym_dictionary] = STATE(43),
        [sym_dictionary_comprehension] = STATE(43),
        [sym_set] = STATE(43),
        [sym_set_comprehension] = STATE(43),
        [anon_sym_STAR_STAR] = ACTIONS(229),
        [anon_sym_not] = ACTIONS(231),
        [anon_sym_LBRACK] = ACTIONS(127),
        [anon_sym_LBRACE] = ACTIONS(129),
        [sym_number] = ACTIONS(131),
        [sym_identifier] = ACTIONS(233),
        [sym_comment] = ACTIONS(77),
    },
    [119] = {
        [anon_sym_RPAREN] = ACTIONS(343),
        [sym_comment] = ACTIONS(77),
    },
    [120] = {
        [anon_sym_RPAREN] = ACTIONS(333),
        [anon_sym_STAR] = ACTIONS(377),
        [anon_sym_STAR_STAR] = ACTIONS(379),
        [anon_sym_not] = ACTIONS(377),
        [anon_sym_LBRACK] = ACTIONS(379),
        [anon_sym_LBRACE] = ACTIONS(379),
        [sym_number] = ACTIONS(377),
        [sym_identifier] = ACTIONS(381),
        [sym_comment] = ACTIONS(77),
    },
    [121] = {
        [sym__expression] = STATE(122),
        [sym_binary_operator] = STATE(43),
        [sym_unary_operator] = STATE(43),
        [sym_subscript] = STATE(43),
        [sym_call] = STATE(43),
        [sym_list] = STATE(43),
        [sym_list_comprehension] = STATE(43),
        [sym_dictionary] = STATE(43),
        [sym_dictionary_comprehension] = STATE(43),
        [sym_set] = STATE(43),
        [sym_set_comprehension] = STATE(43),
        [anon_sym_not] = ACTIONS(231),
        [anon_sym_LBRACK] = ACTIONS(127),
        [anon_sym_LBRACE] = ACTIONS(129),
        [sym_number] = ACTIONS(131),
        [sym_identifier] = ACTIONS(133),
        [sym_comment] = ACTIONS(77),
    },
    [122] = {
        [anon_sym_COMMA] = ACTIONS(383),
        [anon_sym_LPAREN] = ACTIONS(247),
        [anon_sym_RPAREN] = ACTIONS(383),
        [anon_sym_STAR] = ACTIONS(315),
        [anon_sym_PLUS] = ACTIONS(317),
        [anon_sym_DASH] = ACTIONS(317),
        [anon_sym_SLASH] = ACTIONS(319),
        [anon_sym_STAR_STAR] = ACTIONS(321),
        [anon_sym_PIPE] = ACTIONS(323),
        [anon_sym_AMP] = ACTIONS(325),
        [anon_sym_CARET] = ACTIONS(327),
        [anon_sym_LT_LT] = ACTIONS(317),
        [anon_sym_GT_GT] = ACTIONS(317),
        [anon_sym_and] = ACTIONS(325),
        [anon_sym_or] = ACTIONS(323),
        [anon_sym_LBRACK] = ACTIONS(263),
        [sym_comment] = ACTIONS(77),
    },
    [123] = {
        [sym__expression] = STATE(274),
        [sym_binary_operator] = STATE(43),
        [sym_unary_operator] = STATE(43),
        [sym_subscript] = STATE(43),
        [sym_call] = STATE(43),
        [sym_list] = STATE(43),
        [sym_list_comprehension] = STATE(43),
        [sym_dictionary] = STATE(43),
        [sym_dictionary_comprehension] = STATE(43),
        [sym_set] = STATE(43),
        [sym_set_comprehension] = STATE(43),
        [anon_sym_not] = ACTIONS(151),
        [anon_sym_LBRACK] = ACTIONS(127),
        [anon_sym_LBRACE] = ACTIONS(129),
        [sym_number] = ACTIONS(131),
        [sym_identifier] = ACTIONS(133),
        [sym_comment] = ACTIONS(77),
    },
    [124] = {
        [anon_sym_COMMA] = ACTIONS(385),
        [anon_sym_COLON] = ACTIONS(385),
        [anon_sym_for] = ACTIONS(385),
        [anon_sym_in] = ACTIONS(385),
        [anon_sym_as] = ACTIONS(385),
        [anon_sym_LPAREN] = ACTIONS(385),
        [anon_sym_RPAREN] = ACTIONS(385),
        [anon_sym_STAR] = ACTIONS(387),
        [anon_sym_PLUS] = ACTIONS(385),
        [anon_sym_DASH] = ACTIONS(385),
        [anon_sym_SLASH] = ACTIONS(385),
        [anon_sym_STAR_STAR] = ACTIONS(385),
        [anon_sym_PIPE] = ACTIONS(385),
        [anon_sym_AMP] = ACTIONS(385),
        [anon_sym_CARET] = ACTIONS(385),
        [anon_sym_LT_LT] = ACTIONS(385),
        [anon_sym_GT_GT] = ACTIONS(385),
        [anon_sym_and] = ACTIONS(385),
        [anon_sym_or] = ACTIONS(385),
        [anon_sym_LBRACK] = ACTIONS(385),
        [anon_sym_RBRACK] = ACTIONS(385),
        [anon_sym_RBRACE] = ACTIONS(385),
        [sym_comment] = ACTIONS(77),
    },
    [125] = {
        [aux_sym_print_statement_repeat1] = STATE(207),
        [anon_sym_COMMA] = ACTIONS(389),
        [anon_sym_COLON] = ACTIONS(391),
        [anon_sym_for] = ACTIONS(393),
        [anon_sym_LPAREN] = ACTIONS(247),
        [anon_sym_STAR] = ACTIONS(395),
        [anon_sym_PLUS] = ACTIONS(397),
        [anon_sym_DASH] = ACTIONS(397),
        [anon_sym_SLASH] = ACTIONS(399),
        [anon_sym_STAR_STAR] = ACTIONS(401),
        [anon_sym_PIPE] = ACTIONS(403),
        [anon_sym_AMP] = ACTIONS(405),
        [anon_sym_CARET] = ACTIONS(407),
        [anon_sym_LT_LT] = ACTIONS(397),
        [anon_sym_GT_GT] = ACTIONS(397),
        [anon_sym_and] = ACTIONS(405),
        [anon_sym_or] = ACTIONS(403),
        [anon_sym_LBRACK] = ACTIONS(263),
        [anon_sym_RBRACE] = ACTIONS(409),
        [sym_comment] = ACTIONS(77),
    },
    [126] = {
        [aux_sym_dictionary_repeat1] = STATE(130),
        [anon_sym_COMMA] = ACTIONS(411),
        [anon_sym_for] = ACTIONS(413),
        [anon_sym_RBRACE] = ACTIONS(415),
        [sym_comment] = ACTIONS(77),
    },
    [127] = {
        [sym__expression] = STATE(135),
        [sym_binary_operator] = STATE(43),
        [sym_unary_operator] = STATE(43),
        [sym_subscript] = STATE(43),
        [sym_call] = STATE(43),
        [sym_list] = STATE(43),
        [sym_list_comprehension] = STATE(43),
        [sym_dictionary] = STATE(43),
        [sym_dictionary_comprehension] = STATE(43),
        [sym_pair] = STATE(196),
        [sym_set] = STATE(43),
        [sym_set_comprehension] = STATE(43),
        [anon_sym_not] = ACTIONS(125),
        [anon_sym_LBRACK] = ACTIONS(127),
        [anon_sym_LBRACE] = ACTIONS(129),
        [anon_sym_RBRACE] = ACTIONS(417),
        [sym_number] = ACTIONS(131),
        [sym_identifier] = ACTIONS(133),
        [sym_comment] = ACTIONS(77),
    },
    [128] = {
        [sym_expression_list] = STATE(163),
        [sym__expression] = STATE(164),
        [sym_binary_operator] = STATE(43),
        [sym_unary_operator] = STATE(43),
        [sym_subscript] = STATE(43),
        [sym_call] = STATE(43),
        [sym_list] = STATE(43),
        [sym_list_comprehension] = STATE(43),
        [sym_dictionary] = STATE(43),
        [sym_dictionary_comprehension] = STATE(43),
        [sym_set] = STATE(43),
        [sym_set_comprehension] = STATE(43),
        [anon_sym_not] = ACTIONS(135),
        [anon_sym_LBRACK] = ACTIONS(127),
        [anon_sym_LBRACE] = ACTIONS(129),
        [sym_number] = ACTIONS(131),
        [sym_identifier] = ACTIONS(133),
        [sym_comment] = ACTIONS(77),
    },
    [129] = {
        [anon_sym_COMMA] = ACTIONS(419),
        [anon_sym_COLON] = ACTIONS(419),
        [anon_sym_for] = ACTIONS(419),
        [anon_sym_in] = ACTIONS(419),
        [anon_sym_as] = ACTIONS(419),
        [anon_sym_LPAREN] = ACTIONS(419),
        [anon_sym_RPAREN] = ACTIONS(419),
        [anon_sym_STAR] = ACTIONS(421),
        [anon_sym_PLUS] = ACTIONS(419),
        [anon_sym_DASH] = ACTIONS(419),
        [anon_sym_SLASH] = ACTIONS(419),
        [anon_sym_STAR_STAR] = ACTIONS(419),
        [anon_sym_PIPE] = ACTIONS(419),
        [anon_sym_AMP] = ACTIONS(419),
        [anon_sym_CARET] = ACTIONS(419),
        [anon_sym_LT_LT] = ACTIONS(419),
        [anon_sym_GT_GT] = ACTIONS(419),
        [anon_sym_and] = ACTIONS(419),
        [anon_sym_or] = ACTIONS(419),
        [anon_sym_LBRACK] = ACTIONS(419),
        [anon_sym_RBRACK] = ACTIONS(419),
        [anon_sym_RBRACE] = ACTIONS(419),
        [sym_comment] = ACTIONS(77),
    },
    [130] = {
        [anon_sym_COMMA] = ACTIONS(423),
        [anon_sym_RBRACE] = ACTIONS(417),
        [sym_comment] = ACTIONS(77),
    },
    [131] = {
        [sym__expression] = STATE(135),
        [sym_binary_operator] = STATE(43),
        [sym_unary_operator] = STATE(43),
        [sym_subscript] = STATE(43),
        [sym_call] = STATE(43),
        [sym_list] = STATE(43),
        [sym_list_comprehension] = STATE(43),
        [sym_dictionary] = STATE(43),
        [sym_dictionary_comprehension] = STATE(43),
        [sym_pair] = STATE(136),
        [sym_set] = STATE(43),
        [sym_set_comprehension] = STATE(43),
        [anon_sym_not] = ACTIONS(125),
        [anon_sym_LBRACK] = ACTIONS(127),
        [anon_sym_LBRACE] = ACTIONS(129),
        [anon_sym_RBRACE] = ACTIONS(425),
        [sym_number] = ACTIONS(131),
        [sym_identifier] = ACTIONS(133),
        [sym_comment] = ACTIONS(77),
    },
    [132] = {
        [anon_sym_COMMA] = ACTIONS(427),
        [anon_sym_COLON] = ACTIONS(427),
        [anon_sym_for] = ACTIONS(427),
        [anon_sym_in] = ACTIONS(427),
        [anon_sym_as] = ACTIONS(427),
        [anon_sym_LPAREN] = ACTIONS(427),
        [anon_sym_RPAREN] = ACTIONS(427),
        [anon_sym_STAR] = ACTIONS(429),
        [anon_sym_PLUS] = ACTIONS(427),
        [anon_sym_DASH] = ACTIONS(427),
        [anon_sym_SLASH] = ACTIONS(427),
        [anon_sym_STAR_STAR] = ACTIONS(427),
        [anon_sym_PIPE] = ACTIONS(427),
        [anon_sym_AMP] = ACTIONS(427),
        [anon_sym_CARET] = ACTIONS(427),
        [anon_sym_LT_LT] = ACTIONS(427),
        [anon_sym_GT_GT] = ACTIONS(427),
        [anon_sym_and] = ACTIONS(427),
        [anon_sym_or] = ACTIONS(427),
        [anon_sym_LBRACK] = ACTIONS(427),
        [anon_sym_RBRACK] = ACTIONS(427),
        [anon_sym_RBRACE] = ACTIONS(427),
        [sym_comment] = ACTIONS(77),
    },
    [133] = {
        [sym__expression] = STATE(274),
        [sym_binary_operator] = STATE(43),
        [sym_unary_operator] = STATE(43),
        [sym_subscript] = STATE(43),
        [sym_call] = STATE(43),
        [sym_list] = STATE(43),
        [sym_list_comprehension] = STATE(43),
        [sym_dictionary] = STATE(43),
        [sym_dictionary_comprehension] = STATE(43),
        [sym_set] = STATE(43),
        [sym_set_comprehension] = STATE(43),
        [anon_sym_not] = ACTIONS(125),
        [anon_sym_LBRACK] = ACTIONS(127),
        [anon_sym_LBRACE] = ACTIONS(129),
        [sym_number] = ACTIONS(131),
        [sym_identifier] = ACTIONS(133),
        [sym_comment] = ACTIONS(77),
    },
    [134] = {
        [anon_sym_COMMA] = ACTIONS(431),
        [anon_sym_COLON] = ACTIONS(431),
        [anon_sym_for] = ACTIONS(431),
        [anon_sym_in] = ACTIONS(431),
        [anon_sym_as] = ACTIONS(431),
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
        [sym_comment] = ACTIONS(77),
    },
    [135] = {
        [anon_sym_COLON] = ACTIONS(435),
        [anon_sym_LPAREN] = ACTIONS(247),
        [anon_sym_STAR] = ACTIONS(437),
        [anon_sym_PLUS] = ACTIONS(439),
        [anon_sym_DASH] = ACTIONS(439),
        [anon_sym_SLASH] = ACTIONS(441),
        [anon_sym_STAR_STAR] = ACTIONS(443),
        [anon_sym_PIPE] = ACTIONS(445),
        [anon_sym_AMP] = ACTIONS(447),
        [anon_sym_CARET] = ACTIONS(449),
        [anon_sym_LT_LT] = ACTIONS(439),
        [anon_sym_GT_GT] = ACTIONS(439),
        [anon_sym_and] = ACTIONS(447),
        [anon_sym_or] = ACTIONS(445),
        [anon_sym_LBRACK] = ACTIONS(263),
        [sym_comment] = ACTIONS(77),
    },
    [136] = {
        [anon_sym_COMMA] = ACTIONS(451),
        [anon_sym_RBRACE] = ACTIONS(451),
        [sym_comment] = ACTIONS(77),
    },
    [137] = {
        [sym__expression] = STATE(150),
        [sym_binary_operator] = STATE(43),
        [sym_unary_operator] = STATE(43),
        [sym_subscript] = STATE(43),
        [sym_call] = STATE(43),
        [sym_list] = STATE(43),
        [sym_list_comprehension] = STATE(43),
        [sym_dictionary] = STATE(43),
        [sym_dictionary_comprehension] = STATE(43),
        [sym_set] = STATE(43),
        [sym_set_comprehension] = STATE(43),
        [anon_sym_not] = ACTIONS(453),
        [anon_sym_LBRACK] = ACTIONS(127),
        [anon_sym_LBRACE] = ACTIONS(129),
        [sym_number] = ACTIONS(131),
        [sym_identifier] = ACTIONS(133),
        [sym_comment] = ACTIONS(77),
    },
    [138] = {
        [sym__expression] = STATE(148),
        [sym_binary_operator] = STATE(43),
        [sym_unary_operator] = STATE(43),
        [sym_subscript] = STATE(43),
        [sym_call] = STATE(43),
        [sym_list] = STATE(43),
        [sym_list_comprehension] = STATE(43),
        [sym_dictionary] = STATE(43),
        [sym_dictionary_comprehension] = STATE(43),
        [sym_set] = STATE(43),
        [sym_set_comprehension] = STATE(43),
        [anon_sym_not] = ACTIONS(125),
        [anon_sym_LBRACK] = ACTIONS(127),
        [anon_sym_LBRACE] = ACTIONS(129),
        [sym_number] = ACTIONS(131),
        [sym_identifier] = ACTIONS(133),
        [sym_comment] = ACTIONS(77),
    },
    [139] = {
        [sym__expression] = STATE(146),
        [sym_binary_operator] = STATE(43),
        [sym_unary_operator] = STATE(43),
        [sym_subscript] = STATE(43),
        [sym_call] = STATE(43),
        [sym_list] = STATE(43),
        [sym_list_comprehension] = STATE(43),
        [sym_dictionary] = STATE(43),
        [sym_dictionary_comprehension] = STATE(43),
        [sym_set] = STATE(43),
        [sym_set_comprehension] = STATE(43),
        [anon_sym_not] = ACTIONS(125),
        [anon_sym_LBRACK] = ACTIONS(127),
        [anon_sym_LBRACE] = ACTIONS(129),
        [sym_number] = ACTIONS(131),
        [sym_identifier] = ACTIONS(133),
        [sym_comment] = ACTIONS(77),
    },
    [140] = {
        [sym__expression] = STATE(75),
        [sym_binary_operator] = STATE(43),
        [sym_unary_operator] = STATE(43),
        [sym_subscript] = STATE(43),
        [sym_call] = STATE(43),
        [sym_list] = STATE(43),
        [sym_list_comprehension] = STATE(43),
        [sym_dictionary] = STATE(43),
        [sym_dictionary_comprehension] = STATE(43),
        [sym_set] = STATE(43),
        [sym_set_comprehension] = STATE(43),
        [anon_sym_not] = ACTIONS(125),
        [anon_sym_LBRACK] = ACTIONS(127),
        [anon_sym_LBRACE] = ACTIONS(129),
        [sym_number] = ACTIONS(131),
        [sym_identifier] = ACTIONS(133),
        [sym_comment] = ACTIONS(77),
    },
    [141] = {
        [sym__expression] = STATE(144),
        [sym_binary_operator] = STATE(43),
        [sym_unary_operator] = STATE(43),
        [sym_subscript] = STATE(43),
        [sym_call] = STATE(43),
        [sym_list] = STATE(43),
        [sym_list_comprehension] = STATE(43),
        [sym_dictionary] = STATE(43),
        [sym_dictionary_comprehension] = STATE(43),
        [sym_set] = STATE(43),
        [sym_set_comprehension] = STATE(43),
        [anon_sym_not] = ACTIONS(125),
        [anon_sym_LBRACK] = ACTIONS(127),
        [anon_sym_LBRACE] = ACTIONS(129),
        [sym_number] = ACTIONS(131),
        [sym_identifier] = ACTIONS(133),
        [sym_comment] = ACTIONS(77),
    },
    [142] = {
        [sym__expression] = STATE(145),
        [sym_binary_operator] = STATE(43),
        [sym_unary_operator] = STATE(43),
        [sym_subscript] = STATE(43),
        [sym_call] = STATE(43),
        [sym_list] = STATE(43),
        [sym_list_comprehension] = STATE(43),
        [sym_dictionary] = STATE(43),
        [sym_dictionary_comprehension] = STATE(43),
        [sym_set] = STATE(43),
        [sym_set_comprehension] = STATE(43),
        [anon_sym_not] = ACTIONS(125),
        [anon_sym_LBRACK] = ACTIONS(127),
        [anon_sym_LBRACE] = ACTIONS(129),
        [sym_number] = ACTIONS(131),
        [sym_identifier] = ACTIONS(133),
        [sym_comment] = ACTIONS(77),
    },
    [143] = {
        [sym__expression] = STATE(147),
        [sym_binary_operator] = STATE(43),
        [sym_unary_operator] = STATE(43),
        [sym_subscript] = STATE(43),
        [sym_call] = STATE(43),
        [sym_list] = STATE(43),
        [sym_list_comprehension] = STATE(43),
        [sym_dictionary] = STATE(43),
        [sym_dictionary_comprehension] = STATE(43),
        [sym_set] = STATE(43),
        [sym_set_comprehension] = STATE(43),
        [anon_sym_not] = ACTIONS(125),
        [anon_sym_LBRACK] = ACTIONS(127),
        [anon_sym_LBRACE] = ACTIONS(129),
        [sym_number] = ACTIONS(131),
        [sym_identifier] = ACTIONS(133),
        [sym_comment] = ACTIONS(77),
    },
    [144] = {
        [anon_sym_COLON] = ACTIONS(303),
        [anon_sym_LPAREN] = ACTIONS(247),
        [anon_sym_STAR] = ACTIONS(437),
        [anon_sym_PLUS] = ACTIONS(439),
        [anon_sym_DASH] = ACTIONS(439),
        [anon_sym_SLASH] = ACTIONS(441),
        [anon_sym_STAR_STAR] = ACTIONS(443),
        [anon_sym_PIPE] = ACTIONS(303),
        [anon_sym_AMP] = ACTIONS(447),
        [anon_sym_CARET] = ACTIONS(449),
        [anon_sym_LT_LT] = ACTIONS(439),
        [anon_sym_GT_GT] = ACTIONS(439),
        [anon_sym_and] = ACTIONS(447),
        [anon_sym_or] = ACTIONS(303),
        [anon_sym_LBRACK] = ACTIONS(303),
        [sym_comment] = ACTIONS(77),
    },
    [145] = {
        [anon_sym_COLON] = ACTIONS(303),
        [anon_sym_LPAREN] = ACTIONS(247),
        [anon_sym_STAR] = ACTIONS(437),
        [anon_sym_PLUS] = ACTIONS(439),
        [anon_sym_DASH] = ACTIONS(439),
        [anon_sym_SLASH] = ACTIONS(441),
        [anon_sym_STAR_STAR] = ACTIONS(443),
        [anon_sym_PIPE] = ACTIONS(303),
        [anon_sym_AMP] = ACTIONS(303),
        [anon_sym_CARET] = ACTIONS(449),
        [anon_sym_LT_LT] = ACTIONS(439),
        [anon_sym_GT_GT] = ACTIONS(439),
        [anon_sym_and] = ACTIONS(303),
        [anon_sym_or] = ACTIONS(303),
        [anon_sym_LBRACK] = ACTIONS(303),
        [sym_comment] = ACTIONS(77),
    },
    [146] = {
        [anon_sym_COLON] = ACTIONS(303),
        [anon_sym_LPAREN] = ACTIONS(247),
        [anon_sym_STAR] = ACTIONS(437),
        [anon_sym_PLUS] = ACTIONS(303),
        [anon_sym_DASH] = ACTIONS(303),
        [anon_sym_SLASH] = ACTIONS(441),
        [anon_sym_STAR_STAR] = ACTIONS(443),
        [anon_sym_PIPE] = ACTIONS(303),
        [anon_sym_AMP] = ACTIONS(303),
        [anon_sym_CARET] = ACTIONS(303),
        [anon_sym_LT_LT] = ACTIONS(303),
        [anon_sym_GT_GT] = ACTIONS(303),
        [anon_sym_and] = ACTIONS(303),
        [anon_sym_or] = ACTIONS(303),
        [anon_sym_LBRACK] = ACTIONS(303),
        [sym_comment] = ACTIONS(77),
    },
    [147] = {
        [anon_sym_COLON] = ACTIONS(303),
        [anon_sym_LPAREN] = ACTIONS(247),
        [anon_sym_STAR] = ACTIONS(437),
        [anon_sym_PLUS] = ACTIONS(439),
        [anon_sym_DASH] = ACTIONS(439),
        [anon_sym_SLASH] = ACTIONS(441),
        [anon_sym_STAR_STAR] = ACTIONS(443),
        [anon_sym_PIPE] = ACTIONS(303),
        [anon_sym_AMP] = ACTIONS(303),
        [anon_sym_CARET] = ACTIONS(303),
        [anon_sym_LT_LT] = ACTIONS(439),
        [anon_sym_GT_GT] = ACTIONS(439),
        [anon_sym_and] = ACTIONS(303),
        [anon_sym_or] = ACTIONS(303),
        [anon_sym_LBRACK] = ACTIONS(303),
        [sym_comment] = ACTIONS(77),
    },
    [148] = {
        [anon_sym_COLON] = ACTIONS(303),
        [anon_sym_LPAREN] = ACTIONS(247),
        [anon_sym_STAR] = ACTIONS(305),
        [anon_sym_PLUS] = ACTIONS(303),
        [anon_sym_DASH] = ACTIONS(303),
        [anon_sym_SLASH] = ACTIONS(303),
        [anon_sym_STAR_STAR] = ACTIONS(443),
        [anon_sym_PIPE] = ACTIONS(303),
        [anon_sym_AMP] = ACTIONS(303),
        [anon_sym_CARET] = ACTIONS(303),
        [anon_sym_LT_LT] = ACTIONS(303),
        [anon_sym_GT_GT] = ACTIONS(303),
        [anon_sym_and] = ACTIONS(303),
        [anon_sym_or] = ACTIONS(303),
        [anon_sym_LBRACK] = ACTIONS(303),
        [sym_comment] = ACTIONS(77),
    },
    [149] = {
        [sym__expression] = STATE(274),
        [sym_binary_operator] = STATE(43),
        [sym_unary_operator] = STATE(43),
        [sym_subscript] = STATE(43),
        [sym_call] = STATE(43),
        [sym_list] = STATE(43),
        [sym_list_comprehension] = STATE(43),
        [sym_dictionary] = STATE(43),
        [sym_dictionary_comprehension] = STATE(43),
        [sym_set] = STATE(43),
        [sym_set_comprehension] = STATE(43),
        [anon_sym_not] = ACTIONS(453),
        [anon_sym_LBRACK] = ACTIONS(127),
        [anon_sym_LBRACE] = ACTIONS(129),
        [sym_number] = ACTIONS(131),
        [sym_identifier] = ACTIONS(133),
        [sym_comment] = ACTIONS(77),
    },
    [150] = {
        [anon_sym_COMMA] = ACTIONS(455),
        [anon_sym_LPAREN] = ACTIONS(247),
        [anon_sym_STAR] = ACTIONS(457),
        [anon_sym_PLUS] = ACTIONS(459),
        [anon_sym_DASH] = ACTIONS(459),
        [anon_sym_SLASH] = ACTIONS(461),
        [anon_sym_STAR_STAR] = ACTIONS(463),
        [anon_sym_PIPE] = ACTIONS(465),
        [anon_sym_AMP] = ACTIONS(467),
        [anon_sym_CARET] = ACTIONS(469),
        [anon_sym_LT_LT] = ACTIONS(459),
        [anon_sym_GT_GT] = ACTIONS(459),
        [anon_sym_and] = ACTIONS(467),
        [anon_sym_or] = ACTIONS(465),
        [anon_sym_LBRACK] = ACTIONS(263),
        [anon_sym_RBRACE] = ACTIONS(455),
        [sym_comment] = ACTIONS(77),
    },
    [151] = {
        [sym__expression] = STATE(161),
        [sym_binary_operator] = STATE(43),
        [sym_unary_operator] = STATE(43),
        [sym_subscript] = STATE(43),
        [sym_call] = STATE(43),
        [sym_list] = STATE(43),
        [sym_list_comprehension] = STATE(43),
        [sym_dictionary] = STATE(43),
        [sym_dictionary_comprehension] = STATE(43),
        [sym_set] = STATE(43),
        [sym_set_comprehension] = STATE(43),
        [anon_sym_not] = ACTIONS(453),
        [anon_sym_LBRACK] = ACTIONS(127),
        [anon_sym_LBRACE] = ACTIONS(129),
        [sym_number] = ACTIONS(131),
        [sym_identifier] = ACTIONS(133),
        [sym_comment] = ACTIONS(77),
    },
    [152] = {
        [sym__expression] = STATE(159),
        [sym_binary_operator] = STATE(43),
        [sym_unary_operator] = STATE(43),
        [sym_subscript] = STATE(43),
        [sym_call] = STATE(43),
        [sym_list] = STATE(43),
        [sym_list_comprehension] = STATE(43),
        [sym_dictionary] = STATE(43),
        [sym_dictionary_comprehension] = STATE(43),
        [sym_set] = STATE(43),
        [sym_set_comprehension] = STATE(43),
        [anon_sym_not] = ACTIONS(453),
        [anon_sym_LBRACK] = ACTIONS(127),
        [anon_sym_LBRACE] = ACTIONS(129),
        [sym_number] = ACTIONS(131),
        [sym_identifier] = ACTIONS(133),
        [sym_comment] = ACTIONS(77),
    },
    [153] = {
        [sym__expression] = STATE(75),
        [sym_binary_operator] = STATE(43),
        [sym_unary_operator] = STATE(43),
        [sym_subscript] = STATE(43),
        [sym_call] = STATE(43),
        [sym_list] = STATE(43),
        [sym_list_comprehension] = STATE(43),
        [sym_dictionary] = STATE(43),
        [sym_dictionary_comprehension] = STATE(43),
        [sym_set] = STATE(43),
        [sym_set_comprehension] = STATE(43),
        [anon_sym_not] = ACTIONS(453),
        [anon_sym_LBRACK] = ACTIONS(127),
        [anon_sym_LBRACE] = ACTIONS(129),
        [sym_number] = ACTIONS(131),
        [sym_identifier] = ACTIONS(133),
        [sym_comment] = ACTIONS(77),
    },
    [154] = {
        [sym__expression] = STATE(157),
        [sym_binary_operator] = STATE(43),
        [sym_unary_operator] = STATE(43),
        [sym_subscript] = STATE(43),
        [sym_call] = STATE(43),
        [sym_list] = STATE(43),
        [sym_list_comprehension] = STATE(43),
        [sym_dictionary] = STATE(43),
        [sym_dictionary_comprehension] = STATE(43),
        [sym_set] = STATE(43),
        [sym_set_comprehension] = STATE(43),
        [anon_sym_not] = ACTIONS(453),
        [anon_sym_LBRACK] = ACTIONS(127),
        [anon_sym_LBRACE] = ACTIONS(129),
        [sym_number] = ACTIONS(131),
        [sym_identifier] = ACTIONS(133),
        [sym_comment] = ACTIONS(77),
    },
    [155] = {
        [sym__expression] = STATE(158),
        [sym_binary_operator] = STATE(43),
        [sym_unary_operator] = STATE(43),
        [sym_subscript] = STATE(43),
        [sym_call] = STATE(43),
        [sym_list] = STATE(43),
        [sym_list_comprehension] = STATE(43),
        [sym_dictionary] = STATE(43),
        [sym_dictionary_comprehension] = STATE(43),
        [sym_set] = STATE(43),
        [sym_set_comprehension] = STATE(43),
        [anon_sym_not] = ACTIONS(453),
        [anon_sym_LBRACK] = ACTIONS(127),
        [anon_sym_LBRACE] = ACTIONS(129),
        [sym_number] = ACTIONS(131),
        [sym_identifier] = ACTIONS(133),
        [sym_comment] = ACTIONS(77),
    },
    [156] = {
        [sym__expression] = STATE(160),
        [sym_binary_operator] = STATE(43),
        [sym_unary_operator] = STATE(43),
        [sym_subscript] = STATE(43),
        [sym_call] = STATE(43),
        [sym_list] = STATE(43),
        [sym_list_comprehension] = STATE(43),
        [sym_dictionary] = STATE(43),
        [sym_dictionary_comprehension] = STATE(43),
        [sym_set] = STATE(43),
        [sym_set_comprehension] = STATE(43),
        [anon_sym_not] = ACTIONS(453),
        [anon_sym_LBRACK] = ACTIONS(127),
        [anon_sym_LBRACE] = ACTIONS(129),
        [sym_number] = ACTIONS(131),
        [sym_identifier] = ACTIONS(133),
        [sym_comment] = ACTIONS(77),
    },
    [157] = {
        [anon_sym_COMMA] = ACTIONS(303),
        [anon_sym_LPAREN] = ACTIONS(247),
        [anon_sym_STAR] = ACTIONS(457),
        [anon_sym_PLUS] = ACTIONS(459),
        [anon_sym_DASH] = ACTIONS(459),
        [anon_sym_SLASH] = ACTIONS(461),
        [anon_sym_STAR_STAR] = ACTIONS(463),
        [anon_sym_PIPE] = ACTIONS(303),
        [anon_sym_AMP] = ACTIONS(467),
        [anon_sym_CARET] = ACTIONS(469),
        [anon_sym_LT_LT] = ACTIONS(459),
        [anon_sym_GT_GT] = ACTIONS(459),
        [anon_sym_and] = ACTIONS(467),
        [anon_sym_or] = ACTIONS(303),
        [anon_sym_LBRACK] = ACTIONS(303),
        [anon_sym_RBRACE] = ACTIONS(303),
        [sym_comment] = ACTIONS(77),
    },
    [158] = {
        [anon_sym_COMMA] = ACTIONS(303),
        [anon_sym_LPAREN] = ACTIONS(247),
        [anon_sym_STAR] = ACTIONS(457),
        [anon_sym_PLUS] = ACTIONS(459),
        [anon_sym_DASH] = ACTIONS(459),
        [anon_sym_SLASH] = ACTIONS(461),
        [anon_sym_STAR_STAR] = ACTIONS(463),
        [anon_sym_PIPE] = ACTIONS(303),
        [anon_sym_AMP] = ACTIONS(303),
        [anon_sym_CARET] = ACTIONS(469),
        [anon_sym_LT_LT] = ACTIONS(459),
        [anon_sym_GT_GT] = ACTIONS(459),
        [anon_sym_and] = ACTIONS(303),
        [anon_sym_or] = ACTIONS(303),
        [anon_sym_LBRACK] = ACTIONS(303),
        [anon_sym_RBRACE] = ACTIONS(303),
        [sym_comment] = ACTIONS(77),
    },
    [159] = {
        [anon_sym_COMMA] = ACTIONS(303),
        [anon_sym_LPAREN] = ACTIONS(247),
        [anon_sym_STAR] = ACTIONS(457),
        [anon_sym_PLUS] = ACTIONS(303),
        [anon_sym_DASH] = ACTIONS(303),
        [anon_sym_SLASH] = ACTIONS(461),
        [anon_sym_STAR_STAR] = ACTIONS(463),
        [anon_sym_PIPE] = ACTIONS(303),
        [anon_sym_AMP] = ACTIONS(303),
        [anon_sym_CARET] = ACTIONS(303),
        [anon_sym_LT_LT] = ACTIONS(303),
        [anon_sym_GT_GT] = ACTIONS(303),
        [anon_sym_and] = ACTIONS(303),
        [anon_sym_or] = ACTIONS(303),
        [anon_sym_LBRACK] = ACTIONS(303),
        [anon_sym_RBRACE] = ACTIONS(303),
        [sym_comment] = ACTIONS(77),
    },
    [160] = {
        [anon_sym_COMMA] = ACTIONS(303),
        [anon_sym_LPAREN] = ACTIONS(247),
        [anon_sym_STAR] = ACTIONS(457),
        [anon_sym_PLUS] = ACTIONS(459),
        [anon_sym_DASH] = ACTIONS(459),
        [anon_sym_SLASH] = ACTIONS(461),
        [anon_sym_STAR_STAR] = ACTIONS(463),
        [anon_sym_PIPE] = ACTIONS(303),
        [anon_sym_AMP] = ACTIONS(303),
        [anon_sym_CARET] = ACTIONS(303),
        [anon_sym_LT_LT] = ACTIONS(459),
        [anon_sym_GT_GT] = ACTIONS(459),
        [anon_sym_and] = ACTIONS(303),
        [anon_sym_or] = ACTIONS(303),
        [anon_sym_LBRACK] = ACTIONS(303),
        [anon_sym_RBRACE] = ACTIONS(303),
        [sym_comment] = ACTIONS(77),
    },
    [161] = {
        [anon_sym_COMMA] = ACTIONS(303),
        [anon_sym_LPAREN] = ACTIONS(247),
        [anon_sym_STAR] = ACTIONS(305),
        [anon_sym_PLUS] = ACTIONS(303),
        [anon_sym_DASH] = ACTIONS(303),
        [anon_sym_SLASH] = ACTIONS(303),
        [anon_sym_STAR_STAR] = ACTIONS(463),
        [anon_sym_PIPE] = ACTIONS(303),
        [anon_sym_AMP] = ACTIONS(303),
        [anon_sym_CARET] = ACTIONS(303),
        [anon_sym_LT_LT] = ACTIONS(303),
        [anon_sym_GT_GT] = ACTIONS(303),
        [anon_sym_and] = ACTIONS(303),
        [anon_sym_or] = ACTIONS(303),
        [anon_sym_LBRACK] = ACTIONS(303),
        [anon_sym_RBRACE] = ACTIONS(303),
        [sym_comment] = ACTIONS(77),
    },
    [162] = {
        [sym__expression] = STATE(274),
        [sym_binary_operator] = STATE(43),
        [sym_unary_operator] = STATE(43),
        [sym_subscript] = STATE(43),
        [sym_call] = STATE(43),
        [sym_list] = STATE(43),
        [sym_list_comprehension] = STATE(43),
        [sym_dictionary] = STATE(43),
        [sym_dictionary_comprehension] = STATE(43),
        [sym_set] = STATE(43),
        [sym_set_comprehension] = STATE(43),
        [anon_sym_not] = ACTIONS(135),
        [anon_sym_LBRACK] = ACTIONS(127),
        [anon_sym_LBRACE] = ACTIONS(129),
        [sym_number] = ACTIONS(131),
        [sym_identifier] = ACTIONS(133),
        [sym_comment] = ACTIONS(77),
    },
    [163] = {
        [anon_sym_in] = ACTIONS(471),
        [sym_comment] = ACTIONS(77),
    },
    [164] = {
        [aux_sym_print_statement_repeat1] = STATE(172),
        [anon_sym_COMMA] = ACTIONS(473),
        [anon_sym_in] = ACTIONS(475),
        [anon_sym_LPAREN] = ACTIONS(247),
        [anon_sym_STAR] = ACTIONS(477),
        [anon_sym_PLUS] = ACTIONS(479),
        [anon_sym_DASH] = ACTIONS(479),
        [anon_sym_SLASH] = ACTIONS(481),
        [anon_sym_STAR_STAR] = ACTIONS(483),
        [anon_sym_PIPE] = ACTIONS(485),
        [anon_sym_AMP] = ACTIONS(487),
        [anon_sym_CARET] = ACTIONS(489),
        [anon_sym_LT_LT] = ACTIONS(479),
        [anon_sym_GT_GT] = ACTIONS(479),
        [anon_sym_and] = ACTIONS(487),
        [anon_sym_or] = ACTIONS(485),
        [anon_sym_LBRACK] = ACTIONS(263),
        [sym_comment] = ACTIONS(77),
    },
    [165] = {
        [sym__expression] = STATE(180),
        [sym_binary_operator] = STATE(43),
        [sym_unary_operator] = STATE(43),
        [sym_subscript] = STATE(43),
        [sym_call] = STATE(43),
        [sym_list] = STATE(43),
        [sym_list_comprehension] = STATE(43),
        [sym_dictionary] = STATE(43),
        [sym_dictionary_comprehension] = STATE(43),
        [sym_set] = STATE(43),
        [sym_set_comprehension] = STATE(43),
        [anon_sym_not] = ACTIONS(135),
        [anon_sym_LBRACK] = ACTIONS(127),
        [anon_sym_LBRACE] = ACTIONS(129),
        [sym_number] = ACTIONS(131),
        [sym_identifier] = ACTIONS(133),
        [sym_comment] = ACTIONS(77),
    },
    [166] = {
        [sym__expression] = STATE(179),
        [sym_binary_operator] = STATE(43),
        [sym_unary_operator] = STATE(43),
        [sym_subscript] = STATE(43),
        [sym_call] = STATE(43),
        [sym_list] = STATE(43),
        [sym_list_comprehension] = STATE(43),
        [sym_dictionary] = STATE(43),
        [sym_dictionary_comprehension] = STATE(43),
        [sym_set] = STATE(43),
        [sym_set_comprehension] = STATE(43),
        [anon_sym_not] = ACTIONS(135),
        [anon_sym_LBRACK] = ACTIONS(127),
        [anon_sym_LBRACE] = ACTIONS(129),
        [sym_number] = ACTIONS(131),
        [sym_identifier] = ACTIONS(133),
        [sym_comment] = ACTIONS(77),
    },
    [167] = {
        [sym__expression] = STATE(177),
        [sym_binary_operator] = STATE(43),
        [sym_unary_operator] = STATE(43),
        [sym_subscript] = STATE(43),
        [sym_call] = STATE(43),
        [sym_list] = STATE(43),
        [sym_list_comprehension] = STATE(43),
        [sym_dictionary] = STATE(43),
        [sym_dictionary_comprehension] = STATE(43),
        [sym_set] = STATE(43),
        [sym_set_comprehension] = STATE(43),
        [anon_sym_not] = ACTIONS(135),
        [anon_sym_LBRACK] = ACTIONS(127),
        [anon_sym_LBRACE] = ACTIONS(129),
        [sym_number] = ACTIONS(131),
        [sym_identifier] = ACTIONS(133),
        [sym_comment] = ACTIONS(77),
    },
    [168] = {
        [sym__expression] = STATE(75),
        [sym_binary_operator] = STATE(43),
        [sym_unary_operator] = STATE(43),
        [sym_subscript] = STATE(43),
        [sym_call] = STATE(43),
        [sym_list] = STATE(43),
        [sym_list_comprehension] = STATE(43),
        [sym_dictionary] = STATE(43),
        [sym_dictionary_comprehension] = STATE(43),
        [sym_set] = STATE(43),
        [sym_set_comprehension] = STATE(43),
        [anon_sym_not] = ACTIONS(135),
        [anon_sym_LBRACK] = ACTIONS(127),
        [anon_sym_LBRACE] = ACTIONS(129),
        [sym_number] = ACTIONS(131),
        [sym_identifier] = ACTIONS(133),
        [sym_comment] = ACTIONS(77),
    },
    [169] = {
        [sym__expression] = STATE(175),
        [sym_binary_operator] = STATE(43),
        [sym_unary_operator] = STATE(43),
        [sym_subscript] = STATE(43),
        [sym_call] = STATE(43),
        [sym_list] = STATE(43),
        [sym_list_comprehension] = STATE(43),
        [sym_dictionary] = STATE(43),
        [sym_dictionary_comprehension] = STATE(43),
        [sym_set] = STATE(43),
        [sym_set_comprehension] = STATE(43),
        [anon_sym_not] = ACTIONS(135),
        [anon_sym_LBRACK] = ACTIONS(127),
        [anon_sym_LBRACE] = ACTIONS(129),
        [sym_number] = ACTIONS(131),
        [sym_identifier] = ACTIONS(133),
        [sym_comment] = ACTIONS(77),
    },
    [170] = {
        [sym__expression] = STATE(176),
        [sym_binary_operator] = STATE(43),
        [sym_unary_operator] = STATE(43),
        [sym_subscript] = STATE(43),
        [sym_call] = STATE(43),
        [sym_list] = STATE(43),
        [sym_list_comprehension] = STATE(43),
        [sym_dictionary] = STATE(43),
        [sym_dictionary_comprehension] = STATE(43),
        [sym_set] = STATE(43),
        [sym_set_comprehension] = STATE(43),
        [anon_sym_not] = ACTIONS(135),
        [anon_sym_LBRACK] = ACTIONS(127),
        [anon_sym_LBRACE] = ACTIONS(129),
        [sym_number] = ACTIONS(131),
        [sym_identifier] = ACTIONS(133),
        [sym_comment] = ACTIONS(77),
    },
    [171] = {
        [sym__expression] = STATE(178),
        [sym_binary_operator] = STATE(43),
        [sym_unary_operator] = STATE(43),
        [sym_subscript] = STATE(43),
        [sym_call] = STATE(43),
        [sym_list] = STATE(43),
        [sym_list_comprehension] = STATE(43),
        [sym_dictionary] = STATE(43),
        [sym_dictionary_comprehension] = STATE(43),
        [sym_set] = STATE(43),
        [sym_set_comprehension] = STATE(43),
        [anon_sym_not] = ACTIONS(135),
        [anon_sym_LBRACK] = ACTIONS(127),
        [anon_sym_LBRACE] = ACTIONS(129),
        [sym_number] = ACTIONS(131),
        [sym_identifier] = ACTIONS(133),
        [sym_comment] = ACTIONS(77),
    },
    [172] = {
        [anon_sym_COMMA] = ACTIONS(491),
        [anon_sym_in] = ACTIONS(493),
        [sym_comment] = ACTIONS(77),
    },
    [173] = {
        [sym__expression] = STATE(174),
        [sym_binary_operator] = STATE(43),
        [sym_unary_operator] = STATE(43),
        [sym_subscript] = STATE(43),
        [sym_call] = STATE(43),
        [sym_list] = STATE(43),
        [sym_list_comprehension] = STATE(43),
        [sym_dictionary] = STATE(43),
        [sym_dictionary_comprehension] = STATE(43),
        [sym_set] = STATE(43),
        [sym_set_comprehension] = STATE(43),
        [anon_sym_not] = ACTIONS(135),
        [anon_sym_LBRACK] = ACTIONS(127),
        [anon_sym_LBRACE] = ACTIONS(129),
        [sym_number] = ACTIONS(131),
        [sym_identifier] = ACTIONS(133),
        [sym_comment] = ACTIONS(77),
    },
    [174] = {
        [anon_sym_COMMA] = ACTIONS(495),
        [anon_sym_in] = ACTIONS(495),
        [anon_sym_LPAREN] = ACTIONS(247),
        [anon_sym_STAR] = ACTIONS(477),
        [anon_sym_PLUS] = ACTIONS(479),
        [anon_sym_DASH] = ACTIONS(479),
        [anon_sym_SLASH] = ACTIONS(481),
        [anon_sym_STAR_STAR] = ACTIONS(483),
        [anon_sym_PIPE] = ACTIONS(485),
        [anon_sym_AMP] = ACTIONS(487),
        [anon_sym_CARET] = ACTIONS(489),
        [anon_sym_LT_LT] = ACTIONS(479),
        [anon_sym_GT_GT] = ACTIONS(479),
        [anon_sym_and] = ACTIONS(487),
        [anon_sym_or] = ACTIONS(485),
        [anon_sym_LBRACK] = ACTIONS(263),
        [sym_comment] = ACTIONS(77),
    },
    [175] = {
        [anon_sym_COMMA] = ACTIONS(303),
        [anon_sym_in] = ACTIONS(303),
        [anon_sym_LPAREN] = ACTIONS(247),
        [anon_sym_STAR] = ACTIONS(477),
        [anon_sym_PLUS] = ACTIONS(479),
        [anon_sym_DASH] = ACTIONS(479),
        [anon_sym_SLASH] = ACTIONS(481),
        [anon_sym_STAR_STAR] = ACTIONS(483),
        [anon_sym_PIPE] = ACTIONS(303),
        [anon_sym_AMP] = ACTIONS(487),
        [anon_sym_CARET] = ACTIONS(489),
        [anon_sym_LT_LT] = ACTIONS(479),
        [anon_sym_GT_GT] = ACTIONS(479),
        [anon_sym_and] = ACTIONS(487),
        [anon_sym_or] = ACTIONS(303),
        [anon_sym_LBRACK] = ACTIONS(303),
        [sym_comment] = ACTIONS(77),
    },
    [176] = {
        [anon_sym_COMMA] = ACTIONS(303),
        [anon_sym_in] = ACTIONS(303),
        [anon_sym_LPAREN] = ACTIONS(247),
        [anon_sym_STAR] = ACTIONS(477),
        [anon_sym_PLUS] = ACTIONS(479),
        [anon_sym_DASH] = ACTIONS(479),
        [anon_sym_SLASH] = ACTIONS(481),
        [anon_sym_STAR_STAR] = ACTIONS(483),
        [anon_sym_PIPE] = ACTIONS(303),
        [anon_sym_AMP] = ACTIONS(303),
        [anon_sym_CARET] = ACTIONS(489),
        [anon_sym_LT_LT] = ACTIONS(479),
        [anon_sym_GT_GT] = ACTIONS(479),
        [anon_sym_and] = ACTIONS(303),
        [anon_sym_or] = ACTIONS(303),
        [anon_sym_LBRACK] = ACTIONS(303),
        [sym_comment] = ACTIONS(77),
    },
    [177] = {
        [anon_sym_COMMA] = ACTIONS(303),
        [anon_sym_in] = ACTIONS(303),
        [anon_sym_LPAREN] = ACTIONS(247),
        [anon_sym_STAR] = ACTIONS(477),
        [anon_sym_PLUS] = ACTIONS(303),
        [anon_sym_DASH] = ACTIONS(303),
        [anon_sym_SLASH] = ACTIONS(481),
        [anon_sym_STAR_STAR] = ACTIONS(483),
        [anon_sym_PIPE] = ACTIONS(303),
        [anon_sym_AMP] = ACTIONS(303),
        [anon_sym_CARET] = ACTIONS(303),
        [anon_sym_LT_LT] = ACTIONS(303),
        [anon_sym_GT_GT] = ACTIONS(303),
        [anon_sym_and] = ACTIONS(303),
        [anon_sym_or] = ACTIONS(303),
        [anon_sym_LBRACK] = ACTIONS(303),
        [sym_comment] = ACTIONS(77),
    },
    [178] = {
        [anon_sym_COMMA] = ACTIONS(303),
        [anon_sym_in] = ACTIONS(303),
        [anon_sym_LPAREN] = ACTIONS(247),
        [anon_sym_STAR] = ACTIONS(477),
        [anon_sym_PLUS] = ACTIONS(479),
        [anon_sym_DASH] = ACTIONS(479),
        [anon_sym_SLASH] = ACTIONS(481),
        [anon_sym_STAR_STAR] = ACTIONS(483),
        [anon_sym_PIPE] = ACTIONS(303),
        [anon_sym_AMP] = ACTIONS(303),
        [anon_sym_CARET] = ACTIONS(303),
        [anon_sym_LT_LT] = ACTIONS(479),
        [anon_sym_GT_GT] = ACTIONS(479),
        [anon_sym_and] = ACTIONS(303),
        [anon_sym_or] = ACTIONS(303),
        [anon_sym_LBRACK] = ACTIONS(303),
        [sym_comment] = ACTIONS(77),
    },
    [179] = {
        [anon_sym_COMMA] = ACTIONS(303),
        [anon_sym_in] = ACTIONS(303),
        [anon_sym_LPAREN] = ACTIONS(247),
        [anon_sym_STAR] = ACTIONS(305),
        [anon_sym_PLUS] = ACTIONS(303),
        [anon_sym_DASH] = ACTIONS(303),
        [anon_sym_SLASH] = ACTIONS(303),
        [anon_sym_STAR_STAR] = ACTIONS(483),
        [anon_sym_PIPE] = ACTIONS(303),
        [anon_sym_AMP] = ACTIONS(303),
        [anon_sym_CARET] = ACTIONS(303),
        [anon_sym_LT_LT] = ACTIONS(303),
        [anon_sym_GT_GT] = ACTIONS(303),
        [anon_sym_and] = ACTIONS(303),
        [anon_sym_or] = ACTIONS(303),
        [anon_sym_LBRACK] = ACTIONS(303),
        [sym_comment] = ACTIONS(77),
    },
    [180] = {
        [anon_sym_COMMA] = ACTIONS(497),
        [anon_sym_in] = ACTIONS(497),
        [anon_sym_LPAREN] = ACTIONS(247),
        [anon_sym_STAR] = ACTIONS(477),
        [anon_sym_PLUS] = ACTIONS(479),
        [anon_sym_DASH] = ACTIONS(479),
        [anon_sym_SLASH] = ACTIONS(481),
        [anon_sym_STAR_STAR] = ACTIONS(483),
        [anon_sym_PIPE] = ACTIONS(485),
        [anon_sym_AMP] = ACTIONS(487),
        [anon_sym_CARET] = ACTIONS(489),
        [anon_sym_LT_LT] = ACTIONS(479),
        [anon_sym_GT_GT] = ACTIONS(479),
        [anon_sym_and] = ACTIONS(487),
        [anon_sym_or] = ACTIONS(485),
        [anon_sym_LBRACK] = ACTIONS(263),
        [sym_comment] = ACTIONS(77),
    },
    [181] = {
        [sym__expression] = STATE(183),
        [sym_binary_operator] = STATE(43),
        [sym_unary_operator] = STATE(43),
        [sym_subscript] = STATE(43),
        [sym_call] = STATE(43),
        [sym_list] = STATE(43),
        [sym_list_comprehension] = STATE(43),
        [sym_dictionary] = STATE(43),
        [sym_dictionary_comprehension] = STATE(43),
        [sym_set] = STATE(43),
        [sym_set_comprehension] = STATE(43),
        [anon_sym_not] = ACTIONS(499),
        [anon_sym_LBRACK] = ACTIONS(127),
        [anon_sym_LBRACE] = ACTIONS(129),
        [sym_number] = ACTIONS(131),
        [sym_identifier] = ACTIONS(133),
        [sym_comment] = ACTIONS(77),
    },
    [182] = {
        [sym__expression] = STATE(274),
        [sym_binary_operator] = STATE(43),
        [sym_unary_operator] = STATE(43),
        [sym_subscript] = STATE(43),
        [sym_call] = STATE(43),
        [sym_list] = STATE(43),
        [sym_list_comprehension] = STATE(43),
        [sym_dictionary] = STATE(43),
        [sym_dictionary_comprehension] = STATE(43),
        [sym_set] = STATE(43),
        [sym_set_comprehension] = STATE(43),
        [anon_sym_not] = ACTIONS(499),
        [anon_sym_LBRACK] = ACTIONS(127),
        [anon_sym_LBRACE] = ACTIONS(129),
        [sym_number] = ACTIONS(131),
        [sym_identifier] = ACTIONS(133),
        [sym_comment] = ACTIONS(77),
    },
    [183] = {
        [anon_sym_LPAREN] = ACTIONS(247),
        [anon_sym_STAR] = ACTIONS(501),
        [anon_sym_PLUS] = ACTIONS(503),
        [anon_sym_DASH] = ACTIONS(503),
        [anon_sym_SLASH] = ACTIONS(505),
        [anon_sym_STAR_STAR] = ACTIONS(507),
        [anon_sym_PIPE] = ACTIONS(509),
        [anon_sym_AMP] = ACTIONS(511),
        [anon_sym_CARET] = ACTIONS(513),
        [anon_sym_LT_LT] = ACTIONS(503),
        [anon_sym_GT_GT] = ACTIONS(503),
        [anon_sym_and] = ACTIONS(511),
        [anon_sym_or] = ACTIONS(509),
        [anon_sym_LBRACK] = ACTIONS(263),
        [anon_sym_RBRACE] = ACTIONS(515),
        [sym_comment] = ACTIONS(77),
    },
    [184] = {
        [sym__expression] = STATE(195),
        [sym_binary_operator] = STATE(43),
        [sym_unary_operator] = STATE(43),
        [sym_subscript] = STATE(43),
        [sym_call] = STATE(43),
        [sym_list] = STATE(43),
        [sym_list_comprehension] = STATE(43),
        [sym_dictionary] = STATE(43),
        [sym_dictionary_comprehension] = STATE(43),
        [sym_set] = STATE(43),
        [sym_set_comprehension] = STATE(43),
        [anon_sym_not] = ACTIONS(499),
        [anon_sym_LBRACK] = ACTIONS(127),
        [anon_sym_LBRACE] = ACTIONS(129),
        [sym_number] = ACTIONS(131),
        [sym_identifier] = ACTIONS(133),
        [sym_comment] = ACTIONS(77),
    },
    [185] = {
        [sym__expression] = STATE(193),
        [sym_binary_operator] = STATE(43),
        [sym_unary_operator] = STATE(43),
        [sym_subscript] = STATE(43),
        [sym_call] = STATE(43),
        [sym_list] = STATE(43),
        [sym_list_comprehension] = STATE(43),
        [sym_dictionary] = STATE(43),
        [sym_dictionary_comprehension] = STATE(43),
        [sym_set] = STATE(43),
        [sym_set_comprehension] = STATE(43),
        [anon_sym_not] = ACTIONS(499),
        [anon_sym_LBRACK] = ACTIONS(127),
        [anon_sym_LBRACE] = ACTIONS(129),
        [sym_number] = ACTIONS(131),
        [sym_identifier] = ACTIONS(133),
        [sym_comment] = ACTIONS(77),
    },
    [186] = {
        [sym__expression] = STATE(75),
        [sym_binary_operator] = STATE(43),
        [sym_unary_operator] = STATE(43),
        [sym_subscript] = STATE(43),
        [sym_call] = STATE(43),
        [sym_list] = STATE(43),
        [sym_list_comprehension] = STATE(43),
        [sym_dictionary] = STATE(43),
        [sym_dictionary_comprehension] = STATE(43),
        [sym_set] = STATE(43),
        [sym_set_comprehension] = STATE(43),
        [anon_sym_not] = ACTIONS(499),
        [anon_sym_LBRACK] = ACTIONS(127),
        [anon_sym_LBRACE] = ACTIONS(129),
        [sym_number] = ACTIONS(131),
        [sym_identifier] = ACTIONS(133),
        [sym_comment] = ACTIONS(77),
    },
    [187] = {
        [sym__expression] = STATE(191),
        [sym_binary_operator] = STATE(43),
        [sym_unary_operator] = STATE(43),
        [sym_subscript] = STATE(43),
        [sym_call] = STATE(43),
        [sym_list] = STATE(43),
        [sym_list_comprehension] = STATE(43),
        [sym_dictionary] = STATE(43),
        [sym_dictionary_comprehension] = STATE(43),
        [sym_set] = STATE(43),
        [sym_set_comprehension] = STATE(43),
        [anon_sym_not] = ACTIONS(499),
        [anon_sym_LBRACK] = ACTIONS(127),
        [anon_sym_LBRACE] = ACTIONS(129),
        [sym_number] = ACTIONS(131),
        [sym_identifier] = ACTIONS(133),
        [sym_comment] = ACTIONS(77),
    },
    [188] = {
        [sym__expression] = STATE(192),
        [sym_binary_operator] = STATE(43),
        [sym_unary_operator] = STATE(43),
        [sym_subscript] = STATE(43),
        [sym_call] = STATE(43),
        [sym_list] = STATE(43),
        [sym_list_comprehension] = STATE(43),
        [sym_dictionary] = STATE(43),
        [sym_dictionary_comprehension] = STATE(43),
        [sym_set] = STATE(43),
        [sym_set_comprehension] = STATE(43),
        [anon_sym_not] = ACTIONS(499),
        [anon_sym_LBRACK] = ACTIONS(127),
        [anon_sym_LBRACE] = ACTIONS(129),
        [sym_number] = ACTIONS(131),
        [sym_identifier] = ACTIONS(133),
        [sym_comment] = ACTIONS(77),
    },
    [189] = {
        [sym__expression] = STATE(194),
        [sym_binary_operator] = STATE(43),
        [sym_unary_operator] = STATE(43),
        [sym_subscript] = STATE(43),
        [sym_call] = STATE(43),
        [sym_list] = STATE(43),
        [sym_list_comprehension] = STATE(43),
        [sym_dictionary] = STATE(43),
        [sym_dictionary_comprehension] = STATE(43),
        [sym_set] = STATE(43),
        [sym_set_comprehension] = STATE(43),
        [anon_sym_not] = ACTIONS(499),
        [anon_sym_LBRACK] = ACTIONS(127),
        [anon_sym_LBRACE] = ACTIONS(129),
        [sym_number] = ACTIONS(131),
        [sym_identifier] = ACTIONS(133),
        [sym_comment] = ACTIONS(77),
    },
    [190] = {
        [anon_sym_COMMA] = ACTIONS(517),
        [anon_sym_COLON] = ACTIONS(517),
        [anon_sym_for] = ACTIONS(517),
        [anon_sym_in] = ACTIONS(517),
        [anon_sym_as] = ACTIONS(517),
        [anon_sym_LPAREN] = ACTIONS(517),
        [anon_sym_RPAREN] = ACTIONS(517),
        [anon_sym_STAR] = ACTIONS(519),
        [anon_sym_PLUS] = ACTIONS(517),
        [anon_sym_DASH] = ACTIONS(517),
        [anon_sym_SLASH] = ACTIONS(517),
        [anon_sym_STAR_STAR] = ACTIONS(517),
        [anon_sym_PIPE] = ACTIONS(517),
        [anon_sym_AMP] = ACTIONS(517),
        [anon_sym_CARET] = ACTIONS(517),
        [anon_sym_LT_LT] = ACTIONS(517),
        [anon_sym_GT_GT] = ACTIONS(517),
        [anon_sym_and] = ACTIONS(517),
        [anon_sym_or] = ACTIONS(517),
        [anon_sym_LBRACK] = ACTIONS(517),
        [anon_sym_RBRACK] = ACTIONS(517),
        [anon_sym_RBRACE] = ACTIONS(517),
        [sym_comment] = ACTIONS(77),
    },
    [191] = {
        [anon_sym_LPAREN] = ACTIONS(247),
        [anon_sym_STAR] = ACTIONS(501),
        [anon_sym_PLUS] = ACTIONS(503),
        [anon_sym_DASH] = ACTIONS(503),
        [anon_sym_SLASH] = ACTIONS(505),
        [anon_sym_STAR_STAR] = ACTIONS(507),
        [anon_sym_PIPE] = ACTIONS(303),
        [anon_sym_AMP] = ACTIONS(511),
        [anon_sym_CARET] = ACTIONS(513),
        [anon_sym_LT_LT] = ACTIONS(503),
        [anon_sym_GT_GT] = ACTIONS(503),
        [anon_sym_and] = ACTIONS(511),
        [anon_sym_or] = ACTIONS(303),
        [anon_sym_LBRACK] = ACTIONS(303),
        [anon_sym_RBRACE] = ACTIONS(303),
        [sym_comment] = ACTIONS(77),
    },
    [192] = {
        [anon_sym_LPAREN] = ACTIONS(247),
        [anon_sym_STAR] = ACTIONS(501),
        [anon_sym_PLUS] = ACTIONS(503),
        [anon_sym_DASH] = ACTIONS(503),
        [anon_sym_SLASH] = ACTIONS(505),
        [anon_sym_STAR_STAR] = ACTIONS(507),
        [anon_sym_PIPE] = ACTIONS(303),
        [anon_sym_AMP] = ACTIONS(303),
        [anon_sym_CARET] = ACTIONS(513),
        [anon_sym_LT_LT] = ACTIONS(503),
        [anon_sym_GT_GT] = ACTIONS(503),
        [anon_sym_and] = ACTIONS(303),
        [anon_sym_or] = ACTIONS(303),
        [anon_sym_LBRACK] = ACTIONS(303),
        [anon_sym_RBRACE] = ACTIONS(303),
        [sym_comment] = ACTIONS(77),
    },
    [193] = {
        [anon_sym_LPAREN] = ACTIONS(247),
        [anon_sym_STAR] = ACTIONS(501),
        [anon_sym_PLUS] = ACTIONS(303),
        [anon_sym_DASH] = ACTIONS(303),
        [anon_sym_SLASH] = ACTIONS(505),
        [anon_sym_STAR_STAR] = ACTIONS(507),
        [anon_sym_PIPE] = ACTIONS(303),
        [anon_sym_AMP] = ACTIONS(303),
        [anon_sym_CARET] = ACTIONS(303),
        [anon_sym_LT_LT] = ACTIONS(303),
        [anon_sym_GT_GT] = ACTIONS(303),
        [anon_sym_and] = ACTIONS(303),
        [anon_sym_or] = ACTIONS(303),
        [anon_sym_LBRACK] = ACTIONS(303),
        [anon_sym_RBRACE] = ACTIONS(303),
        [sym_comment] = ACTIONS(77),
    },
    [194] = {
        [anon_sym_LPAREN] = ACTIONS(247),
        [anon_sym_STAR] = ACTIONS(501),
        [anon_sym_PLUS] = ACTIONS(503),
        [anon_sym_DASH] = ACTIONS(503),
        [anon_sym_SLASH] = ACTIONS(505),
        [anon_sym_STAR_STAR] = ACTIONS(507),
        [anon_sym_PIPE] = ACTIONS(303),
        [anon_sym_AMP] = ACTIONS(303),
        [anon_sym_CARET] = ACTIONS(303),
        [anon_sym_LT_LT] = ACTIONS(503),
        [anon_sym_GT_GT] = ACTIONS(503),
        [anon_sym_and] = ACTIONS(303),
        [anon_sym_or] = ACTIONS(303),
        [anon_sym_LBRACK] = ACTIONS(303),
        [anon_sym_RBRACE] = ACTIONS(303),
        [sym_comment] = ACTIONS(77),
    },
    [195] = {
        [anon_sym_LPAREN] = ACTIONS(247),
        [anon_sym_STAR] = ACTIONS(305),
        [anon_sym_PLUS] = ACTIONS(303),
        [anon_sym_DASH] = ACTIONS(303),
        [anon_sym_SLASH] = ACTIONS(303),
        [anon_sym_STAR_STAR] = ACTIONS(507),
        [anon_sym_PIPE] = ACTIONS(303),
        [anon_sym_AMP] = ACTIONS(303),
        [anon_sym_CARET] = ACTIONS(303),
        [anon_sym_LT_LT] = ACTIONS(303),
        [anon_sym_GT_GT] = ACTIONS(303),
        [anon_sym_and] = ACTIONS(303),
        [anon_sym_or] = ACTIONS(303),
        [anon_sym_LBRACK] = ACTIONS(303),
        [anon_sym_RBRACE] = ACTIONS(303),
        [sym_comment] = ACTIONS(77),
    },
    [196] = {
        [anon_sym_COMMA] = ACTIONS(521),
        [anon_sym_RBRACE] = ACTIONS(521),
        [sym_comment] = ACTIONS(77),
    },
    [197] = {
        [sym__expression] = STATE(234),
        [sym_binary_operator] = STATE(43),
        [sym_unary_operator] = STATE(43),
        [sym_subscript] = STATE(43),
        [sym_call] = STATE(43),
        [sym_list] = STATE(43),
        [sym_list_comprehension] = STATE(43),
        [sym_dictionary] = STATE(43),
        [sym_dictionary_comprehension] = STATE(43),
        [sym_set] = STATE(43),
        [sym_set_comprehension] = STATE(43),
        [anon_sym_not] = ACTIONS(453),
        [anon_sym_LBRACK] = ACTIONS(127),
        [anon_sym_LBRACE] = ACTIONS(129),
        [anon_sym_RBRACE] = ACTIONS(523),
        [sym_number] = ACTIONS(131),
        [sym_identifier] = ACTIONS(133),
        [sym_comment] = ACTIONS(77),
    },
    [198] = {
        [sym__expression] = STATE(222),
        [sym_binary_operator] = STATE(43),
        [sym_unary_operator] = STATE(43),
        [sym_subscript] = STATE(43),
        [sym_call] = STATE(43),
        [sym_list] = STATE(43),
        [sym_list_comprehension] = STATE(43),
        [sym_dictionary] = STATE(43),
        [sym_dictionary_comprehension] = STATE(43),
        [sym_set] = STATE(43),
        [sym_set_comprehension] = STATE(43),
        [anon_sym_not] = ACTIONS(525),
        [anon_sym_LBRACK] = ACTIONS(127),
        [anon_sym_LBRACE] = ACTIONS(129),
        [sym_number] = ACTIONS(131),
        [sym_identifier] = ACTIONS(133),
        [sym_comment] = ACTIONS(77),
    },
    [199] = {
        [sym_expression_list] = STATE(217),
        [sym__expression] = STATE(164),
        [sym_binary_operator] = STATE(43),
        [sym_unary_operator] = STATE(43),
        [sym_subscript] = STATE(43),
        [sym_call] = STATE(43),
        [sym_list] = STATE(43),
        [sym_list_comprehension] = STATE(43),
        [sym_dictionary] = STATE(43),
        [sym_dictionary_comprehension] = STATE(43),
        [sym_set] = STATE(43),
        [sym_set_comprehension] = STATE(43),
        [anon_sym_not] = ACTIONS(135),
        [anon_sym_LBRACK] = ACTIONS(127),
        [anon_sym_LBRACE] = ACTIONS(129),
        [sym_number] = ACTIONS(131),
        [sym_identifier] = ACTIONS(133),
        [sym_comment] = ACTIONS(77),
    },
    [200] = {
        [sym__expression] = STATE(216),
        [sym_binary_operator] = STATE(43),
        [sym_unary_operator] = STATE(43),
        [sym_subscript] = STATE(43),
        [sym_call] = STATE(43),
        [sym_list] = STATE(43),
        [sym_list_comprehension] = STATE(43),
        [sym_dictionary] = STATE(43),
        [sym_dictionary_comprehension] = STATE(43),
        [sym_set] = STATE(43),
        [sym_set_comprehension] = STATE(43),
        [anon_sym_not] = ACTIONS(151),
        [anon_sym_LBRACK] = ACTIONS(127),
        [anon_sym_LBRACE] = ACTIONS(129),
        [sym_number] = ACTIONS(131),
        [sym_identifier] = ACTIONS(133),
        [sym_comment] = ACTIONS(77),
    },
    [201] = {
        [sym__expression] = STATE(214),
        [sym_binary_operator] = STATE(43),
        [sym_unary_operator] = STATE(43),
        [sym_subscript] = STATE(43),
        [sym_call] = STATE(43),
        [sym_list] = STATE(43),
        [sym_list_comprehension] = STATE(43),
        [sym_dictionary] = STATE(43),
        [sym_dictionary_comprehension] = STATE(43),
        [sym_set] = STATE(43),
        [sym_set_comprehension] = STATE(43),
        [anon_sym_not] = ACTIONS(151),
        [anon_sym_LBRACK] = ACTIONS(127),
        [anon_sym_LBRACE] = ACTIONS(129),
        [sym_number] = ACTIONS(131),
        [sym_identifier] = ACTIONS(133),
        [sym_comment] = ACTIONS(77),
    },
    [202] = {
        [sym__expression] = STATE(75),
        [sym_binary_operator] = STATE(43),
        [sym_unary_operator] = STATE(43),
        [sym_subscript] = STATE(43),
        [sym_call] = STATE(43),
        [sym_list] = STATE(43),
        [sym_list_comprehension] = STATE(43),
        [sym_dictionary] = STATE(43),
        [sym_dictionary_comprehension] = STATE(43),
        [sym_set] = STATE(43),
        [sym_set_comprehension] = STATE(43),
        [anon_sym_not] = ACTIONS(151),
        [anon_sym_LBRACK] = ACTIONS(127),
        [anon_sym_LBRACE] = ACTIONS(129),
        [sym_number] = ACTIONS(131),
        [sym_identifier] = ACTIONS(133),
        [sym_comment] = ACTIONS(77),
    },
    [203] = {
        [sym__expression] = STATE(212),
        [sym_binary_operator] = STATE(43),
        [sym_unary_operator] = STATE(43),
        [sym_subscript] = STATE(43),
        [sym_call] = STATE(43),
        [sym_list] = STATE(43),
        [sym_list_comprehension] = STATE(43),
        [sym_dictionary] = STATE(43),
        [sym_dictionary_comprehension] = STATE(43),
        [sym_set] = STATE(43),
        [sym_set_comprehension] = STATE(43),
        [anon_sym_not] = ACTIONS(151),
        [anon_sym_LBRACK] = ACTIONS(127),
        [anon_sym_LBRACE] = ACTIONS(129),
        [sym_number] = ACTIONS(131),
        [sym_identifier] = ACTIONS(133),
        [sym_comment] = ACTIONS(77),
    },
    [204] = {
        [sym__expression] = STATE(213),
        [sym_binary_operator] = STATE(43),
        [sym_unary_operator] = STATE(43),
        [sym_subscript] = STATE(43),
        [sym_call] = STATE(43),
        [sym_list] = STATE(43),
        [sym_list_comprehension] = STATE(43),
        [sym_dictionary] = STATE(43),
        [sym_dictionary_comprehension] = STATE(43),
        [sym_set] = STATE(43),
        [sym_set_comprehension] = STATE(43),
        [anon_sym_not] = ACTIONS(151),
        [anon_sym_LBRACK] = ACTIONS(127),
        [anon_sym_LBRACE] = ACTIONS(129),
        [sym_number] = ACTIONS(131),
        [sym_identifier] = ACTIONS(133),
        [sym_comment] = ACTIONS(77),
    },
    [205] = {
        [sym__expression] = STATE(215),
        [sym_binary_operator] = STATE(43),
        [sym_unary_operator] = STATE(43),
        [sym_subscript] = STATE(43),
        [sym_call] = STATE(43),
        [sym_list] = STATE(43),
        [sym_list_comprehension] = STATE(43),
        [sym_dictionary] = STATE(43),
        [sym_dictionary_comprehension] = STATE(43),
        [sym_set] = STATE(43),
        [sym_set_comprehension] = STATE(43),
        [anon_sym_not] = ACTIONS(151),
        [anon_sym_LBRACK] = ACTIONS(127),
        [anon_sym_LBRACE] = ACTIONS(129),
        [sym_number] = ACTIONS(131),
        [sym_identifier] = ACTIONS(133),
        [sym_comment] = ACTIONS(77),
    },
    [206] = {
        [anon_sym_COMMA] = ACTIONS(527),
        [anon_sym_COLON] = ACTIONS(527),
        [anon_sym_for] = ACTIONS(527),
        [anon_sym_in] = ACTIONS(527),
        [anon_sym_as] = ACTIONS(527),
        [anon_sym_LPAREN] = ACTIONS(527),
        [anon_sym_RPAREN] = ACTIONS(527),
        [anon_sym_STAR] = ACTIONS(529),
        [anon_sym_PLUS] = ACTIONS(527),
        [anon_sym_DASH] = ACTIONS(527),
        [anon_sym_SLASH] = ACTIONS(527),
        [anon_sym_STAR_STAR] = ACTIONS(527),
        [anon_sym_PIPE] = ACTIONS(527),
        [anon_sym_AMP] = ACTIONS(527),
        [anon_sym_CARET] = ACTIONS(527),
        [anon_sym_LT_LT] = ACTIONS(527),
        [anon_sym_GT_GT] = ACTIONS(527),
        [anon_sym_and] = ACTIONS(527),
        [anon_sym_or] = ACTIONS(527),
        [anon_sym_LBRACK] = ACTIONS(527),
        [anon_sym_RBRACK] = ACTIONS(527),
        [anon_sym_RBRACE] = ACTIONS(527),
        [sym_comment] = ACTIONS(77),
    },
    [207] = {
        [anon_sym_COMMA] = ACTIONS(531),
        [anon_sym_RBRACE] = ACTIONS(523),
        [sym_comment] = ACTIONS(77),
    },
    [208] = {
        [sym__expression] = STATE(211),
        [sym_binary_operator] = STATE(43),
        [sym_unary_operator] = STATE(43),
        [sym_subscript] = STATE(43),
        [sym_call] = STATE(43),
        [sym_list] = STATE(43),
        [sym_list_comprehension] = STATE(43),
        [sym_dictionary] = STATE(43),
        [sym_dictionary_comprehension] = STATE(43),
        [sym_set] = STATE(43),
        [sym_set_comprehension] = STATE(43),
        [anon_sym_not] = ACTIONS(453),
        [anon_sym_LBRACK] = ACTIONS(127),
        [anon_sym_LBRACE] = ACTIONS(129),
        [anon_sym_RBRACE] = ACTIONS(533),
        [sym_number] = ACTIONS(131),
        [sym_identifier] = ACTIONS(133),
        [sym_comment] = ACTIONS(77),
    },
    [209] = {
        [anon_sym_COMMA] = ACTIONS(535),
        [anon_sym_COLON] = ACTIONS(535),
        [anon_sym_for] = ACTIONS(535),
        [anon_sym_in] = ACTIONS(535),
        [anon_sym_as] = ACTIONS(535),
        [anon_sym_LPAREN] = ACTIONS(535),
        [anon_sym_RPAREN] = ACTIONS(535),
        [anon_sym_STAR] = ACTIONS(537),
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
        [sym_comment] = ACTIONS(77),
    },
    [210] = {
        [anon_sym_COMMA] = ACTIONS(539),
        [anon_sym_COLON] = ACTIONS(539),
        [anon_sym_for] = ACTIONS(539),
        [anon_sym_in] = ACTIONS(539),
        [anon_sym_as] = ACTIONS(539),
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
        [sym_comment] = ACTIONS(77),
    },
    [211] = {
        [anon_sym_COMMA] = ACTIONS(495),
        [anon_sym_LPAREN] = ACTIONS(247),
        [anon_sym_STAR] = ACTIONS(457),
        [anon_sym_PLUS] = ACTIONS(459),
        [anon_sym_DASH] = ACTIONS(459),
        [anon_sym_SLASH] = ACTIONS(461),
        [anon_sym_STAR_STAR] = ACTIONS(463),
        [anon_sym_PIPE] = ACTIONS(465),
        [anon_sym_AMP] = ACTIONS(467),
        [anon_sym_CARET] = ACTIONS(469),
        [anon_sym_LT_LT] = ACTIONS(459),
        [anon_sym_GT_GT] = ACTIONS(459),
        [anon_sym_and] = ACTIONS(467),
        [anon_sym_or] = ACTIONS(465),
        [anon_sym_LBRACK] = ACTIONS(263),
        [anon_sym_RBRACE] = ACTIONS(495),
        [sym_comment] = ACTIONS(77),
    },
    [212] = {
        [anon_sym_COMMA] = ACTIONS(303),
        [anon_sym_COLON] = ACTIONS(303),
        [anon_sym_for] = ACTIONS(303),
        [anon_sym_LPAREN] = ACTIONS(247),
        [anon_sym_STAR] = ACTIONS(395),
        [anon_sym_PLUS] = ACTIONS(397),
        [anon_sym_DASH] = ACTIONS(397),
        [anon_sym_SLASH] = ACTIONS(399),
        [anon_sym_STAR_STAR] = ACTIONS(401),
        [anon_sym_PIPE] = ACTIONS(303),
        [anon_sym_AMP] = ACTIONS(405),
        [anon_sym_CARET] = ACTIONS(407),
        [anon_sym_LT_LT] = ACTIONS(397),
        [anon_sym_GT_GT] = ACTIONS(397),
        [anon_sym_and] = ACTIONS(405),
        [anon_sym_or] = ACTIONS(303),
        [anon_sym_LBRACK] = ACTIONS(303),
        [anon_sym_RBRACE] = ACTIONS(303),
        [sym_comment] = ACTIONS(77),
    },
    [213] = {
        [anon_sym_COMMA] = ACTIONS(303),
        [anon_sym_COLON] = ACTIONS(303),
        [anon_sym_for] = ACTIONS(303),
        [anon_sym_LPAREN] = ACTIONS(247),
        [anon_sym_STAR] = ACTIONS(395),
        [anon_sym_PLUS] = ACTIONS(397),
        [anon_sym_DASH] = ACTIONS(397),
        [anon_sym_SLASH] = ACTIONS(399),
        [anon_sym_STAR_STAR] = ACTIONS(401),
        [anon_sym_PIPE] = ACTIONS(303),
        [anon_sym_AMP] = ACTIONS(303),
        [anon_sym_CARET] = ACTIONS(407),
        [anon_sym_LT_LT] = ACTIONS(397),
        [anon_sym_GT_GT] = ACTIONS(397),
        [anon_sym_and] = ACTIONS(303),
        [anon_sym_or] = ACTIONS(303),
        [anon_sym_LBRACK] = ACTIONS(303),
        [anon_sym_RBRACE] = ACTIONS(303),
        [sym_comment] = ACTIONS(77),
    },
    [214] = {
        [anon_sym_COMMA] = ACTIONS(303),
        [anon_sym_COLON] = ACTIONS(303),
        [anon_sym_for] = ACTIONS(303),
        [anon_sym_LPAREN] = ACTIONS(247),
        [anon_sym_STAR] = ACTIONS(395),
        [anon_sym_PLUS] = ACTIONS(303),
        [anon_sym_DASH] = ACTIONS(303),
        [anon_sym_SLASH] = ACTIONS(399),
        [anon_sym_STAR_STAR] = ACTIONS(401),
        [anon_sym_PIPE] = ACTIONS(303),
        [anon_sym_AMP] = ACTIONS(303),
        [anon_sym_CARET] = ACTIONS(303),
        [anon_sym_LT_LT] = ACTIONS(303),
        [anon_sym_GT_GT] = ACTIONS(303),
        [anon_sym_and] = ACTIONS(303),
        [anon_sym_or] = ACTIONS(303),
        [anon_sym_LBRACK] = ACTIONS(303),
        [anon_sym_RBRACE] = ACTIONS(303),
        [sym_comment] = ACTIONS(77),
    },
    [215] = {
        [anon_sym_COMMA] = ACTIONS(303),
        [anon_sym_COLON] = ACTIONS(303),
        [anon_sym_for] = ACTIONS(303),
        [anon_sym_LPAREN] = ACTIONS(247),
        [anon_sym_STAR] = ACTIONS(395),
        [anon_sym_PLUS] = ACTIONS(397),
        [anon_sym_DASH] = ACTIONS(397),
        [anon_sym_SLASH] = ACTIONS(399),
        [anon_sym_STAR_STAR] = ACTIONS(401),
        [anon_sym_PIPE] = ACTIONS(303),
        [anon_sym_AMP] = ACTIONS(303),
        [anon_sym_CARET] = ACTIONS(303),
        [anon_sym_LT_LT] = ACTIONS(397),
        [anon_sym_GT_GT] = ACTIONS(397),
        [anon_sym_and] = ACTIONS(303),
        [anon_sym_or] = ACTIONS(303),
        [anon_sym_LBRACK] = ACTIONS(303),
        [anon_sym_RBRACE] = ACTIONS(303),
        [sym_comment] = ACTIONS(77),
    },
    [216] = {
        [anon_sym_COMMA] = ACTIONS(303),
        [anon_sym_COLON] = ACTIONS(303),
        [anon_sym_for] = ACTIONS(303),
        [anon_sym_LPAREN] = ACTIONS(247),
        [anon_sym_STAR] = ACTIONS(305),
        [anon_sym_PLUS] = ACTIONS(303),
        [anon_sym_DASH] = ACTIONS(303),
        [anon_sym_SLASH] = ACTIONS(303),
        [anon_sym_STAR_STAR] = ACTIONS(401),
        [anon_sym_PIPE] = ACTIONS(303),
        [anon_sym_AMP] = ACTIONS(303),
        [anon_sym_CARET] = ACTIONS(303),
        [anon_sym_LT_LT] = ACTIONS(303),
        [anon_sym_GT_GT] = ACTIONS(303),
        [anon_sym_and] = ACTIONS(303),
        [anon_sym_or] = ACTIONS(303),
        [anon_sym_LBRACK] = ACTIONS(303),
        [anon_sym_RBRACE] = ACTIONS(303),
        [sym_comment] = ACTIONS(77),
    },
    [217] = {
        [anon_sym_in] = ACTIONS(543),
        [sym_comment] = ACTIONS(77),
    },
    [218] = {
        [sym__expression] = STATE(219),
        [sym_binary_operator] = STATE(43),
        [sym_unary_operator] = STATE(43),
        [sym_subscript] = STATE(43),
        [sym_call] = STATE(43),
        [sym_list] = STATE(43),
        [sym_list_comprehension] = STATE(43),
        [sym_dictionary] = STATE(43),
        [sym_dictionary_comprehension] = STATE(43),
        [sym_set] = STATE(43),
        [sym_set_comprehension] = STATE(43),
        [anon_sym_not] = ACTIONS(499),
        [anon_sym_LBRACK] = ACTIONS(127),
        [anon_sym_LBRACE] = ACTIONS(129),
        [sym_number] = ACTIONS(131),
        [sym_identifier] = ACTIONS(133),
        [sym_comment] = ACTIONS(77),
    },
    [219] = {
        [anon_sym_LPAREN] = ACTIONS(247),
        [anon_sym_STAR] = ACTIONS(501),
        [anon_sym_PLUS] = ACTIONS(503),
        [anon_sym_DASH] = ACTIONS(503),
        [anon_sym_SLASH] = ACTIONS(505),
        [anon_sym_STAR_STAR] = ACTIONS(507),
        [anon_sym_PIPE] = ACTIONS(509),
        [anon_sym_AMP] = ACTIONS(511),
        [anon_sym_CARET] = ACTIONS(513),
        [anon_sym_LT_LT] = ACTIONS(503),
        [anon_sym_GT_GT] = ACTIONS(503),
        [anon_sym_and] = ACTIONS(511),
        [anon_sym_or] = ACTIONS(509),
        [anon_sym_LBRACK] = ACTIONS(263),
        [anon_sym_RBRACE] = ACTIONS(545),
        [sym_comment] = ACTIONS(77),
    },
    [220] = {
        [anon_sym_COMMA] = ACTIONS(547),
        [anon_sym_COLON] = ACTIONS(547),
        [anon_sym_for] = ACTIONS(547),
        [anon_sym_in] = ACTIONS(547),
        [anon_sym_as] = ACTIONS(547),
        [anon_sym_LPAREN] = ACTIONS(547),
        [anon_sym_RPAREN] = ACTIONS(547),
        [anon_sym_STAR] = ACTIONS(549),
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
        [sym_comment] = ACTIONS(77),
    },
    [221] = {
        [sym__expression] = STATE(274),
        [sym_binary_operator] = STATE(43),
        [sym_unary_operator] = STATE(43),
        [sym_subscript] = STATE(43),
        [sym_call] = STATE(43),
        [sym_list] = STATE(43),
        [sym_list_comprehension] = STATE(43),
        [sym_dictionary] = STATE(43),
        [sym_dictionary_comprehension] = STATE(43),
        [sym_set] = STATE(43),
        [sym_set_comprehension] = STATE(43),
        [anon_sym_not] = ACTIONS(525),
        [anon_sym_LBRACK] = ACTIONS(127),
        [anon_sym_LBRACE] = ACTIONS(129),
        [sym_number] = ACTIONS(131),
        [sym_identifier] = ACTIONS(133),
        [sym_comment] = ACTIONS(77),
    },
    [222] = {
        [anon_sym_COMMA] = ACTIONS(455),
        [anon_sym_for] = ACTIONS(455),
        [anon_sym_LPAREN] = ACTIONS(247),
        [anon_sym_STAR] = ACTIONS(551),
        [anon_sym_PLUS] = ACTIONS(553),
        [anon_sym_DASH] = ACTIONS(553),
        [anon_sym_SLASH] = ACTIONS(555),
        [anon_sym_STAR_STAR] = ACTIONS(557),
        [anon_sym_PIPE] = ACTIONS(559),
        [anon_sym_AMP] = ACTIONS(561),
        [anon_sym_CARET] = ACTIONS(563),
        [anon_sym_LT_LT] = ACTIONS(553),
        [anon_sym_GT_GT] = ACTIONS(553),
        [anon_sym_and] = ACTIONS(561),
        [anon_sym_or] = ACTIONS(559),
        [anon_sym_LBRACK] = ACTIONS(263),
        [anon_sym_RBRACE] = ACTIONS(455),
        [sym_comment] = ACTIONS(77),
    },
    [223] = {
        [sym__expression] = STATE(233),
        [sym_binary_operator] = STATE(43),
        [sym_unary_operator] = STATE(43),
        [sym_subscript] = STATE(43),
        [sym_call] = STATE(43),
        [sym_list] = STATE(43),
        [sym_list_comprehension] = STATE(43),
        [sym_dictionary] = STATE(43),
        [sym_dictionary_comprehension] = STATE(43),
        [sym_set] = STATE(43),
        [sym_set_comprehension] = STATE(43),
        [anon_sym_not] = ACTIONS(525),
        [anon_sym_LBRACK] = ACTIONS(127),
        [anon_sym_LBRACE] = ACTIONS(129),
        [sym_number] = ACTIONS(131),
        [sym_identifier] = ACTIONS(133),
        [sym_comment] = ACTIONS(77),
    },
    [224] = {
        [sym__expression] = STATE(231),
        [sym_binary_operator] = STATE(43),
        [sym_unary_operator] = STATE(43),
        [sym_subscript] = STATE(43),
        [sym_call] = STATE(43),
        [sym_list] = STATE(43),
        [sym_list_comprehension] = STATE(43),
        [sym_dictionary] = STATE(43),
        [sym_dictionary_comprehension] = STATE(43),
        [sym_set] = STATE(43),
        [sym_set_comprehension] = STATE(43),
        [anon_sym_not] = ACTIONS(525),
        [anon_sym_LBRACK] = ACTIONS(127),
        [anon_sym_LBRACE] = ACTIONS(129),
        [sym_number] = ACTIONS(131),
        [sym_identifier] = ACTIONS(133),
        [sym_comment] = ACTIONS(77),
    },
    [225] = {
        [sym__expression] = STATE(75),
        [sym_binary_operator] = STATE(43),
        [sym_unary_operator] = STATE(43),
        [sym_subscript] = STATE(43),
        [sym_call] = STATE(43),
        [sym_list] = STATE(43),
        [sym_list_comprehension] = STATE(43),
        [sym_dictionary] = STATE(43),
        [sym_dictionary_comprehension] = STATE(43),
        [sym_set] = STATE(43),
        [sym_set_comprehension] = STATE(43),
        [anon_sym_not] = ACTIONS(525),
        [anon_sym_LBRACK] = ACTIONS(127),
        [anon_sym_LBRACE] = ACTIONS(129),
        [sym_number] = ACTIONS(131),
        [sym_identifier] = ACTIONS(133),
        [sym_comment] = ACTIONS(77),
    },
    [226] = {
        [sym__expression] = STATE(229),
        [sym_binary_operator] = STATE(43),
        [sym_unary_operator] = STATE(43),
        [sym_subscript] = STATE(43),
        [sym_call] = STATE(43),
        [sym_list] = STATE(43),
        [sym_list_comprehension] = STATE(43),
        [sym_dictionary] = STATE(43),
        [sym_dictionary_comprehension] = STATE(43),
        [sym_set] = STATE(43),
        [sym_set_comprehension] = STATE(43),
        [anon_sym_not] = ACTIONS(525),
        [anon_sym_LBRACK] = ACTIONS(127),
        [anon_sym_LBRACE] = ACTIONS(129),
        [sym_number] = ACTIONS(131),
        [sym_identifier] = ACTIONS(133),
        [sym_comment] = ACTIONS(77),
    },
    [227] = {
        [sym__expression] = STATE(230),
        [sym_binary_operator] = STATE(43),
        [sym_unary_operator] = STATE(43),
        [sym_subscript] = STATE(43),
        [sym_call] = STATE(43),
        [sym_list] = STATE(43),
        [sym_list_comprehension] = STATE(43),
        [sym_dictionary] = STATE(43),
        [sym_dictionary_comprehension] = STATE(43),
        [sym_set] = STATE(43),
        [sym_set_comprehension] = STATE(43),
        [anon_sym_not] = ACTIONS(525),
        [anon_sym_LBRACK] = ACTIONS(127),
        [anon_sym_LBRACE] = ACTIONS(129),
        [sym_number] = ACTIONS(131),
        [sym_identifier] = ACTIONS(133),
        [sym_comment] = ACTIONS(77),
    },
    [228] = {
        [sym__expression] = STATE(232),
        [sym_binary_operator] = STATE(43),
        [sym_unary_operator] = STATE(43),
        [sym_subscript] = STATE(43),
        [sym_call] = STATE(43),
        [sym_list] = STATE(43),
        [sym_list_comprehension] = STATE(43),
        [sym_dictionary] = STATE(43),
        [sym_dictionary_comprehension] = STATE(43),
        [sym_set] = STATE(43),
        [sym_set_comprehension] = STATE(43),
        [anon_sym_not] = ACTIONS(525),
        [anon_sym_LBRACK] = ACTIONS(127),
        [anon_sym_LBRACE] = ACTIONS(129),
        [sym_number] = ACTIONS(131),
        [sym_identifier] = ACTIONS(133),
        [sym_comment] = ACTIONS(77),
    },
    [229] = {
        [anon_sym_COMMA] = ACTIONS(303),
        [anon_sym_for] = ACTIONS(303),
        [anon_sym_LPAREN] = ACTIONS(247),
        [anon_sym_STAR] = ACTIONS(551),
        [anon_sym_PLUS] = ACTIONS(553),
        [anon_sym_DASH] = ACTIONS(553),
        [anon_sym_SLASH] = ACTIONS(555),
        [anon_sym_STAR_STAR] = ACTIONS(557),
        [anon_sym_PIPE] = ACTIONS(303),
        [anon_sym_AMP] = ACTIONS(561),
        [anon_sym_CARET] = ACTIONS(563),
        [anon_sym_LT_LT] = ACTIONS(553),
        [anon_sym_GT_GT] = ACTIONS(553),
        [anon_sym_and] = ACTIONS(561),
        [anon_sym_or] = ACTIONS(303),
        [anon_sym_LBRACK] = ACTIONS(303),
        [anon_sym_RBRACE] = ACTIONS(303),
        [sym_comment] = ACTIONS(77),
    },
    [230] = {
        [anon_sym_COMMA] = ACTIONS(303),
        [anon_sym_for] = ACTIONS(303),
        [anon_sym_LPAREN] = ACTIONS(247),
        [anon_sym_STAR] = ACTIONS(551),
        [anon_sym_PLUS] = ACTIONS(553),
        [anon_sym_DASH] = ACTIONS(553),
        [anon_sym_SLASH] = ACTIONS(555),
        [anon_sym_STAR_STAR] = ACTIONS(557),
        [anon_sym_PIPE] = ACTIONS(303),
        [anon_sym_AMP] = ACTIONS(303),
        [anon_sym_CARET] = ACTIONS(563),
        [anon_sym_LT_LT] = ACTIONS(553),
        [anon_sym_GT_GT] = ACTIONS(553),
        [anon_sym_and] = ACTIONS(303),
        [anon_sym_or] = ACTIONS(303),
        [anon_sym_LBRACK] = ACTIONS(303),
        [anon_sym_RBRACE] = ACTIONS(303),
        [sym_comment] = ACTIONS(77),
    },
    [231] = {
        [anon_sym_COMMA] = ACTIONS(303),
        [anon_sym_for] = ACTIONS(303),
        [anon_sym_LPAREN] = ACTIONS(247),
        [anon_sym_STAR] = ACTIONS(551),
        [anon_sym_PLUS] = ACTIONS(303),
        [anon_sym_DASH] = ACTIONS(303),
        [anon_sym_SLASH] = ACTIONS(555),
        [anon_sym_STAR_STAR] = ACTIONS(557),
        [anon_sym_PIPE] = ACTIONS(303),
        [anon_sym_AMP] = ACTIONS(303),
        [anon_sym_CARET] = ACTIONS(303),
        [anon_sym_LT_LT] = ACTIONS(303),
        [anon_sym_GT_GT] = ACTIONS(303),
        [anon_sym_and] = ACTIONS(303),
        [anon_sym_or] = ACTIONS(303),
        [anon_sym_LBRACK] = ACTIONS(303),
        [anon_sym_RBRACE] = ACTIONS(303),
        [sym_comment] = ACTIONS(77),
    },
    [232] = {
        [anon_sym_COMMA] = ACTIONS(303),
        [anon_sym_for] = ACTIONS(303),
        [anon_sym_LPAREN] = ACTIONS(247),
        [anon_sym_STAR] = ACTIONS(551),
        [anon_sym_PLUS] = ACTIONS(553),
        [anon_sym_DASH] = ACTIONS(553),
        [anon_sym_SLASH] = ACTIONS(555),
        [anon_sym_STAR_STAR] = ACTIONS(557),
        [anon_sym_PIPE] = ACTIONS(303),
        [anon_sym_AMP] = ACTIONS(303),
        [anon_sym_CARET] = ACTIONS(303),
        [anon_sym_LT_LT] = ACTIONS(553),
        [anon_sym_GT_GT] = ACTIONS(553),
        [anon_sym_and] = ACTIONS(303),
        [anon_sym_or] = ACTIONS(303),
        [anon_sym_LBRACK] = ACTIONS(303),
        [anon_sym_RBRACE] = ACTIONS(303),
        [sym_comment] = ACTIONS(77),
    },
    [233] = {
        [anon_sym_COMMA] = ACTIONS(303),
        [anon_sym_for] = ACTIONS(303),
        [anon_sym_LPAREN] = ACTIONS(247),
        [anon_sym_STAR] = ACTIONS(305),
        [anon_sym_PLUS] = ACTIONS(303),
        [anon_sym_DASH] = ACTIONS(303),
        [anon_sym_SLASH] = ACTIONS(303),
        [anon_sym_STAR_STAR] = ACTIONS(557),
        [anon_sym_PIPE] = ACTIONS(303),
        [anon_sym_AMP] = ACTIONS(303),
        [anon_sym_CARET] = ACTIONS(303),
        [anon_sym_LT_LT] = ACTIONS(303),
        [anon_sym_GT_GT] = ACTIONS(303),
        [anon_sym_and] = ACTIONS(303),
        [anon_sym_or] = ACTIONS(303),
        [anon_sym_LBRACK] = ACTIONS(303),
        [anon_sym_RBRACE] = ACTIONS(303),
        [sym_comment] = ACTIONS(77),
    },
    [234] = {
        [anon_sym_COMMA] = ACTIONS(497),
        [anon_sym_LPAREN] = ACTIONS(247),
        [anon_sym_STAR] = ACTIONS(457),
        [anon_sym_PLUS] = ACTIONS(459),
        [anon_sym_DASH] = ACTIONS(459),
        [anon_sym_SLASH] = ACTIONS(461),
        [anon_sym_STAR_STAR] = ACTIONS(463),
        [anon_sym_PIPE] = ACTIONS(465),
        [anon_sym_AMP] = ACTIONS(467),
        [anon_sym_CARET] = ACTIONS(469),
        [anon_sym_LT_LT] = ACTIONS(459),
        [anon_sym_GT_GT] = ACTIONS(459),
        [anon_sym_and] = ACTIONS(467),
        [anon_sym_or] = ACTIONS(465),
        [anon_sym_LBRACK] = ACTIONS(263),
        [anon_sym_RBRACE] = ACTIONS(497),
        [sym_comment] = ACTIONS(77),
    },
    [235] = {
        [sym__expression] = STATE(274),
        [sym_binary_operator] = STATE(43),
        [sym_unary_operator] = STATE(43),
        [sym_subscript] = STATE(43),
        [sym_call] = STATE(43),
        [sym_list] = STATE(43),
        [sym_list_comprehension] = STATE(43),
        [sym_dictionary] = STATE(43),
        [sym_dictionary_comprehension] = STATE(43),
        [sym_set] = STATE(43),
        [sym_set_comprehension] = STATE(43),
        [anon_sym_not] = ACTIONS(147),
        [anon_sym_LBRACK] = ACTIONS(127),
        [anon_sym_LBRACE] = ACTIONS(129),
        [sym_number] = ACTIONS(131),
        [sym_identifier] = ACTIONS(133),
        [sym_comment] = ACTIONS(77),
    },
    [236] = {
        [anon_sym_COMMA] = ACTIONS(565),
        [anon_sym_COLON] = ACTIONS(565),
        [anon_sym_for] = ACTIONS(565),
        [anon_sym_in] = ACTIONS(565),
        [anon_sym_as] = ACTIONS(565),
        [anon_sym_LPAREN] = ACTIONS(565),
        [anon_sym_RPAREN] = ACTIONS(565),
        [anon_sym_STAR] = ACTIONS(567),
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
        [sym_comment] = ACTIONS(77),
    },
    [237] = {
        [aux_sym_print_statement_repeat1] = STATE(247),
        [anon_sym_COMMA] = ACTIONS(569),
        [anon_sym_for] = ACTIONS(571),
        [anon_sym_LPAREN] = ACTIONS(247),
        [anon_sym_STAR] = ACTIONS(573),
        [anon_sym_PLUS] = ACTIONS(575),
        [anon_sym_DASH] = ACTIONS(575),
        [anon_sym_SLASH] = ACTIONS(577),
        [anon_sym_STAR_STAR] = ACTIONS(579),
        [anon_sym_PIPE] = ACTIONS(581),
        [anon_sym_AMP] = ACTIONS(583),
        [anon_sym_CARET] = ACTIONS(585),
        [anon_sym_LT_LT] = ACTIONS(575),
        [anon_sym_GT_GT] = ACTIONS(575),
        [anon_sym_and] = ACTIONS(583),
        [anon_sym_or] = ACTIONS(581),
        [anon_sym_LBRACK] = ACTIONS(263),
        [anon_sym_RBRACK] = ACTIONS(587),
        [sym_comment] = ACTIONS(77),
    },
    [238] = {
        [sym__expression] = STATE(273),
        [sym_binary_operator] = STATE(43),
        [sym_unary_operator] = STATE(43),
        [sym_subscript] = STATE(43),
        [sym_call] = STATE(43),
        [sym_list] = STATE(43),
        [sym_list_comprehension] = STATE(43),
        [sym_dictionary] = STATE(43),
        [sym_dictionary_comprehension] = STATE(43),
        [sym_set] = STATE(43),
        [sym_set_comprehension] = STATE(43),
        [anon_sym_not] = ACTIONS(235),
        [anon_sym_LBRACK] = ACTIONS(127),
        [anon_sym_RBRACK] = ACTIONS(589),
        [anon_sym_LBRACE] = ACTIONS(129),
        [sym_number] = ACTIONS(131),
        [sym_identifier] = ACTIONS(133),
        [sym_comment] = ACTIONS(77),
    },
    [239] = {
        [sym_expression_list] = STATE(257),
        [sym__expression] = STATE(164),
        [sym_binary_operator] = STATE(43),
        [sym_unary_operator] = STATE(43),
        [sym_subscript] = STATE(43),
        [sym_call] = STATE(43),
        [sym_list] = STATE(43),
        [sym_list_comprehension] = STATE(43),
        [sym_dictionary] = STATE(43),
        [sym_dictionary_comprehension] = STATE(43),
        [sym_set] = STATE(43),
        [sym_set_comprehension] = STATE(43),
        [anon_sym_not] = ACTIONS(135),
        [anon_sym_LBRACK] = ACTIONS(127),
        [anon_sym_LBRACE] = ACTIONS(129),
        [sym_number] = ACTIONS(131),
        [sym_identifier] = ACTIONS(133),
        [sym_comment] = ACTIONS(77),
    },
    [240] = {
        [sym__expression] = STATE(256),
        [sym_binary_operator] = STATE(43),
        [sym_unary_operator] = STATE(43),
        [sym_subscript] = STATE(43),
        [sym_call] = STATE(43),
        [sym_list] = STATE(43),
        [sym_list_comprehension] = STATE(43),
        [sym_dictionary] = STATE(43),
        [sym_dictionary_comprehension] = STATE(43),
        [sym_set] = STATE(43),
        [sym_set_comprehension] = STATE(43),
        [anon_sym_not] = ACTIONS(147),
        [anon_sym_LBRACK] = ACTIONS(127),
        [anon_sym_LBRACE] = ACTIONS(129),
        [sym_number] = ACTIONS(131),
        [sym_identifier] = ACTIONS(133),
        [sym_comment] = ACTIONS(77),
    },
    [241] = {
        [sym__expression] = STATE(254),
        [sym_binary_operator] = STATE(43),
        [sym_unary_operator] = STATE(43),
        [sym_subscript] = STATE(43),
        [sym_call] = STATE(43),
        [sym_list] = STATE(43),
        [sym_list_comprehension] = STATE(43),
        [sym_dictionary] = STATE(43),
        [sym_dictionary_comprehension] = STATE(43),
        [sym_set] = STATE(43),
        [sym_set_comprehension] = STATE(43),
        [anon_sym_not] = ACTIONS(147),
        [anon_sym_LBRACK] = ACTIONS(127),
        [anon_sym_LBRACE] = ACTIONS(129),
        [sym_number] = ACTIONS(131),
        [sym_identifier] = ACTIONS(133),
        [sym_comment] = ACTIONS(77),
    },
    [242] = {
        [sym__expression] = STATE(75),
        [sym_binary_operator] = STATE(43),
        [sym_unary_operator] = STATE(43),
        [sym_subscript] = STATE(43),
        [sym_call] = STATE(43),
        [sym_list] = STATE(43),
        [sym_list_comprehension] = STATE(43),
        [sym_dictionary] = STATE(43),
        [sym_dictionary_comprehension] = STATE(43),
        [sym_set] = STATE(43),
        [sym_set_comprehension] = STATE(43),
        [anon_sym_not] = ACTIONS(147),
        [anon_sym_LBRACK] = ACTIONS(127),
        [anon_sym_LBRACE] = ACTIONS(129),
        [sym_number] = ACTIONS(131),
        [sym_identifier] = ACTIONS(133),
        [sym_comment] = ACTIONS(77),
    },
    [243] = {
        [sym__expression] = STATE(252),
        [sym_binary_operator] = STATE(43),
        [sym_unary_operator] = STATE(43),
        [sym_subscript] = STATE(43),
        [sym_call] = STATE(43),
        [sym_list] = STATE(43),
        [sym_list_comprehension] = STATE(43),
        [sym_dictionary] = STATE(43),
        [sym_dictionary_comprehension] = STATE(43),
        [sym_set] = STATE(43),
        [sym_set_comprehension] = STATE(43),
        [anon_sym_not] = ACTIONS(147),
        [anon_sym_LBRACK] = ACTIONS(127),
        [anon_sym_LBRACE] = ACTIONS(129),
        [sym_number] = ACTIONS(131),
        [sym_identifier] = ACTIONS(133),
        [sym_comment] = ACTIONS(77),
    },
    [244] = {
        [sym__expression] = STATE(253),
        [sym_binary_operator] = STATE(43),
        [sym_unary_operator] = STATE(43),
        [sym_subscript] = STATE(43),
        [sym_call] = STATE(43),
        [sym_list] = STATE(43),
        [sym_list_comprehension] = STATE(43),
        [sym_dictionary] = STATE(43),
        [sym_dictionary_comprehension] = STATE(43),
        [sym_set] = STATE(43),
        [sym_set_comprehension] = STATE(43),
        [anon_sym_not] = ACTIONS(147),
        [anon_sym_LBRACK] = ACTIONS(127),
        [anon_sym_LBRACE] = ACTIONS(129),
        [sym_number] = ACTIONS(131),
        [sym_identifier] = ACTIONS(133),
        [sym_comment] = ACTIONS(77),
    },
    [245] = {
        [sym__expression] = STATE(255),
        [sym_binary_operator] = STATE(43),
        [sym_unary_operator] = STATE(43),
        [sym_subscript] = STATE(43),
        [sym_call] = STATE(43),
        [sym_list] = STATE(43),
        [sym_list_comprehension] = STATE(43),
        [sym_dictionary] = STATE(43),
        [sym_dictionary_comprehension] = STATE(43),
        [sym_set] = STATE(43),
        [sym_set_comprehension] = STATE(43),
        [anon_sym_not] = ACTIONS(147),
        [anon_sym_LBRACK] = ACTIONS(127),
        [anon_sym_LBRACE] = ACTIONS(129),
        [sym_number] = ACTIONS(131),
        [sym_identifier] = ACTIONS(133),
        [sym_comment] = ACTIONS(77),
    },
    [246] = {
        [anon_sym_COMMA] = ACTIONS(591),
        [anon_sym_COLON] = ACTIONS(591),
        [anon_sym_for] = ACTIONS(591),
        [anon_sym_in] = ACTIONS(591),
        [anon_sym_as] = ACTIONS(591),
        [anon_sym_LPAREN] = ACTIONS(591),
        [anon_sym_RPAREN] = ACTIONS(591),
        [anon_sym_STAR] = ACTIONS(593),
        [anon_sym_PLUS] = ACTIONS(591),
        [anon_sym_DASH] = ACTIONS(591),
        [anon_sym_SLASH] = ACTIONS(591),
        [anon_sym_STAR_STAR] = ACTIONS(591),
        [anon_sym_PIPE] = ACTIONS(591),
        [anon_sym_AMP] = ACTIONS(591),
        [anon_sym_CARET] = ACTIONS(591),
        [anon_sym_LT_LT] = ACTIONS(591),
        [anon_sym_GT_GT] = ACTIONS(591),
        [anon_sym_and] = ACTIONS(591),
        [anon_sym_or] = ACTIONS(591),
        [anon_sym_LBRACK] = ACTIONS(591),
        [anon_sym_RBRACK] = ACTIONS(591),
        [anon_sym_RBRACE] = ACTIONS(591),
        [sym_comment] = ACTIONS(77),
    },
    [247] = {
        [anon_sym_COMMA] = ACTIONS(595),
        [anon_sym_RBRACK] = ACTIONS(589),
        [sym_comment] = ACTIONS(77),
    },
    [248] = {
        [sym__expression] = STATE(251),
        [sym_binary_operator] = STATE(43),
        [sym_unary_operator] = STATE(43),
        [sym_subscript] = STATE(43),
        [sym_call] = STATE(43),
        [sym_list] = STATE(43),
        [sym_list_comprehension] = STATE(43),
        [sym_dictionary] = STATE(43),
        [sym_dictionary_comprehension] = STATE(43),
        [sym_set] = STATE(43),
        [sym_set_comprehension] = STATE(43),
        [anon_sym_not] = ACTIONS(235),
        [anon_sym_LBRACK] = ACTIONS(127),
        [anon_sym_RBRACK] = ACTIONS(597),
        [anon_sym_LBRACE] = ACTIONS(129),
        [sym_number] = ACTIONS(131),
        [sym_identifier] = ACTIONS(133),
        [sym_comment] = ACTIONS(77),
    },
    [249] = {
        [anon_sym_COMMA] = ACTIONS(599),
        [anon_sym_COLON] = ACTIONS(599),
        [anon_sym_for] = ACTIONS(599),
        [anon_sym_in] = ACTIONS(599),
        [anon_sym_as] = ACTIONS(599),
        [anon_sym_LPAREN] = ACTIONS(599),
        [anon_sym_RPAREN] = ACTIONS(599),
        [anon_sym_STAR] = ACTIONS(601),
        [anon_sym_PLUS] = ACTIONS(599),
        [anon_sym_DASH] = ACTIONS(599),
        [anon_sym_SLASH] = ACTIONS(599),
        [anon_sym_STAR_STAR] = ACTIONS(599),
        [anon_sym_PIPE] = ACTIONS(599),
        [anon_sym_AMP] = ACTIONS(599),
        [anon_sym_CARET] = ACTIONS(599),
        [anon_sym_LT_LT] = ACTIONS(599),
        [anon_sym_GT_GT] = ACTIONS(599),
        [anon_sym_and] = ACTIONS(599),
        [anon_sym_or] = ACTIONS(599),
        [anon_sym_LBRACK] = ACTIONS(599),
        [anon_sym_RBRACK] = ACTIONS(599),
        [anon_sym_RBRACE] = ACTIONS(599),
        [sym_comment] = ACTIONS(77),
    },
    [250] = {
        [anon_sym_COMMA] = ACTIONS(603),
        [anon_sym_COLON] = ACTIONS(603),
        [anon_sym_for] = ACTIONS(603),
        [anon_sym_in] = ACTIONS(603),
        [anon_sym_as] = ACTIONS(603),
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
        [sym_comment] = ACTIONS(77),
    },
    [251] = {
        [anon_sym_COMMA] = ACTIONS(495),
        [anon_sym_LPAREN] = ACTIONS(247),
        [anon_sym_STAR] = ACTIONS(249),
        [anon_sym_PLUS] = ACTIONS(251),
        [anon_sym_DASH] = ACTIONS(251),
        [anon_sym_SLASH] = ACTIONS(253),
        [anon_sym_STAR_STAR] = ACTIONS(255),
        [anon_sym_PIPE] = ACTIONS(257),
        [anon_sym_AMP] = ACTIONS(259),
        [anon_sym_CARET] = ACTIONS(261),
        [anon_sym_LT_LT] = ACTIONS(251),
        [anon_sym_GT_GT] = ACTIONS(251),
        [anon_sym_and] = ACTIONS(259),
        [anon_sym_or] = ACTIONS(257),
        [anon_sym_LBRACK] = ACTIONS(263),
        [anon_sym_RBRACK] = ACTIONS(495),
        [sym_comment] = ACTIONS(77),
    },
    [252] = {
        [anon_sym_COMMA] = ACTIONS(303),
        [anon_sym_for] = ACTIONS(303),
        [anon_sym_LPAREN] = ACTIONS(247),
        [anon_sym_STAR] = ACTIONS(573),
        [anon_sym_PLUS] = ACTIONS(575),
        [anon_sym_DASH] = ACTIONS(575),
        [anon_sym_SLASH] = ACTIONS(577),
        [anon_sym_STAR_STAR] = ACTIONS(579),
        [anon_sym_PIPE] = ACTIONS(303),
        [anon_sym_AMP] = ACTIONS(583),
        [anon_sym_CARET] = ACTIONS(585),
        [anon_sym_LT_LT] = ACTIONS(575),
        [anon_sym_GT_GT] = ACTIONS(575),
        [anon_sym_and] = ACTIONS(583),
        [anon_sym_or] = ACTIONS(303),
        [anon_sym_LBRACK] = ACTIONS(303),
        [anon_sym_RBRACK] = ACTIONS(303),
        [sym_comment] = ACTIONS(77),
    },
    [253] = {
        [anon_sym_COMMA] = ACTIONS(303),
        [anon_sym_for] = ACTIONS(303),
        [anon_sym_LPAREN] = ACTIONS(247),
        [anon_sym_STAR] = ACTIONS(573),
        [anon_sym_PLUS] = ACTIONS(575),
        [anon_sym_DASH] = ACTIONS(575),
        [anon_sym_SLASH] = ACTIONS(577),
        [anon_sym_STAR_STAR] = ACTIONS(579),
        [anon_sym_PIPE] = ACTIONS(303),
        [anon_sym_AMP] = ACTIONS(303),
        [anon_sym_CARET] = ACTIONS(585),
        [anon_sym_LT_LT] = ACTIONS(575),
        [anon_sym_GT_GT] = ACTIONS(575),
        [anon_sym_and] = ACTIONS(303),
        [anon_sym_or] = ACTIONS(303),
        [anon_sym_LBRACK] = ACTIONS(303),
        [anon_sym_RBRACK] = ACTIONS(303),
        [sym_comment] = ACTIONS(77),
    },
    [254] = {
        [anon_sym_COMMA] = ACTIONS(303),
        [anon_sym_for] = ACTIONS(303),
        [anon_sym_LPAREN] = ACTIONS(247),
        [anon_sym_STAR] = ACTIONS(573),
        [anon_sym_PLUS] = ACTIONS(303),
        [anon_sym_DASH] = ACTIONS(303),
        [anon_sym_SLASH] = ACTIONS(577),
        [anon_sym_STAR_STAR] = ACTIONS(579),
        [anon_sym_PIPE] = ACTIONS(303),
        [anon_sym_AMP] = ACTIONS(303),
        [anon_sym_CARET] = ACTIONS(303),
        [anon_sym_LT_LT] = ACTIONS(303),
        [anon_sym_GT_GT] = ACTIONS(303),
        [anon_sym_and] = ACTIONS(303),
        [anon_sym_or] = ACTIONS(303),
        [anon_sym_LBRACK] = ACTIONS(303),
        [anon_sym_RBRACK] = ACTIONS(303),
        [sym_comment] = ACTIONS(77),
    },
    [255] = {
        [anon_sym_COMMA] = ACTIONS(303),
        [anon_sym_for] = ACTIONS(303),
        [anon_sym_LPAREN] = ACTIONS(247),
        [anon_sym_STAR] = ACTIONS(573),
        [anon_sym_PLUS] = ACTIONS(575),
        [anon_sym_DASH] = ACTIONS(575),
        [anon_sym_SLASH] = ACTIONS(577),
        [anon_sym_STAR_STAR] = ACTIONS(579),
        [anon_sym_PIPE] = ACTIONS(303),
        [anon_sym_AMP] = ACTIONS(303),
        [anon_sym_CARET] = ACTIONS(303),
        [anon_sym_LT_LT] = ACTIONS(575),
        [anon_sym_GT_GT] = ACTIONS(575),
        [anon_sym_and] = ACTIONS(303),
        [anon_sym_or] = ACTIONS(303),
        [anon_sym_LBRACK] = ACTIONS(303),
        [anon_sym_RBRACK] = ACTIONS(303),
        [sym_comment] = ACTIONS(77),
    },
    [256] = {
        [anon_sym_COMMA] = ACTIONS(303),
        [anon_sym_for] = ACTIONS(303),
        [anon_sym_LPAREN] = ACTIONS(247),
        [anon_sym_STAR] = ACTIONS(305),
        [anon_sym_PLUS] = ACTIONS(303),
        [anon_sym_DASH] = ACTIONS(303),
        [anon_sym_SLASH] = ACTIONS(303),
        [anon_sym_STAR_STAR] = ACTIONS(579),
        [anon_sym_PIPE] = ACTIONS(303),
        [anon_sym_AMP] = ACTIONS(303),
        [anon_sym_CARET] = ACTIONS(303),
        [anon_sym_LT_LT] = ACTIONS(303),
        [anon_sym_GT_GT] = ACTIONS(303),
        [anon_sym_and] = ACTIONS(303),
        [anon_sym_or] = ACTIONS(303),
        [anon_sym_LBRACK] = ACTIONS(303),
        [anon_sym_RBRACK] = ACTIONS(303),
        [sym_comment] = ACTIONS(77),
    },
    [257] = {
        [anon_sym_in] = ACTIONS(607),
        [sym_comment] = ACTIONS(77),
    },
    [258] = {
        [sym__expression] = STATE(260),
        [sym_binary_operator] = STATE(43),
        [sym_unary_operator] = STATE(43),
        [sym_subscript] = STATE(43),
        [sym_call] = STATE(43),
        [sym_list] = STATE(43),
        [sym_list_comprehension] = STATE(43),
        [sym_dictionary] = STATE(43),
        [sym_dictionary_comprehension] = STATE(43),
        [sym_set] = STATE(43),
        [sym_set_comprehension] = STATE(43),
        [anon_sym_not] = ACTIONS(609),
        [anon_sym_LBRACK] = ACTIONS(127),
        [anon_sym_LBRACE] = ACTIONS(129),
        [sym_number] = ACTIONS(131),
        [sym_identifier] = ACTIONS(133),
        [sym_comment] = ACTIONS(77),
    },
    [259] = {
        [sym__expression] = STATE(274),
        [sym_binary_operator] = STATE(43),
        [sym_unary_operator] = STATE(43),
        [sym_subscript] = STATE(43),
        [sym_call] = STATE(43),
        [sym_list] = STATE(43),
        [sym_list_comprehension] = STATE(43),
        [sym_dictionary] = STATE(43),
        [sym_dictionary_comprehension] = STATE(43),
        [sym_set] = STATE(43),
        [sym_set_comprehension] = STATE(43),
        [anon_sym_not] = ACTIONS(609),
        [anon_sym_LBRACK] = ACTIONS(127),
        [anon_sym_LBRACE] = ACTIONS(129),
        [sym_number] = ACTIONS(131),
        [sym_identifier] = ACTIONS(133),
        [sym_comment] = ACTIONS(77),
    },
    [260] = {
        [anon_sym_LPAREN] = ACTIONS(247),
        [anon_sym_STAR] = ACTIONS(611),
        [anon_sym_PLUS] = ACTIONS(613),
        [anon_sym_DASH] = ACTIONS(613),
        [anon_sym_SLASH] = ACTIONS(615),
        [anon_sym_STAR_STAR] = ACTIONS(617),
        [anon_sym_PIPE] = ACTIONS(619),
        [anon_sym_AMP] = ACTIONS(621),
        [anon_sym_CARET] = ACTIONS(623),
        [anon_sym_LT_LT] = ACTIONS(613),
        [anon_sym_GT_GT] = ACTIONS(613),
        [anon_sym_and] = ACTIONS(621),
        [anon_sym_or] = ACTIONS(619),
        [anon_sym_LBRACK] = ACTIONS(263),
        [anon_sym_RBRACK] = ACTIONS(625),
        [sym_comment] = ACTIONS(77),
    },
    [261] = {
        [sym__expression] = STATE(272),
        [sym_binary_operator] = STATE(43),
        [sym_unary_operator] = STATE(43),
        [sym_subscript] = STATE(43),
        [sym_call] = STATE(43),
        [sym_list] = STATE(43),
        [sym_list_comprehension] = STATE(43),
        [sym_dictionary] = STATE(43),
        [sym_dictionary_comprehension] = STATE(43),
        [sym_set] = STATE(43),
        [sym_set_comprehension] = STATE(43),
        [anon_sym_not] = ACTIONS(609),
        [anon_sym_LBRACK] = ACTIONS(127),
        [anon_sym_LBRACE] = ACTIONS(129),
        [sym_number] = ACTIONS(131),
        [sym_identifier] = ACTIONS(133),
        [sym_comment] = ACTIONS(77),
    },
    [262] = {
        [sym__expression] = STATE(270),
        [sym_binary_operator] = STATE(43),
        [sym_unary_operator] = STATE(43),
        [sym_subscript] = STATE(43),
        [sym_call] = STATE(43),
        [sym_list] = STATE(43),
        [sym_list_comprehension] = STATE(43),
        [sym_dictionary] = STATE(43),
        [sym_dictionary_comprehension] = STATE(43),
        [sym_set] = STATE(43),
        [sym_set_comprehension] = STATE(43),
        [anon_sym_not] = ACTIONS(609),
        [anon_sym_LBRACK] = ACTIONS(127),
        [anon_sym_LBRACE] = ACTIONS(129),
        [sym_number] = ACTIONS(131),
        [sym_identifier] = ACTIONS(133),
        [sym_comment] = ACTIONS(77),
    },
    [263] = {
        [sym__expression] = STATE(75),
        [sym_binary_operator] = STATE(43),
        [sym_unary_operator] = STATE(43),
        [sym_subscript] = STATE(43),
        [sym_call] = STATE(43),
        [sym_list] = STATE(43),
        [sym_list_comprehension] = STATE(43),
        [sym_dictionary] = STATE(43),
        [sym_dictionary_comprehension] = STATE(43),
        [sym_set] = STATE(43),
        [sym_set_comprehension] = STATE(43),
        [anon_sym_not] = ACTIONS(609),
        [anon_sym_LBRACK] = ACTIONS(127),
        [anon_sym_LBRACE] = ACTIONS(129),
        [sym_number] = ACTIONS(131),
        [sym_identifier] = ACTIONS(133),
        [sym_comment] = ACTIONS(77),
    },
    [264] = {
        [sym__expression] = STATE(268),
        [sym_binary_operator] = STATE(43),
        [sym_unary_operator] = STATE(43),
        [sym_subscript] = STATE(43),
        [sym_call] = STATE(43),
        [sym_list] = STATE(43),
        [sym_list_comprehension] = STATE(43),
        [sym_dictionary] = STATE(43),
        [sym_dictionary_comprehension] = STATE(43),
        [sym_set] = STATE(43),
        [sym_set_comprehension] = STATE(43),
        [anon_sym_not] = ACTIONS(609),
        [anon_sym_LBRACK] = ACTIONS(127),
        [anon_sym_LBRACE] = ACTIONS(129),
        [sym_number] = ACTIONS(131),
        [sym_identifier] = ACTIONS(133),
        [sym_comment] = ACTIONS(77),
    },
    [265] = {
        [sym__expression] = STATE(269),
        [sym_binary_operator] = STATE(43),
        [sym_unary_operator] = STATE(43),
        [sym_subscript] = STATE(43),
        [sym_call] = STATE(43),
        [sym_list] = STATE(43),
        [sym_list_comprehension] = STATE(43),
        [sym_dictionary] = STATE(43),
        [sym_dictionary_comprehension] = STATE(43),
        [sym_set] = STATE(43),
        [sym_set_comprehension] = STATE(43),
        [anon_sym_not] = ACTIONS(609),
        [anon_sym_LBRACK] = ACTIONS(127),
        [anon_sym_LBRACE] = ACTIONS(129),
        [sym_number] = ACTIONS(131),
        [sym_identifier] = ACTIONS(133),
        [sym_comment] = ACTIONS(77),
    },
    [266] = {
        [sym__expression] = STATE(271),
        [sym_binary_operator] = STATE(43),
        [sym_unary_operator] = STATE(43),
        [sym_subscript] = STATE(43),
        [sym_call] = STATE(43),
        [sym_list] = STATE(43),
        [sym_list_comprehension] = STATE(43),
        [sym_dictionary] = STATE(43),
        [sym_dictionary_comprehension] = STATE(43),
        [sym_set] = STATE(43),
        [sym_set_comprehension] = STATE(43),
        [anon_sym_not] = ACTIONS(609),
        [anon_sym_LBRACK] = ACTIONS(127),
        [anon_sym_LBRACE] = ACTIONS(129),
        [sym_number] = ACTIONS(131),
        [sym_identifier] = ACTIONS(133),
        [sym_comment] = ACTIONS(77),
    },
    [267] = {
        [anon_sym_COMMA] = ACTIONS(627),
        [anon_sym_COLON] = ACTIONS(627),
        [anon_sym_for] = ACTIONS(627),
        [anon_sym_in] = ACTIONS(627),
        [anon_sym_as] = ACTIONS(627),
        [anon_sym_LPAREN] = ACTIONS(627),
        [anon_sym_RPAREN] = ACTIONS(627),
        [anon_sym_STAR] = ACTIONS(629),
        [anon_sym_PLUS] = ACTIONS(627),
        [anon_sym_DASH] = ACTIONS(627),
        [anon_sym_SLASH] = ACTIONS(627),
        [anon_sym_STAR_STAR] = ACTIONS(627),
        [anon_sym_PIPE] = ACTIONS(627),
        [anon_sym_AMP] = ACTIONS(627),
        [anon_sym_CARET] = ACTIONS(627),
        [anon_sym_LT_LT] = ACTIONS(627),
        [anon_sym_GT_GT] = ACTIONS(627),
        [anon_sym_and] = ACTIONS(627),
        [anon_sym_or] = ACTIONS(627),
        [anon_sym_LBRACK] = ACTIONS(627),
        [anon_sym_RBRACK] = ACTIONS(627),
        [anon_sym_RBRACE] = ACTIONS(627),
        [sym_comment] = ACTIONS(77),
    },
    [268] = {
        [anon_sym_LPAREN] = ACTIONS(247),
        [anon_sym_STAR] = ACTIONS(611),
        [anon_sym_PLUS] = ACTIONS(613),
        [anon_sym_DASH] = ACTIONS(613),
        [anon_sym_SLASH] = ACTIONS(615),
        [anon_sym_STAR_STAR] = ACTIONS(617),
        [anon_sym_PIPE] = ACTIONS(303),
        [anon_sym_AMP] = ACTIONS(621),
        [anon_sym_CARET] = ACTIONS(623),
        [anon_sym_LT_LT] = ACTIONS(613),
        [anon_sym_GT_GT] = ACTIONS(613),
        [anon_sym_and] = ACTIONS(621),
        [anon_sym_or] = ACTIONS(303),
        [anon_sym_LBRACK] = ACTIONS(303),
        [anon_sym_RBRACK] = ACTIONS(303),
        [sym_comment] = ACTIONS(77),
    },
    [269] = {
        [anon_sym_LPAREN] = ACTIONS(247),
        [anon_sym_STAR] = ACTIONS(611),
        [anon_sym_PLUS] = ACTIONS(613),
        [anon_sym_DASH] = ACTIONS(613),
        [anon_sym_SLASH] = ACTIONS(615),
        [anon_sym_STAR_STAR] = ACTIONS(617),
        [anon_sym_PIPE] = ACTIONS(303),
        [anon_sym_AMP] = ACTIONS(303),
        [anon_sym_CARET] = ACTIONS(623),
        [anon_sym_LT_LT] = ACTIONS(613),
        [anon_sym_GT_GT] = ACTIONS(613),
        [anon_sym_and] = ACTIONS(303),
        [anon_sym_or] = ACTIONS(303),
        [anon_sym_LBRACK] = ACTIONS(303),
        [anon_sym_RBRACK] = ACTIONS(303),
        [sym_comment] = ACTIONS(77),
    },
    [270] = {
        [anon_sym_LPAREN] = ACTIONS(247),
        [anon_sym_STAR] = ACTIONS(611),
        [anon_sym_PLUS] = ACTIONS(303),
        [anon_sym_DASH] = ACTIONS(303),
        [anon_sym_SLASH] = ACTIONS(615),
        [anon_sym_STAR_STAR] = ACTIONS(617),
        [anon_sym_PIPE] = ACTIONS(303),
        [anon_sym_AMP] = ACTIONS(303),
        [anon_sym_CARET] = ACTIONS(303),
        [anon_sym_LT_LT] = ACTIONS(303),
        [anon_sym_GT_GT] = ACTIONS(303),
        [anon_sym_and] = ACTIONS(303),
        [anon_sym_or] = ACTIONS(303),
        [anon_sym_LBRACK] = ACTIONS(303),
        [anon_sym_RBRACK] = ACTIONS(303),
        [sym_comment] = ACTIONS(77),
    },
    [271] = {
        [anon_sym_LPAREN] = ACTIONS(247),
        [anon_sym_STAR] = ACTIONS(611),
        [anon_sym_PLUS] = ACTIONS(613),
        [anon_sym_DASH] = ACTIONS(613),
        [anon_sym_SLASH] = ACTIONS(615),
        [anon_sym_STAR_STAR] = ACTIONS(617),
        [anon_sym_PIPE] = ACTIONS(303),
        [anon_sym_AMP] = ACTIONS(303),
        [anon_sym_CARET] = ACTIONS(303),
        [anon_sym_LT_LT] = ACTIONS(613),
        [anon_sym_GT_GT] = ACTIONS(613),
        [anon_sym_and] = ACTIONS(303),
        [anon_sym_or] = ACTIONS(303),
        [anon_sym_LBRACK] = ACTIONS(303),
        [anon_sym_RBRACK] = ACTIONS(303),
        [sym_comment] = ACTIONS(77),
    },
    [272] = {
        [anon_sym_LPAREN] = ACTIONS(247),
        [anon_sym_STAR] = ACTIONS(305),
        [anon_sym_PLUS] = ACTIONS(303),
        [anon_sym_DASH] = ACTIONS(303),
        [anon_sym_SLASH] = ACTIONS(303),
        [anon_sym_STAR_STAR] = ACTIONS(617),
        [anon_sym_PIPE] = ACTIONS(303),
        [anon_sym_AMP] = ACTIONS(303),
        [anon_sym_CARET] = ACTIONS(303),
        [anon_sym_LT_LT] = ACTIONS(303),
        [anon_sym_GT_GT] = ACTIONS(303),
        [anon_sym_and] = ACTIONS(303),
        [anon_sym_or] = ACTIONS(303),
        [anon_sym_LBRACK] = ACTIONS(303),
        [anon_sym_RBRACK] = ACTIONS(303),
        [sym_comment] = ACTIONS(77),
    },
    [273] = {
        [anon_sym_COMMA] = ACTIONS(497),
        [anon_sym_LPAREN] = ACTIONS(247),
        [anon_sym_STAR] = ACTIONS(249),
        [anon_sym_PLUS] = ACTIONS(251),
        [anon_sym_DASH] = ACTIONS(251),
        [anon_sym_SLASH] = ACTIONS(253),
        [anon_sym_STAR_STAR] = ACTIONS(255),
        [anon_sym_PIPE] = ACTIONS(257),
        [anon_sym_AMP] = ACTIONS(259),
        [anon_sym_CARET] = ACTIONS(261),
        [anon_sym_LT_LT] = ACTIONS(251),
        [anon_sym_GT_GT] = ACTIONS(251),
        [anon_sym_and] = ACTIONS(259),
        [anon_sym_or] = ACTIONS(257),
        [anon_sym_LBRACK] = ACTIONS(263),
        [anon_sym_RBRACK] = ACTIONS(497),
        [sym_comment] = ACTIONS(77),
    },
    [274] = {
        [anon_sym_COMMA] = ACTIONS(631),
        [anon_sym_COLON] = ACTIONS(631),
        [anon_sym_for] = ACTIONS(631),
        [anon_sym_in] = ACTIONS(631),
        [anon_sym_as] = ACTIONS(631),
        [anon_sym_LPAREN] = ACTIONS(247),
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
        [sym_comment] = ACTIONS(77),
    },
    [275] = {
        [sym__expression] = STATE(274),
        [sym_binary_operator] = STATE(43),
        [sym_unary_operator] = STATE(43),
        [sym_subscript] = STATE(43),
        [sym_call] = STATE(43),
        [sym_list] = STATE(43),
        [sym_list_comprehension] = STATE(43),
        [sym_dictionary] = STATE(43),
        [sym_dictionary_comprehension] = STATE(43),
        [sym_set] = STATE(43),
        [sym_set_comprehension] = STATE(43),
        [anon_sym_not] = ACTIONS(307),
        [anon_sym_LBRACK] = ACTIONS(127),
        [anon_sym_LBRACE] = ACTIONS(129),
        [sym_number] = ACTIONS(131),
        [sym_identifier] = ACTIONS(133),
        [sym_comment] = ACTIONS(77),
    },
    [276] = {
        [anon_sym_LPAREN] = ACTIONS(247),
        [anon_sym_RPAREN] = ACTIONS(635),
        [anon_sym_STAR] = ACTIONS(637),
        [anon_sym_PLUS] = ACTIONS(639),
        [anon_sym_DASH] = ACTIONS(639),
        [anon_sym_SLASH] = ACTIONS(641),
        [anon_sym_STAR_STAR] = ACTIONS(643),
        [anon_sym_PIPE] = ACTIONS(645),
        [anon_sym_AMP] = ACTIONS(647),
        [anon_sym_CARET] = ACTIONS(649),
        [anon_sym_LT_LT] = ACTIONS(639),
        [anon_sym_GT_GT] = ACTIONS(639),
        [anon_sym_and] = ACTIONS(647),
        [anon_sym_or] = ACTIONS(645),
        [anon_sym_LBRACK] = ACTIONS(263),
        [sym_comment] = ACTIONS(77),
    },
    [277] = {
        [sym__expression] = STATE(287),
        [sym_binary_operator] = STATE(43),
        [sym_unary_operator] = STATE(43),
        [sym_subscript] = STATE(43),
        [sym_call] = STATE(43),
        [sym_list] = STATE(43),
        [sym_list_comprehension] = STATE(43),
        [sym_dictionary] = STATE(43),
        [sym_dictionary_comprehension] = STATE(43),
        [sym_set] = STATE(43),
        [sym_set_comprehension] = STATE(43),
        [anon_sym_not] = ACTIONS(307),
        [anon_sym_LBRACK] = ACTIONS(127),
        [anon_sym_LBRACE] = ACTIONS(129),
        [sym_number] = ACTIONS(131),
        [sym_identifier] = ACTIONS(133),
        [sym_comment] = ACTIONS(77),
    },
    [278] = {
        [sym__expression] = STATE(285),
        [sym_binary_operator] = STATE(43),
        [sym_unary_operator] = STATE(43),
        [sym_subscript] = STATE(43),
        [sym_call] = STATE(43),
        [sym_list] = STATE(43),
        [sym_list_comprehension] = STATE(43),
        [sym_dictionary] = STATE(43),
        [sym_dictionary_comprehension] = STATE(43),
        [sym_set] = STATE(43),
        [sym_set_comprehension] = STATE(43),
        [anon_sym_not] = ACTIONS(307),
        [anon_sym_LBRACK] = ACTIONS(127),
        [anon_sym_LBRACE] = ACTIONS(129),
        [sym_number] = ACTIONS(131),
        [sym_identifier] = ACTIONS(133),
        [sym_comment] = ACTIONS(77),
    },
    [279] = {
        [sym__expression] = STATE(75),
        [sym_binary_operator] = STATE(43),
        [sym_unary_operator] = STATE(43),
        [sym_subscript] = STATE(43),
        [sym_call] = STATE(43),
        [sym_list] = STATE(43),
        [sym_list_comprehension] = STATE(43),
        [sym_dictionary] = STATE(43),
        [sym_dictionary_comprehension] = STATE(43),
        [sym_set] = STATE(43),
        [sym_set_comprehension] = STATE(43),
        [anon_sym_not] = ACTIONS(307),
        [anon_sym_LBRACK] = ACTIONS(127),
        [anon_sym_LBRACE] = ACTIONS(129),
        [sym_number] = ACTIONS(131),
        [sym_identifier] = ACTIONS(133),
        [sym_comment] = ACTIONS(77),
    },
    [280] = {
        [sym__expression] = STATE(283),
        [sym_binary_operator] = STATE(43),
        [sym_unary_operator] = STATE(43),
        [sym_subscript] = STATE(43),
        [sym_call] = STATE(43),
        [sym_list] = STATE(43),
        [sym_list_comprehension] = STATE(43),
        [sym_dictionary] = STATE(43),
        [sym_dictionary_comprehension] = STATE(43),
        [sym_set] = STATE(43),
        [sym_set_comprehension] = STATE(43),
        [anon_sym_not] = ACTIONS(307),
        [anon_sym_LBRACK] = ACTIONS(127),
        [anon_sym_LBRACE] = ACTIONS(129),
        [sym_number] = ACTIONS(131),
        [sym_identifier] = ACTIONS(133),
        [sym_comment] = ACTIONS(77),
    },
    [281] = {
        [sym__expression] = STATE(284),
        [sym_binary_operator] = STATE(43),
        [sym_unary_operator] = STATE(43),
        [sym_subscript] = STATE(43),
        [sym_call] = STATE(43),
        [sym_list] = STATE(43),
        [sym_list_comprehension] = STATE(43),
        [sym_dictionary] = STATE(43),
        [sym_dictionary_comprehension] = STATE(43),
        [sym_set] = STATE(43),
        [sym_set_comprehension] = STATE(43),
        [anon_sym_not] = ACTIONS(307),
        [anon_sym_LBRACK] = ACTIONS(127),
        [anon_sym_LBRACE] = ACTIONS(129),
        [sym_number] = ACTIONS(131),
        [sym_identifier] = ACTIONS(133),
        [sym_comment] = ACTIONS(77),
    },
    [282] = {
        [sym__expression] = STATE(286),
        [sym_binary_operator] = STATE(43),
        [sym_unary_operator] = STATE(43),
        [sym_subscript] = STATE(43),
        [sym_call] = STATE(43),
        [sym_list] = STATE(43),
        [sym_list_comprehension] = STATE(43),
        [sym_dictionary] = STATE(43),
        [sym_dictionary_comprehension] = STATE(43),
        [sym_set] = STATE(43),
        [sym_set_comprehension] = STATE(43),
        [anon_sym_not] = ACTIONS(307),
        [anon_sym_LBRACK] = ACTIONS(127),
        [anon_sym_LBRACE] = ACTIONS(129),
        [sym_number] = ACTIONS(131),
        [sym_identifier] = ACTIONS(133),
        [sym_comment] = ACTIONS(77),
    },
    [283] = {
        [anon_sym_LPAREN] = ACTIONS(247),
        [anon_sym_RPAREN] = ACTIONS(303),
        [anon_sym_STAR] = ACTIONS(637),
        [anon_sym_PLUS] = ACTIONS(639),
        [anon_sym_DASH] = ACTIONS(639),
        [anon_sym_SLASH] = ACTIONS(641),
        [anon_sym_STAR_STAR] = ACTIONS(643),
        [anon_sym_PIPE] = ACTIONS(303),
        [anon_sym_AMP] = ACTIONS(647),
        [anon_sym_CARET] = ACTIONS(649),
        [anon_sym_LT_LT] = ACTIONS(639),
        [anon_sym_GT_GT] = ACTIONS(639),
        [anon_sym_and] = ACTIONS(647),
        [anon_sym_or] = ACTIONS(303),
        [anon_sym_LBRACK] = ACTIONS(303),
        [sym_comment] = ACTIONS(77),
    },
    [284] = {
        [anon_sym_LPAREN] = ACTIONS(247),
        [anon_sym_RPAREN] = ACTIONS(303),
        [anon_sym_STAR] = ACTIONS(637),
        [anon_sym_PLUS] = ACTIONS(639),
        [anon_sym_DASH] = ACTIONS(639),
        [anon_sym_SLASH] = ACTIONS(641),
        [anon_sym_STAR_STAR] = ACTIONS(643),
        [anon_sym_PIPE] = ACTIONS(303),
        [anon_sym_AMP] = ACTIONS(303),
        [anon_sym_CARET] = ACTIONS(649),
        [anon_sym_LT_LT] = ACTIONS(639),
        [anon_sym_GT_GT] = ACTIONS(639),
        [anon_sym_and] = ACTIONS(303),
        [anon_sym_or] = ACTIONS(303),
        [anon_sym_LBRACK] = ACTIONS(303),
        [sym_comment] = ACTIONS(77),
    },
    [285] = {
        [anon_sym_LPAREN] = ACTIONS(247),
        [anon_sym_RPAREN] = ACTIONS(303),
        [anon_sym_STAR] = ACTIONS(637),
        [anon_sym_PLUS] = ACTIONS(303),
        [anon_sym_DASH] = ACTIONS(303),
        [anon_sym_SLASH] = ACTIONS(641),
        [anon_sym_STAR_STAR] = ACTIONS(643),
        [anon_sym_PIPE] = ACTIONS(303),
        [anon_sym_AMP] = ACTIONS(303),
        [anon_sym_CARET] = ACTIONS(303),
        [anon_sym_LT_LT] = ACTIONS(303),
        [anon_sym_GT_GT] = ACTIONS(303),
        [anon_sym_and] = ACTIONS(303),
        [anon_sym_or] = ACTIONS(303),
        [anon_sym_LBRACK] = ACTIONS(303),
        [sym_comment] = ACTIONS(77),
    },
    [286] = {
        [anon_sym_LPAREN] = ACTIONS(247),
        [anon_sym_RPAREN] = ACTIONS(303),
        [anon_sym_STAR] = ACTIONS(637),
        [anon_sym_PLUS] = ACTIONS(639),
        [anon_sym_DASH] = ACTIONS(639),
        [anon_sym_SLASH] = ACTIONS(641),
        [anon_sym_STAR_STAR] = ACTIONS(643),
        [anon_sym_PIPE] = ACTIONS(303),
        [anon_sym_AMP] = ACTIONS(303),
        [anon_sym_CARET] = ACTIONS(303),
        [anon_sym_LT_LT] = ACTIONS(639),
        [anon_sym_GT_GT] = ACTIONS(639),
        [anon_sym_and] = ACTIONS(303),
        [anon_sym_or] = ACTIONS(303),
        [anon_sym_LBRACK] = ACTIONS(303),
        [sym_comment] = ACTIONS(77),
    },
    [287] = {
        [anon_sym_LPAREN] = ACTIONS(247),
        [anon_sym_RPAREN] = ACTIONS(303),
        [anon_sym_STAR] = ACTIONS(305),
        [anon_sym_PLUS] = ACTIONS(303),
        [anon_sym_DASH] = ACTIONS(303),
        [anon_sym_SLASH] = ACTIONS(303),
        [anon_sym_STAR_STAR] = ACTIONS(643),
        [anon_sym_PIPE] = ACTIONS(303),
        [anon_sym_AMP] = ACTIONS(303),
        [anon_sym_CARET] = ACTIONS(303),
        [anon_sym_LT_LT] = ACTIONS(303),
        [anon_sym_GT_GT] = ACTIONS(303),
        [anon_sym_and] = ACTIONS(303),
        [anon_sym_or] = ACTIONS(303),
        [anon_sym_LBRACK] = ACTIONS(303),
        [sym_comment] = ACTIONS(77),
    },
    [288] = {
        [anon_sym_COMMA] = ACTIONS(651),
        [anon_sym_LPAREN] = ACTIONS(247),
        [anon_sym_RPAREN] = ACTIONS(651),
        [anon_sym_STAR] = ACTIONS(315),
        [anon_sym_PLUS] = ACTIONS(317),
        [anon_sym_DASH] = ACTIONS(317),
        [anon_sym_SLASH] = ACTIONS(319),
        [anon_sym_STAR_STAR] = ACTIONS(321),
        [anon_sym_PIPE] = ACTIONS(323),
        [anon_sym_AMP] = ACTIONS(325),
        [anon_sym_CARET] = ACTIONS(327),
        [anon_sym_LT_LT] = ACTIONS(317),
        [anon_sym_GT_GT] = ACTIONS(317),
        [anon_sym_and] = ACTIONS(325),
        [anon_sym_or] = ACTIONS(323),
        [anon_sym_LBRACK] = ACTIONS(263),
        [sym_comment] = ACTIONS(77),
    },
    [289] = {
        [anon_sym_LPAREN] = ACTIONS(183),
        [anon_sym_STAR] = ACTIONS(185),
        [anon_sym_PLUS] = ACTIONS(187),
        [anon_sym_DASH] = ACTIONS(187),
        [anon_sym_SLASH] = ACTIONS(189),
        [anon_sym_STAR_STAR] = ACTIONS(191),
        [anon_sym_PIPE] = ACTIONS(303),
        [anon_sym_AMP] = ACTIONS(195),
        [anon_sym_CARET] = ACTIONS(197),
        [anon_sym_LT_LT] = ACTIONS(187),
        [anon_sym_GT_GT] = ACTIONS(187),
        [anon_sym_and] = ACTIONS(195),
        [anon_sym_or] = ACTIONS(303),
        [anon_sym_LBRACK] = ACTIONS(303),
        [sym_comment] = ACTIONS(77),
        [sym__newline] = ACTIONS(303),
    },
    [290] = {
        [anon_sym_LPAREN] = ACTIONS(183),
        [anon_sym_STAR] = ACTIONS(185),
        [anon_sym_PLUS] = ACTIONS(187),
        [anon_sym_DASH] = ACTIONS(187),
        [anon_sym_SLASH] = ACTIONS(189),
        [anon_sym_STAR_STAR] = ACTIONS(191),
        [anon_sym_PIPE] = ACTIONS(303),
        [anon_sym_AMP] = ACTIONS(303),
        [anon_sym_CARET] = ACTIONS(197),
        [anon_sym_LT_LT] = ACTIONS(187),
        [anon_sym_GT_GT] = ACTIONS(187),
        [anon_sym_and] = ACTIONS(303),
        [anon_sym_or] = ACTIONS(303),
        [anon_sym_LBRACK] = ACTIONS(303),
        [sym_comment] = ACTIONS(77),
        [sym__newline] = ACTIONS(303),
    },
    [291] = {
        [anon_sym_LPAREN] = ACTIONS(183),
        [anon_sym_STAR] = ACTIONS(185),
        [anon_sym_PLUS] = ACTIONS(303),
        [anon_sym_DASH] = ACTIONS(303),
        [anon_sym_SLASH] = ACTIONS(189),
        [anon_sym_STAR_STAR] = ACTIONS(191),
        [anon_sym_PIPE] = ACTIONS(303),
        [anon_sym_AMP] = ACTIONS(303),
        [anon_sym_CARET] = ACTIONS(303),
        [anon_sym_LT_LT] = ACTIONS(303),
        [anon_sym_GT_GT] = ACTIONS(303),
        [anon_sym_and] = ACTIONS(303),
        [anon_sym_or] = ACTIONS(303),
        [anon_sym_LBRACK] = ACTIONS(303),
        [sym_comment] = ACTIONS(77),
        [sym__newline] = ACTIONS(303),
    },
    [292] = {
        [anon_sym_LPAREN] = ACTIONS(183),
        [anon_sym_STAR] = ACTIONS(185),
        [anon_sym_PLUS] = ACTIONS(187),
        [anon_sym_DASH] = ACTIONS(187),
        [anon_sym_SLASH] = ACTIONS(189),
        [anon_sym_STAR_STAR] = ACTIONS(191),
        [anon_sym_PIPE] = ACTIONS(303),
        [anon_sym_AMP] = ACTIONS(303),
        [anon_sym_CARET] = ACTIONS(303),
        [anon_sym_LT_LT] = ACTIONS(187),
        [anon_sym_GT_GT] = ACTIONS(187),
        [anon_sym_and] = ACTIONS(303),
        [anon_sym_or] = ACTIONS(303),
        [anon_sym_LBRACK] = ACTIONS(303),
        [sym_comment] = ACTIONS(77),
        [sym__newline] = ACTIONS(303),
    },
    [293] = {
        [anon_sym_COMMA] = ACTIONS(303),
        [anon_sym_LPAREN] = ACTIONS(183),
        [anon_sym_STAR] = ACTIONS(305),
        [anon_sym_PLUS] = ACTIONS(303),
        [anon_sym_DASH] = ACTIONS(303),
        [anon_sym_SLASH] = ACTIONS(303),
        [anon_sym_STAR_STAR] = ACTIONS(303),
        [anon_sym_PIPE] = ACTIONS(303),
        [anon_sym_AMP] = ACTIONS(303),
        [anon_sym_CARET] = ACTIONS(303),
        [anon_sym_LT_LT] = ACTIONS(303),
        [anon_sym_GT_GT] = ACTIONS(303),
        [anon_sym_and] = ACTIONS(303),
        [anon_sym_or] = ACTIONS(303),
        [anon_sym_LBRACK] = ACTIONS(303),
        [sym_comment] = ACTIONS(77),
        [sym__newline] = ACTIONS(303),
    },
    [294] = {
        [anon_sym_LPAREN] = ACTIONS(183),
        [anon_sym_STAR] = ACTIONS(305),
        [anon_sym_PLUS] = ACTIONS(303),
        [anon_sym_DASH] = ACTIONS(303),
        [anon_sym_SLASH] = ACTIONS(303),
        [anon_sym_STAR_STAR] = ACTIONS(191),
        [anon_sym_PIPE] = ACTIONS(303),
        [anon_sym_AMP] = ACTIONS(303),
        [anon_sym_CARET] = ACTIONS(303),
        [anon_sym_LT_LT] = ACTIONS(303),
        [anon_sym_GT_GT] = ACTIONS(303),
        [anon_sym_and] = ACTIONS(303),
        [anon_sym_or] = ACTIONS(303),
        [anon_sym_LBRACK] = ACTIONS(303),
        [sym_comment] = ACTIONS(77),
        [sym__newline] = ACTIONS(303),
    },
    [295] = {
        [anon_sym_COMMA] = ACTIONS(653),
        [anon_sym_LPAREN] = ACTIONS(247),
        [anon_sym_RPAREN] = ACTIONS(655),
        [anon_sym_STAR] = ACTIONS(315),
        [anon_sym_PLUS] = ACTIONS(317),
        [anon_sym_DASH] = ACTIONS(317),
        [anon_sym_SLASH] = ACTIONS(319),
        [anon_sym_STAR_STAR] = ACTIONS(321),
        [anon_sym_PIPE] = ACTIONS(323),
        [anon_sym_AMP] = ACTIONS(325),
        [anon_sym_CARET] = ACTIONS(327),
        [anon_sym_LT_LT] = ACTIONS(317),
        [anon_sym_GT_GT] = ACTIONS(317),
        [anon_sym_and] = ACTIONS(325),
        [anon_sym_or] = ACTIONS(323),
        [anon_sym_LBRACK] = ACTIONS(263),
        [sym_comment] = ACTIONS(77),
    },
    [296] = {
        [anon_sym_COMMA] = ACTIONS(653),
        [anon_sym_RPAREN] = ACTIONS(655),
        [sym_comment] = ACTIONS(77),
    },
    [297] = {
        [aux_sym_call_repeat2] = STATE(316),
        [anon_sym_COMMA] = ACTIONS(657),
        [anon_sym_RPAREN] = ACTIONS(655),
        [sym_comment] = ACTIONS(77),
    },
    [298] = {
        [anon_sym_RPAREN] = ACTIONS(655),
        [sym_comment] = ACTIONS(77),
    },
    [299] = {
        [sym__expression] = STATE(300),
        [sym_binary_operator] = STATE(43),
        [sym_unary_operator] = STATE(43),
        [sym_subscript] = STATE(43),
        [sym_call] = STATE(43),
        [sym_keyword_argument] = STATE(301),
        [sym_list_splat_argument] = STATE(302),
        [sym_dictionary_splat_argument] = STATE(303),
        [sym_list] = STATE(43),
        [sym_list_comprehension] = STATE(43),
        [sym_dictionary] = STATE(43),
        [sym_dictionary_comprehension] = STATE(43),
        [sym_set] = STATE(43),
        [sym_set_comprehension] = STATE(43),
        [anon_sym_STAR] = ACTIONS(227),
        [anon_sym_STAR_STAR] = ACTIONS(229),
        [anon_sym_not] = ACTIONS(231),
        [anon_sym_LBRACK] = ACTIONS(127),
        [anon_sym_LBRACE] = ACTIONS(129),
        [sym_number] = ACTIONS(131),
        [sym_identifier] = ACTIONS(233),
        [sym_comment] = ACTIONS(77),
    },
    [300] = {
        [anon_sym_COMMA] = ACTIONS(659),
        [anon_sym_LPAREN] = ACTIONS(247),
        [anon_sym_RPAREN] = ACTIONS(661),
        [anon_sym_STAR] = ACTIONS(315),
        [anon_sym_PLUS] = ACTIONS(317),
        [anon_sym_DASH] = ACTIONS(317),
        [anon_sym_SLASH] = ACTIONS(319),
        [anon_sym_STAR_STAR] = ACTIONS(321),
        [anon_sym_PIPE] = ACTIONS(323),
        [anon_sym_AMP] = ACTIONS(325),
        [anon_sym_CARET] = ACTIONS(327),
        [anon_sym_LT_LT] = ACTIONS(317),
        [anon_sym_GT_GT] = ACTIONS(317),
        [anon_sym_and] = ACTIONS(325),
        [anon_sym_or] = ACTIONS(323),
        [anon_sym_LBRACK] = ACTIONS(263),
        [sym_comment] = ACTIONS(77),
    },
    [301] = {
        [anon_sym_COMMA] = ACTIONS(659),
        [anon_sym_RPAREN] = ACTIONS(661),
        [sym_comment] = ACTIONS(77),
    },
    [302] = {
        [aux_sym_call_repeat2] = STATE(306),
        [anon_sym_COMMA] = ACTIONS(663),
        [anon_sym_RPAREN] = ACTIONS(661),
        [sym_comment] = ACTIONS(77),
    },
    [303] = {
        [anon_sym_RPAREN] = ACTIONS(661),
        [sym_comment] = ACTIONS(77),
    },
    [304] = {
        [anon_sym_COMMA] = ACTIONS(337),
        [anon_sym_COLON] = ACTIONS(337),
        [anon_sym_for] = ACTIONS(337),
        [anon_sym_in] = ACTIONS(337),
        [anon_sym_as] = ACTIONS(337),
        [anon_sym_LPAREN] = ACTIONS(337),
        [anon_sym_RPAREN] = ACTIONS(337),
        [anon_sym_STAR] = ACTIONS(339),
        [anon_sym_PLUS] = ACTIONS(337),
        [anon_sym_DASH] = ACTIONS(337),
        [anon_sym_SLASH] = ACTIONS(337),
        [anon_sym_STAR_STAR] = ACTIONS(337),
        [anon_sym_PIPE] = ACTIONS(337),
        [anon_sym_AMP] = ACTIONS(337),
        [anon_sym_CARET] = ACTIONS(337),
        [anon_sym_LT_LT] = ACTIONS(337),
        [anon_sym_GT_GT] = ACTIONS(337),
        [anon_sym_and] = ACTIONS(337),
        [anon_sym_or] = ACTIONS(337),
        [anon_sym_LBRACK] = ACTIONS(337),
        [anon_sym_RBRACK] = ACTIONS(337),
        [anon_sym_RBRACE] = ACTIONS(337),
        [sym_comment] = ACTIONS(77),
        [sym__newline] = ACTIONS(337),
    },
    [305] = {
        [sym__expression] = STATE(110),
        [sym_binary_operator] = STATE(43),
        [sym_unary_operator] = STATE(43),
        [sym_subscript] = STATE(43),
        [sym_call] = STATE(43),
        [sym_keyword_argument] = STATE(111),
        [sym_dictionary_splat_argument] = STATE(311),
        [sym_list] = STATE(43),
        [sym_list_comprehension] = STATE(43),
        [sym_dictionary] = STATE(43),
        [sym_dictionary_comprehension] = STATE(43),
        [sym_set] = STATE(43),
        [sym_set_comprehension] = STATE(43),
        [anon_sym_STAR_STAR] = ACTIONS(229),
        [anon_sym_not] = ACTIONS(231),
        [anon_sym_LBRACK] = ACTIONS(127),
        [anon_sym_LBRACE] = ACTIONS(129),
        [sym_number] = ACTIONS(131),
        [sym_identifier] = ACTIONS(233),
        [sym_comment] = ACTIONS(77),
    },
    [306] = {
        [anon_sym_COMMA] = ACTIONS(665),
        [anon_sym_RPAREN] = ACTIONS(667),
        [sym_comment] = ACTIONS(77),
    },
    [307] = {
        [sym__expression] = STATE(95),
        [sym_binary_operator] = STATE(43),
        [sym_unary_operator] = STATE(43),
        [sym_subscript] = STATE(43),
        [sym_call] = STATE(43),
        [sym_keyword_argument] = STATE(96),
        [sym_dictionary_splat_argument] = STATE(309),
        [sym_list] = STATE(43),
        [sym_list_comprehension] = STATE(43),
        [sym_dictionary] = STATE(43),
        [sym_dictionary_comprehension] = STATE(43),
        [sym_set] = STATE(43),
        [sym_set_comprehension] = STATE(43),
        [anon_sym_STAR_STAR] = ACTIONS(229),
        [anon_sym_not] = ACTIONS(231),
        [anon_sym_LBRACK] = ACTIONS(127),
        [anon_sym_LBRACE] = ACTIONS(129),
        [sym_number] = ACTIONS(131),
        [sym_identifier] = ACTIONS(233),
        [sym_comment] = ACTIONS(77),
    },
    [308] = {
        [anon_sym_COMMA] = ACTIONS(345),
        [anon_sym_COLON] = ACTIONS(345),
        [anon_sym_for] = ACTIONS(345),
        [anon_sym_in] = ACTIONS(345),
        [anon_sym_as] = ACTIONS(345),
        [anon_sym_LPAREN] = ACTIONS(345),
        [anon_sym_RPAREN] = ACTIONS(345),
        [anon_sym_STAR] = ACTIONS(347),
        [anon_sym_PLUS] = ACTIONS(345),
        [anon_sym_DASH] = ACTIONS(345),
        [anon_sym_SLASH] = ACTIONS(345),
        [anon_sym_STAR_STAR] = ACTIONS(345),
        [anon_sym_PIPE] = ACTIONS(345),
        [anon_sym_AMP] = ACTIONS(345),
        [anon_sym_CARET] = ACTIONS(345),
        [anon_sym_LT_LT] = ACTIONS(345),
        [anon_sym_GT_GT] = ACTIONS(345),
        [anon_sym_and] = ACTIONS(345),
        [anon_sym_or] = ACTIONS(345),
        [anon_sym_LBRACK] = ACTIONS(345),
        [anon_sym_RBRACK] = ACTIONS(345),
        [anon_sym_RBRACE] = ACTIONS(345),
        [sym_comment] = ACTIONS(77),
        [sym__newline] = ACTIONS(345),
    },
    [309] = {
        [anon_sym_RPAREN] = ACTIONS(669),
        [sym_comment] = ACTIONS(77),
    },
    [310] = {
        [anon_sym_COMMA] = ACTIONS(353),
        [anon_sym_COLON] = ACTIONS(353),
        [anon_sym_for] = ACTIONS(353),
        [anon_sym_in] = ACTIONS(353),
        [anon_sym_as] = ACTIONS(353),
        [anon_sym_LPAREN] = ACTIONS(353),
        [anon_sym_RPAREN] = ACTIONS(353),
        [anon_sym_STAR] = ACTIONS(355),
        [anon_sym_PLUS] = ACTIONS(353),
        [anon_sym_DASH] = ACTIONS(353),
        [anon_sym_SLASH] = ACTIONS(353),
        [anon_sym_STAR_STAR] = ACTIONS(353),
        [anon_sym_PIPE] = ACTIONS(353),
        [anon_sym_AMP] = ACTIONS(353),
        [anon_sym_CARET] = ACTIONS(353),
        [anon_sym_LT_LT] = ACTIONS(353),
        [anon_sym_GT_GT] = ACTIONS(353),
        [anon_sym_and] = ACTIONS(353),
        [anon_sym_or] = ACTIONS(353),
        [anon_sym_LBRACK] = ACTIONS(353),
        [anon_sym_RBRACK] = ACTIONS(353),
        [anon_sym_RBRACE] = ACTIONS(353),
        [sym_comment] = ACTIONS(77),
        [sym__newline] = ACTIONS(353),
    },
    [311] = {
        [anon_sym_RPAREN] = ACTIONS(671),
        [sym_comment] = ACTIONS(77),
    },
    [312] = {
        [anon_sym_COMMA] = ACTIONS(361),
        [anon_sym_COLON] = ACTIONS(361),
        [anon_sym_for] = ACTIONS(361),
        [anon_sym_in] = ACTIONS(361),
        [anon_sym_as] = ACTIONS(361),
        [anon_sym_LPAREN] = ACTIONS(361),
        [anon_sym_RPAREN] = ACTIONS(361),
        [anon_sym_STAR] = ACTIONS(363),
        [anon_sym_PLUS] = ACTIONS(361),
        [anon_sym_DASH] = ACTIONS(361),
        [anon_sym_SLASH] = ACTIONS(361),
        [anon_sym_STAR_STAR] = ACTIONS(361),
        [anon_sym_PIPE] = ACTIONS(361),
        [anon_sym_AMP] = ACTIONS(361),
        [anon_sym_CARET] = ACTIONS(361),
        [anon_sym_LT_LT] = ACTIONS(361),
        [anon_sym_GT_GT] = ACTIONS(361),
        [anon_sym_and] = ACTIONS(361),
        [anon_sym_or] = ACTIONS(361),
        [anon_sym_LBRACK] = ACTIONS(361),
        [anon_sym_RBRACK] = ACTIONS(361),
        [anon_sym_RBRACE] = ACTIONS(361),
        [sym_comment] = ACTIONS(77),
        [sym__newline] = ACTIONS(361),
    },
    [313] = {
        [anon_sym_RPAREN] = ACTIONS(667),
        [anon_sym_STAR] = ACTIONS(365),
        [anon_sym_STAR_STAR] = ACTIONS(367),
        [anon_sym_not] = ACTIONS(365),
        [anon_sym_LBRACK] = ACTIONS(367),
        [anon_sym_LBRACE] = ACTIONS(367),
        [sym_number] = ACTIONS(365),
        [sym_identifier] = ACTIONS(369),
        [sym_comment] = ACTIONS(77),
    },
    [314] = {
        [anon_sym_COMMA] = ACTIONS(371),
        [anon_sym_COLON] = ACTIONS(371),
        [anon_sym_for] = ACTIONS(371),
        [anon_sym_in] = ACTIONS(371),
        [anon_sym_as] = ACTIONS(371),
        [anon_sym_LPAREN] = ACTIONS(371),
        [anon_sym_RPAREN] = ACTIONS(371),
        [anon_sym_STAR] = ACTIONS(373),
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
        [sym_comment] = ACTIONS(77),
        [sym__newline] = ACTIONS(371),
    },
    [315] = {
        [sym__expression] = STATE(110),
        [sym_binary_operator] = STATE(43),
        [sym_unary_operator] = STATE(43),
        [sym_subscript] = STATE(43),
        [sym_call] = STATE(43),
        [sym_keyword_argument] = STATE(111),
        [sym_dictionary_splat_argument] = STATE(318),
        [sym_list] = STATE(43),
        [sym_list_comprehension] = STATE(43),
        [sym_dictionary] = STATE(43),
        [sym_dictionary_comprehension] = STATE(43),
        [sym_set] = STATE(43),
        [sym_set_comprehension] = STATE(43),
        [anon_sym_STAR_STAR] = ACTIONS(229),
        [anon_sym_not] = ACTIONS(231),
        [anon_sym_LBRACK] = ACTIONS(127),
        [anon_sym_LBRACE] = ACTIONS(129),
        [sym_number] = ACTIONS(131),
        [sym_identifier] = ACTIONS(233),
        [sym_comment] = ACTIONS(77),
    },
    [316] = {
        [anon_sym_COMMA] = ACTIONS(673),
        [anon_sym_RPAREN] = ACTIONS(661),
        [sym_comment] = ACTIONS(77),
    },
    [317] = {
        [sym__expression] = STATE(95),
        [sym_binary_operator] = STATE(43),
        [sym_unary_operator] = STATE(43),
        [sym_subscript] = STATE(43),
        [sym_call] = STATE(43),
        [sym_keyword_argument] = STATE(96),
        [sym_dictionary_splat_argument] = STATE(311),
        [sym_list] = STATE(43),
        [sym_list_comprehension] = STATE(43),
        [sym_dictionary] = STATE(43),
        [sym_dictionary_comprehension] = STATE(43),
        [sym_set] = STATE(43),
        [sym_set_comprehension] = STATE(43),
        [anon_sym_STAR_STAR] = ACTIONS(229),
        [anon_sym_not] = ACTIONS(231),
        [anon_sym_LBRACK] = ACTIONS(127),
        [anon_sym_LBRACE] = ACTIONS(129),
        [sym_number] = ACTIONS(131),
        [sym_identifier] = ACTIONS(233),
        [sym_comment] = ACTIONS(77),
    },
    [318] = {
        [anon_sym_RPAREN] = ACTIONS(667),
        [sym_comment] = ACTIONS(77),
    },
    [319] = {
        [anon_sym_RPAREN] = ACTIONS(661),
        [anon_sym_STAR] = ACTIONS(377),
        [anon_sym_STAR_STAR] = ACTIONS(379),
        [anon_sym_not] = ACTIONS(377),
        [anon_sym_LBRACK] = ACTIONS(379),
        [anon_sym_LBRACE] = ACTIONS(379),
        [sym_number] = ACTIONS(377),
        [sym_identifier] = ACTIONS(381),
        [sym_comment] = ACTIONS(77),
    },
    [320] = {
        [ts_builtin_sym_end] = ACTIONS(675),
        [anon_sym_SEMI] = ACTIONS(675),
        [anon_sym_print] = ACTIONS(677),
        [anon_sym_return] = ACTIONS(677),
        [anon_sym_del] = ACTIONS(677),
        [sym_pass_statement] = ACTIONS(677),
        [sym_break_statement] = ACTIONS(677),
        [sym_continue_statement] = ACTIONS(677),
        [anon_sym_if] = ACTIONS(677),
        [anon_sym_for] = ACTIONS(677),
        [anon_sym_while] = ACTIONS(677),
        [anon_sym_try] = ACTIONS(677),
        [anon_sym_with] = ACTIONS(677),
        [anon_sym_def] = ACTIONS(677),
        [anon_sym_class] = ACTIONS(677),
        [anon_sym_AT] = ACTIONS(675),
        [anon_sym_not] = ACTIONS(677),
        [anon_sym_LBRACK] = ACTIONS(675),
        [anon_sym_LBRACE] = ACTIONS(675),
        [sym_number] = ACTIONS(677),
        [sym_identifier] = ACTIONS(679),
        [sym_comment] = ACTIONS(77),
        [sym__newline] = ACTIONS(675),
    },
    [321] = {
        [anon_sym_COMMA] = ACTIONS(385),
        [anon_sym_COLON] = ACTIONS(385),
        [anon_sym_for] = ACTIONS(385),
        [anon_sym_in] = ACTIONS(385),
        [anon_sym_as] = ACTIONS(385),
        [anon_sym_LPAREN] = ACTIONS(385),
        [anon_sym_RPAREN] = ACTIONS(385),
        [anon_sym_STAR] = ACTIONS(387),
        [anon_sym_PLUS] = ACTIONS(385),
        [anon_sym_DASH] = ACTIONS(385),
        [anon_sym_SLASH] = ACTIONS(385),
        [anon_sym_STAR_STAR] = ACTIONS(385),
        [anon_sym_PIPE] = ACTIONS(385),
        [anon_sym_AMP] = ACTIONS(385),
        [anon_sym_CARET] = ACTIONS(385),
        [anon_sym_LT_LT] = ACTIONS(385),
        [anon_sym_GT_GT] = ACTIONS(385),
        [anon_sym_and] = ACTIONS(385),
        [anon_sym_or] = ACTIONS(385),
        [anon_sym_LBRACK] = ACTIONS(385),
        [anon_sym_RBRACK] = ACTIONS(385),
        [anon_sym_RBRACE] = ACTIONS(385),
        [sym_comment] = ACTIONS(77),
        [sym__newline] = ACTIONS(385),
    },
    [322] = {
        [aux_sym_print_statement_repeat1] = STATE(338),
        [anon_sym_COMMA] = ACTIONS(681),
        [anon_sym_COLON] = ACTIONS(391),
        [anon_sym_for] = ACTIONS(683),
        [anon_sym_LPAREN] = ACTIONS(247),
        [anon_sym_STAR] = ACTIONS(395),
        [anon_sym_PLUS] = ACTIONS(397),
        [anon_sym_DASH] = ACTIONS(397),
        [anon_sym_SLASH] = ACTIONS(399),
        [anon_sym_STAR_STAR] = ACTIONS(401),
        [anon_sym_PIPE] = ACTIONS(403),
        [anon_sym_AMP] = ACTIONS(405),
        [anon_sym_CARET] = ACTIONS(407),
        [anon_sym_LT_LT] = ACTIONS(397),
        [anon_sym_GT_GT] = ACTIONS(397),
        [anon_sym_and] = ACTIONS(405),
        [anon_sym_or] = ACTIONS(403),
        [anon_sym_LBRACK] = ACTIONS(263),
        [anon_sym_RBRACE] = ACTIONS(685),
        [sym_comment] = ACTIONS(77),
    },
    [323] = {
        [aux_sym_dictionary_repeat1] = STATE(327),
        [anon_sym_COMMA] = ACTIONS(687),
        [anon_sym_for] = ACTIONS(689),
        [anon_sym_RBRACE] = ACTIONS(691),
        [sym_comment] = ACTIONS(77),
    },
    [324] = {
        [sym__expression] = STATE(135),
        [sym_binary_operator] = STATE(43),
        [sym_unary_operator] = STATE(43),
        [sym_subscript] = STATE(43),
        [sym_call] = STATE(43),
        [sym_list] = STATE(43),
        [sym_list_comprehension] = STATE(43),
        [sym_dictionary] = STATE(43),
        [sym_dictionary_comprehension] = STATE(43),
        [sym_pair] = STATE(196),
        [sym_set] = STATE(43),
        [sym_set_comprehension] = STATE(43),
        [anon_sym_not] = ACTIONS(125),
        [anon_sym_LBRACK] = ACTIONS(127),
        [anon_sym_LBRACE] = ACTIONS(129),
        [anon_sym_RBRACE] = ACTIONS(693),
        [sym_number] = ACTIONS(131),
        [sym_identifier] = ACTIONS(133),
        [sym_comment] = ACTIONS(77),
    },
    [325] = {
        [sym_expression_list] = STATE(331),
        [sym__expression] = STATE(164),
        [sym_binary_operator] = STATE(43),
        [sym_unary_operator] = STATE(43),
        [sym_subscript] = STATE(43),
        [sym_call] = STATE(43),
        [sym_list] = STATE(43),
        [sym_list_comprehension] = STATE(43),
        [sym_dictionary] = STATE(43),
        [sym_dictionary_comprehension] = STATE(43),
        [sym_set] = STATE(43),
        [sym_set_comprehension] = STATE(43),
        [anon_sym_not] = ACTIONS(135),
        [anon_sym_LBRACK] = ACTIONS(127),
        [anon_sym_LBRACE] = ACTIONS(129),
        [sym_number] = ACTIONS(131),
        [sym_identifier] = ACTIONS(133),
        [sym_comment] = ACTIONS(77),
    },
    [326] = {
        [anon_sym_COMMA] = ACTIONS(419),
        [anon_sym_COLON] = ACTIONS(419),
        [anon_sym_for] = ACTIONS(419),
        [anon_sym_in] = ACTIONS(419),
        [anon_sym_as] = ACTIONS(419),
        [anon_sym_LPAREN] = ACTIONS(419),
        [anon_sym_RPAREN] = ACTIONS(419),
        [anon_sym_STAR] = ACTIONS(421),
        [anon_sym_PLUS] = ACTIONS(419),
        [anon_sym_DASH] = ACTIONS(419),
        [anon_sym_SLASH] = ACTIONS(419),
        [anon_sym_STAR_STAR] = ACTIONS(419),
        [anon_sym_PIPE] = ACTIONS(419),
        [anon_sym_AMP] = ACTIONS(419),
        [anon_sym_CARET] = ACTIONS(419),
        [anon_sym_LT_LT] = ACTIONS(419),
        [anon_sym_GT_GT] = ACTIONS(419),
        [anon_sym_and] = ACTIONS(419),
        [anon_sym_or] = ACTIONS(419),
        [anon_sym_LBRACK] = ACTIONS(419),
        [anon_sym_RBRACK] = ACTIONS(419),
        [anon_sym_RBRACE] = ACTIONS(419),
        [sym_comment] = ACTIONS(77),
        [sym__newline] = ACTIONS(419),
    },
    [327] = {
        [anon_sym_COMMA] = ACTIONS(695),
        [anon_sym_RBRACE] = ACTIONS(693),
        [sym_comment] = ACTIONS(77),
    },
    [328] = {
        [sym__expression] = STATE(135),
        [sym_binary_operator] = STATE(43),
        [sym_unary_operator] = STATE(43),
        [sym_subscript] = STATE(43),
        [sym_call] = STATE(43),
        [sym_list] = STATE(43),
        [sym_list_comprehension] = STATE(43),
        [sym_dictionary] = STATE(43),
        [sym_dictionary_comprehension] = STATE(43),
        [sym_pair] = STATE(136),
        [sym_set] = STATE(43),
        [sym_set_comprehension] = STATE(43),
        [anon_sym_not] = ACTIONS(125),
        [anon_sym_LBRACK] = ACTIONS(127),
        [anon_sym_LBRACE] = ACTIONS(129),
        [anon_sym_RBRACE] = ACTIONS(697),
        [sym_number] = ACTIONS(131),
        [sym_identifier] = ACTIONS(133),
        [sym_comment] = ACTIONS(77),
    },
    [329] = {
        [anon_sym_COMMA] = ACTIONS(427),
        [anon_sym_COLON] = ACTIONS(427),
        [anon_sym_for] = ACTIONS(427),
        [anon_sym_in] = ACTIONS(427),
        [anon_sym_as] = ACTIONS(427),
        [anon_sym_LPAREN] = ACTIONS(427),
        [anon_sym_RPAREN] = ACTIONS(427),
        [anon_sym_STAR] = ACTIONS(429),
        [anon_sym_PLUS] = ACTIONS(427),
        [anon_sym_DASH] = ACTIONS(427),
        [anon_sym_SLASH] = ACTIONS(427),
        [anon_sym_STAR_STAR] = ACTIONS(427),
        [anon_sym_PIPE] = ACTIONS(427),
        [anon_sym_AMP] = ACTIONS(427),
        [anon_sym_CARET] = ACTIONS(427),
        [anon_sym_LT_LT] = ACTIONS(427),
        [anon_sym_GT_GT] = ACTIONS(427),
        [anon_sym_and] = ACTIONS(427),
        [anon_sym_or] = ACTIONS(427),
        [anon_sym_LBRACK] = ACTIONS(427),
        [anon_sym_RBRACK] = ACTIONS(427),
        [anon_sym_RBRACE] = ACTIONS(427),
        [sym_comment] = ACTIONS(77),
        [sym__newline] = ACTIONS(427),
    },
    [330] = {
        [anon_sym_COMMA] = ACTIONS(431),
        [anon_sym_COLON] = ACTIONS(431),
        [anon_sym_for] = ACTIONS(431),
        [anon_sym_in] = ACTIONS(431),
        [anon_sym_as] = ACTIONS(431),
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
        [sym_comment] = ACTIONS(77),
        [sym__newline] = ACTIONS(431),
    },
    [331] = {
        [anon_sym_in] = ACTIONS(699),
        [sym_comment] = ACTIONS(77),
    },
    [332] = {
        [sym__expression] = STATE(333),
        [sym_binary_operator] = STATE(43),
        [sym_unary_operator] = STATE(43),
        [sym_subscript] = STATE(43),
        [sym_call] = STATE(43),
        [sym_list] = STATE(43),
        [sym_list_comprehension] = STATE(43),
        [sym_dictionary] = STATE(43),
        [sym_dictionary_comprehension] = STATE(43),
        [sym_set] = STATE(43),
        [sym_set_comprehension] = STATE(43),
        [anon_sym_not] = ACTIONS(499),
        [anon_sym_LBRACK] = ACTIONS(127),
        [anon_sym_LBRACE] = ACTIONS(129),
        [sym_number] = ACTIONS(131),
        [sym_identifier] = ACTIONS(133),
        [sym_comment] = ACTIONS(77),
    },
    [333] = {
        [anon_sym_LPAREN] = ACTIONS(247),
        [anon_sym_STAR] = ACTIONS(501),
        [anon_sym_PLUS] = ACTIONS(503),
        [anon_sym_DASH] = ACTIONS(503),
        [anon_sym_SLASH] = ACTIONS(505),
        [anon_sym_STAR_STAR] = ACTIONS(507),
        [anon_sym_PIPE] = ACTIONS(509),
        [anon_sym_AMP] = ACTIONS(511),
        [anon_sym_CARET] = ACTIONS(513),
        [anon_sym_LT_LT] = ACTIONS(503),
        [anon_sym_GT_GT] = ACTIONS(503),
        [anon_sym_and] = ACTIONS(511),
        [anon_sym_or] = ACTIONS(509),
        [anon_sym_LBRACK] = ACTIONS(263),
        [anon_sym_RBRACE] = ACTIONS(701),
        [sym_comment] = ACTIONS(77),
    },
    [334] = {
        [anon_sym_COMMA] = ACTIONS(517),
        [anon_sym_COLON] = ACTIONS(517),
        [anon_sym_for] = ACTIONS(517),
        [anon_sym_in] = ACTIONS(517),
        [anon_sym_as] = ACTIONS(517),
        [anon_sym_LPAREN] = ACTIONS(517),
        [anon_sym_RPAREN] = ACTIONS(517),
        [anon_sym_STAR] = ACTIONS(519),
        [anon_sym_PLUS] = ACTIONS(517),
        [anon_sym_DASH] = ACTIONS(517),
        [anon_sym_SLASH] = ACTIONS(517),
        [anon_sym_STAR_STAR] = ACTIONS(517),
        [anon_sym_PIPE] = ACTIONS(517),
        [anon_sym_AMP] = ACTIONS(517),
        [anon_sym_CARET] = ACTIONS(517),
        [anon_sym_LT_LT] = ACTIONS(517),
        [anon_sym_GT_GT] = ACTIONS(517),
        [anon_sym_and] = ACTIONS(517),
        [anon_sym_or] = ACTIONS(517),
        [anon_sym_LBRACK] = ACTIONS(517),
        [anon_sym_RBRACK] = ACTIONS(517),
        [anon_sym_RBRACE] = ACTIONS(517),
        [sym_comment] = ACTIONS(77),
        [sym__newline] = ACTIONS(517),
    },
    [335] = {
        [sym__expression] = STATE(234),
        [sym_binary_operator] = STATE(43),
        [sym_unary_operator] = STATE(43),
        [sym_subscript] = STATE(43),
        [sym_call] = STATE(43),
        [sym_list] = STATE(43),
        [sym_list_comprehension] = STATE(43),
        [sym_dictionary] = STATE(43),
        [sym_dictionary_comprehension] = STATE(43),
        [sym_set] = STATE(43),
        [sym_set_comprehension] = STATE(43),
        [anon_sym_not] = ACTIONS(453),
        [anon_sym_LBRACK] = ACTIONS(127),
        [anon_sym_LBRACE] = ACTIONS(129),
        [anon_sym_RBRACE] = ACTIONS(703),
        [sym_number] = ACTIONS(131),
        [sym_identifier] = ACTIONS(133),
        [sym_comment] = ACTIONS(77),
    },
    [336] = {
        [sym_expression_list] = STATE(342),
        [sym__expression] = STATE(164),
        [sym_binary_operator] = STATE(43),
        [sym_unary_operator] = STATE(43),
        [sym_subscript] = STATE(43),
        [sym_call] = STATE(43),
        [sym_list] = STATE(43),
        [sym_list_comprehension] = STATE(43),
        [sym_dictionary] = STATE(43),
        [sym_dictionary_comprehension] = STATE(43),
        [sym_set] = STATE(43),
        [sym_set_comprehension] = STATE(43),
        [anon_sym_not] = ACTIONS(135),
        [anon_sym_LBRACK] = ACTIONS(127),
        [anon_sym_LBRACE] = ACTIONS(129),
        [sym_number] = ACTIONS(131),
        [sym_identifier] = ACTIONS(133),
        [sym_comment] = ACTIONS(77),
    },
    [337] = {
        [anon_sym_COMMA] = ACTIONS(527),
        [anon_sym_COLON] = ACTIONS(527),
        [anon_sym_for] = ACTIONS(527),
        [anon_sym_in] = ACTIONS(527),
        [anon_sym_as] = ACTIONS(527),
        [anon_sym_LPAREN] = ACTIONS(527),
        [anon_sym_RPAREN] = ACTIONS(527),
        [anon_sym_STAR] = ACTIONS(529),
        [anon_sym_PLUS] = ACTIONS(527),
        [anon_sym_DASH] = ACTIONS(527),
        [anon_sym_SLASH] = ACTIONS(527),
        [anon_sym_STAR_STAR] = ACTIONS(527),
        [anon_sym_PIPE] = ACTIONS(527),
        [anon_sym_AMP] = ACTIONS(527),
        [anon_sym_CARET] = ACTIONS(527),
        [anon_sym_LT_LT] = ACTIONS(527),
        [anon_sym_GT_GT] = ACTIONS(527),
        [anon_sym_and] = ACTIONS(527),
        [anon_sym_or] = ACTIONS(527),
        [anon_sym_LBRACK] = ACTIONS(527),
        [anon_sym_RBRACK] = ACTIONS(527),
        [anon_sym_RBRACE] = ACTIONS(527),
        [sym_comment] = ACTIONS(77),
        [sym__newline] = ACTIONS(527),
    },
    [338] = {
        [anon_sym_COMMA] = ACTIONS(705),
        [anon_sym_RBRACE] = ACTIONS(703),
        [sym_comment] = ACTIONS(77),
    },
    [339] = {
        [sym__expression] = STATE(211),
        [sym_binary_operator] = STATE(43),
        [sym_unary_operator] = STATE(43),
        [sym_subscript] = STATE(43),
        [sym_call] = STATE(43),
        [sym_list] = STATE(43),
        [sym_list_comprehension] = STATE(43),
        [sym_dictionary] = STATE(43),
        [sym_dictionary_comprehension] = STATE(43),
        [sym_set] = STATE(43),
        [sym_set_comprehension] = STATE(43),
        [anon_sym_not] = ACTIONS(453),
        [anon_sym_LBRACK] = ACTIONS(127),
        [anon_sym_LBRACE] = ACTIONS(129),
        [anon_sym_RBRACE] = ACTIONS(707),
        [sym_number] = ACTIONS(131),
        [sym_identifier] = ACTIONS(133),
        [sym_comment] = ACTIONS(77),
    },
    [340] = {
        [anon_sym_COMMA] = ACTIONS(535),
        [anon_sym_COLON] = ACTIONS(535),
        [anon_sym_for] = ACTIONS(535),
        [anon_sym_in] = ACTIONS(535),
        [anon_sym_as] = ACTIONS(535),
        [anon_sym_LPAREN] = ACTIONS(535),
        [anon_sym_RPAREN] = ACTIONS(535),
        [anon_sym_STAR] = ACTIONS(537),
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
        [sym_comment] = ACTIONS(77),
        [sym__newline] = ACTIONS(535),
    },
    [341] = {
        [anon_sym_COMMA] = ACTIONS(539),
        [anon_sym_COLON] = ACTIONS(539),
        [anon_sym_for] = ACTIONS(539),
        [anon_sym_in] = ACTIONS(539),
        [anon_sym_as] = ACTIONS(539),
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
        [sym_comment] = ACTIONS(77),
        [sym__newline] = ACTIONS(539),
    },
    [342] = {
        [anon_sym_in] = ACTIONS(709),
        [sym_comment] = ACTIONS(77),
    },
    [343] = {
        [sym__expression] = STATE(344),
        [sym_binary_operator] = STATE(43),
        [sym_unary_operator] = STATE(43),
        [sym_subscript] = STATE(43),
        [sym_call] = STATE(43),
        [sym_list] = STATE(43),
        [sym_list_comprehension] = STATE(43),
        [sym_dictionary] = STATE(43),
        [sym_dictionary_comprehension] = STATE(43),
        [sym_set] = STATE(43),
        [sym_set_comprehension] = STATE(43),
        [anon_sym_not] = ACTIONS(499),
        [anon_sym_LBRACK] = ACTIONS(127),
        [anon_sym_LBRACE] = ACTIONS(129),
        [sym_number] = ACTIONS(131),
        [sym_identifier] = ACTIONS(133),
        [sym_comment] = ACTIONS(77),
    },
    [344] = {
        [anon_sym_LPAREN] = ACTIONS(247),
        [anon_sym_STAR] = ACTIONS(501),
        [anon_sym_PLUS] = ACTIONS(503),
        [anon_sym_DASH] = ACTIONS(503),
        [anon_sym_SLASH] = ACTIONS(505),
        [anon_sym_STAR_STAR] = ACTIONS(507),
        [anon_sym_PIPE] = ACTIONS(509),
        [anon_sym_AMP] = ACTIONS(511),
        [anon_sym_CARET] = ACTIONS(513),
        [anon_sym_LT_LT] = ACTIONS(503),
        [anon_sym_GT_GT] = ACTIONS(503),
        [anon_sym_and] = ACTIONS(511),
        [anon_sym_or] = ACTIONS(509),
        [anon_sym_LBRACK] = ACTIONS(263),
        [anon_sym_RBRACE] = ACTIONS(711),
        [sym_comment] = ACTIONS(77),
    },
    [345] = {
        [anon_sym_COMMA] = ACTIONS(547),
        [anon_sym_COLON] = ACTIONS(547),
        [anon_sym_for] = ACTIONS(547),
        [anon_sym_in] = ACTIONS(547),
        [anon_sym_as] = ACTIONS(547),
        [anon_sym_LPAREN] = ACTIONS(547),
        [anon_sym_RPAREN] = ACTIONS(547),
        [anon_sym_STAR] = ACTIONS(549),
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
        [sym_comment] = ACTIONS(77),
        [sym__newline] = ACTIONS(547),
    },
    [346] = {
        [anon_sym_COMMA] = ACTIONS(565),
        [anon_sym_COLON] = ACTIONS(565),
        [anon_sym_for] = ACTIONS(565),
        [anon_sym_in] = ACTIONS(565),
        [anon_sym_as] = ACTIONS(565),
        [anon_sym_LPAREN] = ACTIONS(565),
        [anon_sym_RPAREN] = ACTIONS(565),
        [anon_sym_STAR] = ACTIONS(567),
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
        [sym_comment] = ACTIONS(77),
        [sym__newline] = ACTIONS(565),
    },
    [347] = {
        [aux_sym_print_statement_repeat1] = STATE(351),
        [anon_sym_COMMA] = ACTIONS(713),
        [anon_sym_for] = ACTIONS(715),
        [anon_sym_LPAREN] = ACTIONS(247),
        [anon_sym_STAR] = ACTIONS(573),
        [anon_sym_PLUS] = ACTIONS(575),
        [anon_sym_DASH] = ACTIONS(575),
        [anon_sym_SLASH] = ACTIONS(577),
        [anon_sym_STAR_STAR] = ACTIONS(579),
        [anon_sym_PIPE] = ACTIONS(581),
        [anon_sym_AMP] = ACTIONS(583),
        [anon_sym_CARET] = ACTIONS(585),
        [anon_sym_LT_LT] = ACTIONS(575),
        [anon_sym_GT_GT] = ACTIONS(575),
        [anon_sym_and] = ACTIONS(583),
        [anon_sym_or] = ACTIONS(581),
        [anon_sym_LBRACK] = ACTIONS(263),
        [anon_sym_RBRACK] = ACTIONS(717),
        [sym_comment] = ACTIONS(77),
    },
    [348] = {
        [sym__expression] = STATE(273),
        [sym_binary_operator] = STATE(43),
        [sym_unary_operator] = STATE(43),
        [sym_subscript] = STATE(43),
        [sym_call] = STATE(43),
        [sym_list] = STATE(43),
        [sym_list_comprehension] = STATE(43),
        [sym_dictionary] = STATE(43),
        [sym_dictionary_comprehension] = STATE(43),
        [sym_set] = STATE(43),
        [sym_set_comprehension] = STATE(43),
        [anon_sym_not] = ACTIONS(235),
        [anon_sym_LBRACK] = ACTIONS(127),
        [anon_sym_RBRACK] = ACTIONS(719),
        [anon_sym_LBRACE] = ACTIONS(129),
        [sym_number] = ACTIONS(131),
        [sym_identifier] = ACTIONS(133),
        [sym_comment] = ACTIONS(77),
    },
    [349] = {
        [sym_expression_list] = STATE(355),
        [sym__expression] = STATE(164),
        [sym_binary_operator] = STATE(43),
        [sym_unary_operator] = STATE(43),
        [sym_subscript] = STATE(43),
        [sym_call] = STATE(43),
        [sym_list] = STATE(43),
        [sym_list_comprehension] = STATE(43),
        [sym_dictionary] = STATE(43),
        [sym_dictionary_comprehension] = STATE(43),
        [sym_set] = STATE(43),
        [sym_set_comprehension] = STATE(43),
        [anon_sym_not] = ACTIONS(135),
        [anon_sym_LBRACK] = ACTIONS(127),
        [anon_sym_LBRACE] = ACTIONS(129),
        [sym_number] = ACTIONS(131),
        [sym_identifier] = ACTIONS(133),
        [sym_comment] = ACTIONS(77),
    },
    [350] = {
        [anon_sym_COMMA] = ACTIONS(591),
        [anon_sym_COLON] = ACTIONS(591),
        [anon_sym_for] = ACTIONS(591),
        [anon_sym_in] = ACTIONS(591),
        [anon_sym_as] = ACTIONS(591),
        [anon_sym_LPAREN] = ACTIONS(591),
        [anon_sym_RPAREN] = ACTIONS(591),
        [anon_sym_STAR] = ACTIONS(593),
        [anon_sym_PLUS] = ACTIONS(591),
        [anon_sym_DASH] = ACTIONS(591),
        [anon_sym_SLASH] = ACTIONS(591),
        [anon_sym_STAR_STAR] = ACTIONS(591),
        [anon_sym_PIPE] = ACTIONS(591),
        [anon_sym_AMP] = ACTIONS(591),
        [anon_sym_CARET] = ACTIONS(591),
        [anon_sym_LT_LT] = ACTIONS(591),
        [anon_sym_GT_GT] = ACTIONS(591),
        [anon_sym_and] = ACTIONS(591),
        [anon_sym_or] = ACTIONS(591),
        [anon_sym_LBRACK] = ACTIONS(591),
        [anon_sym_RBRACK] = ACTIONS(591),
        [anon_sym_RBRACE] = ACTIONS(591),
        [sym_comment] = ACTIONS(77),
        [sym__newline] = ACTIONS(591),
    },
    [351] = {
        [anon_sym_COMMA] = ACTIONS(721),
        [anon_sym_RBRACK] = ACTIONS(719),
        [sym_comment] = ACTIONS(77),
    },
    [352] = {
        [sym__expression] = STATE(251),
        [sym_binary_operator] = STATE(43),
        [sym_unary_operator] = STATE(43),
        [sym_subscript] = STATE(43),
        [sym_call] = STATE(43),
        [sym_list] = STATE(43),
        [sym_list_comprehension] = STATE(43),
        [sym_dictionary] = STATE(43),
        [sym_dictionary_comprehension] = STATE(43),
        [sym_set] = STATE(43),
        [sym_set_comprehension] = STATE(43),
        [anon_sym_not] = ACTIONS(235),
        [anon_sym_LBRACK] = ACTIONS(127),
        [anon_sym_RBRACK] = ACTIONS(723),
        [anon_sym_LBRACE] = ACTIONS(129),
        [sym_number] = ACTIONS(131),
        [sym_identifier] = ACTIONS(133),
        [sym_comment] = ACTIONS(77),
    },
    [353] = {
        [anon_sym_COMMA] = ACTIONS(599),
        [anon_sym_COLON] = ACTIONS(599),
        [anon_sym_for] = ACTIONS(599),
        [anon_sym_in] = ACTIONS(599),
        [anon_sym_as] = ACTIONS(599),
        [anon_sym_LPAREN] = ACTIONS(599),
        [anon_sym_RPAREN] = ACTIONS(599),
        [anon_sym_STAR] = ACTIONS(601),
        [anon_sym_PLUS] = ACTIONS(599),
        [anon_sym_DASH] = ACTIONS(599),
        [anon_sym_SLASH] = ACTIONS(599),
        [anon_sym_STAR_STAR] = ACTIONS(599),
        [anon_sym_PIPE] = ACTIONS(599),
        [anon_sym_AMP] = ACTIONS(599),
        [anon_sym_CARET] = ACTIONS(599),
        [anon_sym_LT_LT] = ACTIONS(599),
        [anon_sym_GT_GT] = ACTIONS(599),
        [anon_sym_and] = ACTIONS(599),
        [anon_sym_or] = ACTIONS(599),
        [anon_sym_LBRACK] = ACTIONS(599),
        [anon_sym_RBRACK] = ACTIONS(599),
        [anon_sym_RBRACE] = ACTIONS(599),
        [sym_comment] = ACTIONS(77),
        [sym__newline] = ACTIONS(599),
    },
    [354] = {
        [anon_sym_COMMA] = ACTIONS(603),
        [anon_sym_COLON] = ACTIONS(603),
        [anon_sym_for] = ACTIONS(603),
        [anon_sym_in] = ACTIONS(603),
        [anon_sym_as] = ACTIONS(603),
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
        [sym_comment] = ACTIONS(77),
        [sym__newline] = ACTIONS(603),
    },
    [355] = {
        [anon_sym_in] = ACTIONS(725),
        [sym_comment] = ACTIONS(77),
    },
    [356] = {
        [sym__expression] = STATE(357),
        [sym_binary_operator] = STATE(43),
        [sym_unary_operator] = STATE(43),
        [sym_subscript] = STATE(43),
        [sym_call] = STATE(43),
        [sym_list] = STATE(43),
        [sym_list_comprehension] = STATE(43),
        [sym_dictionary] = STATE(43),
        [sym_dictionary_comprehension] = STATE(43),
        [sym_set] = STATE(43),
        [sym_set_comprehension] = STATE(43),
        [anon_sym_not] = ACTIONS(609),
        [anon_sym_LBRACK] = ACTIONS(127),
        [anon_sym_LBRACE] = ACTIONS(129),
        [sym_number] = ACTIONS(131),
        [sym_identifier] = ACTIONS(133),
        [sym_comment] = ACTIONS(77),
    },
    [357] = {
        [anon_sym_LPAREN] = ACTIONS(247),
        [anon_sym_STAR] = ACTIONS(611),
        [anon_sym_PLUS] = ACTIONS(613),
        [anon_sym_DASH] = ACTIONS(613),
        [anon_sym_SLASH] = ACTIONS(615),
        [anon_sym_STAR_STAR] = ACTIONS(617),
        [anon_sym_PIPE] = ACTIONS(619),
        [anon_sym_AMP] = ACTIONS(621),
        [anon_sym_CARET] = ACTIONS(623),
        [anon_sym_LT_LT] = ACTIONS(613),
        [anon_sym_GT_GT] = ACTIONS(613),
        [anon_sym_and] = ACTIONS(621),
        [anon_sym_or] = ACTIONS(619),
        [anon_sym_LBRACK] = ACTIONS(263),
        [anon_sym_RBRACK] = ACTIONS(727),
        [sym_comment] = ACTIONS(77),
    },
    [358] = {
        [anon_sym_COMMA] = ACTIONS(627),
        [anon_sym_COLON] = ACTIONS(627),
        [anon_sym_for] = ACTIONS(627),
        [anon_sym_in] = ACTIONS(627),
        [anon_sym_as] = ACTIONS(627),
        [anon_sym_LPAREN] = ACTIONS(627),
        [anon_sym_RPAREN] = ACTIONS(627),
        [anon_sym_STAR] = ACTIONS(629),
        [anon_sym_PLUS] = ACTIONS(627),
        [anon_sym_DASH] = ACTIONS(627),
        [anon_sym_SLASH] = ACTIONS(627),
        [anon_sym_STAR_STAR] = ACTIONS(627),
        [anon_sym_PIPE] = ACTIONS(627),
        [anon_sym_AMP] = ACTIONS(627),
        [anon_sym_CARET] = ACTIONS(627),
        [anon_sym_LT_LT] = ACTIONS(627),
        [anon_sym_GT_GT] = ACTIONS(627),
        [anon_sym_and] = ACTIONS(627),
        [anon_sym_or] = ACTIONS(627),
        [anon_sym_LBRACK] = ACTIONS(627),
        [anon_sym_RBRACK] = ACTIONS(627),
        [anon_sym_RBRACE] = ACTIONS(627),
        [sym_comment] = ACTIONS(77),
        [sym__newline] = ACTIONS(627),
    },
    [359] = {
        [anon_sym_COMMA] = ACTIONS(631),
        [anon_sym_LPAREN] = ACTIONS(183),
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
        [sym_comment] = ACTIONS(77),
        [sym__newline] = ACTIONS(631),
    },
    [360] = {
        [aux_sym_dotted_name_repeat1] = STATE(375),
        [anon_sym_LPAREN] = ACTIONS(729),
        [anon_sym_DOT] = ACTIONS(731),
        [sym_comment] = ACTIONS(77),
        [sym__newline] = ACTIONS(729),
    },
    [361] = {
        [sym_arguments] = STATE(364),
        [anon_sym_LPAREN] = ACTIONS(733),
        [sym_comment] = ACTIONS(77),
        [sym__newline] = ACTIONS(735),
    },
    [362] = {
        [sym__expression] = STATE(366),
        [sym_binary_operator] = STATE(43),
        [sym_unary_operator] = STATE(43),
        [sym_subscript] = STATE(43),
        [sym_call] = STATE(43),
        [sym_list] = STATE(43),
        [sym_list_comprehension] = STATE(43),
        [sym_dictionary] = STATE(43),
        [sym_dictionary_comprehension] = STATE(43),
        [sym_set] = STATE(43),
        [sym_set_comprehension] = STATE(43),
        [anon_sym_not] = ACTIONS(231),
        [anon_sym_LBRACK] = ACTIONS(127),
        [anon_sym_LBRACE] = ACTIONS(129),
        [sym_number] = ACTIONS(131),
        [sym_identifier] = ACTIONS(133),
        [sym_comment] = ACTIONS(77),
    },
    [363] = {
        [anon_sym_def] = ACTIONS(737),
        [anon_sym_class] = ACTIONS(737),
        [anon_sym_AT] = ACTIONS(737),
        [sym_comment] = ACTIONS(77),
    },
    [364] = {
        [sym_comment] = ACTIONS(77),
        [sym__newline] = ACTIONS(739),
    },
    [365] = {
        [anon_sym_def] = ACTIONS(741),
        [anon_sym_class] = ACTIONS(741),
        [anon_sym_AT] = ACTIONS(741),
        [sym_comment] = ACTIONS(77),
    },
    [366] = {
        [aux_sym_print_statement_repeat1] = STATE(369),
        [anon_sym_COMMA] = ACTIONS(743),
        [anon_sym_LPAREN] = ACTIONS(247),
        [anon_sym_RPAREN] = ACTIONS(745),
        [anon_sym_STAR] = ACTIONS(315),
        [anon_sym_PLUS] = ACTIONS(317),
        [anon_sym_DASH] = ACTIONS(317),
        [anon_sym_SLASH] = ACTIONS(319),
        [anon_sym_STAR_STAR] = ACTIONS(321),
        [anon_sym_PIPE] = ACTIONS(323),
        [anon_sym_AMP] = ACTIONS(325),
        [anon_sym_CARET] = ACTIONS(327),
        [anon_sym_LT_LT] = ACTIONS(317),
        [anon_sym_GT_GT] = ACTIONS(317),
        [anon_sym_and] = ACTIONS(325),
        [anon_sym_or] = ACTIONS(323),
        [anon_sym_LBRACK] = ACTIONS(263),
        [sym_comment] = ACTIONS(77),
    },
    [367] = {
        [sym__expression] = STATE(373),
        [sym_binary_operator] = STATE(43),
        [sym_unary_operator] = STATE(43),
        [sym_subscript] = STATE(43),
        [sym_call] = STATE(43),
        [sym_list] = STATE(43),
        [sym_list_comprehension] = STATE(43),
        [sym_dictionary] = STATE(43),
        [sym_dictionary_comprehension] = STATE(43),
        [sym_set] = STATE(43),
        [sym_set_comprehension] = STATE(43),
        [anon_sym_not] = ACTIONS(231),
        [anon_sym_LBRACK] = ACTIONS(127),
        [anon_sym_LBRACE] = ACTIONS(129),
        [sym_number] = ACTIONS(131),
        [sym_identifier] = ACTIONS(133),
        [sym_comment] = ACTIONS(77),
    },
    [368] = {
        [sym_comment] = ACTIONS(77),
        [sym__newline] = ACTIONS(747),
    },
    [369] = {
        [anon_sym_COMMA] = ACTIONS(749),
        [anon_sym_RPAREN] = ACTIONS(751),
        [sym_comment] = ACTIONS(77),
    },
    [370] = {
        [sym__expression] = STATE(372),
        [sym_binary_operator] = STATE(43),
        [sym_unary_operator] = STATE(43),
        [sym_subscript] = STATE(43),
        [sym_call] = STATE(43),
        [sym_list] = STATE(43),
        [sym_list_comprehension] = STATE(43),
        [sym_dictionary] = STATE(43),
        [sym_dictionary_comprehension] = STATE(43),
        [sym_set] = STATE(43),
        [sym_set_comprehension] = STATE(43),
        [anon_sym_not] = ACTIONS(231),
        [anon_sym_LBRACK] = ACTIONS(127),
        [anon_sym_LBRACE] = ACTIONS(129),
        [sym_number] = ACTIONS(131),
        [sym_identifier] = ACTIONS(133),
        [sym_comment] = ACTIONS(77),
    },
    [371] = {
        [sym_comment] = ACTIONS(77),
        [sym__newline] = ACTIONS(753),
    },
    [372] = {
        [anon_sym_COMMA] = ACTIONS(495),
        [anon_sym_LPAREN] = ACTIONS(247),
        [anon_sym_RPAREN] = ACTIONS(495),
        [anon_sym_STAR] = ACTIONS(315),
        [anon_sym_PLUS] = ACTIONS(317),
        [anon_sym_DASH] = ACTIONS(317),
        [anon_sym_SLASH] = ACTIONS(319),
        [anon_sym_STAR_STAR] = ACTIONS(321),
        [anon_sym_PIPE] = ACTIONS(323),
        [anon_sym_AMP] = ACTIONS(325),
        [anon_sym_CARET] = ACTIONS(327),
        [anon_sym_LT_LT] = ACTIONS(317),
        [anon_sym_GT_GT] = ACTIONS(317),
        [anon_sym_and] = ACTIONS(325),
        [anon_sym_or] = ACTIONS(323),
        [anon_sym_LBRACK] = ACTIONS(263),
        [sym_comment] = ACTIONS(77),
    },
    [373] = {
        [anon_sym_COMMA] = ACTIONS(497),
        [anon_sym_LPAREN] = ACTIONS(247),
        [anon_sym_RPAREN] = ACTIONS(497),
        [anon_sym_STAR] = ACTIONS(315),
        [anon_sym_PLUS] = ACTIONS(317),
        [anon_sym_DASH] = ACTIONS(317),
        [anon_sym_SLASH] = ACTIONS(319),
        [anon_sym_STAR_STAR] = ACTIONS(321),
        [anon_sym_PIPE] = ACTIONS(323),
        [anon_sym_AMP] = ACTIONS(325),
        [anon_sym_CARET] = ACTIONS(327),
        [anon_sym_LT_LT] = ACTIONS(317),
        [anon_sym_GT_GT] = ACTIONS(317),
        [anon_sym_and] = ACTIONS(325),
        [anon_sym_or] = ACTIONS(323),
        [anon_sym_LBRACK] = ACTIONS(263),
        [sym_comment] = ACTIONS(77),
    },
    [374] = {
        [sym_identifier] = ACTIONS(755),
        [sym_comment] = ACTIONS(77),
    },
    [375] = {
        [anon_sym_LPAREN] = ACTIONS(757),
        [anon_sym_DOT] = ACTIONS(759),
        [sym_comment] = ACTIONS(77),
        [sym__newline] = ACTIONS(757),
    },
    [376] = {
        [sym_identifier] = ACTIONS(761),
        [sym_comment] = ACTIONS(77),
    },
    [377] = {
        [anon_sym_LPAREN] = ACTIONS(763),
        [anon_sym_DOT] = ACTIONS(763),
        [sym_comment] = ACTIONS(77),
        [sym__newline] = ACTIONS(763),
    },
    [378] = {
        [anon_sym_LPAREN] = ACTIONS(765),
        [anon_sym_DOT] = ACTIONS(765),
        [sym_comment] = ACTIONS(77),
        [sym__newline] = ACTIONS(765),
    },
    [379] = {
        [anon_sym_COLON] = ACTIONS(767),
        [anon_sym_LPAREN] = ACTIONS(769),
        [sym_comment] = ACTIONS(77),
    },
    [380] = {
        [sym__simple_statement] = STATE(388),
        [sym_print_statement] = STATE(5),
        [sym_expression_statement] = STATE(5),
        [sym_return_statement] = STATE(5),
        [sym_delete_statement] = STATE(5),
        [sym__suite] = STATE(546),
        [sym__expression] = STATE(24),
        [sym_binary_operator] = STATE(17),
        [sym_unary_operator] = STATE(17),
        [sym_subscript] = STATE(17),
        [sym_call] = STATE(17),
        [sym_list] = STATE(17),
        [sym_list_comprehension] = STATE(17),
        [sym_dictionary] = STATE(17),
        [sym_dictionary_comprehension] = STATE(17),
        [sym_set] = STATE(17),
        [sym_set_comprehension] = STATE(17),
        [anon_sym_print] = ACTIONS(87),
        [anon_sym_return] = ACTIONS(89),
        [anon_sym_del] = ACTIONS(91),
        [sym_pass_statement] = ACTIONS(93),
        [sym_break_statement] = ACTIONS(93),
        [sym_continue_statement] = ACTIONS(93),
        [anon_sym_not] = ACTIONS(111),
        [anon_sym_LBRACK] = ACTIONS(113),
        [anon_sym_LBRACE] = ACTIONS(115),
        [sym_number] = ACTIONS(117),
        [sym_identifier] = ACTIONS(119),
        [sym_comment] = ACTIONS(77),
        [sym__indent] = ACTIONS(771),
    },
    [381] = {
        [sym_expression_list] = STATE(382),
        [sym__expression] = STATE(383),
        [sym_binary_operator] = STATE(43),
        [sym_unary_operator] = STATE(43),
        [sym_subscript] = STATE(43),
        [sym_call] = STATE(43),
        [sym_list] = STATE(43),
        [sym_list_comprehension] = STATE(43),
        [sym_dictionary] = STATE(43),
        [sym_dictionary_comprehension] = STATE(43),
        [sym_set] = STATE(43),
        [sym_set_comprehension] = STATE(43),
        [anon_sym_not] = ACTIONS(231),
        [anon_sym_LBRACK] = ACTIONS(127),
        [anon_sym_LBRACE] = ACTIONS(129),
        [sym_number] = ACTIONS(131),
        [sym_identifier] = ACTIONS(133),
        [sym_comment] = ACTIONS(77),
    },
    [382] = {
        [anon_sym_RPAREN] = ACTIONS(773),
        [sym_comment] = ACTIONS(77),
    },
    [383] = {
        [aux_sym_print_statement_repeat1] = STATE(384),
        [anon_sym_COMMA] = ACTIONS(743),
        [anon_sym_LPAREN] = ACTIONS(247),
        [anon_sym_RPAREN] = ACTIONS(475),
        [anon_sym_STAR] = ACTIONS(315),
        [anon_sym_PLUS] = ACTIONS(317),
        [anon_sym_DASH] = ACTIONS(317),
        [anon_sym_SLASH] = ACTIONS(319),
        [anon_sym_STAR_STAR] = ACTIONS(321),
        [anon_sym_PIPE] = ACTIONS(323),
        [anon_sym_AMP] = ACTIONS(325),
        [anon_sym_CARET] = ACTIONS(327),
        [anon_sym_LT_LT] = ACTIONS(317),
        [anon_sym_GT_GT] = ACTIONS(317),
        [anon_sym_and] = ACTIONS(325),
        [anon_sym_or] = ACTIONS(323),
        [anon_sym_LBRACK] = ACTIONS(263),
        [sym_comment] = ACTIONS(77),
    },
    [384] = {
        [anon_sym_COMMA] = ACTIONS(749),
        [anon_sym_RPAREN] = ACTIONS(493),
        [sym_comment] = ACTIONS(77),
    },
    [385] = {
        [anon_sym_COLON] = ACTIONS(775),
        [sym_comment] = ACTIONS(77),
    },
    [386] = {
        [sym__simple_statement] = STATE(388),
        [sym_print_statement] = STATE(5),
        [sym_expression_statement] = STATE(5),
        [sym_return_statement] = STATE(5),
        [sym_delete_statement] = STATE(5),
        [sym__suite] = STATE(389),
        [sym__expression] = STATE(24),
        [sym_binary_operator] = STATE(17),
        [sym_unary_operator] = STATE(17),
        [sym_subscript] = STATE(17),
        [sym_call] = STATE(17),
        [sym_list] = STATE(17),
        [sym_list_comprehension] = STATE(17),
        [sym_dictionary] = STATE(17),
        [sym_dictionary_comprehension] = STATE(17),
        [sym_set] = STATE(17),
        [sym_set_comprehension] = STATE(17),
        [anon_sym_print] = ACTIONS(87),
        [anon_sym_return] = ACTIONS(89),
        [anon_sym_del] = ACTIONS(91),
        [sym_pass_statement] = ACTIONS(93),
        [sym_break_statement] = ACTIONS(93),
        [sym_continue_statement] = ACTIONS(93),
        [anon_sym_not] = ACTIONS(111),
        [anon_sym_LBRACK] = ACTIONS(113),
        [anon_sym_LBRACE] = ACTIONS(115),
        [sym_number] = ACTIONS(117),
        [sym_identifier] = ACTIONS(119),
        [sym_comment] = ACTIONS(77),
        [sym__indent] = ACTIONS(771),
    },
    [387] = {
        [sym__statement] = STATE(398),
        [sym__simple_statement] = STATE(399),
        [sym_print_statement] = STATE(5),
        [sym_expression_statement] = STATE(5),
        [sym_return_statement] = STATE(5),
        [sym_delete_statement] = STATE(5),
        [sym__compound_statement] = STATE(400),
        [sym_if_statement] = STATE(401),
        [sym_for_statement] = STATE(401),
        [sym_while_statement] = STATE(401),
        [sym_try_statement] = STATE(401),
        [sym_with_statement] = STATE(401),
        [sym_function_definition] = STATE(401),
        [sym_class_definition] = STATE(401),
        [sym_decorated_definition] = STATE(401),
        [sym_decorator] = STATE(23),
        [sym__expression] = STATE(24),
        [sym_binary_operator] = STATE(17),
        [sym_unary_operator] = STATE(17),
        [sym_subscript] = STATE(17),
        [sym_call] = STATE(17),
        [sym_list] = STATE(17),
        [sym_list_comprehension] = STATE(17),
        [sym_dictionary] = STATE(17),
        [sym_dictionary_comprehension] = STATE(17),
        [sym_set] = STATE(17),
        [sym_set_comprehension] = STATE(17),
        [aux_sym_module_repeat1] = STATE(402),
        [aux_sym_decorated_definition_repeat1] = STATE(403),
        [anon_sym_print] = ACTIONS(87),
        [anon_sym_return] = ACTIONS(89),
        [anon_sym_del] = ACTIONS(91),
        [sym_pass_statement] = ACTIONS(93),
        [sym_break_statement] = ACTIONS(93),
        [sym_continue_statement] = ACTIONS(93),
        [anon_sym_if] = ACTIONS(777),
        [anon_sym_for] = ACTIONS(779),
        [anon_sym_while] = ACTIONS(781),
        [anon_sym_try] = ACTIONS(783),
        [anon_sym_with] = ACTIONS(785),
        [anon_sym_def] = ACTIONS(787),
        [anon_sym_class] = ACTIONS(789),
        [anon_sym_AT] = ACTIONS(109),
        [anon_sym_not] = ACTIONS(111),
        [anon_sym_LBRACK] = ACTIONS(113),
        [anon_sym_LBRACE] = ACTIONS(115),
        [sym_number] = ACTIONS(117),
        [sym_identifier] = ACTIONS(119),
        [sym_comment] = ACTIONS(77),
        [sym__dedent] = ACTIONS(791),
    },
    [388] = {
        [sym_comment] = ACTIONS(77),
        [sym__newline] = ACTIONS(791),
    },
    [389] = {
        [ts_builtin_sym_end] = ACTIONS(793),
        [anon_sym_SEMI] = ACTIONS(793),
        [anon_sym_print] = ACTIONS(795),
        [anon_sym_return] = ACTIONS(795),
        [anon_sym_del] = ACTIONS(795),
        [sym_pass_statement] = ACTIONS(795),
        [sym_break_statement] = ACTIONS(795),
        [sym_continue_statement] = ACTIONS(795),
        [anon_sym_if] = ACTIONS(795),
        [anon_sym_for] = ACTIONS(795),
        [anon_sym_while] = ACTIONS(795),
        [anon_sym_try] = ACTIONS(795),
        [anon_sym_with] = ACTIONS(795),
        [anon_sym_def] = ACTIONS(795),
        [anon_sym_class] = ACTIONS(795),
        [anon_sym_AT] = ACTIONS(793),
        [anon_sym_not] = ACTIONS(795),
        [anon_sym_LBRACK] = ACTIONS(793),
        [anon_sym_LBRACE] = ACTIONS(793),
        [sym_number] = ACTIONS(795),
        [sym_identifier] = ACTIONS(797),
        [sym_comment] = ACTIONS(77),
        [sym__newline] = ACTIONS(793),
    },
    [390] = {
        [ts_builtin_sym_end] = ACTIONS(799),
        [anon_sym_SEMI] = ACTIONS(799),
        [anon_sym_print] = ACTIONS(801),
        [anon_sym_return] = ACTIONS(801),
        [anon_sym_del] = ACTIONS(801),
        [sym_pass_statement] = ACTIONS(801),
        [sym_break_statement] = ACTIONS(801),
        [sym_continue_statement] = ACTIONS(801),
        [anon_sym_if] = ACTIONS(801),
        [anon_sym_elif] = ACTIONS(801),
        [anon_sym_else] = ACTIONS(801),
        [anon_sym_for] = ACTIONS(801),
        [anon_sym_while] = ACTIONS(801),
        [anon_sym_try] = ACTIONS(801),
        [anon_sym_except] = ACTIONS(801),
        [anon_sym_finally] = ACTIONS(801),
        [anon_sym_with] = ACTIONS(801),
        [anon_sym_def] = ACTIONS(801),
        [anon_sym_class] = ACTIONS(801),
        [anon_sym_AT] = ACTIONS(799),
        [anon_sym_not] = ACTIONS(801),
        [anon_sym_LBRACK] = ACTIONS(799),
        [anon_sym_LBRACE] = ACTIONS(799),
        [sym_number] = ACTIONS(801),
        [sym_identifier] = ACTIONS(803),
        [sym_comment] = ACTIONS(77),
        [sym__newline] = ACTIONS(799),
    },
    [391] = {
        [sym__expression] = STATE(534),
        [sym_binary_operator] = STATE(43),
        [sym_unary_operator] = STATE(43),
        [sym_subscript] = STATE(43),
        [sym_call] = STATE(43),
        [sym_list] = STATE(43),
        [sym_list_comprehension] = STATE(43),
        [sym_dictionary] = STATE(43),
        [sym_dictionary_comprehension] = STATE(43),
        [sym_set] = STATE(43),
        [sym_set_comprehension] = STATE(43),
        [anon_sym_not] = ACTIONS(125),
        [anon_sym_LBRACK] = ACTIONS(127),
        [anon_sym_LBRACE] = ACTIONS(129),
        [sym_number] = ACTIONS(131),
        [sym_identifier] = ACTIONS(133),
        [sym_comment] = ACTIONS(77),
    },
    [392] = {
        [sym_expression_list] = STATE(522),
        [sym__expression] = STATE(164),
        [sym_binary_operator] = STATE(43),
        [sym_unary_operator] = STATE(43),
        [sym_subscript] = STATE(43),
        [sym_call] = STATE(43),
        [sym_list] = STATE(43),
        [sym_list_comprehension] = STATE(43),
        [sym_dictionary] = STATE(43),
        [sym_dictionary_comprehension] = STATE(43),
        [sym_set] = STATE(43),
        [sym_set_comprehension] = STATE(43),
        [anon_sym_not] = ACTIONS(135),
        [anon_sym_LBRACK] = ACTIONS(127),
        [anon_sym_LBRACE] = ACTIONS(129),
        [sym_number] = ACTIONS(131),
        [sym_identifier] = ACTIONS(133),
        [sym_comment] = ACTIONS(77),
    },
    [393] = {
        [sym__expression] = STATE(518),
        [sym_binary_operator] = STATE(43),
        [sym_unary_operator] = STATE(43),
        [sym_subscript] = STATE(43),
        [sym_call] = STATE(43),
        [sym_list] = STATE(43),
        [sym_list_comprehension] = STATE(43),
        [sym_dictionary] = STATE(43),
        [sym_dictionary_comprehension] = STATE(43),
        [sym_set] = STATE(43),
        [sym_set_comprehension] = STATE(43),
        [anon_sym_not] = ACTIONS(125),
        [anon_sym_LBRACK] = ACTIONS(127),
        [anon_sym_LBRACE] = ACTIONS(129),
        [sym_number] = ACTIONS(131),
        [sym_identifier] = ACTIONS(133),
        [sym_comment] = ACTIONS(77),
    },
    [394] = {
        [anon_sym_COLON] = ACTIONS(805),
        [sym_comment] = ACTIONS(77),
    },
    [395] = {
        [sym_with_item] = STATE(454),
        [sym__expression] = STATE(455),
        [sym_binary_operator] = STATE(43),
        [sym_unary_operator] = STATE(43),
        [sym_subscript] = STATE(43),
        [sym_call] = STATE(43),
        [sym_list] = STATE(43),
        [sym_list_comprehension] = STATE(43),
        [sym_dictionary] = STATE(43),
        [sym_dictionary_comprehension] = STATE(43),
        [sym_set] = STATE(43),
        [sym_set_comprehension] = STATE(43),
        [anon_sym_not] = ACTIONS(139),
        [anon_sym_LBRACK] = ACTIONS(127),
        [anon_sym_LBRACE] = ACTIONS(129),
        [sym_number] = ACTIONS(131),
        [sym_identifier] = ACTIONS(133),
        [sym_comment] = ACTIONS(77),
    },
    [396] = {
        [sym_identifier] = ACTIONS(807),
        [sym_comment] = ACTIONS(77),
    },
    [397] = {
        [sym_identifier] = ACTIONS(809),
        [sym_comment] = ACTIONS(77),
    },
    [398] = {
        [anon_sym_print] = ACTIONS(163),
        [anon_sym_return] = ACTIONS(163),
        [anon_sym_del] = ACTIONS(163),
        [sym_pass_statement] = ACTIONS(163),
        [sym_break_statement] = ACTIONS(163),
        [sym_continue_statement] = ACTIONS(163),
        [anon_sym_if] = ACTIONS(163),
        [anon_sym_for] = ACTIONS(163),
        [anon_sym_while] = ACTIONS(163),
        [anon_sym_try] = ACTIONS(163),
        [anon_sym_with] = ACTIONS(163),
        [anon_sym_def] = ACTIONS(163),
        [anon_sym_class] = ACTIONS(163),
        [anon_sym_AT] = ACTIONS(161),
        [anon_sym_not] = ACTIONS(163),
        [anon_sym_LBRACK] = ACTIONS(161),
        [anon_sym_LBRACE] = ACTIONS(161),
        [sym_number] = ACTIONS(163),
        [sym_identifier] = ACTIONS(165),
        [sym_comment] = ACTIONS(77),
        [sym__dedent] = ACTIONS(161),
    },
    [399] = {
        [sym_comment] = ACTIONS(77),
        [sym__newline] = ACTIONS(811),
    },
    [400] = {
        [anon_sym_print] = ACTIONS(171),
        [anon_sym_return] = ACTIONS(171),
        [anon_sym_del] = ACTIONS(171),
        [sym_pass_statement] = ACTIONS(171),
        [sym_break_statement] = ACTIONS(171),
        [sym_continue_statement] = ACTIONS(171),
        [anon_sym_if] = ACTIONS(171),
        [anon_sym_for] = ACTIONS(171),
        [anon_sym_while] = ACTIONS(171),
        [anon_sym_try] = ACTIONS(171),
        [anon_sym_with] = ACTIONS(171),
        [anon_sym_def] = ACTIONS(171),
        [anon_sym_class] = ACTIONS(171),
        [anon_sym_AT] = ACTIONS(169),
        [anon_sym_not] = ACTIONS(171),
        [anon_sym_LBRACK] = ACTIONS(169),
        [anon_sym_LBRACE] = ACTIONS(169),
        [sym_number] = ACTIONS(171),
        [sym_identifier] = ACTIONS(173),
        [sym_comment] = ACTIONS(77),
        [sym__dedent] = ACTIONS(169),
    },
    [401] = {
        [anon_sym_print] = ACTIONS(177),
        [anon_sym_return] = ACTIONS(177),
        [anon_sym_del] = ACTIONS(177),
        [sym_pass_statement] = ACTIONS(177),
        [sym_break_statement] = ACTIONS(177),
        [sym_continue_statement] = ACTIONS(177),
        [anon_sym_if] = ACTIONS(177),
        [anon_sym_for] = ACTIONS(177),
        [anon_sym_while] = ACTIONS(177),
        [anon_sym_try] = ACTIONS(177),
        [anon_sym_with] = ACTIONS(177),
        [anon_sym_def] = ACTIONS(177),
        [anon_sym_class] = ACTIONS(177),
        [anon_sym_AT] = ACTIONS(175),
        [anon_sym_not] = ACTIONS(177),
        [anon_sym_LBRACK] = ACTIONS(175),
        [anon_sym_LBRACE] = ACTIONS(175),
        [sym_number] = ACTIONS(177),
        [sym_identifier] = ACTIONS(179),
        [sym_comment] = ACTIONS(77),
        [sym__dedent] = ACTIONS(175),
    },
    [402] = {
        [sym__statement] = STATE(406),
        [sym__simple_statement] = STATE(399),
        [sym_print_statement] = STATE(5),
        [sym_expression_statement] = STATE(5),
        [sym_return_statement] = STATE(5),
        [sym_delete_statement] = STATE(5),
        [sym__compound_statement] = STATE(400),
        [sym_if_statement] = STATE(401),
        [sym_for_statement] = STATE(401),
        [sym_while_statement] = STATE(401),
        [sym_try_statement] = STATE(401),
        [sym_with_statement] = STATE(401),
        [sym_function_definition] = STATE(401),
        [sym_class_definition] = STATE(401),
        [sym_decorated_definition] = STATE(401),
        [sym_decorator] = STATE(23),
        [sym__expression] = STATE(24),
        [sym_binary_operator] = STATE(17),
        [sym_unary_operator] = STATE(17),
        [sym_subscript] = STATE(17),
        [sym_call] = STATE(17),
        [sym_list] = STATE(17),
        [sym_list_comprehension] = STATE(17),
        [sym_dictionary] = STATE(17),
        [sym_dictionary_comprehension] = STATE(17),
        [sym_set] = STATE(17),
        [sym_set_comprehension] = STATE(17),
        [aux_sym_decorated_definition_repeat1] = STATE(403),
        [anon_sym_print] = ACTIONS(87),
        [anon_sym_return] = ACTIONS(89),
        [anon_sym_del] = ACTIONS(91),
        [sym_pass_statement] = ACTIONS(93),
        [sym_break_statement] = ACTIONS(93),
        [sym_continue_statement] = ACTIONS(93),
        [anon_sym_if] = ACTIONS(777),
        [anon_sym_for] = ACTIONS(779),
        [anon_sym_while] = ACTIONS(781),
        [anon_sym_try] = ACTIONS(783),
        [anon_sym_with] = ACTIONS(785),
        [anon_sym_def] = ACTIONS(787),
        [anon_sym_class] = ACTIONS(789),
        [anon_sym_AT] = ACTIONS(109),
        [anon_sym_not] = ACTIONS(111),
        [anon_sym_LBRACK] = ACTIONS(113),
        [anon_sym_LBRACE] = ACTIONS(115),
        [sym_number] = ACTIONS(117),
        [sym_identifier] = ACTIONS(119),
        [sym_comment] = ACTIONS(77),
        [sym__dedent] = ACTIONS(813),
    },
    [403] = {
        [sym_function_definition] = STATE(404),
        [sym_class_definition] = STATE(404),
        [sym_decorator] = STATE(28),
        [anon_sym_def] = ACTIONS(815),
        [anon_sym_class] = ACTIONS(817),
        [anon_sym_AT] = ACTIONS(109),
        [sym_comment] = ACTIONS(77),
    },
    [404] = {
        [anon_sym_print] = ACTIONS(213),
        [anon_sym_return] = ACTIONS(213),
        [anon_sym_del] = ACTIONS(213),
        [sym_pass_statement] = ACTIONS(213),
        [sym_break_statement] = ACTIONS(213),
        [sym_continue_statement] = ACTIONS(213),
        [anon_sym_if] = ACTIONS(213),
        [anon_sym_for] = ACTIONS(213),
        [anon_sym_while] = ACTIONS(213),
        [anon_sym_try] = ACTIONS(213),
        [anon_sym_with] = ACTIONS(213),
        [anon_sym_def] = ACTIONS(213),
        [anon_sym_class] = ACTIONS(213),
        [anon_sym_AT] = ACTIONS(211),
        [anon_sym_not] = ACTIONS(213),
        [anon_sym_LBRACK] = ACTIONS(211),
        [anon_sym_LBRACE] = ACTIONS(211),
        [sym_number] = ACTIONS(213),
        [sym_identifier] = ACTIONS(215),
        [sym_comment] = ACTIONS(77),
        [sym__dedent] = ACTIONS(211),
    },
    [405] = {
        [ts_builtin_sym_end] = ACTIONS(819),
        [anon_sym_SEMI] = ACTIONS(819),
        [anon_sym_print] = ACTIONS(821),
        [anon_sym_return] = ACTIONS(821),
        [anon_sym_del] = ACTIONS(821),
        [sym_pass_statement] = ACTIONS(821),
        [sym_break_statement] = ACTIONS(821),
        [sym_continue_statement] = ACTIONS(821),
        [anon_sym_if] = ACTIONS(821),
        [anon_sym_elif] = ACTIONS(821),
        [anon_sym_else] = ACTIONS(821),
        [anon_sym_for] = ACTIONS(821),
        [anon_sym_while] = ACTIONS(821),
        [anon_sym_try] = ACTIONS(821),
        [anon_sym_except] = ACTIONS(821),
        [anon_sym_finally] = ACTIONS(821),
        [anon_sym_with] = ACTIONS(821),
        [anon_sym_def] = ACTIONS(821),
        [anon_sym_class] = ACTIONS(821),
        [anon_sym_AT] = ACTIONS(819),
        [anon_sym_not] = ACTIONS(821),
        [anon_sym_LBRACK] = ACTIONS(819),
        [anon_sym_LBRACE] = ACTIONS(819),
        [sym_number] = ACTIONS(821),
        [sym_identifier] = ACTIONS(823),
        [sym_comment] = ACTIONS(77),
        [sym__newline] = ACTIONS(819),
    },
    [406] = {
        [anon_sym_print] = ACTIONS(223),
        [anon_sym_return] = ACTIONS(223),
        [anon_sym_del] = ACTIONS(223),
        [sym_pass_statement] = ACTIONS(223),
        [sym_break_statement] = ACTIONS(223),
        [sym_continue_statement] = ACTIONS(223),
        [anon_sym_if] = ACTIONS(223),
        [anon_sym_for] = ACTIONS(223),
        [anon_sym_while] = ACTIONS(223),
        [anon_sym_try] = ACTIONS(223),
        [anon_sym_with] = ACTIONS(223),
        [anon_sym_def] = ACTIONS(223),
        [anon_sym_class] = ACTIONS(223),
        [anon_sym_AT] = ACTIONS(221),
        [anon_sym_not] = ACTIONS(223),
        [anon_sym_LBRACK] = ACTIONS(221),
        [anon_sym_LBRACE] = ACTIONS(221),
        [sym_number] = ACTIONS(223),
        [sym_identifier] = ACTIONS(225),
        [sym_comment] = ACTIONS(77),
        [sym__dedent] = ACTIONS(221),
    },
    [407] = {
        [anon_sym_print] = ACTIONS(677),
        [anon_sym_return] = ACTIONS(677),
        [anon_sym_del] = ACTIONS(677),
        [sym_pass_statement] = ACTIONS(677),
        [sym_break_statement] = ACTIONS(677),
        [sym_continue_statement] = ACTIONS(677),
        [anon_sym_if] = ACTIONS(677),
        [anon_sym_for] = ACTIONS(677),
        [anon_sym_while] = ACTIONS(677),
        [anon_sym_try] = ACTIONS(677),
        [anon_sym_with] = ACTIONS(677),
        [anon_sym_def] = ACTIONS(677),
        [anon_sym_class] = ACTIONS(677),
        [anon_sym_AT] = ACTIONS(675),
        [anon_sym_not] = ACTIONS(677),
        [anon_sym_LBRACK] = ACTIONS(675),
        [anon_sym_LBRACE] = ACTIONS(675),
        [sym_number] = ACTIONS(677),
        [sym_identifier] = ACTIONS(679),
        [sym_comment] = ACTIONS(77),
        [sym__dedent] = ACTIONS(675),
    },
    [408] = {
        [anon_sym_COLON] = ACTIONS(825),
        [anon_sym_LPAREN] = ACTIONS(827),
        [sym_comment] = ACTIONS(77),
    },
    [409] = {
        [sym__simple_statement] = STATE(415),
        [sym_print_statement] = STATE(5),
        [sym_expression_statement] = STATE(5),
        [sym_return_statement] = STATE(5),
        [sym_delete_statement] = STATE(5),
        [sym__suite] = STATE(420),
        [sym__expression] = STATE(24),
        [sym_binary_operator] = STATE(17),
        [sym_unary_operator] = STATE(17),
        [sym_subscript] = STATE(17),
        [sym_call] = STATE(17),
        [sym_list] = STATE(17),
        [sym_list_comprehension] = STATE(17),
        [sym_dictionary] = STATE(17),
        [sym_dictionary_comprehension] = STATE(17),
        [sym_set] = STATE(17),
        [sym_set_comprehension] = STATE(17),
        [anon_sym_print] = ACTIONS(87),
        [anon_sym_return] = ACTIONS(89),
        [anon_sym_del] = ACTIONS(91),
        [sym_pass_statement] = ACTIONS(93),
        [sym_break_statement] = ACTIONS(93),
        [sym_continue_statement] = ACTIONS(93),
        [anon_sym_not] = ACTIONS(111),
        [anon_sym_LBRACK] = ACTIONS(113),
        [anon_sym_LBRACE] = ACTIONS(115),
        [sym_number] = ACTIONS(117),
        [sym_identifier] = ACTIONS(119),
        [sym_comment] = ACTIONS(77),
        [sym__indent] = ACTIONS(829),
    },
    [410] = {
        [sym_expression_list] = STATE(411),
        [sym__expression] = STATE(383),
        [sym_binary_operator] = STATE(43),
        [sym_unary_operator] = STATE(43),
        [sym_subscript] = STATE(43),
        [sym_call] = STATE(43),
        [sym_list] = STATE(43),
        [sym_list_comprehension] = STATE(43),
        [sym_dictionary] = STATE(43),
        [sym_dictionary_comprehension] = STATE(43),
        [sym_set] = STATE(43),
        [sym_set_comprehension] = STATE(43),
        [anon_sym_not] = ACTIONS(231),
        [anon_sym_LBRACK] = ACTIONS(127),
        [anon_sym_LBRACE] = ACTIONS(129),
        [sym_number] = ACTIONS(131),
        [sym_identifier] = ACTIONS(133),
        [sym_comment] = ACTIONS(77),
    },
    [411] = {
        [anon_sym_RPAREN] = ACTIONS(831),
        [sym_comment] = ACTIONS(77),
    },
    [412] = {
        [anon_sym_COLON] = ACTIONS(833),
        [sym_comment] = ACTIONS(77),
    },
    [413] = {
        [sym__simple_statement] = STATE(415),
        [sym_print_statement] = STATE(5),
        [sym_expression_statement] = STATE(5),
        [sym_return_statement] = STATE(5),
        [sym_delete_statement] = STATE(5),
        [sym__suite] = STATE(416),
        [sym__expression] = STATE(24),
        [sym_binary_operator] = STATE(17),
        [sym_unary_operator] = STATE(17),
        [sym_subscript] = STATE(17),
        [sym_call] = STATE(17),
        [sym_list] = STATE(17),
        [sym_list_comprehension] = STATE(17),
        [sym_dictionary] = STATE(17),
        [sym_dictionary_comprehension] = STATE(17),
        [sym_set] = STATE(17),
        [sym_set_comprehension] = STATE(17),
        [anon_sym_print] = ACTIONS(87),
        [anon_sym_return] = ACTIONS(89),
        [anon_sym_del] = ACTIONS(91),
        [sym_pass_statement] = ACTIONS(93),
        [sym_break_statement] = ACTIONS(93),
        [sym_continue_statement] = ACTIONS(93),
        [anon_sym_not] = ACTIONS(111),
        [anon_sym_LBRACK] = ACTIONS(113),
        [anon_sym_LBRACE] = ACTIONS(115),
        [sym_number] = ACTIONS(117),
        [sym_identifier] = ACTIONS(119),
        [sym_comment] = ACTIONS(77),
        [sym__indent] = ACTIONS(829),
    },
    [414] = {
        [sym__statement] = STATE(398),
        [sym__simple_statement] = STATE(399),
        [sym_print_statement] = STATE(5),
        [sym_expression_statement] = STATE(5),
        [sym_return_statement] = STATE(5),
        [sym_delete_statement] = STATE(5),
        [sym__compound_statement] = STATE(400),
        [sym_if_statement] = STATE(401),
        [sym_for_statement] = STATE(401),
        [sym_while_statement] = STATE(401),
        [sym_try_statement] = STATE(401),
        [sym_with_statement] = STATE(401),
        [sym_function_definition] = STATE(401),
        [sym_class_definition] = STATE(401),
        [sym_decorated_definition] = STATE(401),
        [sym_decorator] = STATE(23),
        [sym__expression] = STATE(24),
        [sym_binary_operator] = STATE(17),
        [sym_unary_operator] = STATE(17),
        [sym_subscript] = STATE(17),
        [sym_call] = STATE(17),
        [sym_list] = STATE(17),
        [sym_list_comprehension] = STATE(17),
        [sym_dictionary] = STATE(17),
        [sym_dictionary_comprehension] = STATE(17),
        [sym_set] = STATE(17),
        [sym_set_comprehension] = STATE(17),
        [aux_sym_module_repeat1] = STATE(418),
        [aux_sym_decorated_definition_repeat1] = STATE(403),
        [anon_sym_print] = ACTIONS(87),
        [anon_sym_return] = ACTIONS(89),
        [anon_sym_del] = ACTIONS(91),
        [sym_pass_statement] = ACTIONS(93),
        [sym_break_statement] = ACTIONS(93),
        [sym_continue_statement] = ACTIONS(93),
        [anon_sym_if] = ACTIONS(777),
        [anon_sym_for] = ACTIONS(779),
        [anon_sym_while] = ACTIONS(781),
        [anon_sym_try] = ACTIONS(783),
        [anon_sym_with] = ACTIONS(785),
        [anon_sym_def] = ACTIONS(787),
        [anon_sym_class] = ACTIONS(789),
        [anon_sym_AT] = ACTIONS(109),
        [anon_sym_not] = ACTIONS(111),
        [anon_sym_LBRACK] = ACTIONS(113),
        [anon_sym_LBRACE] = ACTIONS(115),
        [sym_number] = ACTIONS(117),
        [sym_identifier] = ACTIONS(119),
        [sym_comment] = ACTIONS(77),
        [sym__dedent] = ACTIONS(835),
    },
    [415] = {
        [sym_comment] = ACTIONS(77),
        [sym__newline] = ACTIONS(835),
    },
    [416] = {
        [anon_sym_print] = ACTIONS(795),
        [anon_sym_return] = ACTIONS(795),
        [anon_sym_del] = ACTIONS(795),
        [sym_pass_statement] = ACTIONS(795),
        [sym_break_statement] = ACTIONS(795),
        [sym_continue_statement] = ACTIONS(795),
        [anon_sym_if] = ACTIONS(795),
        [anon_sym_for] = ACTIONS(795),
        [anon_sym_while] = ACTIONS(795),
        [anon_sym_try] = ACTIONS(795),
        [anon_sym_with] = ACTIONS(795),
        [anon_sym_def] = ACTIONS(795),
        [anon_sym_class] = ACTIONS(795),
        [anon_sym_AT] = ACTIONS(793),
        [anon_sym_not] = ACTIONS(795),
        [anon_sym_LBRACK] = ACTIONS(793),
        [anon_sym_LBRACE] = ACTIONS(793),
        [sym_number] = ACTIONS(795),
        [sym_identifier] = ACTIONS(797),
        [sym_comment] = ACTIONS(77),
        [sym__dedent] = ACTIONS(793),
    },
    [417] = {
        [anon_sym_print] = ACTIONS(801),
        [anon_sym_return] = ACTIONS(801),
        [anon_sym_del] = ACTIONS(801),
        [sym_pass_statement] = ACTIONS(801),
        [sym_break_statement] = ACTIONS(801),
        [sym_continue_statement] = ACTIONS(801),
        [anon_sym_if] = ACTIONS(801),
        [anon_sym_elif] = ACTIONS(801),
        [anon_sym_else] = ACTIONS(801),
        [anon_sym_for] = ACTIONS(801),
        [anon_sym_while] = ACTIONS(801),
        [anon_sym_try] = ACTIONS(801),
        [anon_sym_except] = ACTIONS(801),
        [anon_sym_finally] = ACTIONS(801),
        [anon_sym_with] = ACTIONS(801),
        [anon_sym_def] = ACTIONS(801),
        [anon_sym_class] = ACTIONS(801),
        [anon_sym_AT] = ACTIONS(799),
        [anon_sym_not] = ACTIONS(801),
        [anon_sym_LBRACK] = ACTIONS(799),
        [anon_sym_LBRACE] = ACTIONS(799),
        [sym_number] = ACTIONS(801),
        [sym_identifier] = ACTIONS(803),
        [sym_comment] = ACTIONS(77),
        [sym__dedent] = ACTIONS(799),
    },
    [418] = {
        [sym__statement] = STATE(406),
        [sym__simple_statement] = STATE(399),
        [sym_print_statement] = STATE(5),
        [sym_expression_statement] = STATE(5),
        [sym_return_statement] = STATE(5),
        [sym_delete_statement] = STATE(5),
        [sym__compound_statement] = STATE(400),
        [sym_if_statement] = STATE(401),
        [sym_for_statement] = STATE(401),
        [sym_while_statement] = STATE(401),
        [sym_try_statement] = STATE(401),
        [sym_with_statement] = STATE(401),
        [sym_function_definition] = STATE(401),
        [sym_class_definition] = STATE(401),
        [sym_decorated_definition] = STATE(401),
        [sym_decorator] = STATE(23),
        [sym__expression] = STATE(24),
        [sym_binary_operator] = STATE(17),
        [sym_unary_operator] = STATE(17),
        [sym_subscript] = STATE(17),
        [sym_call] = STATE(17),
        [sym_list] = STATE(17),
        [sym_list_comprehension] = STATE(17),
        [sym_dictionary] = STATE(17),
        [sym_dictionary_comprehension] = STATE(17),
        [sym_set] = STATE(17),
        [sym_set_comprehension] = STATE(17),
        [aux_sym_decorated_definition_repeat1] = STATE(403),
        [anon_sym_print] = ACTIONS(87),
        [anon_sym_return] = ACTIONS(89),
        [anon_sym_del] = ACTIONS(91),
        [sym_pass_statement] = ACTIONS(93),
        [sym_break_statement] = ACTIONS(93),
        [sym_continue_statement] = ACTIONS(93),
        [anon_sym_if] = ACTIONS(777),
        [anon_sym_for] = ACTIONS(779),
        [anon_sym_while] = ACTIONS(781),
        [anon_sym_try] = ACTIONS(783),
        [anon_sym_with] = ACTIONS(785),
        [anon_sym_def] = ACTIONS(787),
        [anon_sym_class] = ACTIONS(789),
        [anon_sym_AT] = ACTIONS(109),
        [anon_sym_not] = ACTIONS(111),
        [anon_sym_LBRACK] = ACTIONS(113),
        [anon_sym_LBRACE] = ACTIONS(115),
        [sym_number] = ACTIONS(117),
        [sym_identifier] = ACTIONS(119),
        [sym_comment] = ACTIONS(77),
        [sym__dedent] = ACTIONS(837),
    },
    [419] = {
        [anon_sym_print] = ACTIONS(821),
        [anon_sym_return] = ACTIONS(821),
        [anon_sym_del] = ACTIONS(821),
        [sym_pass_statement] = ACTIONS(821),
        [sym_break_statement] = ACTIONS(821),
        [sym_continue_statement] = ACTIONS(821),
        [anon_sym_if] = ACTIONS(821),
        [anon_sym_elif] = ACTIONS(821),
        [anon_sym_else] = ACTIONS(821),
        [anon_sym_for] = ACTIONS(821),
        [anon_sym_while] = ACTIONS(821),
        [anon_sym_try] = ACTIONS(821),
        [anon_sym_except] = ACTIONS(821),
        [anon_sym_finally] = ACTIONS(821),
        [anon_sym_with] = ACTIONS(821),
        [anon_sym_def] = ACTIONS(821),
        [anon_sym_class] = ACTIONS(821),
        [anon_sym_AT] = ACTIONS(819),
        [anon_sym_not] = ACTIONS(821),
        [anon_sym_LBRACK] = ACTIONS(819),
        [anon_sym_LBRACE] = ACTIONS(819),
        [sym_number] = ACTIONS(821),
        [sym_identifier] = ACTIONS(823),
        [sym_comment] = ACTIONS(77),
        [sym__dedent] = ACTIONS(819),
    },
    [420] = {
        [anon_sym_print] = ACTIONS(839),
        [anon_sym_return] = ACTIONS(839),
        [anon_sym_del] = ACTIONS(839),
        [sym_pass_statement] = ACTIONS(839),
        [sym_break_statement] = ACTIONS(839),
        [sym_continue_statement] = ACTIONS(839),
        [anon_sym_if] = ACTIONS(839),
        [anon_sym_for] = ACTIONS(839),
        [anon_sym_while] = ACTIONS(839),
        [anon_sym_try] = ACTIONS(839),
        [anon_sym_with] = ACTIONS(839),
        [anon_sym_def] = ACTIONS(839),
        [anon_sym_class] = ACTIONS(839),
        [anon_sym_AT] = ACTIONS(841),
        [anon_sym_not] = ACTIONS(839),
        [anon_sym_LBRACK] = ACTIONS(841),
        [anon_sym_LBRACE] = ACTIONS(841),
        [sym_number] = ACTIONS(839),
        [sym_identifier] = ACTIONS(843),
        [sym_comment] = ACTIONS(77),
        [sym__dedent] = ACTIONS(841),
    },
    [421] = {
        [sym_parameters] = STATE(423),
        [anon_sym_LPAREN] = ACTIONS(845),
        [sym_comment] = ACTIONS(77),
    },
    [422] = {
        [sym_default_parameter] = STATE(429),
        [sym_list_splat_parameter] = STATE(430),
        [sym_dictionary_splat_parameter] = STATE(431),
        [aux_sym_parameters_repeat1] = STATE(432),
        [anon_sym_RPAREN] = ACTIONS(847),
        [anon_sym_STAR] = ACTIONS(849),
        [sym_identifier] = ACTIONS(851),
        [sym_comment] = ACTIONS(77),
    },
    [423] = {
        [anon_sym_COLON] = ACTIONS(853),
        [sym_comment] = ACTIONS(77),
    },
    [424] = {
        [sym__simple_statement] = STATE(415),
        [sym_print_statement] = STATE(5),
        [sym_expression_statement] = STATE(5),
        [sym_return_statement] = STATE(5),
        [sym_delete_statement] = STATE(5),
        [sym__suite] = STATE(425),
        [sym__expression] = STATE(24),
        [sym_binary_operator] = STATE(17),
        [sym_unary_operator] = STATE(17),
        [sym_subscript] = STATE(17),
        [sym_call] = STATE(17),
        [sym_list] = STATE(17),
        [sym_list_comprehension] = STATE(17),
        [sym_dictionary] = STATE(17),
        [sym_dictionary_comprehension] = STATE(17),
        [sym_set] = STATE(17),
        [sym_set_comprehension] = STATE(17),
        [anon_sym_print] = ACTIONS(87),
        [anon_sym_return] = ACTIONS(89),
        [anon_sym_del] = ACTIONS(91),
        [sym_pass_statement] = ACTIONS(93),
        [sym_break_statement] = ACTIONS(93),
        [sym_continue_statement] = ACTIONS(93),
        [anon_sym_not] = ACTIONS(111),
        [anon_sym_LBRACK] = ACTIONS(113),
        [anon_sym_LBRACE] = ACTIONS(115),
        [sym_number] = ACTIONS(117),
        [sym_identifier] = ACTIONS(119),
        [sym_comment] = ACTIONS(77),
        [sym__indent] = ACTIONS(829),
    },
    [425] = {
        [anon_sym_print] = ACTIONS(855),
        [anon_sym_return] = ACTIONS(855),
        [anon_sym_del] = ACTIONS(855),
        [sym_pass_statement] = ACTIONS(855),
        [sym_break_statement] = ACTIONS(855),
        [sym_continue_statement] = ACTIONS(855),
        [anon_sym_if] = ACTIONS(855),
        [anon_sym_for] = ACTIONS(855),
        [anon_sym_while] = ACTIONS(855),
        [anon_sym_try] = ACTIONS(855),
        [anon_sym_with] = ACTIONS(855),
        [anon_sym_def] = ACTIONS(855),
        [anon_sym_class] = ACTIONS(855),
        [anon_sym_AT] = ACTIONS(857),
        [anon_sym_not] = ACTIONS(855),
        [anon_sym_LBRACK] = ACTIONS(857),
        [anon_sym_LBRACE] = ACTIONS(857),
        [sym_number] = ACTIONS(855),
        [sym_identifier] = ACTIONS(859),
        [sym_comment] = ACTIONS(77),
        [sym__dedent] = ACTIONS(857),
    },
    [426] = {
        [anon_sym_COLON] = ACTIONS(861),
        [sym_comment] = ACTIONS(77),
    },
    [427] = {
        [anon_sym_STAR] = ACTIONS(863),
        [sym_identifier] = ACTIONS(865),
        [sym_comment] = ACTIONS(77),
    },
    [428] = {
        [anon_sym_COMMA] = ACTIONS(867),
        [anon_sym_RPAREN] = ACTIONS(869),
        [anon_sym_EQ] = ACTIONS(871),
        [sym_comment] = ACTIONS(77),
    },
    [429] = {
        [anon_sym_COMMA] = ACTIONS(867),
        [anon_sym_RPAREN] = ACTIONS(869),
        [sym_comment] = ACTIONS(77),
    },
    [430] = {
        [anon_sym_COMMA] = ACTIONS(873),
        [anon_sym_RPAREN] = ACTIONS(869),
        [sym_comment] = ACTIONS(77),
    },
    [431] = {
        [anon_sym_RPAREN] = ACTIONS(869),
        [sym_comment] = ACTIONS(77),
    },
    [432] = {
        [sym_default_parameter] = STATE(434),
        [sym_list_splat_parameter] = STATE(435),
        [sym_dictionary_splat_parameter] = STATE(436),
        [anon_sym_STAR] = ACTIONS(849),
        [sym_identifier] = ACTIONS(875),
        [sym_comment] = ACTIONS(77),
    },
    [433] = {
        [anon_sym_COMMA] = ACTIONS(877),
        [anon_sym_RPAREN] = ACTIONS(879),
        [anon_sym_EQ] = ACTIONS(871),
        [sym_comment] = ACTIONS(77),
    },
    [434] = {
        [anon_sym_COMMA] = ACTIONS(877),
        [anon_sym_RPAREN] = ACTIONS(879),
        [sym_comment] = ACTIONS(77),
    },
    [435] = {
        [anon_sym_COMMA] = ACTIONS(881),
        [anon_sym_RPAREN] = ACTIONS(879),
        [sym_comment] = ACTIONS(77),
    },
    [436] = {
        [anon_sym_RPAREN] = ACTIONS(879),
        [sym_comment] = ACTIONS(77),
    },
    [437] = {
        [anon_sym_COLON] = ACTIONS(883),
        [sym_comment] = ACTIONS(77),
    },
    [438] = {
        [sym_dictionary_splat_parameter] = STATE(440),
        [anon_sym_STAR] = ACTIONS(885),
        [sym_comment] = ACTIONS(77),
    },
    [439] = {
        [anon_sym_STAR] = ACTIONS(863),
        [sym_comment] = ACTIONS(77),
    },
    [440] = {
        [anon_sym_RPAREN] = ACTIONS(887),
        [sym_comment] = ACTIONS(77),
    },
    [441] = {
        [anon_sym_COLON] = ACTIONS(889),
        [sym_comment] = ACTIONS(77),
    },
    [442] = {
        [sym_identifier] = ACTIONS(891),
        [sym_comment] = ACTIONS(77),
    },
    [443] = {
        [anon_sym_RPAREN] = ACTIONS(893),
        [sym_comment] = ACTIONS(77),
    },
    [444] = {
        [anon_sym_RPAREN] = ACTIONS(895),
        [anon_sym_STAR] = ACTIONS(897),
        [sym_identifier] = ACTIONS(899),
        [sym_comment] = ACTIONS(77),
    },
    [445] = {
        [anon_sym_COLON] = ACTIONS(901),
        [sym_comment] = ACTIONS(77),
    },
    [446] = {
        [sym__expression] = STATE(447),
        [sym_binary_operator] = STATE(43),
        [sym_unary_operator] = STATE(43),
        [sym_subscript] = STATE(43),
        [sym_call] = STATE(43),
        [sym_list] = STATE(43),
        [sym_list_comprehension] = STATE(43),
        [sym_dictionary] = STATE(43),
        [sym_dictionary_comprehension] = STATE(43),
        [sym_set] = STATE(43),
        [sym_set_comprehension] = STATE(43),
        [anon_sym_not] = ACTIONS(231),
        [anon_sym_LBRACK] = ACTIONS(127),
        [anon_sym_LBRACE] = ACTIONS(129),
        [sym_number] = ACTIONS(131),
        [sym_identifier] = ACTIONS(133),
        [sym_comment] = ACTIONS(77),
    },
    [447] = {
        [anon_sym_COMMA] = ACTIONS(903),
        [anon_sym_LPAREN] = ACTIONS(247),
        [anon_sym_RPAREN] = ACTIONS(903),
        [anon_sym_STAR] = ACTIONS(315),
        [anon_sym_PLUS] = ACTIONS(317),
        [anon_sym_DASH] = ACTIONS(317),
        [anon_sym_SLASH] = ACTIONS(319),
        [anon_sym_STAR_STAR] = ACTIONS(321),
        [anon_sym_PIPE] = ACTIONS(323),
        [anon_sym_AMP] = ACTIONS(325),
        [anon_sym_CARET] = ACTIONS(327),
        [anon_sym_LT_LT] = ACTIONS(317),
        [anon_sym_GT_GT] = ACTIONS(317),
        [anon_sym_and] = ACTIONS(325),
        [anon_sym_or] = ACTIONS(323),
        [anon_sym_LBRACK] = ACTIONS(263),
        [sym_comment] = ACTIONS(77),
    },
    [448] = {
        [anon_sym_COLON] = ACTIONS(905),
        [sym_comment] = ACTIONS(77),
    },
    [449] = {
        [sym_dictionary_splat_parameter] = STATE(450),
        [anon_sym_STAR] = ACTIONS(885),
        [sym_comment] = ACTIONS(77),
    },
    [450] = {
        [anon_sym_RPAREN] = ACTIONS(895),
        [sym_comment] = ACTIONS(77),
    },
    [451] = {
        [anon_sym_RPAREN] = ACTIONS(879),
        [anon_sym_STAR] = ACTIONS(907),
        [sym_identifier] = ACTIONS(909),
        [sym_comment] = ACTIONS(77),
    },
    [452] = {
        [anon_sym_COMMA] = ACTIONS(911),
        [anon_sym_RPAREN] = ACTIONS(911),
        [sym_comment] = ACTIONS(77),
    },
    [453] = {
        [sym__expression] = STATE(274),
        [sym_binary_operator] = STATE(43),
        [sym_unary_operator] = STATE(43),
        [sym_subscript] = STATE(43),
        [sym_call] = STATE(43),
        [sym_list] = STATE(43),
        [sym_list_comprehension] = STATE(43),
        [sym_dictionary] = STATE(43),
        [sym_dictionary_comprehension] = STATE(43),
        [sym_set] = STATE(43),
        [sym_set_comprehension] = STATE(43),
        [anon_sym_not] = ACTIONS(139),
        [anon_sym_LBRACK] = ACTIONS(127),
        [anon_sym_LBRACE] = ACTIONS(129),
        [sym_number] = ACTIONS(131),
        [sym_identifier] = ACTIONS(133),
        [sym_comment] = ACTIONS(77),
    },
    [454] = {
        [aux_sym_with_statement_repeat1] = STATE(483),
        [anon_sym_COMMA] = ACTIONS(913),
        [anon_sym_COLON] = ACTIONS(915),
        [sym_comment] = ACTIONS(77),
    },
    [455] = {
        [anon_sym_COMMA] = ACTIONS(917),
        [anon_sym_COLON] = ACTIONS(917),
        [anon_sym_as] = ACTIONS(919),
        [anon_sym_LPAREN] = ACTIONS(247),
        [anon_sym_STAR] = ACTIONS(921),
        [anon_sym_PLUS] = ACTIONS(923),
        [anon_sym_DASH] = ACTIONS(923),
        [anon_sym_SLASH] = ACTIONS(925),
        [anon_sym_STAR_STAR] = ACTIONS(927),
        [anon_sym_PIPE] = ACTIONS(929),
        [anon_sym_AMP] = ACTIONS(931),
        [anon_sym_CARET] = ACTIONS(933),
        [anon_sym_LT_LT] = ACTIONS(923),
        [anon_sym_GT_GT] = ACTIONS(923),
        [anon_sym_and] = ACTIONS(931),
        [anon_sym_or] = ACTIONS(929),
        [anon_sym_LBRACK] = ACTIONS(263),
        [sym_comment] = ACTIONS(77),
    },
    [456] = {
        [sym__expression] = STATE(469),
        [sym_binary_operator] = STATE(43),
        [sym_unary_operator] = STATE(43),
        [sym_subscript] = STATE(43),
        [sym_call] = STATE(43),
        [sym_list] = STATE(43),
        [sym_list_comprehension] = STATE(43),
        [sym_dictionary] = STATE(43),
        [sym_dictionary_comprehension] = STATE(43),
        [sym_set] = STATE(43),
        [sym_set_comprehension] = STATE(43),
        [anon_sym_not] = ACTIONS(935),
        [anon_sym_LBRACK] = ACTIONS(127),
        [anon_sym_LBRACE] = ACTIONS(129),
        [sym_number] = ACTIONS(131),
        [sym_identifier] = ACTIONS(133),
        [sym_comment] = ACTIONS(77),
    },
    [457] = {
        [sym__expression] = STATE(467),
        [sym_binary_operator] = STATE(43),
        [sym_unary_operator] = STATE(43),
        [sym_subscript] = STATE(43),
        [sym_call] = STATE(43),
        [sym_list] = STATE(43),
        [sym_list_comprehension] = STATE(43),
        [sym_dictionary] = STATE(43),
        [sym_dictionary_comprehension] = STATE(43),
        [sym_set] = STATE(43),
        [sym_set_comprehension] = STATE(43),
        [anon_sym_not] = ACTIONS(139),
        [anon_sym_LBRACK] = ACTIONS(127),
        [anon_sym_LBRACE] = ACTIONS(129),
        [sym_number] = ACTIONS(131),
        [sym_identifier] = ACTIONS(133),
        [sym_comment] = ACTIONS(77),
    },
    [458] = {
        [sym__expression] = STATE(465),
        [sym_binary_operator] = STATE(43),
        [sym_unary_operator] = STATE(43),
        [sym_subscript] = STATE(43),
        [sym_call] = STATE(43),
        [sym_list] = STATE(43),
        [sym_list_comprehension] = STATE(43),
        [sym_dictionary] = STATE(43),
        [sym_dictionary_comprehension] = STATE(43),
        [sym_set] = STATE(43),
        [sym_set_comprehension] = STATE(43),
        [anon_sym_not] = ACTIONS(139),
        [anon_sym_LBRACK] = ACTIONS(127),
        [anon_sym_LBRACE] = ACTIONS(129),
        [sym_number] = ACTIONS(131),
        [sym_identifier] = ACTIONS(133),
        [sym_comment] = ACTIONS(77),
    },
    [459] = {
        [sym__expression] = STATE(75),
        [sym_binary_operator] = STATE(43),
        [sym_unary_operator] = STATE(43),
        [sym_subscript] = STATE(43),
        [sym_call] = STATE(43),
        [sym_list] = STATE(43),
        [sym_list_comprehension] = STATE(43),
        [sym_dictionary] = STATE(43),
        [sym_dictionary_comprehension] = STATE(43),
        [sym_set] = STATE(43),
        [sym_set_comprehension] = STATE(43),
        [anon_sym_not] = ACTIONS(139),
        [anon_sym_LBRACK] = ACTIONS(127),
        [anon_sym_LBRACE] = ACTIONS(129),
        [sym_number] = ACTIONS(131),
        [sym_identifier] = ACTIONS(133),
        [sym_comment] = ACTIONS(77),
    },
    [460] = {
        [sym__expression] = STATE(463),
        [sym_binary_operator] = STATE(43),
        [sym_unary_operator] = STATE(43),
        [sym_subscript] = STATE(43),
        [sym_call] = STATE(43),
        [sym_list] = STATE(43),
        [sym_list_comprehension] = STATE(43),
        [sym_dictionary] = STATE(43),
        [sym_dictionary_comprehension] = STATE(43),
        [sym_set] = STATE(43),
        [sym_set_comprehension] = STATE(43),
        [anon_sym_not] = ACTIONS(139),
        [anon_sym_LBRACK] = ACTIONS(127),
        [anon_sym_LBRACE] = ACTIONS(129),
        [sym_number] = ACTIONS(131),
        [sym_identifier] = ACTIONS(133),
        [sym_comment] = ACTIONS(77),
    },
    [461] = {
        [sym__expression] = STATE(464),
        [sym_binary_operator] = STATE(43),
        [sym_unary_operator] = STATE(43),
        [sym_subscript] = STATE(43),
        [sym_call] = STATE(43),
        [sym_list] = STATE(43),
        [sym_list_comprehension] = STATE(43),
        [sym_dictionary] = STATE(43),
        [sym_dictionary_comprehension] = STATE(43),
        [sym_set] = STATE(43),
        [sym_set_comprehension] = STATE(43),
        [anon_sym_not] = ACTIONS(139),
        [anon_sym_LBRACK] = ACTIONS(127),
        [anon_sym_LBRACE] = ACTIONS(129),
        [sym_number] = ACTIONS(131),
        [sym_identifier] = ACTIONS(133),
        [sym_comment] = ACTIONS(77),
    },
    [462] = {
        [sym__expression] = STATE(466),
        [sym_binary_operator] = STATE(43),
        [sym_unary_operator] = STATE(43),
        [sym_subscript] = STATE(43),
        [sym_call] = STATE(43),
        [sym_list] = STATE(43),
        [sym_list_comprehension] = STATE(43),
        [sym_dictionary] = STATE(43),
        [sym_dictionary_comprehension] = STATE(43),
        [sym_set] = STATE(43),
        [sym_set_comprehension] = STATE(43),
        [anon_sym_not] = ACTIONS(139),
        [anon_sym_LBRACK] = ACTIONS(127),
        [anon_sym_LBRACE] = ACTIONS(129),
        [sym_number] = ACTIONS(131),
        [sym_identifier] = ACTIONS(133),
        [sym_comment] = ACTIONS(77),
    },
    [463] = {
        [anon_sym_COMMA] = ACTIONS(303),
        [anon_sym_COLON] = ACTIONS(303),
        [anon_sym_as] = ACTIONS(303),
        [anon_sym_LPAREN] = ACTIONS(247),
        [anon_sym_STAR] = ACTIONS(921),
        [anon_sym_PLUS] = ACTIONS(923),
        [anon_sym_DASH] = ACTIONS(923),
        [anon_sym_SLASH] = ACTIONS(925),
        [anon_sym_STAR_STAR] = ACTIONS(927),
        [anon_sym_PIPE] = ACTIONS(303),
        [anon_sym_AMP] = ACTIONS(931),
        [anon_sym_CARET] = ACTIONS(933),
        [anon_sym_LT_LT] = ACTIONS(923),
        [anon_sym_GT_GT] = ACTIONS(923),
        [anon_sym_and] = ACTIONS(931),
        [anon_sym_or] = ACTIONS(303),
        [anon_sym_LBRACK] = ACTIONS(303),
        [sym_comment] = ACTIONS(77),
    },
    [464] = {
        [anon_sym_COMMA] = ACTIONS(303),
        [anon_sym_COLON] = ACTIONS(303),
        [anon_sym_as] = ACTIONS(303),
        [anon_sym_LPAREN] = ACTIONS(247),
        [anon_sym_STAR] = ACTIONS(921),
        [anon_sym_PLUS] = ACTIONS(923),
        [anon_sym_DASH] = ACTIONS(923),
        [anon_sym_SLASH] = ACTIONS(925),
        [anon_sym_STAR_STAR] = ACTIONS(927),
        [anon_sym_PIPE] = ACTIONS(303),
        [anon_sym_AMP] = ACTIONS(303),
        [anon_sym_CARET] = ACTIONS(933),
        [anon_sym_LT_LT] = ACTIONS(923),
        [anon_sym_GT_GT] = ACTIONS(923),
        [anon_sym_and] = ACTIONS(303),
        [anon_sym_or] = ACTIONS(303),
        [anon_sym_LBRACK] = ACTIONS(303),
        [sym_comment] = ACTIONS(77),
    },
    [465] = {
        [anon_sym_COMMA] = ACTIONS(303),
        [anon_sym_COLON] = ACTIONS(303),
        [anon_sym_as] = ACTIONS(303),
        [anon_sym_LPAREN] = ACTIONS(247),
        [anon_sym_STAR] = ACTIONS(921),
        [anon_sym_PLUS] = ACTIONS(303),
        [anon_sym_DASH] = ACTIONS(303),
        [anon_sym_SLASH] = ACTIONS(925),
        [anon_sym_STAR_STAR] = ACTIONS(927),
        [anon_sym_PIPE] = ACTIONS(303),
        [anon_sym_AMP] = ACTIONS(303),
        [anon_sym_CARET] = ACTIONS(303),
        [anon_sym_LT_LT] = ACTIONS(303),
        [anon_sym_GT_GT] = ACTIONS(303),
        [anon_sym_and] = ACTIONS(303),
        [anon_sym_or] = ACTIONS(303),
        [anon_sym_LBRACK] = ACTIONS(303),
        [sym_comment] = ACTIONS(77),
    },
    [466] = {
        [anon_sym_COMMA] = ACTIONS(303),
        [anon_sym_COLON] = ACTIONS(303),
        [anon_sym_as] = ACTIONS(303),
        [anon_sym_LPAREN] = ACTIONS(247),
        [anon_sym_STAR] = ACTIONS(921),
        [anon_sym_PLUS] = ACTIONS(923),
        [anon_sym_DASH] = ACTIONS(923),
        [anon_sym_SLASH] = ACTIONS(925),
        [anon_sym_STAR_STAR] = ACTIONS(927),
        [anon_sym_PIPE] = ACTIONS(303),
        [anon_sym_AMP] = ACTIONS(303),
        [anon_sym_CARET] = ACTIONS(303),
        [anon_sym_LT_LT] = ACTIONS(923),
        [anon_sym_GT_GT] = ACTIONS(923),
        [anon_sym_and] = ACTIONS(303),
        [anon_sym_or] = ACTIONS(303),
        [anon_sym_LBRACK] = ACTIONS(303),
        [sym_comment] = ACTIONS(77),
    },
    [467] = {
        [anon_sym_COMMA] = ACTIONS(303),
        [anon_sym_COLON] = ACTIONS(303),
        [anon_sym_as] = ACTIONS(303),
        [anon_sym_LPAREN] = ACTIONS(247),
        [anon_sym_STAR] = ACTIONS(305),
        [anon_sym_PLUS] = ACTIONS(303),
        [anon_sym_DASH] = ACTIONS(303),
        [anon_sym_SLASH] = ACTIONS(303),
        [anon_sym_STAR_STAR] = ACTIONS(927),
        [anon_sym_PIPE] = ACTIONS(303),
        [anon_sym_AMP] = ACTIONS(303),
        [anon_sym_CARET] = ACTIONS(303),
        [anon_sym_LT_LT] = ACTIONS(303),
        [anon_sym_GT_GT] = ACTIONS(303),
        [anon_sym_and] = ACTIONS(303),
        [anon_sym_or] = ACTIONS(303),
        [anon_sym_LBRACK] = ACTIONS(303),
        [sym_comment] = ACTIONS(77),
    },
    [468] = {
        [sym__expression] = STATE(274),
        [sym_binary_operator] = STATE(43),
        [sym_unary_operator] = STATE(43),
        [sym_subscript] = STATE(43),
        [sym_call] = STATE(43),
        [sym_list] = STATE(43),
        [sym_list_comprehension] = STATE(43),
        [sym_dictionary] = STATE(43),
        [sym_dictionary_comprehension] = STATE(43),
        [sym_set] = STATE(43),
        [sym_set_comprehension] = STATE(43),
        [anon_sym_not] = ACTIONS(935),
        [anon_sym_LBRACK] = ACTIONS(127),
        [anon_sym_LBRACE] = ACTIONS(129),
        [sym_number] = ACTIONS(131),
        [sym_identifier] = ACTIONS(133),
        [sym_comment] = ACTIONS(77),
    },
    [469] = {
        [anon_sym_COMMA] = ACTIONS(937),
        [anon_sym_COLON] = ACTIONS(937),
        [anon_sym_LPAREN] = ACTIONS(247),
        [anon_sym_STAR] = ACTIONS(939),
        [anon_sym_PLUS] = ACTIONS(941),
        [anon_sym_DASH] = ACTIONS(941),
        [anon_sym_SLASH] = ACTIONS(943),
        [anon_sym_STAR_STAR] = ACTIONS(945),
        [anon_sym_PIPE] = ACTIONS(947),
        [anon_sym_AMP] = ACTIONS(949),
        [anon_sym_CARET] = ACTIONS(951),
        [anon_sym_LT_LT] = ACTIONS(941),
        [anon_sym_GT_GT] = ACTIONS(941),
        [anon_sym_and] = ACTIONS(949),
        [anon_sym_or] = ACTIONS(947),
        [anon_sym_LBRACK] = ACTIONS(263),
        [sym_comment] = ACTIONS(77),
    },
    [470] = {
        [sym__expression] = STATE(480),
        [sym_binary_operator] = STATE(43),
        [sym_unary_operator] = STATE(43),
        [sym_subscript] = STATE(43),
        [sym_call] = STATE(43),
        [sym_list] = STATE(43),
        [sym_list_comprehension] = STATE(43),
        [sym_dictionary] = STATE(43),
        [sym_dictionary_comprehension] = STATE(43),
        [sym_set] = STATE(43),
        [sym_set_comprehension] = STATE(43),
        [anon_sym_not] = ACTIONS(935),
        [anon_sym_LBRACK] = ACTIONS(127),
        [anon_sym_LBRACE] = ACTIONS(129),
        [sym_number] = ACTIONS(131),
        [sym_identifier] = ACTIONS(133),
        [sym_comment] = ACTIONS(77),
    },
    [471] = {
        [sym__expression] = STATE(478),
        [sym_binary_operator] = STATE(43),
        [sym_unary_operator] = STATE(43),
        [sym_subscript] = STATE(43),
        [sym_call] = STATE(43),
        [sym_list] = STATE(43),
        [sym_list_comprehension] = STATE(43),
        [sym_dictionary] = STATE(43),
        [sym_dictionary_comprehension] = STATE(43),
        [sym_set] = STATE(43),
        [sym_set_comprehension] = STATE(43),
        [anon_sym_not] = ACTIONS(935),
        [anon_sym_LBRACK] = ACTIONS(127),
        [anon_sym_LBRACE] = ACTIONS(129),
        [sym_number] = ACTIONS(131),
        [sym_identifier] = ACTIONS(133),
        [sym_comment] = ACTIONS(77),
    },
    [472] = {
        [sym__expression] = STATE(75),
        [sym_binary_operator] = STATE(43),
        [sym_unary_operator] = STATE(43),
        [sym_subscript] = STATE(43),
        [sym_call] = STATE(43),
        [sym_list] = STATE(43),
        [sym_list_comprehension] = STATE(43),
        [sym_dictionary] = STATE(43),
        [sym_dictionary_comprehension] = STATE(43),
        [sym_set] = STATE(43),
        [sym_set_comprehension] = STATE(43),
        [anon_sym_not] = ACTIONS(935),
        [anon_sym_LBRACK] = ACTIONS(127),
        [anon_sym_LBRACE] = ACTIONS(129),
        [sym_number] = ACTIONS(131),
        [sym_identifier] = ACTIONS(133),
        [sym_comment] = ACTIONS(77),
    },
    [473] = {
        [sym__expression] = STATE(476),
        [sym_binary_operator] = STATE(43),
        [sym_unary_operator] = STATE(43),
        [sym_subscript] = STATE(43),
        [sym_call] = STATE(43),
        [sym_list] = STATE(43),
        [sym_list_comprehension] = STATE(43),
        [sym_dictionary] = STATE(43),
        [sym_dictionary_comprehension] = STATE(43),
        [sym_set] = STATE(43),
        [sym_set_comprehension] = STATE(43),
        [anon_sym_not] = ACTIONS(935),
        [anon_sym_LBRACK] = ACTIONS(127),
        [anon_sym_LBRACE] = ACTIONS(129),
        [sym_number] = ACTIONS(131),
        [sym_identifier] = ACTIONS(133),
        [sym_comment] = ACTIONS(77),
    },
    [474] = {
        [sym__expression] = STATE(477),
        [sym_binary_operator] = STATE(43),
        [sym_unary_operator] = STATE(43),
        [sym_subscript] = STATE(43),
        [sym_call] = STATE(43),
        [sym_list] = STATE(43),
        [sym_list_comprehension] = STATE(43),
        [sym_dictionary] = STATE(43),
        [sym_dictionary_comprehension] = STATE(43),
        [sym_set] = STATE(43),
        [sym_set_comprehension] = STATE(43),
        [anon_sym_not] = ACTIONS(935),
        [anon_sym_LBRACK] = ACTIONS(127),
        [anon_sym_LBRACE] = ACTIONS(129),
        [sym_number] = ACTIONS(131),
        [sym_identifier] = ACTIONS(133),
        [sym_comment] = ACTIONS(77),
    },
    [475] = {
        [sym__expression] = STATE(479),
        [sym_binary_operator] = STATE(43),
        [sym_unary_operator] = STATE(43),
        [sym_subscript] = STATE(43),
        [sym_call] = STATE(43),
        [sym_list] = STATE(43),
        [sym_list_comprehension] = STATE(43),
        [sym_dictionary] = STATE(43),
        [sym_dictionary_comprehension] = STATE(43),
        [sym_set] = STATE(43),
        [sym_set_comprehension] = STATE(43),
        [anon_sym_not] = ACTIONS(935),
        [anon_sym_LBRACK] = ACTIONS(127),
        [anon_sym_LBRACE] = ACTIONS(129),
        [sym_number] = ACTIONS(131),
        [sym_identifier] = ACTIONS(133),
        [sym_comment] = ACTIONS(77),
    },
    [476] = {
        [anon_sym_COMMA] = ACTIONS(303),
        [anon_sym_COLON] = ACTIONS(303),
        [anon_sym_LPAREN] = ACTIONS(247),
        [anon_sym_STAR] = ACTIONS(939),
        [anon_sym_PLUS] = ACTIONS(941),
        [anon_sym_DASH] = ACTIONS(941),
        [anon_sym_SLASH] = ACTIONS(943),
        [anon_sym_STAR_STAR] = ACTIONS(945),
        [anon_sym_PIPE] = ACTIONS(303),
        [anon_sym_AMP] = ACTIONS(949),
        [anon_sym_CARET] = ACTIONS(951),
        [anon_sym_LT_LT] = ACTIONS(941),
        [anon_sym_GT_GT] = ACTIONS(941),
        [anon_sym_and] = ACTIONS(949),
        [anon_sym_or] = ACTIONS(303),
        [anon_sym_LBRACK] = ACTIONS(303),
        [sym_comment] = ACTIONS(77),
    },
    [477] = {
        [anon_sym_COMMA] = ACTIONS(303),
        [anon_sym_COLON] = ACTIONS(303),
        [anon_sym_LPAREN] = ACTIONS(247),
        [anon_sym_STAR] = ACTIONS(939),
        [anon_sym_PLUS] = ACTIONS(941),
        [anon_sym_DASH] = ACTIONS(941),
        [anon_sym_SLASH] = ACTIONS(943),
        [anon_sym_STAR_STAR] = ACTIONS(945),
        [anon_sym_PIPE] = ACTIONS(303),
        [anon_sym_AMP] = ACTIONS(303),
        [anon_sym_CARET] = ACTIONS(951),
        [anon_sym_LT_LT] = ACTIONS(941),
        [anon_sym_GT_GT] = ACTIONS(941),
        [anon_sym_and] = ACTIONS(303),
        [anon_sym_or] = ACTIONS(303),
        [anon_sym_LBRACK] = ACTIONS(303),
        [sym_comment] = ACTIONS(77),
    },
    [478] = {
        [anon_sym_COMMA] = ACTIONS(303),
        [anon_sym_COLON] = ACTIONS(303),
        [anon_sym_LPAREN] = ACTIONS(247),
        [anon_sym_STAR] = ACTIONS(939),
        [anon_sym_PLUS] = ACTIONS(303),
        [anon_sym_DASH] = ACTIONS(303),
        [anon_sym_SLASH] = ACTIONS(943),
        [anon_sym_STAR_STAR] = ACTIONS(945),
        [anon_sym_PIPE] = ACTIONS(303),
        [anon_sym_AMP] = ACTIONS(303),
        [anon_sym_CARET] = ACTIONS(303),
        [anon_sym_LT_LT] = ACTIONS(303),
        [anon_sym_GT_GT] = ACTIONS(303),
        [anon_sym_and] = ACTIONS(303),
        [anon_sym_or] = ACTIONS(303),
        [anon_sym_LBRACK] = ACTIONS(303),
        [sym_comment] = ACTIONS(77),
    },
    [479] = {
        [anon_sym_COMMA] = ACTIONS(303),
        [anon_sym_COLON] = ACTIONS(303),
        [anon_sym_LPAREN] = ACTIONS(247),
        [anon_sym_STAR] = ACTIONS(939),
        [anon_sym_PLUS] = ACTIONS(941),
        [anon_sym_DASH] = ACTIONS(941),
        [anon_sym_SLASH] = ACTIONS(943),
        [anon_sym_STAR_STAR] = ACTIONS(945),
        [anon_sym_PIPE] = ACTIONS(303),
        [anon_sym_AMP] = ACTIONS(303),
        [anon_sym_CARET] = ACTIONS(303),
        [anon_sym_LT_LT] = ACTIONS(941),
        [anon_sym_GT_GT] = ACTIONS(941),
        [anon_sym_and] = ACTIONS(303),
        [anon_sym_or] = ACTIONS(303),
        [anon_sym_LBRACK] = ACTIONS(303),
        [sym_comment] = ACTIONS(77),
    },
    [480] = {
        [anon_sym_COMMA] = ACTIONS(303),
        [anon_sym_COLON] = ACTIONS(303),
        [anon_sym_LPAREN] = ACTIONS(247),
        [anon_sym_STAR] = ACTIONS(305),
        [anon_sym_PLUS] = ACTIONS(303),
        [anon_sym_DASH] = ACTIONS(303),
        [anon_sym_SLASH] = ACTIONS(303),
        [anon_sym_STAR_STAR] = ACTIONS(945),
        [anon_sym_PIPE] = ACTIONS(303),
        [anon_sym_AMP] = ACTIONS(303),
        [anon_sym_CARET] = ACTIONS(303),
        [anon_sym_LT_LT] = ACTIONS(303),
        [anon_sym_GT_GT] = ACTIONS(303),
        [anon_sym_and] = ACTIONS(303),
        [anon_sym_or] = ACTIONS(303),
        [anon_sym_LBRACK] = ACTIONS(303),
        [sym_comment] = ACTIONS(77),
    },
    [481] = {
        [sym_with_item] = STATE(489),
        [sym__expression] = STATE(455),
        [sym_binary_operator] = STATE(43),
        [sym_unary_operator] = STATE(43),
        [sym_subscript] = STATE(43),
        [sym_call] = STATE(43),
        [sym_list] = STATE(43),
        [sym_list_comprehension] = STATE(43),
        [sym_dictionary] = STATE(43),
        [sym_dictionary_comprehension] = STATE(43),
        [sym_set] = STATE(43),
        [sym_set_comprehension] = STATE(43),
        [anon_sym_not] = ACTIONS(139),
        [anon_sym_LBRACK] = ACTIONS(127),
        [anon_sym_LBRACE] = ACTIONS(129),
        [sym_number] = ACTIONS(131),
        [sym_identifier] = ACTIONS(133),
        [sym_comment] = ACTIONS(77),
    },
    [482] = {
        [sym__simple_statement] = STATE(415),
        [sym_print_statement] = STATE(5),
        [sym_expression_statement] = STATE(5),
        [sym_return_statement] = STATE(5),
        [sym_delete_statement] = STATE(5),
        [sym__suite] = STATE(488),
        [sym__expression] = STATE(24),
        [sym_binary_operator] = STATE(17),
        [sym_unary_operator] = STATE(17),
        [sym_subscript] = STATE(17),
        [sym_call] = STATE(17),
        [sym_list] = STATE(17),
        [sym_list_comprehension] = STATE(17),
        [sym_dictionary] = STATE(17),
        [sym_dictionary_comprehension] = STATE(17),
        [sym_set] = STATE(17),
        [sym_set_comprehension] = STATE(17),
        [anon_sym_print] = ACTIONS(87),
        [anon_sym_return] = ACTIONS(89),
        [anon_sym_del] = ACTIONS(91),
        [sym_pass_statement] = ACTIONS(93),
        [sym_break_statement] = ACTIONS(93),
        [sym_continue_statement] = ACTIONS(93),
        [anon_sym_not] = ACTIONS(111),
        [anon_sym_LBRACK] = ACTIONS(113),
        [anon_sym_LBRACE] = ACTIONS(115),
        [sym_number] = ACTIONS(117),
        [sym_identifier] = ACTIONS(119),
        [sym_comment] = ACTIONS(77),
        [sym__indent] = ACTIONS(829),
    },
    [483] = {
        [anon_sym_COMMA] = ACTIONS(953),
        [anon_sym_COLON] = ACTIONS(955),
        [sym_comment] = ACTIONS(77),
    },
    [484] = {
        [sym_with_item] = STATE(487),
        [sym__expression] = STATE(455),
        [sym_binary_operator] = STATE(43),
        [sym_unary_operator] = STATE(43),
        [sym_subscript] = STATE(43),
        [sym_call] = STATE(43),
        [sym_list] = STATE(43),
        [sym_list_comprehension] = STATE(43),
        [sym_dictionary] = STATE(43),
        [sym_dictionary_comprehension] = STATE(43),
        [sym_set] = STATE(43),
        [sym_set_comprehension] = STATE(43),
        [anon_sym_not] = ACTIONS(139),
        [anon_sym_LBRACK] = ACTIONS(127),
        [anon_sym_LBRACE] = ACTIONS(129),
        [sym_number] = ACTIONS(131),
        [sym_identifier] = ACTIONS(133),
        [sym_comment] = ACTIONS(77),
    },
    [485] = {
        [sym__simple_statement] = STATE(415),
        [sym_print_statement] = STATE(5),
        [sym_expression_statement] = STATE(5),
        [sym_return_statement] = STATE(5),
        [sym_delete_statement] = STATE(5),
        [sym__suite] = STATE(486),
        [sym__expression] = STATE(24),
        [sym_binary_operator] = STATE(17),
        [sym_unary_operator] = STATE(17),
        [sym_subscript] = STATE(17),
        [sym_call] = STATE(17),
        [sym_list] = STATE(17),
        [sym_list_comprehension] = STATE(17),
        [sym_dictionary] = STATE(17),
        [sym_dictionary_comprehension] = STATE(17),
        [sym_set] = STATE(17),
        [sym_set_comprehension] = STATE(17),
        [anon_sym_print] = ACTIONS(87),
        [anon_sym_return] = ACTIONS(89),
        [anon_sym_del] = ACTIONS(91),
        [sym_pass_statement] = ACTIONS(93),
        [sym_break_statement] = ACTIONS(93),
        [sym_continue_statement] = ACTIONS(93),
        [anon_sym_not] = ACTIONS(111),
        [anon_sym_LBRACK] = ACTIONS(113),
        [anon_sym_LBRACE] = ACTIONS(115),
        [sym_number] = ACTIONS(117),
        [sym_identifier] = ACTIONS(119),
        [sym_comment] = ACTIONS(77),
        [sym__indent] = ACTIONS(829),
    },
    [486] = {
        [anon_sym_print] = ACTIONS(957),
        [anon_sym_return] = ACTIONS(957),
        [anon_sym_del] = ACTIONS(957),
        [sym_pass_statement] = ACTIONS(957),
        [sym_break_statement] = ACTIONS(957),
        [sym_continue_statement] = ACTIONS(957),
        [anon_sym_if] = ACTIONS(957),
        [anon_sym_for] = ACTIONS(957),
        [anon_sym_while] = ACTIONS(957),
        [anon_sym_try] = ACTIONS(957),
        [anon_sym_with] = ACTIONS(957),
        [anon_sym_def] = ACTIONS(957),
        [anon_sym_class] = ACTIONS(957),
        [anon_sym_AT] = ACTIONS(959),
        [anon_sym_not] = ACTIONS(957),
        [anon_sym_LBRACK] = ACTIONS(959),
        [anon_sym_LBRACE] = ACTIONS(959),
        [sym_number] = ACTIONS(957),
        [sym_identifier] = ACTIONS(961),
        [sym_comment] = ACTIONS(77),
        [sym__dedent] = ACTIONS(959),
    },
    [487] = {
        [anon_sym_COMMA] = ACTIONS(963),
        [anon_sym_COLON] = ACTIONS(963),
        [sym_comment] = ACTIONS(77),
    },
    [488] = {
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
        [sym_comment] = ACTIONS(77),
        [sym__dedent] = ACTIONS(967),
    },
    [489] = {
        [anon_sym_COMMA] = ACTIONS(971),
        [anon_sym_COLON] = ACTIONS(971),
        [sym_comment] = ACTIONS(77),
    },
    [490] = {
        [sym__simple_statement] = STATE(492),
        [sym_print_statement] = STATE(5),
        [sym_expression_statement] = STATE(5),
        [sym_return_statement] = STATE(5),
        [sym_delete_statement] = STATE(5),
        [sym__suite] = STATE(493),
        [sym__expression] = STATE(24),
        [sym_binary_operator] = STATE(17),
        [sym_unary_operator] = STATE(17),
        [sym_subscript] = STATE(17),
        [sym_call] = STATE(17),
        [sym_list] = STATE(17),
        [sym_list_comprehension] = STATE(17),
        [sym_dictionary] = STATE(17),
        [sym_dictionary_comprehension] = STATE(17),
        [sym_set] = STATE(17),
        [sym_set_comprehension] = STATE(17),
        [anon_sym_print] = ACTIONS(87),
        [anon_sym_return] = ACTIONS(89),
        [anon_sym_del] = ACTIONS(91),
        [sym_pass_statement] = ACTIONS(93),
        [sym_break_statement] = ACTIONS(93),
        [sym_continue_statement] = ACTIONS(93),
        [anon_sym_not] = ACTIONS(111),
        [anon_sym_LBRACK] = ACTIONS(113),
        [anon_sym_LBRACE] = ACTIONS(115),
        [sym_number] = ACTIONS(117),
        [sym_identifier] = ACTIONS(119),
        [sym_comment] = ACTIONS(77),
        [sym__indent] = ACTIONS(973),
    },
    [491] = {
        [sym__statement] = STATE(398),
        [sym__simple_statement] = STATE(399),
        [sym_print_statement] = STATE(5),
        [sym_expression_statement] = STATE(5),
        [sym_return_statement] = STATE(5),
        [sym_delete_statement] = STATE(5),
        [sym__compound_statement] = STATE(400),
        [sym_if_statement] = STATE(401),
        [sym_for_statement] = STATE(401),
        [sym_while_statement] = STATE(401),
        [sym_try_statement] = STATE(401),
        [sym_with_statement] = STATE(401),
        [sym_function_definition] = STATE(401),
        [sym_class_definition] = STATE(401),
        [sym_decorated_definition] = STATE(401),
        [sym_decorator] = STATE(23),
        [sym__expression] = STATE(24),
        [sym_binary_operator] = STATE(17),
        [sym_unary_operator] = STATE(17),
        [sym_subscript] = STATE(17),
        [sym_call] = STATE(17),
        [sym_list] = STATE(17),
        [sym_list_comprehension] = STATE(17),
        [sym_dictionary] = STATE(17),
        [sym_dictionary_comprehension] = STATE(17),
        [sym_set] = STATE(17),
        [sym_set_comprehension] = STATE(17),
        [aux_sym_module_repeat1] = STATE(516),
        [aux_sym_decorated_definition_repeat1] = STATE(403),
        [anon_sym_print] = ACTIONS(87),
        [anon_sym_return] = ACTIONS(89),
        [anon_sym_del] = ACTIONS(91),
        [sym_pass_statement] = ACTIONS(93),
        [sym_break_statement] = ACTIONS(93),
        [sym_continue_statement] = ACTIONS(93),
        [anon_sym_if] = ACTIONS(777),
        [anon_sym_for] = ACTIONS(779),
        [anon_sym_while] = ACTIONS(781),
        [anon_sym_try] = ACTIONS(783),
        [anon_sym_with] = ACTIONS(785),
        [anon_sym_def] = ACTIONS(787),
        [anon_sym_class] = ACTIONS(789),
        [anon_sym_AT] = ACTIONS(109),
        [anon_sym_not] = ACTIONS(111),
        [anon_sym_LBRACK] = ACTIONS(113),
        [anon_sym_LBRACE] = ACTIONS(115),
        [sym_number] = ACTIONS(117),
        [sym_identifier] = ACTIONS(119),
        [sym_comment] = ACTIONS(77),
        [sym__dedent] = ACTIONS(975),
    },
    [492] = {
        [sym_comment] = ACTIONS(77),
        [sym__newline] = ACTIONS(975),
    },
    [493] = {
        [sym_except_clause] = STATE(496),
        [sym_finally_clause] = STATE(497),
        [aux_sym_try_statement_repeat1] = STATE(498),
        [anon_sym_except] = ACTIONS(977),
        [anon_sym_finally] = ACTIONS(979),
        [sym_comment] = ACTIONS(77),
    },
    [494] = {
        [sym__expression] = STATE(508),
        [sym_binary_operator] = STATE(43),
        [sym_unary_operator] = STATE(43),
        [sym_subscript] = STATE(43),
        [sym_call] = STATE(43),
        [sym_list] = STATE(43),
        [sym_list_comprehension] = STATE(43),
        [sym_dictionary] = STATE(43),
        [sym_dictionary_comprehension] = STATE(43),
        [sym_set] = STATE(43),
        [sym_set_comprehension] = STATE(43),
        [anon_sym_not] = ACTIONS(139),
        [anon_sym_LBRACK] = ACTIONS(127),
        [anon_sym_LBRACE] = ACTIONS(129),
        [sym_number] = ACTIONS(131),
        [sym_identifier] = ACTIONS(133),
        [sym_comment] = ACTIONS(77),
    },
    [495] = {
        [anon_sym_COLON] = ACTIONS(981),
        [sym_comment] = ACTIONS(77),
    },
    [496] = {
        [anon_sym_print] = ACTIONS(983),
        [anon_sym_return] = ACTIONS(983),
        [anon_sym_del] = ACTIONS(983),
        [sym_pass_statement] = ACTIONS(983),
        [sym_break_statement] = ACTIONS(983),
        [sym_continue_statement] = ACTIONS(983),
        [anon_sym_if] = ACTIONS(983),
        [anon_sym_else] = ACTIONS(983),
        [anon_sym_for] = ACTIONS(983),
        [anon_sym_while] = ACTIONS(983),
        [anon_sym_try] = ACTIONS(983),
        [anon_sym_except] = ACTIONS(983),
        [anon_sym_finally] = ACTIONS(983),
        [anon_sym_with] = ACTIONS(983),
        [anon_sym_def] = ACTIONS(983),
        [anon_sym_class] = ACTIONS(983),
        [anon_sym_AT] = ACTIONS(985),
        [anon_sym_not] = ACTIONS(983),
        [anon_sym_LBRACK] = ACTIONS(985),
        [anon_sym_LBRACE] = ACTIONS(985),
        [sym_number] = ACTIONS(983),
        [sym_identifier] = ACTIONS(987),
        [sym_comment] = ACTIONS(77),
        [sym__dedent] = ACTIONS(985),
    },
    [497] = {
        [anon_sym_print] = ACTIONS(989),
        [anon_sym_return] = ACTIONS(989),
        [anon_sym_del] = ACTIONS(989),
        [sym_pass_statement] = ACTIONS(989),
        [sym_break_statement] = ACTIONS(989),
        [sym_continue_statement] = ACTIONS(989),
        [anon_sym_if] = ACTIONS(989),
        [anon_sym_for] = ACTIONS(989),
        [anon_sym_while] = ACTIONS(989),
        [anon_sym_try] = ACTIONS(989),
        [anon_sym_with] = ACTIONS(989),
        [anon_sym_def] = ACTIONS(989),
        [anon_sym_class] = ACTIONS(989),
        [anon_sym_AT] = ACTIONS(991),
        [anon_sym_not] = ACTIONS(989),
        [anon_sym_LBRACK] = ACTIONS(991),
        [anon_sym_LBRACE] = ACTIONS(991),
        [sym_number] = ACTIONS(989),
        [sym_identifier] = ACTIONS(993),
        [sym_comment] = ACTIONS(77),
        [sym__dedent] = ACTIONS(991),
    },
    [498] = {
        [sym_else_clause] = STATE(500),
        [sym_except_clause] = STATE(501),
        [sym_finally_clause] = STATE(502),
        [anon_sym_print] = ACTIONS(989),
        [anon_sym_return] = ACTIONS(989),
        [anon_sym_del] = ACTIONS(989),
        [sym_pass_statement] = ACTIONS(989),
        [sym_break_statement] = ACTIONS(989),
        [sym_continue_statement] = ACTIONS(989),
        [anon_sym_if] = ACTIONS(989),
        [anon_sym_else] = ACTIONS(995),
        [anon_sym_for] = ACTIONS(989),
        [anon_sym_while] = ACTIONS(989),
        [anon_sym_try] = ACTIONS(989),
        [anon_sym_except] = ACTIONS(997),
        [anon_sym_finally] = ACTIONS(999),
        [anon_sym_with] = ACTIONS(989),
        [anon_sym_def] = ACTIONS(989),
        [anon_sym_class] = ACTIONS(989),
        [anon_sym_AT] = ACTIONS(991),
        [anon_sym_not] = ACTIONS(989),
        [anon_sym_LBRACK] = ACTIONS(991),
        [anon_sym_LBRACE] = ACTIONS(991),
        [sym_number] = ACTIONS(989),
        [sym_identifier] = ACTIONS(993),
        [sym_comment] = ACTIONS(77),
        [sym__dedent] = ACTIONS(991),
    },
    [499] = {
        [anon_sym_COLON] = ACTIONS(1001),
        [sym_comment] = ACTIONS(77),
    },
    [500] = {
        [sym_finally_clause] = STATE(503),
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
        [anon_sym_finally] = ACTIONS(999),
        [anon_sym_with] = ACTIONS(1003),
        [anon_sym_def] = ACTIONS(1003),
        [anon_sym_class] = ACTIONS(1003),
        [anon_sym_AT] = ACTIONS(1005),
        [anon_sym_not] = ACTIONS(1003),
        [anon_sym_LBRACK] = ACTIONS(1005),
        [anon_sym_LBRACE] = ACTIONS(1005),
        [sym_number] = ACTIONS(1003),
        [sym_identifier] = ACTIONS(1007),
        [sym_comment] = ACTIONS(77),
        [sym__dedent] = ACTIONS(1005),
    },
    [501] = {
        [anon_sym_print] = ACTIONS(1009),
        [anon_sym_return] = ACTIONS(1009),
        [anon_sym_del] = ACTIONS(1009),
        [sym_pass_statement] = ACTIONS(1009),
        [sym_break_statement] = ACTIONS(1009),
        [sym_continue_statement] = ACTIONS(1009),
        [anon_sym_if] = ACTIONS(1009),
        [anon_sym_else] = ACTIONS(1009),
        [anon_sym_for] = ACTIONS(1009),
        [anon_sym_while] = ACTIONS(1009),
        [anon_sym_try] = ACTIONS(1009),
        [anon_sym_except] = ACTIONS(1009),
        [anon_sym_finally] = ACTIONS(1009),
        [anon_sym_with] = ACTIONS(1009),
        [anon_sym_def] = ACTIONS(1009),
        [anon_sym_class] = ACTIONS(1009),
        [anon_sym_AT] = ACTIONS(1011),
        [anon_sym_not] = ACTIONS(1009),
        [anon_sym_LBRACK] = ACTIONS(1011),
        [anon_sym_LBRACE] = ACTIONS(1011),
        [sym_number] = ACTIONS(1009),
        [sym_identifier] = ACTIONS(1013),
        [sym_comment] = ACTIONS(77),
        [sym__dedent] = ACTIONS(1011),
    },
    [502] = {
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
        [sym_number] = ACTIONS(1003),
        [sym_identifier] = ACTIONS(1007),
        [sym_comment] = ACTIONS(77),
        [sym__dedent] = ACTIONS(1005),
    },
    [503] = {
        [anon_sym_print] = ACTIONS(1015),
        [anon_sym_return] = ACTIONS(1015),
        [anon_sym_del] = ACTIONS(1015),
        [sym_pass_statement] = ACTIONS(1015),
        [sym_break_statement] = ACTIONS(1015),
        [sym_continue_statement] = ACTIONS(1015),
        [anon_sym_if] = ACTIONS(1015),
        [anon_sym_for] = ACTIONS(1015),
        [anon_sym_while] = ACTIONS(1015),
        [anon_sym_try] = ACTIONS(1015),
        [anon_sym_with] = ACTIONS(1015),
        [anon_sym_def] = ACTIONS(1015),
        [anon_sym_class] = ACTIONS(1015),
        [anon_sym_AT] = ACTIONS(1017),
        [anon_sym_not] = ACTIONS(1015),
        [anon_sym_LBRACK] = ACTIONS(1017),
        [anon_sym_LBRACE] = ACTIONS(1017),
        [sym_number] = ACTIONS(1015),
        [sym_identifier] = ACTIONS(1019),
        [sym_comment] = ACTIONS(77),
        [sym__dedent] = ACTIONS(1017),
    },
    [504] = {
        [sym__simple_statement] = STATE(415),
        [sym_print_statement] = STATE(5),
        [sym_expression_statement] = STATE(5),
        [sym_return_statement] = STATE(5),
        [sym_delete_statement] = STATE(5),
        [sym__suite] = STATE(505),
        [sym__expression] = STATE(24),
        [sym_binary_operator] = STATE(17),
        [sym_unary_operator] = STATE(17),
        [sym_subscript] = STATE(17),
        [sym_call] = STATE(17),
        [sym_list] = STATE(17),
        [sym_list_comprehension] = STATE(17),
        [sym_dictionary] = STATE(17),
        [sym_dictionary_comprehension] = STATE(17),
        [sym_set] = STATE(17),
        [sym_set_comprehension] = STATE(17),
        [anon_sym_print] = ACTIONS(87),
        [anon_sym_return] = ACTIONS(89),
        [anon_sym_del] = ACTIONS(91),
        [sym_pass_statement] = ACTIONS(93),
        [sym_break_statement] = ACTIONS(93),
        [sym_continue_statement] = ACTIONS(93),
        [anon_sym_not] = ACTIONS(111),
        [anon_sym_LBRACK] = ACTIONS(113),
        [anon_sym_LBRACE] = ACTIONS(115),
        [sym_number] = ACTIONS(117),
        [sym_identifier] = ACTIONS(119),
        [sym_comment] = ACTIONS(77),
        [sym__indent] = ACTIONS(829),
    },
    [505] = {
        [anon_sym_print] = ACTIONS(1021),
        [anon_sym_return] = ACTIONS(1021),
        [anon_sym_del] = ACTIONS(1021),
        [sym_pass_statement] = ACTIONS(1021),
        [sym_break_statement] = ACTIONS(1021),
        [sym_continue_statement] = ACTIONS(1021),
        [anon_sym_if] = ACTIONS(1021),
        [anon_sym_for] = ACTIONS(1021),
        [anon_sym_while] = ACTIONS(1021),
        [anon_sym_try] = ACTIONS(1021),
        [anon_sym_finally] = ACTIONS(1021),
        [anon_sym_with] = ACTIONS(1021),
        [anon_sym_def] = ACTIONS(1021),
        [anon_sym_class] = ACTIONS(1021),
        [anon_sym_AT] = ACTIONS(1023),
        [anon_sym_not] = ACTIONS(1021),
        [anon_sym_LBRACK] = ACTIONS(1023),
        [anon_sym_LBRACE] = ACTIONS(1023),
        [sym_number] = ACTIONS(1021),
        [sym_identifier] = ACTIONS(1025),
        [sym_comment] = ACTIONS(77),
        [sym__dedent] = ACTIONS(1023),
    },
    [506] = {
        [sym__simple_statement] = STATE(415),
        [sym_print_statement] = STATE(5),
        [sym_expression_statement] = STATE(5),
        [sym_return_statement] = STATE(5),
        [sym_delete_statement] = STATE(5),
        [sym__suite] = STATE(507),
        [sym__expression] = STATE(24),
        [sym_binary_operator] = STATE(17),
        [sym_unary_operator] = STATE(17),
        [sym_subscript] = STATE(17),
        [sym_call] = STATE(17),
        [sym_list] = STATE(17),
        [sym_list_comprehension] = STATE(17),
        [sym_dictionary] = STATE(17),
        [sym_dictionary_comprehension] = STATE(17),
        [sym_set] = STATE(17),
        [sym_set_comprehension] = STATE(17),
        [anon_sym_print] = ACTIONS(87),
        [anon_sym_return] = ACTIONS(89),
        [anon_sym_del] = ACTIONS(91),
        [sym_pass_statement] = ACTIONS(93),
        [sym_break_statement] = ACTIONS(93),
        [sym_continue_statement] = ACTIONS(93),
        [anon_sym_not] = ACTIONS(111),
        [anon_sym_LBRACK] = ACTIONS(113),
        [anon_sym_LBRACE] = ACTIONS(115),
        [sym_number] = ACTIONS(117),
        [sym_identifier] = ACTIONS(119),
        [sym_comment] = ACTIONS(77),
        [sym__indent] = ACTIONS(829),
    },
    [507] = {
        [anon_sym_print] = ACTIONS(1027),
        [anon_sym_return] = ACTIONS(1027),
        [anon_sym_del] = ACTIONS(1027),
        [sym_pass_statement] = ACTIONS(1027),
        [sym_break_statement] = ACTIONS(1027),
        [sym_continue_statement] = ACTIONS(1027),
        [anon_sym_if] = ACTIONS(1027),
        [anon_sym_for] = ACTIONS(1027),
        [anon_sym_while] = ACTIONS(1027),
        [anon_sym_try] = ACTIONS(1027),
        [anon_sym_with] = ACTIONS(1027),
        [anon_sym_def] = ACTIONS(1027),
        [anon_sym_class] = ACTIONS(1027),
        [anon_sym_AT] = ACTIONS(1029),
        [anon_sym_not] = ACTIONS(1027),
        [anon_sym_LBRACK] = ACTIONS(1029),
        [anon_sym_LBRACE] = ACTIONS(1029),
        [sym_number] = ACTIONS(1027),
        [sym_identifier] = ACTIONS(1031),
        [sym_comment] = ACTIONS(77),
        [sym__dedent] = ACTIONS(1029),
    },
    [508] = {
        [anon_sym_COMMA] = ACTIONS(1033),
        [anon_sym_COLON] = ACTIONS(1035),
        [anon_sym_as] = ACTIONS(1033),
        [anon_sym_LPAREN] = ACTIONS(247),
        [anon_sym_STAR] = ACTIONS(921),
        [anon_sym_PLUS] = ACTIONS(923),
        [anon_sym_DASH] = ACTIONS(923),
        [anon_sym_SLASH] = ACTIONS(925),
        [anon_sym_STAR_STAR] = ACTIONS(927),
        [anon_sym_PIPE] = ACTIONS(929),
        [anon_sym_AMP] = ACTIONS(931),
        [anon_sym_CARET] = ACTIONS(933),
        [anon_sym_LT_LT] = ACTIONS(923),
        [anon_sym_GT_GT] = ACTIONS(923),
        [anon_sym_and] = ACTIONS(931),
        [anon_sym_or] = ACTIONS(929),
        [anon_sym_LBRACK] = ACTIONS(263),
        [sym_comment] = ACTIONS(77),
    },
    [509] = {
        [sym__expression] = STATE(511),
        [sym_binary_operator] = STATE(43),
        [sym_unary_operator] = STATE(43),
        [sym_subscript] = STATE(43),
        [sym_call] = STATE(43),
        [sym_list] = STATE(43),
        [sym_list_comprehension] = STATE(43),
        [sym_dictionary] = STATE(43),
        [sym_dictionary_comprehension] = STATE(43),
        [sym_set] = STATE(43),
        [sym_set_comprehension] = STATE(43),
        [anon_sym_not] = ACTIONS(125),
        [anon_sym_LBRACK] = ACTIONS(127),
        [anon_sym_LBRACE] = ACTIONS(129),
        [sym_number] = ACTIONS(131),
        [sym_identifier] = ACTIONS(133),
        [sym_comment] = ACTIONS(77),
    },
    [510] = {
        [sym__simple_statement] = STATE(415),
        [sym_print_statement] = STATE(5),
        [sym_expression_statement] = STATE(5),
        [sym_return_statement] = STATE(5),
        [sym_delete_statement] = STATE(5),
        [sym__suite] = STATE(514),
        [sym__expression] = STATE(24),
        [sym_binary_operator] = STATE(17),
        [sym_unary_operator] = STATE(17),
        [sym_subscript] = STATE(17),
        [sym_call] = STATE(17),
        [sym_list] = STATE(17),
        [sym_list_comprehension] = STATE(17),
        [sym_dictionary] = STATE(17),
        [sym_dictionary_comprehension] = STATE(17),
        [sym_set] = STATE(17),
        [sym_set_comprehension] = STATE(17),
        [anon_sym_print] = ACTIONS(87),
        [anon_sym_return] = ACTIONS(89),
        [anon_sym_del] = ACTIONS(91),
        [sym_pass_statement] = ACTIONS(93),
        [sym_break_statement] = ACTIONS(93),
        [sym_continue_statement] = ACTIONS(93),
        [anon_sym_not] = ACTIONS(111),
        [anon_sym_LBRACK] = ACTIONS(113),
        [anon_sym_LBRACE] = ACTIONS(115),
        [sym_number] = ACTIONS(117),
        [sym_identifier] = ACTIONS(119),
        [sym_comment] = ACTIONS(77),
        [sym__indent] = ACTIONS(829),
    },
    [511] = {
        [anon_sym_COLON] = ACTIONS(1037),
        [anon_sym_LPAREN] = ACTIONS(247),
        [anon_sym_STAR] = ACTIONS(437),
        [anon_sym_PLUS] = ACTIONS(439),
        [anon_sym_DASH] = ACTIONS(439),
        [anon_sym_SLASH] = ACTIONS(441),
        [anon_sym_STAR_STAR] = ACTIONS(443),
        [anon_sym_PIPE] = ACTIONS(445),
        [anon_sym_AMP] = ACTIONS(447),
        [anon_sym_CARET] = ACTIONS(449),
        [anon_sym_LT_LT] = ACTIONS(439),
        [anon_sym_GT_GT] = ACTIONS(439),
        [anon_sym_and] = ACTIONS(447),
        [anon_sym_or] = ACTIONS(445),
        [anon_sym_LBRACK] = ACTIONS(263),
        [sym_comment] = ACTIONS(77),
    },
    [512] = {
        [sym__simple_statement] = STATE(415),
        [sym_print_statement] = STATE(5),
        [sym_expression_statement] = STATE(5),
        [sym_return_statement] = STATE(5),
        [sym_delete_statement] = STATE(5),
        [sym__suite] = STATE(513),
        [sym__expression] = STATE(24),
        [sym_binary_operator] = STATE(17),
        [sym_unary_operator] = STATE(17),
        [sym_subscript] = STATE(17),
        [sym_call] = STATE(17),
        [sym_list] = STATE(17),
        [sym_list_comprehension] = STATE(17),
        [sym_dictionary] = STATE(17),
        [sym_dictionary_comprehension] = STATE(17),
        [sym_set] = STATE(17),
        [sym_set_comprehension] = STATE(17),
        [anon_sym_print] = ACTIONS(87),
        [anon_sym_return] = ACTIONS(89),
        [anon_sym_del] = ACTIONS(91),
        [sym_pass_statement] = ACTIONS(93),
        [sym_break_statement] = ACTIONS(93),
        [sym_continue_statement] = ACTIONS(93),
        [anon_sym_not] = ACTIONS(111),
        [anon_sym_LBRACK] = ACTIONS(113),
        [anon_sym_LBRACE] = ACTIONS(115),
        [sym_number] = ACTIONS(117),
        [sym_identifier] = ACTIONS(119),
        [sym_comment] = ACTIONS(77),
        [sym__indent] = ACTIONS(829),
    },
    [513] = {
        [anon_sym_print] = ACTIONS(1039),
        [anon_sym_return] = ACTIONS(1039),
        [anon_sym_del] = ACTIONS(1039),
        [sym_pass_statement] = ACTIONS(1039),
        [sym_break_statement] = ACTIONS(1039),
        [sym_continue_statement] = ACTIONS(1039),
        [anon_sym_if] = ACTIONS(1039),
        [anon_sym_else] = ACTIONS(1039),
        [anon_sym_for] = ACTIONS(1039),
        [anon_sym_while] = ACTIONS(1039),
        [anon_sym_try] = ACTIONS(1039),
        [anon_sym_except] = ACTIONS(1039),
        [anon_sym_finally] = ACTIONS(1039),
        [anon_sym_with] = ACTIONS(1039),
        [anon_sym_def] = ACTIONS(1039),
        [anon_sym_class] = ACTIONS(1039),
        [anon_sym_AT] = ACTIONS(1041),
        [anon_sym_not] = ACTIONS(1039),
        [anon_sym_LBRACK] = ACTIONS(1041),
        [anon_sym_LBRACE] = ACTIONS(1041),
        [sym_number] = ACTIONS(1039),
        [sym_identifier] = ACTIONS(1043),
        [sym_comment] = ACTIONS(77),
        [sym__dedent] = ACTIONS(1041),
    },
    [514] = {
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
        [sym_comment] = ACTIONS(77),
        [sym__dedent] = ACTIONS(1047),
    },
    [515] = {
        [anon_sym_except] = ACTIONS(799),
        [anon_sym_finally] = ACTIONS(799),
        [sym_comment] = ACTIONS(77),
    },
    [516] = {
        [sym__statement] = STATE(406),
        [sym__simple_statement] = STATE(399),
        [sym_print_statement] = STATE(5),
        [sym_expression_statement] = STATE(5),
        [sym_return_statement] = STATE(5),
        [sym_delete_statement] = STATE(5),
        [sym__compound_statement] = STATE(400),
        [sym_if_statement] = STATE(401),
        [sym_for_statement] = STATE(401),
        [sym_while_statement] = STATE(401),
        [sym_try_statement] = STATE(401),
        [sym_with_statement] = STATE(401),
        [sym_function_definition] = STATE(401),
        [sym_class_definition] = STATE(401),
        [sym_decorated_definition] = STATE(401),
        [sym_decorator] = STATE(23),
        [sym__expression] = STATE(24),
        [sym_binary_operator] = STATE(17),
        [sym_unary_operator] = STATE(17),
        [sym_subscript] = STATE(17),
        [sym_call] = STATE(17),
        [sym_list] = STATE(17),
        [sym_list_comprehension] = STATE(17),
        [sym_dictionary] = STATE(17),
        [sym_dictionary_comprehension] = STATE(17),
        [sym_set] = STATE(17),
        [sym_set_comprehension] = STATE(17),
        [aux_sym_decorated_definition_repeat1] = STATE(403),
        [anon_sym_print] = ACTIONS(87),
        [anon_sym_return] = ACTIONS(89),
        [anon_sym_del] = ACTIONS(91),
        [sym_pass_statement] = ACTIONS(93),
        [sym_break_statement] = ACTIONS(93),
        [sym_continue_statement] = ACTIONS(93),
        [anon_sym_if] = ACTIONS(777),
        [anon_sym_for] = ACTIONS(779),
        [anon_sym_while] = ACTIONS(781),
        [anon_sym_try] = ACTIONS(783),
        [anon_sym_with] = ACTIONS(785),
        [anon_sym_def] = ACTIONS(787),
        [anon_sym_class] = ACTIONS(789),
        [anon_sym_AT] = ACTIONS(109),
        [anon_sym_not] = ACTIONS(111),
        [anon_sym_LBRACK] = ACTIONS(113),
        [anon_sym_LBRACE] = ACTIONS(115),
        [sym_number] = ACTIONS(117),
        [sym_identifier] = ACTIONS(119),
        [sym_comment] = ACTIONS(77),
        [sym__dedent] = ACTIONS(1051),
    },
    [517] = {
        [anon_sym_except] = ACTIONS(819),
        [anon_sym_finally] = ACTIONS(819),
        [sym_comment] = ACTIONS(77),
    },
    [518] = {
        [anon_sym_COLON] = ACTIONS(1053),
        [anon_sym_LPAREN] = ACTIONS(247),
        [anon_sym_STAR] = ACTIONS(437),
        [anon_sym_PLUS] = ACTIONS(439),
        [anon_sym_DASH] = ACTIONS(439),
        [anon_sym_SLASH] = ACTIONS(441),
        [anon_sym_STAR_STAR] = ACTIONS(443),
        [anon_sym_PIPE] = ACTIONS(445),
        [anon_sym_AMP] = ACTIONS(447),
        [anon_sym_CARET] = ACTIONS(449),
        [anon_sym_LT_LT] = ACTIONS(439),
        [anon_sym_GT_GT] = ACTIONS(439),
        [anon_sym_and] = ACTIONS(447),
        [anon_sym_or] = ACTIONS(445),
        [anon_sym_LBRACK] = ACTIONS(263),
        [sym_comment] = ACTIONS(77),
    },
    [519] = {
        [sym__simple_statement] = STATE(415),
        [sym_print_statement] = STATE(5),
        [sym_expression_statement] = STATE(5),
        [sym_return_statement] = STATE(5),
        [sym_delete_statement] = STATE(5),
        [sym__suite] = STATE(520),
        [sym__expression] = STATE(24),
        [sym_binary_operator] = STATE(17),
        [sym_unary_operator] = STATE(17),
        [sym_subscript] = STATE(17),
        [sym_call] = STATE(17),
        [sym_list] = STATE(17),
        [sym_list_comprehension] = STATE(17),
        [sym_dictionary] = STATE(17),
        [sym_dictionary_comprehension] = STATE(17),
        [sym_set] = STATE(17),
        [sym_set_comprehension] = STATE(17),
        [anon_sym_print] = ACTIONS(87),
        [anon_sym_return] = ACTIONS(89),
        [anon_sym_del] = ACTIONS(91),
        [sym_pass_statement] = ACTIONS(93),
        [sym_break_statement] = ACTIONS(93),
        [sym_continue_statement] = ACTIONS(93),
        [anon_sym_not] = ACTIONS(111),
        [anon_sym_LBRACK] = ACTIONS(113),
        [anon_sym_LBRACE] = ACTIONS(115),
        [sym_number] = ACTIONS(117),
        [sym_identifier] = ACTIONS(119),
        [sym_comment] = ACTIONS(77),
        [sym__indent] = ACTIONS(829),
    },
    [520] = {
        [sym_else_clause] = STATE(521),
        [anon_sym_print] = ACTIONS(1055),
        [anon_sym_return] = ACTIONS(1055),
        [anon_sym_del] = ACTIONS(1055),
        [sym_pass_statement] = ACTIONS(1055),
        [sym_break_statement] = ACTIONS(1055),
        [sym_continue_statement] = ACTIONS(1055),
        [anon_sym_if] = ACTIONS(1055),
        [anon_sym_else] = ACTIONS(995),
        [anon_sym_for] = ACTIONS(1055),
        [anon_sym_while] = ACTIONS(1055),
        [anon_sym_try] = ACTIONS(1055),
        [anon_sym_with] = ACTIONS(1055),
        [anon_sym_def] = ACTIONS(1055),
        [anon_sym_class] = ACTIONS(1055),
        [anon_sym_AT] = ACTIONS(1057),
        [anon_sym_not] = ACTIONS(1055),
        [anon_sym_LBRACK] = ACTIONS(1057),
        [anon_sym_LBRACE] = ACTIONS(1057),
        [sym_number] = ACTIONS(1055),
        [sym_identifier] = ACTIONS(1059),
        [sym_comment] = ACTIONS(77),
        [sym__dedent] = ACTIONS(1057),
    },
    [521] = {
        [anon_sym_print] = ACTIONS(1061),
        [anon_sym_return] = ACTIONS(1061),
        [anon_sym_del] = ACTIONS(1061),
        [sym_pass_statement] = ACTIONS(1061),
        [sym_break_statement] = ACTIONS(1061),
        [sym_continue_statement] = ACTIONS(1061),
        [anon_sym_if] = ACTIONS(1061),
        [anon_sym_for] = ACTIONS(1061),
        [anon_sym_while] = ACTIONS(1061),
        [anon_sym_try] = ACTIONS(1061),
        [anon_sym_with] = ACTIONS(1061),
        [anon_sym_def] = ACTIONS(1061),
        [anon_sym_class] = ACTIONS(1061),
        [anon_sym_AT] = ACTIONS(1063),
        [anon_sym_not] = ACTIONS(1061),
        [anon_sym_LBRACK] = ACTIONS(1063),
        [anon_sym_LBRACE] = ACTIONS(1063),
        [sym_number] = ACTIONS(1061),
        [sym_identifier] = ACTIONS(1065),
        [sym_comment] = ACTIONS(77),
        [sym__dedent] = ACTIONS(1063),
    },
    [522] = {
        [anon_sym_in] = ACTIONS(1067),
        [sym_comment] = ACTIONS(77),
    },
    [523] = {
        [sym_expression_list] = STATE(524),
        [sym__expression] = STATE(525),
        [sym_binary_operator] = STATE(43),
        [sym_unary_operator] = STATE(43),
        [sym_subscript] = STATE(43),
        [sym_call] = STATE(43),
        [sym_list] = STATE(43),
        [sym_list_comprehension] = STATE(43),
        [sym_dictionary] = STATE(43),
        [sym_dictionary_comprehension] = STATE(43),
        [sym_set] = STATE(43),
        [sym_set_comprehension] = STATE(43),
        [anon_sym_not] = ACTIONS(935),
        [anon_sym_LBRACK] = ACTIONS(127),
        [anon_sym_LBRACE] = ACTIONS(129),
        [sym_number] = ACTIONS(131),
        [sym_identifier] = ACTIONS(133),
        [sym_comment] = ACTIONS(77),
    },
    [524] = {
        [anon_sym_COLON] = ACTIONS(1069),
        [sym_comment] = ACTIONS(77),
    },
    [525] = {
        [aux_sym_print_statement_repeat1] = STATE(527),
        [anon_sym_COMMA] = ACTIONS(1071),
        [anon_sym_COLON] = ACTIONS(475),
        [anon_sym_LPAREN] = ACTIONS(247),
        [anon_sym_STAR] = ACTIONS(939),
        [anon_sym_PLUS] = ACTIONS(941),
        [anon_sym_DASH] = ACTIONS(941),
        [anon_sym_SLASH] = ACTIONS(943),
        [anon_sym_STAR_STAR] = ACTIONS(945),
        [anon_sym_PIPE] = ACTIONS(947),
        [anon_sym_AMP] = ACTIONS(949),
        [anon_sym_CARET] = ACTIONS(951),
        [anon_sym_LT_LT] = ACTIONS(941),
        [anon_sym_GT_GT] = ACTIONS(941),
        [anon_sym_and] = ACTIONS(949),
        [anon_sym_or] = ACTIONS(947),
        [anon_sym_LBRACK] = ACTIONS(263),
        [sym_comment] = ACTIONS(77),
    },
    [526] = {
        [sym__expression] = STATE(530),
        [sym_binary_operator] = STATE(43),
        [sym_unary_operator] = STATE(43),
        [sym_subscript] = STATE(43),
        [sym_call] = STATE(43),
        [sym_list] = STATE(43),
        [sym_list_comprehension] = STATE(43),
        [sym_dictionary] = STATE(43),
        [sym_dictionary_comprehension] = STATE(43),
        [sym_set] = STATE(43),
        [sym_set_comprehension] = STATE(43),
        [anon_sym_not] = ACTIONS(935),
        [anon_sym_LBRACK] = ACTIONS(127),
        [anon_sym_LBRACE] = ACTIONS(129),
        [sym_number] = ACTIONS(131),
        [sym_identifier] = ACTIONS(133),
        [sym_comment] = ACTIONS(77),
    },
    [527] = {
        [anon_sym_COMMA] = ACTIONS(1073),
        [anon_sym_COLON] = ACTIONS(493),
        [sym_comment] = ACTIONS(77),
    },
    [528] = {
        [sym__expression] = STATE(529),
        [sym_binary_operator] = STATE(43),
        [sym_unary_operator] = STATE(43),
        [sym_subscript] = STATE(43),
        [sym_call] = STATE(43),
        [sym_list] = STATE(43),
        [sym_list_comprehension] = STATE(43),
        [sym_dictionary] = STATE(43),
        [sym_dictionary_comprehension] = STATE(43),
        [sym_set] = STATE(43),
        [sym_set_comprehension] = STATE(43),
        [anon_sym_not] = ACTIONS(935),
        [anon_sym_LBRACK] = ACTIONS(127),
        [anon_sym_LBRACE] = ACTIONS(129),
        [sym_number] = ACTIONS(131),
        [sym_identifier] = ACTIONS(133),
        [sym_comment] = ACTIONS(77),
    },
    [529] = {
        [anon_sym_COMMA] = ACTIONS(495),
        [anon_sym_COLON] = ACTIONS(495),
        [anon_sym_LPAREN] = ACTIONS(247),
        [anon_sym_STAR] = ACTIONS(939),
        [anon_sym_PLUS] = ACTIONS(941),
        [anon_sym_DASH] = ACTIONS(941),
        [anon_sym_SLASH] = ACTIONS(943),
        [anon_sym_STAR_STAR] = ACTIONS(945),
        [anon_sym_PIPE] = ACTIONS(947),
        [anon_sym_AMP] = ACTIONS(949),
        [anon_sym_CARET] = ACTIONS(951),
        [anon_sym_LT_LT] = ACTIONS(941),
        [anon_sym_GT_GT] = ACTIONS(941),
        [anon_sym_and] = ACTIONS(949),
        [anon_sym_or] = ACTIONS(947),
        [anon_sym_LBRACK] = ACTIONS(263),
        [sym_comment] = ACTIONS(77),
    },
    [530] = {
        [anon_sym_COMMA] = ACTIONS(497),
        [anon_sym_COLON] = ACTIONS(497),
        [anon_sym_LPAREN] = ACTIONS(247),
        [anon_sym_STAR] = ACTIONS(939),
        [anon_sym_PLUS] = ACTIONS(941),
        [anon_sym_DASH] = ACTIONS(941),
        [anon_sym_SLASH] = ACTIONS(943),
        [anon_sym_STAR_STAR] = ACTIONS(945),
        [anon_sym_PIPE] = ACTIONS(947),
        [anon_sym_AMP] = ACTIONS(949),
        [anon_sym_CARET] = ACTIONS(951),
        [anon_sym_LT_LT] = ACTIONS(941),
        [anon_sym_GT_GT] = ACTIONS(941),
        [anon_sym_and] = ACTIONS(949),
        [anon_sym_or] = ACTIONS(947),
        [anon_sym_LBRACK] = ACTIONS(263),
        [sym_comment] = ACTIONS(77),
    },
    [531] = {
        [sym__simple_statement] = STATE(415),
        [sym_print_statement] = STATE(5),
        [sym_expression_statement] = STATE(5),
        [sym_return_statement] = STATE(5),
        [sym_delete_statement] = STATE(5),
        [sym__suite] = STATE(532),
        [sym__expression] = STATE(24),
        [sym_binary_operator] = STATE(17),
        [sym_unary_operator] = STATE(17),
        [sym_subscript] = STATE(17),
        [sym_call] = STATE(17),
        [sym_list] = STATE(17),
        [sym_list_comprehension] = STATE(17),
        [sym_dictionary] = STATE(17),
        [sym_dictionary_comprehension] = STATE(17),
        [sym_set] = STATE(17),
        [sym_set_comprehension] = STATE(17),
        [anon_sym_print] = ACTIONS(87),
        [anon_sym_return] = ACTIONS(89),
        [anon_sym_del] = ACTIONS(91),
        [sym_pass_statement] = ACTIONS(93),
        [sym_break_statement] = ACTIONS(93),
        [sym_continue_statement] = ACTIONS(93),
        [anon_sym_not] = ACTIONS(111),
        [anon_sym_LBRACK] = ACTIONS(113),
        [anon_sym_LBRACE] = ACTIONS(115),
        [sym_number] = ACTIONS(117),
        [sym_identifier] = ACTIONS(119),
        [sym_comment] = ACTIONS(77),
        [sym__indent] = ACTIONS(829),
    },
    [532] = {
        [sym_else_clause] = STATE(533),
        [anon_sym_print] = ACTIONS(1075),
        [anon_sym_return] = ACTIONS(1075),
        [anon_sym_del] = ACTIONS(1075),
        [sym_pass_statement] = ACTIONS(1075),
        [sym_break_statement] = ACTIONS(1075),
        [sym_continue_statement] = ACTIONS(1075),
        [anon_sym_if] = ACTIONS(1075),
        [anon_sym_else] = ACTIONS(995),
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
        [sym_number] = ACTIONS(1075),
        [sym_identifier] = ACTIONS(1079),
        [sym_comment] = ACTIONS(77),
        [sym__dedent] = ACTIONS(1077),
    },
    [533] = {
        [anon_sym_print] = ACTIONS(1081),
        [anon_sym_return] = ACTIONS(1081),
        [anon_sym_del] = ACTIONS(1081),
        [sym_pass_statement] = ACTIONS(1081),
        [sym_break_statement] = ACTIONS(1081),
        [sym_continue_statement] = ACTIONS(1081),
        [anon_sym_if] = ACTIONS(1081),
        [anon_sym_for] = ACTIONS(1081),
        [anon_sym_while] = ACTIONS(1081),
        [anon_sym_try] = ACTIONS(1081),
        [anon_sym_with] = ACTIONS(1081),
        [anon_sym_def] = ACTIONS(1081),
        [anon_sym_class] = ACTIONS(1081),
        [anon_sym_AT] = ACTIONS(1083),
        [anon_sym_not] = ACTIONS(1081),
        [anon_sym_LBRACK] = ACTIONS(1083),
        [anon_sym_LBRACE] = ACTIONS(1083),
        [sym_number] = ACTIONS(1081),
        [sym_identifier] = ACTIONS(1085),
        [sym_comment] = ACTIONS(77),
        [sym__dedent] = ACTIONS(1083),
    },
    [534] = {
        [anon_sym_COLON] = ACTIONS(1087),
        [anon_sym_LPAREN] = ACTIONS(247),
        [anon_sym_STAR] = ACTIONS(437),
        [anon_sym_PLUS] = ACTIONS(439),
        [anon_sym_DASH] = ACTIONS(439),
        [anon_sym_SLASH] = ACTIONS(441),
        [anon_sym_STAR_STAR] = ACTIONS(443),
        [anon_sym_PIPE] = ACTIONS(445),
        [anon_sym_AMP] = ACTIONS(447),
        [anon_sym_CARET] = ACTIONS(449),
        [anon_sym_LT_LT] = ACTIONS(439),
        [anon_sym_GT_GT] = ACTIONS(439),
        [anon_sym_and] = ACTIONS(447),
        [anon_sym_or] = ACTIONS(445),
        [anon_sym_LBRACK] = ACTIONS(263),
        [sym_comment] = ACTIONS(77),
    },
    [535] = {
        [sym__simple_statement] = STATE(415),
        [sym_print_statement] = STATE(5),
        [sym_expression_statement] = STATE(5),
        [sym_return_statement] = STATE(5),
        [sym_delete_statement] = STATE(5),
        [sym__suite] = STATE(536),
        [sym__expression] = STATE(24),
        [sym_binary_operator] = STATE(17),
        [sym_unary_operator] = STATE(17),
        [sym_subscript] = STATE(17),
        [sym_call] = STATE(17),
        [sym_list] = STATE(17),
        [sym_list_comprehension] = STATE(17),
        [sym_dictionary] = STATE(17),
        [sym_dictionary_comprehension] = STATE(17),
        [sym_set] = STATE(17),
        [sym_set_comprehension] = STATE(17),
        [anon_sym_print] = ACTIONS(87),
        [anon_sym_return] = ACTIONS(89),
        [anon_sym_del] = ACTIONS(91),
        [sym_pass_statement] = ACTIONS(93),
        [sym_break_statement] = ACTIONS(93),
        [sym_continue_statement] = ACTIONS(93),
        [anon_sym_not] = ACTIONS(111),
        [anon_sym_LBRACK] = ACTIONS(113),
        [anon_sym_LBRACE] = ACTIONS(115),
        [sym_number] = ACTIONS(117),
        [sym_identifier] = ACTIONS(119),
        [sym_comment] = ACTIONS(77),
        [sym__indent] = ACTIONS(829),
    },
    [536] = {
        [sym_elif_clause] = STATE(538),
        [sym_else_clause] = STATE(539),
        [aux_sym_if_statement_repeat1] = STATE(540),
        [anon_sym_print] = ACTIONS(1089),
        [anon_sym_return] = ACTIONS(1089),
        [anon_sym_del] = ACTIONS(1089),
        [sym_pass_statement] = ACTIONS(1089),
        [sym_break_statement] = ACTIONS(1089),
        [sym_continue_statement] = ACTIONS(1089),
        [anon_sym_if] = ACTIONS(1089),
        [anon_sym_elif] = ACTIONS(1091),
        [anon_sym_else] = ACTIONS(995),
        [anon_sym_for] = ACTIONS(1089),
        [anon_sym_while] = ACTIONS(1089),
        [anon_sym_try] = ACTIONS(1089),
        [anon_sym_with] = ACTIONS(1089),
        [anon_sym_def] = ACTIONS(1089),
        [anon_sym_class] = ACTIONS(1089),
        [anon_sym_AT] = ACTIONS(1093),
        [anon_sym_not] = ACTIONS(1089),
        [anon_sym_LBRACK] = ACTIONS(1093),
        [anon_sym_LBRACE] = ACTIONS(1093),
        [sym_number] = ACTIONS(1089),
        [sym_identifier] = ACTIONS(1095),
        [sym_comment] = ACTIONS(77),
        [sym__dedent] = ACTIONS(1093),
    },
    [537] = {
        [sym__expression] = STATE(543),
        [sym_binary_operator] = STATE(43),
        [sym_unary_operator] = STATE(43),
        [sym_subscript] = STATE(43),
        [sym_call] = STATE(43),
        [sym_list] = STATE(43),
        [sym_list_comprehension] = STATE(43),
        [sym_dictionary] = STATE(43),
        [sym_dictionary_comprehension] = STATE(43),
        [sym_set] = STATE(43),
        [sym_set_comprehension] = STATE(43),
        [anon_sym_not] = ACTIONS(125),
        [anon_sym_LBRACK] = ACTIONS(127),
        [anon_sym_LBRACE] = ACTIONS(129),
        [sym_number] = ACTIONS(131),
        [sym_identifier] = ACTIONS(133),
        [sym_comment] = ACTIONS(77),
    },
    [538] = {
        [anon_sym_print] = ACTIONS(1097),
        [anon_sym_return] = ACTIONS(1097),
        [anon_sym_del] = ACTIONS(1097),
        [sym_pass_statement] = ACTIONS(1097),
        [sym_break_statement] = ACTIONS(1097),
        [sym_continue_statement] = ACTIONS(1097),
        [anon_sym_if] = ACTIONS(1097),
        [anon_sym_elif] = ACTIONS(1097),
        [anon_sym_else] = ACTIONS(1097),
        [anon_sym_for] = ACTIONS(1097),
        [anon_sym_while] = ACTIONS(1097),
        [anon_sym_try] = ACTIONS(1097),
        [anon_sym_with] = ACTIONS(1097),
        [anon_sym_def] = ACTIONS(1097),
        [anon_sym_class] = ACTIONS(1097),
        [anon_sym_AT] = ACTIONS(1099),
        [anon_sym_not] = ACTIONS(1097),
        [anon_sym_LBRACK] = ACTIONS(1099),
        [anon_sym_LBRACE] = ACTIONS(1099),
        [sym_number] = ACTIONS(1097),
        [sym_identifier] = ACTIONS(1101),
        [sym_comment] = ACTIONS(77),
        [sym__dedent] = ACTIONS(1099),
    },
    [539] = {
        [anon_sym_print] = ACTIONS(1103),
        [anon_sym_return] = ACTIONS(1103),
        [anon_sym_del] = ACTIONS(1103),
        [sym_pass_statement] = ACTIONS(1103),
        [sym_break_statement] = ACTIONS(1103),
        [sym_continue_statement] = ACTIONS(1103),
        [anon_sym_if] = ACTIONS(1103),
        [anon_sym_for] = ACTIONS(1103),
        [anon_sym_while] = ACTIONS(1103),
        [anon_sym_try] = ACTIONS(1103),
        [anon_sym_with] = ACTIONS(1103),
        [anon_sym_def] = ACTIONS(1103),
        [anon_sym_class] = ACTIONS(1103),
        [anon_sym_AT] = ACTIONS(1105),
        [anon_sym_not] = ACTIONS(1103),
        [anon_sym_LBRACK] = ACTIONS(1105),
        [anon_sym_LBRACE] = ACTIONS(1105),
        [sym_number] = ACTIONS(1103),
        [sym_identifier] = ACTIONS(1107),
        [sym_comment] = ACTIONS(77),
        [sym__dedent] = ACTIONS(1105),
    },
    [540] = {
        [sym_elif_clause] = STATE(541),
        [sym_else_clause] = STATE(542),
        [anon_sym_print] = ACTIONS(1103),
        [anon_sym_return] = ACTIONS(1103),
        [anon_sym_del] = ACTIONS(1103),
        [sym_pass_statement] = ACTIONS(1103),
        [sym_break_statement] = ACTIONS(1103),
        [sym_continue_statement] = ACTIONS(1103),
        [anon_sym_if] = ACTIONS(1103),
        [anon_sym_elif] = ACTIONS(1091),
        [anon_sym_else] = ACTIONS(995),
        [anon_sym_for] = ACTIONS(1103),
        [anon_sym_while] = ACTIONS(1103),
        [anon_sym_try] = ACTIONS(1103),
        [anon_sym_with] = ACTIONS(1103),
        [anon_sym_def] = ACTIONS(1103),
        [anon_sym_class] = ACTIONS(1103),
        [anon_sym_AT] = ACTIONS(1105),
        [anon_sym_not] = ACTIONS(1103),
        [anon_sym_LBRACK] = ACTIONS(1105),
        [anon_sym_LBRACE] = ACTIONS(1105),
        [sym_number] = ACTIONS(1103),
        [sym_identifier] = ACTIONS(1107),
        [sym_comment] = ACTIONS(77),
        [sym__dedent] = ACTIONS(1105),
    },
    [541] = {
        [anon_sym_print] = ACTIONS(1109),
        [anon_sym_return] = ACTIONS(1109),
        [anon_sym_del] = ACTIONS(1109),
        [sym_pass_statement] = ACTIONS(1109),
        [sym_break_statement] = ACTIONS(1109),
        [sym_continue_statement] = ACTIONS(1109),
        [anon_sym_if] = ACTIONS(1109),
        [anon_sym_elif] = ACTIONS(1109),
        [anon_sym_else] = ACTIONS(1109),
        [anon_sym_for] = ACTIONS(1109),
        [anon_sym_while] = ACTIONS(1109),
        [anon_sym_try] = ACTIONS(1109),
        [anon_sym_with] = ACTIONS(1109),
        [anon_sym_def] = ACTIONS(1109),
        [anon_sym_class] = ACTIONS(1109),
        [anon_sym_AT] = ACTIONS(1111),
        [anon_sym_not] = ACTIONS(1109),
        [anon_sym_LBRACK] = ACTIONS(1111),
        [anon_sym_LBRACE] = ACTIONS(1111),
        [sym_number] = ACTIONS(1109),
        [sym_identifier] = ACTIONS(1113),
        [sym_comment] = ACTIONS(77),
        [sym__dedent] = ACTIONS(1111),
    },
    [542] = {
        [anon_sym_print] = ACTIONS(1115),
        [anon_sym_return] = ACTIONS(1115),
        [anon_sym_del] = ACTIONS(1115),
        [sym_pass_statement] = ACTIONS(1115),
        [sym_break_statement] = ACTIONS(1115),
        [sym_continue_statement] = ACTIONS(1115),
        [anon_sym_if] = ACTIONS(1115),
        [anon_sym_for] = ACTIONS(1115),
        [anon_sym_while] = ACTIONS(1115),
        [anon_sym_try] = ACTIONS(1115),
        [anon_sym_with] = ACTIONS(1115),
        [anon_sym_def] = ACTIONS(1115),
        [anon_sym_class] = ACTIONS(1115),
        [anon_sym_AT] = ACTIONS(1117),
        [anon_sym_not] = ACTIONS(1115),
        [anon_sym_LBRACK] = ACTIONS(1117),
        [anon_sym_LBRACE] = ACTIONS(1117),
        [sym_number] = ACTIONS(1115),
        [sym_identifier] = ACTIONS(1119),
        [sym_comment] = ACTIONS(77),
        [sym__dedent] = ACTIONS(1117),
    },
    [543] = {
        [anon_sym_COLON] = ACTIONS(1121),
        [anon_sym_LPAREN] = ACTIONS(247),
        [anon_sym_STAR] = ACTIONS(437),
        [anon_sym_PLUS] = ACTIONS(439),
        [anon_sym_DASH] = ACTIONS(439),
        [anon_sym_SLASH] = ACTIONS(441),
        [anon_sym_STAR_STAR] = ACTIONS(443),
        [anon_sym_PIPE] = ACTIONS(445),
        [anon_sym_AMP] = ACTIONS(447),
        [anon_sym_CARET] = ACTIONS(449),
        [anon_sym_LT_LT] = ACTIONS(439),
        [anon_sym_GT_GT] = ACTIONS(439),
        [anon_sym_and] = ACTIONS(447),
        [anon_sym_or] = ACTIONS(445),
        [anon_sym_LBRACK] = ACTIONS(263),
        [sym_comment] = ACTIONS(77),
    },
    [544] = {
        [sym__simple_statement] = STATE(415),
        [sym_print_statement] = STATE(5),
        [sym_expression_statement] = STATE(5),
        [sym_return_statement] = STATE(5),
        [sym_delete_statement] = STATE(5),
        [sym__suite] = STATE(545),
        [sym__expression] = STATE(24),
        [sym_binary_operator] = STATE(17),
        [sym_unary_operator] = STATE(17),
        [sym_subscript] = STATE(17),
        [sym_call] = STATE(17),
        [sym_list] = STATE(17),
        [sym_list_comprehension] = STATE(17),
        [sym_dictionary] = STATE(17),
        [sym_dictionary_comprehension] = STATE(17),
        [sym_set] = STATE(17),
        [sym_set_comprehension] = STATE(17),
        [anon_sym_print] = ACTIONS(87),
        [anon_sym_return] = ACTIONS(89),
        [anon_sym_del] = ACTIONS(91),
        [sym_pass_statement] = ACTIONS(93),
        [sym_break_statement] = ACTIONS(93),
        [sym_continue_statement] = ACTIONS(93),
        [anon_sym_not] = ACTIONS(111),
        [anon_sym_LBRACK] = ACTIONS(113),
        [anon_sym_LBRACE] = ACTIONS(115),
        [sym_number] = ACTIONS(117),
        [sym_identifier] = ACTIONS(119),
        [sym_comment] = ACTIONS(77),
        [sym__indent] = ACTIONS(829),
    },
    [545] = {
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
        [sym_number] = ACTIONS(1123),
        [sym_identifier] = ACTIONS(1127),
        [sym_comment] = ACTIONS(77),
        [sym__dedent] = ACTIONS(1125),
    },
    [546] = {
        [ts_builtin_sym_end] = ACTIONS(841),
        [anon_sym_SEMI] = ACTIONS(841),
        [anon_sym_print] = ACTIONS(839),
        [anon_sym_return] = ACTIONS(839),
        [anon_sym_del] = ACTIONS(839),
        [sym_pass_statement] = ACTIONS(839),
        [sym_break_statement] = ACTIONS(839),
        [sym_continue_statement] = ACTIONS(839),
        [anon_sym_if] = ACTIONS(839),
        [anon_sym_for] = ACTIONS(839),
        [anon_sym_while] = ACTIONS(839),
        [anon_sym_try] = ACTIONS(839),
        [anon_sym_with] = ACTIONS(839),
        [anon_sym_def] = ACTIONS(839),
        [anon_sym_class] = ACTIONS(839),
        [anon_sym_AT] = ACTIONS(841),
        [anon_sym_not] = ACTIONS(839),
        [anon_sym_LBRACK] = ACTIONS(841),
        [anon_sym_LBRACE] = ACTIONS(841),
        [sym_number] = ACTIONS(839),
        [sym_identifier] = ACTIONS(843),
        [sym_comment] = ACTIONS(77),
        [sym__newline] = ACTIONS(841),
    },
    [547] = {
        [sym_parameters] = STATE(548),
        [anon_sym_LPAREN] = ACTIONS(845),
        [sym_comment] = ACTIONS(77),
    },
    [548] = {
        [anon_sym_COLON] = ACTIONS(1129),
        [sym_comment] = ACTIONS(77),
    },
    [549] = {
        [sym__simple_statement] = STATE(388),
        [sym_print_statement] = STATE(5),
        [sym_expression_statement] = STATE(5),
        [sym_return_statement] = STATE(5),
        [sym_delete_statement] = STATE(5),
        [sym__suite] = STATE(550),
        [sym__expression] = STATE(24),
        [sym_binary_operator] = STATE(17),
        [sym_unary_operator] = STATE(17),
        [sym_subscript] = STATE(17),
        [sym_call] = STATE(17),
        [sym_list] = STATE(17),
        [sym_list_comprehension] = STATE(17),
        [sym_dictionary] = STATE(17),
        [sym_dictionary_comprehension] = STATE(17),
        [sym_set] = STATE(17),
        [sym_set_comprehension] = STATE(17),
        [anon_sym_print] = ACTIONS(87),
        [anon_sym_return] = ACTIONS(89),
        [anon_sym_del] = ACTIONS(91),
        [sym_pass_statement] = ACTIONS(93),
        [sym_break_statement] = ACTIONS(93),
        [sym_continue_statement] = ACTIONS(93),
        [anon_sym_not] = ACTIONS(111),
        [anon_sym_LBRACK] = ACTIONS(113),
        [anon_sym_LBRACE] = ACTIONS(115),
        [sym_number] = ACTIONS(117),
        [sym_identifier] = ACTIONS(119),
        [sym_comment] = ACTIONS(77),
        [sym__indent] = ACTIONS(771),
    },
    [550] = {
        [ts_builtin_sym_end] = ACTIONS(857),
        [anon_sym_SEMI] = ACTIONS(857),
        [anon_sym_print] = ACTIONS(855),
        [anon_sym_return] = ACTIONS(855),
        [anon_sym_del] = ACTIONS(855),
        [sym_pass_statement] = ACTIONS(855),
        [sym_break_statement] = ACTIONS(855),
        [sym_continue_statement] = ACTIONS(855),
        [anon_sym_if] = ACTIONS(855),
        [anon_sym_for] = ACTIONS(855),
        [anon_sym_while] = ACTIONS(855),
        [anon_sym_try] = ACTIONS(855),
        [anon_sym_with] = ACTIONS(855),
        [anon_sym_def] = ACTIONS(855),
        [anon_sym_class] = ACTIONS(855),
        [anon_sym_AT] = ACTIONS(857),
        [anon_sym_not] = ACTIONS(855),
        [anon_sym_LBRACK] = ACTIONS(857),
        [anon_sym_LBRACE] = ACTIONS(857),
        [sym_number] = ACTIONS(855),
        [sym_identifier] = ACTIONS(859),
        [sym_comment] = ACTIONS(77),
        [sym__newline] = ACTIONS(857),
    },
    [551] = {
        [aux_sym_with_statement_repeat1] = STATE(553),
        [anon_sym_COMMA] = ACTIONS(913),
        [anon_sym_COLON] = ACTIONS(1131),
        [sym_comment] = ACTIONS(77),
    },
    [552] = {
        [sym__simple_statement] = STATE(388),
        [sym_print_statement] = STATE(5),
        [sym_expression_statement] = STATE(5),
        [sym_return_statement] = STATE(5),
        [sym_delete_statement] = STATE(5),
        [sym__suite] = STATE(556),
        [sym__expression] = STATE(24),
        [sym_binary_operator] = STATE(17),
        [sym_unary_operator] = STATE(17),
        [sym_subscript] = STATE(17),
        [sym_call] = STATE(17),
        [sym_list] = STATE(17),
        [sym_list_comprehension] = STATE(17),
        [sym_dictionary] = STATE(17),
        [sym_dictionary_comprehension] = STATE(17),
        [sym_set] = STATE(17),
        [sym_set_comprehension] = STATE(17),
        [anon_sym_print] = ACTIONS(87),
        [anon_sym_return] = ACTIONS(89),
        [anon_sym_del] = ACTIONS(91),
        [sym_pass_statement] = ACTIONS(93),
        [sym_break_statement] = ACTIONS(93),
        [sym_continue_statement] = ACTIONS(93),
        [anon_sym_not] = ACTIONS(111),
        [anon_sym_LBRACK] = ACTIONS(113),
        [anon_sym_LBRACE] = ACTIONS(115),
        [sym_number] = ACTIONS(117),
        [sym_identifier] = ACTIONS(119),
        [sym_comment] = ACTIONS(77),
        [sym__indent] = ACTIONS(771),
    },
    [553] = {
        [anon_sym_COMMA] = ACTIONS(953),
        [anon_sym_COLON] = ACTIONS(1133),
        [sym_comment] = ACTIONS(77),
    },
    [554] = {
        [sym__simple_statement] = STATE(388),
        [sym_print_statement] = STATE(5),
        [sym_expression_statement] = STATE(5),
        [sym_return_statement] = STATE(5),
        [sym_delete_statement] = STATE(5),
        [sym__suite] = STATE(555),
        [sym__expression] = STATE(24),
        [sym_binary_operator] = STATE(17),
        [sym_unary_operator] = STATE(17),
        [sym_subscript] = STATE(17),
        [sym_call] = STATE(17),
        [sym_list] = STATE(17),
        [sym_list_comprehension] = STATE(17),
        [sym_dictionary] = STATE(17),
        [sym_dictionary_comprehension] = STATE(17),
        [sym_set] = STATE(17),
        [sym_set_comprehension] = STATE(17),
        [anon_sym_print] = ACTIONS(87),
        [anon_sym_return] = ACTIONS(89),
        [anon_sym_del] = ACTIONS(91),
        [sym_pass_statement] = ACTIONS(93),
        [sym_break_statement] = ACTIONS(93),
        [sym_continue_statement] = ACTIONS(93),
        [anon_sym_not] = ACTIONS(111),
        [anon_sym_LBRACK] = ACTIONS(113),
        [anon_sym_LBRACE] = ACTIONS(115),
        [sym_number] = ACTIONS(117),
        [sym_identifier] = ACTIONS(119),
        [sym_comment] = ACTIONS(77),
        [sym__indent] = ACTIONS(771),
    },
    [555] = {
        [ts_builtin_sym_end] = ACTIONS(959),
        [anon_sym_SEMI] = ACTIONS(959),
        [anon_sym_print] = ACTIONS(957),
        [anon_sym_return] = ACTIONS(957),
        [anon_sym_del] = ACTIONS(957),
        [sym_pass_statement] = ACTIONS(957),
        [sym_break_statement] = ACTIONS(957),
        [sym_continue_statement] = ACTIONS(957),
        [anon_sym_if] = ACTIONS(957),
        [anon_sym_for] = ACTIONS(957),
        [anon_sym_while] = ACTIONS(957),
        [anon_sym_try] = ACTIONS(957),
        [anon_sym_with] = ACTIONS(957),
        [anon_sym_def] = ACTIONS(957),
        [anon_sym_class] = ACTIONS(957),
        [anon_sym_AT] = ACTIONS(959),
        [anon_sym_not] = ACTIONS(957),
        [anon_sym_LBRACK] = ACTIONS(959),
        [anon_sym_LBRACE] = ACTIONS(959),
        [sym_number] = ACTIONS(957),
        [sym_identifier] = ACTIONS(961),
        [sym_comment] = ACTIONS(77),
        [sym__newline] = ACTIONS(959),
    },
    [556] = {
        [ts_builtin_sym_end] = ACTIONS(967),
        [anon_sym_SEMI] = ACTIONS(967),
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
        [sym_comment] = ACTIONS(77),
        [sym__newline] = ACTIONS(967),
    },
    [557] = {
        [sym__simple_statement] = STATE(492),
        [sym_print_statement] = STATE(5),
        [sym_expression_statement] = STATE(5),
        [sym_return_statement] = STATE(5),
        [sym_delete_statement] = STATE(5),
        [sym__suite] = STATE(558),
        [sym__expression] = STATE(24),
        [sym_binary_operator] = STATE(17),
        [sym_unary_operator] = STATE(17),
        [sym_subscript] = STATE(17),
        [sym_call] = STATE(17),
        [sym_list] = STATE(17),
        [sym_list_comprehension] = STATE(17),
        [sym_dictionary] = STATE(17),
        [sym_dictionary_comprehension] = STATE(17),
        [sym_set] = STATE(17),
        [sym_set_comprehension] = STATE(17),
        [anon_sym_print] = ACTIONS(87),
        [anon_sym_return] = ACTIONS(89),
        [anon_sym_del] = ACTIONS(91),
        [sym_pass_statement] = ACTIONS(93),
        [sym_break_statement] = ACTIONS(93),
        [sym_continue_statement] = ACTIONS(93),
        [anon_sym_not] = ACTIONS(111),
        [anon_sym_LBRACK] = ACTIONS(113),
        [anon_sym_LBRACE] = ACTIONS(115),
        [sym_number] = ACTIONS(117),
        [sym_identifier] = ACTIONS(119),
        [sym_comment] = ACTIONS(77),
        [sym__indent] = ACTIONS(973),
    },
    [558] = {
        [sym_except_clause] = STATE(561),
        [sym_finally_clause] = STATE(562),
        [aux_sym_try_statement_repeat1] = STATE(563),
        [anon_sym_except] = ACTIONS(1135),
        [anon_sym_finally] = ACTIONS(1137),
        [sym_comment] = ACTIONS(77),
    },
    [559] = {
        [sym__expression] = STATE(573),
        [sym_binary_operator] = STATE(43),
        [sym_unary_operator] = STATE(43),
        [sym_subscript] = STATE(43),
        [sym_call] = STATE(43),
        [sym_list] = STATE(43),
        [sym_list_comprehension] = STATE(43),
        [sym_dictionary] = STATE(43),
        [sym_dictionary_comprehension] = STATE(43),
        [sym_set] = STATE(43),
        [sym_set_comprehension] = STATE(43),
        [anon_sym_not] = ACTIONS(139),
        [anon_sym_LBRACK] = ACTIONS(127),
        [anon_sym_LBRACE] = ACTIONS(129),
        [sym_number] = ACTIONS(131),
        [sym_identifier] = ACTIONS(133),
        [sym_comment] = ACTIONS(77),
    },
    [560] = {
        [anon_sym_COLON] = ACTIONS(1139),
        [sym_comment] = ACTIONS(77),
    },
    [561] = {
        [ts_builtin_sym_end] = ACTIONS(985),
        [anon_sym_SEMI] = ACTIONS(985),
        [anon_sym_print] = ACTIONS(983),
        [anon_sym_return] = ACTIONS(983),
        [anon_sym_del] = ACTIONS(983),
        [sym_pass_statement] = ACTIONS(983),
        [sym_break_statement] = ACTIONS(983),
        [sym_continue_statement] = ACTIONS(983),
        [anon_sym_if] = ACTIONS(983),
        [anon_sym_else] = ACTIONS(983),
        [anon_sym_for] = ACTIONS(983),
        [anon_sym_while] = ACTIONS(983),
        [anon_sym_try] = ACTIONS(983),
        [anon_sym_except] = ACTIONS(983),
        [anon_sym_finally] = ACTIONS(983),
        [anon_sym_with] = ACTIONS(983),
        [anon_sym_def] = ACTIONS(983),
        [anon_sym_class] = ACTIONS(983),
        [anon_sym_AT] = ACTIONS(985),
        [anon_sym_not] = ACTIONS(983),
        [anon_sym_LBRACK] = ACTIONS(985),
        [anon_sym_LBRACE] = ACTIONS(985),
        [sym_number] = ACTIONS(983),
        [sym_identifier] = ACTIONS(987),
        [sym_comment] = ACTIONS(77),
        [sym__newline] = ACTIONS(985),
    },
    [562] = {
        [ts_builtin_sym_end] = ACTIONS(991),
        [anon_sym_SEMI] = ACTIONS(991),
        [anon_sym_print] = ACTIONS(989),
        [anon_sym_return] = ACTIONS(989),
        [anon_sym_del] = ACTIONS(989),
        [sym_pass_statement] = ACTIONS(989),
        [sym_break_statement] = ACTIONS(989),
        [sym_continue_statement] = ACTIONS(989),
        [anon_sym_if] = ACTIONS(989),
        [anon_sym_for] = ACTIONS(989),
        [anon_sym_while] = ACTIONS(989),
        [anon_sym_try] = ACTIONS(989),
        [anon_sym_with] = ACTIONS(989),
        [anon_sym_def] = ACTIONS(989),
        [anon_sym_class] = ACTIONS(989),
        [anon_sym_AT] = ACTIONS(991),
        [anon_sym_not] = ACTIONS(989),
        [anon_sym_LBRACK] = ACTIONS(991),
        [anon_sym_LBRACE] = ACTIONS(991),
        [sym_number] = ACTIONS(989),
        [sym_identifier] = ACTIONS(993),
        [sym_comment] = ACTIONS(77),
        [sym__newline] = ACTIONS(991),
    },
    [563] = {
        [sym_else_clause] = STATE(565),
        [sym_except_clause] = STATE(566),
        [sym_finally_clause] = STATE(567),
        [ts_builtin_sym_end] = ACTIONS(991),
        [anon_sym_SEMI] = ACTIONS(991),
        [anon_sym_print] = ACTIONS(989),
        [anon_sym_return] = ACTIONS(989),
        [anon_sym_del] = ACTIONS(989),
        [sym_pass_statement] = ACTIONS(989),
        [sym_break_statement] = ACTIONS(989),
        [sym_continue_statement] = ACTIONS(989),
        [anon_sym_if] = ACTIONS(989),
        [anon_sym_else] = ACTIONS(1141),
        [anon_sym_for] = ACTIONS(989),
        [anon_sym_while] = ACTIONS(989),
        [anon_sym_try] = ACTIONS(989),
        [anon_sym_except] = ACTIONS(1143),
        [anon_sym_finally] = ACTIONS(1145),
        [anon_sym_with] = ACTIONS(989),
        [anon_sym_def] = ACTIONS(989),
        [anon_sym_class] = ACTIONS(989),
        [anon_sym_AT] = ACTIONS(991),
        [anon_sym_not] = ACTIONS(989),
        [anon_sym_LBRACK] = ACTIONS(991),
        [anon_sym_LBRACE] = ACTIONS(991),
        [sym_number] = ACTIONS(989),
        [sym_identifier] = ACTIONS(993),
        [sym_comment] = ACTIONS(77),
        [sym__newline] = ACTIONS(991),
    },
    [564] = {
        [anon_sym_COLON] = ACTIONS(1147),
        [sym_comment] = ACTIONS(77),
    },
    [565] = {
        [sym_finally_clause] = STATE(568),
        [ts_builtin_sym_end] = ACTIONS(1005),
        [anon_sym_SEMI] = ACTIONS(1005),
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
        [anon_sym_finally] = ACTIONS(1145),
        [anon_sym_with] = ACTIONS(1003),
        [anon_sym_def] = ACTIONS(1003),
        [anon_sym_class] = ACTIONS(1003),
        [anon_sym_AT] = ACTIONS(1005),
        [anon_sym_not] = ACTIONS(1003),
        [anon_sym_LBRACK] = ACTIONS(1005),
        [anon_sym_LBRACE] = ACTIONS(1005),
        [sym_number] = ACTIONS(1003),
        [sym_identifier] = ACTIONS(1007),
        [sym_comment] = ACTIONS(77),
        [sym__newline] = ACTIONS(1005),
    },
    [566] = {
        [ts_builtin_sym_end] = ACTIONS(1011),
        [anon_sym_SEMI] = ACTIONS(1011),
        [anon_sym_print] = ACTIONS(1009),
        [anon_sym_return] = ACTIONS(1009),
        [anon_sym_del] = ACTIONS(1009),
        [sym_pass_statement] = ACTIONS(1009),
        [sym_break_statement] = ACTIONS(1009),
        [sym_continue_statement] = ACTIONS(1009),
        [anon_sym_if] = ACTIONS(1009),
        [anon_sym_else] = ACTIONS(1009),
        [anon_sym_for] = ACTIONS(1009),
        [anon_sym_while] = ACTIONS(1009),
        [anon_sym_try] = ACTIONS(1009),
        [anon_sym_except] = ACTIONS(1009),
        [anon_sym_finally] = ACTIONS(1009),
        [anon_sym_with] = ACTIONS(1009),
        [anon_sym_def] = ACTIONS(1009),
        [anon_sym_class] = ACTIONS(1009),
        [anon_sym_AT] = ACTIONS(1011),
        [anon_sym_not] = ACTIONS(1009),
        [anon_sym_LBRACK] = ACTIONS(1011),
        [anon_sym_LBRACE] = ACTIONS(1011),
        [sym_number] = ACTIONS(1009),
        [sym_identifier] = ACTIONS(1013),
        [sym_comment] = ACTIONS(77),
        [sym__newline] = ACTIONS(1011),
    },
    [567] = {
        [ts_builtin_sym_end] = ACTIONS(1005),
        [anon_sym_SEMI] = ACTIONS(1005),
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
        [sym_number] = ACTIONS(1003),
        [sym_identifier] = ACTIONS(1007),
        [sym_comment] = ACTIONS(77),
        [sym__newline] = ACTIONS(1005),
    },
    [568] = {
        [ts_builtin_sym_end] = ACTIONS(1017),
        [anon_sym_SEMI] = ACTIONS(1017),
        [anon_sym_print] = ACTIONS(1015),
        [anon_sym_return] = ACTIONS(1015),
        [anon_sym_del] = ACTIONS(1015),
        [sym_pass_statement] = ACTIONS(1015),
        [sym_break_statement] = ACTIONS(1015),
        [sym_continue_statement] = ACTIONS(1015),
        [anon_sym_if] = ACTIONS(1015),
        [anon_sym_for] = ACTIONS(1015),
        [anon_sym_while] = ACTIONS(1015),
        [anon_sym_try] = ACTIONS(1015),
        [anon_sym_with] = ACTIONS(1015),
        [anon_sym_def] = ACTIONS(1015),
        [anon_sym_class] = ACTIONS(1015),
        [anon_sym_AT] = ACTIONS(1017),
        [anon_sym_not] = ACTIONS(1015),
        [anon_sym_LBRACK] = ACTIONS(1017),
        [anon_sym_LBRACE] = ACTIONS(1017),
        [sym_number] = ACTIONS(1015),
        [sym_identifier] = ACTIONS(1019),
        [sym_comment] = ACTIONS(77),
        [sym__newline] = ACTIONS(1017),
    },
    [569] = {
        [sym__simple_statement] = STATE(388),
        [sym_print_statement] = STATE(5),
        [sym_expression_statement] = STATE(5),
        [sym_return_statement] = STATE(5),
        [sym_delete_statement] = STATE(5),
        [sym__suite] = STATE(570),
        [sym__expression] = STATE(24),
        [sym_binary_operator] = STATE(17),
        [sym_unary_operator] = STATE(17),
        [sym_subscript] = STATE(17),
        [sym_call] = STATE(17),
        [sym_list] = STATE(17),
        [sym_list_comprehension] = STATE(17),
        [sym_dictionary] = STATE(17),
        [sym_dictionary_comprehension] = STATE(17),
        [sym_set] = STATE(17),
        [sym_set_comprehension] = STATE(17),
        [anon_sym_print] = ACTIONS(87),
        [anon_sym_return] = ACTIONS(89),
        [anon_sym_del] = ACTIONS(91),
        [sym_pass_statement] = ACTIONS(93),
        [sym_break_statement] = ACTIONS(93),
        [sym_continue_statement] = ACTIONS(93),
        [anon_sym_not] = ACTIONS(111),
        [anon_sym_LBRACK] = ACTIONS(113),
        [anon_sym_LBRACE] = ACTIONS(115),
        [sym_number] = ACTIONS(117),
        [sym_identifier] = ACTIONS(119),
        [sym_comment] = ACTIONS(77),
        [sym__indent] = ACTIONS(771),
    },
    [570] = {
        [ts_builtin_sym_end] = ACTIONS(1023),
        [anon_sym_SEMI] = ACTIONS(1023),
        [anon_sym_print] = ACTIONS(1021),
        [anon_sym_return] = ACTIONS(1021),
        [anon_sym_del] = ACTIONS(1021),
        [sym_pass_statement] = ACTIONS(1021),
        [sym_break_statement] = ACTIONS(1021),
        [sym_continue_statement] = ACTIONS(1021),
        [anon_sym_if] = ACTIONS(1021),
        [anon_sym_for] = ACTIONS(1021),
        [anon_sym_while] = ACTIONS(1021),
        [anon_sym_try] = ACTIONS(1021),
        [anon_sym_finally] = ACTIONS(1021),
        [anon_sym_with] = ACTIONS(1021),
        [anon_sym_def] = ACTIONS(1021),
        [anon_sym_class] = ACTIONS(1021),
        [anon_sym_AT] = ACTIONS(1023),
        [anon_sym_not] = ACTIONS(1021),
        [anon_sym_LBRACK] = ACTIONS(1023),
        [anon_sym_LBRACE] = ACTIONS(1023),
        [sym_number] = ACTIONS(1021),
        [sym_identifier] = ACTIONS(1025),
        [sym_comment] = ACTIONS(77),
        [sym__newline] = ACTIONS(1023),
    },
    [571] = {
        [sym__simple_statement] = STATE(388),
        [sym_print_statement] = STATE(5),
        [sym_expression_statement] = STATE(5),
        [sym_return_statement] = STATE(5),
        [sym_delete_statement] = STATE(5),
        [sym__suite] = STATE(572),
        [sym__expression] = STATE(24),
        [sym_binary_operator] = STATE(17),
        [sym_unary_operator] = STATE(17),
        [sym_subscript] = STATE(17),
        [sym_call] = STATE(17),
        [sym_list] = STATE(17),
        [sym_list_comprehension] = STATE(17),
        [sym_dictionary] = STATE(17),
        [sym_dictionary_comprehension] = STATE(17),
        [sym_set] = STATE(17),
        [sym_set_comprehension] = STATE(17),
        [anon_sym_print] = ACTIONS(87),
        [anon_sym_return] = ACTIONS(89),
        [anon_sym_del] = ACTIONS(91),
        [sym_pass_statement] = ACTIONS(93),
        [sym_break_statement] = ACTIONS(93),
        [sym_continue_statement] = ACTIONS(93),
        [anon_sym_not] = ACTIONS(111),
        [anon_sym_LBRACK] = ACTIONS(113),
        [anon_sym_LBRACE] = ACTIONS(115),
        [sym_number] = ACTIONS(117),
        [sym_identifier] = ACTIONS(119),
        [sym_comment] = ACTIONS(77),
        [sym__indent] = ACTIONS(771),
    },
    [572] = {
        [ts_builtin_sym_end] = ACTIONS(1029),
        [anon_sym_SEMI] = ACTIONS(1029),
        [anon_sym_print] = ACTIONS(1027),
        [anon_sym_return] = ACTIONS(1027),
        [anon_sym_del] = ACTIONS(1027),
        [sym_pass_statement] = ACTIONS(1027),
        [sym_break_statement] = ACTIONS(1027),
        [sym_continue_statement] = ACTIONS(1027),
        [anon_sym_if] = ACTIONS(1027),
        [anon_sym_for] = ACTIONS(1027),
        [anon_sym_while] = ACTIONS(1027),
        [anon_sym_try] = ACTIONS(1027),
        [anon_sym_with] = ACTIONS(1027),
        [anon_sym_def] = ACTIONS(1027),
        [anon_sym_class] = ACTIONS(1027),
        [anon_sym_AT] = ACTIONS(1029),
        [anon_sym_not] = ACTIONS(1027),
        [anon_sym_LBRACK] = ACTIONS(1029),
        [anon_sym_LBRACE] = ACTIONS(1029),
        [sym_number] = ACTIONS(1027),
        [sym_identifier] = ACTIONS(1031),
        [sym_comment] = ACTIONS(77),
        [sym__newline] = ACTIONS(1029),
    },
    [573] = {
        [anon_sym_COMMA] = ACTIONS(1149),
        [anon_sym_COLON] = ACTIONS(1151),
        [anon_sym_as] = ACTIONS(1149),
        [anon_sym_LPAREN] = ACTIONS(247),
        [anon_sym_STAR] = ACTIONS(921),
        [anon_sym_PLUS] = ACTIONS(923),
        [anon_sym_DASH] = ACTIONS(923),
        [anon_sym_SLASH] = ACTIONS(925),
        [anon_sym_STAR_STAR] = ACTIONS(927),
        [anon_sym_PIPE] = ACTIONS(929),
        [anon_sym_AMP] = ACTIONS(931),
        [anon_sym_CARET] = ACTIONS(933),
        [anon_sym_LT_LT] = ACTIONS(923),
        [anon_sym_GT_GT] = ACTIONS(923),
        [anon_sym_and] = ACTIONS(931),
        [anon_sym_or] = ACTIONS(929),
        [anon_sym_LBRACK] = ACTIONS(263),
        [sym_comment] = ACTIONS(77),
    },
    [574] = {
        [sym__expression] = STATE(576),
        [sym_binary_operator] = STATE(43),
        [sym_unary_operator] = STATE(43),
        [sym_subscript] = STATE(43),
        [sym_call] = STATE(43),
        [sym_list] = STATE(43),
        [sym_list_comprehension] = STATE(43),
        [sym_dictionary] = STATE(43),
        [sym_dictionary_comprehension] = STATE(43),
        [sym_set] = STATE(43),
        [sym_set_comprehension] = STATE(43),
        [anon_sym_not] = ACTIONS(125),
        [anon_sym_LBRACK] = ACTIONS(127),
        [anon_sym_LBRACE] = ACTIONS(129),
        [sym_number] = ACTIONS(131),
        [sym_identifier] = ACTIONS(133),
        [sym_comment] = ACTIONS(77),
    },
    [575] = {
        [sym__simple_statement] = STATE(388),
        [sym_print_statement] = STATE(5),
        [sym_expression_statement] = STATE(5),
        [sym_return_statement] = STATE(5),
        [sym_delete_statement] = STATE(5),
        [sym__suite] = STATE(579),
        [sym__expression] = STATE(24),
        [sym_binary_operator] = STATE(17),
        [sym_unary_operator] = STATE(17),
        [sym_subscript] = STATE(17),
        [sym_call] = STATE(17),
        [sym_list] = STATE(17),
        [sym_list_comprehension] = STATE(17),
        [sym_dictionary] = STATE(17),
        [sym_dictionary_comprehension] = STATE(17),
        [sym_set] = STATE(17),
        [sym_set_comprehension] = STATE(17),
        [anon_sym_print] = ACTIONS(87),
        [anon_sym_return] = ACTIONS(89),
        [anon_sym_del] = ACTIONS(91),
        [sym_pass_statement] = ACTIONS(93),
        [sym_break_statement] = ACTIONS(93),
        [sym_continue_statement] = ACTIONS(93),
        [anon_sym_not] = ACTIONS(111),
        [anon_sym_LBRACK] = ACTIONS(113),
        [anon_sym_LBRACE] = ACTIONS(115),
        [sym_number] = ACTIONS(117),
        [sym_identifier] = ACTIONS(119),
        [sym_comment] = ACTIONS(77),
        [sym__indent] = ACTIONS(771),
    },
    [576] = {
        [anon_sym_COLON] = ACTIONS(1153),
        [anon_sym_LPAREN] = ACTIONS(247),
        [anon_sym_STAR] = ACTIONS(437),
        [anon_sym_PLUS] = ACTIONS(439),
        [anon_sym_DASH] = ACTIONS(439),
        [anon_sym_SLASH] = ACTIONS(441),
        [anon_sym_STAR_STAR] = ACTIONS(443),
        [anon_sym_PIPE] = ACTIONS(445),
        [anon_sym_AMP] = ACTIONS(447),
        [anon_sym_CARET] = ACTIONS(449),
        [anon_sym_LT_LT] = ACTIONS(439),
        [anon_sym_GT_GT] = ACTIONS(439),
        [anon_sym_and] = ACTIONS(447),
        [anon_sym_or] = ACTIONS(445),
        [anon_sym_LBRACK] = ACTIONS(263),
        [sym_comment] = ACTIONS(77),
    },
    [577] = {
        [sym__simple_statement] = STATE(388),
        [sym_print_statement] = STATE(5),
        [sym_expression_statement] = STATE(5),
        [sym_return_statement] = STATE(5),
        [sym_delete_statement] = STATE(5),
        [sym__suite] = STATE(578),
        [sym__expression] = STATE(24),
        [sym_binary_operator] = STATE(17),
        [sym_unary_operator] = STATE(17),
        [sym_subscript] = STATE(17),
        [sym_call] = STATE(17),
        [sym_list] = STATE(17),
        [sym_list_comprehension] = STATE(17),
        [sym_dictionary] = STATE(17),
        [sym_dictionary_comprehension] = STATE(17),
        [sym_set] = STATE(17),
        [sym_set_comprehension] = STATE(17),
        [anon_sym_print] = ACTIONS(87),
        [anon_sym_return] = ACTIONS(89),
        [anon_sym_del] = ACTIONS(91),
        [sym_pass_statement] = ACTIONS(93),
        [sym_break_statement] = ACTIONS(93),
        [sym_continue_statement] = ACTIONS(93),
        [anon_sym_not] = ACTIONS(111),
        [anon_sym_LBRACK] = ACTIONS(113),
        [anon_sym_LBRACE] = ACTIONS(115),
        [sym_number] = ACTIONS(117),
        [sym_identifier] = ACTIONS(119),
        [sym_comment] = ACTIONS(77),
        [sym__indent] = ACTIONS(771),
    },
    [578] = {
        [ts_builtin_sym_end] = ACTIONS(1041),
        [anon_sym_SEMI] = ACTIONS(1041),
        [anon_sym_print] = ACTIONS(1039),
        [anon_sym_return] = ACTIONS(1039),
        [anon_sym_del] = ACTIONS(1039),
        [sym_pass_statement] = ACTIONS(1039),
        [sym_break_statement] = ACTIONS(1039),
        [sym_continue_statement] = ACTIONS(1039),
        [anon_sym_if] = ACTIONS(1039),
        [anon_sym_else] = ACTIONS(1039),
        [anon_sym_for] = ACTIONS(1039),
        [anon_sym_while] = ACTIONS(1039),
        [anon_sym_try] = ACTIONS(1039),
        [anon_sym_except] = ACTIONS(1039),
        [anon_sym_finally] = ACTIONS(1039),
        [anon_sym_with] = ACTIONS(1039),
        [anon_sym_def] = ACTIONS(1039),
        [anon_sym_class] = ACTIONS(1039),
        [anon_sym_AT] = ACTIONS(1041),
        [anon_sym_not] = ACTIONS(1039),
        [anon_sym_LBRACK] = ACTIONS(1041),
        [anon_sym_LBRACE] = ACTIONS(1041),
        [sym_number] = ACTIONS(1039),
        [sym_identifier] = ACTIONS(1043),
        [sym_comment] = ACTIONS(77),
        [sym__newline] = ACTIONS(1041),
    },
    [579] = {
        [ts_builtin_sym_end] = ACTIONS(1047),
        [anon_sym_SEMI] = ACTIONS(1047),
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
        [sym_comment] = ACTIONS(77),
        [sym__newline] = ACTIONS(1047),
    },
    [580] = {
        [anon_sym_COLON] = ACTIONS(1155),
        [anon_sym_LPAREN] = ACTIONS(247),
        [anon_sym_STAR] = ACTIONS(437),
        [anon_sym_PLUS] = ACTIONS(439),
        [anon_sym_DASH] = ACTIONS(439),
        [anon_sym_SLASH] = ACTIONS(441),
        [anon_sym_STAR_STAR] = ACTIONS(443),
        [anon_sym_PIPE] = ACTIONS(445),
        [anon_sym_AMP] = ACTIONS(447),
        [anon_sym_CARET] = ACTIONS(449),
        [anon_sym_LT_LT] = ACTIONS(439),
        [anon_sym_GT_GT] = ACTIONS(439),
        [anon_sym_and] = ACTIONS(447),
        [anon_sym_or] = ACTIONS(445),
        [anon_sym_LBRACK] = ACTIONS(263),
        [sym_comment] = ACTIONS(77),
    },
    [581] = {
        [sym__simple_statement] = STATE(388),
        [sym_print_statement] = STATE(5),
        [sym_expression_statement] = STATE(5),
        [sym_return_statement] = STATE(5),
        [sym_delete_statement] = STATE(5),
        [sym__suite] = STATE(582),
        [sym__expression] = STATE(24),
        [sym_binary_operator] = STATE(17),
        [sym_unary_operator] = STATE(17),
        [sym_subscript] = STATE(17),
        [sym_call] = STATE(17),
        [sym_list] = STATE(17),
        [sym_list_comprehension] = STATE(17),
        [sym_dictionary] = STATE(17),
        [sym_dictionary_comprehension] = STATE(17),
        [sym_set] = STATE(17),
        [sym_set_comprehension] = STATE(17),
        [anon_sym_print] = ACTIONS(87),
        [anon_sym_return] = ACTIONS(89),
        [anon_sym_del] = ACTIONS(91),
        [sym_pass_statement] = ACTIONS(93),
        [sym_break_statement] = ACTIONS(93),
        [sym_continue_statement] = ACTIONS(93),
        [anon_sym_not] = ACTIONS(111),
        [anon_sym_LBRACK] = ACTIONS(113),
        [anon_sym_LBRACE] = ACTIONS(115),
        [sym_number] = ACTIONS(117),
        [sym_identifier] = ACTIONS(119),
        [sym_comment] = ACTIONS(77),
        [sym__indent] = ACTIONS(771),
    },
    [582] = {
        [sym_else_clause] = STATE(583),
        [ts_builtin_sym_end] = ACTIONS(1057),
        [anon_sym_SEMI] = ACTIONS(1057),
        [anon_sym_print] = ACTIONS(1055),
        [anon_sym_return] = ACTIONS(1055),
        [anon_sym_del] = ACTIONS(1055),
        [sym_pass_statement] = ACTIONS(1055),
        [sym_break_statement] = ACTIONS(1055),
        [sym_continue_statement] = ACTIONS(1055),
        [anon_sym_if] = ACTIONS(1055),
        [anon_sym_else] = ACTIONS(1141),
        [anon_sym_for] = ACTIONS(1055),
        [anon_sym_while] = ACTIONS(1055),
        [anon_sym_try] = ACTIONS(1055),
        [anon_sym_with] = ACTIONS(1055),
        [anon_sym_def] = ACTIONS(1055),
        [anon_sym_class] = ACTIONS(1055),
        [anon_sym_AT] = ACTIONS(1057),
        [anon_sym_not] = ACTIONS(1055),
        [anon_sym_LBRACK] = ACTIONS(1057),
        [anon_sym_LBRACE] = ACTIONS(1057),
        [sym_number] = ACTIONS(1055),
        [sym_identifier] = ACTIONS(1059),
        [sym_comment] = ACTIONS(77),
        [sym__newline] = ACTIONS(1057),
    },
    [583] = {
        [ts_builtin_sym_end] = ACTIONS(1063),
        [anon_sym_SEMI] = ACTIONS(1063),
        [anon_sym_print] = ACTIONS(1061),
        [anon_sym_return] = ACTIONS(1061),
        [anon_sym_del] = ACTIONS(1061),
        [sym_pass_statement] = ACTIONS(1061),
        [sym_break_statement] = ACTIONS(1061),
        [sym_continue_statement] = ACTIONS(1061),
        [anon_sym_if] = ACTIONS(1061),
        [anon_sym_for] = ACTIONS(1061),
        [anon_sym_while] = ACTIONS(1061),
        [anon_sym_try] = ACTIONS(1061),
        [anon_sym_with] = ACTIONS(1061),
        [anon_sym_def] = ACTIONS(1061),
        [anon_sym_class] = ACTIONS(1061),
        [anon_sym_AT] = ACTIONS(1063),
        [anon_sym_not] = ACTIONS(1061),
        [anon_sym_LBRACK] = ACTIONS(1063),
        [anon_sym_LBRACE] = ACTIONS(1063),
        [sym_number] = ACTIONS(1061),
        [sym_identifier] = ACTIONS(1065),
        [sym_comment] = ACTIONS(77),
        [sym__newline] = ACTIONS(1063),
    },
    [584] = {
        [anon_sym_in] = ACTIONS(1157),
        [sym_comment] = ACTIONS(77),
    },
    [585] = {
        [sym_expression_list] = STATE(586),
        [sym__expression] = STATE(525),
        [sym_binary_operator] = STATE(43),
        [sym_unary_operator] = STATE(43),
        [sym_subscript] = STATE(43),
        [sym_call] = STATE(43),
        [sym_list] = STATE(43),
        [sym_list_comprehension] = STATE(43),
        [sym_dictionary] = STATE(43),
        [sym_dictionary_comprehension] = STATE(43),
        [sym_set] = STATE(43),
        [sym_set_comprehension] = STATE(43),
        [anon_sym_not] = ACTIONS(935),
        [anon_sym_LBRACK] = ACTIONS(127),
        [anon_sym_LBRACE] = ACTIONS(129),
        [sym_number] = ACTIONS(131),
        [sym_identifier] = ACTIONS(133),
        [sym_comment] = ACTIONS(77),
    },
    [586] = {
        [anon_sym_COLON] = ACTIONS(1159),
        [sym_comment] = ACTIONS(77),
    },
    [587] = {
        [sym__simple_statement] = STATE(388),
        [sym_print_statement] = STATE(5),
        [sym_expression_statement] = STATE(5),
        [sym_return_statement] = STATE(5),
        [sym_delete_statement] = STATE(5),
        [sym__suite] = STATE(588),
        [sym__expression] = STATE(24),
        [sym_binary_operator] = STATE(17),
        [sym_unary_operator] = STATE(17),
        [sym_subscript] = STATE(17),
        [sym_call] = STATE(17),
        [sym_list] = STATE(17),
        [sym_list_comprehension] = STATE(17),
        [sym_dictionary] = STATE(17),
        [sym_dictionary_comprehension] = STATE(17),
        [sym_set] = STATE(17),
        [sym_set_comprehension] = STATE(17),
        [anon_sym_print] = ACTIONS(87),
        [anon_sym_return] = ACTIONS(89),
        [anon_sym_del] = ACTIONS(91),
        [sym_pass_statement] = ACTIONS(93),
        [sym_break_statement] = ACTIONS(93),
        [sym_continue_statement] = ACTIONS(93),
        [anon_sym_not] = ACTIONS(111),
        [anon_sym_LBRACK] = ACTIONS(113),
        [anon_sym_LBRACE] = ACTIONS(115),
        [sym_number] = ACTIONS(117),
        [sym_identifier] = ACTIONS(119),
        [sym_comment] = ACTIONS(77),
        [sym__indent] = ACTIONS(771),
    },
    [588] = {
        [sym_else_clause] = STATE(589),
        [ts_builtin_sym_end] = ACTIONS(1077),
        [anon_sym_SEMI] = ACTIONS(1077),
        [anon_sym_print] = ACTIONS(1075),
        [anon_sym_return] = ACTIONS(1075),
        [anon_sym_del] = ACTIONS(1075),
        [sym_pass_statement] = ACTIONS(1075),
        [sym_break_statement] = ACTIONS(1075),
        [sym_continue_statement] = ACTIONS(1075),
        [anon_sym_if] = ACTIONS(1075),
        [anon_sym_else] = ACTIONS(1141),
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
        [sym_number] = ACTIONS(1075),
        [sym_identifier] = ACTIONS(1079),
        [sym_comment] = ACTIONS(77),
        [sym__newline] = ACTIONS(1077),
    },
    [589] = {
        [ts_builtin_sym_end] = ACTIONS(1083),
        [anon_sym_SEMI] = ACTIONS(1083),
        [anon_sym_print] = ACTIONS(1081),
        [anon_sym_return] = ACTIONS(1081),
        [anon_sym_del] = ACTIONS(1081),
        [sym_pass_statement] = ACTIONS(1081),
        [sym_break_statement] = ACTIONS(1081),
        [sym_continue_statement] = ACTIONS(1081),
        [anon_sym_if] = ACTIONS(1081),
        [anon_sym_for] = ACTIONS(1081),
        [anon_sym_while] = ACTIONS(1081),
        [anon_sym_try] = ACTIONS(1081),
        [anon_sym_with] = ACTIONS(1081),
        [anon_sym_def] = ACTIONS(1081),
        [anon_sym_class] = ACTIONS(1081),
        [anon_sym_AT] = ACTIONS(1083),
        [anon_sym_not] = ACTIONS(1081),
        [anon_sym_LBRACK] = ACTIONS(1083),
        [anon_sym_LBRACE] = ACTIONS(1083),
        [sym_number] = ACTIONS(1081),
        [sym_identifier] = ACTIONS(1085),
        [sym_comment] = ACTIONS(77),
        [sym__newline] = ACTIONS(1083),
    },
    [590] = {
        [anon_sym_COLON] = ACTIONS(1161),
        [anon_sym_LPAREN] = ACTIONS(247),
        [anon_sym_STAR] = ACTIONS(437),
        [anon_sym_PLUS] = ACTIONS(439),
        [anon_sym_DASH] = ACTIONS(439),
        [anon_sym_SLASH] = ACTIONS(441),
        [anon_sym_STAR_STAR] = ACTIONS(443),
        [anon_sym_PIPE] = ACTIONS(445),
        [anon_sym_AMP] = ACTIONS(447),
        [anon_sym_CARET] = ACTIONS(449),
        [anon_sym_LT_LT] = ACTIONS(439),
        [anon_sym_GT_GT] = ACTIONS(439),
        [anon_sym_and] = ACTIONS(447),
        [anon_sym_or] = ACTIONS(445),
        [anon_sym_LBRACK] = ACTIONS(263),
        [sym_comment] = ACTIONS(77),
    },
    [591] = {
        [sym__simple_statement] = STATE(388),
        [sym_print_statement] = STATE(5),
        [sym_expression_statement] = STATE(5),
        [sym_return_statement] = STATE(5),
        [sym_delete_statement] = STATE(5),
        [sym__suite] = STATE(592),
        [sym__expression] = STATE(24),
        [sym_binary_operator] = STATE(17),
        [sym_unary_operator] = STATE(17),
        [sym_subscript] = STATE(17),
        [sym_call] = STATE(17),
        [sym_list] = STATE(17),
        [sym_list_comprehension] = STATE(17),
        [sym_dictionary] = STATE(17),
        [sym_dictionary_comprehension] = STATE(17),
        [sym_set] = STATE(17),
        [sym_set_comprehension] = STATE(17),
        [anon_sym_print] = ACTIONS(87),
        [anon_sym_return] = ACTIONS(89),
        [anon_sym_del] = ACTIONS(91),
        [sym_pass_statement] = ACTIONS(93),
        [sym_break_statement] = ACTIONS(93),
        [sym_continue_statement] = ACTIONS(93),
        [anon_sym_not] = ACTIONS(111),
        [anon_sym_LBRACK] = ACTIONS(113),
        [anon_sym_LBRACE] = ACTIONS(115),
        [sym_number] = ACTIONS(117),
        [sym_identifier] = ACTIONS(119),
        [sym_comment] = ACTIONS(77),
        [sym__indent] = ACTIONS(771),
    },
    [592] = {
        [sym_elif_clause] = STATE(594),
        [sym_else_clause] = STATE(595),
        [aux_sym_if_statement_repeat1] = STATE(596),
        [ts_builtin_sym_end] = ACTIONS(1093),
        [anon_sym_SEMI] = ACTIONS(1093),
        [anon_sym_print] = ACTIONS(1089),
        [anon_sym_return] = ACTIONS(1089),
        [anon_sym_del] = ACTIONS(1089),
        [sym_pass_statement] = ACTIONS(1089),
        [sym_break_statement] = ACTIONS(1089),
        [sym_continue_statement] = ACTIONS(1089),
        [anon_sym_if] = ACTIONS(1089),
        [anon_sym_elif] = ACTIONS(1163),
        [anon_sym_else] = ACTIONS(1141),
        [anon_sym_for] = ACTIONS(1089),
        [anon_sym_while] = ACTIONS(1089),
        [anon_sym_try] = ACTIONS(1089),
        [anon_sym_with] = ACTIONS(1089),
        [anon_sym_def] = ACTIONS(1089),
        [anon_sym_class] = ACTIONS(1089),
        [anon_sym_AT] = ACTIONS(1093),
        [anon_sym_not] = ACTIONS(1089),
        [anon_sym_LBRACK] = ACTIONS(1093),
        [anon_sym_LBRACE] = ACTIONS(1093),
        [sym_number] = ACTIONS(1089),
        [sym_identifier] = ACTIONS(1095),
        [sym_comment] = ACTIONS(77),
        [sym__newline] = ACTIONS(1093),
    },
    [593] = {
        [sym__expression] = STATE(599),
        [sym_binary_operator] = STATE(43),
        [sym_unary_operator] = STATE(43),
        [sym_subscript] = STATE(43),
        [sym_call] = STATE(43),
        [sym_list] = STATE(43),
        [sym_list_comprehension] = STATE(43),
        [sym_dictionary] = STATE(43),
        [sym_dictionary_comprehension] = STATE(43),
        [sym_set] = STATE(43),
        [sym_set_comprehension] = STATE(43),
        [anon_sym_not] = ACTIONS(125),
        [anon_sym_LBRACK] = ACTIONS(127),
        [anon_sym_LBRACE] = ACTIONS(129),
        [sym_number] = ACTIONS(131),
        [sym_identifier] = ACTIONS(133),
        [sym_comment] = ACTIONS(77),
    },
    [594] = {
        [ts_builtin_sym_end] = ACTIONS(1099),
        [anon_sym_SEMI] = ACTIONS(1099),
        [anon_sym_print] = ACTIONS(1097),
        [anon_sym_return] = ACTIONS(1097),
        [anon_sym_del] = ACTIONS(1097),
        [sym_pass_statement] = ACTIONS(1097),
        [sym_break_statement] = ACTIONS(1097),
        [sym_continue_statement] = ACTIONS(1097),
        [anon_sym_if] = ACTIONS(1097),
        [anon_sym_elif] = ACTIONS(1097),
        [anon_sym_else] = ACTIONS(1097),
        [anon_sym_for] = ACTIONS(1097),
        [anon_sym_while] = ACTIONS(1097),
        [anon_sym_try] = ACTIONS(1097),
        [anon_sym_with] = ACTIONS(1097),
        [anon_sym_def] = ACTIONS(1097),
        [anon_sym_class] = ACTIONS(1097),
        [anon_sym_AT] = ACTIONS(1099),
        [anon_sym_not] = ACTIONS(1097),
        [anon_sym_LBRACK] = ACTIONS(1099),
        [anon_sym_LBRACE] = ACTIONS(1099),
        [sym_number] = ACTIONS(1097),
        [sym_identifier] = ACTIONS(1101),
        [sym_comment] = ACTIONS(77),
        [sym__newline] = ACTIONS(1099),
    },
    [595] = {
        [ts_builtin_sym_end] = ACTIONS(1105),
        [anon_sym_SEMI] = ACTIONS(1105),
        [anon_sym_print] = ACTIONS(1103),
        [anon_sym_return] = ACTIONS(1103),
        [anon_sym_del] = ACTIONS(1103),
        [sym_pass_statement] = ACTIONS(1103),
        [sym_break_statement] = ACTIONS(1103),
        [sym_continue_statement] = ACTIONS(1103),
        [anon_sym_if] = ACTIONS(1103),
        [anon_sym_for] = ACTIONS(1103),
        [anon_sym_while] = ACTIONS(1103),
        [anon_sym_try] = ACTIONS(1103),
        [anon_sym_with] = ACTIONS(1103),
        [anon_sym_def] = ACTIONS(1103),
        [anon_sym_class] = ACTIONS(1103),
        [anon_sym_AT] = ACTIONS(1105),
        [anon_sym_not] = ACTIONS(1103),
        [anon_sym_LBRACK] = ACTIONS(1105),
        [anon_sym_LBRACE] = ACTIONS(1105),
        [sym_number] = ACTIONS(1103),
        [sym_identifier] = ACTIONS(1107),
        [sym_comment] = ACTIONS(77),
        [sym__newline] = ACTIONS(1105),
    },
    [596] = {
        [sym_elif_clause] = STATE(597),
        [sym_else_clause] = STATE(598),
        [ts_builtin_sym_end] = ACTIONS(1105),
        [anon_sym_SEMI] = ACTIONS(1105),
        [anon_sym_print] = ACTIONS(1103),
        [anon_sym_return] = ACTIONS(1103),
        [anon_sym_del] = ACTIONS(1103),
        [sym_pass_statement] = ACTIONS(1103),
        [sym_break_statement] = ACTIONS(1103),
        [sym_continue_statement] = ACTIONS(1103),
        [anon_sym_if] = ACTIONS(1103),
        [anon_sym_elif] = ACTIONS(1163),
        [anon_sym_else] = ACTIONS(1141),
        [anon_sym_for] = ACTIONS(1103),
        [anon_sym_while] = ACTIONS(1103),
        [anon_sym_try] = ACTIONS(1103),
        [anon_sym_with] = ACTIONS(1103),
        [anon_sym_def] = ACTIONS(1103),
        [anon_sym_class] = ACTIONS(1103),
        [anon_sym_AT] = ACTIONS(1105),
        [anon_sym_not] = ACTIONS(1103),
        [anon_sym_LBRACK] = ACTIONS(1105),
        [anon_sym_LBRACE] = ACTIONS(1105),
        [sym_number] = ACTIONS(1103),
        [sym_identifier] = ACTIONS(1107),
        [sym_comment] = ACTIONS(77),
        [sym__newline] = ACTIONS(1105),
    },
    [597] = {
        [ts_builtin_sym_end] = ACTIONS(1111),
        [anon_sym_SEMI] = ACTIONS(1111),
        [anon_sym_print] = ACTIONS(1109),
        [anon_sym_return] = ACTIONS(1109),
        [anon_sym_del] = ACTIONS(1109),
        [sym_pass_statement] = ACTIONS(1109),
        [sym_break_statement] = ACTIONS(1109),
        [sym_continue_statement] = ACTIONS(1109),
        [anon_sym_if] = ACTIONS(1109),
        [anon_sym_elif] = ACTIONS(1109),
        [anon_sym_else] = ACTIONS(1109),
        [anon_sym_for] = ACTIONS(1109),
        [anon_sym_while] = ACTIONS(1109),
        [anon_sym_try] = ACTIONS(1109),
        [anon_sym_with] = ACTIONS(1109),
        [anon_sym_def] = ACTIONS(1109),
        [anon_sym_class] = ACTIONS(1109),
        [anon_sym_AT] = ACTIONS(1111),
        [anon_sym_not] = ACTIONS(1109),
        [anon_sym_LBRACK] = ACTIONS(1111),
        [anon_sym_LBRACE] = ACTIONS(1111),
        [sym_number] = ACTIONS(1109),
        [sym_identifier] = ACTIONS(1113),
        [sym_comment] = ACTIONS(77),
        [sym__newline] = ACTIONS(1111),
    },
    [598] = {
        [ts_builtin_sym_end] = ACTIONS(1117),
        [anon_sym_SEMI] = ACTIONS(1117),
        [anon_sym_print] = ACTIONS(1115),
        [anon_sym_return] = ACTIONS(1115),
        [anon_sym_del] = ACTIONS(1115),
        [sym_pass_statement] = ACTIONS(1115),
        [sym_break_statement] = ACTIONS(1115),
        [sym_continue_statement] = ACTIONS(1115),
        [anon_sym_if] = ACTIONS(1115),
        [anon_sym_for] = ACTIONS(1115),
        [anon_sym_while] = ACTIONS(1115),
        [anon_sym_try] = ACTIONS(1115),
        [anon_sym_with] = ACTIONS(1115),
        [anon_sym_def] = ACTIONS(1115),
        [anon_sym_class] = ACTIONS(1115),
        [anon_sym_AT] = ACTIONS(1117),
        [anon_sym_not] = ACTIONS(1115),
        [anon_sym_LBRACK] = ACTIONS(1117),
        [anon_sym_LBRACE] = ACTIONS(1117),
        [sym_number] = ACTIONS(1115),
        [sym_identifier] = ACTIONS(1119),
        [sym_comment] = ACTIONS(77),
        [sym__newline] = ACTIONS(1117),
    },
    [599] = {
        [anon_sym_COLON] = ACTIONS(1165),
        [anon_sym_LPAREN] = ACTIONS(247),
        [anon_sym_STAR] = ACTIONS(437),
        [anon_sym_PLUS] = ACTIONS(439),
        [anon_sym_DASH] = ACTIONS(439),
        [anon_sym_SLASH] = ACTIONS(441),
        [anon_sym_STAR_STAR] = ACTIONS(443),
        [anon_sym_PIPE] = ACTIONS(445),
        [anon_sym_AMP] = ACTIONS(447),
        [anon_sym_CARET] = ACTIONS(449),
        [anon_sym_LT_LT] = ACTIONS(439),
        [anon_sym_GT_GT] = ACTIONS(439),
        [anon_sym_and] = ACTIONS(447),
        [anon_sym_or] = ACTIONS(445),
        [anon_sym_LBRACK] = ACTIONS(263),
        [sym_comment] = ACTIONS(77),
    },
    [600] = {
        [sym__simple_statement] = STATE(388),
        [sym_print_statement] = STATE(5),
        [sym_expression_statement] = STATE(5),
        [sym_return_statement] = STATE(5),
        [sym_delete_statement] = STATE(5),
        [sym__suite] = STATE(601),
        [sym__expression] = STATE(24),
        [sym_binary_operator] = STATE(17),
        [sym_unary_operator] = STATE(17),
        [sym_subscript] = STATE(17),
        [sym_call] = STATE(17),
        [sym_list] = STATE(17),
        [sym_list_comprehension] = STATE(17),
        [sym_dictionary] = STATE(17),
        [sym_dictionary_comprehension] = STATE(17),
        [sym_set] = STATE(17),
        [sym_set_comprehension] = STATE(17),
        [anon_sym_print] = ACTIONS(87),
        [anon_sym_return] = ACTIONS(89),
        [anon_sym_del] = ACTIONS(91),
        [sym_pass_statement] = ACTIONS(93),
        [sym_break_statement] = ACTIONS(93),
        [sym_continue_statement] = ACTIONS(93),
        [anon_sym_not] = ACTIONS(111),
        [anon_sym_LBRACK] = ACTIONS(113),
        [anon_sym_LBRACE] = ACTIONS(115),
        [sym_number] = ACTIONS(117),
        [sym_identifier] = ACTIONS(119),
        [sym_comment] = ACTIONS(77),
        [sym__indent] = ACTIONS(771),
    },
    [601] = {
        [ts_builtin_sym_end] = ACTIONS(1125),
        [anon_sym_SEMI] = ACTIONS(1125),
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
        [sym_number] = ACTIONS(1123),
        [sym_identifier] = ACTIONS(1127),
        [sym_comment] = ACTIONS(77),
        [sym__newline] = ACTIONS(1125),
    },
    [602] = {
        [sym__expression] = STATE(359),
        [sym_binary_operator] = STATE(17),
        [sym_unary_operator] = STATE(17),
        [sym_subscript] = STATE(17),
        [sym_call] = STATE(17),
        [sym_list] = STATE(17),
        [sym_list_comprehension] = STATE(17),
        [sym_dictionary] = STATE(17),
        [sym_dictionary_comprehension] = STATE(17),
        [sym_set] = STATE(17),
        [sym_set_comprehension] = STATE(17),
        [anon_sym_not] = ACTIONS(121),
        [anon_sym_LBRACK] = ACTIONS(113),
        [anon_sym_LBRACE] = ACTIONS(115),
        [sym_number] = ACTIONS(117),
        [sym_identifier] = ACTIONS(119),
        [sym_comment] = ACTIONS(77),
    },
    [603] = {
        [sym_comment] = ACTIONS(77),
        [sym__newline] = ACTIONS(1167),
    },
    [604] = {
        [aux_sym_print_statement_repeat1] = STATE(612),
        [anon_sym_COMMA] = ACTIONS(1169),
        [anon_sym_LPAREN] = ACTIONS(183),
        [anon_sym_STAR] = ACTIONS(1171),
        [anon_sym_PLUS] = ACTIONS(1173),
        [anon_sym_DASH] = ACTIONS(1173),
        [anon_sym_SLASH] = ACTIONS(1175),
        [anon_sym_STAR_STAR] = ACTIONS(1177),
        [anon_sym_PIPE] = ACTIONS(1179),
        [anon_sym_AMP] = ACTIONS(1181),
        [anon_sym_CARET] = ACTIONS(1183),
        [anon_sym_LT_LT] = ACTIONS(1173),
        [anon_sym_GT_GT] = ACTIONS(1173),
        [anon_sym_and] = ACTIONS(1181),
        [anon_sym_or] = ACTIONS(1179),
        [anon_sym_LBRACK] = ACTIONS(199),
        [sym_comment] = ACTIONS(77),
        [sym__newline] = ACTIONS(475),
    },
    [605] = {
        [sym__expression] = STATE(620),
        [sym_binary_operator] = STATE(17),
        [sym_unary_operator] = STATE(17),
        [sym_subscript] = STATE(17),
        [sym_call] = STATE(17),
        [sym_list] = STATE(17),
        [sym_list_comprehension] = STATE(17),
        [sym_dictionary] = STATE(17),
        [sym_dictionary_comprehension] = STATE(17),
        [sym_set] = STATE(17),
        [sym_set_comprehension] = STATE(17),
        [anon_sym_not] = ACTIONS(121),
        [anon_sym_LBRACK] = ACTIONS(113),
        [anon_sym_LBRACE] = ACTIONS(115),
        [sym_number] = ACTIONS(117),
        [sym_identifier] = ACTIONS(119),
        [sym_comment] = ACTIONS(77),
    },
    [606] = {
        [sym__expression] = STATE(619),
        [sym_binary_operator] = STATE(17),
        [sym_unary_operator] = STATE(17),
        [sym_subscript] = STATE(17),
        [sym_call] = STATE(17),
        [sym_list] = STATE(17),
        [sym_list_comprehension] = STATE(17),
        [sym_dictionary] = STATE(17),
        [sym_dictionary_comprehension] = STATE(17),
        [sym_set] = STATE(17),
        [sym_set_comprehension] = STATE(17),
        [anon_sym_not] = ACTIONS(121),
        [anon_sym_LBRACK] = ACTIONS(113),
        [anon_sym_LBRACE] = ACTIONS(115),
        [sym_number] = ACTIONS(117),
        [sym_identifier] = ACTIONS(119),
        [sym_comment] = ACTIONS(77),
    },
    [607] = {
        [sym__expression] = STATE(617),
        [sym_binary_operator] = STATE(17),
        [sym_unary_operator] = STATE(17),
        [sym_subscript] = STATE(17),
        [sym_call] = STATE(17),
        [sym_list] = STATE(17),
        [sym_list_comprehension] = STATE(17),
        [sym_dictionary] = STATE(17),
        [sym_dictionary_comprehension] = STATE(17),
        [sym_set] = STATE(17),
        [sym_set_comprehension] = STATE(17),
        [anon_sym_not] = ACTIONS(121),
        [anon_sym_LBRACK] = ACTIONS(113),
        [anon_sym_LBRACE] = ACTIONS(115),
        [sym_number] = ACTIONS(117),
        [sym_identifier] = ACTIONS(119),
        [sym_comment] = ACTIONS(77),
    },
    [608] = {
        [sym__expression] = STATE(293),
        [sym_binary_operator] = STATE(17),
        [sym_unary_operator] = STATE(17),
        [sym_subscript] = STATE(17),
        [sym_call] = STATE(17),
        [sym_list] = STATE(17),
        [sym_list_comprehension] = STATE(17),
        [sym_dictionary] = STATE(17),
        [sym_dictionary_comprehension] = STATE(17),
        [sym_set] = STATE(17),
        [sym_set_comprehension] = STATE(17),
        [anon_sym_not] = ACTIONS(121),
        [anon_sym_LBRACK] = ACTIONS(113),
        [anon_sym_LBRACE] = ACTIONS(115),
        [sym_number] = ACTIONS(117),
        [sym_identifier] = ACTIONS(119),
        [sym_comment] = ACTIONS(77),
    },
    [609] = {
        [sym__expression] = STATE(615),
        [sym_binary_operator] = STATE(17),
        [sym_unary_operator] = STATE(17),
        [sym_subscript] = STATE(17),
        [sym_call] = STATE(17),
        [sym_list] = STATE(17),
        [sym_list_comprehension] = STATE(17),
        [sym_dictionary] = STATE(17),
        [sym_dictionary_comprehension] = STATE(17),
        [sym_set] = STATE(17),
        [sym_set_comprehension] = STATE(17),
        [anon_sym_not] = ACTIONS(121),
        [anon_sym_LBRACK] = ACTIONS(113),
        [anon_sym_LBRACE] = ACTIONS(115),
        [sym_number] = ACTIONS(117),
        [sym_identifier] = ACTIONS(119),
        [sym_comment] = ACTIONS(77),
    },
    [610] = {
        [sym__expression] = STATE(616),
        [sym_binary_operator] = STATE(17),
        [sym_unary_operator] = STATE(17),
        [sym_subscript] = STATE(17),
        [sym_call] = STATE(17),
        [sym_list] = STATE(17),
        [sym_list_comprehension] = STATE(17),
        [sym_dictionary] = STATE(17),
        [sym_dictionary_comprehension] = STATE(17),
        [sym_set] = STATE(17),
        [sym_set_comprehension] = STATE(17),
        [anon_sym_not] = ACTIONS(121),
        [anon_sym_LBRACK] = ACTIONS(113),
        [anon_sym_LBRACE] = ACTIONS(115),
        [sym_number] = ACTIONS(117),
        [sym_identifier] = ACTIONS(119),
        [sym_comment] = ACTIONS(77),
    },
    [611] = {
        [sym__expression] = STATE(618),
        [sym_binary_operator] = STATE(17),
        [sym_unary_operator] = STATE(17),
        [sym_subscript] = STATE(17),
        [sym_call] = STATE(17),
        [sym_list] = STATE(17),
        [sym_list_comprehension] = STATE(17),
        [sym_dictionary] = STATE(17),
        [sym_dictionary_comprehension] = STATE(17),
        [sym_set] = STATE(17),
        [sym_set_comprehension] = STATE(17),
        [anon_sym_not] = ACTIONS(121),
        [anon_sym_LBRACK] = ACTIONS(113),
        [anon_sym_LBRACE] = ACTIONS(115),
        [sym_number] = ACTIONS(117),
        [sym_identifier] = ACTIONS(119),
        [sym_comment] = ACTIONS(77),
    },
    [612] = {
        [anon_sym_COMMA] = ACTIONS(1185),
        [sym_comment] = ACTIONS(77),
        [sym__newline] = ACTIONS(493),
    },
    [613] = {
        [sym__expression] = STATE(614),
        [sym_binary_operator] = STATE(17),
        [sym_unary_operator] = STATE(17),
        [sym_subscript] = STATE(17),
        [sym_call] = STATE(17),
        [sym_list] = STATE(17),
        [sym_list_comprehension] = STATE(17),
        [sym_dictionary] = STATE(17),
        [sym_dictionary_comprehension] = STATE(17),
        [sym_set] = STATE(17),
        [sym_set_comprehension] = STATE(17),
        [anon_sym_not] = ACTIONS(121),
        [anon_sym_LBRACK] = ACTIONS(113),
        [anon_sym_LBRACE] = ACTIONS(115),
        [sym_number] = ACTIONS(117),
        [sym_identifier] = ACTIONS(119),
        [sym_comment] = ACTIONS(77),
    },
    [614] = {
        [anon_sym_COMMA] = ACTIONS(495),
        [anon_sym_LPAREN] = ACTIONS(183),
        [anon_sym_STAR] = ACTIONS(1171),
        [anon_sym_PLUS] = ACTIONS(1173),
        [anon_sym_DASH] = ACTIONS(1173),
        [anon_sym_SLASH] = ACTIONS(1175),
        [anon_sym_STAR_STAR] = ACTIONS(1177),
        [anon_sym_PIPE] = ACTIONS(1179),
        [anon_sym_AMP] = ACTIONS(1181),
        [anon_sym_CARET] = ACTIONS(1183),
        [anon_sym_LT_LT] = ACTIONS(1173),
        [anon_sym_GT_GT] = ACTIONS(1173),
        [anon_sym_and] = ACTIONS(1181),
        [anon_sym_or] = ACTIONS(1179),
        [anon_sym_LBRACK] = ACTIONS(199),
        [sym_comment] = ACTIONS(77),
        [sym__newline] = ACTIONS(495),
    },
    [615] = {
        [anon_sym_COMMA] = ACTIONS(303),
        [anon_sym_LPAREN] = ACTIONS(183),
        [anon_sym_STAR] = ACTIONS(1171),
        [anon_sym_PLUS] = ACTIONS(1173),
        [anon_sym_DASH] = ACTIONS(1173),
        [anon_sym_SLASH] = ACTIONS(1175),
        [anon_sym_STAR_STAR] = ACTIONS(1177),
        [anon_sym_PIPE] = ACTIONS(303),
        [anon_sym_AMP] = ACTIONS(1181),
        [anon_sym_CARET] = ACTIONS(1183),
        [anon_sym_LT_LT] = ACTIONS(1173),
        [anon_sym_GT_GT] = ACTIONS(1173),
        [anon_sym_and] = ACTIONS(1181),
        [anon_sym_or] = ACTIONS(303),
        [anon_sym_LBRACK] = ACTIONS(303),
        [sym_comment] = ACTIONS(77),
        [sym__newline] = ACTIONS(303),
    },
    [616] = {
        [anon_sym_COMMA] = ACTIONS(303),
        [anon_sym_LPAREN] = ACTIONS(183),
        [anon_sym_STAR] = ACTIONS(1171),
        [anon_sym_PLUS] = ACTIONS(1173),
        [anon_sym_DASH] = ACTIONS(1173),
        [anon_sym_SLASH] = ACTIONS(1175),
        [anon_sym_STAR_STAR] = ACTIONS(1177),
        [anon_sym_PIPE] = ACTIONS(303),
        [anon_sym_AMP] = ACTIONS(303),
        [anon_sym_CARET] = ACTIONS(1183),
        [anon_sym_LT_LT] = ACTIONS(1173),
        [anon_sym_GT_GT] = ACTIONS(1173),
        [anon_sym_and] = ACTIONS(303),
        [anon_sym_or] = ACTIONS(303),
        [anon_sym_LBRACK] = ACTIONS(303),
        [sym_comment] = ACTIONS(77),
        [sym__newline] = ACTIONS(303),
    },
    [617] = {
        [anon_sym_COMMA] = ACTIONS(303),
        [anon_sym_LPAREN] = ACTIONS(183),
        [anon_sym_STAR] = ACTIONS(1171),
        [anon_sym_PLUS] = ACTIONS(303),
        [anon_sym_DASH] = ACTIONS(303),
        [anon_sym_SLASH] = ACTIONS(1175),
        [anon_sym_STAR_STAR] = ACTIONS(1177),
        [anon_sym_PIPE] = ACTIONS(303),
        [anon_sym_AMP] = ACTIONS(303),
        [anon_sym_CARET] = ACTIONS(303),
        [anon_sym_LT_LT] = ACTIONS(303),
        [anon_sym_GT_GT] = ACTIONS(303),
        [anon_sym_and] = ACTIONS(303),
        [anon_sym_or] = ACTIONS(303),
        [anon_sym_LBRACK] = ACTIONS(303),
        [sym_comment] = ACTIONS(77),
        [sym__newline] = ACTIONS(303),
    },
    [618] = {
        [anon_sym_COMMA] = ACTIONS(303),
        [anon_sym_LPAREN] = ACTIONS(183),
        [anon_sym_STAR] = ACTIONS(1171),
        [anon_sym_PLUS] = ACTIONS(1173),
        [anon_sym_DASH] = ACTIONS(1173),
        [anon_sym_SLASH] = ACTIONS(1175),
        [anon_sym_STAR_STAR] = ACTIONS(1177),
        [anon_sym_PIPE] = ACTIONS(303),
        [anon_sym_AMP] = ACTIONS(303),
        [anon_sym_CARET] = ACTIONS(303),
        [anon_sym_LT_LT] = ACTIONS(1173),
        [anon_sym_GT_GT] = ACTIONS(1173),
        [anon_sym_and] = ACTIONS(303),
        [anon_sym_or] = ACTIONS(303),
        [anon_sym_LBRACK] = ACTIONS(303),
        [sym_comment] = ACTIONS(77),
        [sym__newline] = ACTIONS(303),
    },
    [619] = {
        [anon_sym_COMMA] = ACTIONS(303),
        [anon_sym_LPAREN] = ACTIONS(183),
        [anon_sym_STAR] = ACTIONS(305),
        [anon_sym_PLUS] = ACTIONS(303),
        [anon_sym_DASH] = ACTIONS(303),
        [anon_sym_SLASH] = ACTIONS(303),
        [anon_sym_STAR_STAR] = ACTIONS(1177),
        [anon_sym_PIPE] = ACTIONS(303),
        [anon_sym_AMP] = ACTIONS(303),
        [anon_sym_CARET] = ACTIONS(303),
        [anon_sym_LT_LT] = ACTIONS(303),
        [anon_sym_GT_GT] = ACTIONS(303),
        [anon_sym_and] = ACTIONS(303),
        [anon_sym_or] = ACTIONS(303),
        [anon_sym_LBRACK] = ACTIONS(303),
        [sym_comment] = ACTIONS(77),
        [sym__newline] = ACTIONS(303),
    },
    [620] = {
        [anon_sym_COMMA] = ACTIONS(497),
        [anon_sym_LPAREN] = ACTIONS(183),
        [anon_sym_STAR] = ACTIONS(1171),
        [anon_sym_PLUS] = ACTIONS(1173),
        [anon_sym_DASH] = ACTIONS(1173),
        [anon_sym_SLASH] = ACTIONS(1175),
        [anon_sym_STAR_STAR] = ACTIONS(1177),
        [anon_sym_PIPE] = ACTIONS(1179),
        [anon_sym_AMP] = ACTIONS(1181),
        [anon_sym_CARET] = ACTIONS(1183),
        [anon_sym_LT_LT] = ACTIONS(1173),
        [anon_sym_GT_GT] = ACTIONS(1173),
        [anon_sym_and] = ACTIONS(1181),
        [anon_sym_or] = ACTIONS(1179),
        [anon_sym_LBRACK] = ACTIONS(199),
        [sym_comment] = ACTIONS(77),
        [sym__newline] = ACTIONS(497),
    },
    [621] = {
        [sym_comment] = ACTIONS(77),
        [sym__newline] = ACTIONS(1187),
    },
    [622] = {
        [aux_sym_print_statement_repeat1] = STATE(623),
        [anon_sym_COMMA] = ACTIONS(1169),
        [anon_sym_LPAREN] = ACTIONS(183),
        [anon_sym_STAR] = ACTIONS(1171),
        [anon_sym_PLUS] = ACTIONS(1173),
        [anon_sym_DASH] = ACTIONS(1173),
        [anon_sym_SLASH] = ACTIONS(1175),
        [anon_sym_STAR_STAR] = ACTIONS(1177),
        [anon_sym_PIPE] = ACTIONS(1179),
        [anon_sym_AMP] = ACTIONS(1181),
        [anon_sym_CARET] = ACTIONS(1183),
        [anon_sym_LT_LT] = ACTIONS(1173),
        [anon_sym_GT_GT] = ACTIONS(1173),
        [anon_sym_and] = ACTIONS(1181),
        [anon_sym_or] = ACTIONS(1179),
        [anon_sym_LBRACK] = ACTIONS(199),
        [sym_comment] = ACTIONS(77),
        [sym__newline] = ACTIONS(1189),
    },
    [623] = {
        [anon_sym_COMMA] = ACTIONS(1185),
        [sym_comment] = ACTIONS(77),
        [sym__newline] = ACTIONS(1191),
    },
    [624] = {
        [sym_with_item] = STATE(829),
        [sym_dictionary_splat_parameter] = STATE(760),
        [sym__expression] = STATE(830),
        [sym_binary_operator] = STATE(17),
        [sym_unary_operator] = STATE(17),
        [sym_subscript] = STATE(17),
        [sym_call] = STATE(17),
        [sym_keyword_argument] = STATE(831),
        [sym_dictionary_splat_argument] = STATE(832),
        [sym_list] = STATE(17),
        [sym_list_comprehension] = STATE(17),
        [sym_dictionary] = STATE(17),
        [sym_dictionary_comprehension] = STATE(17),
        [sym_pair] = STATE(833),
        [sym_set] = STATE(17),
        [sym_set_comprehension] = STATE(17),
        [anon_sym_RPAREN] = ACTIONS(1193),
        [anon_sym_STAR] = ACTIONS(1195),
        [anon_sym_STAR_STAR] = ACTIONS(1201),
        [anon_sym_not] = ACTIONS(1205),
        [anon_sym_LBRACK] = ACTIONS(1209),
        [anon_sym_DOT_DOT_DOT] = ACTIONS(1213),
        [anon_sym_RBRACK] = ACTIONS(1215),
        [anon_sym_LBRACE] = ACTIONS(1217),
        [anon_sym_RBRACE] = ACTIONS(1221),
        [sym_number] = ACTIONS(1223),
        [sym_identifier] = ACTIONS(1227),
        [sym_comment] = ACTIONS(77),
    },
    [625] = {
        [sym__expression] = STATE(819),
        [sym_binary_operator] = STATE(43),
        [sym_unary_operator] = STATE(43),
        [sym_subscript] = STATE(43),
        [sym_call] = STATE(43),
        [sym_list] = STATE(43),
        [sym_list_comprehension] = STATE(43),
        [sym_dictionary] = STATE(43),
        [sym_dictionary_comprehension] = STATE(43),
        [sym_set] = STATE(43),
        [sym_set_comprehension] = STATE(43),
        [anon_sym_not] = ACTIONS(125),
        [anon_sym_LBRACK] = ACTIONS(127),
        [anon_sym_LBRACE] = ACTIONS(129),
        [sym_number] = ACTIONS(131),
        [sym_identifier] = ACTIONS(133),
        [sym_comment] = ACTIONS(77),
    },
    [626] = {
        [sym__simple_statement] = STATE(690),
        [sym_print_statement] = STATE(5),
        [sym_expression_statement] = STATE(5),
        [sym_return_statement] = STATE(5),
        [sym_delete_statement] = STATE(5),
        [sym__suite] = STATE(670),
        [sym__expression] = STATE(741),
        [sym_binary_operator] = STATE(17),
        [sym_unary_operator] = STATE(17),
        [sym_subscript] = STATE(17),
        [sym_call] = STATE(17),
        [sym_list] = STATE(17),
        [sym_list_comprehension] = STATE(17),
        [sym_dictionary] = STATE(17),
        [sym_dictionary_comprehension] = STATE(17),
        [sym_set] = STATE(17),
        [sym_set_comprehension] = STATE(17),
        [anon_sym_print] = ACTIONS(87),
        [anon_sym_return] = ACTIONS(89),
        [anon_sym_del] = ACTIONS(91),
        [sym_pass_statement] = ACTIONS(93),
        [sym_break_statement] = ACTIONS(93),
        [sym_continue_statement] = ACTIONS(93),
        [anon_sym_not] = ACTIONS(1233),
        [anon_sym_LBRACK] = ACTIONS(113),
        [anon_sym_LBRACE] = ACTIONS(115),
        [sym_number] = ACTIONS(117),
        [sym_identifier] = ACTIONS(119),
        [sym_comment] = ACTIONS(77),
        [sym__indent] = ACTIONS(1235),
    },
    [627] = {
        [sym__expression] = STATE(816),
        [sym_binary_operator] = STATE(43),
        [sym_unary_operator] = STATE(43),
        [sym_subscript] = STATE(43),
        [sym_call] = STATE(43),
        [sym_list] = STATE(43),
        [sym_list_comprehension] = STATE(43),
        [sym_dictionary] = STATE(43),
        [sym_dictionary_comprehension] = STATE(43),
        [sym_set] = STATE(43),
        [sym_set_comprehension] = STATE(43),
        [anon_sym_not] = ACTIONS(125),
        [anon_sym_LBRACK] = ACTIONS(127),
        [anon_sym_LBRACE] = ACTIONS(129),
        [sym_number] = ACTIONS(131),
        [sym_identifier] = ACTIONS(133),
        [sym_comment] = ACTIONS(77),
    },
    [628] = {
        [anon_sym_COLON] = ACTIONS(1237),
        [sym_comment] = ACTIONS(77),
    },
    [629] = {
        [sym_expression_list] = STATE(815),
        [sym__expression] = STATE(164),
        [sym_binary_operator] = STATE(43),
        [sym_unary_operator] = STATE(43),
        [sym_subscript] = STATE(43),
        [sym_call] = STATE(43),
        [sym_list] = STATE(43),
        [sym_list_comprehension] = STATE(43),
        [sym_dictionary] = STATE(43),
        [sym_dictionary_comprehension] = STATE(43),
        [sym_set] = STATE(43),
        [sym_set_comprehension] = STATE(43),
        [anon_sym_not] = ACTIONS(135),
        [anon_sym_LBRACK] = ACTIONS(127),
        [anon_sym_LBRACE] = ACTIONS(129),
        [sym_number] = ACTIONS(131),
        [sym_identifier] = ACTIONS(133),
        [sym_comment] = ACTIONS(77),
    },
    [630] = {
        [sym_expression_list] = STATE(715),
        [sym__expression] = STATE(810),
        [sym_binary_operator] = STATE(43),
        [sym_unary_operator] = STATE(43),
        [sym_subscript] = STATE(43),
        [sym_call] = STATE(43),
        [sym_list] = STATE(43),
        [sym_list_comprehension] = STATE(43),
        [sym_dictionary] = STATE(43),
        [sym_dictionary_comprehension] = STATE(43),
        [sym_set] = STATE(43),
        [sym_set_comprehension] = STATE(43),
        [anon_sym_not] = ACTIONS(1239),
        [anon_sym_LBRACK] = ACTIONS(127),
        [anon_sym_LBRACE] = ACTIONS(129),
        [sym_number] = ACTIONS(131),
        [sym_identifier] = ACTIONS(133),
        [sym_comment] = ACTIONS(77),
    },
    [631] = {
        [sym__expression] = STATE(805),
        [sym_binary_operator] = STATE(43),
        [sym_unary_operator] = STATE(43),
        [sym_subscript] = STATE(43),
        [sym_call] = STATE(43),
        [sym_list] = STATE(43),
        [sym_list_comprehension] = STATE(43),
        [sym_dictionary] = STATE(43),
        [sym_dictionary_comprehension] = STATE(43),
        [sym_set] = STATE(43),
        [sym_set_comprehension] = STATE(43),
        [anon_sym_not] = ACTIONS(125),
        [anon_sym_LBRACK] = ACTIONS(127),
        [anon_sym_LBRACE] = ACTIONS(129),
        [sym_number] = ACTIONS(131),
        [sym_identifier] = ACTIONS(133),
        [sym_comment] = ACTIONS(77),
    },
    [632] = {
        [anon_sym_COLON] = ACTIONS(1241),
        [sym_comment] = ACTIONS(77),
    },
    [633] = {
        [sym__expression] = STATE(798),
        [sym_binary_operator] = STATE(43),
        [sym_unary_operator] = STATE(43),
        [sym_subscript] = STATE(43),
        [sym_call] = STATE(43),
        [sym_list] = STATE(43),
        [sym_list_comprehension] = STATE(43),
        [sym_dictionary] = STATE(43),
        [sym_dictionary_comprehension] = STATE(43),
        [sym_set] = STATE(43),
        [sym_set_comprehension] = STATE(43),
        [anon_sym_not] = ACTIONS(139),
        [anon_sym_LBRACK] = ACTIONS(127),
        [anon_sym_LBRACE] = ACTIONS(129),
        [sym_number] = ACTIONS(131),
        [sym_identifier] = ACTIONS(133),
        [sym_comment] = ACTIONS(77),
    },
    [634] = {
        [sym__expression] = STATE(797),
        [sym_binary_operator] = STATE(43),
        [sym_unary_operator] = STATE(43),
        [sym_subscript] = STATE(43),
        [sym_call] = STATE(43),
        [sym_list] = STATE(43),
        [sym_list_comprehension] = STATE(43),
        [sym_dictionary] = STATE(43),
        [sym_dictionary_comprehension] = STATE(43),
        [sym_set] = STATE(43),
        [sym_set_comprehension] = STATE(43),
        [anon_sym_not] = ACTIONS(935),
        [anon_sym_LBRACK] = ACTIONS(127),
        [anon_sym_LBRACE] = ACTIONS(129),
        [sym_number] = ACTIONS(131),
        [sym_identifier] = ACTIONS(133),
        [sym_comment] = ACTIONS(77),
    },
    [635] = {
        [anon_sym_COLON] = ACTIONS(1243),
        [sym_comment] = ACTIONS(77),
    },
    [636] = {
        [sym_with_item] = STATE(794),
        [sym__expression] = STATE(455),
        [sym_binary_operator] = STATE(43),
        [sym_unary_operator] = STATE(43),
        [sym_subscript] = STATE(43),
        [sym_call] = STATE(43),
        [sym_list] = STATE(43),
        [sym_list_comprehension] = STATE(43),
        [sym_dictionary] = STATE(43),
        [sym_dictionary_comprehension] = STATE(43),
        [sym_set] = STATE(43),
        [sym_set_comprehension] = STATE(43),
        [anon_sym_not] = ACTIONS(139),
        [anon_sym_LBRACK] = ACTIONS(127),
        [anon_sym_LBRACE] = ACTIONS(129),
        [sym_number] = ACTIONS(131),
        [sym_identifier] = ACTIONS(133),
        [sym_comment] = ACTIONS(77),
    },
    [637] = {
        [sym_identifier] = ACTIONS(1245),
        [sym_comment] = ACTIONS(77),
    },
    [638] = {
        [sym_default_parameter] = STATE(429),
        [sym_list_splat_parameter] = STATE(430),
        [sym_dictionary_splat_parameter] = STATE(431),
        [sym_expression_list] = STATE(772),
        [sym__expression] = STATE(788),
        [sym_binary_operator] = STATE(43),
        [sym_unary_operator] = STATE(43),
        [sym_subscript] = STATE(43),
        [sym_call] = STATE(43),
        [sym_keyword_argument] = STATE(296),
        [sym_list_splat_argument] = STATE(297),
        [sym_dictionary_splat_argument] = STATE(298),
        [sym_list] = STATE(43),
        [sym_list_comprehension] = STATE(43),
        [sym_dictionary] = STATE(43),
        [sym_dictionary_comprehension] = STATE(43),
        [sym_set] = STATE(43),
        [sym_set_comprehension] = STATE(43),
        [aux_sym_parameters_repeat1] = STATE(432),
        [aux_sym_call_repeat1] = STATE(299),
        [anon_sym_RPAREN] = ACTIONS(847),
        [anon_sym_STAR] = ACTIONS(1247),
        [anon_sym_STAR_STAR] = ACTIONS(229),
        [anon_sym_not] = ACTIONS(231),
        [anon_sym_LBRACK] = ACTIONS(127),
        [anon_sym_LBRACE] = ACTIONS(129),
        [sym_number] = ACTIONS(131),
        [sym_identifier] = ACTIONS(1249),
        [sym_comment] = ACTIONS(77),
    },
    [639] = {
        [anon_sym_COMMA] = ACTIONS(1251),
        [anon_sym_COLON] = ACTIONS(1257),
        [anon_sym_for] = ACTIONS(1251),
        [anon_sym_in] = ACTIONS(1251),
        [anon_sym_as] = ACTIONS(1251),
        [anon_sym_LPAREN] = ACTIONS(1251),
        [anon_sym_RPAREN] = ACTIONS(1251),
        [anon_sym_STAR] = ACTIONS(1269),
        [anon_sym_PLUS] = ACTIONS(1251),
        [anon_sym_DASH] = ACTIONS(1251),
        [anon_sym_SLASH] = ACTIONS(1251),
        [anon_sym_STAR_STAR] = ACTIONS(1251),
        [anon_sym_PIPE] = ACTIONS(1251),
        [anon_sym_AMP] = ACTIONS(1251),
        [anon_sym_CARET] = ACTIONS(1251),
        [anon_sym_LT_LT] = ACTIONS(1251),
        [anon_sym_GT_GT] = ACTIONS(1251),
        [anon_sym_and] = ACTIONS(1251),
        [anon_sym_or] = ACTIONS(1251),
        [anon_sym_LBRACK] = ACTIONS(1251),
        [anon_sym_RBRACK] = ACTIONS(1251),
        [anon_sym_RBRACE] = ACTIONS(1251),
        [sym_comment] = ACTIONS(77),
        [sym__newline] = ACTIONS(1275),
    },
    [640] = {
        [sym__expression] = STATE(785),
        [sym_binary_operator] = STATE(43),
        [sym_unary_operator] = STATE(43),
        [sym_subscript] = STATE(43),
        [sym_call] = STATE(43),
        [sym_list] = STATE(43),
        [sym_list_comprehension] = STATE(43),
        [sym_dictionary] = STATE(43),
        [sym_dictionary_comprehension] = STATE(43),
        [sym_set] = STATE(43),
        [sym_set_comprehension] = STATE(43),
        [anon_sym_not] = ACTIONS(231),
        [anon_sym_LBRACK] = ACTIONS(127),
        [anon_sym_LBRACE] = ACTIONS(129),
        [sym_number] = ACTIONS(131),
        [sym_identifier] = ACTIONS(133),
        [sym_comment] = ACTIONS(77),
    },
    [641] = {
        [sym__expression] = STATE(784),
        [sym_binary_operator] = STATE(17),
        [sym_unary_operator] = STATE(17),
        [sym_subscript] = STATE(17),
        [sym_call] = STATE(17),
        [sym_list] = STATE(17),
        [sym_list_comprehension] = STATE(17),
        [sym_dictionary] = STATE(17),
        [sym_dictionary_comprehension] = STATE(17),
        [sym_set] = STATE(17),
        [sym_set_comprehension] = STATE(17),
        [anon_sym_STAR] = ACTIONS(863),
        [anon_sym_not] = ACTIONS(1283),
        [anon_sym_LBRACK] = ACTIONS(113),
        [anon_sym_LBRACE] = ACTIONS(115),
        [sym_number] = ACTIONS(117),
        [sym_identifier] = ACTIONS(1285),
        [sym_comment] = ACTIONS(77),
    },
    [642] = {
        [sym_identifier] = ACTIONS(1287),
        [sym_comment] = ACTIONS(77),
    },
    [643] = {
        [sym_identifier] = ACTIONS(1289),
        [sym_comment] = ACTIONS(77),
    },
    [644] = {
        [sym__expression] = STATE(731),
        [sym_binary_operator] = STATE(17),
        [sym_unary_operator] = STATE(17),
        [sym_subscript] = STATE(17),
        [sym_call] = STATE(17),
        [sym_list] = STATE(17),
        [sym_list_comprehension] = STATE(17),
        [sym_dictionary] = STATE(17),
        [sym_dictionary_comprehension] = STATE(17),
        [sym_set] = STATE(17),
        [sym_set_comprehension] = STATE(17),
        [anon_sym_not] = ACTIONS(1283),
        [anon_sym_LBRACK] = ACTIONS(113),
        [anon_sym_LBRACE] = ACTIONS(115),
        [sym_number] = ACTIONS(117),
        [sym_identifier] = ACTIONS(119),
        [sym_comment] = ACTIONS(77),
    },
    [645] = {
        [sym__expression] = STATE(779),
        [sym_binary_operator] = STATE(17),
        [sym_unary_operator] = STATE(17),
        [sym_subscript] = STATE(17),
        [sym_call] = STATE(17),
        [sym_list] = STATE(17),
        [sym_list_comprehension] = STATE(17),
        [sym_dictionary] = STATE(17),
        [sym_dictionary_comprehension] = STATE(17),
        [sym_set] = STATE(17),
        [sym_set_comprehension] = STATE(17),
        [anon_sym_not] = ACTIONS(1283),
        [anon_sym_LBRACK] = ACTIONS(113),
        [anon_sym_LBRACE] = ACTIONS(115),
        [sym_number] = ACTIONS(117),
        [sym_identifier] = ACTIONS(119),
        [sym_comment] = ACTIONS(77),
    },
    [646] = {
        [sym__expression] = STATE(778),
        [sym_binary_operator] = STATE(17),
        [sym_unary_operator] = STATE(17),
        [sym_subscript] = STATE(17),
        [sym_call] = STATE(17),
        [sym_list] = STATE(17),
        [sym_list_comprehension] = STATE(17),
        [sym_dictionary] = STATE(17),
        [sym_dictionary_comprehension] = STATE(17),
        [sym_set] = STATE(17),
        [sym_set_comprehension] = STATE(17),
        [anon_sym_not] = ACTIONS(1283),
        [anon_sym_LBRACK] = ACTIONS(113),
        [anon_sym_LBRACE] = ACTIONS(115),
        [sym_number] = ACTIONS(117),
        [sym_identifier] = ACTIONS(119),
        [sym_comment] = ACTIONS(77),
    },
    [647] = {
        [sym__expression] = STATE(774),
        [sym_binary_operator] = STATE(43),
        [sym_unary_operator] = STATE(43),
        [sym_subscript] = STATE(43),
        [sym_call] = STATE(43),
        [sym_list] = STATE(43),
        [sym_list_comprehension] = STATE(43),
        [sym_dictionary] = STATE(43),
        [sym_dictionary_comprehension] = STATE(43),
        [sym_set] = STATE(43),
        [sym_set_comprehension] = STATE(43),
        [anon_sym_not] = ACTIONS(147),
        [anon_sym_LBRACK] = ACTIONS(127),
        [anon_sym_DOT_DOT_DOT] = ACTIONS(237),
        [anon_sym_RBRACK] = ACTIONS(149),
        [anon_sym_LBRACE] = ACTIONS(129),
        [sym_number] = ACTIONS(131),
        [sym_identifier] = ACTIONS(133),
        [sym_comment] = ACTIONS(77),
    },
    [648] = {
        [aux_sym_subscript_repeat1] = STATE(55),
        [anon_sym_COMMA] = ACTIONS(1291),
        [anon_sym_RBRACK] = ACTIONS(1295),
        [sym_comment] = ACTIONS(77),
    },
    [649] = {
        [anon_sym_COMMA] = ACTIONS(1299),
        [anon_sym_COLON] = ACTIONS(1299),
        [anon_sym_for] = ACTIONS(1299),
        [anon_sym_in] = ACTIONS(1299),
        [anon_sym_as] = ACTIONS(1299),
        [anon_sym_LPAREN] = ACTIONS(1299),
        [anon_sym_RPAREN] = ACTIONS(1299),
        [anon_sym_STAR] = ACTIONS(1308),
        [anon_sym_PLUS] = ACTIONS(1299),
        [anon_sym_DASH] = ACTIONS(1299),
        [anon_sym_SLASH] = ACTIONS(1299),
        [anon_sym_STAR_STAR] = ACTIONS(1299),
        [anon_sym_PIPE] = ACTIONS(1299),
        [anon_sym_AMP] = ACTIONS(1299),
        [anon_sym_CARET] = ACTIONS(1299),
        [anon_sym_LT_LT] = ACTIONS(1299),
        [anon_sym_GT_GT] = ACTIONS(1299),
        [anon_sym_and] = ACTIONS(1299),
        [anon_sym_or] = ACTIONS(1299),
        [anon_sym_LBRACK] = ACTIONS(1299),
        [anon_sym_RBRACK] = ACTIONS(1299),
        [anon_sym_RBRACE] = ACTIONS(1299),
        [sym_comment] = ACTIONS(77),
        [sym__newline] = ACTIONS(1299),
    },
    [650] = {
        [anon_sym_COMMA] = ACTIONS(1317),
        [anon_sym_COLON] = ACTIONS(1317),
        [anon_sym_for] = ACTIONS(1317),
        [anon_sym_in] = ACTIONS(1317),
        [anon_sym_as] = ACTIONS(1317),
        [anon_sym_LPAREN] = ACTIONS(1317),
        [anon_sym_RPAREN] = ACTIONS(1317),
        [anon_sym_STAR] = ACTIONS(1327),
        [anon_sym_PLUS] = ACTIONS(1317),
        [anon_sym_DASH] = ACTIONS(1317),
        [anon_sym_SLASH] = ACTIONS(1317),
        [anon_sym_STAR_STAR] = ACTIONS(1317),
        [anon_sym_PIPE] = ACTIONS(1317),
        [anon_sym_AMP] = ACTIONS(1317),
        [anon_sym_CARET] = ACTIONS(1317),
        [anon_sym_LT_LT] = ACTIONS(1317),
        [anon_sym_GT_GT] = ACTIONS(1317),
        [anon_sym_and] = ACTIONS(1317),
        [anon_sym_or] = ACTIONS(1317),
        [anon_sym_LBRACK] = ACTIONS(1317),
        [anon_sym_RBRACK] = ACTIONS(1317),
        [anon_sym_RBRACE] = ACTIONS(1317),
        [sym_comment] = ACTIONS(77),
        [sym__newline] = ACTIONS(1317),
    },
    [651] = {
        [sym_parameters] = STATE(665),
        [aux_sym_dotted_name_repeat1] = STATE(375),
        [anon_sym_COMMA] = ACTIONS(1337),
        [anon_sym_COLON] = ACTIONS(1341),
        [anon_sym_for] = ACTIONS(155),
        [anon_sym_in] = ACTIONS(155),
        [anon_sym_as] = ACTIONS(155),
        [anon_sym_LPAREN] = ACTIONS(1344),
        [anon_sym_RPAREN] = ACTIONS(1350),
        [anon_sym_EQ] = ACTIONS(1355),
        [anon_sym_STAR] = ACTIONS(157),
        [anon_sym_DOT] = ACTIONS(1357),
        [anon_sym_PLUS] = ACTIONS(155),
        [anon_sym_DASH] = ACTIONS(155),
        [anon_sym_SLASH] = ACTIONS(155),
        [anon_sym_STAR_STAR] = ACTIONS(155),
        [anon_sym_PIPE] = ACTIONS(155),
        [anon_sym_AMP] = ACTIONS(155),
        [anon_sym_CARET] = ACTIONS(155),
        [anon_sym_LT_LT] = ACTIONS(155),
        [anon_sym_GT_GT] = ACTIONS(155),
        [anon_sym_and] = ACTIONS(155),
        [anon_sym_or] = ACTIONS(155),
        [anon_sym_LBRACK] = ACTIONS(155),
        [anon_sym_RBRACK] = ACTIONS(155),
        [anon_sym_RBRACE] = ACTIONS(155),
        [sym_comment] = ACTIONS(77),
        [sym__newline] = ACTIONS(1361),
    },
    [652] = {
        [ts_builtin_sym_end] = ACTIONS(1366),
        [anon_sym_SEMI] = ACTIONS(1370),
        [anon_sym_print] = ACTIONS(1373),
        [anon_sym_return] = ACTIONS(1373),
        [anon_sym_del] = ACTIONS(1373),
        [sym_pass_statement] = ACTIONS(1373),
        [sym_break_statement] = ACTIONS(1373),
        [sym_continue_statement] = ACTIONS(1373),
        [anon_sym_if] = ACTIONS(1373),
        [anon_sym_elif] = ACTIONS(801),
        [anon_sym_else] = ACTIONS(801),
        [anon_sym_for] = ACTIONS(1373),
        [anon_sym_while] = ACTIONS(1373),
        [anon_sym_try] = ACTIONS(1373),
        [anon_sym_except] = ACTIONS(801),
        [anon_sym_finally] = ACTIONS(801),
        [anon_sym_with] = ACTIONS(1373),
        [anon_sym_def] = ACTIONS(1376),
        [anon_sym_class] = ACTIONS(1376),
        [anon_sym_AT] = ACTIONS(1381),
        [anon_sym_not] = ACTIONS(1373),
        [anon_sym_LBRACK] = ACTIONS(1370),
        [anon_sym_LBRACE] = ACTIONS(1370),
        [sym_number] = ACTIONS(1373),
        [sym_identifier] = ACTIONS(1386),
        [sym_comment] = ACTIONS(77),
        [sym__newline] = ACTIONS(1370),
        [sym__dedent] = ACTIONS(1370),
    },
    [653] = {
        [sym__statement] = STATE(398),
        [sym__simple_statement] = STATE(399),
        [sym_print_statement] = STATE(5),
        [sym_expression_statement] = STATE(5),
        [sym_return_statement] = STATE(5),
        [sym_delete_statement] = STATE(5),
        [sym__compound_statement] = STATE(400),
        [sym_if_statement] = STATE(401),
        [sym_for_statement] = STATE(401),
        [sym_while_statement] = STATE(401),
        [sym_try_statement] = STATE(401),
        [sym_with_statement] = STATE(401),
        [sym_function_definition] = STATE(401),
        [sym_class_definition] = STATE(401),
        [sym_decorated_definition] = STATE(401),
        [sym_decorator] = STATE(23),
        [sym__expression] = STATE(24),
        [sym_binary_operator] = STATE(17),
        [sym_unary_operator] = STATE(17),
        [sym_subscript] = STATE(17),
        [sym_call] = STATE(17),
        [sym_list] = STATE(17),
        [sym_list_comprehension] = STATE(17),
        [sym_dictionary] = STATE(17),
        [sym_dictionary_comprehension] = STATE(17),
        [sym_set] = STATE(17),
        [sym_set_comprehension] = STATE(17),
        [aux_sym_module_repeat1] = STATE(693),
        [aux_sym_decorated_definition_repeat1] = STATE(403),
        [anon_sym_print] = ACTIONS(87),
        [anon_sym_return] = ACTIONS(89),
        [anon_sym_del] = ACTIONS(91),
        [sym_pass_statement] = ACTIONS(93),
        [sym_break_statement] = ACTIONS(93),
        [sym_continue_statement] = ACTIONS(93),
        [anon_sym_if] = ACTIONS(777),
        [anon_sym_for] = ACTIONS(779),
        [anon_sym_while] = ACTIONS(781),
        [anon_sym_try] = ACTIONS(783),
        [anon_sym_with] = ACTIONS(785),
        [anon_sym_def] = ACTIONS(787),
        [anon_sym_class] = ACTIONS(789),
        [anon_sym_AT] = ACTIONS(109),
        [anon_sym_not] = ACTIONS(111),
        [anon_sym_LBRACK] = ACTIONS(113),
        [anon_sym_LBRACE] = ACTIONS(115),
        [sym_number] = ACTIONS(117),
        [sym_identifier] = ACTIONS(119),
        [sym_comment] = ACTIONS(77),
        [sym__dedent] = ACTIONS(1389),
    },
    [654] = {
        [ts_builtin_sym_end] = ACTIONS(1391),
        [anon_sym_SEMI] = ACTIONS(1391),
        [anon_sym_print] = ACTIONS(1394),
        [anon_sym_return] = ACTIONS(1394),
        [anon_sym_del] = ACTIONS(1394),
        [sym_pass_statement] = ACTIONS(1394),
        [sym_break_statement] = ACTIONS(1394),
        [sym_continue_statement] = ACTIONS(1394),
        [anon_sym_if] = ACTIONS(1394),
        [anon_sym_elif] = ACTIONS(1394),
        [anon_sym_else] = ACTIONS(1394),
        [anon_sym_for] = ACTIONS(1394),
        [anon_sym_while] = ACTIONS(1394),
        [anon_sym_try] = ACTIONS(1394),
        [anon_sym_except] = ACTIONS(1394),
        [anon_sym_finally] = ACTIONS(1394),
        [anon_sym_with] = ACTIONS(1394),
        [anon_sym_def] = ACTIONS(1394),
        [anon_sym_class] = ACTIONS(1394),
        [anon_sym_AT] = ACTIONS(1391),
        [anon_sym_not] = ACTIONS(1394),
        [anon_sym_LBRACK] = ACTIONS(1391),
        [anon_sym_LBRACE] = ACTIONS(1391),
        [sym_number] = ACTIONS(1394),
        [sym_identifier] = ACTIONS(1397),
        [sym_comment] = ACTIONS(77),
        [sym__newline] = ACTIONS(1391),
        [sym__dedent] = ACTIONS(1391),
    },
    [655] = {
        [ts_builtin_sym_end] = ACTIONS(1400),
        [anon_sym_SEMI] = ACTIONS(1400),
        [anon_sym_print] = ACTIONS(1403),
        [anon_sym_return] = ACTIONS(1403),
        [anon_sym_del] = ACTIONS(1403),
        [sym_pass_statement] = ACTIONS(1403),
        [sym_break_statement] = ACTIONS(1403),
        [sym_continue_statement] = ACTIONS(1403),
        [anon_sym_if] = ACTIONS(1403),
        [anon_sym_for] = ACTIONS(1403),
        [anon_sym_while] = ACTIONS(1403),
        [anon_sym_try] = ACTIONS(1403),
        [anon_sym_with] = ACTIONS(1403),
        [anon_sym_def] = ACTIONS(1403),
        [anon_sym_class] = ACTIONS(1403),
        [anon_sym_AT] = ACTIONS(1400),
        [anon_sym_not] = ACTIONS(1403),
        [anon_sym_LBRACK] = ACTIONS(1400),
        [anon_sym_LBRACE] = ACTIONS(1400),
        [sym_number] = ACTIONS(1403),
        [sym_identifier] = ACTIONS(1406),
        [sym_comment] = ACTIONS(77),
        [sym__newline] = ACTIONS(1400),
        [sym__dedent] = ACTIONS(1400),
    },
    [656] = {
        [sym_comment] = ACTIONS(77),
        [sym__newline] = ACTIONS(1409),
    },
    [657] = {
        [ts_builtin_sym_end] = ACTIONS(169),
        [anon_sym_SEMI] = ACTIONS(169),
        [anon_sym_print] = ACTIONS(171),
        [anon_sym_return] = ACTIONS(171),
        [anon_sym_del] = ACTIONS(171),
        [sym_pass_statement] = ACTIONS(171),
        [sym_break_statement] = ACTIONS(171),
        [sym_continue_statement] = ACTIONS(171),
        [anon_sym_if] = ACTIONS(171),
        [anon_sym_for] = ACTIONS(171),
        [anon_sym_while] = ACTIONS(171),
        [anon_sym_try] = ACTIONS(171),
        [anon_sym_with] = ACTIONS(171),
        [anon_sym_def] = ACTIONS(171),
        [anon_sym_class] = ACTIONS(171),
        [anon_sym_AT] = ACTIONS(169),
        [anon_sym_not] = ACTIONS(171),
        [anon_sym_LBRACK] = ACTIONS(169),
        [anon_sym_LBRACE] = ACTIONS(169),
        [sym_number] = ACTIONS(171),
        [sym_identifier] = ACTIONS(173),
        [sym_comment] = ACTIONS(77),
        [sym__newline] = ACTIONS(169),
        [sym__dedent] = ACTIONS(169),
    },
    [658] = {
        [ts_builtin_sym_end] = ACTIONS(175),
        [anon_sym_SEMI] = ACTIONS(175),
        [anon_sym_print] = ACTIONS(177),
        [anon_sym_return] = ACTIONS(177),
        [anon_sym_del] = ACTIONS(177),
        [sym_pass_statement] = ACTIONS(177),
        [sym_break_statement] = ACTIONS(177),
        [sym_continue_statement] = ACTIONS(177),
        [anon_sym_if] = ACTIONS(177),
        [anon_sym_for] = ACTIONS(177),
        [anon_sym_while] = ACTIONS(177),
        [anon_sym_try] = ACTIONS(177),
        [anon_sym_with] = ACTIONS(177),
        [anon_sym_def] = ACTIONS(177),
        [anon_sym_class] = ACTIONS(177),
        [anon_sym_AT] = ACTIONS(175),
        [anon_sym_not] = ACTIONS(177),
        [anon_sym_LBRACK] = ACTIONS(175),
        [anon_sym_LBRACE] = ACTIONS(175),
        [sym_number] = ACTIONS(177),
        [sym_identifier] = ACTIONS(179),
        [sym_comment] = ACTIONS(77),
        [sym__newline] = ACTIONS(175),
        [sym__dedent] = ACTIONS(175),
    },
    [659] = {
        [ts_builtin_sym_end] = ACTIONS(1411),
        [anon_sym_SEMI] = ACTIONS(1411),
        [anon_sym_print] = ACTIONS(1414),
        [anon_sym_return] = ACTIONS(1414),
        [anon_sym_del] = ACTIONS(1414),
        [sym_pass_statement] = ACTIONS(1414),
        [sym_break_statement] = ACTIONS(1414),
        [sym_continue_statement] = ACTIONS(1414),
        [anon_sym_if] = ACTIONS(1414),
        [anon_sym_elif] = ACTIONS(1414),
        [anon_sym_else] = ACTIONS(1414),
        [anon_sym_for] = ACTIONS(1414),
        [anon_sym_while] = ACTIONS(1414),
        [anon_sym_try] = ACTIONS(1414),
        [anon_sym_with] = ACTIONS(1414),
        [anon_sym_def] = ACTIONS(1414),
        [anon_sym_class] = ACTIONS(1414),
        [anon_sym_AT] = ACTIONS(1411),
        [anon_sym_not] = ACTIONS(1414),
        [anon_sym_LBRACK] = ACTIONS(1411),
        [anon_sym_LBRACE] = ACTIONS(1411),
        [sym_number] = ACTIONS(1414),
        [sym_identifier] = ACTIONS(1417),
        [sym_comment] = ACTIONS(77),
        [sym__newline] = ACTIONS(1411),
        [sym__dedent] = ACTIONS(1411),
    },
    [660] = {
        [sym_finally_clause] = STATE(698),
        [ts_builtin_sym_end] = ACTIONS(1420),
        [anon_sym_SEMI] = ACTIONS(1420),
        [anon_sym_print] = ACTIONS(1426),
        [anon_sym_return] = ACTIONS(1426),
        [anon_sym_del] = ACTIONS(1426),
        [sym_pass_statement] = ACTIONS(1426),
        [sym_break_statement] = ACTIONS(1426),
        [sym_continue_statement] = ACTIONS(1426),
        [anon_sym_if] = ACTIONS(1426),
        [anon_sym_for] = ACTIONS(1426),
        [anon_sym_while] = ACTIONS(1426),
        [anon_sym_try] = ACTIONS(1426),
        [anon_sym_finally] = ACTIONS(1432),
        [anon_sym_with] = ACTIONS(1426),
        [anon_sym_def] = ACTIONS(1426),
        [anon_sym_class] = ACTIONS(1426),
        [anon_sym_AT] = ACTIONS(1420),
        [anon_sym_not] = ACTIONS(1426),
        [anon_sym_LBRACK] = ACTIONS(1420),
        [anon_sym_LBRACE] = ACTIONS(1420),
        [sym_number] = ACTIONS(1426),
        [sym_identifier] = ACTIONS(1434),
        [sym_comment] = ACTIONS(77),
        [sym__newline] = ACTIONS(1420),
        [sym__dedent] = ACTIONS(1420),
    },
    [661] = {
        [ts_builtin_sym_end] = ACTIONS(1440),
        [anon_sym_SEMI] = ACTIONS(1440),
        [anon_sym_print] = ACTIONS(1443),
        [anon_sym_return] = ACTIONS(1443),
        [anon_sym_del] = ACTIONS(1443),
        [sym_pass_statement] = ACTIONS(1443),
        [sym_break_statement] = ACTIONS(1443),
        [sym_continue_statement] = ACTIONS(1443),
        [anon_sym_if] = ACTIONS(1443),
        [anon_sym_else] = ACTIONS(1443),
        [anon_sym_for] = ACTIONS(1443),
        [anon_sym_while] = ACTIONS(1443),
        [anon_sym_try] = ACTIONS(1443),
        [anon_sym_except] = ACTIONS(1443),
        [anon_sym_finally] = ACTIONS(1443),
        [anon_sym_with] = ACTIONS(1443),
        [anon_sym_def] = ACTIONS(1443),
        [anon_sym_class] = ACTIONS(1443),
        [anon_sym_AT] = ACTIONS(1440),
        [anon_sym_not] = ACTIONS(1443),
        [anon_sym_LBRACK] = ACTIONS(1440),
        [anon_sym_LBRACE] = ACTIONS(1440),
        [sym_number] = ACTIONS(1443),
        [sym_identifier] = ACTIONS(1446),
        [sym_comment] = ACTIONS(77),
        [sym__newline] = ACTIONS(1440),
        [sym__dedent] = ACTIONS(1440),
    },
    [662] = {
        [ts_builtin_sym_end] = ACTIONS(1449),
        [anon_sym_SEMI] = ACTIONS(1449),
        [anon_sym_print] = ACTIONS(1453),
        [anon_sym_return] = ACTIONS(1453),
        [anon_sym_del] = ACTIONS(1453),
        [sym_pass_statement] = ACTIONS(1453),
        [sym_break_statement] = ACTIONS(1453),
        [sym_continue_statement] = ACTIONS(1453),
        [anon_sym_if] = ACTIONS(1453),
        [anon_sym_for] = ACTIONS(1453),
        [anon_sym_while] = ACTIONS(1453),
        [anon_sym_try] = ACTIONS(1453),
        [anon_sym_with] = ACTIONS(1453),
        [anon_sym_def] = ACTIONS(1453),
        [anon_sym_class] = ACTIONS(1453),
        [anon_sym_AT] = ACTIONS(1449),
        [anon_sym_not] = ACTIONS(1453),
        [anon_sym_LBRACK] = ACTIONS(1449),
        [anon_sym_LBRACE] = ACTIONS(1449),
        [sym_number] = ACTIONS(1453),
        [sym_identifier] = ACTIONS(1457),
        [sym_comment] = ACTIONS(77),
        [sym__newline] = ACTIONS(1449),
        [sym__dedent] = ACTIONS(1449),
    },
    [663] = {
        [aux_sym_with_statement_repeat1] = STATE(681),
        [anon_sym_COMMA] = ACTIONS(1461),
        [anon_sym_COLON] = ACTIONS(1465),
        [sym_comment] = ACTIONS(77),
    },
    [664] = {
        [ts_builtin_sym_end] = ACTIONS(1469),
        [anon_sym_SEMI] = ACTIONS(1469),
        [anon_sym_print] = ACTIONS(1472),
        [anon_sym_return] = ACTIONS(1472),
        [anon_sym_del] = ACTIONS(1472),
        [sym_pass_statement] = ACTIONS(1472),
        [sym_break_statement] = ACTIONS(1472),
        [sym_continue_statement] = ACTIONS(1472),
        [anon_sym_if] = ACTIONS(1472),
        [anon_sym_for] = ACTIONS(1472),
        [anon_sym_while] = ACTIONS(1472),
        [anon_sym_try] = ACTIONS(1472),
        [anon_sym_with] = ACTIONS(1472),
        [anon_sym_def] = ACTIONS(1472),
        [anon_sym_class] = ACTIONS(1472),
        [anon_sym_AT] = ACTIONS(1469),
        [anon_sym_not] = ACTIONS(1472),
        [anon_sym_LBRACK] = ACTIONS(1469),
        [anon_sym_LBRACE] = ACTIONS(1469),
        [sym_number] = ACTIONS(1472),
        [sym_identifier] = ACTIONS(1475),
        [sym_comment] = ACTIONS(77),
        [sym__newline] = ACTIONS(1469),
        [sym__dedent] = ACTIONS(1469),
    },
    [665] = {
        [anon_sym_COLON] = ACTIONS(1478),
        [sym_comment] = ACTIONS(77),
    },
    [666] = {
        [anon_sym_COMMA] = ACTIONS(1480),
        [anon_sym_RPAREN] = ACTIONS(1482),
        [sym_comment] = ACTIONS(77),
    },
    [667] = {
        [anon_sym_COMMA] = ACTIONS(1484),
        [anon_sym_RPAREN] = ACTIONS(1482),
        [sym_comment] = ACTIONS(77),
    },
    [668] = {
        [anon_sym_RPAREN] = ACTIONS(1486),
        [sym_comment] = ACTIONS(77),
    },
    [669] = {
        [anon_sym_def] = ACTIONS(1488),
        [anon_sym_class] = ACTIONS(1488),
        [anon_sym_AT] = ACTIONS(1488),
        [sym_comment] = ACTIONS(77),
    },
    [670] = {
        [sym_elif_clause] = STATE(744),
        [sym_else_clause] = STATE(754),
        [sym_except_clause] = STATE(755),
        [sym_finally_clause] = STATE(756),
        [aux_sym_if_statement_repeat1] = STATE(679),
        [aux_sym_try_statement_repeat1] = STATE(680),
        [ts_builtin_sym_end] = ACTIONS(1491),
        [anon_sym_SEMI] = ACTIONS(1491),
        [anon_sym_print] = ACTIONS(1505),
        [anon_sym_return] = ACTIONS(1505),
        [anon_sym_del] = ACTIONS(1505),
        [sym_pass_statement] = ACTIONS(1505),
        [sym_break_statement] = ACTIONS(1505),
        [sym_continue_statement] = ACTIONS(1505),
        [anon_sym_if] = ACTIONS(1505),
        [anon_sym_elif] = ACTIONS(1519),
        [anon_sym_else] = ACTIONS(1522),
        [anon_sym_for] = ACTIONS(1505),
        [anon_sym_while] = ACTIONS(1505),
        [anon_sym_try] = ACTIONS(1505),
        [anon_sym_except] = ACTIONS(1527),
        [anon_sym_finally] = ACTIONS(1531),
        [anon_sym_with] = ACTIONS(1505),
        [anon_sym_def] = ACTIONS(1505),
        [anon_sym_class] = ACTIONS(1505),
        [anon_sym_AT] = ACTIONS(1491),
        [anon_sym_not] = ACTIONS(1505),
        [anon_sym_LBRACK] = ACTIONS(1491),
        [anon_sym_LBRACE] = ACTIONS(1491),
        [sym_number] = ACTIONS(1505),
        [sym_identifier] = ACTIONS(1536),
        [sym_comment] = ACTIONS(77),
        [sym__newline] = ACTIONS(1491),
        [sym__dedent] = ACTIONS(1491),
    },
    [671] = {
        [anon_sym_COLON] = ACTIONS(1550),
        [anon_sym_in] = ACTIONS(1552),
        [anon_sym_RPAREN] = ACTIONS(1554),
        [sym_comment] = ACTIONS(77),
        [sym__newline] = ACTIONS(1556),
    },
    [672] = {
        [aux_sym_print_statement_repeat1] = STATE(678),
        [aux_sym_subscript_repeat1] = STATE(55),
        [anon_sym_COMMA] = ACTIONS(1559),
        [anon_sym_COLON] = ACTIONS(1575),
        [anon_sym_for] = ACTIONS(1584),
        [anon_sym_in] = ACTIONS(1589),
        [anon_sym_as] = ACTIONS(1595),
        [anon_sym_LPAREN] = ACTIONS(1599),
        [anon_sym_RPAREN] = ACTIONS(1603),
        [anon_sym_STAR] = ACTIONS(1616),
        [anon_sym_PLUS] = ACTIONS(1620),
        [anon_sym_DASH] = ACTIONS(1620),
        [anon_sym_SLASH] = ACTIONS(1620),
        [anon_sym_STAR_STAR] = ACTIONS(1620),
        [anon_sym_PIPE] = ACTIONS(1620),
        [anon_sym_AMP] = ACTIONS(1620),
        [anon_sym_CARET] = ACTIONS(1620),
        [anon_sym_LT_LT] = ACTIONS(1620),
        [anon_sym_GT_GT] = ACTIONS(1620),
        [anon_sym_and] = ACTIONS(1620),
        [anon_sym_or] = ACTIONS(1620),
        [anon_sym_LBRACK] = ACTIONS(1624),
        [anon_sym_RBRACK] = ACTIONS(1628),
        [anon_sym_RBRACE] = ACTIONS(1636),
        [sym_comment] = ACTIONS(77),
        [sym__newline] = ACTIONS(1643),
    },
    [673] = {
        [anon_sym_COMMA] = ACTIONS(1651),
        [anon_sym_RPAREN] = ACTIONS(1655),
        [sym_comment] = ACTIONS(77),
    },
    [674] = {
        [aux_sym_call_repeat2] = STATE(683),
        [anon_sym_COMMA] = ACTIONS(1659),
        [anon_sym_RPAREN] = ACTIONS(1661),
        [sym_comment] = ACTIONS(77),
    },
    [675] = {
        [anon_sym_RPAREN] = ACTIONS(1663),
        [sym_comment] = ACTIONS(77),
    },
    [676] = {
        [aux_sym_dictionary_repeat1] = STATE(327),
        [anon_sym_COMMA] = ACTIONS(1665),
        [anon_sym_for] = ACTIONS(689),
        [anon_sym_RBRACE] = ACTIONS(1669),
        [sym_comment] = ACTIONS(77),
    },
    [677] = {
        [sym__statement] = STATE(710),
        [sym__simple_statement] = STATE(711),
        [sym_print_statement] = STATE(5),
        [sym_expression_statement] = STATE(5),
        [sym_return_statement] = STATE(5),
        [sym_delete_statement] = STATE(5),
        [sym__compound_statement] = STATE(657),
        [sym_if_statement] = STATE(658),
        [sym_for_statement] = STATE(658),
        [sym_while_statement] = STATE(658),
        [sym_try_statement] = STATE(658),
        [sym_with_statement] = STATE(658),
        [sym_function_definition] = STATE(658),
        [sym_class_definition] = STATE(658),
        [sym_decorated_definition] = STATE(658),
        [sym_decorator] = STATE(23),
        [sym__expression] = STATE(24),
        [sym_binary_operator] = STATE(17),
        [sym_unary_operator] = STATE(17),
        [sym_subscript] = STATE(17),
        [sym_call] = STATE(17),
        [sym_list] = STATE(17),
        [sym_list_comprehension] = STATE(17),
        [sym_dictionary] = STATE(17),
        [sym_dictionary_comprehension] = STATE(17),
        [sym_set] = STATE(17),
        [sym_set_comprehension] = STATE(17),
        [aux_sym_decorated_definition_repeat1] = STATE(682),
        [ts_builtin_sym_end] = ACTIONS(203),
        [anon_sym_SEMI] = ACTIONS(205),
        [anon_sym_print] = ACTIONS(87),
        [anon_sym_return] = ACTIONS(89),
        [anon_sym_del] = ACTIONS(91),
        [sym_pass_statement] = ACTIONS(93),
        [sym_break_statement] = ACTIONS(93),
        [sym_continue_statement] = ACTIONS(93),
        [anon_sym_if] = ACTIONS(1673),
        [anon_sym_for] = ACTIONS(1675),
        [anon_sym_while] = ACTIONS(1677),
        [anon_sym_try] = ACTIONS(1679),
        [anon_sym_with] = ACTIONS(1681),
        [anon_sym_def] = ACTIONS(1683),
        [anon_sym_class] = ACTIONS(1685),
        [anon_sym_AT] = ACTIONS(109),
        [anon_sym_not] = ACTIONS(111),
        [anon_sym_LBRACK] = ACTIONS(113),
        [anon_sym_LBRACE] = ACTIONS(115),
        [sym_number] = ACTIONS(117),
        [sym_identifier] = ACTIONS(119),
        [sym_comment] = ACTIONS(77),
        [sym__newline] = ACTIONS(205),
        [sym__dedent] = ACTIONS(1687),
    },
    [678] = {
        [anon_sym_COMMA] = ACTIONS(1689),
        [anon_sym_COLON] = ACTIONS(493),
        [anon_sym_in] = ACTIONS(493),
        [anon_sym_RPAREN] = ACTIONS(1691),
        [anon_sym_RBRACK] = ACTIONS(719),
        [anon_sym_RBRACE] = ACTIONS(703),
        [sym_comment] = ACTIONS(77),
        [sym__newline] = ACTIONS(1694),
    },
    [679] = {
        [sym_elif_clause] = STATE(699),
        [sym_else_clause] = STATE(700),
        [ts_builtin_sym_end] = ACTIONS(1105),
        [anon_sym_SEMI] = ACTIONS(1105),
        [anon_sym_print] = ACTIONS(1103),
        [anon_sym_return] = ACTIONS(1103),
        [anon_sym_del] = ACTIONS(1103),
        [sym_pass_statement] = ACTIONS(1103),
        [sym_break_statement] = ACTIONS(1103),
        [sym_continue_statement] = ACTIONS(1103),
        [anon_sym_if] = ACTIONS(1103),
        [anon_sym_elif] = ACTIONS(1697),
        [anon_sym_else] = ACTIONS(1699),
        [anon_sym_for] = ACTIONS(1103),
        [anon_sym_while] = ACTIONS(1103),
        [anon_sym_try] = ACTIONS(1103),
        [anon_sym_with] = ACTIONS(1103),
        [anon_sym_def] = ACTIONS(1103),
        [anon_sym_class] = ACTIONS(1103),
        [anon_sym_AT] = ACTIONS(1105),
        [anon_sym_not] = ACTIONS(1103),
        [anon_sym_LBRACK] = ACTIONS(1105),
        [anon_sym_LBRACE] = ACTIONS(1105),
        [sym_number] = ACTIONS(1103),
        [sym_identifier] = ACTIONS(1107),
        [sym_comment] = ACTIONS(77),
        [sym__newline] = ACTIONS(1105),
        [sym__dedent] = ACTIONS(1105),
    },
    [680] = {
        [sym_else_clause] = STATE(695),
        [sym_except_clause] = STATE(696),
        [sym_finally_clause] = STATE(697),
        [ts_builtin_sym_end] = ACTIONS(991),
        [anon_sym_SEMI] = ACTIONS(991),
        [anon_sym_print] = ACTIONS(989),
        [anon_sym_return] = ACTIONS(989),
        [anon_sym_del] = ACTIONS(989),
        [sym_pass_statement] = ACTIONS(989),
        [sym_break_statement] = ACTIONS(989),
        [sym_continue_statement] = ACTIONS(989),
        [anon_sym_if] = ACTIONS(989),
        [anon_sym_else] = ACTIONS(1699),
        [anon_sym_for] = ACTIONS(989),
        [anon_sym_while] = ACTIONS(989),
        [anon_sym_try] = ACTIONS(989),
        [anon_sym_except] = ACTIONS(1701),
        [anon_sym_finally] = ACTIONS(1432),
        [anon_sym_with] = ACTIONS(989),
        [anon_sym_def] = ACTIONS(989),
        [anon_sym_class] = ACTIONS(989),
        [anon_sym_AT] = ACTIONS(991),
        [anon_sym_not] = ACTIONS(989),
        [anon_sym_LBRACK] = ACTIONS(991),
        [anon_sym_LBRACE] = ACTIONS(991),
        [sym_number] = ACTIONS(989),
        [sym_identifier] = ACTIONS(993),
        [sym_comment] = ACTIONS(77),
        [sym__newline] = ACTIONS(991),
        [sym__dedent] = ACTIONS(991),
    },
    [681] = {
        [anon_sym_COMMA] = ACTIONS(953),
        [anon_sym_COLON] = ACTIONS(1703),
        [sym_comment] = ACTIONS(77),
    },
    [682] = {
        [sym_function_definition] = STATE(688),
        [sym_class_definition] = STATE(688),
        [sym_decorator] = STATE(28),
        [anon_sym_def] = ACTIONS(1705),
        [anon_sym_class] = ACTIONS(1707),
        [anon_sym_AT] = ACTIONS(109),
        [sym_comment] = ACTIONS(77),
    },
    [683] = {
        [anon_sym_COMMA] = ACTIONS(1709),
        [anon_sym_RPAREN] = ACTIONS(1711),
        [sym_comment] = ACTIONS(77),
    },
    [684] = {
        [sym__expression] = STATE(95),
        [sym_binary_operator] = STATE(43),
        [sym_unary_operator] = STATE(43),
        [sym_subscript] = STATE(43),
        [sym_call] = STATE(43),
        [sym_keyword_argument] = STATE(96),
        [sym_dictionary_splat_argument] = STATE(686),
        [sym_list] = STATE(43),
        [sym_list_comprehension] = STATE(43),
        [sym_dictionary] = STATE(43),
        [sym_dictionary_comprehension] = STATE(43),
        [sym_set] = STATE(43),
        [sym_set_comprehension] = STATE(43),
        [anon_sym_STAR_STAR] = ACTIONS(229),
        [anon_sym_not] = ACTIONS(231),
        [anon_sym_LBRACK] = ACTIONS(127),
        [anon_sym_LBRACE] = ACTIONS(129),
        [sym_number] = ACTIONS(131),
        [sym_identifier] = ACTIONS(233),
        [sym_comment] = ACTIONS(77),
    },
    [685] = {
        [anon_sym_COMMA] = ACTIONS(1713),
        [anon_sym_COLON] = ACTIONS(1713),
        [anon_sym_for] = ACTIONS(1713),
        [anon_sym_in] = ACTIONS(1713),
        [anon_sym_as] = ACTIONS(1713),
        [anon_sym_LPAREN] = ACTIONS(1713),
        [anon_sym_RPAREN] = ACTIONS(1713),
        [anon_sym_STAR] = ACTIONS(1716),
        [anon_sym_PLUS] = ACTIONS(1713),
        [anon_sym_DASH] = ACTIONS(1713),
        [anon_sym_SLASH] = ACTIONS(1713),
        [anon_sym_STAR_STAR] = ACTIONS(1713),
        [anon_sym_PIPE] = ACTIONS(1713),
        [anon_sym_AMP] = ACTIONS(1713),
        [anon_sym_CARET] = ACTIONS(1713),
        [anon_sym_LT_LT] = ACTIONS(1713),
        [anon_sym_GT_GT] = ACTIONS(1713),
        [anon_sym_and] = ACTIONS(1713),
        [anon_sym_or] = ACTIONS(1713),
        [anon_sym_LBRACK] = ACTIONS(1713),
        [anon_sym_RBRACK] = ACTIONS(1713),
        [anon_sym_RBRACE] = ACTIONS(1713),
        [sym_comment] = ACTIONS(77),
        [sym__newline] = ACTIONS(1713),
    },
    [686] = {
        [anon_sym_RPAREN] = ACTIONS(1719),
        [sym_comment] = ACTIONS(77),
    },
    [687] = {
        [anon_sym_COMMA] = ACTIONS(1721),
        [anon_sym_COLON] = ACTIONS(1721),
        [anon_sym_for] = ACTIONS(1721),
        [anon_sym_in] = ACTIONS(1721),
        [anon_sym_as] = ACTIONS(1721),
        [anon_sym_LPAREN] = ACTIONS(1721),
        [anon_sym_RPAREN] = ACTIONS(1721),
        [anon_sym_STAR] = ACTIONS(1724),
        [anon_sym_PLUS] = ACTIONS(1721),
        [anon_sym_DASH] = ACTIONS(1721),
        [anon_sym_SLASH] = ACTIONS(1721),
        [anon_sym_STAR_STAR] = ACTIONS(1721),
        [anon_sym_PIPE] = ACTIONS(1721),
        [anon_sym_AMP] = ACTIONS(1721),
        [anon_sym_CARET] = ACTIONS(1721),
        [anon_sym_LT_LT] = ACTIONS(1721),
        [anon_sym_GT_GT] = ACTIONS(1721),
        [anon_sym_and] = ACTIONS(1721),
        [anon_sym_or] = ACTIONS(1721),
        [anon_sym_LBRACK] = ACTIONS(1721),
        [anon_sym_RBRACK] = ACTIONS(1721),
        [anon_sym_RBRACE] = ACTIONS(1721),
        [sym_comment] = ACTIONS(77),
        [sym__newline] = ACTIONS(1721),
    },
    [688] = {
        [ts_builtin_sym_end] = ACTIONS(211),
        [anon_sym_SEMI] = ACTIONS(211),
        [anon_sym_print] = ACTIONS(213),
        [anon_sym_return] = ACTIONS(213),
        [anon_sym_del] = ACTIONS(213),
        [sym_pass_statement] = ACTIONS(213),
        [sym_break_statement] = ACTIONS(213),
        [sym_continue_statement] = ACTIONS(213),
        [anon_sym_if] = ACTIONS(213),
        [anon_sym_for] = ACTIONS(213),
        [anon_sym_while] = ACTIONS(213),
        [anon_sym_try] = ACTIONS(213),
        [anon_sym_with] = ACTIONS(213),
        [anon_sym_def] = ACTIONS(213),
        [anon_sym_class] = ACTIONS(213),
        [anon_sym_AT] = ACTIONS(211),
        [anon_sym_not] = ACTIONS(213),
        [anon_sym_LBRACK] = ACTIONS(211),
        [anon_sym_LBRACE] = ACTIONS(211),
        [sym_number] = ACTIONS(213),
        [sym_identifier] = ACTIONS(215),
        [sym_comment] = ACTIONS(77),
        [sym__newline] = ACTIONS(211),
        [sym__dedent] = ACTIONS(211),
    },
    [689] = {
        [sym__simple_statement] = STATE(690),
        [sym_print_statement] = STATE(5),
        [sym_expression_statement] = STATE(5),
        [sym_return_statement] = STATE(5),
        [sym_delete_statement] = STATE(5),
        [sym__suite] = STATE(691),
        [sym__expression] = STATE(24),
        [sym_binary_operator] = STATE(17),
        [sym_unary_operator] = STATE(17),
        [sym_subscript] = STATE(17),
        [sym_call] = STATE(17),
        [sym_list] = STATE(17),
        [sym_list_comprehension] = STATE(17),
        [sym_dictionary] = STATE(17),
        [sym_dictionary_comprehension] = STATE(17),
        [sym_set] = STATE(17),
        [sym_set_comprehension] = STATE(17),
        [anon_sym_print] = ACTIONS(87),
        [anon_sym_return] = ACTIONS(89),
        [anon_sym_del] = ACTIONS(91),
        [sym_pass_statement] = ACTIONS(93),
        [sym_break_statement] = ACTIONS(93),
        [sym_continue_statement] = ACTIONS(93),
        [anon_sym_not] = ACTIONS(111),
        [anon_sym_LBRACK] = ACTIONS(113),
        [anon_sym_LBRACE] = ACTIONS(115),
        [sym_number] = ACTIONS(117),
        [sym_identifier] = ACTIONS(119),
        [sym_comment] = ACTIONS(77),
        [sym__indent] = ACTIONS(1235),
    },
    [690] = {
        [sym_comment] = ACTIONS(77),
        [sym__newline] = ACTIONS(1389),
    },
    [691] = {
        [ts_builtin_sym_end] = ACTIONS(959),
        [anon_sym_SEMI] = ACTIONS(959),
        [anon_sym_print] = ACTIONS(957),
        [anon_sym_return] = ACTIONS(957),
        [anon_sym_del] = ACTIONS(957),
        [sym_pass_statement] = ACTIONS(957),
        [sym_break_statement] = ACTIONS(957),
        [sym_continue_statement] = ACTIONS(957),
        [anon_sym_if] = ACTIONS(957),
        [anon_sym_for] = ACTIONS(957),
        [anon_sym_while] = ACTIONS(957),
        [anon_sym_try] = ACTIONS(957),
        [anon_sym_with] = ACTIONS(957),
        [anon_sym_def] = ACTIONS(957),
        [anon_sym_class] = ACTIONS(957),
        [anon_sym_AT] = ACTIONS(959),
        [anon_sym_not] = ACTIONS(957),
        [anon_sym_LBRACK] = ACTIONS(959),
        [anon_sym_LBRACE] = ACTIONS(959),
        [sym_number] = ACTIONS(957),
        [sym_identifier] = ACTIONS(961),
        [sym_comment] = ACTIONS(77),
        [sym__newline] = ACTIONS(959),
        [sym__dedent] = ACTIONS(959),
    },
    [692] = {
        [ts_builtin_sym_end] = ACTIONS(799),
        [anon_sym_SEMI] = ACTIONS(799),
        [anon_sym_print] = ACTIONS(801),
        [anon_sym_return] = ACTIONS(801),
        [anon_sym_del] = ACTIONS(801),
        [sym_pass_statement] = ACTIONS(801),
        [sym_break_statement] = ACTIONS(801),
        [sym_continue_statement] = ACTIONS(801),
        [anon_sym_if] = ACTIONS(801),
        [anon_sym_elif] = ACTIONS(801),
        [anon_sym_else] = ACTIONS(801),
        [anon_sym_for] = ACTIONS(801),
        [anon_sym_while] = ACTIONS(801),
        [anon_sym_try] = ACTIONS(801),
        [anon_sym_except] = ACTIONS(801),
        [anon_sym_finally] = ACTIONS(801),
        [anon_sym_with] = ACTIONS(801),
        [anon_sym_def] = ACTIONS(801),
        [anon_sym_class] = ACTIONS(801),
        [anon_sym_AT] = ACTIONS(799),
        [anon_sym_not] = ACTIONS(801),
        [anon_sym_LBRACK] = ACTIONS(799),
        [anon_sym_LBRACE] = ACTIONS(799),
        [sym_number] = ACTIONS(801),
        [sym_identifier] = ACTIONS(803),
        [sym_comment] = ACTIONS(77),
        [sym__newline] = ACTIONS(799),
        [sym__dedent] = ACTIONS(799),
    },
    [693] = {
        [sym__statement] = STATE(406),
        [sym__simple_statement] = STATE(399),
        [sym_print_statement] = STATE(5),
        [sym_expression_statement] = STATE(5),
        [sym_return_statement] = STATE(5),
        [sym_delete_statement] = STATE(5),
        [sym__compound_statement] = STATE(400),
        [sym_if_statement] = STATE(401),
        [sym_for_statement] = STATE(401),
        [sym_while_statement] = STATE(401),
        [sym_try_statement] = STATE(401),
        [sym_with_statement] = STATE(401),
        [sym_function_definition] = STATE(401),
        [sym_class_definition] = STATE(401),
        [sym_decorated_definition] = STATE(401),
        [sym_decorator] = STATE(23),
        [sym__expression] = STATE(24),
        [sym_binary_operator] = STATE(17),
        [sym_unary_operator] = STATE(17),
        [sym_subscript] = STATE(17),
        [sym_call] = STATE(17),
        [sym_list] = STATE(17),
        [sym_list_comprehension] = STATE(17),
        [sym_dictionary] = STATE(17),
        [sym_dictionary_comprehension] = STATE(17),
        [sym_set] = STATE(17),
        [sym_set_comprehension] = STATE(17),
        [aux_sym_decorated_definition_repeat1] = STATE(403),
        [anon_sym_print] = ACTIONS(87),
        [anon_sym_return] = ACTIONS(89),
        [anon_sym_del] = ACTIONS(91),
        [sym_pass_statement] = ACTIONS(93),
        [sym_break_statement] = ACTIONS(93),
        [sym_continue_statement] = ACTIONS(93),
        [anon_sym_if] = ACTIONS(777),
        [anon_sym_for] = ACTIONS(779),
        [anon_sym_while] = ACTIONS(781),
        [anon_sym_try] = ACTIONS(783),
        [anon_sym_with] = ACTIONS(785),
        [anon_sym_def] = ACTIONS(787),
        [anon_sym_class] = ACTIONS(789),
        [anon_sym_AT] = ACTIONS(109),
        [anon_sym_not] = ACTIONS(111),
        [anon_sym_LBRACK] = ACTIONS(113),
        [anon_sym_LBRACE] = ACTIONS(115),
        [sym_number] = ACTIONS(117),
        [sym_identifier] = ACTIONS(119),
        [sym_comment] = ACTIONS(77),
        [sym__dedent] = ACTIONS(1687),
    },
    [694] = {
        [ts_builtin_sym_end] = ACTIONS(819),
        [anon_sym_SEMI] = ACTIONS(819),
        [anon_sym_print] = ACTIONS(821),
        [anon_sym_return] = ACTIONS(821),
        [anon_sym_del] = ACTIONS(821),
        [sym_pass_statement] = ACTIONS(821),
        [sym_break_statement] = ACTIONS(821),
        [sym_continue_statement] = ACTIONS(821),
        [anon_sym_if] = ACTIONS(821),
        [anon_sym_elif] = ACTIONS(821),
        [anon_sym_else] = ACTIONS(821),
        [anon_sym_for] = ACTIONS(821),
        [anon_sym_while] = ACTIONS(821),
        [anon_sym_try] = ACTIONS(821),
        [anon_sym_except] = ACTIONS(821),
        [anon_sym_finally] = ACTIONS(821),
        [anon_sym_with] = ACTIONS(821),
        [anon_sym_def] = ACTIONS(821),
        [anon_sym_class] = ACTIONS(821),
        [anon_sym_AT] = ACTIONS(819),
        [anon_sym_not] = ACTIONS(821),
        [anon_sym_LBRACK] = ACTIONS(819),
        [anon_sym_LBRACE] = ACTIONS(819),
        [sym_number] = ACTIONS(821),
        [sym_identifier] = ACTIONS(823),
        [sym_comment] = ACTIONS(77),
        [sym__newline] = ACTIONS(819),
        [sym__dedent] = ACTIONS(819),
    },
    [695] = {
        [sym_finally_clause] = STATE(698),
        [ts_builtin_sym_end] = ACTIONS(1005),
        [anon_sym_SEMI] = ACTIONS(1005),
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
        [anon_sym_finally] = ACTIONS(1432),
        [anon_sym_with] = ACTIONS(1003),
        [anon_sym_def] = ACTIONS(1003),
        [anon_sym_class] = ACTIONS(1003),
        [anon_sym_AT] = ACTIONS(1005),
        [anon_sym_not] = ACTIONS(1003),
        [anon_sym_LBRACK] = ACTIONS(1005),
        [anon_sym_LBRACE] = ACTIONS(1005),
        [sym_number] = ACTIONS(1003),
        [sym_identifier] = ACTIONS(1007),
        [sym_comment] = ACTIONS(77),
        [sym__newline] = ACTIONS(1005),
        [sym__dedent] = ACTIONS(1005),
    },
    [696] = {
        [ts_builtin_sym_end] = ACTIONS(1011),
        [anon_sym_SEMI] = ACTIONS(1011),
        [anon_sym_print] = ACTIONS(1009),
        [anon_sym_return] = ACTIONS(1009),
        [anon_sym_del] = ACTIONS(1009),
        [sym_pass_statement] = ACTIONS(1009),
        [sym_break_statement] = ACTIONS(1009),
        [sym_continue_statement] = ACTIONS(1009),
        [anon_sym_if] = ACTIONS(1009),
        [anon_sym_else] = ACTIONS(1009),
        [anon_sym_for] = ACTIONS(1009),
        [anon_sym_while] = ACTIONS(1009),
        [anon_sym_try] = ACTIONS(1009),
        [anon_sym_except] = ACTIONS(1009),
        [anon_sym_finally] = ACTIONS(1009),
        [anon_sym_with] = ACTIONS(1009),
        [anon_sym_def] = ACTIONS(1009),
        [anon_sym_class] = ACTIONS(1009),
        [anon_sym_AT] = ACTIONS(1011),
        [anon_sym_not] = ACTIONS(1009),
        [anon_sym_LBRACK] = ACTIONS(1011),
        [anon_sym_LBRACE] = ACTIONS(1011),
        [sym_number] = ACTIONS(1009),
        [sym_identifier] = ACTIONS(1013),
        [sym_comment] = ACTIONS(77),
        [sym__newline] = ACTIONS(1011),
        [sym__dedent] = ACTIONS(1011),
    },
    [697] = {
        [ts_builtin_sym_end] = ACTIONS(1005),
        [anon_sym_SEMI] = ACTIONS(1005),
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
        [sym_number] = ACTIONS(1003),
        [sym_identifier] = ACTIONS(1007),
        [sym_comment] = ACTIONS(77),
        [sym__newline] = ACTIONS(1005),
        [sym__dedent] = ACTIONS(1005),
    },
    [698] = {
        [ts_builtin_sym_end] = ACTIONS(1017),
        [anon_sym_SEMI] = ACTIONS(1017),
        [anon_sym_print] = ACTIONS(1015),
        [anon_sym_return] = ACTIONS(1015),
        [anon_sym_del] = ACTIONS(1015),
        [sym_pass_statement] = ACTIONS(1015),
        [sym_break_statement] = ACTIONS(1015),
        [sym_continue_statement] = ACTIONS(1015),
        [anon_sym_if] = ACTIONS(1015),
        [anon_sym_for] = ACTIONS(1015),
        [anon_sym_while] = ACTIONS(1015),
        [anon_sym_try] = ACTIONS(1015),
        [anon_sym_with] = ACTIONS(1015),
        [anon_sym_def] = ACTIONS(1015),
        [anon_sym_class] = ACTIONS(1015),
        [anon_sym_AT] = ACTIONS(1017),
        [anon_sym_not] = ACTIONS(1015),
        [anon_sym_LBRACK] = ACTIONS(1017),
        [anon_sym_LBRACE] = ACTIONS(1017),
        [sym_number] = ACTIONS(1015),
        [sym_identifier] = ACTIONS(1019),
        [sym_comment] = ACTIONS(77),
        [sym__newline] = ACTIONS(1017),
        [sym__dedent] = ACTIONS(1017),
    },
    [699] = {
        [ts_builtin_sym_end] = ACTIONS(1111),
        [anon_sym_SEMI] = ACTIONS(1111),
        [anon_sym_print] = ACTIONS(1109),
        [anon_sym_return] = ACTIONS(1109),
        [anon_sym_del] = ACTIONS(1109),
        [sym_pass_statement] = ACTIONS(1109),
        [sym_break_statement] = ACTIONS(1109),
        [sym_continue_statement] = ACTIONS(1109),
        [anon_sym_if] = ACTIONS(1109),
        [anon_sym_elif] = ACTIONS(1109),
        [anon_sym_else] = ACTIONS(1109),
        [anon_sym_for] = ACTIONS(1109),
        [anon_sym_while] = ACTIONS(1109),
        [anon_sym_try] = ACTIONS(1109),
        [anon_sym_with] = ACTIONS(1109),
        [anon_sym_def] = ACTIONS(1109),
        [anon_sym_class] = ACTIONS(1109),
        [anon_sym_AT] = ACTIONS(1111),
        [anon_sym_not] = ACTIONS(1109),
        [anon_sym_LBRACK] = ACTIONS(1111),
        [anon_sym_LBRACE] = ACTIONS(1111),
        [sym_number] = ACTIONS(1109),
        [sym_identifier] = ACTIONS(1113),
        [sym_comment] = ACTIONS(77),
        [sym__newline] = ACTIONS(1111),
        [sym__dedent] = ACTIONS(1111),
    },
    [700] = {
        [ts_builtin_sym_end] = ACTIONS(1117),
        [anon_sym_SEMI] = ACTIONS(1117),
        [anon_sym_print] = ACTIONS(1115),
        [anon_sym_return] = ACTIONS(1115),
        [anon_sym_del] = ACTIONS(1115),
        [sym_pass_statement] = ACTIONS(1115),
        [sym_break_statement] = ACTIONS(1115),
        [sym_continue_statement] = ACTIONS(1115),
        [anon_sym_if] = ACTIONS(1115),
        [anon_sym_for] = ACTIONS(1115),
        [anon_sym_while] = ACTIONS(1115),
        [anon_sym_try] = ACTIONS(1115),
        [anon_sym_with] = ACTIONS(1115),
        [anon_sym_def] = ACTIONS(1115),
        [anon_sym_class] = ACTIONS(1115),
        [anon_sym_AT] = ACTIONS(1117),
        [anon_sym_not] = ACTIONS(1115),
        [anon_sym_LBRACK] = ACTIONS(1117),
        [anon_sym_LBRACE] = ACTIONS(1117),
        [sym_number] = ACTIONS(1115),
        [sym_identifier] = ACTIONS(1119),
        [sym_comment] = ACTIONS(77),
        [sym__newline] = ACTIONS(1117),
        [sym__dedent] = ACTIONS(1117),
    },
    [701] = {
        [sym__simple_statement] = STATE(690),
        [sym_print_statement] = STATE(5),
        [sym_expression_statement] = STATE(5),
        [sym_return_statement] = STATE(5),
        [sym_delete_statement] = STATE(5),
        [sym__suite] = STATE(702),
        [sym__expression] = STATE(24),
        [sym_binary_operator] = STATE(17),
        [sym_unary_operator] = STATE(17),
        [sym_subscript] = STATE(17),
        [sym_call] = STATE(17),
        [sym_list] = STATE(17),
        [sym_list_comprehension] = STATE(17),
        [sym_dictionary] = STATE(17),
        [sym_dictionary_comprehension] = STATE(17),
        [sym_set] = STATE(17),
        [sym_set_comprehension] = STATE(17),
        [anon_sym_print] = ACTIONS(87),
        [anon_sym_return] = ACTIONS(89),
        [anon_sym_del] = ACTIONS(91),
        [sym_pass_statement] = ACTIONS(93),
        [sym_break_statement] = ACTIONS(93),
        [sym_continue_statement] = ACTIONS(93),
        [anon_sym_not] = ACTIONS(111),
        [anon_sym_LBRACK] = ACTIONS(113),
        [anon_sym_LBRACE] = ACTIONS(115),
        [sym_number] = ACTIONS(117),
        [sym_identifier] = ACTIONS(119),
        [sym_comment] = ACTIONS(77),
        [sym__indent] = ACTIONS(1235),
    },
    [702] = {
        [ts_builtin_sym_end] = ACTIONS(1023),
        [anon_sym_SEMI] = ACTIONS(1023),
        [anon_sym_print] = ACTIONS(1021),
        [anon_sym_return] = ACTIONS(1021),
        [anon_sym_del] = ACTIONS(1021),
        [sym_pass_statement] = ACTIONS(1021),
        [sym_break_statement] = ACTIONS(1021),
        [sym_continue_statement] = ACTIONS(1021),
        [anon_sym_if] = ACTIONS(1021),
        [anon_sym_for] = ACTIONS(1021),
        [anon_sym_while] = ACTIONS(1021),
        [anon_sym_try] = ACTIONS(1021),
        [anon_sym_finally] = ACTIONS(1021),
        [anon_sym_with] = ACTIONS(1021),
        [anon_sym_def] = ACTIONS(1021),
        [anon_sym_class] = ACTIONS(1021),
        [anon_sym_AT] = ACTIONS(1023),
        [anon_sym_not] = ACTIONS(1021),
        [anon_sym_LBRACK] = ACTIONS(1023),
        [anon_sym_LBRACE] = ACTIONS(1023),
        [sym_number] = ACTIONS(1021),
        [sym_identifier] = ACTIONS(1025),
        [sym_comment] = ACTIONS(77),
        [sym__newline] = ACTIONS(1023),
        [sym__dedent] = ACTIONS(1023),
    },
    [703] = {
        [sym__expression] = STATE(705),
        [sym_binary_operator] = STATE(17),
        [sym_unary_operator] = STATE(17),
        [sym_subscript] = STATE(17),
        [sym_call] = STATE(17),
        [sym_list] = STATE(17),
        [sym_list_comprehension] = STATE(17),
        [sym_dictionary] = STATE(17),
        [sym_dictionary_comprehension] = STATE(17),
        [sym_set] = STATE(17),
        [sym_set_comprehension] = STATE(17),
        [anon_sym_not] = ACTIONS(1727),
        [anon_sym_LBRACK] = ACTIONS(113),
        [anon_sym_RBRACK] = ACTIONS(723),
        [anon_sym_LBRACE] = ACTIONS(115),
        [anon_sym_RBRACE] = ACTIONS(707),
        [sym_number] = ACTIONS(117),
        [sym_identifier] = ACTIONS(119),
        [sym_comment] = ACTIONS(77),
    },
    [704] = {
        [sym__expression] = STATE(708),
        [sym_binary_operator] = STATE(17),
        [sym_unary_operator] = STATE(17),
        [sym_subscript] = STATE(17),
        [sym_call] = STATE(17),
        [sym_list] = STATE(17),
        [sym_list_comprehension] = STATE(17),
        [sym_dictionary] = STATE(17),
        [sym_dictionary_comprehension] = STATE(17),
        [sym_set] = STATE(17),
        [sym_set_comprehension] = STATE(17),
        [anon_sym_not] = ACTIONS(1727),
        [anon_sym_LBRACK] = ACTIONS(113),
        [anon_sym_LBRACE] = ACTIONS(115),
        [sym_number] = ACTIONS(117),
        [sym_identifier] = ACTIONS(119),
        [sym_comment] = ACTIONS(77),
    },
    [705] = {
        [anon_sym_COMMA] = ACTIONS(495),
        [anon_sym_COLON] = ACTIONS(495),
        [anon_sym_in] = ACTIONS(495),
        [anon_sym_LPAREN] = ACTIONS(183),
        [anon_sym_RPAREN] = ACTIONS(495),
        [anon_sym_STAR] = ACTIONS(1729),
        [anon_sym_PLUS] = ACTIONS(1731),
        [anon_sym_DASH] = ACTIONS(1731),
        [anon_sym_SLASH] = ACTIONS(1731),
        [anon_sym_STAR_STAR] = ACTIONS(1731),
        [anon_sym_PIPE] = ACTIONS(1731),
        [anon_sym_AMP] = ACTIONS(1731),
        [anon_sym_CARET] = ACTIONS(1731),
        [anon_sym_LT_LT] = ACTIONS(1731),
        [anon_sym_GT_GT] = ACTIONS(1731),
        [anon_sym_and] = ACTIONS(1731),
        [anon_sym_or] = ACTIONS(1731),
        [anon_sym_LBRACK] = ACTIONS(199),
        [anon_sym_RBRACK] = ACTIONS(495),
        [anon_sym_RBRACE] = ACTIONS(495),
        [sym_comment] = ACTIONS(77),
        [sym__newline] = ACTIONS(495),
    },
    [706] = {
        [sym__expression] = STATE(707),
        [sym_binary_operator] = STATE(17),
        [sym_unary_operator] = STATE(17),
        [sym_subscript] = STATE(17),
        [sym_call] = STATE(17),
        [sym_list] = STATE(17),
        [sym_list_comprehension] = STATE(17),
        [sym_dictionary] = STATE(17),
        [sym_dictionary_comprehension] = STATE(17),
        [sym_set] = STATE(17),
        [sym_set_comprehension] = STATE(17),
        [anon_sym_not] = ACTIONS(1727),
        [anon_sym_LBRACK] = ACTIONS(113),
        [anon_sym_LBRACE] = ACTIONS(115),
        [sym_number] = ACTIONS(117),
        [sym_identifier] = ACTIONS(119),
        [sym_comment] = ACTIONS(77),
    },
    [707] = {
        [anon_sym_COMMA] = ACTIONS(303),
        [anon_sym_COLON] = ACTIONS(303),
        [anon_sym_in] = ACTIONS(303),
        [anon_sym_LPAREN] = ACTIONS(1733),
        [anon_sym_RPAREN] = ACTIONS(303),
        [anon_sym_STAR] = ACTIONS(1736),
        [anon_sym_PLUS] = ACTIONS(1739),
        [anon_sym_DASH] = ACTIONS(1739),
        [anon_sym_SLASH] = ACTIONS(1739),
        [anon_sym_STAR_STAR] = ACTIONS(1739),
        [anon_sym_PIPE] = ACTIONS(1739),
        [anon_sym_AMP] = ACTIONS(1739),
        [anon_sym_CARET] = ACTIONS(1739),
        [anon_sym_LT_LT] = ACTIONS(1739),
        [anon_sym_GT_GT] = ACTIONS(1739),
        [anon_sym_and] = ACTIONS(1739),
        [anon_sym_or] = ACTIONS(1739),
        [anon_sym_LBRACK] = ACTIONS(1742),
        [anon_sym_RBRACK] = ACTIONS(303),
        [anon_sym_RBRACE] = ACTIONS(303),
        [sym_comment] = ACTIONS(77),
        [sym__newline] = ACTIONS(303),
    },
    [708] = {
        [anon_sym_COMMA] = ACTIONS(631),
        [anon_sym_COLON] = ACTIONS(631),
        [anon_sym_in] = ACTIONS(631),
        [anon_sym_LPAREN] = ACTIONS(1745),
        [anon_sym_RPAREN] = ACTIONS(631),
        [anon_sym_STAR] = ACTIONS(1748),
        [anon_sym_PLUS] = ACTIONS(1751),
        [anon_sym_DASH] = ACTIONS(1751),
        [anon_sym_SLASH] = ACTIONS(1751),
        [anon_sym_STAR_STAR] = ACTIONS(1751),
        [anon_sym_PIPE] = ACTIONS(1751),
        [anon_sym_AMP] = ACTIONS(1751),
        [anon_sym_CARET] = ACTIONS(1751),
        [anon_sym_LT_LT] = ACTIONS(1751),
        [anon_sym_GT_GT] = ACTIONS(1751),
        [anon_sym_and] = ACTIONS(1751),
        [anon_sym_or] = ACTIONS(1751),
        [anon_sym_LBRACK] = ACTIONS(1754),
        [anon_sym_RBRACK] = ACTIONS(631),
        [anon_sym_RBRACE] = ACTIONS(631),
        [sym_comment] = ACTIONS(77),
        [sym__newline] = ACTIONS(631),
    },
    [709] = {
        [sym_expression_list] = STATE(713),
        [sym__expression] = STATE(164),
        [sym_binary_operator] = STATE(43),
        [sym_unary_operator] = STATE(43),
        [sym_subscript] = STATE(43),
        [sym_call] = STATE(43),
        [sym_list] = STATE(43),
        [sym_list_comprehension] = STATE(43),
        [sym_dictionary] = STATE(43),
        [sym_dictionary_comprehension] = STATE(43),
        [sym_set] = STATE(43),
        [sym_set_comprehension] = STATE(43),
        [anon_sym_not] = ACTIONS(135),
        [anon_sym_LBRACK] = ACTIONS(127),
        [anon_sym_LBRACE] = ACTIONS(129),
        [sym_number] = ACTIONS(131),
        [sym_identifier] = ACTIONS(133),
        [sym_comment] = ACTIONS(77),
    },
    [710] = {
        [ts_builtin_sym_end] = ACTIONS(221),
        [anon_sym_SEMI] = ACTIONS(221),
        [anon_sym_print] = ACTIONS(223),
        [anon_sym_return] = ACTIONS(223),
        [anon_sym_del] = ACTIONS(223),
        [sym_pass_statement] = ACTIONS(223),
        [sym_break_statement] = ACTIONS(223),
        [sym_continue_statement] = ACTIONS(223),
        [anon_sym_if] = ACTIONS(223),
        [anon_sym_for] = ACTIONS(223),
        [anon_sym_while] = ACTIONS(223),
        [anon_sym_try] = ACTIONS(223),
        [anon_sym_with] = ACTIONS(223),
        [anon_sym_def] = ACTIONS(223),
        [anon_sym_class] = ACTIONS(223),
        [anon_sym_AT] = ACTIONS(221),
        [anon_sym_not] = ACTIONS(223),
        [anon_sym_LBRACK] = ACTIONS(221),
        [anon_sym_LBRACE] = ACTIONS(221),
        [sym_number] = ACTIONS(223),
        [sym_identifier] = ACTIONS(225),
        [sym_comment] = ACTIONS(77),
        [sym__newline] = ACTIONS(221),
        [sym__dedent] = ACTIONS(221),
    },
    [711] = {
        [sym_comment] = ACTIONS(77),
        [sym__newline] = ACTIONS(1757),
    },
    [712] = {
        [ts_builtin_sym_end] = ACTIONS(675),
        [anon_sym_SEMI] = ACTIONS(675),
        [anon_sym_print] = ACTIONS(677),
        [anon_sym_return] = ACTIONS(677),
        [anon_sym_del] = ACTIONS(677),
        [sym_pass_statement] = ACTIONS(677),
        [sym_break_statement] = ACTIONS(677),
        [sym_continue_statement] = ACTIONS(677),
        [anon_sym_if] = ACTIONS(677),
        [anon_sym_for] = ACTIONS(677),
        [anon_sym_while] = ACTIONS(677),
        [anon_sym_try] = ACTIONS(677),
        [anon_sym_with] = ACTIONS(677),
        [anon_sym_def] = ACTIONS(677),
        [anon_sym_class] = ACTIONS(677),
        [anon_sym_AT] = ACTIONS(675),
        [anon_sym_not] = ACTIONS(677),
        [anon_sym_LBRACK] = ACTIONS(675),
        [anon_sym_LBRACE] = ACTIONS(675),
        [sym_number] = ACTIONS(677),
        [sym_identifier] = ACTIONS(679),
        [sym_comment] = ACTIONS(77),
        [sym__newline] = ACTIONS(675),
        [sym__dedent] = ACTIONS(675),
    },
    [713] = {
        [anon_sym_in] = ACTIONS(1759),
        [sym_comment] = ACTIONS(77),
    },
    [714] = {
        [sym_expression_list] = STATE(715),
        [sym__expression] = STATE(525),
        [sym_binary_operator] = STATE(43),
        [sym_unary_operator] = STATE(43),
        [sym_subscript] = STATE(43),
        [sym_call] = STATE(43),
        [sym_list] = STATE(43),
        [sym_list_comprehension] = STATE(43),
        [sym_dictionary] = STATE(43),
        [sym_dictionary_comprehension] = STATE(43),
        [sym_set] = STATE(43),
        [sym_set_comprehension] = STATE(43),
        [anon_sym_not] = ACTIONS(935),
        [anon_sym_LBRACK] = ACTIONS(127),
        [anon_sym_LBRACE] = ACTIONS(129),
        [sym_number] = ACTIONS(131),
        [sym_identifier] = ACTIONS(133),
        [sym_comment] = ACTIONS(77),
    },
    [715] = {
        [anon_sym_COLON] = ACTIONS(1550),
        [sym_comment] = ACTIONS(77),
    },
    [716] = {
        [sym__simple_statement] = STATE(690),
        [sym_print_statement] = STATE(5),
        [sym_expression_statement] = STATE(5),
        [sym_return_statement] = STATE(5),
        [sym_delete_statement] = STATE(5),
        [sym__suite] = STATE(717),
        [sym__expression] = STATE(24),
        [sym_binary_operator] = STATE(17),
        [sym_unary_operator] = STATE(17),
        [sym_subscript] = STATE(17),
        [sym_call] = STATE(17),
        [sym_list] = STATE(17),
        [sym_list_comprehension] = STATE(17),
        [sym_dictionary] = STATE(17),
        [sym_dictionary_comprehension] = STATE(17),
        [sym_set] = STATE(17),
        [sym_set_comprehension] = STATE(17),
        [anon_sym_print] = ACTIONS(87),
        [anon_sym_return] = ACTIONS(89),
        [anon_sym_del] = ACTIONS(91),
        [sym_pass_statement] = ACTIONS(93),
        [sym_break_statement] = ACTIONS(93),
        [sym_continue_statement] = ACTIONS(93),
        [anon_sym_not] = ACTIONS(111),
        [anon_sym_LBRACK] = ACTIONS(113),
        [anon_sym_LBRACE] = ACTIONS(115),
        [sym_number] = ACTIONS(117),
        [sym_identifier] = ACTIONS(119),
        [sym_comment] = ACTIONS(77),
        [sym__indent] = ACTIONS(1235),
    },
    [717] = {
        [sym_else_clause] = STATE(718),
        [ts_builtin_sym_end] = ACTIONS(1077),
        [anon_sym_SEMI] = ACTIONS(1077),
        [anon_sym_print] = ACTIONS(1075),
        [anon_sym_return] = ACTIONS(1075),
        [anon_sym_del] = ACTIONS(1075),
        [sym_pass_statement] = ACTIONS(1075),
        [sym_break_statement] = ACTIONS(1075),
        [sym_continue_statement] = ACTIONS(1075),
        [anon_sym_if] = ACTIONS(1075),
        [anon_sym_else] = ACTIONS(1699),
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
        [sym_number] = ACTIONS(1075),
        [sym_identifier] = ACTIONS(1079),
        [sym_comment] = ACTIONS(77),
        [sym__newline] = ACTIONS(1077),
        [sym__dedent] = ACTIONS(1077),
    },
    [718] = {
        [ts_builtin_sym_end] = ACTIONS(1083),
        [anon_sym_SEMI] = ACTIONS(1083),
        [anon_sym_print] = ACTIONS(1081),
        [anon_sym_return] = ACTIONS(1081),
        [anon_sym_del] = ACTIONS(1081),
        [sym_pass_statement] = ACTIONS(1081),
        [sym_break_statement] = ACTIONS(1081),
        [sym_continue_statement] = ACTIONS(1081),
        [anon_sym_if] = ACTIONS(1081),
        [anon_sym_for] = ACTIONS(1081),
        [anon_sym_while] = ACTIONS(1081),
        [anon_sym_try] = ACTIONS(1081),
        [anon_sym_with] = ACTIONS(1081),
        [anon_sym_def] = ACTIONS(1081),
        [anon_sym_class] = ACTIONS(1081),
        [anon_sym_AT] = ACTIONS(1083),
        [anon_sym_not] = ACTIONS(1081),
        [anon_sym_LBRACK] = ACTIONS(1083),
        [anon_sym_LBRACE] = ACTIONS(1083),
        [sym_number] = ACTIONS(1081),
        [sym_identifier] = ACTIONS(1085),
        [sym_comment] = ACTIONS(77),
        [sym__newline] = ACTIONS(1083),
        [sym__dedent] = ACTIONS(1083),
    },
    [719] = {
        [anon_sym_COMMA] = ACTIONS(1251),
        [anon_sym_COLON] = ACTIONS(1251),
        [anon_sym_for] = ACTIONS(1251),
        [anon_sym_in] = ACTIONS(1251),
        [anon_sym_as] = ACTIONS(1251),
        [anon_sym_LPAREN] = ACTIONS(1251),
        [anon_sym_RPAREN] = ACTIONS(1251),
        [anon_sym_STAR] = ACTIONS(1269),
        [anon_sym_PLUS] = ACTIONS(1251),
        [anon_sym_DASH] = ACTIONS(1251),
        [anon_sym_SLASH] = ACTIONS(1251),
        [anon_sym_STAR_STAR] = ACTIONS(1251),
        [anon_sym_PIPE] = ACTIONS(1251),
        [anon_sym_AMP] = ACTIONS(1251),
        [anon_sym_CARET] = ACTIONS(1251),
        [anon_sym_LT_LT] = ACTIONS(1251),
        [anon_sym_GT_GT] = ACTIONS(1251),
        [anon_sym_and] = ACTIONS(1251),
        [anon_sym_or] = ACTIONS(1251),
        [anon_sym_LBRACK] = ACTIONS(1251),
        [anon_sym_RBRACK] = ACTIONS(1251),
        [anon_sym_RBRACE] = ACTIONS(1251),
        [sym_comment] = ACTIONS(77),
        [sym__newline] = ACTIONS(1251),
    },
    [720] = {
        [sym__expression] = STATE(110),
        [sym_binary_operator] = STATE(43),
        [sym_unary_operator] = STATE(43),
        [sym_subscript] = STATE(43),
        [sym_call] = STATE(43),
        [sym_keyword_argument] = STATE(111),
        [sym_dictionary_splat_argument] = STATE(722),
        [sym_list] = STATE(43),
        [sym_list_comprehension] = STATE(43),
        [sym_dictionary] = STATE(43),
        [sym_dictionary_comprehension] = STATE(43),
        [sym_set] = STATE(43),
        [sym_set_comprehension] = STATE(43),
        [anon_sym_STAR_STAR] = ACTIONS(229),
        [anon_sym_not] = ACTIONS(231),
        [anon_sym_LBRACK] = ACTIONS(127),
        [anon_sym_LBRACE] = ACTIONS(129),
        [sym_number] = ACTIONS(131),
        [sym_identifier] = ACTIONS(233),
        [sym_comment] = ACTIONS(77),
    },
    [721] = {
        [anon_sym_COMMA] = ACTIONS(1761),
        [anon_sym_COLON] = ACTIONS(1761),
        [anon_sym_for] = ACTIONS(1761),
        [anon_sym_in] = ACTIONS(1761),
        [anon_sym_as] = ACTIONS(1761),
        [anon_sym_LPAREN] = ACTIONS(1761),
        [anon_sym_RPAREN] = ACTIONS(1761),
        [anon_sym_STAR] = ACTIONS(1764),
        [anon_sym_PLUS] = ACTIONS(1761),
        [anon_sym_DASH] = ACTIONS(1761),
        [anon_sym_SLASH] = ACTIONS(1761),
        [anon_sym_STAR_STAR] = ACTIONS(1761),
        [anon_sym_PIPE] = ACTIONS(1761),
        [anon_sym_AMP] = ACTIONS(1761),
        [anon_sym_CARET] = ACTIONS(1761),
        [anon_sym_LT_LT] = ACTIONS(1761),
        [anon_sym_GT_GT] = ACTIONS(1761),
        [anon_sym_and] = ACTIONS(1761),
        [anon_sym_or] = ACTIONS(1761),
        [anon_sym_LBRACK] = ACTIONS(1761),
        [anon_sym_RBRACK] = ACTIONS(1761),
        [anon_sym_RBRACE] = ACTIONS(1761),
        [sym_comment] = ACTIONS(77),
        [sym__newline] = ACTIONS(1761),
    },
    [722] = {
        [anon_sym_RPAREN] = ACTIONS(1767),
        [sym_comment] = ACTIONS(77),
    },
    [723] = {
        [anon_sym_COMMA] = ACTIONS(1769),
        [anon_sym_COLON] = ACTIONS(1769),
        [anon_sym_for] = ACTIONS(1769),
        [anon_sym_in] = ACTIONS(1769),
        [anon_sym_as] = ACTIONS(1769),
        [anon_sym_LPAREN] = ACTIONS(1769),
        [anon_sym_RPAREN] = ACTIONS(1769),
        [anon_sym_STAR] = ACTIONS(1772),
        [anon_sym_PLUS] = ACTIONS(1769),
        [anon_sym_DASH] = ACTIONS(1769),
        [anon_sym_SLASH] = ACTIONS(1769),
        [anon_sym_STAR_STAR] = ACTIONS(1769),
        [anon_sym_PIPE] = ACTIONS(1769),
        [anon_sym_AMP] = ACTIONS(1769),
        [anon_sym_CARET] = ACTIONS(1769),
        [anon_sym_LT_LT] = ACTIONS(1769),
        [anon_sym_GT_GT] = ACTIONS(1769),
        [anon_sym_and] = ACTIONS(1769),
        [anon_sym_or] = ACTIONS(1769),
        [anon_sym_LBRACK] = ACTIONS(1769),
        [anon_sym_RBRACK] = ACTIONS(1769),
        [anon_sym_RBRACE] = ACTIONS(1769),
        [sym_comment] = ACTIONS(77),
        [sym__newline] = ACTIONS(1769),
    },
    [724] = {
        [anon_sym_RPAREN] = ACTIONS(1711),
        [anon_sym_STAR] = ACTIONS(1775),
        [anon_sym_STAR_STAR] = ACTIONS(1778),
        [anon_sym_not] = ACTIONS(1775),
        [anon_sym_LBRACK] = ACTIONS(1778),
        [anon_sym_LBRACE] = ACTIONS(1778),
        [sym_number] = ACTIONS(1775),
        [sym_identifier] = ACTIONS(1781),
        [sym_comment] = ACTIONS(77),
    },
    [725] = {
        [sym__expression] = STATE(748),
        [sym_binary_operator] = STATE(17),
        [sym_unary_operator] = STATE(17),
        [sym_subscript] = STATE(17),
        [sym_call] = STATE(17),
        [sym_list] = STATE(17),
        [sym_list_comprehension] = STATE(17),
        [sym_dictionary] = STATE(17),
        [sym_dictionary_comprehension] = STATE(17),
        [sym_set] = STATE(17),
        [sym_set_comprehension] = STATE(17),
        [anon_sym_RPAREN] = ACTIONS(1711),
        [anon_sym_STAR] = ACTIONS(1775),
        [anon_sym_STAR_STAR] = ACTIONS(1778),
        [anon_sym_not] = ACTIONS(1784),
        [anon_sym_LBRACK] = ACTIONS(1209),
        [anon_sym_DOT_DOT_DOT] = ACTIONS(265),
        [anon_sym_RBRACK] = ACTIONS(1788),
        [anon_sym_LBRACE] = ACTIONS(1217),
        [anon_sym_RBRACE] = ACTIONS(703),
        [sym_number] = ACTIONS(1223),
        [sym_identifier] = ACTIONS(1790),
        [sym_comment] = ACTIONS(77),
    },
    [726] = {
        [sym__simple_statement] = STATE(690),
        [sym_print_statement] = STATE(5),
        [sym_expression_statement] = STATE(5),
        [sym_return_statement] = STATE(5),
        [sym_delete_statement] = STATE(5),
        [sym__suite] = STATE(740),
        [sym__expression] = STATE(741),
        [sym_binary_operator] = STATE(17),
        [sym_unary_operator] = STATE(17),
        [sym_subscript] = STATE(17),
        [sym_call] = STATE(17),
        [sym_list] = STATE(17),
        [sym_list_comprehension] = STATE(17),
        [sym_dictionary] = STATE(17),
        [sym_dictionary_comprehension] = STATE(17),
        [sym_set] = STATE(17),
        [sym_set_comprehension] = STATE(17),
        [anon_sym_print] = ACTIONS(87),
        [anon_sym_return] = ACTIONS(89),
        [anon_sym_del] = ACTIONS(91),
        [sym_pass_statement] = ACTIONS(93),
        [sym_break_statement] = ACTIONS(93),
        [sym_continue_statement] = ACTIONS(93),
        [anon_sym_not] = ACTIONS(1233),
        [anon_sym_LBRACK] = ACTIONS(113),
        [anon_sym_LBRACE] = ACTIONS(115),
        [sym_number] = ACTIONS(117),
        [sym_identifier] = ACTIONS(119),
        [sym_comment] = ACTIONS(77),
        [sym__indent] = ACTIONS(1235),
    },
    [727] = {
        [sym_expression_list] = STATE(732),
        [sym__expression] = STATE(164),
        [sym_binary_operator] = STATE(43),
        [sym_unary_operator] = STATE(43),
        [sym_subscript] = STATE(43),
        [sym_call] = STATE(43),
        [sym_list] = STATE(43),
        [sym_list_comprehension] = STATE(43),
        [sym_dictionary] = STATE(43),
        [sym_dictionary_comprehension] = STATE(43),
        [sym_set] = STATE(43),
        [sym_set_comprehension] = STATE(43),
        [anon_sym_not] = ACTIONS(135),
        [anon_sym_LBRACK] = ACTIONS(127),
        [anon_sym_LBRACE] = ACTIONS(129),
        [sym_number] = ACTIONS(131),
        [sym_identifier] = ACTIONS(133),
        [sym_comment] = ACTIONS(77),
    },
    [728] = {
        [anon_sym_COMMA] = ACTIONS(1761),
        [anon_sym_COLON] = ACTIONS(1761),
        [anon_sym_for] = ACTIONS(1761),
        [anon_sym_in] = ACTIONS(1761),
        [anon_sym_as] = ACTIONS(1761),
        [anon_sym_LPAREN] = ACTIONS(1761),
        [anon_sym_RPAREN] = ACTIONS(1761),
        [anon_sym_STAR] = ACTIONS(1764),
        [anon_sym_PLUS] = ACTIONS(1761),
        [anon_sym_DASH] = ACTIONS(1761),
        [anon_sym_SLASH] = ACTIONS(1761),
        [anon_sym_STAR_STAR] = ACTIONS(1761),
        [anon_sym_PIPE] = ACTIONS(1761),
        [anon_sym_AMP] = ACTIONS(1761),
        [anon_sym_CARET] = ACTIONS(1761),
        [anon_sym_LT_LT] = ACTIONS(1761),
        [anon_sym_GT_GT] = ACTIONS(1761),
        [anon_sym_and] = ACTIONS(1761),
        [anon_sym_or] = ACTIONS(1761),
        [anon_sym_LBRACK] = ACTIONS(1761),
        [anon_sym_RBRACK] = ACTIONS(1761),
        [anon_sym_RBRACE] = ACTIONS(1761),
        [sym_comment] = ACTIONS(77),
        [sym__newline] = ACTIONS(1794),
    },
    [729] = {
        [anon_sym_COMMA] = ACTIONS(1798),
        [anon_sym_COLON] = ACTIONS(1798),
        [anon_sym_for] = ACTIONS(1798),
        [anon_sym_in] = ACTIONS(1798),
        [anon_sym_as] = ACTIONS(1798),
        [anon_sym_LPAREN] = ACTIONS(1798),
        [anon_sym_RPAREN] = ACTIONS(1798),
        [anon_sym_STAR] = ACTIONS(1802),
        [anon_sym_PLUS] = ACTIONS(1798),
        [anon_sym_DASH] = ACTIONS(1798),
        [anon_sym_SLASH] = ACTIONS(1798),
        [anon_sym_STAR_STAR] = ACTIONS(1798),
        [anon_sym_PIPE] = ACTIONS(1798),
        [anon_sym_AMP] = ACTIONS(1798),
        [anon_sym_CARET] = ACTIONS(1798),
        [anon_sym_LT_LT] = ACTIONS(1798),
        [anon_sym_GT_GT] = ACTIONS(1798),
        [anon_sym_and] = ACTIONS(1798),
        [anon_sym_or] = ACTIONS(1798),
        [anon_sym_LBRACK] = ACTIONS(1798),
        [anon_sym_RBRACK] = ACTIONS(1798),
        [anon_sym_RBRACE] = ACTIONS(1798),
        [sym_comment] = ACTIONS(77),
        [sym__newline] = ACTIONS(1798),
    },
    [730] = {
        [anon_sym_COMMA] = ACTIONS(1806),
        [anon_sym_COLON] = ACTIONS(1806),
        [anon_sym_for] = ACTIONS(1806),
        [anon_sym_in] = ACTIONS(1806),
        [anon_sym_as] = ACTIONS(1806),
        [anon_sym_LPAREN] = ACTIONS(1806),
        [anon_sym_RPAREN] = ACTIONS(1806),
        [anon_sym_STAR] = ACTIONS(1810),
        [anon_sym_PLUS] = ACTIONS(1806),
        [anon_sym_DASH] = ACTIONS(1806),
        [anon_sym_SLASH] = ACTIONS(1806),
        [anon_sym_STAR_STAR] = ACTIONS(1806),
        [anon_sym_PIPE] = ACTIONS(1806),
        [anon_sym_AMP] = ACTIONS(1806),
        [anon_sym_CARET] = ACTIONS(1806),
        [anon_sym_LT_LT] = ACTIONS(1806),
        [anon_sym_GT_GT] = ACTIONS(1806),
        [anon_sym_and] = ACTIONS(1806),
        [anon_sym_or] = ACTIONS(1806),
        [anon_sym_LBRACK] = ACTIONS(1806),
        [anon_sym_RBRACK] = ACTIONS(1806),
        [anon_sym_RBRACE] = ACTIONS(1806),
        [sym_comment] = ACTIONS(77),
        [sym__newline] = ACTIONS(1806),
    },
    [731] = {
        [anon_sym_COMMA] = ACTIONS(303),
        [anon_sym_COLON] = ACTIONS(303),
        [anon_sym_for] = ACTIONS(303),
        [anon_sym_in] = ACTIONS(303),
        [anon_sym_as] = ACTIONS(303),
        [anon_sym_LPAREN] = ACTIONS(1733),
        [anon_sym_RPAREN] = ACTIONS(303),
        [anon_sym_STAR] = ACTIONS(1814),
        [anon_sym_PLUS] = ACTIONS(1817),
        [anon_sym_DASH] = ACTIONS(1817),
        [anon_sym_SLASH] = ACTIONS(1817),
        [anon_sym_STAR_STAR] = ACTIONS(1817),
        [anon_sym_PIPE] = ACTIONS(1817),
        [anon_sym_AMP] = ACTIONS(1817),
        [anon_sym_CARET] = ACTIONS(1817),
        [anon_sym_LT_LT] = ACTIONS(1817),
        [anon_sym_GT_GT] = ACTIONS(1817),
        [anon_sym_and] = ACTIONS(1817),
        [anon_sym_or] = ACTIONS(1817),
        [anon_sym_LBRACK] = ACTIONS(1742),
        [anon_sym_RBRACK] = ACTIONS(303),
        [anon_sym_RBRACE] = ACTIONS(303),
        [sym_comment] = ACTIONS(77),
        [sym__newline] = ACTIONS(303),
    },
    [732] = {
        [anon_sym_in] = ACTIONS(1820),
        [sym_comment] = ACTIONS(77),
    },
    [733] = {
        [sym__expression] = STATE(735),
        [sym_binary_operator] = STATE(43),
        [sym_unary_operator] = STATE(43),
        [sym_subscript] = STATE(43),
        [sym_call] = STATE(43),
        [sym_list] = STATE(43),
        [sym_list_comprehension] = STATE(43),
        [sym_dictionary] = STATE(43),
        [sym_dictionary_comprehension] = STATE(43),
        [sym_set] = STATE(43),
        [sym_set_comprehension] = STATE(43),
        [anon_sym_not] = ACTIONS(1822),
        [anon_sym_LBRACK] = ACTIONS(127),
        [anon_sym_LBRACE] = ACTIONS(129),
        [sym_number] = ACTIONS(131),
        [sym_identifier] = ACTIONS(133),
        [sym_comment] = ACTIONS(77),
    },
    [734] = {
        [sym__expression] = STATE(738),
        [sym_binary_operator] = STATE(43),
        [sym_unary_operator] = STATE(43),
        [sym_subscript] = STATE(43),
        [sym_call] = STATE(43),
        [sym_list] = STATE(43),
        [sym_list_comprehension] = STATE(43),
        [sym_dictionary] = STATE(43),
        [sym_dictionary_comprehension] = STATE(43),
        [sym_set] = STATE(43),
        [sym_set_comprehension] = STATE(43),
        [anon_sym_not] = ACTIONS(1822),
        [anon_sym_LBRACK] = ACTIONS(127),
        [anon_sym_LBRACE] = ACTIONS(129),
        [sym_number] = ACTIONS(131),
        [sym_identifier] = ACTIONS(133),
        [sym_comment] = ACTIONS(77),
    },
    [735] = {
        [anon_sym_LPAREN] = ACTIONS(247),
        [anon_sym_STAR] = ACTIONS(1824),
        [anon_sym_PLUS] = ACTIONS(1826),
        [anon_sym_DASH] = ACTIONS(1826),
        [anon_sym_SLASH] = ACTIONS(1826),
        [anon_sym_STAR_STAR] = ACTIONS(1826),
        [anon_sym_PIPE] = ACTIONS(1826),
        [anon_sym_AMP] = ACTIONS(1826),
        [anon_sym_CARET] = ACTIONS(1826),
        [anon_sym_LT_LT] = ACTIONS(1826),
        [anon_sym_GT_GT] = ACTIONS(1826),
        [anon_sym_and] = ACTIONS(1826),
        [anon_sym_or] = ACTIONS(1826),
        [anon_sym_LBRACK] = ACTIONS(263),
        [anon_sym_RBRACK] = ACTIONS(727),
        [anon_sym_RBRACE] = ACTIONS(711),
        [sym_comment] = ACTIONS(77),
    },
    [736] = {
        [sym__expression] = STATE(737),
        [sym_binary_operator] = STATE(43),
        [sym_unary_operator] = STATE(43),
        [sym_subscript] = STATE(43),
        [sym_call] = STATE(43),
        [sym_list] = STATE(43),
        [sym_list_comprehension] = STATE(43),
        [sym_dictionary] = STATE(43),
        [sym_dictionary_comprehension] = STATE(43),
        [sym_set] = STATE(43),
        [sym_set_comprehension] = STATE(43),
        [anon_sym_not] = ACTIONS(1822),
        [anon_sym_LBRACK] = ACTIONS(127),
        [anon_sym_LBRACE] = ACTIONS(129),
        [sym_number] = ACTIONS(131),
        [sym_identifier] = ACTIONS(133),
        [sym_comment] = ACTIONS(77),
    },
    [737] = {
        [anon_sym_LPAREN] = ACTIONS(1828),
        [anon_sym_STAR] = ACTIONS(1831),
        [anon_sym_PLUS] = ACTIONS(1834),
        [anon_sym_DASH] = ACTIONS(1834),
        [anon_sym_SLASH] = ACTIONS(1834),
        [anon_sym_STAR_STAR] = ACTIONS(1834),
        [anon_sym_PIPE] = ACTIONS(1834),
        [anon_sym_AMP] = ACTIONS(1834),
        [anon_sym_CARET] = ACTIONS(1834),
        [anon_sym_LT_LT] = ACTIONS(1834),
        [anon_sym_GT_GT] = ACTIONS(1834),
        [anon_sym_and] = ACTIONS(1834),
        [anon_sym_or] = ACTIONS(1834),
        [anon_sym_LBRACK] = ACTIONS(1837),
        [anon_sym_RBRACK] = ACTIONS(303),
        [anon_sym_RBRACE] = ACTIONS(303),
        [sym_comment] = ACTIONS(77),
    },
    [738] = {
        [anon_sym_LPAREN] = ACTIONS(1840),
        [anon_sym_STAR] = ACTIONS(1843),
        [anon_sym_PLUS] = ACTIONS(1846),
        [anon_sym_DASH] = ACTIONS(1846),
        [anon_sym_SLASH] = ACTIONS(1846),
        [anon_sym_STAR_STAR] = ACTIONS(1846),
        [anon_sym_PIPE] = ACTIONS(1846),
        [anon_sym_AMP] = ACTIONS(1846),
        [anon_sym_CARET] = ACTIONS(1846),
        [anon_sym_LT_LT] = ACTIONS(1846),
        [anon_sym_GT_GT] = ACTIONS(1846),
        [anon_sym_and] = ACTIONS(1846),
        [anon_sym_or] = ACTIONS(1846),
        [anon_sym_LBRACK] = ACTIONS(1849),
        [anon_sym_RBRACK] = ACTIONS(631),
        [anon_sym_RBRACE] = ACTIONS(631),
        [sym_comment] = ACTIONS(77),
    },
    [739] = {
        [sym__expression] = STATE(746),
        [sym_binary_operator] = STATE(17),
        [sym_unary_operator] = STATE(17),
        [sym_subscript] = STATE(17),
        [sym_call] = STATE(17),
        [sym_list] = STATE(17),
        [sym_list_comprehension] = STATE(17),
        [sym_dictionary] = STATE(17),
        [sym_dictionary_comprehension] = STATE(17),
        [sym_set] = STATE(17),
        [sym_set_comprehension] = STATE(17),
        [anon_sym_not] = ACTIONS(1233),
        [anon_sym_LBRACK] = ACTIONS(113),
        [anon_sym_LBRACE] = ACTIONS(115),
        [sym_number] = ACTIONS(117),
        [sym_identifier] = ACTIONS(119),
        [sym_comment] = ACTIONS(77),
    },
    [740] = {
        [sym_elif_clause] = STATE(744),
        [sym_else_clause] = STATE(745),
        [aux_sym_if_statement_repeat1] = STATE(679),
        [ts_builtin_sym_end] = ACTIONS(1852),
        [anon_sym_SEMI] = ACTIONS(1852),
        [anon_sym_print] = ACTIONS(1858),
        [anon_sym_return] = ACTIONS(1858),
        [anon_sym_del] = ACTIONS(1858),
        [sym_pass_statement] = ACTIONS(1858),
        [sym_break_statement] = ACTIONS(1858),
        [sym_continue_statement] = ACTIONS(1858),
        [anon_sym_if] = ACTIONS(1858),
        [anon_sym_elif] = ACTIONS(1519),
        [anon_sym_else] = ACTIONS(1522),
        [anon_sym_for] = ACTIONS(1858),
        [anon_sym_while] = ACTIONS(1858),
        [anon_sym_try] = ACTIONS(1858),
        [anon_sym_except] = ACTIONS(1864),
        [anon_sym_finally] = ACTIONS(1864),
        [anon_sym_with] = ACTIONS(1858),
        [anon_sym_def] = ACTIONS(1858),
        [anon_sym_class] = ACTIONS(1858),
        [anon_sym_AT] = ACTIONS(1852),
        [anon_sym_not] = ACTIONS(1858),
        [anon_sym_LBRACK] = ACTIONS(1852),
        [anon_sym_LBRACE] = ACTIONS(1852),
        [sym_number] = ACTIONS(1858),
        [sym_identifier] = ACTIONS(1867),
        [sym_comment] = ACTIONS(77),
        [sym__newline] = ACTIONS(1852),
        [sym__dedent] = ACTIONS(1852),
    },
    [741] = {
        [anon_sym_COMMA] = ACTIONS(455),
        [anon_sym_for] = ACTIONS(455),
        [anon_sym_LPAREN] = ACTIONS(183),
        [anon_sym_STAR] = ACTIONS(1873),
        [anon_sym_PLUS] = ACTIONS(1875),
        [anon_sym_DASH] = ACTIONS(1875),
        [anon_sym_SLASH] = ACTIONS(1875),
        [anon_sym_STAR_STAR] = ACTIONS(1875),
        [anon_sym_PIPE] = ACTIONS(1875),
        [anon_sym_AMP] = ACTIONS(1875),
        [anon_sym_CARET] = ACTIONS(1875),
        [anon_sym_LT_LT] = ACTIONS(1875),
        [anon_sym_GT_GT] = ACTIONS(1875),
        [anon_sym_and] = ACTIONS(1875),
        [anon_sym_or] = ACTIONS(1875),
        [anon_sym_LBRACK] = ACTIONS(199),
        [anon_sym_RBRACE] = ACTIONS(455),
        [sym_comment] = ACTIONS(77),
        [sym__newline] = ACTIONS(201),
    },
    [742] = {
        [sym__expression] = STATE(743),
        [sym_binary_operator] = STATE(17),
        [sym_unary_operator] = STATE(17),
        [sym_subscript] = STATE(17),
        [sym_call] = STATE(17),
        [sym_list] = STATE(17),
        [sym_list_comprehension] = STATE(17),
        [sym_dictionary] = STATE(17),
        [sym_dictionary_comprehension] = STATE(17),
        [sym_set] = STATE(17),
        [sym_set_comprehension] = STATE(17),
        [anon_sym_not] = ACTIONS(1233),
        [anon_sym_LBRACK] = ACTIONS(113),
        [anon_sym_LBRACE] = ACTIONS(115),
        [sym_number] = ACTIONS(117),
        [sym_identifier] = ACTIONS(119),
        [sym_comment] = ACTIONS(77),
    },
    [743] = {
        [anon_sym_COMMA] = ACTIONS(303),
        [anon_sym_for] = ACTIONS(303),
        [anon_sym_LPAREN] = ACTIONS(1733),
        [anon_sym_STAR] = ACTIONS(1877),
        [anon_sym_PLUS] = ACTIONS(1880),
        [anon_sym_DASH] = ACTIONS(1880),
        [anon_sym_SLASH] = ACTIONS(1880),
        [anon_sym_STAR_STAR] = ACTIONS(1880),
        [anon_sym_PIPE] = ACTIONS(1880),
        [anon_sym_AMP] = ACTIONS(1880),
        [anon_sym_CARET] = ACTIONS(1880),
        [anon_sym_LT_LT] = ACTIONS(1880),
        [anon_sym_GT_GT] = ACTIONS(1880),
        [anon_sym_and] = ACTIONS(1880),
        [anon_sym_or] = ACTIONS(1880),
        [anon_sym_LBRACK] = ACTIONS(1742),
        [anon_sym_RBRACE] = ACTIONS(303),
        [sym_comment] = ACTIONS(77),
        [sym__newline] = ACTIONS(303),
    },
    [744] = {
        [ts_builtin_sym_end] = ACTIONS(1099),
        [anon_sym_SEMI] = ACTIONS(1099),
        [anon_sym_print] = ACTIONS(1097),
        [anon_sym_return] = ACTIONS(1097),
        [anon_sym_del] = ACTIONS(1097),
        [sym_pass_statement] = ACTIONS(1097),
        [sym_break_statement] = ACTIONS(1097),
        [sym_continue_statement] = ACTIONS(1097),
        [anon_sym_if] = ACTIONS(1097),
        [anon_sym_elif] = ACTIONS(1097),
        [anon_sym_else] = ACTIONS(1097),
        [anon_sym_for] = ACTIONS(1097),
        [anon_sym_while] = ACTIONS(1097),
        [anon_sym_try] = ACTIONS(1097),
        [anon_sym_with] = ACTIONS(1097),
        [anon_sym_def] = ACTIONS(1097),
        [anon_sym_class] = ACTIONS(1097),
        [anon_sym_AT] = ACTIONS(1099),
        [anon_sym_not] = ACTIONS(1097),
        [anon_sym_LBRACK] = ACTIONS(1099),
        [anon_sym_LBRACE] = ACTIONS(1099),
        [sym_number] = ACTIONS(1097),
        [sym_identifier] = ACTIONS(1101),
        [sym_comment] = ACTIONS(77),
        [sym__newline] = ACTIONS(1099),
        [sym__dedent] = ACTIONS(1099),
    },
    [745] = {
        [ts_builtin_sym_end] = ACTIONS(1883),
        [anon_sym_SEMI] = ACTIONS(1883),
        [anon_sym_print] = ACTIONS(1886),
        [anon_sym_return] = ACTIONS(1886),
        [anon_sym_del] = ACTIONS(1886),
        [sym_pass_statement] = ACTIONS(1886),
        [sym_break_statement] = ACTIONS(1886),
        [sym_continue_statement] = ACTIONS(1886),
        [anon_sym_if] = ACTIONS(1886),
        [anon_sym_for] = ACTIONS(1886),
        [anon_sym_while] = ACTIONS(1886),
        [anon_sym_try] = ACTIONS(1886),
        [anon_sym_with] = ACTIONS(1886),
        [anon_sym_def] = ACTIONS(1886),
        [anon_sym_class] = ACTIONS(1886),
        [anon_sym_AT] = ACTIONS(1883),
        [anon_sym_not] = ACTIONS(1886),
        [anon_sym_LBRACK] = ACTIONS(1883),
        [anon_sym_LBRACE] = ACTIONS(1883),
        [sym_number] = ACTIONS(1886),
        [sym_identifier] = ACTIONS(1889),
        [sym_comment] = ACTIONS(77),
        [sym__newline] = ACTIONS(1883),
        [sym__dedent] = ACTIONS(1883),
    },
    [746] = {
        [anon_sym_COMMA] = ACTIONS(631),
        [anon_sym_for] = ACTIONS(631),
        [anon_sym_LPAREN] = ACTIONS(1745),
        [anon_sym_STAR] = ACTIONS(1892),
        [anon_sym_PLUS] = ACTIONS(1895),
        [anon_sym_DASH] = ACTIONS(1895),
        [anon_sym_SLASH] = ACTIONS(1895),
        [anon_sym_STAR_STAR] = ACTIONS(1895),
        [anon_sym_PIPE] = ACTIONS(1895),
        [anon_sym_AMP] = ACTIONS(1895),
        [anon_sym_CARET] = ACTIONS(1895),
        [anon_sym_LT_LT] = ACTIONS(1895),
        [anon_sym_GT_GT] = ACTIONS(1895),
        [anon_sym_and] = ACTIONS(1895),
        [anon_sym_or] = ACTIONS(1895),
        [anon_sym_LBRACK] = ACTIONS(1754),
        [anon_sym_RBRACE] = ACTIONS(631),
        [sym_comment] = ACTIONS(77),
        [sym__newline] = ACTIONS(631),
    },
    [747] = {
        [anon_sym_COMMA] = ACTIONS(1898),
        [anon_sym_COLON] = ACTIONS(1898),
        [anon_sym_for] = ACTIONS(1898),
        [anon_sym_in] = ACTIONS(1898),
        [anon_sym_as] = ACTIONS(1898),
        [anon_sym_LPAREN] = ACTIONS(1898),
        [anon_sym_RPAREN] = ACTIONS(1898),
        [anon_sym_STAR] = ACTIONS(1901),
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
        [anon_sym_LBRACK] = ACTIONS(1898),
        [anon_sym_RBRACK] = ACTIONS(1898),
        [anon_sym_RBRACE] = ACTIONS(1898),
        [sym_comment] = ACTIONS(77),
        [sym__newline] = ACTIONS(1898),
    },
    [748] = {
        [anon_sym_COMMA] = ACTIONS(1904),
        [anon_sym_COLON] = ACTIONS(1907),
        [anon_sym_in] = ACTIONS(497),
        [anon_sym_LPAREN] = ACTIONS(183),
        [anon_sym_RPAREN] = ACTIONS(497),
        [anon_sym_STAR] = ACTIONS(1729),
        [anon_sym_PLUS] = ACTIONS(1731),
        [anon_sym_DASH] = ACTIONS(1731),
        [anon_sym_SLASH] = ACTIONS(1731),
        [anon_sym_STAR_STAR] = ACTIONS(1731),
        [anon_sym_PIPE] = ACTIONS(1731),
        [anon_sym_AMP] = ACTIONS(1731),
        [anon_sym_CARET] = ACTIONS(1731),
        [anon_sym_LT_LT] = ACTIONS(1731),
        [anon_sym_GT_GT] = ACTIONS(1731),
        [anon_sym_and] = ACTIONS(1731),
        [anon_sym_or] = ACTIONS(1731),
        [anon_sym_LBRACK] = ACTIONS(199),
        [anon_sym_RBRACK] = ACTIONS(1904),
        [anon_sym_RBRACE] = ACTIONS(497),
        [sym_comment] = ACTIONS(77),
        [sym__newline] = ACTIONS(497),
    },
    [749] = {
        [sym__simple_statement] = STATE(690),
        [sym_print_statement] = STATE(5),
        [sym_expression_statement] = STATE(5),
        [sym_return_statement] = STATE(5),
        [sym_delete_statement] = STATE(5),
        [sym__suite] = STATE(750),
        [sym__expression] = STATE(24),
        [sym_binary_operator] = STATE(17),
        [sym_unary_operator] = STATE(17),
        [sym_subscript] = STATE(17),
        [sym_call] = STATE(17),
        [sym_list] = STATE(17),
        [sym_list_comprehension] = STATE(17),
        [sym_dictionary] = STATE(17),
        [sym_dictionary_comprehension] = STATE(17),
        [sym_set] = STATE(17),
        [sym_set_comprehension] = STATE(17),
        [anon_sym_print] = ACTIONS(87),
        [anon_sym_return] = ACTIONS(89),
        [anon_sym_del] = ACTIONS(91),
        [sym_pass_statement] = ACTIONS(93),
        [sym_break_statement] = ACTIONS(93),
        [sym_continue_statement] = ACTIONS(93),
        [anon_sym_not] = ACTIONS(111),
        [anon_sym_LBRACK] = ACTIONS(113),
        [anon_sym_LBRACE] = ACTIONS(115),
        [sym_number] = ACTIONS(117),
        [sym_identifier] = ACTIONS(119),
        [sym_comment] = ACTIONS(77),
        [sym__indent] = ACTIONS(1235),
    },
    [750] = {
        [ts_builtin_sym_end] = ACTIONS(1041),
        [anon_sym_SEMI] = ACTIONS(1041),
        [anon_sym_print] = ACTIONS(1039),
        [anon_sym_return] = ACTIONS(1039),
        [anon_sym_del] = ACTIONS(1039),
        [sym_pass_statement] = ACTIONS(1039),
        [sym_break_statement] = ACTIONS(1039),
        [sym_continue_statement] = ACTIONS(1039),
        [anon_sym_if] = ACTIONS(1039),
        [anon_sym_else] = ACTIONS(1039),
        [anon_sym_for] = ACTIONS(1039),
        [anon_sym_while] = ACTIONS(1039),
        [anon_sym_try] = ACTIONS(1039),
        [anon_sym_except] = ACTIONS(1039),
        [anon_sym_finally] = ACTIONS(1039),
        [anon_sym_with] = ACTIONS(1039),
        [anon_sym_def] = ACTIONS(1039),
        [anon_sym_class] = ACTIONS(1039),
        [anon_sym_AT] = ACTIONS(1041),
        [anon_sym_not] = ACTIONS(1039),
        [anon_sym_LBRACK] = ACTIONS(1041),
        [anon_sym_LBRACE] = ACTIONS(1041),
        [sym_number] = ACTIONS(1039),
        [sym_identifier] = ACTIONS(1043),
        [sym_comment] = ACTIONS(77),
        [sym__newline] = ACTIONS(1041),
        [sym__dedent] = ACTIONS(1041),
    },
    [751] = {
        [anon_sym_COLON] = ACTIONS(1910),
        [sym_comment] = ACTIONS(77),
    },
    [752] = {
        [sym__simple_statement] = STATE(690),
        [sym_print_statement] = STATE(5),
        [sym_expression_statement] = STATE(5),
        [sym_return_statement] = STATE(5),
        [sym_delete_statement] = STATE(5),
        [sym__suite] = STATE(753),
        [sym__expression] = STATE(24),
        [sym_binary_operator] = STATE(17),
        [sym_unary_operator] = STATE(17),
        [sym_subscript] = STATE(17),
        [sym_call] = STATE(17),
        [sym_list] = STATE(17),
        [sym_list_comprehension] = STATE(17),
        [sym_dictionary] = STATE(17),
        [sym_dictionary_comprehension] = STATE(17),
        [sym_set] = STATE(17),
        [sym_set_comprehension] = STATE(17),
        [anon_sym_print] = ACTIONS(87),
        [anon_sym_return] = ACTIONS(89),
        [anon_sym_del] = ACTIONS(91),
        [sym_pass_statement] = ACTIONS(93),
        [sym_break_statement] = ACTIONS(93),
        [sym_continue_statement] = ACTIONS(93),
        [anon_sym_not] = ACTIONS(111),
        [anon_sym_LBRACK] = ACTIONS(113),
        [anon_sym_LBRACE] = ACTIONS(115),
        [sym_number] = ACTIONS(117),
        [sym_identifier] = ACTIONS(119),
        [sym_comment] = ACTIONS(77),
        [sym__indent] = ACTIONS(1235),
    },
    [753] = {
        [ts_builtin_sym_end] = ACTIONS(793),
        [anon_sym_SEMI] = ACTIONS(793),
        [anon_sym_print] = ACTIONS(795),
        [anon_sym_return] = ACTIONS(795),
        [anon_sym_del] = ACTIONS(795),
        [sym_pass_statement] = ACTIONS(795),
        [sym_break_statement] = ACTIONS(795),
        [sym_continue_statement] = ACTIONS(795),
        [anon_sym_if] = ACTIONS(795),
        [anon_sym_for] = ACTIONS(795),
        [anon_sym_while] = ACTIONS(795),
        [anon_sym_try] = ACTIONS(795),
        [anon_sym_with] = ACTIONS(795),
        [anon_sym_def] = ACTIONS(795),
        [anon_sym_class] = ACTIONS(795),
        [anon_sym_AT] = ACTIONS(793),
        [anon_sym_not] = ACTIONS(795),
        [anon_sym_LBRACK] = ACTIONS(793),
        [anon_sym_LBRACE] = ACTIONS(793),
        [sym_number] = ACTIONS(795),
        [sym_identifier] = ACTIONS(797),
        [sym_comment] = ACTIONS(77),
        [sym__newline] = ACTIONS(793),
        [sym__dedent] = ACTIONS(793),
    },
    [754] = {
        [ts_builtin_sym_end] = ACTIONS(1912),
        [anon_sym_SEMI] = ACTIONS(1912),
        [anon_sym_print] = ACTIONS(1916),
        [anon_sym_return] = ACTIONS(1916),
        [anon_sym_del] = ACTIONS(1916),
        [sym_pass_statement] = ACTIONS(1916),
        [sym_break_statement] = ACTIONS(1916),
        [sym_continue_statement] = ACTIONS(1916),
        [anon_sym_if] = ACTIONS(1916),
        [anon_sym_for] = ACTIONS(1916),
        [anon_sym_while] = ACTIONS(1916),
        [anon_sym_try] = ACTIONS(1916),
        [anon_sym_with] = ACTIONS(1916),
        [anon_sym_def] = ACTIONS(1916),
        [anon_sym_class] = ACTIONS(1916),
        [anon_sym_AT] = ACTIONS(1912),
        [anon_sym_not] = ACTIONS(1916),
        [anon_sym_LBRACK] = ACTIONS(1912),
        [anon_sym_LBRACE] = ACTIONS(1912),
        [sym_number] = ACTIONS(1916),
        [sym_identifier] = ACTIONS(1920),
        [sym_comment] = ACTIONS(77),
        [sym__newline] = ACTIONS(1912),
        [sym__dedent] = ACTIONS(1912),
    },
    [755] = {
        [ts_builtin_sym_end] = ACTIONS(985),
        [anon_sym_SEMI] = ACTIONS(985),
        [anon_sym_print] = ACTIONS(983),
        [anon_sym_return] = ACTIONS(983),
        [anon_sym_del] = ACTIONS(983),
        [sym_pass_statement] = ACTIONS(983),
        [sym_break_statement] = ACTIONS(983),
        [sym_continue_statement] = ACTIONS(983),
        [anon_sym_if] = ACTIONS(983),
        [anon_sym_else] = ACTIONS(983),
        [anon_sym_for] = ACTIONS(983),
        [anon_sym_while] = ACTIONS(983),
        [anon_sym_try] = ACTIONS(983),
        [anon_sym_except] = ACTIONS(983),
        [anon_sym_finally] = ACTIONS(983),
        [anon_sym_with] = ACTIONS(983),
        [anon_sym_def] = ACTIONS(983),
        [anon_sym_class] = ACTIONS(983),
        [anon_sym_AT] = ACTIONS(985),
        [anon_sym_not] = ACTIONS(983),
        [anon_sym_LBRACK] = ACTIONS(985),
        [anon_sym_LBRACE] = ACTIONS(985),
        [sym_number] = ACTIONS(983),
        [sym_identifier] = ACTIONS(987),
        [sym_comment] = ACTIONS(77),
        [sym__newline] = ACTIONS(985),
        [sym__dedent] = ACTIONS(985),
    },
    [756] = {
        [ts_builtin_sym_end] = ACTIONS(991),
        [anon_sym_SEMI] = ACTIONS(991),
        [anon_sym_print] = ACTIONS(989),
        [anon_sym_return] = ACTIONS(989),
        [anon_sym_del] = ACTIONS(989),
        [sym_pass_statement] = ACTIONS(989),
        [sym_break_statement] = ACTIONS(989),
        [sym_continue_statement] = ACTIONS(989),
        [anon_sym_if] = ACTIONS(989),
        [anon_sym_for] = ACTIONS(989),
        [anon_sym_while] = ACTIONS(989),
        [anon_sym_try] = ACTIONS(989),
        [anon_sym_with] = ACTIONS(989),
        [anon_sym_def] = ACTIONS(989),
        [anon_sym_class] = ACTIONS(989),
        [anon_sym_AT] = ACTIONS(991),
        [anon_sym_not] = ACTIONS(989),
        [anon_sym_LBRACK] = ACTIONS(991),
        [anon_sym_LBRACE] = ACTIONS(991),
        [sym_number] = ACTIONS(989),
        [sym_identifier] = ACTIONS(993),
        [sym_comment] = ACTIONS(77),
        [sym__newline] = ACTIONS(991),
        [sym__dedent] = ACTIONS(991),
    },
    [757] = {
        [anon_sym_COLON] = ACTIONS(1924),
        [sym_comment] = ACTIONS(77),
    },
    [758] = {
        [sym_dictionary_splat_parameter] = STATE(760),
        [anon_sym_STAR] = ACTIONS(885),
        [sym_comment] = ACTIONS(77),
    },
    [759] = {
        [anon_sym_COLON] = ACTIONS(1929),
        [sym_comment] = ACTIONS(77),
    },
    [760] = {
        [anon_sym_RPAREN] = ACTIONS(1932),
        [sym_comment] = ACTIONS(77),
    },
    [761] = {
        [anon_sym_COLON] = ACTIONS(1934),
        [sym_comment] = ACTIONS(77),
    },
    [762] = {
        [anon_sym_RPAREN] = ACTIONS(1937),
        [anon_sym_STAR] = ACTIONS(1939),
        [sym_identifier] = ACTIONS(1942),
        [sym_comment] = ACTIONS(77),
    },
    [763] = {
        [anon_sym_COLON] = ACTIONS(1945),
        [sym_comment] = ACTIONS(77),
    },
    [764] = {
        [sym__simple_statement] = STATE(690),
        [sym_print_statement] = STATE(5),
        [sym_expression_statement] = STATE(5),
        [sym_return_statement] = STATE(5),
        [sym_delete_statement] = STATE(5),
        [sym__suite] = STATE(765),
        [sym__expression] = STATE(24),
        [sym_binary_operator] = STATE(17),
        [sym_unary_operator] = STATE(17),
        [sym_subscript] = STATE(17),
        [sym_call] = STATE(17),
        [sym_list] = STATE(17),
        [sym_list_comprehension] = STATE(17),
        [sym_dictionary] = STATE(17),
        [sym_dictionary_comprehension] = STATE(17),
        [sym_set] = STATE(17),
        [sym_set_comprehension] = STATE(17),
        [anon_sym_print] = ACTIONS(87),
        [anon_sym_return] = ACTIONS(89),
        [anon_sym_del] = ACTIONS(91),
        [sym_pass_statement] = ACTIONS(93),
        [sym_break_statement] = ACTIONS(93),
        [sym_continue_statement] = ACTIONS(93),
        [anon_sym_not] = ACTIONS(111),
        [anon_sym_LBRACK] = ACTIONS(113),
        [anon_sym_LBRACE] = ACTIONS(115),
        [sym_number] = ACTIONS(117),
        [sym_identifier] = ACTIONS(119),
        [sym_comment] = ACTIONS(77),
        [sym__indent] = ACTIONS(1235),
    },
    [765] = {
        [ts_builtin_sym_end] = ACTIONS(857),
        [anon_sym_SEMI] = ACTIONS(857),
        [anon_sym_print] = ACTIONS(855),
        [anon_sym_return] = ACTIONS(855),
        [anon_sym_del] = ACTIONS(855),
        [sym_pass_statement] = ACTIONS(855),
        [sym_break_statement] = ACTIONS(855),
        [sym_continue_statement] = ACTIONS(855),
        [anon_sym_if] = ACTIONS(855),
        [anon_sym_for] = ACTIONS(855),
        [anon_sym_while] = ACTIONS(855),
        [anon_sym_try] = ACTIONS(855),
        [anon_sym_with] = ACTIONS(855),
        [anon_sym_def] = ACTIONS(855),
        [anon_sym_class] = ACTIONS(855),
        [anon_sym_AT] = ACTIONS(857),
        [anon_sym_not] = ACTIONS(855),
        [anon_sym_LBRACK] = ACTIONS(857),
        [anon_sym_LBRACE] = ACTIONS(857),
        [sym_number] = ACTIONS(855),
        [sym_identifier] = ACTIONS(859),
        [sym_comment] = ACTIONS(77),
        [sym__newline] = ACTIONS(857),
        [sym__dedent] = ACTIONS(857),
    },
    [766] = {
        [sym__simple_statement] = STATE(690),
        [sym_print_statement] = STATE(5),
        [sym_expression_statement] = STATE(5),
        [sym_return_statement] = STATE(5),
        [sym_delete_statement] = STATE(5),
        [sym__suite] = STATE(767),
        [sym__expression] = STATE(24),
        [sym_binary_operator] = STATE(17),
        [sym_unary_operator] = STATE(17),
        [sym_subscript] = STATE(17),
        [sym_call] = STATE(17),
        [sym_list] = STATE(17),
        [sym_list_comprehension] = STATE(17),
        [sym_dictionary] = STATE(17),
        [sym_dictionary_comprehension] = STATE(17),
        [sym_set] = STATE(17),
        [sym_set_comprehension] = STATE(17),
        [anon_sym_print] = ACTIONS(87),
        [anon_sym_return] = ACTIONS(89),
        [anon_sym_del] = ACTIONS(91),
        [sym_pass_statement] = ACTIONS(93),
        [sym_break_statement] = ACTIONS(93),
        [sym_continue_statement] = ACTIONS(93),
        [anon_sym_not] = ACTIONS(111),
        [anon_sym_LBRACK] = ACTIONS(113),
        [anon_sym_LBRACE] = ACTIONS(115),
        [sym_number] = ACTIONS(117),
        [sym_identifier] = ACTIONS(119),
        [sym_comment] = ACTIONS(77),
        [sym__indent] = ACTIONS(1235),
    },
    [767] = {
        [ts_builtin_sym_end] = ACTIONS(967),
        [anon_sym_SEMI] = ACTIONS(967),
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
        [sym_comment] = ACTIONS(77),
        [sym__newline] = ACTIONS(967),
        [sym__dedent] = ACTIONS(967),
    },
    [768] = {
        [ts_builtin_sym_end] = ACTIONS(1370),
        [anon_sym_SEMI] = ACTIONS(1370),
        [anon_sym_print] = ACTIONS(1373),
        [anon_sym_return] = ACTIONS(1373),
        [anon_sym_del] = ACTIONS(1373),
        [sym_pass_statement] = ACTIONS(1373),
        [sym_break_statement] = ACTIONS(1373),
        [sym_continue_statement] = ACTIONS(1373),
        [anon_sym_if] = ACTIONS(1373),
        [anon_sym_elif] = ACTIONS(801),
        [anon_sym_else] = ACTIONS(801),
        [anon_sym_for] = ACTIONS(1373),
        [anon_sym_while] = ACTIONS(1373),
        [anon_sym_try] = ACTIONS(1373),
        [anon_sym_except] = ACTIONS(801),
        [anon_sym_finally] = ACTIONS(801),
        [anon_sym_with] = ACTIONS(1373),
        [anon_sym_def] = ACTIONS(1373),
        [anon_sym_class] = ACTIONS(1373),
        [anon_sym_AT] = ACTIONS(1370),
        [anon_sym_not] = ACTIONS(1373),
        [anon_sym_LBRACK] = ACTIONS(1370),
        [anon_sym_LBRACE] = ACTIONS(1370),
        [sym_number] = ACTIONS(1373),
        [sym_identifier] = ACTIONS(1386),
        [sym_comment] = ACTIONS(77),
        [sym__newline] = ACTIONS(1370),
        [sym__dedent] = ACTIONS(1370),
    },
    [769] = {
        [sym__simple_statement] = STATE(690),
        [sym_print_statement] = STATE(5),
        [sym_expression_statement] = STATE(5),
        [sym_return_statement] = STATE(5),
        [sym_delete_statement] = STATE(5),
        [sym__suite] = STATE(773),
        [sym__expression] = STATE(24),
        [sym_binary_operator] = STATE(17),
        [sym_unary_operator] = STATE(17),
        [sym_subscript] = STATE(17),
        [sym_call] = STATE(17),
        [sym_list] = STATE(17),
        [sym_list_comprehension] = STATE(17),
        [sym_dictionary] = STATE(17),
        [sym_dictionary_comprehension] = STATE(17),
        [sym_set] = STATE(17),
        [sym_set_comprehension] = STATE(17),
        [anon_sym_print] = ACTIONS(87),
        [anon_sym_return] = ACTIONS(89),
        [anon_sym_del] = ACTIONS(91),
        [sym_pass_statement] = ACTIONS(93),
        [sym_break_statement] = ACTIONS(93),
        [sym_continue_statement] = ACTIONS(93),
        [anon_sym_not] = ACTIONS(111),
        [anon_sym_LBRACK] = ACTIONS(113),
        [anon_sym_LBRACE] = ACTIONS(115),
        [sym_number] = ACTIONS(117),
        [sym_identifier] = ACTIONS(119),
        [sym_comment] = ACTIONS(77),
        [sym__indent] = ACTIONS(1235),
    },
    [770] = {
        [sym_default_parameter] = STATE(429),
        [sym_list_splat_parameter] = STATE(430),
        [sym_dictionary_splat_parameter] = STATE(431),
        [sym_expression_list] = STATE(772),
        [sym__expression] = STATE(383),
        [sym_binary_operator] = STATE(43),
        [sym_unary_operator] = STATE(43),
        [sym_subscript] = STATE(43),
        [sym_call] = STATE(43),
        [sym_list] = STATE(43),
        [sym_list_comprehension] = STATE(43),
        [sym_dictionary] = STATE(43),
        [sym_dictionary_comprehension] = STATE(43),
        [sym_set] = STATE(43),
        [sym_set_comprehension] = STATE(43),
        [aux_sym_parameters_repeat1] = STATE(432),
        [anon_sym_RPAREN] = ACTIONS(847),
        [anon_sym_STAR] = ACTIONS(849),
        [anon_sym_not] = ACTIONS(231),
        [anon_sym_LBRACK] = ACTIONS(127),
        [anon_sym_LBRACE] = ACTIONS(129),
        [sym_number] = ACTIONS(131),
        [sym_identifier] = ACTIONS(1948),
        [sym_comment] = ACTIONS(77),
    },
    [771] = {
        [anon_sym_COMMA] = ACTIONS(1950),
        [anon_sym_LPAREN] = ACTIONS(155),
        [anon_sym_RPAREN] = ACTIONS(1953),
        [anon_sym_EQ] = ACTIONS(871),
        [anon_sym_STAR] = ACTIONS(157),
        [anon_sym_PLUS] = ACTIONS(155),
        [anon_sym_DASH] = ACTIONS(155),
        [anon_sym_SLASH] = ACTIONS(155),
        [anon_sym_STAR_STAR] = ACTIONS(155),
        [anon_sym_PIPE] = ACTIONS(155),
        [anon_sym_AMP] = ACTIONS(155),
        [anon_sym_CARET] = ACTIONS(155),
        [anon_sym_LT_LT] = ACTIONS(155),
        [anon_sym_GT_GT] = ACTIONS(155),
        [anon_sym_and] = ACTIONS(155),
        [anon_sym_or] = ACTIONS(155),
        [anon_sym_LBRACK] = ACTIONS(155),
        [sym_comment] = ACTIONS(77),
    },
    [772] = {
        [anon_sym_RPAREN] = ACTIONS(1554),
        [sym_comment] = ACTIONS(77),
    },
    [773] = {
        [ts_builtin_sym_end] = ACTIONS(841),
        [anon_sym_SEMI] = ACTIONS(841),
        [anon_sym_print] = ACTIONS(839),
        [anon_sym_return] = ACTIONS(839),
        [anon_sym_del] = ACTIONS(839),
        [sym_pass_statement] = ACTIONS(839),
        [sym_break_statement] = ACTIONS(839),
        [sym_continue_statement] = ACTIONS(839),
        [anon_sym_if] = ACTIONS(839),
        [anon_sym_for] = ACTIONS(839),
        [anon_sym_while] = ACTIONS(839),
        [anon_sym_try] = ACTIONS(839),
        [anon_sym_with] = ACTIONS(839),
        [anon_sym_def] = ACTIONS(839),
        [anon_sym_class] = ACTIONS(839),
        [anon_sym_AT] = ACTIONS(841),
        [anon_sym_not] = ACTIONS(839),
        [anon_sym_LBRACK] = ACTIONS(841),
        [anon_sym_LBRACE] = ACTIONS(841),
        [sym_number] = ACTIONS(839),
        [sym_identifier] = ACTIONS(843),
        [sym_comment] = ACTIONS(77),
        [sym__newline] = ACTIONS(841),
        [sym__dedent] = ACTIONS(841),
    },
    [774] = {
        [aux_sym_print_statement_repeat1] = STATE(351),
        [aux_sym_subscript_repeat1] = STATE(55),
        [anon_sym_COMMA] = ACTIONS(1956),
        [anon_sym_for] = ACTIONS(715),
        [anon_sym_LPAREN] = ACTIONS(247),
        [anon_sym_STAR] = ACTIONS(573),
        [anon_sym_PLUS] = ACTIONS(575),
        [anon_sym_DASH] = ACTIONS(575),
        [anon_sym_SLASH] = ACTIONS(577),
        [anon_sym_STAR_STAR] = ACTIONS(579),
        [anon_sym_PIPE] = ACTIONS(581),
        [anon_sym_AMP] = ACTIONS(583),
        [anon_sym_CARET] = ACTIONS(585),
        [anon_sym_LT_LT] = ACTIONS(575),
        [anon_sym_GT_GT] = ACTIONS(575),
        [anon_sym_and] = ACTIONS(583),
        [anon_sym_or] = ACTIONS(581),
        [anon_sym_LBRACK] = ACTIONS(263),
        [anon_sym_RBRACK] = ACTIONS(1958),
        [sym_comment] = ACTIONS(77),
    },
    [775] = {
        [sym__expression] = STATE(777),
        [sym_binary_operator] = STATE(43),
        [sym_unary_operator] = STATE(43),
        [sym_subscript] = STATE(43),
        [sym_call] = STATE(43),
        [sym_list] = STATE(43),
        [sym_list_comprehension] = STATE(43),
        [sym_dictionary] = STATE(43),
        [sym_dictionary_comprehension] = STATE(43),
        [sym_set] = STATE(43),
        [sym_set_comprehension] = STATE(43),
        [anon_sym_not] = ACTIONS(235),
        [anon_sym_LBRACK] = ACTIONS(127),
        [anon_sym_DOT_DOT_DOT] = ACTIONS(265),
        [anon_sym_RBRACK] = ACTIONS(1788),
        [anon_sym_LBRACE] = ACTIONS(129),
        [sym_number] = ACTIONS(131),
        [sym_identifier] = ACTIONS(133),
        [sym_comment] = ACTIONS(77),
    },
    [776] = {
        [anon_sym_COMMA] = ACTIONS(1960),
        [anon_sym_COLON] = ACTIONS(1960),
        [anon_sym_for] = ACTIONS(1960),
        [anon_sym_in] = ACTIONS(1960),
        [anon_sym_as] = ACTIONS(1960),
        [anon_sym_LPAREN] = ACTIONS(1960),
        [anon_sym_RPAREN] = ACTIONS(1960),
        [anon_sym_STAR] = ACTIONS(1963),
        [anon_sym_PLUS] = ACTIONS(1960),
        [anon_sym_DASH] = ACTIONS(1960),
        [anon_sym_SLASH] = ACTIONS(1960),
        [anon_sym_STAR_STAR] = ACTIONS(1960),
        [anon_sym_PIPE] = ACTIONS(1960),
        [anon_sym_AMP] = ACTIONS(1960),
        [anon_sym_CARET] = ACTIONS(1960),
        [anon_sym_LT_LT] = ACTIONS(1960),
        [anon_sym_GT_GT] = ACTIONS(1960),
        [anon_sym_and] = ACTIONS(1960),
        [anon_sym_or] = ACTIONS(1960),
        [anon_sym_LBRACK] = ACTIONS(1960),
        [anon_sym_RBRACK] = ACTIONS(1960),
        [anon_sym_RBRACE] = ACTIONS(1960),
        [sym_comment] = ACTIONS(77),
        [sym__newline] = ACTIONS(1960),
    },
    [777] = {
        [anon_sym_COMMA] = ACTIONS(1904),
        [anon_sym_LPAREN] = ACTIONS(247),
        [anon_sym_STAR] = ACTIONS(249),
        [anon_sym_PLUS] = ACTIONS(251),
        [anon_sym_DASH] = ACTIONS(251),
        [anon_sym_SLASH] = ACTIONS(253),
        [anon_sym_STAR_STAR] = ACTIONS(255),
        [anon_sym_PIPE] = ACTIONS(257),
        [anon_sym_AMP] = ACTIONS(259),
        [anon_sym_CARET] = ACTIONS(261),
        [anon_sym_LT_LT] = ACTIONS(251),
        [anon_sym_GT_GT] = ACTIONS(251),
        [anon_sym_and] = ACTIONS(259),
        [anon_sym_or] = ACTIONS(257),
        [anon_sym_LBRACK] = ACTIONS(263),
        [anon_sym_RBRACK] = ACTIONS(1904),
        [sym_comment] = ACTIONS(77),
    },
    [778] = {
        [anon_sym_COMMA] = ACTIONS(631),
        [anon_sym_COLON] = ACTIONS(631),
        [anon_sym_for] = ACTIONS(631),
        [anon_sym_in] = ACTIONS(631),
        [anon_sym_as] = ACTIONS(631),
        [anon_sym_LPAREN] = ACTIONS(1745),
        [anon_sym_RPAREN] = ACTIONS(631),
        [anon_sym_STAR] = ACTIONS(1966),
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
        [anon_sym_LBRACK] = ACTIONS(1754),
        [anon_sym_RBRACK] = ACTIONS(631),
        [anon_sym_RBRACE] = ACTIONS(631),
        [sym_comment] = ACTIONS(77),
        [sym__newline] = ACTIONS(631),
    },
    [779] = {
        [anon_sym_COMMA] = ACTIONS(303),
        [anon_sym_COLON] = ACTIONS(303),
        [anon_sym_for] = ACTIONS(303),
        [anon_sym_in] = ACTIONS(303),
        [anon_sym_as] = ACTIONS(303),
        [anon_sym_LPAREN] = ACTIONS(1733),
        [anon_sym_RPAREN] = ACTIONS(1972),
        [anon_sym_STAR] = ACTIONS(1814),
        [anon_sym_PLUS] = ACTIONS(1817),
        [anon_sym_DASH] = ACTIONS(1817),
        [anon_sym_SLASH] = ACTIONS(1817),
        [anon_sym_STAR_STAR] = ACTIONS(1817),
        [anon_sym_PIPE] = ACTIONS(1817),
        [anon_sym_AMP] = ACTIONS(1817),
        [anon_sym_CARET] = ACTIONS(1817),
        [anon_sym_LT_LT] = ACTIONS(1817),
        [anon_sym_GT_GT] = ACTIONS(1817),
        [anon_sym_and] = ACTIONS(1817),
        [anon_sym_or] = ACTIONS(1817),
        [anon_sym_LBRACK] = ACTIONS(1742),
        [anon_sym_RBRACK] = ACTIONS(303),
        [anon_sym_RBRACE] = ACTIONS(303),
        [sym_comment] = ACTIONS(77),
        [sym__newline] = ACTIONS(303),
    },
    [780] = {
        [anon_sym_LPAREN] = ACTIONS(1975),
        [anon_sym_DOT] = ACTIONS(1975),
        [sym_comment] = ACTIONS(77),
        [sym__newline] = ACTIONS(1975),
    },
    [781] = {
        [anon_sym_COLON] = ACTIONS(1978),
        [anon_sym_LPAREN] = ACTIONS(1980),
        [sym_comment] = ACTIONS(77),
    },
    [782] = {
        [sym_expression_list] = STATE(772),
        [sym__expression] = STATE(383),
        [sym_binary_operator] = STATE(43),
        [sym_unary_operator] = STATE(43),
        [sym_subscript] = STATE(43),
        [sym_call] = STATE(43),
        [sym_list] = STATE(43),
        [sym_list_comprehension] = STATE(43),
        [sym_dictionary] = STATE(43),
        [sym_dictionary_comprehension] = STATE(43),
        [sym_set] = STATE(43),
        [sym_set_comprehension] = STATE(43),
        [anon_sym_not] = ACTIONS(231),
        [anon_sym_LBRACK] = ACTIONS(127),
        [anon_sym_LBRACE] = ACTIONS(129),
        [sym_number] = ACTIONS(131),
        [sym_identifier] = ACTIONS(133),
        [sym_comment] = ACTIONS(77),
    },
    [783] = {
        [anon_sym_COMMA] = ACTIONS(1982),
        [anon_sym_COLON] = ACTIONS(155),
        [anon_sym_for] = ACTIONS(155),
        [anon_sym_in] = ACTIONS(155),
        [anon_sym_as] = ACTIONS(155),
        [anon_sym_LPAREN] = ACTIONS(155),
        [anon_sym_RPAREN] = ACTIONS(1985),
        [anon_sym_STAR] = ACTIONS(157),
        [anon_sym_PLUS] = ACTIONS(155),
        [anon_sym_DASH] = ACTIONS(155),
        [anon_sym_SLASH] = ACTIONS(155),
        [anon_sym_STAR_STAR] = ACTIONS(155),
        [anon_sym_PIPE] = ACTIONS(155),
        [anon_sym_AMP] = ACTIONS(155),
        [anon_sym_CARET] = ACTIONS(155),
        [anon_sym_LT_LT] = ACTIONS(155),
        [anon_sym_GT_GT] = ACTIONS(155),
        [anon_sym_and] = ACTIONS(155),
        [anon_sym_or] = ACTIONS(155),
        [anon_sym_LBRACK] = ACTIONS(155),
        [anon_sym_RBRACK] = ACTIONS(155),
        [anon_sym_RBRACE] = ACTIONS(155),
        [sym_comment] = ACTIONS(77),
        [sym__newline] = ACTIONS(155),
    },
    [784] = {
        [anon_sym_COMMA] = ACTIONS(1989),
        [anon_sym_COLON] = ACTIONS(303),
        [anon_sym_for] = ACTIONS(303),
        [anon_sym_in] = ACTIONS(303),
        [anon_sym_as] = ACTIONS(303),
        [anon_sym_LPAREN] = ACTIONS(1733),
        [anon_sym_RPAREN] = ACTIONS(1989),
        [anon_sym_STAR] = ACTIONS(1814),
        [anon_sym_PLUS] = ACTIONS(1817),
        [anon_sym_DASH] = ACTIONS(1817),
        [anon_sym_SLASH] = ACTIONS(1817),
        [anon_sym_STAR_STAR] = ACTIONS(1817),
        [anon_sym_PIPE] = ACTIONS(1817),
        [anon_sym_AMP] = ACTIONS(1817),
        [anon_sym_CARET] = ACTIONS(1817),
        [anon_sym_LT_LT] = ACTIONS(1817),
        [anon_sym_GT_GT] = ACTIONS(1817),
        [anon_sym_and] = ACTIONS(1817),
        [anon_sym_or] = ACTIONS(1817),
        [anon_sym_LBRACK] = ACTIONS(1742),
        [anon_sym_RBRACK] = ACTIONS(303),
        [anon_sym_RBRACE] = ACTIONS(303),
        [sym_comment] = ACTIONS(77),
        [sym__newline] = ACTIONS(303),
    },
    [785] = {
        [anon_sym_COMMA] = ACTIONS(1992),
        [anon_sym_LPAREN] = ACTIONS(247),
        [anon_sym_RPAREN] = ACTIONS(1992),
        [anon_sym_STAR] = ACTIONS(315),
        [anon_sym_PLUS] = ACTIONS(317),
        [anon_sym_DASH] = ACTIONS(317),
        [anon_sym_SLASH] = ACTIONS(319),
        [anon_sym_STAR_STAR] = ACTIONS(321),
        [anon_sym_PIPE] = ACTIONS(323),
        [anon_sym_AMP] = ACTIONS(325),
        [anon_sym_CARET] = ACTIONS(327),
        [anon_sym_LT_LT] = ACTIONS(317),
        [anon_sym_GT_GT] = ACTIONS(317),
        [anon_sym_and] = ACTIONS(325),
        [anon_sym_or] = ACTIONS(323),
        [anon_sym_LBRACK] = ACTIONS(263),
        [sym_comment] = ACTIONS(77),
    },
    [786] = {
        [sym__expression] = STATE(288),
        [sym_binary_operator] = STATE(43),
        [sym_unary_operator] = STATE(43),
        [sym_subscript] = STATE(43),
        [sym_call] = STATE(43),
        [sym_list] = STATE(43),
        [sym_list_comprehension] = STATE(43),
        [sym_dictionary] = STATE(43),
        [sym_dictionary_comprehension] = STATE(43),
        [sym_set] = STATE(43),
        [sym_set_comprehension] = STATE(43),
        [anon_sym_STAR] = ACTIONS(863),
        [anon_sym_not] = ACTIONS(231),
        [anon_sym_LBRACK] = ACTIONS(127),
        [anon_sym_LBRACE] = ACTIONS(129),
        [sym_number] = ACTIONS(131),
        [sym_identifier] = ACTIONS(1995),
        [sym_comment] = ACTIONS(77),
    },
    [787] = {
        [anon_sym_COMMA] = ACTIONS(1950),
        [anon_sym_LPAREN] = ACTIONS(155),
        [anon_sym_RPAREN] = ACTIONS(1953),
        [anon_sym_EQ] = ACTIONS(1355),
        [anon_sym_STAR] = ACTIONS(157),
        [anon_sym_PLUS] = ACTIONS(155),
        [anon_sym_DASH] = ACTIONS(155),
        [anon_sym_SLASH] = ACTIONS(155),
        [anon_sym_STAR_STAR] = ACTIONS(155),
        [anon_sym_PIPE] = ACTIONS(155),
        [anon_sym_AMP] = ACTIONS(155),
        [anon_sym_CARET] = ACTIONS(155),
        [anon_sym_LT_LT] = ACTIONS(155),
        [anon_sym_GT_GT] = ACTIONS(155),
        [anon_sym_and] = ACTIONS(155),
        [anon_sym_or] = ACTIONS(155),
        [anon_sym_LBRACK] = ACTIONS(155),
        [sym_comment] = ACTIONS(77),
    },
    [788] = {
        [aux_sym_print_statement_repeat1] = STATE(791),
        [anon_sym_COMMA] = ACTIONS(1997),
        [anon_sym_LPAREN] = ACTIONS(247),
        [anon_sym_RPAREN] = ACTIONS(1999),
        [anon_sym_STAR] = ACTIONS(315),
        [anon_sym_PLUS] = ACTIONS(317),
        [anon_sym_DASH] = ACTIONS(317),
        [anon_sym_SLASH] = ACTIONS(319),
        [anon_sym_STAR_STAR] = ACTIONS(321),
        [anon_sym_PIPE] = ACTIONS(323),
        [anon_sym_AMP] = ACTIONS(325),
        [anon_sym_CARET] = ACTIONS(327),
        [anon_sym_LT_LT] = ACTIONS(317),
        [anon_sym_GT_GT] = ACTIONS(317),
        [anon_sym_and] = ACTIONS(325),
        [anon_sym_or] = ACTIONS(323),
        [anon_sym_LBRACK] = ACTIONS(263),
        [sym_comment] = ACTIONS(77),
    },
    [789] = {
        [sym__expression] = STATE(373),
        [sym_binary_operator] = STATE(43),
        [sym_unary_operator] = STATE(43),
        [sym_subscript] = STATE(43),
        [sym_call] = STATE(43),
        [sym_list] = STATE(43),
        [sym_list_comprehension] = STATE(43),
        [sym_dictionary] = STATE(43),
        [sym_dictionary_comprehension] = STATE(43),
        [sym_set] = STATE(43),
        [sym_set_comprehension] = STATE(43),
        [anon_sym_RPAREN] = ACTIONS(661),
        [anon_sym_STAR] = ACTIONS(377),
        [anon_sym_STAR_STAR] = ACTIONS(379),
        [anon_sym_not] = ACTIONS(2002),
        [anon_sym_LBRACK] = ACTIONS(2005),
        [anon_sym_LBRACE] = ACTIONS(2008),
        [sym_number] = ACTIONS(2011),
        [sym_identifier] = ACTIONS(2014),
        [sym_comment] = ACTIONS(77),
    },
    [790] = {
        [anon_sym_COMMA] = ACTIONS(371),
        [anon_sym_COLON] = ACTIONS(371),
        [anon_sym_for] = ACTIONS(371),
        [anon_sym_in] = ACTIONS(371),
        [anon_sym_as] = ACTIONS(371),
        [anon_sym_LPAREN] = ACTIONS(371),
        [anon_sym_RPAREN] = ACTIONS(371),
        [anon_sym_STAR] = ACTIONS(373),
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
        [sym_comment] = ACTIONS(77),
        [sym__newline] = ACTIONS(2017),
    },
    [791] = {
        [anon_sym_COMMA] = ACTIONS(749),
        [anon_sym_RPAREN] = ACTIONS(1691),
        [sym_comment] = ACTIONS(77),
    },
    [792] = {
        [anon_sym_COMMA] = ACTIONS(1982),
        [anon_sym_LPAREN] = ACTIONS(155),
        [anon_sym_RPAREN] = ACTIONS(1982),
        [anon_sym_STAR] = ACTIONS(157),
        [anon_sym_PLUS] = ACTIONS(155),
        [anon_sym_DASH] = ACTIONS(155),
        [anon_sym_SLASH] = ACTIONS(155),
        [anon_sym_STAR_STAR] = ACTIONS(155),
        [anon_sym_PIPE] = ACTIONS(155),
        [anon_sym_AMP] = ACTIONS(155),
        [anon_sym_CARET] = ACTIONS(155),
        [anon_sym_LT_LT] = ACTIONS(155),
        [anon_sym_GT_GT] = ACTIONS(155),
        [anon_sym_and] = ACTIONS(155),
        [anon_sym_or] = ACTIONS(155),
        [anon_sym_LBRACK] = ACTIONS(155),
        [sym_comment] = ACTIONS(77),
    },
    [793] = {
        [sym_parameters] = STATE(665),
        [anon_sym_LPAREN] = ACTIONS(845),
        [sym_comment] = ACTIONS(77),
    },
    [794] = {
        [aux_sym_with_statement_repeat1] = STATE(681),
        [anon_sym_COMMA] = ACTIONS(913),
        [anon_sym_COLON] = ACTIONS(2020),
        [sym_comment] = ACTIONS(77),
    },
    [795] = {
        [sym__simple_statement] = STATE(690),
        [sym_print_statement] = STATE(5),
        [sym_expression_statement] = STATE(5),
        [sym_return_statement] = STATE(5),
        [sym_delete_statement] = STATE(5),
        [sym__suite] = STATE(796),
        [sym__expression] = STATE(24),
        [sym_binary_operator] = STATE(17),
        [sym_unary_operator] = STATE(17),
        [sym_subscript] = STATE(17),
        [sym_call] = STATE(17),
        [sym_list] = STATE(17),
        [sym_list_comprehension] = STATE(17),
        [sym_dictionary] = STATE(17),
        [sym_dictionary_comprehension] = STATE(17),
        [sym_set] = STATE(17),
        [sym_set_comprehension] = STATE(17),
        [anon_sym_print] = ACTIONS(87),
        [anon_sym_return] = ACTIONS(89),
        [anon_sym_del] = ACTIONS(91),
        [sym_pass_statement] = ACTIONS(93),
        [sym_break_statement] = ACTIONS(93),
        [sym_continue_statement] = ACTIONS(93),
        [anon_sym_not] = ACTIONS(111),
        [anon_sym_LBRACK] = ACTIONS(113),
        [anon_sym_LBRACE] = ACTIONS(115),
        [sym_number] = ACTIONS(117),
        [sym_identifier] = ACTIONS(119),
        [sym_comment] = ACTIONS(77),
        [sym__indent] = ACTIONS(1235),
    },
    [796] = {
        [ts_builtin_sym_end] = ACTIONS(1029),
        [anon_sym_SEMI] = ACTIONS(1029),
        [anon_sym_print] = ACTIONS(1027),
        [anon_sym_return] = ACTIONS(1027),
        [anon_sym_del] = ACTIONS(1027),
        [sym_pass_statement] = ACTIONS(1027),
        [sym_break_statement] = ACTIONS(1027),
        [sym_continue_statement] = ACTIONS(1027),
        [anon_sym_if] = ACTIONS(1027),
        [anon_sym_for] = ACTIONS(1027),
        [anon_sym_while] = ACTIONS(1027),
        [anon_sym_try] = ACTIONS(1027),
        [anon_sym_with] = ACTIONS(1027),
        [anon_sym_def] = ACTIONS(1027),
        [anon_sym_class] = ACTIONS(1027),
        [anon_sym_AT] = ACTIONS(1029),
        [anon_sym_not] = ACTIONS(1027),
        [anon_sym_LBRACK] = ACTIONS(1029),
        [anon_sym_LBRACE] = ACTIONS(1029),
        [sym_number] = ACTIONS(1027),
        [sym_identifier] = ACTIONS(1031),
        [sym_comment] = ACTIONS(77),
        [sym__newline] = ACTIONS(1029),
        [sym__dedent] = ACTIONS(1029),
    },
    [797] = {
        [anon_sym_COMMA] = ACTIONS(937),
        [anon_sym_COLON] = ACTIONS(2022),
        [anon_sym_LPAREN] = ACTIONS(247),
        [anon_sym_STAR] = ACTIONS(939),
        [anon_sym_PLUS] = ACTIONS(941),
        [anon_sym_DASH] = ACTIONS(941),
        [anon_sym_SLASH] = ACTIONS(943),
        [anon_sym_STAR_STAR] = ACTIONS(945),
        [anon_sym_PIPE] = ACTIONS(947),
        [anon_sym_AMP] = ACTIONS(949),
        [anon_sym_CARET] = ACTIONS(951),
        [anon_sym_LT_LT] = ACTIONS(941),
        [anon_sym_GT_GT] = ACTIONS(941),
        [anon_sym_and] = ACTIONS(949),
        [anon_sym_or] = ACTIONS(947),
        [anon_sym_LBRACK] = ACTIONS(263),
        [sym_comment] = ACTIONS(77),
    },
    [798] = {
        [anon_sym_COMMA] = ACTIONS(2025),
        [anon_sym_COLON] = ACTIONS(2027),
        [anon_sym_as] = ACTIONS(2025),
        [anon_sym_LPAREN] = ACTIONS(247),
        [anon_sym_STAR] = ACTIONS(921),
        [anon_sym_PLUS] = ACTIONS(923),
        [anon_sym_DASH] = ACTIONS(923),
        [anon_sym_SLASH] = ACTIONS(925),
        [anon_sym_STAR_STAR] = ACTIONS(927),
        [anon_sym_PIPE] = ACTIONS(929),
        [anon_sym_AMP] = ACTIONS(931),
        [anon_sym_CARET] = ACTIONS(933),
        [anon_sym_LT_LT] = ACTIONS(923),
        [anon_sym_GT_GT] = ACTIONS(923),
        [anon_sym_and] = ACTIONS(931),
        [anon_sym_or] = ACTIONS(929),
        [anon_sym_LBRACK] = ACTIONS(263),
        [sym_comment] = ACTIONS(77),
    },
    [799] = {
        [sym__expression] = STATE(801),
        [sym_binary_operator] = STATE(43),
        [sym_unary_operator] = STATE(43),
        [sym_subscript] = STATE(43),
        [sym_call] = STATE(43),
        [sym_list] = STATE(43),
        [sym_list_comprehension] = STATE(43),
        [sym_dictionary] = STATE(43),
        [sym_dictionary_comprehension] = STATE(43),
        [sym_set] = STATE(43),
        [sym_set_comprehension] = STATE(43),
        [anon_sym_not] = ACTIONS(125),
        [anon_sym_LBRACK] = ACTIONS(127),
        [anon_sym_LBRACE] = ACTIONS(129),
        [sym_number] = ACTIONS(131),
        [sym_identifier] = ACTIONS(133),
        [sym_comment] = ACTIONS(77),
    },
    [800] = {
        [sym__simple_statement] = STATE(690),
        [sym_print_statement] = STATE(5),
        [sym_expression_statement] = STATE(5),
        [sym_return_statement] = STATE(5),
        [sym_delete_statement] = STATE(5),
        [sym__suite] = STATE(802),
        [sym__expression] = STATE(24),
        [sym_binary_operator] = STATE(17),
        [sym_unary_operator] = STATE(17),
        [sym_subscript] = STATE(17),
        [sym_call] = STATE(17),
        [sym_list] = STATE(17),
        [sym_list_comprehension] = STATE(17),
        [sym_dictionary] = STATE(17),
        [sym_dictionary_comprehension] = STATE(17),
        [sym_set] = STATE(17),
        [sym_set_comprehension] = STATE(17),
        [anon_sym_print] = ACTIONS(87),
        [anon_sym_return] = ACTIONS(89),
        [anon_sym_del] = ACTIONS(91),
        [sym_pass_statement] = ACTIONS(93),
        [sym_break_statement] = ACTIONS(93),
        [sym_continue_statement] = ACTIONS(93),
        [anon_sym_not] = ACTIONS(111),
        [anon_sym_LBRACK] = ACTIONS(113),
        [anon_sym_LBRACE] = ACTIONS(115),
        [sym_number] = ACTIONS(117),
        [sym_identifier] = ACTIONS(119),
        [sym_comment] = ACTIONS(77),
        [sym__indent] = ACTIONS(1235),
    },
    [801] = {
        [anon_sym_COLON] = ACTIONS(2029),
        [anon_sym_LPAREN] = ACTIONS(247),
        [anon_sym_STAR] = ACTIONS(437),
        [anon_sym_PLUS] = ACTIONS(439),
        [anon_sym_DASH] = ACTIONS(439),
        [anon_sym_SLASH] = ACTIONS(441),
        [anon_sym_STAR_STAR] = ACTIONS(443),
        [anon_sym_PIPE] = ACTIONS(445),
        [anon_sym_AMP] = ACTIONS(447),
        [anon_sym_CARET] = ACTIONS(449),
        [anon_sym_LT_LT] = ACTIONS(439),
        [anon_sym_GT_GT] = ACTIONS(439),
        [anon_sym_and] = ACTIONS(447),
        [anon_sym_or] = ACTIONS(445),
        [anon_sym_LBRACK] = ACTIONS(263),
        [sym_comment] = ACTIONS(77),
    },
    [802] = {
        [ts_builtin_sym_end] = ACTIONS(1047),
        [anon_sym_SEMI] = ACTIONS(1047),
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
        [sym_comment] = ACTIONS(77),
        [sym__newline] = ACTIONS(1047),
        [sym__dedent] = ACTIONS(1047),
    },
    [803] = {
        [sym__simple_statement] = STATE(492),
        [sym_print_statement] = STATE(5),
        [sym_expression_statement] = STATE(5),
        [sym_return_statement] = STATE(5),
        [sym_delete_statement] = STATE(5),
        [sym__suite] = STATE(804),
        [sym__expression] = STATE(24),
        [sym_binary_operator] = STATE(17),
        [sym_unary_operator] = STATE(17),
        [sym_subscript] = STATE(17),
        [sym_call] = STATE(17),
        [sym_list] = STATE(17),
        [sym_list_comprehension] = STATE(17),
        [sym_dictionary] = STATE(17),
        [sym_dictionary_comprehension] = STATE(17),
        [sym_set] = STATE(17),
        [sym_set_comprehension] = STATE(17),
        [anon_sym_print] = ACTIONS(87),
        [anon_sym_return] = ACTIONS(89),
        [anon_sym_del] = ACTIONS(91),
        [sym_pass_statement] = ACTIONS(93),
        [sym_break_statement] = ACTIONS(93),
        [sym_continue_statement] = ACTIONS(93),
        [anon_sym_not] = ACTIONS(111),
        [anon_sym_LBRACK] = ACTIONS(113),
        [anon_sym_LBRACE] = ACTIONS(115),
        [sym_number] = ACTIONS(117),
        [sym_identifier] = ACTIONS(119),
        [sym_comment] = ACTIONS(77),
        [sym__indent] = ACTIONS(973),
    },
    [804] = {
        [sym_except_clause] = STATE(755),
        [sym_finally_clause] = STATE(756),
        [aux_sym_try_statement_repeat1] = STATE(680),
        [anon_sym_except] = ACTIONS(2031),
        [anon_sym_finally] = ACTIONS(2033),
        [sym_comment] = ACTIONS(77),
    },
    [805] = {
        [anon_sym_COLON] = ACTIONS(2035),
        [anon_sym_LPAREN] = ACTIONS(247),
        [anon_sym_STAR] = ACTIONS(437),
        [anon_sym_PLUS] = ACTIONS(439),
        [anon_sym_DASH] = ACTIONS(439),
        [anon_sym_SLASH] = ACTIONS(441),
        [anon_sym_STAR_STAR] = ACTIONS(443),
        [anon_sym_PIPE] = ACTIONS(445),
        [anon_sym_AMP] = ACTIONS(447),
        [anon_sym_CARET] = ACTIONS(449),
        [anon_sym_LT_LT] = ACTIONS(439),
        [anon_sym_GT_GT] = ACTIONS(439),
        [anon_sym_and] = ACTIONS(447),
        [anon_sym_or] = ACTIONS(445),
        [anon_sym_LBRACK] = ACTIONS(263),
        [sym_comment] = ACTIONS(77),
    },
    [806] = {
        [sym__simple_statement] = STATE(690),
        [sym_print_statement] = STATE(5),
        [sym_expression_statement] = STATE(5),
        [sym_return_statement] = STATE(5),
        [sym_delete_statement] = STATE(5),
        [sym__suite] = STATE(807),
        [sym__expression] = STATE(24),
        [sym_binary_operator] = STATE(17),
        [sym_unary_operator] = STATE(17),
        [sym_subscript] = STATE(17),
        [sym_call] = STATE(17),
        [sym_list] = STATE(17),
        [sym_list_comprehension] = STATE(17),
        [sym_dictionary] = STATE(17),
        [sym_dictionary_comprehension] = STATE(17),
        [sym_set] = STATE(17),
        [sym_set_comprehension] = STATE(17),
        [anon_sym_print] = ACTIONS(87),
        [anon_sym_return] = ACTIONS(89),
        [anon_sym_del] = ACTIONS(91),
        [sym_pass_statement] = ACTIONS(93),
        [sym_break_statement] = ACTIONS(93),
        [sym_continue_statement] = ACTIONS(93),
        [anon_sym_not] = ACTIONS(111),
        [anon_sym_LBRACK] = ACTIONS(113),
        [anon_sym_LBRACE] = ACTIONS(115),
        [sym_number] = ACTIONS(117),
        [sym_identifier] = ACTIONS(119),
        [sym_comment] = ACTIONS(77),
        [sym__indent] = ACTIONS(1235),
    },
    [807] = {
        [sym_else_clause] = STATE(808),
        [ts_builtin_sym_end] = ACTIONS(1057),
        [anon_sym_SEMI] = ACTIONS(1057),
        [anon_sym_print] = ACTIONS(1055),
        [anon_sym_return] = ACTIONS(1055),
        [anon_sym_del] = ACTIONS(1055),
        [sym_pass_statement] = ACTIONS(1055),
        [sym_break_statement] = ACTIONS(1055),
        [sym_continue_statement] = ACTIONS(1055),
        [anon_sym_if] = ACTIONS(1055),
        [anon_sym_else] = ACTIONS(1699),
        [anon_sym_for] = ACTIONS(1055),
        [anon_sym_while] = ACTIONS(1055),
        [anon_sym_try] = ACTIONS(1055),
        [anon_sym_with] = ACTIONS(1055),
        [anon_sym_def] = ACTIONS(1055),
        [anon_sym_class] = ACTIONS(1055),
        [anon_sym_AT] = ACTIONS(1057),
        [anon_sym_not] = ACTIONS(1055),
        [anon_sym_LBRACK] = ACTIONS(1057),
        [anon_sym_LBRACE] = ACTIONS(1057),
        [sym_number] = ACTIONS(1055),
        [sym_identifier] = ACTIONS(1059),
        [sym_comment] = ACTIONS(77),
        [sym__newline] = ACTIONS(1057),
        [sym__dedent] = ACTIONS(1057),
    },
    [808] = {
        [ts_builtin_sym_end] = ACTIONS(1063),
        [anon_sym_SEMI] = ACTIONS(1063),
        [anon_sym_print] = ACTIONS(1061),
        [anon_sym_return] = ACTIONS(1061),
        [anon_sym_del] = ACTIONS(1061),
        [sym_pass_statement] = ACTIONS(1061),
        [sym_break_statement] = ACTIONS(1061),
        [sym_continue_statement] = ACTIONS(1061),
        [anon_sym_if] = ACTIONS(1061),
        [anon_sym_for] = ACTIONS(1061),
        [anon_sym_while] = ACTIONS(1061),
        [anon_sym_try] = ACTIONS(1061),
        [anon_sym_with] = ACTIONS(1061),
        [anon_sym_def] = ACTIONS(1061),
        [anon_sym_class] = ACTIONS(1061),
        [anon_sym_AT] = ACTIONS(1063),
        [anon_sym_not] = ACTIONS(1061),
        [anon_sym_LBRACK] = ACTIONS(1063),
        [anon_sym_LBRACE] = ACTIONS(1063),
        [sym_number] = ACTIONS(1061),
        [sym_identifier] = ACTIONS(1065),
        [sym_comment] = ACTIONS(77),
        [sym__newline] = ACTIONS(1063),
        [sym__dedent] = ACTIONS(1063),
    },
    [809] = {
        [sym__expression] = STATE(814),
        [sym_binary_operator] = STATE(43),
        [sym_unary_operator] = STATE(43),
        [sym_subscript] = STATE(43),
        [sym_call] = STATE(43),
        [sym_list] = STATE(43),
        [sym_list_comprehension] = STATE(43),
        [sym_dictionary] = STATE(43),
        [sym_dictionary_comprehension] = STATE(43),
        [sym_set] = STATE(43),
        [sym_set_comprehension] = STATE(43),
        [anon_sym_not] = ACTIONS(1239),
        [anon_sym_LBRACK] = ACTIONS(127),
        [anon_sym_LBRACE] = ACTIONS(129),
        [sym_number] = ACTIONS(131),
        [sym_identifier] = ACTIONS(133),
        [sym_comment] = ACTIONS(77),
    },
    [810] = {
        [aux_sym_print_statement_repeat1] = STATE(527),
        [anon_sym_COMMA] = ACTIONS(1071),
        [anon_sym_COLON] = ACTIONS(475),
        [anon_sym_LPAREN] = ACTIONS(247),
        [anon_sym_STAR] = ACTIONS(2037),
        [anon_sym_PLUS] = ACTIONS(2039),
        [anon_sym_DASH] = ACTIONS(2039),
        [anon_sym_SLASH] = ACTIONS(2039),
        [anon_sym_STAR_STAR] = ACTIONS(2039),
        [anon_sym_PIPE] = ACTIONS(2039),
        [anon_sym_AMP] = ACTIONS(2039),
        [anon_sym_CARET] = ACTIONS(2039),
        [anon_sym_LT_LT] = ACTIONS(2039),
        [anon_sym_GT_GT] = ACTIONS(2039),
        [anon_sym_and] = ACTIONS(2039),
        [anon_sym_or] = ACTIONS(2039),
        [anon_sym_LBRACK] = ACTIONS(263),
        [anon_sym_RBRACK] = ACTIONS(727),
        [anon_sym_RBRACE] = ACTIONS(2041),
        [sym_comment] = ACTIONS(77),
    },
    [811] = {
        [sym__expression] = STATE(813),
        [sym_binary_operator] = STATE(43),
        [sym_unary_operator] = STATE(43),
        [sym_subscript] = STATE(43),
        [sym_call] = STATE(43),
        [sym_list] = STATE(43),
        [sym_list_comprehension] = STATE(43),
        [sym_dictionary] = STATE(43),
        [sym_dictionary_comprehension] = STATE(43),
        [sym_set] = STATE(43),
        [sym_set_comprehension] = STATE(43),
        [anon_sym_not] = ACTIONS(1239),
        [anon_sym_LBRACK] = ACTIONS(127),
        [anon_sym_LBRACE] = ACTIONS(129),
        [sym_number] = ACTIONS(131),
        [sym_identifier] = ACTIONS(133),
        [sym_comment] = ACTIONS(77),
    },
    [812] = {
        [anon_sym_COMMA] = ACTIONS(2043),
        [anon_sym_COLON] = ACTIONS(2043),
        [anon_sym_for] = ACTIONS(2043),
        [anon_sym_in] = ACTIONS(2043),
        [anon_sym_as] = ACTIONS(2043),
        [anon_sym_LPAREN] = ACTIONS(2043),
        [anon_sym_RPAREN] = ACTIONS(2043),
        [anon_sym_STAR] = ACTIONS(2046),
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
        [anon_sym_LBRACK] = ACTIONS(2043),
        [anon_sym_RBRACK] = ACTIONS(2043),
        [anon_sym_RBRACE] = ACTIONS(2043),
        [sym_comment] = ACTIONS(77),
        [sym__newline] = ACTIONS(2043),
    },
    [813] = {
        [anon_sym_COMMA] = ACTIONS(303),
        [anon_sym_COLON] = ACTIONS(303),
        [anon_sym_LPAREN] = ACTIONS(1828),
        [anon_sym_STAR] = ACTIONS(2049),
        [anon_sym_PLUS] = ACTIONS(2052),
        [anon_sym_DASH] = ACTIONS(2052),
        [anon_sym_SLASH] = ACTIONS(2052),
        [anon_sym_STAR_STAR] = ACTIONS(2052),
        [anon_sym_PIPE] = ACTIONS(2052),
        [anon_sym_AMP] = ACTIONS(2052),
        [anon_sym_CARET] = ACTIONS(2052),
        [anon_sym_LT_LT] = ACTIONS(2052),
        [anon_sym_GT_GT] = ACTIONS(2052),
        [anon_sym_and] = ACTIONS(2052),
        [anon_sym_or] = ACTIONS(2052),
        [anon_sym_LBRACK] = ACTIONS(1837),
        [anon_sym_RBRACK] = ACTIONS(303),
        [anon_sym_RBRACE] = ACTIONS(303),
        [sym_comment] = ACTIONS(77),
    },
    [814] = {
        [anon_sym_COMMA] = ACTIONS(631),
        [anon_sym_COLON] = ACTIONS(631),
        [anon_sym_LPAREN] = ACTIONS(1840),
        [anon_sym_STAR] = ACTIONS(2055),
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
        [anon_sym_LBRACK] = ACTIONS(1849),
        [anon_sym_RBRACK] = ACTIONS(631),
        [anon_sym_RBRACE] = ACTIONS(631),
        [sym_comment] = ACTIONS(77),
    },
    [815] = {
        [anon_sym_in] = ACTIONS(1552),
        [sym_comment] = ACTIONS(77),
    },
    [816] = {
        [anon_sym_COLON] = ACTIONS(2061),
        [anon_sym_LPAREN] = ACTIONS(247),
        [anon_sym_STAR] = ACTIONS(437),
        [anon_sym_PLUS] = ACTIONS(439),
        [anon_sym_DASH] = ACTIONS(439),
        [anon_sym_SLASH] = ACTIONS(441),
        [anon_sym_STAR_STAR] = ACTIONS(443),
        [anon_sym_PIPE] = ACTIONS(445),
        [anon_sym_AMP] = ACTIONS(447),
        [anon_sym_CARET] = ACTIONS(449),
        [anon_sym_LT_LT] = ACTIONS(439),
        [anon_sym_GT_GT] = ACTIONS(439),
        [anon_sym_and] = ACTIONS(447),
        [anon_sym_or] = ACTIONS(445),
        [anon_sym_LBRACK] = ACTIONS(263),
        [sym_comment] = ACTIONS(77),
    },
    [817] = {
        [sym__simple_statement] = STATE(690),
        [sym_print_statement] = STATE(5),
        [sym_expression_statement] = STATE(5),
        [sym_return_statement] = STATE(5),
        [sym_delete_statement] = STATE(5),
        [sym__suite] = STATE(818),
        [sym__expression] = STATE(24),
        [sym_binary_operator] = STATE(17),
        [sym_unary_operator] = STATE(17),
        [sym_subscript] = STATE(17),
        [sym_call] = STATE(17),
        [sym_list] = STATE(17),
        [sym_list_comprehension] = STATE(17),
        [sym_dictionary] = STATE(17),
        [sym_dictionary_comprehension] = STATE(17),
        [sym_set] = STATE(17),
        [sym_set_comprehension] = STATE(17),
        [anon_sym_print] = ACTIONS(87),
        [anon_sym_return] = ACTIONS(89),
        [anon_sym_del] = ACTIONS(91),
        [sym_pass_statement] = ACTIONS(93),
        [sym_break_statement] = ACTIONS(93),
        [sym_continue_statement] = ACTIONS(93),
        [anon_sym_not] = ACTIONS(111),
        [anon_sym_LBRACK] = ACTIONS(113),
        [anon_sym_LBRACE] = ACTIONS(115),
        [sym_number] = ACTIONS(117),
        [sym_identifier] = ACTIONS(119),
        [sym_comment] = ACTIONS(77),
        [sym__indent] = ACTIONS(1235),
    },
    [818] = {
        [ts_builtin_sym_end] = ACTIONS(1125),
        [anon_sym_SEMI] = ACTIONS(1125),
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
        [sym_number] = ACTIONS(1123),
        [sym_identifier] = ACTIONS(1127),
        [sym_comment] = ACTIONS(77),
        [sym__newline] = ACTIONS(1125),
        [sym__dedent] = ACTIONS(1125),
    },
    [819] = {
        [anon_sym_COLON] = ACTIONS(2063),
        [anon_sym_LPAREN] = ACTIONS(247),
        [anon_sym_STAR] = ACTIONS(437),
        [anon_sym_PLUS] = ACTIONS(439),
        [anon_sym_DASH] = ACTIONS(439),
        [anon_sym_SLASH] = ACTIONS(441),
        [anon_sym_STAR_STAR] = ACTIONS(443),
        [anon_sym_PIPE] = ACTIONS(445),
        [anon_sym_AMP] = ACTIONS(447),
        [anon_sym_CARET] = ACTIONS(449),
        [anon_sym_LT_LT] = ACTIONS(439),
        [anon_sym_GT_GT] = ACTIONS(439),
        [anon_sym_and] = ACTIONS(447),
        [anon_sym_or] = ACTIONS(445),
        [anon_sym_LBRACK] = ACTIONS(263),
        [sym_comment] = ACTIONS(77),
    },
    [820] = {
        [sym__simple_statement] = STATE(690),
        [sym_print_statement] = STATE(5),
        [sym_expression_statement] = STATE(5),
        [sym_return_statement] = STATE(5),
        [sym_delete_statement] = STATE(5),
        [sym__suite] = STATE(821),
        [sym__expression] = STATE(24),
        [sym_binary_operator] = STATE(17),
        [sym_unary_operator] = STATE(17),
        [sym_subscript] = STATE(17),
        [sym_call] = STATE(17),
        [sym_list] = STATE(17),
        [sym_list_comprehension] = STATE(17),
        [sym_dictionary] = STATE(17),
        [sym_dictionary_comprehension] = STATE(17),
        [sym_set] = STATE(17),
        [sym_set_comprehension] = STATE(17),
        [anon_sym_print] = ACTIONS(87),
        [anon_sym_return] = ACTIONS(89),
        [anon_sym_del] = ACTIONS(91),
        [sym_pass_statement] = ACTIONS(93),
        [sym_break_statement] = ACTIONS(93),
        [sym_continue_statement] = ACTIONS(93),
        [anon_sym_not] = ACTIONS(111),
        [anon_sym_LBRACK] = ACTIONS(113),
        [anon_sym_LBRACE] = ACTIONS(115),
        [sym_number] = ACTIONS(117),
        [sym_identifier] = ACTIONS(119),
        [sym_comment] = ACTIONS(77),
        [sym__indent] = ACTIONS(1235),
    },
    [821] = {
        [sym_elif_clause] = STATE(744),
        [sym_else_clause] = STATE(822),
        [aux_sym_if_statement_repeat1] = STATE(679),
        [ts_builtin_sym_end] = ACTIONS(1093),
        [anon_sym_SEMI] = ACTIONS(1093),
        [anon_sym_print] = ACTIONS(1089),
        [anon_sym_return] = ACTIONS(1089),
        [anon_sym_del] = ACTIONS(1089),
        [sym_pass_statement] = ACTIONS(1089),
        [sym_break_statement] = ACTIONS(1089),
        [sym_continue_statement] = ACTIONS(1089),
        [anon_sym_if] = ACTIONS(1089),
        [anon_sym_elif] = ACTIONS(1697),
        [anon_sym_else] = ACTIONS(1699),
        [anon_sym_for] = ACTIONS(1089),
        [anon_sym_while] = ACTIONS(1089),
        [anon_sym_try] = ACTIONS(1089),
        [anon_sym_with] = ACTIONS(1089),
        [anon_sym_def] = ACTIONS(1089),
        [anon_sym_class] = ACTIONS(1089),
        [anon_sym_AT] = ACTIONS(1093),
        [anon_sym_not] = ACTIONS(1089),
        [anon_sym_LBRACK] = ACTIONS(1093),
        [anon_sym_LBRACE] = ACTIONS(1093),
        [sym_number] = ACTIONS(1089),
        [sym_identifier] = ACTIONS(1095),
        [sym_comment] = ACTIONS(77),
        [sym__newline] = ACTIONS(1093),
        [sym__dedent] = ACTIONS(1093),
    },
    [822] = {
        [ts_builtin_sym_end] = ACTIONS(1105),
        [anon_sym_SEMI] = ACTIONS(1105),
        [anon_sym_print] = ACTIONS(1103),
        [anon_sym_return] = ACTIONS(1103),
        [anon_sym_del] = ACTIONS(1103),
        [sym_pass_statement] = ACTIONS(1103),
        [sym_break_statement] = ACTIONS(1103),
        [sym_continue_statement] = ACTIONS(1103),
        [anon_sym_if] = ACTIONS(1103),
        [anon_sym_for] = ACTIONS(1103),
        [anon_sym_while] = ACTIONS(1103),
        [anon_sym_try] = ACTIONS(1103),
        [anon_sym_with] = ACTIONS(1103),
        [anon_sym_def] = ACTIONS(1103),
        [anon_sym_class] = ACTIONS(1103),
        [anon_sym_AT] = ACTIONS(1105),
        [anon_sym_not] = ACTIONS(1103),
        [anon_sym_LBRACK] = ACTIONS(1105),
        [anon_sym_LBRACE] = ACTIONS(1105),
        [sym_number] = ACTIONS(1103),
        [sym_identifier] = ACTIONS(1107),
        [sym_comment] = ACTIONS(77),
        [sym__newline] = ACTIONS(1105),
        [sym__dedent] = ACTIONS(1105),
    },
    [823] = {
        [anon_sym_COMMA] = ACTIONS(1713),
        [anon_sym_COLON] = ACTIONS(2065),
        [anon_sym_for] = ACTIONS(1713),
        [anon_sym_in] = ACTIONS(1713),
        [anon_sym_as] = ACTIONS(1713),
        [anon_sym_LPAREN] = ACTIONS(1713),
        [anon_sym_RPAREN] = ACTIONS(1713),
        [anon_sym_STAR] = ACTIONS(1716),
        [anon_sym_PLUS] = ACTIONS(1713),
        [anon_sym_DASH] = ACTIONS(1713),
        [anon_sym_SLASH] = ACTIONS(1713),
        [anon_sym_STAR_STAR] = ACTIONS(1713),
        [anon_sym_PIPE] = ACTIONS(1713),
        [anon_sym_AMP] = ACTIONS(1713),
        [anon_sym_CARET] = ACTIONS(1713),
        [anon_sym_LT_LT] = ACTIONS(1713),
        [anon_sym_GT_GT] = ACTIONS(1713),
        [anon_sym_and] = ACTIONS(1713),
        [anon_sym_or] = ACTIONS(1713),
        [anon_sym_LBRACK] = ACTIONS(1713),
        [anon_sym_RBRACK] = ACTIONS(1713),
        [anon_sym_RBRACE] = ACTIONS(1713),
        [sym_comment] = ACTIONS(77),
        [sym__newline] = ACTIONS(1713),
    },
    [824] = {
        [sym__expression] = STATE(843),
        [sym_binary_operator] = STATE(17),
        [sym_unary_operator] = STATE(17),
        [sym_subscript] = STATE(17),
        [sym_call] = STATE(17),
        [sym_list] = STATE(17),
        [sym_list_comprehension] = STATE(17),
        [sym_dictionary] = STATE(17),
        [sym_dictionary_comprehension] = STATE(17),
        [sym_set] = STATE(17),
        [sym_set_comprehension] = STATE(17),
        [anon_sym_not] = ACTIONS(2070),
        [anon_sym_LBRACK] = ACTIONS(113),
        [anon_sym_LBRACE] = ACTIONS(115),
        [sym_number] = ACTIONS(117),
        [sym_identifier] = ACTIONS(119),
        [sym_comment] = ACTIONS(77),
    },
    [825] = {
        [anon_sym_COMMA] = ACTIONS(2072),
        [anon_sym_RBRACK] = ACTIONS(2072),
        [sym_comment] = ACTIONS(77),
    },
    [826] = {
        [anon_sym_COMMA] = ACTIONS(2075),
        [anon_sym_COLON] = ACTIONS(2075),
        [anon_sym_for] = ACTIONS(2075),
        [anon_sym_in] = ACTIONS(2075),
        [anon_sym_as] = ACTIONS(2075),
        [anon_sym_LPAREN] = ACTIONS(2075),
        [anon_sym_RPAREN] = ACTIONS(2075),
        [anon_sym_STAR] = ACTIONS(2080),
        [anon_sym_PLUS] = ACTIONS(2075),
        [anon_sym_DASH] = ACTIONS(2075),
        [anon_sym_SLASH] = ACTIONS(2075),
        [anon_sym_STAR_STAR] = ACTIONS(2075),
        [anon_sym_PIPE] = ACTIONS(2075),
        [anon_sym_AMP] = ACTIONS(2075),
        [anon_sym_CARET] = ACTIONS(2075),
        [anon_sym_LT_LT] = ACTIONS(2075),
        [anon_sym_GT_GT] = ACTIONS(2075),
        [anon_sym_and] = ACTIONS(2075),
        [anon_sym_or] = ACTIONS(2075),
        [anon_sym_LBRACK] = ACTIONS(2075),
        [anon_sym_RBRACK] = ACTIONS(2075),
        [anon_sym_RBRACE] = ACTIONS(2075),
        [sym_comment] = ACTIONS(77),
        [sym__newline] = ACTIONS(2075),
    },
    [827] = {
        [anon_sym_COMMA] = ACTIONS(2085),
        [anon_sym_COLON] = ACTIONS(2085),
        [anon_sym_for] = ACTIONS(2085),
        [anon_sym_in] = ACTIONS(2085),
        [anon_sym_as] = ACTIONS(2085),
        [anon_sym_LPAREN] = ACTIONS(2085),
        [anon_sym_RPAREN] = ACTIONS(2085),
        [anon_sym_STAR] = ACTIONS(2090),
        [anon_sym_PLUS] = ACTIONS(2085),
        [anon_sym_DASH] = ACTIONS(2085),
        [anon_sym_SLASH] = ACTIONS(2085),
        [anon_sym_STAR_STAR] = ACTIONS(2085),
        [anon_sym_PIPE] = ACTIONS(2085),
        [anon_sym_AMP] = ACTIONS(2085),
        [anon_sym_CARET] = ACTIONS(2085),
        [anon_sym_LT_LT] = ACTIONS(2085),
        [anon_sym_GT_GT] = ACTIONS(2085),
        [anon_sym_and] = ACTIONS(2085),
        [anon_sym_or] = ACTIONS(2085),
        [anon_sym_LBRACK] = ACTIONS(2085),
        [anon_sym_RBRACK] = ACTIONS(2085),
        [anon_sym_RBRACE] = ACTIONS(2085),
        [sym_comment] = ACTIONS(77),
        [sym__newline] = ACTIONS(2085),
    },
    [828] = {
        [anon_sym_COMMA] = ACTIONS(155),
        [anon_sym_COLON] = ACTIONS(155),
        [anon_sym_in] = ACTIONS(155),
        [anon_sym_as] = ACTIONS(155),
        [anon_sym_LPAREN] = ACTIONS(155),
        [anon_sym_RPAREN] = ACTIONS(155),
        [anon_sym_EQ] = ACTIONS(309),
        [anon_sym_STAR] = ACTIONS(157),
        [anon_sym_PLUS] = ACTIONS(155),
        [anon_sym_DASH] = ACTIONS(155),
        [anon_sym_SLASH] = ACTIONS(155),
        [anon_sym_STAR_STAR] = ACTIONS(155),
        [anon_sym_PIPE] = ACTIONS(155),
        [anon_sym_AMP] = ACTIONS(155),
        [anon_sym_CARET] = ACTIONS(155),
        [anon_sym_LT_LT] = ACTIONS(155),
        [anon_sym_GT_GT] = ACTIONS(155),
        [anon_sym_and] = ACTIONS(155),
        [anon_sym_or] = ACTIONS(155),
        [anon_sym_LBRACK] = ACTIONS(155),
        [anon_sym_RBRACK] = ACTIONS(155),
        [anon_sym_RBRACE] = ACTIONS(155),
        [sym_comment] = ACTIONS(77),
        [sym__newline] = ACTIONS(155),
    },
    [829] = {
        [anon_sym_COMMA] = ACTIONS(2095),
        [anon_sym_COLON] = ACTIONS(2095),
        [sym_comment] = ACTIONS(77),
    },
    [830] = {
        [anon_sym_COMMA] = ACTIONS(2098),
        [anon_sym_COLON] = ACTIONS(2106),
        [anon_sym_in] = ACTIONS(2111),
        [anon_sym_as] = ACTIONS(919),
        [anon_sym_LPAREN] = ACTIONS(183),
        [anon_sym_RPAREN] = ACTIONS(2114),
        [anon_sym_STAR] = ACTIONS(2119),
        [anon_sym_PLUS] = ACTIONS(2121),
        [anon_sym_DASH] = ACTIONS(2121),
        [anon_sym_SLASH] = ACTIONS(2121),
        [anon_sym_STAR_STAR] = ACTIONS(2121),
        [anon_sym_PIPE] = ACTIONS(2121),
        [anon_sym_AMP] = ACTIONS(2121),
        [anon_sym_CARET] = ACTIONS(2121),
        [anon_sym_LT_LT] = ACTIONS(2121),
        [anon_sym_GT_GT] = ACTIONS(2121),
        [anon_sym_and] = ACTIONS(2121),
        [anon_sym_or] = ACTIONS(2121),
        [anon_sym_LBRACK] = ACTIONS(199),
        [anon_sym_RBRACK] = ACTIONS(2123),
        [anon_sym_RBRACE] = ACTIONS(2111),
        [sym_comment] = ACTIONS(77),
        [sym__newline] = ACTIONS(2111),
    },
    [831] = {
        [anon_sym_COMMA] = ACTIONS(2128),
        [anon_sym_RPAREN] = ACTIONS(2128),
        [sym_comment] = ACTIONS(77),
    },
    [832] = {
        [anon_sym_RPAREN] = ACTIONS(2131),
        [sym_comment] = ACTIONS(77),
    },
    [833] = {
        [anon_sym_COMMA] = ACTIONS(2133),
        [anon_sym_RBRACE] = ACTIONS(2133),
        [sym_comment] = ACTIONS(77),
    },
    [834] = {
        [anon_sym_COMMA] = ACTIONS(2136),
        [anon_sym_COLON] = ACTIONS(2136),
        [anon_sym_for] = ACTIONS(2136),
        [anon_sym_in] = ACTIONS(2136),
        [anon_sym_as] = ACTIONS(2136),
        [anon_sym_LPAREN] = ACTIONS(2136),
        [anon_sym_RPAREN] = ACTIONS(2136),
        [anon_sym_STAR] = ACTIONS(2140),
        [anon_sym_PLUS] = ACTIONS(2136),
        [anon_sym_DASH] = ACTIONS(2136),
        [anon_sym_SLASH] = ACTIONS(2136),
        [anon_sym_STAR_STAR] = ACTIONS(2136),
        [anon_sym_PIPE] = ACTIONS(2136),
        [anon_sym_AMP] = ACTIONS(2136),
        [anon_sym_CARET] = ACTIONS(2136),
        [anon_sym_LT_LT] = ACTIONS(2136),
        [anon_sym_GT_GT] = ACTIONS(2136),
        [anon_sym_and] = ACTIONS(2136),
        [anon_sym_or] = ACTIONS(2136),
        [anon_sym_LBRACK] = ACTIONS(2136),
        [anon_sym_RBRACK] = ACTIONS(2136),
        [anon_sym_RBRACE] = ACTIONS(2136),
        [sym_comment] = ACTIONS(77),
        [sym__newline] = ACTIONS(2136),
    },
    [835] = {
        [sym__simple_statement] = STATE(690),
        [sym_print_statement] = STATE(5),
        [sym_expression_statement] = STATE(5),
        [sym_return_statement] = STATE(5),
        [sym_delete_statement] = STATE(5),
        [sym__suite] = STATE(750),
        [sym__expression] = STATE(839),
        [sym_binary_operator] = STATE(17),
        [sym_unary_operator] = STATE(17),
        [sym_subscript] = STATE(17),
        [sym_call] = STATE(17),
        [sym_list] = STATE(17),
        [sym_list_comprehension] = STATE(17),
        [sym_dictionary] = STATE(17),
        [sym_dictionary_comprehension] = STATE(17),
        [sym_set] = STATE(17),
        [sym_set_comprehension] = STATE(17),
        [anon_sym_print] = ACTIONS(87),
        [anon_sym_return] = ACTIONS(89),
        [anon_sym_del] = ACTIONS(91),
        [sym_pass_statement] = ACTIONS(93),
        [sym_break_statement] = ACTIONS(93),
        [sym_continue_statement] = ACTIONS(93),
        [anon_sym_not] = ACTIONS(2144),
        [anon_sym_LBRACK] = ACTIONS(113),
        [anon_sym_LBRACE] = ACTIONS(115),
        [sym_number] = ACTIONS(117),
        [sym_identifier] = ACTIONS(119),
        [sym_comment] = ACTIONS(77),
        [sym__indent] = ACTIONS(1235),
    },
    [836] = {
        [sym__expression] = STATE(837),
        [sym_binary_operator] = STATE(17),
        [sym_unary_operator] = STATE(17),
        [sym_subscript] = STATE(17),
        [sym_call] = STATE(17),
        [sym_list] = STATE(17),
        [sym_list_comprehension] = STATE(17),
        [sym_dictionary] = STATE(17),
        [sym_dictionary_comprehension] = STATE(17),
        [sym_set] = STATE(17),
        [sym_set_comprehension] = STATE(17),
        [anon_sym_not] = ACTIONS(2070),
        [anon_sym_LBRACK] = ACTIONS(113),
        [anon_sym_LBRACE] = ACTIONS(115),
        [sym_number] = ACTIONS(117),
        [sym_identifier] = ACTIONS(119),
        [sym_comment] = ACTIONS(77),
    },
    [837] = {
        [anon_sym_COMMA] = ACTIONS(303),
        [anon_sym_COLON] = ACTIONS(303),
        [anon_sym_in] = ACTIONS(303),
        [anon_sym_as] = ACTIONS(303),
        [anon_sym_LPAREN] = ACTIONS(1733),
        [anon_sym_RPAREN] = ACTIONS(303),
        [anon_sym_STAR] = ACTIONS(2146),
        [anon_sym_PLUS] = ACTIONS(2149),
        [anon_sym_DASH] = ACTIONS(2149),
        [anon_sym_SLASH] = ACTIONS(2149),
        [anon_sym_STAR_STAR] = ACTIONS(2149),
        [anon_sym_PIPE] = ACTIONS(2149),
        [anon_sym_AMP] = ACTIONS(2149),
        [anon_sym_CARET] = ACTIONS(2149),
        [anon_sym_LT_LT] = ACTIONS(2149),
        [anon_sym_GT_GT] = ACTIONS(2149),
        [anon_sym_and] = ACTIONS(2149),
        [anon_sym_or] = ACTIONS(2149),
        [anon_sym_LBRACK] = ACTIONS(1742),
        [anon_sym_RBRACK] = ACTIONS(303),
        [anon_sym_RBRACE] = ACTIONS(303),
        [sym_comment] = ACTIONS(77),
        [sym__newline] = ACTIONS(303),
    },
    [838] = {
        [sym__expression] = STATE(842),
        [sym_binary_operator] = STATE(17),
        [sym_unary_operator] = STATE(17),
        [sym_subscript] = STATE(17),
        [sym_call] = STATE(17),
        [sym_list] = STATE(17),
        [sym_list_comprehension] = STATE(17),
        [sym_dictionary] = STATE(17),
        [sym_dictionary_comprehension] = STATE(17),
        [sym_set] = STATE(17),
        [sym_set_comprehension] = STATE(17),
        [anon_sym_not] = ACTIONS(2144),
        [anon_sym_LBRACK] = ACTIONS(113),
        [anon_sym_LBRACE] = ACTIONS(115),
        [sym_number] = ACTIONS(117),
        [sym_identifier] = ACTIONS(119),
        [sym_comment] = ACTIONS(77),
    },
    [839] = {
        [anon_sym_COMMA] = ACTIONS(455),
        [anon_sym_LPAREN] = ACTIONS(183),
        [anon_sym_STAR] = ACTIONS(2152),
        [anon_sym_PLUS] = ACTIONS(2154),
        [anon_sym_DASH] = ACTIONS(2154),
        [anon_sym_SLASH] = ACTIONS(2154),
        [anon_sym_STAR_STAR] = ACTIONS(2154),
        [anon_sym_PIPE] = ACTIONS(2154),
        [anon_sym_AMP] = ACTIONS(2154),
        [anon_sym_CARET] = ACTIONS(2154),
        [anon_sym_LT_LT] = ACTIONS(2154),
        [anon_sym_GT_GT] = ACTIONS(2154),
        [anon_sym_and] = ACTIONS(2154),
        [anon_sym_or] = ACTIONS(2154),
        [anon_sym_LBRACK] = ACTIONS(199),
        [anon_sym_RBRACE] = ACTIONS(455),
        [sym_comment] = ACTIONS(77),
        [sym__newline] = ACTIONS(201),
    },
    [840] = {
        [sym__expression] = STATE(841),
        [sym_binary_operator] = STATE(17),
        [sym_unary_operator] = STATE(17),
        [sym_subscript] = STATE(17),
        [sym_call] = STATE(17),
        [sym_list] = STATE(17),
        [sym_list_comprehension] = STATE(17),
        [sym_dictionary] = STATE(17),
        [sym_dictionary_comprehension] = STATE(17),
        [sym_set] = STATE(17),
        [sym_set_comprehension] = STATE(17),
        [anon_sym_not] = ACTIONS(2144),
        [anon_sym_LBRACK] = ACTIONS(113),
        [anon_sym_LBRACE] = ACTIONS(115),
        [sym_number] = ACTIONS(117),
        [sym_identifier] = ACTIONS(119),
        [sym_comment] = ACTIONS(77),
    },
    [841] = {
        [anon_sym_COMMA] = ACTIONS(303),
        [anon_sym_LPAREN] = ACTIONS(1733),
        [anon_sym_STAR] = ACTIONS(2156),
        [anon_sym_PLUS] = ACTIONS(2159),
        [anon_sym_DASH] = ACTIONS(2159),
        [anon_sym_SLASH] = ACTIONS(2159),
        [anon_sym_STAR_STAR] = ACTIONS(2159),
        [anon_sym_PIPE] = ACTIONS(2159),
        [anon_sym_AMP] = ACTIONS(2159),
        [anon_sym_CARET] = ACTIONS(2159),
        [anon_sym_LT_LT] = ACTIONS(2159),
        [anon_sym_GT_GT] = ACTIONS(2159),
        [anon_sym_and] = ACTIONS(2159),
        [anon_sym_or] = ACTIONS(2159),
        [anon_sym_LBRACK] = ACTIONS(1742),
        [anon_sym_RBRACE] = ACTIONS(303),
        [sym_comment] = ACTIONS(77),
        [sym__newline] = ACTIONS(303),
    },
    [842] = {
        [anon_sym_COMMA] = ACTIONS(631),
        [anon_sym_LPAREN] = ACTIONS(1745),
        [anon_sym_STAR] = ACTIONS(2162),
        [anon_sym_PLUS] = ACTIONS(2165),
        [anon_sym_DASH] = ACTIONS(2165),
        [anon_sym_SLASH] = ACTIONS(2165),
        [anon_sym_STAR_STAR] = ACTIONS(2165),
        [anon_sym_PIPE] = ACTIONS(2165),
        [anon_sym_AMP] = ACTIONS(2165),
        [anon_sym_CARET] = ACTIONS(2165),
        [anon_sym_LT_LT] = ACTIONS(2165),
        [anon_sym_GT_GT] = ACTIONS(2165),
        [anon_sym_and] = ACTIONS(2165),
        [anon_sym_or] = ACTIONS(2165),
        [anon_sym_LBRACK] = ACTIONS(1754),
        [anon_sym_RBRACE] = ACTIONS(631),
        [sym_comment] = ACTIONS(77),
        [sym__newline] = ACTIONS(631),
    },
    [843] = {
        [anon_sym_COMMA] = ACTIONS(631),
        [anon_sym_COLON] = ACTIONS(631),
        [anon_sym_in] = ACTIONS(631),
        [anon_sym_as] = ACTIONS(631),
        [anon_sym_LPAREN] = ACTIONS(1745),
        [anon_sym_RPAREN] = ACTIONS(631),
        [anon_sym_STAR] = ACTIONS(2168),
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
        [anon_sym_LBRACK] = ACTIONS(1754),
        [anon_sym_RBRACK] = ACTIONS(631),
        [anon_sym_RBRACE] = ACTIONS(631),
        [sym_comment] = ACTIONS(77),
        [sym__newline] = ACTIONS(631),
    },
};

static TSParseActionEntry ts_parse_actions[] = {
    [0] = {.count = 0, .reusable = false, .depends_on_lookahead = false},
    [1] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(0),
    [3] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(29),
    [5] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(2),
    [7] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(624),
    [9] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(3),
    [11] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(4),
    [13] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(5),
    [15] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(625),
    [17] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(626),
    [19] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(627),
    [21] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(628),
    [23] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(629),
    [25] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(630),
    [27] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(631),
    [29] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(632),
    [31] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(633),
    [33] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(634),
    [35] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(635),
    [37] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(636),
    [39] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(637),
    [41] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(638),
    [43] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(639),
    [45] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(640),
    [47] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(641),
    [49] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(642),
    [51] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(13),
    [53] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(643),
    [55] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(644),
    [57] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(645),
    [59] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(644),
    [61] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(646),
    [63] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(647),
    [65] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(648),
    [67] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(649),
    [69] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(16),
    [71] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(650),
    [73] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(17),
    [75] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, RECOVER(651),
    [77] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT_EXTRA(),
    [79] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(652),
    [81] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(653),
    [83] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(654),
    [85] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_module, 0),
    [87] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(2),
    [89] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(3),
    [91] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(4),
    [93] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(5),
    [95] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(6),
    [97] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(7),
    [99] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(8),
    [101] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(9),
    [103] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(10),
    [105] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(11),
    [107] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(12),
    [109] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(13),
    [111] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(14),
    [113] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(15),
    [115] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(16),
    [117] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(17),
    [119] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(17),
    [121] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(602),
    [123] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__simple_statement, 1),
    [125] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(133),
    [127] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(40),
    [129] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(42),
    [131] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(43),
    [133] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(43),
    [135] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(162),
    [137] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(557),
    [139] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(453),
    [141] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(547),
    [143] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(379),
    [145] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(360),
    [147] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(235),
    [149] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(346),
    [151] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(123),
    [153] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(321),
    [155] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__expression, 1),
    [157] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__expression, 1),
    [159] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, ACCEPT_INPUT(),
    [161] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_module_repeat1, 1),
    [163] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_module_repeat1, 1),
    [165] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_module_repeat1, 1),
    [167] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(320),
    [169] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__statement, 1),
    [171] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__statement, 1),
    [173] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__statement, 1),
    [175] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__compound_statement, 1),
    [177] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__compound_statement, 1),
    [179] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__compound_statement, 1),
    [181] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_decorated_definition_repeat1, 1),
    [183] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(31),
    [185] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(32),
    [187] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(33),
    [189] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(32),
    [191] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(34),
    [193] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(35),
    [195] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(36),
    [197] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(37),
    [199] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(38),
    [201] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_expression_statement, 1),
    [203] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_module, 1),
    [205] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(29),
    [207] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(11),
    [209] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(12),
    [211] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_decorated_definition, 2),
    [213] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_decorated_definition, 2),
    [215] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_decorated_definition, 2),
    [217] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_decorated_definition_repeat1, 2),
    [219] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_module, 2),
    [221] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_module_repeat1, 2),
    [223] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_module_repeat1, 2),
    [225] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_module_repeat1, 2),
    [227] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(77),
    [229] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(78),
    [231] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(79),
    [233] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(80),
    [235] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(39),
    [237] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(41),
    [239] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(236),
    [241] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(45),
    [243] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(54),
    [245] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(124),
    [247] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(46),
    [249] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(47),
    [251] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(48),
    [253] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(47),
    [255] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(49),
    [257] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(50),
    [259] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(51),
    [261] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(52),
    [263] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(53),
    [265] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(69),
    [267] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(57),
    [269] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(61),
    [271] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_subscript, 4),
    [273] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_subscript, 4),
    [275] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(56),
    [277] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(58),
    [279] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(59),
    [281] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_subscript, 5),
    [283] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_subscript, 5),
    [285] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_subscript_repeat1, 3),
    [287] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_subscript, 6),
    [289] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_subscript, 6),
    [291] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(63),
    [293] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(64),
    [295] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(67),
    [297] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(66),
    [299] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(68),
    [301] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_subscript_repeat1, 2),
    [303] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE_FRAGILE(sym_binary_operator, 3),
    [305] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE_FRAGILE(sym_binary_operator, 3),
    [307] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(275),
    [309] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(121),
    [311] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(120),
    [313] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(115),
    [315] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(99),
    [317] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(100),
    [319] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(99),
    [321] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(101),
    [323] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(102),
    [325] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(103),
    [327] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(104),
    [329] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(116),
    [331] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(114),
    [333] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(90),
    [335] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(91),
    [337] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_call, 5),
    [339] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_call, 5),
    [341] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(93),
    [343] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(94),
    [345] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_call, 6),
    [347] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_call, 6),
    [349] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_call_repeat2, 3),
    [351] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(98),
    [353] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_call, 8),
    [355] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_call, 8),
    [357] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_call_repeat2, 2),
    [359] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(113),
    [361] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_call, 7),
    [363] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_call, 7),
    [365] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_call_repeat1, 3),
    [367] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_call_repeat1, 3),
    [369] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_call_repeat1, 3),
    [371] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_call, 4),
    [373] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_call, 4),
    [375] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(118),
    [377] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_call_repeat1, 2),
    [379] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_call_repeat1, 2),
    [381] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_call_repeat1, 2),
    [383] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_keyword_argument, 3),
    [385] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_dictionary, 2),
    [387] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_dictionary, 2),
    [389] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(197),
    [391] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(198),
    [393] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(199),
    [395] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(200),
    [397] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(201),
    [399] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(200),
    [401] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(202),
    [403] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(203),
    [405] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(204),
    [407] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(205),
    [409] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(206),
    [411] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(127),
    [413] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(128),
    [415] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(129),
    [417] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(132),
    [419] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_dictionary, 3),
    [421] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_dictionary, 3),
    [423] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(131),
    [425] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(134),
    [427] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_dictionary, 4),
    [429] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_dictionary, 4),
    [431] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_dictionary, 5),
    [433] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_dictionary, 5),
    [435] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(137),
    [437] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(138),
    [439] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(139),
    [441] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(138),
    [443] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(140),
    [445] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(141),
    [447] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(142),
    [449] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(143),
    [451] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_dictionary_repeat1, 3),
    [453] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(149),
    [455] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_pair, 3),
    [457] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(151),
    [459] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(152),
    [461] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(151),
    [463] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(153),
    [465] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(154),
    [467] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(155),
    [469] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(156),
    [471] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(181),
    [473] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(165),
    [475] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_expression_list, 1),
    [477] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(166),
    [479] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(167),
    [481] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(166),
    [483] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(168),
    [485] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(169),
    [487] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(170),
    [489] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(171),
    [491] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(173),
    [493] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_expression_list, 2),
    [495] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_print_statement_repeat1, 3),
    [497] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_print_statement_repeat1, 2),
    [499] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(182),
    [501] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(184),
    [503] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(185),
    [505] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(184),
    [507] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(186),
    [509] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(187),
    [511] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(188),
    [513] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(189),
    [515] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(190),
    [517] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_dictionary_comprehension, 7),
    [519] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_dictionary_comprehension, 7),
    [521] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_dictionary_repeat1, 2),
    [523] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(209),
    [525] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(221),
    [527] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_set, 3),
    [529] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_set, 3),
    [531] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(208),
    [533] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(210),
    [535] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_set, 4),
    [537] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_set, 4),
    [539] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_set, 5),
    [541] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_set, 5),
    [543] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(218),
    [545] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(220),
    [547] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_set_comprehension, 7),
    [549] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_set_comprehension, 7),
    [551] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(223),
    [553] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(224),
    [555] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(223),
    [557] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(225),
    [559] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(226),
    [561] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(227),
    [563] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(228),
    [565] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_list, 2),
    [567] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_list, 2),
    [569] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(238),
    [571] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(239),
    [573] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(240),
    [575] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(241),
    [577] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(240),
    [579] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(242),
    [581] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(243),
    [583] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(244),
    [585] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(245),
    [587] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(246),
    [589] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(249),
    [591] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_list, 3),
    [593] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_list, 3),
    [595] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(248),
    [597] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(250),
    [599] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_list, 4),
    [601] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_list, 4),
    [603] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_list, 5),
    [605] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_list, 5),
    [607] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(258),
    [609] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(259),
    [611] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(261),
    [613] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(262),
    [615] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(261),
    [617] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(263),
    [619] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(264),
    [621] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(265),
    [623] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(266),
    [625] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(267),
    [627] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_list_comprehension, 7),
    [629] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_list_comprehension, 7),
    [631] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE_FRAGILE(sym_unary_operator, 2),
    [633] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE_FRAGILE(sym_unary_operator, 2),
    [635] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_dictionary_splat_argument, 2),
    [637] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(277),
    [639] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(278),
    [641] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(277),
    [643] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(279),
    [645] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(280),
    [647] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(281),
    [649] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(282),
    [651] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_list_splat_argument, 2),
    [653] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(319),
    [655] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(314),
    [657] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(315),
    [659] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(313),
    [661] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(304),
    [663] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(305),
    [665] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(307),
    [667] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(308),
    [669] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(310),
    [671] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(312),
    [673] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(317),
    [675] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__statement, 2),
    [677] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__statement, 2),
    [679] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__statement, 2),
    [681] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(335),
    [683] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(336),
    [685] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(337),
    [687] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(324),
    [689] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(325),
    [691] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(326),
    [693] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(329),
    [695] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(328),
    [697] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(330),
    [699] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(332),
    [701] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(334),
    [703] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(340),
    [705] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(339),
    [707] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(341),
    [709] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(343),
    [711] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(345),
    [713] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(348),
    [715] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(349),
    [717] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(350),
    [719] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(353),
    [721] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(352),
    [723] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(354),
    [725] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(356),
    [727] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(358),
    [729] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_dotted_name, 1),
    [731] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(374),
    [733] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(362),
    [735] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(363),
    [737] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_decorator, 3),
    [739] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(365),
    [741] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_decorator, 4),
    [743] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(367),
    [745] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(368),
    [747] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_arguments, 3),
    [749] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(370),
    [751] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(371),
    [753] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_arguments, 4),
    [755] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(378),
    [757] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_dotted_name, 2),
    [759] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(376),
    [761] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(377),
    [763] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_dotted_name_repeat1, 3),
    [765] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_dotted_name_repeat1, 2),
    [767] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(380),
    [769] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(381),
    [771] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(387),
    [773] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(385),
    [775] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(386),
    [777] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(391),
    [779] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(392),
    [781] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(393),
    [783] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(394),
    [785] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(395),
    [787] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(396),
    [789] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(397),
    [791] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(390),
    [793] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_class_definition, 7),
    [795] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_class_definition, 7),
    [797] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_class_definition, 7),
    [799] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__suite, 2),
    [801] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__suite, 2),
    [803] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__suite, 2),
    [805] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(490),
    [807] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(421),
    [809] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(408),
    [811] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(407),
    [813] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(405),
    [815] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(396),
    [817] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(397),
    [819] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__suite, 3),
    [821] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__suite, 3),
    [823] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__suite, 3),
    [825] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(409),
    [827] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(410),
    [829] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(414),
    [831] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(412),
    [833] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(413),
    [835] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(417),
    [837] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(419),
    [839] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_class_definition, 4),
    [841] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_class_definition, 4),
    [843] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_class_definition, 4),
    [845] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(422),
    [847] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(426),
    [849] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(427),
    [851] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(428),
    [853] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(424),
    [855] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_function_definition, 5),
    [857] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_function_definition, 5),
    [859] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_function_definition, 5),
    [861] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_parameters, 2),
    [863] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(442),
    [865] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(452),
    [867] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(451),
    [869] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(448),
    [871] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(446),
    [873] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(449),
    [875] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(433),
    [877] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(444),
    [879] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(437),
    [881] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(438),
    [883] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_parameters, 4),
    [885] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(439),
    [887] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(441),
    [889] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_parameters, 6),
    [891] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(443),
    [893] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_dictionary_splat_parameter, 3),
    [895] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(445),
    [897] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_parameters_repeat1, 3),
    [899] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_parameters_repeat1, 3),
    [901] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_parameters, 5),
    [903] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_default_parameter, 3),
    [905] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_parameters, 3),
    [907] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_parameters_repeat1, 2),
    [909] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_parameters_repeat1, 2),
    [911] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_list_splat_parameter, 2),
    [913] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(481),
    [915] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(482),
    [917] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_with_item, 1),
    [919] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(456),
    [921] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(457),
    [923] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(458),
    [925] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(457),
    [927] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(459),
    [929] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(460),
    [931] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(461),
    [933] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(462),
    [935] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(468),
    [937] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_with_item, 3),
    [939] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(470),
    [941] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(471),
    [943] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(470),
    [945] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(472),
    [947] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(473),
    [949] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(474),
    [951] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(475),
    [953] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(484),
    [955] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(485),
    [957] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_with_statement, 5),
    [959] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_with_statement, 5),
    [961] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_with_statement, 5),
    [963] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_with_statement_repeat1, 3),
    [965] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_with_statement, 4),
    [967] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_with_statement, 4),
    [969] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_with_statement, 4),
    [971] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_with_statement_repeat1, 2),
    [973] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(491),
    [975] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(515),
    [977] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(494),
    [979] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(495),
    [981] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(506),
    [983] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_try_statement_repeat1, 1),
    [985] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_try_statement_repeat1, 1),
    [987] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_try_statement_repeat1, 1),
    [989] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_try_statement, 4),
    [991] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_try_statement, 4),
    [993] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_try_statement, 4),
    [995] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(499),
    [997] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(494),
    [999] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(495),
    [1001] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(504),
    [1003] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_try_statement, 5),
    [1005] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_try_statement, 5),
    [1007] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_try_statement, 5),
    [1009] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_try_statement_repeat1, 2),
    [1011] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_try_statement_repeat1, 2),
    [1013] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_try_statement_repeat1, 2),
    [1015] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_try_statement, 6),
    [1017] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_try_statement, 6),
    [1019] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_try_statement, 6),
    [1021] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_else_clause, 3),
    [1023] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_else_clause, 3),
    [1025] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_else_clause, 3),
    [1027] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_finally_clause, 3),
    [1029] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_finally_clause, 3),
    [1031] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_finally_clause, 3),
    [1033] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(509),
    [1035] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(510),
    [1037] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(512),
    [1039] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_except_clause, 6),
    [1041] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_except_clause, 6),
    [1043] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_except_clause, 6),
    [1045] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_except_clause, 4),
    [1047] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_except_clause, 4),
    [1049] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_except_clause, 4),
    [1051] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(517),
    [1053] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(519),
    [1055] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_while_statement, 4),
    [1057] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_while_statement, 4),
    [1059] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_while_statement, 4),
    [1061] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_while_statement, 5),
    [1063] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_while_statement, 5),
    [1065] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_while_statement, 5),
    [1067] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(523),
    [1069] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(531),
    [1071] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(526),
    [1073] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(528),
    [1075] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_for_statement, 6),
    [1077] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_for_statement, 6),
    [1079] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_for_statement, 6),
    [1081] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_for_statement, 7),
    [1083] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_for_statement, 7),
    [1085] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_for_statement, 7),
    [1087] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(535),
    [1089] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_if_statement, 4),
    [1091] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(537),
    [1093] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_if_statement, 4),
    [1095] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_if_statement, 4),
    [1097] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_if_statement_repeat1, 1),
    [1099] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_if_statement_repeat1, 1),
    [1101] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_if_statement_repeat1, 1),
    [1103] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_if_statement, 5),
    [1105] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_if_statement, 5),
    [1107] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_if_statement, 5),
    [1109] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_if_statement_repeat1, 2),
    [1111] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_if_statement_repeat1, 2),
    [1113] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_if_statement_repeat1, 2),
    [1115] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_if_statement, 6),
    [1117] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_if_statement, 6),
    [1119] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_if_statement, 6),
    [1121] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(544),
    [1123] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_elif_clause, 4),
    [1125] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_elif_clause, 4),
    [1127] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_elif_clause, 4),
    [1129] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(549),
    [1131] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(552),
    [1133] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(554),
    [1135] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(559),
    [1137] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(560),
    [1139] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(571),
    [1141] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(564),
    [1143] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(559),
    [1145] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(560),
    [1147] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(569),
    [1149] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(574),
    [1151] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(575),
    [1153] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(577),
    [1155] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(581),
    [1157] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(585),
    [1159] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(587),
    [1161] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(591),
    [1163] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(593),
    [1165] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(600),
    [1167] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_delete_statement, 2),
    [1169] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(605),
    [1171] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(606),
    [1173] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(607),
    [1175] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(606),
    [1177] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(608),
    [1179] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(609),
    [1181] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(610),
    [1183] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(611),
    [1185] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(613),
    [1187] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_return_statement, 2),
    [1189] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_print_statement, 2),
    [1191] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_print_statement, 3),
    [1193] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(823),
    [1195] = {.count = 5, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_parameters_repeat1, 2), REDUCE(aux_sym_call_repeat1, 2), REDUCE(aux_sym_parameters_repeat1, 3), REDUCE(aux_sym_call_repeat1, 3), SHIFT(439),
    [1201] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_call_repeat1, 2), REDUCE(aux_sym_call_repeat1, 3), SHIFT(78),
    [1205] = {.count = 3, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_call_repeat1, 2), REDUCE(aux_sym_call_repeat1, 3), SHIFT(824),
    [1209] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_call_repeat1, 2), REDUCE(aux_sym_call_repeat1, 3), SHIFT(15),
    [1213] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(825),
    [1215] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(826),
    [1217] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_call_repeat1, 2), REDUCE(aux_sym_call_repeat1, 3), SHIFT(16),
    [1221] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(827),
    [1223] = {.count = 3, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_call_repeat1, 2), REDUCE(aux_sym_call_repeat1, 3), SHIFT(17),
    [1227] = {.count = 5, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_parameters_repeat1, 2), REDUCE(aux_sym_call_repeat1, 2), REDUCE(aux_sym_parameters_repeat1, 3), REDUCE(aux_sym_call_repeat1, 3), SHIFT(828),
    [1233] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(739),
    [1235] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(653),
    [1237] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(701),
    [1239] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(809),
    [1241] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(803),
    [1243] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(795),
    [1245] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(793),
    [1247] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(786),
    [1249] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(787),
    [1251] = {.count = 5, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_call, 4), REDUCE(sym_call, 5), REDUCE(sym_call, 6), REDUCE(sym_call, 7), REDUCE(sym_call, 8),
    [1257] = {.count = 11, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_parameters, 2), REDUCE(sym_parameters, 3), REDUCE(sym_parameters, 4), REDUCE(sym_call, 4), REDUCE(sym_parameters, 5), REDUCE(sym_call, 5), REDUCE(sym_parameters, 6), REDUCE(sym_call, 6), REDUCE(sym_call, 7), REDUCE(sym_call, 8), SHIFT(752),
    [1269] = {.count = 5, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_call, 4), REDUCE(sym_call, 5), REDUCE(sym_call, 6), REDUCE(sym_call, 7), REDUCE(sym_call, 8),
    [1275] = {.count = 7, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_arguments, 3), REDUCE(sym_arguments, 4), REDUCE(sym_call, 4), REDUCE(sym_call, 5), REDUCE(sym_call, 6), REDUCE(sym_call, 7), REDUCE(sym_call, 8),
    [1283] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(646),
    [1285] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(783),
    [1287] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(781),
    [1289] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(780),
    [1291] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_subscript_repeat1, 2), REDUCE(aux_sym_subscript_repeat1, 3), SHIFT(45),
    [1295] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_subscript_repeat1, 2), REDUCE(aux_sym_subscript_repeat1, 3), SHIFT(54),
    [1299] = {.count = 8, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_list, 2), REDUCE(sym_list, 3), REDUCE(sym_subscript, 4), REDUCE(sym_list, 4), REDUCE(sym_subscript, 5), REDUCE(sym_list, 5), REDUCE(sym_subscript, 6), REDUCE(sym_list_comprehension, 7),
    [1308] = {.count = 8, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_list, 2), REDUCE(sym_list, 3), REDUCE(sym_subscript, 4), REDUCE(sym_list, 4), REDUCE(sym_subscript, 5), REDUCE(sym_list, 5), REDUCE(sym_subscript, 6), REDUCE(sym_list_comprehension, 7),
    [1317] = {.count = 9, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_dictionary, 2), REDUCE(sym_dictionary, 3), REDUCE(sym_set, 3), REDUCE(sym_dictionary, 4), REDUCE(sym_set, 4), REDUCE(sym_dictionary, 5), REDUCE(sym_set, 5), REDUCE(sym_dictionary_comprehension, 7), REDUCE(sym_set_comprehension, 7),
    [1327] = {.count = 9, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_dictionary, 2), REDUCE(sym_dictionary, 3), REDUCE(sym_set, 3), REDUCE(sym_dictionary, 4), REDUCE(sym_set, 4), REDUCE(sym_dictionary, 5), REDUCE(sym_set, 5), REDUCE(sym_dictionary_comprehension, 7), REDUCE(sym_set_comprehension, 7),
    [1337] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__expression, 1), REDUCE(sym_list_splat_parameter, 2), SHIFT(762),
    [1341] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__expression, 1), SHIFT(769),
    [1344] = {.count = 5, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_dotted_name, 1), REDUCE(sym__expression, 1), REDUCE(aux_sym_dotted_name_repeat1, 2), REDUCE(aux_sym_dotted_name_repeat1, 3), SHIFT(770),
    [1350] = {.count = 4, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__expression, 1), REDUCE(sym_list_splat_parameter, 2), REDUCE(sym_dictionary_splat_parameter, 3), SHIFT(759),
    [1355] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(640),
    [1357] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_dotted_name_repeat1, 2), REDUCE(aux_sym_dotted_name_repeat1, 3), SHIFT(374),
    [1361] = {.count = 4, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_dotted_name, 1), REDUCE(sym__expression, 1), REDUCE(aux_sym_dotted_name_repeat1, 2), REDUCE(aux_sym_dotted_name_repeat1, 3),
    [1366] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_module, 2), REDUCE(sym__statement, 2), REDUCE(sym__suite, 2),
    [1370] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__statement, 2), REDUCE(sym__suite, 2),
    [1373] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__statement, 2), REDUCE(sym__suite, 2),
    [1376] = {.count = 4, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__statement, 2), REDUCE(sym__suite, 2), REDUCE(sym_decorator, 3), REDUCE(sym_decorator, 4),
    [1381] = {.count = 4, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__statement, 2), REDUCE(sym__suite, 2), REDUCE(sym_decorator, 3), REDUCE(sym_decorator, 4),
    [1386] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__statement, 2), REDUCE(sym__suite, 2),
    [1389] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(692),
    [1391] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__suite, 2), REDUCE(sym__suite, 3),
    [1394] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__suite, 2), REDUCE(sym__suite, 3),
    [1397] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__suite, 2), REDUCE(sym__suite, 3),
    [1400] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_module_repeat1, 1), REDUCE(aux_sym_module_repeat1, 2),
    [1403] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_module_repeat1, 1), REDUCE(aux_sym_module_repeat1, 2),
    [1406] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_module_repeat1, 1), REDUCE(aux_sym_module_repeat1, 2),
    [1409] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(768),
    [1411] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_if_statement_repeat1, 1), REDUCE(aux_sym_if_statement_repeat1, 2),
    [1414] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_if_statement_repeat1, 1), REDUCE(aux_sym_if_statement_repeat1, 2),
    [1417] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_if_statement_repeat1, 1), REDUCE(aux_sym_if_statement_repeat1, 2),
    [1420] = {.count = 5, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_if_statement, 5), REDUCE(sym_while_statement, 5), REDUCE(sym_try_statement, 5), REDUCE(sym_if_statement, 6), REDUCE(sym_for_statement, 7),
    [1426] = {.count = 5, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_if_statement, 5), REDUCE(sym_while_statement, 5), REDUCE(sym_try_statement, 5), REDUCE(sym_if_statement, 6), REDUCE(sym_for_statement, 7),
    [1432] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(635),
    [1434] = {.count = 5, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_if_statement, 5), REDUCE(sym_while_statement, 5), REDUCE(sym_try_statement, 5), REDUCE(sym_if_statement, 6), REDUCE(sym_for_statement, 7),
    [1440] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_try_statement_repeat1, 1), REDUCE(aux_sym_try_statement_repeat1, 2),
    [1443] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_try_statement_repeat1, 1), REDUCE(aux_sym_try_statement_repeat1, 2),
    [1446] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_try_statement_repeat1, 1), REDUCE(aux_sym_try_statement_repeat1, 2),
    [1449] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_try_statement, 4), REDUCE(sym_try_statement, 5), REDUCE(sym_try_statement, 6),
    [1453] = {.count = 3, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_try_statement, 4), REDUCE(sym_try_statement, 5), REDUCE(sym_try_statement, 6),
    [1457] = {.count = 3, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_try_statement, 4), REDUCE(sym_try_statement, 5), REDUCE(sym_try_statement, 6),
    [1461] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_with_statement_repeat1, 2), REDUCE(aux_sym_with_statement_repeat1, 3), SHIFT(481),
    [1465] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_with_statement_repeat1, 2), REDUCE(aux_sym_with_statement_repeat1, 3), SHIFT(766),
    [1469] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__compound_statement, 1), REDUCE(sym_decorated_definition, 2),
    [1472] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__compound_statement, 1), REDUCE(sym_decorated_definition, 2),
    [1475] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__compound_statement, 1), REDUCE(sym_decorated_definition, 2),
    [1478] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(764),
    [1480] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(762),
    [1482] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(759),
    [1484] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(758),
    [1486] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(757),
    [1488] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_decorated_definition_repeat1, 1), REDUCE(aux_sym_decorated_definition_repeat1, 2),
    [1491] = {.count = 13, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_else_clause, 3), REDUCE(sym_finally_clause, 3), REDUCE(sym_if_statement, 4), REDUCE(sym_elif_clause, 4), REDUCE(sym_while_statement, 4), REDUCE(sym_except_clause, 4), REDUCE(sym_with_statement, 4), REDUCE(sym_class_definition, 4), REDUCE(sym_with_statement, 5), REDUCE(sym_function_definition, 5), REDUCE(sym_for_statement, 6), REDUCE(sym_except_clause, 6), REDUCE(sym_class_definition, 7),
    [1505] = {.count = 13, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_else_clause, 3), REDUCE(sym_finally_clause, 3), REDUCE(sym_if_statement, 4), REDUCE(sym_elif_clause, 4), REDUCE(sym_while_statement, 4), REDUCE(sym_except_clause, 4), REDUCE(sym_with_statement, 4), REDUCE(sym_class_definition, 4), REDUCE(sym_with_statement, 5), REDUCE(sym_function_definition, 5), REDUCE(sym_for_statement, 6), REDUCE(sym_except_clause, 6), REDUCE(sym_class_definition, 7),
    [1519] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_elif_clause, 4), SHIFT(627),
    [1522] = {.count = 4, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_elif_clause, 4), REDUCE(sym_except_clause, 4), REDUCE(sym_except_clause, 6), SHIFT(628),
    [1527] = {.count = 3, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_except_clause, 4), REDUCE(sym_except_clause, 6), SHIFT(633),
    [1531] = {.count = 4, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_else_clause, 3), REDUCE(sym_except_clause, 4), REDUCE(sym_except_clause, 6), SHIFT(635),
    [1536] = {.count = 13, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_else_clause, 3), REDUCE(sym_finally_clause, 3), REDUCE(sym_if_statement, 4), REDUCE(sym_elif_clause, 4), REDUCE(sym_while_statement, 4), REDUCE(sym_except_clause, 4), REDUCE(sym_with_statement, 4), REDUCE(sym_class_definition, 4), REDUCE(sym_with_statement, 5), REDUCE(sym_function_definition, 5), REDUCE(sym_for_statement, 6), REDUCE(sym_except_clause, 6), REDUCE(sym_class_definition, 7),
    [1550] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(716),
    [1552] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(630),
    [1554] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(751),
    [1556] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_return_statement, 2), REDUCE(sym_delete_statement, 2),
    [1559] = {.count = 15, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_with_item, 1), REDUCE_FRAGILE(sym_unary_operator, 2), REDUCE(sym_list_splat_argument, 2), REDUCE(aux_sym_print_statement_repeat1, 2), REDUCE(aux_sym_subscript_repeat1, 2), REDUCE(aux_sym_call_repeat2, 2), REDUCE(sym_with_item, 3), REDUCE(sym_default_parameter, 3), REDUCE_FRAGILE(sym_binary_operator, 3), REDUCE(sym_keyword_argument, 3), REDUCE(sym_pair, 3), REDUCE(aux_sym_print_statement_repeat1, 3), REDUCE(aux_sym_subscript_repeat1, 3), REDUCE(aux_sym_call_repeat2, 3), SHIFT(725),
    [1575] = {.count = 8, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_with_item, 1), REDUCE(sym_expression_list, 1), REDUCE_FRAGILE(sym_unary_operator, 2), REDUCE(aux_sym_print_statement_repeat1, 2), REDUCE(sym_with_item, 3), REDUCE_FRAGILE(sym_binary_operator, 3), REDUCE(aux_sym_print_statement_repeat1, 3), SHIFT(726),
    [1584] = {.count = 4, .reusable = true, .depends_on_lookahead = false}, REDUCE_FRAGILE(sym_unary_operator, 2), REDUCE_FRAGILE(sym_binary_operator, 3), REDUCE(sym_pair, 3), SHIFT(727),
    [1589] = {.count = 5, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_expression_list, 1), REDUCE_FRAGILE(sym_unary_operator, 2), REDUCE(aux_sym_print_statement_repeat1, 2), REDUCE_FRAGILE(sym_binary_operator, 3), REDUCE(aux_sym_print_statement_repeat1, 3),
    [1595] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE_FRAGILE(sym_unary_operator, 2), REDUCE_FRAGILE(sym_binary_operator, 3), SHIFT(634),
    [1599] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE_FRAGILE(sym_unary_operator, 2), REDUCE_FRAGILE(sym_binary_operator, 3), SHIFT(31),
    [1603] = {.count = 12, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_expression_list, 1), REDUCE_FRAGILE(sym_unary_operator, 2), REDUCE(sym_list_splat_argument, 2), REDUCE(sym_dictionary_splat_argument, 2), REDUCE(aux_sym_print_statement_repeat1, 2), REDUCE(aux_sym_call_repeat2, 2), REDUCE(sym_default_parameter, 3), REDUCE_FRAGILE(sym_binary_operator, 3), REDUCE(sym_keyword_argument, 3), REDUCE(aux_sym_print_statement_repeat1, 3), REDUCE(aux_sym_call_repeat2, 3), SHIFT(728),
    [1616] = {.count = 3, .reusable = true, .depends_on_lookahead = true}, REDUCE_FRAGILE(sym_unary_operator, 2), REDUCE_FRAGILE(sym_binary_operator, 3), SHIFT(644),
    [1620] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE_FRAGILE(sym_unary_operator, 2), REDUCE_FRAGILE(sym_binary_operator, 3), SHIFT(644),
    [1624] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE_FRAGILE(sym_unary_operator, 2), REDUCE_FRAGILE(sym_binary_operator, 3), SHIFT(38),
    [1628] = {.count = 7, .reusable = true, .depends_on_lookahead = false}, REDUCE_FRAGILE(sym_unary_operator, 2), REDUCE(aux_sym_print_statement_repeat1, 2), REDUCE(aux_sym_subscript_repeat1, 2), REDUCE_FRAGILE(sym_binary_operator, 3), REDUCE(aux_sym_print_statement_repeat1, 3), REDUCE(aux_sym_subscript_repeat1, 3), SHIFT(729),
    [1636] = {.count = 6, .reusable = true, .depends_on_lookahead = false}, REDUCE_FRAGILE(sym_unary_operator, 2), REDUCE(aux_sym_print_statement_repeat1, 2), REDUCE_FRAGILE(sym_binary_operator, 3), REDUCE(sym_pair, 3), REDUCE(aux_sym_print_statement_repeat1, 3), SHIFT(730),
    [1643] = {.count = 7, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_expression_statement, 1), REDUCE(sym_expression_list, 1), REDUCE(sym_print_statement, 2), REDUCE_FRAGILE(sym_unary_operator, 2), REDUCE(aux_sym_print_statement_repeat1, 2), REDUCE_FRAGILE(sym_binary_operator, 3), REDUCE(aux_sym_print_statement_repeat1, 3),
    [1651] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_call_repeat2, 2), REDUCE(aux_sym_call_repeat2, 3), SHIFT(724),
    [1655] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_call_repeat2, 2), REDUCE(aux_sym_call_repeat2, 3), SHIFT(721),
    [1659] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(720),
    [1661] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(721),
    [1663] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(719),
    [1665] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_dictionary_repeat1, 2), REDUCE(aux_sym_dictionary_repeat1, 3), SHIFT(324),
    [1669] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_dictionary_repeat1, 2), REDUCE(aux_sym_dictionary_repeat1, 3), SHIFT(326),
    [1673] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(625),
    [1675] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(709),
    [1677] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(631),
    [1679] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(632),
    [1681] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(636),
    [1683] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(637),
    [1685] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(642),
    [1687] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(694),
    [1689] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(703),
    [1691] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_expression_list, 2), SHIFT(371),
    [1694] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_expression_list, 2), REDUCE(sym_print_statement, 3),
    [1697] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(627),
    [1699] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(628),
    [1701] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(633),
    [1703] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(689),
    [1705] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(637),
    [1707] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(642),
    [1709] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(684),
    [1711] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(685),
    [1713] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_call, 5), REDUCE(sym_call, 6),
    [1716] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_call, 5), REDUCE(sym_call, 6),
    [1719] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(687),
    [1721] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_call, 7), REDUCE(sym_call, 8),
    [1724] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_call, 7), REDUCE(sym_call, 8),
    [1727] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(704),
    [1729] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(706),
    [1731] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(706),
    [1733] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE_FRAGILE(sym_binary_operator, 3), SHIFT(31),
    [1736] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE_FRAGILE(sym_binary_operator, 3), SHIFT(706),
    [1739] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE_FRAGILE(sym_binary_operator, 3), SHIFT(706),
    [1742] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE_FRAGILE(sym_binary_operator, 3), SHIFT(38),
    [1745] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE_FRAGILE(sym_unary_operator, 2), SHIFT(31),
    [1748] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE_FRAGILE(sym_unary_operator, 2), SHIFT(706),
    [1751] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE_FRAGILE(sym_unary_operator, 2), SHIFT(706),
    [1754] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE_FRAGILE(sym_unary_operator, 2), SHIFT(38),
    [1757] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(712),
    [1759] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(714),
    [1761] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_call, 4), REDUCE(sym_call, 5),
    [1764] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_call, 4), REDUCE(sym_call, 5),
    [1767] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(723),
    [1769] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_call, 6), REDUCE(sym_call, 7),
    [1772] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_call, 6), REDUCE(sym_call, 7),
    [1775] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_call_repeat1, 2), REDUCE(aux_sym_call_repeat1, 3),
    [1778] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_call_repeat1, 2), REDUCE(aux_sym_call_repeat1, 3),
    [1781] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_call_repeat1, 2), REDUCE(aux_sym_call_repeat1, 3),
    [1784] = {.count = 3, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_call_repeat1, 2), REDUCE(aux_sym_call_repeat1, 3), SHIFT(704),
    [1788] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(747),
    [1790] = {.count = 3, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_call_repeat1, 2), REDUCE(aux_sym_call_repeat1, 3), SHIFT(17),
    [1794] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_arguments, 3), REDUCE(sym_call, 4), REDUCE(sym_call, 5),
    [1798] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_list, 3), REDUCE(sym_subscript, 4), REDUCE(sym_list_comprehension, 7),
    [1802] = {.count = 3, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_list, 3), REDUCE(sym_subscript, 4), REDUCE(sym_list_comprehension, 7),
    [1806] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_set, 3), REDUCE(sym_dictionary_comprehension, 7), REDUCE(sym_set_comprehension, 7),
    [1810] = {.count = 3, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_set, 3), REDUCE(sym_dictionary_comprehension, 7), REDUCE(sym_set_comprehension, 7),
    [1814] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE_FRAGILE(sym_binary_operator, 3), SHIFT(644),
    [1817] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE_FRAGILE(sym_binary_operator, 3), SHIFT(644),
    [1820] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(733),
    [1822] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(734),
    [1824] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(736),
    [1826] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(736),
    [1828] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE_FRAGILE(sym_binary_operator, 3), SHIFT(46),
    [1831] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE_FRAGILE(sym_binary_operator, 3), SHIFT(736),
    [1834] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE_FRAGILE(sym_binary_operator, 3), SHIFT(736),
    [1837] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE_FRAGILE(sym_binary_operator, 3), SHIFT(53),
    [1840] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE_FRAGILE(sym_unary_operator, 2), SHIFT(46),
    [1843] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE_FRAGILE(sym_unary_operator, 2), SHIFT(736),
    [1846] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE_FRAGILE(sym_unary_operator, 2), SHIFT(736),
    [1849] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE_FRAGILE(sym_unary_operator, 2), SHIFT(53),
    [1852] = {.count = 5, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_if_statement, 4), REDUCE(sym_elif_clause, 4), REDUCE(sym_while_statement, 4), REDUCE(sym_except_clause, 4), REDUCE(sym_except_clause, 6),
    [1858] = {.count = 5, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_if_statement, 4), REDUCE(sym_elif_clause, 4), REDUCE(sym_while_statement, 4), REDUCE(sym_except_clause, 4), REDUCE(sym_except_clause, 6),
    [1864] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_except_clause, 4), REDUCE(sym_except_clause, 6),
    [1867] = {.count = 5, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_if_statement, 4), REDUCE(sym_elif_clause, 4), REDUCE(sym_while_statement, 4), REDUCE(sym_except_clause, 4), REDUCE(sym_except_clause, 6),
    [1873] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(742),
    [1875] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(742),
    [1877] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE_FRAGILE(sym_binary_operator, 3), SHIFT(742),
    [1880] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE_FRAGILE(sym_binary_operator, 3), SHIFT(742),
    [1883] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_if_statement, 5), REDUCE(sym_while_statement, 5),
    [1886] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_if_statement, 5), REDUCE(sym_while_statement, 5),
    [1889] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_if_statement, 5), REDUCE(sym_while_statement, 5),
    [1892] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE_FRAGILE(sym_unary_operator, 2), SHIFT(742),
    [1895] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE_FRAGILE(sym_unary_operator, 2), SHIFT(742),
    [1898] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_list, 4), REDUCE(sym_subscript, 5),
    [1901] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_list, 4), REDUCE(sym_subscript, 5),
    [1904] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_print_statement_repeat1, 2), REDUCE(aux_sym_subscript_repeat1, 2),
    [1907] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_print_statement_repeat1, 2), SHIFT(749),
    [1910] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(752),
    [1912] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_if_statement, 5), REDUCE(sym_while_statement, 5), REDUCE(sym_for_statement, 7),
    [1916] = {.count = 3, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_if_statement, 5), REDUCE(sym_while_statement, 5), REDUCE(sym_for_statement, 7),
    [1920] = {.count = 3, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_if_statement, 5), REDUCE(sym_while_statement, 5), REDUCE(sym_for_statement, 7),
    [1924] = {.count = 4, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_parameters, 3), REDUCE(sym_parameters, 4), REDUCE(sym_parameters, 5), REDUCE(sym_parameters, 6),
    [1929] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_parameters, 3), REDUCE(sym_parameters, 4),
    [1932] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(761),
    [1934] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_parameters, 5), REDUCE(sym_parameters, 6),
    [1937] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(763),
    [1939] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_parameters_repeat1, 2), REDUCE(aux_sym_parameters_repeat1, 3),
    [1942] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_parameters_repeat1, 2), REDUCE(aux_sym_parameters_repeat1, 3),
    [1945] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_parameters, 4), REDUCE(sym_parameters, 5),
    [1948] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(771),
    [1950] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__expression, 1), SHIFT(451),
    [1953] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__expression, 1), SHIFT(448),
    [1956] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(775),
    [1958] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(776),
    [1960] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_list, 3), REDUCE(sym_subscript, 4),
    [1963] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_list, 3), REDUCE(sym_subscript, 4),
    [1966] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE_FRAGILE(sym_unary_operator, 2), SHIFT(644),
    [1969] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE_FRAGILE(sym_unary_operator, 2), SHIFT(644),
    [1972] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_dictionary_splat_argument, 2), REDUCE_FRAGILE(sym_binary_operator, 3),
    [1975] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_dotted_name_repeat1, 2), REDUCE(aux_sym_dotted_name_repeat1, 3),
    [1978] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(769),
    [1980] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(782),
    [1982] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__expression, 1), REDUCE(sym_list_splat_parameter, 2),
    [1985] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__expression, 1), REDUCE(sym_list_splat_parameter, 2), REDUCE(sym_dictionary_splat_parameter, 3),
    [1989] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_list_splat_argument, 2), REDUCE_FRAGILE(sym_binary_operator, 3),
    [1992] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_default_parameter, 3), REDUCE(sym_keyword_argument, 3),
    [1995] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(792),
    [1997] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(789),
    [1999] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_expression_list, 1), SHIFT(790),
    [2002] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_call_repeat1, 2), SHIFT(79),
    [2005] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_call_repeat1, 2), SHIFT(40),
    [2008] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_call_repeat1, 2), SHIFT(42),
    [2011] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_call_repeat1, 2), SHIFT(43),
    [2014] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_call_repeat1, 2), SHIFT(43),
    [2017] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_arguments, 3), REDUCE(sym_call, 4),
    [2020] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(766),
    [2022] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_with_item, 3), SHIFT(749),
    [2025] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(799),
    [2027] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(800),
    [2029] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(749),
    [2031] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(633),
    [2033] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(635),
    [2035] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(806),
    [2037] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(811),
    [2039] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(811),
    [2041] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(812),
    [2043] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_dictionary_comprehension, 7), REDUCE(sym_set_comprehension, 7),
    [2046] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_dictionary_comprehension, 7), REDUCE(sym_set_comprehension, 7),
    [2049] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE_FRAGILE(sym_binary_operator, 3), SHIFT(811),
    [2052] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE_FRAGILE(sym_binary_operator, 3), SHIFT(811),
    [2055] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE_FRAGILE(sym_unary_operator, 2), SHIFT(811),
    [2058] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE_FRAGILE(sym_unary_operator, 2), SHIFT(811),
    [2061] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(817),
    [2063] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(820),
    [2065] = {.count = 4, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_parameters, 4), REDUCE(sym_parameters, 5), REDUCE(sym_call, 5), REDUCE(sym_call, 6),
    [2070] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(824),
    [2072] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_subscript_repeat1, 2), REDUCE(aux_sym_subscript_repeat1, 3),
    [2075] = {.count = 4, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_list, 4), REDUCE(sym_subscript, 5), REDUCE(sym_list, 5), REDUCE(sym_subscript, 6),
    [2080] = {.count = 4, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_list, 4), REDUCE(sym_subscript, 5), REDUCE(sym_list, 5), REDUCE(sym_subscript, 6),
    [2085] = {.count = 4, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_dictionary, 4), REDUCE(sym_set, 4), REDUCE(sym_dictionary, 5), REDUCE(sym_set, 5),
    [2090] = {.count = 4, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_dictionary, 4), REDUCE(sym_set, 4), REDUCE(sym_dictionary, 5), REDUCE(sym_set, 5),
    [2095] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_with_statement_repeat1, 2), REDUCE(aux_sym_with_statement_repeat1, 3),
    [2098] = {.count = 7, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_with_item, 1), REDUCE(aux_sym_print_statement_repeat1, 2), REDUCE(aux_sym_subscript_repeat1, 2), REDUCE(aux_sym_call_repeat2, 2), REDUCE(aux_sym_print_statement_repeat1, 3), REDUCE(aux_sym_subscript_repeat1, 3), REDUCE(aux_sym_call_repeat2, 3),
    [2106] = {.count = 4, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_with_item, 1), REDUCE(aux_sym_print_statement_repeat1, 2), REDUCE(aux_sym_print_statement_repeat1, 3), SHIFT(835),
    [2111] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_print_statement_repeat1, 2), REDUCE(aux_sym_print_statement_repeat1, 3),
    [2114] = {.count = 4, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_print_statement_repeat1, 2), REDUCE(aux_sym_call_repeat2, 2), REDUCE(aux_sym_print_statement_repeat1, 3), REDUCE(aux_sym_call_repeat2, 3),
    [2119] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(836),
    [2121] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(836),
    [2123] = {.count = 4, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_print_statement_repeat1, 2), REDUCE(aux_sym_subscript_repeat1, 2), REDUCE(aux_sym_print_statement_repeat1, 3), REDUCE(aux_sym_subscript_repeat1, 3),
    [2128] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_call_repeat2, 2), REDUCE(aux_sym_call_repeat2, 3),
    [2131] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(834),
    [2133] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_dictionary_repeat1, 2), REDUCE(aux_sym_dictionary_repeat1, 3),
    [2136] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_call, 6), REDUCE(sym_call, 7), REDUCE(sym_call, 8),
    [2140] = {.count = 3, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_call, 6), REDUCE(sym_call, 7), REDUCE(sym_call, 8),
    [2144] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(838),
    [2146] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE_FRAGILE(sym_binary_operator, 3), SHIFT(836),
    [2149] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE_FRAGILE(sym_binary_operator, 3), SHIFT(836),
    [2152] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(840),
    [2154] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(840),
    [2156] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE_FRAGILE(sym_binary_operator, 3), SHIFT(840),
    [2159] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE_FRAGILE(sym_binary_operator, 3), SHIFT(840),
    [2162] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE_FRAGILE(sym_unary_operator, 2), SHIFT(840),
    [2165] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE_FRAGILE(sym_unary_operator, 2), SHIFT(840),
    [2168] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE_FRAGILE(sym_unary_operator, 2), SHIFT(836),
    [2171] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE_FRAGILE(sym_unary_operator, 2), SHIFT(836),
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
