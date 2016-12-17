#include <tree_sitter/parser.h>

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"

#define STATE_COUNT 597
#define SYMBOL_COUNT 96
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
    aux_sym_module_repeat1 = 84,
    aux_sym_print_statement_repeat1 = 85,
    aux_sym_if_statement_repeat1 = 86,
    aux_sym_try_statement_repeat1 = 87,
    aux_sym_with_statement_repeat1 = 88,
    aux_sym_parameters_repeat1 = 89,
    aux_sym_decorated_definition_repeat1 = 90,
    aux_sym_dotted_name_repeat1 = 91,
    aux_sym_subscript_repeat1 = 92,
    aux_sym_call_repeat1 = 93,
    aux_sym_call_repeat2 = 94,
    aux_sym_dictionary_repeat1 = 95,
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
            if (lookahead == ':')
                ADVANCE(15);
            if (lookahead == '[')
                ADVANCE(20);
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
            if (lookahead == ',')
                ADVANCE(9);
            if (lookahead == '[')
                ADVANCE(20);
            if (lookahead == 'f')
                ADVANCE(107);
            if (lookahead == '}')
                ADVANCE(94);
            LEX_ERROR();
        case 141:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(141);
            if (lookahead == '#')
                ADVANCE(2);
            if (lookahead == 'i')
                ADVANCE(110);
            LEX_ERROR();
        case 142:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(142);
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
        case 143:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(143);
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
        case 144:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(144);
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
            if (lookahead == '+')
                ADVANCE(8);
            if (lookahead == '[')
                ADVANCE(20);
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
            if (lookahead == ',')
                ADVANCE(9);
            if (lookahead == '[')
                ADVANCE(20);
            if (lookahead == ']')
                ADVANCE(21);
            if (lookahead == 'f')
                ADVANCE(107);
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
            if (lookahead == '[')
                ADVANCE(20);
            if (lookahead == ']')
                ADVANCE(21);
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
            if (lookahead == ')')
                ADVANCE(5);
            if (lookahead == '+')
                ADVANCE(8);
            if (lookahead == '[')
                ADVANCE(20);
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
            if (lookahead == '+')
                ADVANCE(8);
            if (lookahead == ',')
                ADVANCE(9);
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
            if (lookahead == '.')
                ADVANCE(151);
            LEX_ERROR();
        case 151:
            ACCEPT_TOKEN(anon_sym_DOT);
        case 152:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(152);
            if (lookahead == '#')
                ADVANCE(2);
            if (lookahead == '(')
                ADVANCE(4);
            LEX_ERROR();
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
            if (lookahead == ':')
                ADVANCE(15);
            LEX_ERROR();
        case 154:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(154);
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
                ADVANCE(155);
            if (lookahead == 'd')
                ADVANCE(156);
            if (lookahead == 'p')
                ADVANCE(68);
            if (lookahead == 'r')
                ADVANCE(76);
            if (lookahead == '{')
                ADVANCE(93);
            LEX_ERROR();
        case 155:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'n') ||
                ('p' <= lookahead && lookahead <= 'z'))
                ADVANCE(19);
            if (lookahead == 'o')
                ADVANCE(34);
            ACCEPT_TOKEN(sym_identifier);
        case 156:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'z'))
                ADVANCE(19);
            if (lookahead == 'e')
                ADVANCE(157);
            ACCEPT_TOKEN(sym_identifier);
        case 157:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'k') ||
                ('m' <= lookahead && lookahead <= 'z'))
                ADVANCE(19);
            if (lookahead == 'l')
                ADVANCE(44);
            ACCEPT_TOKEN(sym_identifier);
        case 158:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(158);
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
        case 159:
            if (lookahead == 0)
                ADVANCE(1);
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(159);
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
        case 160:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(160);
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
        case 161:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(161);
            if (lookahead == '#')
                ADVANCE(2);
            if (lookahead == ')')
                ADVANCE(5);
            if (lookahead == '*')
                ADVANCE(162);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(19);
            LEX_ERROR();
        case 162:
            ACCEPT_TOKEN(anon_sym_STAR);
        case 163:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(163);
            if (lookahead == '#')
                ADVANCE(2);
            if (lookahead == '*')
                ADVANCE(162);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(19);
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
                ADVANCE(5);
            if (lookahead == ',')
                ADVANCE(9);
            if (lookahead == '=')
                ADVANCE(17);
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
                ADVANCE(162);
            LEX_ERROR();
        case 166:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(166);
            if (lookahead == '#')
                ADVANCE(2);
            if (lookahead == ',')
                ADVANCE(9);
            if (lookahead == ':')
                ADVANCE(15);
            LEX_ERROR();
        case 167:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(167);
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
            LEX_ERROR();
        case 169:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(169);
            if (lookahead == '#')
                ADVANCE(2);
            if (lookahead == 'e')
                ADVANCE(170);
            if (lookahead == 'f')
                ADVANCE(176);
            LEX_ERROR();
        case 170:
            if (lookahead == 'x')
                ADVANCE(171);
            LEX_ERROR();
        case 171:
            if (lookahead == 'c')
                ADVANCE(172);
            LEX_ERROR();
        case 172:
            if (lookahead == 'e')
                ADVANCE(173);
            LEX_ERROR();
        case 173:
            if (lookahead == 'p')
                ADVANCE(174);
            LEX_ERROR();
        case 174:
            if (lookahead == 't')
                ADVANCE(175);
            LEX_ERROR();
        case 175:
            ACCEPT_TOKEN(anon_sym_except);
        case 176:
            if (lookahead == 'i')
                ADVANCE(177);
            LEX_ERROR();
        case 177:
            if (lookahead == 'n')
                ADVANCE(178);
            LEX_ERROR();
        case 178:
            if (lookahead == 'a')
                ADVANCE(179);
            LEX_ERROR();
        case 179:
            if (lookahead == 'l')
                ADVANCE(180);
            LEX_ERROR();
        case 180:
            if (lookahead == 'l')
                ADVANCE(181);
            LEX_ERROR();
        case 181:
            if (lookahead == 'y')
                ADVANCE(182);
            LEX_ERROR();
        case 182:
            ACCEPT_TOKEN(anon_sym_finally);
        case 183:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(183);
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
                ADVANCE(184);
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
        case 184:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'k') ||
                ('m' <= lookahead && lookahead <= 'w') ||
                (lookahead == 'y') ||
                (lookahead == 'z'))
                ADVANCE(19);
            if (lookahead == 'l')
                ADVANCE(185);
            if (lookahead == 'x')
                ADVANCE(51);
            ACCEPT_TOKEN(sym_identifier);
        case 185:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'r') ||
                ('t' <= lookahead && lookahead <= 'z'))
                ADVANCE(19);
            if (lookahead == 's')
                ADVANCE(49);
            ACCEPT_TOKEN(sym_identifier);
        case 186:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(186);
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
                ADVANCE(188);
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
        case 188:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'k') ||
                ('m' <= lookahead && lookahead <= 'z'))
                ADVANCE(19);
            if (lookahead == 'l')
                ADVANCE(185);
            ACCEPT_TOKEN(sym_identifier);
        case 189:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(189);
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
                ADVANCE(190);
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
        case 190:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'k') ||
                ('m' <= lookahead && lookahead <= 'z'))
                ADVANCE(19);
            if (lookahead == 'l')
                ADVANCE(46);
            ACCEPT_TOKEN(sym_identifier);
        case 191:
            if (lookahead == 0)
                ADVANCE(1);
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(191);
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
                ADVANCE(184);
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
                ADVANCE(188);
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
                ADVANCE(190);
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
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(195);
            if (lookahead == '#')
                ADVANCE(2);
            if (lookahead == ',')
                ADVANCE(9);
            LEX_ERROR();
        case 196:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(196);
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
        case 197:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(197);
            if (lookahead == '#')
                ADVANCE(2);
            if (lookahead == '*')
                ADVANCE(162);
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
        case 198:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(198);
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
                ADVANCE(151);
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
        case 199:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(199);
            if (lookahead == '#')
                ADVANCE(2);
            if (lookahead == ')')
                ADVANCE(5);
            if (lookahead == ':')
                ADVANCE(15);
            if (lookahead == 'i')
                ADVANCE(110);
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
            if (lookahead == ',')
                ADVANCE(9);
            if (lookahead == ':')
                ADVANCE(15);
            if (lookahead == ']')
                ADVANCE(21);
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
                ADVANCE(5);
            if (lookahead == '*')
                ADVANCE(162);
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
            if (lookahead == '[')
                ADVANCE(20);
            if (lookahead == ']')
                ADVANCE(21);
            if (lookahead == 'a')
                ADVANCE(105);
            if (lookahead == 'i')
                ADVANCE(110);
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
    [104] = {.lex_state = 139},
    [105] = {.lex_state = 98},
    [106] = {.lex_state = 140},
    [107] = {.lex_state = 141},
    [108] = {.lex_state = 142},
    [109] = {.lex_state = 98},
    [110] = {.lex_state = 143},
    [111] = {.lex_state = 98},
    [112] = {.lex_state = 144},
    [113] = {.lex_state = 144},
    [114] = {.lex_state = 98},
    [115] = {.lex_state = 145},
    [116] = {.lex_state = 104},
    [117] = {.lex_state = 139},
    [118] = {.lex_state = 104},
    [119] = {.lex_state = 146},
    [120] = {.lex_state = 102},
    [121] = {.lex_state = 98},
    [122] = {.lex_state = 104},
    [123] = {.lex_state = 127},
    [124] = {.lex_state = 102},
    [125] = {.lex_state = 104},
    [126] = {.lex_state = 104},
    [127] = {.lex_state = 141},
    [128] = {.lex_state = 98},
    [129] = {.lex_state = 147},
    [130] = {.lex_state = 104},
    [131] = {.lex_state = 148},
    [132] = {.lex_state = 131},
    [133] = {.lex_state = 149, .external_tokens = 2},
    [134] = {.lex_state = 131},
    [135] = {.lex_state = 132},
    [136] = {.lex_state = 132},
    [137] = {.lex_state = 133},
    [138] = {.lex_state = 124},
    [139] = {.lex_state = 131},
    [140] = {.lex_state = 132},
    [141] = {.lex_state = 132},
    [142] = {.lex_state = 133},
    [143] = {.lex_state = 104, .external_tokens = 2},
    [144] = {.lex_state = 134},
    [145] = {.lex_state = 132},
    [146] = {.lex_state = 134},
    [147] = {.lex_state = 104, .external_tokens = 2},
    [148] = {.lex_state = 133},
    [149] = {.lex_state = 104, .external_tokens = 2},
    [150] = {.lex_state = 133},
    [151] = {.lex_state = 104, .external_tokens = 2},
    [152] = {.lex_state = 136},
    [153] = {.lex_state = 104, .external_tokens = 2},
    [154] = {.lex_state = 134},
    [155] = {.lex_state = 132},
    [156] = {.lex_state = 134},
    [157] = {.lex_state = 133},
    [158] = {.lex_state = 136},
    [159] = {.lex_state = 113, .external_tokens = 2},
    [160] = {.lex_state = 104, .external_tokens = 2},
    [161] = {.lex_state = 138},
    [162] = {.lex_state = 103},
    [163] = {.lex_state = 98},
    [164] = {.lex_state = 104, .external_tokens = 2},
    [165] = {.lex_state = 139},
    [166] = {.lex_state = 103},
    [167] = {.lex_state = 104, .external_tokens = 2},
    [168] = {.lex_state = 104, .external_tokens = 2},
    [169] = {.lex_state = 141},
    [170] = {.lex_state = 98},
    [171] = {.lex_state = 145},
    [172] = {.lex_state = 104, .external_tokens = 2},
    [173] = {.lex_state = 104, .external_tokens = 2},
    [174] = {.lex_state = 146},
    [175] = {.lex_state = 102},
    [176] = {.lex_state = 98},
    [177] = {.lex_state = 104, .external_tokens = 2},
    [178] = {.lex_state = 127},
    [179] = {.lex_state = 102},
    [180] = {.lex_state = 104, .external_tokens = 2},
    [181] = {.lex_state = 104, .external_tokens = 2},
    [182] = {.lex_state = 141},
    [183] = {.lex_state = 98},
    [184] = {.lex_state = 147},
    [185] = {.lex_state = 104, .external_tokens = 2},
    [186] = {.lex_state = 150, .external_tokens = 2},
    [187] = {.lex_state = 152, .external_tokens = 2},
    [188] = {.lex_state = 98},
    [189] = {.lex_state = 114},
    [190] = {.lex_state = 99, .external_tokens = 2},
    [191] = {.lex_state = 114},
    [192] = {.lex_state = 131},
    [193] = {.lex_state = 99, .external_tokens = 2},
    [194] = {.lex_state = 132},
    [195] = {.lex_state = 99, .external_tokens = 2},
    [196] = {.lex_state = 101},
    [197] = {.lex_state = 150, .external_tokens = 2},
    [198] = {.lex_state = 101},
    [199] = {.lex_state = 150, .external_tokens = 2},
    [200] = {.lex_state = 150, .external_tokens = 2},
    [201] = {.lex_state = 153},
    [202] = {.lex_state = 154, .external_tokens = 3},
    [203] = {.lex_state = 98},
    [204] = {.lex_state = 133},
    [205] = {.lex_state = 100},
    [206] = {.lex_state = 154, .external_tokens = 3},
    [207] = {.lex_state = 158, .external_tokens = 4},
    [208] = {.lex_state = 99, .external_tokens = 2},
    [209] = {.lex_state = 113, .external_tokens = 2},
    [210] = {.lex_state = 159, .external_tokens = 2},
    [211] = {.lex_state = 98},
    [212] = {.lex_state = 98},
    [213] = {.lex_state = 98},
    [214] = {.lex_state = 100},
    [215] = {.lex_state = 98},
    [216] = {.lex_state = 101},
    [217] = {.lex_state = 101},
    [218] = {.lex_state = 158, .external_tokens = 4},
    [219] = {.lex_state = 99, .external_tokens = 2},
    [220] = {.lex_state = 158, .external_tokens = 4},
    [221] = {.lex_state = 158, .external_tokens = 4},
    [222] = {.lex_state = 158, .external_tokens = 4},
    [223] = {.lex_state = 114},
    [224] = {.lex_state = 158, .external_tokens = 4},
    [225] = {.lex_state = 159, .external_tokens = 2},
    [226] = {.lex_state = 158, .external_tokens = 4},
    [227] = {.lex_state = 158, .external_tokens = 4},
    [228] = {.lex_state = 153},
    [229] = {.lex_state = 154, .external_tokens = 3},
    [230] = {.lex_state = 98},
    [231] = {.lex_state = 133},
    [232] = {.lex_state = 100},
    [233] = {.lex_state = 154, .external_tokens = 3},
    [234] = {.lex_state = 158, .external_tokens = 4},
    [235] = {.lex_state = 99, .external_tokens = 2},
    [236] = {.lex_state = 158, .external_tokens = 4},
    [237] = {.lex_state = 160, .external_tokens = 4},
    [238] = {.lex_state = 158, .external_tokens = 4},
    [239] = {.lex_state = 160, .external_tokens = 4},
    [240] = {.lex_state = 158, .external_tokens = 4},
    [241] = {.lex_state = 152},
    [242] = {.lex_state = 161},
    [243] = {.lex_state = 100},
    [244] = {.lex_state = 154, .external_tokens = 3},
    [245] = {.lex_state = 158, .external_tokens = 4},
    [246] = {.lex_state = 100},
    [247] = {.lex_state = 163},
    [248] = {.lex_state = 164},
    [249] = {.lex_state = 132},
    [250] = {.lex_state = 132},
    [251] = {.lex_state = 133},
    [252] = {.lex_state = 163},
    [253] = {.lex_state = 164},
    [254] = {.lex_state = 132},
    [255] = {.lex_state = 132},
    [256] = {.lex_state = 133},
    [257] = {.lex_state = 100},
    [258] = {.lex_state = 165},
    [259] = {.lex_state = 165},
    [260] = {.lex_state = 133},
    [261] = {.lex_state = 100},
    [262] = {.lex_state = 101},
    [263] = {.lex_state = 133},
    [264] = {.lex_state = 161},
    [265] = {.lex_state = 100},
    [266] = {.lex_state = 98},
    [267] = {.lex_state = 131},
    [268] = {.lex_state = 100},
    [269] = {.lex_state = 165},
    [270] = {.lex_state = 133},
    [271] = {.lex_state = 161},
    [272] = {.lex_state = 132},
    [273] = {.lex_state = 166},
    [274] = {.lex_state = 167},
    [275] = {.lex_state = 98},
    [276] = {.lex_state = 168},
    [277] = {.lex_state = 98},
    [278] = {.lex_state = 154, .external_tokens = 3},
    [279] = {.lex_state = 166},
    [280] = {.lex_state = 98},
    [281] = {.lex_state = 154, .external_tokens = 3},
    [282] = {.lex_state = 158, .external_tokens = 4},
    [283] = {.lex_state = 166},
    [284] = {.lex_state = 158, .external_tokens = 4},
    [285] = {.lex_state = 166},
    [286] = {.lex_state = 154, .external_tokens = 3},
    [287] = {.lex_state = 158, .external_tokens = 4},
    [288] = {.lex_state = 99, .external_tokens = 2},
    [289] = {.lex_state = 169},
    [290] = {.lex_state = 98},
    [291] = {.lex_state = 100},
    [292] = {.lex_state = 183, .external_tokens = 4},
    [293] = {.lex_state = 158, .external_tokens = 4},
    [294] = {.lex_state = 183, .external_tokens = 4},
    [295] = {.lex_state = 100},
    [296] = {.lex_state = 186, .external_tokens = 4},
    [297] = {.lex_state = 183, .external_tokens = 4},
    [298] = {.lex_state = 158, .external_tokens = 4},
    [299] = {.lex_state = 158, .external_tokens = 4},
    [300] = {.lex_state = 154, .external_tokens = 3},
    [301] = {.lex_state = 186, .external_tokens = 4},
    [302] = {.lex_state = 154, .external_tokens = 3},
    [303] = {.lex_state = 158, .external_tokens = 4},
    [304] = {.lex_state = 167},
    [305] = {.lex_state = 98},
    [306] = {.lex_state = 154, .external_tokens = 3},
    [307] = {.lex_state = 137},
    [308] = {.lex_state = 154, .external_tokens = 3},
    [309] = {.lex_state = 183, .external_tokens = 4},
    [310] = {.lex_state = 183, .external_tokens = 4},
    [311] = {.lex_state = 169},
    [312] = {.lex_state = 158, .external_tokens = 4},
    [313] = {.lex_state = 169},
    [314] = {.lex_state = 137},
    [315] = {.lex_state = 154, .external_tokens = 3},
    [316] = {.lex_state = 187, .external_tokens = 4},
    [317] = {.lex_state = 158, .external_tokens = 4},
    [318] = {.lex_state = 141},
    [319] = {.lex_state = 98},
    [320] = {.lex_state = 100},
    [321] = {.lex_state = 154, .external_tokens = 3},
    [322] = {.lex_state = 187, .external_tokens = 4},
    [323] = {.lex_state = 158, .external_tokens = 4},
    [324] = {.lex_state = 137},
    [325] = {.lex_state = 154, .external_tokens = 3},
    [326] = {.lex_state = 189, .external_tokens = 4},
    [327] = {.lex_state = 98},
    [328] = {.lex_state = 189, .external_tokens = 4},
    [329] = {.lex_state = 158, .external_tokens = 4},
    [330] = {.lex_state = 189, .external_tokens = 4},
    [331] = {.lex_state = 189, .external_tokens = 4},
    [332] = {.lex_state = 158, .external_tokens = 4},
    [333] = {.lex_state = 137},
    [334] = {.lex_state = 154, .external_tokens = 3},
    [335] = {.lex_state = 189, .external_tokens = 4},
    [336] = {.lex_state = 113, .external_tokens = 2},
    [337] = {.lex_state = 152},
    [338] = {.lex_state = 100},
    [339] = {.lex_state = 154, .external_tokens = 3},
    [340] = {.lex_state = 113, .external_tokens = 2},
    [341] = {.lex_state = 166},
    [342] = {.lex_state = 154, .external_tokens = 3},
    [343] = {.lex_state = 166},
    [344] = {.lex_state = 154, .external_tokens = 3},
    [345] = {.lex_state = 113, .external_tokens = 2},
    [346] = {.lex_state = 113, .external_tokens = 2},
    [347] = {.lex_state = 154, .external_tokens = 3},
    [348] = {.lex_state = 169},
    [349] = {.lex_state = 98},
    [350] = {.lex_state = 100},
    [351] = {.lex_state = 191, .external_tokens = 2},
    [352] = {.lex_state = 113, .external_tokens = 2},
    [353] = {.lex_state = 191, .external_tokens = 2},
    [354] = {.lex_state = 100},
    [355] = {.lex_state = 192, .external_tokens = 2},
    [356] = {.lex_state = 191, .external_tokens = 2},
    [357] = {.lex_state = 113, .external_tokens = 2},
    [358] = {.lex_state = 113, .external_tokens = 2},
    [359] = {.lex_state = 154, .external_tokens = 3},
    [360] = {.lex_state = 192, .external_tokens = 2},
    [361] = {.lex_state = 154, .external_tokens = 3},
    [362] = {.lex_state = 113, .external_tokens = 2},
    [363] = {.lex_state = 167},
    [364] = {.lex_state = 98},
    [365] = {.lex_state = 154, .external_tokens = 3},
    [366] = {.lex_state = 137},
    [367] = {.lex_state = 154, .external_tokens = 3},
    [368] = {.lex_state = 191, .external_tokens = 2},
    [369] = {.lex_state = 191, .external_tokens = 2},
    [370] = {.lex_state = 137},
    [371] = {.lex_state = 154, .external_tokens = 3},
    [372] = {.lex_state = 193, .external_tokens = 2},
    [373] = {.lex_state = 113, .external_tokens = 2},
    [374] = {.lex_state = 141},
    [375] = {.lex_state = 98},
    [376] = {.lex_state = 100},
    [377] = {.lex_state = 154, .external_tokens = 3},
    [378] = {.lex_state = 193, .external_tokens = 2},
    [379] = {.lex_state = 113, .external_tokens = 2},
    [380] = {.lex_state = 137},
    [381] = {.lex_state = 154, .external_tokens = 3},
    [382] = {.lex_state = 194, .external_tokens = 2},
    [383] = {.lex_state = 98},
    [384] = {.lex_state = 194, .external_tokens = 2},
    [385] = {.lex_state = 113, .external_tokens = 2},
    [386] = {.lex_state = 194, .external_tokens = 2},
    [387] = {.lex_state = 194, .external_tokens = 2},
    [388] = {.lex_state = 113, .external_tokens = 2},
    [389] = {.lex_state = 137},
    [390] = {.lex_state = 154, .external_tokens = 3},
    [391] = {.lex_state = 194, .external_tokens = 2},
    [392] = {.lex_state = 99, .external_tokens = 2},
    [393] = {.lex_state = 149, .external_tokens = 2},
    [394] = {.lex_state = 98},
    [395] = {.lex_state = 195, .external_tokens = 2},
    [396] = {.lex_state = 98},
    [397] = {.lex_state = 149, .external_tokens = 2},
    [398] = {.lex_state = 149, .external_tokens = 2},
    [399] = {.lex_state = 99, .external_tokens = 2},
    [400] = {.lex_state = 149, .external_tokens = 2},
    [401] = {.lex_state = 195, .external_tokens = 2},
    [402] = {.lex_state = 196},
    [403] = {.lex_state = 98},
    [404] = {.lex_state = 154, .external_tokens = 3},
    [405] = {.lex_state = 98},
    [406] = {.lex_state = 100},
    [407] = {.lex_state = 98},
    [408] = {.lex_state = 98},
    [409] = {.lex_state = 98},
    [410] = {.lex_state = 100},
    [411] = {.lex_state = 98},
    [412] = {.lex_state = 98},
    [413] = {.lex_state = 100},
    [414] = {.lex_state = 98},
    [415] = {.lex_state = 101},
    [416] = {.lex_state = 136},
    [417] = {.lex_state = 104, .external_tokens = 2},
    [418] = {.lex_state = 98},
    [419] = {.lex_state = 197},
    [420] = {.lex_state = 101},
    [421] = {.lex_state = 101},
    [422] = {.lex_state = 98},
    [423] = {.lex_state = 129},
    [424] = {.lex_state = 127},
    [425] = {.lex_state = 104, .external_tokens = 2},
    [426] = {.lex_state = 104, .external_tokens = 2},
    [427] = {.lex_state = 198, .external_tokens = 2},
    [428] = {.lex_state = 159, .external_tokens = 5},
    [429] = {.lex_state = 158, .external_tokens = 4},
    [430] = {.lex_state = 159, .external_tokens = 5},
    [431] = {.lex_state = 113, .external_tokens = 5},
    [432] = {.lex_state = 99, .external_tokens = 2},
    [433] = {.lex_state = 113, .external_tokens = 5},
    [434] = {.lex_state = 113, .external_tokens = 5},
    [435] = {.lex_state = 194, .external_tokens = 5},
    [436] = {.lex_state = 192, .external_tokens = 5},
    [437] = {.lex_state = 191, .external_tokens = 5},
    [438] = {.lex_state = 113, .external_tokens = 5},
    [439] = {.lex_state = 166},
    [440] = {.lex_state = 113, .external_tokens = 5},
    [441] = {.lex_state = 100},
    [442] = {.lex_state = 132},
    [443] = {.lex_state = 132},
    [444] = {.lex_state = 133},
    [445] = {.lex_state = 114},
    [446] = {.lex_state = 159, .external_tokens = 5},
    [447] = {.lex_state = 199, .external_tokens = 2},
    [448] = {.lex_state = 104, .external_tokens = 2},
    [449] = {.lex_state = 132},
    [450] = {.lex_state = 132},
    [451] = {.lex_state = 133},
    [452] = {.lex_state = 138},
    [453] = {.lex_state = 113, .external_tokens = 5},
    [454] = {.lex_state = 200, .external_tokens = 2},
    [455] = {.lex_state = 194, .external_tokens = 5},
    [456] = {.lex_state = 191, .external_tokens = 5},
    [457] = {.lex_state = 166},
    [458] = {.lex_state = 114},
    [459] = {.lex_state = 132},
    [460] = {.lex_state = 134},
    [461] = {.lex_state = 104, .external_tokens = 2},
    [462] = {.lex_state = 133},
    [463] = {.lex_state = 104, .external_tokens = 2},
    [464] = {.lex_state = 113, .external_tokens = 5},
    [465] = {.lex_state = 154, .external_tokens = 3},
    [466] = {.lex_state = 99, .external_tokens = 2},
    [467] = {.lex_state = 113, .external_tokens = 5},
    [468] = {.lex_state = 159, .external_tokens = 5},
    [469] = {.lex_state = 158, .external_tokens = 4},
    [470] = {.lex_state = 159, .external_tokens = 5},
    [471] = {.lex_state = 192, .external_tokens = 5},
    [472] = {.lex_state = 191, .external_tokens = 5},
    [473] = {.lex_state = 113, .external_tokens = 5},
    [474] = {.lex_state = 113, .external_tokens = 5},
    [475] = {.lex_state = 194, .external_tokens = 5},
    [476] = {.lex_state = 113, .external_tokens = 5},
    [477] = {.lex_state = 154, .external_tokens = 3},
    [478] = {.lex_state = 192, .external_tokens = 5},
    [479] = {.lex_state = 102},
    [480] = {.lex_state = 144, .external_tokens = 2},
    [481] = {.lex_state = 98},
    [482] = {.lex_state = 144, .external_tokens = 2},
    [483] = {.lex_state = 98},
    [484] = {.lex_state = 113, .external_tokens = 5},
    [485] = {.lex_state = 99, .external_tokens = 2},
    [486] = {.lex_state = 113, .external_tokens = 5},
    [487] = {.lex_state = 141},
    [488] = {.lex_state = 98},
    [489] = {.lex_state = 100},
    [490] = {.lex_state = 154, .external_tokens = 3},
    [491] = {.lex_state = 193, .external_tokens = 5},
    [492] = {.lex_state = 113, .external_tokens = 5},
    [493] = {.lex_state = 104, .external_tokens = 2},
    [494] = {.lex_state = 134},
    [495] = {.lex_state = 104, .external_tokens = 2},
    [496] = {.lex_state = 133},
    [497] = {.lex_state = 104, .external_tokens = 2},
    [498] = {.lex_state = 136},
    [499] = {.lex_state = 201},
    [500] = {.lex_state = 154, .external_tokens = 3},
    [501] = {.lex_state = 104, .external_tokens = 2},
    [502] = {.lex_state = 104, .external_tokens = 2},
    [503] = {.lex_state = 159, .external_tokens = 5},
    [504] = {.lex_state = 140, .external_tokens = 2},
    [505] = {.lex_state = 98},
    [506] = {.lex_state = 140, .external_tokens = 2},
    [507] = {.lex_state = 194, .external_tokens = 5},
    [508] = {.lex_state = 113, .external_tokens = 5},
    [509] = {.lex_state = 104, .external_tokens = 2},
    [510] = {.lex_state = 144, .external_tokens = 2},
    [511] = {.lex_state = 154, .external_tokens = 3},
    [512] = {.lex_state = 191, .external_tokens = 5},
    [513] = {.lex_state = 100},
    [514] = {.lex_state = 154, .external_tokens = 3},
    [515] = {.lex_state = 113, .external_tokens = 5},
    [516] = {.lex_state = 113, .external_tokens = 5},
    [517] = {.lex_state = 191, .external_tokens = 5},
    [518] = {.lex_state = 113, .external_tokens = 5},
    [519] = {.lex_state = 100},
    [520] = {.lex_state = 165},
    [521] = {.lex_state = 100},
    [522] = {.lex_state = 133},
    [523] = {.lex_state = 100},
    [524] = {.lex_state = 161},
    [525] = {.lex_state = 100},
    [526] = {.lex_state = 154, .external_tokens = 3},
    [527] = {.lex_state = 113, .external_tokens = 5},
    [528] = {.lex_state = 154, .external_tokens = 3},
    [529] = {.lex_state = 113, .external_tokens = 5},
    [530] = {.lex_state = 159, .external_tokens = 5},
    [531] = {.lex_state = 154, .external_tokens = 3},
    [532] = {.lex_state = 202},
    [533] = {.lex_state = 130},
    [534] = {.lex_state = 133},
    [535] = {.lex_state = 113, .external_tokens = 5},
    [536] = {.lex_state = 146},
    [537] = {.lex_state = 129},
    [538] = {.lex_state = 104, .external_tokens = 2},
    [539] = {.lex_state = 128},
    [540] = {.lex_state = 104, .external_tokens = 2},
    [541] = {.lex_state = 150, .external_tokens = 2},
    [542] = {.lex_state = 153},
    [543] = {.lex_state = 98},
    [544] = {.lex_state = 131},
    [545] = {.lex_state = 131},
    [546] = {.lex_state = 197},
    [547] = {.lex_state = 130},
    [548] = {.lex_state = 131},
    [549] = {.lex_state = 136},
    [550] = {.lex_state = 104, .external_tokens = 2},
    [551] = {.lex_state = 132},
    [552] = {.lex_state = 131},
    [553] = {.lex_state = 152},
    [554] = {.lex_state = 166},
    [555] = {.lex_state = 154, .external_tokens = 3},
    [556] = {.lex_state = 113, .external_tokens = 5},
    [557] = {.lex_state = 168},
    [558] = {.lex_state = 167},
    [559] = {.lex_state = 98},
    [560] = {.lex_state = 154, .external_tokens = 3},
    [561] = {.lex_state = 137},
    [562] = {.lex_state = 191, .external_tokens = 5},
    [563] = {.lex_state = 154, .external_tokens = 3},
    [564] = {.lex_state = 169},
    [565] = {.lex_state = 137},
    [566] = {.lex_state = 154, .external_tokens = 3},
    [567] = {.lex_state = 193, .external_tokens = 5},
    [568] = {.lex_state = 113, .external_tokens = 5},
    [569] = {.lex_state = 203},
    [570] = {.lex_state = 98},
    [571] = {.lex_state = 203},
    [572] = {.lex_state = 141},
    [573] = {.lex_state = 137},
    [574] = {.lex_state = 154, .external_tokens = 3},
    [575] = {.lex_state = 194, .external_tokens = 5},
    [576] = {.lex_state = 137},
    [577] = {.lex_state = 154, .external_tokens = 3},
    [578] = {.lex_state = 194, .external_tokens = 5},
    [579] = {.lex_state = 113, .external_tokens = 5},
    [580] = {.lex_state = 104, .external_tokens = 2},
    [581] = {.lex_state = 127},
    [582] = {.lex_state = 104, .external_tokens = 2},
    [583] = {.lex_state = 104, .external_tokens = 2},
    [584] = {.lex_state = 204, .external_tokens = 2},
    [585] = {.lex_state = 166},
    [586] = {.lex_state = 205, .external_tokens = 2},
    [587] = {.lex_state = 132},
    [588] = {.lex_state = 133},
    [589] = {.lex_state = 139},
    [590] = {.lex_state = 104, .external_tokens = 2},
    [591] = {.lex_state = 154, .external_tokens = 3},
    [592] = {.lex_state = 98},
    [593] = {.lex_state = 205, .external_tokens = 2},
    [594] = {.lex_state = 206, .external_tokens = 2},
    [595] = {.lex_state = 98},
    [596] = {.lex_state = 206, .external_tokens = 2},
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
        [sym__statement] = STATE(431),
        [sym__simple_statement] = STATE(432),
        [sym_print_statement] = STATE(5),
        [sym_expression_statement] = STATE(5),
        [sym_return_statement] = STATE(5),
        [sym_delete_statement] = STATE(5),
        [sym__compound_statement] = STATE(433),
        [sym_if_statement] = STATE(434),
        [sym_elif_clause] = STATE(435),
        [sym_else_clause] = STATE(436),
        [sym_for_statement] = STATE(434),
        [sym_while_statement] = STATE(434),
        [sym_try_statement] = STATE(434),
        [sym_except_clause] = STATE(437),
        [sym_finally_clause] = STATE(438),
        [sym_with_statement] = STATE(434),
        [sym_with_item] = STATE(439),
        [sym_function_definition] = STATE(440),
        [sym_parameters] = STATE(441),
        [sym_default_parameter] = STATE(442),
        [sym_list_splat_parameter] = STATE(443),
        [sym_dictionary_splat_parameter] = STATE(444),
        [sym_class_definition] = STATE(440),
        [sym_decorated_definition] = STATE(434),
        [sym_decorator] = STATE(445),
        [sym__suite] = STATE(446),
        [sym_arguments] = STATE(190),
        [sym_expression_list] = STATE(447),
        [sym_dotted_name] = STATE(187),
        [sym__expression] = STATE(448),
        [sym_binary_operator] = STATE(16),
        [sym_subscript] = STATE(16),
        [sym_call] = STATE(16),
        [sym_keyword_argument] = STATE(449),
        [sym_list_splat_argument] = STATE(450),
        [sym_dictionary_splat_argument] = STATE(451),
        [sym_list] = STATE(16),
        [sym_list_comprehension] = STATE(16),
        [sym_dictionary] = STATE(16),
        [sym_dictionary_comprehension] = STATE(16),
        [sym_pair] = STATE(452),
        [aux_sym_module_repeat1] = STATE(453),
        [aux_sym_print_statement_repeat1] = STATE(454),
        [aux_sym_if_statement_repeat1] = STATE(455),
        [aux_sym_try_statement_repeat1] = STATE(456),
        [aux_sym_with_statement_repeat1] = STATE(457),
        [aux_sym_parameters_repeat1] = STATE(252),
        [aux_sym_decorated_definition_repeat1] = STATE(458),
        [aux_sym_dotted_name_repeat1] = STATE(197),
        [aux_sym_subscript_repeat1] = STATE(43),
        [aux_sym_call_repeat1] = STATE(138),
        [aux_sym_call_repeat2] = STATE(459),
        [aux_sym_dictionary_repeat1] = STATE(165),
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
        [sym__expression] = STATE(400),
        [sym_binary_operator] = STATE(16),
        [sym_subscript] = STATE(16),
        [sym_call] = STATE(16),
        [sym_list] = STATE(16),
        [sym_list_comprehension] = STATE(16),
        [sym_dictionary] = STATE(16),
        [sym_dictionary_comprehension] = STATE(16),
        [anon_sym_LBRACK] = ACTIONS(107),
        [anon_sym_LBRACE] = ACTIONS(109),
        [sym_number] = ACTIONS(111),
        [sym_identifier] = ACTIONS(111),
        [sym_comment] = ACTIONS(73),
    },
    [3] = {
        [sym_expression_list] = STATE(399),
        [sym__expression] = STATE(393),
        [sym_binary_operator] = STATE(16),
        [sym_subscript] = STATE(16),
        [sym_call] = STATE(16),
        [sym_list] = STATE(16),
        [sym_list_comprehension] = STATE(16),
        [sym_dictionary] = STATE(16),
        [sym_dictionary_comprehension] = STATE(16),
        [anon_sym_LBRACK] = ACTIONS(107),
        [anon_sym_LBRACE] = ACTIONS(109),
        [sym_number] = ACTIONS(111),
        [sym_identifier] = ACTIONS(111),
        [sym_comment] = ACTIONS(73),
    },
    [4] = {
        [sym_expression_list] = STATE(392),
        [sym__expression] = STATE(393),
        [sym_binary_operator] = STATE(16),
        [sym_subscript] = STATE(16),
        [sym_call] = STATE(16),
        [sym_list] = STATE(16),
        [sym_list_comprehension] = STATE(16),
        [sym_dictionary] = STATE(16),
        [sym_dictionary_comprehension] = STATE(16),
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
        [sym__expression] = STATE(380),
        [sym_binary_operator] = STATE(36),
        [sym_subscript] = STATE(36),
        [sym_call] = STATE(36),
        [sym_list] = STATE(36),
        [sym_list_comprehension] = STATE(36),
        [sym_dictionary] = STATE(36),
        [sym_dictionary_comprehension] = STATE(36),
        [anon_sym_LBRACK] = ACTIONS(117),
        [anon_sym_LBRACE] = ACTIONS(119),
        [sym_number] = ACTIONS(121),
        [sym_identifier] = ACTIONS(121),
        [sym_comment] = ACTIONS(73),
    },
    [7] = {
        [sym_expression_list] = STATE(374),
        [sym__expression] = STATE(108),
        [sym_binary_operator] = STATE(36),
        [sym_subscript] = STATE(36),
        [sym_call] = STATE(36),
        [sym_list] = STATE(36),
        [sym_list_comprehension] = STATE(36),
        [sym_dictionary] = STATE(36),
        [sym_dictionary_comprehension] = STATE(36),
        [anon_sym_LBRACK] = ACTIONS(117),
        [anon_sym_LBRACE] = ACTIONS(119),
        [sym_number] = ACTIONS(121),
        [sym_identifier] = ACTIONS(121),
        [sym_comment] = ACTIONS(73),
    },
    [8] = {
        [sym__expression] = STATE(370),
        [sym_binary_operator] = STATE(36),
        [sym_subscript] = STATE(36),
        [sym_call] = STATE(36),
        [sym_list] = STATE(36),
        [sym_list_comprehension] = STATE(36),
        [sym_dictionary] = STATE(36),
        [sym_dictionary_comprehension] = STATE(36),
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
        [sym_with_item] = STATE(341),
        [sym__expression] = STATE(274),
        [sym_binary_operator] = STATE(36),
        [sym_subscript] = STATE(36),
        [sym_call] = STATE(36),
        [sym_list] = STATE(36),
        [sym_list_comprehension] = STATE(36),
        [sym_dictionary] = STATE(36),
        [sym_dictionary_comprehension] = STATE(36),
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
        [sym_dotted_name] = STATE(187),
        [sym_identifier] = ACTIONS(129),
        [sym_comment] = ACTIONS(73),
    },
    [14] = {
        [sym__expression] = STATE(174),
        [sym_binary_operator] = STATE(36),
        [sym_subscript] = STATE(36),
        [sym_call] = STATE(36),
        [sym_list] = STATE(36),
        [sym_list_comprehension] = STATE(36),
        [sym_dictionary] = STATE(36),
        [sym_dictionary_comprehension] = STATE(36),
        [anon_sym_LBRACK] = ACTIONS(117),
        [anon_sym_RBRACK] = ACTIONS(131),
        [anon_sym_LBRACE] = ACTIONS(119),
        [sym_number] = ACTIONS(121),
        [sym_identifier] = ACTIONS(121),
        [sym_comment] = ACTIONS(73),
    },
    [15] = {
        [sym__expression] = STATE(95),
        [sym_binary_operator] = STATE(36),
        [sym_subscript] = STATE(36),
        [sym_call] = STATE(36),
        [sym_list] = STATE(36),
        [sym_list_comprehension] = STATE(36),
        [sym_dictionary] = STATE(36),
        [sym_dictionary_comprehension] = STATE(36),
        [sym_pair] = STATE(161),
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
        [sym__expression] = STATE(134),
        [sym_binary_operator] = STATE(36),
        [sym_subscript] = STATE(36),
        [sym_call] = STATE(36),
        [sym_keyword_argument] = STATE(135),
        [sym_list_splat_argument] = STATE(136),
        [sym_dictionary_splat_argument] = STATE(137),
        [sym_list] = STATE(36),
        [sym_list_comprehension] = STATE(36),
        [sym_dictionary] = STATE(36),
        [sym_dictionary_comprehension] = STATE(36),
        [aux_sym_call_repeat1] = STATE(138),
        [anon_sym_STAR] = ACTIONS(193),
        [anon_sym_LBRACK] = ACTIONS(117),
        [anon_sym_STAR_STAR] = ACTIONS(195),
        [anon_sym_LBRACE] = ACTIONS(119),
        [sym_number] = ACTIONS(121),
        [sym_identifier] = ACTIONS(197),
        [sym_comment] = ACTIONS(73),
    },
    [31] = {
        [sym__expression] = STATE(133),
        [sym_binary_operator] = STATE(16),
        [sym_subscript] = STATE(16),
        [sym_call] = STATE(16),
        [sym_list] = STATE(16),
        [sym_list_comprehension] = STATE(16),
        [sym_dictionary] = STATE(16),
        [sym_dictionary_comprehension] = STATE(16),
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
        [anon_sym_LBRACK] = ACTIONS(117),
        [anon_sym_DOT_DOT_DOT] = ACTIONS(199),
        [anon_sym_LBRACE] = ACTIONS(119),
        [sym_number] = ACTIONS(121),
        [sym_identifier] = ACTIONS(121),
        [sym_comment] = ACTIONS(73),
    },
    [33] = {
        [sym__expression] = STATE(119),
        [sym_binary_operator] = STATE(36),
        [sym_subscript] = STATE(36),
        [sym_call] = STATE(36),
        [sym_list] = STATE(36),
        [sym_list_comprehension] = STATE(36),
        [sym_dictionary] = STATE(36),
        [sym_dictionary_comprehension] = STATE(36),
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
        [sym__expression] = STATE(132),
        [sym_binary_operator] = STATE(36),
        [sym_subscript] = STATE(36),
        [sym_call] = STATE(36),
        [sym_list] = STATE(36),
        [sym_list_comprehension] = STATE(36),
        [sym_dictionary] = STATE(36),
        [sym_dictionary_comprehension] = STATE(36),
        [anon_sym_LBRACK] = ACTIONS(117),
        [anon_sym_LBRACE] = ACTIONS(119),
        [sym_number] = ACTIONS(121),
        [sym_identifier] = ACTIONS(121),
        [sym_comment] = ACTIONS(73),
    },
    [61] = {
        [sym__expression] = STATE(131),
        [sym_binary_operator] = STATE(36),
        [sym_subscript] = STATE(36),
        [sym_call] = STATE(36),
        [sym_list] = STATE(36),
        [sym_list_comprehension] = STATE(36),
        [sym_dictionary] = STATE(36),
        [sym_dictionary_comprehension] = STATE(36),
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
        [anon_sym_COLON] = ACTIONS(299),
        [anon_sym_LPAREN] = ACTIONS(209),
        [anon_sym_PLUS] = ACTIONS(211),
        [anon_sym_LBRACK] = ACTIONS(213),
        [sym_comment] = ACTIONS(73),
    },
    [96] = {
        [aux_sym_dictionary_repeat1] = STATE(100),
        [anon_sym_COMMA] = ACTIONS(301),
        [anon_sym_for] = ACTIONS(303),
        [anon_sym_RBRACE] = ACTIONS(305),
        [sym_comment] = ACTIONS(73),
    },
    [97] = {
        [sym__expression] = STATE(95),
        [sym_binary_operator] = STATE(36),
        [sym_subscript] = STATE(36),
        [sym_call] = STATE(36),
        [sym_list] = STATE(36),
        [sym_list_comprehension] = STATE(36),
        [sym_dictionary] = STATE(36),
        [sym_dictionary_comprehension] = STATE(36),
        [sym_pair] = STATE(117),
        [anon_sym_LBRACK] = ACTIONS(117),
        [anon_sym_LBRACE] = ACTIONS(119),
        [anon_sym_RBRACE] = ACTIONS(307),
        [sym_number] = ACTIONS(121),
        [sym_identifier] = ACTIONS(121),
        [sym_comment] = ACTIONS(73),
    },
    [98] = {
        [sym_expression_list] = STATE(107),
        [sym__expression] = STATE(108),
        [sym_binary_operator] = STATE(36),
        [sym_subscript] = STATE(36),
        [sym_call] = STATE(36),
        [sym_list] = STATE(36),
        [sym_list_comprehension] = STATE(36),
        [sym_dictionary] = STATE(36),
        [sym_dictionary_comprehension] = STATE(36),
        [anon_sym_LBRACK] = ACTIONS(117),
        [anon_sym_LBRACE] = ACTIONS(119),
        [sym_number] = ACTIONS(121),
        [sym_identifier] = ACTIONS(121),
        [sym_comment] = ACTIONS(73),
    },
    [99] = {
        [anon_sym_COMMA] = ACTIONS(309),
        [anon_sym_COLON] = ACTIONS(309),
        [anon_sym_for] = ACTIONS(309),
        [anon_sym_in] = ACTIONS(309),
        [anon_sym_as] = ACTIONS(309),
        [anon_sym_LPAREN] = ACTIONS(309),
        [anon_sym_RPAREN] = ACTIONS(309),
        [anon_sym_PLUS] = ACTIONS(309),
        [anon_sym_LBRACK] = ACTIONS(309),
        [anon_sym_RBRACK] = ACTIONS(309),
        [anon_sym_RBRACE] = ACTIONS(309),
        [sym_comment] = ACTIONS(73),
    },
    [100] = {
        [anon_sym_COMMA] = ACTIONS(311),
        [anon_sym_RBRACE] = ACTIONS(307),
        [sym_comment] = ACTIONS(73),
    },
    [101] = {
        [sym__expression] = STATE(95),
        [sym_binary_operator] = STATE(36),
        [sym_subscript] = STATE(36),
        [sym_call] = STATE(36),
        [sym_list] = STATE(36),
        [sym_list_comprehension] = STATE(36),
        [sym_dictionary] = STATE(36),
        [sym_dictionary_comprehension] = STATE(36),
        [sym_pair] = STATE(104),
        [anon_sym_LBRACK] = ACTIONS(117),
        [anon_sym_LBRACE] = ACTIONS(119),
        [anon_sym_RBRACE] = ACTIONS(313),
        [sym_number] = ACTIONS(121),
        [sym_identifier] = ACTIONS(121),
        [sym_comment] = ACTIONS(73),
    },
    [102] = {
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
    [103] = {
        [anon_sym_COMMA] = ACTIONS(317),
        [anon_sym_COLON] = ACTIONS(317),
        [anon_sym_for] = ACTIONS(317),
        [anon_sym_in] = ACTIONS(317),
        [anon_sym_as] = ACTIONS(317),
        [anon_sym_LPAREN] = ACTIONS(317),
        [anon_sym_RPAREN] = ACTIONS(317),
        [anon_sym_PLUS] = ACTIONS(317),
        [anon_sym_LBRACK] = ACTIONS(317),
        [anon_sym_RBRACK] = ACTIONS(317),
        [anon_sym_RBRACE] = ACTIONS(317),
        [sym_comment] = ACTIONS(73),
    },
    [104] = {
        [anon_sym_COMMA] = ACTIONS(319),
        [anon_sym_RBRACE] = ACTIONS(319),
        [sym_comment] = ACTIONS(73),
    },
    [105] = {
        [sym__expression] = STATE(106),
        [sym_binary_operator] = STATE(36),
        [sym_subscript] = STATE(36),
        [sym_call] = STATE(36),
        [sym_list] = STATE(36),
        [sym_list_comprehension] = STATE(36),
        [sym_dictionary] = STATE(36),
        [sym_dictionary_comprehension] = STATE(36),
        [anon_sym_LBRACK] = ACTIONS(117),
        [anon_sym_LBRACE] = ACTIONS(119),
        [sym_number] = ACTIONS(121),
        [sym_identifier] = ACTIONS(121),
        [sym_comment] = ACTIONS(73),
    },
    [106] = {
        [anon_sym_COMMA] = ACTIONS(321),
        [anon_sym_for] = ACTIONS(321),
        [anon_sym_LPAREN] = ACTIONS(209),
        [anon_sym_PLUS] = ACTIONS(211),
        [anon_sym_LBRACK] = ACTIONS(213),
        [anon_sym_RBRACE] = ACTIONS(321),
        [sym_comment] = ACTIONS(73),
    },
    [107] = {
        [anon_sym_in] = ACTIONS(323),
        [sym_comment] = ACTIONS(73),
    },
    [108] = {
        [aux_sym_print_statement_repeat1] = STATE(110),
        [anon_sym_COMMA] = ACTIONS(325),
        [anon_sym_COLON] = ACTIONS(327),
        [anon_sym_in] = ACTIONS(327),
        [anon_sym_LPAREN] = ACTIONS(209),
        [anon_sym_RPAREN] = ACTIONS(327),
        [anon_sym_PLUS] = ACTIONS(211),
        [anon_sym_LBRACK] = ACTIONS(213),
        [sym_comment] = ACTIONS(73),
    },
    [109] = {
        [sym__expression] = STATE(113),
        [sym_binary_operator] = STATE(36),
        [sym_subscript] = STATE(36),
        [sym_call] = STATE(36),
        [sym_list] = STATE(36),
        [sym_list_comprehension] = STATE(36),
        [sym_dictionary] = STATE(36),
        [sym_dictionary_comprehension] = STATE(36),
        [anon_sym_LBRACK] = ACTIONS(117),
        [anon_sym_LBRACE] = ACTIONS(119),
        [sym_number] = ACTIONS(121),
        [sym_identifier] = ACTIONS(121),
        [sym_comment] = ACTIONS(73),
    },
    [110] = {
        [anon_sym_COMMA] = ACTIONS(329),
        [anon_sym_COLON] = ACTIONS(331),
        [anon_sym_in] = ACTIONS(331),
        [anon_sym_RPAREN] = ACTIONS(331),
        [sym_comment] = ACTIONS(73),
    },
    [111] = {
        [sym__expression] = STATE(112),
        [sym_binary_operator] = STATE(36),
        [sym_subscript] = STATE(36),
        [sym_call] = STATE(36),
        [sym_list] = STATE(36),
        [sym_list_comprehension] = STATE(36),
        [sym_dictionary] = STATE(36),
        [sym_dictionary_comprehension] = STATE(36),
        [anon_sym_LBRACK] = ACTIONS(117),
        [anon_sym_LBRACE] = ACTIONS(119),
        [sym_number] = ACTIONS(121),
        [sym_identifier] = ACTIONS(121),
        [sym_comment] = ACTIONS(73),
    },
    [112] = {
        [anon_sym_COMMA] = ACTIONS(333),
        [anon_sym_COLON] = ACTIONS(333),
        [anon_sym_in] = ACTIONS(333),
        [anon_sym_LPAREN] = ACTIONS(209),
        [anon_sym_RPAREN] = ACTIONS(333),
        [anon_sym_PLUS] = ACTIONS(211),
        [anon_sym_LBRACK] = ACTIONS(213),
        [anon_sym_RBRACK] = ACTIONS(333),
        [sym_comment] = ACTIONS(73),
    },
    [113] = {
        [anon_sym_COMMA] = ACTIONS(335),
        [anon_sym_COLON] = ACTIONS(335),
        [anon_sym_in] = ACTIONS(335),
        [anon_sym_LPAREN] = ACTIONS(209),
        [anon_sym_RPAREN] = ACTIONS(335),
        [anon_sym_PLUS] = ACTIONS(211),
        [anon_sym_LBRACK] = ACTIONS(213),
        [anon_sym_RBRACK] = ACTIONS(335),
        [sym_comment] = ACTIONS(73),
    },
    [114] = {
        [sym__expression] = STATE(115),
        [sym_binary_operator] = STATE(36),
        [sym_subscript] = STATE(36),
        [sym_call] = STATE(36),
        [sym_list] = STATE(36),
        [sym_list_comprehension] = STATE(36),
        [sym_dictionary] = STATE(36),
        [sym_dictionary_comprehension] = STATE(36),
        [anon_sym_LBRACK] = ACTIONS(117),
        [anon_sym_LBRACE] = ACTIONS(119),
        [sym_number] = ACTIONS(121),
        [sym_identifier] = ACTIONS(121),
        [sym_comment] = ACTIONS(73),
    },
    [115] = {
        [anon_sym_LPAREN] = ACTIONS(209),
        [anon_sym_PLUS] = ACTIONS(211),
        [anon_sym_LBRACK] = ACTIONS(213),
        [anon_sym_RBRACE] = ACTIONS(337),
        [sym_comment] = ACTIONS(73),
    },
    [116] = {
        [anon_sym_COMMA] = ACTIONS(339),
        [anon_sym_COLON] = ACTIONS(339),
        [anon_sym_for] = ACTIONS(339),
        [anon_sym_in] = ACTIONS(339),
        [anon_sym_as] = ACTIONS(339),
        [anon_sym_LPAREN] = ACTIONS(339),
        [anon_sym_RPAREN] = ACTIONS(339),
        [anon_sym_PLUS] = ACTIONS(339),
        [anon_sym_LBRACK] = ACTIONS(339),
        [anon_sym_RBRACK] = ACTIONS(339),
        [anon_sym_RBRACE] = ACTIONS(339),
        [sym_comment] = ACTIONS(73),
    },
    [117] = {
        [anon_sym_COMMA] = ACTIONS(341),
        [anon_sym_RBRACE] = ACTIONS(341),
        [sym_comment] = ACTIONS(73),
    },
    [118] = {
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
    [119] = {
        [aux_sym_print_statement_repeat1] = STATE(123),
        [anon_sym_COMMA] = ACTIONS(345),
        [anon_sym_for] = ACTIONS(347),
        [anon_sym_LPAREN] = ACTIONS(209),
        [anon_sym_PLUS] = ACTIONS(211),
        [anon_sym_LBRACK] = ACTIONS(213),
        [anon_sym_RBRACK] = ACTIONS(349),
        [sym_comment] = ACTIONS(73),
    },
    [120] = {
        [sym__expression] = STATE(113),
        [sym_binary_operator] = STATE(36),
        [sym_subscript] = STATE(36),
        [sym_call] = STATE(36),
        [sym_list] = STATE(36),
        [sym_list_comprehension] = STATE(36),
        [sym_dictionary] = STATE(36),
        [sym_dictionary_comprehension] = STATE(36),
        [anon_sym_LBRACK] = ACTIONS(117),
        [anon_sym_RBRACK] = ACTIONS(351),
        [anon_sym_LBRACE] = ACTIONS(119),
        [sym_number] = ACTIONS(121),
        [sym_identifier] = ACTIONS(121),
        [sym_comment] = ACTIONS(73),
    },
    [121] = {
        [sym_expression_list] = STATE(127),
        [sym__expression] = STATE(108),
        [sym_binary_operator] = STATE(36),
        [sym_subscript] = STATE(36),
        [sym_call] = STATE(36),
        [sym_list] = STATE(36),
        [sym_list_comprehension] = STATE(36),
        [sym_dictionary] = STATE(36),
        [sym_dictionary_comprehension] = STATE(36),
        [anon_sym_LBRACK] = ACTIONS(117),
        [anon_sym_LBRACE] = ACTIONS(119),
        [sym_number] = ACTIONS(121),
        [sym_identifier] = ACTIONS(121),
        [sym_comment] = ACTIONS(73),
    },
    [122] = {
        [anon_sym_COMMA] = ACTIONS(353),
        [anon_sym_COLON] = ACTIONS(353),
        [anon_sym_for] = ACTIONS(353),
        [anon_sym_in] = ACTIONS(353),
        [anon_sym_as] = ACTIONS(353),
        [anon_sym_LPAREN] = ACTIONS(353),
        [anon_sym_RPAREN] = ACTIONS(353),
        [anon_sym_PLUS] = ACTIONS(353),
        [anon_sym_LBRACK] = ACTIONS(353),
        [anon_sym_RBRACK] = ACTIONS(353),
        [anon_sym_RBRACE] = ACTIONS(353),
        [sym_comment] = ACTIONS(73),
    },
    [123] = {
        [anon_sym_COMMA] = ACTIONS(355),
        [anon_sym_RBRACK] = ACTIONS(351),
        [sym_comment] = ACTIONS(73),
    },
    [124] = {
        [sym__expression] = STATE(112),
        [sym_binary_operator] = STATE(36),
        [sym_subscript] = STATE(36),
        [sym_call] = STATE(36),
        [sym_list] = STATE(36),
        [sym_list_comprehension] = STATE(36),
        [sym_dictionary] = STATE(36),
        [sym_dictionary_comprehension] = STATE(36),
        [anon_sym_LBRACK] = ACTIONS(117),
        [anon_sym_RBRACK] = ACTIONS(357),
        [anon_sym_LBRACE] = ACTIONS(119),
        [sym_number] = ACTIONS(121),
        [sym_identifier] = ACTIONS(121),
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
        [anon_sym_COMMA] = ACTIONS(361),
        [anon_sym_COLON] = ACTIONS(361),
        [anon_sym_for] = ACTIONS(361),
        [anon_sym_in] = ACTIONS(361),
        [anon_sym_as] = ACTIONS(361),
        [anon_sym_LPAREN] = ACTIONS(361),
        [anon_sym_RPAREN] = ACTIONS(361),
        [anon_sym_PLUS] = ACTIONS(361),
        [anon_sym_LBRACK] = ACTIONS(361),
        [anon_sym_RBRACK] = ACTIONS(361),
        [anon_sym_RBRACE] = ACTIONS(361),
        [sym_comment] = ACTIONS(73),
    },
    [127] = {
        [anon_sym_in] = ACTIONS(363),
        [sym_comment] = ACTIONS(73),
    },
    [128] = {
        [sym__expression] = STATE(129),
        [sym_binary_operator] = STATE(36),
        [sym_subscript] = STATE(36),
        [sym_call] = STATE(36),
        [sym_list] = STATE(36),
        [sym_list_comprehension] = STATE(36),
        [sym_dictionary] = STATE(36),
        [sym_dictionary_comprehension] = STATE(36),
        [anon_sym_LBRACK] = ACTIONS(117),
        [anon_sym_LBRACE] = ACTIONS(119),
        [sym_number] = ACTIONS(121),
        [sym_identifier] = ACTIONS(121),
        [sym_comment] = ACTIONS(73),
    },
    [129] = {
        [anon_sym_LPAREN] = ACTIONS(209),
        [anon_sym_PLUS] = ACTIONS(211),
        [anon_sym_LBRACK] = ACTIONS(213),
        [anon_sym_RBRACK] = ACTIONS(365),
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
        [anon_sym_LPAREN] = ACTIONS(209),
        [anon_sym_RPAREN] = ACTIONS(369),
        [anon_sym_PLUS] = ACTIONS(211),
        [anon_sym_LBRACK] = ACTIONS(213),
        [sym_comment] = ACTIONS(73),
    },
    [132] = {
        [anon_sym_COMMA] = ACTIONS(371),
        [anon_sym_LPAREN] = ACTIONS(209),
        [anon_sym_RPAREN] = ACTIONS(371),
        [anon_sym_PLUS] = ACTIONS(211),
        [anon_sym_LBRACK] = ACTIONS(213),
        [sym_comment] = ACTIONS(73),
    },
    [133] = {
        [anon_sym_COMMA] = ACTIONS(247),
        [anon_sym_LPAREN] = ACTIONS(247),
        [anon_sym_PLUS] = ACTIONS(247),
        [anon_sym_LBRACK] = ACTIONS(247),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(247),
    },
    [134] = {
        [anon_sym_COMMA] = ACTIONS(373),
        [anon_sym_LPAREN] = ACTIONS(209),
        [anon_sym_RPAREN] = ACTIONS(375),
        [anon_sym_PLUS] = ACTIONS(211),
        [anon_sym_LBRACK] = ACTIONS(213),
        [sym_comment] = ACTIONS(73),
    },
    [135] = {
        [anon_sym_COMMA] = ACTIONS(373),
        [anon_sym_RPAREN] = ACTIONS(375),
        [sym_comment] = ACTIONS(73),
    },
    [136] = {
        [aux_sym_call_repeat2] = STATE(155),
        [anon_sym_COMMA] = ACTIONS(377),
        [anon_sym_RPAREN] = ACTIONS(375),
        [sym_comment] = ACTIONS(73),
    },
    [137] = {
        [anon_sym_RPAREN] = ACTIONS(375),
        [sym_comment] = ACTIONS(73),
    },
    [138] = {
        [sym__expression] = STATE(139),
        [sym_binary_operator] = STATE(36),
        [sym_subscript] = STATE(36),
        [sym_call] = STATE(36),
        [sym_keyword_argument] = STATE(140),
        [sym_list_splat_argument] = STATE(141),
        [sym_dictionary_splat_argument] = STATE(142),
        [sym_list] = STATE(36),
        [sym_list_comprehension] = STATE(36),
        [sym_dictionary] = STATE(36),
        [sym_dictionary_comprehension] = STATE(36),
        [anon_sym_STAR] = ACTIONS(193),
        [anon_sym_LBRACK] = ACTIONS(117),
        [anon_sym_STAR_STAR] = ACTIONS(195),
        [anon_sym_LBRACE] = ACTIONS(119),
        [sym_number] = ACTIONS(121),
        [sym_identifier] = ACTIONS(197),
        [sym_comment] = ACTIONS(73),
    },
    [139] = {
        [anon_sym_COMMA] = ACTIONS(379),
        [anon_sym_LPAREN] = ACTIONS(209),
        [anon_sym_RPAREN] = ACTIONS(381),
        [anon_sym_PLUS] = ACTIONS(211),
        [anon_sym_LBRACK] = ACTIONS(213),
        [sym_comment] = ACTIONS(73),
    },
    [140] = {
        [anon_sym_COMMA] = ACTIONS(379),
        [anon_sym_RPAREN] = ACTIONS(381),
        [sym_comment] = ACTIONS(73),
    },
    [141] = {
        [aux_sym_call_repeat2] = STATE(145),
        [anon_sym_COMMA] = ACTIONS(383),
        [anon_sym_RPAREN] = ACTIONS(381),
        [sym_comment] = ACTIONS(73),
    },
    [142] = {
        [anon_sym_RPAREN] = ACTIONS(381),
        [sym_comment] = ACTIONS(73),
    },
    [143] = {
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
    [144] = {
        [sym__expression] = STATE(81),
        [sym_binary_operator] = STATE(36),
        [sym_subscript] = STATE(36),
        [sym_call] = STATE(36),
        [sym_keyword_argument] = STATE(82),
        [sym_dictionary_splat_argument] = STATE(150),
        [sym_list] = STATE(36),
        [sym_list_comprehension] = STATE(36),
        [sym_dictionary] = STATE(36),
        [sym_dictionary_comprehension] = STATE(36),
        [anon_sym_LBRACK] = ACTIONS(117),
        [anon_sym_STAR_STAR] = ACTIONS(195),
        [anon_sym_LBRACE] = ACTIONS(119),
        [sym_number] = ACTIONS(121),
        [sym_identifier] = ACTIONS(197),
        [sym_comment] = ACTIONS(73),
    },
    [145] = {
        [anon_sym_COMMA] = ACTIONS(385),
        [anon_sym_RPAREN] = ACTIONS(387),
        [sym_comment] = ACTIONS(73),
    },
    [146] = {
        [sym__expression] = STATE(77),
        [sym_binary_operator] = STATE(36),
        [sym_subscript] = STATE(36),
        [sym_call] = STATE(36),
        [sym_keyword_argument] = STATE(78),
        [sym_dictionary_splat_argument] = STATE(148),
        [sym_list] = STATE(36),
        [sym_list_comprehension] = STATE(36),
        [sym_dictionary] = STATE(36),
        [sym_dictionary_comprehension] = STATE(36),
        [anon_sym_LBRACK] = ACTIONS(117),
        [anon_sym_STAR_STAR] = ACTIONS(195),
        [anon_sym_LBRACE] = ACTIONS(119),
        [sym_number] = ACTIONS(121),
        [sym_identifier] = ACTIONS(197),
        [sym_comment] = ACTIONS(73),
    },
    [147] = {
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
    [148] = {
        [anon_sym_RPAREN] = ACTIONS(389),
        [sym_comment] = ACTIONS(73),
    },
    [149] = {
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
    [150] = {
        [anon_sym_RPAREN] = ACTIONS(391),
        [sym_comment] = ACTIONS(73),
    },
    [151] = {
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
    [152] = {
        [anon_sym_RPAREN] = ACTIONS(387),
        [anon_sym_STAR] = ACTIONS(283),
        [anon_sym_LBRACK] = ACTIONS(285),
        [anon_sym_STAR_STAR] = ACTIONS(285),
        [anon_sym_LBRACE] = ACTIONS(285),
        [sym_number] = ACTIONS(283),
        [sym_identifier] = ACTIONS(283),
        [sym_comment] = ACTIONS(73),
    },
    [153] = {
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
    [154] = {
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
        [anon_sym_LBRACK] = ACTIONS(117),
        [anon_sym_STAR_STAR] = ACTIONS(195),
        [anon_sym_LBRACE] = ACTIONS(119),
        [sym_number] = ACTIONS(121),
        [sym_identifier] = ACTIONS(197),
        [sym_comment] = ACTIONS(73),
    },
    [155] = {
        [anon_sym_COMMA] = ACTIONS(393),
        [anon_sym_RPAREN] = ACTIONS(381),
        [sym_comment] = ACTIONS(73),
    },
    [156] = {
        [sym__expression] = STATE(77),
        [sym_binary_operator] = STATE(36),
        [sym_subscript] = STATE(36),
        [sym_call] = STATE(36),
        [sym_keyword_argument] = STATE(78),
        [sym_dictionary_splat_argument] = STATE(150),
        [sym_list] = STATE(36),
        [sym_list_comprehension] = STATE(36),
        [sym_dictionary] = STATE(36),
        [sym_dictionary_comprehension] = STATE(36),
        [anon_sym_LBRACK] = ACTIONS(117),
        [anon_sym_STAR_STAR] = ACTIONS(195),
        [anon_sym_LBRACE] = ACTIONS(119),
        [sym_number] = ACTIONS(121),
        [sym_identifier] = ACTIONS(197),
        [sym_comment] = ACTIONS(73),
    },
    [157] = {
        [anon_sym_RPAREN] = ACTIONS(387),
        [sym_comment] = ACTIONS(73),
    },
    [158] = {
        [anon_sym_RPAREN] = ACTIONS(381),
        [anon_sym_STAR] = ACTIONS(291),
        [anon_sym_LBRACK] = ACTIONS(293),
        [anon_sym_STAR_STAR] = ACTIONS(293),
        [anon_sym_LBRACE] = ACTIONS(293),
        [sym_number] = ACTIONS(291),
        [sym_identifier] = ACTIONS(291),
        [sym_comment] = ACTIONS(73),
    },
    [159] = {
        [ts_builtin_sym_end] = ACTIONS(395),
        [anon_sym_SEMI] = ACTIONS(395),
        [anon_sym_print] = ACTIONS(397),
        [anon_sym_return] = ACTIONS(397),
        [anon_sym_del] = ACTIONS(397),
        [sym_pass_statement] = ACTIONS(397),
        [sym_break_statement] = ACTIONS(397),
        [sym_continue_statement] = ACTIONS(397),
        [anon_sym_if] = ACTIONS(397),
        [anon_sym_for] = ACTIONS(397),
        [anon_sym_while] = ACTIONS(397),
        [anon_sym_try] = ACTIONS(397),
        [anon_sym_with] = ACTIONS(397),
        [anon_sym_def] = ACTIONS(397),
        [anon_sym_class] = ACTIONS(397),
        [anon_sym_AT] = ACTIONS(395),
        [anon_sym_LBRACK] = ACTIONS(395),
        [anon_sym_LBRACE] = ACTIONS(395),
        [sym_number] = ACTIONS(397),
        [sym_identifier] = ACTIONS(399),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(395),
    },
    [160] = {
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
    [161] = {
        [aux_sym_dictionary_repeat1] = STATE(165),
        [anon_sym_COMMA] = ACTIONS(401),
        [anon_sym_for] = ACTIONS(403),
        [anon_sym_RBRACE] = ACTIONS(405),
        [sym_comment] = ACTIONS(73),
    },
    [162] = {
        [sym__expression] = STATE(95),
        [sym_binary_operator] = STATE(36),
        [sym_subscript] = STATE(36),
        [sym_call] = STATE(36),
        [sym_list] = STATE(36),
        [sym_list_comprehension] = STATE(36),
        [sym_dictionary] = STATE(36),
        [sym_dictionary_comprehension] = STATE(36),
        [sym_pair] = STATE(117),
        [anon_sym_LBRACK] = ACTIONS(117),
        [anon_sym_LBRACE] = ACTIONS(119),
        [anon_sym_RBRACE] = ACTIONS(407),
        [sym_number] = ACTIONS(121),
        [sym_identifier] = ACTIONS(121),
        [sym_comment] = ACTIONS(73),
    },
    [163] = {
        [sym_expression_list] = STATE(169),
        [sym__expression] = STATE(108),
        [sym_binary_operator] = STATE(36),
        [sym_subscript] = STATE(36),
        [sym_call] = STATE(36),
        [sym_list] = STATE(36),
        [sym_list_comprehension] = STATE(36),
        [sym_dictionary] = STATE(36),
        [sym_dictionary_comprehension] = STATE(36),
        [anon_sym_LBRACK] = ACTIONS(117),
        [anon_sym_LBRACE] = ACTIONS(119),
        [sym_number] = ACTIONS(121),
        [sym_identifier] = ACTIONS(121),
        [sym_comment] = ACTIONS(73),
    },
    [164] = {
        [anon_sym_COMMA] = ACTIONS(309),
        [anon_sym_COLON] = ACTIONS(309),
        [anon_sym_for] = ACTIONS(309),
        [anon_sym_in] = ACTIONS(309),
        [anon_sym_as] = ACTIONS(309),
        [anon_sym_LPAREN] = ACTIONS(309),
        [anon_sym_RPAREN] = ACTIONS(309),
        [anon_sym_PLUS] = ACTIONS(309),
        [anon_sym_LBRACK] = ACTIONS(309),
        [anon_sym_RBRACK] = ACTIONS(309),
        [anon_sym_RBRACE] = ACTIONS(309),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(309),
    },
    [165] = {
        [anon_sym_COMMA] = ACTIONS(409),
        [anon_sym_RBRACE] = ACTIONS(407),
        [sym_comment] = ACTIONS(73),
    },
    [166] = {
        [sym__expression] = STATE(95),
        [sym_binary_operator] = STATE(36),
        [sym_subscript] = STATE(36),
        [sym_call] = STATE(36),
        [sym_list] = STATE(36),
        [sym_list_comprehension] = STATE(36),
        [sym_dictionary] = STATE(36),
        [sym_dictionary_comprehension] = STATE(36),
        [sym_pair] = STATE(104),
        [anon_sym_LBRACK] = ACTIONS(117),
        [anon_sym_LBRACE] = ACTIONS(119),
        [anon_sym_RBRACE] = ACTIONS(411),
        [sym_number] = ACTIONS(121),
        [sym_identifier] = ACTIONS(121),
        [sym_comment] = ACTIONS(73),
    },
    [167] = {
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
    [168] = {
        [anon_sym_COMMA] = ACTIONS(317),
        [anon_sym_COLON] = ACTIONS(317),
        [anon_sym_for] = ACTIONS(317),
        [anon_sym_in] = ACTIONS(317),
        [anon_sym_as] = ACTIONS(317),
        [anon_sym_LPAREN] = ACTIONS(317),
        [anon_sym_RPAREN] = ACTIONS(317),
        [anon_sym_PLUS] = ACTIONS(317),
        [anon_sym_LBRACK] = ACTIONS(317),
        [anon_sym_RBRACK] = ACTIONS(317),
        [anon_sym_RBRACE] = ACTIONS(317),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(317),
    },
    [169] = {
        [anon_sym_in] = ACTIONS(413),
        [sym_comment] = ACTIONS(73),
    },
    [170] = {
        [sym__expression] = STATE(171),
        [sym_binary_operator] = STATE(36),
        [sym_subscript] = STATE(36),
        [sym_call] = STATE(36),
        [sym_list] = STATE(36),
        [sym_list_comprehension] = STATE(36),
        [sym_dictionary] = STATE(36),
        [sym_dictionary_comprehension] = STATE(36),
        [anon_sym_LBRACK] = ACTIONS(117),
        [anon_sym_LBRACE] = ACTIONS(119),
        [sym_number] = ACTIONS(121),
        [sym_identifier] = ACTIONS(121),
        [sym_comment] = ACTIONS(73),
    },
    [171] = {
        [anon_sym_LPAREN] = ACTIONS(209),
        [anon_sym_PLUS] = ACTIONS(211),
        [anon_sym_LBRACK] = ACTIONS(213),
        [anon_sym_RBRACE] = ACTIONS(415),
        [sym_comment] = ACTIONS(73),
    },
    [172] = {
        [anon_sym_COMMA] = ACTIONS(339),
        [anon_sym_COLON] = ACTIONS(339),
        [anon_sym_for] = ACTIONS(339),
        [anon_sym_in] = ACTIONS(339),
        [anon_sym_as] = ACTIONS(339),
        [anon_sym_LPAREN] = ACTIONS(339),
        [anon_sym_RPAREN] = ACTIONS(339),
        [anon_sym_PLUS] = ACTIONS(339),
        [anon_sym_LBRACK] = ACTIONS(339),
        [anon_sym_RBRACK] = ACTIONS(339),
        [anon_sym_RBRACE] = ACTIONS(339),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(339),
    },
    [173] = {
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
    [174] = {
        [aux_sym_print_statement_repeat1] = STATE(178),
        [anon_sym_COMMA] = ACTIONS(417),
        [anon_sym_for] = ACTIONS(419),
        [anon_sym_LPAREN] = ACTIONS(209),
        [anon_sym_PLUS] = ACTIONS(211),
        [anon_sym_LBRACK] = ACTIONS(213),
        [anon_sym_RBRACK] = ACTIONS(421),
        [sym_comment] = ACTIONS(73),
    },
    [175] = {
        [sym__expression] = STATE(113),
        [sym_binary_operator] = STATE(36),
        [sym_subscript] = STATE(36),
        [sym_call] = STATE(36),
        [sym_list] = STATE(36),
        [sym_list_comprehension] = STATE(36),
        [sym_dictionary] = STATE(36),
        [sym_dictionary_comprehension] = STATE(36),
        [anon_sym_LBRACK] = ACTIONS(117),
        [anon_sym_RBRACK] = ACTIONS(423),
        [anon_sym_LBRACE] = ACTIONS(119),
        [sym_number] = ACTIONS(121),
        [sym_identifier] = ACTIONS(121),
        [sym_comment] = ACTIONS(73),
    },
    [176] = {
        [sym_expression_list] = STATE(182),
        [sym__expression] = STATE(108),
        [sym_binary_operator] = STATE(36),
        [sym_subscript] = STATE(36),
        [sym_call] = STATE(36),
        [sym_list] = STATE(36),
        [sym_list_comprehension] = STATE(36),
        [sym_dictionary] = STATE(36),
        [sym_dictionary_comprehension] = STATE(36),
        [anon_sym_LBRACK] = ACTIONS(117),
        [anon_sym_LBRACE] = ACTIONS(119),
        [sym_number] = ACTIONS(121),
        [sym_identifier] = ACTIONS(121),
        [sym_comment] = ACTIONS(73),
    },
    [177] = {
        [anon_sym_COMMA] = ACTIONS(353),
        [anon_sym_COLON] = ACTIONS(353),
        [anon_sym_for] = ACTIONS(353),
        [anon_sym_in] = ACTIONS(353),
        [anon_sym_as] = ACTIONS(353),
        [anon_sym_LPAREN] = ACTIONS(353),
        [anon_sym_RPAREN] = ACTIONS(353),
        [anon_sym_PLUS] = ACTIONS(353),
        [anon_sym_LBRACK] = ACTIONS(353),
        [anon_sym_RBRACK] = ACTIONS(353),
        [anon_sym_RBRACE] = ACTIONS(353),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(353),
    },
    [178] = {
        [anon_sym_COMMA] = ACTIONS(425),
        [anon_sym_RBRACK] = ACTIONS(423),
        [sym_comment] = ACTIONS(73),
    },
    [179] = {
        [sym__expression] = STATE(112),
        [sym_binary_operator] = STATE(36),
        [sym_subscript] = STATE(36),
        [sym_call] = STATE(36),
        [sym_list] = STATE(36),
        [sym_list_comprehension] = STATE(36),
        [sym_dictionary] = STATE(36),
        [sym_dictionary_comprehension] = STATE(36),
        [anon_sym_LBRACK] = ACTIONS(117),
        [anon_sym_RBRACK] = ACTIONS(427),
        [anon_sym_LBRACE] = ACTIONS(119),
        [sym_number] = ACTIONS(121),
        [sym_identifier] = ACTIONS(121),
        [sym_comment] = ACTIONS(73),
    },
    [180] = {
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
    [181] = {
        [anon_sym_COMMA] = ACTIONS(361),
        [anon_sym_COLON] = ACTIONS(361),
        [anon_sym_for] = ACTIONS(361),
        [anon_sym_in] = ACTIONS(361),
        [anon_sym_as] = ACTIONS(361),
        [anon_sym_LPAREN] = ACTIONS(361),
        [anon_sym_RPAREN] = ACTIONS(361),
        [anon_sym_PLUS] = ACTIONS(361),
        [anon_sym_LBRACK] = ACTIONS(361),
        [anon_sym_RBRACK] = ACTIONS(361),
        [anon_sym_RBRACE] = ACTIONS(361),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(361),
    },
    [182] = {
        [anon_sym_in] = ACTIONS(429),
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
        [anon_sym_RBRACK] = ACTIONS(431),
        [sym_comment] = ACTIONS(73),
    },
    [185] = {
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
    [186] = {
        [aux_sym_dotted_name_repeat1] = STATE(197),
        [anon_sym_LPAREN] = ACTIONS(433),
        [anon_sym_DOT] = ACTIONS(435),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(433),
    },
    [187] = {
        [sym_arguments] = STATE(190),
        [anon_sym_LPAREN] = ACTIONS(437),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(439),
    },
    [188] = {
        [sym__expression] = STATE(192),
        [sym_binary_operator] = STATE(36),
        [sym_subscript] = STATE(36),
        [sym_call] = STATE(36),
        [sym_list] = STATE(36),
        [sym_list_comprehension] = STATE(36),
        [sym_dictionary] = STATE(36),
        [sym_dictionary_comprehension] = STATE(36),
        [anon_sym_LBRACK] = ACTIONS(117),
        [anon_sym_LBRACE] = ACTIONS(119),
        [sym_number] = ACTIONS(121),
        [sym_identifier] = ACTIONS(121),
        [sym_comment] = ACTIONS(73),
    },
    [189] = {
        [anon_sym_def] = ACTIONS(441),
        [anon_sym_class] = ACTIONS(441),
        [anon_sym_AT] = ACTIONS(441),
        [sym_comment] = ACTIONS(73),
    },
    [190] = {
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(443),
    },
    [191] = {
        [anon_sym_def] = ACTIONS(445),
        [anon_sym_class] = ACTIONS(445),
        [anon_sym_AT] = ACTIONS(445),
        [sym_comment] = ACTIONS(73),
    },
    [192] = {
        [aux_sym_print_statement_repeat1] = STATE(194),
        [anon_sym_COMMA] = ACTIONS(325),
        [anon_sym_LPAREN] = ACTIONS(209),
        [anon_sym_RPAREN] = ACTIONS(447),
        [anon_sym_PLUS] = ACTIONS(211),
        [anon_sym_LBRACK] = ACTIONS(213),
        [sym_comment] = ACTIONS(73),
    },
    [193] = {
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(449),
    },
    [194] = {
        [anon_sym_COMMA] = ACTIONS(329),
        [anon_sym_RPAREN] = ACTIONS(451),
        [sym_comment] = ACTIONS(73),
    },
    [195] = {
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(453),
    },
    [196] = {
        [sym_identifier] = ACTIONS(455),
        [sym_comment] = ACTIONS(73),
    },
    [197] = {
        [anon_sym_LPAREN] = ACTIONS(457),
        [anon_sym_DOT] = ACTIONS(459),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(457),
    },
    [198] = {
        [sym_identifier] = ACTIONS(461),
        [sym_comment] = ACTIONS(73),
    },
    [199] = {
        [anon_sym_LPAREN] = ACTIONS(463),
        [anon_sym_DOT] = ACTIONS(463),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(463),
    },
    [200] = {
        [anon_sym_LPAREN] = ACTIONS(465),
        [anon_sym_DOT] = ACTIONS(465),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(465),
    },
    [201] = {
        [anon_sym_COLON] = ACTIONS(467),
        [anon_sym_LPAREN] = ACTIONS(469),
        [sym_comment] = ACTIONS(73),
    },
    [202] = {
        [sym__simple_statement] = STATE(208),
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
        [sym__indent] = ACTIONS(471),
    },
    [203] = {
        [sym_expression_list] = STATE(204),
        [sym__expression] = STATE(108),
        [sym_binary_operator] = STATE(36),
        [sym_subscript] = STATE(36),
        [sym_call] = STATE(36),
        [sym_list] = STATE(36),
        [sym_list_comprehension] = STATE(36),
        [sym_dictionary] = STATE(36),
        [sym_dictionary_comprehension] = STATE(36),
        [anon_sym_LBRACK] = ACTIONS(117),
        [anon_sym_LBRACE] = ACTIONS(119),
        [sym_number] = ACTIONS(121),
        [sym_identifier] = ACTIONS(121),
        [sym_comment] = ACTIONS(73),
    },
    [204] = {
        [anon_sym_RPAREN] = ACTIONS(473),
        [sym_comment] = ACTIONS(73),
    },
    [205] = {
        [anon_sym_COLON] = ACTIONS(475),
        [sym_comment] = ACTIONS(73),
    },
    [206] = {
        [sym__simple_statement] = STATE(208),
        [sym_print_statement] = STATE(5),
        [sym_expression_statement] = STATE(5),
        [sym_return_statement] = STATE(5),
        [sym_delete_statement] = STATE(5),
        [sym__suite] = STATE(209),
        [sym__expression] = STATE(23),
        [sym_binary_operator] = STATE(16),
        [sym_subscript] = STATE(16),
        [sym_call] = STATE(16),
        [sym_list] = STATE(16),
        [sym_list_comprehension] = STATE(16),
        [sym_dictionary] = STATE(16),
        [sym_dictionary_comprehension] = STATE(16),
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
        [sym__indent] = ACTIONS(471),
    },
    [207] = {
        [sym__statement] = STATE(218),
        [sym__simple_statement] = STATE(219),
        [sym_print_statement] = STATE(5),
        [sym_expression_statement] = STATE(5),
        [sym_return_statement] = STATE(5),
        [sym_delete_statement] = STATE(5),
        [sym__compound_statement] = STATE(220),
        [sym_if_statement] = STATE(221),
        [sym_for_statement] = STATE(221),
        [sym_while_statement] = STATE(221),
        [sym_try_statement] = STATE(221),
        [sym_with_statement] = STATE(221),
        [sym_function_definition] = STATE(221),
        [sym_class_definition] = STATE(221),
        [sym_decorated_definition] = STATE(221),
        [sym_decorator] = STATE(22),
        [sym__expression] = STATE(23),
        [sym_binary_operator] = STATE(16),
        [sym_subscript] = STATE(16),
        [sym_call] = STATE(16),
        [sym_list] = STATE(16),
        [sym_list_comprehension] = STATE(16),
        [sym_dictionary] = STATE(16),
        [sym_dictionary_comprehension] = STATE(16),
        [aux_sym_module_repeat1] = STATE(222),
        [aux_sym_decorated_definition_repeat1] = STATE(223),
        [anon_sym_print] = ACTIONS(83),
        [anon_sym_return] = ACTIONS(85),
        [anon_sym_del] = ACTIONS(87),
        [sym_pass_statement] = ACTIONS(89),
        [sym_break_statement] = ACTIONS(89),
        [sym_continue_statement] = ACTIONS(89),
        [anon_sym_if] = ACTIONS(477),
        [anon_sym_for] = ACTIONS(479),
        [anon_sym_while] = ACTIONS(481),
        [anon_sym_try] = ACTIONS(483),
        [anon_sym_with] = ACTIONS(485),
        [anon_sym_def] = ACTIONS(487),
        [anon_sym_class] = ACTIONS(489),
        [anon_sym_AT] = ACTIONS(105),
        [anon_sym_LBRACK] = ACTIONS(107),
        [anon_sym_LBRACE] = ACTIONS(109),
        [sym_number] = ACTIONS(111),
        [sym_identifier] = ACTIONS(113),
        [sym_comment] = ACTIONS(73),
        [sym__dedent] = ACTIONS(491),
    },
    [208] = {
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(491),
    },
    [209] = {
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
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(493),
    },
    [210] = {
        [ts_builtin_sym_end] = ACTIONS(499),
        [anon_sym_SEMI] = ACTIONS(499),
        [anon_sym_print] = ACTIONS(501),
        [anon_sym_return] = ACTIONS(501),
        [anon_sym_del] = ACTIONS(501),
        [sym_pass_statement] = ACTIONS(501),
        [sym_break_statement] = ACTIONS(501),
        [sym_continue_statement] = ACTIONS(501),
        [anon_sym_if] = ACTIONS(501),
        [anon_sym_elif] = ACTIONS(501),
        [anon_sym_else] = ACTIONS(501),
        [anon_sym_for] = ACTIONS(501),
        [anon_sym_while] = ACTIONS(501),
        [anon_sym_try] = ACTIONS(501),
        [anon_sym_except] = ACTIONS(501),
        [anon_sym_finally] = ACTIONS(501),
        [anon_sym_with] = ACTIONS(501),
        [anon_sym_def] = ACTIONS(501),
        [anon_sym_class] = ACTIONS(501),
        [anon_sym_AT] = ACTIONS(499),
        [anon_sym_LBRACK] = ACTIONS(499),
        [anon_sym_LBRACE] = ACTIONS(499),
        [sym_number] = ACTIONS(501),
        [sym_identifier] = ACTIONS(503),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(499),
    },
    [211] = {
        [sym__expression] = STATE(324),
        [sym_binary_operator] = STATE(36),
        [sym_subscript] = STATE(36),
        [sym_call] = STATE(36),
        [sym_list] = STATE(36),
        [sym_list_comprehension] = STATE(36),
        [sym_dictionary] = STATE(36),
        [sym_dictionary_comprehension] = STATE(36),
        [anon_sym_LBRACK] = ACTIONS(117),
        [anon_sym_LBRACE] = ACTIONS(119),
        [sym_number] = ACTIONS(121),
        [sym_identifier] = ACTIONS(121),
        [sym_comment] = ACTIONS(73),
    },
    [212] = {
        [sym_expression_list] = STATE(318),
        [sym__expression] = STATE(108),
        [sym_binary_operator] = STATE(36),
        [sym_subscript] = STATE(36),
        [sym_call] = STATE(36),
        [sym_list] = STATE(36),
        [sym_list_comprehension] = STATE(36),
        [sym_dictionary] = STATE(36),
        [sym_dictionary_comprehension] = STATE(36),
        [anon_sym_LBRACK] = ACTIONS(117),
        [anon_sym_LBRACE] = ACTIONS(119),
        [sym_number] = ACTIONS(121),
        [sym_identifier] = ACTIONS(121),
        [sym_comment] = ACTIONS(73),
    },
    [213] = {
        [sym__expression] = STATE(314),
        [sym_binary_operator] = STATE(36),
        [sym_subscript] = STATE(36),
        [sym_call] = STATE(36),
        [sym_list] = STATE(36),
        [sym_list_comprehension] = STATE(36),
        [sym_dictionary] = STATE(36),
        [sym_dictionary_comprehension] = STATE(36),
        [anon_sym_LBRACK] = ACTIONS(117),
        [anon_sym_LBRACE] = ACTIONS(119),
        [sym_number] = ACTIONS(121),
        [sym_identifier] = ACTIONS(121),
        [sym_comment] = ACTIONS(73),
    },
    [214] = {
        [anon_sym_COLON] = ACTIONS(505),
        [sym_comment] = ACTIONS(73),
    },
    [215] = {
        [sym_with_item] = STATE(273),
        [sym__expression] = STATE(274),
        [sym_binary_operator] = STATE(36),
        [sym_subscript] = STATE(36),
        [sym_call] = STATE(36),
        [sym_list] = STATE(36),
        [sym_list_comprehension] = STATE(36),
        [sym_dictionary] = STATE(36),
        [sym_dictionary_comprehension] = STATE(36),
        [anon_sym_LBRACK] = ACTIONS(117),
        [anon_sym_LBRACE] = ACTIONS(119),
        [sym_number] = ACTIONS(121),
        [sym_identifier] = ACTIONS(121),
        [sym_comment] = ACTIONS(73),
    },
    [216] = {
        [sym_identifier] = ACTIONS(507),
        [sym_comment] = ACTIONS(73),
    },
    [217] = {
        [sym_identifier] = ACTIONS(509),
        [sym_comment] = ACTIONS(73),
    },
    [218] = {
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
    [219] = {
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(511),
    },
    [220] = {
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
    [221] = {
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
    [222] = {
        [sym__statement] = STATE(226),
        [sym__simple_statement] = STATE(219),
        [sym_print_statement] = STATE(5),
        [sym_expression_statement] = STATE(5),
        [sym_return_statement] = STATE(5),
        [sym_delete_statement] = STATE(5),
        [sym__compound_statement] = STATE(220),
        [sym_if_statement] = STATE(221),
        [sym_for_statement] = STATE(221),
        [sym_while_statement] = STATE(221),
        [sym_try_statement] = STATE(221),
        [sym_with_statement] = STATE(221),
        [sym_function_definition] = STATE(221),
        [sym_class_definition] = STATE(221),
        [sym_decorated_definition] = STATE(221),
        [sym_decorator] = STATE(22),
        [sym__expression] = STATE(23),
        [sym_binary_operator] = STATE(16),
        [sym_subscript] = STATE(16),
        [sym_call] = STATE(16),
        [sym_list] = STATE(16),
        [sym_list_comprehension] = STATE(16),
        [sym_dictionary] = STATE(16),
        [sym_dictionary_comprehension] = STATE(16),
        [aux_sym_decorated_definition_repeat1] = STATE(223),
        [anon_sym_print] = ACTIONS(83),
        [anon_sym_return] = ACTIONS(85),
        [anon_sym_del] = ACTIONS(87),
        [sym_pass_statement] = ACTIONS(89),
        [sym_break_statement] = ACTIONS(89),
        [sym_continue_statement] = ACTIONS(89),
        [anon_sym_if] = ACTIONS(477),
        [anon_sym_for] = ACTIONS(479),
        [anon_sym_while] = ACTIONS(481),
        [anon_sym_try] = ACTIONS(483),
        [anon_sym_with] = ACTIONS(485),
        [anon_sym_def] = ACTIONS(487),
        [anon_sym_class] = ACTIONS(489),
        [anon_sym_AT] = ACTIONS(105),
        [anon_sym_LBRACK] = ACTIONS(107),
        [anon_sym_LBRACE] = ACTIONS(109),
        [sym_number] = ACTIONS(111),
        [sym_identifier] = ACTIONS(113),
        [sym_comment] = ACTIONS(73),
        [sym__dedent] = ACTIONS(513),
    },
    [223] = {
        [sym_function_definition] = STATE(224),
        [sym_class_definition] = STATE(224),
        [sym_decorator] = STATE(27),
        [anon_sym_def] = ACTIONS(515),
        [anon_sym_class] = ACTIONS(517),
        [anon_sym_AT] = ACTIONS(105),
        [sym_comment] = ACTIONS(73),
    },
    [224] = {
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
    [225] = {
        [ts_builtin_sym_end] = ACTIONS(519),
        [anon_sym_SEMI] = ACTIONS(519),
        [anon_sym_print] = ACTIONS(521),
        [anon_sym_return] = ACTIONS(521),
        [anon_sym_del] = ACTIONS(521),
        [sym_pass_statement] = ACTIONS(521),
        [sym_break_statement] = ACTIONS(521),
        [sym_continue_statement] = ACTIONS(521),
        [anon_sym_if] = ACTIONS(521),
        [anon_sym_elif] = ACTIONS(521),
        [anon_sym_else] = ACTIONS(521),
        [anon_sym_for] = ACTIONS(521),
        [anon_sym_while] = ACTIONS(521),
        [anon_sym_try] = ACTIONS(521),
        [anon_sym_except] = ACTIONS(521),
        [anon_sym_finally] = ACTIONS(521),
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
    [226] = {
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
    [227] = {
        [anon_sym_print] = ACTIONS(397),
        [anon_sym_return] = ACTIONS(397),
        [anon_sym_del] = ACTIONS(397),
        [sym_pass_statement] = ACTIONS(397),
        [sym_break_statement] = ACTIONS(397),
        [sym_continue_statement] = ACTIONS(397),
        [anon_sym_if] = ACTIONS(397),
        [anon_sym_for] = ACTIONS(397),
        [anon_sym_while] = ACTIONS(397),
        [anon_sym_try] = ACTIONS(397),
        [anon_sym_with] = ACTIONS(397),
        [anon_sym_def] = ACTIONS(397),
        [anon_sym_class] = ACTIONS(397),
        [anon_sym_AT] = ACTIONS(395),
        [anon_sym_LBRACK] = ACTIONS(395),
        [anon_sym_LBRACE] = ACTIONS(395),
        [sym_number] = ACTIONS(397),
        [sym_identifier] = ACTIONS(399),
        [sym_comment] = ACTIONS(73),
        [sym__dedent] = ACTIONS(395),
    },
    [228] = {
        [anon_sym_COLON] = ACTIONS(525),
        [anon_sym_LPAREN] = ACTIONS(527),
        [sym_comment] = ACTIONS(73),
    },
    [229] = {
        [sym__simple_statement] = STATE(235),
        [sym_print_statement] = STATE(5),
        [sym_expression_statement] = STATE(5),
        [sym_return_statement] = STATE(5),
        [sym_delete_statement] = STATE(5),
        [sym__suite] = STATE(240),
        [sym__expression] = STATE(23),
        [sym_binary_operator] = STATE(16),
        [sym_subscript] = STATE(16),
        [sym_call] = STATE(16),
        [sym_list] = STATE(16),
        [sym_list_comprehension] = STATE(16),
        [sym_dictionary] = STATE(16),
        [sym_dictionary_comprehension] = STATE(16),
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
        [sym__indent] = ACTIONS(529),
    },
    [230] = {
        [sym_expression_list] = STATE(231),
        [sym__expression] = STATE(108),
        [sym_binary_operator] = STATE(36),
        [sym_subscript] = STATE(36),
        [sym_call] = STATE(36),
        [sym_list] = STATE(36),
        [sym_list_comprehension] = STATE(36),
        [sym_dictionary] = STATE(36),
        [sym_dictionary_comprehension] = STATE(36),
        [anon_sym_LBRACK] = ACTIONS(117),
        [anon_sym_LBRACE] = ACTIONS(119),
        [sym_number] = ACTIONS(121),
        [sym_identifier] = ACTIONS(121),
        [sym_comment] = ACTIONS(73),
    },
    [231] = {
        [anon_sym_RPAREN] = ACTIONS(531),
        [sym_comment] = ACTIONS(73),
    },
    [232] = {
        [anon_sym_COLON] = ACTIONS(533),
        [sym_comment] = ACTIONS(73),
    },
    [233] = {
        [sym__simple_statement] = STATE(235),
        [sym_print_statement] = STATE(5),
        [sym_expression_statement] = STATE(5),
        [sym_return_statement] = STATE(5),
        [sym_delete_statement] = STATE(5),
        [sym__suite] = STATE(236),
        [sym__expression] = STATE(23),
        [sym_binary_operator] = STATE(16),
        [sym_subscript] = STATE(16),
        [sym_call] = STATE(16),
        [sym_list] = STATE(16),
        [sym_list_comprehension] = STATE(16),
        [sym_dictionary] = STATE(16),
        [sym_dictionary_comprehension] = STATE(16),
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
        [sym__indent] = ACTIONS(529),
    },
    [234] = {
        [sym__statement] = STATE(218),
        [sym__simple_statement] = STATE(219),
        [sym_print_statement] = STATE(5),
        [sym_expression_statement] = STATE(5),
        [sym_return_statement] = STATE(5),
        [sym_delete_statement] = STATE(5),
        [sym__compound_statement] = STATE(220),
        [sym_if_statement] = STATE(221),
        [sym_for_statement] = STATE(221),
        [sym_while_statement] = STATE(221),
        [sym_try_statement] = STATE(221),
        [sym_with_statement] = STATE(221),
        [sym_function_definition] = STATE(221),
        [sym_class_definition] = STATE(221),
        [sym_decorated_definition] = STATE(221),
        [sym_decorator] = STATE(22),
        [sym__expression] = STATE(23),
        [sym_binary_operator] = STATE(16),
        [sym_subscript] = STATE(16),
        [sym_call] = STATE(16),
        [sym_list] = STATE(16),
        [sym_list_comprehension] = STATE(16),
        [sym_dictionary] = STATE(16),
        [sym_dictionary_comprehension] = STATE(16),
        [aux_sym_module_repeat1] = STATE(238),
        [aux_sym_decorated_definition_repeat1] = STATE(223),
        [anon_sym_print] = ACTIONS(83),
        [anon_sym_return] = ACTIONS(85),
        [anon_sym_del] = ACTIONS(87),
        [sym_pass_statement] = ACTIONS(89),
        [sym_break_statement] = ACTIONS(89),
        [sym_continue_statement] = ACTIONS(89),
        [anon_sym_if] = ACTIONS(477),
        [anon_sym_for] = ACTIONS(479),
        [anon_sym_while] = ACTIONS(481),
        [anon_sym_try] = ACTIONS(483),
        [anon_sym_with] = ACTIONS(485),
        [anon_sym_def] = ACTIONS(487),
        [anon_sym_class] = ACTIONS(489),
        [anon_sym_AT] = ACTIONS(105),
        [anon_sym_LBRACK] = ACTIONS(107),
        [anon_sym_LBRACE] = ACTIONS(109),
        [sym_number] = ACTIONS(111),
        [sym_identifier] = ACTIONS(113),
        [sym_comment] = ACTIONS(73),
        [sym__dedent] = ACTIONS(535),
    },
    [235] = {
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(535),
    },
    [236] = {
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
        [sym_comment] = ACTIONS(73),
        [sym__dedent] = ACTIONS(493),
    },
    [237] = {
        [anon_sym_print] = ACTIONS(501),
        [anon_sym_return] = ACTIONS(501),
        [anon_sym_del] = ACTIONS(501),
        [sym_pass_statement] = ACTIONS(501),
        [sym_break_statement] = ACTIONS(501),
        [sym_continue_statement] = ACTIONS(501),
        [anon_sym_if] = ACTIONS(501),
        [anon_sym_elif] = ACTIONS(501),
        [anon_sym_else] = ACTIONS(501),
        [anon_sym_for] = ACTIONS(501),
        [anon_sym_while] = ACTIONS(501),
        [anon_sym_try] = ACTIONS(501),
        [anon_sym_except] = ACTIONS(501),
        [anon_sym_finally] = ACTIONS(501),
        [anon_sym_with] = ACTIONS(501),
        [anon_sym_def] = ACTIONS(501),
        [anon_sym_class] = ACTIONS(501),
        [anon_sym_AT] = ACTIONS(499),
        [anon_sym_LBRACK] = ACTIONS(499),
        [anon_sym_LBRACE] = ACTIONS(499),
        [sym_number] = ACTIONS(501),
        [sym_identifier] = ACTIONS(503),
        [sym_comment] = ACTIONS(73),
        [sym__dedent] = ACTIONS(499),
    },
    [238] = {
        [sym__statement] = STATE(226),
        [sym__simple_statement] = STATE(219),
        [sym_print_statement] = STATE(5),
        [sym_expression_statement] = STATE(5),
        [sym_return_statement] = STATE(5),
        [sym_delete_statement] = STATE(5),
        [sym__compound_statement] = STATE(220),
        [sym_if_statement] = STATE(221),
        [sym_for_statement] = STATE(221),
        [sym_while_statement] = STATE(221),
        [sym_try_statement] = STATE(221),
        [sym_with_statement] = STATE(221),
        [sym_function_definition] = STATE(221),
        [sym_class_definition] = STATE(221),
        [sym_decorated_definition] = STATE(221),
        [sym_decorator] = STATE(22),
        [sym__expression] = STATE(23),
        [sym_binary_operator] = STATE(16),
        [sym_subscript] = STATE(16),
        [sym_call] = STATE(16),
        [sym_list] = STATE(16),
        [sym_list_comprehension] = STATE(16),
        [sym_dictionary] = STATE(16),
        [sym_dictionary_comprehension] = STATE(16),
        [aux_sym_decorated_definition_repeat1] = STATE(223),
        [anon_sym_print] = ACTIONS(83),
        [anon_sym_return] = ACTIONS(85),
        [anon_sym_del] = ACTIONS(87),
        [sym_pass_statement] = ACTIONS(89),
        [sym_break_statement] = ACTIONS(89),
        [sym_continue_statement] = ACTIONS(89),
        [anon_sym_if] = ACTIONS(477),
        [anon_sym_for] = ACTIONS(479),
        [anon_sym_while] = ACTIONS(481),
        [anon_sym_try] = ACTIONS(483),
        [anon_sym_with] = ACTIONS(485),
        [anon_sym_def] = ACTIONS(487),
        [anon_sym_class] = ACTIONS(489),
        [anon_sym_AT] = ACTIONS(105),
        [anon_sym_LBRACK] = ACTIONS(107),
        [anon_sym_LBRACE] = ACTIONS(109),
        [sym_number] = ACTIONS(111),
        [sym_identifier] = ACTIONS(113),
        [sym_comment] = ACTIONS(73),
        [sym__dedent] = ACTIONS(537),
    },
    [239] = {
        [anon_sym_print] = ACTIONS(521),
        [anon_sym_return] = ACTIONS(521),
        [anon_sym_del] = ACTIONS(521),
        [sym_pass_statement] = ACTIONS(521),
        [sym_break_statement] = ACTIONS(521),
        [sym_continue_statement] = ACTIONS(521),
        [anon_sym_if] = ACTIONS(521),
        [anon_sym_elif] = ACTIONS(521),
        [anon_sym_else] = ACTIONS(521),
        [anon_sym_for] = ACTIONS(521),
        [anon_sym_while] = ACTIONS(521),
        [anon_sym_try] = ACTIONS(521),
        [anon_sym_except] = ACTIONS(521),
        [anon_sym_finally] = ACTIONS(521),
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
    [240] = {
        [anon_sym_print] = ACTIONS(539),
        [anon_sym_return] = ACTIONS(539),
        [anon_sym_del] = ACTIONS(539),
        [sym_pass_statement] = ACTIONS(539),
        [sym_break_statement] = ACTIONS(539),
        [sym_continue_statement] = ACTIONS(539),
        [anon_sym_if] = ACTIONS(539),
        [anon_sym_for] = ACTIONS(539),
        [anon_sym_while] = ACTIONS(539),
        [anon_sym_try] = ACTIONS(539),
        [anon_sym_with] = ACTIONS(539),
        [anon_sym_def] = ACTIONS(539),
        [anon_sym_class] = ACTIONS(539),
        [anon_sym_AT] = ACTIONS(541),
        [anon_sym_LBRACK] = ACTIONS(541),
        [anon_sym_LBRACE] = ACTIONS(541),
        [sym_number] = ACTIONS(539),
        [sym_identifier] = ACTIONS(543),
        [sym_comment] = ACTIONS(73),
        [sym__dedent] = ACTIONS(541),
    },
    [241] = {
        [sym_parameters] = STATE(243),
        [anon_sym_LPAREN] = ACTIONS(545),
        [sym_comment] = ACTIONS(73),
    },
    [242] = {
        [sym_default_parameter] = STATE(249),
        [sym_list_splat_parameter] = STATE(250),
        [sym_dictionary_splat_parameter] = STATE(251),
        [aux_sym_parameters_repeat1] = STATE(252),
        [anon_sym_RPAREN] = ACTIONS(547),
        [anon_sym_STAR] = ACTIONS(549),
        [sym_identifier] = ACTIONS(551),
        [sym_comment] = ACTIONS(73),
    },
    [243] = {
        [anon_sym_COLON] = ACTIONS(553),
        [sym_comment] = ACTIONS(73),
    },
    [244] = {
        [sym__simple_statement] = STATE(235),
        [sym_print_statement] = STATE(5),
        [sym_expression_statement] = STATE(5),
        [sym_return_statement] = STATE(5),
        [sym_delete_statement] = STATE(5),
        [sym__suite] = STATE(245),
        [sym__expression] = STATE(23),
        [sym_binary_operator] = STATE(16),
        [sym_subscript] = STATE(16),
        [sym_call] = STATE(16),
        [sym_list] = STATE(16),
        [sym_list_comprehension] = STATE(16),
        [sym_dictionary] = STATE(16),
        [sym_dictionary_comprehension] = STATE(16),
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
        [sym__indent] = ACTIONS(529),
    },
    [245] = {
        [anon_sym_print] = ACTIONS(555),
        [anon_sym_return] = ACTIONS(555),
        [anon_sym_del] = ACTIONS(555),
        [sym_pass_statement] = ACTIONS(555),
        [sym_break_statement] = ACTIONS(555),
        [sym_continue_statement] = ACTIONS(555),
        [anon_sym_if] = ACTIONS(555),
        [anon_sym_for] = ACTIONS(555),
        [anon_sym_while] = ACTIONS(555),
        [anon_sym_try] = ACTIONS(555),
        [anon_sym_with] = ACTIONS(555),
        [anon_sym_def] = ACTIONS(555),
        [anon_sym_class] = ACTIONS(555),
        [anon_sym_AT] = ACTIONS(557),
        [anon_sym_LBRACK] = ACTIONS(557),
        [anon_sym_LBRACE] = ACTIONS(557),
        [sym_number] = ACTIONS(555),
        [sym_identifier] = ACTIONS(559),
        [sym_comment] = ACTIONS(73),
        [sym__dedent] = ACTIONS(557),
    },
    [246] = {
        [anon_sym_COLON] = ACTIONS(561),
        [sym_comment] = ACTIONS(73),
    },
    [247] = {
        [anon_sym_STAR] = ACTIONS(563),
        [sym_identifier] = ACTIONS(565),
        [sym_comment] = ACTIONS(73),
    },
    [248] = {
        [anon_sym_COMMA] = ACTIONS(567),
        [anon_sym_RPAREN] = ACTIONS(569),
        [anon_sym_EQ] = ACTIONS(571),
        [sym_comment] = ACTIONS(73),
    },
    [249] = {
        [anon_sym_COMMA] = ACTIONS(567),
        [anon_sym_RPAREN] = ACTIONS(569),
        [sym_comment] = ACTIONS(73),
    },
    [250] = {
        [anon_sym_COMMA] = ACTIONS(573),
        [anon_sym_RPAREN] = ACTIONS(569),
        [sym_comment] = ACTIONS(73),
    },
    [251] = {
        [anon_sym_RPAREN] = ACTIONS(569),
        [sym_comment] = ACTIONS(73),
    },
    [252] = {
        [sym_default_parameter] = STATE(254),
        [sym_list_splat_parameter] = STATE(255),
        [sym_dictionary_splat_parameter] = STATE(256),
        [anon_sym_STAR] = ACTIONS(549),
        [sym_identifier] = ACTIONS(575),
        [sym_comment] = ACTIONS(73),
    },
    [253] = {
        [anon_sym_COMMA] = ACTIONS(577),
        [anon_sym_RPAREN] = ACTIONS(579),
        [anon_sym_EQ] = ACTIONS(571),
        [sym_comment] = ACTIONS(73),
    },
    [254] = {
        [anon_sym_COMMA] = ACTIONS(577),
        [anon_sym_RPAREN] = ACTIONS(579),
        [sym_comment] = ACTIONS(73),
    },
    [255] = {
        [anon_sym_COMMA] = ACTIONS(581),
        [anon_sym_RPAREN] = ACTIONS(579),
        [sym_comment] = ACTIONS(73),
    },
    [256] = {
        [anon_sym_RPAREN] = ACTIONS(579),
        [sym_comment] = ACTIONS(73),
    },
    [257] = {
        [anon_sym_COLON] = ACTIONS(583),
        [sym_comment] = ACTIONS(73),
    },
    [258] = {
        [sym_dictionary_splat_parameter] = STATE(260),
        [anon_sym_STAR] = ACTIONS(585),
        [sym_comment] = ACTIONS(73),
    },
    [259] = {
        [anon_sym_STAR] = ACTIONS(563),
        [sym_comment] = ACTIONS(73),
    },
    [260] = {
        [anon_sym_RPAREN] = ACTIONS(587),
        [sym_comment] = ACTIONS(73),
    },
    [261] = {
        [anon_sym_COLON] = ACTIONS(589),
        [sym_comment] = ACTIONS(73),
    },
    [262] = {
        [sym_identifier] = ACTIONS(591),
        [sym_comment] = ACTIONS(73),
    },
    [263] = {
        [anon_sym_RPAREN] = ACTIONS(593),
        [sym_comment] = ACTIONS(73),
    },
    [264] = {
        [anon_sym_RPAREN] = ACTIONS(595),
        [anon_sym_STAR] = ACTIONS(597),
        [sym_identifier] = ACTIONS(599),
        [sym_comment] = ACTIONS(73),
    },
    [265] = {
        [anon_sym_COLON] = ACTIONS(601),
        [sym_comment] = ACTIONS(73),
    },
    [266] = {
        [sym__expression] = STATE(267),
        [sym_binary_operator] = STATE(36),
        [sym_subscript] = STATE(36),
        [sym_call] = STATE(36),
        [sym_list] = STATE(36),
        [sym_list_comprehension] = STATE(36),
        [sym_dictionary] = STATE(36),
        [sym_dictionary_comprehension] = STATE(36),
        [anon_sym_LBRACK] = ACTIONS(117),
        [anon_sym_LBRACE] = ACTIONS(119),
        [sym_number] = ACTIONS(121),
        [sym_identifier] = ACTIONS(121),
        [sym_comment] = ACTIONS(73),
    },
    [267] = {
        [anon_sym_COMMA] = ACTIONS(603),
        [anon_sym_LPAREN] = ACTIONS(209),
        [anon_sym_RPAREN] = ACTIONS(603),
        [anon_sym_PLUS] = ACTIONS(211),
        [anon_sym_LBRACK] = ACTIONS(213),
        [sym_comment] = ACTIONS(73),
    },
    [268] = {
        [anon_sym_COLON] = ACTIONS(605),
        [sym_comment] = ACTIONS(73),
    },
    [269] = {
        [sym_dictionary_splat_parameter] = STATE(270),
        [anon_sym_STAR] = ACTIONS(585),
        [sym_comment] = ACTIONS(73),
    },
    [270] = {
        [anon_sym_RPAREN] = ACTIONS(595),
        [sym_comment] = ACTIONS(73),
    },
    [271] = {
        [anon_sym_RPAREN] = ACTIONS(579),
        [anon_sym_STAR] = ACTIONS(607),
        [sym_identifier] = ACTIONS(609),
        [sym_comment] = ACTIONS(73),
    },
    [272] = {
        [anon_sym_COMMA] = ACTIONS(611),
        [anon_sym_RPAREN] = ACTIONS(611),
        [sym_comment] = ACTIONS(73),
    },
    [273] = {
        [aux_sym_with_statement_repeat1] = STATE(279),
        [anon_sym_COMMA] = ACTIONS(613),
        [anon_sym_COLON] = ACTIONS(615),
        [sym_comment] = ACTIONS(73),
    },
    [274] = {
        [anon_sym_COMMA] = ACTIONS(617),
        [anon_sym_COLON] = ACTIONS(617),
        [anon_sym_as] = ACTIONS(619),
        [anon_sym_LPAREN] = ACTIONS(209),
        [anon_sym_PLUS] = ACTIONS(211),
        [anon_sym_LBRACK] = ACTIONS(213),
        [sym_comment] = ACTIONS(73),
    },
    [275] = {
        [sym__expression] = STATE(276),
        [sym_binary_operator] = STATE(36),
        [sym_subscript] = STATE(36),
        [sym_call] = STATE(36),
        [sym_list] = STATE(36),
        [sym_list_comprehension] = STATE(36),
        [sym_dictionary] = STATE(36),
        [sym_dictionary_comprehension] = STATE(36),
        [anon_sym_LBRACK] = ACTIONS(117),
        [anon_sym_LBRACE] = ACTIONS(119),
        [sym_number] = ACTIONS(121),
        [sym_identifier] = ACTIONS(121),
        [sym_comment] = ACTIONS(73),
    },
    [276] = {
        [anon_sym_COMMA] = ACTIONS(621),
        [anon_sym_COLON] = ACTIONS(621),
        [anon_sym_LPAREN] = ACTIONS(209),
        [anon_sym_PLUS] = ACTIONS(211),
        [anon_sym_LBRACK] = ACTIONS(213),
        [sym_comment] = ACTIONS(73),
    },
    [277] = {
        [sym_with_item] = STATE(285),
        [sym__expression] = STATE(274),
        [sym_binary_operator] = STATE(36),
        [sym_subscript] = STATE(36),
        [sym_call] = STATE(36),
        [sym_list] = STATE(36),
        [sym_list_comprehension] = STATE(36),
        [sym_dictionary] = STATE(36),
        [sym_dictionary_comprehension] = STATE(36),
        [anon_sym_LBRACK] = ACTIONS(117),
        [anon_sym_LBRACE] = ACTIONS(119),
        [sym_number] = ACTIONS(121),
        [sym_identifier] = ACTIONS(121),
        [sym_comment] = ACTIONS(73),
    },
    [278] = {
        [sym__simple_statement] = STATE(235),
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
        [sym__indent] = ACTIONS(529),
    },
    [279] = {
        [anon_sym_COMMA] = ACTIONS(623),
        [anon_sym_COLON] = ACTIONS(625),
        [sym_comment] = ACTIONS(73),
    },
    [280] = {
        [sym_with_item] = STATE(283),
        [sym__expression] = STATE(274),
        [sym_binary_operator] = STATE(36),
        [sym_subscript] = STATE(36),
        [sym_call] = STATE(36),
        [sym_list] = STATE(36),
        [sym_list_comprehension] = STATE(36),
        [sym_dictionary] = STATE(36),
        [sym_dictionary_comprehension] = STATE(36),
        [anon_sym_LBRACK] = ACTIONS(117),
        [anon_sym_LBRACE] = ACTIONS(119),
        [sym_number] = ACTIONS(121),
        [sym_identifier] = ACTIONS(121),
        [sym_comment] = ACTIONS(73),
    },
    [281] = {
        [sym__simple_statement] = STATE(235),
        [sym_print_statement] = STATE(5),
        [sym_expression_statement] = STATE(5),
        [sym_return_statement] = STATE(5),
        [sym_delete_statement] = STATE(5),
        [sym__suite] = STATE(282),
        [sym__expression] = STATE(23),
        [sym_binary_operator] = STATE(16),
        [sym_subscript] = STATE(16),
        [sym_call] = STATE(16),
        [sym_list] = STATE(16),
        [sym_list_comprehension] = STATE(16),
        [sym_dictionary] = STATE(16),
        [sym_dictionary_comprehension] = STATE(16),
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
        [sym__indent] = ACTIONS(529),
    },
    [282] = {
        [anon_sym_print] = ACTIONS(627),
        [anon_sym_return] = ACTIONS(627),
        [anon_sym_del] = ACTIONS(627),
        [sym_pass_statement] = ACTIONS(627),
        [sym_break_statement] = ACTIONS(627),
        [sym_continue_statement] = ACTIONS(627),
        [anon_sym_if] = ACTIONS(627),
        [anon_sym_for] = ACTIONS(627),
        [anon_sym_while] = ACTIONS(627),
        [anon_sym_try] = ACTIONS(627),
        [anon_sym_with] = ACTIONS(627),
        [anon_sym_def] = ACTIONS(627),
        [anon_sym_class] = ACTIONS(627),
        [anon_sym_AT] = ACTIONS(629),
        [anon_sym_LBRACK] = ACTIONS(629),
        [anon_sym_LBRACE] = ACTIONS(629),
        [sym_number] = ACTIONS(627),
        [sym_identifier] = ACTIONS(631),
        [sym_comment] = ACTIONS(73),
        [sym__dedent] = ACTIONS(629),
    },
    [283] = {
        [anon_sym_COMMA] = ACTIONS(633),
        [anon_sym_COLON] = ACTIONS(633),
        [sym_comment] = ACTIONS(73),
    },
    [284] = {
        [anon_sym_print] = ACTIONS(635),
        [anon_sym_return] = ACTIONS(635),
        [anon_sym_del] = ACTIONS(635),
        [sym_pass_statement] = ACTIONS(635),
        [sym_break_statement] = ACTIONS(635),
        [sym_continue_statement] = ACTIONS(635),
        [anon_sym_if] = ACTIONS(635),
        [anon_sym_for] = ACTIONS(635),
        [anon_sym_while] = ACTIONS(635),
        [anon_sym_try] = ACTIONS(635),
        [anon_sym_with] = ACTIONS(635),
        [anon_sym_def] = ACTIONS(635),
        [anon_sym_class] = ACTIONS(635),
        [anon_sym_AT] = ACTIONS(637),
        [anon_sym_LBRACK] = ACTIONS(637),
        [anon_sym_LBRACE] = ACTIONS(637),
        [sym_number] = ACTIONS(635),
        [sym_identifier] = ACTIONS(639),
        [sym_comment] = ACTIONS(73),
        [sym__dedent] = ACTIONS(637),
    },
    [285] = {
        [anon_sym_COMMA] = ACTIONS(641),
        [anon_sym_COLON] = ACTIONS(641),
        [sym_comment] = ACTIONS(73),
    },
    [286] = {
        [sym__simple_statement] = STATE(288),
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
        [sym__indent] = ACTIONS(643),
    },
    [287] = {
        [sym__statement] = STATE(218),
        [sym__simple_statement] = STATE(219),
        [sym_print_statement] = STATE(5),
        [sym_expression_statement] = STATE(5),
        [sym_return_statement] = STATE(5),
        [sym_delete_statement] = STATE(5),
        [sym__compound_statement] = STATE(220),
        [sym_if_statement] = STATE(221),
        [sym_for_statement] = STATE(221),
        [sym_while_statement] = STATE(221),
        [sym_try_statement] = STATE(221),
        [sym_with_statement] = STATE(221),
        [sym_function_definition] = STATE(221),
        [sym_class_definition] = STATE(221),
        [sym_decorated_definition] = STATE(221),
        [sym_decorator] = STATE(22),
        [sym__expression] = STATE(23),
        [sym_binary_operator] = STATE(16),
        [sym_subscript] = STATE(16),
        [sym_call] = STATE(16),
        [sym_list] = STATE(16),
        [sym_list_comprehension] = STATE(16),
        [sym_dictionary] = STATE(16),
        [sym_dictionary_comprehension] = STATE(16),
        [aux_sym_module_repeat1] = STATE(312),
        [aux_sym_decorated_definition_repeat1] = STATE(223),
        [anon_sym_print] = ACTIONS(83),
        [anon_sym_return] = ACTIONS(85),
        [anon_sym_del] = ACTIONS(87),
        [sym_pass_statement] = ACTIONS(89),
        [sym_break_statement] = ACTIONS(89),
        [sym_continue_statement] = ACTIONS(89),
        [anon_sym_if] = ACTIONS(477),
        [anon_sym_for] = ACTIONS(479),
        [anon_sym_while] = ACTIONS(481),
        [anon_sym_try] = ACTIONS(483),
        [anon_sym_with] = ACTIONS(485),
        [anon_sym_def] = ACTIONS(487),
        [anon_sym_class] = ACTIONS(489),
        [anon_sym_AT] = ACTIONS(105),
        [anon_sym_LBRACK] = ACTIONS(107),
        [anon_sym_LBRACE] = ACTIONS(109),
        [sym_number] = ACTIONS(111),
        [sym_identifier] = ACTIONS(113),
        [sym_comment] = ACTIONS(73),
        [sym__dedent] = ACTIONS(645),
    },
    [288] = {
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(645),
    },
    [289] = {
        [sym_except_clause] = STATE(292),
        [sym_finally_clause] = STATE(293),
        [aux_sym_try_statement_repeat1] = STATE(294),
        [anon_sym_except] = ACTIONS(647),
        [anon_sym_finally] = ACTIONS(649),
        [sym_comment] = ACTIONS(73),
    },
    [290] = {
        [sym__expression] = STATE(304),
        [sym_binary_operator] = STATE(36),
        [sym_subscript] = STATE(36),
        [sym_call] = STATE(36),
        [sym_list] = STATE(36),
        [sym_list_comprehension] = STATE(36),
        [sym_dictionary] = STATE(36),
        [sym_dictionary_comprehension] = STATE(36),
        [anon_sym_LBRACK] = ACTIONS(117),
        [anon_sym_LBRACE] = ACTIONS(119),
        [sym_number] = ACTIONS(121),
        [sym_identifier] = ACTIONS(121),
        [sym_comment] = ACTIONS(73),
    },
    [291] = {
        [anon_sym_COLON] = ACTIONS(651),
        [sym_comment] = ACTIONS(73),
    },
    [292] = {
        [anon_sym_print] = ACTIONS(653),
        [anon_sym_return] = ACTIONS(653),
        [anon_sym_del] = ACTIONS(653),
        [sym_pass_statement] = ACTIONS(653),
        [sym_break_statement] = ACTIONS(653),
        [sym_continue_statement] = ACTIONS(653),
        [anon_sym_if] = ACTIONS(653),
        [anon_sym_else] = ACTIONS(653),
        [anon_sym_for] = ACTIONS(653),
        [anon_sym_while] = ACTIONS(653),
        [anon_sym_try] = ACTIONS(653),
        [anon_sym_except] = ACTIONS(653),
        [anon_sym_finally] = ACTIONS(653),
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
    [293] = {
        [anon_sym_print] = ACTIONS(659),
        [anon_sym_return] = ACTIONS(659),
        [anon_sym_del] = ACTIONS(659),
        [sym_pass_statement] = ACTIONS(659),
        [sym_break_statement] = ACTIONS(659),
        [sym_continue_statement] = ACTIONS(659),
        [anon_sym_if] = ACTIONS(659),
        [anon_sym_for] = ACTIONS(659),
        [anon_sym_while] = ACTIONS(659),
        [anon_sym_try] = ACTIONS(659),
        [anon_sym_with] = ACTIONS(659),
        [anon_sym_def] = ACTIONS(659),
        [anon_sym_class] = ACTIONS(659),
        [anon_sym_AT] = ACTIONS(661),
        [anon_sym_LBRACK] = ACTIONS(661),
        [anon_sym_LBRACE] = ACTIONS(661),
        [sym_number] = ACTIONS(659),
        [sym_identifier] = ACTIONS(663),
        [sym_comment] = ACTIONS(73),
        [sym__dedent] = ACTIONS(661),
    },
    [294] = {
        [sym_else_clause] = STATE(296),
        [sym_except_clause] = STATE(297),
        [sym_finally_clause] = STATE(298),
        [anon_sym_print] = ACTIONS(659),
        [anon_sym_return] = ACTIONS(659),
        [anon_sym_del] = ACTIONS(659),
        [sym_pass_statement] = ACTIONS(659),
        [sym_break_statement] = ACTIONS(659),
        [sym_continue_statement] = ACTIONS(659),
        [anon_sym_if] = ACTIONS(659),
        [anon_sym_else] = ACTIONS(665),
        [anon_sym_for] = ACTIONS(659),
        [anon_sym_while] = ACTIONS(659),
        [anon_sym_try] = ACTIONS(659),
        [anon_sym_except] = ACTIONS(667),
        [anon_sym_finally] = ACTIONS(669),
        [anon_sym_with] = ACTIONS(659),
        [anon_sym_def] = ACTIONS(659),
        [anon_sym_class] = ACTIONS(659),
        [anon_sym_AT] = ACTIONS(661),
        [anon_sym_LBRACK] = ACTIONS(661),
        [anon_sym_LBRACE] = ACTIONS(661),
        [sym_number] = ACTIONS(659),
        [sym_identifier] = ACTIONS(663),
        [sym_comment] = ACTIONS(73),
        [sym__dedent] = ACTIONS(661),
    },
    [295] = {
        [anon_sym_COLON] = ACTIONS(671),
        [sym_comment] = ACTIONS(73),
    },
    [296] = {
        [sym_finally_clause] = STATE(299),
        [anon_sym_print] = ACTIONS(673),
        [anon_sym_return] = ACTIONS(673),
        [anon_sym_del] = ACTIONS(673),
        [sym_pass_statement] = ACTIONS(673),
        [sym_break_statement] = ACTIONS(673),
        [sym_continue_statement] = ACTIONS(673),
        [anon_sym_if] = ACTIONS(673),
        [anon_sym_for] = ACTIONS(673),
        [anon_sym_while] = ACTIONS(673),
        [anon_sym_try] = ACTIONS(673),
        [anon_sym_finally] = ACTIONS(669),
        [anon_sym_with] = ACTIONS(673),
        [anon_sym_def] = ACTIONS(673),
        [anon_sym_class] = ACTIONS(673),
        [anon_sym_AT] = ACTIONS(675),
        [anon_sym_LBRACK] = ACTIONS(675),
        [anon_sym_LBRACE] = ACTIONS(675),
        [sym_number] = ACTIONS(673),
        [sym_identifier] = ACTIONS(677),
        [sym_comment] = ACTIONS(73),
        [sym__dedent] = ACTIONS(675),
    },
    [297] = {
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
    [298] = {
        [anon_sym_print] = ACTIONS(673),
        [anon_sym_return] = ACTIONS(673),
        [anon_sym_del] = ACTIONS(673),
        [sym_pass_statement] = ACTIONS(673),
        [sym_break_statement] = ACTIONS(673),
        [sym_continue_statement] = ACTIONS(673),
        [anon_sym_if] = ACTIONS(673),
        [anon_sym_for] = ACTIONS(673),
        [anon_sym_while] = ACTIONS(673),
        [anon_sym_try] = ACTIONS(673),
        [anon_sym_with] = ACTIONS(673),
        [anon_sym_def] = ACTIONS(673),
        [anon_sym_class] = ACTIONS(673),
        [anon_sym_AT] = ACTIONS(675),
        [anon_sym_LBRACK] = ACTIONS(675),
        [anon_sym_LBRACE] = ACTIONS(675),
        [sym_number] = ACTIONS(673),
        [sym_identifier] = ACTIONS(677),
        [sym_comment] = ACTIONS(73),
        [sym__dedent] = ACTIONS(675),
    },
    [299] = {
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
    [300] = {
        [sym__simple_statement] = STATE(235),
        [sym_print_statement] = STATE(5),
        [sym_expression_statement] = STATE(5),
        [sym_return_statement] = STATE(5),
        [sym_delete_statement] = STATE(5),
        [sym__suite] = STATE(301),
        [sym__expression] = STATE(23),
        [sym_binary_operator] = STATE(16),
        [sym_subscript] = STATE(16),
        [sym_call] = STATE(16),
        [sym_list] = STATE(16),
        [sym_list_comprehension] = STATE(16),
        [sym_dictionary] = STATE(16),
        [sym_dictionary_comprehension] = STATE(16),
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
        [sym__indent] = ACTIONS(529),
    },
    [301] = {
        [anon_sym_print] = ACTIONS(691),
        [anon_sym_return] = ACTIONS(691),
        [anon_sym_del] = ACTIONS(691),
        [sym_pass_statement] = ACTIONS(691),
        [sym_break_statement] = ACTIONS(691),
        [sym_continue_statement] = ACTIONS(691),
        [anon_sym_if] = ACTIONS(691),
        [anon_sym_for] = ACTIONS(691),
        [anon_sym_while] = ACTIONS(691),
        [anon_sym_try] = ACTIONS(691),
        [anon_sym_finally] = ACTIONS(691),
        [anon_sym_with] = ACTIONS(691),
        [anon_sym_def] = ACTIONS(691),
        [anon_sym_class] = ACTIONS(691),
        [anon_sym_AT] = ACTIONS(693),
        [anon_sym_LBRACK] = ACTIONS(693),
        [anon_sym_LBRACE] = ACTIONS(693),
        [sym_number] = ACTIONS(691),
        [sym_identifier] = ACTIONS(695),
        [sym_comment] = ACTIONS(73),
        [sym__dedent] = ACTIONS(693),
    },
    [302] = {
        [sym__simple_statement] = STATE(235),
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
        [sym__indent] = ACTIONS(529),
    },
    [303] = {
        [anon_sym_print] = ACTIONS(697),
        [anon_sym_return] = ACTIONS(697),
        [anon_sym_del] = ACTIONS(697),
        [sym_pass_statement] = ACTIONS(697),
        [sym_break_statement] = ACTIONS(697),
        [sym_continue_statement] = ACTIONS(697),
        [anon_sym_if] = ACTIONS(697),
        [anon_sym_for] = ACTIONS(697),
        [anon_sym_while] = ACTIONS(697),
        [anon_sym_try] = ACTIONS(697),
        [anon_sym_with] = ACTIONS(697),
        [anon_sym_def] = ACTIONS(697),
        [anon_sym_class] = ACTIONS(697),
        [anon_sym_AT] = ACTIONS(699),
        [anon_sym_LBRACK] = ACTIONS(699),
        [anon_sym_LBRACE] = ACTIONS(699),
        [sym_number] = ACTIONS(697),
        [sym_identifier] = ACTIONS(701),
        [sym_comment] = ACTIONS(73),
        [sym__dedent] = ACTIONS(699),
    },
    [304] = {
        [anon_sym_COMMA] = ACTIONS(703),
        [anon_sym_COLON] = ACTIONS(705),
        [anon_sym_as] = ACTIONS(703),
        [anon_sym_LPAREN] = ACTIONS(209),
        [anon_sym_PLUS] = ACTIONS(211),
        [anon_sym_LBRACK] = ACTIONS(213),
        [sym_comment] = ACTIONS(73),
    },
    [305] = {
        [sym__expression] = STATE(307),
        [sym_binary_operator] = STATE(36),
        [sym_subscript] = STATE(36),
        [sym_call] = STATE(36),
        [sym_list] = STATE(36),
        [sym_list_comprehension] = STATE(36),
        [sym_dictionary] = STATE(36),
        [sym_dictionary_comprehension] = STATE(36),
        [anon_sym_LBRACK] = ACTIONS(117),
        [anon_sym_LBRACE] = ACTIONS(119),
        [sym_number] = ACTIONS(121),
        [sym_identifier] = ACTIONS(121),
        [sym_comment] = ACTIONS(73),
    },
    [306] = {
        [sym__simple_statement] = STATE(235),
        [sym_print_statement] = STATE(5),
        [sym_expression_statement] = STATE(5),
        [sym_return_statement] = STATE(5),
        [sym_delete_statement] = STATE(5),
        [sym__suite] = STATE(310),
        [sym__expression] = STATE(23),
        [sym_binary_operator] = STATE(16),
        [sym_subscript] = STATE(16),
        [sym_call] = STATE(16),
        [sym_list] = STATE(16),
        [sym_list_comprehension] = STATE(16),
        [sym_dictionary] = STATE(16),
        [sym_dictionary_comprehension] = STATE(16),
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
        [sym__indent] = ACTIONS(529),
    },
    [307] = {
        [anon_sym_COLON] = ACTIONS(707),
        [anon_sym_LPAREN] = ACTIONS(209),
        [anon_sym_PLUS] = ACTIONS(211),
        [anon_sym_LBRACK] = ACTIONS(213),
        [sym_comment] = ACTIONS(73),
    },
    [308] = {
        [sym__simple_statement] = STATE(235),
        [sym_print_statement] = STATE(5),
        [sym_expression_statement] = STATE(5),
        [sym_return_statement] = STATE(5),
        [sym_delete_statement] = STATE(5),
        [sym__suite] = STATE(309),
        [sym__expression] = STATE(23),
        [sym_binary_operator] = STATE(16),
        [sym_subscript] = STATE(16),
        [sym_call] = STATE(16),
        [sym_list] = STATE(16),
        [sym_list_comprehension] = STATE(16),
        [sym_dictionary] = STATE(16),
        [sym_dictionary_comprehension] = STATE(16),
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
        [sym__indent] = ACTIONS(529),
    },
    [309] = {
        [anon_sym_print] = ACTIONS(709),
        [anon_sym_return] = ACTIONS(709),
        [anon_sym_del] = ACTIONS(709),
        [sym_pass_statement] = ACTIONS(709),
        [sym_break_statement] = ACTIONS(709),
        [sym_continue_statement] = ACTIONS(709),
        [anon_sym_if] = ACTIONS(709),
        [anon_sym_else] = ACTIONS(709),
        [anon_sym_for] = ACTIONS(709),
        [anon_sym_while] = ACTIONS(709),
        [anon_sym_try] = ACTIONS(709),
        [anon_sym_except] = ACTIONS(709),
        [anon_sym_finally] = ACTIONS(709),
        [anon_sym_with] = ACTIONS(709),
        [anon_sym_def] = ACTIONS(709),
        [anon_sym_class] = ACTIONS(709),
        [anon_sym_AT] = ACTIONS(711),
        [anon_sym_LBRACK] = ACTIONS(711),
        [anon_sym_LBRACE] = ACTIONS(711),
        [sym_number] = ACTIONS(709),
        [sym_identifier] = ACTIONS(713),
        [sym_comment] = ACTIONS(73),
        [sym__dedent] = ACTIONS(711),
    },
    [310] = {
        [anon_sym_print] = ACTIONS(715),
        [anon_sym_return] = ACTIONS(715),
        [anon_sym_del] = ACTIONS(715),
        [sym_pass_statement] = ACTIONS(715),
        [sym_break_statement] = ACTIONS(715),
        [sym_continue_statement] = ACTIONS(715),
        [anon_sym_if] = ACTIONS(715),
        [anon_sym_else] = ACTIONS(715),
        [anon_sym_for] = ACTIONS(715),
        [anon_sym_while] = ACTIONS(715),
        [anon_sym_try] = ACTIONS(715),
        [anon_sym_except] = ACTIONS(715),
        [anon_sym_finally] = ACTIONS(715),
        [anon_sym_with] = ACTIONS(715),
        [anon_sym_def] = ACTIONS(715),
        [anon_sym_class] = ACTIONS(715),
        [anon_sym_AT] = ACTIONS(717),
        [anon_sym_LBRACK] = ACTIONS(717),
        [anon_sym_LBRACE] = ACTIONS(717),
        [sym_number] = ACTIONS(715),
        [sym_identifier] = ACTIONS(719),
        [sym_comment] = ACTIONS(73),
        [sym__dedent] = ACTIONS(717),
    },
    [311] = {
        [anon_sym_except] = ACTIONS(499),
        [anon_sym_finally] = ACTIONS(499),
        [sym_comment] = ACTIONS(73),
    },
    [312] = {
        [sym__statement] = STATE(226),
        [sym__simple_statement] = STATE(219),
        [sym_print_statement] = STATE(5),
        [sym_expression_statement] = STATE(5),
        [sym_return_statement] = STATE(5),
        [sym_delete_statement] = STATE(5),
        [sym__compound_statement] = STATE(220),
        [sym_if_statement] = STATE(221),
        [sym_for_statement] = STATE(221),
        [sym_while_statement] = STATE(221),
        [sym_try_statement] = STATE(221),
        [sym_with_statement] = STATE(221),
        [sym_function_definition] = STATE(221),
        [sym_class_definition] = STATE(221),
        [sym_decorated_definition] = STATE(221),
        [sym_decorator] = STATE(22),
        [sym__expression] = STATE(23),
        [sym_binary_operator] = STATE(16),
        [sym_subscript] = STATE(16),
        [sym_call] = STATE(16),
        [sym_list] = STATE(16),
        [sym_list_comprehension] = STATE(16),
        [sym_dictionary] = STATE(16),
        [sym_dictionary_comprehension] = STATE(16),
        [aux_sym_decorated_definition_repeat1] = STATE(223),
        [anon_sym_print] = ACTIONS(83),
        [anon_sym_return] = ACTIONS(85),
        [anon_sym_del] = ACTIONS(87),
        [sym_pass_statement] = ACTIONS(89),
        [sym_break_statement] = ACTIONS(89),
        [sym_continue_statement] = ACTIONS(89),
        [anon_sym_if] = ACTIONS(477),
        [anon_sym_for] = ACTIONS(479),
        [anon_sym_while] = ACTIONS(481),
        [anon_sym_try] = ACTIONS(483),
        [anon_sym_with] = ACTIONS(485),
        [anon_sym_def] = ACTIONS(487),
        [anon_sym_class] = ACTIONS(489),
        [anon_sym_AT] = ACTIONS(105),
        [anon_sym_LBRACK] = ACTIONS(107),
        [anon_sym_LBRACE] = ACTIONS(109),
        [sym_number] = ACTIONS(111),
        [sym_identifier] = ACTIONS(113),
        [sym_comment] = ACTIONS(73),
        [sym__dedent] = ACTIONS(721),
    },
    [313] = {
        [anon_sym_except] = ACTIONS(519),
        [anon_sym_finally] = ACTIONS(519),
        [sym_comment] = ACTIONS(73),
    },
    [314] = {
        [anon_sym_COLON] = ACTIONS(723),
        [anon_sym_LPAREN] = ACTIONS(209),
        [anon_sym_PLUS] = ACTIONS(211),
        [anon_sym_LBRACK] = ACTIONS(213),
        [sym_comment] = ACTIONS(73),
    },
    [315] = {
        [sym__simple_statement] = STATE(235),
        [sym_print_statement] = STATE(5),
        [sym_expression_statement] = STATE(5),
        [sym_return_statement] = STATE(5),
        [sym_delete_statement] = STATE(5),
        [sym__suite] = STATE(316),
        [sym__expression] = STATE(23),
        [sym_binary_operator] = STATE(16),
        [sym_subscript] = STATE(16),
        [sym_call] = STATE(16),
        [sym_list] = STATE(16),
        [sym_list_comprehension] = STATE(16),
        [sym_dictionary] = STATE(16),
        [sym_dictionary_comprehension] = STATE(16),
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
        [sym__indent] = ACTIONS(529),
    },
    [316] = {
        [sym_else_clause] = STATE(317),
        [anon_sym_print] = ACTIONS(725),
        [anon_sym_return] = ACTIONS(725),
        [anon_sym_del] = ACTIONS(725),
        [sym_pass_statement] = ACTIONS(725),
        [sym_break_statement] = ACTIONS(725),
        [sym_continue_statement] = ACTIONS(725),
        [anon_sym_if] = ACTIONS(725),
        [anon_sym_else] = ACTIONS(665),
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
    [317] = {
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
    [318] = {
        [anon_sym_in] = ACTIONS(737),
        [sym_comment] = ACTIONS(73),
    },
    [319] = {
        [sym_expression_list] = STATE(320),
        [sym__expression] = STATE(108),
        [sym_binary_operator] = STATE(36),
        [sym_subscript] = STATE(36),
        [sym_call] = STATE(36),
        [sym_list] = STATE(36),
        [sym_list_comprehension] = STATE(36),
        [sym_dictionary] = STATE(36),
        [sym_dictionary_comprehension] = STATE(36),
        [anon_sym_LBRACK] = ACTIONS(117),
        [anon_sym_LBRACE] = ACTIONS(119),
        [sym_number] = ACTIONS(121),
        [sym_identifier] = ACTIONS(121),
        [sym_comment] = ACTIONS(73),
    },
    [320] = {
        [anon_sym_COLON] = ACTIONS(739),
        [sym_comment] = ACTIONS(73),
    },
    [321] = {
        [sym__simple_statement] = STATE(235),
        [sym_print_statement] = STATE(5),
        [sym_expression_statement] = STATE(5),
        [sym_return_statement] = STATE(5),
        [sym_delete_statement] = STATE(5),
        [sym__suite] = STATE(322),
        [sym__expression] = STATE(23),
        [sym_binary_operator] = STATE(16),
        [sym_subscript] = STATE(16),
        [sym_call] = STATE(16),
        [sym_list] = STATE(16),
        [sym_list_comprehension] = STATE(16),
        [sym_dictionary] = STATE(16),
        [sym_dictionary_comprehension] = STATE(16),
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
        [sym__indent] = ACTIONS(529),
    },
    [322] = {
        [sym_else_clause] = STATE(323),
        [anon_sym_print] = ACTIONS(741),
        [anon_sym_return] = ACTIONS(741),
        [anon_sym_del] = ACTIONS(741),
        [sym_pass_statement] = ACTIONS(741),
        [sym_break_statement] = ACTIONS(741),
        [sym_continue_statement] = ACTIONS(741),
        [anon_sym_if] = ACTIONS(741),
        [anon_sym_else] = ACTIONS(665),
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
        [sym_comment] = ACTIONS(73),
        [sym__dedent] = ACTIONS(743),
    },
    [323] = {
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
    [324] = {
        [anon_sym_COLON] = ACTIONS(753),
        [anon_sym_LPAREN] = ACTIONS(209),
        [anon_sym_PLUS] = ACTIONS(211),
        [anon_sym_LBRACK] = ACTIONS(213),
        [sym_comment] = ACTIONS(73),
    },
    [325] = {
        [sym__simple_statement] = STATE(235),
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
        [sym__indent] = ACTIONS(529),
    },
    [326] = {
        [sym_elif_clause] = STATE(328),
        [sym_else_clause] = STATE(329),
        [aux_sym_if_statement_repeat1] = STATE(330),
        [anon_sym_print] = ACTIONS(755),
        [anon_sym_return] = ACTIONS(755),
        [anon_sym_del] = ACTIONS(755),
        [sym_pass_statement] = ACTIONS(755),
        [sym_break_statement] = ACTIONS(755),
        [sym_continue_statement] = ACTIONS(755),
        [anon_sym_if] = ACTIONS(755),
        [anon_sym_elif] = ACTIONS(757),
        [anon_sym_else] = ACTIONS(665),
        [anon_sym_for] = ACTIONS(755),
        [anon_sym_while] = ACTIONS(755),
        [anon_sym_try] = ACTIONS(755),
        [anon_sym_with] = ACTIONS(755),
        [anon_sym_def] = ACTIONS(755),
        [anon_sym_class] = ACTIONS(755),
        [anon_sym_AT] = ACTIONS(759),
        [anon_sym_LBRACK] = ACTIONS(759),
        [anon_sym_LBRACE] = ACTIONS(759),
        [sym_number] = ACTIONS(755),
        [sym_identifier] = ACTIONS(761),
        [sym_comment] = ACTIONS(73),
        [sym__dedent] = ACTIONS(759),
    },
    [327] = {
        [sym__expression] = STATE(333),
        [sym_binary_operator] = STATE(36),
        [sym_subscript] = STATE(36),
        [sym_call] = STATE(36),
        [sym_list] = STATE(36),
        [sym_list_comprehension] = STATE(36),
        [sym_dictionary] = STATE(36),
        [sym_dictionary_comprehension] = STATE(36),
        [anon_sym_LBRACK] = ACTIONS(117),
        [anon_sym_LBRACE] = ACTIONS(119),
        [sym_number] = ACTIONS(121),
        [sym_identifier] = ACTIONS(121),
        [sym_comment] = ACTIONS(73),
    },
    [328] = {
        [anon_sym_print] = ACTIONS(763),
        [anon_sym_return] = ACTIONS(763),
        [anon_sym_del] = ACTIONS(763),
        [sym_pass_statement] = ACTIONS(763),
        [sym_break_statement] = ACTIONS(763),
        [sym_continue_statement] = ACTIONS(763),
        [anon_sym_if] = ACTIONS(763),
        [anon_sym_elif] = ACTIONS(763),
        [anon_sym_else] = ACTIONS(763),
        [anon_sym_for] = ACTIONS(763),
        [anon_sym_while] = ACTIONS(763),
        [anon_sym_try] = ACTIONS(763),
        [anon_sym_with] = ACTIONS(763),
        [anon_sym_def] = ACTIONS(763),
        [anon_sym_class] = ACTIONS(763),
        [anon_sym_AT] = ACTIONS(765),
        [anon_sym_LBRACK] = ACTIONS(765),
        [anon_sym_LBRACE] = ACTIONS(765),
        [sym_number] = ACTIONS(763),
        [sym_identifier] = ACTIONS(767),
        [sym_comment] = ACTIONS(73),
        [sym__dedent] = ACTIONS(765),
    },
    [329] = {
        [anon_sym_print] = ACTIONS(769),
        [anon_sym_return] = ACTIONS(769),
        [anon_sym_del] = ACTIONS(769),
        [sym_pass_statement] = ACTIONS(769),
        [sym_break_statement] = ACTIONS(769),
        [sym_continue_statement] = ACTIONS(769),
        [anon_sym_if] = ACTIONS(769),
        [anon_sym_for] = ACTIONS(769),
        [anon_sym_while] = ACTIONS(769),
        [anon_sym_try] = ACTIONS(769),
        [anon_sym_with] = ACTIONS(769),
        [anon_sym_def] = ACTIONS(769),
        [anon_sym_class] = ACTIONS(769),
        [anon_sym_AT] = ACTIONS(771),
        [anon_sym_LBRACK] = ACTIONS(771),
        [anon_sym_LBRACE] = ACTIONS(771),
        [sym_number] = ACTIONS(769),
        [sym_identifier] = ACTIONS(773),
        [sym_comment] = ACTIONS(73),
        [sym__dedent] = ACTIONS(771),
    },
    [330] = {
        [sym_elif_clause] = STATE(331),
        [sym_else_clause] = STATE(332),
        [anon_sym_print] = ACTIONS(769),
        [anon_sym_return] = ACTIONS(769),
        [anon_sym_del] = ACTIONS(769),
        [sym_pass_statement] = ACTIONS(769),
        [sym_break_statement] = ACTIONS(769),
        [sym_continue_statement] = ACTIONS(769),
        [anon_sym_if] = ACTIONS(769),
        [anon_sym_elif] = ACTIONS(757),
        [anon_sym_else] = ACTIONS(665),
        [anon_sym_for] = ACTIONS(769),
        [anon_sym_while] = ACTIONS(769),
        [anon_sym_try] = ACTIONS(769),
        [anon_sym_with] = ACTIONS(769),
        [anon_sym_def] = ACTIONS(769),
        [anon_sym_class] = ACTIONS(769),
        [anon_sym_AT] = ACTIONS(771),
        [anon_sym_LBRACK] = ACTIONS(771),
        [anon_sym_LBRACE] = ACTIONS(771),
        [sym_number] = ACTIONS(769),
        [sym_identifier] = ACTIONS(773),
        [sym_comment] = ACTIONS(73),
        [sym__dedent] = ACTIONS(771),
    },
    [331] = {
        [anon_sym_print] = ACTIONS(775),
        [anon_sym_return] = ACTIONS(775),
        [anon_sym_del] = ACTIONS(775),
        [sym_pass_statement] = ACTIONS(775),
        [sym_break_statement] = ACTIONS(775),
        [sym_continue_statement] = ACTIONS(775),
        [anon_sym_if] = ACTIONS(775),
        [anon_sym_elif] = ACTIONS(775),
        [anon_sym_else] = ACTIONS(775),
        [anon_sym_for] = ACTIONS(775),
        [anon_sym_while] = ACTIONS(775),
        [anon_sym_try] = ACTIONS(775),
        [anon_sym_with] = ACTIONS(775),
        [anon_sym_def] = ACTIONS(775),
        [anon_sym_class] = ACTIONS(775),
        [anon_sym_AT] = ACTIONS(777),
        [anon_sym_LBRACK] = ACTIONS(777),
        [anon_sym_LBRACE] = ACTIONS(777),
        [sym_number] = ACTIONS(775),
        [sym_identifier] = ACTIONS(779),
        [sym_comment] = ACTIONS(73),
        [sym__dedent] = ACTIONS(777),
    },
    [332] = {
        [anon_sym_print] = ACTIONS(781),
        [anon_sym_return] = ACTIONS(781),
        [anon_sym_del] = ACTIONS(781),
        [sym_pass_statement] = ACTIONS(781),
        [sym_break_statement] = ACTIONS(781),
        [sym_continue_statement] = ACTIONS(781),
        [anon_sym_if] = ACTIONS(781),
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
    [333] = {
        [anon_sym_COLON] = ACTIONS(787),
        [anon_sym_LPAREN] = ACTIONS(209),
        [anon_sym_PLUS] = ACTIONS(211),
        [anon_sym_LBRACK] = ACTIONS(213),
        [sym_comment] = ACTIONS(73),
    },
    [334] = {
        [sym__simple_statement] = STATE(235),
        [sym_print_statement] = STATE(5),
        [sym_expression_statement] = STATE(5),
        [sym_return_statement] = STATE(5),
        [sym_delete_statement] = STATE(5),
        [sym__suite] = STATE(335),
        [sym__expression] = STATE(23),
        [sym_binary_operator] = STATE(16),
        [sym_subscript] = STATE(16),
        [sym_call] = STATE(16),
        [sym_list] = STATE(16),
        [sym_list_comprehension] = STATE(16),
        [sym_dictionary] = STATE(16),
        [sym_dictionary_comprehension] = STATE(16),
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
        [sym__indent] = ACTIONS(529),
    },
    [335] = {
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
    [336] = {
        [ts_builtin_sym_end] = ACTIONS(541),
        [anon_sym_SEMI] = ACTIONS(541),
        [anon_sym_print] = ACTIONS(539),
        [anon_sym_return] = ACTIONS(539),
        [anon_sym_del] = ACTIONS(539),
        [sym_pass_statement] = ACTIONS(539),
        [sym_break_statement] = ACTIONS(539),
        [sym_continue_statement] = ACTIONS(539),
        [anon_sym_if] = ACTIONS(539),
        [anon_sym_for] = ACTIONS(539),
        [anon_sym_while] = ACTIONS(539),
        [anon_sym_try] = ACTIONS(539),
        [anon_sym_with] = ACTIONS(539),
        [anon_sym_def] = ACTIONS(539),
        [anon_sym_class] = ACTIONS(539),
        [anon_sym_AT] = ACTIONS(541),
        [anon_sym_LBRACK] = ACTIONS(541),
        [anon_sym_LBRACE] = ACTIONS(541),
        [sym_number] = ACTIONS(539),
        [sym_identifier] = ACTIONS(543),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(541),
    },
    [337] = {
        [sym_parameters] = STATE(338),
        [anon_sym_LPAREN] = ACTIONS(545),
        [sym_comment] = ACTIONS(73),
    },
    [338] = {
        [anon_sym_COLON] = ACTIONS(795),
        [sym_comment] = ACTIONS(73),
    },
    [339] = {
        [sym__simple_statement] = STATE(208),
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
        [sym__indent] = ACTIONS(471),
    },
    [340] = {
        [ts_builtin_sym_end] = ACTIONS(557),
        [anon_sym_SEMI] = ACTIONS(557),
        [anon_sym_print] = ACTIONS(555),
        [anon_sym_return] = ACTIONS(555),
        [anon_sym_del] = ACTIONS(555),
        [sym_pass_statement] = ACTIONS(555),
        [sym_break_statement] = ACTIONS(555),
        [sym_continue_statement] = ACTIONS(555),
        [anon_sym_if] = ACTIONS(555),
        [anon_sym_for] = ACTIONS(555),
        [anon_sym_while] = ACTIONS(555),
        [anon_sym_try] = ACTIONS(555),
        [anon_sym_with] = ACTIONS(555),
        [anon_sym_def] = ACTIONS(555),
        [anon_sym_class] = ACTIONS(555),
        [anon_sym_AT] = ACTIONS(557),
        [anon_sym_LBRACK] = ACTIONS(557),
        [anon_sym_LBRACE] = ACTIONS(557),
        [sym_number] = ACTIONS(555),
        [sym_identifier] = ACTIONS(559),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(557),
    },
    [341] = {
        [aux_sym_with_statement_repeat1] = STATE(343),
        [anon_sym_COMMA] = ACTIONS(613),
        [anon_sym_COLON] = ACTIONS(797),
        [sym_comment] = ACTIONS(73),
    },
    [342] = {
        [sym__simple_statement] = STATE(208),
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
        [sym__indent] = ACTIONS(471),
    },
    [343] = {
        [anon_sym_COMMA] = ACTIONS(623),
        [anon_sym_COLON] = ACTIONS(799),
        [sym_comment] = ACTIONS(73),
    },
    [344] = {
        [sym__simple_statement] = STATE(208),
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
        [sym__indent] = ACTIONS(471),
    },
    [345] = {
        [ts_builtin_sym_end] = ACTIONS(629),
        [anon_sym_SEMI] = ACTIONS(629),
        [anon_sym_print] = ACTIONS(627),
        [anon_sym_return] = ACTIONS(627),
        [anon_sym_del] = ACTIONS(627),
        [sym_pass_statement] = ACTIONS(627),
        [sym_break_statement] = ACTIONS(627),
        [sym_continue_statement] = ACTIONS(627),
        [anon_sym_if] = ACTIONS(627),
        [anon_sym_for] = ACTIONS(627),
        [anon_sym_while] = ACTIONS(627),
        [anon_sym_try] = ACTIONS(627),
        [anon_sym_with] = ACTIONS(627),
        [anon_sym_def] = ACTIONS(627),
        [anon_sym_class] = ACTIONS(627),
        [anon_sym_AT] = ACTIONS(629),
        [anon_sym_LBRACK] = ACTIONS(629),
        [anon_sym_LBRACE] = ACTIONS(629),
        [sym_number] = ACTIONS(627),
        [sym_identifier] = ACTIONS(631),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(629),
    },
    [346] = {
        [ts_builtin_sym_end] = ACTIONS(637),
        [anon_sym_SEMI] = ACTIONS(637),
        [anon_sym_print] = ACTIONS(635),
        [anon_sym_return] = ACTIONS(635),
        [anon_sym_del] = ACTIONS(635),
        [sym_pass_statement] = ACTIONS(635),
        [sym_break_statement] = ACTIONS(635),
        [sym_continue_statement] = ACTIONS(635),
        [anon_sym_if] = ACTIONS(635),
        [anon_sym_for] = ACTIONS(635),
        [anon_sym_while] = ACTIONS(635),
        [anon_sym_try] = ACTIONS(635),
        [anon_sym_with] = ACTIONS(635),
        [anon_sym_def] = ACTIONS(635),
        [anon_sym_class] = ACTIONS(635),
        [anon_sym_AT] = ACTIONS(637),
        [anon_sym_LBRACK] = ACTIONS(637),
        [anon_sym_LBRACE] = ACTIONS(637),
        [sym_number] = ACTIONS(635),
        [sym_identifier] = ACTIONS(639),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(637),
    },
    [347] = {
        [sym__simple_statement] = STATE(288),
        [sym_print_statement] = STATE(5),
        [sym_expression_statement] = STATE(5),
        [sym_return_statement] = STATE(5),
        [sym_delete_statement] = STATE(5),
        [sym__suite] = STATE(348),
        [sym__expression] = STATE(23),
        [sym_binary_operator] = STATE(16),
        [sym_subscript] = STATE(16),
        [sym_call] = STATE(16),
        [sym_list] = STATE(16),
        [sym_list_comprehension] = STATE(16),
        [sym_dictionary] = STATE(16),
        [sym_dictionary_comprehension] = STATE(16),
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
        [sym__indent] = ACTIONS(643),
    },
    [348] = {
        [sym_except_clause] = STATE(351),
        [sym_finally_clause] = STATE(352),
        [aux_sym_try_statement_repeat1] = STATE(353),
        [anon_sym_except] = ACTIONS(801),
        [anon_sym_finally] = ACTIONS(803),
        [sym_comment] = ACTIONS(73),
    },
    [349] = {
        [sym__expression] = STATE(363),
        [sym_binary_operator] = STATE(36),
        [sym_subscript] = STATE(36),
        [sym_call] = STATE(36),
        [sym_list] = STATE(36),
        [sym_list_comprehension] = STATE(36),
        [sym_dictionary] = STATE(36),
        [sym_dictionary_comprehension] = STATE(36),
        [anon_sym_LBRACK] = ACTIONS(117),
        [anon_sym_LBRACE] = ACTIONS(119),
        [sym_number] = ACTIONS(121),
        [sym_identifier] = ACTIONS(121),
        [sym_comment] = ACTIONS(73),
    },
    [350] = {
        [anon_sym_COLON] = ACTIONS(805),
        [sym_comment] = ACTIONS(73),
    },
    [351] = {
        [ts_builtin_sym_end] = ACTIONS(655),
        [anon_sym_SEMI] = ACTIONS(655),
        [anon_sym_print] = ACTIONS(653),
        [anon_sym_return] = ACTIONS(653),
        [anon_sym_del] = ACTIONS(653),
        [sym_pass_statement] = ACTIONS(653),
        [sym_break_statement] = ACTIONS(653),
        [sym_continue_statement] = ACTIONS(653),
        [anon_sym_if] = ACTIONS(653),
        [anon_sym_else] = ACTIONS(653),
        [anon_sym_for] = ACTIONS(653),
        [anon_sym_while] = ACTIONS(653),
        [anon_sym_try] = ACTIONS(653),
        [anon_sym_except] = ACTIONS(653),
        [anon_sym_finally] = ACTIONS(653),
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
    [352] = {
        [ts_builtin_sym_end] = ACTIONS(661),
        [anon_sym_SEMI] = ACTIONS(661),
        [anon_sym_print] = ACTIONS(659),
        [anon_sym_return] = ACTIONS(659),
        [anon_sym_del] = ACTIONS(659),
        [sym_pass_statement] = ACTIONS(659),
        [sym_break_statement] = ACTIONS(659),
        [sym_continue_statement] = ACTIONS(659),
        [anon_sym_if] = ACTIONS(659),
        [anon_sym_for] = ACTIONS(659),
        [anon_sym_while] = ACTIONS(659),
        [anon_sym_try] = ACTIONS(659),
        [anon_sym_with] = ACTIONS(659),
        [anon_sym_def] = ACTIONS(659),
        [anon_sym_class] = ACTIONS(659),
        [anon_sym_AT] = ACTIONS(661),
        [anon_sym_LBRACK] = ACTIONS(661),
        [anon_sym_LBRACE] = ACTIONS(661),
        [sym_number] = ACTIONS(659),
        [sym_identifier] = ACTIONS(663),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(661),
    },
    [353] = {
        [sym_else_clause] = STATE(355),
        [sym_except_clause] = STATE(356),
        [sym_finally_clause] = STATE(357),
        [ts_builtin_sym_end] = ACTIONS(661),
        [anon_sym_SEMI] = ACTIONS(661),
        [anon_sym_print] = ACTIONS(659),
        [anon_sym_return] = ACTIONS(659),
        [anon_sym_del] = ACTIONS(659),
        [sym_pass_statement] = ACTIONS(659),
        [sym_break_statement] = ACTIONS(659),
        [sym_continue_statement] = ACTIONS(659),
        [anon_sym_if] = ACTIONS(659),
        [anon_sym_else] = ACTIONS(807),
        [anon_sym_for] = ACTIONS(659),
        [anon_sym_while] = ACTIONS(659),
        [anon_sym_try] = ACTIONS(659),
        [anon_sym_except] = ACTIONS(809),
        [anon_sym_finally] = ACTIONS(811),
        [anon_sym_with] = ACTIONS(659),
        [anon_sym_def] = ACTIONS(659),
        [anon_sym_class] = ACTIONS(659),
        [anon_sym_AT] = ACTIONS(661),
        [anon_sym_LBRACK] = ACTIONS(661),
        [anon_sym_LBRACE] = ACTIONS(661),
        [sym_number] = ACTIONS(659),
        [sym_identifier] = ACTIONS(663),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(661),
    },
    [354] = {
        [anon_sym_COLON] = ACTIONS(813),
        [sym_comment] = ACTIONS(73),
    },
    [355] = {
        [sym_finally_clause] = STATE(358),
        [ts_builtin_sym_end] = ACTIONS(675),
        [anon_sym_SEMI] = ACTIONS(675),
        [anon_sym_print] = ACTIONS(673),
        [anon_sym_return] = ACTIONS(673),
        [anon_sym_del] = ACTIONS(673),
        [sym_pass_statement] = ACTIONS(673),
        [sym_break_statement] = ACTIONS(673),
        [sym_continue_statement] = ACTIONS(673),
        [anon_sym_if] = ACTIONS(673),
        [anon_sym_for] = ACTIONS(673),
        [anon_sym_while] = ACTIONS(673),
        [anon_sym_try] = ACTIONS(673),
        [anon_sym_finally] = ACTIONS(811),
        [anon_sym_with] = ACTIONS(673),
        [anon_sym_def] = ACTIONS(673),
        [anon_sym_class] = ACTIONS(673),
        [anon_sym_AT] = ACTIONS(675),
        [anon_sym_LBRACK] = ACTIONS(675),
        [anon_sym_LBRACE] = ACTIONS(675),
        [sym_number] = ACTIONS(673),
        [sym_identifier] = ACTIONS(677),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(675),
    },
    [356] = {
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
    [357] = {
        [ts_builtin_sym_end] = ACTIONS(675),
        [anon_sym_SEMI] = ACTIONS(675),
        [anon_sym_print] = ACTIONS(673),
        [anon_sym_return] = ACTIONS(673),
        [anon_sym_del] = ACTIONS(673),
        [sym_pass_statement] = ACTIONS(673),
        [sym_break_statement] = ACTIONS(673),
        [sym_continue_statement] = ACTIONS(673),
        [anon_sym_if] = ACTIONS(673),
        [anon_sym_for] = ACTIONS(673),
        [anon_sym_while] = ACTIONS(673),
        [anon_sym_try] = ACTIONS(673),
        [anon_sym_with] = ACTIONS(673),
        [anon_sym_def] = ACTIONS(673),
        [anon_sym_class] = ACTIONS(673),
        [anon_sym_AT] = ACTIONS(675),
        [anon_sym_LBRACK] = ACTIONS(675),
        [anon_sym_LBRACE] = ACTIONS(675),
        [sym_number] = ACTIONS(673),
        [sym_identifier] = ACTIONS(677),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(675),
    },
    [358] = {
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
    [359] = {
        [sym__simple_statement] = STATE(208),
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
        [sym__indent] = ACTIONS(471),
    },
    [360] = {
        [ts_builtin_sym_end] = ACTIONS(693),
        [anon_sym_SEMI] = ACTIONS(693),
        [anon_sym_print] = ACTIONS(691),
        [anon_sym_return] = ACTIONS(691),
        [anon_sym_del] = ACTIONS(691),
        [sym_pass_statement] = ACTIONS(691),
        [sym_break_statement] = ACTIONS(691),
        [sym_continue_statement] = ACTIONS(691),
        [anon_sym_if] = ACTIONS(691),
        [anon_sym_for] = ACTIONS(691),
        [anon_sym_while] = ACTIONS(691),
        [anon_sym_try] = ACTIONS(691),
        [anon_sym_finally] = ACTIONS(691),
        [anon_sym_with] = ACTIONS(691),
        [anon_sym_def] = ACTIONS(691),
        [anon_sym_class] = ACTIONS(691),
        [anon_sym_AT] = ACTIONS(693),
        [anon_sym_LBRACK] = ACTIONS(693),
        [anon_sym_LBRACE] = ACTIONS(693),
        [sym_number] = ACTIONS(691),
        [sym_identifier] = ACTIONS(695),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(693),
    },
    [361] = {
        [sym__simple_statement] = STATE(208),
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
        [sym__indent] = ACTIONS(471),
    },
    [362] = {
        [ts_builtin_sym_end] = ACTIONS(699),
        [anon_sym_SEMI] = ACTIONS(699),
        [anon_sym_print] = ACTIONS(697),
        [anon_sym_return] = ACTIONS(697),
        [anon_sym_del] = ACTIONS(697),
        [sym_pass_statement] = ACTIONS(697),
        [sym_break_statement] = ACTIONS(697),
        [sym_continue_statement] = ACTIONS(697),
        [anon_sym_if] = ACTIONS(697),
        [anon_sym_for] = ACTIONS(697),
        [anon_sym_while] = ACTIONS(697),
        [anon_sym_try] = ACTIONS(697),
        [anon_sym_with] = ACTIONS(697),
        [anon_sym_def] = ACTIONS(697),
        [anon_sym_class] = ACTIONS(697),
        [anon_sym_AT] = ACTIONS(699),
        [anon_sym_LBRACK] = ACTIONS(699),
        [anon_sym_LBRACE] = ACTIONS(699),
        [sym_number] = ACTIONS(697),
        [sym_identifier] = ACTIONS(701),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(699),
    },
    [363] = {
        [anon_sym_COMMA] = ACTIONS(815),
        [anon_sym_COLON] = ACTIONS(817),
        [anon_sym_as] = ACTIONS(815),
        [anon_sym_LPAREN] = ACTIONS(209),
        [anon_sym_PLUS] = ACTIONS(211),
        [anon_sym_LBRACK] = ACTIONS(213),
        [sym_comment] = ACTIONS(73),
    },
    [364] = {
        [sym__expression] = STATE(366),
        [sym_binary_operator] = STATE(36),
        [sym_subscript] = STATE(36),
        [sym_call] = STATE(36),
        [sym_list] = STATE(36),
        [sym_list_comprehension] = STATE(36),
        [sym_dictionary] = STATE(36),
        [sym_dictionary_comprehension] = STATE(36),
        [anon_sym_LBRACK] = ACTIONS(117),
        [anon_sym_LBRACE] = ACTIONS(119),
        [sym_number] = ACTIONS(121),
        [sym_identifier] = ACTIONS(121),
        [sym_comment] = ACTIONS(73),
    },
    [365] = {
        [sym__simple_statement] = STATE(208),
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
        [sym__indent] = ACTIONS(471),
    },
    [366] = {
        [anon_sym_COLON] = ACTIONS(819),
        [anon_sym_LPAREN] = ACTIONS(209),
        [anon_sym_PLUS] = ACTIONS(211),
        [anon_sym_LBRACK] = ACTIONS(213),
        [sym_comment] = ACTIONS(73),
    },
    [367] = {
        [sym__simple_statement] = STATE(208),
        [sym_print_statement] = STATE(5),
        [sym_expression_statement] = STATE(5),
        [sym_return_statement] = STATE(5),
        [sym_delete_statement] = STATE(5),
        [sym__suite] = STATE(368),
        [sym__expression] = STATE(23),
        [sym_binary_operator] = STATE(16),
        [sym_subscript] = STATE(16),
        [sym_call] = STATE(16),
        [sym_list] = STATE(16),
        [sym_list_comprehension] = STATE(16),
        [sym_dictionary] = STATE(16),
        [sym_dictionary_comprehension] = STATE(16),
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
        [sym__indent] = ACTIONS(471),
    },
    [368] = {
        [ts_builtin_sym_end] = ACTIONS(711),
        [anon_sym_SEMI] = ACTIONS(711),
        [anon_sym_print] = ACTIONS(709),
        [anon_sym_return] = ACTIONS(709),
        [anon_sym_del] = ACTIONS(709),
        [sym_pass_statement] = ACTIONS(709),
        [sym_break_statement] = ACTIONS(709),
        [sym_continue_statement] = ACTIONS(709),
        [anon_sym_if] = ACTIONS(709),
        [anon_sym_else] = ACTIONS(709),
        [anon_sym_for] = ACTIONS(709),
        [anon_sym_while] = ACTIONS(709),
        [anon_sym_try] = ACTIONS(709),
        [anon_sym_except] = ACTIONS(709),
        [anon_sym_finally] = ACTIONS(709),
        [anon_sym_with] = ACTIONS(709),
        [anon_sym_def] = ACTIONS(709),
        [anon_sym_class] = ACTIONS(709),
        [anon_sym_AT] = ACTIONS(711),
        [anon_sym_LBRACK] = ACTIONS(711),
        [anon_sym_LBRACE] = ACTIONS(711),
        [sym_number] = ACTIONS(709),
        [sym_identifier] = ACTIONS(713),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(711),
    },
    [369] = {
        [ts_builtin_sym_end] = ACTIONS(717),
        [anon_sym_SEMI] = ACTIONS(717),
        [anon_sym_print] = ACTIONS(715),
        [anon_sym_return] = ACTIONS(715),
        [anon_sym_del] = ACTIONS(715),
        [sym_pass_statement] = ACTIONS(715),
        [sym_break_statement] = ACTIONS(715),
        [sym_continue_statement] = ACTIONS(715),
        [anon_sym_if] = ACTIONS(715),
        [anon_sym_else] = ACTIONS(715),
        [anon_sym_for] = ACTIONS(715),
        [anon_sym_while] = ACTIONS(715),
        [anon_sym_try] = ACTIONS(715),
        [anon_sym_except] = ACTIONS(715),
        [anon_sym_finally] = ACTIONS(715),
        [anon_sym_with] = ACTIONS(715),
        [anon_sym_def] = ACTIONS(715),
        [anon_sym_class] = ACTIONS(715),
        [anon_sym_AT] = ACTIONS(717),
        [anon_sym_LBRACK] = ACTIONS(717),
        [anon_sym_LBRACE] = ACTIONS(717),
        [sym_number] = ACTIONS(715),
        [sym_identifier] = ACTIONS(719),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(717),
    },
    [370] = {
        [anon_sym_COLON] = ACTIONS(821),
        [anon_sym_LPAREN] = ACTIONS(209),
        [anon_sym_PLUS] = ACTIONS(211),
        [anon_sym_LBRACK] = ACTIONS(213),
        [sym_comment] = ACTIONS(73),
    },
    [371] = {
        [sym__simple_statement] = STATE(208),
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
        [sym__indent] = ACTIONS(471),
    },
    [372] = {
        [sym_else_clause] = STATE(373),
        [ts_builtin_sym_end] = ACTIONS(727),
        [anon_sym_SEMI] = ACTIONS(727),
        [anon_sym_print] = ACTIONS(725),
        [anon_sym_return] = ACTIONS(725),
        [anon_sym_del] = ACTIONS(725),
        [sym_pass_statement] = ACTIONS(725),
        [sym_break_statement] = ACTIONS(725),
        [sym_continue_statement] = ACTIONS(725),
        [anon_sym_if] = ACTIONS(725),
        [anon_sym_else] = ACTIONS(807),
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
    [373] = {
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
    [374] = {
        [anon_sym_in] = ACTIONS(823),
        [sym_comment] = ACTIONS(73),
    },
    [375] = {
        [sym_expression_list] = STATE(376),
        [sym__expression] = STATE(108),
        [sym_binary_operator] = STATE(36),
        [sym_subscript] = STATE(36),
        [sym_call] = STATE(36),
        [sym_list] = STATE(36),
        [sym_list_comprehension] = STATE(36),
        [sym_dictionary] = STATE(36),
        [sym_dictionary_comprehension] = STATE(36),
        [anon_sym_LBRACK] = ACTIONS(117),
        [anon_sym_LBRACE] = ACTIONS(119),
        [sym_number] = ACTIONS(121),
        [sym_identifier] = ACTIONS(121),
        [sym_comment] = ACTIONS(73),
    },
    [376] = {
        [anon_sym_COLON] = ACTIONS(825),
        [sym_comment] = ACTIONS(73),
    },
    [377] = {
        [sym__simple_statement] = STATE(208),
        [sym_print_statement] = STATE(5),
        [sym_expression_statement] = STATE(5),
        [sym_return_statement] = STATE(5),
        [sym_delete_statement] = STATE(5),
        [sym__suite] = STATE(378),
        [sym__expression] = STATE(23),
        [sym_binary_operator] = STATE(16),
        [sym_subscript] = STATE(16),
        [sym_call] = STATE(16),
        [sym_list] = STATE(16),
        [sym_list_comprehension] = STATE(16),
        [sym_dictionary] = STATE(16),
        [sym_dictionary_comprehension] = STATE(16),
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
        [sym__indent] = ACTIONS(471),
    },
    [378] = {
        [sym_else_clause] = STATE(379),
        [ts_builtin_sym_end] = ACTIONS(743),
        [anon_sym_SEMI] = ACTIONS(743),
        [anon_sym_print] = ACTIONS(741),
        [anon_sym_return] = ACTIONS(741),
        [anon_sym_del] = ACTIONS(741),
        [sym_pass_statement] = ACTIONS(741),
        [sym_break_statement] = ACTIONS(741),
        [sym_continue_statement] = ACTIONS(741),
        [anon_sym_if] = ACTIONS(741),
        [anon_sym_else] = ACTIONS(807),
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
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(743),
    },
    [379] = {
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
    [380] = {
        [anon_sym_COLON] = ACTIONS(827),
        [anon_sym_LPAREN] = ACTIONS(209),
        [anon_sym_PLUS] = ACTIONS(211),
        [anon_sym_LBRACK] = ACTIONS(213),
        [sym_comment] = ACTIONS(73),
    },
    [381] = {
        [sym__simple_statement] = STATE(208),
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
        [sym__indent] = ACTIONS(471),
    },
    [382] = {
        [sym_elif_clause] = STATE(384),
        [sym_else_clause] = STATE(385),
        [aux_sym_if_statement_repeat1] = STATE(386),
        [ts_builtin_sym_end] = ACTIONS(759),
        [anon_sym_SEMI] = ACTIONS(759),
        [anon_sym_print] = ACTIONS(755),
        [anon_sym_return] = ACTIONS(755),
        [anon_sym_del] = ACTIONS(755),
        [sym_pass_statement] = ACTIONS(755),
        [sym_break_statement] = ACTIONS(755),
        [sym_continue_statement] = ACTIONS(755),
        [anon_sym_if] = ACTIONS(755),
        [anon_sym_elif] = ACTIONS(829),
        [anon_sym_else] = ACTIONS(807),
        [anon_sym_for] = ACTIONS(755),
        [anon_sym_while] = ACTIONS(755),
        [anon_sym_try] = ACTIONS(755),
        [anon_sym_with] = ACTIONS(755),
        [anon_sym_def] = ACTIONS(755),
        [anon_sym_class] = ACTIONS(755),
        [anon_sym_AT] = ACTIONS(759),
        [anon_sym_LBRACK] = ACTIONS(759),
        [anon_sym_LBRACE] = ACTIONS(759),
        [sym_number] = ACTIONS(755),
        [sym_identifier] = ACTIONS(761),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(759),
    },
    [383] = {
        [sym__expression] = STATE(389),
        [sym_binary_operator] = STATE(36),
        [sym_subscript] = STATE(36),
        [sym_call] = STATE(36),
        [sym_list] = STATE(36),
        [sym_list_comprehension] = STATE(36),
        [sym_dictionary] = STATE(36),
        [sym_dictionary_comprehension] = STATE(36),
        [anon_sym_LBRACK] = ACTIONS(117),
        [anon_sym_LBRACE] = ACTIONS(119),
        [sym_number] = ACTIONS(121),
        [sym_identifier] = ACTIONS(121),
        [sym_comment] = ACTIONS(73),
    },
    [384] = {
        [ts_builtin_sym_end] = ACTIONS(765),
        [anon_sym_SEMI] = ACTIONS(765),
        [anon_sym_print] = ACTIONS(763),
        [anon_sym_return] = ACTIONS(763),
        [anon_sym_del] = ACTIONS(763),
        [sym_pass_statement] = ACTIONS(763),
        [sym_break_statement] = ACTIONS(763),
        [sym_continue_statement] = ACTIONS(763),
        [anon_sym_if] = ACTIONS(763),
        [anon_sym_elif] = ACTIONS(763),
        [anon_sym_else] = ACTIONS(763),
        [anon_sym_for] = ACTIONS(763),
        [anon_sym_while] = ACTIONS(763),
        [anon_sym_try] = ACTIONS(763),
        [anon_sym_with] = ACTIONS(763),
        [anon_sym_def] = ACTIONS(763),
        [anon_sym_class] = ACTIONS(763),
        [anon_sym_AT] = ACTIONS(765),
        [anon_sym_LBRACK] = ACTIONS(765),
        [anon_sym_LBRACE] = ACTIONS(765),
        [sym_number] = ACTIONS(763),
        [sym_identifier] = ACTIONS(767),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(765),
    },
    [385] = {
        [ts_builtin_sym_end] = ACTIONS(771),
        [anon_sym_SEMI] = ACTIONS(771),
        [anon_sym_print] = ACTIONS(769),
        [anon_sym_return] = ACTIONS(769),
        [anon_sym_del] = ACTIONS(769),
        [sym_pass_statement] = ACTIONS(769),
        [sym_break_statement] = ACTIONS(769),
        [sym_continue_statement] = ACTIONS(769),
        [anon_sym_if] = ACTIONS(769),
        [anon_sym_for] = ACTIONS(769),
        [anon_sym_while] = ACTIONS(769),
        [anon_sym_try] = ACTIONS(769),
        [anon_sym_with] = ACTIONS(769),
        [anon_sym_def] = ACTIONS(769),
        [anon_sym_class] = ACTIONS(769),
        [anon_sym_AT] = ACTIONS(771),
        [anon_sym_LBRACK] = ACTIONS(771),
        [anon_sym_LBRACE] = ACTIONS(771),
        [sym_number] = ACTIONS(769),
        [sym_identifier] = ACTIONS(773),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(771),
    },
    [386] = {
        [sym_elif_clause] = STATE(387),
        [sym_else_clause] = STATE(388),
        [ts_builtin_sym_end] = ACTIONS(771),
        [anon_sym_SEMI] = ACTIONS(771),
        [anon_sym_print] = ACTIONS(769),
        [anon_sym_return] = ACTIONS(769),
        [anon_sym_del] = ACTIONS(769),
        [sym_pass_statement] = ACTIONS(769),
        [sym_break_statement] = ACTIONS(769),
        [sym_continue_statement] = ACTIONS(769),
        [anon_sym_if] = ACTIONS(769),
        [anon_sym_elif] = ACTIONS(829),
        [anon_sym_else] = ACTIONS(807),
        [anon_sym_for] = ACTIONS(769),
        [anon_sym_while] = ACTIONS(769),
        [anon_sym_try] = ACTIONS(769),
        [anon_sym_with] = ACTIONS(769),
        [anon_sym_def] = ACTIONS(769),
        [anon_sym_class] = ACTIONS(769),
        [anon_sym_AT] = ACTIONS(771),
        [anon_sym_LBRACK] = ACTIONS(771),
        [anon_sym_LBRACE] = ACTIONS(771),
        [sym_number] = ACTIONS(769),
        [sym_identifier] = ACTIONS(773),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(771),
    },
    [387] = {
        [ts_builtin_sym_end] = ACTIONS(777),
        [anon_sym_SEMI] = ACTIONS(777),
        [anon_sym_print] = ACTIONS(775),
        [anon_sym_return] = ACTIONS(775),
        [anon_sym_del] = ACTIONS(775),
        [sym_pass_statement] = ACTIONS(775),
        [sym_break_statement] = ACTIONS(775),
        [sym_continue_statement] = ACTIONS(775),
        [anon_sym_if] = ACTIONS(775),
        [anon_sym_elif] = ACTIONS(775),
        [anon_sym_else] = ACTIONS(775),
        [anon_sym_for] = ACTIONS(775),
        [anon_sym_while] = ACTIONS(775),
        [anon_sym_try] = ACTIONS(775),
        [anon_sym_with] = ACTIONS(775),
        [anon_sym_def] = ACTIONS(775),
        [anon_sym_class] = ACTIONS(775),
        [anon_sym_AT] = ACTIONS(777),
        [anon_sym_LBRACK] = ACTIONS(777),
        [anon_sym_LBRACE] = ACTIONS(777),
        [sym_number] = ACTIONS(775),
        [sym_identifier] = ACTIONS(779),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(777),
    },
    [388] = {
        [ts_builtin_sym_end] = ACTIONS(783),
        [anon_sym_SEMI] = ACTIONS(783),
        [anon_sym_print] = ACTIONS(781),
        [anon_sym_return] = ACTIONS(781),
        [anon_sym_del] = ACTIONS(781),
        [sym_pass_statement] = ACTIONS(781),
        [sym_break_statement] = ACTIONS(781),
        [sym_continue_statement] = ACTIONS(781),
        [anon_sym_if] = ACTIONS(781),
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
    [389] = {
        [anon_sym_COLON] = ACTIONS(831),
        [anon_sym_LPAREN] = ACTIONS(209),
        [anon_sym_PLUS] = ACTIONS(211),
        [anon_sym_LBRACK] = ACTIONS(213),
        [sym_comment] = ACTIONS(73),
    },
    [390] = {
        [sym__simple_statement] = STATE(208),
        [sym_print_statement] = STATE(5),
        [sym_expression_statement] = STATE(5),
        [sym_return_statement] = STATE(5),
        [sym_delete_statement] = STATE(5),
        [sym__suite] = STATE(391),
        [sym__expression] = STATE(23),
        [sym_binary_operator] = STATE(16),
        [sym_subscript] = STATE(16),
        [sym_call] = STATE(16),
        [sym_list] = STATE(16),
        [sym_list_comprehension] = STATE(16),
        [sym_dictionary] = STATE(16),
        [sym_dictionary_comprehension] = STATE(16),
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
        [sym__indent] = ACTIONS(471),
    },
    [391] = {
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
    [392] = {
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(833),
    },
    [393] = {
        [aux_sym_print_statement_repeat1] = STATE(395),
        [anon_sym_COMMA] = ACTIONS(835),
        [anon_sym_LPAREN] = ACTIONS(161),
        [anon_sym_PLUS] = ACTIONS(163),
        [anon_sym_LBRACK] = ACTIONS(165),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(327),
    },
    [394] = {
        [sym__expression] = STATE(398),
        [sym_binary_operator] = STATE(16),
        [sym_subscript] = STATE(16),
        [sym_call] = STATE(16),
        [sym_list] = STATE(16),
        [sym_list_comprehension] = STATE(16),
        [sym_dictionary] = STATE(16),
        [sym_dictionary_comprehension] = STATE(16),
        [anon_sym_LBRACK] = ACTIONS(107),
        [anon_sym_LBRACE] = ACTIONS(109),
        [sym_number] = ACTIONS(111),
        [sym_identifier] = ACTIONS(111),
        [sym_comment] = ACTIONS(73),
    },
    [395] = {
        [anon_sym_COMMA] = ACTIONS(837),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(331),
    },
    [396] = {
        [sym__expression] = STATE(397),
        [sym_binary_operator] = STATE(16),
        [sym_subscript] = STATE(16),
        [sym_call] = STATE(16),
        [sym_list] = STATE(16),
        [sym_list_comprehension] = STATE(16),
        [sym_dictionary] = STATE(16),
        [sym_dictionary_comprehension] = STATE(16),
        [anon_sym_LBRACK] = ACTIONS(107),
        [anon_sym_LBRACE] = ACTIONS(109),
        [sym_number] = ACTIONS(111),
        [sym_identifier] = ACTIONS(111),
        [sym_comment] = ACTIONS(73),
    },
    [397] = {
        [anon_sym_COMMA] = ACTIONS(333),
        [anon_sym_LPAREN] = ACTIONS(161),
        [anon_sym_PLUS] = ACTIONS(163),
        [anon_sym_LBRACK] = ACTIONS(165),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(333),
    },
    [398] = {
        [anon_sym_COMMA] = ACTIONS(335),
        [anon_sym_LPAREN] = ACTIONS(161),
        [anon_sym_PLUS] = ACTIONS(163),
        [anon_sym_LBRACK] = ACTIONS(165),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(335),
    },
    [399] = {
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(839),
    },
    [400] = {
        [aux_sym_print_statement_repeat1] = STATE(401),
        [anon_sym_COMMA] = ACTIONS(835),
        [anon_sym_LPAREN] = ACTIONS(161),
        [anon_sym_PLUS] = ACTIONS(163),
        [anon_sym_LBRACK] = ACTIONS(165),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(841),
    },
    [401] = {
        [anon_sym_COMMA] = ACTIONS(837),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(843),
    },
    [402] = {
        [sym_with_item] = STATE(585),
        [sym_dictionary_splat_parameter] = STATE(522),
        [sym__expression] = STATE(586),
        [sym_binary_operator] = STATE(16),
        [sym_subscript] = STATE(16),
        [sym_call] = STATE(16),
        [sym_keyword_argument] = STATE(587),
        [sym_dictionary_splat_argument] = STATE(588),
        [sym_list] = STATE(16),
        [sym_list_comprehension] = STATE(16),
        [sym_dictionary] = STATE(16),
        [sym_dictionary_comprehension] = STATE(16),
        [sym_pair] = STATE(589),
        [anon_sym_RPAREN] = ACTIONS(845),
        [anon_sym_STAR] = ACTIONS(847),
        [anon_sym_LBRACK] = ACTIONS(853),
        [anon_sym_DOT_DOT_DOT] = ACTIONS(857),
        [anon_sym_RBRACK] = ACTIONS(859),
        [anon_sym_STAR_STAR] = ACTIONS(861),
        [anon_sym_LBRACE] = ACTIONS(865),
        [anon_sym_RBRACE] = ACTIONS(869),
        [sym_number] = ACTIONS(871),
        [sym_identifier] = ACTIONS(875),
        [sym_comment] = ACTIONS(73),
    },
    [403] = {
        [sym__expression] = STATE(576),
        [sym_binary_operator] = STATE(36),
        [sym_subscript] = STATE(36),
        [sym_call] = STATE(36),
        [sym_list] = STATE(36),
        [sym_list_comprehension] = STATE(36),
        [sym_dictionary] = STATE(36),
        [sym_dictionary_comprehension] = STATE(36),
        [anon_sym_LBRACK] = ACTIONS(117),
        [anon_sym_LBRACE] = ACTIONS(119),
        [sym_number] = ACTIONS(121),
        [sym_identifier] = ACTIONS(121),
        [sym_comment] = ACTIONS(73),
    },
    [404] = {
        [sym__simple_statement] = STATE(466),
        [sym_print_statement] = STATE(5),
        [sym_expression_statement] = STATE(5),
        [sym_return_statement] = STATE(5),
        [sym_delete_statement] = STATE(5),
        [sym__suite] = STATE(446),
        [sym__expression] = STATE(504),
        [sym_binary_operator] = STATE(16),
        [sym_subscript] = STATE(16),
        [sym_call] = STATE(16),
        [sym_list] = STATE(16),
        [sym_list_comprehension] = STATE(16),
        [sym_dictionary] = STATE(16),
        [sym_dictionary_comprehension] = STATE(16),
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
        [sym__indent] = ACTIONS(881),
    },
    [405] = {
        [sym__expression] = STATE(573),
        [sym_binary_operator] = STATE(36),
        [sym_subscript] = STATE(36),
        [sym_call] = STATE(36),
        [sym_list] = STATE(36),
        [sym_list_comprehension] = STATE(36),
        [sym_dictionary] = STATE(36),
        [sym_dictionary_comprehension] = STATE(36),
        [anon_sym_LBRACK] = ACTIONS(117),
        [anon_sym_LBRACE] = ACTIONS(119),
        [sym_number] = ACTIONS(121),
        [sym_identifier] = ACTIONS(121),
        [sym_comment] = ACTIONS(73),
    },
    [406] = {
        [anon_sym_COLON] = ACTIONS(883),
        [sym_comment] = ACTIONS(73),
    },
    [407] = {
        [sym_expression_list] = STATE(572),
        [sym__expression] = STATE(108),
        [sym_binary_operator] = STATE(36),
        [sym_subscript] = STATE(36),
        [sym_call] = STATE(36),
        [sym_list] = STATE(36),
        [sym_list_comprehension] = STATE(36),
        [sym_dictionary] = STATE(36),
        [sym_dictionary_comprehension] = STATE(36),
        [anon_sym_LBRACK] = ACTIONS(117),
        [anon_sym_LBRACE] = ACTIONS(119),
        [sym_number] = ACTIONS(121),
        [sym_identifier] = ACTIONS(121),
        [sym_comment] = ACTIONS(73),
    },
    [408] = {
        [sym_expression_list] = STATE(489),
        [sym__expression] = STATE(569),
        [sym_binary_operator] = STATE(36),
        [sym_subscript] = STATE(36),
        [sym_call] = STATE(36),
        [sym_list] = STATE(36),
        [sym_list_comprehension] = STATE(36),
        [sym_dictionary] = STATE(36),
        [sym_dictionary_comprehension] = STATE(36),
        [anon_sym_LBRACK] = ACTIONS(117),
        [anon_sym_LBRACE] = ACTIONS(119),
        [sym_number] = ACTIONS(121),
        [sym_identifier] = ACTIONS(121),
        [sym_comment] = ACTIONS(73),
    },
    [409] = {
        [sym__expression] = STATE(565),
        [sym_binary_operator] = STATE(36),
        [sym_subscript] = STATE(36),
        [sym_call] = STATE(36),
        [sym_list] = STATE(36),
        [sym_list_comprehension] = STATE(36),
        [sym_dictionary] = STATE(36),
        [sym_dictionary_comprehension] = STATE(36),
        [anon_sym_LBRACK] = ACTIONS(117),
        [anon_sym_LBRACE] = ACTIONS(119),
        [sym_number] = ACTIONS(121),
        [sym_identifier] = ACTIONS(121),
        [sym_comment] = ACTIONS(73),
    },
    [410] = {
        [anon_sym_COLON] = ACTIONS(885),
        [sym_comment] = ACTIONS(73),
    },
    [411] = {
        [sym__expression] = STATE(558),
        [sym_binary_operator] = STATE(36),
        [sym_subscript] = STATE(36),
        [sym_call] = STATE(36),
        [sym_list] = STATE(36),
        [sym_list_comprehension] = STATE(36),
        [sym_dictionary] = STATE(36),
        [sym_dictionary_comprehension] = STATE(36),
        [anon_sym_LBRACK] = ACTIONS(117),
        [anon_sym_LBRACE] = ACTIONS(119),
        [sym_number] = ACTIONS(121),
        [sym_identifier] = ACTIONS(121),
        [sym_comment] = ACTIONS(73),
    },
    [412] = {
        [sym__expression] = STATE(557),
        [sym_binary_operator] = STATE(36),
        [sym_subscript] = STATE(36),
        [sym_call] = STATE(36),
        [sym_list] = STATE(36),
        [sym_list_comprehension] = STATE(36),
        [sym_dictionary] = STATE(36),
        [sym_dictionary_comprehension] = STATE(36),
        [anon_sym_LBRACK] = ACTIONS(117),
        [anon_sym_LBRACE] = ACTIONS(119),
        [sym_number] = ACTIONS(121),
        [sym_identifier] = ACTIONS(121),
        [sym_comment] = ACTIONS(73),
    },
    [413] = {
        [anon_sym_COLON] = ACTIONS(887),
        [sym_comment] = ACTIONS(73),
    },
    [414] = {
        [sym_with_item] = STATE(554),
        [sym__expression] = STATE(274),
        [sym_binary_operator] = STATE(36),
        [sym_subscript] = STATE(36),
        [sym_call] = STATE(36),
        [sym_list] = STATE(36),
        [sym_list_comprehension] = STATE(36),
        [sym_dictionary] = STATE(36),
        [sym_dictionary_comprehension] = STATE(36),
        [anon_sym_LBRACK] = ACTIONS(117),
        [anon_sym_LBRACE] = ACTIONS(119),
        [sym_number] = ACTIONS(121),
        [sym_identifier] = ACTIONS(121),
        [sym_comment] = ACTIONS(73),
    },
    [415] = {
        [sym_identifier] = ACTIONS(889),
        [sym_comment] = ACTIONS(73),
    },
    [416] = {
        [sym_default_parameter] = STATE(249),
        [sym_list_splat_parameter] = STATE(250),
        [sym_dictionary_splat_parameter] = STATE(251),
        [sym_expression_list] = STATE(534),
        [sym__expression] = STATE(548),
        [sym_binary_operator] = STATE(36),
        [sym_subscript] = STATE(36),
        [sym_call] = STATE(36),
        [sym_keyword_argument] = STATE(135),
        [sym_list_splat_argument] = STATE(136),
        [sym_dictionary_splat_argument] = STATE(137),
        [sym_list] = STATE(36),
        [sym_list_comprehension] = STATE(36),
        [sym_dictionary] = STATE(36),
        [sym_dictionary_comprehension] = STATE(36),
        [aux_sym_parameters_repeat1] = STATE(252),
        [aux_sym_call_repeat1] = STATE(138),
        [anon_sym_RPAREN] = ACTIONS(547),
        [anon_sym_STAR] = ACTIONS(891),
        [anon_sym_LBRACK] = ACTIONS(117),
        [anon_sym_STAR_STAR] = ACTIONS(195),
        [anon_sym_LBRACE] = ACTIONS(119),
        [sym_number] = ACTIONS(121),
        [sym_identifier] = ACTIONS(893),
        [sym_comment] = ACTIONS(73),
    },
    [417] = {
        [anon_sym_COMMA] = ACTIONS(895),
        [anon_sym_COLON] = ACTIONS(901),
        [anon_sym_for] = ACTIONS(895),
        [anon_sym_in] = ACTIONS(895),
        [anon_sym_as] = ACTIONS(895),
        [anon_sym_LPAREN] = ACTIONS(895),
        [anon_sym_RPAREN] = ACTIONS(895),
        [anon_sym_PLUS] = ACTIONS(895),
        [anon_sym_LBRACK] = ACTIONS(895),
        [anon_sym_RBRACK] = ACTIONS(895),
        [anon_sym_RBRACE] = ACTIONS(895),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(913),
    },
    [418] = {
        [sym__expression] = STATE(545),
        [sym_binary_operator] = STATE(36),
        [sym_subscript] = STATE(36),
        [sym_call] = STATE(36),
        [sym_list] = STATE(36),
        [sym_list_comprehension] = STATE(36),
        [sym_dictionary] = STATE(36),
        [sym_dictionary_comprehension] = STATE(36),
        [anon_sym_LBRACK] = ACTIONS(117),
        [anon_sym_LBRACE] = ACTIONS(119),
        [sym_number] = ACTIONS(121),
        [sym_identifier] = ACTIONS(121),
        [sym_comment] = ACTIONS(73),
    },
    [419] = {
        [sym__expression] = STATE(132),
        [sym_binary_operator] = STATE(36),
        [sym_subscript] = STATE(36),
        [sym_call] = STATE(36),
        [sym_list] = STATE(36),
        [sym_list_comprehension] = STATE(36),
        [sym_dictionary] = STATE(36),
        [sym_dictionary_comprehension] = STATE(36),
        [anon_sym_STAR] = ACTIONS(563),
        [anon_sym_LBRACK] = ACTIONS(117),
        [anon_sym_LBRACE] = ACTIONS(119),
        [sym_number] = ACTIONS(121),
        [sym_identifier] = ACTIONS(921),
        [sym_comment] = ACTIONS(73),
    },
    [420] = {
        [sym_identifier] = ACTIONS(923),
        [sym_comment] = ACTIONS(73),
    },
    [421] = {
        [sym_identifier] = ACTIONS(925),
        [sym_comment] = ACTIONS(73),
    },
    [422] = {
        [sym__expression] = STATE(540),
        [sym_binary_operator] = STATE(16),
        [sym_subscript] = STATE(16),
        [sym_call] = STATE(16),
        [sym_list] = STATE(16),
        [sym_list_comprehension] = STATE(16),
        [sym_dictionary] = STATE(16),
        [sym_dictionary_comprehension] = STATE(16),
        [anon_sym_LBRACK] = ACTIONS(107),
        [anon_sym_LBRACE] = ACTIONS(109),
        [sym_number] = ACTIONS(111),
        [sym_identifier] = ACTIONS(111),
        [sym_comment] = ACTIONS(73),
    },
    [423] = {
        [sym__expression] = STATE(536),
        [sym_binary_operator] = STATE(36),
        [sym_subscript] = STATE(36),
        [sym_call] = STATE(36),
        [sym_list] = STATE(36),
        [sym_list_comprehension] = STATE(36),
        [sym_dictionary] = STATE(36),
        [sym_dictionary_comprehension] = STATE(36),
        [anon_sym_LBRACK] = ACTIONS(117),
        [anon_sym_DOT_DOT_DOT] = ACTIONS(199),
        [anon_sym_RBRACK] = ACTIONS(131),
        [anon_sym_LBRACE] = ACTIONS(119),
        [sym_number] = ACTIONS(121),
        [sym_identifier] = ACTIONS(121),
        [sym_comment] = ACTIONS(73),
    },
    [424] = {
        [aux_sym_subscript_repeat1] = STATE(43),
        [anon_sym_COMMA] = ACTIONS(927),
        [anon_sym_RBRACK] = ACTIONS(931),
        [sym_comment] = ACTIONS(73),
    },
    [425] = {
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
    [426] = {
        [anon_sym_COMMA] = ACTIONS(944),
        [anon_sym_COLON] = ACTIONS(944),
        [anon_sym_for] = ACTIONS(944),
        [anon_sym_in] = ACTIONS(944),
        [anon_sym_as] = ACTIONS(944),
        [anon_sym_LPAREN] = ACTIONS(944),
        [anon_sym_RPAREN] = ACTIONS(944),
        [anon_sym_PLUS] = ACTIONS(944),
        [anon_sym_LBRACK] = ACTIONS(944),
        [anon_sym_RBRACK] = ACTIONS(944),
        [anon_sym_RBRACE] = ACTIONS(944),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(944),
    },
    [427] = {
        [sym_parameters] = STATE(441),
        [aux_sym_dotted_name_repeat1] = STATE(197),
        [anon_sym_COMMA] = ACTIONS(950),
        [anon_sym_COLON] = ACTIONS(954),
        [anon_sym_for] = ACTIONS(135),
        [anon_sym_in] = ACTIONS(135),
        [anon_sym_as] = ACTIONS(135),
        [anon_sym_LPAREN] = ACTIONS(957),
        [anon_sym_RPAREN] = ACTIONS(963),
        [anon_sym_EQ] = ACTIONS(968),
        [anon_sym_DOT] = ACTIONS(970),
        [anon_sym_PLUS] = ACTIONS(135),
        [anon_sym_LBRACK] = ACTIONS(135),
        [anon_sym_RBRACK] = ACTIONS(135),
        [anon_sym_RBRACE] = ACTIONS(135),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(974),
    },
    [428] = {
        [ts_builtin_sym_end] = ACTIONS(979),
        [anon_sym_SEMI] = ACTIONS(983),
        [anon_sym_print] = ACTIONS(986),
        [anon_sym_return] = ACTIONS(986),
        [anon_sym_del] = ACTIONS(986),
        [sym_pass_statement] = ACTIONS(986),
        [sym_break_statement] = ACTIONS(986),
        [sym_continue_statement] = ACTIONS(986),
        [anon_sym_if] = ACTIONS(986),
        [anon_sym_elif] = ACTIONS(501),
        [anon_sym_else] = ACTIONS(501),
        [anon_sym_for] = ACTIONS(986),
        [anon_sym_while] = ACTIONS(986),
        [anon_sym_try] = ACTIONS(986),
        [anon_sym_except] = ACTIONS(501),
        [anon_sym_finally] = ACTIONS(501),
        [anon_sym_with] = ACTIONS(986),
        [anon_sym_def] = ACTIONS(989),
        [anon_sym_class] = ACTIONS(989),
        [anon_sym_AT] = ACTIONS(994),
        [anon_sym_LBRACK] = ACTIONS(983),
        [anon_sym_LBRACE] = ACTIONS(983),
        [sym_number] = ACTIONS(986),
        [sym_identifier] = ACTIONS(999),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(983),
        [sym__dedent] = ACTIONS(983),
    },
    [429] = {
        [sym__statement] = STATE(218),
        [sym__simple_statement] = STATE(219),
        [sym_print_statement] = STATE(5),
        [sym_expression_statement] = STATE(5),
        [sym_return_statement] = STATE(5),
        [sym_delete_statement] = STATE(5),
        [sym__compound_statement] = STATE(220),
        [sym_if_statement] = STATE(221),
        [sym_for_statement] = STATE(221),
        [sym_while_statement] = STATE(221),
        [sym_try_statement] = STATE(221),
        [sym_with_statement] = STATE(221),
        [sym_function_definition] = STATE(221),
        [sym_class_definition] = STATE(221),
        [sym_decorated_definition] = STATE(221),
        [sym_decorator] = STATE(22),
        [sym__expression] = STATE(23),
        [sym_binary_operator] = STATE(16),
        [sym_subscript] = STATE(16),
        [sym_call] = STATE(16),
        [sym_list] = STATE(16),
        [sym_list_comprehension] = STATE(16),
        [sym_dictionary] = STATE(16),
        [sym_dictionary_comprehension] = STATE(16),
        [aux_sym_module_repeat1] = STATE(469),
        [aux_sym_decorated_definition_repeat1] = STATE(223),
        [anon_sym_print] = ACTIONS(83),
        [anon_sym_return] = ACTIONS(85),
        [anon_sym_del] = ACTIONS(87),
        [sym_pass_statement] = ACTIONS(89),
        [sym_break_statement] = ACTIONS(89),
        [sym_continue_statement] = ACTIONS(89),
        [anon_sym_if] = ACTIONS(477),
        [anon_sym_for] = ACTIONS(479),
        [anon_sym_while] = ACTIONS(481),
        [anon_sym_try] = ACTIONS(483),
        [anon_sym_with] = ACTIONS(485),
        [anon_sym_def] = ACTIONS(487),
        [anon_sym_class] = ACTIONS(489),
        [anon_sym_AT] = ACTIONS(105),
        [anon_sym_LBRACK] = ACTIONS(107),
        [anon_sym_LBRACE] = ACTIONS(109),
        [sym_number] = ACTIONS(111),
        [sym_identifier] = ACTIONS(113),
        [sym_comment] = ACTIONS(73),
        [sym__dedent] = ACTIONS(1002),
    },
    [430] = {
        [ts_builtin_sym_end] = ACTIONS(1004),
        [anon_sym_SEMI] = ACTIONS(1004),
        [anon_sym_print] = ACTIONS(1007),
        [anon_sym_return] = ACTIONS(1007),
        [anon_sym_del] = ACTIONS(1007),
        [sym_pass_statement] = ACTIONS(1007),
        [sym_break_statement] = ACTIONS(1007),
        [sym_continue_statement] = ACTIONS(1007),
        [anon_sym_if] = ACTIONS(1007),
        [anon_sym_elif] = ACTIONS(1007),
        [anon_sym_else] = ACTIONS(1007),
        [anon_sym_for] = ACTIONS(1007),
        [anon_sym_while] = ACTIONS(1007),
        [anon_sym_try] = ACTIONS(1007),
        [anon_sym_except] = ACTIONS(1007),
        [anon_sym_finally] = ACTIONS(1007),
        [anon_sym_with] = ACTIONS(1007),
        [anon_sym_def] = ACTIONS(1007),
        [anon_sym_class] = ACTIONS(1007),
        [anon_sym_AT] = ACTIONS(1004),
        [anon_sym_LBRACK] = ACTIONS(1004),
        [anon_sym_LBRACE] = ACTIONS(1004),
        [sym_number] = ACTIONS(1007),
        [sym_identifier] = ACTIONS(1010),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(1004),
        [sym__dedent] = ACTIONS(1004),
    },
    [431] = {
        [ts_builtin_sym_end] = ACTIONS(1013),
        [anon_sym_SEMI] = ACTIONS(1013),
        [anon_sym_print] = ACTIONS(1016),
        [anon_sym_return] = ACTIONS(1016),
        [anon_sym_del] = ACTIONS(1016),
        [sym_pass_statement] = ACTIONS(1016),
        [sym_break_statement] = ACTIONS(1016),
        [sym_continue_statement] = ACTIONS(1016),
        [anon_sym_if] = ACTIONS(1016),
        [anon_sym_for] = ACTIONS(1016),
        [anon_sym_while] = ACTIONS(1016),
        [anon_sym_try] = ACTIONS(1016),
        [anon_sym_with] = ACTIONS(1016),
        [anon_sym_def] = ACTIONS(1016),
        [anon_sym_class] = ACTIONS(1016),
        [anon_sym_AT] = ACTIONS(1013),
        [anon_sym_LBRACK] = ACTIONS(1013),
        [anon_sym_LBRACE] = ACTIONS(1013),
        [sym_number] = ACTIONS(1016),
        [sym_identifier] = ACTIONS(1019),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(1013),
        [sym__dedent] = ACTIONS(1013),
    },
    [432] = {
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(1022),
    },
    [433] = {
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
    [434] = {
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
    [435] = {
        [ts_builtin_sym_end] = ACTIONS(1024),
        [anon_sym_SEMI] = ACTIONS(1024),
        [anon_sym_print] = ACTIONS(1027),
        [anon_sym_return] = ACTIONS(1027),
        [anon_sym_del] = ACTIONS(1027),
        [sym_pass_statement] = ACTIONS(1027),
        [sym_break_statement] = ACTIONS(1027),
        [sym_continue_statement] = ACTIONS(1027),
        [anon_sym_if] = ACTIONS(1027),
        [anon_sym_elif] = ACTIONS(1027),
        [anon_sym_else] = ACTIONS(1027),
        [anon_sym_for] = ACTIONS(1027),
        [anon_sym_while] = ACTIONS(1027),
        [anon_sym_try] = ACTIONS(1027),
        [anon_sym_with] = ACTIONS(1027),
        [anon_sym_def] = ACTIONS(1027),
        [anon_sym_class] = ACTIONS(1027),
        [anon_sym_AT] = ACTIONS(1024),
        [anon_sym_LBRACK] = ACTIONS(1024),
        [anon_sym_LBRACE] = ACTIONS(1024),
        [sym_number] = ACTIONS(1027),
        [sym_identifier] = ACTIONS(1030),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(1024),
        [sym__dedent] = ACTIONS(1024),
    },
    [436] = {
        [sym_finally_clause] = STATE(474),
        [ts_builtin_sym_end] = ACTIONS(1033),
        [anon_sym_SEMI] = ACTIONS(1033),
        [anon_sym_print] = ACTIONS(1039),
        [anon_sym_return] = ACTIONS(1039),
        [anon_sym_del] = ACTIONS(1039),
        [sym_pass_statement] = ACTIONS(1039),
        [sym_break_statement] = ACTIONS(1039),
        [sym_continue_statement] = ACTIONS(1039),
        [anon_sym_if] = ACTIONS(1039),
        [anon_sym_for] = ACTIONS(1039),
        [anon_sym_while] = ACTIONS(1039),
        [anon_sym_try] = ACTIONS(1039),
        [anon_sym_finally] = ACTIONS(1045),
        [anon_sym_with] = ACTIONS(1039),
        [anon_sym_def] = ACTIONS(1039),
        [anon_sym_class] = ACTIONS(1039),
        [anon_sym_AT] = ACTIONS(1033),
        [anon_sym_LBRACK] = ACTIONS(1033),
        [anon_sym_LBRACE] = ACTIONS(1033),
        [sym_number] = ACTIONS(1039),
        [sym_identifier] = ACTIONS(1047),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(1033),
        [sym__dedent] = ACTIONS(1033),
    },
    [437] = {
        [ts_builtin_sym_end] = ACTIONS(1053),
        [anon_sym_SEMI] = ACTIONS(1053),
        [anon_sym_print] = ACTIONS(1056),
        [anon_sym_return] = ACTIONS(1056),
        [anon_sym_del] = ACTIONS(1056),
        [sym_pass_statement] = ACTIONS(1056),
        [sym_break_statement] = ACTIONS(1056),
        [sym_continue_statement] = ACTIONS(1056),
        [anon_sym_if] = ACTIONS(1056),
        [anon_sym_else] = ACTIONS(1056),
        [anon_sym_for] = ACTIONS(1056),
        [anon_sym_while] = ACTIONS(1056),
        [anon_sym_try] = ACTIONS(1056),
        [anon_sym_except] = ACTIONS(1056),
        [anon_sym_finally] = ACTIONS(1056),
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
    [438] = {
        [ts_builtin_sym_end] = ACTIONS(1062),
        [anon_sym_SEMI] = ACTIONS(1062),
        [anon_sym_print] = ACTIONS(1066),
        [anon_sym_return] = ACTIONS(1066),
        [anon_sym_del] = ACTIONS(1066),
        [sym_pass_statement] = ACTIONS(1066),
        [sym_break_statement] = ACTIONS(1066),
        [sym_continue_statement] = ACTIONS(1066),
        [anon_sym_if] = ACTIONS(1066),
        [anon_sym_for] = ACTIONS(1066),
        [anon_sym_while] = ACTIONS(1066),
        [anon_sym_try] = ACTIONS(1066),
        [anon_sym_with] = ACTIONS(1066),
        [anon_sym_def] = ACTIONS(1066),
        [anon_sym_class] = ACTIONS(1066),
        [anon_sym_AT] = ACTIONS(1062),
        [anon_sym_LBRACK] = ACTIONS(1062),
        [anon_sym_LBRACE] = ACTIONS(1062),
        [sym_number] = ACTIONS(1066),
        [sym_identifier] = ACTIONS(1070),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(1062),
        [sym__dedent] = ACTIONS(1062),
    },
    [439] = {
        [aux_sym_with_statement_repeat1] = STATE(457),
        [anon_sym_COMMA] = ACTIONS(1074),
        [anon_sym_COLON] = ACTIONS(1078),
        [sym_comment] = ACTIONS(73),
    },
    [440] = {
        [ts_builtin_sym_end] = ACTIONS(1082),
        [anon_sym_SEMI] = ACTIONS(1082),
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
        [anon_sym_AT] = ACTIONS(1082),
        [anon_sym_LBRACK] = ACTIONS(1082),
        [anon_sym_LBRACE] = ACTIONS(1082),
        [sym_number] = ACTIONS(1085),
        [sym_identifier] = ACTIONS(1088),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(1082),
        [sym__dedent] = ACTIONS(1082),
    },
    [441] = {
        [anon_sym_COLON] = ACTIONS(1091),
        [sym_comment] = ACTIONS(73),
    },
    [442] = {
        [anon_sym_COMMA] = ACTIONS(1093),
        [anon_sym_RPAREN] = ACTIONS(1095),
        [sym_comment] = ACTIONS(73),
    },
    [443] = {
        [anon_sym_COMMA] = ACTIONS(1097),
        [anon_sym_RPAREN] = ACTIONS(1095),
        [sym_comment] = ACTIONS(73),
    },
    [444] = {
        [anon_sym_RPAREN] = ACTIONS(1099),
        [sym_comment] = ACTIONS(73),
    },
    [445] = {
        [anon_sym_def] = ACTIONS(1101),
        [anon_sym_class] = ACTIONS(1101),
        [anon_sym_AT] = ACTIONS(1101),
        [sym_comment] = ACTIONS(73),
    },
    [446] = {
        [sym_elif_clause] = STATE(507),
        [sym_else_clause] = STATE(516),
        [sym_except_clause] = STATE(517),
        [sym_finally_clause] = STATE(518),
        [aux_sym_if_statement_repeat1] = STATE(455),
        [aux_sym_try_statement_repeat1] = STATE(456),
        [ts_builtin_sym_end] = ACTIONS(1104),
        [anon_sym_SEMI] = ACTIONS(1104),
        [anon_sym_print] = ACTIONS(1118),
        [anon_sym_return] = ACTIONS(1118),
        [anon_sym_del] = ACTIONS(1118),
        [sym_pass_statement] = ACTIONS(1118),
        [sym_break_statement] = ACTIONS(1118),
        [sym_continue_statement] = ACTIONS(1118),
        [anon_sym_if] = ACTIONS(1118),
        [anon_sym_elif] = ACTIONS(1132),
        [anon_sym_else] = ACTIONS(1135),
        [anon_sym_for] = ACTIONS(1118),
        [anon_sym_while] = ACTIONS(1118),
        [anon_sym_try] = ACTIONS(1118),
        [anon_sym_except] = ACTIONS(1140),
        [anon_sym_finally] = ACTIONS(1144),
        [anon_sym_with] = ACTIONS(1118),
        [anon_sym_def] = ACTIONS(1118),
        [anon_sym_class] = ACTIONS(1118),
        [anon_sym_AT] = ACTIONS(1104),
        [anon_sym_LBRACK] = ACTIONS(1104),
        [anon_sym_LBRACE] = ACTIONS(1104),
        [sym_number] = ACTIONS(1118),
        [sym_identifier] = ACTIONS(1149),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(1104),
        [sym__dedent] = ACTIONS(1104),
    },
    [447] = {
        [anon_sym_COLON] = ACTIONS(1163),
        [anon_sym_in] = ACTIONS(1165),
        [anon_sym_RPAREN] = ACTIONS(1167),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(1169),
    },
    [448] = {
        [aux_sym_print_statement_repeat1] = STATE(454),
        [aux_sym_subscript_repeat1] = STATE(43),
        [anon_sym_COMMA] = ACTIONS(1172),
        [anon_sym_COLON] = ACTIONS(1187),
        [anon_sym_for] = ACTIONS(1195),
        [anon_sym_in] = ACTIONS(1199),
        [anon_sym_as] = ACTIONS(1204),
        [anon_sym_LPAREN] = ACTIONS(1207),
        [anon_sym_RPAREN] = ACTIONS(1210),
        [anon_sym_PLUS] = ACTIONS(1222),
        [anon_sym_LBRACK] = ACTIONS(1225),
        [anon_sym_RBRACK] = ACTIONS(1228),
        [anon_sym_RBRACE] = ACTIONS(1235),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(1239),
    },
    [449] = {
        [anon_sym_COMMA] = ACTIONS(1246),
        [anon_sym_RPAREN] = ACTIONS(1250),
        [sym_comment] = ACTIONS(73),
    },
    [450] = {
        [aux_sym_call_repeat2] = STATE(459),
        [anon_sym_COMMA] = ACTIONS(1254),
        [anon_sym_RPAREN] = ACTIONS(1256),
        [sym_comment] = ACTIONS(73),
    },
    [451] = {
        [anon_sym_RPAREN] = ACTIONS(1258),
        [sym_comment] = ACTIONS(73),
    },
    [452] = {
        [aux_sym_dictionary_repeat1] = STATE(165),
        [anon_sym_COMMA] = ACTIONS(1260),
        [anon_sym_for] = ACTIONS(403),
        [anon_sym_RBRACE] = ACTIONS(1264),
        [sym_comment] = ACTIONS(73),
    },
    [453] = {
        [sym__statement] = STATE(484),
        [sym__simple_statement] = STATE(485),
        [sym_print_statement] = STATE(5),
        [sym_expression_statement] = STATE(5),
        [sym_return_statement] = STATE(5),
        [sym_delete_statement] = STATE(5),
        [sym__compound_statement] = STATE(433),
        [sym_if_statement] = STATE(434),
        [sym_for_statement] = STATE(434),
        [sym_while_statement] = STATE(434),
        [sym_try_statement] = STATE(434),
        [sym_with_statement] = STATE(434),
        [sym_function_definition] = STATE(434),
        [sym_class_definition] = STATE(434),
        [sym_decorated_definition] = STATE(434),
        [sym_decorator] = STATE(22),
        [sym__expression] = STATE(23),
        [sym_binary_operator] = STATE(16),
        [sym_subscript] = STATE(16),
        [sym_call] = STATE(16),
        [sym_list] = STATE(16),
        [sym_list_comprehension] = STATE(16),
        [sym_dictionary] = STATE(16),
        [sym_dictionary_comprehension] = STATE(16),
        [aux_sym_decorated_definition_repeat1] = STATE(458),
        [ts_builtin_sym_end] = ACTIONS(169),
        [anon_sym_SEMI] = ACTIONS(171),
        [anon_sym_print] = ACTIONS(83),
        [anon_sym_return] = ACTIONS(85),
        [anon_sym_del] = ACTIONS(87),
        [sym_pass_statement] = ACTIONS(89),
        [sym_break_statement] = ACTIONS(89),
        [sym_continue_statement] = ACTIONS(89),
        [anon_sym_if] = ACTIONS(1268),
        [anon_sym_for] = ACTIONS(1270),
        [anon_sym_while] = ACTIONS(1272),
        [anon_sym_try] = ACTIONS(1274),
        [anon_sym_with] = ACTIONS(1276),
        [anon_sym_def] = ACTIONS(1278),
        [anon_sym_class] = ACTIONS(1280),
        [anon_sym_AT] = ACTIONS(105),
        [anon_sym_LBRACK] = ACTIONS(107),
        [anon_sym_LBRACE] = ACTIONS(109),
        [sym_number] = ACTIONS(111),
        [sym_identifier] = ACTIONS(113),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(171),
        [sym__dedent] = ACTIONS(1282),
    },
    [454] = {
        [anon_sym_COMMA] = ACTIONS(1284),
        [anon_sym_COLON] = ACTIONS(331),
        [anon_sym_in] = ACTIONS(331),
        [anon_sym_RPAREN] = ACTIONS(1286),
        [anon_sym_RBRACK] = ACTIONS(423),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(1289),
    },
    [455] = {
        [sym_elif_clause] = STATE(475),
        [sym_else_clause] = STATE(476),
        [ts_builtin_sym_end] = ACTIONS(771),
        [anon_sym_SEMI] = ACTIONS(771),
        [anon_sym_print] = ACTIONS(769),
        [anon_sym_return] = ACTIONS(769),
        [anon_sym_del] = ACTIONS(769),
        [sym_pass_statement] = ACTIONS(769),
        [sym_break_statement] = ACTIONS(769),
        [sym_continue_statement] = ACTIONS(769),
        [anon_sym_if] = ACTIONS(769),
        [anon_sym_elif] = ACTIONS(1292),
        [anon_sym_else] = ACTIONS(1294),
        [anon_sym_for] = ACTIONS(769),
        [anon_sym_while] = ACTIONS(769),
        [anon_sym_try] = ACTIONS(769),
        [anon_sym_with] = ACTIONS(769),
        [anon_sym_def] = ACTIONS(769),
        [anon_sym_class] = ACTIONS(769),
        [anon_sym_AT] = ACTIONS(771),
        [anon_sym_LBRACK] = ACTIONS(771),
        [anon_sym_LBRACE] = ACTIONS(771),
        [sym_number] = ACTIONS(769),
        [sym_identifier] = ACTIONS(773),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(771),
        [sym__dedent] = ACTIONS(771),
    },
    [456] = {
        [sym_else_clause] = STATE(471),
        [sym_except_clause] = STATE(472),
        [sym_finally_clause] = STATE(473),
        [ts_builtin_sym_end] = ACTIONS(661),
        [anon_sym_SEMI] = ACTIONS(661),
        [anon_sym_print] = ACTIONS(659),
        [anon_sym_return] = ACTIONS(659),
        [anon_sym_del] = ACTIONS(659),
        [sym_pass_statement] = ACTIONS(659),
        [sym_break_statement] = ACTIONS(659),
        [sym_continue_statement] = ACTIONS(659),
        [anon_sym_if] = ACTIONS(659),
        [anon_sym_else] = ACTIONS(1294),
        [anon_sym_for] = ACTIONS(659),
        [anon_sym_while] = ACTIONS(659),
        [anon_sym_try] = ACTIONS(659),
        [anon_sym_except] = ACTIONS(1296),
        [anon_sym_finally] = ACTIONS(1045),
        [anon_sym_with] = ACTIONS(659),
        [anon_sym_def] = ACTIONS(659),
        [anon_sym_class] = ACTIONS(659),
        [anon_sym_AT] = ACTIONS(661),
        [anon_sym_LBRACK] = ACTIONS(661),
        [anon_sym_LBRACE] = ACTIONS(661),
        [sym_number] = ACTIONS(659),
        [sym_identifier] = ACTIONS(663),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(661),
        [sym__dedent] = ACTIONS(661),
    },
    [457] = {
        [anon_sym_COMMA] = ACTIONS(623),
        [anon_sym_COLON] = ACTIONS(1298),
        [sym_comment] = ACTIONS(73),
    },
    [458] = {
        [sym_function_definition] = STATE(464),
        [sym_class_definition] = STATE(464),
        [sym_decorator] = STATE(27),
        [anon_sym_def] = ACTIONS(1300),
        [anon_sym_class] = ACTIONS(1302),
        [anon_sym_AT] = ACTIONS(105),
        [sym_comment] = ACTIONS(73),
    },
    [459] = {
        [anon_sym_COMMA] = ACTIONS(1304),
        [anon_sym_RPAREN] = ACTIONS(1306),
        [sym_comment] = ACTIONS(73),
    },
    [460] = {
        [sym__expression] = STATE(77),
        [sym_binary_operator] = STATE(36),
        [sym_subscript] = STATE(36),
        [sym_call] = STATE(36),
        [sym_keyword_argument] = STATE(78),
        [sym_dictionary_splat_argument] = STATE(462),
        [sym_list] = STATE(36),
        [sym_list_comprehension] = STATE(36),
        [sym_dictionary] = STATE(36),
        [sym_dictionary_comprehension] = STATE(36),
        [anon_sym_LBRACK] = ACTIONS(117),
        [anon_sym_STAR_STAR] = ACTIONS(195),
        [anon_sym_LBRACE] = ACTIONS(119),
        [sym_number] = ACTIONS(121),
        [sym_identifier] = ACTIONS(197),
        [sym_comment] = ACTIONS(73),
    },
    [461] = {
        [anon_sym_COMMA] = ACTIONS(1308),
        [anon_sym_COLON] = ACTIONS(1308),
        [anon_sym_for] = ACTIONS(1308),
        [anon_sym_in] = ACTIONS(1308),
        [anon_sym_as] = ACTIONS(1308),
        [anon_sym_LPAREN] = ACTIONS(1308),
        [anon_sym_RPAREN] = ACTIONS(1308),
        [anon_sym_PLUS] = ACTIONS(1308),
        [anon_sym_LBRACK] = ACTIONS(1308),
        [anon_sym_RBRACK] = ACTIONS(1308),
        [anon_sym_RBRACE] = ACTIONS(1308),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(1308),
    },
    [462] = {
        [anon_sym_RPAREN] = ACTIONS(1311),
        [sym_comment] = ACTIONS(73),
    },
    [463] = {
        [anon_sym_COMMA] = ACTIONS(1313),
        [anon_sym_COLON] = ACTIONS(1313),
        [anon_sym_for] = ACTIONS(1313),
        [anon_sym_in] = ACTIONS(1313),
        [anon_sym_as] = ACTIONS(1313),
        [anon_sym_LPAREN] = ACTIONS(1313),
        [anon_sym_RPAREN] = ACTIONS(1313),
        [anon_sym_PLUS] = ACTIONS(1313),
        [anon_sym_LBRACK] = ACTIONS(1313),
        [anon_sym_RBRACK] = ACTIONS(1313),
        [anon_sym_RBRACE] = ACTIONS(1313),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(1313),
    },
    [464] = {
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
    [465] = {
        [sym__simple_statement] = STATE(466),
        [sym_print_statement] = STATE(5),
        [sym_expression_statement] = STATE(5),
        [sym_return_statement] = STATE(5),
        [sym_delete_statement] = STATE(5),
        [sym__suite] = STATE(467),
        [sym__expression] = STATE(23),
        [sym_binary_operator] = STATE(16),
        [sym_subscript] = STATE(16),
        [sym_call] = STATE(16),
        [sym_list] = STATE(16),
        [sym_list_comprehension] = STATE(16),
        [sym_dictionary] = STATE(16),
        [sym_dictionary_comprehension] = STATE(16),
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
        [sym__indent] = ACTIONS(881),
    },
    [466] = {
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(1002),
    },
    [467] = {
        [ts_builtin_sym_end] = ACTIONS(629),
        [anon_sym_SEMI] = ACTIONS(629),
        [anon_sym_print] = ACTIONS(627),
        [anon_sym_return] = ACTIONS(627),
        [anon_sym_del] = ACTIONS(627),
        [sym_pass_statement] = ACTIONS(627),
        [sym_break_statement] = ACTIONS(627),
        [sym_continue_statement] = ACTIONS(627),
        [anon_sym_if] = ACTIONS(627),
        [anon_sym_for] = ACTIONS(627),
        [anon_sym_while] = ACTIONS(627),
        [anon_sym_try] = ACTIONS(627),
        [anon_sym_with] = ACTIONS(627),
        [anon_sym_def] = ACTIONS(627),
        [anon_sym_class] = ACTIONS(627),
        [anon_sym_AT] = ACTIONS(629),
        [anon_sym_LBRACK] = ACTIONS(629),
        [anon_sym_LBRACE] = ACTIONS(629),
        [sym_number] = ACTIONS(627),
        [sym_identifier] = ACTIONS(631),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(629),
        [sym__dedent] = ACTIONS(629),
    },
    [468] = {
        [ts_builtin_sym_end] = ACTIONS(499),
        [anon_sym_SEMI] = ACTIONS(499),
        [anon_sym_print] = ACTIONS(501),
        [anon_sym_return] = ACTIONS(501),
        [anon_sym_del] = ACTIONS(501),
        [sym_pass_statement] = ACTIONS(501),
        [sym_break_statement] = ACTIONS(501),
        [sym_continue_statement] = ACTIONS(501),
        [anon_sym_if] = ACTIONS(501),
        [anon_sym_elif] = ACTIONS(501),
        [anon_sym_else] = ACTIONS(501),
        [anon_sym_for] = ACTIONS(501),
        [anon_sym_while] = ACTIONS(501),
        [anon_sym_try] = ACTIONS(501),
        [anon_sym_except] = ACTIONS(501),
        [anon_sym_finally] = ACTIONS(501),
        [anon_sym_with] = ACTIONS(501),
        [anon_sym_def] = ACTIONS(501),
        [anon_sym_class] = ACTIONS(501),
        [anon_sym_AT] = ACTIONS(499),
        [anon_sym_LBRACK] = ACTIONS(499),
        [anon_sym_LBRACE] = ACTIONS(499),
        [sym_number] = ACTIONS(501),
        [sym_identifier] = ACTIONS(503),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(499),
        [sym__dedent] = ACTIONS(499),
    },
    [469] = {
        [sym__statement] = STATE(226),
        [sym__simple_statement] = STATE(219),
        [sym_print_statement] = STATE(5),
        [sym_expression_statement] = STATE(5),
        [sym_return_statement] = STATE(5),
        [sym_delete_statement] = STATE(5),
        [sym__compound_statement] = STATE(220),
        [sym_if_statement] = STATE(221),
        [sym_for_statement] = STATE(221),
        [sym_while_statement] = STATE(221),
        [sym_try_statement] = STATE(221),
        [sym_with_statement] = STATE(221),
        [sym_function_definition] = STATE(221),
        [sym_class_definition] = STATE(221),
        [sym_decorated_definition] = STATE(221),
        [sym_decorator] = STATE(22),
        [sym__expression] = STATE(23),
        [sym_binary_operator] = STATE(16),
        [sym_subscript] = STATE(16),
        [sym_call] = STATE(16),
        [sym_list] = STATE(16),
        [sym_list_comprehension] = STATE(16),
        [sym_dictionary] = STATE(16),
        [sym_dictionary_comprehension] = STATE(16),
        [aux_sym_decorated_definition_repeat1] = STATE(223),
        [anon_sym_print] = ACTIONS(83),
        [anon_sym_return] = ACTIONS(85),
        [anon_sym_del] = ACTIONS(87),
        [sym_pass_statement] = ACTIONS(89),
        [sym_break_statement] = ACTIONS(89),
        [sym_continue_statement] = ACTIONS(89),
        [anon_sym_if] = ACTIONS(477),
        [anon_sym_for] = ACTIONS(479),
        [anon_sym_while] = ACTIONS(481),
        [anon_sym_try] = ACTIONS(483),
        [anon_sym_with] = ACTIONS(485),
        [anon_sym_def] = ACTIONS(487),
        [anon_sym_class] = ACTIONS(489),
        [anon_sym_AT] = ACTIONS(105),
        [anon_sym_LBRACK] = ACTIONS(107),
        [anon_sym_LBRACE] = ACTIONS(109),
        [sym_number] = ACTIONS(111),
        [sym_identifier] = ACTIONS(113),
        [sym_comment] = ACTIONS(73),
        [sym__dedent] = ACTIONS(1282),
    },
    [470] = {
        [ts_builtin_sym_end] = ACTIONS(519),
        [anon_sym_SEMI] = ACTIONS(519),
        [anon_sym_print] = ACTIONS(521),
        [anon_sym_return] = ACTIONS(521),
        [anon_sym_del] = ACTIONS(521),
        [sym_pass_statement] = ACTIONS(521),
        [sym_break_statement] = ACTIONS(521),
        [sym_continue_statement] = ACTIONS(521),
        [anon_sym_if] = ACTIONS(521),
        [anon_sym_elif] = ACTIONS(521),
        [anon_sym_else] = ACTIONS(521),
        [anon_sym_for] = ACTIONS(521),
        [anon_sym_while] = ACTIONS(521),
        [anon_sym_try] = ACTIONS(521),
        [anon_sym_except] = ACTIONS(521),
        [anon_sym_finally] = ACTIONS(521),
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
    [471] = {
        [sym_finally_clause] = STATE(474),
        [ts_builtin_sym_end] = ACTIONS(675),
        [anon_sym_SEMI] = ACTIONS(675),
        [anon_sym_print] = ACTIONS(673),
        [anon_sym_return] = ACTIONS(673),
        [anon_sym_del] = ACTIONS(673),
        [sym_pass_statement] = ACTIONS(673),
        [sym_break_statement] = ACTIONS(673),
        [sym_continue_statement] = ACTIONS(673),
        [anon_sym_if] = ACTIONS(673),
        [anon_sym_for] = ACTIONS(673),
        [anon_sym_while] = ACTIONS(673),
        [anon_sym_try] = ACTIONS(673),
        [anon_sym_finally] = ACTIONS(1045),
        [anon_sym_with] = ACTIONS(673),
        [anon_sym_def] = ACTIONS(673),
        [anon_sym_class] = ACTIONS(673),
        [anon_sym_AT] = ACTIONS(675),
        [anon_sym_LBRACK] = ACTIONS(675),
        [anon_sym_LBRACE] = ACTIONS(675),
        [sym_number] = ACTIONS(673),
        [sym_identifier] = ACTIONS(677),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(675),
        [sym__dedent] = ACTIONS(675),
    },
    [472] = {
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
    [473] = {
        [ts_builtin_sym_end] = ACTIONS(675),
        [anon_sym_SEMI] = ACTIONS(675),
        [anon_sym_print] = ACTIONS(673),
        [anon_sym_return] = ACTIONS(673),
        [anon_sym_del] = ACTIONS(673),
        [sym_pass_statement] = ACTIONS(673),
        [sym_break_statement] = ACTIONS(673),
        [sym_continue_statement] = ACTIONS(673),
        [anon_sym_if] = ACTIONS(673),
        [anon_sym_for] = ACTIONS(673),
        [anon_sym_while] = ACTIONS(673),
        [anon_sym_try] = ACTIONS(673),
        [anon_sym_with] = ACTIONS(673),
        [anon_sym_def] = ACTIONS(673),
        [anon_sym_class] = ACTIONS(673),
        [anon_sym_AT] = ACTIONS(675),
        [anon_sym_LBRACK] = ACTIONS(675),
        [anon_sym_LBRACE] = ACTIONS(675),
        [sym_number] = ACTIONS(673),
        [sym_identifier] = ACTIONS(677),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(675),
        [sym__dedent] = ACTIONS(675),
    },
    [474] = {
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
    [475] = {
        [ts_builtin_sym_end] = ACTIONS(777),
        [anon_sym_SEMI] = ACTIONS(777),
        [anon_sym_print] = ACTIONS(775),
        [anon_sym_return] = ACTIONS(775),
        [anon_sym_del] = ACTIONS(775),
        [sym_pass_statement] = ACTIONS(775),
        [sym_break_statement] = ACTIONS(775),
        [sym_continue_statement] = ACTIONS(775),
        [anon_sym_if] = ACTIONS(775),
        [anon_sym_elif] = ACTIONS(775),
        [anon_sym_else] = ACTIONS(775),
        [anon_sym_for] = ACTIONS(775),
        [anon_sym_while] = ACTIONS(775),
        [anon_sym_try] = ACTIONS(775),
        [anon_sym_with] = ACTIONS(775),
        [anon_sym_def] = ACTIONS(775),
        [anon_sym_class] = ACTIONS(775),
        [anon_sym_AT] = ACTIONS(777),
        [anon_sym_LBRACK] = ACTIONS(777),
        [anon_sym_LBRACE] = ACTIONS(777),
        [sym_number] = ACTIONS(775),
        [sym_identifier] = ACTIONS(779),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(777),
        [sym__dedent] = ACTIONS(777),
    },
    [476] = {
        [ts_builtin_sym_end] = ACTIONS(783),
        [anon_sym_SEMI] = ACTIONS(783),
        [anon_sym_print] = ACTIONS(781),
        [anon_sym_return] = ACTIONS(781),
        [anon_sym_del] = ACTIONS(781),
        [sym_pass_statement] = ACTIONS(781),
        [sym_break_statement] = ACTIONS(781),
        [sym_continue_statement] = ACTIONS(781),
        [anon_sym_if] = ACTIONS(781),
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
    [477] = {
        [sym__simple_statement] = STATE(466),
        [sym_print_statement] = STATE(5),
        [sym_expression_statement] = STATE(5),
        [sym_return_statement] = STATE(5),
        [sym_delete_statement] = STATE(5),
        [sym__suite] = STATE(478),
        [sym__expression] = STATE(23),
        [sym_binary_operator] = STATE(16),
        [sym_subscript] = STATE(16),
        [sym_call] = STATE(16),
        [sym_list] = STATE(16),
        [sym_list_comprehension] = STATE(16),
        [sym_dictionary] = STATE(16),
        [sym_dictionary_comprehension] = STATE(16),
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
        [sym__indent] = ACTIONS(881),
    },
    [478] = {
        [ts_builtin_sym_end] = ACTIONS(693),
        [anon_sym_SEMI] = ACTIONS(693),
        [anon_sym_print] = ACTIONS(691),
        [anon_sym_return] = ACTIONS(691),
        [anon_sym_del] = ACTIONS(691),
        [sym_pass_statement] = ACTIONS(691),
        [sym_break_statement] = ACTIONS(691),
        [sym_continue_statement] = ACTIONS(691),
        [anon_sym_if] = ACTIONS(691),
        [anon_sym_for] = ACTIONS(691),
        [anon_sym_while] = ACTIONS(691),
        [anon_sym_try] = ACTIONS(691),
        [anon_sym_finally] = ACTIONS(691),
        [anon_sym_with] = ACTIONS(691),
        [anon_sym_def] = ACTIONS(691),
        [anon_sym_class] = ACTIONS(691),
        [anon_sym_AT] = ACTIONS(693),
        [anon_sym_LBRACK] = ACTIONS(693),
        [anon_sym_LBRACE] = ACTIONS(693),
        [sym_number] = ACTIONS(691),
        [sym_identifier] = ACTIONS(695),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(693),
        [sym__dedent] = ACTIONS(693),
    },
    [479] = {
        [sym__expression] = STATE(480),
        [sym_binary_operator] = STATE(16),
        [sym_subscript] = STATE(16),
        [sym_call] = STATE(16),
        [sym_list] = STATE(16),
        [sym_list_comprehension] = STATE(16),
        [sym_dictionary] = STATE(16),
        [sym_dictionary_comprehension] = STATE(16),
        [anon_sym_LBRACK] = ACTIONS(107),
        [anon_sym_RBRACK] = ACTIONS(427),
        [anon_sym_LBRACE] = ACTIONS(109),
        [sym_number] = ACTIONS(111),
        [sym_identifier] = ACTIONS(111),
        [sym_comment] = ACTIONS(73),
    },
    [480] = {
        [anon_sym_COMMA] = ACTIONS(333),
        [anon_sym_COLON] = ACTIONS(333),
        [anon_sym_in] = ACTIONS(333),
        [anon_sym_LPAREN] = ACTIONS(161),
        [anon_sym_RPAREN] = ACTIONS(333),
        [anon_sym_PLUS] = ACTIONS(1316),
        [anon_sym_LBRACK] = ACTIONS(165),
        [anon_sym_RBRACK] = ACTIONS(333),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(333),
    },
    [481] = {
        [sym__expression] = STATE(482),
        [sym_binary_operator] = STATE(16),
        [sym_subscript] = STATE(16),
        [sym_call] = STATE(16),
        [sym_list] = STATE(16),
        [sym_list_comprehension] = STATE(16),
        [sym_dictionary] = STATE(16),
        [sym_dictionary_comprehension] = STATE(16),
        [anon_sym_LBRACK] = ACTIONS(107),
        [anon_sym_LBRACE] = ACTIONS(109),
        [sym_number] = ACTIONS(111),
        [sym_identifier] = ACTIONS(111),
        [sym_comment] = ACTIONS(73),
    },
    [482] = {
        [anon_sym_COMMA] = ACTIONS(247),
        [anon_sym_COLON] = ACTIONS(247),
        [anon_sym_in] = ACTIONS(247),
        [anon_sym_LPAREN] = ACTIONS(1207),
        [anon_sym_RPAREN] = ACTIONS(247),
        [anon_sym_PLUS] = ACTIONS(1318),
        [anon_sym_LBRACK] = ACTIONS(1225),
        [anon_sym_RBRACK] = ACTIONS(247),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(247),
    },
    [483] = {
        [sym_expression_list] = STATE(487),
        [sym__expression] = STATE(108),
        [sym_binary_operator] = STATE(36),
        [sym_subscript] = STATE(36),
        [sym_call] = STATE(36),
        [sym_list] = STATE(36),
        [sym_list_comprehension] = STATE(36),
        [sym_dictionary] = STATE(36),
        [sym_dictionary_comprehension] = STATE(36),
        [anon_sym_LBRACK] = ACTIONS(117),
        [anon_sym_LBRACE] = ACTIONS(119),
        [sym_number] = ACTIONS(121),
        [sym_identifier] = ACTIONS(121),
        [sym_comment] = ACTIONS(73),
    },
    [484] = {
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
    [485] = {
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(1321),
    },
    [486] = {
        [ts_builtin_sym_end] = ACTIONS(395),
        [anon_sym_SEMI] = ACTIONS(395),
        [anon_sym_print] = ACTIONS(397),
        [anon_sym_return] = ACTIONS(397),
        [anon_sym_del] = ACTIONS(397),
        [sym_pass_statement] = ACTIONS(397),
        [sym_break_statement] = ACTIONS(397),
        [sym_continue_statement] = ACTIONS(397),
        [anon_sym_if] = ACTIONS(397),
        [anon_sym_for] = ACTIONS(397),
        [anon_sym_while] = ACTIONS(397),
        [anon_sym_try] = ACTIONS(397),
        [anon_sym_with] = ACTIONS(397),
        [anon_sym_def] = ACTIONS(397),
        [anon_sym_class] = ACTIONS(397),
        [anon_sym_AT] = ACTIONS(395),
        [anon_sym_LBRACK] = ACTIONS(395),
        [anon_sym_LBRACE] = ACTIONS(395),
        [sym_number] = ACTIONS(397),
        [sym_identifier] = ACTIONS(399),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(395),
        [sym__dedent] = ACTIONS(395),
    },
    [487] = {
        [anon_sym_in] = ACTIONS(1323),
        [sym_comment] = ACTIONS(73),
    },
    [488] = {
        [sym_expression_list] = STATE(489),
        [sym__expression] = STATE(108),
        [sym_binary_operator] = STATE(36),
        [sym_subscript] = STATE(36),
        [sym_call] = STATE(36),
        [sym_list] = STATE(36),
        [sym_list_comprehension] = STATE(36),
        [sym_dictionary] = STATE(36),
        [sym_dictionary_comprehension] = STATE(36),
        [anon_sym_LBRACK] = ACTIONS(117),
        [anon_sym_LBRACE] = ACTIONS(119),
        [sym_number] = ACTIONS(121),
        [sym_identifier] = ACTIONS(121),
        [sym_comment] = ACTIONS(73),
    },
    [489] = {
        [anon_sym_COLON] = ACTIONS(1163),
        [sym_comment] = ACTIONS(73),
    },
    [490] = {
        [sym__simple_statement] = STATE(466),
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
        [sym__indent] = ACTIONS(881),
    },
    [491] = {
        [sym_else_clause] = STATE(492),
        [ts_builtin_sym_end] = ACTIONS(743),
        [anon_sym_SEMI] = ACTIONS(743),
        [anon_sym_print] = ACTIONS(741),
        [anon_sym_return] = ACTIONS(741),
        [anon_sym_del] = ACTIONS(741),
        [sym_pass_statement] = ACTIONS(741),
        [sym_break_statement] = ACTIONS(741),
        [sym_continue_statement] = ACTIONS(741),
        [anon_sym_if] = ACTIONS(741),
        [anon_sym_else] = ACTIONS(1294),
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
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(743),
        [sym__dedent] = ACTIONS(743),
    },
    [492] = {
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
    [493] = {
        [anon_sym_COMMA] = ACTIONS(895),
        [anon_sym_COLON] = ACTIONS(895),
        [anon_sym_for] = ACTIONS(895),
        [anon_sym_in] = ACTIONS(895),
        [anon_sym_as] = ACTIONS(895),
        [anon_sym_LPAREN] = ACTIONS(895),
        [anon_sym_RPAREN] = ACTIONS(895),
        [anon_sym_PLUS] = ACTIONS(895),
        [anon_sym_LBRACK] = ACTIONS(895),
        [anon_sym_RBRACK] = ACTIONS(895),
        [anon_sym_RBRACE] = ACTIONS(895),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(895),
    },
    [494] = {
        [sym__expression] = STATE(81),
        [sym_binary_operator] = STATE(36),
        [sym_subscript] = STATE(36),
        [sym_call] = STATE(36),
        [sym_keyword_argument] = STATE(82),
        [sym_dictionary_splat_argument] = STATE(496),
        [sym_list] = STATE(36),
        [sym_list_comprehension] = STATE(36),
        [sym_dictionary] = STATE(36),
        [sym_dictionary_comprehension] = STATE(36),
        [anon_sym_LBRACK] = ACTIONS(117),
        [anon_sym_STAR_STAR] = ACTIONS(195),
        [anon_sym_LBRACE] = ACTIONS(119),
        [sym_number] = ACTIONS(121),
        [sym_identifier] = ACTIONS(197),
        [sym_comment] = ACTIONS(73),
    },
    [495] = {
        [anon_sym_COMMA] = ACTIONS(1325),
        [anon_sym_COLON] = ACTIONS(1325),
        [anon_sym_for] = ACTIONS(1325),
        [anon_sym_in] = ACTIONS(1325),
        [anon_sym_as] = ACTIONS(1325),
        [anon_sym_LPAREN] = ACTIONS(1325),
        [anon_sym_RPAREN] = ACTIONS(1325),
        [anon_sym_PLUS] = ACTIONS(1325),
        [anon_sym_LBRACK] = ACTIONS(1325),
        [anon_sym_RBRACK] = ACTIONS(1325),
        [anon_sym_RBRACE] = ACTIONS(1325),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(1325),
    },
    [496] = {
        [anon_sym_RPAREN] = ACTIONS(1328),
        [sym_comment] = ACTIONS(73),
    },
    [497] = {
        [anon_sym_COMMA] = ACTIONS(1330),
        [anon_sym_COLON] = ACTIONS(1330),
        [anon_sym_for] = ACTIONS(1330),
        [anon_sym_in] = ACTIONS(1330),
        [anon_sym_as] = ACTIONS(1330),
        [anon_sym_LPAREN] = ACTIONS(1330),
        [anon_sym_RPAREN] = ACTIONS(1330),
        [anon_sym_PLUS] = ACTIONS(1330),
        [anon_sym_LBRACK] = ACTIONS(1330),
        [anon_sym_RBRACK] = ACTIONS(1330),
        [anon_sym_RBRACE] = ACTIONS(1330),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(1330),
    },
    [498] = {
        [anon_sym_RPAREN] = ACTIONS(1306),
        [anon_sym_STAR] = ACTIONS(1333),
        [anon_sym_LBRACK] = ACTIONS(1336),
        [anon_sym_STAR_STAR] = ACTIONS(1336),
        [anon_sym_LBRACE] = ACTIONS(1336),
        [sym_number] = ACTIONS(1333),
        [sym_identifier] = ACTIONS(1333),
        [sym_comment] = ACTIONS(73),
    },
    [499] = {
        [sym__expression] = STATE(510),
        [sym_binary_operator] = STATE(16),
        [sym_subscript] = STATE(16),
        [sym_call] = STATE(16),
        [sym_list] = STATE(16),
        [sym_list_comprehension] = STATE(16),
        [sym_dictionary] = STATE(16),
        [sym_dictionary_comprehension] = STATE(16),
        [anon_sym_RPAREN] = ACTIONS(1306),
        [anon_sym_STAR] = ACTIONS(1333),
        [anon_sym_LBRACK] = ACTIONS(853),
        [anon_sym_DOT_DOT_DOT] = ACTIONS(215),
        [anon_sym_RBRACK] = ACTIONS(1339),
        [anon_sym_STAR_STAR] = ACTIONS(1336),
        [anon_sym_LBRACE] = ACTIONS(865),
        [sym_number] = ACTIONS(871),
        [sym_identifier] = ACTIONS(871),
        [sym_comment] = ACTIONS(73),
    },
    [500] = {
        [sym__simple_statement] = STATE(466),
        [sym_print_statement] = STATE(5),
        [sym_expression_statement] = STATE(5),
        [sym_return_statement] = STATE(5),
        [sym_delete_statement] = STATE(5),
        [sym__suite] = STATE(503),
        [sym__expression] = STATE(504),
        [sym_binary_operator] = STATE(16),
        [sym_subscript] = STATE(16),
        [sym_call] = STATE(16),
        [sym_list] = STATE(16),
        [sym_list_comprehension] = STATE(16),
        [sym_dictionary] = STATE(16),
        [sym_dictionary_comprehension] = STATE(16),
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
        [sym__indent] = ACTIONS(881),
    },
    [501] = {
        [anon_sym_COMMA] = ACTIONS(1325),
        [anon_sym_COLON] = ACTIONS(1325),
        [anon_sym_for] = ACTIONS(1325),
        [anon_sym_in] = ACTIONS(1325),
        [anon_sym_as] = ACTIONS(1325),
        [anon_sym_LPAREN] = ACTIONS(1325),
        [anon_sym_RPAREN] = ACTIONS(1325),
        [anon_sym_PLUS] = ACTIONS(1325),
        [anon_sym_LBRACK] = ACTIONS(1325),
        [anon_sym_RBRACK] = ACTIONS(1325),
        [anon_sym_RBRACE] = ACTIONS(1325),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(1341),
    },
    [502] = {
        [anon_sym_COMMA] = ACTIONS(1345),
        [anon_sym_COLON] = ACTIONS(1345),
        [anon_sym_for] = ACTIONS(1345),
        [anon_sym_in] = ACTIONS(1345),
        [anon_sym_as] = ACTIONS(1345),
        [anon_sym_LPAREN] = ACTIONS(1345),
        [anon_sym_RPAREN] = ACTIONS(1345),
        [anon_sym_PLUS] = ACTIONS(1345),
        [anon_sym_LBRACK] = ACTIONS(1345),
        [anon_sym_RBRACK] = ACTIONS(1345),
        [anon_sym_RBRACE] = ACTIONS(1345),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(1345),
    },
    [503] = {
        [sym_elif_clause] = STATE(507),
        [sym_else_clause] = STATE(508),
        [aux_sym_if_statement_repeat1] = STATE(455),
        [ts_builtin_sym_end] = ACTIONS(1349),
        [anon_sym_SEMI] = ACTIONS(1349),
        [anon_sym_print] = ACTIONS(1355),
        [anon_sym_return] = ACTIONS(1355),
        [anon_sym_del] = ACTIONS(1355),
        [sym_pass_statement] = ACTIONS(1355),
        [sym_break_statement] = ACTIONS(1355),
        [sym_continue_statement] = ACTIONS(1355),
        [anon_sym_if] = ACTIONS(1355),
        [anon_sym_elif] = ACTIONS(1132),
        [anon_sym_else] = ACTIONS(1135),
        [anon_sym_for] = ACTIONS(1355),
        [anon_sym_while] = ACTIONS(1355),
        [anon_sym_try] = ACTIONS(1355),
        [anon_sym_except] = ACTIONS(1361),
        [anon_sym_finally] = ACTIONS(1361),
        [anon_sym_with] = ACTIONS(1355),
        [anon_sym_def] = ACTIONS(1355),
        [anon_sym_class] = ACTIONS(1355),
        [anon_sym_AT] = ACTIONS(1349),
        [anon_sym_LBRACK] = ACTIONS(1349),
        [anon_sym_LBRACE] = ACTIONS(1349),
        [sym_number] = ACTIONS(1355),
        [sym_identifier] = ACTIONS(1364),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(1349),
        [sym__dedent] = ACTIONS(1349),
    },
    [504] = {
        [anon_sym_COMMA] = ACTIONS(321),
        [anon_sym_for] = ACTIONS(321),
        [anon_sym_LPAREN] = ACTIONS(161),
        [anon_sym_PLUS] = ACTIONS(1370),
        [anon_sym_LBRACK] = ACTIONS(165),
        [anon_sym_RBRACE] = ACTIONS(321),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(167),
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
        [anon_sym_LBRACK] = ACTIONS(107),
        [anon_sym_LBRACE] = ACTIONS(109),
        [sym_number] = ACTIONS(111),
        [sym_identifier] = ACTIONS(111),
        [sym_comment] = ACTIONS(73),
    },
    [506] = {
        [anon_sym_COMMA] = ACTIONS(247),
        [anon_sym_for] = ACTIONS(247),
        [anon_sym_LPAREN] = ACTIONS(1207),
        [anon_sym_PLUS] = ACTIONS(1372),
        [anon_sym_LBRACK] = ACTIONS(1225),
        [anon_sym_RBRACE] = ACTIONS(247),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(247),
    },
    [507] = {
        [ts_builtin_sym_end] = ACTIONS(765),
        [anon_sym_SEMI] = ACTIONS(765),
        [anon_sym_print] = ACTIONS(763),
        [anon_sym_return] = ACTIONS(763),
        [anon_sym_del] = ACTIONS(763),
        [sym_pass_statement] = ACTIONS(763),
        [sym_break_statement] = ACTIONS(763),
        [sym_continue_statement] = ACTIONS(763),
        [anon_sym_if] = ACTIONS(763),
        [anon_sym_elif] = ACTIONS(763),
        [anon_sym_else] = ACTIONS(763),
        [anon_sym_for] = ACTIONS(763),
        [anon_sym_while] = ACTIONS(763),
        [anon_sym_try] = ACTIONS(763),
        [anon_sym_with] = ACTIONS(763),
        [anon_sym_def] = ACTIONS(763),
        [anon_sym_class] = ACTIONS(763),
        [anon_sym_AT] = ACTIONS(765),
        [anon_sym_LBRACK] = ACTIONS(765),
        [anon_sym_LBRACE] = ACTIONS(765),
        [sym_number] = ACTIONS(763),
        [sym_identifier] = ACTIONS(767),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(765),
        [sym__dedent] = ACTIONS(765),
    },
    [508] = {
        [ts_builtin_sym_end] = ACTIONS(1375),
        [anon_sym_SEMI] = ACTIONS(1375),
        [anon_sym_print] = ACTIONS(1378),
        [anon_sym_return] = ACTIONS(1378),
        [anon_sym_del] = ACTIONS(1378),
        [sym_pass_statement] = ACTIONS(1378),
        [sym_break_statement] = ACTIONS(1378),
        [sym_continue_statement] = ACTIONS(1378),
        [anon_sym_if] = ACTIONS(1378),
        [anon_sym_for] = ACTIONS(1378),
        [anon_sym_while] = ACTIONS(1378),
        [anon_sym_try] = ACTIONS(1378),
        [anon_sym_with] = ACTIONS(1378),
        [anon_sym_def] = ACTIONS(1378),
        [anon_sym_class] = ACTIONS(1378),
        [anon_sym_AT] = ACTIONS(1375),
        [anon_sym_LBRACK] = ACTIONS(1375),
        [anon_sym_LBRACE] = ACTIONS(1375),
        [sym_number] = ACTIONS(1378),
        [sym_identifier] = ACTIONS(1381),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(1375),
        [sym__dedent] = ACTIONS(1375),
    },
    [509] = {
        [anon_sym_COMMA] = ACTIONS(1384),
        [anon_sym_COLON] = ACTIONS(1384),
        [anon_sym_for] = ACTIONS(1384),
        [anon_sym_in] = ACTIONS(1384),
        [anon_sym_as] = ACTIONS(1384),
        [anon_sym_LPAREN] = ACTIONS(1384),
        [anon_sym_RPAREN] = ACTIONS(1384),
        [anon_sym_PLUS] = ACTIONS(1384),
        [anon_sym_LBRACK] = ACTIONS(1384),
        [anon_sym_RBRACK] = ACTIONS(1384),
        [anon_sym_RBRACE] = ACTIONS(1384),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(1384),
    },
    [510] = {
        [anon_sym_COMMA] = ACTIONS(1387),
        [anon_sym_COLON] = ACTIONS(1390),
        [anon_sym_in] = ACTIONS(335),
        [anon_sym_LPAREN] = ACTIONS(161),
        [anon_sym_RPAREN] = ACTIONS(335),
        [anon_sym_PLUS] = ACTIONS(1316),
        [anon_sym_LBRACK] = ACTIONS(165),
        [anon_sym_RBRACK] = ACTIONS(1387),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(335),
    },
    [511] = {
        [sym__simple_statement] = STATE(466),
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
        [sym__indent] = ACTIONS(881),
    },
    [512] = {
        [ts_builtin_sym_end] = ACTIONS(711),
        [anon_sym_SEMI] = ACTIONS(711),
        [anon_sym_print] = ACTIONS(709),
        [anon_sym_return] = ACTIONS(709),
        [anon_sym_del] = ACTIONS(709),
        [sym_pass_statement] = ACTIONS(709),
        [sym_break_statement] = ACTIONS(709),
        [sym_continue_statement] = ACTIONS(709),
        [anon_sym_if] = ACTIONS(709),
        [anon_sym_else] = ACTIONS(709),
        [anon_sym_for] = ACTIONS(709),
        [anon_sym_while] = ACTIONS(709),
        [anon_sym_try] = ACTIONS(709),
        [anon_sym_except] = ACTIONS(709),
        [anon_sym_finally] = ACTIONS(709),
        [anon_sym_with] = ACTIONS(709),
        [anon_sym_def] = ACTIONS(709),
        [anon_sym_class] = ACTIONS(709),
        [anon_sym_AT] = ACTIONS(711),
        [anon_sym_LBRACK] = ACTIONS(711),
        [anon_sym_LBRACE] = ACTIONS(711),
        [sym_number] = ACTIONS(709),
        [sym_identifier] = ACTIONS(713),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(711),
        [sym__dedent] = ACTIONS(711),
    },
    [513] = {
        [anon_sym_COLON] = ACTIONS(1393),
        [sym_comment] = ACTIONS(73),
    },
    [514] = {
        [sym__simple_statement] = STATE(466),
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
        [sym__indent] = ACTIONS(881),
    },
    [515] = {
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
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(493),
        [sym__dedent] = ACTIONS(493),
    },
    [516] = {
        [ts_builtin_sym_end] = ACTIONS(1395),
        [anon_sym_SEMI] = ACTIONS(1395),
        [anon_sym_print] = ACTIONS(1399),
        [anon_sym_return] = ACTIONS(1399),
        [anon_sym_del] = ACTIONS(1399),
        [sym_pass_statement] = ACTIONS(1399),
        [sym_break_statement] = ACTIONS(1399),
        [sym_continue_statement] = ACTIONS(1399),
        [anon_sym_if] = ACTIONS(1399),
        [anon_sym_for] = ACTIONS(1399),
        [anon_sym_while] = ACTIONS(1399),
        [anon_sym_try] = ACTIONS(1399),
        [anon_sym_with] = ACTIONS(1399),
        [anon_sym_def] = ACTIONS(1399),
        [anon_sym_class] = ACTIONS(1399),
        [anon_sym_AT] = ACTIONS(1395),
        [anon_sym_LBRACK] = ACTIONS(1395),
        [anon_sym_LBRACE] = ACTIONS(1395),
        [sym_number] = ACTIONS(1399),
        [sym_identifier] = ACTIONS(1403),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(1395),
        [sym__dedent] = ACTIONS(1395),
    },
    [517] = {
        [ts_builtin_sym_end] = ACTIONS(655),
        [anon_sym_SEMI] = ACTIONS(655),
        [anon_sym_print] = ACTIONS(653),
        [anon_sym_return] = ACTIONS(653),
        [anon_sym_del] = ACTIONS(653),
        [sym_pass_statement] = ACTIONS(653),
        [sym_break_statement] = ACTIONS(653),
        [sym_continue_statement] = ACTIONS(653),
        [anon_sym_if] = ACTIONS(653),
        [anon_sym_else] = ACTIONS(653),
        [anon_sym_for] = ACTIONS(653),
        [anon_sym_while] = ACTIONS(653),
        [anon_sym_try] = ACTIONS(653),
        [anon_sym_except] = ACTIONS(653),
        [anon_sym_finally] = ACTIONS(653),
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
    [518] = {
        [ts_builtin_sym_end] = ACTIONS(661),
        [anon_sym_SEMI] = ACTIONS(661),
        [anon_sym_print] = ACTIONS(659),
        [anon_sym_return] = ACTIONS(659),
        [anon_sym_del] = ACTIONS(659),
        [sym_pass_statement] = ACTIONS(659),
        [sym_break_statement] = ACTIONS(659),
        [sym_continue_statement] = ACTIONS(659),
        [anon_sym_if] = ACTIONS(659),
        [anon_sym_for] = ACTIONS(659),
        [anon_sym_while] = ACTIONS(659),
        [anon_sym_try] = ACTIONS(659),
        [anon_sym_with] = ACTIONS(659),
        [anon_sym_def] = ACTIONS(659),
        [anon_sym_class] = ACTIONS(659),
        [anon_sym_AT] = ACTIONS(661),
        [anon_sym_LBRACK] = ACTIONS(661),
        [anon_sym_LBRACE] = ACTIONS(661),
        [sym_number] = ACTIONS(659),
        [sym_identifier] = ACTIONS(663),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(661),
        [sym__dedent] = ACTIONS(661),
    },
    [519] = {
        [anon_sym_COLON] = ACTIONS(1407),
        [sym_comment] = ACTIONS(73),
    },
    [520] = {
        [sym_dictionary_splat_parameter] = STATE(522),
        [anon_sym_STAR] = ACTIONS(585),
        [sym_comment] = ACTIONS(73),
    },
    [521] = {
        [anon_sym_COLON] = ACTIONS(1412),
        [sym_comment] = ACTIONS(73),
    },
    [522] = {
        [anon_sym_RPAREN] = ACTIONS(1415),
        [sym_comment] = ACTIONS(73),
    },
    [523] = {
        [anon_sym_COLON] = ACTIONS(1417),
        [sym_comment] = ACTIONS(73),
    },
    [524] = {
        [anon_sym_RPAREN] = ACTIONS(1420),
        [anon_sym_STAR] = ACTIONS(1422),
        [sym_identifier] = ACTIONS(1425),
        [sym_comment] = ACTIONS(73),
    },
    [525] = {
        [anon_sym_COLON] = ACTIONS(1428),
        [sym_comment] = ACTIONS(73),
    },
    [526] = {
        [sym__simple_statement] = STATE(466),
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
        [sym__indent] = ACTIONS(881),
    },
    [527] = {
        [ts_builtin_sym_end] = ACTIONS(557),
        [anon_sym_SEMI] = ACTIONS(557),
        [anon_sym_print] = ACTIONS(555),
        [anon_sym_return] = ACTIONS(555),
        [anon_sym_del] = ACTIONS(555),
        [sym_pass_statement] = ACTIONS(555),
        [sym_break_statement] = ACTIONS(555),
        [sym_continue_statement] = ACTIONS(555),
        [anon_sym_if] = ACTIONS(555),
        [anon_sym_for] = ACTIONS(555),
        [anon_sym_while] = ACTIONS(555),
        [anon_sym_try] = ACTIONS(555),
        [anon_sym_with] = ACTIONS(555),
        [anon_sym_def] = ACTIONS(555),
        [anon_sym_class] = ACTIONS(555),
        [anon_sym_AT] = ACTIONS(557),
        [anon_sym_LBRACK] = ACTIONS(557),
        [anon_sym_LBRACE] = ACTIONS(557),
        [sym_number] = ACTIONS(555),
        [sym_identifier] = ACTIONS(559),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(557),
        [sym__dedent] = ACTIONS(557),
    },
    [528] = {
        [sym__simple_statement] = STATE(466),
        [sym_print_statement] = STATE(5),
        [sym_expression_statement] = STATE(5),
        [sym_return_statement] = STATE(5),
        [sym_delete_statement] = STATE(5),
        [sym__suite] = STATE(529),
        [sym__expression] = STATE(23),
        [sym_binary_operator] = STATE(16),
        [sym_subscript] = STATE(16),
        [sym_call] = STATE(16),
        [sym_list] = STATE(16),
        [sym_list_comprehension] = STATE(16),
        [sym_dictionary] = STATE(16),
        [sym_dictionary_comprehension] = STATE(16),
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
        [sym__indent] = ACTIONS(881),
    },
    [529] = {
        [ts_builtin_sym_end] = ACTIONS(637),
        [anon_sym_SEMI] = ACTIONS(637),
        [anon_sym_print] = ACTIONS(635),
        [anon_sym_return] = ACTIONS(635),
        [anon_sym_del] = ACTIONS(635),
        [sym_pass_statement] = ACTIONS(635),
        [sym_break_statement] = ACTIONS(635),
        [sym_continue_statement] = ACTIONS(635),
        [anon_sym_if] = ACTIONS(635),
        [anon_sym_for] = ACTIONS(635),
        [anon_sym_while] = ACTIONS(635),
        [anon_sym_try] = ACTIONS(635),
        [anon_sym_with] = ACTIONS(635),
        [anon_sym_def] = ACTIONS(635),
        [anon_sym_class] = ACTIONS(635),
        [anon_sym_AT] = ACTIONS(637),
        [anon_sym_LBRACK] = ACTIONS(637),
        [anon_sym_LBRACE] = ACTIONS(637),
        [sym_number] = ACTIONS(635),
        [sym_identifier] = ACTIONS(639),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(637),
        [sym__dedent] = ACTIONS(637),
    },
    [530] = {
        [ts_builtin_sym_end] = ACTIONS(983),
        [anon_sym_SEMI] = ACTIONS(983),
        [anon_sym_print] = ACTIONS(986),
        [anon_sym_return] = ACTIONS(986),
        [anon_sym_del] = ACTIONS(986),
        [sym_pass_statement] = ACTIONS(986),
        [sym_break_statement] = ACTIONS(986),
        [sym_continue_statement] = ACTIONS(986),
        [anon_sym_if] = ACTIONS(986),
        [anon_sym_elif] = ACTIONS(501),
        [anon_sym_else] = ACTIONS(501),
        [anon_sym_for] = ACTIONS(986),
        [anon_sym_while] = ACTIONS(986),
        [anon_sym_try] = ACTIONS(986),
        [anon_sym_except] = ACTIONS(501),
        [anon_sym_finally] = ACTIONS(501),
        [anon_sym_with] = ACTIONS(986),
        [anon_sym_def] = ACTIONS(986),
        [anon_sym_class] = ACTIONS(986),
        [anon_sym_AT] = ACTIONS(983),
        [anon_sym_LBRACK] = ACTIONS(983),
        [anon_sym_LBRACE] = ACTIONS(983),
        [sym_number] = ACTIONS(986),
        [sym_identifier] = ACTIONS(999),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(983),
        [sym__dedent] = ACTIONS(983),
    },
    [531] = {
        [sym__simple_statement] = STATE(466),
        [sym_print_statement] = STATE(5),
        [sym_expression_statement] = STATE(5),
        [sym_return_statement] = STATE(5),
        [sym_delete_statement] = STATE(5),
        [sym__suite] = STATE(535),
        [sym__expression] = STATE(23),
        [sym_binary_operator] = STATE(16),
        [sym_subscript] = STATE(16),
        [sym_call] = STATE(16),
        [sym_list] = STATE(16),
        [sym_list_comprehension] = STATE(16),
        [sym_dictionary] = STATE(16),
        [sym_dictionary_comprehension] = STATE(16),
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
        [sym__indent] = ACTIONS(881),
    },
    [532] = {
        [sym_default_parameter] = STATE(249),
        [sym_list_splat_parameter] = STATE(250),
        [sym_dictionary_splat_parameter] = STATE(251),
        [sym_expression_list] = STATE(534),
        [sym__expression] = STATE(108),
        [sym_binary_operator] = STATE(36),
        [sym_subscript] = STATE(36),
        [sym_call] = STATE(36),
        [sym_list] = STATE(36),
        [sym_list_comprehension] = STATE(36),
        [sym_dictionary] = STATE(36),
        [sym_dictionary_comprehension] = STATE(36),
        [aux_sym_parameters_repeat1] = STATE(252),
        [anon_sym_RPAREN] = ACTIONS(547),
        [anon_sym_STAR] = ACTIONS(549),
        [anon_sym_LBRACK] = ACTIONS(117),
        [anon_sym_LBRACE] = ACTIONS(119),
        [sym_number] = ACTIONS(121),
        [sym_identifier] = ACTIONS(1431),
        [sym_comment] = ACTIONS(73),
    },
    [533] = {
        [anon_sym_COMMA] = ACTIONS(1433),
        [anon_sym_LPAREN] = ACTIONS(135),
        [anon_sym_RPAREN] = ACTIONS(1436),
        [anon_sym_EQ] = ACTIONS(571),
        [anon_sym_PLUS] = ACTIONS(135),
        [anon_sym_LBRACK] = ACTIONS(135),
        [sym_comment] = ACTIONS(73),
    },
    [534] = {
        [anon_sym_RPAREN] = ACTIONS(1167),
        [sym_comment] = ACTIONS(73),
    },
    [535] = {
        [ts_builtin_sym_end] = ACTIONS(541),
        [anon_sym_SEMI] = ACTIONS(541),
        [anon_sym_print] = ACTIONS(539),
        [anon_sym_return] = ACTIONS(539),
        [anon_sym_del] = ACTIONS(539),
        [sym_pass_statement] = ACTIONS(539),
        [sym_break_statement] = ACTIONS(539),
        [sym_continue_statement] = ACTIONS(539),
        [anon_sym_if] = ACTIONS(539),
        [anon_sym_for] = ACTIONS(539),
        [anon_sym_while] = ACTIONS(539),
        [anon_sym_try] = ACTIONS(539),
        [anon_sym_with] = ACTIONS(539),
        [anon_sym_def] = ACTIONS(539),
        [anon_sym_class] = ACTIONS(539),
        [anon_sym_AT] = ACTIONS(541),
        [anon_sym_LBRACK] = ACTIONS(541),
        [anon_sym_LBRACE] = ACTIONS(541),
        [sym_number] = ACTIONS(539),
        [sym_identifier] = ACTIONS(543),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(541),
        [sym__dedent] = ACTIONS(541),
    },
    [536] = {
        [aux_sym_print_statement_repeat1] = STATE(178),
        [aux_sym_subscript_repeat1] = STATE(43),
        [anon_sym_COMMA] = ACTIONS(1439),
        [anon_sym_for] = ACTIONS(419),
        [anon_sym_LPAREN] = ACTIONS(209),
        [anon_sym_PLUS] = ACTIONS(211),
        [anon_sym_LBRACK] = ACTIONS(213),
        [anon_sym_RBRACK] = ACTIONS(1441),
        [sym_comment] = ACTIONS(73),
    },
    [537] = {
        [sym__expression] = STATE(539),
        [sym_binary_operator] = STATE(36),
        [sym_subscript] = STATE(36),
        [sym_call] = STATE(36),
        [sym_list] = STATE(36),
        [sym_list_comprehension] = STATE(36),
        [sym_dictionary] = STATE(36),
        [sym_dictionary_comprehension] = STATE(36),
        [anon_sym_LBRACK] = ACTIONS(117),
        [anon_sym_DOT_DOT_DOT] = ACTIONS(215),
        [anon_sym_RBRACK] = ACTIONS(1339),
        [anon_sym_LBRACE] = ACTIONS(119),
        [sym_number] = ACTIONS(121),
        [sym_identifier] = ACTIONS(121),
        [sym_comment] = ACTIONS(73),
    },
    [538] = {
        [anon_sym_COMMA] = ACTIONS(1443),
        [anon_sym_COLON] = ACTIONS(1443),
        [anon_sym_for] = ACTIONS(1443),
        [anon_sym_in] = ACTIONS(1443),
        [anon_sym_as] = ACTIONS(1443),
        [anon_sym_LPAREN] = ACTIONS(1443),
        [anon_sym_RPAREN] = ACTIONS(1443),
        [anon_sym_PLUS] = ACTIONS(1443),
        [anon_sym_LBRACK] = ACTIONS(1443),
        [anon_sym_RBRACK] = ACTIONS(1443),
        [anon_sym_RBRACE] = ACTIONS(1443),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(1443),
    },
    [539] = {
        [anon_sym_COMMA] = ACTIONS(1387),
        [anon_sym_LPAREN] = ACTIONS(209),
        [anon_sym_PLUS] = ACTIONS(211),
        [anon_sym_LBRACK] = ACTIONS(213),
        [anon_sym_RBRACK] = ACTIONS(1387),
        [sym_comment] = ACTIONS(73),
    },
    [540] = {
        [anon_sym_COMMA] = ACTIONS(247),
        [anon_sym_COLON] = ACTIONS(247),
        [anon_sym_for] = ACTIONS(247),
        [anon_sym_in] = ACTIONS(247),
        [anon_sym_as] = ACTIONS(247),
        [anon_sym_LPAREN] = ACTIONS(1207),
        [anon_sym_RPAREN] = ACTIONS(247),
        [anon_sym_PLUS] = ACTIONS(1222),
        [anon_sym_LBRACK] = ACTIONS(1225),
        [anon_sym_RBRACK] = ACTIONS(247),
        [anon_sym_RBRACE] = ACTIONS(247),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(247),
    },
    [541] = {
        [anon_sym_LPAREN] = ACTIONS(1446),
        [anon_sym_DOT] = ACTIONS(1446),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(1446),
    },
    [542] = {
        [anon_sym_COLON] = ACTIONS(1449),
        [anon_sym_LPAREN] = ACTIONS(1451),
        [sym_comment] = ACTIONS(73),
    },
    [543] = {
        [sym_expression_list] = STATE(534),
        [sym__expression] = STATE(108),
        [sym_binary_operator] = STATE(36),
        [sym_subscript] = STATE(36),
        [sym_call] = STATE(36),
        [sym_list] = STATE(36),
        [sym_list_comprehension] = STATE(36),
        [sym_dictionary] = STATE(36),
        [sym_dictionary_comprehension] = STATE(36),
        [anon_sym_LBRACK] = ACTIONS(117),
        [anon_sym_LBRACE] = ACTIONS(119),
        [sym_number] = ACTIONS(121),
        [sym_identifier] = ACTIONS(121),
        [sym_comment] = ACTIONS(73),
    },
    [544] = {
        [anon_sym_COMMA] = ACTIONS(1453),
        [anon_sym_LPAREN] = ACTIONS(135),
        [anon_sym_RPAREN] = ACTIONS(1456),
        [anon_sym_PLUS] = ACTIONS(135),
        [anon_sym_LBRACK] = ACTIONS(135),
        [sym_comment] = ACTIONS(73),
    },
    [545] = {
        [anon_sym_COMMA] = ACTIONS(1460),
        [anon_sym_LPAREN] = ACTIONS(209),
        [anon_sym_RPAREN] = ACTIONS(1460),
        [anon_sym_PLUS] = ACTIONS(211),
        [anon_sym_LBRACK] = ACTIONS(213),
        [sym_comment] = ACTIONS(73),
    },
    [546] = {
        [sym__expression] = STATE(132),
        [sym_binary_operator] = STATE(36),
        [sym_subscript] = STATE(36),
        [sym_call] = STATE(36),
        [sym_list] = STATE(36),
        [sym_list_comprehension] = STATE(36),
        [sym_dictionary] = STATE(36),
        [sym_dictionary_comprehension] = STATE(36),
        [anon_sym_STAR] = ACTIONS(563),
        [anon_sym_LBRACK] = ACTIONS(117),
        [anon_sym_LBRACE] = ACTIONS(119),
        [sym_number] = ACTIONS(121),
        [sym_identifier] = ACTIONS(1463),
        [sym_comment] = ACTIONS(73),
    },
    [547] = {
        [anon_sym_COMMA] = ACTIONS(1433),
        [anon_sym_LPAREN] = ACTIONS(135),
        [anon_sym_RPAREN] = ACTIONS(1436),
        [anon_sym_EQ] = ACTIONS(968),
        [anon_sym_PLUS] = ACTIONS(135),
        [anon_sym_LBRACK] = ACTIONS(135),
        [sym_comment] = ACTIONS(73),
    },
    [548] = {
        [aux_sym_print_statement_repeat1] = STATE(551),
        [anon_sym_COMMA] = ACTIONS(1465),
        [anon_sym_LPAREN] = ACTIONS(209),
        [anon_sym_RPAREN] = ACTIONS(1467),
        [anon_sym_PLUS] = ACTIONS(211),
        [anon_sym_LBRACK] = ACTIONS(213),
        [sym_comment] = ACTIONS(73),
    },
    [549] = {
        [sym__expression] = STATE(113),
        [sym_binary_operator] = STATE(36),
        [sym_subscript] = STATE(36),
        [sym_call] = STATE(36),
        [sym_list] = STATE(36),
        [sym_list_comprehension] = STATE(36),
        [sym_dictionary] = STATE(36),
        [sym_dictionary_comprehension] = STATE(36),
        [anon_sym_RPAREN] = ACTIONS(381),
        [anon_sym_STAR] = ACTIONS(291),
        [anon_sym_LBRACK] = ACTIONS(1470),
        [anon_sym_STAR_STAR] = ACTIONS(293),
        [anon_sym_LBRACE] = ACTIONS(1473),
        [sym_number] = ACTIONS(1476),
        [sym_identifier] = ACTIONS(1476),
        [sym_comment] = ACTIONS(73),
    },
    [550] = {
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
        [sym__newline] = ACTIONS(1479),
    },
    [551] = {
        [anon_sym_COMMA] = ACTIONS(329),
        [anon_sym_RPAREN] = ACTIONS(1286),
        [sym_comment] = ACTIONS(73),
    },
    [552] = {
        [anon_sym_COMMA] = ACTIONS(1453),
        [anon_sym_LPAREN] = ACTIONS(135),
        [anon_sym_RPAREN] = ACTIONS(1453),
        [anon_sym_PLUS] = ACTIONS(135),
        [anon_sym_LBRACK] = ACTIONS(135),
        [sym_comment] = ACTIONS(73),
    },
    [553] = {
        [sym_parameters] = STATE(441),
        [anon_sym_LPAREN] = ACTIONS(545),
        [sym_comment] = ACTIONS(73),
    },
    [554] = {
        [aux_sym_with_statement_repeat1] = STATE(457),
        [anon_sym_COMMA] = ACTIONS(613),
        [anon_sym_COLON] = ACTIONS(1482),
        [sym_comment] = ACTIONS(73),
    },
    [555] = {
        [sym__simple_statement] = STATE(466),
        [sym_print_statement] = STATE(5),
        [sym_expression_statement] = STATE(5),
        [sym_return_statement] = STATE(5),
        [sym_delete_statement] = STATE(5),
        [sym__suite] = STATE(556),
        [sym__expression] = STATE(23),
        [sym_binary_operator] = STATE(16),
        [sym_subscript] = STATE(16),
        [sym_call] = STATE(16),
        [sym_list] = STATE(16),
        [sym_list_comprehension] = STATE(16),
        [sym_dictionary] = STATE(16),
        [sym_dictionary_comprehension] = STATE(16),
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
        [sym__indent] = ACTIONS(881),
    },
    [556] = {
        [ts_builtin_sym_end] = ACTIONS(699),
        [anon_sym_SEMI] = ACTIONS(699),
        [anon_sym_print] = ACTIONS(697),
        [anon_sym_return] = ACTIONS(697),
        [anon_sym_del] = ACTIONS(697),
        [sym_pass_statement] = ACTIONS(697),
        [sym_break_statement] = ACTIONS(697),
        [sym_continue_statement] = ACTIONS(697),
        [anon_sym_if] = ACTIONS(697),
        [anon_sym_for] = ACTIONS(697),
        [anon_sym_while] = ACTIONS(697),
        [anon_sym_try] = ACTIONS(697),
        [anon_sym_with] = ACTIONS(697),
        [anon_sym_def] = ACTIONS(697),
        [anon_sym_class] = ACTIONS(697),
        [anon_sym_AT] = ACTIONS(699),
        [anon_sym_LBRACK] = ACTIONS(699),
        [anon_sym_LBRACE] = ACTIONS(699),
        [sym_number] = ACTIONS(697),
        [sym_identifier] = ACTIONS(701),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(699),
        [sym__dedent] = ACTIONS(699),
    },
    [557] = {
        [anon_sym_COMMA] = ACTIONS(621),
        [anon_sym_COLON] = ACTIONS(1484),
        [anon_sym_LPAREN] = ACTIONS(209),
        [anon_sym_PLUS] = ACTIONS(211),
        [anon_sym_LBRACK] = ACTIONS(213),
        [sym_comment] = ACTIONS(73),
    },
    [558] = {
        [anon_sym_COMMA] = ACTIONS(1487),
        [anon_sym_COLON] = ACTIONS(1489),
        [anon_sym_as] = ACTIONS(1487),
        [anon_sym_LPAREN] = ACTIONS(209),
        [anon_sym_PLUS] = ACTIONS(211),
        [anon_sym_LBRACK] = ACTIONS(213),
        [sym_comment] = ACTIONS(73),
    },
    [559] = {
        [sym__expression] = STATE(561),
        [sym_binary_operator] = STATE(36),
        [sym_subscript] = STATE(36),
        [sym_call] = STATE(36),
        [sym_list] = STATE(36),
        [sym_list_comprehension] = STATE(36),
        [sym_dictionary] = STATE(36),
        [sym_dictionary_comprehension] = STATE(36),
        [anon_sym_LBRACK] = ACTIONS(117),
        [anon_sym_LBRACE] = ACTIONS(119),
        [sym_number] = ACTIONS(121),
        [sym_identifier] = ACTIONS(121),
        [sym_comment] = ACTIONS(73),
    },
    [560] = {
        [sym__simple_statement] = STATE(466),
        [sym_print_statement] = STATE(5),
        [sym_expression_statement] = STATE(5),
        [sym_return_statement] = STATE(5),
        [sym_delete_statement] = STATE(5),
        [sym__suite] = STATE(562),
        [sym__expression] = STATE(23),
        [sym_binary_operator] = STATE(16),
        [sym_subscript] = STATE(16),
        [sym_call] = STATE(16),
        [sym_list] = STATE(16),
        [sym_list_comprehension] = STATE(16),
        [sym_dictionary] = STATE(16),
        [sym_dictionary_comprehension] = STATE(16),
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
        [sym__indent] = ACTIONS(881),
    },
    [561] = {
        [anon_sym_COLON] = ACTIONS(1491),
        [anon_sym_LPAREN] = ACTIONS(209),
        [anon_sym_PLUS] = ACTIONS(211),
        [anon_sym_LBRACK] = ACTIONS(213),
        [sym_comment] = ACTIONS(73),
    },
    [562] = {
        [ts_builtin_sym_end] = ACTIONS(717),
        [anon_sym_SEMI] = ACTIONS(717),
        [anon_sym_print] = ACTIONS(715),
        [anon_sym_return] = ACTIONS(715),
        [anon_sym_del] = ACTIONS(715),
        [sym_pass_statement] = ACTIONS(715),
        [sym_break_statement] = ACTIONS(715),
        [sym_continue_statement] = ACTIONS(715),
        [anon_sym_if] = ACTIONS(715),
        [anon_sym_else] = ACTIONS(715),
        [anon_sym_for] = ACTIONS(715),
        [anon_sym_while] = ACTIONS(715),
        [anon_sym_try] = ACTIONS(715),
        [anon_sym_except] = ACTIONS(715),
        [anon_sym_finally] = ACTIONS(715),
        [anon_sym_with] = ACTIONS(715),
        [anon_sym_def] = ACTIONS(715),
        [anon_sym_class] = ACTIONS(715),
        [anon_sym_AT] = ACTIONS(717),
        [anon_sym_LBRACK] = ACTIONS(717),
        [anon_sym_LBRACE] = ACTIONS(717),
        [sym_number] = ACTIONS(715),
        [sym_identifier] = ACTIONS(719),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(717),
        [sym__dedent] = ACTIONS(717),
    },
    [563] = {
        [sym__simple_statement] = STATE(288),
        [sym_print_statement] = STATE(5),
        [sym_expression_statement] = STATE(5),
        [sym_return_statement] = STATE(5),
        [sym_delete_statement] = STATE(5),
        [sym__suite] = STATE(564),
        [sym__expression] = STATE(23),
        [sym_binary_operator] = STATE(16),
        [sym_subscript] = STATE(16),
        [sym_call] = STATE(16),
        [sym_list] = STATE(16),
        [sym_list_comprehension] = STATE(16),
        [sym_dictionary] = STATE(16),
        [sym_dictionary_comprehension] = STATE(16),
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
        [sym__indent] = ACTIONS(643),
    },
    [564] = {
        [sym_except_clause] = STATE(517),
        [sym_finally_clause] = STATE(518),
        [aux_sym_try_statement_repeat1] = STATE(456),
        [anon_sym_except] = ACTIONS(1493),
        [anon_sym_finally] = ACTIONS(1495),
        [sym_comment] = ACTIONS(73),
    },
    [565] = {
        [anon_sym_COLON] = ACTIONS(1497),
        [anon_sym_LPAREN] = ACTIONS(209),
        [anon_sym_PLUS] = ACTIONS(211),
        [anon_sym_LBRACK] = ACTIONS(213),
        [sym_comment] = ACTIONS(73),
    },
    [566] = {
        [sym__simple_statement] = STATE(466),
        [sym_print_statement] = STATE(5),
        [sym_expression_statement] = STATE(5),
        [sym_return_statement] = STATE(5),
        [sym_delete_statement] = STATE(5),
        [sym__suite] = STATE(567),
        [sym__expression] = STATE(23),
        [sym_binary_operator] = STATE(16),
        [sym_subscript] = STATE(16),
        [sym_call] = STATE(16),
        [sym_list] = STATE(16),
        [sym_list_comprehension] = STATE(16),
        [sym_dictionary] = STATE(16),
        [sym_dictionary_comprehension] = STATE(16),
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
        [sym__indent] = ACTIONS(881),
    },
    [567] = {
        [sym_else_clause] = STATE(568),
        [ts_builtin_sym_end] = ACTIONS(727),
        [anon_sym_SEMI] = ACTIONS(727),
        [anon_sym_print] = ACTIONS(725),
        [anon_sym_return] = ACTIONS(725),
        [anon_sym_del] = ACTIONS(725),
        [sym_pass_statement] = ACTIONS(725),
        [sym_break_statement] = ACTIONS(725),
        [sym_continue_statement] = ACTIONS(725),
        [anon_sym_if] = ACTIONS(725),
        [anon_sym_else] = ACTIONS(1294),
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
    [568] = {
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
    [569] = {
        [aux_sym_print_statement_repeat1] = STATE(110),
        [anon_sym_COMMA] = ACTIONS(325),
        [anon_sym_COLON] = ACTIONS(327),
        [anon_sym_LPAREN] = ACTIONS(209),
        [anon_sym_PLUS] = ACTIONS(1499),
        [anon_sym_LBRACK] = ACTIONS(213),
        [anon_sym_RBRACK] = ACTIONS(431),
        [anon_sym_RBRACE] = ACTIONS(415),
        [sym_comment] = ACTIONS(73),
    },
    [570] = {
        [sym__expression] = STATE(571),
        [sym_binary_operator] = STATE(36),
        [sym_subscript] = STATE(36),
        [sym_call] = STATE(36),
        [sym_list] = STATE(36),
        [sym_list_comprehension] = STATE(36),
        [sym_dictionary] = STATE(36),
        [sym_dictionary_comprehension] = STATE(36),
        [anon_sym_LBRACK] = ACTIONS(117),
        [anon_sym_LBRACE] = ACTIONS(119),
        [sym_number] = ACTIONS(121),
        [sym_identifier] = ACTIONS(121),
        [sym_comment] = ACTIONS(73),
    },
    [571] = {
        [anon_sym_COMMA] = ACTIONS(247),
        [anon_sym_COLON] = ACTIONS(247),
        [anon_sym_LPAREN] = ACTIONS(1501),
        [anon_sym_PLUS] = ACTIONS(1504),
        [anon_sym_LBRACK] = ACTIONS(1507),
        [anon_sym_RBRACK] = ACTIONS(247),
        [anon_sym_RBRACE] = ACTIONS(247),
        [sym_comment] = ACTIONS(73),
    },
    [572] = {
        [anon_sym_in] = ACTIONS(1165),
        [sym_comment] = ACTIONS(73),
    },
    [573] = {
        [anon_sym_COLON] = ACTIONS(1510),
        [anon_sym_LPAREN] = ACTIONS(209),
        [anon_sym_PLUS] = ACTIONS(211),
        [anon_sym_LBRACK] = ACTIONS(213),
        [sym_comment] = ACTIONS(73),
    },
    [574] = {
        [sym__simple_statement] = STATE(466),
        [sym_print_statement] = STATE(5),
        [sym_expression_statement] = STATE(5),
        [sym_return_statement] = STATE(5),
        [sym_delete_statement] = STATE(5),
        [sym__suite] = STATE(575),
        [sym__expression] = STATE(23),
        [sym_binary_operator] = STATE(16),
        [sym_subscript] = STATE(16),
        [sym_call] = STATE(16),
        [sym_list] = STATE(16),
        [sym_list_comprehension] = STATE(16),
        [sym_dictionary] = STATE(16),
        [sym_dictionary_comprehension] = STATE(16),
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
        [sym__indent] = ACTIONS(881),
    },
    [575] = {
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
    [576] = {
        [anon_sym_COLON] = ACTIONS(1512),
        [anon_sym_LPAREN] = ACTIONS(209),
        [anon_sym_PLUS] = ACTIONS(211),
        [anon_sym_LBRACK] = ACTIONS(213),
        [sym_comment] = ACTIONS(73),
    },
    [577] = {
        [sym__simple_statement] = STATE(466),
        [sym_print_statement] = STATE(5),
        [sym_expression_statement] = STATE(5),
        [sym_return_statement] = STATE(5),
        [sym_delete_statement] = STATE(5),
        [sym__suite] = STATE(578),
        [sym__expression] = STATE(23),
        [sym_binary_operator] = STATE(16),
        [sym_subscript] = STATE(16),
        [sym_call] = STATE(16),
        [sym_list] = STATE(16),
        [sym_list_comprehension] = STATE(16),
        [sym_dictionary] = STATE(16),
        [sym_dictionary_comprehension] = STATE(16),
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
        [sym__indent] = ACTIONS(881),
    },
    [578] = {
        [sym_elif_clause] = STATE(507),
        [sym_else_clause] = STATE(579),
        [aux_sym_if_statement_repeat1] = STATE(455),
        [ts_builtin_sym_end] = ACTIONS(759),
        [anon_sym_SEMI] = ACTIONS(759),
        [anon_sym_print] = ACTIONS(755),
        [anon_sym_return] = ACTIONS(755),
        [anon_sym_del] = ACTIONS(755),
        [sym_pass_statement] = ACTIONS(755),
        [sym_break_statement] = ACTIONS(755),
        [sym_continue_statement] = ACTIONS(755),
        [anon_sym_if] = ACTIONS(755),
        [anon_sym_elif] = ACTIONS(1292),
        [anon_sym_else] = ACTIONS(1294),
        [anon_sym_for] = ACTIONS(755),
        [anon_sym_while] = ACTIONS(755),
        [anon_sym_try] = ACTIONS(755),
        [anon_sym_with] = ACTIONS(755),
        [anon_sym_def] = ACTIONS(755),
        [anon_sym_class] = ACTIONS(755),
        [anon_sym_AT] = ACTIONS(759),
        [anon_sym_LBRACK] = ACTIONS(759),
        [anon_sym_LBRACE] = ACTIONS(759),
        [sym_number] = ACTIONS(755),
        [sym_identifier] = ACTIONS(761),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(759),
        [sym__dedent] = ACTIONS(759),
    },
    [579] = {
        [ts_builtin_sym_end] = ACTIONS(771),
        [anon_sym_SEMI] = ACTIONS(771),
        [anon_sym_print] = ACTIONS(769),
        [anon_sym_return] = ACTIONS(769),
        [anon_sym_del] = ACTIONS(769),
        [sym_pass_statement] = ACTIONS(769),
        [sym_break_statement] = ACTIONS(769),
        [sym_continue_statement] = ACTIONS(769),
        [anon_sym_if] = ACTIONS(769),
        [anon_sym_for] = ACTIONS(769),
        [anon_sym_while] = ACTIONS(769),
        [anon_sym_try] = ACTIONS(769),
        [anon_sym_with] = ACTIONS(769),
        [anon_sym_def] = ACTIONS(769),
        [anon_sym_class] = ACTIONS(769),
        [anon_sym_AT] = ACTIONS(771),
        [anon_sym_LBRACK] = ACTIONS(771),
        [anon_sym_LBRACE] = ACTIONS(771),
        [sym_number] = ACTIONS(769),
        [sym_identifier] = ACTIONS(773),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(771),
        [sym__dedent] = ACTIONS(771),
    },
    [580] = {
        [anon_sym_COMMA] = ACTIONS(1308),
        [anon_sym_COLON] = ACTIONS(1514),
        [anon_sym_for] = ACTIONS(1308),
        [anon_sym_in] = ACTIONS(1308),
        [anon_sym_as] = ACTIONS(1308),
        [anon_sym_LPAREN] = ACTIONS(1308),
        [anon_sym_RPAREN] = ACTIONS(1308),
        [anon_sym_PLUS] = ACTIONS(1308),
        [anon_sym_LBRACK] = ACTIONS(1308),
        [anon_sym_RBRACK] = ACTIONS(1308),
        [anon_sym_RBRACE] = ACTIONS(1308),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(1308),
    },
    [581] = {
        [anon_sym_COMMA] = ACTIONS(1519),
        [anon_sym_RBRACK] = ACTIONS(1519),
        [sym_comment] = ACTIONS(73),
    },
    [582] = {
        [anon_sym_COMMA] = ACTIONS(1522),
        [anon_sym_COLON] = ACTIONS(1522),
        [anon_sym_for] = ACTIONS(1522),
        [anon_sym_in] = ACTIONS(1522),
        [anon_sym_as] = ACTIONS(1522),
        [anon_sym_LPAREN] = ACTIONS(1522),
        [anon_sym_RPAREN] = ACTIONS(1522),
        [anon_sym_PLUS] = ACTIONS(1522),
        [anon_sym_LBRACK] = ACTIONS(1522),
        [anon_sym_RBRACK] = ACTIONS(1522),
        [anon_sym_RBRACE] = ACTIONS(1522),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(1522),
    },
    [583] = {
        [anon_sym_COMMA] = ACTIONS(1527),
        [anon_sym_COLON] = ACTIONS(1527),
        [anon_sym_for] = ACTIONS(1527),
        [anon_sym_in] = ACTIONS(1527),
        [anon_sym_as] = ACTIONS(1527),
        [anon_sym_LPAREN] = ACTIONS(1527),
        [anon_sym_RPAREN] = ACTIONS(1527),
        [anon_sym_PLUS] = ACTIONS(1527),
        [anon_sym_LBRACK] = ACTIONS(1527),
        [anon_sym_RBRACK] = ACTIONS(1527),
        [anon_sym_RBRACE] = ACTIONS(1527),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(1527),
    },
    [584] = {
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
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(135),
    },
    [585] = {
        [anon_sym_COMMA] = ACTIONS(1530),
        [anon_sym_COLON] = ACTIONS(1530),
        [sym_comment] = ACTIONS(73),
    },
    [586] = {
        [anon_sym_COMMA] = ACTIONS(1533),
        [anon_sym_COLON] = ACTIONS(1541),
        [anon_sym_in] = ACTIONS(1546),
        [anon_sym_as] = ACTIONS(619),
        [anon_sym_LPAREN] = ACTIONS(161),
        [anon_sym_RPAREN] = ACTIONS(1549),
        [anon_sym_PLUS] = ACTIONS(1554),
        [anon_sym_LBRACK] = ACTIONS(165),
        [anon_sym_RBRACK] = ACTIONS(1556),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(1546),
    },
    [587] = {
        [anon_sym_COMMA] = ACTIONS(1561),
        [anon_sym_RPAREN] = ACTIONS(1561),
        [sym_comment] = ACTIONS(73),
    },
    [588] = {
        [anon_sym_RPAREN] = ACTIONS(1564),
        [sym_comment] = ACTIONS(73),
    },
    [589] = {
        [anon_sym_COMMA] = ACTIONS(1566),
        [anon_sym_RBRACE] = ACTIONS(1566),
        [sym_comment] = ACTIONS(73),
    },
    [590] = {
        [anon_sym_COMMA] = ACTIONS(1569),
        [anon_sym_COLON] = ACTIONS(1569),
        [anon_sym_for] = ACTIONS(1569),
        [anon_sym_in] = ACTIONS(1569),
        [anon_sym_as] = ACTIONS(1569),
        [anon_sym_LPAREN] = ACTIONS(1569),
        [anon_sym_RPAREN] = ACTIONS(1569),
        [anon_sym_PLUS] = ACTIONS(1569),
        [anon_sym_LBRACK] = ACTIONS(1569),
        [anon_sym_RBRACK] = ACTIONS(1569),
        [anon_sym_RBRACE] = ACTIONS(1569),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(1569),
    },
    [591] = {
        [sym__simple_statement] = STATE(466),
        [sym_print_statement] = STATE(5),
        [sym_expression_statement] = STATE(5),
        [sym_return_statement] = STATE(5),
        [sym_delete_statement] = STATE(5),
        [sym__suite] = STATE(512),
        [sym__expression] = STATE(594),
        [sym_binary_operator] = STATE(16),
        [sym_subscript] = STATE(16),
        [sym_call] = STATE(16),
        [sym_list] = STATE(16),
        [sym_list_comprehension] = STATE(16),
        [sym_dictionary] = STATE(16),
        [sym_dictionary_comprehension] = STATE(16),
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
        [sym__indent] = ACTIONS(881),
    },
    [592] = {
        [sym__expression] = STATE(593),
        [sym_binary_operator] = STATE(16),
        [sym_subscript] = STATE(16),
        [sym_call] = STATE(16),
        [sym_list] = STATE(16),
        [sym_list_comprehension] = STATE(16),
        [sym_dictionary] = STATE(16),
        [sym_dictionary_comprehension] = STATE(16),
        [anon_sym_LBRACK] = ACTIONS(107),
        [anon_sym_LBRACE] = ACTIONS(109),
        [sym_number] = ACTIONS(111),
        [sym_identifier] = ACTIONS(111),
        [sym_comment] = ACTIONS(73),
    },
    [593] = {
        [anon_sym_COMMA] = ACTIONS(247),
        [anon_sym_COLON] = ACTIONS(247),
        [anon_sym_in] = ACTIONS(247),
        [anon_sym_as] = ACTIONS(247),
        [anon_sym_LPAREN] = ACTIONS(1207),
        [anon_sym_RPAREN] = ACTIONS(247),
        [anon_sym_PLUS] = ACTIONS(1573),
        [anon_sym_LBRACK] = ACTIONS(1225),
        [anon_sym_RBRACK] = ACTIONS(247),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(247),
    },
    [594] = {
        [anon_sym_COMMA] = ACTIONS(321),
        [anon_sym_LPAREN] = ACTIONS(161),
        [anon_sym_PLUS] = ACTIONS(1576),
        [anon_sym_LBRACK] = ACTIONS(165),
        [anon_sym_RBRACE] = ACTIONS(321),
        [sym_comment] = ACTIONS(73),
        [sym__newline] = ACTIONS(167),
    },
    [595] = {
        [sym__expression] = STATE(596),
        [sym_binary_operator] = STATE(16),
        [sym_subscript] = STATE(16),
        [sym_call] = STATE(16),
        [sym_list] = STATE(16),
        [sym_list_comprehension] = STATE(16),
        [sym_dictionary] = STATE(16),
        [sym_dictionary_comprehension] = STATE(16),
        [anon_sym_LBRACK] = ACTIONS(107),
        [anon_sym_LBRACE] = ACTIONS(109),
        [sym_number] = ACTIONS(111),
        [sym_identifier] = ACTIONS(111),
        [sym_comment] = ACTIONS(73),
    },
    [596] = {
        [anon_sym_COMMA] = ACTIONS(247),
        [anon_sym_LPAREN] = ACTIONS(1207),
        [anon_sym_PLUS] = ACTIONS(1578),
        [anon_sym_LBRACK] = ACTIONS(1225),
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
    [7] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(402),
    [9] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(3),
    [11] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(4),
    [13] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(5),
    [15] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(403),
    [17] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(404),
    [19] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(405),
    [21] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(406),
    [23] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(407),
    [25] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(408),
    [27] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(409),
    [29] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(410),
    [31] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(411),
    [33] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(412),
    [35] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(413),
    [37] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(414),
    [39] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(415),
    [41] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(416),
    [43] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(417),
    [45] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(418),
    [47] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(419),
    [49] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(420),
    [51] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(13),
    [53] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(421),
    [55] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(422),
    [57] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(423),
    [59] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(424),
    [61] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(425),
    [63] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(61),
    [65] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(15),
    [67] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(426),
    [69] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(16),
    [71] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, RECOVER(427),
    [73] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT_EXTRA(),
    [75] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(428),
    [77] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(429),
    [79] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(430),
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
    [123] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(347),
    [125] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(337),
    [127] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(201),
    [129] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(186),
    [131] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(173),
    [133] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(160),
    [135] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__expression, 1),
    [137] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, ACCEPT_INPUT(),
    [139] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_module_repeat1, 1),
    [141] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_module_repeat1, 1),
    [143] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_module_repeat1, 1),
    [145] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(159),
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
    [201] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(118),
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
    [299] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(105),
    [301] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(97),
    [303] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(98),
    [305] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(99),
    [307] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(102),
    [309] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_dictionary, 3),
    [311] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(101),
    [313] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(103),
    [315] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_dictionary, 4),
    [317] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_dictionary, 5),
    [319] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_dictionary_repeat1, 3),
    [321] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_pair, 3),
    [323] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(114),
    [325] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(109),
    [327] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_expression_list, 1),
    [329] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(111),
    [331] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_expression_list, 2),
    [333] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_print_statement_repeat1, 3),
    [335] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_print_statement_repeat1, 2),
    [337] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(116),
    [339] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_dictionary_comprehension, 7),
    [341] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_dictionary_repeat1, 2),
    [343] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_list, 2),
    [345] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(120),
    [347] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(121),
    [349] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(122),
    [351] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(125),
    [353] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_list, 3),
    [355] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(124),
    [357] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(126),
    [359] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_list, 4),
    [361] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_list, 5),
    [363] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(128),
    [365] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(130),
    [367] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_list_comprehension, 7),
    [369] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_dictionary_splat_argument, 2),
    [371] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_list_splat_argument, 2),
    [373] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(158),
    [375] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(153),
    [377] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(154),
    [379] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(152),
    [381] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(143),
    [383] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(144),
    [385] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(146),
    [387] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(147),
    [389] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(149),
    [391] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(151),
    [393] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(156),
    [395] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__statement, 2),
    [397] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__statement, 2),
    [399] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__statement, 2),
    [401] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(162),
    [403] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(163),
    [405] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(164),
    [407] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(167),
    [409] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(166),
    [411] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(168),
    [413] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(170),
    [415] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(172),
    [417] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(175),
    [419] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(176),
    [421] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(177),
    [423] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(180),
    [425] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(179),
    [427] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(181),
    [429] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(183),
    [431] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(185),
    [433] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_dotted_name, 1),
    [435] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(196),
    [437] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(188),
    [439] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(189),
    [441] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_decorator, 3),
    [443] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(191),
    [445] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_decorator, 4),
    [447] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(193),
    [449] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_arguments, 3),
    [451] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(195),
    [453] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_arguments, 4),
    [455] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(200),
    [457] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_dotted_name, 2),
    [459] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(198),
    [461] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(199),
    [463] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_dotted_name_repeat1, 3),
    [465] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_dotted_name_repeat1, 2),
    [467] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(202),
    [469] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(203),
    [471] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(207),
    [473] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(205),
    [475] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(206),
    [477] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(211),
    [479] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(212),
    [481] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(213),
    [483] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(214),
    [485] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(215),
    [487] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(216),
    [489] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(217),
    [491] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(210),
    [493] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_class_definition, 7),
    [495] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_class_definition, 7),
    [497] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_class_definition, 7),
    [499] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__suite, 2),
    [501] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__suite, 2),
    [503] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__suite, 2),
    [505] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(286),
    [507] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(241),
    [509] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(228),
    [511] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(227),
    [513] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(225),
    [515] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(216),
    [517] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(217),
    [519] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__suite, 3),
    [521] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__suite, 3),
    [523] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__suite, 3),
    [525] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(229),
    [527] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(230),
    [529] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(234),
    [531] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(232),
    [533] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(233),
    [535] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(237),
    [537] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(239),
    [539] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_class_definition, 4),
    [541] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_class_definition, 4),
    [543] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_class_definition, 4),
    [545] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(242),
    [547] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(246),
    [549] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(247),
    [551] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(248),
    [553] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(244),
    [555] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_function_definition, 5),
    [557] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_function_definition, 5),
    [559] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_function_definition, 5),
    [561] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_parameters, 2),
    [563] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(262),
    [565] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(272),
    [567] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(271),
    [569] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(268),
    [571] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(266),
    [573] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(269),
    [575] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(253),
    [577] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(264),
    [579] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(257),
    [581] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(258),
    [583] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_parameters, 4),
    [585] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(259),
    [587] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(261),
    [589] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_parameters, 6),
    [591] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(263),
    [593] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_dictionary_splat_parameter, 3),
    [595] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(265),
    [597] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_parameters_repeat1, 3),
    [599] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_parameters_repeat1, 3),
    [601] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_parameters, 5),
    [603] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_default_parameter, 3),
    [605] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_parameters, 3),
    [607] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_parameters_repeat1, 2),
    [609] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_parameters_repeat1, 2),
    [611] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_list_splat_parameter, 2),
    [613] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(277),
    [615] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(278),
    [617] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_with_item, 1),
    [619] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(275),
    [621] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_with_item, 3),
    [623] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(280),
    [625] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(281),
    [627] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_with_statement, 5),
    [629] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_with_statement, 5),
    [631] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_with_statement, 5),
    [633] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_with_statement_repeat1, 3),
    [635] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_with_statement, 4),
    [637] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_with_statement, 4),
    [639] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_with_statement, 4),
    [641] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_with_statement_repeat1, 2),
    [643] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(287),
    [645] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(311),
    [647] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(290),
    [649] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(291),
    [651] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(302),
    [653] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_try_statement_repeat1, 1),
    [655] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_try_statement_repeat1, 1),
    [657] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_try_statement_repeat1, 1),
    [659] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_try_statement, 4),
    [661] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_try_statement, 4),
    [663] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_try_statement, 4),
    [665] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(295),
    [667] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(290),
    [669] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(291),
    [671] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(300),
    [673] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_try_statement, 5),
    [675] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_try_statement, 5),
    [677] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_try_statement, 5),
    [679] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_try_statement_repeat1, 2),
    [681] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_try_statement_repeat1, 2),
    [683] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_try_statement_repeat1, 2),
    [685] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_try_statement, 6),
    [687] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_try_statement, 6),
    [689] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_try_statement, 6),
    [691] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_else_clause, 3),
    [693] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_else_clause, 3),
    [695] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_else_clause, 3),
    [697] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_finally_clause, 3),
    [699] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_finally_clause, 3),
    [701] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_finally_clause, 3),
    [703] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(305),
    [705] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(306),
    [707] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(308),
    [709] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_except_clause, 6),
    [711] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_except_clause, 6),
    [713] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_except_clause, 6),
    [715] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_except_clause, 4),
    [717] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_except_clause, 4),
    [719] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_except_clause, 4),
    [721] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(313),
    [723] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(315),
    [725] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_while_statement, 4),
    [727] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_while_statement, 4),
    [729] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_while_statement, 4),
    [731] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_while_statement, 5),
    [733] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_while_statement, 5),
    [735] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_while_statement, 5),
    [737] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(319),
    [739] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(321),
    [741] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_for_statement, 6),
    [743] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_for_statement, 6),
    [745] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_for_statement, 6),
    [747] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_for_statement, 7),
    [749] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_for_statement, 7),
    [751] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_for_statement, 7),
    [753] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(325),
    [755] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_if_statement, 4),
    [757] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(327),
    [759] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_if_statement, 4),
    [761] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_if_statement, 4),
    [763] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_if_statement_repeat1, 1),
    [765] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_if_statement_repeat1, 1),
    [767] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_if_statement_repeat1, 1),
    [769] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_if_statement, 5),
    [771] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_if_statement, 5),
    [773] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_if_statement, 5),
    [775] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_if_statement_repeat1, 2),
    [777] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_if_statement_repeat1, 2),
    [779] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_if_statement_repeat1, 2),
    [781] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_if_statement, 6),
    [783] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_if_statement, 6),
    [785] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_if_statement, 6),
    [787] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(334),
    [789] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_elif_clause, 4),
    [791] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_elif_clause, 4),
    [793] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_elif_clause, 4),
    [795] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(339),
    [797] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(342),
    [799] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(344),
    [801] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(349),
    [803] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(350),
    [805] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(361),
    [807] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(354),
    [809] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(349),
    [811] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(350),
    [813] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(359),
    [815] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(364),
    [817] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(365),
    [819] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(367),
    [821] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(371),
    [823] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(375),
    [825] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(377),
    [827] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(381),
    [829] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(383),
    [831] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(390),
    [833] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_delete_statement, 2),
    [835] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(394),
    [837] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(396),
    [839] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_return_statement, 2),
    [841] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_print_statement, 2),
    [843] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_print_statement, 3),
    [845] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(580),
    [847] = {.count = 5, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_parameters_repeat1, 2), REDUCE(aux_sym_call_repeat1, 2), REDUCE(aux_sym_parameters_repeat1, 3), REDUCE(aux_sym_call_repeat1, 3), SHIFT(259),
    [853] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_call_repeat1, 2), REDUCE(aux_sym_call_repeat1, 3), SHIFT(14),
    [857] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(581),
    [859] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(582),
    [861] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_call_repeat1, 2), REDUCE(aux_sym_call_repeat1, 3), SHIFT(61),
    [865] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_call_repeat1, 2), REDUCE(aux_sym_call_repeat1, 3), SHIFT(15),
    [869] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(583),
    [871] = {.count = 3, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_call_repeat1, 2), REDUCE(aux_sym_call_repeat1, 3), SHIFT(16),
    [875] = {.count = 5, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_parameters_repeat1, 2), REDUCE(aux_sym_call_repeat1, 2), REDUCE(aux_sym_parameters_repeat1, 3), REDUCE(aux_sym_call_repeat1, 3), SHIFT(584),
    [881] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(429),
    [883] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(477),
    [885] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(563),
    [887] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(555),
    [889] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(553),
    [891] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(546),
    [893] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(547),
    [895] = {.count = 5, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_call, 4), REDUCE(sym_call, 5), REDUCE(sym_call, 6), REDUCE(sym_call, 7), REDUCE(sym_call, 8),
    [901] = {.count = 11, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_parameters, 2), REDUCE(sym_parameters, 3), REDUCE(sym_parameters, 4), REDUCE(sym_call, 4), REDUCE(sym_parameters, 5), REDUCE(sym_call, 5), REDUCE(sym_parameters, 6), REDUCE(sym_call, 6), REDUCE(sym_call, 7), REDUCE(sym_call, 8), SHIFT(514),
    [913] = {.count = 7, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_arguments, 3), REDUCE(sym_arguments, 4), REDUCE(sym_call, 4), REDUCE(sym_call, 5), REDUCE(sym_call, 6), REDUCE(sym_call, 7), REDUCE(sym_call, 8),
    [921] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(544),
    [923] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(542),
    [925] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(541),
    [927] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_subscript_repeat1, 2), REDUCE(aux_sym_subscript_repeat1, 3), SHIFT(38),
    [931] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_subscript_repeat1, 2), REDUCE(aux_sym_subscript_repeat1, 3), SHIFT(42),
    [935] = {.count = 8, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_list, 2), REDUCE(sym_list, 3), REDUCE(sym_subscript, 4), REDUCE(sym_list, 4), REDUCE(sym_subscript, 5), REDUCE(sym_list, 5), REDUCE(sym_subscript, 6), REDUCE(sym_list_comprehension, 7),
    [944] = {.count = 5, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_dictionary, 2), REDUCE(sym_dictionary, 3), REDUCE(sym_dictionary, 4), REDUCE(sym_dictionary, 5), REDUCE(sym_dictionary_comprehension, 7),
    [950] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__expression, 1), REDUCE(sym_list_splat_parameter, 2), SHIFT(524),
    [954] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__expression, 1), SHIFT(531),
    [957] = {.count = 5, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_dotted_name, 1), REDUCE(sym__expression, 1), REDUCE(aux_sym_dotted_name_repeat1, 2), REDUCE(aux_sym_dotted_name_repeat1, 3), SHIFT(532),
    [963] = {.count = 4, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__expression, 1), REDUCE(sym_list_splat_parameter, 2), REDUCE(sym_dictionary_splat_parameter, 3), SHIFT(521),
    [968] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(418),
    [970] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_dotted_name_repeat1, 2), REDUCE(aux_sym_dotted_name_repeat1, 3), SHIFT(196),
    [974] = {.count = 4, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_dotted_name, 1), REDUCE(sym__expression, 1), REDUCE(aux_sym_dotted_name_repeat1, 2), REDUCE(aux_sym_dotted_name_repeat1, 3),
    [979] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_module, 2), REDUCE(sym__statement, 2), REDUCE(sym__suite, 2),
    [983] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__statement, 2), REDUCE(sym__suite, 2),
    [986] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__statement, 2), REDUCE(sym__suite, 2),
    [989] = {.count = 4, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__statement, 2), REDUCE(sym__suite, 2), REDUCE(sym_decorator, 3), REDUCE(sym_decorator, 4),
    [994] = {.count = 4, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__statement, 2), REDUCE(sym__suite, 2), REDUCE(sym_decorator, 3), REDUCE(sym_decorator, 4),
    [999] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__statement, 2), REDUCE(sym__suite, 2),
    [1002] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(468),
    [1004] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__suite, 2), REDUCE(sym__suite, 3),
    [1007] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__suite, 2), REDUCE(sym__suite, 3),
    [1010] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__suite, 2), REDUCE(sym__suite, 3),
    [1013] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_module_repeat1, 1), REDUCE(aux_sym_module_repeat1, 2),
    [1016] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_module_repeat1, 1), REDUCE(aux_sym_module_repeat1, 2),
    [1019] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_module_repeat1, 1), REDUCE(aux_sym_module_repeat1, 2),
    [1022] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(530),
    [1024] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_if_statement_repeat1, 1), REDUCE(aux_sym_if_statement_repeat1, 2),
    [1027] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_if_statement_repeat1, 1), REDUCE(aux_sym_if_statement_repeat1, 2),
    [1030] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_if_statement_repeat1, 1), REDUCE(aux_sym_if_statement_repeat1, 2),
    [1033] = {.count = 5, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_if_statement, 5), REDUCE(sym_while_statement, 5), REDUCE(sym_try_statement, 5), REDUCE(sym_if_statement, 6), REDUCE(sym_for_statement, 7),
    [1039] = {.count = 5, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_if_statement, 5), REDUCE(sym_while_statement, 5), REDUCE(sym_try_statement, 5), REDUCE(sym_if_statement, 6), REDUCE(sym_for_statement, 7),
    [1045] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(413),
    [1047] = {.count = 5, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_if_statement, 5), REDUCE(sym_while_statement, 5), REDUCE(sym_try_statement, 5), REDUCE(sym_if_statement, 6), REDUCE(sym_for_statement, 7),
    [1053] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_try_statement_repeat1, 1), REDUCE(aux_sym_try_statement_repeat1, 2),
    [1056] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_try_statement_repeat1, 1), REDUCE(aux_sym_try_statement_repeat1, 2),
    [1059] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_try_statement_repeat1, 1), REDUCE(aux_sym_try_statement_repeat1, 2),
    [1062] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_try_statement, 4), REDUCE(sym_try_statement, 5), REDUCE(sym_try_statement, 6),
    [1066] = {.count = 3, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_try_statement, 4), REDUCE(sym_try_statement, 5), REDUCE(sym_try_statement, 6),
    [1070] = {.count = 3, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_try_statement, 4), REDUCE(sym_try_statement, 5), REDUCE(sym_try_statement, 6),
    [1074] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_with_statement_repeat1, 2), REDUCE(aux_sym_with_statement_repeat1, 3), SHIFT(277),
    [1078] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_with_statement_repeat1, 2), REDUCE(aux_sym_with_statement_repeat1, 3), SHIFT(528),
    [1082] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__compound_statement, 1), REDUCE(sym_decorated_definition, 2),
    [1085] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__compound_statement, 1), REDUCE(sym_decorated_definition, 2),
    [1088] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__compound_statement, 1), REDUCE(sym_decorated_definition, 2),
    [1091] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(526),
    [1093] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(524),
    [1095] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(521),
    [1097] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(520),
    [1099] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(519),
    [1101] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_decorated_definition_repeat1, 1), REDUCE(aux_sym_decorated_definition_repeat1, 2),
    [1104] = {.count = 13, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_else_clause, 3), REDUCE(sym_finally_clause, 3), REDUCE(sym_if_statement, 4), REDUCE(sym_elif_clause, 4), REDUCE(sym_while_statement, 4), REDUCE(sym_except_clause, 4), REDUCE(sym_with_statement, 4), REDUCE(sym_class_definition, 4), REDUCE(sym_with_statement, 5), REDUCE(sym_function_definition, 5), REDUCE(sym_for_statement, 6), REDUCE(sym_except_clause, 6), REDUCE(sym_class_definition, 7),
    [1118] = {.count = 13, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_else_clause, 3), REDUCE(sym_finally_clause, 3), REDUCE(sym_if_statement, 4), REDUCE(sym_elif_clause, 4), REDUCE(sym_while_statement, 4), REDUCE(sym_except_clause, 4), REDUCE(sym_with_statement, 4), REDUCE(sym_class_definition, 4), REDUCE(sym_with_statement, 5), REDUCE(sym_function_definition, 5), REDUCE(sym_for_statement, 6), REDUCE(sym_except_clause, 6), REDUCE(sym_class_definition, 7),
    [1132] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_elif_clause, 4), SHIFT(405),
    [1135] = {.count = 4, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_elif_clause, 4), REDUCE(sym_except_clause, 4), REDUCE(sym_except_clause, 6), SHIFT(406),
    [1140] = {.count = 3, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_except_clause, 4), REDUCE(sym_except_clause, 6), SHIFT(411),
    [1144] = {.count = 4, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_else_clause, 3), REDUCE(sym_except_clause, 4), REDUCE(sym_except_clause, 6), SHIFT(413),
    [1149] = {.count = 13, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_else_clause, 3), REDUCE(sym_finally_clause, 3), REDUCE(sym_if_statement, 4), REDUCE(sym_elif_clause, 4), REDUCE(sym_while_statement, 4), REDUCE(sym_except_clause, 4), REDUCE(sym_with_statement, 4), REDUCE(sym_class_definition, 4), REDUCE(sym_with_statement, 5), REDUCE(sym_function_definition, 5), REDUCE(sym_for_statement, 6), REDUCE(sym_except_clause, 6), REDUCE(sym_class_definition, 7),
    [1163] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(490),
    [1165] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(408),
    [1167] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(513),
    [1169] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_return_statement, 2), REDUCE(sym_delete_statement, 2),
    [1172] = {.count = 14, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_with_item, 1), REDUCE(sym_list_splat_argument, 2), REDUCE(aux_sym_print_statement_repeat1, 2), REDUCE(aux_sym_subscript_repeat1, 2), REDUCE(aux_sym_call_repeat2, 2), REDUCE(sym_with_item, 3), REDUCE(sym_default_parameter, 3), REDUCE_FRAGILE(sym_binary_operator, 3), REDUCE(sym_keyword_argument, 3), REDUCE(sym_pair, 3), REDUCE(aux_sym_print_statement_repeat1, 3), REDUCE(aux_sym_subscript_repeat1, 3), REDUCE(aux_sym_call_repeat2, 3), SHIFT(499),
    [1187] = {.count = 7, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_with_item, 1), REDUCE(sym_expression_list, 1), REDUCE(aux_sym_print_statement_repeat1, 2), REDUCE(sym_with_item, 3), REDUCE_FRAGILE(sym_binary_operator, 3), REDUCE(aux_sym_print_statement_repeat1, 3), SHIFT(500),
    [1195] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE_FRAGILE(sym_binary_operator, 3), REDUCE(sym_pair, 3), SHIFT(176),
    [1199] = {.count = 4, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_expression_list, 1), REDUCE(aux_sym_print_statement_repeat1, 2), REDUCE_FRAGILE(sym_binary_operator, 3), REDUCE(aux_sym_print_statement_repeat1, 3),
    [1204] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE_FRAGILE(sym_binary_operator, 3), SHIFT(412),
    [1207] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE_FRAGILE(sym_binary_operator, 3), SHIFT(30),
    [1210] = {.count = 11, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_expression_list, 1), REDUCE(sym_list_splat_argument, 2), REDUCE(sym_dictionary_splat_argument, 2), REDUCE(aux_sym_print_statement_repeat1, 2), REDUCE(aux_sym_call_repeat2, 2), REDUCE(sym_default_parameter, 3), REDUCE_FRAGILE(sym_binary_operator, 3), REDUCE(sym_keyword_argument, 3), REDUCE(aux_sym_print_statement_repeat1, 3), REDUCE(aux_sym_call_repeat2, 3), SHIFT(501),
    [1222] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE_FRAGILE(sym_binary_operator, 3), SHIFT(422),
    [1225] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE_FRAGILE(sym_binary_operator, 3), SHIFT(32),
    [1228] = {.count = 6, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_print_statement_repeat1, 2), REDUCE(aux_sym_subscript_repeat1, 2), REDUCE_FRAGILE(sym_binary_operator, 3), REDUCE(aux_sym_print_statement_repeat1, 3), REDUCE(aux_sym_subscript_repeat1, 3), SHIFT(502),
    [1235] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE_FRAGILE(sym_binary_operator, 3), REDUCE(sym_pair, 3), SHIFT(172),
    [1239] = {.count = 6, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_expression_statement, 1), REDUCE(sym_expression_list, 1), REDUCE(sym_print_statement, 2), REDUCE(aux_sym_print_statement_repeat1, 2), REDUCE_FRAGILE(sym_binary_operator, 3), REDUCE(aux_sym_print_statement_repeat1, 3),
    [1246] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_call_repeat2, 2), REDUCE(aux_sym_call_repeat2, 3), SHIFT(498),
    [1250] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_call_repeat2, 2), REDUCE(aux_sym_call_repeat2, 3), SHIFT(495),
    [1254] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(494),
    [1256] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(495),
    [1258] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(493),
    [1260] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_dictionary_repeat1, 2), REDUCE(aux_sym_dictionary_repeat1, 3), SHIFT(162),
    [1264] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_dictionary_repeat1, 2), REDUCE(aux_sym_dictionary_repeat1, 3), SHIFT(164),
    [1268] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(403),
    [1270] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(483),
    [1272] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(409),
    [1274] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(410),
    [1276] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(414),
    [1278] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(415),
    [1280] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(420),
    [1282] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(470),
    [1284] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(479),
    [1286] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_expression_list, 2), SHIFT(195),
    [1289] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_expression_list, 2), REDUCE(sym_print_statement, 3),
    [1292] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(405),
    [1294] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(406),
    [1296] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(411),
    [1298] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(465),
    [1300] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(415),
    [1302] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(420),
    [1304] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(460),
    [1306] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(461),
    [1308] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_call, 5), REDUCE(sym_call, 6),
    [1311] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(463),
    [1313] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_call, 7), REDUCE(sym_call, 8),
    [1316] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(481),
    [1318] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE_FRAGILE(sym_binary_operator, 3), SHIFT(481),
    [1321] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(486),
    [1323] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(488),
    [1325] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_call, 4), REDUCE(sym_call, 5),
    [1328] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(497),
    [1330] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_call, 6), REDUCE(sym_call, 7),
    [1333] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_call_repeat1, 2), REDUCE(aux_sym_call_repeat1, 3),
    [1336] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_call_repeat1, 2), REDUCE(aux_sym_call_repeat1, 3),
    [1339] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(509),
    [1341] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_arguments, 3), REDUCE(sym_call, 4), REDUCE(sym_call, 5),
    [1345] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_list, 3), REDUCE(sym_subscript, 4), REDUCE(sym_list_comprehension, 7),
    [1349] = {.count = 5, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_if_statement, 4), REDUCE(sym_elif_clause, 4), REDUCE(sym_while_statement, 4), REDUCE(sym_except_clause, 4), REDUCE(sym_except_clause, 6),
    [1355] = {.count = 5, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_if_statement, 4), REDUCE(sym_elif_clause, 4), REDUCE(sym_while_statement, 4), REDUCE(sym_except_clause, 4), REDUCE(sym_except_clause, 6),
    [1361] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_except_clause, 4), REDUCE(sym_except_clause, 6),
    [1364] = {.count = 5, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_if_statement, 4), REDUCE(sym_elif_clause, 4), REDUCE(sym_while_statement, 4), REDUCE(sym_except_clause, 4), REDUCE(sym_except_clause, 6),
    [1370] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(505),
    [1372] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE_FRAGILE(sym_binary_operator, 3), SHIFT(505),
    [1375] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_if_statement, 5), REDUCE(sym_while_statement, 5),
    [1378] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_if_statement, 5), REDUCE(sym_while_statement, 5),
    [1381] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_if_statement, 5), REDUCE(sym_while_statement, 5),
    [1384] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_list, 4), REDUCE(sym_subscript, 5),
    [1387] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_print_statement_repeat1, 2), REDUCE(aux_sym_subscript_repeat1, 2),
    [1390] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_print_statement_repeat1, 2), SHIFT(511),
    [1393] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(514),
    [1395] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_if_statement, 5), REDUCE(sym_while_statement, 5), REDUCE(sym_for_statement, 7),
    [1399] = {.count = 3, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_if_statement, 5), REDUCE(sym_while_statement, 5), REDUCE(sym_for_statement, 7),
    [1403] = {.count = 3, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_if_statement, 5), REDUCE(sym_while_statement, 5), REDUCE(sym_for_statement, 7),
    [1407] = {.count = 4, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_parameters, 3), REDUCE(sym_parameters, 4), REDUCE(sym_parameters, 5), REDUCE(sym_parameters, 6),
    [1412] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_parameters, 3), REDUCE(sym_parameters, 4),
    [1415] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(523),
    [1417] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_parameters, 5), REDUCE(sym_parameters, 6),
    [1420] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(525),
    [1422] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_parameters_repeat1, 2), REDUCE(aux_sym_parameters_repeat1, 3),
    [1425] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_parameters_repeat1, 2), REDUCE(aux_sym_parameters_repeat1, 3),
    [1428] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_parameters, 4), REDUCE(sym_parameters, 5),
    [1431] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(533),
    [1433] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__expression, 1), SHIFT(271),
    [1436] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__expression, 1), SHIFT(268),
    [1439] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(537),
    [1441] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(538),
    [1443] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_list, 3), REDUCE(sym_subscript, 4),
    [1446] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_dotted_name_repeat1, 2), REDUCE(aux_sym_dotted_name_repeat1, 3),
    [1449] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(531),
    [1451] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(543),
    [1453] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__expression, 1), REDUCE(sym_list_splat_parameter, 2),
    [1456] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__expression, 1), REDUCE(sym_list_splat_parameter, 2), REDUCE(sym_dictionary_splat_parameter, 3),
    [1460] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_default_parameter, 3), REDUCE(sym_keyword_argument, 3),
    [1463] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(552),
    [1465] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(549),
    [1467] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_expression_list, 1), SHIFT(550),
    [1470] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_call_repeat1, 2), SHIFT(33),
    [1473] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_call_repeat1, 2), SHIFT(35),
    [1476] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_call_repeat1, 2), SHIFT(36),
    [1479] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_arguments, 3), REDUCE(sym_call, 4),
    [1482] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(528),
    [1484] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_with_item, 3), SHIFT(511),
    [1487] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(559),
    [1489] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(560),
    [1491] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(511),
    [1493] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(411),
    [1495] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(413),
    [1497] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(566),
    [1499] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(570),
    [1501] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE_FRAGILE(sym_binary_operator, 3), SHIFT(39),
    [1504] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE_FRAGILE(sym_binary_operator, 3), SHIFT(570),
    [1507] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE_FRAGILE(sym_binary_operator, 3), SHIFT(41),
    [1510] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(574),
    [1512] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(577),
    [1514] = {.count = 4, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_parameters, 4), REDUCE(sym_parameters, 5), REDUCE(sym_call, 5), REDUCE(sym_call, 6),
    [1519] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_subscript_repeat1, 2), REDUCE(aux_sym_subscript_repeat1, 3),
    [1522] = {.count = 4, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_list, 4), REDUCE(sym_subscript, 5), REDUCE(sym_list, 5), REDUCE(sym_subscript, 6),
    [1527] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_dictionary, 4), REDUCE(sym_dictionary, 5),
    [1530] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_with_statement_repeat1, 2), REDUCE(aux_sym_with_statement_repeat1, 3),
    [1533] = {.count = 7, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_with_item, 1), REDUCE(aux_sym_print_statement_repeat1, 2), REDUCE(aux_sym_subscript_repeat1, 2), REDUCE(aux_sym_call_repeat2, 2), REDUCE(aux_sym_print_statement_repeat1, 3), REDUCE(aux_sym_subscript_repeat1, 3), REDUCE(aux_sym_call_repeat2, 3),
    [1541] = {.count = 4, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_with_item, 1), REDUCE(aux_sym_print_statement_repeat1, 2), REDUCE(aux_sym_print_statement_repeat1, 3), SHIFT(591),
    [1546] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_print_statement_repeat1, 2), REDUCE(aux_sym_print_statement_repeat1, 3),
    [1549] = {.count = 4, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_print_statement_repeat1, 2), REDUCE(aux_sym_call_repeat2, 2), REDUCE(aux_sym_print_statement_repeat1, 3), REDUCE(aux_sym_call_repeat2, 3),
    [1554] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(592),
    [1556] = {.count = 4, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_print_statement_repeat1, 2), REDUCE(aux_sym_subscript_repeat1, 2), REDUCE(aux_sym_print_statement_repeat1, 3), REDUCE(aux_sym_subscript_repeat1, 3),
    [1561] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_call_repeat2, 2), REDUCE(aux_sym_call_repeat2, 3),
    [1564] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(590),
    [1566] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_dictionary_repeat1, 2), REDUCE(aux_sym_dictionary_repeat1, 3),
    [1569] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_call, 6), REDUCE(sym_call, 7), REDUCE(sym_call, 8),
    [1573] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE_FRAGILE(sym_binary_operator, 3), SHIFT(592),
    [1576] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(595),
    [1578] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE_FRAGILE(sym_binary_operator, 3), SHIFT(595),
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
