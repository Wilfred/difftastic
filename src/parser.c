#include <tree_sitter/parser.h>

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"

#define STATE_COUNT 612
#define SYMBOL_COUNT 97
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
    sym_set = 83,
    sym_pair = 84,
    aux_sym_module_repeat1 = 85,
    aux_sym_print_statement_repeat1 = 86,
    aux_sym_if_statement_repeat1 = 87,
    aux_sym_try_statement_repeat1 = 88,
    aux_sym_with_statement_repeat1 = 89,
    aux_sym_parameters_repeat1 = 90,
    aux_sym_decorated_definition_repeat1 = 91,
    aux_sym_dotted_name_repeat1 = 92,
    aux_sym_subscript_repeat1 = 93,
    aux_sym_call_repeat1 = 94,
    aux_sym_call_repeat2 = 95,
    aux_sym_dictionary_repeat1 = 96,
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
    [sym_set] = "set",
    [sym_pair] = "pair",
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
    [sym_set] = {
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
        case 204:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(204);
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
    [120] = {.lex_state = 104},
    [121] = {.lex_state = 139},
    [122] = {.lex_state = 103},
    [123] = {.lex_state = 104},
    [124] = {.lex_state = 104},
    [125] = {.lex_state = 104},
    [126] = {.lex_state = 147},
    [127] = {.lex_state = 102},
    [128] = {.lex_state = 98},
    [129] = {.lex_state = 104},
    [130] = {.lex_state = 127},
    [131] = {.lex_state = 102},
    [132] = {.lex_state = 104},
    [133] = {.lex_state = 104},
    [134] = {.lex_state = 142},
    [135] = {.lex_state = 98},
    [136] = {.lex_state = 148},
    [137] = {.lex_state = 104},
    [138] = {.lex_state = 149},
    [139] = {.lex_state = 131},
    [140] = {.lex_state = 150, .external_tokens = 2},
    [141] = {.lex_state = 131},
    [142] = {.lex_state = 132},
    [143] = {.lex_state = 132},
    [144] = {.lex_state = 133},
    [145] = {.lex_state = 124},
    [146] = {.lex_state = 131},
    [147] = {.lex_state = 132},
    [148] = {.lex_state = 132},
    [149] = {.lex_state = 133},
    [150] = {.lex_state = 104, .external_tokens = 2},
    [151] = {.lex_state = 134},
    [152] = {.lex_state = 132},
    [153] = {.lex_state = 134},
    [154] = {.lex_state = 104, .external_tokens = 2},
    [155] = {.lex_state = 133},
    [156] = {.lex_state = 104, .external_tokens = 2},
    [157] = {.lex_state = 133},
    [158] = {.lex_state = 104, .external_tokens = 2},
    [159] = {.lex_state = 136},
    [160] = {.lex_state = 104, .external_tokens = 2},
    [161] = {.lex_state = 134},
    [162] = {.lex_state = 132},
    [163] = {.lex_state = 134},
    [164] = {.lex_state = 133},
    [165] = {.lex_state = 136},
    [166] = {.lex_state = 113, .external_tokens = 2},
    [167] = {.lex_state = 104, .external_tokens = 2},
    [168] = {.lex_state = 137},
    [169] = {.lex_state = 138},
    [170] = {.lex_state = 103},
    [171] = {.lex_state = 98},
    [172] = {.lex_state = 104, .external_tokens = 2},
    [173] = {.lex_state = 139},
    [174] = {.lex_state = 103},
    [175] = {.lex_state = 104, .external_tokens = 2},
    [176] = {.lex_state = 104, .external_tokens = 2},
    [177] = {.lex_state = 142},
    [178] = {.lex_state = 98},
    [179] = {.lex_state = 146},
    [180] = {.lex_state = 104, .external_tokens = 2},
    [181] = {.lex_state = 103},
    [182] = {.lex_state = 104, .external_tokens = 2},
    [183] = {.lex_state = 139},
    [184] = {.lex_state = 103},
    [185] = {.lex_state = 104, .external_tokens = 2},
    [186] = {.lex_state = 104, .external_tokens = 2},
    [187] = {.lex_state = 104, .external_tokens = 2},
    [188] = {.lex_state = 147},
    [189] = {.lex_state = 102},
    [190] = {.lex_state = 98},
    [191] = {.lex_state = 104, .external_tokens = 2},
    [192] = {.lex_state = 127},
    [193] = {.lex_state = 102},
    [194] = {.lex_state = 104, .external_tokens = 2},
    [195] = {.lex_state = 104, .external_tokens = 2},
    [196] = {.lex_state = 142},
    [197] = {.lex_state = 98},
    [198] = {.lex_state = 148},
    [199] = {.lex_state = 104, .external_tokens = 2},
    [200] = {.lex_state = 151, .external_tokens = 2},
    [201] = {.lex_state = 153, .external_tokens = 2},
    [202] = {.lex_state = 98},
    [203] = {.lex_state = 114},
    [204] = {.lex_state = 99, .external_tokens = 2},
    [205] = {.lex_state = 114},
    [206] = {.lex_state = 131},
    [207] = {.lex_state = 99, .external_tokens = 2},
    [208] = {.lex_state = 132},
    [209] = {.lex_state = 99, .external_tokens = 2},
    [210] = {.lex_state = 101},
    [211] = {.lex_state = 151, .external_tokens = 2},
    [212] = {.lex_state = 101},
    [213] = {.lex_state = 151, .external_tokens = 2},
    [214] = {.lex_state = 151, .external_tokens = 2},
    [215] = {.lex_state = 154},
    [216] = {.lex_state = 155, .external_tokens = 3},
    [217] = {.lex_state = 98},
    [218] = {.lex_state = 133},
    [219] = {.lex_state = 100},
    [220] = {.lex_state = 155, .external_tokens = 3},
    [221] = {.lex_state = 159, .external_tokens = 4},
    [222] = {.lex_state = 99, .external_tokens = 2},
    [223] = {.lex_state = 113, .external_tokens = 2},
    [224] = {.lex_state = 160, .external_tokens = 2},
    [225] = {.lex_state = 98},
    [226] = {.lex_state = 98},
    [227] = {.lex_state = 98},
    [228] = {.lex_state = 100},
    [229] = {.lex_state = 98},
    [230] = {.lex_state = 101},
    [231] = {.lex_state = 101},
    [232] = {.lex_state = 159, .external_tokens = 4},
    [233] = {.lex_state = 99, .external_tokens = 2},
    [234] = {.lex_state = 159, .external_tokens = 4},
    [235] = {.lex_state = 159, .external_tokens = 4},
    [236] = {.lex_state = 159, .external_tokens = 4},
    [237] = {.lex_state = 114},
    [238] = {.lex_state = 159, .external_tokens = 4},
    [239] = {.lex_state = 160, .external_tokens = 2},
    [240] = {.lex_state = 159, .external_tokens = 4},
    [241] = {.lex_state = 159, .external_tokens = 4},
    [242] = {.lex_state = 154},
    [243] = {.lex_state = 155, .external_tokens = 3},
    [244] = {.lex_state = 98},
    [245] = {.lex_state = 133},
    [246] = {.lex_state = 100},
    [247] = {.lex_state = 155, .external_tokens = 3},
    [248] = {.lex_state = 159, .external_tokens = 4},
    [249] = {.lex_state = 99, .external_tokens = 2},
    [250] = {.lex_state = 159, .external_tokens = 4},
    [251] = {.lex_state = 161, .external_tokens = 4},
    [252] = {.lex_state = 159, .external_tokens = 4},
    [253] = {.lex_state = 161, .external_tokens = 4},
    [254] = {.lex_state = 159, .external_tokens = 4},
    [255] = {.lex_state = 153},
    [256] = {.lex_state = 162},
    [257] = {.lex_state = 100},
    [258] = {.lex_state = 155, .external_tokens = 3},
    [259] = {.lex_state = 159, .external_tokens = 4},
    [260] = {.lex_state = 100},
    [261] = {.lex_state = 164},
    [262] = {.lex_state = 165},
    [263] = {.lex_state = 132},
    [264] = {.lex_state = 132},
    [265] = {.lex_state = 133},
    [266] = {.lex_state = 164},
    [267] = {.lex_state = 165},
    [268] = {.lex_state = 132},
    [269] = {.lex_state = 132},
    [270] = {.lex_state = 133},
    [271] = {.lex_state = 100},
    [272] = {.lex_state = 166},
    [273] = {.lex_state = 166},
    [274] = {.lex_state = 133},
    [275] = {.lex_state = 100},
    [276] = {.lex_state = 101},
    [277] = {.lex_state = 133},
    [278] = {.lex_state = 162},
    [279] = {.lex_state = 100},
    [280] = {.lex_state = 98},
    [281] = {.lex_state = 131},
    [282] = {.lex_state = 100},
    [283] = {.lex_state = 166},
    [284] = {.lex_state = 133},
    [285] = {.lex_state = 162},
    [286] = {.lex_state = 132},
    [287] = {.lex_state = 167},
    [288] = {.lex_state = 168},
    [289] = {.lex_state = 98},
    [290] = {.lex_state = 169},
    [291] = {.lex_state = 98},
    [292] = {.lex_state = 155, .external_tokens = 3},
    [293] = {.lex_state = 167},
    [294] = {.lex_state = 98},
    [295] = {.lex_state = 155, .external_tokens = 3},
    [296] = {.lex_state = 159, .external_tokens = 4},
    [297] = {.lex_state = 167},
    [298] = {.lex_state = 159, .external_tokens = 4},
    [299] = {.lex_state = 167},
    [300] = {.lex_state = 155, .external_tokens = 3},
    [301] = {.lex_state = 159, .external_tokens = 4},
    [302] = {.lex_state = 99, .external_tokens = 2},
    [303] = {.lex_state = 170},
    [304] = {.lex_state = 98},
    [305] = {.lex_state = 100},
    [306] = {.lex_state = 184, .external_tokens = 4},
    [307] = {.lex_state = 159, .external_tokens = 4},
    [308] = {.lex_state = 184, .external_tokens = 4},
    [309] = {.lex_state = 100},
    [310] = {.lex_state = 187, .external_tokens = 4},
    [311] = {.lex_state = 184, .external_tokens = 4},
    [312] = {.lex_state = 159, .external_tokens = 4},
    [313] = {.lex_state = 159, .external_tokens = 4},
    [314] = {.lex_state = 155, .external_tokens = 3},
    [315] = {.lex_state = 187, .external_tokens = 4},
    [316] = {.lex_state = 155, .external_tokens = 3},
    [317] = {.lex_state = 159, .external_tokens = 4},
    [318] = {.lex_state = 168},
    [319] = {.lex_state = 98},
    [320] = {.lex_state = 155, .external_tokens = 3},
    [321] = {.lex_state = 140},
    [322] = {.lex_state = 155, .external_tokens = 3},
    [323] = {.lex_state = 184, .external_tokens = 4},
    [324] = {.lex_state = 184, .external_tokens = 4},
    [325] = {.lex_state = 170},
    [326] = {.lex_state = 159, .external_tokens = 4},
    [327] = {.lex_state = 170},
    [328] = {.lex_state = 140},
    [329] = {.lex_state = 155, .external_tokens = 3},
    [330] = {.lex_state = 188, .external_tokens = 4},
    [331] = {.lex_state = 159, .external_tokens = 4},
    [332] = {.lex_state = 142},
    [333] = {.lex_state = 98},
    [334] = {.lex_state = 100},
    [335] = {.lex_state = 155, .external_tokens = 3},
    [336] = {.lex_state = 188, .external_tokens = 4},
    [337] = {.lex_state = 159, .external_tokens = 4},
    [338] = {.lex_state = 140},
    [339] = {.lex_state = 155, .external_tokens = 3},
    [340] = {.lex_state = 190, .external_tokens = 4},
    [341] = {.lex_state = 98},
    [342] = {.lex_state = 190, .external_tokens = 4},
    [343] = {.lex_state = 159, .external_tokens = 4},
    [344] = {.lex_state = 190, .external_tokens = 4},
    [345] = {.lex_state = 190, .external_tokens = 4},
    [346] = {.lex_state = 159, .external_tokens = 4},
    [347] = {.lex_state = 140},
    [348] = {.lex_state = 155, .external_tokens = 3},
    [349] = {.lex_state = 190, .external_tokens = 4},
    [350] = {.lex_state = 113, .external_tokens = 2},
    [351] = {.lex_state = 153},
    [352] = {.lex_state = 100},
    [353] = {.lex_state = 155, .external_tokens = 3},
    [354] = {.lex_state = 113, .external_tokens = 2},
    [355] = {.lex_state = 167},
    [356] = {.lex_state = 155, .external_tokens = 3},
    [357] = {.lex_state = 167},
    [358] = {.lex_state = 155, .external_tokens = 3},
    [359] = {.lex_state = 113, .external_tokens = 2},
    [360] = {.lex_state = 113, .external_tokens = 2},
    [361] = {.lex_state = 155, .external_tokens = 3},
    [362] = {.lex_state = 170},
    [363] = {.lex_state = 98},
    [364] = {.lex_state = 100},
    [365] = {.lex_state = 192, .external_tokens = 2},
    [366] = {.lex_state = 113, .external_tokens = 2},
    [367] = {.lex_state = 192, .external_tokens = 2},
    [368] = {.lex_state = 100},
    [369] = {.lex_state = 193, .external_tokens = 2},
    [370] = {.lex_state = 192, .external_tokens = 2},
    [371] = {.lex_state = 113, .external_tokens = 2},
    [372] = {.lex_state = 113, .external_tokens = 2},
    [373] = {.lex_state = 155, .external_tokens = 3},
    [374] = {.lex_state = 193, .external_tokens = 2},
    [375] = {.lex_state = 155, .external_tokens = 3},
    [376] = {.lex_state = 113, .external_tokens = 2},
    [377] = {.lex_state = 168},
    [378] = {.lex_state = 98},
    [379] = {.lex_state = 155, .external_tokens = 3},
    [380] = {.lex_state = 140},
    [381] = {.lex_state = 155, .external_tokens = 3},
    [382] = {.lex_state = 192, .external_tokens = 2},
    [383] = {.lex_state = 192, .external_tokens = 2},
    [384] = {.lex_state = 140},
    [385] = {.lex_state = 155, .external_tokens = 3},
    [386] = {.lex_state = 194, .external_tokens = 2},
    [387] = {.lex_state = 113, .external_tokens = 2},
    [388] = {.lex_state = 142},
    [389] = {.lex_state = 98},
    [390] = {.lex_state = 100},
    [391] = {.lex_state = 155, .external_tokens = 3},
    [392] = {.lex_state = 194, .external_tokens = 2},
    [393] = {.lex_state = 113, .external_tokens = 2},
    [394] = {.lex_state = 140},
    [395] = {.lex_state = 155, .external_tokens = 3},
    [396] = {.lex_state = 195, .external_tokens = 2},
    [397] = {.lex_state = 98},
    [398] = {.lex_state = 195, .external_tokens = 2},
    [399] = {.lex_state = 113, .external_tokens = 2},
    [400] = {.lex_state = 195, .external_tokens = 2},
    [401] = {.lex_state = 195, .external_tokens = 2},
    [402] = {.lex_state = 113, .external_tokens = 2},
    [403] = {.lex_state = 140},
    [404] = {.lex_state = 155, .external_tokens = 3},
    [405] = {.lex_state = 195, .external_tokens = 2},
    [406] = {.lex_state = 99, .external_tokens = 2},
    [407] = {.lex_state = 150, .external_tokens = 2},
    [408] = {.lex_state = 98},
    [409] = {.lex_state = 196, .external_tokens = 2},
    [410] = {.lex_state = 98},
    [411] = {.lex_state = 150, .external_tokens = 2},
    [412] = {.lex_state = 150, .external_tokens = 2},
    [413] = {.lex_state = 99, .external_tokens = 2},
    [414] = {.lex_state = 150, .external_tokens = 2},
    [415] = {.lex_state = 196, .external_tokens = 2},
    [416] = {.lex_state = 197},
    [417] = {.lex_state = 98},
    [418] = {.lex_state = 155, .external_tokens = 3},
    [419] = {.lex_state = 98},
    [420] = {.lex_state = 100},
    [421] = {.lex_state = 98},
    [422] = {.lex_state = 98},
    [423] = {.lex_state = 98},
    [424] = {.lex_state = 100},
    [425] = {.lex_state = 98},
    [426] = {.lex_state = 98},
    [427] = {.lex_state = 100},
    [428] = {.lex_state = 98},
    [429] = {.lex_state = 101},
    [430] = {.lex_state = 136},
    [431] = {.lex_state = 104, .external_tokens = 2},
    [432] = {.lex_state = 98},
    [433] = {.lex_state = 198},
    [434] = {.lex_state = 101},
    [435] = {.lex_state = 101},
    [436] = {.lex_state = 98},
    [437] = {.lex_state = 129},
    [438] = {.lex_state = 127},
    [439] = {.lex_state = 104, .external_tokens = 2},
    [440] = {.lex_state = 104, .external_tokens = 2},
    [441] = {.lex_state = 199, .external_tokens = 2},
    [442] = {.lex_state = 160, .external_tokens = 5},
    [443] = {.lex_state = 159, .external_tokens = 4},
    [444] = {.lex_state = 160, .external_tokens = 5},
    [445] = {.lex_state = 113, .external_tokens = 5},
    [446] = {.lex_state = 99, .external_tokens = 2},
    [447] = {.lex_state = 113, .external_tokens = 5},
    [448] = {.lex_state = 113, .external_tokens = 5},
    [449] = {.lex_state = 195, .external_tokens = 5},
    [450] = {.lex_state = 193, .external_tokens = 5},
    [451] = {.lex_state = 192, .external_tokens = 5},
    [452] = {.lex_state = 113, .external_tokens = 5},
    [453] = {.lex_state = 167},
    [454] = {.lex_state = 113, .external_tokens = 5},
    [455] = {.lex_state = 100},
    [456] = {.lex_state = 132},
    [457] = {.lex_state = 132},
    [458] = {.lex_state = 133},
    [459] = {.lex_state = 114},
    [460] = {.lex_state = 160, .external_tokens = 5},
    [461] = {.lex_state = 200, .external_tokens = 2},
    [462] = {.lex_state = 104, .external_tokens = 2},
    [463] = {.lex_state = 132},
    [464] = {.lex_state = 132},
    [465] = {.lex_state = 133},
    [466] = {.lex_state = 138},
    [467] = {.lex_state = 113, .external_tokens = 5},
    [468] = {.lex_state = 201, .external_tokens = 2},
    [469] = {.lex_state = 195, .external_tokens = 5},
    [470] = {.lex_state = 192, .external_tokens = 5},
    [471] = {.lex_state = 167},
    [472] = {.lex_state = 114},
    [473] = {.lex_state = 132},
    [474] = {.lex_state = 134},
    [475] = {.lex_state = 104, .external_tokens = 2},
    [476] = {.lex_state = 133},
    [477] = {.lex_state = 104, .external_tokens = 2},
    [478] = {.lex_state = 113, .external_tokens = 5},
    [479] = {.lex_state = 155, .external_tokens = 3},
    [480] = {.lex_state = 99, .external_tokens = 2},
    [481] = {.lex_state = 113, .external_tokens = 5},
    [482] = {.lex_state = 160, .external_tokens = 5},
    [483] = {.lex_state = 159, .external_tokens = 4},
    [484] = {.lex_state = 160, .external_tokens = 5},
    [485] = {.lex_state = 193, .external_tokens = 5},
    [486] = {.lex_state = 192, .external_tokens = 5},
    [487] = {.lex_state = 113, .external_tokens = 5},
    [488] = {.lex_state = 113, .external_tokens = 5},
    [489] = {.lex_state = 195, .external_tokens = 5},
    [490] = {.lex_state = 113, .external_tokens = 5},
    [491] = {.lex_state = 155, .external_tokens = 3},
    [492] = {.lex_state = 193, .external_tokens = 5},
    [493] = {.lex_state = 202},
    [494] = {.lex_state = 145, .external_tokens = 2},
    [495] = {.lex_state = 98},
    [496] = {.lex_state = 145, .external_tokens = 2},
    [497] = {.lex_state = 98},
    [498] = {.lex_state = 113, .external_tokens = 5},
    [499] = {.lex_state = 99, .external_tokens = 2},
    [500] = {.lex_state = 113, .external_tokens = 5},
    [501] = {.lex_state = 142},
    [502] = {.lex_state = 98},
    [503] = {.lex_state = 100},
    [504] = {.lex_state = 155, .external_tokens = 3},
    [505] = {.lex_state = 194, .external_tokens = 5},
    [506] = {.lex_state = 113, .external_tokens = 5},
    [507] = {.lex_state = 104, .external_tokens = 2},
    [508] = {.lex_state = 134},
    [509] = {.lex_state = 104, .external_tokens = 2},
    [510] = {.lex_state = 133},
    [511] = {.lex_state = 104, .external_tokens = 2},
    [512] = {.lex_state = 136},
    [513] = {.lex_state = 197},
    [514] = {.lex_state = 155, .external_tokens = 3},
    [515] = {.lex_state = 104, .external_tokens = 2},
    [516] = {.lex_state = 104, .external_tokens = 2},
    [517] = {.lex_state = 104, .external_tokens = 2},
    [518] = {.lex_state = 160, .external_tokens = 5},
    [519] = {.lex_state = 141, .external_tokens = 2},
    [520] = {.lex_state = 98},
    [521] = {.lex_state = 141, .external_tokens = 2},
    [522] = {.lex_state = 195, .external_tokens = 5},
    [523] = {.lex_state = 113, .external_tokens = 5},
    [524] = {.lex_state = 104, .external_tokens = 2},
    [525] = {.lex_state = 145, .external_tokens = 2},
    [526] = {.lex_state = 155, .external_tokens = 3},
    [527] = {.lex_state = 192, .external_tokens = 5},
    [528] = {.lex_state = 100},
    [529] = {.lex_state = 155, .external_tokens = 3},
    [530] = {.lex_state = 113, .external_tokens = 5},
    [531] = {.lex_state = 113, .external_tokens = 5},
    [532] = {.lex_state = 192, .external_tokens = 5},
    [533] = {.lex_state = 113, .external_tokens = 5},
    [534] = {.lex_state = 100},
    [535] = {.lex_state = 166},
    [536] = {.lex_state = 100},
    [537] = {.lex_state = 133},
    [538] = {.lex_state = 100},
    [539] = {.lex_state = 162},
    [540] = {.lex_state = 100},
    [541] = {.lex_state = 155, .external_tokens = 3},
    [542] = {.lex_state = 113, .external_tokens = 5},
    [543] = {.lex_state = 155, .external_tokens = 3},
    [544] = {.lex_state = 113, .external_tokens = 5},
    [545] = {.lex_state = 160, .external_tokens = 5},
    [546] = {.lex_state = 155, .external_tokens = 3},
    [547] = {.lex_state = 203},
    [548] = {.lex_state = 130},
    [549] = {.lex_state = 133},
    [550] = {.lex_state = 113, .external_tokens = 5},
    [551] = {.lex_state = 147},
    [552] = {.lex_state = 129},
    [553] = {.lex_state = 104, .external_tokens = 2},
    [554] = {.lex_state = 128},
    [555] = {.lex_state = 104, .external_tokens = 2},
    [556] = {.lex_state = 151, .external_tokens = 2},
    [557] = {.lex_state = 154},
    [558] = {.lex_state = 98},
    [559] = {.lex_state = 131},
    [560] = {.lex_state = 131},
    [561] = {.lex_state = 198},
    [562] = {.lex_state = 130},
    [563] = {.lex_state = 131},
    [564] = {.lex_state = 136},
    [565] = {.lex_state = 104, .external_tokens = 2},
    [566] = {.lex_state = 132},
    [567] = {.lex_state = 131},
    [568] = {.lex_state = 153},
    [569] = {.lex_state = 167},
    [570] = {.lex_state = 155, .external_tokens = 3},
    [571] = {.lex_state = 113, .external_tokens = 5},
    [572] = {.lex_state = 169},
    [573] = {.lex_state = 168},
    [574] = {.lex_state = 98},
    [575] = {.lex_state = 155, .external_tokens = 3},
    [576] = {.lex_state = 140},
    [577] = {.lex_state = 192, .external_tokens = 5},
    [578] = {.lex_state = 155, .external_tokens = 3},
    [579] = {.lex_state = 170},
    [580] = {.lex_state = 140},
    [581] = {.lex_state = 155, .external_tokens = 3},
    [582] = {.lex_state = 194, .external_tokens = 5},
    [583] = {.lex_state = 113, .external_tokens = 5},
    [584] = {.lex_state = 204},
    [585] = {.lex_state = 98},
    [586] = {.lex_state = 204},
    [587] = {.lex_state = 142},
    [588] = {.lex_state = 140},
    [589] = {.lex_state = 155, .external_tokens = 3},
    [590] = {.lex_state = 195, .external_tokens = 5},
    [591] = {.lex_state = 140},
    [592] = {.lex_state = 155, .external_tokens = 3},
    [593] = {.lex_state = 195, .external_tokens = 5},
    [594] = {.lex_state = 113, .external_tokens = 5},
    [595] = {.lex_state = 104, .external_tokens = 2},
    [596] = {.lex_state = 127},
    [597] = {.lex_state = 104, .external_tokens = 2},
    [598] = {.lex_state = 104, .external_tokens = 2},
    [599] = {.lex_state = 205, .external_tokens = 2},
    [600] = {.lex_state = 167},
    [601] = {.lex_state = 206, .external_tokens = 2},
    [602] = {.lex_state = 132},
    [603] = {.lex_state = 133},
    [604] = {.lex_state = 139},
    [605] = {.lex_state = 104, .external_tokens = 2},
    [606] = {.lex_state = 155, .external_tokens = 3},
    [607] = {.lex_state = 98},
    [608] = {.lex_state = 206, .external_tokens = 2},
    [609] = {.lex_state = 207, .external_tokens = 2},
    [610] = {.lex_state = 98},
    [611] = {.lex_state = 207, .external_tokens = 2},
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
        [sym__statement] = STATE(445),
        [sym__simple_statement] = STATE(446),
        [sym_print_statement] = STATE(5),
        [sym_expression_statement] = STATE(5),
        [sym_return_statement] = STATE(5),
        [sym_delete_statement] = STATE(5),
        [sym__compound_statement] = STATE(447),
        [sym_if_statement] = STATE(448),
        [sym_elif_clause] = STATE(449),
        [sym_else_clause] = STATE(450),
        [sym_for_statement] = STATE(448),
        [sym_while_statement] = STATE(448),
        [sym_try_statement] = STATE(448),
        [sym_except_clause] = STATE(451),
        [sym_finally_clause] = STATE(452),
        [sym_with_statement] = STATE(448),
        [sym_with_item] = STATE(453),
        [sym_function_definition] = STATE(454),
        [sym_parameters] = STATE(455),
        [sym_default_parameter] = STATE(456),
        [sym_list_splat_parameter] = STATE(457),
        [sym_dictionary_splat_parameter] = STATE(458),
        [sym_class_definition] = STATE(454),
        [sym_decorated_definition] = STATE(448),
        [sym_decorator] = STATE(459),
        [sym__suite] = STATE(460),
        [sym_arguments] = STATE(204),
        [sym_expression_list] = STATE(461),
        [sym_dotted_name] = STATE(201),
        [sym__expression] = STATE(462),
        [sym_binary_operator] = STATE(16),
        [sym_subscript] = STATE(16),
        [sym_call] = STATE(16),
        [sym_keyword_argument] = STATE(463),
        [sym_list_splat_argument] = STATE(464),
        [sym_dictionary_splat_argument] = STATE(465),
        [sym_list] = STATE(16),
        [sym_list_comprehension] = STATE(16),
        [sym_dictionary] = STATE(16),
        [sym_dictionary_comprehension] = STATE(16),
        [sym_set] = STATE(16),
        [sym_pair] = STATE(466),
        [aux_sym_module_repeat1] = STATE(467),
        [aux_sym_print_statement_repeat1] = STATE(468),
        [aux_sym_if_statement_repeat1] = STATE(469),
        [aux_sym_try_statement_repeat1] = STATE(470),
        [aux_sym_with_statement_repeat1] = STATE(471),
        [aux_sym_parameters_repeat1] = STATE(266),
        [aux_sym_decorated_definition_repeat1] = STATE(472),
        [aux_sym_dotted_name_repeat1] = STATE(211),
        [aux_sym_subscript_repeat1] = STATE(43),
        [aux_sym_call_repeat1] = STATE(145),
        [aux_sym_call_repeat2] = STATE(473),
        [aux_sym_dictionary_repeat1] = STATE(173),
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
        [sym__expression] = STATE(414),
        [sym_binary_operator] = STATE(16),
        [sym_subscript] = STATE(16),
        [sym_call] = STATE(16),
        [sym_list] = STATE(16),
        [sym_list_comprehension] = STATE(16),
        [sym_dictionary] = STATE(16),
        [sym_dictionary_comprehension] = STATE(16),
        [sym_set] = STATE(16),
        [anon_sym_LBRACK] = ACTIONS(107),
        [anon_sym_LBRACE] = ACTIONS(109),
        [sym_number] = ACTIONS(111),
        [sym_identifier] = ACTIONS(111),
        [sym_comment] = ACTIONS(73),
    },
    [3] = {
        [sym_expression_list] = STATE(413),
        [sym__expression] = STATE(407),
        [sym_binary_operator] = STATE(16),
        [sym_subscript] = STATE(16),
        [sym_call] = STATE(16),
        [sym_list] = STATE(16),
        [sym_list_comprehension] = STATE(16),
        [sym_dictionary] = STATE(16),
        [sym_dictionary_comprehension] = STATE(16),
        [sym_set] = STATE(16),
        [anon_sym_LBRACK] = ACTIONS(107),
        [anon_sym_LBRACE] = ACTIONS(109),
        [sym_number] = ACTIONS(111),
        [sym_identifier] = ACTIONS(111),
        [sym_comment] = ACTIONS(73),
    },
    [4] = {
        [sym_expression_list] = STATE(406),
        [sym__expression] = STATE(407),
        [sym_binary_operator] = STATE(16),
        [sym_subscript] = STATE(16),
        [sym_call] = STATE(16),
        [sym_list] = STATE(16),
        [sym_list_comprehension] = STATE(16),
        [sym_dictionary] = STATE(16),
        [sym_dictionary_comprehension] = STATE(16),
        [sym_set] = STATE(16),
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
        [sym__expression] = STATE(394),
        [sym_binary_operator] = STATE(36),
        [sym_subscript] = STATE(36),
        [sym_call] = STATE(36),
        [sym_list] = STATE(36),
        [sym_list_comprehension] = STATE(36),
        [sym_dictionary] = STATE(36),
        [sym_dictionary_comprehension] = STATE(36),
        [sym_set] = STATE(36),
        [anon_sym_LBRACK] = ACTIONS(117),
        [anon_sym_LBRACE] = ACTIONS(119),
        [sym_number] = ACTIONS(121),
        [sym_identifier] = ACTIONS(121),
        [sym_comment] = ACTIONS(73),
    },
    [7] = {
        [sym_expression_list] = STATE(388),
        [sym__expression] = STATE(109),
        [sym_binary_operator] = STATE(36),
        [sym_subscript] = STATE(36),
        [sym_call] = STATE(36),
        [sym_list] = STATE(36),
        [sym_list_comprehension] = STATE(36),
        [sym_dictionary] = STATE(36),
        [sym_dictionary_comprehension] = STATE(36),
        [sym_set] = STATE(36),
        [anon_sym_LBRACK] = ACTIONS(117),
        [anon_sym_LBRACE] = ACTIONS(119),
        [sym_number] = ACTIONS(121),
        [sym_identifier] = ACTIONS(121),
        [sym_comment] = ACTIONS(73),
    },
    [8] = {
        [sym__expression] = STATE(384),
        [sym_binary_operator] = STATE(36),
        [sym_subscript] = STATE(36),
        [sym_call] = STATE(36),
        [sym_list] = STATE(36),
        [sym_list_comprehension] = STATE(36),
        [sym_dictionary] = STATE(36),
        [sym_dictionary_comprehension] = STATE(36),
        [sym_set] = STATE(36),
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
        [sym_with_item] = STATE(355),
        [sym__expression] = STATE(288),
        [sym_binary_operator] = STATE(36),
        [sym_subscript] = STATE(36),
        [sym_call] = STATE(36),
        [sym_list] = STATE(36),
        [sym_list_comprehension] = STATE(36),
        [sym_dictionary] = STATE(36),
        [sym_dictionary_comprehension] = STATE(36),
        [sym_set] = STATE(36),
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
        [sym_dotted_name] = STATE(201),
        [sym_identifier] = ACTIONS(129),
        [sym_comment] = ACTIONS(73),
    },
    [14] = {
        [sym__expression] = STATE(188),
        [sym_binary_operator] = STATE(36),
        [sym_subscript] = STATE(36),
        [sym_call] = STATE(36),
        [sym_list] = STATE(36),
        [sym_list_comprehension] = STATE(36),
        [sym_dictionary] = STATE(36),
        [sym_dictionary_comprehension] = STATE(36),
        [sym_set] = STATE(36),
        [anon_sym_LBRACK] = ACTIONS(117),
        [anon_sym_RBRACK] = ACTIONS(131),
        [anon_sym_LBRACE] = ACTIONS(119),
        [sym_number] = ACTIONS(121),
        [sym_identifier] = ACTIONS(121),
        [sym_comment] = ACTIONS(73),
    },
    [15] = {
        [sym__expression] = STATE(168),
        [sym_binary_operator] = STATE(36),
        [sym_subscript] = STATE(36),
        [sym_call] = STATE(36),
        [sym_list] = STATE(36),
        [sym_list_comprehension] = STATE(36),
        [sym_dictionary] = STATE(36),
        [sym_dictionary_comprehension] = STATE(36),
        [sym_set] = STATE(36),
        [sym_pair] = STATE(169),
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
        [sym__expression] = STATE(141),
        [sym_binary_operator] = STATE(36),
        [sym_subscript] = STATE(36),
        [sym_call] = STATE(36),
        [sym_keyword_argument] = STATE(142),
        [sym_list_splat_argument] = STATE(143),
        [sym_dictionary_splat_argument] = STATE(144),
        [sym_list] = STATE(36),
        [sym_list_comprehension] = STATE(36),
        [sym_dictionary] = STATE(36),
        [sym_dictionary_comprehension] = STATE(36),
        [sym_set] = STATE(36),
        [aux_sym_call_repeat1] = STATE(145),
        [anon_sym_STAR] = ACTIONS(193),
        [anon_sym_LBRACK] = ACTIONS(117),
        [anon_sym_STAR_STAR] = ACTIONS(195),
        [anon_sym_LBRACE] = ACTIONS(119),
        [sym_number] = ACTIONS(121),
        [sym_identifier] = ACTIONS(197),
        [sym_comment] = ACTIONS(73),
    },
    [31] = {
        [sym__expression] = STATE(140),
        [sym_binary_operator] = STATE(16),
        [sym_subscript] = STATE(16),
        [sym_call] = STATE(16),
        [sym_list] = STATE(16),
        [sym_list_comprehension] = STATE(16),
        [sym_dictionary] = STATE(16),
        [sym_dictionary_comprehension] = STATE(16),
        [sym_set] = STATE(16),
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
        [anon_sym_LBRACK] = ACTIONS(117),
        [anon_sym_DOT_DOT_DOT] = ACTIONS(199),
        [anon_sym_LBRACE] = ACTIONS(119),
        [sym_number] = ACTIONS(121),
        [sym_identifier] = ACTIONS(121),
        [sym_comment] = ACTIONS(73),
    },
    [33] = {
        [sym__expression] = STATE(126),
        [sym_binary_operator] = STATE(36),
        [sym_subscript] = STATE(36),
        [sym_call] = STATE(36),
        [sym_list] = STATE(36),
        [sym_list_comprehension] = STATE(36),
        [sym_dictionary] = STATE(36),
        [sym_dictionary_comprehension] = STATE(36),
        [sym_set] = STATE(36),
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
        [sym_set] = STATE(36),
        [sym_pair] = STATE(96),
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
        [sym__expression] = STATE(139),
        [sym_binary_operator] = STATE(36),
        [sym_subscript] = STATE(36),
        [sym_call] = STATE(36),
        [sym_list] = STATE(36),
        [sym_list_comprehension] = STATE(36),
        [sym_dictionary] = STATE(36),
        [sym_dictionary_comprehension] = STATE(36),
        [sym_set] = STATE(36),
        [anon_sym_LBRACK] = ACTIONS(117),
        [anon_sym_LBRACE] = ACTIONS(119),
        [sym_number] = ACTIONS(121),
        [sym_identifier] = ACTIONS(121),
        [sym_comment] = ACTIONS(73),
    },
    [61] = {
        [sym__expression] = STATE(138),
        [sym_binary_operator] = STATE(36),
        [sym_subscript] = STATE(36),
        [sym_call] = STATE(36),
        [sym_list] = STATE(36),
        [sym_list_comprehension] = STATE(36),
        [sym_dictionary] = STATE(36),
        [sym_dictionary_comprehension] = STATE(36),
        [sym_set] = STATE(36),
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
        [aux_sym_print_statement_repeat1] = STATE(121),
        [anon_sym_COMMA] = ACTIONS(299),
        [anon_sym_COLON] = ACTIONS(301),
        [anon_sym_LPAREN] = ACTIONS(209),
        [anon_sym_PLUS] = ACTIONS(211),
        [anon_sym_LBRACK] = ACTIONS(213),
        [anon_sym_RBRACE] = ACTIONS(303),
        [sym_comment] = ACTIONS(73),
    },
    [96] = {
        [aux_sym_dictionary_repeat1] = STATE(100),
        [anon_sym_COMMA] = ACTIONS(305),
        [anon_sym_for] = ACTIONS(307),
        [anon_sym_RBRACE] = ACTIONS(309),
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
        [sym_set] = STATE(36),
        [sym_pair] = STATE(118),
        [anon_sym_LBRACK] = ACTIONS(117),
        [anon_sym_LBRACE] = ACTIONS(119),
        [anon_sym_RBRACE] = ACTIONS(311),
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
        [anon_sym_LBRACK] = ACTIONS(117),
        [anon_sym_LBRACE] = ACTIONS(119),
        [sym_number] = ACTIONS(121),
        [sym_identifier] = ACTIONS(121),
        [sym_comment] = ACTIONS(73),
    },
    [99] = {
        [anon_sym_COMMA] = ACTIONS(313),
        [anon_sym_COLON] = ACTIONS(313),
        [anon_sym_for] = ACTIONS(313),
        [anon_sym_in] = ACTIONS(313),
        [anon_sym_as] = ACTIONS(313),
        [anon_sym_LPAREN] = ACTIONS(313),
        [anon_sym_RPAREN] = ACTIONS(313),
        [anon_sym_PLUS] = ACTIONS(313),
        [anon_sym_LBRACK] = ACTIONS(313),
        [anon_sym_RBRACK] = ACTIONS(313),
        [anon_sym_RBRACE] = ACTIONS(313),
        [sym_comment] = ACTIONS(73),
    },
    [100] = {
        [anon_sym_COMMA] = ACTIONS(315),
        [anon_sym_RBRACE] = ACTIONS(311),
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
        [sym_set] = STATE(36),
        [sym_pair] = STATE(105),
        [anon_sym_LBRACK] = ACTIONS(117),
        [anon_sym_LBRACE] = ACTIONS(119),
        [anon_sym_RBRACE] = ACTIONS(317),
        [sym_number] = ACTIONS(121),
        [sym_identifier] = ACTIONS(121),
        [sym_comment] = ACTIONS(73),
    },
    [102] = {
        [anon_sym_COMMA] = ACTIONS(319),
        [anon_sym_COLON] = ACTIONS(319),
        [anon_sym_for] = ACTIONS(319),
        [anon_sym_in] = ACTIONS(319),
        [anon_sym_as] = ACTIONS(319),
        [anon_sym_LPAREN] = ACTIONS(319),
        [anon_sym_RPAREN] = ACTIONS(319),
        [anon_sym_PLUS] = ACTIONS(319),
        [anon_sym_LBRACK] = ACTIONS(319),
        [anon_sym_RBRACK] = ACTIONS(319),
        [anon_sym_RBRACE] = ACTIONS(319),
        [sym_comment] = ACTIONS(73),
    },
    [103] = {
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
    [104] = {
        [anon_sym_COLON] = ACTIONS(301),
        [anon_sym_LPAREN] = ACTIONS(209),
        [anon_sym_PLUS] = ACTIONS(211),
        [anon_sym_LBRACK] = ACTIONS(213),
        [sym_comment] = ACTIONS(73),
    },
    [105] = {
        [anon_sym_COMMA] = ACTIONS(323),
        [anon_sym_RBRACE] = ACTIONS(323),
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
        [anon_sym_LBRACK] = ACTIONS(117),
        [anon_sym_LBRACE] = ACTIONS(119),
        [sym_number] = ACTIONS(121),
        [sym_identifier] = ACTIONS(121),
        [sym_comment] = ACTIONS(73),
    },
    [107] = {
        [anon_sym_COMMA] = ACTIONS(325),
        [anon_sym_for] = ACTIONS(325),
        [anon_sym_LPAREN] = ACTIONS(209),
        [anon_sym_PLUS] = ACTIONS(211),
        [anon_sym_LBRACK] = ACTIONS(213),
        [anon_sym_RBRACE] = ACTIONS(325),
        [sym_comment] = ACTIONS(73),
    },
    [108] = {
        [anon_sym_in] = ACTIONS(327),
        [sym_comment] = ACTIONS(73),
    },
    [109] = {
        [aux_sym_print_statement_repeat1] = STATE(111),
        [anon_sym_COMMA] = ACTIONS(329),
        [anon_sym_COLON] = ACTIONS(331),
        [anon_sym_in] = ACTIONS(331),
        [anon_sym_LPAREN] = ACTIONS(209),
        [anon_sym_RPAREN] = ACTIONS(331),
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
        [anon_sym_LBRACK] = ACTIONS(117),
        [anon_sym_LBRACE] = ACTIONS(119),
        [sym_number] = ACTIONS(121),
        [sym_identifier] = ACTIONS(121),
        [sym_comment] = ACTIONS(73),
    },
    [111] = {
        [anon_sym_COMMA] = ACTIONS(333),
        [anon_sym_COLON] = ACTIONS(335),
        [anon_sym_in] = ACTIONS(335),
        [anon_sym_RPAREN] = ACTIONS(335),
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
        [anon_sym_LBRACK] = ACTIONS(117),
        [anon_sym_LBRACE] = ACTIONS(119),
        [sym_number] = ACTIONS(121),
        [sym_identifier] = ACTIONS(121),
        [sym_comment] = ACTIONS(73),
    },
    [113] = {
        [anon_sym_COMMA] = ACTIONS(337),
        [anon_sym_COLON] = ACTIONS(337),
        [anon_sym_in] = ACTIONS(337),
        [anon_sym_LPAREN] = ACTIONS(209),
        [anon_sym_RPAREN] = ACTIONS(337),
        [anon_sym_PLUS] = ACTIONS(211),
        [anon_sym_LBRACK] = ACTIONS(213),
        [anon_sym_RBRACK] = ACTIONS(337),
        [anon_sym_RBRACE] = ACTIONS(337),
        [sym_comment] = ACTIONS(73),
    },
    [114] = {
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
        [anon_sym_RBRACE] = ACTIONS(341),
        [sym_comment] = ACTIONS(73),
    },
    [117] = {
        [anon_sym_COMMA] = ACTIONS(343),
        [anon_sym_COLON] = ACTIONS(343),
        [anon_sym_for] = ACTIONS(343),
        [anon_sym_in] = ACTIONS(343),
        [anon_sym_as] = ACTIONS(343),
        [anon_sym_LPAREN] = ACTIONS(343),
        [anon_sym_RPAREN] = ACTIONS(343),
        [anon_sym_PLUS] = ACTIONS(343),
        [anon_sym_LBRACK] = ACTIONS(343),
        [anon_sym_RBRACK] = ACTIONS(343),
        [anon_sym_RBRACE] = ACTIONS(343),
        [sym_comment] = ACTIONS(73),
    },
    [118] = {
        [anon_sym_COMMA] = ACTIONS(345),
        [anon_sym_RBRACE] = ACTIONS(345),
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
        [anon_sym_LBRACK] = ACTIONS(117),
        [anon_sym_LBRACE] = ACTIONS(119),
        [anon_sym_RBRACE] = ACTIONS(347),
        [sym_number] = ACTIONS(121),
        [sym_identifier] = ACTIONS(121),
        [sym_comment] = ACTIONS(73),
    },
    [120] = {
        [anon_sym_COMMA] = ACTIONS(349),
        [anon_sym_COLON] = ACTIONS(349),
        [anon_sym_for] = ACTIONS(349),
        [anon_sym_in] = ACTIONS(349),
        [anon_sym_as] = ACTIONS(349),
        [anon_sym_LPAREN] = ACTIONS(349),
        [anon_sym_RPAREN] = ACTIONS(349),
        [anon_sym_PLUS] = ACTIONS(349),
        [anon_sym_LBRACK] = ACTIONS(349),
        [anon_sym_RBRACK] = ACTIONS(349),
        [anon_sym_RBRACE] = ACTIONS(349),
        [sym_comment] = ACTIONS(73),
    },
    [121] = {
        [anon_sym_COMMA] = ACTIONS(351),
        [anon_sym_RBRACE] = ACTIONS(347),
        [sym_comment] = ACTIONS(73),
    },
    [122] = {
        [sym__expression] = STATE(113),
        [sym_binary_operator] = STATE(36),
        [sym_subscript] = STATE(36),
        [sym_call] = STATE(36),
        [sym_list] = STATE(36),
        [sym_list_comprehension] = STATE(36),
        [sym_dictionary] = STATE(36),
        [sym_dictionary_comprehension] = STATE(36),
        [sym_set] = STATE(36),
        [anon_sym_LBRACK] = ACTIONS(117),
        [anon_sym_LBRACE] = ACTIONS(119),
        [anon_sym_RBRACE] = ACTIONS(353),
        [sym_number] = ACTIONS(121),
        [sym_identifier] = ACTIONS(121),
        [sym_comment] = ACTIONS(73),
    },
    [123] = {
        [anon_sym_COMMA] = ACTIONS(355),
        [anon_sym_COLON] = ACTIONS(355),
        [anon_sym_for] = ACTIONS(355),
        [anon_sym_in] = ACTIONS(355),
        [anon_sym_as] = ACTIONS(355),
        [anon_sym_LPAREN] = ACTIONS(355),
        [anon_sym_RPAREN] = ACTIONS(355),
        [anon_sym_PLUS] = ACTIONS(355),
        [anon_sym_LBRACK] = ACTIONS(355),
        [anon_sym_RBRACK] = ACTIONS(355),
        [anon_sym_RBRACE] = ACTIONS(355),
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
        [aux_sym_print_statement_repeat1] = STATE(130),
        [anon_sym_COMMA] = ACTIONS(361),
        [anon_sym_for] = ACTIONS(363),
        [anon_sym_LPAREN] = ACTIONS(209),
        [anon_sym_PLUS] = ACTIONS(211),
        [anon_sym_LBRACK] = ACTIONS(213),
        [anon_sym_RBRACK] = ACTIONS(365),
        [sym_comment] = ACTIONS(73),
    },
    [127] = {
        [sym__expression] = STATE(114),
        [sym_binary_operator] = STATE(36),
        [sym_subscript] = STATE(36),
        [sym_call] = STATE(36),
        [sym_list] = STATE(36),
        [sym_list_comprehension] = STATE(36),
        [sym_dictionary] = STATE(36),
        [sym_dictionary_comprehension] = STATE(36),
        [sym_set] = STATE(36),
        [anon_sym_LBRACK] = ACTIONS(117),
        [anon_sym_RBRACK] = ACTIONS(367),
        [anon_sym_LBRACE] = ACTIONS(119),
        [sym_number] = ACTIONS(121),
        [sym_identifier] = ACTIONS(121),
        [sym_comment] = ACTIONS(73),
    },
    [128] = {
        [sym_expression_list] = STATE(134),
        [sym__expression] = STATE(109),
        [sym_binary_operator] = STATE(36),
        [sym_subscript] = STATE(36),
        [sym_call] = STATE(36),
        [sym_list] = STATE(36),
        [sym_list_comprehension] = STATE(36),
        [sym_dictionary] = STATE(36),
        [sym_dictionary_comprehension] = STATE(36),
        [sym_set] = STATE(36),
        [anon_sym_LBRACK] = ACTIONS(117),
        [anon_sym_LBRACE] = ACTIONS(119),
        [sym_number] = ACTIONS(121),
        [sym_identifier] = ACTIONS(121),
        [sym_comment] = ACTIONS(73),
    },
    [129] = {
        [anon_sym_COMMA] = ACTIONS(369),
        [anon_sym_COLON] = ACTIONS(369),
        [anon_sym_for] = ACTIONS(369),
        [anon_sym_in] = ACTIONS(369),
        [anon_sym_as] = ACTIONS(369),
        [anon_sym_LPAREN] = ACTIONS(369),
        [anon_sym_RPAREN] = ACTIONS(369),
        [anon_sym_PLUS] = ACTIONS(369),
        [anon_sym_LBRACK] = ACTIONS(369),
        [anon_sym_RBRACK] = ACTIONS(369),
        [anon_sym_RBRACE] = ACTIONS(369),
        [sym_comment] = ACTIONS(73),
    },
    [130] = {
        [anon_sym_COMMA] = ACTIONS(371),
        [anon_sym_RBRACK] = ACTIONS(367),
        [sym_comment] = ACTIONS(73),
    },
    [131] = {
        [sym__expression] = STATE(113),
        [sym_binary_operator] = STATE(36),
        [sym_subscript] = STATE(36),
        [sym_call] = STATE(36),
        [sym_list] = STATE(36),
        [sym_list_comprehension] = STATE(36),
        [sym_dictionary] = STATE(36),
        [sym_dictionary_comprehension] = STATE(36),
        [sym_set] = STATE(36),
        [anon_sym_LBRACK] = ACTIONS(117),
        [anon_sym_RBRACK] = ACTIONS(373),
        [anon_sym_LBRACE] = ACTIONS(119),
        [sym_number] = ACTIONS(121),
        [sym_identifier] = ACTIONS(121),
        [sym_comment] = ACTIONS(73),
    },
    [132] = {
        [anon_sym_COMMA] = ACTIONS(375),
        [anon_sym_COLON] = ACTIONS(375),
        [anon_sym_for] = ACTIONS(375),
        [anon_sym_in] = ACTIONS(375),
        [anon_sym_as] = ACTIONS(375),
        [anon_sym_LPAREN] = ACTIONS(375),
        [anon_sym_RPAREN] = ACTIONS(375),
        [anon_sym_PLUS] = ACTIONS(375),
        [anon_sym_LBRACK] = ACTIONS(375),
        [anon_sym_RBRACK] = ACTIONS(375),
        [anon_sym_RBRACE] = ACTIONS(375),
        [sym_comment] = ACTIONS(73),
    },
    [133] = {
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
    [134] = {
        [anon_sym_in] = ACTIONS(379),
        [sym_comment] = ACTIONS(73),
    },
    [135] = {
        [sym__expression] = STATE(136),
        [sym_binary_operator] = STATE(36),
        [sym_subscript] = STATE(36),
        [sym_call] = STATE(36),
        [sym_list] = STATE(36),
        [sym_list_comprehension] = STATE(36),
        [sym_dictionary] = STATE(36),
        [sym_dictionary_comprehension] = STATE(36),
        [sym_set] = STATE(36),
        [anon_sym_LBRACK] = ACTIONS(117),
        [anon_sym_LBRACE] = ACTIONS(119),
        [sym_number] = ACTIONS(121),
        [sym_identifier] = ACTIONS(121),
        [sym_comment] = ACTIONS(73),
    },
    [136] = {
        [anon_sym_LPAREN] = ACTIONS(209),
        [anon_sym_PLUS] = ACTIONS(211),
        [anon_sym_LBRACK] = ACTIONS(213),
        [anon_sym_RBRACK] = ACTIONS(381),
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
        [anon_sym_LPAREN] = ACTIONS(209),
        [anon_sym_RPAREN] = ACTIONS(385),
        [anon_sym_PLUS] = ACTIONS(211),
        [anon_sym_LBRACK] = ACTIONS(213),
        [sym_comment] = ACTIONS(73),
    },
    [139] = {
        [anon_sym_COMMA] = ACTIONS(387),
        [anon_sym_LPAREN] = ACTIONS(209),
        [anon_sym_RPAREN] = ACTIONS(387),
        [anon_sym_PLUS] = ACTIONS(211),
        [anon_sym_LBRACK] = ACTIONS(213),
        [sym_comment] = ACTIONS(73),
    },
    [140] = {
        [anon_sym_COMMA] = ACTIONS(247),
        [anon_sym_LPAREN] = ACTIONS(247),
        [anon_sym_PLUS] = ACTIONS(247),
        [anon_sym_LBRACK] = ACTIONS(247),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(247),
    },
    [141] = {
        [anon_sym_COMMA] = ACTIONS(389),
        [anon_sym_LPAREN] = ACTIONS(209),
        [anon_sym_RPAREN] = ACTIONS(391),
        [anon_sym_PLUS] = ACTIONS(211),
        [anon_sym_LBRACK] = ACTIONS(213),
        [sym_comment] = ACTIONS(73),
    },
    [142] = {
        [anon_sym_COMMA] = ACTIONS(389),
        [anon_sym_RPAREN] = ACTIONS(391),
        [sym_comment] = ACTIONS(73),
    },
    [143] = {
        [aux_sym_call_repeat2] = STATE(162),
        [anon_sym_COMMA] = ACTIONS(393),
        [anon_sym_RPAREN] = ACTIONS(391),
        [sym_comment] = ACTIONS(73),
    },
    [144] = {
        [anon_sym_RPAREN] = ACTIONS(391),
        [sym_comment] = ACTIONS(73),
    },
    [145] = {
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
        [anon_sym_STAR] = ACTIONS(193),
        [anon_sym_LBRACK] = ACTIONS(117),
        [anon_sym_STAR_STAR] = ACTIONS(195),
        [anon_sym_LBRACE] = ACTIONS(119),
        [sym_number] = ACTIONS(121),
        [sym_identifier] = ACTIONS(197),
        [sym_comment] = ACTIONS(73),
    },
    [146] = {
        [anon_sym_COMMA] = ACTIONS(395),
        [anon_sym_LPAREN] = ACTIONS(209),
        [anon_sym_RPAREN] = ACTIONS(397),
        [anon_sym_PLUS] = ACTIONS(211),
        [anon_sym_LBRACK] = ACTIONS(213),
        [sym_comment] = ACTIONS(73),
    },
    [147] = {
        [anon_sym_COMMA] = ACTIONS(395),
        [anon_sym_RPAREN] = ACTIONS(397),
        [sym_comment] = ACTIONS(73),
    },
    [148] = {
        [aux_sym_call_repeat2] = STATE(152),
        [anon_sym_COMMA] = ACTIONS(399),
        [anon_sym_RPAREN] = ACTIONS(397),
        [sym_comment] = ACTIONS(73),
    },
    [149] = {
        [anon_sym_RPAREN] = ACTIONS(397),
        [sym_comment] = ACTIONS(73),
    },
    [150] = {
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
    [151] = {
        [sym__expression] = STATE(81),
        [sym_binary_operator] = STATE(36),
        [sym_subscript] = STATE(36),
        [sym_call] = STATE(36),
        [sym_keyword_argument] = STATE(82),
        [sym_dictionary_splat_argument] = STATE(157),
        [sym_list] = STATE(36),
        [sym_list_comprehension] = STATE(36),
        [sym_dictionary] = STATE(36),
        [sym_dictionary_comprehension] = STATE(36),
        [sym_set] = STATE(36),
        [anon_sym_LBRACK] = ACTIONS(117),
        [anon_sym_STAR_STAR] = ACTIONS(195),
        [anon_sym_LBRACE] = ACTIONS(119),
        [sym_number] = ACTIONS(121),
        [sym_identifier] = ACTIONS(197),
        [sym_comment] = ACTIONS(73),
    },
    [152] = {
        [anon_sym_COMMA] = ACTIONS(401),
        [anon_sym_RPAREN] = ACTIONS(403),
        [sym_comment] = ACTIONS(73),
    },
    [153] = {
        [sym__expression] = STATE(77),
        [sym_binary_operator] = STATE(36),
        [sym_subscript] = STATE(36),
        [sym_call] = STATE(36),
        [sym_keyword_argument] = STATE(78),
        [sym_dictionary_splat_argument] = STATE(155),
        [sym_list] = STATE(36),
        [sym_list_comprehension] = STATE(36),
        [sym_dictionary] = STATE(36),
        [sym_dictionary_comprehension] = STATE(36),
        [sym_set] = STATE(36),
        [anon_sym_LBRACK] = ACTIONS(117),
        [anon_sym_STAR_STAR] = ACTIONS(195),
        [anon_sym_LBRACE] = ACTIONS(119),
        [sym_number] = ACTIONS(121),
        [sym_identifier] = ACTIONS(197),
        [sym_comment] = ACTIONS(73),
    },
    [154] = {
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
    [155] = {
        [anon_sym_RPAREN] = ACTIONS(405),
        [sym_comment] = ACTIONS(73),
    },
    [156] = {
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
    [157] = {
        [anon_sym_RPAREN] = ACTIONS(407),
        [sym_comment] = ACTIONS(73),
    },
    [158] = {
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
    [159] = {
        [anon_sym_RPAREN] = ACTIONS(403),
        [anon_sym_STAR] = ACTIONS(283),
        [anon_sym_LBRACK] = ACTIONS(285),
        [anon_sym_STAR_STAR] = ACTIONS(285),
        [anon_sym_LBRACE] = ACTIONS(285),
        [sym_number] = ACTIONS(283),
        [sym_identifier] = ACTIONS(283),
        [sym_comment] = ACTIONS(73),
    },
    [160] = {
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
    [161] = {
        [sym__expression] = STATE(81),
        [sym_binary_operator] = STATE(36),
        [sym_subscript] = STATE(36),
        [sym_call] = STATE(36),
        [sym_keyword_argument] = STATE(82),
        [sym_dictionary_splat_argument] = STATE(164),
        [sym_list] = STATE(36),
        [sym_list_comprehension] = STATE(36),
        [sym_dictionary] = STATE(36),
        [sym_dictionary_comprehension] = STATE(36),
        [sym_set] = STATE(36),
        [anon_sym_LBRACK] = ACTIONS(117),
        [anon_sym_STAR_STAR] = ACTIONS(195),
        [anon_sym_LBRACE] = ACTIONS(119),
        [sym_number] = ACTIONS(121),
        [sym_identifier] = ACTIONS(197),
        [sym_comment] = ACTIONS(73),
    },
    [162] = {
        [anon_sym_COMMA] = ACTIONS(409),
        [anon_sym_RPAREN] = ACTIONS(397),
        [sym_comment] = ACTIONS(73),
    },
    [163] = {
        [sym__expression] = STATE(77),
        [sym_binary_operator] = STATE(36),
        [sym_subscript] = STATE(36),
        [sym_call] = STATE(36),
        [sym_keyword_argument] = STATE(78),
        [sym_dictionary_splat_argument] = STATE(157),
        [sym_list] = STATE(36),
        [sym_list_comprehension] = STATE(36),
        [sym_dictionary] = STATE(36),
        [sym_dictionary_comprehension] = STATE(36),
        [sym_set] = STATE(36),
        [anon_sym_LBRACK] = ACTIONS(117),
        [anon_sym_STAR_STAR] = ACTIONS(195),
        [anon_sym_LBRACE] = ACTIONS(119),
        [sym_number] = ACTIONS(121),
        [sym_identifier] = ACTIONS(197),
        [sym_comment] = ACTIONS(73),
    },
    [164] = {
        [anon_sym_RPAREN] = ACTIONS(403),
        [sym_comment] = ACTIONS(73),
    },
    [165] = {
        [anon_sym_RPAREN] = ACTIONS(397),
        [anon_sym_STAR] = ACTIONS(291),
        [anon_sym_LBRACK] = ACTIONS(293),
        [anon_sym_STAR_STAR] = ACTIONS(293),
        [anon_sym_LBRACE] = ACTIONS(293),
        [sym_number] = ACTIONS(291),
        [sym_identifier] = ACTIONS(291),
        [sym_comment] = ACTIONS(73),
    },
    [166] = {
        [ts_builtin_sym_end] = ACTIONS(411),
        [anon_sym_SEMI] = ACTIONS(411),
        [anon_sym_print] = ACTIONS(413),
        [anon_sym_return] = ACTIONS(413),
        [anon_sym_del] = ACTIONS(413),
        [sym_pass_statement] = ACTIONS(413),
        [sym_break_statement] = ACTIONS(413),
        [sym_continue_statement] = ACTIONS(413),
        [anon_sym_if] = ACTIONS(413),
        [anon_sym_for] = ACTIONS(413),
        [anon_sym_while] = ACTIONS(413),
        [anon_sym_try] = ACTIONS(413),
        [anon_sym_with] = ACTIONS(413),
        [anon_sym_def] = ACTIONS(413),
        [anon_sym_class] = ACTIONS(413),
        [anon_sym_AT] = ACTIONS(411),
        [anon_sym_LBRACK] = ACTIONS(411),
        [anon_sym_LBRACE] = ACTIONS(411),
        [sym_number] = ACTIONS(413),
        [sym_identifier] = ACTIONS(415),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(411),
    },
    [167] = {
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
    [168] = {
        [aux_sym_print_statement_repeat1] = STATE(183),
        [anon_sym_COMMA] = ACTIONS(417),
        [anon_sym_COLON] = ACTIONS(301),
        [anon_sym_LPAREN] = ACTIONS(209),
        [anon_sym_PLUS] = ACTIONS(211),
        [anon_sym_LBRACK] = ACTIONS(213),
        [anon_sym_RBRACE] = ACTIONS(419),
        [sym_comment] = ACTIONS(73),
    },
    [169] = {
        [aux_sym_dictionary_repeat1] = STATE(173),
        [anon_sym_COMMA] = ACTIONS(421),
        [anon_sym_for] = ACTIONS(423),
        [anon_sym_RBRACE] = ACTIONS(425),
        [sym_comment] = ACTIONS(73),
    },
    [170] = {
        [sym__expression] = STATE(104),
        [sym_binary_operator] = STATE(36),
        [sym_subscript] = STATE(36),
        [sym_call] = STATE(36),
        [sym_list] = STATE(36),
        [sym_list_comprehension] = STATE(36),
        [sym_dictionary] = STATE(36),
        [sym_dictionary_comprehension] = STATE(36),
        [sym_set] = STATE(36),
        [sym_pair] = STATE(118),
        [anon_sym_LBRACK] = ACTIONS(117),
        [anon_sym_LBRACE] = ACTIONS(119),
        [anon_sym_RBRACE] = ACTIONS(427),
        [sym_number] = ACTIONS(121),
        [sym_identifier] = ACTIONS(121),
        [sym_comment] = ACTIONS(73),
    },
    [171] = {
        [sym_expression_list] = STATE(177),
        [sym__expression] = STATE(109),
        [sym_binary_operator] = STATE(36),
        [sym_subscript] = STATE(36),
        [sym_call] = STATE(36),
        [sym_list] = STATE(36),
        [sym_list_comprehension] = STATE(36),
        [sym_dictionary] = STATE(36),
        [sym_dictionary_comprehension] = STATE(36),
        [sym_set] = STATE(36),
        [anon_sym_LBRACK] = ACTIONS(117),
        [anon_sym_LBRACE] = ACTIONS(119),
        [sym_number] = ACTIONS(121),
        [sym_identifier] = ACTIONS(121),
        [sym_comment] = ACTIONS(73),
    },
    [172] = {
        [anon_sym_COMMA] = ACTIONS(313),
        [anon_sym_COLON] = ACTIONS(313),
        [anon_sym_for] = ACTIONS(313),
        [anon_sym_in] = ACTIONS(313),
        [anon_sym_as] = ACTIONS(313),
        [anon_sym_LPAREN] = ACTIONS(313),
        [anon_sym_RPAREN] = ACTIONS(313),
        [anon_sym_PLUS] = ACTIONS(313),
        [anon_sym_LBRACK] = ACTIONS(313),
        [anon_sym_RBRACK] = ACTIONS(313),
        [anon_sym_RBRACE] = ACTIONS(313),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(313),
    },
    [173] = {
        [anon_sym_COMMA] = ACTIONS(429),
        [anon_sym_RBRACE] = ACTIONS(427),
        [sym_comment] = ACTIONS(73),
    },
    [174] = {
        [sym__expression] = STATE(104),
        [sym_binary_operator] = STATE(36),
        [sym_subscript] = STATE(36),
        [sym_call] = STATE(36),
        [sym_list] = STATE(36),
        [sym_list_comprehension] = STATE(36),
        [sym_dictionary] = STATE(36),
        [sym_dictionary_comprehension] = STATE(36),
        [sym_set] = STATE(36),
        [sym_pair] = STATE(105),
        [anon_sym_LBRACK] = ACTIONS(117),
        [anon_sym_LBRACE] = ACTIONS(119),
        [anon_sym_RBRACE] = ACTIONS(431),
        [sym_number] = ACTIONS(121),
        [sym_identifier] = ACTIONS(121),
        [sym_comment] = ACTIONS(73),
    },
    [175] = {
        [anon_sym_COMMA] = ACTIONS(319),
        [anon_sym_COLON] = ACTIONS(319),
        [anon_sym_for] = ACTIONS(319),
        [anon_sym_in] = ACTIONS(319),
        [anon_sym_as] = ACTIONS(319),
        [anon_sym_LPAREN] = ACTIONS(319),
        [anon_sym_RPAREN] = ACTIONS(319),
        [anon_sym_PLUS] = ACTIONS(319),
        [anon_sym_LBRACK] = ACTIONS(319),
        [anon_sym_RBRACK] = ACTIONS(319),
        [anon_sym_RBRACE] = ACTIONS(319),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(319),
    },
    [176] = {
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
    [177] = {
        [anon_sym_in] = ACTIONS(433),
        [sym_comment] = ACTIONS(73),
    },
    [178] = {
        [sym__expression] = STATE(179),
        [sym_binary_operator] = STATE(36),
        [sym_subscript] = STATE(36),
        [sym_call] = STATE(36),
        [sym_list] = STATE(36),
        [sym_list_comprehension] = STATE(36),
        [sym_dictionary] = STATE(36),
        [sym_dictionary_comprehension] = STATE(36),
        [sym_set] = STATE(36),
        [anon_sym_LBRACK] = ACTIONS(117),
        [anon_sym_LBRACE] = ACTIONS(119),
        [sym_number] = ACTIONS(121),
        [sym_identifier] = ACTIONS(121),
        [sym_comment] = ACTIONS(73),
    },
    [179] = {
        [anon_sym_LPAREN] = ACTIONS(209),
        [anon_sym_PLUS] = ACTIONS(211),
        [anon_sym_LBRACK] = ACTIONS(213),
        [anon_sym_RBRACE] = ACTIONS(435),
        [sym_comment] = ACTIONS(73),
    },
    [180] = {
        [anon_sym_COMMA] = ACTIONS(343),
        [anon_sym_COLON] = ACTIONS(343),
        [anon_sym_for] = ACTIONS(343),
        [anon_sym_in] = ACTIONS(343),
        [anon_sym_as] = ACTIONS(343),
        [anon_sym_LPAREN] = ACTIONS(343),
        [anon_sym_RPAREN] = ACTIONS(343),
        [anon_sym_PLUS] = ACTIONS(343),
        [anon_sym_LBRACK] = ACTIONS(343),
        [anon_sym_RBRACK] = ACTIONS(343),
        [anon_sym_RBRACE] = ACTIONS(343),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(343),
    },
    [181] = {
        [sym__expression] = STATE(114),
        [sym_binary_operator] = STATE(36),
        [sym_subscript] = STATE(36),
        [sym_call] = STATE(36),
        [sym_list] = STATE(36),
        [sym_list_comprehension] = STATE(36),
        [sym_dictionary] = STATE(36),
        [sym_dictionary_comprehension] = STATE(36),
        [sym_set] = STATE(36),
        [anon_sym_LBRACK] = ACTIONS(117),
        [anon_sym_LBRACE] = ACTIONS(119),
        [anon_sym_RBRACE] = ACTIONS(437),
        [sym_number] = ACTIONS(121),
        [sym_identifier] = ACTIONS(121),
        [sym_comment] = ACTIONS(73),
    },
    [182] = {
        [anon_sym_COMMA] = ACTIONS(349),
        [anon_sym_COLON] = ACTIONS(349),
        [anon_sym_for] = ACTIONS(349),
        [anon_sym_in] = ACTIONS(349),
        [anon_sym_as] = ACTIONS(349),
        [anon_sym_LPAREN] = ACTIONS(349),
        [anon_sym_RPAREN] = ACTIONS(349),
        [anon_sym_PLUS] = ACTIONS(349),
        [anon_sym_LBRACK] = ACTIONS(349),
        [anon_sym_RBRACK] = ACTIONS(349),
        [anon_sym_RBRACE] = ACTIONS(349),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(349),
    },
    [183] = {
        [anon_sym_COMMA] = ACTIONS(439),
        [anon_sym_RBRACE] = ACTIONS(437),
        [sym_comment] = ACTIONS(73),
    },
    [184] = {
        [sym__expression] = STATE(113),
        [sym_binary_operator] = STATE(36),
        [sym_subscript] = STATE(36),
        [sym_call] = STATE(36),
        [sym_list] = STATE(36),
        [sym_list_comprehension] = STATE(36),
        [sym_dictionary] = STATE(36),
        [sym_dictionary_comprehension] = STATE(36),
        [sym_set] = STATE(36),
        [anon_sym_LBRACK] = ACTIONS(117),
        [anon_sym_LBRACE] = ACTIONS(119),
        [anon_sym_RBRACE] = ACTIONS(441),
        [sym_number] = ACTIONS(121),
        [sym_identifier] = ACTIONS(121),
        [sym_comment] = ACTIONS(73),
    },
    [185] = {
        [anon_sym_COMMA] = ACTIONS(355),
        [anon_sym_COLON] = ACTIONS(355),
        [anon_sym_for] = ACTIONS(355),
        [anon_sym_in] = ACTIONS(355),
        [anon_sym_as] = ACTIONS(355),
        [anon_sym_LPAREN] = ACTIONS(355),
        [anon_sym_RPAREN] = ACTIONS(355),
        [anon_sym_PLUS] = ACTIONS(355),
        [anon_sym_LBRACK] = ACTIONS(355),
        [anon_sym_RBRACK] = ACTIONS(355),
        [anon_sym_RBRACE] = ACTIONS(355),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(355),
    },
    [186] = {
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
    [187] = {
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
    [188] = {
        [aux_sym_print_statement_repeat1] = STATE(192),
        [anon_sym_COMMA] = ACTIONS(443),
        [anon_sym_for] = ACTIONS(445),
        [anon_sym_LPAREN] = ACTIONS(209),
        [anon_sym_PLUS] = ACTIONS(211),
        [anon_sym_LBRACK] = ACTIONS(213),
        [anon_sym_RBRACK] = ACTIONS(447),
        [sym_comment] = ACTIONS(73),
    },
    [189] = {
        [sym__expression] = STATE(114),
        [sym_binary_operator] = STATE(36),
        [sym_subscript] = STATE(36),
        [sym_call] = STATE(36),
        [sym_list] = STATE(36),
        [sym_list_comprehension] = STATE(36),
        [sym_dictionary] = STATE(36),
        [sym_dictionary_comprehension] = STATE(36),
        [sym_set] = STATE(36),
        [anon_sym_LBRACK] = ACTIONS(117),
        [anon_sym_RBRACK] = ACTIONS(449),
        [anon_sym_LBRACE] = ACTIONS(119),
        [sym_number] = ACTIONS(121),
        [sym_identifier] = ACTIONS(121),
        [sym_comment] = ACTIONS(73),
    },
    [190] = {
        [sym_expression_list] = STATE(196),
        [sym__expression] = STATE(109),
        [sym_binary_operator] = STATE(36),
        [sym_subscript] = STATE(36),
        [sym_call] = STATE(36),
        [sym_list] = STATE(36),
        [sym_list_comprehension] = STATE(36),
        [sym_dictionary] = STATE(36),
        [sym_dictionary_comprehension] = STATE(36),
        [sym_set] = STATE(36),
        [anon_sym_LBRACK] = ACTIONS(117),
        [anon_sym_LBRACE] = ACTIONS(119),
        [sym_number] = ACTIONS(121),
        [sym_identifier] = ACTIONS(121),
        [sym_comment] = ACTIONS(73),
    },
    [191] = {
        [anon_sym_COMMA] = ACTIONS(369),
        [anon_sym_COLON] = ACTIONS(369),
        [anon_sym_for] = ACTIONS(369),
        [anon_sym_in] = ACTIONS(369),
        [anon_sym_as] = ACTIONS(369),
        [anon_sym_LPAREN] = ACTIONS(369),
        [anon_sym_RPAREN] = ACTIONS(369),
        [anon_sym_PLUS] = ACTIONS(369),
        [anon_sym_LBRACK] = ACTIONS(369),
        [anon_sym_RBRACK] = ACTIONS(369),
        [anon_sym_RBRACE] = ACTIONS(369),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(369),
    },
    [192] = {
        [anon_sym_COMMA] = ACTIONS(451),
        [anon_sym_RBRACK] = ACTIONS(449),
        [sym_comment] = ACTIONS(73),
    },
    [193] = {
        [sym__expression] = STATE(113),
        [sym_binary_operator] = STATE(36),
        [sym_subscript] = STATE(36),
        [sym_call] = STATE(36),
        [sym_list] = STATE(36),
        [sym_list_comprehension] = STATE(36),
        [sym_dictionary] = STATE(36),
        [sym_dictionary_comprehension] = STATE(36),
        [sym_set] = STATE(36),
        [anon_sym_LBRACK] = ACTIONS(117),
        [anon_sym_RBRACK] = ACTIONS(453),
        [anon_sym_LBRACE] = ACTIONS(119),
        [sym_number] = ACTIONS(121),
        [sym_identifier] = ACTIONS(121),
        [sym_comment] = ACTIONS(73),
    },
    [194] = {
        [anon_sym_COMMA] = ACTIONS(375),
        [anon_sym_COLON] = ACTIONS(375),
        [anon_sym_for] = ACTIONS(375),
        [anon_sym_in] = ACTIONS(375),
        [anon_sym_as] = ACTIONS(375),
        [anon_sym_LPAREN] = ACTIONS(375),
        [anon_sym_RPAREN] = ACTIONS(375),
        [anon_sym_PLUS] = ACTIONS(375),
        [anon_sym_LBRACK] = ACTIONS(375),
        [anon_sym_RBRACK] = ACTIONS(375),
        [anon_sym_RBRACE] = ACTIONS(375),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(375),
    },
    [195] = {
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
    [196] = {
        [anon_sym_in] = ACTIONS(455),
        [sym_comment] = ACTIONS(73),
    },
    [197] = {
        [sym__expression] = STATE(198),
        [sym_binary_operator] = STATE(36),
        [sym_subscript] = STATE(36),
        [sym_call] = STATE(36),
        [sym_list] = STATE(36),
        [sym_list_comprehension] = STATE(36),
        [sym_dictionary] = STATE(36),
        [sym_dictionary_comprehension] = STATE(36),
        [sym_set] = STATE(36),
        [anon_sym_LBRACK] = ACTIONS(117),
        [anon_sym_LBRACE] = ACTIONS(119),
        [sym_number] = ACTIONS(121),
        [sym_identifier] = ACTIONS(121),
        [sym_comment] = ACTIONS(73),
    },
    [198] = {
        [anon_sym_LPAREN] = ACTIONS(209),
        [anon_sym_PLUS] = ACTIONS(211),
        [anon_sym_LBRACK] = ACTIONS(213),
        [anon_sym_RBRACK] = ACTIONS(457),
        [sym_comment] = ACTIONS(73),
    },
    [199] = {
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
    [200] = {
        [aux_sym_dotted_name_repeat1] = STATE(211),
        [anon_sym_LPAREN] = ACTIONS(459),
        [anon_sym_DOT] = ACTIONS(461),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(459),
    },
    [201] = {
        [sym_arguments] = STATE(204),
        [anon_sym_LPAREN] = ACTIONS(463),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(465),
    },
    [202] = {
        [sym__expression] = STATE(206),
        [sym_binary_operator] = STATE(36),
        [sym_subscript] = STATE(36),
        [sym_call] = STATE(36),
        [sym_list] = STATE(36),
        [sym_list_comprehension] = STATE(36),
        [sym_dictionary] = STATE(36),
        [sym_dictionary_comprehension] = STATE(36),
        [sym_set] = STATE(36),
        [anon_sym_LBRACK] = ACTIONS(117),
        [anon_sym_LBRACE] = ACTIONS(119),
        [sym_number] = ACTIONS(121),
        [sym_identifier] = ACTIONS(121),
        [sym_comment] = ACTIONS(73),
    },
    [203] = {
        [anon_sym_def] = ACTIONS(467),
        [anon_sym_class] = ACTIONS(467),
        [anon_sym_AT] = ACTIONS(467),
        [sym_comment] = ACTIONS(73),
    },
    [204] = {
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(469),
    },
    [205] = {
        [anon_sym_def] = ACTIONS(471),
        [anon_sym_class] = ACTIONS(471),
        [anon_sym_AT] = ACTIONS(471),
        [sym_comment] = ACTIONS(73),
    },
    [206] = {
        [aux_sym_print_statement_repeat1] = STATE(208),
        [anon_sym_COMMA] = ACTIONS(329),
        [anon_sym_LPAREN] = ACTIONS(209),
        [anon_sym_RPAREN] = ACTIONS(473),
        [anon_sym_PLUS] = ACTIONS(211),
        [anon_sym_LBRACK] = ACTIONS(213),
        [sym_comment] = ACTIONS(73),
    },
    [207] = {
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(475),
    },
    [208] = {
        [anon_sym_COMMA] = ACTIONS(333),
        [anon_sym_RPAREN] = ACTIONS(477),
        [sym_comment] = ACTIONS(73),
    },
    [209] = {
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(479),
    },
    [210] = {
        [sym_identifier] = ACTIONS(481),
        [sym_comment] = ACTIONS(73),
    },
    [211] = {
        [anon_sym_LPAREN] = ACTIONS(483),
        [anon_sym_DOT] = ACTIONS(485),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(483),
    },
    [212] = {
        [sym_identifier] = ACTIONS(487),
        [sym_comment] = ACTIONS(73),
    },
    [213] = {
        [anon_sym_LPAREN] = ACTIONS(489),
        [anon_sym_DOT] = ACTIONS(489),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(489),
    },
    [214] = {
        [anon_sym_LPAREN] = ACTIONS(491),
        [anon_sym_DOT] = ACTIONS(491),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(491),
    },
    [215] = {
        [anon_sym_COLON] = ACTIONS(493),
        [anon_sym_LPAREN] = ACTIONS(495),
        [sym_comment] = ACTIONS(73),
    },
    [216] = {
        [sym__simple_statement] = STATE(222),
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
        [sym__indent] = ACTIONS(497),
    },
    [217] = {
        [sym_expression_list] = STATE(218),
        [sym__expression] = STATE(109),
        [sym_binary_operator] = STATE(36),
        [sym_subscript] = STATE(36),
        [sym_call] = STATE(36),
        [sym_list] = STATE(36),
        [sym_list_comprehension] = STATE(36),
        [sym_dictionary] = STATE(36),
        [sym_dictionary_comprehension] = STATE(36),
        [sym_set] = STATE(36),
        [anon_sym_LBRACK] = ACTIONS(117),
        [anon_sym_LBRACE] = ACTIONS(119),
        [sym_number] = ACTIONS(121),
        [sym_identifier] = ACTIONS(121),
        [sym_comment] = ACTIONS(73),
    },
    [218] = {
        [anon_sym_RPAREN] = ACTIONS(499),
        [sym_comment] = ACTIONS(73),
    },
    [219] = {
        [anon_sym_COLON] = ACTIONS(501),
        [sym_comment] = ACTIONS(73),
    },
    [220] = {
        [sym__simple_statement] = STATE(222),
        [sym_print_statement] = STATE(5),
        [sym_expression_statement] = STATE(5),
        [sym_return_statement] = STATE(5),
        [sym_delete_statement] = STATE(5),
        [sym__suite] = STATE(223),
        [sym__expression] = STATE(23),
        [sym_binary_operator] = STATE(16),
        [sym_subscript] = STATE(16),
        [sym_call] = STATE(16),
        [sym_list] = STATE(16),
        [sym_list_comprehension] = STATE(16),
        [sym_dictionary] = STATE(16),
        [sym_dictionary_comprehension] = STATE(16),
        [sym_set] = STATE(16),
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
        [sym__indent] = ACTIONS(497),
    },
    [221] = {
        [sym__statement] = STATE(232),
        [sym__simple_statement] = STATE(233),
        [sym_print_statement] = STATE(5),
        [sym_expression_statement] = STATE(5),
        [sym_return_statement] = STATE(5),
        [sym_delete_statement] = STATE(5),
        [sym__compound_statement] = STATE(234),
        [sym_if_statement] = STATE(235),
        [sym_for_statement] = STATE(235),
        [sym_while_statement] = STATE(235),
        [sym_try_statement] = STATE(235),
        [sym_with_statement] = STATE(235),
        [sym_function_definition] = STATE(235),
        [sym_class_definition] = STATE(235),
        [sym_decorated_definition] = STATE(235),
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
        [aux_sym_module_repeat1] = STATE(236),
        [aux_sym_decorated_definition_repeat1] = STATE(237),
        [anon_sym_print] = ACTIONS(83),
        [anon_sym_return] = ACTIONS(85),
        [anon_sym_del] = ACTIONS(87),
        [sym_pass_statement] = ACTIONS(89),
        [sym_break_statement] = ACTIONS(89),
        [sym_continue_statement] = ACTIONS(89),
        [anon_sym_if] = ACTIONS(503),
        [anon_sym_for] = ACTIONS(505),
        [anon_sym_while] = ACTIONS(507),
        [anon_sym_try] = ACTIONS(509),
        [anon_sym_with] = ACTIONS(511),
        [anon_sym_def] = ACTIONS(513),
        [anon_sym_class] = ACTIONS(515),
        [anon_sym_AT] = ACTIONS(105),
        [anon_sym_LBRACK] = ACTIONS(107),
        [anon_sym_LBRACE] = ACTIONS(109),
        [sym_number] = ACTIONS(111),
        [sym_identifier] = ACTIONS(113),
        [sym_comment] = ACTIONS(73),
        [sym__dedent] = ACTIONS(517),
    },
    [222] = {
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(517),
    },
    [223] = {
        [ts_builtin_sym_end] = ACTIONS(519),
        [anon_sym_SEMI] = ACTIONS(519),
        [anon_sym_print] = ACTIONS(521),
        [anon_sym_return] = ACTIONS(521),
        [anon_sym_del] = ACTIONS(521),
        [sym_pass_statement] = ACTIONS(521),
        [sym_break_statement] = ACTIONS(521),
        [sym_continue_statement] = ACTIONS(521),
        [anon_sym_if] = ACTIONS(521),
        [anon_sym_for] = ACTIONS(521),
        [anon_sym_while] = ACTIONS(521),
        [anon_sym_try] = ACTIONS(521),
        [anon_sym_with] = ACTIONS(521),
        [anon_sym_def] = ACTIONS(521),
        [anon_sym_class] = ACTIONS(521),
        [anon_sym_AT] = ACTIONS(519),
        [anon_sym_LBRACK] = ACTIONS(519),
        [anon_sym_LBRACE] = ACTIONS(519),
        [sym_number] = ACTIONS(521),
        [sym_identifier] = ACTIONS(523),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(519),
    },
    [224] = {
        [ts_builtin_sym_end] = ACTIONS(525),
        [anon_sym_SEMI] = ACTIONS(525),
        [anon_sym_print] = ACTIONS(527),
        [anon_sym_return] = ACTIONS(527),
        [anon_sym_del] = ACTIONS(527),
        [sym_pass_statement] = ACTIONS(527),
        [sym_break_statement] = ACTIONS(527),
        [sym_continue_statement] = ACTIONS(527),
        [anon_sym_if] = ACTIONS(527),
        [anon_sym_elif] = ACTIONS(527),
        [anon_sym_else] = ACTIONS(527),
        [anon_sym_for] = ACTIONS(527),
        [anon_sym_while] = ACTIONS(527),
        [anon_sym_try] = ACTIONS(527),
        [anon_sym_except] = ACTIONS(527),
        [anon_sym_finally] = ACTIONS(527),
        [anon_sym_with] = ACTIONS(527),
        [anon_sym_def] = ACTIONS(527),
        [anon_sym_class] = ACTIONS(527),
        [anon_sym_AT] = ACTIONS(525),
        [anon_sym_LBRACK] = ACTIONS(525),
        [anon_sym_LBRACE] = ACTIONS(525),
        [sym_number] = ACTIONS(527),
        [sym_identifier] = ACTIONS(529),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(525),
    },
    [225] = {
        [sym__expression] = STATE(338),
        [sym_binary_operator] = STATE(36),
        [sym_subscript] = STATE(36),
        [sym_call] = STATE(36),
        [sym_list] = STATE(36),
        [sym_list_comprehension] = STATE(36),
        [sym_dictionary] = STATE(36),
        [sym_dictionary_comprehension] = STATE(36),
        [sym_set] = STATE(36),
        [anon_sym_LBRACK] = ACTIONS(117),
        [anon_sym_LBRACE] = ACTIONS(119),
        [sym_number] = ACTIONS(121),
        [sym_identifier] = ACTIONS(121),
        [sym_comment] = ACTIONS(73),
    },
    [226] = {
        [sym_expression_list] = STATE(332),
        [sym__expression] = STATE(109),
        [sym_binary_operator] = STATE(36),
        [sym_subscript] = STATE(36),
        [sym_call] = STATE(36),
        [sym_list] = STATE(36),
        [sym_list_comprehension] = STATE(36),
        [sym_dictionary] = STATE(36),
        [sym_dictionary_comprehension] = STATE(36),
        [sym_set] = STATE(36),
        [anon_sym_LBRACK] = ACTIONS(117),
        [anon_sym_LBRACE] = ACTIONS(119),
        [sym_number] = ACTIONS(121),
        [sym_identifier] = ACTIONS(121),
        [sym_comment] = ACTIONS(73),
    },
    [227] = {
        [sym__expression] = STATE(328),
        [sym_binary_operator] = STATE(36),
        [sym_subscript] = STATE(36),
        [sym_call] = STATE(36),
        [sym_list] = STATE(36),
        [sym_list_comprehension] = STATE(36),
        [sym_dictionary] = STATE(36),
        [sym_dictionary_comprehension] = STATE(36),
        [sym_set] = STATE(36),
        [anon_sym_LBRACK] = ACTIONS(117),
        [anon_sym_LBRACE] = ACTIONS(119),
        [sym_number] = ACTIONS(121),
        [sym_identifier] = ACTIONS(121),
        [sym_comment] = ACTIONS(73),
    },
    [228] = {
        [anon_sym_COLON] = ACTIONS(531),
        [sym_comment] = ACTIONS(73),
    },
    [229] = {
        [sym_with_item] = STATE(287),
        [sym__expression] = STATE(288),
        [sym_binary_operator] = STATE(36),
        [sym_subscript] = STATE(36),
        [sym_call] = STATE(36),
        [sym_list] = STATE(36),
        [sym_list_comprehension] = STATE(36),
        [sym_dictionary] = STATE(36),
        [sym_dictionary_comprehension] = STATE(36),
        [sym_set] = STATE(36),
        [anon_sym_LBRACK] = ACTIONS(117),
        [anon_sym_LBRACE] = ACTIONS(119),
        [sym_number] = ACTIONS(121),
        [sym_identifier] = ACTIONS(121),
        [sym_comment] = ACTIONS(73),
    },
    [230] = {
        [sym_identifier] = ACTIONS(533),
        [sym_comment] = ACTIONS(73),
    },
    [231] = {
        [sym_identifier] = ACTIONS(535),
        [sym_comment] = ACTIONS(73),
    },
    [232] = {
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
    [233] = {
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(537),
    },
    [234] = {
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
    [235] = {
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
    [236] = {
        [sym__statement] = STATE(240),
        [sym__simple_statement] = STATE(233),
        [sym_print_statement] = STATE(5),
        [sym_expression_statement] = STATE(5),
        [sym_return_statement] = STATE(5),
        [sym_delete_statement] = STATE(5),
        [sym__compound_statement] = STATE(234),
        [sym_if_statement] = STATE(235),
        [sym_for_statement] = STATE(235),
        [sym_while_statement] = STATE(235),
        [sym_try_statement] = STATE(235),
        [sym_with_statement] = STATE(235),
        [sym_function_definition] = STATE(235),
        [sym_class_definition] = STATE(235),
        [sym_decorated_definition] = STATE(235),
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
        [aux_sym_decorated_definition_repeat1] = STATE(237),
        [anon_sym_print] = ACTIONS(83),
        [anon_sym_return] = ACTIONS(85),
        [anon_sym_del] = ACTIONS(87),
        [sym_pass_statement] = ACTIONS(89),
        [sym_break_statement] = ACTIONS(89),
        [sym_continue_statement] = ACTIONS(89),
        [anon_sym_if] = ACTIONS(503),
        [anon_sym_for] = ACTIONS(505),
        [anon_sym_while] = ACTIONS(507),
        [anon_sym_try] = ACTIONS(509),
        [anon_sym_with] = ACTIONS(511),
        [anon_sym_def] = ACTIONS(513),
        [anon_sym_class] = ACTIONS(515),
        [anon_sym_AT] = ACTIONS(105),
        [anon_sym_LBRACK] = ACTIONS(107),
        [anon_sym_LBRACE] = ACTIONS(109),
        [sym_number] = ACTIONS(111),
        [sym_identifier] = ACTIONS(113),
        [sym_comment] = ACTIONS(73),
        [sym__dedent] = ACTIONS(539),
    },
    [237] = {
        [sym_function_definition] = STATE(238),
        [sym_class_definition] = STATE(238),
        [sym_decorator] = STATE(27),
        [anon_sym_def] = ACTIONS(541),
        [anon_sym_class] = ACTIONS(543),
        [anon_sym_AT] = ACTIONS(105),
        [sym_comment] = ACTIONS(73),
    },
    [238] = {
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
    [239] = {
        [ts_builtin_sym_end] = ACTIONS(545),
        [anon_sym_SEMI] = ACTIONS(545),
        [anon_sym_print] = ACTIONS(547),
        [anon_sym_return] = ACTIONS(547),
        [anon_sym_del] = ACTIONS(547),
        [sym_pass_statement] = ACTIONS(547),
        [sym_break_statement] = ACTIONS(547),
        [sym_continue_statement] = ACTIONS(547),
        [anon_sym_if] = ACTIONS(547),
        [anon_sym_elif] = ACTIONS(547),
        [anon_sym_else] = ACTIONS(547),
        [anon_sym_for] = ACTIONS(547),
        [anon_sym_while] = ACTIONS(547),
        [anon_sym_try] = ACTIONS(547),
        [anon_sym_except] = ACTIONS(547),
        [anon_sym_finally] = ACTIONS(547),
        [anon_sym_with] = ACTIONS(547),
        [anon_sym_def] = ACTIONS(547),
        [anon_sym_class] = ACTIONS(547),
        [anon_sym_AT] = ACTIONS(545),
        [anon_sym_LBRACK] = ACTIONS(545),
        [anon_sym_LBRACE] = ACTIONS(545),
        [sym_number] = ACTIONS(547),
        [sym_identifier] = ACTIONS(549),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(545),
    },
    [240] = {
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
    [241] = {
        [anon_sym_print] = ACTIONS(413),
        [anon_sym_return] = ACTIONS(413),
        [anon_sym_del] = ACTIONS(413),
        [sym_pass_statement] = ACTIONS(413),
        [sym_break_statement] = ACTIONS(413),
        [sym_continue_statement] = ACTIONS(413),
        [anon_sym_if] = ACTIONS(413),
        [anon_sym_for] = ACTIONS(413),
        [anon_sym_while] = ACTIONS(413),
        [anon_sym_try] = ACTIONS(413),
        [anon_sym_with] = ACTIONS(413),
        [anon_sym_def] = ACTIONS(413),
        [anon_sym_class] = ACTIONS(413),
        [anon_sym_AT] = ACTIONS(411),
        [anon_sym_LBRACK] = ACTIONS(411),
        [anon_sym_LBRACE] = ACTIONS(411),
        [sym_number] = ACTIONS(413),
        [sym_identifier] = ACTIONS(415),
        [sym_comment] = ACTIONS(73),
        [sym__dedent] = ACTIONS(411),
    },
    [242] = {
        [anon_sym_COLON] = ACTIONS(551),
        [anon_sym_LPAREN] = ACTIONS(553),
        [sym_comment] = ACTIONS(73),
    },
    [243] = {
        [sym__simple_statement] = STATE(249),
        [sym_print_statement] = STATE(5),
        [sym_expression_statement] = STATE(5),
        [sym_return_statement] = STATE(5),
        [sym_delete_statement] = STATE(5),
        [sym__suite] = STATE(254),
        [sym__expression] = STATE(23),
        [sym_binary_operator] = STATE(16),
        [sym_subscript] = STATE(16),
        [sym_call] = STATE(16),
        [sym_list] = STATE(16),
        [sym_list_comprehension] = STATE(16),
        [sym_dictionary] = STATE(16),
        [sym_dictionary_comprehension] = STATE(16),
        [sym_set] = STATE(16),
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
        [sym__indent] = ACTIONS(555),
    },
    [244] = {
        [sym_expression_list] = STATE(245),
        [sym__expression] = STATE(109),
        [sym_binary_operator] = STATE(36),
        [sym_subscript] = STATE(36),
        [sym_call] = STATE(36),
        [sym_list] = STATE(36),
        [sym_list_comprehension] = STATE(36),
        [sym_dictionary] = STATE(36),
        [sym_dictionary_comprehension] = STATE(36),
        [sym_set] = STATE(36),
        [anon_sym_LBRACK] = ACTIONS(117),
        [anon_sym_LBRACE] = ACTIONS(119),
        [sym_number] = ACTIONS(121),
        [sym_identifier] = ACTIONS(121),
        [sym_comment] = ACTIONS(73),
    },
    [245] = {
        [anon_sym_RPAREN] = ACTIONS(557),
        [sym_comment] = ACTIONS(73),
    },
    [246] = {
        [anon_sym_COLON] = ACTIONS(559),
        [sym_comment] = ACTIONS(73),
    },
    [247] = {
        [sym__simple_statement] = STATE(249),
        [sym_print_statement] = STATE(5),
        [sym_expression_statement] = STATE(5),
        [sym_return_statement] = STATE(5),
        [sym_delete_statement] = STATE(5),
        [sym__suite] = STATE(250),
        [sym__expression] = STATE(23),
        [sym_binary_operator] = STATE(16),
        [sym_subscript] = STATE(16),
        [sym_call] = STATE(16),
        [sym_list] = STATE(16),
        [sym_list_comprehension] = STATE(16),
        [sym_dictionary] = STATE(16),
        [sym_dictionary_comprehension] = STATE(16),
        [sym_set] = STATE(16),
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
        [sym__indent] = ACTIONS(555),
    },
    [248] = {
        [sym__statement] = STATE(232),
        [sym__simple_statement] = STATE(233),
        [sym_print_statement] = STATE(5),
        [sym_expression_statement] = STATE(5),
        [sym_return_statement] = STATE(5),
        [sym_delete_statement] = STATE(5),
        [sym__compound_statement] = STATE(234),
        [sym_if_statement] = STATE(235),
        [sym_for_statement] = STATE(235),
        [sym_while_statement] = STATE(235),
        [sym_try_statement] = STATE(235),
        [sym_with_statement] = STATE(235),
        [sym_function_definition] = STATE(235),
        [sym_class_definition] = STATE(235),
        [sym_decorated_definition] = STATE(235),
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
        [aux_sym_module_repeat1] = STATE(252),
        [aux_sym_decorated_definition_repeat1] = STATE(237),
        [anon_sym_print] = ACTIONS(83),
        [anon_sym_return] = ACTIONS(85),
        [anon_sym_del] = ACTIONS(87),
        [sym_pass_statement] = ACTIONS(89),
        [sym_break_statement] = ACTIONS(89),
        [sym_continue_statement] = ACTIONS(89),
        [anon_sym_if] = ACTIONS(503),
        [anon_sym_for] = ACTIONS(505),
        [anon_sym_while] = ACTIONS(507),
        [anon_sym_try] = ACTIONS(509),
        [anon_sym_with] = ACTIONS(511),
        [anon_sym_def] = ACTIONS(513),
        [anon_sym_class] = ACTIONS(515),
        [anon_sym_AT] = ACTIONS(105),
        [anon_sym_LBRACK] = ACTIONS(107),
        [anon_sym_LBRACE] = ACTIONS(109),
        [sym_number] = ACTIONS(111),
        [sym_identifier] = ACTIONS(113),
        [sym_comment] = ACTIONS(73),
        [sym__dedent] = ACTIONS(561),
    },
    [249] = {
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(561),
    },
    [250] = {
        [anon_sym_print] = ACTIONS(521),
        [anon_sym_return] = ACTIONS(521),
        [anon_sym_del] = ACTIONS(521),
        [sym_pass_statement] = ACTIONS(521),
        [sym_break_statement] = ACTIONS(521),
        [sym_continue_statement] = ACTIONS(521),
        [anon_sym_if] = ACTIONS(521),
        [anon_sym_for] = ACTIONS(521),
        [anon_sym_while] = ACTIONS(521),
        [anon_sym_try] = ACTIONS(521),
        [anon_sym_with] = ACTIONS(521),
        [anon_sym_def] = ACTIONS(521),
        [anon_sym_class] = ACTIONS(521),
        [anon_sym_AT] = ACTIONS(519),
        [anon_sym_LBRACK] = ACTIONS(519),
        [anon_sym_LBRACE] = ACTIONS(519),
        [sym_number] = ACTIONS(521),
        [sym_identifier] = ACTIONS(523),
        [sym_comment] = ACTIONS(73),
        [sym__dedent] = ACTIONS(519),
    },
    [251] = {
        [anon_sym_print] = ACTIONS(527),
        [anon_sym_return] = ACTIONS(527),
        [anon_sym_del] = ACTIONS(527),
        [sym_pass_statement] = ACTIONS(527),
        [sym_break_statement] = ACTIONS(527),
        [sym_continue_statement] = ACTIONS(527),
        [anon_sym_if] = ACTIONS(527),
        [anon_sym_elif] = ACTIONS(527),
        [anon_sym_else] = ACTIONS(527),
        [anon_sym_for] = ACTIONS(527),
        [anon_sym_while] = ACTIONS(527),
        [anon_sym_try] = ACTIONS(527),
        [anon_sym_except] = ACTIONS(527),
        [anon_sym_finally] = ACTIONS(527),
        [anon_sym_with] = ACTIONS(527),
        [anon_sym_def] = ACTIONS(527),
        [anon_sym_class] = ACTIONS(527),
        [anon_sym_AT] = ACTIONS(525),
        [anon_sym_LBRACK] = ACTIONS(525),
        [anon_sym_LBRACE] = ACTIONS(525),
        [sym_number] = ACTIONS(527),
        [sym_identifier] = ACTIONS(529),
        [sym_comment] = ACTIONS(73),
        [sym__dedent] = ACTIONS(525),
    },
    [252] = {
        [sym__statement] = STATE(240),
        [sym__simple_statement] = STATE(233),
        [sym_print_statement] = STATE(5),
        [sym_expression_statement] = STATE(5),
        [sym_return_statement] = STATE(5),
        [sym_delete_statement] = STATE(5),
        [sym__compound_statement] = STATE(234),
        [sym_if_statement] = STATE(235),
        [sym_for_statement] = STATE(235),
        [sym_while_statement] = STATE(235),
        [sym_try_statement] = STATE(235),
        [sym_with_statement] = STATE(235),
        [sym_function_definition] = STATE(235),
        [sym_class_definition] = STATE(235),
        [sym_decorated_definition] = STATE(235),
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
        [aux_sym_decorated_definition_repeat1] = STATE(237),
        [anon_sym_print] = ACTIONS(83),
        [anon_sym_return] = ACTIONS(85),
        [anon_sym_del] = ACTIONS(87),
        [sym_pass_statement] = ACTIONS(89),
        [sym_break_statement] = ACTIONS(89),
        [sym_continue_statement] = ACTIONS(89),
        [anon_sym_if] = ACTIONS(503),
        [anon_sym_for] = ACTIONS(505),
        [anon_sym_while] = ACTIONS(507),
        [anon_sym_try] = ACTIONS(509),
        [anon_sym_with] = ACTIONS(511),
        [anon_sym_def] = ACTIONS(513),
        [anon_sym_class] = ACTIONS(515),
        [anon_sym_AT] = ACTIONS(105),
        [anon_sym_LBRACK] = ACTIONS(107),
        [anon_sym_LBRACE] = ACTIONS(109),
        [sym_number] = ACTIONS(111),
        [sym_identifier] = ACTIONS(113),
        [sym_comment] = ACTIONS(73),
        [sym__dedent] = ACTIONS(563),
    },
    [253] = {
        [anon_sym_print] = ACTIONS(547),
        [anon_sym_return] = ACTIONS(547),
        [anon_sym_del] = ACTIONS(547),
        [sym_pass_statement] = ACTIONS(547),
        [sym_break_statement] = ACTIONS(547),
        [sym_continue_statement] = ACTIONS(547),
        [anon_sym_if] = ACTIONS(547),
        [anon_sym_elif] = ACTIONS(547),
        [anon_sym_else] = ACTIONS(547),
        [anon_sym_for] = ACTIONS(547),
        [anon_sym_while] = ACTIONS(547),
        [anon_sym_try] = ACTIONS(547),
        [anon_sym_except] = ACTIONS(547),
        [anon_sym_finally] = ACTIONS(547),
        [anon_sym_with] = ACTIONS(547),
        [anon_sym_def] = ACTIONS(547),
        [anon_sym_class] = ACTIONS(547),
        [anon_sym_AT] = ACTIONS(545),
        [anon_sym_LBRACK] = ACTIONS(545),
        [anon_sym_LBRACE] = ACTIONS(545),
        [sym_number] = ACTIONS(547),
        [sym_identifier] = ACTIONS(549),
        [sym_comment] = ACTIONS(73),
        [sym__dedent] = ACTIONS(545),
    },
    [254] = {
        [anon_sym_print] = ACTIONS(565),
        [anon_sym_return] = ACTIONS(565),
        [anon_sym_del] = ACTIONS(565),
        [sym_pass_statement] = ACTIONS(565),
        [sym_break_statement] = ACTIONS(565),
        [sym_continue_statement] = ACTIONS(565),
        [anon_sym_if] = ACTIONS(565),
        [anon_sym_for] = ACTIONS(565),
        [anon_sym_while] = ACTIONS(565),
        [anon_sym_try] = ACTIONS(565),
        [anon_sym_with] = ACTIONS(565),
        [anon_sym_def] = ACTIONS(565),
        [anon_sym_class] = ACTIONS(565),
        [anon_sym_AT] = ACTIONS(567),
        [anon_sym_LBRACK] = ACTIONS(567),
        [anon_sym_LBRACE] = ACTIONS(567),
        [sym_number] = ACTIONS(565),
        [sym_identifier] = ACTIONS(569),
        [sym_comment] = ACTIONS(73),
        [sym__dedent] = ACTIONS(567),
    },
    [255] = {
        [sym_parameters] = STATE(257),
        [anon_sym_LPAREN] = ACTIONS(571),
        [sym_comment] = ACTIONS(73),
    },
    [256] = {
        [sym_default_parameter] = STATE(263),
        [sym_list_splat_parameter] = STATE(264),
        [sym_dictionary_splat_parameter] = STATE(265),
        [aux_sym_parameters_repeat1] = STATE(266),
        [anon_sym_RPAREN] = ACTIONS(573),
        [anon_sym_STAR] = ACTIONS(575),
        [sym_identifier] = ACTIONS(577),
        [sym_comment] = ACTIONS(73),
    },
    [257] = {
        [anon_sym_COLON] = ACTIONS(579),
        [sym_comment] = ACTIONS(73),
    },
    [258] = {
        [sym__simple_statement] = STATE(249),
        [sym_print_statement] = STATE(5),
        [sym_expression_statement] = STATE(5),
        [sym_return_statement] = STATE(5),
        [sym_delete_statement] = STATE(5),
        [sym__suite] = STATE(259),
        [sym__expression] = STATE(23),
        [sym_binary_operator] = STATE(16),
        [sym_subscript] = STATE(16),
        [sym_call] = STATE(16),
        [sym_list] = STATE(16),
        [sym_list_comprehension] = STATE(16),
        [sym_dictionary] = STATE(16),
        [sym_dictionary_comprehension] = STATE(16),
        [sym_set] = STATE(16),
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
        [sym__indent] = ACTIONS(555),
    },
    [259] = {
        [anon_sym_print] = ACTIONS(581),
        [anon_sym_return] = ACTIONS(581),
        [anon_sym_del] = ACTIONS(581),
        [sym_pass_statement] = ACTIONS(581),
        [sym_break_statement] = ACTIONS(581),
        [sym_continue_statement] = ACTIONS(581),
        [anon_sym_if] = ACTIONS(581),
        [anon_sym_for] = ACTIONS(581),
        [anon_sym_while] = ACTIONS(581),
        [anon_sym_try] = ACTIONS(581),
        [anon_sym_with] = ACTIONS(581),
        [anon_sym_def] = ACTIONS(581),
        [anon_sym_class] = ACTIONS(581),
        [anon_sym_AT] = ACTIONS(583),
        [anon_sym_LBRACK] = ACTIONS(583),
        [anon_sym_LBRACE] = ACTIONS(583),
        [sym_number] = ACTIONS(581),
        [sym_identifier] = ACTIONS(585),
        [sym_comment] = ACTIONS(73),
        [sym__dedent] = ACTIONS(583),
    },
    [260] = {
        [anon_sym_COLON] = ACTIONS(587),
        [sym_comment] = ACTIONS(73),
    },
    [261] = {
        [anon_sym_STAR] = ACTIONS(589),
        [sym_identifier] = ACTIONS(591),
        [sym_comment] = ACTIONS(73),
    },
    [262] = {
        [anon_sym_COMMA] = ACTIONS(593),
        [anon_sym_RPAREN] = ACTIONS(595),
        [anon_sym_EQ] = ACTIONS(597),
        [sym_comment] = ACTIONS(73),
    },
    [263] = {
        [anon_sym_COMMA] = ACTIONS(593),
        [anon_sym_RPAREN] = ACTIONS(595),
        [sym_comment] = ACTIONS(73),
    },
    [264] = {
        [anon_sym_COMMA] = ACTIONS(599),
        [anon_sym_RPAREN] = ACTIONS(595),
        [sym_comment] = ACTIONS(73),
    },
    [265] = {
        [anon_sym_RPAREN] = ACTIONS(595),
        [sym_comment] = ACTIONS(73),
    },
    [266] = {
        [sym_default_parameter] = STATE(268),
        [sym_list_splat_parameter] = STATE(269),
        [sym_dictionary_splat_parameter] = STATE(270),
        [anon_sym_STAR] = ACTIONS(575),
        [sym_identifier] = ACTIONS(601),
        [sym_comment] = ACTIONS(73),
    },
    [267] = {
        [anon_sym_COMMA] = ACTIONS(603),
        [anon_sym_RPAREN] = ACTIONS(605),
        [anon_sym_EQ] = ACTIONS(597),
        [sym_comment] = ACTIONS(73),
    },
    [268] = {
        [anon_sym_COMMA] = ACTIONS(603),
        [anon_sym_RPAREN] = ACTIONS(605),
        [sym_comment] = ACTIONS(73),
    },
    [269] = {
        [anon_sym_COMMA] = ACTIONS(607),
        [anon_sym_RPAREN] = ACTIONS(605),
        [sym_comment] = ACTIONS(73),
    },
    [270] = {
        [anon_sym_RPAREN] = ACTIONS(605),
        [sym_comment] = ACTIONS(73),
    },
    [271] = {
        [anon_sym_COLON] = ACTIONS(609),
        [sym_comment] = ACTIONS(73),
    },
    [272] = {
        [sym_dictionary_splat_parameter] = STATE(274),
        [anon_sym_STAR] = ACTIONS(611),
        [sym_comment] = ACTIONS(73),
    },
    [273] = {
        [anon_sym_STAR] = ACTIONS(589),
        [sym_comment] = ACTIONS(73),
    },
    [274] = {
        [anon_sym_RPAREN] = ACTIONS(613),
        [sym_comment] = ACTIONS(73),
    },
    [275] = {
        [anon_sym_COLON] = ACTIONS(615),
        [sym_comment] = ACTIONS(73),
    },
    [276] = {
        [sym_identifier] = ACTIONS(617),
        [sym_comment] = ACTIONS(73),
    },
    [277] = {
        [anon_sym_RPAREN] = ACTIONS(619),
        [sym_comment] = ACTIONS(73),
    },
    [278] = {
        [anon_sym_RPAREN] = ACTIONS(621),
        [anon_sym_STAR] = ACTIONS(623),
        [sym_identifier] = ACTIONS(625),
        [sym_comment] = ACTIONS(73),
    },
    [279] = {
        [anon_sym_COLON] = ACTIONS(627),
        [sym_comment] = ACTIONS(73),
    },
    [280] = {
        [sym__expression] = STATE(281),
        [sym_binary_operator] = STATE(36),
        [sym_subscript] = STATE(36),
        [sym_call] = STATE(36),
        [sym_list] = STATE(36),
        [sym_list_comprehension] = STATE(36),
        [sym_dictionary] = STATE(36),
        [sym_dictionary_comprehension] = STATE(36),
        [sym_set] = STATE(36),
        [anon_sym_LBRACK] = ACTIONS(117),
        [anon_sym_LBRACE] = ACTIONS(119),
        [sym_number] = ACTIONS(121),
        [sym_identifier] = ACTIONS(121),
        [sym_comment] = ACTIONS(73),
    },
    [281] = {
        [anon_sym_COMMA] = ACTIONS(629),
        [anon_sym_LPAREN] = ACTIONS(209),
        [anon_sym_RPAREN] = ACTIONS(629),
        [anon_sym_PLUS] = ACTIONS(211),
        [anon_sym_LBRACK] = ACTIONS(213),
        [sym_comment] = ACTIONS(73),
    },
    [282] = {
        [anon_sym_COLON] = ACTIONS(631),
        [sym_comment] = ACTIONS(73),
    },
    [283] = {
        [sym_dictionary_splat_parameter] = STATE(284),
        [anon_sym_STAR] = ACTIONS(611),
        [sym_comment] = ACTIONS(73),
    },
    [284] = {
        [anon_sym_RPAREN] = ACTIONS(621),
        [sym_comment] = ACTIONS(73),
    },
    [285] = {
        [anon_sym_RPAREN] = ACTIONS(605),
        [anon_sym_STAR] = ACTIONS(633),
        [sym_identifier] = ACTIONS(635),
        [sym_comment] = ACTIONS(73),
    },
    [286] = {
        [anon_sym_COMMA] = ACTIONS(637),
        [anon_sym_RPAREN] = ACTIONS(637),
        [sym_comment] = ACTIONS(73),
    },
    [287] = {
        [aux_sym_with_statement_repeat1] = STATE(293),
        [anon_sym_COMMA] = ACTIONS(639),
        [anon_sym_COLON] = ACTIONS(641),
        [sym_comment] = ACTIONS(73),
    },
    [288] = {
        [anon_sym_COMMA] = ACTIONS(643),
        [anon_sym_COLON] = ACTIONS(643),
        [anon_sym_as] = ACTIONS(645),
        [anon_sym_LPAREN] = ACTIONS(209),
        [anon_sym_PLUS] = ACTIONS(211),
        [anon_sym_LBRACK] = ACTIONS(213),
        [sym_comment] = ACTIONS(73),
    },
    [289] = {
        [sym__expression] = STATE(290),
        [sym_binary_operator] = STATE(36),
        [sym_subscript] = STATE(36),
        [sym_call] = STATE(36),
        [sym_list] = STATE(36),
        [sym_list_comprehension] = STATE(36),
        [sym_dictionary] = STATE(36),
        [sym_dictionary_comprehension] = STATE(36),
        [sym_set] = STATE(36),
        [anon_sym_LBRACK] = ACTIONS(117),
        [anon_sym_LBRACE] = ACTIONS(119),
        [sym_number] = ACTIONS(121),
        [sym_identifier] = ACTIONS(121),
        [sym_comment] = ACTIONS(73),
    },
    [290] = {
        [anon_sym_COMMA] = ACTIONS(647),
        [anon_sym_COLON] = ACTIONS(647),
        [anon_sym_LPAREN] = ACTIONS(209),
        [anon_sym_PLUS] = ACTIONS(211),
        [anon_sym_LBRACK] = ACTIONS(213),
        [sym_comment] = ACTIONS(73),
    },
    [291] = {
        [sym_with_item] = STATE(299),
        [sym__expression] = STATE(288),
        [sym_binary_operator] = STATE(36),
        [sym_subscript] = STATE(36),
        [sym_call] = STATE(36),
        [sym_list] = STATE(36),
        [sym_list_comprehension] = STATE(36),
        [sym_dictionary] = STATE(36),
        [sym_dictionary_comprehension] = STATE(36),
        [sym_set] = STATE(36),
        [anon_sym_LBRACK] = ACTIONS(117),
        [anon_sym_LBRACE] = ACTIONS(119),
        [sym_number] = ACTIONS(121),
        [sym_identifier] = ACTIONS(121),
        [sym_comment] = ACTIONS(73),
    },
    [292] = {
        [sym__simple_statement] = STATE(249),
        [sym_print_statement] = STATE(5),
        [sym_expression_statement] = STATE(5),
        [sym_return_statement] = STATE(5),
        [sym_delete_statement] = STATE(5),
        [sym__suite] = STATE(298),
        [sym__expression] = STATE(23),
        [sym_binary_operator] = STATE(16),
        [sym_subscript] = STATE(16),
        [sym_call] = STATE(16),
        [sym_list] = STATE(16),
        [sym_list_comprehension] = STATE(16),
        [sym_dictionary] = STATE(16),
        [sym_dictionary_comprehension] = STATE(16),
        [sym_set] = STATE(16),
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
        [sym__indent] = ACTIONS(555),
    },
    [293] = {
        [anon_sym_COMMA] = ACTIONS(649),
        [anon_sym_COLON] = ACTIONS(651),
        [sym_comment] = ACTIONS(73),
    },
    [294] = {
        [sym_with_item] = STATE(297),
        [sym__expression] = STATE(288),
        [sym_binary_operator] = STATE(36),
        [sym_subscript] = STATE(36),
        [sym_call] = STATE(36),
        [sym_list] = STATE(36),
        [sym_list_comprehension] = STATE(36),
        [sym_dictionary] = STATE(36),
        [sym_dictionary_comprehension] = STATE(36),
        [sym_set] = STATE(36),
        [anon_sym_LBRACK] = ACTIONS(117),
        [anon_sym_LBRACE] = ACTIONS(119),
        [sym_number] = ACTIONS(121),
        [sym_identifier] = ACTIONS(121),
        [sym_comment] = ACTIONS(73),
    },
    [295] = {
        [sym__simple_statement] = STATE(249),
        [sym_print_statement] = STATE(5),
        [sym_expression_statement] = STATE(5),
        [sym_return_statement] = STATE(5),
        [sym_delete_statement] = STATE(5),
        [sym__suite] = STATE(296),
        [sym__expression] = STATE(23),
        [sym_binary_operator] = STATE(16),
        [sym_subscript] = STATE(16),
        [sym_call] = STATE(16),
        [sym_list] = STATE(16),
        [sym_list_comprehension] = STATE(16),
        [sym_dictionary] = STATE(16),
        [sym_dictionary_comprehension] = STATE(16),
        [sym_set] = STATE(16),
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
        [sym__indent] = ACTIONS(555),
    },
    [296] = {
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
        [sym_comment] = ACTIONS(73),
        [sym__dedent] = ACTIONS(655),
    },
    [297] = {
        [anon_sym_COMMA] = ACTIONS(659),
        [anon_sym_COLON] = ACTIONS(659),
        [sym_comment] = ACTIONS(73),
    },
    [298] = {
        [anon_sym_print] = ACTIONS(661),
        [anon_sym_return] = ACTIONS(661),
        [anon_sym_del] = ACTIONS(661),
        [sym_pass_statement] = ACTIONS(661),
        [sym_break_statement] = ACTIONS(661),
        [sym_continue_statement] = ACTIONS(661),
        [anon_sym_if] = ACTIONS(661),
        [anon_sym_for] = ACTIONS(661),
        [anon_sym_while] = ACTIONS(661),
        [anon_sym_try] = ACTIONS(661),
        [anon_sym_with] = ACTIONS(661),
        [anon_sym_def] = ACTIONS(661),
        [anon_sym_class] = ACTIONS(661),
        [anon_sym_AT] = ACTIONS(663),
        [anon_sym_LBRACK] = ACTIONS(663),
        [anon_sym_LBRACE] = ACTIONS(663),
        [sym_number] = ACTIONS(661),
        [sym_identifier] = ACTIONS(665),
        [sym_comment] = ACTIONS(73),
        [sym__dedent] = ACTIONS(663),
    },
    [299] = {
        [anon_sym_COMMA] = ACTIONS(667),
        [anon_sym_COLON] = ACTIONS(667),
        [sym_comment] = ACTIONS(73),
    },
    [300] = {
        [sym__simple_statement] = STATE(302),
        [sym_print_statement] = STATE(5),
        [sym_expression_statement] = STATE(5),
        [sym_return_statement] = STATE(5),
        [sym_delete_statement] = STATE(5),
        [sym__suite] = STATE(303),
        [sym__expression] = STATE(23),
        [sym_binary_operator] = STATE(16),
        [sym_subscript] = STATE(16),
        [sym_call] = STATE(16),
        [sym_list] = STATE(16),
        [sym_list_comprehension] = STATE(16),
        [sym_dictionary] = STATE(16),
        [sym_dictionary_comprehension] = STATE(16),
        [sym_set] = STATE(16),
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
        [sym__indent] = ACTIONS(669),
    },
    [301] = {
        [sym__statement] = STATE(232),
        [sym__simple_statement] = STATE(233),
        [sym_print_statement] = STATE(5),
        [sym_expression_statement] = STATE(5),
        [sym_return_statement] = STATE(5),
        [sym_delete_statement] = STATE(5),
        [sym__compound_statement] = STATE(234),
        [sym_if_statement] = STATE(235),
        [sym_for_statement] = STATE(235),
        [sym_while_statement] = STATE(235),
        [sym_try_statement] = STATE(235),
        [sym_with_statement] = STATE(235),
        [sym_function_definition] = STATE(235),
        [sym_class_definition] = STATE(235),
        [sym_decorated_definition] = STATE(235),
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
        [aux_sym_module_repeat1] = STATE(326),
        [aux_sym_decorated_definition_repeat1] = STATE(237),
        [anon_sym_print] = ACTIONS(83),
        [anon_sym_return] = ACTIONS(85),
        [anon_sym_del] = ACTIONS(87),
        [sym_pass_statement] = ACTIONS(89),
        [sym_break_statement] = ACTIONS(89),
        [sym_continue_statement] = ACTIONS(89),
        [anon_sym_if] = ACTIONS(503),
        [anon_sym_for] = ACTIONS(505),
        [anon_sym_while] = ACTIONS(507),
        [anon_sym_try] = ACTIONS(509),
        [anon_sym_with] = ACTIONS(511),
        [anon_sym_def] = ACTIONS(513),
        [anon_sym_class] = ACTIONS(515),
        [anon_sym_AT] = ACTIONS(105),
        [anon_sym_LBRACK] = ACTIONS(107),
        [anon_sym_LBRACE] = ACTIONS(109),
        [sym_number] = ACTIONS(111),
        [sym_identifier] = ACTIONS(113),
        [sym_comment] = ACTIONS(73),
        [sym__dedent] = ACTIONS(671),
    },
    [302] = {
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(671),
    },
    [303] = {
        [sym_except_clause] = STATE(306),
        [sym_finally_clause] = STATE(307),
        [aux_sym_try_statement_repeat1] = STATE(308),
        [anon_sym_except] = ACTIONS(673),
        [anon_sym_finally] = ACTIONS(675),
        [sym_comment] = ACTIONS(73),
    },
    [304] = {
        [sym__expression] = STATE(318),
        [sym_binary_operator] = STATE(36),
        [sym_subscript] = STATE(36),
        [sym_call] = STATE(36),
        [sym_list] = STATE(36),
        [sym_list_comprehension] = STATE(36),
        [sym_dictionary] = STATE(36),
        [sym_dictionary_comprehension] = STATE(36),
        [sym_set] = STATE(36),
        [anon_sym_LBRACK] = ACTIONS(117),
        [anon_sym_LBRACE] = ACTIONS(119),
        [sym_number] = ACTIONS(121),
        [sym_identifier] = ACTIONS(121),
        [sym_comment] = ACTIONS(73),
    },
    [305] = {
        [anon_sym_COLON] = ACTIONS(677),
        [sym_comment] = ACTIONS(73),
    },
    [306] = {
        [anon_sym_print] = ACTIONS(679),
        [anon_sym_return] = ACTIONS(679),
        [anon_sym_del] = ACTIONS(679),
        [sym_pass_statement] = ACTIONS(679),
        [sym_break_statement] = ACTIONS(679),
        [sym_continue_statement] = ACTIONS(679),
        [anon_sym_if] = ACTIONS(679),
        [anon_sym_else] = ACTIONS(679),
        [anon_sym_for] = ACTIONS(679),
        [anon_sym_while] = ACTIONS(679),
        [anon_sym_try] = ACTIONS(679),
        [anon_sym_except] = ACTIONS(679),
        [anon_sym_finally] = ACTIONS(679),
        [anon_sym_with] = ACTIONS(679),
        [anon_sym_def] = ACTIONS(679),
        [anon_sym_class] = ACTIONS(679),
        [anon_sym_AT] = ACTIONS(681),
        [anon_sym_LBRACK] = ACTIONS(681),
        [anon_sym_LBRACE] = ACTIONS(681),
        [sym_number] = ACTIONS(679),
        [sym_identifier] = ACTIONS(683),
        [sym_comment] = ACTIONS(73),
        [sym__dedent] = ACTIONS(681),
    },
    [307] = {
        [anon_sym_print] = ACTIONS(685),
        [anon_sym_return] = ACTIONS(685),
        [anon_sym_del] = ACTIONS(685),
        [sym_pass_statement] = ACTIONS(685),
        [sym_break_statement] = ACTIONS(685),
        [sym_continue_statement] = ACTIONS(685),
        [anon_sym_if] = ACTIONS(685),
        [anon_sym_for] = ACTIONS(685),
        [anon_sym_while] = ACTIONS(685),
        [anon_sym_try] = ACTIONS(685),
        [anon_sym_with] = ACTIONS(685),
        [anon_sym_def] = ACTIONS(685),
        [anon_sym_class] = ACTIONS(685),
        [anon_sym_AT] = ACTIONS(687),
        [anon_sym_LBRACK] = ACTIONS(687),
        [anon_sym_LBRACE] = ACTIONS(687),
        [sym_number] = ACTIONS(685),
        [sym_identifier] = ACTIONS(689),
        [sym_comment] = ACTIONS(73),
        [sym__dedent] = ACTIONS(687),
    },
    [308] = {
        [sym_else_clause] = STATE(310),
        [sym_except_clause] = STATE(311),
        [sym_finally_clause] = STATE(312),
        [anon_sym_print] = ACTIONS(685),
        [anon_sym_return] = ACTIONS(685),
        [anon_sym_del] = ACTIONS(685),
        [sym_pass_statement] = ACTIONS(685),
        [sym_break_statement] = ACTIONS(685),
        [sym_continue_statement] = ACTIONS(685),
        [anon_sym_if] = ACTIONS(685),
        [anon_sym_else] = ACTIONS(691),
        [anon_sym_for] = ACTIONS(685),
        [anon_sym_while] = ACTIONS(685),
        [anon_sym_try] = ACTIONS(685),
        [anon_sym_except] = ACTIONS(693),
        [anon_sym_finally] = ACTIONS(695),
        [anon_sym_with] = ACTIONS(685),
        [anon_sym_def] = ACTIONS(685),
        [anon_sym_class] = ACTIONS(685),
        [anon_sym_AT] = ACTIONS(687),
        [anon_sym_LBRACK] = ACTIONS(687),
        [anon_sym_LBRACE] = ACTIONS(687),
        [sym_number] = ACTIONS(685),
        [sym_identifier] = ACTIONS(689),
        [sym_comment] = ACTIONS(73),
        [sym__dedent] = ACTIONS(687),
    },
    [309] = {
        [anon_sym_COLON] = ACTIONS(697),
        [sym_comment] = ACTIONS(73),
    },
    [310] = {
        [sym_finally_clause] = STATE(313),
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
        [anon_sym_finally] = ACTIONS(695),
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
    [311] = {
        [anon_sym_print] = ACTIONS(705),
        [anon_sym_return] = ACTIONS(705),
        [anon_sym_del] = ACTIONS(705),
        [sym_pass_statement] = ACTIONS(705),
        [sym_break_statement] = ACTIONS(705),
        [sym_continue_statement] = ACTIONS(705),
        [anon_sym_if] = ACTIONS(705),
        [anon_sym_else] = ACTIONS(705),
        [anon_sym_for] = ACTIONS(705),
        [anon_sym_while] = ACTIONS(705),
        [anon_sym_try] = ACTIONS(705),
        [anon_sym_except] = ACTIONS(705),
        [anon_sym_finally] = ACTIONS(705),
        [anon_sym_with] = ACTIONS(705),
        [anon_sym_def] = ACTIONS(705),
        [anon_sym_class] = ACTIONS(705),
        [anon_sym_AT] = ACTIONS(707),
        [anon_sym_LBRACK] = ACTIONS(707),
        [anon_sym_LBRACE] = ACTIONS(707),
        [sym_number] = ACTIONS(705),
        [sym_identifier] = ACTIONS(709),
        [sym_comment] = ACTIONS(73),
        [sym__dedent] = ACTIONS(707),
    },
    [312] = {
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
    [313] = {
        [anon_sym_print] = ACTIONS(711),
        [anon_sym_return] = ACTIONS(711),
        [anon_sym_del] = ACTIONS(711),
        [sym_pass_statement] = ACTIONS(711),
        [sym_break_statement] = ACTIONS(711),
        [sym_continue_statement] = ACTIONS(711),
        [anon_sym_if] = ACTIONS(711),
        [anon_sym_for] = ACTIONS(711),
        [anon_sym_while] = ACTIONS(711),
        [anon_sym_try] = ACTIONS(711),
        [anon_sym_with] = ACTIONS(711),
        [anon_sym_def] = ACTIONS(711),
        [anon_sym_class] = ACTIONS(711),
        [anon_sym_AT] = ACTIONS(713),
        [anon_sym_LBRACK] = ACTIONS(713),
        [anon_sym_LBRACE] = ACTIONS(713),
        [sym_number] = ACTIONS(711),
        [sym_identifier] = ACTIONS(715),
        [sym_comment] = ACTIONS(73),
        [sym__dedent] = ACTIONS(713),
    },
    [314] = {
        [sym__simple_statement] = STATE(249),
        [sym_print_statement] = STATE(5),
        [sym_expression_statement] = STATE(5),
        [sym_return_statement] = STATE(5),
        [sym_delete_statement] = STATE(5),
        [sym__suite] = STATE(315),
        [sym__expression] = STATE(23),
        [sym_binary_operator] = STATE(16),
        [sym_subscript] = STATE(16),
        [sym_call] = STATE(16),
        [sym_list] = STATE(16),
        [sym_list_comprehension] = STATE(16),
        [sym_dictionary] = STATE(16),
        [sym_dictionary_comprehension] = STATE(16),
        [sym_set] = STATE(16),
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
        [sym__indent] = ACTIONS(555),
    },
    [315] = {
        [anon_sym_print] = ACTIONS(717),
        [anon_sym_return] = ACTIONS(717),
        [anon_sym_del] = ACTIONS(717),
        [sym_pass_statement] = ACTIONS(717),
        [sym_break_statement] = ACTIONS(717),
        [sym_continue_statement] = ACTIONS(717),
        [anon_sym_if] = ACTIONS(717),
        [anon_sym_for] = ACTIONS(717),
        [anon_sym_while] = ACTIONS(717),
        [anon_sym_try] = ACTIONS(717),
        [anon_sym_finally] = ACTIONS(717),
        [anon_sym_with] = ACTIONS(717),
        [anon_sym_def] = ACTIONS(717),
        [anon_sym_class] = ACTIONS(717),
        [anon_sym_AT] = ACTIONS(719),
        [anon_sym_LBRACK] = ACTIONS(719),
        [anon_sym_LBRACE] = ACTIONS(719),
        [sym_number] = ACTIONS(717),
        [sym_identifier] = ACTIONS(721),
        [sym_comment] = ACTIONS(73),
        [sym__dedent] = ACTIONS(719),
    },
    [316] = {
        [sym__simple_statement] = STATE(249),
        [sym_print_statement] = STATE(5),
        [sym_expression_statement] = STATE(5),
        [sym_return_statement] = STATE(5),
        [sym_delete_statement] = STATE(5),
        [sym__suite] = STATE(317),
        [sym__expression] = STATE(23),
        [sym_binary_operator] = STATE(16),
        [sym_subscript] = STATE(16),
        [sym_call] = STATE(16),
        [sym_list] = STATE(16),
        [sym_list_comprehension] = STATE(16),
        [sym_dictionary] = STATE(16),
        [sym_dictionary_comprehension] = STATE(16),
        [sym_set] = STATE(16),
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
        [sym__indent] = ACTIONS(555),
    },
    [317] = {
        [anon_sym_print] = ACTIONS(723),
        [anon_sym_return] = ACTIONS(723),
        [anon_sym_del] = ACTIONS(723),
        [sym_pass_statement] = ACTIONS(723),
        [sym_break_statement] = ACTIONS(723),
        [sym_continue_statement] = ACTIONS(723),
        [anon_sym_if] = ACTIONS(723),
        [anon_sym_for] = ACTIONS(723),
        [anon_sym_while] = ACTIONS(723),
        [anon_sym_try] = ACTIONS(723),
        [anon_sym_with] = ACTIONS(723),
        [anon_sym_def] = ACTIONS(723),
        [anon_sym_class] = ACTIONS(723),
        [anon_sym_AT] = ACTIONS(725),
        [anon_sym_LBRACK] = ACTIONS(725),
        [anon_sym_LBRACE] = ACTIONS(725),
        [sym_number] = ACTIONS(723),
        [sym_identifier] = ACTIONS(727),
        [sym_comment] = ACTIONS(73),
        [sym__dedent] = ACTIONS(725),
    },
    [318] = {
        [anon_sym_COMMA] = ACTIONS(729),
        [anon_sym_COLON] = ACTIONS(731),
        [anon_sym_as] = ACTIONS(729),
        [anon_sym_LPAREN] = ACTIONS(209),
        [anon_sym_PLUS] = ACTIONS(211),
        [anon_sym_LBRACK] = ACTIONS(213),
        [sym_comment] = ACTIONS(73),
    },
    [319] = {
        [sym__expression] = STATE(321),
        [sym_binary_operator] = STATE(36),
        [sym_subscript] = STATE(36),
        [sym_call] = STATE(36),
        [sym_list] = STATE(36),
        [sym_list_comprehension] = STATE(36),
        [sym_dictionary] = STATE(36),
        [sym_dictionary_comprehension] = STATE(36),
        [sym_set] = STATE(36),
        [anon_sym_LBRACK] = ACTIONS(117),
        [anon_sym_LBRACE] = ACTIONS(119),
        [sym_number] = ACTIONS(121),
        [sym_identifier] = ACTIONS(121),
        [sym_comment] = ACTIONS(73),
    },
    [320] = {
        [sym__simple_statement] = STATE(249),
        [sym_print_statement] = STATE(5),
        [sym_expression_statement] = STATE(5),
        [sym_return_statement] = STATE(5),
        [sym_delete_statement] = STATE(5),
        [sym__suite] = STATE(324),
        [sym__expression] = STATE(23),
        [sym_binary_operator] = STATE(16),
        [sym_subscript] = STATE(16),
        [sym_call] = STATE(16),
        [sym_list] = STATE(16),
        [sym_list_comprehension] = STATE(16),
        [sym_dictionary] = STATE(16),
        [sym_dictionary_comprehension] = STATE(16),
        [sym_set] = STATE(16),
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
        [sym__indent] = ACTIONS(555),
    },
    [321] = {
        [anon_sym_COLON] = ACTIONS(733),
        [anon_sym_LPAREN] = ACTIONS(209),
        [anon_sym_PLUS] = ACTIONS(211),
        [anon_sym_LBRACK] = ACTIONS(213),
        [sym_comment] = ACTIONS(73),
    },
    [322] = {
        [sym__simple_statement] = STATE(249),
        [sym_print_statement] = STATE(5),
        [sym_expression_statement] = STATE(5),
        [sym_return_statement] = STATE(5),
        [sym_delete_statement] = STATE(5),
        [sym__suite] = STATE(323),
        [sym__expression] = STATE(23),
        [sym_binary_operator] = STATE(16),
        [sym_subscript] = STATE(16),
        [sym_call] = STATE(16),
        [sym_list] = STATE(16),
        [sym_list_comprehension] = STATE(16),
        [sym_dictionary] = STATE(16),
        [sym_dictionary_comprehension] = STATE(16),
        [sym_set] = STATE(16),
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
        [sym__indent] = ACTIONS(555),
    },
    [323] = {
        [anon_sym_print] = ACTIONS(735),
        [anon_sym_return] = ACTIONS(735),
        [anon_sym_del] = ACTIONS(735),
        [sym_pass_statement] = ACTIONS(735),
        [sym_break_statement] = ACTIONS(735),
        [sym_continue_statement] = ACTIONS(735),
        [anon_sym_if] = ACTIONS(735),
        [anon_sym_else] = ACTIONS(735),
        [anon_sym_for] = ACTIONS(735),
        [anon_sym_while] = ACTIONS(735),
        [anon_sym_try] = ACTIONS(735),
        [anon_sym_except] = ACTIONS(735),
        [anon_sym_finally] = ACTIONS(735),
        [anon_sym_with] = ACTIONS(735),
        [anon_sym_def] = ACTIONS(735),
        [anon_sym_class] = ACTIONS(735),
        [anon_sym_AT] = ACTIONS(737),
        [anon_sym_LBRACK] = ACTIONS(737),
        [anon_sym_LBRACE] = ACTIONS(737),
        [sym_number] = ACTIONS(735),
        [sym_identifier] = ACTIONS(739),
        [sym_comment] = ACTIONS(73),
        [sym__dedent] = ACTIONS(737),
    },
    [324] = {
        [anon_sym_print] = ACTIONS(741),
        [anon_sym_return] = ACTIONS(741),
        [anon_sym_del] = ACTIONS(741),
        [sym_pass_statement] = ACTIONS(741),
        [sym_break_statement] = ACTIONS(741),
        [sym_continue_statement] = ACTIONS(741),
        [anon_sym_if] = ACTIONS(741),
        [anon_sym_else] = ACTIONS(741),
        [anon_sym_for] = ACTIONS(741),
        [anon_sym_while] = ACTIONS(741),
        [anon_sym_try] = ACTIONS(741),
        [anon_sym_except] = ACTIONS(741),
        [anon_sym_finally] = ACTIONS(741),
        [anon_sym_with] = ACTIONS(741),
        [anon_sym_def] = ACTIONS(741),
        [anon_sym_class] = ACTIONS(741),
        [anon_sym_AT] = ACTIONS(743),
        [anon_sym_LBRACK] = ACTIONS(743),
        [anon_sym_LBRACE] = ACTIONS(743),
        [sym_number] = ACTIONS(741),
        [sym_identifier] = ACTIONS(745),
        [sym_comment] = ACTIONS(73),
        [sym__dedent] = ACTIONS(743),
    },
    [325] = {
        [anon_sym_except] = ACTIONS(525),
        [anon_sym_finally] = ACTIONS(525),
        [sym_comment] = ACTIONS(73),
    },
    [326] = {
        [sym__statement] = STATE(240),
        [sym__simple_statement] = STATE(233),
        [sym_print_statement] = STATE(5),
        [sym_expression_statement] = STATE(5),
        [sym_return_statement] = STATE(5),
        [sym_delete_statement] = STATE(5),
        [sym__compound_statement] = STATE(234),
        [sym_if_statement] = STATE(235),
        [sym_for_statement] = STATE(235),
        [sym_while_statement] = STATE(235),
        [sym_try_statement] = STATE(235),
        [sym_with_statement] = STATE(235),
        [sym_function_definition] = STATE(235),
        [sym_class_definition] = STATE(235),
        [sym_decorated_definition] = STATE(235),
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
        [aux_sym_decorated_definition_repeat1] = STATE(237),
        [anon_sym_print] = ACTIONS(83),
        [anon_sym_return] = ACTIONS(85),
        [anon_sym_del] = ACTIONS(87),
        [sym_pass_statement] = ACTIONS(89),
        [sym_break_statement] = ACTIONS(89),
        [sym_continue_statement] = ACTIONS(89),
        [anon_sym_if] = ACTIONS(503),
        [anon_sym_for] = ACTIONS(505),
        [anon_sym_while] = ACTIONS(507),
        [anon_sym_try] = ACTIONS(509),
        [anon_sym_with] = ACTIONS(511),
        [anon_sym_def] = ACTIONS(513),
        [anon_sym_class] = ACTIONS(515),
        [anon_sym_AT] = ACTIONS(105),
        [anon_sym_LBRACK] = ACTIONS(107),
        [anon_sym_LBRACE] = ACTIONS(109),
        [sym_number] = ACTIONS(111),
        [sym_identifier] = ACTIONS(113),
        [sym_comment] = ACTIONS(73),
        [sym__dedent] = ACTIONS(747),
    },
    [327] = {
        [anon_sym_except] = ACTIONS(545),
        [anon_sym_finally] = ACTIONS(545),
        [sym_comment] = ACTIONS(73),
    },
    [328] = {
        [anon_sym_COLON] = ACTIONS(749),
        [anon_sym_LPAREN] = ACTIONS(209),
        [anon_sym_PLUS] = ACTIONS(211),
        [anon_sym_LBRACK] = ACTIONS(213),
        [sym_comment] = ACTIONS(73),
    },
    [329] = {
        [sym__simple_statement] = STATE(249),
        [sym_print_statement] = STATE(5),
        [sym_expression_statement] = STATE(5),
        [sym_return_statement] = STATE(5),
        [sym_delete_statement] = STATE(5),
        [sym__suite] = STATE(330),
        [sym__expression] = STATE(23),
        [sym_binary_operator] = STATE(16),
        [sym_subscript] = STATE(16),
        [sym_call] = STATE(16),
        [sym_list] = STATE(16),
        [sym_list_comprehension] = STATE(16),
        [sym_dictionary] = STATE(16),
        [sym_dictionary_comprehension] = STATE(16),
        [sym_set] = STATE(16),
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
        [sym__indent] = ACTIONS(555),
    },
    [330] = {
        [sym_else_clause] = STATE(331),
        [anon_sym_print] = ACTIONS(751),
        [anon_sym_return] = ACTIONS(751),
        [anon_sym_del] = ACTIONS(751),
        [sym_pass_statement] = ACTIONS(751),
        [sym_break_statement] = ACTIONS(751),
        [sym_continue_statement] = ACTIONS(751),
        [anon_sym_if] = ACTIONS(751),
        [anon_sym_else] = ACTIONS(691),
        [anon_sym_for] = ACTIONS(751),
        [anon_sym_while] = ACTIONS(751),
        [anon_sym_try] = ACTIONS(751),
        [anon_sym_with] = ACTIONS(751),
        [anon_sym_def] = ACTIONS(751),
        [anon_sym_class] = ACTIONS(751),
        [anon_sym_AT] = ACTIONS(753),
        [anon_sym_LBRACK] = ACTIONS(753),
        [anon_sym_LBRACE] = ACTIONS(753),
        [sym_number] = ACTIONS(751),
        [sym_identifier] = ACTIONS(755),
        [sym_comment] = ACTIONS(73),
        [sym__dedent] = ACTIONS(753),
    },
    [331] = {
        [anon_sym_print] = ACTIONS(757),
        [anon_sym_return] = ACTIONS(757),
        [anon_sym_del] = ACTIONS(757),
        [sym_pass_statement] = ACTIONS(757),
        [sym_break_statement] = ACTIONS(757),
        [sym_continue_statement] = ACTIONS(757),
        [anon_sym_if] = ACTIONS(757),
        [anon_sym_for] = ACTIONS(757),
        [anon_sym_while] = ACTIONS(757),
        [anon_sym_try] = ACTIONS(757),
        [anon_sym_with] = ACTIONS(757),
        [anon_sym_def] = ACTIONS(757),
        [anon_sym_class] = ACTIONS(757),
        [anon_sym_AT] = ACTIONS(759),
        [anon_sym_LBRACK] = ACTIONS(759),
        [anon_sym_LBRACE] = ACTIONS(759),
        [sym_number] = ACTIONS(757),
        [sym_identifier] = ACTIONS(761),
        [sym_comment] = ACTIONS(73),
        [sym__dedent] = ACTIONS(759),
    },
    [332] = {
        [anon_sym_in] = ACTIONS(763),
        [sym_comment] = ACTIONS(73),
    },
    [333] = {
        [sym_expression_list] = STATE(334),
        [sym__expression] = STATE(109),
        [sym_binary_operator] = STATE(36),
        [sym_subscript] = STATE(36),
        [sym_call] = STATE(36),
        [sym_list] = STATE(36),
        [sym_list_comprehension] = STATE(36),
        [sym_dictionary] = STATE(36),
        [sym_dictionary_comprehension] = STATE(36),
        [sym_set] = STATE(36),
        [anon_sym_LBRACK] = ACTIONS(117),
        [anon_sym_LBRACE] = ACTIONS(119),
        [sym_number] = ACTIONS(121),
        [sym_identifier] = ACTIONS(121),
        [sym_comment] = ACTIONS(73),
    },
    [334] = {
        [anon_sym_COLON] = ACTIONS(765),
        [sym_comment] = ACTIONS(73),
    },
    [335] = {
        [sym__simple_statement] = STATE(249),
        [sym_print_statement] = STATE(5),
        [sym_expression_statement] = STATE(5),
        [sym_return_statement] = STATE(5),
        [sym_delete_statement] = STATE(5),
        [sym__suite] = STATE(336),
        [sym__expression] = STATE(23),
        [sym_binary_operator] = STATE(16),
        [sym_subscript] = STATE(16),
        [sym_call] = STATE(16),
        [sym_list] = STATE(16),
        [sym_list_comprehension] = STATE(16),
        [sym_dictionary] = STATE(16),
        [sym_dictionary_comprehension] = STATE(16),
        [sym_set] = STATE(16),
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
        [sym__indent] = ACTIONS(555),
    },
    [336] = {
        [sym_else_clause] = STATE(337),
        [anon_sym_print] = ACTIONS(767),
        [anon_sym_return] = ACTIONS(767),
        [anon_sym_del] = ACTIONS(767),
        [sym_pass_statement] = ACTIONS(767),
        [sym_break_statement] = ACTIONS(767),
        [sym_continue_statement] = ACTIONS(767),
        [anon_sym_if] = ACTIONS(767),
        [anon_sym_else] = ACTIONS(691),
        [anon_sym_for] = ACTIONS(767),
        [anon_sym_while] = ACTIONS(767),
        [anon_sym_try] = ACTIONS(767),
        [anon_sym_with] = ACTIONS(767),
        [anon_sym_def] = ACTIONS(767),
        [anon_sym_class] = ACTIONS(767),
        [anon_sym_AT] = ACTIONS(769),
        [anon_sym_LBRACK] = ACTIONS(769),
        [anon_sym_LBRACE] = ACTIONS(769),
        [sym_number] = ACTIONS(767),
        [sym_identifier] = ACTIONS(771),
        [sym_comment] = ACTIONS(73),
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
        [sym_comment] = ACTIONS(73),
        [sym__dedent] = ACTIONS(775),
    },
    [338] = {
        [anon_sym_COLON] = ACTIONS(779),
        [anon_sym_LPAREN] = ACTIONS(209),
        [anon_sym_PLUS] = ACTIONS(211),
        [anon_sym_LBRACK] = ACTIONS(213),
        [sym_comment] = ACTIONS(73),
    },
    [339] = {
        [sym__simple_statement] = STATE(249),
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
        [sym__indent] = ACTIONS(555),
    },
    [340] = {
        [sym_elif_clause] = STATE(342),
        [sym_else_clause] = STATE(343),
        [aux_sym_if_statement_repeat1] = STATE(344),
        [anon_sym_print] = ACTIONS(781),
        [anon_sym_return] = ACTIONS(781),
        [anon_sym_del] = ACTIONS(781),
        [sym_pass_statement] = ACTIONS(781),
        [sym_break_statement] = ACTIONS(781),
        [sym_continue_statement] = ACTIONS(781),
        [anon_sym_if] = ACTIONS(781),
        [anon_sym_elif] = ACTIONS(783),
        [anon_sym_else] = ACTIONS(691),
        [anon_sym_for] = ACTIONS(781),
        [anon_sym_while] = ACTIONS(781),
        [anon_sym_try] = ACTIONS(781),
        [anon_sym_with] = ACTIONS(781),
        [anon_sym_def] = ACTIONS(781),
        [anon_sym_class] = ACTIONS(781),
        [anon_sym_AT] = ACTIONS(785),
        [anon_sym_LBRACK] = ACTIONS(785),
        [anon_sym_LBRACE] = ACTIONS(785),
        [sym_number] = ACTIONS(781),
        [sym_identifier] = ACTIONS(787),
        [sym_comment] = ACTIONS(73),
        [sym__dedent] = ACTIONS(785),
    },
    [341] = {
        [sym__expression] = STATE(347),
        [sym_binary_operator] = STATE(36),
        [sym_subscript] = STATE(36),
        [sym_call] = STATE(36),
        [sym_list] = STATE(36),
        [sym_list_comprehension] = STATE(36),
        [sym_dictionary] = STATE(36),
        [sym_dictionary_comprehension] = STATE(36),
        [sym_set] = STATE(36),
        [anon_sym_LBRACK] = ACTIONS(117),
        [anon_sym_LBRACE] = ACTIONS(119),
        [sym_number] = ACTIONS(121),
        [sym_identifier] = ACTIONS(121),
        [sym_comment] = ACTIONS(73),
    },
    [342] = {
        [anon_sym_print] = ACTIONS(789),
        [anon_sym_return] = ACTIONS(789),
        [anon_sym_del] = ACTIONS(789),
        [sym_pass_statement] = ACTIONS(789),
        [sym_break_statement] = ACTIONS(789),
        [sym_continue_statement] = ACTIONS(789),
        [anon_sym_if] = ACTIONS(789),
        [anon_sym_elif] = ACTIONS(789),
        [anon_sym_else] = ACTIONS(789),
        [anon_sym_for] = ACTIONS(789),
        [anon_sym_while] = ACTIONS(789),
        [anon_sym_try] = ACTIONS(789),
        [anon_sym_with] = ACTIONS(789),
        [anon_sym_def] = ACTIONS(789),
        [anon_sym_class] = ACTIONS(789),
        [anon_sym_AT] = ACTIONS(791),
        [anon_sym_LBRACK] = ACTIONS(791),
        [anon_sym_LBRACE] = ACTIONS(791),
        [sym_number] = ACTIONS(789),
        [sym_identifier] = ACTIONS(793),
        [sym_comment] = ACTIONS(73),
        [sym__dedent] = ACTIONS(791),
    },
    [343] = {
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
        [anon_sym_AT] = ACTIONS(797),
        [anon_sym_LBRACK] = ACTIONS(797),
        [anon_sym_LBRACE] = ACTIONS(797),
        [sym_number] = ACTIONS(795),
        [sym_identifier] = ACTIONS(799),
        [sym_comment] = ACTIONS(73),
        [sym__dedent] = ACTIONS(797),
    },
    [344] = {
        [sym_elif_clause] = STATE(345),
        [sym_else_clause] = STATE(346),
        [anon_sym_print] = ACTIONS(795),
        [anon_sym_return] = ACTIONS(795),
        [anon_sym_del] = ACTIONS(795),
        [sym_pass_statement] = ACTIONS(795),
        [sym_break_statement] = ACTIONS(795),
        [sym_continue_statement] = ACTIONS(795),
        [anon_sym_if] = ACTIONS(795),
        [anon_sym_elif] = ACTIONS(783),
        [anon_sym_else] = ACTIONS(691),
        [anon_sym_for] = ACTIONS(795),
        [anon_sym_while] = ACTIONS(795),
        [anon_sym_try] = ACTIONS(795),
        [anon_sym_with] = ACTIONS(795),
        [anon_sym_def] = ACTIONS(795),
        [anon_sym_class] = ACTIONS(795),
        [anon_sym_AT] = ACTIONS(797),
        [anon_sym_LBRACK] = ACTIONS(797),
        [anon_sym_LBRACE] = ACTIONS(797),
        [sym_number] = ACTIONS(795),
        [sym_identifier] = ACTIONS(799),
        [sym_comment] = ACTIONS(73),
        [sym__dedent] = ACTIONS(797),
    },
    [345] = {
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
        [anon_sym_with] = ACTIONS(801),
        [anon_sym_def] = ACTIONS(801),
        [anon_sym_class] = ACTIONS(801),
        [anon_sym_AT] = ACTIONS(803),
        [anon_sym_LBRACK] = ACTIONS(803),
        [anon_sym_LBRACE] = ACTIONS(803),
        [sym_number] = ACTIONS(801),
        [sym_identifier] = ACTIONS(805),
        [sym_comment] = ACTIONS(73),
        [sym__dedent] = ACTIONS(803),
    },
    [346] = {
        [anon_sym_print] = ACTIONS(807),
        [anon_sym_return] = ACTIONS(807),
        [anon_sym_del] = ACTIONS(807),
        [sym_pass_statement] = ACTIONS(807),
        [sym_break_statement] = ACTIONS(807),
        [sym_continue_statement] = ACTIONS(807),
        [anon_sym_if] = ACTIONS(807),
        [anon_sym_for] = ACTIONS(807),
        [anon_sym_while] = ACTIONS(807),
        [anon_sym_try] = ACTIONS(807),
        [anon_sym_with] = ACTIONS(807),
        [anon_sym_def] = ACTIONS(807),
        [anon_sym_class] = ACTIONS(807),
        [anon_sym_AT] = ACTIONS(809),
        [anon_sym_LBRACK] = ACTIONS(809),
        [anon_sym_LBRACE] = ACTIONS(809),
        [sym_number] = ACTIONS(807),
        [sym_identifier] = ACTIONS(811),
        [sym_comment] = ACTIONS(73),
        [sym__dedent] = ACTIONS(809),
    },
    [347] = {
        [anon_sym_COLON] = ACTIONS(813),
        [anon_sym_LPAREN] = ACTIONS(209),
        [anon_sym_PLUS] = ACTIONS(211),
        [anon_sym_LBRACK] = ACTIONS(213),
        [sym_comment] = ACTIONS(73),
    },
    [348] = {
        [sym__simple_statement] = STATE(249),
        [sym_print_statement] = STATE(5),
        [sym_expression_statement] = STATE(5),
        [sym_return_statement] = STATE(5),
        [sym_delete_statement] = STATE(5),
        [sym__suite] = STATE(349),
        [sym__expression] = STATE(23),
        [sym_binary_operator] = STATE(16),
        [sym_subscript] = STATE(16),
        [sym_call] = STATE(16),
        [sym_list] = STATE(16),
        [sym_list_comprehension] = STATE(16),
        [sym_dictionary] = STATE(16),
        [sym_dictionary_comprehension] = STATE(16),
        [sym_set] = STATE(16),
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
        [sym__indent] = ACTIONS(555),
    },
    [349] = {
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
    [350] = {
        [ts_builtin_sym_end] = ACTIONS(567),
        [anon_sym_SEMI] = ACTIONS(567),
        [anon_sym_print] = ACTIONS(565),
        [anon_sym_return] = ACTIONS(565),
        [anon_sym_del] = ACTIONS(565),
        [sym_pass_statement] = ACTIONS(565),
        [sym_break_statement] = ACTIONS(565),
        [sym_continue_statement] = ACTIONS(565),
        [anon_sym_if] = ACTIONS(565),
        [anon_sym_for] = ACTIONS(565),
        [anon_sym_while] = ACTIONS(565),
        [anon_sym_try] = ACTIONS(565),
        [anon_sym_with] = ACTIONS(565),
        [anon_sym_def] = ACTIONS(565),
        [anon_sym_class] = ACTIONS(565),
        [anon_sym_AT] = ACTIONS(567),
        [anon_sym_LBRACK] = ACTIONS(567),
        [anon_sym_LBRACE] = ACTIONS(567),
        [sym_number] = ACTIONS(565),
        [sym_identifier] = ACTIONS(569),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(567),
    },
    [351] = {
        [sym_parameters] = STATE(352),
        [anon_sym_LPAREN] = ACTIONS(571),
        [sym_comment] = ACTIONS(73),
    },
    [352] = {
        [anon_sym_COLON] = ACTIONS(821),
        [sym_comment] = ACTIONS(73),
    },
    [353] = {
        [sym__simple_statement] = STATE(222),
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
        [sym__indent] = ACTIONS(497),
    },
    [354] = {
        [ts_builtin_sym_end] = ACTIONS(583),
        [anon_sym_SEMI] = ACTIONS(583),
        [anon_sym_print] = ACTIONS(581),
        [anon_sym_return] = ACTIONS(581),
        [anon_sym_del] = ACTIONS(581),
        [sym_pass_statement] = ACTIONS(581),
        [sym_break_statement] = ACTIONS(581),
        [sym_continue_statement] = ACTIONS(581),
        [anon_sym_if] = ACTIONS(581),
        [anon_sym_for] = ACTIONS(581),
        [anon_sym_while] = ACTIONS(581),
        [anon_sym_try] = ACTIONS(581),
        [anon_sym_with] = ACTIONS(581),
        [anon_sym_def] = ACTIONS(581),
        [anon_sym_class] = ACTIONS(581),
        [anon_sym_AT] = ACTIONS(583),
        [anon_sym_LBRACK] = ACTIONS(583),
        [anon_sym_LBRACE] = ACTIONS(583),
        [sym_number] = ACTIONS(581),
        [sym_identifier] = ACTIONS(585),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(583),
    },
    [355] = {
        [aux_sym_with_statement_repeat1] = STATE(357),
        [anon_sym_COMMA] = ACTIONS(639),
        [anon_sym_COLON] = ACTIONS(823),
        [sym_comment] = ACTIONS(73),
    },
    [356] = {
        [sym__simple_statement] = STATE(222),
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
        [sym__indent] = ACTIONS(497),
    },
    [357] = {
        [anon_sym_COMMA] = ACTIONS(649),
        [anon_sym_COLON] = ACTIONS(825),
        [sym_comment] = ACTIONS(73),
    },
    [358] = {
        [sym__simple_statement] = STATE(222),
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
        [sym__indent] = ACTIONS(497),
    },
    [359] = {
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
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(655),
    },
    [360] = {
        [ts_builtin_sym_end] = ACTIONS(663),
        [anon_sym_SEMI] = ACTIONS(663),
        [anon_sym_print] = ACTIONS(661),
        [anon_sym_return] = ACTIONS(661),
        [anon_sym_del] = ACTIONS(661),
        [sym_pass_statement] = ACTIONS(661),
        [sym_break_statement] = ACTIONS(661),
        [sym_continue_statement] = ACTIONS(661),
        [anon_sym_if] = ACTIONS(661),
        [anon_sym_for] = ACTIONS(661),
        [anon_sym_while] = ACTIONS(661),
        [anon_sym_try] = ACTIONS(661),
        [anon_sym_with] = ACTIONS(661),
        [anon_sym_def] = ACTIONS(661),
        [anon_sym_class] = ACTIONS(661),
        [anon_sym_AT] = ACTIONS(663),
        [anon_sym_LBRACK] = ACTIONS(663),
        [anon_sym_LBRACE] = ACTIONS(663),
        [sym_number] = ACTIONS(661),
        [sym_identifier] = ACTIONS(665),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(663),
    },
    [361] = {
        [sym__simple_statement] = STATE(302),
        [sym_print_statement] = STATE(5),
        [sym_expression_statement] = STATE(5),
        [sym_return_statement] = STATE(5),
        [sym_delete_statement] = STATE(5),
        [sym__suite] = STATE(362),
        [sym__expression] = STATE(23),
        [sym_binary_operator] = STATE(16),
        [sym_subscript] = STATE(16),
        [sym_call] = STATE(16),
        [sym_list] = STATE(16),
        [sym_list_comprehension] = STATE(16),
        [sym_dictionary] = STATE(16),
        [sym_dictionary_comprehension] = STATE(16),
        [sym_set] = STATE(16),
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
        [sym__indent] = ACTIONS(669),
    },
    [362] = {
        [sym_except_clause] = STATE(365),
        [sym_finally_clause] = STATE(366),
        [aux_sym_try_statement_repeat1] = STATE(367),
        [anon_sym_except] = ACTIONS(827),
        [anon_sym_finally] = ACTIONS(829),
        [sym_comment] = ACTIONS(73),
    },
    [363] = {
        [sym__expression] = STATE(377),
        [sym_binary_operator] = STATE(36),
        [sym_subscript] = STATE(36),
        [sym_call] = STATE(36),
        [sym_list] = STATE(36),
        [sym_list_comprehension] = STATE(36),
        [sym_dictionary] = STATE(36),
        [sym_dictionary_comprehension] = STATE(36),
        [sym_set] = STATE(36),
        [anon_sym_LBRACK] = ACTIONS(117),
        [anon_sym_LBRACE] = ACTIONS(119),
        [sym_number] = ACTIONS(121),
        [sym_identifier] = ACTIONS(121),
        [sym_comment] = ACTIONS(73),
    },
    [364] = {
        [anon_sym_COLON] = ACTIONS(831),
        [sym_comment] = ACTIONS(73),
    },
    [365] = {
        [ts_builtin_sym_end] = ACTIONS(681),
        [anon_sym_SEMI] = ACTIONS(681),
        [anon_sym_print] = ACTIONS(679),
        [anon_sym_return] = ACTIONS(679),
        [anon_sym_del] = ACTIONS(679),
        [sym_pass_statement] = ACTIONS(679),
        [sym_break_statement] = ACTIONS(679),
        [sym_continue_statement] = ACTIONS(679),
        [anon_sym_if] = ACTIONS(679),
        [anon_sym_else] = ACTIONS(679),
        [anon_sym_for] = ACTIONS(679),
        [anon_sym_while] = ACTIONS(679),
        [anon_sym_try] = ACTIONS(679),
        [anon_sym_except] = ACTIONS(679),
        [anon_sym_finally] = ACTIONS(679),
        [anon_sym_with] = ACTIONS(679),
        [anon_sym_def] = ACTIONS(679),
        [anon_sym_class] = ACTIONS(679),
        [anon_sym_AT] = ACTIONS(681),
        [anon_sym_LBRACK] = ACTIONS(681),
        [anon_sym_LBRACE] = ACTIONS(681),
        [sym_number] = ACTIONS(679),
        [sym_identifier] = ACTIONS(683),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(681),
    },
    [366] = {
        [ts_builtin_sym_end] = ACTIONS(687),
        [anon_sym_SEMI] = ACTIONS(687),
        [anon_sym_print] = ACTIONS(685),
        [anon_sym_return] = ACTIONS(685),
        [anon_sym_del] = ACTIONS(685),
        [sym_pass_statement] = ACTIONS(685),
        [sym_break_statement] = ACTIONS(685),
        [sym_continue_statement] = ACTIONS(685),
        [anon_sym_if] = ACTIONS(685),
        [anon_sym_for] = ACTIONS(685),
        [anon_sym_while] = ACTIONS(685),
        [anon_sym_try] = ACTIONS(685),
        [anon_sym_with] = ACTIONS(685),
        [anon_sym_def] = ACTIONS(685),
        [anon_sym_class] = ACTIONS(685),
        [anon_sym_AT] = ACTIONS(687),
        [anon_sym_LBRACK] = ACTIONS(687),
        [anon_sym_LBRACE] = ACTIONS(687),
        [sym_number] = ACTIONS(685),
        [sym_identifier] = ACTIONS(689),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(687),
    },
    [367] = {
        [sym_else_clause] = STATE(369),
        [sym_except_clause] = STATE(370),
        [sym_finally_clause] = STATE(371),
        [ts_builtin_sym_end] = ACTIONS(687),
        [anon_sym_SEMI] = ACTIONS(687),
        [anon_sym_print] = ACTIONS(685),
        [anon_sym_return] = ACTIONS(685),
        [anon_sym_del] = ACTIONS(685),
        [sym_pass_statement] = ACTIONS(685),
        [sym_break_statement] = ACTIONS(685),
        [sym_continue_statement] = ACTIONS(685),
        [anon_sym_if] = ACTIONS(685),
        [anon_sym_else] = ACTIONS(833),
        [anon_sym_for] = ACTIONS(685),
        [anon_sym_while] = ACTIONS(685),
        [anon_sym_try] = ACTIONS(685),
        [anon_sym_except] = ACTIONS(835),
        [anon_sym_finally] = ACTIONS(837),
        [anon_sym_with] = ACTIONS(685),
        [anon_sym_def] = ACTIONS(685),
        [anon_sym_class] = ACTIONS(685),
        [anon_sym_AT] = ACTIONS(687),
        [anon_sym_LBRACK] = ACTIONS(687),
        [anon_sym_LBRACE] = ACTIONS(687),
        [sym_number] = ACTIONS(685),
        [sym_identifier] = ACTIONS(689),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(687),
    },
    [368] = {
        [anon_sym_COLON] = ACTIONS(839),
        [sym_comment] = ACTIONS(73),
    },
    [369] = {
        [sym_finally_clause] = STATE(372),
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
        [anon_sym_finally] = ACTIONS(837),
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
    [370] = {
        [ts_builtin_sym_end] = ACTIONS(707),
        [anon_sym_SEMI] = ACTIONS(707),
        [anon_sym_print] = ACTIONS(705),
        [anon_sym_return] = ACTIONS(705),
        [anon_sym_del] = ACTIONS(705),
        [sym_pass_statement] = ACTIONS(705),
        [sym_break_statement] = ACTIONS(705),
        [sym_continue_statement] = ACTIONS(705),
        [anon_sym_if] = ACTIONS(705),
        [anon_sym_else] = ACTIONS(705),
        [anon_sym_for] = ACTIONS(705),
        [anon_sym_while] = ACTIONS(705),
        [anon_sym_try] = ACTIONS(705),
        [anon_sym_except] = ACTIONS(705),
        [anon_sym_finally] = ACTIONS(705),
        [anon_sym_with] = ACTIONS(705),
        [anon_sym_def] = ACTIONS(705),
        [anon_sym_class] = ACTIONS(705),
        [anon_sym_AT] = ACTIONS(707),
        [anon_sym_LBRACK] = ACTIONS(707),
        [anon_sym_LBRACE] = ACTIONS(707),
        [sym_number] = ACTIONS(705),
        [sym_identifier] = ACTIONS(709),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(707),
    },
    [371] = {
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
    [372] = {
        [ts_builtin_sym_end] = ACTIONS(713),
        [anon_sym_SEMI] = ACTIONS(713),
        [anon_sym_print] = ACTIONS(711),
        [anon_sym_return] = ACTIONS(711),
        [anon_sym_del] = ACTIONS(711),
        [sym_pass_statement] = ACTIONS(711),
        [sym_break_statement] = ACTIONS(711),
        [sym_continue_statement] = ACTIONS(711),
        [anon_sym_if] = ACTIONS(711),
        [anon_sym_for] = ACTIONS(711),
        [anon_sym_while] = ACTIONS(711),
        [anon_sym_try] = ACTIONS(711),
        [anon_sym_with] = ACTIONS(711),
        [anon_sym_def] = ACTIONS(711),
        [anon_sym_class] = ACTIONS(711),
        [anon_sym_AT] = ACTIONS(713),
        [anon_sym_LBRACK] = ACTIONS(713),
        [anon_sym_LBRACE] = ACTIONS(713),
        [sym_number] = ACTIONS(711),
        [sym_identifier] = ACTIONS(715),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(713),
    },
    [373] = {
        [sym__simple_statement] = STATE(222),
        [sym_print_statement] = STATE(5),
        [sym_expression_statement] = STATE(5),
        [sym_return_statement] = STATE(5),
        [sym_delete_statement] = STATE(5),
        [sym__suite] = STATE(374),
        [sym__expression] = STATE(23),
        [sym_binary_operator] = STATE(16),
        [sym_subscript] = STATE(16),
        [sym_call] = STATE(16),
        [sym_list] = STATE(16),
        [sym_list_comprehension] = STATE(16),
        [sym_dictionary] = STATE(16),
        [sym_dictionary_comprehension] = STATE(16),
        [sym_set] = STATE(16),
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
        [sym__indent] = ACTIONS(497),
    },
    [374] = {
        [ts_builtin_sym_end] = ACTIONS(719),
        [anon_sym_SEMI] = ACTIONS(719),
        [anon_sym_print] = ACTIONS(717),
        [anon_sym_return] = ACTIONS(717),
        [anon_sym_del] = ACTIONS(717),
        [sym_pass_statement] = ACTIONS(717),
        [sym_break_statement] = ACTIONS(717),
        [sym_continue_statement] = ACTIONS(717),
        [anon_sym_if] = ACTIONS(717),
        [anon_sym_for] = ACTIONS(717),
        [anon_sym_while] = ACTIONS(717),
        [anon_sym_try] = ACTIONS(717),
        [anon_sym_finally] = ACTIONS(717),
        [anon_sym_with] = ACTIONS(717),
        [anon_sym_def] = ACTIONS(717),
        [anon_sym_class] = ACTIONS(717),
        [anon_sym_AT] = ACTIONS(719),
        [anon_sym_LBRACK] = ACTIONS(719),
        [anon_sym_LBRACE] = ACTIONS(719),
        [sym_number] = ACTIONS(717),
        [sym_identifier] = ACTIONS(721),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(719),
    },
    [375] = {
        [sym__simple_statement] = STATE(222),
        [sym_print_statement] = STATE(5),
        [sym_expression_statement] = STATE(5),
        [sym_return_statement] = STATE(5),
        [sym_delete_statement] = STATE(5),
        [sym__suite] = STATE(376),
        [sym__expression] = STATE(23),
        [sym_binary_operator] = STATE(16),
        [sym_subscript] = STATE(16),
        [sym_call] = STATE(16),
        [sym_list] = STATE(16),
        [sym_list_comprehension] = STATE(16),
        [sym_dictionary] = STATE(16),
        [sym_dictionary_comprehension] = STATE(16),
        [sym_set] = STATE(16),
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
        [sym__indent] = ACTIONS(497),
    },
    [376] = {
        [ts_builtin_sym_end] = ACTIONS(725),
        [anon_sym_SEMI] = ACTIONS(725),
        [anon_sym_print] = ACTIONS(723),
        [anon_sym_return] = ACTIONS(723),
        [anon_sym_del] = ACTIONS(723),
        [sym_pass_statement] = ACTIONS(723),
        [sym_break_statement] = ACTIONS(723),
        [sym_continue_statement] = ACTIONS(723),
        [anon_sym_if] = ACTIONS(723),
        [anon_sym_for] = ACTIONS(723),
        [anon_sym_while] = ACTIONS(723),
        [anon_sym_try] = ACTIONS(723),
        [anon_sym_with] = ACTIONS(723),
        [anon_sym_def] = ACTIONS(723),
        [anon_sym_class] = ACTIONS(723),
        [anon_sym_AT] = ACTIONS(725),
        [anon_sym_LBRACK] = ACTIONS(725),
        [anon_sym_LBRACE] = ACTIONS(725),
        [sym_number] = ACTIONS(723),
        [sym_identifier] = ACTIONS(727),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(725),
    },
    [377] = {
        [anon_sym_COMMA] = ACTIONS(841),
        [anon_sym_COLON] = ACTIONS(843),
        [anon_sym_as] = ACTIONS(841),
        [anon_sym_LPAREN] = ACTIONS(209),
        [anon_sym_PLUS] = ACTIONS(211),
        [anon_sym_LBRACK] = ACTIONS(213),
        [sym_comment] = ACTIONS(73),
    },
    [378] = {
        [sym__expression] = STATE(380),
        [sym_binary_operator] = STATE(36),
        [sym_subscript] = STATE(36),
        [sym_call] = STATE(36),
        [sym_list] = STATE(36),
        [sym_list_comprehension] = STATE(36),
        [sym_dictionary] = STATE(36),
        [sym_dictionary_comprehension] = STATE(36),
        [sym_set] = STATE(36),
        [anon_sym_LBRACK] = ACTIONS(117),
        [anon_sym_LBRACE] = ACTIONS(119),
        [sym_number] = ACTIONS(121),
        [sym_identifier] = ACTIONS(121),
        [sym_comment] = ACTIONS(73),
    },
    [379] = {
        [sym__simple_statement] = STATE(222),
        [sym_print_statement] = STATE(5),
        [sym_expression_statement] = STATE(5),
        [sym_return_statement] = STATE(5),
        [sym_delete_statement] = STATE(5),
        [sym__suite] = STATE(383),
        [sym__expression] = STATE(23),
        [sym_binary_operator] = STATE(16),
        [sym_subscript] = STATE(16),
        [sym_call] = STATE(16),
        [sym_list] = STATE(16),
        [sym_list_comprehension] = STATE(16),
        [sym_dictionary] = STATE(16),
        [sym_dictionary_comprehension] = STATE(16),
        [sym_set] = STATE(16),
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
        [sym__indent] = ACTIONS(497),
    },
    [380] = {
        [anon_sym_COLON] = ACTIONS(845),
        [anon_sym_LPAREN] = ACTIONS(209),
        [anon_sym_PLUS] = ACTIONS(211),
        [anon_sym_LBRACK] = ACTIONS(213),
        [sym_comment] = ACTIONS(73),
    },
    [381] = {
        [sym__simple_statement] = STATE(222),
        [sym_print_statement] = STATE(5),
        [sym_expression_statement] = STATE(5),
        [sym_return_statement] = STATE(5),
        [sym_delete_statement] = STATE(5),
        [sym__suite] = STATE(382),
        [sym__expression] = STATE(23),
        [sym_binary_operator] = STATE(16),
        [sym_subscript] = STATE(16),
        [sym_call] = STATE(16),
        [sym_list] = STATE(16),
        [sym_list_comprehension] = STATE(16),
        [sym_dictionary] = STATE(16),
        [sym_dictionary_comprehension] = STATE(16),
        [sym_set] = STATE(16),
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
        [sym__indent] = ACTIONS(497),
    },
    [382] = {
        [ts_builtin_sym_end] = ACTIONS(737),
        [anon_sym_SEMI] = ACTIONS(737),
        [anon_sym_print] = ACTIONS(735),
        [anon_sym_return] = ACTIONS(735),
        [anon_sym_del] = ACTIONS(735),
        [sym_pass_statement] = ACTIONS(735),
        [sym_break_statement] = ACTIONS(735),
        [sym_continue_statement] = ACTIONS(735),
        [anon_sym_if] = ACTIONS(735),
        [anon_sym_else] = ACTIONS(735),
        [anon_sym_for] = ACTIONS(735),
        [anon_sym_while] = ACTIONS(735),
        [anon_sym_try] = ACTIONS(735),
        [anon_sym_except] = ACTIONS(735),
        [anon_sym_finally] = ACTIONS(735),
        [anon_sym_with] = ACTIONS(735),
        [anon_sym_def] = ACTIONS(735),
        [anon_sym_class] = ACTIONS(735),
        [anon_sym_AT] = ACTIONS(737),
        [anon_sym_LBRACK] = ACTIONS(737),
        [anon_sym_LBRACE] = ACTIONS(737),
        [sym_number] = ACTIONS(735),
        [sym_identifier] = ACTIONS(739),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(737),
    },
    [383] = {
        [ts_builtin_sym_end] = ACTIONS(743),
        [anon_sym_SEMI] = ACTIONS(743),
        [anon_sym_print] = ACTIONS(741),
        [anon_sym_return] = ACTIONS(741),
        [anon_sym_del] = ACTIONS(741),
        [sym_pass_statement] = ACTIONS(741),
        [sym_break_statement] = ACTIONS(741),
        [sym_continue_statement] = ACTIONS(741),
        [anon_sym_if] = ACTIONS(741),
        [anon_sym_else] = ACTIONS(741),
        [anon_sym_for] = ACTIONS(741),
        [anon_sym_while] = ACTIONS(741),
        [anon_sym_try] = ACTIONS(741),
        [anon_sym_except] = ACTIONS(741),
        [anon_sym_finally] = ACTIONS(741),
        [anon_sym_with] = ACTIONS(741),
        [anon_sym_def] = ACTIONS(741),
        [anon_sym_class] = ACTIONS(741),
        [anon_sym_AT] = ACTIONS(743),
        [anon_sym_LBRACK] = ACTIONS(743),
        [anon_sym_LBRACE] = ACTIONS(743),
        [sym_number] = ACTIONS(741),
        [sym_identifier] = ACTIONS(745),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(743),
    },
    [384] = {
        [anon_sym_COLON] = ACTIONS(847),
        [anon_sym_LPAREN] = ACTIONS(209),
        [anon_sym_PLUS] = ACTIONS(211),
        [anon_sym_LBRACK] = ACTIONS(213),
        [sym_comment] = ACTIONS(73),
    },
    [385] = {
        [sym__simple_statement] = STATE(222),
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
        [sym__indent] = ACTIONS(497),
    },
    [386] = {
        [sym_else_clause] = STATE(387),
        [ts_builtin_sym_end] = ACTIONS(753),
        [anon_sym_SEMI] = ACTIONS(753),
        [anon_sym_print] = ACTIONS(751),
        [anon_sym_return] = ACTIONS(751),
        [anon_sym_del] = ACTIONS(751),
        [sym_pass_statement] = ACTIONS(751),
        [sym_break_statement] = ACTIONS(751),
        [sym_continue_statement] = ACTIONS(751),
        [anon_sym_if] = ACTIONS(751),
        [anon_sym_else] = ACTIONS(833),
        [anon_sym_for] = ACTIONS(751),
        [anon_sym_while] = ACTIONS(751),
        [anon_sym_try] = ACTIONS(751),
        [anon_sym_with] = ACTIONS(751),
        [anon_sym_def] = ACTIONS(751),
        [anon_sym_class] = ACTIONS(751),
        [anon_sym_AT] = ACTIONS(753),
        [anon_sym_LBRACK] = ACTIONS(753),
        [anon_sym_LBRACE] = ACTIONS(753),
        [sym_number] = ACTIONS(751),
        [sym_identifier] = ACTIONS(755),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(753),
    },
    [387] = {
        [ts_builtin_sym_end] = ACTIONS(759),
        [anon_sym_SEMI] = ACTIONS(759),
        [anon_sym_print] = ACTIONS(757),
        [anon_sym_return] = ACTIONS(757),
        [anon_sym_del] = ACTIONS(757),
        [sym_pass_statement] = ACTIONS(757),
        [sym_break_statement] = ACTIONS(757),
        [sym_continue_statement] = ACTIONS(757),
        [anon_sym_if] = ACTIONS(757),
        [anon_sym_for] = ACTIONS(757),
        [anon_sym_while] = ACTIONS(757),
        [anon_sym_try] = ACTIONS(757),
        [anon_sym_with] = ACTIONS(757),
        [anon_sym_def] = ACTIONS(757),
        [anon_sym_class] = ACTIONS(757),
        [anon_sym_AT] = ACTIONS(759),
        [anon_sym_LBRACK] = ACTIONS(759),
        [anon_sym_LBRACE] = ACTIONS(759),
        [sym_number] = ACTIONS(757),
        [sym_identifier] = ACTIONS(761),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(759),
    },
    [388] = {
        [anon_sym_in] = ACTIONS(849),
        [sym_comment] = ACTIONS(73),
    },
    [389] = {
        [sym_expression_list] = STATE(390),
        [sym__expression] = STATE(109),
        [sym_binary_operator] = STATE(36),
        [sym_subscript] = STATE(36),
        [sym_call] = STATE(36),
        [sym_list] = STATE(36),
        [sym_list_comprehension] = STATE(36),
        [sym_dictionary] = STATE(36),
        [sym_dictionary_comprehension] = STATE(36),
        [sym_set] = STATE(36),
        [anon_sym_LBRACK] = ACTIONS(117),
        [anon_sym_LBRACE] = ACTIONS(119),
        [sym_number] = ACTIONS(121),
        [sym_identifier] = ACTIONS(121),
        [sym_comment] = ACTIONS(73),
    },
    [390] = {
        [anon_sym_COLON] = ACTIONS(851),
        [sym_comment] = ACTIONS(73),
    },
    [391] = {
        [sym__simple_statement] = STATE(222),
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
        [sym__indent] = ACTIONS(497),
    },
    [392] = {
        [sym_else_clause] = STATE(393),
        [ts_builtin_sym_end] = ACTIONS(769),
        [anon_sym_SEMI] = ACTIONS(769),
        [anon_sym_print] = ACTIONS(767),
        [anon_sym_return] = ACTIONS(767),
        [anon_sym_del] = ACTIONS(767),
        [sym_pass_statement] = ACTIONS(767),
        [sym_break_statement] = ACTIONS(767),
        [sym_continue_statement] = ACTIONS(767),
        [anon_sym_if] = ACTIONS(767),
        [anon_sym_else] = ACTIONS(833),
        [anon_sym_for] = ACTIONS(767),
        [anon_sym_while] = ACTIONS(767),
        [anon_sym_try] = ACTIONS(767),
        [anon_sym_with] = ACTIONS(767),
        [anon_sym_def] = ACTIONS(767),
        [anon_sym_class] = ACTIONS(767),
        [anon_sym_AT] = ACTIONS(769),
        [anon_sym_LBRACK] = ACTIONS(769),
        [anon_sym_LBRACE] = ACTIONS(769),
        [sym_number] = ACTIONS(767),
        [sym_identifier] = ACTIONS(771),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(769),
    },
    [393] = {
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
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(775),
    },
    [394] = {
        [anon_sym_COLON] = ACTIONS(853),
        [anon_sym_LPAREN] = ACTIONS(209),
        [anon_sym_PLUS] = ACTIONS(211),
        [anon_sym_LBRACK] = ACTIONS(213),
        [sym_comment] = ACTIONS(73),
    },
    [395] = {
        [sym__simple_statement] = STATE(222),
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
        [sym__indent] = ACTIONS(497),
    },
    [396] = {
        [sym_elif_clause] = STATE(398),
        [sym_else_clause] = STATE(399),
        [aux_sym_if_statement_repeat1] = STATE(400),
        [ts_builtin_sym_end] = ACTIONS(785),
        [anon_sym_SEMI] = ACTIONS(785),
        [anon_sym_print] = ACTIONS(781),
        [anon_sym_return] = ACTIONS(781),
        [anon_sym_del] = ACTIONS(781),
        [sym_pass_statement] = ACTIONS(781),
        [sym_break_statement] = ACTIONS(781),
        [sym_continue_statement] = ACTIONS(781),
        [anon_sym_if] = ACTIONS(781),
        [anon_sym_elif] = ACTIONS(855),
        [anon_sym_else] = ACTIONS(833),
        [anon_sym_for] = ACTIONS(781),
        [anon_sym_while] = ACTIONS(781),
        [anon_sym_try] = ACTIONS(781),
        [anon_sym_with] = ACTIONS(781),
        [anon_sym_def] = ACTIONS(781),
        [anon_sym_class] = ACTIONS(781),
        [anon_sym_AT] = ACTIONS(785),
        [anon_sym_LBRACK] = ACTIONS(785),
        [anon_sym_LBRACE] = ACTIONS(785),
        [sym_number] = ACTIONS(781),
        [sym_identifier] = ACTIONS(787),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(785),
    },
    [397] = {
        [sym__expression] = STATE(403),
        [sym_binary_operator] = STATE(36),
        [sym_subscript] = STATE(36),
        [sym_call] = STATE(36),
        [sym_list] = STATE(36),
        [sym_list_comprehension] = STATE(36),
        [sym_dictionary] = STATE(36),
        [sym_dictionary_comprehension] = STATE(36),
        [sym_set] = STATE(36),
        [anon_sym_LBRACK] = ACTIONS(117),
        [anon_sym_LBRACE] = ACTIONS(119),
        [sym_number] = ACTIONS(121),
        [sym_identifier] = ACTIONS(121),
        [sym_comment] = ACTIONS(73),
    },
    [398] = {
        [ts_builtin_sym_end] = ACTIONS(791),
        [anon_sym_SEMI] = ACTIONS(791),
        [anon_sym_print] = ACTIONS(789),
        [anon_sym_return] = ACTIONS(789),
        [anon_sym_del] = ACTIONS(789),
        [sym_pass_statement] = ACTIONS(789),
        [sym_break_statement] = ACTIONS(789),
        [sym_continue_statement] = ACTIONS(789),
        [anon_sym_if] = ACTIONS(789),
        [anon_sym_elif] = ACTIONS(789),
        [anon_sym_else] = ACTIONS(789),
        [anon_sym_for] = ACTIONS(789),
        [anon_sym_while] = ACTIONS(789),
        [anon_sym_try] = ACTIONS(789),
        [anon_sym_with] = ACTIONS(789),
        [anon_sym_def] = ACTIONS(789),
        [anon_sym_class] = ACTIONS(789),
        [anon_sym_AT] = ACTIONS(791),
        [anon_sym_LBRACK] = ACTIONS(791),
        [anon_sym_LBRACE] = ACTIONS(791),
        [sym_number] = ACTIONS(789),
        [sym_identifier] = ACTIONS(793),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(791),
    },
    [399] = {
        [ts_builtin_sym_end] = ACTIONS(797),
        [anon_sym_SEMI] = ACTIONS(797),
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
        [anon_sym_AT] = ACTIONS(797),
        [anon_sym_LBRACK] = ACTIONS(797),
        [anon_sym_LBRACE] = ACTIONS(797),
        [sym_number] = ACTIONS(795),
        [sym_identifier] = ACTIONS(799),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(797),
    },
    [400] = {
        [sym_elif_clause] = STATE(401),
        [sym_else_clause] = STATE(402),
        [ts_builtin_sym_end] = ACTIONS(797),
        [anon_sym_SEMI] = ACTIONS(797),
        [anon_sym_print] = ACTIONS(795),
        [anon_sym_return] = ACTIONS(795),
        [anon_sym_del] = ACTIONS(795),
        [sym_pass_statement] = ACTIONS(795),
        [sym_break_statement] = ACTIONS(795),
        [sym_continue_statement] = ACTIONS(795),
        [anon_sym_if] = ACTIONS(795),
        [anon_sym_elif] = ACTIONS(855),
        [anon_sym_else] = ACTIONS(833),
        [anon_sym_for] = ACTIONS(795),
        [anon_sym_while] = ACTIONS(795),
        [anon_sym_try] = ACTIONS(795),
        [anon_sym_with] = ACTIONS(795),
        [anon_sym_def] = ACTIONS(795),
        [anon_sym_class] = ACTIONS(795),
        [anon_sym_AT] = ACTIONS(797),
        [anon_sym_LBRACK] = ACTIONS(797),
        [anon_sym_LBRACE] = ACTIONS(797),
        [sym_number] = ACTIONS(795),
        [sym_identifier] = ACTIONS(799),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(797),
    },
    [401] = {
        [ts_builtin_sym_end] = ACTIONS(803),
        [anon_sym_SEMI] = ACTIONS(803),
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
        [anon_sym_with] = ACTIONS(801),
        [anon_sym_def] = ACTIONS(801),
        [anon_sym_class] = ACTIONS(801),
        [anon_sym_AT] = ACTIONS(803),
        [anon_sym_LBRACK] = ACTIONS(803),
        [anon_sym_LBRACE] = ACTIONS(803),
        [sym_number] = ACTIONS(801),
        [sym_identifier] = ACTIONS(805),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(803),
    },
    [402] = {
        [ts_builtin_sym_end] = ACTIONS(809),
        [anon_sym_SEMI] = ACTIONS(809),
        [anon_sym_print] = ACTIONS(807),
        [anon_sym_return] = ACTIONS(807),
        [anon_sym_del] = ACTIONS(807),
        [sym_pass_statement] = ACTIONS(807),
        [sym_break_statement] = ACTIONS(807),
        [sym_continue_statement] = ACTIONS(807),
        [anon_sym_if] = ACTIONS(807),
        [anon_sym_for] = ACTIONS(807),
        [anon_sym_while] = ACTIONS(807),
        [anon_sym_try] = ACTIONS(807),
        [anon_sym_with] = ACTIONS(807),
        [anon_sym_def] = ACTIONS(807),
        [anon_sym_class] = ACTIONS(807),
        [anon_sym_AT] = ACTIONS(809),
        [anon_sym_LBRACK] = ACTIONS(809),
        [anon_sym_LBRACE] = ACTIONS(809),
        [sym_number] = ACTIONS(807),
        [sym_identifier] = ACTIONS(811),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(809),
    },
    [403] = {
        [anon_sym_COLON] = ACTIONS(857),
        [anon_sym_LPAREN] = ACTIONS(209),
        [anon_sym_PLUS] = ACTIONS(211),
        [anon_sym_LBRACK] = ACTIONS(213),
        [sym_comment] = ACTIONS(73),
    },
    [404] = {
        [sym__simple_statement] = STATE(222),
        [sym_print_statement] = STATE(5),
        [sym_expression_statement] = STATE(5),
        [sym_return_statement] = STATE(5),
        [sym_delete_statement] = STATE(5),
        [sym__suite] = STATE(405),
        [sym__expression] = STATE(23),
        [sym_binary_operator] = STATE(16),
        [sym_subscript] = STATE(16),
        [sym_call] = STATE(16),
        [sym_list] = STATE(16),
        [sym_list_comprehension] = STATE(16),
        [sym_dictionary] = STATE(16),
        [sym_dictionary_comprehension] = STATE(16),
        [sym_set] = STATE(16),
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
        [sym__indent] = ACTIONS(497),
    },
    [405] = {
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
    [406] = {
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(859),
    },
    [407] = {
        [aux_sym_print_statement_repeat1] = STATE(409),
        [anon_sym_COMMA] = ACTIONS(861),
        [anon_sym_LPAREN] = ACTIONS(161),
        [anon_sym_PLUS] = ACTIONS(163),
        [anon_sym_LBRACK] = ACTIONS(165),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(331),
    },
    [408] = {
        [sym__expression] = STATE(412),
        [sym_binary_operator] = STATE(16),
        [sym_subscript] = STATE(16),
        [sym_call] = STATE(16),
        [sym_list] = STATE(16),
        [sym_list_comprehension] = STATE(16),
        [sym_dictionary] = STATE(16),
        [sym_dictionary_comprehension] = STATE(16),
        [sym_set] = STATE(16),
        [anon_sym_LBRACK] = ACTIONS(107),
        [anon_sym_LBRACE] = ACTIONS(109),
        [sym_number] = ACTIONS(111),
        [sym_identifier] = ACTIONS(111),
        [sym_comment] = ACTIONS(73),
    },
    [409] = {
        [anon_sym_COMMA] = ACTIONS(863),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(335),
    },
    [410] = {
        [sym__expression] = STATE(411),
        [sym_binary_operator] = STATE(16),
        [sym_subscript] = STATE(16),
        [sym_call] = STATE(16),
        [sym_list] = STATE(16),
        [sym_list_comprehension] = STATE(16),
        [sym_dictionary] = STATE(16),
        [sym_dictionary_comprehension] = STATE(16),
        [sym_set] = STATE(16),
        [anon_sym_LBRACK] = ACTIONS(107),
        [anon_sym_LBRACE] = ACTIONS(109),
        [sym_number] = ACTIONS(111),
        [sym_identifier] = ACTIONS(111),
        [sym_comment] = ACTIONS(73),
    },
    [411] = {
        [anon_sym_COMMA] = ACTIONS(337),
        [anon_sym_LPAREN] = ACTIONS(161),
        [anon_sym_PLUS] = ACTIONS(163),
        [anon_sym_LBRACK] = ACTIONS(165),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(337),
    },
    [412] = {
        [anon_sym_COMMA] = ACTIONS(339),
        [anon_sym_LPAREN] = ACTIONS(161),
        [anon_sym_PLUS] = ACTIONS(163),
        [anon_sym_LBRACK] = ACTIONS(165),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(339),
    },
    [413] = {
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(865),
    },
    [414] = {
        [aux_sym_print_statement_repeat1] = STATE(415),
        [anon_sym_COMMA] = ACTIONS(861),
        [anon_sym_LPAREN] = ACTIONS(161),
        [anon_sym_PLUS] = ACTIONS(163),
        [anon_sym_LBRACK] = ACTIONS(165),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(867),
    },
    [415] = {
        [anon_sym_COMMA] = ACTIONS(863),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(869),
    },
    [416] = {
        [sym_with_item] = STATE(600),
        [sym_dictionary_splat_parameter] = STATE(537),
        [sym__expression] = STATE(601),
        [sym_binary_operator] = STATE(16),
        [sym_subscript] = STATE(16),
        [sym_call] = STATE(16),
        [sym_keyword_argument] = STATE(602),
        [sym_dictionary_splat_argument] = STATE(603),
        [sym_list] = STATE(16),
        [sym_list_comprehension] = STATE(16),
        [sym_dictionary] = STATE(16),
        [sym_dictionary_comprehension] = STATE(16),
        [sym_set] = STATE(16),
        [sym_pair] = STATE(604),
        [anon_sym_RPAREN] = ACTIONS(871),
        [anon_sym_STAR] = ACTIONS(873),
        [anon_sym_LBRACK] = ACTIONS(879),
        [anon_sym_DOT_DOT_DOT] = ACTIONS(883),
        [anon_sym_RBRACK] = ACTIONS(885),
        [anon_sym_STAR_STAR] = ACTIONS(887),
        [anon_sym_LBRACE] = ACTIONS(891),
        [anon_sym_RBRACE] = ACTIONS(895),
        [sym_number] = ACTIONS(897),
        [sym_identifier] = ACTIONS(901),
        [sym_comment] = ACTIONS(73),
    },
    [417] = {
        [sym__expression] = STATE(591),
        [sym_binary_operator] = STATE(36),
        [sym_subscript] = STATE(36),
        [sym_call] = STATE(36),
        [sym_list] = STATE(36),
        [sym_list_comprehension] = STATE(36),
        [sym_dictionary] = STATE(36),
        [sym_dictionary_comprehension] = STATE(36),
        [sym_set] = STATE(36),
        [anon_sym_LBRACK] = ACTIONS(117),
        [anon_sym_LBRACE] = ACTIONS(119),
        [sym_number] = ACTIONS(121),
        [sym_identifier] = ACTIONS(121),
        [sym_comment] = ACTIONS(73),
    },
    [418] = {
        [sym__simple_statement] = STATE(480),
        [sym_print_statement] = STATE(5),
        [sym_expression_statement] = STATE(5),
        [sym_return_statement] = STATE(5),
        [sym_delete_statement] = STATE(5),
        [sym__suite] = STATE(460),
        [sym__expression] = STATE(519),
        [sym_binary_operator] = STATE(16),
        [sym_subscript] = STATE(16),
        [sym_call] = STATE(16),
        [sym_list] = STATE(16),
        [sym_list_comprehension] = STATE(16),
        [sym_dictionary] = STATE(16),
        [sym_dictionary_comprehension] = STATE(16),
        [sym_set] = STATE(16),
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
        [sym__indent] = ACTIONS(907),
    },
    [419] = {
        [sym__expression] = STATE(588),
        [sym_binary_operator] = STATE(36),
        [sym_subscript] = STATE(36),
        [sym_call] = STATE(36),
        [sym_list] = STATE(36),
        [sym_list_comprehension] = STATE(36),
        [sym_dictionary] = STATE(36),
        [sym_dictionary_comprehension] = STATE(36),
        [sym_set] = STATE(36),
        [anon_sym_LBRACK] = ACTIONS(117),
        [anon_sym_LBRACE] = ACTIONS(119),
        [sym_number] = ACTIONS(121),
        [sym_identifier] = ACTIONS(121),
        [sym_comment] = ACTIONS(73),
    },
    [420] = {
        [anon_sym_COLON] = ACTIONS(909),
        [sym_comment] = ACTIONS(73),
    },
    [421] = {
        [sym_expression_list] = STATE(587),
        [sym__expression] = STATE(109),
        [sym_binary_operator] = STATE(36),
        [sym_subscript] = STATE(36),
        [sym_call] = STATE(36),
        [sym_list] = STATE(36),
        [sym_list_comprehension] = STATE(36),
        [sym_dictionary] = STATE(36),
        [sym_dictionary_comprehension] = STATE(36),
        [sym_set] = STATE(36),
        [anon_sym_LBRACK] = ACTIONS(117),
        [anon_sym_LBRACE] = ACTIONS(119),
        [sym_number] = ACTIONS(121),
        [sym_identifier] = ACTIONS(121),
        [sym_comment] = ACTIONS(73),
    },
    [422] = {
        [sym_expression_list] = STATE(503),
        [sym__expression] = STATE(584),
        [sym_binary_operator] = STATE(36),
        [sym_subscript] = STATE(36),
        [sym_call] = STATE(36),
        [sym_list] = STATE(36),
        [sym_list_comprehension] = STATE(36),
        [sym_dictionary] = STATE(36),
        [sym_dictionary_comprehension] = STATE(36),
        [sym_set] = STATE(36),
        [anon_sym_LBRACK] = ACTIONS(117),
        [anon_sym_LBRACE] = ACTIONS(119),
        [sym_number] = ACTIONS(121),
        [sym_identifier] = ACTIONS(121),
        [sym_comment] = ACTIONS(73),
    },
    [423] = {
        [sym__expression] = STATE(580),
        [sym_binary_operator] = STATE(36),
        [sym_subscript] = STATE(36),
        [sym_call] = STATE(36),
        [sym_list] = STATE(36),
        [sym_list_comprehension] = STATE(36),
        [sym_dictionary] = STATE(36),
        [sym_dictionary_comprehension] = STATE(36),
        [sym_set] = STATE(36),
        [anon_sym_LBRACK] = ACTIONS(117),
        [anon_sym_LBRACE] = ACTIONS(119),
        [sym_number] = ACTIONS(121),
        [sym_identifier] = ACTIONS(121),
        [sym_comment] = ACTIONS(73),
    },
    [424] = {
        [anon_sym_COLON] = ACTIONS(911),
        [sym_comment] = ACTIONS(73),
    },
    [425] = {
        [sym__expression] = STATE(573),
        [sym_binary_operator] = STATE(36),
        [sym_subscript] = STATE(36),
        [sym_call] = STATE(36),
        [sym_list] = STATE(36),
        [sym_list_comprehension] = STATE(36),
        [sym_dictionary] = STATE(36),
        [sym_dictionary_comprehension] = STATE(36),
        [sym_set] = STATE(36),
        [anon_sym_LBRACK] = ACTIONS(117),
        [anon_sym_LBRACE] = ACTIONS(119),
        [sym_number] = ACTIONS(121),
        [sym_identifier] = ACTIONS(121),
        [sym_comment] = ACTIONS(73),
    },
    [426] = {
        [sym__expression] = STATE(572),
        [sym_binary_operator] = STATE(36),
        [sym_subscript] = STATE(36),
        [sym_call] = STATE(36),
        [sym_list] = STATE(36),
        [sym_list_comprehension] = STATE(36),
        [sym_dictionary] = STATE(36),
        [sym_dictionary_comprehension] = STATE(36),
        [sym_set] = STATE(36),
        [anon_sym_LBRACK] = ACTIONS(117),
        [anon_sym_LBRACE] = ACTIONS(119),
        [sym_number] = ACTIONS(121),
        [sym_identifier] = ACTIONS(121),
        [sym_comment] = ACTIONS(73),
    },
    [427] = {
        [anon_sym_COLON] = ACTIONS(913),
        [sym_comment] = ACTIONS(73),
    },
    [428] = {
        [sym_with_item] = STATE(569),
        [sym__expression] = STATE(288),
        [sym_binary_operator] = STATE(36),
        [sym_subscript] = STATE(36),
        [sym_call] = STATE(36),
        [sym_list] = STATE(36),
        [sym_list_comprehension] = STATE(36),
        [sym_dictionary] = STATE(36),
        [sym_dictionary_comprehension] = STATE(36),
        [sym_set] = STATE(36),
        [anon_sym_LBRACK] = ACTIONS(117),
        [anon_sym_LBRACE] = ACTIONS(119),
        [sym_number] = ACTIONS(121),
        [sym_identifier] = ACTIONS(121),
        [sym_comment] = ACTIONS(73),
    },
    [429] = {
        [sym_identifier] = ACTIONS(915),
        [sym_comment] = ACTIONS(73),
    },
    [430] = {
        [sym_default_parameter] = STATE(263),
        [sym_list_splat_parameter] = STATE(264),
        [sym_dictionary_splat_parameter] = STATE(265),
        [sym_expression_list] = STATE(549),
        [sym__expression] = STATE(563),
        [sym_binary_operator] = STATE(36),
        [sym_subscript] = STATE(36),
        [sym_call] = STATE(36),
        [sym_keyword_argument] = STATE(142),
        [sym_list_splat_argument] = STATE(143),
        [sym_dictionary_splat_argument] = STATE(144),
        [sym_list] = STATE(36),
        [sym_list_comprehension] = STATE(36),
        [sym_dictionary] = STATE(36),
        [sym_dictionary_comprehension] = STATE(36),
        [sym_set] = STATE(36),
        [aux_sym_parameters_repeat1] = STATE(266),
        [aux_sym_call_repeat1] = STATE(145),
        [anon_sym_RPAREN] = ACTIONS(573),
        [anon_sym_STAR] = ACTIONS(917),
        [anon_sym_LBRACK] = ACTIONS(117),
        [anon_sym_STAR_STAR] = ACTIONS(195),
        [anon_sym_LBRACE] = ACTIONS(119),
        [sym_number] = ACTIONS(121),
        [sym_identifier] = ACTIONS(919),
        [sym_comment] = ACTIONS(73),
    },
    [431] = {
        [anon_sym_COMMA] = ACTIONS(921),
        [anon_sym_COLON] = ACTIONS(927),
        [anon_sym_for] = ACTIONS(921),
        [anon_sym_in] = ACTIONS(921),
        [anon_sym_as] = ACTIONS(921),
        [anon_sym_LPAREN] = ACTIONS(921),
        [anon_sym_RPAREN] = ACTIONS(921),
        [anon_sym_PLUS] = ACTIONS(921),
        [anon_sym_LBRACK] = ACTIONS(921),
        [anon_sym_RBRACK] = ACTIONS(921),
        [anon_sym_RBRACE] = ACTIONS(921),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(939),
    },
    [432] = {
        [sym__expression] = STATE(560),
        [sym_binary_operator] = STATE(36),
        [sym_subscript] = STATE(36),
        [sym_call] = STATE(36),
        [sym_list] = STATE(36),
        [sym_list_comprehension] = STATE(36),
        [sym_dictionary] = STATE(36),
        [sym_dictionary_comprehension] = STATE(36),
        [sym_set] = STATE(36),
        [anon_sym_LBRACK] = ACTIONS(117),
        [anon_sym_LBRACE] = ACTIONS(119),
        [sym_number] = ACTIONS(121),
        [sym_identifier] = ACTIONS(121),
        [sym_comment] = ACTIONS(73),
    },
    [433] = {
        [sym__expression] = STATE(139),
        [sym_binary_operator] = STATE(36),
        [sym_subscript] = STATE(36),
        [sym_call] = STATE(36),
        [sym_list] = STATE(36),
        [sym_list_comprehension] = STATE(36),
        [sym_dictionary] = STATE(36),
        [sym_dictionary_comprehension] = STATE(36),
        [sym_set] = STATE(36),
        [anon_sym_STAR] = ACTIONS(589),
        [anon_sym_LBRACK] = ACTIONS(117),
        [anon_sym_LBRACE] = ACTIONS(119),
        [sym_number] = ACTIONS(121),
        [sym_identifier] = ACTIONS(947),
        [sym_comment] = ACTIONS(73),
    },
    [434] = {
        [sym_identifier] = ACTIONS(949),
        [sym_comment] = ACTIONS(73),
    },
    [435] = {
        [sym_identifier] = ACTIONS(951),
        [sym_comment] = ACTIONS(73),
    },
    [436] = {
        [sym__expression] = STATE(555),
        [sym_binary_operator] = STATE(16),
        [sym_subscript] = STATE(16),
        [sym_call] = STATE(16),
        [sym_list] = STATE(16),
        [sym_list_comprehension] = STATE(16),
        [sym_dictionary] = STATE(16),
        [sym_dictionary_comprehension] = STATE(16),
        [sym_set] = STATE(16),
        [anon_sym_LBRACK] = ACTIONS(107),
        [anon_sym_LBRACE] = ACTIONS(109),
        [sym_number] = ACTIONS(111),
        [sym_identifier] = ACTIONS(111),
        [sym_comment] = ACTIONS(73),
    },
    [437] = {
        [sym__expression] = STATE(551),
        [sym_binary_operator] = STATE(36),
        [sym_subscript] = STATE(36),
        [sym_call] = STATE(36),
        [sym_list] = STATE(36),
        [sym_list_comprehension] = STATE(36),
        [sym_dictionary] = STATE(36),
        [sym_dictionary_comprehension] = STATE(36),
        [sym_set] = STATE(36),
        [anon_sym_LBRACK] = ACTIONS(117),
        [anon_sym_DOT_DOT_DOT] = ACTIONS(199),
        [anon_sym_RBRACK] = ACTIONS(131),
        [anon_sym_LBRACE] = ACTIONS(119),
        [sym_number] = ACTIONS(121),
        [sym_identifier] = ACTIONS(121),
        [sym_comment] = ACTIONS(73),
    },
    [438] = {
        [aux_sym_subscript_repeat1] = STATE(43),
        [anon_sym_COMMA] = ACTIONS(953),
        [anon_sym_RBRACK] = ACTIONS(957),
        [sym_comment] = ACTIONS(73),
    },
    [439] = {
        [anon_sym_COMMA] = ACTIONS(961),
        [anon_sym_COLON] = ACTIONS(961),
        [anon_sym_for] = ACTIONS(961),
        [anon_sym_in] = ACTIONS(961),
        [anon_sym_as] = ACTIONS(961),
        [anon_sym_LPAREN] = ACTIONS(961),
        [anon_sym_RPAREN] = ACTIONS(961),
        [anon_sym_PLUS] = ACTIONS(961),
        [anon_sym_LBRACK] = ACTIONS(961),
        [anon_sym_RBRACK] = ACTIONS(961),
        [anon_sym_RBRACE] = ACTIONS(961),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(961),
    },
    [440] = {
        [anon_sym_COMMA] = ACTIONS(970),
        [anon_sym_COLON] = ACTIONS(970),
        [anon_sym_for] = ACTIONS(970),
        [anon_sym_in] = ACTIONS(970),
        [anon_sym_as] = ACTIONS(970),
        [anon_sym_LPAREN] = ACTIONS(970),
        [anon_sym_RPAREN] = ACTIONS(970),
        [anon_sym_PLUS] = ACTIONS(970),
        [anon_sym_LBRACK] = ACTIONS(970),
        [anon_sym_RBRACK] = ACTIONS(970),
        [anon_sym_RBRACE] = ACTIONS(970),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(970),
    },
    [441] = {
        [sym_parameters] = STATE(455),
        [aux_sym_dotted_name_repeat1] = STATE(211),
        [anon_sym_COMMA] = ACTIONS(979),
        [anon_sym_COLON] = ACTIONS(983),
        [anon_sym_for] = ACTIONS(135),
        [anon_sym_in] = ACTIONS(135),
        [anon_sym_as] = ACTIONS(135),
        [anon_sym_LPAREN] = ACTIONS(986),
        [anon_sym_RPAREN] = ACTIONS(992),
        [anon_sym_EQ] = ACTIONS(997),
        [anon_sym_DOT] = ACTIONS(999),
        [anon_sym_PLUS] = ACTIONS(135),
        [anon_sym_LBRACK] = ACTIONS(135),
        [anon_sym_RBRACK] = ACTIONS(135),
        [anon_sym_RBRACE] = ACTIONS(135),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(1003),
    },
    [442] = {
        [ts_builtin_sym_end] = ACTIONS(1008),
        [anon_sym_SEMI] = ACTIONS(1012),
        [anon_sym_print] = ACTIONS(1015),
        [anon_sym_return] = ACTIONS(1015),
        [anon_sym_del] = ACTIONS(1015),
        [sym_pass_statement] = ACTIONS(1015),
        [sym_break_statement] = ACTIONS(1015),
        [sym_continue_statement] = ACTIONS(1015),
        [anon_sym_if] = ACTIONS(1015),
        [anon_sym_elif] = ACTIONS(527),
        [anon_sym_else] = ACTIONS(527),
        [anon_sym_for] = ACTIONS(1015),
        [anon_sym_while] = ACTIONS(1015),
        [anon_sym_try] = ACTIONS(1015),
        [anon_sym_except] = ACTIONS(527),
        [anon_sym_finally] = ACTIONS(527),
        [anon_sym_with] = ACTIONS(1015),
        [anon_sym_def] = ACTIONS(1018),
        [anon_sym_class] = ACTIONS(1018),
        [anon_sym_AT] = ACTIONS(1023),
        [anon_sym_LBRACK] = ACTIONS(1012),
        [anon_sym_LBRACE] = ACTIONS(1012),
        [sym_number] = ACTIONS(1015),
        [sym_identifier] = ACTIONS(1028),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(1012),
        [sym__dedent] = ACTIONS(1012),
    },
    [443] = {
        [sym__statement] = STATE(232),
        [sym__simple_statement] = STATE(233),
        [sym_print_statement] = STATE(5),
        [sym_expression_statement] = STATE(5),
        [sym_return_statement] = STATE(5),
        [sym_delete_statement] = STATE(5),
        [sym__compound_statement] = STATE(234),
        [sym_if_statement] = STATE(235),
        [sym_for_statement] = STATE(235),
        [sym_while_statement] = STATE(235),
        [sym_try_statement] = STATE(235),
        [sym_with_statement] = STATE(235),
        [sym_function_definition] = STATE(235),
        [sym_class_definition] = STATE(235),
        [sym_decorated_definition] = STATE(235),
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
        [aux_sym_module_repeat1] = STATE(483),
        [aux_sym_decorated_definition_repeat1] = STATE(237),
        [anon_sym_print] = ACTIONS(83),
        [anon_sym_return] = ACTIONS(85),
        [anon_sym_del] = ACTIONS(87),
        [sym_pass_statement] = ACTIONS(89),
        [sym_break_statement] = ACTIONS(89),
        [sym_continue_statement] = ACTIONS(89),
        [anon_sym_if] = ACTIONS(503),
        [anon_sym_for] = ACTIONS(505),
        [anon_sym_while] = ACTIONS(507),
        [anon_sym_try] = ACTIONS(509),
        [anon_sym_with] = ACTIONS(511),
        [anon_sym_def] = ACTIONS(513),
        [anon_sym_class] = ACTIONS(515),
        [anon_sym_AT] = ACTIONS(105),
        [anon_sym_LBRACK] = ACTIONS(107),
        [anon_sym_LBRACE] = ACTIONS(109),
        [sym_number] = ACTIONS(111),
        [sym_identifier] = ACTIONS(113),
        [sym_comment] = ACTIONS(73),
        [sym__dedent] = ACTIONS(1031),
    },
    [444] = {
        [ts_builtin_sym_end] = ACTIONS(1033),
        [anon_sym_SEMI] = ACTIONS(1033),
        [anon_sym_print] = ACTIONS(1036),
        [anon_sym_return] = ACTIONS(1036),
        [anon_sym_del] = ACTIONS(1036),
        [sym_pass_statement] = ACTIONS(1036),
        [sym_break_statement] = ACTIONS(1036),
        [sym_continue_statement] = ACTIONS(1036),
        [anon_sym_if] = ACTIONS(1036),
        [anon_sym_elif] = ACTIONS(1036),
        [anon_sym_else] = ACTIONS(1036),
        [anon_sym_for] = ACTIONS(1036),
        [anon_sym_while] = ACTIONS(1036),
        [anon_sym_try] = ACTIONS(1036),
        [anon_sym_except] = ACTIONS(1036),
        [anon_sym_finally] = ACTIONS(1036),
        [anon_sym_with] = ACTIONS(1036),
        [anon_sym_def] = ACTIONS(1036),
        [anon_sym_class] = ACTIONS(1036),
        [anon_sym_AT] = ACTIONS(1033),
        [anon_sym_LBRACK] = ACTIONS(1033),
        [anon_sym_LBRACE] = ACTIONS(1033),
        [sym_number] = ACTIONS(1036),
        [sym_identifier] = ACTIONS(1039),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(1033),
        [sym__dedent] = ACTIONS(1033),
    },
    [445] = {
        [ts_builtin_sym_end] = ACTIONS(1042),
        [anon_sym_SEMI] = ACTIONS(1042),
        [anon_sym_print] = ACTIONS(1045),
        [anon_sym_return] = ACTIONS(1045),
        [anon_sym_del] = ACTIONS(1045),
        [sym_pass_statement] = ACTIONS(1045),
        [sym_break_statement] = ACTIONS(1045),
        [sym_continue_statement] = ACTIONS(1045),
        [anon_sym_if] = ACTIONS(1045),
        [anon_sym_for] = ACTIONS(1045),
        [anon_sym_while] = ACTIONS(1045),
        [anon_sym_try] = ACTIONS(1045),
        [anon_sym_with] = ACTIONS(1045),
        [anon_sym_def] = ACTIONS(1045),
        [anon_sym_class] = ACTIONS(1045),
        [anon_sym_AT] = ACTIONS(1042),
        [anon_sym_LBRACK] = ACTIONS(1042),
        [anon_sym_LBRACE] = ACTIONS(1042),
        [sym_number] = ACTIONS(1045),
        [sym_identifier] = ACTIONS(1048),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(1042),
        [sym__dedent] = ACTIONS(1042),
    },
    [446] = {
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(1051),
    },
    [447] = {
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
    [448] = {
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
    [449] = {
        [ts_builtin_sym_end] = ACTIONS(1053),
        [anon_sym_SEMI] = ACTIONS(1053),
        [anon_sym_print] = ACTIONS(1056),
        [anon_sym_return] = ACTIONS(1056),
        [anon_sym_del] = ACTIONS(1056),
        [sym_pass_statement] = ACTIONS(1056),
        [sym_break_statement] = ACTIONS(1056),
        [sym_continue_statement] = ACTIONS(1056),
        [anon_sym_if] = ACTIONS(1056),
        [anon_sym_elif] = ACTIONS(1056),
        [anon_sym_else] = ACTIONS(1056),
        [anon_sym_for] = ACTIONS(1056),
        [anon_sym_while] = ACTIONS(1056),
        [anon_sym_try] = ACTIONS(1056),
        [anon_sym_with] = ACTIONS(1056),
        [anon_sym_def] = ACTIONS(1056),
        [anon_sym_class] = ACTIONS(1056),
        [anon_sym_AT] = ACTIONS(1053),
        [anon_sym_LBRACK] = ACTIONS(1053),
        [anon_sym_LBRACE] = ACTIONS(1053),
        [sym_number] = ACTIONS(1056),
        [sym_identifier] = ACTIONS(1059),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(1053),
        [sym__dedent] = ACTIONS(1053),
    },
    [450] = {
        [sym_finally_clause] = STATE(488),
        [ts_builtin_sym_end] = ACTIONS(1062),
        [anon_sym_SEMI] = ACTIONS(1062),
        [anon_sym_print] = ACTIONS(1068),
        [anon_sym_return] = ACTIONS(1068),
        [anon_sym_del] = ACTIONS(1068),
        [sym_pass_statement] = ACTIONS(1068),
        [sym_break_statement] = ACTIONS(1068),
        [sym_continue_statement] = ACTIONS(1068),
        [anon_sym_if] = ACTIONS(1068),
        [anon_sym_for] = ACTIONS(1068),
        [anon_sym_while] = ACTIONS(1068),
        [anon_sym_try] = ACTIONS(1068),
        [anon_sym_finally] = ACTIONS(1074),
        [anon_sym_with] = ACTIONS(1068),
        [anon_sym_def] = ACTIONS(1068),
        [anon_sym_class] = ACTIONS(1068),
        [anon_sym_AT] = ACTIONS(1062),
        [anon_sym_LBRACK] = ACTIONS(1062),
        [anon_sym_LBRACE] = ACTIONS(1062),
        [sym_number] = ACTIONS(1068),
        [sym_identifier] = ACTIONS(1076),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(1062),
        [sym__dedent] = ACTIONS(1062),
    },
    [451] = {
        [ts_builtin_sym_end] = ACTIONS(1082),
        [anon_sym_SEMI] = ACTIONS(1082),
        [anon_sym_print] = ACTIONS(1085),
        [anon_sym_return] = ACTIONS(1085),
        [anon_sym_del] = ACTIONS(1085),
        [sym_pass_statement] = ACTIONS(1085),
        [sym_break_statement] = ACTIONS(1085),
        [sym_continue_statement] = ACTIONS(1085),
        [anon_sym_if] = ACTIONS(1085),
        [anon_sym_else] = ACTIONS(1085),
        [anon_sym_for] = ACTIONS(1085),
        [anon_sym_while] = ACTIONS(1085),
        [anon_sym_try] = ACTIONS(1085),
        [anon_sym_except] = ACTIONS(1085),
        [anon_sym_finally] = ACTIONS(1085),
        [anon_sym_with] = ACTIONS(1085),
        [anon_sym_def] = ACTIONS(1085),
        [anon_sym_class] = ACTIONS(1085),
        [anon_sym_AT] = ACTIONS(1082),
        [anon_sym_LBRACK] = ACTIONS(1082),
        [anon_sym_LBRACE] = ACTIONS(1082),
        [sym_number] = ACTIONS(1085),
        [sym_identifier] = ACTIONS(1088),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(1082),
        [sym__dedent] = ACTIONS(1082),
    },
    [452] = {
        [ts_builtin_sym_end] = ACTIONS(1091),
        [anon_sym_SEMI] = ACTIONS(1091),
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
        [anon_sym_AT] = ACTIONS(1091),
        [anon_sym_LBRACK] = ACTIONS(1091),
        [anon_sym_LBRACE] = ACTIONS(1091),
        [sym_number] = ACTIONS(1095),
        [sym_identifier] = ACTIONS(1099),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(1091),
        [sym__dedent] = ACTIONS(1091),
    },
    [453] = {
        [aux_sym_with_statement_repeat1] = STATE(471),
        [anon_sym_COMMA] = ACTIONS(1103),
        [anon_sym_COLON] = ACTIONS(1107),
        [sym_comment] = ACTIONS(73),
    },
    [454] = {
        [ts_builtin_sym_end] = ACTIONS(1111),
        [anon_sym_SEMI] = ACTIONS(1111),
        [anon_sym_print] = ACTIONS(1114),
        [anon_sym_return] = ACTIONS(1114),
        [anon_sym_del] = ACTIONS(1114),
        [sym_pass_statement] = ACTIONS(1114),
        [sym_break_statement] = ACTIONS(1114),
        [sym_continue_statement] = ACTIONS(1114),
        [anon_sym_if] = ACTIONS(1114),
        [anon_sym_for] = ACTIONS(1114),
        [anon_sym_while] = ACTIONS(1114),
        [anon_sym_try] = ACTIONS(1114),
        [anon_sym_with] = ACTIONS(1114),
        [anon_sym_def] = ACTIONS(1114),
        [anon_sym_class] = ACTIONS(1114),
        [anon_sym_AT] = ACTIONS(1111),
        [anon_sym_LBRACK] = ACTIONS(1111),
        [anon_sym_LBRACE] = ACTIONS(1111),
        [sym_number] = ACTIONS(1114),
        [sym_identifier] = ACTIONS(1117),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(1111),
        [sym__dedent] = ACTIONS(1111),
    },
    [455] = {
        [anon_sym_COLON] = ACTIONS(1120),
        [sym_comment] = ACTIONS(73),
    },
    [456] = {
        [anon_sym_COMMA] = ACTIONS(1122),
        [anon_sym_RPAREN] = ACTIONS(1124),
        [sym_comment] = ACTIONS(73),
    },
    [457] = {
        [anon_sym_COMMA] = ACTIONS(1126),
        [anon_sym_RPAREN] = ACTIONS(1124),
        [sym_comment] = ACTIONS(73),
    },
    [458] = {
        [anon_sym_RPAREN] = ACTIONS(1128),
        [sym_comment] = ACTIONS(73),
    },
    [459] = {
        [anon_sym_def] = ACTIONS(1130),
        [anon_sym_class] = ACTIONS(1130),
        [anon_sym_AT] = ACTIONS(1130),
        [sym_comment] = ACTIONS(73),
    },
    [460] = {
        [sym_elif_clause] = STATE(522),
        [sym_else_clause] = STATE(531),
        [sym_except_clause] = STATE(532),
        [sym_finally_clause] = STATE(533),
        [aux_sym_if_statement_repeat1] = STATE(469),
        [aux_sym_try_statement_repeat1] = STATE(470),
        [ts_builtin_sym_end] = ACTIONS(1133),
        [anon_sym_SEMI] = ACTIONS(1133),
        [anon_sym_print] = ACTIONS(1147),
        [anon_sym_return] = ACTIONS(1147),
        [anon_sym_del] = ACTIONS(1147),
        [sym_pass_statement] = ACTIONS(1147),
        [sym_break_statement] = ACTIONS(1147),
        [sym_continue_statement] = ACTIONS(1147),
        [anon_sym_if] = ACTIONS(1147),
        [anon_sym_elif] = ACTIONS(1161),
        [anon_sym_else] = ACTIONS(1164),
        [anon_sym_for] = ACTIONS(1147),
        [anon_sym_while] = ACTIONS(1147),
        [anon_sym_try] = ACTIONS(1147),
        [anon_sym_except] = ACTIONS(1169),
        [anon_sym_finally] = ACTIONS(1173),
        [anon_sym_with] = ACTIONS(1147),
        [anon_sym_def] = ACTIONS(1147),
        [anon_sym_class] = ACTIONS(1147),
        [anon_sym_AT] = ACTIONS(1133),
        [anon_sym_LBRACK] = ACTIONS(1133),
        [anon_sym_LBRACE] = ACTIONS(1133),
        [sym_number] = ACTIONS(1147),
        [sym_identifier] = ACTIONS(1178),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(1133),
        [sym__dedent] = ACTIONS(1133),
    },
    [461] = {
        [anon_sym_COLON] = ACTIONS(1192),
        [anon_sym_in] = ACTIONS(1194),
        [anon_sym_RPAREN] = ACTIONS(1196),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(1198),
    },
    [462] = {
        [aux_sym_print_statement_repeat1] = STATE(468),
        [aux_sym_subscript_repeat1] = STATE(43),
        [anon_sym_COMMA] = ACTIONS(1201),
        [anon_sym_COLON] = ACTIONS(1216),
        [anon_sym_for] = ACTIONS(1224),
        [anon_sym_in] = ACTIONS(1228),
        [anon_sym_as] = ACTIONS(1233),
        [anon_sym_LPAREN] = ACTIONS(1236),
        [anon_sym_RPAREN] = ACTIONS(1239),
        [anon_sym_PLUS] = ACTIONS(1251),
        [anon_sym_LBRACK] = ACTIONS(1254),
        [anon_sym_RBRACK] = ACTIONS(1257),
        [anon_sym_RBRACE] = ACTIONS(1264),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(1270),
    },
    [463] = {
        [anon_sym_COMMA] = ACTIONS(1277),
        [anon_sym_RPAREN] = ACTIONS(1281),
        [sym_comment] = ACTIONS(73),
    },
    [464] = {
        [aux_sym_call_repeat2] = STATE(473),
        [anon_sym_COMMA] = ACTIONS(1285),
        [anon_sym_RPAREN] = ACTIONS(1287),
        [sym_comment] = ACTIONS(73),
    },
    [465] = {
        [anon_sym_RPAREN] = ACTIONS(1289),
        [sym_comment] = ACTIONS(73),
    },
    [466] = {
        [aux_sym_dictionary_repeat1] = STATE(173),
        [anon_sym_COMMA] = ACTIONS(1291),
        [anon_sym_for] = ACTIONS(423),
        [anon_sym_RBRACE] = ACTIONS(1295),
        [sym_comment] = ACTIONS(73),
    },
    [467] = {
        [sym__statement] = STATE(498),
        [sym__simple_statement] = STATE(499),
        [sym_print_statement] = STATE(5),
        [sym_expression_statement] = STATE(5),
        [sym_return_statement] = STATE(5),
        [sym_delete_statement] = STATE(5),
        [sym__compound_statement] = STATE(447),
        [sym_if_statement] = STATE(448),
        [sym_for_statement] = STATE(448),
        [sym_while_statement] = STATE(448),
        [sym_try_statement] = STATE(448),
        [sym_with_statement] = STATE(448),
        [sym_function_definition] = STATE(448),
        [sym_class_definition] = STATE(448),
        [sym_decorated_definition] = STATE(448),
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
        [aux_sym_decorated_definition_repeat1] = STATE(472),
        [ts_builtin_sym_end] = ACTIONS(169),
        [anon_sym_SEMI] = ACTIONS(171),
        [anon_sym_print] = ACTIONS(83),
        [anon_sym_return] = ACTIONS(85),
        [anon_sym_del] = ACTIONS(87),
        [sym_pass_statement] = ACTIONS(89),
        [sym_break_statement] = ACTIONS(89),
        [sym_continue_statement] = ACTIONS(89),
        [anon_sym_if] = ACTIONS(1299),
        [anon_sym_for] = ACTIONS(1301),
        [anon_sym_while] = ACTIONS(1303),
        [anon_sym_try] = ACTIONS(1305),
        [anon_sym_with] = ACTIONS(1307),
        [anon_sym_def] = ACTIONS(1309),
        [anon_sym_class] = ACTIONS(1311),
        [anon_sym_AT] = ACTIONS(105),
        [anon_sym_LBRACK] = ACTIONS(107),
        [anon_sym_LBRACE] = ACTIONS(109),
        [sym_number] = ACTIONS(111),
        [sym_identifier] = ACTIONS(113),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(171),
        [sym__dedent] = ACTIONS(1313),
    },
    [468] = {
        [anon_sym_COMMA] = ACTIONS(1315),
        [anon_sym_COLON] = ACTIONS(335),
        [anon_sym_in] = ACTIONS(335),
        [anon_sym_RPAREN] = ACTIONS(1317),
        [anon_sym_RBRACK] = ACTIONS(449),
        [anon_sym_RBRACE] = ACTIONS(437),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(1320),
    },
    [469] = {
        [sym_elif_clause] = STATE(489),
        [sym_else_clause] = STATE(490),
        [ts_builtin_sym_end] = ACTIONS(797),
        [anon_sym_SEMI] = ACTIONS(797),
        [anon_sym_print] = ACTIONS(795),
        [anon_sym_return] = ACTIONS(795),
        [anon_sym_del] = ACTIONS(795),
        [sym_pass_statement] = ACTIONS(795),
        [sym_break_statement] = ACTIONS(795),
        [sym_continue_statement] = ACTIONS(795),
        [anon_sym_if] = ACTIONS(795),
        [anon_sym_elif] = ACTIONS(1323),
        [anon_sym_else] = ACTIONS(1325),
        [anon_sym_for] = ACTIONS(795),
        [anon_sym_while] = ACTIONS(795),
        [anon_sym_try] = ACTIONS(795),
        [anon_sym_with] = ACTIONS(795),
        [anon_sym_def] = ACTIONS(795),
        [anon_sym_class] = ACTIONS(795),
        [anon_sym_AT] = ACTIONS(797),
        [anon_sym_LBRACK] = ACTIONS(797),
        [anon_sym_LBRACE] = ACTIONS(797),
        [sym_number] = ACTIONS(795),
        [sym_identifier] = ACTIONS(799),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(797),
        [sym__dedent] = ACTIONS(797),
    },
    [470] = {
        [sym_else_clause] = STATE(485),
        [sym_except_clause] = STATE(486),
        [sym_finally_clause] = STATE(487),
        [ts_builtin_sym_end] = ACTIONS(687),
        [anon_sym_SEMI] = ACTIONS(687),
        [anon_sym_print] = ACTIONS(685),
        [anon_sym_return] = ACTIONS(685),
        [anon_sym_del] = ACTIONS(685),
        [sym_pass_statement] = ACTIONS(685),
        [sym_break_statement] = ACTIONS(685),
        [sym_continue_statement] = ACTIONS(685),
        [anon_sym_if] = ACTIONS(685),
        [anon_sym_else] = ACTIONS(1325),
        [anon_sym_for] = ACTIONS(685),
        [anon_sym_while] = ACTIONS(685),
        [anon_sym_try] = ACTIONS(685),
        [anon_sym_except] = ACTIONS(1327),
        [anon_sym_finally] = ACTIONS(1074),
        [anon_sym_with] = ACTIONS(685),
        [anon_sym_def] = ACTIONS(685),
        [anon_sym_class] = ACTIONS(685),
        [anon_sym_AT] = ACTIONS(687),
        [anon_sym_LBRACK] = ACTIONS(687),
        [anon_sym_LBRACE] = ACTIONS(687),
        [sym_number] = ACTIONS(685),
        [sym_identifier] = ACTIONS(689),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(687),
        [sym__dedent] = ACTIONS(687),
    },
    [471] = {
        [anon_sym_COMMA] = ACTIONS(649),
        [anon_sym_COLON] = ACTIONS(1329),
        [sym_comment] = ACTIONS(73),
    },
    [472] = {
        [sym_function_definition] = STATE(478),
        [sym_class_definition] = STATE(478),
        [sym_decorator] = STATE(27),
        [anon_sym_def] = ACTIONS(1331),
        [anon_sym_class] = ACTIONS(1333),
        [anon_sym_AT] = ACTIONS(105),
        [sym_comment] = ACTIONS(73),
    },
    [473] = {
        [anon_sym_COMMA] = ACTIONS(1335),
        [anon_sym_RPAREN] = ACTIONS(1337),
        [sym_comment] = ACTIONS(73),
    },
    [474] = {
        [sym__expression] = STATE(77),
        [sym_binary_operator] = STATE(36),
        [sym_subscript] = STATE(36),
        [sym_call] = STATE(36),
        [sym_keyword_argument] = STATE(78),
        [sym_dictionary_splat_argument] = STATE(476),
        [sym_list] = STATE(36),
        [sym_list_comprehension] = STATE(36),
        [sym_dictionary] = STATE(36),
        [sym_dictionary_comprehension] = STATE(36),
        [sym_set] = STATE(36),
        [anon_sym_LBRACK] = ACTIONS(117),
        [anon_sym_STAR_STAR] = ACTIONS(195),
        [anon_sym_LBRACE] = ACTIONS(119),
        [sym_number] = ACTIONS(121),
        [sym_identifier] = ACTIONS(197),
        [sym_comment] = ACTIONS(73),
    },
    [475] = {
        [anon_sym_COMMA] = ACTIONS(1339),
        [anon_sym_COLON] = ACTIONS(1339),
        [anon_sym_for] = ACTIONS(1339),
        [anon_sym_in] = ACTIONS(1339),
        [anon_sym_as] = ACTIONS(1339),
        [anon_sym_LPAREN] = ACTIONS(1339),
        [anon_sym_RPAREN] = ACTIONS(1339),
        [anon_sym_PLUS] = ACTIONS(1339),
        [anon_sym_LBRACK] = ACTIONS(1339),
        [anon_sym_RBRACK] = ACTIONS(1339),
        [anon_sym_RBRACE] = ACTIONS(1339),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(1339),
    },
    [476] = {
        [anon_sym_RPAREN] = ACTIONS(1342),
        [sym_comment] = ACTIONS(73),
    },
    [477] = {
        [anon_sym_COMMA] = ACTIONS(1344),
        [anon_sym_COLON] = ACTIONS(1344),
        [anon_sym_for] = ACTIONS(1344),
        [anon_sym_in] = ACTIONS(1344),
        [anon_sym_as] = ACTIONS(1344),
        [anon_sym_LPAREN] = ACTIONS(1344),
        [anon_sym_RPAREN] = ACTIONS(1344),
        [anon_sym_PLUS] = ACTIONS(1344),
        [anon_sym_LBRACK] = ACTIONS(1344),
        [anon_sym_RBRACK] = ACTIONS(1344),
        [anon_sym_RBRACE] = ACTIONS(1344),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(1344),
    },
    [478] = {
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
    [479] = {
        [sym__simple_statement] = STATE(480),
        [sym_print_statement] = STATE(5),
        [sym_expression_statement] = STATE(5),
        [sym_return_statement] = STATE(5),
        [sym_delete_statement] = STATE(5),
        [sym__suite] = STATE(481),
        [sym__expression] = STATE(23),
        [sym_binary_operator] = STATE(16),
        [sym_subscript] = STATE(16),
        [sym_call] = STATE(16),
        [sym_list] = STATE(16),
        [sym_list_comprehension] = STATE(16),
        [sym_dictionary] = STATE(16),
        [sym_dictionary_comprehension] = STATE(16),
        [sym_set] = STATE(16),
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
        [sym__indent] = ACTIONS(907),
    },
    [480] = {
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(1031),
    },
    [481] = {
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
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(655),
        [sym__dedent] = ACTIONS(655),
    },
    [482] = {
        [ts_builtin_sym_end] = ACTIONS(525),
        [anon_sym_SEMI] = ACTIONS(525),
        [anon_sym_print] = ACTIONS(527),
        [anon_sym_return] = ACTIONS(527),
        [anon_sym_del] = ACTIONS(527),
        [sym_pass_statement] = ACTIONS(527),
        [sym_break_statement] = ACTIONS(527),
        [sym_continue_statement] = ACTIONS(527),
        [anon_sym_if] = ACTIONS(527),
        [anon_sym_elif] = ACTIONS(527),
        [anon_sym_else] = ACTIONS(527),
        [anon_sym_for] = ACTIONS(527),
        [anon_sym_while] = ACTIONS(527),
        [anon_sym_try] = ACTIONS(527),
        [anon_sym_except] = ACTIONS(527),
        [anon_sym_finally] = ACTIONS(527),
        [anon_sym_with] = ACTIONS(527),
        [anon_sym_def] = ACTIONS(527),
        [anon_sym_class] = ACTIONS(527),
        [anon_sym_AT] = ACTIONS(525),
        [anon_sym_LBRACK] = ACTIONS(525),
        [anon_sym_LBRACE] = ACTIONS(525),
        [sym_number] = ACTIONS(527),
        [sym_identifier] = ACTIONS(529),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(525),
        [sym__dedent] = ACTIONS(525),
    },
    [483] = {
        [sym__statement] = STATE(240),
        [sym__simple_statement] = STATE(233),
        [sym_print_statement] = STATE(5),
        [sym_expression_statement] = STATE(5),
        [sym_return_statement] = STATE(5),
        [sym_delete_statement] = STATE(5),
        [sym__compound_statement] = STATE(234),
        [sym_if_statement] = STATE(235),
        [sym_for_statement] = STATE(235),
        [sym_while_statement] = STATE(235),
        [sym_try_statement] = STATE(235),
        [sym_with_statement] = STATE(235),
        [sym_function_definition] = STATE(235),
        [sym_class_definition] = STATE(235),
        [sym_decorated_definition] = STATE(235),
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
        [aux_sym_decorated_definition_repeat1] = STATE(237),
        [anon_sym_print] = ACTIONS(83),
        [anon_sym_return] = ACTIONS(85),
        [anon_sym_del] = ACTIONS(87),
        [sym_pass_statement] = ACTIONS(89),
        [sym_break_statement] = ACTIONS(89),
        [sym_continue_statement] = ACTIONS(89),
        [anon_sym_if] = ACTIONS(503),
        [anon_sym_for] = ACTIONS(505),
        [anon_sym_while] = ACTIONS(507),
        [anon_sym_try] = ACTIONS(509),
        [anon_sym_with] = ACTIONS(511),
        [anon_sym_def] = ACTIONS(513),
        [anon_sym_class] = ACTIONS(515),
        [anon_sym_AT] = ACTIONS(105),
        [anon_sym_LBRACK] = ACTIONS(107),
        [anon_sym_LBRACE] = ACTIONS(109),
        [sym_number] = ACTIONS(111),
        [sym_identifier] = ACTIONS(113),
        [sym_comment] = ACTIONS(73),
        [sym__dedent] = ACTIONS(1313),
    },
    [484] = {
        [ts_builtin_sym_end] = ACTIONS(545),
        [anon_sym_SEMI] = ACTIONS(545),
        [anon_sym_print] = ACTIONS(547),
        [anon_sym_return] = ACTIONS(547),
        [anon_sym_del] = ACTIONS(547),
        [sym_pass_statement] = ACTIONS(547),
        [sym_break_statement] = ACTIONS(547),
        [sym_continue_statement] = ACTIONS(547),
        [anon_sym_if] = ACTIONS(547),
        [anon_sym_elif] = ACTIONS(547),
        [anon_sym_else] = ACTIONS(547),
        [anon_sym_for] = ACTIONS(547),
        [anon_sym_while] = ACTIONS(547),
        [anon_sym_try] = ACTIONS(547),
        [anon_sym_except] = ACTIONS(547),
        [anon_sym_finally] = ACTIONS(547),
        [anon_sym_with] = ACTIONS(547),
        [anon_sym_def] = ACTIONS(547),
        [anon_sym_class] = ACTIONS(547),
        [anon_sym_AT] = ACTIONS(545),
        [anon_sym_LBRACK] = ACTIONS(545),
        [anon_sym_LBRACE] = ACTIONS(545),
        [sym_number] = ACTIONS(547),
        [sym_identifier] = ACTIONS(549),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(545),
        [sym__dedent] = ACTIONS(545),
    },
    [485] = {
        [sym_finally_clause] = STATE(488),
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
        [anon_sym_finally] = ACTIONS(1074),
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
    [486] = {
        [ts_builtin_sym_end] = ACTIONS(707),
        [anon_sym_SEMI] = ACTIONS(707),
        [anon_sym_print] = ACTIONS(705),
        [anon_sym_return] = ACTIONS(705),
        [anon_sym_del] = ACTIONS(705),
        [sym_pass_statement] = ACTIONS(705),
        [sym_break_statement] = ACTIONS(705),
        [sym_continue_statement] = ACTIONS(705),
        [anon_sym_if] = ACTIONS(705),
        [anon_sym_else] = ACTIONS(705),
        [anon_sym_for] = ACTIONS(705),
        [anon_sym_while] = ACTIONS(705),
        [anon_sym_try] = ACTIONS(705),
        [anon_sym_except] = ACTIONS(705),
        [anon_sym_finally] = ACTIONS(705),
        [anon_sym_with] = ACTIONS(705),
        [anon_sym_def] = ACTIONS(705),
        [anon_sym_class] = ACTIONS(705),
        [anon_sym_AT] = ACTIONS(707),
        [anon_sym_LBRACK] = ACTIONS(707),
        [anon_sym_LBRACE] = ACTIONS(707),
        [sym_number] = ACTIONS(705),
        [sym_identifier] = ACTIONS(709),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(707),
        [sym__dedent] = ACTIONS(707),
    },
    [487] = {
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
    [488] = {
        [ts_builtin_sym_end] = ACTIONS(713),
        [anon_sym_SEMI] = ACTIONS(713),
        [anon_sym_print] = ACTIONS(711),
        [anon_sym_return] = ACTIONS(711),
        [anon_sym_del] = ACTIONS(711),
        [sym_pass_statement] = ACTIONS(711),
        [sym_break_statement] = ACTIONS(711),
        [sym_continue_statement] = ACTIONS(711),
        [anon_sym_if] = ACTIONS(711),
        [anon_sym_for] = ACTIONS(711),
        [anon_sym_while] = ACTIONS(711),
        [anon_sym_try] = ACTIONS(711),
        [anon_sym_with] = ACTIONS(711),
        [anon_sym_def] = ACTIONS(711),
        [anon_sym_class] = ACTIONS(711),
        [anon_sym_AT] = ACTIONS(713),
        [anon_sym_LBRACK] = ACTIONS(713),
        [anon_sym_LBRACE] = ACTIONS(713),
        [sym_number] = ACTIONS(711),
        [sym_identifier] = ACTIONS(715),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(713),
        [sym__dedent] = ACTIONS(713),
    },
    [489] = {
        [ts_builtin_sym_end] = ACTIONS(803),
        [anon_sym_SEMI] = ACTIONS(803),
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
        [anon_sym_with] = ACTIONS(801),
        [anon_sym_def] = ACTIONS(801),
        [anon_sym_class] = ACTIONS(801),
        [anon_sym_AT] = ACTIONS(803),
        [anon_sym_LBRACK] = ACTIONS(803),
        [anon_sym_LBRACE] = ACTIONS(803),
        [sym_number] = ACTIONS(801),
        [sym_identifier] = ACTIONS(805),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(803),
        [sym__dedent] = ACTIONS(803),
    },
    [490] = {
        [ts_builtin_sym_end] = ACTIONS(809),
        [anon_sym_SEMI] = ACTIONS(809),
        [anon_sym_print] = ACTIONS(807),
        [anon_sym_return] = ACTIONS(807),
        [anon_sym_del] = ACTIONS(807),
        [sym_pass_statement] = ACTIONS(807),
        [sym_break_statement] = ACTIONS(807),
        [sym_continue_statement] = ACTIONS(807),
        [anon_sym_if] = ACTIONS(807),
        [anon_sym_for] = ACTIONS(807),
        [anon_sym_while] = ACTIONS(807),
        [anon_sym_try] = ACTIONS(807),
        [anon_sym_with] = ACTIONS(807),
        [anon_sym_def] = ACTIONS(807),
        [anon_sym_class] = ACTIONS(807),
        [anon_sym_AT] = ACTIONS(809),
        [anon_sym_LBRACK] = ACTIONS(809),
        [anon_sym_LBRACE] = ACTIONS(809),
        [sym_number] = ACTIONS(807),
        [sym_identifier] = ACTIONS(811),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(809),
        [sym__dedent] = ACTIONS(809),
    },
    [491] = {
        [sym__simple_statement] = STATE(480),
        [sym_print_statement] = STATE(5),
        [sym_expression_statement] = STATE(5),
        [sym_return_statement] = STATE(5),
        [sym_delete_statement] = STATE(5),
        [sym__suite] = STATE(492),
        [sym__expression] = STATE(23),
        [sym_binary_operator] = STATE(16),
        [sym_subscript] = STATE(16),
        [sym_call] = STATE(16),
        [sym_list] = STATE(16),
        [sym_list_comprehension] = STATE(16),
        [sym_dictionary] = STATE(16),
        [sym_dictionary_comprehension] = STATE(16),
        [sym_set] = STATE(16),
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
        [sym__indent] = ACTIONS(907),
    },
    [492] = {
        [ts_builtin_sym_end] = ACTIONS(719),
        [anon_sym_SEMI] = ACTIONS(719),
        [anon_sym_print] = ACTIONS(717),
        [anon_sym_return] = ACTIONS(717),
        [anon_sym_del] = ACTIONS(717),
        [sym_pass_statement] = ACTIONS(717),
        [sym_break_statement] = ACTIONS(717),
        [sym_continue_statement] = ACTIONS(717),
        [anon_sym_if] = ACTIONS(717),
        [anon_sym_for] = ACTIONS(717),
        [anon_sym_while] = ACTIONS(717),
        [anon_sym_try] = ACTIONS(717),
        [anon_sym_finally] = ACTIONS(717),
        [anon_sym_with] = ACTIONS(717),
        [anon_sym_def] = ACTIONS(717),
        [anon_sym_class] = ACTIONS(717),
        [anon_sym_AT] = ACTIONS(719),
        [anon_sym_LBRACK] = ACTIONS(719),
        [anon_sym_LBRACE] = ACTIONS(719),
        [sym_number] = ACTIONS(717),
        [sym_identifier] = ACTIONS(721),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(719),
        [sym__dedent] = ACTIONS(719),
    },
    [493] = {
        [sym__expression] = STATE(494),
        [sym_binary_operator] = STATE(16),
        [sym_subscript] = STATE(16),
        [sym_call] = STATE(16),
        [sym_list] = STATE(16),
        [sym_list_comprehension] = STATE(16),
        [sym_dictionary] = STATE(16),
        [sym_dictionary_comprehension] = STATE(16),
        [sym_set] = STATE(16),
        [anon_sym_LBRACK] = ACTIONS(107),
        [anon_sym_RBRACK] = ACTIONS(453),
        [anon_sym_LBRACE] = ACTIONS(109),
        [anon_sym_RBRACE] = ACTIONS(441),
        [sym_number] = ACTIONS(111),
        [sym_identifier] = ACTIONS(111),
        [sym_comment] = ACTIONS(73),
    },
    [494] = {
        [anon_sym_COMMA] = ACTIONS(337),
        [anon_sym_COLON] = ACTIONS(337),
        [anon_sym_in] = ACTIONS(337),
        [anon_sym_LPAREN] = ACTIONS(161),
        [anon_sym_RPAREN] = ACTIONS(337),
        [anon_sym_PLUS] = ACTIONS(1347),
        [anon_sym_LBRACK] = ACTIONS(165),
        [anon_sym_RBRACK] = ACTIONS(337),
        [anon_sym_RBRACE] = ACTIONS(337),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(337),
    },
    [495] = {
        [sym__expression] = STATE(496),
        [sym_binary_operator] = STATE(16),
        [sym_subscript] = STATE(16),
        [sym_call] = STATE(16),
        [sym_list] = STATE(16),
        [sym_list_comprehension] = STATE(16),
        [sym_dictionary] = STATE(16),
        [sym_dictionary_comprehension] = STATE(16),
        [sym_set] = STATE(16),
        [anon_sym_LBRACK] = ACTIONS(107),
        [anon_sym_LBRACE] = ACTIONS(109),
        [sym_number] = ACTIONS(111),
        [sym_identifier] = ACTIONS(111),
        [sym_comment] = ACTIONS(73),
    },
    [496] = {
        [anon_sym_COMMA] = ACTIONS(247),
        [anon_sym_COLON] = ACTIONS(247),
        [anon_sym_in] = ACTIONS(247),
        [anon_sym_LPAREN] = ACTIONS(1236),
        [anon_sym_RPAREN] = ACTIONS(247),
        [anon_sym_PLUS] = ACTIONS(1349),
        [anon_sym_LBRACK] = ACTIONS(1254),
        [anon_sym_RBRACK] = ACTIONS(247),
        [anon_sym_RBRACE] = ACTIONS(247),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(247),
    },
    [497] = {
        [sym_expression_list] = STATE(501),
        [sym__expression] = STATE(109),
        [sym_binary_operator] = STATE(36),
        [sym_subscript] = STATE(36),
        [sym_call] = STATE(36),
        [sym_list] = STATE(36),
        [sym_list_comprehension] = STATE(36),
        [sym_dictionary] = STATE(36),
        [sym_dictionary_comprehension] = STATE(36),
        [sym_set] = STATE(36),
        [anon_sym_LBRACK] = ACTIONS(117),
        [anon_sym_LBRACE] = ACTIONS(119),
        [sym_number] = ACTIONS(121),
        [sym_identifier] = ACTIONS(121),
        [sym_comment] = ACTIONS(73),
    },
    [498] = {
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
    [499] = {
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(1352),
    },
    [500] = {
        [ts_builtin_sym_end] = ACTIONS(411),
        [anon_sym_SEMI] = ACTIONS(411),
        [anon_sym_print] = ACTIONS(413),
        [anon_sym_return] = ACTIONS(413),
        [anon_sym_del] = ACTIONS(413),
        [sym_pass_statement] = ACTIONS(413),
        [sym_break_statement] = ACTIONS(413),
        [sym_continue_statement] = ACTIONS(413),
        [anon_sym_if] = ACTIONS(413),
        [anon_sym_for] = ACTIONS(413),
        [anon_sym_while] = ACTIONS(413),
        [anon_sym_try] = ACTIONS(413),
        [anon_sym_with] = ACTIONS(413),
        [anon_sym_def] = ACTIONS(413),
        [anon_sym_class] = ACTIONS(413),
        [anon_sym_AT] = ACTIONS(411),
        [anon_sym_LBRACK] = ACTIONS(411),
        [anon_sym_LBRACE] = ACTIONS(411),
        [sym_number] = ACTIONS(413),
        [sym_identifier] = ACTIONS(415),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(411),
        [sym__dedent] = ACTIONS(411),
    },
    [501] = {
        [anon_sym_in] = ACTIONS(1354),
        [sym_comment] = ACTIONS(73),
    },
    [502] = {
        [sym_expression_list] = STATE(503),
        [sym__expression] = STATE(109),
        [sym_binary_operator] = STATE(36),
        [sym_subscript] = STATE(36),
        [sym_call] = STATE(36),
        [sym_list] = STATE(36),
        [sym_list_comprehension] = STATE(36),
        [sym_dictionary] = STATE(36),
        [sym_dictionary_comprehension] = STATE(36),
        [sym_set] = STATE(36),
        [anon_sym_LBRACK] = ACTIONS(117),
        [anon_sym_LBRACE] = ACTIONS(119),
        [sym_number] = ACTIONS(121),
        [sym_identifier] = ACTIONS(121),
        [sym_comment] = ACTIONS(73),
    },
    [503] = {
        [anon_sym_COLON] = ACTIONS(1192),
        [sym_comment] = ACTIONS(73),
    },
    [504] = {
        [sym__simple_statement] = STATE(480),
        [sym_print_statement] = STATE(5),
        [sym_expression_statement] = STATE(5),
        [sym_return_statement] = STATE(5),
        [sym_delete_statement] = STATE(5),
        [sym__suite] = STATE(505),
        [sym__expression] = STATE(23),
        [sym_binary_operator] = STATE(16),
        [sym_subscript] = STATE(16),
        [sym_call] = STATE(16),
        [sym_list] = STATE(16),
        [sym_list_comprehension] = STATE(16),
        [sym_dictionary] = STATE(16),
        [sym_dictionary_comprehension] = STATE(16),
        [sym_set] = STATE(16),
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
        [sym__indent] = ACTIONS(907),
    },
    [505] = {
        [sym_else_clause] = STATE(506),
        [ts_builtin_sym_end] = ACTIONS(769),
        [anon_sym_SEMI] = ACTIONS(769),
        [anon_sym_print] = ACTIONS(767),
        [anon_sym_return] = ACTIONS(767),
        [anon_sym_del] = ACTIONS(767),
        [sym_pass_statement] = ACTIONS(767),
        [sym_break_statement] = ACTIONS(767),
        [sym_continue_statement] = ACTIONS(767),
        [anon_sym_if] = ACTIONS(767),
        [anon_sym_else] = ACTIONS(1325),
        [anon_sym_for] = ACTIONS(767),
        [anon_sym_while] = ACTIONS(767),
        [anon_sym_try] = ACTIONS(767),
        [anon_sym_with] = ACTIONS(767),
        [anon_sym_def] = ACTIONS(767),
        [anon_sym_class] = ACTIONS(767),
        [anon_sym_AT] = ACTIONS(769),
        [anon_sym_LBRACK] = ACTIONS(769),
        [anon_sym_LBRACE] = ACTIONS(769),
        [sym_number] = ACTIONS(767),
        [sym_identifier] = ACTIONS(771),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(769),
        [sym__dedent] = ACTIONS(769),
    },
    [506] = {
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
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(775),
        [sym__dedent] = ACTIONS(775),
    },
    [507] = {
        [anon_sym_COMMA] = ACTIONS(921),
        [anon_sym_COLON] = ACTIONS(921),
        [anon_sym_for] = ACTIONS(921),
        [anon_sym_in] = ACTIONS(921),
        [anon_sym_as] = ACTIONS(921),
        [anon_sym_LPAREN] = ACTIONS(921),
        [anon_sym_RPAREN] = ACTIONS(921),
        [anon_sym_PLUS] = ACTIONS(921),
        [anon_sym_LBRACK] = ACTIONS(921),
        [anon_sym_RBRACK] = ACTIONS(921),
        [anon_sym_RBRACE] = ACTIONS(921),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(921),
    },
    [508] = {
        [sym__expression] = STATE(81),
        [sym_binary_operator] = STATE(36),
        [sym_subscript] = STATE(36),
        [sym_call] = STATE(36),
        [sym_keyword_argument] = STATE(82),
        [sym_dictionary_splat_argument] = STATE(510),
        [sym_list] = STATE(36),
        [sym_list_comprehension] = STATE(36),
        [sym_dictionary] = STATE(36),
        [sym_dictionary_comprehension] = STATE(36),
        [sym_set] = STATE(36),
        [anon_sym_LBRACK] = ACTIONS(117),
        [anon_sym_STAR_STAR] = ACTIONS(195),
        [anon_sym_LBRACE] = ACTIONS(119),
        [sym_number] = ACTIONS(121),
        [sym_identifier] = ACTIONS(197),
        [sym_comment] = ACTIONS(73),
    },
    [509] = {
        [anon_sym_COMMA] = ACTIONS(1356),
        [anon_sym_COLON] = ACTIONS(1356),
        [anon_sym_for] = ACTIONS(1356),
        [anon_sym_in] = ACTIONS(1356),
        [anon_sym_as] = ACTIONS(1356),
        [anon_sym_LPAREN] = ACTIONS(1356),
        [anon_sym_RPAREN] = ACTIONS(1356),
        [anon_sym_PLUS] = ACTIONS(1356),
        [anon_sym_LBRACK] = ACTIONS(1356),
        [anon_sym_RBRACK] = ACTIONS(1356),
        [anon_sym_RBRACE] = ACTIONS(1356),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(1356),
    },
    [510] = {
        [anon_sym_RPAREN] = ACTIONS(1359),
        [sym_comment] = ACTIONS(73),
    },
    [511] = {
        [anon_sym_COMMA] = ACTIONS(1361),
        [anon_sym_COLON] = ACTIONS(1361),
        [anon_sym_for] = ACTIONS(1361),
        [anon_sym_in] = ACTIONS(1361),
        [anon_sym_as] = ACTIONS(1361),
        [anon_sym_LPAREN] = ACTIONS(1361),
        [anon_sym_RPAREN] = ACTIONS(1361),
        [anon_sym_PLUS] = ACTIONS(1361),
        [anon_sym_LBRACK] = ACTIONS(1361),
        [anon_sym_RBRACK] = ACTIONS(1361),
        [anon_sym_RBRACE] = ACTIONS(1361),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(1361),
    },
    [512] = {
        [anon_sym_RPAREN] = ACTIONS(1337),
        [anon_sym_STAR] = ACTIONS(1364),
        [anon_sym_LBRACK] = ACTIONS(1367),
        [anon_sym_STAR_STAR] = ACTIONS(1367),
        [anon_sym_LBRACE] = ACTIONS(1367),
        [sym_number] = ACTIONS(1364),
        [sym_identifier] = ACTIONS(1364),
        [sym_comment] = ACTIONS(73),
    },
    [513] = {
        [sym__expression] = STATE(525),
        [sym_binary_operator] = STATE(16),
        [sym_subscript] = STATE(16),
        [sym_call] = STATE(16),
        [sym_list] = STATE(16),
        [sym_list_comprehension] = STATE(16),
        [sym_dictionary] = STATE(16),
        [sym_dictionary_comprehension] = STATE(16),
        [sym_set] = STATE(16),
        [anon_sym_RPAREN] = ACTIONS(1337),
        [anon_sym_STAR] = ACTIONS(1364),
        [anon_sym_LBRACK] = ACTIONS(879),
        [anon_sym_DOT_DOT_DOT] = ACTIONS(215),
        [anon_sym_RBRACK] = ACTIONS(1370),
        [anon_sym_STAR_STAR] = ACTIONS(1367),
        [anon_sym_LBRACE] = ACTIONS(891),
        [anon_sym_RBRACE] = ACTIONS(437),
        [sym_number] = ACTIONS(897),
        [sym_identifier] = ACTIONS(897),
        [sym_comment] = ACTIONS(73),
    },
    [514] = {
        [sym__simple_statement] = STATE(480),
        [sym_print_statement] = STATE(5),
        [sym_expression_statement] = STATE(5),
        [sym_return_statement] = STATE(5),
        [sym_delete_statement] = STATE(5),
        [sym__suite] = STATE(518),
        [sym__expression] = STATE(519),
        [sym_binary_operator] = STATE(16),
        [sym_subscript] = STATE(16),
        [sym_call] = STATE(16),
        [sym_list] = STATE(16),
        [sym_list_comprehension] = STATE(16),
        [sym_dictionary] = STATE(16),
        [sym_dictionary_comprehension] = STATE(16),
        [sym_set] = STATE(16),
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
        [sym__indent] = ACTIONS(907),
    },
    [515] = {
        [anon_sym_COMMA] = ACTIONS(1356),
        [anon_sym_COLON] = ACTIONS(1356),
        [anon_sym_for] = ACTIONS(1356),
        [anon_sym_in] = ACTIONS(1356),
        [anon_sym_as] = ACTIONS(1356),
        [anon_sym_LPAREN] = ACTIONS(1356),
        [anon_sym_RPAREN] = ACTIONS(1356),
        [anon_sym_PLUS] = ACTIONS(1356),
        [anon_sym_LBRACK] = ACTIONS(1356),
        [anon_sym_RBRACK] = ACTIONS(1356),
        [anon_sym_RBRACE] = ACTIONS(1356),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(1372),
    },
    [516] = {
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
    [517] = {
        [anon_sym_COMMA] = ACTIONS(1380),
        [anon_sym_COLON] = ACTIONS(1380),
        [anon_sym_for] = ACTIONS(1380),
        [anon_sym_in] = ACTIONS(1380),
        [anon_sym_as] = ACTIONS(1380),
        [anon_sym_LPAREN] = ACTIONS(1380),
        [anon_sym_RPAREN] = ACTIONS(1380),
        [anon_sym_PLUS] = ACTIONS(1380),
        [anon_sym_LBRACK] = ACTIONS(1380),
        [anon_sym_RBRACK] = ACTIONS(1380),
        [anon_sym_RBRACE] = ACTIONS(1380),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(1380),
    },
    [518] = {
        [sym_elif_clause] = STATE(522),
        [sym_else_clause] = STATE(523),
        [aux_sym_if_statement_repeat1] = STATE(469),
        [ts_builtin_sym_end] = ACTIONS(1383),
        [anon_sym_SEMI] = ACTIONS(1383),
        [anon_sym_print] = ACTIONS(1389),
        [anon_sym_return] = ACTIONS(1389),
        [anon_sym_del] = ACTIONS(1389),
        [sym_pass_statement] = ACTIONS(1389),
        [sym_break_statement] = ACTIONS(1389),
        [sym_continue_statement] = ACTIONS(1389),
        [anon_sym_if] = ACTIONS(1389),
        [anon_sym_elif] = ACTIONS(1161),
        [anon_sym_else] = ACTIONS(1164),
        [anon_sym_for] = ACTIONS(1389),
        [anon_sym_while] = ACTIONS(1389),
        [anon_sym_try] = ACTIONS(1389),
        [anon_sym_except] = ACTIONS(1395),
        [anon_sym_finally] = ACTIONS(1395),
        [anon_sym_with] = ACTIONS(1389),
        [anon_sym_def] = ACTIONS(1389),
        [anon_sym_class] = ACTIONS(1389),
        [anon_sym_AT] = ACTIONS(1383),
        [anon_sym_LBRACK] = ACTIONS(1383),
        [anon_sym_LBRACE] = ACTIONS(1383),
        [sym_number] = ACTIONS(1389),
        [sym_identifier] = ACTIONS(1398),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(1383),
        [sym__dedent] = ACTIONS(1383),
    },
    [519] = {
        [anon_sym_COMMA] = ACTIONS(325),
        [anon_sym_for] = ACTIONS(325),
        [anon_sym_LPAREN] = ACTIONS(161),
        [anon_sym_PLUS] = ACTIONS(1404),
        [anon_sym_LBRACK] = ACTIONS(165),
        [anon_sym_RBRACE] = ACTIONS(325),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(167),
    },
    [520] = {
        [sym__expression] = STATE(521),
        [sym_binary_operator] = STATE(16),
        [sym_subscript] = STATE(16),
        [sym_call] = STATE(16),
        [sym_list] = STATE(16),
        [sym_list_comprehension] = STATE(16),
        [sym_dictionary] = STATE(16),
        [sym_dictionary_comprehension] = STATE(16),
        [sym_set] = STATE(16),
        [anon_sym_LBRACK] = ACTIONS(107),
        [anon_sym_LBRACE] = ACTIONS(109),
        [sym_number] = ACTIONS(111),
        [sym_identifier] = ACTIONS(111),
        [sym_comment] = ACTIONS(73),
    },
    [521] = {
        [anon_sym_COMMA] = ACTIONS(247),
        [anon_sym_for] = ACTIONS(247),
        [anon_sym_LPAREN] = ACTIONS(1236),
        [anon_sym_PLUS] = ACTIONS(1406),
        [anon_sym_LBRACK] = ACTIONS(1254),
        [anon_sym_RBRACE] = ACTIONS(247),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(247),
    },
    [522] = {
        [ts_builtin_sym_end] = ACTIONS(791),
        [anon_sym_SEMI] = ACTIONS(791),
        [anon_sym_print] = ACTIONS(789),
        [anon_sym_return] = ACTIONS(789),
        [anon_sym_del] = ACTIONS(789),
        [sym_pass_statement] = ACTIONS(789),
        [sym_break_statement] = ACTIONS(789),
        [sym_continue_statement] = ACTIONS(789),
        [anon_sym_if] = ACTIONS(789),
        [anon_sym_elif] = ACTIONS(789),
        [anon_sym_else] = ACTIONS(789),
        [anon_sym_for] = ACTIONS(789),
        [anon_sym_while] = ACTIONS(789),
        [anon_sym_try] = ACTIONS(789),
        [anon_sym_with] = ACTIONS(789),
        [anon_sym_def] = ACTIONS(789),
        [anon_sym_class] = ACTIONS(789),
        [anon_sym_AT] = ACTIONS(791),
        [anon_sym_LBRACK] = ACTIONS(791),
        [anon_sym_LBRACE] = ACTIONS(791),
        [sym_number] = ACTIONS(789),
        [sym_identifier] = ACTIONS(793),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(791),
        [sym__dedent] = ACTIONS(791),
    },
    [523] = {
        [ts_builtin_sym_end] = ACTIONS(1409),
        [anon_sym_SEMI] = ACTIONS(1409),
        [anon_sym_print] = ACTIONS(1412),
        [anon_sym_return] = ACTIONS(1412),
        [anon_sym_del] = ACTIONS(1412),
        [sym_pass_statement] = ACTIONS(1412),
        [sym_break_statement] = ACTIONS(1412),
        [sym_continue_statement] = ACTIONS(1412),
        [anon_sym_if] = ACTIONS(1412),
        [anon_sym_for] = ACTIONS(1412),
        [anon_sym_while] = ACTIONS(1412),
        [anon_sym_try] = ACTIONS(1412),
        [anon_sym_with] = ACTIONS(1412),
        [anon_sym_def] = ACTIONS(1412),
        [anon_sym_class] = ACTIONS(1412),
        [anon_sym_AT] = ACTIONS(1409),
        [anon_sym_LBRACK] = ACTIONS(1409),
        [anon_sym_LBRACE] = ACTIONS(1409),
        [sym_number] = ACTIONS(1412),
        [sym_identifier] = ACTIONS(1415),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(1409),
        [sym__dedent] = ACTIONS(1409),
    },
    [524] = {
        [anon_sym_COMMA] = ACTIONS(1418),
        [anon_sym_COLON] = ACTIONS(1418),
        [anon_sym_for] = ACTIONS(1418),
        [anon_sym_in] = ACTIONS(1418),
        [anon_sym_as] = ACTIONS(1418),
        [anon_sym_LPAREN] = ACTIONS(1418),
        [anon_sym_RPAREN] = ACTIONS(1418),
        [anon_sym_PLUS] = ACTIONS(1418),
        [anon_sym_LBRACK] = ACTIONS(1418),
        [anon_sym_RBRACK] = ACTIONS(1418),
        [anon_sym_RBRACE] = ACTIONS(1418),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(1418),
    },
    [525] = {
        [anon_sym_COMMA] = ACTIONS(1421),
        [anon_sym_COLON] = ACTIONS(1424),
        [anon_sym_in] = ACTIONS(339),
        [anon_sym_LPAREN] = ACTIONS(161),
        [anon_sym_RPAREN] = ACTIONS(339),
        [anon_sym_PLUS] = ACTIONS(1347),
        [anon_sym_LBRACK] = ACTIONS(165),
        [anon_sym_RBRACK] = ACTIONS(1421),
        [anon_sym_RBRACE] = ACTIONS(339),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(339),
    },
    [526] = {
        [sym__simple_statement] = STATE(480),
        [sym_print_statement] = STATE(5),
        [sym_expression_statement] = STATE(5),
        [sym_return_statement] = STATE(5),
        [sym_delete_statement] = STATE(5),
        [sym__suite] = STATE(527),
        [sym__expression] = STATE(23),
        [sym_binary_operator] = STATE(16),
        [sym_subscript] = STATE(16),
        [sym_call] = STATE(16),
        [sym_list] = STATE(16),
        [sym_list_comprehension] = STATE(16),
        [sym_dictionary] = STATE(16),
        [sym_dictionary_comprehension] = STATE(16),
        [sym_set] = STATE(16),
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
        [sym__indent] = ACTIONS(907),
    },
    [527] = {
        [ts_builtin_sym_end] = ACTIONS(737),
        [anon_sym_SEMI] = ACTIONS(737),
        [anon_sym_print] = ACTIONS(735),
        [anon_sym_return] = ACTIONS(735),
        [anon_sym_del] = ACTIONS(735),
        [sym_pass_statement] = ACTIONS(735),
        [sym_break_statement] = ACTIONS(735),
        [sym_continue_statement] = ACTIONS(735),
        [anon_sym_if] = ACTIONS(735),
        [anon_sym_else] = ACTIONS(735),
        [anon_sym_for] = ACTIONS(735),
        [anon_sym_while] = ACTIONS(735),
        [anon_sym_try] = ACTIONS(735),
        [anon_sym_except] = ACTIONS(735),
        [anon_sym_finally] = ACTIONS(735),
        [anon_sym_with] = ACTIONS(735),
        [anon_sym_def] = ACTIONS(735),
        [anon_sym_class] = ACTIONS(735),
        [anon_sym_AT] = ACTIONS(737),
        [anon_sym_LBRACK] = ACTIONS(737),
        [anon_sym_LBRACE] = ACTIONS(737),
        [sym_number] = ACTIONS(735),
        [sym_identifier] = ACTIONS(739),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(737),
        [sym__dedent] = ACTIONS(737),
    },
    [528] = {
        [anon_sym_COLON] = ACTIONS(1427),
        [sym_comment] = ACTIONS(73),
    },
    [529] = {
        [sym__simple_statement] = STATE(480),
        [sym_print_statement] = STATE(5),
        [sym_expression_statement] = STATE(5),
        [sym_return_statement] = STATE(5),
        [sym_delete_statement] = STATE(5),
        [sym__suite] = STATE(530),
        [sym__expression] = STATE(23),
        [sym_binary_operator] = STATE(16),
        [sym_subscript] = STATE(16),
        [sym_call] = STATE(16),
        [sym_list] = STATE(16),
        [sym_list_comprehension] = STATE(16),
        [sym_dictionary] = STATE(16),
        [sym_dictionary_comprehension] = STATE(16),
        [sym_set] = STATE(16),
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
        [sym__indent] = ACTIONS(907),
    },
    [530] = {
        [ts_builtin_sym_end] = ACTIONS(519),
        [anon_sym_SEMI] = ACTIONS(519),
        [anon_sym_print] = ACTIONS(521),
        [anon_sym_return] = ACTIONS(521),
        [anon_sym_del] = ACTIONS(521),
        [sym_pass_statement] = ACTIONS(521),
        [sym_break_statement] = ACTIONS(521),
        [sym_continue_statement] = ACTIONS(521),
        [anon_sym_if] = ACTIONS(521),
        [anon_sym_for] = ACTIONS(521),
        [anon_sym_while] = ACTIONS(521),
        [anon_sym_try] = ACTIONS(521),
        [anon_sym_with] = ACTIONS(521),
        [anon_sym_def] = ACTIONS(521),
        [anon_sym_class] = ACTIONS(521),
        [anon_sym_AT] = ACTIONS(519),
        [anon_sym_LBRACK] = ACTIONS(519),
        [anon_sym_LBRACE] = ACTIONS(519),
        [sym_number] = ACTIONS(521),
        [sym_identifier] = ACTIONS(523),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(519),
        [sym__dedent] = ACTIONS(519),
    },
    [531] = {
        [ts_builtin_sym_end] = ACTIONS(1429),
        [anon_sym_SEMI] = ACTIONS(1429),
        [anon_sym_print] = ACTIONS(1433),
        [anon_sym_return] = ACTIONS(1433),
        [anon_sym_del] = ACTIONS(1433),
        [sym_pass_statement] = ACTIONS(1433),
        [sym_break_statement] = ACTIONS(1433),
        [sym_continue_statement] = ACTIONS(1433),
        [anon_sym_if] = ACTIONS(1433),
        [anon_sym_for] = ACTIONS(1433),
        [anon_sym_while] = ACTIONS(1433),
        [anon_sym_try] = ACTIONS(1433),
        [anon_sym_with] = ACTIONS(1433),
        [anon_sym_def] = ACTIONS(1433),
        [anon_sym_class] = ACTIONS(1433),
        [anon_sym_AT] = ACTIONS(1429),
        [anon_sym_LBRACK] = ACTIONS(1429),
        [anon_sym_LBRACE] = ACTIONS(1429),
        [sym_number] = ACTIONS(1433),
        [sym_identifier] = ACTIONS(1437),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(1429),
        [sym__dedent] = ACTIONS(1429),
    },
    [532] = {
        [ts_builtin_sym_end] = ACTIONS(681),
        [anon_sym_SEMI] = ACTIONS(681),
        [anon_sym_print] = ACTIONS(679),
        [anon_sym_return] = ACTIONS(679),
        [anon_sym_del] = ACTIONS(679),
        [sym_pass_statement] = ACTIONS(679),
        [sym_break_statement] = ACTIONS(679),
        [sym_continue_statement] = ACTIONS(679),
        [anon_sym_if] = ACTIONS(679),
        [anon_sym_else] = ACTIONS(679),
        [anon_sym_for] = ACTIONS(679),
        [anon_sym_while] = ACTIONS(679),
        [anon_sym_try] = ACTIONS(679),
        [anon_sym_except] = ACTIONS(679),
        [anon_sym_finally] = ACTIONS(679),
        [anon_sym_with] = ACTIONS(679),
        [anon_sym_def] = ACTIONS(679),
        [anon_sym_class] = ACTIONS(679),
        [anon_sym_AT] = ACTIONS(681),
        [anon_sym_LBRACK] = ACTIONS(681),
        [anon_sym_LBRACE] = ACTIONS(681),
        [sym_number] = ACTIONS(679),
        [sym_identifier] = ACTIONS(683),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(681),
        [sym__dedent] = ACTIONS(681),
    },
    [533] = {
        [ts_builtin_sym_end] = ACTIONS(687),
        [anon_sym_SEMI] = ACTIONS(687),
        [anon_sym_print] = ACTIONS(685),
        [anon_sym_return] = ACTIONS(685),
        [anon_sym_del] = ACTIONS(685),
        [sym_pass_statement] = ACTIONS(685),
        [sym_break_statement] = ACTIONS(685),
        [sym_continue_statement] = ACTIONS(685),
        [anon_sym_if] = ACTIONS(685),
        [anon_sym_for] = ACTIONS(685),
        [anon_sym_while] = ACTIONS(685),
        [anon_sym_try] = ACTIONS(685),
        [anon_sym_with] = ACTIONS(685),
        [anon_sym_def] = ACTIONS(685),
        [anon_sym_class] = ACTIONS(685),
        [anon_sym_AT] = ACTIONS(687),
        [anon_sym_LBRACK] = ACTIONS(687),
        [anon_sym_LBRACE] = ACTIONS(687),
        [sym_number] = ACTIONS(685),
        [sym_identifier] = ACTIONS(689),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(687),
        [sym__dedent] = ACTIONS(687),
    },
    [534] = {
        [anon_sym_COLON] = ACTIONS(1441),
        [sym_comment] = ACTIONS(73),
    },
    [535] = {
        [sym_dictionary_splat_parameter] = STATE(537),
        [anon_sym_STAR] = ACTIONS(611),
        [sym_comment] = ACTIONS(73),
    },
    [536] = {
        [anon_sym_COLON] = ACTIONS(1446),
        [sym_comment] = ACTIONS(73),
    },
    [537] = {
        [anon_sym_RPAREN] = ACTIONS(1449),
        [sym_comment] = ACTIONS(73),
    },
    [538] = {
        [anon_sym_COLON] = ACTIONS(1451),
        [sym_comment] = ACTIONS(73),
    },
    [539] = {
        [anon_sym_RPAREN] = ACTIONS(1454),
        [anon_sym_STAR] = ACTIONS(1456),
        [sym_identifier] = ACTIONS(1459),
        [sym_comment] = ACTIONS(73),
    },
    [540] = {
        [anon_sym_COLON] = ACTIONS(1462),
        [sym_comment] = ACTIONS(73),
    },
    [541] = {
        [sym__simple_statement] = STATE(480),
        [sym_print_statement] = STATE(5),
        [sym_expression_statement] = STATE(5),
        [sym_return_statement] = STATE(5),
        [sym_delete_statement] = STATE(5),
        [sym__suite] = STATE(542),
        [sym__expression] = STATE(23),
        [sym_binary_operator] = STATE(16),
        [sym_subscript] = STATE(16),
        [sym_call] = STATE(16),
        [sym_list] = STATE(16),
        [sym_list_comprehension] = STATE(16),
        [sym_dictionary] = STATE(16),
        [sym_dictionary_comprehension] = STATE(16),
        [sym_set] = STATE(16),
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
        [sym__indent] = ACTIONS(907),
    },
    [542] = {
        [ts_builtin_sym_end] = ACTIONS(583),
        [anon_sym_SEMI] = ACTIONS(583),
        [anon_sym_print] = ACTIONS(581),
        [anon_sym_return] = ACTIONS(581),
        [anon_sym_del] = ACTIONS(581),
        [sym_pass_statement] = ACTIONS(581),
        [sym_break_statement] = ACTIONS(581),
        [sym_continue_statement] = ACTIONS(581),
        [anon_sym_if] = ACTIONS(581),
        [anon_sym_for] = ACTIONS(581),
        [anon_sym_while] = ACTIONS(581),
        [anon_sym_try] = ACTIONS(581),
        [anon_sym_with] = ACTIONS(581),
        [anon_sym_def] = ACTIONS(581),
        [anon_sym_class] = ACTIONS(581),
        [anon_sym_AT] = ACTIONS(583),
        [anon_sym_LBRACK] = ACTIONS(583),
        [anon_sym_LBRACE] = ACTIONS(583),
        [sym_number] = ACTIONS(581),
        [sym_identifier] = ACTIONS(585),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(583),
        [sym__dedent] = ACTIONS(583),
    },
    [543] = {
        [sym__simple_statement] = STATE(480),
        [sym_print_statement] = STATE(5),
        [sym_expression_statement] = STATE(5),
        [sym_return_statement] = STATE(5),
        [sym_delete_statement] = STATE(5),
        [sym__suite] = STATE(544),
        [sym__expression] = STATE(23),
        [sym_binary_operator] = STATE(16),
        [sym_subscript] = STATE(16),
        [sym_call] = STATE(16),
        [sym_list] = STATE(16),
        [sym_list_comprehension] = STATE(16),
        [sym_dictionary] = STATE(16),
        [sym_dictionary_comprehension] = STATE(16),
        [sym_set] = STATE(16),
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
        [sym__indent] = ACTIONS(907),
    },
    [544] = {
        [ts_builtin_sym_end] = ACTIONS(663),
        [anon_sym_SEMI] = ACTIONS(663),
        [anon_sym_print] = ACTIONS(661),
        [anon_sym_return] = ACTIONS(661),
        [anon_sym_del] = ACTIONS(661),
        [sym_pass_statement] = ACTIONS(661),
        [sym_break_statement] = ACTIONS(661),
        [sym_continue_statement] = ACTIONS(661),
        [anon_sym_if] = ACTIONS(661),
        [anon_sym_for] = ACTIONS(661),
        [anon_sym_while] = ACTIONS(661),
        [anon_sym_try] = ACTIONS(661),
        [anon_sym_with] = ACTIONS(661),
        [anon_sym_def] = ACTIONS(661),
        [anon_sym_class] = ACTIONS(661),
        [anon_sym_AT] = ACTIONS(663),
        [anon_sym_LBRACK] = ACTIONS(663),
        [anon_sym_LBRACE] = ACTIONS(663),
        [sym_number] = ACTIONS(661),
        [sym_identifier] = ACTIONS(665),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(663),
        [sym__dedent] = ACTIONS(663),
    },
    [545] = {
        [ts_builtin_sym_end] = ACTIONS(1012),
        [anon_sym_SEMI] = ACTIONS(1012),
        [anon_sym_print] = ACTIONS(1015),
        [anon_sym_return] = ACTIONS(1015),
        [anon_sym_del] = ACTIONS(1015),
        [sym_pass_statement] = ACTIONS(1015),
        [sym_break_statement] = ACTIONS(1015),
        [sym_continue_statement] = ACTIONS(1015),
        [anon_sym_if] = ACTIONS(1015),
        [anon_sym_elif] = ACTIONS(527),
        [anon_sym_else] = ACTIONS(527),
        [anon_sym_for] = ACTIONS(1015),
        [anon_sym_while] = ACTIONS(1015),
        [anon_sym_try] = ACTIONS(1015),
        [anon_sym_except] = ACTIONS(527),
        [anon_sym_finally] = ACTIONS(527),
        [anon_sym_with] = ACTIONS(1015),
        [anon_sym_def] = ACTIONS(1015),
        [anon_sym_class] = ACTIONS(1015),
        [anon_sym_AT] = ACTIONS(1012),
        [anon_sym_LBRACK] = ACTIONS(1012),
        [anon_sym_LBRACE] = ACTIONS(1012),
        [sym_number] = ACTIONS(1015),
        [sym_identifier] = ACTIONS(1028),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(1012),
        [sym__dedent] = ACTIONS(1012),
    },
    [546] = {
        [sym__simple_statement] = STATE(480),
        [sym_print_statement] = STATE(5),
        [sym_expression_statement] = STATE(5),
        [sym_return_statement] = STATE(5),
        [sym_delete_statement] = STATE(5),
        [sym__suite] = STATE(550),
        [sym__expression] = STATE(23),
        [sym_binary_operator] = STATE(16),
        [sym_subscript] = STATE(16),
        [sym_call] = STATE(16),
        [sym_list] = STATE(16),
        [sym_list_comprehension] = STATE(16),
        [sym_dictionary] = STATE(16),
        [sym_dictionary_comprehension] = STATE(16),
        [sym_set] = STATE(16),
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
        [sym__indent] = ACTIONS(907),
    },
    [547] = {
        [sym_default_parameter] = STATE(263),
        [sym_list_splat_parameter] = STATE(264),
        [sym_dictionary_splat_parameter] = STATE(265),
        [sym_expression_list] = STATE(549),
        [sym__expression] = STATE(109),
        [sym_binary_operator] = STATE(36),
        [sym_subscript] = STATE(36),
        [sym_call] = STATE(36),
        [sym_list] = STATE(36),
        [sym_list_comprehension] = STATE(36),
        [sym_dictionary] = STATE(36),
        [sym_dictionary_comprehension] = STATE(36),
        [sym_set] = STATE(36),
        [aux_sym_parameters_repeat1] = STATE(266),
        [anon_sym_RPAREN] = ACTIONS(573),
        [anon_sym_STAR] = ACTIONS(575),
        [anon_sym_LBRACK] = ACTIONS(117),
        [anon_sym_LBRACE] = ACTIONS(119),
        [sym_number] = ACTIONS(121),
        [sym_identifier] = ACTIONS(1465),
        [sym_comment] = ACTIONS(73),
    },
    [548] = {
        [anon_sym_COMMA] = ACTIONS(1467),
        [anon_sym_LPAREN] = ACTIONS(135),
        [anon_sym_RPAREN] = ACTIONS(1470),
        [anon_sym_EQ] = ACTIONS(597),
        [anon_sym_PLUS] = ACTIONS(135),
        [anon_sym_LBRACK] = ACTIONS(135),
        [sym_comment] = ACTIONS(73),
    },
    [549] = {
        [anon_sym_RPAREN] = ACTIONS(1196),
        [sym_comment] = ACTIONS(73),
    },
    [550] = {
        [ts_builtin_sym_end] = ACTIONS(567),
        [anon_sym_SEMI] = ACTIONS(567),
        [anon_sym_print] = ACTIONS(565),
        [anon_sym_return] = ACTIONS(565),
        [anon_sym_del] = ACTIONS(565),
        [sym_pass_statement] = ACTIONS(565),
        [sym_break_statement] = ACTIONS(565),
        [sym_continue_statement] = ACTIONS(565),
        [anon_sym_if] = ACTIONS(565),
        [anon_sym_for] = ACTIONS(565),
        [anon_sym_while] = ACTIONS(565),
        [anon_sym_try] = ACTIONS(565),
        [anon_sym_with] = ACTIONS(565),
        [anon_sym_def] = ACTIONS(565),
        [anon_sym_class] = ACTIONS(565),
        [anon_sym_AT] = ACTIONS(567),
        [anon_sym_LBRACK] = ACTIONS(567),
        [anon_sym_LBRACE] = ACTIONS(567),
        [sym_number] = ACTIONS(565),
        [sym_identifier] = ACTIONS(569),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(567),
        [sym__dedent] = ACTIONS(567),
    },
    [551] = {
        [aux_sym_print_statement_repeat1] = STATE(192),
        [aux_sym_subscript_repeat1] = STATE(43),
        [anon_sym_COMMA] = ACTIONS(1473),
        [anon_sym_for] = ACTIONS(445),
        [anon_sym_LPAREN] = ACTIONS(209),
        [anon_sym_PLUS] = ACTIONS(211),
        [anon_sym_LBRACK] = ACTIONS(213),
        [anon_sym_RBRACK] = ACTIONS(1475),
        [sym_comment] = ACTIONS(73),
    },
    [552] = {
        [sym__expression] = STATE(554),
        [sym_binary_operator] = STATE(36),
        [sym_subscript] = STATE(36),
        [sym_call] = STATE(36),
        [sym_list] = STATE(36),
        [sym_list_comprehension] = STATE(36),
        [sym_dictionary] = STATE(36),
        [sym_dictionary_comprehension] = STATE(36),
        [sym_set] = STATE(36),
        [anon_sym_LBRACK] = ACTIONS(117),
        [anon_sym_DOT_DOT_DOT] = ACTIONS(215),
        [anon_sym_RBRACK] = ACTIONS(1370),
        [anon_sym_LBRACE] = ACTIONS(119),
        [sym_number] = ACTIONS(121),
        [sym_identifier] = ACTIONS(121),
        [sym_comment] = ACTIONS(73),
    },
    [553] = {
        [anon_sym_COMMA] = ACTIONS(1477),
        [anon_sym_COLON] = ACTIONS(1477),
        [anon_sym_for] = ACTIONS(1477),
        [anon_sym_in] = ACTIONS(1477),
        [anon_sym_as] = ACTIONS(1477),
        [anon_sym_LPAREN] = ACTIONS(1477),
        [anon_sym_RPAREN] = ACTIONS(1477),
        [anon_sym_PLUS] = ACTIONS(1477),
        [anon_sym_LBRACK] = ACTIONS(1477),
        [anon_sym_RBRACK] = ACTIONS(1477),
        [anon_sym_RBRACE] = ACTIONS(1477),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(1477),
    },
    [554] = {
        [anon_sym_COMMA] = ACTIONS(1421),
        [anon_sym_LPAREN] = ACTIONS(209),
        [anon_sym_PLUS] = ACTIONS(211),
        [anon_sym_LBRACK] = ACTIONS(213),
        [anon_sym_RBRACK] = ACTIONS(1421),
        [sym_comment] = ACTIONS(73),
    },
    [555] = {
        [anon_sym_COMMA] = ACTIONS(247),
        [anon_sym_COLON] = ACTIONS(247),
        [anon_sym_for] = ACTIONS(247),
        [anon_sym_in] = ACTIONS(247),
        [anon_sym_as] = ACTIONS(247),
        [anon_sym_LPAREN] = ACTIONS(1236),
        [anon_sym_RPAREN] = ACTIONS(247),
        [anon_sym_PLUS] = ACTIONS(1251),
        [anon_sym_LBRACK] = ACTIONS(1254),
        [anon_sym_RBRACK] = ACTIONS(247),
        [anon_sym_RBRACE] = ACTIONS(247),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(247),
    },
    [556] = {
        [anon_sym_LPAREN] = ACTIONS(1480),
        [anon_sym_DOT] = ACTIONS(1480),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(1480),
    },
    [557] = {
        [anon_sym_COLON] = ACTIONS(1483),
        [anon_sym_LPAREN] = ACTIONS(1485),
        [sym_comment] = ACTIONS(73),
    },
    [558] = {
        [sym_expression_list] = STATE(549),
        [sym__expression] = STATE(109),
        [sym_binary_operator] = STATE(36),
        [sym_subscript] = STATE(36),
        [sym_call] = STATE(36),
        [sym_list] = STATE(36),
        [sym_list_comprehension] = STATE(36),
        [sym_dictionary] = STATE(36),
        [sym_dictionary_comprehension] = STATE(36),
        [sym_set] = STATE(36),
        [anon_sym_LBRACK] = ACTIONS(117),
        [anon_sym_LBRACE] = ACTIONS(119),
        [sym_number] = ACTIONS(121),
        [sym_identifier] = ACTIONS(121),
        [sym_comment] = ACTIONS(73),
    },
    [559] = {
        [anon_sym_COMMA] = ACTIONS(1487),
        [anon_sym_LPAREN] = ACTIONS(135),
        [anon_sym_RPAREN] = ACTIONS(1490),
        [anon_sym_PLUS] = ACTIONS(135),
        [anon_sym_LBRACK] = ACTIONS(135),
        [sym_comment] = ACTIONS(73),
    },
    [560] = {
        [anon_sym_COMMA] = ACTIONS(1494),
        [anon_sym_LPAREN] = ACTIONS(209),
        [anon_sym_RPAREN] = ACTIONS(1494),
        [anon_sym_PLUS] = ACTIONS(211),
        [anon_sym_LBRACK] = ACTIONS(213),
        [sym_comment] = ACTIONS(73),
    },
    [561] = {
        [sym__expression] = STATE(139),
        [sym_binary_operator] = STATE(36),
        [sym_subscript] = STATE(36),
        [sym_call] = STATE(36),
        [sym_list] = STATE(36),
        [sym_list_comprehension] = STATE(36),
        [sym_dictionary] = STATE(36),
        [sym_dictionary_comprehension] = STATE(36),
        [sym_set] = STATE(36),
        [anon_sym_STAR] = ACTIONS(589),
        [anon_sym_LBRACK] = ACTIONS(117),
        [anon_sym_LBRACE] = ACTIONS(119),
        [sym_number] = ACTIONS(121),
        [sym_identifier] = ACTIONS(1497),
        [sym_comment] = ACTIONS(73),
    },
    [562] = {
        [anon_sym_COMMA] = ACTIONS(1467),
        [anon_sym_LPAREN] = ACTIONS(135),
        [anon_sym_RPAREN] = ACTIONS(1470),
        [anon_sym_EQ] = ACTIONS(997),
        [anon_sym_PLUS] = ACTIONS(135),
        [anon_sym_LBRACK] = ACTIONS(135),
        [sym_comment] = ACTIONS(73),
    },
    [563] = {
        [aux_sym_print_statement_repeat1] = STATE(566),
        [anon_sym_COMMA] = ACTIONS(1499),
        [anon_sym_LPAREN] = ACTIONS(209),
        [anon_sym_RPAREN] = ACTIONS(1501),
        [anon_sym_PLUS] = ACTIONS(211),
        [anon_sym_LBRACK] = ACTIONS(213),
        [sym_comment] = ACTIONS(73),
    },
    [564] = {
        [sym__expression] = STATE(114),
        [sym_binary_operator] = STATE(36),
        [sym_subscript] = STATE(36),
        [sym_call] = STATE(36),
        [sym_list] = STATE(36),
        [sym_list_comprehension] = STATE(36),
        [sym_dictionary] = STATE(36),
        [sym_dictionary_comprehension] = STATE(36),
        [sym_set] = STATE(36),
        [anon_sym_RPAREN] = ACTIONS(397),
        [anon_sym_STAR] = ACTIONS(291),
        [anon_sym_LBRACK] = ACTIONS(1504),
        [anon_sym_STAR_STAR] = ACTIONS(293),
        [anon_sym_LBRACE] = ACTIONS(1507),
        [sym_number] = ACTIONS(1510),
        [sym_identifier] = ACTIONS(1510),
        [sym_comment] = ACTIONS(73),
    },
    [565] = {
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
        [sym__newline] = ACTIONS(1513),
    },
    [566] = {
        [anon_sym_COMMA] = ACTIONS(333),
        [anon_sym_RPAREN] = ACTIONS(1317),
        [sym_comment] = ACTIONS(73),
    },
    [567] = {
        [anon_sym_COMMA] = ACTIONS(1487),
        [anon_sym_LPAREN] = ACTIONS(135),
        [anon_sym_RPAREN] = ACTIONS(1487),
        [anon_sym_PLUS] = ACTIONS(135),
        [anon_sym_LBRACK] = ACTIONS(135),
        [sym_comment] = ACTIONS(73),
    },
    [568] = {
        [sym_parameters] = STATE(455),
        [anon_sym_LPAREN] = ACTIONS(571),
        [sym_comment] = ACTIONS(73),
    },
    [569] = {
        [aux_sym_with_statement_repeat1] = STATE(471),
        [anon_sym_COMMA] = ACTIONS(639),
        [anon_sym_COLON] = ACTIONS(1516),
        [sym_comment] = ACTIONS(73),
    },
    [570] = {
        [sym__simple_statement] = STATE(480),
        [sym_print_statement] = STATE(5),
        [sym_expression_statement] = STATE(5),
        [sym_return_statement] = STATE(5),
        [sym_delete_statement] = STATE(5),
        [sym__suite] = STATE(571),
        [sym__expression] = STATE(23),
        [sym_binary_operator] = STATE(16),
        [sym_subscript] = STATE(16),
        [sym_call] = STATE(16),
        [sym_list] = STATE(16),
        [sym_list_comprehension] = STATE(16),
        [sym_dictionary] = STATE(16),
        [sym_dictionary_comprehension] = STATE(16),
        [sym_set] = STATE(16),
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
        [sym__indent] = ACTIONS(907),
    },
    [571] = {
        [ts_builtin_sym_end] = ACTIONS(725),
        [anon_sym_SEMI] = ACTIONS(725),
        [anon_sym_print] = ACTIONS(723),
        [anon_sym_return] = ACTIONS(723),
        [anon_sym_del] = ACTIONS(723),
        [sym_pass_statement] = ACTIONS(723),
        [sym_break_statement] = ACTIONS(723),
        [sym_continue_statement] = ACTIONS(723),
        [anon_sym_if] = ACTIONS(723),
        [anon_sym_for] = ACTIONS(723),
        [anon_sym_while] = ACTIONS(723),
        [anon_sym_try] = ACTIONS(723),
        [anon_sym_with] = ACTIONS(723),
        [anon_sym_def] = ACTIONS(723),
        [anon_sym_class] = ACTIONS(723),
        [anon_sym_AT] = ACTIONS(725),
        [anon_sym_LBRACK] = ACTIONS(725),
        [anon_sym_LBRACE] = ACTIONS(725),
        [sym_number] = ACTIONS(723),
        [sym_identifier] = ACTIONS(727),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(725),
        [sym__dedent] = ACTIONS(725),
    },
    [572] = {
        [anon_sym_COMMA] = ACTIONS(647),
        [anon_sym_COLON] = ACTIONS(1518),
        [anon_sym_LPAREN] = ACTIONS(209),
        [anon_sym_PLUS] = ACTIONS(211),
        [anon_sym_LBRACK] = ACTIONS(213),
        [sym_comment] = ACTIONS(73),
    },
    [573] = {
        [anon_sym_COMMA] = ACTIONS(1521),
        [anon_sym_COLON] = ACTIONS(1523),
        [anon_sym_as] = ACTIONS(1521),
        [anon_sym_LPAREN] = ACTIONS(209),
        [anon_sym_PLUS] = ACTIONS(211),
        [anon_sym_LBRACK] = ACTIONS(213),
        [sym_comment] = ACTIONS(73),
    },
    [574] = {
        [sym__expression] = STATE(576),
        [sym_binary_operator] = STATE(36),
        [sym_subscript] = STATE(36),
        [sym_call] = STATE(36),
        [sym_list] = STATE(36),
        [sym_list_comprehension] = STATE(36),
        [sym_dictionary] = STATE(36),
        [sym_dictionary_comprehension] = STATE(36),
        [sym_set] = STATE(36),
        [anon_sym_LBRACK] = ACTIONS(117),
        [anon_sym_LBRACE] = ACTIONS(119),
        [sym_number] = ACTIONS(121),
        [sym_identifier] = ACTIONS(121),
        [sym_comment] = ACTIONS(73),
    },
    [575] = {
        [sym__simple_statement] = STATE(480),
        [sym_print_statement] = STATE(5),
        [sym_expression_statement] = STATE(5),
        [sym_return_statement] = STATE(5),
        [sym_delete_statement] = STATE(5),
        [sym__suite] = STATE(577),
        [sym__expression] = STATE(23),
        [sym_binary_operator] = STATE(16),
        [sym_subscript] = STATE(16),
        [sym_call] = STATE(16),
        [sym_list] = STATE(16),
        [sym_list_comprehension] = STATE(16),
        [sym_dictionary] = STATE(16),
        [sym_dictionary_comprehension] = STATE(16),
        [sym_set] = STATE(16),
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
        [sym__indent] = ACTIONS(907),
    },
    [576] = {
        [anon_sym_COLON] = ACTIONS(1525),
        [anon_sym_LPAREN] = ACTIONS(209),
        [anon_sym_PLUS] = ACTIONS(211),
        [anon_sym_LBRACK] = ACTIONS(213),
        [sym_comment] = ACTIONS(73),
    },
    [577] = {
        [ts_builtin_sym_end] = ACTIONS(743),
        [anon_sym_SEMI] = ACTIONS(743),
        [anon_sym_print] = ACTIONS(741),
        [anon_sym_return] = ACTIONS(741),
        [anon_sym_del] = ACTIONS(741),
        [sym_pass_statement] = ACTIONS(741),
        [sym_break_statement] = ACTIONS(741),
        [sym_continue_statement] = ACTIONS(741),
        [anon_sym_if] = ACTIONS(741),
        [anon_sym_else] = ACTIONS(741),
        [anon_sym_for] = ACTIONS(741),
        [anon_sym_while] = ACTIONS(741),
        [anon_sym_try] = ACTIONS(741),
        [anon_sym_except] = ACTIONS(741),
        [anon_sym_finally] = ACTIONS(741),
        [anon_sym_with] = ACTIONS(741),
        [anon_sym_def] = ACTIONS(741),
        [anon_sym_class] = ACTIONS(741),
        [anon_sym_AT] = ACTIONS(743),
        [anon_sym_LBRACK] = ACTIONS(743),
        [anon_sym_LBRACE] = ACTIONS(743),
        [sym_number] = ACTIONS(741),
        [sym_identifier] = ACTIONS(745),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(743),
        [sym__dedent] = ACTIONS(743),
    },
    [578] = {
        [sym__simple_statement] = STATE(302),
        [sym_print_statement] = STATE(5),
        [sym_expression_statement] = STATE(5),
        [sym_return_statement] = STATE(5),
        [sym_delete_statement] = STATE(5),
        [sym__suite] = STATE(579),
        [sym__expression] = STATE(23),
        [sym_binary_operator] = STATE(16),
        [sym_subscript] = STATE(16),
        [sym_call] = STATE(16),
        [sym_list] = STATE(16),
        [sym_list_comprehension] = STATE(16),
        [sym_dictionary] = STATE(16),
        [sym_dictionary_comprehension] = STATE(16),
        [sym_set] = STATE(16),
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
        [sym__indent] = ACTIONS(669),
    },
    [579] = {
        [sym_except_clause] = STATE(532),
        [sym_finally_clause] = STATE(533),
        [aux_sym_try_statement_repeat1] = STATE(470),
        [anon_sym_except] = ACTIONS(1527),
        [anon_sym_finally] = ACTIONS(1529),
        [sym_comment] = ACTIONS(73),
    },
    [580] = {
        [anon_sym_COLON] = ACTIONS(1531),
        [anon_sym_LPAREN] = ACTIONS(209),
        [anon_sym_PLUS] = ACTIONS(211),
        [anon_sym_LBRACK] = ACTIONS(213),
        [sym_comment] = ACTIONS(73),
    },
    [581] = {
        [sym__simple_statement] = STATE(480),
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
        [sym__indent] = ACTIONS(907),
    },
    [582] = {
        [sym_else_clause] = STATE(583),
        [ts_builtin_sym_end] = ACTIONS(753),
        [anon_sym_SEMI] = ACTIONS(753),
        [anon_sym_print] = ACTIONS(751),
        [anon_sym_return] = ACTIONS(751),
        [anon_sym_del] = ACTIONS(751),
        [sym_pass_statement] = ACTIONS(751),
        [sym_break_statement] = ACTIONS(751),
        [sym_continue_statement] = ACTIONS(751),
        [anon_sym_if] = ACTIONS(751),
        [anon_sym_else] = ACTIONS(1325),
        [anon_sym_for] = ACTIONS(751),
        [anon_sym_while] = ACTIONS(751),
        [anon_sym_try] = ACTIONS(751),
        [anon_sym_with] = ACTIONS(751),
        [anon_sym_def] = ACTIONS(751),
        [anon_sym_class] = ACTIONS(751),
        [anon_sym_AT] = ACTIONS(753),
        [anon_sym_LBRACK] = ACTIONS(753),
        [anon_sym_LBRACE] = ACTIONS(753),
        [sym_number] = ACTIONS(751),
        [sym_identifier] = ACTIONS(755),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(753),
        [sym__dedent] = ACTIONS(753),
    },
    [583] = {
        [ts_builtin_sym_end] = ACTIONS(759),
        [anon_sym_SEMI] = ACTIONS(759),
        [anon_sym_print] = ACTIONS(757),
        [anon_sym_return] = ACTIONS(757),
        [anon_sym_del] = ACTIONS(757),
        [sym_pass_statement] = ACTIONS(757),
        [sym_break_statement] = ACTIONS(757),
        [sym_continue_statement] = ACTIONS(757),
        [anon_sym_if] = ACTIONS(757),
        [anon_sym_for] = ACTIONS(757),
        [anon_sym_while] = ACTIONS(757),
        [anon_sym_try] = ACTIONS(757),
        [anon_sym_with] = ACTIONS(757),
        [anon_sym_def] = ACTIONS(757),
        [anon_sym_class] = ACTIONS(757),
        [anon_sym_AT] = ACTIONS(759),
        [anon_sym_LBRACK] = ACTIONS(759),
        [anon_sym_LBRACE] = ACTIONS(759),
        [sym_number] = ACTIONS(757),
        [sym_identifier] = ACTIONS(761),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(759),
        [sym__dedent] = ACTIONS(759),
    },
    [584] = {
        [aux_sym_print_statement_repeat1] = STATE(111),
        [anon_sym_COMMA] = ACTIONS(329),
        [anon_sym_COLON] = ACTIONS(331),
        [anon_sym_LPAREN] = ACTIONS(209),
        [anon_sym_PLUS] = ACTIONS(1533),
        [anon_sym_LBRACK] = ACTIONS(213),
        [anon_sym_RBRACK] = ACTIONS(457),
        [anon_sym_RBRACE] = ACTIONS(435),
        [sym_comment] = ACTIONS(73),
    },
    [585] = {
        [sym__expression] = STATE(586),
        [sym_binary_operator] = STATE(36),
        [sym_subscript] = STATE(36),
        [sym_call] = STATE(36),
        [sym_list] = STATE(36),
        [sym_list_comprehension] = STATE(36),
        [sym_dictionary] = STATE(36),
        [sym_dictionary_comprehension] = STATE(36),
        [sym_set] = STATE(36),
        [anon_sym_LBRACK] = ACTIONS(117),
        [anon_sym_LBRACE] = ACTIONS(119),
        [sym_number] = ACTIONS(121),
        [sym_identifier] = ACTIONS(121),
        [sym_comment] = ACTIONS(73),
    },
    [586] = {
        [anon_sym_COMMA] = ACTIONS(247),
        [anon_sym_COLON] = ACTIONS(247),
        [anon_sym_LPAREN] = ACTIONS(1535),
        [anon_sym_PLUS] = ACTIONS(1538),
        [anon_sym_LBRACK] = ACTIONS(1541),
        [anon_sym_RBRACK] = ACTIONS(247),
        [anon_sym_RBRACE] = ACTIONS(247),
        [sym_comment] = ACTIONS(73),
    },
    [587] = {
        [anon_sym_in] = ACTIONS(1194),
        [sym_comment] = ACTIONS(73),
    },
    [588] = {
        [anon_sym_COLON] = ACTIONS(1544),
        [anon_sym_LPAREN] = ACTIONS(209),
        [anon_sym_PLUS] = ACTIONS(211),
        [anon_sym_LBRACK] = ACTIONS(213),
        [sym_comment] = ACTIONS(73),
    },
    [589] = {
        [sym__simple_statement] = STATE(480),
        [sym_print_statement] = STATE(5),
        [sym_expression_statement] = STATE(5),
        [sym_return_statement] = STATE(5),
        [sym_delete_statement] = STATE(5),
        [sym__suite] = STATE(590),
        [sym__expression] = STATE(23),
        [sym_binary_operator] = STATE(16),
        [sym_subscript] = STATE(16),
        [sym_call] = STATE(16),
        [sym_list] = STATE(16),
        [sym_list_comprehension] = STATE(16),
        [sym_dictionary] = STATE(16),
        [sym_dictionary_comprehension] = STATE(16),
        [sym_set] = STATE(16),
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
        [sym__indent] = ACTIONS(907),
    },
    [590] = {
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
    [591] = {
        [anon_sym_COLON] = ACTIONS(1546),
        [anon_sym_LPAREN] = ACTIONS(209),
        [anon_sym_PLUS] = ACTIONS(211),
        [anon_sym_LBRACK] = ACTIONS(213),
        [sym_comment] = ACTIONS(73),
    },
    [592] = {
        [sym__simple_statement] = STATE(480),
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
        [sym__indent] = ACTIONS(907),
    },
    [593] = {
        [sym_elif_clause] = STATE(522),
        [sym_else_clause] = STATE(594),
        [aux_sym_if_statement_repeat1] = STATE(469),
        [ts_builtin_sym_end] = ACTIONS(785),
        [anon_sym_SEMI] = ACTIONS(785),
        [anon_sym_print] = ACTIONS(781),
        [anon_sym_return] = ACTIONS(781),
        [anon_sym_del] = ACTIONS(781),
        [sym_pass_statement] = ACTIONS(781),
        [sym_break_statement] = ACTIONS(781),
        [sym_continue_statement] = ACTIONS(781),
        [anon_sym_if] = ACTIONS(781),
        [anon_sym_elif] = ACTIONS(1323),
        [anon_sym_else] = ACTIONS(1325),
        [anon_sym_for] = ACTIONS(781),
        [anon_sym_while] = ACTIONS(781),
        [anon_sym_try] = ACTIONS(781),
        [anon_sym_with] = ACTIONS(781),
        [anon_sym_def] = ACTIONS(781),
        [anon_sym_class] = ACTIONS(781),
        [anon_sym_AT] = ACTIONS(785),
        [anon_sym_LBRACK] = ACTIONS(785),
        [anon_sym_LBRACE] = ACTIONS(785),
        [sym_number] = ACTIONS(781),
        [sym_identifier] = ACTIONS(787),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(785),
        [sym__dedent] = ACTIONS(785),
    },
    [594] = {
        [ts_builtin_sym_end] = ACTIONS(797),
        [anon_sym_SEMI] = ACTIONS(797),
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
        [anon_sym_AT] = ACTIONS(797),
        [anon_sym_LBRACK] = ACTIONS(797),
        [anon_sym_LBRACE] = ACTIONS(797),
        [sym_number] = ACTIONS(795),
        [sym_identifier] = ACTIONS(799),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(797),
        [sym__dedent] = ACTIONS(797),
    },
    [595] = {
        [anon_sym_COMMA] = ACTIONS(1339),
        [anon_sym_COLON] = ACTIONS(1548),
        [anon_sym_for] = ACTIONS(1339),
        [anon_sym_in] = ACTIONS(1339),
        [anon_sym_as] = ACTIONS(1339),
        [anon_sym_LPAREN] = ACTIONS(1339),
        [anon_sym_RPAREN] = ACTIONS(1339),
        [anon_sym_PLUS] = ACTIONS(1339),
        [anon_sym_LBRACK] = ACTIONS(1339),
        [anon_sym_RBRACK] = ACTIONS(1339),
        [anon_sym_RBRACE] = ACTIONS(1339),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(1339),
    },
    [596] = {
        [anon_sym_COMMA] = ACTIONS(1553),
        [anon_sym_RBRACK] = ACTIONS(1553),
        [sym_comment] = ACTIONS(73),
    },
    [597] = {
        [anon_sym_COMMA] = ACTIONS(1556),
        [anon_sym_COLON] = ACTIONS(1556),
        [anon_sym_for] = ACTIONS(1556),
        [anon_sym_in] = ACTIONS(1556),
        [anon_sym_as] = ACTIONS(1556),
        [anon_sym_LPAREN] = ACTIONS(1556),
        [anon_sym_RPAREN] = ACTIONS(1556),
        [anon_sym_PLUS] = ACTIONS(1556),
        [anon_sym_LBRACK] = ACTIONS(1556),
        [anon_sym_RBRACK] = ACTIONS(1556),
        [anon_sym_RBRACE] = ACTIONS(1556),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(1556),
    },
    [598] = {
        [anon_sym_COMMA] = ACTIONS(1561),
        [anon_sym_COLON] = ACTIONS(1561),
        [anon_sym_for] = ACTIONS(1561),
        [anon_sym_in] = ACTIONS(1561),
        [anon_sym_as] = ACTIONS(1561),
        [anon_sym_LPAREN] = ACTIONS(1561),
        [anon_sym_RPAREN] = ACTIONS(1561),
        [anon_sym_PLUS] = ACTIONS(1561),
        [anon_sym_LBRACK] = ACTIONS(1561),
        [anon_sym_RBRACK] = ACTIONS(1561),
        [anon_sym_RBRACE] = ACTIONS(1561),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(1561),
    },
    [599] = {
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
    [600] = {
        [anon_sym_COMMA] = ACTIONS(1566),
        [anon_sym_COLON] = ACTIONS(1566),
        [sym_comment] = ACTIONS(73),
    },
    [601] = {
        [anon_sym_COMMA] = ACTIONS(1569),
        [anon_sym_COLON] = ACTIONS(1577),
        [anon_sym_in] = ACTIONS(1582),
        [anon_sym_as] = ACTIONS(645),
        [anon_sym_LPAREN] = ACTIONS(161),
        [anon_sym_RPAREN] = ACTIONS(1585),
        [anon_sym_PLUS] = ACTIONS(1590),
        [anon_sym_LBRACK] = ACTIONS(165),
        [anon_sym_RBRACK] = ACTIONS(1592),
        [anon_sym_RBRACE] = ACTIONS(1582),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(1582),
    },
    [602] = {
        [anon_sym_COMMA] = ACTIONS(1597),
        [anon_sym_RPAREN] = ACTIONS(1597),
        [sym_comment] = ACTIONS(73),
    },
    [603] = {
        [anon_sym_RPAREN] = ACTIONS(1600),
        [sym_comment] = ACTIONS(73),
    },
    [604] = {
        [anon_sym_COMMA] = ACTIONS(1602),
        [anon_sym_RBRACE] = ACTIONS(1602),
        [sym_comment] = ACTIONS(73),
    },
    [605] = {
        [anon_sym_COMMA] = ACTIONS(1605),
        [anon_sym_COLON] = ACTIONS(1605),
        [anon_sym_for] = ACTIONS(1605),
        [anon_sym_in] = ACTIONS(1605),
        [anon_sym_as] = ACTIONS(1605),
        [anon_sym_LPAREN] = ACTIONS(1605),
        [anon_sym_RPAREN] = ACTIONS(1605),
        [anon_sym_PLUS] = ACTIONS(1605),
        [anon_sym_LBRACK] = ACTIONS(1605),
        [anon_sym_RBRACK] = ACTIONS(1605),
        [anon_sym_RBRACE] = ACTIONS(1605),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(1605),
    },
    [606] = {
        [sym__simple_statement] = STATE(480),
        [sym_print_statement] = STATE(5),
        [sym_expression_statement] = STATE(5),
        [sym_return_statement] = STATE(5),
        [sym_delete_statement] = STATE(5),
        [sym__suite] = STATE(527),
        [sym__expression] = STATE(609),
        [sym_binary_operator] = STATE(16),
        [sym_subscript] = STATE(16),
        [sym_call] = STATE(16),
        [sym_list] = STATE(16),
        [sym_list_comprehension] = STATE(16),
        [sym_dictionary] = STATE(16),
        [sym_dictionary_comprehension] = STATE(16),
        [sym_set] = STATE(16),
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
        [sym__indent] = ACTIONS(907),
    },
    [607] = {
        [sym__expression] = STATE(608),
        [sym_binary_operator] = STATE(16),
        [sym_subscript] = STATE(16),
        [sym_call] = STATE(16),
        [sym_list] = STATE(16),
        [sym_list_comprehension] = STATE(16),
        [sym_dictionary] = STATE(16),
        [sym_dictionary_comprehension] = STATE(16),
        [sym_set] = STATE(16),
        [anon_sym_LBRACK] = ACTIONS(107),
        [anon_sym_LBRACE] = ACTIONS(109),
        [sym_number] = ACTIONS(111),
        [sym_identifier] = ACTIONS(111),
        [sym_comment] = ACTIONS(73),
    },
    [608] = {
        [anon_sym_COMMA] = ACTIONS(247),
        [anon_sym_COLON] = ACTIONS(247),
        [anon_sym_in] = ACTIONS(247),
        [anon_sym_as] = ACTIONS(247),
        [anon_sym_LPAREN] = ACTIONS(1236),
        [anon_sym_RPAREN] = ACTIONS(247),
        [anon_sym_PLUS] = ACTIONS(1609),
        [anon_sym_LBRACK] = ACTIONS(1254),
        [anon_sym_RBRACK] = ACTIONS(247),
        [anon_sym_RBRACE] = ACTIONS(247),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(247),
    },
    [609] = {
        [anon_sym_COMMA] = ACTIONS(325),
        [anon_sym_LPAREN] = ACTIONS(161),
        [anon_sym_PLUS] = ACTIONS(1612),
        [anon_sym_LBRACK] = ACTIONS(165),
        [anon_sym_RBRACE] = ACTIONS(325),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(167),
    },
    [610] = {
        [sym__expression] = STATE(611),
        [sym_binary_operator] = STATE(16),
        [sym_subscript] = STATE(16),
        [sym_call] = STATE(16),
        [sym_list] = STATE(16),
        [sym_list_comprehension] = STATE(16),
        [sym_dictionary] = STATE(16),
        [sym_dictionary_comprehension] = STATE(16),
        [sym_set] = STATE(16),
        [anon_sym_LBRACK] = ACTIONS(107),
        [anon_sym_LBRACE] = ACTIONS(109),
        [sym_number] = ACTIONS(111),
        [sym_identifier] = ACTIONS(111),
        [sym_comment] = ACTIONS(73),
    },
    [611] = {
        [anon_sym_COMMA] = ACTIONS(247),
        [anon_sym_LPAREN] = ACTIONS(1236),
        [anon_sym_PLUS] = ACTIONS(1614),
        [anon_sym_LBRACK] = ACTIONS(1254),
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
    [7] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(416),
    [9] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(3),
    [11] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(4),
    [13] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(5),
    [15] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(417),
    [17] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(418),
    [19] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(419),
    [21] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(420),
    [23] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(421),
    [25] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(422),
    [27] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(423),
    [29] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(424),
    [31] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(425),
    [33] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(426),
    [35] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(427),
    [37] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(428),
    [39] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(429),
    [41] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(430),
    [43] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(431),
    [45] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(432),
    [47] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(433),
    [49] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(434),
    [51] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(13),
    [53] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(435),
    [55] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(436),
    [57] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(437),
    [59] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(438),
    [61] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(439),
    [63] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(61),
    [65] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(15),
    [67] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(440),
    [69] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(16),
    [71] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, RECOVER(441),
    [73] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT_EXTRA(),
    [75] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(442),
    [77] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(443),
    [79] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(444),
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
    [123] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(361),
    [125] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(351),
    [127] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(215),
    [129] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(200),
    [131] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(187),
    [133] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(167),
    [135] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__expression, 1),
    [137] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, ACCEPT_INPUT(),
    [139] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_module_repeat1, 1),
    [141] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_module_repeat1, 1),
    [143] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_module_repeat1, 1),
    [145] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(166),
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
    [201] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(125),
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
    [305] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(97),
    [307] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(98),
    [309] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(99),
    [311] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(102),
    [313] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_dictionary, 3),
    [315] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(101),
    [317] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(103),
    [319] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_dictionary, 4),
    [321] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_dictionary, 5),
    [323] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_dictionary_repeat1, 3),
    [325] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_pair, 3),
    [327] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(115),
    [329] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(110),
    [331] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_expression_list, 1),
    [333] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(112),
    [335] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_expression_list, 2),
    [337] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_print_statement_repeat1, 3),
    [339] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_print_statement_repeat1, 2),
    [341] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(117),
    [343] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_dictionary_comprehension, 7),
    [345] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_dictionary_repeat1, 2),
    [347] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(123),
    [349] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_set, 3),
    [351] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(122),
    [353] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(124),
    [355] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_set, 4),
    [357] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_set, 5),
    [359] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_list, 2),
    [361] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(127),
    [363] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(128),
    [365] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(129),
    [367] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(132),
    [369] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_list, 3),
    [371] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(131),
    [373] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(133),
    [375] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_list, 4),
    [377] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_list, 5),
    [379] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(135),
    [381] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(137),
    [383] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_list_comprehension, 7),
    [385] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_dictionary_splat_argument, 2),
    [387] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_list_splat_argument, 2),
    [389] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(165),
    [391] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(160),
    [393] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(161),
    [395] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(159),
    [397] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(150),
    [399] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(151),
    [401] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(153),
    [403] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(154),
    [405] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(156),
    [407] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(158),
    [409] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(163),
    [411] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__statement, 2),
    [413] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__statement, 2),
    [415] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__statement, 2),
    [417] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(181),
    [419] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(182),
    [421] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(170),
    [423] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(171),
    [425] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(172),
    [427] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(175),
    [429] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(174),
    [431] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(176),
    [433] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(178),
    [435] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(180),
    [437] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(185),
    [439] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(184),
    [441] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(186),
    [443] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(189),
    [445] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(190),
    [447] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(191),
    [449] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(194),
    [451] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(193),
    [453] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(195),
    [455] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(197),
    [457] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(199),
    [459] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_dotted_name, 1),
    [461] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(210),
    [463] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(202),
    [465] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(203),
    [467] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_decorator, 3),
    [469] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(205),
    [471] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_decorator, 4),
    [473] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(207),
    [475] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_arguments, 3),
    [477] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(209),
    [479] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_arguments, 4),
    [481] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(214),
    [483] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_dotted_name, 2),
    [485] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(212),
    [487] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(213),
    [489] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_dotted_name_repeat1, 3),
    [491] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_dotted_name_repeat1, 2),
    [493] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(216),
    [495] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(217),
    [497] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(221),
    [499] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(219),
    [501] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(220),
    [503] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(225),
    [505] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(226),
    [507] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(227),
    [509] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(228),
    [511] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(229),
    [513] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(230),
    [515] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(231),
    [517] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(224),
    [519] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_class_definition, 7),
    [521] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_class_definition, 7),
    [523] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_class_definition, 7),
    [525] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__suite, 2),
    [527] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__suite, 2),
    [529] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__suite, 2),
    [531] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(300),
    [533] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(255),
    [535] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(242),
    [537] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(241),
    [539] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(239),
    [541] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(230),
    [543] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(231),
    [545] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__suite, 3),
    [547] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__suite, 3),
    [549] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__suite, 3),
    [551] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(243),
    [553] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(244),
    [555] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(248),
    [557] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(246),
    [559] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(247),
    [561] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(251),
    [563] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(253),
    [565] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_class_definition, 4),
    [567] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_class_definition, 4),
    [569] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_class_definition, 4),
    [571] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(256),
    [573] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(260),
    [575] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(261),
    [577] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(262),
    [579] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(258),
    [581] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_function_definition, 5),
    [583] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_function_definition, 5),
    [585] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_function_definition, 5),
    [587] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_parameters, 2),
    [589] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(276),
    [591] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(286),
    [593] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(285),
    [595] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(282),
    [597] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(280),
    [599] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(283),
    [601] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(267),
    [603] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(278),
    [605] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(271),
    [607] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(272),
    [609] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_parameters, 4),
    [611] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(273),
    [613] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(275),
    [615] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_parameters, 6),
    [617] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(277),
    [619] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_dictionary_splat_parameter, 3),
    [621] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(279),
    [623] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_parameters_repeat1, 3),
    [625] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_parameters_repeat1, 3),
    [627] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_parameters, 5),
    [629] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_default_parameter, 3),
    [631] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_parameters, 3),
    [633] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_parameters_repeat1, 2),
    [635] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_parameters_repeat1, 2),
    [637] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_list_splat_parameter, 2),
    [639] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(291),
    [641] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(292),
    [643] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_with_item, 1),
    [645] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(289),
    [647] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_with_item, 3),
    [649] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(294),
    [651] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(295),
    [653] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_with_statement, 5),
    [655] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_with_statement, 5),
    [657] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_with_statement, 5),
    [659] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_with_statement_repeat1, 3),
    [661] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_with_statement, 4),
    [663] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_with_statement, 4),
    [665] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_with_statement, 4),
    [667] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_with_statement_repeat1, 2),
    [669] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(301),
    [671] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(325),
    [673] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(304),
    [675] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(305),
    [677] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(316),
    [679] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_try_statement_repeat1, 1),
    [681] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_try_statement_repeat1, 1),
    [683] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_try_statement_repeat1, 1),
    [685] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_try_statement, 4),
    [687] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_try_statement, 4),
    [689] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_try_statement, 4),
    [691] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(309),
    [693] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(304),
    [695] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(305),
    [697] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(314),
    [699] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_try_statement, 5),
    [701] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_try_statement, 5),
    [703] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_try_statement, 5),
    [705] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_try_statement_repeat1, 2),
    [707] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_try_statement_repeat1, 2),
    [709] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_try_statement_repeat1, 2),
    [711] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_try_statement, 6),
    [713] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_try_statement, 6),
    [715] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_try_statement, 6),
    [717] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_else_clause, 3),
    [719] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_else_clause, 3),
    [721] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_else_clause, 3),
    [723] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_finally_clause, 3),
    [725] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_finally_clause, 3),
    [727] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_finally_clause, 3),
    [729] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(319),
    [731] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(320),
    [733] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(322),
    [735] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_except_clause, 6),
    [737] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_except_clause, 6),
    [739] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_except_clause, 6),
    [741] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_except_clause, 4),
    [743] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_except_clause, 4),
    [745] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_except_clause, 4),
    [747] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(327),
    [749] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(329),
    [751] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_while_statement, 4),
    [753] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_while_statement, 4),
    [755] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_while_statement, 4),
    [757] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_while_statement, 5),
    [759] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_while_statement, 5),
    [761] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_while_statement, 5),
    [763] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(333),
    [765] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(335),
    [767] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_for_statement, 6),
    [769] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_for_statement, 6),
    [771] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_for_statement, 6),
    [773] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_for_statement, 7),
    [775] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_for_statement, 7),
    [777] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_for_statement, 7),
    [779] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(339),
    [781] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_if_statement, 4),
    [783] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(341),
    [785] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_if_statement, 4),
    [787] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_if_statement, 4),
    [789] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_if_statement_repeat1, 1),
    [791] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_if_statement_repeat1, 1),
    [793] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_if_statement_repeat1, 1),
    [795] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_if_statement, 5),
    [797] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_if_statement, 5),
    [799] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_if_statement, 5),
    [801] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_if_statement_repeat1, 2),
    [803] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_if_statement_repeat1, 2),
    [805] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_if_statement_repeat1, 2),
    [807] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_if_statement, 6),
    [809] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_if_statement, 6),
    [811] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_if_statement, 6),
    [813] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(348),
    [815] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_elif_clause, 4),
    [817] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_elif_clause, 4),
    [819] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_elif_clause, 4),
    [821] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(353),
    [823] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(356),
    [825] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(358),
    [827] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(363),
    [829] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(364),
    [831] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(375),
    [833] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(368),
    [835] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(363),
    [837] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(364),
    [839] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(373),
    [841] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(378),
    [843] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(379),
    [845] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(381),
    [847] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(385),
    [849] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(389),
    [851] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(391),
    [853] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(395),
    [855] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(397),
    [857] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(404),
    [859] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_delete_statement, 2),
    [861] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(408),
    [863] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(410),
    [865] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_return_statement, 2),
    [867] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_print_statement, 2),
    [869] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_print_statement, 3),
    [871] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(595),
    [873] = {.count = 5, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_parameters_repeat1, 2), REDUCE(aux_sym_call_repeat1, 2), REDUCE(aux_sym_parameters_repeat1, 3), REDUCE(aux_sym_call_repeat1, 3), SHIFT(273),
    [879] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_call_repeat1, 2), REDUCE(aux_sym_call_repeat1, 3), SHIFT(14),
    [883] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(596),
    [885] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(597),
    [887] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_call_repeat1, 2), REDUCE(aux_sym_call_repeat1, 3), SHIFT(61),
    [891] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_call_repeat1, 2), REDUCE(aux_sym_call_repeat1, 3), SHIFT(15),
    [895] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(598),
    [897] = {.count = 3, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_call_repeat1, 2), REDUCE(aux_sym_call_repeat1, 3), SHIFT(16),
    [901] = {.count = 5, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_parameters_repeat1, 2), REDUCE(aux_sym_call_repeat1, 2), REDUCE(aux_sym_parameters_repeat1, 3), REDUCE(aux_sym_call_repeat1, 3), SHIFT(599),
    [907] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(443),
    [909] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(491),
    [911] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(578),
    [913] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(570),
    [915] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(568),
    [917] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(561),
    [919] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(562),
    [921] = {.count = 5, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_call, 4), REDUCE(sym_call, 5), REDUCE(sym_call, 6), REDUCE(sym_call, 7), REDUCE(sym_call, 8),
    [927] = {.count = 11, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_parameters, 2), REDUCE(sym_parameters, 3), REDUCE(sym_parameters, 4), REDUCE(sym_call, 4), REDUCE(sym_parameters, 5), REDUCE(sym_call, 5), REDUCE(sym_parameters, 6), REDUCE(sym_call, 6), REDUCE(sym_call, 7), REDUCE(sym_call, 8), SHIFT(529),
    [939] = {.count = 7, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_arguments, 3), REDUCE(sym_arguments, 4), REDUCE(sym_call, 4), REDUCE(sym_call, 5), REDUCE(sym_call, 6), REDUCE(sym_call, 7), REDUCE(sym_call, 8),
    [947] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(559),
    [949] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(557),
    [951] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(556),
    [953] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_subscript_repeat1, 2), REDUCE(aux_sym_subscript_repeat1, 3), SHIFT(38),
    [957] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_subscript_repeat1, 2), REDUCE(aux_sym_subscript_repeat1, 3), SHIFT(42),
    [961] = {.count = 8, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_list, 2), REDUCE(sym_list, 3), REDUCE(sym_subscript, 4), REDUCE(sym_list, 4), REDUCE(sym_subscript, 5), REDUCE(sym_list, 5), REDUCE(sym_subscript, 6), REDUCE(sym_list_comprehension, 7),
    [970] = {.count = 8, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_dictionary, 2), REDUCE(sym_dictionary, 3), REDUCE(sym_set, 3), REDUCE(sym_dictionary, 4), REDUCE(sym_set, 4), REDUCE(sym_dictionary, 5), REDUCE(sym_set, 5), REDUCE(sym_dictionary_comprehension, 7),
    [979] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__expression, 1), REDUCE(sym_list_splat_parameter, 2), SHIFT(539),
    [983] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__expression, 1), SHIFT(546),
    [986] = {.count = 5, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_dotted_name, 1), REDUCE(sym__expression, 1), REDUCE(aux_sym_dotted_name_repeat1, 2), REDUCE(aux_sym_dotted_name_repeat1, 3), SHIFT(547),
    [992] = {.count = 4, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__expression, 1), REDUCE(sym_list_splat_parameter, 2), REDUCE(sym_dictionary_splat_parameter, 3), SHIFT(536),
    [997] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(432),
    [999] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_dotted_name_repeat1, 2), REDUCE(aux_sym_dotted_name_repeat1, 3), SHIFT(210),
    [1003] = {.count = 4, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_dotted_name, 1), REDUCE(sym__expression, 1), REDUCE(aux_sym_dotted_name_repeat1, 2), REDUCE(aux_sym_dotted_name_repeat1, 3),
    [1008] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_module, 2), REDUCE(sym__statement, 2), REDUCE(sym__suite, 2),
    [1012] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__statement, 2), REDUCE(sym__suite, 2),
    [1015] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__statement, 2), REDUCE(sym__suite, 2),
    [1018] = {.count = 4, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__statement, 2), REDUCE(sym__suite, 2), REDUCE(sym_decorator, 3), REDUCE(sym_decorator, 4),
    [1023] = {.count = 4, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__statement, 2), REDUCE(sym__suite, 2), REDUCE(sym_decorator, 3), REDUCE(sym_decorator, 4),
    [1028] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__statement, 2), REDUCE(sym__suite, 2),
    [1031] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(482),
    [1033] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__suite, 2), REDUCE(sym__suite, 3),
    [1036] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__suite, 2), REDUCE(sym__suite, 3),
    [1039] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__suite, 2), REDUCE(sym__suite, 3),
    [1042] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_module_repeat1, 1), REDUCE(aux_sym_module_repeat1, 2),
    [1045] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_module_repeat1, 1), REDUCE(aux_sym_module_repeat1, 2),
    [1048] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_module_repeat1, 1), REDUCE(aux_sym_module_repeat1, 2),
    [1051] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(545),
    [1053] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_if_statement_repeat1, 1), REDUCE(aux_sym_if_statement_repeat1, 2),
    [1056] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_if_statement_repeat1, 1), REDUCE(aux_sym_if_statement_repeat1, 2),
    [1059] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_if_statement_repeat1, 1), REDUCE(aux_sym_if_statement_repeat1, 2),
    [1062] = {.count = 5, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_if_statement, 5), REDUCE(sym_while_statement, 5), REDUCE(sym_try_statement, 5), REDUCE(sym_if_statement, 6), REDUCE(sym_for_statement, 7),
    [1068] = {.count = 5, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_if_statement, 5), REDUCE(sym_while_statement, 5), REDUCE(sym_try_statement, 5), REDUCE(sym_if_statement, 6), REDUCE(sym_for_statement, 7),
    [1074] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(427),
    [1076] = {.count = 5, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_if_statement, 5), REDUCE(sym_while_statement, 5), REDUCE(sym_try_statement, 5), REDUCE(sym_if_statement, 6), REDUCE(sym_for_statement, 7),
    [1082] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_try_statement_repeat1, 1), REDUCE(aux_sym_try_statement_repeat1, 2),
    [1085] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_try_statement_repeat1, 1), REDUCE(aux_sym_try_statement_repeat1, 2),
    [1088] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_try_statement_repeat1, 1), REDUCE(aux_sym_try_statement_repeat1, 2),
    [1091] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_try_statement, 4), REDUCE(sym_try_statement, 5), REDUCE(sym_try_statement, 6),
    [1095] = {.count = 3, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_try_statement, 4), REDUCE(sym_try_statement, 5), REDUCE(sym_try_statement, 6),
    [1099] = {.count = 3, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_try_statement, 4), REDUCE(sym_try_statement, 5), REDUCE(sym_try_statement, 6),
    [1103] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_with_statement_repeat1, 2), REDUCE(aux_sym_with_statement_repeat1, 3), SHIFT(291),
    [1107] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_with_statement_repeat1, 2), REDUCE(aux_sym_with_statement_repeat1, 3), SHIFT(543),
    [1111] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__compound_statement, 1), REDUCE(sym_decorated_definition, 2),
    [1114] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__compound_statement, 1), REDUCE(sym_decorated_definition, 2),
    [1117] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__compound_statement, 1), REDUCE(sym_decorated_definition, 2),
    [1120] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(541),
    [1122] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(539),
    [1124] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(536),
    [1126] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(535),
    [1128] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(534),
    [1130] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_decorated_definition_repeat1, 1), REDUCE(aux_sym_decorated_definition_repeat1, 2),
    [1133] = {.count = 13, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_else_clause, 3), REDUCE(sym_finally_clause, 3), REDUCE(sym_if_statement, 4), REDUCE(sym_elif_clause, 4), REDUCE(sym_while_statement, 4), REDUCE(sym_except_clause, 4), REDUCE(sym_with_statement, 4), REDUCE(sym_class_definition, 4), REDUCE(sym_with_statement, 5), REDUCE(sym_function_definition, 5), REDUCE(sym_for_statement, 6), REDUCE(sym_except_clause, 6), REDUCE(sym_class_definition, 7),
    [1147] = {.count = 13, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_else_clause, 3), REDUCE(sym_finally_clause, 3), REDUCE(sym_if_statement, 4), REDUCE(sym_elif_clause, 4), REDUCE(sym_while_statement, 4), REDUCE(sym_except_clause, 4), REDUCE(sym_with_statement, 4), REDUCE(sym_class_definition, 4), REDUCE(sym_with_statement, 5), REDUCE(sym_function_definition, 5), REDUCE(sym_for_statement, 6), REDUCE(sym_except_clause, 6), REDUCE(sym_class_definition, 7),
    [1161] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_elif_clause, 4), SHIFT(419),
    [1164] = {.count = 4, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_elif_clause, 4), REDUCE(sym_except_clause, 4), REDUCE(sym_except_clause, 6), SHIFT(420),
    [1169] = {.count = 3, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_except_clause, 4), REDUCE(sym_except_clause, 6), SHIFT(425),
    [1173] = {.count = 4, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_else_clause, 3), REDUCE(sym_except_clause, 4), REDUCE(sym_except_clause, 6), SHIFT(427),
    [1178] = {.count = 13, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_else_clause, 3), REDUCE(sym_finally_clause, 3), REDUCE(sym_if_statement, 4), REDUCE(sym_elif_clause, 4), REDUCE(sym_while_statement, 4), REDUCE(sym_except_clause, 4), REDUCE(sym_with_statement, 4), REDUCE(sym_class_definition, 4), REDUCE(sym_with_statement, 5), REDUCE(sym_function_definition, 5), REDUCE(sym_for_statement, 6), REDUCE(sym_except_clause, 6), REDUCE(sym_class_definition, 7),
    [1192] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(504),
    [1194] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(422),
    [1196] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(528),
    [1198] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_return_statement, 2), REDUCE(sym_delete_statement, 2),
    [1201] = {.count = 14, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_with_item, 1), REDUCE(sym_list_splat_argument, 2), REDUCE(aux_sym_print_statement_repeat1, 2), REDUCE(aux_sym_subscript_repeat1, 2), REDUCE(aux_sym_call_repeat2, 2), REDUCE(sym_with_item, 3), REDUCE(sym_default_parameter, 3), REDUCE_FRAGILE(sym_binary_operator, 3), REDUCE(sym_keyword_argument, 3), REDUCE(sym_pair, 3), REDUCE(aux_sym_print_statement_repeat1, 3), REDUCE(aux_sym_subscript_repeat1, 3), REDUCE(aux_sym_call_repeat2, 3), SHIFT(513),
    [1216] = {.count = 7, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_with_item, 1), REDUCE(sym_expression_list, 1), REDUCE(aux_sym_print_statement_repeat1, 2), REDUCE(sym_with_item, 3), REDUCE_FRAGILE(sym_binary_operator, 3), REDUCE(aux_sym_print_statement_repeat1, 3), SHIFT(514),
    [1224] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE_FRAGILE(sym_binary_operator, 3), REDUCE(sym_pair, 3), SHIFT(190),
    [1228] = {.count = 4, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_expression_list, 1), REDUCE(aux_sym_print_statement_repeat1, 2), REDUCE_FRAGILE(sym_binary_operator, 3), REDUCE(aux_sym_print_statement_repeat1, 3),
    [1233] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE_FRAGILE(sym_binary_operator, 3), SHIFT(426),
    [1236] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE_FRAGILE(sym_binary_operator, 3), SHIFT(30),
    [1239] = {.count = 11, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_expression_list, 1), REDUCE(sym_list_splat_argument, 2), REDUCE(sym_dictionary_splat_argument, 2), REDUCE(aux_sym_print_statement_repeat1, 2), REDUCE(aux_sym_call_repeat2, 2), REDUCE(sym_default_parameter, 3), REDUCE_FRAGILE(sym_binary_operator, 3), REDUCE(sym_keyword_argument, 3), REDUCE(aux_sym_print_statement_repeat1, 3), REDUCE(aux_sym_call_repeat2, 3), SHIFT(515),
    [1251] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE_FRAGILE(sym_binary_operator, 3), SHIFT(436),
    [1254] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE_FRAGILE(sym_binary_operator, 3), SHIFT(32),
    [1257] = {.count = 6, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_print_statement_repeat1, 2), REDUCE(aux_sym_subscript_repeat1, 2), REDUCE_FRAGILE(sym_binary_operator, 3), REDUCE(aux_sym_print_statement_repeat1, 3), REDUCE(aux_sym_subscript_repeat1, 3), SHIFT(516),
    [1264] = {.count = 5, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_print_statement_repeat1, 2), REDUCE_FRAGILE(sym_binary_operator, 3), REDUCE(sym_pair, 3), REDUCE(aux_sym_print_statement_repeat1, 3), SHIFT(517),
    [1270] = {.count = 6, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_expression_statement, 1), REDUCE(sym_expression_list, 1), REDUCE(sym_print_statement, 2), REDUCE(aux_sym_print_statement_repeat1, 2), REDUCE_FRAGILE(sym_binary_operator, 3), REDUCE(aux_sym_print_statement_repeat1, 3),
    [1277] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_call_repeat2, 2), REDUCE(aux_sym_call_repeat2, 3), SHIFT(512),
    [1281] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_call_repeat2, 2), REDUCE(aux_sym_call_repeat2, 3), SHIFT(509),
    [1285] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(508),
    [1287] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(509),
    [1289] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(507),
    [1291] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_dictionary_repeat1, 2), REDUCE(aux_sym_dictionary_repeat1, 3), SHIFT(170),
    [1295] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_dictionary_repeat1, 2), REDUCE(aux_sym_dictionary_repeat1, 3), SHIFT(172),
    [1299] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(417),
    [1301] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(497),
    [1303] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(423),
    [1305] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(424),
    [1307] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(428),
    [1309] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(429),
    [1311] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(434),
    [1313] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(484),
    [1315] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(493),
    [1317] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_expression_list, 2), SHIFT(209),
    [1320] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_expression_list, 2), REDUCE(sym_print_statement, 3),
    [1323] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(419),
    [1325] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(420),
    [1327] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(425),
    [1329] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(479),
    [1331] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(429),
    [1333] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(434),
    [1335] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(474),
    [1337] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(475),
    [1339] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_call, 5), REDUCE(sym_call, 6),
    [1342] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(477),
    [1344] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_call, 7), REDUCE(sym_call, 8),
    [1347] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(495),
    [1349] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE_FRAGILE(sym_binary_operator, 3), SHIFT(495),
    [1352] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(500),
    [1354] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(502),
    [1356] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_call, 4), REDUCE(sym_call, 5),
    [1359] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(511),
    [1361] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_call, 6), REDUCE(sym_call, 7),
    [1364] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_call_repeat1, 2), REDUCE(aux_sym_call_repeat1, 3),
    [1367] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_call_repeat1, 2), REDUCE(aux_sym_call_repeat1, 3),
    [1370] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(524),
    [1372] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_arguments, 3), REDUCE(sym_call, 4), REDUCE(sym_call, 5),
    [1376] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_list, 3), REDUCE(sym_subscript, 4), REDUCE(sym_list_comprehension, 7),
    [1380] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_set, 3), REDUCE(sym_dictionary_comprehension, 7),
    [1383] = {.count = 5, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_if_statement, 4), REDUCE(sym_elif_clause, 4), REDUCE(sym_while_statement, 4), REDUCE(sym_except_clause, 4), REDUCE(sym_except_clause, 6),
    [1389] = {.count = 5, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_if_statement, 4), REDUCE(sym_elif_clause, 4), REDUCE(sym_while_statement, 4), REDUCE(sym_except_clause, 4), REDUCE(sym_except_clause, 6),
    [1395] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_except_clause, 4), REDUCE(sym_except_clause, 6),
    [1398] = {.count = 5, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_if_statement, 4), REDUCE(sym_elif_clause, 4), REDUCE(sym_while_statement, 4), REDUCE(sym_except_clause, 4), REDUCE(sym_except_clause, 6),
    [1404] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(520),
    [1406] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE_FRAGILE(sym_binary_operator, 3), SHIFT(520),
    [1409] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_if_statement, 5), REDUCE(sym_while_statement, 5),
    [1412] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_if_statement, 5), REDUCE(sym_while_statement, 5),
    [1415] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_if_statement, 5), REDUCE(sym_while_statement, 5),
    [1418] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_list, 4), REDUCE(sym_subscript, 5),
    [1421] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_print_statement_repeat1, 2), REDUCE(aux_sym_subscript_repeat1, 2),
    [1424] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_print_statement_repeat1, 2), SHIFT(526),
    [1427] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(529),
    [1429] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_if_statement, 5), REDUCE(sym_while_statement, 5), REDUCE(sym_for_statement, 7),
    [1433] = {.count = 3, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_if_statement, 5), REDUCE(sym_while_statement, 5), REDUCE(sym_for_statement, 7),
    [1437] = {.count = 3, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_if_statement, 5), REDUCE(sym_while_statement, 5), REDUCE(sym_for_statement, 7),
    [1441] = {.count = 4, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_parameters, 3), REDUCE(sym_parameters, 4), REDUCE(sym_parameters, 5), REDUCE(sym_parameters, 6),
    [1446] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_parameters, 3), REDUCE(sym_parameters, 4),
    [1449] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(538),
    [1451] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_parameters, 5), REDUCE(sym_parameters, 6),
    [1454] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(540),
    [1456] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_parameters_repeat1, 2), REDUCE(aux_sym_parameters_repeat1, 3),
    [1459] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_parameters_repeat1, 2), REDUCE(aux_sym_parameters_repeat1, 3),
    [1462] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_parameters, 4), REDUCE(sym_parameters, 5),
    [1465] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(548),
    [1467] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__expression, 1), SHIFT(285),
    [1470] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__expression, 1), SHIFT(282),
    [1473] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(552),
    [1475] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(553),
    [1477] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_list, 3), REDUCE(sym_subscript, 4),
    [1480] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_dotted_name_repeat1, 2), REDUCE(aux_sym_dotted_name_repeat1, 3),
    [1483] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(546),
    [1485] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(558),
    [1487] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__expression, 1), REDUCE(sym_list_splat_parameter, 2),
    [1490] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__expression, 1), REDUCE(sym_list_splat_parameter, 2), REDUCE(sym_dictionary_splat_parameter, 3),
    [1494] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_default_parameter, 3), REDUCE(sym_keyword_argument, 3),
    [1497] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(567),
    [1499] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(564),
    [1501] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_expression_list, 1), SHIFT(565),
    [1504] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_call_repeat1, 2), SHIFT(33),
    [1507] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_call_repeat1, 2), SHIFT(35),
    [1510] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_call_repeat1, 2), SHIFT(36),
    [1513] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_arguments, 3), REDUCE(sym_call, 4),
    [1516] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(543),
    [1518] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_with_item, 3), SHIFT(526),
    [1521] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(574),
    [1523] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(575),
    [1525] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(526),
    [1527] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(425),
    [1529] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(427),
    [1531] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(581),
    [1533] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(585),
    [1535] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE_FRAGILE(sym_binary_operator, 3), SHIFT(39),
    [1538] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE_FRAGILE(sym_binary_operator, 3), SHIFT(585),
    [1541] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE_FRAGILE(sym_binary_operator, 3), SHIFT(41),
    [1544] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(589),
    [1546] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(592),
    [1548] = {.count = 4, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_parameters, 4), REDUCE(sym_parameters, 5), REDUCE(sym_call, 5), REDUCE(sym_call, 6),
    [1553] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_subscript_repeat1, 2), REDUCE(aux_sym_subscript_repeat1, 3),
    [1556] = {.count = 4, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_list, 4), REDUCE(sym_subscript, 5), REDUCE(sym_list, 5), REDUCE(sym_subscript, 6),
    [1561] = {.count = 4, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_dictionary, 4), REDUCE(sym_set, 4), REDUCE(sym_dictionary, 5), REDUCE(sym_set, 5),
    [1566] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_with_statement_repeat1, 2), REDUCE(aux_sym_with_statement_repeat1, 3),
    [1569] = {.count = 7, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_with_item, 1), REDUCE(aux_sym_print_statement_repeat1, 2), REDUCE(aux_sym_subscript_repeat1, 2), REDUCE(aux_sym_call_repeat2, 2), REDUCE(aux_sym_print_statement_repeat1, 3), REDUCE(aux_sym_subscript_repeat1, 3), REDUCE(aux_sym_call_repeat2, 3),
    [1577] = {.count = 4, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_with_item, 1), REDUCE(aux_sym_print_statement_repeat1, 2), REDUCE(aux_sym_print_statement_repeat1, 3), SHIFT(606),
    [1582] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_print_statement_repeat1, 2), REDUCE(aux_sym_print_statement_repeat1, 3),
    [1585] = {.count = 4, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_print_statement_repeat1, 2), REDUCE(aux_sym_call_repeat2, 2), REDUCE(aux_sym_print_statement_repeat1, 3), REDUCE(aux_sym_call_repeat2, 3),
    [1590] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(607),
    [1592] = {.count = 4, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_print_statement_repeat1, 2), REDUCE(aux_sym_subscript_repeat1, 2), REDUCE(aux_sym_print_statement_repeat1, 3), REDUCE(aux_sym_subscript_repeat1, 3),
    [1597] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_call_repeat2, 2), REDUCE(aux_sym_call_repeat2, 3),
    [1600] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(605),
    [1602] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_dictionary_repeat1, 2), REDUCE(aux_sym_dictionary_repeat1, 3),
    [1605] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_call, 6), REDUCE(sym_call, 7), REDUCE(sym_call, 8),
    [1609] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE_FRAGILE(sym_binary_operator, 3), SHIFT(607),
    [1612] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(610),
    [1614] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE_FRAGILE(sym_binary_operator, 3), SHIFT(610),
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
