#include <tree_sitter/parser.h>

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"

#define STATE_COUNT 652
#define SYMBOL_COUNT 105
#define TOKEN_COUNT 49
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
    anon_sym_LBRACK = 38,
    anon_sym_DOT_DOT_DOT = 39,
    anon_sym_RBRACK = 40,
    anon_sym_LBRACE = 41,
    anon_sym_RBRACE = 42,
    sym_number = 43,
    sym_identifier = 44,
    sym_comment = 45,
    sym__newline = 46,
    sym__indent = 47,
    sym__dedent = 48,
    sym_module = 49,
    sym__statement = 50,
    sym__simple_statement = 51,
    sym_print_statement = 52,
    sym_expression_statement = 53,
    sym_return_statement = 54,
    sym_delete_statement = 55,
    sym__compound_statement = 56,
    sym_if_statement = 57,
    sym_elif_clause = 58,
    sym_else_clause = 59,
    sym_for_statement = 60,
    sym_while_statement = 61,
    sym_try_statement = 62,
    sym_except_clause = 63,
    sym_finally_clause = 64,
    sym_with_statement = 65,
    sym_with_item = 66,
    sym_function_definition = 67,
    sym_parameters = 68,
    sym_default_parameter = 69,
    sym_list_splat_parameter = 70,
    sym_dictionary_splat_parameter = 71,
    sym_class_definition = 72,
    sym_decorated_definition = 73,
    sym_decorator = 74,
    sym__suite = 75,
    sym_arguments = 76,
    sym_expression_list = 77,
    sym_dotted_name = 78,
    sym__expression = 79,
    sym_binary_operator = 80,
    sym_subscript = 81,
    sym_call = 82,
    sym_keyword_argument = 83,
    sym_list_splat_argument = 84,
    sym_dictionary_splat_argument = 85,
    sym_list = 86,
    sym_list_comprehension = 87,
    sym_dictionary = 88,
    sym_dictionary_comprehension = 89,
    sym_pair = 90,
    sym_set = 91,
    sym_set_comprehension = 92,
    aux_sym_module_repeat1 = 93,
    aux_sym_print_statement_repeat1 = 94,
    aux_sym_if_statement_repeat1 = 95,
    aux_sym_try_statement_repeat1 = 96,
    aux_sym_with_statement_repeat1 = 97,
    aux_sym_parameters_repeat1 = 98,
    aux_sym_decorated_definition_repeat1 = 99,
    aux_sym_dotted_name_repeat1 = 100,
    aux_sym_subscript_repeat1 = 101,
    aux_sym_call_repeat1 = 102,
    aux_sym_call_repeat2 = 103,
    aux_sym_dictionary_repeat1 = 104,
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
                ('j' <= lookahead && lookahead <= 'o') ||
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
                ADVANCE(32);
            if (lookahead == 'c')
                ADVANCE(37);
            if (lookahead == 'd')
                ADVANCE(49);
            if (lookahead == 'e')
                ADVANCE(53);
            if (lookahead == 'f')
                ADVANCE(64);
            if (lookahead == 'i')
                ADVANCE(73);
            if (lookahead == 'p')
                ADVANCE(76);
            if (lookahead == 'r')
                ADVANCE(84);
            if (lookahead == 't')
                ADVANCE(90);
            if (lookahead == 'w')
                ADVANCE(93);
            if (lookahead == '{')
                ADVANCE(101);
            if (lookahead == '|')
                ADVANCE(102);
            if (lookahead == '}')
                ADVANCE(103);
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
                ('a' <= lookahead && lookahead <= 'r') ||
                ('t' <= lookahead && lookahead <= 'z'))
                ADVANCE(26);
            if (lookahead == 's')
                ADVANCE(31);
            ACCEPT_TOKEN(sym_identifier);
        case 31:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(26);
            ACCEPT_TOKEN(anon_sym_as);
        case 32:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'q') ||
                ('s' <= lookahead && lookahead <= 'z'))
                ADVANCE(26);
            if (lookahead == 'r')
                ADVANCE(33);
            ACCEPT_TOKEN(sym_identifier);
        case 33:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'z'))
                ADVANCE(26);
            if (lookahead == 'e')
                ADVANCE(34);
            ACCEPT_TOKEN(sym_identifier);
        case 34:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(26);
            if (lookahead == 'a')
                ADVANCE(35);
            ACCEPT_TOKEN(sym_identifier);
        case 35:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'j') ||
                ('l' <= lookahead && lookahead <= 'z'))
                ADVANCE(26);
            if (lookahead == 'k')
                ADVANCE(36);
            ACCEPT_TOKEN(sym_identifier);
        case 36:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(26);
            ACCEPT_TOKEN(sym_break_statement);
        case 37:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'k') ||
                (lookahead == 'm') ||
                (lookahead == 'n') ||
                ('p' <= lookahead && lookahead <= 'z'))
                ADVANCE(26);
            if (lookahead == 'l')
                ADVANCE(38);
            if (lookahead == 'o')
                ADVANCE(42);
            ACCEPT_TOKEN(sym_identifier);
        case 38:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(26);
            if (lookahead == 'a')
                ADVANCE(39);
            ACCEPT_TOKEN(sym_identifier);
        case 39:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'r') ||
                ('t' <= lookahead && lookahead <= 'z'))
                ADVANCE(26);
            if (lookahead == 's')
                ADVANCE(40);
            ACCEPT_TOKEN(sym_identifier);
        case 40:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'r') ||
                ('t' <= lookahead && lookahead <= 'z'))
                ADVANCE(26);
            if (lookahead == 's')
                ADVANCE(41);
            ACCEPT_TOKEN(sym_identifier);
        case 41:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(26);
            ACCEPT_TOKEN(anon_sym_class);
        case 42:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'm') ||
                ('o' <= lookahead && lookahead <= 'z'))
                ADVANCE(26);
            if (lookahead == 'n')
                ADVANCE(43);
            ACCEPT_TOKEN(sym_identifier);
        case 43:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 's') ||
                ('u' <= lookahead && lookahead <= 'z'))
                ADVANCE(26);
            if (lookahead == 't')
                ADVANCE(44);
            ACCEPT_TOKEN(sym_identifier);
        case 44:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'h') ||
                ('j' <= lookahead && lookahead <= 'z'))
                ADVANCE(26);
            if (lookahead == 'i')
                ADVANCE(45);
            ACCEPT_TOKEN(sym_identifier);
        case 45:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'm') ||
                ('o' <= lookahead && lookahead <= 'z'))
                ADVANCE(26);
            if (lookahead == 'n')
                ADVANCE(46);
            ACCEPT_TOKEN(sym_identifier);
        case 46:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 't') ||
                ('v' <= lookahead && lookahead <= 'z'))
                ADVANCE(26);
            if (lookahead == 'u')
                ADVANCE(47);
            ACCEPT_TOKEN(sym_identifier);
        case 47:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'z'))
                ADVANCE(26);
            if (lookahead == 'e')
                ADVANCE(48);
            ACCEPT_TOKEN(sym_identifier);
        case 48:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(26);
            ACCEPT_TOKEN(sym_continue_statement);
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
                ('a' <= lookahead && lookahead <= 'e') ||
                ('g' <= lookahead && lookahead <= 'k') ||
                ('m' <= lookahead && lookahead <= 'z'))
                ADVANCE(26);
            if (lookahead == 'f')
                ADVANCE(51);
            if (lookahead == 'l')
                ADVANCE(52);
            ACCEPT_TOKEN(sym_identifier);
        case 51:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(26);
            ACCEPT_TOKEN(anon_sym_def);
        case 52:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(26);
            ACCEPT_TOKEN(anon_sym_del);
        case 53:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'k') ||
                ('m' <= lookahead && lookahead <= 'w') ||
                (lookahead == 'y') ||
                (lookahead == 'z'))
                ADVANCE(26);
            if (lookahead == 'l')
                ADVANCE(54);
            if (lookahead == 'x')
                ADVANCE(59);
            ACCEPT_TOKEN(sym_identifier);
        case 54:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'h') ||
                ('j' <= lookahead && lookahead <= 'r') ||
                ('t' <= lookahead && lookahead <= 'z'))
                ADVANCE(26);
            if (lookahead == 'i')
                ADVANCE(55);
            if (lookahead == 's')
                ADVANCE(57);
            ACCEPT_TOKEN(sym_identifier);
        case 55:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'e') ||
                ('g' <= lookahead && lookahead <= 'z'))
                ADVANCE(26);
            if (lookahead == 'f')
                ADVANCE(56);
            ACCEPT_TOKEN(sym_identifier);
        case 56:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(26);
            ACCEPT_TOKEN(anon_sym_elif);
        case 57:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'z'))
                ADVANCE(26);
            if (lookahead == 'e')
                ADVANCE(58);
            ACCEPT_TOKEN(sym_identifier);
        case 58:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(26);
            ACCEPT_TOKEN(anon_sym_else);
        case 59:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                (lookahead == 'a') ||
                (lookahead == 'b') ||
                ('d' <= lookahead && lookahead <= 'z'))
                ADVANCE(26);
            if (lookahead == 'c')
                ADVANCE(60);
            ACCEPT_TOKEN(sym_identifier);
        case 60:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'z'))
                ADVANCE(26);
            if (lookahead == 'e')
                ADVANCE(61);
            ACCEPT_TOKEN(sym_identifier);
        case 61:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'o') ||
                ('q' <= lookahead && lookahead <= 'z'))
                ADVANCE(26);
            if (lookahead == 'p')
                ADVANCE(62);
            ACCEPT_TOKEN(sym_identifier);
        case 62:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 's') ||
                ('u' <= lookahead && lookahead <= 'z'))
                ADVANCE(26);
            if (lookahead == 't')
                ADVANCE(63);
            ACCEPT_TOKEN(sym_identifier);
        case 63:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(26);
            ACCEPT_TOKEN(anon_sym_except);
        case 64:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'h') ||
                ('j' <= lookahead && lookahead <= 'n') ||
                ('p' <= lookahead && lookahead <= 'z'))
                ADVANCE(26);
            if (lookahead == 'i')
                ADVANCE(65);
            if (lookahead == 'o')
                ADVANCE(71);
            ACCEPT_TOKEN(sym_identifier);
        case 65:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'm') ||
                ('o' <= lookahead && lookahead <= 'z'))
                ADVANCE(26);
            if (lookahead == 'n')
                ADVANCE(66);
            ACCEPT_TOKEN(sym_identifier);
        case 66:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(26);
            if (lookahead == 'a')
                ADVANCE(67);
            ACCEPT_TOKEN(sym_identifier);
        case 67:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'k') ||
                ('m' <= lookahead && lookahead <= 'z'))
                ADVANCE(26);
            if (lookahead == 'l')
                ADVANCE(68);
            ACCEPT_TOKEN(sym_identifier);
        case 68:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'k') ||
                ('m' <= lookahead && lookahead <= 'z'))
                ADVANCE(26);
            if (lookahead == 'l')
                ADVANCE(69);
            ACCEPT_TOKEN(sym_identifier);
        case 69:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'x') ||
                (lookahead == 'z'))
                ADVANCE(26);
            if (lookahead == 'y')
                ADVANCE(70);
            ACCEPT_TOKEN(sym_identifier);
        case 70:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(26);
            ACCEPT_TOKEN(anon_sym_finally);
        case 71:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'q') ||
                ('s' <= lookahead && lookahead <= 'z'))
                ADVANCE(26);
            if (lookahead == 'r')
                ADVANCE(72);
            ACCEPT_TOKEN(sym_identifier);
        case 72:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(26);
            ACCEPT_TOKEN(anon_sym_for);
        case 73:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'e') ||
                ('g' <= lookahead && lookahead <= 'm') ||
                ('o' <= lookahead && lookahead <= 'z'))
                ADVANCE(26);
            if (lookahead == 'f')
                ADVANCE(74);
            if (lookahead == 'n')
                ADVANCE(75);
            ACCEPT_TOKEN(sym_identifier);
        case 74:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(26);
            ACCEPT_TOKEN(anon_sym_if);
        case 75:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(26);
            ACCEPT_TOKEN(anon_sym_in);
        case 76:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('b' <= lookahead && lookahead <= 'q') ||
                ('s' <= lookahead && lookahead <= 'z'))
                ADVANCE(26);
            if (lookahead == 'a')
                ADVANCE(77);
            if (lookahead == 'r')
                ADVANCE(80);
            ACCEPT_TOKEN(sym_identifier);
        case 77:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'r') ||
                ('t' <= lookahead && lookahead <= 'z'))
                ADVANCE(26);
            if (lookahead == 's')
                ADVANCE(78);
            ACCEPT_TOKEN(sym_identifier);
        case 78:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'r') ||
                ('t' <= lookahead && lookahead <= 'z'))
                ADVANCE(26);
            if (lookahead == 's')
                ADVANCE(79);
            ACCEPT_TOKEN(sym_identifier);
        case 79:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(26);
            ACCEPT_TOKEN(sym_pass_statement);
        case 80:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'h') ||
                ('j' <= lookahead && lookahead <= 'z'))
                ADVANCE(26);
            if (lookahead == 'i')
                ADVANCE(81);
            ACCEPT_TOKEN(sym_identifier);
        case 81:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'm') ||
                ('o' <= lookahead && lookahead <= 'z'))
                ADVANCE(26);
            if (lookahead == 'n')
                ADVANCE(82);
            ACCEPT_TOKEN(sym_identifier);
        case 82:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 's') ||
                ('u' <= lookahead && lookahead <= 'z'))
                ADVANCE(26);
            if (lookahead == 't')
                ADVANCE(83);
            ACCEPT_TOKEN(sym_identifier);
        case 83:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(26);
            ACCEPT_TOKEN(anon_sym_print);
        case 84:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'z'))
                ADVANCE(26);
            if (lookahead == 'e')
                ADVANCE(85);
            ACCEPT_TOKEN(sym_identifier);
        case 85:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 's') ||
                ('u' <= lookahead && lookahead <= 'z'))
                ADVANCE(26);
            if (lookahead == 't')
                ADVANCE(86);
            ACCEPT_TOKEN(sym_identifier);
        case 86:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 't') ||
                ('v' <= lookahead && lookahead <= 'z'))
                ADVANCE(26);
            if (lookahead == 'u')
                ADVANCE(87);
            ACCEPT_TOKEN(sym_identifier);
        case 87:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'q') ||
                ('s' <= lookahead && lookahead <= 'z'))
                ADVANCE(26);
            if (lookahead == 'r')
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
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(26);
            ACCEPT_TOKEN(anon_sym_return);
        case 90:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'q') ||
                ('s' <= lookahead && lookahead <= 'z'))
                ADVANCE(26);
            if (lookahead == 'r')
                ADVANCE(91);
            ACCEPT_TOKEN(sym_identifier);
        case 91:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'x') ||
                (lookahead == 'z'))
                ADVANCE(26);
            if (lookahead == 'y')
                ADVANCE(92);
            ACCEPT_TOKEN(sym_identifier);
        case 92:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(26);
            ACCEPT_TOKEN(anon_sym_try);
        case 93:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'g') ||
                ('j' <= lookahead && lookahead <= 'z'))
                ADVANCE(26);
            if (lookahead == 'h')
                ADVANCE(94);
            if (lookahead == 'i')
                ADVANCE(98);
            ACCEPT_TOKEN(sym_identifier);
        case 94:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'h') ||
                ('j' <= lookahead && lookahead <= 'z'))
                ADVANCE(26);
            if (lookahead == 'i')
                ADVANCE(95);
            ACCEPT_TOKEN(sym_identifier);
        case 95:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'k') ||
                ('m' <= lookahead && lookahead <= 'z'))
                ADVANCE(26);
            if (lookahead == 'l')
                ADVANCE(96);
            ACCEPT_TOKEN(sym_identifier);
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
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(26);
            ACCEPT_TOKEN(anon_sym_while);
        case 98:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 's') ||
                ('u' <= lookahead && lookahead <= 'z'))
                ADVANCE(26);
            if (lookahead == 't')
                ADVANCE(99);
            ACCEPT_TOKEN(sym_identifier);
        case 99:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'g') ||
                ('i' <= lookahead && lookahead <= 'z'))
                ADVANCE(26);
            if (lookahead == 'h')
                ADVANCE(100);
            ACCEPT_TOKEN(sym_identifier);
        case 100:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(26);
            ACCEPT_TOKEN(anon_sym_with);
        case 101:
            ACCEPT_TOKEN(anon_sym_LBRACE);
        case 102:
            ACCEPT_TOKEN(anon_sym_PIPE);
        case 103:
            ACCEPT_TOKEN(anon_sym_RBRACE);
        case 104:
            if (lookahead == 0)
                ADVANCE(1);
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(104);
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
                ADVANCE(32);
            if (lookahead == 'c')
                ADVANCE(37);
            if (lookahead == 'd')
                ADVANCE(49);
            if (lookahead == 'f')
                ADVANCE(105);
            if (lookahead == 'i')
                ADVANCE(106);
            if (lookahead == 'p')
                ADVANCE(76);
            if (lookahead == 'r')
                ADVANCE(84);
            if (lookahead == 't')
                ADVANCE(90);
            if (lookahead == 'w')
                ADVANCE(93);
            if (lookahead == '{')
                ADVANCE(101);
            LEX_ERROR();
        case 105:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'n') ||
                ('p' <= lookahead && lookahead <= 'z'))
                ADVANCE(26);
            if (lookahead == 'o')
                ADVANCE(71);
            ACCEPT_TOKEN(sym_identifier);
        case 106:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'e') ||
                ('g' <= lookahead && lookahead <= 'z'))
                ADVANCE(26);
            if (lookahead == 'f')
                ADVANCE(74);
            ACCEPT_TOKEN(sym_identifier);
        case 107:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(107);
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
                ADVANCE(101);
            LEX_ERROR();
        case 108:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(108);
            if (lookahead == '#')
                ADVANCE(2);
            LEX_ERROR();
        case 109:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(109);
            if (lookahead == '#')
                ADVANCE(2);
            if (lookahead == ':')
                ADVANCE(18);
            LEX_ERROR();
        case 110:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(110);
            if (lookahead == '#')
                ADVANCE(2);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(26);
            LEX_ERROR();
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
            if (lookahead == ']')
                ADVANCE(28);
            if (lookahead == '{')
                ADVANCE(101);
            LEX_ERROR();
        case 112:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(112);
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
                ADVANCE(101);
            if (lookahead == '}')
                ADVANCE(103);
            LEX_ERROR();
        case 113:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(113);
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
                ADVANCE(114);
            if (lookahead == 'f')
                ADVANCE(116);
            if (lookahead == 'i')
                ADVANCE(119);
            if (lookahead == '|')
                ADVANCE(102);
            if (lookahead == '}')
                ADVANCE(103);
            LEX_ERROR();
        case 114:
            if (lookahead == 's')
                ADVANCE(115);
            LEX_ERROR();
        case 115:
            ACCEPT_TOKEN(anon_sym_as);
        case 116:
            if (lookahead == 'o')
                ADVANCE(117);
            LEX_ERROR();
        case 117:
            if (lookahead == 'r')
                ADVANCE(118);
            LEX_ERROR();
        case 118:
            ACCEPT_TOKEN(anon_sym_for);
        case 119:
            if (lookahead == 'n')
                ADVANCE(120);
            LEX_ERROR();
        case 120:
            ACCEPT_TOKEN(anon_sym_in);
        case 121:
            if (lookahead == 0)
                ADVANCE(1);
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(121);
            if (lookahead == '#')
                ADVANCE(2);
            LEX_ERROR();
        case 122:
            if (lookahead == 0)
                ADVANCE(1);
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(122);
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
                ADVANCE(32);
            if (lookahead == 'c')
                ADVANCE(37);
            if (lookahead == 'd')
                ADVANCE(49);
            if (lookahead == 'f')
                ADVANCE(105);
            if (lookahead == 'i')
                ADVANCE(106);
            if (lookahead == 'p')
                ADVANCE(76);
            if (lookahead == 'r')
                ADVANCE(84);
            if (lookahead == 't')
                ADVANCE(90);
            if (lookahead == 'w')
                ADVANCE(93);
            if (lookahead == '{')
                ADVANCE(101);
            LEX_ERROR();
        case 123:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(123);
            if (lookahead == '#')
                ADVANCE(2);
            if (lookahead == '@')
                ADVANCE(25);
            if (lookahead == 'c')
                ADVANCE(124);
            if (lookahead == 'd')
                ADVANCE(129);
            LEX_ERROR();
        case 124:
            if (lookahead == 'l')
                ADVANCE(125);
            LEX_ERROR();
        case 125:
            if (lookahead == 'a')
                ADVANCE(126);
            LEX_ERROR();
        case 126:
            if (lookahead == 's')
                ADVANCE(127);
            LEX_ERROR();
        case 127:
            if (lookahead == 's')
                ADVANCE(128);
            LEX_ERROR();
        case 128:
            ACCEPT_TOKEN(anon_sym_class);
        case 129:
            if (lookahead == 'e')
                ADVANCE(130);
            LEX_ERROR();
        case 130:
            if (lookahead == 'f')
                ADVANCE(131);
            LEX_ERROR();
        case 131:
            ACCEPT_TOKEN(anon_sym_def);
        case 132:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(132);
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
            if (lookahead == '|')
                ADVANCE(102);
            LEX_ERROR();
        case 133:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(133);
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
                ADVANCE(101);
            LEX_ERROR();
        case 134:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(134);
            if (lookahead == '#')
                ADVANCE(2);
            if (lookahead == '.')
                ADVANCE(135);
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(16);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(26);
            if (lookahead == '[')
                ADVANCE(27);
            if (lookahead == '{')
                ADVANCE(101);
            LEX_ERROR();
        case 135:
            if (lookahead == '.')
                ADVANCE(13);
            LEX_ERROR();
        case 136:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(136);
            if (lookahead == '#')
                ADVANCE(2);
            if (lookahead == ',')
                ADVANCE(10);
            if (lookahead == ']')
                ADVANCE(28);
            LEX_ERROR();
        case 137:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(137);
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
            if (lookahead == '|')
                ADVANCE(102);
            LEX_ERROR();
        case 138:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(138);
            if (lookahead == '#')
                ADVANCE(2);
            if (lookahead == '.')
                ADVANCE(135);
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
                ADVANCE(101);
            LEX_ERROR();
        case 139:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(139);
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
            if (lookahead == '|')
                ADVANCE(102);
            LEX_ERROR();
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
            if (lookahead == '|')
                ADVANCE(102);
            LEX_ERROR();
        case 141:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(141);
            if (lookahead == '#')
                ADVANCE(2);
            if (lookahead == ')')
                ADVANCE(6);
            if (lookahead == ',')
                ADVANCE(10);
            LEX_ERROR();
        case 142:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(142);
            if (lookahead == '#')
                ADVANCE(2);
            if (lookahead == ')')
                ADVANCE(6);
            LEX_ERROR();
        case 143:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(143);
            if (lookahead == '#')
                ADVANCE(2);
            if (lookahead == '*')
                ADVANCE(144);
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(16);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(26);
            if (lookahead == '[')
                ADVANCE(27);
            if (lookahead == '{')
                ADVANCE(101);
            LEX_ERROR();
        case 144:
            if (lookahead == '*')
                ADVANCE(8);
            LEX_ERROR();
        case 145:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(145);
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
                ADVANCE(101);
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
            if (lookahead == 'f')
                ADVANCE(116);
            if (lookahead == '|')
                ADVANCE(102);
            if (lookahead == '}')
                ADVANCE(103);
            LEX_ERROR();
        case 147:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(147);
            if (lookahead == '#')
                ADVANCE(2);
            if (lookahead == ',')
                ADVANCE(10);
            if (lookahead == 'f')
                ADVANCE(116);
            if (lookahead == '}')
                ADVANCE(103);
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
            if (lookahead == '}')
                ADVANCE(103);
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
            if (lookahead == '|')
                ADVANCE(102);
            LEX_ERROR();
        case 150:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(150);
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
            if (lookahead == 'f')
                ADVANCE(116);
            if (lookahead == '|')
                ADVANCE(102);
            if (lookahead == '}')
                ADVANCE(103);
            LEX_ERROR();
        case 151:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(151);
            if (lookahead == '#')
                ADVANCE(2);
            if (lookahead == 'i')
                ADVANCE(119);
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
            if (lookahead == 'i')
                ADVANCE(119);
            if (lookahead == '|')
                ADVANCE(102);
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
            if (lookahead == ':')
                ADVANCE(18);
            if (lookahead == 'i')
                ADVANCE(119);
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
            if (lookahead == 'i')
                ADVANCE(119);
            if (lookahead == '|')
                ADVANCE(102);
            if (lookahead == '}')
                ADVANCE(103);
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
            if (lookahead == '|')
                ADVANCE(102);
            if (lookahead == '}')
                ADVANCE(103);
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
            if (lookahead == 'f')
                ADVANCE(116);
            if (lookahead == '|')
                ADVANCE(102);
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
            if (lookahead == '|')
                ADVANCE(102);
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
            if (lookahead == '|')
                ADVANCE(102);
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
            if (lookahead == '|')
                ADVANCE(102);
            LEX_ERROR();
        case 160:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(160);
            if (lookahead == '#')
                ADVANCE(2);
            if (lookahead == '(')
                ADVANCE(5);
            if (lookahead == '.')
                ADVANCE(161);
            LEX_ERROR();
        case 161:
            ACCEPT_TOKEN(anon_sym_DOT);
        case 162:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(162);
            if (lookahead == '#')
                ADVANCE(2);
            if (lookahead == '(')
                ADVANCE(5);
            LEX_ERROR();
        case 163:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(163);
            if (lookahead == '#')
                ADVANCE(2);
            if (lookahead == '(')
                ADVANCE(5);
            if (lookahead == ':')
                ADVANCE(18);
            LEX_ERROR();
        case 164:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(164);
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
                ADVANCE(32);
            if (lookahead == 'c')
                ADVANCE(165);
            if (lookahead == 'd')
                ADVANCE(166);
            if (lookahead == 'p')
                ADVANCE(76);
            if (lookahead == 'r')
                ADVANCE(84);
            if (lookahead == '{')
                ADVANCE(101);
            LEX_ERROR();
        case 165:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'n') ||
                ('p' <= lookahead && lookahead <= 'z'))
                ADVANCE(26);
            if (lookahead == 'o')
                ADVANCE(42);
            ACCEPT_TOKEN(sym_identifier);
        case 166:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'z'))
                ADVANCE(26);
            if (lookahead == 'e')
                ADVANCE(167);
            ACCEPT_TOKEN(sym_identifier);
        case 167:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'k') ||
                ('m' <= lookahead && lookahead <= 'z'))
                ADVANCE(26);
            if (lookahead == 'l')
                ADVANCE(52);
            ACCEPT_TOKEN(sym_identifier);
        case 168:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(168);
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
                ADVANCE(32);
            if (lookahead == 'c')
                ADVANCE(37);
            if (lookahead == 'd')
                ADVANCE(49);
            if (lookahead == 'f')
                ADVANCE(105);
            if (lookahead == 'i')
                ADVANCE(106);
            if (lookahead == 'p')
                ADVANCE(76);
            if (lookahead == 'r')
                ADVANCE(84);
            if (lookahead == 't')
                ADVANCE(90);
            if (lookahead == 'w')
                ADVANCE(93);
            if (lookahead == '{')
                ADVANCE(101);
            LEX_ERROR();
        case 169:
            if (lookahead == 0)
                ADVANCE(1);
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(169);
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
                ADVANCE(32);
            if (lookahead == 'c')
                ADVANCE(37);
            if (lookahead == 'd')
                ADVANCE(49);
            if (lookahead == 'e')
                ADVANCE(53);
            if (lookahead == 'f')
                ADVANCE(64);
            if (lookahead == 'i')
                ADVANCE(106);
            if (lookahead == 'p')
                ADVANCE(76);
            if (lookahead == 'r')
                ADVANCE(84);
            if (lookahead == 't')
                ADVANCE(90);
            if (lookahead == 'w')
                ADVANCE(93);
            if (lookahead == '{')
                ADVANCE(101);
            LEX_ERROR();
        case 170:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(170);
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
                ADVANCE(32);
            if (lookahead == 'c')
                ADVANCE(37);
            if (lookahead == 'd')
                ADVANCE(49);
            if (lookahead == 'e')
                ADVANCE(53);
            if (lookahead == 'f')
                ADVANCE(64);
            if (lookahead == 'i')
                ADVANCE(106);
            if (lookahead == 'p')
                ADVANCE(76);
            if (lookahead == 'r')
                ADVANCE(84);
            if (lookahead == 't')
                ADVANCE(90);
            if (lookahead == 'w')
                ADVANCE(93);
            if (lookahead == '{')
                ADVANCE(101);
            LEX_ERROR();
        case 171:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(171);
            if (lookahead == '#')
                ADVANCE(2);
            if (lookahead == ')')
                ADVANCE(6);
            if (lookahead == '*')
                ADVANCE(172);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(26);
            LEX_ERROR();
        case 172:
            ACCEPT_TOKEN(anon_sym_STAR);
        case 173:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(173);
            if (lookahead == '#')
                ADVANCE(2);
            if (lookahead == '*')
                ADVANCE(172);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(26);
            LEX_ERROR();
        case 174:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(174);
            if (lookahead == '#')
                ADVANCE(2);
            if (lookahead == ')')
                ADVANCE(6);
            if (lookahead == ',')
                ADVANCE(10);
            if (lookahead == '=')
                ADVANCE(22);
            LEX_ERROR();
        case 175:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(175);
            if (lookahead == '#')
                ADVANCE(2);
            if (lookahead == '*')
                ADVANCE(172);
            LEX_ERROR();
        case 176:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(176);
            if (lookahead == '#')
                ADVANCE(2);
            if (lookahead == ',')
                ADVANCE(10);
            if (lookahead == ':')
                ADVANCE(18);
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
                ADVANCE(114);
            if (lookahead == '|')
                ADVANCE(102);
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
            if (lookahead == '|')
                ADVANCE(102);
            LEX_ERROR();
        case 179:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(179);
            if (lookahead == '#')
                ADVANCE(2);
            if (lookahead == 'e')
                ADVANCE(180);
            if (lookahead == 'f')
                ADVANCE(186);
            LEX_ERROR();
        case 180:
            if (lookahead == 'x')
                ADVANCE(181);
            LEX_ERROR();
        case 181:
            if (lookahead == 'c')
                ADVANCE(182);
            LEX_ERROR();
        case 182:
            if (lookahead == 'e')
                ADVANCE(183);
            LEX_ERROR();
        case 183:
            if (lookahead == 'p')
                ADVANCE(184);
            LEX_ERROR();
        case 184:
            if (lookahead == 't')
                ADVANCE(185);
            LEX_ERROR();
        case 185:
            ACCEPT_TOKEN(anon_sym_except);
        case 186:
            if (lookahead == 'i')
                ADVANCE(187);
            LEX_ERROR();
        case 187:
            if (lookahead == 'n')
                ADVANCE(188);
            LEX_ERROR();
        case 188:
            if (lookahead == 'a')
                ADVANCE(189);
            LEX_ERROR();
        case 189:
            if (lookahead == 'l')
                ADVANCE(190);
            LEX_ERROR();
        case 190:
            if (lookahead == 'l')
                ADVANCE(191);
            LEX_ERROR();
        case 191:
            if (lookahead == 'y')
                ADVANCE(192);
            LEX_ERROR();
        case 192:
            ACCEPT_TOKEN(anon_sym_finally);
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
                ADVANCE(32);
            if (lookahead == 'c')
                ADVANCE(37);
            if (lookahead == 'd')
                ADVANCE(49);
            if (lookahead == 'e')
                ADVANCE(194);
            if (lookahead == 'f')
                ADVANCE(64);
            if (lookahead == 'i')
                ADVANCE(106);
            if (lookahead == 'p')
                ADVANCE(76);
            if (lookahead == 'r')
                ADVANCE(84);
            if (lookahead == 't')
                ADVANCE(90);
            if (lookahead == 'w')
                ADVANCE(93);
            if (lookahead == '{')
                ADVANCE(101);
            LEX_ERROR();
        case 194:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'k') ||
                ('m' <= lookahead && lookahead <= 'w') ||
                (lookahead == 'y') ||
                (lookahead == 'z'))
                ADVANCE(26);
            if (lookahead == 'l')
                ADVANCE(195);
            if (lookahead == 'x')
                ADVANCE(59);
            ACCEPT_TOKEN(sym_identifier);
        case 195:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'r') ||
                ('t' <= lookahead && lookahead <= 'z'))
                ADVANCE(26);
            if (lookahead == 's')
                ADVANCE(57);
            ACCEPT_TOKEN(sym_identifier);
        case 196:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(196);
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
                ADVANCE(32);
            if (lookahead == 'c')
                ADVANCE(37);
            if (lookahead == 'd')
                ADVANCE(49);
            if (lookahead == 'f')
                ADVANCE(64);
            if (lookahead == 'i')
                ADVANCE(106);
            if (lookahead == 'p')
                ADVANCE(76);
            if (lookahead == 'r')
                ADVANCE(84);
            if (lookahead == 't')
                ADVANCE(90);
            if (lookahead == 'w')
                ADVANCE(93);
            if (lookahead == '{')
                ADVANCE(101);
            LEX_ERROR();
        case 197:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(197);
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
                ADVANCE(32);
            if (lookahead == 'c')
                ADVANCE(37);
            if (lookahead == 'd')
                ADVANCE(49);
            if (lookahead == 'e')
                ADVANCE(198);
            if (lookahead == 'f')
                ADVANCE(105);
            if (lookahead == 'i')
                ADVANCE(106);
            if (lookahead == 'p')
                ADVANCE(76);
            if (lookahead == 'r')
                ADVANCE(84);
            if (lookahead == 't')
                ADVANCE(90);
            if (lookahead == 'w')
                ADVANCE(93);
            if (lookahead == '{')
                ADVANCE(101);
            LEX_ERROR();
        case 198:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'k') ||
                ('m' <= lookahead && lookahead <= 'z'))
                ADVANCE(26);
            if (lookahead == 'l')
                ADVANCE(195);
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
                ADVANCE(32);
            if (lookahead == 'c')
                ADVANCE(37);
            if (lookahead == 'd')
                ADVANCE(49);
            if (lookahead == 'e')
                ADVANCE(200);
            if (lookahead == 'f')
                ADVANCE(105);
            if (lookahead == 'i')
                ADVANCE(106);
            if (lookahead == 'p')
                ADVANCE(76);
            if (lookahead == 'r')
                ADVANCE(84);
            if (lookahead == 't')
                ADVANCE(90);
            if (lookahead == 'w')
                ADVANCE(93);
            if (lookahead == '{')
                ADVANCE(101);
            LEX_ERROR();
        case 200:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'k') ||
                ('m' <= lookahead && lookahead <= 'z'))
                ADVANCE(26);
            if (lookahead == 'l')
                ADVANCE(54);
            ACCEPT_TOKEN(sym_identifier);
        case 201:
            if (lookahead == 0)
                ADVANCE(1);
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(201);
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
                ADVANCE(32);
            if (lookahead == 'c')
                ADVANCE(37);
            if (lookahead == 'd')
                ADVANCE(49);
            if (lookahead == 'e')
                ADVANCE(194);
            if (lookahead == 'f')
                ADVANCE(64);
            if (lookahead == 'i')
                ADVANCE(106);
            if (lookahead == 'p')
                ADVANCE(76);
            if (lookahead == 'r')
                ADVANCE(84);
            if (lookahead == 't')
                ADVANCE(90);
            if (lookahead == 'w')
                ADVANCE(93);
            if (lookahead == '{')
                ADVANCE(101);
            LEX_ERROR();
        case 202:
            if (lookahead == 0)
                ADVANCE(1);
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(202);
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
                ADVANCE(32);
            if (lookahead == 'c')
                ADVANCE(37);
            if (lookahead == 'd')
                ADVANCE(49);
            if (lookahead == 'f')
                ADVANCE(64);
            if (lookahead == 'i')
                ADVANCE(106);
            if (lookahead == 'p')
                ADVANCE(76);
            if (lookahead == 'r')
                ADVANCE(84);
            if (lookahead == 't')
                ADVANCE(90);
            if (lookahead == 'w')
                ADVANCE(93);
            if (lookahead == '{')
                ADVANCE(101);
            LEX_ERROR();
        case 203:
            if (lookahead == 0)
                ADVANCE(1);
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(203);
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
                ADVANCE(32);
            if (lookahead == 'c')
                ADVANCE(37);
            if (lookahead == 'd')
                ADVANCE(49);
            if (lookahead == 'e')
                ADVANCE(198);
            if (lookahead == 'f')
                ADVANCE(105);
            if (lookahead == 'i')
                ADVANCE(106);
            if (lookahead == 'p')
                ADVANCE(76);
            if (lookahead == 'r')
                ADVANCE(84);
            if (lookahead == 't')
                ADVANCE(90);
            if (lookahead == 'w')
                ADVANCE(93);
            if (lookahead == '{')
                ADVANCE(101);
            LEX_ERROR();
        case 204:
            if (lookahead == 0)
                ADVANCE(1);
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(204);
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
                ADVANCE(32);
            if (lookahead == 'c')
                ADVANCE(37);
            if (lookahead == 'd')
                ADVANCE(49);
            if (lookahead == 'e')
                ADVANCE(200);
            if (lookahead == 'f')
                ADVANCE(105);
            if (lookahead == 'i')
                ADVANCE(106);
            if (lookahead == 'p')
                ADVANCE(76);
            if (lookahead == 'r')
                ADVANCE(84);
            if (lookahead == 't')
                ADVANCE(90);
            if (lookahead == 'w')
                ADVANCE(93);
            if (lookahead == '{')
                ADVANCE(101);
            LEX_ERROR();
        case 205:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(205);
            if (lookahead == '#')
                ADVANCE(2);
            if (lookahead == ',')
                ADVANCE(10);
            LEX_ERROR();
        case 206:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(206);
            if (lookahead == '#')
                ADVANCE(2);
            if (lookahead == ')')
                ADVANCE(6);
            if (lookahead == '*')
                ADVANCE(7);
            if (lookahead == '.')
                ADVANCE(135);
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
                ADVANCE(101);
            if (lookahead == '}')
                ADVANCE(103);
            LEX_ERROR();
        case 207:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(207);
            if (lookahead == '#')
                ADVANCE(2);
            if (lookahead == '*')
                ADVANCE(172);
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(16);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(26);
            if (lookahead == '[')
                ADVANCE(27);
            if (lookahead == '{')
                ADVANCE(101);
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
                ADVANCE(161);
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
                ADVANCE(114);
            if (lookahead == 'f')
                ADVANCE(116);
            if (lookahead == 'i')
                ADVANCE(119);
            if (lookahead == '|')
                ADVANCE(102);
            if (lookahead == '}')
                ADVANCE(103);
            LEX_ERROR();
        case 209:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(209);
            if (lookahead == '#')
                ADVANCE(2);
            if (lookahead == ')')
                ADVANCE(6);
            if (lookahead == ':')
                ADVANCE(18);
            if (lookahead == 'i')
                ADVANCE(119);
            LEX_ERROR();
        case 210:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(210);
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
                ADVANCE(119);
            if (lookahead == '}')
                ADVANCE(103);
            LEX_ERROR();
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
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(26);
            if (lookahead == '[')
                ADVANCE(27);
            if (lookahead == ']')
                ADVANCE(28);
            if (lookahead == '{')
                ADVANCE(101);
            if (lookahead == '}')
                ADVANCE(103);
            LEX_ERROR();
        case 212:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(212);
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
            if (lookahead == '|')
                ADVANCE(102);
            if (lookahead == '}')
                ADVANCE(103);
            LEX_ERROR();
        case 213:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(213);
            if (lookahead == '#')
                ADVANCE(2);
            if (lookahead == ')')
                ADVANCE(6);
            if (lookahead == '*')
                ADVANCE(172);
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(16);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(26);
            if (lookahead == '[')
                ADVANCE(27);
            if (lookahead == '{')
                ADVANCE(101);
            LEX_ERROR();
        case 214:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(214);
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
            if (lookahead == '|')
                ADVANCE(102);
            if (lookahead == '}')
                ADVANCE(103);
            LEX_ERROR();
        case 215:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(215);
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
                ADVANCE(114);
            if (lookahead == 'i')
                ADVANCE(119);
            if (lookahead == '|')
                ADVANCE(102);
            if (lookahead == '}')
                ADVANCE(103);
            LEX_ERROR();
        case 216:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(216);
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
                ADVANCE(114);
            if (lookahead == 'i')
                ADVANCE(119);
            if (lookahead == '|')
                ADVANCE(102);
            if (lookahead == '}')
                ADVANCE(103);
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
            if (lookahead == '|')
                ADVANCE(102);
            if (lookahead == '}')
                ADVANCE(103);
            LEX_ERROR();
        default:
            LEX_ERROR();
    }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
    [0] = {.lex_state = 0, .external_tokens = 1},
    [1] = {.lex_state = 104},
    [2] = {.lex_state = 107},
    [3] = {.lex_state = 107},
    [4] = {.lex_state = 107},
    [5] = {.lex_state = 108, .external_tokens = 2},
    [6] = {.lex_state = 107},
    [7] = {.lex_state = 107},
    [8] = {.lex_state = 107},
    [9] = {.lex_state = 109},
    [10] = {.lex_state = 107},
    [11] = {.lex_state = 110},
    [12] = {.lex_state = 110},
    [13] = {.lex_state = 110},
    [14] = {.lex_state = 111},
    [15] = {.lex_state = 112},
    [16] = {.lex_state = 113, .external_tokens = 2},
    [17] = {.lex_state = 121},
    [18] = {.lex_state = 122, .external_tokens = 2},
    [19] = {.lex_state = 108, .external_tokens = 2},
    [20] = {.lex_state = 122, .external_tokens = 2},
    [21] = {.lex_state = 122, .external_tokens = 2},
    [22] = {.lex_state = 123},
    [23] = {.lex_state = 132, .external_tokens = 2},
    [24] = {.lex_state = 122, .external_tokens = 2},
    [25] = {.lex_state = 123},
    [26] = {.lex_state = 122, .external_tokens = 2},
    [27] = {.lex_state = 123},
    [28] = {.lex_state = 121},
    [29] = {.lex_state = 122, .external_tokens = 2},
    [30] = {.lex_state = 133},
    [31] = {.lex_state = 107},
    [32] = {.lex_state = 107},
    [33] = {.lex_state = 107},
    [34] = {.lex_state = 107},
    [35] = {.lex_state = 107},
    [36] = {.lex_state = 107},
    [37] = {.lex_state = 134},
    [38] = {.lex_state = 111},
    [39] = {.lex_state = 136},
    [40] = {.lex_state = 112},
    [41] = {.lex_state = 113},
    [42] = {.lex_state = 137},
    [43] = {.lex_state = 138},
    [44] = {.lex_state = 133},
    [45] = {.lex_state = 107},
    [46] = {.lex_state = 107},
    [47] = {.lex_state = 107},
    [48] = {.lex_state = 107},
    [49] = {.lex_state = 107},
    [50] = {.lex_state = 107},
    [51] = {.lex_state = 134},
    [52] = {.lex_state = 113, .external_tokens = 2},
    [53] = {.lex_state = 136},
    [54] = {.lex_state = 138},
    [55] = {.lex_state = 113, .external_tokens = 2},
    [56] = {.lex_state = 136},
    [57] = {.lex_state = 113, .external_tokens = 2},
    [58] = {.lex_state = 137},
    [59] = {.lex_state = 136},
    [60] = {.lex_state = 137},
    [61] = {.lex_state = 138},
    [62] = {.lex_state = 113},
    [63] = {.lex_state = 136},
    [64] = {.lex_state = 138},
    [65] = {.lex_state = 113},
    [66] = {.lex_state = 113},
    [67] = {.lex_state = 136},
    [68] = {.lex_state = 137},
    [69] = {.lex_state = 113},
    [70] = {.lex_state = 113},
    [71] = {.lex_state = 113},
    [72] = {.lex_state = 113},
    [73] = {.lex_state = 113},
    [74] = {.lex_state = 113},
    [75] = {.lex_state = 107},
    [76] = {.lex_state = 107},
    [77] = {.lex_state = 139},
    [78] = {.lex_state = 140},
    [79] = {.lex_state = 141},
    [80] = {.lex_state = 141},
    [81] = {.lex_state = 142},
    [82] = {.lex_state = 133},
    [83] = {.lex_state = 140},
    [84] = {.lex_state = 141},
    [85] = {.lex_state = 141},
    [86] = {.lex_state = 142},
    [87] = {.lex_state = 113},
    [88] = {.lex_state = 143},
    [89] = {.lex_state = 141},
    [90] = {.lex_state = 143},
    [91] = {.lex_state = 113},
    [92] = {.lex_state = 140},
    [93] = {.lex_state = 141},
    [94] = {.lex_state = 142},
    [95] = {.lex_state = 113},
    [96] = {.lex_state = 140},
    [97] = {.lex_state = 141},
    [98] = {.lex_state = 142},
    [99] = {.lex_state = 113},
    [100] = {.lex_state = 145},
    [101] = {.lex_state = 113},
    [102] = {.lex_state = 143},
    [103] = {.lex_state = 141},
    [104] = {.lex_state = 143},
    [105] = {.lex_state = 142},
    [106] = {.lex_state = 145},
    [107] = {.lex_state = 107},
    [108] = {.lex_state = 140},
    [109] = {.lex_state = 113},
    [110] = {.lex_state = 146},
    [111] = {.lex_state = 147},
    [112] = {.lex_state = 112},
    [113] = {.lex_state = 107},
    [114] = {.lex_state = 113},
    [115] = {.lex_state = 148},
    [116] = {.lex_state = 112},
    [117] = {.lex_state = 113},
    [118] = {.lex_state = 113},
    [119] = {.lex_state = 149},
    [120] = {.lex_state = 148},
    [121] = {.lex_state = 107},
    [122] = {.lex_state = 150},
    [123] = {.lex_state = 151},
    [124] = {.lex_state = 152},
    [125] = {.lex_state = 107},
    [126] = {.lex_state = 153},
    [127] = {.lex_state = 107},
    [128] = {.lex_state = 154},
    [129] = {.lex_state = 154},
    [130] = {.lex_state = 107},
    [131] = {.lex_state = 155},
    [132] = {.lex_state = 113},
    [133] = {.lex_state = 148},
    [134] = {.lex_state = 112},
    [135] = {.lex_state = 107},
    [136] = {.lex_state = 113},
    [137] = {.lex_state = 148},
    [138] = {.lex_state = 112},
    [139] = {.lex_state = 113},
    [140] = {.lex_state = 113},
    [141] = {.lex_state = 151},
    [142] = {.lex_state = 107},
    [143] = {.lex_state = 155},
    [144] = {.lex_state = 113},
    [145] = {.lex_state = 113},
    [146] = {.lex_state = 156},
    [147] = {.lex_state = 111},
    [148] = {.lex_state = 107},
    [149] = {.lex_state = 113},
    [150] = {.lex_state = 136},
    [151] = {.lex_state = 111},
    [152] = {.lex_state = 113},
    [153] = {.lex_state = 113},
    [154] = {.lex_state = 151},
    [155] = {.lex_state = 107},
    [156] = {.lex_state = 157},
    [157] = {.lex_state = 113},
    [158] = {.lex_state = 158},
    [159] = {.lex_state = 140},
    [160] = {.lex_state = 159, .external_tokens = 2},
    [161] = {.lex_state = 159, .external_tokens = 2},
    [162] = {.lex_state = 159, .external_tokens = 2},
    [163] = {.lex_state = 159, .external_tokens = 2},
    [164] = {.lex_state = 159, .external_tokens = 2},
    [165] = {.lex_state = 159, .external_tokens = 2},
    [166] = {.lex_state = 140},
    [167] = {.lex_state = 141},
    [168] = {.lex_state = 141},
    [169] = {.lex_state = 142},
    [170] = {.lex_state = 133},
    [171] = {.lex_state = 140},
    [172] = {.lex_state = 141},
    [173] = {.lex_state = 141},
    [174] = {.lex_state = 142},
    [175] = {.lex_state = 113, .external_tokens = 2},
    [176] = {.lex_state = 143},
    [177] = {.lex_state = 141},
    [178] = {.lex_state = 143},
    [179] = {.lex_state = 113, .external_tokens = 2},
    [180] = {.lex_state = 142},
    [181] = {.lex_state = 113, .external_tokens = 2},
    [182] = {.lex_state = 142},
    [183] = {.lex_state = 113, .external_tokens = 2},
    [184] = {.lex_state = 145},
    [185] = {.lex_state = 113, .external_tokens = 2},
    [186] = {.lex_state = 143},
    [187] = {.lex_state = 141},
    [188] = {.lex_state = 143},
    [189] = {.lex_state = 142},
    [190] = {.lex_state = 145},
    [191] = {.lex_state = 122, .external_tokens = 2},
    [192] = {.lex_state = 113, .external_tokens = 2},
    [193] = {.lex_state = 146},
    [194] = {.lex_state = 147},
    [195] = {.lex_state = 112},
    [196] = {.lex_state = 107},
    [197] = {.lex_state = 113, .external_tokens = 2},
    [198] = {.lex_state = 148},
    [199] = {.lex_state = 112},
    [200] = {.lex_state = 113, .external_tokens = 2},
    [201] = {.lex_state = 113, .external_tokens = 2},
    [202] = {.lex_state = 151},
    [203] = {.lex_state = 107},
    [204] = {.lex_state = 155},
    [205] = {.lex_state = 113, .external_tokens = 2},
    [206] = {.lex_state = 112},
    [207] = {.lex_state = 107},
    [208] = {.lex_state = 113, .external_tokens = 2},
    [209] = {.lex_state = 148},
    [210] = {.lex_state = 112},
    [211] = {.lex_state = 113, .external_tokens = 2},
    [212] = {.lex_state = 113, .external_tokens = 2},
    [213] = {.lex_state = 151},
    [214] = {.lex_state = 107},
    [215] = {.lex_state = 155},
    [216] = {.lex_state = 113, .external_tokens = 2},
    [217] = {.lex_state = 113, .external_tokens = 2},
    [218] = {.lex_state = 156},
    [219] = {.lex_state = 111},
    [220] = {.lex_state = 107},
    [221] = {.lex_state = 113, .external_tokens = 2},
    [222] = {.lex_state = 136},
    [223] = {.lex_state = 111},
    [224] = {.lex_state = 113, .external_tokens = 2},
    [225] = {.lex_state = 113, .external_tokens = 2},
    [226] = {.lex_state = 151},
    [227] = {.lex_state = 107},
    [228] = {.lex_state = 157},
    [229] = {.lex_state = 113, .external_tokens = 2},
    [230] = {.lex_state = 160, .external_tokens = 2},
    [231] = {.lex_state = 162, .external_tokens = 2},
    [232] = {.lex_state = 107},
    [233] = {.lex_state = 123},
    [234] = {.lex_state = 108, .external_tokens = 2},
    [235] = {.lex_state = 123},
    [236] = {.lex_state = 140},
    [237] = {.lex_state = 108, .external_tokens = 2},
    [238] = {.lex_state = 141},
    [239] = {.lex_state = 108, .external_tokens = 2},
    [240] = {.lex_state = 110},
    [241] = {.lex_state = 160, .external_tokens = 2},
    [242] = {.lex_state = 110},
    [243] = {.lex_state = 160, .external_tokens = 2},
    [244] = {.lex_state = 160, .external_tokens = 2},
    [245] = {.lex_state = 163},
    [246] = {.lex_state = 164, .external_tokens = 3},
    [247] = {.lex_state = 107},
    [248] = {.lex_state = 142},
    [249] = {.lex_state = 109},
    [250] = {.lex_state = 164, .external_tokens = 3},
    [251] = {.lex_state = 168, .external_tokens = 4},
    [252] = {.lex_state = 108, .external_tokens = 2},
    [253] = {.lex_state = 122, .external_tokens = 2},
    [254] = {.lex_state = 169, .external_tokens = 2},
    [255] = {.lex_state = 107},
    [256] = {.lex_state = 107},
    [257] = {.lex_state = 107},
    [258] = {.lex_state = 109},
    [259] = {.lex_state = 107},
    [260] = {.lex_state = 110},
    [261] = {.lex_state = 110},
    [262] = {.lex_state = 168, .external_tokens = 4},
    [263] = {.lex_state = 108, .external_tokens = 2},
    [264] = {.lex_state = 168, .external_tokens = 4},
    [265] = {.lex_state = 168, .external_tokens = 4},
    [266] = {.lex_state = 168, .external_tokens = 4},
    [267] = {.lex_state = 123},
    [268] = {.lex_state = 168, .external_tokens = 4},
    [269] = {.lex_state = 169, .external_tokens = 2},
    [270] = {.lex_state = 168, .external_tokens = 4},
    [271] = {.lex_state = 168, .external_tokens = 4},
    [272] = {.lex_state = 163},
    [273] = {.lex_state = 164, .external_tokens = 3},
    [274] = {.lex_state = 107},
    [275] = {.lex_state = 142},
    [276] = {.lex_state = 109},
    [277] = {.lex_state = 164, .external_tokens = 3},
    [278] = {.lex_state = 168, .external_tokens = 4},
    [279] = {.lex_state = 108, .external_tokens = 2},
    [280] = {.lex_state = 168, .external_tokens = 4},
    [281] = {.lex_state = 170, .external_tokens = 4},
    [282] = {.lex_state = 168, .external_tokens = 4},
    [283] = {.lex_state = 170, .external_tokens = 4},
    [284] = {.lex_state = 168, .external_tokens = 4},
    [285] = {.lex_state = 162},
    [286] = {.lex_state = 171},
    [287] = {.lex_state = 109},
    [288] = {.lex_state = 164, .external_tokens = 3},
    [289] = {.lex_state = 168, .external_tokens = 4},
    [290] = {.lex_state = 109},
    [291] = {.lex_state = 173},
    [292] = {.lex_state = 174},
    [293] = {.lex_state = 141},
    [294] = {.lex_state = 141},
    [295] = {.lex_state = 142},
    [296] = {.lex_state = 173},
    [297] = {.lex_state = 174},
    [298] = {.lex_state = 141},
    [299] = {.lex_state = 141},
    [300] = {.lex_state = 142},
    [301] = {.lex_state = 109},
    [302] = {.lex_state = 175},
    [303] = {.lex_state = 175},
    [304] = {.lex_state = 142},
    [305] = {.lex_state = 109},
    [306] = {.lex_state = 110},
    [307] = {.lex_state = 142},
    [308] = {.lex_state = 171},
    [309] = {.lex_state = 109},
    [310] = {.lex_state = 107},
    [311] = {.lex_state = 140},
    [312] = {.lex_state = 109},
    [313] = {.lex_state = 175},
    [314] = {.lex_state = 142},
    [315] = {.lex_state = 171},
    [316] = {.lex_state = 141},
    [317] = {.lex_state = 176},
    [318] = {.lex_state = 177},
    [319] = {.lex_state = 107},
    [320] = {.lex_state = 178},
    [321] = {.lex_state = 107},
    [322] = {.lex_state = 164, .external_tokens = 3},
    [323] = {.lex_state = 176},
    [324] = {.lex_state = 107},
    [325] = {.lex_state = 164, .external_tokens = 3},
    [326] = {.lex_state = 168, .external_tokens = 4},
    [327] = {.lex_state = 176},
    [328] = {.lex_state = 168, .external_tokens = 4},
    [329] = {.lex_state = 176},
    [330] = {.lex_state = 164, .external_tokens = 3},
    [331] = {.lex_state = 168, .external_tokens = 4},
    [332] = {.lex_state = 108, .external_tokens = 2},
    [333] = {.lex_state = 179},
    [334] = {.lex_state = 107},
    [335] = {.lex_state = 109},
    [336] = {.lex_state = 193, .external_tokens = 4},
    [337] = {.lex_state = 168, .external_tokens = 4},
    [338] = {.lex_state = 193, .external_tokens = 4},
    [339] = {.lex_state = 109},
    [340] = {.lex_state = 196, .external_tokens = 4},
    [341] = {.lex_state = 193, .external_tokens = 4},
    [342] = {.lex_state = 168, .external_tokens = 4},
    [343] = {.lex_state = 168, .external_tokens = 4},
    [344] = {.lex_state = 164, .external_tokens = 3},
    [345] = {.lex_state = 196, .external_tokens = 4},
    [346] = {.lex_state = 164, .external_tokens = 3},
    [347] = {.lex_state = 168, .external_tokens = 4},
    [348] = {.lex_state = 177},
    [349] = {.lex_state = 107},
    [350] = {.lex_state = 164, .external_tokens = 3},
    [351] = {.lex_state = 149},
    [352] = {.lex_state = 164, .external_tokens = 3},
    [353] = {.lex_state = 193, .external_tokens = 4},
    [354] = {.lex_state = 193, .external_tokens = 4},
    [355] = {.lex_state = 179},
    [356] = {.lex_state = 168, .external_tokens = 4},
    [357] = {.lex_state = 179},
    [358] = {.lex_state = 149},
    [359] = {.lex_state = 164, .external_tokens = 3},
    [360] = {.lex_state = 197, .external_tokens = 4},
    [361] = {.lex_state = 168, .external_tokens = 4},
    [362] = {.lex_state = 151},
    [363] = {.lex_state = 107},
    [364] = {.lex_state = 109},
    [365] = {.lex_state = 164, .external_tokens = 3},
    [366] = {.lex_state = 197, .external_tokens = 4},
    [367] = {.lex_state = 168, .external_tokens = 4},
    [368] = {.lex_state = 149},
    [369] = {.lex_state = 164, .external_tokens = 3},
    [370] = {.lex_state = 199, .external_tokens = 4},
    [371] = {.lex_state = 107},
    [372] = {.lex_state = 199, .external_tokens = 4},
    [373] = {.lex_state = 168, .external_tokens = 4},
    [374] = {.lex_state = 199, .external_tokens = 4},
    [375] = {.lex_state = 199, .external_tokens = 4},
    [376] = {.lex_state = 168, .external_tokens = 4},
    [377] = {.lex_state = 149},
    [378] = {.lex_state = 164, .external_tokens = 3},
    [379] = {.lex_state = 199, .external_tokens = 4},
    [380] = {.lex_state = 122, .external_tokens = 2},
    [381] = {.lex_state = 162},
    [382] = {.lex_state = 109},
    [383] = {.lex_state = 164, .external_tokens = 3},
    [384] = {.lex_state = 122, .external_tokens = 2},
    [385] = {.lex_state = 176},
    [386] = {.lex_state = 164, .external_tokens = 3},
    [387] = {.lex_state = 176},
    [388] = {.lex_state = 164, .external_tokens = 3},
    [389] = {.lex_state = 122, .external_tokens = 2},
    [390] = {.lex_state = 122, .external_tokens = 2},
    [391] = {.lex_state = 164, .external_tokens = 3},
    [392] = {.lex_state = 179},
    [393] = {.lex_state = 107},
    [394] = {.lex_state = 109},
    [395] = {.lex_state = 201, .external_tokens = 2},
    [396] = {.lex_state = 122, .external_tokens = 2},
    [397] = {.lex_state = 201, .external_tokens = 2},
    [398] = {.lex_state = 109},
    [399] = {.lex_state = 202, .external_tokens = 2},
    [400] = {.lex_state = 201, .external_tokens = 2},
    [401] = {.lex_state = 122, .external_tokens = 2},
    [402] = {.lex_state = 122, .external_tokens = 2},
    [403] = {.lex_state = 164, .external_tokens = 3},
    [404] = {.lex_state = 202, .external_tokens = 2},
    [405] = {.lex_state = 164, .external_tokens = 3},
    [406] = {.lex_state = 122, .external_tokens = 2},
    [407] = {.lex_state = 177},
    [408] = {.lex_state = 107},
    [409] = {.lex_state = 164, .external_tokens = 3},
    [410] = {.lex_state = 149},
    [411] = {.lex_state = 164, .external_tokens = 3},
    [412] = {.lex_state = 201, .external_tokens = 2},
    [413] = {.lex_state = 201, .external_tokens = 2},
    [414] = {.lex_state = 149},
    [415] = {.lex_state = 164, .external_tokens = 3},
    [416] = {.lex_state = 203, .external_tokens = 2},
    [417] = {.lex_state = 122, .external_tokens = 2},
    [418] = {.lex_state = 151},
    [419] = {.lex_state = 107},
    [420] = {.lex_state = 109},
    [421] = {.lex_state = 164, .external_tokens = 3},
    [422] = {.lex_state = 203, .external_tokens = 2},
    [423] = {.lex_state = 122, .external_tokens = 2},
    [424] = {.lex_state = 149},
    [425] = {.lex_state = 164, .external_tokens = 3},
    [426] = {.lex_state = 204, .external_tokens = 2},
    [427] = {.lex_state = 107},
    [428] = {.lex_state = 204, .external_tokens = 2},
    [429] = {.lex_state = 122, .external_tokens = 2},
    [430] = {.lex_state = 204, .external_tokens = 2},
    [431] = {.lex_state = 204, .external_tokens = 2},
    [432] = {.lex_state = 122, .external_tokens = 2},
    [433] = {.lex_state = 149},
    [434] = {.lex_state = 164, .external_tokens = 3},
    [435] = {.lex_state = 204, .external_tokens = 2},
    [436] = {.lex_state = 108, .external_tokens = 2},
    [437] = {.lex_state = 159, .external_tokens = 2},
    [438] = {.lex_state = 107},
    [439] = {.lex_state = 205, .external_tokens = 2},
    [440] = {.lex_state = 107},
    [441] = {.lex_state = 159, .external_tokens = 2},
    [442] = {.lex_state = 159, .external_tokens = 2},
    [443] = {.lex_state = 108, .external_tokens = 2},
    [444] = {.lex_state = 159, .external_tokens = 2},
    [445] = {.lex_state = 205, .external_tokens = 2},
    [446] = {.lex_state = 206},
    [447] = {.lex_state = 107},
    [448] = {.lex_state = 164, .external_tokens = 3},
    [449] = {.lex_state = 107},
    [450] = {.lex_state = 109},
    [451] = {.lex_state = 107},
    [452] = {.lex_state = 107},
    [453] = {.lex_state = 107},
    [454] = {.lex_state = 109},
    [455] = {.lex_state = 107},
    [456] = {.lex_state = 107},
    [457] = {.lex_state = 109},
    [458] = {.lex_state = 107},
    [459] = {.lex_state = 110},
    [460] = {.lex_state = 145},
    [461] = {.lex_state = 113, .external_tokens = 2},
    [462] = {.lex_state = 107},
    [463] = {.lex_state = 207},
    [464] = {.lex_state = 110},
    [465] = {.lex_state = 110},
    [466] = {.lex_state = 107},
    [467] = {.lex_state = 107},
    [468] = {.lex_state = 138},
    [469] = {.lex_state = 136},
    [470] = {.lex_state = 113, .external_tokens = 2},
    [471] = {.lex_state = 113, .external_tokens = 2},
    [472] = {.lex_state = 208, .external_tokens = 2},
    [473] = {.lex_state = 169, .external_tokens = 5},
    [474] = {.lex_state = 168, .external_tokens = 4},
    [475] = {.lex_state = 169, .external_tokens = 5},
    [476] = {.lex_state = 122, .external_tokens = 5},
    [477] = {.lex_state = 108, .external_tokens = 2},
    [478] = {.lex_state = 122, .external_tokens = 5},
    [479] = {.lex_state = 122, .external_tokens = 5},
    [480] = {.lex_state = 204, .external_tokens = 5},
    [481] = {.lex_state = 202, .external_tokens = 5},
    [482] = {.lex_state = 201, .external_tokens = 5},
    [483] = {.lex_state = 122, .external_tokens = 5},
    [484] = {.lex_state = 176},
    [485] = {.lex_state = 122, .external_tokens = 5},
    [486] = {.lex_state = 109},
    [487] = {.lex_state = 141},
    [488] = {.lex_state = 141},
    [489] = {.lex_state = 142},
    [490] = {.lex_state = 123},
    [491] = {.lex_state = 169, .external_tokens = 5},
    [492] = {.lex_state = 209, .external_tokens = 2},
    [493] = {.lex_state = 113, .external_tokens = 2},
    [494] = {.lex_state = 141},
    [495] = {.lex_state = 141},
    [496] = {.lex_state = 142},
    [497] = {.lex_state = 147},
    [498] = {.lex_state = 122, .external_tokens = 5},
    [499] = {.lex_state = 210, .external_tokens = 2},
    [500] = {.lex_state = 204, .external_tokens = 5},
    [501] = {.lex_state = 201, .external_tokens = 5},
    [502] = {.lex_state = 176},
    [503] = {.lex_state = 123},
    [504] = {.lex_state = 141},
    [505] = {.lex_state = 143},
    [506] = {.lex_state = 113, .external_tokens = 2},
    [507] = {.lex_state = 142},
    [508] = {.lex_state = 113, .external_tokens = 2},
    [509] = {.lex_state = 122, .external_tokens = 5},
    [510] = {.lex_state = 164, .external_tokens = 3},
    [511] = {.lex_state = 108, .external_tokens = 2},
    [512] = {.lex_state = 122, .external_tokens = 5},
    [513] = {.lex_state = 169, .external_tokens = 5},
    [514] = {.lex_state = 168, .external_tokens = 4},
    [515] = {.lex_state = 169, .external_tokens = 5},
    [516] = {.lex_state = 202, .external_tokens = 5},
    [517] = {.lex_state = 201, .external_tokens = 5},
    [518] = {.lex_state = 122, .external_tokens = 5},
    [519] = {.lex_state = 122, .external_tokens = 5},
    [520] = {.lex_state = 204, .external_tokens = 5},
    [521] = {.lex_state = 122, .external_tokens = 5},
    [522] = {.lex_state = 164, .external_tokens = 3},
    [523] = {.lex_state = 202, .external_tokens = 5},
    [524] = {.lex_state = 211},
    [525] = {.lex_state = 154, .external_tokens = 2},
    [526] = {.lex_state = 107},
    [527] = {.lex_state = 154, .external_tokens = 2},
    [528] = {.lex_state = 107},
    [529] = {.lex_state = 122, .external_tokens = 5},
    [530] = {.lex_state = 108, .external_tokens = 2},
    [531] = {.lex_state = 122, .external_tokens = 5},
    [532] = {.lex_state = 151},
    [533] = {.lex_state = 107},
    [534] = {.lex_state = 109},
    [535] = {.lex_state = 164, .external_tokens = 3},
    [536] = {.lex_state = 203, .external_tokens = 5},
    [537] = {.lex_state = 122, .external_tokens = 5},
    [538] = {.lex_state = 113, .external_tokens = 2},
    [539] = {.lex_state = 143},
    [540] = {.lex_state = 113, .external_tokens = 2},
    [541] = {.lex_state = 142},
    [542] = {.lex_state = 113, .external_tokens = 2},
    [543] = {.lex_state = 145},
    [544] = {.lex_state = 206},
    [545] = {.lex_state = 164, .external_tokens = 3},
    [546] = {.lex_state = 107},
    [547] = {.lex_state = 113, .external_tokens = 2},
    [548] = {.lex_state = 113, .external_tokens = 2},
    [549] = {.lex_state = 113, .external_tokens = 2},
    [550] = {.lex_state = 113, .external_tokens = 2},
    [551] = {.lex_state = 151},
    [552] = {.lex_state = 107},
    [553] = {.lex_state = 212},
    [554] = {.lex_state = 107},
    [555] = {.lex_state = 212},
    [556] = {.lex_state = 169, .external_tokens = 5},
    [557] = {.lex_state = 150, .external_tokens = 2},
    [558] = {.lex_state = 107},
    [559] = {.lex_state = 150, .external_tokens = 2},
    [560] = {.lex_state = 204, .external_tokens = 5},
    [561] = {.lex_state = 122, .external_tokens = 5},
    [562] = {.lex_state = 113, .external_tokens = 2},
    [563] = {.lex_state = 154, .external_tokens = 2},
    [564] = {.lex_state = 164, .external_tokens = 3},
    [565] = {.lex_state = 201, .external_tokens = 5},
    [566] = {.lex_state = 109},
    [567] = {.lex_state = 164, .external_tokens = 3},
    [568] = {.lex_state = 122, .external_tokens = 5},
    [569] = {.lex_state = 122, .external_tokens = 5},
    [570] = {.lex_state = 201, .external_tokens = 5},
    [571] = {.lex_state = 122, .external_tokens = 5},
    [572] = {.lex_state = 109},
    [573] = {.lex_state = 175},
    [574] = {.lex_state = 109},
    [575] = {.lex_state = 142},
    [576] = {.lex_state = 109},
    [577] = {.lex_state = 171},
    [578] = {.lex_state = 109},
    [579] = {.lex_state = 164, .external_tokens = 3},
    [580] = {.lex_state = 122, .external_tokens = 5},
    [581] = {.lex_state = 164, .external_tokens = 3},
    [582] = {.lex_state = 122, .external_tokens = 5},
    [583] = {.lex_state = 169, .external_tokens = 5},
    [584] = {.lex_state = 164, .external_tokens = 3},
    [585] = {.lex_state = 213},
    [586] = {.lex_state = 139},
    [587] = {.lex_state = 142},
    [588] = {.lex_state = 122, .external_tokens = 5},
    [589] = {.lex_state = 156},
    [590] = {.lex_state = 138},
    [591] = {.lex_state = 113, .external_tokens = 2},
    [592] = {.lex_state = 137},
    [593] = {.lex_state = 113, .external_tokens = 2},
    [594] = {.lex_state = 160, .external_tokens = 2},
    [595] = {.lex_state = 163},
    [596] = {.lex_state = 107},
    [597] = {.lex_state = 113, .external_tokens = 2},
    [598] = {.lex_state = 113, .external_tokens = 2},
    [599] = {.lex_state = 140},
    [600] = {.lex_state = 207},
    [601] = {.lex_state = 139},
    [602] = {.lex_state = 140},
    [603] = {.lex_state = 145},
    [604] = {.lex_state = 113, .external_tokens = 2},
    [605] = {.lex_state = 141},
    [606] = {.lex_state = 140},
    [607] = {.lex_state = 162},
    [608] = {.lex_state = 176},
    [609] = {.lex_state = 164, .external_tokens = 3},
    [610] = {.lex_state = 122, .external_tokens = 5},
    [611] = {.lex_state = 178},
    [612] = {.lex_state = 177},
    [613] = {.lex_state = 107},
    [614] = {.lex_state = 164, .external_tokens = 3},
    [615] = {.lex_state = 149},
    [616] = {.lex_state = 201, .external_tokens = 5},
    [617] = {.lex_state = 164, .external_tokens = 3},
    [618] = {.lex_state = 179},
    [619] = {.lex_state = 149},
    [620] = {.lex_state = 164, .external_tokens = 3},
    [621] = {.lex_state = 203, .external_tokens = 5},
    [622] = {.lex_state = 122, .external_tokens = 5},
    [623] = {.lex_state = 214},
    [624] = {.lex_state = 107},
    [625] = {.lex_state = 113, .external_tokens = 2},
    [626] = {.lex_state = 214},
    [627] = {.lex_state = 151},
    [628] = {.lex_state = 149},
    [629] = {.lex_state = 164, .external_tokens = 3},
    [630] = {.lex_state = 204, .external_tokens = 5},
    [631] = {.lex_state = 149},
    [632] = {.lex_state = 164, .external_tokens = 3},
    [633] = {.lex_state = 204, .external_tokens = 5},
    [634] = {.lex_state = 122, .external_tokens = 5},
    [635] = {.lex_state = 113, .external_tokens = 2},
    [636] = {.lex_state = 136},
    [637] = {.lex_state = 113, .external_tokens = 2},
    [638] = {.lex_state = 113, .external_tokens = 2},
    [639] = {.lex_state = 215, .external_tokens = 2},
    [640] = {.lex_state = 176},
    [641] = {.lex_state = 216, .external_tokens = 2},
    [642] = {.lex_state = 141},
    [643] = {.lex_state = 142},
    [644] = {.lex_state = 148},
    [645] = {.lex_state = 113, .external_tokens = 2},
    [646] = {.lex_state = 164, .external_tokens = 3},
    [647] = {.lex_state = 107},
    [648] = {.lex_state = 216, .external_tokens = 2},
    [649] = {.lex_state = 217, .external_tokens = 2},
    [650] = {.lex_state = 107},
    [651] = {.lex_state = 217, .external_tokens = 2},
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
        [anon_sym_LBRACK] = ACTIONS(59),
        [anon_sym_DOT_DOT_DOT] = ACTIONS(61),
        [anon_sym_RBRACK] = ACTIONS(63),
        [anon_sym_LBRACE] = ACTIONS(65),
        [anon_sym_RBRACE] = ACTIONS(67),
        [sym_number] = ACTIONS(69),
        [sym_identifier] = ACTIONS(71),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(75),
        [sym__indent] = ACTIONS(77),
        [sym__dedent] = ACTIONS(79),
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
        [ts_builtin_sym_end] = ACTIONS(81),
        [anon_sym_print] = ACTIONS(83),
        [anon_sym_return] = ACTIONS(85),
        [anon_sym_del] = ACTIONS(87),
        [sym_pass_statement] = ACTIONS(89),
        [sym_break_statement] = ACTIONS(89),
        [sym_continue_statement] = ACTIONS(89),
        [anon_sym_if] = ACTIONS(91),
        [anon_sym_for] = ACTIONS(93),
        [anon_sym_while] = ACTIONS(95),
        [anon_sym_try] = ACTIONS(97),
        [anon_sym_with] = ACTIONS(99),
        [anon_sym_def] = ACTIONS(101),
        [anon_sym_class] = ACTIONS(103),
        [anon_sym_AT] = ACTIONS(105),
        [anon_sym_LBRACK] = ACTIONS(107),
        [anon_sym_LBRACE] = ACTIONS(109),
        [sym_number] = ACTIONS(111),
        [sym_identifier] = ACTIONS(113),
        [sym_comment] = ACTIONS(73),
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
        [anon_sym_LBRACK] = ACTIONS(107),
        [anon_sym_LBRACE] = ACTIONS(109),
        [sym_number] = ACTIONS(111),
        [sym_identifier] = ACTIONS(111),
        [sym_comment] = ACTIONS(73),
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
        [anon_sym_LBRACK] = ACTIONS(107),
        [anon_sym_LBRACE] = ACTIONS(109),
        [sym_number] = ACTIONS(111),
        [sym_identifier] = ACTIONS(111),
        [sym_comment] = ACTIONS(73),
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
        [anon_sym_LBRACK] = ACTIONS(107),
        [anon_sym_LBRACE] = ACTIONS(109),
        [sym_number] = ACTIONS(111),
        [sym_identifier] = ACTIONS(111),
        [sym_comment] = ACTIONS(73),
    },
    [5] = {
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(115),
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
        [anon_sym_LBRACK] = ACTIONS(117),
        [anon_sym_LBRACE] = ACTIONS(119),
        [sym_number] = ACTIONS(121),
        [sym_identifier] = ACTIONS(121),
        [sym_comment] = ACTIONS(73),
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
        [anon_sym_LBRACK] = ACTIONS(117),
        [anon_sym_LBRACE] = ACTIONS(119),
        [sym_number] = ACTIONS(121),
        [sym_identifier] = ACTIONS(121),
        [sym_comment] = ACTIONS(73),
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
        [anon_sym_LBRACK] = ACTIONS(117),
        [anon_sym_LBRACE] = ACTIONS(119),
        [sym_number] = ACTIONS(121),
        [sym_identifier] = ACTIONS(121),
        [sym_comment] = ACTIONS(73),
    },
    [9] = {
        [anon_sym_COLON] = ACTIONS(123),
        [sym_comment] = ACTIONS(73),
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
        [anon_sym_LBRACK] = ACTIONS(117),
        [anon_sym_LBRACE] = ACTIONS(119),
        [sym_number] = ACTIONS(121),
        [sym_identifier] = ACTIONS(121),
        [sym_comment] = ACTIONS(73),
    },
    [11] = {
        [sym_identifier] = ACTIONS(125),
        [sym_comment] = ACTIONS(73),
    },
    [12] = {
        [sym_identifier] = ACTIONS(127),
        [sym_comment] = ACTIONS(73),
    },
    [13] = {
        [sym_dotted_name] = STATE(231),
        [sym_identifier] = ACTIONS(129),
        [sym_comment] = ACTIONS(73),
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
        [anon_sym_LBRACK] = ACTIONS(117),
        [anon_sym_RBRACK] = ACTIONS(131),
        [anon_sym_LBRACE] = ACTIONS(119),
        [sym_number] = ACTIONS(121),
        [sym_identifier] = ACTIONS(121),
        [sym_comment] = ACTIONS(73),
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
        [anon_sym_LBRACK] = ACTIONS(117),
        [anon_sym_LBRACE] = ACTIONS(119),
        [anon_sym_RBRACE] = ACTIONS(133),
        [sym_number] = ACTIONS(121),
        [sym_identifier] = ACTIONS(121),
        [sym_comment] = ACTIONS(73),
    },
    [16] = {
        [anon_sym_COMMA] = ACTIONS(135),
        [anon_sym_COLON] = ACTIONS(135),
        [anon_sym_for] = ACTIONS(135),
        [anon_sym_in] = ACTIONS(135),
        [anon_sym_as] = ACTIONS(135),
        [anon_sym_LPAREN] = ACTIONS(135),
        [anon_sym_RPAREN] = ACTIONS(135),
        [anon_sym_STAR] = ACTIONS(137),
        [anon_sym_PLUS] = ACTIONS(135),
        [anon_sym_DASH] = ACTIONS(135),
        [anon_sym_SLASH] = ACTIONS(135),
        [anon_sym_STAR_STAR] = ACTIONS(135),
        [anon_sym_PIPE] = ACTIONS(135),
        [anon_sym_AMP] = ACTIONS(135),
        [anon_sym_CARET] = ACTIONS(135),
        [anon_sym_LT_LT] = ACTIONS(135),
        [anon_sym_GT_GT] = ACTIONS(135),
        [anon_sym_LBRACK] = ACTIONS(135),
        [anon_sym_RBRACK] = ACTIONS(135),
        [anon_sym_RBRACE] = ACTIONS(135),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(135),
    },
    [17] = {
        [ts_builtin_sym_end] = ACTIONS(139),
        [sym_comment] = ACTIONS(73),
    },
    [18] = {
        [ts_builtin_sym_end] = ACTIONS(141),
        [anon_sym_SEMI] = ACTIONS(141),
        [anon_sym_print] = ACTIONS(143),
        [anon_sym_return] = ACTIONS(143),
        [anon_sym_del] = ACTIONS(143),
        [sym_pass_statement] = ACTIONS(143),
        [sym_break_statement] = ACTIONS(143),
        [sym_continue_statement] = ACTIONS(143),
        [anon_sym_if] = ACTIONS(143),
        [anon_sym_for] = ACTIONS(143),
        [anon_sym_while] = ACTIONS(143),
        [anon_sym_try] = ACTIONS(143),
        [anon_sym_with] = ACTIONS(143),
        [anon_sym_def] = ACTIONS(143),
        [anon_sym_class] = ACTIONS(143),
        [anon_sym_AT] = ACTIONS(141),
        [anon_sym_LBRACK] = ACTIONS(141),
        [anon_sym_LBRACE] = ACTIONS(141),
        [sym_number] = ACTIONS(143),
        [sym_identifier] = ACTIONS(145),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(141),
    },
    [19] = {
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(147),
    },
    [20] = {
        [ts_builtin_sym_end] = ACTIONS(149),
        [anon_sym_SEMI] = ACTIONS(149),
        [anon_sym_print] = ACTIONS(151),
        [anon_sym_return] = ACTIONS(151),
        [anon_sym_del] = ACTIONS(151),
        [sym_pass_statement] = ACTIONS(151),
        [sym_break_statement] = ACTIONS(151),
        [sym_continue_statement] = ACTIONS(151),
        [anon_sym_if] = ACTIONS(151),
        [anon_sym_for] = ACTIONS(151),
        [anon_sym_while] = ACTIONS(151),
        [anon_sym_try] = ACTIONS(151),
        [anon_sym_with] = ACTIONS(151),
        [anon_sym_def] = ACTIONS(151),
        [anon_sym_class] = ACTIONS(151),
        [anon_sym_AT] = ACTIONS(149),
        [anon_sym_LBRACK] = ACTIONS(149),
        [anon_sym_LBRACE] = ACTIONS(149),
        [sym_number] = ACTIONS(151),
        [sym_identifier] = ACTIONS(153),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(149),
    },
    [21] = {
        [ts_builtin_sym_end] = ACTIONS(155),
        [anon_sym_SEMI] = ACTIONS(155),
        [anon_sym_print] = ACTIONS(157),
        [anon_sym_return] = ACTIONS(157),
        [anon_sym_del] = ACTIONS(157),
        [sym_pass_statement] = ACTIONS(157),
        [sym_break_statement] = ACTIONS(157),
        [sym_continue_statement] = ACTIONS(157),
        [anon_sym_if] = ACTIONS(157),
        [anon_sym_for] = ACTIONS(157),
        [anon_sym_while] = ACTIONS(157),
        [anon_sym_try] = ACTIONS(157),
        [anon_sym_with] = ACTIONS(157),
        [anon_sym_def] = ACTIONS(157),
        [anon_sym_class] = ACTIONS(157),
        [anon_sym_AT] = ACTIONS(155),
        [anon_sym_LBRACK] = ACTIONS(155),
        [anon_sym_LBRACE] = ACTIONS(155),
        [sym_number] = ACTIONS(157),
        [sym_identifier] = ACTIONS(159),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(155),
    },
    [22] = {
        [anon_sym_def] = ACTIONS(161),
        [anon_sym_class] = ACTIONS(161),
        [anon_sym_AT] = ACTIONS(161),
        [sym_comment] = ACTIONS(73),
    },
    [23] = {
        [anon_sym_LPAREN] = ACTIONS(163),
        [anon_sym_STAR] = ACTIONS(165),
        [anon_sym_PLUS] = ACTIONS(167),
        [anon_sym_DASH] = ACTIONS(167),
        [anon_sym_SLASH] = ACTIONS(169),
        [anon_sym_STAR_STAR] = ACTIONS(171),
        [anon_sym_PIPE] = ACTIONS(173),
        [anon_sym_AMP] = ACTIONS(175),
        [anon_sym_CARET] = ACTIONS(177),
        [anon_sym_LT_LT] = ACTIONS(167),
        [anon_sym_GT_GT] = ACTIONS(167),
        [anon_sym_LBRACK] = ACTIONS(179),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(181),
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
        [ts_builtin_sym_end] = ACTIONS(183),
        [anon_sym_SEMI] = ACTIONS(185),
        [anon_sym_print] = ACTIONS(83),
        [anon_sym_return] = ACTIONS(85),
        [anon_sym_del] = ACTIONS(87),
        [sym_pass_statement] = ACTIONS(89),
        [sym_break_statement] = ACTIONS(89),
        [sym_continue_statement] = ACTIONS(89),
        [anon_sym_if] = ACTIONS(91),
        [anon_sym_for] = ACTIONS(93),
        [anon_sym_while] = ACTIONS(95),
        [anon_sym_try] = ACTIONS(97),
        [anon_sym_with] = ACTIONS(99),
        [anon_sym_def] = ACTIONS(101),
        [anon_sym_class] = ACTIONS(103),
        [anon_sym_AT] = ACTIONS(105),
        [anon_sym_LBRACK] = ACTIONS(107),
        [anon_sym_LBRACE] = ACTIONS(109),
        [sym_number] = ACTIONS(111),
        [sym_identifier] = ACTIONS(113),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(185),
    },
    [25] = {
        [sym_function_definition] = STATE(26),
        [sym_class_definition] = STATE(26),
        [sym_decorator] = STATE(27),
        [anon_sym_def] = ACTIONS(187),
        [anon_sym_class] = ACTIONS(189),
        [anon_sym_AT] = ACTIONS(105),
        [sym_comment] = ACTIONS(73),
    },
    [26] = {
        [ts_builtin_sym_end] = ACTIONS(191),
        [anon_sym_SEMI] = ACTIONS(191),
        [anon_sym_print] = ACTIONS(193),
        [anon_sym_return] = ACTIONS(193),
        [anon_sym_del] = ACTIONS(193),
        [sym_pass_statement] = ACTIONS(193),
        [sym_break_statement] = ACTIONS(193),
        [sym_continue_statement] = ACTIONS(193),
        [anon_sym_if] = ACTIONS(193),
        [anon_sym_for] = ACTIONS(193),
        [anon_sym_while] = ACTIONS(193),
        [anon_sym_try] = ACTIONS(193),
        [anon_sym_with] = ACTIONS(193),
        [anon_sym_def] = ACTIONS(193),
        [anon_sym_class] = ACTIONS(193),
        [anon_sym_AT] = ACTIONS(191),
        [anon_sym_LBRACK] = ACTIONS(191),
        [anon_sym_LBRACE] = ACTIONS(191),
        [sym_number] = ACTIONS(193),
        [sym_identifier] = ACTIONS(195),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(191),
    },
    [27] = {
        [anon_sym_def] = ACTIONS(197),
        [anon_sym_class] = ACTIONS(197),
        [anon_sym_AT] = ACTIONS(197),
        [sym_comment] = ACTIONS(73),
    },
    [28] = {
        [ts_builtin_sym_end] = ACTIONS(199),
        [sym_comment] = ACTIONS(73),
    },
    [29] = {
        [ts_builtin_sym_end] = ACTIONS(201),
        [anon_sym_SEMI] = ACTIONS(201),
        [anon_sym_print] = ACTIONS(203),
        [anon_sym_return] = ACTIONS(203),
        [anon_sym_del] = ACTIONS(203),
        [sym_pass_statement] = ACTIONS(203),
        [sym_break_statement] = ACTIONS(203),
        [sym_continue_statement] = ACTIONS(203),
        [anon_sym_if] = ACTIONS(203),
        [anon_sym_for] = ACTIONS(203),
        [anon_sym_while] = ACTIONS(203),
        [anon_sym_try] = ACTIONS(203),
        [anon_sym_with] = ACTIONS(203),
        [anon_sym_def] = ACTIONS(203),
        [anon_sym_class] = ACTIONS(203),
        [anon_sym_AT] = ACTIONS(201),
        [anon_sym_LBRACK] = ACTIONS(201),
        [anon_sym_LBRACE] = ACTIONS(201),
        [sym_number] = ACTIONS(203),
        [sym_identifier] = ACTIONS(205),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(201),
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
        [anon_sym_STAR] = ACTIONS(207),
        [anon_sym_STAR_STAR] = ACTIONS(209),
        [anon_sym_LBRACK] = ACTIONS(117),
        [anon_sym_LBRACE] = ACTIONS(119),
        [sym_number] = ACTIONS(121),
        [sym_identifier] = ACTIONS(211),
        [sym_comment] = ACTIONS(73),
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
        [anon_sym_LBRACK] = ACTIONS(107),
        [anon_sym_LBRACE] = ACTIONS(109),
        [sym_number] = ACTIONS(111),
        [sym_identifier] = ACTIONS(111),
        [sym_comment] = ACTIONS(73),
    },
    [32] = {
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
        [anon_sym_LBRACK] = ACTIONS(107),
        [anon_sym_LBRACE] = ACTIONS(109),
        [sym_number] = ACTIONS(111),
        [sym_identifier] = ACTIONS(111),
        [sym_comment] = ACTIONS(73),
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
        [anon_sym_LBRACK] = ACTIONS(107),
        [anon_sym_LBRACE] = ACTIONS(109),
        [sym_number] = ACTIONS(111),
        [sym_identifier] = ACTIONS(111),
        [sym_comment] = ACTIONS(73),
    },
    [34] = {
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
        [anon_sym_LBRACK] = ACTIONS(107),
        [anon_sym_LBRACE] = ACTIONS(109),
        [sym_number] = ACTIONS(111),
        [sym_identifier] = ACTIONS(111),
        [sym_comment] = ACTIONS(73),
    },
    [35] = {
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
        [anon_sym_LBRACK] = ACTIONS(107),
        [anon_sym_LBRACE] = ACTIONS(109),
        [sym_number] = ACTIONS(111),
        [sym_identifier] = ACTIONS(111),
        [sym_comment] = ACTIONS(73),
    },
    [36] = {
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
        [anon_sym_LBRACK] = ACTIONS(107),
        [anon_sym_LBRACE] = ACTIONS(109),
        [sym_number] = ACTIONS(111),
        [sym_identifier] = ACTIONS(111),
        [sym_comment] = ACTIONS(73),
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
        [anon_sym_LBRACK] = ACTIONS(117),
        [anon_sym_DOT_DOT_DOT] = ACTIONS(213),
        [anon_sym_LBRACE] = ACTIONS(119),
        [sym_number] = ACTIONS(121),
        [sym_identifier] = ACTIONS(121),
        [sym_comment] = ACTIONS(73),
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
        [anon_sym_LBRACK] = ACTIONS(117),
        [anon_sym_RBRACK] = ACTIONS(215),
        [anon_sym_LBRACE] = ACTIONS(119),
        [sym_number] = ACTIONS(121),
        [sym_identifier] = ACTIONS(121),
        [sym_comment] = ACTIONS(73),
    },
    [39] = {
        [aux_sym_subscript_repeat1] = STATE(53),
        [anon_sym_COMMA] = ACTIONS(217),
        [anon_sym_RBRACK] = ACTIONS(219),
        [sym_comment] = ACTIONS(73),
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
        [anon_sym_LBRACK] = ACTIONS(117),
        [anon_sym_LBRACE] = ACTIONS(119),
        [anon_sym_RBRACE] = ACTIONS(221),
        [sym_number] = ACTIONS(121),
        [sym_identifier] = ACTIONS(121),
        [sym_comment] = ACTIONS(73),
    },
    [41] = {
        [anon_sym_COMMA] = ACTIONS(135),
        [anon_sym_COLON] = ACTIONS(135),
        [anon_sym_for] = ACTIONS(135),
        [anon_sym_in] = ACTIONS(135),
        [anon_sym_as] = ACTIONS(135),
        [anon_sym_LPAREN] = ACTIONS(135),
        [anon_sym_RPAREN] = ACTIONS(135),
        [anon_sym_STAR] = ACTIONS(137),
        [anon_sym_PLUS] = ACTIONS(135),
        [anon_sym_DASH] = ACTIONS(135),
        [anon_sym_SLASH] = ACTIONS(135),
        [anon_sym_STAR_STAR] = ACTIONS(135),
        [anon_sym_PIPE] = ACTIONS(135),
        [anon_sym_AMP] = ACTIONS(135),
        [anon_sym_CARET] = ACTIONS(135),
        [anon_sym_LT_LT] = ACTIONS(135),
        [anon_sym_GT_GT] = ACTIONS(135),
        [anon_sym_LBRACK] = ACTIONS(135),
        [anon_sym_RBRACK] = ACTIONS(135),
        [anon_sym_RBRACE] = ACTIONS(135),
        [sym_comment] = ACTIONS(73),
    },
    [42] = {
        [aux_sym_subscript_repeat1] = STATE(53),
        [anon_sym_COMMA] = ACTIONS(217),
        [anon_sym_LPAREN] = ACTIONS(223),
        [anon_sym_STAR] = ACTIONS(225),
        [anon_sym_PLUS] = ACTIONS(227),
        [anon_sym_DASH] = ACTIONS(227),
        [anon_sym_SLASH] = ACTIONS(229),
        [anon_sym_STAR_STAR] = ACTIONS(231),
        [anon_sym_PIPE] = ACTIONS(233),
        [anon_sym_AMP] = ACTIONS(235),
        [anon_sym_CARET] = ACTIONS(237),
        [anon_sym_LT_LT] = ACTIONS(227),
        [anon_sym_GT_GT] = ACTIONS(227),
        [anon_sym_LBRACK] = ACTIONS(239),
        [anon_sym_RBRACK] = ACTIONS(219),
        [sym_comment] = ACTIONS(73),
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
        [anon_sym_LBRACK] = ACTIONS(117),
        [anon_sym_DOT_DOT_DOT] = ACTIONS(241),
        [anon_sym_RBRACK] = ACTIONS(243),
        [anon_sym_LBRACE] = ACTIONS(119),
        [sym_number] = ACTIONS(121),
        [sym_identifier] = ACTIONS(121),
        [sym_comment] = ACTIONS(73),
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
        [anon_sym_STAR] = ACTIONS(207),
        [anon_sym_STAR_STAR] = ACTIONS(209),
        [anon_sym_LBRACK] = ACTIONS(117),
        [anon_sym_LBRACE] = ACTIONS(119),
        [sym_number] = ACTIONS(121),
        [sym_identifier] = ACTIONS(211),
        [sym_comment] = ACTIONS(73),
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
        [anon_sym_LBRACK] = ACTIONS(117),
        [anon_sym_LBRACE] = ACTIONS(119),
        [sym_number] = ACTIONS(121),
        [sym_identifier] = ACTIONS(121),
        [sym_comment] = ACTIONS(73),
    },
    [46] = {
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
        [anon_sym_LBRACK] = ACTIONS(117),
        [anon_sym_LBRACE] = ACTIONS(119),
        [sym_number] = ACTIONS(121),
        [sym_identifier] = ACTIONS(121),
        [sym_comment] = ACTIONS(73),
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
        [anon_sym_LBRACK] = ACTIONS(117),
        [anon_sym_LBRACE] = ACTIONS(119),
        [sym_number] = ACTIONS(121),
        [sym_identifier] = ACTIONS(121),
        [sym_comment] = ACTIONS(73),
    },
    [48] = {
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
        [anon_sym_LBRACK] = ACTIONS(117),
        [anon_sym_LBRACE] = ACTIONS(119),
        [sym_number] = ACTIONS(121),
        [sym_identifier] = ACTIONS(121),
        [sym_comment] = ACTIONS(73),
    },
    [49] = {
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
        [anon_sym_LBRACK] = ACTIONS(117),
        [anon_sym_LBRACE] = ACTIONS(119),
        [sym_number] = ACTIONS(121),
        [sym_identifier] = ACTIONS(121),
        [sym_comment] = ACTIONS(73),
    },
    [50] = {
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
        [anon_sym_LBRACK] = ACTIONS(117),
        [anon_sym_LBRACE] = ACTIONS(119),
        [sym_number] = ACTIONS(121),
        [sym_identifier] = ACTIONS(121),
        [sym_comment] = ACTIONS(73),
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
        [anon_sym_LBRACK] = ACTIONS(117),
        [anon_sym_DOT_DOT_DOT] = ACTIONS(245),
        [anon_sym_LBRACE] = ACTIONS(119),
        [sym_number] = ACTIONS(121),
        [sym_identifier] = ACTIONS(121),
        [sym_comment] = ACTIONS(73),
    },
    [52] = {
        [anon_sym_COMMA] = ACTIONS(247),
        [anon_sym_COLON] = ACTIONS(247),
        [anon_sym_for] = ACTIONS(247),
        [anon_sym_in] = ACTIONS(247),
        [anon_sym_as] = ACTIONS(247),
        [anon_sym_LPAREN] = ACTIONS(247),
        [anon_sym_RPAREN] = ACTIONS(247),
        [anon_sym_STAR] = ACTIONS(249),
        [anon_sym_PLUS] = ACTIONS(247),
        [anon_sym_DASH] = ACTIONS(247),
        [anon_sym_SLASH] = ACTIONS(247),
        [anon_sym_STAR_STAR] = ACTIONS(247),
        [anon_sym_PIPE] = ACTIONS(247),
        [anon_sym_AMP] = ACTIONS(247),
        [anon_sym_CARET] = ACTIONS(247),
        [anon_sym_LT_LT] = ACTIONS(247),
        [anon_sym_GT_GT] = ACTIONS(247),
        [anon_sym_LBRACK] = ACTIONS(247),
        [anon_sym_RBRACK] = ACTIONS(247),
        [anon_sym_RBRACE] = ACTIONS(247),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(247),
    },
    [53] = {
        [anon_sym_COMMA] = ACTIONS(251),
        [anon_sym_RBRACK] = ACTIONS(243),
        [sym_comment] = ACTIONS(73),
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
        [anon_sym_LBRACK] = ACTIONS(117),
        [anon_sym_DOT_DOT_DOT] = ACTIONS(253),
        [anon_sym_RBRACK] = ACTIONS(255),
        [anon_sym_LBRACE] = ACTIONS(119),
        [sym_number] = ACTIONS(121),
        [sym_identifier] = ACTIONS(121),
        [sym_comment] = ACTIONS(73),
    },
    [55] = {
        [anon_sym_COMMA] = ACTIONS(257),
        [anon_sym_COLON] = ACTIONS(257),
        [anon_sym_for] = ACTIONS(257),
        [anon_sym_in] = ACTIONS(257),
        [anon_sym_as] = ACTIONS(257),
        [anon_sym_LPAREN] = ACTIONS(257),
        [anon_sym_RPAREN] = ACTIONS(257),
        [anon_sym_STAR] = ACTIONS(259),
        [anon_sym_PLUS] = ACTIONS(257),
        [anon_sym_DASH] = ACTIONS(257),
        [anon_sym_SLASH] = ACTIONS(257),
        [anon_sym_STAR_STAR] = ACTIONS(257),
        [anon_sym_PIPE] = ACTIONS(257),
        [anon_sym_AMP] = ACTIONS(257),
        [anon_sym_CARET] = ACTIONS(257),
        [anon_sym_LT_LT] = ACTIONS(257),
        [anon_sym_GT_GT] = ACTIONS(257),
        [anon_sym_LBRACK] = ACTIONS(257),
        [anon_sym_RBRACK] = ACTIONS(257),
        [anon_sym_RBRACE] = ACTIONS(257),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(257),
    },
    [56] = {
        [anon_sym_COMMA] = ACTIONS(261),
        [anon_sym_RBRACK] = ACTIONS(261),
        [sym_comment] = ACTIONS(73),
    },
    [57] = {
        [anon_sym_COMMA] = ACTIONS(263),
        [anon_sym_COLON] = ACTIONS(263),
        [anon_sym_for] = ACTIONS(263),
        [anon_sym_in] = ACTIONS(263),
        [anon_sym_as] = ACTIONS(263),
        [anon_sym_LPAREN] = ACTIONS(263),
        [anon_sym_RPAREN] = ACTIONS(263),
        [anon_sym_STAR] = ACTIONS(265),
        [anon_sym_PLUS] = ACTIONS(263),
        [anon_sym_DASH] = ACTIONS(263),
        [anon_sym_SLASH] = ACTIONS(263),
        [anon_sym_STAR_STAR] = ACTIONS(263),
        [anon_sym_PIPE] = ACTIONS(263),
        [anon_sym_AMP] = ACTIONS(263),
        [anon_sym_CARET] = ACTIONS(263),
        [anon_sym_LT_LT] = ACTIONS(263),
        [anon_sym_GT_GT] = ACTIONS(263),
        [anon_sym_LBRACK] = ACTIONS(263),
        [anon_sym_RBRACK] = ACTIONS(263),
        [anon_sym_RBRACE] = ACTIONS(263),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(263),
    },
    [58] = {
        [anon_sym_COMMA] = ACTIONS(261),
        [anon_sym_LPAREN] = ACTIONS(223),
        [anon_sym_STAR] = ACTIONS(225),
        [anon_sym_PLUS] = ACTIONS(227),
        [anon_sym_DASH] = ACTIONS(227),
        [anon_sym_SLASH] = ACTIONS(229),
        [anon_sym_STAR_STAR] = ACTIONS(231),
        [anon_sym_PIPE] = ACTIONS(233),
        [anon_sym_AMP] = ACTIONS(235),
        [anon_sym_CARET] = ACTIONS(237),
        [anon_sym_LT_LT] = ACTIONS(227),
        [anon_sym_GT_GT] = ACTIONS(227),
        [anon_sym_LBRACK] = ACTIONS(239),
        [anon_sym_RBRACK] = ACTIONS(261),
        [sym_comment] = ACTIONS(73),
    },
    [59] = {
        [aux_sym_subscript_repeat1] = STATE(63),
        [anon_sym_COMMA] = ACTIONS(267),
        [anon_sym_RBRACK] = ACTIONS(269),
        [sym_comment] = ACTIONS(73),
    },
    [60] = {
        [aux_sym_subscript_repeat1] = STATE(63),
        [anon_sym_COMMA] = ACTIONS(267),
        [anon_sym_LPAREN] = ACTIONS(223),
        [anon_sym_STAR] = ACTIONS(225),
        [anon_sym_PLUS] = ACTIONS(227),
        [anon_sym_DASH] = ACTIONS(227),
        [anon_sym_SLASH] = ACTIONS(229),
        [anon_sym_STAR_STAR] = ACTIONS(231),
        [anon_sym_PIPE] = ACTIONS(233),
        [anon_sym_AMP] = ACTIONS(235),
        [anon_sym_CARET] = ACTIONS(237),
        [anon_sym_LT_LT] = ACTIONS(227),
        [anon_sym_GT_GT] = ACTIONS(227),
        [anon_sym_LBRACK] = ACTIONS(239),
        [anon_sym_RBRACK] = ACTIONS(269),
        [sym_comment] = ACTIONS(73),
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
        [anon_sym_LBRACK] = ACTIONS(117),
        [anon_sym_DOT_DOT_DOT] = ACTIONS(241),
        [anon_sym_RBRACK] = ACTIONS(271),
        [anon_sym_LBRACE] = ACTIONS(119),
        [sym_number] = ACTIONS(121),
        [sym_identifier] = ACTIONS(121),
        [sym_comment] = ACTIONS(73),
    },
    [62] = {
        [anon_sym_COMMA] = ACTIONS(247),
        [anon_sym_COLON] = ACTIONS(247),
        [anon_sym_for] = ACTIONS(247),
        [anon_sym_in] = ACTIONS(247),
        [anon_sym_as] = ACTIONS(247),
        [anon_sym_LPAREN] = ACTIONS(247),
        [anon_sym_RPAREN] = ACTIONS(247),
        [anon_sym_STAR] = ACTIONS(249),
        [anon_sym_PLUS] = ACTIONS(247),
        [anon_sym_DASH] = ACTIONS(247),
        [anon_sym_SLASH] = ACTIONS(247),
        [anon_sym_STAR_STAR] = ACTIONS(247),
        [anon_sym_PIPE] = ACTIONS(247),
        [anon_sym_AMP] = ACTIONS(247),
        [anon_sym_CARET] = ACTIONS(247),
        [anon_sym_LT_LT] = ACTIONS(247),
        [anon_sym_GT_GT] = ACTIONS(247),
        [anon_sym_LBRACK] = ACTIONS(247),
        [anon_sym_RBRACK] = ACTIONS(247),
        [anon_sym_RBRACE] = ACTIONS(247),
        [sym_comment] = ACTIONS(73),
    },
    [63] = {
        [anon_sym_COMMA] = ACTIONS(273),
        [anon_sym_RBRACK] = ACTIONS(271),
        [sym_comment] = ACTIONS(73),
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
        [anon_sym_LBRACK] = ACTIONS(117),
        [anon_sym_DOT_DOT_DOT] = ACTIONS(253),
        [anon_sym_RBRACK] = ACTIONS(275),
        [anon_sym_LBRACE] = ACTIONS(119),
        [sym_number] = ACTIONS(121),
        [sym_identifier] = ACTIONS(121),
        [sym_comment] = ACTIONS(73),
    },
    [65] = {
        [anon_sym_COMMA] = ACTIONS(257),
        [anon_sym_COLON] = ACTIONS(257),
        [anon_sym_for] = ACTIONS(257),
        [anon_sym_in] = ACTIONS(257),
        [anon_sym_as] = ACTIONS(257),
        [anon_sym_LPAREN] = ACTIONS(257),
        [anon_sym_RPAREN] = ACTIONS(257),
        [anon_sym_STAR] = ACTIONS(259),
        [anon_sym_PLUS] = ACTIONS(257),
        [anon_sym_DASH] = ACTIONS(257),
        [anon_sym_SLASH] = ACTIONS(257),
        [anon_sym_STAR_STAR] = ACTIONS(257),
        [anon_sym_PIPE] = ACTIONS(257),
        [anon_sym_AMP] = ACTIONS(257),
        [anon_sym_CARET] = ACTIONS(257),
        [anon_sym_LT_LT] = ACTIONS(257),
        [anon_sym_GT_GT] = ACTIONS(257),
        [anon_sym_LBRACK] = ACTIONS(257),
        [anon_sym_RBRACK] = ACTIONS(257),
        [anon_sym_RBRACE] = ACTIONS(257),
        [sym_comment] = ACTIONS(73),
    },
    [66] = {
        [anon_sym_COMMA] = ACTIONS(263),
        [anon_sym_COLON] = ACTIONS(263),
        [anon_sym_for] = ACTIONS(263),
        [anon_sym_in] = ACTIONS(263),
        [anon_sym_as] = ACTIONS(263),
        [anon_sym_LPAREN] = ACTIONS(263),
        [anon_sym_RPAREN] = ACTIONS(263),
        [anon_sym_STAR] = ACTIONS(265),
        [anon_sym_PLUS] = ACTIONS(263),
        [anon_sym_DASH] = ACTIONS(263),
        [anon_sym_SLASH] = ACTIONS(263),
        [anon_sym_STAR_STAR] = ACTIONS(263),
        [anon_sym_PIPE] = ACTIONS(263),
        [anon_sym_AMP] = ACTIONS(263),
        [anon_sym_CARET] = ACTIONS(263),
        [anon_sym_LT_LT] = ACTIONS(263),
        [anon_sym_GT_GT] = ACTIONS(263),
        [anon_sym_LBRACK] = ACTIONS(263),
        [anon_sym_RBRACK] = ACTIONS(263),
        [anon_sym_RBRACE] = ACTIONS(263),
        [sym_comment] = ACTIONS(73),
    },
    [67] = {
        [anon_sym_COMMA] = ACTIONS(277),
        [anon_sym_RBRACK] = ACTIONS(277),
        [sym_comment] = ACTIONS(73),
    },
    [68] = {
        [anon_sym_COMMA] = ACTIONS(277),
        [anon_sym_LPAREN] = ACTIONS(223),
        [anon_sym_STAR] = ACTIONS(225),
        [anon_sym_PLUS] = ACTIONS(227),
        [anon_sym_DASH] = ACTIONS(227),
        [anon_sym_SLASH] = ACTIONS(229),
        [anon_sym_STAR_STAR] = ACTIONS(231),
        [anon_sym_PIPE] = ACTIONS(233),
        [anon_sym_AMP] = ACTIONS(235),
        [anon_sym_CARET] = ACTIONS(237),
        [anon_sym_LT_LT] = ACTIONS(227),
        [anon_sym_GT_GT] = ACTIONS(227),
        [anon_sym_LBRACK] = ACTIONS(239),
        [anon_sym_RBRACK] = ACTIONS(277),
        [sym_comment] = ACTIONS(73),
    },
    [69] = {
        [anon_sym_COMMA] = ACTIONS(279),
        [anon_sym_COLON] = ACTIONS(279),
        [anon_sym_for] = ACTIONS(279),
        [anon_sym_in] = ACTIONS(279),
        [anon_sym_as] = ACTIONS(279),
        [anon_sym_LPAREN] = ACTIONS(279),
        [anon_sym_RPAREN] = ACTIONS(279),
        [anon_sym_STAR] = ACTIONS(225),
        [anon_sym_PLUS] = ACTIONS(279),
        [anon_sym_DASH] = ACTIONS(279),
        [anon_sym_SLASH] = ACTIONS(229),
        [anon_sym_STAR_STAR] = ACTIONS(231),
        [anon_sym_PIPE] = ACTIONS(279),
        [anon_sym_AMP] = ACTIONS(279),
        [anon_sym_CARET] = ACTIONS(279),
        [anon_sym_LT_LT] = ACTIONS(279),
        [anon_sym_GT_GT] = ACTIONS(279),
        [anon_sym_LBRACK] = ACTIONS(279),
        [anon_sym_RBRACK] = ACTIONS(279),
        [anon_sym_RBRACE] = ACTIONS(279),
        [sym_comment] = ACTIONS(73),
    },
    [70] = {
        [anon_sym_COMMA] = ACTIONS(279),
        [anon_sym_COLON] = ACTIONS(279),
        [anon_sym_for] = ACTIONS(279),
        [anon_sym_in] = ACTIONS(279),
        [anon_sym_as] = ACTIONS(279),
        [anon_sym_LPAREN] = ACTIONS(279),
        [anon_sym_RPAREN] = ACTIONS(279),
        [anon_sym_STAR] = ACTIONS(225),
        [anon_sym_PLUS] = ACTIONS(227),
        [anon_sym_DASH] = ACTIONS(227),
        [anon_sym_SLASH] = ACTIONS(229),
        [anon_sym_STAR_STAR] = ACTIONS(231),
        [anon_sym_PIPE] = ACTIONS(279),
        [anon_sym_AMP] = ACTIONS(279),
        [anon_sym_CARET] = ACTIONS(279),
        [anon_sym_LT_LT] = ACTIONS(227),
        [anon_sym_GT_GT] = ACTIONS(227),
        [anon_sym_LBRACK] = ACTIONS(279),
        [anon_sym_RBRACK] = ACTIONS(279),
        [anon_sym_RBRACE] = ACTIONS(279),
        [sym_comment] = ACTIONS(73),
    },
    [71] = {
        [anon_sym_COMMA] = ACTIONS(279),
        [anon_sym_COLON] = ACTIONS(279),
        [anon_sym_for] = ACTIONS(279),
        [anon_sym_in] = ACTIONS(279),
        [anon_sym_as] = ACTIONS(279),
        [anon_sym_LPAREN] = ACTIONS(279),
        [anon_sym_RPAREN] = ACTIONS(279),
        [anon_sym_STAR] = ACTIONS(225),
        [anon_sym_PLUS] = ACTIONS(227),
        [anon_sym_DASH] = ACTIONS(227),
        [anon_sym_SLASH] = ACTIONS(229),
        [anon_sym_STAR_STAR] = ACTIONS(231),
        [anon_sym_PIPE] = ACTIONS(279),
        [anon_sym_AMP] = ACTIONS(279),
        [anon_sym_CARET] = ACTIONS(237),
        [anon_sym_LT_LT] = ACTIONS(227),
        [anon_sym_GT_GT] = ACTIONS(227),
        [anon_sym_LBRACK] = ACTIONS(279),
        [anon_sym_RBRACK] = ACTIONS(279),
        [anon_sym_RBRACE] = ACTIONS(279),
        [sym_comment] = ACTIONS(73),
    },
    [72] = {
        [anon_sym_COMMA] = ACTIONS(279),
        [anon_sym_COLON] = ACTIONS(279),
        [anon_sym_for] = ACTIONS(279),
        [anon_sym_in] = ACTIONS(279),
        [anon_sym_as] = ACTIONS(279),
        [anon_sym_LPAREN] = ACTIONS(279),
        [anon_sym_RPAREN] = ACTIONS(279),
        [anon_sym_STAR] = ACTIONS(225),
        [anon_sym_PLUS] = ACTIONS(227),
        [anon_sym_DASH] = ACTIONS(227),
        [anon_sym_SLASH] = ACTIONS(229),
        [anon_sym_STAR_STAR] = ACTIONS(231),
        [anon_sym_PIPE] = ACTIONS(279),
        [anon_sym_AMP] = ACTIONS(235),
        [anon_sym_CARET] = ACTIONS(237),
        [anon_sym_LT_LT] = ACTIONS(227),
        [anon_sym_GT_GT] = ACTIONS(227),
        [anon_sym_LBRACK] = ACTIONS(279),
        [anon_sym_RBRACK] = ACTIONS(279),
        [anon_sym_RBRACE] = ACTIONS(279),
        [sym_comment] = ACTIONS(73),
    },
    [73] = {
        [anon_sym_COMMA] = ACTIONS(279),
        [anon_sym_COLON] = ACTIONS(279),
        [anon_sym_for] = ACTIONS(279),
        [anon_sym_in] = ACTIONS(279),
        [anon_sym_as] = ACTIONS(279),
        [anon_sym_LPAREN] = ACTIONS(279),
        [anon_sym_RPAREN] = ACTIONS(279),
        [anon_sym_STAR] = ACTIONS(281),
        [anon_sym_PLUS] = ACTIONS(279),
        [anon_sym_DASH] = ACTIONS(279),
        [anon_sym_SLASH] = ACTIONS(279),
        [anon_sym_STAR_STAR] = ACTIONS(279),
        [anon_sym_PIPE] = ACTIONS(279),
        [anon_sym_AMP] = ACTIONS(279),
        [anon_sym_CARET] = ACTIONS(279),
        [anon_sym_LT_LT] = ACTIONS(279),
        [anon_sym_GT_GT] = ACTIONS(279),
        [anon_sym_LBRACK] = ACTIONS(279),
        [anon_sym_RBRACK] = ACTIONS(279),
        [anon_sym_RBRACE] = ACTIONS(279),
        [sym_comment] = ACTIONS(73),
    },
    [74] = {
        [anon_sym_COMMA] = ACTIONS(279),
        [anon_sym_COLON] = ACTIONS(279),
        [anon_sym_for] = ACTIONS(279),
        [anon_sym_in] = ACTIONS(279),
        [anon_sym_as] = ACTIONS(279),
        [anon_sym_LPAREN] = ACTIONS(279),
        [anon_sym_RPAREN] = ACTIONS(279),
        [anon_sym_STAR] = ACTIONS(281),
        [anon_sym_PLUS] = ACTIONS(279),
        [anon_sym_DASH] = ACTIONS(279),
        [anon_sym_SLASH] = ACTIONS(279),
        [anon_sym_STAR_STAR] = ACTIONS(231),
        [anon_sym_PIPE] = ACTIONS(279),
        [anon_sym_AMP] = ACTIONS(279),
        [anon_sym_CARET] = ACTIONS(279),
        [anon_sym_LT_LT] = ACTIONS(279),
        [anon_sym_GT_GT] = ACTIONS(279),
        [anon_sym_LBRACK] = ACTIONS(279),
        [anon_sym_RBRACK] = ACTIONS(279),
        [anon_sym_RBRACE] = ACTIONS(279),
        [sym_comment] = ACTIONS(73),
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
        [anon_sym_LBRACK] = ACTIONS(117),
        [anon_sym_LBRACE] = ACTIONS(119),
        [sym_number] = ACTIONS(121),
        [sym_identifier] = ACTIONS(121),
        [sym_comment] = ACTIONS(73),
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
        [anon_sym_LBRACK] = ACTIONS(117),
        [anon_sym_LBRACE] = ACTIONS(119),
        [sym_number] = ACTIONS(121),
        [sym_identifier] = ACTIONS(121),
        [sym_comment] = ACTIONS(73),
    },
    [77] = {
        [anon_sym_COMMA] = ACTIONS(135),
        [anon_sym_LPAREN] = ACTIONS(135),
        [anon_sym_RPAREN] = ACTIONS(135),
        [anon_sym_EQ] = ACTIONS(283),
        [anon_sym_STAR] = ACTIONS(137),
        [anon_sym_PLUS] = ACTIONS(135),
        [anon_sym_DASH] = ACTIONS(135),
        [anon_sym_SLASH] = ACTIONS(135),
        [anon_sym_STAR_STAR] = ACTIONS(135),
        [anon_sym_PIPE] = ACTIONS(135),
        [anon_sym_AMP] = ACTIONS(135),
        [anon_sym_CARET] = ACTIONS(135),
        [anon_sym_LT_LT] = ACTIONS(135),
        [anon_sym_GT_GT] = ACTIONS(135),
        [anon_sym_LBRACK] = ACTIONS(135),
        [sym_comment] = ACTIONS(73),
    },
    [78] = {
        [anon_sym_COMMA] = ACTIONS(285),
        [anon_sym_LPAREN] = ACTIONS(223),
        [anon_sym_RPAREN] = ACTIONS(287),
        [anon_sym_STAR] = ACTIONS(225),
        [anon_sym_PLUS] = ACTIONS(227),
        [anon_sym_DASH] = ACTIONS(227),
        [anon_sym_SLASH] = ACTIONS(229),
        [anon_sym_STAR_STAR] = ACTIONS(231),
        [anon_sym_PIPE] = ACTIONS(233),
        [anon_sym_AMP] = ACTIONS(235),
        [anon_sym_CARET] = ACTIONS(237),
        [anon_sym_LT_LT] = ACTIONS(227),
        [anon_sym_GT_GT] = ACTIONS(227),
        [anon_sym_LBRACK] = ACTIONS(239),
        [sym_comment] = ACTIONS(73),
    },
    [79] = {
        [anon_sym_COMMA] = ACTIONS(285),
        [anon_sym_RPAREN] = ACTIONS(287),
        [sym_comment] = ACTIONS(73),
    },
    [80] = {
        [aux_sym_call_repeat2] = STATE(103),
        [anon_sym_COMMA] = ACTIONS(289),
        [anon_sym_RPAREN] = ACTIONS(287),
        [sym_comment] = ACTIONS(73),
    },
    [81] = {
        [anon_sym_RPAREN] = ACTIONS(287),
        [sym_comment] = ACTIONS(73),
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
        [anon_sym_STAR] = ACTIONS(207),
        [anon_sym_STAR_STAR] = ACTIONS(209),
        [anon_sym_LBRACK] = ACTIONS(117),
        [anon_sym_LBRACE] = ACTIONS(119),
        [sym_number] = ACTIONS(121),
        [sym_identifier] = ACTIONS(211),
        [sym_comment] = ACTIONS(73),
    },
    [83] = {
        [anon_sym_COMMA] = ACTIONS(291),
        [anon_sym_LPAREN] = ACTIONS(223),
        [anon_sym_RPAREN] = ACTIONS(293),
        [anon_sym_STAR] = ACTIONS(225),
        [anon_sym_PLUS] = ACTIONS(227),
        [anon_sym_DASH] = ACTIONS(227),
        [anon_sym_SLASH] = ACTIONS(229),
        [anon_sym_STAR_STAR] = ACTIONS(231),
        [anon_sym_PIPE] = ACTIONS(233),
        [anon_sym_AMP] = ACTIONS(235),
        [anon_sym_CARET] = ACTIONS(237),
        [anon_sym_LT_LT] = ACTIONS(227),
        [anon_sym_GT_GT] = ACTIONS(227),
        [anon_sym_LBRACK] = ACTIONS(239),
        [sym_comment] = ACTIONS(73),
    },
    [84] = {
        [anon_sym_COMMA] = ACTIONS(291),
        [anon_sym_RPAREN] = ACTIONS(293),
        [sym_comment] = ACTIONS(73),
    },
    [85] = {
        [aux_sym_call_repeat2] = STATE(89),
        [anon_sym_COMMA] = ACTIONS(295),
        [anon_sym_RPAREN] = ACTIONS(293),
        [sym_comment] = ACTIONS(73),
    },
    [86] = {
        [anon_sym_RPAREN] = ACTIONS(293),
        [sym_comment] = ACTIONS(73),
    },
    [87] = {
        [anon_sym_COMMA] = ACTIONS(297),
        [anon_sym_COLON] = ACTIONS(297),
        [anon_sym_for] = ACTIONS(297),
        [anon_sym_in] = ACTIONS(297),
        [anon_sym_as] = ACTIONS(297),
        [anon_sym_LPAREN] = ACTIONS(297),
        [anon_sym_RPAREN] = ACTIONS(297),
        [anon_sym_STAR] = ACTIONS(299),
        [anon_sym_PLUS] = ACTIONS(297),
        [anon_sym_DASH] = ACTIONS(297),
        [anon_sym_SLASH] = ACTIONS(297),
        [anon_sym_STAR_STAR] = ACTIONS(297),
        [anon_sym_PIPE] = ACTIONS(297),
        [anon_sym_AMP] = ACTIONS(297),
        [anon_sym_CARET] = ACTIONS(297),
        [anon_sym_LT_LT] = ACTIONS(297),
        [anon_sym_GT_GT] = ACTIONS(297),
        [anon_sym_LBRACK] = ACTIONS(297),
        [anon_sym_RBRACK] = ACTIONS(297),
        [anon_sym_RBRACE] = ACTIONS(297),
        [sym_comment] = ACTIONS(73),
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
        [anon_sym_STAR_STAR] = ACTIONS(209),
        [anon_sym_LBRACK] = ACTIONS(117),
        [anon_sym_LBRACE] = ACTIONS(119),
        [sym_number] = ACTIONS(121),
        [sym_identifier] = ACTIONS(211),
        [sym_comment] = ACTIONS(73),
    },
    [89] = {
        [anon_sym_COMMA] = ACTIONS(301),
        [anon_sym_RPAREN] = ACTIONS(303),
        [sym_comment] = ACTIONS(73),
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
        [anon_sym_STAR_STAR] = ACTIONS(209),
        [anon_sym_LBRACK] = ACTIONS(117),
        [anon_sym_LBRACE] = ACTIONS(119),
        [sym_number] = ACTIONS(121),
        [sym_identifier] = ACTIONS(211),
        [sym_comment] = ACTIONS(73),
    },
    [91] = {
        [anon_sym_COMMA] = ACTIONS(305),
        [anon_sym_COLON] = ACTIONS(305),
        [anon_sym_for] = ACTIONS(305),
        [anon_sym_in] = ACTIONS(305),
        [anon_sym_as] = ACTIONS(305),
        [anon_sym_LPAREN] = ACTIONS(305),
        [anon_sym_RPAREN] = ACTIONS(305),
        [anon_sym_STAR] = ACTIONS(307),
        [anon_sym_PLUS] = ACTIONS(305),
        [anon_sym_DASH] = ACTIONS(305),
        [anon_sym_SLASH] = ACTIONS(305),
        [anon_sym_STAR_STAR] = ACTIONS(305),
        [anon_sym_PIPE] = ACTIONS(305),
        [anon_sym_AMP] = ACTIONS(305),
        [anon_sym_CARET] = ACTIONS(305),
        [anon_sym_LT_LT] = ACTIONS(305),
        [anon_sym_GT_GT] = ACTIONS(305),
        [anon_sym_LBRACK] = ACTIONS(305),
        [anon_sym_RBRACK] = ACTIONS(305),
        [anon_sym_RBRACE] = ACTIONS(305),
        [sym_comment] = ACTIONS(73),
    },
    [92] = {
        [anon_sym_COMMA] = ACTIONS(309),
        [anon_sym_LPAREN] = ACTIONS(223),
        [anon_sym_RPAREN] = ACTIONS(309),
        [anon_sym_STAR] = ACTIONS(225),
        [anon_sym_PLUS] = ACTIONS(227),
        [anon_sym_DASH] = ACTIONS(227),
        [anon_sym_SLASH] = ACTIONS(229),
        [anon_sym_STAR_STAR] = ACTIONS(231),
        [anon_sym_PIPE] = ACTIONS(233),
        [anon_sym_AMP] = ACTIONS(235),
        [anon_sym_CARET] = ACTIONS(237),
        [anon_sym_LT_LT] = ACTIONS(227),
        [anon_sym_GT_GT] = ACTIONS(227),
        [anon_sym_LBRACK] = ACTIONS(239),
        [sym_comment] = ACTIONS(73),
    },
    [93] = {
        [anon_sym_COMMA] = ACTIONS(309),
        [anon_sym_RPAREN] = ACTIONS(309),
        [sym_comment] = ACTIONS(73),
    },
    [94] = {
        [anon_sym_RPAREN] = ACTIONS(311),
        [sym_comment] = ACTIONS(73),
    },
    [95] = {
        [anon_sym_COMMA] = ACTIONS(313),
        [anon_sym_COLON] = ACTIONS(313),
        [anon_sym_for] = ACTIONS(313),
        [anon_sym_in] = ACTIONS(313),
        [anon_sym_as] = ACTIONS(313),
        [anon_sym_LPAREN] = ACTIONS(313),
        [anon_sym_RPAREN] = ACTIONS(313),
        [anon_sym_STAR] = ACTIONS(315),
        [anon_sym_PLUS] = ACTIONS(313),
        [anon_sym_DASH] = ACTIONS(313),
        [anon_sym_SLASH] = ACTIONS(313),
        [anon_sym_STAR_STAR] = ACTIONS(313),
        [anon_sym_PIPE] = ACTIONS(313),
        [anon_sym_AMP] = ACTIONS(313),
        [anon_sym_CARET] = ACTIONS(313),
        [anon_sym_LT_LT] = ACTIONS(313),
        [anon_sym_GT_GT] = ACTIONS(313),
        [anon_sym_LBRACK] = ACTIONS(313),
        [anon_sym_RBRACK] = ACTIONS(313),
        [anon_sym_RBRACE] = ACTIONS(313),
        [sym_comment] = ACTIONS(73),
    },
    [96] = {
        [anon_sym_COMMA] = ACTIONS(317),
        [anon_sym_LPAREN] = ACTIONS(223),
        [anon_sym_RPAREN] = ACTIONS(317),
        [anon_sym_STAR] = ACTIONS(225),
        [anon_sym_PLUS] = ACTIONS(227),
        [anon_sym_DASH] = ACTIONS(227),
        [anon_sym_SLASH] = ACTIONS(229),
        [anon_sym_STAR_STAR] = ACTIONS(231),
        [anon_sym_PIPE] = ACTIONS(233),
        [anon_sym_AMP] = ACTIONS(235),
        [anon_sym_CARET] = ACTIONS(237),
        [anon_sym_LT_LT] = ACTIONS(227),
        [anon_sym_GT_GT] = ACTIONS(227),
        [anon_sym_LBRACK] = ACTIONS(239),
        [sym_comment] = ACTIONS(73),
    },
    [97] = {
        [anon_sym_COMMA] = ACTIONS(317),
        [anon_sym_RPAREN] = ACTIONS(317),
        [sym_comment] = ACTIONS(73),
    },
    [98] = {
        [anon_sym_RPAREN] = ACTIONS(319),
        [sym_comment] = ACTIONS(73),
    },
    [99] = {
        [anon_sym_COMMA] = ACTIONS(321),
        [anon_sym_COLON] = ACTIONS(321),
        [anon_sym_for] = ACTIONS(321),
        [anon_sym_in] = ACTIONS(321),
        [anon_sym_as] = ACTIONS(321),
        [anon_sym_LPAREN] = ACTIONS(321),
        [anon_sym_RPAREN] = ACTIONS(321),
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
        [anon_sym_LBRACK] = ACTIONS(321),
        [anon_sym_RBRACK] = ACTIONS(321),
        [anon_sym_RBRACE] = ACTIONS(321),
        [sym_comment] = ACTIONS(73),
    },
    [100] = {
        [anon_sym_RPAREN] = ACTIONS(303),
        [anon_sym_STAR] = ACTIONS(325),
        [anon_sym_STAR_STAR] = ACTIONS(327),
        [anon_sym_LBRACK] = ACTIONS(327),
        [anon_sym_LBRACE] = ACTIONS(327),
        [sym_number] = ACTIONS(325),
        [sym_identifier] = ACTIONS(325),
        [sym_comment] = ACTIONS(73),
    },
    [101] = {
        [anon_sym_COMMA] = ACTIONS(329),
        [anon_sym_COLON] = ACTIONS(329),
        [anon_sym_for] = ACTIONS(329),
        [anon_sym_in] = ACTIONS(329),
        [anon_sym_as] = ACTIONS(329),
        [anon_sym_LPAREN] = ACTIONS(329),
        [anon_sym_RPAREN] = ACTIONS(329),
        [anon_sym_STAR] = ACTIONS(331),
        [anon_sym_PLUS] = ACTIONS(329),
        [anon_sym_DASH] = ACTIONS(329),
        [anon_sym_SLASH] = ACTIONS(329),
        [anon_sym_STAR_STAR] = ACTIONS(329),
        [anon_sym_PIPE] = ACTIONS(329),
        [anon_sym_AMP] = ACTIONS(329),
        [anon_sym_CARET] = ACTIONS(329),
        [anon_sym_LT_LT] = ACTIONS(329),
        [anon_sym_GT_GT] = ACTIONS(329),
        [anon_sym_LBRACK] = ACTIONS(329),
        [anon_sym_RBRACK] = ACTIONS(329),
        [anon_sym_RBRACE] = ACTIONS(329),
        [sym_comment] = ACTIONS(73),
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
        [anon_sym_STAR_STAR] = ACTIONS(209),
        [anon_sym_LBRACK] = ACTIONS(117),
        [anon_sym_LBRACE] = ACTIONS(119),
        [sym_number] = ACTIONS(121),
        [sym_identifier] = ACTIONS(211),
        [sym_comment] = ACTIONS(73),
    },
    [103] = {
        [anon_sym_COMMA] = ACTIONS(333),
        [anon_sym_RPAREN] = ACTIONS(293),
        [sym_comment] = ACTIONS(73),
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
        [anon_sym_STAR_STAR] = ACTIONS(209),
        [anon_sym_LBRACK] = ACTIONS(117),
        [anon_sym_LBRACE] = ACTIONS(119),
        [sym_number] = ACTIONS(121),
        [sym_identifier] = ACTIONS(211),
        [sym_comment] = ACTIONS(73),
    },
    [105] = {
        [anon_sym_RPAREN] = ACTIONS(303),
        [sym_comment] = ACTIONS(73),
    },
    [106] = {
        [anon_sym_RPAREN] = ACTIONS(293),
        [anon_sym_STAR] = ACTIONS(335),
        [anon_sym_STAR_STAR] = ACTIONS(337),
        [anon_sym_LBRACK] = ACTIONS(337),
        [anon_sym_LBRACE] = ACTIONS(337),
        [sym_number] = ACTIONS(335),
        [sym_identifier] = ACTIONS(335),
        [sym_comment] = ACTIONS(73),
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
        [anon_sym_LBRACK] = ACTIONS(117),
        [anon_sym_LBRACE] = ACTIONS(119),
        [sym_number] = ACTIONS(121),
        [sym_identifier] = ACTIONS(121),
        [sym_comment] = ACTIONS(73),
    },
    [108] = {
        [anon_sym_COMMA] = ACTIONS(339),
        [anon_sym_LPAREN] = ACTIONS(223),
        [anon_sym_RPAREN] = ACTIONS(339),
        [anon_sym_STAR] = ACTIONS(225),
        [anon_sym_PLUS] = ACTIONS(227),
        [anon_sym_DASH] = ACTIONS(227),
        [anon_sym_SLASH] = ACTIONS(229),
        [anon_sym_STAR_STAR] = ACTIONS(231),
        [anon_sym_PIPE] = ACTIONS(233),
        [anon_sym_AMP] = ACTIONS(235),
        [anon_sym_CARET] = ACTIONS(237),
        [anon_sym_LT_LT] = ACTIONS(227),
        [anon_sym_GT_GT] = ACTIONS(227),
        [anon_sym_LBRACK] = ACTIONS(239),
        [sym_comment] = ACTIONS(73),
    },
    [109] = {
        [anon_sym_COMMA] = ACTIONS(341),
        [anon_sym_COLON] = ACTIONS(341),
        [anon_sym_for] = ACTIONS(341),
        [anon_sym_in] = ACTIONS(341),
        [anon_sym_as] = ACTIONS(341),
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
        [anon_sym_LBRACK] = ACTIONS(341),
        [anon_sym_RBRACK] = ACTIONS(341),
        [anon_sym_RBRACE] = ACTIONS(341),
        [sym_comment] = ACTIONS(73),
    },
    [110] = {
        [aux_sym_print_statement_repeat1] = STATE(137),
        [anon_sym_COMMA] = ACTIONS(345),
        [anon_sym_COLON] = ACTIONS(347),
        [anon_sym_for] = ACTIONS(349),
        [anon_sym_LPAREN] = ACTIONS(223),
        [anon_sym_STAR] = ACTIONS(225),
        [anon_sym_PLUS] = ACTIONS(227),
        [anon_sym_DASH] = ACTIONS(227),
        [anon_sym_SLASH] = ACTIONS(229),
        [anon_sym_STAR_STAR] = ACTIONS(231),
        [anon_sym_PIPE] = ACTIONS(233),
        [anon_sym_AMP] = ACTIONS(235),
        [anon_sym_CARET] = ACTIONS(237),
        [anon_sym_LT_LT] = ACTIONS(227),
        [anon_sym_GT_GT] = ACTIONS(227),
        [anon_sym_LBRACK] = ACTIONS(239),
        [anon_sym_RBRACE] = ACTIONS(351),
        [sym_comment] = ACTIONS(73),
    },
    [111] = {
        [aux_sym_dictionary_repeat1] = STATE(115),
        [anon_sym_COMMA] = ACTIONS(353),
        [anon_sym_for] = ACTIONS(355),
        [anon_sym_RBRACE] = ACTIONS(357),
        [sym_comment] = ACTIONS(73),
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
        [anon_sym_LBRACK] = ACTIONS(117),
        [anon_sym_LBRACE] = ACTIONS(119),
        [anon_sym_RBRACE] = ACTIONS(359),
        [sym_number] = ACTIONS(121),
        [sym_identifier] = ACTIONS(121),
        [sym_comment] = ACTIONS(73),
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
        [anon_sym_LBRACK] = ACTIONS(117),
        [anon_sym_LBRACE] = ACTIONS(119),
        [sym_number] = ACTIONS(121),
        [sym_identifier] = ACTIONS(121),
        [sym_comment] = ACTIONS(73),
    },
    [114] = {
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
        [anon_sym_LBRACK] = ACTIONS(361),
        [anon_sym_RBRACK] = ACTIONS(361),
        [anon_sym_RBRACE] = ACTIONS(361),
        [sym_comment] = ACTIONS(73),
    },
    [115] = {
        [anon_sym_COMMA] = ACTIONS(365),
        [anon_sym_RBRACE] = ACTIONS(359),
        [sym_comment] = ACTIONS(73),
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
        [anon_sym_LBRACK] = ACTIONS(117),
        [anon_sym_LBRACE] = ACTIONS(119),
        [anon_sym_RBRACE] = ACTIONS(367),
        [sym_number] = ACTIONS(121),
        [sym_identifier] = ACTIONS(121),
        [sym_comment] = ACTIONS(73),
    },
    [117] = {
        [anon_sym_COMMA] = ACTIONS(369),
        [anon_sym_COLON] = ACTIONS(369),
        [anon_sym_for] = ACTIONS(369),
        [anon_sym_in] = ACTIONS(369),
        [anon_sym_as] = ACTIONS(369),
        [anon_sym_LPAREN] = ACTIONS(369),
        [anon_sym_RPAREN] = ACTIONS(369),
        [anon_sym_STAR] = ACTIONS(371),
        [anon_sym_PLUS] = ACTIONS(369),
        [anon_sym_DASH] = ACTIONS(369),
        [anon_sym_SLASH] = ACTIONS(369),
        [anon_sym_STAR_STAR] = ACTIONS(369),
        [anon_sym_PIPE] = ACTIONS(369),
        [anon_sym_AMP] = ACTIONS(369),
        [anon_sym_CARET] = ACTIONS(369),
        [anon_sym_LT_LT] = ACTIONS(369),
        [anon_sym_GT_GT] = ACTIONS(369),
        [anon_sym_LBRACK] = ACTIONS(369),
        [anon_sym_RBRACK] = ACTIONS(369),
        [anon_sym_RBRACE] = ACTIONS(369),
        [sym_comment] = ACTIONS(73),
    },
    [118] = {
        [anon_sym_COMMA] = ACTIONS(373),
        [anon_sym_COLON] = ACTIONS(373),
        [anon_sym_for] = ACTIONS(373),
        [anon_sym_in] = ACTIONS(373),
        [anon_sym_as] = ACTIONS(373),
        [anon_sym_LPAREN] = ACTIONS(373),
        [anon_sym_RPAREN] = ACTIONS(373),
        [anon_sym_STAR] = ACTIONS(375),
        [anon_sym_PLUS] = ACTIONS(373),
        [anon_sym_DASH] = ACTIONS(373),
        [anon_sym_SLASH] = ACTIONS(373),
        [anon_sym_STAR_STAR] = ACTIONS(373),
        [anon_sym_PIPE] = ACTIONS(373),
        [anon_sym_AMP] = ACTIONS(373),
        [anon_sym_CARET] = ACTIONS(373),
        [anon_sym_LT_LT] = ACTIONS(373),
        [anon_sym_GT_GT] = ACTIONS(373),
        [anon_sym_LBRACK] = ACTIONS(373),
        [anon_sym_RBRACK] = ACTIONS(373),
        [anon_sym_RBRACE] = ACTIONS(373),
        [sym_comment] = ACTIONS(73),
    },
    [119] = {
        [anon_sym_COLON] = ACTIONS(347),
        [anon_sym_LPAREN] = ACTIONS(223),
        [anon_sym_STAR] = ACTIONS(225),
        [anon_sym_PLUS] = ACTIONS(227),
        [anon_sym_DASH] = ACTIONS(227),
        [anon_sym_SLASH] = ACTIONS(229),
        [anon_sym_STAR_STAR] = ACTIONS(231),
        [anon_sym_PIPE] = ACTIONS(233),
        [anon_sym_AMP] = ACTIONS(235),
        [anon_sym_CARET] = ACTIONS(237),
        [anon_sym_LT_LT] = ACTIONS(227),
        [anon_sym_GT_GT] = ACTIONS(227),
        [anon_sym_LBRACK] = ACTIONS(239),
        [sym_comment] = ACTIONS(73),
    },
    [120] = {
        [anon_sym_COMMA] = ACTIONS(377),
        [anon_sym_RBRACE] = ACTIONS(377),
        [sym_comment] = ACTIONS(73),
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
        [anon_sym_LBRACK] = ACTIONS(117),
        [anon_sym_LBRACE] = ACTIONS(119),
        [sym_number] = ACTIONS(121),
        [sym_identifier] = ACTIONS(121),
        [sym_comment] = ACTIONS(73),
    },
    [122] = {
        [anon_sym_COMMA] = ACTIONS(379),
        [anon_sym_for] = ACTIONS(379),
        [anon_sym_LPAREN] = ACTIONS(223),
        [anon_sym_STAR] = ACTIONS(225),
        [anon_sym_PLUS] = ACTIONS(227),
        [anon_sym_DASH] = ACTIONS(227),
        [anon_sym_SLASH] = ACTIONS(229),
        [anon_sym_STAR_STAR] = ACTIONS(231),
        [anon_sym_PIPE] = ACTIONS(233),
        [anon_sym_AMP] = ACTIONS(235),
        [anon_sym_CARET] = ACTIONS(237),
        [anon_sym_LT_LT] = ACTIONS(227),
        [anon_sym_GT_GT] = ACTIONS(227),
        [anon_sym_LBRACK] = ACTIONS(239),
        [anon_sym_RBRACE] = ACTIONS(379),
        [sym_comment] = ACTIONS(73),
    },
    [123] = {
        [anon_sym_in] = ACTIONS(381),
        [sym_comment] = ACTIONS(73),
    },
    [124] = {
        [aux_sym_print_statement_repeat1] = STATE(126),
        [anon_sym_COMMA] = ACTIONS(383),
        [anon_sym_COLON] = ACTIONS(385),
        [anon_sym_in] = ACTIONS(385),
        [anon_sym_LPAREN] = ACTIONS(223),
        [anon_sym_RPAREN] = ACTIONS(385),
        [anon_sym_STAR] = ACTIONS(225),
        [anon_sym_PLUS] = ACTIONS(227),
        [anon_sym_DASH] = ACTIONS(227),
        [anon_sym_SLASH] = ACTIONS(229),
        [anon_sym_STAR_STAR] = ACTIONS(231),
        [anon_sym_PIPE] = ACTIONS(233),
        [anon_sym_AMP] = ACTIONS(235),
        [anon_sym_CARET] = ACTIONS(237),
        [anon_sym_LT_LT] = ACTIONS(227),
        [anon_sym_GT_GT] = ACTIONS(227),
        [anon_sym_LBRACK] = ACTIONS(239),
        [sym_comment] = ACTIONS(73),
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
        [anon_sym_LBRACK] = ACTIONS(117),
        [anon_sym_LBRACE] = ACTIONS(119),
        [sym_number] = ACTIONS(121),
        [sym_identifier] = ACTIONS(121),
        [sym_comment] = ACTIONS(73),
    },
    [126] = {
        [anon_sym_COMMA] = ACTIONS(387),
        [anon_sym_COLON] = ACTIONS(389),
        [anon_sym_in] = ACTIONS(389),
        [anon_sym_RPAREN] = ACTIONS(389),
        [sym_comment] = ACTIONS(73),
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
        [anon_sym_LBRACK] = ACTIONS(117),
        [anon_sym_LBRACE] = ACTIONS(119),
        [sym_number] = ACTIONS(121),
        [sym_identifier] = ACTIONS(121),
        [sym_comment] = ACTIONS(73),
    },
    [128] = {
        [anon_sym_COMMA] = ACTIONS(391),
        [anon_sym_COLON] = ACTIONS(391),
        [anon_sym_in] = ACTIONS(391),
        [anon_sym_LPAREN] = ACTIONS(223),
        [anon_sym_RPAREN] = ACTIONS(391),
        [anon_sym_STAR] = ACTIONS(225),
        [anon_sym_PLUS] = ACTIONS(227),
        [anon_sym_DASH] = ACTIONS(227),
        [anon_sym_SLASH] = ACTIONS(229),
        [anon_sym_STAR_STAR] = ACTIONS(231),
        [anon_sym_PIPE] = ACTIONS(233),
        [anon_sym_AMP] = ACTIONS(235),
        [anon_sym_CARET] = ACTIONS(237),
        [anon_sym_LT_LT] = ACTIONS(227),
        [anon_sym_GT_GT] = ACTIONS(227),
        [anon_sym_LBRACK] = ACTIONS(239),
        [anon_sym_RBRACK] = ACTIONS(391),
        [anon_sym_RBRACE] = ACTIONS(391),
        [sym_comment] = ACTIONS(73),
    },
    [129] = {
        [anon_sym_COMMA] = ACTIONS(393),
        [anon_sym_COLON] = ACTIONS(393),
        [anon_sym_in] = ACTIONS(393),
        [anon_sym_LPAREN] = ACTIONS(223),
        [anon_sym_RPAREN] = ACTIONS(393),
        [anon_sym_STAR] = ACTIONS(225),
        [anon_sym_PLUS] = ACTIONS(227),
        [anon_sym_DASH] = ACTIONS(227),
        [anon_sym_SLASH] = ACTIONS(229),
        [anon_sym_STAR_STAR] = ACTIONS(231),
        [anon_sym_PIPE] = ACTIONS(233),
        [anon_sym_AMP] = ACTIONS(235),
        [anon_sym_CARET] = ACTIONS(237),
        [anon_sym_LT_LT] = ACTIONS(227),
        [anon_sym_GT_GT] = ACTIONS(227),
        [anon_sym_LBRACK] = ACTIONS(239),
        [anon_sym_RBRACK] = ACTIONS(393),
        [anon_sym_RBRACE] = ACTIONS(393),
        [sym_comment] = ACTIONS(73),
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
        [anon_sym_LBRACK] = ACTIONS(117),
        [anon_sym_LBRACE] = ACTIONS(119),
        [sym_number] = ACTIONS(121),
        [sym_identifier] = ACTIONS(121),
        [sym_comment] = ACTIONS(73),
    },
    [131] = {
        [anon_sym_LPAREN] = ACTIONS(223),
        [anon_sym_STAR] = ACTIONS(225),
        [anon_sym_PLUS] = ACTIONS(227),
        [anon_sym_DASH] = ACTIONS(227),
        [anon_sym_SLASH] = ACTIONS(229),
        [anon_sym_STAR_STAR] = ACTIONS(231),
        [anon_sym_PIPE] = ACTIONS(233),
        [anon_sym_AMP] = ACTIONS(235),
        [anon_sym_CARET] = ACTIONS(237),
        [anon_sym_LT_LT] = ACTIONS(227),
        [anon_sym_GT_GT] = ACTIONS(227),
        [anon_sym_LBRACK] = ACTIONS(239),
        [anon_sym_RBRACE] = ACTIONS(395),
        [sym_comment] = ACTIONS(73),
    },
    [132] = {
        [anon_sym_COMMA] = ACTIONS(397),
        [anon_sym_COLON] = ACTIONS(397),
        [anon_sym_for] = ACTIONS(397),
        [anon_sym_in] = ACTIONS(397),
        [anon_sym_as] = ACTIONS(397),
        [anon_sym_LPAREN] = ACTIONS(397),
        [anon_sym_RPAREN] = ACTIONS(397),
        [anon_sym_STAR] = ACTIONS(399),
        [anon_sym_PLUS] = ACTIONS(397),
        [anon_sym_DASH] = ACTIONS(397),
        [anon_sym_SLASH] = ACTIONS(397),
        [anon_sym_STAR_STAR] = ACTIONS(397),
        [anon_sym_PIPE] = ACTIONS(397),
        [anon_sym_AMP] = ACTIONS(397),
        [anon_sym_CARET] = ACTIONS(397),
        [anon_sym_LT_LT] = ACTIONS(397),
        [anon_sym_GT_GT] = ACTIONS(397),
        [anon_sym_LBRACK] = ACTIONS(397),
        [anon_sym_RBRACK] = ACTIONS(397),
        [anon_sym_RBRACE] = ACTIONS(397),
        [sym_comment] = ACTIONS(73),
    },
    [133] = {
        [anon_sym_COMMA] = ACTIONS(401),
        [anon_sym_RBRACE] = ACTIONS(401),
        [sym_comment] = ACTIONS(73),
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
        [anon_sym_LBRACK] = ACTIONS(117),
        [anon_sym_LBRACE] = ACTIONS(119),
        [anon_sym_RBRACE] = ACTIONS(403),
        [sym_number] = ACTIONS(121),
        [sym_identifier] = ACTIONS(121),
        [sym_comment] = ACTIONS(73),
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
        [anon_sym_LBRACK] = ACTIONS(117),
        [anon_sym_LBRACE] = ACTIONS(119),
        [sym_number] = ACTIONS(121),
        [sym_identifier] = ACTIONS(121),
        [sym_comment] = ACTIONS(73),
    },
    [136] = {
        [anon_sym_COMMA] = ACTIONS(405),
        [anon_sym_COLON] = ACTIONS(405),
        [anon_sym_for] = ACTIONS(405),
        [anon_sym_in] = ACTIONS(405),
        [anon_sym_as] = ACTIONS(405),
        [anon_sym_LPAREN] = ACTIONS(405),
        [anon_sym_RPAREN] = ACTIONS(405),
        [anon_sym_STAR] = ACTIONS(407),
        [anon_sym_PLUS] = ACTIONS(405),
        [anon_sym_DASH] = ACTIONS(405),
        [anon_sym_SLASH] = ACTIONS(405),
        [anon_sym_STAR_STAR] = ACTIONS(405),
        [anon_sym_PIPE] = ACTIONS(405),
        [anon_sym_AMP] = ACTIONS(405),
        [anon_sym_CARET] = ACTIONS(405),
        [anon_sym_LT_LT] = ACTIONS(405),
        [anon_sym_GT_GT] = ACTIONS(405),
        [anon_sym_LBRACK] = ACTIONS(405),
        [anon_sym_RBRACK] = ACTIONS(405),
        [anon_sym_RBRACE] = ACTIONS(405),
        [sym_comment] = ACTIONS(73),
    },
    [137] = {
        [anon_sym_COMMA] = ACTIONS(409),
        [anon_sym_RBRACE] = ACTIONS(403),
        [sym_comment] = ACTIONS(73),
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
        [anon_sym_LBRACK] = ACTIONS(117),
        [anon_sym_LBRACE] = ACTIONS(119),
        [anon_sym_RBRACE] = ACTIONS(411),
        [sym_number] = ACTIONS(121),
        [sym_identifier] = ACTIONS(121),
        [sym_comment] = ACTIONS(73),
    },
    [139] = {
        [anon_sym_COMMA] = ACTIONS(413),
        [anon_sym_COLON] = ACTIONS(413),
        [anon_sym_for] = ACTIONS(413),
        [anon_sym_in] = ACTIONS(413),
        [anon_sym_as] = ACTIONS(413),
        [anon_sym_LPAREN] = ACTIONS(413),
        [anon_sym_RPAREN] = ACTIONS(413),
        [anon_sym_STAR] = ACTIONS(415),
        [anon_sym_PLUS] = ACTIONS(413),
        [anon_sym_DASH] = ACTIONS(413),
        [anon_sym_SLASH] = ACTIONS(413),
        [anon_sym_STAR_STAR] = ACTIONS(413),
        [anon_sym_PIPE] = ACTIONS(413),
        [anon_sym_AMP] = ACTIONS(413),
        [anon_sym_CARET] = ACTIONS(413),
        [anon_sym_LT_LT] = ACTIONS(413),
        [anon_sym_GT_GT] = ACTIONS(413),
        [anon_sym_LBRACK] = ACTIONS(413),
        [anon_sym_RBRACK] = ACTIONS(413),
        [anon_sym_RBRACE] = ACTIONS(413),
        [sym_comment] = ACTIONS(73),
    },
    [140] = {
        [anon_sym_COMMA] = ACTIONS(417),
        [anon_sym_COLON] = ACTIONS(417),
        [anon_sym_for] = ACTIONS(417),
        [anon_sym_in] = ACTIONS(417),
        [anon_sym_as] = ACTIONS(417),
        [anon_sym_LPAREN] = ACTIONS(417),
        [anon_sym_RPAREN] = ACTIONS(417),
        [anon_sym_STAR] = ACTIONS(419),
        [anon_sym_PLUS] = ACTIONS(417),
        [anon_sym_DASH] = ACTIONS(417),
        [anon_sym_SLASH] = ACTIONS(417),
        [anon_sym_STAR_STAR] = ACTIONS(417),
        [anon_sym_PIPE] = ACTIONS(417),
        [anon_sym_AMP] = ACTIONS(417),
        [anon_sym_CARET] = ACTIONS(417),
        [anon_sym_LT_LT] = ACTIONS(417),
        [anon_sym_GT_GT] = ACTIONS(417),
        [anon_sym_LBRACK] = ACTIONS(417),
        [anon_sym_RBRACK] = ACTIONS(417),
        [anon_sym_RBRACE] = ACTIONS(417),
        [sym_comment] = ACTIONS(73),
    },
    [141] = {
        [anon_sym_in] = ACTIONS(421),
        [sym_comment] = ACTIONS(73),
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
        [anon_sym_LBRACK] = ACTIONS(117),
        [anon_sym_LBRACE] = ACTIONS(119),
        [sym_number] = ACTIONS(121),
        [sym_identifier] = ACTIONS(121),
        [sym_comment] = ACTIONS(73),
    },
    [143] = {
        [anon_sym_LPAREN] = ACTIONS(223),
        [anon_sym_STAR] = ACTIONS(225),
        [anon_sym_PLUS] = ACTIONS(227),
        [anon_sym_DASH] = ACTIONS(227),
        [anon_sym_SLASH] = ACTIONS(229),
        [anon_sym_STAR_STAR] = ACTIONS(231),
        [anon_sym_PIPE] = ACTIONS(233),
        [anon_sym_AMP] = ACTIONS(235),
        [anon_sym_CARET] = ACTIONS(237),
        [anon_sym_LT_LT] = ACTIONS(227),
        [anon_sym_GT_GT] = ACTIONS(227),
        [anon_sym_LBRACK] = ACTIONS(239),
        [anon_sym_RBRACE] = ACTIONS(423),
        [sym_comment] = ACTIONS(73),
    },
    [144] = {
        [anon_sym_COMMA] = ACTIONS(425),
        [anon_sym_COLON] = ACTIONS(425),
        [anon_sym_for] = ACTIONS(425),
        [anon_sym_in] = ACTIONS(425),
        [anon_sym_as] = ACTIONS(425),
        [anon_sym_LPAREN] = ACTIONS(425),
        [anon_sym_RPAREN] = ACTIONS(425),
        [anon_sym_STAR] = ACTIONS(427),
        [anon_sym_PLUS] = ACTIONS(425),
        [anon_sym_DASH] = ACTIONS(425),
        [anon_sym_SLASH] = ACTIONS(425),
        [anon_sym_STAR_STAR] = ACTIONS(425),
        [anon_sym_PIPE] = ACTIONS(425),
        [anon_sym_AMP] = ACTIONS(425),
        [anon_sym_CARET] = ACTIONS(425),
        [anon_sym_LT_LT] = ACTIONS(425),
        [anon_sym_GT_GT] = ACTIONS(425),
        [anon_sym_LBRACK] = ACTIONS(425),
        [anon_sym_RBRACK] = ACTIONS(425),
        [anon_sym_RBRACE] = ACTIONS(425),
        [sym_comment] = ACTIONS(73),
    },
    [145] = {
        [anon_sym_COMMA] = ACTIONS(429),
        [anon_sym_COLON] = ACTIONS(429),
        [anon_sym_for] = ACTIONS(429),
        [anon_sym_in] = ACTIONS(429),
        [anon_sym_as] = ACTIONS(429),
        [anon_sym_LPAREN] = ACTIONS(429),
        [anon_sym_RPAREN] = ACTIONS(429),
        [anon_sym_STAR] = ACTIONS(431),
        [anon_sym_PLUS] = ACTIONS(429),
        [anon_sym_DASH] = ACTIONS(429),
        [anon_sym_SLASH] = ACTIONS(429),
        [anon_sym_STAR_STAR] = ACTIONS(429),
        [anon_sym_PIPE] = ACTIONS(429),
        [anon_sym_AMP] = ACTIONS(429),
        [anon_sym_CARET] = ACTIONS(429),
        [anon_sym_LT_LT] = ACTIONS(429),
        [anon_sym_GT_GT] = ACTIONS(429),
        [anon_sym_LBRACK] = ACTIONS(429),
        [anon_sym_RBRACK] = ACTIONS(429),
        [anon_sym_RBRACE] = ACTIONS(429),
        [sym_comment] = ACTIONS(73),
    },
    [146] = {
        [aux_sym_print_statement_repeat1] = STATE(150),
        [anon_sym_COMMA] = ACTIONS(433),
        [anon_sym_for] = ACTIONS(435),
        [anon_sym_LPAREN] = ACTIONS(223),
        [anon_sym_STAR] = ACTIONS(225),
        [anon_sym_PLUS] = ACTIONS(227),
        [anon_sym_DASH] = ACTIONS(227),
        [anon_sym_SLASH] = ACTIONS(229),
        [anon_sym_STAR_STAR] = ACTIONS(231),
        [anon_sym_PIPE] = ACTIONS(233),
        [anon_sym_AMP] = ACTIONS(235),
        [anon_sym_CARET] = ACTIONS(237),
        [anon_sym_LT_LT] = ACTIONS(227),
        [anon_sym_GT_GT] = ACTIONS(227),
        [anon_sym_LBRACK] = ACTIONS(239),
        [anon_sym_RBRACK] = ACTIONS(437),
        [sym_comment] = ACTIONS(73),
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
        [anon_sym_LBRACK] = ACTIONS(117),
        [anon_sym_RBRACK] = ACTIONS(439),
        [anon_sym_LBRACE] = ACTIONS(119),
        [sym_number] = ACTIONS(121),
        [sym_identifier] = ACTIONS(121),
        [sym_comment] = ACTIONS(73),
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
        [anon_sym_LBRACK] = ACTIONS(117),
        [anon_sym_LBRACE] = ACTIONS(119),
        [sym_number] = ACTIONS(121),
        [sym_identifier] = ACTIONS(121),
        [sym_comment] = ACTIONS(73),
    },
    [149] = {
        [anon_sym_COMMA] = ACTIONS(441),
        [anon_sym_COLON] = ACTIONS(441),
        [anon_sym_for] = ACTIONS(441),
        [anon_sym_in] = ACTIONS(441),
        [anon_sym_as] = ACTIONS(441),
        [anon_sym_LPAREN] = ACTIONS(441),
        [anon_sym_RPAREN] = ACTIONS(441),
        [anon_sym_STAR] = ACTIONS(443),
        [anon_sym_PLUS] = ACTIONS(441),
        [anon_sym_DASH] = ACTIONS(441),
        [anon_sym_SLASH] = ACTIONS(441),
        [anon_sym_STAR_STAR] = ACTIONS(441),
        [anon_sym_PIPE] = ACTIONS(441),
        [anon_sym_AMP] = ACTIONS(441),
        [anon_sym_CARET] = ACTIONS(441),
        [anon_sym_LT_LT] = ACTIONS(441),
        [anon_sym_GT_GT] = ACTIONS(441),
        [anon_sym_LBRACK] = ACTIONS(441),
        [anon_sym_RBRACK] = ACTIONS(441),
        [anon_sym_RBRACE] = ACTIONS(441),
        [sym_comment] = ACTIONS(73),
    },
    [150] = {
        [anon_sym_COMMA] = ACTIONS(445),
        [anon_sym_RBRACK] = ACTIONS(439),
        [sym_comment] = ACTIONS(73),
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
        [anon_sym_LBRACK] = ACTIONS(117),
        [anon_sym_RBRACK] = ACTIONS(447),
        [anon_sym_LBRACE] = ACTIONS(119),
        [sym_number] = ACTIONS(121),
        [sym_identifier] = ACTIONS(121),
        [sym_comment] = ACTIONS(73),
    },
    [152] = {
        [anon_sym_COMMA] = ACTIONS(449),
        [anon_sym_COLON] = ACTIONS(449),
        [anon_sym_for] = ACTIONS(449),
        [anon_sym_in] = ACTIONS(449),
        [anon_sym_as] = ACTIONS(449),
        [anon_sym_LPAREN] = ACTIONS(449),
        [anon_sym_RPAREN] = ACTIONS(449),
        [anon_sym_STAR] = ACTIONS(451),
        [anon_sym_PLUS] = ACTIONS(449),
        [anon_sym_DASH] = ACTIONS(449),
        [anon_sym_SLASH] = ACTIONS(449),
        [anon_sym_STAR_STAR] = ACTIONS(449),
        [anon_sym_PIPE] = ACTIONS(449),
        [anon_sym_AMP] = ACTIONS(449),
        [anon_sym_CARET] = ACTIONS(449),
        [anon_sym_LT_LT] = ACTIONS(449),
        [anon_sym_GT_GT] = ACTIONS(449),
        [anon_sym_LBRACK] = ACTIONS(449),
        [anon_sym_RBRACK] = ACTIONS(449),
        [anon_sym_RBRACE] = ACTIONS(449),
        [sym_comment] = ACTIONS(73),
    },
    [153] = {
        [anon_sym_COMMA] = ACTIONS(453),
        [anon_sym_COLON] = ACTIONS(453),
        [anon_sym_for] = ACTIONS(453),
        [anon_sym_in] = ACTIONS(453),
        [anon_sym_as] = ACTIONS(453),
        [anon_sym_LPAREN] = ACTIONS(453),
        [anon_sym_RPAREN] = ACTIONS(453),
        [anon_sym_STAR] = ACTIONS(455),
        [anon_sym_PLUS] = ACTIONS(453),
        [anon_sym_DASH] = ACTIONS(453),
        [anon_sym_SLASH] = ACTIONS(453),
        [anon_sym_STAR_STAR] = ACTIONS(453),
        [anon_sym_PIPE] = ACTIONS(453),
        [anon_sym_AMP] = ACTIONS(453),
        [anon_sym_CARET] = ACTIONS(453),
        [anon_sym_LT_LT] = ACTIONS(453),
        [anon_sym_GT_GT] = ACTIONS(453),
        [anon_sym_LBRACK] = ACTIONS(453),
        [anon_sym_RBRACK] = ACTIONS(453),
        [anon_sym_RBRACE] = ACTIONS(453),
        [sym_comment] = ACTIONS(73),
    },
    [154] = {
        [anon_sym_in] = ACTIONS(457),
        [sym_comment] = ACTIONS(73),
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
        [anon_sym_LBRACK] = ACTIONS(117),
        [anon_sym_LBRACE] = ACTIONS(119),
        [sym_number] = ACTIONS(121),
        [sym_identifier] = ACTIONS(121),
        [sym_comment] = ACTIONS(73),
    },
    [156] = {
        [anon_sym_LPAREN] = ACTIONS(223),
        [anon_sym_STAR] = ACTIONS(225),
        [anon_sym_PLUS] = ACTIONS(227),
        [anon_sym_DASH] = ACTIONS(227),
        [anon_sym_SLASH] = ACTIONS(229),
        [anon_sym_STAR_STAR] = ACTIONS(231),
        [anon_sym_PIPE] = ACTIONS(233),
        [anon_sym_AMP] = ACTIONS(235),
        [anon_sym_CARET] = ACTIONS(237),
        [anon_sym_LT_LT] = ACTIONS(227),
        [anon_sym_GT_GT] = ACTIONS(227),
        [anon_sym_LBRACK] = ACTIONS(239),
        [anon_sym_RBRACK] = ACTIONS(459),
        [sym_comment] = ACTIONS(73),
    },
    [157] = {
        [anon_sym_COMMA] = ACTIONS(461),
        [anon_sym_COLON] = ACTIONS(461),
        [anon_sym_for] = ACTIONS(461),
        [anon_sym_in] = ACTIONS(461),
        [anon_sym_as] = ACTIONS(461),
        [anon_sym_LPAREN] = ACTIONS(461),
        [anon_sym_RPAREN] = ACTIONS(461),
        [anon_sym_STAR] = ACTIONS(463),
        [anon_sym_PLUS] = ACTIONS(461),
        [anon_sym_DASH] = ACTIONS(461),
        [anon_sym_SLASH] = ACTIONS(461),
        [anon_sym_STAR_STAR] = ACTIONS(461),
        [anon_sym_PIPE] = ACTIONS(461),
        [anon_sym_AMP] = ACTIONS(461),
        [anon_sym_CARET] = ACTIONS(461),
        [anon_sym_LT_LT] = ACTIONS(461),
        [anon_sym_GT_GT] = ACTIONS(461),
        [anon_sym_LBRACK] = ACTIONS(461),
        [anon_sym_RBRACK] = ACTIONS(461),
        [anon_sym_RBRACE] = ACTIONS(461),
        [sym_comment] = ACTIONS(73),
    },
    [158] = {
        [anon_sym_LPAREN] = ACTIONS(223),
        [anon_sym_RPAREN] = ACTIONS(465),
        [anon_sym_STAR] = ACTIONS(225),
        [anon_sym_PLUS] = ACTIONS(227),
        [anon_sym_DASH] = ACTIONS(227),
        [anon_sym_SLASH] = ACTIONS(229),
        [anon_sym_STAR_STAR] = ACTIONS(231),
        [anon_sym_PIPE] = ACTIONS(233),
        [anon_sym_AMP] = ACTIONS(235),
        [anon_sym_CARET] = ACTIONS(237),
        [anon_sym_LT_LT] = ACTIONS(227),
        [anon_sym_GT_GT] = ACTIONS(227),
        [anon_sym_LBRACK] = ACTIONS(239),
        [sym_comment] = ACTIONS(73),
    },
    [159] = {
        [anon_sym_COMMA] = ACTIONS(467),
        [anon_sym_LPAREN] = ACTIONS(223),
        [anon_sym_RPAREN] = ACTIONS(467),
        [anon_sym_STAR] = ACTIONS(225),
        [anon_sym_PLUS] = ACTIONS(227),
        [anon_sym_DASH] = ACTIONS(227),
        [anon_sym_SLASH] = ACTIONS(229),
        [anon_sym_STAR_STAR] = ACTIONS(231),
        [anon_sym_PIPE] = ACTIONS(233),
        [anon_sym_AMP] = ACTIONS(235),
        [anon_sym_CARET] = ACTIONS(237),
        [anon_sym_LT_LT] = ACTIONS(227),
        [anon_sym_GT_GT] = ACTIONS(227),
        [anon_sym_LBRACK] = ACTIONS(239),
        [sym_comment] = ACTIONS(73),
    },
    [160] = {
        [anon_sym_COMMA] = ACTIONS(279),
        [anon_sym_LPAREN] = ACTIONS(279),
        [anon_sym_STAR] = ACTIONS(165),
        [anon_sym_PLUS] = ACTIONS(279),
        [anon_sym_DASH] = ACTIONS(279),
        [anon_sym_SLASH] = ACTIONS(169),
        [anon_sym_STAR_STAR] = ACTIONS(171),
        [anon_sym_PIPE] = ACTIONS(279),
        [anon_sym_AMP] = ACTIONS(279),
        [anon_sym_CARET] = ACTIONS(279),
        [anon_sym_LT_LT] = ACTIONS(279),
        [anon_sym_GT_GT] = ACTIONS(279),
        [anon_sym_LBRACK] = ACTIONS(279),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(279),
    },
    [161] = {
        [anon_sym_COMMA] = ACTIONS(279),
        [anon_sym_LPAREN] = ACTIONS(279),
        [anon_sym_STAR] = ACTIONS(165),
        [anon_sym_PLUS] = ACTIONS(167),
        [anon_sym_DASH] = ACTIONS(167),
        [anon_sym_SLASH] = ACTIONS(169),
        [anon_sym_STAR_STAR] = ACTIONS(171),
        [anon_sym_PIPE] = ACTIONS(279),
        [anon_sym_AMP] = ACTIONS(279),
        [anon_sym_CARET] = ACTIONS(279),
        [anon_sym_LT_LT] = ACTIONS(167),
        [anon_sym_GT_GT] = ACTIONS(167),
        [anon_sym_LBRACK] = ACTIONS(279),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(279),
    },
    [162] = {
        [anon_sym_COMMA] = ACTIONS(279),
        [anon_sym_LPAREN] = ACTIONS(279),
        [anon_sym_STAR] = ACTIONS(165),
        [anon_sym_PLUS] = ACTIONS(167),
        [anon_sym_DASH] = ACTIONS(167),
        [anon_sym_SLASH] = ACTIONS(169),
        [anon_sym_STAR_STAR] = ACTIONS(171),
        [anon_sym_PIPE] = ACTIONS(279),
        [anon_sym_AMP] = ACTIONS(279),
        [anon_sym_CARET] = ACTIONS(177),
        [anon_sym_LT_LT] = ACTIONS(167),
        [anon_sym_GT_GT] = ACTIONS(167),
        [anon_sym_LBRACK] = ACTIONS(279),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(279),
    },
    [163] = {
        [anon_sym_COMMA] = ACTIONS(279),
        [anon_sym_LPAREN] = ACTIONS(279),
        [anon_sym_STAR] = ACTIONS(165),
        [anon_sym_PLUS] = ACTIONS(167),
        [anon_sym_DASH] = ACTIONS(167),
        [anon_sym_SLASH] = ACTIONS(169),
        [anon_sym_STAR_STAR] = ACTIONS(171),
        [anon_sym_PIPE] = ACTIONS(279),
        [anon_sym_AMP] = ACTIONS(175),
        [anon_sym_CARET] = ACTIONS(177),
        [anon_sym_LT_LT] = ACTIONS(167),
        [anon_sym_GT_GT] = ACTIONS(167),
        [anon_sym_LBRACK] = ACTIONS(279),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(279),
    },
    [164] = {
        [anon_sym_COMMA] = ACTIONS(279),
        [anon_sym_LPAREN] = ACTIONS(279),
        [anon_sym_STAR] = ACTIONS(281),
        [anon_sym_PLUS] = ACTIONS(279),
        [anon_sym_DASH] = ACTIONS(279),
        [anon_sym_SLASH] = ACTIONS(279),
        [anon_sym_STAR_STAR] = ACTIONS(279),
        [anon_sym_PIPE] = ACTIONS(279),
        [anon_sym_AMP] = ACTIONS(279),
        [anon_sym_CARET] = ACTIONS(279),
        [anon_sym_LT_LT] = ACTIONS(279),
        [anon_sym_GT_GT] = ACTIONS(279),
        [anon_sym_LBRACK] = ACTIONS(279),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(279),
    },
    [165] = {
        [anon_sym_COMMA] = ACTIONS(279),
        [anon_sym_LPAREN] = ACTIONS(279),
        [anon_sym_STAR] = ACTIONS(281),
        [anon_sym_PLUS] = ACTIONS(279),
        [anon_sym_DASH] = ACTIONS(279),
        [anon_sym_SLASH] = ACTIONS(279),
        [anon_sym_STAR_STAR] = ACTIONS(171),
        [anon_sym_PIPE] = ACTIONS(279),
        [anon_sym_AMP] = ACTIONS(279),
        [anon_sym_CARET] = ACTIONS(279),
        [anon_sym_LT_LT] = ACTIONS(279),
        [anon_sym_GT_GT] = ACTIONS(279),
        [anon_sym_LBRACK] = ACTIONS(279),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(279),
    },
    [166] = {
        [anon_sym_COMMA] = ACTIONS(469),
        [anon_sym_LPAREN] = ACTIONS(223),
        [anon_sym_RPAREN] = ACTIONS(471),
        [anon_sym_STAR] = ACTIONS(225),
        [anon_sym_PLUS] = ACTIONS(227),
        [anon_sym_DASH] = ACTIONS(227),
        [anon_sym_SLASH] = ACTIONS(229),
        [anon_sym_STAR_STAR] = ACTIONS(231),
        [anon_sym_PIPE] = ACTIONS(233),
        [anon_sym_AMP] = ACTIONS(235),
        [anon_sym_CARET] = ACTIONS(237),
        [anon_sym_LT_LT] = ACTIONS(227),
        [anon_sym_GT_GT] = ACTIONS(227),
        [anon_sym_LBRACK] = ACTIONS(239),
        [sym_comment] = ACTIONS(73),
    },
    [167] = {
        [anon_sym_COMMA] = ACTIONS(469),
        [anon_sym_RPAREN] = ACTIONS(471),
        [sym_comment] = ACTIONS(73),
    },
    [168] = {
        [aux_sym_call_repeat2] = STATE(187),
        [anon_sym_COMMA] = ACTIONS(473),
        [anon_sym_RPAREN] = ACTIONS(471),
        [sym_comment] = ACTIONS(73),
    },
    [169] = {
        [anon_sym_RPAREN] = ACTIONS(471),
        [sym_comment] = ACTIONS(73),
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
        [anon_sym_STAR] = ACTIONS(207),
        [anon_sym_STAR_STAR] = ACTIONS(209),
        [anon_sym_LBRACK] = ACTIONS(117),
        [anon_sym_LBRACE] = ACTIONS(119),
        [sym_number] = ACTIONS(121),
        [sym_identifier] = ACTIONS(211),
        [sym_comment] = ACTIONS(73),
    },
    [171] = {
        [anon_sym_COMMA] = ACTIONS(475),
        [anon_sym_LPAREN] = ACTIONS(223),
        [anon_sym_RPAREN] = ACTIONS(477),
        [anon_sym_STAR] = ACTIONS(225),
        [anon_sym_PLUS] = ACTIONS(227),
        [anon_sym_DASH] = ACTIONS(227),
        [anon_sym_SLASH] = ACTIONS(229),
        [anon_sym_STAR_STAR] = ACTIONS(231),
        [anon_sym_PIPE] = ACTIONS(233),
        [anon_sym_AMP] = ACTIONS(235),
        [anon_sym_CARET] = ACTIONS(237),
        [anon_sym_LT_LT] = ACTIONS(227),
        [anon_sym_GT_GT] = ACTIONS(227),
        [anon_sym_LBRACK] = ACTIONS(239),
        [sym_comment] = ACTIONS(73),
    },
    [172] = {
        [anon_sym_COMMA] = ACTIONS(475),
        [anon_sym_RPAREN] = ACTIONS(477),
        [sym_comment] = ACTIONS(73),
    },
    [173] = {
        [aux_sym_call_repeat2] = STATE(177),
        [anon_sym_COMMA] = ACTIONS(479),
        [anon_sym_RPAREN] = ACTIONS(477),
        [sym_comment] = ACTIONS(73),
    },
    [174] = {
        [anon_sym_RPAREN] = ACTIONS(477),
        [sym_comment] = ACTIONS(73),
    },
    [175] = {
        [anon_sym_COMMA] = ACTIONS(297),
        [anon_sym_COLON] = ACTIONS(297),
        [anon_sym_for] = ACTIONS(297),
        [anon_sym_in] = ACTIONS(297),
        [anon_sym_as] = ACTIONS(297),
        [anon_sym_LPAREN] = ACTIONS(297),
        [anon_sym_RPAREN] = ACTIONS(297),
        [anon_sym_STAR] = ACTIONS(299),
        [anon_sym_PLUS] = ACTIONS(297),
        [anon_sym_DASH] = ACTIONS(297),
        [anon_sym_SLASH] = ACTIONS(297),
        [anon_sym_STAR_STAR] = ACTIONS(297),
        [anon_sym_PIPE] = ACTIONS(297),
        [anon_sym_AMP] = ACTIONS(297),
        [anon_sym_CARET] = ACTIONS(297),
        [anon_sym_LT_LT] = ACTIONS(297),
        [anon_sym_GT_GT] = ACTIONS(297),
        [anon_sym_LBRACK] = ACTIONS(297),
        [anon_sym_RBRACK] = ACTIONS(297),
        [anon_sym_RBRACE] = ACTIONS(297),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(297),
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
        [anon_sym_STAR_STAR] = ACTIONS(209),
        [anon_sym_LBRACK] = ACTIONS(117),
        [anon_sym_LBRACE] = ACTIONS(119),
        [sym_number] = ACTIONS(121),
        [sym_identifier] = ACTIONS(211),
        [sym_comment] = ACTIONS(73),
    },
    [177] = {
        [anon_sym_COMMA] = ACTIONS(481),
        [anon_sym_RPAREN] = ACTIONS(483),
        [sym_comment] = ACTIONS(73),
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
        [anon_sym_STAR_STAR] = ACTIONS(209),
        [anon_sym_LBRACK] = ACTIONS(117),
        [anon_sym_LBRACE] = ACTIONS(119),
        [sym_number] = ACTIONS(121),
        [sym_identifier] = ACTIONS(211),
        [sym_comment] = ACTIONS(73),
    },
    [179] = {
        [anon_sym_COMMA] = ACTIONS(305),
        [anon_sym_COLON] = ACTIONS(305),
        [anon_sym_for] = ACTIONS(305),
        [anon_sym_in] = ACTIONS(305),
        [anon_sym_as] = ACTIONS(305),
        [anon_sym_LPAREN] = ACTIONS(305),
        [anon_sym_RPAREN] = ACTIONS(305),
        [anon_sym_STAR] = ACTIONS(307),
        [anon_sym_PLUS] = ACTIONS(305),
        [anon_sym_DASH] = ACTIONS(305),
        [anon_sym_SLASH] = ACTIONS(305),
        [anon_sym_STAR_STAR] = ACTIONS(305),
        [anon_sym_PIPE] = ACTIONS(305),
        [anon_sym_AMP] = ACTIONS(305),
        [anon_sym_CARET] = ACTIONS(305),
        [anon_sym_LT_LT] = ACTIONS(305),
        [anon_sym_GT_GT] = ACTIONS(305),
        [anon_sym_LBRACK] = ACTIONS(305),
        [anon_sym_RBRACK] = ACTIONS(305),
        [anon_sym_RBRACE] = ACTIONS(305),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(305),
    },
    [180] = {
        [anon_sym_RPAREN] = ACTIONS(485),
        [sym_comment] = ACTIONS(73),
    },
    [181] = {
        [anon_sym_COMMA] = ACTIONS(313),
        [anon_sym_COLON] = ACTIONS(313),
        [anon_sym_for] = ACTIONS(313),
        [anon_sym_in] = ACTIONS(313),
        [anon_sym_as] = ACTIONS(313),
        [anon_sym_LPAREN] = ACTIONS(313),
        [anon_sym_RPAREN] = ACTIONS(313),
        [anon_sym_STAR] = ACTIONS(315),
        [anon_sym_PLUS] = ACTIONS(313),
        [anon_sym_DASH] = ACTIONS(313),
        [anon_sym_SLASH] = ACTIONS(313),
        [anon_sym_STAR_STAR] = ACTIONS(313),
        [anon_sym_PIPE] = ACTIONS(313),
        [anon_sym_AMP] = ACTIONS(313),
        [anon_sym_CARET] = ACTIONS(313),
        [anon_sym_LT_LT] = ACTIONS(313),
        [anon_sym_GT_GT] = ACTIONS(313),
        [anon_sym_LBRACK] = ACTIONS(313),
        [anon_sym_RBRACK] = ACTIONS(313),
        [anon_sym_RBRACE] = ACTIONS(313),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(313),
    },
    [182] = {
        [anon_sym_RPAREN] = ACTIONS(487),
        [sym_comment] = ACTIONS(73),
    },
    [183] = {
        [anon_sym_COMMA] = ACTIONS(321),
        [anon_sym_COLON] = ACTIONS(321),
        [anon_sym_for] = ACTIONS(321),
        [anon_sym_in] = ACTIONS(321),
        [anon_sym_as] = ACTIONS(321),
        [anon_sym_LPAREN] = ACTIONS(321),
        [anon_sym_RPAREN] = ACTIONS(321),
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
        [anon_sym_LBRACK] = ACTIONS(321),
        [anon_sym_RBRACK] = ACTIONS(321),
        [anon_sym_RBRACE] = ACTIONS(321),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(321),
    },
    [184] = {
        [anon_sym_RPAREN] = ACTIONS(483),
        [anon_sym_STAR] = ACTIONS(325),
        [anon_sym_STAR_STAR] = ACTIONS(327),
        [anon_sym_LBRACK] = ACTIONS(327),
        [anon_sym_LBRACE] = ACTIONS(327),
        [sym_number] = ACTIONS(325),
        [sym_identifier] = ACTIONS(325),
        [sym_comment] = ACTIONS(73),
    },
    [185] = {
        [anon_sym_COMMA] = ACTIONS(329),
        [anon_sym_COLON] = ACTIONS(329),
        [anon_sym_for] = ACTIONS(329),
        [anon_sym_in] = ACTIONS(329),
        [anon_sym_as] = ACTIONS(329),
        [anon_sym_LPAREN] = ACTIONS(329),
        [anon_sym_RPAREN] = ACTIONS(329),
        [anon_sym_STAR] = ACTIONS(331),
        [anon_sym_PLUS] = ACTIONS(329),
        [anon_sym_DASH] = ACTIONS(329),
        [anon_sym_SLASH] = ACTIONS(329),
        [anon_sym_STAR_STAR] = ACTIONS(329),
        [anon_sym_PIPE] = ACTIONS(329),
        [anon_sym_AMP] = ACTIONS(329),
        [anon_sym_CARET] = ACTIONS(329),
        [anon_sym_LT_LT] = ACTIONS(329),
        [anon_sym_GT_GT] = ACTIONS(329),
        [anon_sym_LBRACK] = ACTIONS(329),
        [anon_sym_RBRACK] = ACTIONS(329),
        [anon_sym_RBRACE] = ACTIONS(329),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(329),
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
        [anon_sym_STAR_STAR] = ACTIONS(209),
        [anon_sym_LBRACK] = ACTIONS(117),
        [anon_sym_LBRACE] = ACTIONS(119),
        [sym_number] = ACTIONS(121),
        [sym_identifier] = ACTIONS(211),
        [sym_comment] = ACTIONS(73),
    },
    [187] = {
        [anon_sym_COMMA] = ACTIONS(489),
        [anon_sym_RPAREN] = ACTIONS(477),
        [sym_comment] = ACTIONS(73),
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
        [anon_sym_STAR_STAR] = ACTIONS(209),
        [anon_sym_LBRACK] = ACTIONS(117),
        [anon_sym_LBRACE] = ACTIONS(119),
        [sym_number] = ACTIONS(121),
        [sym_identifier] = ACTIONS(211),
        [sym_comment] = ACTIONS(73),
    },
    [189] = {
        [anon_sym_RPAREN] = ACTIONS(483),
        [sym_comment] = ACTIONS(73),
    },
    [190] = {
        [anon_sym_RPAREN] = ACTIONS(477),
        [anon_sym_STAR] = ACTIONS(335),
        [anon_sym_STAR_STAR] = ACTIONS(337),
        [anon_sym_LBRACK] = ACTIONS(337),
        [anon_sym_LBRACE] = ACTIONS(337),
        [sym_number] = ACTIONS(335),
        [sym_identifier] = ACTIONS(335),
        [sym_comment] = ACTIONS(73),
    },
    [191] = {
        [ts_builtin_sym_end] = ACTIONS(491),
        [anon_sym_SEMI] = ACTIONS(491),
        [anon_sym_print] = ACTIONS(493),
        [anon_sym_return] = ACTIONS(493),
        [anon_sym_del] = ACTIONS(493),
        [sym_pass_statement] = ACTIONS(493),
        [sym_break_statement] = ACTIONS(493),
        [sym_continue_statement] = ACTIONS(493),
        [anon_sym_if] = ACTIONS(493),
        [anon_sym_for] = ACTIONS(493),
        [anon_sym_while] = ACTIONS(493),
        [anon_sym_try] = ACTIONS(493),
        [anon_sym_with] = ACTIONS(493),
        [anon_sym_def] = ACTIONS(493),
        [anon_sym_class] = ACTIONS(493),
        [anon_sym_AT] = ACTIONS(491),
        [anon_sym_LBRACK] = ACTIONS(491),
        [anon_sym_LBRACE] = ACTIONS(491),
        [sym_number] = ACTIONS(493),
        [sym_identifier] = ACTIONS(495),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(491),
    },
    [192] = {
        [anon_sym_COMMA] = ACTIONS(341),
        [anon_sym_COLON] = ACTIONS(341),
        [anon_sym_for] = ACTIONS(341),
        [anon_sym_in] = ACTIONS(341),
        [anon_sym_as] = ACTIONS(341),
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
        [anon_sym_LBRACK] = ACTIONS(341),
        [anon_sym_RBRACK] = ACTIONS(341),
        [anon_sym_RBRACE] = ACTIONS(341),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(341),
    },
    [193] = {
        [aux_sym_print_statement_repeat1] = STATE(209),
        [anon_sym_COMMA] = ACTIONS(497),
        [anon_sym_COLON] = ACTIONS(347),
        [anon_sym_for] = ACTIONS(499),
        [anon_sym_LPAREN] = ACTIONS(223),
        [anon_sym_STAR] = ACTIONS(225),
        [anon_sym_PLUS] = ACTIONS(227),
        [anon_sym_DASH] = ACTIONS(227),
        [anon_sym_SLASH] = ACTIONS(229),
        [anon_sym_STAR_STAR] = ACTIONS(231),
        [anon_sym_PIPE] = ACTIONS(233),
        [anon_sym_AMP] = ACTIONS(235),
        [anon_sym_CARET] = ACTIONS(237),
        [anon_sym_LT_LT] = ACTIONS(227),
        [anon_sym_GT_GT] = ACTIONS(227),
        [anon_sym_LBRACK] = ACTIONS(239),
        [anon_sym_RBRACE] = ACTIONS(501),
        [sym_comment] = ACTIONS(73),
    },
    [194] = {
        [aux_sym_dictionary_repeat1] = STATE(198),
        [anon_sym_COMMA] = ACTIONS(503),
        [anon_sym_for] = ACTIONS(505),
        [anon_sym_RBRACE] = ACTIONS(507),
        [sym_comment] = ACTIONS(73),
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
        [anon_sym_LBRACK] = ACTIONS(117),
        [anon_sym_LBRACE] = ACTIONS(119),
        [anon_sym_RBRACE] = ACTIONS(509),
        [sym_number] = ACTIONS(121),
        [sym_identifier] = ACTIONS(121),
        [sym_comment] = ACTIONS(73),
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
        [anon_sym_LBRACK] = ACTIONS(117),
        [anon_sym_LBRACE] = ACTIONS(119),
        [sym_number] = ACTIONS(121),
        [sym_identifier] = ACTIONS(121),
        [sym_comment] = ACTIONS(73),
    },
    [197] = {
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
        [anon_sym_LBRACK] = ACTIONS(361),
        [anon_sym_RBRACK] = ACTIONS(361),
        [anon_sym_RBRACE] = ACTIONS(361),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(361),
    },
    [198] = {
        [anon_sym_COMMA] = ACTIONS(511),
        [anon_sym_RBRACE] = ACTIONS(509),
        [sym_comment] = ACTIONS(73),
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
        [anon_sym_LBRACK] = ACTIONS(117),
        [anon_sym_LBRACE] = ACTIONS(119),
        [anon_sym_RBRACE] = ACTIONS(513),
        [sym_number] = ACTIONS(121),
        [sym_identifier] = ACTIONS(121),
        [sym_comment] = ACTIONS(73),
    },
    [200] = {
        [anon_sym_COMMA] = ACTIONS(369),
        [anon_sym_COLON] = ACTIONS(369),
        [anon_sym_for] = ACTIONS(369),
        [anon_sym_in] = ACTIONS(369),
        [anon_sym_as] = ACTIONS(369),
        [anon_sym_LPAREN] = ACTIONS(369),
        [anon_sym_RPAREN] = ACTIONS(369),
        [anon_sym_STAR] = ACTIONS(371),
        [anon_sym_PLUS] = ACTIONS(369),
        [anon_sym_DASH] = ACTIONS(369),
        [anon_sym_SLASH] = ACTIONS(369),
        [anon_sym_STAR_STAR] = ACTIONS(369),
        [anon_sym_PIPE] = ACTIONS(369),
        [anon_sym_AMP] = ACTIONS(369),
        [anon_sym_CARET] = ACTIONS(369),
        [anon_sym_LT_LT] = ACTIONS(369),
        [anon_sym_GT_GT] = ACTIONS(369),
        [anon_sym_LBRACK] = ACTIONS(369),
        [anon_sym_RBRACK] = ACTIONS(369),
        [anon_sym_RBRACE] = ACTIONS(369),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(369),
    },
    [201] = {
        [anon_sym_COMMA] = ACTIONS(373),
        [anon_sym_COLON] = ACTIONS(373),
        [anon_sym_for] = ACTIONS(373),
        [anon_sym_in] = ACTIONS(373),
        [anon_sym_as] = ACTIONS(373),
        [anon_sym_LPAREN] = ACTIONS(373),
        [anon_sym_RPAREN] = ACTIONS(373),
        [anon_sym_STAR] = ACTIONS(375),
        [anon_sym_PLUS] = ACTIONS(373),
        [anon_sym_DASH] = ACTIONS(373),
        [anon_sym_SLASH] = ACTIONS(373),
        [anon_sym_STAR_STAR] = ACTIONS(373),
        [anon_sym_PIPE] = ACTIONS(373),
        [anon_sym_AMP] = ACTIONS(373),
        [anon_sym_CARET] = ACTIONS(373),
        [anon_sym_LT_LT] = ACTIONS(373),
        [anon_sym_GT_GT] = ACTIONS(373),
        [anon_sym_LBRACK] = ACTIONS(373),
        [anon_sym_RBRACK] = ACTIONS(373),
        [anon_sym_RBRACE] = ACTIONS(373),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(373),
    },
    [202] = {
        [anon_sym_in] = ACTIONS(515),
        [sym_comment] = ACTIONS(73),
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
        [anon_sym_LBRACK] = ACTIONS(117),
        [anon_sym_LBRACE] = ACTIONS(119),
        [sym_number] = ACTIONS(121),
        [sym_identifier] = ACTIONS(121),
        [sym_comment] = ACTIONS(73),
    },
    [204] = {
        [anon_sym_LPAREN] = ACTIONS(223),
        [anon_sym_STAR] = ACTIONS(225),
        [anon_sym_PLUS] = ACTIONS(227),
        [anon_sym_DASH] = ACTIONS(227),
        [anon_sym_SLASH] = ACTIONS(229),
        [anon_sym_STAR_STAR] = ACTIONS(231),
        [anon_sym_PIPE] = ACTIONS(233),
        [anon_sym_AMP] = ACTIONS(235),
        [anon_sym_CARET] = ACTIONS(237),
        [anon_sym_LT_LT] = ACTIONS(227),
        [anon_sym_GT_GT] = ACTIONS(227),
        [anon_sym_LBRACK] = ACTIONS(239),
        [anon_sym_RBRACE] = ACTIONS(517),
        [sym_comment] = ACTIONS(73),
    },
    [205] = {
        [anon_sym_COMMA] = ACTIONS(397),
        [anon_sym_COLON] = ACTIONS(397),
        [anon_sym_for] = ACTIONS(397),
        [anon_sym_in] = ACTIONS(397),
        [anon_sym_as] = ACTIONS(397),
        [anon_sym_LPAREN] = ACTIONS(397),
        [anon_sym_RPAREN] = ACTIONS(397),
        [anon_sym_STAR] = ACTIONS(399),
        [anon_sym_PLUS] = ACTIONS(397),
        [anon_sym_DASH] = ACTIONS(397),
        [anon_sym_SLASH] = ACTIONS(397),
        [anon_sym_STAR_STAR] = ACTIONS(397),
        [anon_sym_PIPE] = ACTIONS(397),
        [anon_sym_AMP] = ACTIONS(397),
        [anon_sym_CARET] = ACTIONS(397),
        [anon_sym_LT_LT] = ACTIONS(397),
        [anon_sym_GT_GT] = ACTIONS(397),
        [anon_sym_LBRACK] = ACTIONS(397),
        [anon_sym_RBRACK] = ACTIONS(397),
        [anon_sym_RBRACE] = ACTIONS(397),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(397),
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
        [anon_sym_LBRACK] = ACTIONS(117),
        [anon_sym_LBRACE] = ACTIONS(119),
        [anon_sym_RBRACE] = ACTIONS(519),
        [sym_number] = ACTIONS(121),
        [sym_identifier] = ACTIONS(121),
        [sym_comment] = ACTIONS(73),
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
        [anon_sym_LBRACK] = ACTIONS(117),
        [anon_sym_LBRACE] = ACTIONS(119),
        [sym_number] = ACTIONS(121),
        [sym_identifier] = ACTIONS(121),
        [sym_comment] = ACTIONS(73),
    },
    [208] = {
        [anon_sym_COMMA] = ACTIONS(405),
        [anon_sym_COLON] = ACTIONS(405),
        [anon_sym_for] = ACTIONS(405),
        [anon_sym_in] = ACTIONS(405),
        [anon_sym_as] = ACTIONS(405),
        [anon_sym_LPAREN] = ACTIONS(405),
        [anon_sym_RPAREN] = ACTIONS(405),
        [anon_sym_STAR] = ACTIONS(407),
        [anon_sym_PLUS] = ACTIONS(405),
        [anon_sym_DASH] = ACTIONS(405),
        [anon_sym_SLASH] = ACTIONS(405),
        [anon_sym_STAR_STAR] = ACTIONS(405),
        [anon_sym_PIPE] = ACTIONS(405),
        [anon_sym_AMP] = ACTIONS(405),
        [anon_sym_CARET] = ACTIONS(405),
        [anon_sym_LT_LT] = ACTIONS(405),
        [anon_sym_GT_GT] = ACTIONS(405),
        [anon_sym_LBRACK] = ACTIONS(405),
        [anon_sym_RBRACK] = ACTIONS(405),
        [anon_sym_RBRACE] = ACTIONS(405),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(405),
    },
    [209] = {
        [anon_sym_COMMA] = ACTIONS(521),
        [anon_sym_RBRACE] = ACTIONS(519),
        [sym_comment] = ACTIONS(73),
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
        [anon_sym_LBRACK] = ACTIONS(117),
        [anon_sym_LBRACE] = ACTIONS(119),
        [anon_sym_RBRACE] = ACTIONS(523),
        [sym_number] = ACTIONS(121),
        [sym_identifier] = ACTIONS(121),
        [sym_comment] = ACTIONS(73),
    },
    [211] = {
        [anon_sym_COMMA] = ACTIONS(413),
        [anon_sym_COLON] = ACTIONS(413),
        [anon_sym_for] = ACTIONS(413),
        [anon_sym_in] = ACTIONS(413),
        [anon_sym_as] = ACTIONS(413),
        [anon_sym_LPAREN] = ACTIONS(413),
        [anon_sym_RPAREN] = ACTIONS(413),
        [anon_sym_STAR] = ACTIONS(415),
        [anon_sym_PLUS] = ACTIONS(413),
        [anon_sym_DASH] = ACTIONS(413),
        [anon_sym_SLASH] = ACTIONS(413),
        [anon_sym_STAR_STAR] = ACTIONS(413),
        [anon_sym_PIPE] = ACTIONS(413),
        [anon_sym_AMP] = ACTIONS(413),
        [anon_sym_CARET] = ACTIONS(413),
        [anon_sym_LT_LT] = ACTIONS(413),
        [anon_sym_GT_GT] = ACTIONS(413),
        [anon_sym_LBRACK] = ACTIONS(413),
        [anon_sym_RBRACK] = ACTIONS(413),
        [anon_sym_RBRACE] = ACTIONS(413),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(413),
    },
    [212] = {
        [anon_sym_COMMA] = ACTIONS(417),
        [anon_sym_COLON] = ACTIONS(417),
        [anon_sym_for] = ACTIONS(417),
        [anon_sym_in] = ACTIONS(417),
        [anon_sym_as] = ACTIONS(417),
        [anon_sym_LPAREN] = ACTIONS(417),
        [anon_sym_RPAREN] = ACTIONS(417),
        [anon_sym_STAR] = ACTIONS(419),
        [anon_sym_PLUS] = ACTIONS(417),
        [anon_sym_DASH] = ACTIONS(417),
        [anon_sym_SLASH] = ACTIONS(417),
        [anon_sym_STAR_STAR] = ACTIONS(417),
        [anon_sym_PIPE] = ACTIONS(417),
        [anon_sym_AMP] = ACTIONS(417),
        [anon_sym_CARET] = ACTIONS(417),
        [anon_sym_LT_LT] = ACTIONS(417),
        [anon_sym_GT_GT] = ACTIONS(417),
        [anon_sym_LBRACK] = ACTIONS(417),
        [anon_sym_RBRACK] = ACTIONS(417),
        [anon_sym_RBRACE] = ACTIONS(417),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(417),
    },
    [213] = {
        [anon_sym_in] = ACTIONS(525),
        [sym_comment] = ACTIONS(73),
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
        [anon_sym_LBRACK] = ACTIONS(117),
        [anon_sym_LBRACE] = ACTIONS(119),
        [sym_number] = ACTIONS(121),
        [sym_identifier] = ACTIONS(121),
        [sym_comment] = ACTIONS(73),
    },
    [215] = {
        [anon_sym_LPAREN] = ACTIONS(223),
        [anon_sym_STAR] = ACTIONS(225),
        [anon_sym_PLUS] = ACTIONS(227),
        [anon_sym_DASH] = ACTIONS(227),
        [anon_sym_SLASH] = ACTIONS(229),
        [anon_sym_STAR_STAR] = ACTIONS(231),
        [anon_sym_PIPE] = ACTIONS(233),
        [anon_sym_AMP] = ACTIONS(235),
        [anon_sym_CARET] = ACTIONS(237),
        [anon_sym_LT_LT] = ACTIONS(227),
        [anon_sym_GT_GT] = ACTIONS(227),
        [anon_sym_LBRACK] = ACTIONS(239),
        [anon_sym_RBRACE] = ACTIONS(527),
        [sym_comment] = ACTIONS(73),
    },
    [216] = {
        [anon_sym_COMMA] = ACTIONS(425),
        [anon_sym_COLON] = ACTIONS(425),
        [anon_sym_for] = ACTIONS(425),
        [anon_sym_in] = ACTIONS(425),
        [anon_sym_as] = ACTIONS(425),
        [anon_sym_LPAREN] = ACTIONS(425),
        [anon_sym_RPAREN] = ACTIONS(425),
        [anon_sym_STAR] = ACTIONS(427),
        [anon_sym_PLUS] = ACTIONS(425),
        [anon_sym_DASH] = ACTIONS(425),
        [anon_sym_SLASH] = ACTIONS(425),
        [anon_sym_STAR_STAR] = ACTIONS(425),
        [anon_sym_PIPE] = ACTIONS(425),
        [anon_sym_AMP] = ACTIONS(425),
        [anon_sym_CARET] = ACTIONS(425),
        [anon_sym_LT_LT] = ACTIONS(425),
        [anon_sym_GT_GT] = ACTIONS(425),
        [anon_sym_LBRACK] = ACTIONS(425),
        [anon_sym_RBRACK] = ACTIONS(425),
        [anon_sym_RBRACE] = ACTIONS(425),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(425),
    },
    [217] = {
        [anon_sym_COMMA] = ACTIONS(429),
        [anon_sym_COLON] = ACTIONS(429),
        [anon_sym_for] = ACTIONS(429),
        [anon_sym_in] = ACTIONS(429),
        [anon_sym_as] = ACTIONS(429),
        [anon_sym_LPAREN] = ACTIONS(429),
        [anon_sym_RPAREN] = ACTIONS(429),
        [anon_sym_STAR] = ACTIONS(431),
        [anon_sym_PLUS] = ACTIONS(429),
        [anon_sym_DASH] = ACTIONS(429),
        [anon_sym_SLASH] = ACTIONS(429),
        [anon_sym_STAR_STAR] = ACTIONS(429),
        [anon_sym_PIPE] = ACTIONS(429),
        [anon_sym_AMP] = ACTIONS(429),
        [anon_sym_CARET] = ACTIONS(429),
        [anon_sym_LT_LT] = ACTIONS(429),
        [anon_sym_GT_GT] = ACTIONS(429),
        [anon_sym_LBRACK] = ACTIONS(429),
        [anon_sym_RBRACK] = ACTIONS(429),
        [anon_sym_RBRACE] = ACTIONS(429),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(429),
    },
    [218] = {
        [aux_sym_print_statement_repeat1] = STATE(222),
        [anon_sym_COMMA] = ACTIONS(529),
        [anon_sym_for] = ACTIONS(531),
        [anon_sym_LPAREN] = ACTIONS(223),
        [anon_sym_STAR] = ACTIONS(225),
        [anon_sym_PLUS] = ACTIONS(227),
        [anon_sym_DASH] = ACTIONS(227),
        [anon_sym_SLASH] = ACTIONS(229),
        [anon_sym_STAR_STAR] = ACTIONS(231),
        [anon_sym_PIPE] = ACTIONS(233),
        [anon_sym_AMP] = ACTIONS(235),
        [anon_sym_CARET] = ACTIONS(237),
        [anon_sym_LT_LT] = ACTIONS(227),
        [anon_sym_GT_GT] = ACTIONS(227),
        [anon_sym_LBRACK] = ACTIONS(239),
        [anon_sym_RBRACK] = ACTIONS(533),
        [sym_comment] = ACTIONS(73),
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
        [anon_sym_LBRACK] = ACTIONS(117),
        [anon_sym_RBRACK] = ACTIONS(535),
        [anon_sym_LBRACE] = ACTIONS(119),
        [sym_number] = ACTIONS(121),
        [sym_identifier] = ACTIONS(121),
        [sym_comment] = ACTIONS(73),
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
        [anon_sym_LBRACK] = ACTIONS(117),
        [anon_sym_LBRACE] = ACTIONS(119),
        [sym_number] = ACTIONS(121),
        [sym_identifier] = ACTIONS(121),
        [sym_comment] = ACTIONS(73),
    },
    [221] = {
        [anon_sym_COMMA] = ACTIONS(441),
        [anon_sym_COLON] = ACTIONS(441),
        [anon_sym_for] = ACTIONS(441),
        [anon_sym_in] = ACTIONS(441),
        [anon_sym_as] = ACTIONS(441),
        [anon_sym_LPAREN] = ACTIONS(441),
        [anon_sym_RPAREN] = ACTIONS(441),
        [anon_sym_STAR] = ACTIONS(443),
        [anon_sym_PLUS] = ACTIONS(441),
        [anon_sym_DASH] = ACTIONS(441),
        [anon_sym_SLASH] = ACTIONS(441),
        [anon_sym_STAR_STAR] = ACTIONS(441),
        [anon_sym_PIPE] = ACTIONS(441),
        [anon_sym_AMP] = ACTIONS(441),
        [anon_sym_CARET] = ACTIONS(441),
        [anon_sym_LT_LT] = ACTIONS(441),
        [anon_sym_GT_GT] = ACTIONS(441),
        [anon_sym_LBRACK] = ACTIONS(441),
        [anon_sym_RBRACK] = ACTIONS(441),
        [anon_sym_RBRACE] = ACTIONS(441),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(441),
    },
    [222] = {
        [anon_sym_COMMA] = ACTIONS(537),
        [anon_sym_RBRACK] = ACTIONS(535),
        [sym_comment] = ACTIONS(73),
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
        [anon_sym_LBRACK] = ACTIONS(117),
        [anon_sym_RBRACK] = ACTIONS(539),
        [anon_sym_LBRACE] = ACTIONS(119),
        [sym_number] = ACTIONS(121),
        [sym_identifier] = ACTIONS(121),
        [sym_comment] = ACTIONS(73),
    },
    [224] = {
        [anon_sym_COMMA] = ACTIONS(449),
        [anon_sym_COLON] = ACTIONS(449),
        [anon_sym_for] = ACTIONS(449),
        [anon_sym_in] = ACTIONS(449),
        [anon_sym_as] = ACTIONS(449),
        [anon_sym_LPAREN] = ACTIONS(449),
        [anon_sym_RPAREN] = ACTIONS(449),
        [anon_sym_STAR] = ACTIONS(451),
        [anon_sym_PLUS] = ACTIONS(449),
        [anon_sym_DASH] = ACTIONS(449),
        [anon_sym_SLASH] = ACTIONS(449),
        [anon_sym_STAR_STAR] = ACTIONS(449),
        [anon_sym_PIPE] = ACTIONS(449),
        [anon_sym_AMP] = ACTIONS(449),
        [anon_sym_CARET] = ACTIONS(449),
        [anon_sym_LT_LT] = ACTIONS(449),
        [anon_sym_GT_GT] = ACTIONS(449),
        [anon_sym_LBRACK] = ACTIONS(449),
        [anon_sym_RBRACK] = ACTIONS(449),
        [anon_sym_RBRACE] = ACTIONS(449),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(449),
    },
    [225] = {
        [anon_sym_COMMA] = ACTIONS(453),
        [anon_sym_COLON] = ACTIONS(453),
        [anon_sym_for] = ACTIONS(453),
        [anon_sym_in] = ACTIONS(453),
        [anon_sym_as] = ACTIONS(453),
        [anon_sym_LPAREN] = ACTIONS(453),
        [anon_sym_RPAREN] = ACTIONS(453),
        [anon_sym_STAR] = ACTIONS(455),
        [anon_sym_PLUS] = ACTIONS(453),
        [anon_sym_DASH] = ACTIONS(453),
        [anon_sym_SLASH] = ACTIONS(453),
        [anon_sym_STAR_STAR] = ACTIONS(453),
        [anon_sym_PIPE] = ACTIONS(453),
        [anon_sym_AMP] = ACTIONS(453),
        [anon_sym_CARET] = ACTIONS(453),
        [anon_sym_LT_LT] = ACTIONS(453),
        [anon_sym_GT_GT] = ACTIONS(453),
        [anon_sym_LBRACK] = ACTIONS(453),
        [anon_sym_RBRACK] = ACTIONS(453),
        [anon_sym_RBRACE] = ACTIONS(453),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(453),
    },
    [226] = {
        [anon_sym_in] = ACTIONS(541),
        [sym_comment] = ACTIONS(73),
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
        [anon_sym_LBRACK] = ACTIONS(117),
        [anon_sym_LBRACE] = ACTIONS(119),
        [sym_number] = ACTIONS(121),
        [sym_identifier] = ACTIONS(121),
        [sym_comment] = ACTIONS(73),
    },
    [228] = {
        [anon_sym_LPAREN] = ACTIONS(223),
        [anon_sym_STAR] = ACTIONS(225),
        [anon_sym_PLUS] = ACTIONS(227),
        [anon_sym_DASH] = ACTIONS(227),
        [anon_sym_SLASH] = ACTIONS(229),
        [anon_sym_STAR_STAR] = ACTIONS(231),
        [anon_sym_PIPE] = ACTIONS(233),
        [anon_sym_AMP] = ACTIONS(235),
        [anon_sym_CARET] = ACTIONS(237),
        [anon_sym_LT_LT] = ACTIONS(227),
        [anon_sym_GT_GT] = ACTIONS(227),
        [anon_sym_LBRACK] = ACTIONS(239),
        [anon_sym_RBRACK] = ACTIONS(543),
        [sym_comment] = ACTIONS(73),
    },
    [229] = {
        [anon_sym_COMMA] = ACTIONS(461),
        [anon_sym_COLON] = ACTIONS(461),
        [anon_sym_for] = ACTIONS(461),
        [anon_sym_in] = ACTIONS(461),
        [anon_sym_as] = ACTIONS(461),
        [anon_sym_LPAREN] = ACTIONS(461),
        [anon_sym_RPAREN] = ACTIONS(461),
        [anon_sym_STAR] = ACTIONS(463),
        [anon_sym_PLUS] = ACTIONS(461),
        [anon_sym_DASH] = ACTIONS(461),
        [anon_sym_SLASH] = ACTIONS(461),
        [anon_sym_STAR_STAR] = ACTIONS(461),
        [anon_sym_PIPE] = ACTIONS(461),
        [anon_sym_AMP] = ACTIONS(461),
        [anon_sym_CARET] = ACTIONS(461),
        [anon_sym_LT_LT] = ACTIONS(461),
        [anon_sym_GT_GT] = ACTIONS(461),
        [anon_sym_LBRACK] = ACTIONS(461),
        [anon_sym_RBRACK] = ACTIONS(461),
        [anon_sym_RBRACE] = ACTIONS(461),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(461),
    },
    [230] = {
        [aux_sym_dotted_name_repeat1] = STATE(241),
        [anon_sym_LPAREN] = ACTIONS(545),
        [anon_sym_DOT] = ACTIONS(547),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(545),
    },
    [231] = {
        [sym_arguments] = STATE(234),
        [anon_sym_LPAREN] = ACTIONS(549),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(551),
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
        [anon_sym_LBRACK] = ACTIONS(117),
        [anon_sym_LBRACE] = ACTIONS(119),
        [sym_number] = ACTIONS(121),
        [sym_identifier] = ACTIONS(121),
        [sym_comment] = ACTIONS(73),
    },
    [233] = {
        [anon_sym_def] = ACTIONS(553),
        [anon_sym_class] = ACTIONS(553),
        [anon_sym_AT] = ACTIONS(553),
        [sym_comment] = ACTIONS(73),
    },
    [234] = {
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(555),
    },
    [235] = {
        [anon_sym_def] = ACTIONS(557),
        [anon_sym_class] = ACTIONS(557),
        [anon_sym_AT] = ACTIONS(557),
        [sym_comment] = ACTIONS(73),
    },
    [236] = {
        [aux_sym_print_statement_repeat1] = STATE(238),
        [anon_sym_COMMA] = ACTIONS(383),
        [anon_sym_LPAREN] = ACTIONS(223),
        [anon_sym_RPAREN] = ACTIONS(559),
        [anon_sym_STAR] = ACTIONS(225),
        [anon_sym_PLUS] = ACTIONS(227),
        [anon_sym_DASH] = ACTIONS(227),
        [anon_sym_SLASH] = ACTIONS(229),
        [anon_sym_STAR_STAR] = ACTIONS(231),
        [anon_sym_PIPE] = ACTIONS(233),
        [anon_sym_AMP] = ACTIONS(235),
        [anon_sym_CARET] = ACTIONS(237),
        [anon_sym_LT_LT] = ACTIONS(227),
        [anon_sym_GT_GT] = ACTIONS(227),
        [anon_sym_LBRACK] = ACTIONS(239),
        [sym_comment] = ACTIONS(73),
    },
    [237] = {
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(561),
    },
    [238] = {
        [anon_sym_COMMA] = ACTIONS(387),
        [anon_sym_RPAREN] = ACTIONS(563),
        [sym_comment] = ACTIONS(73),
    },
    [239] = {
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(565),
    },
    [240] = {
        [sym_identifier] = ACTIONS(567),
        [sym_comment] = ACTIONS(73),
    },
    [241] = {
        [anon_sym_LPAREN] = ACTIONS(569),
        [anon_sym_DOT] = ACTIONS(571),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(569),
    },
    [242] = {
        [sym_identifier] = ACTIONS(573),
        [sym_comment] = ACTIONS(73),
    },
    [243] = {
        [anon_sym_LPAREN] = ACTIONS(575),
        [anon_sym_DOT] = ACTIONS(575),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(575),
    },
    [244] = {
        [anon_sym_LPAREN] = ACTIONS(577),
        [anon_sym_DOT] = ACTIONS(577),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(577),
    },
    [245] = {
        [anon_sym_COLON] = ACTIONS(579),
        [anon_sym_LPAREN] = ACTIONS(581),
        [sym_comment] = ACTIONS(73),
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
        [anon_sym_print] = ACTIONS(83),
        [anon_sym_return] = ACTIONS(85),
        [anon_sym_del] = ACTIONS(87),
        [sym_pass_statement] = ACTIONS(89),
        [sym_break_statement] = ACTIONS(89),
        [sym_continue_statement] = ACTIONS(89),
        [anon_sym_LBRACK] = ACTIONS(107),
        [anon_sym_LBRACE] = ACTIONS(109),
        [sym_number] = ACTIONS(111),
        [sym_identifier] = ACTIONS(113),
        [sym_comment] = ACTIONS(73),
        [sym__indent] = ACTIONS(583),
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
        [anon_sym_LBRACK] = ACTIONS(117),
        [anon_sym_LBRACE] = ACTIONS(119),
        [sym_number] = ACTIONS(121),
        [sym_identifier] = ACTIONS(121),
        [sym_comment] = ACTIONS(73),
    },
    [248] = {
        [anon_sym_RPAREN] = ACTIONS(585),
        [sym_comment] = ACTIONS(73),
    },
    [249] = {
        [anon_sym_COLON] = ACTIONS(587),
        [sym_comment] = ACTIONS(73),
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
        [anon_sym_print] = ACTIONS(83),
        [anon_sym_return] = ACTIONS(85),
        [anon_sym_del] = ACTIONS(87),
        [sym_pass_statement] = ACTIONS(89),
        [sym_break_statement] = ACTIONS(89),
        [sym_continue_statement] = ACTIONS(89),
        [anon_sym_LBRACK] = ACTIONS(107),
        [anon_sym_LBRACE] = ACTIONS(109),
        [sym_number] = ACTIONS(111),
        [sym_identifier] = ACTIONS(113),
        [sym_comment] = ACTIONS(73),
        [sym__indent] = ACTIONS(583),
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
        [anon_sym_print] = ACTIONS(83),
        [anon_sym_return] = ACTIONS(85),
        [anon_sym_del] = ACTIONS(87),
        [sym_pass_statement] = ACTIONS(89),
        [sym_break_statement] = ACTIONS(89),
        [sym_continue_statement] = ACTIONS(89),
        [anon_sym_if] = ACTIONS(589),
        [anon_sym_for] = ACTIONS(591),
        [anon_sym_while] = ACTIONS(593),
        [anon_sym_try] = ACTIONS(595),
        [anon_sym_with] = ACTIONS(597),
        [anon_sym_def] = ACTIONS(599),
        [anon_sym_class] = ACTIONS(601),
        [anon_sym_AT] = ACTIONS(105),
        [anon_sym_LBRACK] = ACTIONS(107),
        [anon_sym_LBRACE] = ACTIONS(109),
        [sym_number] = ACTIONS(111),
        [sym_identifier] = ACTIONS(113),
        [sym_comment] = ACTIONS(73),
        [sym__dedent] = ACTIONS(603),
    },
    [252] = {
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(603),
    },
    [253] = {
        [ts_builtin_sym_end] = ACTIONS(605),
        [anon_sym_SEMI] = ACTIONS(605),
        [anon_sym_print] = ACTIONS(607),
        [anon_sym_return] = ACTIONS(607),
        [anon_sym_del] = ACTIONS(607),
        [sym_pass_statement] = ACTIONS(607),
        [sym_break_statement] = ACTIONS(607),
        [sym_continue_statement] = ACTIONS(607),
        [anon_sym_if] = ACTIONS(607),
        [anon_sym_for] = ACTIONS(607),
        [anon_sym_while] = ACTIONS(607),
        [anon_sym_try] = ACTIONS(607),
        [anon_sym_with] = ACTIONS(607),
        [anon_sym_def] = ACTIONS(607),
        [anon_sym_class] = ACTIONS(607),
        [anon_sym_AT] = ACTIONS(605),
        [anon_sym_LBRACK] = ACTIONS(605),
        [anon_sym_LBRACE] = ACTIONS(605),
        [sym_number] = ACTIONS(607),
        [sym_identifier] = ACTIONS(609),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(605),
    },
    [254] = {
        [ts_builtin_sym_end] = ACTIONS(611),
        [anon_sym_SEMI] = ACTIONS(611),
        [anon_sym_print] = ACTIONS(613),
        [anon_sym_return] = ACTIONS(613),
        [anon_sym_del] = ACTIONS(613),
        [sym_pass_statement] = ACTIONS(613),
        [sym_break_statement] = ACTIONS(613),
        [sym_continue_statement] = ACTIONS(613),
        [anon_sym_if] = ACTIONS(613),
        [anon_sym_elif] = ACTIONS(613),
        [anon_sym_else] = ACTIONS(613),
        [anon_sym_for] = ACTIONS(613),
        [anon_sym_while] = ACTIONS(613),
        [anon_sym_try] = ACTIONS(613),
        [anon_sym_except] = ACTIONS(613),
        [anon_sym_finally] = ACTIONS(613),
        [anon_sym_with] = ACTIONS(613),
        [anon_sym_def] = ACTIONS(613),
        [anon_sym_class] = ACTIONS(613),
        [anon_sym_AT] = ACTIONS(611),
        [anon_sym_LBRACK] = ACTIONS(611),
        [anon_sym_LBRACE] = ACTIONS(611),
        [sym_number] = ACTIONS(613),
        [sym_identifier] = ACTIONS(615),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(611),
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
        [anon_sym_LBRACK] = ACTIONS(117),
        [anon_sym_LBRACE] = ACTIONS(119),
        [sym_number] = ACTIONS(121),
        [sym_identifier] = ACTIONS(121),
        [sym_comment] = ACTIONS(73),
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
        [anon_sym_LBRACK] = ACTIONS(117),
        [anon_sym_LBRACE] = ACTIONS(119),
        [sym_number] = ACTIONS(121),
        [sym_identifier] = ACTIONS(121),
        [sym_comment] = ACTIONS(73),
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
        [anon_sym_LBRACK] = ACTIONS(117),
        [anon_sym_LBRACE] = ACTIONS(119),
        [sym_number] = ACTIONS(121),
        [sym_identifier] = ACTIONS(121),
        [sym_comment] = ACTIONS(73),
    },
    [258] = {
        [anon_sym_COLON] = ACTIONS(617),
        [sym_comment] = ACTIONS(73),
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
        [anon_sym_LBRACK] = ACTIONS(117),
        [anon_sym_LBRACE] = ACTIONS(119),
        [sym_number] = ACTIONS(121),
        [sym_identifier] = ACTIONS(121),
        [sym_comment] = ACTIONS(73),
    },
    [260] = {
        [sym_identifier] = ACTIONS(619),
        [sym_comment] = ACTIONS(73),
    },
    [261] = {
        [sym_identifier] = ACTIONS(621),
        [sym_comment] = ACTIONS(73),
    },
    [262] = {
        [anon_sym_print] = ACTIONS(143),
        [anon_sym_return] = ACTIONS(143),
        [anon_sym_del] = ACTIONS(143),
        [sym_pass_statement] = ACTIONS(143),
        [sym_break_statement] = ACTIONS(143),
        [sym_continue_statement] = ACTIONS(143),
        [anon_sym_if] = ACTIONS(143),
        [anon_sym_for] = ACTIONS(143),
        [anon_sym_while] = ACTIONS(143),
        [anon_sym_try] = ACTIONS(143),
        [anon_sym_with] = ACTIONS(143),
        [anon_sym_def] = ACTIONS(143),
        [anon_sym_class] = ACTIONS(143),
        [anon_sym_AT] = ACTIONS(141),
        [anon_sym_LBRACK] = ACTIONS(141),
        [anon_sym_LBRACE] = ACTIONS(141),
        [sym_number] = ACTIONS(143),
        [sym_identifier] = ACTIONS(145),
        [sym_comment] = ACTIONS(73),
        [sym__dedent] = ACTIONS(141),
    },
    [263] = {
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(623),
    },
    [264] = {
        [anon_sym_print] = ACTIONS(151),
        [anon_sym_return] = ACTIONS(151),
        [anon_sym_del] = ACTIONS(151),
        [sym_pass_statement] = ACTIONS(151),
        [sym_break_statement] = ACTIONS(151),
        [sym_continue_statement] = ACTIONS(151),
        [anon_sym_if] = ACTIONS(151),
        [anon_sym_for] = ACTIONS(151),
        [anon_sym_while] = ACTIONS(151),
        [anon_sym_try] = ACTIONS(151),
        [anon_sym_with] = ACTIONS(151),
        [anon_sym_def] = ACTIONS(151),
        [anon_sym_class] = ACTIONS(151),
        [anon_sym_AT] = ACTIONS(149),
        [anon_sym_LBRACK] = ACTIONS(149),
        [anon_sym_LBRACE] = ACTIONS(149),
        [sym_number] = ACTIONS(151),
        [sym_identifier] = ACTIONS(153),
        [sym_comment] = ACTIONS(73),
        [sym__dedent] = ACTIONS(149),
    },
    [265] = {
        [anon_sym_print] = ACTIONS(157),
        [anon_sym_return] = ACTIONS(157),
        [anon_sym_del] = ACTIONS(157),
        [sym_pass_statement] = ACTIONS(157),
        [sym_break_statement] = ACTIONS(157),
        [sym_continue_statement] = ACTIONS(157),
        [anon_sym_if] = ACTIONS(157),
        [anon_sym_for] = ACTIONS(157),
        [anon_sym_while] = ACTIONS(157),
        [anon_sym_try] = ACTIONS(157),
        [anon_sym_with] = ACTIONS(157),
        [anon_sym_def] = ACTIONS(157),
        [anon_sym_class] = ACTIONS(157),
        [anon_sym_AT] = ACTIONS(155),
        [anon_sym_LBRACK] = ACTIONS(155),
        [anon_sym_LBRACE] = ACTIONS(155),
        [sym_number] = ACTIONS(157),
        [sym_identifier] = ACTIONS(159),
        [sym_comment] = ACTIONS(73),
        [sym__dedent] = ACTIONS(155),
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
        [anon_sym_print] = ACTIONS(83),
        [anon_sym_return] = ACTIONS(85),
        [anon_sym_del] = ACTIONS(87),
        [sym_pass_statement] = ACTIONS(89),
        [sym_break_statement] = ACTIONS(89),
        [sym_continue_statement] = ACTIONS(89),
        [anon_sym_if] = ACTIONS(589),
        [anon_sym_for] = ACTIONS(591),
        [anon_sym_while] = ACTIONS(593),
        [anon_sym_try] = ACTIONS(595),
        [anon_sym_with] = ACTIONS(597),
        [anon_sym_def] = ACTIONS(599),
        [anon_sym_class] = ACTIONS(601),
        [anon_sym_AT] = ACTIONS(105),
        [anon_sym_LBRACK] = ACTIONS(107),
        [anon_sym_LBRACE] = ACTIONS(109),
        [sym_number] = ACTIONS(111),
        [sym_identifier] = ACTIONS(113),
        [sym_comment] = ACTIONS(73),
        [sym__dedent] = ACTIONS(625),
    },
    [267] = {
        [sym_function_definition] = STATE(268),
        [sym_class_definition] = STATE(268),
        [sym_decorator] = STATE(27),
        [anon_sym_def] = ACTIONS(627),
        [anon_sym_class] = ACTIONS(629),
        [anon_sym_AT] = ACTIONS(105),
        [sym_comment] = ACTIONS(73),
    },
    [268] = {
        [anon_sym_print] = ACTIONS(193),
        [anon_sym_return] = ACTIONS(193),
        [anon_sym_del] = ACTIONS(193),
        [sym_pass_statement] = ACTIONS(193),
        [sym_break_statement] = ACTIONS(193),
        [sym_continue_statement] = ACTIONS(193),
        [anon_sym_if] = ACTIONS(193),
        [anon_sym_for] = ACTIONS(193),
        [anon_sym_while] = ACTIONS(193),
        [anon_sym_try] = ACTIONS(193),
        [anon_sym_with] = ACTIONS(193),
        [anon_sym_def] = ACTIONS(193),
        [anon_sym_class] = ACTIONS(193),
        [anon_sym_AT] = ACTIONS(191),
        [anon_sym_LBRACK] = ACTIONS(191),
        [anon_sym_LBRACE] = ACTIONS(191),
        [sym_number] = ACTIONS(193),
        [sym_identifier] = ACTIONS(195),
        [sym_comment] = ACTIONS(73),
        [sym__dedent] = ACTIONS(191),
    },
    [269] = {
        [ts_builtin_sym_end] = ACTIONS(631),
        [anon_sym_SEMI] = ACTIONS(631),
        [anon_sym_print] = ACTIONS(633),
        [anon_sym_return] = ACTIONS(633),
        [anon_sym_del] = ACTIONS(633),
        [sym_pass_statement] = ACTIONS(633),
        [sym_break_statement] = ACTIONS(633),
        [sym_continue_statement] = ACTIONS(633),
        [anon_sym_if] = ACTIONS(633),
        [anon_sym_elif] = ACTIONS(633),
        [anon_sym_else] = ACTIONS(633),
        [anon_sym_for] = ACTIONS(633),
        [anon_sym_while] = ACTIONS(633),
        [anon_sym_try] = ACTIONS(633),
        [anon_sym_except] = ACTIONS(633),
        [anon_sym_finally] = ACTIONS(633),
        [anon_sym_with] = ACTIONS(633),
        [anon_sym_def] = ACTIONS(633),
        [anon_sym_class] = ACTIONS(633),
        [anon_sym_AT] = ACTIONS(631),
        [anon_sym_LBRACK] = ACTIONS(631),
        [anon_sym_LBRACE] = ACTIONS(631),
        [sym_number] = ACTIONS(633),
        [sym_identifier] = ACTIONS(635),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(631),
    },
    [270] = {
        [anon_sym_print] = ACTIONS(203),
        [anon_sym_return] = ACTIONS(203),
        [anon_sym_del] = ACTIONS(203),
        [sym_pass_statement] = ACTIONS(203),
        [sym_break_statement] = ACTIONS(203),
        [sym_continue_statement] = ACTIONS(203),
        [anon_sym_if] = ACTIONS(203),
        [anon_sym_for] = ACTIONS(203),
        [anon_sym_while] = ACTIONS(203),
        [anon_sym_try] = ACTIONS(203),
        [anon_sym_with] = ACTIONS(203),
        [anon_sym_def] = ACTIONS(203),
        [anon_sym_class] = ACTIONS(203),
        [anon_sym_AT] = ACTIONS(201),
        [anon_sym_LBRACK] = ACTIONS(201),
        [anon_sym_LBRACE] = ACTIONS(201),
        [sym_number] = ACTIONS(203),
        [sym_identifier] = ACTIONS(205),
        [sym_comment] = ACTIONS(73),
        [sym__dedent] = ACTIONS(201),
    },
    [271] = {
        [anon_sym_print] = ACTIONS(493),
        [anon_sym_return] = ACTIONS(493),
        [anon_sym_del] = ACTIONS(493),
        [sym_pass_statement] = ACTIONS(493),
        [sym_break_statement] = ACTIONS(493),
        [sym_continue_statement] = ACTIONS(493),
        [anon_sym_if] = ACTIONS(493),
        [anon_sym_for] = ACTIONS(493),
        [anon_sym_while] = ACTIONS(493),
        [anon_sym_try] = ACTIONS(493),
        [anon_sym_with] = ACTIONS(493),
        [anon_sym_def] = ACTIONS(493),
        [anon_sym_class] = ACTIONS(493),
        [anon_sym_AT] = ACTIONS(491),
        [anon_sym_LBRACK] = ACTIONS(491),
        [anon_sym_LBRACE] = ACTIONS(491),
        [sym_number] = ACTIONS(493),
        [sym_identifier] = ACTIONS(495),
        [sym_comment] = ACTIONS(73),
        [sym__dedent] = ACTIONS(491),
    },
    [272] = {
        [anon_sym_COLON] = ACTIONS(637),
        [anon_sym_LPAREN] = ACTIONS(639),
        [sym_comment] = ACTIONS(73),
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
        [anon_sym_print] = ACTIONS(83),
        [anon_sym_return] = ACTIONS(85),
        [anon_sym_del] = ACTIONS(87),
        [sym_pass_statement] = ACTIONS(89),
        [sym_break_statement] = ACTIONS(89),
        [sym_continue_statement] = ACTIONS(89),
        [anon_sym_LBRACK] = ACTIONS(107),
        [anon_sym_LBRACE] = ACTIONS(109),
        [sym_number] = ACTIONS(111),
        [sym_identifier] = ACTIONS(113),
        [sym_comment] = ACTIONS(73),
        [sym__indent] = ACTIONS(641),
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
        [anon_sym_LBRACK] = ACTIONS(117),
        [anon_sym_LBRACE] = ACTIONS(119),
        [sym_number] = ACTIONS(121),
        [sym_identifier] = ACTIONS(121),
        [sym_comment] = ACTIONS(73),
    },
    [275] = {
        [anon_sym_RPAREN] = ACTIONS(643),
        [sym_comment] = ACTIONS(73),
    },
    [276] = {
        [anon_sym_COLON] = ACTIONS(645),
        [sym_comment] = ACTIONS(73),
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
        [anon_sym_print] = ACTIONS(83),
        [anon_sym_return] = ACTIONS(85),
        [anon_sym_del] = ACTIONS(87),
        [sym_pass_statement] = ACTIONS(89),
        [sym_break_statement] = ACTIONS(89),
        [sym_continue_statement] = ACTIONS(89),
        [anon_sym_LBRACK] = ACTIONS(107),
        [anon_sym_LBRACE] = ACTIONS(109),
        [sym_number] = ACTIONS(111),
        [sym_identifier] = ACTIONS(113),
        [sym_comment] = ACTIONS(73),
        [sym__indent] = ACTIONS(641),
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
        [anon_sym_print] = ACTIONS(83),
        [anon_sym_return] = ACTIONS(85),
        [anon_sym_del] = ACTIONS(87),
        [sym_pass_statement] = ACTIONS(89),
        [sym_break_statement] = ACTIONS(89),
        [sym_continue_statement] = ACTIONS(89),
        [anon_sym_if] = ACTIONS(589),
        [anon_sym_for] = ACTIONS(591),
        [anon_sym_while] = ACTIONS(593),
        [anon_sym_try] = ACTIONS(595),
        [anon_sym_with] = ACTIONS(597),
        [anon_sym_def] = ACTIONS(599),
        [anon_sym_class] = ACTIONS(601),
        [anon_sym_AT] = ACTIONS(105),
        [anon_sym_LBRACK] = ACTIONS(107),
        [anon_sym_LBRACE] = ACTIONS(109),
        [sym_number] = ACTIONS(111),
        [sym_identifier] = ACTIONS(113),
        [sym_comment] = ACTIONS(73),
        [sym__dedent] = ACTIONS(647),
    },
    [279] = {
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(647),
    },
    [280] = {
        [anon_sym_print] = ACTIONS(607),
        [anon_sym_return] = ACTIONS(607),
        [anon_sym_del] = ACTIONS(607),
        [sym_pass_statement] = ACTIONS(607),
        [sym_break_statement] = ACTIONS(607),
        [sym_continue_statement] = ACTIONS(607),
        [anon_sym_if] = ACTIONS(607),
        [anon_sym_for] = ACTIONS(607),
        [anon_sym_while] = ACTIONS(607),
        [anon_sym_try] = ACTIONS(607),
        [anon_sym_with] = ACTIONS(607),
        [anon_sym_def] = ACTIONS(607),
        [anon_sym_class] = ACTIONS(607),
        [anon_sym_AT] = ACTIONS(605),
        [anon_sym_LBRACK] = ACTIONS(605),
        [anon_sym_LBRACE] = ACTIONS(605),
        [sym_number] = ACTIONS(607),
        [sym_identifier] = ACTIONS(609),
        [sym_comment] = ACTIONS(73),
        [sym__dedent] = ACTIONS(605),
    },
    [281] = {
        [anon_sym_print] = ACTIONS(613),
        [anon_sym_return] = ACTIONS(613),
        [anon_sym_del] = ACTIONS(613),
        [sym_pass_statement] = ACTIONS(613),
        [sym_break_statement] = ACTIONS(613),
        [sym_continue_statement] = ACTIONS(613),
        [anon_sym_if] = ACTIONS(613),
        [anon_sym_elif] = ACTIONS(613),
        [anon_sym_else] = ACTIONS(613),
        [anon_sym_for] = ACTIONS(613),
        [anon_sym_while] = ACTIONS(613),
        [anon_sym_try] = ACTIONS(613),
        [anon_sym_except] = ACTIONS(613),
        [anon_sym_finally] = ACTIONS(613),
        [anon_sym_with] = ACTIONS(613),
        [anon_sym_def] = ACTIONS(613),
        [anon_sym_class] = ACTIONS(613),
        [anon_sym_AT] = ACTIONS(611),
        [anon_sym_LBRACK] = ACTIONS(611),
        [anon_sym_LBRACE] = ACTIONS(611),
        [sym_number] = ACTIONS(613),
        [sym_identifier] = ACTIONS(615),
        [sym_comment] = ACTIONS(73),
        [sym__dedent] = ACTIONS(611),
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
        [anon_sym_print] = ACTIONS(83),
        [anon_sym_return] = ACTIONS(85),
        [anon_sym_del] = ACTIONS(87),
        [sym_pass_statement] = ACTIONS(89),
        [sym_break_statement] = ACTIONS(89),
        [sym_continue_statement] = ACTIONS(89),
        [anon_sym_if] = ACTIONS(589),
        [anon_sym_for] = ACTIONS(591),
        [anon_sym_while] = ACTIONS(593),
        [anon_sym_try] = ACTIONS(595),
        [anon_sym_with] = ACTIONS(597),
        [anon_sym_def] = ACTIONS(599),
        [anon_sym_class] = ACTIONS(601),
        [anon_sym_AT] = ACTIONS(105),
        [anon_sym_LBRACK] = ACTIONS(107),
        [anon_sym_LBRACE] = ACTIONS(109),
        [sym_number] = ACTIONS(111),
        [sym_identifier] = ACTIONS(113),
        [sym_comment] = ACTIONS(73),
        [sym__dedent] = ACTIONS(649),
    },
    [283] = {
        [anon_sym_print] = ACTIONS(633),
        [anon_sym_return] = ACTIONS(633),
        [anon_sym_del] = ACTIONS(633),
        [sym_pass_statement] = ACTIONS(633),
        [sym_break_statement] = ACTIONS(633),
        [sym_continue_statement] = ACTIONS(633),
        [anon_sym_if] = ACTIONS(633),
        [anon_sym_elif] = ACTIONS(633),
        [anon_sym_else] = ACTIONS(633),
        [anon_sym_for] = ACTIONS(633),
        [anon_sym_while] = ACTIONS(633),
        [anon_sym_try] = ACTIONS(633),
        [anon_sym_except] = ACTIONS(633),
        [anon_sym_finally] = ACTIONS(633),
        [anon_sym_with] = ACTIONS(633),
        [anon_sym_def] = ACTIONS(633),
        [anon_sym_class] = ACTIONS(633),
        [anon_sym_AT] = ACTIONS(631),
        [anon_sym_LBRACK] = ACTIONS(631),
        [anon_sym_LBRACE] = ACTIONS(631),
        [sym_number] = ACTIONS(633),
        [sym_identifier] = ACTIONS(635),
        [sym_comment] = ACTIONS(73),
        [sym__dedent] = ACTIONS(631),
    },
    [284] = {
        [anon_sym_print] = ACTIONS(651),
        [anon_sym_return] = ACTIONS(651),
        [anon_sym_del] = ACTIONS(651),
        [sym_pass_statement] = ACTIONS(651),
        [sym_break_statement] = ACTIONS(651),
        [sym_continue_statement] = ACTIONS(651),
        [anon_sym_if] = ACTIONS(651),
        [anon_sym_for] = ACTIONS(651),
        [anon_sym_while] = ACTIONS(651),
        [anon_sym_try] = ACTIONS(651),
        [anon_sym_with] = ACTIONS(651),
        [anon_sym_def] = ACTIONS(651),
        [anon_sym_class] = ACTIONS(651),
        [anon_sym_AT] = ACTIONS(653),
        [anon_sym_LBRACK] = ACTIONS(653),
        [anon_sym_LBRACE] = ACTIONS(653),
        [sym_number] = ACTIONS(651),
        [sym_identifier] = ACTIONS(655),
        [sym_comment] = ACTIONS(73),
        [sym__dedent] = ACTIONS(653),
    },
    [285] = {
        [sym_parameters] = STATE(287),
        [anon_sym_LPAREN] = ACTIONS(657),
        [sym_comment] = ACTIONS(73),
    },
    [286] = {
        [sym_default_parameter] = STATE(293),
        [sym_list_splat_parameter] = STATE(294),
        [sym_dictionary_splat_parameter] = STATE(295),
        [aux_sym_parameters_repeat1] = STATE(296),
        [anon_sym_RPAREN] = ACTIONS(659),
        [anon_sym_STAR] = ACTIONS(661),
        [sym_identifier] = ACTIONS(663),
        [sym_comment] = ACTIONS(73),
    },
    [287] = {
        [anon_sym_COLON] = ACTIONS(665),
        [sym_comment] = ACTIONS(73),
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
        [anon_sym_print] = ACTIONS(83),
        [anon_sym_return] = ACTIONS(85),
        [anon_sym_del] = ACTIONS(87),
        [sym_pass_statement] = ACTIONS(89),
        [sym_break_statement] = ACTIONS(89),
        [sym_continue_statement] = ACTIONS(89),
        [anon_sym_LBRACK] = ACTIONS(107),
        [anon_sym_LBRACE] = ACTIONS(109),
        [sym_number] = ACTIONS(111),
        [sym_identifier] = ACTIONS(113),
        [sym_comment] = ACTIONS(73),
        [sym__indent] = ACTIONS(641),
    },
    [289] = {
        [anon_sym_print] = ACTIONS(667),
        [anon_sym_return] = ACTIONS(667),
        [anon_sym_del] = ACTIONS(667),
        [sym_pass_statement] = ACTIONS(667),
        [sym_break_statement] = ACTIONS(667),
        [sym_continue_statement] = ACTIONS(667),
        [anon_sym_if] = ACTIONS(667),
        [anon_sym_for] = ACTIONS(667),
        [anon_sym_while] = ACTIONS(667),
        [anon_sym_try] = ACTIONS(667),
        [anon_sym_with] = ACTIONS(667),
        [anon_sym_def] = ACTIONS(667),
        [anon_sym_class] = ACTIONS(667),
        [anon_sym_AT] = ACTIONS(669),
        [anon_sym_LBRACK] = ACTIONS(669),
        [anon_sym_LBRACE] = ACTIONS(669),
        [sym_number] = ACTIONS(667),
        [sym_identifier] = ACTIONS(671),
        [sym_comment] = ACTIONS(73),
        [sym__dedent] = ACTIONS(669),
    },
    [290] = {
        [anon_sym_COLON] = ACTIONS(673),
        [sym_comment] = ACTIONS(73),
    },
    [291] = {
        [anon_sym_STAR] = ACTIONS(675),
        [sym_identifier] = ACTIONS(677),
        [sym_comment] = ACTIONS(73),
    },
    [292] = {
        [anon_sym_COMMA] = ACTIONS(679),
        [anon_sym_RPAREN] = ACTIONS(681),
        [anon_sym_EQ] = ACTIONS(683),
        [sym_comment] = ACTIONS(73),
    },
    [293] = {
        [anon_sym_COMMA] = ACTIONS(679),
        [anon_sym_RPAREN] = ACTIONS(681),
        [sym_comment] = ACTIONS(73),
    },
    [294] = {
        [anon_sym_COMMA] = ACTIONS(685),
        [anon_sym_RPAREN] = ACTIONS(681),
        [sym_comment] = ACTIONS(73),
    },
    [295] = {
        [anon_sym_RPAREN] = ACTIONS(681),
        [sym_comment] = ACTIONS(73),
    },
    [296] = {
        [sym_default_parameter] = STATE(298),
        [sym_list_splat_parameter] = STATE(299),
        [sym_dictionary_splat_parameter] = STATE(300),
        [anon_sym_STAR] = ACTIONS(661),
        [sym_identifier] = ACTIONS(687),
        [sym_comment] = ACTIONS(73),
    },
    [297] = {
        [anon_sym_COMMA] = ACTIONS(689),
        [anon_sym_RPAREN] = ACTIONS(691),
        [anon_sym_EQ] = ACTIONS(683),
        [sym_comment] = ACTIONS(73),
    },
    [298] = {
        [anon_sym_COMMA] = ACTIONS(689),
        [anon_sym_RPAREN] = ACTIONS(691),
        [sym_comment] = ACTIONS(73),
    },
    [299] = {
        [anon_sym_COMMA] = ACTIONS(693),
        [anon_sym_RPAREN] = ACTIONS(691),
        [sym_comment] = ACTIONS(73),
    },
    [300] = {
        [anon_sym_RPAREN] = ACTIONS(691),
        [sym_comment] = ACTIONS(73),
    },
    [301] = {
        [anon_sym_COLON] = ACTIONS(695),
        [sym_comment] = ACTIONS(73),
    },
    [302] = {
        [sym_dictionary_splat_parameter] = STATE(304),
        [anon_sym_STAR] = ACTIONS(697),
        [sym_comment] = ACTIONS(73),
    },
    [303] = {
        [anon_sym_STAR] = ACTIONS(675),
        [sym_comment] = ACTIONS(73),
    },
    [304] = {
        [anon_sym_RPAREN] = ACTIONS(699),
        [sym_comment] = ACTIONS(73),
    },
    [305] = {
        [anon_sym_COLON] = ACTIONS(701),
        [sym_comment] = ACTIONS(73),
    },
    [306] = {
        [sym_identifier] = ACTIONS(703),
        [sym_comment] = ACTIONS(73),
    },
    [307] = {
        [anon_sym_RPAREN] = ACTIONS(705),
        [sym_comment] = ACTIONS(73),
    },
    [308] = {
        [anon_sym_RPAREN] = ACTIONS(707),
        [anon_sym_STAR] = ACTIONS(709),
        [sym_identifier] = ACTIONS(711),
        [sym_comment] = ACTIONS(73),
    },
    [309] = {
        [anon_sym_COLON] = ACTIONS(713),
        [sym_comment] = ACTIONS(73),
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
        [anon_sym_LBRACK] = ACTIONS(117),
        [anon_sym_LBRACE] = ACTIONS(119),
        [sym_number] = ACTIONS(121),
        [sym_identifier] = ACTIONS(121),
        [sym_comment] = ACTIONS(73),
    },
    [311] = {
        [anon_sym_COMMA] = ACTIONS(715),
        [anon_sym_LPAREN] = ACTIONS(223),
        [anon_sym_RPAREN] = ACTIONS(715),
        [anon_sym_STAR] = ACTIONS(225),
        [anon_sym_PLUS] = ACTIONS(227),
        [anon_sym_DASH] = ACTIONS(227),
        [anon_sym_SLASH] = ACTIONS(229),
        [anon_sym_STAR_STAR] = ACTIONS(231),
        [anon_sym_PIPE] = ACTIONS(233),
        [anon_sym_AMP] = ACTIONS(235),
        [anon_sym_CARET] = ACTIONS(237),
        [anon_sym_LT_LT] = ACTIONS(227),
        [anon_sym_GT_GT] = ACTIONS(227),
        [anon_sym_LBRACK] = ACTIONS(239),
        [sym_comment] = ACTIONS(73),
    },
    [312] = {
        [anon_sym_COLON] = ACTIONS(717),
        [sym_comment] = ACTIONS(73),
    },
    [313] = {
        [sym_dictionary_splat_parameter] = STATE(314),
        [anon_sym_STAR] = ACTIONS(697),
        [sym_comment] = ACTIONS(73),
    },
    [314] = {
        [anon_sym_RPAREN] = ACTIONS(707),
        [sym_comment] = ACTIONS(73),
    },
    [315] = {
        [anon_sym_RPAREN] = ACTIONS(691),
        [anon_sym_STAR] = ACTIONS(719),
        [sym_identifier] = ACTIONS(721),
        [sym_comment] = ACTIONS(73),
    },
    [316] = {
        [anon_sym_COMMA] = ACTIONS(723),
        [anon_sym_RPAREN] = ACTIONS(723),
        [sym_comment] = ACTIONS(73),
    },
    [317] = {
        [aux_sym_with_statement_repeat1] = STATE(323),
        [anon_sym_COMMA] = ACTIONS(725),
        [anon_sym_COLON] = ACTIONS(727),
        [sym_comment] = ACTIONS(73),
    },
    [318] = {
        [anon_sym_COMMA] = ACTIONS(729),
        [anon_sym_COLON] = ACTIONS(729),
        [anon_sym_as] = ACTIONS(731),
        [anon_sym_LPAREN] = ACTIONS(223),
        [anon_sym_STAR] = ACTIONS(225),
        [anon_sym_PLUS] = ACTIONS(227),
        [anon_sym_DASH] = ACTIONS(227),
        [anon_sym_SLASH] = ACTIONS(229),
        [anon_sym_STAR_STAR] = ACTIONS(231),
        [anon_sym_PIPE] = ACTIONS(233),
        [anon_sym_AMP] = ACTIONS(235),
        [anon_sym_CARET] = ACTIONS(237),
        [anon_sym_LT_LT] = ACTIONS(227),
        [anon_sym_GT_GT] = ACTIONS(227),
        [anon_sym_LBRACK] = ACTIONS(239),
        [sym_comment] = ACTIONS(73),
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
        [anon_sym_LBRACK] = ACTIONS(117),
        [anon_sym_LBRACE] = ACTIONS(119),
        [sym_number] = ACTIONS(121),
        [sym_identifier] = ACTIONS(121),
        [sym_comment] = ACTIONS(73),
    },
    [320] = {
        [anon_sym_COMMA] = ACTIONS(733),
        [anon_sym_COLON] = ACTIONS(733),
        [anon_sym_LPAREN] = ACTIONS(223),
        [anon_sym_STAR] = ACTIONS(225),
        [anon_sym_PLUS] = ACTIONS(227),
        [anon_sym_DASH] = ACTIONS(227),
        [anon_sym_SLASH] = ACTIONS(229),
        [anon_sym_STAR_STAR] = ACTIONS(231),
        [anon_sym_PIPE] = ACTIONS(233),
        [anon_sym_AMP] = ACTIONS(235),
        [anon_sym_CARET] = ACTIONS(237),
        [anon_sym_LT_LT] = ACTIONS(227),
        [anon_sym_GT_GT] = ACTIONS(227),
        [anon_sym_LBRACK] = ACTIONS(239),
        [sym_comment] = ACTIONS(73),
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
        [anon_sym_LBRACK] = ACTIONS(117),
        [anon_sym_LBRACE] = ACTIONS(119),
        [sym_number] = ACTIONS(121),
        [sym_identifier] = ACTIONS(121),
        [sym_comment] = ACTIONS(73),
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
        [anon_sym_print] = ACTIONS(83),
        [anon_sym_return] = ACTIONS(85),
        [anon_sym_del] = ACTIONS(87),
        [sym_pass_statement] = ACTIONS(89),
        [sym_break_statement] = ACTIONS(89),
        [sym_continue_statement] = ACTIONS(89),
        [anon_sym_LBRACK] = ACTIONS(107),
        [anon_sym_LBRACE] = ACTIONS(109),
        [sym_number] = ACTIONS(111),
        [sym_identifier] = ACTIONS(113),
        [sym_comment] = ACTIONS(73),
        [sym__indent] = ACTIONS(641),
    },
    [323] = {
        [anon_sym_COMMA] = ACTIONS(735),
        [anon_sym_COLON] = ACTIONS(737),
        [sym_comment] = ACTIONS(73),
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
        [anon_sym_LBRACK] = ACTIONS(117),
        [anon_sym_LBRACE] = ACTIONS(119),
        [sym_number] = ACTIONS(121),
        [sym_identifier] = ACTIONS(121),
        [sym_comment] = ACTIONS(73),
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
        [anon_sym_print] = ACTIONS(83),
        [anon_sym_return] = ACTIONS(85),
        [anon_sym_del] = ACTIONS(87),
        [sym_pass_statement] = ACTIONS(89),
        [sym_break_statement] = ACTIONS(89),
        [sym_continue_statement] = ACTIONS(89),
        [anon_sym_LBRACK] = ACTIONS(107),
        [anon_sym_LBRACE] = ACTIONS(109),
        [sym_number] = ACTIONS(111),
        [sym_identifier] = ACTIONS(113),
        [sym_comment] = ACTIONS(73),
        [sym__indent] = ACTIONS(641),
    },
    [326] = {
        [anon_sym_print] = ACTIONS(739),
        [anon_sym_return] = ACTIONS(739),
        [anon_sym_del] = ACTIONS(739),
        [sym_pass_statement] = ACTIONS(739),
        [sym_break_statement] = ACTIONS(739),
        [sym_continue_statement] = ACTIONS(739),
        [anon_sym_if] = ACTIONS(739),
        [anon_sym_for] = ACTIONS(739),
        [anon_sym_while] = ACTIONS(739),
        [anon_sym_try] = ACTIONS(739),
        [anon_sym_with] = ACTIONS(739),
        [anon_sym_def] = ACTIONS(739),
        [anon_sym_class] = ACTIONS(739),
        [anon_sym_AT] = ACTIONS(741),
        [anon_sym_LBRACK] = ACTIONS(741),
        [anon_sym_LBRACE] = ACTIONS(741),
        [sym_number] = ACTIONS(739),
        [sym_identifier] = ACTIONS(743),
        [sym_comment] = ACTIONS(73),
        [sym__dedent] = ACTIONS(741),
    },
    [327] = {
        [anon_sym_COMMA] = ACTIONS(745),
        [anon_sym_COLON] = ACTIONS(745),
        [sym_comment] = ACTIONS(73),
    },
    [328] = {
        [anon_sym_print] = ACTIONS(747),
        [anon_sym_return] = ACTIONS(747),
        [anon_sym_del] = ACTIONS(747),
        [sym_pass_statement] = ACTIONS(747),
        [sym_break_statement] = ACTIONS(747),
        [sym_continue_statement] = ACTIONS(747),
        [anon_sym_if] = ACTIONS(747),
        [anon_sym_for] = ACTIONS(747),
        [anon_sym_while] = ACTIONS(747),
        [anon_sym_try] = ACTIONS(747),
        [anon_sym_with] = ACTIONS(747),
        [anon_sym_def] = ACTIONS(747),
        [anon_sym_class] = ACTIONS(747),
        [anon_sym_AT] = ACTIONS(749),
        [anon_sym_LBRACK] = ACTIONS(749),
        [anon_sym_LBRACE] = ACTIONS(749),
        [sym_number] = ACTIONS(747),
        [sym_identifier] = ACTIONS(751),
        [sym_comment] = ACTIONS(73),
        [sym__dedent] = ACTIONS(749),
    },
    [329] = {
        [anon_sym_COMMA] = ACTIONS(753),
        [anon_sym_COLON] = ACTIONS(753),
        [sym_comment] = ACTIONS(73),
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
        [anon_sym_print] = ACTIONS(83),
        [anon_sym_return] = ACTIONS(85),
        [anon_sym_del] = ACTIONS(87),
        [sym_pass_statement] = ACTIONS(89),
        [sym_break_statement] = ACTIONS(89),
        [sym_continue_statement] = ACTIONS(89),
        [anon_sym_LBRACK] = ACTIONS(107),
        [anon_sym_LBRACE] = ACTIONS(109),
        [sym_number] = ACTIONS(111),
        [sym_identifier] = ACTIONS(113),
        [sym_comment] = ACTIONS(73),
        [sym__indent] = ACTIONS(755),
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
        [anon_sym_print] = ACTIONS(83),
        [anon_sym_return] = ACTIONS(85),
        [anon_sym_del] = ACTIONS(87),
        [sym_pass_statement] = ACTIONS(89),
        [sym_break_statement] = ACTIONS(89),
        [sym_continue_statement] = ACTIONS(89),
        [anon_sym_if] = ACTIONS(589),
        [anon_sym_for] = ACTIONS(591),
        [anon_sym_while] = ACTIONS(593),
        [anon_sym_try] = ACTIONS(595),
        [anon_sym_with] = ACTIONS(597),
        [anon_sym_def] = ACTIONS(599),
        [anon_sym_class] = ACTIONS(601),
        [anon_sym_AT] = ACTIONS(105),
        [anon_sym_LBRACK] = ACTIONS(107),
        [anon_sym_LBRACE] = ACTIONS(109),
        [sym_number] = ACTIONS(111),
        [sym_identifier] = ACTIONS(113),
        [sym_comment] = ACTIONS(73),
        [sym__dedent] = ACTIONS(757),
    },
    [332] = {
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(757),
    },
    [333] = {
        [sym_except_clause] = STATE(336),
        [sym_finally_clause] = STATE(337),
        [aux_sym_try_statement_repeat1] = STATE(338),
        [anon_sym_except] = ACTIONS(759),
        [anon_sym_finally] = ACTIONS(761),
        [sym_comment] = ACTIONS(73),
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
        [anon_sym_LBRACK] = ACTIONS(117),
        [anon_sym_LBRACE] = ACTIONS(119),
        [sym_number] = ACTIONS(121),
        [sym_identifier] = ACTIONS(121),
        [sym_comment] = ACTIONS(73),
    },
    [335] = {
        [anon_sym_COLON] = ACTIONS(763),
        [sym_comment] = ACTIONS(73),
    },
    [336] = {
        [anon_sym_print] = ACTIONS(765),
        [anon_sym_return] = ACTIONS(765),
        [anon_sym_del] = ACTIONS(765),
        [sym_pass_statement] = ACTIONS(765),
        [sym_break_statement] = ACTIONS(765),
        [sym_continue_statement] = ACTIONS(765),
        [anon_sym_if] = ACTIONS(765),
        [anon_sym_else] = ACTIONS(765),
        [anon_sym_for] = ACTIONS(765),
        [anon_sym_while] = ACTIONS(765),
        [anon_sym_try] = ACTIONS(765),
        [anon_sym_except] = ACTIONS(765),
        [anon_sym_finally] = ACTIONS(765),
        [anon_sym_with] = ACTIONS(765),
        [anon_sym_def] = ACTIONS(765),
        [anon_sym_class] = ACTIONS(765),
        [anon_sym_AT] = ACTIONS(767),
        [anon_sym_LBRACK] = ACTIONS(767),
        [anon_sym_LBRACE] = ACTIONS(767),
        [sym_number] = ACTIONS(765),
        [sym_identifier] = ACTIONS(769),
        [sym_comment] = ACTIONS(73),
        [sym__dedent] = ACTIONS(767),
    },
    [337] = {
        [anon_sym_print] = ACTIONS(771),
        [anon_sym_return] = ACTIONS(771),
        [anon_sym_del] = ACTIONS(771),
        [sym_pass_statement] = ACTIONS(771),
        [sym_break_statement] = ACTIONS(771),
        [sym_continue_statement] = ACTIONS(771),
        [anon_sym_if] = ACTIONS(771),
        [anon_sym_for] = ACTIONS(771),
        [anon_sym_while] = ACTIONS(771),
        [anon_sym_try] = ACTIONS(771),
        [anon_sym_with] = ACTIONS(771),
        [anon_sym_def] = ACTIONS(771),
        [anon_sym_class] = ACTIONS(771),
        [anon_sym_AT] = ACTIONS(773),
        [anon_sym_LBRACK] = ACTIONS(773),
        [anon_sym_LBRACE] = ACTIONS(773),
        [sym_number] = ACTIONS(771),
        [sym_identifier] = ACTIONS(775),
        [sym_comment] = ACTIONS(73),
        [sym__dedent] = ACTIONS(773),
    },
    [338] = {
        [sym_else_clause] = STATE(340),
        [sym_except_clause] = STATE(341),
        [sym_finally_clause] = STATE(342),
        [anon_sym_print] = ACTIONS(771),
        [anon_sym_return] = ACTIONS(771),
        [anon_sym_del] = ACTIONS(771),
        [sym_pass_statement] = ACTIONS(771),
        [sym_break_statement] = ACTIONS(771),
        [sym_continue_statement] = ACTIONS(771),
        [anon_sym_if] = ACTIONS(771),
        [anon_sym_else] = ACTIONS(777),
        [anon_sym_for] = ACTIONS(771),
        [anon_sym_while] = ACTIONS(771),
        [anon_sym_try] = ACTIONS(771),
        [anon_sym_except] = ACTIONS(779),
        [anon_sym_finally] = ACTIONS(781),
        [anon_sym_with] = ACTIONS(771),
        [anon_sym_def] = ACTIONS(771),
        [anon_sym_class] = ACTIONS(771),
        [anon_sym_AT] = ACTIONS(773),
        [anon_sym_LBRACK] = ACTIONS(773),
        [anon_sym_LBRACE] = ACTIONS(773),
        [sym_number] = ACTIONS(771),
        [sym_identifier] = ACTIONS(775),
        [sym_comment] = ACTIONS(73),
        [sym__dedent] = ACTIONS(773),
    },
    [339] = {
        [anon_sym_COLON] = ACTIONS(783),
        [sym_comment] = ACTIONS(73),
    },
    [340] = {
        [sym_finally_clause] = STATE(343),
        [anon_sym_print] = ACTIONS(785),
        [anon_sym_return] = ACTIONS(785),
        [anon_sym_del] = ACTIONS(785),
        [sym_pass_statement] = ACTIONS(785),
        [sym_break_statement] = ACTIONS(785),
        [sym_continue_statement] = ACTIONS(785),
        [anon_sym_if] = ACTIONS(785),
        [anon_sym_for] = ACTIONS(785),
        [anon_sym_while] = ACTIONS(785),
        [anon_sym_try] = ACTIONS(785),
        [anon_sym_finally] = ACTIONS(781),
        [anon_sym_with] = ACTIONS(785),
        [anon_sym_def] = ACTIONS(785),
        [anon_sym_class] = ACTIONS(785),
        [anon_sym_AT] = ACTIONS(787),
        [anon_sym_LBRACK] = ACTIONS(787),
        [anon_sym_LBRACE] = ACTIONS(787),
        [sym_number] = ACTIONS(785),
        [sym_identifier] = ACTIONS(789),
        [sym_comment] = ACTIONS(73),
        [sym__dedent] = ACTIONS(787),
    },
    [341] = {
        [anon_sym_print] = ACTIONS(791),
        [anon_sym_return] = ACTIONS(791),
        [anon_sym_del] = ACTIONS(791),
        [sym_pass_statement] = ACTIONS(791),
        [sym_break_statement] = ACTIONS(791),
        [sym_continue_statement] = ACTIONS(791),
        [anon_sym_if] = ACTIONS(791),
        [anon_sym_else] = ACTIONS(791),
        [anon_sym_for] = ACTIONS(791),
        [anon_sym_while] = ACTIONS(791),
        [anon_sym_try] = ACTIONS(791),
        [anon_sym_except] = ACTIONS(791),
        [anon_sym_finally] = ACTIONS(791),
        [anon_sym_with] = ACTIONS(791),
        [anon_sym_def] = ACTIONS(791),
        [anon_sym_class] = ACTIONS(791),
        [anon_sym_AT] = ACTIONS(793),
        [anon_sym_LBRACK] = ACTIONS(793),
        [anon_sym_LBRACE] = ACTIONS(793),
        [sym_number] = ACTIONS(791),
        [sym_identifier] = ACTIONS(795),
        [sym_comment] = ACTIONS(73),
        [sym__dedent] = ACTIONS(793),
    },
    [342] = {
        [anon_sym_print] = ACTIONS(785),
        [anon_sym_return] = ACTIONS(785),
        [anon_sym_del] = ACTIONS(785),
        [sym_pass_statement] = ACTIONS(785),
        [sym_break_statement] = ACTIONS(785),
        [sym_continue_statement] = ACTIONS(785),
        [anon_sym_if] = ACTIONS(785),
        [anon_sym_for] = ACTIONS(785),
        [anon_sym_while] = ACTIONS(785),
        [anon_sym_try] = ACTIONS(785),
        [anon_sym_with] = ACTIONS(785),
        [anon_sym_def] = ACTIONS(785),
        [anon_sym_class] = ACTIONS(785),
        [anon_sym_AT] = ACTIONS(787),
        [anon_sym_LBRACK] = ACTIONS(787),
        [anon_sym_LBRACE] = ACTIONS(787),
        [sym_number] = ACTIONS(785),
        [sym_identifier] = ACTIONS(789),
        [sym_comment] = ACTIONS(73),
        [sym__dedent] = ACTIONS(787),
    },
    [343] = {
        [anon_sym_print] = ACTIONS(797),
        [anon_sym_return] = ACTIONS(797),
        [anon_sym_del] = ACTIONS(797),
        [sym_pass_statement] = ACTIONS(797),
        [sym_break_statement] = ACTIONS(797),
        [sym_continue_statement] = ACTIONS(797),
        [anon_sym_if] = ACTIONS(797),
        [anon_sym_for] = ACTIONS(797),
        [anon_sym_while] = ACTIONS(797),
        [anon_sym_try] = ACTIONS(797),
        [anon_sym_with] = ACTIONS(797),
        [anon_sym_def] = ACTIONS(797),
        [anon_sym_class] = ACTIONS(797),
        [anon_sym_AT] = ACTIONS(799),
        [anon_sym_LBRACK] = ACTIONS(799),
        [anon_sym_LBRACE] = ACTIONS(799),
        [sym_number] = ACTIONS(797),
        [sym_identifier] = ACTIONS(801),
        [sym_comment] = ACTIONS(73),
        [sym__dedent] = ACTIONS(799),
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
        [anon_sym_print] = ACTIONS(83),
        [anon_sym_return] = ACTIONS(85),
        [anon_sym_del] = ACTIONS(87),
        [sym_pass_statement] = ACTIONS(89),
        [sym_break_statement] = ACTIONS(89),
        [sym_continue_statement] = ACTIONS(89),
        [anon_sym_LBRACK] = ACTIONS(107),
        [anon_sym_LBRACE] = ACTIONS(109),
        [sym_number] = ACTIONS(111),
        [sym_identifier] = ACTIONS(113),
        [sym_comment] = ACTIONS(73),
        [sym__indent] = ACTIONS(641),
    },
    [345] = {
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
        [anon_sym_finally] = ACTIONS(803),
        [anon_sym_with] = ACTIONS(803),
        [anon_sym_def] = ACTIONS(803),
        [anon_sym_class] = ACTIONS(803),
        [anon_sym_AT] = ACTIONS(805),
        [anon_sym_LBRACK] = ACTIONS(805),
        [anon_sym_LBRACE] = ACTIONS(805),
        [sym_number] = ACTIONS(803),
        [sym_identifier] = ACTIONS(807),
        [sym_comment] = ACTIONS(73),
        [sym__dedent] = ACTIONS(805),
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
        [anon_sym_print] = ACTIONS(83),
        [anon_sym_return] = ACTIONS(85),
        [anon_sym_del] = ACTIONS(87),
        [sym_pass_statement] = ACTIONS(89),
        [sym_break_statement] = ACTIONS(89),
        [sym_continue_statement] = ACTIONS(89),
        [anon_sym_LBRACK] = ACTIONS(107),
        [anon_sym_LBRACE] = ACTIONS(109),
        [sym_number] = ACTIONS(111),
        [sym_identifier] = ACTIONS(113),
        [sym_comment] = ACTIONS(73),
        [sym__indent] = ACTIONS(641),
    },
    [347] = {
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
        [anon_sym_AT] = ACTIONS(811),
        [anon_sym_LBRACK] = ACTIONS(811),
        [anon_sym_LBRACE] = ACTIONS(811),
        [sym_number] = ACTIONS(809),
        [sym_identifier] = ACTIONS(813),
        [sym_comment] = ACTIONS(73),
        [sym__dedent] = ACTIONS(811),
    },
    [348] = {
        [anon_sym_COMMA] = ACTIONS(815),
        [anon_sym_COLON] = ACTIONS(817),
        [anon_sym_as] = ACTIONS(815),
        [anon_sym_LPAREN] = ACTIONS(223),
        [anon_sym_STAR] = ACTIONS(225),
        [anon_sym_PLUS] = ACTIONS(227),
        [anon_sym_DASH] = ACTIONS(227),
        [anon_sym_SLASH] = ACTIONS(229),
        [anon_sym_STAR_STAR] = ACTIONS(231),
        [anon_sym_PIPE] = ACTIONS(233),
        [anon_sym_AMP] = ACTIONS(235),
        [anon_sym_CARET] = ACTIONS(237),
        [anon_sym_LT_LT] = ACTIONS(227),
        [anon_sym_GT_GT] = ACTIONS(227),
        [anon_sym_LBRACK] = ACTIONS(239),
        [sym_comment] = ACTIONS(73),
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
        [anon_sym_LBRACK] = ACTIONS(117),
        [anon_sym_LBRACE] = ACTIONS(119),
        [sym_number] = ACTIONS(121),
        [sym_identifier] = ACTIONS(121),
        [sym_comment] = ACTIONS(73),
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
        [anon_sym_print] = ACTIONS(83),
        [anon_sym_return] = ACTIONS(85),
        [anon_sym_del] = ACTIONS(87),
        [sym_pass_statement] = ACTIONS(89),
        [sym_break_statement] = ACTIONS(89),
        [sym_continue_statement] = ACTIONS(89),
        [anon_sym_LBRACK] = ACTIONS(107),
        [anon_sym_LBRACE] = ACTIONS(109),
        [sym_number] = ACTIONS(111),
        [sym_identifier] = ACTIONS(113),
        [sym_comment] = ACTIONS(73),
        [sym__indent] = ACTIONS(641),
    },
    [351] = {
        [anon_sym_COLON] = ACTIONS(819),
        [anon_sym_LPAREN] = ACTIONS(223),
        [anon_sym_STAR] = ACTIONS(225),
        [anon_sym_PLUS] = ACTIONS(227),
        [anon_sym_DASH] = ACTIONS(227),
        [anon_sym_SLASH] = ACTIONS(229),
        [anon_sym_STAR_STAR] = ACTIONS(231),
        [anon_sym_PIPE] = ACTIONS(233),
        [anon_sym_AMP] = ACTIONS(235),
        [anon_sym_CARET] = ACTIONS(237),
        [anon_sym_LT_LT] = ACTIONS(227),
        [anon_sym_GT_GT] = ACTIONS(227),
        [anon_sym_LBRACK] = ACTIONS(239),
        [sym_comment] = ACTIONS(73),
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
        [anon_sym_print] = ACTIONS(83),
        [anon_sym_return] = ACTIONS(85),
        [anon_sym_del] = ACTIONS(87),
        [sym_pass_statement] = ACTIONS(89),
        [sym_break_statement] = ACTIONS(89),
        [sym_continue_statement] = ACTIONS(89),
        [anon_sym_LBRACK] = ACTIONS(107),
        [anon_sym_LBRACE] = ACTIONS(109),
        [sym_number] = ACTIONS(111),
        [sym_identifier] = ACTIONS(113),
        [sym_comment] = ACTIONS(73),
        [sym__indent] = ACTIONS(641),
    },
    [353] = {
        [anon_sym_print] = ACTIONS(821),
        [anon_sym_return] = ACTIONS(821),
        [anon_sym_del] = ACTIONS(821),
        [sym_pass_statement] = ACTIONS(821),
        [sym_break_statement] = ACTIONS(821),
        [sym_continue_statement] = ACTIONS(821),
        [anon_sym_if] = ACTIONS(821),
        [anon_sym_else] = ACTIONS(821),
        [anon_sym_for] = ACTIONS(821),
        [anon_sym_while] = ACTIONS(821),
        [anon_sym_try] = ACTIONS(821),
        [anon_sym_except] = ACTIONS(821),
        [anon_sym_finally] = ACTIONS(821),
        [anon_sym_with] = ACTIONS(821),
        [anon_sym_def] = ACTIONS(821),
        [anon_sym_class] = ACTIONS(821),
        [anon_sym_AT] = ACTIONS(823),
        [anon_sym_LBRACK] = ACTIONS(823),
        [anon_sym_LBRACE] = ACTIONS(823),
        [sym_number] = ACTIONS(821),
        [sym_identifier] = ACTIONS(825),
        [sym_comment] = ACTIONS(73),
        [sym__dedent] = ACTIONS(823),
    },
    [354] = {
        [anon_sym_print] = ACTIONS(827),
        [anon_sym_return] = ACTIONS(827),
        [anon_sym_del] = ACTIONS(827),
        [sym_pass_statement] = ACTIONS(827),
        [sym_break_statement] = ACTIONS(827),
        [sym_continue_statement] = ACTIONS(827),
        [anon_sym_if] = ACTIONS(827),
        [anon_sym_else] = ACTIONS(827),
        [anon_sym_for] = ACTIONS(827),
        [anon_sym_while] = ACTIONS(827),
        [anon_sym_try] = ACTIONS(827),
        [anon_sym_except] = ACTIONS(827),
        [anon_sym_finally] = ACTIONS(827),
        [anon_sym_with] = ACTIONS(827),
        [anon_sym_def] = ACTIONS(827),
        [anon_sym_class] = ACTIONS(827),
        [anon_sym_AT] = ACTIONS(829),
        [anon_sym_LBRACK] = ACTIONS(829),
        [anon_sym_LBRACE] = ACTIONS(829),
        [sym_number] = ACTIONS(827),
        [sym_identifier] = ACTIONS(831),
        [sym_comment] = ACTIONS(73),
        [sym__dedent] = ACTIONS(829),
    },
    [355] = {
        [anon_sym_except] = ACTIONS(611),
        [anon_sym_finally] = ACTIONS(611),
        [sym_comment] = ACTIONS(73),
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
        [anon_sym_print] = ACTIONS(83),
        [anon_sym_return] = ACTIONS(85),
        [anon_sym_del] = ACTIONS(87),
        [sym_pass_statement] = ACTIONS(89),
        [sym_break_statement] = ACTIONS(89),
        [sym_continue_statement] = ACTIONS(89),
        [anon_sym_if] = ACTIONS(589),
        [anon_sym_for] = ACTIONS(591),
        [anon_sym_while] = ACTIONS(593),
        [anon_sym_try] = ACTIONS(595),
        [anon_sym_with] = ACTIONS(597),
        [anon_sym_def] = ACTIONS(599),
        [anon_sym_class] = ACTIONS(601),
        [anon_sym_AT] = ACTIONS(105),
        [anon_sym_LBRACK] = ACTIONS(107),
        [anon_sym_LBRACE] = ACTIONS(109),
        [sym_number] = ACTIONS(111),
        [sym_identifier] = ACTIONS(113),
        [sym_comment] = ACTIONS(73),
        [sym__dedent] = ACTIONS(833),
    },
    [357] = {
        [anon_sym_except] = ACTIONS(631),
        [anon_sym_finally] = ACTIONS(631),
        [sym_comment] = ACTIONS(73),
    },
    [358] = {
        [anon_sym_COLON] = ACTIONS(835),
        [anon_sym_LPAREN] = ACTIONS(223),
        [anon_sym_STAR] = ACTIONS(225),
        [anon_sym_PLUS] = ACTIONS(227),
        [anon_sym_DASH] = ACTIONS(227),
        [anon_sym_SLASH] = ACTIONS(229),
        [anon_sym_STAR_STAR] = ACTIONS(231),
        [anon_sym_PIPE] = ACTIONS(233),
        [anon_sym_AMP] = ACTIONS(235),
        [anon_sym_CARET] = ACTIONS(237),
        [anon_sym_LT_LT] = ACTIONS(227),
        [anon_sym_GT_GT] = ACTIONS(227),
        [anon_sym_LBRACK] = ACTIONS(239),
        [sym_comment] = ACTIONS(73),
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
        [anon_sym_print] = ACTIONS(83),
        [anon_sym_return] = ACTIONS(85),
        [anon_sym_del] = ACTIONS(87),
        [sym_pass_statement] = ACTIONS(89),
        [sym_break_statement] = ACTIONS(89),
        [sym_continue_statement] = ACTIONS(89),
        [anon_sym_LBRACK] = ACTIONS(107),
        [anon_sym_LBRACE] = ACTIONS(109),
        [sym_number] = ACTIONS(111),
        [sym_identifier] = ACTIONS(113),
        [sym_comment] = ACTIONS(73),
        [sym__indent] = ACTIONS(641),
    },
    [360] = {
        [sym_else_clause] = STATE(361),
        [anon_sym_print] = ACTIONS(837),
        [anon_sym_return] = ACTIONS(837),
        [anon_sym_del] = ACTIONS(837),
        [sym_pass_statement] = ACTIONS(837),
        [sym_break_statement] = ACTIONS(837),
        [sym_continue_statement] = ACTIONS(837),
        [anon_sym_if] = ACTIONS(837),
        [anon_sym_else] = ACTIONS(777),
        [anon_sym_for] = ACTIONS(837),
        [anon_sym_while] = ACTIONS(837),
        [anon_sym_try] = ACTIONS(837),
        [anon_sym_with] = ACTIONS(837),
        [anon_sym_def] = ACTIONS(837),
        [anon_sym_class] = ACTIONS(837),
        [anon_sym_AT] = ACTIONS(839),
        [anon_sym_LBRACK] = ACTIONS(839),
        [anon_sym_LBRACE] = ACTIONS(839),
        [sym_number] = ACTIONS(837),
        [sym_identifier] = ACTIONS(841),
        [sym_comment] = ACTIONS(73),
        [sym__dedent] = ACTIONS(839),
    },
    [361] = {
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
        [anon_sym_LBRACK] = ACTIONS(845),
        [anon_sym_LBRACE] = ACTIONS(845),
        [sym_number] = ACTIONS(843),
        [sym_identifier] = ACTIONS(847),
        [sym_comment] = ACTIONS(73),
        [sym__dedent] = ACTIONS(845),
    },
    [362] = {
        [anon_sym_in] = ACTIONS(849),
        [sym_comment] = ACTIONS(73),
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
        [anon_sym_LBRACK] = ACTIONS(117),
        [anon_sym_LBRACE] = ACTIONS(119),
        [sym_number] = ACTIONS(121),
        [sym_identifier] = ACTIONS(121),
        [sym_comment] = ACTIONS(73),
    },
    [364] = {
        [anon_sym_COLON] = ACTIONS(851),
        [sym_comment] = ACTIONS(73),
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
        [anon_sym_print] = ACTIONS(83),
        [anon_sym_return] = ACTIONS(85),
        [anon_sym_del] = ACTIONS(87),
        [sym_pass_statement] = ACTIONS(89),
        [sym_break_statement] = ACTIONS(89),
        [sym_continue_statement] = ACTIONS(89),
        [anon_sym_LBRACK] = ACTIONS(107),
        [anon_sym_LBRACE] = ACTIONS(109),
        [sym_number] = ACTIONS(111),
        [sym_identifier] = ACTIONS(113),
        [sym_comment] = ACTIONS(73),
        [sym__indent] = ACTIONS(641),
    },
    [366] = {
        [sym_else_clause] = STATE(367),
        [anon_sym_print] = ACTIONS(853),
        [anon_sym_return] = ACTIONS(853),
        [anon_sym_del] = ACTIONS(853),
        [sym_pass_statement] = ACTIONS(853),
        [sym_break_statement] = ACTIONS(853),
        [sym_continue_statement] = ACTIONS(853),
        [anon_sym_if] = ACTIONS(853),
        [anon_sym_else] = ACTIONS(777),
        [anon_sym_for] = ACTIONS(853),
        [anon_sym_while] = ACTIONS(853),
        [anon_sym_try] = ACTIONS(853),
        [anon_sym_with] = ACTIONS(853),
        [anon_sym_def] = ACTIONS(853),
        [anon_sym_class] = ACTIONS(853),
        [anon_sym_AT] = ACTIONS(855),
        [anon_sym_LBRACK] = ACTIONS(855),
        [anon_sym_LBRACE] = ACTIONS(855),
        [sym_number] = ACTIONS(853),
        [sym_identifier] = ACTIONS(857),
        [sym_comment] = ACTIONS(73),
        [sym__dedent] = ACTIONS(855),
    },
    [367] = {
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
        [anon_sym_LBRACK] = ACTIONS(861),
        [anon_sym_LBRACE] = ACTIONS(861),
        [sym_number] = ACTIONS(859),
        [sym_identifier] = ACTIONS(863),
        [sym_comment] = ACTIONS(73),
        [sym__dedent] = ACTIONS(861),
    },
    [368] = {
        [anon_sym_COLON] = ACTIONS(865),
        [anon_sym_LPAREN] = ACTIONS(223),
        [anon_sym_STAR] = ACTIONS(225),
        [anon_sym_PLUS] = ACTIONS(227),
        [anon_sym_DASH] = ACTIONS(227),
        [anon_sym_SLASH] = ACTIONS(229),
        [anon_sym_STAR_STAR] = ACTIONS(231),
        [anon_sym_PIPE] = ACTIONS(233),
        [anon_sym_AMP] = ACTIONS(235),
        [anon_sym_CARET] = ACTIONS(237),
        [anon_sym_LT_LT] = ACTIONS(227),
        [anon_sym_GT_GT] = ACTIONS(227),
        [anon_sym_LBRACK] = ACTIONS(239),
        [sym_comment] = ACTIONS(73),
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
        [anon_sym_print] = ACTIONS(83),
        [anon_sym_return] = ACTIONS(85),
        [anon_sym_del] = ACTIONS(87),
        [sym_pass_statement] = ACTIONS(89),
        [sym_break_statement] = ACTIONS(89),
        [sym_continue_statement] = ACTIONS(89),
        [anon_sym_LBRACK] = ACTIONS(107),
        [anon_sym_LBRACE] = ACTIONS(109),
        [sym_number] = ACTIONS(111),
        [sym_identifier] = ACTIONS(113),
        [sym_comment] = ACTIONS(73),
        [sym__indent] = ACTIONS(641),
    },
    [370] = {
        [sym_elif_clause] = STATE(372),
        [sym_else_clause] = STATE(373),
        [aux_sym_if_statement_repeat1] = STATE(374),
        [anon_sym_print] = ACTIONS(867),
        [anon_sym_return] = ACTIONS(867),
        [anon_sym_del] = ACTIONS(867),
        [sym_pass_statement] = ACTIONS(867),
        [sym_break_statement] = ACTIONS(867),
        [sym_continue_statement] = ACTIONS(867),
        [anon_sym_if] = ACTIONS(867),
        [anon_sym_elif] = ACTIONS(869),
        [anon_sym_else] = ACTIONS(777),
        [anon_sym_for] = ACTIONS(867),
        [anon_sym_while] = ACTIONS(867),
        [anon_sym_try] = ACTIONS(867),
        [anon_sym_with] = ACTIONS(867),
        [anon_sym_def] = ACTIONS(867),
        [anon_sym_class] = ACTIONS(867),
        [anon_sym_AT] = ACTIONS(871),
        [anon_sym_LBRACK] = ACTIONS(871),
        [anon_sym_LBRACE] = ACTIONS(871),
        [sym_number] = ACTIONS(867),
        [sym_identifier] = ACTIONS(873),
        [sym_comment] = ACTIONS(73),
        [sym__dedent] = ACTIONS(871),
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
        [anon_sym_LBRACK] = ACTIONS(117),
        [anon_sym_LBRACE] = ACTIONS(119),
        [sym_number] = ACTIONS(121),
        [sym_identifier] = ACTIONS(121),
        [sym_comment] = ACTIONS(73),
    },
    [372] = {
        [anon_sym_print] = ACTIONS(875),
        [anon_sym_return] = ACTIONS(875),
        [anon_sym_del] = ACTIONS(875),
        [sym_pass_statement] = ACTIONS(875),
        [sym_break_statement] = ACTIONS(875),
        [sym_continue_statement] = ACTIONS(875),
        [anon_sym_if] = ACTIONS(875),
        [anon_sym_elif] = ACTIONS(875),
        [anon_sym_else] = ACTIONS(875),
        [anon_sym_for] = ACTIONS(875),
        [anon_sym_while] = ACTIONS(875),
        [anon_sym_try] = ACTIONS(875),
        [anon_sym_with] = ACTIONS(875),
        [anon_sym_def] = ACTIONS(875),
        [anon_sym_class] = ACTIONS(875),
        [anon_sym_AT] = ACTIONS(877),
        [anon_sym_LBRACK] = ACTIONS(877),
        [anon_sym_LBRACE] = ACTIONS(877),
        [sym_number] = ACTIONS(875),
        [sym_identifier] = ACTIONS(879),
        [sym_comment] = ACTIONS(73),
        [sym__dedent] = ACTIONS(877),
    },
    [373] = {
        [anon_sym_print] = ACTIONS(881),
        [anon_sym_return] = ACTIONS(881),
        [anon_sym_del] = ACTIONS(881),
        [sym_pass_statement] = ACTIONS(881),
        [sym_break_statement] = ACTIONS(881),
        [sym_continue_statement] = ACTIONS(881),
        [anon_sym_if] = ACTIONS(881),
        [anon_sym_for] = ACTIONS(881),
        [anon_sym_while] = ACTIONS(881),
        [anon_sym_try] = ACTIONS(881),
        [anon_sym_with] = ACTIONS(881),
        [anon_sym_def] = ACTIONS(881),
        [anon_sym_class] = ACTIONS(881),
        [anon_sym_AT] = ACTIONS(883),
        [anon_sym_LBRACK] = ACTIONS(883),
        [anon_sym_LBRACE] = ACTIONS(883),
        [sym_number] = ACTIONS(881),
        [sym_identifier] = ACTIONS(885),
        [sym_comment] = ACTIONS(73),
        [sym__dedent] = ACTIONS(883),
    },
    [374] = {
        [sym_elif_clause] = STATE(375),
        [sym_else_clause] = STATE(376),
        [anon_sym_print] = ACTIONS(881),
        [anon_sym_return] = ACTIONS(881),
        [anon_sym_del] = ACTIONS(881),
        [sym_pass_statement] = ACTIONS(881),
        [sym_break_statement] = ACTIONS(881),
        [sym_continue_statement] = ACTIONS(881),
        [anon_sym_if] = ACTIONS(881),
        [anon_sym_elif] = ACTIONS(869),
        [anon_sym_else] = ACTIONS(777),
        [anon_sym_for] = ACTIONS(881),
        [anon_sym_while] = ACTIONS(881),
        [anon_sym_try] = ACTIONS(881),
        [anon_sym_with] = ACTIONS(881),
        [anon_sym_def] = ACTIONS(881),
        [anon_sym_class] = ACTIONS(881),
        [anon_sym_AT] = ACTIONS(883),
        [anon_sym_LBRACK] = ACTIONS(883),
        [anon_sym_LBRACE] = ACTIONS(883),
        [sym_number] = ACTIONS(881),
        [sym_identifier] = ACTIONS(885),
        [sym_comment] = ACTIONS(73),
        [sym__dedent] = ACTIONS(883),
    },
    [375] = {
        [anon_sym_print] = ACTIONS(887),
        [anon_sym_return] = ACTIONS(887),
        [anon_sym_del] = ACTIONS(887),
        [sym_pass_statement] = ACTIONS(887),
        [sym_break_statement] = ACTIONS(887),
        [sym_continue_statement] = ACTIONS(887),
        [anon_sym_if] = ACTIONS(887),
        [anon_sym_elif] = ACTIONS(887),
        [anon_sym_else] = ACTIONS(887),
        [anon_sym_for] = ACTIONS(887),
        [anon_sym_while] = ACTIONS(887),
        [anon_sym_try] = ACTIONS(887),
        [anon_sym_with] = ACTIONS(887),
        [anon_sym_def] = ACTIONS(887),
        [anon_sym_class] = ACTIONS(887),
        [anon_sym_AT] = ACTIONS(889),
        [anon_sym_LBRACK] = ACTIONS(889),
        [anon_sym_LBRACE] = ACTIONS(889),
        [sym_number] = ACTIONS(887),
        [sym_identifier] = ACTIONS(891),
        [sym_comment] = ACTIONS(73),
        [sym__dedent] = ACTIONS(889),
    },
    [376] = {
        [anon_sym_print] = ACTIONS(893),
        [anon_sym_return] = ACTIONS(893),
        [anon_sym_del] = ACTIONS(893),
        [sym_pass_statement] = ACTIONS(893),
        [sym_break_statement] = ACTIONS(893),
        [sym_continue_statement] = ACTIONS(893),
        [anon_sym_if] = ACTIONS(893),
        [anon_sym_for] = ACTIONS(893),
        [anon_sym_while] = ACTIONS(893),
        [anon_sym_try] = ACTIONS(893),
        [anon_sym_with] = ACTIONS(893),
        [anon_sym_def] = ACTIONS(893),
        [anon_sym_class] = ACTIONS(893),
        [anon_sym_AT] = ACTIONS(895),
        [anon_sym_LBRACK] = ACTIONS(895),
        [anon_sym_LBRACE] = ACTIONS(895),
        [sym_number] = ACTIONS(893),
        [sym_identifier] = ACTIONS(897),
        [sym_comment] = ACTIONS(73),
        [sym__dedent] = ACTIONS(895),
    },
    [377] = {
        [anon_sym_COLON] = ACTIONS(899),
        [anon_sym_LPAREN] = ACTIONS(223),
        [anon_sym_STAR] = ACTIONS(225),
        [anon_sym_PLUS] = ACTIONS(227),
        [anon_sym_DASH] = ACTIONS(227),
        [anon_sym_SLASH] = ACTIONS(229),
        [anon_sym_STAR_STAR] = ACTIONS(231),
        [anon_sym_PIPE] = ACTIONS(233),
        [anon_sym_AMP] = ACTIONS(235),
        [anon_sym_CARET] = ACTIONS(237),
        [anon_sym_LT_LT] = ACTIONS(227),
        [anon_sym_GT_GT] = ACTIONS(227),
        [anon_sym_LBRACK] = ACTIONS(239),
        [sym_comment] = ACTIONS(73),
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
        [anon_sym_print] = ACTIONS(83),
        [anon_sym_return] = ACTIONS(85),
        [anon_sym_del] = ACTIONS(87),
        [sym_pass_statement] = ACTIONS(89),
        [sym_break_statement] = ACTIONS(89),
        [sym_continue_statement] = ACTIONS(89),
        [anon_sym_LBRACK] = ACTIONS(107),
        [anon_sym_LBRACE] = ACTIONS(109),
        [sym_number] = ACTIONS(111),
        [sym_identifier] = ACTIONS(113),
        [sym_comment] = ACTIONS(73),
        [sym__indent] = ACTIONS(641),
    },
    [379] = {
        [anon_sym_print] = ACTIONS(901),
        [anon_sym_return] = ACTIONS(901),
        [anon_sym_del] = ACTIONS(901),
        [sym_pass_statement] = ACTIONS(901),
        [sym_break_statement] = ACTIONS(901),
        [sym_continue_statement] = ACTIONS(901),
        [anon_sym_if] = ACTIONS(901),
        [anon_sym_elif] = ACTIONS(901),
        [anon_sym_else] = ACTIONS(901),
        [anon_sym_for] = ACTIONS(901),
        [anon_sym_while] = ACTIONS(901),
        [anon_sym_try] = ACTIONS(901),
        [anon_sym_with] = ACTIONS(901),
        [anon_sym_def] = ACTIONS(901),
        [anon_sym_class] = ACTIONS(901),
        [anon_sym_AT] = ACTIONS(903),
        [anon_sym_LBRACK] = ACTIONS(903),
        [anon_sym_LBRACE] = ACTIONS(903),
        [sym_number] = ACTIONS(901),
        [sym_identifier] = ACTIONS(905),
        [sym_comment] = ACTIONS(73),
        [sym__dedent] = ACTIONS(903),
    },
    [380] = {
        [ts_builtin_sym_end] = ACTIONS(653),
        [anon_sym_SEMI] = ACTIONS(653),
        [anon_sym_print] = ACTIONS(651),
        [anon_sym_return] = ACTIONS(651),
        [anon_sym_del] = ACTIONS(651),
        [sym_pass_statement] = ACTIONS(651),
        [sym_break_statement] = ACTIONS(651),
        [sym_continue_statement] = ACTIONS(651),
        [anon_sym_if] = ACTIONS(651),
        [anon_sym_for] = ACTIONS(651),
        [anon_sym_while] = ACTIONS(651),
        [anon_sym_try] = ACTIONS(651),
        [anon_sym_with] = ACTIONS(651),
        [anon_sym_def] = ACTIONS(651),
        [anon_sym_class] = ACTIONS(651),
        [anon_sym_AT] = ACTIONS(653),
        [anon_sym_LBRACK] = ACTIONS(653),
        [anon_sym_LBRACE] = ACTIONS(653),
        [sym_number] = ACTIONS(651),
        [sym_identifier] = ACTIONS(655),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(653),
    },
    [381] = {
        [sym_parameters] = STATE(382),
        [anon_sym_LPAREN] = ACTIONS(657),
        [sym_comment] = ACTIONS(73),
    },
    [382] = {
        [anon_sym_COLON] = ACTIONS(907),
        [sym_comment] = ACTIONS(73),
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
        [anon_sym_print] = ACTIONS(83),
        [anon_sym_return] = ACTIONS(85),
        [anon_sym_del] = ACTIONS(87),
        [sym_pass_statement] = ACTIONS(89),
        [sym_break_statement] = ACTIONS(89),
        [sym_continue_statement] = ACTIONS(89),
        [anon_sym_LBRACK] = ACTIONS(107),
        [anon_sym_LBRACE] = ACTIONS(109),
        [sym_number] = ACTIONS(111),
        [sym_identifier] = ACTIONS(113),
        [sym_comment] = ACTIONS(73),
        [sym__indent] = ACTIONS(583),
    },
    [384] = {
        [ts_builtin_sym_end] = ACTIONS(669),
        [anon_sym_SEMI] = ACTIONS(669),
        [anon_sym_print] = ACTIONS(667),
        [anon_sym_return] = ACTIONS(667),
        [anon_sym_del] = ACTIONS(667),
        [sym_pass_statement] = ACTIONS(667),
        [sym_break_statement] = ACTIONS(667),
        [sym_continue_statement] = ACTIONS(667),
        [anon_sym_if] = ACTIONS(667),
        [anon_sym_for] = ACTIONS(667),
        [anon_sym_while] = ACTIONS(667),
        [anon_sym_try] = ACTIONS(667),
        [anon_sym_with] = ACTIONS(667),
        [anon_sym_def] = ACTIONS(667),
        [anon_sym_class] = ACTIONS(667),
        [anon_sym_AT] = ACTIONS(669),
        [anon_sym_LBRACK] = ACTIONS(669),
        [anon_sym_LBRACE] = ACTIONS(669),
        [sym_number] = ACTIONS(667),
        [sym_identifier] = ACTIONS(671),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(669),
    },
    [385] = {
        [aux_sym_with_statement_repeat1] = STATE(387),
        [anon_sym_COMMA] = ACTIONS(725),
        [anon_sym_COLON] = ACTIONS(909),
        [sym_comment] = ACTIONS(73),
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
        [anon_sym_print] = ACTIONS(83),
        [anon_sym_return] = ACTIONS(85),
        [anon_sym_del] = ACTIONS(87),
        [sym_pass_statement] = ACTIONS(89),
        [sym_break_statement] = ACTIONS(89),
        [sym_continue_statement] = ACTIONS(89),
        [anon_sym_LBRACK] = ACTIONS(107),
        [anon_sym_LBRACE] = ACTIONS(109),
        [sym_number] = ACTIONS(111),
        [sym_identifier] = ACTIONS(113),
        [sym_comment] = ACTIONS(73),
        [sym__indent] = ACTIONS(583),
    },
    [387] = {
        [anon_sym_COMMA] = ACTIONS(735),
        [anon_sym_COLON] = ACTIONS(911),
        [sym_comment] = ACTIONS(73),
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
        [anon_sym_print] = ACTIONS(83),
        [anon_sym_return] = ACTIONS(85),
        [anon_sym_del] = ACTIONS(87),
        [sym_pass_statement] = ACTIONS(89),
        [sym_break_statement] = ACTIONS(89),
        [sym_continue_statement] = ACTIONS(89),
        [anon_sym_LBRACK] = ACTIONS(107),
        [anon_sym_LBRACE] = ACTIONS(109),
        [sym_number] = ACTIONS(111),
        [sym_identifier] = ACTIONS(113),
        [sym_comment] = ACTIONS(73),
        [sym__indent] = ACTIONS(583),
    },
    [389] = {
        [ts_builtin_sym_end] = ACTIONS(741),
        [anon_sym_SEMI] = ACTIONS(741),
        [anon_sym_print] = ACTIONS(739),
        [anon_sym_return] = ACTIONS(739),
        [anon_sym_del] = ACTIONS(739),
        [sym_pass_statement] = ACTIONS(739),
        [sym_break_statement] = ACTIONS(739),
        [sym_continue_statement] = ACTIONS(739),
        [anon_sym_if] = ACTIONS(739),
        [anon_sym_for] = ACTIONS(739),
        [anon_sym_while] = ACTIONS(739),
        [anon_sym_try] = ACTIONS(739),
        [anon_sym_with] = ACTIONS(739),
        [anon_sym_def] = ACTIONS(739),
        [anon_sym_class] = ACTIONS(739),
        [anon_sym_AT] = ACTIONS(741),
        [anon_sym_LBRACK] = ACTIONS(741),
        [anon_sym_LBRACE] = ACTIONS(741),
        [sym_number] = ACTIONS(739),
        [sym_identifier] = ACTIONS(743),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(741),
    },
    [390] = {
        [ts_builtin_sym_end] = ACTIONS(749),
        [anon_sym_SEMI] = ACTIONS(749),
        [anon_sym_print] = ACTIONS(747),
        [anon_sym_return] = ACTIONS(747),
        [anon_sym_del] = ACTIONS(747),
        [sym_pass_statement] = ACTIONS(747),
        [sym_break_statement] = ACTIONS(747),
        [sym_continue_statement] = ACTIONS(747),
        [anon_sym_if] = ACTIONS(747),
        [anon_sym_for] = ACTIONS(747),
        [anon_sym_while] = ACTIONS(747),
        [anon_sym_try] = ACTIONS(747),
        [anon_sym_with] = ACTIONS(747),
        [anon_sym_def] = ACTIONS(747),
        [anon_sym_class] = ACTIONS(747),
        [anon_sym_AT] = ACTIONS(749),
        [anon_sym_LBRACK] = ACTIONS(749),
        [anon_sym_LBRACE] = ACTIONS(749),
        [sym_number] = ACTIONS(747),
        [sym_identifier] = ACTIONS(751),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(749),
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
        [anon_sym_print] = ACTIONS(83),
        [anon_sym_return] = ACTIONS(85),
        [anon_sym_del] = ACTIONS(87),
        [sym_pass_statement] = ACTIONS(89),
        [sym_break_statement] = ACTIONS(89),
        [sym_continue_statement] = ACTIONS(89),
        [anon_sym_LBRACK] = ACTIONS(107),
        [anon_sym_LBRACE] = ACTIONS(109),
        [sym_number] = ACTIONS(111),
        [sym_identifier] = ACTIONS(113),
        [sym_comment] = ACTIONS(73),
        [sym__indent] = ACTIONS(755),
    },
    [392] = {
        [sym_except_clause] = STATE(395),
        [sym_finally_clause] = STATE(396),
        [aux_sym_try_statement_repeat1] = STATE(397),
        [anon_sym_except] = ACTIONS(913),
        [anon_sym_finally] = ACTIONS(915),
        [sym_comment] = ACTIONS(73),
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
        [anon_sym_LBRACK] = ACTIONS(117),
        [anon_sym_LBRACE] = ACTIONS(119),
        [sym_number] = ACTIONS(121),
        [sym_identifier] = ACTIONS(121),
        [sym_comment] = ACTIONS(73),
    },
    [394] = {
        [anon_sym_COLON] = ACTIONS(917),
        [sym_comment] = ACTIONS(73),
    },
    [395] = {
        [ts_builtin_sym_end] = ACTIONS(767),
        [anon_sym_SEMI] = ACTIONS(767),
        [anon_sym_print] = ACTIONS(765),
        [anon_sym_return] = ACTIONS(765),
        [anon_sym_del] = ACTIONS(765),
        [sym_pass_statement] = ACTIONS(765),
        [sym_break_statement] = ACTIONS(765),
        [sym_continue_statement] = ACTIONS(765),
        [anon_sym_if] = ACTIONS(765),
        [anon_sym_else] = ACTIONS(765),
        [anon_sym_for] = ACTIONS(765),
        [anon_sym_while] = ACTIONS(765),
        [anon_sym_try] = ACTIONS(765),
        [anon_sym_except] = ACTIONS(765),
        [anon_sym_finally] = ACTIONS(765),
        [anon_sym_with] = ACTIONS(765),
        [anon_sym_def] = ACTIONS(765),
        [anon_sym_class] = ACTIONS(765),
        [anon_sym_AT] = ACTIONS(767),
        [anon_sym_LBRACK] = ACTIONS(767),
        [anon_sym_LBRACE] = ACTIONS(767),
        [sym_number] = ACTIONS(765),
        [sym_identifier] = ACTIONS(769),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(767),
    },
    [396] = {
        [ts_builtin_sym_end] = ACTIONS(773),
        [anon_sym_SEMI] = ACTIONS(773),
        [anon_sym_print] = ACTIONS(771),
        [anon_sym_return] = ACTIONS(771),
        [anon_sym_del] = ACTIONS(771),
        [sym_pass_statement] = ACTIONS(771),
        [sym_break_statement] = ACTIONS(771),
        [sym_continue_statement] = ACTIONS(771),
        [anon_sym_if] = ACTIONS(771),
        [anon_sym_for] = ACTIONS(771),
        [anon_sym_while] = ACTIONS(771),
        [anon_sym_try] = ACTIONS(771),
        [anon_sym_with] = ACTIONS(771),
        [anon_sym_def] = ACTIONS(771),
        [anon_sym_class] = ACTIONS(771),
        [anon_sym_AT] = ACTIONS(773),
        [anon_sym_LBRACK] = ACTIONS(773),
        [anon_sym_LBRACE] = ACTIONS(773),
        [sym_number] = ACTIONS(771),
        [sym_identifier] = ACTIONS(775),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(773),
    },
    [397] = {
        [sym_else_clause] = STATE(399),
        [sym_except_clause] = STATE(400),
        [sym_finally_clause] = STATE(401),
        [ts_builtin_sym_end] = ACTIONS(773),
        [anon_sym_SEMI] = ACTIONS(773),
        [anon_sym_print] = ACTIONS(771),
        [anon_sym_return] = ACTIONS(771),
        [anon_sym_del] = ACTIONS(771),
        [sym_pass_statement] = ACTIONS(771),
        [sym_break_statement] = ACTIONS(771),
        [sym_continue_statement] = ACTIONS(771),
        [anon_sym_if] = ACTIONS(771),
        [anon_sym_else] = ACTIONS(919),
        [anon_sym_for] = ACTIONS(771),
        [anon_sym_while] = ACTIONS(771),
        [anon_sym_try] = ACTIONS(771),
        [anon_sym_except] = ACTIONS(921),
        [anon_sym_finally] = ACTIONS(923),
        [anon_sym_with] = ACTIONS(771),
        [anon_sym_def] = ACTIONS(771),
        [anon_sym_class] = ACTIONS(771),
        [anon_sym_AT] = ACTIONS(773),
        [anon_sym_LBRACK] = ACTIONS(773),
        [anon_sym_LBRACE] = ACTIONS(773),
        [sym_number] = ACTIONS(771),
        [sym_identifier] = ACTIONS(775),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(773),
    },
    [398] = {
        [anon_sym_COLON] = ACTIONS(925),
        [sym_comment] = ACTIONS(73),
    },
    [399] = {
        [sym_finally_clause] = STATE(402),
        [ts_builtin_sym_end] = ACTIONS(787),
        [anon_sym_SEMI] = ACTIONS(787),
        [anon_sym_print] = ACTIONS(785),
        [anon_sym_return] = ACTIONS(785),
        [anon_sym_del] = ACTIONS(785),
        [sym_pass_statement] = ACTIONS(785),
        [sym_break_statement] = ACTIONS(785),
        [sym_continue_statement] = ACTIONS(785),
        [anon_sym_if] = ACTIONS(785),
        [anon_sym_for] = ACTIONS(785),
        [anon_sym_while] = ACTIONS(785),
        [anon_sym_try] = ACTIONS(785),
        [anon_sym_finally] = ACTIONS(923),
        [anon_sym_with] = ACTIONS(785),
        [anon_sym_def] = ACTIONS(785),
        [anon_sym_class] = ACTIONS(785),
        [anon_sym_AT] = ACTIONS(787),
        [anon_sym_LBRACK] = ACTIONS(787),
        [anon_sym_LBRACE] = ACTIONS(787),
        [sym_number] = ACTIONS(785),
        [sym_identifier] = ACTIONS(789),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(787),
    },
    [400] = {
        [ts_builtin_sym_end] = ACTIONS(793),
        [anon_sym_SEMI] = ACTIONS(793),
        [anon_sym_print] = ACTIONS(791),
        [anon_sym_return] = ACTIONS(791),
        [anon_sym_del] = ACTIONS(791),
        [sym_pass_statement] = ACTIONS(791),
        [sym_break_statement] = ACTIONS(791),
        [sym_continue_statement] = ACTIONS(791),
        [anon_sym_if] = ACTIONS(791),
        [anon_sym_else] = ACTIONS(791),
        [anon_sym_for] = ACTIONS(791),
        [anon_sym_while] = ACTIONS(791),
        [anon_sym_try] = ACTIONS(791),
        [anon_sym_except] = ACTIONS(791),
        [anon_sym_finally] = ACTIONS(791),
        [anon_sym_with] = ACTIONS(791),
        [anon_sym_def] = ACTIONS(791),
        [anon_sym_class] = ACTIONS(791),
        [anon_sym_AT] = ACTIONS(793),
        [anon_sym_LBRACK] = ACTIONS(793),
        [anon_sym_LBRACE] = ACTIONS(793),
        [sym_number] = ACTIONS(791),
        [sym_identifier] = ACTIONS(795),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(793),
    },
    [401] = {
        [ts_builtin_sym_end] = ACTIONS(787),
        [anon_sym_SEMI] = ACTIONS(787),
        [anon_sym_print] = ACTIONS(785),
        [anon_sym_return] = ACTIONS(785),
        [anon_sym_del] = ACTIONS(785),
        [sym_pass_statement] = ACTIONS(785),
        [sym_break_statement] = ACTIONS(785),
        [sym_continue_statement] = ACTIONS(785),
        [anon_sym_if] = ACTIONS(785),
        [anon_sym_for] = ACTIONS(785),
        [anon_sym_while] = ACTIONS(785),
        [anon_sym_try] = ACTIONS(785),
        [anon_sym_with] = ACTIONS(785),
        [anon_sym_def] = ACTIONS(785),
        [anon_sym_class] = ACTIONS(785),
        [anon_sym_AT] = ACTIONS(787),
        [anon_sym_LBRACK] = ACTIONS(787),
        [anon_sym_LBRACE] = ACTIONS(787),
        [sym_number] = ACTIONS(785),
        [sym_identifier] = ACTIONS(789),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(787),
    },
    [402] = {
        [ts_builtin_sym_end] = ACTIONS(799),
        [anon_sym_SEMI] = ACTIONS(799),
        [anon_sym_print] = ACTIONS(797),
        [anon_sym_return] = ACTIONS(797),
        [anon_sym_del] = ACTIONS(797),
        [sym_pass_statement] = ACTIONS(797),
        [sym_break_statement] = ACTIONS(797),
        [sym_continue_statement] = ACTIONS(797),
        [anon_sym_if] = ACTIONS(797),
        [anon_sym_for] = ACTIONS(797),
        [anon_sym_while] = ACTIONS(797),
        [anon_sym_try] = ACTIONS(797),
        [anon_sym_with] = ACTIONS(797),
        [anon_sym_def] = ACTIONS(797),
        [anon_sym_class] = ACTIONS(797),
        [anon_sym_AT] = ACTIONS(799),
        [anon_sym_LBRACK] = ACTIONS(799),
        [anon_sym_LBRACE] = ACTIONS(799),
        [sym_number] = ACTIONS(797),
        [sym_identifier] = ACTIONS(801),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(799),
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
        [anon_sym_print] = ACTIONS(83),
        [anon_sym_return] = ACTIONS(85),
        [anon_sym_del] = ACTIONS(87),
        [sym_pass_statement] = ACTIONS(89),
        [sym_break_statement] = ACTIONS(89),
        [sym_continue_statement] = ACTIONS(89),
        [anon_sym_LBRACK] = ACTIONS(107),
        [anon_sym_LBRACE] = ACTIONS(109),
        [sym_number] = ACTIONS(111),
        [sym_identifier] = ACTIONS(113),
        [sym_comment] = ACTIONS(73),
        [sym__indent] = ACTIONS(583),
    },
    [404] = {
        [ts_builtin_sym_end] = ACTIONS(805),
        [anon_sym_SEMI] = ACTIONS(805),
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
        [anon_sym_finally] = ACTIONS(803),
        [anon_sym_with] = ACTIONS(803),
        [anon_sym_def] = ACTIONS(803),
        [anon_sym_class] = ACTIONS(803),
        [anon_sym_AT] = ACTIONS(805),
        [anon_sym_LBRACK] = ACTIONS(805),
        [anon_sym_LBRACE] = ACTIONS(805),
        [sym_number] = ACTIONS(803),
        [sym_identifier] = ACTIONS(807),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(805),
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
        [anon_sym_print] = ACTIONS(83),
        [anon_sym_return] = ACTIONS(85),
        [anon_sym_del] = ACTIONS(87),
        [sym_pass_statement] = ACTIONS(89),
        [sym_break_statement] = ACTIONS(89),
        [sym_continue_statement] = ACTIONS(89),
        [anon_sym_LBRACK] = ACTIONS(107),
        [anon_sym_LBRACE] = ACTIONS(109),
        [sym_number] = ACTIONS(111),
        [sym_identifier] = ACTIONS(113),
        [sym_comment] = ACTIONS(73),
        [sym__indent] = ACTIONS(583),
    },
    [406] = {
        [ts_builtin_sym_end] = ACTIONS(811),
        [anon_sym_SEMI] = ACTIONS(811),
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
        [anon_sym_AT] = ACTIONS(811),
        [anon_sym_LBRACK] = ACTIONS(811),
        [anon_sym_LBRACE] = ACTIONS(811),
        [sym_number] = ACTIONS(809),
        [sym_identifier] = ACTIONS(813),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(811),
    },
    [407] = {
        [anon_sym_COMMA] = ACTIONS(927),
        [anon_sym_COLON] = ACTIONS(929),
        [anon_sym_as] = ACTIONS(927),
        [anon_sym_LPAREN] = ACTIONS(223),
        [anon_sym_STAR] = ACTIONS(225),
        [anon_sym_PLUS] = ACTIONS(227),
        [anon_sym_DASH] = ACTIONS(227),
        [anon_sym_SLASH] = ACTIONS(229),
        [anon_sym_STAR_STAR] = ACTIONS(231),
        [anon_sym_PIPE] = ACTIONS(233),
        [anon_sym_AMP] = ACTIONS(235),
        [anon_sym_CARET] = ACTIONS(237),
        [anon_sym_LT_LT] = ACTIONS(227),
        [anon_sym_GT_GT] = ACTIONS(227),
        [anon_sym_LBRACK] = ACTIONS(239),
        [sym_comment] = ACTIONS(73),
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
        [anon_sym_LBRACK] = ACTIONS(117),
        [anon_sym_LBRACE] = ACTIONS(119),
        [sym_number] = ACTIONS(121),
        [sym_identifier] = ACTIONS(121),
        [sym_comment] = ACTIONS(73),
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
        [anon_sym_print] = ACTIONS(83),
        [anon_sym_return] = ACTIONS(85),
        [anon_sym_del] = ACTIONS(87),
        [sym_pass_statement] = ACTIONS(89),
        [sym_break_statement] = ACTIONS(89),
        [sym_continue_statement] = ACTIONS(89),
        [anon_sym_LBRACK] = ACTIONS(107),
        [anon_sym_LBRACE] = ACTIONS(109),
        [sym_number] = ACTIONS(111),
        [sym_identifier] = ACTIONS(113),
        [sym_comment] = ACTIONS(73),
        [sym__indent] = ACTIONS(583),
    },
    [410] = {
        [anon_sym_COLON] = ACTIONS(931),
        [anon_sym_LPAREN] = ACTIONS(223),
        [anon_sym_STAR] = ACTIONS(225),
        [anon_sym_PLUS] = ACTIONS(227),
        [anon_sym_DASH] = ACTIONS(227),
        [anon_sym_SLASH] = ACTIONS(229),
        [anon_sym_STAR_STAR] = ACTIONS(231),
        [anon_sym_PIPE] = ACTIONS(233),
        [anon_sym_AMP] = ACTIONS(235),
        [anon_sym_CARET] = ACTIONS(237),
        [anon_sym_LT_LT] = ACTIONS(227),
        [anon_sym_GT_GT] = ACTIONS(227),
        [anon_sym_LBRACK] = ACTIONS(239),
        [sym_comment] = ACTIONS(73),
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
        [anon_sym_print] = ACTIONS(83),
        [anon_sym_return] = ACTIONS(85),
        [anon_sym_del] = ACTIONS(87),
        [sym_pass_statement] = ACTIONS(89),
        [sym_break_statement] = ACTIONS(89),
        [sym_continue_statement] = ACTIONS(89),
        [anon_sym_LBRACK] = ACTIONS(107),
        [anon_sym_LBRACE] = ACTIONS(109),
        [sym_number] = ACTIONS(111),
        [sym_identifier] = ACTIONS(113),
        [sym_comment] = ACTIONS(73),
        [sym__indent] = ACTIONS(583),
    },
    [412] = {
        [ts_builtin_sym_end] = ACTIONS(823),
        [anon_sym_SEMI] = ACTIONS(823),
        [anon_sym_print] = ACTIONS(821),
        [anon_sym_return] = ACTIONS(821),
        [anon_sym_del] = ACTIONS(821),
        [sym_pass_statement] = ACTIONS(821),
        [sym_break_statement] = ACTIONS(821),
        [sym_continue_statement] = ACTIONS(821),
        [anon_sym_if] = ACTIONS(821),
        [anon_sym_else] = ACTIONS(821),
        [anon_sym_for] = ACTIONS(821),
        [anon_sym_while] = ACTIONS(821),
        [anon_sym_try] = ACTIONS(821),
        [anon_sym_except] = ACTIONS(821),
        [anon_sym_finally] = ACTIONS(821),
        [anon_sym_with] = ACTIONS(821),
        [anon_sym_def] = ACTIONS(821),
        [anon_sym_class] = ACTIONS(821),
        [anon_sym_AT] = ACTIONS(823),
        [anon_sym_LBRACK] = ACTIONS(823),
        [anon_sym_LBRACE] = ACTIONS(823),
        [sym_number] = ACTIONS(821),
        [sym_identifier] = ACTIONS(825),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(823),
    },
    [413] = {
        [ts_builtin_sym_end] = ACTIONS(829),
        [anon_sym_SEMI] = ACTIONS(829),
        [anon_sym_print] = ACTIONS(827),
        [anon_sym_return] = ACTIONS(827),
        [anon_sym_del] = ACTIONS(827),
        [sym_pass_statement] = ACTIONS(827),
        [sym_break_statement] = ACTIONS(827),
        [sym_continue_statement] = ACTIONS(827),
        [anon_sym_if] = ACTIONS(827),
        [anon_sym_else] = ACTIONS(827),
        [anon_sym_for] = ACTIONS(827),
        [anon_sym_while] = ACTIONS(827),
        [anon_sym_try] = ACTIONS(827),
        [anon_sym_except] = ACTIONS(827),
        [anon_sym_finally] = ACTIONS(827),
        [anon_sym_with] = ACTIONS(827),
        [anon_sym_def] = ACTIONS(827),
        [anon_sym_class] = ACTIONS(827),
        [anon_sym_AT] = ACTIONS(829),
        [anon_sym_LBRACK] = ACTIONS(829),
        [anon_sym_LBRACE] = ACTIONS(829),
        [sym_number] = ACTIONS(827),
        [sym_identifier] = ACTIONS(831),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(829),
    },
    [414] = {
        [anon_sym_COLON] = ACTIONS(933),
        [anon_sym_LPAREN] = ACTIONS(223),
        [anon_sym_STAR] = ACTIONS(225),
        [anon_sym_PLUS] = ACTIONS(227),
        [anon_sym_DASH] = ACTIONS(227),
        [anon_sym_SLASH] = ACTIONS(229),
        [anon_sym_STAR_STAR] = ACTIONS(231),
        [anon_sym_PIPE] = ACTIONS(233),
        [anon_sym_AMP] = ACTIONS(235),
        [anon_sym_CARET] = ACTIONS(237),
        [anon_sym_LT_LT] = ACTIONS(227),
        [anon_sym_GT_GT] = ACTIONS(227),
        [anon_sym_LBRACK] = ACTIONS(239),
        [sym_comment] = ACTIONS(73),
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
        [anon_sym_print] = ACTIONS(83),
        [anon_sym_return] = ACTIONS(85),
        [anon_sym_del] = ACTIONS(87),
        [sym_pass_statement] = ACTIONS(89),
        [sym_break_statement] = ACTIONS(89),
        [sym_continue_statement] = ACTIONS(89),
        [anon_sym_LBRACK] = ACTIONS(107),
        [anon_sym_LBRACE] = ACTIONS(109),
        [sym_number] = ACTIONS(111),
        [sym_identifier] = ACTIONS(113),
        [sym_comment] = ACTIONS(73),
        [sym__indent] = ACTIONS(583),
    },
    [416] = {
        [sym_else_clause] = STATE(417),
        [ts_builtin_sym_end] = ACTIONS(839),
        [anon_sym_SEMI] = ACTIONS(839),
        [anon_sym_print] = ACTIONS(837),
        [anon_sym_return] = ACTIONS(837),
        [anon_sym_del] = ACTIONS(837),
        [sym_pass_statement] = ACTIONS(837),
        [sym_break_statement] = ACTIONS(837),
        [sym_continue_statement] = ACTIONS(837),
        [anon_sym_if] = ACTIONS(837),
        [anon_sym_else] = ACTIONS(919),
        [anon_sym_for] = ACTIONS(837),
        [anon_sym_while] = ACTIONS(837),
        [anon_sym_try] = ACTIONS(837),
        [anon_sym_with] = ACTIONS(837),
        [anon_sym_def] = ACTIONS(837),
        [anon_sym_class] = ACTIONS(837),
        [anon_sym_AT] = ACTIONS(839),
        [anon_sym_LBRACK] = ACTIONS(839),
        [anon_sym_LBRACE] = ACTIONS(839),
        [sym_number] = ACTIONS(837),
        [sym_identifier] = ACTIONS(841),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(839),
    },
    [417] = {
        [ts_builtin_sym_end] = ACTIONS(845),
        [anon_sym_SEMI] = ACTIONS(845),
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
        [anon_sym_LBRACK] = ACTIONS(845),
        [anon_sym_LBRACE] = ACTIONS(845),
        [sym_number] = ACTIONS(843),
        [sym_identifier] = ACTIONS(847),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(845),
    },
    [418] = {
        [anon_sym_in] = ACTIONS(935),
        [sym_comment] = ACTIONS(73),
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
        [anon_sym_LBRACK] = ACTIONS(117),
        [anon_sym_LBRACE] = ACTIONS(119),
        [sym_number] = ACTIONS(121),
        [sym_identifier] = ACTIONS(121),
        [sym_comment] = ACTIONS(73),
    },
    [420] = {
        [anon_sym_COLON] = ACTIONS(937),
        [sym_comment] = ACTIONS(73),
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
        [anon_sym_print] = ACTIONS(83),
        [anon_sym_return] = ACTIONS(85),
        [anon_sym_del] = ACTIONS(87),
        [sym_pass_statement] = ACTIONS(89),
        [sym_break_statement] = ACTIONS(89),
        [sym_continue_statement] = ACTIONS(89),
        [anon_sym_LBRACK] = ACTIONS(107),
        [anon_sym_LBRACE] = ACTIONS(109),
        [sym_number] = ACTIONS(111),
        [sym_identifier] = ACTIONS(113),
        [sym_comment] = ACTIONS(73),
        [sym__indent] = ACTIONS(583),
    },
    [422] = {
        [sym_else_clause] = STATE(423),
        [ts_builtin_sym_end] = ACTIONS(855),
        [anon_sym_SEMI] = ACTIONS(855),
        [anon_sym_print] = ACTIONS(853),
        [anon_sym_return] = ACTIONS(853),
        [anon_sym_del] = ACTIONS(853),
        [sym_pass_statement] = ACTIONS(853),
        [sym_break_statement] = ACTIONS(853),
        [sym_continue_statement] = ACTIONS(853),
        [anon_sym_if] = ACTIONS(853),
        [anon_sym_else] = ACTIONS(919),
        [anon_sym_for] = ACTIONS(853),
        [anon_sym_while] = ACTIONS(853),
        [anon_sym_try] = ACTIONS(853),
        [anon_sym_with] = ACTIONS(853),
        [anon_sym_def] = ACTIONS(853),
        [anon_sym_class] = ACTIONS(853),
        [anon_sym_AT] = ACTIONS(855),
        [anon_sym_LBRACK] = ACTIONS(855),
        [anon_sym_LBRACE] = ACTIONS(855),
        [sym_number] = ACTIONS(853),
        [sym_identifier] = ACTIONS(857),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(855),
    },
    [423] = {
        [ts_builtin_sym_end] = ACTIONS(861),
        [anon_sym_SEMI] = ACTIONS(861),
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
        [anon_sym_LBRACK] = ACTIONS(861),
        [anon_sym_LBRACE] = ACTIONS(861),
        [sym_number] = ACTIONS(859),
        [sym_identifier] = ACTIONS(863),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(861),
    },
    [424] = {
        [anon_sym_COLON] = ACTIONS(939),
        [anon_sym_LPAREN] = ACTIONS(223),
        [anon_sym_STAR] = ACTIONS(225),
        [anon_sym_PLUS] = ACTIONS(227),
        [anon_sym_DASH] = ACTIONS(227),
        [anon_sym_SLASH] = ACTIONS(229),
        [anon_sym_STAR_STAR] = ACTIONS(231),
        [anon_sym_PIPE] = ACTIONS(233),
        [anon_sym_AMP] = ACTIONS(235),
        [anon_sym_CARET] = ACTIONS(237),
        [anon_sym_LT_LT] = ACTIONS(227),
        [anon_sym_GT_GT] = ACTIONS(227),
        [anon_sym_LBRACK] = ACTIONS(239),
        [sym_comment] = ACTIONS(73),
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
        [anon_sym_print] = ACTIONS(83),
        [anon_sym_return] = ACTIONS(85),
        [anon_sym_del] = ACTIONS(87),
        [sym_pass_statement] = ACTIONS(89),
        [sym_break_statement] = ACTIONS(89),
        [sym_continue_statement] = ACTIONS(89),
        [anon_sym_LBRACK] = ACTIONS(107),
        [anon_sym_LBRACE] = ACTIONS(109),
        [sym_number] = ACTIONS(111),
        [sym_identifier] = ACTIONS(113),
        [sym_comment] = ACTIONS(73),
        [sym__indent] = ACTIONS(583),
    },
    [426] = {
        [sym_elif_clause] = STATE(428),
        [sym_else_clause] = STATE(429),
        [aux_sym_if_statement_repeat1] = STATE(430),
        [ts_builtin_sym_end] = ACTIONS(871),
        [anon_sym_SEMI] = ACTIONS(871),
        [anon_sym_print] = ACTIONS(867),
        [anon_sym_return] = ACTIONS(867),
        [anon_sym_del] = ACTIONS(867),
        [sym_pass_statement] = ACTIONS(867),
        [sym_break_statement] = ACTIONS(867),
        [sym_continue_statement] = ACTIONS(867),
        [anon_sym_if] = ACTIONS(867),
        [anon_sym_elif] = ACTIONS(941),
        [anon_sym_else] = ACTIONS(919),
        [anon_sym_for] = ACTIONS(867),
        [anon_sym_while] = ACTIONS(867),
        [anon_sym_try] = ACTIONS(867),
        [anon_sym_with] = ACTIONS(867),
        [anon_sym_def] = ACTIONS(867),
        [anon_sym_class] = ACTIONS(867),
        [anon_sym_AT] = ACTIONS(871),
        [anon_sym_LBRACK] = ACTIONS(871),
        [anon_sym_LBRACE] = ACTIONS(871),
        [sym_number] = ACTIONS(867),
        [sym_identifier] = ACTIONS(873),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(871),
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
        [anon_sym_LBRACK] = ACTIONS(117),
        [anon_sym_LBRACE] = ACTIONS(119),
        [sym_number] = ACTIONS(121),
        [sym_identifier] = ACTIONS(121),
        [sym_comment] = ACTIONS(73),
    },
    [428] = {
        [ts_builtin_sym_end] = ACTIONS(877),
        [anon_sym_SEMI] = ACTIONS(877),
        [anon_sym_print] = ACTIONS(875),
        [anon_sym_return] = ACTIONS(875),
        [anon_sym_del] = ACTIONS(875),
        [sym_pass_statement] = ACTIONS(875),
        [sym_break_statement] = ACTIONS(875),
        [sym_continue_statement] = ACTIONS(875),
        [anon_sym_if] = ACTIONS(875),
        [anon_sym_elif] = ACTIONS(875),
        [anon_sym_else] = ACTIONS(875),
        [anon_sym_for] = ACTIONS(875),
        [anon_sym_while] = ACTIONS(875),
        [anon_sym_try] = ACTIONS(875),
        [anon_sym_with] = ACTIONS(875),
        [anon_sym_def] = ACTIONS(875),
        [anon_sym_class] = ACTIONS(875),
        [anon_sym_AT] = ACTIONS(877),
        [anon_sym_LBRACK] = ACTIONS(877),
        [anon_sym_LBRACE] = ACTIONS(877),
        [sym_number] = ACTIONS(875),
        [sym_identifier] = ACTIONS(879),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(877),
    },
    [429] = {
        [ts_builtin_sym_end] = ACTIONS(883),
        [anon_sym_SEMI] = ACTIONS(883),
        [anon_sym_print] = ACTIONS(881),
        [anon_sym_return] = ACTIONS(881),
        [anon_sym_del] = ACTIONS(881),
        [sym_pass_statement] = ACTIONS(881),
        [sym_break_statement] = ACTIONS(881),
        [sym_continue_statement] = ACTIONS(881),
        [anon_sym_if] = ACTIONS(881),
        [anon_sym_for] = ACTIONS(881),
        [anon_sym_while] = ACTIONS(881),
        [anon_sym_try] = ACTIONS(881),
        [anon_sym_with] = ACTIONS(881),
        [anon_sym_def] = ACTIONS(881),
        [anon_sym_class] = ACTIONS(881),
        [anon_sym_AT] = ACTIONS(883),
        [anon_sym_LBRACK] = ACTIONS(883),
        [anon_sym_LBRACE] = ACTIONS(883),
        [sym_number] = ACTIONS(881),
        [sym_identifier] = ACTIONS(885),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(883),
    },
    [430] = {
        [sym_elif_clause] = STATE(431),
        [sym_else_clause] = STATE(432),
        [ts_builtin_sym_end] = ACTIONS(883),
        [anon_sym_SEMI] = ACTIONS(883),
        [anon_sym_print] = ACTIONS(881),
        [anon_sym_return] = ACTIONS(881),
        [anon_sym_del] = ACTIONS(881),
        [sym_pass_statement] = ACTIONS(881),
        [sym_break_statement] = ACTIONS(881),
        [sym_continue_statement] = ACTIONS(881),
        [anon_sym_if] = ACTIONS(881),
        [anon_sym_elif] = ACTIONS(941),
        [anon_sym_else] = ACTIONS(919),
        [anon_sym_for] = ACTIONS(881),
        [anon_sym_while] = ACTIONS(881),
        [anon_sym_try] = ACTIONS(881),
        [anon_sym_with] = ACTIONS(881),
        [anon_sym_def] = ACTIONS(881),
        [anon_sym_class] = ACTIONS(881),
        [anon_sym_AT] = ACTIONS(883),
        [anon_sym_LBRACK] = ACTIONS(883),
        [anon_sym_LBRACE] = ACTIONS(883),
        [sym_number] = ACTIONS(881),
        [sym_identifier] = ACTIONS(885),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(883),
    },
    [431] = {
        [ts_builtin_sym_end] = ACTIONS(889),
        [anon_sym_SEMI] = ACTIONS(889),
        [anon_sym_print] = ACTIONS(887),
        [anon_sym_return] = ACTIONS(887),
        [anon_sym_del] = ACTIONS(887),
        [sym_pass_statement] = ACTIONS(887),
        [sym_break_statement] = ACTIONS(887),
        [sym_continue_statement] = ACTIONS(887),
        [anon_sym_if] = ACTIONS(887),
        [anon_sym_elif] = ACTIONS(887),
        [anon_sym_else] = ACTIONS(887),
        [anon_sym_for] = ACTIONS(887),
        [anon_sym_while] = ACTIONS(887),
        [anon_sym_try] = ACTIONS(887),
        [anon_sym_with] = ACTIONS(887),
        [anon_sym_def] = ACTIONS(887),
        [anon_sym_class] = ACTIONS(887),
        [anon_sym_AT] = ACTIONS(889),
        [anon_sym_LBRACK] = ACTIONS(889),
        [anon_sym_LBRACE] = ACTIONS(889),
        [sym_number] = ACTIONS(887),
        [sym_identifier] = ACTIONS(891),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(889),
    },
    [432] = {
        [ts_builtin_sym_end] = ACTIONS(895),
        [anon_sym_SEMI] = ACTIONS(895),
        [anon_sym_print] = ACTIONS(893),
        [anon_sym_return] = ACTIONS(893),
        [anon_sym_del] = ACTIONS(893),
        [sym_pass_statement] = ACTIONS(893),
        [sym_break_statement] = ACTIONS(893),
        [sym_continue_statement] = ACTIONS(893),
        [anon_sym_if] = ACTIONS(893),
        [anon_sym_for] = ACTIONS(893),
        [anon_sym_while] = ACTIONS(893),
        [anon_sym_try] = ACTIONS(893),
        [anon_sym_with] = ACTIONS(893),
        [anon_sym_def] = ACTIONS(893),
        [anon_sym_class] = ACTIONS(893),
        [anon_sym_AT] = ACTIONS(895),
        [anon_sym_LBRACK] = ACTIONS(895),
        [anon_sym_LBRACE] = ACTIONS(895),
        [sym_number] = ACTIONS(893),
        [sym_identifier] = ACTIONS(897),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(895),
    },
    [433] = {
        [anon_sym_COLON] = ACTIONS(943),
        [anon_sym_LPAREN] = ACTIONS(223),
        [anon_sym_STAR] = ACTIONS(225),
        [anon_sym_PLUS] = ACTIONS(227),
        [anon_sym_DASH] = ACTIONS(227),
        [anon_sym_SLASH] = ACTIONS(229),
        [anon_sym_STAR_STAR] = ACTIONS(231),
        [anon_sym_PIPE] = ACTIONS(233),
        [anon_sym_AMP] = ACTIONS(235),
        [anon_sym_CARET] = ACTIONS(237),
        [anon_sym_LT_LT] = ACTIONS(227),
        [anon_sym_GT_GT] = ACTIONS(227),
        [anon_sym_LBRACK] = ACTIONS(239),
        [sym_comment] = ACTIONS(73),
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
        [anon_sym_print] = ACTIONS(83),
        [anon_sym_return] = ACTIONS(85),
        [anon_sym_del] = ACTIONS(87),
        [sym_pass_statement] = ACTIONS(89),
        [sym_break_statement] = ACTIONS(89),
        [sym_continue_statement] = ACTIONS(89),
        [anon_sym_LBRACK] = ACTIONS(107),
        [anon_sym_LBRACE] = ACTIONS(109),
        [sym_number] = ACTIONS(111),
        [sym_identifier] = ACTIONS(113),
        [sym_comment] = ACTIONS(73),
        [sym__indent] = ACTIONS(583),
    },
    [435] = {
        [ts_builtin_sym_end] = ACTIONS(903),
        [anon_sym_SEMI] = ACTIONS(903),
        [anon_sym_print] = ACTIONS(901),
        [anon_sym_return] = ACTIONS(901),
        [anon_sym_del] = ACTIONS(901),
        [sym_pass_statement] = ACTIONS(901),
        [sym_break_statement] = ACTIONS(901),
        [sym_continue_statement] = ACTIONS(901),
        [anon_sym_if] = ACTIONS(901),
        [anon_sym_elif] = ACTIONS(901),
        [anon_sym_else] = ACTIONS(901),
        [anon_sym_for] = ACTIONS(901),
        [anon_sym_while] = ACTIONS(901),
        [anon_sym_try] = ACTIONS(901),
        [anon_sym_with] = ACTIONS(901),
        [anon_sym_def] = ACTIONS(901),
        [anon_sym_class] = ACTIONS(901),
        [anon_sym_AT] = ACTIONS(903),
        [anon_sym_LBRACK] = ACTIONS(903),
        [anon_sym_LBRACE] = ACTIONS(903),
        [sym_number] = ACTIONS(901),
        [sym_identifier] = ACTIONS(905),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(903),
    },
    [436] = {
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(945),
    },
    [437] = {
        [aux_sym_print_statement_repeat1] = STATE(439),
        [anon_sym_COMMA] = ACTIONS(947),
        [anon_sym_LPAREN] = ACTIONS(163),
        [anon_sym_STAR] = ACTIONS(165),
        [anon_sym_PLUS] = ACTIONS(167),
        [anon_sym_DASH] = ACTIONS(167),
        [anon_sym_SLASH] = ACTIONS(169),
        [anon_sym_STAR_STAR] = ACTIONS(171),
        [anon_sym_PIPE] = ACTIONS(173),
        [anon_sym_AMP] = ACTIONS(175),
        [anon_sym_CARET] = ACTIONS(177),
        [anon_sym_LT_LT] = ACTIONS(167),
        [anon_sym_GT_GT] = ACTIONS(167),
        [anon_sym_LBRACK] = ACTIONS(179),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(385),
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
        [anon_sym_LBRACK] = ACTIONS(107),
        [anon_sym_LBRACE] = ACTIONS(109),
        [sym_number] = ACTIONS(111),
        [sym_identifier] = ACTIONS(111),
        [sym_comment] = ACTIONS(73),
    },
    [439] = {
        [anon_sym_COMMA] = ACTIONS(949),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(389),
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
        [anon_sym_LBRACK] = ACTIONS(107),
        [anon_sym_LBRACE] = ACTIONS(109),
        [sym_number] = ACTIONS(111),
        [sym_identifier] = ACTIONS(111),
        [sym_comment] = ACTIONS(73),
    },
    [441] = {
        [anon_sym_COMMA] = ACTIONS(391),
        [anon_sym_LPAREN] = ACTIONS(163),
        [anon_sym_STAR] = ACTIONS(165),
        [anon_sym_PLUS] = ACTIONS(167),
        [anon_sym_DASH] = ACTIONS(167),
        [anon_sym_SLASH] = ACTIONS(169),
        [anon_sym_STAR_STAR] = ACTIONS(171),
        [anon_sym_PIPE] = ACTIONS(173),
        [anon_sym_AMP] = ACTIONS(175),
        [anon_sym_CARET] = ACTIONS(177),
        [anon_sym_LT_LT] = ACTIONS(167),
        [anon_sym_GT_GT] = ACTIONS(167),
        [anon_sym_LBRACK] = ACTIONS(179),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(391),
    },
    [442] = {
        [anon_sym_COMMA] = ACTIONS(393),
        [anon_sym_LPAREN] = ACTIONS(163),
        [anon_sym_STAR] = ACTIONS(165),
        [anon_sym_PLUS] = ACTIONS(167),
        [anon_sym_DASH] = ACTIONS(167),
        [anon_sym_SLASH] = ACTIONS(169),
        [anon_sym_STAR_STAR] = ACTIONS(171),
        [anon_sym_PIPE] = ACTIONS(173),
        [anon_sym_AMP] = ACTIONS(175),
        [anon_sym_CARET] = ACTIONS(177),
        [anon_sym_LT_LT] = ACTIONS(167),
        [anon_sym_GT_GT] = ACTIONS(167),
        [anon_sym_LBRACK] = ACTIONS(179),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(393),
    },
    [443] = {
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(951),
    },
    [444] = {
        [aux_sym_print_statement_repeat1] = STATE(445),
        [anon_sym_COMMA] = ACTIONS(947),
        [anon_sym_LPAREN] = ACTIONS(163),
        [anon_sym_STAR] = ACTIONS(165),
        [anon_sym_PLUS] = ACTIONS(167),
        [anon_sym_DASH] = ACTIONS(167),
        [anon_sym_SLASH] = ACTIONS(169),
        [anon_sym_STAR_STAR] = ACTIONS(171),
        [anon_sym_PIPE] = ACTIONS(173),
        [anon_sym_AMP] = ACTIONS(175),
        [anon_sym_CARET] = ACTIONS(177),
        [anon_sym_LT_LT] = ACTIONS(167),
        [anon_sym_GT_GT] = ACTIONS(167),
        [anon_sym_LBRACK] = ACTIONS(179),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(953),
    },
    [445] = {
        [anon_sym_COMMA] = ACTIONS(949),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(955),
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
        [anon_sym_RPAREN] = ACTIONS(957),
        [anon_sym_STAR] = ACTIONS(959),
        [anon_sym_STAR_STAR] = ACTIONS(965),
        [anon_sym_LBRACK] = ACTIONS(969),
        [anon_sym_DOT_DOT_DOT] = ACTIONS(973),
        [anon_sym_RBRACK] = ACTIONS(975),
        [anon_sym_LBRACE] = ACTIONS(977),
        [anon_sym_RBRACE] = ACTIONS(981),
        [sym_number] = ACTIONS(983),
        [sym_identifier] = ACTIONS(987),
        [sym_comment] = ACTIONS(73),
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
        [anon_sym_LBRACK] = ACTIONS(117),
        [anon_sym_LBRACE] = ACTIONS(119),
        [sym_number] = ACTIONS(121),
        [sym_identifier] = ACTIONS(121),
        [sym_comment] = ACTIONS(73),
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
        [anon_sym_print] = ACTIONS(83),
        [anon_sym_return] = ACTIONS(85),
        [anon_sym_del] = ACTIONS(87),
        [sym_pass_statement] = ACTIONS(89),
        [sym_break_statement] = ACTIONS(89),
        [sym_continue_statement] = ACTIONS(89),
        [anon_sym_LBRACK] = ACTIONS(107),
        [anon_sym_LBRACE] = ACTIONS(109),
        [sym_number] = ACTIONS(111),
        [sym_identifier] = ACTIONS(113),
        [sym_comment] = ACTIONS(73),
        [sym__indent] = ACTIONS(993),
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
        [anon_sym_LBRACK] = ACTIONS(117),
        [anon_sym_LBRACE] = ACTIONS(119),
        [sym_number] = ACTIONS(121),
        [sym_identifier] = ACTIONS(121),
        [sym_comment] = ACTIONS(73),
    },
    [450] = {
        [anon_sym_COLON] = ACTIONS(995),
        [sym_comment] = ACTIONS(73),
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
        [anon_sym_LBRACK] = ACTIONS(117),
        [anon_sym_LBRACE] = ACTIONS(119),
        [sym_number] = ACTIONS(121),
        [sym_identifier] = ACTIONS(121),
        [sym_comment] = ACTIONS(73),
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
        [anon_sym_LBRACK] = ACTIONS(117),
        [anon_sym_LBRACE] = ACTIONS(119),
        [sym_number] = ACTIONS(121),
        [sym_identifier] = ACTIONS(121),
        [sym_comment] = ACTIONS(73),
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
        [anon_sym_LBRACK] = ACTIONS(117),
        [anon_sym_LBRACE] = ACTIONS(119),
        [sym_number] = ACTIONS(121),
        [sym_identifier] = ACTIONS(121),
        [sym_comment] = ACTIONS(73),
    },
    [454] = {
        [anon_sym_COLON] = ACTIONS(997),
        [sym_comment] = ACTIONS(73),
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
        [anon_sym_LBRACK] = ACTIONS(117),
        [anon_sym_LBRACE] = ACTIONS(119),
        [sym_number] = ACTIONS(121),
        [sym_identifier] = ACTIONS(121),
        [sym_comment] = ACTIONS(73),
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
        [anon_sym_LBRACK] = ACTIONS(117),
        [anon_sym_LBRACE] = ACTIONS(119),
        [sym_number] = ACTIONS(121),
        [sym_identifier] = ACTIONS(121),
        [sym_comment] = ACTIONS(73),
    },
    [457] = {
        [anon_sym_COLON] = ACTIONS(999),
        [sym_comment] = ACTIONS(73),
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
        [anon_sym_LBRACK] = ACTIONS(117),
        [anon_sym_LBRACE] = ACTIONS(119),
        [sym_number] = ACTIONS(121),
        [sym_identifier] = ACTIONS(121),
        [sym_comment] = ACTIONS(73),
    },
    [459] = {
        [sym_identifier] = ACTIONS(1001),
        [sym_comment] = ACTIONS(73),
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
        [anon_sym_RPAREN] = ACTIONS(659),
        [anon_sym_STAR] = ACTIONS(1003),
        [anon_sym_STAR_STAR] = ACTIONS(209),
        [anon_sym_LBRACK] = ACTIONS(117),
        [anon_sym_LBRACE] = ACTIONS(119),
        [sym_number] = ACTIONS(121),
        [sym_identifier] = ACTIONS(1005),
        [sym_comment] = ACTIONS(73),
    },
    [461] = {
        [anon_sym_COMMA] = ACTIONS(1007),
        [anon_sym_COLON] = ACTIONS(1013),
        [anon_sym_for] = ACTIONS(1007),
        [anon_sym_in] = ACTIONS(1007),
        [anon_sym_as] = ACTIONS(1007),
        [anon_sym_LPAREN] = ACTIONS(1007),
        [anon_sym_RPAREN] = ACTIONS(1007),
        [anon_sym_STAR] = ACTIONS(1025),
        [anon_sym_PLUS] = ACTIONS(1007),
        [anon_sym_DASH] = ACTIONS(1007),
        [anon_sym_SLASH] = ACTIONS(1007),
        [anon_sym_STAR_STAR] = ACTIONS(1007),
        [anon_sym_PIPE] = ACTIONS(1007),
        [anon_sym_AMP] = ACTIONS(1007),
        [anon_sym_CARET] = ACTIONS(1007),
        [anon_sym_LT_LT] = ACTIONS(1007),
        [anon_sym_GT_GT] = ACTIONS(1007),
        [anon_sym_LBRACK] = ACTIONS(1007),
        [anon_sym_RBRACK] = ACTIONS(1007),
        [anon_sym_RBRACE] = ACTIONS(1007),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(1031),
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
        [anon_sym_LBRACK] = ACTIONS(117),
        [anon_sym_LBRACE] = ACTIONS(119),
        [sym_number] = ACTIONS(121),
        [sym_identifier] = ACTIONS(121),
        [sym_comment] = ACTIONS(73),
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
        [anon_sym_STAR] = ACTIONS(675),
        [anon_sym_LBRACK] = ACTIONS(107),
        [anon_sym_LBRACE] = ACTIONS(109),
        [sym_number] = ACTIONS(111),
        [sym_identifier] = ACTIONS(1039),
        [sym_comment] = ACTIONS(73),
    },
    [464] = {
        [sym_identifier] = ACTIONS(1041),
        [sym_comment] = ACTIONS(73),
    },
    [465] = {
        [sym_identifier] = ACTIONS(1043),
        [sym_comment] = ACTIONS(73),
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
        [anon_sym_LBRACK] = ACTIONS(107),
        [anon_sym_LBRACE] = ACTIONS(109),
        [sym_number] = ACTIONS(111),
        [sym_identifier] = ACTIONS(111),
        [sym_comment] = ACTIONS(73),
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
        [anon_sym_LBRACK] = ACTIONS(107),
        [anon_sym_LBRACE] = ACTIONS(109),
        [sym_number] = ACTIONS(111),
        [sym_identifier] = ACTIONS(111),
        [sym_comment] = ACTIONS(73),
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
        [anon_sym_LBRACK] = ACTIONS(117),
        [anon_sym_DOT_DOT_DOT] = ACTIONS(213),
        [anon_sym_RBRACK] = ACTIONS(131),
        [anon_sym_LBRACE] = ACTIONS(119),
        [sym_number] = ACTIONS(121),
        [sym_identifier] = ACTIONS(121),
        [sym_comment] = ACTIONS(73),
    },
    [469] = {
        [aux_sym_subscript_repeat1] = STATE(53),
        [anon_sym_COMMA] = ACTIONS(1045),
        [anon_sym_RBRACK] = ACTIONS(1049),
        [sym_comment] = ACTIONS(73),
    },
    [470] = {
        [anon_sym_COMMA] = ACTIONS(1053),
        [anon_sym_COLON] = ACTIONS(1053),
        [anon_sym_for] = ACTIONS(1053),
        [anon_sym_in] = ACTIONS(1053),
        [anon_sym_as] = ACTIONS(1053),
        [anon_sym_LPAREN] = ACTIONS(1053),
        [anon_sym_RPAREN] = ACTIONS(1053),
        [anon_sym_STAR] = ACTIONS(1062),
        [anon_sym_PLUS] = ACTIONS(1053),
        [anon_sym_DASH] = ACTIONS(1053),
        [anon_sym_SLASH] = ACTIONS(1053),
        [anon_sym_STAR_STAR] = ACTIONS(1053),
        [anon_sym_PIPE] = ACTIONS(1053),
        [anon_sym_AMP] = ACTIONS(1053),
        [anon_sym_CARET] = ACTIONS(1053),
        [anon_sym_LT_LT] = ACTIONS(1053),
        [anon_sym_GT_GT] = ACTIONS(1053),
        [anon_sym_LBRACK] = ACTIONS(1053),
        [anon_sym_RBRACK] = ACTIONS(1053),
        [anon_sym_RBRACE] = ACTIONS(1053),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(1053),
    },
    [471] = {
        [anon_sym_COMMA] = ACTIONS(1071),
        [anon_sym_COLON] = ACTIONS(1071),
        [anon_sym_for] = ACTIONS(1071),
        [anon_sym_in] = ACTIONS(1071),
        [anon_sym_as] = ACTIONS(1071),
        [anon_sym_LPAREN] = ACTIONS(1071),
        [anon_sym_RPAREN] = ACTIONS(1071),
        [anon_sym_STAR] = ACTIONS(1081),
        [anon_sym_PLUS] = ACTIONS(1071),
        [anon_sym_DASH] = ACTIONS(1071),
        [anon_sym_SLASH] = ACTIONS(1071),
        [anon_sym_STAR_STAR] = ACTIONS(1071),
        [anon_sym_PIPE] = ACTIONS(1071),
        [anon_sym_AMP] = ACTIONS(1071),
        [anon_sym_CARET] = ACTIONS(1071),
        [anon_sym_LT_LT] = ACTIONS(1071),
        [anon_sym_GT_GT] = ACTIONS(1071),
        [anon_sym_LBRACK] = ACTIONS(1071),
        [anon_sym_RBRACK] = ACTIONS(1071),
        [anon_sym_RBRACE] = ACTIONS(1071),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(1071),
    },
    [472] = {
        [sym_parameters] = STATE(486),
        [aux_sym_dotted_name_repeat1] = STATE(241),
        [anon_sym_COMMA] = ACTIONS(1091),
        [anon_sym_COLON] = ACTIONS(1095),
        [anon_sym_for] = ACTIONS(135),
        [anon_sym_in] = ACTIONS(135),
        [anon_sym_as] = ACTIONS(135),
        [anon_sym_LPAREN] = ACTIONS(1098),
        [anon_sym_RPAREN] = ACTIONS(1104),
        [anon_sym_EQ] = ACTIONS(1109),
        [anon_sym_STAR] = ACTIONS(137),
        [anon_sym_DOT] = ACTIONS(1111),
        [anon_sym_PLUS] = ACTIONS(135),
        [anon_sym_DASH] = ACTIONS(135),
        [anon_sym_SLASH] = ACTIONS(135),
        [anon_sym_STAR_STAR] = ACTIONS(135),
        [anon_sym_PIPE] = ACTIONS(135),
        [anon_sym_AMP] = ACTIONS(135),
        [anon_sym_CARET] = ACTIONS(135),
        [anon_sym_LT_LT] = ACTIONS(135),
        [anon_sym_GT_GT] = ACTIONS(135),
        [anon_sym_LBRACK] = ACTIONS(135),
        [anon_sym_RBRACK] = ACTIONS(135),
        [anon_sym_RBRACE] = ACTIONS(135),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(1115),
    },
    [473] = {
        [ts_builtin_sym_end] = ACTIONS(1120),
        [anon_sym_SEMI] = ACTIONS(1124),
        [anon_sym_print] = ACTIONS(1127),
        [anon_sym_return] = ACTIONS(1127),
        [anon_sym_del] = ACTIONS(1127),
        [sym_pass_statement] = ACTIONS(1127),
        [sym_break_statement] = ACTIONS(1127),
        [sym_continue_statement] = ACTIONS(1127),
        [anon_sym_if] = ACTIONS(1127),
        [anon_sym_elif] = ACTIONS(613),
        [anon_sym_else] = ACTIONS(613),
        [anon_sym_for] = ACTIONS(1127),
        [anon_sym_while] = ACTIONS(1127),
        [anon_sym_try] = ACTIONS(1127),
        [anon_sym_except] = ACTIONS(613),
        [anon_sym_finally] = ACTIONS(613),
        [anon_sym_with] = ACTIONS(1127),
        [anon_sym_def] = ACTIONS(1130),
        [anon_sym_class] = ACTIONS(1130),
        [anon_sym_AT] = ACTIONS(1135),
        [anon_sym_LBRACK] = ACTIONS(1124),
        [anon_sym_LBRACE] = ACTIONS(1124),
        [sym_number] = ACTIONS(1127),
        [sym_identifier] = ACTIONS(1140),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(1124),
        [sym__dedent] = ACTIONS(1124),
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
        [anon_sym_print] = ACTIONS(83),
        [anon_sym_return] = ACTIONS(85),
        [anon_sym_del] = ACTIONS(87),
        [sym_pass_statement] = ACTIONS(89),
        [sym_break_statement] = ACTIONS(89),
        [sym_continue_statement] = ACTIONS(89),
        [anon_sym_if] = ACTIONS(589),
        [anon_sym_for] = ACTIONS(591),
        [anon_sym_while] = ACTIONS(593),
        [anon_sym_try] = ACTIONS(595),
        [anon_sym_with] = ACTIONS(597),
        [anon_sym_def] = ACTIONS(599),
        [anon_sym_class] = ACTIONS(601),
        [anon_sym_AT] = ACTIONS(105),
        [anon_sym_LBRACK] = ACTIONS(107),
        [anon_sym_LBRACE] = ACTIONS(109),
        [sym_number] = ACTIONS(111),
        [sym_identifier] = ACTIONS(113),
        [sym_comment] = ACTIONS(73),
        [sym__dedent] = ACTIONS(1143),
    },
    [475] = {
        [ts_builtin_sym_end] = ACTIONS(1145),
        [anon_sym_SEMI] = ACTIONS(1145),
        [anon_sym_print] = ACTIONS(1148),
        [anon_sym_return] = ACTIONS(1148),
        [anon_sym_del] = ACTIONS(1148),
        [sym_pass_statement] = ACTIONS(1148),
        [sym_break_statement] = ACTIONS(1148),
        [sym_continue_statement] = ACTIONS(1148),
        [anon_sym_if] = ACTIONS(1148),
        [anon_sym_elif] = ACTIONS(1148),
        [anon_sym_else] = ACTIONS(1148),
        [anon_sym_for] = ACTIONS(1148),
        [anon_sym_while] = ACTIONS(1148),
        [anon_sym_try] = ACTIONS(1148),
        [anon_sym_except] = ACTIONS(1148),
        [anon_sym_finally] = ACTIONS(1148),
        [anon_sym_with] = ACTIONS(1148),
        [anon_sym_def] = ACTIONS(1148),
        [anon_sym_class] = ACTIONS(1148),
        [anon_sym_AT] = ACTIONS(1145),
        [anon_sym_LBRACK] = ACTIONS(1145),
        [anon_sym_LBRACE] = ACTIONS(1145),
        [sym_number] = ACTIONS(1148),
        [sym_identifier] = ACTIONS(1151),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(1145),
        [sym__dedent] = ACTIONS(1145),
    },
    [476] = {
        [ts_builtin_sym_end] = ACTIONS(1154),
        [anon_sym_SEMI] = ACTIONS(1154),
        [anon_sym_print] = ACTIONS(1157),
        [anon_sym_return] = ACTIONS(1157),
        [anon_sym_del] = ACTIONS(1157),
        [sym_pass_statement] = ACTIONS(1157),
        [sym_break_statement] = ACTIONS(1157),
        [sym_continue_statement] = ACTIONS(1157),
        [anon_sym_if] = ACTIONS(1157),
        [anon_sym_for] = ACTIONS(1157),
        [anon_sym_while] = ACTIONS(1157),
        [anon_sym_try] = ACTIONS(1157),
        [anon_sym_with] = ACTIONS(1157),
        [anon_sym_def] = ACTIONS(1157),
        [anon_sym_class] = ACTIONS(1157),
        [anon_sym_AT] = ACTIONS(1154),
        [anon_sym_LBRACK] = ACTIONS(1154),
        [anon_sym_LBRACE] = ACTIONS(1154),
        [sym_number] = ACTIONS(1157),
        [sym_identifier] = ACTIONS(1160),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(1154),
        [sym__dedent] = ACTIONS(1154),
    },
    [477] = {
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(1163),
    },
    [478] = {
        [ts_builtin_sym_end] = ACTIONS(149),
        [anon_sym_SEMI] = ACTIONS(149),
        [anon_sym_print] = ACTIONS(151),
        [anon_sym_return] = ACTIONS(151),
        [anon_sym_del] = ACTIONS(151),
        [sym_pass_statement] = ACTIONS(151),
        [sym_break_statement] = ACTIONS(151),
        [sym_continue_statement] = ACTIONS(151),
        [anon_sym_if] = ACTIONS(151),
        [anon_sym_for] = ACTIONS(151),
        [anon_sym_while] = ACTIONS(151),
        [anon_sym_try] = ACTIONS(151),
        [anon_sym_with] = ACTIONS(151),
        [anon_sym_def] = ACTIONS(151),
        [anon_sym_class] = ACTIONS(151),
        [anon_sym_AT] = ACTIONS(149),
        [anon_sym_LBRACK] = ACTIONS(149),
        [anon_sym_LBRACE] = ACTIONS(149),
        [sym_number] = ACTIONS(151),
        [sym_identifier] = ACTIONS(153),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(149),
        [sym__dedent] = ACTIONS(149),
    },
    [479] = {
        [ts_builtin_sym_end] = ACTIONS(155),
        [anon_sym_SEMI] = ACTIONS(155),
        [anon_sym_print] = ACTIONS(157),
        [anon_sym_return] = ACTIONS(157),
        [anon_sym_del] = ACTIONS(157),
        [sym_pass_statement] = ACTIONS(157),
        [sym_break_statement] = ACTIONS(157),
        [sym_continue_statement] = ACTIONS(157),
        [anon_sym_if] = ACTIONS(157),
        [anon_sym_for] = ACTIONS(157),
        [anon_sym_while] = ACTIONS(157),
        [anon_sym_try] = ACTIONS(157),
        [anon_sym_with] = ACTIONS(157),
        [anon_sym_def] = ACTIONS(157),
        [anon_sym_class] = ACTIONS(157),
        [anon_sym_AT] = ACTIONS(155),
        [anon_sym_LBRACK] = ACTIONS(155),
        [anon_sym_LBRACE] = ACTIONS(155),
        [sym_number] = ACTIONS(157),
        [sym_identifier] = ACTIONS(159),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(155),
        [sym__dedent] = ACTIONS(155),
    },
    [480] = {
        [ts_builtin_sym_end] = ACTIONS(1165),
        [anon_sym_SEMI] = ACTIONS(1165),
        [anon_sym_print] = ACTIONS(1168),
        [anon_sym_return] = ACTIONS(1168),
        [anon_sym_del] = ACTIONS(1168),
        [sym_pass_statement] = ACTIONS(1168),
        [sym_break_statement] = ACTIONS(1168),
        [sym_continue_statement] = ACTIONS(1168),
        [anon_sym_if] = ACTIONS(1168),
        [anon_sym_elif] = ACTIONS(1168),
        [anon_sym_else] = ACTIONS(1168),
        [anon_sym_for] = ACTIONS(1168),
        [anon_sym_while] = ACTIONS(1168),
        [anon_sym_try] = ACTIONS(1168),
        [anon_sym_with] = ACTIONS(1168),
        [anon_sym_def] = ACTIONS(1168),
        [anon_sym_class] = ACTIONS(1168),
        [anon_sym_AT] = ACTIONS(1165),
        [anon_sym_LBRACK] = ACTIONS(1165),
        [anon_sym_LBRACE] = ACTIONS(1165),
        [sym_number] = ACTIONS(1168),
        [sym_identifier] = ACTIONS(1171),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(1165),
        [sym__dedent] = ACTIONS(1165),
    },
    [481] = {
        [sym_finally_clause] = STATE(519),
        [ts_builtin_sym_end] = ACTIONS(1174),
        [anon_sym_SEMI] = ACTIONS(1174),
        [anon_sym_print] = ACTIONS(1180),
        [anon_sym_return] = ACTIONS(1180),
        [anon_sym_del] = ACTIONS(1180),
        [sym_pass_statement] = ACTIONS(1180),
        [sym_break_statement] = ACTIONS(1180),
        [sym_continue_statement] = ACTIONS(1180),
        [anon_sym_if] = ACTIONS(1180),
        [anon_sym_for] = ACTIONS(1180),
        [anon_sym_while] = ACTIONS(1180),
        [anon_sym_try] = ACTIONS(1180),
        [anon_sym_finally] = ACTIONS(1186),
        [anon_sym_with] = ACTIONS(1180),
        [anon_sym_def] = ACTIONS(1180),
        [anon_sym_class] = ACTIONS(1180),
        [anon_sym_AT] = ACTIONS(1174),
        [anon_sym_LBRACK] = ACTIONS(1174),
        [anon_sym_LBRACE] = ACTIONS(1174),
        [sym_number] = ACTIONS(1180),
        [sym_identifier] = ACTIONS(1188),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(1174),
        [sym__dedent] = ACTIONS(1174),
    },
    [482] = {
        [ts_builtin_sym_end] = ACTIONS(1194),
        [anon_sym_SEMI] = ACTIONS(1194),
        [anon_sym_print] = ACTIONS(1197),
        [anon_sym_return] = ACTIONS(1197),
        [anon_sym_del] = ACTIONS(1197),
        [sym_pass_statement] = ACTIONS(1197),
        [sym_break_statement] = ACTIONS(1197),
        [sym_continue_statement] = ACTIONS(1197),
        [anon_sym_if] = ACTIONS(1197),
        [anon_sym_else] = ACTIONS(1197),
        [anon_sym_for] = ACTIONS(1197),
        [anon_sym_while] = ACTIONS(1197),
        [anon_sym_try] = ACTIONS(1197),
        [anon_sym_except] = ACTIONS(1197),
        [anon_sym_finally] = ACTIONS(1197),
        [anon_sym_with] = ACTIONS(1197),
        [anon_sym_def] = ACTIONS(1197),
        [anon_sym_class] = ACTIONS(1197),
        [anon_sym_AT] = ACTIONS(1194),
        [anon_sym_LBRACK] = ACTIONS(1194),
        [anon_sym_LBRACE] = ACTIONS(1194),
        [sym_number] = ACTIONS(1197),
        [sym_identifier] = ACTIONS(1200),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(1194),
        [sym__dedent] = ACTIONS(1194),
    },
    [483] = {
        [ts_builtin_sym_end] = ACTIONS(1203),
        [anon_sym_SEMI] = ACTIONS(1203),
        [anon_sym_print] = ACTIONS(1207),
        [anon_sym_return] = ACTIONS(1207),
        [anon_sym_del] = ACTIONS(1207),
        [sym_pass_statement] = ACTIONS(1207),
        [sym_break_statement] = ACTIONS(1207),
        [sym_continue_statement] = ACTIONS(1207),
        [anon_sym_if] = ACTIONS(1207),
        [anon_sym_for] = ACTIONS(1207),
        [anon_sym_while] = ACTIONS(1207),
        [anon_sym_try] = ACTIONS(1207),
        [anon_sym_with] = ACTIONS(1207),
        [anon_sym_def] = ACTIONS(1207),
        [anon_sym_class] = ACTIONS(1207),
        [anon_sym_AT] = ACTIONS(1203),
        [anon_sym_LBRACK] = ACTIONS(1203),
        [anon_sym_LBRACE] = ACTIONS(1203),
        [sym_number] = ACTIONS(1207),
        [sym_identifier] = ACTIONS(1211),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(1203),
        [sym__dedent] = ACTIONS(1203),
    },
    [484] = {
        [aux_sym_with_statement_repeat1] = STATE(502),
        [anon_sym_COMMA] = ACTIONS(1215),
        [anon_sym_COLON] = ACTIONS(1219),
        [sym_comment] = ACTIONS(73),
    },
    [485] = {
        [ts_builtin_sym_end] = ACTIONS(1223),
        [anon_sym_SEMI] = ACTIONS(1223),
        [anon_sym_print] = ACTIONS(1226),
        [anon_sym_return] = ACTIONS(1226),
        [anon_sym_del] = ACTIONS(1226),
        [sym_pass_statement] = ACTIONS(1226),
        [sym_break_statement] = ACTIONS(1226),
        [sym_continue_statement] = ACTIONS(1226),
        [anon_sym_if] = ACTIONS(1226),
        [anon_sym_for] = ACTIONS(1226),
        [anon_sym_while] = ACTIONS(1226),
        [anon_sym_try] = ACTIONS(1226),
        [anon_sym_with] = ACTIONS(1226),
        [anon_sym_def] = ACTIONS(1226),
        [anon_sym_class] = ACTIONS(1226),
        [anon_sym_AT] = ACTIONS(1223),
        [anon_sym_LBRACK] = ACTIONS(1223),
        [anon_sym_LBRACE] = ACTIONS(1223),
        [sym_number] = ACTIONS(1226),
        [sym_identifier] = ACTIONS(1229),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(1223),
        [sym__dedent] = ACTIONS(1223),
    },
    [486] = {
        [anon_sym_COLON] = ACTIONS(1232),
        [sym_comment] = ACTIONS(73),
    },
    [487] = {
        [anon_sym_COMMA] = ACTIONS(1234),
        [anon_sym_RPAREN] = ACTIONS(1236),
        [sym_comment] = ACTIONS(73),
    },
    [488] = {
        [anon_sym_COMMA] = ACTIONS(1238),
        [anon_sym_RPAREN] = ACTIONS(1236),
        [sym_comment] = ACTIONS(73),
    },
    [489] = {
        [anon_sym_RPAREN] = ACTIONS(1240),
        [sym_comment] = ACTIONS(73),
    },
    [490] = {
        [anon_sym_def] = ACTIONS(1242),
        [anon_sym_class] = ACTIONS(1242),
        [anon_sym_AT] = ACTIONS(1242),
        [sym_comment] = ACTIONS(73),
    },
    [491] = {
        [sym_elif_clause] = STATE(560),
        [sym_else_clause] = STATE(569),
        [sym_except_clause] = STATE(570),
        [sym_finally_clause] = STATE(571),
        [aux_sym_if_statement_repeat1] = STATE(500),
        [aux_sym_try_statement_repeat1] = STATE(501),
        [ts_builtin_sym_end] = ACTIONS(1245),
        [anon_sym_SEMI] = ACTIONS(1245),
        [anon_sym_print] = ACTIONS(1259),
        [anon_sym_return] = ACTIONS(1259),
        [anon_sym_del] = ACTIONS(1259),
        [sym_pass_statement] = ACTIONS(1259),
        [sym_break_statement] = ACTIONS(1259),
        [sym_continue_statement] = ACTIONS(1259),
        [anon_sym_if] = ACTIONS(1259),
        [anon_sym_elif] = ACTIONS(1273),
        [anon_sym_else] = ACTIONS(1276),
        [anon_sym_for] = ACTIONS(1259),
        [anon_sym_while] = ACTIONS(1259),
        [anon_sym_try] = ACTIONS(1259),
        [anon_sym_except] = ACTIONS(1281),
        [anon_sym_finally] = ACTIONS(1285),
        [anon_sym_with] = ACTIONS(1259),
        [anon_sym_def] = ACTIONS(1259),
        [anon_sym_class] = ACTIONS(1259),
        [anon_sym_AT] = ACTIONS(1245),
        [anon_sym_LBRACK] = ACTIONS(1245),
        [anon_sym_LBRACE] = ACTIONS(1245),
        [sym_number] = ACTIONS(1259),
        [sym_identifier] = ACTIONS(1290),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(1245),
        [sym__dedent] = ACTIONS(1245),
    },
    [492] = {
        [anon_sym_COLON] = ACTIONS(1304),
        [anon_sym_in] = ACTIONS(1306),
        [anon_sym_RPAREN] = ACTIONS(1308),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(1310),
    },
    [493] = {
        [aux_sym_print_statement_repeat1] = STATE(499),
        [aux_sym_subscript_repeat1] = STATE(53),
        [anon_sym_COMMA] = ACTIONS(1313),
        [anon_sym_COLON] = ACTIONS(1328),
        [anon_sym_for] = ACTIONS(1336),
        [anon_sym_in] = ACTIONS(1340),
        [anon_sym_as] = ACTIONS(1345),
        [anon_sym_LPAREN] = ACTIONS(1348),
        [anon_sym_RPAREN] = ACTIONS(1351),
        [anon_sym_STAR] = ACTIONS(1363),
        [anon_sym_PLUS] = ACTIONS(1366),
        [anon_sym_DASH] = ACTIONS(1366),
        [anon_sym_SLASH] = ACTIONS(1366),
        [anon_sym_STAR_STAR] = ACTIONS(1366),
        [anon_sym_PIPE] = ACTIONS(1366),
        [anon_sym_AMP] = ACTIONS(1366),
        [anon_sym_CARET] = ACTIONS(1366),
        [anon_sym_LT_LT] = ACTIONS(1366),
        [anon_sym_GT_GT] = ACTIONS(1366),
        [anon_sym_LBRACK] = ACTIONS(1369),
        [anon_sym_RBRACK] = ACTIONS(1372),
        [anon_sym_RBRACE] = ACTIONS(1379),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(1385),
    },
    [494] = {
        [anon_sym_COMMA] = ACTIONS(1392),
        [anon_sym_RPAREN] = ACTIONS(1396),
        [sym_comment] = ACTIONS(73),
    },
    [495] = {
        [aux_sym_call_repeat2] = STATE(504),
        [anon_sym_COMMA] = ACTIONS(1400),
        [anon_sym_RPAREN] = ACTIONS(1402),
        [sym_comment] = ACTIONS(73),
    },
    [496] = {
        [anon_sym_RPAREN] = ACTIONS(1404),
        [sym_comment] = ACTIONS(73),
    },
    [497] = {
        [aux_sym_dictionary_repeat1] = STATE(198),
        [anon_sym_COMMA] = ACTIONS(1406),
        [anon_sym_for] = ACTIONS(505),
        [anon_sym_RBRACE] = ACTIONS(1410),
        [sym_comment] = ACTIONS(73),
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
        [ts_builtin_sym_end] = ACTIONS(183),
        [anon_sym_SEMI] = ACTIONS(185),
        [anon_sym_print] = ACTIONS(83),
        [anon_sym_return] = ACTIONS(85),
        [anon_sym_del] = ACTIONS(87),
        [sym_pass_statement] = ACTIONS(89),
        [sym_break_statement] = ACTIONS(89),
        [sym_continue_statement] = ACTIONS(89),
        [anon_sym_if] = ACTIONS(1414),
        [anon_sym_for] = ACTIONS(1416),
        [anon_sym_while] = ACTIONS(1418),
        [anon_sym_try] = ACTIONS(1420),
        [anon_sym_with] = ACTIONS(1422),
        [anon_sym_def] = ACTIONS(1424),
        [anon_sym_class] = ACTIONS(1426),
        [anon_sym_AT] = ACTIONS(105),
        [anon_sym_LBRACK] = ACTIONS(107),
        [anon_sym_LBRACE] = ACTIONS(109),
        [sym_number] = ACTIONS(111),
        [sym_identifier] = ACTIONS(113),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(185),
        [sym__dedent] = ACTIONS(1428),
    },
    [499] = {
        [anon_sym_COMMA] = ACTIONS(1430),
        [anon_sym_COLON] = ACTIONS(389),
        [anon_sym_in] = ACTIONS(389),
        [anon_sym_RPAREN] = ACTIONS(1432),
        [anon_sym_RBRACK] = ACTIONS(535),
        [anon_sym_RBRACE] = ACTIONS(519),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(1435),
    },
    [500] = {
        [sym_elif_clause] = STATE(520),
        [sym_else_clause] = STATE(521),
        [ts_builtin_sym_end] = ACTIONS(883),
        [anon_sym_SEMI] = ACTIONS(883),
        [anon_sym_print] = ACTIONS(881),
        [anon_sym_return] = ACTIONS(881),
        [anon_sym_del] = ACTIONS(881),
        [sym_pass_statement] = ACTIONS(881),
        [sym_break_statement] = ACTIONS(881),
        [sym_continue_statement] = ACTIONS(881),
        [anon_sym_if] = ACTIONS(881),
        [anon_sym_elif] = ACTIONS(1438),
        [anon_sym_else] = ACTIONS(1440),
        [anon_sym_for] = ACTIONS(881),
        [anon_sym_while] = ACTIONS(881),
        [anon_sym_try] = ACTIONS(881),
        [anon_sym_with] = ACTIONS(881),
        [anon_sym_def] = ACTIONS(881),
        [anon_sym_class] = ACTIONS(881),
        [anon_sym_AT] = ACTIONS(883),
        [anon_sym_LBRACK] = ACTIONS(883),
        [anon_sym_LBRACE] = ACTIONS(883),
        [sym_number] = ACTIONS(881),
        [sym_identifier] = ACTIONS(885),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(883),
        [sym__dedent] = ACTIONS(883),
    },
    [501] = {
        [sym_else_clause] = STATE(516),
        [sym_except_clause] = STATE(517),
        [sym_finally_clause] = STATE(518),
        [ts_builtin_sym_end] = ACTIONS(773),
        [anon_sym_SEMI] = ACTIONS(773),
        [anon_sym_print] = ACTIONS(771),
        [anon_sym_return] = ACTIONS(771),
        [anon_sym_del] = ACTIONS(771),
        [sym_pass_statement] = ACTIONS(771),
        [sym_break_statement] = ACTIONS(771),
        [sym_continue_statement] = ACTIONS(771),
        [anon_sym_if] = ACTIONS(771),
        [anon_sym_else] = ACTIONS(1440),
        [anon_sym_for] = ACTIONS(771),
        [anon_sym_while] = ACTIONS(771),
        [anon_sym_try] = ACTIONS(771),
        [anon_sym_except] = ACTIONS(1442),
        [anon_sym_finally] = ACTIONS(1186),
        [anon_sym_with] = ACTIONS(771),
        [anon_sym_def] = ACTIONS(771),
        [anon_sym_class] = ACTIONS(771),
        [anon_sym_AT] = ACTIONS(773),
        [anon_sym_LBRACK] = ACTIONS(773),
        [anon_sym_LBRACE] = ACTIONS(773),
        [sym_number] = ACTIONS(771),
        [sym_identifier] = ACTIONS(775),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(773),
        [sym__dedent] = ACTIONS(773),
    },
    [502] = {
        [anon_sym_COMMA] = ACTIONS(735),
        [anon_sym_COLON] = ACTIONS(1444),
        [sym_comment] = ACTIONS(73),
    },
    [503] = {
        [sym_function_definition] = STATE(509),
        [sym_class_definition] = STATE(509),
        [sym_decorator] = STATE(27),
        [anon_sym_def] = ACTIONS(1446),
        [anon_sym_class] = ACTIONS(1448),
        [anon_sym_AT] = ACTIONS(105),
        [sym_comment] = ACTIONS(73),
    },
    [504] = {
        [anon_sym_COMMA] = ACTIONS(1450),
        [anon_sym_RPAREN] = ACTIONS(1452),
        [sym_comment] = ACTIONS(73),
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
        [anon_sym_STAR_STAR] = ACTIONS(209),
        [anon_sym_LBRACK] = ACTIONS(117),
        [anon_sym_LBRACE] = ACTIONS(119),
        [sym_number] = ACTIONS(121),
        [sym_identifier] = ACTIONS(211),
        [sym_comment] = ACTIONS(73),
    },
    [506] = {
        [anon_sym_COMMA] = ACTIONS(1454),
        [anon_sym_COLON] = ACTIONS(1454),
        [anon_sym_for] = ACTIONS(1454),
        [anon_sym_in] = ACTIONS(1454),
        [anon_sym_as] = ACTIONS(1454),
        [anon_sym_LPAREN] = ACTIONS(1454),
        [anon_sym_RPAREN] = ACTIONS(1454),
        [anon_sym_STAR] = ACTIONS(1457),
        [anon_sym_PLUS] = ACTIONS(1454),
        [anon_sym_DASH] = ACTIONS(1454),
        [anon_sym_SLASH] = ACTIONS(1454),
        [anon_sym_STAR_STAR] = ACTIONS(1454),
        [anon_sym_PIPE] = ACTIONS(1454),
        [anon_sym_AMP] = ACTIONS(1454),
        [anon_sym_CARET] = ACTIONS(1454),
        [anon_sym_LT_LT] = ACTIONS(1454),
        [anon_sym_GT_GT] = ACTIONS(1454),
        [anon_sym_LBRACK] = ACTIONS(1454),
        [anon_sym_RBRACK] = ACTIONS(1454),
        [anon_sym_RBRACE] = ACTIONS(1454),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(1454),
    },
    [507] = {
        [anon_sym_RPAREN] = ACTIONS(1460),
        [sym_comment] = ACTIONS(73),
    },
    [508] = {
        [anon_sym_COMMA] = ACTIONS(1462),
        [anon_sym_COLON] = ACTIONS(1462),
        [anon_sym_for] = ACTIONS(1462),
        [anon_sym_in] = ACTIONS(1462),
        [anon_sym_as] = ACTIONS(1462),
        [anon_sym_LPAREN] = ACTIONS(1462),
        [anon_sym_RPAREN] = ACTIONS(1462),
        [anon_sym_STAR] = ACTIONS(1465),
        [anon_sym_PLUS] = ACTIONS(1462),
        [anon_sym_DASH] = ACTIONS(1462),
        [anon_sym_SLASH] = ACTIONS(1462),
        [anon_sym_STAR_STAR] = ACTIONS(1462),
        [anon_sym_PIPE] = ACTIONS(1462),
        [anon_sym_AMP] = ACTIONS(1462),
        [anon_sym_CARET] = ACTIONS(1462),
        [anon_sym_LT_LT] = ACTIONS(1462),
        [anon_sym_GT_GT] = ACTIONS(1462),
        [anon_sym_LBRACK] = ACTIONS(1462),
        [anon_sym_RBRACK] = ACTIONS(1462),
        [anon_sym_RBRACE] = ACTIONS(1462),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(1462),
    },
    [509] = {
        [ts_builtin_sym_end] = ACTIONS(191),
        [anon_sym_SEMI] = ACTIONS(191),
        [anon_sym_print] = ACTIONS(193),
        [anon_sym_return] = ACTIONS(193),
        [anon_sym_del] = ACTIONS(193),
        [sym_pass_statement] = ACTIONS(193),
        [sym_break_statement] = ACTIONS(193),
        [sym_continue_statement] = ACTIONS(193),
        [anon_sym_if] = ACTIONS(193),
        [anon_sym_for] = ACTIONS(193),
        [anon_sym_while] = ACTIONS(193),
        [anon_sym_try] = ACTIONS(193),
        [anon_sym_with] = ACTIONS(193),
        [anon_sym_def] = ACTIONS(193),
        [anon_sym_class] = ACTIONS(193),
        [anon_sym_AT] = ACTIONS(191),
        [anon_sym_LBRACK] = ACTIONS(191),
        [anon_sym_LBRACE] = ACTIONS(191),
        [sym_number] = ACTIONS(193),
        [sym_identifier] = ACTIONS(195),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(191),
        [sym__dedent] = ACTIONS(191),
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
        [anon_sym_print] = ACTIONS(83),
        [anon_sym_return] = ACTIONS(85),
        [anon_sym_del] = ACTIONS(87),
        [sym_pass_statement] = ACTIONS(89),
        [sym_break_statement] = ACTIONS(89),
        [sym_continue_statement] = ACTIONS(89),
        [anon_sym_LBRACK] = ACTIONS(107),
        [anon_sym_LBRACE] = ACTIONS(109),
        [sym_number] = ACTIONS(111),
        [sym_identifier] = ACTIONS(113),
        [sym_comment] = ACTIONS(73),
        [sym__indent] = ACTIONS(993),
    },
    [511] = {
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(1143),
    },
    [512] = {
        [ts_builtin_sym_end] = ACTIONS(741),
        [anon_sym_SEMI] = ACTIONS(741),
        [anon_sym_print] = ACTIONS(739),
        [anon_sym_return] = ACTIONS(739),
        [anon_sym_del] = ACTIONS(739),
        [sym_pass_statement] = ACTIONS(739),
        [sym_break_statement] = ACTIONS(739),
        [sym_continue_statement] = ACTIONS(739),
        [anon_sym_if] = ACTIONS(739),
        [anon_sym_for] = ACTIONS(739),
        [anon_sym_while] = ACTIONS(739),
        [anon_sym_try] = ACTIONS(739),
        [anon_sym_with] = ACTIONS(739),
        [anon_sym_def] = ACTIONS(739),
        [anon_sym_class] = ACTIONS(739),
        [anon_sym_AT] = ACTIONS(741),
        [anon_sym_LBRACK] = ACTIONS(741),
        [anon_sym_LBRACE] = ACTIONS(741),
        [sym_number] = ACTIONS(739),
        [sym_identifier] = ACTIONS(743),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(741),
        [sym__dedent] = ACTIONS(741),
    },
    [513] = {
        [ts_builtin_sym_end] = ACTIONS(611),
        [anon_sym_SEMI] = ACTIONS(611),
        [anon_sym_print] = ACTIONS(613),
        [anon_sym_return] = ACTIONS(613),
        [anon_sym_del] = ACTIONS(613),
        [sym_pass_statement] = ACTIONS(613),
        [sym_break_statement] = ACTIONS(613),
        [sym_continue_statement] = ACTIONS(613),
        [anon_sym_if] = ACTIONS(613),
        [anon_sym_elif] = ACTIONS(613),
        [anon_sym_else] = ACTIONS(613),
        [anon_sym_for] = ACTIONS(613),
        [anon_sym_while] = ACTIONS(613),
        [anon_sym_try] = ACTIONS(613),
        [anon_sym_except] = ACTIONS(613),
        [anon_sym_finally] = ACTIONS(613),
        [anon_sym_with] = ACTIONS(613),
        [anon_sym_def] = ACTIONS(613),
        [anon_sym_class] = ACTIONS(613),
        [anon_sym_AT] = ACTIONS(611),
        [anon_sym_LBRACK] = ACTIONS(611),
        [anon_sym_LBRACE] = ACTIONS(611),
        [sym_number] = ACTIONS(613),
        [sym_identifier] = ACTIONS(615),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(611),
        [sym__dedent] = ACTIONS(611),
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
        [anon_sym_print] = ACTIONS(83),
        [anon_sym_return] = ACTIONS(85),
        [anon_sym_del] = ACTIONS(87),
        [sym_pass_statement] = ACTIONS(89),
        [sym_break_statement] = ACTIONS(89),
        [sym_continue_statement] = ACTIONS(89),
        [anon_sym_if] = ACTIONS(589),
        [anon_sym_for] = ACTIONS(591),
        [anon_sym_while] = ACTIONS(593),
        [anon_sym_try] = ACTIONS(595),
        [anon_sym_with] = ACTIONS(597),
        [anon_sym_def] = ACTIONS(599),
        [anon_sym_class] = ACTIONS(601),
        [anon_sym_AT] = ACTIONS(105),
        [anon_sym_LBRACK] = ACTIONS(107),
        [anon_sym_LBRACE] = ACTIONS(109),
        [sym_number] = ACTIONS(111),
        [sym_identifier] = ACTIONS(113),
        [sym_comment] = ACTIONS(73),
        [sym__dedent] = ACTIONS(1428),
    },
    [515] = {
        [ts_builtin_sym_end] = ACTIONS(631),
        [anon_sym_SEMI] = ACTIONS(631),
        [anon_sym_print] = ACTIONS(633),
        [anon_sym_return] = ACTIONS(633),
        [anon_sym_del] = ACTIONS(633),
        [sym_pass_statement] = ACTIONS(633),
        [sym_break_statement] = ACTIONS(633),
        [sym_continue_statement] = ACTIONS(633),
        [anon_sym_if] = ACTIONS(633),
        [anon_sym_elif] = ACTIONS(633),
        [anon_sym_else] = ACTIONS(633),
        [anon_sym_for] = ACTIONS(633),
        [anon_sym_while] = ACTIONS(633),
        [anon_sym_try] = ACTIONS(633),
        [anon_sym_except] = ACTIONS(633),
        [anon_sym_finally] = ACTIONS(633),
        [anon_sym_with] = ACTIONS(633),
        [anon_sym_def] = ACTIONS(633),
        [anon_sym_class] = ACTIONS(633),
        [anon_sym_AT] = ACTIONS(631),
        [anon_sym_LBRACK] = ACTIONS(631),
        [anon_sym_LBRACE] = ACTIONS(631),
        [sym_number] = ACTIONS(633),
        [sym_identifier] = ACTIONS(635),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(631),
        [sym__dedent] = ACTIONS(631),
    },
    [516] = {
        [sym_finally_clause] = STATE(519),
        [ts_builtin_sym_end] = ACTIONS(787),
        [anon_sym_SEMI] = ACTIONS(787),
        [anon_sym_print] = ACTIONS(785),
        [anon_sym_return] = ACTIONS(785),
        [anon_sym_del] = ACTIONS(785),
        [sym_pass_statement] = ACTIONS(785),
        [sym_break_statement] = ACTIONS(785),
        [sym_continue_statement] = ACTIONS(785),
        [anon_sym_if] = ACTIONS(785),
        [anon_sym_for] = ACTIONS(785),
        [anon_sym_while] = ACTIONS(785),
        [anon_sym_try] = ACTIONS(785),
        [anon_sym_finally] = ACTIONS(1186),
        [anon_sym_with] = ACTIONS(785),
        [anon_sym_def] = ACTIONS(785),
        [anon_sym_class] = ACTIONS(785),
        [anon_sym_AT] = ACTIONS(787),
        [anon_sym_LBRACK] = ACTIONS(787),
        [anon_sym_LBRACE] = ACTIONS(787),
        [sym_number] = ACTIONS(785),
        [sym_identifier] = ACTIONS(789),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(787),
        [sym__dedent] = ACTIONS(787),
    },
    [517] = {
        [ts_builtin_sym_end] = ACTIONS(793),
        [anon_sym_SEMI] = ACTIONS(793),
        [anon_sym_print] = ACTIONS(791),
        [anon_sym_return] = ACTIONS(791),
        [anon_sym_del] = ACTIONS(791),
        [sym_pass_statement] = ACTIONS(791),
        [sym_break_statement] = ACTIONS(791),
        [sym_continue_statement] = ACTIONS(791),
        [anon_sym_if] = ACTIONS(791),
        [anon_sym_else] = ACTIONS(791),
        [anon_sym_for] = ACTIONS(791),
        [anon_sym_while] = ACTIONS(791),
        [anon_sym_try] = ACTIONS(791),
        [anon_sym_except] = ACTIONS(791),
        [anon_sym_finally] = ACTIONS(791),
        [anon_sym_with] = ACTIONS(791),
        [anon_sym_def] = ACTIONS(791),
        [anon_sym_class] = ACTIONS(791),
        [anon_sym_AT] = ACTIONS(793),
        [anon_sym_LBRACK] = ACTIONS(793),
        [anon_sym_LBRACE] = ACTIONS(793),
        [sym_number] = ACTIONS(791),
        [sym_identifier] = ACTIONS(795),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(793),
        [sym__dedent] = ACTIONS(793),
    },
    [518] = {
        [ts_builtin_sym_end] = ACTIONS(787),
        [anon_sym_SEMI] = ACTIONS(787),
        [anon_sym_print] = ACTIONS(785),
        [anon_sym_return] = ACTIONS(785),
        [anon_sym_del] = ACTIONS(785),
        [sym_pass_statement] = ACTIONS(785),
        [sym_break_statement] = ACTIONS(785),
        [sym_continue_statement] = ACTIONS(785),
        [anon_sym_if] = ACTIONS(785),
        [anon_sym_for] = ACTIONS(785),
        [anon_sym_while] = ACTIONS(785),
        [anon_sym_try] = ACTIONS(785),
        [anon_sym_with] = ACTIONS(785),
        [anon_sym_def] = ACTIONS(785),
        [anon_sym_class] = ACTIONS(785),
        [anon_sym_AT] = ACTIONS(787),
        [anon_sym_LBRACK] = ACTIONS(787),
        [anon_sym_LBRACE] = ACTIONS(787),
        [sym_number] = ACTIONS(785),
        [sym_identifier] = ACTIONS(789),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(787),
        [sym__dedent] = ACTIONS(787),
    },
    [519] = {
        [ts_builtin_sym_end] = ACTIONS(799),
        [anon_sym_SEMI] = ACTIONS(799),
        [anon_sym_print] = ACTIONS(797),
        [anon_sym_return] = ACTIONS(797),
        [anon_sym_del] = ACTIONS(797),
        [sym_pass_statement] = ACTIONS(797),
        [sym_break_statement] = ACTIONS(797),
        [sym_continue_statement] = ACTIONS(797),
        [anon_sym_if] = ACTIONS(797),
        [anon_sym_for] = ACTIONS(797),
        [anon_sym_while] = ACTIONS(797),
        [anon_sym_try] = ACTIONS(797),
        [anon_sym_with] = ACTIONS(797),
        [anon_sym_def] = ACTIONS(797),
        [anon_sym_class] = ACTIONS(797),
        [anon_sym_AT] = ACTIONS(799),
        [anon_sym_LBRACK] = ACTIONS(799),
        [anon_sym_LBRACE] = ACTIONS(799),
        [sym_number] = ACTIONS(797),
        [sym_identifier] = ACTIONS(801),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(799),
        [sym__dedent] = ACTIONS(799),
    },
    [520] = {
        [ts_builtin_sym_end] = ACTIONS(889),
        [anon_sym_SEMI] = ACTIONS(889),
        [anon_sym_print] = ACTIONS(887),
        [anon_sym_return] = ACTIONS(887),
        [anon_sym_del] = ACTIONS(887),
        [sym_pass_statement] = ACTIONS(887),
        [sym_break_statement] = ACTIONS(887),
        [sym_continue_statement] = ACTIONS(887),
        [anon_sym_if] = ACTIONS(887),
        [anon_sym_elif] = ACTIONS(887),
        [anon_sym_else] = ACTIONS(887),
        [anon_sym_for] = ACTIONS(887),
        [anon_sym_while] = ACTIONS(887),
        [anon_sym_try] = ACTIONS(887),
        [anon_sym_with] = ACTIONS(887),
        [anon_sym_def] = ACTIONS(887),
        [anon_sym_class] = ACTIONS(887),
        [anon_sym_AT] = ACTIONS(889),
        [anon_sym_LBRACK] = ACTIONS(889),
        [anon_sym_LBRACE] = ACTIONS(889),
        [sym_number] = ACTIONS(887),
        [sym_identifier] = ACTIONS(891),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(889),
        [sym__dedent] = ACTIONS(889),
    },
    [521] = {
        [ts_builtin_sym_end] = ACTIONS(895),
        [anon_sym_SEMI] = ACTIONS(895),
        [anon_sym_print] = ACTIONS(893),
        [anon_sym_return] = ACTIONS(893),
        [anon_sym_del] = ACTIONS(893),
        [sym_pass_statement] = ACTIONS(893),
        [sym_break_statement] = ACTIONS(893),
        [sym_continue_statement] = ACTIONS(893),
        [anon_sym_if] = ACTIONS(893),
        [anon_sym_for] = ACTIONS(893),
        [anon_sym_while] = ACTIONS(893),
        [anon_sym_try] = ACTIONS(893),
        [anon_sym_with] = ACTIONS(893),
        [anon_sym_def] = ACTIONS(893),
        [anon_sym_class] = ACTIONS(893),
        [anon_sym_AT] = ACTIONS(895),
        [anon_sym_LBRACK] = ACTIONS(895),
        [anon_sym_LBRACE] = ACTIONS(895),
        [sym_number] = ACTIONS(893),
        [sym_identifier] = ACTIONS(897),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(895),
        [sym__dedent] = ACTIONS(895),
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
        [anon_sym_print] = ACTIONS(83),
        [anon_sym_return] = ACTIONS(85),
        [anon_sym_del] = ACTIONS(87),
        [sym_pass_statement] = ACTIONS(89),
        [sym_break_statement] = ACTIONS(89),
        [sym_continue_statement] = ACTIONS(89),
        [anon_sym_LBRACK] = ACTIONS(107),
        [anon_sym_LBRACE] = ACTIONS(109),
        [sym_number] = ACTIONS(111),
        [sym_identifier] = ACTIONS(113),
        [sym_comment] = ACTIONS(73),
        [sym__indent] = ACTIONS(993),
    },
    [523] = {
        [ts_builtin_sym_end] = ACTIONS(805),
        [anon_sym_SEMI] = ACTIONS(805),
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
        [anon_sym_finally] = ACTIONS(803),
        [anon_sym_with] = ACTIONS(803),
        [anon_sym_def] = ACTIONS(803),
        [anon_sym_class] = ACTIONS(803),
        [anon_sym_AT] = ACTIONS(805),
        [anon_sym_LBRACK] = ACTIONS(805),
        [anon_sym_LBRACE] = ACTIONS(805),
        [sym_number] = ACTIONS(803),
        [sym_identifier] = ACTIONS(807),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(805),
        [sym__dedent] = ACTIONS(805),
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
        [anon_sym_LBRACK] = ACTIONS(107),
        [anon_sym_RBRACK] = ACTIONS(539),
        [anon_sym_LBRACE] = ACTIONS(109),
        [anon_sym_RBRACE] = ACTIONS(523),
        [sym_number] = ACTIONS(111),
        [sym_identifier] = ACTIONS(111),
        [sym_comment] = ACTIONS(73),
    },
    [525] = {
        [anon_sym_COMMA] = ACTIONS(391),
        [anon_sym_COLON] = ACTIONS(391),
        [anon_sym_in] = ACTIONS(391),
        [anon_sym_LPAREN] = ACTIONS(163),
        [anon_sym_RPAREN] = ACTIONS(391),
        [anon_sym_STAR] = ACTIONS(1468),
        [anon_sym_PLUS] = ACTIONS(1470),
        [anon_sym_DASH] = ACTIONS(1470),
        [anon_sym_SLASH] = ACTIONS(1470),
        [anon_sym_STAR_STAR] = ACTIONS(1470),
        [anon_sym_PIPE] = ACTIONS(1470),
        [anon_sym_AMP] = ACTIONS(1470),
        [anon_sym_CARET] = ACTIONS(1470),
        [anon_sym_LT_LT] = ACTIONS(1470),
        [anon_sym_GT_GT] = ACTIONS(1470),
        [anon_sym_LBRACK] = ACTIONS(179),
        [anon_sym_RBRACK] = ACTIONS(391),
        [anon_sym_RBRACE] = ACTIONS(391),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(391),
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
        [anon_sym_LBRACK] = ACTIONS(107),
        [anon_sym_LBRACE] = ACTIONS(109),
        [sym_number] = ACTIONS(111),
        [sym_identifier] = ACTIONS(111),
        [sym_comment] = ACTIONS(73),
    },
    [527] = {
        [anon_sym_COMMA] = ACTIONS(279),
        [anon_sym_COLON] = ACTIONS(279),
        [anon_sym_in] = ACTIONS(279),
        [anon_sym_LPAREN] = ACTIONS(1348),
        [anon_sym_RPAREN] = ACTIONS(279),
        [anon_sym_STAR] = ACTIONS(1472),
        [anon_sym_PLUS] = ACTIONS(1475),
        [anon_sym_DASH] = ACTIONS(1475),
        [anon_sym_SLASH] = ACTIONS(1475),
        [anon_sym_STAR_STAR] = ACTIONS(1475),
        [anon_sym_PIPE] = ACTIONS(1475),
        [anon_sym_AMP] = ACTIONS(1475),
        [anon_sym_CARET] = ACTIONS(1475),
        [anon_sym_LT_LT] = ACTIONS(1475),
        [anon_sym_GT_GT] = ACTIONS(1475),
        [anon_sym_LBRACK] = ACTIONS(1369),
        [anon_sym_RBRACK] = ACTIONS(279),
        [anon_sym_RBRACE] = ACTIONS(279),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(279),
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
        [anon_sym_LBRACK] = ACTIONS(117),
        [anon_sym_LBRACE] = ACTIONS(119),
        [sym_number] = ACTIONS(121),
        [sym_identifier] = ACTIONS(121),
        [sym_comment] = ACTIONS(73),
    },
    [529] = {
        [ts_builtin_sym_end] = ACTIONS(201),
        [anon_sym_SEMI] = ACTIONS(201),
        [anon_sym_print] = ACTIONS(203),
        [anon_sym_return] = ACTIONS(203),
        [anon_sym_del] = ACTIONS(203),
        [sym_pass_statement] = ACTIONS(203),
        [sym_break_statement] = ACTIONS(203),
        [sym_continue_statement] = ACTIONS(203),
        [anon_sym_if] = ACTIONS(203),
        [anon_sym_for] = ACTIONS(203),
        [anon_sym_while] = ACTIONS(203),
        [anon_sym_try] = ACTIONS(203),
        [anon_sym_with] = ACTIONS(203),
        [anon_sym_def] = ACTIONS(203),
        [anon_sym_class] = ACTIONS(203),
        [anon_sym_AT] = ACTIONS(201),
        [anon_sym_LBRACK] = ACTIONS(201),
        [anon_sym_LBRACE] = ACTIONS(201),
        [sym_number] = ACTIONS(203),
        [sym_identifier] = ACTIONS(205),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(201),
        [sym__dedent] = ACTIONS(201),
    },
    [530] = {
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(1478),
    },
    [531] = {
        [ts_builtin_sym_end] = ACTIONS(491),
        [anon_sym_SEMI] = ACTIONS(491),
        [anon_sym_print] = ACTIONS(493),
        [anon_sym_return] = ACTIONS(493),
        [anon_sym_del] = ACTIONS(493),
        [sym_pass_statement] = ACTIONS(493),
        [sym_break_statement] = ACTIONS(493),
        [sym_continue_statement] = ACTIONS(493),
        [anon_sym_if] = ACTIONS(493),
        [anon_sym_for] = ACTIONS(493),
        [anon_sym_while] = ACTIONS(493),
        [anon_sym_try] = ACTIONS(493),
        [anon_sym_with] = ACTIONS(493),
        [anon_sym_def] = ACTIONS(493),
        [anon_sym_class] = ACTIONS(493),
        [anon_sym_AT] = ACTIONS(491),
        [anon_sym_LBRACK] = ACTIONS(491),
        [anon_sym_LBRACE] = ACTIONS(491),
        [sym_number] = ACTIONS(493),
        [sym_identifier] = ACTIONS(495),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(491),
        [sym__dedent] = ACTIONS(491),
    },
    [532] = {
        [anon_sym_in] = ACTIONS(1480),
        [sym_comment] = ACTIONS(73),
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
        [anon_sym_LBRACK] = ACTIONS(117),
        [anon_sym_LBRACE] = ACTIONS(119),
        [sym_number] = ACTIONS(121),
        [sym_identifier] = ACTIONS(121),
        [sym_comment] = ACTIONS(73),
    },
    [534] = {
        [anon_sym_COLON] = ACTIONS(1304),
        [sym_comment] = ACTIONS(73),
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
        [anon_sym_print] = ACTIONS(83),
        [anon_sym_return] = ACTIONS(85),
        [anon_sym_del] = ACTIONS(87),
        [sym_pass_statement] = ACTIONS(89),
        [sym_break_statement] = ACTIONS(89),
        [sym_continue_statement] = ACTIONS(89),
        [anon_sym_LBRACK] = ACTIONS(107),
        [anon_sym_LBRACE] = ACTIONS(109),
        [sym_number] = ACTIONS(111),
        [sym_identifier] = ACTIONS(113),
        [sym_comment] = ACTIONS(73),
        [sym__indent] = ACTIONS(993),
    },
    [536] = {
        [sym_else_clause] = STATE(537),
        [ts_builtin_sym_end] = ACTIONS(855),
        [anon_sym_SEMI] = ACTIONS(855),
        [anon_sym_print] = ACTIONS(853),
        [anon_sym_return] = ACTIONS(853),
        [anon_sym_del] = ACTIONS(853),
        [sym_pass_statement] = ACTIONS(853),
        [sym_break_statement] = ACTIONS(853),
        [sym_continue_statement] = ACTIONS(853),
        [anon_sym_if] = ACTIONS(853),
        [anon_sym_else] = ACTIONS(1440),
        [anon_sym_for] = ACTIONS(853),
        [anon_sym_while] = ACTIONS(853),
        [anon_sym_try] = ACTIONS(853),
        [anon_sym_with] = ACTIONS(853),
        [anon_sym_def] = ACTIONS(853),
        [anon_sym_class] = ACTIONS(853),
        [anon_sym_AT] = ACTIONS(855),
        [anon_sym_LBRACK] = ACTIONS(855),
        [anon_sym_LBRACE] = ACTIONS(855),
        [sym_number] = ACTIONS(853),
        [sym_identifier] = ACTIONS(857),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(855),
        [sym__dedent] = ACTIONS(855),
    },
    [537] = {
        [ts_builtin_sym_end] = ACTIONS(861),
        [anon_sym_SEMI] = ACTIONS(861),
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
        [anon_sym_LBRACK] = ACTIONS(861),
        [anon_sym_LBRACE] = ACTIONS(861),
        [sym_number] = ACTIONS(859),
        [sym_identifier] = ACTIONS(863),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(861),
        [sym__dedent] = ACTIONS(861),
    },
    [538] = {
        [anon_sym_COMMA] = ACTIONS(1007),
        [anon_sym_COLON] = ACTIONS(1007),
        [anon_sym_for] = ACTIONS(1007),
        [anon_sym_in] = ACTIONS(1007),
        [anon_sym_as] = ACTIONS(1007),
        [anon_sym_LPAREN] = ACTIONS(1007),
        [anon_sym_RPAREN] = ACTIONS(1007),
        [anon_sym_STAR] = ACTIONS(1025),
        [anon_sym_PLUS] = ACTIONS(1007),
        [anon_sym_DASH] = ACTIONS(1007),
        [anon_sym_SLASH] = ACTIONS(1007),
        [anon_sym_STAR_STAR] = ACTIONS(1007),
        [anon_sym_PIPE] = ACTIONS(1007),
        [anon_sym_AMP] = ACTIONS(1007),
        [anon_sym_CARET] = ACTIONS(1007),
        [anon_sym_LT_LT] = ACTIONS(1007),
        [anon_sym_GT_GT] = ACTIONS(1007),
        [anon_sym_LBRACK] = ACTIONS(1007),
        [anon_sym_RBRACK] = ACTIONS(1007),
        [anon_sym_RBRACE] = ACTIONS(1007),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(1007),
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
        [anon_sym_STAR_STAR] = ACTIONS(209),
        [anon_sym_LBRACK] = ACTIONS(117),
        [anon_sym_LBRACE] = ACTIONS(119),
        [sym_number] = ACTIONS(121),
        [sym_identifier] = ACTIONS(211),
        [sym_comment] = ACTIONS(73),
    },
    [540] = {
        [anon_sym_COMMA] = ACTIONS(1482),
        [anon_sym_COLON] = ACTIONS(1482),
        [anon_sym_for] = ACTIONS(1482),
        [anon_sym_in] = ACTIONS(1482),
        [anon_sym_as] = ACTIONS(1482),
        [anon_sym_LPAREN] = ACTIONS(1482),
        [anon_sym_RPAREN] = ACTIONS(1482),
        [anon_sym_STAR] = ACTIONS(1485),
        [anon_sym_PLUS] = ACTIONS(1482),
        [anon_sym_DASH] = ACTIONS(1482),
        [anon_sym_SLASH] = ACTIONS(1482),
        [anon_sym_STAR_STAR] = ACTIONS(1482),
        [anon_sym_PIPE] = ACTIONS(1482),
        [anon_sym_AMP] = ACTIONS(1482),
        [anon_sym_CARET] = ACTIONS(1482),
        [anon_sym_LT_LT] = ACTIONS(1482),
        [anon_sym_GT_GT] = ACTIONS(1482),
        [anon_sym_LBRACK] = ACTIONS(1482),
        [anon_sym_RBRACK] = ACTIONS(1482),
        [anon_sym_RBRACE] = ACTIONS(1482),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(1482),
    },
    [541] = {
        [anon_sym_RPAREN] = ACTIONS(1488),
        [sym_comment] = ACTIONS(73),
    },
    [542] = {
        [anon_sym_COMMA] = ACTIONS(1490),
        [anon_sym_COLON] = ACTIONS(1490),
        [anon_sym_for] = ACTIONS(1490),
        [anon_sym_in] = ACTIONS(1490),
        [anon_sym_as] = ACTIONS(1490),
        [anon_sym_LPAREN] = ACTIONS(1490),
        [anon_sym_RPAREN] = ACTIONS(1490),
        [anon_sym_STAR] = ACTIONS(1493),
        [anon_sym_PLUS] = ACTIONS(1490),
        [anon_sym_DASH] = ACTIONS(1490),
        [anon_sym_SLASH] = ACTIONS(1490),
        [anon_sym_STAR_STAR] = ACTIONS(1490),
        [anon_sym_PIPE] = ACTIONS(1490),
        [anon_sym_AMP] = ACTIONS(1490),
        [anon_sym_CARET] = ACTIONS(1490),
        [anon_sym_LT_LT] = ACTIONS(1490),
        [anon_sym_GT_GT] = ACTIONS(1490),
        [anon_sym_LBRACK] = ACTIONS(1490),
        [anon_sym_RBRACK] = ACTIONS(1490),
        [anon_sym_RBRACE] = ACTIONS(1490),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(1490),
    },
    [543] = {
        [anon_sym_RPAREN] = ACTIONS(1452),
        [anon_sym_STAR] = ACTIONS(1496),
        [anon_sym_STAR_STAR] = ACTIONS(1499),
        [anon_sym_LBRACK] = ACTIONS(1499),
        [anon_sym_LBRACE] = ACTIONS(1499),
        [sym_number] = ACTIONS(1496),
        [sym_identifier] = ACTIONS(1496),
        [sym_comment] = ACTIONS(73),
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
        [anon_sym_RPAREN] = ACTIONS(1452),
        [anon_sym_STAR] = ACTIONS(1496),
        [anon_sym_STAR_STAR] = ACTIONS(1499),
        [anon_sym_LBRACK] = ACTIONS(969),
        [anon_sym_DOT_DOT_DOT] = ACTIONS(241),
        [anon_sym_RBRACK] = ACTIONS(1502),
        [anon_sym_LBRACE] = ACTIONS(977),
        [anon_sym_RBRACE] = ACTIONS(519),
        [sym_number] = ACTIONS(983),
        [sym_identifier] = ACTIONS(983),
        [sym_comment] = ACTIONS(73),
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
        [anon_sym_print] = ACTIONS(83),
        [anon_sym_return] = ACTIONS(85),
        [anon_sym_del] = ACTIONS(87),
        [sym_pass_statement] = ACTIONS(89),
        [sym_break_statement] = ACTIONS(89),
        [sym_continue_statement] = ACTIONS(89),
        [anon_sym_LBRACK] = ACTIONS(107),
        [anon_sym_LBRACE] = ACTIONS(109),
        [sym_number] = ACTIONS(111),
        [sym_identifier] = ACTIONS(113),
        [sym_comment] = ACTIONS(73),
        [sym__indent] = ACTIONS(993),
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
        [anon_sym_LBRACK] = ACTIONS(117),
        [anon_sym_LBRACE] = ACTIONS(119),
        [sym_number] = ACTIONS(121),
        [sym_identifier] = ACTIONS(121),
        [sym_comment] = ACTIONS(73),
    },
    [547] = {
        [anon_sym_COMMA] = ACTIONS(1482),
        [anon_sym_COLON] = ACTIONS(1482),
        [anon_sym_for] = ACTIONS(1482),
        [anon_sym_in] = ACTIONS(1482),
        [anon_sym_as] = ACTIONS(1482),
        [anon_sym_LPAREN] = ACTIONS(1482),
        [anon_sym_RPAREN] = ACTIONS(1482),
        [anon_sym_STAR] = ACTIONS(1485),
        [anon_sym_PLUS] = ACTIONS(1482),
        [anon_sym_DASH] = ACTIONS(1482),
        [anon_sym_SLASH] = ACTIONS(1482),
        [anon_sym_STAR_STAR] = ACTIONS(1482),
        [anon_sym_PIPE] = ACTIONS(1482),
        [anon_sym_AMP] = ACTIONS(1482),
        [anon_sym_CARET] = ACTIONS(1482),
        [anon_sym_LT_LT] = ACTIONS(1482),
        [anon_sym_GT_GT] = ACTIONS(1482),
        [anon_sym_LBRACK] = ACTIONS(1482),
        [anon_sym_RBRACK] = ACTIONS(1482),
        [anon_sym_RBRACE] = ACTIONS(1482),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(1504),
    },
    [548] = {
        [anon_sym_COMMA] = ACTIONS(1508),
        [anon_sym_COLON] = ACTIONS(1508),
        [anon_sym_for] = ACTIONS(1508),
        [anon_sym_in] = ACTIONS(1508),
        [anon_sym_as] = ACTIONS(1508),
        [anon_sym_LPAREN] = ACTIONS(1508),
        [anon_sym_RPAREN] = ACTIONS(1508),
        [anon_sym_STAR] = ACTIONS(1512),
        [anon_sym_PLUS] = ACTIONS(1508),
        [anon_sym_DASH] = ACTIONS(1508),
        [anon_sym_SLASH] = ACTIONS(1508),
        [anon_sym_STAR_STAR] = ACTIONS(1508),
        [anon_sym_PIPE] = ACTIONS(1508),
        [anon_sym_AMP] = ACTIONS(1508),
        [anon_sym_CARET] = ACTIONS(1508),
        [anon_sym_LT_LT] = ACTIONS(1508),
        [anon_sym_GT_GT] = ACTIONS(1508),
        [anon_sym_LBRACK] = ACTIONS(1508),
        [anon_sym_RBRACK] = ACTIONS(1508),
        [anon_sym_RBRACE] = ACTIONS(1508),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(1508),
    },
    [549] = {
        [anon_sym_COMMA] = ACTIONS(1516),
        [anon_sym_COLON] = ACTIONS(1516),
        [anon_sym_for] = ACTIONS(1516),
        [anon_sym_in] = ACTIONS(1516),
        [anon_sym_as] = ACTIONS(1516),
        [anon_sym_LPAREN] = ACTIONS(1516),
        [anon_sym_RPAREN] = ACTIONS(1516),
        [anon_sym_STAR] = ACTIONS(1520),
        [anon_sym_PLUS] = ACTIONS(1516),
        [anon_sym_DASH] = ACTIONS(1516),
        [anon_sym_SLASH] = ACTIONS(1516),
        [anon_sym_STAR_STAR] = ACTIONS(1516),
        [anon_sym_PIPE] = ACTIONS(1516),
        [anon_sym_AMP] = ACTIONS(1516),
        [anon_sym_CARET] = ACTIONS(1516),
        [anon_sym_LT_LT] = ACTIONS(1516),
        [anon_sym_GT_GT] = ACTIONS(1516),
        [anon_sym_LBRACK] = ACTIONS(1516),
        [anon_sym_RBRACK] = ACTIONS(1516),
        [anon_sym_RBRACE] = ACTIONS(1516),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(1516),
    },
    [550] = {
        [anon_sym_COMMA] = ACTIONS(279),
        [anon_sym_COLON] = ACTIONS(279),
        [anon_sym_for] = ACTIONS(279),
        [anon_sym_in] = ACTIONS(279),
        [anon_sym_as] = ACTIONS(279),
        [anon_sym_LPAREN] = ACTIONS(1348),
        [anon_sym_RPAREN] = ACTIONS(279),
        [anon_sym_STAR] = ACTIONS(1363),
        [anon_sym_PLUS] = ACTIONS(1366),
        [anon_sym_DASH] = ACTIONS(1366),
        [anon_sym_SLASH] = ACTIONS(1366),
        [anon_sym_STAR_STAR] = ACTIONS(1366),
        [anon_sym_PIPE] = ACTIONS(1366),
        [anon_sym_AMP] = ACTIONS(1366),
        [anon_sym_CARET] = ACTIONS(1366),
        [anon_sym_LT_LT] = ACTIONS(1366),
        [anon_sym_GT_GT] = ACTIONS(1366),
        [anon_sym_LBRACK] = ACTIONS(1369),
        [anon_sym_RBRACK] = ACTIONS(279),
        [anon_sym_RBRACE] = ACTIONS(279),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(279),
    },
    [551] = {
        [anon_sym_in] = ACTIONS(1524),
        [sym_comment] = ACTIONS(73),
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
        [anon_sym_LBRACK] = ACTIONS(117),
        [anon_sym_LBRACE] = ACTIONS(119),
        [sym_number] = ACTIONS(121),
        [sym_identifier] = ACTIONS(121),
        [sym_comment] = ACTIONS(73),
    },
    [553] = {
        [anon_sym_LPAREN] = ACTIONS(223),
        [anon_sym_STAR] = ACTIONS(1526),
        [anon_sym_PLUS] = ACTIONS(1528),
        [anon_sym_DASH] = ACTIONS(1528),
        [anon_sym_SLASH] = ACTIONS(1528),
        [anon_sym_STAR_STAR] = ACTIONS(1528),
        [anon_sym_PIPE] = ACTIONS(1528),
        [anon_sym_AMP] = ACTIONS(1528),
        [anon_sym_CARET] = ACTIONS(1528),
        [anon_sym_LT_LT] = ACTIONS(1528),
        [anon_sym_GT_GT] = ACTIONS(1528),
        [anon_sym_LBRACK] = ACTIONS(239),
        [anon_sym_RBRACK] = ACTIONS(543),
        [anon_sym_RBRACE] = ACTIONS(527),
        [sym_comment] = ACTIONS(73),
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
        [anon_sym_LBRACK] = ACTIONS(117),
        [anon_sym_LBRACE] = ACTIONS(119),
        [sym_number] = ACTIONS(121),
        [sym_identifier] = ACTIONS(121),
        [sym_comment] = ACTIONS(73),
    },
    [555] = {
        [anon_sym_LPAREN] = ACTIONS(1530),
        [anon_sym_STAR] = ACTIONS(1533),
        [anon_sym_PLUS] = ACTIONS(1536),
        [anon_sym_DASH] = ACTIONS(1536),
        [anon_sym_SLASH] = ACTIONS(1536),
        [anon_sym_STAR_STAR] = ACTIONS(1536),
        [anon_sym_PIPE] = ACTIONS(1536),
        [anon_sym_AMP] = ACTIONS(1536),
        [anon_sym_CARET] = ACTIONS(1536),
        [anon_sym_LT_LT] = ACTIONS(1536),
        [anon_sym_GT_GT] = ACTIONS(1536),
        [anon_sym_LBRACK] = ACTIONS(1539),
        [anon_sym_RBRACK] = ACTIONS(279),
        [anon_sym_RBRACE] = ACTIONS(279),
        [sym_comment] = ACTIONS(73),
    },
    [556] = {
        [sym_elif_clause] = STATE(560),
        [sym_else_clause] = STATE(561),
        [aux_sym_if_statement_repeat1] = STATE(500),
        [ts_builtin_sym_end] = ACTIONS(1542),
        [anon_sym_SEMI] = ACTIONS(1542),
        [anon_sym_print] = ACTIONS(1548),
        [anon_sym_return] = ACTIONS(1548),
        [anon_sym_del] = ACTIONS(1548),
        [sym_pass_statement] = ACTIONS(1548),
        [sym_break_statement] = ACTIONS(1548),
        [sym_continue_statement] = ACTIONS(1548),
        [anon_sym_if] = ACTIONS(1548),
        [anon_sym_elif] = ACTIONS(1273),
        [anon_sym_else] = ACTIONS(1276),
        [anon_sym_for] = ACTIONS(1548),
        [anon_sym_while] = ACTIONS(1548),
        [anon_sym_try] = ACTIONS(1548),
        [anon_sym_except] = ACTIONS(1554),
        [anon_sym_finally] = ACTIONS(1554),
        [anon_sym_with] = ACTIONS(1548),
        [anon_sym_def] = ACTIONS(1548),
        [anon_sym_class] = ACTIONS(1548),
        [anon_sym_AT] = ACTIONS(1542),
        [anon_sym_LBRACK] = ACTIONS(1542),
        [anon_sym_LBRACE] = ACTIONS(1542),
        [sym_number] = ACTIONS(1548),
        [sym_identifier] = ACTIONS(1557),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(1542),
        [sym__dedent] = ACTIONS(1542),
    },
    [557] = {
        [anon_sym_COMMA] = ACTIONS(379),
        [anon_sym_for] = ACTIONS(379),
        [anon_sym_LPAREN] = ACTIONS(163),
        [anon_sym_STAR] = ACTIONS(1563),
        [anon_sym_PLUS] = ACTIONS(1565),
        [anon_sym_DASH] = ACTIONS(1565),
        [anon_sym_SLASH] = ACTIONS(1565),
        [anon_sym_STAR_STAR] = ACTIONS(1565),
        [anon_sym_PIPE] = ACTIONS(1565),
        [anon_sym_AMP] = ACTIONS(1565),
        [anon_sym_CARET] = ACTIONS(1565),
        [anon_sym_LT_LT] = ACTIONS(1565),
        [anon_sym_GT_GT] = ACTIONS(1565),
        [anon_sym_LBRACK] = ACTIONS(179),
        [anon_sym_RBRACE] = ACTIONS(379),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(181),
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
        [anon_sym_LBRACK] = ACTIONS(107),
        [anon_sym_LBRACE] = ACTIONS(109),
        [sym_number] = ACTIONS(111),
        [sym_identifier] = ACTIONS(111),
        [sym_comment] = ACTIONS(73),
    },
    [559] = {
        [anon_sym_COMMA] = ACTIONS(279),
        [anon_sym_for] = ACTIONS(279),
        [anon_sym_LPAREN] = ACTIONS(1348),
        [anon_sym_STAR] = ACTIONS(1567),
        [anon_sym_PLUS] = ACTIONS(1570),
        [anon_sym_DASH] = ACTIONS(1570),
        [anon_sym_SLASH] = ACTIONS(1570),
        [anon_sym_STAR_STAR] = ACTIONS(1570),
        [anon_sym_PIPE] = ACTIONS(1570),
        [anon_sym_AMP] = ACTIONS(1570),
        [anon_sym_CARET] = ACTIONS(1570),
        [anon_sym_LT_LT] = ACTIONS(1570),
        [anon_sym_GT_GT] = ACTIONS(1570),
        [anon_sym_LBRACK] = ACTIONS(1369),
        [anon_sym_RBRACE] = ACTIONS(279),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(279),
    },
    [560] = {
        [ts_builtin_sym_end] = ACTIONS(877),
        [anon_sym_SEMI] = ACTIONS(877),
        [anon_sym_print] = ACTIONS(875),
        [anon_sym_return] = ACTIONS(875),
        [anon_sym_del] = ACTIONS(875),
        [sym_pass_statement] = ACTIONS(875),
        [sym_break_statement] = ACTIONS(875),
        [sym_continue_statement] = ACTIONS(875),
        [anon_sym_if] = ACTIONS(875),
        [anon_sym_elif] = ACTIONS(875),
        [anon_sym_else] = ACTIONS(875),
        [anon_sym_for] = ACTIONS(875),
        [anon_sym_while] = ACTIONS(875),
        [anon_sym_try] = ACTIONS(875),
        [anon_sym_with] = ACTIONS(875),
        [anon_sym_def] = ACTIONS(875),
        [anon_sym_class] = ACTIONS(875),
        [anon_sym_AT] = ACTIONS(877),
        [anon_sym_LBRACK] = ACTIONS(877),
        [anon_sym_LBRACE] = ACTIONS(877),
        [sym_number] = ACTIONS(875),
        [sym_identifier] = ACTIONS(879),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(877),
        [sym__dedent] = ACTIONS(877),
    },
    [561] = {
        [ts_builtin_sym_end] = ACTIONS(1573),
        [anon_sym_SEMI] = ACTIONS(1573),
        [anon_sym_print] = ACTIONS(1576),
        [anon_sym_return] = ACTIONS(1576),
        [anon_sym_del] = ACTIONS(1576),
        [sym_pass_statement] = ACTIONS(1576),
        [sym_break_statement] = ACTIONS(1576),
        [sym_continue_statement] = ACTIONS(1576),
        [anon_sym_if] = ACTIONS(1576),
        [anon_sym_for] = ACTIONS(1576),
        [anon_sym_while] = ACTIONS(1576),
        [anon_sym_try] = ACTIONS(1576),
        [anon_sym_with] = ACTIONS(1576),
        [anon_sym_def] = ACTIONS(1576),
        [anon_sym_class] = ACTIONS(1576),
        [anon_sym_AT] = ACTIONS(1573),
        [anon_sym_LBRACK] = ACTIONS(1573),
        [anon_sym_LBRACE] = ACTIONS(1573),
        [sym_number] = ACTIONS(1576),
        [sym_identifier] = ACTIONS(1579),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(1573),
        [sym__dedent] = ACTIONS(1573),
    },
    [562] = {
        [anon_sym_COMMA] = ACTIONS(1582),
        [anon_sym_COLON] = ACTIONS(1582),
        [anon_sym_for] = ACTIONS(1582),
        [anon_sym_in] = ACTIONS(1582),
        [anon_sym_as] = ACTIONS(1582),
        [anon_sym_LPAREN] = ACTIONS(1582),
        [anon_sym_RPAREN] = ACTIONS(1582),
        [anon_sym_STAR] = ACTIONS(1585),
        [anon_sym_PLUS] = ACTIONS(1582),
        [anon_sym_DASH] = ACTIONS(1582),
        [anon_sym_SLASH] = ACTIONS(1582),
        [anon_sym_STAR_STAR] = ACTIONS(1582),
        [anon_sym_PIPE] = ACTIONS(1582),
        [anon_sym_AMP] = ACTIONS(1582),
        [anon_sym_CARET] = ACTIONS(1582),
        [anon_sym_LT_LT] = ACTIONS(1582),
        [anon_sym_GT_GT] = ACTIONS(1582),
        [anon_sym_LBRACK] = ACTIONS(1582),
        [anon_sym_RBRACK] = ACTIONS(1582),
        [anon_sym_RBRACE] = ACTIONS(1582),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(1582),
    },
    [563] = {
        [anon_sym_COMMA] = ACTIONS(1588),
        [anon_sym_COLON] = ACTIONS(1591),
        [anon_sym_in] = ACTIONS(393),
        [anon_sym_LPAREN] = ACTIONS(163),
        [anon_sym_RPAREN] = ACTIONS(393),
        [anon_sym_STAR] = ACTIONS(1468),
        [anon_sym_PLUS] = ACTIONS(1470),
        [anon_sym_DASH] = ACTIONS(1470),
        [anon_sym_SLASH] = ACTIONS(1470),
        [anon_sym_STAR_STAR] = ACTIONS(1470),
        [anon_sym_PIPE] = ACTIONS(1470),
        [anon_sym_AMP] = ACTIONS(1470),
        [anon_sym_CARET] = ACTIONS(1470),
        [anon_sym_LT_LT] = ACTIONS(1470),
        [anon_sym_GT_GT] = ACTIONS(1470),
        [anon_sym_LBRACK] = ACTIONS(179),
        [anon_sym_RBRACK] = ACTIONS(1588),
        [anon_sym_RBRACE] = ACTIONS(393),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(393),
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
        [anon_sym_print] = ACTIONS(83),
        [anon_sym_return] = ACTIONS(85),
        [anon_sym_del] = ACTIONS(87),
        [sym_pass_statement] = ACTIONS(89),
        [sym_break_statement] = ACTIONS(89),
        [sym_continue_statement] = ACTIONS(89),
        [anon_sym_LBRACK] = ACTIONS(107),
        [anon_sym_LBRACE] = ACTIONS(109),
        [sym_number] = ACTIONS(111),
        [sym_identifier] = ACTIONS(113),
        [sym_comment] = ACTIONS(73),
        [sym__indent] = ACTIONS(993),
    },
    [565] = {
        [ts_builtin_sym_end] = ACTIONS(823),
        [anon_sym_SEMI] = ACTIONS(823),
        [anon_sym_print] = ACTIONS(821),
        [anon_sym_return] = ACTIONS(821),
        [anon_sym_del] = ACTIONS(821),
        [sym_pass_statement] = ACTIONS(821),
        [sym_break_statement] = ACTIONS(821),
        [sym_continue_statement] = ACTIONS(821),
        [anon_sym_if] = ACTIONS(821),
        [anon_sym_else] = ACTIONS(821),
        [anon_sym_for] = ACTIONS(821),
        [anon_sym_while] = ACTIONS(821),
        [anon_sym_try] = ACTIONS(821),
        [anon_sym_except] = ACTIONS(821),
        [anon_sym_finally] = ACTIONS(821),
        [anon_sym_with] = ACTIONS(821),
        [anon_sym_def] = ACTIONS(821),
        [anon_sym_class] = ACTIONS(821),
        [anon_sym_AT] = ACTIONS(823),
        [anon_sym_LBRACK] = ACTIONS(823),
        [anon_sym_LBRACE] = ACTIONS(823),
        [sym_number] = ACTIONS(821),
        [sym_identifier] = ACTIONS(825),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(823),
        [sym__dedent] = ACTIONS(823),
    },
    [566] = {
        [anon_sym_COLON] = ACTIONS(1594),
        [sym_comment] = ACTIONS(73),
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
        [anon_sym_print] = ACTIONS(83),
        [anon_sym_return] = ACTIONS(85),
        [anon_sym_del] = ACTIONS(87),
        [sym_pass_statement] = ACTIONS(89),
        [sym_break_statement] = ACTIONS(89),
        [sym_continue_statement] = ACTIONS(89),
        [anon_sym_LBRACK] = ACTIONS(107),
        [anon_sym_LBRACE] = ACTIONS(109),
        [sym_number] = ACTIONS(111),
        [sym_identifier] = ACTIONS(113),
        [sym_comment] = ACTIONS(73),
        [sym__indent] = ACTIONS(993),
    },
    [568] = {
        [ts_builtin_sym_end] = ACTIONS(605),
        [anon_sym_SEMI] = ACTIONS(605),
        [anon_sym_print] = ACTIONS(607),
        [anon_sym_return] = ACTIONS(607),
        [anon_sym_del] = ACTIONS(607),
        [sym_pass_statement] = ACTIONS(607),
        [sym_break_statement] = ACTIONS(607),
        [sym_continue_statement] = ACTIONS(607),
        [anon_sym_if] = ACTIONS(607),
        [anon_sym_for] = ACTIONS(607),
        [anon_sym_while] = ACTIONS(607),
        [anon_sym_try] = ACTIONS(607),
        [anon_sym_with] = ACTIONS(607),
        [anon_sym_def] = ACTIONS(607),
        [anon_sym_class] = ACTIONS(607),
        [anon_sym_AT] = ACTIONS(605),
        [anon_sym_LBRACK] = ACTIONS(605),
        [anon_sym_LBRACE] = ACTIONS(605),
        [sym_number] = ACTIONS(607),
        [sym_identifier] = ACTIONS(609),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(605),
        [sym__dedent] = ACTIONS(605),
    },
    [569] = {
        [ts_builtin_sym_end] = ACTIONS(1596),
        [anon_sym_SEMI] = ACTIONS(1596),
        [anon_sym_print] = ACTIONS(1600),
        [anon_sym_return] = ACTIONS(1600),
        [anon_sym_del] = ACTIONS(1600),
        [sym_pass_statement] = ACTIONS(1600),
        [sym_break_statement] = ACTIONS(1600),
        [sym_continue_statement] = ACTIONS(1600),
        [anon_sym_if] = ACTIONS(1600),
        [anon_sym_for] = ACTIONS(1600),
        [anon_sym_while] = ACTIONS(1600),
        [anon_sym_try] = ACTIONS(1600),
        [anon_sym_with] = ACTIONS(1600),
        [anon_sym_def] = ACTIONS(1600),
        [anon_sym_class] = ACTIONS(1600),
        [anon_sym_AT] = ACTIONS(1596),
        [anon_sym_LBRACK] = ACTIONS(1596),
        [anon_sym_LBRACE] = ACTIONS(1596),
        [sym_number] = ACTIONS(1600),
        [sym_identifier] = ACTIONS(1604),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(1596),
        [sym__dedent] = ACTIONS(1596),
    },
    [570] = {
        [ts_builtin_sym_end] = ACTIONS(767),
        [anon_sym_SEMI] = ACTIONS(767),
        [anon_sym_print] = ACTIONS(765),
        [anon_sym_return] = ACTIONS(765),
        [anon_sym_del] = ACTIONS(765),
        [sym_pass_statement] = ACTIONS(765),
        [sym_break_statement] = ACTIONS(765),
        [sym_continue_statement] = ACTIONS(765),
        [anon_sym_if] = ACTIONS(765),
        [anon_sym_else] = ACTIONS(765),
        [anon_sym_for] = ACTIONS(765),
        [anon_sym_while] = ACTIONS(765),
        [anon_sym_try] = ACTIONS(765),
        [anon_sym_except] = ACTIONS(765),
        [anon_sym_finally] = ACTIONS(765),
        [anon_sym_with] = ACTIONS(765),
        [anon_sym_def] = ACTIONS(765),
        [anon_sym_class] = ACTIONS(765),
        [anon_sym_AT] = ACTIONS(767),
        [anon_sym_LBRACK] = ACTIONS(767),
        [anon_sym_LBRACE] = ACTIONS(767),
        [sym_number] = ACTIONS(765),
        [sym_identifier] = ACTIONS(769),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(767),
        [sym__dedent] = ACTIONS(767),
    },
    [571] = {
        [ts_builtin_sym_end] = ACTIONS(773),
        [anon_sym_SEMI] = ACTIONS(773),
        [anon_sym_print] = ACTIONS(771),
        [anon_sym_return] = ACTIONS(771),
        [anon_sym_del] = ACTIONS(771),
        [sym_pass_statement] = ACTIONS(771),
        [sym_break_statement] = ACTIONS(771),
        [sym_continue_statement] = ACTIONS(771),
        [anon_sym_if] = ACTIONS(771),
        [anon_sym_for] = ACTIONS(771),
        [anon_sym_while] = ACTIONS(771),
        [anon_sym_try] = ACTIONS(771),
        [anon_sym_with] = ACTIONS(771),
        [anon_sym_def] = ACTIONS(771),
        [anon_sym_class] = ACTIONS(771),
        [anon_sym_AT] = ACTIONS(773),
        [anon_sym_LBRACK] = ACTIONS(773),
        [anon_sym_LBRACE] = ACTIONS(773),
        [sym_number] = ACTIONS(771),
        [sym_identifier] = ACTIONS(775),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(773),
        [sym__dedent] = ACTIONS(773),
    },
    [572] = {
        [anon_sym_COLON] = ACTIONS(1608),
        [sym_comment] = ACTIONS(73),
    },
    [573] = {
        [sym_dictionary_splat_parameter] = STATE(575),
        [anon_sym_STAR] = ACTIONS(697),
        [sym_comment] = ACTIONS(73),
    },
    [574] = {
        [anon_sym_COLON] = ACTIONS(1613),
        [sym_comment] = ACTIONS(73),
    },
    [575] = {
        [anon_sym_RPAREN] = ACTIONS(1616),
        [sym_comment] = ACTIONS(73),
    },
    [576] = {
        [anon_sym_COLON] = ACTIONS(1618),
        [sym_comment] = ACTIONS(73),
    },
    [577] = {
        [anon_sym_RPAREN] = ACTIONS(1621),
        [anon_sym_STAR] = ACTIONS(1623),
        [sym_identifier] = ACTIONS(1626),
        [sym_comment] = ACTIONS(73),
    },
    [578] = {
        [anon_sym_COLON] = ACTIONS(1629),
        [sym_comment] = ACTIONS(73),
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
        [anon_sym_print] = ACTIONS(83),
        [anon_sym_return] = ACTIONS(85),
        [anon_sym_del] = ACTIONS(87),
        [sym_pass_statement] = ACTIONS(89),
        [sym_break_statement] = ACTIONS(89),
        [sym_continue_statement] = ACTIONS(89),
        [anon_sym_LBRACK] = ACTIONS(107),
        [anon_sym_LBRACE] = ACTIONS(109),
        [sym_number] = ACTIONS(111),
        [sym_identifier] = ACTIONS(113),
        [sym_comment] = ACTIONS(73),
        [sym__indent] = ACTIONS(993),
    },
    [580] = {
        [ts_builtin_sym_end] = ACTIONS(669),
        [anon_sym_SEMI] = ACTIONS(669),
        [anon_sym_print] = ACTIONS(667),
        [anon_sym_return] = ACTIONS(667),
        [anon_sym_del] = ACTIONS(667),
        [sym_pass_statement] = ACTIONS(667),
        [sym_break_statement] = ACTIONS(667),
        [sym_continue_statement] = ACTIONS(667),
        [anon_sym_if] = ACTIONS(667),
        [anon_sym_for] = ACTIONS(667),
        [anon_sym_while] = ACTIONS(667),
        [anon_sym_try] = ACTIONS(667),
        [anon_sym_with] = ACTIONS(667),
        [anon_sym_def] = ACTIONS(667),
        [anon_sym_class] = ACTIONS(667),
        [anon_sym_AT] = ACTIONS(669),
        [anon_sym_LBRACK] = ACTIONS(669),
        [anon_sym_LBRACE] = ACTIONS(669),
        [sym_number] = ACTIONS(667),
        [sym_identifier] = ACTIONS(671),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(669),
        [sym__dedent] = ACTIONS(669),
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
        [anon_sym_print] = ACTIONS(83),
        [anon_sym_return] = ACTIONS(85),
        [anon_sym_del] = ACTIONS(87),
        [sym_pass_statement] = ACTIONS(89),
        [sym_break_statement] = ACTIONS(89),
        [sym_continue_statement] = ACTIONS(89),
        [anon_sym_LBRACK] = ACTIONS(107),
        [anon_sym_LBRACE] = ACTIONS(109),
        [sym_number] = ACTIONS(111),
        [sym_identifier] = ACTIONS(113),
        [sym_comment] = ACTIONS(73),
        [sym__indent] = ACTIONS(993),
    },
    [582] = {
        [ts_builtin_sym_end] = ACTIONS(749),
        [anon_sym_SEMI] = ACTIONS(749),
        [anon_sym_print] = ACTIONS(747),
        [anon_sym_return] = ACTIONS(747),
        [anon_sym_del] = ACTIONS(747),
        [sym_pass_statement] = ACTIONS(747),
        [sym_break_statement] = ACTIONS(747),
        [sym_continue_statement] = ACTIONS(747),
        [anon_sym_if] = ACTIONS(747),
        [anon_sym_for] = ACTIONS(747),
        [anon_sym_while] = ACTIONS(747),
        [anon_sym_try] = ACTIONS(747),
        [anon_sym_with] = ACTIONS(747),
        [anon_sym_def] = ACTIONS(747),
        [anon_sym_class] = ACTIONS(747),
        [anon_sym_AT] = ACTIONS(749),
        [anon_sym_LBRACK] = ACTIONS(749),
        [anon_sym_LBRACE] = ACTIONS(749),
        [sym_number] = ACTIONS(747),
        [sym_identifier] = ACTIONS(751),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(749),
        [sym__dedent] = ACTIONS(749),
    },
    [583] = {
        [ts_builtin_sym_end] = ACTIONS(1124),
        [anon_sym_SEMI] = ACTIONS(1124),
        [anon_sym_print] = ACTIONS(1127),
        [anon_sym_return] = ACTIONS(1127),
        [anon_sym_del] = ACTIONS(1127),
        [sym_pass_statement] = ACTIONS(1127),
        [sym_break_statement] = ACTIONS(1127),
        [sym_continue_statement] = ACTIONS(1127),
        [anon_sym_if] = ACTIONS(1127),
        [anon_sym_elif] = ACTIONS(613),
        [anon_sym_else] = ACTIONS(613),
        [anon_sym_for] = ACTIONS(1127),
        [anon_sym_while] = ACTIONS(1127),
        [anon_sym_try] = ACTIONS(1127),
        [anon_sym_except] = ACTIONS(613),
        [anon_sym_finally] = ACTIONS(613),
        [anon_sym_with] = ACTIONS(1127),
        [anon_sym_def] = ACTIONS(1127),
        [anon_sym_class] = ACTIONS(1127),
        [anon_sym_AT] = ACTIONS(1124),
        [anon_sym_LBRACK] = ACTIONS(1124),
        [anon_sym_LBRACE] = ACTIONS(1124),
        [sym_number] = ACTIONS(1127),
        [sym_identifier] = ACTIONS(1140),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(1124),
        [sym__dedent] = ACTIONS(1124),
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
        [anon_sym_print] = ACTIONS(83),
        [anon_sym_return] = ACTIONS(85),
        [anon_sym_del] = ACTIONS(87),
        [sym_pass_statement] = ACTIONS(89),
        [sym_break_statement] = ACTIONS(89),
        [sym_continue_statement] = ACTIONS(89),
        [anon_sym_LBRACK] = ACTIONS(107),
        [anon_sym_LBRACE] = ACTIONS(109),
        [sym_number] = ACTIONS(111),
        [sym_identifier] = ACTIONS(113),
        [sym_comment] = ACTIONS(73),
        [sym__indent] = ACTIONS(993),
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
        [anon_sym_RPAREN] = ACTIONS(659),
        [anon_sym_STAR] = ACTIONS(661),
        [anon_sym_LBRACK] = ACTIONS(117),
        [anon_sym_LBRACE] = ACTIONS(119),
        [sym_number] = ACTIONS(121),
        [sym_identifier] = ACTIONS(1632),
        [sym_comment] = ACTIONS(73),
    },
    [586] = {
        [anon_sym_COMMA] = ACTIONS(1634),
        [anon_sym_LPAREN] = ACTIONS(135),
        [anon_sym_RPAREN] = ACTIONS(1637),
        [anon_sym_EQ] = ACTIONS(683),
        [anon_sym_STAR] = ACTIONS(137),
        [anon_sym_PLUS] = ACTIONS(135),
        [anon_sym_DASH] = ACTIONS(135),
        [anon_sym_SLASH] = ACTIONS(135),
        [anon_sym_STAR_STAR] = ACTIONS(135),
        [anon_sym_PIPE] = ACTIONS(135),
        [anon_sym_AMP] = ACTIONS(135),
        [anon_sym_CARET] = ACTIONS(135),
        [anon_sym_LT_LT] = ACTIONS(135),
        [anon_sym_GT_GT] = ACTIONS(135),
        [anon_sym_LBRACK] = ACTIONS(135),
        [sym_comment] = ACTIONS(73),
    },
    [587] = {
        [anon_sym_RPAREN] = ACTIONS(1308),
        [sym_comment] = ACTIONS(73),
    },
    [588] = {
        [ts_builtin_sym_end] = ACTIONS(653),
        [anon_sym_SEMI] = ACTIONS(653),
        [anon_sym_print] = ACTIONS(651),
        [anon_sym_return] = ACTIONS(651),
        [anon_sym_del] = ACTIONS(651),
        [sym_pass_statement] = ACTIONS(651),
        [sym_break_statement] = ACTIONS(651),
        [sym_continue_statement] = ACTIONS(651),
        [anon_sym_if] = ACTIONS(651),
        [anon_sym_for] = ACTIONS(651),
        [anon_sym_while] = ACTIONS(651),
        [anon_sym_try] = ACTIONS(651),
        [anon_sym_with] = ACTIONS(651),
        [anon_sym_def] = ACTIONS(651),
        [anon_sym_class] = ACTIONS(651),
        [anon_sym_AT] = ACTIONS(653),
        [anon_sym_LBRACK] = ACTIONS(653),
        [anon_sym_LBRACE] = ACTIONS(653),
        [sym_number] = ACTIONS(651),
        [sym_identifier] = ACTIONS(655),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(653),
        [sym__dedent] = ACTIONS(653),
    },
    [589] = {
        [aux_sym_print_statement_repeat1] = STATE(222),
        [aux_sym_subscript_repeat1] = STATE(53),
        [anon_sym_COMMA] = ACTIONS(1640),
        [anon_sym_for] = ACTIONS(531),
        [anon_sym_LPAREN] = ACTIONS(223),
        [anon_sym_STAR] = ACTIONS(225),
        [anon_sym_PLUS] = ACTIONS(227),
        [anon_sym_DASH] = ACTIONS(227),
        [anon_sym_SLASH] = ACTIONS(229),
        [anon_sym_STAR_STAR] = ACTIONS(231),
        [anon_sym_PIPE] = ACTIONS(233),
        [anon_sym_AMP] = ACTIONS(235),
        [anon_sym_CARET] = ACTIONS(237),
        [anon_sym_LT_LT] = ACTIONS(227),
        [anon_sym_GT_GT] = ACTIONS(227),
        [anon_sym_LBRACK] = ACTIONS(239),
        [anon_sym_RBRACK] = ACTIONS(1642),
        [sym_comment] = ACTIONS(73),
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
        [anon_sym_LBRACK] = ACTIONS(117),
        [anon_sym_DOT_DOT_DOT] = ACTIONS(241),
        [anon_sym_RBRACK] = ACTIONS(1502),
        [anon_sym_LBRACE] = ACTIONS(119),
        [sym_number] = ACTIONS(121),
        [sym_identifier] = ACTIONS(121),
        [sym_comment] = ACTIONS(73),
    },
    [591] = {
        [anon_sym_COMMA] = ACTIONS(1644),
        [anon_sym_COLON] = ACTIONS(1644),
        [anon_sym_for] = ACTIONS(1644),
        [anon_sym_in] = ACTIONS(1644),
        [anon_sym_as] = ACTIONS(1644),
        [anon_sym_LPAREN] = ACTIONS(1644),
        [anon_sym_RPAREN] = ACTIONS(1644),
        [anon_sym_STAR] = ACTIONS(1647),
        [anon_sym_PLUS] = ACTIONS(1644),
        [anon_sym_DASH] = ACTIONS(1644),
        [anon_sym_SLASH] = ACTIONS(1644),
        [anon_sym_STAR_STAR] = ACTIONS(1644),
        [anon_sym_PIPE] = ACTIONS(1644),
        [anon_sym_AMP] = ACTIONS(1644),
        [anon_sym_CARET] = ACTIONS(1644),
        [anon_sym_LT_LT] = ACTIONS(1644),
        [anon_sym_GT_GT] = ACTIONS(1644),
        [anon_sym_LBRACK] = ACTIONS(1644),
        [anon_sym_RBRACK] = ACTIONS(1644),
        [anon_sym_RBRACE] = ACTIONS(1644),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(1644),
    },
    [592] = {
        [anon_sym_COMMA] = ACTIONS(1588),
        [anon_sym_LPAREN] = ACTIONS(223),
        [anon_sym_STAR] = ACTIONS(225),
        [anon_sym_PLUS] = ACTIONS(227),
        [anon_sym_DASH] = ACTIONS(227),
        [anon_sym_SLASH] = ACTIONS(229),
        [anon_sym_STAR_STAR] = ACTIONS(231),
        [anon_sym_PIPE] = ACTIONS(233),
        [anon_sym_AMP] = ACTIONS(235),
        [anon_sym_CARET] = ACTIONS(237),
        [anon_sym_LT_LT] = ACTIONS(227),
        [anon_sym_GT_GT] = ACTIONS(227),
        [anon_sym_LBRACK] = ACTIONS(239),
        [anon_sym_RBRACK] = ACTIONS(1588),
        [sym_comment] = ACTIONS(73),
    },
    [593] = {
        [anon_sym_COMMA] = ACTIONS(279),
        [anon_sym_COLON] = ACTIONS(279),
        [anon_sym_for] = ACTIONS(279),
        [anon_sym_in] = ACTIONS(279),
        [anon_sym_as] = ACTIONS(279),
        [anon_sym_LPAREN] = ACTIONS(1348),
        [anon_sym_RPAREN] = ACTIONS(1650),
        [anon_sym_STAR] = ACTIONS(1363),
        [anon_sym_PLUS] = ACTIONS(1366),
        [anon_sym_DASH] = ACTIONS(1366),
        [anon_sym_SLASH] = ACTIONS(1366),
        [anon_sym_STAR_STAR] = ACTIONS(1366),
        [anon_sym_PIPE] = ACTIONS(1366),
        [anon_sym_AMP] = ACTIONS(1366),
        [anon_sym_CARET] = ACTIONS(1366),
        [anon_sym_LT_LT] = ACTIONS(1366),
        [anon_sym_GT_GT] = ACTIONS(1366),
        [anon_sym_LBRACK] = ACTIONS(1369),
        [anon_sym_RBRACK] = ACTIONS(279),
        [anon_sym_RBRACE] = ACTIONS(279),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(279),
    },
    [594] = {
        [anon_sym_LPAREN] = ACTIONS(1653),
        [anon_sym_DOT] = ACTIONS(1653),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(1653),
    },
    [595] = {
        [anon_sym_COLON] = ACTIONS(1656),
        [anon_sym_LPAREN] = ACTIONS(1658),
        [sym_comment] = ACTIONS(73),
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
        [anon_sym_LBRACK] = ACTIONS(117),
        [anon_sym_LBRACE] = ACTIONS(119),
        [sym_number] = ACTIONS(121),
        [sym_identifier] = ACTIONS(121),
        [sym_comment] = ACTIONS(73),
    },
    [597] = {
        [anon_sym_COMMA] = ACTIONS(1660),
        [anon_sym_COLON] = ACTIONS(135),
        [anon_sym_for] = ACTIONS(135),
        [anon_sym_in] = ACTIONS(135),
        [anon_sym_as] = ACTIONS(135),
        [anon_sym_LPAREN] = ACTIONS(135),
        [anon_sym_RPAREN] = ACTIONS(1663),
        [anon_sym_STAR] = ACTIONS(137),
        [anon_sym_PLUS] = ACTIONS(135),
        [anon_sym_DASH] = ACTIONS(135),
        [anon_sym_SLASH] = ACTIONS(135),
        [anon_sym_STAR_STAR] = ACTIONS(135),
        [anon_sym_PIPE] = ACTIONS(135),
        [anon_sym_AMP] = ACTIONS(135),
        [anon_sym_CARET] = ACTIONS(135),
        [anon_sym_LT_LT] = ACTIONS(135),
        [anon_sym_GT_GT] = ACTIONS(135),
        [anon_sym_LBRACK] = ACTIONS(135),
        [anon_sym_RBRACK] = ACTIONS(135),
        [anon_sym_RBRACE] = ACTIONS(135),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(135),
    },
    [598] = {
        [anon_sym_COMMA] = ACTIONS(1667),
        [anon_sym_COLON] = ACTIONS(279),
        [anon_sym_for] = ACTIONS(279),
        [anon_sym_in] = ACTIONS(279),
        [anon_sym_as] = ACTIONS(279),
        [anon_sym_LPAREN] = ACTIONS(1348),
        [anon_sym_RPAREN] = ACTIONS(1667),
        [anon_sym_STAR] = ACTIONS(1363),
        [anon_sym_PLUS] = ACTIONS(1366),
        [anon_sym_DASH] = ACTIONS(1366),
        [anon_sym_SLASH] = ACTIONS(1366),
        [anon_sym_STAR_STAR] = ACTIONS(1366),
        [anon_sym_PIPE] = ACTIONS(1366),
        [anon_sym_AMP] = ACTIONS(1366),
        [anon_sym_CARET] = ACTIONS(1366),
        [anon_sym_LT_LT] = ACTIONS(1366),
        [anon_sym_GT_GT] = ACTIONS(1366),
        [anon_sym_LBRACK] = ACTIONS(1369),
        [anon_sym_RBRACK] = ACTIONS(279),
        [anon_sym_RBRACE] = ACTIONS(279),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(279),
    },
    [599] = {
        [anon_sym_COMMA] = ACTIONS(1670),
        [anon_sym_LPAREN] = ACTIONS(223),
        [anon_sym_RPAREN] = ACTIONS(1670),
        [anon_sym_STAR] = ACTIONS(225),
        [anon_sym_PLUS] = ACTIONS(227),
        [anon_sym_DASH] = ACTIONS(227),
        [anon_sym_SLASH] = ACTIONS(229),
        [anon_sym_STAR_STAR] = ACTIONS(231),
        [anon_sym_PIPE] = ACTIONS(233),
        [anon_sym_AMP] = ACTIONS(235),
        [anon_sym_CARET] = ACTIONS(237),
        [anon_sym_LT_LT] = ACTIONS(227),
        [anon_sym_GT_GT] = ACTIONS(227),
        [anon_sym_LBRACK] = ACTIONS(239),
        [sym_comment] = ACTIONS(73),
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
        [anon_sym_STAR] = ACTIONS(675),
        [anon_sym_LBRACK] = ACTIONS(117),
        [anon_sym_LBRACE] = ACTIONS(119),
        [sym_number] = ACTIONS(121),
        [sym_identifier] = ACTIONS(1673),
        [sym_comment] = ACTIONS(73),
    },
    [601] = {
        [anon_sym_COMMA] = ACTIONS(1634),
        [anon_sym_LPAREN] = ACTIONS(135),
        [anon_sym_RPAREN] = ACTIONS(1637),
        [anon_sym_EQ] = ACTIONS(1109),
        [anon_sym_STAR] = ACTIONS(137),
        [anon_sym_PLUS] = ACTIONS(135),
        [anon_sym_DASH] = ACTIONS(135),
        [anon_sym_SLASH] = ACTIONS(135),
        [anon_sym_STAR_STAR] = ACTIONS(135),
        [anon_sym_PIPE] = ACTIONS(135),
        [anon_sym_AMP] = ACTIONS(135),
        [anon_sym_CARET] = ACTIONS(135),
        [anon_sym_LT_LT] = ACTIONS(135),
        [anon_sym_GT_GT] = ACTIONS(135),
        [anon_sym_LBRACK] = ACTIONS(135),
        [sym_comment] = ACTIONS(73),
    },
    [602] = {
        [aux_sym_print_statement_repeat1] = STATE(605),
        [anon_sym_COMMA] = ACTIONS(1675),
        [anon_sym_LPAREN] = ACTIONS(223),
        [anon_sym_RPAREN] = ACTIONS(1677),
        [anon_sym_STAR] = ACTIONS(225),
        [anon_sym_PLUS] = ACTIONS(227),
        [anon_sym_DASH] = ACTIONS(227),
        [anon_sym_SLASH] = ACTIONS(229),
        [anon_sym_STAR_STAR] = ACTIONS(231),
        [anon_sym_PIPE] = ACTIONS(233),
        [anon_sym_AMP] = ACTIONS(235),
        [anon_sym_CARET] = ACTIONS(237),
        [anon_sym_LT_LT] = ACTIONS(227),
        [anon_sym_GT_GT] = ACTIONS(227),
        [anon_sym_LBRACK] = ACTIONS(239),
        [sym_comment] = ACTIONS(73),
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
        [anon_sym_RPAREN] = ACTIONS(477),
        [anon_sym_STAR] = ACTIONS(335),
        [anon_sym_STAR_STAR] = ACTIONS(337),
        [anon_sym_LBRACK] = ACTIONS(1680),
        [anon_sym_LBRACE] = ACTIONS(1683),
        [sym_number] = ACTIONS(1686),
        [sym_identifier] = ACTIONS(1686),
        [sym_comment] = ACTIONS(73),
    },
    [604] = {
        [anon_sym_COMMA] = ACTIONS(329),
        [anon_sym_COLON] = ACTIONS(329),
        [anon_sym_for] = ACTIONS(329),
        [anon_sym_in] = ACTIONS(329),
        [anon_sym_as] = ACTIONS(329),
        [anon_sym_LPAREN] = ACTIONS(329),
        [anon_sym_RPAREN] = ACTIONS(329),
        [anon_sym_STAR] = ACTIONS(331),
        [anon_sym_PLUS] = ACTIONS(329),
        [anon_sym_DASH] = ACTIONS(329),
        [anon_sym_SLASH] = ACTIONS(329),
        [anon_sym_STAR_STAR] = ACTIONS(329),
        [anon_sym_PIPE] = ACTIONS(329),
        [anon_sym_AMP] = ACTIONS(329),
        [anon_sym_CARET] = ACTIONS(329),
        [anon_sym_LT_LT] = ACTIONS(329),
        [anon_sym_GT_GT] = ACTIONS(329),
        [anon_sym_LBRACK] = ACTIONS(329),
        [anon_sym_RBRACK] = ACTIONS(329),
        [anon_sym_RBRACE] = ACTIONS(329),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(1689),
    },
    [605] = {
        [anon_sym_COMMA] = ACTIONS(387),
        [anon_sym_RPAREN] = ACTIONS(1432),
        [sym_comment] = ACTIONS(73),
    },
    [606] = {
        [anon_sym_COMMA] = ACTIONS(1660),
        [anon_sym_LPAREN] = ACTIONS(135),
        [anon_sym_RPAREN] = ACTIONS(1660),
        [anon_sym_STAR] = ACTIONS(137),
        [anon_sym_PLUS] = ACTIONS(135),
        [anon_sym_DASH] = ACTIONS(135),
        [anon_sym_SLASH] = ACTIONS(135),
        [anon_sym_STAR_STAR] = ACTIONS(135),
        [anon_sym_PIPE] = ACTIONS(135),
        [anon_sym_AMP] = ACTIONS(135),
        [anon_sym_CARET] = ACTIONS(135),
        [anon_sym_LT_LT] = ACTIONS(135),
        [anon_sym_GT_GT] = ACTIONS(135),
        [anon_sym_LBRACK] = ACTIONS(135),
        [sym_comment] = ACTIONS(73),
    },
    [607] = {
        [sym_parameters] = STATE(486),
        [anon_sym_LPAREN] = ACTIONS(657),
        [sym_comment] = ACTIONS(73),
    },
    [608] = {
        [aux_sym_with_statement_repeat1] = STATE(502),
        [anon_sym_COMMA] = ACTIONS(725),
        [anon_sym_COLON] = ACTIONS(1692),
        [sym_comment] = ACTIONS(73),
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
        [anon_sym_print] = ACTIONS(83),
        [anon_sym_return] = ACTIONS(85),
        [anon_sym_del] = ACTIONS(87),
        [sym_pass_statement] = ACTIONS(89),
        [sym_break_statement] = ACTIONS(89),
        [sym_continue_statement] = ACTIONS(89),
        [anon_sym_LBRACK] = ACTIONS(107),
        [anon_sym_LBRACE] = ACTIONS(109),
        [sym_number] = ACTIONS(111),
        [sym_identifier] = ACTIONS(113),
        [sym_comment] = ACTIONS(73),
        [sym__indent] = ACTIONS(993),
    },
    [610] = {
        [ts_builtin_sym_end] = ACTIONS(811),
        [anon_sym_SEMI] = ACTIONS(811),
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
        [anon_sym_AT] = ACTIONS(811),
        [anon_sym_LBRACK] = ACTIONS(811),
        [anon_sym_LBRACE] = ACTIONS(811),
        [sym_number] = ACTIONS(809),
        [sym_identifier] = ACTIONS(813),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(811),
        [sym__dedent] = ACTIONS(811),
    },
    [611] = {
        [anon_sym_COMMA] = ACTIONS(733),
        [anon_sym_COLON] = ACTIONS(1694),
        [anon_sym_LPAREN] = ACTIONS(223),
        [anon_sym_STAR] = ACTIONS(225),
        [anon_sym_PLUS] = ACTIONS(227),
        [anon_sym_DASH] = ACTIONS(227),
        [anon_sym_SLASH] = ACTIONS(229),
        [anon_sym_STAR_STAR] = ACTIONS(231),
        [anon_sym_PIPE] = ACTIONS(233),
        [anon_sym_AMP] = ACTIONS(235),
        [anon_sym_CARET] = ACTIONS(237),
        [anon_sym_LT_LT] = ACTIONS(227),
        [anon_sym_GT_GT] = ACTIONS(227),
        [anon_sym_LBRACK] = ACTIONS(239),
        [sym_comment] = ACTIONS(73),
    },
    [612] = {
        [anon_sym_COMMA] = ACTIONS(1697),
        [anon_sym_COLON] = ACTIONS(1699),
        [anon_sym_as] = ACTIONS(1697),
        [anon_sym_LPAREN] = ACTIONS(223),
        [anon_sym_STAR] = ACTIONS(225),
        [anon_sym_PLUS] = ACTIONS(227),
        [anon_sym_DASH] = ACTIONS(227),
        [anon_sym_SLASH] = ACTIONS(229),
        [anon_sym_STAR_STAR] = ACTIONS(231),
        [anon_sym_PIPE] = ACTIONS(233),
        [anon_sym_AMP] = ACTIONS(235),
        [anon_sym_CARET] = ACTIONS(237),
        [anon_sym_LT_LT] = ACTIONS(227),
        [anon_sym_GT_GT] = ACTIONS(227),
        [anon_sym_LBRACK] = ACTIONS(239),
        [sym_comment] = ACTIONS(73),
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
        [anon_sym_LBRACK] = ACTIONS(117),
        [anon_sym_LBRACE] = ACTIONS(119),
        [sym_number] = ACTIONS(121),
        [sym_identifier] = ACTIONS(121),
        [sym_comment] = ACTIONS(73),
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
        [anon_sym_print] = ACTIONS(83),
        [anon_sym_return] = ACTIONS(85),
        [anon_sym_del] = ACTIONS(87),
        [sym_pass_statement] = ACTIONS(89),
        [sym_break_statement] = ACTIONS(89),
        [sym_continue_statement] = ACTIONS(89),
        [anon_sym_LBRACK] = ACTIONS(107),
        [anon_sym_LBRACE] = ACTIONS(109),
        [sym_number] = ACTIONS(111),
        [sym_identifier] = ACTIONS(113),
        [sym_comment] = ACTIONS(73),
        [sym__indent] = ACTIONS(993),
    },
    [615] = {
        [anon_sym_COLON] = ACTIONS(1701),
        [anon_sym_LPAREN] = ACTIONS(223),
        [anon_sym_STAR] = ACTIONS(225),
        [anon_sym_PLUS] = ACTIONS(227),
        [anon_sym_DASH] = ACTIONS(227),
        [anon_sym_SLASH] = ACTIONS(229),
        [anon_sym_STAR_STAR] = ACTIONS(231),
        [anon_sym_PIPE] = ACTIONS(233),
        [anon_sym_AMP] = ACTIONS(235),
        [anon_sym_CARET] = ACTIONS(237),
        [anon_sym_LT_LT] = ACTIONS(227),
        [anon_sym_GT_GT] = ACTIONS(227),
        [anon_sym_LBRACK] = ACTIONS(239),
        [sym_comment] = ACTIONS(73),
    },
    [616] = {
        [ts_builtin_sym_end] = ACTIONS(829),
        [anon_sym_SEMI] = ACTIONS(829),
        [anon_sym_print] = ACTIONS(827),
        [anon_sym_return] = ACTIONS(827),
        [anon_sym_del] = ACTIONS(827),
        [sym_pass_statement] = ACTIONS(827),
        [sym_break_statement] = ACTIONS(827),
        [sym_continue_statement] = ACTIONS(827),
        [anon_sym_if] = ACTIONS(827),
        [anon_sym_else] = ACTIONS(827),
        [anon_sym_for] = ACTIONS(827),
        [anon_sym_while] = ACTIONS(827),
        [anon_sym_try] = ACTIONS(827),
        [anon_sym_except] = ACTIONS(827),
        [anon_sym_finally] = ACTIONS(827),
        [anon_sym_with] = ACTIONS(827),
        [anon_sym_def] = ACTIONS(827),
        [anon_sym_class] = ACTIONS(827),
        [anon_sym_AT] = ACTIONS(829),
        [anon_sym_LBRACK] = ACTIONS(829),
        [anon_sym_LBRACE] = ACTIONS(829),
        [sym_number] = ACTIONS(827),
        [sym_identifier] = ACTIONS(831),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(829),
        [sym__dedent] = ACTIONS(829),
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
        [anon_sym_print] = ACTIONS(83),
        [anon_sym_return] = ACTIONS(85),
        [anon_sym_del] = ACTIONS(87),
        [sym_pass_statement] = ACTIONS(89),
        [sym_break_statement] = ACTIONS(89),
        [sym_continue_statement] = ACTIONS(89),
        [anon_sym_LBRACK] = ACTIONS(107),
        [anon_sym_LBRACE] = ACTIONS(109),
        [sym_number] = ACTIONS(111),
        [sym_identifier] = ACTIONS(113),
        [sym_comment] = ACTIONS(73),
        [sym__indent] = ACTIONS(755),
    },
    [618] = {
        [sym_except_clause] = STATE(570),
        [sym_finally_clause] = STATE(571),
        [aux_sym_try_statement_repeat1] = STATE(501),
        [anon_sym_except] = ACTIONS(1703),
        [anon_sym_finally] = ACTIONS(1705),
        [sym_comment] = ACTIONS(73),
    },
    [619] = {
        [anon_sym_COLON] = ACTIONS(1707),
        [anon_sym_LPAREN] = ACTIONS(223),
        [anon_sym_STAR] = ACTIONS(225),
        [anon_sym_PLUS] = ACTIONS(227),
        [anon_sym_DASH] = ACTIONS(227),
        [anon_sym_SLASH] = ACTIONS(229),
        [anon_sym_STAR_STAR] = ACTIONS(231),
        [anon_sym_PIPE] = ACTIONS(233),
        [anon_sym_AMP] = ACTIONS(235),
        [anon_sym_CARET] = ACTIONS(237),
        [anon_sym_LT_LT] = ACTIONS(227),
        [anon_sym_GT_GT] = ACTIONS(227),
        [anon_sym_LBRACK] = ACTIONS(239),
        [sym_comment] = ACTIONS(73),
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
        [anon_sym_print] = ACTIONS(83),
        [anon_sym_return] = ACTIONS(85),
        [anon_sym_del] = ACTIONS(87),
        [sym_pass_statement] = ACTIONS(89),
        [sym_break_statement] = ACTIONS(89),
        [sym_continue_statement] = ACTIONS(89),
        [anon_sym_LBRACK] = ACTIONS(107),
        [anon_sym_LBRACE] = ACTIONS(109),
        [sym_number] = ACTIONS(111),
        [sym_identifier] = ACTIONS(113),
        [sym_comment] = ACTIONS(73),
        [sym__indent] = ACTIONS(993),
    },
    [621] = {
        [sym_else_clause] = STATE(622),
        [ts_builtin_sym_end] = ACTIONS(839),
        [anon_sym_SEMI] = ACTIONS(839),
        [anon_sym_print] = ACTIONS(837),
        [anon_sym_return] = ACTIONS(837),
        [anon_sym_del] = ACTIONS(837),
        [sym_pass_statement] = ACTIONS(837),
        [sym_break_statement] = ACTIONS(837),
        [sym_continue_statement] = ACTIONS(837),
        [anon_sym_if] = ACTIONS(837),
        [anon_sym_else] = ACTIONS(1440),
        [anon_sym_for] = ACTIONS(837),
        [anon_sym_while] = ACTIONS(837),
        [anon_sym_try] = ACTIONS(837),
        [anon_sym_with] = ACTIONS(837),
        [anon_sym_def] = ACTIONS(837),
        [anon_sym_class] = ACTIONS(837),
        [anon_sym_AT] = ACTIONS(839),
        [anon_sym_LBRACK] = ACTIONS(839),
        [anon_sym_LBRACE] = ACTIONS(839),
        [sym_number] = ACTIONS(837),
        [sym_identifier] = ACTIONS(841),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(839),
        [sym__dedent] = ACTIONS(839),
    },
    [622] = {
        [ts_builtin_sym_end] = ACTIONS(845),
        [anon_sym_SEMI] = ACTIONS(845),
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
        [anon_sym_LBRACK] = ACTIONS(845),
        [anon_sym_LBRACE] = ACTIONS(845),
        [sym_number] = ACTIONS(843),
        [sym_identifier] = ACTIONS(847),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(845),
        [sym__dedent] = ACTIONS(845),
    },
    [623] = {
        [aux_sym_print_statement_repeat1] = STATE(126),
        [anon_sym_COMMA] = ACTIONS(383),
        [anon_sym_COLON] = ACTIONS(385),
        [anon_sym_LPAREN] = ACTIONS(223),
        [anon_sym_STAR] = ACTIONS(1709),
        [anon_sym_PLUS] = ACTIONS(1711),
        [anon_sym_DASH] = ACTIONS(1711),
        [anon_sym_SLASH] = ACTIONS(1711),
        [anon_sym_STAR_STAR] = ACTIONS(1711),
        [anon_sym_PIPE] = ACTIONS(1711),
        [anon_sym_AMP] = ACTIONS(1711),
        [anon_sym_CARET] = ACTIONS(1711),
        [anon_sym_LT_LT] = ACTIONS(1711),
        [anon_sym_GT_GT] = ACTIONS(1711),
        [anon_sym_LBRACK] = ACTIONS(239),
        [anon_sym_RBRACK] = ACTIONS(543),
        [anon_sym_RBRACE] = ACTIONS(1713),
        [sym_comment] = ACTIONS(73),
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
        [anon_sym_LBRACK] = ACTIONS(117),
        [anon_sym_LBRACE] = ACTIONS(119),
        [sym_number] = ACTIONS(121),
        [sym_identifier] = ACTIONS(121),
        [sym_comment] = ACTIONS(73),
    },
    [625] = {
        [anon_sym_COMMA] = ACTIONS(1715),
        [anon_sym_COLON] = ACTIONS(1715),
        [anon_sym_for] = ACTIONS(1715),
        [anon_sym_in] = ACTIONS(1715),
        [anon_sym_as] = ACTIONS(1715),
        [anon_sym_LPAREN] = ACTIONS(1715),
        [anon_sym_RPAREN] = ACTIONS(1715),
        [anon_sym_STAR] = ACTIONS(1718),
        [anon_sym_PLUS] = ACTIONS(1715),
        [anon_sym_DASH] = ACTIONS(1715),
        [anon_sym_SLASH] = ACTIONS(1715),
        [anon_sym_STAR_STAR] = ACTIONS(1715),
        [anon_sym_PIPE] = ACTIONS(1715),
        [anon_sym_AMP] = ACTIONS(1715),
        [anon_sym_CARET] = ACTIONS(1715),
        [anon_sym_LT_LT] = ACTIONS(1715),
        [anon_sym_GT_GT] = ACTIONS(1715),
        [anon_sym_LBRACK] = ACTIONS(1715),
        [anon_sym_RBRACK] = ACTIONS(1715),
        [anon_sym_RBRACE] = ACTIONS(1715),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(1715),
    },
    [626] = {
        [anon_sym_COMMA] = ACTIONS(279),
        [anon_sym_COLON] = ACTIONS(279),
        [anon_sym_LPAREN] = ACTIONS(1530),
        [anon_sym_STAR] = ACTIONS(1721),
        [anon_sym_PLUS] = ACTIONS(1724),
        [anon_sym_DASH] = ACTIONS(1724),
        [anon_sym_SLASH] = ACTIONS(1724),
        [anon_sym_STAR_STAR] = ACTIONS(1724),
        [anon_sym_PIPE] = ACTIONS(1724),
        [anon_sym_AMP] = ACTIONS(1724),
        [anon_sym_CARET] = ACTIONS(1724),
        [anon_sym_LT_LT] = ACTIONS(1724),
        [anon_sym_GT_GT] = ACTIONS(1724),
        [anon_sym_LBRACK] = ACTIONS(1539),
        [anon_sym_RBRACK] = ACTIONS(279),
        [anon_sym_RBRACE] = ACTIONS(279),
        [sym_comment] = ACTIONS(73),
    },
    [627] = {
        [anon_sym_in] = ACTIONS(1306),
        [sym_comment] = ACTIONS(73),
    },
    [628] = {
        [anon_sym_COLON] = ACTIONS(1727),
        [anon_sym_LPAREN] = ACTIONS(223),
        [anon_sym_STAR] = ACTIONS(225),
        [anon_sym_PLUS] = ACTIONS(227),
        [anon_sym_DASH] = ACTIONS(227),
        [anon_sym_SLASH] = ACTIONS(229),
        [anon_sym_STAR_STAR] = ACTIONS(231),
        [anon_sym_PIPE] = ACTIONS(233),
        [anon_sym_AMP] = ACTIONS(235),
        [anon_sym_CARET] = ACTIONS(237),
        [anon_sym_LT_LT] = ACTIONS(227),
        [anon_sym_GT_GT] = ACTIONS(227),
        [anon_sym_LBRACK] = ACTIONS(239),
        [sym_comment] = ACTIONS(73),
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
        [anon_sym_print] = ACTIONS(83),
        [anon_sym_return] = ACTIONS(85),
        [anon_sym_del] = ACTIONS(87),
        [sym_pass_statement] = ACTIONS(89),
        [sym_break_statement] = ACTIONS(89),
        [sym_continue_statement] = ACTIONS(89),
        [anon_sym_LBRACK] = ACTIONS(107),
        [anon_sym_LBRACE] = ACTIONS(109),
        [sym_number] = ACTIONS(111),
        [sym_identifier] = ACTIONS(113),
        [sym_comment] = ACTIONS(73),
        [sym__indent] = ACTIONS(993),
    },
    [630] = {
        [ts_builtin_sym_end] = ACTIONS(903),
        [anon_sym_SEMI] = ACTIONS(903),
        [anon_sym_print] = ACTIONS(901),
        [anon_sym_return] = ACTIONS(901),
        [anon_sym_del] = ACTIONS(901),
        [sym_pass_statement] = ACTIONS(901),
        [sym_break_statement] = ACTIONS(901),
        [sym_continue_statement] = ACTIONS(901),
        [anon_sym_if] = ACTIONS(901),
        [anon_sym_elif] = ACTIONS(901),
        [anon_sym_else] = ACTIONS(901),
        [anon_sym_for] = ACTIONS(901),
        [anon_sym_while] = ACTIONS(901),
        [anon_sym_try] = ACTIONS(901),
        [anon_sym_with] = ACTIONS(901),
        [anon_sym_def] = ACTIONS(901),
        [anon_sym_class] = ACTIONS(901),
        [anon_sym_AT] = ACTIONS(903),
        [anon_sym_LBRACK] = ACTIONS(903),
        [anon_sym_LBRACE] = ACTIONS(903),
        [sym_number] = ACTIONS(901),
        [sym_identifier] = ACTIONS(905),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(903),
        [sym__dedent] = ACTIONS(903),
    },
    [631] = {
        [anon_sym_COLON] = ACTIONS(1729),
        [anon_sym_LPAREN] = ACTIONS(223),
        [anon_sym_STAR] = ACTIONS(225),
        [anon_sym_PLUS] = ACTIONS(227),
        [anon_sym_DASH] = ACTIONS(227),
        [anon_sym_SLASH] = ACTIONS(229),
        [anon_sym_STAR_STAR] = ACTIONS(231),
        [anon_sym_PIPE] = ACTIONS(233),
        [anon_sym_AMP] = ACTIONS(235),
        [anon_sym_CARET] = ACTIONS(237),
        [anon_sym_LT_LT] = ACTIONS(227),
        [anon_sym_GT_GT] = ACTIONS(227),
        [anon_sym_LBRACK] = ACTIONS(239),
        [sym_comment] = ACTIONS(73),
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
        [anon_sym_print] = ACTIONS(83),
        [anon_sym_return] = ACTIONS(85),
        [anon_sym_del] = ACTIONS(87),
        [sym_pass_statement] = ACTIONS(89),
        [sym_break_statement] = ACTIONS(89),
        [sym_continue_statement] = ACTIONS(89),
        [anon_sym_LBRACK] = ACTIONS(107),
        [anon_sym_LBRACE] = ACTIONS(109),
        [sym_number] = ACTIONS(111),
        [sym_identifier] = ACTIONS(113),
        [sym_comment] = ACTIONS(73),
        [sym__indent] = ACTIONS(993),
    },
    [633] = {
        [sym_elif_clause] = STATE(560),
        [sym_else_clause] = STATE(634),
        [aux_sym_if_statement_repeat1] = STATE(500),
        [ts_builtin_sym_end] = ACTIONS(871),
        [anon_sym_SEMI] = ACTIONS(871),
        [anon_sym_print] = ACTIONS(867),
        [anon_sym_return] = ACTIONS(867),
        [anon_sym_del] = ACTIONS(867),
        [sym_pass_statement] = ACTIONS(867),
        [sym_break_statement] = ACTIONS(867),
        [sym_continue_statement] = ACTIONS(867),
        [anon_sym_if] = ACTIONS(867),
        [anon_sym_elif] = ACTIONS(1438),
        [anon_sym_else] = ACTIONS(1440),
        [anon_sym_for] = ACTIONS(867),
        [anon_sym_while] = ACTIONS(867),
        [anon_sym_try] = ACTIONS(867),
        [anon_sym_with] = ACTIONS(867),
        [anon_sym_def] = ACTIONS(867),
        [anon_sym_class] = ACTIONS(867),
        [anon_sym_AT] = ACTIONS(871),
        [anon_sym_LBRACK] = ACTIONS(871),
        [anon_sym_LBRACE] = ACTIONS(871),
        [sym_number] = ACTIONS(867),
        [sym_identifier] = ACTIONS(873),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(871),
        [sym__dedent] = ACTIONS(871),
    },
    [634] = {
        [ts_builtin_sym_end] = ACTIONS(883),
        [anon_sym_SEMI] = ACTIONS(883),
        [anon_sym_print] = ACTIONS(881),
        [anon_sym_return] = ACTIONS(881),
        [anon_sym_del] = ACTIONS(881),
        [sym_pass_statement] = ACTIONS(881),
        [sym_break_statement] = ACTIONS(881),
        [sym_continue_statement] = ACTIONS(881),
        [anon_sym_if] = ACTIONS(881),
        [anon_sym_for] = ACTIONS(881),
        [anon_sym_while] = ACTIONS(881),
        [anon_sym_try] = ACTIONS(881),
        [anon_sym_with] = ACTIONS(881),
        [anon_sym_def] = ACTIONS(881),
        [anon_sym_class] = ACTIONS(881),
        [anon_sym_AT] = ACTIONS(883),
        [anon_sym_LBRACK] = ACTIONS(883),
        [anon_sym_LBRACE] = ACTIONS(883),
        [sym_number] = ACTIONS(881),
        [sym_identifier] = ACTIONS(885),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(883),
        [sym__dedent] = ACTIONS(883),
    },
    [635] = {
        [anon_sym_COMMA] = ACTIONS(1454),
        [anon_sym_COLON] = ACTIONS(1731),
        [anon_sym_for] = ACTIONS(1454),
        [anon_sym_in] = ACTIONS(1454),
        [anon_sym_as] = ACTIONS(1454),
        [anon_sym_LPAREN] = ACTIONS(1454),
        [anon_sym_RPAREN] = ACTIONS(1454),
        [anon_sym_STAR] = ACTIONS(1457),
        [anon_sym_PLUS] = ACTIONS(1454),
        [anon_sym_DASH] = ACTIONS(1454),
        [anon_sym_SLASH] = ACTIONS(1454),
        [anon_sym_STAR_STAR] = ACTIONS(1454),
        [anon_sym_PIPE] = ACTIONS(1454),
        [anon_sym_AMP] = ACTIONS(1454),
        [anon_sym_CARET] = ACTIONS(1454),
        [anon_sym_LT_LT] = ACTIONS(1454),
        [anon_sym_GT_GT] = ACTIONS(1454),
        [anon_sym_LBRACK] = ACTIONS(1454),
        [anon_sym_RBRACK] = ACTIONS(1454),
        [anon_sym_RBRACE] = ACTIONS(1454),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(1454),
    },
    [636] = {
        [anon_sym_COMMA] = ACTIONS(1736),
        [anon_sym_RBRACK] = ACTIONS(1736),
        [sym_comment] = ACTIONS(73),
    },
    [637] = {
        [anon_sym_COMMA] = ACTIONS(1739),
        [anon_sym_COLON] = ACTIONS(1739),
        [anon_sym_for] = ACTIONS(1739),
        [anon_sym_in] = ACTIONS(1739),
        [anon_sym_as] = ACTIONS(1739),
        [anon_sym_LPAREN] = ACTIONS(1739),
        [anon_sym_RPAREN] = ACTIONS(1739),
        [anon_sym_STAR] = ACTIONS(1744),
        [anon_sym_PLUS] = ACTIONS(1739),
        [anon_sym_DASH] = ACTIONS(1739),
        [anon_sym_SLASH] = ACTIONS(1739),
        [anon_sym_STAR_STAR] = ACTIONS(1739),
        [anon_sym_PIPE] = ACTIONS(1739),
        [anon_sym_AMP] = ACTIONS(1739),
        [anon_sym_CARET] = ACTIONS(1739),
        [anon_sym_LT_LT] = ACTIONS(1739),
        [anon_sym_GT_GT] = ACTIONS(1739),
        [anon_sym_LBRACK] = ACTIONS(1739),
        [anon_sym_RBRACK] = ACTIONS(1739),
        [anon_sym_RBRACE] = ACTIONS(1739),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(1739),
    },
    [638] = {
        [anon_sym_COMMA] = ACTIONS(1749),
        [anon_sym_COLON] = ACTIONS(1749),
        [anon_sym_for] = ACTIONS(1749),
        [anon_sym_in] = ACTIONS(1749),
        [anon_sym_as] = ACTIONS(1749),
        [anon_sym_LPAREN] = ACTIONS(1749),
        [anon_sym_RPAREN] = ACTIONS(1749),
        [anon_sym_STAR] = ACTIONS(1754),
        [anon_sym_PLUS] = ACTIONS(1749),
        [anon_sym_DASH] = ACTIONS(1749),
        [anon_sym_SLASH] = ACTIONS(1749),
        [anon_sym_STAR_STAR] = ACTIONS(1749),
        [anon_sym_PIPE] = ACTIONS(1749),
        [anon_sym_AMP] = ACTIONS(1749),
        [anon_sym_CARET] = ACTIONS(1749),
        [anon_sym_LT_LT] = ACTIONS(1749),
        [anon_sym_GT_GT] = ACTIONS(1749),
        [anon_sym_LBRACK] = ACTIONS(1749),
        [anon_sym_RBRACK] = ACTIONS(1749),
        [anon_sym_RBRACE] = ACTIONS(1749),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(1749),
    },
    [639] = {
        [anon_sym_COMMA] = ACTIONS(135),
        [anon_sym_COLON] = ACTIONS(135),
        [anon_sym_in] = ACTIONS(135),
        [anon_sym_as] = ACTIONS(135),
        [anon_sym_LPAREN] = ACTIONS(135),
        [anon_sym_RPAREN] = ACTIONS(135),
        [anon_sym_EQ] = ACTIONS(283),
        [anon_sym_STAR] = ACTIONS(137),
        [anon_sym_PLUS] = ACTIONS(135),
        [anon_sym_DASH] = ACTIONS(135),
        [anon_sym_SLASH] = ACTIONS(135),
        [anon_sym_STAR_STAR] = ACTIONS(135),
        [anon_sym_PIPE] = ACTIONS(135),
        [anon_sym_AMP] = ACTIONS(135),
        [anon_sym_CARET] = ACTIONS(135),
        [anon_sym_LT_LT] = ACTIONS(135),
        [anon_sym_GT_GT] = ACTIONS(135),
        [anon_sym_LBRACK] = ACTIONS(135),
        [anon_sym_RBRACK] = ACTIONS(135),
        [anon_sym_RBRACE] = ACTIONS(135),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(135),
    },
    [640] = {
        [anon_sym_COMMA] = ACTIONS(1759),
        [anon_sym_COLON] = ACTIONS(1759),
        [sym_comment] = ACTIONS(73),
    },
    [641] = {
        [anon_sym_COMMA] = ACTIONS(1762),
        [anon_sym_COLON] = ACTIONS(1770),
        [anon_sym_in] = ACTIONS(1775),
        [anon_sym_as] = ACTIONS(731),
        [anon_sym_LPAREN] = ACTIONS(163),
        [anon_sym_RPAREN] = ACTIONS(1778),
        [anon_sym_STAR] = ACTIONS(1783),
        [anon_sym_PLUS] = ACTIONS(1785),
        [anon_sym_DASH] = ACTIONS(1785),
        [anon_sym_SLASH] = ACTIONS(1785),
        [anon_sym_STAR_STAR] = ACTIONS(1785),
        [anon_sym_PIPE] = ACTIONS(1785),
        [anon_sym_AMP] = ACTIONS(1785),
        [anon_sym_CARET] = ACTIONS(1785),
        [anon_sym_LT_LT] = ACTIONS(1785),
        [anon_sym_GT_GT] = ACTIONS(1785),
        [anon_sym_LBRACK] = ACTIONS(179),
        [anon_sym_RBRACK] = ACTIONS(1787),
        [anon_sym_RBRACE] = ACTIONS(1775),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(1775),
    },
    [642] = {
        [anon_sym_COMMA] = ACTIONS(1792),
        [anon_sym_RPAREN] = ACTIONS(1792),
        [sym_comment] = ACTIONS(73),
    },
    [643] = {
        [anon_sym_RPAREN] = ACTIONS(1795),
        [sym_comment] = ACTIONS(73),
    },
    [644] = {
        [anon_sym_COMMA] = ACTIONS(1797),
        [anon_sym_RBRACE] = ACTIONS(1797),
        [sym_comment] = ACTIONS(73),
    },
    [645] = {
        [anon_sym_COMMA] = ACTIONS(1800),
        [anon_sym_COLON] = ACTIONS(1800),
        [anon_sym_for] = ACTIONS(1800),
        [anon_sym_in] = ACTIONS(1800),
        [anon_sym_as] = ACTIONS(1800),
        [anon_sym_LPAREN] = ACTIONS(1800),
        [anon_sym_RPAREN] = ACTIONS(1800),
        [anon_sym_STAR] = ACTIONS(1804),
        [anon_sym_PLUS] = ACTIONS(1800),
        [anon_sym_DASH] = ACTIONS(1800),
        [anon_sym_SLASH] = ACTIONS(1800),
        [anon_sym_STAR_STAR] = ACTIONS(1800),
        [anon_sym_PIPE] = ACTIONS(1800),
        [anon_sym_AMP] = ACTIONS(1800),
        [anon_sym_CARET] = ACTIONS(1800),
        [anon_sym_LT_LT] = ACTIONS(1800),
        [anon_sym_GT_GT] = ACTIONS(1800),
        [anon_sym_LBRACK] = ACTIONS(1800),
        [anon_sym_RBRACK] = ACTIONS(1800),
        [anon_sym_RBRACE] = ACTIONS(1800),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(1800),
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
        [anon_sym_print] = ACTIONS(83),
        [anon_sym_return] = ACTIONS(85),
        [anon_sym_del] = ACTIONS(87),
        [sym_pass_statement] = ACTIONS(89),
        [sym_break_statement] = ACTIONS(89),
        [sym_continue_statement] = ACTIONS(89),
        [anon_sym_LBRACK] = ACTIONS(107),
        [anon_sym_LBRACE] = ACTIONS(109),
        [sym_number] = ACTIONS(111),
        [sym_identifier] = ACTIONS(113),
        [sym_comment] = ACTIONS(73),
        [sym__indent] = ACTIONS(993),
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
        [anon_sym_LBRACK] = ACTIONS(107),
        [anon_sym_LBRACE] = ACTIONS(109),
        [sym_number] = ACTIONS(111),
        [sym_identifier] = ACTIONS(111),
        [sym_comment] = ACTIONS(73),
    },
    [648] = {
        [anon_sym_COMMA] = ACTIONS(279),
        [anon_sym_COLON] = ACTIONS(279),
        [anon_sym_in] = ACTIONS(279),
        [anon_sym_as] = ACTIONS(279),
        [anon_sym_LPAREN] = ACTIONS(1348),
        [anon_sym_RPAREN] = ACTIONS(279),
        [anon_sym_STAR] = ACTIONS(1808),
        [anon_sym_PLUS] = ACTIONS(1811),
        [anon_sym_DASH] = ACTIONS(1811),
        [anon_sym_SLASH] = ACTIONS(1811),
        [anon_sym_STAR_STAR] = ACTIONS(1811),
        [anon_sym_PIPE] = ACTIONS(1811),
        [anon_sym_AMP] = ACTIONS(1811),
        [anon_sym_CARET] = ACTIONS(1811),
        [anon_sym_LT_LT] = ACTIONS(1811),
        [anon_sym_GT_GT] = ACTIONS(1811),
        [anon_sym_LBRACK] = ACTIONS(1369),
        [anon_sym_RBRACK] = ACTIONS(279),
        [anon_sym_RBRACE] = ACTIONS(279),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(279),
    },
    [649] = {
        [anon_sym_COMMA] = ACTIONS(379),
        [anon_sym_LPAREN] = ACTIONS(163),
        [anon_sym_STAR] = ACTIONS(1814),
        [anon_sym_PLUS] = ACTIONS(1816),
        [anon_sym_DASH] = ACTIONS(1816),
        [anon_sym_SLASH] = ACTIONS(1816),
        [anon_sym_STAR_STAR] = ACTIONS(1816),
        [anon_sym_PIPE] = ACTIONS(1816),
        [anon_sym_AMP] = ACTIONS(1816),
        [anon_sym_CARET] = ACTIONS(1816),
        [anon_sym_LT_LT] = ACTIONS(1816),
        [anon_sym_GT_GT] = ACTIONS(1816),
        [anon_sym_LBRACK] = ACTIONS(179),
        [anon_sym_RBRACE] = ACTIONS(379),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(181),
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
        [anon_sym_LBRACK] = ACTIONS(107),
        [anon_sym_LBRACE] = ACTIONS(109),
        [sym_number] = ACTIONS(111),
        [sym_identifier] = ACTIONS(111),
        [sym_comment] = ACTIONS(73),
    },
    [651] = {
        [anon_sym_COMMA] = ACTIONS(279),
        [anon_sym_LPAREN] = ACTIONS(1348),
        [anon_sym_STAR] = ACTIONS(1818),
        [anon_sym_PLUS] = ACTIONS(1821),
        [anon_sym_DASH] = ACTIONS(1821),
        [anon_sym_SLASH] = ACTIONS(1821),
        [anon_sym_STAR_STAR] = ACTIONS(1821),
        [anon_sym_PIPE] = ACTIONS(1821),
        [anon_sym_AMP] = ACTIONS(1821),
        [anon_sym_CARET] = ACTIONS(1821),
        [anon_sym_LT_LT] = ACTIONS(1821),
        [anon_sym_GT_GT] = ACTIONS(1821),
        [anon_sym_LBRACK] = ACTIONS(1369),
        [anon_sym_RBRACE] = ACTIONS(279),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(279),
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
    [59] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(468),
    [61] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(469),
    [63] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(470),
    [65] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(15),
    [67] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(471),
    [69] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(16),
    [71] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, RECOVER(472),
    [73] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT_EXTRA(),
    [75] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(473),
    [77] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(474),
    [79] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(475),
    [81] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_module, 0),
    [83] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(2),
    [85] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(3),
    [87] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(4),
    [89] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(5),
    [91] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(6),
    [93] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(7),
    [95] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(8),
    [97] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(9),
    [99] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(10),
    [101] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(11),
    [103] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(12),
    [105] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(13),
    [107] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(14),
    [109] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(15),
    [111] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(16),
    [113] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(16),
    [115] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__simple_statement, 1),
    [117] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(38),
    [119] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(40),
    [121] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(41),
    [123] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(391),
    [125] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(381),
    [127] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(245),
    [129] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(230),
    [131] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(217),
    [133] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(192),
    [135] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__expression, 1),
    [137] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__expression, 1),
    [139] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, ACCEPT_INPUT(),
    [141] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_module_repeat1, 1),
    [143] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_module_repeat1, 1),
    [145] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_module_repeat1, 1),
    [147] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(191),
    [149] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__statement, 1),
    [151] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__statement, 1),
    [153] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__statement, 1),
    [155] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__compound_statement, 1),
    [157] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__compound_statement, 1),
    [159] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__compound_statement, 1),
    [161] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_decorated_definition_repeat1, 1),
    [163] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(30),
    [165] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(31),
    [167] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(32),
    [169] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(31),
    [171] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(33),
    [173] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(34),
    [175] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(35),
    [177] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(36),
    [179] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(37),
    [181] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_expression_statement, 1),
    [183] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_module, 1),
    [185] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(28),
    [187] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(11),
    [189] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(12),
    [191] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_decorated_definition, 2),
    [193] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_decorated_definition, 2),
    [195] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_decorated_definition, 2),
    [197] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_decorated_definition_repeat1, 2),
    [199] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_module, 2),
    [201] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_module_repeat1, 2),
    [203] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_module_repeat1, 2),
    [205] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_module_repeat1, 2),
    [207] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(75),
    [209] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(76),
    [211] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(77),
    [213] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(39),
    [215] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(145),
    [217] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(43),
    [219] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(52),
    [221] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(109),
    [223] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(44),
    [225] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(45),
    [227] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(46),
    [229] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(45),
    [231] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(47),
    [233] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(48),
    [235] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(49),
    [237] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(50),
    [239] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(51),
    [241] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(67),
    [243] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(55),
    [245] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(59),
    [247] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_subscript, 4),
    [249] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_subscript, 4),
    [251] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(54),
    [253] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(56),
    [255] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(57),
    [257] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_subscript, 5),
    [259] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_subscript, 5),
    [261] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_subscript_repeat1, 3),
    [263] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_subscript, 6),
    [265] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_subscript, 6),
    [267] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(61),
    [269] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(62),
    [271] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(65),
    [273] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(64),
    [275] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(66),
    [277] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_subscript_repeat1, 2),
    [279] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE_FRAGILE(sym_binary_operator, 3),
    [281] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE_FRAGILE(sym_binary_operator, 3),
    [283] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(107),
    [285] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(106),
    [287] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(101),
    [289] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(102),
    [291] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(100),
    [293] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(87),
    [295] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(88),
    [297] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_call, 5),
    [299] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_call, 5),
    [301] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(90),
    [303] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(91),
    [305] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_call, 6),
    [307] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_call, 6),
    [309] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_call_repeat2, 3),
    [311] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(95),
    [313] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_call, 8),
    [315] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_call, 8),
    [317] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_call_repeat2, 2),
    [319] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(99),
    [321] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_call, 7),
    [323] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_call, 7),
    [325] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_call_repeat1, 3),
    [327] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_call_repeat1, 3),
    [329] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_call, 4),
    [331] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_call, 4),
    [333] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(104),
    [335] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_call_repeat1, 2),
    [337] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_call_repeat1, 2),
    [339] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_keyword_argument, 3),
    [341] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_dictionary, 2),
    [343] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_dictionary, 2),
    [345] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(134),
    [347] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(121),
    [349] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(135),
    [351] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(136),
    [353] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(112),
    [355] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(113),
    [357] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(114),
    [359] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(117),
    [361] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_dictionary, 3),
    [363] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_dictionary, 3),
    [365] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(116),
    [367] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(118),
    [369] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_dictionary, 4),
    [371] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_dictionary, 4),
    [373] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_dictionary, 5),
    [375] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_dictionary, 5),
    [377] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_dictionary_repeat1, 3),
    [379] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_pair, 3),
    [381] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(130),
    [383] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(125),
    [385] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_expression_list, 1),
    [387] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(127),
    [389] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_expression_list, 2),
    [391] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_print_statement_repeat1, 3),
    [393] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_print_statement_repeat1, 2),
    [395] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(132),
    [397] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_dictionary_comprehension, 7),
    [399] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_dictionary_comprehension, 7),
    [401] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_dictionary_repeat1, 2),
    [403] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(139),
    [405] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_set, 3),
    [407] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_set, 3),
    [409] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(138),
    [411] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(140),
    [413] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_set, 4),
    [415] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_set, 4),
    [417] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_set, 5),
    [419] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_set, 5),
    [421] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(142),
    [423] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(144),
    [425] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_set_comprehension, 7),
    [427] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_set_comprehension, 7),
    [429] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_list, 2),
    [431] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_list, 2),
    [433] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(147),
    [435] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(148),
    [437] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(149),
    [439] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(152),
    [441] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_list, 3),
    [443] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_list, 3),
    [445] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(151),
    [447] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(153),
    [449] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_list, 4),
    [451] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_list, 4),
    [453] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_list, 5),
    [455] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_list, 5),
    [457] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(155),
    [459] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(157),
    [461] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_list_comprehension, 7),
    [463] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_list_comprehension, 7),
    [465] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_dictionary_splat_argument, 2),
    [467] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_list_splat_argument, 2),
    [469] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(190),
    [471] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(185),
    [473] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(186),
    [475] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(184),
    [477] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(175),
    [479] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(176),
    [481] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(178),
    [483] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(179),
    [485] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(181),
    [487] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(183),
    [489] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(188),
    [491] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__statement, 2),
    [493] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__statement, 2),
    [495] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__statement, 2),
    [497] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(206),
    [499] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(207),
    [501] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(208),
    [503] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(195),
    [505] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(196),
    [507] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(197),
    [509] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(200),
    [511] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(199),
    [513] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(201),
    [515] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(203),
    [517] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(205),
    [519] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(211),
    [521] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(210),
    [523] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(212),
    [525] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(214),
    [527] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(216),
    [529] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(219),
    [531] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(220),
    [533] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(221),
    [535] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(224),
    [537] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(223),
    [539] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(225),
    [541] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(227),
    [543] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(229),
    [545] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_dotted_name, 1),
    [547] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(240),
    [549] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(232),
    [551] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(233),
    [553] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_decorator, 3),
    [555] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(235),
    [557] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_decorator, 4),
    [559] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(237),
    [561] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_arguments, 3),
    [563] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(239),
    [565] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_arguments, 4),
    [567] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(244),
    [569] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_dotted_name, 2),
    [571] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(242),
    [573] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(243),
    [575] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_dotted_name_repeat1, 3),
    [577] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_dotted_name_repeat1, 2),
    [579] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(246),
    [581] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(247),
    [583] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(251),
    [585] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(249),
    [587] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(250),
    [589] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(255),
    [591] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(256),
    [593] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(257),
    [595] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(258),
    [597] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(259),
    [599] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(260),
    [601] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(261),
    [603] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(254),
    [605] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_class_definition, 7),
    [607] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_class_definition, 7),
    [609] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_class_definition, 7),
    [611] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__suite, 2),
    [613] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__suite, 2),
    [615] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__suite, 2),
    [617] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(330),
    [619] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(285),
    [621] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(272),
    [623] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(271),
    [625] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(269),
    [627] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(260),
    [629] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(261),
    [631] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__suite, 3),
    [633] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__suite, 3),
    [635] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__suite, 3),
    [637] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(273),
    [639] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(274),
    [641] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(278),
    [643] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(276),
    [645] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(277),
    [647] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(281),
    [649] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(283),
    [651] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_class_definition, 4),
    [653] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_class_definition, 4),
    [655] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_class_definition, 4),
    [657] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(286),
    [659] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(290),
    [661] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(291),
    [663] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(292),
    [665] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(288),
    [667] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_function_definition, 5),
    [669] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_function_definition, 5),
    [671] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_function_definition, 5),
    [673] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_parameters, 2),
    [675] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(306),
    [677] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(316),
    [679] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(315),
    [681] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(312),
    [683] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(310),
    [685] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(313),
    [687] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(297),
    [689] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(308),
    [691] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(301),
    [693] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(302),
    [695] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_parameters, 4),
    [697] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(303),
    [699] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(305),
    [701] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_parameters, 6),
    [703] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(307),
    [705] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_dictionary_splat_parameter, 3),
    [707] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(309),
    [709] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_parameters_repeat1, 3),
    [711] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_parameters_repeat1, 3),
    [713] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_parameters, 5),
    [715] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_default_parameter, 3),
    [717] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_parameters, 3),
    [719] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_parameters_repeat1, 2),
    [721] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_parameters_repeat1, 2),
    [723] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_list_splat_parameter, 2),
    [725] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(321),
    [727] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(322),
    [729] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_with_item, 1),
    [731] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(319),
    [733] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_with_item, 3),
    [735] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(324),
    [737] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(325),
    [739] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_with_statement, 5),
    [741] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_with_statement, 5),
    [743] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_with_statement, 5),
    [745] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_with_statement_repeat1, 3),
    [747] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_with_statement, 4),
    [749] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_with_statement, 4),
    [751] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_with_statement, 4),
    [753] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_with_statement_repeat1, 2),
    [755] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(331),
    [757] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(355),
    [759] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(334),
    [761] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(335),
    [763] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(346),
    [765] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_try_statement_repeat1, 1),
    [767] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_try_statement_repeat1, 1),
    [769] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_try_statement_repeat1, 1),
    [771] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_try_statement, 4),
    [773] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_try_statement, 4),
    [775] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_try_statement, 4),
    [777] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(339),
    [779] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(334),
    [781] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(335),
    [783] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(344),
    [785] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_try_statement, 5),
    [787] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_try_statement, 5),
    [789] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_try_statement, 5),
    [791] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_try_statement_repeat1, 2),
    [793] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_try_statement_repeat1, 2),
    [795] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_try_statement_repeat1, 2),
    [797] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_try_statement, 6),
    [799] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_try_statement, 6),
    [801] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_try_statement, 6),
    [803] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_else_clause, 3),
    [805] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_else_clause, 3),
    [807] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_else_clause, 3),
    [809] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_finally_clause, 3),
    [811] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_finally_clause, 3),
    [813] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_finally_clause, 3),
    [815] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(349),
    [817] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(350),
    [819] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(352),
    [821] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_except_clause, 6),
    [823] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_except_clause, 6),
    [825] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_except_clause, 6),
    [827] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_except_clause, 4),
    [829] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_except_clause, 4),
    [831] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_except_clause, 4),
    [833] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(357),
    [835] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(359),
    [837] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_while_statement, 4),
    [839] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_while_statement, 4),
    [841] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_while_statement, 4),
    [843] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_while_statement, 5),
    [845] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_while_statement, 5),
    [847] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_while_statement, 5),
    [849] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(363),
    [851] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(365),
    [853] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_for_statement, 6),
    [855] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_for_statement, 6),
    [857] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_for_statement, 6),
    [859] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_for_statement, 7),
    [861] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_for_statement, 7),
    [863] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_for_statement, 7),
    [865] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(369),
    [867] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_if_statement, 4),
    [869] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(371),
    [871] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_if_statement, 4),
    [873] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_if_statement, 4),
    [875] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_if_statement_repeat1, 1),
    [877] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_if_statement_repeat1, 1),
    [879] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_if_statement_repeat1, 1),
    [881] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_if_statement, 5),
    [883] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_if_statement, 5),
    [885] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_if_statement, 5),
    [887] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_if_statement_repeat1, 2),
    [889] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_if_statement_repeat1, 2),
    [891] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_if_statement_repeat1, 2),
    [893] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_if_statement, 6),
    [895] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_if_statement, 6),
    [897] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_if_statement, 6),
    [899] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(378),
    [901] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_elif_clause, 4),
    [903] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_elif_clause, 4),
    [905] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_elif_clause, 4),
    [907] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(383),
    [909] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(386),
    [911] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(388),
    [913] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(393),
    [915] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(394),
    [917] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(405),
    [919] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(398),
    [921] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(393),
    [923] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(394),
    [925] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(403),
    [927] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(408),
    [929] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(409),
    [931] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(411),
    [933] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(415),
    [935] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(419),
    [937] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(421),
    [939] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(425),
    [941] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(427),
    [943] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(434),
    [945] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_delete_statement, 2),
    [947] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(438),
    [949] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(440),
    [951] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_return_statement, 2),
    [953] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_print_statement, 2),
    [955] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_print_statement, 3),
    [957] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(635),
    [959] = {.count = 5, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_parameters_repeat1, 2), REDUCE(aux_sym_call_repeat1, 2), REDUCE(aux_sym_parameters_repeat1, 3), REDUCE(aux_sym_call_repeat1, 3), SHIFT(303),
    [965] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_call_repeat1, 2), REDUCE(aux_sym_call_repeat1, 3), SHIFT(76),
    [969] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_call_repeat1, 2), REDUCE(aux_sym_call_repeat1, 3), SHIFT(14),
    [973] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(636),
    [975] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(637),
    [977] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_call_repeat1, 2), REDUCE(aux_sym_call_repeat1, 3), SHIFT(15),
    [981] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(638),
    [983] = {.count = 3, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_call_repeat1, 2), REDUCE(aux_sym_call_repeat1, 3), SHIFT(16),
    [987] = {.count = 5, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_parameters_repeat1, 2), REDUCE(aux_sym_call_repeat1, 2), REDUCE(aux_sym_parameters_repeat1, 3), REDUCE(aux_sym_call_repeat1, 3), SHIFT(639),
    [993] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(474),
    [995] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(522),
    [997] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(617),
    [999] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(609),
    [1001] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(607),
    [1003] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(600),
    [1005] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(601),
    [1007] = {.count = 5, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_call, 4), REDUCE(sym_call, 5), REDUCE(sym_call, 6), REDUCE(sym_call, 7), REDUCE(sym_call, 8),
    [1013] = {.count = 11, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_parameters, 2), REDUCE(sym_parameters, 3), REDUCE(sym_parameters, 4), REDUCE(sym_call, 4), REDUCE(sym_parameters, 5), REDUCE(sym_call, 5), REDUCE(sym_parameters, 6), REDUCE(sym_call, 6), REDUCE(sym_call, 7), REDUCE(sym_call, 8), SHIFT(567),
    [1025] = {.count = 5, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_call, 4), REDUCE(sym_call, 5), REDUCE(sym_call, 6), REDUCE(sym_call, 7), REDUCE(sym_call, 8),
    [1031] = {.count = 7, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_arguments, 3), REDUCE(sym_arguments, 4), REDUCE(sym_call, 4), REDUCE(sym_call, 5), REDUCE(sym_call, 6), REDUCE(sym_call, 7), REDUCE(sym_call, 8),
    [1039] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(597),
    [1041] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(595),
    [1043] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(594),
    [1045] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_subscript_repeat1, 2), REDUCE(aux_sym_subscript_repeat1, 3), SHIFT(43),
    [1049] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_subscript_repeat1, 2), REDUCE(aux_sym_subscript_repeat1, 3), SHIFT(52),
    [1053] = {.count = 8, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_list, 2), REDUCE(sym_list, 3), REDUCE(sym_subscript, 4), REDUCE(sym_list, 4), REDUCE(sym_subscript, 5), REDUCE(sym_list, 5), REDUCE(sym_subscript, 6), REDUCE(sym_list_comprehension, 7),
    [1062] = {.count = 8, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_list, 2), REDUCE(sym_list, 3), REDUCE(sym_subscript, 4), REDUCE(sym_list, 4), REDUCE(sym_subscript, 5), REDUCE(sym_list, 5), REDUCE(sym_subscript, 6), REDUCE(sym_list_comprehension, 7),
    [1071] = {.count = 9, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_dictionary, 2), REDUCE(sym_dictionary, 3), REDUCE(sym_set, 3), REDUCE(sym_dictionary, 4), REDUCE(sym_set, 4), REDUCE(sym_dictionary, 5), REDUCE(sym_set, 5), REDUCE(sym_dictionary_comprehension, 7), REDUCE(sym_set_comprehension, 7),
    [1081] = {.count = 9, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_dictionary, 2), REDUCE(sym_dictionary, 3), REDUCE(sym_set, 3), REDUCE(sym_dictionary, 4), REDUCE(sym_set, 4), REDUCE(sym_dictionary, 5), REDUCE(sym_set, 5), REDUCE(sym_dictionary_comprehension, 7), REDUCE(sym_set_comprehension, 7),
    [1091] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__expression, 1), REDUCE(sym_list_splat_parameter, 2), SHIFT(577),
    [1095] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__expression, 1), SHIFT(584),
    [1098] = {.count = 5, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_dotted_name, 1), REDUCE(sym__expression, 1), REDUCE(aux_sym_dotted_name_repeat1, 2), REDUCE(aux_sym_dotted_name_repeat1, 3), SHIFT(585),
    [1104] = {.count = 4, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__expression, 1), REDUCE(sym_list_splat_parameter, 2), REDUCE(sym_dictionary_splat_parameter, 3), SHIFT(574),
    [1109] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(462),
    [1111] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_dotted_name_repeat1, 2), REDUCE(aux_sym_dotted_name_repeat1, 3), SHIFT(240),
    [1115] = {.count = 4, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_dotted_name, 1), REDUCE(sym__expression, 1), REDUCE(aux_sym_dotted_name_repeat1, 2), REDUCE(aux_sym_dotted_name_repeat1, 3),
    [1120] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_module, 2), REDUCE(sym__statement, 2), REDUCE(sym__suite, 2),
    [1124] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__statement, 2), REDUCE(sym__suite, 2),
    [1127] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__statement, 2), REDUCE(sym__suite, 2),
    [1130] = {.count = 4, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__statement, 2), REDUCE(sym__suite, 2), REDUCE(sym_decorator, 3), REDUCE(sym_decorator, 4),
    [1135] = {.count = 4, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__statement, 2), REDUCE(sym__suite, 2), REDUCE(sym_decorator, 3), REDUCE(sym_decorator, 4),
    [1140] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__statement, 2), REDUCE(sym__suite, 2),
    [1143] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(513),
    [1145] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__suite, 2), REDUCE(sym__suite, 3),
    [1148] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__suite, 2), REDUCE(sym__suite, 3),
    [1151] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__suite, 2), REDUCE(sym__suite, 3),
    [1154] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_module_repeat1, 1), REDUCE(aux_sym_module_repeat1, 2),
    [1157] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_module_repeat1, 1), REDUCE(aux_sym_module_repeat1, 2),
    [1160] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_module_repeat1, 1), REDUCE(aux_sym_module_repeat1, 2),
    [1163] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(583),
    [1165] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_if_statement_repeat1, 1), REDUCE(aux_sym_if_statement_repeat1, 2),
    [1168] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_if_statement_repeat1, 1), REDUCE(aux_sym_if_statement_repeat1, 2),
    [1171] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_if_statement_repeat1, 1), REDUCE(aux_sym_if_statement_repeat1, 2),
    [1174] = {.count = 5, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_if_statement, 5), REDUCE(sym_while_statement, 5), REDUCE(sym_try_statement, 5), REDUCE(sym_if_statement, 6), REDUCE(sym_for_statement, 7),
    [1180] = {.count = 5, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_if_statement, 5), REDUCE(sym_while_statement, 5), REDUCE(sym_try_statement, 5), REDUCE(sym_if_statement, 6), REDUCE(sym_for_statement, 7),
    [1186] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(457),
    [1188] = {.count = 5, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_if_statement, 5), REDUCE(sym_while_statement, 5), REDUCE(sym_try_statement, 5), REDUCE(sym_if_statement, 6), REDUCE(sym_for_statement, 7),
    [1194] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_try_statement_repeat1, 1), REDUCE(aux_sym_try_statement_repeat1, 2),
    [1197] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_try_statement_repeat1, 1), REDUCE(aux_sym_try_statement_repeat1, 2),
    [1200] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_try_statement_repeat1, 1), REDUCE(aux_sym_try_statement_repeat1, 2),
    [1203] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_try_statement, 4), REDUCE(sym_try_statement, 5), REDUCE(sym_try_statement, 6),
    [1207] = {.count = 3, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_try_statement, 4), REDUCE(sym_try_statement, 5), REDUCE(sym_try_statement, 6),
    [1211] = {.count = 3, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_try_statement, 4), REDUCE(sym_try_statement, 5), REDUCE(sym_try_statement, 6),
    [1215] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_with_statement_repeat1, 2), REDUCE(aux_sym_with_statement_repeat1, 3), SHIFT(321),
    [1219] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_with_statement_repeat1, 2), REDUCE(aux_sym_with_statement_repeat1, 3), SHIFT(581),
    [1223] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__compound_statement, 1), REDUCE(sym_decorated_definition, 2),
    [1226] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__compound_statement, 1), REDUCE(sym_decorated_definition, 2),
    [1229] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__compound_statement, 1), REDUCE(sym_decorated_definition, 2),
    [1232] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(579),
    [1234] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(577),
    [1236] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(574),
    [1238] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(573),
    [1240] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(572),
    [1242] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_decorated_definition_repeat1, 1), REDUCE(aux_sym_decorated_definition_repeat1, 2),
    [1245] = {.count = 13, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_else_clause, 3), REDUCE(sym_finally_clause, 3), REDUCE(sym_if_statement, 4), REDUCE(sym_elif_clause, 4), REDUCE(sym_while_statement, 4), REDUCE(sym_except_clause, 4), REDUCE(sym_with_statement, 4), REDUCE(sym_class_definition, 4), REDUCE(sym_with_statement, 5), REDUCE(sym_function_definition, 5), REDUCE(sym_for_statement, 6), REDUCE(sym_except_clause, 6), REDUCE(sym_class_definition, 7),
    [1259] = {.count = 13, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_else_clause, 3), REDUCE(sym_finally_clause, 3), REDUCE(sym_if_statement, 4), REDUCE(sym_elif_clause, 4), REDUCE(sym_while_statement, 4), REDUCE(sym_except_clause, 4), REDUCE(sym_with_statement, 4), REDUCE(sym_class_definition, 4), REDUCE(sym_with_statement, 5), REDUCE(sym_function_definition, 5), REDUCE(sym_for_statement, 6), REDUCE(sym_except_clause, 6), REDUCE(sym_class_definition, 7),
    [1273] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_elif_clause, 4), SHIFT(449),
    [1276] = {.count = 4, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_elif_clause, 4), REDUCE(sym_except_clause, 4), REDUCE(sym_except_clause, 6), SHIFT(450),
    [1281] = {.count = 3, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_except_clause, 4), REDUCE(sym_except_clause, 6), SHIFT(455),
    [1285] = {.count = 4, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_else_clause, 3), REDUCE(sym_except_clause, 4), REDUCE(sym_except_clause, 6), SHIFT(457),
    [1290] = {.count = 13, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_else_clause, 3), REDUCE(sym_finally_clause, 3), REDUCE(sym_if_statement, 4), REDUCE(sym_elif_clause, 4), REDUCE(sym_while_statement, 4), REDUCE(sym_except_clause, 4), REDUCE(sym_with_statement, 4), REDUCE(sym_class_definition, 4), REDUCE(sym_with_statement, 5), REDUCE(sym_function_definition, 5), REDUCE(sym_for_statement, 6), REDUCE(sym_except_clause, 6), REDUCE(sym_class_definition, 7),
    [1304] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(535),
    [1306] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(452),
    [1308] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(566),
    [1310] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_return_statement, 2), REDUCE(sym_delete_statement, 2),
    [1313] = {.count = 14, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_with_item, 1), REDUCE(sym_list_splat_argument, 2), REDUCE(aux_sym_print_statement_repeat1, 2), REDUCE(aux_sym_subscript_repeat1, 2), REDUCE(aux_sym_call_repeat2, 2), REDUCE(sym_with_item, 3), REDUCE(sym_default_parameter, 3), REDUCE_FRAGILE(sym_binary_operator, 3), REDUCE(sym_keyword_argument, 3), REDUCE(sym_pair, 3), REDUCE(aux_sym_print_statement_repeat1, 3), REDUCE(aux_sym_subscript_repeat1, 3), REDUCE(aux_sym_call_repeat2, 3), SHIFT(544),
    [1328] = {.count = 7, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_with_item, 1), REDUCE(sym_expression_list, 1), REDUCE(aux_sym_print_statement_repeat1, 2), REDUCE(sym_with_item, 3), REDUCE_FRAGILE(sym_binary_operator, 3), REDUCE(aux_sym_print_statement_repeat1, 3), SHIFT(545),
    [1336] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE_FRAGILE(sym_binary_operator, 3), REDUCE(sym_pair, 3), SHIFT(546),
    [1340] = {.count = 4, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_expression_list, 1), REDUCE(aux_sym_print_statement_repeat1, 2), REDUCE_FRAGILE(sym_binary_operator, 3), REDUCE(aux_sym_print_statement_repeat1, 3),
    [1345] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE_FRAGILE(sym_binary_operator, 3), SHIFT(456),
    [1348] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE_FRAGILE(sym_binary_operator, 3), SHIFT(30),
    [1351] = {.count = 11, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_expression_list, 1), REDUCE(sym_list_splat_argument, 2), REDUCE(sym_dictionary_splat_argument, 2), REDUCE(aux_sym_print_statement_repeat1, 2), REDUCE(aux_sym_call_repeat2, 2), REDUCE(sym_default_parameter, 3), REDUCE_FRAGILE(sym_binary_operator, 3), REDUCE(sym_keyword_argument, 3), REDUCE(aux_sym_print_statement_repeat1, 3), REDUCE(aux_sym_call_repeat2, 3), SHIFT(547),
    [1363] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE_FRAGILE(sym_binary_operator, 3), SHIFT(466),
    [1366] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE_FRAGILE(sym_binary_operator, 3), SHIFT(466),
    [1369] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE_FRAGILE(sym_binary_operator, 3), SHIFT(37),
    [1372] = {.count = 6, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_print_statement_repeat1, 2), REDUCE(aux_sym_subscript_repeat1, 2), REDUCE_FRAGILE(sym_binary_operator, 3), REDUCE(aux_sym_print_statement_repeat1, 3), REDUCE(aux_sym_subscript_repeat1, 3), SHIFT(548),
    [1379] = {.count = 5, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_print_statement_repeat1, 2), REDUCE_FRAGILE(sym_binary_operator, 3), REDUCE(sym_pair, 3), REDUCE(aux_sym_print_statement_repeat1, 3), SHIFT(549),
    [1385] = {.count = 6, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_expression_statement, 1), REDUCE(sym_expression_list, 1), REDUCE(sym_print_statement, 2), REDUCE(aux_sym_print_statement_repeat1, 2), REDUCE_FRAGILE(sym_binary_operator, 3), REDUCE(aux_sym_print_statement_repeat1, 3),
    [1392] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_call_repeat2, 2), REDUCE(aux_sym_call_repeat2, 3), SHIFT(543),
    [1396] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_call_repeat2, 2), REDUCE(aux_sym_call_repeat2, 3), SHIFT(540),
    [1400] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(539),
    [1402] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(540),
    [1404] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(538),
    [1406] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_dictionary_repeat1, 2), REDUCE(aux_sym_dictionary_repeat1, 3), SHIFT(195),
    [1410] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_dictionary_repeat1, 2), REDUCE(aux_sym_dictionary_repeat1, 3), SHIFT(197),
    [1414] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(447),
    [1416] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(528),
    [1418] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(453),
    [1420] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(454),
    [1422] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(458),
    [1424] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(459),
    [1426] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(464),
    [1428] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(515),
    [1430] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(524),
    [1432] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_expression_list, 2), SHIFT(239),
    [1435] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_expression_list, 2), REDUCE(sym_print_statement, 3),
    [1438] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(449),
    [1440] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(450),
    [1442] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(455),
    [1444] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(510),
    [1446] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(459),
    [1448] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(464),
    [1450] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(505),
    [1452] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(506),
    [1454] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_call, 5), REDUCE(sym_call, 6),
    [1457] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_call, 5), REDUCE(sym_call, 6),
    [1460] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(508),
    [1462] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_call, 7), REDUCE(sym_call, 8),
    [1465] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_call, 7), REDUCE(sym_call, 8),
    [1468] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(526),
    [1470] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(526),
    [1472] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE_FRAGILE(sym_binary_operator, 3), SHIFT(526),
    [1475] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE_FRAGILE(sym_binary_operator, 3), SHIFT(526),
    [1478] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(531),
    [1480] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(533),
    [1482] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_call, 4), REDUCE(sym_call, 5),
    [1485] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_call, 4), REDUCE(sym_call, 5),
    [1488] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(542),
    [1490] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_call, 6), REDUCE(sym_call, 7),
    [1493] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_call, 6), REDUCE(sym_call, 7),
    [1496] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_call_repeat1, 2), REDUCE(aux_sym_call_repeat1, 3),
    [1499] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_call_repeat1, 2), REDUCE(aux_sym_call_repeat1, 3),
    [1502] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(562),
    [1504] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_arguments, 3), REDUCE(sym_call, 4), REDUCE(sym_call, 5),
    [1508] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_list, 3), REDUCE(sym_subscript, 4), REDUCE(sym_list_comprehension, 7),
    [1512] = {.count = 3, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_list, 3), REDUCE(sym_subscript, 4), REDUCE(sym_list_comprehension, 7),
    [1516] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_set, 3), REDUCE(sym_dictionary_comprehension, 7), REDUCE(sym_set_comprehension, 7),
    [1520] = {.count = 3, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_set, 3), REDUCE(sym_dictionary_comprehension, 7), REDUCE(sym_set_comprehension, 7),
    [1524] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(552),
    [1526] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(554),
    [1528] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(554),
    [1530] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE_FRAGILE(sym_binary_operator, 3), SHIFT(44),
    [1533] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE_FRAGILE(sym_binary_operator, 3), SHIFT(554),
    [1536] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE_FRAGILE(sym_binary_operator, 3), SHIFT(554),
    [1539] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE_FRAGILE(sym_binary_operator, 3), SHIFT(51),
    [1542] = {.count = 5, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_if_statement, 4), REDUCE(sym_elif_clause, 4), REDUCE(sym_while_statement, 4), REDUCE(sym_except_clause, 4), REDUCE(sym_except_clause, 6),
    [1548] = {.count = 5, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_if_statement, 4), REDUCE(sym_elif_clause, 4), REDUCE(sym_while_statement, 4), REDUCE(sym_except_clause, 4), REDUCE(sym_except_clause, 6),
    [1554] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_except_clause, 4), REDUCE(sym_except_clause, 6),
    [1557] = {.count = 5, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_if_statement, 4), REDUCE(sym_elif_clause, 4), REDUCE(sym_while_statement, 4), REDUCE(sym_except_clause, 4), REDUCE(sym_except_clause, 6),
    [1563] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(558),
    [1565] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(558),
    [1567] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE_FRAGILE(sym_binary_operator, 3), SHIFT(558),
    [1570] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE_FRAGILE(sym_binary_operator, 3), SHIFT(558),
    [1573] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_if_statement, 5), REDUCE(sym_while_statement, 5),
    [1576] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_if_statement, 5), REDUCE(sym_while_statement, 5),
    [1579] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_if_statement, 5), REDUCE(sym_while_statement, 5),
    [1582] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_list, 4), REDUCE(sym_subscript, 5),
    [1585] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_list, 4), REDUCE(sym_subscript, 5),
    [1588] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_print_statement_repeat1, 2), REDUCE(aux_sym_subscript_repeat1, 2),
    [1591] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_print_statement_repeat1, 2), SHIFT(564),
    [1594] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(567),
    [1596] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_if_statement, 5), REDUCE(sym_while_statement, 5), REDUCE(sym_for_statement, 7),
    [1600] = {.count = 3, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_if_statement, 5), REDUCE(sym_while_statement, 5), REDUCE(sym_for_statement, 7),
    [1604] = {.count = 3, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_if_statement, 5), REDUCE(sym_while_statement, 5), REDUCE(sym_for_statement, 7),
    [1608] = {.count = 4, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_parameters, 3), REDUCE(sym_parameters, 4), REDUCE(sym_parameters, 5), REDUCE(sym_parameters, 6),
    [1613] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_parameters, 3), REDUCE(sym_parameters, 4),
    [1616] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(576),
    [1618] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_parameters, 5), REDUCE(sym_parameters, 6),
    [1621] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(578),
    [1623] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_parameters_repeat1, 2), REDUCE(aux_sym_parameters_repeat1, 3),
    [1626] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_parameters_repeat1, 2), REDUCE(aux_sym_parameters_repeat1, 3),
    [1629] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_parameters, 4), REDUCE(sym_parameters, 5),
    [1632] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(586),
    [1634] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__expression, 1), SHIFT(315),
    [1637] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__expression, 1), SHIFT(312),
    [1640] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(590),
    [1642] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(591),
    [1644] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_list, 3), REDUCE(sym_subscript, 4),
    [1647] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_list, 3), REDUCE(sym_subscript, 4),
    [1650] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_dictionary_splat_argument, 2), REDUCE_FRAGILE(sym_binary_operator, 3),
    [1653] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_dotted_name_repeat1, 2), REDUCE(aux_sym_dotted_name_repeat1, 3),
    [1656] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(584),
    [1658] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(596),
    [1660] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__expression, 1), REDUCE(sym_list_splat_parameter, 2),
    [1663] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__expression, 1), REDUCE(sym_list_splat_parameter, 2), REDUCE(sym_dictionary_splat_parameter, 3),
    [1667] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_list_splat_argument, 2), REDUCE_FRAGILE(sym_binary_operator, 3),
    [1670] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_default_parameter, 3), REDUCE(sym_keyword_argument, 3),
    [1673] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(606),
    [1675] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(603),
    [1677] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_expression_list, 1), SHIFT(604),
    [1680] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_call_repeat1, 2), SHIFT(38),
    [1683] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_call_repeat1, 2), SHIFT(40),
    [1686] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_call_repeat1, 2), SHIFT(41),
    [1689] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_arguments, 3), REDUCE(sym_call, 4),
    [1692] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(581),
    [1694] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_with_item, 3), SHIFT(564),
    [1697] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(613),
    [1699] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(614),
    [1701] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(564),
    [1703] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(455),
    [1705] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(457),
    [1707] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(620),
    [1709] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(624),
    [1711] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(624),
    [1713] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(625),
    [1715] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_dictionary_comprehension, 7), REDUCE(sym_set_comprehension, 7),
    [1718] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_dictionary_comprehension, 7), REDUCE(sym_set_comprehension, 7),
    [1721] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE_FRAGILE(sym_binary_operator, 3), SHIFT(624),
    [1724] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE_FRAGILE(sym_binary_operator, 3), SHIFT(624),
    [1727] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(629),
    [1729] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(632),
    [1731] = {.count = 4, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_parameters, 4), REDUCE(sym_parameters, 5), REDUCE(sym_call, 5), REDUCE(sym_call, 6),
    [1736] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_subscript_repeat1, 2), REDUCE(aux_sym_subscript_repeat1, 3),
    [1739] = {.count = 4, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_list, 4), REDUCE(sym_subscript, 5), REDUCE(sym_list, 5), REDUCE(sym_subscript, 6),
    [1744] = {.count = 4, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_list, 4), REDUCE(sym_subscript, 5), REDUCE(sym_list, 5), REDUCE(sym_subscript, 6),
    [1749] = {.count = 4, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_dictionary, 4), REDUCE(sym_set, 4), REDUCE(sym_dictionary, 5), REDUCE(sym_set, 5),
    [1754] = {.count = 4, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_dictionary, 4), REDUCE(sym_set, 4), REDUCE(sym_dictionary, 5), REDUCE(sym_set, 5),
    [1759] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_with_statement_repeat1, 2), REDUCE(aux_sym_with_statement_repeat1, 3),
    [1762] = {.count = 7, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_with_item, 1), REDUCE(aux_sym_print_statement_repeat1, 2), REDUCE(aux_sym_subscript_repeat1, 2), REDUCE(aux_sym_call_repeat2, 2), REDUCE(aux_sym_print_statement_repeat1, 3), REDUCE(aux_sym_subscript_repeat1, 3), REDUCE(aux_sym_call_repeat2, 3),
    [1770] = {.count = 4, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_with_item, 1), REDUCE(aux_sym_print_statement_repeat1, 2), REDUCE(aux_sym_print_statement_repeat1, 3), SHIFT(646),
    [1775] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_print_statement_repeat1, 2), REDUCE(aux_sym_print_statement_repeat1, 3),
    [1778] = {.count = 4, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_print_statement_repeat1, 2), REDUCE(aux_sym_call_repeat2, 2), REDUCE(aux_sym_print_statement_repeat1, 3), REDUCE(aux_sym_call_repeat2, 3),
    [1783] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(647),
    [1785] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(647),
    [1787] = {.count = 4, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_print_statement_repeat1, 2), REDUCE(aux_sym_subscript_repeat1, 2), REDUCE(aux_sym_print_statement_repeat1, 3), REDUCE(aux_sym_subscript_repeat1, 3),
    [1792] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_call_repeat2, 2), REDUCE(aux_sym_call_repeat2, 3),
    [1795] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(645),
    [1797] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_dictionary_repeat1, 2), REDUCE(aux_sym_dictionary_repeat1, 3),
    [1800] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_call, 6), REDUCE(sym_call, 7), REDUCE(sym_call, 8),
    [1804] = {.count = 3, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_call, 6), REDUCE(sym_call, 7), REDUCE(sym_call, 8),
    [1808] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE_FRAGILE(sym_binary_operator, 3), SHIFT(647),
    [1811] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE_FRAGILE(sym_binary_operator, 3), SHIFT(647),
    [1814] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(650),
    [1816] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(650),
    [1818] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE_FRAGILE(sym_binary_operator, 3), SHIFT(650),
    [1821] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE_FRAGILE(sym_binary_operator, 3), SHIFT(650),
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
