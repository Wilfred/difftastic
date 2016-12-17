#include <tree_sitter/parser.h>

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"

#define STATE_COUNT 629
#define SYMBOL_COUNT 98
#define TOKEN_COUNT 42
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
    anon_sym_LBRACK = 30,
    anon_sym_DOT_DOT_DOT = 31,
    anon_sym_RBRACK = 32,
    anon_sym_STAR_STAR = 33,
    anon_sym_LBRACE = 34,
    anon_sym_RBRACE = 35,
    sym_number = 36,
    sym_identifier = 37,
    sym_comment = 38,
    sym__newline = 39,
    sym__indent = 40,
    sym__dedent = 41,
    sym_module = 42,
    sym__statement = 43,
    sym__simple_statement = 44,
    sym_print_statement = 45,
    sym_expression_statement = 46,
    sym_return_statement = 47,
    sym_delete_statement = 48,
    sym__compound_statement = 49,
    sym_if_statement = 50,
    sym_elif_clause = 51,
    sym_else_clause = 52,
    sym_for_statement = 53,
    sym_while_statement = 54,
    sym_try_statement = 55,
    sym_except_clause = 56,
    sym_finally_clause = 57,
    sym_with_statement = 58,
    sym_with_item = 59,
    sym_function_definition = 60,
    sym_parameters = 61,
    sym_default_parameter = 62,
    sym_list_splat_parameter = 63,
    sym_dictionary_splat_parameter = 64,
    sym_class_definition = 65,
    sym_decorated_definition = 66,
    sym_decorator = 67,
    sym__suite = 68,
    sym_arguments = 69,
    sym_expression_list = 70,
    sym_dotted_name = 71,
    sym__expression = 72,
    sym_binary_operator = 73,
    sym_subscript = 74,
    sym_call = 75,
    sym_keyword_argument = 76,
    sym_list_splat_argument = 77,
    sym_dictionary_splat_argument = 78,
    sym_list = 79,
    sym_list_comprehension = 80,
    sym_dictionary = 81,
    sym_dictionary_comprehension = 82,
    sym_pair = 83,
    sym_set = 84,
    sym_set_comprehension = 85,
    aux_sym_module_repeat1 = 86,
    aux_sym_print_statement_repeat1 = 87,
    aux_sym_if_statement_repeat1 = 88,
    aux_sym_try_statement_repeat1 = 89,
    aux_sym_with_statement_repeat1 = 90,
    aux_sym_parameters_repeat1 = 91,
    aux_sym_decorated_definition_repeat1 = 92,
    aux_sym_dotted_name_repeat1 = 93,
    aux_sym_subscript_repeat1 = 94,
    aux_sym_call_repeat1 = 95,
    aux_sym_call_repeat2 = 96,
    aux_sym_dictionary_repeat1 = 97,
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
    [anon_sym_LBRACK] = "[",
    [anon_sym_DOT_DOT_DOT] = "...",
    [anon_sym_RBRACK] = "]",
    [anon_sym_STAR_STAR] = "**",
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
    [anon_sym_STAR_STAR] = {
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
            if (lookahead == '(')
                ADVANCE(4);
            if (lookahead == ')')
                ADVANCE(5);
            if (lookahead == '*')
                ADVANCE(6);
            if (lookahead == '+')
                ADVANCE(8);
            if (lookahead == ',')
                ADVANCE(9);
            if (lookahead == '.')
                ADVANCE(10);
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(13);
            if (lookahead == ':')
                ADVANCE(15);
            if (lookahead == ';')
                ADVANCE(16);
            if (lookahead == '=')
                ADVANCE(17);
            if (lookahead == '@')
                ADVANCE(18);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == 'g') ||
                (lookahead == 'h') ||
                ('j' <= lookahead && lookahead <= 'o') ||
                (lookahead == 'q') ||
                (lookahead == 's') ||
                (lookahead == 'u') ||
                (lookahead == 'v') ||
                ('x' <= lookahead && lookahead <= 'z'))
                ADVANCE(19);
            if (lookahead == '[')
                ADVANCE(20);
            if (lookahead == ']')
                ADVANCE(21);
            if (lookahead == 'a')
                ADVANCE(22);
            if (lookahead == 'b')
                ADVANCE(24);
            if (lookahead == 'c')
                ADVANCE(29);
            if (lookahead == 'd')
                ADVANCE(41);
            if (lookahead == 'e')
                ADVANCE(45);
            if (lookahead == 'f')
                ADVANCE(56);
            if (lookahead == 'i')
                ADVANCE(65);
            if (lookahead == 'p')
                ADVANCE(68);
            if (lookahead == 'r')
                ADVANCE(76);
            if (lookahead == 't')
                ADVANCE(82);
            if (lookahead == 'w')
                ADVANCE(85);
            if (lookahead == '{')
                ADVANCE(93);
            if (lookahead == '}')
                ADVANCE(94);
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
            ACCEPT_TOKEN(anon_sym_LPAREN);
        case 5:
            ACCEPT_TOKEN(anon_sym_RPAREN);
        case 6:
            if (lookahead == '*')
                ADVANCE(7);
            ACCEPT_TOKEN(anon_sym_STAR);
        case 7:
            ACCEPT_TOKEN(anon_sym_STAR_STAR);
        case 8:
            ACCEPT_TOKEN(anon_sym_PLUS);
        case 9:
            ACCEPT_TOKEN(anon_sym_COMMA);
        case 10:
            if (lookahead == '.')
                ADVANCE(11);
            ACCEPT_TOKEN(anon_sym_DOT);
        case 11:
            if (lookahead == '.')
                ADVANCE(12);
            LEX_ERROR();
        case 12:
            ACCEPT_TOKEN(anon_sym_DOT_DOT_DOT);
        case 13:
            if (lookahead == '.')
                ADVANCE(14);
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(13);
            ACCEPT_TOKEN(sym_number);
        case 14:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(14);
            ACCEPT_TOKEN(sym_number);
        case 15:
            ACCEPT_TOKEN(anon_sym_COLON);
        case 16:
            ACCEPT_TOKEN(anon_sym_SEMI);
        case 17:
            ACCEPT_TOKEN(anon_sym_EQ);
        case 18:
            ACCEPT_TOKEN(anon_sym_AT);
        case 19:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(19);
            ACCEPT_TOKEN(sym_identifier);
        case 20:
            ACCEPT_TOKEN(anon_sym_LBRACK);
        case 21:
            ACCEPT_TOKEN(anon_sym_RBRACK);
        case 22:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'r') ||
                ('t' <= lookahead && lookahead <= 'z'))
                ADVANCE(19);
            if (lookahead == 's')
                ADVANCE(23);
            ACCEPT_TOKEN(sym_identifier);
        case 23:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(19);
            ACCEPT_TOKEN(anon_sym_as);
        case 24:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'q') ||
                ('s' <= lookahead && lookahead <= 'z'))
                ADVANCE(19);
            if (lookahead == 'r')
                ADVANCE(25);
            ACCEPT_TOKEN(sym_identifier);
        case 25:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'z'))
                ADVANCE(19);
            if (lookahead == 'e')
                ADVANCE(26);
            ACCEPT_TOKEN(sym_identifier);
        case 26:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(19);
            if (lookahead == 'a')
                ADVANCE(27);
            ACCEPT_TOKEN(sym_identifier);
        case 27:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'j') ||
                ('l' <= lookahead && lookahead <= 'z'))
                ADVANCE(19);
            if (lookahead == 'k')
                ADVANCE(28);
            ACCEPT_TOKEN(sym_identifier);
        case 28:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(19);
            ACCEPT_TOKEN(sym_break_statement);
        case 29:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'k') ||
                (lookahead == 'm') ||
                (lookahead == 'n') ||
                ('p' <= lookahead && lookahead <= 'z'))
                ADVANCE(19);
            if (lookahead == 'l')
                ADVANCE(30);
            if (lookahead == 'o')
                ADVANCE(34);
            ACCEPT_TOKEN(sym_identifier);
        case 30:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(19);
            if (lookahead == 'a')
                ADVANCE(31);
            ACCEPT_TOKEN(sym_identifier);
        case 31:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'r') ||
                ('t' <= lookahead && lookahead <= 'z'))
                ADVANCE(19);
            if (lookahead == 's')
                ADVANCE(32);
            ACCEPT_TOKEN(sym_identifier);
        case 32:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'r') ||
                ('t' <= lookahead && lookahead <= 'z'))
                ADVANCE(19);
            if (lookahead == 's')
                ADVANCE(33);
            ACCEPT_TOKEN(sym_identifier);
        case 33:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(19);
            ACCEPT_TOKEN(anon_sym_class);
        case 34:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'm') ||
                ('o' <= lookahead && lookahead <= 'z'))
                ADVANCE(19);
            if (lookahead == 'n')
                ADVANCE(35);
            ACCEPT_TOKEN(sym_identifier);
        case 35:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 's') ||
                ('u' <= lookahead && lookahead <= 'z'))
                ADVANCE(19);
            if (lookahead == 't')
                ADVANCE(36);
            ACCEPT_TOKEN(sym_identifier);
        case 36:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'h') ||
                ('j' <= lookahead && lookahead <= 'z'))
                ADVANCE(19);
            if (lookahead == 'i')
                ADVANCE(37);
            ACCEPT_TOKEN(sym_identifier);
        case 37:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'm') ||
                ('o' <= lookahead && lookahead <= 'z'))
                ADVANCE(19);
            if (lookahead == 'n')
                ADVANCE(38);
            ACCEPT_TOKEN(sym_identifier);
        case 38:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 't') ||
                ('v' <= lookahead && lookahead <= 'z'))
                ADVANCE(19);
            if (lookahead == 'u')
                ADVANCE(39);
            ACCEPT_TOKEN(sym_identifier);
        case 39:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'z'))
                ADVANCE(19);
            if (lookahead == 'e')
                ADVANCE(40);
            ACCEPT_TOKEN(sym_identifier);
        case 40:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(19);
            ACCEPT_TOKEN(sym_continue_statement);
        case 41:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'z'))
                ADVANCE(19);
            if (lookahead == 'e')
                ADVANCE(42);
            ACCEPT_TOKEN(sym_identifier);
        case 42:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'e') ||
                ('g' <= lookahead && lookahead <= 'k') ||
                ('m' <= lookahead && lookahead <= 'z'))
                ADVANCE(19);
            if (lookahead == 'f')
                ADVANCE(43);
            if (lookahead == 'l')
                ADVANCE(44);
            ACCEPT_TOKEN(sym_identifier);
        case 43:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(19);
            ACCEPT_TOKEN(anon_sym_def);
        case 44:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(19);
            ACCEPT_TOKEN(anon_sym_del);
        case 45:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'k') ||
                ('m' <= lookahead && lookahead <= 'w') ||
                (lookahead == 'y') ||
                (lookahead == 'z'))
                ADVANCE(19);
            if (lookahead == 'l')
                ADVANCE(46);
            if (lookahead == 'x')
                ADVANCE(51);
            ACCEPT_TOKEN(sym_identifier);
        case 46:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'h') ||
                ('j' <= lookahead && lookahead <= 'r') ||
                ('t' <= lookahead && lookahead <= 'z'))
                ADVANCE(19);
            if (lookahead == 'i')
                ADVANCE(47);
            if (lookahead == 's')
                ADVANCE(49);
            ACCEPT_TOKEN(sym_identifier);
        case 47:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'e') ||
                ('g' <= lookahead && lookahead <= 'z'))
                ADVANCE(19);
            if (lookahead == 'f')
                ADVANCE(48);
            ACCEPT_TOKEN(sym_identifier);
        case 48:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(19);
            ACCEPT_TOKEN(anon_sym_elif);
        case 49:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'z'))
                ADVANCE(19);
            if (lookahead == 'e')
                ADVANCE(50);
            ACCEPT_TOKEN(sym_identifier);
        case 50:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(19);
            ACCEPT_TOKEN(anon_sym_else);
        case 51:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                (lookahead == 'a') ||
                (lookahead == 'b') ||
                ('d' <= lookahead && lookahead <= 'z'))
                ADVANCE(19);
            if (lookahead == 'c')
                ADVANCE(52);
            ACCEPT_TOKEN(sym_identifier);
        case 52:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'z'))
                ADVANCE(19);
            if (lookahead == 'e')
                ADVANCE(53);
            ACCEPT_TOKEN(sym_identifier);
        case 53:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'o') ||
                ('q' <= lookahead && lookahead <= 'z'))
                ADVANCE(19);
            if (lookahead == 'p')
                ADVANCE(54);
            ACCEPT_TOKEN(sym_identifier);
        case 54:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 's') ||
                ('u' <= lookahead && lookahead <= 'z'))
                ADVANCE(19);
            if (lookahead == 't')
                ADVANCE(55);
            ACCEPT_TOKEN(sym_identifier);
        case 55:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(19);
            ACCEPT_TOKEN(anon_sym_except);
        case 56:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'h') ||
                ('j' <= lookahead && lookahead <= 'n') ||
                ('p' <= lookahead && lookahead <= 'z'))
                ADVANCE(19);
            if (lookahead == 'i')
                ADVANCE(57);
            if (lookahead == 'o')
                ADVANCE(63);
            ACCEPT_TOKEN(sym_identifier);
        case 57:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'm') ||
                ('o' <= lookahead && lookahead <= 'z'))
                ADVANCE(19);
            if (lookahead == 'n')
                ADVANCE(58);
            ACCEPT_TOKEN(sym_identifier);
        case 58:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(19);
            if (lookahead == 'a')
                ADVANCE(59);
            ACCEPT_TOKEN(sym_identifier);
        case 59:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'k') ||
                ('m' <= lookahead && lookahead <= 'z'))
                ADVANCE(19);
            if (lookahead == 'l')
                ADVANCE(60);
            ACCEPT_TOKEN(sym_identifier);
        case 60:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'k') ||
                ('m' <= lookahead && lookahead <= 'z'))
                ADVANCE(19);
            if (lookahead == 'l')
                ADVANCE(61);
            ACCEPT_TOKEN(sym_identifier);
        case 61:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'x') ||
                (lookahead == 'z'))
                ADVANCE(19);
            if (lookahead == 'y')
                ADVANCE(62);
            ACCEPT_TOKEN(sym_identifier);
        case 62:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(19);
            ACCEPT_TOKEN(anon_sym_finally);
        case 63:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'q') ||
                ('s' <= lookahead && lookahead <= 'z'))
                ADVANCE(19);
            if (lookahead == 'r')
                ADVANCE(64);
            ACCEPT_TOKEN(sym_identifier);
        case 64:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(19);
            ACCEPT_TOKEN(anon_sym_for);
        case 65:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'e') ||
                ('g' <= lookahead && lookahead <= 'm') ||
                ('o' <= lookahead && lookahead <= 'z'))
                ADVANCE(19);
            if (lookahead == 'f')
                ADVANCE(66);
            if (lookahead == 'n')
                ADVANCE(67);
            ACCEPT_TOKEN(sym_identifier);
        case 66:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(19);
            ACCEPT_TOKEN(anon_sym_if);
        case 67:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(19);
            ACCEPT_TOKEN(anon_sym_in);
        case 68:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('b' <= lookahead && lookahead <= 'q') ||
                ('s' <= lookahead && lookahead <= 'z'))
                ADVANCE(19);
            if (lookahead == 'a')
                ADVANCE(69);
            if (lookahead == 'r')
                ADVANCE(72);
            ACCEPT_TOKEN(sym_identifier);
        case 69:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'r') ||
                ('t' <= lookahead && lookahead <= 'z'))
                ADVANCE(19);
            if (lookahead == 's')
                ADVANCE(70);
            ACCEPT_TOKEN(sym_identifier);
        case 70:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'r') ||
                ('t' <= lookahead && lookahead <= 'z'))
                ADVANCE(19);
            if (lookahead == 's')
                ADVANCE(71);
            ACCEPT_TOKEN(sym_identifier);
        case 71:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(19);
            ACCEPT_TOKEN(sym_pass_statement);
        case 72:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'h') ||
                ('j' <= lookahead && lookahead <= 'z'))
                ADVANCE(19);
            if (lookahead == 'i')
                ADVANCE(73);
            ACCEPT_TOKEN(sym_identifier);
        case 73:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'm') ||
                ('o' <= lookahead && lookahead <= 'z'))
                ADVANCE(19);
            if (lookahead == 'n')
                ADVANCE(74);
            ACCEPT_TOKEN(sym_identifier);
        case 74:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 's') ||
                ('u' <= lookahead && lookahead <= 'z'))
                ADVANCE(19);
            if (lookahead == 't')
                ADVANCE(75);
            ACCEPT_TOKEN(sym_identifier);
        case 75:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(19);
            ACCEPT_TOKEN(anon_sym_print);
        case 76:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'z'))
                ADVANCE(19);
            if (lookahead == 'e')
                ADVANCE(77);
            ACCEPT_TOKEN(sym_identifier);
        case 77:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 's') ||
                ('u' <= lookahead && lookahead <= 'z'))
                ADVANCE(19);
            if (lookahead == 't')
                ADVANCE(78);
            ACCEPT_TOKEN(sym_identifier);
        case 78:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 't') ||
                ('v' <= lookahead && lookahead <= 'z'))
                ADVANCE(19);
            if (lookahead == 'u')
                ADVANCE(79);
            ACCEPT_TOKEN(sym_identifier);
        case 79:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'q') ||
                ('s' <= lookahead && lookahead <= 'z'))
                ADVANCE(19);
            if (lookahead == 'r')
                ADVANCE(80);
            ACCEPT_TOKEN(sym_identifier);
        case 80:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'm') ||
                ('o' <= lookahead && lookahead <= 'z'))
                ADVANCE(19);
            if (lookahead == 'n')
                ADVANCE(81);
            ACCEPT_TOKEN(sym_identifier);
        case 81:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(19);
            ACCEPT_TOKEN(anon_sym_return);
        case 82:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'q') ||
                ('s' <= lookahead && lookahead <= 'z'))
                ADVANCE(19);
            if (lookahead == 'r')
                ADVANCE(83);
            ACCEPT_TOKEN(sym_identifier);
        case 83:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'x') ||
                (lookahead == 'z'))
                ADVANCE(19);
            if (lookahead == 'y')
                ADVANCE(84);
            ACCEPT_TOKEN(sym_identifier);
        case 84:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(19);
            ACCEPT_TOKEN(anon_sym_try);
        case 85:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'g') ||
                ('j' <= lookahead && lookahead <= 'z'))
                ADVANCE(19);
            if (lookahead == 'h')
                ADVANCE(86);
            if (lookahead == 'i')
                ADVANCE(90);
            ACCEPT_TOKEN(sym_identifier);
        case 86:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'h') ||
                ('j' <= lookahead && lookahead <= 'z'))
                ADVANCE(19);
            if (lookahead == 'i')
                ADVANCE(87);
            ACCEPT_TOKEN(sym_identifier);
        case 87:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'k') ||
                ('m' <= lookahead && lookahead <= 'z'))
                ADVANCE(19);
            if (lookahead == 'l')
                ADVANCE(88);
            ACCEPT_TOKEN(sym_identifier);
        case 88:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'z'))
                ADVANCE(19);
            if (lookahead == 'e')
                ADVANCE(89);
            ACCEPT_TOKEN(sym_identifier);
        case 89:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(19);
            ACCEPT_TOKEN(anon_sym_while);
        case 90:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 's') ||
                ('u' <= lookahead && lookahead <= 'z'))
                ADVANCE(19);
            if (lookahead == 't')
                ADVANCE(91);
            ACCEPT_TOKEN(sym_identifier);
        case 91:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'g') ||
                ('i' <= lookahead && lookahead <= 'z'))
                ADVANCE(19);
            if (lookahead == 'h')
                ADVANCE(92);
            ACCEPT_TOKEN(sym_identifier);
        case 92:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(19);
            ACCEPT_TOKEN(anon_sym_with);
        case 93:
            ACCEPT_TOKEN(anon_sym_LBRACE);
        case 94:
            ACCEPT_TOKEN(anon_sym_RBRACE);
        case 95:
            if (lookahead == 0)
                ADVANCE(1);
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(95);
            if (lookahead == '#')
                ADVANCE(2);
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(13);
            if (lookahead == '@')
                ADVANCE(18);
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
                ADVANCE(19);
            if (lookahead == '[')
                ADVANCE(20);
            if (lookahead == 'b')
                ADVANCE(24);
            if (lookahead == 'c')
                ADVANCE(29);
            if (lookahead == 'd')
                ADVANCE(41);
            if (lookahead == 'f')
                ADVANCE(96);
            if (lookahead == 'i')
                ADVANCE(97);
            if (lookahead == 'p')
                ADVANCE(68);
            if (lookahead == 'r')
                ADVANCE(76);
            if (lookahead == 't')
                ADVANCE(82);
            if (lookahead == 'w')
                ADVANCE(85);
            if (lookahead == '{')
                ADVANCE(93);
            LEX_ERROR();
        case 96:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'n') ||
                ('p' <= lookahead && lookahead <= 'z'))
                ADVANCE(19);
            if (lookahead == 'o')
                ADVANCE(63);
            ACCEPT_TOKEN(sym_identifier);
        case 97:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'e') ||
                ('g' <= lookahead && lookahead <= 'z'))
                ADVANCE(19);
            if (lookahead == 'f')
                ADVANCE(66);
            ACCEPT_TOKEN(sym_identifier);
        case 98:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(98);
            if (lookahead == '#')
                ADVANCE(2);
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(13);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(19);
            if (lookahead == '[')
                ADVANCE(20);
            if (lookahead == '{')
                ADVANCE(93);
            LEX_ERROR();
        case 99:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(99);
            if (lookahead == '#')
                ADVANCE(2);
            LEX_ERROR();
        case 100:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(100);
            if (lookahead == '#')
                ADVANCE(2);
            if (lookahead == ':')
                ADVANCE(15);
            LEX_ERROR();
        case 101:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(101);
            if (lookahead == '#')
                ADVANCE(2);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(19);
            LEX_ERROR();
        case 102:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(102);
            if (lookahead == '#')
                ADVANCE(2);
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(13);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(19);
            if (lookahead == '[')
                ADVANCE(20);
            if (lookahead == ']')
                ADVANCE(21);
            if (lookahead == '{')
                ADVANCE(93);
            LEX_ERROR();
        case 103:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(103);
            if (lookahead == '#')
                ADVANCE(2);
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(13);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(19);
            if (lookahead == '[')
                ADVANCE(20);
            if (lookahead == '{')
                ADVANCE(93);
            if (lookahead == '}')
                ADVANCE(94);
            LEX_ERROR();
        case 104:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(104);
            if (lookahead == '#')
                ADVANCE(2);
            if (lookahead == '(')
                ADVANCE(4);
            if (lookahead == ')')
                ADVANCE(5);
            if (lookahead == '+')
                ADVANCE(8);
            if (lookahead == ',')
                ADVANCE(9);
            if (lookahead == ':')
                ADVANCE(15);
            if (lookahead == '[')
                ADVANCE(20);
            if (lookahead == ']')
                ADVANCE(21);
            if (lookahead == 'a')
                ADVANCE(105);
            if (lookahead == 'f')
                ADVANCE(107);
            if (lookahead == 'i')
                ADVANCE(110);
            if (lookahead == '}')
                ADVANCE(94);
            LEX_ERROR();
        case 105:
            if (lookahead == 's')
                ADVANCE(106);
            LEX_ERROR();
        case 106:
            ACCEPT_TOKEN(anon_sym_as);
        case 107:
            if (lookahead == 'o')
                ADVANCE(108);
            LEX_ERROR();
        case 108:
            if (lookahead == 'r')
                ADVANCE(109);
            LEX_ERROR();
        case 109:
            ACCEPT_TOKEN(anon_sym_for);
        case 110:
            if (lookahead == 'n')
                ADVANCE(111);
            LEX_ERROR();
        case 111:
            ACCEPT_TOKEN(anon_sym_in);
        case 112:
            if (lookahead == 0)
                ADVANCE(1);
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(112);
            if (lookahead == '#')
                ADVANCE(2);
            LEX_ERROR();
        case 113:
            if (lookahead == 0)
                ADVANCE(1);
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(113);
            if (lookahead == '#')
                ADVANCE(2);
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(13);
            if (lookahead == ';')
                ADVANCE(16);
            if (lookahead == '@')
                ADVANCE(18);
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
                ADVANCE(19);
            if (lookahead == '[')
                ADVANCE(20);
            if (lookahead == 'b')
                ADVANCE(24);
            if (lookahead == 'c')
                ADVANCE(29);
            if (lookahead == 'd')
                ADVANCE(41);
            if (lookahead == 'f')
                ADVANCE(96);
            if (lookahead == 'i')
                ADVANCE(97);
            if (lookahead == 'p')
                ADVANCE(68);
            if (lookahead == 'r')
                ADVANCE(76);
            if (lookahead == 't')
                ADVANCE(82);
            if (lookahead == 'w')
                ADVANCE(85);
            if (lookahead == '{')
                ADVANCE(93);
            LEX_ERROR();
        case 114:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(114);
            if (lookahead == '#')
                ADVANCE(2);
            if (lookahead == '@')
                ADVANCE(18);
            if (lookahead == 'c')
                ADVANCE(115);
            if (lookahead == 'd')
                ADVANCE(120);
            LEX_ERROR();
        case 115:
            if (lookahead == 'l')
                ADVANCE(116);
            LEX_ERROR();
        case 116:
            if (lookahead == 'a')
                ADVANCE(117);
            LEX_ERROR();
        case 117:
            if (lookahead == 's')
                ADVANCE(118);
            LEX_ERROR();
        case 118:
            if (lookahead == 's')
                ADVANCE(119);
            LEX_ERROR();
        case 119:
            ACCEPT_TOKEN(anon_sym_class);
        case 120:
            if (lookahead == 'e')
                ADVANCE(121);
            LEX_ERROR();
        case 121:
            if (lookahead == 'f')
                ADVANCE(122);
            LEX_ERROR();
        case 122:
            ACCEPT_TOKEN(anon_sym_def);
        case 123:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(123);
            if (lookahead == '#')
                ADVANCE(2);
            if (lookahead == '(')
                ADVANCE(4);
            if (lookahead == '+')
                ADVANCE(8);
            if (lookahead == '[')
                ADVANCE(20);
            LEX_ERROR();
        case 124:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(124);
            if (lookahead == '#')
                ADVANCE(2);
            if (lookahead == '*')
                ADVANCE(6);
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(13);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(19);
            if (lookahead == '[')
                ADVANCE(20);
            if (lookahead == '{')
                ADVANCE(93);
            LEX_ERROR();
        case 125:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(125);
            if (lookahead == '#')
                ADVANCE(2);
            if (lookahead == '.')
                ADVANCE(126);
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(13);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(19);
            if (lookahead == '[')
                ADVANCE(20);
            if (lookahead == '{')
                ADVANCE(93);
            LEX_ERROR();
        case 126:
            if (lookahead == '.')
                ADVANCE(11);
            LEX_ERROR();
        case 127:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(127);
            if (lookahead == '#')
                ADVANCE(2);
            if (lookahead == ',')
                ADVANCE(9);
            if (lookahead == ']')
                ADVANCE(21);
            LEX_ERROR();
        case 128:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(128);
            if (lookahead == '#')
                ADVANCE(2);
            if (lookahead == '(')
                ADVANCE(4);
            if (lookahead == '+')
                ADVANCE(8);
            if (lookahead == ',')
                ADVANCE(9);
            if (lookahead == '[')
                ADVANCE(20);
            if (lookahead == ']')
                ADVANCE(21);
            LEX_ERROR();
        case 129:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(129);
            if (lookahead == '#')
                ADVANCE(2);
            if (lookahead == '.')
                ADVANCE(126);
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(13);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(19);
            if (lookahead == '[')
                ADVANCE(20);
            if (lookahead == ']')
                ADVANCE(21);
            if (lookahead == '{')
                ADVANCE(93);
            LEX_ERROR();
        case 130:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(130);
            if (lookahead == '#')
                ADVANCE(2);
            if (lookahead == '(')
                ADVANCE(4);
            if (lookahead == ')')
                ADVANCE(5);
            if (lookahead == '+')
                ADVANCE(8);
            if (lookahead == ',')
                ADVANCE(9);
            if (lookahead == '=')
                ADVANCE(17);
            if (lookahead == '[')
                ADVANCE(20);
            LEX_ERROR();
        case 131:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(131);
            if (lookahead == '#')
                ADVANCE(2);
            if (lookahead == '(')
                ADVANCE(4);
            if (lookahead == ')')
                ADVANCE(5);
            if (lookahead == '+')
                ADVANCE(8);
            if (lookahead == ',')
                ADVANCE(9);
            if (lookahead == '[')
                ADVANCE(20);
            LEX_ERROR();
        case 132:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(132);
            if (lookahead == '#')
                ADVANCE(2);
            if (lookahead == ')')
                ADVANCE(5);
            if (lookahead == ',')
                ADVANCE(9);
            LEX_ERROR();
        case 133:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(133);
            if (lookahead == '#')
                ADVANCE(2);
            if (lookahead == ')')
                ADVANCE(5);
            LEX_ERROR();
        case 134:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(134);
            if (lookahead == '#')
                ADVANCE(2);
            if (lookahead == '*')
                ADVANCE(135);
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(13);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(19);
            if (lookahead == '[')
                ADVANCE(20);
            if (lookahead == '{')
                ADVANCE(93);
            LEX_ERROR();
        case 135:
            if (lookahead == '*')
                ADVANCE(7);
            LEX_ERROR();
        case 136:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(136);
            if (lookahead == '#')
                ADVANCE(2);
            if (lookahead == ')')
                ADVANCE(5);
            if (lookahead == '*')
                ADVANCE(6);
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(13);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(19);
            if (lookahead == '[')
                ADVANCE(20);
            if (lookahead == '{')
                ADVANCE(93);
            LEX_ERROR();
        case 137:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(137);
            if (lookahead == '#')
                ADVANCE(2);
            if (lookahead == '(')
                ADVANCE(4);
            if (lookahead == '+')
                ADVANCE(8);
            if (lookahead == ',')
                ADVANCE(9);
            if (lookahead == ':')
                ADVANCE(15);
            if (lookahead == '[')
                ADVANCE(20);
            if (lookahead == 'f')
                ADVANCE(107);
            if (lookahead == '}')
                ADVANCE(94);
            LEX_ERROR();
        case 138:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(138);
            if (lookahead == '#')
                ADVANCE(2);
            if (lookahead == ',')
                ADVANCE(9);
            if (lookahead == 'f')
                ADVANCE(107);
            if (lookahead == '}')
                ADVANCE(94);
            LEX_ERROR();
        case 139:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(139);
            if (lookahead == '#')
                ADVANCE(2);
            if (lookahead == ',')
                ADVANCE(9);
            if (lookahead == '}')
                ADVANCE(94);
            LEX_ERROR();
        case 140:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(140);
            if (lookahead == '#')
                ADVANCE(2);
            if (lookahead == '(')
                ADVANCE(4);
            if (lookahead == '+')
                ADVANCE(8);
            if (lookahead == ':')
                ADVANCE(15);
            if (lookahead == '[')
                ADVANCE(20);
            LEX_ERROR();
        case 141:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(141);
            if (lookahead == '#')
                ADVANCE(2);
            if (lookahead == '(')
                ADVANCE(4);
            if (lookahead == '+')
                ADVANCE(8);
            if (lookahead == ',')
                ADVANCE(9);
            if (lookahead == '[')
                ADVANCE(20);
            if (lookahead == 'f')
                ADVANCE(107);
            if (lookahead == '}')
                ADVANCE(94);
            LEX_ERROR();
        case 142:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(142);
            if (lookahead == '#')
                ADVANCE(2);
            if (lookahead == 'i')
                ADVANCE(110);
            LEX_ERROR();
        case 143:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(143);
            if (lookahead == '#')
                ADVANCE(2);
            if (lookahead == '(')
                ADVANCE(4);
            if (lookahead == ')')
                ADVANCE(5);
            if (lookahead == '+')
                ADVANCE(8);
            if (lookahead == ',')
                ADVANCE(9);
            if (lookahead == ':')
                ADVANCE(15);
            if (lookahead == '[')
                ADVANCE(20);
            if (lookahead == 'i')
                ADVANCE(110);
            LEX_ERROR();
        case 144:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(144);
            if (lookahead == '#')
                ADVANCE(2);
            if (lookahead == ')')
                ADVANCE(5);
            if (lookahead == ',')
                ADVANCE(9);
            if (lookahead == ':')
                ADVANCE(15);
            if (lookahead == 'i')
                ADVANCE(110);
            LEX_ERROR();
        case 145:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(145);
            if (lookahead == '#')
                ADVANCE(2);
            if (lookahead == '(')
                ADVANCE(4);
            if (lookahead == ')')
                ADVANCE(5);
            if (lookahead == '+')
                ADVANCE(8);
            if (lookahead == ',')
                ADVANCE(9);
            if (lookahead == ':')
                ADVANCE(15);
            if (lookahead == '[')
                ADVANCE(20);
            if (lookahead == ']')
                ADVANCE(21);
            if (lookahead == 'i')
                ADVANCE(110);
            if (lookahead == '}')
                ADVANCE(94);
            LEX_ERROR();
        case 146:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(146);
            if (lookahead == '#')
                ADVANCE(2);
            if (lookahead == '(')
                ADVANCE(4);
            if (lookahead == '+')
                ADVANCE(8);
            if (lookahead == '[')
                ADVANCE(20);
            if (lookahead == '}')
                ADVANCE(94);
            LEX_ERROR();
        case 147:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(147);
            if (lookahead == '#')
                ADVANCE(2);
            if (lookahead == '(')
                ADVANCE(4);
            if (lookahead == '+')
                ADVANCE(8);
            if (lookahead == ',')
                ADVANCE(9);
            if (lookahead == '[')
                ADVANCE(20);
            if (lookahead == ']')
                ADVANCE(21);
            if (lookahead == 'f')
                ADVANCE(107);
            LEX_ERROR();
        case 148:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(148);
            if (lookahead == '#')
                ADVANCE(2);
            if (lookahead == '(')
                ADVANCE(4);
            if (lookahead == '+')
                ADVANCE(8);
            if (lookahead == '[')
                ADVANCE(20);
            if (lookahead == ']')
                ADVANCE(21);
            LEX_ERROR();
        case 149:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(149);
            if (lookahead == '#')
                ADVANCE(2);
            if (lookahead == '(')
                ADVANCE(4);
            if (lookahead == ')')
                ADVANCE(5);
            if (lookahead == '+')
                ADVANCE(8);
            if (lookahead == '[')
                ADVANCE(20);
            LEX_ERROR();
        case 150:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(150);
            if (lookahead == '#')
                ADVANCE(2);
            if (lookahead == '(')
                ADVANCE(4);
            if (lookahead == '+')
                ADVANCE(8);
            if (lookahead == ',')
                ADVANCE(9);
            if (lookahead == '[')
                ADVANCE(20);
            LEX_ERROR();
        case 151:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(151);
            if (lookahead == '#')
                ADVANCE(2);
            if (lookahead == '(')
                ADVANCE(4);
            if (lookahead == '.')
                ADVANCE(152);
            LEX_ERROR();
        case 152:
            ACCEPT_TOKEN(anon_sym_DOT);
        case 153:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(153);
            if (lookahead == '#')
                ADVANCE(2);
            if (lookahead == '(')
                ADVANCE(4);
            LEX_ERROR();
        case 154:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(154);
            if (lookahead == '#')
                ADVANCE(2);
            if (lookahead == '(')
                ADVANCE(4);
            if (lookahead == ':')
                ADVANCE(15);
            LEX_ERROR();
        case 155:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(155);
            if (lookahead == '#')
                ADVANCE(2);
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(13);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == 'a') ||
                ('e' <= lookahead && lookahead <= 'o') ||
                (lookahead == 'q') ||
                ('s' <= lookahead && lookahead <= 'z'))
                ADVANCE(19);
            if (lookahead == '[')
                ADVANCE(20);
            if (lookahead == 'b')
                ADVANCE(24);
            if (lookahead == 'c')
                ADVANCE(156);
            if (lookahead == 'd')
                ADVANCE(157);
            if (lookahead == 'p')
                ADVANCE(68);
            if (lookahead == 'r')
                ADVANCE(76);
            if (lookahead == '{')
                ADVANCE(93);
            LEX_ERROR();
        case 156:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'n') ||
                ('p' <= lookahead && lookahead <= 'z'))
                ADVANCE(19);
            if (lookahead == 'o')
                ADVANCE(34);
            ACCEPT_TOKEN(sym_identifier);
        case 157:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'z'))
                ADVANCE(19);
            if (lookahead == 'e')
                ADVANCE(158);
            ACCEPT_TOKEN(sym_identifier);
        case 158:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'k') ||
                ('m' <= lookahead && lookahead <= 'z'))
                ADVANCE(19);
            if (lookahead == 'l')
                ADVANCE(44);
            ACCEPT_TOKEN(sym_identifier);
        case 159:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(159);
            if (lookahead == '#')
                ADVANCE(2);
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(13);
            if (lookahead == '@')
                ADVANCE(18);
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
                ADVANCE(19);
            if (lookahead == '[')
                ADVANCE(20);
            if (lookahead == 'b')
                ADVANCE(24);
            if (lookahead == 'c')
                ADVANCE(29);
            if (lookahead == 'd')
                ADVANCE(41);
            if (lookahead == 'f')
                ADVANCE(96);
            if (lookahead == 'i')
                ADVANCE(97);
            if (lookahead == 'p')
                ADVANCE(68);
            if (lookahead == 'r')
                ADVANCE(76);
            if (lookahead == 't')
                ADVANCE(82);
            if (lookahead == 'w')
                ADVANCE(85);
            if (lookahead == '{')
                ADVANCE(93);
            LEX_ERROR();
        case 160:
            if (lookahead == 0)
                ADVANCE(1);
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(160);
            if (lookahead == '#')
                ADVANCE(2);
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(13);
            if (lookahead == ';')
                ADVANCE(16);
            if (lookahead == '@')
                ADVANCE(18);
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
                ADVANCE(19);
            if (lookahead == '[')
                ADVANCE(20);
            if (lookahead == 'b')
                ADVANCE(24);
            if (lookahead == 'c')
                ADVANCE(29);
            if (lookahead == 'd')
                ADVANCE(41);
            if (lookahead == 'e')
                ADVANCE(45);
            if (lookahead == 'f')
                ADVANCE(56);
            if (lookahead == 'i')
                ADVANCE(97);
            if (lookahead == 'p')
                ADVANCE(68);
            if (lookahead == 'r')
                ADVANCE(76);
            if (lookahead == 't')
                ADVANCE(82);
            if (lookahead == 'w')
                ADVANCE(85);
            if (lookahead == '{')
                ADVANCE(93);
            LEX_ERROR();
        case 161:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(161);
            if (lookahead == '#')
                ADVANCE(2);
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(13);
            if (lookahead == '@')
                ADVANCE(18);
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
                ADVANCE(19);
            if (lookahead == '[')
                ADVANCE(20);
            if (lookahead == 'b')
                ADVANCE(24);
            if (lookahead == 'c')
                ADVANCE(29);
            if (lookahead == 'd')
                ADVANCE(41);
            if (lookahead == 'e')
                ADVANCE(45);
            if (lookahead == 'f')
                ADVANCE(56);
            if (lookahead == 'i')
                ADVANCE(97);
            if (lookahead == 'p')
                ADVANCE(68);
            if (lookahead == 'r')
                ADVANCE(76);
            if (lookahead == 't')
                ADVANCE(82);
            if (lookahead == 'w')
                ADVANCE(85);
            if (lookahead == '{')
                ADVANCE(93);
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
                ADVANCE(5);
            if (lookahead == '*')
                ADVANCE(163);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(19);
            LEX_ERROR();
        case 163:
            ACCEPT_TOKEN(anon_sym_STAR);
        case 164:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(164);
            if (lookahead == '#')
                ADVANCE(2);
            if (lookahead == '*')
                ADVANCE(163);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(19);
            LEX_ERROR();
        case 165:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(165);
            if (lookahead == '#')
                ADVANCE(2);
            if (lookahead == ')')
                ADVANCE(5);
            if (lookahead == ',')
                ADVANCE(9);
            if (lookahead == '=')
                ADVANCE(17);
            LEX_ERROR();
        case 166:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(166);
            if (lookahead == '#')
                ADVANCE(2);
            if (lookahead == '*')
                ADVANCE(163);
            LEX_ERROR();
        case 167:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(167);
            if (lookahead == '#')
                ADVANCE(2);
            if (lookahead == ',')
                ADVANCE(9);
            if (lookahead == ':')
                ADVANCE(15);
            LEX_ERROR();
        case 168:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(168);
            if (lookahead == '#')
                ADVANCE(2);
            if (lookahead == '(')
                ADVANCE(4);
            if (lookahead == '+')
                ADVANCE(8);
            if (lookahead == ',')
                ADVANCE(9);
            if (lookahead == ':')
                ADVANCE(15);
            if (lookahead == '[')
                ADVANCE(20);
            if (lookahead == 'a')
                ADVANCE(105);
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
                ADVANCE(4);
            if (lookahead == '+')
                ADVANCE(8);
            if (lookahead == ',')
                ADVANCE(9);
            if (lookahead == ':')
                ADVANCE(15);
            if (lookahead == '[')
                ADVANCE(20);
            LEX_ERROR();
        case 170:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(170);
            if (lookahead == '#')
                ADVANCE(2);
            if (lookahead == 'e')
                ADVANCE(171);
            if (lookahead == 'f')
                ADVANCE(177);
            LEX_ERROR();
        case 171:
            if (lookahead == 'x')
                ADVANCE(172);
            LEX_ERROR();
        case 172:
            if (lookahead == 'c')
                ADVANCE(173);
            LEX_ERROR();
        case 173:
            if (lookahead == 'e')
                ADVANCE(174);
            LEX_ERROR();
        case 174:
            if (lookahead == 'p')
                ADVANCE(175);
            LEX_ERROR();
        case 175:
            if (lookahead == 't')
                ADVANCE(176);
            LEX_ERROR();
        case 176:
            ACCEPT_TOKEN(anon_sym_except);
        case 177:
            if (lookahead == 'i')
                ADVANCE(178);
            LEX_ERROR();
        case 178:
            if (lookahead == 'n')
                ADVANCE(179);
            LEX_ERROR();
        case 179:
            if (lookahead == 'a')
                ADVANCE(180);
            LEX_ERROR();
        case 180:
            if (lookahead == 'l')
                ADVANCE(181);
            LEX_ERROR();
        case 181:
            if (lookahead == 'l')
                ADVANCE(182);
            LEX_ERROR();
        case 182:
            if (lookahead == 'y')
                ADVANCE(183);
            LEX_ERROR();
        case 183:
            ACCEPT_TOKEN(anon_sym_finally);
        case 184:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(184);
            if (lookahead == '#')
                ADVANCE(2);
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(13);
            if (lookahead == '@')
                ADVANCE(18);
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
                ADVANCE(19);
            if (lookahead == '[')
                ADVANCE(20);
            if (lookahead == 'b')
                ADVANCE(24);
            if (lookahead == 'c')
                ADVANCE(29);
            if (lookahead == 'd')
                ADVANCE(41);
            if (lookahead == 'e')
                ADVANCE(185);
            if (lookahead == 'f')
                ADVANCE(56);
            if (lookahead == 'i')
                ADVANCE(97);
            if (lookahead == 'p')
                ADVANCE(68);
            if (lookahead == 'r')
                ADVANCE(76);
            if (lookahead == 't')
                ADVANCE(82);
            if (lookahead == 'w')
                ADVANCE(85);
            if (lookahead == '{')
                ADVANCE(93);
            LEX_ERROR();
        case 185:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'k') ||
                ('m' <= lookahead && lookahead <= 'w') ||
                (lookahead == 'y') ||
                (lookahead == 'z'))
                ADVANCE(19);
            if (lookahead == 'l')
                ADVANCE(186);
            if (lookahead == 'x')
                ADVANCE(51);
            ACCEPT_TOKEN(sym_identifier);
        case 186:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'r') ||
                ('t' <= lookahead && lookahead <= 'z'))
                ADVANCE(19);
            if (lookahead == 's')
                ADVANCE(49);
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
                ADVANCE(13);
            if (lookahead == '@')
                ADVANCE(18);
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
                ADVANCE(19);
            if (lookahead == '[')
                ADVANCE(20);
            if (lookahead == 'b')
                ADVANCE(24);
            if (lookahead == 'c')
                ADVANCE(29);
            if (lookahead == 'd')
                ADVANCE(41);
            if (lookahead == 'f')
                ADVANCE(56);
            if (lookahead == 'i')
                ADVANCE(97);
            if (lookahead == 'p')
                ADVANCE(68);
            if (lookahead == 'r')
                ADVANCE(76);
            if (lookahead == 't')
                ADVANCE(82);
            if (lookahead == 'w')
                ADVANCE(85);
            if (lookahead == '{')
                ADVANCE(93);
            LEX_ERROR();
        case 188:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(188);
            if (lookahead == '#')
                ADVANCE(2);
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(13);
            if (lookahead == '@')
                ADVANCE(18);
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
                ADVANCE(19);
            if (lookahead == '[')
                ADVANCE(20);
            if (lookahead == 'b')
                ADVANCE(24);
            if (lookahead == 'c')
                ADVANCE(29);
            if (lookahead == 'd')
                ADVANCE(41);
            if (lookahead == 'e')
                ADVANCE(189);
            if (lookahead == 'f')
                ADVANCE(96);
            if (lookahead == 'i')
                ADVANCE(97);
            if (lookahead == 'p')
                ADVANCE(68);
            if (lookahead == 'r')
                ADVANCE(76);
            if (lookahead == 't')
                ADVANCE(82);
            if (lookahead == 'w')
                ADVANCE(85);
            if (lookahead == '{')
                ADVANCE(93);
            LEX_ERROR();
        case 189:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'k') ||
                ('m' <= lookahead && lookahead <= 'z'))
                ADVANCE(19);
            if (lookahead == 'l')
                ADVANCE(186);
            ACCEPT_TOKEN(sym_identifier);
        case 190:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(190);
            if (lookahead == '#')
                ADVANCE(2);
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(13);
            if (lookahead == '@')
                ADVANCE(18);
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
                ADVANCE(19);
            if (lookahead == '[')
                ADVANCE(20);
            if (lookahead == 'b')
                ADVANCE(24);
            if (lookahead == 'c')
                ADVANCE(29);
            if (lookahead == 'd')
                ADVANCE(41);
            if (lookahead == 'e')
                ADVANCE(191);
            if (lookahead == 'f')
                ADVANCE(96);
            if (lookahead == 'i')
                ADVANCE(97);
            if (lookahead == 'p')
                ADVANCE(68);
            if (lookahead == 'r')
                ADVANCE(76);
            if (lookahead == 't')
                ADVANCE(82);
            if (lookahead == 'w')
                ADVANCE(85);
            if (lookahead == '{')
                ADVANCE(93);
            LEX_ERROR();
        case 191:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'k') ||
                ('m' <= lookahead && lookahead <= 'z'))
                ADVANCE(19);
            if (lookahead == 'l')
                ADVANCE(46);
            ACCEPT_TOKEN(sym_identifier);
        case 192:
            if (lookahead == 0)
                ADVANCE(1);
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(192);
            if (lookahead == '#')
                ADVANCE(2);
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(13);
            if (lookahead == ';')
                ADVANCE(16);
            if (lookahead == '@')
                ADVANCE(18);
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
                ADVANCE(19);
            if (lookahead == '[')
                ADVANCE(20);
            if (lookahead == 'b')
                ADVANCE(24);
            if (lookahead == 'c')
                ADVANCE(29);
            if (lookahead == 'd')
                ADVANCE(41);
            if (lookahead == 'e')
                ADVANCE(185);
            if (lookahead == 'f')
                ADVANCE(56);
            if (lookahead == 'i')
                ADVANCE(97);
            if (lookahead == 'p')
                ADVANCE(68);
            if (lookahead == 'r')
                ADVANCE(76);
            if (lookahead == 't')
                ADVANCE(82);
            if (lookahead == 'w')
                ADVANCE(85);
            if (lookahead == '{')
                ADVANCE(93);
            LEX_ERROR();
        case 193:
            if (lookahead == 0)
                ADVANCE(1);
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(193);
            if (lookahead == '#')
                ADVANCE(2);
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(13);
            if (lookahead == ';')
                ADVANCE(16);
            if (lookahead == '@')
                ADVANCE(18);
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
                ADVANCE(19);
            if (lookahead == '[')
                ADVANCE(20);
            if (lookahead == 'b')
                ADVANCE(24);
            if (lookahead == 'c')
                ADVANCE(29);
            if (lookahead == 'd')
                ADVANCE(41);
            if (lookahead == 'f')
                ADVANCE(56);
            if (lookahead == 'i')
                ADVANCE(97);
            if (lookahead == 'p')
                ADVANCE(68);
            if (lookahead == 'r')
                ADVANCE(76);
            if (lookahead == 't')
                ADVANCE(82);
            if (lookahead == 'w')
                ADVANCE(85);
            if (lookahead == '{')
                ADVANCE(93);
            LEX_ERROR();
        case 194:
            if (lookahead == 0)
                ADVANCE(1);
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(194);
            if (lookahead == '#')
                ADVANCE(2);
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(13);
            if (lookahead == ';')
                ADVANCE(16);
            if (lookahead == '@')
                ADVANCE(18);
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
                ADVANCE(19);
            if (lookahead == '[')
                ADVANCE(20);
            if (lookahead == 'b')
                ADVANCE(24);
            if (lookahead == 'c')
                ADVANCE(29);
            if (lookahead == 'd')
                ADVANCE(41);
            if (lookahead == 'e')
                ADVANCE(189);
            if (lookahead == 'f')
                ADVANCE(96);
            if (lookahead == 'i')
                ADVANCE(97);
            if (lookahead == 'p')
                ADVANCE(68);
            if (lookahead == 'r')
                ADVANCE(76);
            if (lookahead == 't')
                ADVANCE(82);
            if (lookahead == 'w')
                ADVANCE(85);
            if (lookahead == '{')
                ADVANCE(93);
            LEX_ERROR();
        case 195:
            if (lookahead == 0)
                ADVANCE(1);
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(195);
            if (lookahead == '#')
                ADVANCE(2);
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(13);
            if (lookahead == ';')
                ADVANCE(16);
            if (lookahead == '@')
                ADVANCE(18);
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
                ADVANCE(19);
            if (lookahead == '[')
                ADVANCE(20);
            if (lookahead == 'b')
                ADVANCE(24);
            if (lookahead == 'c')
                ADVANCE(29);
            if (lookahead == 'd')
                ADVANCE(41);
            if (lookahead == 'e')
                ADVANCE(191);
            if (lookahead == 'f')
                ADVANCE(96);
            if (lookahead == 'i')
                ADVANCE(97);
            if (lookahead == 'p')
                ADVANCE(68);
            if (lookahead == 'r')
                ADVANCE(76);
            if (lookahead == 't')
                ADVANCE(82);
            if (lookahead == 'w')
                ADVANCE(85);
            if (lookahead == '{')
                ADVANCE(93);
            LEX_ERROR();
        case 196:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(196);
            if (lookahead == '#')
                ADVANCE(2);
            if (lookahead == ',')
                ADVANCE(9);
            LEX_ERROR();
        case 197:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(197);
            if (lookahead == '#')
                ADVANCE(2);
            if (lookahead == ')')
                ADVANCE(5);
            if (lookahead == '*')
                ADVANCE(6);
            if (lookahead == '.')
                ADVANCE(126);
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(13);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(19);
            if (lookahead == '[')
                ADVANCE(20);
            if (lookahead == ']')
                ADVANCE(21);
            if (lookahead == '{')
                ADVANCE(93);
            if (lookahead == '}')
                ADVANCE(94);
            LEX_ERROR();
        case 198:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(198);
            if (lookahead == '#')
                ADVANCE(2);
            if (lookahead == '*')
                ADVANCE(163);
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(13);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(19);
            if (lookahead == '[')
                ADVANCE(20);
            if (lookahead == '{')
                ADVANCE(93);
            LEX_ERROR();
        case 199:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(199);
            if (lookahead == '#')
                ADVANCE(2);
            if (lookahead == '(')
                ADVANCE(4);
            if (lookahead == ')')
                ADVANCE(5);
            if (lookahead == '+')
                ADVANCE(8);
            if (lookahead == ',')
                ADVANCE(9);
            if (lookahead == '.')
                ADVANCE(152);
            if (lookahead == ':')
                ADVANCE(15);
            if (lookahead == '=')
                ADVANCE(17);
            if (lookahead == '[')
                ADVANCE(20);
            if (lookahead == ']')
                ADVANCE(21);
            if (lookahead == 'a')
                ADVANCE(105);
            if (lookahead == 'f')
                ADVANCE(107);
            if (lookahead == 'i')
                ADVANCE(110);
            if (lookahead == '}')
                ADVANCE(94);
            LEX_ERROR();
        case 200:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(200);
            if (lookahead == '#')
                ADVANCE(2);
            if (lookahead == ')')
                ADVANCE(5);
            if (lookahead == ':')
                ADVANCE(15);
            if (lookahead == 'i')
                ADVANCE(110);
            LEX_ERROR();
        case 201:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(201);
            if (lookahead == '#')
                ADVANCE(2);
            if (lookahead == ')')
                ADVANCE(5);
            if (lookahead == ',')
                ADVANCE(9);
            if (lookahead == ':')
                ADVANCE(15);
            if (lookahead == ']')
                ADVANCE(21);
            if (lookahead == 'i')
                ADVANCE(110);
            if (lookahead == '}')
                ADVANCE(94);
            LEX_ERROR();
        case 202:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(202);
            if (lookahead == '#')
                ADVANCE(2);
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(13);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(19);
            if (lookahead == '[')
                ADVANCE(20);
            if (lookahead == ']')
                ADVANCE(21);
            if (lookahead == '{')
                ADVANCE(93);
            if (lookahead == '}')
                ADVANCE(94);
            LEX_ERROR();
        case 203:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(203);
            if (lookahead == '#')
                ADVANCE(2);
            if (lookahead == '(')
                ADVANCE(4);
            if (lookahead == '+')
                ADVANCE(8);
            if (lookahead == '[')
                ADVANCE(20);
            if (lookahead == ']')
                ADVANCE(21);
            if (lookahead == '}')
                ADVANCE(94);
            LEX_ERROR();
        case 204:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(204);
            if (lookahead == '#')
                ADVANCE(2);
            if (lookahead == ')')
                ADVANCE(5);
            if (lookahead == '*')
                ADVANCE(163);
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(13);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(19);
            if (lookahead == '[')
                ADVANCE(20);
            if (lookahead == '{')
                ADVANCE(93);
            LEX_ERROR();
        case 205:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(205);
            if (lookahead == '#')
                ADVANCE(2);
            if (lookahead == '(')
                ADVANCE(4);
            if (lookahead == '+')
                ADVANCE(8);
            if (lookahead == ',')
                ADVANCE(9);
            if (lookahead == ':')
                ADVANCE(15);
            if (lookahead == '[')
                ADVANCE(20);
            if (lookahead == ']')
                ADVANCE(21);
            if (lookahead == '}')
                ADVANCE(94);
            LEX_ERROR();
        case 206:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(206);
            if (lookahead == '#')
                ADVANCE(2);
            if (lookahead == '(')
                ADVANCE(4);
            if (lookahead == ')')
                ADVANCE(5);
            if (lookahead == '+')
                ADVANCE(8);
            if (lookahead == ',')
                ADVANCE(9);
            if (lookahead == ':')
                ADVANCE(15);
            if (lookahead == '=')
                ADVANCE(17);
            if (lookahead == '[')
                ADVANCE(20);
            if (lookahead == ']')
                ADVANCE(21);
            if (lookahead == 'a')
                ADVANCE(105);
            if (lookahead == 'i')
                ADVANCE(110);
            if (lookahead == '}')
                ADVANCE(94);
            LEX_ERROR();
        case 207:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(207);
            if (lookahead == '#')
                ADVANCE(2);
            if (lookahead == '(')
                ADVANCE(4);
            if (lookahead == ')')
                ADVANCE(5);
            if (lookahead == '+')
                ADVANCE(8);
            if (lookahead == ',')
                ADVANCE(9);
            if (lookahead == ':')
                ADVANCE(15);
            if (lookahead == '[')
                ADVANCE(20);
            if (lookahead == ']')
                ADVANCE(21);
            if (lookahead == 'a')
                ADVANCE(105);
            if (lookahead == 'i')
                ADVANCE(110);
            if (lookahead == '}')
                ADVANCE(94);
            LEX_ERROR();
        case 208:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(208);
            if (lookahead == '#')
                ADVANCE(2);
            if (lookahead == '(')
                ADVANCE(4);
            if (lookahead == '+')
                ADVANCE(8);
            if (lookahead == ',')
                ADVANCE(9);
            if (lookahead == '[')
                ADVANCE(20);
            if (lookahead == '}')
                ADVANCE(94);
            LEX_ERROR();
        default:
            LEX_ERROR();
    }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
    [0] = {.lex_state = 0, .external_tokens = 1},
    [1] = {.lex_state = 95},
    [2] = {.lex_state = 98},
    [3] = {.lex_state = 98},
    [4] = {.lex_state = 98},
    [5] = {.lex_state = 99, .external_tokens = 2},
    [6] = {.lex_state = 98},
    [7] = {.lex_state = 98},
    [8] = {.lex_state = 98},
    [9] = {.lex_state = 100},
    [10] = {.lex_state = 98},
    [11] = {.lex_state = 101},
    [12] = {.lex_state = 101},
    [13] = {.lex_state = 101},
    [14] = {.lex_state = 102},
    [15] = {.lex_state = 103},
    [16] = {.lex_state = 104, .external_tokens = 2},
    [17] = {.lex_state = 112},
    [18] = {.lex_state = 113, .external_tokens = 2},
    [19] = {.lex_state = 99, .external_tokens = 2},
    [20] = {.lex_state = 113, .external_tokens = 2},
    [21] = {.lex_state = 113, .external_tokens = 2},
    [22] = {.lex_state = 114},
    [23] = {.lex_state = 123, .external_tokens = 2},
    [24] = {.lex_state = 113, .external_tokens = 2},
    [25] = {.lex_state = 114},
    [26] = {.lex_state = 113, .external_tokens = 2},
    [27] = {.lex_state = 114},
    [28] = {.lex_state = 112},
    [29] = {.lex_state = 113, .external_tokens = 2},
    [30] = {.lex_state = 124},
    [31] = {.lex_state = 98},
    [32] = {.lex_state = 125},
    [33] = {.lex_state = 102},
    [34] = {.lex_state = 127},
    [35] = {.lex_state = 103},
    [36] = {.lex_state = 104},
    [37] = {.lex_state = 128},
    [38] = {.lex_state = 129},
    [39] = {.lex_state = 124},
    [40] = {.lex_state = 98},
    [41] = {.lex_state = 125},
    [42] = {.lex_state = 104, .external_tokens = 2},
    [43] = {.lex_state = 127},
    [44] = {.lex_state = 129},
    [45] = {.lex_state = 104, .external_tokens = 2},
    [46] = {.lex_state = 127},
    [47] = {.lex_state = 104, .external_tokens = 2},
    [48] = {.lex_state = 128},
    [49] = {.lex_state = 127},
    [50] = {.lex_state = 128},
    [51] = {.lex_state = 129},
    [52] = {.lex_state = 104},
    [53] = {.lex_state = 127},
    [54] = {.lex_state = 129},
    [55] = {.lex_state = 104},
    [56] = {.lex_state = 104},
    [57] = {.lex_state = 127},
    [58] = {.lex_state = 128},
    [59] = {.lex_state = 104},
    [60] = {.lex_state = 98},
    [61] = {.lex_state = 98},
    [62] = {.lex_state = 130},
    [63] = {.lex_state = 131},
    [64] = {.lex_state = 132},
    [65] = {.lex_state = 132},
    [66] = {.lex_state = 133},
    [67] = {.lex_state = 124},
    [68] = {.lex_state = 131},
    [69] = {.lex_state = 132},
    [70] = {.lex_state = 132},
    [71] = {.lex_state = 133},
    [72] = {.lex_state = 104},
    [73] = {.lex_state = 134},
    [74] = {.lex_state = 132},
    [75] = {.lex_state = 134},
    [76] = {.lex_state = 104},
    [77] = {.lex_state = 131},
    [78] = {.lex_state = 132},
    [79] = {.lex_state = 133},
    [80] = {.lex_state = 104},
    [81] = {.lex_state = 131},
    [82] = {.lex_state = 132},
    [83] = {.lex_state = 133},
    [84] = {.lex_state = 104},
    [85] = {.lex_state = 136},
    [86] = {.lex_state = 104},
    [87] = {.lex_state = 134},
    [88] = {.lex_state = 132},
    [89] = {.lex_state = 134},
    [90] = {.lex_state = 133},
    [91] = {.lex_state = 136},
    [92] = {.lex_state = 98},
    [93] = {.lex_state = 131},
    [94] = {.lex_state = 104},
    [95] = {.lex_state = 137},
    [96] = {.lex_state = 138},
    [97] = {.lex_state = 103},
    [98] = {.lex_state = 98},
    [99] = {.lex_state = 104},
    [100] = {.lex_state = 139},
    [101] = {.lex_state = 103},
    [102] = {.lex_state = 104},
    [103] = {.lex_state = 104},
    [104] = {.lex_state = 140},
    [105] = {.lex_state = 139},
    [106] = {.lex_state = 98},
    [107] = {.lex_state = 141},
    [108] = {.lex_state = 142},
    [109] = {.lex_state = 143},
    [110] = {.lex_state = 98},
    [111] = {.lex_state = 144},
    [112] = {.lex_state = 98},
    [113] = {.lex_state = 145},
    [114] = {.lex_state = 145},
    [115] = {.lex_state = 98},
    [116] = {.lex_state = 146},
    [117] = {.lex_state = 104},
    [118] = {.lex_state = 139},
    [119] = {.lex_state = 103},
    [120] = {.lex_state = 98},
    [121] = {.lex_state = 104},
    [122] = {.lex_state = 139},
    [123] = {.lex_state = 103},
    [124] = {.lex_state = 104},
    [125] = {.lex_state = 104},
    [126] = {.lex_state = 142},
    [127] = {.lex_state = 98},
    [128] = {.lex_state = 146},
    [129] = {.lex_state = 104},
    [130] = {.lex_state = 104},
    [131] = {.lex_state = 147},
    [132] = {.lex_state = 102},
    [133] = {.lex_state = 98},
    [134] = {.lex_state = 104},
    [135] = {.lex_state = 127},
    [136] = {.lex_state = 102},
    [137] = {.lex_state = 104},
    [138] = {.lex_state = 104},
    [139] = {.lex_state = 142},
    [140] = {.lex_state = 98},
    [141] = {.lex_state = 148},
    [142] = {.lex_state = 104},
    [143] = {.lex_state = 149},
    [144] = {.lex_state = 131},
    [145] = {.lex_state = 150, .external_tokens = 2},
    [146] = {.lex_state = 131},
    [147] = {.lex_state = 132},
    [148] = {.lex_state = 132},
    [149] = {.lex_state = 133},
    [150] = {.lex_state = 124},
    [151] = {.lex_state = 131},
    [152] = {.lex_state = 132},
    [153] = {.lex_state = 132},
    [154] = {.lex_state = 133},
    [155] = {.lex_state = 104, .external_tokens = 2},
    [156] = {.lex_state = 134},
    [157] = {.lex_state = 132},
    [158] = {.lex_state = 134},
    [159] = {.lex_state = 104, .external_tokens = 2},
    [160] = {.lex_state = 133},
    [161] = {.lex_state = 104, .external_tokens = 2},
    [162] = {.lex_state = 133},
    [163] = {.lex_state = 104, .external_tokens = 2},
    [164] = {.lex_state = 136},
    [165] = {.lex_state = 104, .external_tokens = 2},
    [166] = {.lex_state = 134},
    [167] = {.lex_state = 132},
    [168] = {.lex_state = 134},
    [169] = {.lex_state = 133},
    [170] = {.lex_state = 136},
    [171] = {.lex_state = 113, .external_tokens = 2},
    [172] = {.lex_state = 104, .external_tokens = 2},
    [173] = {.lex_state = 137},
    [174] = {.lex_state = 138},
    [175] = {.lex_state = 103},
    [176] = {.lex_state = 98},
    [177] = {.lex_state = 104, .external_tokens = 2},
    [178] = {.lex_state = 139},
    [179] = {.lex_state = 103},
    [180] = {.lex_state = 104, .external_tokens = 2},
    [181] = {.lex_state = 104, .external_tokens = 2},
    [182] = {.lex_state = 142},
    [183] = {.lex_state = 98},
    [184] = {.lex_state = 146},
    [185] = {.lex_state = 104, .external_tokens = 2},
    [186] = {.lex_state = 103},
    [187] = {.lex_state = 98},
    [188] = {.lex_state = 104, .external_tokens = 2},
    [189] = {.lex_state = 139},
    [190] = {.lex_state = 103},
    [191] = {.lex_state = 104, .external_tokens = 2},
    [192] = {.lex_state = 104, .external_tokens = 2},
    [193] = {.lex_state = 142},
    [194] = {.lex_state = 98},
    [195] = {.lex_state = 146},
    [196] = {.lex_state = 104, .external_tokens = 2},
    [197] = {.lex_state = 104, .external_tokens = 2},
    [198] = {.lex_state = 147},
    [199] = {.lex_state = 102},
    [200] = {.lex_state = 98},
    [201] = {.lex_state = 104, .external_tokens = 2},
    [202] = {.lex_state = 127},
    [203] = {.lex_state = 102},
    [204] = {.lex_state = 104, .external_tokens = 2},
    [205] = {.lex_state = 104, .external_tokens = 2},
    [206] = {.lex_state = 142},
    [207] = {.lex_state = 98},
    [208] = {.lex_state = 148},
    [209] = {.lex_state = 104, .external_tokens = 2},
    [210] = {.lex_state = 151, .external_tokens = 2},
    [211] = {.lex_state = 153, .external_tokens = 2},
    [212] = {.lex_state = 98},
    [213] = {.lex_state = 114},
    [214] = {.lex_state = 99, .external_tokens = 2},
    [215] = {.lex_state = 114},
    [216] = {.lex_state = 131},
    [217] = {.lex_state = 99, .external_tokens = 2},
    [218] = {.lex_state = 132},
    [219] = {.lex_state = 99, .external_tokens = 2},
    [220] = {.lex_state = 101},
    [221] = {.lex_state = 151, .external_tokens = 2},
    [222] = {.lex_state = 101},
    [223] = {.lex_state = 151, .external_tokens = 2},
    [224] = {.lex_state = 151, .external_tokens = 2},
    [225] = {.lex_state = 154},
    [226] = {.lex_state = 155, .external_tokens = 3},
    [227] = {.lex_state = 98},
    [228] = {.lex_state = 133},
    [229] = {.lex_state = 100},
    [230] = {.lex_state = 155, .external_tokens = 3},
    [231] = {.lex_state = 159, .external_tokens = 4},
    [232] = {.lex_state = 99, .external_tokens = 2},
    [233] = {.lex_state = 113, .external_tokens = 2},
    [234] = {.lex_state = 160, .external_tokens = 2},
    [235] = {.lex_state = 98},
    [236] = {.lex_state = 98},
    [237] = {.lex_state = 98},
    [238] = {.lex_state = 100},
    [239] = {.lex_state = 98},
    [240] = {.lex_state = 101},
    [241] = {.lex_state = 101},
    [242] = {.lex_state = 159, .external_tokens = 4},
    [243] = {.lex_state = 99, .external_tokens = 2},
    [244] = {.lex_state = 159, .external_tokens = 4},
    [245] = {.lex_state = 159, .external_tokens = 4},
    [246] = {.lex_state = 159, .external_tokens = 4},
    [247] = {.lex_state = 114},
    [248] = {.lex_state = 159, .external_tokens = 4},
    [249] = {.lex_state = 160, .external_tokens = 2},
    [250] = {.lex_state = 159, .external_tokens = 4},
    [251] = {.lex_state = 159, .external_tokens = 4},
    [252] = {.lex_state = 154},
    [253] = {.lex_state = 155, .external_tokens = 3},
    [254] = {.lex_state = 98},
    [255] = {.lex_state = 133},
    [256] = {.lex_state = 100},
    [257] = {.lex_state = 155, .external_tokens = 3},
    [258] = {.lex_state = 159, .external_tokens = 4},
    [259] = {.lex_state = 99, .external_tokens = 2},
    [260] = {.lex_state = 159, .external_tokens = 4},
    [261] = {.lex_state = 161, .external_tokens = 4},
    [262] = {.lex_state = 159, .external_tokens = 4},
    [263] = {.lex_state = 161, .external_tokens = 4},
    [264] = {.lex_state = 159, .external_tokens = 4},
    [265] = {.lex_state = 153},
    [266] = {.lex_state = 162},
    [267] = {.lex_state = 100},
    [268] = {.lex_state = 155, .external_tokens = 3},
    [269] = {.lex_state = 159, .external_tokens = 4},
    [270] = {.lex_state = 100},
    [271] = {.lex_state = 164},
    [272] = {.lex_state = 165},
    [273] = {.lex_state = 132},
    [274] = {.lex_state = 132},
    [275] = {.lex_state = 133},
    [276] = {.lex_state = 164},
    [277] = {.lex_state = 165},
    [278] = {.lex_state = 132},
    [279] = {.lex_state = 132},
    [280] = {.lex_state = 133},
    [281] = {.lex_state = 100},
    [282] = {.lex_state = 166},
    [283] = {.lex_state = 166},
    [284] = {.lex_state = 133},
    [285] = {.lex_state = 100},
    [286] = {.lex_state = 101},
    [287] = {.lex_state = 133},
    [288] = {.lex_state = 162},
    [289] = {.lex_state = 100},
    [290] = {.lex_state = 98},
    [291] = {.lex_state = 131},
    [292] = {.lex_state = 100},
    [293] = {.lex_state = 166},
    [294] = {.lex_state = 133},
    [295] = {.lex_state = 162},
    [296] = {.lex_state = 132},
    [297] = {.lex_state = 167},
    [298] = {.lex_state = 168},
    [299] = {.lex_state = 98},
    [300] = {.lex_state = 169},
    [301] = {.lex_state = 98},
    [302] = {.lex_state = 155, .external_tokens = 3},
    [303] = {.lex_state = 167},
    [304] = {.lex_state = 98},
    [305] = {.lex_state = 155, .external_tokens = 3},
    [306] = {.lex_state = 159, .external_tokens = 4},
    [307] = {.lex_state = 167},
    [308] = {.lex_state = 159, .external_tokens = 4},
    [309] = {.lex_state = 167},
    [310] = {.lex_state = 155, .external_tokens = 3},
    [311] = {.lex_state = 159, .external_tokens = 4},
    [312] = {.lex_state = 99, .external_tokens = 2},
    [313] = {.lex_state = 170},
    [314] = {.lex_state = 98},
    [315] = {.lex_state = 100},
    [316] = {.lex_state = 184, .external_tokens = 4},
    [317] = {.lex_state = 159, .external_tokens = 4},
    [318] = {.lex_state = 184, .external_tokens = 4},
    [319] = {.lex_state = 100},
    [320] = {.lex_state = 187, .external_tokens = 4},
    [321] = {.lex_state = 184, .external_tokens = 4},
    [322] = {.lex_state = 159, .external_tokens = 4},
    [323] = {.lex_state = 159, .external_tokens = 4},
    [324] = {.lex_state = 155, .external_tokens = 3},
    [325] = {.lex_state = 187, .external_tokens = 4},
    [326] = {.lex_state = 155, .external_tokens = 3},
    [327] = {.lex_state = 159, .external_tokens = 4},
    [328] = {.lex_state = 168},
    [329] = {.lex_state = 98},
    [330] = {.lex_state = 155, .external_tokens = 3},
    [331] = {.lex_state = 140},
    [332] = {.lex_state = 155, .external_tokens = 3},
    [333] = {.lex_state = 184, .external_tokens = 4},
    [334] = {.lex_state = 184, .external_tokens = 4},
    [335] = {.lex_state = 170},
    [336] = {.lex_state = 159, .external_tokens = 4},
    [337] = {.lex_state = 170},
    [338] = {.lex_state = 140},
    [339] = {.lex_state = 155, .external_tokens = 3},
    [340] = {.lex_state = 188, .external_tokens = 4},
    [341] = {.lex_state = 159, .external_tokens = 4},
    [342] = {.lex_state = 142},
    [343] = {.lex_state = 98},
    [344] = {.lex_state = 100},
    [345] = {.lex_state = 155, .external_tokens = 3},
    [346] = {.lex_state = 188, .external_tokens = 4},
    [347] = {.lex_state = 159, .external_tokens = 4},
    [348] = {.lex_state = 140},
    [349] = {.lex_state = 155, .external_tokens = 3},
    [350] = {.lex_state = 190, .external_tokens = 4},
    [351] = {.lex_state = 98},
    [352] = {.lex_state = 190, .external_tokens = 4},
    [353] = {.lex_state = 159, .external_tokens = 4},
    [354] = {.lex_state = 190, .external_tokens = 4},
    [355] = {.lex_state = 190, .external_tokens = 4},
    [356] = {.lex_state = 159, .external_tokens = 4},
    [357] = {.lex_state = 140},
    [358] = {.lex_state = 155, .external_tokens = 3},
    [359] = {.lex_state = 190, .external_tokens = 4},
    [360] = {.lex_state = 113, .external_tokens = 2},
    [361] = {.lex_state = 153},
    [362] = {.lex_state = 100},
    [363] = {.lex_state = 155, .external_tokens = 3},
    [364] = {.lex_state = 113, .external_tokens = 2},
    [365] = {.lex_state = 167},
    [366] = {.lex_state = 155, .external_tokens = 3},
    [367] = {.lex_state = 167},
    [368] = {.lex_state = 155, .external_tokens = 3},
    [369] = {.lex_state = 113, .external_tokens = 2},
    [370] = {.lex_state = 113, .external_tokens = 2},
    [371] = {.lex_state = 155, .external_tokens = 3},
    [372] = {.lex_state = 170},
    [373] = {.lex_state = 98},
    [374] = {.lex_state = 100},
    [375] = {.lex_state = 192, .external_tokens = 2},
    [376] = {.lex_state = 113, .external_tokens = 2},
    [377] = {.lex_state = 192, .external_tokens = 2},
    [378] = {.lex_state = 100},
    [379] = {.lex_state = 193, .external_tokens = 2},
    [380] = {.lex_state = 192, .external_tokens = 2},
    [381] = {.lex_state = 113, .external_tokens = 2},
    [382] = {.lex_state = 113, .external_tokens = 2},
    [383] = {.lex_state = 155, .external_tokens = 3},
    [384] = {.lex_state = 193, .external_tokens = 2},
    [385] = {.lex_state = 155, .external_tokens = 3},
    [386] = {.lex_state = 113, .external_tokens = 2},
    [387] = {.lex_state = 168},
    [388] = {.lex_state = 98},
    [389] = {.lex_state = 155, .external_tokens = 3},
    [390] = {.lex_state = 140},
    [391] = {.lex_state = 155, .external_tokens = 3},
    [392] = {.lex_state = 192, .external_tokens = 2},
    [393] = {.lex_state = 192, .external_tokens = 2},
    [394] = {.lex_state = 140},
    [395] = {.lex_state = 155, .external_tokens = 3},
    [396] = {.lex_state = 194, .external_tokens = 2},
    [397] = {.lex_state = 113, .external_tokens = 2},
    [398] = {.lex_state = 142},
    [399] = {.lex_state = 98},
    [400] = {.lex_state = 100},
    [401] = {.lex_state = 155, .external_tokens = 3},
    [402] = {.lex_state = 194, .external_tokens = 2},
    [403] = {.lex_state = 113, .external_tokens = 2},
    [404] = {.lex_state = 140},
    [405] = {.lex_state = 155, .external_tokens = 3},
    [406] = {.lex_state = 195, .external_tokens = 2},
    [407] = {.lex_state = 98},
    [408] = {.lex_state = 195, .external_tokens = 2},
    [409] = {.lex_state = 113, .external_tokens = 2},
    [410] = {.lex_state = 195, .external_tokens = 2},
    [411] = {.lex_state = 195, .external_tokens = 2},
    [412] = {.lex_state = 113, .external_tokens = 2},
    [413] = {.lex_state = 140},
    [414] = {.lex_state = 155, .external_tokens = 3},
    [415] = {.lex_state = 195, .external_tokens = 2},
    [416] = {.lex_state = 99, .external_tokens = 2},
    [417] = {.lex_state = 150, .external_tokens = 2},
    [418] = {.lex_state = 98},
    [419] = {.lex_state = 196, .external_tokens = 2},
    [420] = {.lex_state = 98},
    [421] = {.lex_state = 150, .external_tokens = 2},
    [422] = {.lex_state = 150, .external_tokens = 2},
    [423] = {.lex_state = 99, .external_tokens = 2},
    [424] = {.lex_state = 150, .external_tokens = 2},
    [425] = {.lex_state = 196, .external_tokens = 2},
    [426] = {.lex_state = 197},
    [427] = {.lex_state = 98},
    [428] = {.lex_state = 155, .external_tokens = 3},
    [429] = {.lex_state = 98},
    [430] = {.lex_state = 100},
    [431] = {.lex_state = 98},
    [432] = {.lex_state = 98},
    [433] = {.lex_state = 98},
    [434] = {.lex_state = 100},
    [435] = {.lex_state = 98},
    [436] = {.lex_state = 98},
    [437] = {.lex_state = 100},
    [438] = {.lex_state = 98},
    [439] = {.lex_state = 101},
    [440] = {.lex_state = 136},
    [441] = {.lex_state = 104, .external_tokens = 2},
    [442] = {.lex_state = 98},
    [443] = {.lex_state = 198},
    [444] = {.lex_state = 101},
    [445] = {.lex_state = 101},
    [446] = {.lex_state = 98},
    [447] = {.lex_state = 129},
    [448] = {.lex_state = 127},
    [449] = {.lex_state = 104, .external_tokens = 2},
    [450] = {.lex_state = 104, .external_tokens = 2},
    [451] = {.lex_state = 199, .external_tokens = 2},
    [452] = {.lex_state = 160, .external_tokens = 5},
    [453] = {.lex_state = 159, .external_tokens = 4},
    [454] = {.lex_state = 160, .external_tokens = 5},
    [455] = {.lex_state = 113, .external_tokens = 5},
    [456] = {.lex_state = 99, .external_tokens = 2},
    [457] = {.lex_state = 113, .external_tokens = 5},
    [458] = {.lex_state = 113, .external_tokens = 5},
    [459] = {.lex_state = 195, .external_tokens = 5},
    [460] = {.lex_state = 193, .external_tokens = 5},
    [461] = {.lex_state = 192, .external_tokens = 5},
    [462] = {.lex_state = 113, .external_tokens = 5},
    [463] = {.lex_state = 167},
    [464] = {.lex_state = 113, .external_tokens = 5},
    [465] = {.lex_state = 100},
    [466] = {.lex_state = 132},
    [467] = {.lex_state = 132},
    [468] = {.lex_state = 133},
    [469] = {.lex_state = 114},
    [470] = {.lex_state = 160, .external_tokens = 5},
    [471] = {.lex_state = 200, .external_tokens = 2},
    [472] = {.lex_state = 104, .external_tokens = 2},
    [473] = {.lex_state = 132},
    [474] = {.lex_state = 132},
    [475] = {.lex_state = 133},
    [476] = {.lex_state = 138},
    [477] = {.lex_state = 113, .external_tokens = 5},
    [478] = {.lex_state = 201, .external_tokens = 2},
    [479] = {.lex_state = 195, .external_tokens = 5},
    [480] = {.lex_state = 192, .external_tokens = 5},
    [481] = {.lex_state = 167},
    [482] = {.lex_state = 114},
    [483] = {.lex_state = 132},
    [484] = {.lex_state = 134},
    [485] = {.lex_state = 104, .external_tokens = 2},
    [486] = {.lex_state = 133},
    [487] = {.lex_state = 104, .external_tokens = 2},
    [488] = {.lex_state = 113, .external_tokens = 5},
    [489] = {.lex_state = 155, .external_tokens = 3},
    [490] = {.lex_state = 99, .external_tokens = 2},
    [491] = {.lex_state = 113, .external_tokens = 5},
    [492] = {.lex_state = 160, .external_tokens = 5},
    [493] = {.lex_state = 159, .external_tokens = 4},
    [494] = {.lex_state = 160, .external_tokens = 5},
    [495] = {.lex_state = 193, .external_tokens = 5},
    [496] = {.lex_state = 192, .external_tokens = 5},
    [497] = {.lex_state = 113, .external_tokens = 5},
    [498] = {.lex_state = 113, .external_tokens = 5},
    [499] = {.lex_state = 195, .external_tokens = 5},
    [500] = {.lex_state = 113, .external_tokens = 5},
    [501] = {.lex_state = 155, .external_tokens = 3},
    [502] = {.lex_state = 193, .external_tokens = 5},
    [503] = {.lex_state = 202},
    [504] = {.lex_state = 145, .external_tokens = 2},
    [505] = {.lex_state = 98},
    [506] = {.lex_state = 145, .external_tokens = 2},
    [507] = {.lex_state = 98},
    [508] = {.lex_state = 113, .external_tokens = 5},
    [509] = {.lex_state = 99, .external_tokens = 2},
    [510] = {.lex_state = 113, .external_tokens = 5},
    [511] = {.lex_state = 142},
    [512] = {.lex_state = 98},
    [513] = {.lex_state = 100},
    [514] = {.lex_state = 155, .external_tokens = 3},
    [515] = {.lex_state = 194, .external_tokens = 5},
    [516] = {.lex_state = 113, .external_tokens = 5},
    [517] = {.lex_state = 104, .external_tokens = 2},
    [518] = {.lex_state = 134},
    [519] = {.lex_state = 104, .external_tokens = 2},
    [520] = {.lex_state = 133},
    [521] = {.lex_state = 104, .external_tokens = 2},
    [522] = {.lex_state = 136},
    [523] = {.lex_state = 197},
    [524] = {.lex_state = 155, .external_tokens = 3},
    [525] = {.lex_state = 98},
    [526] = {.lex_state = 104, .external_tokens = 2},
    [527] = {.lex_state = 104, .external_tokens = 2},
    [528] = {.lex_state = 104, .external_tokens = 2},
    [529] = {.lex_state = 142},
    [530] = {.lex_state = 98},
    [531] = {.lex_state = 203},
    [532] = {.lex_state = 98},
    [533] = {.lex_state = 203},
    [534] = {.lex_state = 160, .external_tokens = 5},
    [535] = {.lex_state = 141, .external_tokens = 2},
    [536] = {.lex_state = 98},
    [537] = {.lex_state = 141, .external_tokens = 2},
    [538] = {.lex_state = 195, .external_tokens = 5},
    [539] = {.lex_state = 113, .external_tokens = 5},
    [540] = {.lex_state = 104, .external_tokens = 2},
    [541] = {.lex_state = 145, .external_tokens = 2},
    [542] = {.lex_state = 155, .external_tokens = 3},
    [543] = {.lex_state = 192, .external_tokens = 5},
    [544] = {.lex_state = 100},
    [545] = {.lex_state = 155, .external_tokens = 3},
    [546] = {.lex_state = 113, .external_tokens = 5},
    [547] = {.lex_state = 113, .external_tokens = 5},
    [548] = {.lex_state = 192, .external_tokens = 5},
    [549] = {.lex_state = 113, .external_tokens = 5},
    [550] = {.lex_state = 100},
    [551] = {.lex_state = 166},
    [552] = {.lex_state = 100},
    [553] = {.lex_state = 133},
    [554] = {.lex_state = 100},
    [555] = {.lex_state = 162},
    [556] = {.lex_state = 100},
    [557] = {.lex_state = 155, .external_tokens = 3},
    [558] = {.lex_state = 113, .external_tokens = 5},
    [559] = {.lex_state = 155, .external_tokens = 3},
    [560] = {.lex_state = 113, .external_tokens = 5},
    [561] = {.lex_state = 160, .external_tokens = 5},
    [562] = {.lex_state = 155, .external_tokens = 3},
    [563] = {.lex_state = 204},
    [564] = {.lex_state = 130},
    [565] = {.lex_state = 133},
    [566] = {.lex_state = 113, .external_tokens = 5},
    [567] = {.lex_state = 147},
    [568] = {.lex_state = 129},
    [569] = {.lex_state = 104, .external_tokens = 2},
    [570] = {.lex_state = 128},
    [571] = {.lex_state = 104, .external_tokens = 2},
    [572] = {.lex_state = 151, .external_tokens = 2},
    [573] = {.lex_state = 154},
    [574] = {.lex_state = 98},
    [575] = {.lex_state = 131},
    [576] = {.lex_state = 131},
    [577] = {.lex_state = 198},
    [578] = {.lex_state = 130},
    [579] = {.lex_state = 131},
    [580] = {.lex_state = 136},
    [581] = {.lex_state = 104, .external_tokens = 2},
    [582] = {.lex_state = 132},
    [583] = {.lex_state = 131},
    [584] = {.lex_state = 153},
    [585] = {.lex_state = 167},
    [586] = {.lex_state = 155, .external_tokens = 3},
    [587] = {.lex_state = 113, .external_tokens = 5},
    [588] = {.lex_state = 169},
    [589] = {.lex_state = 168},
    [590] = {.lex_state = 98},
    [591] = {.lex_state = 155, .external_tokens = 3},
    [592] = {.lex_state = 140},
    [593] = {.lex_state = 192, .external_tokens = 5},
    [594] = {.lex_state = 155, .external_tokens = 3},
    [595] = {.lex_state = 170},
    [596] = {.lex_state = 140},
    [597] = {.lex_state = 155, .external_tokens = 3},
    [598] = {.lex_state = 194, .external_tokens = 5},
    [599] = {.lex_state = 113, .external_tokens = 5},
    [600] = {.lex_state = 205},
    [601] = {.lex_state = 98},
    [602] = {.lex_state = 104, .external_tokens = 2},
    [603] = {.lex_state = 205},
    [604] = {.lex_state = 142},
    [605] = {.lex_state = 140},
    [606] = {.lex_state = 155, .external_tokens = 3},
    [607] = {.lex_state = 195, .external_tokens = 5},
    [608] = {.lex_state = 140},
    [609] = {.lex_state = 155, .external_tokens = 3},
    [610] = {.lex_state = 195, .external_tokens = 5},
    [611] = {.lex_state = 113, .external_tokens = 5},
    [612] = {.lex_state = 104, .external_tokens = 2},
    [613] = {.lex_state = 127},
    [614] = {.lex_state = 104, .external_tokens = 2},
    [615] = {.lex_state = 104, .external_tokens = 2},
    [616] = {.lex_state = 206, .external_tokens = 2},
    [617] = {.lex_state = 167},
    [618] = {.lex_state = 207, .external_tokens = 2},
    [619] = {.lex_state = 132},
    [620] = {.lex_state = 133},
    [621] = {.lex_state = 139},
    [622] = {.lex_state = 104, .external_tokens = 2},
    [623] = {.lex_state = 155, .external_tokens = 3},
    [624] = {.lex_state = 98},
    [625] = {.lex_state = 207, .external_tokens = 2},
    [626] = {.lex_state = 208, .external_tokens = 2},
    [627] = {.lex_state = 98},
    [628] = {.lex_state = 208, .external_tokens = 2},
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
        [sym__statement] = STATE(455),
        [sym__simple_statement] = STATE(456),
        [sym_print_statement] = STATE(5),
        [sym_expression_statement] = STATE(5),
        [sym_return_statement] = STATE(5),
        [sym_delete_statement] = STATE(5),
        [sym__compound_statement] = STATE(457),
        [sym_if_statement] = STATE(458),
        [sym_elif_clause] = STATE(459),
        [sym_else_clause] = STATE(460),
        [sym_for_statement] = STATE(458),
        [sym_while_statement] = STATE(458),
        [sym_try_statement] = STATE(458),
        [sym_except_clause] = STATE(461),
        [sym_finally_clause] = STATE(462),
        [sym_with_statement] = STATE(458),
        [sym_with_item] = STATE(463),
        [sym_function_definition] = STATE(464),
        [sym_parameters] = STATE(465),
        [sym_default_parameter] = STATE(466),
        [sym_list_splat_parameter] = STATE(467),
        [sym_dictionary_splat_parameter] = STATE(468),
        [sym_class_definition] = STATE(464),
        [sym_decorated_definition] = STATE(458),
        [sym_decorator] = STATE(469),
        [sym__suite] = STATE(470),
        [sym_arguments] = STATE(214),
        [sym_expression_list] = STATE(471),
        [sym_dotted_name] = STATE(211),
        [sym__expression] = STATE(472),
        [sym_binary_operator] = STATE(16),
        [sym_subscript] = STATE(16),
        [sym_call] = STATE(16),
        [sym_keyword_argument] = STATE(473),
        [sym_list_splat_argument] = STATE(474),
        [sym_dictionary_splat_argument] = STATE(475),
        [sym_list] = STATE(16),
        [sym_list_comprehension] = STATE(16),
        [sym_dictionary] = STATE(16),
        [sym_dictionary_comprehension] = STATE(16),
        [sym_pair] = STATE(476),
        [sym_set] = STATE(16),
        [sym_set_comprehension] = STATE(16),
        [aux_sym_module_repeat1] = STATE(477),
        [aux_sym_print_statement_repeat1] = STATE(478),
        [aux_sym_if_statement_repeat1] = STATE(479),
        [aux_sym_try_statement_repeat1] = STATE(480),
        [aux_sym_with_statement_repeat1] = STATE(481),
        [aux_sym_parameters_repeat1] = STATE(276),
        [aux_sym_decorated_definition_repeat1] = STATE(482),
        [aux_sym_dotted_name_repeat1] = STATE(221),
        [aux_sym_subscript_repeat1] = STATE(43),
        [aux_sym_call_repeat1] = STATE(150),
        [aux_sym_call_repeat2] = STATE(483),
        [aux_sym_dictionary_repeat1] = STATE(178),
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
        [anon_sym_LBRACK] = ACTIONS(57),
        [anon_sym_DOT_DOT_DOT] = ACTIONS(59),
        [anon_sym_RBRACK] = ACTIONS(61),
        [anon_sym_STAR_STAR] = ACTIONS(63),
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
        [sym__expression] = STATE(424),
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
        [sym_expression_list] = STATE(423),
        [sym__expression] = STATE(417),
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
        [sym_expression_list] = STATE(416),
        [sym__expression] = STATE(417),
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
        [sym__expression] = STATE(404),
        [sym_binary_operator] = STATE(36),
        [sym_subscript] = STATE(36),
        [sym_call] = STATE(36),
        [sym_list] = STATE(36),
        [sym_list_comprehension] = STATE(36),
        [sym_dictionary] = STATE(36),
        [sym_dictionary_comprehension] = STATE(36),
        [sym_set] = STATE(36),
        [sym_set_comprehension] = STATE(36),
        [anon_sym_LBRACK] = ACTIONS(117),
        [anon_sym_LBRACE] = ACTIONS(119),
        [sym_number] = ACTIONS(121),
        [sym_identifier] = ACTIONS(121),
        [sym_comment] = ACTIONS(73),
    },
    [7] = {
        [sym_expression_list] = STATE(398),
        [sym__expression] = STATE(109),
        [sym_binary_operator] = STATE(36),
        [sym_subscript] = STATE(36),
        [sym_call] = STATE(36),
        [sym_list] = STATE(36),
        [sym_list_comprehension] = STATE(36),
        [sym_dictionary] = STATE(36),
        [sym_dictionary_comprehension] = STATE(36),
        [sym_set] = STATE(36),
        [sym_set_comprehension] = STATE(36),
        [anon_sym_LBRACK] = ACTIONS(117),
        [anon_sym_LBRACE] = ACTIONS(119),
        [sym_number] = ACTIONS(121),
        [sym_identifier] = ACTIONS(121),
        [sym_comment] = ACTIONS(73),
    },
    [8] = {
        [sym__expression] = STATE(394),
        [sym_binary_operator] = STATE(36),
        [sym_subscript] = STATE(36),
        [sym_call] = STATE(36),
        [sym_list] = STATE(36),
        [sym_list_comprehension] = STATE(36),
        [sym_dictionary] = STATE(36),
        [sym_dictionary_comprehension] = STATE(36),
        [sym_set] = STATE(36),
        [sym_set_comprehension] = STATE(36),
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
        [sym_with_item] = STATE(365),
        [sym__expression] = STATE(298),
        [sym_binary_operator] = STATE(36),
        [sym_subscript] = STATE(36),
        [sym_call] = STATE(36),
        [sym_list] = STATE(36),
        [sym_list_comprehension] = STATE(36),
        [sym_dictionary] = STATE(36),
        [sym_dictionary_comprehension] = STATE(36),
        [sym_set] = STATE(36),
        [sym_set_comprehension] = STATE(36),
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
        [sym_dotted_name] = STATE(211),
        [sym_identifier] = ACTIONS(129),
        [sym_comment] = ACTIONS(73),
    },
    [14] = {
        [sym__expression] = STATE(198),
        [sym_binary_operator] = STATE(36),
        [sym_subscript] = STATE(36),
        [sym_call] = STATE(36),
        [sym_list] = STATE(36),
        [sym_list_comprehension] = STATE(36),
        [sym_dictionary] = STATE(36),
        [sym_dictionary_comprehension] = STATE(36),
        [sym_set] = STATE(36),
        [sym_set_comprehension] = STATE(36),
        [anon_sym_LBRACK] = ACTIONS(117),
        [anon_sym_RBRACK] = ACTIONS(131),
        [anon_sym_LBRACE] = ACTIONS(119),
        [sym_number] = ACTIONS(121),
        [sym_identifier] = ACTIONS(121),
        [sym_comment] = ACTIONS(73),
    },
    [15] = {
        [sym__expression] = STATE(173),
        [sym_binary_operator] = STATE(36),
        [sym_subscript] = STATE(36),
        [sym_call] = STATE(36),
        [sym_list] = STATE(36),
        [sym_list_comprehension] = STATE(36),
        [sym_dictionary] = STATE(36),
        [sym_dictionary_comprehension] = STATE(36),
        [sym_pair] = STATE(174),
        [sym_set] = STATE(36),
        [sym_set_comprehension] = STATE(36),
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
        [anon_sym_PLUS] = ACTIONS(135),
        [anon_sym_LBRACK] = ACTIONS(135),
        [anon_sym_RBRACK] = ACTIONS(135),
        [anon_sym_RBRACE] = ACTIONS(135),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(135),
    },
    [17] = {
        [ts_builtin_sym_end] = ACTIONS(137),
        [sym_comment] = ACTIONS(73),
    },
    [18] = {
        [ts_builtin_sym_end] = ACTIONS(139),
        [anon_sym_SEMI] = ACTIONS(139),
        [anon_sym_print] = ACTIONS(141),
        [anon_sym_return] = ACTIONS(141),
        [anon_sym_del] = ACTIONS(141),
        [sym_pass_statement] = ACTIONS(141),
        [sym_break_statement] = ACTIONS(141),
        [sym_continue_statement] = ACTIONS(141),
        [anon_sym_if] = ACTIONS(141),
        [anon_sym_for] = ACTIONS(141),
        [anon_sym_while] = ACTIONS(141),
        [anon_sym_try] = ACTIONS(141),
        [anon_sym_with] = ACTIONS(141),
        [anon_sym_def] = ACTIONS(141),
        [anon_sym_class] = ACTIONS(141),
        [anon_sym_AT] = ACTIONS(139),
        [anon_sym_LBRACK] = ACTIONS(139),
        [anon_sym_LBRACE] = ACTIONS(139),
        [sym_number] = ACTIONS(141),
        [sym_identifier] = ACTIONS(143),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(139),
    },
    [19] = {
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(145),
    },
    [20] = {
        [ts_builtin_sym_end] = ACTIONS(147),
        [anon_sym_SEMI] = ACTIONS(147),
        [anon_sym_print] = ACTIONS(149),
        [anon_sym_return] = ACTIONS(149),
        [anon_sym_del] = ACTIONS(149),
        [sym_pass_statement] = ACTIONS(149),
        [sym_break_statement] = ACTIONS(149),
        [sym_continue_statement] = ACTIONS(149),
        [anon_sym_if] = ACTIONS(149),
        [anon_sym_for] = ACTIONS(149),
        [anon_sym_while] = ACTIONS(149),
        [anon_sym_try] = ACTIONS(149),
        [anon_sym_with] = ACTIONS(149),
        [anon_sym_def] = ACTIONS(149),
        [anon_sym_class] = ACTIONS(149),
        [anon_sym_AT] = ACTIONS(147),
        [anon_sym_LBRACK] = ACTIONS(147),
        [anon_sym_LBRACE] = ACTIONS(147),
        [sym_number] = ACTIONS(149),
        [sym_identifier] = ACTIONS(151),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(147),
    },
    [21] = {
        [ts_builtin_sym_end] = ACTIONS(153),
        [anon_sym_SEMI] = ACTIONS(153),
        [anon_sym_print] = ACTIONS(155),
        [anon_sym_return] = ACTIONS(155),
        [anon_sym_del] = ACTIONS(155),
        [sym_pass_statement] = ACTIONS(155),
        [sym_break_statement] = ACTIONS(155),
        [sym_continue_statement] = ACTIONS(155),
        [anon_sym_if] = ACTIONS(155),
        [anon_sym_for] = ACTIONS(155),
        [anon_sym_while] = ACTIONS(155),
        [anon_sym_try] = ACTIONS(155),
        [anon_sym_with] = ACTIONS(155),
        [anon_sym_def] = ACTIONS(155),
        [anon_sym_class] = ACTIONS(155),
        [anon_sym_AT] = ACTIONS(153),
        [anon_sym_LBRACK] = ACTIONS(153),
        [anon_sym_LBRACE] = ACTIONS(153),
        [sym_number] = ACTIONS(155),
        [sym_identifier] = ACTIONS(157),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(153),
    },
    [22] = {
        [anon_sym_def] = ACTIONS(159),
        [anon_sym_class] = ACTIONS(159),
        [anon_sym_AT] = ACTIONS(159),
        [sym_comment] = ACTIONS(73),
    },
    [23] = {
        [anon_sym_LPAREN] = ACTIONS(161),
        [anon_sym_PLUS] = ACTIONS(163),
        [anon_sym_LBRACK] = ACTIONS(165),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(167),
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
        [ts_builtin_sym_end] = ACTIONS(169),
        [anon_sym_SEMI] = ACTIONS(171),
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
        [sym__newline] = ACTIONS(171),
    },
    [25] = {
        [sym_function_definition] = STATE(26),
        [sym_class_definition] = STATE(26),
        [sym_decorator] = STATE(27),
        [anon_sym_def] = ACTIONS(173),
        [anon_sym_class] = ACTIONS(175),
        [anon_sym_AT] = ACTIONS(105),
        [sym_comment] = ACTIONS(73),
    },
    [26] = {
        [ts_builtin_sym_end] = ACTIONS(177),
        [anon_sym_SEMI] = ACTIONS(177),
        [anon_sym_print] = ACTIONS(179),
        [anon_sym_return] = ACTIONS(179),
        [anon_sym_del] = ACTIONS(179),
        [sym_pass_statement] = ACTIONS(179),
        [sym_break_statement] = ACTIONS(179),
        [sym_continue_statement] = ACTIONS(179),
        [anon_sym_if] = ACTIONS(179),
        [anon_sym_for] = ACTIONS(179),
        [anon_sym_while] = ACTIONS(179),
        [anon_sym_try] = ACTIONS(179),
        [anon_sym_with] = ACTIONS(179),
        [anon_sym_def] = ACTIONS(179),
        [anon_sym_class] = ACTIONS(179),
        [anon_sym_AT] = ACTIONS(177),
        [anon_sym_LBRACK] = ACTIONS(177),
        [anon_sym_LBRACE] = ACTIONS(177),
        [sym_number] = ACTIONS(179),
        [sym_identifier] = ACTIONS(181),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(177),
    },
    [27] = {
        [anon_sym_def] = ACTIONS(183),
        [anon_sym_class] = ACTIONS(183),
        [anon_sym_AT] = ACTIONS(183),
        [sym_comment] = ACTIONS(73),
    },
    [28] = {
        [ts_builtin_sym_end] = ACTIONS(185),
        [sym_comment] = ACTIONS(73),
    },
    [29] = {
        [ts_builtin_sym_end] = ACTIONS(187),
        [anon_sym_SEMI] = ACTIONS(187),
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
        [anon_sym_LBRACK] = ACTIONS(187),
        [anon_sym_LBRACE] = ACTIONS(187),
        [sym_number] = ACTIONS(189),
        [sym_identifier] = ACTIONS(191),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(187),
    },
    [30] = {
        [sym__expression] = STATE(146),
        [sym_binary_operator] = STATE(36),
        [sym_subscript] = STATE(36),
        [sym_call] = STATE(36),
        [sym_keyword_argument] = STATE(147),
        [sym_list_splat_argument] = STATE(148),
        [sym_dictionary_splat_argument] = STATE(149),
        [sym_list] = STATE(36),
        [sym_list_comprehension] = STATE(36),
        [sym_dictionary] = STATE(36),
        [sym_dictionary_comprehension] = STATE(36),
        [sym_set] = STATE(36),
        [sym_set_comprehension] = STATE(36),
        [aux_sym_call_repeat1] = STATE(150),
        [anon_sym_STAR] = ACTIONS(193),
        [anon_sym_LBRACK] = ACTIONS(117),
        [anon_sym_STAR_STAR] = ACTIONS(195),
        [anon_sym_LBRACE] = ACTIONS(119),
        [sym_number] = ACTIONS(121),
        [sym_identifier] = ACTIONS(197),
        [sym_comment] = ACTIONS(73),
    },
    [31] = {
        [sym__expression] = STATE(145),
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
        [sym__expression] = STATE(37),
        [sym_binary_operator] = STATE(36),
        [sym_subscript] = STATE(36),
        [sym_call] = STATE(36),
        [sym_list] = STATE(36),
        [sym_list_comprehension] = STATE(36),
        [sym_dictionary] = STATE(36),
        [sym_dictionary_comprehension] = STATE(36),
        [sym_set] = STATE(36),
        [sym_set_comprehension] = STATE(36),
        [anon_sym_LBRACK] = ACTIONS(117),
        [anon_sym_DOT_DOT_DOT] = ACTIONS(199),
        [anon_sym_LBRACE] = ACTIONS(119),
        [sym_number] = ACTIONS(121),
        [sym_identifier] = ACTIONS(121),
        [sym_comment] = ACTIONS(73),
    },
    [33] = {
        [sym__expression] = STATE(131),
        [sym_binary_operator] = STATE(36),
        [sym_subscript] = STATE(36),
        [sym_call] = STATE(36),
        [sym_list] = STATE(36),
        [sym_list_comprehension] = STATE(36),
        [sym_dictionary] = STATE(36),
        [sym_dictionary_comprehension] = STATE(36),
        [sym_set] = STATE(36),
        [sym_set_comprehension] = STATE(36),
        [anon_sym_LBRACK] = ACTIONS(117),
        [anon_sym_RBRACK] = ACTIONS(201),
        [anon_sym_LBRACE] = ACTIONS(119),
        [sym_number] = ACTIONS(121),
        [sym_identifier] = ACTIONS(121),
        [sym_comment] = ACTIONS(73),
    },
    [34] = {
        [aux_sym_subscript_repeat1] = STATE(43),
        [anon_sym_COMMA] = ACTIONS(203),
        [anon_sym_RBRACK] = ACTIONS(205),
        [sym_comment] = ACTIONS(73),
    },
    [35] = {
        [sym__expression] = STATE(95),
        [sym_binary_operator] = STATE(36),
        [sym_subscript] = STATE(36),
        [sym_call] = STATE(36),
        [sym_list] = STATE(36),
        [sym_list_comprehension] = STATE(36),
        [sym_dictionary] = STATE(36),
        [sym_dictionary_comprehension] = STATE(36),
        [sym_pair] = STATE(96),
        [sym_set] = STATE(36),
        [sym_set_comprehension] = STATE(36),
        [anon_sym_LBRACK] = ACTIONS(117),
        [anon_sym_LBRACE] = ACTIONS(119),
        [anon_sym_RBRACE] = ACTIONS(207),
        [sym_number] = ACTIONS(121),
        [sym_identifier] = ACTIONS(121),
        [sym_comment] = ACTIONS(73),
    },
    [36] = {
        [anon_sym_COMMA] = ACTIONS(135),
        [anon_sym_COLON] = ACTIONS(135),
        [anon_sym_for] = ACTIONS(135),
        [anon_sym_in] = ACTIONS(135),
        [anon_sym_as] = ACTIONS(135),
        [anon_sym_LPAREN] = ACTIONS(135),
        [anon_sym_RPAREN] = ACTIONS(135),
        [anon_sym_PLUS] = ACTIONS(135),
        [anon_sym_LBRACK] = ACTIONS(135),
        [anon_sym_RBRACK] = ACTIONS(135),
        [anon_sym_RBRACE] = ACTIONS(135),
        [sym_comment] = ACTIONS(73),
    },
    [37] = {
        [aux_sym_subscript_repeat1] = STATE(43),
        [anon_sym_COMMA] = ACTIONS(203),
        [anon_sym_LPAREN] = ACTIONS(209),
        [anon_sym_PLUS] = ACTIONS(211),
        [anon_sym_LBRACK] = ACTIONS(213),
        [anon_sym_RBRACK] = ACTIONS(205),
        [sym_comment] = ACTIONS(73),
    },
    [38] = {
        [sym__expression] = STATE(58),
        [sym_binary_operator] = STATE(36),
        [sym_subscript] = STATE(36),
        [sym_call] = STATE(36),
        [sym_list] = STATE(36),
        [sym_list_comprehension] = STATE(36),
        [sym_dictionary] = STATE(36),
        [sym_dictionary_comprehension] = STATE(36),
        [sym_set] = STATE(36),
        [sym_set_comprehension] = STATE(36),
        [anon_sym_LBRACK] = ACTIONS(117),
        [anon_sym_DOT_DOT_DOT] = ACTIONS(215),
        [anon_sym_RBRACK] = ACTIONS(217),
        [anon_sym_LBRACE] = ACTIONS(119),
        [sym_number] = ACTIONS(121),
        [sym_identifier] = ACTIONS(121),
        [sym_comment] = ACTIONS(73),
    },
    [39] = {
        [sym__expression] = STATE(63),
        [sym_binary_operator] = STATE(36),
        [sym_subscript] = STATE(36),
        [sym_call] = STATE(36),
        [sym_keyword_argument] = STATE(64),
        [sym_list_splat_argument] = STATE(65),
        [sym_dictionary_splat_argument] = STATE(66),
        [sym_list] = STATE(36),
        [sym_list_comprehension] = STATE(36),
        [sym_dictionary] = STATE(36),
        [sym_dictionary_comprehension] = STATE(36),
        [sym_set] = STATE(36),
        [sym_set_comprehension] = STATE(36),
        [aux_sym_call_repeat1] = STATE(67),
        [anon_sym_STAR] = ACTIONS(193),
        [anon_sym_LBRACK] = ACTIONS(117),
        [anon_sym_STAR_STAR] = ACTIONS(195),
        [anon_sym_LBRACE] = ACTIONS(119),
        [sym_number] = ACTIONS(121),
        [sym_identifier] = ACTIONS(197),
        [sym_comment] = ACTIONS(73),
    },
    [40] = {
        [sym__expression] = STATE(59),
        [sym_binary_operator] = STATE(36),
        [sym_subscript] = STATE(36),
        [sym_call] = STATE(36),
        [sym_list] = STATE(36),
        [sym_list_comprehension] = STATE(36),
        [sym_dictionary] = STATE(36),
        [sym_dictionary_comprehension] = STATE(36),
        [sym_set] = STATE(36),
        [sym_set_comprehension] = STATE(36),
        [anon_sym_LBRACK] = ACTIONS(117),
        [anon_sym_LBRACE] = ACTIONS(119),
        [sym_number] = ACTIONS(121),
        [sym_identifier] = ACTIONS(121),
        [sym_comment] = ACTIONS(73),
    },
    [41] = {
        [sym__expression] = STATE(50),
        [sym_binary_operator] = STATE(36),
        [sym_subscript] = STATE(36),
        [sym_call] = STATE(36),
        [sym_list] = STATE(36),
        [sym_list_comprehension] = STATE(36),
        [sym_dictionary] = STATE(36),
        [sym_dictionary_comprehension] = STATE(36),
        [sym_set] = STATE(36),
        [sym_set_comprehension] = STATE(36),
        [anon_sym_LBRACK] = ACTIONS(117),
        [anon_sym_DOT_DOT_DOT] = ACTIONS(219),
        [anon_sym_LBRACE] = ACTIONS(119),
        [sym_number] = ACTIONS(121),
        [sym_identifier] = ACTIONS(121),
        [sym_comment] = ACTIONS(73),
    },
    [42] = {
        [anon_sym_COMMA] = ACTIONS(221),
        [anon_sym_COLON] = ACTIONS(221),
        [anon_sym_for] = ACTIONS(221),
        [anon_sym_in] = ACTIONS(221),
        [anon_sym_as] = ACTIONS(221),
        [anon_sym_LPAREN] = ACTIONS(221),
        [anon_sym_RPAREN] = ACTIONS(221),
        [anon_sym_PLUS] = ACTIONS(221),
        [anon_sym_LBRACK] = ACTIONS(221),
        [anon_sym_RBRACK] = ACTIONS(221),
        [anon_sym_RBRACE] = ACTIONS(221),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(221),
    },
    [43] = {
        [anon_sym_COMMA] = ACTIONS(223),
        [anon_sym_RBRACK] = ACTIONS(217),
        [sym_comment] = ACTIONS(73),
    },
    [44] = {
        [sym__expression] = STATE(48),
        [sym_binary_operator] = STATE(36),
        [sym_subscript] = STATE(36),
        [sym_call] = STATE(36),
        [sym_list] = STATE(36),
        [sym_list_comprehension] = STATE(36),
        [sym_dictionary] = STATE(36),
        [sym_dictionary_comprehension] = STATE(36),
        [sym_set] = STATE(36),
        [sym_set_comprehension] = STATE(36),
        [anon_sym_LBRACK] = ACTIONS(117),
        [anon_sym_DOT_DOT_DOT] = ACTIONS(225),
        [anon_sym_RBRACK] = ACTIONS(227),
        [anon_sym_LBRACE] = ACTIONS(119),
        [sym_number] = ACTIONS(121),
        [sym_identifier] = ACTIONS(121),
        [sym_comment] = ACTIONS(73),
    },
    [45] = {
        [anon_sym_COMMA] = ACTIONS(229),
        [anon_sym_COLON] = ACTIONS(229),
        [anon_sym_for] = ACTIONS(229),
        [anon_sym_in] = ACTIONS(229),
        [anon_sym_as] = ACTIONS(229),
        [anon_sym_LPAREN] = ACTIONS(229),
        [anon_sym_RPAREN] = ACTIONS(229),
        [anon_sym_PLUS] = ACTIONS(229),
        [anon_sym_LBRACK] = ACTIONS(229),
        [anon_sym_RBRACK] = ACTIONS(229),
        [anon_sym_RBRACE] = ACTIONS(229),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(229),
    },
    [46] = {
        [anon_sym_COMMA] = ACTIONS(231),
        [anon_sym_RBRACK] = ACTIONS(231),
        [sym_comment] = ACTIONS(73),
    },
    [47] = {
        [anon_sym_COMMA] = ACTIONS(233),
        [anon_sym_COLON] = ACTIONS(233),
        [anon_sym_for] = ACTIONS(233),
        [anon_sym_in] = ACTIONS(233),
        [anon_sym_as] = ACTIONS(233),
        [anon_sym_LPAREN] = ACTIONS(233),
        [anon_sym_RPAREN] = ACTIONS(233),
        [anon_sym_PLUS] = ACTIONS(233),
        [anon_sym_LBRACK] = ACTIONS(233),
        [anon_sym_RBRACK] = ACTIONS(233),
        [anon_sym_RBRACE] = ACTIONS(233),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(233),
    },
    [48] = {
        [anon_sym_COMMA] = ACTIONS(231),
        [anon_sym_LPAREN] = ACTIONS(209),
        [anon_sym_PLUS] = ACTIONS(211),
        [anon_sym_LBRACK] = ACTIONS(213),
        [anon_sym_RBRACK] = ACTIONS(231),
        [sym_comment] = ACTIONS(73),
    },
    [49] = {
        [aux_sym_subscript_repeat1] = STATE(53),
        [anon_sym_COMMA] = ACTIONS(235),
        [anon_sym_RBRACK] = ACTIONS(237),
        [sym_comment] = ACTIONS(73),
    },
    [50] = {
        [aux_sym_subscript_repeat1] = STATE(53),
        [anon_sym_COMMA] = ACTIONS(235),
        [anon_sym_LPAREN] = ACTIONS(209),
        [anon_sym_PLUS] = ACTIONS(211),
        [anon_sym_LBRACK] = ACTIONS(213),
        [anon_sym_RBRACK] = ACTIONS(237),
        [sym_comment] = ACTIONS(73),
    },
    [51] = {
        [sym__expression] = STATE(58),
        [sym_binary_operator] = STATE(36),
        [sym_subscript] = STATE(36),
        [sym_call] = STATE(36),
        [sym_list] = STATE(36),
        [sym_list_comprehension] = STATE(36),
        [sym_dictionary] = STATE(36),
        [sym_dictionary_comprehension] = STATE(36),
        [sym_set] = STATE(36),
        [sym_set_comprehension] = STATE(36),
        [anon_sym_LBRACK] = ACTIONS(117),
        [anon_sym_DOT_DOT_DOT] = ACTIONS(215),
        [anon_sym_RBRACK] = ACTIONS(239),
        [anon_sym_LBRACE] = ACTIONS(119),
        [sym_number] = ACTIONS(121),
        [sym_identifier] = ACTIONS(121),
        [sym_comment] = ACTIONS(73),
    },
    [52] = {
        [anon_sym_COMMA] = ACTIONS(221),
        [anon_sym_COLON] = ACTIONS(221),
        [anon_sym_for] = ACTIONS(221),
        [anon_sym_in] = ACTIONS(221),
        [anon_sym_as] = ACTIONS(221),
        [anon_sym_LPAREN] = ACTIONS(221),
        [anon_sym_RPAREN] = ACTIONS(221),
        [anon_sym_PLUS] = ACTIONS(221),
        [anon_sym_LBRACK] = ACTIONS(221),
        [anon_sym_RBRACK] = ACTIONS(221),
        [anon_sym_RBRACE] = ACTIONS(221),
        [sym_comment] = ACTIONS(73),
    },
    [53] = {
        [anon_sym_COMMA] = ACTIONS(241),
        [anon_sym_RBRACK] = ACTIONS(239),
        [sym_comment] = ACTIONS(73),
    },
    [54] = {
        [sym__expression] = STATE(48),
        [sym_binary_operator] = STATE(36),
        [sym_subscript] = STATE(36),
        [sym_call] = STATE(36),
        [sym_list] = STATE(36),
        [sym_list_comprehension] = STATE(36),
        [sym_dictionary] = STATE(36),
        [sym_dictionary_comprehension] = STATE(36),
        [sym_set] = STATE(36),
        [sym_set_comprehension] = STATE(36),
        [anon_sym_LBRACK] = ACTIONS(117),
        [anon_sym_DOT_DOT_DOT] = ACTIONS(225),
        [anon_sym_RBRACK] = ACTIONS(243),
        [anon_sym_LBRACE] = ACTIONS(119),
        [sym_number] = ACTIONS(121),
        [sym_identifier] = ACTIONS(121),
        [sym_comment] = ACTIONS(73),
    },
    [55] = {
        [anon_sym_COMMA] = ACTIONS(229),
        [anon_sym_COLON] = ACTIONS(229),
        [anon_sym_for] = ACTIONS(229),
        [anon_sym_in] = ACTIONS(229),
        [anon_sym_as] = ACTIONS(229),
        [anon_sym_LPAREN] = ACTIONS(229),
        [anon_sym_RPAREN] = ACTIONS(229),
        [anon_sym_PLUS] = ACTIONS(229),
        [anon_sym_LBRACK] = ACTIONS(229),
        [anon_sym_RBRACK] = ACTIONS(229),
        [anon_sym_RBRACE] = ACTIONS(229),
        [sym_comment] = ACTIONS(73),
    },
    [56] = {
        [anon_sym_COMMA] = ACTIONS(233),
        [anon_sym_COLON] = ACTIONS(233),
        [anon_sym_for] = ACTIONS(233),
        [anon_sym_in] = ACTIONS(233),
        [anon_sym_as] = ACTIONS(233),
        [anon_sym_LPAREN] = ACTIONS(233),
        [anon_sym_RPAREN] = ACTIONS(233),
        [anon_sym_PLUS] = ACTIONS(233),
        [anon_sym_LBRACK] = ACTIONS(233),
        [anon_sym_RBRACK] = ACTIONS(233),
        [anon_sym_RBRACE] = ACTIONS(233),
        [sym_comment] = ACTIONS(73),
    },
    [57] = {
        [anon_sym_COMMA] = ACTIONS(245),
        [anon_sym_RBRACK] = ACTIONS(245),
        [sym_comment] = ACTIONS(73),
    },
    [58] = {
        [anon_sym_COMMA] = ACTIONS(245),
        [anon_sym_LPAREN] = ACTIONS(209),
        [anon_sym_PLUS] = ACTIONS(211),
        [anon_sym_LBRACK] = ACTIONS(213),
        [anon_sym_RBRACK] = ACTIONS(245),
        [sym_comment] = ACTIONS(73),
    },
    [59] = {
        [anon_sym_COMMA] = ACTIONS(247),
        [anon_sym_COLON] = ACTIONS(247),
        [anon_sym_for] = ACTIONS(247),
        [anon_sym_in] = ACTIONS(247),
        [anon_sym_as] = ACTIONS(247),
        [anon_sym_LPAREN] = ACTIONS(247),
        [anon_sym_RPAREN] = ACTIONS(247),
        [anon_sym_PLUS] = ACTIONS(247),
        [anon_sym_LBRACK] = ACTIONS(247),
        [anon_sym_RBRACK] = ACTIONS(247),
        [anon_sym_RBRACE] = ACTIONS(247),
        [sym_comment] = ACTIONS(73),
    },
    [60] = {
        [sym__expression] = STATE(144),
        [sym_binary_operator] = STATE(36),
        [sym_subscript] = STATE(36),
        [sym_call] = STATE(36),
        [sym_list] = STATE(36),
        [sym_list_comprehension] = STATE(36),
        [sym_dictionary] = STATE(36),
        [sym_dictionary_comprehension] = STATE(36),
        [sym_set] = STATE(36),
        [sym_set_comprehension] = STATE(36),
        [anon_sym_LBRACK] = ACTIONS(117),
        [anon_sym_LBRACE] = ACTIONS(119),
        [sym_number] = ACTIONS(121),
        [sym_identifier] = ACTIONS(121),
        [sym_comment] = ACTIONS(73),
    },
    [61] = {
        [sym__expression] = STATE(143),
        [sym_binary_operator] = STATE(36),
        [sym_subscript] = STATE(36),
        [sym_call] = STATE(36),
        [sym_list] = STATE(36),
        [sym_list_comprehension] = STATE(36),
        [sym_dictionary] = STATE(36),
        [sym_dictionary_comprehension] = STATE(36),
        [sym_set] = STATE(36),
        [sym_set_comprehension] = STATE(36),
        [anon_sym_LBRACK] = ACTIONS(117),
        [anon_sym_LBRACE] = ACTIONS(119),
        [sym_number] = ACTIONS(121),
        [sym_identifier] = ACTIONS(121),
        [sym_comment] = ACTIONS(73),
    },
    [62] = {
        [anon_sym_COMMA] = ACTIONS(135),
        [anon_sym_LPAREN] = ACTIONS(135),
        [anon_sym_RPAREN] = ACTIONS(135),
        [anon_sym_EQ] = ACTIONS(249),
        [anon_sym_PLUS] = ACTIONS(135),
        [anon_sym_LBRACK] = ACTIONS(135),
        [sym_comment] = ACTIONS(73),
    },
    [63] = {
        [anon_sym_COMMA] = ACTIONS(251),
        [anon_sym_LPAREN] = ACTIONS(209),
        [anon_sym_RPAREN] = ACTIONS(253),
        [anon_sym_PLUS] = ACTIONS(211),
        [anon_sym_LBRACK] = ACTIONS(213),
        [sym_comment] = ACTIONS(73),
    },
    [64] = {
        [anon_sym_COMMA] = ACTIONS(251),
        [anon_sym_RPAREN] = ACTIONS(253),
        [sym_comment] = ACTIONS(73),
    },
    [65] = {
        [aux_sym_call_repeat2] = STATE(88),
        [anon_sym_COMMA] = ACTIONS(255),
        [anon_sym_RPAREN] = ACTIONS(253),
        [sym_comment] = ACTIONS(73),
    },
    [66] = {
        [anon_sym_RPAREN] = ACTIONS(253),
        [sym_comment] = ACTIONS(73),
    },
    [67] = {
        [sym__expression] = STATE(68),
        [sym_binary_operator] = STATE(36),
        [sym_subscript] = STATE(36),
        [sym_call] = STATE(36),
        [sym_keyword_argument] = STATE(69),
        [sym_list_splat_argument] = STATE(70),
        [sym_dictionary_splat_argument] = STATE(71),
        [sym_list] = STATE(36),
        [sym_list_comprehension] = STATE(36),
        [sym_dictionary] = STATE(36),
        [sym_dictionary_comprehension] = STATE(36),
        [sym_set] = STATE(36),
        [sym_set_comprehension] = STATE(36),
        [anon_sym_STAR] = ACTIONS(193),
        [anon_sym_LBRACK] = ACTIONS(117),
        [anon_sym_STAR_STAR] = ACTIONS(195),
        [anon_sym_LBRACE] = ACTIONS(119),
        [sym_number] = ACTIONS(121),
        [sym_identifier] = ACTIONS(197),
        [sym_comment] = ACTIONS(73),
    },
    [68] = {
        [anon_sym_COMMA] = ACTIONS(257),
        [anon_sym_LPAREN] = ACTIONS(209),
        [anon_sym_RPAREN] = ACTIONS(259),
        [anon_sym_PLUS] = ACTIONS(211),
        [anon_sym_LBRACK] = ACTIONS(213),
        [sym_comment] = ACTIONS(73),
    },
    [69] = {
        [anon_sym_COMMA] = ACTIONS(257),
        [anon_sym_RPAREN] = ACTIONS(259),
        [sym_comment] = ACTIONS(73),
    },
    [70] = {
        [aux_sym_call_repeat2] = STATE(74),
        [anon_sym_COMMA] = ACTIONS(261),
        [anon_sym_RPAREN] = ACTIONS(259),
        [sym_comment] = ACTIONS(73),
    },
    [71] = {
        [anon_sym_RPAREN] = ACTIONS(259),
        [sym_comment] = ACTIONS(73),
    },
    [72] = {
        [anon_sym_COMMA] = ACTIONS(263),
        [anon_sym_COLON] = ACTIONS(263),
        [anon_sym_for] = ACTIONS(263),
        [anon_sym_in] = ACTIONS(263),
        [anon_sym_as] = ACTIONS(263),
        [anon_sym_LPAREN] = ACTIONS(263),
        [anon_sym_RPAREN] = ACTIONS(263),
        [anon_sym_PLUS] = ACTIONS(263),
        [anon_sym_LBRACK] = ACTIONS(263),
        [anon_sym_RBRACK] = ACTIONS(263),
        [anon_sym_RBRACE] = ACTIONS(263),
        [sym_comment] = ACTIONS(73),
    },
    [73] = {
        [sym__expression] = STATE(81),
        [sym_binary_operator] = STATE(36),
        [sym_subscript] = STATE(36),
        [sym_call] = STATE(36),
        [sym_keyword_argument] = STATE(82),
        [sym_dictionary_splat_argument] = STATE(83),
        [sym_list] = STATE(36),
        [sym_list_comprehension] = STATE(36),
        [sym_dictionary] = STATE(36),
        [sym_dictionary_comprehension] = STATE(36),
        [sym_set] = STATE(36),
        [sym_set_comprehension] = STATE(36),
        [anon_sym_LBRACK] = ACTIONS(117),
        [anon_sym_STAR_STAR] = ACTIONS(195),
        [anon_sym_LBRACE] = ACTIONS(119),
        [sym_number] = ACTIONS(121),
        [sym_identifier] = ACTIONS(197),
        [sym_comment] = ACTIONS(73),
    },
    [74] = {
        [anon_sym_COMMA] = ACTIONS(265),
        [anon_sym_RPAREN] = ACTIONS(267),
        [sym_comment] = ACTIONS(73),
    },
    [75] = {
        [sym__expression] = STATE(77),
        [sym_binary_operator] = STATE(36),
        [sym_subscript] = STATE(36),
        [sym_call] = STATE(36),
        [sym_keyword_argument] = STATE(78),
        [sym_dictionary_splat_argument] = STATE(79),
        [sym_list] = STATE(36),
        [sym_list_comprehension] = STATE(36),
        [sym_dictionary] = STATE(36),
        [sym_dictionary_comprehension] = STATE(36),
        [sym_set] = STATE(36),
        [sym_set_comprehension] = STATE(36),
        [anon_sym_LBRACK] = ACTIONS(117),
        [anon_sym_STAR_STAR] = ACTIONS(195),
        [anon_sym_LBRACE] = ACTIONS(119),
        [sym_number] = ACTIONS(121),
        [sym_identifier] = ACTIONS(197),
        [sym_comment] = ACTIONS(73),
    },
    [76] = {
        [anon_sym_COMMA] = ACTIONS(269),
        [anon_sym_COLON] = ACTIONS(269),
        [anon_sym_for] = ACTIONS(269),
        [anon_sym_in] = ACTIONS(269),
        [anon_sym_as] = ACTIONS(269),
        [anon_sym_LPAREN] = ACTIONS(269),
        [anon_sym_RPAREN] = ACTIONS(269),
        [anon_sym_PLUS] = ACTIONS(269),
        [anon_sym_LBRACK] = ACTIONS(269),
        [anon_sym_RBRACK] = ACTIONS(269),
        [anon_sym_RBRACE] = ACTIONS(269),
        [sym_comment] = ACTIONS(73),
    },
    [77] = {
        [anon_sym_COMMA] = ACTIONS(271),
        [anon_sym_LPAREN] = ACTIONS(209),
        [anon_sym_RPAREN] = ACTIONS(271),
        [anon_sym_PLUS] = ACTIONS(211),
        [anon_sym_LBRACK] = ACTIONS(213),
        [sym_comment] = ACTIONS(73),
    },
    [78] = {
        [anon_sym_COMMA] = ACTIONS(271),
        [anon_sym_RPAREN] = ACTIONS(271),
        [sym_comment] = ACTIONS(73),
    },
    [79] = {
        [anon_sym_RPAREN] = ACTIONS(273),
        [sym_comment] = ACTIONS(73),
    },
    [80] = {
        [anon_sym_COMMA] = ACTIONS(275),
        [anon_sym_COLON] = ACTIONS(275),
        [anon_sym_for] = ACTIONS(275),
        [anon_sym_in] = ACTIONS(275),
        [anon_sym_as] = ACTIONS(275),
        [anon_sym_LPAREN] = ACTIONS(275),
        [anon_sym_RPAREN] = ACTIONS(275),
        [anon_sym_PLUS] = ACTIONS(275),
        [anon_sym_LBRACK] = ACTIONS(275),
        [anon_sym_RBRACK] = ACTIONS(275),
        [anon_sym_RBRACE] = ACTIONS(275),
        [sym_comment] = ACTIONS(73),
    },
    [81] = {
        [anon_sym_COMMA] = ACTIONS(277),
        [anon_sym_LPAREN] = ACTIONS(209),
        [anon_sym_RPAREN] = ACTIONS(277),
        [anon_sym_PLUS] = ACTIONS(211),
        [anon_sym_LBRACK] = ACTIONS(213),
        [sym_comment] = ACTIONS(73),
    },
    [82] = {
        [anon_sym_COMMA] = ACTIONS(277),
        [anon_sym_RPAREN] = ACTIONS(277),
        [sym_comment] = ACTIONS(73),
    },
    [83] = {
        [anon_sym_RPAREN] = ACTIONS(279),
        [sym_comment] = ACTIONS(73),
    },
    [84] = {
        [anon_sym_COMMA] = ACTIONS(281),
        [anon_sym_COLON] = ACTIONS(281),
        [anon_sym_for] = ACTIONS(281),
        [anon_sym_in] = ACTIONS(281),
        [anon_sym_as] = ACTIONS(281),
        [anon_sym_LPAREN] = ACTIONS(281),
        [anon_sym_RPAREN] = ACTIONS(281),
        [anon_sym_PLUS] = ACTIONS(281),
        [anon_sym_LBRACK] = ACTIONS(281),
        [anon_sym_RBRACK] = ACTIONS(281),
        [anon_sym_RBRACE] = ACTIONS(281),
        [sym_comment] = ACTIONS(73),
    },
    [85] = {
        [anon_sym_RPAREN] = ACTIONS(267),
        [anon_sym_STAR] = ACTIONS(283),
        [anon_sym_LBRACK] = ACTIONS(285),
        [anon_sym_STAR_STAR] = ACTIONS(285),
        [anon_sym_LBRACE] = ACTIONS(285),
        [sym_number] = ACTIONS(283),
        [sym_identifier] = ACTIONS(283),
        [sym_comment] = ACTIONS(73),
    },
    [86] = {
        [anon_sym_COMMA] = ACTIONS(287),
        [anon_sym_COLON] = ACTIONS(287),
        [anon_sym_for] = ACTIONS(287),
        [anon_sym_in] = ACTIONS(287),
        [anon_sym_as] = ACTIONS(287),
        [anon_sym_LPAREN] = ACTIONS(287),
        [anon_sym_RPAREN] = ACTIONS(287),
        [anon_sym_PLUS] = ACTIONS(287),
        [anon_sym_LBRACK] = ACTIONS(287),
        [anon_sym_RBRACK] = ACTIONS(287),
        [anon_sym_RBRACE] = ACTIONS(287),
        [sym_comment] = ACTIONS(73),
    },
    [87] = {
        [sym__expression] = STATE(81),
        [sym_binary_operator] = STATE(36),
        [sym_subscript] = STATE(36),
        [sym_call] = STATE(36),
        [sym_keyword_argument] = STATE(82),
        [sym_dictionary_splat_argument] = STATE(90),
        [sym_list] = STATE(36),
        [sym_list_comprehension] = STATE(36),
        [sym_dictionary] = STATE(36),
        [sym_dictionary_comprehension] = STATE(36),
        [sym_set] = STATE(36),
        [sym_set_comprehension] = STATE(36),
        [anon_sym_LBRACK] = ACTIONS(117),
        [anon_sym_STAR_STAR] = ACTIONS(195),
        [anon_sym_LBRACE] = ACTIONS(119),
        [sym_number] = ACTIONS(121),
        [sym_identifier] = ACTIONS(197),
        [sym_comment] = ACTIONS(73),
    },
    [88] = {
        [anon_sym_COMMA] = ACTIONS(289),
        [anon_sym_RPAREN] = ACTIONS(259),
        [sym_comment] = ACTIONS(73),
    },
    [89] = {
        [sym__expression] = STATE(77),
        [sym_binary_operator] = STATE(36),
        [sym_subscript] = STATE(36),
        [sym_call] = STATE(36),
        [sym_keyword_argument] = STATE(78),
        [sym_dictionary_splat_argument] = STATE(83),
        [sym_list] = STATE(36),
        [sym_list_comprehension] = STATE(36),
        [sym_dictionary] = STATE(36),
        [sym_dictionary_comprehension] = STATE(36),
        [sym_set] = STATE(36),
        [sym_set_comprehension] = STATE(36),
        [anon_sym_LBRACK] = ACTIONS(117),
        [anon_sym_STAR_STAR] = ACTIONS(195),
        [anon_sym_LBRACE] = ACTIONS(119),
        [sym_number] = ACTIONS(121),
        [sym_identifier] = ACTIONS(197),
        [sym_comment] = ACTIONS(73),
    },
    [90] = {
        [anon_sym_RPAREN] = ACTIONS(267),
        [sym_comment] = ACTIONS(73),
    },
    [91] = {
        [anon_sym_RPAREN] = ACTIONS(259),
        [anon_sym_STAR] = ACTIONS(291),
        [anon_sym_LBRACK] = ACTIONS(293),
        [anon_sym_STAR_STAR] = ACTIONS(293),
        [anon_sym_LBRACE] = ACTIONS(293),
        [sym_number] = ACTIONS(291),
        [sym_identifier] = ACTIONS(291),
        [sym_comment] = ACTIONS(73),
    },
    [92] = {
        [sym__expression] = STATE(93),
        [sym_binary_operator] = STATE(36),
        [sym_subscript] = STATE(36),
        [sym_call] = STATE(36),
        [sym_list] = STATE(36),
        [sym_list_comprehension] = STATE(36),
        [sym_dictionary] = STATE(36),
        [sym_dictionary_comprehension] = STATE(36),
        [sym_set] = STATE(36),
        [sym_set_comprehension] = STATE(36),
        [anon_sym_LBRACK] = ACTIONS(117),
        [anon_sym_LBRACE] = ACTIONS(119),
        [sym_number] = ACTIONS(121),
        [sym_identifier] = ACTIONS(121),
        [sym_comment] = ACTIONS(73),
    },
    [93] = {
        [anon_sym_COMMA] = ACTIONS(295),
        [anon_sym_LPAREN] = ACTIONS(209),
        [anon_sym_RPAREN] = ACTIONS(295),
        [anon_sym_PLUS] = ACTIONS(211),
        [anon_sym_LBRACK] = ACTIONS(213),
        [sym_comment] = ACTIONS(73),
    },
    [94] = {
        [anon_sym_COMMA] = ACTIONS(297),
        [anon_sym_COLON] = ACTIONS(297),
        [anon_sym_for] = ACTIONS(297),
        [anon_sym_in] = ACTIONS(297),
        [anon_sym_as] = ACTIONS(297),
        [anon_sym_LPAREN] = ACTIONS(297),
        [anon_sym_RPAREN] = ACTIONS(297),
        [anon_sym_PLUS] = ACTIONS(297),
        [anon_sym_LBRACK] = ACTIONS(297),
        [anon_sym_RBRACK] = ACTIONS(297),
        [anon_sym_RBRACE] = ACTIONS(297),
        [sym_comment] = ACTIONS(73),
    },
    [95] = {
        [aux_sym_print_statement_repeat1] = STATE(122),
        [anon_sym_COMMA] = ACTIONS(299),
        [anon_sym_COLON] = ACTIONS(301),
        [anon_sym_for] = ACTIONS(303),
        [anon_sym_LPAREN] = ACTIONS(209),
        [anon_sym_PLUS] = ACTIONS(211),
        [anon_sym_LBRACK] = ACTIONS(213),
        [anon_sym_RBRACE] = ACTIONS(305),
        [sym_comment] = ACTIONS(73),
    },
    [96] = {
        [aux_sym_dictionary_repeat1] = STATE(100),
        [anon_sym_COMMA] = ACTIONS(307),
        [anon_sym_for] = ACTIONS(309),
        [anon_sym_RBRACE] = ACTIONS(311),
        [sym_comment] = ACTIONS(73),
    },
    [97] = {
        [sym__expression] = STATE(104),
        [sym_binary_operator] = STATE(36),
        [sym_subscript] = STATE(36),
        [sym_call] = STATE(36),
        [sym_list] = STATE(36),
        [sym_list_comprehension] = STATE(36),
        [sym_dictionary] = STATE(36),
        [sym_dictionary_comprehension] = STATE(36),
        [sym_pair] = STATE(118),
        [sym_set] = STATE(36),
        [sym_set_comprehension] = STATE(36),
        [anon_sym_LBRACK] = ACTIONS(117),
        [anon_sym_LBRACE] = ACTIONS(119),
        [anon_sym_RBRACE] = ACTIONS(313),
        [sym_number] = ACTIONS(121),
        [sym_identifier] = ACTIONS(121),
        [sym_comment] = ACTIONS(73),
    },
    [98] = {
        [sym_expression_list] = STATE(108),
        [sym__expression] = STATE(109),
        [sym_binary_operator] = STATE(36),
        [sym_subscript] = STATE(36),
        [sym_call] = STATE(36),
        [sym_list] = STATE(36),
        [sym_list_comprehension] = STATE(36),
        [sym_dictionary] = STATE(36),
        [sym_dictionary_comprehension] = STATE(36),
        [sym_set] = STATE(36),
        [sym_set_comprehension] = STATE(36),
        [anon_sym_LBRACK] = ACTIONS(117),
        [anon_sym_LBRACE] = ACTIONS(119),
        [sym_number] = ACTIONS(121),
        [sym_identifier] = ACTIONS(121),
        [sym_comment] = ACTIONS(73),
    },
    [99] = {
        [anon_sym_COMMA] = ACTIONS(315),
        [anon_sym_COLON] = ACTIONS(315),
        [anon_sym_for] = ACTIONS(315),
        [anon_sym_in] = ACTIONS(315),
        [anon_sym_as] = ACTIONS(315),
        [anon_sym_LPAREN] = ACTIONS(315),
        [anon_sym_RPAREN] = ACTIONS(315),
        [anon_sym_PLUS] = ACTIONS(315),
        [anon_sym_LBRACK] = ACTIONS(315),
        [anon_sym_RBRACK] = ACTIONS(315),
        [anon_sym_RBRACE] = ACTIONS(315),
        [sym_comment] = ACTIONS(73),
    },
    [100] = {
        [anon_sym_COMMA] = ACTIONS(317),
        [anon_sym_RBRACE] = ACTIONS(313),
        [sym_comment] = ACTIONS(73),
    },
    [101] = {
        [sym__expression] = STATE(104),
        [sym_binary_operator] = STATE(36),
        [sym_subscript] = STATE(36),
        [sym_call] = STATE(36),
        [sym_list] = STATE(36),
        [sym_list_comprehension] = STATE(36),
        [sym_dictionary] = STATE(36),
        [sym_dictionary_comprehension] = STATE(36),
        [sym_pair] = STATE(105),
        [sym_set] = STATE(36),
        [sym_set_comprehension] = STATE(36),
        [anon_sym_LBRACK] = ACTIONS(117),
        [anon_sym_LBRACE] = ACTIONS(119),
        [anon_sym_RBRACE] = ACTIONS(319),
        [sym_number] = ACTIONS(121),
        [sym_identifier] = ACTIONS(121),
        [sym_comment] = ACTIONS(73),
    },
    [102] = {
        [anon_sym_COMMA] = ACTIONS(321),
        [anon_sym_COLON] = ACTIONS(321),
        [anon_sym_for] = ACTIONS(321),
        [anon_sym_in] = ACTIONS(321),
        [anon_sym_as] = ACTIONS(321),
        [anon_sym_LPAREN] = ACTIONS(321),
        [anon_sym_RPAREN] = ACTIONS(321),
        [anon_sym_PLUS] = ACTIONS(321),
        [anon_sym_LBRACK] = ACTIONS(321),
        [anon_sym_RBRACK] = ACTIONS(321),
        [anon_sym_RBRACE] = ACTIONS(321),
        [sym_comment] = ACTIONS(73),
    },
    [103] = {
        [anon_sym_COMMA] = ACTIONS(323),
        [anon_sym_COLON] = ACTIONS(323),
        [anon_sym_for] = ACTIONS(323),
        [anon_sym_in] = ACTIONS(323),
        [anon_sym_as] = ACTIONS(323),
        [anon_sym_LPAREN] = ACTIONS(323),
        [anon_sym_RPAREN] = ACTIONS(323),
        [anon_sym_PLUS] = ACTIONS(323),
        [anon_sym_LBRACK] = ACTIONS(323),
        [anon_sym_RBRACK] = ACTIONS(323),
        [anon_sym_RBRACE] = ACTIONS(323),
        [sym_comment] = ACTIONS(73),
    },
    [104] = {
        [anon_sym_COLON] = ACTIONS(301),
        [anon_sym_LPAREN] = ACTIONS(209),
        [anon_sym_PLUS] = ACTIONS(211),
        [anon_sym_LBRACK] = ACTIONS(213),
        [sym_comment] = ACTIONS(73),
    },
    [105] = {
        [anon_sym_COMMA] = ACTIONS(325),
        [anon_sym_RBRACE] = ACTIONS(325),
        [sym_comment] = ACTIONS(73),
    },
    [106] = {
        [sym__expression] = STATE(107),
        [sym_binary_operator] = STATE(36),
        [sym_subscript] = STATE(36),
        [sym_call] = STATE(36),
        [sym_list] = STATE(36),
        [sym_list_comprehension] = STATE(36),
        [sym_dictionary] = STATE(36),
        [sym_dictionary_comprehension] = STATE(36),
        [sym_set] = STATE(36),
        [sym_set_comprehension] = STATE(36),
        [anon_sym_LBRACK] = ACTIONS(117),
        [anon_sym_LBRACE] = ACTIONS(119),
        [sym_number] = ACTIONS(121),
        [sym_identifier] = ACTIONS(121),
        [sym_comment] = ACTIONS(73),
    },
    [107] = {
        [anon_sym_COMMA] = ACTIONS(327),
        [anon_sym_for] = ACTIONS(327),
        [anon_sym_LPAREN] = ACTIONS(209),
        [anon_sym_PLUS] = ACTIONS(211),
        [anon_sym_LBRACK] = ACTIONS(213),
        [anon_sym_RBRACE] = ACTIONS(327),
        [sym_comment] = ACTIONS(73),
    },
    [108] = {
        [anon_sym_in] = ACTIONS(329),
        [sym_comment] = ACTIONS(73),
    },
    [109] = {
        [aux_sym_print_statement_repeat1] = STATE(111),
        [anon_sym_COMMA] = ACTIONS(331),
        [anon_sym_COLON] = ACTIONS(333),
        [anon_sym_in] = ACTIONS(333),
        [anon_sym_LPAREN] = ACTIONS(209),
        [anon_sym_RPAREN] = ACTIONS(333),
        [anon_sym_PLUS] = ACTIONS(211),
        [anon_sym_LBRACK] = ACTIONS(213),
        [sym_comment] = ACTIONS(73),
    },
    [110] = {
        [sym__expression] = STATE(114),
        [sym_binary_operator] = STATE(36),
        [sym_subscript] = STATE(36),
        [sym_call] = STATE(36),
        [sym_list] = STATE(36),
        [sym_list_comprehension] = STATE(36),
        [sym_dictionary] = STATE(36),
        [sym_dictionary_comprehension] = STATE(36),
        [sym_set] = STATE(36),
        [sym_set_comprehension] = STATE(36),
        [anon_sym_LBRACK] = ACTIONS(117),
        [anon_sym_LBRACE] = ACTIONS(119),
        [sym_number] = ACTIONS(121),
        [sym_identifier] = ACTIONS(121),
        [sym_comment] = ACTIONS(73),
    },
    [111] = {
        [anon_sym_COMMA] = ACTIONS(335),
        [anon_sym_COLON] = ACTIONS(337),
        [anon_sym_in] = ACTIONS(337),
        [anon_sym_RPAREN] = ACTIONS(337),
        [sym_comment] = ACTIONS(73),
    },
    [112] = {
        [sym__expression] = STATE(113),
        [sym_binary_operator] = STATE(36),
        [sym_subscript] = STATE(36),
        [sym_call] = STATE(36),
        [sym_list] = STATE(36),
        [sym_list_comprehension] = STATE(36),
        [sym_dictionary] = STATE(36),
        [sym_dictionary_comprehension] = STATE(36),
        [sym_set] = STATE(36),
        [sym_set_comprehension] = STATE(36),
        [anon_sym_LBRACK] = ACTIONS(117),
        [anon_sym_LBRACE] = ACTIONS(119),
        [sym_number] = ACTIONS(121),
        [sym_identifier] = ACTIONS(121),
        [sym_comment] = ACTIONS(73),
    },
    [113] = {
        [anon_sym_COMMA] = ACTIONS(339),
        [anon_sym_COLON] = ACTIONS(339),
        [anon_sym_in] = ACTIONS(339),
        [anon_sym_LPAREN] = ACTIONS(209),
        [anon_sym_RPAREN] = ACTIONS(339),
        [anon_sym_PLUS] = ACTIONS(211),
        [anon_sym_LBRACK] = ACTIONS(213),
        [anon_sym_RBRACK] = ACTIONS(339),
        [anon_sym_RBRACE] = ACTIONS(339),
        [sym_comment] = ACTIONS(73),
    },
    [114] = {
        [anon_sym_COMMA] = ACTIONS(341),
        [anon_sym_COLON] = ACTIONS(341),
        [anon_sym_in] = ACTIONS(341),
        [anon_sym_LPAREN] = ACTIONS(209),
        [anon_sym_RPAREN] = ACTIONS(341),
        [anon_sym_PLUS] = ACTIONS(211),
        [anon_sym_LBRACK] = ACTIONS(213),
        [anon_sym_RBRACK] = ACTIONS(341),
        [anon_sym_RBRACE] = ACTIONS(341),
        [sym_comment] = ACTIONS(73),
    },
    [115] = {
        [sym__expression] = STATE(116),
        [sym_binary_operator] = STATE(36),
        [sym_subscript] = STATE(36),
        [sym_call] = STATE(36),
        [sym_list] = STATE(36),
        [sym_list_comprehension] = STATE(36),
        [sym_dictionary] = STATE(36),
        [sym_dictionary_comprehension] = STATE(36),
        [sym_set] = STATE(36),
        [sym_set_comprehension] = STATE(36),
        [anon_sym_LBRACK] = ACTIONS(117),
        [anon_sym_LBRACE] = ACTIONS(119),
        [sym_number] = ACTIONS(121),
        [sym_identifier] = ACTIONS(121),
        [sym_comment] = ACTIONS(73),
    },
    [116] = {
        [anon_sym_LPAREN] = ACTIONS(209),
        [anon_sym_PLUS] = ACTIONS(211),
        [anon_sym_LBRACK] = ACTIONS(213),
        [anon_sym_RBRACE] = ACTIONS(343),
        [sym_comment] = ACTIONS(73),
    },
    [117] = {
        [anon_sym_COMMA] = ACTIONS(345),
        [anon_sym_COLON] = ACTIONS(345),
        [anon_sym_for] = ACTIONS(345),
        [anon_sym_in] = ACTIONS(345),
        [anon_sym_as] = ACTIONS(345),
        [anon_sym_LPAREN] = ACTIONS(345),
        [anon_sym_RPAREN] = ACTIONS(345),
        [anon_sym_PLUS] = ACTIONS(345),
        [anon_sym_LBRACK] = ACTIONS(345),
        [anon_sym_RBRACK] = ACTIONS(345),
        [anon_sym_RBRACE] = ACTIONS(345),
        [sym_comment] = ACTIONS(73),
    },
    [118] = {
        [anon_sym_COMMA] = ACTIONS(347),
        [anon_sym_RBRACE] = ACTIONS(347),
        [sym_comment] = ACTIONS(73),
    },
    [119] = {
        [sym__expression] = STATE(114),
        [sym_binary_operator] = STATE(36),
        [sym_subscript] = STATE(36),
        [sym_call] = STATE(36),
        [sym_list] = STATE(36),
        [sym_list_comprehension] = STATE(36),
        [sym_dictionary] = STATE(36),
        [sym_dictionary_comprehension] = STATE(36),
        [sym_set] = STATE(36),
        [sym_set_comprehension] = STATE(36),
        [anon_sym_LBRACK] = ACTIONS(117),
        [anon_sym_LBRACE] = ACTIONS(119),
        [anon_sym_RBRACE] = ACTIONS(349),
        [sym_number] = ACTIONS(121),
        [sym_identifier] = ACTIONS(121),
        [sym_comment] = ACTIONS(73),
    },
    [120] = {
        [sym_expression_list] = STATE(126),
        [sym__expression] = STATE(109),
        [sym_binary_operator] = STATE(36),
        [sym_subscript] = STATE(36),
        [sym_call] = STATE(36),
        [sym_list] = STATE(36),
        [sym_list_comprehension] = STATE(36),
        [sym_dictionary] = STATE(36),
        [sym_dictionary_comprehension] = STATE(36),
        [sym_set] = STATE(36),
        [sym_set_comprehension] = STATE(36),
        [anon_sym_LBRACK] = ACTIONS(117),
        [anon_sym_LBRACE] = ACTIONS(119),
        [sym_number] = ACTIONS(121),
        [sym_identifier] = ACTIONS(121),
        [sym_comment] = ACTIONS(73),
    },
    [121] = {
        [anon_sym_COMMA] = ACTIONS(351),
        [anon_sym_COLON] = ACTIONS(351),
        [anon_sym_for] = ACTIONS(351),
        [anon_sym_in] = ACTIONS(351),
        [anon_sym_as] = ACTIONS(351),
        [anon_sym_LPAREN] = ACTIONS(351),
        [anon_sym_RPAREN] = ACTIONS(351),
        [anon_sym_PLUS] = ACTIONS(351),
        [anon_sym_LBRACK] = ACTIONS(351),
        [anon_sym_RBRACK] = ACTIONS(351),
        [anon_sym_RBRACE] = ACTIONS(351),
        [sym_comment] = ACTIONS(73),
    },
    [122] = {
        [anon_sym_COMMA] = ACTIONS(353),
        [anon_sym_RBRACE] = ACTIONS(349),
        [sym_comment] = ACTIONS(73),
    },
    [123] = {
        [sym__expression] = STATE(113),
        [sym_binary_operator] = STATE(36),
        [sym_subscript] = STATE(36),
        [sym_call] = STATE(36),
        [sym_list] = STATE(36),
        [sym_list_comprehension] = STATE(36),
        [sym_dictionary] = STATE(36),
        [sym_dictionary_comprehension] = STATE(36),
        [sym_set] = STATE(36),
        [sym_set_comprehension] = STATE(36),
        [anon_sym_LBRACK] = ACTIONS(117),
        [anon_sym_LBRACE] = ACTIONS(119),
        [anon_sym_RBRACE] = ACTIONS(355),
        [sym_number] = ACTIONS(121),
        [sym_identifier] = ACTIONS(121),
        [sym_comment] = ACTIONS(73),
    },
    [124] = {
        [anon_sym_COMMA] = ACTIONS(357),
        [anon_sym_COLON] = ACTIONS(357),
        [anon_sym_for] = ACTIONS(357),
        [anon_sym_in] = ACTIONS(357),
        [anon_sym_as] = ACTIONS(357),
        [anon_sym_LPAREN] = ACTIONS(357),
        [anon_sym_RPAREN] = ACTIONS(357),
        [anon_sym_PLUS] = ACTIONS(357),
        [anon_sym_LBRACK] = ACTIONS(357),
        [anon_sym_RBRACK] = ACTIONS(357),
        [anon_sym_RBRACE] = ACTIONS(357),
        [sym_comment] = ACTIONS(73),
    },
    [125] = {
        [anon_sym_COMMA] = ACTIONS(359),
        [anon_sym_COLON] = ACTIONS(359),
        [anon_sym_for] = ACTIONS(359),
        [anon_sym_in] = ACTIONS(359),
        [anon_sym_as] = ACTIONS(359),
        [anon_sym_LPAREN] = ACTIONS(359),
        [anon_sym_RPAREN] = ACTIONS(359),
        [anon_sym_PLUS] = ACTIONS(359),
        [anon_sym_LBRACK] = ACTIONS(359),
        [anon_sym_RBRACK] = ACTIONS(359),
        [anon_sym_RBRACE] = ACTIONS(359),
        [sym_comment] = ACTIONS(73),
    },
    [126] = {
        [anon_sym_in] = ACTIONS(361),
        [sym_comment] = ACTIONS(73),
    },
    [127] = {
        [sym__expression] = STATE(128),
        [sym_binary_operator] = STATE(36),
        [sym_subscript] = STATE(36),
        [sym_call] = STATE(36),
        [sym_list] = STATE(36),
        [sym_list_comprehension] = STATE(36),
        [sym_dictionary] = STATE(36),
        [sym_dictionary_comprehension] = STATE(36),
        [sym_set] = STATE(36),
        [sym_set_comprehension] = STATE(36),
        [anon_sym_LBRACK] = ACTIONS(117),
        [anon_sym_LBRACE] = ACTIONS(119),
        [sym_number] = ACTIONS(121),
        [sym_identifier] = ACTIONS(121),
        [sym_comment] = ACTIONS(73),
    },
    [128] = {
        [anon_sym_LPAREN] = ACTIONS(209),
        [anon_sym_PLUS] = ACTIONS(211),
        [anon_sym_LBRACK] = ACTIONS(213),
        [anon_sym_RBRACE] = ACTIONS(363),
        [sym_comment] = ACTIONS(73),
    },
    [129] = {
        [anon_sym_COMMA] = ACTIONS(365),
        [anon_sym_COLON] = ACTIONS(365),
        [anon_sym_for] = ACTIONS(365),
        [anon_sym_in] = ACTIONS(365),
        [anon_sym_as] = ACTIONS(365),
        [anon_sym_LPAREN] = ACTIONS(365),
        [anon_sym_RPAREN] = ACTIONS(365),
        [anon_sym_PLUS] = ACTIONS(365),
        [anon_sym_LBRACK] = ACTIONS(365),
        [anon_sym_RBRACK] = ACTIONS(365),
        [anon_sym_RBRACE] = ACTIONS(365),
        [sym_comment] = ACTIONS(73),
    },
    [130] = {
        [anon_sym_COMMA] = ACTIONS(367),
        [anon_sym_COLON] = ACTIONS(367),
        [anon_sym_for] = ACTIONS(367),
        [anon_sym_in] = ACTIONS(367),
        [anon_sym_as] = ACTIONS(367),
        [anon_sym_LPAREN] = ACTIONS(367),
        [anon_sym_RPAREN] = ACTIONS(367),
        [anon_sym_PLUS] = ACTIONS(367),
        [anon_sym_LBRACK] = ACTIONS(367),
        [anon_sym_RBRACK] = ACTIONS(367),
        [anon_sym_RBRACE] = ACTIONS(367),
        [sym_comment] = ACTIONS(73),
    },
    [131] = {
        [aux_sym_print_statement_repeat1] = STATE(135),
        [anon_sym_COMMA] = ACTIONS(369),
        [anon_sym_for] = ACTIONS(371),
        [anon_sym_LPAREN] = ACTIONS(209),
        [anon_sym_PLUS] = ACTIONS(211),
        [anon_sym_LBRACK] = ACTIONS(213),
        [anon_sym_RBRACK] = ACTIONS(373),
        [sym_comment] = ACTIONS(73),
    },
    [132] = {
        [sym__expression] = STATE(114),
        [sym_binary_operator] = STATE(36),
        [sym_subscript] = STATE(36),
        [sym_call] = STATE(36),
        [sym_list] = STATE(36),
        [sym_list_comprehension] = STATE(36),
        [sym_dictionary] = STATE(36),
        [sym_dictionary_comprehension] = STATE(36),
        [sym_set] = STATE(36),
        [sym_set_comprehension] = STATE(36),
        [anon_sym_LBRACK] = ACTIONS(117),
        [anon_sym_RBRACK] = ACTIONS(375),
        [anon_sym_LBRACE] = ACTIONS(119),
        [sym_number] = ACTIONS(121),
        [sym_identifier] = ACTIONS(121),
        [sym_comment] = ACTIONS(73),
    },
    [133] = {
        [sym_expression_list] = STATE(139),
        [sym__expression] = STATE(109),
        [sym_binary_operator] = STATE(36),
        [sym_subscript] = STATE(36),
        [sym_call] = STATE(36),
        [sym_list] = STATE(36),
        [sym_list_comprehension] = STATE(36),
        [sym_dictionary] = STATE(36),
        [sym_dictionary_comprehension] = STATE(36),
        [sym_set] = STATE(36),
        [sym_set_comprehension] = STATE(36),
        [anon_sym_LBRACK] = ACTIONS(117),
        [anon_sym_LBRACE] = ACTIONS(119),
        [sym_number] = ACTIONS(121),
        [sym_identifier] = ACTIONS(121),
        [sym_comment] = ACTIONS(73),
    },
    [134] = {
        [anon_sym_COMMA] = ACTIONS(377),
        [anon_sym_COLON] = ACTIONS(377),
        [anon_sym_for] = ACTIONS(377),
        [anon_sym_in] = ACTIONS(377),
        [anon_sym_as] = ACTIONS(377),
        [anon_sym_LPAREN] = ACTIONS(377),
        [anon_sym_RPAREN] = ACTIONS(377),
        [anon_sym_PLUS] = ACTIONS(377),
        [anon_sym_LBRACK] = ACTIONS(377),
        [anon_sym_RBRACK] = ACTIONS(377),
        [anon_sym_RBRACE] = ACTIONS(377),
        [sym_comment] = ACTIONS(73),
    },
    [135] = {
        [anon_sym_COMMA] = ACTIONS(379),
        [anon_sym_RBRACK] = ACTIONS(375),
        [sym_comment] = ACTIONS(73),
    },
    [136] = {
        [sym__expression] = STATE(113),
        [sym_binary_operator] = STATE(36),
        [sym_subscript] = STATE(36),
        [sym_call] = STATE(36),
        [sym_list] = STATE(36),
        [sym_list_comprehension] = STATE(36),
        [sym_dictionary] = STATE(36),
        [sym_dictionary_comprehension] = STATE(36),
        [sym_set] = STATE(36),
        [sym_set_comprehension] = STATE(36),
        [anon_sym_LBRACK] = ACTIONS(117),
        [anon_sym_RBRACK] = ACTIONS(381),
        [anon_sym_LBRACE] = ACTIONS(119),
        [sym_number] = ACTIONS(121),
        [sym_identifier] = ACTIONS(121),
        [sym_comment] = ACTIONS(73),
    },
    [137] = {
        [anon_sym_COMMA] = ACTIONS(383),
        [anon_sym_COLON] = ACTIONS(383),
        [anon_sym_for] = ACTIONS(383),
        [anon_sym_in] = ACTIONS(383),
        [anon_sym_as] = ACTIONS(383),
        [anon_sym_LPAREN] = ACTIONS(383),
        [anon_sym_RPAREN] = ACTIONS(383),
        [anon_sym_PLUS] = ACTIONS(383),
        [anon_sym_LBRACK] = ACTIONS(383),
        [anon_sym_RBRACK] = ACTIONS(383),
        [anon_sym_RBRACE] = ACTIONS(383),
        [sym_comment] = ACTIONS(73),
    },
    [138] = {
        [anon_sym_COMMA] = ACTIONS(385),
        [anon_sym_COLON] = ACTIONS(385),
        [anon_sym_for] = ACTIONS(385),
        [anon_sym_in] = ACTIONS(385),
        [anon_sym_as] = ACTIONS(385),
        [anon_sym_LPAREN] = ACTIONS(385),
        [anon_sym_RPAREN] = ACTIONS(385),
        [anon_sym_PLUS] = ACTIONS(385),
        [anon_sym_LBRACK] = ACTIONS(385),
        [anon_sym_RBRACK] = ACTIONS(385),
        [anon_sym_RBRACE] = ACTIONS(385),
        [sym_comment] = ACTIONS(73),
    },
    [139] = {
        [anon_sym_in] = ACTIONS(387),
        [sym_comment] = ACTIONS(73),
    },
    [140] = {
        [sym__expression] = STATE(141),
        [sym_binary_operator] = STATE(36),
        [sym_subscript] = STATE(36),
        [sym_call] = STATE(36),
        [sym_list] = STATE(36),
        [sym_list_comprehension] = STATE(36),
        [sym_dictionary] = STATE(36),
        [sym_dictionary_comprehension] = STATE(36),
        [sym_set] = STATE(36),
        [sym_set_comprehension] = STATE(36),
        [anon_sym_LBRACK] = ACTIONS(117),
        [anon_sym_LBRACE] = ACTIONS(119),
        [sym_number] = ACTIONS(121),
        [sym_identifier] = ACTIONS(121),
        [sym_comment] = ACTIONS(73),
    },
    [141] = {
        [anon_sym_LPAREN] = ACTIONS(209),
        [anon_sym_PLUS] = ACTIONS(211),
        [anon_sym_LBRACK] = ACTIONS(213),
        [anon_sym_RBRACK] = ACTIONS(389),
        [sym_comment] = ACTIONS(73),
    },
    [142] = {
        [anon_sym_COMMA] = ACTIONS(391),
        [anon_sym_COLON] = ACTIONS(391),
        [anon_sym_for] = ACTIONS(391),
        [anon_sym_in] = ACTIONS(391),
        [anon_sym_as] = ACTIONS(391),
        [anon_sym_LPAREN] = ACTIONS(391),
        [anon_sym_RPAREN] = ACTIONS(391),
        [anon_sym_PLUS] = ACTIONS(391),
        [anon_sym_LBRACK] = ACTIONS(391),
        [anon_sym_RBRACK] = ACTIONS(391),
        [anon_sym_RBRACE] = ACTIONS(391),
        [sym_comment] = ACTIONS(73),
    },
    [143] = {
        [anon_sym_LPAREN] = ACTIONS(209),
        [anon_sym_RPAREN] = ACTIONS(393),
        [anon_sym_PLUS] = ACTIONS(211),
        [anon_sym_LBRACK] = ACTIONS(213),
        [sym_comment] = ACTIONS(73),
    },
    [144] = {
        [anon_sym_COMMA] = ACTIONS(395),
        [anon_sym_LPAREN] = ACTIONS(209),
        [anon_sym_RPAREN] = ACTIONS(395),
        [anon_sym_PLUS] = ACTIONS(211),
        [anon_sym_LBRACK] = ACTIONS(213),
        [sym_comment] = ACTIONS(73),
    },
    [145] = {
        [anon_sym_COMMA] = ACTIONS(247),
        [anon_sym_LPAREN] = ACTIONS(247),
        [anon_sym_PLUS] = ACTIONS(247),
        [anon_sym_LBRACK] = ACTIONS(247),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(247),
    },
    [146] = {
        [anon_sym_COMMA] = ACTIONS(397),
        [anon_sym_LPAREN] = ACTIONS(209),
        [anon_sym_RPAREN] = ACTIONS(399),
        [anon_sym_PLUS] = ACTIONS(211),
        [anon_sym_LBRACK] = ACTIONS(213),
        [sym_comment] = ACTIONS(73),
    },
    [147] = {
        [anon_sym_COMMA] = ACTIONS(397),
        [anon_sym_RPAREN] = ACTIONS(399),
        [sym_comment] = ACTIONS(73),
    },
    [148] = {
        [aux_sym_call_repeat2] = STATE(167),
        [anon_sym_COMMA] = ACTIONS(401),
        [anon_sym_RPAREN] = ACTIONS(399),
        [sym_comment] = ACTIONS(73),
    },
    [149] = {
        [anon_sym_RPAREN] = ACTIONS(399),
        [sym_comment] = ACTIONS(73),
    },
    [150] = {
        [sym__expression] = STATE(151),
        [sym_binary_operator] = STATE(36),
        [sym_subscript] = STATE(36),
        [sym_call] = STATE(36),
        [sym_keyword_argument] = STATE(152),
        [sym_list_splat_argument] = STATE(153),
        [sym_dictionary_splat_argument] = STATE(154),
        [sym_list] = STATE(36),
        [sym_list_comprehension] = STATE(36),
        [sym_dictionary] = STATE(36),
        [sym_dictionary_comprehension] = STATE(36),
        [sym_set] = STATE(36),
        [sym_set_comprehension] = STATE(36),
        [anon_sym_STAR] = ACTIONS(193),
        [anon_sym_LBRACK] = ACTIONS(117),
        [anon_sym_STAR_STAR] = ACTIONS(195),
        [anon_sym_LBRACE] = ACTIONS(119),
        [sym_number] = ACTIONS(121),
        [sym_identifier] = ACTIONS(197),
        [sym_comment] = ACTIONS(73),
    },
    [151] = {
        [anon_sym_COMMA] = ACTIONS(403),
        [anon_sym_LPAREN] = ACTIONS(209),
        [anon_sym_RPAREN] = ACTIONS(405),
        [anon_sym_PLUS] = ACTIONS(211),
        [anon_sym_LBRACK] = ACTIONS(213),
        [sym_comment] = ACTIONS(73),
    },
    [152] = {
        [anon_sym_COMMA] = ACTIONS(403),
        [anon_sym_RPAREN] = ACTIONS(405),
        [sym_comment] = ACTIONS(73),
    },
    [153] = {
        [aux_sym_call_repeat2] = STATE(157),
        [anon_sym_COMMA] = ACTIONS(407),
        [anon_sym_RPAREN] = ACTIONS(405),
        [sym_comment] = ACTIONS(73),
    },
    [154] = {
        [anon_sym_RPAREN] = ACTIONS(405),
        [sym_comment] = ACTIONS(73),
    },
    [155] = {
        [anon_sym_COMMA] = ACTIONS(263),
        [anon_sym_COLON] = ACTIONS(263),
        [anon_sym_for] = ACTIONS(263),
        [anon_sym_in] = ACTIONS(263),
        [anon_sym_as] = ACTIONS(263),
        [anon_sym_LPAREN] = ACTIONS(263),
        [anon_sym_RPAREN] = ACTIONS(263),
        [anon_sym_PLUS] = ACTIONS(263),
        [anon_sym_LBRACK] = ACTIONS(263),
        [anon_sym_RBRACK] = ACTIONS(263),
        [anon_sym_RBRACE] = ACTIONS(263),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(263),
    },
    [156] = {
        [sym__expression] = STATE(81),
        [sym_binary_operator] = STATE(36),
        [sym_subscript] = STATE(36),
        [sym_call] = STATE(36),
        [sym_keyword_argument] = STATE(82),
        [sym_dictionary_splat_argument] = STATE(162),
        [sym_list] = STATE(36),
        [sym_list_comprehension] = STATE(36),
        [sym_dictionary] = STATE(36),
        [sym_dictionary_comprehension] = STATE(36),
        [sym_set] = STATE(36),
        [sym_set_comprehension] = STATE(36),
        [anon_sym_LBRACK] = ACTIONS(117),
        [anon_sym_STAR_STAR] = ACTIONS(195),
        [anon_sym_LBRACE] = ACTIONS(119),
        [sym_number] = ACTIONS(121),
        [sym_identifier] = ACTIONS(197),
        [sym_comment] = ACTIONS(73),
    },
    [157] = {
        [anon_sym_COMMA] = ACTIONS(409),
        [anon_sym_RPAREN] = ACTIONS(411),
        [sym_comment] = ACTIONS(73),
    },
    [158] = {
        [sym__expression] = STATE(77),
        [sym_binary_operator] = STATE(36),
        [sym_subscript] = STATE(36),
        [sym_call] = STATE(36),
        [sym_keyword_argument] = STATE(78),
        [sym_dictionary_splat_argument] = STATE(160),
        [sym_list] = STATE(36),
        [sym_list_comprehension] = STATE(36),
        [sym_dictionary] = STATE(36),
        [sym_dictionary_comprehension] = STATE(36),
        [sym_set] = STATE(36),
        [sym_set_comprehension] = STATE(36),
        [anon_sym_LBRACK] = ACTIONS(117),
        [anon_sym_STAR_STAR] = ACTIONS(195),
        [anon_sym_LBRACE] = ACTIONS(119),
        [sym_number] = ACTIONS(121),
        [sym_identifier] = ACTIONS(197),
        [sym_comment] = ACTIONS(73),
    },
    [159] = {
        [anon_sym_COMMA] = ACTIONS(269),
        [anon_sym_COLON] = ACTIONS(269),
        [anon_sym_for] = ACTIONS(269),
        [anon_sym_in] = ACTIONS(269),
        [anon_sym_as] = ACTIONS(269),
        [anon_sym_LPAREN] = ACTIONS(269),
        [anon_sym_RPAREN] = ACTIONS(269),
        [anon_sym_PLUS] = ACTIONS(269),
        [anon_sym_LBRACK] = ACTIONS(269),
        [anon_sym_RBRACK] = ACTIONS(269),
        [anon_sym_RBRACE] = ACTIONS(269),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(269),
    },
    [160] = {
        [anon_sym_RPAREN] = ACTIONS(413),
        [sym_comment] = ACTIONS(73),
    },
    [161] = {
        [anon_sym_COMMA] = ACTIONS(275),
        [anon_sym_COLON] = ACTIONS(275),
        [anon_sym_for] = ACTIONS(275),
        [anon_sym_in] = ACTIONS(275),
        [anon_sym_as] = ACTIONS(275),
        [anon_sym_LPAREN] = ACTIONS(275),
        [anon_sym_RPAREN] = ACTIONS(275),
        [anon_sym_PLUS] = ACTIONS(275),
        [anon_sym_LBRACK] = ACTIONS(275),
        [anon_sym_RBRACK] = ACTIONS(275),
        [anon_sym_RBRACE] = ACTIONS(275),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(275),
    },
    [162] = {
        [anon_sym_RPAREN] = ACTIONS(415),
        [sym_comment] = ACTIONS(73),
    },
    [163] = {
        [anon_sym_COMMA] = ACTIONS(281),
        [anon_sym_COLON] = ACTIONS(281),
        [anon_sym_for] = ACTIONS(281),
        [anon_sym_in] = ACTIONS(281),
        [anon_sym_as] = ACTIONS(281),
        [anon_sym_LPAREN] = ACTIONS(281),
        [anon_sym_RPAREN] = ACTIONS(281),
        [anon_sym_PLUS] = ACTIONS(281),
        [anon_sym_LBRACK] = ACTIONS(281),
        [anon_sym_RBRACK] = ACTIONS(281),
        [anon_sym_RBRACE] = ACTIONS(281),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(281),
    },
    [164] = {
        [anon_sym_RPAREN] = ACTIONS(411),
        [anon_sym_STAR] = ACTIONS(283),
        [anon_sym_LBRACK] = ACTIONS(285),
        [anon_sym_STAR_STAR] = ACTIONS(285),
        [anon_sym_LBRACE] = ACTIONS(285),
        [sym_number] = ACTIONS(283),
        [sym_identifier] = ACTIONS(283),
        [sym_comment] = ACTIONS(73),
    },
    [165] = {
        [anon_sym_COMMA] = ACTIONS(287),
        [anon_sym_COLON] = ACTIONS(287),
        [anon_sym_for] = ACTIONS(287),
        [anon_sym_in] = ACTIONS(287),
        [anon_sym_as] = ACTIONS(287),
        [anon_sym_LPAREN] = ACTIONS(287),
        [anon_sym_RPAREN] = ACTIONS(287),
        [anon_sym_PLUS] = ACTIONS(287),
        [anon_sym_LBRACK] = ACTIONS(287),
        [anon_sym_RBRACK] = ACTIONS(287),
        [anon_sym_RBRACE] = ACTIONS(287),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(287),
    },
    [166] = {
        [sym__expression] = STATE(81),
        [sym_binary_operator] = STATE(36),
        [sym_subscript] = STATE(36),
        [sym_call] = STATE(36),
        [sym_keyword_argument] = STATE(82),
        [sym_dictionary_splat_argument] = STATE(169),
        [sym_list] = STATE(36),
        [sym_list_comprehension] = STATE(36),
        [sym_dictionary] = STATE(36),
        [sym_dictionary_comprehension] = STATE(36),
        [sym_set] = STATE(36),
        [sym_set_comprehension] = STATE(36),
        [anon_sym_LBRACK] = ACTIONS(117),
        [anon_sym_STAR_STAR] = ACTIONS(195),
        [anon_sym_LBRACE] = ACTIONS(119),
        [sym_number] = ACTIONS(121),
        [sym_identifier] = ACTIONS(197),
        [sym_comment] = ACTIONS(73),
    },
    [167] = {
        [anon_sym_COMMA] = ACTIONS(417),
        [anon_sym_RPAREN] = ACTIONS(405),
        [sym_comment] = ACTIONS(73),
    },
    [168] = {
        [sym__expression] = STATE(77),
        [sym_binary_operator] = STATE(36),
        [sym_subscript] = STATE(36),
        [sym_call] = STATE(36),
        [sym_keyword_argument] = STATE(78),
        [sym_dictionary_splat_argument] = STATE(162),
        [sym_list] = STATE(36),
        [sym_list_comprehension] = STATE(36),
        [sym_dictionary] = STATE(36),
        [sym_dictionary_comprehension] = STATE(36),
        [sym_set] = STATE(36),
        [sym_set_comprehension] = STATE(36),
        [anon_sym_LBRACK] = ACTIONS(117),
        [anon_sym_STAR_STAR] = ACTIONS(195),
        [anon_sym_LBRACE] = ACTIONS(119),
        [sym_number] = ACTIONS(121),
        [sym_identifier] = ACTIONS(197),
        [sym_comment] = ACTIONS(73),
    },
    [169] = {
        [anon_sym_RPAREN] = ACTIONS(411),
        [sym_comment] = ACTIONS(73),
    },
    [170] = {
        [anon_sym_RPAREN] = ACTIONS(405),
        [anon_sym_STAR] = ACTIONS(291),
        [anon_sym_LBRACK] = ACTIONS(293),
        [anon_sym_STAR_STAR] = ACTIONS(293),
        [anon_sym_LBRACE] = ACTIONS(293),
        [sym_number] = ACTIONS(291),
        [sym_identifier] = ACTIONS(291),
        [sym_comment] = ACTIONS(73),
    },
    [171] = {
        [ts_builtin_sym_end] = ACTIONS(419),
        [anon_sym_SEMI] = ACTIONS(419),
        [anon_sym_print] = ACTIONS(421),
        [anon_sym_return] = ACTIONS(421),
        [anon_sym_del] = ACTIONS(421),
        [sym_pass_statement] = ACTIONS(421),
        [sym_break_statement] = ACTIONS(421),
        [sym_continue_statement] = ACTIONS(421),
        [anon_sym_if] = ACTIONS(421),
        [anon_sym_for] = ACTIONS(421),
        [anon_sym_while] = ACTIONS(421),
        [anon_sym_try] = ACTIONS(421),
        [anon_sym_with] = ACTIONS(421),
        [anon_sym_def] = ACTIONS(421),
        [anon_sym_class] = ACTIONS(421),
        [anon_sym_AT] = ACTIONS(419),
        [anon_sym_LBRACK] = ACTIONS(419),
        [anon_sym_LBRACE] = ACTIONS(419),
        [sym_number] = ACTIONS(421),
        [sym_identifier] = ACTIONS(423),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(419),
    },
    [172] = {
        [anon_sym_COMMA] = ACTIONS(297),
        [anon_sym_COLON] = ACTIONS(297),
        [anon_sym_for] = ACTIONS(297),
        [anon_sym_in] = ACTIONS(297),
        [anon_sym_as] = ACTIONS(297),
        [anon_sym_LPAREN] = ACTIONS(297),
        [anon_sym_RPAREN] = ACTIONS(297),
        [anon_sym_PLUS] = ACTIONS(297),
        [anon_sym_LBRACK] = ACTIONS(297),
        [anon_sym_RBRACK] = ACTIONS(297),
        [anon_sym_RBRACE] = ACTIONS(297),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(297),
    },
    [173] = {
        [aux_sym_print_statement_repeat1] = STATE(189),
        [anon_sym_COMMA] = ACTIONS(425),
        [anon_sym_COLON] = ACTIONS(301),
        [anon_sym_for] = ACTIONS(427),
        [anon_sym_LPAREN] = ACTIONS(209),
        [anon_sym_PLUS] = ACTIONS(211),
        [anon_sym_LBRACK] = ACTIONS(213),
        [anon_sym_RBRACE] = ACTIONS(429),
        [sym_comment] = ACTIONS(73),
    },
    [174] = {
        [aux_sym_dictionary_repeat1] = STATE(178),
        [anon_sym_COMMA] = ACTIONS(431),
        [anon_sym_for] = ACTIONS(433),
        [anon_sym_RBRACE] = ACTIONS(435),
        [sym_comment] = ACTIONS(73),
    },
    [175] = {
        [sym__expression] = STATE(104),
        [sym_binary_operator] = STATE(36),
        [sym_subscript] = STATE(36),
        [sym_call] = STATE(36),
        [sym_list] = STATE(36),
        [sym_list_comprehension] = STATE(36),
        [sym_dictionary] = STATE(36),
        [sym_dictionary_comprehension] = STATE(36),
        [sym_pair] = STATE(118),
        [sym_set] = STATE(36),
        [sym_set_comprehension] = STATE(36),
        [anon_sym_LBRACK] = ACTIONS(117),
        [anon_sym_LBRACE] = ACTIONS(119),
        [anon_sym_RBRACE] = ACTIONS(437),
        [sym_number] = ACTIONS(121),
        [sym_identifier] = ACTIONS(121),
        [sym_comment] = ACTIONS(73),
    },
    [176] = {
        [sym_expression_list] = STATE(182),
        [sym__expression] = STATE(109),
        [sym_binary_operator] = STATE(36),
        [sym_subscript] = STATE(36),
        [sym_call] = STATE(36),
        [sym_list] = STATE(36),
        [sym_list_comprehension] = STATE(36),
        [sym_dictionary] = STATE(36),
        [sym_dictionary_comprehension] = STATE(36),
        [sym_set] = STATE(36),
        [sym_set_comprehension] = STATE(36),
        [anon_sym_LBRACK] = ACTIONS(117),
        [anon_sym_LBRACE] = ACTIONS(119),
        [sym_number] = ACTIONS(121),
        [sym_identifier] = ACTIONS(121),
        [sym_comment] = ACTIONS(73),
    },
    [177] = {
        [anon_sym_COMMA] = ACTIONS(315),
        [anon_sym_COLON] = ACTIONS(315),
        [anon_sym_for] = ACTIONS(315),
        [anon_sym_in] = ACTIONS(315),
        [anon_sym_as] = ACTIONS(315),
        [anon_sym_LPAREN] = ACTIONS(315),
        [anon_sym_RPAREN] = ACTIONS(315),
        [anon_sym_PLUS] = ACTIONS(315),
        [anon_sym_LBRACK] = ACTIONS(315),
        [anon_sym_RBRACK] = ACTIONS(315),
        [anon_sym_RBRACE] = ACTIONS(315),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(315),
    },
    [178] = {
        [anon_sym_COMMA] = ACTIONS(439),
        [anon_sym_RBRACE] = ACTIONS(437),
        [sym_comment] = ACTIONS(73),
    },
    [179] = {
        [sym__expression] = STATE(104),
        [sym_binary_operator] = STATE(36),
        [sym_subscript] = STATE(36),
        [sym_call] = STATE(36),
        [sym_list] = STATE(36),
        [sym_list_comprehension] = STATE(36),
        [sym_dictionary] = STATE(36),
        [sym_dictionary_comprehension] = STATE(36),
        [sym_pair] = STATE(105),
        [sym_set] = STATE(36),
        [sym_set_comprehension] = STATE(36),
        [anon_sym_LBRACK] = ACTIONS(117),
        [anon_sym_LBRACE] = ACTIONS(119),
        [anon_sym_RBRACE] = ACTIONS(441),
        [sym_number] = ACTIONS(121),
        [sym_identifier] = ACTIONS(121),
        [sym_comment] = ACTIONS(73),
    },
    [180] = {
        [anon_sym_COMMA] = ACTIONS(321),
        [anon_sym_COLON] = ACTIONS(321),
        [anon_sym_for] = ACTIONS(321),
        [anon_sym_in] = ACTIONS(321),
        [anon_sym_as] = ACTIONS(321),
        [anon_sym_LPAREN] = ACTIONS(321),
        [anon_sym_RPAREN] = ACTIONS(321),
        [anon_sym_PLUS] = ACTIONS(321),
        [anon_sym_LBRACK] = ACTIONS(321),
        [anon_sym_RBRACK] = ACTIONS(321),
        [anon_sym_RBRACE] = ACTIONS(321),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(321),
    },
    [181] = {
        [anon_sym_COMMA] = ACTIONS(323),
        [anon_sym_COLON] = ACTIONS(323),
        [anon_sym_for] = ACTIONS(323),
        [anon_sym_in] = ACTIONS(323),
        [anon_sym_as] = ACTIONS(323),
        [anon_sym_LPAREN] = ACTIONS(323),
        [anon_sym_RPAREN] = ACTIONS(323),
        [anon_sym_PLUS] = ACTIONS(323),
        [anon_sym_LBRACK] = ACTIONS(323),
        [anon_sym_RBRACK] = ACTIONS(323),
        [anon_sym_RBRACE] = ACTIONS(323),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(323),
    },
    [182] = {
        [anon_sym_in] = ACTIONS(443),
        [sym_comment] = ACTIONS(73),
    },
    [183] = {
        [sym__expression] = STATE(184),
        [sym_binary_operator] = STATE(36),
        [sym_subscript] = STATE(36),
        [sym_call] = STATE(36),
        [sym_list] = STATE(36),
        [sym_list_comprehension] = STATE(36),
        [sym_dictionary] = STATE(36),
        [sym_dictionary_comprehension] = STATE(36),
        [sym_set] = STATE(36),
        [sym_set_comprehension] = STATE(36),
        [anon_sym_LBRACK] = ACTIONS(117),
        [anon_sym_LBRACE] = ACTIONS(119),
        [sym_number] = ACTIONS(121),
        [sym_identifier] = ACTIONS(121),
        [sym_comment] = ACTIONS(73),
    },
    [184] = {
        [anon_sym_LPAREN] = ACTIONS(209),
        [anon_sym_PLUS] = ACTIONS(211),
        [anon_sym_LBRACK] = ACTIONS(213),
        [anon_sym_RBRACE] = ACTIONS(445),
        [sym_comment] = ACTIONS(73),
    },
    [185] = {
        [anon_sym_COMMA] = ACTIONS(345),
        [anon_sym_COLON] = ACTIONS(345),
        [anon_sym_for] = ACTIONS(345),
        [anon_sym_in] = ACTIONS(345),
        [anon_sym_as] = ACTIONS(345),
        [anon_sym_LPAREN] = ACTIONS(345),
        [anon_sym_RPAREN] = ACTIONS(345),
        [anon_sym_PLUS] = ACTIONS(345),
        [anon_sym_LBRACK] = ACTIONS(345),
        [anon_sym_RBRACK] = ACTIONS(345),
        [anon_sym_RBRACE] = ACTIONS(345),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(345),
    },
    [186] = {
        [sym__expression] = STATE(114),
        [sym_binary_operator] = STATE(36),
        [sym_subscript] = STATE(36),
        [sym_call] = STATE(36),
        [sym_list] = STATE(36),
        [sym_list_comprehension] = STATE(36),
        [sym_dictionary] = STATE(36),
        [sym_dictionary_comprehension] = STATE(36),
        [sym_set] = STATE(36),
        [sym_set_comprehension] = STATE(36),
        [anon_sym_LBRACK] = ACTIONS(117),
        [anon_sym_LBRACE] = ACTIONS(119),
        [anon_sym_RBRACE] = ACTIONS(447),
        [sym_number] = ACTIONS(121),
        [sym_identifier] = ACTIONS(121),
        [sym_comment] = ACTIONS(73),
    },
    [187] = {
        [sym_expression_list] = STATE(193),
        [sym__expression] = STATE(109),
        [sym_binary_operator] = STATE(36),
        [sym_subscript] = STATE(36),
        [sym_call] = STATE(36),
        [sym_list] = STATE(36),
        [sym_list_comprehension] = STATE(36),
        [sym_dictionary] = STATE(36),
        [sym_dictionary_comprehension] = STATE(36),
        [sym_set] = STATE(36),
        [sym_set_comprehension] = STATE(36),
        [anon_sym_LBRACK] = ACTIONS(117),
        [anon_sym_LBRACE] = ACTIONS(119),
        [sym_number] = ACTIONS(121),
        [sym_identifier] = ACTIONS(121),
        [sym_comment] = ACTIONS(73),
    },
    [188] = {
        [anon_sym_COMMA] = ACTIONS(351),
        [anon_sym_COLON] = ACTIONS(351),
        [anon_sym_for] = ACTIONS(351),
        [anon_sym_in] = ACTIONS(351),
        [anon_sym_as] = ACTIONS(351),
        [anon_sym_LPAREN] = ACTIONS(351),
        [anon_sym_RPAREN] = ACTIONS(351),
        [anon_sym_PLUS] = ACTIONS(351),
        [anon_sym_LBRACK] = ACTIONS(351),
        [anon_sym_RBRACK] = ACTIONS(351),
        [anon_sym_RBRACE] = ACTIONS(351),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(351),
    },
    [189] = {
        [anon_sym_COMMA] = ACTIONS(449),
        [anon_sym_RBRACE] = ACTIONS(447),
        [sym_comment] = ACTIONS(73),
    },
    [190] = {
        [sym__expression] = STATE(113),
        [sym_binary_operator] = STATE(36),
        [sym_subscript] = STATE(36),
        [sym_call] = STATE(36),
        [sym_list] = STATE(36),
        [sym_list_comprehension] = STATE(36),
        [sym_dictionary] = STATE(36),
        [sym_dictionary_comprehension] = STATE(36),
        [sym_set] = STATE(36),
        [sym_set_comprehension] = STATE(36),
        [anon_sym_LBRACK] = ACTIONS(117),
        [anon_sym_LBRACE] = ACTIONS(119),
        [anon_sym_RBRACE] = ACTIONS(451),
        [sym_number] = ACTIONS(121),
        [sym_identifier] = ACTIONS(121),
        [sym_comment] = ACTIONS(73),
    },
    [191] = {
        [anon_sym_COMMA] = ACTIONS(357),
        [anon_sym_COLON] = ACTIONS(357),
        [anon_sym_for] = ACTIONS(357),
        [anon_sym_in] = ACTIONS(357),
        [anon_sym_as] = ACTIONS(357),
        [anon_sym_LPAREN] = ACTIONS(357),
        [anon_sym_RPAREN] = ACTIONS(357),
        [anon_sym_PLUS] = ACTIONS(357),
        [anon_sym_LBRACK] = ACTIONS(357),
        [anon_sym_RBRACK] = ACTIONS(357),
        [anon_sym_RBRACE] = ACTIONS(357),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(357),
    },
    [192] = {
        [anon_sym_COMMA] = ACTIONS(359),
        [anon_sym_COLON] = ACTIONS(359),
        [anon_sym_for] = ACTIONS(359),
        [anon_sym_in] = ACTIONS(359),
        [anon_sym_as] = ACTIONS(359),
        [anon_sym_LPAREN] = ACTIONS(359),
        [anon_sym_RPAREN] = ACTIONS(359),
        [anon_sym_PLUS] = ACTIONS(359),
        [anon_sym_LBRACK] = ACTIONS(359),
        [anon_sym_RBRACK] = ACTIONS(359),
        [anon_sym_RBRACE] = ACTIONS(359),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(359),
    },
    [193] = {
        [anon_sym_in] = ACTIONS(453),
        [sym_comment] = ACTIONS(73),
    },
    [194] = {
        [sym__expression] = STATE(195),
        [sym_binary_operator] = STATE(36),
        [sym_subscript] = STATE(36),
        [sym_call] = STATE(36),
        [sym_list] = STATE(36),
        [sym_list_comprehension] = STATE(36),
        [sym_dictionary] = STATE(36),
        [sym_dictionary_comprehension] = STATE(36),
        [sym_set] = STATE(36),
        [sym_set_comprehension] = STATE(36),
        [anon_sym_LBRACK] = ACTIONS(117),
        [anon_sym_LBRACE] = ACTIONS(119),
        [sym_number] = ACTIONS(121),
        [sym_identifier] = ACTIONS(121),
        [sym_comment] = ACTIONS(73),
    },
    [195] = {
        [anon_sym_LPAREN] = ACTIONS(209),
        [anon_sym_PLUS] = ACTIONS(211),
        [anon_sym_LBRACK] = ACTIONS(213),
        [anon_sym_RBRACE] = ACTIONS(455),
        [sym_comment] = ACTIONS(73),
    },
    [196] = {
        [anon_sym_COMMA] = ACTIONS(365),
        [anon_sym_COLON] = ACTIONS(365),
        [anon_sym_for] = ACTIONS(365),
        [anon_sym_in] = ACTIONS(365),
        [anon_sym_as] = ACTIONS(365),
        [anon_sym_LPAREN] = ACTIONS(365),
        [anon_sym_RPAREN] = ACTIONS(365),
        [anon_sym_PLUS] = ACTIONS(365),
        [anon_sym_LBRACK] = ACTIONS(365),
        [anon_sym_RBRACK] = ACTIONS(365),
        [anon_sym_RBRACE] = ACTIONS(365),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(365),
    },
    [197] = {
        [anon_sym_COMMA] = ACTIONS(367),
        [anon_sym_COLON] = ACTIONS(367),
        [anon_sym_for] = ACTIONS(367),
        [anon_sym_in] = ACTIONS(367),
        [anon_sym_as] = ACTIONS(367),
        [anon_sym_LPAREN] = ACTIONS(367),
        [anon_sym_RPAREN] = ACTIONS(367),
        [anon_sym_PLUS] = ACTIONS(367),
        [anon_sym_LBRACK] = ACTIONS(367),
        [anon_sym_RBRACK] = ACTIONS(367),
        [anon_sym_RBRACE] = ACTIONS(367),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(367),
    },
    [198] = {
        [aux_sym_print_statement_repeat1] = STATE(202),
        [anon_sym_COMMA] = ACTIONS(457),
        [anon_sym_for] = ACTIONS(459),
        [anon_sym_LPAREN] = ACTIONS(209),
        [anon_sym_PLUS] = ACTIONS(211),
        [anon_sym_LBRACK] = ACTIONS(213),
        [anon_sym_RBRACK] = ACTIONS(461),
        [sym_comment] = ACTIONS(73),
    },
    [199] = {
        [sym__expression] = STATE(114),
        [sym_binary_operator] = STATE(36),
        [sym_subscript] = STATE(36),
        [sym_call] = STATE(36),
        [sym_list] = STATE(36),
        [sym_list_comprehension] = STATE(36),
        [sym_dictionary] = STATE(36),
        [sym_dictionary_comprehension] = STATE(36),
        [sym_set] = STATE(36),
        [sym_set_comprehension] = STATE(36),
        [anon_sym_LBRACK] = ACTIONS(117),
        [anon_sym_RBRACK] = ACTIONS(463),
        [anon_sym_LBRACE] = ACTIONS(119),
        [sym_number] = ACTIONS(121),
        [sym_identifier] = ACTIONS(121),
        [sym_comment] = ACTIONS(73),
    },
    [200] = {
        [sym_expression_list] = STATE(206),
        [sym__expression] = STATE(109),
        [sym_binary_operator] = STATE(36),
        [sym_subscript] = STATE(36),
        [sym_call] = STATE(36),
        [sym_list] = STATE(36),
        [sym_list_comprehension] = STATE(36),
        [sym_dictionary] = STATE(36),
        [sym_dictionary_comprehension] = STATE(36),
        [sym_set] = STATE(36),
        [sym_set_comprehension] = STATE(36),
        [anon_sym_LBRACK] = ACTIONS(117),
        [anon_sym_LBRACE] = ACTIONS(119),
        [sym_number] = ACTIONS(121),
        [sym_identifier] = ACTIONS(121),
        [sym_comment] = ACTIONS(73),
    },
    [201] = {
        [anon_sym_COMMA] = ACTIONS(377),
        [anon_sym_COLON] = ACTIONS(377),
        [anon_sym_for] = ACTIONS(377),
        [anon_sym_in] = ACTIONS(377),
        [anon_sym_as] = ACTIONS(377),
        [anon_sym_LPAREN] = ACTIONS(377),
        [anon_sym_RPAREN] = ACTIONS(377),
        [anon_sym_PLUS] = ACTIONS(377),
        [anon_sym_LBRACK] = ACTIONS(377),
        [anon_sym_RBRACK] = ACTIONS(377),
        [anon_sym_RBRACE] = ACTIONS(377),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(377),
    },
    [202] = {
        [anon_sym_COMMA] = ACTIONS(465),
        [anon_sym_RBRACK] = ACTIONS(463),
        [sym_comment] = ACTIONS(73),
    },
    [203] = {
        [sym__expression] = STATE(113),
        [sym_binary_operator] = STATE(36),
        [sym_subscript] = STATE(36),
        [sym_call] = STATE(36),
        [sym_list] = STATE(36),
        [sym_list_comprehension] = STATE(36),
        [sym_dictionary] = STATE(36),
        [sym_dictionary_comprehension] = STATE(36),
        [sym_set] = STATE(36),
        [sym_set_comprehension] = STATE(36),
        [anon_sym_LBRACK] = ACTIONS(117),
        [anon_sym_RBRACK] = ACTIONS(467),
        [anon_sym_LBRACE] = ACTIONS(119),
        [sym_number] = ACTIONS(121),
        [sym_identifier] = ACTIONS(121),
        [sym_comment] = ACTIONS(73),
    },
    [204] = {
        [anon_sym_COMMA] = ACTIONS(383),
        [anon_sym_COLON] = ACTIONS(383),
        [anon_sym_for] = ACTIONS(383),
        [anon_sym_in] = ACTIONS(383),
        [anon_sym_as] = ACTIONS(383),
        [anon_sym_LPAREN] = ACTIONS(383),
        [anon_sym_RPAREN] = ACTIONS(383),
        [anon_sym_PLUS] = ACTIONS(383),
        [anon_sym_LBRACK] = ACTIONS(383),
        [anon_sym_RBRACK] = ACTIONS(383),
        [anon_sym_RBRACE] = ACTIONS(383),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(383),
    },
    [205] = {
        [anon_sym_COMMA] = ACTIONS(385),
        [anon_sym_COLON] = ACTIONS(385),
        [anon_sym_for] = ACTIONS(385),
        [anon_sym_in] = ACTIONS(385),
        [anon_sym_as] = ACTIONS(385),
        [anon_sym_LPAREN] = ACTIONS(385),
        [anon_sym_RPAREN] = ACTIONS(385),
        [anon_sym_PLUS] = ACTIONS(385),
        [anon_sym_LBRACK] = ACTIONS(385),
        [anon_sym_RBRACK] = ACTIONS(385),
        [anon_sym_RBRACE] = ACTIONS(385),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(385),
    },
    [206] = {
        [anon_sym_in] = ACTIONS(469),
        [sym_comment] = ACTIONS(73),
    },
    [207] = {
        [sym__expression] = STATE(208),
        [sym_binary_operator] = STATE(36),
        [sym_subscript] = STATE(36),
        [sym_call] = STATE(36),
        [sym_list] = STATE(36),
        [sym_list_comprehension] = STATE(36),
        [sym_dictionary] = STATE(36),
        [sym_dictionary_comprehension] = STATE(36),
        [sym_set] = STATE(36),
        [sym_set_comprehension] = STATE(36),
        [anon_sym_LBRACK] = ACTIONS(117),
        [anon_sym_LBRACE] = ACTIONS(119),
        [sym_number] = ACTIONS(121),
        [sym_identifier] = ACTIONS(121),
        [sym_comment] = ACTIONS(73),
    },
    [208] = {
        [anon_sym_LPAREN] = ACTIONS(209),
        [anon_sym_PLUS] = ACTIONS(211),
        [anon_sym_LBRACK] = ACTIONS(213),
        [anon_sym_RBRACK] = ACTIONS(471),
        [sym_comment] = ACTIONS(73),
    },
    [209] = {
        [anon_sym_COMMA] = ACTIONS(391),
        [anon_sym_COLON] = ACTIONS(391),
        [anon_sym_for] = ACTIONS(391),
        [anon_sym_in] = ACTIONS(391),
        [anon_sym_as] = ACTIONS(391),
        [anon_sym_LPAREN] = ACTIONS(391),
        [anon_sym_RPAREN] = ACTIONS(391),
        [anon_sym_PLUS] = ACTIONS(391),
        [anon_sym_LBRACK] = ACTIONS(391),
        [anon_sym_RBRACK] = ACTIONS(391),
        [anon_sym_RBRACE] = ACTIONS(391),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(391),
    },
    [210] = {
        [aux_sym_dotted_name_repeat1] = STATE(221),
        [anon_sym_LPAREN] = ACTIONS(473),
        [anon_sym_DOT] = ACTIONS(475),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(473),
    },
    [211] = {
        [sym_arguments] = STATE(214),
        [anon_sym_LPAREN] = ACTIONS(477),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(479),
    },
    [212] = {
        [sym__expression] = STATE(216),
        [sym_binary_operator] = STATE(36),
        [sym_subscript] = STATE(36),
        [sym_call] = STATE(36),
        [sym_list] = STATE(36),
        [sym_list_comprehension] = STATE(36),
        [sym_dictionary] = STATE(36),
        [sym_dictionary_comprehension] = STATE(36),
        [sym_set] = STATE(36),
        [sym_set_comprehension] = STATE(36),
        [anon_sym_LBRACK] = ACTIONS(117),
        [anon_sym_LBRACE] = ACTIONS(119),
        [sym_number] = ACTIONS(121),
        [sym_identifier] = ACTIONS(121),
        [sym_comment] = ACTIONS(73),
    },
    [213] = {
        [anon_sym_def] = ACTIONS(481),
        [anon_sym_class] = ACTIONS(481),
        [anon_sym_AT] = ACTIONS(481),
        [sym_comment] = ACTIONS(73),
    },
    [214] = {
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(483),
    },
    [215] = {
        [anon_sym_def] = ACTIONS(485),
        [anon_sym_class] = ACTIONS(485),
        [anon_sym_AT] = ACTIONS(485),
        [sym_comment] = ACTIONS(73),
    },
    [216] = {
        [aux_sym_print_statement_repeat1] = STATE(218),
        [anon_sym_COMMA] = ACTIONS(331),
        [anon_sym_LPAREN] = ACTIONS(209),
        [anon_sym_RPAREN] = ACTIONS(487),
        [anon_sym_PLUS] = ACTIONS(211),
        [anon_sym_LBRACK] = ACTIONS(213),
        [sym_comment] = ACTIONS(73),
    },
    [217] = {
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(489),
    },
    [218] = {
        [anon_sym_COMMA] = ACTIONS(335),
        [anon_sym_RPAREN] = ACTIONS(491),
        [sym_comment] = ACTIONS(73),
    },
    [219] = {
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(493),
    },
    [220] = {
        [sym_identifier] = ACTIONS(495),
        [sym_comment] = ACTIONS(73),
    },
    [221] = {
        [anon_sym_LPAREN] = ACTIONS(497),
        [anon_sym_DOT] = ACTIONS(499),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(497),
    },
    [222] = {
        [sym_identifier] = ACTIONS(501),
        [sym_comment] = ACTIONS(73),
    },
    [223] = {
        [anon_sym_LPAREN] = ACTIONS(503),
        [anon_sym_DOT] = ACTIONS(503),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(503),
    },
    [224] = {
        [anon_sym_LPAREN] = ACTIONS(505),
        [anon_sym_DOT] = ACTIONS(505),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(505),
    },
    [225] = {
        [anon_sym_COLON] = ACTIONS(507),
        [anon_sym_LPAREN] = ACTIONS(509),
        [sym_comment] = ACTIONS(73),
    },
    [226] = {
        [sym__simple_statement] = STATE(232),
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
        [sym__indent] = ACTIONS(511),
    },
    [227] = {
        [sym_expression_list] = STATE(228),
        [sym__expression] = STATE(109),
        [sym_binary_operator] = STATE(36),
        [sym_subscript] = STATE(36),
        [sym_call] = STATE(36),
        [sym_list] = STATE(36),
        [sym_list_comprehension] = STATE(36),
        [sym_dictionary] = STATE(36),
        [sym_dictionary_comprehension] = STATE(36),
        [sym_set] = STATE(36),
        [sym_set_comprehension] = STATE(36),
        [anon_sym_LBRACK] = ACTIONS(117),
        [anon_sym_LBRACE] = ACTIONS(119),
        [sym_number] = ACTIONS(121),
        [sym_identifier] = ACTIONS(121),
        [sym_comment] = ACTIONS(73),
    },
    [228] = {
        [anon_sym_RPAREN] = ACTIONS(513),
        [sym_comment] = ACTIONS(73),
    },
    [229] = {
        [anon_sym_COLON] = ACTIONS(515),
        [sym_comment] = ACTIONS(73),
    },
    [230] = {
        [sym__simple_statement] = STATE(232),
        [sym_print_statement] = STATE(5),
        [sym_expression_statement] = STATE(5),
        [sym_return_statement] = STATE(5),
        [sym_delete_statement] = STATE(5),
        [sym__suite] = STATE(233),
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
        [sym__indent] = ACTIONS(511),
    },
    [231] = {
        [sym__statement] = STATE(242),
        [sym__simple_statement] = STATE(243),
        [sym_print_statement] = STATE(5),
        [sym_expression_statement] = STATE(5),
        [sym_return_statement] = STATE(5),
        [sym_delete_statement] = STATE(5),
        [sym__compound_statement] = STATE(244),
        [sym_if_statement] = STATE(245),
        [sym_for_statement] = STATE(245),
        [sym_while_statement] = STATE(245),
        [sym_try_statement] = STATE(245),
        [sym_with_statement] = STATE(245),
        [sym_function_definition] = STATE(245),
        [sym_class_definition] = STATE(245),
        [sym_decorated_definition] = STATE(245),
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
        [aux_sym_module_repeat1] = STATE(246),
        [aux_sym_decorated_definition_repeat1] = STATE(247),
        [anon_sym_print] = ACTIONS(83),
        [anon_sym_return] = ACTIONS(85),
        [anon_sym_del] = ACTIONS(87),
        [sym_pass_statement] = ACTIONS(89),
        [sym_break_statement] = ACTIONS(89),
        [sym_continue_statement] = ACTIONS(89),
        [anon_sym_if] = ACTIONS(517),
        [anon_sym_for] = ACTIONS(519),
        [anon_sym_while] = ACTIONS(521),
        [anon_sym_try] = ACTIONS(523),
        [anon_sym_with] = ACTIONS(525),
        [anon_sym_def] = ACTIONS(527),
        [anon_sym_class] = ACTIONS(529),
        [anon_sym_AT] = ACTIONS(105),
        [anon_sym_LBRACK] = ACTIONS(107),
        [anon_sym_LBRACE] = ACTIONS(109),
        [sym_number] = ACTIONS(111),
        [sym_identifier] = ACTIONS(113),
        [sym_comment] = ACTIONS(73),
        [sym__dedent] = ACTIONS(531),
    },
    [232] = {
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(531),
    },
    [233] = {
        [ts_builtin_sym_end] = ACTIONS(533),
        [anon_sym_SEMI] = ACTIONS(533),
        [anon_sym_print] = ACTIONS(535),
        [anon_sym_return] = ACTIONS(535),
        [anon_sym_del] = ACTIONS(535),
        [sym_pass_statement] = ACTIONS(535),
        [sym_break_statement] = ACTIONS(535),
        [sym_continue_statement] = ACTIONS(535),
        [anon_sym_if] = ACTIONS(535),
        [anon_sym_for] = ACTIONS(535),
        [anon_sym_while] = ACTIONS(535),
        [anon_sym_try] = ACTIONS(535),
        [anon_sym_with] = ACTIONS(535),
        [anon_sym_def] = ACTIONS(535),
        [anon_sym_class] = ACTIONS(535),
        [anon_sym_AT] = ACTIONS(533),
        [anon_sym_LBRACK] = ACTIONS(533),
        [anon_sym_LBRACE] = ACTIONS(533),
        [sym_number] = ACTIONS(535),
        [sym_identifier] = ACTIONS(537),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(533),
    },
    [234] = {
        [ts_builtin_sym_end] = ACTIONS(539),
        [anon_sym_SEMI] = ACTIONS(539),
        [anon_sym_print] = ACTIONS(541),
        [anon_sym_return] = ACTIONS(541),
        [anon_sym_del] = ACTIONS(541),
        [sym_pass_statement] = ACTIONS(541),
        [sym_break_statement] = ACTIONS(541),
        [sym_continue_statement] = ACTIONS(541),
        [anon_sym_if] = ACTIONS(541),
        [anon_sym_elif] = ACTIONS(541),
        [anon_sym_else] = ACTIONS(541),
        [anon_sym_for] = ACTIONS(541),
        [anon_sym_while] = ACTIONS(541),
        [anon_sym_try] = ACTIONS(541),
        [anon_sym_except] = ACTIONS(541),
        [anon_sym_finally] = ACTIONS(541),
        [anon_sym_with] = ACTIONS(541),
        [anon_sym_def] = ACTIONS(541),
        [anon_sym_class] = ACTIONS(541),
        [anon_sym_AT] = ACTIONS(539),
        [anon_sym_LBRACK] = ACTIONS(539),
        [anon_sym_LBRACE] = ACTIONS(539),
        [sym_number] = ACTIONS(541),
        [sym_identifier] = ACTIONS(543),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(539),
    },
    [235] = {
        [sym__expression] = STATE(348),
        [sym_binary_operator] = STATE(36),
        [sym_subscript] = STATE(36),
        [sym_call] = STATE(36),
        [sym_list] = STATE(36),
        [sym_list_comprehension] = STATE(36),
        [sym_dictionary] = STATE(36),
        [sym_dictionary_comprehension] = STATE(36),
        [sym_set] = STATE(36),
        [sym_set_comprehension] = STATE(36),
        [anon_sym_LBRACK] = ACTIONS(117),
        [anon_sym_LBRACE] = ACTIONS(119),
        [sym_number] = ACTIONS(121),
        [sym_identifier] = ACTIONS(121),
        [sym_comment] = ACTIONS(73),
    },
    [236] = {
        [sym_expression_list] = STATE(342),
        [sym__expression] = STATE(109),
        [sym_binary_operator] = STATE(36),
        [sym_subscript] = STATE(36),
        [sym_call] = STATE(36),
        [sym_list] = STATE(36),
        [sym_list_comprehension] = STATE(36),
        [sym_dictionary] = STATE(36),
        [sym_dictionary_comprehension] = STATE(36),
        [sym_set] = STATE(36),
        [sym_set_comprehension] = STATE(36),
        [anon_sym_LBRACK] = ACTIONS(117),
        [anon_sym_LBRACE] = ACTIONS(119),
        [sym_number] = ACTIONS(121),
        [sym_identifier] = ACTIONS(121),
        [sym_comment] = ACTIONS(73),
    },
    [237] = {
        [sym__expression] = STATE(338),
        [sym_binary_operator] = STATE(36),
        [sym_subscript] = STATE(36),
        [sym_call] = STATE(36),
        [sym_list] = STATE(36),
        [sym_list_comprehension] = STATE(36),
        [sym_dictionary] = STATE(36),
        [sym_dictionary_comprehension] = STATE(36),
        [sym_set] = STATE(36),
        [sym_set_comprehension] = STATE(36),
        [anon_sym_LBRACK] = ACTIONS(117),
        [anon_sym_LBRACE] = ACTIONS(119),
        [sym_number] = ACTIONS(121),
        [sym_identifier] = ACTIONS(121),
        [sym_comment] = ACTIONS(73),
    },
    [238] = {
        [anon_sym_COLON] = ACTIONS(545),
        [sym_comment] = ACTIONS(73),
    },
    [239] = {
        [sym_with_item] = STATE(297),
        [sym__expression] = STATE(298),
        [sym_binary_operator] = STATE(36),
        [sym_subscript] = STATE(36),
        [sym_call] = STATE(36),
        [sym_list] = STATE(36),
        [sym_list_comprehension] = STATE(36),
        [sym_dictionary] = STATE(36),
        [sym_dictionary_comprehension] = STATE(36),
        [sym_set] = STATE(36),
        [sym_set_comprehension] = STATE(36),
        [anon_sym_LBRACK] = ACTIONS(117),
        [anon_sym_LBRACE] = ACTIONS(119),
        [sym_number] = ACTIONS(121),
        [sym_identifier] = ACTIONS(121),
        [sym_comment] = ACTIONS(73),
    },
    [240] = {
        [sym_identifier] = ACTIONS(547),
        [sym_comment] = ACTIONS(73),
    },
    [241] = {
        [sym_identifier] = ACTIONS(549),
        [sym_comment] = ACTIONS(73),
    },
    [242] = {
        [anon_sym_print] = ACTIONS(141),
        [anon_sym_return] = ACTIONS(141),
        [anon_sym_del] = ACTIONS(141),
        [sym_pass_statement] = ACTIONS(141),
        [sym_break_statement] = ACTIONS(141),
        [sym_continue_statement] = ACTIONS(141),
        [anon_sym_if] = ACTIONS(141),
        [anon_sym_for] = ACTIONS(141),
        [anon_sym_while] = ACTIONS(141),
        [anon_sym_try] = ACTIONS(141),
        [anon_sym_with] = ACTIONS(141),
        [anon_sym_def] = ACTIONS(141),
        [anon_sym_class] = ACTIONS(141),
        [anon_sym_AT] = ACTIONS(139),
        [anon_sym_LBRACK] = ACTIONS(139),
        [anon_sym_LBRACE] = ACTIONS(139),
        [sym_number] = ACTIONS(141),
        [sym_identifier] = ACTIONS(143),
        [sym_comment] = ACTIONS(73),
        [sym__dedent] = ACTIONS(139),
    },
    [243] = {
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(551),
    },
    [244] = {
        [anon_sym_print] = ACTIONS(149),
        [anon_sym_return] = ACTIONS(149),
        [anon_sym_del] = ACTIONS(149),
        [sym_pass_statement] = ACTIONS(149),
        [sym_break_statement] = ACTIONS(149),
        [sym_continue_statement] = ACTIONS(149),
        [anon_sym_if] = ACTIONS(149),
        [anon_sym_for] = ACTIONS(149),
        [anon_sym_while] = ACTIONS(149),
        [anon_sym_try] = ACTIONS(149),
        [anon_sym_with] = ACTIONS(149),
        [anon_sym_def] = ACTIONS(149),
        [anon_sym_class] = ACTIONS(149),
        [anon_sym_AT] = ACTIONS(147),
        [anon_sym_LBRACK] = ACTIONS(147),
        [anon_sym_LBRACE] = ACTIONS(147),
        [sym_number] = ACTIONS(149),
        [sym_identifier] = ACTIONS(151),
        [sym_comment] = ACTIONS(73),
        [sym__dedent] = ACTIONS(147),
    },
    [245] = {
        [anon_sym_print] = ACTIONS(155),
        [anon_sym_return] = ACTIONS(155),
        [anon_sym_del] = ACTIONS(155),
        [sym_pass_statement] = ACTIONS(155),
        [sym_break_statement] = ACTIONS(155),
        [sym_continue_statement] = ACTIONS(155),
        [anon_sym_if] = ACTIONS(155),
        [anon_sym_for] = ACTIONS(155),
        [anon_sym_while] = ACTIONS(155),
        [anon_sym_try] = ACTIONS(155),
        [anon_sym_with] = ACTIONS(155),
        [anon_sym_def] = ACTIONS(155),
        [anon_sym_class] = ACTIONS(155),
        [anon_sym_AT] = ACTIONS(153),
        [anon_sym_LBRACK] = ACTIONS(153),
        [anon_sym_LBRACE] = ACTIONS(153),
        [sym_number] = ACTIONS(155),
        [sym_identifier] = ACTIONS(157),
        [sym_comment] = ACTIONS(73),
        [sym__dedent] = ACTIONS(153),
    },
    [246] = {
        [sym__statement] = STATE(250),
        [sym__simple_statement] = STATE(243),
        [sym_print_statement] = STATE(5),
        [sym_expression_statement] = STATE(5),
        [sym_return_statement] = STATE(5),
        [sym_delete_statement] = STATE(5),
        [sym__compound_statement] = STATE(244),
        [sym_if_statement] = STATE(245),
        [sym_for_statement] = STATE(245),
        [sym_while_statement] = STATE(245),
        [sym_try_statement] = STATE(245),
        [sym_with_statement] = STATE(245),
        [sym_function_definition] = STATE(245),
        [sym_class_definition] = STATE(245),
        [sym_decorated_definition] = STATE(245),
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
        [aux_sym_decorated_definition_repeat1] = STATE(247),
        [anon_sym_print] = ACTIONS(83),
        [anon_sym_return] = ACTIONS(85),
        [anon_sym_del] = ACTIONS(87),
        [sym_pass_statement] = ACTIONS(89),
        [sym_break_statement] = ACTIONS(89),
        [sym_continue_statement] = ACTIONS(89),
        [anon_sym_if] = ACTIONS(517),
        [anon_sym_for] = ACTIONS(519),
        [anon_sym_while] = ACTIONS(521),
        [anon_sym_try] = ACTIONS(523),
        [anon_sym_with] = ACTIONS(525),
        [anon_sym_def] = ACTIONS(527),
        [anon_sym_class] = ACTIONS(529),
        [anon_sym_AT] = ACTIONS(105),
        [anon_sym_LBRACK] = ACTIONS(107),
        [anon_sym_LBRACE] = ACTIONS(109),
        [sym_number] = ACTIONS(111),
        [sym_identifier] = ACTIONS(113),
        [sym_comment] = ACTIONS(73),
        [sym__dedent] = ACTIONS(553),
    },
    [247] = {
        [sym_function_definition] = STATE(248),
        [sym_class_definition] = STATE(248),
        [sym_decorator] = STATE(27),
        [anon_sym_def] = ACTIONS(555),
        [anon_sym_class] = ACTIONS(557),
        [anon_sym_AT] = ACTIONS(105),
        [sym_comment] = ACTIONS(73),
    },
    [248] = {
        [anon_sym_print] = ACTIONS(179),
        [anon_sym_return] = ACTIONS(179),
        [anon_sym_del] = ACTIONS(179),
        [sym_pass_statement] = ACTIONS(179),
        [sym_break_statement] = ACTIONS(179),
        [sym_continue_statement] = ACTIONS(179),
        [anon_sym_if] = ACTIONS(179),
        [anon_sym_for] = ACTIONS(179),
        [anon_sym_while] = ACTIONS(179),
        [anon_sym_try] = ACTIONS(179),
        [anon_sym_with] = ACTIONS(179),
        [anon_sym_def] = ACTIONS(179),
        [anon_sym_class] = ACTIONS(179),
        [anon_sym_AT] = ACTIONS(177),
        [anon_sym_LBRACK] = ACTIONS(177),
        [anon_sym_LBRACE] = ACTIONS(177),
        [sym_number] = ACTIONS(179),
        [sym_identifier] = ACTIONS(181),
        [sym_comment] = ACTIONS(73),
        [sym__dedent] = ACTIONS(177),
    },
    [249] = {
        [ts_builtin_sym_end] = ACTIONS(559),
        [anon_sym_SEMI] = ACTIONS(559),
        [anon_sym_print] = ACTIONS(561),
        [anon_sym_return] = ACTIONS(561),
        [anon_sym_del] = ACTIONS(561),
        [sym_pass_statement] = ACTIONS(561),
        [sym_break_statement] = ACTIONS(561),
        [sym_continue_statement] = ACTIONS(561),
        [anon_sym_if] = ACTIONS(561),
        [anon_sym_elif] = ACTIONS(561),
        [anon_sym_else] = ACTIONS(561),
        [anon_sym_for] = ACTIONS(561),
        [anon_sym_while] = ACTIONS(561),
        [anon_sym_try] = ACTIONS(561),
        [anon_sym_except] = ACTIONS(561),
        [anon_sym_finally] = ACTIONS(561),
        [anon_sym_with] = ACTIONS(561),
        [anon_sym_def] = ACTIONS(561),
        [anon_sym_class] = ACTIONS(561),
        [anon_sym_AT] = ACTIONS(559),
        [anon_sym_LBRACK] = ACTIONS(559),
        [anon_sym_LBRACE] = ACTIONS(559),
        [sym_number] = ACTIONS(561),
        [sym_identifier] = ACTIONS(563),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(559),
    },
    [250] = {
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
        [anon_sym_LBRACK] = ACTIONS(187),
        [anon_sym_LBRACE] = ACTIONS(187),
        [sym_number] = ACTIONS(189),
        [sym_identifier] = ACTIONS(191),
        [sym_comment] = ACTIONS(73),
        [sym__dedent] = ACTIONS(187),
    },
    [251] = {
        [anon_sym_print] = ACTIONS(421),
        [anon_sym_return] = ACTIONS(421),
        [anon_sym_del] = ACTIONS(421),
        [sym_pass_statement] = ACTIONS(421),
        [sym_break_statement] = ACTIONS(421),
        [sym_continue_statement] = ACTIONS(421),
        [anon_sym_if] = ACTIONS(421),
        [anon_sym_for] = ACTIONS(421),
        [anon_sym_while] = ACTIONS(421),
        [anon_sym_try] = ACTIONS(421),
        [anon_sym_with] = ACTIONS(421),
        [anon_sym_def] = ACTIONS(421),
        [anon_sym_class] = ACTIONS(421),
        [anon_sym_AT] = ACTIONS(419),
        [anon_sym_LBRACK] = ACTIONS(419),
        [anon_sym_LBRACE] = ACTIONS(419),
        [sym_number] = ACTIONS(421),
        [sym_identifier] = ACTIONS(423),
        [sym_comment] = ACTIONS(73),
        [sym__dedent] = ACTIONS(419),
    },
    [252] = {
        [anon_sym_COLON] = ACTIONS(565),
        [anon_sym_LPAREN] = ACTIONS(567),
        [sym_comment] = ACTIONS(73),
    },
    [253] = {
        [sym__simple_statement] = STATE(259),
        [sym_print_statement] = STATE(5),
        [sym_expression_statement] = STATE(5),
        [sym_return_statement] = STATE(5),
        [sym_delete_statement] = STATE(5),
        [sym__suite] = STATE(264),
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
        [sym__indent] = ACTIONS(569),
    },
    [254] = {
        [sym_expression_list] = STATE(255),
        [sym__expression] = STATE(109),
        [sym_binary_operator] = STATE(36),
        [sym_subscript] = STATE(36),
        [sym_call] = STATE(36),
        [sym_list] = STATE(36),
        [sym_list_comprehension] = STATE(36),
        [sym_dictionary] = STATE(36),
        [sym_dictionary_comprehension] = STATE(36),
        [sym_set] = STATE(36),
        [sym_set_comprehension] = STATE(36),
        [anon_sym_LBRACK] = ACTIONS(117),
        [anon_sym_LBRACE] = ACTIONS(119),
        [sym_number] = ACTIONS(121),
        [sym_identifier] = ACTIONS(121),
        [sym_comment] = ACTIONS(73),
    },
    [255] = {
        [anon_sym_RPAREN] = ACTIONS(571),
        [sym_comment] = ACTIONS(73),
    },
    [256] = {
        [anon_sym_COLON] = ACTIONS(573),
        [sym_comment] = ACTIONS(73),
    },
    [257] = {
        [sym__simple_statement] = STATE(259),
        [sym_print_statement] = STATE(5),
        [sym_expression_statement] = STATE(5),
        [sym_return_statement] = STATE(5),
        [sym_delete_statement] = STATE(5),
        [sym__suite] = STATE(260),
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
        [sym__indent] = ACTIONS(569),
    },
    [258] = {
        [sym__statement] = STATE(242),
        [sym__simple_statement] = STATE(243),
        [sym_print_statement] = STATE(5),
        [sym_expression_statement] = STATE(5),
        [sym_return_statement] = STATE(5),
        [sym_delete_statement] = STATE(5),
        [sym__compound_statement] = STATE(244),
        [sym_if_statement] = STATE(245),
        [sym_for_statement] = STATE(245),
        [sym_while_statement] = STATE(245),
        [sym_try_statement] = STATE(245),
        [sym_with_statement] = STATE(245),
        [sym_function_definition] = STATE(245),
        [sym_class_definition] = STATE(245),
        [sym_decorated_definition] = STATE(245),
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
        [aux_sym_module_repeat1] = STATE(262),
        [aux_sym_decorated_definition_repeat1] = STATE(247),
        [anon_sym_print] = ACTIONS(83),
        [anon_sym_return] = ACTIONS(85),
        [anon_sym_del] = ACTIONS(87),
        [sym_pass_statement] = ACTIONS(89),
        [sym_break_statement] = ACTIONS(89),
        [sym_continue_statement] = ACTIONS(89),
        [anon_sym_if] = ACTIONS(517),
        [anon_sym_for] = ACTIONS(519),
        [anon_sym_while] = ACTIONS(521),
        [anon_sym_try] = ACTIONS(523),
        [anon_sym_with] = ACTIONS(525),
        [anon_sym_def] = ACTIONS(527),
        [anon_sym_class] = ACTIONS(529),
        [anon_sym_AT] = ACTIONS(105),
        [anon_sym_LBRACK] = ACTIONS(107),
        [anon_sym_LBRACE] = ACTIONS(109),
        [sym_number] = ACTIONS(111),
        [sym_identifier] = ACTIONS(113),
        [sym_comment] = ACTIONS(73),
        [sym__dedent] = ACTIONS(575),
    },
    [259] = {
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(575),
    },
    [260] = {
        [anon_sym_print] = ACTIONS(535),
        [anon_sym_return] = ACTIONS(535),
        [anon_sym_del] = ACTIONS(535),
        [sym_pass_statement] = ACTIONS(535),
        [sym_break_statement] = ACTIONS(535),
        [sym_continue_statement] = ACTIONS(535),
        [anon_sym_if] = ACTIONS(535),
        [anon_sym_for] = ACTIONS(535),
        [anon_sym_while] = ACTIONS(535),
        [anon_sym_try] = ACTIONS(535),
        [anon_sym_with] = ACTIONS(535),
        [anon_sym_def] = ACTIONS(535),
        [anon_sym_class] = ACTIONS(535),
        [anon_sym_AT] = ACTIONS(533),
        [anon_sym_LBRACK] = ACTIONS(533),
        [anon_sym_LBRACE] = ACTIONS(533),
        [sym_number] = ACTIONS(535),
        [sym_identifier] = ACTIONS(537),
        [sym_comment] = ACTIONS(73),
        [sym__dedent] = ACTIONS(533),
    },
    [261] = {
        [anon_sym_print] = ACTIONS(541),
        [anon_sym_return] = ACTIONS(541),
        [anon_sym_del] = ACTIONS(541),
        [sym_pass_statement] = ACTIONS(541),
        [sym_break_statement] = ACTIONS(541),
        [sym_continue_statement] = ACTIONS(541),
        [anon_sym_if] = ACTIONS(541),
        [anon_sym_elif] = ACTIONS(541),
        [anon_sym_else] = ACTIONS(541),
        [anon_sym_for] = ACTIONS(541),
        [anon_sym_while] = ACTIONS(541),
        [anon_sym_try] = ACTIONS(541),
        [anon_sym_except] = ACTIONS(541),
        [anon_sym_finally] = ACTIONS(541),
        [anon_sym_with] = ACTIONS(541),
        [anon_sym_def] = ACTIONS(541),
        [anon_sym_class] = ACTIONS(541),
        [anon_sym_AT] = ACTIONS(539),
        [anon_sym_LBRACK] = ACTIONS(539),
        [anon_sym_LBRACE] = ACTIONS(539),
        [sym_number] = ACTIONS(541),
        [sym_identifier] = ACTIONS(543),
        [sym_comment] = ACTIONS(73),
        [sym__dedent] = ACTIONS(539),
    },
    [262] = {
        [sym__statement] = STATE(250),
        [sym__simple_statement] = STATE(243),
        [sym_print_statement] = STATE(5),
        [sym_expression_statement] = STATE(5),
        [sym_return_statement] = STATE(5),
        [sym_delete_statement] = STATE(5),
        [sym__compound_statement] = STATE(244),
        [sym_if_statement] = STATE(245),
        [sym_for_statement] = STATE(245),
        [sym_while_statement] = STATE(245),
        [sym_try_statement] = STATE(245),
        [sym_with_statement] = STATE(245),
        [sym_function_definition] = STATE(245),
        [sym_class_definition] = STATE(245),
        [sym_decorated_definition] = STATE(245),
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
        [aux_sym_decorated_definition_repeat1] = STATE(247),
        [anon_sym_print] = ACTIONS(83),
        [anon_sym_return] = ACTIONS(85),
        [anon_sym_del] = ACTIONS(87),
        [sym_pass_statement] = ACTIONS(89),
        [sym_break_statement] = ACTIONS(89),
        [sym_continue_statement] = ACTIONS(89),
        [anon_sym_if] = ACTIONS(517),
        [anon_sym_for] = ACTIONS(519),
        [anon_sym_while] = ACTIONS(521),
        [anon_sym_try] = ACTIONS(523),
        [anon_sym_with] = ACTIONS(525),
        [anon_sym_def] = ACTIONS(527),
        [anon_sym_class] = ACTIONS(529),
        [anon_sym_AT] = ACTIONS(105),
        [anon_sym_LBRACK] = ACTIONS(107),
        [anon_sym_LBRACE] = ACTIONS(109),
        [sym_number] = ACTIONS(111),
        [sym_identifier] = ACTIONS(113),
        [sym_comment] = ACTIONS(73),
        [sym__dedent] = ACTIONS(577),
    },
    [263] = {
        [anon_sym_print] = ACTIONS(561),
        [anon_sym_return] = ACTIONS(561),
        [anon_sym_del] = ACTIONS(561),
        [sym_pass_statement] = ACTIONS(561),
        [sym_break_statement] = ACTIONS(561),
        [sym_continue_statement] = ACTIONS(561),
        [anon_sym_if] = ACTIONS(561),
        [anon_sym_elif] = ACTIONS(561),
        [anon_sym_else] = ACTIONS(561),
        [anon_sym_for] = ACTIONS(561),
        [anon_sym_while] = ACTIONS(561),
        [anon_sym_try] = ACTIONS(561),
        [anon_sym_except] = ACTIONS(561),
        [anon_sym_finally] = ACTIONS(561),
        [anon_sym_with] = ACTIONS(561),
        [anon_sym_def] = ACTIONS(561),
        [anon_sym_class] = ACTIONS(561),
        [anon_sym_AT] = ACTIONS(559),
        [anon_sym_LBRACK] = ACTIONS(559),
        [anon_sym_LBRACE] = ACTIONS(559),
        [sym_number] = ACTIONS(561),
        [sym_identifier] = ACTIONS(563),
        [sym_comment] = ACTIONS(73),
        [sym__dedent] = ACTIONS(559),
    },
    [264] = {
        [anon_sym_print] = ACTIONS(579),
        [anon_sym_return] = ACTIONS(579),
        [anon_sym_del] = ACTIONS(579),
        [sym_pass_statement] = ACTIONS(579),
        [sym_break_statement] = ACTIONS(579),
        [sym_continue_statement] = ACTIONS(579),
        [anon_sym_if] = ACTIONS(579),
        [anon_sym_for] = ACTIONS(579),
        [anon_sym_while] = ACTIONS(579),
        [anon_sym_try] = ACTIONS(579),
        [anon_sym_with] = ACTIONS(579),
        [anon_sym_def] = ACTIONS(579),
        [anon_sym_class] = ACTIONS(579),
        [anon_sym_AT] = ACTIONS(581),
        [anon_sym_LBRACK] = ACTIONS(581),
        [anon_sym_LBRACE] = ACTIONS(581),
        [sym_number] = ACTIONS(579),
        [sym_identifier] = ACTIONS(583),
        [sym_comment] = ACTIONS(73),
        [sym__dedent] = ACTIONS(581),
    },
    [265] = {
        [sym_parameters] = STATE(267),
        [anon_sym_LPAREN] = ACTIONS(585),
        [sym_comment] = ACTIONS(73),
    },
    [266] = {
        [sym_default_parameter] = STATE(273),
        [sym_list_splat_parameter] = STATE(274),
        [sym_dictionary_splat_parameter] = STATE(275),
        [aux_sym_parameters_repeat1] = STATE(276),
        [anon_sym_RPAREN] = ACTIONS(587),
        [anon_sym_STAR] = ACTIONS(589),
        [sym_identifier] = ACTIONS(591),
        [sym_comment] = ACTIONS(73),
    },
    [267] = {
        [anon_sym_COLON] = ACTIONS(593),
        [sym_comment] = ACTIONS(73),
    },
    [268] = {
        [sym__simple_statement] = STATE(259),
        [sym_print_statement] = STATE(5),
        [sym_expression_statement] = STATE(5),
        [sym_return_statement] = STATE(5),
        [sym_delete_statement] = STATE(5),
        [sym__suite] = STATE(269),
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
        [sym__indent] = ACTIONS(569),
    },
    [269] = {
        [anon_sym_print] = ACTIONS(595),
        [anon_sym_return] = ACTIONS(595),
        [anon_sym_del] = ACTIONS(595),
        [sym_pass_statement] = ACTIONS(595),
        [sym_break_statement] = ACTIONS(595),
        [sym_continue_statement] = ACTIONS(595),
        [anon_sym_if] = ACTIONS(595),
        [anon_sym_for] = ACTIONS(595),
        [anon_sym_while] = ACTIONS(595),
        [anon_sym_try] = ACTIONS(595),
        [anon_sym_with] = ACTIONS(595),
        [anon_sym_def] = ACTIONS(595),
        [anon_sym_class] = ACTIONS(595),
        [anon_sym_AT] = ACTIONS(597),
        [anon_sym_LBRACK] = ACTIONS(597),
        [anon_sym_LBRACE] = ACTIONS(597),
        [sym_number] = ACTIONS(595),
        [sym_identifier] = ACTIONS(599),
        [sym_comment] = ACTIONS(73),
        [sym__dedent] = ACTIONS(597),
    },
    [270] = {
        [anon_sym_COLON] = ACTIONS(601),
        [sym_comment] = ACTIONS(73),
    },
    [271] = {
        [anon_sym_STAR] = ACTIONS(603),
        [sym_identifier] = ACTIONS(605),
        [sym_comment] = ACTIONS(73),
    },
    [272] = {
        [anon_sym_COMMA] = ACTIONS(607),
        [anon_sym_RPAREN] = ACTIONS(609),
        [anon_sym_EQ] = ACTIONS(611),
        [sym_comment] = ACTIONS(73),
    },
    [273] = {
        [anon_sym_COMMA] = ACTIONS(607),
        [anon_sym_RPAREN] = ACTIONS(609),
        [sym_comment] = ACTIONS(73),
    },
    [274] = {
        [anon_sym_COMMA] = ACTIONS(613),
        [anon_sym_RPAREN] = ACTIONS(609),
        [sym_comment] = ACTIONS(73),
    },
    [275] = {
        [anon_sym_RPAREN] = ACTIONS(609),
        [sym_comment] = ACTIONS(73),
    },
    [276] = {
        [sym_default_parameter] = STATE(278),
        [sym_list_splat_parameter] = STATE(279),
        [sym_dictionary_splat_parameter] = STATE(280),
        [anon_sym_STAR] = ACTIONS(589),
        [sym_identifier] = ACTIONS(615),
        [sym_comment] = ACTIONS(73),
    },
    [277] = {
        [anon_sym_COMMA] = ACTIONS(617),
        [anon_sym_RPAREN] = ACTIONS(619),
        [anon_sym_EQ] = ACTIONS(611),
        [sym_comment] = ACTIONS(73),
    },
    [278] = {
        [anon_sym_COMMA] = ACTIONS(617),
        [anon_sym_RPAREN] = ACTIONS(619),
        [sym_comment] = ACTIONS(73),
    },
    [279] = {
        [anon_sym_COMMA] = ACTIONS(621),
        [anon_sym_RPAREN] = ACTIONS(619),
        [sym_comment] = ACTIONS(73),
    },
    [280] = {
        [anon_sym_RPAREN] = ACTIONS(619),
        [sym_comment] = ACTIONS(73),
    },
    [281] = {
        [anon_sym_COLON] = ACTIONS(623),
        [sym_comment] = ACTIONS(73),
    },
    [282] = {
        [sym_dictionary_splat_parameter] = STATE(284),
        [anon_sym_STAR] = ACTIONS(625),
        [sym_comment] = ACTIONS(73),
    },
    [283] = {
        [anon_sym_STAR] = ACTIONS(603),
        [sym_comment] = ACTIONS(73),
    },
    [284] = {
        [anon_sym_RPAREN] = ACTIONS(627),
        [sym_comment] = ACTIONS(73),
    },
    [285] = {
        [anon_sym_COLON] = ACTIONS(629),
        [sym_comment] = ACTIONS(73),
    },
    [286] = {
        [sym_identifier] = ACTIONS(631),
        [sym_comment] = ACTIONS(73),
    },
    [287] = {
        [anon_sym_RPAREN] = ACTIONS(633),
        [sym_comment] = ACTIONS(73),
    },
    [288] = {
        [anon_sym_RPAREN] = ACTIONS(635),
        [anon_sym_STAR] = ACTIONS(637),
        [sym_identifier] = ACTIONS(639),
        [sym_comment] = ACTIONS(73),
    },
    [289] = {
        [anon_sym_COLON] = ACTIONS(641),
        [sym_comment] = ACTIONS(73),
    },
    [290] = {
        [sym__expression] = STATE(291),
        [sym_binary_operator] = STATE(36),
        [sym_subscript] = STATE(36),
        [sym_call] = STATE(36),
        [sym_list] = STATE(36),
        [sym_list_comprehension] = STATE(36),
        [sym_dictionary] = STATE(36),
        [sym_dictionary_comprehension] = STATE(36),
        [sym_set] = STATE(36),
        [sym_set_comprehension] = STATE(36),
        [anon_sym_LBRACK] = ACTIONS(117),
        [anon_sym_LBRACE] = ACTIONS(119),
        [sym_number] = ACTIONS(121),
        [sym_identifier] = ACTIONS(121),
        [sym_comment] = ACTIONS(73),
    },
    [291] = {
        [anon_sym_COMMA] = ACTIONS(643),
        [anon_sym_LPAREN] = ACTIONS(209),
        [anon_sym_RPAREN] = ACTIONS(643),
        [anon_sym_PLUS] = ACTIONS(211),
        [anon_sym_LBRACK] = ACTIONS(213),
        [sym_comment] = ACTIONS(73),
    },
    [292] = {
        [anon_sym_COLON] = ACTIONS(645),
        [sym_comment] = ACTIONS(73),
    },
    [293] = {
        [sym_dictionary_splat_parameter] = STATE(294),
        [anon_sym_STAR] = ACTIONS(625),
        [sym_comment] = ACTIONS(73),
    },
    [294] = {
        [anon_sym_RPAREN] = ACTIONS(635),
        [sym_comment] = ACTIONS(73),
    },
    [295] = {
        [anon_sym_RPAREN] = ACTIONS(619),
        [anon_sym_STAR] = ACTIONS(647),
        [sym_identifier] = ACTIONS(649),
        [sym_comment] = ACTIONS(73),
    },
    [296] = {
        [anon_sym_COMMA] = ACTIONS(651),
        [anon_sym_RPAREN] = ACTIONS(651),
        [sym_comment] = ACTIONS(73),
    },
    [297] = {
        [aux_sym_with_statement_repeat1] = STATE(303),
        [anon_sym_COMMA] = ACTIONS(653),
        [anon_sym_COLON] = ACTIONS(655),
        [sym_comment] = ACTIONS(73),
    },
    [298] = {
        [anon_sym_COMMA] = ACTIONS(657),
        [anon_sym_COLON] = ACTIONS(657),
        [anon_sym_as] = ACTIONS(659),
        [anon_sym_LPAREN] = ACTIONS(209),
        [anon_sym_PLUS] = ACTIONS(211),
        [anon_sym_LBRACK] = ACTIONS(213),
        [sym_comment] = ACTIONS(73),
    },
    [299] = {
        [sym__expression] = STATE(300),
        [sym_binary_operator] = STATE(36),
        [sym_subscript] = STATE(36),
        [sym_call] = STATE(36),
        [sym_list] = STATE(36),
        [sym_list_comprehension] = STATE(36),
        [sym_dictionary] = STATE(36),
        [sym_dictionary_comprehension] = STATE(36),
        [sym_set] = STATE(36),
        [sym_set_comprehension] = STATE(36),
        [anon_sym_LBRACK] = ACTIONS(117),
        [anon_sym_LBRACE] = ACTIONS(119),
        [sym_number] = ACTIONS(121),
        [sym_identifier] = ACTIONS(121),
        [sym_comment] = ACTIONS(73),
    },
    [300] = {
        [anon_sym_COMMA] = ACTIONS(661),
        [anon_sym_COLON] = ACTIONS(661),
        [anon_sym_LPAREN] = ACTIONS(209),
        [anon_sym_PLUS] = ACTIONS(211),
        [anon_sym_LBRACK] = ACTIONS(213),
        [sym_comment] = ACTIONS(73),
    },
    [301] = {
        [sym_with_item] = STATE(309),
        [sym__expression] = STATE(298),
        [sym_binary_operator] = STATE(36),
        [sym_subscript] = STATE(36),
        [sym_call] = STATE(36),
        [sym_list] = STATE(36),
        [sym_list_comprehension] = STATE(36),
        [sym_dictionary] = STATE(36),
        [sym_dictionary_comprehension] = STATE(36),
        [sym_set] = STATE(36),
        [sym_set_comprehension] = STATE(36),
        [anon_sym_LBRACK] = ACTIONS(117),
        [anon_sym_LBRACE] = ACTIONS(119),
        [sym_number] = ACTIONS(121),
        [sym_identifier] = ACTIONS(121),
        [sym_comment] = ACTIONS(73),
    },
    [302] = {
        [sym__simple_statement] = STATE(259),
        [sym_print_statement] = STATE(5),
        [sym_expression_statement] = STATE(5),
        [sym_return_statement] = STATE(5),
        [sym_delete_statement] = STATE(5),
        [sym__suite] = STATE(308),
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
        [sym__indent] = ACTIONS(569),
    },
    [303] = {
        [anon_sym_COMMA] = ACTIONS(663),
        [anon_sym_COLON] = ACTIONS(665),
        [sym_comment] = ACTIONS(73),
    },
    [304] = {
        [sym_with_item] = STATE(307),
        [sym__expression] = STATE(298),
        [sym_binary_operator] = STATE(36),
        [sym_subscript] = STATE(36),
        [sym_call] = STATE(36),
        [sym_list] = STATE(36),
        [sym_list_comprehension] = STATE(36),
        [sym_dictionary] = STATE(36),
        [sym_dictionary_comprehension] = STATE(36),
        [sym_set] = STATE(36),
        [sym_set_comprehension] = STATE(36),
        [anon_sym_LBRACK] = ACTIONS(117),
        [anon_sym_LBRACE] = ACTIONS(119),
        [sym_number] = ACTIONS(121),
        [sym_identifier] = ACTIONS(121),
        [sym_comment] = ACTIONS(73),
    },
    [305] = {
        [sym__simple_statement] = STATE(259),
        [sym_print_statement] = STATE(5),
        [sym_expression_statement] = STATE(5),
        [sym_return_statement] = STATE(5),
        [sym_delete_statement] = STATE(5),
        [sym__suite] = STATE(306),
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
        [sym__indent] = ACTIONS(569),
    },
    [306] = {
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
    [307] = {
        [anon_sym_COMMA] = ACTIONS(673),
        [anon_sym_COLON] = ACTIONS(673),
        [sym_comment] = ACTIONS(73),
    },
    [308] = {
        [anon_sym_print] = ACTIONS(675),
        [anon_sym_return] = ACTIONS(675),
        [anon_sym_del] = ACTIONS(675),
        [sym_pass_statement] = ACTIONS(675),
        [sym_break_statement] = ACTIONS(675),
        [sym_continue_statement] = ACTIONS(675),
        [anon_sym_if] = ACTIONS(675),
        [anon_sym_for] = ACTIONS(675),
        [anon_sym_while] = ACTIONS(675),
        [anon_sym_try] = ACTIONS(675),
        [anon_sym_with] = ACTIONS(675),
        [anon_sym_def] = ACTIONS(675),
        [anon_sym_class] = ACTIONS(675),
        [anon_sym_AT] = ACTIONS(677),
        [anon_sym_LBRACK] = ACTIONS(677),
        [anon_sym_LBRACE] = ACTIONS(677),
        [sym_number] = ACTIONS(675),
        [sym_identifier] = ACTIONS(679),
        [sym_comment] = ACTIONS(73),
        [sym__dedent] = ACTIONS(677),
    },
    [309] = {
        [anon_sym_COMMA] = ACTIONS(681),
        [anon_sym_COLON] = ACTIONS(681),
        [sym_comment] = ACTIONS(73),
    },
    [310] = {
        [sym__simple_statement] = STATE(312),
        [sym_print_statement] = STATE(5),
        [sym_expression_statement] = STATE(5),
        [sym_return_statement] = STATE(5),
        [sym_delete_statement] = STATE(5),
        [sym__suite] = STATE(313),
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
        [sym__indent] = ACTIONS(683),
    },
    [311] = {
        [sym__statement] = STATE(242),
        [sym__simple_statement] = STATE(243),
        [sym_print_statement] = STATE(5),
        [sym_expression_statement] = STATE(5),
        [sym_return_statement] = STATE(5),
        [sym_delete_statement] = STATE(5),
        [sym__compound_statement] = STATE(244),
        [sym_if_statement] = STATE(245),
        [sym_for_statement] = STATE(245),
        [sym_while_statement] = STATE(245),
        [sym_try_statement] = STATE(245),
        [sym_with_statement] = STATE(245),
        [sym_function_definition] = STATE(245),
        [sym_class_definition] = STATE(245),
        [sym_decorated_definition] = STATE(245),
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
        [aux_sym_module_repeat1] = STATE(336),
        [aux_sym_decorated_definition_repeat1] = STATE(247),
        [anon_sym_print] = ACTIONS(83),
        [anon_sym_return] = ACTIONS(85),
        [anon_sym_del] = ACTIONS(87),
        [sym_pass_statement] = ACTIONS(89),
        [sym_break_statement] = ACTIONS(89),
        [sym_continue_statement] = ACTIONS(89),
        [anon_sym_if] = ACTIONS(517),
        [anon_sym_for] = ACTIONS(519),
        [anon_sym_while] = ACTIONS(521),
        [anon_sym_try] = ACTIONS(523),
        [anon_sym_with] = ACTIONS(525),
        [anon_sym_def] = ACTIONS(527),
        [anon_sym_class] = ACTIONS(529),
        [anon_sym_AT] = ACTIONS(105),
        [anon_sym_LBRACK] = ACTIONS(107),
        [anon_sym_LBRACE] = ACTIONS(109),
        [sym_number] = ACTIONS(111),
        [sym_identifier] = ACTIONS(113),
        [sym_comment] = ACTIONS(73),
        [sym__dedent] = ACTIONS(685),
    },
    [312] = {
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(685),
    },
    [313] = {
        [sym_except_clause] = STATE(316),
        [sym_finally_clause] = STATE(317),
        [aux_sym_try_statement_repeat1] = STATE(318),
        [anon_sym_except] = ACTIONS(687),
        [anon_sym_finally] = ACTIONS(689),
        [sym_comment] = ACTIONS(73),
    },
    [314] = {
        [sym__expression] = STATE(328),
        [sym_binary_operator] = STATE(36),
        [sym_subscript] = STATE(36),
        [sym_call] = STATE(36),
        [sym_list] = STATE(36),
        [sym_list_comprehension] = STATE(36),
        [sym_dictionary] = STATE(36),
        [sym_dictionary_comprehension] = STATE(36),
        [sym_set] = STATE(36),
        [sym_set_comprehension] = STATE(36),
        [anon_sym_LBRACK] = ACTIONS(117),
        [anon_sym_LBRACE] = ACTIONS(119),
        [sym_number] = ACTIONS(121),
        [sym_identifier] = ACTIONS(121),
        [sym_comment] = ACTIONS(73),
    },
    [315] = {
        [anon_sym_COLON] = ACTIONS(691),
        [sym_comment] = ACTIONS(73),
    },
    [316] = {
        [anon_sym_print] = ACTIONS(693),
        [anon_sym_return] = ACTIONS(693),
        [anon_sym_del] = ACTIONS(693),
        [sym_pass_statement] = ACTIONS(693),
        [sym_break_statement] = ACTIONS(693),
        [sym_continue_statement] = ACTIONS(693),
        [anon_sym_if] = ACTIONS(693),
        [anon_sym_else] = ACTIONS(693),
        [anon_sym_for] = ACTIONS(693),
        [anon_sym_while] = ACTIONS(693),
        [anon_sym_try] = ACTIONS(693),
        [anon_sym_except] = ACTIONS(693),
        [anon_sym_finally] = ACTIONS(693),
        [anon_sym_with] = ACTIONS(693),
        [anon_sym_def] = ACTIONS(693),
        [anon_sym_class] = ACTIONS(693),
        [anon_sym_AT] = ACTIONS(695),
        [anon_sym_LBRACK] = ACTIONS(695),
        [anon_sym_LBRACE] = ACTIONS(695),
        [sym_number] = ACTIONS(693),
        [sym_identifier] = ACTIONS(697),
        [sym_comment] = ACTIONS(73),
        [sym__dedent] = ACTIONS(695),
    },
    [317] = {
        [anon_sym_print] = ACTIONS(699),
        [anon_sym_return] = ACTIONS(699),
        [anon_sym_del] = ACTIONS(699),
        [sym_pass_statement] = ACTIONS(699),
        [sym_break_statement] = ACTIONS(699),
        [sym_continue_statement] = ACTIONS(699),
        [anon_sym_if] = ACTIONS(699),
        [anon_sym_for] = ACTIONS(699),
        [anon_sym_while] = ACTIONS(699),
        [anon_sym_try] = ACTIONS(699),
        [anon_sym_with] = ACTIONS(699),
        [anon_sym_def] = ACTIONS(699),
        [anon_sym_class] = ACTIONS(699),
        [anon_sym_AT] = ACTIONS(701),
        [anon_sym_LBRACK] = ACTIONS(701),
        [anon_sym_LBRACE] = ACTIONS(701),
        [sym_number] = ACTIONS(699),
        [sym_identifier] = ACTIONS(703),
        [sym_comment] = ACTIONS(73),
        [sym__dedent] = ACTIONS(701),
    },
    [318] = {
        [sym_else_clause] = STATE(320),
        [sym_except_clause] = STATE(321),
        [sym_finally_clause] = STATE(322),
        [anon_sym_print] = ACTIONS(699),
        [anon_sym_return] = ACTIONS(699),
        [anon_sym_del] = ACTIONS(699),
        [sym_pass_statement] = ACTIONS(699),
        [sym_break_statement] = ACTIONS(699),
        [sym_continue_statement] = ACTIONS(699),
        [anon_sym_if] = ACTIONS(699),
        [anon_sym_else] = ACTIONS(705),
        [anon_sym_for] = ACTIONS(699),
        [anon_sym_while] = ACTIONS(699),
        [anon_sym_try] = ACTIONS(699),
        [anon_sym_except] = ACTIONS(707),
        [anon_sym_finally] = ACTIONS(709),
        [anon_sym_with] = ACTIONS(699),
        [anon_sym_def] = ACTIONS(699),
        [anon_sym_class] = ACTIONS(699),
        [anon_sym_AT] = ACTIONS(701),
        [anon_sym_LBRACK] = ACTIONS(701),
        [anon_sym_LBRACE] = ACTIONS(701),
        [sym_number] = ACTIONS(699),
        [sym_identifier] = ACTIONS(703),
        [sym_comment] = ACTIONS(73),
        [sym__dedent] = ACTIONS(701),
    },
    [319] = {
        [anon_sym_COLON] = ACTIONS(711),
        [sym_comment] = ACTIONS(73),
    },
    [320] = {
        [sym_finally_clause] = STATE(323),
        [anon_sym_print] = ACTIONS(713),
        [anon_sym_return] = ACTIONS(713),
        [anon_sym_del] = ACTIONS(713),
        [sym_pass_statement] = ACTIONS(713),
        [sym_break_statement] = ACTIONS(713),
        [sym_continue_statement] = ACTIONS(713),
        [anon_sym_if] = ACTIONS(713),
        [anon_sym_for] = ACTIONS(713),
        [anon_sym_while] = ACTIONS(713),
        [anon_sym_try] = ACTIONS(713),
        [anon_sym_finally] = ACTIONS(709),
        [anon_sym_with] = ACTIONS(713),
        [anon_sym_def] = ACTIONS(713),
        [anon_sym_class] = ACTIONS(713),
        [anon_sym_AT] = ACTIONS(715),
        [anon_sym_LBRACK] = ACTIONS(715),
        [anon_sym_LBRACE] = ACTIONS(715),
        [sym_number] = ACTIONS(713),
        [sym_identifier] = ACTIONS(717),
        [sym_comment] = ACTIONS(73),
        [sym__dedent] = ACTIONS(715),
    },
    [321] = {
        [anon_sym_print] = ACTIONS(719),
        [anon_sym_return] = ACTIONS(719),
        [anon_sym_del] = ACTIONS(719),
        [sym_pass_statement] = ACTIONS(719),
        [sym_break_statement] = ACTIONS(719),
        [sym_continue_statement] = ACTIONS(719),
        [anon_sym_if] = ACTIONS(719),
        [anon_sym_else] = ACTIONS(719),
        [anon_sym_for] = ACTIONS(719),
        [anon_sym_while] = ACTIONS(719),
        [anon_sym_try] = ACTIONS(719),
        [anon_sym_except] = ACTIONS(719),
        [anon_sym_finally] = ACTIONS(719),
        [anon_sym_with] = ACTIONS(719),
        [anon_sym_def] = ACTIONS(719),
        [anon_sym_class] = ACTIONS(719),
        [anon_sym_AT] = ACTIONS(721),
        [anon_sym_LBRACK] = ACTIONS(721),
        [anon_sym_LBRACE] = ACTIONS(721),
        [sym_number] = ACTIONS(719),
        [sym_identifier] = ACTIONS(723),
        [sym_comment] = ACTIONS(73),
        [sym__dedent] = ACTIONS(721),
    },
    [322] = {
        [anon_sym_print] = ACTIONS(713),
        [anon_sym_return] = ACTIONS(713),
        [anon_sym_del] = ACTIONS(713),
        [sym_pass_statement] = ACTIONS(713),
        [sym_break_statement] = ACTIONS(713),
        [sym_continue_statement] = ACTIONS(713),
        [anon_sym_if] = ACTIONS(713),
        [anon_sym_for] = ACTIONS(713),
        [anon_sym_while] = ACTIONS(713),
        [anon_sym_try] = ACTIONS(713),
        [anon_sym_with] = ACTIONS(713),
        [anon_sym_def] = ACTIONS(713),
        [anon_sym_class] = ACTIONS(713),
        [anon_sym_AT] = ACTIONS(715),
        [anon_sym_LBRACK] = ACTIONS(715),
        [anon_sym_LBRACE] = ACTIONS(715),
        [sym_number] = ACTIONS(713),
        [sym_identifier] = ACTIONS(717),
        [sym_comment] = ACTIONS(73),
        [sym__dedent] = ACTIONS(715),
    },
    [323] = {
        [anon_sym_print] = ACTIONS(725),
        [anon_sym_return] = ACTIONS(725),
        [anon_sym_del] = ACTIONS(725),
        [sym_pass_statement] = ACTIONS(725),
        [sym_break_statement] = ACTIONS(725),
        [sym_continue_statement] = ACTIONS(725),
        [anon_sym_if] = ACTIONS(725),
        [anon_sym_for] = ACTIONS(725),
        [anon_sym_while] = ACTIONS(725),
        [anon_sym_try] = ACTIONS(725),
        [anon_sym_with] = ACTIONS(725),
        [anon_sym_def] = ACTIONS(725),
        [anon_sym_class] = ACTIONS(725),
        [anon_sym_AT] = ACTIONS(727),
        [anon_sym_LBRACK] = ACTIONS(727),
        [anon_sym_LBRACE] = ACTIONS(727),
        [sym_number] = ACTIONS(725),
        [sym_identifier] = ACTIONS(729),
        [sym_comment] = ACTIONS(73),
        [sym__dedent] = ACTIONS(727),
    },
    [324] = {
        [sym__simple_statement] = STATE(259),
        [sym_print_statement] = STATE(5),
        [sym_expression_statement] = STATE(5),
        [sym_return_statement] = STATE(5),
        [sym_delete_statement] = STATE(5),
        [sym__suite] = STATE(325),
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
        [sym__indent] = ACTIONS(569),
    },
    [325] = {
        [anon_sym_print] = ACTIONS(731),
        [anon_sym_return] = ACTIONS(731),
        [anon_sym_del] = ACTIONS(731),
        [sym_pass_statement] = ACTIONS(731),
        [sym_break_statement] = ACTIONS(731),
        [sym_continue_statement] = ACTIONS(731),
        [anon_sym_if] = ACTIONS(731),
        [anon_sym_for] = ACTIONS(731),
        [anon_sym_while] = ACTIONS(731),
        [anon_sym_try] = ACTIONS(731),
        [anon_sym_finally] = ACTIONS(731),
        [anon_sym_with] = ACTIONS(731),
        [anon_sym_def] = ACTIONS(731),
        [anon_sym_class] = ACTIONS(731),
        [anon_sym_AT] = ACTIONS(733),
        [anon_sym_LBRACK] = ACTIONS(733),
        [anon_sym_LBRACE] = ACTIONS(733),
        [sym_number] = ACTIONS(731),
        [sym_identifier] = ACTIONS(735),
        [sym_comment] = ACTIONS(73),
        [sym__dedent] = ACTIONS(733),
    },
    [326] = {
        [sym__simple_statement] = STATE(259),
        [sym_print_statement] = STATE(5),
        [sym_expression_statement] = STATE(5),
        [sym_return_statement] = STATE(5),
        [sym_delete_statement] = STATE(5),
        [sym__suite] = STATE(327),
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
        [sym__indent] = ACTIONS(569),
    },
    [327] = {
        [anon_sym_print] = ACTIONS(737),
        [anon_sym_return] = ACTIONS(737),
        [anon_sym_del] = ACTIONS(737),
        [sym_pass_statement] = ACTIONS(737),
        [sym_break_statement] = ACTIONS(737),
        [sym_continue_statement] = ACTIONS(737),
        [anon_sym_if] = ACTIONS(737),
        [anon_sym_for] = ACTIONS(737),
        [anon_sym_while] = ACTIONS(737),
        [anon_sym_try] = ACTIONS(737),
        [anon_sym_with] = ACTIONS(737),
        [anon_sym_def] = ACTIONS(737),
        [anon_sym_class] = ACTIONS(737),
        [anon_sym_AT] = ACTIONS(739),
        [anon_sym_LBRACK] = ACTIONS(739),
        [anon_sym_LBRACE] = ACTIONS(739),
        [sym_number] = ACTIONS(737),
        [sym_identifier] = ACTIONS(741),
        [sym_comment] = ACTIONS(73),
        [sym__dedent] = ACTIONS(739),
    },
    [328] = {
        [anon_sym_COMMA] = ACTIONS(743),
        [anon_sym_COLON] = ACTIONS(745),
        [anon_sym_as] = ACTIONS(743),
        [anon_sym_LPAREN] = ACTIONS(209),
        [anon_sym_PLUS] = ACTIONS(211),
        [anon_sym_LBRACK] = ACTIONS(213),
        [sym_comment] = ACTIONS(73),
    },
    [329] = {
        [sym__expression] = STATE(331),
        [sym_binary_operator] = STATE(36),
        [sym_subscript] = STATE(36),
        [sym_call] = STATE(36),
        [sym_list] = STATE(36),
        [sym_list_comprehension] = STATE(36),
        [sym_dictionary] = STATE(36),
        [sym_dictionary_comprehension] = STATE(36),
        [sym_set] = STATE(36),
        [sym_set_comprehension] = STATE(36),
        [anon_sym_LBRACK] = ACTIONS(117),
        [anon_sym_LBRACE] = ACTIONS(119),
        [sym_number] = ACTIONS(121),
        [sym_identifier] = ACTIONS(121),
        [sym_comment] = ACTIONS(73),
    },
    [330] = {
        [sym__simple_statement] = STATE(259),
        [sym_print_statement] = STATE(5),
        [sym_expression_statement] = STATE(5),
        [sym_return_statement] = STATE(5),
        [sym_delete_statement] = STATE(5),
        [sym__suite] = STATE(334),
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
        [sym__indent] = ACTIONS(569),
    },
    [331] = {
        [anon_sym_COLON] = ACTIONS(747),
        [anon_sym_LPAREN] = ACTIONS(209),
        [anon_sym_PLUS] = ACTIONS(211),
        [anon_sym_LBRACK] = ACTIONS(213),
        [sym_comment] = ACTIONS(73),
    },
    [332] = {
        [sym__simple_statement] = STATE(259),
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
        [sym__indent] = ACTIONS(569),
    },
    [333] = {
        [anon_sym_print] = ACTIONS(749),
        [anon_sym_return] = ACTIONS(749),
        [anon_sym_del] = ACTIONS(749),
        [sym_pass_statement] = ACTIONS(749),
        [sym_break_statement] = ACTIONS(749),
        [sym_continue_statement] = ACTIONS(749),
        [anon_sym_if] = ACTIONS(749),
        [anon_sym_else] = ACTIONS(749),
        [anon_sym_for] = ACTIONS(749),
        [anon_sym_while] = ACTIONS(749),
        [anon_sym_try] = ACTIONS(749),
        [anon_sym_except] = ACTIONS(749),
        [anon_sym_finally] = ACTIONS(749),
        [anon_sym_with] = ACTIONS(749),
        [anon_sym_def] = ACTIONS(749),
        [anon_sym_class] = ACTIONS(749),
        [anon_sym_AT] = ACTIONS(751),
        [anon_sym_LBRACK] = ACTIONS(751),
        [anon_sym_LBRACE] = ACTIONS(751),
        [sym_number] = ACTIONS(749),
        [sym_identifier] = ACTIONS(753),
        [sym_comment] = ACTIONS(73),
        [sym__dedent] = ACTIONS(751),
    },
    [334] = {
        [anon_sym_print] = ACTIONS(755),
        [anon_sym_return] = ACTIONS(755),
        [anon_sym_del] = ACTIONS(755),
        [sym_pass_statement] = ACTIONS(755),
        [sym_break_statement] = ACTIONS(755),
        [sym_continue_statement] = ACTIONS(755),
        [anon_sym_if] = ACTIONS(755),
        [anon_sym_else] = ACTIONS(755),
        [anon_sym_for] = ACTIONS(755),
        [anon_sym_while] = ACTIONS(755),
        [anon_sym_try] = ACTIONS(755),
        [anon_sym_except] = ACTIONS(755),
        [anon_sym_finally] = ACTIONS(755),
        [anon_sym_with] = ACTIONS(755),
        [anon_sym_def] = ACTIONS(755),
        [anon_sym_class] = ACTIONS(755),
        [anon_sym_AT] = ACTIONS(757),
        [anon_sym_LBRACK] = ACTIONS(757),
        [anon_sym_LBRACE] = ACTIONS(757),
        [sym_number] = ACTIONS(755),
        [sym_identifier] = ACTIONS(759),
        [sym_comment] = ACTIONS(73),
        [sym__dedent] = ACTIONS(757),
    },
    [335] = {
        [anon_sym_except] = ACTIONS(539),
        [anon_sym_finally] = ACTIONS(539),
        [sym_comment] = ACTIONS(73),
    },
    [336] = {
        [sym__statement] = STATE(250),
        [sym__simple_statement] = STATE(243),
        [sym_print_statement] = STATE(5),
        [sym_expression_statement] = STATE(5),
        [sym_return_statement] = STATE(5),
        [sym_delete_statement] = STATE(5),
        [sym__compound_statement] = STATE(244),
        [sym_if_statement] = STATE(245),
        [sym_for_statement] = STATE(245),
        [sym_while_statement] = STATE(245),
        [sym_try_statement] = STATE(245),
        [sym_with_statement] = STATE(245),
        [sym_function_definition] = STATE(245),
        [sym_class_definition] = STATE(245),
        [sym_decorated_definition] = STATE(245),
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
        [aux_sym_decorated_definition_repeat1] = STATE(247),
        [anon_sym_print] = ACTIONS(83),
        [anon_sym_return] = ACTIONS(85),
        [anon_sym_del] = ACTIONS(87),
        [sym_pass_statement] = ACTIONS(89),
        [sym_break_statement] = ACTIONS(89),
        [sym_continue_statement] = ACTIONS(89),
        [anon_sym_if] = ACTIONS(517),
        [anon_sym_for] = ACTIONS(519),
        [anon_sym_while] = ACTIONS(521),
        [anon_sym_try] = ACTIONS(523),
        [anon_sym_with] = ACTIONS(525),
        [anon_sym_def] = ACTIONS(527),
        [anon_sym_class] = ACTIONS(529),
        [anon_sym_AT] = ACTIONS(105),
        [anon_sym_LBRACK] = ACTIONS(107),
        [anon_sym_LBRACE] = ACTIONS(109),
        [sym_number] = ACTIONS(111),
        [sym_identifier] = ACTIONS(113),
        [sym_comment] = ACTIONS(73),
        [sym__dedent] = ACTIONS(761),
    },
    [337] = {
        [anon_sym_except] = ACTIONS(559),
        [anon_sym_finally] = ACTIONS(559),
        [sym_comment] = ACTIONS(73),
    },
    [338] = {
        [anon_sym_COLON] = ACTIONS(763),
        [anon_sym_LPAREN] = ACTIONS(209),
        [anon_sym_PLUS] = ACTIONS(211),
        [anon_sym_LBRACK] = ACTIONS(213),
        [sym_comment] = ACTIONS(73),
    },
    [339] = {
        [sym__simple_statement] = STATE(259),
        [sym_print_statement] = STATE(5),
        [sym_expression_statement] = STATE(5),
        [sym_return_statement] = STATE(5),
        [sym_delete_statement] = STATE(5),
        [sym__suite] = STATE(340),
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
        [sym__indent] = ACTIONS(569),
    },
    [340] = {
        [sym_else_clause] = STATE(341),
        [anon_sym_print] = ACTIONS(765),
        [anon_sym_return] = ACTIONS(765),
        [anon_sym_del] = ACTIONS(765),
        [sym_pass_statement] = ACTIONS(765),
        [sym_break_statement] = ACTIONS(765),
        [sym_continue_statement] = ACTIONS(765),
        [anon_sym_if] = ACTIONS(765),
        [anon_sym_else] = ACTIONS(705),
        [anon_sym_for] = ACTIONS(765),
        [anon_sym_while] = ACTIONS(765),
        [anon_sym_try] = ACTIONS(765),
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
    [341] = {
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
    [342] = {
        [anon_sym_in] = ACTIONS(777),
        [sym_comment] = ACTIONS(73),
    },
    [343] = {
        [sym_expression_list] = STATE(344),
        [sym__expression] = STATE(109),
        [sym_binary_operator] = STATE(36),
        [sym_subscript] = STATE(36),
        [sym_call] = STATE(36),
        [sym_list] = STATE(36),
        [sym_list_comprehension] = STATE(36),
        [sym_dictionary] = STATE(36),
        [sym_dictionary_comprehension] = STATE(36),
        [sym_set] = STATE(36),
        [sym_set_comprehension] = STATE(36),
        [anon_sym_LBRACK] = ACTIONS(117),
        [anon_sym_LBRACE] = ACTIONS(119),
        [sym_number] = ACTIONS(121),
        [sym_identifier] = ACTIONS(121),
        [sym_comment] = ACTIONS(73),
    },
    [344] = {
        [anon_sym_COLON] = ACTIONS(779),
        [sym_comment] = ACTIONS(73),
    },
    [345] = {
        [sym__simple_statement] = STATE(259),
        [sym_print_statement] = STATE(5),
        [sym_expression_statement] = STATE(5),
        [sym_return_statement] = STATE(5),
        [sym_delete_statement] = STATE(5),
        [sym__suite] = STATE(346),
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
        [sym__indent] = ACTIONS(569),
    },
    [346] = {
        [sym_else_clause] = STATE(347),
        [anon_sym_print] = ACTIONS(781),
        [anon_sym_return] = ACTIONS(781),
        [anon_sym_del] = ACTIONS(781),
        [sym_pass_statement] = ACTIONS(781),
        [sym_break_statement] = ACTIONS(781),
        [sym_continue_statement] = ACTIONS(781),
        [anon_sym_if] = ACTIONS(781),
        [anon_sym_else] = ACTIONS(705),
        [anon_sym_for] = ACTIONS(781),
        [anon_sym_while] = ACTIONS(781),
        [anon_sym_try] = ACTIONS(781),
        [anon_sym_with] = ACTIONS(781),
        [anon_sym_def] = ACTIONS(781),
        [anon_sym_class] = ACTIONS(781),
        [anon_sym_AT] = ACTIONS(783),
        [anon_sym_LBRACK] = ACTIONS(783),
        [anon_sym_LBRACE] = ACTIONS(783),
        [sym_number] = ACTIONS(781),
        [sym_identifier] = ACTIONS(785),
        [sym_comment] = ACTIONS(73),
        [sym__dedent] = ACTIONS(783),
    },
    [347] = {
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
        [sym_comment] = ACTIONS(73),
        [sym__dedent] = ACTIONS(789),
    },
    [348] = {
        [anon_sym_COLON] = ACTIONS(793),
        [anon_sym_LPAREN] = ACTIONS(209),
        [anon_sym_PLUS] = ACTIONS(211),
        [anon_sym_LBRACK] = ACTIONS(213),
        [sym_comment] = ACTIONS(73),
    },
    [349] = {
        [sym__simple_statement] = STATE(259),
        [sym_print_statement] = STATE(5),
        [sym_expression_statement] = STATE(5),
        [sym_return_statement] = STATE(5),
        [sym_delete_statement] = STATE(5),
        [sym__suite] = STATE(350),
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
        [sym__indent] = ACTIONS(569),
    },
    [350] = {
        [sym_elif_clause] = STATE(352),
        [sym_else_clause] = STATE(353),
        [aux_sym_if_statement_repeat1] = STATE(354),
        [anon_sym_print] = ACTIONS(795),
        [anon_sym_return] = ACTIONS(795),
        [anon_sym_del] = ACTIONS(795),
        [sym_pass_statement] = ACTIONS(795),
        [sym_break_statement] = ACTIONS(795),
        [sym_continue_statement] = ACTIONS(795),
        [anon_sym_if] = ACTIONS(795),
        [anon_sym_elif] = ACTIONS(797),
        [anon_sym_else] = ACTIONS(705),
        [anon_sym_for] = ACTIONS(795),
        [anon_sym_while] = ACTIONS(795),
        [anon_sym_try] = ACTIONS(795),
        [anon_sym_with] = ACTIONS(795),
        [anon_sym_def] = ACTIONS(795),
        [anon_sym_class] = ACTIONS(795),
        [anon_sym_AT] = ACTIONS(799),
        [anon_sym_LBRACK] = ACTIONS(799),
        [anon_sym_LBRACE] = ACTIONS(799),
        [sym_number] = ACTIONS(795),
        [sym_identifier] = ACTIONS(801),
        [sym_comment] = ACTIONS(73),
        [sym__dedent] = ACTIONS(799),
    },
    [351] = {
        [sym__expression] = STATE(357),
        [sym_binary_operator] = STATE(36),
        [sym_subscript] = STATE(36),
        [sym_call] = STATE(36),
        [sym_list] = STATE(36),
        [sym_list_comprehension] = STATE(36),
        [sym_dictionary] = STATE(36),
        [sym_dictionary_comprehension] = STATE(36),
        [sym_set] = STATE(36),
        [sym_set_comprehension] = STATE(36),
        [anon_sym_LBRACK] = ACTIONS(117),
        [anon_sym_LBRACE] = ACTIONS(119),
        [sym_number] = ACTIONS(121),
        [sym_identifier] = ACTIONS(121),
        [sym_comment] = ACTIONS(73),
    },
    [352] = {
        [anon_sym_print] = ACTIONS(803),
        [anon_sym_return] = ACTIONS(803),
        [anon_sym_del] = ACTIONS(803),
        [sym_pass_statement] = ACTIONS(803),
        [sym_break_statement] = ACTIONS(803),
        [sym_continue_statement] = ACTIONS(803),
        [anon_sym_if] = ACTIONS(803),
        [anon_sym_elif] = ACTIONS(803),
        [anon_sym_else] = ACTIONS(803),
        [anon_sym_for] = ACTIONS(803),
        [anon_sym_while] = ACTIONS(803),
        [anon_sym_try] = ACTIONS(803),
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
    [353] = {
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
    [354] = {
        [sym_elif_clause] = STATE(355),
        [sym_else_clause] = STATE(356),
        [anon_sym_print] = ACTIONS(809),
        [anon_sym_return] = ACTIONS(809),
        [anon_sym_del] = ACTIONS(809),
        [sym_pass_statement] = ACTIONS(809),
        [sym_break_statement] = ACTIONS(809),
        [sym_continue_statement] = ACTIONS(809),
        [anon_sym_if] = ACTIONS(809),
        [anon_sym_elif] = ACTIONS(797),
        [anon_sym_else] = ACTIONS(705),
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
    [355] = {
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
        [anon_sym_with] = ACTIONS(815),
        [anon_sym_def] = ACTIONS(815),
        [anon_sym_class] = ACTIONS(815),
        [anon_sym_AT] = ACTIONS(817),
        [anon_sym_LBRACK] = ACTIONS(817),
        [anon_sym_LBRACE] = ACTIONS(817),
        [sym_number] = ACTIONS(815),
        [sym_identifier] = ACTIONS(819),
        [sym_comment] = ACTIONS(73),
        [sym__dedent] = ACTIONS(817),
    },
    [356] = {
        [anon_sym_print] = ACTIONS(821),
        [anon_sym_return] = ACTIONS(821),
        [anon_sym_del] = ACTIONS(821),
        [sym_pass_statement] = ACTIONS(821),
        [sym_break_statement] = ACTIONS(821),
        [sym_continue_statement] = ACTIONS(821),
        [anon_sym_if] = ACTIONS(821),
        [anon_sym_for] = ACTIONS(821),
        [anon_sym_while] = ACTIONS(821),
        [anon_sym_try] = ACTIONS(821),
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
    [357] = {
        [anon_sym_COLON] = ACTIONS(827),
        [anon_sym_LPAREN] = ACTIONS(209),
        [anon_sym_PLUS] = ACTIONS(211),
        [anon_sym_LBRACK] = ACTIONS(213),
        [sym_comment] = ACTIONS(73),
    },
    [358] = {
        [sym__simple_statement] = STATE(259),
        [sym_print_statement] = STATE(5),
        [sym_expression_statement] = STATE(5),
        [sym_return_statement] = STATE(5),
        [sym_delete_statement] = STATE(5),
        [sym__suite] = STATE(359),
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
        [sym__indent] = ACTIONS(569),
    },
    [359] = {
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
        [anon_sym_with] = ACTIONS(829),
        [anon_sym_def] = ACTIONS(829),
        [anon_sym_class] = ACTIONS(829),
        [anon_sym_AT] = ACTIONS(831),
        [anon_sym_LBRACK] = ACTIONS(831),
        [anon_sym_LBRACE] = ACTIONS(831),
        [sym_number] = ACTIONS(829),
        [sym_identifier] = ACTIONS(833),
        [sym_comment] = ACTIONS(73),
        [sym__dedent] = ACTIONS(831),
    },
    [360] = {
        [ts_builtin_sym_end] = ACTIONS(581),
        [anon_sym_SEMI] = ACTIONS(581),
        [anon_sym_print] = ACTIONS(579),
        [anon_sym_return] = ACTIONS(579),
        [anon_sym_del] = ACTIONS(579),
        [sym_pass_statement] = ACTIONS(579),
        [sym_break_statement] = ACTIONS(579),
        [sym_continue_statement] = ACTIONS(579),
        [anon_sym_if] = ACTIONS(579),
        [anon_sym_for] = ACTIONS(579),
        [anon_sym_while] = ACTIONS(579),
        [anon_sym_try] = ACTIONS(579),
        [anon_sym_with] = ACTIONS(579),
        [anon_sym_def] = ACTIONS(579),
        [anon_sym_class] = ACTIONS(579),
        [anon_sym_AT] = ACTIONS(581),
        [anon_sym_LBRACK] = ACTIONS(581),
        [anon_sym_LBRACE] = ACTIONS(581),
        [sym_number] = ACTIONS(579),
        [sym_identifier] = ACTIONS(583),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(581),
    },
    [361] = {
        [sym_parameters] = STATE(362),
        [anon_sym_LPAREN] = ACTIONS(585),
        [sym_comment] = ACTIONS(73),
    },
    [362] = {
        [anon_sym_COLON] = ACTIONS(835),
        [sym_comment] = ACTIONS(73),
    },
    [363] = {
        [sym__simple_statement] = STATE(232),
        [sym_print_statement] = STATE(5),
        [sym_expression_statement] = STATE(5),
        [sym_return_statement] = STATE(5),
        [sym_delete_statement] = STATE(5),
        [sym__suite] = STATE(364),
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
        [sym__indent] = ACTIONS(511),
    },
    [364] = {
        [ts_builtin_sym_end] = ACTIONS(597),
        [anon_sym_SEMI] = ACTIONS(597),
        [anon_sym_print] = ACTIONS(595),
        [anon_sym_return] = ACTIONS(595),
        [anon_sym_del] = ACTIONS(595),
        [sym_pass_statement] = ACTIONS(595),
        [sym_break_statement] = ACTIONS(595),
        [sym_continue_statement] = ACTIONS(595),
        [anon_sym_if] = ACTIONS(595),
        [anon_sym_for] = ACTIONS(595),
        [anon_sym_while] = ACTIONS(595),
        [anon_sym_try] = ACTIONS(595),
        [anon_sym_with] = ACTIONS(595),
        [anon_sym_def] = ACTIONS(595),
        [anon_sym_class] = ACTIONS(595),
        [anon_sym_AT] = ACTIONS(597),
        [anon_sym_LBRACK] = ACTIONS(597),
        [anon_sym_LBRACE] = ACTIONS(597),
        [sym_number] = ACTIONS(595),
        [sym_identifier] = ACTIONS(599),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(597),
    },
    [365] = {
        [aux_sym_with_statement_repeat1] = STATE(367),
        [anon_sym_COMMA] = ACTIONS(653),
        [anon_sym_COLON] = ACTIONS(837),
        [sym_comment] = ACTIONS(73),
    },
    [366] = {
        [sym__simple_statement] = STATE(232),
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
        [sym__indent] = ACTIONS(511),
    },
    [367] = {
        [anon_sym_COMMA] = ACTIONS(663),
        [anon_sym_COLON] = ACTIONS(839),
        [sym_comment] = ACTIONS(73),
    },
    [368] = {
        [sym__simple_statement] = STATE(232),
        [sym_print_statement] = STATE(5),
        [sym_expression_statement] = STATE(5),
        [sym_return_statement] = STATE(5),
        [sym_delete_statement] = STATE(5),
        [sym__suite] = STATE(369),
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
        [sym__indent] = ACTIONS(511),
    },
    [369] = {
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
    [370] = {
        [ts_builtin_sym_end] = ACTIONS(677),
        [anon_sym_SEMI] = ACTIONS(677),
        [anon_sym_print] = ACTIONS(675),
        [anon_sym_return] = ACTIONS(675),
        [anon_sym_del] = ACTIONS(675),
        [sym_pass_statement] = ACTIONS(675),
        [sym_break_statement] = ACTIONS(675),
        [sym_continue_statement] = ACTIONS(675),
        [anon_sym_if] = ACTIONS(675),
        [anon_sym_for] = ACTIONS(675),
        [anon_sym_while] = ACTIONS(675),
        [anon_sym_try] = ACTIONS(675),
        [anon_sym_with] = ACTIONS(675),
        [anon_sym_def] = ACTIONS(675),
        [anon_sym_class] = ACTIONS(675),
        [anon_sym_AT] = ACTIONS(677),
        [anon_sym_LBRACK] = ACTIONS(677),
        [anon_sym_LBRACE] = ACTIONS(677),
        [sym_number] = ACTIONS(675),
        [sym_identifier] = ACTIONS(679),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(677),
    },
    [371] = {
        [sym__simple_statement] = STATE(312),
        [sym_print_statement] = STATE(5),
        [sym_expression_statement] = STATE(5),
        [sym_return_statement] = STATE(5),
        [sym_delete_statement] = STATE(5),
        [sym__suite] = STATE(372),
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
        [sym__indent] = ACTIONS(683),
    },
    [372] = {
        [sym_except_clause] = STATE(375),
        [sym_finally_clause] = STATE(376),
        [aux_sym_try_statement_repeat1] = STATE(377),
        [anon_sym_except] = ACTIONS(841),
        [anon_sym_finally] = ACTIONS(843),
        [sym_comment] = ACTIONS(73),
    },
    [373] = {
        [sym__expression] = STATE(387),
        [sym_binary_operator] = STATE(36),
        [sym_subscript] = STATE(36),
        [sym_call] = STATE(36),
        [sym_list] = STATE(36),
        [sym_list_comprehension] = STATE(36),
        [sym_dictionary] = STATE(36),
        [sym_dictionary_comprehension] = STATE(36),
        [sym_set] = STATE(36),
        [sym_set_comprehension] = STATE(36),
        [anon_sym_LBRACK] = ACTIONS(117),
        [anon_sym_LBRACE] = ACTIONS(119),
        [sym_number] = ACTIONS(121),
        [sym_identifier] = ACTIONS(121),
        [sym_comment] = ACTIONS(73),
    },
    [374] = {
        [anon_sym_COLON] = ACTIONS(845),
        [sym_comment] = ACTIONS(73),
    },
    [375] = {
        [ts_builtin_sym_end] = ACTIONS(695),
        [anon_sym_SEMI] = ACTIONS(695),
        [anon_sym_print] = ACTIONS(693),
        [anon_sym_return] = ACTIONS(693),
        [anon_sym_del] = ACTIONS(693),
        [sym_pass_statement] = ACTIONS(693),
        [sym_break_statement] = ACTIONS(693),
        [sym_continue_statement] = ACTIONS(693),
        [anon_sym_if] = ACTIONS(693),
        [anon_sym_else] = ACTIONS(693),
        [anon_sym_for] = ACTIONS(693),
        [anon_sym_while] = ACTIONS(693),
        [anon_sym_try] = ACTIONS(693),
        [anon_sym_except] = ACTIONS(693),
        [anon_sym_finally] = ACTIONS(693),
        [anon_sym_with] = ACTIONS(693),
        [anon_sym_def] = ACTIONS(693),
        [anon_sym_class] = ACTIONS(693),
        [anon_sym_AT] = ACTIONS(695),
        [anon_sym_LBRACK] = ACTIONS(695),
        [anon_sym_LBRACE] = ACTIONS(695),
        [sym_number] = ACTIONS(693),
        [sym_identifier] = ACTIONS(697),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(695),
    },
    [376] = {
        [ts_builtin_sym_end] = ACTIONS(701),
        [anon_sym_SEMI] = ACTIONS(701),
        [anon_sym_print] = ACTIONS(699),
        [anon_sym_return] = ACTIONS(699),
        [anon_sym_del] = ACTIONS(699),
        [sym_pass_statement] = ACTIONS(699),
        [sym_break_statement] = ACTIONS(699),
        [sym_continue_statement] = ACTIONS(699),
        [anon_sym_if] = ACTIONS(699),
        [anon_sym_for] = ACTIONS(699),
        [anon_sym_while] = ACTIONS(699),
        [anon_sym_try] = ACTIONS(699),
        [anon_sym_with] = ACTIONS(699),
        [anon_sym_def] = ACTIONS(699),
        [anon_sym_class] = ACTIONS(699),
        [anon_sym_AT] = ACTIONS(701),
        [anon_sym_LBRACK] = ACTIONS(701),
        [anon_sym_LBRACE] = ACTIONS(701),
        [sym_number] = ACTIONS(699),
        [sym_identifier] = ACTIONS(703),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(701),
    },
    [377] = {
        [sym_else_clause] = STATE(379),
        [sym_except_clause] = STATE(380),
        [sym_finally_clause] = STATE(381),
        [ts_builtin_sym_end] = ACTIONS(701),
        [anon_sym_SEMI] = ACTIONS(701),
        [anon_sym_print] = ACTIONS(699),
        [anon_sym_return] = ACTIONS(699),
        [anon_sym_del] = ACTIONS(699),
        [sym_pass_statement] = ACTIONS(699),
        [sym_break_statement] = ACTIONS(699),
        [sym_continue_statement] = ACTIONS(699),
        [anon_sym_if] = ACTIONS(699),
        [anon_sym_else] = ACTIONS(847),
        [anon_sym_for] = ACTIONS(699),
        [anon_sym_while] = ACTIONS(699),
        [anon_sym_try] = ACTIONS(699),
        [anon_sym_except] = ACTIONS(849),
        [anon_sym_finally] = ACTIONS(851),
        [anon_sym_with] = ACTIONS(699),
        [anon_sym_def] = ACTIONS(699),
        [anon_sym_class] = ACTIONS(699),
        [anon_sym_AT] = ACTIONS(701),
        [anon_sym_LBRACK] = ACTIONS(701),
        [anon_sym_LBRACE] = ACTIONS(701),
        [sym_number] = ACTIONS(699),
        [sym_identifier] = ACTIONS(703),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(701),
    },
    [378] = {
        [anon_sym_COLON] = ACTIONS(853),
        [sym_comment] = ACTIONS(73),
    },
    [379] = {
        [sym_finally_clause] = STATE(382),
        [ts_builtin_sym_end] = ACTIONS(715),
        [anon_sym_SEMI] = ACTIONS(715),
        [anon_sym_print] = ACTIONS(713),
        [anon_sym_return] = ACTIONS(713),
        [anon_sym_del] = ACTIONS(713),
        [sym_pass_statement] = ACTIONS(713),
        [sym_break_statement] = ACTIONS(713),
        [sym_continue_statement] = ACTIONS(713),
        [anon_sym_if] = ACTIONS(713),
        [anon_sym_for] = ACTIONS(713),
        [anon_sym_while] = ACTIONS(713),
        [anon_sym_try] = ACTIONS(713),
        [anon_sym_finally] = ACTIONS(851),
        [anon_sym_with] = ACTIONS(713),
        [anon_sym_def] = ACTIONS(713),
        [anon_sym_class] = ACTIONS(713),
        [anon_sym_AT] = ACTIONS(715),
        [anon_sym_LBRACK] = ACTIONS(715),
        [anon_sym_LBRACE] = ACTIONS(715),
        [sym_number] = ACTIONS(713),
        [sym_identifier] = ACTIONS(717),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(715),
    },
    [380] = {
        [ts_builtin_sym_end] = ACTIONS(721),
        [anon_sym_SEMI] = ACTIONS(721),
        [anon_sym_print] = ACTIONS(719),
        [anon_sym_return] = ACTIONS(719),
        [anon_sym_del] = ACTIONS(719),
        [sym_pass_statement] = ACTIONS(719),
        [sym_break_statement] = ACTIONS(719),
        [sym_continue_statement] = ACTIONS(719),
        [anon_sym_if] = ACTIONS(719),
        [anon_sym_else] = ACTIONS(719),
        [anon_sym_for] = ACTIONS(719),
        [anon_sym_while] = ACTIONS(719),
        [anon_sym_try] = ACTIONS(719),
        [anon_sym_except] = ACTIONS(719),
        [anon_sym_finally] = ACTIONS(719),
        [anon_sym_with] = ACTIONS(719),
        [anon_sym_def] = ACTIONS(719),
        [anon_sym_class] = ACTIONS(719),
        [anon_sym_AT] = ACTIONS(721),
        [anon_sym_LBRACK] = ACTIONS(721),
        [anon_sym_LBRACE] = ACTIONS(721),
        [sym_number] = ACTIONS(719),
        [sym_identifier] = ACTIONS(723),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(721),
    },
    [381] = {
        [ts_builtin_sym_end] = ACTIONS(715),
        [anon_sym_SEMI] = ACTIONS(715),
        [anon_sym_print] = ACTIONS(713),
        [anon_sym_return] = ACTIONS(713),
        [anon_sym_del] = ACTIONS(713),
        [sym_pass_statement] = ACTIONS(713),
        [sym_break_statement] = ACTIONS(713),
        [sym_continue_statement] = ACTIONS(713),
        [anon_sym_if] = ACTIONS(713),
        [anon_sym_for] = ACTIONS(713),
        [anon_sym_while] = ACTIONS(713),
        [anon_sym_try] = ACTIONS(713),
        [anon_sym_with] = ACTIONS(713),
        [anon_sym_def] = ACTIONS(713),
        [anon_sym_class] = ACTIONS(713),
        [anon_sym_AT] = ACTIONS(715),
        [anon_sym_LBRACK] = ACTIONS(715),
        [anon_sym_LBRACE] = ACTIONS(715),
        [sym_number] = ACTIONS(713),
        [sym_identifier] = ACTIONS(717),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(715),
    },
    [382] = {
        [ts_builtin_sym_end] = ACTIONS(727),
        [anon_sym_SEMI] = ACTIONS(727),
        [anon_sym_print] = ACTIONS(725),
        [anon_sym_return] = ACTIONS(725),
        [anon_sym_del] = ACTIONS(725),
        [sym_pass_statement] = ACTIONS(725),
        [sym_break_statement] = ACTIONS(725),
        [sym_continue_statement] = ACTIONS(725),
        [anon_sym_if] = ACTIONS(725),
        [anon_sym_for] = ACTIONS(725),
        [anon_sym_while] = ACTIONS(725),
        [anon_sym_try] = ACTIONS(725),
        [anon_sym_with] = ACTIONS(725),
        [anon_sym_def] = ACTIONS(725),
        [anon_sym_class] = ACTIONS(725),
        [anon_sym_AT] = ACTIONS(727),
        [anon_sym_LBRACK] = ACTIONS(727),
        [anon_sym_LBRACE] = ACTIONS(727),
        [sym_number] = ACTIONS(725),
        [sym_identifier] = ACTIONS(729),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(727),
    },
    [383] = {
        [sym__simple_statement] = STATE(232),
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
        [sym__indent] = ACTIONS(511),
    },
    [384] = {
        [ts_builtin_sym_end] = ACTIONS(733),
        [anon_sym_SEMI] = ACTIONS(733),
        [anon_sym_print] = ACTIONS(731),
        [anon_sym_return] = ACTIONS(731),
        [anon_sym_del] = ACTIONS(731),
        [sym_pass_statement] = ACTIONS(731),
        [sym_break_statement] = ACTIONS(731),
        [sym_continue_statement] = ACTIONS(731),
        [anon_sym_if] = ACTIONS(731),
        [anon_sym_for] = ACTIONS(731),
        [anon_sym_while] = ACTIONS(731),
        [anon_sym_try] = ACTIONS(731),
        [anon_sym_finally] = ACTIONS(731),
        [anon_sym_with] = ACTIONS(731),
        [anon_sym_def] = ACTIONS(731),
        [anon_sym_class] = ACTIONS(731),
        [anon_sym_AT] = ACTIONS(733),
        [anon_sym_LBRACK] = ACTIONS(733),
        [anon_sym_LBRACE] = ACTIONS(733),
        [sym_number] = ACTIONS(731),
        [sym_identifier] = ACTIONS(735),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(733),
    },
    [385] = {
        [sym__simple_statement] = STATE(232),
        [sym_print_statement] = STATE(5),
        [sym_expression_statement] = STATE(5),
        [sym_return_statement] = STATE(5),
        [sym_delete_statement] = STATE(5),
        [sym__suite] = STATE(386),
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
        [sym__indent] = ACTIONS(511),
    },
    [386] = {
        [ts_builtin_sym_end] = ACTIONS(739),
        [anon_sym_SEMI] = ACTIONS(739),
        [anon_sym_print] = ACTIONS(737),
        [anon_sym_return] = ACTIONS(737),
        [anon_sym_del] = ACTIONS(737),
        [sym_pass_statement] = ACTIONS(737),
        [sym_break_statement] = ACTIONS(737),
        [sym_continue_statement] = ACTIONS(737),
        [anon_sym_if] = ACTIONS(737),
        [anon_sym_for] = ACTIONS(737),
        [anon_sym_while] = ACTIONS(737),
        [anon_sym_try] = ACTIONS(737),
        [anon_sym_with] = ACTIONS(737),
        [anon_sym_def] = ACTIONS(737),
        [anon_sym_class] = ACTIONS(737),
        [anon_sym_AT] = ACTIONS(739),
        [anon_sym_LBRACK] = ACTIONS(739),
        [anon_sym_LBRACE] = ACTIONS(739),
        [sym_number] = ACTIONS(737),
        [sym_identifier] = ACTIONS(741),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(739),
    },
    [387] = {
        [anon_sym_COMMA] = ACTIONS(855),
        [anon_sym_COLON] = ACTIONS(857),
        [anon_sym_as] = ACTIONS(855),
        [anon_sym_LPAREN] = ACTIONS(209),
        [anon_sym_PLUS] = ACTIONS(211),
        [anon_sym_LBRACK] = ACTIONS(213),
        [sym_comment] = ACTIONS(73),
    },
    [388] = {
        [sym__expression] = STATE(390),
        [sym_binary_operator] = STATE(36),
        [sym_subscript] = STATE(36),
        [sym_call] = STATE(36),
        [sym_list] = STATE(36),
        [sym_list_comprehension] = STATE(36),
        [sym_dictionary] = STATE(36),
        [sym_dictionary_comprehension] = STATE(36),
        [sym_set] = STATE(36),
        [sym_set_comprehension] = STATE(36),
        [anon_sym_LBRACK] = ACTIONS(117),
        [anon_sym_LBRACE] = ACTIONS(119),
        [sym_number] = ACTIONS(121),
        [sym_identifier] = ACTIONS(121),
        [sym_comment] = ACTIONS(73),
    },
    [389] = {
        [sym__simple_statement] = STATE(232),
        [sym_print_statement] = STATE(5),
        [sym_expression_statement] = STATE(5),
        [sym_return_statement] = STATE(5),
        [sym_delete_statement] = STATE(5),
        [sym__suite] = STATE(393),
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
        [sym__indent] = ACTIONS(511),
    },
    [390] = {
        [anon_sym_COLON] = ACTIONS(859),
        [anon_sym_LPAREN] = ACTIONS(209),
        [anon_sym_PLUS] = ACTIONS(211),
        [anon_sym_LBRACK] = ACTIONS(213),
        [sym_comment] = ACTIONS(73),
    },
    [391] = {
        [sym__simple_statement] = STATE(232),
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
        [sym__indent] = ACTIONS(511),
    },
    [392] = {
        [ts_builtin_sym_end] = ACTIONS(751),
        [anon_sym_SEMI] = ACTIONS(751),
        [anon_sym_print] = ACTIONS(749),
        [anon_sym_return] = ACTIONS(749),
        [anon_sym_del] = ACTIONS(749),
        [sym_pass_statement] = ACTIONS(749),
        [sym_break_statement] = ACTIONS(749),
        [sym_continue_statement] = ACTIONS(749),
        [anon_sym_if] = ACTIONS(749),
        [anon_sym_else] = ACTIONS(749),
        [anon_sym_for] = ACTIONS(749),
        [anon_sym_while] = ACTIONS(749),
        [anon_sym_try] = ACTIONS(749),
        [anon_sym_except] = ACTIONS(749),
        [anon_sym_finally] = ACTIONS(749),
        [anon_sym_with] = ACTIONS(749),
        [anon_sym_def] = ACTIONS(749),
        [anon_sym_class] = ACTIONS(749),
        [anon_sym_AT] = ACTIONS(751),
        [anon_sym_LBRACK] = ACTIONS(751),
        [anon_sym_LBRACE] = ACTIONS(751),
        [sym_number] = ACTIONS(749),
        [sym_identifier] = ACTIONS(753),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(751),
    },
    [393] = {
        [ts_builtin_sym_end] = ACTIONS(757),
        [anon_sym_SEMI] = ACTIONS(757),
        [anon_sym_print] = ACTIONS(755),
        [anon_sym_return] = ACTIONS(755),
        [anon_sym_del] = ACTIONS(755),
        [sym_pass_statement] = ACTIONS(755),
        [sym_break_statement] = ACTIONS(755),
        [sym_continue_statement] = ACTIONS(755),
        [anon_sym_if] = ACTIONS(755),
        [anon_sym_else] = ACTIONS(755),
        [anon_sym_for] = ACTIONS(755),
        [anon_sym_while] = ACTIONS(755),
        [anon_sym_try] = ACTIONS(755),
        [anon_sym_except] = ACTIONS(755),
        [anon_sym_finally] = ACTIONS(755),
        [anon_sym_with] = ACTIONS(755),
        [anon_sym_def] = ACTIONS(755),
        [anon_sym_class] = ACTIONS(755),
        [anon_sym_AT] = ACTIONS(757),
        [anon_sym_LBRACK] = ACTIONS(757),
        [anon_sym_LBRACE] = ACTIONS(757),
        [sym_number] = ACTIONS(755),
        [sym_identifier] = ACTIONS(759),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(757),
    },
    [394] = {
        [anon_sym_COLON] = ACTIONS(861),
        [anon_sym_LPAREN] = ACTIONS(209),
        [anon_sym_PLUS] = ACTIONS(211),
        [anon_sym_LBRACK] = ACTIONS(213),
        [sym_comment] = ACTIONS(73),
    },
    [395] = {
        [sym__simple_statement] = STATE(232),
        [sym_print_statement] = STATE(5),
        [sym_expression_statement] = STATE(5),
        [sym_return_statement] = STATE(5),
        [sym_delete_statement] = STATE(5),
        [sym__suite] = STATE(396),
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
        [sym__indent] = ACTIONS(511),
    },
    [396] = {
        [sym_else_clause] = STATE(397),
        [ts_builtin_sym_end] = ACTIONS(767),
        [anon_sym_SEMI] = ACTIONS(767),
        [anon_sym_print] = ACTIONS(765),
        [anon_sym_return] = ACTIONS(765),
        [anon_sym_del] = ACTIONS(765),
        [sym_pass_statement] = ACTIONS(765),
        [sym_break_statement] = ACTIONS(765),
        [sym_continue_statement] = ACTIONS(765),
        [anon_sym_if] = ACTIONS(765),
        [anon_sym_else] = ACTIONS(847),
        [anon_sym_for] = ACTIONS(765),
        [anon_sym_while] = ACTIONS(765),
        [anon_sym_try] = ACTIONS(765),
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
    [397] = {
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
    [398] = {
        [anon_sym_in] = ACTIONS(863),
        [sym_comment] = ACTIONS(73),
    },
    [399] = {
        [sym_expression_list] = STATE(400),
        [sym__expression] = STATE(109),
        [sym_binary_operator] = STATE(36),
        [sym_subscript] = STATE(36),
        [sym_call] = STATE(36),
        [sym_list] = STATE(36),
        [sym_list_comprehension] = STATE(36),
        [sym_dictionary] = STATE(36),
        [sym_dictionary_comprehension] = STATE(36),
        [sym_set] = STATE(36),
        [sym_set_comprehension] = STATE(36),
        [anon_sym_LBRACK] = ACTIONS(117),
        [anon_sym_LBRACE] = ACTIONS(119),
        [sym_number] = ACTIONS(121),
        [sym_identifier] = ACTIONS(121),
        [sym_comment] = ACTIONS(73),
    },
    [400] = {
        [anon_sym_COLON] = ACTIONS(865),
        [sym_comment] = ACTIONS(73),
    },
    [401] = {
        [sym__simple_statement] = STATE(232),
        [sym_print_statement] = STATE(5),
        [sym_expression_statement] = STATE(5),
        [sym_return_statement] = STATE(5),
        [sym_delete_statement] = STATE(5),
        [sym__suite] = STATE(402),
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
        [sym__indent] = ACTIONS(511),
    },
    [402] = {
        [sym_else_clause] = STATE(403),
        [ts_builtin_sym_end] = ACTIONS(783),
        [anon_sym_SEMI] = ACTIONS(783),
        [anon_sym_print] = ACTIONS(781),
        [anon_sym_return] = ACTIONS(781),
        [anon_sym_del] = ACTIONS(781),
        [sym_pass_statement] = ACTIONS(781),
        [sym_break_statement] = ACTIONS(781),
        [sym_continue_statement] = ACTIONS(781),
        [anon_sym_if] = ACTIONS(781),
        [anon_sym_else] = ACTIONS(847),
        [anon_sym_for] = ACTIONS(781),
        [anon_sym_while] = ACTIONS(781),
        [anon_sym_try] = ACTIONS(781),
        [anon_sym_with] = ACTIONS(781),
        [anon_sym_def] = ACTIONS(781),
        [anon_sym_class] = ACTIONS(781),
        [anon_sym_AT] = ACTIONS(783),
        [anon_sym_LBRACK] = ACTIONS(783),
        [anon_sym_LBRACE] = ACTIONS(783),
        [sym_number] = ACTIONS(781),
        [sym_identifier] = ACTIONS(785),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(783),
    },
    [403] = {
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
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(789),
    },
    [404] = {
        [anon_sym_COLON] = ACTIONS(867),
        [anon_sym_LPAREN] = ACTIONS(209),
        [anon_sym_PLUS] = ACTIONS(211),
        [anon_sym_LBRACK] = ACTIONS(213),
        [sym_comment] = ACTIONS(73),
    },
    [405] = {
        [sym__simple_statement] = STATE(232),
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
        [sym__indent] = ACTIONS(511),
    },
    [406] = {
        [sym_elif_clause] = STATE(408),
        [sym_else_clause] = STATE(409),
        [aux_sym_if_statement_repeat1] = STATE(410),
        [ts_builtin_sym_end] = ACTIONS(799),
        [anon_sym_SEMI] = ACTIONS(799),
        [anon_sym_print] = ACTIONS(795),
        [anon_sym_return] = ACTIONS(795),
        [anon_sym_del] = ACTIONS(795),
        [sym_pass_statement] = ACTIONS(795),
        [sym_break_statement] = ACTIONS(795),
        [sym_continue_statement] = ACTIONS(795),
        [anon_sym_if] = ACTIONS(795),
        [anon_sym_elif] = ACTIONS(869),
        [anon_sym_else] = ACTIONS(847),
        [anon_sym_for] = ACTIONS(795),
        [anon_sym_while] = ACTIONS(795),
        [anon_sym_try] = ACTIONS(795),
        [anon_sym_with] = ACTIONS(795),
        [anon_sym_def] = ACTIONS(795),
        [anon_sym_class] = ACTIONS(795),
        [anon_sym_AT] = ACTIONS(799),
        [anon_sym_LBRACK] = ACTIONS(799),
        [anon_sym_LBRACE] = ACTIONS(799),
        [sym_number] = ACTIONS(795),
        [sym_identifier] = ACTIONS(801),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(799),
    },
    [407] = {
        [sym__expression] = STATE(413),
        [sym_binary_operator] = STATE(36),
        [sym_subscript] = STATE(36),
        [sym_call] = STATE(36),
        [sym_list] = STATE(36),
        [sym_list_comprehension] = STATE(36),
        [sym_dictionary] = STATE(36),
        [sym_dictionary_comprehension] = STATE(36),
        [sym_set] = STATE(36),
        [sym_set_comprehension] = STATE(36),
        [anon_sym_LBRACK] = ACTIONS(117),
        [anon_sym_LBRACE] = ACTIONS(119),
        [sym_number] = ACTIONS(121),
        [sym_identifier] = ACTIONS(121),
        [sym_comment] = ACTIONS(73),
    },
    [408] = {
        [ts_builtin_sym_end] = ACTIONS(805),
        [anon_sym_SEMI] = ACTIONS(805),
        [anon_sym_print] = ACTIONS(803),
        [anon_sym_return] = ACTIONS(803),
        [anon_sym_del] = ACTIONS(803),
        [sym_pass_statement] = ACTIONS(803),
        [sym_break_statement] = ACTIONS(803),
        [sym_continue_statement] = ACTIONS(803),
        [anon_sym_if] = ACTIONS(803),
        [anon_sym_elif] = ACTIONS(803),
        [anon_sym_else] = ACTIONS(803),
        [anon_sym_for] = ACTIONS(803),
        [anon_sym_while] = ACTIONS(803),
        [anon_sym_try] = ACTIONS(803),
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
    [409] = {
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
    [410] = {
        [sym_elif_clause] = STATE(411),
        [sym_else_clause] = STATE(412),
        [ts_builtin_sym_end] = ACTIONS(811),
        [anon_sym_SEMI] = ACTIONS(811),
        [anon_sym_print] = ACTIONS(809),
        [anon_sym_return] = ACTIONS(809),
        [anon_sym_del] = ACTIONS(809),
        [sym_pass_statement] = ACTIONS(809),
        [sym_break_statement] = ACTIONS(809),
        [sym_continue_statement] = ACTIONS(809),
        [anon_sym_if] = ACTIONS(809),
        [anon_sym_elif] = ACTIONS(869),
        [anon_sym_else] = ACTIONS(847),
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
    [411] = {
        [ts_builtin_sym_end] = ACTIONS(817),
        [anon_sym_SEMI] = ACTIONS(817),
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
        [anon_sym_with] = ACTIONS(815),
        [anon_sym_def] = ACTIONS(815),
        [anon_sym_class] = ACTIONS(815),
        [anon_sym_AT] = ACTIONS(817),
        [anon_sym_LBRACK] = ACTIONS(817),
        [anon_sym_LBRACE] = ACTIONS(817),
        [sym_number] = ACTIONS(815),
        [sym_identifier] = ACTIONS(819),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(817),
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
        [anon_sym_for] = ACTIONS(821),
        [anon_sym_while] = ACTIONS(821),
        [anon_sym_try] = ACTIONS(821),
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
        [anon_sym_COLON] = ACTIONS(871),
        [anon_sym_LPAREN] = ACTIONS(209),
        [anon_sym_PLUS] = ACTIONS(211),
        [anon_sym_LBRACK] = ACTIONS(213),
        [sym_comment] = ACTIONS(73),
    },
    [414] = {
        [sym__simple_statement] = STATE(232),
        [sym_print_statement] = STATE(5),
        [sym_expression_statement] = STATE(5),
        [sym_return_statement] = STATE(5),
        [sym_delete_statement] = STATE(5),
        [sym__suite] = STATE(415),
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
        [sym__indent] = ACTIONS(511),
    },
    [415] = {
        [ts_builtin_sym_end] = ACTIONS(831),
        [anon_sym_SEMI] = ACTIONS(831),
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
        [anon_sym_with] = ACTIONS(829),
        [anon_sym_def] = ACTIONS(829),
        [anon_sym_class] = ACTIONS(829),
        [anon_sym_AT] = ACTIONS(831),
        [anon_sym_LBRACK] = ACTIONS(831),
        [anon_sym_LBRACE] = ACTIONS(831),
        [sym_number] = ACTIONS(829),
        [sym_identifier] = ACTIONS(833),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(831),
    },
    [416] = {
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(873),
    },
    [417] = {
        [aux_sym_print_statement_repeat1] = STATE(419),
        [anon_sym_COMMA] = ACTIONS(875),
        [anon_sym_LPAREN] = ACTIONS(161),
        [anon_sym_PLUS] = ACTIONS(163),
        [anon_sym_LBRACK] = ACTIONS(165),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(333),
    },
    [418] = {
        [sym__expression] = STATE(422),
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
    [419] = {
        [anon_sym_COMMA] = ACTIONS(877),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(337),
    },
    [420] = {
        [sym__expression] = STATE(421),
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
    [421] = {
        [anon_sym_COMMA] = ACTIONS(339),
        [anon_sym_LPAREN] = ACTIONS(161),
        [anon_sym_PLUS] = ACTIONS(163),
        [anon_sym_LBRACK] = ACTIONS(165),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(339),
    },
    [422] = {
        [anon_sym_COMMA] = ACTIONS(341),
        [anon_sym_LPAREN] = ACTIONS(161),
        [anon_sym_PLUS] = ACTIONS(163),
        [anon_sym_LBRACK] = ACTIONS(165),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(341),
    },
    [423] = {
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(879),
    },
    [424] = {
        [aux_sym_print_statement_repeat1] = STATE(425),
        [anon_sym_COMMA] = ACTIONS(875),
        [anon_sym_LPAREN] = ACTIONS(161),
        [anon_sym_PLUS] = ACTIONS(163),
        [anon_sym_LBRACK] = ACTIONS(165),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(881),
    },
    [425] = {
        [anon_sym_COMMA] = ACTIONS(877),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(883),
    },
    [426] = {
        [sym_with_item] = STATE(617),
        [sym_dictionary_splat_parameter] = STATE(553),
        [sym__expression] = STATE(618),
        [sym_binary_operator] = STATE(16),
        [sym_subscript] = STATE(16),
        [sym_call] = STATE(16),
        [sym_keyword_argument] = STATE(619),
        [sym_dictionary_splat_argument] = STATE(620),
        [sym_list] = STATE(16),
        [sym_list_comprehension] = STATE(16),
        [sym_dictionary] = STATE(16),
        [sym_dictionary_comprehension] = STATE(16),
        [sym_pair] = STATE(621),
        [sym_set] = STATE(16),
        [sym_set_comprehension] = STATE(16),
        [anon_sym_RPAREN] = ACTIONS(885),
        [anon_sym_STAR] = ACTIONS(887),
        [anon_sym_LBRACK] = ACTIONS(893),
        [anon_sym_DOT_DOT_DOT] = ACTIONS(897),
        [anon_sym_RBRACK] = ACTIONS(899),
        [anon_sym_STAR_STAR] = ACTIONS(901),
        [anon_sym_LBRACE] = ACTIONS(905),
        [anon_sym_RBRACE] = ACTIONS(909),
        [sym_number] = ACTIONS(911),
        [sym_identifier] = ACTIONS(915),
        [sym_comment] = ACTIONS(73),
    },
    [427] = {
        [sym__expression] = STATE(608),
        [sym_binary_operator] = STATE(36),
        [sym_subscript] = STATE(36),
        [sym_call] = STATE(36),
        [sym_list] = STATE(36),
        [sym_list_comprehension] = STATE(36),
        [sym_dictionary] = STATE(36),
        [sym_dictionary_comprehension] = STATE(36),
        [sym_set] = STATE(36),
        [sym_set_comprehension] = STATE(36),
        [anon_sym_LBRACK] = ACTIONS(117),
        [anon_sym_LBRACE] = ACTIONS(119),
        [sym_number] = ACTIONS(121),
        [sym_identifier] = ACTIONS(121),
        [sym_comment] = ACTIONS(73),
    },
    [428] = {
        [sym__simple_statement] = STATE(490),
        [sym_print_statement] = STATE(5),
        [sym_expression_statement] = STATE(5),
        [sym_return_statement] = STATE(5),
        [sym_delete_statement] = STATE(5),
        [sym__suite] = STATE(470),
        [sym__expression] = STATE(535),
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
        [sym__indent] = ACTIONS(921),
    },
    [429] = {
        [sym__expression] = STATE(605),
        [sym_binary_operator] = STATE(36),
        [sym_subscript] = STATE(36),
        [sym_call] = STATE(36),
        [sym_list] = STATE(36),
        [sym_list_comprehension] = STATE(36),
        [sym_dictionary] = STATE(36),
        [sym_dictionary_comprehension] = STATE(36),
        [sym_set] = STATE(36),
        [sym_set_comprehension] = STATE(36),
        [anon_sym_LBRACK] = ACTIONS(117),
        [anon_sym_LBRACE] = ACTIONS(119),
        [sym_number] = ACTIONS(121),
        [sym_identifier] = ACTIONS(121),
        [sym_comment] = ACTIONS(73),
    },
    [430] = {
        [anon_sym_COLON] = ACTIONS(923),
        [sym_comment] = ACTIONS(73),
    },
    [431] = {
        [sym_expression_list] = STATE(604),
        [sym__expression] = STATE(109),
        [sym_binary_operator] = STATE(36),
        [sym_subscript] = STATE(36),
        [sym_call] = STATE(36),
        [sym_list] = STATE(36),
        [sym_list_comprehension] = STATE(36),
        [sym_dictionary] = STATE(36),
        [sym_dictionary_comprehension] = STATE(36),
        [sym_set] = STATE(36),
        [sym_set_comprehension] = STATE(36),
        [anon_sym_LBRACK] = ACTIONS(117),
        [anon_sym_LBRACE] = ACTIONS(119),
        [sym_number] = ACTIONS(121),
        [sym_identifier] = ACTIONS(121),
        [sym_comment] = ACTIONS(73),
    },
    [432] = {
        [sym_expression_list] = STATE(513),
        [sym__expression] = STATE(600),
        [sym_binary_operator] = STATE(36),
        [sym_subscript] = STATE(36),
        [sym_call] = STATE(36),
        [sym_list] = STATE(36),
        [sym_list_comprehension] = STATE(36),
        [sym_dictionary] = STATE(36),
        [sym_dictionary_comprehension] = STATE(36),
        [sym_set] = STATE(36),
        [sym_set_comprehension] = STATE(36),
        [anon_sym_LBRACK] = ACTIONS(117),
        [anon_sym_LBRACE] = ACTIONS(119),
        [sym_number] = ACTIONS(121),
        [sym_identifier] = ACTIONS(121),
        [sym_comment] = ACTIONS(73),
    },
    [433] = {
        [sym__expression] = STATE(596),
        [sym_binary_operator] = STATE(36),
        [sym_subscript] = STATE(36),
        [sym_call] = STATE(36),
        [sym_list] = STATE(36),
        [sym_list_comprehension] = STATE(36),
        [sym_dictionary] = STATE(36),
        [sym_dictionary_comprehension] = STATE(36),
        [sym_set] = STATE(36),
        [sym_set_comprehension] = STATE(36),
        [anon_sym_LBRACK] = ACTIONS(117),
        [anon_sym_LBRACE] = ACTIONS(119),
        [sym_number] = ACTIONS(121),
        [sym_identifier] = ACTIONS(121),
        [sym_comment] = ACTIONS(73),
    },
    [434] = {
        [anon_sym_COLON] = ACTIONS(925),
        [sym_comment] = ACTIONS(73),
    },
    [435] = {
        [sym__expression] = STATE(589),
        [sym_binary_operator] = STATE(36),
        [sym_subscript] = STATE(36),
        [sym_call] = STATE(36),
        [sym_list] = STATE(36),
        [sym_list_comprehension] = STATE(36),
        [sym_dictionary] = STATE(36),
        [sym_dictionary_comprehension] = STATE(36),
        [sym_set] = STATE(36),
        [sym_set_comprehension] = STATE(36),
        [anon_sym_LBRACK] = ACTIONS(117),
        [anon_sym_LBRACE] = ACTIONS(119),
        [sym_number] = ACTIONS(121),
        [sym_identifier] = ACTIONS(121),
        [sym_comment] = ACTIONS(73),
    },
    [436] = {
        [sym__expression] = STATE(588),
        [sym_binary_operator] = STATE(36),
        [sym_subscript] = STATE(36),
        [sym_call] = STATE(36),
        [sym_list] = STATE(36),
        [sym_list_comprehension] = STATE(36),
        [sym_dictionary] = STATE(36),
        [sym_dictionary_comprehension] = STATE(36),
        [sym_set] = STATE(36),
        [sym_set_comprehension] = STATE(36),
        [anon_sym_LBRACK] = ACTIONS(117),
        [anon_sym_LBRACE] = ACTIONS(119),
        [sym_number] = ACTIONS(121),
        [sym_identifier] = ACTIONS(121),
        [sym_comment] = ACTIONS(73),
    },
    [437] = {
        [anon_sym_COLON] = ACTIONS(927),
        [sym_comment] = ACTIONS(73),
    },
    [438] = {
        [sym_with_item] = STATE(585),
        [sym__expression] = STATE(298),
        [sym_binary_operator] = STATE(36),
        [sym_subscript] = STATE(36),
        [sym_call] = STATE(36),
        [sym_list] = STATE(36),
        [sym_list_comprehension] = STATE(36),
        [sym_dictionary] = STATE(36),
        [sym_dictionary_comprehension] = STATE(36),
        [sym_set] = STATE(36),
        [sym_set_comprehension] = STATE(36),
        [anon_sym_LBRACK] = ACTIONS(117),
        [anon_sym_LBRACE] = ACTIONS(119),
        [sym_number] = ACTIONS(121),
        [sym_identifier] = ACTIONS(121),
        [sym_comment] = ACTIONS(73),
    },
    [439] = {
        [sym_identifier] = ACTIONS(929),
        [sym_comment] = ACTIONS(73),
    },
    [440] = {
        [sym_default_parameter] = STATE(273),
        [sym_list_splat_parameter] = STATE(274),
        [sym_dictionary_splat_parameter] = STATE(275),
        [sym_expression_list] = STATE(565),
        [sym__expression] = STATE(579),
        [sym_binary_operator] = STATE(36),
        [sym_subscript] = STATE(36),
        [sym_call] = STATE(36),
        [sym_keyword_argument] = STATE(147),
        [sym_list_splat_argument] = STATE(148),
        [sym_dictionary_splat_argument] = STATE(149),
        [sym_list] = STATE(36),
        [sym_list_comprehension] = STATE(36),
        [sym_dictionary] = STATE(36),
        [sym_dictionary_comprehension] = STATE(36),
        [sym_set] = STATE(36),
        [sym_set_comprehension] = STATE(36),
        [aux_sym_parameters_repeat1] = STATE(276),
        [aux_sym_call_repeat1] = STATE(150),
        [anon_sym_RPAREN] = ACTIONS(587),
        [anon_sym_STAR] = ACTIONS(931),
        [anon_sym_LBRACK] = ACTIONS(117),
        [anon_sym_STAR_STAR] = ACTIONS(195),
        [anon_sym_LBRACE] = ACTIONS(119),
        [sym_number] = ACTIONS(121),
        [sym_identifier] = ACTIONS(933),
        [sym_comment] = ACTIONS(73),
    },
    [441] = {
        [anon_sym_COMMA] = ACTIONS(935),
        [anon_sym_COLON] = ACTIONS(941),
        [anon_sym_for] = ACTIONS(935),
        [anon_sym_in] = ACTIONS(935),
        [anon_sym_as] = ACTIONS(935),
        [anon_sym_LPAREN] = ACTIONS(935),
        [anon_sym_RPAREN] = ACTIONS(935),
        [anon_sym_PLUS] = ACTIONS(935),
        [anon_sym_LBRACK] = ACTIONS(935),
        [anon_sym_RBRACK] = ACTIONS(935),
        [anon_sym_RBRACE] = ACTIONS(935),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(953),
    },
    [442] = {
        [sym__expression] = STATE(576),
        [sym_binary_operator] = STATE(36),
        [sym_subscript] = STATE(36),
        [sym_call] = STATE(36),
        [sym_list] = STATE(36),
        [sym_list_comprehension] = STATE(36),
        [sym_dictionary] = STATE(36),
        [sym_dictionary_comprehension] = STATE(36),
        [sym_set] = STATE(36),
        [sym_set_comprehension] = STATE(36),
        [anon_sym_LBRACK] = ACTIONS(117),
        [anon_sym_LBRACE] = ACTIONS(119),
        [sym_number] = ACTIONS(121),
        [sym_identifier] = ACTIONS(121),
        [sym_comment] = ACTIONS(73),
    },
    [443] = {
        [sym__expression] = STATE(144),
        [sym_binary_operator] = STATE(36),
        [sym_subscript] = STATE(36),
        [sym_call] = STATE(36),
        [sym_list] = STATE(36),
        [sym_list_comprehension] = STATE(36),
        [sym_dictionary] = STATE(36),
        [sym_dictionary_comprehension] = STATE(36),
        [sym_set] = STATE(36),
        [sym_set_comprehension] = STATE(36),
        [anon_sym_STAR] = ACTIONS(603),
        [anon_sym_LBRACK] = ACTIONS(117),
        [anon_sym_LBRACE] = ACTIONS(119),
        [sym_number] = ACTIONS(121),
        [sym_identifier] = ACTIONS(961),
        [sym_comment] = ACTIONS(73),
    },
    [444] = {
        [sym_identifier] = ACTIONS(963),
        [sym_comment] = ACTIONS(73),
    },
    [445] = {
        [sym_identifier] = ACTIONS(965),
        [sym_comment] = ACTIONS(73),
    },
    [446] = {
        [sym__expression] = STATE(571),
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
    [447] = {
        [sym__expression] = STATE(567),
        [sym_binary_operator] = STATE(36),
        [sym_subscript] = STATE(36),
        [sym_call] = STATE(36),
        [sym_list] = STATE(36),
        [sym_list_comprehension] = STATE(36),
        [sym_dictionary] = STATE(36),
        [sym_dictionary_comprehension] = STATE(36),
        [sym_set] = STATE(36),
        [sym_set_comprehension] = STATE(36),
        [anon_sym_LBRACK] = ACTIONS(117),
        [anon_sym_DOT_DOT_DOT] = ACTIONS(199),
        [anon_sym_RBRACK] = ACTIONS(131),
        [anon_sym_LBRACE] = ACTIONS(119),
        [sym_number] = ACTIONS(121),
        [sym_identifier] = ACTIONS(121),
        [sym_comment] = ACTIONS(73),
    },
    [448] = {
        [aux_sym_subscript_repeat1] = STATE(43),
        [anon_sym_COMMA] = ACTIONS(967),
        [anon_sym_RBRACK] = ACTIONS(971),
        [sym_comment] = ACTIONS(73),
    },
    [449] = {
        [anon_sym_COMMA] = ACTIONS(975),
        [anon_sym_COLON] = ACTIONS(975),
        [anon_sym_for] = ACTIONS(975),
        [anon_sym_in] = ACTIONS(975),
        [anon_sym_as] = ACTIONS(975),
        [anon_sym_LPAREN] = ACTIONS(975),
        [anon_sym_RPAREN] = ACTIONS(975),
        [anon_sym_PLUS] = ACTIONS(975),
        [anon_sym_LBRACK] = ACTIONS(975),
        [anon_sym_RBRACK] = ACTIONS(975),
        [anon_sym_RBRACE] = ACTIONS(975),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(975),
    },
    [450] = {
        [anon_sym_COMMA] = ACTIONS(984),
        [anon_sym_COLON] = ACTIONS(984),
        [anon_sym_for] = ACTIONS(984),
        [anon_sym_in] = ACTIONS(984),
        [anon_sym_as] = ACTIONS(984),
        [anon_sym_LPAREN] = ACTIONS(984),
        [anon_sym_RPAREN] = ACTIONS(984),
        [anon_sym_PLUS] = ACTIONS(984),
        [anon_sym_LBRACK] = ACTIONS(984),
        [anon_sym_RBRACK] = ACTIONS(984),
        [anon_sym_RBRACE] = ACTIONS(984),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(984),
    },
    [451] = {
        [sym_parameters] = STATE(465),
        [aux_sym_dotted_name_repeat1] = STATE(221),
        [anon_sym_COMMA] = ACTIONS(994),
        [anon_sym_COLON] = ACTIONS(998),
        [anon_sym_for] = ACTIONS(135),
        [anon_sym_in] = ACTIONS(135),
        [anon_sym_as] = ACTIONS(135),
        [anon_sym_LPAREN] = ACTIONS(1001),
        [anon_sym_RPAREN] = ACTIONS(1007),
        [anon_sym_EQ] = ACTIONS(1012),
        [anon_sym_DOT] = ACTIONS(1014),
        [anon_sym_PLUS] = ACTIONS(135),
        [anon_sym_LBRACK] = ACTIONS(135),
        [anon_sym_RBRACK] = ACTIONS(135),
        [anon_sym_RBRACE] = ACTIONS(135),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(1018),
    },
    [452] = {
        [ts_builtin_sym_end] = ACTIONS(1023),
        [anon_sym_SEMI] = ACTIONS(1027),
        [anon_sym_print] = ACTIONS(1030),
        [anon_sym_return] = ACTIONS(1030),
        [anon_sym_del] = ACTIONS(1030),
        [sym_pass_statement] = ACTIONS(1030),
        [sym_break_statement] = ACTIONS(1030),
        [sym_continue_statement] = ACTIONS(1030),
        [anon_sym_if] = ACTIONS(1030),
        [anon_sym_elif] = ACTIONS(541),
        [anon_sym_else] = ACTIONS(541),
        [anon_sym_for] = ACTIONS(1030),
        [anon_sym_while] = ACTIONS(1030),
        [anon_sym_try] = ACTIONS(1030),
        [anon_sym_except] = ACTIONS(541),
        [anon_sym_finally] = ACTIONS(541),
        [anon_sym_with] = ACTIONS(1030),
        [anon_sym_def] = ACTIONS(1033),
        [anon_sym_class] = ACTIONS(1033),
        [anon_sym_AT] = ACTIONS(1038),
        [anon_sym_LBRACK] = ACTIONS(1027),
        [anon_sym_LBRACE] = ACTIONS(1027),
        [sym_number] = ACTIONS(1030),
        [sym_identifier] = ACTIONS(1043),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(1027),
        [sym__dedent] = ACTIONS(1027),
    },
    [453] = {
        [sym__statement] = STATE(242),
        [sym__simple_statement] = STATE(243),
        [sym_print_statement] = STATE(5),
        [sym_expression_statement] = STATE(5),
        [sym_return_statement] = STATE(5),
        [sym_delete_statement] = STATE(5),
        [sym__compound_statement] = STATE(244),
        [sym_if_statement] = STATE(245),
        [sym_for_statement] = STATE(245),
        [sym_while_statement] = STATE(245),
        [sym_try_statement] = STATE(245),
        [sym_with_statement] = STATE(245),
        [sym_function_definition] = STATE(245),
        [sym_class_definition] = STATE(245),
        [sym_decorated_definition] = STATE(245),
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
        [aux_sym_module_repeat1] = STATE(493),
        [aux_sym_decorated_definition_repeat1] = STATE(247),
        [anon_sym_print] = ACTIONS(83),
        [anon_sym_return] = ACTIONS(85),
        [anon_sym_del] = ACTIONS(87),
        [sym_pass_statement] = ACTIONS(89),
        [sym_break_statement] = ACTIONS(89),
        [sym_continue_statement] = ACTIONS(89),
        [anon_sym_if] = ACTIONS(517),
        [anon_sym_for] = ACTIONS(519),
        [anon_sym_while] = ACTIONS(521),
        [anon_sym_try] = ACTIONS(523),
        [anon_sym_with] = ACTIONS(525),
        [anon_sym_def] = ACTIONS(527),
        [anon_sym_class] = ACTIONS(529),
        [anon_sym_AT] = ACTIONS(105),
        [anon_sym_LBRACK] = ACTIONS(107),
        [anon_sym_LBRACE] = ACTIONS(109),
        [sym_number] = ACTIONS(111),
        [sym_identifier] = ACTIONS(113),
        [sym_comment] = ACTIONS(73),
        [sym__dedent] = ACTIONS(1046),
    },
    [454] = {
        [ts_builtin_sym_end] = ACTIONS(1048),
        [anon_sym_SEMI] = ACTIONS(1048),
        [anon_sym_print] = ACTIONS(1051),
        [anon_sym_return] = ACTIONS(1051),
        [anon_sym_del] = ACTIONS(1051),
        [sym_pass_statement] = ACTIONS(1051),
        [sym_break_statement] = ACTIONS(1051),
        [sym_continue_statement] = ACTIONS(1051),
        [anon_sym_if] = ACTIONS(1051),
        [anon_sym_elif] = ACTIONS(1051),
        [anon_sym_else] = ACTIONS(1051),
        [anon_sym_for] = ACTIONS(1051),
        [anon_sym_while] = ACTIONS(1051),
        [anon_sym_try] = ACTIONS(1051),
        [anon_sym_except] = ACTIONS(1051),
        [anon_sym_finally] = ACTIONS(1051),
        [anon_sym_with] = ACTIONS(1051),
        [anon_sym_def] = ACTIONS(1051),
        [anon_sym_class] = ACTIONS(1051),
        [anon_sym_AT] = ACTIONS(1048),
        [anon_sym_LBRACK] = ACTIONS(1048),
        [anon_sym_LBRACE] = ACTIONS(1048),
        [sym_number] = ACTIONS(1051),
        [sym_identifier] = ACTIONS(1054),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(1048),
        [sym__dedent] = ACTIONS(1048),
    },
    [455] = {
        [ts_builtin_sym_end] = ACTIONS(1057),
        [anon_sym_SEMI] = ACTIONS(1057),
        [anon_sym_print] = ACTIONS(1060),
        [anon_sym_return] = ACTIONS(1060),
        [anon_sym_del] = ACTIONS(1060),
        [sym_pass_statement] = ACTIONS(1060),
        [sym_break_statement] = ACTIONS(1060),
        [sym_continue_statement] = ACTIONS(1060),
        [anon_sym_if] = ACTIONS(1060),
        [anon_sym_for] = ACTIONS(1060),
        [anon_sym_while] = ACTIONS(1060),
        [anon_sym_try] = ACTIONS(1060),
        [anon_sym_with] = ACTIONS(1060),
        [anon_sym_def] = ACTIONS(1060),
        [anon_sym_class] = ACTIONS(1060),
        [anon_sym_AT] = ACTIONS(1057),
        [anon_sym_LBRACK] = ACTIONS(1057),
        [anon_sym_LBRACE] = ACTIONS(1057),
        [sym_number] = ACTIONS(1060),
        [sym_identifier] = ACTIONS(1063),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(1057),
        [sym__dedent] = ACTIONS(1057),
    },
    [456] = {
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(1066),
    },
    [457] = {
        [ts_builtin_sym_end] = ACTIONS(147),
        [anon_sym_SEMI] = ACTIONS(147),
        [anon_sym_print] = ACTIONS(149),
        [anon_sym_return] = ACTIONS(149),
        [anon_sym_del] = ACTIONS(149),
        [sym_pass_statement] = ACTIONS(149),
        [sym_break_statement] = ACTIONS(149),
        [sym_continue_statement] = ACTIONS(149),
        [anon_sym_if] = ACTIONS(149),
        [anon_sym_for] = ACTIONS(149),
        [anon_sym_while] = ACTIONS(149),
        [anon_sym_try] = ACTIONS(149),
        [anon_sym_with] = ACTIONS(149),
        [anon_sym_def] = ACTIONS(149),
        [anon_sym_class] = ACTIONS(149),
        [anon_sym_AT] = ACTIONS(147),
        [anon_sym_LBRACK] = ACTIONS(147),
        [anon_sym_LBRACE] = ACTIONS(147),
        [sym_number] = ACTIONS(149),
        [sym_identifier] = ACTIONS(151),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(147),
        [sym__dedent] = ACTIONS(147),
    },
    [458] = {
        [ts_builtin_sym_end] = ACTIONS(153),
        [anon_sym_SEMI] = ACTIONS(153),
        [anon_sym_print] = ACTIONS(155),
        [anon_sym_return] = ACTIONS(155),
        [anon_sym_del] = ACTIONS(155),
        [sym_pass_statement] = ACTIONS(155),
        [sym_break_statement] = ACTIONS(155),
        [sym_continue_statement] = ACTIONS(155),
        [anon_sym_if] = ACTIONS(155),
        [anon_sym_for] = ACTIONS(155),
        [anon_sym_while] = ACTIONS(155),
        [anon_sym_try] = ACTIONS(155),
        [anon_sym_with] = ACTIONS(155),
        [anon_sym_def] = ACTIONS(155),
        [anon_sym_class] = ACTIONS(155),
        [anon_sym_AT] = ACTIONS(153),
        [anon_sym_LBRACK] = ACTIONS(153),
        [anon_sym_LBRACE] = ACTIONS(153),
        [sym_number] = ACTIONS(155),
        [sym_identifier] = ACTIONS(157),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(153),
        [sym__dedent] = ACTIONS(153),
    },
    [459] = {
        [ts_builtin_sym_end] = ACTIONS(1068),
        [anon_sym_SEMI] = ACTIONS(1068),
        [anon_sym_print] = ACTIONS(1071),
        [anon_sym_return] = ACTIONS(1071),
        [anon_sym_del] = ACTIONS(1071),
        [sym_pass_statement] = ACTIONS(1071),
        [sym_break_statement] = ACTIONS(1071),
        [sym_continue_statement] = ACTIONS(1071),
        [anon_sym_if] = ACTIONS(1071),
        [anon_sym_elif] = ACTIONS(1071),
        [anon_sym_else] = ACTIONS(1071),
        [anon_sym_for] = ACTIONS(1071),
        [anon_sym_while] = ACTIONS(1071),
        [anon_sym_try] = ACTIONS(1071),
        [anon_sym_with] = ACTIONS(1071),
        [anon_sym_def] = ACTIONS(1071),
        [anon_sym_class] = ACTIONS(1071),
        [anon_sym_AT] = ACTIONS(1068),
        [anon_sym_LBRACK] = ACTIONS(1068),
        [anon_sym_LBRACE] = ACTIONS(1068),
        [sym_number] = ACTIONS(1071),
        [sym_identifier] = ACTIONS(1074),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(1068),
        [sym__dedent] = ACTIONS(1068),
    },
    [460] = {
        [sym_finally_clause] = STATE(498),
        [ts_builtin_sym_end] = ACTIONS(1077),
        [anon_sym_SEMI] = ACTIONS(1077),
        [anon_sym_print] = ACTIONS(1083),
        [anon_sym_return] = ACTIONS(1083),
        [anon_sym_del] = ACTIONS(1083),
        [sym_pass_statement] = ACTIONS(1083),
        [sym_break_statement] = ACTIONS(1083),
        [sym_continue_statement] = ACTIONS(1083),
        [anon_sym_if] = ACTIONS(1083),
        [anon_sym_for] = ACTIONS(1083),
        [anon_sym_while] = ACTIONS(1083),
        [anon_sym_try] = ACTIONS(1083),
        [anon_sym_finally] = ACTIONS(1089),
        [anon_sym_with] = ACTIONS(1083),
        [anon_sym_def] = ACTIONS(1083),
        [anon_sym_class] = ACTIONS(1083),
        [anon_sym_AT] = ACTIONS(1077),
        [anon_sym_LBRACK] = ACTIONS(1077),
        [anon_sym_LBRACE] = ACTIONS(1077),
        [sym_number] = ACTIONS(1083),
        [sym_identifier] = ACTIONS(1091),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(1077),
        [sym__dedent] = ACTIONS(1077),
    },
    [461] = {
        [ts_builtin_sym_end] = ACTIONS(1097),
        [anon_sym_SEMI] = ACTIONS(1097),
        [anon_sym_print] = ACTIONS(1100),
        [anon_sym_return] = ACTIONS(1100),
        [anon_sym_del] = ACTIONS(1100),
        [sym_pass_statement] = ACTIONS(1100),
        [sym_break_statement] = ACTIONS(1100),
        [sym_continue_statement] = ACTIONS(1100),
        [anon_sym_if] = ACTIONS(1100),
        [anon_sym_else] = ACTIONS(1100),
        [anon_sym_for] = ACTIONS(1100),
        [anon_sym_while] = ACTIONS(1100),
        [anon_sym_try] = ACTIONS(1100),
        [anon_sym_except] = ACTIONS(1100),
        [anon_sym_finally] = ACTIONS(1100),
        [anon_sym_with] = ACTIONS(1100),
        [anon_sym_def] = ACTIONS(1100),
        [anon_sym_class] = ACTIONS(1100),
        [anon_sym_AT] = ACTIONS(1097),
        [anon_sym_LBRACK] = ACTIONS(1097),
        [anon_sym_LBRACE] = ACTIONS(1097),
        [sym_number] = ACTIONS(1100),
        [sym_identifier] = ACTIONS(1103),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(1097),
        [sym__dedent] = ACTIONS(1097),
    },
    [462] = {
        [ts_builtin_sym_end] = ACTIONS(1106),
        [anon_sym_SEMI] = ACTIONS(1106),
        [anon_sym_print] = ACTIONS(1110),
        [anon_sym_return] = ACTIONS(1110),
        [anon_sym_del] = ACTIONS(1110),
        [sym_pass_statement] = ACTIONS(1110),
        [sym_break_statement] = ACTIONS(1110),
        [sym_continue_statement] = ACTIONS(1110),
        [anon_sym_if] = ACTIONS(1110),
        [anon_sym_for] = ACTIONS(1110),
        [anon_sym_while] = ACTIONS(1110),
        [anon_sym_try] = ACTIONS(1110),
        [anon_sym_with] = ACTIONS(1110),
        [anon_sym_def] = ACTIONS(1110),
        [anon_sym_class] = ACTIONS(1110),
        [anon_sym_AT] = ACTIONS(1106),
        [anon_sym_LBRACK] = ACTIONS(1106),
        [anon_sym_LBRACE] = ACTIONS(1106),
        [sym_number] = ACTIONS(1110),
        [sym_identifier] = ACTIONS(1114),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(1106),
        [sym__dedent] = ACTIONS(1106),
    },
    [463] = {
        [aux_sym_with_statement_repeat1] = STATE(481),
        [anon_sym_COMMA] = ACTIONS(1118),
        [anon_sym_COLON] = ACTIONS(1122),
        [sym_comment] = ACTIONS(73),
    },
    [464] = {
        [ts_builtin_sym_end] = ACTIONS(1126),
        [anon_sym_SEMI] = ACTIONS(1126),
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
        [anon_sym_AT] = ACTIONS(1126),
        [anon_sym_LBRACK] = ACTIONS(1126),
        [anon_sym_LBRACE] = ACTIONS(1126),
        [sym_number] = ACTIONS(1129),
        [sym_identifier] = ACTIONS(1132),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(1126),
        [sym__dedent] = ACTIONS(1126),
    },
    [465] = {
        [anon_sym_COLON] = ACTIONS(1135),
        [sym_comment] = ACTIONS(73),
    },
    [466] = {
        [anon_sym_COMMA] = ACTIONS(1137),
        [anon_sym_RPAREN] = ACTIONS(1139),
        [sym_comment] = ACTIONS(73),
    },
    [467] = {
        [anon_sym_COMMA] = ACTIONS(1141),
        [anon_sym_RPAREN] = ACTIONS(1139),
        [sym_comment] = ACTIONS(73),
    },
    [468] = {
        [anon_sym_RPAREN] = ACTIONS(1143),
        [sym_comment] = ACTIONS(73),
    },
    [469] = {
        [anon_sym_def] = ACTIONS(1145),
        [anon_sym_class] = ACTIONS(1145),
        [anon_sym_AT] = ACTIONS(1145),
        [sym_comment] = ACTIONS(73),
    },
    [470] = {
        [sym_elif_clause] = STATE(538),
        [sym_else_clause] = STATE(547),
        [sym_except_clause] = STATE(548),
        [sym_finally_clause] = STATE(549),
        [aux_sym_if_statement_repeat1] = STATE(479),
        [aux_sym_try_statement_repeat1] = STATE(480),
        [ts_builtin_sym_end] = ACTIONS(1148),
        [anon_sym_SEMI] = ACTIONS(1148),
        [anon_sym_print] = ACTIONS(1162),
        [anon_sym_return] = ACTIONS(1162),
        [anon_sym_del] = ACTIONS(1162),
        [sym_pass_statement] = ACTIONS(1162),
        [sym_break_statement] = ACTIONS(1162),
        [sym_continue_statement] = ACTIONS(1162),
        [anon_sym_if] = ACTIONS(1162),
        [anon_sym_elif] = ACTIONS(1176),
        [anon_sym_else] = ACTIONS(1179),
        [anon_sym_for] = ACTIONS(1162),
        [anon_sym_while] = ACTIONS(1162),
        [anon_sym_try] = ACTIONS(1162),
        [anon_sym_except] = ACTIONS(1184),
        [anon_sym_finally] = ACTIONS(1188),
        [anon_sym_with] = ACTIONS(1162),
        [anon_sym_def] = ACTIONS(1162),
        [anon_sym_class] = ACTIONS(1162),
        [anon_sym_AT] = ACTIONS(1148),
        [anon_sym_LBRACK] = ACTIONS(1148),
        [anon_sym_LBRACE] = ACTIONS(1148),
        [sym_number] = ACTIONS(1162),
        [sym_identifier] = ACTIONS(1193),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(1148),
        [sym__dedent] = ACTIONS(1148),
    },
    [471] = {
        [anon_sym_COLON] = ACTIONS(1207),
        [anon_sym_in] = ACTIONS(1209),
        [anon_sym_RPAREN] = ACTIONS(1211),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(1213),
    },
    [472] = {
        [aux_sym_print_statement_repeat1] = STATE(478),
        [aux_sym_subscript_repeat1] = STATE(43),
        [anon_sym_COMMA] = ACTIONS(1216),
        [anon_sym_COLON] = ACTIONS(1231),
        [anon_sym_for] = ACTIONS(1239),
        [anon_sym_in] = ACTIONS(1243),
        [anon_sym_as] = ACTIONS(1248),
        [anon_sym_LPAREN] = ACTIONS(1251),
        [anon_sym_RPAREN] = ACTIONS(1254),
        [anon_sym_PLUS] = ACTIONS(1266),
        [anon_sym_LBRACK] = ACTIONS(1269),
        [anon_sym_RBRACK] = ACTIONS(1272),
        [anon_sym_RBRACE] = ACTIONS(1279),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(1285),
    },
    [473] = {
        [anon_sym_COMMA] = ACTIONS(1292),
        [anon_sym_RPAREN] = ACTIONS(1296),
        [sym_comment] = ACTIONS(73),
    },
    [474] = {
        [aux_sym_call_repeat2] = STATE(483),
        [anon_sym_COMMA] = ACTIONS(1300),
        [anon_sym_RPAREN] = ACTIONS(1302),
        [sym_comment] = ACTIONS(73),
    },
    [475] = {
        [anon_sym_RPAREN] = ACTIONS(1304),
        [sym_comment] = ACTIONS(73),
    },
    [476] = {
        [aux_sym_dictionary_repeat1] = STATE(178),
        [anon_sym_COMMA] = ACTIONS(1306),
        [anon_sym_for] = ACTIONS(433),
        [anon_sym_RBRACE] = ACTIONS(1310),
        [sym_comment] = ACTIONS(73),
    },
    [477] = {
        [sym__statement] = STATE(508),
        [sym__simple_statement] = STATE(509),
        [sym_print_statement] = STATE(5),
        [sym_expression_statement] = STATE(5),
        [sym_return_statement] = STATE(5),
        [sym_delete_statement] = STATE(5),
        [sym__compound_statement] = STATE(457),
        [sym_if_statement] = STATE(458),
        [sym_for_statement] = STATE(458),
        [sym_while_statement] = STATE(458),
        [sym_try_statement] = STATE(458),
        [sym_with_statement] = STATE(458),
        [sym_function_definition] = STATE(458),
        [sym_class_definition] = STATE(458),
        [sym_decorated_definition] = STATE(458),
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
        [aux_sym_decorated_definition_repeat1] = STATE(482),
        [ts_builtin_sym_end] = ACTIONS(169),
        [anon_sym_SEMI] = ACTIONS(171),
        [anon_sym_print] = ACTIONS(83),
        [anon_sym_return] = ACTIONS(85),
        [anon_sym_del] = ACTIONS(87),
        [sym_pass_statement] = ACTIONS(89),
        [sym_break_statement] = ACTIONS(89),
        [sym_continue_statement] = ACTIONS(89),
        [anon_sym_if] = ACTIONS(1314),
        [anon_sym_for] = ACTIONS(1316),
        [anon_sym_while] = ACTIONS(1318),
        [anon_sym_try] = ACTIONS(1320),
        [anon_sym_with] = ACTIONS(1322),
        [anon_sym_def] = ACTIONS(1324),
        [anon_sym_class] = ACTIONS(1326),
        [anon_sym_AT] = ACTIONS(105),
        [anon_sym_LBRACK] = ACTIONS(107),
        [anon_sym_LBRACE] = ACTIONS(109),
        [sym_number] = ACTIONS(111),
        [sym_identifier] = ACTIONS(113),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(171),
        [sym__dedent] = ACTIONS(1328),
    },
    [478] = {
        [anon_sym_COMMA] = ACTIONS(1330),
        [anon_sym_COLON] = ACTIONS(337),
        [anon_sym_in] = ACTIONS(337),
        [anon_sym_RPAREN] = ACTIONS(1332),
        [anon_sym_RBRACK] = ACTIONS(463),
        [anon_sym_RBRACE] = ACTIONS(447),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(1335),
    },
    [479] = {
        [sym_elif_clause] = STATE(499),
        [sym_else_clause] = STATE(500),
        [ts_builtin_sym_end] = ACTIONS(811),
        [anon_sym_SEMI] = ACTIONS(811),
        [anon_sym_print] = ACTIONS(809),
        [anon_sym_return] = ACTIONS(809),
        [anon_sym_del] = ACTIONS(809),
        [sym_pass_statement] = ACTIONS(809),
        [sym_break_statement] = ACTIONS(809),
        [sym_continue_statement] = ACTIONS(809),
        [anon_sym_if] = ACTIONS(809),
        [anon_sym_elif] = ACTIONS(1338),
        [anon_sym_else] = ACTIONS(1340),
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
    [480] = {
        [sym_else_clause] = STATE(495),
        [sym_except_clause] = STATE(496),
        [sym_finally_clause] = STATE(497),
        [ts_builtin_sym_end] = ACTIONS(701),
        [anon_sym_SEMI] = ACTIONS(701),
        [anon_sym_print] = ACTIONS(699),
        [anon_sym_return] = ACTIONS(699),
        [anon_sym_del] = ACTIONS(699),
        [sym_pass_statement] = ACTIONS(699),
        [sym_break_statement] = ACTIONS(699),
        [sym_continue_statement] = ACTIONS(699),
        [anon_sym_if] = ACTIONS(699),
        [anon_sym_else] = ACTIONS(1340),
        [anon_sym_for] = ACTIONS(699),
        [anon_sym_while] = ACTIONS(699),
        [anon_sym_try] = ACTIONS(699),
        [anon_sym_except] = ACTIONS(1342),
        [anon_sym_finally] = ACTIONS(1089),
        [anon_sym_with] = ACTIONS(699),
        [anon_sym_def] = ACTIONS(699),
        [anon_sym_class] = ACTIONS(699),
        [anon_sym_AT] = ACTIONS(701),
        [anon_sym_LBRACK] = ACTIONS(701),
        [anon_sym_LBRACE] = ACTIONS(701),
        [sym_number] = ACTIONS(699),
        [sym_identifier] = ACTIONS(703),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(701),
        [sym__dedent] = ACTIONS(701),
    },
    [481] = {
        [anon_sym_COMMA] = ACTIONS(663),
        [anon_sym_COLON] = ACTIONS(1344),
        [sym_comment] = ACTIONS(73),
    },
    [482] = {
        [sym_function_definition] = STATE(488),
        [sym_class_definition] = STATE(488),
        [sym_decorator] = STATE(27),
        [anon_sym_def] = ACTIONS(1346),
        [anon_sym_class] = ACTIONS(1348),
        [anon_sym_AT] = ACTIONS(105),
        [sym_comment] = ACTIONS(73),
    },
    [483] = {
        [anon_sym_COMMA] = ACTIONS(1350),
        [anon_sym_RPAREN] = ACTIONS(1352),
        [sym_comment] = ACTIONS(73),
    },
    [484] = {
        [sym__expression] = STATE(77),
        [sym_binary_operator] = STATE(36),
        [sym_subscript] = STATE(36),
        [sym_call] = STATE(36),
        [sym_keyword_argument] = STATE(78),
        [sym_dictionary_splat_argument] = STATE(486),
        [sym_list] = STATE(36),
        [sym_list_comprehension] = STATE(36),
        [sym_dictionary] = STATE(36),
        [sym_dictionary_comprehension] = STATE(36),
        [sym_set] = STATE(36),
        [sym_set_comprehension] = STATE(36),
        [anon_sym_LBRACK] = ACTIONS(117),
        [anon_sym_STAR_STAR] = ACTIONS(195),
        [anon_sym_LBRACE] = ACTIONS(119),
        [sym_number] = ACTIONS(121),
        [sym_identifier] = ACTIONS(197),
        [sym_comment] = ACTIONS(73),
    },
    [485] = {
        [anon_sym_COMMA] = ACTIONS(1354),
        [anon_sym_COLON] = ACTIONS(1354),
        [anon_sym_for] = ACTIONS(1354),
        [anon_sym_in] = ACTIONS(1354),
        [anon_sym_as] = ACTIONS(1354),
        [anon_sym_LPAREN] = ACTIONS(1354),
        [anon_sym_RPAREN] = ACTIONS(1354),
        [anon_sym_PLUS] = ACTIONS(1354),
        [anon_sym_LBRACK] = ACTIONS(1354),
        [anon_sym_RBRACK] = ACTIONS(1354),
        [anon_sym_RBRACE] = ACTIONS(1354),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(1354),
    },
    [486] = {
        [anon_sym_RPAREN] = ACTIONS(1357),
        [sym_comment] = ACTIONS(73),
    },
    [487] = {
        [anon_sym_COMMA] = ACTIONS(1359),
        [anon_sym_COLON] = ACTIONS(1359),
        [anon_sym_for] = ACTIONS(1359),
        [anon_sym_in] = ACTIONS(1359),
        [anon_sym_as] = ACTIONS(1359),
        [anon_sym_LPAREN] = ACTIONS(1359),
        [anon_sym_RPAREN] = ACTIONS(1359),
        [anon_sym_PLUS] = ACTIONS(1359),
        [anon_sym_LBRACK] = ACTIONS(1359),
        [anon_sym_RBRACK] = ACTIONS(1359),
        [anon_sym_RBRACE] = ACTIONS(1359),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(1359),
    },
    [488] = {
        [ts_builtin_sym_end] = ACTIONS(177),
        [anon_sym_SEMI] = ACTIONS(177),
        [anon_sym_print] = ACTIONS(179),
        [anon_sym_return] = ACTIONS(179),
        [anon_sym_del] = ACTIONS(179),
        [sym_pass_statement] = ACTIONS(179),
        [sym_break_statement] = ACTIONS(179),
        [sym_continue_statement] = ACTIONS(179),
        [anon_sym_if] = ACTIONS(179),
        [anon_sym_for] = ACTIONS(179),
        [anon_sym_while] = ACTIONS(179),
        [anon_sym_try] = ACTIONS(179),
        [anon_sym_with] = ACTIONS(179),
        [anon_sym_def] = ACTIONS(179),
        [anon_sym_class] = ACTIONS(179),
        [anon_sym_AT] = ACTIONS(177),
        [anon_sym_LBRACK] = ACTIONS(177),
        [anon_sym_LBRACE] = ACTIONS(177),
        [sym_number] = ACTIONS(179),
        [sym_identifier] = ACTIONS(181),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(177),
        [sym__dedent] = ACTIONS(177),
    },
    [489] = {
        [sym__simple_statement] = STATE(490),
        [sym_print_statement] = STATE(5),
        [sym_expression_statement] = STATE(5),
        [sym_return_statement] = STATE(5),
        [sym_delete_statement] = STATE(5),
        [sym__suite] = STATE(491),
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
        [sym__indent] = ACTIONS(921),
    },
    [490] = {
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(1046),
    },
    [491] = {
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
    [492] = {
        [ts_builtin_sym_end] = ACTIONS(539),
        [anon_sym_SEMI] = ACTIONS(539),
        [anon_sym_print] = ACTIONS(541),
        [anon_sym_return] = ACTIONS(541),
        [anon_sym_del] = ACTIONS(541),
        [sym_pass_statement] = ACTIONS(541),
        [sym_break_statement] = ACTIONS(541),
        [sym_continue_statement] = ACTIONS(541),
        [anon_sym_if] = ACTIONS(541),
        [anon_sym_elif] = ACTIONS(541),
        [anon_sym_else] = ACTIONS(541),
        [anon_sym_for] = ACTIONS(541),
        [anon_sym_while] = ACTIONS(541),
        [anon_sym_try] = ACTIONS(541),
        [anon_sym_except] = ACTIONS(541),
        [anon_sym_finally] = ACTIONS(541),
        [anon_sym_with] = ACTIONS(541),
        [anon_sym_def] = ACTIONS(541),
        [anon_sym_class] = ACTIONS(541),
        [anon_sym_AT] = ACTIONS(539),
        [anon_sym_LBRACK] = ACTIONS(539),
        [anon_sym_LBRACE] = ACTIONS(539),
        [sym_number] = ACTIONS(541),
        [sym_identifier] = ACTIONS(543),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(539),
        [sym__dedent] = ACTIONS(539),
    },
    [493] = {
        [sym__statement] = STATE(250),
        [sym__simple_statement] = STATE(243),
        [sym_print_statement] = STATE(5),
        [sym_expression_statement] = STATE(5),
        [sym_return_statement] = STATE(5),
        [sym_delete_statement] = STATE(5),
        [sym__compound_statement] = STATE(244),
        [sym_if_statement] = STATE(245),
        [sym_for_statement] = STATE(245),
        [sym_while_statement] = STATE(245),
        [sym_try_statement] = STATE(245),
        [sym_with_statement] = STATE(245),
        [sym_function_definition] = STATE(245),
        [sym_class_definition] = STATE(245),
        [sym_decorated_definition] = STATE(245),
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
        [aux_sym_decorated_definition_repeat1] = STATE(247),
        [anon_sym_print] = ACTIONS(83),
        [anon_sym_return] = ACTIONS(85),
        [anon_sym_del] = ACTIONS(87),
        [sym_pass_statement] = ACTIONS(89),
        [sym_break_statement] = ACTIONS(89),
        [sym_continue_statement] = ACTIONS(89),
        [anon_sym_if] = ACTIONS(517),
        [anon_sym_for] = ACTIONS(519),
        [anon_sym_while] = ACTIONS(521),
        [anon_sym_try] = ACTIONS(523),
        [anon_sym_with] = ACTIONS(525),
        [anon_sym_def] = ACTIONS(527),
        [anon_sym_class] = ACTIONS(529),
        [anon_sym_AT] = ACTIONS(105),
        [anon_sym_LBRACK] = ACTIONS(107),
        [anon_sym_LBRACE] = ACTIONS(109),
        [sym_number] = ACTIONS(111),
        [sym_identifier] = ACTIONS(113),
        [sym_comment] = ACTIONS(73),
        [sym__dedent] = ACTIONS(1328),
    },
    [494] = {
        [ts_builtin_sym_end] = ACTIONS(559),
        [anon_sym_SEMI] = ACTIONS(559),
        [anon_sym_print] = ACTIONS(561),
        [anon_sym_return] = ACTIONS(561),
        [anon_sym_del] = ACTIONS(561),
        [sym_pass_statement] = ACTIONS(561),
        [sym_break_statement] = ACTIONS(561),
        [sym_continue_statement] = ACTIONS(561),
        [anon_sym_if] = ACTIONS(561),
        [anon_sym_elif] = ACTIONS(561),
        [anon_sym_else] = ACTIONS(561),
        [anon_sym_for] = ACTIONS(561),
        [anon_sym_while] = ACTIONS(561),
        [anon_sym_try] = ACTIONS(561),
        [anon_sym_except] = ACTIONS(561),
        [anon_sym_finally] = ACTIONS(561),
        [anon_sym_with] = ACTIONS(561),
        [anon_sym_def] = ACTIONS(561),
        [anon_sym_class] = ACTIONS(561),
        [anon_sym_AT] = ACTIONS(559),
        [anon_sym_LBRACK] = ACTIONS(559),
        [anon_sym_LBRACE] = ACTIONS(559),
        [sym_number] = ACTIONS(561),
        [sym_identifier] = ACTIONS(563),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(559),
        [sym__dedent] = ACTIONS(559),
    },
    [495] = {
        [sym_finally_clause] = STATE(498),
        [ts_builtin_sym_end] = ACTIONS(715),
        [anon_sym_SEMI] = ACTIONS(715),
        [anon_sym_print] = ACTIONS(713),
        [anon_sym_return] = ACTIONS(713),
        [anon_sym_del] = ACTIONS(713),
        [sym_pass_statement] = ACTIONS(713),
        [sym_break_statement] = ACTIONS(713),
        [sym_continue_statement] = ACTIONS(713),
        [anon_sym_if] = ACTIONS(713),
        [anon_sym_for] = ACTIONS(713),
        [anon_sym_while] = ACTIONS(713),
        [anon_sym_try] = ACTIONS(713),
        [anon_sym_finally] = ACTIONS(1089),
        [anon_sym_with] = ACTIONS(713),
        [anon_sym_def] = ACTIONS(713),
        [anon_sym_class] = ACTIONS(713),
        [anon_sym_AT] = ACTIONS(715),
        [anon_sym_LBRACK] = ACTIONS(715),
        [anon_sym_LBRACE] = ACTIONS(715),
        [sym_number] = ACTIONS(713),
        [sym_identifier] = ACTIONS(717),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(715),
        [sym__dedent] = ACTIONS(715),
    },
    [496] = {
        [ts_builtin_sym_end] = ACTIONS(721),
        [anon_sym_SEMI] = ACTIONS(721),
        [anon_sym_print] = ACTIONS(719),
        [anon_sym_return] = ACTIONS(719),
        [anon_sym_del] = ACTIONS(719),
        [sym_pass_statement] = ACTIONS(719),
        [sym_break_statement] = ACTIONS(719),
        [sym_continue_statement] = ACTIONS(719),
        [anon_sym_if] = ACTIONS(719),
        [anon_sym_else] = ACTIONS(719),
        [anon_sym_for] = ACTIONS(719),
        [anon_sym_while] = ACTIONS(719),
        [anon_sym_try] = ACTIONS(719),
        [anon_sym_except] = ACTIONS(719),
        [anon_sym_finally] = ACTIONS(719),
        [anon_sym_with] = ACTIONS(719),
        [anon_sym_def] = ACTIONS(719),
        [anon_sym_class] = ACTIONS(719),
        [anon_sym_AT] = ACTIONS(721),
        [anon_sym_LBRACK] = ACTIONS(721),
        [anon_sym_LBRACE] = ACTIONS(721),
        [sym_number] = ACTIONS(719),
        [sym_identifier] = ACTIONS(723),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(721),
        [sym__dedent] = ACTIONS(721),
    },
    [497] = {
        [ts_builtin_sym_end] = ACTIONS(715),
        [anon_sym_SEMI] = ACTIONS(715),
        [anon_sym_print] = ACTIONS(713),
        [anon_sym_return] = ACTIONS(713),
        [anon_sym_del] = ACTIONS(713),
        [sym_pass_statement] = ACTIONS(713),
        [sym_break_statement] = ACTIONS(713),
        [sym_continue_statement] = ACTIONS(713),
        [anon_sym_if] = ACTIONS(713),
        [anon_sym_for] = ACTIONS(713),
        [anon_sym_while] = ACTIONS(713),
        [anon_sym_try] = ACTIONS(713),
        [anon_sym_with] = ACTIONS(713),
        [anon_sym_def] = ACTIONS(713),
        [anon_sym_class] = ACTIONS(713),
        [anon_sym_AT] = ACTIONS(715),
        [anon_sym_LBRACK] = ACTIONS(715),
        [anon_sym_LBRACE] = ACTIONS(715),
        [sym_number] = ACTIONS(713),
        [sym_identifier] = ACTIONS(717),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(715),
        [sym__dedent] = ACTIONS(715),
    },
    [498] = {
        [ts_builtin_sym_end] = ACTIONS(727),
        [anon_sym_SEMI] = ACTIONS(727),
        [anon_sym_print] = ACTIONS(725),
        [anon_sym_return] = ACTIONS(725),
        [anon_sym_del] = ACTIONS(725),
        [sym_pass_statement] = ACTIONS(725),
        [sym_break_statement] = ACTIONS(725),
        [sym_continue_statement] = ACTIONS(725),
        [anon_sym_if] = ACTIONS(725),
        [anon_sym_for] = ACTIONS(725),
        [anon_sym_while] = ACTIONS(725),
        [anon_sym_try] = ACTIONS(725),
        [anon_sym_with] = ACTIONS(725),
        [anon_sym_def] = ACTIONS(725),
        [anon_sym_class] = ACTIONS(725),
        [anon_sym_AT] = ACTIONS(727),
        [anon_sym_LBRACK] = ACTIONS(727),
        [anon_sym_LBRACE] = ACTIONS(727),
        [sym_number] = ACTIONS(725),
        [sym_identifier] = ACTIONS(729),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(727),
        [sym__dedent] = ACTIONS(727),
    },
    [499] = {
        [ts_builtin_sym_end] = ACTIONS(817),
        [anon_sym_SEMI] = ACTIONS(817),
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
        [anon_sym_with] = ACTIONS(815),
        [anon_sym_def] = ACTIONS(815),
        [anon_sym_class] = ACTIONS(815),
        [anon_sym_AT] = ACTIONS(817),
        [anon_sym_LBRACK] = ACTIONS(817),
        [anon_sym_LBRACE] = ACTIONS(817),
        [sym_number] = ACTIONS(815),
        [sym_identifier] = ACTIONS(819),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(817),
        [sym__dedent] = ACTIONS(817),
    },
    [500] = {
        [ts_builtin_sym_end] = ACTIONS(823),
        [anon_sym_SEMI] = ACTIONS(823),
        [anon_sym_print] = ACTIONS(821),
        [anon_sym_return] = ACTIONS(821),
        [anon_sym_del] = ACTIONS(821),
        [sym_pass_statement] = ACTIONS(821),
        [sym_break_statement] = ACTIONS(821),
        [sym_continue_statement] = ACTIONS(821),
        [anon_sym_if] = ACTIONS(821),
        [anon_sym_for] = ACTIONS(821),
        [anon_sym_while] = ACTIONS(821),
        [anon_sym_try] = ACTIONS(821),
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
    [501] = {
        [sym__simple_statement] = STATE(490),
        [sym_print_statement] = STATE(5),
        [sym_expression_statement] = STATE(5),
        [sym_return_statement] = STATE(5),
        [sym_delete_statement] = STATE(5),
        [sym__suite] = STATE(502),
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
        [sym__indent] = ACTIONS(921),
    },
    [502] = {
        [ts_builtin_sym_end] = ACTIONS(733),
        [anon_sym_SEMI] = ACTIONS(733),
        [anon_sym_print] = ACTIONS(731),
        [anon_sym_return] = ACTIONS(731),
        [anon_sym_del] = ACTIONS(731),
        [sym_pass_statement] = ACTIONS(731),
        [sym_break_statement] = ACTIONS(731),
        [sym_continue_statement] = ACTIONS(731),
        [anon_sym_if] = ACTIONS(731),
        [anon_sym_for] = ACTIONS(731),
        [anon_sym_while] = ACTIONS(731),
        [anon_sym_try] = ACTIONS(731),
        [anon_sym_finally] = ACTIONS(731),
        [anon_sym_with] = ACTIONS(731),
        [anon_sym_def] = ACTIONS(731),
        [anon_sym_class] = ACTIONS(731),
        [anon_sym_AT] = ACTIONS(733),
        [anon_sym_LBRACK] = ACTIONS(733),
        [anon_sym_LBRACE] = ACTIONS(733),
        [sym_number] = ACTIONS(731),
        [sym_identifier] = ACTIONS(735),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(733),
        [sym__dedent] = ACTIONS(733),
    },
    [503] = {
        [sym__expression] = STATE(504),
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
        [anon_sym_RBRACK] = ACTIONS(467),
        [anon_sym_LBRACE] = ACTIONS(109),
        [anon_sym_RBRACE] = ACTIONS(451),
        [sym_number] = ACTIONS(111),
        [sym_identifier] = ACTIONS(111),
        [sym_comment] = ACTIONS(73),
    },
    [504] = {
        [anon_sym_COMMA] = ACTIONS(339),
        [anon_sym_COLON] = ACTIONS(339),
        [anon_sym_in] = ACTIONS(339),
        [anon_sym_LPAREN] = ACTIONS(161),
        [anon_sym_RPAREN] = ACTIONS(339),
        [anon_sym_PLUS] = ACTIONS(1362),
        [anon_sym_LBRACK] = ACTIONS(165),
        [anon_sym_RBRACK] = ACTIONS(339),
        [anon_sym_RBRACE] = ACTIONS(339),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(339),
    },
    [505] = {
        [sym__expression] = STATE(506),
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
    [506] = {
        [anon_sym_COMMA] = ACTIONS(247),
        [anon_sym_COLON] = ACTIONS(247),
        [anon_sym_in] = ACTIONS(247),
        [anon_sym_LPAREN] = ACTIONS(1251),
        [anon_sym_RPAREN] = ACTIONS(247),
        [anon_sym_PLUS] = ACTIONS(1364),
        [anon_sym_LBRACK] = ACTIONS(1269),
        [anon_sym_RBRACK] = ACTIONS(247),
        [anon_sym_RBRACE] = ACTIONS(247),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(247),
    },
    [507] = {
        [sym_expression_list] = STATE(511),
        [sym__expression] = STATE(109),
        [sym_binary_operator] = STATE(36),
        [sym_subscript] = STATE(36),
        [sym_call] = STATE(36),
        [sym_list] = STATE(36),
        [sym_list_comprehension] = STATE(36),
        [sym_dictionary] = STATE(36),
        [sym_dictionary_comprehension] = STATE(36),
        [sym_set] = STATE(36),
        [sym_set_comprehension] = STATE(36),
        [anon_sym_LBRACK] = ACTIONS(117),
        [anon_sym_LBRACE] = ACTIONS(119),
        [sym_number] = ACTIONS(121),
        [sym_identifier] = ACTIONS(121),
        [sym_comment] = ACTIONS(73),
    },
    [508] = {
        [ts_builtin_sym_end] = ACTIONS(187),
        [anon_sym_SEMI] = ACTIONS(187),
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
        [anon_sym_LBRACK] = ACTIONS(187),
        [anon_sym_LBRACE] = ACTIONS(187),
        [sym_number] = ACTIONS(189),
        [sym_identifier] = ACTIONS(191),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(187),
        [sym__dedent] = ACTIONS(187),
    },
    [509] = {
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(1367),
    },
    [510] = {
        [ts_builtin_sym_end] = ACTIONS(419),
        [anon_sym_SEMI] = ACTIONS(419),
        [anon_sym_print] = ACTIONS(421),
        [anon_sym_return] = ACTIONS(421),
        [anon_sym_del] = ACTIONS(421),
        [sym_pass_statement] = ACTIONS(421),
        [sym_break_statement] = ACTIONS(421),
        [sym_continue_statement] = ACTIONS(421),
        [anon_sym_if] = ACTIONS(421),
        [anon_sym_for] = ACTIONS(421),
        [anon_sym_while] = ACTIONS(421),
        [anon_sym_try] = ACTIONS(421),
        [anon_sym_with] = ACTIONS(421),
        [anon_sym_def] = ACTIONS(421),
        [anon_sym_class] = ACTIONS(421),
        [anon_sym_AT] = ACTIONS(419),
        [anon_sym_LBRACK] = ACTIONS(419),
        [anon_sym_LBRACE] = ACTIONS(419),
        [sym_number] = ACTIONS(421),
        [sym_identifier] = ACTIONS(423),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(419),
        [sym__dedent] = ACTIONS(419),
    },
    [511] = {
        [anon_sym_in] = ACTIONS(1369),
        [sym_comment] = ACTIONS(73),
    },
    [512] = {
        [sym_expression_list] = STATE(513),
        [sym__expression] = STATE(109),
        [sym_binary_operator] = STATE(36),
        [sym_subscript] = STATE(36),
        [sym_call] = STATE(36),
        [sym_list] = STATE(36),
        [sym_list_comprehension] = STATE(36),
        [sym_dictionary] = STATE(36),
        [sym_dictionary_comprehension] = STATE(36),
        [sym_set] = STATE(36),
        [sym_set_comprehension] = STATE(36),
        [anon_sym_LBRACK] = ACTIONS(117),
        [anon_sym_LBRACE] = ACTIONS(119),
        [sym_number] = ACTIONS(121),
        [sym_identifier] = ACTIONS(121),
        [sym_comment] = ACTIONS(73),
    },
    [513] = {
        [anon_sym_COLON] = ACTIONS(1207),
        [sym_comment] = ACTIONS(73),
    },
    [514] = {
        [sym__simple_statement] = STATE(490),
        [sym_print_statement] = STATE(5),
        [sym_expression_statement] = STATE(5),
        [sym_return_statement] = STATE(5),
        [sym_delete_statement] = STATE(5),
        [sym__suite] = STATE(515),
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
        [sym__indent] = ACTIONS(921),
    },
    [515] = {
        [sym_else_clause] = STATE(516),
        [ts_builtin_sym_end] = ACTIONS(783),
        [anon_sym_SEMI] = ACTIONS(783),
        [anon_sym_print] = ACTIONS(781),
        [anon_sym_return] = ACTIONS(781),
        [anon_sym_del] = ACTIONS(781),
        [sym_pass_statement] = ACTIONS(781),
        [sym_break_statement] = ACTIONS(781),
        [sym_continue_statement] = ACTIONS(781),
        [anon_sym_if] = ACTIONS(781),
        [anon_sym_else] = ACTIONS(1340),
        [anon_sym_for] = ACTIONS(781),
        [anon_sym_while] = ACTIONS(781),
        [anon_sym_try] = ACTIONS(781),
        [anon_sym_with] = ACTIONS(781),
        [anon_sym_def] = ACTIONS(781),
        [anon_sym_class] = ACTIONS(781),
        [anon_sym_AT] = ACTIONS(783),
        [anon_sym_LBRACK] = ACTIONS(783),
        [anon_sym_LBRACE] = ACTIONS(783),
        [sym_number] = ACTIONS(781),
        [sym_identifier] = ACTIONS(785),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(783),
        [sym__dedent] = ACTIONS(783),
    },
    [516] = {
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
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(789),
        [sym__dedent] = ACTIONS(789),
    },
    [517] = {
        [anon_sym_COMMA] = ACTIONS(935),
        [anon_sym_COLON] = ACTIONS(935),
        [anon_sym_for] = ACTIONS(935),
        [anon_sym_in] = ACTIONS(935),
        [anon_sym_as] = ACTIONS(935),
        [anon_sym_LPAREN] = ACTIONS(935),
        [anon_sym_RPAREN] = ACTIONS(935),
        [anon_sym_PLUS] = ACTIONS(935),
        [anon_sym_LBRACK] = ACTIONS(935),
        [anon_sym_RBRACK] = ACTIONS(935),
        [anon_sym_RBRACE] = ACTIONS(935),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(935),
    },
    [518] = {
        [sym__expression] = STATE(81),
        [sym_binary_operator] = STATE(36),
        [sym_subscript] = STATE(36),
        [sym_call] = STATE(36),
        [sym_keyword_argument] = STATE(82),
        [sym_dictionary_splat_argument] = STATE(520),
        [sym_list] = STATE(36),
        [sym_list_comprehension] = STATE(36),
        [sym_dictionary] = STATE(36),
        [sym_dictionary_comprehension] = STATE(36),
        [sym_set] = STATE(36),
        [sym_set_comprehension] = STATE(36),
        [anon_sym_LBRACK] = ACTIONS(117),
        [anon_sym_STAR_STAR] = ACTIONS(195),
        [anon_sym_LBRACE] = ACTIONS(119),
        [sym_number] = ACTIONS(121),
        [sym_identifier] = ACTIONS(197),
        [sym_comment] = ACTIONS(73),
    },
    [519] = {
        [anon_sym_COMMA] = ACTIONS(1371),
        [anon_sym_COLON] = ACTIONS(1371),
        [anon_sym_for] = ACTIONS(1371),
        [anon_sym_in] = ACTIONS(1371),
        [anon_sym_as] = ACTIONS(1371),
        [anon_sym_LPAREN] = ACTIONS(1371),
        [anon_sym_RPAREN] = ACTIONS(1371),
        [anon_sym_PLUS] = ACTIONS(1371),
        [anon_sym_LBRACK] = ACTIONS(1371),
        [anon_sym_RBRACK] = ACTIONS(1371),
        [anon_sym_RBRACE] = ACTIONS(1371),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(1371),
    },
    [520] = {
        [anon_sym_RPAREN] = ACTIONS(1374),
        [sym_comment] = ACTIONS(73),
    },
    [521] = {
        [anon_sym_COMMA] = ACTIONS(1376),
        [anon_sym_COLON] = ACTIONS(1376),
        [anon_sym_for] = ACTIONS(1376),
        [anon_sym_in] = ACTIONS(1376),
        [anon_sym_as] = ACTIONS(1376),
        [anon_sym_LPAREN] = ACTIONS(1376),
        [anon_sym_RPAREN] = ACTIONS(1376),
        [anon_sym_PLUS] = ACTIONS(1376),
        [anon_sym_LBRACK] = ACTIONS(1376),
        [anon_sym_RBRACK] = ACTIONS(1376),
        [anon_sym_RBRACE] = ACTIONS(1376),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(1376),
    },
    [522] = {
        [anon_sym_RPAREN] = ACTIONS(1352),
        [anon_sym_STAR] = ACTIONS(1379),
        [anon_sym_LBRACK] = ACTIONS(1382),
        [anon_sym_STAR_STAR] = ACTIONS(1382),
        [anon_sym_LBRACE] = ACTIONS(1382),
        [sym_number] = ACTIONS(1379),
        [sym_identifier] = ACTIONS(1379),
        [sym_comment] = ACTIONS(73),
    },
    [523] = {
        [sym__expression] = STATE(541),
        [sym_binary_operator] = STATE(16),
        [sym_subscript] = STATE(16),
        [sym_call] = STATE(16),
        [sym_list] = STATE(16),
        [sym_list_comprehension] = STATE(16),
        [sym_dictionary] = STATE(16),
        [sym_dictionary_comprehension] = STATE(16),
        [sym_set] = STATE(16),
        [sym_set_comprehension] = STATE(16),
        [anon_sym_RPAREN] = ACTIONS(1352),
        [anon_sym_STAR] = ACTIONS(1379),
        [anon_sym_LBRACK] = ACTIONS(893),
        [anon_sym_DOT_DOT_DOT] = ACTIONS(215),
        [anon_sym_RBRACK] = ACTIONS(1385),
        [anon_sym_STAR_STAR] = ACTIONS(1382),
        [anon_sym_LBRACE] = ACTIONS(905),
        [anon_sym_RBRACE] = ACTIONS(447),
        [sym_number] = ACTIONS(911),
        [sym_identifier] = ACTIONS(911),
        [sym_comment] = ACTIONS(73),
    },
    [524] = {
        [sym__simple_statement] = STATE(490),
        [sym_print_statement] = STATE(5),
        [sym_expression_statement] = STATE(5),
        [sym_return_statement] = STATE(5),
        [sym_delete_statement] = STATE(5),
        [sym__suite] = STATE(534),
        [sym__expression] = STATE(535),
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
        [sym__indent] = ACTIONS(921),
    },
    [525] = {
        [sym_expression_list] = STATE(529),
        [sym__expression] = STATE(109),
        [sym_binary_operator] = STATE(36),
        [sym_subscript] = STATE(36),
        [sym_call] = STATE(36),
        [sym_list] = STATE(36),
        [sym_list_comprehension] = STATE(36),
        [sym_dictionary] = STATE(36),
        [sym_dictionary_comprehension] = STATE(36),
        [sym_set] = STATE(36),
        [sym_set_comprehension] = STATE(36),
        [anon_sym_LBRACK] = ACTIONS(117),
        [anon_sym_LBRACE] = ACTIONS(119),
        [sym_number] = ACTIONS(121),
        [sym_identifier] = ACTIONS(121),
        [sym_comment] = ACTIONS(73),
    },
    [526] = {
        [anon_sym_COMMA] = ACTIONS(1371),
        [anon_sym_COLON] = ACTIONS(1371),
        [anon_sym_for] = ACTIONS(1371),
        [anon_sym_in] = ACTIONS(1371),
        [anon_sym_as] = ACTIONS(1371),
        [anon_sym_LPAREN] = ACTIONS(1371),
        [anon_sym_RPAREN] = ACTIONS(1371),
        [anon_sym_PLUS] = ACTIONS(1371),
        [anon_sym_LBRACK] = ACTIONS(1371),
        [anon_sym_RBRACK] = ACTIONS(1371),
        [anon_sym_RBRACE] = ACTIONS(1371),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(1387),
    },
    [527] = {
        [anon_sym_COMMA] = ACTIONS(1391),
        [anon_sym_COLON] = ACTIONS(1391),
        [anon_sym_for] = ACTIONS(1391),
        [anon_sym_in] = ACTIONS(1391),
        [anon_sym_as] = ACTIONS(1391),
        [anon_sym_LPAREN] = ACTIONS(1391),
        [anon_sym_RPAREN] = ACTIONS(1391),
        [anon_sym_PLUS] = ACTIONS(1391),
        [anon_sym_LBRACK] = ACTIONS(1391),
        [anon_sym_RBRACK] = ACTIONS(1391),
        [anon_sym_RBRACE] = ACTIONS(1391),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(1391),
    },
    [528] = {
        [anon_sym_COMMA] = ACTIONS(1395),
        [anon_sym_COLON] = ACTIONS(1395),
        [anon_sym_for] = ACTIONS(1395),
        [anon_sym_in] = ACTIONS(1395),
        [anon_sym_as] = ACTIONS(1395),
        [anon_sym_LPAREN] = ACTIONS(1395),
        [anon_sym_RPAREN] = ACTIONS(1395),
        [anon_sym_PLUS] = ACTIONS(1395),
        [anon_sym_LBRACK] = ACTIONS(1395),
        [anon_sym_RBRACK] = ACTIONS(1395),
        [anon_sym_RBRACE] = ACTIONS(1395),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(1395),
    },
    [529] = {
        [anon_sym_in] = ACTIONS(1399),
        [sym_comment] = ACTIONS(73),
    },
    [530] = {
        [sym__expression] = STATE(531),
        [sym_binary_operator] = STATE(36),
        [sym_subscript] = STATE(36),
        [sym_call] = STATE(36),
        [sym_list] = STATE(36),
        [sym_list_comprehension] = STATE(36),
        [sym_dictionary] = STATE(36),
        [sym_dictionary_comprehension] = STATE(36),
        [sym_set] = STATE(36),
        [sym_set_comprehension] = STATE(36),
        [anon_sym_LBRACK] = ACTIONS(117),
        [anon_sym_LBRACE] = ACTIONS(119),
        [sym_number] = ACTIONS(121),
        [sym_identifier] = ACTIONS(121),
        [sym_comment] = ACTIONS(73),
    },
    [531] = {
        [anon_sym_LPAREN] = ACTIONS(209),
        [anon_sym_PLUS] = ACTIONS(1401),
        [anon_sym_LBRACK] = ACTIONS(213),
        [anon_sym_RBRACK] = ACTIONS(471),
        [anon_sym_RBRACE] = ACTIONS(455),
        [sym_comment] = ACTIONS(73),
    },
    [532] = {
        [sym__expression] = STATE(533),
        [sym_binary_operator] = STATE(36),
        [sym_subscript] = STATE(36),
        [sym_call] = STATE(36),
        [sym_list] = STATE(36),
        [sym_list_comprehension] = STATE(36),
        [sym_dictionary] = STATE(36),
        [sym_dictionary_comprehension] = STATE(36),
        [sym_set] = STATE(36),
        [sym_set_comprehension] = STATE(36),
        [anon_sym_LBRACK] = ACTIONS(117),
        [anon_sym_LBRACE] = ACTIONS(119),
        [sym_number] = ACTIONS(121),
        [sym_identifier] = ACTIONS(121),
        [sym_comment] = ACTIONS(73),
    },
    [533] = {
        [anon_sym_LPAREN] = ACTIONS(1403),
        [anon_sym_PLUS] = ACTIONS(1406),
        [anon_sym_LBRACK] = ACTIONS(1409),
        [anon_sym_RBRACK] = ACTIONS(247),
        [anon_sym_RBRACE] = ACTIONS(247),
        [sym_comment] = ACTIONS(73),
    },
    [534] = {
        [sym_elif_clause] = STATE(538),
        [sym_else_clause] = STATE(539),
        [aux_sym_if_statement_repeat1] = STATE(479),
        [ts_builtin_sym_end] = ACTIONS(1412),
        [anon_sym_SEMI] = ACTIONS(1412),
        [anon_sym_print] = ACTIONS(1418),
        [anon_sym_return] = ACTIONS(1418),
        [anon_sym_del] = ACTIONS(1418),
        [sym_pass_statement] = ACTIONS(1418),
        [sym_break_statement] = ACTIONS(1418),
        [sym_continue_statement] = ACTIONS(1418),
        [anon_sym_if] = ACTIONS(1418),
        [anon_sym_elif] = ACTIONS(1176),
        [anon_sym_else] = ACTIONS(1179),
        [anon_sym_for] = ACTIONS(1418),
        [anon_sym_while] = ACTIONS(1418),
        [anon_sym_try] = ACTIONS(1418),
        [anon_sym_except] = ACTIONS(1424),
        [anon_sym_finally] = ACTIONS(1424),
        [anon_sym_with] = ACTIONS(1418),
        [anon_sym_def] = ACTIONS(1418),
        [anon_sym_class] = ACTIONS(1418),
        [anon_sym_AT] = ACTIONS(1412),
        [anon_sym_LBRACK] = ACTIONS(1412),
        [anon_sym_LBRACE] = ACTIONS(1412),
        [sym_number] = ACTIONS(1418),
        [sym_identifier] = ACTIONS(1427),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(1412),
        [sym__dedent] = ACTIONS(1412),
    },
    [535] = {
        [anon_sym_COMMA] = ACTIONS(327),
        [anon_sym_for] = ACTIONS(327),
        [anon_sym_LPAREN] = ACTIONS(161),
        [anon_sym_PLUS] = ACTIONS(1433),
        [anon_sym_LBRACK] = ACTIONS(165),
        [anon_sym_RBRACE] = ACTIONS(327),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(167),
    },
    [536] = {
        [sym__expression] = STATE(537),
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
    [537] = {
        [anon_sym_COMMA] = ACTIONS(247),
        [anon_sym_for] = ACTIONS(247),
        [anon_sym_LPAREN] = ACTIONS(1251),
        [anon_sym_PLUS] = ACTIONS(1435),
        [anon_sym_LBRACK] = ACTIONS(1269),
        [anon_sym_RBRACE] = ACTIONS(247),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(247),
    },
    [538] = {
        [ts_builtin_sym_end] = ACTIONS(805),
        [anon_sym_SEMI] = ACTIONS(805),
        [anon_sym_print] = ACTIONS(803),
        [anon_sym_return] = ACTIONS(803),
        [anon_sym_del] = ACTIONS(803),
        [sym_pass_statement] = ACTIONS(803),
        [sym_break_statement] = ACTIONS(803),
        [sym_continue_statement] = ACTIONS(803),
        [anon_sym_if] = ACTIONS(803),
        [anon_sym_elif] = ACTIONS(803),
        [anon_sym_else] = ACTIONS(803),
        [anon_sym_for] = ACTIONS(803),
        [anon_sym_while] = ACTIONS(803),
        [anon_sym_try] = ACTIONS(803),
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
    [539] = {
        [ts_builtin_sym_end] = ACTIONS(1438),
        [anon_sym_SEMI] = ACTIONS(1438),
        [anon_sym_print] = ACTIONS(1441),
        [anon_sym_return] = ACTIONS(1441),
        [anon_sym_del] = ACTIONS(1441),
        [sym_pass_statement] = ACTIONS(1441),
        [sym_break_statement] = ACTIONS(1441),
        [sym_continue_statement] = ACTIONS(1441),
        [anon_sym_if] = ACTIONS(1441),
        [anon_sym_for] = ACTIONS(1441),
        [anon_sym_while] = ACTIONS(1441),
        [anon_sym_try] = ACTIONS(1441),
        [anon_sym_with] = ACTIONS(1441),
        [anon_sym_def] = ACTIONS(1441),
        [anon_sym_class] = ACTIONS(1441),
        [anon_sym_AT] = ACTIONS(1438),
        [anon_sym_LBRACK] = ACTIONS(1438),
        [anon_sym_LBRACE] = ACTIONS(1438),
        [sym_number] = ACTIONS(1441),
        [sym_identifier] = ACTIONS(1444),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(1438),
        [sym__dedent] = ACTIONS(1438),
    },
    [540] = {
        [anon_sym_COMMA] = ACTIONS(1447),
        [anon_sym_COLON] = ACTIONS(1447),
        [anon_sym_for] = ACTIONS(1447),
        [anon_sym_in] = ACTIONS(1447),
        [anon_sym_as] = ACTIONS(1447),
        [anon_sym_LPAREN] = ACTIONS(1447),
        [anon_sym_RPAREN] = ACTIONS(1447),
        [anon_sym_PLUS] = ACTIONS(1447),
        [anon_sym_LBRACK] = ACTIONS(1447),
        [anon_sym_RBRACK] = ACTIONS(1447),
        [anon_sym_RBRACE] = ACTIONS(1447),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(1447),
    },
    [541] = {
        [anon_sym_COMMA] = ACTIONS(1450),
        [anon_sym_COLON] = ACTIONS(1453),
        [anon_sym_in] = ACTIONS(341),
        [anon_sym_LPAREN] = ACTIONS(161),
        [anon_sym_RPAREN] = ACTIONS(341),
        [anon_sym_PLUS] = ACTIONS(1362),
        [anon_sym_LBRACK] = ACTIONS(165),
        [anon_sym_RBRACK] = ACTIONS(1450),
        [anon_sym_RBRACE] = ACTIONS(341),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(341),
    },
    [542] = {
        [sym__simple_statement] = STATE(490),
        [sym_print_statement] = STATE(5),
        [sym_expression_statement] = STATE(5),
        [sym_return_statement] = STATE(5),
        [sym_delete_statement] = STATE(5),
        [sym__suite] = STATE(543),
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
        [sym__indent] = ACTIONS(921),
    },
    [543] = {
        [ts_builtin_sym_end] = ACTIONS(751),
        [anon_sym_SEMI] = ACTIONS(751),
        [anon_sym_print] = ACTIONS(749),
        [anon_sym_return] = ACTIONS(749),
        [anon_sym_del] = ACTIONS(749),
        [sym_pass_statement] = ACTIONS(749),
        [sym_break_statement] = ACTIONS(749),
        [sym_continue_statement] = ACTIONS(749),
        [anon_sym_if] = ACTIONS(749),
        [anon_sym_else] = ACTIONS(749),
        [anon_sym_for] = ACTIONS(749),
        [anon_sym_while] = ACTIONS(749),
        [anon_sym_try] = ACTIONS(749),
        [anon_sym_except] = ACTIONS(749),
        [anon_sym_finally] = ACTIONS(749),
        [anon_sym_with] = ACTIONS(749),
        [anon_sym_def] = ACTIONS(749),
        [anon_sym_class] = ACTIONS(749),
        [anon_sym_AT] = ACTIONS(751),
        [anon_sym_LBRACK] = ACTIONS(751),
        [anon_sym_LBRACE] = ACTIONS(751),
        [sym_number] = ACTIONS(749),
        [sym_identifier] = ACTIONS(753),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(751),
        [sym__dedent] = ACTIONS(751),
    },
    [544] = {
        [anon_sym_COLON] = ACTIONS(1456),
        [sym_comment] = ACTIONS(73),
    },
    [545] = {
        [sym__simple_statement] = STATE(490),
        [sym_print_statement] = STATE(5),
        [sym_expression_statement] = STATE(5),
        [sym_return_statement] = STATE(5),
        [sym_delete_statement] = STATE(5),
        [sym__suite] = STATE(546),
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
        [sym__indent] = ACTIONS(921),
    },
    [546] = {
        [ts_builtin_sym_end] = ACTIONS(533),
        [anon_sym_SEMI] = ACTIONS(533),
        [anon_sym_print] = ACTIONS(535),
        [anon_sym_return] = ACTIONS(535),
        [anon_sym_del] = ACTIONS(535),
        [sym_pass_statement] = ACTIONS(535),
        [sym_break_statement] = ACTIONS(535),
        [sym_continue_statement] = ACTIONS(535),
        [anon_sym_if] = ACTIONS(535),
        [anon_sym_for] = ACTIONS(535),
        [anon_sym_while] = ACTIONS(535),
        [anon_sym_try] = ACTIONS(535),
        [anon_sym_with] = ACTIONS(535),
        [anon_sym_def] = ACTIONS(535),
        [anon_sym_class] = ACTIONS(535),
        [anon_sym_AT] = ACTIONS(533),
        [anon_sym_LBRACK] = ACTIONS(533),
        [anon_sym_LBRACE] = ACTIONS(533),
        [sym_number] = ACTIONS(535),
        [sym_identifier] = ACTIONS(537),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(533),
        [sym__dedent] = ACTIONS(533),
    },
    [547] = {
        [ts_builtin_sym_end] = ACTIONS(1458),
        [anon_sym_SEMI] = ACTIONS(1458),
        [anon_sym_print] = ACTIONS(1462),
        [anon_sym_return] = ACTIONS(1462),
        [anon_sym_del] = ACTIONS(1462),
        [sym_pass_statement] = ACTIONS(1462),
        [sym_break_statement] = ACTIONS(1462),
        [sym_continue_statement] = ACTIONS(1462),
        [anon_sym_if] = ACTIONS(1462),
        [anon_sym_for] = ACTIONS(1462),
        [anon_sym_while] = ACTIONS(1462),
        [anon_sym_try] = ACTIONS(1462),
        [anon_sym_with] = ACTIONS(1462),
        [anon_sym_def] = ACTIONS(1462),
        [anon_sym_class] = ACTIONS(1462),
        [anon_sym_AT] = ACTIONS(1458),
        [anon_sym_LBRACK] = ACTIONS(1458),
        [anon_sym_LBRACE] = ACTIONS(1458),
        [sym_number] = ACTIONS(1462),
        [sym_identifier] = ACTIONS(1466),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(1458),
        [sym__dedent] = ACTIONS(1458),
    },
    [548] = {
        [ts_builtin_sym_end] = ACTIONS(695),
        [anon_sym_SEMI] = ACTIONS(695),
        [anon_sym_print] = ACTIONS(693),
        [anon_sym_return] = ACTIONS(693),
        [anon_sym_del] = ACTIONS(693),
        [sym_pass_statement] = ACTIONS(693),
        [sym_break_statement] = ACTIONS(693),
        [sym_continue_statement] = ACTIONS(693),
        [anon_sym_if] = ACTIONS(693),
        [anon_sym_else] = ACTIONS(693),
        [anon_sym_for] = ACTIONS(693),
        [anon_sym_while] = ACTIONS(693),
        [anon_sym_try] = ACTIONS(693),
        [anon_sym_except] = ACTIONS(693),
        [anon_sym_finally] = ACTIONS(693),
        [anon_sym_with] = ACTIONS(693),
        [anon_sym_def] = ACTIONS(693),
        [anon_sym_class] = ACTIONS(693),
        [anon_sym_AT] = ACTIONS(695),
        [anon_sym_LBRACK] = ACTIONS(695),
        [anon_sym_LBRACE] = ACTIONS(695),
        [sym_number] = ACTIONS(693),
        [sym_identifier] = ACTIONS(697),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(695),
        [sym__dedent] = ACTIONS(695),
    },
    [549] = {
        [ts_builtin_sym_end] = ACTIONS(701),
        [anon_sym_SEMI] = ACTIONS(701),
        [anon_sym_print] = ACTIONS(699),
        [anon_sym_return] = ACTIONS(699),
        [anon_sym_del] = ACTIONS(699),
        [sym_pass_statement] = ACTIONS(699),
        [sym_break_statement] = ACTIONS(699),
        [sym_continue_statement] = ACTIONS(699),
        [anon_sym_if] = ACTIONS(699),
        [anon_sym_for] = ACTIONS(699),
        [anon_sym_while] = ACTIONS(699),
        [anon_sym_try] = ACTIONS(699),
        [anon_sym_with] = ACTIONS(699),
        [anon_sym_def] = ACTIONS(699),
        [anon_sym_class] = ACTIONS(699),
        [anon_sym_AT] = ACTIONS(701),
        [anon_sym_LBRACK] = ACTIONS(701),
        [anon_sym_LBRACE] = ACTIONS(701),
        [sym_number] = ACTIONS(699),
        [sym_identifier] = ACTIONS(703),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(701),
        [sym__dedent] = ACTIONS(701),
    },
    [550] = {
        [anon_sym_COLON] = ACTIONS(1470),
        [sym_comment] = ACTIONS(73),
    },
    [551] = {
        [sym_dictionary_splat_parameter] = STATE(553),
        [anon_sym_STAR] = ACTIONS(625),
        [sym_comment] = ACTIONS(73),
    },
    [552] = {
        [anon_sym_COLON] = ACTIONS(1475),
        [sym_comment] = ACTIONS(73),
    },
    [553] = {
        [anon_sym_RPAREN] = ACTIONS(1478),
        [sym_comment] = ACTIONS(73),
    },
    [554] = {
        [anon_sym_COLON] = ACTIONS(1480),
        [sym_comment] = ACTIONS(73),
    },
    [555] = {
        [anon_sym_RPAREN] = ACTIONS(1483),
        [anon_sym_STAR] = ACTIONS(1485),
        [sym_identifier] = ACTIONS(1488),
        [sym_comment] = ACTIONS(73),
    },
    [556] = {
        [anon_sym_COLON] = ACTIONS(1491),
        [sym_comment] = ACTIONS(73),
    },
    [557] = {
        [sym__simple_statement] = STATE(490),
        [sym_print_statement] = STATE(5),
        [sym_expression_statement] = STATE(5),
        [sym_return_statement] = STATE(5),
        [sym_delete_statement] = STATE(5),
        [sym__suite] = STATE(558),
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
        [sym__indent] = ACTIONS(921),
    },
    [558] = {
        [ts_builtin_sym_end] = ACTIONS(597),
        [anon_sym_SEMI] = ACTIONS(597),
        [anon_sym_print] = ACTIONS(595),
        [anon_sym_return] = ACTIONS(595),
        [anon_sym_del] = ACTIONS(595),
        [sym_pass_statement] = ACTIONS(595),
        [sym_break_statement] = ACTIONS(595),
        [sym_continue_statement] = ACTIONS(595),
        [anon_sym_if] = ACTIONS(595),
        [anon_sym_for] = ACTIONS(595),
        [anon_sym_while] = ACTIONS(595),
        [anon_sym_try] = ACTIONS(595),
        [anon_sym_with] = ACTIONS(595),
        [anon_sym_def] = ACTIONS(595),
        [anon_sym_class] = ACTIONS(595),
        [anon_sym_AT] = ACTIONS(597),
        [anon_sym_LBRACK] = ACTIONS(597),
        [anon_sym_LBRACE] = ACTIONS(597),
        [sym_number] = ACTIONS(595),
        [sym_identifier] = ACTIONS(599),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(597),
        [sym__dedent] = ACTIONS(597),
    },
    [559] = {
        [sym__simple_statement] = STATE(490),
        [sym_print_statement] = STATE(5),
        [sym_expression_statement] = STATE(5),
        [sym_return_statement] = STATE(5),
        [sym_delete_statement] = STATE(5),
        [sym__suite] = STATE(560),
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
        [sym__indent] = ACTIONS(921),
    },
    [560] = {
        [ts_builtin_sym_end] = ACTIONS(677),
        [anon_sym_SEMI] = ACTIONS(677),
        [anon_sym_print] = ACTIONS(675),
        [anon_sym_return] = ACTIONS(675),
        [anon_sym_del] = ACTIONS(675),
        [sym_pass_statement] = ACTIONS(675),
        [sym_break_statement] = ACTIONS(675),
        [sym_continue_statement] = ACTIONS(675),
        [anon_sym_if] = ACTIONS(675),
        [anon_sym_for] = ACTIONS(675),
        [anon_sym_while] = ACTIONS(675),
        [anon_sym_try] = ACTIONS(675),
        [anon_sym_with] = ACTIONS(675),
        [anon_sym_def] = ACTIONS(675),
        [anon_sym_class] = ACTIONS(675),
        [anon_sym_AT] = ACTIONS(677),
        [anon_sym_LBRACK] = ACTIONS(677),
        [anon_sym_LBRACE] = ACTIONS(677),
        [sym_number] = ACTIONS(675),
        [sym_identifier] = ACTIONS(679),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(677),
        [sym__dedent] = ACTIONS(677),
    },
    [561] = {
        [ts_builtin_sym_end] = ACTIONS(1027),
        [anon_sym_SEMI] = ACTIONS(1027),
        [anon_sym_print] = ACTIONS(1030),
        [anon_sym_return] = ACTIONS(1030),
        [anon_sym_del] = ACTIONS(1030),
        [sym_pass_statement] = ACTIONS(1030),
        [sym_break_statement] = ACTIONS(1030),
        [sym_continue_statement] = ACTIONS(1030),
        [anon_sym_if] = ACTIONS(1030),
        [anon_sym_elif] = ACTIONS(541),
        [anon_sym_else] = ACTIONS(541),
        [anon_sym_for] = ACTIONS(1030),
        [anon_sym_while] = ACTIONS(1030),
        [anon_sym_try] = ACTIONS(1030),
        [anon_sym_except] = ACTIONS(541),
        [anon_sym_finally] = ACTIONS(541),
        [anon_sym_with] = ACTIONS(1030),
        [anon_sym_def] = ACTIONS(1030),
        [anon_sym_class] = ACTIONS(1030),
        [anon_sym_AT] = ACTIONS(1027),
        [anon_sym_LBRACK] = ACTIONS(1027),
        [anon_sym_LBRACE] = ACTIONS(1027),
        [sym_number] = ACTIONS(1030),
        [sym_identifier] = ACTIONS(1043),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(1027),
        [sym__dedent] = ACTIONS(1027),
    },
    [562] = {
        [sym__simple_statement] = STATE(490),
        [sym_print_statement] = STATE(5),
        [sym_expression_statement] = STATE(5),
        [sym_return_statement] = STATE(5),
        [sym_delete_statement] = STATE(5),
        [sym__suite] = STATE(566),
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
        [sym__indent] = ACTIONS(921),
    },
    [563] = {
        [sym_default_parameter] = STATE(273),
        [sym_list_splat_parameter] = STATE(274),
        [sym_dictionary_splat_parameter] = STATE(275),
        [sym_expression_list] = STATE(565),
        [sym__expression] = STATE(109),
        [sym_binary_operator] = STATE(36),
        [sym_subscript] = STATE(36),
        [sym_call] = STATE(36),
        [sym_list] = STATE(36),
        [sym_list_comprehension] = STATE(36),
        [sym_dictionary] = STATE(36),
        [sym_dictionary_comprehension] = STATE(36),
        [sym_set] = STATE(36),
        [sym_set_comprehension] = STATE(36),
        [aux_sym_parameters_repeat1] = STATE(276),
        [anon_sym_RPAREN] = ACTIONS(587),
        [anon_sym_STAR] = ACTIONS(589),
        [anon_sym_LBRACK] = ACTIONS(117),
        [anon_sym_LBRACE] = ACTIONS(119),
        [sym_number] = ACTIONS(121),
        [sym_identifier] = ACTIONS(1494),
        [sym_comment] = ACTIONS(73),
    },
    [564] = {
        [anon_sym_COMMA] = ACTIONS(1496),
        [anon_sym_LPAREN] = ACTIONS(135),
        [anon_sym_RPAREN] = ACTIONS(1499),
        [anon_sym_EQ] = ACTIONS(611),
        [anon_sym_PLUS] = ACTIONS(135),
        [anon_sym_LBRACK] = ACTIONS(135),
        [sym_comment] = ACTIONS(73),
    },
    [565] = {
        [anon_sym_RPAREN] = ACTIONS(1211),
        [sym_comment] = ACTIONS(73),
    },
    [566] = {
        [ts_builtin_sym_end] = ACTIONS(581),
        [anon_sym_SEMI] = ACTIONS(581),
        [anon_sym_print] = ACTIONS(579),
        [anon_sym_return] = ACTIONS(579),
        [anon_sym_del] = ACTIONS(579),
        [sym_pass_statement] = ACTIONS(579),
        [sym_break_statement] = ACTIONS(579),
        [sym_continue_statement] = ACTIONS(579),
        [anon_sym_if] = ACTIONS(579),
        [anon_sym_for] = ACTIONS(579),
        [anon_sym_while] = ACTIONS(579),
        [anon_sym_try] = ACTIONS(579),
        [anon_sym_with] = ACTIONS(579),
        [anon_sym_def] = ACTIONS(579),
        [anon_sym_class] = ACTIONS(579),
        [anon_sym_AT] = ACTIONS(581),
        [anon_sym_LBRACK] = ACTIONS(581),
        [anon_sym_LBRACE] = ACTIONS(581),
        [sym_number] = ACTIONS(579),
        [sym_identifier] = ACTIONS(583),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(581),
        [sym__dedent] = ACTIONS(581),
    },
    [567] = {
        [aux_sym_print_statement_repeat1] = STATE(202),
        [aux_sym_subscript_repeat1] = STATE(43),
        [anon_sym_COMMA] = ACTIONS(1502),
        [anon_sym_for] = ACTIONS(459),
        [anon_sym_LPAREN] = ACTIONS(209),
        [anon_sym_PLUS] = ACTIONS(211),
        [anon_sym_LBRACK] = ACTIONS(213),
        [anon_sym_RBRACK] = ACTIONS(1504),
        [sym_comment] = ACTIONS(73),
    },
    [568] = {
        [sym__expression] = STATE(570),
        [sym_binary_operator] = STATE(36),
        [sym_subscript] = STATE(36),
        [sym_call] = STATE(36),
        [sym_list] = STATE(36),
        [sym_list_comprehension] = STATE(36),
        [sym_dictionary] = STATE(36),
        [sym_dictionary_comprehension] = STATE(36),
        [sym_set] = STATE(36),
        [sym_set_comprehension] = STATE(36),
        [anon_sym_LBRACK] = ACTIONS(117),
        [anon_sym_DOT_DOT_DOT] = ACTIONS(215),
        [anon_sym_RBRACK] = ACTIONS(1385),
        [anon_sym_LBRACE] = ACTIONS(119),
        [sym_number] = ACTIONS(121),
        [sym_identifier] = ACTIONS(121),
        [sym_comment] = ACTIONS(73),
    },
    [569] = {
        [anon_sym_COMMA] = ACTIONS(1506),
        [anon_sym_COLON] = ACTIONS(1506),
        [anon_sym_for] = ACTIONS(1506),
        [anon_sym_in] = ACTIONS(1506),
        [anon_sym_as] = ACTIONS(1506),
        [anon_sym_LPAREN] = ACTIONS(1506),
        [anon_sym_RPAREN] = ACTIONS(1506),
        [anon_sym_PLUS] = ACTIONS(1506),
        [anon_sym_LBRACK] = ACTIONS(1506),
        [anon_sym_RBRACK] = ACTIONS(1506),
        [anon_sym_RBRACE] = ACTIONS(1506),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(1506),
    },
    [570] = {
        [anon_sym_COMMA] = ACTIONS(1450),
        [anon_sym_LPAREN] = ACTIONS(209),
        [anon_sym_PLUS] = ACTIONS(211),
        [anon_sym_LBRACK] = ACTIONS(213),
        [anon_sym_RBRACK] = ACTIONS(1450),
        [sym_comment] = ACTIONS(73),
    },
    [571] = {
        [anon_sym_COMMA] = ACTIONS(247),
        [anon_sym_COLON] = ACTIONS(247),
        [anon_sym_for] = ACTIONS(247),
        [anon_sym_in] = ACTIONS(247),
        [anon_sym_as] = ACTIONS(247),
        [anon_sym_LPAREN] = ACTIONS(1251),
        [anon_sym_RPAREN] = ACTIONS(247),
        [anon_sym_PLUS] = ACTIONS(1266),
        [anon_sym_LBRACK] = ACTIONS(1269),
        [anon_sym_RBRACK] = ACTIONS(247),
        [anon_sym_RBRACE] = ACTIONS(247),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(247),
    },
    [572] = {
        [anon_sym_LPAREN] = ACTIONS(1509),
        [anon_sym_DOT] = ACTIONS(1509),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(1509),
    },
    [573] = {
        [anon_sym_COLON] = ACTIONS(1512),
        [anon_sym_LPAREN] = ACTIONS(1514),
        [sym_comment] = ACTIONS(73),
    },
    [574] = {
        [sym_expression_list] = STATE(565),
        [sym__expression] = STATE(109),
        [sym_binary_operator] = STATE(36),
        [sym_subscript] = STATE(36),
        [sym_call] = STATE(36),
        [sym_list] = STATE(36),
        [sym_list_comprehension] = STATE(36),
        [sym_dictionary] = STATE(36),
        [sym_dictionary_comprehension] = STATE(36),
        [sym_set] = STATE(36),
        [sym_set_comprehension] = STATE(36),
        [anon_sym_LBRACK] = ACTIONS(117),
        [anon_sym_LBRACE] = ACTIONS(119),
        [sym_number] = ACTIONS(121),
        [sym_identifier] = ACTIONS(121),
        [sym_comment] = ACTIONS(73),
    },
    [575] = {
        [anon_sym_COMMA] = ACTIONS(1516),
        [anon_sym_LPAREN] = ACTIONS(135),
        [anon_sym_RPAREN] = ACTIONS(1519),
        [anon_sym_PLUS] = ACTIONS(135),
        [anon_sym_LBRACK] = ACTIONS(135),
        [sym_comment] = ACTIONS(73),
    },
    [576] = {
        [anon_sym_COMMA] = ACTIONS(1523),
        [anon_sym_LPAREN] = ACTIONS(209),
        [anon_sym_RPAREN] = ACTIONS(1523),
        [anon_sym_PLUS] = ACTIONS(211),
        [anon_sym_LBRACK] = ACTIONS(213),
        [sym_comment] = ACTIONS(73),
    },
    [577] = {
        [sym__expression] = STATE(144),
        [sym_binary_operator] = STATE(36),
        [sym_subscript] = STATE(36),
        [sym_call] = STATE(36),
        [sym_list] = STATE(36),
        [sym_list_comprehension] = STATE(36),
        [sym_dictionary] = STATE(36),
        [sym_dictionary_comprehension] = STATE(36),
        [sym_set] = STATE(36),
        [sym_set_comprehension] = STATE(36),
        [anon_sym_STAR] = ACTIONS(603),
        [anon_sym_LBRACK] = ACTIONS(117),
        [anon_sym_LBRACE] = ACTIONS(119),
        [sym_number] = ACTIONS(121),
        [sym_identifier] = ACTIONS(1526),
        [sym_comment] = ACTIONS(73),
    },
    [578] = {
        [anon_sym_COMMA] = ACTIONS(1496),
        [anon_sym_LPAREN] = ACTIONS(135),
        [anon_sym_RPAREN] = ACTIONS(1499),
        [anon_sym_EQ] = ACTIONS(1012),
        [anon_sym_PLUS] = ACTIONS(135),
        [anon_sym_LBRACK] = ACTIONS(135),
        [sym_comment] = ACTIONS(73),
    },
    [579] = {
        [aux_sym_print_statement_repeat1] = STATE(582),
        [anon_sym_COMMA] = ACTIONS(1528),
        [anon_sym_LPAREN] = ACTIONS(209),
        [anon_sym_RPAREN] = ACTIONS(1530),
        [anon_sym_PLUS] = ACTIONS(211),
        [anon_sym_LBRACK] = ACTIONS(213),
        [sym_comment] = ACTIONS(73),
    },
    [580] = {
        [sym__expression] = STATE(114),
        [sym_binary_operator] = STATE(36),
        [sym_subscript] = STATE(36),
        [sym_call] = STATE(36),
        [sym_list] = STATE(36),
        [sym_list_comprehension] = STATE(36),
        [sym_dictionary] = STATE(36),
        [sym_dictionary_comprehension] = STATE(36),
        [sym_set] = STATE(36),
        [sym_set_comprehension] = STATE(36),
        [anon_sym_RPAREN] = ACTIONS(405),
        [anon_sym_STAR] = ACTIONS(291),
        [anon_sym_LBRACK] = ACTIONS(1533),
        [anon_sym_STAR_STAR] = ACTIONS(293),
        [anon_sym_LBRACE] = ACTIONS(1536),
        [sym_number] = ACTIONS(1539),
        [sym_identifier] = ACTIONS(1539),
        [sym_comment] = ACTIONS(73),
    },
    [581] = {
        [anon_sym_COMMA] = ACTIONS(287),
        [anon_sym_COLON] = ACTIONS(287),
        [anon_sym_for] = ACTIONS(287),
        [anon_sym_in] = ACTIONS(287),
        [anon_sym_as] = ACTIONS(287),
        [anon_sym_LPAREN] = ACTIONS(287),
        [anon_sym_RPAREN] = ACTIONS(287),
        [anon_sym_PLUS] = ACTIONS(287),
        [anon_sym_LBRACK] = ACTIONS(287),
        [anon_sym_RBRACK] = ACTIONS(287),
        [anon_sym_RBRACE] = ACTIONS(287),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(1542),
    },
    [582] = {
        [anon_sym_COMMA] = ACTIONS(335),
        [anon_sym_RPAREN] = ACTIONS(1332),
        [sym_comment] = ACTIONS(73),
    },
    [583] = {
        [anon_sym_COMMA] = ACTIONS(1516),
        [anon_sym_LPAREN] = ACTIONS(135),
        [anon_sym_RPAREN] = ACTIONS(1516),
        [anon_sym_PLUS] = ACTIONS(135),
        [anon_sym_LBRACK] = ACTIONS(135),
        [sym_comment] = ACTIONS(73),
    },
    [584] = {
        [sym_parameters] = STATE(465),
        [anon_sym_LPAREN] = ACTIONS(585),
        [sym_comment] = ACTIONS(73),
    },
    [585] = {
        [aux_sym_with_statement_repeat1] = STATE(481),
        [anon_sym_COMMA] = ACTIONS(653),
        [anon_sym_COLON] = ACTIONS(1545),
        [sym_comment] = ACTIONS(73),
    },
    [586] = {
        [sym__simple_statement] = STATE(490),
        [sym_print_statement] = STATE(5),
        [sym_expression_statement] = STATE(5),
        [sym_return_statement] = STATE(5),
        [sym_delete_statement] = STATE(5),
        [sym__suite] = STATE(587),
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
        [sym__indent] = ACTIONS(921),
    },
    [587] = {
        [ts_builtin_sym_end] = ACTIONS(739),
        [anon_sym_SEMI] = ACTIONS(739),
        [anon_sym_print] = ACTIONS(737),
        [anon_sym_return] = ACTIONS(737),
        [anon_sym_del] = ACTIONS(737),
        [sym_pass_statement] = ACTIONS(737),
        [sym_break_statement] = ACTIONS(737),
        [sym_continue_statement] = ACTIONS(737),
        [anon_sym_if] = ACTIONS(737),
        [anon_sym_for] = ACTIONS(737),
        [anon_sym_while] = ACTIONS(737),
        [anon_sym_try] = ACTIONS(737),
        [anon_sym_with] = ACTIONS(737),
        [anon_sym_def] = ACTIONS(737),
        [anon_sym_class] = ACTIONS(737),
        [anon_sym_AT] = ACTIONS(739),
        [anon_sym_LBRACK] = ACTIONS(739),
        [anon_sym_LBRACE] = ACTIONS(739),
        [sym_number] = ACTIONS(737),
        [sym_identifier] = ACTIONS(741),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(739),
        [sym__dedent] = ACTIONS(739),
    },
    [588] = {
        [anon_sym_COMMA] = ACTIONS(661),
        [anon_sym_COLON] = ACTIONS(1547),
        [anon_sym_LPAREN] = ACTIONS(209),
        [anon_sym_PLUS] = ACTIONS(211),
        [anon_sym_LBRACK] = ACTIONS(213),
        [sym_comment] = ACTIONS(73),
    },
    [589] = {
        [anon_sym_COMMA] = ACTIONS(1550),
        [anon_sym_COLON] = ACTIONS(1552),
        [anon_sym_as] = ACTIONS(1550),
        [anon_sym_LPAREN] = ACTIONS(209),
        [anon_sym_PLUS] = ACTIONS(211),
        [anon_sym_LBRACK] = ACTIONS(213),
        [sym_comment] = ACTIONS(73),
    },
    [590] = {
        [sym__expression] = STATE(592),
        [sym_binary_operator] = STATE(36),
        [sym_subscript] = STATE(36),
        [sym_call] = STATE(36),
        [sym_list] = STATE(36),
        [sym_list_comprehension] = STATE(36),
        [sym_dictionary] = STATE(36),
        [sym_dictionary_comprehension] = STATE(36),
        [sym_set] = STATE(36),
        [sym_set_comprehension] = STATE(36),
        [anon_sym_LBRACK] = ACTIONS(117),
        [anon_sym_LBRACE] = ACTIONS(119),
        [sym_number] = ACTIONS(121),
        [sym_identifier] = ACTIONS(121),
        [sym_comment] = ACTIONS(73),
    },
    [591] = {
        [sym__simple_statement] = STATE(490),
        [sym_print_statement] = STATE(5),
        [sym_expression_statement] = STATE(5),
        [sym_return_statement] = STATE(5),
        [sym_delete_statement] = STATE(5),
        [sym__suite] = STATE(593),
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
        [sym__indent] = ACTIONS(921),
    },
    [592] = {
        [anon_sym_COLON] = ACTIONS(1554),
        [anon_sym_LPAREN] = ACTIONS(209),
        [anon_sym_PLUS] = ACTIONS(211),
        [anon_sym_LBRACK] = ACTIONS(213),
        [sym_comment] = ACTIONS(73),
    },
    [593] = {
        [ts_builtin_sym_end] = ACTIONS(757),
        [anon_sym_SEMI] = ACTIONS(757),
        [anon_sym_print] = ACTIONS(755),
        [anon_sym_return] = ACTIONS(755),
        [anon_sym_del] = ACTIONS(755),
        [sym_pass_statement] = ACTIONS(755),
        [sym_break_statement] = ACTIONS(755),
        [sym_continue_statement] = ACTIONS(755),
        [anon_sym_if] = ACTIONS(755),
        [anon_sym_else] = ACTIONS(755),
        [anon_sym_for] = ACTIONS(755),
        [anon_sym_while] = ACTIONS(755),
        [anon_sym_try] = ACTIONS(755),
        [anon_sym_except] = ACTIONS(755),
        [anon_sym_finally] = ACTIONS(755),
        [anon_sym_with] = ACTIONS(755),
        [anon_sym_def] = ACTIONS(755),
        [anon_sym_class] = ACTIONS(755),
        [anon_sym_AT] = ACTIONS(757),
        [anon_sym_LBRACK] = ACTIONS(757),
        [anon_sym_LBRACE] = ACTIONS(757),
        [sym_number] = ACTIONS(755),
        [sym_identifier] = ACTIONS(759),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(757),
        [sym__dedent] = ACTIONS(757),
    },
    [594] = {
        [sym__simple_statement] = STATE(312),
        [sym_print_statement] = STATE(5),
        [sym_expression_statement] = STATE(5),
        [sym_return_statement] = STATE(5),
        [sym_delete_statement] = STATE(5),
        [sym__suite] = STATE(595),
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
        [sym__indent] = ACTIONS(683),
    },
    [595] = {
        [sym_except_clause] = STATE(548),
        [sym_finally_clause] = STATE(549),
        [aux_sym_try_statement_repeat1] = STATE(480),
        [anon_sym_except] = ACTIONS(1556),
        [anon_sym_finally] = ACTIONS(1558),
        [sym_comment] = ACTIONS(73),
    },
    [596] = {
        [anon_sym_COLON] = ACTIONS(1560),
        [anon_sym_LPAREN] = ACTIONS(209),
        [anon_sym_PLUS] = ACTIONS(211),
        [anon_sym_LBRACK] = ACTIONS(213),
        [sym_comment] = ACTIONS(73),
    },
    [597] = {
        [sym__simple_statement] = STATE(490),
        [sym_print_statement] = STATE(5),
        [sym_expression_statement] = STATE(5),
        [sym_return_statement] = STATE(5),
        [sym_delete_statement] = STATE(5),
        [sym__suite] = STATE(598),
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
        [sym__indent] = ACTIONS(921),
    },
    [598] = {
        [sym_else_clause] = STATE(599),
        [ts_builtin_sym_end] = ACTIONS(767),
        [anon_sym_SEMI] = ACTIONS(767),
        [anon_sym_print] = ACTIONS(765),
        [anon_sym_return] = ACTIONS(765),
        [anon_sym_del] = ACTIONS(765),
        [sym_pass_statement] = ACTIONS(765),
        [sym_break_statement] = ACTIONS(765),
        [sym_continue_statement] = ACTIONS(765),
        [anon_sym_if] = ACTIONS(765),
        [anon_sym_else] = ACTIONS(1340),
        [anon_sym_for] = ACTIONS(765),
        [anon_sym_while] = ACTIONS(765),
        [anon_sym_try] = ACTIONS(765),
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
    [599] = {
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
    [600] = {
        [aux_sym_print_statement_repeat1] = STATE(111),
        [anon_sym_COMMA] = ACTIONS(331),
        [anon_sym_COLON] = ACTIONS(333),
        [anon_sym_LPAREN] = ACTIONS(209),
        [anon_sym_PLUS] = ACTIONS(1562),
        [anon_sym_LBRACK] = ACTIONS(213),
        [anon_sym_RBRACK] = ACTIONS(471),
        [anon_sym_RBRACE] = ACTIONS(1564),
        [sym_comment] = ACTIONS(73),
    },
    [601] = {
        [sym__expression] = STATE(603),
        [sym_binary_operator] = STATE(36),
        [sym_subscript] = STATE(36),
        [sym_call] = STATE(36),
        [sym_list] = STATE(36),
        [sym_list_comprehension] = STATE(36),
        [sym_dictionary] = STATE(36),
        [sym_dictionary_comprehension] = STATE(36),
        [sym_set] = STATE(36),
        [sym_set_comprehension] = STATE(36),
        [anon_sym_LBRACK] = ACTIONS(117),
        [anon_sym_LBRACE] = ACTIONS(119),
        [sym_number] = ACTIONS(121),
        [sym_identifier] = ACTIONS(121),
        [sym_comment] = ACTIONS(73),
    },
    [602] = {
        [anon_sym_COMMA] = ACTIONS(1566),
        [anon_sym_COLON] = ACTIONS(1566),
        [anon_sym_for] = ACTIONS(1566),
        [anon_sym_in] = ACTIONS(1566),
        [anon_sym_as] = ACTIONS(1566),
        [anon_sym_LPAREN] = ACTIONS(1566),
        [anon_sym_RPAREN] = ACTIONS(1566),
        [anon_sym_PLUS] = ACTIONS(1566),
        [anon_sym_LBRACK] = ACTIONS(1566),
        [anon_sym_RBRACK] = ACTIONS(1566),
        [anon_sym_RBRACE] = ACTIONS(1566),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(1566),
    },
    [603] = {
        [anon_sym_COMMA] = ACTIONS(247),
        [anon_sym_COLON] = ACTIONS(247),
        [anon_sym_LPAREN] = ACTIONS(1403),
        [anon_sym_PLUS] = ACTIONS(1569),
        [anon_sym_LBRACK] = ACTIONS(1409),
        [anon_sym_RBRACK] = ACTIONS(247),
        [anon_sym_RBRACE] = ACTIONS(247),
        [sym_comment] = ACTIONS(73),
    },
    [604] = {
        [anon_sym_in] = ACTIONS(1209),
        [sym_comment] = ACTIONS(73),
    },
    [605] = {
        [anon_sym_COLON] = ACTIONS(1572),
        [anon_sym_LPAREN] = ACTIONS(209),
        [anon_sym_PLUS] = ACTIONS(211),
        [anon_sym_LBRACK] = ACTIONS(213),
        [sym_comment] = ACTIONS(73),
    },
    [606] = {
        [sym__simple_statement] = STATE(490),
        [sym_print_statement] = STATE(5),
        [sym_expression_statement] = STATE(5),
        [sym_return_statement] = STATE(5),
        [sym_delete_statement] = STATE(5),
        [sym__suite] = STATE(607),
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
        [sym__indent] = ACTIONS(921),
    },
    [607] = {
        [ts_builtin_sym_end] = ACTIONS(831),
        [anon_sym_SEMI] = ACTIONS(831),
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
        [anon_sym_with] = ACTIONS(829),
        [anon_sym_def] = ACTIONS(829),
        [anon_sym_class] = ACTIONS(829),
        [anon_sym_AT] = ACTIONS(831),
        [anon_sym_LBRACK] = ACTIONS(831),
        [anon_sym_LBRACE] = ACTIONS(831),
        [sym_number] = ACTIONS(829),
        [sym_identifier] = ACTIONS(833),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(831),
        [sym__dedent] = ACTIONS(831),
    },
    [608] = {
        [anon_sym_COLON] = ACTIONS(1574),
        [anon_sym_LPAREN] = ACTIONS(209),
        [anon_sym_PLUS] = ACTIONS(211),
        [anon_sym_LBRACK] = ACTIONS(213),
        [sym_comment] = ACTIONS(73),
    },
    [609] = {
        [sym__simple_statement] = STATE(490),
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
        [sym__indent] = ACTIONS(921),
    },
    [610] = {
        [sym_elif_clause] = STATE(538),
        [sym_else_clause] = STATE(611),
        [aux_sym_if_statement_repeat1] = STATE(479),
        [ts_builtin_sym_end] = ACTIONS(799),
        [anon_sym_SEMI] = ACTIONS(799),
        [anon_sym_print] = ACTIONS(795),
        [anon_sym_return] = ACTIONS(795),
        [anon_sym_del] = ACTIONS(795),
        [sym_pass_statement] = ACTIONS(795),
        [sym_break_statement] = ACTIONS(795),
        [sym_continue_statement] = ACTIONS(795),
        [anon_sym_if] = ACTIONS(795),
        [anon_sym_elif] = ACTIONS(1338),
        [anon_sym_else] = ACTIONS(1340),
        [anon_sym_for] = ACTIONS(795),
        [anon_sym_while] = ACTIONS(795),
        [anon_sym_try] = ACTIONS(795),
        [anon_sym_with] = ACTIONS(795),
        [anon_sym_def] = ACTIONS(795),
        [anon_sym_class] = ACTIONS(795),
        [anon_sym_AT] = ACTIONS(799),
        [anon_sym_LBRACK] = ACTIONS(799),
        [anon_sym_LBRACE] = ACTIONS(799),
        [sym_number] = ACTIONS(795),
        [sym_identifier] = ACTIONS(801),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(799),
        [sym__dedent] = ACTIONS(799),
    },
    [611] = {
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
    [612] = {
        [anon_sym_COMMA] = ACTIONS(1354),
        [anon_sym_COLON] = ACTIONS(1576),
        [anon_sym_for] = ACTIONS(1354),
        [anon_sym_in] = ACTIONS(1354),
        [anon_sym_as] = ACTIONS(1354),
        [anon_sym_LPAREN] = ACTIONS(1354),
        [anon_sym_RPAREN] = ACTIONS(1354),
        [anon_sym_PLUS] = ACTIONS(1354),
        [anon_sym_LBRACK] = ACTIONS(1354),
        [anon_sym_RBRACK] = ACTIONS(1354),
        [anon_sym_RBRACE] = ACTIONS(1354),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(1354),
    },
    [613] = {
        [anon_sym_COMMA] = ACTIONS(1581),
        [anon_sym_RBRACK] = ACTIONS(1581),
        [sym_comment] = ACTIONS(73),
    },
    [614] = {
        [anon_sym_COMMA] = ACTIONS(1584),
        [anon_sym_COLON] = ACTIONS(1584),
        [anon_sym_for] = ACTIONS(1584),
        [anon_sym_in] = ACTIONS(1584),
        [anon_sym_as] = ACTIONS(1584),
        [anon_sym_LPAREN] = ACTIONS(1584),
        [anon_sym_RPAREN] = ACTIONS(1584),
        [anon_sym_PLUS] = ACTIONS(1584),
        [anon_sym_LBRACK] = ACTIONS(1584),
        [anon_sym_RBRACK] = ACTIONS(1584),
        [anon_sym_RBRACE] = ACTIONS(1584),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(1584),
    },
    [615] = {
        [anon_sym_COMMA] = ACTIONS(1589),
        [anon_sym_COLON] = ACTIONS(1589),
        [anon_sym_for] = ACTIONS(1589),
        [anon_sym_in] = ACTIONS(1589),
        [anon_sym_as] = ACTIONS(1589),
        [anon_sym_LPAREN] = ACTIONS(1589),
        [anon_sym_RPAREN] = ACTIONS(1589),
        [anon_sym_PLUS] = ACTIONS(1589),
        [anon_sym_LBRACK] = ACTIONS(1589),
        [anon_sym_RBRACK] = ACTIONS(1589),
        [anon_sym_RBRACE] = ACTIONS(1589),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(1589),
    },
    [616] = {
        [anon_sym_COMMA] = ACTIONS(135),
        [anon_sym_COLON] = ACTIONS(135),
        [anon_sym_in] = ACTIONS(135),
        [anon_sym_as] = ACTIONS(135),
        [anon_sym_LPAREN] = ACTIONS(135),
        [anon_sym_RPAREN] = ACTIONS(135),
        [anon_sym_EQ] = ACTIONS(249),
        [anon_sym_PLUS] = ACTIONS(135),
        [anon_sym_LBRACK] = ACTIONS(135),
        [anon_sym_RBRACK] = ACTIONS(135),
        [anon_sym_RBRACE] = ACTIONS(135),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(135),
    },
    [617] = {
        [anon_sym_COMMA] = ACTIONS(1594),
        [anon_sym_COLON] = ACTIONS(1594),
        [sym_comment] = ACTIONS(73),
    },
    [618] = {
        [anon_sym_COMMA] = ACTIONS(1597),
        [anon_sym_COLON] = ACTIONS(1605),
        [anon_sym_in] = ACTIONS(1610),
        [anon_sym_as] = ACTIONS(659),
        [anon_sym_LPAREN] = ACTIONS(161),
        [anon_sym_RPAREN] = ACTIONS(1613),
        [anon_sym_PLUS] = ACTIONS(1618),
        [anon_sym_LBRACK] = ACTIONS(165),
        [anon_sym_RBRACK] = ACTIONS(1620),
        [anon_sym_RBRACE] = ACTIONS(1610),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(1610),
    },
    [619] = {
        [anon_sym_COMMA] = ACTIONS(1625),
        [anon_sym_RPAREN] = ACTIONS(1625),
        [sym_comment] = ACTIONS(73),
    },
    [620] = {
        [anon_sym_RPAREN] = ACTIONS(1628),
        [sym_comment] = ACTIONS(73),
    },
    [621] = {
        [anon_sym_COMMA] = ACTIONS(1630),
        [anon_sym_RBRACE] = ACTIONS(1630),
        [sym_comment] = ACTIONS(73),
    },
    [622] = {
        [anon_sym_COMMA] = ACTIONS(1633),
        [anon_sym_COLON] = ACTIONS(1633),
        [anon_sym_for] = ACTIONS(1633),
        [anon_sym_in] = ACTIONS(1633),
        [anon_sym_as] = ACTIONS(1633),
        [anon_sym_LPAREN] = ACTIONS(1633),
        [anon_sym_RPAREN] = ACTIONS(1633),
        [anon_sym_PLUS] = ACTIONS(1633),
        [anon_sym_LBRACK] = ACTIONS(1633),
        [anon_sym_RBRACK] = ACTIONS(1633),
        [anon_sym_RBRACE] = ACTIONS(1633),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(1633),
    },
    [623] = {
        [sym__simple_statement] = STATE(490),
        [sym_print_statement] = STATE(5),
        [sym_expression_statement] = STATE(5),
        [sym_return_statement] = STATE(5),
        [sym_delete_statement] = STATE(5),
        [sym__suite] = STATE(543),
        [sym__expression] = STATE(626),
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
        [sym__indent] = ACTIONS(921),
    },
    [624] = {
        [sym__expression] = STATE(625),
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
    [625] = {
        [anon_sym_COMMA] = ACTIONS(247),
        [anon_sym_COLON] = ACTIONS(247),
        [anon_sym_in] = ACTIONS(247),
        [anon_sym_as] = ACTIONS(247),
        [anon_sym_LPAREN] = ACTIONS(1251),
        [anon_sym_RPAREN] = ACTIONS(247),
        [anon_sym_PLUS] = ACTIONS(1637),
        [anon_sym_LBRACK] = ACTIONS(1269),
        [anon_sym_RBRACK] = ACTIONS(247),
        [anon_sym_RBRACE] = ACTIONS(247),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(247),
    },
    [626] = {
        [anon_sym_COMMA] = ACTIONS(327),
        [anon_sym_LPAREN] = ACTIONS(161),
        [anon_sym_PLUS] = ACTIONS(1640),
        [anon_sym_LBRACK] = ACTIONS(165),
        [anon_sym_RBRACE] = ACTIONS(327),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(167),
    },
    [627] = {
        [sym__expression] = STATE(628),
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
    [628] = {
        [anon_sym_COMMA] = ACTIONS(247),
        [anon_sym_LPAREN] = ACTIONS(1251),
        [anon_sym_PLUS] = ACTIONS(1642),
        [anon_sym_LBRACK] = ACTIONS(1269),
        [anon_sym_RBRACE] = ACTIONS(247),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(247),
    },
};

static TSParseActionEntry ts_parse_actions[] = {
    [0] = {.count = 0, .reusable = false, .depends_on_lookahead = false},
    [1] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(0),
    [3] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(28),
    [5] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(2),
    [7] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(426),
    [9] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(3),
    [11] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(4),
    [13] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(5),
    [15] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(427),
    [17] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(428),
    [19] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(429),
    [21] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(430),
    [23] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(431),
    [25] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(432),
    [27] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(433),
    [29] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(434),
    [31] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(435),
    [33] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(436),
    [35] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(437),
    [37] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(438),
    [39] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(439),
    [41] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(440),
    [43] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(441),
    [45] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(442),
    [47] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(443),
    [49] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(444),
    [51] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(13),
    [53] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(445),
    [55] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(446),
    [57] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(447),
    [59] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(448),
    [61] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(449),
    [63] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(61),
    [65] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(15),
    [67] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(450),
    [69] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(16),
    [71] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, RECOVER(451),
    [73] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT_EXTRA(),
    [75] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(452),
    [77] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(453),
    [79] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(454),
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
    [117] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(33),
    [119] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(35),
    [121] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(36),
    [123] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(371),
    [125] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(361),
    [127] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(225),
    [129] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(210),
    [131] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(197),
    [133] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(172),
    [135] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__expression, 1),
    [137] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, ACCEPT_INPUT(),
    [139] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_module_repeat1, 1),
    [141] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_module_repeat1, 1),
    [143] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_module_repeat1, 1),
    [145] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(171),
    [147] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__statement, 1),
    [149] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__statement, 1),
    [151] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__statement, 1),
    [153] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__compound_statement, 1),
    [155] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__compound_statement, 1),
    [157] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__compound_statement, 1),
    [159] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_decorated_definition_repeat1, 1),
    [161] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(30),
    [163] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(31),
    [165] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(32),
    [167] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_expression_statement, 1),
    [169] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_module, 1),
    [171] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(28),
    [173] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(11),
    [175] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(12),
    [177] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_decorated_definition, 2),
    [179] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_decorated_definition, 2),
    [181] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_decorated_definition, 2),
    [183] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_decorated_definition_repeat1, 2),
    [185] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_module, 2),
    [187] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_module_repeat1, 2),
    [189] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_module_repeat1, 2),
    [191] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_module_repeat1, 2),
    [193] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(60),
    [195] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(61),
    [197] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(62),
    [199] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(34),
    [201] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(130),
    [203] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(38),
    [205] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(42),
    [207] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(94),
    [209] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(39),
    [211] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(40),
    [213] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(41),
    [215] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(57),
    [217] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(45),
    [219] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(49),
    [221] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_subscript, 4),
    [223] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(44),
    [225] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(46),
    [227] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(47),
    [229] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_subscript, 5),
    [231] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_subscript_repeat1, 3),
    [233] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_subscript, 6),
    [235] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(51),
    [237] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(52),
    [239] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(55),
    [241] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(54),
    [243] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(56),
    [245] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_subscript_repeat1, 2),
    [247] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE_FRAGILE(sym_binary_operator, 3),
    [249] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(92),
    [251] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(91),
    [253] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(86),
    [255] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(87),
    [257] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(85),
    [259] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(72),
    [261] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(73),
    [263] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_call, 5),
    [265] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(75),
    [267] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(76),
    [269] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_call, 6),
    [271] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_call_repeat2, 3),
    [273] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(80),
    [275] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_call, 8),
    [277] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_call_repeat2, 2),
    [279] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(84),
    [281] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_call, 7),
    [283] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_call_repeat1, 3),
    [285] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_call_repeat1, 3),
    [287] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_call, 4),
    [289] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(89),
    [291] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_call_repeat1, 2),
    [293] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_call_repeat1, 2),
    [295] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_keyword_argument, 3),
    [297] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_dictionary, 2),
    [299] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(119),
    [301] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(106),
    [303] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(120),
    [305] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(121),
    [307] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(97),
    [309] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(98),
    [311] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(99),
    [313] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(102),
    [315] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_dictionary, 3),
    [317] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(101),
    [319] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(103),
    [321] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_dictionary, 4),
    [323] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_dictionary, 5),
    [325] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_dictionary_repeat1, 3),
    [327] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_pair, 3),
    [329] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(115),
    [331] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(110),
    [333] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_expression_list, 1),
    [335] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(112),
    [337] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_expression_list, 2),
    [339] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_print_statement_repeat1, 3),
    [341] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_print_statement_repeat1, 2),
    [343] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(117),
    [345] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_dictionary_comprehension, 7),
    [347] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_dictionary_repeat1, 2),
    [349] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(124),
    [351] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_set, 3),
    [353] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(123),
    [355] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(125),
    [357] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_set, 4),
    [359] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_set, 5),
    [361] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(127),
    [363] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(129),
    [365] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_set_comprehension, 7),
    [367] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_list, 2),
    [369] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(132),
    [371] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(133),
    [373] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(134),
    [375] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(137),
    [377] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_list, 3),
    [379] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(136),
    [381] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(138),
    [383] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_list, 4),
    [385] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_list, 5),
    [387] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(140),
    [389] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(142),
    [391] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_list_comprehension, 7),
    [393] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_dictionary_splat_argument, 2),
    [395] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_list_splat_argument, 2),
    [397] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(170),
    [399] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(165),
    [401] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(166),
    [403] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(164),
    [405] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(155),
    [407] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(156),
    [409] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(158),
    [411] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(159),
    [413] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(161),
    [415] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(163),
    [417] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(168),
    [419] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__statement, 2),
    [421] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__statement, 2),
    [423] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__statement, 2),
    [425] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(186),
    [427] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(187),
    [429] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(188),
    [431] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(175),
    [433] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(176),
    [435] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(177),
    [437] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(180),
    [439] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(179),
    [441] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(181),
    [443] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(183),
    [445] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(185),
    [447] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(191),
    [449] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(190),
    [451] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(192),
    [453] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(194),
    [455] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(196),
    [457] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(199),
    [459] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(200),
    [461] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(201),
    [463] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(204),
    [465] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(203),
    [467] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(205),
    [469] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(207),
    [471] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(209),
    [473] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_dotted_name, 1),
    [475] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(220),
    [477] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(212),
    [479] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(213),
    [481] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_decorator, 3),
    [483] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(215),
    [485] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_decorator, 4),
    [487] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(217),
    [489] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_arguments, 3),
    [491] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(219),
    [493] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_arguments, 4),
    [495] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(224),
    [497] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_dotted_name, 2),
    [499] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(222),
    [501] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(223),
    [503] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_dotted_name_repeat1, 3),
    [505] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_dotted_name_repeat1, 2),
    [507] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(226),
    [509] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(227),
    [511] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(231),
    [513] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(229),
    [515] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(230),
    [517] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(235),
    [519] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(236),
    [521] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(237),
    [523] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(238),
    [525] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(239),
    [527] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(240),
    [529] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(241),
    [531] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(234),
    [533] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_class_definition, 7),
    [535] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_class_definition, 7),
    [537] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_class_definition, 7),
    [539] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__suite, 2),
    [541] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__suite, 2),
    [543] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__suite, 2),
    [545] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(310),
    [547] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(265),
    [549] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(252),
    [551] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(251),
    [553] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(249),
    [555] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(240),
    [557] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(241),
    [559] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__suite, 3),
    [561] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__suite, 3),
    [563] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__suite, 3),
    [565] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(253),
    [567] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(254),
    [569] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(258),
    [571] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(256),
    [573] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(257),
    [575] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(261),
    [577] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(263),
    [579] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_class_definition, 4),
    [581] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_class_definition, 4),
    [583] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_class_definition, 4),
    [585] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(266),
    [587] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(270),
    [589] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(271),
    [591] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(272),
    [593] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(268),
    [595] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_function_definition, 5),
    [597] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_function_definition, 5),
    [599] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_function_definition, 5),
    [601] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_parameters, 2),
    [603] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(286),
    [605] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(296),
    [607] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(295),
    [609] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(292),
    [611] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(290),
    [613] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(293),
    [615] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(277),
    [617] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(288),
    [619] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(281),
    [621] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(282),
    [623] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_parameters, 4),
    [625] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(283),
    [627] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(285),
    [629] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_parameters, 6),
    [631] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(287),
    [633] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_dictionary_splat_parameter, 3),
    [635] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(289),
    [637] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_parameters_repeat1, 3),
    [639] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_parameters_repeat1, 3),
    [641] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_parameters, 5),
    [643] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_default_parameter, 3),
    [645] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_parameters, 3),
    [647] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_parameters_repeat1, 2),
    [649] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_parameters_repeat1, 2),
    [651] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_list_splat_parameter, 2),
    [653] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(301),
    [655] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(302),
    [657] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_with_item, 1),
    [659] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(299),
    [661] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_with_item, 3),
    [663] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(304),
    [665] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(305),
    [667] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_with_statement, 5),
    [669] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_with_statement, 5),
    [671] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_with_statement, 5),
    [673] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_with_statement_repeat1, 3),
    [675] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_with_statement, 4),
    [677] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_with_statement, 4),
    [679] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_with_statement, 4),
    [681] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_with_statement_repeat1, 2),
    [683] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(311),
    [685] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(335),
    [687] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(314),
    [689] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(315),
    [691] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(326),
    [693] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_try_statement_repeat1, 1),
    [695] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_try_statement_repeat1, 1),
    [697] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_try_statement_repeat1, 1),
    [699] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_try_statement, 4),
    [701] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_try_statement, 4),
    [703] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_try_statement, 4),
    [705] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(319),
    [707] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(314),
    [709] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(315),
    [711] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(324),
    [713] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_try_statement, 5),
    [715] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_try_statement, 5),
    [717] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_try_statement, 5),
    [719] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_try_statement_repeat1, 2),
    [721] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_try_statement_repeat1, 2),
    [723] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_try_statement_repeat1, 2),
    [725] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_try_statement, 6),
    [727] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_try_statement, 6),
    [729] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_try_statement, 6),
    [731] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_else_clause, 3),
    [733] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_else_clause, 3),
    [735] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_else_clause, 3),
    [737] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_finally_clause, 3),
    [739] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_finally_clause, 3),
    [741] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_finally_clause, 3),
    [743] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(329),
    [745] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(330),
    [747] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(332),
    [749] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_except_clause, 6),
    [751] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_except_clause, 6),
    [753] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_except_clause, 6),
    [755] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_except_clause, 4),
    [757] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_except_clause, 4),
    [759] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_except_clause, 4),
    [761] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(337),
    [763] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(339),
    [765] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_while_statement, 4),
    [767] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_while_statement, 4),
    [769] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_while_statement, 4),
    [771] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_while_statement, 5),
    [773] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_while_statement, 5),
    [775] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_while_statement, 5),
    [777] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(343),
    [779] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(345),
    [781] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_for_statement, 6),
    [783] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_for_statement, 6),
    [785] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_for_statement, 6),
    [787] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_for_statement, 7),
    [789] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_for_statement, 7),
    [791] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_for_statement, 7),
    [793] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(349),
    [795] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_if_statement, 4),
    [797] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(351),
    [799] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_if_statement, 4),
    [801] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_if_statement, 4),
    [803] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_if_statement_repeat1, 1),
    [805] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_if_statement_repeat1, 1),
    [807] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_if_statement_repeat1, 1),
    [809] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_if_statement, 5),
    [811] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_if_statement, 5),
    [813] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_if_statement, 5),
    [815] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_if_statement_repeat1, 2),
    [817] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_if_statement_repeat1, 2),
    [819] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_if_statement_repeat1, 2),
    [821] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_if_statement, 6),
    [823] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_if_statement, 6),
    [825] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_if_statement, 6),
    [827] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(358),
    [829] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_elif_clause, 4),
    [831] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_elif_clause, 4),
    [833] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_elif_clause, 4),
    [835] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(363),
    [837] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(366),
    [839] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(368),
    [841] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(373),
    [843] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(374),
    [845] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(385),
    [847] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(378),
    [849] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(373),
    [851] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(374),
    [853] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(383),
    [855] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(388),
    [857] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(389),
    [859] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(391),
    [861] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(395),
    [863] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(399),
    [865] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(401),
    [867] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(405),
    [869] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(407),
    [871] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(414),
    [873] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_delete_statement, 2),
    [875] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(418),
    [877] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(420),
    [879] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_return_statement, 2),
    [881] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_print_statement, 2),
    [883] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_print_statement, 3),
    [885] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(612),
    [887] = {.count = 5, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_parameters_repeat1, 2), REDUCE(aux_sym_call_repeat1, 2), REDUCE(aux_sym_parameters_repeat1, 3), REDUCE(aux_sym_call_repeat1, 3), SHIFT(283),
    [893] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_call_repeat1, 2), REDUCE(aux_sym_call_repeat1, 3), SHIFT(14),
    [897] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(613),
    [899] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(614),
    [901] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_call_repeat1, 2), REDUCE(aux_sym_call_repeat1, 3), SHIFT(61),
    [905] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_call_repeat1, 2), REDUCE(aux_sym_call_repeat1, 3), SHIFT(15),
    [909] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(615),
    [911] = {.count = 3, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_call_repeat1, 2), REDUCE(aux_sym_call_repeat1, 3), SHIFT(16),
    [915] = {.count = 5, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_parameters_repeat1, 2), REDUCE(aux_sym_call_repeat1, 2), REDUCE(aux_sym_parameters_repeat1, 3), REDUCE(aux_sym_call_repeat1, 3), SHIFT(616),
    [921] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(453),
    [923] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(501),
    [925] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(594),
    [927] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(586),
    [929] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(584),
    [931] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(577),
    [933] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(578),
    [935] = {.count = 5, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_call, 4), REDUCE(sym_call, 5), REDUCE(sym_call, 6), REDUCE(sym_call, 7), REDUCE(sym_call, 8),
    [941] = {.count = 11, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_parameters, 2), REDUCE(sym_parameters, 3), REDUCE(sym_parameters, 4), REDUCE(sym_call, 4), REDUCE(sym_parameters, 5), REDUCE(sym_call, 5), REDUCE(sym_parameters, 6), REDUCE(sym_call, 6), REDUCE(sym_call, 7), REDUCE(sym_call, 8), SHIFT(545),
    [953] = {.count = 7, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_arguments, 3), REDUCE(sym_arguments, 4), REDUCE(sym_call, 4), REDUCE(sym_call, 5), REDUCE(sym_call, 6), REDUCE(sym_call, 7), REDUCE(sym_call, 8),
    [961] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(575),
    [963] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(573),
    [965] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(572),
    [967] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_subscript_repeat1, 2), REDUCE(aux_sym_subscript_repeat1, 3), SHIFT(38),
    [971] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_subscript_repeat1, 2), REDUCE(aux_sym_subscript_repeat1, 3), SHIFT(42),
    [975] = {.count = 8, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_list, 2), REDUCE(sym_list, 3), REDUCE(sym_subscript, 4), REDUCE(sym_list, 4), REDUCE(sym_subscript, 5), REDUCE(sym_list, 5), REDUCE(sym_subscript, 6), REDUCE(sym_list_comprehension, 7),
    [984] = {.count = 9, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_dictionary, 2), REDUCE(sym_dictionary, 3), REDUCE(sym_set, 3), REDUCE(sym_dictionary, 4), REDUCE(sym_set, 4), REDUCE(sym_dictionary, 5), REDUCE(sym_set, 5), REDUCE(sym_dictionary_comprehension, 7), REDUCE(sym_set_comprehension, 7),
    [994] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__expression, 1), REDUCE(sym_list_splat_parameter, 2), SHIFT(555),
    [998] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__expression, 1), SHIFT(562),
    [1001] = {.count = 5, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_dotted_name, 1), REDUCE(sym__expression, 1), REDUCE(aux_sym_dotted_name_repeat1, 2), REDUCE(aux_sym_dotted_name_repeat1, 3), SHIFT(563),
    [1007] = {.count = 4, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__expression, 1), REDUCE(sym_list_splat_parameter, 2), REDUCE(sym_dictionary_splat_parameter, 3), SHIFT(552),
    [1012] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(442),
    [1014] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_dotted_name_repeat1, 2), REDUCE(aux_sym_dotted_name_repeat1, 3), SHIFT(220),
    [1018] = {.count = 4, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_dotted_name, 1), REDUCE(sym__expression, 1), REDUCE(aux_sym_dotted_name_repeat1, 2), REDUCE(aux_sym_dotted_name_repeat1, 3),
    [1023] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_module, 2), REDUCE(sym__statement, 2), REDUCE(sym__suite, 2),
    [1027] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__statement, 2), REDUCE(sym__suite, 2),
    [1030] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__statement, 2), REDUCE(sym__suite, 2),
    [1033] = {.count = 4, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__statement, 2), REDUCE(sym__suite, 2), REDUCE(sym_decorator, 3), REDUCE(sym_decorator, 4),
    [1038] = {.count = 4, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__statement, 2), REDUCE(sym__suite, 2), REDUCE(sym_decorator, 3), REDUCE(sym_decorator, 4),
    [1043] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__statement, 2), REDUCE(sym__suite, 2),
    [1046] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(492),
    [1048] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__suite, 2), REDUCE(sym__suite, 3),
    [1051] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__suite, 2), REDUCE(sym__suite, 3),
    [1054] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__suite, 2), REDUCE(sym__suite, 3),
    [1057] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_module_repeat1, 1), REDUCE(aux_sym_module_repeat1, 2),
    [1060] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_module_repeat1, 1), REDUCE(aux_sym_module_repeat1, 2),
    [1063] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_module_repeat1, 1), REDUCE(aux_sym_module_repeat1, 2),
    [1066] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(561),
    [1068] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_if_statement_repeat1, 1), REDUCE(aux_sym_if_statement_repeat1, 2),
    [1071] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_if_statement_repeat1, 1), REDUCE(aux_sym_if_statement_repeat1, 2),
    [1074] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_if_statement_repeat1, 1), REDUCE(aux_sym_if_statement_repeat1, 2),
    [1077] = {.count = 5, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_if_statement, 5), REDUCE(sym_while_statement, 5), REDUCE(sym_try_statement, 5), REDUCE(sym_if_statement, 6), REDUCE(sym_for_statement, 7),
    [1083] = {.count = 5, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_if_statement, 5), REDUCE(sym_while_statement, 5), REDUCE(sym_try_statement, 5), REDUCE(sym_if_statement, 6), REDUCE(sym_for_statement, 7),
    [1089] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(437),
    [1091] = {.count = 5, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_if_statement, 5), REDUCE(sym_while_statement, 5), REDUCE(sym_try_statement, 5), REDUCE(sym_if_statement, 6), REDUCE(sym_for_statement, 7),
    [1097] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_try_statement_repeat1, 1), REDUCE(aux_sym_try_statement_repeat1, 2),
    [1100] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_try_statement_repeat1, 1), REDUCE(aux_sym_try_statement_repeat1, 2),
    [1103] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_try_statement_repeat1, 1), REDUCE(aux_sym_try_statement_repeat1, 2),
    [1106] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_try_statement, 4), REDUCE(sym_try_statement, 5), REDUCE(sym_try_statement, 6),
    [1110] = {.count = 3, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_try_statement, 4), REDUCE(sym_try_statement, 5), REDUCE(sym_try_statement, 6),
    [1114] = {.count = 3, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_try_statement, 4), REDUCE(sym_try_statement, 5), REDUCE(sym_try_statement, 6),
    [1118] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_with_statement_repeat1, 2), REDUCE(aux_sym_with_statement_repeat1, 3), SHIFT(301),
    [1122] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_with_statement_repeat1, 2), REDUCE(aux_sym_with_statement_repeat1, 3), SHIFT(559),
    [1126] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__compound_statement, 1), REDUCE(sym_decorated_definition, 2),
    [1129] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__compound_statement, 1), REDUCE(sym_decorated_definition, 2),
    [1132] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__compound_statement, 1), REDUCE(sym_decorated_definition, 2),
    [1135] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(557),
    [1137] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(555),
    [1139] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(552),
    [1141] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(551),
    [1143] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(550),
    [1145] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_decorated_definition_repeat1, 1), REDUCE(aux_sym_decorated_definition_repeat1, 2),
    [1148] = {.count = 13, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_else_clause, 3), REDUCE(sym_finally_clause, 3), REDUCE(sym_if_statement, 4), REDUCE(sym_elif_clause, 4), REDUCE(sym_while_statement, 4), REDUCE(sym_except_clause, 4), REDUCE(sym_with_statement, 4), REDUCE(sym_class_definition, 4), REDUCE(sym_with_statement, 5), REDUCE(sym_function_definition, 5), REDUCE(sym_for_statement, 6), REDUCE(sym_except_clause, 6), REDUCE(sym_class_definition, 7),
    [1162] = {.count = 13, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_else_clause, 3), REDUCE(sym_finally_clause, 3), REDUCE(sym_if_statement, 4), REDUCE(sym_elif_clause, 4), REDUCE(sym_while_statement, 4), REDUCE(sym_except_clause, 4), REDUCE(sym_with_statement, 4), REDUCE(sym_class_definition, 4), REDUCE(sym_with_statement, 5), REDUCE(sym_function_definition, 5), REDUCE(sym_for_statement, 6), REDUCE(sym_except_clause, 6), REDUCE(sym_class_definition, 7),
    [1176] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_elif_clause, 4), SHIFT(429),
    [1179] = {.count = 4, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_elif_clause, 4), REDUCE(sym_except_clause, 4), REDUCE(sym_except_clause, 6), SHIFT(430),
    [1184] = {.count = 3, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_except_clause, 4), REDUCE(sym_except_clause, 6), SHIFT(435),
    [1188] = {.count = 4, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_else_clause, 3), REDUCE(sym_except_clause, 4), REDUCE(sym_except_clause, 6), SHIFT(437),
    [1193] = {.count = 13, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_else_clause, 3), REDUCE(sym_finally_clause, 3), REDUCE(sym_if_statement, 4), REDUCE(sym_elif_clause, 4), REDUCE(sym_while_statement, 4), REDUCE(sym_except_clause, 4), REDUCE(sym_with_statement, 4), REDUCE(sym_class_definition, 4), REDUCE(sym_with_statement, 5), REDUCE(sym_function_definition, 5), REDUCE(sym_for_statement, 6), REDUCE(sym_except_clause, 6), REDUCE(sym_class_definition, 7),
    [1207] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(514),
    [1209] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(432),
    [1211] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(544),
    [1213] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_return_statement, 2), REDUCE(sym_delete_statement, 2),
    [1216] = {.count = 14, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_with_item, 1), REDUCE(sym_list_splat_argument, 2), REDUCE(aux_sym_print_statement_repeat1, 2), REDUCE(aux_sym_subscript_repeat1, 2), REDUCE(aux_sym_call_repeat2, 2), REDUCE(sym_with_item, 3), REDUCE(sym_default_parameter, 3), REDUCE_FRAGILE(sym_binary_operator, 3), REDUCE(sym_keyword_argument, 3), REDUCE(sym_pair, 3), REDUCE(aux_sym_print_statement_repeat1, 3), REDUCE(aux_sym_subscript_repeat1, 3), REDUCE(aux_sym_call_repeat2, 3), SHIFT(523),
    [1231] = {.count = 7, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_with_item, 1), REDUCE(sym_expression_list, 1), REDUCE(aux_sym_print_statement_repeat1, 2), REDUCE(sym_with_item, 3), REDUCE_FRAGILE(sym_binary_operator, 3), REDUCE(aux_sym_print_statement_repeat1, 3), SHIFT(524),
    [1239] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE_FRAGILE(sym_binary_operator, 3), REDUCE(sym_pair, 3), SHIFT(525),
    [1243] = {.count = 4, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_expression_list, 1), REDUCE(aux_sym_print_statement_repeat1, 2), REDUCE_FRAGILE(sym_binary_operator, 3), REDUCE(aux_sym_print_statement_repeat1, 3),
    [1248] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE_FRAGILE(sym_binary_operator, 3), SHIFT(436),
    [1251] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE_FRAGILE(sym_binary_operator, 3), SHIFT(30),
    [1254] = {.count = 11, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_expression_list, 1), REDUCE(sym_list_splat_argument, 2), REDUCE(sym_dictionary_splat_argument, 2), REDUCE(aux_sym_print_statement_repeat1, 2), REDUCE(aux_sym_call_repeat2, 2), REDUCE(sym_default_parameter, 3), REDUCE_FRAGILE(sym_binary_operator, 3), REDUCE(sym_keyword_argument, 3), REDUCE(aux_sym_print_statement_repeat1, 3), REDUCE(aux_sym_call_repeat2, 3), SHIFT(526),
    [1266] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE_FRAGILE(sym_binary_operator, 3), SHIFT(446),
    [1269] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE_FRAGILE(sym_binary_operator, 3), SHIFT(32),
    [1272] = {.count = 6, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_print_statement_repeat1, 2), REDUCE(aux_sym_subscript_repeat1, 2), REDUCE_FRAGILE(sym_binary_operator, 3), REDUCE(aux_sym_print_statement_repeat1, 3), REDUCE(aux_sym_subscript_repeat1, 3), SHIFT(527),
    [1279] = {.count = 5, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_print_statement_repeat1, 2), REDUCE_FRAGILE(sym_binary_operator, 3), REDUCE(sym_pair, 3), REDUCE(aux_sym_print_statement_repeat1, 3), SHIFT(528),
    [1285] = {.count = 6, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_expression_statement, 1), REDUCE(sym_expression_list, 1), REDUCE(sym_print_statement, 2), REDUCE(aux_sym_print_statement_repeat1, 2), REDUCE_FRAGILE(sym_binary_operator, 3), REDUCE(aux_sym_print_statement_repeat1, 3),
    [1292] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_call_repeat2, 2), REDUCE(aux_sym_call_repeat2, 3), SHIFT(522),
    [1296] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_call_repeat2, 2), REDUCE(aux_sym_call_repeat2, 3), SHIFT(519),
    [1300] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(518),
    [1302] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(519),
    [1304] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(517),
    [1306] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_dictionary_repeat1, 2), REDUCE(aux_sym_dictionary_repeat1, 3), SHIFT(175),
    [1310] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_dictionary_repeat1, 2), REDUCE(aux_sym_dictionary_repeat1, 3), SHIFT(177),
    [1314] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(427),
    [1316] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(507),
    [1318] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(433),
    [1320] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(434),
    [1322] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(438),
    [1324] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(439),
    [1326] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(444),
    [1328] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(494),
    [1330] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(503),
    [1332] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_expression_list, 2), SHIFT(219),
    [1335] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_expression_list, 2), REDUCE(sym_print_statement, 3),
    [1338] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(429),
    [1340] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(430),
    [1342] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(435),
    [1344] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(489),
    [1346] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(439),
    [1348] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(444),
    [1350] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(484),
    [1352] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(485),
    [1354] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_call, 5), REDUCE(sym_call, 6),
    [1357] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(487),
    [1359] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_call, 7), REDUCE(sym_call, 8),
    [1362] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(505),
    [1364] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE_FRAGILE(sym_binary_operator, 3), SHIFT(505),
    [1367] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(510),
    [1369] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(512),
    [1371] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_call, 4), REDUCE(sym_call, 5),
    [1374] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(521),
    [1376] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_call, 6), REDUCE(sym_call, 7),
    [1379] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_call_repeat1, 2), REDUCE(aux_sym_call_repeat1, 3),
    [1382] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_call_repeat1, 2), REDUCE(aux_sym_call_repeat1, 3),
    [1385] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(540),
    [1387] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_arguments, 3), REDUCE(sym_call, 4), REDUCE(sym_call, 5),
    [1391] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_list, 3), REDUCE(sym_subscript, 4), REDUCE(sym_list_comprehension, 7),
    [1395] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_set, 3), REDUCE(sym_dictionary_comprehension, 7), REDUCE(sym_set_comprehension, 7),
    [1399] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(530),
    [1401] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(532),
    [1403] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE_FRAGILE(sym_binary_operator, 3), SHIFT(39),
    [1406] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE_FRAGILE(sym_binary_operator, 3), SHIFT(532),
    [1409] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE_FRAGILE(sym_binary_operator, 3), SHIFT(41),
    [1412] = {.count = 5, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_if_statement, 4), REDUCE(sym_elif_clause, 4), REDUCE(sym_while_statement, 4), REDUCE(sym_except_clause, 4), REDUCE(sym_except_clause, 6),
    [1418] = {.count = 5, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_if_statement, 4), REDUCE(sym_elif_clause, 4), REDUCE(sym_while_statement, 4), REDUCE(sym_except_clause, 4), REDUCE(sym_except_clause, 6),
    [1424] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_except_clause, 4), REDUCE(sym_except_clause, 6),
    [1427] = {.count = 5, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_if_statement, 4), REDUCE(sym_elif_clause, 4), REDUCE(sym_while_statement, 4), REDUCE(sym_except_clause, 4), REDUCE(sym_except_clause, 6),
    [1433] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(536),
    [1435] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE_FRAGILE(sym_binary_operator, 3), SHIFT(536),
    [1438] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_if_statement, 5), REDUCE(sym_while_statement, 5),
    [1441] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_if_statement, 5), REDUCE(sym_while_statement, 5),
    [1444] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_if_statement, 5), REDUCE(sym_while_statement, 5),
    [1447] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_list, 4), REDUCE(sym_subscript, 5),
    [1450] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_print_statement_repeat1, 2), REDUCE(aux_sym_subscript_repeat1, 2),
    [1453] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_print_statement_repeat1, 2), SHIFT(542),
    [1456] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(545),
    [1458] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_if_statement, 5), REDUCE(sym_while_statement, 5), REDUCE(sym_for_statement, 7),
    [1462] = {.count = 3, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_if_statement, 5), REDUCE(sym_while_statement, 5), REDUCE(sym_for_statement, 7),
    [1466] = {.count = 3, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_if_statement, 5), REDUCE(sym_while_statement, 5), REDUCE(sym_for_statement, 7),
    [1470] = {.count = 4, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_parameters, 3), REDUCE(sym_parameters, 4), REDUCE(sym_parameters, 5), REDUCE(sym_parameters, 6),
    [1475] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_parameters, 3), REDUCE(sym_parameters, 4),
    [1478] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(554),
    [1480] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_parameters, 5), REDUCE(sym_parameters, 6),
    [1483] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(556),
    [1485] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_parameters_repeat1, 2), REDUCE(aux_sym_parameters_repeat1, 3),
    [1488] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_parameters_repeat1, 2), REDUCE(aux_sym_parameters_repeat1, 3),
    [1491] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_parameters, 4), REDUCE(sym_parameters, 5),
    [1494] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(564),
    [1496] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__expression, 1), SHIFT(295),
    [1499] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__expression, 1), SHIFT(292),
    [1502] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(568),
    [1504] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(569),
    [1506] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_list, 3), REDUCE(sym_subscript, 4),
    [1509] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_dotted_name_repeat1, 2), REDUCE(aux_sym_dotted_name_repeat1, 3),
    [1512] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(562),
    [1514] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(574),
    [1516] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__expression, 1), REDUCE(sym_list_splat_parameter, 2),
    [1519] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__expression, 1), REDUCE(sym_list_splat_parameter, 2), REDUCE(sym_dictionary_splat_parameter, 3),
    [1523] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_default_parameter, 3), REDUCE(sym_keyword_argument, 3),
    [1526] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(583),
    [1528] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(580),
    [1530] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_expression_list, 1), SHIFT(581),
    [1533] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_call_repeat1, 2), SHIFT(33),
    [1536] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_call_repeat1, 2), SHIFT(35),
    [1539] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_call_repeat1, 2), SHIFT(36),
    [1542] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_arguments, 3), REDUCE(sym_call, 4),
    [1545] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(559),
    [1547] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_with_item, 3), SHIFT(542),
    [1550] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(590),
    [1552] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(591),
    [1554] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(542),
    [1556] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(435),
    [1558] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(437),
    [1560] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(597),
    [1562] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(601),
    [1564] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(602),
    [1566] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_dictionary_comprehension, 7), REDUCE(sym_set_comprehension, 7),
    [1569] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE_FRAGILE(sym_binary_operator, 3), SHIFT(601),
    [1572] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(606),
    [1574] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(609),
    [1576] = {.count = 4, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_parameters, 4), REDUCE(sym_parameters, 5), REDUCE(sym_call, 5), REDUCE(sym_call, 6),
    [1581] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_subscript_repeat1, 2), REDUCE(aux_sym_subscript_repeat1, 3),
    [1584] = {.count = 4, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_list, 4), REDUCE(sym_subscript, 5), REDUCE(sym_list, 5), REDUCE(sym_subscript, 6),
    [1589] = {.count = 4, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_dictionary, 4), REDUCE(sym_set, 4), REDUCE(sym_dictionary, 5), REDUCE(sym_set, 5),
    [1594] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_with_statement_repeat1, 2), REDUCE(aux_sym_with_statement_repeat1, 3),
    [1597] = {.count = 7, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_with_item, 1), REDUCE(aux_sym_print_statement_repeat1, 2), REDUCE(aux_sym_subscript_repeat1, 2), REDUCE(aux_sym_call_repeat2, 2), REDUCE(aux_sym_print_statement_repeat1, 3), REDUCE(aux_sym_subscript_repeat1, 3), REDUCE(aux_sym_call_repeat2, 3),
    [1605] = {.count = 4, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_with_item, 1), REDUCE(aux_sym_print_statement_repeat1, 2), REDUCE(aux_sym_print_statement_repeat1, 3), SHIFT(623),
    [1610] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_print_statement_repeat1, 2), REDUCE(aux_sym_print_statement_repeat1, 3),
    [1613] = {.count = 4, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_print_statement_repeat1, 2), REDUCE(aux_sym_call_repeat2, 2), REDUCE(aux_sym_print_statement_repeat1, 3), REDUCE(aux_sym_call_repeat2, 3),
    [1618] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(624),
    [1620] = {.count = 4, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_print_statement_repeat1, 2), REDUCE(aux_sym_subscript_repeat1, 2), REDUCE(aux_sym_print_statement_repeat1, 3), REDUCE(aux_sym_subscript_repeat1, 3),
    [1625] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_call_repeat2, 2), REDUCE(aux_sym_call_repeat2, 3),
    [1628] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(622),
    [1630] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_dictionary_repeat1, 2), REDUCE(aux_sym_dictionary_repeat1, 3),
    [1633] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_call, 6), REDUCE(sym_call, 7), REDUCE(sym_call, 8),
    [1637] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE_FRAGILE(sym_binary_operator, 3), SHIFT(624),
    [1640] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(627),
    [1642] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE_FRAGILE(sym_binary_operator, 3), SHIFT(627),
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
