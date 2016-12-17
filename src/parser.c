#include <tree_sitter/parser.h>

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"

#define STATE_COUNT 652
#define SYMBOL_COUNT 107
#define TOKEN_COUNT 51
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
    anon_sym_LBRACK = 40,
    anon_sym_DOT_DOT_DOT = 41,
    anon_sym_RBRACK = 42,
    anon_sym_LBRACE = 43,
    anon_sym_RBRACE = 44,
    sym_number = 45,
    sym_identifier = 46,
    sym_comment = 47,
    sym__newline = 48,
    sym__indent = 49,
    sym__dedent = 50,
    sym_module = 51,
    sym__statement = 52,
    sym__simple_statement = 53,
    sym_print_statement = 54,
    sym_expression_statement = 55,
    sym_return_statement = 56,
    sym_delete_statement = 57,
    sym__compound_statement = 58,
    sym_if_statement = 59,
    sym_elif_clause = 60,
    sym_else_clause = 61,
    sym_for_statement = 62,
    sym_while_statement = 63,
    sym_try_statement = 64,
    sym_except_clause = 65,
    sym_finally_clause = 66,
    sym_with_statement = 67,
    sym_with_item = 68,
    sym_function_definition = 69,
    sym_parameters = 70,
    sym_default_parameter = 71,
    sym_list_splat_parameter = 72,
    sym_dictionary_splat_parameter = 73,
    sym_class_definition = 74,
    sym_decorated_definition = 75,
    sym_decorator = 76,
    sym__suite = 77,
    sym_arguments = 78,
    sym_expression_list = 79,
    sym_dotted_name = 80,
    sym__expression = 81,
    sym_binary_operator = 82,
    sym_subscript = 83,
    sym_call = 84,
    sym_keyword_argument = 85,
    sym_list_splat_argument = 86,
    sym_dictionary_splat_argument = 87,
    sym_list = 88,
    sym_list_comprehension = 89,
    sym_dictionary = 90,
    sym_dictionary_comprehension = 91,
    sym_pair = 92,
    sym_set = 93,
    sym_set_comprehension = 94,
    aux_sym_module_repeat1 = 95,
    aux_sym_print_statement_repeat1 = 96,
    aux_sym_if_statement_repeat1 = 97,
    aux_sym_try_statement_repeat1 = 98,
    aux_sym_with_statement_repeat1 = 99,
    aux_sym_parameters_repeat1 = 100,
    aux_sym_decorated_definition_repeat1 = 101,
    aux_sym_dotted_name_repeat1 = 102,
    aux_sym_subscript_repeat1 = 103,
    aux_sym_call_repeat1 = 104,
    aux_sym_call_repeat2 = 105,
    aux_sym_dictionary_repeat1 = 106,
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
                ('j' <= lookahead && lookahead <= 'n') ||
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
            if (lookahead == 'o')
                ADVANCE(78);
            if (lookahead == 'p')
                ADVANCE(80);
            if (lookahead == 'r')
                ADVANCE(88);
            if (lookahead == 't')
                ADVANCE(94);
            if (lookahead == 'w')
                ADVANCE(97);
            if (lookahead == '{')
                ADVANCE(105);
            if (lookahead == '|')
                ADVANCE(106);
            if (lookahead == '}')
                ADVANCE(107);
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
                ('a' <= lookahead && lookahead <= 'q') ||
                ('s' <= lookahead && lookahead <= 'z'))
                ADVANCE(26);
            if (lookahead == 'r')
                ADVANCE(79);
            ACCEPT_TOKEN(sym_identifier);
        case 79:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(26);
            ACCEPT_TOKEN(anon_sym_or);
        case 80:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('b' <= lookahead && lookahead <= 'q') ||
                ('s' <= lookahead && lookahead <= 'z'))
                ADVANCE(26);
            if (lookahead == 'a')
                ADVANCE(81);
            if (lookahead == 'r')
                ADVANCE(84);
            ACCEPT_TOKEN(sym_identifier);
        case 81:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'r') ||
                ('t' <= lookahead && lookahead <= 'z'))
                ADVANCE(26);
            if (lookahead == 's')
                ADVANCE(82);
            ACCEPT_TOKEN(sym_identifier);
        case 82:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'r') ||
                ('t' <= lookahead && lookahead <= 'z'))
                ADVANCE(26);
            if (lookahead == 's')
                ADVANCE(83);
            ACCEPT_TOKEN(sym_identifier);
        case 83:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(26);
            ACCEPT_TOKEN(sym_pass_statement);
        case 84:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'h') ||
                ('j' <= lookahead && lookahead <= 'z'))
                ADVANCE(26);
            if (lookahead == 'i')
                ADVANCE(85);
            ACCEPT_TOKEN(sym_identifier);
        case 85:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'm') ||
                ('o' <= lookahead && lookahead <= 'z'))
                ADVANCE(26);
            if (lookahead == 'n')
                ADVANCE(86);
            ACCEPT_TOKEN(sym_identifier);
        case 86:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 's') ||
                ('u' <= lookahead && lookahead <= 'z'))
                ADVANCE(26);
            if (lookahead == 't')
                ADVANCE(87);
            ACCEPT_TOKEN(sym_identifier);
        case 87:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(26);
            ACCEPT_TOKEN(anon_sym_print);
        case 88:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'z'))
                ADVANCE(26);
            if (lookahead == 'e')
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
                ('a' <= lookahead && lookahead <= 't') ||
                ('v' <= lookahead && lookahead <= 'z'))
                ADVANCE(26);
            if (lookahead == 'u')
                ADVANCE(91);
            ACCEPT_TOKEN(sym_identifier);
        case 91:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'q') ||
                ('s' <= lookahead && lookahead <= 'z'))
                ADVANCE(26);
            if (lookahead == 'r')
                ADVANCE(92);
            ACCEPT_TOKEN(sym_identifier);
        case 92:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'm') ||
                ('o' <= lookahead && lookahead <= 'z'))
                ADVANCE(26);
            if (lookahead == 'n')
                ADVANCE(93);
            ACCEPT_TOKEN(sym_identifier);
        case 93:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(26);
            ACCEPT_TOKEN(anon_sym_return);
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
                ('a' <= lookahead && lookahead <= 'x') ||
                (lookahead == 'z'))
                ADVANCE(26);
            if (lookahead == 'y')
                ADVANCE(96);
            ACCEPT_TOKEN(sym_identifier);
        case 96:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(26);
            ACCEPT_TOKEN(anon_sym_try);
        case 97:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'g') ||
                ('j' <= lookahead && lookahead <= 'z'))
                ADVANCE(26);
            if (lookahead == 'h')
                ADVANCE(98);
            if (lookahead == 'i')
                ADVANCE(102);
            ACCEPT_TOKEN(sym_identifier);
        case 98:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'h') ||
                ('j' <= lookahead && lookahead <= 'z'))
                ADVANCE(26);
            if (lookahead == 'i')
                ADVANCE(99);
            ACCEPT_TOKEN(sym_identifier);
        case 99:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'k') ||
                ('m' <= lookahead && lookahead <= 'z'))
                ADVANCE(26);
            if (lookahead == 'l')
                ADVANCE(100);
            ACCEPT_TOKEN(sym_identifier);
        case 100:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'z'))
                ADVANCE(26);
            if (lookahead == 'e')
                ADVANCE(101);
            ACCEPT_TOKEN(sym_identifier);
        case 101:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(26);
            ACCEPT_TOKEN(anon_sym_while);
        case 102:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 's') ||
                ('u' <= lookahead && lookahead <= 'z'))
                ADVANCE(26);
            if (lookahead == 't')
                ADVANCE(103);
            ACCEPT_TOKEN(sym_identifier);
        case 103:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'g') ||
                ('i' <= lookahead && lookahead <= 'z'))
                ADVANCE(26);
            if (lookahead == 'h')
                ADVANCE(104);
            ACCEPT_TOKEN(sym_identifier);
        case 104:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(26);
            ACCEPT_TOKEN(anon_sym_with);
        case 105:
            ACCEPT_TOKEN(anon_sym_LBRACE);
        case 106:
            ACCEPT_TOKEN(anon_sym_PIPE);
        case 107:
            ACCEPT_TOKEN(anon_sym_RBRACE);
        case 108:
            if (lookahead == 0)
                ADVANCE(1);
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(108);
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
                ('j' <= lookahead && lookahead <= 'o') ||
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
                ADVANCE(109);
            if (lookahead == 'i')
                ADVANCE(110);
            if (lookahead == 'p')
                ADVANCE(80);
            if (lookahead == 'r')
                ADVANCE(88);
            if (lookahead == 't')
                ADVANCE(94);
            if (lookahead == 'w')
                ADVANCE(97);
            if (lookahead == '{')
                ADVANCE(105);
            LEX_ERROR();
        case 109:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'n') ||
                ('p' <= lookahead && lookahead <= 'z'))
                ADVANCE(26);
            if (lookahead == 'o')
                ADVANCE(73);
            ACCEPT_TOKEN(sym_identifier);
        case 110:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'e') ||
                ('g' <= lookahead && lookahead <= 'z'))
                ADVANCE(26);
            if (lookahead == 'f')
                ADVANCE(76);
            ACCEPT_TOKEN(sym_identifier);
        case 111:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(111);
            if (lookahead == '#')
                ADVANCE(2);
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(16);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(26);
            if (lookahead == '[')
                ADVANCE(27);
            if (lookahead == '{')
                ADVANCE(105);
            LEX_ERROR();
        case 112:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(112);
            if (lookahead == '#')
                ADVANCE(2);
            LEX_ERROR();
        case 113:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(113);
            if (lookahead == '#')
                ADVANCE(2);
            if (lookahead == ':')
                ADVANCE(18);
            LEX_ERROR();
        case 114:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(114);
            if (lookahead == '#')
                ADVANCE(2);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(26);
            LEX_ERROR();
        case 115:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(115);
            if (lookahead == '#')
                ADVANCE(2);
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(16);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(26);
            if (lookahead == '[')
                ADVANCE(27);
            if (lookahead == ']')
                ADVANCE(28);
            if (lookahead == '{')
                ADVANCE(105);
            LEX_ERROR();
        case 116:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(116);
            if (lookahead == '#')
                ADVANCE(2);
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(16);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(26);
            if (lookahead == '[')
                ADVANCE(27);
            if (lookahead == '{')
                ADVANCE(105);
            if (lookahead == '}')
                ADVANCE(107);
            LEX_ERROR();
        case 117:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(117);
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
                ADVANCE(118);
            if (lookahead == 'f')
                ADVANCE(122);
            if (lookahead == 'i')
                ADVANCE(125);
            if (lookahead == 'o')
                ADVANCE(127);
            if (lookahead == '|')
                ADVANCE(106);
            if (lookahead == '}')
                ADVANCE(107);
            LEX_ERROR();
        case 118:
            if (lookahead == 'n')
                ADVANCE(119);
            if (lookahead == 's')
                ADVANCE(121);
            LEX_ERROR();
        case 119:
            if (lookahead == 'd')
                ADVANCE(120);
            LEX_ERROR();
        case 120:
            ACCEPT_TOKEN(anon_sym_and);
        case 121:
            ACCEPT_TOKEN(anon_sym_as);
        case 122:
            if (lookahead == 'o')
                ADVANCE(123);
            LEX_ERROR();
        case 123:
            if (lookahead == 'r')
                ADVANCE(124);
            LEX_ERROR();
        case 124:
            ACCEPT_TOKEN(anon_sym_for);
        case 125:
            if (lookahead == 'n')
                ADVANCE(126);
            LEX_ERROR();
        case 126:
            ACCEPT_TOKEN(anon_sym_in);
        case 127:
            if (lookahead == 'r')
                ADVANCE(128);
            LEX_ERROR();
        case 128:
            ACCEPT_TOKEN(anon_sym_or);
        case 129:
            if (lookahead == 0)
                ADVANCE(1);
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(129);
            if (lookahead == '#')
                ADVANCE(2);
            LEX_ERROR();
        case 130:
            if (lookahead == 0)
                ADVANCE(1);
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(130);
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
                ('j' <= lookahead && lookahead <= 'o') ||
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
                ADVANCE(109);
            if (lookahead == 'i')
                ADVANCE(110);
            if (lookahead == 'p')
                ADVANCE(80);
            if (lookahead == 'r')
                ADVANCE(88);
            if (lookahead == 't')
                ADVANCE(94);
            if (lookahead == 'w')
                ADVANCE(97);
            if (lookahead == '{')
                ADVANCE(105);
            LEX_ERROR();
        case 131:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(131);
            if (lookahead == '#')
                ADVANCE(2);
            if (lookahead == '@')
                ADVANCE(25);
            if (lookahead == 'c')
                ADVANCE(132);
            if (lookahead == 'd')
                ADVANCE(137);
            LEX_ERROR();
        case 132:
            if (lookahead == 'l')
                ADVANCE(133);
            LEX_ERROR();
        case 133:
            if (lookahead == 'a')
                ADVANCE(134);
            LEX_ERROR();
        case 134:
            if (lookahead == 's')
                ADVANCE(135);
            LEX_ERROR();
        case 135:
            if (lookahead == 's')
                ADVANCE(136);
            LEX_ERROR();
        case 136:
            ACCEPT_TOKEN(anon_sym_class);
        case 137:
            if (lookahead == 'e')
                ADVANCE(138);
            LEX_ERROR();
        case 138:
            if (lookahead == 'f')
                ADVANCE(139);
            LEX_ERROR();
        case 139:
            ACCEPT_TOKEN(anon_sym_def);
        case 140:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(140);
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
                ADVANCE(141);
            if (lookahead == 'o')
                ADVANCE(127);
            if (lookahead == '|')
                ADVANCE(106);
            LEX_ERROR();
        case 141:
            if (lookahead == 'n')
                ADVANCE(119);
            LEX_ERROR();
        case 142:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(142);
            if (lookahead == '#')
                ADVANCE(2);
            if (lookahead == '*')
                ADVANCE(7);
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(16);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(26);
            if (lookahead == '[')
                ADVANCE(27);
            if (lookahead == '{')
                ADVANCE(105);
            LEX_ERROR();
        case 143:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(143);
            if (lookahead == '#')
                ADVANCE(2);
            if (lookahead == '.')
                ADVANCE(144);
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(16);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(26);
            if (lookahead == '[')
                ADVANCE(27);
            if (lookahead == '{')
                ADVANCE(105);
            LEX_ERROR();
        case 144:
            if (lookahead == '.')
                ADVANCE(13);
            LEX_ERROR();
        case 145:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(145);
            if (lookahead == '#')
                ADVANCE(2);
            if (lookahead == ',')
                ADVANCE(10);
            if (lookahead == ']')
                ADVANCE(28);
            LEX_ERROR();
        case 146:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(146);
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
                ADVANCE(141);
            if (lookahead == 'o')
                ADVANCE(127);
            if (lookahead == '|')
                ADVANCE(106);
            LEX_ERROR();
        case 147:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(147);
            if (lookahead == '#')
                ADVANCE(2);
            if (lookahead == '.')
                ADVANCE(144);
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(16);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(26);
            if (lookahead == '[')
                ADVANCE(27);
            if (lookahead == ']')
                ADVANCE(28);
            if (lookahead == '{')
                ADVANCE(105);
            LEX_ERROR();
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
                ADVANCE(141);
            if (lookahead == 'o')
                ADVANCE(127);
            if (lookahead == '|')
                ADVANCE(106);
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
                ADVANCE(141);
            if (lookahead == 'o')
                ADVANCE(127);
            if (lookahead == '|')
                ADVANCE(106);
            LEX_ERROR();
        case 150:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(150);
            if (lookahead == '#')
                ADVANCE(2);
            if (lookahead == ')')
                ADVANCE(6);
            if (lookahead == ',')
                ADVANCE(10);
            LEX_ERROR();
        case 151:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(151);
            if (lookahead == '#')
                ADVANCE(2);
            if (lookahead == ')')
                ADVANCE(6);
            LEX_ERROR();
        case 152:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(152);
            if (lookahead == '#')
                ADVANCE(2);
            if (lookahead == '*')
                ADVANCE(153);
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(16);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(26);
            if (lookahead == '[')
                ADVANCE(27);
            if (lookahead == '{')
                ADVANCE(105);
            LEX_ERROR();
        case 153:
            if (lookahead == '*')
                ADVANCE(8);
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
            if (lookahead == '*')
                ADVANCE(7);
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(16);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(26);
            if (lookahead == '[')
                ADVANCE(27);
            if (lookahead == '{')
                ADVANCE(105);
            LEX_ERROR();
        case 155:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(155);
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
                ADVANCE(141);
            if (lookahead == 'f')
                ADVANCE(122);
            if (lookahead == 'o')
                ADVANCE(127);
            if (lookahead == '|')
                ADVANCE(106);
            if (lookahead == '}')
                ADVANCE(107);
            LEX_ERROR();
        case 156:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(156);
            if (lookahead == '#')
                ADVANCE(2);
            if (lookahead == ',')
                ADVANCE(10);
            if (lookahead == 'f')
                ADVANCE(122);
            if (lookahead == '}')
                ADVANCE(107);
            LEX_ERROR();
        case 157:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(157);
            if (lookahead == '#')
                ADVANCE(2);
            if (lookahead == ',')
                ADVANCE(10);
            if (lookahead == '}')
                ADVANCE(107);
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
                ADVANCE(141);
            if (lookahead == 'o')
                ADVANCE(127);
            if (lookahead == '|')
                ADVANCE(106);
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
            if (lookahead == '^')
                ADVANCE(29);
            if (lookahead == 'a')
                ADVANCE(141);
            if (lookahead == 'f')
                ADVANCE(122);
            if (lookahead == 'o')
                ADVANCE(127);
            if (lookahead == '|')
                ADVANCE(106);
            if (lookahead == '}')
                ADVANCE(107);
            LEX_ERROR();
        case 160:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(160);
            if (lookahead == '#')
                ADVANCE(2);
            if (lookahead == 'i')
                ADVANCE(125);
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
                ADVANCE(141);
            if (lookahead == 'i')
                ADVANCE(125);
            if (lookahead == 'o')
                ADVANCE(127);
            if (lookahead == '|')
                ADVANCE(106);
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
            if (lookahead == ',')
                ADVANCE(10);
            if (lookahead == ':')
                ADVANCE(18);
            if (lookahead == 'i')
                ADVANCE(125);
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
                ADVANCE(141);
            if (lookahead == 'i')
                ADVANCE(125);
            if (lookahead == 'o')
                ADVANCE(127);
            if (lookahead == '|')
                ADVANCE(106);
            if (lookahead == '}')
                ADVANCE(107);
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
                ADVANCE(141);
            if (lookahead == 'o')
                ADVANCE(127);
            if (lookahead == '|')
                ADVANCE(106);
            if (lookahead == '}')
                ADVANCE(107);
            LEX_ERROR();
        case 165:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(165);
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
                ADVANCE(141);
            if (lookahead == 'f')
                ADVANCE(122);
            if (lookahead == 'o')
                ADVANCE(127);
            if (lookahead == '|')
                ADVANCE(106);
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
            if (lookahead == ']')
                ADVANCE(28);
            if (lookahead == '^')
                ADVANCE(29);
            if (lookahead == 'a')
                ADVANCE(141);
            if (lookahead == 'o')
                ADVANCE(127);
            if (lookahead == '|')
                ADVANCE(106);
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
                ADVANCE(141);
            if (lookahead == 'o')
                ADVANCE(127);
            if (lookahead == '|')
                ADVANCE(106);
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
            if (lookahead == '^')
                ADVANCE(29);
            if (lookahead == 'a')
                ADVANCE(141);
            if (lookahead == 'o')
                ADVANCE(127);
            if (lookahead == '|')
                ADVANCE(106);
            LEX_ERROR();
        case 169:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(169);
            if (lookahead == '#')
                ADVANCE(2);
            if (lookahead == '(')
                ADVANCE(5);
            if (lookahead == '.')
                ADVANCE(170);
            LEX_ERROR();
        case 170:
            ACCEPT_TOKEN(anon_sym_DOT);
        case 171:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(171);
            if (lookahead == '#')
                ADVANCE(2);
            if (lookahead == '(')
                ADVANCE(5);
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
            if (lookahead == ':')
                ADVANCE(18);
            LEX_ERROR();
        case 173:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(173);
            if (lookahead == '#')
                ADVANCE(2);
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(16);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == 'a') ||
                ('e' <= lookahead && lookahead <= 'o') ||
                (lookahead == 'q') ||
                ('s' <= lookahead && lookahead <= 'z'))
                ADVANCE(26);
            if (lookahead == '[')
                ADVANCE(27);
            if (lookahead == 'b')
                ADVANCE(34);
            if (lookahead == 'c')
                ADVANCE(174);
            if (lookahead == 'd')
                ADVANCE(175);
            if (lookahead == 'p')
                ADVANCE(80);
            if (lookahead == 'r')
                ADVANCE(88);
            if (lookahead == '{')
                ADVANCE(105);
            LEX_ERROR();
        case 174:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'n') ||
                ('p' <= lookahead && lookahead <= 'z'))
                ADVANCE(26);
            if (lookahead == 'o')
                ADVANCE(44);
            ACCEPT_TOKEN(sym_identifier);
        case 175:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'z'))
                ADVANCE(26);
            if (lookahead == 'e')
                ADVANCE(176);
            ACCEPT_TOKEN(sym_identifier);
        case 176:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'k') ||
                ('m' <= lookahead && lookahead <= 'z'))
                ADVANCE(26);
            if (lookahead == 'l')
                ADVANCE(54);
            ACCEPT_TOKEN(sym_identifier);
        case 177:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(177);
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
                ('j' <= lookahead && lookahead <= 'o') ||
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
                ADVANCE(109);
            if (lookahead == 'i')
                ADVANCE(110);
            if (lookahead == 'p')
                ADVANCE(80);
            if (lookahead == 'r')
                ADVANCE(88);
            if (lookahead == 't')
                ADVANCE(94);
            if (lookahead == 'w')
                ADVANCE(97);
            if (lookahead == '{')
                ADVANCE(105);
            LEX_ERROR();
        case 178:
            if (lookahead == 0)
                ADVANCE(1);
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(178);
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
                ('j' <= lookahead && lookahead <= 'o') ||
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
                ADVANCE(110);
            if (lookahead == 'p')
                ADVANCE(80);
            if (lookahead == 'r')
                ADVANCE(88);
            if (lookahead == 't')
                ADVANCE(94);
            if (lookahead == 'w')
                ADVANCE(97);
            if (lookahead == '{')
                ADVANCE(105);
            LEX_ERROR();
        case 179:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(179);
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
                ('j' <= lookahead && lookahead <= 'o') ||
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
                ADVANCE(110);
            if (lookahead == 'p')
                ADVANCE(80);
            if (lookahead == 'r')
                ADVANCE(88);
            if (lookahead == 't')
                ADVANCE(94);
            if (lookahead == 'w')
                ADVANCE(97);
            if (lookahead == '{')
                ADVANCE(105);
            LEX_ERROR();
        case 180:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(180);
            if (lookahead == '#')
                ADVANCE(2);
            if (lookahead == ')')
                ADVANCE(6);
            if (lookahead == '*')
                ADVANCE(181);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(26);
            LEX_ERROR();
        case 181:
            ACCEPT_TOKEN(anon_sym_STAR);
        case 182:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(182);
            if (lookahead == '#')
                ADVANCE(2);
            if (lookahead == '*')
                ADVANCE(181);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(26);
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
            if (lookahead == ',')
                ADVANCE(10);
            if (lookahead == '=')
                ADVANCE(22);
            LEX_ERROR();
        case 184:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(184);
            if (lookahead == '#')
                ADVANCE(2);
            if (lookahead == '*')
                ADVANCE(181);
            LEX_ERROR();
        case 185:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(185);
            if (lookahead == '#')
                ADVANCE(2);
            if (lookahead == ',')
                ADVANCE(10);
            if (lookahead == ':')
                ADVANCE(18);
            LEX_ERROR();
        case 186:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(186);
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
                ADVANCE(118);
            if (lookahead == 'o')
                ADVANCE(127);
            if (lookahead == '|')
                ADVANCE(106);
            LEX_ERROR();
        case 187:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(187);
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
                ADVANCE(141);
            if (lookahead == 'o')
                ADVANCE(127);
            if (lookahead == '|')
                ADVANCE(106);
            LEX_ERROR();
        case 188:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(188);
            if (lookahead == '#')
                ADVANCE(2);
            if (lookahead == 'e')
                ADVANCE(189);
            if (lookahead == 'f')
                ADVANCE(195);
            LEX_ERROR();
        case 189:
            if (lookahead == 'x')
                ADVANCE(190);
            LEX_ERROR();
        case 190:
            if (lookahead == 'c')
                ADVANCE(191);
            LEX_ERROR();
        case 191:
            if (lookahead == 'e')
                ADVANCE(192);
            LEX_ERROR();
        case 192:
            if (lookahead == 'p')
                ADVANCE(193);
            LEX_ERROR();
        case 193:
            if (lookahead == 't')
                ADVANCE(194);
            LEX_ERROR();
        case 194:
            ACCEPT_TOKEN(anon_sym_except);
        case 195:
            if (lookahead == 'i')
                ADVANCE(196);
            LEX_ERROR();
        case 196:
            if (lookahead == 'n')
                ADVANCE(197);
            LEX_ERROR();
        case 197:
            if (lookahead == 'a')
                ADVANCE(198);
            LEX_ERROR();
        case 198:
            if (lookahead == 'l')
                ADVANCE(199);
            LEX_ERROR();
        case 199:
            if (lookahead == 'l')
                ADVANCE(200);
            LEX_ERROR();
        case 200:
            if (lookahead == 'y')
                ADVANCE(201);
            LEX_ERROR();
        case 201:
            ACCEPT_TOKEN(anon_sym_finally);
        case 202:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(202);
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
                ('j' <= lookahead && lookahead <= 'o') ||
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
                ADVANCE(203);
            if (lookahead == 'f')
                ADVANCE(66);
            if (lookahead == 'i')
                ADVANCE(110);
            if (lookahead == 'p')
                ADVANCE(80);
            if (lookahead == 'r')
                ADVANCE(88);
            if (lookahead == 't')
                ADVANCE(94);
            if (lookahead == 'w')
                ADVANCE(97);
            if (lookahead == '{')
                ADVANCE(105);
            LEX_ERROR();
        case 203:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'k') ||
                ('m' <= lookahead && lookahead <= 'w') ||
                (lookahead == 'y') ||
                (lookahead == 'z'))
                ADVANCE(26);
            if (lookahead == 'l')
                ADVANCE(204);
            if (lookahead == 'x')
                ADVANCE(61);
            ACCEPT_TOKEN(sym_identifier);
        case 204:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'r') ||
                ('t' <= lookahead && lookahead <= 'z'))
                ADVANCE(26);
            if (lookahead == 's')
                ADVANCE(59);
            ACCEPT_TOKEN(sym_identifier);
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
                (lookahead == 'e') ||
                (lookahead == 'g') ||
                (lookahead == 'h') ||
                ('j' <= lookahead && lookahead <= 'o') ||
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
                ADVANCE(110);
            if (lookahead == 'p')
                ADVANCE(80);
            if (lookahead == 'r')
                ADVANCE(88);
            if (lookahead == 't')
                ADVANCE(94);
            if (lookahead == 'w')
                ADVANCE(97);
            if (lookahead == '{')
                ADVANCE(105);
            LEX_ERROR();
        case 206:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(206);
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
                ('j' <= lookahead && lookahead <= 'o') ||
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
                ADVANCE(207);
            if (lookahead == 'f')
                ADVANCE(109);
            if (lookahead == 'i')
                ADVANCE(110);
            if (lookahead == 'p')
                ADVANCE(80);
            if (lookahead == 'r')
                ADVANCE(88);
            if (lookahead == 't')
                ADVANCE(94);
            if (lookahead == 'w')
                ADVANCE(97);
            if (lookahead == '{')
                ADVANCE(105);
            LEX_ERROR();
        case 207:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'k') ||
                ('m' <= lookahead && lookahead <= 'z'))
                ADVANCE(26);
            if (lookahead == 'l')
                ADVANCE(204);
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
                (lookahead == 'g') ||
                (lookahead == 'h') ||
                ('j' <= lookahead && lookahead <= 'o') ||
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
                ADVANCE(209);
            if (lookahead == 'f')
                ADVANCE(109);
            if (lookahead == 'i')
                ADVANCE(110);
            if (lookahead == 'p')
                ADVANCE(80);
            if (lookahead == 'r')
                ADVANCE(88);
            if (lookahead == 't')
                ADVANCE(94);
            if (lookahead == 'w')
                ADVANCE(97);
            if (lookahead == '{')
                ADVANCE(105);
            LEX_ERROR();
        case 209:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'k') ||
                ('m' <= lookahead && lookahead <= 'z'))
                ADVANCE(26);
            if (lookahead == 'l')
                ADVANCE(56);
            ACCEPT_TOKEN(sym_identifier);
        case 210:
            if (lookahead == 0)
                ADVANCE(1);
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(210);
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
                ('j' <= lookahead && lookahead <= 'o') ||
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
                ADVANCE(203);
            if (lookahead == 'f')
                ADVANCE(66);
            if (lookahead == 'i')
                ADVANCE(110);
            if (lookahead == 'p')
                ADVANCE(80);
            if (lookahead == 'r')
                ADVANCE(88);
            if (lookahead == 't')
                ADVANCE(94);
            if (lookahead == 'w')
                ADVANCE(97);
            if (lookahead == '{')
                ADVANCE(105);
            LEX_ERROR();
        case 211:
            if (lookahead == 0)
                ADVANCE(1);
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(211);
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
                ('j' <= lookahead && lookahead <= 'o') ||
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
                ADVANCE(110);
            if (lookahead == 'p')
                ADVANCE(80);
            if (lookahead == 'r')
                ADVANCE(88);
            if (lookahead == 't')
                ADVANCE(94);
            if (lookahead == 'w')
                ADVANCE(97);
            if (lookahead == '{')
                ADVANCE(105);
            LEX_ERROR();
        case 212:
            if (lookahead == 0)
                ADVANCE(1);
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(212);
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
                ('j' <= lookahead && lookahead <= 'o') ||
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
                ADVANCE(207);
            if (lookahead == 'f')
                ADVANCE(109);
            if (lookahead == 'i')
                ADVANCE(110);
            if (lookahead == 'p')
                ADVANCE(80);
            if (lookahead == 'r')
                ADVANCE(88);
            if (lookahead == 't')
                ADVANCE(94);
            if (lookahead == 'w')
                ADVANCE(97);
            if (lookahead == '{')
                ADVANCE(105);
            LEX_ERROR();
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
                ('j' <= lookahead && lookahead <= 'o') ||
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
                ADVANCE(209);
            if (lookahead == 'f')
                ADVANCE(109);
            if (lookahead == 'i')
                ADVANCE(110);
            if (lookahead == 'p')
                ADVANCE(80);
            if (lookahead == 'r')
                ADVANCE(88);
            if (lookahead == 't')
                ADVANCE(94);
            if (lookahead == 'w')
                ADVANCE(97);
            if (lookahead == '{')
                ADVANCE(105);
            LEX_ERROR();
        case 214:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(214);
            if (lookahead == '#')
                ADVANCE(2);
            if (lookahead == ',')
                ADVANCE(10);
            LEX_ERROR();
        case 215:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(215);
            if (lookahead == '#')
                ADVANCE(2);
            if (lookahead == ')')
                ADVANCE(6);
            if (lookahead == '*')
                ADVANCE(7);
            if (lookahead == '.')
                ADVANCE(144);
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(16);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(26);
            if (lookahead == '[')
                ADVANCE(27);
            if (lookahead == ']')
                ADVANCE(28);
            if (lookahead == '{')
                ADVANCE(105);
            if (lookahead == '}')
                ADVANCE(107);
            LEX_ERROR();
        case 216:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(216);
            if (lookahead == '#')
                ADVANCE(2);
            if (lookahead == '*')
                ADVANCE(181);
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(16);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(26);
            if (lookahead == '[')
                ADVANCE(27);
            if (lookahead == '{')
                ADVANCE(105);
            LEX_ERROR();
        case 217:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(217);
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
                ADVANCE(170);
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
                ADVANCE(118);
            if (lookahead == 'f')
                ADVANCE(122);
            if (lookahead == 'i')
                ADVANCE(125);
            if (lookahead == 'o')
                ADVANCE(127);
            if (lookahead == '|')
                ADVANCE(106);
            if (lookahead == '}')
                ADVANCE(107);
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
            if (lookahead == ':')
                ADVANCE(18);
            if (lookahead == 'i')
                ADVANCE(125);
            LEX_ERROR();
        case 219:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(219);
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
                ADVANCE(125);
            if (lookahead == '}')
                ADVANCE(107);
            LEX_ERROR();
        case 220:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(220);
            if (lookahead == '#')
                ADVANCE(2);
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(16);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(26);
            if (lookahead == '[')
                ADVANCE(27);
            if (lookahead == ']')
                ADVANCE(28);
            if (lookahead == '{')
                ADVANCE(105);
            if (lookahead == '}')
                ADVANCE(107);
            LEX_ERROR();
        case 221:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(221);
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
                ADVANCE(141);
            if (lookahead == 'o')
                ADVANCE(127);
            if (lookahead == '|')
                ADVANCE(106);
            if (lookahead == '}')
                ADVANCE(107);
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
            if (lookahead == '*')
                ADVANCE(181);
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(16);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(26);
            if (lookahead == '[')
                ADVANCE(27);
            if (lookahead == '{')
                ADVANCE(105);
            LEX_ERROR();
        case 223:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(223);
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
                ADVANCE(141);
            if (lookahead == 'o')
                ADVANCE(127);
            if (lookahead == '|')
                ADVANCE(106);
            if (lookahead == '}')
                ADVANCE(107);
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
                ADVANCE(118);
            if (lookahead == 'i')
                ADVANCE(125);
            if (lookahead == 'o')
                ADVANCE(127);
            if (lookahead == '|')
                ADVANCE(106);
            if (lookahead == '}')
                ADVANCE(107);
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
                ADVANCE(118);
            if (lookahead == 'i')
                ADVANCE(125);
            if (lookahead == 'o')
                ADVANCE(127);
            if (lookahead == '|')
                ADVANCE(106);
            if (lookahead == '}')
                ADVANCE(107);
            LEX_ERROR();
        case 226:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(226);
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
                ADVANCE(141);
            if (lookahead == 'o')
                ADVANCE(127);
            if (lookahead == '|')
                ADVANCE(106);
            if (lookahead == '}')
                ADVANCE(107);
            LEX_ERROR();
        default:
            LEX_ERROR();
    }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
    [0] = {.lex_state = 0, .external_tokens = 1},
    [1] = {.lex_state = 108},
    [2] = {.lex_state = 111},
    [3] = {.lex_state = 111},
    [4] = {.lex_state = 111},
    [5] = {.lex_state = 112, .external_tokens = 2},
    [6] = {.lex_state = 111},
    [7] = {.lex_state = 111},
    [8] = {.lex_state = 111},
    [9] = {.lex_state = 113},
    [10] = {.lex_state = 111},
    [11] = {.lex_state = 114},
    [12] = {.lex_state = 114},
    [13] = {.lex_state = 114},
    [14] = {.lex_state = 115},
    [15] = {.lex_state = 116},
    [16] = {.lex_state = 117, .external_tokens = 2},
    [17] = {.lex_state = 129},
    [18] = {.lex_state = 130, .external_tokens = 2},
    [19] = {.lex_state = 112, .external_tokens = 2},
    [20] = {.lex_state = 130, .external_tokens = 2},
    [21] = {.lex_state = 130, .external_tokens = 2},
    [22] = {.lex_state = 131},
    [23] = {.lex_state = 140, .external_tokens = 2},
    [24] = {.lex_state = 130, .external_tokens = 2},
    [25] = {.lex_state = 131},
    [26] = {.lex_state = 130, .external_tokens = 2},
    [27] = {.lex_state = 131},
    [28] = {.lex_state = 129},
    [29] = {.lex_state = 130, .external_tokens = 2},
    [30] = {.lex_state = 142},
    [31] = {.lex_state = 111},
    [32] = {.lex_state = 111},
    [33] = {.lex_state = 111},
    [34] = {.lex_state = 111},
    [35] = {.lex_state = 111},
    [36] = {.lex_state = 111},
    [37] = {.lex_state = 143},
    [38] = {.lex_state = 115},
    [39] = {.lex_state = 145},
    [40] = {.lex_state = 116},
    [41] = {.lex_state = 117},
    [42] = {.lex_state = 146},
    [43] = {.lex_state = 147},
    [44] = {.lex_state = 142},
    [45] = {.lex_state = 111},
    [46] = {.lex_state = 111},
    [47] = {.lex_state = 111},
    [48] = {.lex_state = 111},
    [49] = {.lex_state = 111},
    [50] = {.lex_state = 111},
    [51] = {.lex_state = 143},
    [52] = {.lex_state = 117, .external_tokens = 2},
    [53] = {.lex_state = 145},
    [54] = {.lex_state = 147},
    [55] = {.lex_state = 117, .external_tokens = 2},
    [56] = {.lex_state = 145},
    [57] = {.lex_state = 117, .external_tokens = 2},
    [58] = {.lex_state = 146},
    [59] = {.lex_state = 145},
    [60] = {.lex_state = 146},
    [61] = {.lex_state = 147},
    [62] = {.lex_state = 117},
    [63] = {.lex_state = 145},
    [64] = {.lex_state = 147},
    [65] = {.lex_state = 117},
    [66] = {.lex_state = 117},
    [67] = {.lex_state = 145},
    [68] = {.lex_state = 146},
    [69] = {.lex_state = 117},
    [70] = {.lex_state = 117},
    [71] = {.lex_state = 117},
    [72] = {.lex_state = 117},
    [73] = {.lex_state = 117},
    [74] = {.lex_state = 117},
    [75] = {.lex_state = 111},
    [76] = {.lex_state = 111},
    [77] = {.lex_state = 148},
    [78] = {.lex_state = 149},
    [79] = {.lex_state = 150},
    [80] = {.lex_state = 150},
    [81] = {.lex_state = 151},
    [82] = {.lex_state = 142},
    [83] = {.lex_state = 149},
    [84] = {.lex_state = 150},
    [85] = {.lex_state = 150},
    [86] = {.lex_state = 151},
    [87] = {.lex_state = 117},
    [88] = {.lex_state = 152},
    [89] = {.lex_state = 150},
    [90] = {.lex_state = 152},
    [91] = {.lex_state = 117},
    [92] = {.lex_state = 149},
    [93] = {.lex_state = 150},
    [94] = {.lex_state = 151},
    [95] = {.lex_state = 117},
    [96] = {.lex_state = 149},
    [97] = {.lex_state = 150},
    [98] = {.lex_state = 151},
    [99] = {.lex_state = 117},
    [100] = {.lex_state = 154},
    [101] = {.lex_state = 117},
    [102] = {.lex_state = 152},
    [103] = {.lex_state = 150},
    [104] = {.lex_state = 152},
    [105] = {.lex_state = 151},
    [106] = {.lex_state = 154},
    [107] = {.lex_state = 111},
    [108] = {.lex_state = 149},
    [109] = {.lex_state = 117},
    [110] = {.lex_state = 155},
    [111] = {.lex_state = 156},
    [112] = {.lex_state = 116},
    [113] = {.lex_state = 111},
    [114] = {.lex_state = 117},
    [115] = {.lex_state = 157},
    [116] = {.lex_state = 116},
    [117] = {.lex_state = 117},
    [118] = {.lex_state = 117},
    [119] = {.lex_state = 158},
    [120] = {.lex_state = 157},
    [121] = {.lex_state = 111},
    [122] = {.lex_state = 159},
    [123] = {.lex_state = 160},
    [124] = {.lex_state = 161},
    [125] = {.lex_state = 111},
    [126] = {.lex_state = 162},
    [127] = {.lex_state = 111},
    [128] = {.lex_state = 163},
    [129] = {.lex_state = 163},
    [130] = {.lex_state = 111},
    [131] = {.lex_state = 164},
    [132] = {.lex_state = 117},
    [133] = {.lex_state = 157},
    [134] = {.lex_state = 116},
    [135] = {.lex_state = 111},
    [136] = {.lex_state = 117},
    [137] = {.lex_state = 157},
    [138] = {.lex_state = 116},
    [139] = {.lex_state = 117},
    [140] = {.lex_state = 117},
    [141] = {.lex_state = 160},
    [142] = {.lex_state = 111},
    [143] = {.lex_state = 164},
    [144] = {.lex_state = 117},
    [145] = {.lex_state = 117},
    [146] = {.lex_state = 165},
    [147] = {.lex_state = 115},
    [148] = {.lex_state = 111},
    [149] = {.lex_state = 117},
    [150] = {.lex_state = 145},
    [151] = {.lex_state = 115},
    [152] = {.lex_state = 117},
    [153] = {.lex_state = 117},
    [154] = {.lex_state = 160},
    [155] = {.lex_state = 111},
    [156] = {.lex_state = 166},
    [157] = {.lex_state = 117},
    [158] = {.lex_state = 167},
    [159] = {.lex_state = 149},
    [160] = {.lex_state = 168, .external_tokens = 2},
    [161] = {.lex_state = 168, .external_tokens = 2},
    [162] = {.lex_state = 168, .external_tokens = 2},
    [163] = {.lex_state = 168, .external_tokens = 2},
    [164] = {.lex_state = 168, .external_tokens = 2},
    [165] = {.lex_state = 168, .external_tokens = 2},
    [166] = {.lex_state = 149},
    [167] = {.lex_state = 150},
    [168] = {.lex_state = 150},
    [169] = {.lex_state = 151},
    [170] = {.lex_state = 142},
    [171] = {.lex_state = 149},
    [172] = {.lex_state = 150},
    [173] = {.lex_state = 150},
    [174] = {.lex_state = 151},
    [175] = {.lex_state = 117, .external_tokens = 2},
    [176] = {.lex_state = 152},
    [177] = {.lex_state = 150},
    [178] = {.lex_state = 152},
    [179] = {.lex_state = 117, .external_tokens = 2},
    [180] = {.lex_state = 151},
    [181] = {.lex_state = 117, .external_tokens = 2},
    [182] = {.lex_state = 151},
    [183] = {.lex_state = 117, .external_tokens = 2},
    [184] = {.lex_state = 154},
    [185] = {.lex_state = 117, .external_tokens = 2},
    [186] = {.lex_state = 152},
    [187] = {.lex_state = 150},
    [188] = {.lex_state = 152},
    [189] = {.lex_state = 151},
    [190] = {.lex_state = 154},
    [191] = {.lex_state = 130, .external_tokens = 2},
    [192] = {.lex_state = 117, .external_tokens = 2},
    [193] = {.lex_state = 155},
    [194] = {.lex_state = 156},
    [195] = {.lex_state = 116},
    [196] = {.lex_state = 111},
    [197] = {.lex_state = 117, .external_tokens = 2},
    [198] = {.lex_state = 157},
    [199] = {.lex_state = 116},
    [200] = {.lex_state = 117, .external_tokens = 2},
    [201] = {.lex_state = 117, .external_tokens = 2},
    [202] = {.lex_state = 160},
    [203] = {.lex_state = 111},
    [204] = {.lex_state = 164},
    [205] = {.lex_state = 117, .external_tokens = 2},
    [206] = {.lex_state = 116},
    [207] = {.lex_state = 111},
    [208] = {.lex_state = 117, .external_tokens = 2},
    [209] = {.lex_state = 157},
    [210] = {.lex_state = 116},
    [211] = {.lex_state = 117, .external_tokens = 2},
    [212] = {.lex_state = 117, .external_tokens = 2},
    [213] = {.lex_state = 160},
    [214] = {.lex_state = 111},
    [215] = {.lex_state = 164},
    [216] = {.lex_state = 117, .external_tokens = 2},
    [217] = {.lex_state = 117, .external_tokens = 2},
    [218] = {.lex_state = 165},
    [219] = {.lex_state = 115},
    [220] = {.lex_state = 111},
    [221] = {.lex_state = 117, .external_tokens = 2},
    [222] = {.lex_state = 145},
    [223] = {.lex_state = 115},
    [224] = {.lex_state = 117, .external_tokens = 2},
    [225] = {.lex_state = 117, .external_tokens = 2},
    [226] = {.lex_state = 160},
    [227] = {.lex_state = 111},
    [228] = {.lex_state = 166},
    [229] = {.lex_state = 117, .external_tokens = 2},
    [230] = {.lex_state = 169, .external_tokens = 2},
    [231] = {.lex_state = 171, .external_tokens = 2},
    [232] = {.lex_state = 111},
    [233] = {.lex_state = 131},
    [234] = {.lex_state = 112, .external_tokens = 2},
    [235] = {.lex_state = 131},
    [236] = {.lex_state = 149},
    [237] = {.lex_state = 112, .external_tokens = 2},
    [238] = {.lex_state = 150},
    [239] = {.lex_state = 112, .external_tokens = 2},
    [240] = {.lex_state = 114},
    [241] = {.lex_state = 169, .external_tokens = 2},
    [242] = {.lex_state = 114},
    [243] = {.lex_state = 169, .external_tokens = 2},
    [244] = {.lex_state = 169, .external_tokens = 2},
    [245] = {.lex_state = 172},
    [246] = {.lex_state = 173, .external_tokens = 3},
    [247] = {.lex_state = 111},
    [248] = {.lex_state = 151},
    [249] = {.lex_state = 113},
    [250] = {.lex_state = 173, .external_tokens = 3},
    [251] = {.lex_state = 177, .external_tokens = 4},
    [252] = {.lex_state = 112, .external_tokens = 2},
    [253] = {.lex_state = 130, .external_tokens = 2},
    [254] = {.lex_state = 178, .external_tokens = 2},
    [255] = {.lex_state = 111},
    [256] = {.lex_state = 111},
    [257] = {.lex_state = 111},
    [258] = {.lex_state = 113},
    [259] = {.lex_state = 111},
    [260] = {.lex_state = 114},
    [261] = {.lex_state = 114},
    [262] = {.lex_state = 177, .external_tokens = 4},
    [263] = {.lex_state = 112, .external_tokens = 2},
    [264] = {.lex_state = 177, .external_tokens = 4},
    [265] = {.lex_state = 177, .external_tokens = 4},
    [266] = {.lex_state = 177, .external_tokens = 4},
    [267] = {.lex_state = 131},
    [268] = {.lex_state = 177, .external_tokens = 4},
    [269] = {.lex_state = 178, .external_tokens = 2},
    [270] = {.lex_state = 177, .external_tokens = 4},
    [271] = {.lex_state = 177, .external_tokens = 4},
    [272] = {.lex_state = 172},
    [273] = {.lex_state = 173, .external_tokens = 3},
    [274] = {.lex_state = 111},
    [275] = {.lex_state = 151},
    [276] = {.lex_state = 113},
    [277] = {.lex_state = 173, .external_tokens = 3},
    [278] = {.lex_state = 177, .external_tokens = 4},
    [279] = {.lex_state = 112, .external_tokens = 2},
    [280] = {.lex_state = 177, .external_tokens = 4},
    [281] = {.lex_state = 179, .external_tokens = 4},
    [282] = {.lex_state = 177, .external_tokens = 4},
    [283] = {.lex_state = 179, .external_tokens = 4},
    [284] = {.lex_state = 177, .external_tokens = 4},
    [285] = {.lex_state = 171},
    [286] = {.lex_state = 180},
    [287] = {.lex_state = 113},
    [288] = {.lex_state = 173, .external_tokens = 3},
    [289] = {.lex_state = 177, .external_tokens = 4},
    [290] = {.lex_state = 113},
    [291] = {.lex_state = 182},
    [292] = {.lex_state = 183},
    [293] = {.lex_state = 150},
    [294] = {.lex_state = 150},
    [295] = {.lex_state = 151},
    [296] = {.lex_state = 182},
    [297] = {.lex_state = 183},
    [298] = {.lex_state = 150},
    [299] = {.lex_state = 150},
    [300] = {.lex_state = 151},
    [301] = {.lex_state = 113},
    [302] = {.lex_state = 184},
    [303] = {.lex_state = 184},
    [304] = {.lex_state = 151},
    [305] = {.lex_state = 113},
    [306] = {.lex_state = 114},
    [307] = {.lex_state = 151},
    [308] = {.lex_state = 180},
    [309] = {.lex_state = 113},
    [310] = {.lex_state = 111},
    [311] = {.lex_state = 149},
    [312] = {.lex_state = 113},
    [313] = {.lex_state = 184},
    [314] = {.lex_state = 151},
    [315] = {.lex_state = 180},
    [316] = {.lex_state = 150},
    [317] = {.lex_state = 185},
    [318] = {.lex_state = 186},
    [319] = {.lex_state = 111},
    [320] = {.lex_state = 187},
    [321] = {.lex_state = 111},
    [322] = {.lex_state = 173, .external_tokens = 3},
    [323] = {.lex_state = 185},
    [324] = {.lex_state = 111},
    [325] = {.lex_state = 173, .external_tokens = 3},
    [326] = {.lex_state = 177, .external_tokens = 4},
    [327] = {.lex_state = 185},
    [328] = {.lex_state = 177, .external_tokens = 4},
    [329] = {.lex_state = 185},
    [330] = {.lex_state = 173, .external_tokens = 3},
    [331] = {.lex_state = 177, .external_tokens = 4},
    [332] = {.lex_state = 112, .external_tokens = 2},
    [333] = {.lex_state = 188},
    [334] = {.lex_state = 111},
    [335] = {.lex_state = 113},
    [336] = {.lex_state = 202, .external_tokens = 4},
    [337] = {.lex_state = 177, .external_tokens = 4},
    [338] = {.lex_state = 202, .external_tokens = 4},
    [339] = {.lex_state = 113},
    [340] = {.lex_state = 205, .external_tokens = 4},
    [341] = {.lex_state = 202, .external_tokens = 4},
    [342] = {.lex_state = 177, .external_tokens = 4},
    [343] = {.lex_state = 177, .external_tokens = 4},
    [344] = {.lex_state = 173, .external_tokens = 3},
    [345] = {.lex_state = 205, .external_tokens = 4},
    [346] = {.lex_state = 173, .external_tokens = 3},
    [347] = {.lex_state = 177, .external_tokens = 4},
    [348] = {.lex_state = 186},
    [349] = {.lex_state = 111},
    [350] = {.lex_state = 173, .external_tokens = 3},
    [351] = {.lex_state = 158},
    [352] = {.lex_state = 173, .external_tokens = 3},
    [353] = {.lex_state = 202, .external_tokens = 4},
    [354] = {.lex_state = 202, .external_tokens = 4},
    [355] = {.lex_state = 188},
    [356] = {.lex_state = 177, .external_tokens = 4},
    [357] = {.lex_state = 188},
    [358] = {.lex_state = 158},
    [359] = {.lex_state = 173, .external_tokens = 3},
    [360] = {.lex_state = 206, .external_tokens = 4},
    [361] = {.lex_state = 177, .external_tokens = 4},
    [362] = {.lex_state = 160},
    [363] = {.lex_state = 111},
    [364] = {.lex_state = 113},
    [365] = {.lex_state = 173, .external_tokens = 3},
    [366] = {.lex_state = 206, .external_tokens = 4},
    [367] = {.lex_state = 177, .external_tokens = 4},
    [368] = {.lex_state = 158},
    [369] = {.lex_state = 173, .external_tokens = 3},
    [370] = {.lex_state = 208, .external_tokens = 4},
    [371] = {.lex_state = 111},
    [372] = {.lex_state = 208, .external_tokens = 4},
    [373] = {.lex_state = 177, .external_tokens = 4},
    [374] = {.lex_state = 208, .external_tokens = 4},
    [375] = {.lex_state = 208, .external_tokens = 4},
    [376] = {.lex_state = 177, .external_tokens = 4},
    [377] = {.lex_state = 158},
    [378] = {.lex_state = 173, .external_tokens = 3},
    [379] = {.lex_state = 208, .external_tokens = 4},
    [380] = {.lex_state = 130, .external_tokens = 2},
    [381] = {.lex_state = 171},
    [382] = {.lex_state = 113},
    [383] = {.lex_state = 173, .external_tokens = 3},
    [384] = {.lex_state = 130, .external_tokens = 2},
    [385] = {.lex_state = 185},
    [386] = {.lex_state = 173, .external_tokens = 3},
    [387] = {.lex_state = 185},
    [388] = {.lex_state = 173, .external_tokens = 3},
    [389] = {.lex_state = 130, .external_tokens = 2},
    [390] = {.lex_state = 130, .external_tokens = 2},
    [391] = {.lex_state = 173, .external_tokens = 3},
    [392] = {.lex_state = 188},
    [393] = {.lex_state = 111},
    [394] = {.lex_state = 113},
    [395] = {.lex_state = 210, .external_tokens = 2},
    [396] = {.lex_state = 130, .external_tokens = 2},
    [397] = {.lex_state = 210, .external_tokens = 2},
    [398] = {.lex_state = 113},
    [399] = {.lex_state = 211, .external_tokens = 2},
    [400] = {.lex_state = 210, .external_tokens = 2},
    [401] = {.lex_state = 130, .external_tokens = 2},
    [402] = {.lex_state = 130, .external_tokens = 2},
    [403] = {.lex_state = 173, .external_tokens = 3},
    [404] = {.lex_state = 211, .external_tokens = 2},
    [405] = {.lex_state = 173, .external_tokens = 3},
    [406] = {.lex_state = 130, .external_tokens = 2},
    [407] = {.lex_state = 186},
    [408] = {.lex_state = 111},
    [409] = {.lex_state = 173, .external_tokens = 3},
    [410] = {.lex_state = 158},
    [411] = {.lex_state = 173, .external_tokens = 3},
    [412] = {.lex_state = 210, .external_tokens = 2},
    [413] = {.lex_state = 210, .external_tokens = 2},
    [414] = {.lex_state = 158},
    [415] = {.lex_state = 173, .external_tokens = 3},
    [416] = {.lex_state = 212, .external_tokens = 2},
    [417] = {.lex_state = 130, .external_tokens = 2},
    [418] = {.lex_state = 160},
    [419] = {.lex_state = 111},
    [420] = {.lex_state = 113},
    [421] = {.lex_state = 173, .external_tokens = 3},
    [422] = {.lex_state = 212, .external_tokens = 2},
    [423] = {.lex_state = 130, .external_tokens = 2},
    [424] = {.lex_state = 158},
    [425] = {.lex_state = 173, .external_tokens = 3},
    [426] = {.lex_state = 213, .external_tokens = 2},
    [427] = {.lex_state = 111},
    [428] = {.lex_state = 213, .external_tokens = 2},
    [429] = {.lex_state = 130, .external_tokens = 2},
    [430] = {.lex_state = 213, .external_tokens = 2},
    [431] = {.lex_state = 213, .external_tokens = 2},
    [432] = {.lex_state = 130, .external_tokens = 2},
    [433] = {.lex_state = 158},
    [434] = {.lex_state = 173, .external_tokens = 3},
    [435] = {.lex_state = 213, .external_tokens = 2},
    [436] = {.lex_state = 112, .external_tokens = 2},
    [437] = {.lex_state = 168, .external_tokens = 2},
    [438] = {.lex_state = 111},
    [439] = {.lex_state = 214, .external_tokens = 2},
    [440] = {.lex_state = 111},
    [441] = {.lex_state = 168, .external_tokens = 2},
    [442] = {.lex_state = 168, .external_tokens = 2},
    [443] = {.lex_state = 112, .external_tokens = 2},
    [444] = {.lex_state = 168, .external_tokens = 2},
    [445] = {.lex_state = 214, .external_tokens = 2},
    [446] = {.lex_state = 215},
    [447] = {.lex_state = 111},
    [448] = {.lex_state = 173, .external_tokens = 3},
    [449] = {.lex_state = 111},
    [450] = {.lex_state = 113},
    [451] = {.lex_state = 111},
    [452] = {.lex_state = 111},
    [453] = {.lex_state = 111},
    [454] = {.lex_state = 113},
    [455] = {.lex_state = 111},
    [456] = {.lex_state = 111},
    [457] = {.lex_state = 113},
    [458] = {.lex_state = 111},
    [459] = {.lex_state = 114},
    [460] = {.lex_state = 154},
    [461] = {.lex_state = 117, .external_tokens = 2},
    [462] = {.lex_state = 111},
    [463] = {.lex_state = 216},
    [464] = {.lex_state = 114},
    [465] = {.lex_state = 114},
    [466] = {.lex_state = 111},
    [467] = {.lex_state = 111},
    [468] = {.lex_state = 147},
    [469] = {.lex_state = 145},
    [470] = {.lex_state = 117, .external_tokens = 2},
    [471] = {.lex_state = 117, .external_tokens = 2},
    [472] = {.lex_state = 217, .external_tokens = 2},
    [473] = {.lex_state = 178, .external_tokens = 5},
    [474] = {.lex_state = 177, .external_tokens = 4},
    [475] = {.lex_state = 178, .external_tokens = 5},
    [476] = {.lex_state = 130, .external_tokens = 5},
    [477] = {.lex_state = 112, .external_tokens = 2},
    [478] = {.lex_state = 130, .external_tokens = 5},
    [479] = {.lex_state = 130, .external_tokens = 5},
    [480] = {.lex_state = 213, .external_tokens = 5},
    [481] = {.lex_state = 211, .external_tokens = 5},
    [482] = {.lex_state = 210, .external_tokens = 5},
    [483] = {.lex_state = 130, .external_tokens = 5},
    [484] = {.lex_state = 185},
    [485] = {.lex_state = 130, .external_tokens = 5},
    [486] = {.lex_state = 113},
    [487] = {.lex_state = 150},
    [488] = {.lex_state = 150},
    [489] = {.lex_state = 151},
    [490] = {.lex_state = 131},
    [491] = {.lex_state = 178, .external_tokens = 5},
    [492] = {.lex_state = 218, .external_tokens = 2},
    [493] = {.lex_state = 117, .external_tokens = 2},
    [494] = {.lex_state = 150},
    [495] = {.lex_state = 150},
    [496] = {.lex_state = 151},
    [497] = {.lex_state = 156},
    [498] = {.lex_state = 130, .external_tokens = 5},
    [499] = {.lex_state = 219, .external_tokens = 2},
    [500] = {.lex_state = 213, .external_tokens = 5},
    [501] = {.lex_state = 210, .external_tokens = 5},
    [502] = {.lex_state = 185},
    [503] = {.lex_state = 131},
    [504] = {.lex_state = 150},
    [505] = {.lex_state = 152},
    [506] = {.lex_state = 117, .external_tokens = 2},
    [507] = {.lex_state = 151},
    [508] = {.lex_state = 117, .external_tokens = 2},
    [509] = {.lex_state = 130, .external_tokens = 5},
    [510] = {.lex_state = 173, .external_tokens = 3},
    [511] = {.lex_state = 112, .external_tokens = 2},
    [512] = {.lex_state = 130, .external_tokens = 5},
    [513] = {.lex_state = 178, .external_tokens = 5},
    [514] = {.lex_state = 177, .external_tokens = 4},
    [515] = {.lex_state = 178, .external_tokens = 5},
    [516] = {.lex_state = 211, .external_tokens = 5},
    [517] = {.lex_state = 210, .external_tokens = 5},
    [518] = {.lex_state = 130, .external_tokens = 5},
    [519] = {.lex_state = 130, .external_tokens = 5},
    [520] = {.lex_state = 213, .external_tokens = 5},
    [521] = {.lex_state = 130, .external_tokens = 5},
    [522] = {.lex_state = 173, .external_tokens = 3},
    [523] = {.lex_state = 211, .external_tokens = 5},
    [524] = {.lex_state = 220},
    [525] = {.lex_state = 163, .external_tokens = 2},
    [526] = {.lex_state = 111},
    [527] = {.lex_state = 163, .external_tokens = 2},
    [528] = {.lex_state = 111},
    [529] = {.lex_state = 130, .external_tokens = 5},
    [530] = {.lex_state = 112, .external_tokens = 2},
    [531] = {.lex_state = 130, .external_tokens = 5},
    [532] = {.lex_state = 160},
    [533] = {.lex_state = 111},
    [534] = {.lex_state = 113},
    [535] = {.lex_state = 173, .external_tokens = 3},
    [536] = {.lex_state = 212, .external_tokens = 5},
    [537] = {.lex_state = 130, .external_tokens = 5},
    [538] = {.lex_state = 117, .external_tokens = 2},
    [539] = {.lex_state = 152},
    [540] = {.lex_state = 117, .external_tokens = 2},
    [541] = {.lex_state = 151},
    [542] = {.lex_state = 117, .external_tokens = 2},
    [543] = {.lex_state = 154},
    [544] = {.lex_state = 215},
    [545] = {.lex_state = 173, .external_tokens = 3},
    [546] = {.lex_state = 111},
    [547] = {.lex_state = 117, .external_tokens = 2},
    [548] = {.lex_state = 117, .external_tokens = 2},
    [549] = {.lex_state = 117, .external_tokens = 2},
    [550] = {.lex_state = 117, .external_tokens = 2},
    [551] = {.lex_state = 160},
    [552] = {.lex_state = 111},
    [553] = {.lex_state = 221},
    [554] = {.lex_state = 111},
    [555] = {.lex_state = 221},
    [556] = {.lex_state = 178, .external_tokens = 5},
    [557] = {.lex_state = 159, .external_tokens = 2},
    [558] = {.lex_state = 111},
    [559] = {.lex_state = 159, .external_tokens = 2},
    [560] = {.lex_state = 213, .external_tokens = 5},
    [561] = {.lex_state = 130, .external_tokens = 5},
    [562] = {.lex_state = 117, .external_tokens = 2},
    [563] = {.lex_state = 163, .external_tokens = 2},
    [564] = {.lex_state = 173, .external_tokens = 3},
    [565] = {.lex_state = 210, .external_tokens = 5},
    [566] = {.lex_state = 113},
    [567] = {.lex_state = 173, .external_tokens = 3},
    [568] = {.lex_state = 130, .external_tokens = 5},
    [569] = {.lex_state = 130, .external_tokens = 5},
    [570] = {.lex_state = 210, .external_tokens = 5},
    [571] = {.lex_state = 130, .external_tokens = 5},
    [572] = {.lex_state = 113},
    [573] = {.lex_state = 184},
    [574] = {.lex_state = 113},
    [575] = {.lex_state = 151},
    [576] = {.lex_state = 113},
    [577] = {.lex_state = 180},
    [578] = {.lex_state = 113},
    [579] = {.lex_state = 173, .external_tokens = 3},
    [580] = {.lex_state = 130, .external_tokens = 5},
    [581] = {.lex_state = 173, .external_tokens = 3},
    [582] = {.lex_state = 130, .external_tokens = 5},
    [583] = {.lex_state = 178, .external_tokens = 5},
    [584] = {.lex_state = 173, .external_tokens = 3},
    [585] = {.lex_state = 222},
    [586] = {.lex_state = 148},
    [587] = {.lex_state = 151},
    [588] = {.lex_state = 130, .external_tokens = 5},
    [589] = {.lex_state = 165},
    [590] = {.lex_state = 147},
    [591] = {.lex_state = 117, .external_tokens = 2},
    [592] = {.lex_state = 146},
    [593] = {.lex_state = 117, .external_tokens = 2},
    [594] = {.lex_state = 169, .external_tokens = 2},
    [595] = {.lex_state = 172},
    [596] = {.lex_state = 111},
    [597] = {.lex_state = 117, .external_tokens = 2},
    [598] = {.lex_state = 117, .external_tokens = 2},
    [599] = {.lex_state = 149},
    [600] = {.lex_state = 216},
    [601] = {.lex_state = 148},
    [602] = {.lex_state = 149},
    [603] = {.lex_state = 154},
    [604] = {.lex_state = 117, .external_tokens = 2},
    [605] = {.lex_state = 150},
    [606] = {.lex_state = 149},
    [607] = {.lex_state = 171},
    [608] = {.lex_state = 185},
    [609] = {.lex_state = 173, .external_tokens = 3},
    [610] = {.lex_state = 130, .external_tokens = 5},
    [611] = {.lex_state = 187},
    [612] = {.lex_state = 186},
    [613] = {.lex_state = 111},
    [614] = {.lex_state = 173, .external_tokens = 3},
    [615] = {.lex_state = 158},
    [616] = {.lex_state = 210, .external_tokens = 5},
    [617] = {.lex_state = 173, .external_tokens = 3},
    [618] = {.lex_state = 188},
    [619] = {.lex_state = 158},
    [620] = {.lex_state = 173, .external_tokens = 3},
    [621] = {.lex_state = 212, .external_tokens = 5},
    [622] = {.lex_state = 130, .external_tokens = 5},
    [623] = {.lex_state = 223},
    [624] = {.lex_state = 111},
    [625] = {.lex_state = 117, .external_tokens = 2},
    [626] = {.lex_state = 223},
    [627] = {.lex_state = 160},
    [628] = {.lex_state = 158},
    [629] = {.lex_state = 173, .external_tokens = 3},
    [630] = {.lex_state = 213, .external_tokens = 5},
    [631] = {.lex_state = 158},
    [632] = {.lex_state = 173, .external_tokens = 3},
    [633] = {.lex_state = 213, .external_tokens = 5},
    [634] = {.lex_state = 130, .external_tokens = 5},
    [635] = {.lex_state = 117, .external_tokens = 2},
    [636] = {.lex_state = 145},
    [637] = {.lex_state = 117, .external_tokens = 2},
    [638] = {.lex_state = 117, .external_tokens = 2},
    [639] = {.lex_state = 224, .external_tokens = 2},
    [640] = {.lex_state = 185},
    [641] = {.lex_state = 225, .external_tokens = 2},
    [642] = {.lex_state = 150},
    [643] = {.lex_state = 151},
    [644] = {.lex_state = 157},
    [645] = {.lex_state = 117, .external_tokens = 2},
    [646] = {.lex_state = 173, .external_tokens = 3},
    [647] = {.lex_state = 111},
    [648] = {.lex_state = 225, .external_tokens = 2},
    [649] = {.lex_state = 226, .external_tokens = 2},
    [650] = {.lex_state = 111},
    [651] = {.lex_state = 226, .external_tokens = 2},
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
        [sym_module] = STATE(17),
        [sym__statement] = STATE(476),
        [sym__simple_statement] = STATE(477),
        [sym_print_statement] = STATE(5),
        [sym_expression_statement] = STATE(5),
        [sym_return_statement] = STATE(5),
        [sym_delete_statement] = STATE(5),
        [sym__compound_statement] = STATE(478),
        [sym_if_statement] = STATE(479),
        [sym_elif_clause] = STATE(480),
        [sym_else_clause] = STATE(481),
        [sym_for_statement] = STATE(479),
        [sym_while_statement] = STATE(479),
        [sym_try_statement] = STATE(479),
        [sym_except_clause] = STATE(482),
        [sym_finally_clause] = STATE(483),
        [sym_with_statement] = STATE(479),
        [sym_with_item] = STATE(484),
        [sym_function_definition] = STATE(485),
        [sym_parameters] = STATE(486),
        [sym_default_parameter] = STATE(487),
        [sym_list_splat_parameter] = STATE(488),
        [sym_dictionary_splat_parameter] = STATE(489),
        [sym_class_definition] = STATE(485),
        [sym_decorated_definition] = STATE(479),
        [sym_decorator] = STATE(490),
        [sym__suite] = STATE(491),
        [sym_arguments] = STATE(234),
        [sym_expression_list] = STATE(492),
        [sym_dotted_name] = STATE(231),
        [sym__expression] = STATE(493),
        [sym_binary_operator] = STATE(16),
        [sym_subscript] = STATE(16),
        [sym_call] = STATE(16),
        [sym_keyword_argument] = STATE(494),
        [sym_list_splat_argument] = STATE(495),
        [sym_dictionary_splat_argument] = STATE(496),
        [sym_list] = STATE(16),
        [sym_list_comprehension] = STATE(16),
        [sym_dictionary] = STATE(16),
        [sym_dictionary_comprehension] = STATE(16),
        [sym_pair] = STATE(497),
        [sym_set] = STATE(16),
        [sym_set_comprehension] = STATE(16),
        [aux_sym_module_repeat1] = STATE(498),
        [aux_sym_print_statement_repeat1] = STATE(499),
        [aux_sym_if_statement_repeat1] = STATE(500),
        [aux_sym_try_statement_repeat1] = STATE(501),
        [aux_sym_with_statement_repeat1] = STATE(502),
        [aux_sym_parameters_repeat1] = STATE(296),
        [aux_sym_decorated_definition_repeat1] = STATE(503),
        [aux_sym_dotted_name_repeat1] = STATE(241),
        [aux_sym_subscript_repeat1] = STATE(53),
        [aux_sym_call_repeat1] = STATE(170),
        [aux_sym_call_repeat2] = STATE(504),
        [aux_sym_dictionary_repeat1] = STATE(198),
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
        [anon_sym_LBRACK] = ACTIONS(61),
        [anon_sym_DOT_DOT_DOT] = ACTIONS(63),
        [anon_sym_RBRACK] = ACTIONS(65),
        [anon_sym_LBRACE] = ACTIONS(67),
        [anon_sym_RBRACE] = ACTIONS(69),
        [sym_number] = ACTIONS(71),
        [sym_identifier] = ACTIONS(73),
        [sym_comment] = ACTIONS(75),
        [sym__newline] = ACTIONS(77),
        [sym__indent] = ACTIONS(79),
        [sym__dedent] = ACTIONS(81),
    },
    [1] = {
        [sym_module] = STATE(17),
        [sym__statement] = STATE(18),
        [sym__simple_statement] = STATE(19),
        [sym_print_statement] = STATE(5),
        [sym_expression_statement] = STATE(5),
        [sym_return_statement] = STATE(5),
        [sym_delete_statement] = STATE(5),
        [sym__compound_statement] = STATE(20),
        [sym_if_statement] = STATE(21),
        [sym_for_statement] = STATE(21),
        [sym_while_statement] = STATE(21),
        [sym_try_statement] = STATE(21),
        [sym_with_statement] = STATE(21),
        [sym_function_definition] = STATE(21),
        [sym_class_definition] = STATE(21),
        [sym_decorated_definition] = STATE(21),
        [sym_decorator] = STATE(22),
        [sym__expression] = STATE(23),
        [sym_binary_operator] = STATE(16),
        [sym_subscript] = STATE(16),
        [sym_call] = STATE(16),
        [sym_list] = STATE(16),
        [sym_list_comprehension] = STATE(16),
        [sym_dictionary] = STATE(16),
        [sym_dictionary_comprehension] = STATE(16),
        [sym_set] = STATE(16),
        [sym_set_comprehension] = STATE(16),
        [aux_sym_module_repeat1] = STATE(24),
        [aux_sym_decorated_definition_repeat1] = STATE(25),
        [ts_builtin_sym_end] = ACTIONS(83),
        [anon_sym_print] = ACTIONS(85),
        [anon_sym_return] = ACTIONS(87),
        [anon_sym_del] = ACTIONS(89),
        [sym_pass_statement] = ACTIONS(91),
        [sym_break_statement] = ACTIONS(91),
        [sym_continue_statement] = ACTIONS(91),
        [anon_sym_if] = ACTIONS(93),
        [anon_sym_for] = ACTIONS(95),
        [anon_sym_while] = ACTIONS(97),
        [anon_sym_try] = ACTIONS(99),
        [anon_sym_with] = ACTIONS(101),
        [anon_sym_def] = ACTIONS(103),
        [anon_sym_class] = ACTIONS(105),
        [anon_sym_AT] = ACTIONS(107),
        [anon_sym_LBRACK] = ACTIONS(109),
        [anon_sym_LBRACE] = ACTIONS(111),
        [sym_number] = ACTIONS(113),
        [sym_identifier] = ACTIONS(115),
        [sym_comment] = ACTIONS(75),
    },
    [2] = {
        [sym__expression] = STATE(444),
        [sym_binary_operator] = STATE(16),
        [sym_subscript] = STATE(16),
        [sym_call] = STATE(16),
        [sym_list] = STATE(16),
        [sym_list_comprehension] = STATE(16),
        [sym_dictionary] = STATE(16),
        [sym_dictionary_comprehension] = STATE(16),
        [sym_set] = STATE(16),
        [sym_set_comprehension] = STATE(16),
        [anon_sym_LBRACK] = ACTIONS(109),
        [anon_sym_LBRACE] = ACTIONS(111),
        [sym_number] = ACTIONS(113),
        [sym_identifier] = ACTIONS(113),
        [sym_comment] = ACTIONS(75),
    },
    [3] = {
        [sym_expression_list] = STATE(443),
        [sym__expression] = STATE(437),
        [sym_binary_operator] = STATE(16),
        [sym_subscript] = STATE(16),
        [sym_call] = STATE(16),
        [sym_list] = STATE(16),
        [sym_list_comprehension] = STATE(16),
        [sym_dictionary] = STATE(16),
        [sym_dictionary_comprehension] = STATE(16),
        [sym_set] = STATE(16),
        [sym_set_comprehension] = STATE(16),
        [anon_sym_LBRACK] = ACTIONS(109),
        [anon_sym_LBRACE] = ACTIONS(111),
        [sym_number] = ACTIONS(113),
        [sym_identifier] = ACTIONS(113),
        [sym_comment] = ACTIONS(75),
    },
    [4] = {
        [sym_expression_list] = STATE(436),
        [sym__expression] = STATE(437),
        [sym_binary_operator] = STATE(16),
        [sym_subscript] = STATE(16),
        [sym_call] = STATE(16),
        [sym_list] = STATE(16),
        [sym_list_comprehension] = STATE(16),
        [sym_dictionary] = STATE(16),
        [sym_dictionary_comprehension] = STATE(16),
        [sym_set] = STATE(16),
        [sym_set_comprehension] = STATE(16),
        [anon_sym_LBRACK] = ACTIONS(109),
        [anon_sym_LBRACE] = ACTIONS(111),
        [sym_number] = ACTIONS(113),
        [sym_identifier] = ACTIONS(113),
        [sym_comment] = ACTIONS(75),
    },
    [5] = {
        [sym_comment] = ACTIONS(75),
        [sym__newline] = ACTIONS(117),
    },
    [6] = {
        [sym__expression] = STATE(424),
        [sym_binary_operator] = STATE(41),
        [sym_subscript] = STATE(41),
        [sym_call] = STATE(41),
        [sym_list] = STATE(41),
        [sym_list_comprehension] = STATE(41),
        [sym_dictionary] = STATE(41),
        [sym_dictionary_comprehension] = STATE(41),
        [sym_set] = STATE(41),
        [sym_set_comprehension] = STATE(41),
        [anon_sym_LBRACK] = ACTIONS(119),
        [anon_sym_LBRACE] = ACTIONS(121),
        [sym_number] = ACTIONS(123),
        [sym_identifier] = ACTIONS(123),
        [sym_comment] = ACTIONS(75),
    },
    [7] = {
        [sym_expression_list] = STATE(418),
        [sym__expression] = STATE(124),
        [sym_binary_operator] = STATE(41),
        [sym_subscript] = STATE(41),
        [sym_call] = STATE(41),
        [sym_list] = STATE(41),
        [sym_list_comprehension] = STATE(41),
        [sym_dictionary] = STATE(41),
        [sym_dictionary_comprehension] = STATE(41),
        [sym_set] = STATE(41),
        [sym_set_comprehension] = STATE(41),
        [anon_sym_LBRACK] = ACTIONS(119),
        [anon_sym_LBRACE] = ACTIONS(121),
        [sym_number] = ACTIONS(123),
        [sym_identifier] = ACTIONS(123),
        [sym_comment] = ACTIONS(75),
    },
    [8] = {
        [sym__expression] = STATE(414),
        [sym_binary_operator] = STATE(41),
        [sym_subscript] = STATE(41),
        [sym_call] = STATE(41),
        [sym_list] = STATE(41),
        [sym_list_comprehension] = STATE(41),
        [sym_dictionary] = STATE(41),
        [sym_dictionary_comprehension] = STATE(41),
        [sym_set] = STATE(41),
        [sym_set_comprehension] = STATE(41),
        [anon_sym_LBRACK] = ACTIONS(119),
        [anon_sym_LBRACE] = ACTIONS(121),
        [sym_number] = ACTIONS(123),
        [sym_identifier] = ACTIONS(123),
        [sym_comment] = ACTIONS(75),
    },
    [9] = {
        [anon_sym_COLON] = ACTIONS(125),
        [sym_comment] = ACTIONS(75),
    },
    [10] = {
        [sym_with_item] = STATE(385),
        [sym__expression] = STATE(318),
        [sym_binary_operator] = STATE(41),
        [sym_subscript] = STATE(41),
        [sym_call] = STATE(41),
        [sym_list] = STATE(41),
        [sym_list_comprehension] = STATE(41),
        [sym_dictionary] = STATE(41),
        [sym_dictionary_comprehension] = STATE(41),
        [sym_set] = STATE(41),
        [sym_set_comprehension] = STATE(41),
        [anon_sym_LBRACK] = ACTIONS(119),
        [anon_sym_LBRACE] = ACTIONS(121),
        [sym_number] = ACTIONS(123),
        [sym_identifier] = ACTIONS(123),
        [sym_comment] = ACTIONS(75),
    },
    [11] = {
        [sym_identifier] = ACTIONS(127),
        [sym_comment] = ACTIONS(75),
    },
    [12] = {
        [sym_identifier] = ACTIONS(129),
        [sym_comment] = ACTIONS(75),
    },
    [13] = {
        [sym_dotted_name] = STATE(231),
        [sym_identifier] = ACTIONS(131),
        [sym_comment] = ACTIONS(75),
    },
    [14] = {
        [sym__expression] = STATE(218),
        [sym_binary_operator] = STATE(41),
        [sym_subscript] = STATE(41),
        [sym_call] = STATE(41),
        [sym_list] = STATE(41),
        [sym_list_comprehension] = STATE(41),
        [sym_dictionary] = STATE(41),
        [sym_dictionary_comprehension] = STATE(41),
        [sym_set] = STATE(41),
        [sym_set_comprehension] = STATE(41),
        [anon_sym_LBRACK] = ACTIONS(119),
        [anon_sym_RBRACK] = ACTIONS(133),
        [anon_sym_LBRACE] = ACTIONS(121),
        [sym_number] = ACTIONS(123),
        [sym_identifier] = ACTIONS(123),
        [sym_comment] = ACTIONS(75),
    },
    [15] = {
        [sym__expression] = STATE(193),
        [sym_binary_operator] = STATE(41),
        [sym_subscript] = STATE(41),
        [sym_call] = STATE(41),
        [sym_list] = STATE(41),
        [sym_list_comprehension] = STATE(41),
        [sym_dictionary] = STATE(41),
        [sym_dictionary_comprehension] = STATE(41),
        [sym_pair] = STATE(194),
        [sym_set] = STATE(41),
        [sym_set_comprehension] = STATE(41),
        [anon_sym_LBRACK] = ACTIONS(119),
        [anon_sym_LBRACE] = ACTIONS(121),
        [anon_sym_RBRACE] = ACTIONS(135),
        [sym_number] = ACTIONS(123),
        [sym_identifier] = ACTIONS(123),
        [sym_comment] = ACTIONS(75),
    },
    [16] = {
        [anon_sym_COMMA] = ACTIONS(137),
        [anon_sym_COLON] = ACTIONS(137),
        [anon_sym_for] = ACTIONS(137),
        [anon_sym_in] = ACTIONS(137),
        [anon_sym_as] = ACTIONS(137),
        [anon_sym_LPAREN] = ACTIONS(137),
        [anon_sym_RPAREN] = ACTIONS(137),
        [anon_sym_STAR] = ACTIONS(139),
        [anon_sym_PLUS] = ACTIONS(137),
        [anon_sym_DASH] = ACTIONS(137),
        [anon_sym_SLASH] = ACTIONS(137),
        [anon_sym_STAR_STAR] = ACTIONS(137),
        [anon_sym_PIPE] = ACTIONS(137),
        [anon_sym_AMP] = ACTIONS(137),
        [anon_sym_CARET] = ACTIONS(137),
        [anon_sym_LT_LT] = ACTIONS(137),
        [anon_sym_GT_GT] = ACTIONS(137),
        [anon_sym_and] = ACTIONS(137),
        [anon_sym_or] = ACTIONS(137),
        [anon_sym_LBRACK] = ACTIONS(137),
        [anon_sym_RBRACK] = ACTIONS(137),
        [anon_sym_RBRACE] = ACTIONS(137),
        [sym_comment] = ACTIONS(75),
        [sym__newline] = ACTIONS(137),
    },
    [17] = {
        [ts_builtin_sym_end] = ACTIONS(141),
        [sym_comment] = ACTIONS(75),
    },
    [18] = {
        [ts_builtin_sym_end] = ACTIONS(143),
        [anon_sym_SEMI] = ACTIONS(143),
        [anon_sym_print] = ACTIONS(145),
        [anon_sym_return] = ACTIONS(145),
        [anon_sym_del] = ACTIONS(145),
        [sym_pass_statement] = ACTIONS(145),
        [sym_break_statement] = ACTIONS(145),
        [sym_continue_statement] = ACTIONS(145),
        [anon_sym_if] = ACTIONS(145),
        [anon_sym_for] = ACTIONS(145),
        [anon_sym_while] = ACTIONS(145),
        [anon_sym_try] = ACTIONS(145),
        [anon_sym_with] = ACTIONS(145),
        [anon_sym_def] = ACTIONS(145),
        [anon_sym_class] = ACTIONS(145),
        [anon_sym_AT] = ACTIONS(143),
        [anon_sym_LBRACK] = ACTIONS(143),
        [anon_sym_LBRACE] = ACTIONS(143),
        [sym_number] = ACTIONS(145),
        [sym_identifier] = ACTIONS(147),
        [sym_comment] = ACTIONS(75),
        [sym__newline] = ACTIONS(143),
    },
    [19] = {
        [sym_comment] = ACTIONS(75),
        [sym__newline] = ACTIONS(149),
    },
    [20] = {
        [ts_builtin_sym_end] = ACTIONS(151),
        [anon_sym_SEMI] = ACTIONS(151),
        [anon_sym_print] = ACTIONS(153),
        [anon_sym_return] = ACTIONS(153),
        [anon_sym_del] = ACTIONS(153),
        [sym_pass_statement] = ACTIONS(153),
        [sym_break_statement] = ACTIONS(153),
        [sym_continue_statement] = ACTIONS(153),
        [anon_sym_if] = ACTIONS(153),
        [anon_sym_for] = ACTIONS(153),
        [anon_sym_while] = ACTIONS(153),
        [anon_sym_try] = ACTIONS(153),
        [anon_sym_with] = ACTIONS(153),
        [anon_sym_def] = ACTIONS(153),
        [anon_sym_class] = ACTIONS(153),
        [anon_sym_AT] = ACTIONS(151),
        [anon_sym_LBRACK] = ACTIONS(151),
        [anon_sym_LBRACE] = ACTIONS(151),
        [sym_number] = ACTIONS(153),
        [sym_identifier] = ACTIONS(155),
        [sym_comment] = ACTIONS(75),
        [sym__newline] = ACTIONS(151),
    },
    [21] = {
        [ts_builtin_sym_end] = ACTIONS(157),
        [anon_sym_SEMI] = ACTIONS(157),
        [anon_sym_print] = ACTIONS(159),
        [anon_sym_return] = ACTIONS(159),
        [anon_sym_del] = ACTIONS(159),
        [sym_pass_statement] = ACTIONS(159),
        [sym_break_statement] = ACTIONS(159),
        [sym_continue_statement] = ACTIONS(159),
        [anon_sym_if] = ACTIONS(159),
        [anon_sym_for] = ACTIONS(159),
        [anon_sym_while] = ACTIONS(159),
        [anon_sym_try] = ACTIONS(159),
        [anon_sym_with] = ACTIONS(159),
        [anon_sym_def] = ACTIONS(159),
        [anon_sym_class] = ACTIONS(159),
        [anon_sym_AT] = ACTIONS(157),
        [anon_sym_LBRACK] = ACTIONS(157),
        [anon_sym_LBRACE] = ACTIONS(157),
        [sym_number] = ACTIONS(159),
        [sym_identifier] = ACTIONS(161),
        [sym_comment] = ACTIONS(75),
        [sym__newline] = ACTIONS(157),
    },
    [22] = {
        [anon_sym_def] = ACTIONS(163),
        [anon_sym_class] = ACTIONS(163),
        [anon_sym_AT] = ACTIONS(163),
        [sym_comment] = ACTIONS(75),
    },
    [23] = {
        [anon_sym_LPAREN] = ACTIONS(165),
        [anon_sym_STAR] = ACTIONS(167),
        [anon_sym_PLUS] = ACTIONS(169),
        [anon_sym_DASH] = ACTIONS(169),
        [anon_sym_SLASH] = ACTIONS(171),
        [anon_sym_STAR_STAR] = ACTIONS(173),
        [anon_sym_PIPE] = ACTIONS(175),
        [anon_sym_AMP] = ACTIONS(177),
        [anon_sym_CARET] = ACTIONS(179),
        [anon_sym_LT_LT] = ACTIONS(169),
        [anon_sym_GT_GT] = ACTIONS(169),
        [anon_sym_and] = ACTIONS(177),
        [anon_sym_or] = ACTIONS(175),
        [anon_sym_LBRACK] = ACTIONS(181),
        [sym_comment] = ACTIONS(75),
        [sym__newline] = ACTIONS(183),
    },
    [24] = {
        [sym__statement] = STATE(29),
        [sym__simple_statement] = STATE(19),
        [sym_print_statement] = STATE(5),
        [sym_expression_statement] = STATE(5),
        [sym_return_statement] = STATE(5),
        [sym_delete_statement] = STATE(5),
        [sym__compound_statement] = STATE(20),
        [sym_if_statement] = STATE(21),
        [sym_for_statement] = STATE(21),
        [sym_while_statement] = STATE(21),
        [sym_try_statement] = STATE(21),
        [sym_with_statement] = STATE(21),
        [sym_function_definition] = STATE(21),
        [sym_class_definition] = STATE(21),
        [sym_decorated_definition] = STATE(21),
        [sym_decorator] = STATE(22),
        [sym__expression] = STATE(23),
        [sym_binary_operator] = STATE(16),
        [sym_subscript] = STATE(16),
        [sym_call] = STATE(16),
        [sym_list] = STATE(16),
        [sym_list_comprehension] = STATE(16),
        [sym_dictionary] = STATE(16),
        [sym_dictionary_comprehension] = STATE(16),
        [sym_set] = STATE(16),
        [sym_set_comprehension] = STATE(16),
        [aux_sym_decorated_definition_repeat1] = STATE(25),
        [ts_builtin_sym_end] = ACTIONS(185),
        [anon_sym_SEMI] = ACTIONS(187),
        [anon_sym_print] = ACTIONS(85),
        [anon_sym_return] = ACTIONS(87),
        [anon_sym_del] = ACTIONS(89),
        [sym_pass_statement] = ACTIONS(91),
        [sym_break_statement] = ACTIONS(91),
        [sym_continue_statement] = ACTIONS(91),
        [anon_sym_if] = ACTIONS(93),
        [anon_sym_for] = ACTIONS(95),
        [anon_sym_while] = ACTIONS(97),
        [anon_sym_try] = ACTIONS(99),
        [anon_sym_with] = ACTIONS(101),
        [anon_sym_def] = ACTIONS(103),
        [anon_sym_class] = ACTIONS(105),
        [anon_sym_AT] = ACTIONS(107),
        [anon_sym_LBRACK] = ACTIONS(109),
        [anon_sym_LBRACE] = ACTIONS(111),
        [sym_number] = ACTIONS(113),
        [sym_identifier] = ACTIONS(115),
        [sym_comment] = ACTIONS(75),
        [sym__newline] = ACTIONS(187),
    },
    [25] = {
        [sym_function_definition] = STATE(26),
        [sym_class_definition] = STATE(26),
        [sym_decorator] = STATE(27),
        [anon_sym_def] = ACTIONS(189),
        [anon_sym_class] = ACTIONS(191),
        [anon_sym_AT] = ACTIONS(107),
        [sym_comment] = ACTIONS(75),
    },
    [26] = {
        [ts_builtin_sym_end] = ACTIONS(193),
        [anon_sym_SEMI] = ACTIONS(193),
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
        [anon_sym_LBRACK] = ACTIONS(193),
        [anon_sym_LBRACE] = ACTIONS(193),
        [sym_number] = ACTIONS(195),
        [sym_identifier] = ACTIONS(197),
        [sym_comment] = ACTIONS(75),
        [sym__newline] = ACTIONS(193),
    },
    [27] = {
        [anon_sym_def] = ACTIONS(199),
        [anon_sym_class] = ACTIONS(199),
        [anon_sym_AT] = ACTIONS(199),
        [sym_comment] = ACTIONS(75),
    },
    [28] = {
        [ts_builtin_sym_end] = ACTIONS(201),
        [sym_comment] = ACTIONS(75),
    },
    [29] = {
        [ts_builtin_sym_end] = ACTIONS(203),
        [anon_sym_SEMI] = ACTIONS(203),
        [anon_sym_print] = ACTIONS(205),
        [anon_sym_return] = ACTIONS(205),
        [anon_sym_del] = ACTIONS(205),
        [sym_pass_statement] = ACTIONS(205),
        [sym_break_statement] = ACTIONS(205),
        [sym_continue_statement] = ACTIONS(205),
        [anon_sym_if] = ACTIONS(205),
        [anon_sym_for] = ACTIONS(205),
        [anon_sym_while] = ACTIONS(205),
        [anon_sym_try] = ACTIONS(205),
        [anon_sym_with] = ACTIONS(205),
        [anon_sym_def] = ACTIONS(205),
        [anon_sym_class] = ACTIONS(205),
        [anon_sym_AT] = ACTIONS(203),
        [anon_sym_LBRACK] = ACTIONS(203),
        [anon_sym_LBRACE] = ACTIONS(203),
        [sym_number] = ACTIONS(205),
        [sym_identifier] = ACTIONS(207),
        [sym_comment] = ACTIONS(75),
        [sym__newline] = ACTIONS(203),
    },
    [30] = {
        [sym__expression] = STATE(166),
        [sym_binary_operator] = STATE(41),
        [sym_subscript] = STATE(41),
        [sym_call] = STATE(41),
        [sym_keyword_argument] = STATE(167),
        [sym_list_splat_argument] = STATE(168),
        [sym_dictionary_splat_argument] = STATE(169),
        [sym_list] = STATE(41),
        [sym_list_comprehension] = STATE(41),
        [sym_dictionary] = STATE(41),
        [sym_dictionary_comprehension] = STATE(41),
        [sym_set] = STATE(41),
        [sym_set_comprehension] = STATE(41),
        [aux_sym_call_repeat1] = STATE(170),
        [anon_sym_STAR] = ACTIONS(209),
        [anon_sym_STAR_STAR] = ACTIONS(211),
        [anon_sym_LBRACK] = ACTIONS(119),
        [anon_sym_LBRACE] = ACTIONS(121),
        [sym_number] = ACTIONS(123),
        [sym_identifier] = ACTIONS(213),
        [sym_comment] = ACTIONS(75),
    },
    [31] = {
        [sym__expression] = STATE(165),
        [sym_binary_operator] = STATE(16),
        [sym_subscript] = STATE(16),
        [sym_call] = STATE(16),
        [sym_list] = STATE(16),
        [sym_list_comprehension] = STATE(16),
        [sym_dictionary] = STATE(16),
        [sym_dictionary_comprehension] = STATE(16),
        [sym_set] = STATE(16),
        [sym_set_comprehension] = STATE(16),
        [anon_sym_LBRACK] = ACTIONS(109),
        [anon_sym_LBRACE] = ACTIONS(111),
        [sym_number] = ACTIONS(113),
        [sym_identifier] = ACTIONS(113),
        [sym_comment] = ACTIONS(75),
    },
    [32] = {
        [sym__expression] = STATE(162),
        [sym_binary_operator] = STATE(16),
        [sym_subscript] = STATE(16),
        [sym_call] = STATE(16),
        [sym_list] = STATE(16),
        [sym_list_comprehension] = STATE(16),
        [sym_dictionary] = STATE(16),
        [sym_dictionary_comprehension] = STATE(16),
        [sym_set] = STATE(16),
        [sym_set_comprehension] = STATE(16),
        [anon_sym_LBRACK] = ACTIONS(109),
        [anon_sym_LBRACE] = ACTIONS(111),
        [sym_number] = ACTIONS(113),
        [sym_identifier] = ACTIONS(113),
        [sym_comment] = ACTIONS(75),
    },
    [33] = {
        [sym__expression] = STATE(164),
        [sym_binary_operator] = STATE(16),
        [sym_subscript] = STATE(16),
        [sym_call] = STATE(16),
        [sym_list] = STATE(16),
        [sym_list_comprehension] = STATE(16),
        [sym_dictionary] = STATE(16),
        [sym_dictionary_comprehension] = STATE(16),
        [sym_set] = STATE(16),
        [sym_set_comprehension] = STATE(16),
        [anon_sym_LBRACK] = ACTIONS(109),
        [anon_sym_LBRACE] = ACTIONS(111),
        [sym_number] = ACTIONS(113),
        [sym_identifier] = ACTIONS(113),
        [sym_comment] = ACTIONS(75),
    },
    [34] = {
        [sym__expression] = STATE(160),
        [sym_binary_operator] = STATE(16),
        [sym_subscript] = STATE(16),
        [sym_call] = STATE(16),
        [sym_list] = STATE(16),
        [sym_list_comprehension] = STATE(16),
        [sym_dictionary] = STATE(16),
        [sym_dictionary_comprehension] = STATE(16),
        [sym_set] = STATE(16),
        [sym_set_comprehension] = STATE(16),
        [anon_sym_LBRACK] = ACTIONS(109),
        [anon_sym_LBRACE] = ACTIONS(111),
        [sym_number] = ACTIONS(113),
        [sym_identifier] = ACTIONS(113),
        [sym_comment] = ACTIONS(75),
    },
    [35] = {
        [sym__expression] = STATE(161),
        [sym_binary_operator] = STATE(16),
        [sym_subscript] = STATE(16),
        [sym_call] = STATE(16),
        [sym_list] = STATE(16),
        [sym_list_comprehension] = STATE(16),
        [sym_dictionary] = STATE(16),
        [sym_dictionary_comprehension] = STATE(16),
        [sym_set] = STATE(16),
        [sym_set_comprehension] = STATE(16),
        [anon_sym_LBRACK] = ACTIONS(109),
        [anon_sym_LBRACE] = ACTIONS(111),
        [sym_number] = ACTIONS(113),
        [sym_identifier] = ACTIONS(113),
        [sym_comment] = ACTIONS(75),
    },
    [36] = {
        [sym__expression] = STATE(163),
        [sym_binary_operator] = STATE(16),
        [sym_subscript] = STATE(16),
        [sym_call] = STATE(16),
        [sym_list] = STATE(16),
        [sym_list_comprehension] = STATE(16),
        [sym_dictionary] = STATE(16),
        [sym_dictionary_comprehension] = STATE(16),
        [sym_set] = STATE(16),
        [sym_set_comprehension] = STATE(16),
        [anon_sym_LBRACK] = ACTIONS(109),
        [anon_sym_LBRACE] = ACTIONS(111),
        [sym_number] = ACTIONS(113),
        [sym_identifier] = ACTIONS(113),
        [sym_comment] = ACTIONS(75),
    },
    [37] = {
        [sym__expression] = STATE(42),
        [sym_binary_operator] = STATE(41),
        [sym_subscript] = STATE(41),
        [sym_call] = STATE(41),
        [sym_list] = STATE(41),
        [sym_list_comprehension] = STATE(41),
        [sym_dictionary] = STATE(41),
        [sym_dictionary_comprehension] = STATE(41),
        [sym_set] = STATE(41),
        [sym_set_comprehension] = STATE(41),
        [anon_sym_LBRACK] = ACTIONS(119),
        [anon_sym_DOT_DOT_DOT] = ACTIONS(215),
        [anon_sym_LBRACE] = ACTIONS(121),
        [sym_number] = ACTIONS(123),
        [sym_identifier] = ACTIONS(123),
        [sym_comment] = ACTIONS(75),
    },
    [38] = {
        [sym__expression] = STATE(146),
        [sym_binary_operator] = STATE(41),
        [sym_subscript] = STATE(41),
        [sym_call] = STATE(41),
        [sym_list] = STATE(41),
        [sym_list_comprehension] = STATE(41),
        [sym_dictionary] = STATE(41),
        [sym_dictionary_comprehension] = STATE(41),
        [sym_set] = STATE(41),
        [sym_set_comprehension] = STATE(41),
        [anon_sym_LBRACK] = ACTIONS(119),
        [anon_sym_RBRACK] = ACTIONS(217),
        [anon_sym_LBRACE] = ACTIONS(121),
        [sym_number] = ACTIONS(123),
        [sym_identifier] = ACTIONS(123),
        [sym_comment] = ACTIONS(75),
    },
    [39] = {
        [aux_sym_subscript_repeat1] = STATE(53),
        [anon_sym_COMMA] = ACTIONS(219),
        [anon_sym_RBRACK] = ACTIONS(221),
        [sym_comment] = ACTIONS(75),
    },
    [40] = {
        [sym__expression] = STATE(110),
        [sym_binary_operator] = STATE(41),
        [sym_subscript] = STATE(41),
        [sym_call] = STATE(41),
        [sym_list] = STATE(41),
        [sym_list_comprehension] = STATE(41),
        [sym_dictionary] = STATE(41),
        [sym_dictionary_comprehension] = STATE(41),
        [sym_pair] = STATE(111),
        [sym_set] = STATE(41),
        [sym_set_comprehension] = STATE(41),
        [anon_sym_LBRACK] = ACTIONS(119),
        [anon_sym_LBRACE] = ACTIONS(121),
        [anon_sym_RBRACE] = ACTIONS(223),
        [sym_number] = ACTIONS(123),
        [sym_identifier] = ACTIONS(123),
        [sym_comment] = ACTIONS(75),
    },
    [41] = {
        [anon_sym_COMMA] = ACTIONS(137),
        [anon_sym_COLON] = ACTIONS(137),
        [anon_sym_for] = ACTIONS(137),
        [anon_sym_in] = ACTIONS(137),
        [anon_sym_as] = ACTIONS(137),
        [anon_sym_LPAREN] = ACTIONS(137),
        [anon_sym_RPAREN] = ACTIONS(137),
        [anon_sym_STAR] = ACTIONS(139),
        [anon_sym_PLUS] = ACTIONS(137),
        [anon_sym_DASH] = ACTIONS(137),
        [anon_sym_SLASH] = ACTIONS(137),
        [anon_sym_STAR_STAR] = ACTIONS(137),
        [anon_sym_PIPE] = ACTIONS(137),
        [anon_sym_AMP] = ACTIONS(137),
        [anon_sym_CARET] = ACTIONS(137),
        [anon_sym_LT_LT] = ACTIONS(137),
        [anon_sym_GT_GT] = ACTIONS(137),
        [anon_sym_and] = ACTIONS(137),
        [anon_sym_or] = ACTIONS(137),
        [anon_sym_LBRACK] = ACTIONS(137),
        [anon_sym_RBRACK] = ACTIONS(137),
        [anon_sym_RBRACE] = ACTIONS(137),
        [sym_comment] = ACTIONS(75),
    },
    [42] = {
        [aux_sym_subscript_repeat1] = STATE(53),
        [anon_sym_COMMA] = ACTIONS(219),
        [anon_sym_LPAREN] = ACTIONS(225),
        [anon_sym_STAR] = ACTIONS(227),
        [anon_sym_PLUS] = ACTIONS(229),
        [anon_sym_DASH] = ACTIONS(229),
        [anon_sym_SLASH] = ACTIONS(231),
        [anon_sym_STAR_STAR] = ACTIONS(233),
        [anon_sym_PIPE] = ACTIONS(235),
        [anon_sym_AMP] = ACTIONS(237),
        [anon_sym_CARET] = ACTIONS(239),
        [anon_sym_LT_LT] = ACTIONS(229),
        [anon_sym_GT_GT] = ACTIONS(229),
        [anon_sym_and] = ACTIONS(237),
        [anon_sym_or] = ACTIONS(235),
        [anon_sym_LBRACK] = ACTIONS(241),
        [anon_sym_RBRACK] = ACTIONS(221),
        [sym_comment] = ACTIONS(75),
    },
    [43] = {
        [sym__expression] = STATE(68),
        [sym_binary_operator] = STATE(41),
        [sym_subscript] = STATE(41),
        [sym_call] = STATE(41),
        [sym_list] = STATE(41),
        [sym_list_comprehension] = STATE(41),
        [sym_dictionary] = STATE(41),
        [sym_dictionary_comprehension] = STATE(41),
        [sym_set] = STATE(41),
        [sym_set_comprehension] = STATE(41),
        [anon_sym_LBRACK] = ACTIONS(119),
        [anon_sym_DOT_DOT_DOT] = ACTIONS(243),
        [anon_sym_RBRACK] = ACTIONS(245),
        [anon_sym_LBRACE] = ACTIONS(121),
        [sym_number] = ACTIONS(123),
        [sym_identifier] = ACTIONS(123),
        [sym_comment] = ACTIONS(75),
    },
    [44] = {
        [sym__expression] = STATE(78),
        [sym_binary_operator] = STATE(41),
        [sym_subscript] = STATE(41),
        [sym_call] = STATE(41),
        [sym_keyword_argument] = STATE(79),
        [sym_list_splat_argument] = STATE(80),
        [sym_dictionary_splat_argument] = STATE(81),
        [sym_list] = STATE(41),
        [sym_list_comprehension] = STATE(41),
        [sym_dictionary] = STATE(41),
        [sym_dictionary_comprehension] = STATE(41),
        [sym_set] = STATE(41),
        [sym_set_comprehension] = STATE(41),
        [aux_sym_call_repeat1] = STATE(82),
        [anon_sym_STAR] = ACTIONS(209),
        [anon_sym_STAR_STAR] = ACTIONS(211),
        [anon_sym_LBRACK] = ACTIONS(119),
        [anon_sym_LBRACE] = ACTIONS(121),
        [sym_number] = ACTIONS(123),
        [sym_identifier] = ACTIONS(213),
        [sym_comment] = ACTIONS(75),
    },
    [45] = {
        [sym__expression] = STATE(74),
        [sym_binary_operator] = STATE(41),
        [sym_subscript] = STATE(41),
        [sym_call] = STATE(41),
        [sym_list] = STATE(41),
        [sym_list_comprehension] = STATE(41),
        [sym_dictionary] = STATE(41),
        [sym_dictionary_comprehension] = STATE(41),
        [sym_set] = STATE(41),
        [sym_set_comprehension] = STATE(41),
        [anon_sym_LBRACK] = ACTIONS(119),
        [anon_sym_LBRACE] = ACTIONS(121),
        [sym_number] = ACTIONS(123),
        [sym_identifier] = ACTIONS(123),
        [sym_comment] = ACTIONS(75),
    },
    [46] = {
        [sym__expression] = STATE(71),
        [sym_binary_operator] = STATE(41),
        [sym_subscript] = STATE(41),
        [sym_call] = STATE(41),
        [sym_list] = STATE(41),
        [sym_list_comprehension] = STATE(41),
        [sym_dictionary] = STATE(41),
        [sym_dictionary_comprehension] = STATE(41),
        [sym_set] = STATE(41),
        [sym_set_comprehension] = STATE(41),
        [anon_sym_LBRACK] = ACTIONS(119),
        [anon_sym_LBRACE] = ACTIONS(121),
        [sym_number] = ACTIONS(123),
        [sym_identifier] = ACTIONS(123),
        [sym_comment] = ACTIONS(75),
    },
    [47] = {
        [sym__expression] = STATE(73),
        [sym_binary_operator] = STATE(41),
        [sym_subscript] = STATE(41),
        [sym_call] = STATE(41),
        [sym_list] = STATE(41),
        [sym_list_comprehension] = STATE(41),
        [sym_dictionary] = STATE(41),
        [sym_dictionary_comprehension] = STATE(41),
        [sym_set] = STATE(41),
        [sym_set_comprehension] = STATE(41),
        [anon_sym_LBRACK] = ACTIONS(119),
        [anon_sym_LBRACE] = ACTIONS(121),
        [sym_number] = ACTIONS(123),
        [sym_identifier] = ACTIONS(123),
        [sym_comment] = ACTIONS(75),
    },
    [48] = {
        [sym__expression] = STATE(69),
        [sym_binary_operator] = STATE(41),
        [sym_subscript] = STATE(41),
        [sym_call] = STATE(41),
        [sym_list] = STATE(41),
        [sym_list_comprehension] = STATE(41),
        [sym_dictionary] = STATE(41),
        [sym_dictionary_comprehension] = STATE(41),
        [sym_set] = STATE(41),
        [sym_set_comprehension] = STATE(41),
        [anon_sym_LBRACK] = ACTIONS(119),
        [anon_sym_LBRACE] = ACTIONS(121),
        [sym_number] = ACTIONS(123),
        [sym_identifier] = ACTIONS(123),
        [sym_comment] = ACTIONS(75),
    },
    [49] = {
        [sym__expression] = STATE(70),
        [sym_binary_operator] = STATE(41),
        [sym_subscript] = STATE(41),
        [sym_call] = STATE(41),
        [sym_list] = STATE(41),
        [sym_list_comprehension] = STATE(41),
        [sym_dictionary] = STATE(41),
        [sym_dictionary_comprehension] = STATE(41),
        [sym_set] = STATE(41),
        [sym_set_comprehension] = STATE(41),
        [anon_sym_LBRACK] = ACTIONS(119),
        [anon_sym_LBRACE] = ACTIONS(121),
        [sym_number] = ACTIONS(123),
        [sym_identifier] = ACTIONS(123),
        [sym_comment] = ACTIONS(75),
    },
    [50] = {
        [sym__expression] = STATE(72),
        [sym_binary_operator] = STATE(41),
        [sym_subscript] = STATE(41),
        [sym_call] = STATE(41),
        [sym_list] = STATE(41),
        [sym_list_comprehension] = STATE(41),
        [sym_dictionary] = STATE(41),
        [sym_dictionary_comprehension] = STATE(41),
        [sym_set] = STATE(41),
        [sym_set_comprehension] = STATE(41),
        [anon_sym_LBRACK] = ACTIONS(119),
        [anon_sym_LBRACE] = ACTIONS(121),
        [sym_number] = ACTIONS(123),
        [sym_identifier] = ACTIONS(123),
        [sym_comment] = ACTIONS(75),
    },
    [51] = {
        [sym__expression] = STATE(60),
        [sym_binary_operator] = STATE(41),
        [sym_subscript] = STATE(41),
        [sym_call] = STATE(41),
        [sym_list] = STATE(41),
        [sym_list_comprehension] = STATE(41),
        [sym_dictionary] = STATE(41),
        [sym_dictionary_comprehension] = STATE(41),
        [sym_set] = STATE(41),
        [sym_set_comprehension] = STATE(41),
        [anon_sym_LBRACK] = ACTIONS(119),
        [anon_sym_DOT_DOT_DOT] = ACTIONS(247),
        [anon_sym_LBRACE] = ACTIONS(121),
        [sym_number] = ACTIONS(123),
        [sym_identifier] = ACTIONS(123),
        [sym_comment] = ACTIONS(75),
    },
    [52] = {
        [anon_sym_COMMA] = ACTIONS(249),
        [anon_sym_COLON] = ACTIONS(249),
        [anon_sym_for] = ACTIONS(249),
        [anon_sym_in] = ACTIONS(249),
        [anon_sym_as] = ACTIONS(249),
        [anon_sym_LPAREN] = ACTIONS(249),
        [anon_sym_RPAREN] = ACTIONS(249),
        [anon_sym_STAR] = ACTIONS(251),
        [anon_sym_PLUS] = ACTIONS(249),
        [anon_sym_DASH] = ACTIONS(249),
        [anon_sym_SLASH] = ACTIONS(249),
        [anon_sym_STAR_STAR] = ACTIONS(249),
        [anon_sym_PIPE] = ACTIONS(249),
        [anon_sym_AMP] = ACTIONS(249),
        [anon_sym_CARET] = ACTIONS(249),
        [anon_sym_LT_LT] = ACTIONS(249),
        [anon_sym_GT_GT] = ACTIONS(249),
        [anon_sym_and] = ACTIONS(249),
        [anon_sym_or] = ACTIONS(249),
        [anon_sym_LBRACK] = ACTIONS(249),
        [anon_sym_RBRACK] = ACTIONS(249),
        [anon_sym_RBRACE] = ACTIONS(249),
        [sym_comment] = ACTIONS(75),
        [sym__newline] = ACTIONS(249),
    },
    [53] = {
        [anon_sym_COMMA] = ACTIONS(253),
        [anon_sym_RBRACK] = ACTIONS(245),
        [sym_comment] = ACTIONS(75),
    },
    [54] = {
        [sym__expression] = STATE(58),
        [sym_binary_operator] = STATE(41),
        [sym_subscript] = STATE(41),
        [sym_call] = STATE(41),
        [sym_list] = STATE(41),
        [sym_list_comprehension] = STATE(41),
        [sym_dictionary] = STATE(41),
        [sym_dictionary_comprehension] = STATE(41),
        [sym_set] = STATE(41),
        [sym_set_comprehension] = STATE(41),
        [anon_sym_LBRACK] = ACTIONS(119),
        [anon_sym_DOT_DOT_DOT] = ACTIONS(255),
        [anon_sym_RBRACK] = ACTIONS(257),
        [anon_sym_LBRACE] = ACTIONS(121),
        [sym_number] = ACTIONS(123),
        [sym_identifier] = ACTIONS(123),
        [sym_comment] = ACTIONS(75),
    },
    [55] = {
        [anon_sym_COMMA] = ACTIONS(259),
        [anon_sym_COLON] = ACTIONS(259),
        [anon_sym_for] = ACTIONS(259),
        [anon_sym_in] = ACTIONS(259),
        [anon_sym_as] = ACTIONS(259),
        [anon_sym_LPAREN] = ACTIONS(259),
        [anon_sym_RPAREN] = ACTIONS(259),
        [anon_sym_STAR] = ACTIONS(261),
        [anon_sym_PLUS] = ACTIONS(259),
        [anon_sym_DASH] = ACTIONS(259),
        [anon_sym_SLASH] = ACTIONS(259),
        [anon_sym_STAR_STAR] = ACTIONS(259),
        [anon_sym_PIPE] = ACTIONS(259),
        [anon_sym_AMP] = ACTIONS(259),
        [anon_sym_CARET] = ACTIONS(259),
        [anon_sym_LT_LT] = ACTIONS(259),
        [anon_sym_GT_GT] = ACTIONS(259),
        [anon_sym_and] = ACTIONS(259),
        [anon_sym_or] = ACTIONS(259),
        [anon_sym_LBRACK] = ACTIONS(259),
        [anon_sym_RBRACK] = ACTIONS(259),
        [anon_sym_RBRACE] = ACTIONS(259),
        [sym_comment] = ACTIONS(75),
        [sym__newline] = ACTIONS(259),
    },
    [56] = {
        [anon_sym_COMMA] = ACTIONS(263),
        [anon_sym_RBRACK] = ACTIONS(263),
        [sym_comment] = ACTIONS(75),
    },
    [57] = {
        [anon_sym_COMMA] = ACTIONS(265),
        [anon_sym_COLON] = ACTIONS(265),
        [anon_sym_for] = ACTIONS(265),
        [anon_sym_in] = ACTIONS(265),
        [anon_sym_as] = ACTIONS(265),
        [anon_sym_LPAREN] = ACTIONS(265),
        [anon_sym_RPAREN] = ACTIONS(265),
        [anon_sym_STAR] = ACTIONS(267),
        [anon_sym_PLUS] = ACTIONS(265),
        [anon_sym_DASH] = ACTIONS(265),
        [anon_sym_SLASH] = ACTIONS(265),
        [anon_sym_STAR_STAR] = ACTIONS(265),
        [anon_sym_PIPE] = ACTIONS(265),
        [anon_sym_AMP] = ACTIONS(265),
        [anon_sym_CARET] = ACTIONS(265),
        [anon_sym_LT_LT] = ACTIONS(265),
        [anon_sym_GT_GT] = ACTIONS(265),
        [anon_sym_and] = ACTIONS(265),
        [anon_sym_or] = ACTIONS(265),
        [anon_sym_LBRACK] = ACTIONS(265),
        [anon_sym_RBRACK] = ACTIONS(265),
        [anon_sym_RBRACE] = ACTIONS(265),
        [sym_comment] = ACTIONS(75),
        [sym__newline] = ACTIONS(265),
    },
    [58] = {
        [anon_sym_COMMA] = ACTIONS(263),
        [anon_sym_LPAREN] = ACTIONS(225),
        [anon_sym_STAR] = ACTIONS(227),
        [anon_sym_PLUS] = ACTIONS(229),
        [anon_sym_DASH] = ACTIONS(229),
        [anon_sym_SLASH] = ACTIONS(231),
        [anon_sym_STAR_STAR] = ACTIONS(233),
        [anon_sym_PIPE] = ACTIONS(235),
        [anon_sym_AMP] = ACTIONS(237),
        [anon_sym_CARET] = ACTIONS(239),
        [anon_sym_LT_LT] = ACTIONS(229),
        [anon_sym_GT_GT] = ACTIONS(229),
        [anon_sym_and] = ACTIONS(237),
        [anon_sym_or] = ACTIONS(235),
        [anon_sym_LBRACK] = ACTIONS(241),
        [anon_sym_RBRACK] = ACTIONS(263),
        [sym_comment] = ACTIONS(75),
    },
    [59] = {
        [aux_sym_subscript_repeat1] = STATE(63),
        [anon_sym_COMMA] = ACTIONS(269),
        [anon_sym_RBRACK] = ACTIONS(271),
        [sym_comment] = ACTIONS(75),
    },
    [60] = {
        [aux_sym_subscript_repeat1] = STATE(63),
        [anon_sym_COMMA] = ACTIONS(269),
        [anon_sym_LPAREN] = ACTIONS(225),
        [anon_sym_STAR] = ACTIONS(227),
        [anon_sym_PLUS] = ACTIONS(229),
        [anon_sym_DASH] = ACTIONS(229),
        [anon_sym_SLASH] = ACTIONS(231),
        [anon_sym_STAR_STAR] = ACTIONS(233),
        [anon_sym_PIPE] = ACTIONS(235),
        [anon_sym_AMP] = ACTIONS(237),
        [anon_sym_CARET] = ACTIONS(239),
        [anon_sym_LT_LT] = ACTIONS(229),
        [anon_sym_GT_GT] = ACTIONS(229),
        [anon_sym_and] = ACTIONS(237),
        [anon_sym_or] = ACTIONS(235),
        [anon_sym_LBRACK] = ACTIONS(241),
        [anon_sym_RBRACK] = ACTIONS(271),
        [sym_comment] = ACTIONS(75),
    },
    [61] = {
        [sym__expression] = STATE(68),
        [sym_binary_operator] = STATE(41),
        [sym_subscript] = STATE(41),
        [sym_call] = STATE(41),
        [sym_list] = STATE(41),
        [sym_list_comprehension] = STATE(41),
        [sym_dictionary] = STATE(41),
        [sym_dictionary_comprehension] = STATE(41),
        [sym_set] = STATE(41),
        [sym_set_comprehension] = STATE(41),
        [anon_sym_LBRACK] = ACTIONS(119),
        [anon_sym_DOT_DOT_DOT] = ACTIONS(243),
        [anon_sym_RBRACK] = ACTIONS(273),
        [anon_sym_LBRACE] = ACTIONS(121),
        [sym_number] = ACTIONS(123),
        [sym_identifier] = ACTIONS(123),
        [sym_comment] = ACTIONS(75),
    },
    [62] = {
        [anon_sym_COMMA] = ACTIONS(249),
        [anon_sym_COLON] = ACTIONS(249),
        [anon_sym_for] = ACTIONS(249),
        [anon_sym_in] = ACTIONS(249),
        [anon_sym_as] = ACTIONS(249),
        [anon_sym_LPAREN] = ACTIONS(249),
        [anon_sym_RPAREN] = ACTIONS(249),
        [anon_sym_STAR] = ACTIONS(251),
        [anon_sym_PLUS] = ACTIONS(249),
        [anon_sym_DASH] = ACTIONS(249),
        [anon_sym_SLASH] = ACTIONS(249),
        [anon_sym_STAR_STAR] = ACTIONS(249),
        [anon_sym_PIPE] = ACTIONS(249),
        [anon_sym_AMP] = ACTIONS(249),
        [anon_sym_CARET] = ACTIONS(249),
        [anon_sym_LT_LT] = ACTIONS(249),
        [anon_sym_GT_GT] = ACTIONS(249),
        [anon_sym_and] = ACTIONS(249),
        [anon_sym_or] = ACTIONS(249),
        [anon_sym_LBRACK] = ACTIONS(249),
        [anon_sym_RBRACK] = ACTIONS(249),
        [anon_sym_RBRACE] = ACTIONS(249),
        [sym_comment] = ACTIONS(75),
    },
    [63] = {
        [anon_sym_COMMA] = ACTIONS(275),
        [anon_sym_RBRACK] = ACTIONS(273),
        [sym_comment] = ACTIONS(75),
    },
    [64] = {
        [sym__expression] = STATE(58),
        [sym_binary_operator] = STATE(41),
        [sym_subscript] = STATE(41),
        [sym_call] = STATE(41),
        [sym_list] = STATE(41),
        [sym_list_comprehension] = STATE(41),
        [sym_dictionary] = STATE(41),
        [sym_dictionary_comprehension] = STATE(41),
        [sym_set] = STATE(41),
        [sym_set_comprehension] = STATE(41),
        [anon_sym_LBRACK] = ACTIONS(119),
        [anon_sym_DOT_DOT_DOT] = ACTIONS(255),
        [anon_sym_RBRACK] = ACTIONS(277),
        [anon_sym_LBRACE] = ACTIONS(121),
        [sym_number] = ACTIONS(123),
        [sym_identifier] = ACTIONS(123),
        [sym_comment] = ACTIONS(75),
    },
    [65] = {
        [anon_sym_COMMA] = ACTIONS(259),
        [anon_sym_COLON] = ACTIONS(259),
        [anon_sym_for] = ACTIONS(259),
        [anon_sym_in] = ACTIONS(259),
        [anon_sym_as] = ACTIONS(259),
        [anon_sym_LPAREN] = ACTIONS(259),
        [anon_sym_RPAREN] = ACTIONS(259),
        [anon_sym_STAR] = ACTIONS(261),
        [anon_sym_PLUS] = ACTIONS(259),
        [anon_sym_DASH] = ACTIONS(259),
        [anon_sym_SLASH] = ACTIONS(259),
        [anon_sym_STAR_STAR] = ACTIONS(259),
        [anon_sym_PIPE] = ACTIONS(259),
        [anon_sym_AMP] = ACTIONS(259),
        [anon_sym_CARET] = ACTIONS(259),
        [anon_sym_LT_LT] = ACTIONS(259),
        [anon_sym_GT_GT] = ACTIONS(259),
        [anon_sym_and] = ACTIONS(259),
        [anon_sym_or] = ACTIONS(259),
        [anon_sym_LBRACK] = ACTIONS(259),
        [anon_sym_RBRACK] = ACTIONS(259),
        [anon_sym_RBRACE] = ACTIONS(259),
        [sym_comment] = ACTIONS(75),
    },
    [66] = {
        [anon_sym_COMMA] = ACTIONS(265),
        [anon_sym_COLON] = ACTIONS(265),
        [anon_sym_for] = ACTIONS(265),
        [anon_sym_in] = ACTIONS(265),
        [anon_sym_as] = ACTIONS(265),
        [anon_sym_LPAREN] = ACTIONS(265),
        [anon_sym_RPAREN] = ACTIONS(265),
        [anon_sym_STAR] = ACTIONS(267),
        [anon_sym_PLUS] = ACTIONS(265),
        [anon_sym_DASH] = ACTIONS(265),
        [anon_sym_SLASH] = ACTIONS(265),
        [anon_sym_STAR_STAR] = ACTIONS(265),
        [anon_sym_PIPE] = ACTIONS(265),
        [anon_sym_AMP] = ACTIONS(265),
        [anon_sym_CARET] = ACTIONS(265),
        [anon_sym_LT_LT] = ACTIONS(265),
        [anon_sym_GT_GT] = ACTIONS(265),
        [anon_sym_and] = ACTIONS(265),
        [anon_sym_or] = ACTIONS(265),
        [anon_sym_LBRACK] = ACTIONS(265),
        [anon_sym_RBRACK] = ACTIONS(265),
        [anon_sym_RBRACE] = ACTIONS(265),
        [sym_comment] = ACTIONS(75),
    },
    [67] = {
        [anon_sym_COMMA] = ACTIONS(279),
        [anon_sym_RBRACK] = ACTIONS(279),
        [sym_comment] = ACTIONS(75),
    },
    [68] = {
        [anon_sym_COMMA] = ACTIONS(279),
        [anon_sym_LPAREN] = ACTIONS(225),
        [anon_sym_STAR] = ACTIONS(227),
        [anon_sym_PLUS] = ACTIONS(229),
        [anon_sym_DASH] = ACTIONS(229),
        [anon_sym_SLASH] = ACTIONS(231),
        [anon_sym_STAR_STAR] = ACTIONS(233),
        [anon_sym_PIPE] = ACTIONS(235),
        [anon_sym_AMP] = ACTIONS(237),
        [anon_sym_CARET] = ACTIONS(239),
        [anon_sym_LT_LT] = ACTIONS(229),
        [anon_sym_GT_GT] = ACTIONS(229),
        [anon_sym_and] = ACTIONS(237),
        [anon_sym_or] = ACTIONS(235),
        [anon_sym_LBRACK] = ACTIONS(241),
        [anon_sym_RBRACK] = ACTIONS(279),
        [sym_comment] = ACTIONS(75),
    },
    [69] = {
        [anon_sym_COMMA] = ACTIONS(281),
        [anon_sym_COLON] = ACTIONS(281),
        [anon_sym_for] = ACTIONS(281),
        [anon_sym_in] = ACTIONS(281),
        [anon_sym_as] = ACTIONS(281),
        [anon_sym_LPAREN] = ACTIONS(281),
        [anon_sym_RPAREN] = ACTIONS(281),
        [anon_sym_STAR] = ACTIONS(227),
        [anon_sym_PLUS] = ACTIONS(229),
        [anon_sym_DASH] = ACTIONS(229),
        [anon_sym_SLASH] = ACTIONS(231),
        [anon_sym_STAR_STAR] = ACTIONS(233),
        [anon_sym_PIPE] = ACTIONS(281),
        [anon_sym_AMP] = ACTIONS(237),
        [anon_sym_CARET] = ACTIONS(239),
        [anon_sym_LT_LT] = ACTIONS(229),
        [anon_sym_GT_GT] = ACTIONS(229),
        [anon_sym_and] = ACTIONS(237),
        [anon_sym_or] = ACTIONS(281),
        [anon_sym_LBRACK] = ACTIONS(281),
        [anon_sym_RBRACK] = ACTIONS(281),
        [anon_sym_RBRACE] = ACTIONS(281),
        [sym_comment] = ACTIONS(75),
    },
    [70] = {
        [anon_sym_COMMA] = ACTIONS(281),
        [anon_sym_COLON] = ACTIONS(281),
        [anon_sym_for] = ACTIONS(281),
        [anon_sym_in] = ACTIONS(281),
        [anon_sym_as] = ACTIONS(281),
        [anon_sym_LPAREN] = ACTIONS(281),
        [anon_sym_RPAREN] = ACTIONS(281),
        [anon_sym_STAR] = ACTIONS(227),
        [anon_sym_PLUS] = ACTIONS(229),
        [anon_sym_DASH] = ACTIONS(229),
        [anon_sym_SLASH] = ACTIONS(231),
        [anon_sym_STAR_STAR] = ACTIONS(233),
        [anon_sym_PIPE] = ACTIONS(281),
        [anon_sym_AMP] = ACTIONS(281),
        [anon_sym_CARET] = ACTIONS(239),
        [anon_sym_LT_LT] = ACTIONS(229),
        [anon_sym_GT_GT] = ACTIONS(229),
        [anon_sym_and] = ACTIONS(281),
        [anon_sym_or] = ACTIONS(281),
        [anon_sym_LBRACK] = ACTIONS(281),
        [anon_sym_RBRACK] = ACTIONS(281),
        [anon_sym_RBRACE] = ACTIONS(281),
        [sym_comment] = ACTIONS(75),
    },
    [71] = {
        [anon_sym_COMMA] = ACTIONS(281),
        [anon_sym_COLON] = ACTIONS(281),
        [anon_sym_for] = ACTIONS(281),
        [anon_sym_in] = ACTIONS(281),
        [anon_sym_as] = ACTIONS(281),
        [anon_sym_LPAREN] = ACTIONS(281),
        [anon_sym_RPAREN] = ACTIONS(281),
        [anon_sym_STAR] = ACTIONS(227),
        [anon_sym_PLUS] = ACTIONS(281),
        [anon_sym_DASH] = ACTIONS(281),
        [anon_sym_SLASH] = ACTIONS(231),
        [anon_sym_STAR_STAR] = ACTIONS(233),
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
        [sym_comment] = ACTIONS(75),
    },
    [72] = {
        [anon_sym_COMMA] = ACTIONS(281),
        [anon_sym_COLON] = ACTIONS(281),
        [anon_sym_for] = ACTIONS(281),
        [anon_sym_in] = ACTIONS(281),
        [anon_sym_as] = ACTIONS(281),
        [anon_sym_LPAREN] = ACTIONS(281),
        [anon_sym_RPAREN] = ACTIONS(281),
        [anon_sym_STAR] = ACTIONS(227),
        [anon_sym_PLUS] = ACTIONS(229),
        [anon_sym_DASH] = ACTIONS(229),
        [anon_sym_SLASH] = ACTIONS(231),
        [anon_sym_STAR_STAR] = ACTIONS(233),
        [anon_sym_PIPE] = ACTIONS(281),
        [anon_sym_AMP] = ACTIONS(281),
        [anon_sym_CARET] = ACTIONS(281),
        [anon_sym_LT_LT] = ACTIONS(229),
        [anon_sym_GT_GT] = ACTIONS(229),
        [anon_sym_and] = ACTIONS(281),
        [anon_sym_or] = ACTIONS(281),
        [anon_sym_LBRACK] = ACTIONS(281),
        [anon_sym_RBRACK] = ACTIONS(281),
        [anon_sym_RBRACE] = ACTIONS(281),
        [sym_comment] = ACTIONS(75),
    },
    [73] = {
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
        [sym_comment] = ACTIONS(75),
    },
    [74] = {
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
        [anon_sym_STAR_STAR] = ACTIONS(233),
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
        [sym_comment] = ACTIONS(75),
    },
    [75] = {
        [sym__expression] = STATE(159),
        [sym_binary_operator] = STATE(41),
        [sym_subscript] = STATE(41),
        [sym_call] = STATE(41),
        [sym_list] = STATE(41),
        [sym_list_comprehension] = STATE(41),
        [sym_dictionary] = STATE(41),
        [sym_dictionary_comprehension] = STATE(41),
        [sym_set] = STATE(41),
        [sym_set_comprehension] = STATE(41),
        [anon_sym_LBRACK] = ACTIONS(119),
        [anon_sym_LBRACE] = ACTIONS(121),
        [sym_number] = ACTIONS(123),
        [sym_identifier] = ACTIONS(123),
        [sym_comment] = ACTIONS(75),
    },
    [76] = {
        [sym__expression] = STATE(158),
        [sym_binary_operator] = STATE(41),
        [sym_subscript] = STATE(41),
        [sym_call] = STATE(41),
        [sym_list] = STATE(41),
        [sym_list_comprehension] = STATE(41),
        [sym_dictionary] = STATE(41),
        [sym_dictionary_comprehension] = STATE(41),
        [sym_set] = STATE(41),
        [sym_set_comprehension] = STATE(41),
        [anon_sym_LBRACK] = ACTIONS(119),
        [anon_sym_LBRACE] = ACTIONS(121),
        [sym_number] = ACTIONS(123),
        [sym_identifier] = ACTIONS(123),
        [sym_comment] = ACTIONS(75),
    },
    [77] = {
        [anon_sym_COMMA] = ACTIONS(137),
        [anon_sym_LPAREN] = ACTIONS(137),
        [anon_sym_RPAREN] = ACTIONS(137),
        [anon_sym_EQ] = ACTIONS(285),
        [anon_sym_STAR] = ACTIONS(139),
        [anon_sym_PLUS] = ACTIONS(137),
        [anon_sym_DASH] = ACTIONS(137),
        [anon_sym_SLASH] = ACTIONS(137),
        [anon_sym_STAR_STAR] = ACTIONS(137),
        [anon_sym_PIPE] = ACTIONS(137),
        [anon_sym_AMP] = ACTIONS(137),
        [anon_sym_CARET] = ACTIONS(137),
        [anon_sym_LT_LT] = ACTIONS(137),
        [anon_sym_GT_GT] = ACTIONS(137),
        [anon_sym_and] = ACTIONS(137),
        [anon_sym_or] = ACTIONS(137),
        [anon_sym_LBRACK] = ACTIONS(137),
        [sym_comment] = ACTIONS(75),
    },
    [78] = {
        [anon_sym_COMMA] = ACTIONS(287),
        [anon_sym_LPAREN] = ACTIONS(225),
        [anon_sym_RPAREN] = ACTIONS(289),
        [anon_sym_STAR] = ACTIONS(227),
        [anon_sym_PLUS] = ACTIONS(229),
        [anon_sym_DASH] = ACTIONS(229),
        [anon_sym_SLASH] = ACTIONS(231),
        [anon_sym_STAR_STAR] = ACTIONS(233),
        [anon_sym_PIPE] = ACTIONS(235),
        [anon_sym_AMP] = ACTIONS(237),
        [anon_sym_CARET] = ACTIONS(239),
        [anon_sym_LT_LT] = ACTIONS(229),
        [anon_sym_GT_GT] = ACTIONS(229),
        [anon_sym_and] = ACTIONS(237),
        [anon_sym_or] = ACTIONS(235),
        [anon_sym_LBRACK] = ACTIONS(241),
        [sym_comment] = ACTIONS(75),
    },
    [79] = {
        [anon_sym_COMMA] = ACTIONS(287),
        [anon_sym_RPAREN] = ACTIONS(289),
        [sym_comment] = ACTIONS(75),
    },
    [80] = {
        [aux_sym_call_repeat2] = STATE(103),
        [anon_sym_COMMA] = ACTIONS(291),
        [anon_sym_RPAREN] = ACTIONS(289),
        [sym_comment] = ACTIONS(75),
    },
    [81] = {
        [anon_sym_RPAREN] = ACTIONS(289),
        [sym_comment] = ACTIONS(75),
    },
    [82] = {
        [sym__expression] = STATE(83),
        [sym_binary_operator] = STATE(41),
        [sym_subscript] = STATE(41),
        [sym_call] = STATE(41),
        [sym_keyword_argument] = STATE(84),
        [sym_list_splat_argument] = STATE(85),
        [sym_dictionary_splat_argument] = STATE(86),
        [sym_list] = STATE(41),
        [sym_list_comprehension] = STATE(41),
        [sym_dictionary] = STATE(41),
        [sym_dictionary_comprehension] = STATE(41),
        [sym_set] = STATE(41),
        [sym_set_comprehension] = STATE(41),
        [anon_sym_STAR] = ACTIONS(209),
        [anon_sym_STAR_STAR] = ACTIONS(211),
        [anon_sym_LBRACK] = ACTIONS(119),
        [anon_sym_LBRACE] = ACTIONS(121),
        [sym_number] = ACTIONS(123),
        [sym_identifier] = ACTIONS(213),
        [sym_comment] = ACTIONS(75),
    },
    [83] = {
        [anon_sym_COMMA] = ACTIONS(293),
        [anon_sym_LPAREN] = ACTIONS(225),
        [anon_sym_RPAREN] = ACTIONS(295),
        [anon_sym_STAR] = ACTIONS(227),
        [anon_sym_PLUS] = ACTIONS(229),
        [anon_sym_DASH] = ACTIONS(229),
        [anon_sym_SLASH] = ACTIONS(231),
        [anon_sym_STAR_STAR] = ACTIONS(233),
        [anon_sym_PIPE] = ACTIONS(235),
        [anon_sym_AMP] = ACTIONS(237),
        [anon_sym_CARET] = ACTIONS(239),
        [anon_sym_LT_LT] = ACTIONS(229),
        [anon_sym_GT_GT] = ACTIONS(229),
        [anon_sym_and] = ACTIONS(237),
        [anon_sym_or] = ACTIONS(235),
        [anon_sym_LBRACK] = ACTIONS(241),
        [sym_comment] = ACTIONS(75),
    },
    [84] = {
        [anon_sym_COMMA] = ACTIONS(293),
        [anon_sym_RPAREN] = ACTIONS(295),
        [sym_comment] = ACTIONS(75),
    },
    [85] = {
        [aux_sym_call_repeat2] = STATE(89),
        [anon_sym_COMMA] = ACTIONS(297),
        [anon_sym_RPAREN] = ACTIONS(295),
        [sym_comment] = ACTIONS(75),
    },
    [86] = {
        [anon_sym_RPAREN] = ACTIONS(295),
        [sym_comment] = ACTIONS(75),
    },
    [87] = {
        [anon_sym_COMMA] = ACTIONS(299),
        [anon_sym_COLON] = ACTIONS(299),
        [anon_sym_for] = ACTIONS(299),
        [anon_sym_in] = ACTIONS(299),
        [anon_sym_as] = ACTIONS(299),
        [anon_sym_LPAREN] = ACTIONS(299),
        [anon_sym_RPAREN] = ACTIONS(299),
        [anon_sym_STAR] = ACTIONS(301),
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
        [sym_comment] = ACTIONS(75),
    },
    [88] = {
        [sym__expression] = STATE(96),
        [sym_binary_operator] = STATE(41),
        [sym_subscript] = STATE(41),
        [sym_call] = STATE(41),
        [sym_keyword_argument] = STATE(97),
        [sym_dictionary_splat_argument] = STATE(98),
        [sym_list] = STATE(41),
        [sym_list_comprehension] = STATE(41),
        [sym_dictionary] = STATE(41),
        [sym_dictionary_comprehension] = STATE(41),
        [sym_set] = STATE(41),
        [sym_set_comprehension] = STATE(41),
        [anon_sym_STAR_STAR] = ACTIONS(211),
        [anon_sym_LBRACK] = ACTIONS(119),
        [anon_sym_LBRACE] = ACTIONS(121),
        [sym_number] = ACTIONS(123),
        [sym_identifier] = ACTIONS(213),
        [sym_comment] = ACTIONS(75),
    },
    [89] = {
        [anon_sym_COMMA] = ACTIONS(303),
        [anon_sym_RPAREN] = ACTIONS(305),
        [sym_comment] = ACTIONS(75),
    },
    [90] = {
        [sym__expression] = STATE(92),
        [sym_binary_operator] = STATE(41),
        [sym_subscript] = STATE(41),
        [sym_call] = STATE(41),
        [sym_keyword_argument] = STATE(93),
        [sym_dictionary_splat_argument] = STATE(94),
        [sym_list] = STATE(41),
        [sym_list_comprehension] = STATE(41),
        [sym_dictionary] = STATE(41),
        [sym_dictionary_comprehension] = STATE(41),
        [sym_set] = STATE(41),
        [sym_set_comprehension] = STATE(41),
        [anon_sym_STAR_STAR] = ACTIONS(211),
        [anon_sym_LBRACK] = ACTIONS(119),
        [anon_sym_LBRACE] = ACTIONS(121),
        [sym_number] = ACTIONS(123),
        [sym_identifier] = ACTIONS(213),
        [sym_comment] = ACTIONS(75),
    },
    [91] = {
        [anon_sym_COMMA] = ACTIONS(307),
        [anon_sym_COLON] = ACTIONS(307),
        [anon_sym_for] = ACTIONS(307),
        [anon_sym_in] = ACTIONS(307),
        [anon_sym_as] = ACTIONS(307),
        [anon_sym_LPAREN] = ACTIONS(307),
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
        [sym_comment] = ACTIONS(75),
    },
    [92] = {
        [anon_sym_COMMA] = ACTIONS(311),
        [anon_sym_LPAREN] = ACTIONS(225),
        [anon_sym_RPAREN] = ACTIONS(311),
        [anon_sym_STAR] = ACTIONS(227),
        [anon_sym_PLUS] = ACTIONS(229),
        [anon_sym_DASH] = ACTIONS(229),
        [anon_sym_SLASH] = ACTIONS(231),
        [anon_sym_STAR_STAR] = ACTIONS(233),
        [anon_sym_PIPE] = ACTIONS(235),
        [anon_sym_AMP] = ACTIONS(237),
        [anon_sym_CARET] = ACTIONS(239),
        [anon_sym_LT_LT] = ACTIONS(229),
        [anon_sym_GT_GT] = ACTIONS(229),
        [anon_sym_and] = ACTIONS(237),
        [anon_sym_or] = ACTIONS(235),
        [anon_sym_LBRACK] = ACTIONS(241),
        [sym_comment] = ACTIONS(75),
    },
    [93] = {
        [anon_sym_COMMA] = ACTIONS(311),
        [anon_sym_RPAREN] = ACTIONS(311),
        [sym_comment] = ACTIONS(75),
    },
    [94] = {
        [anon_sym_RPAREN] = ACTIONS(313),
        [sym_comment] = ACTIONS(75),
    },
    [95] = {
        [anon_sym_COMMA] = ACTIONS(315),
        [anon_sym_COLON] = ACTIONS(315),
        [anon_sym_for] = ACTIONS(315),
        [anon_sym_in] = ACTIONS(315),
        [anon_sym_as] = ACTIONS(315),
        [anon_sym_LPAREN] = ACTIONS(315),
        [anon_sym_RPAREN] = ACTIONS(315),
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
        [anon_sym_RBRACK] = ACTIONS(315),
        [anon_sym_RBRACE] = ACTIONS(315),
        [sym_comment] = ACTIONS(75),
    },
    [96] = {
        [anon_sym_COMMA] = ACTIONS(319),
        [anon_sym_LPAREN] = ACTIONS(225),
        [anon_sym_RPAREN] = ACTIONS(319),
        [anon_sym_STAR] = ACTIONS(227),
        [anon_sym_PLUS] = ACTIONS(229),
        [anon_sym_DASH] = ACTIONS(229),
        [anon_sym_SLASH] = ACTIONS(231),
        [anon_sym_STAR_STAR] = ACTIONS(233),
        [anon_sym_PIPE] = ACTIONS(235),
        [anon_sym_AMP] = ACTIONS(237),
        [anon_sym_CARET] = ACTIONS(239),
        [anon_sym_LT_LT] = ACTIONS(229),
        [anon_sym_GT_GT] = ACTIONS(229),
        [anon_sym_and] = ACTIONS(237),
        [anon_sym_or] = ACTIONS(235),
        [anon_sym_LBRACK] = ACTIONS(241),
        [sym_comment] = ACTIONS(75),
    },
    [97] = {
        [anon_sym_COMMA] = ACTIONS(319),
        [anon_sym_RPAREN] = ACTIONS(319),
        [sym_comment] = ACTIONS(75),
    },
    [98] = {
        [anon_sym_RPAREN] = ACTIONS(321),
        [sym_comment] = ACTIONS(75),
    },
    [99] = {
        [anon_sym_COMMA] = ACTIONS(323),
        [anon_sym_COLON] = ACTIONS(323),
        [anon_sym_for] = ACTIONS(323),
        [anon_sym_in] = ACTIONS(323),
        [anon_sym_as] = ACTIONS(323),
        [anon_sym_LPAREN] = ACTIONS(323),
        [anon_sym_RPAREN] = ACTIONS(323),
        [anon_sym_STAR] = ACTIONS(325),
        [anon_sym_PLUS] = ACTIONS(323),
        [anon_sym_DASH] = ACTIONS(323),
        [anon_sym_SLASH] = ACTIONS(323),
        [anon_sym_STAR_STAR] = ACTIONS(323),
        [anon_sym_PIPE] = ACTIONS(323),
        [anon_sym_AMP] = ACTIONS(323),
        [anon_sym_CARET] = ACTIONS(323),
        [anon_sym_LT_LT] = ACTIONS(323),
        [anon_sym_GT_GT] = ACTIONS(323),
        [anon_sym_and] = ACTIONS(323),
        [anon_sym_or] = ACTIONS(323),
        [anon_sym_LBRACK] = ACTIONS(323),
        [anon_sym_RBRACK] = ACTIONS(323),
        [anon_sym_RBRACE] = ACTIONS(323),
        [sym_comment] = ACTIONS(75),
    },
    [100] = {
        [anon_sym_RPAREN] = ACTIONS(305),
        [anon_sym_STAR] = ACTIONS(327),
        [anon_sym_STAR_STAR] = ACTIONS(329),
        [anon_sym_LBRACK] = ACTIONS(329),
        [anon_sym_LBRACE] = ACTIONS(329),
        [sym_number] = ACTIONS(327),
        [sym_identifier] = ACTIONS(327),
        [sym_comment] = ACTIONS(75),
    },
    [101] = {
        [anon_sym_COMMA] = ACTIONS(331),
        [anon_sym_COLON] = ACTIONS(331),
        [anon_sym_for] = ACTIONS(331),
        [anon_sym_in] = ACTIONS(331),
        [anon_sym_as] = ACTIONS(331),
        [anon_sym_LPAREN] = ACTIONS(331),
        [anon_sym_RPAREN] = ACTIONS(331),
        [anon_sym_STAR] = ACTIONS(333),
        [anon_sym_PLUS] = ACTIONS(331),
        [anon_sym_DASH] = ACTIONS(331),
        [anon_sym_SLASH] = ACTIONS(331),
        [anon_sym_STAR_STAR] = ACTIONS(331),
        [anon_sym_PIPE] = ACTIONS(331),
        [anon_sym_AMP] = ACTIONS(331),
        [anon_sym_CARET] = ACTIONS(331),
        [anon_sym_LT_LT] = ACTIONS(331),
        [anon_sym_GT_GT] = ACTIONS(331),
        [anon_sym_and] = ACTIONS(331),
        [anon_sym_or] = ACTIONS(331),
        [anon_sym_LBRACK] = ACTIONS(331),
        [anon_sym_RBRACK] = ACTIONS(331),
        [anon_sym_RBRACE] = ACTIONS(331),
        [sym_comment] = ACTIONS(75),
    },
    [102] = {
        [sym__expression] = STATE(96),
        [sym_binary_operator] = STATE(41),
        [sym_subscript] = STATE(41),
        [sym_call] = STATE(41),
        [sym_keyword_argument] = STATE(97),
        [sym_dictionary_splat_argument] = STATE(105),
        [sym_list] = STATE(41),
        [sym_list_comprehension] = STATE(41),
        [sym_dictionary] = STATE(41),
        [sym_dictionary_comprehension] = STATE(41),
        [sym_set] = STATE(41),
        [sym_set_comprehension] = STATE(41),
        [anon_sym_STAR_STAR] = ACTIONS(211),
        [anon_sym_LBRACK] = ACTIONS(119),
        [anon_sym_LBRACE] = ACTIONS(121),
        [sym_number] = ACTIONS(123),
        [sym_identifier] = ACTIONS(213),
        [sym_comment] = ACTIONS(75),
    },
    [103] = {
        [anon_sym_COMMA] = ACTIONS(335),
        [anon_sym_RPAREN] = ACTIONS(295),
        [sym_comment] = ACTIONS(75),
    },
    [104] = {
        [sym__expression] = STATE(92),
        [sym_binary_operator] = STATE(41),
        [sym_subscript] = STATE(41),
        [sym_call] = STATE(41),
        [sym_keyword_argument] = STATE(93),
        [sym_dictionary_splat_argument] = STATE(98),
        [sym_list] = STATE(41),
        [sym_list_comprehension] = STATE(41),
        [sym_dictionary] = STATE(41),
        [sym_dictionary_comprehension] = STATE(41),
        [sym_set] = STATE(41),
        [sym_set_comprehension] = STATE(41),
        [anon_sym_STAR_STAR] = ACTIONS(211),
        [anon_sym_LBRACK] = ACTIONS(119),
        [anon_sym_LBRACE] = ACTIONS(121),
        [sym_number] = ACTIONS(123),
        [sym_identifier] = ACTIONS(213),
        [sym_comment] = ACTIONS(75),
    },
    [105] = {
        [anon_sym_RPAREN] = ACTIONS(305),
        [sym_comment] = ACTIONS(75),
    },
    [106] = {
        [anon_sym_RPAREN] = ACTIONS(295),
        [anon_sym_STAR] = ACTIONS(337),
        [anon_sym_STAR_STAR] = ACTIONS(339),
        [anon_sym_LBRACK] = ACTIONS(339),
        [anon_sym_LBRACE] = ACTIONS(339),
        [sym_number] = ACTIONS(337),
        [sym_identifier] = ACTIONS(337),
        [sym_comment] = ACTIONS(75),
    },
    [107] = {
        [sym__expression] = STATE(108),
        [sym_binary_operator] = STATE(41),
        [sym_subscript] = STATE(41),
        [sym_call] = STATE(41),
        [sym_list] = STATE(41),
        [sym_list_comprehension] = STATE(41),
        [sym_dictionary] = STATE(41),
        [sym_dictionary_comprehension] = STATE(41),
        [sym_set] = STATE(41),
        [sym_set_comprehension] = STATE(41),
        [anon_sym_LBRACK] = ACTIONS(119),
        [anon_sym_LBRACE] = ACTIONS(121),
        [sym_number] = ACTIONS(123),
        [sym_identifier] = ACTIONS(123),
        [sym_comment] = ACTIONS(75),
    },
    [108] = {
        [anon_sym_COMMA] = ACTIONS(341),
        [anon_sym_LPAREN] = ACTIONS(225),
        [anon_sym_RPAREN] = ACTIONS(341),
        [anon_sym_STAR] = ACTIONS(227),
        [anon_sym_PLUS] = ACTIONS(229),
        [anon_sym_DASH] = ACTIONS(229),
        [anon_sym_SLASH] = ACTIONS(231),
        [anon_sym_STAR_STAR] = ACTIONS(233),
        [anon_sym_PIPE] = ACTIONS(235),
        [anon_sym_AMP] = ACTIONS(237),
        [anon_sym_CARET] = ACTIONS(239),
        [anon_sym_LT_LT] = ACTIONS(229),
        [anon_sym_GT_GT] = ACTIONS(229),
        [anon_sym_and] = ACTIONS(237),
        [anon_sym_or] = ACTIONS(235),
        [anon_sym_LBRACK] = ACTIONS(241),
        [sym_comment] = ACTIONS(75),
    },
    [109] = {
        [anon_sym_COMMA] = ACTIONS(343),
        [anon_sym_COLON] = ACTIONS(343),
        [anon_sym_for] = ACTIONS(343),
        [anon_sym_in] = ACTIONS(343),
        [anon_sym_as] = ACTIONS(343),
        [anon_sym_LPAREN] = ACTIONS(343),
        [anon_sym_RPAREN] = ACTIONS(343),
        [anon_sym_STAR] = ACTIONS(345),
        [anon_sym_PLUS] = ACTIONS(343),
        [anon_sym_DASH] = ACTIONS(343),
        [anon_sym_SLASH] = ACTIONS(343),
        [anon_sym_STAR_STAR] = ACTIONS(343),
        [anon_sym_PIPE] = ACTIONS(343),
        [anon_sym_AMP] = ACTIONS(343),
        [anon_sym_CARET] = ACTIONS(343),
        [anon_sym_LT_LT] = ACTIONS(343),
        [anon_sym_GT_GT] = ACTIONS(343),
        [anon_sym_and] = ACTIONS(343),
        [anon_sym_or] = ACTIONS(343),
        [anon_sym_LBRACK] = ACTIONS(343),
        [anon_sym_RBRACK] = ACTIONS(343),
        [anon_sym_RBRACE] = ACTIONS(343),
        [sym_comment] = ACTIONS(75),
    },
    [110] = {
        [aux_sym_print_statement_repeat1] = STATE(137),
        [anon_sym_COMMA] = ACTIONS(347),
        [anon_sym_COLON] = ACTIONS(349),
        [anon_sym_for] = ACTIONS(351),
        [anon_sym_LPAREN] = ACTIONS(225),
        [anon_sym_STAR] = ACTIONS(227),
        [anon_sym_PLUS] = ACTIONS(229),
        [anon_sym_DASH] = ACTIONS(229),
        [anon_sym_SLASH] = ACTIONS(231),
        [anon_sym_STAR_STAR] = ACTIONS(233),
        [anon_sym_PIPE] = ACTIONS(235),
        [anon_sym_AMP] = ACTIONS(237),
        [anon_sym_CARET] = ACTIONS(239),
        [anon_sym_LT_LT] = ACTIONS(229),
        [anon_sym_GT_GT] = ACTIONS(229),
        [anon_sym_and] = ACTIONS(237),
        [anon_sym_or] = ACTIONS(235),
        [anon_sym_LBRACK] = ACTIONS(241),
        [anon_sym_RBRACE] = ACTIONS(353),
        [sym_comment] = ACTIONS(75),
    },
    [111] = {
        [aux_sym_dictionary_repeat1] = STATE(115),
        [anon_sym_COMMA] = ACTIONS(355),
        [anon_sym_for] = ACTIONS(357),
        [anon_sym_RBRACE] = ACTIONS(359),
        [sym_comment] = ACTIONS(75),
    },
    [112] = {
        [sym__expression] = STATE(119),
        [sym_binary_operator] = STATE(41),
        [sym_subscript] = STATE(41),
        [sym_call] = STATE(41),
        [sym_list] = STATE(41),
        [sym_list_comprehension] = STATE(41),
        [sym_dictionary] = STATE(41),
        [sym_dictionary_comprehension] = STATE(41),
        [sym_pair] = STATE(133),
        [sym_set] = STATE(41),
        [sym_set_comprehension] = STATE(41),
        [anon_sym_LBRACK] = ACTIONS(119),
        [anon_sym_LBRACE] = ACTIONS(121),
        [anon_sym_RBRACE] = ACTIONS(361),
        [sym_number] = ACTIONS(123),
        [sym_identifier] = ACTIONS(123),
        [sym_comment] = ACTIONS(75),
    },
    [113] = {
        [sym_expression_list] = STATE(123),
        [sym__expression] = STATE(124),
        [sym_binary_operator] = STATE(41),
        [sym_subscript] = STATE(41),
        [sym_call] = STATE(41),
        [sym_list] = STATE(41),
        [sym_list_comprehension] = STATE(41),
        [sym_dictionary] = STATE(41),
        [sym_dictionary_comprehension] = STATE(41),
        [sym_set] = STATE(41),
        [sym_set_comprehension] = STATE(41),
        [anon_sym_LBRACK] = ACTIONS(119),
        [anon_sym_LBRACE] = ACTIONS(121),
        [sym_number] = ACTIONS(123),
        [sym_identifier] = ACTIONS(123),
        [sym_comment] = ACTIONS(75),
    },
    [114] = {
        [anon_sym_COMMA] = ACTIONS(363),
        [anon_sym_COLON] = ACTIONS(363),
        [anon_sym_for] = ACTIONS(363),
        [anon_sym_in] = ACTIONS(363),
        [anon_sym_as] = ACTIONS(363),
        [anon_sym_LPAREN] = ACTIONS(363),
        [anon_sym_RPAREN] = ACTIONS(363),
        [anon_sym_STAR] = ACTIONS(365),
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
        [sym_comment] = ACTIONS(75),
    },
    [115] = {
        [anon_sym_COMMA] = ACTIONS(367),
        [anon_sym_RBRACE] = ACTIONS(361),
        [sym_comment] = ACTIONS(75),
    },
    [116] = {
        [sym__expression] = STATE(119),
        [sym_binary_operator] = STATE(41),
        [sym_subscript] = STATE(41),
        [sym_call] = STATE(41),
        [sym_list] = STATE(41),
        [sym_list_comprehension] = STATE(41),
        [sym_dictionary] = STATE(41),
        [sym_dictionary_comprehension] = STATE(41),
        [sym_pair] = STATE(120),
        [sym_set] = STATE(41),
        [sym_set_comprehension] = STATE(41),
        [anon_sym_LBRACK] = ACTIONS(119),
        [anon_sym_LBRACE] = ACTIONS(121),
        [anon_sym_RBRACE] = ACTIONS(369),
        [sym_number] = ACTIONS(123),
        [sym_identifier] = ACTIONS(123),
        [sym_comment] = ACTIONS(75),
    },
    [117] = {
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
        [sym_comment] = ACTIONS(75),
    },
    [118] = {
        [anon_sym_COMMA] = ACTIONS(375),
        [anon_sym_COLON] = ACTIONS(375),
        [anon_sym_for] = ACTIONS(375),
        [anon_sym_in] = ACTIONS(375),
        [anon_sym_as] = ACTIONS(375),
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
        [sym_comment] = ACTIONS(75),
    },
    [119] = {
        [anon_sym_COLON] = ACTIONS(349),
        [anon_sym_LPAREN] = ACTIONS(225),
        [anon_sym_STAR] = ACTIONS(227),
        [anon_sym_PLUS] = ACTIONS(229),
        [anon_sym_DASH] = ACTIONS(229),
        [anon_sym_SLASH] = ACTIONS(231),
        [anon_sym_STAR_STAR] = ACTIONS(233),
        [anon_sym_PIPE] = ACTIONS(235),
        [anon_sym_AMP] = ACTIONS(237),
        [anon_sym_CARET] = ACTIONS(239),
        [anon_sym_LT_LT] = ACTIONS(229),
        [anon_sym_GT_GT] = ACTIONS(229),
        [anon_sym_and] = ACTIONS(237),
        [anon_sym_or] = ACTIONS(235),
        [anon_sym_LBRACK] = ACTIONS(241),
        [sym_comment] = ACTIONS(75),
    },
    [120] = {
        [anon_sym_COMMA] = ACTIONS(379),
        [anon_sym_RBRACE] = ACTIONS(379),
        [sym_comment] = ACTIONS(75),
    },
    [121] = {
        [sym__expression] = STATE(122),
        [sym_binary_operator] = STATE(41),
        [sym_subscript] = STATE(41),
        [sym_call] = STATE(41),
        [sym_list] = STATE(41),
        [sym_list_comprehension] = STATE(41),
        [sym_dictionary] = STATE(41),
        [sym_dictionary_comprehension] = STATE(41),
        [sym_set] = STATE(41),
        [sym_set_comprehension] = STATE(41),
        [anon_sym_LBRACK] = ACTIONS(119),
        [anon_sym_LBRACE] = ACTIONS(121),
        [sym_number] = ACTIONS(123),
        [sym_identifier] = ACTIONS(123),
        [sym_comment] = ACTIONS(75),
    },
    [122] = {
        [anon_sym_COMMA] = ACTIONS(381),
        [anon_sym_for] = ACTIONS(381),
        [anon_sym_LPAREN] = ACTIONS(225),
        [anon_sym_STAR] = ACTIONS(227),
        [anon_sym_PLUS] = ACTIONS(229),
        [anon_sym_DASH] = ACTIONS(229),
        [anon_sym_SLASH] = ACTIONS(231),
        [anon_sym_STAR_STAR] = ACTIONS(233),
        [anon_sym_PIPE] = ACTIONS(235),
        [anon_sym_AMP] = ACTIONS(237),
        [anon_sym_CARET] = ACTIONS(239),
        [anon_sym_LT_LT] = ACTIONS(229),
        [anon_sym_GT_GT] = ACTIONS(229),
        [anon_sym_and] = ACTIONS(237),
        [anon_sym_or] = ACTIONS(235),
        [anon_sym_LBRACK] = ACTIONS(241),
        [anon_sym_RBRACE] = ACTIONS(381),
        [sym_comment] = ACTIONS(75),
    },
    [123] = {
        [anon_sym_in] = ACTIONS(383),
        [sym_comment] = ACTIONS(75),
    },
    [124] = {
        [aux_sym_print_statement_repeat1] = STATE(126),
        [anon_sym_COMMA] = ACTIONS(385),
        [anon_sym_COLON] = ACTIONS(387),
        [anon_sym_in] = ACTIONS(387),
        [anon_sym_LPAREN] = ACTIONS(225),
        [anon_sym_RPAREN] = ACTIONS(387),
        [anon_sym_STAR] = ACTIONS(227),
        [anon_sym_PLUS] = ACTIONS(229),
        [anon_sym_DASH] = ACTIONS(229),
        [anon_sym_SLASH] = ACTIONS(231),
        [anon_sym_STAR_STAR] = ACTIONS(233),
        [anon_sym_PIPE] = ACTIONS(235),
        [anon_sym_AMP] = ACTIONS(237),
        [anon_sym_CARET] = ACTIONS(239),
        [anon_sym_LT_LT] = ACTIONS(229),
        [anon_sym_GT_GT] = ACTIONS(229),
        [anon_sym_and] = ACTIONS(237),
        [anon_sym_or] = ACTIONS(235),
        [anon_sym_LBRACK] = ACTIONS(241),
        [sym_comment] = ACTIONS(75),
    },
    [125] = {
        [sym__expression] = STATE(129),
        [sym_binary_operator] = STATE(41),
        [sym_subscript] = STATE(41),
        [sym_call] = STATE(41),
        [sym_list] = STATE(41),
        [sym_list_comprehension] = STATE(41),
        [sym_dictionary] = STATE(41),
        [sym_dictionary_comprehension] = STATE(41),
        [sym_set] = STATE(41),
        [sym_set_comprehension] = STATE(41),
        [anon_sym_LBRACK] = ACTIONS(119),
        [anon_sym_LBRACE] = ACTIONS(121),
        [sym_number] = ACTIONS(123),
        [sym_identifier] = ACTIONS(123),
        [sym_comment] = ACTIONS(75),
    },
    [126] = {
        [anon_sym_COMMA] = ACTIONS(389),
        [anon_sym_COLON] = ACTIONS(391),
        [anon_sym_in] = ACTIONS(391),
        [anon_sym_RPAREN] = ACTIONS(391),
        [sym_comment] = ACTIONS(75),
    },
    [127] = {
        [sym__expression] = STATE(128),
        [sym_binary_operator] = STATE(41),
        [sym_subscript] = STATE(41),
        [sym_call] = STATE(41),
        [sym_list] = STATE(41),
        [sym_list_comprehension] = STATE(41),
        [sym_dictionary] = STATE(41),
        [sym_dictionary_comprehension] = STATE(41),
        [sym_set] = STATE(41),
        [sym_set_comprehension] = STATE(41),
        [anon_sym_LBRACK] = ACTIONS(119),
        [anon_sym_LBRACE] = ACTIONS(121),
        [sym_number] = ACTIONS(123),
        [sym_identifier] = ACTIONS(123),
        [sym_comment] = ACTIONS(75),
    },
    [128] = {
        [anon_sym_COMMA] = ACTIONS(393),
        [anon_sym_COLON] = ACTIONS(393),
        [anon_sym_in] = ACTIONS(393),
        [anon_sym_LPAREN] = ACTIONS(225),
        [anon_sym_RPAREN] = ACTIONS(393),
        [anon_sym_STAR] = ACTIONS(227),
        [anon_sym_PLUS] = ACTIONS(229),
        [anon_sym_DASH] = ACTIONS(229),
        [anon_sym_SLASH] = ACTIONS(231),
        [anon_sym_STAR_STAR] = ACTIONS(233),
        [anon_sym_PIPE] = ACTIONS(235),
        [anon_sym_AMP] = ACTIONS(237),
        [anon_sym_CARET] = ACTIONS(239),
        [anon_sym_LT_LT] = ACTIONS(229),
        [anon_sym_GT_GT] = ACTIONS(229),
        [anon_sym_and] = ACTIONS(237),
        [anon_sym_or] = ACTIONS(235),
        [anon_sym_LBRACK] = ACTIONS(241),
        [anon_sym_RBRACK] = ACTIONS(393),
        [anon_sym_RBRACE] = ACTIONS(393),
        [sym_comment] = ACTIONS(75),
    },
    [129] = {
        [anon_sym_COMMA] = ACTIONS(395),
        [anon_sym_COLON] = ACTIONS(395),
        [anon_sym_in] = ACTIONS(395),
        [anon_sym_LPAREN] = ACTIONS(225),
        [anon_sym_RPAREN] = ACTIONS(395),
        [anon_sym_STAR] = ACTIONS(227),
        [anon_sym_PLUS] = ACTIONS(229),
        [anon_sym_DASH] = ACTIONS(229),
        [anon_sym_SLASH] = ACTIONS(231),
        [anon_sym_STAR_STAR] = ACTIONS(233),
        [anon_sym_PIPE] = ACTIONS(235),
        [anon_sym_AMP] = ACTIONS(237),
        [anon_sym_CARET] = ACTIONS(239),
        [anon_sym_LT_LT] = ACTIONS(229),
        [anon_sym_GT_GT] = ACTIONS(229),
        [anon_sym_and] = ACTIONS(237),
        [anon_sym_or] = ACTIONS(235),
        [anon_sym_LBRACK] = ACTIONS(241),
        [anon_sym_RBRACK] = ACTIONS(395),
        [anon_sym_RBRACE] = ACTIONS(395),
        [sym_comment] = ACTIONS(75),
    },
    [130] = {
        [sym__expression] = STATE(131),
        [sym_binary_operator] = STATE(41),
        [sym_subscript] = STATE(41),
        [sym_call] = STATE(41),
        [sym_list] = STATE(41),
        [sym_list_comprehension] = STATE(41),
        [sym_dictionary] = STATE(41),
        [sym_dictionary_comprehension] = STATE(41),
        [sym_set] = STATE(41),
        [sym_set_comprehension] = STATE(41),
        [anon_sym_LBRACK] = ACTIONS(119),
        [anon_sym_LBRACE] = ACTIONS(121),
        [sym_number] = ACTIONS(123),
        [sym_identifier] = ACTIONS(123),
        [sym_comment] = ACTIONS(75),
    },
    [131] = {
        [anon_sym_LPAREN] = ACTIONS(225),
        [anon_sym_STAR] = ACTIONS(227),
        [anon_sym_PLUS] = ACTIONS(229),
        [anon_sym_DASH] = ACTIONS(229),
        [anon_sym_SLASH] = ACTIONS(231),
        [anon_sym_STAR_STAR] = ACTIONS(233),
        [anon_sym_PIPE] = ACTIONS(235),
        [anon_sym_AMP] = ACTIONS(237),
        [anon_sym_CARET] = ACTIONS(239),
        [anon_sym_LT_LT] = ACTIONS(229),
        [anon_sym_GT_GT] = ACTIONS(229),
        [anon_sym_and] = ACTIONS(237),
        [anon_sym_or] = ACTIONS(235),
        [anon_sym_LBRACK] = ACTIONS(241),
        [anon_sym_RBRACE] = ACTIONS(397),
        [sym_comment] = ACTIONS(75),
    },
    [132] = {
        [anon_sym_COMMA] = ACTIONS(399),
        [anon_sym_COLON] = ACTIONS(399),
        [anon_sym_for] = ACTIONS(399),
        [anon_sym_in] = ACTIONS(399),
        [anon_sym_as] = ACTIONS(399),
        [anon_sym_LPAREN] = ACTIONS(399),
        [anon_sym_RPAREN] = ACTIONS(399),
        [anon_sym_STAR] = ACTIONS(401),
        [anon_sym_PLUS] = ACTIONS(399),
        [anon_sym_DASH] = ACTIONS(399),
        [anon_sym_SLASH] = ACTIONS(399),
        [anon_sym_STAR_STAR] = ACTIONS(399),
        [anon_sym_PIPE] = ACTIONS(399),
        [anon_sym_AMP] = ACTIONS(399),
        [anon_sym_CARET] = ACTIONS(399),
        [anon_sym_LT_LT] = ACTIONS(399),
        [anon_sym_GT_GT] = ACTIONS(399),
        [anon_sym_and] = ACTIONS(399),
        [anon_sym_or] = ACTIONS(399),
        [anon_sym_LBRACK] = ACTIONS(399),
        [anon_sym_RBRACK] = ACTIONS(399),
        [anon_sym_RBRACE] = ACTIONS(399),
        [sym_comment] = ACTIONS(75),
    },
    [133] = {
        [anon_sym_COMMA] = ACTIONS(403),
        [anon_sym_RBRACE] = ACTIONS(403),
        [sym_comment] = ACTIONS(75),
    },
    [134] = {
        [sym__expression] = STATE(129),
        [sym_binary_operator] = STATE(41),
        [sym_subscript] = STATE(41),
        [sym_call] = STATE(41),
        [sym_list] = STATE(41),
        [sym_list_comprehension] = STATE(41),
        [sym_dictionary] = STATE(41),
        [sym_dictionary_comprehension] = STATE(41),
        [sym_set] = STATE(41),
        [sym_set_comprehension] = STATE(41),
        [anon_sym_LBRACK] = ACTIONS(119),
        [anon_sym_LBRACE] = ACTIONS(121),
        [anon_sym_RBRACE] = ACTIONS(405),
        [sym_number] = ACTIONS(123),
        [sym_identifier] = ACTIONS(123),
        [sym_comment] = ACTIONS(75),
    },
    [135] = {
        [sym_expression_list] = STATE(141),
        [sym__expression] = STATE(124),
        [sym_binary_operator] = STATE(41),
        [sym_subscript] = STATE(41),
        [sym_call] = STATE(41),
        [sym_list] = STATE(41),
        [sym_list_comprehension] = STATE(41),
        [sym_dictionary] = STATE(41),
        [sym_dictionary_comprehension] = STATE(41),
        [sym_set] = STATE(41),
        [sym_set_comprehension] = STATE(41),
        [anon_sym_LBRACK] = ACTIONS(119),
        [anon_sym_LBRACE] = ACTIONS(121),
        [sym_number] = ACTIONS(123),
        [sym_identifier] = ACTIONS(123),
        [sym_comment] = ACTIONS(75),
    },
    [136] = {
        [anon_sym_COMMA] = ACTIONS(407),
        [anon_sym_COLON] = ACTIONS(407),
        [anon_sym_for] = ACTIONS(407),
        [anon_sym_in] = ACTIONS(407),
        [anon_sym_as] = ACTIONS(407),
        [anon_sym_LPAREN] = ACTIONS(407),
        [anon_sym_RPAREN] = ACTIONS(407),
        [anon_sym_STAR] = ACTIONS(409),
        [anon_sym_PLUS] = ACTIONS(407),
        [anon_sym_DASH] = ACTIONS(407),
        [anon_sym_SLASH] = ACTIONS(407),
        [anon_sym_STAR_STAR] = ACTIONS(407),
        [anon_sym_PIPE] = ACTIONS(407),
        [anon_sym_AMP] = ACTIONS(407),
        [anon_sym_CARET] = ACTIONS(407),
        [anon_sym_LT_LT] = ACTIONS(407),
        [anon_sym_GT_GT] = ACTIONS(407),
        [anon_sym_and] = ACTIONS(407),
        [anon_sym_or] = ACTIONS(407),
        [anon_sym_LBRACK] = ACTIONS(407),
        [anon_sym_RBRACK] = ACTIONS(407),
        [anon_sym_RBRACE] = ACTIONS(407),
        [sym_comment] = ACTIONS(75),
    },
    [137] = {
        [anon_sym_COMMA] = ACTIONS(411),
        [anon_sym_RBRACE] = ACTIONS(405),
        [sym_comment] = ACTIONS(75),
    },
    [138] = {
        [sym__expression] = STATE(128),
        [sym_binary_operator] = STATE(41),
        [sym_subscript] = STATE(41),
        [sym_call] = STATE(41),
        [sym_list] = STATE(41),
        [sym_list_comprehension] = STATE(41),
        [sym_dictionary] = STATE(41),
        [sym_dictionary_comprehension] = STATE(41),
        [sym_set] = STATE(41),
        [sym_set_comprehension] = STATE(41),
        [anon_sym_LBRACK] = ACTIONS(119),
        [anon_sym_LBRACE] = ACTIONS(121),
        [anon_sym_RBRACE] = ACTIONS(413),
        [sym_number] = ACTIONS(123),
        [sym_identifier] = ACTIONS(123),
        [sym_comment] = ACTIONS(75),
    },
    [139] = {
        [anon_sym_COMMA] = ACTIONS(415),
        [anon_sym_COLON] = ACTIONS(415),
        [anon_sym_for] = ACTIONS(415),
        [anon_sym_in] = ACTIONS(415),
        [anon_sym_as] = ACTIONS(415),
        [anon_sym_LPAREN] = ACTIONS(415),
        [anon_sym_RPAREN] = ACTIONS(415),
        [anon_sym_STAR] = ACTIONS(417),
        [anon_sym_PLUS] = ACTIONS(415),
        [anon_sym_DASH] = ACTIONS(415),
        [anon_sym_SLASH] = ACTIONS(415),
        [anon_sym_STAR_STAR] = ACTIONS(415),
        [anon_sym_PIPE] = ACTIONS(415),
        [anon_sym_AMP] = ACTIONS(415),
        [anon_sym_CARET] = ACTIONS(415),
        [anon_sym_LT_LT] = ACTIONS(415),
        [anon_sym_GT_GT] = ACTIONS(415),
        [anon_sym_and] = ACTIONS(415),
        [anon_sym_or] = ACTIONS(415),
        [anon_sym_LBRACK] = ACTIONS(415),
        [anon_sym_RBRACK] = ACTIONS(415),
        [anon_sym_RBRACE] = ACTIONS(415),
        [sym_comment] = ACTIONS(75),
    },
    [140] = {
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
        [sym_comment] = ACTIONS(75),
    },
    [141] = {
        [anon_sym_in] = ACTIONS(423),
        [sym_comment] = ACTIONS(75),
    },
    [142] = {
        [sym__expression] = STATE(143),
        [sym_binary_operator] = STATE(41),
        [sym_subscript] = STATE(41),
        [sym_call] = STATE(41),
        [sym_list] = STATE(41),
        [sym_list_comprehension] = STATE(41),
        [sym_dictionary] = STATE(41),
        [sym_dictionary_comprehension] = STATE(41),
        [sym_set] = STATE(41),
        [sym_set_comprehension] = STATE(41),
        [anon_sym_LBRACK] = ACTIONS(119),
        [anon_sym_LBRACE] = ACTIONS(121),
        [sym_number] = ACTIONS(123),
        [sym_identifier] = ACTIONS(123),
        [sym_comment] = ACTIONS(75),
    },
    [143] = {
        [anon_sym_LPAREN] = ACTIONS(225),
        [anon_sym_STAR] = ACTIONS(227),
        [anon_sym_PLUS] = ACTIONS(229),
        [anon_sym_DASH] = ACTIONS(229),
        [anon_sym_SLASH] = ACTIONS(231),
        [anon_sym_STAR_STAR] = ACTIONS(233),
        [anon_sym_PIPE] = ACTIONS(235),
        [anon_sym_AMP] = ACTIONS(237),
        [anon_sym_CARET] = ACTIONS(239),
        [anon_sym_LT_LT] = ACTIONS(229),
        [anon_sym_GT_GT] = ACTIONS(229),
        [anon_sym_and] = ACTIONS(237),
        [anon_sym_or] = ACTIONS(235),
        [anon_sym_LBRACK] = ACTIONS(241),
        [anon_sym_RBRACE] = ACTIONS(425),
        [sym_comment] = ACTIONS(75),
    },
    [144] = {
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
        [sym_comment] = ACTIONS(75),
    },
    [145] = {
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
        [sym_comment] = ACTIONS(75),
    },
    [146] = {
        [aux_sym_print_statement_repeat1] = STATE(150),
        [anon_sym_COMMA] = ACTIONS(435),
        [anon_sym_for] = ACTIONS(437),
        [anon_sym_LPAREN] = ACTIONS(225),
        [anon_sym_STAR] = ACTIONS(227),
        [anon_sym_PLUS] = ACTIONS(229),
        [anon_sym_DASH] = ACTIONS(229),
        [anon_sym_SLASH] = ACTIONS(231),
        [anon_sym_STAR_STAR] = ACTIONS(233),
        [anon_sym_PIPE] = ACTIONS(235),
        [anon_sym_AMP] = ACTIONS(237),
        [anon_sym_CARET] = ACTIONS(239),
        [anon_sym_LT_LT] = ACTIONS(229),
        [anon_sym_GT_GT] = ACTIONS(229),
        [anon_sym_and] = ACTIONS(237),
        [anon_sym_or] = ACTIONS(235),
        [anon_sym_LBRACK] = ACTIONS(241),
        [anon_sym_RBRACK] = ACTIONS(439),
        [sym_comment] = ACTIONS(75),
    },
    [147] = {
        [sym__expression] = STATE(129),
        [sym_binary_operator] = STATE(41),
        [sym_subscript] = STATE(41),
        [sym_call] = STATE(41),
        [sym_list] = STATE(41),
        [sym_list_comprehension] = STATE(41),
        [sym_dictionary] = STATE(41),
        [sym_dictionary_comprehension] = STATE(41),
        [sym_set] = STATE(41),
        [sym_set_comprehension] = STATE(41),
        [anon_sym_LBRACK] = ACTIONS(119),
        [anon_sym_RBRACK] = ACTIONS(441),
        [anon_sym_LBRACE] = ACTIONS(121),
        [sym_number] = ACTIONS(123),
        [sym_identifier] = ACTIONS(123),
        [sym_comment] = ACTIONS(75),
    },
    [148] = {
        [sym_expression_list] = STATE(154),
        [sym__expression] = STATE(124),
        [sym_binary_operator] = STATE(41),
        [sym_subscript] = STATE(41),
        [sym_call] = STATE(41),
        [sym_list] = STATE(41),
        [sym_list_comprehension] = STATE(41),
        [sym_dictionary] = STATE(41),
        [sym_dictionary_comprehension] = STATE(41),
        [sym_set] = STATE(41),
        [sym_set_comprehension] = STATE(41),
        [anon_sym_LBRACK] = ACTIONS(119),
        [anon_sym_LBRACE] = ACTIONS(121),
        [sym_number] = ACTIONS(123),
        [sym_identifier] = ACTIONS(123),
        [sym_comment] = ACTIONS(75),
    },
    [149] = {
        [anon_sym_COMMA] = ACTIONS(443),
        [anon_sym_COLON] = ACTIONS(443),
        [anon_sym_for] = ACTIONS(443),
        [anon_sym_in] = ACTIONS(443),
        [anon_sym_as] = ACTIONS(443),
        [anon_sym_LPAREN] = ACTIONS(443),
        [anon_sym_RPAREN] = ACTIONS(443),
        [anon_sym_STAR] = ACTIONS(445),
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
        [sym_comment] = ACTIONS(75),
    },
    [150] = {
        [anon_sym_COMMA] = ACTIONS(447),
        [anon_sym_RBRACK] = ACTIONS(441),
        [sym_comment] = ACTIONS(75),
    },
    [151] = {
        [sym__expression] = STATE(128),
        [sym_binary_operator] = STATE(41),
        [sym_subscript] = STATE(41),
        [sym_call] = STATE(41),
        [sym_list] = STATE(41),
        [sym_list_comprehension] = STATE(41),
        [sym_dictionary] = STATE(41),
        [sym_dictionary_comprehension] = STATE(41),
        [sym_set] = STATE(41),
        [sym_set_comprehension] = STATE(41),
        [anon_sym_LBRACK] = ACTIONS(119),
        [anon_sym_RBRACK] = ACTIONS(449),
        [anon_sym_LBRACE] = ACTIONS(121),
        [sym_number] = ACTIONS(123),
        [sym_identifier] = ACTIONS(123),
        [sym_comment] = ACTIONS(75),
    },
    [152] = {
        [anon_sym_COMMA] = ACTIONS(451),
        [anon_sym_COLON] = ACTIONS(451),
        [anon_sym_for] = ACTIONS(451),
        [anon_sym_in] = ACTIONS(451),
        [anon_sym_as] = ACTIONS(451),
        [anon_sym_LPAREN] = ACTIONS(451),
        [anon_sym_RPAREN] = ACTIONS(451),
        [anon_sym_STAR] = ACTIONS(453),
        [anon_sym_PLUS] = ACTIONS(451),
        [anon_sym_DASH] = ACTIONS(451),
        [anon_sym_SLASH] = ACTIONS(451),
        [anon_sym_STAR_STAR] = ACTIONS(451),
        [anon_sym_PIPE] = ACTIONS(451),
        [anon_sym_AMP] = ACTIONS(451),
        [anon_sym_CARET] = ACTIONS(451),
        [anon_sym_LT_LT] = ACTIONS(451),
        [anon_sym_GT_GT] = ACTIONS(451),
        [anon_sym_and] = ACTIONS(451),
        [anon_sym_or] = ACTIONS(451),
        [anon_sym_LBRACK] = ACTIONS(451),
        [anon_sym_RBRACK] = ACTIONS(451),
        [anon_sym_RBRACE] = ACTIONS(451),
        [sym_comment] = ACTIONS(75),
    },
    [153] = {
        [anon_sym_COMMA] = ACTIONS(455),
        [anon_sym_COLON] = ACTIONS(455),
        [anon_sym_for] = ACTIONS(455),
        [anon_sym_in] = ACTIONS(455),
        [anon_sym_as] = ACTIONS(455),
        [anon_sym_LPAREN] = ACTIONS(455),
        [anon_sym_RPAREN] = ACTIONS(455),
        [anon_sym_STAR] = ACTIONS(457),
        [anon_sym_PLUS] = ACTIONS(455),
        [anon_sym_DASH] = ACTIONS(455),
        [anon_sym_SLASH] = ACTIONS(455),
        [anon_sym_STAR_STAR] = ACTIONS(455),
        [anon_sym_PIPE] = ACTIONS(455),
        [anon_sym_AMP] = ACTIONS(455),
        [anon_sym_CARET] = ACTIONS(455),
        [anon_sym_LT_LT] = ACTIONS(455),
        [anon_sym_GT_GT] = ACTIONS(455),
        [anon_sym_and] = ACTIONS(455),
        [anon_sym_or] = ACTIONS(455),
        [anon_sym_LBRACK] = ACTIONS(455),
        [anon_sym_RBRACK] = ACTIONS(455),
        [anon_sym_RBRACE] = ACTIONS(455),
        [sym_comment] = ACTIONS(75),
    },
    [154] = {
        [anon_sym_in] = ACTIONS(459),
        [sym_comment] = ACTIONS(75),
    },
    [155] = {
        [sym__expression] = STATE(156),
        [sym_binary_operator] = STATE(41),
        [sym_subscript] = STATE(41),
        [sym_call] = STATE(41),
        [sym_list] = STATE(41),
        [sym_list_comprehension] = STATE(41),
        [sym_dictionary] = STATE(41),
        [sym_dictionary_comprehension] = STATE(41),
        [sym_set] = STATE(41),
        [sym_set_comprehension] = STATE(41),
        [anon_sym_LBRACK] = ACTIONS(119),
        [anon_sym_LBRACE] = ACTIONS(121),
        [sym_number] = ACTIONS(123),
        [sym_identifier] = ACTIONS(123),
        [sym_comment] = ACTIONS(75),
    },
    [156] = {
        [anon_sym_LPAREN] = ACTIONS(225),
        [anon_sym_STAR] = ACTIONS(227),
        [anon_sym_PLUS] = ACTIONS(229),
        [anon_sym_DASH] = ACTIONS(229),
        [anon_sym_SLASH] = ACTIONS(231),
        [anon_sym_STAR_STAR] = ACTIONS(233),
        [anon_sym_PIPE] = ACTIONS(235),
        [anon_sym_AMP] = ACTIONS(237),
        [anon_sym_CARET] = ACTIONS(239),
        [anon_sym_LT_LT] = ACTIONS(229),
        [anon_sym_GT_GT] = ACTIONS(229),
        [anon_sym_and] = ACTIONS(237),
        [anon_sym_or] = ACTIONS(235),
        [anon_sym_LBRACK] = ACTIONS(241),
        [anon_sym_RBRACK] = ACTIONS(461),
        [sym_comment] = ACTIONS(75),
    },
    [157] = {
        [anon_sym_COMMA] = ACTIONS(463),
        [anon_sym_COLON] = ACTIONS(463),
        [anon_sym_for] = ACTIONS(463),
        [anon_sym_in] = ACTIONS(463),
        [anon_sym_as] = ACTIONS(463),
        [anon_sym_LPAREN] = ACTIONS(463),
        [anon_sym_RPAREN] = ACTIONS(463),
        [anon_sym_STAR] = ACTIONS(465),
        [anon_sym_PLUS] = ACTIONS(463),
        [anon_sym_DASH] = ACTIONS(463),
        [anon_sym_SLASH] = ACTIONS(463),
        [anon_sym_STAR_STAR] = ACTIONS(463),
        [anon_sym_PIPE] = ACTIONS(463),
        [anon_sym_AMP] = ACTIONS(463),
        [anon_sym_CARET] = ACTIONS(463),
        [anon_sym_LT_LT] = ACTIONS(463),
        [anon_sym_GT_GT] = ACTIONS(463),
        [anon_sym_and] = ACTIONS(463),
        [anon_sym_or] = ACTIONS(463),
        [anon_sym_LBRACK] = ACTIONS(463),
        [anon_sym_RBRACK] = ACTIONS(463),
        [anon_sym_RBRACE] = ACTIONS(463),
        [sym_comment] = ACTIONS(75),
    },
    [158] = {
        [anon_sym_LPAREN] = ACTIONS(225),
        [anon_sym_RPAREN] = ACTIONS(467),
        [anon_sym_STAR] = ACTIONS(227),
        [anon_sym_PLUS] = ACTIONS(229),
        [anon_sym_DASH] = ACTIONS(229),
        [anon_sym_SLASH] = ACTIONS(231),
        [anon_sym_STAR_STAR] = ACTIONS(233),
        [anon_sym_PIPE] = ACTIONS(235),
        [anon_sym_AMP] = ACTIONS(237),
        [anon_sym_CARET] = ACTIONS(239),
        [anon_sym_LT_LT] = ACTIONS(229),
        [anon_sym_GT_GT] = ACTIONS(229),
        [anon_sym_and] = ACTIONS(237),
        [anon_sym_or] = ACTIONS(235),
        [anon_sym_LBRACK] = ACTIONS(241),
        [sym_comment] = ACTIONS(75),
    },
    [159] = {
        [anon_sym_COMMA] = ACTIONS(469),
        [anon_sym_LPAREN] = ACTIONS(225),
        [anon_sym_RPAREN] = ACTIONS(469),
        [anon_sym_STAR] = ACTIONS(227),
        [anon_sym_PLUS] = ACTIONS(229),
        [anon_sym_DASH] = ACTIONS(229),
        [anon_sym_SLASH] = ACTIONS(231),
        [anon_sym_STAR_STAR] = ACTIONS(233),
        [anon_sym_PIPE] = ACTIONS(235),
        [anon_sym_AMP] = ACTIONS(237),
        [anon_sym_CARET] = ACTIONS(239),
        [anon_sym_LT_LT] = ACTIONS(229),
        [anon_sym_GT_GT] = ACTIONS(229),
        [anon_sym_and] = ACTIONS(237),
        [anon_sym_or] = ACTIONS(235),
        [anon_sym_LBRACK] = ACTIONS(241),
        [sym_comment] = ACTIONS(75),
    },
    [160] = {
        [anon_sym_COMMA] = ACTIONS(281),
        [anon_sym_LPAREN] = ACTIONS(281),
        [anon_sym_STAR] = ACTIONS(167),
        [anon_sym_PLUS] = ACTIONS(169),
        [anon_sym_DASH] = ACTIONS(169),
        [anon_sym_SLASH] = ACTIONS(171),
        [anon_sym_STAR_STAR] = ACTIONS(173),
        [anon_sym_PIPE] = ACTIONS(281),
        [anon_sym_AMP] = ACTIONS(177),
        [anon_sym_CARET] = ACTIONS(179),
        [anon_sym_LT_LT] = ACTIONS(169),
        [anon_sym_GT_GT] = ACTIONS(169),
        [anon_sym_and] = ACTIONS(177),
        [anon_sym_or] = ACTIONS(281),
        [anon_sym_LBRACK] = ACTIONS(281),
        [sym_comment] = ACTIONS(75),
        [sym__newline] = ACTIONS(281),
    },
    [161] = {
        [anon_sym_COMMA] = ACTIONS(281),
        [anon_sym_LPAREN] = ACTIONS(281),
        [anon_sym_STAR] = ACTIONS(167),
        [anon_sym_PLUS] = ACTIONS(169),
        [anon_sym_DASH] = ACTIONS(169),
        [anon_sym_SLASH] = ACTIONS(171),
        [anon_sym_STAR_STAR] = ACTIONS(173),
        [anon_sym_PIPE] = ACTIONS(281),
        [anon_sym_AMP] = ACTIONS(281),
        [anon_sym_CARET] = ACTIONS(179),
        [anon_sym_LT_LT] = ACTIONS(169),
        [anon_sym_GT_GT] = ACTIONS(169),
        [anon_sym_and] = ACTIONS(281),
        [anon_sym_or] = ACTIONS(281),
        [anon_sym_LBRACK] = ACTIONS(281),
        [sym_comment] = ACTIONS(75),
        [sym__newline] = ACTIONS(281),
    },
    [162] = {
        [anon_sym_COMMA] = ACTIONS(281),
        [anon_sym_LPAREN] = ACTIONS(281),
        [anon_sym_STAR] = ACTIONS(167),
        [anon_sym_PLUS] = ACTIONS(281),
        [anon_sym_DASH] = ACTIONS(281),
        [anon_sym_SLASH] = ACTIONS(171),
        [anon_sym_STAR_STAR] = ACTIONS(173),
        [anon_sym_PIPE] = ACTIONS(281),
        [anon_sym_AMP] = ACTIONS(281),
        [anon_sym_CARET] = ACTIONS(281),
        [anon_sym_LT_LT] = ACTIONS(281),
        [anon_sym_GT_GT] = ACTIONS(281),
        [anon_sym_and] = ACTIONS(281),
        [anon_sym_or] = ACTIONS(281),
        [anon_sym_LBRACK] = ACTIONS(281),
        [sym_comment] = ACTIONS(75),
        [sym__newline] = ACTIONS(281),
    },
    [163] = {
        [anon_sym_COMMA] = ACTIONS(281),
        [anon_sym_LPAREN] = ACTIONS(281),
        [anon_sym_STAR] = ACTIONS(167),
        [anon_sym_PLUS] = ACTIONS(169),
        [anon_sym_DASH] = ACTIONS(169),
        [anon_sym_SLASH] = ACTIONS(171),
        [anon_sym_STAR_STAR] = ACTIONS(173),
        [anon_sym_PIPE] = ACTIONS(281),
        [anon_sym_AMP] = ACTIONS(281),
        [anon_sym_CARET] = ACTIONS(281),
        [anon_sym_LT_LT] = ACTIONS(169),
        [anon_sym_GT_GT] = ACTIONS(169),
        [anon_sym_and] = ACTIONS(281),
        [anon_sym_or] = ACTIONS(281),
        [anon_sym_LBRACK] = ACTIONS(281),
        [sym_comment] = ACTIONS(75),
        [sym__newline] = ACTIONS(281),
    },
    [164] = {
        [anon_sym_COMMA] = ACTIONS(281),
        [anon_sym_LPAREN] = ACTIONS(281),
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
        [sym_comment] = ACTIONS(75),
        [sym__newline] = ACTIONS(281),
    },
    [165] = {
        [anon_sym_COMMA] = ACTIONS(281),
        [anon_sym_LPAREN] = ACTIONS(281),
        [anon_sym_STAR] = ACTIONS(283),
        [anon_sym_PLUS] = ACTIONS(281),
        [anon_sym_DASH] = ACTIONS(281),
        [anon_sym_SLASH] = ACTIONS(281),
        [anon_sym_STAR_STAR] = ACTIONS(173),
        [anon_sym_PIPE] = ACTIONS(281),
        [anon_sym_AMP] = ACTIONS(281),
        [anon_sym_CARET] = ACTIONS(281),
        [anon_sym_LT_LT] = ACTIONS(281),
        [anon_sym_GT_GT] = ACTIONS(281),
        [anon_sym_and] = ACTIONS(281),
        [anon_sym_or] = ACTIONS(281),
        [anon_sym_LBRACK] = ACTIONS(281),
        [sym_comment] = ACTIONS(75),
        [sym__newline] = ACTIONS(281),
    },
    [166] = {
        [anon_sym_COMMA] = ACTIONS(471),
        [anon_sym_LPAREN] = ACTIONS(225),
        [anon_sym_RPAREN] = ACTIONS(473),
        [anon_sym_STAR] = ACTIONS(227),
        [anon_sym_PLUS] = ACTIONS(229),
        [anon_sym_DASH] = ACTIONS(229),
        [anon_sym_SLASH] = ACTIONS(231),
        [anon_sym_STAR_STAR] = ACTIONS(233),
        [anon_sym_PIPE] = ACTIONS(235),
        [anon_sym_AMP] = ACTIONS(237),
        [anon_sym_CARET] = ACTIONS(239),
        [anon_sym_LT_LT] = ACTIONS(229),
        [anon_sym_GT_GT] = ACTIONS(229),
        [anon_sym_and] = ACTIONS(237),
        [anon_sym_or] = ACTIONS(235),
        [anon_sym_LBRACK] = ACTIONS(241),
        [sym_comment] = ACTIONS(75),
    },
    [167] = {
        [anon_sym_COMMA] = ACTIONS(471),
        [anon_sym_RPAREN] = ACTIONS(473),
        [sym_comment] = ACTIONS(75),
    },
    [168] = {
        [aux_sym_call_repeat2] = STATE(187),
        [anon_sym_COMMA] = ACTIONS(475),
        [anon_sym_RPAREN] = ACTIONS(473),
        [sym_comment] = ACTIONS(75),
    },
    [169] = {
        [anon_sym_RPAREN] = ACTIONS(473),
        [sym_comment] = ACTIONS(75),
    },
    [170] = {
        [sym__expression] = STATE(171),
        [sym_binary_operator] = STATE(41),
        [sym_subscript] = STATE(41),
        [sym_call] = STATE(41),
        [sym_keyword_argument] = STATE(172),
        [sym_list_splat_argument] = STATE(173),
        [sym_dictionary_splat_argument] = STATE(174),
        [sym_list] = STATE(41),
        [sym_list_comprehension] = STATE(41),
        [sym_dictionary] = STATE(41),
        [sym_dictionary_comprehension] = STATE(41),
        [sym_set] = STATE(41),
        [sym_set_comprehension] = STATE(41),
        [anon_sym_STAR] = ACTIONS(209),
        [anon_sym_STAR_STAR] = ACTIONS(211),
        [anon_sym_LBRACK] = ACTIONS(119),
        [anon_sym_LBRACE] = ACTIONS(121),
        [sym_number] = ACTIONS(123),
        [sym_identifier] = ACTIONS(213),
        [sym_comment] = ACTIONS(75),
    },
    [171] = {
        [anon_sym_COMMA] = ACTIONS(477),
        [anon_sym_LPAREN] = ACTIONS(225),
        [anon_sym_RPAREN] = ACTIONS(479),
        [anon_sym_STAR] = ACTIONS(227),
        [anon_sym_PLUS] = ACTIONS(229),
        [anon_sym_DASH] = ACTIONS(229),
        [anon_sym_SLASH] = ACTIONS(231),
        [anon_sym_STAR_STAR] = ACTIONS(233),
        [anon_sym_PIPE] = ACTIONS(235),
        [anon_sym_AMP] = ACTIONS(237),
        [anon_sym_CARET] = ACTIONS(239),
        [anon_sym_LT_LT] = ACTIONS(229),
        [anon_sym_GT_GT] = ACTIONS(229),
        [anon_sym_and] = ACTIONS(237),
        [anon_sym_or] = ACTIONS(235),
        [anon_sym_LBRACK] = ACTIONS(241),
        [sym_comment] = ACTIONS(75),
    },
    [172] = {
        [anon_sym_COMMA] = ACTIONS(477),
        [anon_sym_RPAREN] = ACTIONS(479),
        [sym_comment] = ACTIONS(75),
    },
    [173] = {
        [aux_sym_call_repeat2] = STATE(177),
        [anon_sym_COMMA] = ACTIONS(481),
        [anon_sym_RPAREN] = ACTIONS(479),
        [sym_comment] = ACTIONS(75),
    },
    [174] = {
        [anon_sym_RPAREN] = ACTIONS(479),
        [sym_comment] = ACTIONS(75),
    },
    [175] = {
        [anon_sym_COMMA] = ACTIONS(299),
        [anon_sym_COLON] = ACTIONS(299),
        [anon_sym_for] = ACTIONS(299),
        [anon_sym_in] = ACTIONS(299),
        [anon_sym_as] = ACTIONS(299),
        [anon_sym_LPAREN] = ACTIONS(299),
        [anon_sym_RPAREN] = ACTIONS(299),
        [anon_sym_STAR] = ACTIONS(301),
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
        [sym_comment] = ACTIONS(75),
        [sym__newline] = ACTIONS(299),
    },
    [176] = {
        [sym__expression] = STATE(96),
        [sym_binary_operator] = STATE(41),
        [sym_subscript] = STATE(41),
        [sym_call] = STATE(41),
        [sym_keyword_argument] = STATE(97),
        [sym_dictionary_splat_argument] = STATE(182),
        [sym_list] = STATE(41),
        [sym_list_comprehension] = STATE(41),
        [sym_dictionary] = STATE(41),
        [sym_dictionary_comprehension] = STATE(41),
        [sym_set] = STATE(41),
        [sym_set_comprehension] = STATE(41),
        [anon_sym_STAR_STAR] = ACTIONS(211),
        [anon_sym_LBRACK] = ACTIONS(119),
        [anon_sym_LBRACE] = ACTIONS(121),
        [sym_number] = ACTIONS(123),
        [sym_identifier] = ACTIONS(213),
        [sym_comment] = ACTIONS(75),
    },
    [177] = {
        [anon_sym_COMMA] = ACTIONS(483),
        [anon_sym_RPAREN] = ACTIONS(485),
        [sym_comment] = ACTIONS(75),
    },
    [178] = {
        [sym__expression] = STATE(92),
        [sym_binary_operator] = STATE(41),
        [sym_subscript] = STATE(41),
        [sym_call] = STATE(41),
        [sym_keyword_argument] = STATE(93),
        [sym_dictionary_splat_argument] = STATE(180),
        [sym_list] = STATE(41),
        [sym_list_comprehension] = STATE(41),
        [sym_dictionary] = STATE(41),
        [sym_dictionary_comprehension] = STATE(41),
        [sym_set] = STATE(41),
        [sym_set_comprehension] = STATE(41),
        [anon_sym_STAR_STAR] = ACTIONS(211),
        [anon_sym_LBRACK] = ACTIONS(119),
        [anon_sym_LBRACE] = ACTIONS(121),
        [sym_number] = ACTIONS(123),
        [sym_identifier] = ACTIONS(213),
        [sym_comment] = ACTIONS(75),
    },
    [179] = {
        [anon_sym_COMMA] = ACTIONS(307),
        [anon_sym_COLON] = ACTIONS(307),
        [anon_sym_for] = ACTIONS(307),
        [anon_sym_in] = ACTIONS(307),
        [anon_sym_as] = ACTIONS(307),
        [anon_sym_LPAREN] = ACTIONS(307),
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
        [sym_comment] = ACTIONS(75),
        [sym__newline] = ACTIONS(307),
    },
    [180] = {
        [anon_sym_RPAREN] = ACTIONS(487),
        [sym_comment] = ACTIONS(75),
    },
    [181] = {
        [anon_sym_COMMA] = ACTIONS(315),
        [anon_sym_COLON] = ACTIONS(315),
        [anon_sym_for] = ACTIONS(315),
        [anon_sym_in] = ACTIONS(315),
        [anon_sym_as] = ACTIONS(315),
        [anon_sym_LPAREN] = ACTIONS(315),
        [anon_sym_RPAREN] = ACTIONS(315),
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
        [anon_sym_RBRACK] = ACTIONS(315),
        [anon_sym_RBRACE] = ACTIONS(315),
        [sym_comment] = ACTIONS(75),
        [sym__newline] = ACTIONS(315),
    },
    [182] = {
        [anon_sym_RPAREN] = ACTIONS(489),
        [sym_comment] = ACTIONS(75),
    },
    [183] = {
        [anon_sym_COMMA] = ACTIONS(323),
        [anon_sym_COLON] = ACTIONS(323),
        [anon_sym_for] = ACTIONS(323),
        [anon_sym_in] = ACTIONS(323),
        [anon_sym_as] = ACTIONS(323),
        [anon_sym_LPAREN] = ACTIONS(323),
        [anon_sym_RPAREN] = ACTIONS(323),
        [anon_sym_STAR] = ACTIONS(325),
        [anon_sym_PLUS] = ACTIONS(323),
        [anon_sym_DASH] = ACTIONS(323),
        [anon_sym_SLASH] = ACTIONS(323),
        [anon_sym_STAR_STAR] = ACTIONS(323),
        [anon_sym_PIPE] = ACTIONS(323),
        [anon_sym_AMP] = ACTIONS(323),
        [anon_sym_CARET] = ACTIONS(323),
        [anon_sym_LT_LT] = ACTIONS(323),
        [anon_sym_GT_GT] = ACTIONS(323),
        [anon_sym_and] = ACTIONS(323),
        [anon_sym_or] = ACTIONS(323),
        [anon_sym_LBRACK] = ACTIONS(323),
        [anon_sym_RBRACK] = ACTIONS(323),
        [anon_sym_RBRACE] = ACTIONS(323),
        [sym_comment] = ACTIONS(75),
        [sym__newline] = ACTIONS(323),
    },
    [184] = {
        [anon_sym_RPAREN] = ACTIONS(485),
        [anon_sym_STAR] = ACTIONS(327),
        [anon_sym_STAR_STAR] = ACTIONS(329),
        [anon_sym_LBRACK] = ACTIONS(329),
        [anon_sym_LBRACE] = ACTIONS(329),
        [sym_number] = ACTIONS(327),
        [sym_identifier] = ACTIONS(327),
        [sym_comment] = ACTIONS(75),
    },
    [185] = {
        [anon_sym_COMMA] = ACTIONS(331),
        [anon_sym_COLON] = ACTIONS(331),
        [anon_sym_for] = ACTIONS(331),
        [anon_sym_in] = ACTIONS(331),
        [anon_sym_as] = ACTIONS(331),
        [anon_sym_LPAREN] = ACTIONS(331),
        [anon_sym_RPAREN] = ACTIONS(331),
        [anon_sym_STAR] = ACTIONS(333),
        [anon_sym_PLUS] = ACTIONS(331),
        [anon_sym_DASH] = ACTIONS(331),
        [anon_sym_SLASH] = ACTIONS(331),
        [anon_sym_STAR_STAR] = ACTIONS(331),
        [anon_sym_PIPE] = ACTIONS(331),
        [anon_sym_AMP] = ACTIONS(331),
        [anon_sym_CARET] = ACTIONS(331),
        [anon_sym_LT_LT] = ACTIONS(331),
        [anon_sym_GT_GT] = ACTIONS(331),
        [anon_sym_and] = ACTIONS(331),
        [anon_sym_or] = ACTIONS(331),
        [anon_sym_LBRACK] = ACTIONS(331),
        [anon_sym_RBRACK] = ACTIONS(331),
        [anon_sym_RBRACE] = ACTIONS(331),
        [sym_comment] = ACTIONS(75),
        [sym__newline] = ACTIONS(331),
    },
    [186] = {
        [sym__expression] = STATE(96),
        [sym_binary_operator] = STATE(41),
        [sym_subscript] = STATE(41),
        [sym_call] = STATE(41),
        [sym_keyword_argument] = STATE(97),
        [sym_dictionary_splat_argument] = STATE(189),
        [sym_list] = STATE(41),
        [sym_list_comprehension] = STATE(41),
        [sym_dictionary] = STATE(41),
        [sym_dictionary_comprehension] = STATE(41),
        [sym_set] = STATE(41),
        [sym_set_comprehension] = STATE(41),
        [anon_sym_STAR_STAR] = ACTIONS(211),
        [anon_sym_LBRACK] = ACTIONS(119),
        [anon_sym_LBRACE] = ACTIONS(121),
        [sym_number] = ACTIONS(123),
        [sym_identifier] = ACTIONS(213),
        [sym_comment] = ACTIONS(75),
    },
    [187] = {
        [anon_sym_COMMA] = ACTIONS(491),
        [anon_sym_RPAREN] = ACTIONS(479),
        [sym_comment] = ACTIONS(75),
    },
    [188] = {
        [sym__expression] = STATE(92),
        [sym_binary_operator] = STATE(41),
        [sym_subscript] = STATE(41),
        [sym_call] = STATE(41),
        [sym_keyword_argument] = STATE(93),
        [sym_dictionary_splat_argument] = STATE(182),
        [sym_list] = STATE(41),
        [sym_list_comprehension] = STATE(41),
        [sym_dictionary] = STATE(41),
        [sym_dictionary_comprehension] = STATE(41),
        [sym_set] = STATE(41),
        [sym_set_comprehension] = STATE(41),
        [anon_sym_STAR_STAR] = ACTIONS(211),
        [anon_sym_LBRACK] = ACTIONS(119),
        [anon_sym_LBRACE] = ACTIONS(121),
        [sym_number] = ACTIONS(123),
        [sym_identifier] = ACTIONS(213),
        [sym_comment] = ACTIONS(75),
    },
    [189] = {
        [anon_sym_RPAREN] = ACTIONS(485),
        [sym_comment] = ACTIONS(75),
    },
    [190] = {
        [anon_sym_RPAREN] = ACTIONS(479),
        [anon_sym_STAR] = ACTIONS(337),
        [anon_sym_STAR_STAR] = ACTIONS(339),
        [anon_sym_LBRACK] = ACTIONS(339),
        [anon_sym_LBRACE] = ACTIONS(339),
        [sym_number] = ACTIONS(337),
        [sym_identifier] = ACTIONS(337),
        [sym_comment] = ACTIONS(75),
    },
    [191] = {
        [ts_builtin_sym_end] = ACTIONS(493),
        [anon_sym_SEMI] = ACTIONS(493),
        [anon_sym_print] = ACTIONS(495),
        [anon_sym_return] = ACTIONS(495),
        [anon_sym_del] = ACTIONS(495),
        [sym_pass_statement] = ACTIONS(495),
        [sym_break_statement] = ACTIONS(495),
        [sym_continue_statement] = ACTIONS(495),
        [anon_sym_if] = ACTIONS(495),
        [anon_sym_for] = ACTIONS(495),
        [anon_sym_while] = ACTIONS(495),
        [anon_sym_try] = ACTIONS(495),
        [anon_sym_with] = ACTIONS(495),
        [anon_sym_def] = ACTIONS(495),
        [anon_sym_class] = ACTIONS(495),
        [anon_sym_AT] = ACTIONS(493),
        [anon_sym_LBRACK] = ACTIONS(493),
        [anon_sym_LBRACE] = ACTIONS(493),
        [sym_number] = ACTIONS(495),
        [sym_identifier] = ACTIONS(497),
        [sym_comment] = ACTIONS(75),
        [sym__newline] = ACTIONS(493),
    },
    [192] = {
        [anon_sym_COMMA] = ACTIONS(343),
        [anon_sym_COLON] = ACTIONS(343),
        [anon_sym_for] = ACTIONS(343),
        [anon_sym_in] = ACTIONS(343),
        [anon_sym_as] = ACTIONS(343),
        [anon_sym_LPAREN] = ACTIONS(343),
        [anon_sym_RPAREN] = ACTIONS(343),
        [anon_sym_STAR] = ACTIONS(345),
        [anon_sym_PLUS] = ACTIONS(343),
        [anon_sym_DASH] = ACTIONS(343),
        [anon_sym_SLASH] = ACTIONS(343),
        [anon_sym_STAR_STAR] = ACTIONS(343),
        [anon_sym_PIPE] = ACTIONS(343),
        [anon_sym_AMP] = ACTIONS(343),
        [anon_sym_CARET] = ACTIONS(343),
        [anon_sym_LT_LT] = ACTIONS(343),
        [anon_sym_GT_GT] = ACTIONS(343),
        [anon_sym_and] = ACTIONS(343),
        [anon_sym_or] = ACTIONS(343),
        [anon_sym_LBRACK] = ACTIONS(343),
        [anon_sym_RBRACK] = ACTIONS(343),
        [anon_sym_RBRACE] = ACTIONS(343),
        [sym_comment] = ACTIONS(75),
        [sym__newline] = ACTIONS(343),
    },
    [193] = {
        [aux_sym_print_statement_repeat1] = STATE(209),
        [anon_sym_COMMA] = ACTIONS(499),
        [anon_sym_COLON] = ACTIONS(349),
        [anon_sym_for] = ACTIONS(501),
        [anon_sym_LPAREN] = ACTIONS(225),
        [anon_sym_STAR] = ACTIONS(227),
        [anon_sym_PLUS] = ACTIONS(229),
        [anon_sym_DASH] = ACTIONS(229),
        [anon_sym_SLASH] = ACTIONS(231),
        [anon_sym_STAR_STAR] = ACTIONS(233),
        [anon_sym_PIPE] = ACTIONS(235),
        [anon_sym_AMP] = ACTIONS(237),
        [anon_sym_CARET] = ACTIONS(239),
        [anon_sym_LT_LT] = ACTIONS(229),
        [anon_sym_GT_GT] = ACTIONS(229),
        [anon_sym_and] = ACTIONS(237),
        [anon_sym_or] = ACTIONS(235),
        [anon_sym_LBRACK] = ACTIONS(241),
        [anon_sym_RBRACE] = ACTIONS(503),
        [sym_comment] = ACTIONS(75),
    },
    [194] = {
        [aux_sym_dictionary_repeat1] = STATE(198),
        [anon_sym_COMMA] = ACTIONS(505),
        [anon_sym_for] = ACTIONS(507),
        [anon_sym_RBRACE] = ACTIONS(509),
        [sym_comment] = ACTIONS(75),
    },
    [195] = {
        [sym__expression] = STATE(119),
        [sym_binary_operator] = STATE(41),
        [sym_subscript] = STATE(41),
        [sym_call] = STATE(41),
        [sym_list] = STATE(41),
        [sym_list_comprehension] = STATE(41),
        [sym_dictionary] = STATE(41),
        [sym_dictionary_comprehension] = STATE(41),
        [sym_pair] = STATE(133),
        [sym_set] = STATE(41),
        [sym_set_comprehension] = STATE(41),
        [anon_sym_LBRACK] = ACTIONS(119),
        [anon_sym_LBRACE] = ACTIONS(121),
        [anon_sym_RBRACE] = ACTIONS(511),
        [sym_number] = ACTIONS(123),
        [sym_identifier] = ACTIONS(123),
        [sym_comment] = ACTIONS(75),
    },
    [196] = {
        [sym_expression_list] = STATE(202),
        [sym__expression] = STATE(124),
        [sym_binary_operator] = STATE(41),
        [sym_subscript] = STATE(41),
        [sym_call] = STATE(41),
        [sym_list] = STATE(41),
        [sym_list_comprehension] = STATE(41),
        [sym_dictionary] = STATE(41),
        [sym_dictionary_comprehension] = STATE(41),
        [sym_set] = STATE(41),
        [sym_set_comprehension] = STATE(41),
        [anon_sym_LBRACK] = ACTIONS(119),
        [anon_sym_LBRACE] = ACTIONS(121),
        [sym_number] = ACTIONS(123),
        [sym_identifier] = ACTIONS(123),
        [sym_comment] = ACTIONS(75),
    },
    [197] = {
        [anon_sym_COMMA] = ACTIONS(363),
        [anon_sym_COLON] = ACTIONS(363),
        [anon_sym_for] = ACTIONS(363),
        [anon_sym_in] = ACTIONS(363),
        [anon_sym_as] = ACTIONS(363),
        [anon_sym_LPAREN] = ACTIONS(363),
        [anon_sym_RPAREN] = ACTIONS(363),
        [anon_sym_STAR] = ACTIONS(365),
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
        [sym_comment] = ACTIONS(75),
        [sym__newline] = ACTIONS(363),
    },
    [198] = {
        [anon_sym_COMMA] = ACTIONS(513),
        [anon_sym_RBRACE] = ACTIONS(511),
        [sym_comment] = ACTIONS(75),
    },
    [199] = {
        [sym__expression] = STATE(119),
        [sym_binary_operator] = STATE(41),
        [sym_subscript] = STATE(41),
        [sym_call] = STATE(41),
        [sym_list] = STATE(41),
        [sym_list_comprehension] = STATE(41),
        [sym_dictionary] = STATE(41),
        [sym_dictionary_comprehension] = STATE(41),
        [sym_pair] = STATE(120),
        [sym_set] = STATE(41),
        [sym_set_comprehension] = STATE(41),
        [anon_sym_LBRACK] = ACTIONS(119),
        [anon_sym_LBRACE] = ACTIONS(121),
        [anon_sym_RBRACE] = ACTIONS(515),
        [sym_number] = ACTIONS(123),
        [sym_identifier] = ACTIONS(123),
        [sym_comment] = ACTIONS(75),
    },
    [200] = {
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
        [sym_comment] = ACTIONS(75),
        [sym__newline] = ACTIONS(371),
    },
    [201] = {
        [anon_sym_COMMA] = ACTIONS(375),
        [anon_sym_COLON] = ACTIONS(375),
        [anon_sym_for] = ACTIONS(375),
        [anon_sym_in] = ACTIONS(375),
        [anon_sym_as] = ACTIONS(375),
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
        [sym_comment] = ACTIONS(75),
        [sym__newline] = ACTIONS(375),
    },
    [202] = {
        [anon_sym_in] = ACTIONS(517),
        [sym_comment] = ACTIONS(75),
    },
    [203] = {
        [sym__expression] = STATE(204),
        [sym_binary_operator] = STATE(41),
        [sym_subscript] = STATE(41),
        [sym_call] = STATE(41),
        [sym_list] = STATE(41),
        [sym_list_comprehension] = STATE(41),
        [sym_dictionary] = STATE(41),
        [sym_dictionary_comprehension] = STATE(41),
        [sym_set] = STATE(41),
        [sym_set_comprehension] = STATE(41),
        [anon_sym_LBRACK] = ACTIONS(119),
        [anon_sym_LBRACE] = ACTIONS(121),
        [sym_number] = ACTIONS(123),
        [sym_identifier] = ACTIONS(123),
        [sym_comment] = ACTIONS(75),
    },
    [204] = {
        [anon_sym_LPAREN] = ACTIONS(225),
        [anon_sym_STAR] = ACTIONS(227),
        [anon_sym_PLUS] = ACTIONS(229),
        [anon_sym_DASH] = ACTIONS(229),
        [anon_sym_SLASH] = ACTIONS(231),
        [anon_sym_STAR_STAR] = ACTIONS(233),
        [anon_sym_PIPE] = ACTIONS(235),
        [anon_sym_AMP] = ACTIONS(237),
        [anon_sym_CARET] = ACTIONS(239),
        [anon_sym_LT_LT] = ACTIONS(229),
        [anon_sym_GT_GT] = ACTIONS(229),
        [anon_sym_and] = ACTIONS(237),
        [anon_sym_or] = ACTIONS(235),
        [anon_sym_LBRACK] = ACTIONS(241),
        [anon_sym_RBRACE] = ACTIONS(519),
        [sym_comment] = ACTIONS(75),
    },
    [205] = {
        [anon_sym_COMMA] = ACTIONS(399),
        [anon_sym_COLON] = ACTIONS(399),
        [anon_sym_for] = ACTIONS(399),
        [anon_sym_in] = ACTIONS(399),
        [anon_sym_as] = ACTIONS(399),
        [anon_sym_LPAREN] = ACTIONS(399),
        [anon_sym_RPAREN] = ACTIONS(399),
        [anon_sym_STAR] = ACTIONS(401),
        [anon_sym_PLUS] = ACTIONS(399),
        [anon_sym_DASH] = ACTIONS(399),
        [anon_sym_SLASH] = ACTIONS(399),
        [anon_sym_STAR_STAR] = ACTIONS(399),
        [anon_sym_PIPE] = ACTIONS(399),
        [anon_sym_AMP] = ACTIONS(399),
        [anon_sym_CARET] = ACTIONS(399),
        [anon_sym_LT_LT] = ACTIONS(399),
        [anon_sym_GT_GT] = ACTIONS(399),
        [anon_sym_and] = ACTIONS(399),
        [anon_sym_or] = ACTIONS(399),
        [anon_sym_LBRACK] = ACTIONS(399),
        [anon_sym_RBRACK] = ACTIONS(399),
        [anon_sym_RBRACE] = ACTIONS(399),
        [sym_comment] = ACTIONS(75),
        [sym__newline] = ACTIONS(399),
    },
    [206] = {
        [sym__expression] = STATE(129),
        [sym_binary_operator] = STATE(41),
        [sym_subscript] = STATE(41),
        [sym_call] = STATE(41),
        [sym_list] = STATE(41),
        [sym_list_comprehension] = STATE(41),
        [sym_dictionary] = STATE(41),
        [sym_dictionary_comprehension] = STATE(41),
        [sym_set] = STATE(41),
        [sym_set_comprehension] = STATE(41),
        [anon_sym_LBRACK] = ACTIONS(119),
        [anon_sym_LBRACE] = ACTIONS(121),
        [anon_sym_RBRACE] = ACTIONS(521),
        [sym_number] = ACTIONS(123),
        [sym_identifier] = ACTIONS(123),
        [sym_comment] = ACTIONS(75),
    },
    [207] = {
        [sym_expression_list] = STATE(213),
        [sym__expression] = STATE(124),
        [sym_binary_operator] = STATE(41),
        [sym_subscript] = STATE(41),
        [sym_call] = STATE(41),
        [sym_list] = STATE(41),
        [sym_list_comprehension] = STATE(41),
        [sym_dictionary] = STATE(41),
        [sym_dictionary_comprehension] = STATE(41),
        [sym_set] = STATE(41),
        [sym_set_comprehension] = STATE(41),
        [anon_sym_LBRACK] = ACTIONS(119),
        [anon_sym_LBRACE] = ACTIONS(121),
        [sym_number] = ACTIONS(123),
        [sym_identifier] = ACTIONS(123),
        [sym_comment] = ACTIONS(75),
    },
    [208] = {
        [anon_sym_COMMA] = ACTIONS(407),
        [anon_sym_COLON] = ACTIONS(407),
        [anon_sym_for] = ACTIONS(407),
        [anon_sym_in] = ACTIONS(407),
        [anon_sym_as] = ACTIONS(407),
        [anon_sym_LPAREN] = ACTIONS(407),
        [anon_sym_RPAREN] = ACTIONS(407),
        [anon_sym_STAR] = ACTIONS(409),
        [anon_sym_PLUS] = ACTIONS(407),
        [anon_sym_DASH] = ACTIONS(407),
        [anon_sym_SLASH] = ACTIONS(407),
        [anon_sym_STAR_STAR] = ACTIONS(407),
        [anon_sym_PIPE] = ACTIONS(407),
        [anon_sym_AMP] = ACTIONS(407),
        [anon_sym_CARET] = ACTIONS(407),
        [anon_sym_LT_LT] = ACTIONS(407),
        [anon_sym_GT_GT] = ACTIONS(407),
        [anon_sym_and] = ACTIONS(407),
        [anon_sym_or] = ACTIONS(407),
        [anon_sym_LBRACK] = ACTIONS(407),
        [anon_sym_RBRACK] = ACTIONS(407),
        [anon_sym_RBRACE] = ACTIONS(407),
        [sym_comment] = ACTIONS(75),
        [sym__newline] = ACTIONS(407),
    },
    [209] = {
        [anon_sym_COMMA] = ACTIONS(523),
        [anon_sym_RBRACE] = ACTIONS(521),
        [sym_comment] = ACTIONS(75),
    },
    [210] = {
        [sym__expression] = STATE(128),
        [sym_binary_operator] = STATE(41),
        [sym_subscript] = STATE(41),
        [sym_call] = STATE(41),
        [sym_list] = STATE(41),
        [sym_list_comprehension] = STATE(41),
        [sym_dictionary] = STATE(41),
        [sym_dictionary_comprehension] = STATE(41),
        [sym_set] = STATE(41),
        [sym_set_comprehension] = STATE(41),
        [anon_sym_LBRACK] = ACTIONS(119),
        [anon_sym_LBRACE] = ACTIONS(121),
        [anon_sym_RBRACE] = ACTIONS(525),
        [sym_number] = ACTIONS(123),
        [sym_identifier] = ACTIONS(123),
        [sym_comment] = ACTIONS(75),
    },
    [211] = {
        [anon_sym_COMMA] = ACTIONS(415),
        [anon_sym_COLON] = ACTIONS(415),
        [anon_sym_for] = ACTIONS(415),
        [anon_sym_in] = ACTIONS(415),
        [anon_sym_as] = ACTIONS(415),
        [anon_sym_LPAREN] = ACTIONS(415),
        [anon_sym_RPAREN] = ACTIONS(415),
        [anon_sym_STAR] = ACTIONS(417),
        [anon_sym_PLUS] = ACTIONS(415),
        [anon_sym_DASH] = ACTIONS(415),
        [anon_sym_SLASH] = ACTIONS(415),
        [anon_sym_STAR_STAR] = ACTIONS(415),
        [anon_sym_PIPE] = ACTIONS(415),
        [anon_sym_AMP] = ACTIONS(415),
        [anon_sym_CARET] = ACTIONS(415),
        [anon_sym_LT_LT] = ACTIONS(415),
        [anon_sym_GT_GT] = ACTIONS(415),
        [anon_sym_and] = ACTIONS(415),
        [anon_sym_or] = ACTIONS(415),
        [anon_sym_LBRACK] = ACTIONS(415),
        [anon_sym_RBRACK] = ACTIONS(415),
        [anon_sym_RBRACE] = ACTIONS(415),
        [sym_comment] = ACTIONS(75),
        [sym__newline] = ACTIONS(415),
    },
    [212] = {
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
        [sym_comment] = ACTIONS(75),
        [sym__newline] = ACTIONS(419),
    },
    [213] = {
        [anon_sym_in] = ACTIONS(527),
        [sym_comment] = ACTIONS(75),
    },
    [214] = {
        [sym__expression] = STATE(215),
        [sym_binary_operator] = STATE(41),
        [sym_subscript] = STATE(41),
        [sym_call] = STATE(41),
        [sym_list] = STATE(41),
        [sym_list_comprehension] = STATE(41),
        [sym_dictionary] = STATE(41),
        [sym_dictionary_comprehension] = STATE(41),
        [sym_set] = STATE(41),
        [sym_set_comprehension] = STATE(41),
        [anon_sym_LBRACK] = ACTIONS(119),
        [anon_sym_LBRACE] = ACTIONS(121),
        [sym_number] = ACTIONS(123),
        [sym_identifier] = ACTIONS(123),
        [sym_comment] = ACTIONS(75),
    },
    [215] = {
        [anon_sym_LPAREN] = ACTIONS(225),
        [anon_sym_STAR] = ACTIONS(227),
        [anon_sym_PLUS] = ACTIONS(229),
        [anon_sym_DASH] = ACTIONS(229),
        [anon_sym_SLASH] = ACTIONS(231),
        [anon_sym_STAR_STAR] = ACTIONS(233),
        [anon_sym_PIPE] = ACTIONS(235),
        [anon_sym_AMP] = ACTIONS(237),
        [anon_sym_CARET] = ACTIONS(239),
        [anon_sym_LT_LT] = ACTIONS(229),
        [anon_sym_GT_GT] = ACTIONS(229),
        [anon_sym_and] = ACTIONS(237),
        [anon_sym_or] = ACTIONS(235),
        [anon_sym_LBRACK] = ACTIONS(241),
        [anon_sym_RBRACE] = ACTIONS(529),
        [sym_comment] = ACTIONS(75),
    },
    [216] = {
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
        [sym_comment] = ACTIONS(75),
        [sym__newline] = ACTIONS(427),
    },
    [217] = {
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
        [sym_comment] = ACTIONS(75),
        [sym__newline] = ACTIONS(431),
    },
    [218] = {
        [aux_sym_print_statement_repeat1] = STATE(222),
        [anon_sym_COMMA] = ACTIONS(531),
        [anon_sym_for] = ACTIONS(533),
        [anon_sym_LPAREN] = ACTIONS(225),
        [anon_sym_STAR] = ACTIONS(227),
        [anon_sym_PLUS] = ACTIONS(229),
        [anon_sym_DASH] = ACTIONS(229),
        [anon_sym_SLASH] = ACTIONS(231),
        [anon_sym_STAR_STAR] = ACTIONS(233),
        [anon_sym_PIPE] = ACTIONS(235),
        [anon_sym_AMP] = ACTIONS(237),
        [anon_sym_CARET] = ACTIONS(239),
        [anon_sym_LT_LT] = ACTIONS(229),
        [anon_sym_GT_GT] = ACTIONS(229),
        [anon_sym_and] = ACTIONS(237),
        [anon_sym_or] = ACTIONS(235),
        [anon_sym_LBRACK] = ACTIONS(241),
        [anon_sym_RBRACK] = ACTIONS(535),
        [sym_comment] = ACTIONS(75),
    },
    [219] = {
        [sym__expression] = STATE(129),
        [sym_binary_operator] = STATE(41),
        [sym_subscript] = STATE(41),
        [sym_call] = STATE(41),
        [sym_list] = STATE(41),
        [sym_list_comprehension] = STATE(41),
        [sym_dictionary] = STATE(41),
        [sym_dictionary_comprehension] = STATE(41),
        [sym_set] = STATE(41),
        [sym_set_comprehension] = STATE(41),
        [anon_sym_LBRACK] = ACTIONS(119),
        [anon_sym_RBRACK] = ACTIONS(537),
        [anon_sym_LBRACE] = ACTIONS(121),
        [sym_number] = ACTIONS(123),
        [sym_identifier] = ACTIONS(123),
        [sym_comment] = ACTIONS(75),
    },
    [220] = {
        [sym_expression_list] = STATE(226),
        [sym__expression] = STATE(124),
        [sym_binary_operator] = STATE(41),
        [sym_subscript] = STATE(41),
        [sym_call] = STATE(41),
        [sym_list] = STATE(41),
        [sym_list_comprehension] = STATE(41),
        [sym_dictionary] = STATE(41),
        [sym_dictionary_comprehension] = STATE(41),
        [sym_set] = STATE(41),
        [sym_set_comprehension] = STATE(41),
        [anon_sym_LBRACK] = ACTIONS(119),
        [anon_sym_LBRACE] = ACTIONS(121),
        [sym_number] = ACTIONS(123),
        [sym_identifier] = ACTIONS(123),
        [sym_comment] = ACTIONS(75),
    },
    [221] = {
        [anon_sym_COMMA] = ACTIONS(443),
        [anon_sym_COLON] = ACTIONS(443),
        [anon_sym_for] = ACTIONS(443),
        [anon_sym_in] = ACTIONS(443),
        [anon_sym_as] = ACTIONS(443),
        [anon_sym_LPAREN] = ACTIONS(443),
        [anon_sym_RPAREN] = ACTIONS(443),
        [anon_sym_STAR] = ACTIONS(445),
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
        [sym_comment] = ACTIONS(75),
        [sym__newline] = ACTIONS(443),
    },
    [222] = {
        [anon_sym_COMMA] = ACTIONS(539),
        [anon_sym_RBRACK] = ACTIONS(537),
        [sym_comment] = ACTIONS(75),
    },
    [223] = {
        [sym__expression] = STATE(128),
        [sym_binary_operator] = STATE(41),
        [sym_subscript] = STATE(41),
        [sym_call] = STATE(41),
        [sym_list] = STATE(41),
        [sym_list_comprehension] = STATE(41),
        [sym_dictionary] = STATE(41),
        [sym_dictionary_comprehension] = STATE(41),
        [sym_set] = STATE(41),
        [sym_set_comprehension] = STATE(41),
        [anon_sym_LBRACK] = ACTIONS(119),
        [anon_sym_RBRACK] = ACTIONS(541),
        [anon_sym_LBRACE] = ACTIONS(121),
        [sym_number] = ACTIONS(123),
        [sym_identifier] = ACTIONS(123),
        [sym_comment] = ACTIONS(75),
    },
    [224] = {
        [anon_sym_COMMA] = ACTIONS(451),
        [anon_sym_COLON] = ACTIONS(451),
        [anon_sym_for] = ACTIONS(451),
        [anon_sym_in] = ACTIONS(451),
        [anon_sym_as] = ACTIONS(451),
        [anon_sym_LPAREN] = ACTIONS(451),
        [anon_sym_RPAREN] = ACTIONS(451),
        [anon_sym_STAR] = ACTIONS(453),
        [anon_sym_PLUS] = ACTIONS(451),
        [anon_sym_DASH] = ACTIONS(451),
        [anon_sym_SLASH] = ACTIONS(451),
        [anon_sym_STAR_STAR] = ACTIONS(451),
        [anon_sym_PIPE] = ACTIONS(451),
        [anon_sym_AMP] = ACTIONS(451),
        [anon_sym_CARET] = ACTIONS(451),
        [anon_sym_LT_LT] = ACTIONS(451),
        [anon_sym_GT_GT] = ACTIONS(451),
        [anon_sym_and] = ACTIONS(451),
        [anon_sym_or] = ACTIONS(451),
        [anon_sym_LBRACK] = ACTIONS(451),
        [anon_sym_RBRACK] = ACTIONS(451),
        [anon_sym_RBRACE] = ACTIONS(451),
        [sym_comment] = ACTIONS(75),
        [sym__newline] = ACTIONS(451),
    },
    [225] = {
        [anon_sym_COMMA] = ACTIONS(455),
        [anon_sym_COLON] = ACTIONS(455),
        [anon_sym_for] = ACTIONS(455),
        [anon_sym_in] = ACTIONS(455),
        [anon_sym_as] = ACTIONS(455),
        [anon_sym_LPAREN] = ACTIONS(455),
        [anon_sym_RPAREN] = ACTIONS(455),
        [anon_sym_STAR] = ACTIONS(457),
        [anon_sym_PLUS] = ACTIONS(455),
        [anon_sym_DASH] = ACTIONS(455),
        [anon_sym_SLASH] = ACTIONS(455),
        [anon_sym_STAR_STAR] = ACTIONS(455),
        [anon_sym_PIPE] = ACTIONS(455),
        [anon_sym_AMP] = ACTIONS(455),
        [anon_sym_CARET] = ACTIONS(455),
        [anon_sym_LT_LT] = ACTIONS(455),
        [anon_sym_GT_GT] = ACTIONS(455),
        [anon_sym_and] = ACTIONS(455),
        [anon_sym_or] = ACTIONS(455),
        [anon_sym_LBRACK] = ACTIONS(455),
        [anon_sym_RBRACK] = ACTIONS(455),
        [anon_sym_RBRACE] = ACTIONS(455),
        [sym_comment] = ACTIONS(75),
        [sym__newline] = ACTIONS(455),
    },
    [226] = {
        [anon_sym_in] = ACTIONS(543),
        [sym_comment] = ACTIONS(75),
    },
    [227] = {
        [sym__expression] = STATE(228),
        [sym_binary_operator] = STATE(41),
        [sym_subscript] = STATE(41),
        [sym_call] = STATE(41),
        [sym_list] = STATE(41),
        [sym_list_comprehension] = STATE(41),
        [sym_dictionary] = STATE(41),
        [sym_dictionary_comprehension] = STATE(41),
        [sym_set] = STATE(41),
        [sym_set_comprehension] = STATE(41),
        [anon_sym_LBRACK] = ACTIONS(119),
        [anon_sym_LBRACE] = ACTIONS(121),
        [sym_number] = ACTIONS(123),
        [sym_identifier] = ACTIONS(123),
        [sym_comment] = ACTIONS(75),
    },
    [228] = {
        [anon_sym_LPAREN] = ACTIONS(225),
        [anon_sym_STAR] = ACTIONS(227),
        [anon_sym_PLUS] = ACTIONS(229),
        [anon_sym_DASH] = ACTIONS(229),
        [anon_sym_SLASH] = ACTIONS(231),
        [anon_sym_STAR_STAR] = ACTIONS(233),
        [anon_sym_PIPE] = ACTIONS(235),
        [anon_sym_AMP] = ACTIONS(237),
        [anon_sym_CARET] = ACTIONS(239),
        [anon_sym_LT_LT] = ACTIONS(229),
        [anon_sym_GT_GT] = ACTIONS(229),
        [anon_sym_and] = ACTIONS(237),
        [anon_sym_or] = ACTIONS(235),
        [anon_sym_LBRACK] = ACTIONS(241),
        [anon_sym_RBRACK] = ACTIONS(545),
        [sym_comment] = ACTIONS(75),
    },
    [229] = {
        [anon_sym_COMMA] = ACTIONS(463),
        [anon_sym_COLON] = ACTIONS(463),
        [anon_sym_for] = ACTIONS(463),
        [anon_sym_in] = ACTIONS(463),
        [anon_sym_as] = ACTIONS(463),
        [anon_sym_LPAREN] = ACTIONS(463),
        [anon_sym_RPAREN] = ACTIONS(463),
        [anon_sym_STAR] = ACTIONS(465),
        [anon_sym_PLUS] = ACTIONS(463),
        [anon_sym_DASH] = ACTIONS(463),
        [anon_sym_SLASH] = ACTIONS(463),
        [anon_sym_STAR_STAR] = ACTIONS(463),
        [anon_sym_PIPE] = ACTIONS(463),
        [anon_sym_AMP] = ACTIONS(463),
        [anon_sym_CARET] = ACTIONS(463),
        [anon_sym_LT_LT] = ACTIONS(463),
        [anon_sym_GT_GT] = ACTIONS(463),
        [anon_sym_and] = ACTIONS(463),
        [anon_sym_or] = ACTIONS(463),
        [anon_sym_LBRACK] = ACTIONS(463),
        [anon_sym_RBRACK] = ACTIONS(463),
        [anon_sym_RBRACE] = ACTIONS(463),
        [sym_comment] = ACTIONS(75),
        [sym__newline] = ACTIONS(463),
    },
    [230] = {
        [aux_sym_dotted_name_repeat1] = STATE(241),
        [anon_sym_LPAREN] = ACTIONS(547),
        [anon_sym_DOT] = ACTIONS(549),
        [sym_comment] = ACTIONS(75),
        [sym__newline] = ACTIONS(547),
    },
    [231] = {
        [sym_arguments] = STATE(234),
        [anon_sym_LPAREN] = ACTIONS(551),
        [sym_comment] = ACTIONS(75),
        [sym__newline] = ACTIONS(553),
    },
    [232] = {
        [sym__expression] = STATE(236),
        [sym_binary_operator] = STATE(41),
        [sym_subscript] = STATE(41),
        [sym_call] = STATE(41),
        [sym_list] = STATE(41),
        [sym_list_comprehension] = STATE(41),
        [sym_dictionary] = STATE(41),
        [sym_dictionary_comprehension] = STATE(41),
        [sym_set] = STATE(41),
        [sym_set_comprehension] = STATE(41),
        [anon_sym_LBRACK] = ACTIONS(119),
        [anon_sym_LBRACE] = ACTIONS(121),
        [sym_number] = ACTIONS(123),
        [sym_identifier] = ACTIONS(123),
        [sym_comment] = ACTIONS(75),
    },
    [233] = {
        [anon_sym_def] = ACTIONS(555),
        [anon_sym_class] = ACTIONS(555),
        [anon_sym_AT] = ACTIONS(555),
        [sym_comment] = ACTIONS(75),
    },
    [234] = {
        [sym_comment] = ACTIONS(75),
        [sym__newline] = ACTIONS(557),
    },
    [235] = {
        [anon_sym_def] = ACTIONS(559),
        [anon_sym_class] = ACTIONS(559),
        [anon_sym_AT] = ACTIONS(559),
        [sym_comment] = ACTIONS(75),
    },
    [236] = {
        [aux_sym_print_statement_repeat1] = STATE(238),
        [anon_sym_COMMA] = ACTIONS(385),
        [anon_sym_LPAREN] = ACTIONS(225),
        [anon_sym_RPAREN] = ACTIONS(561),
        [anon_sym_STAR] = ACTIONS(227),
        [anon_sym_PLUS] = ACTIONS(229),
        [anon_sym_DASH] = ACTIONS(229),
        [anon_sym_SLASH] = ACTIONS(231),
        [anon_sym_STAR_STAR] = ACTIONS(233),
        [anon_sym_PIPE] = ACTIONS(235),
        [anon_sym_AMP] = ACTIONS(237),
        [anon_sym_CARET] = ACTIONS(239),
        [anon_sym_LT_LT] = ACTIONS(229),
        [anon_sym_GT_GT] = ACTIONS(229),
        [anon_sym_and] = ACTIONS(237),
        [anon_sym_or] = ACTIONS(235),
        [anon_sym_LBRACK] = ACTIONS(241),
        [sym_comment] = ACTIONS(75),
    },
    [237] = {
        [sym_comment] = ACTIONS(75),
        [sym__newline] = ACTIONS(563),
    },
    [238] = {
        [anon_sym_COMMA] = ACTIONS(389),
        [anon_sym_RPAREN] = ACTIONS(565),
        [sym_comment] = ACTIONS(75),
    },
    [239] = {
        [sym_comment] = ACTIONS(75),
        [sym__newline] = ACTIONS(567),
    },
    [240] = {
        [sym_identifier] = ACTIONS(569),
        [sym_comment] = ACTIONS(75),
    },
    [241] = {
        [anon_sym_LPAREN] = ACTIONS(571),
        [anon_sym_DOT] = ACTIONS(573),
        [sym_comment] = ACTIONS(75),
        [sym__newline] = ACTIONS(571),
    },
    [242] = {
        [sym_identifier] = ACTIONS(575),
        [sym_comment] = ACTIONS(75),
    },
    [243] = {
        [anon_sym_LPAREN] = ACTIONS(577),
        [anon_sym_DOT] = ACTIONS(577),
        [sym_comment] = ACTIONS(75),
        [sym__newline] = ACTIONS(577),
    },
    [244] = {
        [anon_sym_LPAREN] = ACTIONS(579),
        [anon_sym_DOT] = ACTIONS(579),
        [sym_comment] = ACTIONS(75),
        [sym__newline] = ACTIONS(579),
    },
    [245] = {
        [anon_sym_COLON] = ACTIONS(581),
        [anon_sym_LPAREN] = ACTIONS(583),
        [sym_comment] = ACTIONS(75),
    },
    [246] = {
        [sym__simple_statement] = STATE(252),
        [sym_print_statement] = STATE(5),
        [sym_expression_statement] = STATE(5),
        [sym_return_statement] = STATE(5),
        [sym_delete_statement] = STATE(5),
        [sym__suite] = STATE(380),
        [sym__expression] = STATE(23),
        [sym_binary_operator] = STATE(16),
        [sym_subscript] = STATE(16),
        [sym_call] = STATE(16),
        [sym_list] = STATE(16),
        [sym_list_comprehension] = STATE(16),
        [sym_dictionary] = STATE(16),
        [sym_dictionary_comprehension] = STATE(16),
        [sym_set] = STATE(16),
        [sym_set_comprehension] = STATE(16),
        [anon_sym_print] = ACTIONS(85),
        [anon_sym_return] = ACTIONS(87),
        [anon_sym_del] = ACTIONS(89),
        [sym_pass_statement] = ACTIONS(91),
        [sym_break_statement] = ACTIONS(91),
        [sym_continue_statement] = ACTIONS(91),
        [anon_sym_LBRACK] = ACTIONS(109),
        [anon_sym_LBRACE] = ACTIONS(111),
        [sym_number] = ACTIONS(113),
        [sym_identifier] = ACTIONS(115),
        [sym_comment] = ACTIONS(75),
        [sym__indent] = ACTIONS(585),
    },
    [247] = {
        [sym_expression_list] = STATE(248),
        [sym__expression] = STATE(124),
        [sym_binary_operator] = STATE(41),
        [sym_subscript] = STATE(41),
        [sym_call] = STATE(41),
        [sym_list] = STATE(41),
        [sym_list_comprehension] = STATE(41),
        [sym_dictionary] = STATE(41),
        [sym_dictionary_comprehension] = STATE(41),
        [sym_set] = STATE(41),
        [sym_set_comprehension] = STATE(41),
        [anon_sym_LBRACK] = ACTIONS(119),
        [anon_sym_LBRACE] = ACTIONS(121),
        [sym_number] = ACTIONS(123),
        [sym_identifier] = ACTIONS(123),
        [sym_comment] = ACTIONS(75),
    },
    [248] = {
        [anon_sym_RPAREN] = ACTIONS(587),
        [sym_comment] = ACTIONS(75),
    },
    [249] = {
        [anon_sym_COLON] = ACTIONS(589),
        [sym_comment] = ACTIONS(75),
    },
    [250] = {
        [sym__simple_statement] = STATE(252),
        [sym_print_statement] = STATE(5),
        [sym_expression_statement] = STATE(5),
        [sym_return_statement] = STATE(5),
        [sym_delete_statement] = STATE(5),
        [sym__suite] = STATE(253),
        [sym__expression] = STATE(23),
        [sym_binary_operator] = STATE(16),
        [sym_subscript] = STATE(16),
        [sym_call] = STATE(16),
        [sym_list] = STATE(16),
        [sym_list_comprehension] = STATE(16),
        [sym_dictionary] = STATE(16),
        [sym_dictionary_comprehension] = STATE(16),
        [sym_set] = STATE(16),
        [sym_set_comprehension] = STATE(16),
        [anon_sym_print] = ACTIONS(85),
        [anon_sym_return] = ACTIONS(87),
        [anon_sym_del] = ACTIONS(89),
        [sym_pass_statement] = ACTIONS(91),
        [sym_break_statement] = ACTIONS(91),
        [sym_continue_statement] = ACTIONS(91),
        [anon_sym_LBRACK] = ACTIONS(109),
        [anon_sym_LBRACE] = ACTIONS(111),
        [sym_number] = ACTIONS(113),
        [sym_identifier] = ACTIONS(115),
        [sym_comment] = ACTIONS(75),
        [sym__indent] = ACTIONS(585),
    },
    [251] = {
        [sym__statement] = STATE(262),
        [sym__simple_statement] = STATE(263),
        [sym_print_statement] = STATE(5),
        [sym_expression_statement] = STATE(5),
        [sym_return_statement] = STATE(5),
        [sym_delete_statement] = STATE(5),
        [sym__compound_statement] = STATE(264),
        [sym_if_statement] = STATE(265),
        [sym_for_statement] = STATE(265),
        [sym_while_statement] = STATE(265),
        [sym_try_statement] = STATE(265),
        [sym_with_statement] = STATE(265),
        [sym_function_definition] = STATE(265),
        [sym_class_definition] = STATE(265),
        [sym_decorated_definition] = STATE(265),
        [sym_decorator] = STATE(22),
        [sym__expression] = STATE(23),
        [sym_binary_operator] = STATE(16),
        [sym_subscript] = STATE(16),
        [sym_call] = STATE(16),
        [sym_list] = STATE(16),
        [sym_list_comprehension] = STATE(16),
        [sym_dictionary] = STATE(16),
        [sym_dictionary_comprehension] = STATE(16),
        [sym_set] = STATE(16),
        [sym_set_comprehension] = STATE(16),
        [aux_sym_module_repeat1] = STATE(266),
        [aux_sym_decorated_definition_repeat1] = STATE(267),
        [anon_sym_print] = ACTIONS(85),
        [anon_sym_return] = ACTIONS(87),
        [anon_sym_del] = ACTIONS(89),
        [sym_pass_statement] = ACTIONS(91),
        [sym_break_statement] = ACTIONS(91),
        [sym_continue_statement] = ACTIONS(91),
        [anon_sym_if] = ACTIONS(591),
        [anon_sym_for] = ACTIONS(593),
        [anon_sym_while] = ACTIONS(595),
        [anon_sym_try] = ACTIONS(597),
        [anon_sym_with] = ACTIONS(599),
        [anon_sym_def] = ACTIONS(601),
        [anon_sym_class] = ACTIONS(603),
        [anon_sym_AT] = ACTIONS(107),
        [anon_sym_LBRACK] = ACTIONS(109),
        [anon_sym_LBRACE] = ACTIONS(111),
        [sym_number] = ACTIONS(113),
        [sym_identifier] = ACTIONS(115),
        [sym_comment] = ACTIONS(75),
        [sym__dedent] = ACTIONS(605),
    },
    [252] = {
        [sym_comment] = ACTIONS(75),
        [sym__newline] = ACTIONS(605),
    },
    [253] = {
        [ts_builtin_sym_end] = ACTIONS(607),
        [anon_sym_SEMI] = ACTIONS(607),
        [anon_sym_print] = ACTIONS(609),
        [anon_sym_return] = ACTIONS(609),
        [anon_sym_del] = ACTIONS(609),
        [sym_pass_statement] = ACTIONS(609),
        [sym_break_statement] = ACTIONS(609),
        [sym_continue_statement] = ACTIONS(609),
        [anon_sym_if] = ACTIONS(609),
        [anon_sym_for] = ACTIONS(609),
        [anon_sym_while] = ACTIONS(609),
        [anon_sym_try] = ACTIONS(609),
        [anon_sym_with] = ACTIONS(609),
        [anon_sym_def] = ACTIONS(609),
        [anon_sym_class] = ACTIONS(609),
        [anon_sym_AT] = ACTIONS(607),
        [anon_sym_LBRACK] = ACTIONS(607),
        [anon_sym_LBRACE] = ACTIONS(607),
        [sym_number] = ACTIONS(609),
        [sym_identifier] = ACTIONS(611),
        [sym_comment] = ACTIONS(75),
        [sym__newline] = ACTIONS(607),
    },
    [254] = {
        [ts_builtin_sym_end] = ACTIONS(613),
        [anon_sym_SEMI] = ACTIONS(613),
        [anon_sym_print] = ACTIONS(615),
        [anon_sym_return] = ACTIONS(615),
        [anon_sym_del] = ACTIONS(615),
        [sym_pass_statement] = ACTIONS(615),
        [sym_break_statement] = ACTIONS(615),
        [sym_continue_statement] = ACTIONS(615),
        [anon_sym_if] = ACTIONS(615),
        [anon_sym_elif] = ACTIONS(615),
        [anon_sym_else] = ACTIONS(615),
        [anon_sym_for] = ACTIONS(615),
        [anon_sym_while] = ACTIONS(615),
        [anon_sym_try] = ACTIONS(615),
        [anon_sym_except] = ACTIONS(615),
        [anon_sym_finally] = ACTIONS(615),
        [anon_sym_with] = ACTIONS(615),
        [anon_sym_def] = ACTIONS(615),
        [anon_sym_class] = ACTIONS(615),
        [anon_sym_AT] = ACTIONS(613),
        [anon_sym_LBRACK] = ACTIONS(613),
        [anon_sym_LBRACE] = ACTIONS(613),
        [sym_number] = ACTIONS(615),
        [sym_identifier] = ACTIONS(617),
        [sym_comment] = ACTIONS(75),
        [sym__newline] = ACTIONS(613),
    },
    [255] = {
        [sym__expression] = STATE(368),
        [sym_binary_operator] = STATE(41),
        [sym_subscript] = STATE(41),
        [sym_call] = STATE(41),
        [sym_list] = STATE(41),
        [sym_list_comprehension] = STATE(41),
        [sym_dictionary] = STATE(41),
        [sym_dictionary_comprehension] = STATE(41),
        [sym_set] = STATE(41),
        [sym_set_comprehension] = STATE(41),
        [anon_sym_LBRACK] = ACTIONS(119),
        [anon_sym_LBRACE] = ACTIONS(121),
        [sym_number] = ACTIONS(123),
        [sym_identifier] = ACTIONS(123),
        [sym_comment] = ACTIONS(75),
    },
    [256] = {
        [sym_expression_list] = STATE(362),
        [sym__expression] = STATE(124),
        [sym_binary_operator] = STATE(41),
        [sym_subscript] = STATE(41),
        [sym_call] = STATE(41),
        [sym_list] = STATE(41),
        [sym_list_comprehension] = STATE(41),
        [sym_dictionary] = STATE(41),
        [sym_dictionary_comprehension] = STATE(41),
        [sym_set] = STATE(41),
        [sym_set_comprehension] = STATE(41),
        [anon_sym_LBRACK] = ACTIONS(119),
        [anon_sym_LBRACE] = ACTIONS(121),
        [sym_number] = ACTIONS(123),
        [sym_identifier] = ACTIONS(123),
        [sym_comment] = ACTIONS(75),
    },
    [257] = {
        [sym__expression] = STATE(358),
        [sym_binary_operator] = STATE(41),
        [sym_subscript] = STATE(41),
        [sym_call] = STATE(41),
        [sym_list] = STATE(41),
        [sym_list_comprehension] = STATE(41),
        [sym_dictionary] = STATE(41),
        [sym_dictionary_comprehension] = STATE(41),
        [sym_set] = STATE(41),
        [sym_set_comprehension] = STATE(41),
        [anon_sym_LBRACK] = ACTIONS(119),
        [anon_sym_LBRACE] = ACTIONS(121),
        [sym_number] = ACTIONS(123),
        [sym_identifier] = ACTIONS(123),
        [sym_comment] = ACTIONS(75),
    },
    [258] = {
        [anon_sym_COLON] = ACTIONS(619),
        [sym_comment] = ACTIONS(75),
    },
    [259] = {
        [sym_with_item] = STATE(317),
        [sym__expression] = STATE(318),
        [sym_binary_operator] = STATE(41),
        [sym_subscript] = STATE(41),
        [sym_call] = STATE(41),
        [sym_list] = STATE(41),
        [sym_list_comprehension] = STATE(41),
        [sym_dictionary] = STATE(41),
        [sym_dictionary_comprehension] = STATE(41),
        [sym_set] = STATE(41),
        [sym_set_comprehension] = STATE(41),
        [anon_sym_LBRACK] = ACTIONS(119),
        [anon_sym_LBRACE] = ACTIONS(121),
        [sym_number] = ACTIONS(123),
        [sym_identifier] = ACTIONS(123),
        [sym_comment] = ACTIONS(75),
    },
    [260] = {
        [sym_identifier] = ACTIONS(621),
        [sym_comment] = ACTIONS(75),
    },
    [261] = {
        [sym_identifier] = ACTIONS(623),
        [sym_comment] = ACTIONS(75),
    },
    [262] = {
        [anon_sym_print] = ACTIONS(145),
        [anon_sym_return] = ACTIONS(145),
        [anon_sym_del] = ACTIONS(145),
        [sym_pass_statement] = ACTIONS(145),
        [sym_break_statement] = ACTIONS(145),
        [sym_continue_statement] = ACTIONS(145),
        [anon_sym_if] = ACTIONS(145),
        [anon_sym_for] = ACTIONS(145),
        [anon_sym_while] = ACTIONS(145),
        [anon_sym_try] = ACTIONS(145),
        [anon_sym_with] = ACTIONS(145),
        [anon_sym_def] = ACTIONS(145),
        [anon_sym_class] = ACTIONS(145),
        [anon_sym_AT] = ACTIONS(143),
        [anon_sym_LBRACK] = ACTIONS(143),
        [anon_sym_LBRACE] = ACTIONS(143),
        [sym_number] = ACTIONS(145),
        [sym_identifier] = ACTIONS(147),
        [sym_comment] = ACTIONS(75),
        [sym__dedent] = ACTIONS(143),
    },
    [263] = {
        [sym_comment] = ACTIONS(75),
        [sym__newline] = ACTIONS(625),
    },
    [264] = {
        [anon_sym_print] = ACTIONS(153),
        [anon_sym_return] = ACTIONS(153),
        [anon_sym_del] = ACTIONS(153),
        [sym_pass_statement] = ACTIONS(153),
        [sym_break_statement] = ACTIONS(153),
        [sym_continue_statement] = ACTIONS(153),
        [anon_sym_if] = ACTIONS(153),
        [anon_sym_for] = ACTIONS(153),
        [anon_sym_while] = ACTIONS(153),
        [anon_sym_try] = ACTIONS(153),
        [anon_sym_with] = ACTIONS(153),
        [anon_sym_def] = ACTIONS(153),
        [anon_sym_class] = ACTIONS(153),
        [anon_sym_AT] = ACTIONS(151),
        [anon_sym_LBRACK] = ACTIONS(151),
        [anon_sym_LBRACE] = ACTIONS(151),
        [sym_number] = ACTIONS(153),
        [sym_identifier] = ACTIONS(155),
        [sym_comment] = ACTIONS(75),
        [sym__dedent] = ACTIONS(151),
    },
    [265] = {
        [anon_sym_print] = ACTIONS(159),
        [anon_sym_return] = ACTIONS(159),
        [anon_sym_del] = ACTIONS(159),
        [sym_pass_statement] = ACTIONS(159),
        [sym_break_statement] = ACTIONS(159),
        [sym_continue_statement] = ACTIONS(159),
        [anon_sym_if] = ACTIONS(159),
        [anon_sym_for] = ACTIONS(159),
        [anon_sym_while] = ACTIONS(159),
        [anon_sym_try] = ACTIONS(159),
        [anon_sym_with] = ACTIONS(159),
        [anon_sym_def] = ACTIONS(159),
        [anon_sym_class] = ACTIONS(159),
        [anon_sym_AT] = ACTIONS(157),
        [anon_sym_LBRACK] = ACTIONS(157),
        [anon_sym_LBRACE] = ACTIONS(157),
        [sym_number] = ACTIONS(159),
        [sym_identifier] = ACTIONS(161),
        [sym_comment] = ACTIONS(75),
        [sym__dedent] = ACTIONS(157),
    },
    [266] = {
        [sym__statement] = STATE(270),
        [sym__simple_statement] = STATE(263),
        [sym_print_statement] = STATE(5),
        [sym_expression_statement] = STATE(5),
        [sym_return_statement] = STATE(5),
        [sym_delete_statement] = STATE(5),
        [sym__compound_statement] = STATE(264),
        [sym_if_statement] = STATE(265),
        [sym_for_statement] = STATE(265),
        [sym_while_statement] = STATE(265),
        [sym_try_statement] = STATE(265),
        [sym_with_statement] = STATE(265),
        [sym_function_definition] = STATE(265),
        [sym_class_definition] = STATE(265),
        [sym_decorated_definition] = STATE(265),
        [sym_decorator] = STATE(22),
        [sym__expression] = STATE(23),
        [sym_binary_operator] = STATE(16),
        [sym_subscript] = STATE(16),
        [sym_call] = STATE(16),
        [sym_list] = STATE(16),
        [sym_list_comprehension] = STATE(16),
        [sym_dictionary] = STATE(16),
        [sym_dictionary_comprehension] = STATE(16),
        [sym_set] = STATE(16),
        [sym_set_comprehension] = STATE(16),
        [aux_sym_decorated_definition_repeat1] = STATE(267),
        [anon_sym_print] = ACTIONS(85),
        [anon_sym_return] = ACTIONS(87),
        [anon_sym_del] = ACTIONS(89),
        [sym_pass_statement] = ACTIONS(91),
        [sym_break_statement] = ACTIONS(91),
        [sym_continue_statement] = ACTIONS(91),
        [anon_sym_if] = ACTIONS(591),
        [anon_sym_for] = ACTIONS(593),
        [anon_sym_while] = ACTIONS(595),
        [anon_sym_try] = ACTIONS(597),
        [anon_sym_with] = ACTIONS(599),
        [anon_sym_def] = ACTIONS(601),
        [anon_sym_class] = ACTIONS(603),
        [anon_sym_AT] = ACTIONS(107),
        [anon_sym_LBRACK] = ACTIONS(109),
        [anon_sym_LBRACE] = ACTIONS(111),
        [sym_number] = ACTIONS(113),
        [sym_identifier] = ACTIONS(115),
        [sym_comment] = ACTIONS(75),
        [sym__dedent] = ACTIONS(627),
    },
    [267] = {
        [sym_function_definition] = STATE(268),
        [sym_class_definition] = STATE(268),
        [sym_decorator] = STATE(27),
        [anon_sym_def] = ACTIONS(629),
        [anon_sym_class] = ACTIONS(631),
        [anon_sym_AT] = ACTIONS(107),
        [sym_comment] = ACTIONS(75),
    },
    [268] = {
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
        [anon_sym_LBRACK] = ACTIONS(193),
        [anon_sym_LBRACE] = ACTIONS(193),
        [sym_number] = ACTIONS(195),
        [sym_identifier] = ACTIONS(197),
        [sym_comment] = ACTIONS(75),
        [sym__dedent] = ACTIONS(193),
    },
    [269] = {
        [ts_builtin_sym_end] = ACTIONS(633),
        [anon_sym_SEMI] = ACTIONS(633),
        [anon_sym_print] = ACTIONS(635),
        [anon_sym_return] = ACTIONS(635),
        [anon_sym_del] = ACTIONS(635),
        [sym_pass_statement] = ACTIONS(635),
        [sym_break_statement] = ACTIONS(635),
        [sym_continue_statement] = ACTIONS(635),
        [anon_sym_if] = ACTIONS(635),
        [anon_sym_elif] = ACTIONS(635),
        [anon_sym_else] = ACTIONS(635),
        [anon_sym_for] = ACTIONS(635),
        [anon_sym_while] = ACTIONS(635),
        [anon_sym_try] = ACTIONS(635),
        [anon_sym_except] = ACTIONS(635),
        [anon_sym_finally] = ACTIONS(635),
        [anon_sym_with] = ACTIONS(635),
        [anon_sym_def] = ACTIONS(635),
        [anon_sym_class] = ACTIONS(635),
        [anon_sym_AT] = ACTIONS(633),
        [anon_sym_LBRACK] = ACTIONS(633),
        [anon_sym_LBRACE] = ACTIONS(633),
        [sym_number] = ACTIONS(635),
        [sym_identifier] = ACTIONS(637),
        [sym_comment] = ACTIONS(75),
        [sym__newline] = ACTIONS(633),
    },
    [270] = {
        [anon_sym_print] = ACTIONS(205),
        [anon_sym_return] = ACTIONS(205),
        [anon_sym_del] = ACTIONS(205),
        [sym_pass_statement] = ACTIONS(205),
        [sym_break_statement] = ACTIONS(205),
        [sym_continue_statement] = ACTIONS(205),
        [anon_sym_if] = ACTIONS(205),
        [anon_sym_for] = ACTIONS(205),
        [anon_sym_while] = ACTIONS(205),
        [anon_sym_try] = ACTIONS(205),
        [anon_sym_with] = ACTIONS(205),
        [anon_sym_def] = ACTIONS(205),
        [anon_sym_class] = ACTIONS(205),
        [anon_sym_AT] = ACTIONS(203),
        [anon_sym_LBRACK] = ACTIONS(203),
        [anon_sym_LBRACE] = ACTIONS(203),
        [sym_number] = ACTIONS(205),
        [sym_identifier] = ACTIONS(207),
        [sym_comment] = ACTIONS(75),
        [sym__dedent] = ACTIONS(203),
    },
    [271] = {
        [anon_sym_print] = ACTIONS(495),
        [anon_sym_return] = ACTIONS(495),
        [anon_sym_del] = ACTIONS(495),
        [sym_pass_statement] = ACTIONS(495),
        [sym_break_statement] = ACTIONS(495),
        [sym_continue_statement] = ACTIONS(495),
        [anon_sym_if] = ACTIONS(495),
        [anon_sym_for] = ACTIONS(495),
        [anon_sym_while] = ACTIONS(495),
        [anon_sym_try] = ACTIONS(495),
        [anon_sym_with] = ACTIONS(495),
        [anon_sym_def] = ACTIONS(495),
        [anon_sym_class] = ACTIONS(495),
        [anon_sym_AT] = ACTIONS(493),
        [anon_sym_LBRACK] = ACTIONS(493),
        [anon_sym_LBRACE] = ACTIONS(493),
        [sym_number] = ACTIONS(495),
        [sym_identifier] = ACTIONS(497),
        [sym_comment] = ACTIONS(75),
        [sym__dedent] = ACTIONS(493),
    },
    [272] = {
        [anon_sym_COLON] = ACTIONS(639),
        [anon_sym_LPAREN] = ACTIONS(641),
        [sym_comment] = ACTIONS(75),
    },
    [273] = {
        [sym__simple_statement] = STATE(279),
        [sym_print_statement] = STATE(5),
        [sym_expression_statement] = STATE(5),
        [sym_return_statement] = STATE(5),
        [sym_delete_statement] = STATE(5),
        [sym__suite] = STATE(284),
        [sym__expression] = STATE(23),
        [sym_binary_operator] = STATE(16),
        [sym_subscript] = STATE(16),
        [sym_call] = STATE(16),
        [sym_list] = STATE(16),
        [sym_list_comprehension] = STATE(16),
        [sym_dictionary] = STATE(16),
        [sym_dictionary_comprehension] = STATE(16),
        [sym_set] = STATE(16),
        [sym_set_comprehension] = STATE(16),
        [anon_sym_print] = ACTIONS(85),
        [anon_sym_return] = ACTIONS(87),
        [anon_sym_del] = ACTIONS(89),
        [sym_pass_statement] = ACTIONS(91),
        [sym_break_statement] = ACTIONS(91),
        [sym_continue_statement] = ACTIONS(91),
        [anon_sym_LBRACK] = ACTIONS(109),
        [anon_sym_LBRACE] = ACTIONS(111),
        [sym_number] = ACTIONS(113),
        [sym_identifier] = ACTIONS(115),
        [sym_comment] = ACTIONS(75),
        [sym__indent] = ACTIONS(643),
    },
    [274] = {
        [sym_expression_list] = STATE(275),
        [sym__expression] = STATE(124),
        [sym_binary_operator] = STATE(41),
        [sym_subscript] = STATE(41),
        [sym_call] = STATE(41),
        [sym_list] = STATE(41),
        [sym_list_comprehension] = STATE(41),
        [sym_dictionary] = STATE(41),
        [sym_dictionary_comprehension] = STATE(41),
        [sym_set] = STATE(41),
        [sym_set_comprehension] = STATE(41),
        [anon_sym_LBRACK] = ACTIONS(119),
        [anon_sym_LBRACE] = ACTIONS(121),
        [sym_number] = ACTIONS(123),
        [sym_identifier] = ACTIONS(123),
        [sym_comment] = ACTIONS(75),
    },
    [275] = {
        [anon_sym_RPAREN] = ACTIONS(645),
        [sym_comment] = ACTIONS(75),
    },
    [276] = {
        [anon_sym_COLON] = ACTIONS(647),
        [sym_comment] = ACTIONS(75),
    },
    [277] = {
        [sym__simple_statement] = STATE(279),
        [sym_print_statement] = STATE(5),
        [sym_expression_statement] = STATE(5),
        [sym_return_statement] = STATE(5),
        [sym_delete_statement] = STATE(5),
        [sym__suite] = STATE(280),
        [sym__expression] = STATE(23),
        [sym_binary_operator] = STATE(16),
        [sym_subscript] = STATE(16),
        [sym_call] = STATE(16),
        [sym_list] = STATE(16),
        [sym_list_comprehension] = STATE(16),
        [sym_dictionary] = STATE(16),
        [sym_dictionary_comprehension] = STATE(16),
        [sym_set] = STATE(16),
        [sym_set_comprehension] = STATE(16),
        [anon_sym_print] = ACTIONS(85),
        [anon_sym_return] = ACTIONS(87),
        [anon_sym_del] = ACTIONS(89),
        [sym_pass_statement] = ACTIONS(91),
        [sym_break_statement] = ACTIONS(91),
        [sym_continue_statement] = ACTIONS(91),
        [anon_sym_LBRACK] = ACTIONS(109),
        [anon_sym_LBRACE] = ACTIONS(111),
        [sym_number] = ACTIONS(113),
        [sym_identifier] = ACTIONS(115),
        [sym_comment] = ACTIONS(75),
        [sym__indent] = ACTIONS(643),
    },
    [278] = {
        [sym__statement] = STATE(262),
        [sym__simple_statement] = STATE(263),
        [sym_print_statement] = STATE(5),
        [sym_expression_statement] = STATE(5),
        [sym_return_statement] = STATE(5),
        [sym_delete_statement] = STATE(5),
        [sym__compound_statement] = STATE(264),
        [sym_if_statement] = STATE(265),
        [sym_for_statement] = STATE(265),
        [sym_while_statement] = STATE(265),
        [sym_try_statement] = STATE(265),
        [sym_with_statement] = STATE(265),
        [sym_function_definition] = STATE(265),
        [sym_class_definition] = STATE(265),
        [sym_decorated_definition] = STATE(265),
        [sym_decorator] = STATE(22),
        [sym__expression] = STATE(23),
        [sym_binary_operator] = STATE(16),
        [sym_subscript] = STATE(16),
        [sym_call] = STATE(16),
        [sym_list] = STATE(16),
        [sym_list_comprehension] = STATE(16),
        [sym_dictionary] = STATE(16),
        [sym_dictionary_comprehension] = STATE(16),
        [sym_set] = STATE(16),
        [sym_set_comprehension] = STATE(16),
        [aux_sym_module_repeat1] = STATE(282),
        [aux_sym_decorated_definition_repeat1] = STATE(267),
        [anon_sym_print] = ACTIONS(85),
        [anon_sym_return] = ACTIONS(87),
        [anon_sym_del] = ACTIONS(89),
        [sym_pass_statement] = ACTIONS(91),
        [sym_break_statement] = ACTIONS(91),
        [sym_continue_statement] = ACTIONS(91),
        [anon_sym_if] = ACTIONS(591),
        [anon_sym_for] = ACTIONS(593),
        [anon_sym_while] = ACTIONS(595),
        [anon_sym_try] = ACTIONS(597),
        [anon_sym_with] = ACTIONS(599),
        [anon_sym_def] = ACTIONS(601),
        [anon_sym_class] = ACTIONS(603),
        [anon_sym_AT] = ACTIONS(107),
        [anon_sym_LBRACK] = ACTIONS(109),
        [anon_sym_LBRACE] = ACTIONS(111),
        [sym_number] = ACTIONS(113),
        [sym_identifier] = ACTIONS(115),
        [sym_comment] = ACTIONS(75),
        [sym__dedent] = ACTIONS(649),
    },
    [279] = {
        [sym_comment] = ACTIONS(75),
        [sym__newline] = ACTIONS(649),
    },
    [280] = {
        [anon_sym_print] = ACTIONS(609),
        [anon_sym_return] = ACTIONS(609),
        [anon_sym_del] = ACTIONS(609),
        [sym_pass_statement] = ACTIONS(609),
        [sym_break_statement] = ACTIONS(609),
        [sym_continue_statement] = ACTIONS(609),
        [anon_sym_if] = ACTIONS(609),
        [anon_sym_for] = ACTIONS(609),
        [anon_sym_while] = ACTIONS(609),
        [anon_sym_try] = ACTIONS(609),
        [anon_sym_with] = ACTIONS(609),
        [anon_sym_def] = ACTIONS(609),
        [anon_sym_class] = ACTIONS(609),
        [anon_sym_AT] = ACTIONS(607),
        [anon_sym_LBRACK] = ACTIONS(607),
        [anon_sym_LBRACE] = ACTIONS(607),
        [sym_number] = ACTIONS(609),
        [sym_identifier] = ACTIONS(611),
        [sym_comment] = ACTIONS(75),
        [sym__dedent] = ACTIONS(607),
    },
    [281] = {
        [anon_sym_print] = ACTIONS(615),
        [anon_sym_return] = ACTIONS(615),
        [anon_sym_del] = ACTIONS(615),
        [sym_pass_statement] = ACTIONS(615),
        [sym_break_statement] = ACTIONS(615),
        [sym_continue_statement] = ACTIONS(615),
        [anon_sym_if] = ACTIONS(615),
        [anon_sym_elif] = ACTIONS(615),
        [anon_sym_else] = ACTIONS(615),
        [anon_sym_for] = ACTIONS(615),
        [anon_sym_while] = ACTIONS(615),
        [anon_sym_try] = ACTIONS(615),
        [anon_sym_except] = ACTIONS(615),
        [anon_sym_finally] = ACTIONS(615),
        [anon_sym_with] = ACTIONS(615),
        [anon_sym_def] = ACTIONS(615),
        [anon_sym_class] = ACTIONS(615),
        [anon_sym_AT] = ACTIONS(613),
        [anon_sym_LBRACK] = ACTIONS(613),
        [anon_sym_LBRACE] = ACTIONS(613),
        [sym_number] = ACTIONS(615),
        [sym_identifier] = ACTIONS(617),
        [sym_comment] = ACTIONS(75),
        [sym__dedent] = ACTIONS(613),
    },
    [282] = {
        [sym__statement] = STATE(270),
        [sym__simple_statement] = STATE(263),
        [sym_print_statement] = STATE(5),
        [sym_expression_statement] = STATE(5),
        [sym_return_statement] = STATE(5),
        [sym_delete_statement] = STATE(5),
        [sym__compound_statement] = STATE(264),
        [sym_if_statement] = STATE(265),
        [sym_for_statement] = STATE(265),
        [sym_while_statement] = STATE(265),
        [sym_try_statement] = STATE(265),
        [sym_with_statement] = STATE(265),
        [sym_function_definition] = STATE(265),
        [sym_class_definition] = STATE(265),
        [sym_decorated_definition] = STATE(265),
        [sym_decorator] = STATE(22),
        [sym__expression] = STATE(23),
        [sym_binary_operator] = STATE(16),
        [sym_subscript] = STATE(16),
        [sym_call] = STATE(16),
        [sym_list] = STATE(16),
        [sym_list_comprehension] = STATE(16),
        [sym_dictionary] = STATE(16),
        [sym_dictionary_comprehension] = STATE(16),
        [sym_set] = STATE(16),
        [sym_set_comprehension] = STATE(16),
        [aux_sym_decorated_definition_repeat1] = STATE(267),
        [anon_sym_print] = ACTIONS(85),
        [anon_sym_return] = ACTIONS(87),
        [anon_sym_del] = ACTIONS(89),
        [sym_pass_statement] = ACTIONS(91),
        [sym_break_statement] = ACTIONS(91),
        [sym_continue_statement] = ACTIONS(91),
        [anon_sym_if] = ACTIONS(591),
        [anon_sym_for] = ACTIONS(593),
        [anon_sym_while] = ACTIONS(595),
        [anon_sym_try] = ACTIONS(597),
        [anon_sym_with] = ACTIONS(599),
        [anon_sym_def] = ACTIONS(601),
        [anon_sym_class] = ACTIONS(603),
        [anon_sym_AT] = ACTIONS(107),
        [anon_sym_LBRACK] = ACTIONS(109),
        [anon_sym_LBRACE] = ACTIONS(111),
        [sym_number] = ACTIONS(113),
        [sym_identifier] = ACTIONS(115),
        [sym_comment] = ACTIONS(75),
        [sym__dedent] = ACTIONS(651),
    },
    [283] = {
        [anon_sym_print] = ACTIONS(635),
        [anon_sym_return] = ACTIONS(635),
        [anon_sym_del] = ACTIONS(635),
        [sym_pass_statement] = ACTIONS(635),
        [sym_break_statement] = ACTIONS(635),
        [sym_continue_statement] = ACTIONS(635),
        [anon_sym_if] = ACTIONS(635),
        [anon_sym_elif] = ACTIONS(635),
        [anon_sym_else] = ACTIONS(635),
        [anon_sym_for] = ACTIONS(635),
        [anon_sym_while] = ACTIONS(635),
        [anon_sym_try] = ACTIONS(635),
        [anon_sym_except] = ACTIONS(635),
        [anon_sym_finally] = ACTIONS(635),
        [anon_sym_with] = ACTIONS(635),
        [anon_sym_def] = ACTIONS(635),
        [anon_sym_class] = ACTIONS(635),
        [anon_sym_AT] = ACTIONS(633),
        [anon_sym_LBRACK] = ACTIONS(633),
        [anon_sym_LBRACE] = ACTIONS(633),
        [sym_number] = ACTIONS(635),
        [sym_identifier] = ACTIONS(637),
        [sym_comment] = ACTIONS(75),
        [sym__dedent] = ACTIONS(633),
    },
    [284] = {
        [anon_sym_print] = ACTIONS(653),
        [anon_sym_return] = ACTIONS(653),
        [anon_sym_del] = ACTIONS(653),
        [sym_pass_statement] = ACTIONS(653),
        [sym_break_statement] = ACTIONS(653),
        [sym_continue_statement] = ACTIONS(653),
        [anon_sym_if] = ACTIONS(653),
        [anon_sym_for] = ACTIONS(653),
        [anon_sym_while] = ACTIONS(653),
        [anon_sym_try] = ACTIONS(653),
        [anon_sym_with] = ACTIONS(653),
        [anon_sym_def] = ACTIONS(653),
        [anon_sym_class] = ACTIONS(653),
        [anon_sym_AT] = ACTIONS(655),
        [anon_sym_LBRACK] = ACTIONS(655),
        [anon_sym_LBRACE] = ACTIONS(655),
        [sym_number] = ACTIONS(653),
        [sym_identifier] = ACTIONS(657),
        [sym_comment] = ACTIONS(75),
        [sym__dedent] = ACTIONS(655),
    },
    [285] = {
        [sym_parameters] = STATE(287),
        [anon_sym_LPAREN] = ACTIONS(659),
        [sym_comment] = ACTIONS(75),
    },
    [286] = {
        [sym_default_parameter] = STATE(293),
        [sym_list_splat_parameter] = STATE(294),
        [sym_dictionary_splat_parameter] = STATE(295),
        [aux_sym_parameters_repeat1] = STATE(296),
        [anon_sym_RPAREN] = ACTIONS(661),
        [anon_sym_STAR] = ACTIONS(663),
        [sym_identifier] = ACTIONS(665),
        [sym_comment] = ACTIONS(75),
    },
    [287] = {
        [anon_sym_COLON] = ACTIONS(667),
        [sym_comment] = ACTIONS(75),
    },
    [288] = {
        [sym__simple_statement] = STATE(279),
        [sym_print_statement] = STATE(5),
        [sym_expression_statement] = STATE(5),
        [sym_return_statement] = STATE(5),
        [sym_delete_statement] = STATE(5),
        [sym__suite] = STATE(289),
        [sym__expression] = STATE(23),
        [sym_binary_operator] = STATE(16),
        [sym_subscript] = STATE(16),
        [sym_call] = STATE(16),
        [sym_list] = STATE(16),
        [sym_list_comprehension] = STATE(16),
        [sym_dictionary] = STATE(16),
        [sym_dictionary_comprehension] = STATE(16),
        [sym_set] = STATE(16),
        [sym_set_comprehension] = STATE(16),
        [anon_sym_print] = ACTIONS(85),
        [anon_sym_return] = ACTIONS(87),
        [anon_sym_del] = ACTIONS(89),
        [sym_pass_statement] = ACTIONS(91),
        [sym_break_statement] = ACTIONS(91),
        [sym_continue_statement] = ACTIONS(91),
        [anon_sym_LBRACK] = ACTIONS(109),
        [anon_sym_LBRACE] = ACTIONS(111),
        [sym_number] = ACTIONS(113),
        [sym_identifier] = ACTIONS(115),
        [sym_comment] = ACTIONS(75),
        [sym__indent] = ACTIONS(643),
    },
    [289] = {
        [anon_sym_print] = ACTIONS(669),
        [anon_sym_return] = ACTIONS(669),
        [anon_sym_del] = ACTIONS(669),
        [sym_pass_statement] = ACTIONS(669),
        [sym_break_statement] = ACTIONS(669),
        [sym_continue_statement] = ACTIONS(669),
        [anon_sym_if] = ACTIONS(669),
        [anon_sym_for] = ACTIONS(669),
        [anon_sym_while] = ACTIONS(669),
        [anon_sym_try] = ACTIONS(669),
        [anon_sym_with] = ACTIONS(669),
        [anon_sym_def] = ACTIONS(669),
        [anon_sym_class] = ACTIONS(669),
        [anon_sym_AT] = ACTIONS(671),
        [anon_sym_LBRACK] = ACTIONS(671),
        [anon_sym_LBRACE] = ACTIONS(671),
        [sym_number] = ACTIONS(669),
        [sym_identifier] = ACTIONS(673),
        [sym_comment] = ACTIONS(75),
        [sym__dedent] = ACTIONS(671),
    },
    [290] = {
        [anon_sym_COLON] = ACTIONS(675),
        [sym_comment] = ACTIONS(75),
    },
    [291] = {
        [anon_sym_STAR] = ACTIONS(677),
        [sym_identifier] = ACTIONS(679),
        [sym_comment] = ACTIONS(75),
    },
    [292] = {
        [anon_sym_COMMA] = ACTIONS(681),
        [anon_sym_RPAREN] = ACTIONS(683),
        [anon_sym_EQ] = ACTIONS(685),
        [sym_comment] = ACTIONS(75),
    },
    [293] = {
        [anon_sym_COMMA] = ACTIONS(681),
        [anon_sym_RPAREN] = ACTIONS(683),
        [sym_comment] = ACTIONS(75),
    },
    [294] = {
        [anon_sym_COMMA] = ACTIONS(687),
        [anon_sym_RPAREN] = ACTIONS(683),
        [sym_comment] = ACTIONS(75),
    },
    [295] = {
        [anon_sym_RPAREN] = ACTIONS(683),
        [sym_comment] = ACTIONS(75),
    },
    [296] = {
        [sym_default_parameter] = STATE(298),
        [sym_list_splat_parameter] = STATE(299),
        [sym_dictionary_splat_parameter] = STATE(300),
        [anon_sym_STAR] = ACTIONS(663),
        [sym_identifier] = ACTIONS(689),
        [sym_comment] = ACTIONS(75),
    },
    [297] = {
        [anon_sym_COMMA] = ACTIONS(691),
        [anon_sym_RPAREN] = ACTIONS(693),
        [anon_sym_EQ] = ACTIONS(685),
        [sym_comment] = ACTIONS(75),
    },
    [298] = {
        [anon_sym_COMMA] = ACTIONS(691),
        [anon_sym_RPAREN] = ACTIONS(693),
        [sym_comment] = ACTIONS(75),
    },
    [299] = {
        [anon_sym_COMMA] = ACTIONS(695),
        [anon_sym_RPAREN] = ACTIONS(693),
        [sym_comment] = ACTIONS(75),
    },
    [300] = {
        [anon_sym_RPAREN] = ACTIONS(693),
        [sym_comment] = ACTIONS(75),
    },
    [301] = {
        [anon_sym_COLON] = ACTIONS(697),
        [sym_comment] = ACTIONS(75),
    },
    [302] = {
        [sym_dictionary_splat_parameter] = STATE(304),
        [anon_sym_STAR] = ACTIONS(699),
        [sym_comment] = ACTIONS(75),
    },
    [303] = {
        [anon_sym_STAR] = ACTIONS(677),
        [sym_comment] = ACTIONS(75),
    },
    [304] = {
        [anon_sym_RPAREN] = ACTIONS(701),
        [sym_comment] = ACTIONS(75),
    },
    [305] = {
        [anon_sym_COLON] = ACTIONS(703),
        [sym_comment] = ACTIONS(75),
    },
    [306] = {
        [sym_identifier] = ACTIONS(705),
        [sym_comment] = ACTIONS(75),
    },
    [307] = {
        [anon_sym_RPAREN] = ACTIONS(707),
        [sym_comment] = ACTIONS(75),
    },
    [308] = {
        [anon_sym_RPAREN] = ACTIONS(709),
        [anon_sym_STAR] = ACTIONS(711),
        [sym_identifier] = ACTIONS(713),
        [sym_comment] = ACTIONS(75),
    },
    [309] = {
        [anon_sym_COLON] = ACTIONS(715),
        [sym_comment] = ACTIONS(75),
    },
    [310] = {
        [sym__expression] = STATE(311),
        [sym_binary_operator] = STATE(41),
        [sym_subscript] = STATE(41),
        [sym_call] = STATE(41),
        [sym_list] = STATE(41),
        [sym_list_comprehension] = STATE(41),
        [sym_dictionary] = STATE(41),
        [sym_dictionary_comprehension] = STATE(41),
        [sym_set] = STATE(41),
        [sym_set_comprehension] = STATE(41),
        [anon_sym_LBRACK] = ACTIONS(119),
        [anon_sym_LBRACE] = ACTIONS(121),
        [sym_number] = ACTIONS(123),
        [sym_identifier] = ACTIONS(123),
        [sym_comment] = ACTIONS(75),
    },
    [311] = {
        [anon_sym_COMMA] = ACTIONS(717),
        [anon_sym_LPAREN] = ACTIONS(225),
        [anon_sym_RPAREN] = ACTIONS(717),
        [anon_sym_STAR] = ACTIONS(227),
        [anon_sym_PLUS] = ACTIONS(229),
        [anon_sym_DASH] = ACTIONS(229),
        [anon_sym_SLASH] = ACTIONS(231),
        [anon_sym_STAR_STAR] = ACTIONS(233),
        [anon_sym_PIPE] = ACTIONS(235),
        [anon_sym_AMP] = ACTIONS(237),
        [anon_sym_CARET] = ACTIONS(239),
        [anon_sym_LT_LT] = ACTIONS(229),
        [anon_sym_GT_GT] = ACTIONS(229),
        [anon_sym_and] = ACTIONS(237),
        [anon_sym_or] = ACTIONS(235),
        [anon_sym_LBRACK] = ACTIONS(241),
        [sym_comment] = ACTIONS(75),
    },
    [312] = {
        [anon_sym_COLON] = ACTIONS(719),
        [sym_comment] = ACTIONS(75),
    },
    [313] = {
        [sym_dictionary_splat_parameter] = STATE(314),
        [anon_sym_STAR] = ACTIONS(699),
        [sym_comment] = ACTIONS(75),
    },
    [314] = {
        [anon_sym_RPAREN] = ACTIONS(709),
        [sym_comment] = ACTIONS(75),
    },
    [315] = {
        [anon_sym_RPAREN] = ACTIONS(693),
        [anon_sym_STAR] = ACTIONS(721),
        [sym_identifier] = ACTIONS(723),
        [sym_comment] = ACTIONS(75),
    },
    [316] = {
        [anon_sym_COMMA] = ACTIONS(725),
        [anon_sym_RPAREN] = ACTIONS(725),
        [sym_comment] = ACTIONS(75),
    },
    [317] = {
        [aux_sym_with_statement_repeat1] = STATE(323),
        [anon_sym_COMMA] = ACTIONS(727),
        [anon_sym_COLON] = ACTIONS(729),
        [sym_comment] = ACTIONS(75),
    },
    [318] = {
        [anon_sym_COMMA] = ACTIONS(731),
        [anon_sym_COLON] = ACTIONS(731),
        [anon_sym_as] = ACTIONS(733),
        [anon_sym_LPAREN] = ACTIONS(225),
        [anon_sym_STAR] = ACTIONS(227),
        [anon_sym_PLUS] = ACTIONS(229),
        [anon_sym_DASH] = ACTIONS(229),
        [anon_sym_SLASH] = ACTIONS(231),
        [anon_sym_STAR_STAR] = ACTIONS(233),
        [anon_sym_PIPE] = ACTIONS(235),
        [anon_sym_AMP] = ACTIONS(237),
        [anon_sym_CARET] = ACTIONS(239),
        [anon_sym_LT_LT] = ACTIONS(229),
        [anon_sym_GT_GT] = ACTIONS(229),
        [anon_sym_and] = ACTIONS(237),
        [anon_sym_or] = ACTIONS(235),
        [anon_sym_LBRACK] = ACTIONS(241),
        [sym_comment] = ACTIONS(75),
    },
    [319] = {
        [sym__expression] = STATE(320),
        [sym_binary_operator] = STATE(41),
        [sym_subscript] = STATE(41),
        [sym_call] = STATE(41),
        [sym_list] = STATE(41),
        [sym_list_comprehension] = STATE(41),
        [sym_dictionary] = STATE(41),
        [sym_dictionary_comprehension] = STATE(41),
        [sym_set] = STATE(41),
        [sym_set_comprehension] = STATE(41),
        [anon_sym_LBRACK] = ACTIONS(119),
        [anon_sym_LBRACE] = ACTIONS(121),
        [sym_number] = ACTIONS(123),
        [sym_identifier] = ACTIONS(123),
        [sym_comment] = ACTIONS(75),
    },
    [320] = {
        [anon_sym_COMMA] = ACTIONS(735),
        [anon_sym_COLON] = ACTIONS(735),
        [anon_sym_LPAREN] = ACTIONS(225),
        [anon_sym_STAR] = ACTIONS(227),
        [anon_sym_PLUS] = ACTIONS(229),
        [anon_sym_DASH] = ACTIONS(229),
        [anon_sym_SLASH] = ACTIONS(231),
        [anon_sym_STAR_STAR] = ACTIONS(233),
        [anon_sym_PIPE] = ACTIONS(235),
        [anon_sym_AMP] = ACTIONS(237),
        [anon_sym_CARET] = ACTIONS(239),
        [anon_sym_LT_LT] = ACTIONS(229),
        [anon_sym_GT_GT] = ACTIONS(229),
        [anon_sym_and] = ACTIONS(237),
        [anon_sym_or] = ACTIONS(235),
        [anon_sym_LBRACK] = ACTIONS(241),
        [sym_comment] = ACTIONS(75),
    },
    [321] = {
        [sym_with_item] = STATE(329),
        [sym__expression] = STATE(318),
        [sym_binary_operator] = STATE(41),
        [sym_subscript] = STATE(41),
        [sym_call] = STATE(41),
        [sym_list] = STATE(41),
        [sym_list_comprehension] = STATE(41),
        [sym_dictionary] = STATE(41),
        [sym_dictionary_comprehension] = STATE(41),
        [sym_set] = STATE(41),
        [sym_set_comprehension] = STATE(41),
        [anon_sym_LBRACK] = ACTIONS(119),
        [anon_sym_LBRACE] = ACTIONS(121),
        [sym_number] = ACTIONS(123),
        [sym_identifier] = ACTIONS(123),
        [sym_comment] = ACTIONS(75),
    },
    [322] = {
        [sym__simple_statement] = STATE(279),
        [sym_print_statement] = STATE(5),
        [sym_expression_statement] = STATE(5),
        [sym_return_statement] = STATE(5),
        [sym_delete_statement] = STATE(5),
        [sym__suite] = STATE(328),
        [sym__expression] = STATE(23),
        [sym_binary_operator] = STATE(16),
        [sym_subscript] = STATE(16),
        [sym_call] = STATE(16),
        [sym_list] = STATE(16),
        [sym_list_comprehension] = STATE(16),
        [sym_dictionary] = STATE(16),
        [sym_dictionary_comprehension] = STATE(16),
        [sym_set] = STATE(16),
        [sym_set_comprehension] = STATE(16),
        [anon_sym_print] = ACTIONS(85),
        [anon_sym_return] = ACTIONS(87),
        [anon_sym_del] = ACTIONS(89),
        [sym_pass_statement] = ACTIONS(91),
        [sym_break_statement] = ACTIONS(91),
        [sym_continue_statement] = ACTIONS(91),
        [anon_sym_LBRACK] = ACTIONS(109),
        [anon_sym_LBRACE] = ACTIONS(111),
        [sym_number] = ACTIONS(113),
        [sym_identifier] = ACTIONS(115),
        [sym_comment] = ACTIONS(75),
        [sym__indent] = ACTIONS(643),
    },
    [323] = {
        [anon_sym_COMMA] = ACTIONS(737),
        [anon_sym_COLON] = ACTIONS(739),
        [sym_comment] = ACTIONS(75),
    },
    [324] = {
        [sym_with_item] = STATE(327),
        [sym__expression] = STATE(318),
        [sym_binary_operator] = STATE(41),
        [sym_subscript] = STATE(41),
        [sym_call] = STATE(41),
        [sym_list] = STATE(41),
        [sym_list_comprehension] = STATE(41),
        [sym_dictionary] = STATE(41),
        [sym_dictionary_comprehension] = STATE(41),
        [sym_set] = STATE(41),
        [sym_set_comprehension] = STATE(41),
        [anon_sym_LBRACK] = ACTIONS(119),
        [anon_sym_LBRACE] = ACTIONS(121),
        [sym_number] = ACTIONS(123),
        [sym_identifier] = ACTIONS(123),
        [sym_comment] = ACTIONS(75),
    },
    [325] = {
        [sym__simple_statement] = STATE(279),
        [sym_print_statement] = STATE(5),
        [sym_expression_statement] = STATE(5),
        [sym_return_statement] = STATE(5),
        [sym_delete_statement] = STATE(5),
        [sym__suite] = STATE(326),
        [sym__expression] = STATE(23),
        [sym_binary_operator] = STATE(16),
        [sym_subscript] = STATE(16),
        [sym_call] = STATE(16),
        [sym_list] = STATE(16),
        [sym_list_comprehension] = STATE(16),
        [sym_dictionary] = STATE(16),
        [sym_dictionary_comprehension] = STATE(16),
        [sym_set] = STATE(16),
        [sym_set_comprehension] = STATE(16),
        [anon_sym_print] = ACTIONS(85),
        [anon_sym_return] = ACTIONS(87),
        [anon_sym_del] = ACTIONS(89),
        [sym_pass_statement] = ACTIONS(91),
        [sym_break_statement] = ACTIONS(91),
        [sym_continue_statement] = ACTIONS(91),
        [anon_sym_LBRACK] = ACTIONS(109),
        [anon_sym_LBRACE] = ACTIONS(111),
        [sym_number] = ACTIONS(113),
        [sym_identifier] = ACTIONS(115),
        [sym_comment] = ACTIONS(75),
        [sym__indent] = ACTIONS(643),
    },
    [326] = {
        [anon_sym_print] = ACTIONS(741),
        [anon_sym_return] = ACTIONS(741),
        [anon_sym_del] = ACTIONS(741),
        [sym_pass_statement] = ACTIONS(741),
        [sym_break_statement] = ACTIONS(741),
        [sym_continue_statement] = ACTIONS(741),
        [anon_sym_if] = ACTIONS(741),
        [anon_sym_for] = ACTIONS(741),
        [anon_sym_while] = ACTIONS(741),
        [anon_sym_try] = ACTIONS(741),
        [anon_sym_with] = ACTIONS(741),
        [anon_sym_def] = ACTIONS(741),
        [anon_sym_class] = ACTIONS(741),
        [anon_sym_AT] = ACTIONS(743),
        [anon_sym_LBRACK] = ACTIONS(743),
        [anon_sym_LBRACE] = ACTIONS(743),
        [sym_number] = ACTIONS(741),
        [sym_identifier] = ACTIONS(745),
        [sym_comment] = ACTIONS(75),
        [sym__dedent] = ACTIONS(743),
    },
    [327] = {
        [anon_sym_COMMA] = ACTIONS(747),
        [anon_sym_COLON] = ACTIONS(747),
        [sym_comment] = ACTIONS(75),
    },
    [328] = {
        [anon_sym_print] = ACTIONS(749),
        [anon_sym_return] = ACTIONS(749),
        [anon_sym_del] = ACTIONS(749),
        [sym_pass_statement] = ACTIONS(749),
        [sym_break_statement] = ACTIONS(749),
        [sym_continue_statement] = ACTIONS(749),
        [anon_sym_if] = ACTIONS(749),
        [anon_sym_for] = ACTIONS(749),
        [anon_sym_while] = ACTIONS(749),
        [anon_sym_try] = ACTIONS(749),
        [anon_sym_with] = ACTIONS(749),
        [anon_sym_def] = ACTIONS(749),
        [anon_sym_class] = ACTIONS(749),
        [anon_sym_AT] = ACTIONS(751),
        [anon_sym_LBRACK] = ACTIONS(751),
        [anon_sym_LBRACE] = ACTIONS(751),
        [sym_number] = ACTIONS(749),
        [sym_identifier] = ACTIONS(753),
        [sym_comment] = ACTIONS(75),
        [sym__dedent] = ACTIONS(751),
    },
    [329] = {
        [anon_sym_COMMA] = ACTIONS(755),
        [anon_sym_COLON] = ACTIONS(755),
        [sym_comment] = ACTIONS(75),
    },
    [330] = {
        [sym__simple_statement] = STATE(332),
        [sym_print_statement] = STATE(5),
        [sym_expression_statement] = STATE(5),
        [sym_return_statement] = STATE(5),
        [sym_delete_statement] = STATE(5),
        [sym__suite] = STATE(333),
        [sym__expression] = STATE(23),
        [sym_binary_operator] = STATE(16),
        [sym_subscript] = STATE(16),
        [sym_call] = STATE(16),
        [sym_list] = STATE(16),
        [sym_list_comprehension] = STATE(16),
        [sym_dictionary] = STATE(16),
        [sym_dictionary_comprehension] = STATE(16),
        [sym_set] = STATE(16),
        [sym_set_comprehension] = STATE(16),
        [anon_sym_print] = ACTIONS(85),
        [anon_sym_return] = ACTIONS(87),
        [anon_sym_del] = ACTIONS(89),
        [sym_pass_statement] = ACTIONS(91),
        [sym_break_statement] = ACTIONS(91),
        [sym_continue_statement] = ACTIONS(91),
        [anon_sym_LBRACK] = ACTIONS(109),
        [anon_sym_LBRACE] = ACTIONS(111),
        [sym_number] = ACTIONS(113),
        [sym_identifier] = ACTIONS(115),
        [sym_comment] = ACTIONS(75),
        [sym__indent] = ACTIONS(757),
    },
    [331] = {
        [sym__statement] = STATE(262),
        [sym__simple_statement] = STATE(263),
        [sym_print_statement] = STATE(5),
        [sym_expression_statement] = STATE(5),
        [sym_return_statement] = STATE(5),
        [sym_delete_statement] = STATE(5),
        [sym__compound_statement] = STATE(264),
        [sym_if_statement] = STATE(265),
        [sym_for_statement] = STATE(265),
        [sym_while_statement] = STATE(265),
        [sym_try_statement] = STATE(265),
        [sym_with_statement] = STATE(265),
        [sym_function_definition] = STATE(265),
        [sym_class_definition] = STATE(265),
        [sym_decorated_definition] = STATE(265),
        [sym_decorator] = STATE(22),
        [sym__expression] = STATE(23),
        [sym_binary_operator] = STATE(16),
        [sym_subscript] = STATE(16),
        [sym_call] = STATE(16),
        [sym_list] = STATE(16),
        [sym_list_comprehension] = STATE(16),
        [sym_dictionary] = STATE(16),
        [sym_dictionary_comprehension] = STATE(16),
        [sym_set] = STATE(16),
        [sym_set_comprehension] = STATE(16),
        [aux_sym_module_repeat1] = STATE(356),
        [aux_sym_decorated_definition_repeat1] = STATE(267),
        [anon_sym_print] = ACTIONS(85),
        [anon_sym_return] = ACTIONS(87),
        [anon_sym_del] = ACTIONS(89),
        [sym_pass_statement] = ACTIONS(91),
        [sym_break_statement] = ACTIONS(91),
        [sym_continue_statement] = ACTIONS(91),
        [anon_sym_if] = ACTIONS(591),
        [anon_sym_for] = ACTIONS(593),
        [anon_sym_while] = ACTIONS(595),
        [anon_sym_try] = ACTIONS(597),
        [anon_sym_with] = ACTIONS(599),
        [anon_sym_def] = ACTIONS(601),
        [anon_sym_class] = ACTIONS(603),
        [anon_sym_AT] = ACTIONS(107),
        [anon_sym_LBRACK] = ACTIONS(109),
        [anon_sym_LBRACE] = ACTIONS(111),
        [sym_number] = ACTIONS(113),
        [sym_identifier] = ACTIONS(115),
        [sym_comment] = ACTIONS(75),
        [sym__dedent] = ACTIONS(759),
    },
    [332] = {
        [sym_comment] = ACTIONS(75),
        [sym__newline] = ACTIONS(759),
    },
    [333] = {
        [sym_except_clause] = STATE(336),
        [sym_finally_clause] = STATE(337),
        [aux_sym_try_statement_repeat1] = STATE(338),
        [anon_sym_except] = ACTIONS(761),
        [anon_sym_finally] = ACTIONS(763),
        [sym_comment] = ACTIONS(75),
    },
    [334] = {
        [sym__expression] = STATE(348),
        [sym_binary_operator] = STATE(41),
        [sym_subscript] = STATE(41),
        [sym_call] = STATE(41),
        [sym_list] = STATE(41),
        [sym_list_comprehension] = STATE(41),
        [sym_dictionary] = STATE(41),
        [sym_dictionary_comprehension] = STATE(41),
        [sym_set] = STATE(41),
        [sym_set_comprehension] = STATE(41),
        [anon_sym_LBRACK] = ACTIONS(119),
        [anon_sym_LBRACE] = ACTIONS(121),
        [sym_number] = ACTIONS(123),
        [sym_identifier] = ACTIONS(123),
        [sym_comment] = ACTIONS(75),
    },
    [335] = {
        [anon_sym_COLON] = ACTIONS(765),
        [sym_comment] = ACTIONS(75),
    },
    [336] = {
        [anon_sym_print] = ACTIONS(767),
        [anon_sym_return] = ACTIONS(767),
        [anon_sym_del] = ACTIONS(767),
        [sym_pass_statement] = ACTIONS(767),
        [sym_break_statement] = ACTIONS(767),
        [sym_continue_statement] = ACTIONS(767),
        [anon_sym_if] = ACTIONS(767),
        [anon_sym_else] = ACTIONS(767),
        [anon_sym_for] = ACTIONS(767),
        [anon_sym_while] = ACTIONS(767),
        [anon_sym_try] = ACTIONS(767),
        [anon_sym_except] = ACTIONS(767),
        [anon_sym_finally] = ACTIONS(767),
        [anon_sym_with] = ACTIONS(767),
        [anon_sym_def] = ACTIONS(767),
        [anon_sym_class] = ACTIONS(767),
        [anon_sym_AT] = ACTIONS(769),
        [anon_sym_LBRACK] = ACTIONS(769),
        [anon_sym_LBRACE] = ACTIONS(769),
        [sym_number] = ACTIONS(767),
        [sym_identifier] = ACTIONS(771),
        [sym_comment] = ACTIONS(75),
        [sym__dedent] = ACTIONS(769),
    },
    [337] = {
        [anon_sym_print] = ACTIONS(773),
        [anon_sym_return] = ACTIONS(773),
        [anon_sym_del] = ACTIONS(773),
        [sym_pass_statement] = ACTIONS(773),
        [sym_break_statement] = ACTIONS(773),
        [sym_continue_statement] = ACTIONS(773),
        [anon_sym_if] = ACTIONS(773),
        [anon_sym_for] = ACTIONS(773),
        [anon_sym_while] = ACTIONS(773),
        [anon_sym_try] = ACTIONS(773),
        [anon_sym_with] = ACTIONS(773),
        [anon_sym_def] = ACTIONS(773),
        [anon_sym_class] = ACTIONS(773),
        [anon_sym_AT] = ACTIONS(775),
        [anon_sym_LBRACK] = ACTIONS(775),
        [anon_sym_LBRACE] = ACTIONS(775),
        [sym_number] = ACTIONS(773),
        [sym_identifier] = ACTIONS(777),
        [sym_comment] = ACTIONS(75),
        [sym__dedent] = ACTIONS(775),
    },
    [338] = {
        [sym_else_clause] = STATE(340),
        [sym_except_clause] = STATE(341),
        [sym_finally_clause] = STATE(342),
        [anon_sym_print] = ACTIONS(773),
        [anon_sym_return] = ACTIONS(773),
        [anon_sym_del] = ACTIONS(773),
        [sym_pass_statement] = ACTIONS(773),
        [sym_break_statement] = ACTIONS(773),
        [sym_continue_statement] = ACTIONS(773),
        [anon_sym_if] = ACTIONS(773),
        [anon_sym_else] = ACTIONS(779),
        [anon_sym_for] = ACTIONS(773),
        [anon_sym_while] = ACTIONS(773),
        [anon_sym_try] = ACTIONS(773),
        [anon_sym_except] = ACTIONS(781),
        [anon_sym_finally] = ACTIONS(783),
        [anon_sym_with] = ACTIONS(773),
        [anon_sym_def] = ACTIONS(773),
        [anon_sym_class] = ACTIONS(773),
        [anon_sym_AT] = ACTIONS(775),
        [anon_sym_LBRACK] = ACTIONS(775),
        [anon_sym_LBRACE] = ACTIONS(775),
        [sym_number] = ACTIONS(773),
        [sym_identifier] = ACTIONS(777),
        [sym_comment] = ACTIONS(75),
        [sym__dedent] = ACTIONS(775),
    },
    [339] = {
        [anon_sym_COLON] = ACTIONS(785),
        [sym_comment] = ACTIONS(75),
    },
    [340] = {
        [sym_finally_clause] = STATE(343),
        [anon_sym_print] = ACTIONS(787),
        [anon_sym_return] = ACTIONS(787),
        [anon_sym_del] = ACTIONS(787),
        [sym_pass_statement] = ACTIONS(787),
        [sym_break_statement] = ACTIONS(787),
        [sym_continue_statement] = ACTIONS(787),
        [anon_sym_if] = ACTIONS(787),
        [anon_sym_for] = ACTIONS(787),
        [anon_sym_while] = ACTIONS(787),
        [anon_sym_try] = ACTIONS(787),
        [anon_sym_finally] = ACTIONS(783),
        [anon_sym_with] = ACTIONS(787),
        [anon_sym_def] = ACTIONS(787),
        [anon_sym_class] = ACTIONS(787),
        [anon_sym_AT] = ACTIONS(789),
        [anon_sym_LBRACK] = ACTIONS(789),
        [anon_sym_LBRACE] = ACTIONS(789),
        [sym_number] = ACTIONS(787),
        [sym_identifier] = ACTIONS(791),
        [sym_comment] = ACTIONS(75),
        [sym__dedent] = ACTIONS(789),
    },
    [341] = {
        [anon_sym_print] = ACTIONS(793),
        [anon_sym_return] = ACTIONS(793),
        [anon_sym_del] = ACTIONS(793),
        [sym_pass_statement] = ACTIONS(793),
        [sym_break_statement] = ACTIONS(793),
        [sym_continue_statement] = ACTIONS(793),
        [anon_sym_if] = ACTIONS(793),
        [anon_sym_else] = ACTIONS(793),
        [anon_sym_for] = ACTIONS(793),
        [anon_sym_while] = ACTIONS(793),
        [anon_sym_try] = ACTIONS(793),
        [anon_sym_except] = ACTIONS(793),
        [anon_sym_finally] = ACTIONS(793),
        [anon_sym_with] = ACTIONS(793),
        [anon_sym_def] = ACTIONS(793),
        [anon_sym_class] = ACTIONS(793),
        [anon_sym_AT] = ACTIONS(795),
        [anon_sym_LBRACK] = ACTIONS(795),
        [anon_sym_LBRACE] = ACTIONS(795),
        [sym_number] = ACTIONS(793),
        [sym_identifier] = ACTIONS(797),
        [sym_comment] = ACTIONS(75),
        [sym__dedent] = ACTIONS(795),
    },
    [342] = {
        [anon_sym_print] = ACTIONS(787),
        [anon_sym_return] = ACTIONS(787),
        [anon_sym_del] = ACTIONS(787),
        [sym_pass_statement] = ACTIONS(787),
        [sym_break_statement] = ACTIONS(787),
        [sym_continue_statement] = ACTIONS(787),
        [anon_sym_if] = ACTIONS(787),
        [anon_sym_for] = ACTIONS(787),
        [anon_sym_while] = ACTIONS(787),
        [anon_sym_try] = ACTIONS(787),
        [anon_sym_with] = ACTIONS(787),
        [anon_sym_def] = ACTIONS(787),
        [anon_sym_class] = ACTIONS(787),
        [anon_sym_AT] = ACTIONS(789),
        [anon_sym_LBRACK] = ACTIONS(789),
        [anon_sym_LBRACE] = ACTIONS(789),
        [sym_number] = ACTIONS(787),
        [sym_identifier] = ACTIONS(791),
        [sym_comment] = ACTIONS(75),
        [sym__dedent] = ACTIONS(789),
    },
    [343] = {
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
        [anon_sym_AT] = ACTIONS(801),
        [anon_sym_LBRACK] = ACTIONS(801),
        [anon_sym_LBRACE] = ACTIONS(801),
        [sym_number] = ACTIONS(799),
        [sym_identifier] = ACTIONS(803),
        [sym_comment] = ACTIONS(75),
        [sym__dedent] = ACTIONS(801),
    },
    [344] = {
        [sym__simple_statement] = STATE(279),
        [sym_print_statement] = STATE(5),
        [sym_expression_statement] = STATE(5),
        [sym_return_statement] = STATE(5),
        [sym_delete_statement] = STATE(5),
        [sym__suite] = STATE(345),
        [sym__expression] = STATE(23),
        [sym_binary_operator] = STATE(16),
        [sym_subscript] = STATE(16),
        [sym_call] = STATE(16),
        [sym_list] = STATE(16),
        [sym_list_comprehension] = STATE(16),
        [sym_dictionary] = STATE(16),
        [sym_dictionary_comprehension] = STATE(16),
        [sym_set] = STATE(16),
        [sym_set_comprehension] = STATE(16),
        [anon_sym_print] = ACTIONS(85),
        [anon_sym_return] = ACTIONS(87),
        [anon_sym_del] = ACTIONS(89),
        [sym_pass_statement] = ACTIONS(91),
        [sym_break_statement] = ACTIONS(91),
        [sym_continue_statement] = ACTIONS(91),
        [anon_sym_LBRACK] = ACTIONS(109),
        [anon_sym_LBRACE] = ACTIONS(111),
        [sym_number] = ACTIONS(113),
        [sym_identifier] = ACTIONS(115),
        [sym_comment] = ACTIONS(75),
        [sym__indent] = ACTIONS(643),
    },
    [345] = {
        [anon_sym_print] = ACTIONS(805),
        [anon_sym_return] = ACTIONS(805),
        [anon_sym_del] = ACTIONS(805),
        [sym_pass_statement] = ACTIONS(805),
        [sym_break_statement] = ACTIONS(805),
        [sym_continue_statement] = ACTIONS(805),
        [anon_sym_if] = ACTIONS(805),
        [anon_sym_for] = ACTIONS(805),
        [anon_sym_while] = ACTIONS(805),
        [anon_sym_try] = ACTIONS(805),
        [anon_sym_finally] = ACTIONS(805),
        [anon_sym_with] = ACTIONS(805),
        [anon_sym_def] = ACTIONS(805),
        [anon_sym_class] = ACTIONS(805),
        [anon_sym_AT] = ACTIONS(807),
        [anon_sym_LBRACK] = ACTIONS(807),
        [anon_sym_LBRACE] = ACTIONS(807),
        [sym_number] = ACTIONS(805),
        [sym_identifier] = ACTIONS(809),
        [sym_comment] = ACTIONS(75),
        [sym__dedent] = ACTIONS(807),
    },
    [346] = {
        [sym__simple_statement] = STATE(279),
        [sym_print_statement] = STATE(5),
        [sym_expression_statement] = STATE(5),
        [sym_return_statement] = STATE(5),
        [sym_delete_statement] = STATE(5),
        [sym__suite] = STATE(347),
        [sym__expression] = STATE(23),
        [sym_binary_operator] = STATE(16),
        [sym_subscript] = STATE(16),
        [sym_call] = STATE(16),
        [sym_list] = STATE(16),
        [sym_list_comprehension] = STATE(16),
        [sym_dictionary] = STATE(16),
        [sym_dictionary_comprehension] = STATE(16),
        [sym_set] = STATE(16),
        [sym_set_comprehension] = STATE(16),
        [anon_sym_print] = ACTIONS(85),
        [anon_sym_return] = ACTIONS(87),
        [anon_sym_del] = ACTIONS(89),
        [sym_pass_statement] = ACTIONS(91),
        [sym_break_statement] = ACTIONS(91),
        [sym_continue_statement] = ACTIONS(91),
        [anon_sym_LBRACK] = ACTIONS(109),
        [anon_sym_LBRACE] = ACTIONS(111),
        [sym_number] = ACTIONS(113),
        [sym_identifier] = ACTIONS(115),
        [sym_comment] = ACTIONS(75),
        [sym__indent] = ACTIONS(643),
    },
    [347] = {
        [anon_sym_print] = ACTIONS(811),
        [anon_sym_return] = ACTIONS(811),
        [anon_sym_del] = ACTIONS(811),
        [sym_pass_statement] = ACTIONS(811),
        [sym_break_statement] = ACTIONS(811),
        [sym_continue_statement] = ACTIONS(811),
        [anon_sym_if] = ACTIONS(811),
        [anon_sym_for] = ACTIONS(811),
        [anon_sym_while] = ACTIONS(811),
        [anon_sym_try] = ACTIONS(811),
        [anon_sym_with] = ACTIONS(811),
        [anon_sym_def] = ACTIONS(811),
        [anon_sym_class] = ACTIONS(811),
        [anon_sym_AT] = ACTIONS(813),
        [anon_sym_LBRACK] = ACTIONS(813),
        [anon_sym_LBRACE] = ACTIONS(813),
        [sym_number] = ACTIONS(811),
        [sym_identifier] = ACTIONS(815),
        [sym_comment] = ACTIONS(75),
        [sym__dedent] = ACTIONS(813),
    },
    [348] = {
        [anon_sym_COMMA] = ACTIONS(817),
        [anon_sym_COLON] = ACTIONS(819),
        [anon_sym_as] = ACTIONS(817),
        [anon_sym_LPAREN] = ACTIONS(225),
        [anon_sym_STAR] = ACTIONS(227),
        [anon_sym_PLUS] = ACTIONS(229),
        [anon_sym_DASH] = ACTIONS(229),
        [anon_sym_SLASH] = ACTIONS(231),
        [anon_sym_STAR_STAR] = ACTIONS(233),
        [anon_sym_PIPE] = ACTIONS(235),
        [anon_sym_AMP] = ACTIONS(237),
        [anon_sym_CARET] = ACTIONS(239),
        [anon_sym_LT_LT] = ACTIONS(229),
        [anon_sym_GT_GT] = ACTIONS(229),
        [anon_sym_and] = ACTIONS(237),
        [anon_sym_or] = ACTIONS(235),
        [anon_sym_LBRACK] = ACTIONS(241),
        [sym_comment] = ACTIONS(75),
    },
    [349] = {
        [sym__expression] = STATE(351),
        [sym_binary_operator] = STATE(41),
        [sym_subscript] = STATE(41),
        [sym_call] = STATE(41),
        [sym_list] = STATE(41),
        [sym_list_comprehension] = STATE(41),
        [sym_dictionary] = STATE(41),
        [sym_dictionary_comprehension] = STATE(41),
        [sym_set] = STATE(41),
        [sym_set_comprehension] = STATE(41),
        [anon_sym_LBRACK] = ACTIONS(119),
        [anon_sym_LBRACE] = ACTIONS(121),
        [sym_number] = ACTIONS(123),
        [sym_identifier] = ACTIONS(123),
        [sym_comment] = ACTIONS(75),
    },
    [350] = {
        [sym__simple_statement] = STATE(279),
        [sym_print_statement] = STATE(5),
        [sym_expression_statement] = STATE(5),
        [sym_return_statement] = STATE(5),
        [sym_delete_statement] = STATE(5),
        [sym__suite] = STATE(354),
        [sym__expression] = STATE(23),
        [sym_binary_operator] = STATE(16),
        [sym_subscript] = STATE(16),
        [sym_call] = STATE(16),
        [sym_list] = STATE(16),
        [sym_list_comprehension] = STATE(16),
        [sym_dictionary] = STATE(16),
        [sym_dictionary_comprehension] = STATE(16),
        [sym_set] = STATE(16),
        [sym_set_comprehension] = STATE(16),
        [anon_sym_print] = ACTIONS(85),
        [anon_sym_return] = ACTIONS(87),
        [anon_sym_del] = ACTIONS(89),
        [sym_pass_statement] = ACTIONS(91),
        [sym_break_statement] = ACTIONS(91),
        [sym_continue_statement] = ACTIONS(91),
        [anon_sym_LBRACK] = ACTIONS(109),
        [anon_sym_LBRACE] = ACTIONS(111),
        [sym_number] = ACTIONS(113),
        [sym_identifier] = ACTIONS(115),
        [sym_comment] = ACTIONS(75),
        [sym__indent] = ACTIONS(643),
    },
    [351] = {
        [anon_sym_COLON] = ACTIONS(821),
        [anon_sym_LPAREN] = ACTIONS(225),
        [anon_sym_STAR] = ACTIONS(227),
        [anon_sym_PLUS] = ACTIONS(229),
        [anon_sym_DASH] = ACTIONS(229),
        [anon_sym_SLASH] = ACTIONS(231),
        [anon_sym_STAR_STAR] = ACTIONS(233),
        [anon_sym_PIPE] = ACTIONS(235),
        [anon_sym_AMP] = ACTIONS(237),
        [anon_sym_CARET] = ACTIONS(239),
        [anon_sym_LT_LT] = ACTIONS(229),
        [anon_sym_GT_GT] = ACTIONS(229),
        [anon_sym_and] = ACTIONS(237),
        [anon_sym_or] = ACTIONS(235),
        [anon_sym_LBRACK] = ACTIONS(241),
        [sym_comment] = ACTIONS(75),
    },
    [352] = {
        [sym__simple_statement] = STATE(279),
        [sym_print_statement] = STATE(5),
        [sym_expression_statement] = STATE(5),
        [sym_return_statement] = STATE(5),
        [sym_delete_statement] = STATE(5),
        [sym__suite] = STATE(353),
        [sym__expression] = STATE(23),
        [sym_binary_operator] = STATE(16),
        [sym_subscript] = STATE(16),
        [sym_call] = STATE(16),
        [sym_list] = STATE(16),
        [sym_list_comprehension] = STATE(16),
        [sym_dictionary] = STATE(16),
        [sym_dictionary_comprehension] = STATE(16),
        [sym_set] = STATE(16),
        [sym_set_comprehension] = STATE(16),
        [anon_sym_print] = ACTIONS(85),
        [anon_sym_return] = ACTIONS(87),
        [anon_sym_del] = ACTIONS(89),
        [sym_pass_statement] = ACTIONS(91),
        [sym_break_statement] = ACTIONS(91),
        [sym_continue_statement] = ACTIONS(91),
        [anon_sym_LBRACK] = ACTIONS(109),
        [anon_sym_LBRACE] = ACTIONS(111),
        [sym_number] = ACTIONS(113),
        [sym_identifier] = ACTIONS(115),
        [sym_comment] = ACTIONS(75),
        [sym__indent] = ACTIONS(643),
    },
    [353] = {
        [anon_sym_print] = ACTIONS(823),
        [anon_sym_return] = ACTIONS(823),
        [anon_sym_del] = ACTIONS(823),
        [sym_pass_statement] = ACTIONS(823),
        [sym_break_statement] = ACTIONS(823),
        [sym_continue_statement] = ACTIONS(823),
        [anon_sym_if] = ACTIONS(823),
        [anon_sym_else] = ACTIONS(823),
        [anon_sym_for] = ACTIONS(823),
        [anon_sym_while] = ACTIONS(823),
        [anon_sym_try] = ACTIONS(823),
        [anon_sym_except] = ACTIONS(823),
        [anon_sym_finally] = ACTIONS(823),
        [anon_sym_with] = ACTIONS(823),
        [anon_sym_def] = ACTIONS(823),
        [anon_sym_class] = ACTIONS(823),
        [anon_sym_AT] = ACTIONS(825),
        [anon_sym_LBRACK] = ACTIONS(825),
        [anon_sym_LBRACE] = ACTIONS(825),
        [sym_number] = ACTIONS(823),
        [sym_identifier] = ACTIONS(827),
        [sym_comment] = ACTIONS(75),
        [sym__dedent] = ACTIONS(825),
    },
    [354] = {
        [anon_sym_print] = ACTIONS(829),
        [anon_sym_return] = ACTIONS(829),
        [anon_sym_del] = ACTIONS(829),
        [sym_pass_statement] = ACTIONS(829),
        [sym_break_statement] = ACTIONS(829),
        [sym_continue_statement] = ACTIONS(829),
        [anon_sym_if] = ACTIONS(829),
        [anon_sym_else] = ACTIONS(829),
        [anon_sym_for] = ACTIONS(829),
        [anon_sym_while] = ACTIONS(829),
        [anon_sym_try] = ACTIONS(829),
        [anon_sym_except] = ACTIONS(829),
        [anon_sym_finally] = ACTIONS(829),
        [anon_sym_with] = ACTIONS(829),
        [anon_sym_def] = ACTIONS(829),
        [anon_sym_class] = ACTIONS(829),
        [anon_sym_AT] = ACTIONS(831),
        [anon_sym_LBRACK] = ACTIONS(831),
        [anon_sym_LBRACE] = ACTIONS(831),
        [sym_number] = ACTIONS(829),
        [sym_identifier] = ACTIONS(833),
        [sym_comment] = ACTIONS(75),
        [sym__dedent] = ACTIONS(831),
    },
    [355] = {
        [anon_sym_except] = ACTIONS(613),
        [anon_sym_finally] = ACTIONS(613),
        [sym_comment] = ACTIONS(75),
    },
    [356] = {
        [sym__statement] = STATE(270),
        [sym__simple_statement] = STATE(263),
        [sym_print_statement] = STATE(5),
        [sym_expression_statement] = STATE(5),
        [sym_return_statement] = STATE(5),
        [sym_delete_statement] = STATE(5),
        [sym__compound_statement] = STATE(264),
        [sym_if_statement] = STATE(265),
        [sym_for_statement] = STATE(265),
        [sym_while_statement] = STATE(265),
        [sym_try_statement] = STATE(265),
        [sym_with_statement] = STATE(265),
        [sym_function_definition] = STATE(265),
        [sym_class_definition] = STATE(265),
        [sym_decorated_definition] = STATE(265),
        [sym_decorator] = STATE(22),
        [sym__expression] = STATE(23),
        [sym_binary_operator] = STATE(16),
        [sym_subscript] = STATE(16),
        [sym_call] = STATE(16),
        [sym_list] = STATE(16),
        [sym_list_comprehension] = STATE(16),
        [sym_dictionary] = STATE(16),
        [sym_dictionary_comprehension] = STATE(16),
        [sym_set] = STATE(16),
        [sym_set_comprehension] = STATE(16),
        [aux_sym_decorated_definition_repeat1] = STATE(267),
        [anon_sym_print] = ACTIONS(85),
        [anon_sym_return] = ACTIONS(87),
        [anon_sym_del] = ACTIONS(89),
        [sym_pass_statement] = ACTIONS(91),
        [sym_break_statement] = ACTIONS(91),
        [sym_continue_statement] = ACTIONS(91),
        [anon_sym_if] = ACTIONS(591),
        [anon_sym_for] = ACTIONS(593),
        [anon_sym_while] = ACTIONS(595),
        [anon_sym_try] = ACTIONS(597),
        [anon_sym_with] = ACTIONS(599),
        [anon_sym_def] = ACTIONS(601),
        [anon_sym_class] = ACTIONS(603),
        [anon_sym_AT] = ACTIONS(107),
        [anon_sym_LBRACK] = ACTIONS(109),
        [anon_sym_LBRACE] = ACTIONS(111),
        [sym_number] = ACTIONS(113),
        [sym_identifier] = ACTIONS(115),
        [sym_comment] = ACTIONS(75),
        [sym__dedent] = ACTIONS(835),
    },
    [357] = {
        [anon_sym_except] = ACTIONS(633),
        [anon_sym_finally] = ACTIONS(633),
        [sym_comment] = ACTIONS(75),
    },
    [358] = {
        [anon_sym_COLON] = ACTIONS(837),
        [anon_sym_LPAREN] = ACTIONS(225),
        [anon_sym_STAR] = ACTIONS(227),
        [anon_sym_PLUS] = ACTIONS(229),
        [anon_sym_DASH] = ACTIONS(229),
        [anon_sym_SLASH] = ACTIONS(231),
        [anon_sym_STAR_STAR] = ACTIONS(233),
        [anon_sym_PIPE] = ACTIONS(235),
        [anon_sym_AMP] = ACTIONS(237),
        [anon_sym_CARET] = ACTIONS(239),
        [anon_sym_LT_LT] = ACTIONS(229),
        [anon_sym_GT_GT] = ACTIONS(229),
        [anon_sym_and] = ACTIONS(237),
        [anon_sym_or] = ACTIONS(235),
        [anon_sym_LBRACK] = ACTIONS(241),
        [sym_comment] = ACTIONS(75),
    },
    [359] = {
        [sym__simple_statement] = STATE(279),
        [sym_print_statement] = STATE(5),
        [sym_expression_statement] = STATE(5),
        [sym_return_statement] = STATE(5),
        [sym_delete_statement] = STATE(5),
        [sym__suite] = STATE(360),
        [sym__expression] = STATE(23),
        [sym_binary_operator] = STATE(16),
        [sym_subscript] = STATE(16),
        [sym_call] = STATE(16),
        [sym_list] = STATE(16),
        [sym_list_comprehension] = STATE(16),
        [sym_dictionary] = STATE(16),
        [sym_dictionary_comprehension] = STATE(16),
        [sym_set] = STATE(16),
        [sym_set_comprehension] = STATE(16),
        [anon_sym_print] = ACTIONS(85),
        [anon_sym_return] = ACTIONS(87),
        [anon_sym_del] = ACTIONS(89),
        [sym_pass_statement] = ACTIONS(91),
        [sym_break_statement] = ACTIONS(91),
        [sym_continue_statement] = ACTIONS(91),
        [anon_sym_LBRACK] = ACTIONS(109),
        [anon_sym_LBRACE] = ACTIONS(111),
        [sym_number] = ACTIONS(113),
        [sym_identifier] = ACTIONS(115),
        [sym_comment] = ACTIONS(75),
        [sym__indent] = ACTIONS(643),
    },
    [360] = {
        [sym_else_clause] = STATE(361),
        [anon_sym_print] = ACTIONS(839),
        [anon_sym_return] = ACTIONS(839),
        [anon_sym_del] = ACTIONS(839),
        [sym_pass_statement] = ACTIONS(839),
        [sym_break_statement] = ACTIONS(839),
        [sym_continue_statement] = ACTIONS(839),
        [anon_sym_if] = ACTIONS(839),
        [anon_sym_else] = ACTIONS(779),
        [anon_sym_for] = ACTIONS(839),
        [anon_sym_while] = ACTIONS(839),
        [anon_sym_try] = ACTIONS(839),
        [anon_sym_with] = ACTIONS(839),
        [anon_sym_def] = ACTIONS(839),
        [anon_sym_class] = ACTIONS(839),
        [anon_sym_AT] = ACTIONS(841),
        [anon_sym_LBRACK] = ACTIONS(841),
        [anon_sym_LBRACE] = ACTIONS(841),
        [sym_number] = ACTIONS(839),
        [sym_identifier] = ACTIONS(843),
        [sym_comment] = ACTIONS(75),
        [sym__dedent] = ACTIONS(841),
    },
    [361] = {
        [anon_sym_print] = ACTIONS(845),
        [anon_sym_return] = ACTIONS(845),
        [anon_sym_del] = ACTIONS(845),
        [sym_pass_statement] = ACTIONS(845),
        [sym_break_statement] = ACTIONS(845),
        [sym_continue_statement] = ACTIONS(845),
        [anon_sym_if] = ACTIONS(845),
        [anon_sym_for] = ACTIONS(845),
        [anon_sym_while] = ACTIONS(845),
        [anon_sym_try] = ACTIONS(845),
        [anon_sym_with] = ACTIONS(845),
        [anon_sym_def] = ACTIONS(845),
        [anon_sym_class] = ACTIONS(845),
        [anon_sym_AT] = ACTIONS(847),
        [anon_sym_LBRACK] = ACTIONS(847),
        [anon_sym_LBRACE] = ACTIONS(847),
        [sym_number] = ACTIONS(845),
        [sym_identifier] = ACTIONS(849),
        [sym_comment] = ACTIONS(75),
        [sym__dedent] = ACTIONS(847),
    },
    [362] = {
        [anon_sym_in] = ACTIONS(851),
        [sym_comment] = ACTIONS(75),
    },
    [363] = {
        [sym_expression_list] = STATE(364),
        [sym__expression] = STATE(124),
        [sym_binary_operator] = STATE(41),
        [sym_subscript] = STATE(41),
        [sym_call] = STATE(41),
        [sym_list] = STATE(41),
        [sym_list_comprehension] = STATE(41),
        [sym_dictionary] = STATE(41),
        [sym_dictionary_comprehension] = STATE(41),
        [sym_set] = STATE(41),
        [sym_set_comprehension] = STATE(41),
        [anon_sym_LBRACK] = ACTIONS(119),
        [anon_sym_LBRACE] = ACTIONS(121),
        [sym_number] = ACTIONS(123),
        [sym_identifier] = ACTIONS(123),
        [sym_comment] = ACTIONS(75),
    },
    [364] = {
        [anon_sym_COLON] = ACTIONS(853),
        [sym_comment] = ACTIONS(75),
    },
    [365] = {
        [sym__simple_statement] = STATE(279),
        [sym_print_statement] = STATE(5),
        [sym_expression_statement] = STATE(5),
        [sym_return_statement] = STATE(5),
        [sym_delete_statement] = STATE(5),
        [sym__suite] = STATE(366),
        [sym__expression] = STATE(23),
        [sym_binary_operator] = STATE(16),
        [sym_subscript] = STATE(16),
        [sym_call] = STATE(16),
        [sym_list] = STATE(16),
        [sym_list_comprehension] = STATE(16),
        [sym_dictionary] = STATE(16),
        [sym_dictionary_comprehension] = STATE(16),
        [sym_set] = STATE(16),
        [sym_set_comprehension] = STATE(16),
        [anon_sym_print] = ACTIONS(85),
        [anon_sym_return] = ACTIONS(87),
        [anon_sym_del] = ACTIONS(89),
        [sym_pass_statement] = ACTIONS(91),
        [sym_break_statement] = ACTIONS(91),
        [sym_continue_statement] = ACTIONS(91),
        [anon_sym_LBRACK] = ACTIONS(109),
        [anon_sym_LBRACE] = ACTIONS(111),
        [sym_number] = ACTIONS(113),
        [sym_identifier] = ACTIONS(115),
        [sym_comment] = ACTIONS(75),
        [sym__indent] = ACTIONS(643),
    },
    [366] = {
        [sym_else_clause] = STATE(367),
        [anon_sym_print] = ACTIONS(855),
        [anon_sym_return] = ACTIONS(855),
        [anon_sym_del] = ACTIONS(855),
        [sym_pass_statement] = ACTIONS(855),
        [sym_break_statement] = ACTIONS(855),
        [sym_continue_statement] = ACTIONS(855),
        [anon_sym_if] = ACTIONS(855),
        [anon_sym_else] = ACTIONS(779),
        [anon_sym_for] = ACTIONS(855),
        [anon_sym_while] = ACTIONS(855),
        [anon_sym_try] = ACTIONS(855),
        [anon_sym_with] = ACTIONS(855),
        [anon_sym_def] = ACTIONS(855),
        [anon_sym_class] = ACTIONS(855),
        [anon_sym_AT] = ACTIONS(857),
        [anon_sym_LBRACK] = ACTIONS(857),
        [anon_sym_LBRACE] = ACTIONS(857),
        [sym_number] = ACTIONS(855),
        [sym_identifier] = ACTIONS(859),
        [sym_comment] = ACTIONS(75),
        [sym__dedent] = ACTIONS(857),
    },
    [367] = {
        [anon_sym_print] = ACTIONS(861),
        [anon_sym_return] = ACTIONS(861),
        [anon_sym_del] = ACTIONS(861),
        [sym_pass_statement] = ACTIONS(861),
        [sym_break_statement] = ACTIONS(861),
        [sym_continue_statement] = ACTIONS(861),
        [anon_sym_if] = ACTIONS(861),
        [anon_sym_for] = ACTIONS(861),
        [anon_sym_while] = ACTIONS(861),
        [anon_sym_try] = ACTIONS(861),
        [anon_sym_with] = ACTIONS(861),
        [anon_sym_def] = ACTIONS(861),
        [anon_sym_class] = ACTIONS(861),
        [anon_sym_AT] = ACTIONS(863),
        [anon_sym_LBRACK] = ACTIONS(863),
        [anon_sym_LBRACE] = ACTIONS(863),
        [sym_number] = ACTIONS(861),
        [sym_identifier] = ACTIONS(865),
        [sym_comment] = ACTIONS(75),
        [sym__dedent] = ACTIONS(863),
    },
    [368] = {
        [anon_sym_COLON] = ACTIONS(867),
        [anon_sym_LPAREN] = ACTIONS(225),
        [anon_sym_STAR] = ACTIONS(227),
        [anon_sym_PLUS] = ACTIONS(229),
        [anon_sym_DASH] = ACTIONS(229),
        [anon_sym_SLASH] = ACTIONS(231),
        [anon_sym_STAR_STAR] = ACTIONS(233),
        [anon_sym_PIPE] = ACTIONS(235),
        [anon_sym_AMP] = ACTIONS(237),
        [anon_sym_CARET] = ACTIONS(239),
        [anon_sym_LT_LT] = ACTIONS(229),
        [anon_sym_GT_GT] = ACTIONS(229),
        [anon_sym_and] = ACTIONS(237),
        [anon_sym_or] = ACTIONS(235),
        [anon_sym_LBRACK] = ACTIONS(241),
        [sym_comment] = ACTIONS(75),
    },
    [369] = {
        [sym__simple_statement] = STATE(279),
        [sym_print_statement] = STATE(5),
        [sym_expression_statement] = STATE(5),
        [sym_return_statement] = STATE(5),
        [sym_delete_statement] = STATE(5),
        [sym__suite] = STATE(370),
        [sym__expression] = STATE(23),
        [sym_binary_operator] = STATE(16),
        [sym_subscript] = STATE(16),
        [sym_call] = STATE(16),
        [sym_list] = STATE(16),
        [sym_list_comprehension] = STATE(16),
        [sym_dictionary] = STATE(16),
        [sym_dictionary_comprehension] = STATE(16),
        [sym_set] = STATE(16),
        [sym_set_comprehension] = STATE(16),
        [anon_sym_print] = ACTIONS(85),
        [anon_sym_return] = ACTIONS(87),
        [anon_sym_del] = ACTIONS(89),
        [sym_pass_statement] = ACTIONS(91),
        [sym_break_statement] = ACTIONS(91),
        [sym_continue_statement] = ACTIONS(91),
        [anon_sym_LBRACK] = ACTIONS(109),
        [anon_sym_LBRACE] = ACTIONS(111),
        [sym_number] = ACTIONS(113),
        [sym_identifier] = ACTIONS(115),
        [sym_comment] = ACTIONS(75),
        [sym__indent] = ACTIONS(643),
    },
    [370] = {
        [sym_elif_clause] = STATE(372),
        [sym_else_clause] = STATE(373),
        [aux_sym_if_statement_repeat1] = STATE(374),
        [anon_sym_print] = ACTIONS(869),
        [anon_sym_return] = ACTIONS(869),
        [anon_sym_del] = ACTIONS(869),
        [sym_pass_statement] = ACTIONS(869),
        [sym_break_statement] = ACTIONS(869),
        [sym_continue_statement] = ACTIONS(869),
        [anon_sym_if] = ACTIONS(869),
        [anon_sym_elif] = ACTIONS(871),
        [anon_sym_else] = ACTIONS(779),
        [anon_sym_for] = ACTIONS(869),
        [anon_sym_while] = ACTIONS(869),
        [anon_sym_try] = ACTIONS(869),
        [anon_sym_with] = ACTIONS(869),
        [anon_sym_def] = ACTIONS(869),
        [anon_sym_class] = ACTIONS(869),
        [anon_sym_AT] = ACTIONS(873),
        [anon_sym_LBRACK] = ACTIONS(873),
        [anon_sym_LBRACE] = ACTIONS(873),
        [sym_number] = ACTIONS(869),
        [sym_identifier] = ACTIONS(875),
        [sym_comment] = ACTIONS(75),
        [sym__dedent] = ACTIONS(873),
    },
    [371] = {
        [sym__expression] = STATE(377),
        [sym_binary_operator] = STATE(41),
        [sym_subscript] = STATE(41),
        [sym_call] = STATE(41),
        [sym_list] = STATE(41),
        [sym_list_comprehension] = STATE(41),
        [sym_dictionary] = STATE(41),
        [sym_dictionary_comprehension] = STATE(41),
        [sym_set] = STATE(41),
        [sym_set_comprehension] = STATE(41),
        [anon_sym_LBRACK] = ACTIONS(119),
        [anon_sym_LBRACE] = ACTIONS(121),
        [sym_number] = ACTIONS(123),
        [sym_identifier] = ACTIONS(123),
        [sym_comment] = ACTIONS(75),
    },
    [372] = {
        [anon_sym_print] = ACTIONS(877),
        [anon_sym_return] = ACTIONS(877),
        [anon_sym_del] = ACTIONS(877),
        [sym_pass_statement] = ACTIONS(877),
        [sym_break_statement] = ACTIONS(877),
        [sym_continue_statement] = ACTIONS(877),
        [anon_sym_if] = ACTIONS(877),
        [anon_sym_elif] = ACTIONS(877),
        [anon_sym_else] = ACTIONS(877),
        [anon_sym_for] = ACTIONS(877),
        [anon_sym_while] = ACTIONS(877),
        [anon_sym_try] = ACTIONS(877),
        [anon_sym_with] = ACTIONS(877),
        [anon_sym_def] = ACTIONS(877),
        [anon_sym_class] = ACTIONS(877),
        [anon_sym_AT] = ACTIONS(879),
        [anon_sym_LBRACK] = ACTIONS(879),
        [anon_sym_LBRACE] = ACTIONS(879),
        [sym_number] = ACTIONS(877),
        [sym_identifier] = ACTIONS(881),
        [sym_comment] = ACTIONS(75),
        [sym__dedent] = ACTIONS(879),
    },
    [373] = {
        [anon_sym_print] = ACTIONS(883),
        [anon_sym_return] = ACTIONS(883),
        [anon_sym_del] = ACTIONS(883),
        [sym_pass_statement] = ACTIONS(883),
        [sym_break_statement] = ACTIONS(883),
        [sym_continue_statement] = ACTIONS(883),
        [anon_sym_if] = ACTIONS(883),
        [anon_sym_for] = ACTIONS(883),
        [anon_sym_while] = ACTIONS(883),
        [anon_sym_try] = ACTIONS(883),
        [anon_sym_with] = ACTIONS(883),
        [anon_sym_def] = ACTIONS(883),
        [anon_sym_class] = ACTIONS(883),
        [anon_sym_AT] = ACTIONS(885),
        [anon_sym_LBRACK] = ACTIONS(885),
        [anon_sym_LBRACE] = ACTIONS(885),
        [sym_number] = ACTIONS(883),
        [sym_identifier] = ACTIONS(887),
        [sym_comment] = ACTIONS(75),
        [sym__dedent] = ACTIONS(885),
    },
    [374] = {
        [sym_elif_clause] = STATE(375),
        [sym_else_clause] = STATE(376),
        [anon_sym_print] = ACTIONS(883),
        [anon_sym_return] = ACTIONS(883),
        [anon_sym_del] = ACTIONS(883),
        [sym_pass_statement] = ACTIONS(883),
        [sym_break_statement] = ACTIONS(883),
        [sym_continue_statement] = ACTIONS(883),
        [anon_sym_if] = ACTIONS(883),
        [anon_sym_elif] = ACTIONS(871),
        [anon_sym_else] = ACTIONS(779),
        [anon_sym_for] = ACTIONS(883),
        [anon_sym_while] = ACTIONS(883),
        [anon_sym_try] = ACTIONS(883),
        [anon_sym_with] = ACTIONS(883),
        [anon_sym_def] = ACTIONS(883),
        [anon_sym_class] = ACTIONS(883),
        [anon_sym_AT] = ACTIONS(885),
        [anon_sym_LBRACK] = ACTIONS(885),
        [anon_sym_LBRACE] = ACTIONS(885),
        [sym_number] = ACTIONS(883),
        [sym_identifier] = ACTIONS(887),
        [sym_comment] = ACTIONS(75),
        [sym__dedent] = ACTIONS(885),
    },
    [375] = {
        [anon_sym_print] = ACTIONS(889),
        [anon_sym_return] = ACTIONS(889),
        [anon_sym_del] = ACTIONS(889),
        [sym_pass_statement] = ACTIONS(889),
        [sym_break_statement] = ACTIONS(889),
        [sym_continue_statement] = ACTIONS(889),
        [anon_sym_if] = ACTIONS(889),
        [anon_sym_elif] = ACTIONS(889),
        [anon_sym_else] = ACTIONS(889),
        [anon_sym_for] = ACTIONS(889),
        [anon_sym_while] = ACTIONS(889),
        [anon_sym_try] = ACTIONS(889),
        [anon_sym_with] = ACTIONS(889),
        [anon_sym_def] = ACTIONS(889),
        [anon_sym_class] = ACTIONS(889),
        [anon_sym_AT] = ACTIONS(891),
        [anon_sym_LBRACK] = ACTIONS(891),
        [anon_sym_LBRACE] = ACTIONS(891),
        [sym_number] = ACTIONS(889),
        [sym_identifier] = ACTIONS(893),
        [sym_comment] = ACTIONS(75),
        [sym__dedent] = ACTIONS(891),
    },
    [376] = {
        [anon_sym_print] = ACTIONS(895),
        [anon_sym_return] = ACTIONS(895),
        [anon_sym_del] = ACTIONS(895),
        [sym_pass_statement] = ACTIONS(895),
        [sym_break_statement] = ACTIONS(895),
        [sym_continue_statement] = ACTIONS(895),
        [anon_sym_if] = ACTIONS(895),
        [anon_sym_for] = ACTIONS(895),
        [anon_sym_while] = ACTIONS(895),
        [anon_sym_try] = ACTIONS(895),
        [anon_sym_with] = ACTIONS(895),
        [anon_sym_def] = ACTIONS(895),
        [anon_sym_class] = ACTIONS(895),
        [anon_sym_AT] = ACTIONS(897),
        [anon_sym_LBRACK] = ACTIONS(897),
        [anon_sym_LBRACE] = ACTIONS(897),
        [sym_number] = ACTIONS(895),
        [sym_identifier] = ACTIONS(899),
        [sym_comment] = ACTIONS(75),
        [sym__dedent] = ACTIONS(897),
    },
    [377] = {
        [anon_sym_COLON] = ACTIONS(901),
        [anon_sym_LPAREN] = ACTIONS(225),
        [anon_sym_STAR] = ACTIONS(227),
        [anon_sym_PLUS] = ACTIONS(229),
        [anon_sym_DASH] = ACTIONS(229),
        [anon_sym_SLASH] = ACTIONS(231),
        [anon_sym_STAR_STAR] = ACTIONS(233),
        [anon_sym_PIPE] = ACTIONS(235),
        [anon_sym_AMP] = ACTIONS(237),
        [anon_sym_CARET] = ACTIONS(239),
        [anon_sym_LT_LT] = ACTIONS(229),
        [anon_sym_GT_GT] = ACTIONS(229),
        [anon_sym_and] = ACTIONS(237),
        [anon_sym_or] = ACTIONS(235),
        [anon_sym_LBRACK] = ACTIONS(241),
        [sym_comment] = ACTIONS(75),
    },
    [378] = {
        [sym__simple_statement] = STATE(279),
        [sym_print_statement] = STATE(5),
        [sym_expression_statement] = STATE(5),
        [sym_return_statement] = STATE(5),
        [sym_delete_statement] = STATE(5),
        [sym__suite] = STATE(379),
        [sym__expression] = STATE(23),
        [sym_binary_operator] = STATE(16),
        [sym_subscript] = STATE(16),
        [sym_call] = STATE(16),
        [sym_list] = STATE(16),
        [sym_list_comprehension] = STATE(16),
        [sym_dictionary] = STATE(16),
        [sym_dictionary_comprehension] = STATE(16),
        [sym_set] = STATE(16),
        [sym_set_comprehension] = STATE(16),
        [anon_sym_print] = ACTIONS(85),
        [anon_sym_return] = ACTIONS(87),
        [anon_sym_del] = ACTIONS(89),
        [sym_pass_statement] = ACTIONS(91),
        [sym_break_statement] = ACTIONS(91),
        [sym_continue_statement] = ACTIONS(91),
        [anon_sym_LBRACK] = ACTIONS(109),
        [anon_sym_LBRACE] = ACTIONS(111),
        [sym_number] = ACTIONS(113),
        [sym_identifier] = ACTIONS(115),
        [sym_comment] = ACTIONS(75),
        [sym__indent] = ACTIONS(643),
    },
    [379] = {
        [anon_sym_print] = ACTIONS(903),
        [anon_sym_return] = ACTIONS(903),
        [anon_sym_del] = ACTIONS(903),
        [sym_pass_statement] = ACTIONS(903),
        [sym_break_statement] = ACTIONS(903),
        [sym_continue_statement] = ACTIONS(903),
        [anon_sym_if] = ACTIONS(903),
        [anon_sym_elif] = ACTIONS(903),
        [anon_sym_else] = ACTIONS(903),
        [anon_sym_for] = ACTIONS(903),
        [anon_sym_while] = ACTIONS(903),
        [anon_sym_try] = ACTIONS(903),
        [anon_sym_with] = ACTIONS(903),
        [anon_sym_def] = ACTIONS(903),
        [anon_sym_class] = ACTIONS(903),
        [anon_sym_AT] = ACTIONS(905),
        [anon_sym_LBRACK] = ACTIONS(905),
        [anon_sym_LBRACE] = ACTIONS(905),
        [sym_number] = ACTIONS(903),
        [sym_identifier] = ACTIONS(907),
        [sym_comment] = ACTIONS(75),
        [sym__dedent] = ACTIONS(905),
    },
    [380] = {
        [ts_builtin_sym_end] = ACTIONS(655),
        [anon_sym_SEMI] = ACTIONS(655),
        [anon_sym_print] = ACTIONS(653),
        [anon_sym_return] = ACTIONS(653),
        [anon_sym_del] = ACTIONS(653),
        [sym_pass_statement] = ACTIONS(653),
        [sym_break_statement] = ACTIONS(653),
        [sym_continue_statement] = ACTIONS(653),
        [anon_sym_if] = ACTIONS(653),
        [anon_sym_for] = ACTIONS(653),
        [anon_sym_while] = ACTIONS(653),
        [anon_sym_try] = ACTIONS(653),
        [anon_sym_with] = ACTIONS(653),
        [anon_sym_def] = ACTIONS(653),
        [anon_sym_class] = ACTIONS(653),
        [anon_sym_AT] = ACTIONS(655),
        [anon_sym_LBRACK] = ACTIONS(655),
        [anon_sym_LBRACE] = ACTIONS(655),
        [sym_number] = ACTIONS(653),
        [sym_identifier] = ACTIONS(657),
        [sym_comment] = ACTIONS(75),
        [sym__newline] = ACTIONS(655),
    },
    [381] = {
        [sym_parameters] = STATE(382),
        [anon_sym_LPAREN] = ACTIONS(659),
        [sym_comment] = ACTIONS(75),
    },
    [382] = {
        [anon_sym_COLON] = ACTIONS(909),
        [sym_comment] = ACTIONS(75),
    },
    [383] = {
        [sym__simple_statement] = STATE(252),
        [sym_print_statement] = STATE(5),
        [sym_expression_statement] = STATE(5),
        [sym_return_statement] = STATE(5),
        [sym_delete_statement] = STATE(5),
        [sym__suite] = STATE(384),
        [sym__expression] = STATE(23),
        [sym_binary_operator] = STATE(16),
        [sym_subscript] = STATE(16),
        [sym_call] = STATE(16),
        [sym_list] = STATE(16),
        [sym_list_comprehension] = STATE(16),
        [sym_dictionary] = STATE(16),
        [sym_dictionary_comprehension] = STATE(16),
        [sym_set] = STATE(16),
        [sym_set_comprehension] = STATE(16),
        [anon_sym_print] = ACTIONS(85),
        [anon_sym_return] = ACTIONS(87),
        [anon_sym_del] = ACTIONS(89),
        [sym_pass_statement] = ACTIONS(91),
        [sym_break_statement] = ACTIONS(91),
        [sym_continue_statement] = ACTIONS(91),
        [anon_sym_LBRACK] = ACTIONS(109),
        [anon_sym_LBRACE] = ACTIONS(111),
        [sym_number] = ACTIONS(113),
        [sym_identifier] = ACTIONS(115),
        [sym_comment] = ACTIONS(75),
        [sym__indent] = ACTIONS(585),
    },
    [384] = {
        [ts_builtin_sym_end] = ACTIONS(671),
        [anon_sym_SEMI] = ACTIONS(671),
        [anon_sym_print] = ACTIONS(669),
        [anon_sym_return] = ACTIONS(669),
        [anon_sym_del] = ACTIONS(669),
        [sym_pass_statement] = ACTIONS(669),
        [sym_break_statement] = ACTIONS(669),
        [sym_continue_statement] = ACTIONS(669),
        [anon_sym_if] = ACTIONS(669),
        [anon_sym_for] = ACTIONS(669),
        [anon_sym_while] = ACTIONS(669),
        [anon_sym_try] = ACTIONS(669),
        [anon_sym_with] = ACTIONS(669),
        [anon_sym_def] = ACTIONS(669),
        [anon_sym_class] = ACTIONS(669),
        [anon_sym_AT] = ACTIONS(671),
        [anon_sym_LBRACK] = ACTIONS(671),
        [anon_sym_LBRACE] = ACTIONS(671),
        [sym_number] = ACTIONS(669),
        [sym_identifier] = ACTIONS(673),
        [sym_comment] = ACTIONS(75),
        [sym__newline] = ACTIONS(671),
    },
    [385] = {
        [aux_sym_with_statement_repeat1] = STATE(387),
        [anon_sym_COMMA] = ACTIONS(727),
        [anon_sym_COLON] = ACTIONS(911),
        [sym_comment] = ACTIONS(75),
    },
    [386] = {
        [sym__simple_statement] = STATE(252),
        [sym_print_statement] = STATE(5),
        [sym_expression_statement] = STATE(5),
        [sym_return_statement] = STATE(5),
        [sym_delete_statement] = STATE(5),
        [sym__suite] = STATE(390),
        [sym__expression] = STATE(23),
        [sym_binary_operator] = STATE(16),
        [sym_subscript] = STATE(16),
        [sym_call] = STATE(16),
        [sym_list] = STATE(16),
        [sym_list_comprehension] = STATE(16),
        [sym_dictionary] = STATE(16),
        [sym_dictionary_comprehension] = STATE(16),
        [sym_set] = STATE(16),
        [sym_set_comprehension] = STATE(16),
        [anon_sym_print] = ACTIONS(85),
        [anon_sym_return] = ACTIONS(87),
        [anon_sym_del] = ACTIONS(89),
        [sym_pass_statement] = ACTIONS(91),
        [sym_break_statement] = ACTIONS(91),
        [sym_continue_statement] = ACTIONS(91),
        [anon_sym_LBRACK] = ACTIONS(109),
        [anon_sym_LBRACE] = ACTIONS(111),
        [sym_number] = ACTIONS(113),
        [sym_identifier] = ACTIONS(115),
        [sym_comment] = ACTIONS(75),
        [sym__indent] = ACTIONS(585),
    },
    [387] = {
        [anon_sym_COMMA] = ACTIONS(737),
        [anon_sym_COLON] = ACTIONS(913),
        [sym_comment] = ACTIONS(75),
    },
    [388] = {
        [sym__simple_statement] = STATE(252),
        [sym_print_statement] = STATE(5),
        [sym_expression_statement] = STATE(5),
        [sym_return_statement] = STATE(5),
        [sym_delete_statement] = STATE(5),
        [sym__suite] = STATE(389),
        [sym__expression] = STATE(23),
        [sym_binary_operator] = STATE(16),
        [sym_subscript] = STATE(16),
        [sym_call] = STATE(16),
        [sym_list] = STATE(16),
        [sym_list_comprehension] = STATE(16),
        [sym_dictionary] = STATE(16),
        [sym_dictionary_comprehension] = STATE(16),
        [sym_set] = STATE(16),
        [sym_set_comprehension] = STATE(16),
        [anon_sym_print] = ACTIONS(85),
        [anon_sym_return] = ACTIONS(87),
        [anon_sym_del] = ACTIONS(89),
        [sym_pass_statement] = ACTIONS(91),
        [sym_break_statement] = ACTIONS(91),
        [sym_continue_statement] = ACTIONS(91),
        [anon_sym_LBRACK] = ACTIONS(109),
        [anon_sym_LBRACE] = ACTIONS(111),
        [sym_number] = ACTIONS(113),
        [sym_identifier] = ACTIONS(115),
        [sym_comment] = ACTIONS(75),
        [sym__indent] = ACTIONS(585),
    },
    [389] = {
        [ts_builtin_sym_end] = ACTIONS(743),
        [anon_sym_SEMI] = ACTIONS(743),
        [anon_sym_print] = ACTIONS(741),
        [anon_sym_return] = ACTIONS(741),
        [anon_sym_del] = ACTIONS(741),
        [sym_pass_statement] = ACTIONS(741),
        [sym_break_statement] = ACTIONS(741),
        [sym_continue_statement] = ACTIONS(741),
        [anon_sym_if] = ACTIONS(741),
        [anon_sym_for] = ACTIONS(741),
        [anon_sym_while] = ACTIONS(741),
        [anon_sym_try] = ACTIONS(741),
        [anon_sym_with] = ACTIONS(741),
        [anon_sym_def] = ACTIONS(741),
        [anon_sym_class] = ACTIONS(741),
        [anon_sym_AT] = ACTIONS(743),
        [anon_sym_LBRACK] = ACTIONS(743),
        [anon_sym_LBRACE] = ACTIONS(743),
        [sym_number] = ACTIONS(741),
        [sym_identifier] = ACTIONS(745),
        [sym_comment] = ACTIONS(75),
        [sym__newline] = ACTIONS(743),
    },
    [390] = {
        [ts_builtin_sym_end] = ACTIONS(751),
        [anon_sym_SEMI] = ACTIONS(751),
        [anon_sym_print] = ACTIONS(749),
        [anon_sym_return] = ACTIONS(749),
        [anon_sym_del] = ACTIONS(749),
        [sym_pass_statement] = ACTIONS(749),
        [sym_break_statement] = ACTIONS(749),
        [sym_continue_statement] = ACTIONS(749),
        [anon_sym_if] = ACTIONS(749),
        [anon_sym_for] = ACTIONS(749),
        [anon_sym_while] = ACTIONS(749),
        [anon_sym_try] = ACTIONS(749),
        [anon_sym_with] = ACTIONS(749),
        [anon_sym_def] = ACTIONS(749),
        [anon_sym_class] = ACTIONS(749),
        [anon_sym_AT] = ACTIONS(751),
        [anon_sym_LBRACK] = ACTIONS(751),
        [anon_sym_LBRACE] = ACTIONS(751),
        [sym_number] = ACTIONS(749),
        [sym_identifier] = ACTIONS(753),
        [sym_comment] = ACTIONS(75),
        [sym__newline] = ACTIONS(751),
    },
    [391] = {
        [sym__simple_statement] = STATE(332),
        [sym_print_statement] = STATE(5),
        [sym_expression_statement] = STATE(5),
        [sym_return_statement] = STATE(5),
        [sym_delete_statement] = STATE(5),
        [sym__suite] = STATE(392),
        [sym__expression] = STATE(23),
        [sym_binary_operator] = STATE(16),
        [sym_subscript] = STATE(16),
        [sym_call] = STATE(16),
        [sym_list] = STATE(16),
        [sym_list_comprehension] = STATE(16),
        [sym_dictionary] = STATE(16),
        [sym_dictionary_comprehension] = STATE(16),
        [sym_set] = STATE(16),
        [sym_set_comprehension] = STATE(16),
        [anon_sym_print] = ACTIONS(85),
        [anon_sym_return] = ACTIONS(87),
        [anon_sym_del] = ACTIONS(89),
        [sym_pass_statement] = ACTIONS(91),
        [sym_break_statement] = ACTIONS(91),
        [sym_continue_statement] = ACTIONS(91),
        [anon_sym_LBRACK] = ACTIONS(109),
        [anon_sym_LBRACE] = ACTIONS(111),
        [sym_number] = ACTIONS(113),
        [sym_identifier] = ACTIONS(115),
        [sym_comment] = ACTIONS(75),
        [sym__indent] = ACTIONS(757),
    },
    [392] = {
        [sym_except_clause] = STATE(395),
        [sym_finally_clause] = STATE(396),
        [aux_sym_try_statement_repeat1] = STATE(397),
        [anon_sym_except] = ACTIONS(915),
        [anon_sym_finally] = ACTIONS(917),
        [sym_comment] = ACTIONS(75),
    },
    [393] = {
        [sym__expression] = STATE(407),
        [sym_binary_operator] = STATE(41),
        [sym_subscript] = STATE(41),
        [sym_call] = STATE(41),
        [sym_list] = STATE(41),
        [sym_list_comprehension] = STATE(41),
        [sym_dictionary] = STATE(41),
        [sym_dictionary_comprehension] = STATE(41),
        [sym_set] = STATE(41),
        [sym_set_comprehension] = STATE(41),
        [anon_sym_LBRACK] = ACTIONS(119),
        [anon_sym_LBRACE] = ACTIONS(121),
        [sym_number] = ACTIONS(123),
        [sym_identifier] = ACTIONS(123),
        [sym_comment] = ACTIONS(75),
    },
    [394] = {
        [anon_sym_COLON] = ACTIONS(919),
        [sym_comment] = ACTIONS(75),
    },
    [395] = {
        [ts_builtin_sym_end] = ACTIONS(769),
        [anon_sym_SEMI] = ACTIONS(769),
        [anon_sym_print] = ACTIONS(767),
        [anon_sym_return] = ACTIONS(767),
        [anon_sym_del] = ACTIONS(767),
        [sym_pass_statement] = ACTIONS(767),
        [sym_break_statement] = ACTIONS(767),
        [sym_continue_statement] = ACTIONS(767),
        [anon_sym_if] = ACTIONS(767),
        [anon_sym_else] = ACTIONS(767),
        [anon_sym_for] = ACTIONS(767),
        [anon_sym_while] = ACTIONS(767),
        [anon_sym_try] = ACTIONS(767),
        [anon_sym_except] = ACTIONS(767),
        [anon_sym_finally] = ACTIONS(767),
        [anon_sym_with] = ACTIONS(767),
        [anon_sym_def] = ACTIONS(767),
        [anon_sym_class] = ACTIONS(767),
        [anon_sym_AT] = ACTIONS(769),
        [anon_sym_LBRACK] = ACTIONS(769),
        [anon_sym_LBRACE] = ACTIONS(769),
        [sym_number] = ACTIONS(767),
        [sym_identifier] = ACTIONS(771),
        [sym_comment] = ACTIONS(75),
        [sym__newline] = ACTIONS(769),
    },
    [396] = {
        [ts_builtin_sym_end] = ACTIONS(775),
        [anon_sym_SEMI] = ACTIONS(775),
        [anon_sym_print] = ACTIONS(773),
        [anon_sym_return] = ACTIONS(773),
        [anon_sym_del] = ACTIONS(773),
        [sym_pass_statement] = ACTIONS(773),
        [sym_break_statement] = ACTIONS(773),
        [sym_continue_statement] = ACTIONS(773),
        [anon_sym_if] = ACTIONS(773),
        [anon_sym_for] = ACTIONS(773),
        [anon_sym_while] = ACTIONS(773),
        [anon_sym_try] = ACTIONS(773),
        [anon_sym_with] = ACTIONS(773),
        [anon_sym_def] = ACTIONS(773),
        [anon_sym_class] = ACTIONS(773),
        [anon_sym_AT] = ACTIONS(775),
        [anon_sym_LBRACK] = ACTIONS(775),
        [anon_sym_LBRACE] = ACTIONS(775),
        [sym_number] = ACTIONS(773),
        [sym_identifier] = ACTIONS(777),
        [sym_comment] = ACTIONS(75),
        [sym__newline] = ACTIONS(775),
    },
    [397] = {
        [sym_else_clause] = STATE(399),
        [sym_except_clause] = STATE(400),
        [sym_finally_clause] = STATE(401),
        [ts_builtin_sym_end] = ACTIONS(775),
        [anon_sym_SEMI] = ACTIONS(775),
        [anon_sym_print] = ACTIONS(773),
        [anon_sym_return] = ACTIONS(773),
        [anon_sym_del] = ACTIONS(773),
        [sym_pass_statement] = ACTIONS(773),
        [sym_break_statement] = ACTIONS(773),
        [sym_continue_statement] = ACTIONS(773),
        [anon_sym_if] = ACTIONS(773),
        [anon_sym_else] = ACTIONS(921),
        [anon_sym_for] = ACTIONS(773),
        [anon_sym_while] = ACTIONS(773),
        [anon_sym_try] = ACTIONS(773),
        [anon_sym_except] = ACTIONS(923),
        [anon_sym_finally] = ACTIONS(925),
        [anon_sym_with] = ACTIONS(773),
        [anon_sym_def] = ACTIONS(773),
        [anon_sym_class] = ACTIONS(773),
        [anon_sym_AT] = ACTIONS(775),
        [anon_sym_LBRACK] = ACTIONS(775),
        [anon_sym_LBRACE] = ACTIONS(775),
        [sym_number] = ACTIONS(773),
        [sym_identifier] = ACTIONS(777),
        [sym_comment] = ACTIONS(75),
        [sym__newline] = ACTIONS(775),
    },
    [398] = {
        [anon_sym_COLON] = ACTIONS(927),
        [sym_comment] = ACTIONS(75),
    },
    [399] = {
        [sym_finally_clause] = STATE(402),
        [ts_builtin_sym_end] = ACTIONS(789),
        [anon_sym_SEMI] = ACTIONS(789),
        [anon_sym_print] = ACTIONS(787),
        [anon_sym_return] = ACTIONS(787),
        [anon_sym_del] = ACTIONS(787),
        [sym_pass_statement] = ACTIONS(787),
        [sym_break_statement] = ACTIONS(787),
        [sym_continue_statement] = ACTIONS(787),
        [anon_sym_if] = ACTIONS(787),
        [anon_sym_for] = ACTIONS(787),
        [anon_sym_while] = ACTIONS(787),
        [anon_sym_try] = ACTIONS(787),
        [anon_sym_finally] = ACTIONS(925),
        [anon_sym_with] = ACTIONS(787),
        [anon_sym_def] = ACTIONS(787),
        [anon_sym_class] = ACTIONS(787),
        [anon_sym_AT] = ACTIONS(789),
        [anon_sym_LBRACK] = ACTIONS(789),
        [anon_sym_LBRACE] = ACTIONS(789),
        [sym_number] = ACTIONS(787),
        [sym_identifier] = ACTIONS(791),
        [sym_comment] = ACTIONS(75),
        [sym__newline] = ACTIONS(789),
    },
    [400] = {
        [ts_builtin_sym_end] = ACTIONS(795),
        [anon_sym_SEMI] = ACTIONS(795),
        [anon_sym_print] = ACTIONS(793),
        [anon_sym_return] = ACTIONS(793),
        [anon_sym_del] = ACTIONS(793),
        [sym_pass_statement] = ACTIONS(793),
        [sym_break_statement] = ACTIONS(793),
        [sym_continue_statement] = ACTIONS(793),
        [anon_sym_if] = ACTIONS(793),
        [anon_sym_else] = ACTIONS(793),
        [anon_sym_for] = ACTIONS(793),
        [anon_sym_while] = ACTIONS(793),
        [anon_sym_try] = ACTIONS(793),
        [anon_sym_except] = ACTIONS(793),
        [anon_sym_finally] = ACTIONS(793),
        [anon_sym_with] = ACTIONS(793),
        [anon_sym_def] = ACTIONS(793),
        [anon_sym_class] = ACTIONS(793),
        [anon_sym_AT] = ACTIONS(795),
        [anon_sym_LBRACK] = ACTIONS(795),
        [anon_sym_LBRACE] = ACTIONS(795),
        [sym_number] = ACTIONS(793),
        [sym_identifier] = ACTIONS(797),
        [sym_comment] = ACTIONS(75),
        [sym__newline] = ACTIONS(795),
    },
    [401] = {
        [ts_builtin_sym_end] = ACTIONS(789),
        [anon_sym_SEMI] = ACTIONS(789),
        [anon_sym_print] = ACTIONS(787),
        [anon_sym_return] = ACTIONS(787),
        [anon_sym_del] = ACTIONS(787),
        [sym_pass_statement] = ACTIONS(787),
        [sym_break_statement] = ACTIONS(787),
        [sym_continue_statement] = ACTIONS(787),
        [anon_sym_if] = ACTIONS(787),
        [anon_sym_for] = ACTIONS(787),
        [anon_sym_while] = ACTIONS(787),
        [anon_sym_try] = ACTIONS(787),
        [anon_sym_with] = ACTIONS(787),
        [anon_sym_def] = ACTIONS(787),
        [anon_sym_class] = ACTIONS(787),
        [anon_sym_AT] = ACTIONS(789),
        [anon_sym_LBRACK] = ACTIONS(789),
        [anon_sym_LBRACE] = ACTIONS(789),
        [sym_number] = ACTIONS(787),
        [sym_identifier] = ACTIONS(791),
        [sym_comment] = ACTIONS(75),
        [sym__newline] = ACTIONS(789),
    },
    [402] = {
        [ts_builtin_sym_end] = ACTIONS(801),
        [anon_sym_SEMI] = ACTIONS(801),
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
        [anon_sym_AT] = ACTIONS(801),
        [anon_sym_LBRACK] = ACTIONS(801),
        [anon_sym_LBRACE] = ACTIONS(801),
        [sym_number] = ACTIONS(799),
        [sym_identifier] = ACTIONS(803),
        [sym_comment] = ACTIONS(75),
        [sym__newline] = ACTIONS(801),
    },
    [403] = {
        [sym__simple_statement] = STATE(252),
        [sym_print_statement] = STATE(5),
        [sym_expression_statement] = STATE(5),
        [sym_return_statement] = STATE(5),
        [sym_delete_statement] = STATE(5),
        [sym__suite] = STATE(404),
        [sym__expression] = STATE(23),
        [sym_binary_operator] = STATE(16),
        [sym_subscript] = STATE(16),
        [sym_call] = STATE(16),
        [sym_list] = STATE(16),
        [sym_list_comprehension] = STATE(16),
        [sym_dictionary] = STATE(16),
        [sym_dictionary_comprehension] = STATE(16),
        [sym_set] = STATE(16),
        [sym_set_comprehension] = STATE(16),
        [anon_sym_print] = ACTIONS(85),
        [anon_sym_return] = ACTIONS(87),
        [anon_sym_del] = ACTIONS(89),
        [sym_pass_statement] = ACTIONS(91),
        [sym_break_statement] = ACTIONS(91),
        [sym_continue_statement] = ACTIONS(91),
        [anon_sym_LBRACK] = ACTIONS(109),
        [anon_sym_LBRACE] = ACTIONS(111),
        [sym_number] = ACTIONS(113),
        [sym_identifier] = ACTIONS(115),
        [sym_comment] = ACTIONS(75),
        [sym__indent] = ACTIONS(585),
    },
    [404] = {
        [ts_builtin_sym_end] = ACTIONS(807),
        [anon_sym_SEMI] = ACTIONS(807),
        [anon_sym_print] = ACTIONS(805),
        [anon_sym_return] = ACTIONS(805),
        [anon_sym_del] = ACTIONS(805),
        [sym_pass_statement] = ACTIONS(805),
        [sym_break_statement] = ACTIONS(805),
        [sym_continue_statement] = ACTIONS(805),
        [anon_sym_if] = ACTIONS(805),
        [anon_sym_for] = ACTIONS(805),
        [anon_sym_while] = ACTIONS(805),
        [anon_sym_try] = ACTIONS(805),
        [anon_sym_finally] = ACTIONS(805),
        [anon_sym_with] = ACTIONS(805),
        [anon_sym_def] = ACTIONS(805),
        [anon_sym_class] = ACTIONS(805),
        [anon_sym_AT] = ACTIONS(807),
        [anon_sym_LBRACK] = ACTIONS(807),
        [anon_sym_LBRACE] = ACTIONS(807),
        [sym_number] = ACTIONS(805),
        [sym_identifier] = ACTIONS(809),
        [sym_comment] = ACTIONS(75),
        [sym__newline] = ACTIONS(807),
    },
    [405] = {
        [sym__simple_statement] = STATE(252),
        [sym_print_statement] = STATE(5),
        [sym_expression_statement] = STATE(5),
        [sym_return_statement] = STATE(5),
        [sym_delete_statement] = STATE(5),
        [sym__suite] = STATE(406),
        [sym__expression] = STATE(23),
        [sym_binary_operator] = STATE(16),
        [sym_subscript] = STATE(16),
        [sym_call] = STATE(16),
        [sym_list] = STATE(16),
        [sym_list_comprehension] = STATE(16),
        [sym_dictionary] = STATE(16),
        [sym_dictionary_comprehension] = STATE(16),
        [sym_set] = STATE(16),
        [sym_set_comprehension] = STATE(16),
        [anon_sym_print] = ACTIONS(85),
        [anon_sym_return] = ACTIONS(87),
        [anon_sym_del] = ACTIONS(89),
        [sym_pass_statement] = ACTIONS(91),
        [sym_break_statement] = ACTIONS(91),
        [sym_continue_statement] = ACTIONS(91),
        [anon_sym_LBRACK] = ACTIONS(109),
        [anon_sym_LBRACE] = ACTIONS(111),
        [sym_number] = ACTIONS(113),
        [sym_identifier] = ACTIONS(115),
        [sym_comment] = ACTIONS(75),
        [sym__indent] = ACTIONS(585),
    },
    [406] = {
        [ts_builtin_sym_end] = ACTIONS(813),
        [anon_sym_SEMI] = ACTIONS(813),
        [anon_sym_print] = ACTIONS(811),
        [anon_sym_return] = ACTIONS(811),
        [anon_sym_del] = ACTIONS(811),
        [sym_pass_statement] = ACTIONS(811),
        [sym_break_statement] = ACTIONS(811),
        [sym_continue_statement] = ACTIONS(811),
        [anon_sym_if] = ACTIONS(811),
        [anon_sym_for] = ACTIONS(811),
        [anon_sym_while] = ACTIONS(811),
        [anon_sym_try] = ACTIONS(811),
        [anon_sym_with] = ACTIONS(811),
        [anon_sym_def] = ACTIONS(811),
        [anon_sym_class] = ACTIONS(811),
        [anon_sym_AT] = ACTIONS(813),
        [anon_sym_LBRACK] = ACTIONS(813),
        [anon_sym_LBRACE] = ACTIONS(813),
        [sym_number] = ACTIONS(811),
        [sym_identifier] = ACTIONS(815),
        [sym_comment] = ACTIONS(75),
        [sym__newline] = ACTIONS(813),
    },
    [407] = {
        [anon_sym_COMMA] = ACTIONS(929),
        [anon_sym_COLON] = ACTIONS(931),
        [anon_sym_as] = ACTIONS(929),
        [anon_sym_LPAREN] = ACTIONS(225),
        [anon_sym_STAR] = ACTIONS(227),
        [anon_sym_PLUS] = ACTIONS(229),
        [anon_sym_DASH] = ACTIONS(229),
        [anon_sym_SLASH] = ACTIONS(231),
        [anon_sym_STAR_STAR] = ACTIONS(233),
        [anon_sym_PIPE] = ACTIONS(235),
        [anon_sym_AMP] = ACTIONS(237),
        [anon_sym_CARET] = ACTIONS(239),
        [anon_sym_LT_LT] = ACTIONS(229),
        [anon_sym_GT_GT] = ACTIONS(229),
        [anon_sym_and] = ACTIONS(237),
        [anon_sym_or] = ACTIONS(235),
        [anon_sym_LBRACK] = ACTIONS(241),
        [sym_comment] = ACTIONS(75),
    },
    [408] = {
        [sym__expression] = STATE(410),
        [sym_binary_operator] = STATE(41),
        [sym_subscript] = STATE(41),
        [sym_call] = STATE(41),
        [sym_list] = STATE(41),
        [sym_list_comprehension] = STATE(41),
        [sym_dictionary] = STATE(41),
        [sym_dictionary_comprehension] = STATE(41),
        [sym_set] = STATE(41),
        [sym_set_comprehension] = STATE(41),
        [anon_sym_LBRACK] = ACTIONS(119),
        [anon_sym_LBRACE] = ACTIONS(121),
        [sym_number] = ACTIONS(123),
        [sym_identifier] = ACTIONS(123),
        [sym_comment] = ACTIONS(75),
    },
    [409] = {
        [sym__simple_statement] = STATE(252),
        [sym_print_statement] = STATE(5),
        [sym_expression_statement] = STATE(5),
        [sym_return_statement] = STATE(5),
        [sym_delete_statement] = STATE(5),
        [sym__suite] = STATE(413),
        [sym__expression] = STATE(23),
        [sym_binary_operator] = STATE(16),
        [sym_subscript] = STATE(16),
        [sym_call] = STATE(16),
        [sym_list] = STATE(16),
        [sym_list_comprehension] = STATE(16),
        [sym_dictionary] = STATE(16),
        [sym_dictionary_comprehension] = STATE(16),
        [sym_set] = STATE(16),
        [sym_set_comprehension] = STATE(16),
        [anon_sym_print] = ACTIONS(85),
        [anon_sym_return] = ACTIONS(87),
        [anon_sym_del] = ACTIONS(89),
        [sym_pass_statement] = ACTIONS(91),
        [sym_break_statement] = ACTIONS(91),
        [sym_continue_statement] = ACTIONS(91),
        [anon_sym_LBRACK] = ACTIONS(109),
        [anon_sym_LBRACE] = ACTIONS(111),
        [sym_number] = ACTIONS(113),
        [sym_identifier] = ACTIONS(115),
        [sym_comment] = ACTIONS(75),
        [sym__indent] = ACTIONS(585),
    },
    [410] = {
        [anon_sym_COLON] = ACTIONS(933),
        [anon_sym_LPAREN] = ACTIONS(225),
        [anon_sym_STAR] = ACTIONS(227),
        [anon_sym_PLUS] = ACTIONS(229),
        [anon_sym_DASH] = ACTIONS(229),
        [anon_sym_SLASH] = ACTIONS(231),
        [anon_sym_STAR_STAR] = ACTIONS(233),
        [anon_sym_PIPE] = ACTIONS(235),
        [anon_sym_AMP] = ACTIONS(237),
        [anon_sym_CARET] = ACTIONS(239),
        [anon_sym_LT_LT] = ACTIONS(229),
        [anon_sym_GT_GT] = ACTIONS(229),
        [anon_sym_and] = ACTIONS(237),
        [anon_sym_or] = ACTIONS(235),
        [anon_sym_LBRACK] = ACTIONS(241),
        [sym_comment] = ACTIONS(75),
    },
    [411] = {
        [sym__simple_statement] = STATE(252),
        [sym_print_statement] = STATE(5),
        [sym_expression_statement] = STATE(5),
        [sym_return_statement] = STATE(5),
        [sym_delete_statement] = STATE(5),
        [sym__suite] = STATE(412),
        [sym__expression] = STATE(23),
        [sym_binary_operator] = STATE(16),
        [sym_subscript] = STATE(16),
        [sym_call] = STATE(16),
        [sym_list] = STATE(16),
        [sym_list_comprehension] = STATE(16),
        [sym_dictionary] = STATE(16),
        [sym_dictionary_comprehension] = STATE(16),
        [sym_set] = STATE(16),
        [sym_set_comprehension] = STATE(16),
        [anon_sym_print] = ACTIONS(85),
        [anon_sym_return] = ACTIONS(87),
        [anon_sym_del] = ACTIONS(89),
        [sym_pass_statement] = ACTIONS(91),
        [sym_break_statement] = ACTIONS(91),
        [sym_continue_statement] = ACTIONS(91),
        [anon_sym_LBRACK] = ACTIONS(109),
        [anon_sym_LBRACE] = ACTIONS(111),
        [sym_number] = ACTIONS(113),
        [sym_identifier] = ACTIONS(115),
        [sym_comment] = ACTIONS(75),
        [sym__indent] = ACTIONS(585),
    },
    [412] = {
        [ts_builtin_sym_end] = ACTIONS(825),
        [anon_sym_SEMI] = ACTIONS(825),
        [anon_sym_print] = ACTIONS(823),
        [anon_sym_return] = ACTIONS(823),
        [anon_sym_del] = ACTIONS(823),
        [sym_pass_statement] = ACTIONS(823),
        [sym_break_statement] = ACTIONS(823),
        [sym_continue_statement] = ACTIONS(823),
        [anon_sym_if] = ACTIONS(823),
        [anon_sym_else] = ACTIONS(823),
        [anon_sym_for] = ACTIONS(823),
        [anon_sym_while] = ACTIONS(823),
        [anon_sym_try] = ACTIONS(823),
        [anon_sym_except] = ACTIONS(823),
        [anon_sym_finally] = ACTIONS(823),
        [anon_sym_with] = ACTIONS(823),
        [anon_sym_def] = ACTIONS(823),
        [anon_sym_class] = ACTIONS(823),
        [anon_sym_AT] = ACTIONS(825),
        [anon_sym_LBRACK] = ACTIONS(825),
        [anon_sym_LBRACE] = ACTIONS(825),
        [sym_number] = ACTIONS(823),
        [sym_identifier] = ACTIONS(827),
        [sym_comment] = ACTIONS(75),
        [sym__newline] = ACTIONS(825),
    },
    [413] = {
        [ts_builtin_sym_end] = ACTIONS(831),
        [anon_sym_SEMI] = ACTIONS(831),
        [anon_sym_print] = ACTIONS(829),
        [anon_sym_return] = ACTIONS(829),
        [anon_sym_del] = ACTIONS(829),
        [sym_pass_statement] = ACTIONS(829),
        [sym_break_statement] = ACTIONS(829),
        [sym_continue_statement] = ACTIONS(829),
        [anon_sym_if] = ACTIONS(829),
        [anon_sym_else] = ACTIONS(829),
        [anon_sym_for] = ACTIONS(829),
        [anon_sym_while] = ACTIONS(829),
        [anon_sym_try] = ACTIONS(829),
        [anon_sym_except] = ACTIONS(829),
        [anon_sym_finally] = ACTIONS(829),
        [anon_sym_with] = ACTIONS(829),
        [anon_sym_def] = ACTIONS(829),
        [anon_sym_class] = ACTIONS(829),
        [anon_sym_AT] = ACTIONS(831),
        [anon_sym_LBRACK] = ACTIONS(831),
        [anon_sym_LBRACE] = ACTIONS(831),
        [sym_number] = ACTIONS(829),
        [sym_identifier] = ACTIONS(833),
        [sym_comment] = ACTIONS(75),
        [sym__newline] = ACTIONS(831),
    },
    [414] = {
        [anon_sym_COLON] = ACTIONS(935),
        [anon_sym_LPAREN] = ACTIONS(225),
        [anon_sym_STAR] = ACTIONS(227),
        [anon_sym_PLUS] = ACTIONS(229),
        [anon_sym_DASH] = ACTIONS(229),
        [anon_sym_SLASH] = ACTIONS(231),
        [anon_sym_STAR_STAR] = ACTIONS(233),
        [anon_sym_PIPE] = ACTIONS(235),
        [anon_sym_AMP] = ACTIONS(237),
        [anon_sym_CARET] = ACTIONS(239),
        [anon_sym_LT_LT] = ACTIONS(229),
        [anon_sym_GT_GT] = ACTIONS(229),
        [anon_sym_and] = ACTIONS(237),
        [anon_sym_or] = ACTIONS(235),
        [anon_sym_LBRACK] = ACTIONS(241),
        [sym_comment] = ACTIONS(75),
    },
    [415] = {
        [sym__simple_statement] = STATE(252),
        [sym_print_statement] = STATE(5),
        [sym_expression_statement] = STATE(5),
        [sym_return_statement] = STATE(5),
        [sym_delete_statement] = STATE(5),
        [sym__suite] = STATE(416),
        [sym__expression] = STATE(23),
        [sym_binary_operator] = STATE(16),
        [sym_subscript] = STATE(16),
        [sym_call] = STATE(16),
        [sym_list] = STATE(16),
        [sym_list_comprehension] = STATE(16),
        [sym_dictionary] = STATE(16),
        [sym_dictionary_comprehension] = STATE(16),
        [sym_set] = STATE(16),
        [sym_set_comprehension] = STATE(16),
        [anon_sym_print] = ACTIONS(85),
        [anon_sym_return] = ACTIONS(87),
        [anon_sym_del] = ACTIONS(89),
        [sym_pass_statement] = ACTIONS(91),
        [sym_break_statement] = ACTIONS(91),
        [sym_continue_statement] = ACTIONS(91),
        [anon_sym_LBRACK] = ACTIONS(109),
        [anon_sym_LBRACE] = ACTIONS(111),
        [sym_number] = ACTIONS(113),
        [sym_identifier] = ACTIONS(115),
        [sym_comment] = ACTIONS(75),
        [sym__indent] = ACTIONS(585),
    },
    [416] = {
        [sym_else_clause] = STATE(417),
        [ts_builtin_sym_end] = ACTIONS(841),
        [anon_sym_SEMI] = ACTIONS(841),
        [anon_sym_print] = ACTIONS(839),
        [anon_sym_return] = ACTIONS(839),
        [anon_sym_del] = ACTIONS(839),
        [sym_pass_statement] = ACTIONS(839),
        [sym_break_statement] = ACTIONS(839),
        [sym_continue_statement] = ACTIONS(839),
        [anon_sym_if] = ACTIONS(839),
        [anon_sym_else] = ACTIONS(921),
        [anon_sym_for] = ACTIONS(839),
        [anon_sym_while] = ACTIONS(839),
        [anon_sym_try] = ACTIONS(839),
        [anon_sym_with] = ACTIONS(839),
        [anon_sym_def] = ACTIONS(839),
        [anon_sym_class] = ACTIONS(839),
        [anon_sym_AT] = ACTIONS(841),
        [anon_sym_LBRACK] = ACTIONS(841),
        [anon_sym_LBRACE] = ACTIONS(841),
        [sym_number] = ACTIONS(839),
        [sym_identifier] = ACTIONS(843),
        [sym_comment] = ACTIONS(75),
        [sym__newline] = ACTIONS(841),
    },
    [417] = {
        [ts_builtin_sym_end] = ACTIONS(847),
        [anon_sym_SEMI] = ACTIONS(847),
        [anon_sym_print] = ACTIONS(845),
        [anon_sym_return] = ACTIONS(845),
        [anon_sym_del] = ACTIONS(845),
        [sym_pass_statement] = ACTIONS(845),
        [sym_break_statement] = ACTIONS(845),
        [sym_continue_statement] = ACTIONS(845),
        [anon_sym_if] = ACTIONS(845),
        [anon_sym_for] = ACTIONS(845),
        [anon_sym_while] = ACTIONS(845),
        [anon_sym_try] = ACTIONS(845),
        [anon_sym_with] = ACTIONS(845),
        [anon_sym_def] = ACTIONS(845),
        [anon_sym_class] = ACTIONS(845),
        [anon_sym_AT] = ACTIONS(847),
        [anon_sym_LBRACK] = ACTIONS(847),
        [anon_sym_LBRACE] = ACTIONS(847),
        [sym_number] = ACTIONS(845),
        [sym_identifier] = ACTIONS(849),
        [sym_comment] = ACTIONS(75),
        [sym__newline] = ACTIONS(847),
    },
    [418] = {
        [anon_sym_in] = ACTIONS(937),
        [sym_comment] = ACTIONS(75),
    },
    [419] = {
        [sym_expression_list] = STATE(420),
        [sym__expression] = STATE(124),
        [sym_binary_operator] = STATE(41),
        [sym_subscript] = STATE(41),
        [sym_call] = STATE(41),
        [sym_list] = STATE(41),
        [sym_list_comprehension] = STATE(41),
        [sym_dictionary] = STATE(41),
        [sym_dictionary_comprehension] = STATE(41),
        [sym_set] = STATE(41),
        [sym_set_comprehension] = STATE(41),
        [anon_sym_LBRACK] = ACTIONS(119),
        [anon_sym_LBRACE] = ACTIONS(121),
        [sym_number] = ACTIONS(123),
        [sym_identifier] = ACTIONS(123),
        [sym_comment] = ACTIONS(75),
    },
    [420] = {
        [anon_sym_COLON] = ACTIONS(939),
        [sym_comment] = ACTIONS(75),
    },
    [421] = {
        [sym__simple_statement] = STATE(252),
        [sym_print_statement] = STATE(5),
        [sym_expression_statement] = STATE(5),
        [sym_return_statement] = STATE(5),
        [sym_delete_statement] = STATE(5),
        [sym__suite] = STATE(422),
        [sym__expression] = STATE(23),
        [sym_binary_operator] = STATE(16),
        [sym_subscript] = STATE(16),
        [sym_call] = STATE(16),
        [sym_list] = STATE(16),
        [sym_list_comprehension] = STATE(16),
        [sym_dictionary] = STATE(16),
        [sym_dictionary_comprehension] = STATE(16),
        [sym_set] = STATE(16),
        [sym_set_comprehension] = STATE(16),
        [anon_sym_print] = ACTIONS(85),
        [anon_sym_return] = ACTIONS(87),
        [anon_sym_del] = ACTIONS(89),
        [sym_pass_statement] = ACTIONS(91),
        [sym_break_statement] = ACTIONS(91),
        [sym_continue_statement] = ACTIONS(91),
        [anon_sym_LBRACK] = ACTIONS(109),
        [anon_sym_LBRACE] = ACTIONS(111),
        [sym_number] = ACTIONS(113),
        [sym_identifier] = ACTIONS(115),
        [sym_comment] = ACTIONS(75),
        [sym__indent] = ACTIONS(585),
    },
    [422] = {
        [sym_else_clause] = STATE(423),
        [ts_builtin_sym_end] = ACTIONS(857),
        [anon_sym_SEMI] = ACTIONS(857),
        [anon_sym_print] = ACTIONS(855),
        [anon_sym_return] = ACTIONS(855),
        [anon_sym_del] = ACTIONS(855),
        [sym_pass_statement] = ACTIONS(855),
        [sym_break_statement] = ACTIONS(855),
        [sym_continue_statement] = ACTIONS(855),
        [anon_sym_if] = ACTIONS(855),
        [anon_sym_else] = ACTIONS(921),
        [anon_sym_for] = ACTIONS(855),
        [anon_sym_while] = ACTIONS(855),
        [anon_sym_try] = ACTIONS(855),
        [anon_sym_with] = ACTIONS(855),
        [anon_sym_def] = ACTIONS(855),
        [anon_sym_class] = ACTIONS(855),
        [anon_sym_AT] = ACTIONS(857),
        [anon_sym_LBRACK] = ACTIONS(857),
        [anon_sym_LBRACE] = ACTIONS(857),
        [sym_number] = ACTIONS(855),
        [sym_identifier] = ACTIONS(859),
        [sym_comment] = ACTIONS(75),
        [sym__newline] = ACTIONS(857),
    },
    [423] = {
        [ts_builtin_sym_end] = ACTIONS(863),
        [anon_sym_SEMI] = ACTIONS(863),
        [anon_sym_print] = ACTIONS(861),
        [anon_sym_return] = ACTIONS(861),
        [anon_sym_del] = ACTIONS(861),
        [sym_pass_statement] = ACTIONS(861),
        [sym_break_statement] = ACTIONS(861),
        [sym_continue_statement] = ACTIONS(861),
        [anon_sym_if] = ACTIONS(861),
        [anon_sym_for] = ACTIONS(861),
        [anon_sym_while] = ACTIONS(861),
        [anon_sym_try] = ACTIONS(861),
        [anon_sym_with] = ACTIONS(861),
        [anon_sym_def] = ACTIONS(861),
        [anon_sym_class] = ACTIONS(861),
        [anon_sym_AT] = ACTIONS(863),
        [anon_sym_LBRACK] = ACTIONS(863),
        [anon_sym_LBRACE] = ACTIONS(863),
        [sym_number] = ACTIONS(861),
        [sym_identifier] = ACTIONS(865),
        [sym_comment] = ACTIONS(75),
        [sym__newline] = ACTIONS(863),
    },
    [424] = {
        [anon_sym_COLON] = ACTIONS(941),
        [anon_sym_LPAREN] = ACTIONS(225),
        [anon_sym_STAR] = ACTIONS(227),
        [anon_sym_PLUS] = ACTIONS(229),
        [anon_sym_DASH] = ACTIONS(229),
        [anon_sym_SLASH] = ACTIONS(231),
        [anon_sym_STAR_STAR] = ACTIONS(233),
        [anon_sym_PIPE] = ACTIONS(235),
        [anon_sym_AMP] = ACTIONS(237),
        [anon_sym_CARET] = ACTIONS(239),
        [anon_sym_LT_LT] = ACTIONS(229),
        [anon_sym_GT_GT] = ACTIONS(229),
        [anon_sym_and] = ACTIONS(237),
        [anon_sym_or] = ACTIONS(235),
        [anon_sym_LBRACK] = ACTIONS(241),
        [sym_comment] = ACTIONS(75),
    },
    [425] = {
        [sym__simple_statement] = STATE(252),
        [sym_print_statement] = STATE(5),
        [sym_expression_statement] = STATE(5),
        [sym_return_statement] = STATE(5),
        [sym_delete_statement] = STATE(5),
        [sym__suite] = STATE(426),
        [sym__expression] = STATE(23),
        [sym_binary_operator] = STATE(16),
        [sym_subscript] = STATE(16),
        [sym_call] = STATE(16),
        [sym_list] = STATE(16),
        [sym_list_comprehension] = STATE(16),
        [sym_dictionary] = STATE(16),
        [sym_dictionary_comprehension] = STATE(16),
        [sym_set] = STATE(16),
        [sym_set_comprehension] = STATE(16),
        [anon_sym_print] = ACTIONS(85),
        [anon_sym_return] = ACTIONS(87),
        [anon_sym_del] = ACTIONS(89),
        [sym_pass_statement] = ACTIONS(91),
        [sym_break_statement] = ACTIONS(91),
        [sym_continue_statement] = ACTIONS(91),
        [anon_sym_LBRACK] = ACTIONS(109),
        [anon_sym_LBRACE] = ACTIONS(111),
        [sym_number] = ACTIONS(113),
        [sym_identifier] = ACTIONS(115),
        [sym_comment] = ACTIONS(75),
        [sym__indent] = ACTIONS(585),
    },
    [426] = {
        [sym_elif_clause] = STATE(428),
        [sym_else_clause] = STATE(429),
        [aux_sym_if_statement_repeat1] = STATE(430),
        [ts_builtin_sym_end] = ACTIONS(873),
        [anon_sym_SEMI] = ACTIONS(873),
        [anon_sym_print] = ACTIONS(869),
        [anon_sym_return] = ACTIONS(869),
        [anon_sym_del] = ACTIONS(869),
        [sym_pass_statement] = ACTIONS(869),
        [sym_break_statement] = ACTIONS(869),
        [sym_continue_statement] = ACTIONS(869),
        [anon_sym_if] = ACTIONS(869),
        [anon_sym_elif] = ACTIONS(943),
        [anon_sym_else] = ACTIONS(921),
        [anon_sym_for] = ACTIONS(869),
        [anon_sym_while] = ACTIONS(869),
        [anon_sym_try] = ACTIONS(869),
        [anon_sym_with] = ACTIONS(869),
        [anon_sym_def] = ACTIONS(869),
        [anon_sym_class] = ACTIONS(869),
        [anon_sym_AT] = ACTIONS(873),
        [anon_sym_LBRACK] = ACTIONS(873),
        [anon_sym_LBRACE] = ACTIONS(873),
        [sym_number] = ACTIONS(869),
        [sym_identifier] = ACTIONS(875),
        [sym_comment] = ACTIONS(75),
        [sym__newline] = ACTIONS(873),
    },
    [427] = {
        [sym__expression] = STATE(433),
        [sym_binary_operator] = STATE(41),
        [sym_subscript] = STATE(41),
        [sym_call] = STATE(41),
        [sym_list] = STATE(41),
        [sym_list_comprehension] = STATE(41),
        [sym_dictionary] = STATE(41),
        [sym_dictionary_comprehension] = STATE(41),
        [sym_set] = STATE(41),
        [sym_set_comprehension] = STATE(41),
        [anon_sym_LBRACK] = ACTIONS(119),
        [anon_sym_LBRACE] = ACTIONS(121),
        [sym_number] = ACTIONS(123),
        [sym_identifier] = ACTIONS(123),
        [sym_comment] = ACTIONS(75),
    },
    [428] = {
        [ts_builtin_sym_end] = ACTIONS(879),
        [anon_sym_SEMI] = ACTIONS(879),
        [anon_sym_print] = ACTIONS(877),
        [anon_sym_return] = ACTIONS(877),
        [anon_sym_del] = ACTIONS(877),
        [sym_pass_statement] = ACTIONS(877),
        [sym_break_statement] = ACTIONS(877),
        [sym_continue_statement] = ACTIONS(877),
        [anon_sym_if] = ACTIONS(877),
        [anon_sym_elif] = ACTIONS(877),
        [anon_sym_else] = ACTIONS(877),
        [anon_sym_for] = ACTIONS(877),
        [anon_sym_while] = ACTIONS(877),
        [anon_sym_try] = ACTIONS(877),
        [anon_sym_with] = ACTIONS(877),
        [anon_sym_def] = ACTIONS(877),
        [anon_sym_class] = ACTIONS(877),
        [anon_sym_AT] = ACTIONS(879),
        [anon_sym_LBRACK] = ACTIONS(879),
        [anon_sym_LBRACE] = ACTIONS(879),
        [sym_number] = ACTIONS(877),
        [sym_identifier] = ACTIONS(881),
        [sym_comment] = ACTIONS(75),
        [sym__newline] = ACTIONS(879),
    },
    [429] = {
        [ts_builtin_sym_end] = ACTIONS(885),
        [anon_sym_SEMI] = ACTIONS(885),
        [anon_sym_print] = ACTIONS(883),
        [anon_sym_return] = ACTIONS(883),
        [anon_sym_del] = ACTIONS(883),
        [sym_pass_statement] = ACTIONS(883),
        [sym_break_statement] = ACTIONS(883),
        [sym_continue_statement] = ACTIONS(883),
        [anon_sym_if] = ACTIONS(883),
        [anon_sym_for] = ACTIONS(883),
        [anon_sym_while] = ACTIONS(883),
        [anon_sym_try] = ACTIONS(883),
        [anon_sym_with] = ACTIONS(883),
        [anon_sym_def] = ACTIONS(883),
        [anon_sym_class] = ACTIONS(883),
        [anon_sym_AT] = ACTIONS(885),
        [anon_sym_LBRACK] = ACTIONS(885),
        [anon_sym_LBRACE] = ACTIONS(885),
        [sym_number] = ACTIONS(883),
        [sym_identifier] = ACTIONS(887),
        [sym_comment] = ACTIONS(75),
        [sym__newline] = ACTIONS(885),
    },
    [430] = {
        [sym_elif_clause] = STATE(431),
        [sym_else_clause] = STATE(432),
        [ts_builtin_sym_end] = ACTIONS(885),
        [anon_sym_SEMI] = ACTIONS(885),
        [anon_sym_print] = ACTIONS(883),
        [anon_sym_return] = ACTIONS(883),
        [anon_sym_del] = ACTIONS(883),
        [sym_pass_statement] = ACTIONS(883),
        [sym_break_statement] = ACTIONS(883),
        [sym_continue_statement] = ACTIONS(883),
        [anon_sym_if] = ACTIONS(883),
        [anon_sym_elif] = ACTIONS(943),
        [anon_sym_else] = ACTIONS(921),
        [anon_sym_for] = ACTIONS(883),
        [anon_sym_while] = ACTIONS(883),
        [anon_sym_try] = ACTIONS(883),
        [anon_sym_with] = ACTIONS(883),
        [anon_sym_def] = ACTIONS(883),
        [anon_sym_class] = ACTIONS(883),
        [anon_sym_AT] = ACTIONS(885),
        [anon_sym_LBRACK] = ACTIONS(885),
        [anon_sym_LBRACE] = ACTIONS(885),
        [sym_number] = ACTIONS(883),
        [sym_identifier] = ACTIONS(887),
        [sym_comment] = ACTIONS(75),
        [sym__newline] = ACTIONS(885),
    },
    [431] = {
        [ts_builtin_sym_end] = ACTIONS(891),
        [anon_sym_SEMI] = ACTIONS(891),
        [anon_sym_print] = ACTIONS(889),
        [anon_sym_return] = ACTIONS(889),
        [anon_sym_del] = ACTIONS(889),
        [sym_pass_statement] = ACTIONS(889),
        [sym_break_statement] = ACTIONS(889),
        [sym_continue_statement] = ACTIONS(889),
        [anon_sym_if] = ACTIONS(889),
        [anon_sym_elif] = ACTIONS(889),
        [anon_sym_else] = ACTIONS(889),
        [anon_sym_for] = ACTIONS(889),
        [anon_sym_while] = ACTIONS(889),
        [anon_sym_try] = ACTIONS(889),
        [anon_sym_with] = ACTIONS(889),
        [anon_sym_def] = ACTIONS(889),
        [anon_sym_class] = ACTIONS(889),
        [anon_sym_AT] = ACTIONS(891),
        [anon_sym_LBRACK] = ACTIONS(891),
        [anon_sym_LBRACE] = ACTIONS(891),
        [sym_number] = ACTIONS(889),
        [sym_identifier] = ACTIONS(893),
        [sym_comment] = ACTIONS(75),
        [sym__newline] = ACTIONS(891),
    },
    [432] = {
        [ts_builtin_sym_end] = ACTIONS(897),
        [anon_sym_SEMI] = ACTIONS(897),
        [anon_sym_print] = ACTIONS(895),
        [anon_sym_return] = ACTIONS(895),
        [anon_sym_del] = ACTIONS(895),
        [sym_pass_statement] = ACTIONS(895),
        [sym_break_statement] = ACTIONS(895),
        [sym_continue_statement] = ACTIONS(895),
        [anon_sym_if] = ACTIONS(895),
        [anon_sym_for] = ACTIONS(895),
        [anon_sym_while] = ACTIONS(895),
        [anon_sym_try] = ACTIONS(895),
        [anon_sym_with] = ACTIONS(895),
        [anon_sym_def] = ACTIONS(895),
        [anon_sym_class] = ACTIONS(895),
        [anon_sym_AT] = ACTIONS(897),
        [anon_sym_LBRACK] = ACTIONS(897),
        [anon_sym_LBRACE] = ACTIONS(897),
        [sym_number] = ACTIONS(895),
        [sym_identifier] = ACTIONS(899),
        [sym_comment] = ACTIONS(75),
        [sym__newline] = ACTIONS(897),
    },
    [433] = {
        [anon_sym_COLON] = ACTIONS(945),
        [anon_sym_LPAREN] = ACTIONS(225),
        [anon_sym_STAR] = ACTIONS(227),
        [anon_sym_PLUS] = ACTIONS(229),
        [anon_sym_DASH] = ACTIONS(229),
        [anon_sym_SLASH] = ACTIONS(231),
        [anon_sym_STAR_STAR] = ACTIONS(233),
        [anon_sym_PIPE] = ACTIONS(235),
        [anon_sym_AMP] = ACTIONS(237),
        [anon_sym_CARET] = ACTIONS(239),
        [anon_sym_LT_LT] = ACTIONS(229),
        [anon_sym_GT_GT] = ACTIONS(229),
        [anon_sym_and] = ACTIONS(237),
        [anon_sym_or] = ACTIONS(235),
        [anon_sym_LBRACK] = ACTIONS(241),
        [sym_comment] = ACTIONS(75),
    },
    [434] = {
        [sym__simple_statement] = STATE(252),
        [sym_print_statement] = STATE(5),
        [sym_expression_statement] = STATE(5),
        [sym_return_statement] = STATE(5),
        [sym_delete_statement] = STATE(5),
        [sym__suite] = STATE(435),
        [sym__expression] = STATE(23),
        [sym_binary_operator] = STATE(16),
        [sym_subscript] = STATE(16),
        [sym_call] = STATE(16),
        [sym_list] = STATE(16),
        [sym_list_comprehension] = STATE(16),
        [sym_dictionary] = STATE(16),
        [sym_dictionary_comprehension] = STATE(16),
        [sym_set] = STATE(16),
        [sym_set_comprehension] = STATE(16),
        [anon_sym_print] = ACTIONS(85),
        [anon_sym_return] = ACTIONS(87),
        [anon_sym_del] = ACTIONS(89),
        [sym_pass_statement] = ACTIONS(91),
        [sym_break_statement] = ACTIONS(91),
        [sym_continue_statement] = ACTIONS(91),
        [anon_sym_LBRACK] = ACTIONS(109),
        [anon_sym_LBRACE] = ACTIONS(111),
        [sym_number] = ACTIONS(113),
        [sym_identifier] = ACTIONS(115),
        [sym_comment] = ACTIONS(75),
        [sym__indent] = ACTIONS(585),
    },
    [435] = {
        [ts_builtin_sym_end] = ACTIONS(905),
        [anon_sym_SEMI] = ACTIONS(905),
        [anon_sym_print] = ACTIONS(903),
        [anon_sym_return] = ACTIONS(903),
        [anon_sym_del] = ACTIONS(903),
        [sym_pass_statement] = ACTIONS(903),
        [sym_break_statement] = ACTIONS(903),
        [sym_continue_statement] = ACTIONS(903),
        [anon_sym_if] = ACTIONS(903),
        [anon_sym_elif] = ACTIONS(903),
        [anon_sym_else] = ACTIONS(903),
        [anon_sym_for] = ACTIONS(903),
        [anon_sym_while] = ACTIONS(903),
        [anon_sym_try] = ACTIONS(903),
        [anon_sym_with] = ACTIONS(903),
        [anon_sym_def] = ACTIONS(903),
        [anon_sym_class] = ACTIONS(903),
        [anon_sym_AT] = ACTIONS(905),
        [anon_sym_LBRACK] = ACTIONS(905),
        [anon_sym_LBRACE] = ACTIONS(905),
        [sym_number] = ACTIONS(903),
        [sym_identifier] = ACTIONS(907),
        [sym_comment] = ACTIONS(75),
        [sym__newline] = ACTIONS(905),
    },
    [436] = {
        [sym_comment] = ACTIONS(75),
        [sym__newline] = ACTIONS(947),
    },
    [437] = {
        [aux_sym_print_statement_repeat1] = STATE(439),
        [anon_sym_COMMA] = ACTIONS(949),
        [anon_sym_LPAREN] = ACTIONS(165),
        [anon_sym_STAR] = ACTIONS(167),
        [anon_sym_PLUS] = ACTIONS(169),
        [anon_sym_DASH] = ACTIONS(169),
        [anon_sym_SLASH] = ACTIONS(171),
        [anon_sym_STAR_STAR] = ACTIONS(173),
        [anon_sym_PIPE] = ACTIONS(175),
        [anon_sym_AMP] = ACTIONS(177),
        [anon_sym_CARET] = ACTIONS(179),
        [anon_sym_LT_LT] = ACTIONS(169),
        [anon_sym_GT_GT] = ACTIONS(169),
        [anon_sym_and] = ACTIONS(177),
        [anon_sym_or] = ACTIONS(175),
        [anon_sym_LBRACK] = ACTIONS(181),
        [sym_comment] = ACTIONS(75),
        [sym__newline] = ACTIONS(387),
    },
    [438] = {
        [sym__expression] = STATE(442),
        [sym_binary_operator] = STATE(16),
        [sym_subscript] = STATE(16),
        [sym_call] = STATE(16),
        [sym_list] = STATE(16),
        [sym_list_comprehension] = STATE(16),
        [sym_dictionary] = STATE(16),
        [sym_dictionary_comprehension] = STATE(16),
        [sym_set] = STATE(16),
        [sym_set_comprehension] = STATE(16),
        [anon_sym_LBRACK] = ACTIONS(109),
        [anon_sym_LBRACE] = ACTIONS(111),
        [sym_number] = ACTIONS(113),
        [sym_identifier] = ACTIONS(113),
        [sym_comment] = ACTIONS(75),
    },
    [439] = {
        [anon_sym_COMMA] = ACTIONS(951),
        [sym_comment] = ACTIONS(75),
        [sym__newline] = ACTIONS(391),
    },
    [440] = {
        [sym__expression] = STATE(441),
        [sym_binary_operator] = STATE(16),
        [sym_subscript] = STATE(16),
        [sym_call] = STATE(16),
        [sym_list] = STATE(16),
        [sym_list_comprehension] = STATE(16),
        [sym_dictionary] = STATE(16),
        [sym_dictionary_comprehension] = STATE(16),
        [sym_set] = STATE(16),
        [sym_set_comprehension] = STATE(16),
        [anon_sym_LBRACK] = ACTIONS(109),
        [anon_sym_LBRACE] = ACTIONS(111),
        [sym_number] = ACTIONS(113),
        [sym_identifier] = ACTIONS(113),
        [sym_comment] = ACTIONS(75),
    },
    [441] = {
        [anon_sym_COMMA] = ACTIONS(393),
        [anon_sym_LPAREN] = ACTIONS(165),
        [anon_sym_STAR] = ACTIONS(167),
        [anon_sym_PLUS] = ACTIONS(169),
        [anon_sym_DASH] = ACTIONS(169),
        [anon_sym_SLASH] = ACTIONS(171),
        [anon_sym_STAR_STAR] = ACTIONS(173),
        [anon_sym_PIPE] = ACTIONS(175),
        [anon_sym_AMP] = ACTIONS(177),
        [anon_sym_CARET] = ACTIONS(179),
        [anon_sym_LT_LT] = ACTIONS(169),
        [anon_sym_GT_GT] = ACTIONS(169),
        [anon_sym_and] = ACTIONS(177),
        [anon_sym_or] = ACTIONS(175),
        [anon_sym_LBRACK] = ACTIONS(181),
        [sym_comment] = ACTIONS(75),
        [sym__newline] = ACTIONS(393),
    },
    [442] = {
        [anon_sym_COMMA] = ACTIONS(395),
        [anon_sym_LPAREN] = ACTIONS(165),
        [anon_sym_STAR] = ACTIONS(167),
        [anon_sym_PLUS] = ACTIONS(169),
        [anon_sym_DASH] = ACTIONS(169),
        [anon_sym_SLASH] = ACTIONS(171),
        [anon_sym_STAR_STAR] = ACTIONS(173),
        [anon_sym_PIPE] = ACTIONS(175),
        [anon_sym_AMP] = ACTIONS(177),
        [anon_sym_CARET] = ACTIONS(179),
        [anon_sym_LT_LT] = ACTIONS(169),
        [anon_sym_GT_GT] = ACTIONS(169),
        [anon_sym_and] = ACTIONS(177),
        [anon_sym_or] = ACTIONS(175),
        [anon_sym_LBRACK] = ACTIONS(181),
        [sym_comment] = ACTIONS(75),
        [sym__newline] = ACTIONS(395),
    },
    [443] = {
        [sym_comment] = ACTIONS(75),
        [sym__newline] = ACTIONS(953),
    },
    [444] = {
        [aux_sym_print_statement_repeat1] = STATE(445),
        [anon_sym_COMMA] = ACTIONS(949),
        [anon_sym_LPAREN] = ACTIONS(165),
        [anon_sym_STAR] = ACTIONS(167),
        [anon_sym_PLUS] = ACTIONS(169),
        [anon_sym_DASH] = ACTIONS(169),
        [anon_sym_SLASH] = ACTIONS(171),
        [anon_sym_STAR_STAR] = ACTIONS(173),
        [anon_sym_PIPE] = ACTIONS(175),
        [anon_sym_AMP] = ACTIONS(177),
        [anon_sym_CARET] = ACTIONS(179),
        [anon_sym_LT_LT] = ACTIONS(169),
        [anon_sym_GT_GT] = ACTIONS(169),
        [anon_sym_and] = ACTIONS(177),
        [anon_sym_or] = ACTIONS(175),
        [anon_sym_LBRACK] = ACTIONS(181),
        [sym_comment] = ACTIONS(75),
        [sym__newline] = ACTIONS(955),
    },
    [445] = {
        [anon_sym_COMMA] = ACTIONS(951),
        [sym_comment] = ACTIONS(75),
        [sym__newline] = ACTIONS(957),
    },
    [446] = {
        [sym_with_item] = STATE(640),
        [sym_dictionary_splat_parameter] = STATE(575),
        [sym__expression] = STATE(641),
        [sym_binary_operator] = STATE(16),
        [sym_subscript] = STATE(16),
        [sym_call] = STATE(16),
        [sym_keyword_argument] = STATE(642),
        [sym_dictionary_splat_argument] = STATE(643),
        [sym_list] = STATE(16),
        [sym_list_comprehension] = STATE(16),
        [sym_dictionary] = STATE(16),
        [sym_dictionary_comprehension] = STATE(16),
        [sym_pair] = STATE(644),
        [sym_set] = STATE(16),
        [sym_set_comprehension] = STATE(16),
        [anon_sym_RPAREN] = ACTIONS(959),
        [anon_sym_STAR] = ACTIONS(961),
        [anon_sym_STAR_STAR] = ACTIONS(967),
        [anon_sym_LBRACK] = ACTIONS(971),
        [anon_sym_DOT_DOT_DOT] = ACTIONS(975),
        [anon_sym_RBRACK] = ACTIONS(977),
        [anon_sym_LBRACE] = ACTIONS(979),
        [anon_sym_RBRACE] = ACTIONS(983),
        [sym_number] = ACTIONS(985),
        [sym_identifier] = ACTIONS(989),
        [sym_comment] = ACTIONS(75),
    },
    [447] = {
        [sym__expression] = STATE(631),
        [sym_binary_operator] = STATE(41),
        [sym_subscript] = STATE(41),
        [sym_call] = STATE(41),
        [sym_list] = STATE(41),
        [sym_list_comprehension] = STATE(41),
        [sym_dictionary] = STATE(41),
        [sym_dictionary_comprehension] = STATE(41),
        [sym_set] = STATE(41),
        [sym_set_comprehension] = STATE(41),
        [anon_sym_LBRACK] = ACTIONS(119),
        [anon_sym_LBRACE] = ACTIONS(121),
        [sym_number] = ACTIONS(123),
        [sym_identifier] = ACTIONS(123),
        [sym_comment] = ACTIONS(75),
    },
    [448] = {
        [sym__simple_statement] = STATE(511),
        [sym_print_statement] = STATE(5),
        [sym_expression_statement] = STATE(5),
        [sym_return_statement] = STATE(5),
        [sym_delete_statement] = STATE(5),
        [sym__suite] = STATE(491),
        [sym__expression] = STATE(557),
        [sym_binary_operator] = STATE(16),
        [sym_subscript] = STATE(16),
        [sym_call] = STATE(16),
        [sym_list] = STATE(16),
        [sym_list_comprehension] = STATE(16),
        [sym_dictionary] = STATE(16),
        [sym_dictionary_comprehension] = STATE(16),
        [sym_set] = STATE(16),
        [sym_set_comprehension] = STATE(16),
        [anon_sym_print] = ACTIONS(85),
        [anon_sym_return] = ACTIONS(87),
        [anon_sym_del] = ACTIONS(89),
        [sym_pass_statement] = ACTIONS(91),
        [sym_break_statement] = ACTIONS(91),
        [sym_continue_statement] = ACTIONS(91),
        [anon_sym_LBRACK] = ACTIONS(109),
        [anon_sym_LBRACE] = ACTIONS(111),
        [sym_number] = ACTIONS(113),
        [sym_identifier] = ACTIONS(115),
        [sym_comment] = ACTIONS(75),
        [sym__indent] = ACTIONS(995),
    },
    [449] = {
        [sym__expression] = STATE(628),
        [sym_binary_operator] = STATE(41),
        [sym_subscript] = STATE(41),
        [sym_call] = STATE(41),
        [sym_list] = STATE(41),
        [sym_list_comprehension] = STATE(41),
        [sym_dictionary] = STATE(41),
        [sym_dictionary_comprehension] = STATE(41),
        [sym_set] = STATE(41),
        [sym_set_comprehension] = STATE(41),
        [anon_sym_LBRACK] = ACTIONS(119),
        [anon_sym_LBRACE] = ACTIONS(121),
        [sym_number] = ACTIONS(123),
        [sym_identifier] = ACTIONS(123),
        [sym_comment] = ACTIONS(75),
    },
    [450] = {
        [anon_sym_COLON] = ACTIONS(997),
        [sym_comment] = ACTIONS(75),
    },
    [451] = {
        [sym_expression_list] = STATE(627),
        [sym__expression] = STATE(124),
        [sym_binary_operator] = STATE(41),
        [sym_subscript] = STATE(41),
        [sym_call] = STATE(41),
        [sym_list] = STATE(41),
        [sym_list_comprehension] = STATE(41),
        [sym_dictionary] = STATE(41),
        [sym_dictionary_comprehension] = STATE(41),
        [sym_set] = STATE(41),
        [sym_set_comprehension] = STATE(41),
        [anon_sym_LBRACK] = ACTIONS(119),
        [anon_sym_LBRACE] = ACTIONS(121),
        [sym_number] = ACTIONS(123),
        [sym_identifier] = ACTIONS(123),
        [sym_comment] = ACTIONS(75),
    },
    [452] = {
        [sym_expression_list] = STATE(534),
        [sym__expression] = STATE(623),
        [sym_binary_operator] = STATE(41),
        [sym_subscript] = STATE(41),
        [sym_call] = STATE(41),
        [sym_list] = STATE(41),
        [sym_list_comprehension] = STATE(41),
        [sym_dictionary] = STATE(41),
        [sym_dictionary_comprehension] = STATE(41),
        [sym_set] = STATE(41),
        [sym_set_comprehension] = STATE(41),
        [anon_sym_LBRACK] = ACTIONS(119),
        [anon_sym_LBRACE] = ACTIONS(121),
        [sym_number] = ACTIONS(123),
        [sym_identifier] = ACTIONS(123),
        [sym_comment] = ACTIONS(75),
    },
    [453] = {
        [sym__expression] = STATE(619),
        [sym_binary_operator] = STATE(41),
        [sym_subscript] = STATE(41),
        [sym_call] = STATE(41),
        [sym_list] = STATE(41),
        [sym_list_comprehension] = STATE(41),
        [sym_dictionary] = STATE(41),
        [sym_dictionary_comprehension] = STATE(41),
        [sym_set] = STATE(41),
        [sym_set_comprehension] = STATE(41),
        [anon_sym_LBRACK] = ACTIONS(119),
        [anon_sym_LBRACE] = ACTIONS(121),
        [sym_number] = ACTIONS(123),
        [sym_identifier] = ACTIONS(123),
        [sym_comment] = ACTIONS(75),
    },
    [454] = {
        [anon_sym_COLON] = ACTIONS(999),
        [sym_comment] = ACTIONS(75),
    },
    [455] = {
        [sym__expression] = STATE(612),
        [sym_binary_operator] = STATE(41),
        [sym_subscript] = STATE(41),
        [sym_call] = STATE(41),
        [sym_list] = STATE(41),
        [sym_list_comprehension] = STATE(41),
        [sym_dictionary] = STATE(41),
        [sym_dictionary_comprehension] = STATE(41),
        [sym_set] = STATE(41),
        [sym_set_comprehension] = STATE(41),
        [anon_sym_LBRACK] = ACTIONS(119),
        [anon_sym_LBRACE] = ACTIONS(121),
        [sym_number] = ACTIONS(123),
        [sym_identifier] = ACTIONS(123),
        [sym_comment] = ACTIONS(75),
    },
    [456] = {
        [sym__expression] = STATE(611),
        [sym_binary_operator] = STATE(41),
        [sym_subscript] = STATE(41),
        [sym_call] = STATE(41),
        [sym_list] = STATE(41),
        [sym_list_comprehension] = STATE(41),
        [sym_dictionary] = STATE(41),
        [sym_dictionary_comprehension] = STATE(41),
        [sym_set] = STATE(41),
        [sym_set_comprehension] = STATE(41),
        [anon_sym_LBRACK] = ACTIONS(119),
        [anon_sym_LBRACE] = ACTIONS(121),
        [sym_number] = ACTIONS(123),
        [sym_identifier] = ACTIONS(123),
        [sym_comment] = ACTIONS(75),
    },
    [457] = {
        [anon_sym_COLON] = ACTIONS(1001),
        [sym_comment] = ACTIONS(75),
    },
    [458] = {
        [sym_with_item] = STATE(608),
        [sym__expression] = STATE(318),
        [sym_binary_operator] = STATE(41),
        [sym_subscript] = STATE(41),
        [sym_call] = STATE(41),
        [sym_list] = STATE(41),
        [sym_list_comprehension] = STATE(41),
        [sym_dictionary] = STATE(41),
        [sym_dictionary_comprehension] = STATE(41),
        [sym_set] = STATE(41),
        [sym_set_comprehension] = STATE(41),
        [anon_sym_LBRACK] = ACTIONS(119),
        [anon_sym_LBRACE] = ACTIONS(121),
        [sym_number] = ACTIONS(123),
        [sym_identifier] = ACTIONS(123),
        [sym_comment] = ACTIONS(75),
    },
    [459] = {
        [sym_identifier] = ACTIONS(1003),
        [sym_comment] = ACTIONS(75),
    },
    [460] = {
        [sym_default_parameter] = STATE(293),
        [sym_list_splat_parameter] = STATE(294),
        [sym_dictionary_splat_parameter] = STATE(295),
        [sym_expression_list] = STATE(587),
        [sym__expression] = STATE(602),
        [sym_binary_operator] = STATE(41),
        [sym_subscript] = STATE(41),
        [sym_call] = STATE(41),
        [sym_keyword_argument] = STATE(167),
        [sym_list_splat_argument] = STATE(168),
        [sym_dictionary_splat_argument] = STATE(169),
        [sym_list] = STATE(41),
        [sym_list_comprehension] = STATE(41),
        [sym_dictionary] = STATE(41),
        [sym_dictionary_comprehension] = STATE(41),
        [sym_set] = STATE(41),
        [sym_set_comprehension] = STATE(41),
        [aux_sym_parameters_repeat1] = STATE(296),
        [aux_sym_call_repeat1] = STATE(170),
        [anon_sym_RPAREN] = ACTIONS(661),
        [anon_sym_STAR] = ACTIONS(1005),
        [anon_sym_STAR_STAR] = ACTIONS(211),
        [anon_sym_LBRACK] = ACTIONS(119),
        [anon_sym_LBRACE] = ACTIONS(121),
        [sym_number] = ACTIONS(123),
        [sym_identifier] = ACTIONS(1007),
        [sym_comment] = ACTIONS(75),
    },
    [461] = {
        [anon_sym_COMMA] = ACTIONS(1009),
        [anon_sym_COLON] = ACTIONS(1015),
        [anon_sym_for] = ACTIONS(1009),
        [anon_sym_in] = ACTIONS(1009),
        [anon_sym_as] = ACTIONS(1009),
        [anon_sym_LPAREN] = ACTIONS(1009),
        [anon_sym_RPAREN] = ACTIONS(1009),
        [anon_sym_STAR] = ACTIONS(1027),
        [anon_sym_PLUS] = ACTIONS(1009),
        [anon_sym_DASH] = ACTIONS(1009),
        [anon_sym_SLASH] = ACTIONS(1009),
        [anon_sym_STAR_STAR] = ACTIONS(1009),
        [anon_sym_PIPE] = ACTIONS(1009),
        [anon_sym_AMP] = ACTIONS(1009),
        [anon_sym_CARET] = ACTIONS(1009),
        [anon_sym_LT_LT] = ACTIONS(1009),
        [anon_sym_GT_GT] = ACTIONS(1009),
        [anon_sym_and] = ACTIONS(1009),
        [anon_sym_or] = ACTIONS(1009),
        [anon_sym_LBRACK] = ACTIONS(1009),
        [anon_sym_RBRACK] = ACTIONS(1009),
        [anon_sym_RBRACE] = ACTIONS(1009),
        [sym_comment] = ACTIONS(75),
        [sym__newline] = ACTIONS(1033),
    },
    [462] = {
        [sym__expression] = STATE(599),
        [sym_binary_operator] = STATE(41),
        [sym_subscript] = STATE(41),
        [sym_call] = STATE(41),
        [sym_list] = STATE(41),
        [sym_list_comprehension] = STATE(41),
        [sym_dictionary] = STATE(41),
        [sym_dictionary_comprehension] = STATE(41),
        [sym_set] = STATE(41),
        [sym_set_comprehension] = STATE(41),
        [anon_sym_LBRACK] = ACTIONS(119),
        [anon_sym_LBRACE] = ACTIONS(121),
        [sym_number] = ACTIONS(123),
        [sym_identifier] = ACTIONS(123),
        [sym_comment] = ACTIONS(75),
    },
    [463] = {
        [sym__expression] = STATE(598),
        [sym_binary_operator] = STATE(16),
        [sym_subscript] = STATE(16),
        [sym_call] = STATE(16),
        [sym_list] = STATE(16),
        [sym_list_comprehension] = STATE(16),
        [sym_dictionary] = STATE(16),
        [sym_dictionary_comprehension] = STATE(16),
        [sym_set] = STATE(16),
        [sym_set_comprehension] = STATE(16),
        [anon_sym_STAR] = ACTIONS(677),
        [anon_sym_LBRACK] = ACTIONS(109),
        [anon_sym_LBRACE] = ACTIONS(111),
        [sym_number] = ACTIONS(113),
        [sym_identifier] = ACTIONS(1041),
        [sym_comment] = ACTIONS(75),
    },
    [464] = {
        [sym_identifier] = ACTIONS(1043),
        [sym_comment] = ACTIONS(75),
    },
    [465] = {
        [sym_identifier] = ACTIONS(1045),
        [sym_comment] = ACTIONS(75),
    },
    [466] = {
        [sym__expression] = STATE(550),
        [sym_binary_operator] = STATE(16),
        [sym_subscript] = STATE(16),
        [sym_call] = STATE(16),
        [sym_list] = STATE(16),
        [sym_list_comprehension] = STATE(16),
        [sym_dictionary] = STATE(16),
        [sym_dictionary_comprehension] = STATE(16),
        [sym_set] = STATE(16),
        [sym_set_comprehension] = STATE(16),
        [anon_sym_LBRACK] = ACTIONS(109),
        [anon_sym_LBRACE] = ACTIONS(111),
        [sym_number] = ACTIONS(113),
        [sym_identifier] = ACTIONS(113),
        [sym_comment] = ACTIONS(75),
    },
    [467] = {
        [sym__expression] = STATE(593),
        [sym_binary_operator] = STATE(16),
        [sym_subscript] = STATE(16),
        [sym_call] = STATE(16),
        [sym_list] = STATE(16),
        [sym_list_comprehension] = STATE(16),
        [sym_dictionary] = STATE(16),
        [sym_dictionary_comprehension] = STATE(16),
        [sym_set] = STATE(16),
        [sym_set_comprehension] = STATE(16),
        [anon_sym_LBRACK] = ACTIONS(109),
        [anon_sym_LBRACE] = ACTIONS(111),
        [sym_number] = ACTIONS(113),
        [sym_identifier] = ACTIONS(113),
        [sym_comment] = ACTIONS(75),
    },
    [468] = {
        [sym__expression] = STATE(589),
        [sym_binary_operator] = STATE(41),
        [sym_subscript] = STATE(41),
        [sym_call] = STATE(41),
        [sym_list] = STATE(41),
        [sym_list_comprehension] = STATE(41),
        [sym_dictionary] = STATE(41),
        [sym_dictionary_comprehension] = STATE(41),
        [sym_set] = STATE(41),
        [sym_set_comprehension] = STATE(41),
        [anon_sym_LBRACK] = ACTIONS(119),
        [anon_sym_DOT_DOT_DOT] = ACTIONS(215),
        [anon_sym_RBRACK] = ACTIONS(133),
        [anon_sym_LBRACE] = ACTIONS(121),
        [sym_number] = ACTIONS(123),
        [sym_identifier] = ACTIONS(123),
        [sym_comment] = ACTIONS(75),
    },
    [469] = {
        [aux_sym_subscript_repeat1] = STATE(53),
        [anon_sym_COMMA] = ACTIONS(1047),
        [anon_sym_RBRACK] = ACTIONS(1051),
        [sym_comment] = ACTIONS(75),
    },
    [470] = {
        [anon_sym_COMMA] = ACTIONS(1055),
        [anon_sym_COLON] = ACTIONS(1055),
        [anon_sym_for] = ACTIONS(1055),
        [anon_sym_in] = ACTIONS(1055),
        [anon_sym_as] = ACTIONS(1055),
        [anon_sym_LPAREN] = ACTIONS(1055),
        [anon_sym_RPAREN] = ACTIONS(1055),
        [anon_sym_STAR] = ACTIONS(1064),
        [anon_sym_PLUS] = ACTIONS(1055),
        [anon_sym_DASH] = ACTIONS(1055),
        [anon_sym_SLASH] = ACTIONS(1055),
        [anon_sym_STAR_STAR] = ACTIONS(1055),
        [anon_sym_PIPE] = ACTIONS(1055),
        [anon_sym_AMP] = ACTIONS(1055),
        [anon_sym_CARET] = ACTIONS(1055),
        [anon_sym_LT_LT] = ACTIONS(1055),
        [anon_sym_GT_GT] = ACTIONS(1055),
        [anon_sym_and] = ACTIONS(1055),
        [anon_sym_or] = ACTIONS(1055),
        [anon_sym_LBRACK] = ACTIONS(1055),
        [anon_sym_RBRACK] = ACTIONS(1055),
        [anon_sym_RBRACE] = ACTIONS(1055),
        [sym_comment] = ACTIONS(75),
        [sym__newline] = ACTIONS(1055),
    },
    [471] = {
        [anon_sym_COMMA] = ACTIONS(1073),
        [anon_sym_COLON] = ACTIONS(1073),
        [anon_sym_for] = ACTIONS(1073),
        [anon_sym_in] = ACTIONS(1073),
        [anon_sym_as] = ACTIONS(1073),
        [anon_sym_LPAREN] = ACTIONS(1073),
        [anon_sym_RPAREN] = ACTIONS(1073),
        [anon_sym_STAR] = ACTIONS(1083),
        [anon_sym_PLUS] = ACTIONS(1073),
        [anon_sym_DASH] = ACTIONS(1073),
        [anon_sym_SLASH] = ACTIONS(1073),
        [anon_sym_STAR_STAR] = ACTIONS(1073),
        [anon_sym_PIPE] = ACTIONS(1073),
        [anon_sym_AMP] = ACTIONS(1073),
        [anon_sym_CARET] = ACTIONS(1073),
        [anon_sym_LT_LT] = ACTIONS(1073),
        [anon_sym_GT_GT] = ACTIONS(1073),
        [anon_sym_and] = ACTIONS(1073),
        [anon_sym_or] = ACTIONS(1073),
        [anon_sym_LBRACK] = ACTIONS(1073),
        [anon_sym_RBRACK] = ACTIONS(1073),
        [anon_sym_RBRACE] = ACTIONS(1073),
        [sym_comment] = ACTIONS(75),
        [sym__newline] = ACTIONS(1073),
    },
    [472] = {
        [sym_parameters] = STATE(486),
        [aux_sym_dotted_name_repeat1] = STATE(241),
        [anon_sym_COMMA] = ACTIONS(1093),
        [anon_sym_COLON] = ACTIONS(1097),
        [anon_sym_for] = ACTIONS(137),
        [anon_sym_in] = ACTIONS(137),
        [anon_sym_as] = ACTIONS(137),
        [anon_sym_LPAREN] = ACTIONS(1100),
        [anon_sym_RPAREN] = ACTIONS(1106),
        [anon_sym_EQ] = ACTIONS(1111),
        [anon_sym_STAR] = ACTIONS(139),
        [anon_sym_DOT] = ACTIONS(1113),
        [anon_sym_PLUS] = ACTIONS(137),
        [anon_sym_DASH] = ACTIONS(137),
        [anon_sym_SLASH] = ACTIONS(137),
        [anon_sym_STAR_STAR] = ACTIONS(137),
        [anon_sym_PIPE] = ACTIONS(137),
        [anon_sym_AMP] = ACTIONS(137),
        [anon_sym_CARET] = ACTIONS(137),
        [anon_sym_LT_LT] = ACTIONS(137),
        [anon_sym_GT_GT] = ACTIONS(137),
        [anon_sym_and] = ACTIONS(137),
        [anon_sym_or] = ACTIONS(137),
        [anon_sym_LBRACK] = ACTIONS(137),
        [anon_sym_RBRACK] = ACTIONS(137),
        [anon_sym_RBRACE] = ACTIONS(137),
        [sym_comment] = ACTIONS(75),
        [sym__newline] = ACTIONS(1117),
    },
    [473] = {
        [ts_builtin_sym_end] = ACTIONS(1122),
        [anon_sym_SEMI] = ACTIONS(1126),
        [anon_sym_print] = ACTIONS(1129),
        [anon_sym_return] = ACTIONS(1129),
        [anon_sym_del] = ACTIONS(1129),
        [sym_pass_statement] = ACTIONS(1129),
        [sym_break_statement] = ACTIONS(1129),
        [sym_continue_statement] = ACTIONS(1129),
        [anon_sym_if] = ACTIONS(1129),
        [anon_sym_elif] = ACTIONS(615),
        [anon_sym_else] = ACTIONS(615),
        [anon_sym_for] = ACTIONS(1129),
        [anon_sym_while] = ACTIONS(1129),
        [anon_sym_try] = ACTIONS(1129),
        [anon_sym_except] = ACTIONS(615),
        [anon_sym_finally] = ACTIONS(615),
        [anon_sym_with] = ACTIONS(1129),
        [anon_sym_def] = ACTIONS(1132),
        [anon_sym_class] = ACTIONS(1132),
        [anon_sym_AT] = ACTIONS(1137),
        [anon_sym_LBRACK] = ACTIONS(1126),
        [anon_sym_LBRACE] = ACTIONS(1126),
        [sym_number] = ACTIONS(1129),
        [sym_identifier] = ACTIONS(1142),
        [sym_comment] = ACTIONS(75),
        [sym__newline] = ACTIONS(1126),
        [sym__dedent] = ACTIONS(1126),
    },
    [474] = {
        [sym__statement] = STATE(262),
        [sym__simple_statement] = STATE(263),
        [sym_print_statement] = STATE(5),
        [sym_expression_statement] = STATE(5),
        [sym_return_statement] = STATE(5),
        [sym_delete_statement] = STATE(5),
        [sym__compound_statement] = STATE(264),
        [sym_if_statement] = STATE(265),
        [sym_for_statement] = STATE(265),
        [sym_while_statement] = STATE(265),
        [sym_try_statement] = STATE(265),
        [sym_with_statement] = STATE(265),
        [sym_function_definition] = STATE(265),
        [sym_class_definition] = STATE(265),
        [sym_decorated_definition] = STATE(265),
        [sym_decorator] = STATE(22),
        [sym__expression] = STATE(23),
        [sym_binary_operator] = STATE(16),
        [sym_subscript] = STATE(16),
        [sym_call] = STATE(16),
        [sym_list] = STATE(16),
        [sym_list_comprehension] = STATE(16),
        [sym_dictionary] = STATE(16),
        [sym_dictionary_comprehension] = STATE(16),
        [sym_set] = STATE(16),
        [sym_set_comprehension] = STATE(16),
        [aux_sym_module_repeat1] = STATE(514),
        [aux_sym_decorated_definition_repeat1] = STATE(267),
        [anon_sym_print] = ACTIONS(85),
        [anon_sym_return] = ACTIONS(87),
        [anon_sym_del] = ACTIONS(89),
        [sym_pass_statement] = ACTIONS(91),
        [sym_break_statement] = ACTIONS(91),
        [sym_continue_statement] = ACTIONS(91),
        [anon_sym_if] = ACTIONS(591),
        [anon_sym_for] = ACTIONS(593),
        [anon_sym_while] = ACTIONS(595),
        [anon_sym_try] = ACTIONS(597),
        [anon_sym_with] = ACTIONS(599),
        [anon_sym_def] = ACTIONS(601),
        [anon_sym_class] = ACTIONS(603),
        [anon_sym_AT] = ACTIONS(107),
        [anon_sym_LBRACK] = ACTIONS(109),
        [anon_sym_LBRACE] = ACTIONS(111),
        [sym_number] = ACTIONS(113),
        [sym_identifier] = ACTIONS(115),
        [sym_comment] = ACTIONS(75),
        [sym__dedent] = ACTIONS(1145),
    },
    [475] = {
        [ts_builtin_sym_end] = ACTIONS(1147),
        [anon_sym_SEMI] = ACTIONS(1147),
        [anon_sym_print] = ACTIONS(1150),
        [anon_sym_return] = ACTIONS(1150),
        [anon_sym_del] = ACTIONS(1150),
        [sym_pass_statement] = ACTIONS(1150),
        [sym_break_statement] = ACTIONS(1150),
        [sym_continue_statement] = ACTIONS(1150),
        [anon_sym_if] = ACTIONS(1150),
        [anon_sym_elif] = ACTIONS(1150),
        [anon_sym_else] = ACTIONS(1150),
        [anon_sym_for] = ACTIONS(1150),
        [anon_sym_while] = ACTIONS(1150),
        [anon_sym_try] = ACTIONS(1150),
        [anon_sym_except] = ACTIONS(1150),
        [anon_sym_finally] = ACTIONS(1150),
        [anon_sym_with] = ACTIONS(1150),
        [anon_sym_def] = ACTIONS(1150),
        [anon_sym_class] = ACTIONS(1150),
        [anon_sym_AT] = ACTIONS(1147),
        [anon_sym_LBRACK] = ACTIONS(1147),
        [anon_sym_LBRACE] = ACTIONS(1147),
        [sym_number] = ACTIONS(1150),
        [sym_identifier] = ACTIONS(1153),
        [sym_comment] = ACTIONS(75),
        [sym__newline] = ACTIONS(1147),
        [sym__dedent] = ACTIONS(1147),
    },
    [476] = {
        [ts_builtin_sym_end] = ACTIONS(1156),
        [anon_sym_SEMI] = ACTIONS(1156),
        [anon_sym_print] = ACTIONS(1159),
        [anon_sym_return] = ACTIONS(1159),
        [anon_sym_del] = ACTIONS(1159),
        [sym_pass_statement] = ACTIONS(1159),
        [sym_break_statement] = ACTIONS(1159),
        [sym_continue_statement] = ACTIONS(1159),
        [anon_sym_if] = ACTIONS(1159),
        [anon_sym_for] = ACTIONS(1159),
        [anon_sym_while] = ACTIONS(1159),
        [anon_sym_try] = ACTIONS(1159),
        [anon_sym_with] = ACTIONS(1159),
        [anon_sym_def] = ACTIONS(1159),
        [anon_sym_class] = ACTIONS(1159),
        [anon_sym_AT] = ACTIONS(1156),
        [anon_sym_LBRACK] = ACTIONS(1156),
        [anon_sym_LBRACE] = ACTIONS(1156),
        [sym_number] = ACTIONS(1159),
        [sym_identifier] = ACTIONS(1162),
        [sym_comment] = ACTIONS(75),
        [sym__newline] = ACTIONS(1156),
        [sym__dedent] = ACTIONS(1156),
    },
    [477] = {
        [sym_comment] = ACTIONS(75),
        [sym__newline] = ACTIONS(1165),
    },
    [478] = {
        [ts_builtin_sym_end] = ACTIONS(151),
        [anon_sym_SEMI] = ACTIONS(151),
        [anon_sym_print] = ACTIONS(153),
        [anon_sym_return] = ACTIONS(153),
        [anon_sym_del] = ACTIONS(153),
        [sym_pass_statement] = ACTIONS(153),
        [sym_break_statement] = ACTIONS(153),
        [sym_continue_statement] = ACTIONS(153),
        [anon_sym_if] = ACTIONS(153),
        [anon_sym_for] = ACTIONS(153),
        [anon_sym_while] = ACTIONS(153),
        [anon_sym_try] = ACTIONS(153),
        [anon_sym_with] = ACTIONS(153),
        [anon_sym_def] = ACTIONS(153),
        [anon_sym_class] = ACTIONS(153),
        [anon_sym_AT] = ACTIONS(151),
        [anon_sym_LBRACK] = ACTIONS(151),
        [anon_sym_LBRACE] = ACTIONS(151),
        [sym_number] = ACTIONS(153),
        [sym_identifier] = ACTIONS(155),
        [sym_comment] = ACTIONS(75),
        [sym__newline] = ACTIONS(151),
        [sym__dedent] = ACTIONS(151),
    },
    [479] = {
        [ts_builtin_sym_end] = ACTIONS(157),
        [anon_sym_SEMI] = ACTIONS(157),
        [anon_sym_print] = ACTIONS(159),
        [anon_sym_return] = ACTIONS(159),
        [anon_sym_del] = ACTIONS(159),
        [sym_pass_statement] = ACTIONS(159),
        [sym_break_statement] = ACTIONS(159),
        [sym_continue_statement] = ACTIONS(159),
        [anon_sym_if] = ACTIONS(159),
        [anon_sym_for] = ACTIONS(159),
        [anon_sym_while] = ACTIONS(159),
        [anon_sym_try] = ACTIONS(159),
        [anon_sym_with] = ACTIONS(159),
        [anon_sym_def] = ACTIONS(159),
        [anon_sym_class] = ACTIONS(159),
        [anon_sym_AT] = ACTIONS(157),
        [anon_sym_LBRACK] = ACTIONS(157),
        [anon_sym_LBRACE] = ACTIONS(157),
        [sym_number] = ACTIONS(159),
        [sym_identifier] = ACTIONS(161),
        [sym_comment] = ACTIONS(75),
        [sym__newline] = ACTIONS(157),
        [sym__dedent] = ACTIONS(157),
    },
    [480] = {
        [ts_builtin_sym_end] = ACTIONS(1167),
        [anon_sym_SEMI] = ACTIONS(1167),
        [anon_sym_print] = ACTIONS(1170),
        [anon_sym_return] = ACTIONS(1170),
        [anon_sym_del] = ACTIONS(1170),
        [sym_pass_statement] = ACTIONS(1170),
        [sym_break_statement] = ACTIONS(1170),
        [sym_continue_statement] = ACTIONS(1170),
        [anon_sym_if] = ACTIONS(1170),
        [anon_sym_elif] = ACTIONS(1170),
        [anon_sym_else] = ACTIONS(1170),
        [anon_sym_for] = ACTIONS(1170),
        [anon_sym_while] = ACTIONS(1170),
        [anon_sym_try] = ACTIONS(1170),
        [anon_sym_with] = ACTIONS(1170),
        [anon_sym_def] = ACTIONS(1170),
        [anon_sym_class] = ACTIONS(1170),
        [anon_sym_AT] = ACTIONS(1167),
        [anon_sym_LBRACK] = ACTIONS(1167),
        [anon_sym_LBRACE] = ACTIONS(1167),
        [sym_number] = ACTIONS(1170),
        [sym_identifier] = ACTIONS(1173),
        [sym_comment] = ACTIONS(75),
        [sym__newline] = ACTIONS(1167),
        [sym__dedent] = ACTIONS(1167),
    },
    [481] = {
        [sym_finally_clause] = STATE(519),
        [ts_builtin_sym_end] = ACTIONS(1176),
        [anon_sym_SEMI] = ACTIONS(1176),
        [anon_sym_print] = ACTIONS(1182),
        [anon_sym_return] = ACTIONS(1182),
        [anon_sym_del] = ACTIONS(1182),
        [sym_pass_statement] = ACTIONS(1182),
        [sym_break_statement] = ACTIONS(1182),
        [sym_continue_statement] = ACTIONS(1182),
        [anon_sym_if] = ACTIONS(1182),
        [anon_sym_for] = ACTIONS(1182),
        [anon_sym_while] = ACTIONS(1182),
        [anon_sym_try] = ACTIONS(1182),
        [anon_sym_finally] = ACTIONS(1188),
        [anon_sym_with] = ACTIONS(1182),
        [anon_sym_def] = ACTIONS(1182),
        [anon_sym_class] = ACTIONS(1182),
        [anon_sym_AT] = ACTIONS(1176),
        [anon_sym_LBRACK] = ACTIONS(1176),
        [anon_sym_LBRACE] = ACTIONS(1176),
        [sym_number] = ACTIONS(1182),
        [sym_identifier] = ACTIONS(1190),
        [sym_comment] = ACTIONS(75),
        [sym__newline] = ACTIONS(1176),
        [sym__dedent] = ACTIONS(1176),
    },
    [482] = {
        [ts_builtin_sym_end] = ACTIONS(1196),
        [anon_sym_SEMI] = ACTIONS(1196),
        [anon_sym_print] = ACTIONS(1199),
        [anon_sym_return] = ACTIONS(1199),
        [anon_sym_del] = ACTIONS(1199),
        [sym_pass_statement] = ACTIONS(1199),
        [sym_break_statement] = ACTIONS(1199),
        [sym_continue_statement] = ACTIONS(1199),
        [anon_sym_if] = ACTIONS(1199),
        [anon_sym_else] = ACTIONS(1199),
        [anon_sym_for] = ACTIONS(1199),
        [anon_sym_while] = ACTIONS(1199),
        [anon_sym_try] = ACTIONS(1199),
        [anon_sym_except] = ACTIONS(1199),
        [anon_sym_finally] = ACTIONS(1199),
        [anon_sym_with] = ACTIONS(1199),
        [anon_sym_def] = ACTIONS(1199),
        [anon_sym_class] = ACTIONS(1199),
        [anon_sym_AT] = ACTIONS(1196),
        [anon_sym_LBRACK] = ACTIONS(1196),
        [anon_sym_LBRACE] = ACTIONS(1196),
        [sym_number] = ACTIONS(1199),
        [sym_identifier] = ACTIONS(1202),
        [sym_comment] = ACTIONS(75),
        [sym__newline] = ACTIONS(1196),
        [sym__dedent] = ACTIONS(1196),
    },
    [483] = {
        [ts_builtin_sym_end] = ACTIONS(1205),
        [anon_sym_SEMI] = ACTIONS(1205),
        [anon_sym_print] = ACTIONS(1209),
        [anon_sym_return] = ACTIONS(1209),
        [anon_sym_del] = ACTIONS(1209),
        [sym_pass_statement] = ACTIONS(1209),
        [sym_break_statement] = ACTIONS(1209),
        [sym_continue_statement] = ACTIONS(1209),
        [anon_sym_if] = ACTIONS(1209),
        [anon_sym_for] = ACTIONS(1209),
        [anon_sym_while] = ACTIONS(1209),
        [anon_sym_try] = ACTIONS(1209),
        [anon_sym_with] = ACTIONS(1209),
        [anon_sym_def] = ACTIONS(1209),
        [anon_sym_class] = ACTIONS(1209),
        [anon_sym_AT] = ACTIONS(1205),
        [anon_sym_LBRACK] = ACTIONS(1205),
        [anon_sym_LBRACE] = ACTIONS(1205),
        [sym_number] = ACTIONS(1209),
        [sym_identifier] = ACTIONS(1213),
        [sym_comment] = ACTIONS(75),
        [sym__newline] = ACTIONS(1205),
        [sym__dedent] = ACTIONS(1205),
    },
    [484] = {
        [aux_sym_with_statement_repeat1] = STATE(502),
        [anon_sym_COMMA] = ACTIONS(1217),
        [anon_sym_COLON] = ACTIONS(1221),
        [sym_comment] = ACTIONS(75),
    },
    [485] = {
        [ts_builtin_sym_end] = ACTIONS(1225),
        [anon_sym_SEMI] = ACTIONS(1225),
        [anon_sym_print] = ACTIONS(1228),
        [anon_sym_return] = ACTIONS(1228),
        [anon_sym_del] = ACTIONS(1228),
        [sym_pass_statement] = ACTIONS(1228),
        [sym_break_statement] = ACTIONS(1228),
        [sym_continue_statement] = ACTIONS(1228),
        [anon_sym_if] = ACTIONS(1228),
        [anon_sym_for] = ACTIONS(1228),
        [anon_sym_while] = ACTIONS(1228),
        [anon_sym_try] = ACTIONS(1228),
        [anon_sym_with] = ACTIONS(1228),
        [anon_sym_def] = ACTIONS(1228),
        [anon_sym_class] = ACTIONS(1228),
        [anon_sym_AT] = ACTIONS(1225),
        [anon_sym_LBRACK] = ACTIONS(1225),
        [anon_sym_LBRACE] = ACTIONS(1225),
        [sym_number] = ACTIONS(1228),
        [sym_identifier] = ACTIONS(1231),
        [sym_comment] = ACTIONS(75),
        [sym__newline] = ACTIONS(1225),
        [sym__dedent] = ACTIONS(1225),
    },
    [486] = {
        [anon_sym_COLON] = ACTIONS(1234),
        [sym_comment] = ACTIONS(75),
    },
    [487] = {
        [anon_sym_COMMA] = ACTIONS(1236),
        [anon_sym_RPAREN] = ACTIONS(1238),
        [sym_comment] = ACTIONS(75),
    },
    [488] = {
        [anon_sym_COMMA] = ACTIONS(1240),
        [anon_sym_RPAREN] = ACTIONS(1238),
        [sym_comment] = ACTIONS(75),
    },
    [489] = {
        [anon_sym_RPAREN] = ACTIONS(1242),
        [sym_comment] = ACTIONS(75),
    },
    [490] = {
        [anon_sym_def] = ACTIONS(1244),
        [anon_sym_class] = ACTIONS(1244),
        [anon_sym_AT] = ACTIONS(1244),
        [sym_comment] = ACTIONS(75),
    },
    [491] = {
        [sym_elif_clause] = STATE(560),
        [sym_else_clause] = STATE(569),
        [sym_except_clause] = STATE(570),
        [sym_finally_clause] = STATE(571),
        [aux_sym_if_statement_repeat1] = STATE(500),
        [aux_sym_try_statement_repeat1] = STATE(501),
        [ts_builtin_sym_end] = ACTIONS(1247),
        [anon_sym_SEMI] = ACTIONS(1247),
        [anon_sym_print] = ACTIONS(1261),
        [anon_sym_return] = ACTIONS(1261),
        [anon_sym_del] = ACTIONS(1261),
        [sym_pass_statement] = ACTIONS(1261),
        [sym_break_statement] = ACTIONS(1261),
        [sym_continue_statement] = ACTIONS(1261),
        [anon_sym_if] = ACTIONS(1261),
        [anon_sym_elif] = ACTIONS(1275),
        [anon_sym_else] = ACTIONS(1278),
        [anon_sym_for] = ACTIONS(1261),
        [anon_sym_while] = ACTIONS(1261),
        [anon_sym_try] = ACTIONS(1261),
        [anon_sym_except] = ACTIONS(1283),
        [anon_sym_finally] = ACTIONS(1287),
        [anon_sym_with] = ACTIONS(1261),
        [anon_sym_def] = ACTIONS(1261),
        [anon_sym_class] = ACTIONS(1261),
        [anon_sym_AT] = ACTIONS(1247),
        [anon_sym_LBRACK] = ACTIONS(1247),
        [anon_sym_LBRACE] = ACTIONS(1247),
        [sym_number] = ACTIONS(1261),
        [sym_identifier] = ACTIONS(1292),
        [sym_comment] = ACTIONS(75),
        [sym__newline] = ACTIONS(1247),
        [sym__dedent] = ACTIONS(1247),
    },
    [492] = {
        [anon_sym_COLON] = ACTIONS(1306),
        [anon_sym_in] = ACTIONS(1308),
        [anon_sym_RPAREN] = ACTIONS(1310),
        [sym_comment] = ACTIONS(75),
        [sym__newline] = ACTIONS(1312),
    },
    [493] = {
        [aux_sym_print_statement_repeat1] = STATE(499),
        [aux_sym_subscript_repeat1] = STATE(53),
        [anon_sym_COMMA] = ACTIONS(1315),
        [anon_sym_COLON] = ACTIONS(1330),
        [anon_sym_for] = ACTIONS(1338),
        [anon_sym_in] = ACTIONS(1342),
        [anon_sym_as] = ACTIONS(1347),
        [anon_sym_LPAREN] = ACTIONS(1350),
        [anon_sym_RPAREN] = ACTIONS(1353),
        [anon_sym_STAR] = ACTIONS(1365),
        [anon_sym_PLUS] = ACTIONS(1368),
        [anon_sym_DASH] = ACTIONS(1368),
        [anon_sym_SLASH] = ACTIONS(1368),
        [anon_sym_STAR_STAR] = ACTIONS(1368),
        [anon_sym_PIPE] = ACTIONS(1368),
        [anon_sym_AMP] = ACTIONS(1368),
        [anon_sym_CARET] = ACTIONS(1368),
        [anon_sym_LT_LT] = ACTIONS(1368),
        [anon_sym_GT_GT] = ACTIONS(1368),
        [anon_sym_and] = ACTIONS(1368),
        [anon_sym_or] = ACTIONS(1368),
        [anon_sym_LBRACK] = ACTIONS(1371),
        [anon_sym_RBRACK] = ACTIONS(1374),
        [anon_sym_RBRACE] = ACTIONS(1381),
        [sym_comment] = ACTIONS(75),
        [sym__newline] = ACTIONS(1387),
    },
    [494] = {
        [anon_sym_COMMA] = ACTIONS(1394),
        [anon_sym_RPAREN] = ACTIONS(1398),
        [sym_comment] = ACTIONS(75),
    },
    [495] = {
        [aux_sym_call_repeat2] = STATE(504),
        [anon_sym_COMMA] = ACTIONS(1402),
        [anon_sym_RPAREN] = ACTIONS(1404),
        [sym_comment] = ACTIONS(75),
    },
    [496] = {
        [anon_sym_RPAREN] = ACTIONS(1406),
        [sym_comment] = ACTIONS(75),
    },
    [497] = {
        [aux_sym_dictionary_repeat1] = STATE(198),
        [anon_sym_COMMA] = ACTIONS(1408),
        [anon_sym_for] = ACTIONS(507),
        [anon_sym_RBRACE] = ACTIONS(1412),
        [sym_comment] = ACTIONS(75),
    },
    [498] = {
        [sym__statement] = STATE(529),
        [sym__simple_statement] = STATE(530),
        [sym_print_statement] = STATE(5),
        [sym_expression_statement] = STATE(5),
        [sym_return_statement] = STATE(5),
        [sym_delete_statement] = STATE(5),
        [sym__compound_statement] = STATE(478),
        [sym_if_statement] = STATE(479),
        [sym_for_statement] = STATE(479),
        [sym_while_statement] = STATE(479),
        [sym_try_statement] = STATE(479),
        [sym_with_statement] = STATE(479),
        [sym_function_definition] = STATE(479),
        [sym_class_definition] = STATE(479),
        [sym_decorated_definition] = STATE(479),
        [sym_decorator] = STATE(22),
        [sym__expression] = STATE(23),
        [sym_binary_operator] = STATE(16),
        [sym_subscript] = STATE(16),
        [sym_call] = STATE(16),
        [sym_list] = STATE(16),
        [sym_list_comprehension] = STATE(16),
        [sym_dictionary] = STATE(16),
        [sym_dictionary_comprehension] = STATE(16),
        [sym_set] = STATE(16),
        [sym_set_comprehension] = STATE(16),
        [aux_sym_decorated_definition_repeat1] = STATE(503),
        [ts_builtin_sym_end] = ACTIONS(185),
        [anon_sym_SEMI] = ACTIONS(187),
        [anon_sym_print] = ACTIONS(85),
        [anon_sym_return] = ACTIONS(87),
        [anon_sym_del] = ACTIONS(89),
        [sym_pass_statement] = ACTIONS(91),
        [sym_break_statement] = ACTIONS(91),
        [sym_continue_statement] = ACTIONS(91),
        [anon_sym_if] = ACTIONS(1416),
        [anon_sym_for] = ACTIONS(1418),
        [anon_sym_while] = ACTIONS(1420),
        [anon_sym_try] = ACTIONS(1422),
        [anon_sym_with] = ACTIONS(1424),
        [anon_sym_def] = ACTIONS(1426),
        [anon_sym_class] = ACTIONS(1428),
        [anon_sym_AT] = ACTIONS(107),
        [anon_sym_LBRACK] = ACTIONS(109),
        [anon_sym_LBRACE] = ACTIONS(111),
        [sym_number] = ACTIONS(113),
        [sym_identifier] = ACTIONS(115),
        [sym_comment] = ACTIONS(75),
        [sym__newline] = ACTIONS(187),
        [sym__dedent] = ACTIONS(1430),
    },
    [499] = {
        [anon_sym_COMMA] = ACTIONS(1432),
        [anon_sym_COLON] = ACTIONS(391),
        [anon_sym_in] = ACTIONS(391),
        [anon_sym_RPAREN] = ACTIONS(1434),
        [anon_sym_RBRACK] = ACTIONS(537),
        [anon_sym_RBRACE] = ACTIONS(521),
        [sym_comment] = ACTIONS(75),
        [sym__newline] = ACTIONS(1437),
    },
    [500] = {
        [sym_elif_clause] = STATE(520),
        [sym_else_clause] = STATE(521),
        [ts_builtin_sym_end] = ACTIONS(885),
        [anon_sym_SEMI] = ACTIONS(885),
        [anon_sym_print] = ACTIONS(883),
        [anon_sym_return] = ACTIONS(883),
        [anon_sym_del] = ACTIONS(883),
        [sym_pass_statement] = ACTIONS(883),
        [sym_break_statement] = ACTIONS(883),
        [sym_continue_statement] = ACTIONS(883),
        [anon_sym_if] = ACTIONS(883),
        [anon_sym_elif] = ACTIONS(1440),
        [anon_sym_else] = ACTIONS(1442),
        [anon_sym_for] = ACTIONS(883),
        [anon_sym_while] = ACTIONS(883),
        [anon_sym_try] = ACTIONS(883),
        [anon_sym_with] = ACTIONS(883),
        [anon_sym_def] = ACTIONS(883),
        [anon_sym_class] = ACTIONS(883),
        [anon_sym_AT] = ACTIONS(885),
        [anon_sym_LBRACK] = ACTIONS(885),
        [anon_sym_LBRACE] = ACTIONS(885),
        [sym_number] = ACTIONS(883),
        [sym_identifier] = ACTIONS(887),
        [sym_comment] = ACTIONS(75),
        [sym__newline] = ACTIONS(885),
        [sym__dedent] = ACTIONS(885),
    },
    [501] = {
        [sym_else_clause] = STATE(516),
        [sym_except_clause] = STATE(517),
        [sym_finally_clause] = STATE(518),
        [ts_builtin_sym_end] = ACTIONS(775),
        [anon_sym_SEMI] = ACTIONS(775),
        [anon_sym_print] = ACTIONS(773),
        [anon_sym_return] = ACTIONS(773),
        [anon_sym_del] = ACTIONS(773),
        [sym_pass_statement] = ACTIONS(773),
        [sym_break_statement] = ACTIONS(773),
        [sym_continue_statement] = ACTIONS(773),
        [anon_sym_if] = ACTIONS(773),
        [anon_sym_else] = ACTIONS(1442),
        [anon_sym_for] = ACTIONS(773),
        [anon_sym_while] = ACTIONS(773),
        [anon_sym_try] = ACTIONS(773),
        [anon_sym_except] = ACTIONS(1444),
        [anon_sym_finally] = ACTIONS(1188),
        [anon_sym_with] = ACTIONS(773),
        [anon_sym_def] = ACTIONS(773),
        [anon_sym_class] = ACTIONS(773),
        [anon_sym_AT] = ACTIONS(775),
        [anon_sym_LBRACK] = ACTIONS(775),
        [anon_sym_LBRACE] = ACTIONS(775),
        [sym_number] = ACTIONS(773),
        [sym_identifier] = ACTIONS(777),
        [sym_comment] = ACTIONS(75),
        [sym__newline] = ACTIONS(775),
        [sym__dedent] = ACTIONS(775),
    },
    [502] = {
        [anon_sym_COMMA] = ACTIONS(737),
        [anon_sym_COLON] = ACTIONS(1446),
        [sym_comment] = ACTIONS(75),
    },
    [503] = {
        [sym_function_definition] = STATE(509),
        [sym_class_definition] = STATE(509),
        [sym_decorator] = STATE(27),
        [anon_sym_def] = ACTIONS(1448),
        [anon_sym_class] = ACTIONS(1450),
        [anon_sym_AT] = ACTIONS(107),
        [sym_comment] = ACTIONS(75),
    },
    [504] = {
        [anon_sym_COMMA] = ACTIONS(1452),
        [anon_sym_RPAREN] = ACTIONS(1454),
        [sym_comment] = ACTIONS(75),
    },
    [505] = {
        [sym__expression] = STATE(92),
        [sym_binary_operator] = STATE(41),
        [sym_subscript] = STATE(41),
        [sym_call] = STATE(41),
        [sym_keyword_argument] = STATE(93),
        [sym_dictionary_splat_argument] = STATE(507),
        [sym_list] = STATE(41),
        [sym_list_comprehension] = STATE(41),
        [sym_dictionary] = STATE(41),
        [sym_dictionary_comprehension] = STATE(41),
        [sym_set] = STATE(41),
        [sym_set_comprehension] = STATE(41),
        [anon_sym_STAR_STAR] = ACTIONS(211),
        [anon_sym_LBRACK] = ACTIONS(119),
        [anon_sym_LBRACE] = ACTIONS(121),
        [sym_number] = ACTIONS(123),
        [sym_identifier] = ACTIONS(213),
        [sym_comment] = ACTIONS(75),
    },
    [506] = {
        [anon_sym_COMMA] = ACTIONS(1456),
        [anon_sym_COLON] = ACTIONS(1456),
        [anon_sym_for] = ACTIONS(1456),
        [anon_sym_in] = ACTIONS(1456),
        [anon_sym_as] = ACTIONS(1456),
        [anon_sym_LPAREN] = ACTIONS(1456),
        [anon_sym_RPAREN] = ACTIONS(1456),
        [anon_sym_STAR] = ACTIONS(1459),
        [anon_sym_PLUS] = ACTIONS(1456),
        [anon_sym_DASH] = ACTIONS(1456),
        [anon_sym_SLASH] = ACTIONS(1456),
        [anon_sym_STAR_STAR] = ACTIONS(1456),
        [anon_sym_PIPE] = ACTIONS(1456),
        [anon_sym_AMP] = ACTIONS(1456),
        [anon_sym_CARET] = ACTIONS(1456),
        [anon_sym_LT_LT] = ACTIONS(1456),
        [anon_sym_GT_GT] = ACTIONS(1456),
        [anon_sym_and] = ACTIONS(1456),
        [anon_sym_or] = ACTIONS(1456),
        [anon_sym_LBRACK] = ACTIONS(1456),
        [anon_sym_RBRACK] = ACTIONS(1456),
        [anon_sym_RBRACE] = ACTIONS(1456),
        [sym_comment] = ACTIONS(75),
        [sym__newline] = ACTIONS(1456),
    },
    [507] = {
        [anon_sym_RPAREN] = ACTIONS(1462),
        [sym_comment] = ACTIONS(75),
    },
    [508] = {
        [anon_sym_COMMA] = ACTIONS(1464),
        [anon_sym_COLON] = ACTIONS(1464),
        [anon_sym_for] = ACTIONS(1464),
        [anon_sym_in] = ACTIONS(1464),
        [anon_sym_as] = ACTIONS(1464),
        [anon_sym_LPAREN] = ACTIONS(1464),
        [anon_sym_RPAREN] = ACTIONS(1464),
        [anon_sym_STAR] = ACTIONS(1467),
        [anon_sym_PLUS] = ACTIONS(1464),
        [anon_sym_DASH] = ACTIONS(1464),
        [anon_sym_SLASH] = ACTIONS(1464),
        [anon_sym_STAR_STAR] = ACTIONS(1464),
        [anon_sym_PIPE] = ACTIONS(1464),
        [anon_sym_AMP] = ACTIONS(1464),
        [anon_sym_CARET] = ACTIONS(1464),
        [anon_sym_LT_LT] = ACTIONS(1464),
        [anon_sym_GT_GT] = ACTIONS(1464),
        [anon_sym_and] = ACTIONS(1464),
        [anon_sym_or] = ACTIONS(1464),
        [anon_sym_LBRACK] = ACTIONS(1464),
        [anon_sym_RBRACK] = ACTIONS(1464),
        [anon_sym_RBRACE] = ACTIONS(1464),
        [sym_comment] = ACTIONS(75),
        [sym__newline] = ACTIONS(1464),
    },
    [509] = {
        [ts_builtin_sym_end] = ACTIONS(193),
        [anon_sym_SEMI] = ACTIONS(193),
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
        [anon_sym_LBRACK] = ACTIONS(193),
        [anon_sym_LBRACE] = ACTIONS(193),
        [sym_number] = ACTIONS(195),
        [sym_identifier] = ACTIONS(197),
        [sym_comment] = ACTIONS(75),
        [sym__newline] = ACTIONS(193),
        [sym__dedent] = ACTIONS(193),
    },
    [510] = {
        [sym__simple_statement] = STATE(511),
        [sym_print_statement] = STATE(5),
        [sym_expression_statement] = STATE(5),
        [sym_return_statement] = STATE(5),
        [sym_delete_statement] = STATE(5),
        [sym__suite] = STATE(512),
        [sym__expression] = STATE(23),
        [sym_binary_operator] = STATE(16),
        [sym_subscript] = STATE(16),
        [sym_call] = STATE(16),
        [sym_list] = STATE(16),
        [sym_list_comprehension] = STATE(16),
        [sym_dictionary] = STATE(16),
        [sym_dictionary_comprehension] = STATE(16),
        [sym_set] = STATE(16),
        [sym_set_comprehension] = STATE(16),
        [anon_sym_print] = ACTIONS(85),
        [anon_sym_return] = ACTIONS(87),
        [anon_sym_del] = ACTIONS(89),
        [sym_pass_statement] = ACTIONS(91),
        [sym_break_statement] = ACTIONS(91),
        [sym_continue_statement] = ACTIONS(91),
        [anon_sym_LBRACK] = ACTIONS(109),
        [anon_sym_LBRACE] = ACTIONS(111),
        [sym_number] = ACTIONS(113),
        [sym_identifier] = ACTIONS(115),
        [sym_comment] = ACTIONS(75),
        [sym__indent] = ACTIONS(995),
    },
    [511] = {
        [sym_comment] = ACTIONS(75),
        [sym__newline] = ACTIONS(1145),
    },
    [512] = {
        [ts_builtin_sym_end] = ACTIONS(743),
        [anon_sym_SEMI] = ACTIONS(743),
        [anon_sym_print] = ACTIONS(741),
        [anon_sym_return] = ACTIONS(741),
        [anon_sym_del] = ACTIONS(741),
        [sym_pass_statement] = ACTIONS(741),
        [sym_break_statement] = ACTIONS(741),
        [sym_continue_statement] = ACTIONS(741),
        [anon_sym_if] = ACTIONS(741),
        [anon_sym_for] = ACTIONS(741),
        [anon_sym_while] = ACTIONS(741),
        [anon_sym_try] = ACTIONS(741),
        [anon_sym_with] = ACTIONS(741),
        [anon_sym_def] = ACTIONS(741),
        [anon_sym_class] = ACTIONS(741),
        [anon_sym_AT] = ACTIONS(743),
        [anon_sym_LBRACK] = ACTIONS(743),
        [anon_sym_LBRACE] = ACTIONS(743),
        [sym_number] = ACTIONS(741),
        [sym_identifier] = ACTIONS(745),
        [sym_comment] = ACTIONS(75),
        [sym__newline] = ACTIONS(743),
        [sym__dedent] = ACTIONS(743),
    },
    [513] = {
        [ts_builtin_sym_end] = ACTIONS(613),
        [anon_sym_SEMI] = ACTIONS(613),
        [anon_sym_print] = ACTIONS(615),
        [anon_sym_return] = ACTIONS(615),
        [anon_sym_del] = ACTIONS(615),
        [sym_pass_statement] = ACTIONS(615),
        [sym_break_statement] = ACTIONS(615),
        [sym_continue_statement] = ACTIONS(615),
        [anon_sym_if] = ACTIONS(615),
        [anon_sym_elif] = ACTIONS(615),
        [anon_sym_else] = ACTIONS(615),
        [anon_sym_for] = ACTIONS(615),
        [anon_sym_while] = ACTIONS(615),
        [anon_sym_try] = ACTIONS(615),
        [anon_sym_except] = ACTIONS(615),
        [anon_sym_finally] = ACTIONS(615),
        [anon_sym_with] = ACTIONS(615),
        [anon_sym_def] = ACTIONS(615),
        [anon_sym_class] = ACTIONS(615),
        [anon_sym_AT] = ACTIONS(613),
        [anon_sym_LBRACK] = ACTIONS(613),
        [anon_sym_LBRACE] = ACTIONS(613),
        [sym_number] = ACTIONS(615),
        [sym_identifier] = ACTIONS(617),
        [sym_comment] = ACTIONS(75),
        [sym__newline] = ACTIONS(613),
        [sym__dedent] = ACTIONS(613),
    },
    [514] = {
        [sym__statement] = STATE(270),
        [sym__simple_statement] = STATE(263),
        [sym_print_statement] = STATE(5),
        [sym_expression_statement] = STATE(5),
        [sym_return_statement] = STATE(5),
        [sym_delete_statement] = STATE(5),
        [sym__compound_statement] = STATE(264),
        [sym_if_statement] = STATE(265),
        [sym_for_statement] = STATE(265),
        [sym_while_statement] = STATE(265),
        [sym_try_statement] = STATE(265),
        [sym_with_statement] = STATE(265),
        [sym_function_definition] = STATE(265),
        [sym_class_definition] = STATE(265),
        [sym_decorated_definition] = STATE(265),
        [sym_decorator] = STATE(22),
        [sym__expression] = STATE(23),
        [sym_binary_operator] = STATE(16),
        [sym_subscript] = STATE(16),
        [sym_call] = STATE(16),
        [sym_list] = STATE(16),
        [sym_list_comprehension] = STATE(16),
        [sym_dictionary] = STATE(16),
        [sym_dictionary_comprehension] = STATE(16),
        [sym_set] = STATE(16),
        [sym_set_comprehension] = STATE(16),
        [aux_sym_decorated_definition_repeat1] = STATE(267),
        [anon_sym_print] = ACTIONS(85),
        [anon_sym_return] = ACTIONS(87),
        [anon_sym_del] = ACTIONS(89),
        [sym_pass_statement] = ACTIONS(91),
        [sym_break_statement] = ACTIONS(91),
        [sym_continue_statement] = ACTIONS(91),
        [anon_sym_if] = ACTIONS(591),
        [anon_sym_for] = ACTIONS(593),
        [anon_sym_while] = ACTIONS(595),
        [anon_sym_try] = ACTIONS(597),
        [anon_sym_with] = ACTIONS(599),
        [anon_sym_def] = ACTIONS(601),
        [anon_sym_class] = ACTIONS(603),
        [anon_sym_AT] = ACTIONS(107),
        [anon_sym_LBRACK] = ACTIONS(109),
        [anon_sym_LBRACE] = ACTIONS(111),
        [sym_number] = ACTIONS(113),
        [sym_identifier] = ACTIONS(115),
        [sym_comment] = ACTIONS(75),
        [sym__dedent] = ACTIONS(1430),
    },
    [515] = {
        [ts_builtin_sym_end] = ACTIONS(633),
        [anon_sym_SEMI] = ACTIONS(633),
        [anon_sym_print] = ACTIONS(635),
        [anon_sym_return] = ACTIONS(635),
        [anon_sym_del] = ACTIONS(635),
        [sym_pass_statement] = ACTIONS(635),
        [sym_break_statement] = ACTIONS(635),
        [sym_continue_statement] = ACTIONS(635),
        [anon_sym_if] = ACTIONS(635),
        [anon_sym_elif] = ACTIONS(635),
        [anon_sym_else] = ACTIONS(635),
        [anon_sym_for] = ACTIONS(635),
        [anon_sym_while] = ACTIONS(635),
        [anon_sym_try] = ACTIONS(635),
        [anon_sym_except] = ACTIONS(635),
        [anon_sym_finally] = ACTIONS(635),
        [anon_sym_with] = ACTIONS(635),
        [anon_sym_def] = ACTIONS(635),
        [anon_sym_class] = ACTIONS(635),
        [anon_sym_AT] = ACTIONS(633),
        [anon_sym_LBRACK] = ACTIONS(633),
        [anon_sym_LBRACE] = ACTIONS(633),
        [sym_number] = ACTIONS(635),
        [sym_identifier] = ACTIONS(637),
        [sym_comment] = ACTIONS(75),
        [sym__newline] = ACTIONS(633),
        [sym__dedent] = ACTIONS(633),
    },
    [516] = {
        [sym_finally_clause] = STATE(519),
        [ts_builtin_sym_end] = ACTIONS(789),
        [anon_sym_SEMI] = ACTIONS(789),
        [anon_sym_print] = ACTIONS(787),
        [anon_sym_return] = ACTIONS(787),
        [anon_sym_del] = ACTIONS(787),
        [sym_pass_statement] = ACTIONS(787),
        [sym_break_statement] = ACTIONS(787),
        [sym_continue_statement] = ACTIONS(787),
        [anon_sym_if] = ACTIONS(787),
        [anon_sym_for] = ACTIONS(787),
        [anon_sym_while] = ACTIONS(787),
        [anon_sym_try] = ACTIONS(787),
        [anon_sym_finally] = ACTIONS(1188),
        [anon_sym_with] = ACTIONS(787),
        [anon_sym_def] = ACTIONS(787),
        [anon_sym_class] = ACTIONS(787),
        [anon_sym_AT] = ACTIONS(789),
        [anon_sym_LBRACK] = ACTIONS(789),
        [anon_sym_LBRACE] = ACTIONS(789),
        [sym_number] = ACTIONS(787),
        [sym_identifier] = ACTIONS(791),
        [sym_comment] = ACTIONS(75),
        [sym__newline] = ACTIONS(789),
        [sym__dedent] = ACTIONS(789),
    },
    [517] = {
        [ts_builtin_sym_end] = ACTIONS(795),
        [anon_sym_SEMI] = ACTIONS(795),
        [anon_sym_print] = ACTIONS(793),
        [anon_sym_return] = ACTIONS(793),
        [anon_sym_del] = ACTIONS(793),
        [sym_pass_statement] = ACTIONS(793),
        [sym_break_statement] = ACTIONS(793),
        [sym_continue_statement] = ACTIONS(793),
        [anon_sym_if] = ACTIONS(793),
        [anon_sym_else] = ACTIONS(793),
        [anon_sym_for] = ACTIONS(793),
        [anon_sym_while] = ACTIONS(793),
        [anon_sym_try] = ACTIONS(793),
        [anon_sym_except] = ACTIONS(793),
        [anon_sym_finally] = ACTIONS(793),
        [anon_sym_with] = ACTIONS(793),
        [anon_sym_def] = ACTIONS(793),
        [anon_sym_class] = ACTIONS(793),
        [anon_sym_AT] = ACTIONS(795),
        [anon_sym_LBRACK] = ACTIONS(795),
        [anon_sym_LBRACE] = ACTIONS(795),
        [sym_number] = ACTIONS(793),
        [sym_identifier] = ACTIONS(797),
        [sym_comment] = ACTIONS(75),
        [sym__newline] = ACTIONS(795),
        [sym__dedent] = ACTIONS(795),
    },
    [518] = {
        [ts_builtin_sym_end] = ACTIONS(789),
        [anon_sym_SEMI] = ACTIONS(789),
        [anon_sym_print] = ACTIONS(787),
        [anon_sym_return] = ACTIONS(787),
        [anon_sym_del] = ACTIONS(787),
        [sym_pass_statement] = ACTIONS(787),
        [sym_break_statement] = ACTIONS(787),
        [sym_continue_statement] = ACTIONS(787),
        [anon_sym_if] = ACTIONS(787),
        [anon_sym_for] = ACTIONS(787),
        [anon_sym_while] = ACTIONS(787),
        [anon_sym_try] = ACTIONS(787),
        [anon_sym_with] = ACTIONS(787),
        [anon_sym_def] = ACTIONS(787),
        [anon_sym_class] = ACTIONS(787),
        [anon_sym_AT] = ACTIONS(789),
        [anon_sym_LBRACK] = ACTIONS(789),
        [anon_sym_LBRACE] = ACTIONS(789),
        [sym_number] = ACTIONS(787),
        [sym_identifier] = ACTIONS(791),
        [sym_comment] = ACTIONS(75),
        [sym__newline] = ACTIONS(789),
        [sym__dedent] = ACTIONS(789),
    },
    [519] = {
        [ts_builtin_sym_end] = ACTIONS(801),
        [anon_sym_SEMI] = ACTIONS(801),
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
        [anon_sym_AT] = ACTIONS(801),
        [anon_sym_LBRACK] = ACTIONS(801),
        [anon_sym_LBRACE] = ACTIONS(801),
        [sym_number] = ACTIONS(799),
        [sym_identifier] = ACTIONS(803),
        [sym_comment] = ACTIONS(75),
        [sym__newline] = ACTIONS(801),
        [sym__dedent] = ACTIONS(801),
    },
    [520] = {
        [ts_builtin_sym_end] = ACTIONS(891),
        [anon_sym_SEMI] = ACTIONS(891),
        [anon_sym_print] = ACTIONS(889),
        [anon_sym_return] = ACTIONS(889),
        [anon_sym_del] = ACTIONS(889),
        [sym_pass_statement] = ACTIONS(889),
        [sym_break_statement] = ACTIONS(889),
        [sym_continue_statement] = ACTIONS(889),
        [anon_sym_if] = ACTIONS(889),
        [anon_sym_elif] = ACTIONS(889),
        [anon_sym_else] = ACTIONS(889),
        [anon_sym_for] = ACTIONS(889),
        [anon_sym_while] = ACTIONS(889),
        [anon_sym_try] = ACTIONS(889),
        [anon_sym_with] = ACTIONS(889),
        [anon_sym_def] = ACTIONS(889),
        [anon_sym_class] = ACTIONS(889),
        [anon_sym_AT] = ACTIONS(891),
        [anon_sym_LBRACK] = ACTIONS(891),
        [anon_sym_LBRACE] = ACTIONS(891),
        [sym_number] = ACTIONS(889),
        [sym_identifier] = ACTIONS(893),
        [sym_comment] = ACTIONS(75),
        [sym__newline] = ACTIONS(891),
        [sym__dedent] = ACTIONS(891),
    },
    [521] = {
        [ts_builtin_sym_end] = ACTIONS(897),
        [anon_sym_SEMI] = ACTIONS(897),
        [anon_sym_print] = ACTIONS(895),
        [anon_sym_return] = ACTIONS(895),
        [anon_sym_del] = ACTIONS(895),
        [sym_pass_statement] = ACTIONS(895),
        [sym_break_statement] = ACTIONS(895),
        [sym_continue_statement] = ACTIONS(895),
        [anon_sym_if] = ACTIONS(895),
        [anon_sym_for] = ACTIONS(895),
        [anon_sym_while] = ACTIONS(895),
        [anon_sym_try] = ACTIONS(895),
        [anon_sym_with] = ACTIONS(895),
        [anon_sym_def] = ACTIONS(895),
        [anon_sym_class] = ACTIONS(895),
        [anon_sym_AT] = ACTIONS(897),
        [anon_sym_LBRACK] = ACTIONS(897),
        [anon_sym_LBRACE] = ACTIONS(897),
        [sym_number] = ACTIONS(895),
        [sym_identifier] = ACTIONS(899),
        [sym_comment] = ACTIONS(75),
        [sym__newline] = ACTIONS(897),
        [sym__dedent] = ACTIONS(897),
    },
    [522] = {
        [sym__simple_statement] = STATE(511),
        [sym_print_statement] = STATE(5),
        [sym_expression_statement] = STATE(5),
        [sym_return_statement] = STATE(5),
        [sym_delete_statement] = STATE(5),
        [sym__suite] = STATE(523),
        [sym__expression] = STATE(23),
        [sym_binary_operator] = STATE(16),
        [sym_subscript] = STATE(16),
        [sym_call] = STATE(16),
        [sym_list] = STATE(16),
        [sym_list_comprehension] = STATE(16),
        [sym_dictionary] = STATE(16),
        [sym_dictionary_comprehension] = STATE(16),
        [sym_set] = STATE(16),
        [sym_set_comprehension] = STATE(16),
        [anon_sym_print] = ACTIONS(85),
        [anon_sym_return] = ACTIONS(87),
        [anon_sym_del] = ACTIONS(89),
        [sym_pass_statement] = ACTIONS(91),
        [sym_break_statement] = ACTIONS(91),
        [sym_continue_statement] = ACTIONS(91),
        [anon_sym_LBRACK] = ACTIONS(109),
        [anon_sym_LBRACE] = ACTIONS(111),
        [sym_number] = ACTIONS(113),
        [sym_identifier] = ACTIONS(115),
        [sym_comment] = ACTIONS(75),
        [sym__indent] = ACTIONS(995),
    },
    [523] = {
        [ts_builtin_sym_end] = ACTIONS(807),
        [anon_sym_SEMI] = ACTIONS(807),
        [anon_sym_print] = ACTIONS(805),
        [anon_sym_return] = ACTIONS(805),
        [anon_sym_del] = ACTIONS(805),
        [sym_pass_statement] = ACTIONS(805),
        [sym_break_statement] = ACTIONS(805),
        [sym_continue_statement] = ACTIONS(805),
        [anon_sym_if] = ACTIONS(805),
        [anon_sym_for] = ACTIONS(805),
        [anon_sym_while] = ACTIONS(805),
        [anon_sym_try] = ACTIONS(805),
        [anon_sym_finally] = ACTIONS(805),
        [anon_sym_with] = ACTIONS(805),
        [anon_sym_def] = ACTIONS(805),
        [anon_sym_class] = ACTIONS(805),
        [anon_sym_AT] = ACTIONS(807),
        [anon_sym_LBRACK] = ACTIONS(807),
        [anon_sym_LBRACE] = ACTIONS(807),
        [sym_number] = ACTIONS(805),
        [sym_identifier] = ACTIONS(809),
        [sym_comment] = ACTIONS(75),
        [sym__newline] = ACTIONS(807),
        [sym__dedent] = ACTIONS(807),
    },
    [524] = {
        [sym__expression] = STATE(525),
        [sym_binary_operator] = STATE(16),
        [sym_subscript] = STATE(16),
        [sym_call] = STATE(16),
        [sym_list] = STATE(16),
        [sym_list_comprehension] = STATE(16),
        [sym_dictionary] = STATE(16),
        [sym_dictionary_comprehension] = STATE(16),
        [sym_set] = STATE(16),
        [sym_set_comprehension] = STATE(16),
        [anon_sym_LBRACK] = ACTIONS(109),
        [anon_sym_RBRACK] = ACTIONS(541),
        [anon_sym_LBRACE] = ACTIONS(111),
        [anon_sym_RBRACE] = ACTIONS(525),
        [sym_number] = ACTIONS(113),
        [sym_identifier] = ACTIONS(113),
        [sym_comment] = ACTIONS(75),
    },
    [525] = {
        [anon_sym_COMMA] = ACTIONS(393),
        [anon_sym_COLON] = ACTIONS(393),
        [anon_sym_in] = ACTIONS(393),
        [anon_sym_LPAREN] = ACTIONS(165),
        [anon_sym_RPAREN] = ACTIONS(393),
        [anon_sym_STAR] = ACTIONS(1470),
        [anon_sym_PLUS] = ACTIONS(1472),
        [anon_sym_DASH] = ACTIONS(1472),
        [anon_sym_SLASH] = ACTIONS(1472),
        [anon_sym_STAR_STAR] = ACTIONS(1472),
        [anon_sym_PIPE] = ACTIONS(1472),
        [anon_sym_AMP] = ACTIONS(1472),
        [anon_sym_CARET] = ACTIONS(1472),
        [anon_sym_LT_LT] = ACTIONS(1472),
        [anon_sym_GT_GT] = ACTIONS(1472),
        [anon_sym_and] = ACTIONS(1472),
        [anon_sym_or] = ACTIONS(1472),
        [anon_sym_LBRACK] = ACTIONS(181),
        [anon_sym_RBRACK] = ACTIONS(393),
        [anon_sym_RBRACE] = ACTIONS(393),
        [sym_comment] = ACTIONS(75),
        [sym__newline] = ACTIONS(393),
    },
    [526] = {
        [sym__expression] = STATE(527),
        [sym_binary_operator] = STATE(16),
        [sym_subscript] = STATE(16),
        [sym_call] = STATE(16),
        [sym_list] = STATE(16),
        [sym_list_comprehension] = STATE(16),
        [sym_dictionary] = STATE(16),
        [sym_dictionary_comprehension] = STATE(16),
        [sym_set] = STATE(16),
        [sym_set_comprehension] = STATE(16),
        [anon_sym_LBRACK] = ACTIONS(109),
        [anon_sym_LBRACE] = ACTIONS(111),
        [sym_number] = ACTIONS(113),
        [sym_identifier] = ACTIONS(113),
        [sym_comment] = ACTIONS(75),
    },
    [527] = {
        [anon_sym_COMMA] = ACTIONS(281),
        [anon_sym_COLON] = ACTIONS(281),
        [anon_sym_in] = ACTIONS(281),
        [anon_sym_LPAREN] = ACTIONS(1350),
        [anon_sym_RPAREN] = ACTIONS(281),
        [anon_sym_STAR] = ACTIONS(1474),
        [anon_sym_PLUS] = ACTIONS(1477),
        [anon_sym_DASH] = ACTIONS(1477),
        [anon_sym_SLASH] = ACTIONS(1477),
        [anon_sym_STAR_STAR] = ACTIONS(1477),
        [anon_sym_PIPE] = ACTIONS(1477),
        [anon_sym_AMP] = ACTIONS(1477),
        [anon_sym_CARET] = ACTIONS(1477),
        [anon_sym_LT_LT] = ACTIONS(1477),
        [anon_sym_GT_GT] = ACTIONS(1477),
        [anon_sym_and] = ACTIONS(1477),
        [anon_sym_or] = ACTIONS(1477),
        [anon_sym_LBRACK] = ACTIONS(1371),
        [anon_sym_RBRACK] = ACTIONS(281),
        [anon_sym_RBRACE] = ACTIONS(281),
        [sym_comment] = ACTIONS(75),
        [sym__newline] = ACTIONS(281),
    },
    [528] = {
        [sym_expression_list] = STATE(532),
        [sym__expression] = STATE(124),
        [sym_binary_operator] = STATE(41),
        [sym_subscript] = STATE(41),
        [sym_call] = STATE(41),
        [sym_list] = STATE(41),
        [sym_list_comprehension] = STATE(41),
        [sym_dictionary] = STATE(41),
        [sym_dictionary_comprehension] = STATE(41),
        [sym_set] = STATE(41),
        [sym_set_comprehension] = STATE(41),
        [anon_sym_LBRACK] = ACTIONS(119),
        [anon_sym_LBRACE] = ACTIONS(121),
        [sym_number] = ACTIONS(123),
        [sym_identifier] = ACTIONS(123),
        [sym_comment] = ACTIONS(75),
    },
    [529] = {
        [ts_builtin_sym_end] = ACTIONS(203),
        [anon_sym_SEMI] = ACTIONS(203),
        [anon_sym_print] = ACTIONS(205),
        [anon_sym_return] = ACTIONS(205),
        [anon_sym_del] = ACTIONS(205),
        [sym_pass_statement] = ACTIONS(205),
        [sym_break_statement] = ACTIONS(205),
        [sym_continue_statement] = ACTIONS(205),
        [anon_sym_if] = ACTIONS(205),
        [anon_sym_for] = ACTIONS(205),
        [anon_sym_while] = ACTIONS(205),
        [anon_sym_try] = ACTIONS(205),
        [anon_sym_with] = ACTIONS(205),
        [anon_sym_def] = ACTIONS(205),
        [anon_sym_class] = ACTIONS(205),
        [anon_sym_AT] = ACTIONS(203),
        [anon_sym_LBRACK] = ACTIONS(203),
        [anon_sym_LBRACE] = ACTIONS(203),
        [sym_number] = ACTIONS(205),
        [sym_identifier] = ACTIONS(207),
        [sym_comment] = ACTIONS(75),
        [sym__newline] = ACTIONS(203),
        [sym__dedent] = ACTIONS(203),
    },
    [530] = {
        [sym_comment] = ACTIONS(75),
        [sym__newline] = ACTIONS(1480),
    },
    [531] = {
        [ts_builtin_sym_end] = ACTIONS(493),
        [anon_sym_SEMI] = ACTIONS(493),
        [anon_sym_print] = ACTIONS(495),
        [anon_sym_return] = ACTIONS(495),
        [anon_sym_del] = ACTIONS(495),
        [sym_pass_statement] = ACTIONS(495),
        [sym_break_statement] = ACTIONS(495),
        [sym_continue_statement] = ACTIONS(495),
        [anon_sym_if] = ACTIONS(495),
        [anon_sym_for] = ACTIONS(495),
        [anon_sym_while] = ACTIONS(495),
        [anon_sym_try] = ACTIONS(495),
        [anon_sym_with] = ACTIONS(495),
        [anon_sym_def] = ACTIONS(495),
        [anon_sym_class] = ACTIONS(495),
        [anon_sym_AT] = ACTIONS(493),
        [anon_sym_LBRACK] = ACTIONS(493),
        [anon_sym_LBRACE] = ACTIONS(493),
        [sym_number] = ACTIONS(495),
        [sym_identifier] = ACTIONS(497),
        [sym_comment] = ACTIONS(75),
        [sym__newline] = ACTIONS(493),
        [sym__dedent] = ACTIONS(493),
    },
    [532] = {
        [anon_sym_in] = ACTIONS(1482),
        [sym_comment] = ACTIONS(75),
    },
    [533] = {
        [sym_expression_list] = STATE(534),
        [sym__expression] = STATE(124),
        [sym_binary_operator] = STATE(41),
        [sym_subscript] = STATE(41),
        [sym_call] = STATE(41),
        [sym_list] = STATE(41),
        [sym_list_comprehension] = STATE(41),
        [sym_dictionary] = STATE(41),
        [sym_dictionary_comprehension] = STATE(41),
        [sym_set] = STATE(41),
        [sym_set_comprehension] = STATE(41),
        [anon_sym_LBRACK] = ACTIONS(119),
        [anon_sym_LBRACE] = ACTIONS(121),
        [sym_number] = ACTIONS(123),
        [sym_identifier] = ACTIONS(123),
        [sym_comment] = ACTIONS(75),
    },
    [534] = {
        [anon_sym_COLON] = ACTIONS(1306),
        [sym_comment] = ACTIONS(75),
    },
    [535] = {
        [sym__simple_statement] = STATE(511),
        [sym_print_statement] = STATE(5),
        [sym_expression_statement] = STATE(5),
        [sym_return_statement] = STATE(5),
        [sym_delete_statement] = STATE(5),
        [sym__suite] = STATE(536),
        [sym__expression] = STATE(23),
        [sym_binary_operator] = STATE(16),
        [sym_subscript] = STATE(16),
        [sym_call] = STATE(16),
        [sym_list] = STATE(16),
        [sym_list_comprehension] = STATE(16),
        [sym_dictionary] = STATE(16),
        [sym_dictionary_comprehension] = STATE(16),
        [sym_set] = STATE(16),
        [sym_set_comprehension] = STATE(16),
        [anon_sym_print] = ACTIONS(85),
        [anon_sym_return] = ACTIONS(87),
        [anon_sym_del] = ACTIONS(89),
        [sym_pass_statement] = ACTIONS(91),
        [sym_break_statement] = ACTIONS(91),
        [sym_continue_statement] = ACTIONS(91),
        [anon_sym_LBRACK] = ACTIONS(109),
        [anon_sym_LBRACE] = ACTIONS(111),
        [sym_number] = ACTIONS(113),
        [sym_identifier] = ACTIONS(115),
        [sym_comment] = ACTIONS(75),
        [sym__indent] = ACTIONS(995),
    },
    [536] = {
        [sym_else_clause] = STATE(537),
        [ts_builtin_sym_end] = ACTIONS(857),
        [anon_sym_SEMI] = ACTIONS(857),
        [anon_sym_print] = ACTIONS(855),
        [anon_sym_return] = ACTIONS(855),
        [anon_sym_del] = ACTIONS(855),
        [sym_pass_statement] = ACTIONS(855),
        [sym_break_statement] = ACTIONS(855),
        [sym_continue_statement] = ACTIONS(855),
        [anon_sym_if] = ACTIONS(855),
        [anon_sym_else] = ACTIONS(1442),
        [anon_sym_for] = ACTIONS(855),
        [anon_sym_while] = ACTIONS(855),
        [anon_sym_try] = ACTIONS(855),
        [anon_sym_with] = ACTIONS(855),
        [anon_sym_def] = ACTIONS(855),
        [anon_sym_class] = ACTIONS(855),
        [anon_sym_AT] = ACTIONS(857),
        [anon_sym_LBRACK] = ACTIONS(857),
        [anon_sym_LBRACE] = ACTIONS(857),
        [sym_number] = ACTIONS(855),
        [sym_identifier] = ACTIONS(859),
        [sym_comment] = ACTIONS(75),
        [sym__newline] = ACTIONS(857),
        [sym__dedent] = ACTIONS(857),
    },
    [537] = {
        [ts_builtin_sym_end] = ACTIONS(863),
        [anon_sym_SEMI] = ACTIONS(863),
        [anon_sym_print] = ACTIONS(861),
        [anon_sym_return] = ACTIONS(861),
        [anon_sym_del] = ACTIONS(861),
        [sym_pass_statement] = ACTIONS(861),
        [sym_break_statement] = ACTIONS(861),
        [sym_continue_statement] = ACTIONS(861),
        [anon_sym_if] = ACTIONS(861),
        [anon_sym_for] = ACTIONS(861),
        [anon_sym_while] = ACTIONS(861),
        [anon_sym_try] = ACTIONS(861),
        [anon_sym_with] = ACTIONS(861),
        [anon_sym_def] = ACTIONS(861),
        [anon_sym_class] = ACTIONS(861),
        [anon_sym_AT] = ACTIONS(863),
        [anon_sym_LBRACK] = ACTIONS(863),
        [anon_sym_LBRACE] = ACTIONS(863),
        [sym_number] = ACTIONS(861),
        [sym_identifier] = ACTIONS(865),
        [sym_comment] = ACTIONS(75),
        [sym__newline] = ACTIONS(863),
        [sym__dedent] = ACTIONS(863),
    },
    [538] = {
        [anon_sym_COMMA] = ACTIONS(1009),
        [anon_sym_COLON] = ACTIONS(1009),
        [anon_sym_for] = ACTIONS(1009),
        [anon_sym_in] = ACTIONS(1009),
        [anon_sym_as] = ACTIONS(1009),
        [anon_sym_LPAREN] = ACTIONS(1009),
        [anon_sym_RPAREN] = ACTIONS(1009),
        [anon_sym_STAR] = ACTIONS(1027),
        [anon_sym_PLUS] = ACTIONS(1009),
        [anon_sym_DASH] = ACTIONS(1009),
        [anon_sym_SLASH] = ACTIONS(1009),
        [anon_sym_STAR_STAR] = ACTIONS(1009),
        [anon_sym_PIPE] = ACTIONS(1009),
        [anon_sym_AMP] = ACTIONS(1009),
        [anon_sym_CARET] = ACTIONS(1009),
        [anon_sym_LT_LT] = ACTIONS(1009),
        [anon_sym_GT_GT] = ACTIONS(1009),
        [anon_sym_and] = ACTIONS(1009),
        [anon_sym_or] = ACTIONS(1009),
        [anon_sym_LBRACK] = ACTIONS(1009),
        [anon_sym_RBRACK] = ACTIONS(1009),
        [anon_sym_RBRACE] = ACTIONS(1009),
        [sym_comment] = ACTIONS(75),
        [sym__newline] = ACTIONS(1009),
    },
    [539] = {
        [sym__expression] = STATE(96),
        [sym_binary_operator] = STATE(41),
        [sym_subscript] = STATE(41),
        [sym_call] = STATE(41),
        [sym_keyword_argument] = STATE(97),
        [sym_dictionary_splat_argument] = STATE(541),
        [sym_list] = STATE(41),
        [sym_list_comprehension] = STATE(41),
        [sym_dictionary] = STATE(41),
        [sym_dictionary_comprehension] = STATE(41),
        [sym_set] = STATE(41),
        [sym_set_comprehension] = STATE(41),
        [anon_sym_STAR_STAR] = ACTIONS(211),
        [anon_sym_LBRACK] = ACTIONS(119),
        [anon_sym_LBRACE] = ACTIONS(121),
        [sym_number] = ACTIONS(123),
        [sym_identifier] = ACTIONS(213),
        [sym_comment] = ACTIONS(75),
    },
    [540] = {
        [anon_sym_COMMA] = ACTIONS(1484),
        [anon_sym_COLON] = ACTIONS(1484),
        [anon_sym_for] = ACTIONS(1484),
        [anon_sym_in] = ACTIONS(1484),
        [anon_sym_as] = ACTIONS(1484),
        [anon_sym_LPAREN] = ACTIONS(1484),
        [anon_sym_RPAREN] = ACTIONS(1484),
        [anon_sym_STAR] = ACTIONS(1487),
        [anon_sym_PLUS] = ACTIONS(1484),
        [anon_sym_DASH] = ACTIONS(1484),
        [anon_sym_SLASH] = ACTIONS(1484),
        [anon_sym_STAR_STAR] = ACTIONS(1484),
        [anon_sym_PIPE] = ACTIONS(1484),
        [anon_sym_AMP] = ACTIONS(1484),
        [anon_sym_CARET] = ACTIONS(1484),
        [anon_sym_LT_LT] = ACTIONS(1484),
        [anon_sym_GT_GT] = ACTIONS(1484),
        [anon_sym_and] = ACTIONS(1484),
        [anon_sym_or] = ACTIONS(1484),
        [anon_sym_LBRACK] = ACTIONS(1484),
        [anon_sym_RBRACK] = ACTIONS(1484),
        [anon_sym_RBRACE] = ACTIONS(1484),
        [sym_comment] = ACTIONS(75),
        [sym__newline] = ACTIONS(1484),
    },
    [541] = {
        [anon_sym_RPAREN] = ACTIONS(1490),
        [sym_comment] = ACTIONS(75),
    },
    [542] = {
        [anon_sym_COMMA] = ACTIONS(1492),
        [anon_sym_COLON] = ACTIONS(1492),
        [anon_sym_for] = ACTIONS(1492),
        [anon_sym_in] = ACTIONS(1492),
        [anon_sym_as] = ACTIONS(1492),
        [anon_sym_LPAREN] = ACTIONS(1492),
        [anon_sym_RPAREN] = ACTIONS(1492),
        [anon_sym_STAR] = ACTIONS(1495),
        [anon_sym_PLUS] = ACTIONS(1492),
        [anon_sym_DASH] = ACTIONS(1492),
        [anon_sym_SLASH] = ACTIONS(1492),
        [anon_sym_STAR_STAR] = ACTIONS(1492),
        [anon_sym_PIPE] = ACTIONS(1492),
        [anon_sym_AMP] = ACTIONS(1492),
        [anon_sym_CARET] = ACTIONS(1492),
        [anon_sym_LT_LT] = ACTIONS(1492),
        [anon_sym_GT_GT] = ACTIONS(1492),
        [anon_sym_and] = ACTIONS(1492),
        [anon_sym_or] = ACTIONS(1492),
        [anon_sym_LBRACK] = ACTIONS(1492),
        [anon_sym_RBRACK] = ACTIONS(1492),
        [anon_sym_RBRACE] = ACTIONS(1492),
        [sym_comment] = ACTIONS(75),
        [sym__newline] = ACTIONS(1492),
    },
    [543] = {
        [anon_sym_RPAREN] = ACTIONS(1454),
        [anon_sym_STAR] = ACTIONS(1498),
        [anon_sym_STAR_STAR] = ACTIONS(1501),
        [anon_sym_LBRACK] = ACTIONS(1501),
        [anon_sym_LBRACE] = ACTIONS(1501),
        [sym_number] = ACTIONS(1498),
        [sym_identifier] = ACTIONS(1498),
        [sym_comment] = ACTIONS(75),
    },
    [544] = {
        [sym__expression] = STATE(563),
        [sym_binary_operator] = STATE(16),
        [sym_subscript] = STATE(16),
        [sym_call] = STATE(16),
        [sym_list] = STATE(16),
        [sym_list_comprehension] = STATE(16),
        [sym_dictionary] = STATE(16),
        [sym_dictionary_comprehension] = STATE(16),
        [sym_set] = STATE(16),
        [sym_set_comprehension] = STATE(16),
        [anon_sym_RPAREN] = ACTIONS(1454),
        [anon_sym_STAR] = ACTIONS(1498),
        [anon_sym_STAR_STAR] = ACTIONS(1501),
        [anon_sym_LBRACK] = ACTIONS(971),
        [anon_sym_DOT_DOT_DOT] = ACTIONS(243),
        [anon_sym_RBRACK] = ACTIONS(1504),
        [anon_sym_LBRACE] = ACTIONS(979),
        [anon_sym_RBRACE] = ACTIONS(521),
        [sym_number] = ACTIONS(985),
        [sym_identifier] = ACTIONS(985),
        [sym_comment] = ACTIONS(75),
    },
    [545] = {
        [sym__simple_statement] = STATE(511),
        [sym_print_statement] = STATE(5),
        [sym_expression_statement] = STATE(5),
        [sym_return_statement] = STATE(5),
        [sym_delete_statement] = STATE(5),
        [sym__suite] = STATE(556),
        [sym__expression] = STATE(557),
        [sym_binary_operator] = STATE(16),
        [sym_subscript] = STATE(16),
        [sym_call] = STATE(16),
        [sym_list] = STATE(16),
        [sym_list_comprehension] = STATE(16),
        [sym_dictionary] = STATE(16),
        [sym_dictionary_comprehension] = STATE(16),
        [sym_set] = STATE(16),
        [sym_set_comprehension] = STATE(16),
        [anon_sym_print] = ACTIONS(85),
        [anon_sym_return] = ACTIONS(87),
        [anon_sym_del] = ACTIONS(89),
        [sym_pass_statement] = ACTIONS(91),
        [sym_break_statement] = ACTIONS(91),
        [sym_continue_statement] = ACTIONS(91),
        [anon_sym_LBRACK] = ACTIONS(109),
        [anon_sym_LBRACE] = ACTIONS(111),
        [sym_number] = ACTIONS(113),
        [sym_identifier] = ACTIONS(115),
        [sym_comment] = ACTIONS(75),
        [sym__indent] = ACTIONS(995),
    },
    [546] = {
        [sym_expression_list] = STATE(551),
        [sym__expression] = STATE(124),
        [sym_binary_operator] = STATE(41),
        [sym_subscript] = STATE(41),
        [sym_call] = STATE(41),
        [sym_list] = STATE(41),
        [sym_list_comprehension] = STATE(41),
        [sym_dictionary] = STATE(41),
        [sym_dictionary_comprehension] = STATE(41),
        [sym_set] = STATE(41),
        [sym_set_comprehension] = STATE(41),
        [anon_sym_LBRACK] = ACTIONS(119),
        [anon_sym_LBRACE] = ACTIONS(121),
        [sym_number] = ACTIONS(123),
        [sym_identifier] = ACTIONS(123),
        [sym_comment] = ACTIONS(75),
    },
    [547] = {
        [anon_sym_COMMA] = ACTIONS(1484),
        [anon_sym_COLON] = ACTIONS(1484),
        [anon_sym_for] = ACTIONS(1484),
        [anon_sym_in] = ACTIONS(1484),
        [anon_sym_as] = ACTIONS(1484),
        [anon_sym_LPAREN] = ACTIONS(1484),
        [anon_sym_RPAREN] = ACTIONS(1484),
        [anon_sym_STAR] = ACTIONS(1487),
        [anon_sym_PLUS] = ACTIONS(1484),
        [anon_sym_DASH] = ACTIONS(1484),
        [anon_sym_SLASH] = ACTIONS(1484),
        [anon_sym_STAR_STAR] = ACTIONS(1484),
        [anon_sym_PIPE] = ACTIONS(1484),
        [anon_sym_AMP] = ACTIONS(1484),
        [anon_sym_CARET] = ACTIONS(1484),
        [anon_sym_LT_LT] = ACTIONS(1484),
        [anon_sym_GT_GT] = ACTIONS(1484),
        [anon_sym_and] = ACTIONS(1484),
        [anon_sym_or] = ACTIONS(1484),
        [anon_sym_LBRACK] = ACTIONS(1484),
        [anon_sym_RBRACK] = ACTIONS(1484),
        [anon_sym_RBRACE] = ACTIONS(1484),
        [sym_comment] = ACTIONS(75),
        [sym__newline] = ACTIONS(1506),
    },
    [548] = {
        [anon_sym_COMMA] = ACTIONS(1510),
        [anon_sym_COLON] = ACTIONS(1510),
        [anon_sym_for] = ACTIONS(1510),
        [anon_sym_in] = ACTIONS(1510),
        [anon_sym_as] = ACTIONS(1510),
        [anon_sym_LPAREN] = ACTIONS(1510),
        [anon_sym_RPAREN] = ACTIONS(1510),
        [anon_sym_STAR] = ACTIONS(1514),
        [anon_sym_PLUS] = ACTIONS(1510),
        [anon_sym_DASH] = ACTIONS(1510),
        [anon_sym_SLASH] = ACTIONS(1510),
        [anon_sym_STAR_STAR] = ACTIONS(1510),
        [anon_sym_PIPE] = ACTIONS(1510),
        [anon_sym_AMP] = ACTIONS(1510),
        [anon_sym_CARET] = ACTIONS(1510),
        [anon_sym_LT_LT] = ACTIONS(1510),
        [anon_sym_GT_GT] = ACTIONS(1510),
        [anon_sym_and] = ACTIONS(1510),
        [anon_sym_or] = ACTIONS(1510),
        [anon_sym_LBRACK] = ACTIONS(1510),
        [anon_sym_RBRACK] = ACTIONS(1510),
        [anon_sym_RBRACE] = ACTIONS(1510),
        [sym_comment] = ACTIONS(75),
        [sym__newline] = ACTIONS(1510),
    },
    [549] = {
        [anon_sym_COMMA] = ACTIONS(1518),
        [anon_sym_COLON] = ACTIONS(1518),
        [anon_sym_for] = ACTIONS(1518),
        [anon_sym_in] = ACTIONS(1518),
        [anon_sym_as] = ACTIONS(1518),
        [anon_sym_LPAREN] = ACTIONS(1518),
        [anon_sym_RPAREN] = ACTIONS(1518),
        [anon_sym_STAR] = ACTIONS(1522),
        [anon_sym_PLUS] = ACTIONS(1518),
        [anon_sym_DASH] = ACTIONS(1518),
        [anon_sym_SLASH] = ACTIONS(1518),
        [anon_sym_STAR_STAR] = ACTIONS(1518),
        [anon_sym_PIPE] = ACTIONS(1518),
        [anon_sym_AMP] = ACTIONS(1518),
        [anon_sym_CARET] = ACTIONS(1518),
        [anon_sym_LT_LT] = ACTIONS(1518),
        [anon_sym_GT_GT] = ACTIONS(1518),
        [anon_sym_and] = ACTIONS(1518),
        [anon_sym_or] = ACTIONS(1518),
        [anon_sym_LBRACK] = ACTIONS(1518),
        [anon_sym_RBRACK] = ACTIONS(1518),
        [anon_sym_RBRACE] = ACTIONS(1518),
        [sym_comment] = ACTIONS(75),
        [sym__newline] = ACTIONS(1518),
    },
    [550] = {
        [anon_sym_COMMA] = ACTIONS(281),
        [anon_sym_COLON] = ACTIONS(281),
        [anon_sym_for] = ACTIONS(281),
        [anon_sym_in] = ACTIONS(281),
        [anon_sym_as] = ACTIONS(281),
        [anon_sym_LPAREN] = ACTIONS(1350),
        [anon_sym_RPAREN] = ACTIONS(281),
        [anon_sym_STAR] = ACTIONS(1365),
        [anon_sym_PLUS] = ACTIONS(1368),
        [anon_sym_DASH] = ACTIONS(1368),
        [anon_sym_SLASH] = ACTIONS(1368),
        [anon_sym_STAR_STAR] = ACTIONS(1368),
        [anon_sym_PIPE] = ACTIONS(1368),
        [anon_sym_AMP] = ACTIONS(1368),
        [anon_sym_CARET] = ACTIONS(1368),
        [anon_sym_LT_LT] = ACTIONS(1368),
        [anon_sym_GT_GT] = ACTIONS(1368),
        [anon_sym_and] = ACTIONS(1368),
        [anon_sym_or] = ACTIONS(1368),
        [anon_sym_LBRACK] = ACTIONS(1371),
        [anon_sym_RBRACK] = ACTIONS(281),
        [anon_sym_RBRACE] = ACTIONS(281),
        [sym_comment] = ACTIONS(75),
        [sym__newline] = ACTIONS(281),
    },
    [551] = {
        [anon_sym_in] = ACTIONS(1526),
        [sym_comment] = ACTIONS(75),
    },
    [552] = {
        [sym__expression] = STATE(553),
        [sym_binary_operator] = STATE(41),
        [sym_subscript] = STATE(41),
        [sym_call] = STATE(41),
        [sym_list] = STATE(41),
        [sym_list_comprehension] = STATE(41),
        [sym_dictionary] = STATE(41),
        [sym_dictionary_comprehension] = STATE(41),
        [sym_set] = STATE(41),
        [sym_set_comprehension] = STATE(41),
        [anon_sym_LBRACK] = ACTIONS(119),
        [anon_sym_LBRACE] = ACTIONS(121),
        [sym_number] = ACTIONS(123),
        [sym_identifier] = ACTIONS(123),
        [sym_comment] = ACTIONS(75),
    },
    [553] = {
        [anon_sym_LPAREN] = ACTIONS(225),
        [anon_sym_STAR] = ACTIONS(1528),
        [anon_sym_PLUS] = ACTIONS(1530),
        [anon_sym_DASH] = ACTIONS(1530),
        [anon_sym_SLASH] = ACTIONS(1530),
        [anon_sym_STAR_STAR] = ACTIONS(1530),
        [anon_sym_PIPE] = ACTIONS(1530),
        [anon_sym_AMP] = ACTIONS(1530),
        [anon_sym_CARET] = ACTIONS(1530),
        [anon_sym_LT_LT] = ACTIONS(1530),
        [anon_sym_GT_GT] = ACTIONS(1530),
        [anon_sym_and] = ACTIONS(1530),
        [anon_sym_or] = ACTIONS(1530),
        [anon_sym_LBRACK] = ACTIONS(241),
        [anon_sym_RBRACK] = ACTIONS(545),
        [anon_sym_RBRACE] = ACTIONS(529),
        [sym_comment] = ACTIONS(75),
    },
    [554] = {
        [sym__expression] = STATE(555),
        [sym_binary_operator] = STATE(41),
        [sym_subscript] = STATE(41),
        [sym_call] = STATE(41),
        [sym_list] = STATE(41),
        [sym_list_comprehension] = STATE(41),
        [sym_dictionary] = STATE(41),
        [sym_dictionary_comprehension] = STATE(41),
        [sym_set] = STATE(41),
        [sym_set_comprehension] = STATE(41),
        [anon_sym_LBRACK] = ACTIONS(119),
        [anon_sym_LBRACE] = ACTIONS(121),
        [sym_number] = ACTIONS(123),
        [sym_identifier] = ACTIONS(123),
        [sym_comment] = ACTIONS(75),
    },
    [555] = {
        [anon_sym_LPAREN] = ACTIONS(1532),
        [anon_sym_STAR] = ACTIONS(1535),
        [anon_sym_PLUS] = ACTIONS(1538),
        [anon_sym_DASH] = ACTIONS(1538),
        [anon_sym_SLASH] = ACTIONS(1538),
        [anon_sym_STAR_STAR] = ACTIONS(1538),
        [anon_sym_PIPE] = ACTIONS(1538),
        [anon_sym_AMP] = ACTIONS(1538),
        [anon_sym_CARET] = ACTIONS(1538),
        [anon_sym_LT_LT] = ACTIONS(1538),
        [anon_sym_GT_GT] = ACTIONS(1538),
        [anon_sym_and] = ACTIONS(1538),
        [anon_sym_or] = ACTIONS(1538),
        [anon_sym_LBRACK] = ACTIONS(1541),
        [anon_sym_RBRACK] = ACTIONS(281),
        [anon_sym_RBRACE] = ACTIONS(281),
        [sym_comment] = ACTIONS(75),
    },
    [556] = {
        [sym_elif_clause] = STATE(560),
        [sym_else_clause] = STATE(561),
        [aux_sym_if_statement_repeat1] = STATE(500),
        [ts_builtin_sym_end] = ACTIONS(1544),
        [anon_sym_SEMI] = ACTIONS(1544),
        [anon_sym_print] = ACTIONS(1550),
        [anon_sym_return] = ACTIONS(1550),
        [anon_sym_del] = ACTIONS(1550),
        [sym_pass_statement] = ACTIONS(1550),
        [sym_break_statement] = ACTIONS(1550),
        [sym_continue_statement] = ACTIONS(1550),
        [anon_sym_if] = ACTIONS(1550),
        [anon_sym_elif] = ACTIONS(1275),
        [anon_sym_else] = ACTIONS(1278),
        [anon_sym_for] = ACTIONS(1550),
        [anon_sym_while] = ACTIONS(1550),
        [anon_sym_try] = ACTIONS(1550),
        [anon_sym_except] = ACTIONS(1556),
        [anon_sym_finally] = ACTIONS(1556),
        [anon_sym_with] = ACTIONS(1550),
        [anon_sym_def] = ACTIONS(1550),
        [anon_sym_class] = ACTIONS(1550),
        [anon_sym_AT] = ACTIONS(1544),
        [anon_sym_LBRACK] = ACTIONS(1544),
        [anon_sym_LBRACE] = ACTIONS(1544),
        [sym_number] = ACTIONS(1550),
        [sym_identifier] = ACTIONS(1559),
        [sym_comment] = ACTIONS(75),
        [sym__newline] = ACTIONS(1544),
        [sym__dedent] = ACTIONS(1544),
    },
    [557] = {
        [anon_sym_COMMA] = ACTIONS(381),
        [anon_sym_for] = ACTIONS(381),
        [anon_sym_LPAREN] = ACTIONS(165),
        [anon_sym_STAR] = ACTIONS(1565),
        [anon_sym_PLUS] = ACTIONS(1567),
        [anon_sym_DASH] = ACTIONS(1567),
        [anon_sym_SLASH] = ACTIONS(1567),
        [anon_sym_STAR_STAR] = ACTIONS(1567),
        [anon_sym_PIPE] = ACTIONS(1567),
        [anon_sym_AMP] = ACTIONS(1567),
        [anon_sym_CARET] = ACTIONS(1567),
        [anon_sym_LT_LT] = ACTIONS(1567),
        [anon_sym_GT_GT] = ACTIONS(1567),
        [anon_sym_and] = ACTIONS(1567),
        [anon_sym_or] = ACTIONS(1567),
        [anon_sym_LBRACK] = ACTIONS(181),
        [anon_sym_RBRACE] = ACTIONS(381),
        [sym_comment] = ACTIONS(75),
        [sym__newline] = ACTIONS(183),
    },
    [558] = {
        [sym__expression] = STATE(559),
        [sym_binary_operator] = STATE(16),
        [sym_subscript] = STATE(16),
        [sym_call] = STATE(16),
        [sym_list] = STATE(16),
        [sym_list_comprehension] = STATE(16),
        [sym_dictionary] = STATE(16),
        [sym_dictionary_comprehension] = STATE(16),
        [sym_set] = STATE(16),
        [sym_set_comprehension] = STATE(16),
        [anon_sym_LBRACK] = ACTIONS(109),
        [anon_sym_LBRACE] = ACTIONS(111),
        [sym_number] = ACTIONS(113),
        [sym_identifier] = ACTIONS(113),
        [sym_comment] = ACTIONS(75),
    },
    [559] = {
        [anon_sym_COMMA] = ACTIONS(281),
        [anon_sym_for] = ACTIONS(281),
        [anon_sym_LPAREN] = ACTIONS(1350),
        [anon_sym_STAR] = ACTIONS(1569),
        [anon_sym_PLUS] = ACTIONS(1572),
        [anon_sym_DASH] = ACTIONS(1572),
        [anon_sym_SLASH] = ACTIONS(1572),
        [anon_sym_STAR_STAR] = ACTIONS(1572),
        [anon_sym_PIPE] = ACTIONS(1572),
        [anon_sym_AMP] = ACTIONS(1572),
        [anon_sym_CARET] = ACTIONS(1572),
        [anon_sym_LT_LT] = ACTIONS(1572),
        [anon_sym_GT_GT] = ACTIONS(1572),
        [anon_sym_and] = ACTIONS(1572),
        [anon_sym_or] = ACTIONS(1572),
        [anon_sym_LBRACK] = ACTIONS(1371),
        [anon_sym_RBRACE] = ACTIONS(281),
        [sym_comment] = ACTIONS(75),
        [sym__newline] = ACTIONS(281),
    },
    [560] = {
        [ts_builtin_sym_end] = ACTIONS(879),
        [anon_sym_SEMI] = ACTIONS(879),
        [anon_sym_print] = ACTIONS(877),
        [anon_sym_return] = ACTIONS(877),
        [anon_sym_del] = ACTIONS(877),
        [sym_pass_statement] = ACTIONS(877),
        [sym_break_statement] = ACTIONS(877),
        [sym_continue_statement] = ACTIONS(877),
        [anon_sym_if] = ACTIONS(877),
        [anon_sym_elif] = ACTIONS(877),
        [anon_sym_else] = ACTIONS(877),
        [anon_sym_for] = ACTIONS(877),
        [anon_sym_while] = ACTIONS(877),
        [anon_sym_try] = ACTIONS(877),
        [anon_sym_with] = ACTIONS(877),
        [anon_sym_def] = ACTIONS(877),
        [anon_sym_class] = ACTIONS(877),
        [anon_sym_AT] = ACTIONS(879),
        [anon_sym_LBRACK] = ACTIONS(879),
        [anon_sym_LBRACE] = ACTIONS(879),
        [sym_number] = ACTIONS(877),
        [sym_identifier] = ACTIONS(881),
        [sym_comment] = ACTIONS(75),
        [sym__newline] = ACTIONS(879),
        [sym__dedent] = ACTIONS(879),
    },
    [561] = {
        [ts_builtin_sym_end] = ACTIONS(1575),
        [anon_sym_SEMI] = ACTIONS(1575),
        [anon_sym_print] = ACTIONS(1578),
        [anon_sym_return] = ACTIONS(1578),
        [anon_sym_del] = ACTIONS(1578),
        [sym_pass_statement] = ACTIONS(1578),
        [sym_break_statement] = ACTIONS(1578),
        [sym_continue_statement] = ACTIONS(1578),
        [anon_sym_if] = ACTIONS(1578),
        [anon_sym_for] = ACTIONS(1578),
        [anon_sym_while] = ACTIONS(1578),
        [anon_sym_try] = ACTIONS(1578),
        [anon_sym_with] = ACTIONS(1578),
        [anon_sym_def] = ACTIONS(1578),
        [anon_sym_class] = ACTIONS(1578),
        [anon_sym_AT] = ACTIONS(1575),
        [anon_sym_LBRACK] = ACTIONS(1575),
        [anon_sym_LBRACE] = ACTIONS(1575),
        [sym_number] = ACTIONS(1578),
        [sym_identifier] = ACTIONS(1581),
        [sym_comment] = ACTIONS(75),
        [sym__newline] = ACTIONS(1575),
        [sym__dedent] = ACTIONS(1575),
    },
    [562] = {
        [anon_sym_COMMA] = ACTIONS(1584),
        [anon_sym_COLON] = ACTIONS(1584),
        [anon_sym_for] = ACTIONS(1584),
        [anon_sym_in] = ACTIONS(1584),
        [anon_sym_as] = ACTIONS(1584),
        [anon_sym_LPAREN] = ACTIONS(1584),
        [anon_sym_RPAREN] = ACTIONS(1584),
        [anon_sym_STAR] = ACTIONS(1587),
        [anon_sym_PLUS] = ACTIONS(1584),
        [anon_sym_DASH] = ACTIONS(1584),
        [anon_sym_SLASH] = ACTIONS(1584),
        [anon_sym_STAR_STAR] = ACTIONS(1584),
        [anon_sym_PIPE] = ACTIONS(1584),
        [anon_sym_AMP] = ACTIONS(1584),
        [anon_sym_CARET] = ACTIONS(1584),
        [anon_sym_LT_LT] = ACTIONS(1584),
        [anon_sym_GT_GT] = ACTIONS(1584),
        [anon_sym_and] = ACTIONS(1584),
        [anon_sym_or] = ACTIONS(1584),
        [anon_sym_LBRACK] = ACTIONS(1584),
        [anon_sym_RBRACK] = ACTIONS(1584),
        [anon_sym_RBRACE] = ACTIONS(1584),
        [sym_comment] = ACTIONS(75),
        [sym__newline] = ACTIONS(1584),
    },
    [563] = {
        [anon_sym_COMMA] = ACTIONS(1590),
        [anon_sym_COLON] = ACTIONS(1593),
        [anon_sym_in] = ACTIONS(395),
        [anon_sym_LPAREN] = ACTIONS(165),
        [anon_sym_RPAREN] = ACTIONS(395),
        [anon_sym_STAR] = ACTIONS(1470),
        [anon_sym_PLUS] = ACTIONS(1472),
        [anon_sym_DASH] = ACTIONS(1472),
        [anon_sym_SLASH] = ACTIONS(1472),
        [anon_sym_STAR_STAR] = ACTIONS(1472),
        [anon_sym_PIPE] = ACTIONS(1472),
        [anon_sym_AMP] = ACTIONS(1472),
        [anon_sym_CARET] = ACTIONS(1472),
        [anon_sym_LT_LT] = ACTIONS(1472),
        [anon_sym_GT_GT] = ACTIONS(1472),
        [anon_sym_and] = ACTIONS(1472),
        [anon_sym_or] = ACTIONS(1472),
        [anon_sym_LBRACK] = ACTIONS(181),
        [anon_sym_RBRACK] = ACTIONS(1590),
        [anon_sym_RBRACE] = ACTIONS(395),
        [sym_comment] = ACTIONS(75),
        [sym__newline] = ACTIONS(395),
    },
    [564] = {
        [sym__simple_statement] = STATE(511),
        [sym_print_statement] = STATE(5),
        [sym_expression_statement] = STATE(5),
        [sym_return_statement] = STATE(5),
        [sym_delete_statement] = STATE(5),
        [sym__suite] = STATE(565),
        [sym__expression] = STATE(23),
        [sym_binary_operator] = STATE(16),
        [sym_subscript] = STATE(16),
        [sym_call] = STATE(16),
        [sym_list] = STATE(16),
        [sym_list_comprehension] = STATE(16),
        [sym_dictionary] = STATE(16),
        [sym_dictionary_comprehension] = STATE(16),
        [sym_set] = STATE(16),
        [sym_set_comprehension] = STATE(16),
        [anon_sym_print] = ACTIONS(85),
        [anon_sym_return] = ACTIONS(87),
        [anon_sym_del] = ACTIONS(89),
        [sym_pass_statement] = ACTIONS(91),
        [sym_break_statement] = ACTIONS(91),
        [sym_continue_statement] = ACTIONS(91),
        [anon_sym_LBRACK] = ACTIONS(109),
        [anon_sym_LBRACE] = ACTIONS(111),
        [sym_number] = ACTIONS(113),
        [sym_identifier] = ACTIONS(115),
        [sym_comment] = ACTIONS(75),
        [sym__indent] = ACTIONS(995),
    },
    [565] = {
        [ts_builtin_sym_end] = ACTIONS(825),
        [anon_sym_SEMI] = ACTIONS(825),
        [anon_sym_print] = ACTIONS(823),
        [anon_sym_return] = ACTIONS(823),
        [anon_sym_del] = ACTIONS(823),
        [sym_pass_statement] = ACTIONS(823),
        [sym_break_statement] = ACTIONS(823),
        [sym_continue_statement] = ACTIONS(823),
        [anon_sym_if] = ACTIONS(823),
        [anon_sym_else] = ACTIONS(823),
        [anon_sym_for] = ACTIONS(823),
        [anon_sym_while] = ACTIONS(823),
        [anon_sym_try] = ACTIONS(823),
        [anon_sym_except] = ACTIONS(823),
        [anon_sym_finally] = ACTIONS(823),
        [anon_sym_with] = ACTIONS(823),
        [anon_sym_def] = ACTIONS(823),
        [anon_sym_class] = ACTIONS(823),
        [anon_sym_AT] = ACTIONS(825),
        [anon_sym_LBRACK] = ACTIONS(825),
        [anon_sym_LBRACE] = ACTIONS(825),
        [sym_number] = ACTIONS(823),
        [sym_identifier] = ACTIONS(827),
        [sym_comment] = ACTIONS(75),
        [sym__newline] = ACTIONS(825),
        [sym__dedent] = ACTIONS(825),
    },
    [566] = {
        [anon_sym_COLON] = ACTIONS(1596),
        [sym_comment] = ACTIONS(75),
    },
    [567] = {
        [sym__simple_statement] = STATE(511),
        [sym_print_statement] = STATE(5),
        [sym_expression_statement] = STATE(5),
        [sym_return_statement] = STATE(5),
        [sym_delete_statement] = STATE(5),
        [sym__suite] = STATE(568),
        [sym__expression] = STATE(23),
        [sym_binary_operator] = STATE(16),
        [sym_subscript] = STATE(16),
        [sym_call] = STATE(16),
        [sym_list] = STATE(16),
        [sym_list_comprehension] = STATE(16),
        [sym_dictionary] = STATE(16),
        [sym_dictionary_comprehension] = STATE(16),
        [sym_set] = STATE(16),
        [sym_set_comprehension] = STATE(16),
        [anon_sym_print] = ACTIONS(85),
        [anon_sym_return] = ACTIONS(87),
        [anon_sym_del] = ACTIONS(89),
        [sym_pass_statement] = ACTIONS(91),
        [sym_break_statement] = ACTIONS(91),
        [sym_continue_statement] = ACTIONS(91),
        [anon_sym_LBRACK] = ACTIONS(109),
        [anon_sym_LBRACE] = ACTIONS(111),
        [sym_number] = ACTIONS(113),
        [sym_identifier] = ACTIONS(115),
        [sym_comment] = ACTIONS(75),
        [sym__indent] = ACTIONS(995),
    },
    [568] = {
        [ts_builtin_sym_end] = ACTIONS(607),
        [anon_sym_SEMI] = ACTIONS(607),
        [anon_sym_print] = ACTIONS(609),
        [anon_sym_return] = ACTIONS(609),
        [anon_sym_del] = ACTIONS(609),
        [sym_pass_statement] = ACTIONS(609),
        [sym_break_statement] = ACTIONS(609),
        [sym_continue_statement] = ACTIONS(609),
        [anon_sym_if] = ACTIONS(609),
        [anon_sym_for] = ACTIONS(609),
        [anon_sym_while] = ACTIONS(609),
        [anon_sym_try] = ACTIONS(609),
        [anon_sym_with] = ACTIONS(609),
        [anon_sym_def] = ACTIONS(609),
        [anon_sym_class] = ACTIONS(609),
        [anon_sym_AT] = ACTIONS(607),
        [anon_sym_LBRACK] = ACTIONS(607),
        [anon_sym_LBRACE] = ACTIONS(607),
        [sym_number] = ACTIONS(609),
        [sym_identifier] = ACTIONS(611),
        [sym_comment] = ACTIONS(75),
        [sym__newline] = ACTIONS(607),
        [sym__dedent] = ACTIONS(607),
    },
    [569] = {
        [ts_builtin_sym_end] = ACTIONS(1598),
        [anon_sym_SEMI] = ACTIONS(1598),
        [anon_sym_print] = ACTIONS(1602),
        [anon_sym_return] = ACTIONS(1602),
        [anon_sym_del] = ACTIONS(1602),
        [sym_pass_statement] = ACTIONS(1602),
        [sym_break_statement] = ACTIONS(1602),
        [sym_continue_statement] = ACTIONS(1602),
        [anon_sym_if] = ACTIONS(1602),
        [anon_sym_for] = ACTIONS(1602),
        [anon_sym_while] = ACTIONS(1602),
        [anon_sym_try] = ACTIONS(1602),
        [anon_sym_with] = ACTIONS(1602),
        [anon_sym_def] = ACTIONS(1602),
        [anon_sym_class] = ACTIONS(1602),
        [anon_sym_AT] = ACTIONS(1598),
        [anon_sym_LBRACK] = ACTIONS(1598),
        [anon_sym_LBRACE] = ACTIONS(1598),
        [sym_number] = ACTIONS(1602),
        [sym_identifier] = ACTIONS(1606),
        [sym_comment] = ACTIONS(75),
        [sym__newline] = ACTIONS(1598),
        [sym__dedent] = ACTIONS(1598),
    },
    [570] = {
        [ts_builtin_sym_end] = ACTIONS(769),
        [anon_sym_SEMI] = ACTIONS(769),
        [anon_sym_print] = ACTIONS(767),
        [anon_sym_return] = ACTIONS(767),
        [anon_sym_del] = ACTIONS(767),
        [sym_pass_statement] = ACTIONS(767),
        [sym_break_statement] = ACTIONS(767),
        [sym_continue_statement] = ACTIONS(767),
        [anon_sym_if] = ACTIONS(767),
        [anon_sym_else] = ACTIONS(767),
        [anon_sym_for] = ACTIONS(767),
        [anon_sym_while] = ACTIONS(767),
        [anon_sym_try] = ACTIONS(767),
        [anon_sym_except] = ACTIONS(767),
        [anon_sym_finally] = ACTIONS(767),
        [anon_sym_with] = ACTIONS(767),
        [anon_sym_def] = ACTIONS(767),
        [anon_sym_class] = ACTIONS(767),
        [anon_sym_AT] = ACTIONS(769),
        [anon_sym_LBRACK] = ACTIONS(769),
        [anon_sym_LBRACE] = ACTIONS(769),
        [sym_number] = ACTIONS(767),
        [sym_identifier] = ACTIONS(771),
        [sym_comment] = ACTIONS(75),
        [sym__newline] = ACTIONS(769),
        [sym__dedent] = ACTIONS(769),
    },
    [571] = {
        [ts_builtin_sym_end] = ACTIONS(775),
        [anon_sym_SEMI] = ACTIONS(775),
        [anon_sym_print] = ACTIONS(773),
        [anon_sym_return] = ACTIONS(773),
        [anon_sym_del] = ACTIONS(773),
        [sym_pass_statement] = ACTIONS(773),
        [sym_break_statement] = ACTIONS(773),
        [sym_continue_statement] = ACTIONS(773),
        [anon_sym_if] = ACTIONS(773),
        [anon_sym_for] = ACTIONS(773),
        [anon_sym_while] = ACTIONS(773),
        [anon_sym_try] = ACTIONS(773),
        [anon_sym_with] = ACTIONS(773),
        [anon_sym_def] = ACTIONS(773),
        [anon_sym_class] = ACTIONS(773),
        [anon_sym_AT] = ACTIONS(775),
        [anon_sym_LBRACK] = ACTIONS(775),
        [anon_sym_LBRACE] = ACTIONS(775),
        [sym_number] = ACTIONS(773),
        [sym_identifier] = ACTIONS(777),
        [sym_comment] = ACTIONS(75),
        [sym__newline] = ACTIONS(775),
        [sym__dedent] = ACTIONS(775),
    },
    [572] = {
        [anon_sym_COLON] = ACTIONS(1610),
        [sym_comment] = ACTIONS(75),
    },
    [573] = {
        [sym_dictionary_splat_parameter] = STATE(575),
        [anon_sym_STAR] = ACTIONS(699),
        [sym_comment] = ACTIONS(75),
    },
    [574] = {
        [anon_sym_COLON] = ACTIONS(1615),
        [sym_comment] = ACTIONS(75),
    },
    [575] = {
        [anon_sym_RPAREN] = ACTIONS(1618),
        [sym_comment] = ACTIONS(75),
    },
    [576] = {
        [anon_sym_COLON] = ACTIONS(1620),
        [sym_comment] = ACTIONS(75),
    },
    [577] = {
        [anon_sym_RPAREN] = ACTIONS(1623),
        [anon_sym_STAR] = ACTIONS(1625),
        [sym_identifier] = ACTIONS(1628),
        [sym_comment] = ACTIONS(75),
    },
    [578] = {
        [anon_sym_COLON] = ACTIONS(1631),
        [sym_comment] = ACTIONS(75),
    },
    [579] = {
        [sym__simple_statement] = STATE(511),
        [sym_print_statement] = STATE(5),
        [sym_expression_statement] = STATE(5),
        [sym_return_statement] = STATE(5),
        [sym_delete_statement] = STATE(5),
        [sym__suite] = STATE(580),
        [sym__expression] = STATE(23),
        [sym_binary_operator] = STATE(16),
        [sym_subscript] = STATE(16),
        [sym_call] = STATE(16),
        [sym_list] = STATE(16),
        [sym_list_comprehension] = STATE(16),
        [sym_dictionary] = STATE(16),
        [sym_dictionary_comprehension] = STATE(16),
        [sym_set] = STATE(16),
        [sym_set_comprehension] = STATE(16),
        [anon_sym_print] = ACTIONS(85),
        [anon_sym_return] = ACTIONS(87),
        [anon_sym_del] = ACTIONS(89),
        [sym_pass_statement] = ACTIONS(91),
        [sym_break_statement] = ACTIONS(91),
        [sym_continue_statement] = ACTIONS(91),
        [anon_sym_LBRACK] = ACTIONS(109),
        [anon_sym_LBRACE] = ACTIONS(111),
        [sym_number] = ACTIONS(113),
        [sym_identifier] = ACTIONS(115),
        [sym_comment] = ACTIONS(75),
        [sym__indent] = ACTIONS(995),
    },
    [580] = {
        [ts_builtin_sym_end] = ACTIONS(671),
        [anon_sym_SEMI] = ACTIONS(671),
        [anon_sym_print] = ACTIONS(669),
        [anon_sym_return] = ACTIONS(669),
        [anon_sym_del] = ACTIONS(669),
        [sym_pass_statement] = ACTIONS(669),
        [sym_break_statement] = ACTIONS(669),
        [sym_continue_statement] = ACTIONS(669),
        [anon_sym_if] = ACTIONS(669),
        [anon_sym_for] = ACTIONS(669),
        [anon_sym_while] = ACTIONS(669),
        [anon_sym_try] = ACTIONS(669),
        [anon_sym_with] = ACTIONS(669),
        [anon_sym_def] = ACTIONS(669),
        [anon_sym_class] = ACTIONS(669),
        [anon_sym_AT] = ACTIONS(671),
        [anon_sym_LBRACK] = ACTIONS(671),
        [anon_sym_LBRACE] = ACTIONS(671),
        [sym_number] = ACTIONS(669),
        [sym_identifier] = ACTIONS(673),
        [sym_comment] = ACTIONS(75),
        [sym__newline] = ACTIONS(671),
        [sym__dedent] = ACTIONS(671),
    },
    [581] = {
        [sym__simple_statement] = STATE(511),
        [sym_print_statement] = STATE(5),
        [sym_expression_statement] = STATE(5),
        [sym_return_statement] = STATE(5),
        [sym_delete_statement] = STATE(5),
        [sym__suite] = STATE(582),
        [sym__expression] = STATE(23),
        [sym_binary_operator] = STATE(16),
        [sym_subscript] = STATE(16),
        [sym_call] = STATE(16),
        [sym_list] = STATE(16),
        [sym_list_comprehension] = STATE(16),
        [sym_dictionary] = STATE(16),
        [sym_dictionary_comprehension] = STATE(16),
        [sym_set] = STATE(16),
        [sym_set_comprehension] = STATE(16),
        [anon_sym_print] = ACTIONS(85),
        [anon_sym_return] = ACTIONS(87),
        [anon_sym_del] = ACTIONS(89),
        [sym_pass_statement] = ACTIONS(91),
        [sym_break_statement] = ACTIONS(91),
        [sym_continue_statement] = ACTIONS(91),
        [anon_sym_LBRACK] = ACTIONS(109),
        [anon_sym_LBRACE] = ACTIONS(111),
        [sym_number] = ACTIONS(113),
        [sym_identifier] = ACTIONS(115),
        [sym_comment] = ACTIONS(75),
        [sym__indent] = ACTIONS(995),
    },
    [582] = {
        [ts_builtin_sym_end] = ACTIONS(751),
        [anon_sym_SEMI] = ACTIONS(751),
        [anon_sym_print] = ACTIONS(749),
        [anon_sym_return] = ACTIONS(749),
        [anon_sym_del] = ACTIONS(749),
        [sym_pass_statement] = ACTIONS(749),
        [sym_break_statement] = ACTIONS(749),
        [sym_continue_statement] = ACTIONS(749),
        [anon_sym_if] = ACTIONS(749),
        [anon_sym_for] = ACTIONS(749),
        [anon_sym_while] = ACTIONS(749),
        [anon_sym_try] = ACTIONS(749),
        [anon_sym_with] = ACTIONS(749),
        [anon_sym_def] = ACTIONS(749),
        [anon_sym_class] = ACTIONS(749),
        [anon_sym_AT] = ACTIONS(751),
        [anon_sym_LBRACK] = ACTIONS(751),
        [anon_sym_LBRACE] = ACTIONS(751),
        [sym_number] = ACTIONS(749),
        [sym_identifier] = ACTIONS(753),
        [sym_comment] = ACTIONS(75),
        [sym__newline] = ACTIONS(751),
        [sym__dedent] = ACTIONS(751),
    },
    [583] = {
        [ts_builtin_sym_end] = ACTIONS(1126),
        [anon_sym_SEMI] = ACTIONS(1126),
        [anon_sym_print] = ACTIONS(1129),
        [anon_sym_return] = ACTIONS(1129),
        [anon_sym_del] = ACTIONS(1129),
        [sym_pass_statement] = ACTIONS(1129),
        [sym_break_statement] = ACTIONS(1129),
        [sym_continue_statement] = ACTIONS(1129),
        [anon_sym_if] = ACTIONS(1129),
        [anon_sym_elif] = ACTIONS(615),
        [anon_sym_else] = ACTIONS(615),
        [anon_sym_for] = ACTIONS(1129),
        [anon_sym_while] = ACTIONS(1129),
        [anon_sym_try] = ACTIONS(1129),
        [anon_sym_except] = ACTIONS(615),
        [anon_sym_finally] = ACTIONS(615),
        [anon_sym_with] = ACTIONS(1129),
        [anon_sym_def] = ACTIONS(1129),
        [anon_sym_class] = ACTIONS(1129),
        [anon_sym_AT] = ACTIONS(1126),
        [anon_sym_LBRACK] = ACTIONS(1126),
        [anon_sym_LBRACE] = ACTIONS(1126),
        [sym_number] = ACTIONS(1129),
        [sym_identifier] = ACTIONS(1142),
        [sym_comment] = ACTIONS(75),
        [sym__newline] = ACTIONS(1126),
        [sym__dedent] = ACTIONS(1126),
    },
    [584] = {
        [sym__simple_statement] = STATE(511),
        [sym_print_statement] = STATE(5),
        [sym_expression_statement] = STATE(5),
        [sym_return_statement] = STATE(5),
        [sym_delete_statement] = STATE(5),
        [sym__suite] = STATE(588),
        [sym__expression] = STATE(23),
        [sym_binary_operator] = STATE(16),
        [sym_subscript] = STATE(16),
        [sym_call] = STATE(16),
        [sym_list] = STATE(16),
        [sym_list_comprehension] = STATE(16),
        [sym_dictionary] = STATE(16),
        [sym_dictionary_comprehension] = STATE(16),
        [sym_set] = STATE(16),
        [sym_set_comprehension] = STATE(16),
        [anon_sym_print] = ACTIONS(85),
        [anon_sym_return] = ACTIONS(87),
        [anon_sym_del] = ACTIONS(89),
        [sym_pass_statement] = ACTIONS(91),
        [sym_break_statement] = ACTIONS(91),
        [sym_continue_statement] = ACTIONS(91),
        [anon_sym_LBRACK] = ACTIONS(109),
        [anon_sym_LBRACE] = ACTIONS(111),
        [sym_number] = ACTIONS(113),
        [sym_identifier] = ACTIONS(115),
        [sym_comment] = ACTIONS(75),
        [sym__indent] = ACTIONS(995),
    },
    [585] = {
        [sym_default_parameter] = STATE(293),
        [sym_list_splat_parameter] = STATE(294),
        [sym_dictionary_splat_parameter] = STATE(295),
        [sym_expression_list] = STATE(587),
        [sym__expression] = STATE(124),
        [sym_binary_operator] = STATE(41),
        [sym_subscript] = STATE(41),
        [sym_call] = STATE(41),
        [sym_list] = STATE(41),
        [sym_list_comprehension] = STATE(41),
        [sym_dictionary] = STATE(41),
        [sym_dictionary_comprehension] = STATE(41),
        [sym_set] = STATE(41),
        [sym_set_comprehension] = STATE(41),
        [aux_sym_parameters_repeat1] = STATE(296),
        [anon_sym_RPAREN] = ACTIONS(661),
        [anon_sym_STAR] = ACTIONS(663),
        [anon_sym_LBRACK] = ACTIONS(119),
        [anon_sym_LBRACE] = ACTIONS(121),
        [sym_number] = ACTIONS(123),
        [sym_identifier] = ACTIONS(1634),
        [sym_comment] = ACTIONS(75),
    },
    [586] = {
        [anon_sym_COMMA] = ACTIONS(1636),
        [anon_sym_LPAREN] = ACTIONS(137),
        [anon_sym_RPAREN] = ACTIONS(1639),
        [anon_sym_EQ] = ACTIONS(685),
        [anon_sym_STAR] = ACTIONS(139),
        [anon_sym_PLUS] = ACTIONS(137),
        [anon_sym_DASH] = ACTIONS(137),
        [anon_sym_SLASH] = ACTIONS(137),
        [anon_sym_STAR_STAR] = ACTIONS(137),
        [anon_sym_PIPE] = ACTIONS(137),
        [anon_sym_AMP] = ACTIONS(137),
        [anon_sym_CARET] = ACTIONS(137),
        [anon_sym_LT_LT] = ACTIONS(137),
        [anon_sym_GT_GT] = ACTIONS(137),
        [anon_sym_and] = ACTIONS(137),
        [anon_sym_or] = ACTIONS(137),
        [anon_sym_LBRACK] = ACTIONS(137),
        [sym_comment] = ACTIONS(75),
    },
    [587] = {
        [anon_sym_RPAREN] = ACTIONS(1310),
        [sym_comment] = ACTIONS(75),
    },
    [588] = {
        [ts_builtin_sym_end] = ACTIONS(655),
        [anon_sym_SEMI] = ACTIONS(655),
        [anon_sym_print] = ACTIONS(653),
        [anon_sym_return] = ACTIONS(653),
        [anon_sym_del] = ACTIONS(653),
        [sym_pass_statement] = ACTIONS(653),
        [sym_break_statement] = ACTIONS(653),
        [sym_continue_statement] = ACTIONS(653),
        [anon_sym_if] = ACTIONS(653),
        [anon_sym_for] = ACTIONS(653),
        [anon_sym_while] = ACTIONS(653),
        [anon_sym_try] = ACTIONS(653),
        [anon_sym_with] = ACTIONS(653),
        [anon_sym_def] = ACTIONS(653),
        [anon_sym_class] = ACTIONS(653),
        [anon_sym_AT] = ACTIONS(655),
        [anon_sym_LBRACK] = ACTIONS(655),
        [anon_sym_LBRACE] = ACTIONS(655),
        [sym_number] = ACTIONS(653),
        [sym_identifier] = ACTIONS(657),
        [sym_comment] = ACTIONS(75),
        [sym__newline] = ACTIONS(655),
        [sym__dedent] = ACTIONS(655),
    },
    [589] = {
        [aux_sym_print_statement_repeat1] = STATE(222),
        [aux_sym_subscript_repeat1] = STATE(53),
        [anon_sym_COMMA] = ACTIONS(1642),
        [anon_sym_for] = ACTIONS(533),
        [anon_sym_LPAREN] = ACTIONS(225),
        [anon_sym_STAR] = ACTIONS(227),
        [anon_sym_PLUS] = ACTIONS(229),
        [anon_sym_DASH] = ACTIONS(229),
        [anon_sym_SLASH] = ACTIONS(231),
        [anon_sym_STAR_STAR] = ACTIONS(233),
        [anon_sym_PIPE] = ACTIONS(235),
        [anon_sym_AMP] = ACTIONS(237),
        [anon_sym_CARET] = ACTIONS(239),
        [anon_sym_LT_LT] = ACTIONS(229),
        [anon_sym_GT_GT] = ACTIONS(229),
        [anon_sym_and] = ACTIONS(237),
        [anon_sym_or] = ACTIONS(235),
        [anon_sym_LBRACK] = ACTIONS(241),
        [anon_sym_RBRACK] = ACTIONS(1644),
        [sym_comment] = ACTIONS(75),
    },
    [590] = {
        [sym__expression] = STATE(592),
        [sym_binary_operator] = STATE(41),
        [sym_subscript] = STATE(41),
        [sym_call] = STATE(41),
        [sym_list] = STATE(41),
        [sym_list_comprehension] = STATE(41),
        [sym_dictionary] = STATE(41),
        [sym_dictionary_comprehension] = STATE(41),
        [sym_set] = STATE(41),
        [sym_set_comprehension] = STATE(41),
        [anon_sym_LBRACK] = ACTIONS(119),
        [anon_sym_DOT_DOT_DOT] = ACTIONS(243),
        [anon_sym_RBRACK] = ACTIONS(1504),
        [anon_sym_LBRACE] = ACTIONS(121),
        [sym_number] = ACTIONS(123),
        [sym_identifier] = ACTIONS(123),
        [sym_comment] = ACTIONS(75),
    },
    [591] = {
        [anon_sym_COMMA] = ACTIONS(1646),
        [anon_sym_COLON] = ACTIONS(1646),
        [anon_sym_for] = ACTIONS(1646),
        [anon_sym_in] = ACTIONS(1646),
        [anon_sym_as] = ACTIONS(1646),
        [anon_sym_LPAREN] = ACTIONS(1646),
        [anon_sym_RPAREN] = ACTIONS(1646),
        [anon_sym_STAR] = ACTIONS(1649),
        [anon_sym_PLUS] = ACTIONS(1646),
        [anon_sym_DASH] = ACTIONS(1646),
        [anon_sym_SLASH] = ACTIONS(1646),
        [anon_sym_STAR_STAR] = ACTIONS(1646),
        [anon_sym_PIPE] = ACTIONS(1646),
        [anon_sym_AMP] = ACTIONS(1646),
        [anon_sym_CARET] = ACTIONS(1646),
        [anon_sym_LT_LT] = ACTIONS(1646),
        [anon_sym_GT_GT] = ACTIONS(1646),
        [anon_sym_and] = ACTIONS(1646),
        [anon_sym_or] = ACTIONS(1646),
        [anon_sym_LBRACK] = ACTIONS(1646),
        [anon_sym_RBRACK] = ACTIONS(1646),
        [anon_sym_RBRACE] = ACTIONS(1646),
        [sym_comment] = ACTIONS(75),
        [sym__newline] = ACTIONS(1646),
    },
    [592] = {
        [anon_sym_COMMA] = ACTIONS(1590),
        [anon_sym_LPAREN] = ACTIONS(225),
        [anon_sym_STAR] = ACTIONS(227),
        [anon_sym_PLUS] = ACTIONS(229),
        [anon_sym_DASH] = ACTIONS(229),
        [anon_sym_SLASH] = ACTIONS(231),
        [anon_sym_STAR_STAR] = ACTIONS(233),
        [anon_sym_PIPE] = ACTIONS(235),
        [anon_sym_AMP] = ACTIONS(237),
        [anon_sym_CARET] = ACTIONS(239),
        [anon_sym_LT_LT] = ACTIONS(229),
        [anon_sym_GT_GT] = ACTIONS(229),
        [anon_sym_and] = ACTIONS(237),
        [anon_sym_or] = ACTIONS(235),
        [anon_sym_LBRACK] = ACTIONS(241),
        [anon_sym_RBRACK] = ACTIONS(1590),
        [sym_comment] = ACTIONS(75),
    },
    [593] = {
        [anon_sym_COMMA] = ACTIONS(281),
        [anon_sym_COLON] = ACTIONS(281),
        [anon_sym_for] = ACTIONS(281),
        [anon_sym_in] = ACTIONS(281),
        [anon_sym_as] = ACTIONS(281),
        [anon_sym_LPAREN] = ACTIONS(1350),
        [anon_sym_RPAREN] = ACTIONS(1652),
        [anon_sym_STAR] = ACTIONS(1365),
        [anon_sym_PLUS] = ACTIONS(1368),
        [anon_sym_DASH] = ACTIONS(1368),
        [anon_sym_SLASH] = ACTIONS(1368),
        [anon_sym_STAR_STAR] = ACTIONS(1368),
        [anon_sym_PIPE] = ACTIONS(1368),
        [anon_sym_AMP] = ACTIONS(1368),
        [anon_sym_CARET] = ACTIONS(1368),
        [anon_sym_LT_LT] = ACTIONS(1368),
        [anon_sym_GT_GT] = ACTIONS(1368),
        [anon_sym_and] = ACTIONS(1368),
        [anon_sym_or] = ACTIONS(1368),
        [anon_sym_LBRACK] = ACTIONS(1371),
        [anon_sym_RBRACK] = ACTIONS(281),
        [anon_sym_RBRACE] = ACTIONS(281),
        [sym_comment] = ACTIONS(75),
        [sym__newline] = ACTIONS(281),
    },
    [594] = {
        [anon_sym_LPAREN] = ACTIONS(1655),
        [anon_sym_DOT] = ACTIONS(1655),
        [sym_comment] = ACTIONS(75),
        [sym__newline] = ACTIONS(1655),
    },
    [595] = {
        [anon_sym_COLON] = ACTIONS(1658),
        [anon_sym_LPAREN] = ACTIONS(1660),
        [sym_comment] = ACTIONS(75),
    },
    [596] = {
        [sym_expression_list] = STATE(587),
        [sym__expression] = STATE(124),
        [sym_binary_operator] = STATE(41),
        [sym_subscript] = STATE(41),
        [sym_call] = STATE(41),
        [sym_list] = STATE(41),
        [sym_list_comprehension] = STATE(41),
        [sym_dictionary] = STATE(41),
        [sym_dictionary_comprehension] = STATE(41),
        [sym_set] = STATE(41),
        [sym_set_comprehension] = STATE(41),
        [anon_sym_LBRACK] = ACTIONS(119),
        [anon_sym_LBRACE] = ACTIONS(121),
        [sym_number] = ACTIONS(123),
        [sym_identifier] = ACTIONS(123),
        [sym_comment] = ACTIONS(75),
    },
    [597] = {
        [anon_sym_COMMA] = ACTIONS(1662),
        [anon_sym_COLON] = ACTIONS(137),
        [anon_sym_for] = ACTIONS(137),
        [anon_sym_in] = ACTIONS(137),
        [anon_sym_as] = ACTIONS(137),
        [anon_sym_LPAREN] = ACTIONS(137),
        [anon_sym_RPAREN] = ACTIONS(1665),
        [anon_sym_STAR] = ACTIONS(139),
        [anon_sym_PLUS] = ACTIONS(137),
        [anon_sym_DASH] = ACTIONS(137),
        [anon_sym_SLASH] = ACTIONS(137),
        [anon_sym_STAR_STAR] = ACTIONS(137),
        [anon_sym_PIPE] = ACTIONS(137),
        [anon_sym_AMP] = ACTIONS(137),
        [anon_sym_CARET] = ACTIONS(137),
        [anon_sym_LT_LT] = ACTIONS(137),
        [anon_sym_GT_GT] = ACTIONS(137),
        [anon_sym_and] = ACTIONS(137),
        [anon_sym_or] = ACTIONS(137),
        [anon_sym_LBRACK] = ACTIONS(137),
        [anon_sym_RBRACK] = ACTIONS(137),
        [anon_sym_RBRACE] = ACTIONS(137),
        [sym_comment] = ACTIONS(75),
        [sym__newline] = ACTIONS(137),
    },
    [598] = {
        [anon_sym_COMMA] = ACTIONS(1669),
        [anon_sym_COLON] = ACTIONS(281),
        [anon_sym_for] = ACTIONS(281),
        [anon_sym_in] = ACTIONS(281),
        [anon_sym_as] = ACTIONS(281),
        [anon_sym_LPAREN] = ACTIONS(1350),
        [anon_sym_RPAREN] = ACTIONS(1669),
        [anon_sym_STAR] = ACTIONS(1365),
        [anon_sym_PLUS] = ACTIONS(1368),
        [anon_sym_DASH] = ACTIONS(1368),
        [anon_sym_SLASH] = ACTIONS(1368),
        [anon_sym_STAR_STAR] = ACTIONS(1368),
        [anon_sym_PIPE] = ACTIONS(1368),
        [anon_sym_AMP] = ACTIONS(1368),
        [anon_sym_CARET] = ACTIONS(1368),
        [anon_sym_LT_LT] = ACTIONS(1368),
        [anon_sym_GT_GT] = ACTIONS(1368),
        [anon_sym_and] = ACTIONS(1368),
        [anon_sym_or] = ACTIONS(1368),
        [anon_sym_LBRACK] = ACTIONS(1371),
        [anon_sym_RBRACK] = ACTIONS(281),
        [anon_sym_RBRACE] = ACTIONS(281),
        [sym_comment] = ACTIONS(75),
        [sym__newline] = ACTIONS(281),
    },
    [599] = {
        [anon_sym_COMMA] = ACTIONS(1672),
        [anon_sym_LPAREN] = ACTIONS(225),
        [anon_sym_RPAREN] = ACTIONS(1672),
        [anon_sym_STAR] = ACTIONS(227),
        [anon_sym_PLUS] = ACTIONS(229),
        [anon_sym_DASH] = ACTIONS(229),
        [anon_sym_SLASH] = ACTIONS(231),
        [anon_sym_STAR_STAR] = ACTIONS(233),
        [anon_sym_PIPE] = ACTIONS(235),
        [anon_sym_AMP] = ACTIONS(237),
        [anon_sym_CARET] = ACTIONS(239),
        [anon_sym_LT_LT] = ACTIONS(229),
        [anon_sym_GT_GT] = ACTIONS(229),
        [anon_sym_and] = ACTIONS(237),
        [anon_sym_or] = ACTIONS(235),
        [anon_sym_LBRACK] = ACTIONS(241),
        [sym_comment] = ACTIONS(75),
    },
    [600] = {
        [sym__expression] = STATE(159),
        [sym_binary_operator] = STATE(41),
        [sym_subscript] = STATE(41),
        [sym_call] = STATE(41),
        [sym_list] = STATE(41),
        [sym_list_comprehension] = STATE(41),
        [sym_dictionary] = STATE(41),
        [sym_dictionary_comprehension] = STATE(41),
        [sym_set] = STATE(41),
        [sym_set_comprehension] = STATE(41),
        [anon_sym_STAR] = ACTIONS(677),
        [anon_sym_LBRACK] = ACTIONS(119),
        [anon_sym_LBRACE] = ACTIONS(121),
        [sym_number] = ACTIONS(123),
        [sym_identifier] = ACTIONS(1675),
        [sym_comment] = ACTIONS(75),
    },
    [601] = {
        [anon_sym_COMMA] = ACTIONS(1636),
        [anon_sym_LPAREN] = ACTIONS(137),
        [anon_sym_RPAREN] = ACTIONS(1639),
        [anon_sym_EQ] = ACTIONS(1111),
        [anon_sym_STAR] = ACTIONS(139),
        [anon_sym_PLUS] = ACTIONS(137),
        [anon_sym_DASH] = ACTIONS(137),
        [anon_sym_SLASH] = ACTIONS(137),
        [anon_sym_STAR_STAR] = ACTIONS(137),
        [anon_sym_PIPE] = ACTIONS(137),
        [anon_sym_AMP] = ACTIONS(137),
        [anon_sym_CARET] = ACTIONS(137),
        [anon_sym_LT_LT] = ACTIONS(137),
        [anon_sym_GT_GT] = ACTIONS(137),
        [anon_sym_and] = ACTIONS(137),
        [anon_sym_or] = ACTIONS(137),
        [anon_sym_LBRACK] = ACTIONS(137),
        [sym_comment] = ACTIONS(75),
    },
    [602] = {
        [aux_sym_print_statement_repeat1] = STATE(605),
        [anon_sym_COMMA] = ACTIONS(1677),
        [anon_sym_LPAREN] = ACTIONS(225),
        [anon_sym_RPAREN] = ACTIONS(1679),
        [anon_sym_STAR] = ACTIONS(227),
        [anon_sym_PLUS] = ACTIONS(229),
        [anon_sym_DASH] = ACTIONS(229),
        [anon_sym_SLASH] = ACTIONS(231),
        [anon_sym_STAR_STAR] = ACTIONS(233),
        [anon_sym_PIPE] = ACTIONS(235),
        [anon_sym_AMP] = ACTIONS(237),
        [anon_sym_CARET] = ACTIONS(239),
        [anon_sym_LT_LT] = ACTIONS(229),
        [anon_sym_GT_GT] = ACTIONS(229),
        [anon_sym_and] = ACTIONS(237),
        [anon_sym_or] = ACTIONS(235),
        [anon_sym_LBRACK] = ACTIONS(241),
        [sym_comment] = ACTIONS(75),
    },
    [603] = {
        [sym__expression] = STATE(129),
        [sym_binary_operator] = STATE(41),
        [sym_subscript] = STATE(41),
        [sym_call] = STATE(41),
        [sym_list] = STATE(41),
        [sym_list_comprehension] = STATE(41),
        [sym_dictionary] = STATE(41),
        [sym_dictionary_comprehension] = STATE(41),
        [sym_set] = STATE(41),
        [sym_set_comprehension] = STATE(41),
        [anon_sym_RPAREN] = ACTIONS(479),
        [anon_sym_STAR] = ACTIONS(337),
        [anon_sym_STAR_STAR] = ACTIONS(339),
        [anon_sym_LBRACK] = ACTIONS(1682),
        [anon_sym_LBRACE] = ACTIONS(1685),
        [sym_number] = ACTIONS(1688),
        [sym_identifier] = ACTIONS(1688),
        [sym_comment] = ACTIONS(75),
    },
    [604] = {
        [anon_sym_COMMA] = ACTIONS(331),
        [anon_sym_COLON] = ACTIONS(331),
        [anon_sym_for] = ACTIONS(331),
        [anon_sym_in] = ACTIONS(331),
        [anon_sym_as] = ACTIONS(331),
        [anon_sym_LPAREN] = ACTIONS(331),
        [anon_sym_RPAREN] = ACTIONS(331),
        [anon_sym_STAR] = ACTIONS(333),
        [anon_sym_PLUS] = ACTIONS(331),
        [anon_sym_DASH] = ACTIONS(331),
        [anon_sym_SLASH] = ACTIONS(331),
        [anon_sym_STAR_STAR] = ACTIONS(331),
        [anon_sym_PIPE] = ACTIONS(331),
        [anon_sym_AMP] = ACTIONS(331),
        [anon_sym_CARET] = ACTIONS(331),
        [anon_sym_LT_LT] = ACTIONS(331),
        [anon_sym_GT_GT] = ACTIONS(331),
        [anon_sym_and] = ACTIONS(331),
        [anon_sym_or] = ACTIONS(331),
        [anon_sym_LBRACK] = ACTIONS(331),
        [anon_sym_RBRACK] = ACTIONS(331),
        [anon_sym_RBRACE] = ACTIONS(331),
        [sym_comment] = ACTIONS(75),
        [sym__newline] = ACTIONS(1691),
    },
    [605] = {
        [anon_sym_COMMA] = ACTIONS(389),
        [anon_sym_RPAREN] = ACTIONS(1434),
        [sym_comment] = ACTIONS(75),
    },
    [606] = {
        [anon_sym_COMMA] = ACTIONS(1662),
        [anon_sym_LPAREN] = ACTIONS(137),
        [anon_sym_RPAREN] = ACTIONS(1662),
        [anon_sym_STAR] = ACTIONS(139),
        [anon_sym_PLUS] = ACTIONS(137),
        [anon_sym_DASH] = ACTIONS(137),
        [anon_sym_SLASH] = ACTIONS(137),
        [anon_sym_STAR_STAR] = ACTIONS(137),
        [anon_sym_PIPE] = ACTIONS(137),
        [anon_sym_AMP] = ACTIONS(137),
        [anon_sym_CARET] = ACTIONS(137),
        [anon_sym_LT_LT] = ACTIONS(137),
        [anon_sym_GT_GT] = ACTIONS(137),
        [anon_sym_and] = ACTIONS(137),
        [anon_sym_or] = ACTIONS(137),
        [anon_sym_LBRACK] = ACTIONS(137),
        [sym_comment] = ACTIONS(75),
    },
    [607] = {
        [sym_parameters] = STATE(486),
        [anon_sym_LPAREN] = ACTIONS(659),
        [sym_comment] = ACTIONS(75),
    },
    [608] = {
        [aux_sym_with_statement_repeat1] = STATE(502),
        [anon_sym_COMMA] = ACTIONS(727),
        [anon_sym_COLON] = ACTIONS(1694),
        [sym_comment] = ACTIONS(75),
    },
    [609] = {
        [sym__simple_statement] = STATE(511),
        [sym_print_statement] = STATE(5),
        [sym_expression_statement] = STATE(5),
        [sym_return_statement] = STATE(5),
        [sym_delete_statement] = STATE(5),
        [sym__suite] = STATE(610),
        [sym__expression] = STATE(23),
        [sym_binary_operator] = STATE(16),
        [sym_subscript] = STATE(16),
        [sym_call] = STATE(16),
        [sym_list] = STATE(16),
        [sym_list_comprehension] = STATE(16),
        [sym_dictionary] = STATE(16),
        [sym_dictionary_comprehension] = STATE(16),
        [sym_set] = STATE(16),
        [sym_set_comprehension] = STATE(16),
        [anon_sym_print] = ACTIONS(85),
        [anon_sym_return] = ACTIONS(87),
        [anon_sym_del] = ACTIONS(89),
        [sym_pass_statement] = ACTIONS(91),
        [sym_break_statement] = ACTIONS(91),
        [sym_continue_statement] = ACTIONS(91),
        [anon_sym_LBRACK] = ACTIONS(109),
        [anon_sym_LBRACE] = ACTIONS(111),
        [sym_number] = ACTIONS(113),
        [sym_identifier] = ACTIONS(115),
        [sym_comment] = ACTIONS(75),
        [sym__indent] = ACTIONS(995),
    },
    [610] = {
        [ts_builtin_sym_end] = ACTIONS(813),
        [anon_sym_SEMI] = ACTIONS(813),
        [anon_sym_print] = ACTIONS(811),
        [anon_sym_return] = ACTIONS(811),
        [anon_sym_del] = ACTIONS(811),
        [sym_pass_statement] = ACTIONS(811),
        [sym_break_statement] = ACTIONS(811),
        [sym_continue_statement] = ACTIONS(811),
        [anon_sym_if] = ACTIONS(811),
        [anon_sym_for] = ACTIONS(811),
        [anon_sym_while] = ACTIONS(811),
        [anon_sym_try] = ACTIONS(811),
        [anon_sym_with] = ACTIONS(811),
        [anon_sym_def] = ACTIONS(811),
        [anon_sym_class] = ACTIONS(811),
        [anon_sym_AT] = ACTIONS(813),
        [anon_sym_LBRACK] = ACTIONS(813),
        [anon_sym_LBRACE] = ACTIONS(813),
        [sym_number] = ACTIONS(811),
        [sym_identifier] = ACTIONS(815),
        [sym_comment] = ACTIONS(75),
        [sym__newline] = ACTIONS(813),
        [sym__dedent] = ACTIONS(813),
    },
    [611] = {
        [anon_sym_COMMA] = ACTIONS(735),
        [anon_sym_COLON] = ACTIONS(1696),
        [anon_sym_LPAREN] = ACTIONS(225),
        [anon_sym_STAR] = ACTIONS(227),
        [anon_sym_PLUS] = ACTIONS(229),
        [anon_sym_DASH] = ACTIONS(229),
        [anon_sym_SLASH] = ACTIONS(231),
        [anon_sym_STAR_STAR] = ACTIONS(233),
        [anon_sym_PIPE] = ACTIONS(235),
        [anon_sym_AMP] = ACTIONS(237),
        [anon_sym_CARET] = ACTIONS(239),
        [anon_sym_LT_LT] = ACTIONS(229),
        [anon_sym_GT_GT] = ACTIONS(229),
        [anon_sym_and] = ACTIONS(237),
        [anon_sym_or] = ACTIONS(235),
        [anon_sym_LBRACK] = ACTIONS(241),
        [sym_comment] = ACTIONS(75),
    },
    [612] = {
        [anon_sym_COMMA] = ACTIONS(1699),
        [anon_sym_COLON] = ACTIONS(1701),
        [anon_sym_as] = ACTIONS(1699),
        [anon_sym_LPAREN] = ACTIONS(225),
        [anon_sym_STAR] = ACTIONS(227),
        [anon_sym_PLUS] = ACTIONS(229),
        [anon_sym_DASH] = ACTIONS(229),
        [anon_sym_SLASH] = ACTIONS(231),
        [anon_sym_STAR_STAR] = ACTIONS(233),
        [anon_sym_PIPE] = ACTIONS(235),
        [anon_sym_AMP] = ACTIONS(237),
        [anon_sym_CARET] = ACTIONS(239),
        [anon_sym_LT_LT] = ACTIONS(229),
        [anon_sym_GT_GT] = ACTIONS(229),
        [anon_sym_and] = ACTIONS(237),
        [anon_sym_or] = ACTIONS(235),
        [anon_sym_LBRACK] = ACTIONS(241),
        [sym_comment] = ACTIONS(75),
    },
    [613] = {
        [sym__expression] = STATE(615),
        [sym_binary_operator] = STATE(41),
        [sym_subscript] = STATE(41),
        [sym_call] = STATE(41),
        [sym_list] = STATE(41),
        [sym_list_comprehension] = STATE(41),
        [sym_dictionary] = STATE(41),
        [sym_dictionary_comprehension] = STATE(41),
        [sym_set] = STATE(41),
        [sym_set_comprehension] = STATE(41),
        [anon_sym_LBRACK] = ACTIONS(119),
        [anon_sym_LBRACE] = ACTIONS(121),
        [sym_number] = ACTIONS(123),
        [sym_identifier] = ACTIONS(123),
        [sym_comment] = ACTIONS(75),
    },
    [614] = {
        [sym__simple_statement] = STATE(511),
        [sym_print_statement] = STATE(5),
        [sym_expression_statement] = STATE(5),
        [sym_return_statement] = STATE(5),
        [sym_delete_statement] = STATE(5),
        [sym__suite] = STATE(616),
        [sym__expression] = STATE(23),
        [sym_binary_operator] = STATE(16),
        [sym_subscript] = STATE(16),
        [sym_call] = STATE(16),
        [sym_list] = STATE(16),
        [sym_list_comprehension] = STATE(16),
        [sym_dictionary] = STATE(16),
        [sym_dictionary_comprehension] = STATE(16),
        [sym_set] = STATE(16),
        [sym_set_comprehension] = STATE(16),
        [anon_sym_print] = ACTIONS(85),
        [anon_sym_return] = ACTIONS(87),
        [anon_sym_del] = ACTIONS(89),
        [sym_pass_statement] = ACTIONS(91),
        [sym_break_statement] = ACTIONS(91),
        [sym_continue_statement] = ACTIONS(91),
        [anon_sym_LBRACK] = ACTIONS(109),
        [anon_sym_LBRACE] = ACTIONS(111),
        [sym_number] = ACTIONS(113),
        [sym_identifier] = ACTIONS(115),
        [sym_comment] = ACTIONS(75),
        [sym__indent] = ACTIONS(995),
    },
    [615] = {
        [anon_sym_COLON] = ACTIONS(1703),
        [anon_sym_LPAREN] = ACTIONS(225),
        [anon_sym_STAR] = ACTIONS(227),
        [anon_sym_PLUS] = ACTIONS(229),
        [anon_sym_DASH] = ACTIONS(229),
        [anon_sym_SLASH] = ACTIONS(231),
        [anon_sym_STAR_STAR] = ACTIONS(233),
        [anon_sym_PIPE] = ACTIONS(235),
        [anon_sym_AMP] = ACTIONS(237),
        [anon_sym_CARET] = ACTIONS(239),
        [anon_sym_LT_LT] = ACTIONS(229),
        [anon_sym_GT_GT] = ACTIONS(229),
        [anon_sym_and] = ACTIONS(237),
        [anon_sym_or] = ACTIONS(235),
        [anon_sym_LBRACK] = ACTIONS(241),
        [sym_comment] = ACTIONS(75),
    },
    [616] = {
        [ts_builtin_sym_end] = ACTIONS(831),
        [anon_sym_SEMI] = ACTIONS(831),
        [anon_sym_print] = ACTIONS(829),
        [anon_sym_return] = ACTIONS(829),
        [anon_sym_del] = ACTIONS(829),
        [sym_pass_statement] = ACTIONS(829),
        [sym_break_statement] = ACTIONS(829),
        [sym_continue_statement] = ACTIONS(829),
        [anon_sym_if] = ACTIONS(829),
        [anon_sym_else] = ACTIONS(829),
        [anon_sym_for] = ACTIONS(829),
        [anon_sym_while] = ACTIONS(829),
        [anon_sym_try] = ACTIONS(829),
        [anon_sym_except] = ACTIONS(829),
        [anon_sym_finally] = ACTIONS(829),
        [anon_sym_with] = ACTIONS(829),
        [anon_sym_def] = ACTIONS(829),
        [anon_sym_class] = ACTIONS(829),
        [anon_sym_AT] = ACTIONS(831),
        [anon_sym_LBRACK] = ACTIONS(831),
        [anon_sym_LBRACE] = ACTIONS(831),
        [sym_number] = ACTIONS(829),
        [sym_identifier] = ACTIONS(833),
        [sym_comment] = ACTIONS(75),
        [sym__newline] = ACTIONS(831),
        [sym__dedent] = ACTIONS(831),
    },
    [617] = {
        [sym__simple_statement] = STATE(332),
        [sym_print_statement] = STATE(5),
        [sym_expression_statement] = STATE(5),
        [sym_return_statement] = STATE(5),
        [sym_delete_statement] = STATE(5),
        [sym__suite] = STATE(618),
        [sym__expression] = STATE(23),
        [sym_binary_operator] = STATE(16),
        [sym_subscript] = STATE(16),
        [sym_call] = STATE(16),
        [sym_list] = STATE(16),
        [sym_list_comprehension] = STATE(16),
        [sym_dictionary] = STATE(16),
        [sym_dictionary_comprehension] = STATE(16),
        [sym_set] = STATE(16),
        [sym_set_comprehension] = STATE(16),
        [anon_sym_print] = ACTIONS(85),
        [anon_sym_return] = ACTIONS(87),
        [anon_sym_del] = ACTIONS(89),
        [sym_pass_statement] = ACTIONS(91),
        [sym_break_statement] = ACTIONS(91),
        [sym_continue_statement] = ACTIONS(91),
        [anon_sym_LBRACK] = ACTIONS(109),
        [anon_sym_LBRACE] = ACTIONS(111),
        [sym_number] = ACTIONS(113),
        [sym_identifier] = ACTIONS(115),
        [sym_comment] = ACTIONS(75),
        [sym__indent] = ACTIONS(757),
    },
    [618] = {
        [sym_except_clause] = STATE(570),
        [sym_finally_clause] = STATE(571),
        [aux_sym_try_statement_repeat1] = STATE(501),
        [anon_sym_except] = ACTIONS(1705),
        [anon_sym_finally] = ACTIONS(1707),
        [sym_comment] = ACTIONS(75),
    },
    [619] = {
        [anon_sym_COLON] = ACTIONS(1709),
        [anon_sym_LPAREN] = ACTIONS(225),
        [anon_sym_STAR] = ACTIONS(227),
        [anon_sym_PLUS] = ACTIONS(229),
        [anon_sym_DASH] = ACTIONS(229),
        [anon_sym_SLASH] = ACTIONS(231),
        [anon_sym_STAR_STAR] = ACTIONS(233),
        [anon_sym_PIPE] = ACTIONS(235),
        [anon_sym_AMP] = ACTIONS(237),
        [anon_sym_CARET] = ACTIONS(239),
        [anon_sym_LT_LT] = ACTIONS(229),
        [anon_sym_GT_GT] = ACTIONS(229),
        [anon_sym_and] = ACTIONS(237),
        [anon_sym_or] = ACTIONS(235),
        [anon_sym_LBRACK] = ACTIONS(241),
        [sym_comment] = ACTIONS(75),
    },
    [620] = {
        [sym__simple_statement] = STATE(511),
        [sym_print_statement] = STATE(5),
        [sym_expression_statement] = STATE(5),
        [sym_return_statement] = STATE(5),
        [sym_delete_statement] = STATE(5),
        [sym__suite] = STATE(621),
        [sym__expression] = STATE(23),
        [sym_binary_operator] = STATE(16),
        [sym_subscript] = STATE(16),
        [sym_call] = STATE(16),
        [sym_list] = STATE(16),
        [sym_list_comprehension] = STATE(16),
        [sym_dictionary] = STATE(16),
        [sym_dictionary_comprehension] = STATE(16),
        [sym_set] = STATE(16),
        [sym_set_comprehension] = STATE(16),
        [anon_sym_print] = ACTIONS(85),
        [anon_sym_return] = ACTIONS(87),
        [anon_sym_del] = ACTIONS(89),
        [sym_pass_statement] = ACTIONS(91),
        [sym_break_statement] = ACTIONS(91),
        [sym_continue_statement] = ACTIONS(91),
        [anon_sym_LBRACK] = ACTIONS(109),
        [anon_sym_LBRACE] = ACTIONS(111),
        [sym_number] = ACTIONS(113),
        [sym_identifier] = ACTIONS(115),
        [sym_comment] = ACTIONS(75),
        [sym__indent] = ACTIONS(995),
    },
    [621] = {
        [sym_else_clause] = STATE(622),
        [ts_builtin_sym_end] = ACTIONS(841),
        [anon_sym_SEMI] = ACTIONS(841),
        [anon_sym_print] = ACTIONS(839),
        [anon_sym_return] = ACTIONS(839),
        [anon_sym_del] = ACTIONS(839),
        [sym_pass_statement] = ACTIONS(839),
        [sym_break_statement] = ACTIONS(839),
        [sym_continue_statement] = ACTIONS(839),
        [anon_sym_if] = ACTIONS(839),
        [anon_sym_else] = ACTIONS(1442),
        [anon_sym_for] = ACTIONS(839),
        [anon_sym_while] = ACTIONS(839),
        [anon_sym_try] = ACTIONS(839),
        [anon_sym_with] = ACTIONS(839),
        [anon_sym_def] = ACTIONS(839),
        [anon_sym_class] = ACTIONS(839),
        [anon_sym_AT] = ACTIONS(841),
        [anon_sym_LBRACK] = ACTIONS(841),
        [anon_sym_LBRACE] = ACTIONS(841),
        [sym_number] = ACTIONS(839),
        [sym_identifier] = ACTIONS(843),
        [sym_comment] = ACTIONS(75),
        [sym__newline] = ACTIONS(841),
        [sym__dedent] = ACTIONS(841),
    },
    [622] = {
        [ts_builtin_sym_end] = ACTIONS(847),
        [anon_sym_SEMI] = ACTIONS(847),
        [anon_sym_print] = ACTIONS(845),
        [anon_sym_return] = ACTIONS(845),
        [anon_sym_del] = ACTIONS(845),
        [sym_pass_statement] = ACTIONS(845),
        [sym_break_statement] = ACTIONS(845),
        [sym_continue_statement] = ACTIONS(845),
        [anon_sym_if] = ACTIONS(845),
        [anon_sym_for] = ACTIONS(845),
        [anon_sym_while] = ACTIONS(845),
        [anon_sym_try] = ACTIONS(845),
        [anon_sym_with] = ACTIONS(845),
        [anon_sym_def] = ACTIONS(845),
        [anon_sym_class] = ACTIONS(845),
        [anon_sym_AT] = ACTIONS(847),
        [anon_sym_LBRACK] = ACTIONS(847),
        [anon_sym_LBRACE] = ACTIONS(847),
        [sym_number] = ACTIONS(845),
        [sym_identifier] = ACTIONS(849),
        [sym_comment] = ACTIONS(75),
        [sym__newline] = ACTIONS(847),
        [sym__dedent] = ACTIONS(847),
    },
    [623] = {
        [aux_sym_print_statement_repeat1] = STATE(126),
        [anon_sym_COMMA] = ACTIONS(385),
        [anon_sym_COLON] = ACTIONS(387),
        [anon_sym_LPAREN] = ACTIONS(225),
        [anon_sym_STAR] = ACTIONS(1711),
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
        [anon_sym_LBRACK] = ACTIONS(241),
        [anon_sym_RBRACK] = ACTIONS(545),
        [anon_sym_RBRACE] = ACTIONS(1715),
        [sym_comment] = ACTIONS(75),
    },
    [624] = {
        [sym__expression] = STATE(626),
        [sym_binary_operator] = STATE(41),
        [sym_subscript] = STATE(41),
        [sym_call] = STATE(41),
        [sym_list] = STATE(41),
        [sym_list_comprehension] = STATE(41),
        [sym_dictionary] = STATE(41),
        [sym_dictionary_comprehension] = STATE(41),
        [sym_set] = STATE(41),
        [sym_set_comprehension] = STATE(41),
        [anon_sym_LBRACK] = ACTIONS(119),
        [anon_sym_LBRACE] = ACTIONS(121),
        [sym_number] = ACTIONS(123),
        [sym_identifier] = ACTIONS(123),
        [sym_comment] = ACTIONS(75),
    },
    [625] = {
        [anon_sym_COMMA] = ACTIONS(1717),
        [anon_sym_COLON] = ACTIONS(1717),
        [anon_sym_for] = ACTIONS(1717),
        [anon_sym_in] = ACTIONS(1717),
        [anon_sym_as] = ACTIONS(1717),
        [anon_sym_LPAREN] = ACTIONS(1717),
        [anon_sym_RPAREN] = ACTIONS(1717),
        [anon_sym_STAR] = ACTIONS(1720),
        [anon_sym_PLUS] = ACTIONS(1717),
        [anon_sym_DASH] = ACTIONS(1717),
        [anon_sym_SLASH] = ACTIONS(1717),
        [anon_sym_STAR_STAR] = ACTIONS(1717),
        [anon_sym_PIPE] = ACTIONS(1717),
        [anon_sym_AMP] = ACTIONS(1717),
        [anon_sym_CARET] = ACTIONS(1717),
        [anon_sym_LT_LT] = ACTIONS(1717),
        [anon_sym_GT_GT] = ACTIONS(1717),
        [anon_sym_and] = ACTIONS(1717),
        [anon_sym_or] = ACTIONS(1717),
        [anon_sym_LBRACK] = ACTIONS(1717),
        [anon_sym_RBRACK] = ACTIONS(1717),
        [anon_sym_RBRACE] = ACTIONS(1717),
        [sym_comment] = ACTIONS(75),
        [sym__newline] = ACTIONS(1717),
    },
    [626] = {
        [anon_sym_COMMA] = ACTIONS(281),
        [anon_sym_COLON] = ACTIONS(281),
        [anon_sym_LPAREN] = ACTIONS(1532),
        [anon_sym_STAR] = ACTIONS(1723),
        [anon_sym_PLUS] = ACTIONS(1726),
        [anon_sym_DASH] = ACTIONS(1726),
        [anon_sym_SLASH] = ACTIONS(1726),
        [anon_sym_STAR_STAR] = ACTIONS(1726),
        [anon_sym_PIPE] = ACTIONS(1726),
        [anon_sym_AMP] = ACTIONS(1726),
        [anon_sym_CARET] = ACTIONS(1726),
        [anon_sym_LT_LT] = ACTIONS(1726),
        [anon_sym_GT_GT] = ACTIONS(1726),
        [anon_sym_and] = ACTIONS(1726),
        [anon_sym_or] = ACTIONS(1726),
        [anon_sym_LBRACK] = ACTIONS(1541),
        [anon_sym_RBRACK] = ACTIONS(281),
        [anon_sym_RBRACE] = ACTIONS(281),
        [sym_comment] = ACTIONS(75),
    },
    [627] = {
        [anon_sym_in] = ACTIONS(1308),
        [sym_comment] = ACTIONS(75),
    },
    [628] = {
        [anon_sym_COLON] = ACTIONS(1729),
        [anon_sym_LPAREN] = ACTIONS(225),
        [anon_sym_STAR] = ACTIONS(227),
        [anon_sym_PLUS] = ACTIONS(229),
        [anon_sym_DASH] = ACTIONS(229),
        [anon_sym_SLASH] = ACTIONS(231),
        [anon_sym_STAR_STAR] = ACTIONS(233),
        [anon_sym_PIPE] = ACTIONS(235),
        [anon_sym_AMP] = ACTIONS(237),
        [anon_sym_CARET] = ACTIONS(239),
        [anon_sym_LT_LT] = ACTIONS(229),
        [anon_sym_GT_GT] = ACTIONS(229),
        [anon_sym_and] = ACTIONS(237),
        [anon_sym_or] = ACTIONS(235),
        [anon_sym_LBRACK] = ACTIONS(241),
        [sym_comment] = ACTIONS(75),
    },
    [629] = {
        [sym__simple_statement] = STATE(511),
        [sym_print_statement] = STATE(5),
        [sym_expression_statement] = STATE(5),
        [sym_return_statement] = STATE(5),
        [sym_delete_statement] = STATE(5),
        [sym__suite] = STATE(630),
        [sym__expression] = STATE(23),
        [sym_binary_operator] = STATE(16),
        [sym_subscript] = STATE(16),
        [sym_call] = STATE(16),
        [sym_list] = STATE(16),
        [sym_list_comprehension] = STATE(16),
        [sym_dictionary] = STATE(16),
        [sym_dictionary_comprehension] = STATE(16),
        [sym_set] = STATE(16),
        [sym_set_comprehension] = STATE(16),
        [anon_sym_print] = ACTIONS(85),
        [anon_sym_return] = ACTIONS(87),
        [anon_sym_del] = ACTIONS(89),
        [sym_pass_statement] = ACTIONS(91),
        [sym_break_statement] = ACTIONS(91),
        [sym_continue_statement] = ACTIONS(91),
        [anon_sym_LBRACK] = ACTIONS(109),
        [anon_sym_LBRACE] = ACTIONS(111),
        [sym_number] = ACTIONS(113),
        [sym_identifier] = ACTIONS(115),
        [sym_comment] = ACTIONS(75),
        [sym__indent] = ACTIONS(995),
    },
    [630] = {
        [ts_builtin_sym_end] = ACTIONS(905),
        [anon_sym_SEMI] = ACTIONS(905),
        [anon_sym_print] = ACTIONS(903),
        [anon_sym_return] = ACTIONS(903),
        [anon_sym_del] = ACTIONS(903),
        [sym_pass_statement] = ACTIONS(903),
        [sym_break_statement] = ACTIONS(903),
        [sym_continue_statement] = ACTIONS(903),
        [anon_sym_if] = ACTIONS(903),
        [anon_sym_elif] = ACTIONS(903),
        [anon_sym_else] = ACTIONS(903),
        [anon_sym_for] = ACTIONS(903),
        [anon_sym_while] = ACTIONS(903),
        [anon_sym_try] = ACTIONS(903),
        [anon_sym_with] = ACTIONS(903),
        [anon_sym_def] = ACTIONS(903),
        [anon_sym_class] = ACTIONS(903),
        [anon_sym_AT] = ACTIONS(905),
        [anon_sym_LBRACK] = ACTIONS(905),
        [anon_sym_LBRACE] = ACTIONS(905),
        [sym_number] = ACTIONS(903),
        [sym_identifier] = ACTIONS(907),
        [sym_comment] = ACTIONS(75),
        [sym__newline] = ACTIONS(905),
        [sym__dedent] = ACTIONS(905),
    },
    [631] = {
        [anon_sym_COLON] = ACTIONS(1731),
        [anon_sym_LPAREN] = ACTIONS(225),
        [anon_sym_STAR] = ACTIONS(227),
        [anon_sym_PLUS] = ACTIONS(229),
        [anon_sym_DASH] = ACTIONS(229),
        [anon_sym_SLASH] = ACTIONS(231),
        [anon_sym_STAR_STAR] = ACTIONS(233),
        [anon_sym_PIPE] = ACTIONS(235),
        [anon_sym_AMP] = ACTIONS(237),
        [anon_sym_CARET] = ACTIONS(239),
        [anon_sym_LT_LT] = ACTIONS(229),
        [anon_sym_GT_GT] = ACTIONS(229),
        [anon_sym_and] = ACTIONS(237),
        [anon_sym_or] = ACTIONS(235),
        [anon_sym_LBRACK] = ACTIONS(241),
        [sym_comment] = ACTIONS(75),
    },
    [632] = {
        [sym__simple_statement] = STATE(511),
        [sym_print_statement] = STATE(5),
        [sym_expression_statement] = STATE(5),
        [sym_return_statement] = STATE(5),
        [sym_delete_statement] = STATE(5),
        [sym__suite] = STATE(633),
        [sym__expression] = STATE(23),
        [sym_binary_operator] = STATE(16),
        [sym_subscript] = STATE(16),
        [sym_call] = STATE(16),
        [sym_list] = STATE(16),
        [sym_list_comprehension] = STATE(16),
        [sym_dictionary] = STATE(16),
        [sym_dictionary_comprehension] = STATE(16),
        [sym_set] = STATE(16),
        [sym_set_comprehension] = STATE(16),
        [anon_sym_print] = ACTIONS(85),
        [anon_sym_return] = ACTIONS(87),
        [anon_sym_del] = ACTIONS(89),
        [sym_pass_statement] = ACTIONS(91),
        [sym_break_statement] = ACTIONS(91),
        [sym_continue_statement] = ACTIONS(91),
        [anon_sym_LBRACK] = ACTIONS(109),
        [anon_sym_LBRACE] = ACTIONS(111),
        [sym_number] = ACTIONS(113),
        [sym_identifier] = ACTIONS(115),
        [sym_comment] = ACTIONS(75),
        [sym__indent] = ACTIONS(995),
    },
    [633] = {
        [sym_elif_clause] = STATE(560),
        [sym_else_clause] = STATE(634),
        [aux_sym_if_statement_repeat1] = STATE(500),
        [ts_builtin_sym_end] = ACTIONS(873),
        [anon_sym_SEMI] = ACTIONS(873),
        [anon_sym_print] = ACTIONS(869),
        [anon_sym_return] = ACTIONS(869),
        [anon_sym_del] = ACTIONS(869),
        [sym_pass_statement] = ACTIONS(869),
        [sym_break_statement] = ACTIONS(869),
        [sym_continue_statement] = ACTIONS(869),
        [anon_sym_if] = ACTIONS(869),
        [anon_sym_elif] = ACTIONS(1440),
        [anon_sym_else] = ACTIONS(1442),
        [anon_sym_for] = ACTIONS(869),
        [anon_sym_while] = ACTIONS(869),
        [anon_sym_try] = ACTIONS(869),
        [anon_sym_with] = ACTIONS(869),
        [anon_sym_def] = ACTIONS(869),
        [anon_sym_class] = ACTIONS(869),
        [anon_sym_AT] = ACTIONS(873),
        [anon_sym_LBRACK] = ACTIONS(873),
        [anon_sym_LBRACE] = ACTIONS(873),
        [sym_number] = ACTIONS(869),
        [sym_identifier] = ACTIONS(875),
        [sym_comment] = ACTIONS(75),
        [sym__newline] = ACTIONS(873),
        [sym__dedent] = ACTIONS(873),
    },
    [634] = {
        [ts_builtin_sym_end] = ACTIONS(885),
        [anon_sym_SEMI] = ACTIONS(885),
        [anon_sym_print] = ACTIONS(883),
        [anon_sym_return] = ACTIONS(883),
        [anon_sym_del] = ACTIONS(883),
        [sym_pass_statement] = ACTIONS(883),
        [sym_break_statement] = ACTIONS(883),
        [sym_continue_statement] = ACTIONS(883),
        [anon_sym_if] = ACTIONS(883),
        [anon_sym_for] = ACTIONS(883),
        [anon_sym_while] = ACTIONS(883),
        [anon_sym_try] = ACTIONS(883),
        [anon_sym_with] = ACTIONS(883),
        [anon_sym_def] = ACTIONS(883),
        [anon_sym_class] = ACTIONS(883),
        [anon_sym_AT] = ACTIONS(885),
        [anon_sym_LBRACK] = ACTIONS(885),
        [anon_sym_LBRACE] = ACTIONS(885),
        [sym_number] = ACTIONS(883),
        [sym_identifier] = ACTIONS(887),
        [sym_comment] = ACTIONS(75),
        [sym__newline] = ACTIONS(885),
        [sym__dedent] = ACTIONS(885),
    },
    [635] = {
        [anon_sym_COMMA] = ACTIONS(1456),
        [anon_sym_COLON] = ACTIONS(1733),
        [anon_sym_for] = ACTIONS(1456),
        [anon_sym_in] = ACTIONS(1456),
        [anon_sym_as] = ACTIONS(1456),
        [anon_sym_LPAREN] = ACTIONS(1456),
        [anon_sym_RPAREN] = ACTIONS(1456),
        [anon_sym_STAR] = ACTIONS(1459),
        [anon_sym_PLUS] = ACTIONS(1456),
        [anon_sym_DASH] = ACTIONS(1456),
        [anon_sym_SLASH] = ACTIONS(1456),
        [anon_sym_STAR_STAR] = ACTIONS(1456),
        [anon_sym_PIPE] = ACTIONS(1456),
        [anon_sym_AMP] = ACTIONS(1456),
        [anon_sym_CARET] = ACTIONS(1456),
        [anon_sym_LT_LT] = ACTIONS(1456),
        [anon_sym_GT_GT] = ACTIONS(1456),
        [anon_sym_and] = ACTIONS(1456),
        [anon_sym_or] = ACTIONS(1456),
        [anon_sym_LBRACK] = ACTIONS(1456),
        [anon_sym_RBRACK] = ACTIONS(1456),
        [anon_sym_RBRACE] = ACTIONS(1456),
        [sym_comment] = ACTIONS(75),
        [sym__newline] = ACTIONS(1456),
    },
    [636] = {
        [anon_sym_COMMA] = ACTIONS(1738),
        [anon_sym_RBRACK] = ACTIONS(1738),
        [sym_comment] = ACTIONS(75),
    },
    [637] = {
        [anon_sym_COMMA] = ACTIONS(1741),
        [anon_sym_COLON] = ACTIONS(1741),
        [anon_sym_for] = ACTIONS(1741),
        [anon_sym_in] = ACTIONS(1741),
        [anon_sym_as] = ACTIONS(1741),
        [anon_sym_LPAREN] = ACTIONS(1741),
        [anon_sym_RPAREN] = ACTIONS(1741),
        [anon_sym_STAR] = ACTIONS(1746),
        [anon_sym_PLUS] = ACTIONS(1741),
        [anon_sym_DASH] = ACTIONS(1741),
        [anon_sym_SLASH] = ACTIONS(1741),
        [anon_sym_STAR_STAR] = ACTIONS(1741),
        [anon_sym_PIPE] = ACTIONS(1741),
        [anon_sym_AMP] = ACTIONS(1741),
        [anon_sym_CARET] = ACTIONS(1741),
        [anon_sym_LT_LT] = ACTIONS(1741),
        [anon_sym_GT_GT] = ACTIONS(1741),
        [anon_sym_and] = ACTIONS(1741),
        [anon_sym_or] = ACTIONS(1741),
        [anon_sym_LBRACK] = ACTIONS(1741),
        [anon_sym_RBRACK] = ACTIONS(1741),
        [anon_sym_RBRACE] = ACTIONS(1741),
        [sym_comment] = ACTIONS(75),
        [sym__newline] = ACTIONS(1741),
    },
    [638] = {
        [anon_sym_COMMA] = ACTIONS(1751),
        [anon_sym_COLON] = ACTIONS(1751),
        [anon_sym_for] = ACTIONS(1751),
        [anon_sym_in] = ACTIONS(1751),
        [anon_sym_as] = ACTIONS(1751),
        [anon_sym_LPAREN] = ACTIONS(1751),
        [anon_sym_RPAREN] = ACTIONS(1751),
        [anon_sym_STAR] = ACTIONS(1756),
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
        [anon_sym_LBRACK] = ACTIONS(1751),
        [anon_sym_RBRACK] = ACTIONS(1751),
        [anon_sym_RBRACE] = ACTIONS(1751),
        [sym_comment] = ACTIONS(75),
        [sym__newline] = ACTIONS(1751),
    },
    [639] = {
        [anon_sym_COMMA] = ACTIONS(137),
        [anon_sym_COLON] = ACTIONS(137),
        [anon_sym_in] = ACTIONS(137),
        [anon_sym_as] = ACTIONS(137),
        [anon_sym_LPAREN] = ACTIONS(137),
        [anon_sym_RPAREN] = ACTIONS(137),
        [anon_sym_EQ] = ACTIONS(285),
        [anon_sym_STAR] = ACTIONS(139),
        [anon_sym_PLUS] = ACTIONS(137),
        [anon_sym_DASH] = ACTIONS(137),
        [anon_sym_SLASH] = ACTIONS(137),
        [anon_sym_STAR_STAR] = ACTIONS(137),
        [anon_sym_PIPE] = ACTIONS(137),
        [anon_sym_AMP] = ACTIONS(137),
        [anon_sym_CARET] = ACTIONS(137),
        [anon_sym_LT_LT] = ACTIONS(137),
        [anon_sym_GT_GT] = ACTIONS(137),
        [anon_sym_and] = ACTIONS(137),
        [anon_sym_or] = ACTIONS(137),
        [anon_sym_LBRACK] = ACTIONS(137),
        [anon_sym_RBRACK] = ACTIONS(137),
        [anon_sym_RBRACE] = ACTIONS(137),
        [sym_comment] = ACTIONS(75),
        [sym__newline] = ACTIONS(137),
    },
    [640] = {
        [anon_sym_COMMA] = ACTIONS(1761),
        [anon_sym_COLON] = ACTIONS(1761),
        [sym_comment] = ACTIONS(75),
    },
    [641] = {
        [anon_sym_COMMA] = ACTIONS(1764),
        [anon_sym_COLON] = ACTIONS(1772),
        [anon_sym_in] = ACTIONS(1777),
        [anon_sym_as] = ACTIONS(733),
        [anon_sym_LPAREN] = ACTIONS(165),
        [anon_sym_RPAREN] = ACTIONS(1780),
        [anon_sym_STAR] = ACTIONS(1785),
        [anon_sym_PLUS] = ACTIONS(1787),
        [anon_sym_DASH] = ACTIONS(1787),
        [anon_sym_SLASH] = ACTIONS(1787),
        [anon_sym_STAR_STAR] = ACTIONS(1787),
        [anon_sym_PIPE] = ACTIONS(1787),
        [anon_sym_AMP] = ACTIONS(1787),
        [anon_sym_CARET] = ACTIONS(1787),
        [anon_sym_LT_LT] = ACTIONS(1787),
        [anon_sym_GT_GT] = ACTIONS(1787),
        [anon_sym_and] = ACTIONS(1787),
        [anon_sym_or] = ACTIONS(1787),
        [anon_sym_LBRACK] = ACTIONS(181),
        [anon_sym_RBRACK] = ACTIONS(1789),
        [anon_sym_RBRACE] = ACTIONS(1777),
        [sym_comment] = ACTIONS(75),
        [sym__newline] = ACTIONS(1777),
    },
    [642] = {
        [anon_sym_COMMA] = ACTIONS(1794),
        [anon_sym_RPAREN] = ACTIONS(1794),
        [sym_comment] = ACTIONS(75),
    },
    [643] = {
        [anon_sym_RPAREN] = ACTIONS(1797),
        [sym_comment] = ACTIONS(75),
    },
    [644] = {
        [anon_sym_COMMA] = ACTIONS(1799),
        [anon_sym_RBRACE] = ACTIONS(1799),
        [sym_comment] = ACTIONS(75),
    },
    [645] = {
        [anon_sym_COMMA] = ACTIONS(1802),
        [anon_sym_COLON] = ACTIONS(1802),
        [anon_sym_for] = ACTIONS(1802),
        [anon_sym_in] = ACTIONS(1802),
        [anon_sym_as] = ACTIONS(1802),
        [anon_sym_LPAREN] = ACTIONS(1802),
        [anon_sym_RPAREN] = ACTIONS(1802),
        [anon_sym_STAR] = ACTIONS(1806),
        [anon_sym_PLUS] = ACTIONS(1802),
        [anon_sym_DASH] = ACTIONS(1802),
        [anon_sym_SLASH] = ACTIONS(1802),
        [anon_sym_STAR_STAR] = ACTIONS(1802),
        [anon_sym_PIPE] = ACTIONS(1802),
        [anon_sym_AMP] = ACTIONS(1802),
        [anon_sym_CARET] = ACTIONS(1802),
        [anon_sym_LT_LT] = ACTIONS(1802),
        [anon_sym_GT_GT] = ACTIONS(1802),
        [anon_sym_and] = ACTIONS(1802),
        [anon_sym_or] = ACTIONS(1802),
        [anon_sym_LBRACK] = ACTIONS(1802),
        [anon_sym_RBRACK] = ACTIONS(1802),
        [anon_sym_RBRACE] = ACTIONS(1802),
        [sym_comment] = ACTIONS(75),
        [sym__newline] = ACTIONS(1802),
    },
    [646] = {
        [sym__simple_statement] = STATE(511),
        [sym_print_statement] = STATE(5),
        [sym_expression_statement] = STATE(5),
        [sym_return_statement] = STATE(5),
        [sym_delete_statement] = STATE(5),
        [sym__suite] = STATE(565),
        [sym__expression] = STATE(649),
        [sym_binary_operator] = STATE(16),
        [sym_subscript] = STATE(16),
        [sym_call] = STATE(16),
        [sym_list] = STATE(16),
        [sym_list_comprehension] = STATE(16),
        [sym_dictionary] = STATE(16),
        [sym_dictionary_comprehension] = STATE(16),
        [sym_set] = STATE(16),
        [sym_set_comprehension] = STATE(16),
        [anon_sym_print] = ACTIONS(85),
        [anon_sym_return] = ACTIONS(87),
        [anon_sym_del] = ACTIONS(89),
        [sym_pass_statement] = ACTIONS(91),
        [sym_break_statement] = ACTIONS(91),
        [sym_continue_statement] = ACTIONS(91),
        [anon_sym_LBRACK] = ACTIONS(109),
        [anon_sym_LBRACE] = ACTIONS(111),
        [sym_number] = ACTIONS(113),
        [sym_identifier] = ACTIONS(115),
        [sym_comment] = ACTIONS(75),
        [sym__indent] = ACTIONS(995),
    },
    [647] = {
        [sym__expression] = STATE(648),
        [sym_binary_operator] = STATE(16),
        [sym_subscript] = STATE(16),
        [sym_call] = STATE(16),
        [sym_list] = STATE(16),
        [sym_list_comprehension] = STATE(16),
        [sym_dictionary] = STATE(16),
        [sym_dictionary_comprehension] = STATE(16),
        [sym_set] = STATE(16),
        [sym_set_comprehension] = STATE(16),
        [anon_sym_LBRACK] = ACTIONS(109),
        [anon_sym_LBRACE] = ACTIONS(111),
        [sym_number] = ACTIONS(113),
        [sym_identifier] = ACTIONS(113),
        [sym_comment] = ACTIONS(75),
    },
    [648] = {
        [anon_sym_COMMA] = ACTIONS(281),
        [anon_sym_COLON] = ACTIONS(281),
        [anon_sym_in] = ACTIONS(281),
        [anon_sym_as] = ACTIONS(281),
        [anon_sym_LPAREN] = ACTIONS(1350),
        [anon_sym_RPAREN] = ACTIONS(281),
        [anon_sym_STAR] = ACTIONS(1810),
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
        [anon_sym_LBRACK] = ACTIONS(1371),
        [anon_sym_RBRACK] = ACTIONS(281),
        [anon_sym_RBRACE] = ACTIONS(281),
        [sym_comment] = ACTIONS(75),
        [sym__newline] = ACTIONS(281),
    },
    [649] = {
        [anon_sym_COMMA] = ACTIONS(381),
        [anon_sym_LPAREN] = ACTIONS(165),
        [anon_sym_STAR] = ACTIONS(1816),
        [anon_sym_PLUS] = ACTIONS(1818),
        [anon_sym_DASH] = ACTIONS(1818),
        [anon_sym_SLASH] = ACTIONS(1818),
        [anon_sym_STAR_STAR] = ACTIONS(1818),
        [anon_sym_PIPE] = ACTIONS(1818),
        [anon_sym_AMP] = ACTIONS(1818),
        [anon_sym_CARET] = ACTIONS(1818),
        [anon_sym_LT_LT] = ACTIONS(1818),
        [anon_sym_GT_GT] = ACTIONS(1818),
        [anon_sym_and] = ACTIONS(1818),
        [anon_sym_or] = ACTIONS(1818),
        [anon_sym_LBRACK] = ACTIONS(181),
        [anon_sym_RBRACE] = ACTIONS(381),
        [sym_comment] = ACTIONS(75),
        [sym__newline] = ACTIONS(183),
    },
    [650] = {
        [sym__expression] = STATE(651),
        [sym_binary_operator] = STATE(16),
        [sym_subscript] = STATE(16),
        [sym_call] = STATE(16),
        [sym_list] = STATE(16),
        [sym_list_comprehension] = STATE(16),
        [sym_dictionary] = STATE(16),
        [sym_dictionary_comprehension] = STATE(16),
        [sym_set] = STATE(16),
        [sym_set_comprehension] = STATE(16),
        [anon_sym_LBRACK] = ACTIONS(109),
        [anon_sym_LBRACE] = ACTIONS(111),
        [sym_number] = ACTIONS(113),
        [sym_identifier] = ACTIONS(113),
        [sym_comment] = ACTIONS(75),
    },
    [651] = {
        [anon_sym_COMMA] = ACTIONS(281),
        [anon_sym_LPAREN] = ACTIONS(1350),
        [anon_sym_STAR] = ACTIONS(1820),
        [anon_sym_PLUS] = ACTIONS(1823),
        [anon_sym_DASH] = ACTIONS(1823),
        [anon_sym_SLASH] = ACTIONS(1823),
        [anon_sym_STAR_STAR] = ACTIONS(1823),
        [anon_sym_PIPE] = ACTIONS(1823),
        [anon_sym_AMP] = ACTIONS(1823),
        [anon_sym_CARET] = ACTIONS(1823),
        [anon_sym_LT_LT] = ACTIONS(1823),
        [anon_sym_GT_GT] = ACTIONS(1823),
        [anon_sym_and] = ACTIONS(1823),
        [anon_sym_or] = ACTIONS(1823),
        [anon_sym_LBRACK] = ACTIONS(1371),
        [anon_sym_RBRACE] = ACTIONS(281),
        [sym_comment] = ACTIONS(75),
        [sym__newline] = ACTIONS(281),
    },
};

static TSParseActionEntry ts_parse_actions[] = {
    [0] = {.count = 0, .reusable = false, .depends_on_lookahead = false},
    [1] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(0),
    [3] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(28),
    [5] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(2),
    [7] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(446),
    [9] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(3),
    [11] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(4),
    [13] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(5),
    [15] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(447),
    [17] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(448),
    [19] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(449),
    [21] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(450),
    [23] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(451),
    [25] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(452),
    [27] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(453),
    [29] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(454),
    [31] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(455),
    [33] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(456),
    [35] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(457),
    [37] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(458),
    [39] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(459),
    [41] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(460),
    [43] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(461),
    [45] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(462),
    [47] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(463),
    [49] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(464),
    [51] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(13),
    [53] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(465),
    [55] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(466),
    [57] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(467),
    [59] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(466),
    [61] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(468),
    [63] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(469),
    [65] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(470),
    [67] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(15),
    [69] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(471),
    [71] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(16),
    [73] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, RECOVER(472),
    [75] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT_EXTRA(),
    [77] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(473),
    [79] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(474),
    [81] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(475),
    [83] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_module, 0),
    [85] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(2),
    [87] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(3),
    [89] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(4),
    [91] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(5),
    [93] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(6),
    [95] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(7),
    [97] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(8),
    [99] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(9),
    [101] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(10),
    [103] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(11),
    [105] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(12),
    [107] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(13),
    [109] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(14),
    [111] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(15),
    [113] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(16),
    [115] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(16),
    [117] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__simple_statement, 1),
    [119] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(38),
    [121] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(40),
    [123] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(41),
    [125] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(391),
    [127] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(381),
    [129] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(245),
    [131] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(230),
    [133] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(217),
    [135] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(192),
    [137] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__expression, 1),
    [139] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__expression, 1),
    [141] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, ACCEPT_INPUT(),
    [143] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_module_repeat1, 1),
    [145] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_module_repeat1, 1),
    [147] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_module_repeat1, 1),
    [149] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(191),
    [151] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__statement, 1),
    [153] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__statement, 1),
    [155] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__statement, 1),
    [157] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__compound_statement, 1),
    [159] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__compound_statement, 1),
    [161] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__compound_statement, 1),
    [163] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_decorated_definition_repeat1, 1),
    [165] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(30),
    [167] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(31),
    [169] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(32),
    [171] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(31),
    [173] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(33),
    [175] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(34),
    [177] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(35),
    [179] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(36),
    [181] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(37),
    [183] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_expression_statement, 1),
    [185] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_module, 1),
    [187] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(28),
    [189] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(11),
    [191] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(12),
    [193] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_decorated_definition, 2),
    [195] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_decorated_definition, 2),
    [197] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_decorated_definition, 2),
    [199] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_decorated_definition_repeat1, 2),
    [201] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_module, 2),
    [203] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_module_repeat1, 2),
    [205] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_module_repeat1, 2),
    [207] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_module_repeat1, 2),
    [209] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(75),
    [211] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(76),
    [213] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(77),
    [215] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(39),
    [217] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(145),
    [219] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(43),
    [221] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(52),
    [223] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(109),
    [225] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(44),
    [227] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(45),
    [229] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(46),
    [231] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(45),
    [233] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(47),
    [235] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(48),
    [237] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(49),
    [239] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(50),
    [241] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(51),
    [243] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(67),
    [245] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(55),
    [247] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(59),
    [249] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_subscript, 4),
    [251] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_subscript, 4),
    [253] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(54),
    [255] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(56),
    [257] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(57),
    [259] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_subscript, 5),
    [261] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_subscript, 5),
    [263] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_subscript_repeat1, 3),
    [265] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_subscript, 6),
    [267] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_subscript, 6),
    [269] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(61),
    [271] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(62),
    [273] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(65),
    [275] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(64),
    [277] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(66),
    [279] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_subscript_repeat1, 2),
    [281] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE_FRAGILE(sym_binary_operator, 3),
    [283] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE_FRAGILE(sym_binary_operator, 3),
    [285] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(107),
    [287] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(106),
    [289] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(101),
    [291] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(102),
    [293] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(100),
    [295] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(87),
    [297] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(88),
    [299] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_call, 5),
    [301] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_call, 5),
    [303] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(90),
    [305] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(91),
    [307] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_call, 6),
    [309] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_call, 6),
    [311] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_call_repeat2, 3),
    [313] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(95),
    [315] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_call, 8),
    [317] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_call, 8),
    [319] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_call_repeat2, 2),
    [321] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(99),
    [323] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_call, 7),
    [325] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_call, 7),
    [327] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_call_repeat1, 3),
    [329] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_call_repeat1, 3),
    [331] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_call, 4),
    [333] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_call, 4),
    [335] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(104),
    [337] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_call_repeat1, 2),
    [339] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_call_repeat1, 2),
    [341] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_keyword_argument, 3),
    [343] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_dictionary, 2),
    [345] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_dictionary, 2),
    [347] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(134),
    [349] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(121),
    [351] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(135),
    [353] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(136),
    [355] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(112),
    [357] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(113),
    [359] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(114),
    [361] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(117),
    [363] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_dictionary, 3),
    [365] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_dictionary, 3),
    [367] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(116),
    [369] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(118),
    [371] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_dictionary, 4),
    [373] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_dictionary, 4),
    [375] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_dictionary, 5),
    [377] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_dictionary, 5),
    [379] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_dictionary_repeat1, 3),
    [381] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_pair, 3),
    [383] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(130),
    [385] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(125),
    [387] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_expression_list, 1),
    [389] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(127),
    [391] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_expression_list, 2),
    [393] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_print_statement_repeat1, 3),
    [395] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_print_statement_repeat1, 2),
    [397] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(132),
    [399] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_dictionary_comprehension, 7),
    [401] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_dictionary_comprehension, 7),
    [403] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_dictionary_repeat1, 2),
    [405] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(139),
    [407] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_set, 3),
    [409] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_set, 3),
    [411] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(138),
    [413] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(140),
    [415] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_set, 4),
    [417] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_set, 4),
    [419] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_set, 5),
    [421] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_set, 5),
    [423] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(142),
    [425] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(144),
    [427] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_set_comprehension, 7),
    [429] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_set_comprehension, 7),
    [431] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_list, 2),
    [433] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_list, 2),
    [435] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(147),
    [437] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(148),
    [439] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(149),
    [441] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(152),
    [443] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_list, 3),
    [445] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_list, 3),
    [447] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(151),
    [449] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(153),
    [451] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_list, 4),
    [453] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_list, 4),
    [455] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_list, 5),
    [457] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_list, 5),
    [459] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(155),
    [461] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(157),
    [463] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_list_comprehension, 7),
    [465] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_list_comprehension, 7),
    [467] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_dictionary_splat_argument, 2),
    [469] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_list_splat_argument, 2),
    [471] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(190),
    [473] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(185),
    [475] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(186),
    [477] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(184),
    [479] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(175),
    [481] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(176),
    [483] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(178),
    [485] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(179),
    [487] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(181),
    [489] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(183),
    [491] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(188),
    [493] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__statement, 2),
    [495] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__statement, 2),
    [497] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__statement, 2),
    [499] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(206),
    [501] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(207),
    [503] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(208),
    [505] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(195),
    [507] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(196),
    [509] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(197),
    [511] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(200),
    [513] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(199),
    [515] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(201),
    [517] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(203),
    [519] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(205),
    [521] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(211),
    [523] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(210),
    [525] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(212),
    [527] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(214),
    [529] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(216),
    [531] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(219),
    [533] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(220),
    [535] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(221),
    [537] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(224),
    [539] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(223),
    [541] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(225),
    [543] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(227),
    [545] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(229),
    [547] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_dotted_name, 1),
    [549] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(240),
    [551] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(232),
    [553] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(233),
    [555] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_decorator, 3),
    [557] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(235),
    [559] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_decorator, 4),
    [561] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(237),
    [563] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_arguments, 3),
    [565] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(239),
    [567] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_arguments, 4),
    [569] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(244),
    [571] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_dotted_name, 2),
    [573] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(242),
    [575] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(243),
    [577] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_dotted_name_repeat1, 3),
    [579] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_dotted_name_repeat1, 2),
    [581] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(246),
    [583] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(247),
    [585] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(251),
    [587] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(249),
    [589] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(250),
    [591] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(255),
    [593] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(256),
    [595] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(257),
    [597] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(258),
    [599] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(259),
    [601] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(260),
    [603] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(261),
    [605] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(254),
    [607] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_class_definition, 7),
    [609] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_class_definition, 7),
    [611] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_class_definition, 7),
    [613] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__suite, 2),
    [615] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__suite, 2),
    [617] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__suite, 2),
    [619] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(330),
    [621] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(285),
    [623] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(272),
    [625] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(271),
    [627] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(269),
    [629] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(260),
    [631] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(261),
    [633] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__suite, 3),
    [635] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__suite, 3),
    [637] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__suite, 3),
    [639] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(273),
    [641] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(274),
    [643] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(278),
    [645] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(276),
    [647] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(277),
    [649] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(281),
    [651] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(283),
    [653] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_class_definition, 4),
    [655] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_class_definition, 4),
    [657] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_class_definition, 4),
    [659] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(286),
    [661] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(290),
    [663] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(291),
    [665] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(292),
    [667] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(288),
    [669] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_function_definition, 5),
    [671] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_function_definition, 5),
    [673] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_function_definition, 5),
    [675] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_parameters, 2),
    [677] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(306),
    [679] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(316),
    [681] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(315),
    [683] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(312),
    [685] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(310),
    [687] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(313),
    [689] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(297),
    [691] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(308),
    [693] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(301),
    [695] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(302),
    [697] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_parameters, 4),
    [699] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(303),
    [701] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(305),
    [703] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_parameters, 6),
    [705] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(307),
    [707] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_dictionary_splat_parameter, 3),
    [709] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(309),
    [711] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_parameters_repeat1, 3),
    [713] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_parameters_repeat1, 3),
    [715] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_parameters, 5),
    [717] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_default_parameter, 3),
    [719] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_parameters, 3),
    [721] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_parameters_repeat1, 2),
    [723] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_parameters_repeat1, 2),
    [725] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_list_splat_parameter, 2),
    [727] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(321),
    [729] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(322),
    [731] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_with_item, 1),
    [733] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(319),
    [735] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_with_item, 3),
    [737] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(324),
    [739] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(325),
    [741] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_with_statement, 5),
    [743] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_with_statement, 5),
    [745] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_with_statement, 5),
    [747] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_with_statement_repeat1, 3),
    [749] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_with_statement, 4),
    [751] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_with_statement, 4),
    [753] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_with_statement, 4),
    [755] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_with_statement_repeat1, 2),
    [757] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(331),
    [759] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(355),
    [761] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(334),
    [763] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(335),
    [765] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(346),
    [767] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_try_statement_repeat1, 1),
    [769] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_try_statement_repeat1, 1),
    [771] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_try_statement_repeat1, 1),
    [773] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_try_statement, 4),
    [775] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_try_statement, 4),
    [777] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_try_statement, 4),
    [779] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(339),
    [781] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(334),
    [783] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(335),
    [785] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(344),
    [787] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_try_statement, 5),
    [789] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_try_statement, 5),
    [791] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_try_statement, 5),
    [793] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_try_statement_repeat1, 2),
    [795] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_try_statement_repeat1, 2),
    [797] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_try_statement_repeat1, 2),
    [799] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_try_statement, 6),
    [801] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_try_statement, 6),
    [803] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_try_statement, 6),
    [805] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_else_clause, 3),
    [807] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_else_clause, 3),
    [809] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_else_clause, 3),
    [811] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_finally_clause, 3),
    [813] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_finally_clause, 3),
    [815] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_finally_clause, 3),
    [817] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(349),
    [819] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(350),
    [821] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(352),
    [823] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_except_clause, 6),
    [825] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_except_clause, 6),
    [827] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_except_clause, 6),
    [829] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_except_clause, 4),
    [831] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_except_clause, 4),
    [833] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_except_clause, 4),
    [835] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(357),
    [837] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(359),
    [839] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_while_statement, 4),
    [841] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_while_statement, 4),
    [843] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_while_statement, 4),
    [845] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_while_statement, 5),
    [847] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_while_statement, 5),
    [849] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_while_statement, 5),
    [851] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(363),
    [853] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(365),
    [855] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_for_statement, 6),
    [857] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_for_statement, 6),
    [859] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_for_statement, 6),
    [861] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_for_statement, 7),
    [863] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_for_statement, 7),
    [865] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_for_statement, 7),
    [867] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(369),
    [869] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_if_statement, 4),
    [871] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(371),
    [873] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_if_statement, 4),
    [875] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_if_statement, 4),
    [877] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_if_statement_repeat1, 1),
    [879] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_if_statement_repeat1, 1),
    [881] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_if_statement_repeat1, 1),
    [883] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_if_statement, 5),
    [885] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_if_statement, 5),
    [887] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_if_statement, 5),
    [889] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_if_statement_repeat1, 2),
    [891] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_if_statement_repeat1, 2),
    [893] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_if_statement_repeat1, 2),
    [895] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_if_statement, 6),
    [897] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_if_statement, 6),
    [899] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_if_statement, 6),
    [901] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(378),
    [903] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_elif_clause, 4),
    [905] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_elif_clause, 4),
    [907] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_elif_clause, 4),
    [909] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(383),
    [911] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(386),
    [913] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(388),
    [915] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(393),
    [917] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(394),
    [919] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(405),
    [921] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(398),
    [923] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(393),
    [925] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(394),
    [927] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(403),
    [929] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(408),
    [931] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(409),
    [933] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(411),
    [935] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(415),
    [937] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(419),
    [939] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(421),
    [941] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(425),
    [943] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(427),
    [945] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(434),
    [947] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_delete_statement, 2),
    [949] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(438),
    [951] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(440),
    [953] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_return_statement, 2),
    [955] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_print_statement, 2),
    [957] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_print_statement, 3),
    [959] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(635),
    [961] = {.count = 5, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_parameters_repeat1, 2), REDUCE(aux_sym_call_repeat1, 2), REDUCE(aux_sym_parameters_repeat1, 3), REDUCE(aux_sym_call_repeat1, 3), SHIFT(303),
    [967] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_call_repeat1, 2), REDUCE(aux_sym_call_repeat1, 3), SHIFT(76),
    [971] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_call_repeat1, 2), REDUCE(aux_sym_call_repeat1, 3), SHIFT(14),
    [975] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(636),
    [977] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(637),
    [979] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_call_repeat1, 2), REDUCE(aux_sym_call_repeat1, 3), SHIFT(15),
    [983] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(638),
    [985] = {.count = 3, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_call_repeat1, 2), REDUCE(aux_sym_call_repeat1, 3), SHIFT(16),
    [989] = {.count = 5, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_parameters_repeat1, 2), REDUCE(aux_sym_call_repeat1, 2), REDUCE(aux_sym_parameters_repeat1, 3), REDUCE(aux_sym_call_repeat1, 3), SHIFT(639),
    [995] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(474),
    [997] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(522),
    [999] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(617),
    [1001] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(609),
    [1003] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(607),
    [1005] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(600),
    [1007] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(601),
    [1009] = {.count = 5, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_call, 4), REDUCE(sym_call, 5), REDUCE(sym_call, 6), REDUCE(sym_call, 7), REDUCE(sym_call, 8),
    [1015] = {.count = 11, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_parameters, 2), REDUCE(sym_parameters, 3), REDUCE(sym_parameters, 4), REDUCE(sym_call, 4), REDUCE(sym_parameters, 5), REDUCE(sym_call, 5), REDUCE(sym_parameters, 6), REDUCE(sym_call, 6), REDUCE(sym_call, 7), REDUCE(sym_call, 8), SHIFT(567),
    [1027] = {.count = 5, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_call, 4), REDUCE(sym_call, 5), REDUCE(sym_call, 6), REDUCE(sym_call, 7), REDUCE(sym_call, 8),
    [1033] = {.count = 7, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_arguments, 3), REDUCE(sym_arguments, 4), REDUCE(sym_call, 4), REDUCE(sym_call, 5), REDUCE(sym_call, 6), REDUCE(sym_call, 7), REDUCE(sym_call, 8),
    [1041] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(597),
    [1043] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(595),
    [1045] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(594),
    [1047] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_subscript_repeat1, 2), REDUCE(aux_sym_subscript_repeat1, 3), SHIFT(43),
    [1051] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_subscript_repeat1, 2), REDUCE(aux_sym_subscript_repeat1, 3), SHIFT(52),
    [1055] = {.count = 8, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_list, 2), REDUCE(sym_list, 3), REDUCE(sym_subscript, 4), REDUCE(sym_list, 4), REDUCE(sym_subscript, 5), REDUCE(sym_list, 5), REDUCE(sym_subscript, 6), REDUCE(sym_list_comprehension, 7),
    [1064] = {.count = 8, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_list, 2), REDUCE(sym_list, 3), REDUCE(sym_subscript, 4), REDUCE(sym_list, 4), REDUCE(sym_subscript, 5), REDUCE(sym_list, 5), REDUCE(sym_subscript, 6), REDUCE(sym_list_comprehension, 7),
    [1073] = {.count = 9, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_dictionary, 2), REDUCE(sym_dictionary, 3), REDUCE(sym_set, 3), REDUCE(sym_dictionary, 4), REDUCE(sym_set, 4), REDUCE(sym_dictionary, 5), REDUCE(sym_set, 5), REDUCE(sym_dictionary_comprehension, 7), REDUCE(sym_set_comprehension, 7),
    [1083] = {.count = 9, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_dictionary, 2), REDUCE(sym_dictionary, 3), REDUCE(sym_set, 3), REDUCE(sym_dictionary, 4), REDUCE(sym_set, 4), REDUCE(sym_dictionary, 5), REDUCE(sym_set, 5), REDUCE(sym_dictionary_comprehension, 7), REDUCE(sym_set_comprehension, 7),
    [1093] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__expression, 1), REDUCE(sym_list_splat_parameter, 2), SHIFT(577),
    [1097] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__expression, 1), SHIFT(584),
    [1100] = {.count = 5, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_dotted_name, 1), REDUCE(sym__expression, 1), REDUCE(aux_sym_dotted_name_repeat1, 2), REDUCE(aux_sym_dotted_name_repeat1, 3), SHIFT(585),
    [1106] = {.count = 4, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__expression, 1), REDUCE(sym_list_splat_parameter, 2), REDUCE(sym_dictionary_splat_parameter, 3), SHIFT(574),
    [1111] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(462),
    [1113] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_dotted_name_repeat1, 2), REDUCE(aux_sym_dotted_name_repeat1, 3), SHIFT(240),
    [1117] = {.count = 4, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_dotted_name, 1), REDUCE(sym__expression, 1), REDUCE(aux_sym_dotted_name_repeat1, 2), REDUCE(aux_sym_dotted_name_repeat1, 3),
    [1122] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_module, 2), REDUCE(sym__statement, 2), REDUCE(sym__suite, 2),
    [1126] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__statement, 2), REDUCE(sym__suite, 2),
    [1129] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__statement, 2), REDUCE(sym__suite, 2),
    [1132] = {.count = 4, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__statement, 2), REDUCE(sym__suite, 2), REDUCE(sym_decorator, 3), REDUCE(sym_decorator, 4),
    [1137] = {.count = 4, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__statement, 2), REDUCE(sym__suite, 2), REDUCE(sym_decorator, 3), REDUCE(sym_decorator, 4),
    [1142] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__statement, 2), REDUCE(sym__suite, 2),
    [1145] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(513),
    [1147] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__suite, 2), REDUCE(sym__suite, 3),
    [1150] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__suite, 2), REDUCE(sym__suite, 3),
    [1153] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__suite, 2), REDUCE(sym__suite, 3),
    [1156] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_module_repeat1, 1), REDUCE(aux_sym_module_repeat1, 2),
    [1159] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_module_repeat1, 1), REDUCE(aux_sym_module_repeat1, 2),
    [1162] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_module_repeat1, 1), REDUCE(aux_sym_module_repeat1, 2),
    [1165] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(583),
    [1167] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_if_statement_repeat1, 1), REDUCE(aux_sym_if_statement_repeat1, 2),
    [1170] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_if_statement_repeat1, 1), REDUCE(aux_sym_if_statement_repeat1, 2),
    [1173] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_if_statement_repeat1, 1), REDUCE(aux_sym_if_statement_repeat1, 2),
    [1176] = {.count = 5, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_if_statement, 5), REDUCE(sym_while_statement, 5), REDUCE(sym_try_statement, 5), REDUCE(sym_if_statement, 6), REDUCE(sym_for_statement, 7),
    [1182] = {.count = 5, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_if_statement, 5), REDUCE(sym_while_statement, 5), REDUCE(sym_try_statement, 5), REDUCE(sym_if_statement, 6), REDUCE(sym_for_statement, 7),
    [1188] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(457),
    [1190] = {.count = 5, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_if_statement, 5), REDUCE(sym_while_statement, 5), REDUCE(sym_try_statement, 5), REDUCE(sym_if_statement, 6), REDUCE(sym_for_statement, 7),
    [1196] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_try_statement_repeat1, 1), REDUCE(aux_sym_try_statement_repeat1, 2),
    [1199] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_try_statement_repeat1, 1), REDUCE(aux_sym_try_statement_repeat1, 2),
    [1202] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_try_statement_repeat1, 1), REDUCE(aux_sym_try_statement_repeat1, 2),
    [1205] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_try_statement, 4), REDUCE(sym_try_statement, 5), REDUCE(sym_try_statement, 6),
    [1209] = {.count = 3, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_try_statement, 4), REDUCE(sym_try_statement, 5), REDUCE(sym_try_statement, 6),
    [1213] = {.count = 3, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_try_statement, 4), REDUCE(sym_try_statement, 5), REDUCE(sym_try_statement, 6),
    [1217] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_with_statement_repeat1, 2), REDUCE(aux_sym_with_statement_repeat1, 3), SHIFT(321),
    [1221] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_with_statement_repeat1, 2), REDUCE(aux_sym_with_statement_repeat1, 3), SHIFT(581),
    [1225] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__compound_statement, 1), REDUCE(sym_decorated_definition, 2),
    [1228] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__compound_statement, 1), REDUCE(sym_decorated_definition, 2),
    [1231] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__compound_statement, 1), REDUCE(sym_decorated_definition, 2),
    [1234] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(579),
    [1236] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(577),
    [1238] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(574),
    [1240] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(573),
    [1242] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(572),
    [1244] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_decorated_definition_repeat1, 1), REDUCE(aux_sym_decorated_definition_repeat1, 2),
    [1247] = {.count = 13, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_else_clause, 3), REDUCE(sym_finally_clause, 3), REDUCE(sym_if_statement, 4), REDUCE(sym_elif_clause, 4), REDUCE(sym_while_statement, 4), REDUCE(sym_except_clause, 4), REDUCE(sym_with_statement, 4), REDUCE(sym_class_definition, 4), REDUCE(sym_with_statement, 5), REDUCE(sym_function_definition, 5), REDUCE(sym_for_statement, 6), REDUCE(sym_except_clause, 6), REDUCE(sym_class_definition, 7),
    [1261] = {.count = 13, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_else_clause, 3), REDUCE(sym_finally_clause, 3), REDUCE(sym_if_statement, 4), REDUCE(sym_elif_clause, 4), REDUCE(sym_while_statement, 4), REDUCE(sym_except_clause, 4), REDUCE(sym_with_statement, 4), REDUCE(sym_class_definition, 4), REDUCE(sym_with_statement, 5), REDUCE(sym_function_definition, 5), REDUCE(sym_for_statement, 6), REDUCE(sym_except_clause, 6), REDUCE(sym_class_definition, 7),
    [1275] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_elif_clause, 4), SHIFT(449),
    [1278] = {.count = 4, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_elif_clause, 4), REDUCE(sym_except_clause, 4), REDUCE(sym_except_clause, 6), SHIFT(450),
    [1283] = {.count = 3, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_except_clause, 4), REDUCE(sym_except_clause, 6), SHIFT(455),
    [1287] = {.count = 4, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_else_clause, 3), REDUCE(sym_except_clause, 4), REDUCE(sym_except_clause, 6), SHIFT(457),
    [1292] = {.count = 13, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_else_clause, 3), REDUCE(sym_finally_clause, 3), REDUCE(sym_if_statement, 4), REDUCE(sym_elif_clause, 4), REDUCE(sym_while_statement, 4), REDUCE(sym_except_clause, 4), REDUCE(sym_with_statement, 4), REDUCE(sym_class_definition, 4), REDUCE(sym_with_statement, 5), REDUCE(sym_function_definition, 5), REDUCE(sym_for_statement, 6), REDUCE(sym_except_clause, 6), REDUCE(sym_class_definition, 7),
    [1306] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(535),
    [1308] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(452),
    [1310] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(566),
    [1312] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_return_statement, 2), REDUCE(sym_delete_statement, 2),
    [1315] = {.count = 14, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_with_item, 1), REDUCE(sym_list_splat_argument, 2), REDUCE(aux_sym_print_statement_repeat1, 2), REDUCE(aux_sym_subscript_repeat1, 2), REDUCE(aux_sym_call_repeat2, 2), REDUCE(sym_with_item, 3), REDUCE(sym_default_parameter, 3), REDUCE_FRAGILE(sym_binary_operator, 3), REDUCE(sym_keyword_argument, 3), REDUCE(sym_pair, 3), REDUCE(aux_sym_print_statement_repeat1, 3), REDUCE(aux_sym_subscript_repeat1, 3), REDUCE(aux_sym_call_repeat2, 3), SHIFT(544),
    [1330] = {.count = 7, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_with_item, 1), REDUCE(sym_expression_list, 1), REDUCE(aux_sym_print_statement_repeat1, 2), REDUCE(sym_with_item, 3), REDUCE_FRAGILE(sym_binary_operator, 3), REDUCE(aux_sym_print_statement_repeat1, 3), SHIFT(545),
    [1338] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE_FRAGILE(sym_binary_operator, 3), REDUCE(sym_pair, 3), SHIFT(546),
    [1342] = {.count = 4, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_expression_list, 1), REDUCE(aux_sym_print_statement_repeat1, 2), REDUCE_FRAGILE(sym_binary_operator, 3), REDUCE(aux_sym_print_statement_repeat1, 3),
    [1347] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE_FRAGILE(sym_binary_operator, 3), SHIFT(456),
    [1350] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE_FRAGILE(sym_binary_operator, 3), SHIFT(30),
    [1353] = {.count = 11, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_expression_list, 1), REDUCE(sym_list_splat_argument, 2), REDUCE(sym_dictionary_splat_argument, 2), REDUCE(aux_sym_print_statement_repeat1, 2), REDUCE(aux_sym_call_repeat2, 2), REDUCE(sym_default_parameter, 3), REDUCE_FRAGILE(sym_binary_operator, 3), REDUCE(sym_keyword_argument, 3), REDUCE(aux_sym_print_statement_repeat1, 3), REDUCE(aux_sym_call_repeat2, 3), SHIFT(547),
    [1365] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE_FRAGILE(sym_binary_operator, 3), SHIFT(466),
    [1368] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE_FRAGILE(sym_binary_operator, 3), SHIFT(466),
    [1371] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE_FRAGILE(sym_binary_operator, 3), SHIFT(37),
    [1374] = {.count = 6, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_print_statement_repeat1, 2), REDUCE(aux_sym_subscript_repeat1, 2), REDUCE_FRAGILE(sym_binary_operator, 3), REDUCE(aux_sym_print_statement_repeat1, 3), REDUCE(aux_sym_subscript_repeat1, 3), SHIFT(548),
    [1381] = {.count = 5, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_print_statement_repeat1, 2), REDUCE_FRAGILE(sym_binary_operator, 3), REDUCE(sym_pair, 3), REDUCE(aux_sym_print_statement_repeat1, 3), SHIFT(549),
    [1387] = {.count = 6, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_expression_statement, 1), REDUCE(sym_expression_list, 1), REDUCE(sym_print_statement, 2), REDUCE(aux_sym_print_statement_repeat1, 2), REDUCE_FRAGILE(sym_binary_operator, 3), REDUCE(aux_sym_print_statement_repeat1, 3),
    [1394] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_call_repeat2, 2), REDUCE(aux_sym_call_repeat2, 3), SHIFT(543),
    [1398] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_call_repeat2, 2), REDUCE(aux_sym_call_repeat2, 3), SHIFT(540),
    [1402] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(539),
    [1404] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(540),
    [1406] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(538),
    [1408] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_dictionary_repeat1, 2), REDUCE(aux_sym_dictionary_repeat1, 3), SHIFT(195),
    [1412] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_dictionary_repeat1, 2), REDUCE(aux_sym_dictionary_repeat1, 3), SHIFT(197),
    [1416] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(447),
    [1418] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(528),
    [1420] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(453),
    [1422] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(454),
    [1424] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(458),
    [1426] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(459),
    [1428] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(464),
    [1430] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(515),
    [1432] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(524),
    [1434] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_expression_list, 2), SHIFT(239),
    [1437] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_expression_list, 2), REDUCE(sym_print_statement, 3),
    [1440] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(449),
    [1442] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(450),
    [1444] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(455),
    [1446] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(510),
    [1448] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(459),
    [1450] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(464),
    [1452] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(505),
    [1454] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(506),
    [1456] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_call, 5), REDUCE(sym_call, 6),
    [1459] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_call, 5), REDUCE(sym_call, 6),
    [1462] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(508),
    [1464] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_call, 7), REDUCE(sym_call, 8),
    [1467] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_call, 7), REDUCE(sym_call, 8),
    [1470] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(526),
    [1472] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(526),
    [1474] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE_FRAGILE(sym_binary_operator, 3), SHIFT(526),
    [1477] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE_FRAGILE(sym_binary_operator, 3), SHIFT(526),
    [1480] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(531),
    [1482] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(533),
    [1484] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_call, 4), REDUCE(sym_call, 5),
    [1487] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_call, 4), REDUCE(sym_call, 5),
    [1490] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(542),
    [1492] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_call, 6), REDUCE(sym_call, 7),
    [1495] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_call, 6), REDUCE(sym_call, 7),
    [1498] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_call_repeat1, 2), REDUCE(aux_sym_call_repeat1, 3),
    [1501] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_call_repeat1, 2), REDUCE(aux_sym_call_repeat1, 3),
    [1504] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(562),
    [1506] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_arguments, 3), REDUCE(sym_call, 4), REDUCE(sym_call, 5),
    [1510] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_list, 3), REDUCE(sym_subscript, 4), REDUCE(sym_list_comprehension, 7),
    [1514] = {.count = 3, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_list, 3), REDUCE(sym_subscript, 4), REDUCE(sym_list_comprehension, 7),
    [1518] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_set, 3), REDUCE(sym_dictionary_comprehension, 7), REDUCE(sym_set_comprehension, 7),
    [1522] = {.count = 3, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_set, 3), REDUCE(sym_dictionary_comprehension, 7), REDUCE(sym_set_comprehension, 7),
    [1526] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(552),
    [1528] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(554),
    [1530] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(554),
    [1532] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE_FRAGILE(sym_binary_operator, 3), SHIFT(44),
    [1535] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE_FRAGILE(sym_binary_operator, 3), SHIFT(554),
    [1538] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE_FRAGILE(sym_binary_operator, 3), SHIFT(554),
    [1541] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE_FRAGILE(sym_binary_operator, 3), SHIFT(51),
    [1544] = {.count = 5, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_if_statement, 4), REDUCE(sym_elif_clause, 4), REDUCE(sym_while_statement, 4), REDUCE(sym_except_clause, 4), REDUCE(sym_except_clause, 6),
    [1550] = {.count = 5, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_if_statement, 4), REDUCE(sym_elif_clause, 4), REDUCE(sym_while_statement, 4), REDUCE(sym_except_clause, 4), REDUCE(sym_except_clause, 6),
    [1556] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_except_clause, 4), REDUCE(sym_except_clause, 6),
    [1559] = {.count = 5, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_if_statement, 4), REDUCE(sym_elif_clause, 4), REDUCE(sym_while_statement, 4), REDUCE(sym_except_clause, 4), REDUCE(sym_except_clause, 6),
    [1565] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(558),
    [1567] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(558),
    [1569] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE_FRAGILE(sym_binary_operator, 3), SHIFT(558),
    [1572] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE_FRAGILE(sym_binary_operator, 3), SHIFT(558),
    [1575] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_if_statement, 5), REDUCE(sym_while_statement, 5),
    [1578] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_if_statement, 5), REDUCE(sym_while_statement, 5),
    [1581] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_if_statement, 5), REDUCE(sym_while_statement, 5),
    [1584] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_list, 4), REDUCE(sym_subscript, 5),
    [1587] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_list, 4), REDUCE(sym_subscript, 5),
    [1590] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_print_statement_repeat1, 2), REDUCE(aux_sym_subscript_repeat1, 2),
    [1593] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_print_statement_repeat1, 2), SHIFT(564),
    [1596] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(567),
    [1598] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_if_statement, 5), REDUCE(sym_while_statement, 5), REDUCE(sym_for_statement, 7),
    [1602] = {.count = 3, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_if_statement, 5), REDUCE(sym_while_statement, 5), REDUCE(sym_for_statement, 7),
    [1606] = {.count = 3, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_if_statement, 5), REDUCE(sym_while_statement, 5), REDUCE(sym_for_statement, 7),
    [1610] = {.count = 4, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_parameters, 3), REDUCE(sym_parameters, 4), REDUCE(sym_parameters, 5), REDUCE(sym_parameters, 6),
    [1615] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_parameters, 3), REDUCE(sym_parameters, 4),
    [1618] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(576),
    [1620] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_parameters, 5), REDUCE(sym_parameters, 6),
    [1623] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(578),
    [1625] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_parameters_repeat1, 2), REDUCE(aux_sym_parameters_repeat1, 3),
    [1628] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_parameters_repeat1, 2), REDUCE(aux_sym_parameters_repeat1, 3),
    [1631] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_parameters, 4), REDUCE(sym_parameters, 5),
    [1634] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(586),
    [1636] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__expression, 1), SHIFT(315),
    [1639] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__expression, 1), SHIFT(312),
    [1642] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(590),
    [1644] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(591),
    [1646] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_list, 3), REDUCE(sym_subscript, 4),
    [1649] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_list, 3), REDUCE(sym_subscript, 4),
    [1652] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_dictionary_splat_argument, 2), REDUCE_FRAGILE(sym_binary_operator, 3),
    [1655] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_dotted_name_repeat1, 2), REDUCE(aux_sym_dotted_name_repeat1, 3),
    [1658] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(584),
    [1660] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(596),
    [1662] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__expression, 1), REDUCE(sym_list_splat_parameter, 2),
    [1665] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__expression, 1), REDUCE(sym_list_splat_parameter, 2), REDUCE(sym_dictionary_splat_parameter, 3),
    [1669] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_list_splat_argument, 2), REDUCE_FRAGILE(sym_binary_operator, 3),
    [1672] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_default_parameter, 3), REDUCE(sym_keyword_argument, 3),
    [1675] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(606),
    [1677] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(603),
    [1679] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_expression_list, 1), SHIFT(604),
    [1682] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_call_repeat1, 2), SHIFT(38),
    [1685] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_call_repeat1, 2), SHIFT(40),
    [1688] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_call_repeat1, 2), SHIFT(41),
    [1691] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_arguments, 3), REDUCE(sym_call, 4),
    [1694] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(581),
    [1696] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_with_item, 3), SHIFT(564),
    [1699] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(613),
    [1701] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(614),
    [1703] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(564),
    [1705] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(455),
    [1707] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(457),
    [1709] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(620),
    [1711] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(624),
    [1713] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(624),
    [1715] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(625),
    [1717] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_dictionary_comprehension, 7), REDUCE(sym_set_comprehension, 7),
    [1720] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_dictionary_comprehension, 7), REDUCE(sym_set_comprehension, 7),
    [1723] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE_FRAGILE(sym_binary_operator, 3), SHIFT(624),
    [1726] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE_FRAGILE(sym_binary_operator, 3), SHIFT(624),
    [1729] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(629),
    [1731] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(632),
    [1733] = {.count = 4, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_parameters, 4), REDUCE(sym_parameters, 5), REDUCE(sym_call, 5), REDUCE(sym_call, 6),
    [1738] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_subscript_repeat1, 2), REDUCE(aux_sym_subscript_repeat1, 3),
    [1741] = {.count = 4, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_list, 4), REDUCE(sym_subscript, 5), REDUCE(sym_list, 5), REDUCE(sym_subscript, 6),
    [1746] = {.count = 4, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_list, 4), REDUCE(sym_subscript, 5), REDUCE(sym_list, 5), REDUCE(sym_subscript, 6),
    [1751] = {.count = 4, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_dictionary, 4), REDUCE(sym_set, 4), REDUCE(sym_dictionary, 5), REDUCE(sym_set, 5),
    [1756] = {.count = 4, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_dictionary, 4), REDUCE(sym_set, 4), REDUCE(sym_dictionary, 5), REDUCE(sym_set, 5),
    [1761] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_with_statement_repeat1, 2), REDUCE(aux_sym_with_statement_repeat1, 3),
    [1764] = {.count = 7, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_with_item, 1), REDUCE(aux_sym_print_statement_repeat1, 2), REDUCE(aux_sym_subscript_repeat1, 2), REDUCE(aux_sym_call_repeat2, 2), REDUCE(aux_sym_print_statement_repeat1, 3), REDUCE(aux_sym_subscript_repeat1, 3), REDUCE(aux_sym_call_repeat2, 3),
    [1772] = {.count = 4, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_with_item, 1), REDUCE(aux_sym_print_statement_repeat1, 2), REDUCE(aux_sym_print_statement_repeat1, 3), SHIFT(646),
    [1777] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_print_statement_repeat1, 2), REDUCE(aux_sym_print_statement_repeat1, 3),
    [1780] = {.count = 4, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_print_statement_repeat1, 2), REDUCE(aux_sym_call_repeat2, 2), REDUCE(aux_sym_print_statement_repeat1, 3), REDUCE(aux_sym_call_repeat2, 3),
    [1785] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(647),
    [1787] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(647),
    [1789] = {.count = 4, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_print_statement_repeat1, 2), REDUCE(aux_sym_subscript_repeat1, 2), REDUCE(aux_sym_print_statement_repeat1, 3), REDUCE(aux_sym_subscript_repeat1, 3),
    [1794] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_call_repeat2, 2), REDUCE(aux_sym_call_repeat2, 3),
    [1797] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(645),
    [1799] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_dictionary_repeat1, 2), REDUCE(aux_sym_dictionary_repeat1, 3),
    [1802] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_call, 6), REDUCE(sym_call, 7), REDUCE(sym_call, 8),
    [1806] = {.count = 3, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_call, 6), REDUCE(sym_call, 7), REDUCE(sym_call, 8),
    [1810] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE_FRAGILE(sym_binary_operator, 3), SHIFT(647),
    [1813] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE_FRAGILE(sym_binary_operator, 3), SHIFT(647),
    [1816] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(650),
    [1818] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(650),
    [1820] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE_FRAGILE(sym_binary_operator, 3), SHIFT(650),
    [1823] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE_FRAGILE(sym_binary_operator, 3), SHIFT(650),
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
