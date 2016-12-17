#include <tree_sitter/parser.h>

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"

#define STATE_COUNT 553
#define SYMBOL_COUNT 90
#define TOKEN_COUNT 40
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
    sym_number = 34,
    sym_identifier = 35,
    sym_comment = 36,
    sym__newline = 37,
    sym__indent = 38,
    sym__dedent = 39,
    sym_module = 40,
    sym__statement = 41,
    sym__simple_statement = 42,
    sym_print_statement = 43,
    sym_expression_statement = 44,
    sym_return_statement = 45,
    sym_delete_statement = 46,
    sym__compound_statement = 47,
    sym_if_statement = 48,
    sym_elif_clause = 49,
    sym_else_clause = 50,
    sym_for_statement = 51,
    sym_while_statement = 52,
    sym_try_statement = 53,
    sym_except_clause = 54,
    sym_finally_clause = 55,
    sym_with_statement = 56,
    sym_with_item = 57,
    sym_function_definition = 58,
    sym_parameters = 59,
    sym_default_parameter = 60,
    sym_list_splat_parameter = 61,
    sym_dictionary_splat_parameter = 62,
    sym_class_definition = 63,
    sym_decorated_definition = 64,
    sym_decorator = 65,
    sym__suite = 66,
    sym_arguments = 67,
    sym_expression_list = 68,
    sym_dotted_name = 69,
    sym__expression = 70,
    sym_binary_operator = 71,
    sym_subscript = 72,
    sym_call = 73,
    sym_keyword_argument = 74,
    sym_list_splat_argument = 75,
    sym_dictionary_splat_argument = 76,
    sym_list = 77,
    sym_list_comprehension = 78,
    aux_sym_module_repeat1 = 79,
    aux_sym_print_statement_repeat1 = 80,
    aux_sym_if_statement_repeat1 = 81,
    aux_sym_try_statement_repeat1 = 82,
    aux_sym_with_statement_repeat1 = 83,
    aux_sym_parameters_repeat1 = 84,
    aux_sym_decorated_definition_repeat1 = 85,
    aux_sym_dotted_name_repeat1 = 86,
    aux_sym_subscript_repeat1 = 87,
    aux_sym_call_repeat1 = 88,
    aux_sym_call_repeat2 = 89,
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
            if (lookahead == 0)
                ADVANCE(1);
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(93);
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
                ADVANCE(94);
            if (lookahead == 'i')
                ADVANCE(95);
            if (lookahead == 'p')
                ADVANCE(68);
            if (lookahead == 'r')
                ADVANCE(76);
            if (lookahead == 't')
                ADVANCE(82);
            if (lookahead == 'w')
                ADVANCE(85);
            LEX_ERROR();
        case 94:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'n') ||
                ('p' <= lookahead && lookahead <= 'z'))
                ADVANCE(19);
            if (lookahead == 'o')
                ADVANCE(63);
            ACCEPT_TOKEN(sym_identifier);
        case 95:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'e') ||
                ('g' <= lookahead && lookahead <= 'z'))
                ADVANCE(19);
            if (lookahead == 'f')
                ADVANCE(66);
            ACCEPT_TOKEN(sym_identifier);
        case 96:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(96);
            if (lookahead == '#')
                ADVANCE(2);
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(13);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(19);
            if (lookahead == '[')
                ADVANCE(20);
            LEX_ERROR();
        case 97:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(97);
            if (lookahead == '#')
                ADVANCE(2);
            LEX_ERROR();
        case 98:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(98);
            if (lookahead == '#')
                ADVANCE(2);
            if (lookahead == ':')
                ADVANCE(15);
            LEX_ERROR();
        case 99:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(99);
            if (lookahead == '#')
                ADVANCE(2);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(19);
            LEX_ERROR();
        case 100:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(100);
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
            LEX_ERROR();
        case 101:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(101);
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
                ADVANCE(102);
            if (lookahead == 'f')
                ADVANCE(104);
            if (lookahead == 'i')
                ADVANCE(107);
            LEX_ERROR();
        case 102:
            if (lookahead == 's')
                ADVANCE(103);
            LEX_ERROR();
        case 103:
            ACCEPT_TOKEN(anon_sym_as);
        case 104:
            if (lookahead == 'o')
                ADVANCE(105);
            LEX_ERROR();
        case 105:
            if (lookahead == 'r')
                ADVANCE(106);
            LEX_ERROR();
        case 106:
            ACCEPT_TOKEN(anon_sym_for);
        case 107:
            if (lookahead == 'n')
                ADVANCE(108);
            LEX_ERROR();
        case 108:
            ACCEPT_TOKEN(anon_sym_in);
        case 109:
            if (lookahead == 0)
                ADVANCE(1);
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(109);
            if (lookahead == '#')
                ADVANCE(2);
            LEX_ERROR();
        case 110:
            if (lookahead == 0)
                ADVANCE(1);
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(110);
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
                ADVANCE(94);
            if (lookahead == 'i')
                ADVANCE(95);
            if (lookahead == 'p')
                ADVANCE(68);
            if (lookahead == 'r')
                ADVANCE(76);
            if (lookahead == 't')
                ADVANCE(82);
            if (lookahead == 'w')
                ADVANCE(85);
            LEX_ERROR();
        case 111:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(111);
            if (lookahead == '#')
                ADVANCE(2);
            if (lookahead == '@')
                ADVANCE(18);
            if (lookahead == 'c')
                ADVANCE(112);
            if (lookahead == 'd')
                ADVANCE(117);
            LEX_ERROR();
        case 112:
            if (lookahead == 'l')
                ADVANCE(113);
            LEX_ERROR();
        case 113:
            if (lookahead == 'a')
                ADVANCE(114);
            LEX_ERROR();
        case 114:
            if (lookahead == 's')
                ADVANCE(115);
            LEX_ERROR();
        case 115:
            if (lookahead == 's')
                ADVANCE(116);
            LEX_ERROR();
        case 116:
            ACCEPT_TOKEN(anon_sym_class);
        case 117:
            if (lookahead == 'e')
                ADVANCE(118);
            LEX_ERROR();
        case 118:
            if (lookahead == 'f')
                ADVANCE(119);
            LEX_ERROR();
        case 119:
            ACCEPT_TOKEN(anon_sym_def);
        case 120:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(120);
            if (lookahead == '#')
                ADVANCE(2);
            if (lookahead == '(')
                ADVANCE(4);
            if (lookahead == '+')
                ADVANCE(8);
            if (lookahead == '[')
                ADVANCE(20);
            LEX_ERROR();
        case 121:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(121);
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
            LEX_ERROR();
        case 122:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(122);
            if (lookahead == '#')
                ADVANCE(2);
            if (lookahead == '.')
                ADVANCE(123);
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(13);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(19);
            if (lookahead == '[')
                ADVANCE(20);
            LEX_ERROR();
        case 123:
            if (lookahead == '.')
                ADVANCE(11);
            LEX_ERROR();
        case 124:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(124);
            if (lookahead == '#')
                ADVANCE(2);
            if (lookahead == ',')
                ADVANCE(9);
            if (lookahead == ']')
                ADVANCE(21);
            LEX_ERROR();
        case 125:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(125);
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
        case 126:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(126);
            if (lookahead == '#')
                ADVANCE(2);
            if (lookahead == '.')
                ADVANCE(123);
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(13);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(19);
            if (lookahead == '[')
                ADVANCE(20);
            if (lookahead == ']')
                ADVANCE(21);
            LEX_ERROR();
        case 127:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(127);
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
            if (lookahead == ')')
                ADVANCE(5);
            if (lookahead == '+')
                ADVANCE(8);
            if (lookahead == ',')
                ADVANCE(9);
            if (lookahead == '[')
                ADVANCE(20);
            LEX_ERROR();
        case 129:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(129);
            if (lookahead == '#')
                ADVANCE(2);
            if (lookahead == ')')
                ADVANCE(5);
            if (lookahead == ',')
                ADVANCE(9);
            LEX_ERROR();
        case 130:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(130);
            if (lookahead == '#')
                ADVANCE(2);
            if (lookahead == ')')
                ADVANCE(5);
            LEX_ERROR();
        case 131:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(131);
            if (lookahead == '#')
                ADVANCE(2);
            if (lookahead == '*')
                ADVANCE(132);
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(13);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(19);
            if (lookahead == '[')
                ADVANCE(20);
            LEX_ERROR();
        case 132:
            if (lookahead == '*')
                ADVANCE(7);
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
            if (lookahead == '*')
                ADVANCE(6);
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(13);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(19);
            if (lookahead == '[')
                ADVANCE(20);
            LEX_ERROR();
        case 134:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(134);
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
        case 135:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(135);
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
                ADVANCE(104);
            LEX_ERROR();
        case 136:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(136);
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
                ADVANCE(107);
            LEX_ERROR();
        case 137:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(137);
            if (lookahead == '#')
                ADVANCE(2);
            if (lookahead == 'i')
                ADVANCE(107);
            LEX_ERROR();
        case 138:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(138);
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
                ADVANCE(107);
            LEX_ERROR();
        case 139:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(139);
            if (lookahead == '#')
                ADVANCE(2);
            if (lookahead == ')')
                ADVANCE(5);
            if (lookahead == ',')
                ADVANCE(9);
            if (lookahead == ':')
                ADVANCE(15);
            if (lookahead == 'i')
                ADVANCE(107);
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
            if (lookahead == '[')
                ADVANCE(20);
            if (lookahead == ']')
                ADVANCE(21);
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
            if (lookahead == '.')
                ADVANCE(143);
            LEX_ERROR();
        case 143:
            ACCEPT_TOKEN(anon_sym_DOT);
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
            if (lookahead == ':')
                ADVANCE(15);
            LEX_ERROR();
        case 146:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(146);
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
                ADVANCE(147);
            if (lookahead == 'd')
                ADVANCE(148);
            if (lookahead == 'p')
                ADVANCE(68);
            if (lookahead == 'r')
                ADVANCE(76);
            LEX_ERROR();
        case 147:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'n') ||
                ('p' <= lookahead && lookahead <= 'z'))
                ADVANCE(19);
            if (lookahead == 'o')
                ADVANCE(34);
            ACCEPT_TOKEN(sym_identifier);
        case 148:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'z'))
                ADVANCE(19);
            if (lookahead == 'e')
                ADVANCE(149);
            ACCEPT_TOKEN(sym_identifier);
        case 149:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'k') ||
                ('m' <= lookahead && lookahead <= 'z'))
                ADVANCE(19);
            if (lookahead == 'l')
                ADVANCE(44);
            ACCEPT_TOKEN(sym_identifier);
        case 150:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(150);
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
                ADVANCE(94);
            if (lookahead == 'i')
                ADVANCE(95);
            if (lookahead == 'p')
                ADVANCE(68);
            if (lookahead == 'r')
                ADVANCE(76);
            if (lookahead == 't')
                ADVANCE(82);
            if (lookahead == 'w')
                ADVANCE(85);
            LEX_ERROR();
        case 151:
            if (lookahead == 0)
                ADVANCE(1);
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(151);
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
                ADVANCE(95);
            if (lookahead == 'p')
                ADVANCE(68);
            if (lookahead == 'r')
                ADVANCE(76);
            if (lookahead == 't')
                ADVANCE(82);
            if (lookahead == 'w')
                ADVANCE(85);
            LEX_ERROR();
        case 152:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(152);
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
                ADVANCE(95);
            if (lookahead == 'p')
                ADVANCE(68);
            if (lookahead == 'r')
                ADVANCE(76);
            if (lookahead == 't')
                ADVANCE(82);
            if (lookahead == 'w')
                ADVANCE(85);
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
                ADVANCE(5);
            if (lookahead == '*')
                ADVANCE(154);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(19);
            LEX_ERROR();
        case 154:
            ACCEPT_TOKEN(anon_sym_STAR);
        case 155:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(155);
            if (lookahead == '#')
                ADVANCE(2);
            if (lookahead == '*')
                ADVANCE(154);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(19);
            LEX_ERROR();
        case 156:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(156);
            if (lookahead == '#')
                ADVANCE(2);
            if (lookahead == ')')
                ADVANCE(5);
            if (lookahead == ',')
                ADVANCE(9);
            if (lookahead == '=')
                ADVANCE(17);
            LEX_ERROR();
        case 157:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(157);
            if (lookahead == '#')
                ADVANCE(2);
            if (lookahead == '*')
                ADVANCE(154);
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
                ADVANCE(9);
            if (lookahead == ':')
                ADVANCE(15);
            LEX_ERROR();
        case 159:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(159);
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
        case 161:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(161);
            if (lookahead == '#')
                ADVANCE(2);
            if (lookahead == 'e')
                ADVANCE(162);
            if (lookahead == 'f')
                ADVANCE(168);
            LEX_ERROR();
        case 162:
            if (lookahead == 'x')
                ADVANCE(163);
            LEX_ERROR();
        case 163:
            if (lookahead == 'c')
                ADVANCE(164);
            LEX_ERROR();
        case 164:
            if (lookahead == 'e')
                ADVANCE(165);
            LEX_ERROR();
        case 165:
            if (lookahead == 'p')
                ADVANCE(166);
            LEX_ERROR();
        case 166:
            if (lookahead == 't')
                ADVANCE(167);
            LEX_ERROR();
        case 167:
            ACCEPT_TOKEN(anon_sym_except);
        case 168:
            if (lookahead == 'i')
                ADVANCE(169);
            LEX_ERROR();
        case 169:
            if (lookahead == 'n')
                ADVANCE(170);
            LEX_ERROR();
        case 170:
            if (lookahead == 'a')
                ADVANCE(171);
            LEX_ERROR();
        case 171:
            if (lookahead == 'l')
                ADVANCE(172);
            LEX_ERROR();
        case 172:
            if (lookahead == 'l')
                ADVANCE(173);
            LEX_ERROR();
        case 173:
            if (lookahead == 'y')
                ADVANCE(174);
            LEX_ERROR();
        case 174:
            ACCEPT_TOKEN(anon_sym_finally);
        case 175:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(175);
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
                ADVANCE(176);
            if (lookahead == 'f')
                ADVANCE(56);
            if (lookahead == 'i')
                ADVANCE(95);
            if (lookahead == 'p')
                ADVANCE(68);
            if (lookahead == 'r')
                ADVANCE(76);
            if (lookahead == 't')
                ADVANCE(82);
            if (lookahead == 'w')
                ADVANCE(85);
            LEX_ERROR();
        case 176:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'k') ||
                ('m' <= lookahead && lookahead <= 'w') ||
                (lookahead == 'y') ||
                (lookahead == 'z'))
                ADVANCE(19);
            if (lookahead == 'l')
                ADVANCE(177);
            if (lookahead == 'x')
                ADVANCE(51);
            ACCEPT_TOKEN(sym_identifier);
        case 177:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'r') ||
                ('t' <= lookahead && lookahead <= 'z'))
                ADVANCE(19);
            if (lookahead == 's')
                ADVANCE(49);
            ACCEPT_TOKEN(sym_identifier);
        case 178:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(178);
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
                ADVANCE(95);
            if (lookahead == 'p')
                ADVANCE(68);
            if (lookahead == 'r')
                ADVANCE(76);
            if (lookahead == 't')
                ADVANCE(82);
            if (lookahead == 'w')
                ADVANCE(85);
            LEX_ERROR();
        case 179:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(179);
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
        case 180:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(180);
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
                ADVANCE(181);
            if (lookahead == 'f')
                ADVANCE(94);
            if (lookahead == 'i')
                ADVANCE(95);
            if (lookahead == 'p')
                ADVANCE(68);
            if (lookahead == 'r')
                ADVANCE(76);
            if (lookahead == 't')
                ADVANCE(82);
            if (lookahead == 'w')
                ADVANCE(85);
            LEX_ERROR();
        case 181:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'k') ||
                ('m' <= lookahead && lookahead <= 'z'))
                ADVANCE(19);
            if (lookahead == 'l')
                ADVANCE(177);
            ACCEPT_TOKEN(sym_identifier);
        case 182:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(182);
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
                ADVANCE(183);
            if (lookahead == 'f')
                ADVANCE(94);
            if (lookahead == 'i')
                ADVANCE(95);
            if (lookahead == 'p')
                ADVANCE(68);
            if (lookahead == 'r')
                ADVANCE(76);
            if (lookahead == 't')
                ADVANCE(82);
            if (lookahead == 'w')
                ADVANCE(85);
            LEX_ERROR();
        case 183:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'k') ||
                ('m' <= lookahead && lookahead <= 'z'))
                ADVANCE(19);
            if (lookahead == 'l')
                ADVANCE(46);
            ACCEPT_TOKEN(sym_identifier);
        case 184:
            if (lookahead == 0)
                ADVANCE(1);
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(184);
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
                ADVANCE(176);
            if (lookahead == 'f')
                ADVANCE(56);
            if (lookahead == 'i')
                ADVANCE(95);
            if (lookahead == 'p')
                ADVANCE(68);
            if (lookahead == 'r')
                ADVANCE(76);
            if (lookahead == 't')
                ADVANCE(82);
            if (lookahead == 'w')
                ADVANCE(85);
            LEX_ERROR();
        case 185:
            if (lookahead == 0)
                ADVANCE(1);
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(185);
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
                ADVANCE(95);
            if (lookahead == 'p')
                ADVANCE(68);
            if (lookahead == 'r')
                ADVANCE(76);
            if (lookahead == 't')
                ADVANCE(82);
            if (lookahead == 'w')
                ADVANCE(85);
            LEX_ERROR();
        case 186:
            if (lookahead == 0)
                ADVANCE(1);
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(186);
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
                ADVANCE(181);
            if (lookahead == 'f')
                ADVANCE(94);
            if (lookahead == 'i')
                ADVANCE(95);
            if (lookahead == 'p')
                ADVANCE(68);
            if (lookahead == 'r')
                ADVANCE(76);
            if (lookahead == 't')
                ADVANCE(82);
            if (lookahead == 'w')
                ADVANCE(85);
            LEX_ERROR();
        case 187:
            if (lookahead == 0)
                ADVANCE(1);
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(187);
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
                ADVANCE(183);
            if (lookahead == 'f')
                ADVANCE(94);
            if (lookahead == 'i')
                ADVANCE(95);
            if (lookahead == 'p')
                ADVANCE(68);
            if (lookahead == 'r')
                ADVANCE(76);
            if (lookahead == 't')
                ADVANCE(82);
            if (lookahead == 'w')
                ADVANCE(85);
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
                ADVANCE(9);
            LEX_ERROR();
        case 189:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(189);
            if (lookahead == '#')
                ADVANCE(2);
            if (lookahead == ')')
                ADVANCE(5);
            if (lookahead == '*')
                ADVANCE(6);
            if (lookahead == '.')
                ADVANCE(123);
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(13);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(19);
            if (lookahead == '[')
                ADVANCE(20);
            if (lookahead == ']')
                ADVANCE(21);
            LEX_ERROR();
        case 190:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(190);
            if (lookahead == '#')
                ADVANCE(2);
            if (lookahead == '*')
                ADVANCE(154);
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(13);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(19);
            if (lookahead == '[')
                ADVANCE(20);
            LEX_ERROR();
        case 191:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(191);
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
                ADVANCE(143);
            if (lookahead == ':')
                ADVANCE(15);
            if (lookahead == '=')
                ADVANCE(17);
            if (lookahead == '[')
                ADVANCE(20);
            if (lookahead == ']')
                ADVANCE(21);
            if (lookahead == 'a')
                ADVANCE(102);
            if (lookahead == 'f')
                ADVANCE(104);
            if (lookahead == 'i')
                ADVANCE(107);
            LEX_ERROR();
        case 192:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(192);
            if (lookahead == '#')
                ADVANCE(2);
            if (lookahead == ')')
                ADVANCE(5);
            if (lookahead == ':')
                ADVANCE(15);
            if (lookahead == 'i')
                ADVANCE(107);
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
                ADVANCE(5);
            if (lookahead == ',')
                ADVANCE(9);
            if (lookahead == ':')
                ADVANCE(15);
            if (lookahead == ']')
                ADVANCE(21);
            if (lookahead == 'i')
                ADVANCE(107);
            LEX_ERROR();
        case 194:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(194);
            if (lookahead == '#')
                ADVANCE(2);
            if (lookahead == ')')
                ADVANCE(5);
            if (lookahead == '*')
                ADVANCE(154);
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(13);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(19);
            if (lookahead == '[')
                ADVANCE(20);
            LEX_ERROR();
        case 195:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(195);
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
            LEX_ERROR();
        case 196:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(196);
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
                ADVANCE(102);
            if (lookahead == 'i')
                ADVANCE(107);
            LEX_ERROR();
        case 197:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(197);
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
                ADVANCE(102);
            if (lookahead == 'i')
                ADVANCE(107);
            LEX_ERROR();
        default:
            LEX_ERROR();
    }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
    [0] = {.lex_state = 0, .external_tokens = 1},
    [1] = {.lex_state = 93},
    [2] = {.lex_state = 96},
    [3] = {.lex_state = 96},
    [4] = {.lex_state = 96},
    [5] = {.lex_state = 97, .external_tokens = 2},
    [6] = {.lex_state = 96},
    [7] = {.lex_state = 96},
    [8] = {.lex_state = 96},
    [9] = {.lex_state = 98},
    [10] = {.lex_state = 96},
    [11] = {.lex_state = 99},
    [12] = {.lex_state = 99},
    [13] = {.lex_state = 99},
    [14] = {.lex_state = 100},
    [15] = {.lex_state = 101, .external_tokens = 2},
    [16] = {.lex_state = 109},
    [17] = {.lex_state = 110, .external_tokens = 2},
    [18] = {.lex_state = 97, .external_tokens = 2},
    [19] = {.lex_state = 110, .external_tokens = 2},
    [20] = {.lex_state = 110, .external_tokens = 2},
    [21] = {.lex_state = 111},
    [22] = {.lex_state = 120, .external_tokens = 2},
    [23] = {.lex_state = 110, .external_tokens = 2},
    [24] = {.lex_state = 111},
    [25] = {.lex_state = 110, .external_tokens = 2},
    [26] = {.lex_state = 111},
    [27] = {.lex_state = 109},
    [28] = {.lex_state = 110, .external_tokens = 2},
    [29] = {.lex_state = 121},
    [30] = {.lex_state = 96},
    [31] = {.lex_state = 122},
    [32] = {.lex_state = 100},
    [33] = {.lex_state = 124},
    [34] = {.lex_state = 101},
    [35] = {.lex_state = 125},
    [36] = {.lex_state = 126},
    [37] = {.lex_state = 121},
    [38] = {.lex_state = 96},
    [39] = {.lex_state = 122},
    [40] = {.lex_state = 101, .external_tokens = 2},
    [41] = {.lex_state = 124},
    [42] = {.lex_state = 126},
    [43] = {.lex_state = 101, .external_tokens = 2},
    [44] = {.lex_state = 124},
    [45] = {.lex_state = 101, .external_tokens = 2},
    [46] = {.lex_state = 125},
    [47] = {.lex_state = 124},
    [48] = {.lex_state = 125},
    [49] = {.lex_state = 126},
    [50] = {.lex_state = 101},
    [51] = {.lex_state = 124},
    [52] = {.lex_state = 126},
    [53] = {.lex_state = 101},
    [54] = {.lex_state = 101},
    [55] = {.lex_state = 124},
    [56] = {.lex_state = 125},
    [57] = {.lex_state = 101},
    [58] = {.lex_state = 96},
    [59] = {.lex_state = 96},
    [60] = {.lex_state = 127},
    [61] = {.lex_state = 128},
    [62] = {.lex_state = 129},
    [63] = {.lex_state = 129},
    [64] = {.lex_state = 130},
    [65] = {.lex_state = 121},
    [66] = {.lex_state = 128},
    [67] = {.lex_state = 129},
    [68] = {.lex_state = 129},
    [69] = {.lex_state = 130},
    [70] = {.lex_state = 101},
    [71] = {.lex_state = 131},
    [72] = {.lex_state = 129},
    [73] = {.lex_state = 131},
    [74] = {.lex_state = 101},
    [75] = {.lex_state = 128},
    [76] = {.lex_state = 129},
    [77] = {.lex_state = 130},
    [78] = {.lex_state = 101},
    [79] = {.lex_state = 128},
    [80] = {.lex_state = 129},
    [81] = {.lex_state = 130},
    [82] = {.lex_state = 101},
    [83] = {.lex_state = 133},
    [84] = {.lex_state = 101},
    [85] = {.lex_state = 131},
    [86] = {.lex_state = 129},
    [87] = {.lex_state = 131},
    [88] = {.lex_state = 130},
    [89] = {.lex_state = 133},
    [90] = {.lex_state = 96},
    [91] = {.lex_state = 128},
    [92] = {.lex_state = 134},
    [93] = {.lex_state = 101},
    [94] = {.lex_state = 135},
    [95] = {.lex_state = 100},
    [96] = {.lex_state = 96},
    [97] = {.lex_state = 101},
    [98] = {.lex_state = 124},
    [99] = {.lex_state = 100},
    [100] = {.lex_state = 101},
    [101] = {.lex_state = 101},
    [102] = {.lex_state = 136},
    [103] = {.lex_state = 137},
    [104] = {.lex_state = 138},
    [105] = {.lex_state = 96},
    [106] = {.lex_state = 139},
    [107] = {.lex_state = 96},
    [108] = {.lex_state = 136},
    [109] = {.lex_state = 96},
    [110] = {.lex_state = 140},
    [111] = {.lex_state = 101},
    [112] = {.lex_state = 128},
    [113] = {.lex_state = 141, .external_tokens = 2},
    [114] = {.lex_state = 128},
    [115] = {.lex_state = 129},
    [116] = {.lex_state = 129},
    [117] = {.lex_state = 130},
    [118] = {.lex_state = 121},
    [119] = {.lex_state = 128},
    [120] = {.lex_state = 129},
    [121] = {.lex_state = 129},
    [122] = {.lex_state = 130},
    [123] = {.lex_state = 101, .external_tokens = 2},
    [124] = {.lex_state = 131},
    [125] = {.lex_state = 129},
    [126] = {.lex_state = 131},
    [127] = {.lex_state = 101, .external_tokens = 2},
    [128] = {.lex_state = 130},
    [129] = {.lex_state = 101, .external_tokens = 2},
    [130] = {.lex_state = 130},
    [131] = {.lex_state = 101, .external_tokens = 2},
    [132] = {.lex_state = 133},
    [133] = {.lex_state = 101, .external_tokens = 2},
    [134] = {.lex_state = 131},
    [135] = {.lex_state = 129},
    [136] = {.lex_state = 131},
    [137] = {.lex_state = 130},
    [138] = {.lex_state = 133},
    [139] = {.lex_state = 110, .external_tokens = 2},
    [140] = {.lex_state = 101, .external_tokens = 2},
    [141] = {.lex_state = 135},
    [142] = {.lex_state = 100},
    [143] = {.lex_state = 96},
    [144] = {.lex_state = 101, .external_tokens = 2},
    [145] = {.lex_state = 124},
    [146] = {.lex_state = 100},
    [147] = {.lex_state = 101, .external_tokens = 2},
    [148] = {.lex_state = 101, .external_tokens = 2},
    [149] = {.lex_state = 137},
    [150] = {.lex_state = 96},
    [151] = {.lex_state = 140},
    [152] = {.lex_state = 101, .external_tokens = 2},
    [153] = {.lex_state = 142, .external_tokens = 2},
    [154] = {.lex_state = 144, .external_tokens = 2},
    [155] = {.lex_state = 96},
    [156] = {.lex_state = 111},
    [157] = {.lex_state = 97, .external_tokens = 2},
    [158] = {.lex_state = 111},
    [159] = {.lex_state = 128},
    [160] = {.lex_state = 97, .external_tokens = 2},
    [161] = {.lex_state = 129},
    [162] = {.lex_state = 97, .external_tokens = 2},
    [163] = {.lex_state = 99},
    [164] = {.lex_state = 142, .external_tokens = 2},
    [165] = {.lex_state = 99},
    [166] = {.lex_state = 142, .external_tokens = 2},
    [167] = {.lex_state = 142, .external_tokens = 2},
    [168] = {.lex_state = 145},
    [169] = {.lex_state = 146, .external_tokens = 3},
    [170] = {.lex_state = 96},
    [171] = {.lex_state = 130},
    [172] = {.lex_state = 98},
    [173] = {.lex_state = 146, .external_tokens = 3},
    [174] = {.lex_state = 150, .external_tokens = 4},
    [175] = {.lex_state = 97, .external_tokens = 2},
    [176] = {.lex_state = 110, .external_tokens = 2},
    [177] = {.lex_state = 151, .external_tokens = 2},
    [178] = {.lex_state = 96},
    [179] = {.lex_state = 96},
    [180] = {.lex_state = 96},
    [181] = {.lex_state = 98},
    [182] = {.lex_state = 96},
    [183] = {.lex_state = 99},
    [184] = {.lex_state = 99},
    [185] = {.lex_state = 150, .external_tokens = 4},
    [186] = {.lex_state = 97, .external_tokens = 2},
    [187] = {.lex_state = 150, .external_tokens = 4},
    [188] = {.lex_state = 150, .external_tokens = 4},
    [189] = {.lex_state = 150, .external_tokens = 4},
    [190] = {.lex_state = 111},
    [191] = {.lex_state = 150, .external_tokens = 4},
    [192] = {.lex_state = 151, .external_tokens = 2},
    [193] = {.lex_state = 150, .external_tokens = 4},
    [194] = {.lex_state = 150, .external_tokens = 4},
    [195] = {.lex_state = 145},
    [196] = {.lex_state = 146, .external_tokens = 3},
    [197] = {.lex_state = 96},
    [198] = {.lex_state = 130},
    [199] = {.lex_state = 98},
    [200] = {.lex_state = 146, .external_tokens = 3},
    [201] = {.lex_state = 150, .external_tokens = 4},
    [202] = {.lex_state = 97, .external_tokens = 2},
    [203] = {.lex_state = 150, .external_tokens = 4},
    [204] = {.lex_state = 152, .external_tokens = 4},
    [205] = {.lex_state = 150, .external_tokens = 4},
    [206] = {.lex_state = 152, .external_tokens = 4},
    [207] = {.lex_state = 150, .external_tokens = 4},
    [208] = {.lex_state = 144},
    [209] = {.lex_state = 153},
    [210] = {.lex_state = 98},
    [211] = {.lex_state = 146, .external_tokens = 3},
    [212] = {.lex_state = 150, .external_tokens = 4},
    [213] = {.lex_state = 98},
    [214] = {.lex_state = 155},
    [215] = {.lex_state = 156},
    [216] = {.lex_state = 129},
    [217] = {.lex_state = 129},
    [218] = {.lex_state = 130},
    [219] = {.lex_state = 155},
    [220] = {.lex_state = 156},
    [221] = {.lex_state = 129},
    [222] = {.lex_state = 129},
    [223] = {.lex_state = 130},
    [224] = {.lex_state = 98},
    [225] = {.lex_state = 157},
    [226] = {.lex_state = 157},
    [227] = {.lex_state = 130},
    [228] = {.lex_state = 98},
    [229] = {.lex_state = 99},
    [230] = {.lex_state = 130},
    [231] = {.lex_state = 153},
    [232] = {.lex_state = 98},
    [233] = {.lex_state = 96},
    [234] = {.lex_state = 128},
    [235] = {.lex_state = 98},
    [236] = {.lex_state = 157},
    [237] = {.lex_state = 130},
    [238] = {.lex_state = 153},
    [239] = {.lex_state = 129},
    [240] = {.lex_state = 158},
    [241] = {.lex_state = 159},
    [242] = {.lex_state = 96},
    [243] = {.lex_state = 160},
    [244] = {.lex_state = 96},
    [245] = {.lex_state = 146, .external_tokens = 3},
    [246] = {.lex_state = 158},
    [247] = {.lex_state = 96},
    [248] = {.lex_state = 146, .external_tokens = 3},
    [249] = {.lex_state = 150, .external_tokens = 4},
    [250] = {.lex_state = 158},
    [251] = {.lex_state = 150, .external_tokens = 4},
    [252] = {.lex_state = 158},
    [253] = {.lex_state = 146, .external_tokens = 3},
    [254] = {.lex_state = 150, .external_tokens = 4},
    [255] = {.lex_state = 97, .external_tokens = 2},
    [256] = {.lex_state = 161},
    [257] = {.lex_state = 96},
    [258] = {.lex_state = 98},
    [259] = {.lex_state = 175, .external_tokens = 4},
    [260] = {.lex_state = 150, .external_tokens = 4},
    [261] = {.lex_state = 175, .external_tokens = 4},
    [262] = {.lex_state = 98},
    [263] = {.lex_state = 178, .external_tokens = 4},
    [264] = {.lex_state = 175, .external_tokens = 4},
    [265] = {.lex_state = 150, .external_tokens = 4},
    [266] = {.lex_state = 150, .external_tokens = 4},
    [267] = {.lex_state = 146, .external_tokens = 3},
    [268] = {.lex_state = 178, .external_tokens = 4},
    [269] = {.lex_state = 146, .external_tokens = 3},
    [270] = {.lex_state = 150, .external_tokens = 4},
    [271] = {.lex_state = 159},
    [272] = {.lex_state = 96},
    [273] = {.lex_state = 146, .external_tokens = 3},
    [274] = {.lex_state = 179},
    [275] = {.lex_state = 146, .external_tokens = 3},
    [276] = {.lex_state = 175, .external_tokens = 4},
    [277] = {.lex_state = 175, .external_tokens = 4},
    [278] = {.lex_state = 161},
    [279] = {.lex_state = 150, .external_tokens = 4},
    [280] = {.lex_state = 161},
    [281] = {.lex_state = 179},
    [282] = {.lex_state = 146, .external_tokens = 3},
    [283] = {.lex_state = 180, .external_tokens = 4},
    [284] = {.lex_state = 150, .external_tokens = 4},
    [285] = {.lex_state = 137},
    [286] = {.lex_state = 96},
    [287] = {.lex_state = 98},
    [288] = {.lex_state = 146, .external_tokens = 3},
    [289] = {.lex_state = 180, .external_tokens = 4},
    [290] = {.lex_state = 150, .external_tokens = 4},
    [291] = {.lex_state = 179},
    [292] = {.lex_state = 146, .external_tokens = 3},
    [293] = {.lex_state = 182, .external_tokens = 4},
    [294] = {.lex_state = 96},
    [295] = {.lex_state = 182, .external_tokens = 4},
    [296] = {.lex_state = 150, .external_tokens = 4},
    [297] = {.lex_state = 182, .external_tokens = 4},
    [298] = {.lex_state = 182, .external_tokens = 4},
    [299] = {.lex_state = 150, .external_tokens = 4},
    [300] = {.lex_state = 179},
    [301] = {.lex_state = 146, .external_tokens = 3},
    [302] = {.lex_state = 182, .external_tokens = 4},
    [303] = {.lex_state = 110, .external_tokens = 2},
    [304] = {.lex_state = 144},
    [305] = {.lex_state = 98},
    [306] = {.lex_state = 146, .external_tokens = 3},
    [307] = {.lex_state = 110, .external_tokens = 2},
    [308] = {.lex_state = 158},
    [309] = {.lex_state = 146, .external_tokens = 3},
    [310] = {.lex_state = 158},
    [311] = {.lex_state = 146, .external_tokens = 3},
    [312] = {.lex_state = 110, .external_tokens = 2},
    [313] = {.lex_state = 110, .external_tokens = 2},
    [314] = {.lex_state = 146, .external_tokens = 3},
    [315] = {.lex_state = 161},
    [316] = {.lex_state = 96},
    [317] = {.lex_state = 98},
    [318] = {.lex_state = 184, .external_tokens = 2},
    [319] = {.lex_state = 110, .external_tokens = 2},
    [320] = {.lex_state = 184, .external_tokens = 2},
    [321] = {.lex_state = 98},
    [322] = {.lex_state = 185, .external_tokens = 2},
    [323] = {.lex_state = 184, .external_tokens = 2},
    [324] = {.lex_state = 110, .external_tokens = 2},
    [325] = {.lex_state = 110, .external_tokens = 2},
    [326] = {.lex_state = 146, .external_tokens = 3},
    [327] = {.lex_state = 185, .external_tokens = 2},
    [328] = {.lex_state = 146, .external_tokens = 3},
    [329] = {.lex_state = 110, .external_tokens = 2},
    [330] = {.lex_state = 159},
    [331] = {.lex_state = 96},
    [332] = {.lex_state = 146, .external_tokens = 3},
    [333] = {.lex_state = 179},
    [334] = {.lex_state = 146, .external_tokens = 3},
    [335] = {.lex_state = 184, .external_tokens = 2},
    [336] = {.lex_state = 184, .external_tokens = 2},
    [337] = {.lex_state = 179},
    [338] = {.lex_state = 146, .external_tokens = 3},
    [339] = {.lex_state = 186, .external_tokens = 2},
    [340] = {.lex_state = 110, .external_tokens = 2},
    [341] = {.lex_state = 137},
    [342] = {.lex_state = 96},
    [343] = {.lex_state = 98},
    [344] = {.lex_state = 146, .external_tokens = 3},
    [345] = {.lex_state = 186, .external_tokens = 2},
    [346] = {.lex_state = 110, .external_tokens = 2},
    [347] = {.lex_state = 179},
    [348] = {.lex_state = 146, .external_tokens = 3},
    [349] = {.lex_state = 187, .external_tokens = 2},
    [350] = {.lex_state = 96},
    [351] = {.lex_state = 187, .external_tokens = 2},
    [352] = {.lex_state = 110, .external_tokens = 2},
    [353] = {.lex_state = 187, .external_tokens = 2},
    [354] = {.lex_state = 187, .external_tokens = 2},
    [355] = {.lex_state = 110, .external_tokens = 2},
    [356] = {.lex_state = 179},
    [357] = {.lex_state = 146, .external_tokens = 3},
    [358] = {.lex_state = 187, .external_tokens = 2},
    [359] = {.lex_state = 97, .external_tokens = 2},
    [360] = {.lex_state = 141, .external_tokens = 2},
    [361] = {.lex_state = 96},
    [362] = {.lex_state = 188, .external_tokens = 2},
    [363] = {.lex_state = 96},
    [364] = {.lex_state = 141, .external_tokens = 2},
    [365] = {.lex_state = 141, .external_tokens = 2},
    [366] = {.lex_state = 97, .external_tokens = 2},
    [367] = {.lex_state = 141, .external_tokens = 2},
    [368] = {.lex_state = 188, .external_tokens = 2},
    [369] = {.lex_state = 189},
    [370] = {.lex_state = 96},
    [371] = {.lex_state = 146, .external_tokens = 3},
    [372] = {.lex_state = 96},
    [373] = {.lex_state = 98},
    [374] = {.lex_state = 96},
    [375] = {.lex_state = 96},
    [376] = {.lex_state = 96},
    [377] = {.lex_state = 98},
    [378] = {.lex_state = 96},
    [379] = {.lex_state = 96},
    [380] = {.lex_state = 98},
    [381] = {.lex_state = 96},
    [382] = {.lex_state = 99},
    [383] = {.lex_state = 133},
    [384] = {.lex_state = 101, .external_tokens = 2},
    [385] = {.lex_state = 96},
    [386] = {.lex_state = 190},
    [387] = {.lex_state = 99},
    [388] = {.lex_state = 99},
    [389] = {.lex_state = 96},
    [390] = {.lex_state = 126},
    [391] = {.lex_state = 124},
    [392] = {.lex_state = 101, .external_tokens = 2},
    [393] = {.lex_state = 191, .external_tokens = 2},
    [394] = {.lex_state = 151, .external_tokens = 5},
    [395] = {.lex_state = 150, .external_tokens = 4},
    [396] = {.lex_state = 151, .external_tokens = 5},
    [397] = {.lex_state = 110, .external_tokens = 5},
    [398] = {.lex_state = 97, .external_tokens = 2},
    [399] = {.lex_state = 110, .external_tokens = 5},
    [400] = {.lex_state = 110, .external_tokens = 5},
    [401] = {.lex_state = 187, .external_tokens = 5},
    [402] = {.lex_state = 185, .external_tokens = 5},
    [403] = {.lex_state = 184, .external_tokens = 5},
    [404] = {.lex_state = 110, .external_tokens = 5},
    [405] = {.lex_state = 158},
    [406] = {.lex_state = 110, .external_tokens = 5},
    [407] = {.lex_state = 98},
    [408] = {.lex_state = 129},
    [409] = {.lex_state = 129},
    [410] = {.lex_state = 130},
    [411] = {.lex_state = 111},
    [412] = {.lex_state = 151, .external_tokens = 5},
    [413] = {.lex_state = 192, .external_tokens = 2},
    [414] = {.lex_state = 101, .external_tokens = 2},
    [415] = {.lex_state = 129},
    [416] = {.lex_state = 129},
    [417] = {.lex_state = 130},
    [418] = {.lex_state = 110, .external_tokens = 5},
    [419] = {.lex_state = 193, .external_tokens = 2},
    [420] = {.lex_state = 187, .external_tokens = 5},
    [421] = {.lex_state = 184, .external_tokens = 5},
    [422] = {.lex_state = 158},
    [423] = {.lex_state = 111},
    [424] = {.lex_state = 129},
    [425] = {.lex_state = 131},
    [426] = {.lex_state = 101, .external_tokens = 2},
    [427] = {.lex_state = 130},
    [428] = {.lex_state = 101, .external_tokens = 2},
    [429] = {.lex_state = 110, .external_tokens = 5},
    [430] = {.lex_state = 146, .external_tokens = 3},
    [431] = {.lex_state = 97, .external_tokens = 2},
    [432] = {.lex_state = 110, .external_tokens = 5},
    [433] = {.lex_state = 151, .external_tokens = 5},
    [434] = {.lex_state = 150, .external_tokens = 4},
    [435] = {.lex_state = 151, .external_tokens = 5},
    [436] = {.lex_state = 185, .external_tokens = 5},
    [437] = {.lex_state = 184, .external_tokens = 5},
    [438] = {.lex_state = 110, .external_tokens = 5},
    [439] = {.lex_state = 110, .external_tokens = 5},
    [440] = {.lex_state = 187, .external_tokens = 5},
    [441] = {.lex_state = 110, .external_tokens = 5},
    [442] = {.lex_state = 146, .external_tokens = 3},
    [443] = {.lex_state = 185, .external_tokens = 5},
    [444] = {.lex_state = 100},
    [445] = {.lex_state = 136, .external_tokens = 2},
    [446] = {.lex_state = 96},
    [447] = {.lex_state = 136, .external_tokens = 2},
    [448] = {.lex_state = 96},
    [449] = {.lex_state = 110, .external_tokens = 5},
    [450] = {.lex_state = 97, .external_tokens = 2},
    [451] = {.lex_state = 110, .external_tokens = 5},
    [452] = {.lex_state = 137},
    [453] = {.lex_state = 96},
    [454] = {.lex_state = 98},
    [455] = {.lex_state = 146, .external_tokens = 3},
    [456] = {.lex_state = 186, .external_tokens = 5},
    [457] = {.lex_state = 110, .external_tokens = 5},
    [458] = {.lex_state = 101, .external_tokens = 2},
    [459] = {.lex_state = 131},
    [460] = {.lex_state = 101, .external_tokens = 2},
    [461] = {.lex_state = 130},
    [462] = {.lex_state = 101, .external_tokens = 2},
    [463] = {.lex_state = 133},
    [464] = {.lex_state = 189},
    [465] = {.lex_state = 146, .external_tokens = 3},
    [466] = {.lex_state = 101, .external_tokens = 2},
    [467] = {.lex_state = 101, .external_tokens = 2},
    [468] = {.lex_state = 151, .external_tokens = 5},
    [469] = {.lex_state = 187, .external_tokens = 5},
    [470] = {.lex_state = 110, .external_tokens = 5},
    [471] = {.lex_state = 101, .external_tokens = 2},
    [472] = {.lex_state = 136, .external_tokens = 2},
    [473] = {.lex_state = 146, .external_tokens = 3},
    [474] = {.lex_state = 184, .external_tokens = 5},
    [475] = {.lex_state = 98},
    [476] = {.lex_state = 146, .external_tokens = 3},
    [477] = {.lex_state = 110, .external_tokens = 5},
    [478] = {.lex_state = 110, .external_tokens = 5},
    [479] = {.lex_state = 184, .external_tokens = 5},
    [480] = {.lex_state = 110, .external_tokens = 5},
    [481] = {.lex_state = 98},
    [482] = {.lex_state = 157},
    [483] = {.lex_state = 98},
    [484] = {.lex_state = 130},
    [485] = {.lex_state = 98},
    [486] = {.lex_state = 153},
    [487] = {.lex_state = 98},
    [488] = {.lex_state = 146, .external_tokens = 3},
    [489] = {.lex_state = 110, .external_tokens = 5},
    [490] = {.lex_state = 146, .external_tokens = 3},
    [491] = {.lex_state = 110, .external_tokens = 5},
    [492] = {.lex_state = 151, .external_tokens = 5},
    [493] = {.lex_state = 146, .external_tokens = 3},
    [494] = {.lex_state = 194},
    [495] = {.lex_state = 127},
    [496] = {.lex_state = 130},
    [497] = {.lex_state = 110, .external_tokens = 5},
    [498] = {.lex_state = 135},
    [499] = {.lex_state = 126},
    [500] = {.lex_state = 101, .external_tokens = 2},
    [501] = {.lex_state = 125},
    [502] = {.lex_state = 101, .external_tokens = 2},
    [503] = {.lex_state = 142, .external_tokens = 2},
    [504] = {.lex_state = 145},
    [505] = {.lex_state = 96},
    [506] = {.lex_state = 128},
    [507] = {.lex_state = 128},
    [508] = {.lex_state = 190},
    [509] = {.lex_state = 127},
    [510] = {.lex_state = 128},
    [511] = {.lex_state = 133},
    [512] = {.lex_state = 101, .external_tokens = 2},
    [513] = {.lex_state = 129},
    [514] = {.lex_state = 128},
    [515] = {.lex_state = 144},
    [516] = {.lex_state = 158},
    [517] = {.lex_state = 146, .external_tokens = 3},
    [518] = {.lex_state = 110, .external_tokens = 5},
    [519] = {.lex_state = 160},
    [520] = {.lex_state = 159},
    [521] = {.lex_state = 96},
    [522] = {.lex_state = 146, .external_tokens = 3},
    [523] = {.lex_state = 179},
    [524] = {.lex_state = 184, .external_tokens = 5},
    [525] = {.lex_state = 146, .external_tokens = 3},
    [526] = {.lex_state = 161},
    [527] = {.lex_state = 179},
    [528] = {.lex_state = 146, .external_tokens = 3},
    [529] = {.lex_state = 186, .external_tokens = 5},
    [530] = {.lex_state = 110, .external_tokens = 5},
    [531] = {.lex_state = 195},
    [532] = {.lex_state = 96},
    [533] = {.lex_state = 195},
    [534] = {.lex_state = 137},
    [535] = {.lex_state = 179},
    [536] = {.lex_state = 146, .external_tokens = 3},
    [537] = {.lex_state = 187, .external_tokens = 5},
    [538] = {.lex_state = 179},
    [539] = {.lex_state = 146, .external_tokens = 3},
    [540] = {.lex_state = 187, .external_tokens = 5},
    [541] = {.lex_state = 110, .external_tokens = 5},
    [542] = {.lex_state = 101, .external_tokens = 2},
    [543] = {.lex_state = 124},
    [544] = {.lex_state = 101, .external_tokens = 2},
    [545] = {.lex_state = 196, .external_tokens = 2},
    [546] = {.lex_state = 158},
    [547] = {.lex_state = 197, .external_tokens = 2},
    [548] = {.lex_state = 129},
    [549] = {.lex_state = 130},
    [550] = {.lex_state = 101, .external_tokens = 2},
    [551] = {.lex_state = 96},
    [552] = {.lex_state = 197, .external_tokens = 2},
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
        [sym_module] = STATE(16),
        [sym__statement] = STATE(397),
        [sym__simple_statement] = STATE(398),
        [sym_print_statement] = STATE(5),
        [sym_expression_statement] = STATE(5),
        [sym_return_statement] = STATE(5),
        [sym_delete_statement] = STATE(5),
        [sym__compound_statement] = STATE(399),
        [sym_if_statement] = STATE(400),
        [sym_elif_clause] = STATE(401),
        [sym_else_clause] = STATE(402),
        [sym_for_statement] = STATE(400),
        [sym_while_statement] = STATE(400),
        [sym_try_statement] = STATE(400),
        [sym_except_clause] = STATE(403),
        [sym_finally_clause] = STATE(404),
        [sym_with_statement] = STATE(400),
        [sym_with_item] = STATE(405),
        [sym_function_definition] = STATE(406),
        [sym_parameters] = STATE(407),
        [sym_default_parameter] = STATE(408),
        [sym_list_splat_parameter] = STATE(409),
        [sym_dictionary_splat_parameter] = STATE(410),
        [sym_class_definition] = STATE(406),
        [sym_decorated_definition] = STATE(400),
        [sym_decorator] = STATE(411),
        [sym__suite] = STATE(412),
        [sym_arguments] = STATE(157),
        [sym_expression_list] = STATE(413),
        [sym_dotted_name] = STATE(154),
        [sym__expression] = STATE(414),
        [sym_binary_operator] = STATE(15),
        [sym_subscript] = STATE(15),
        [sym_call] = STATE(15),
        [sym_keyword_argument] = STATE(415),
        [sym_list_splat_argument] = STATE(416),
        [sym_dictionary_splat_argument] = STATE(417),
        [sym_list] = STATE(15),
        [sym_list_comprehension] = STATE(15),
        [aux_sym_module_repeat1] = STATE(418),
        [aux_sym_print_statement_repeat1] = STATE(419),
        [aux_sym_if_statement_repeat1] = STATE(420),
        [aux_sym_try_statement_repeat1] = STATE(421),
        [aux_sym_with_statement_repeat1] = STATE(422),
        [aux_sym_parameters_repeat1] = STATE(219),
        [aux_sym_decorated_definition_repeat1] = STATE(423),
        [aux_sym_dotted_name_repeat1] = STATE(164),
        [aux_sym_subscript_repeat1] = STATE(41),
        [aux_sym_call_repeat1] = STATE(118),
        [aux_sym_call_repeat2] = STATE(424),
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
        [sym_number] = ACTIONS(65),
        [sym_identifier] = ACTIONS(67),
        [sym_comment] = ACTIONS(69),
        [sym__newline] = ACTIONS(71),
        [sym__indent] = ACTIONS(73),
        [sym__dedent] = ACTIONS(75),
    },
    [1] = {
        [sym_module] = STATE(16),
        [sym__statement] = STATE(17),
        [sym__simple_statement] = STATE(18),
        [sym_print_statement] = STATE(5),
        [sym_expression_statement] = STATE(5),
        [sym_return_statement] = STATE(5),
        [sym_delete_statement] = STATE(5),
        [sym__compound_statement] = STATE(19),
        [sym_if_statement] = STATE(20),
        [sym_for_statement] = STATE(20),
        [sym_while_statement] = STATE(20),
        [sym_try_statement] = STATE(20),
        [sym_with_statement] = STATE(20),
        [sym_function_definition] = STATE(20),
        [sym_class_definition] = STATE(20),
        [sym_decorated_definition] = STATE(20),
        [sym_decorator] = STATE(21),
        [sym__expression] = STATE(22),
        [sym_binary_operator] = STATE(15),
        [sym_subscript] = STATE(15),
        [sym_call] = STATE(15),
        [sym_list] = STATE(15),
        [sym_list_comprehension] = STATE(15),
        [aux_sym_module_repeat1] = STATE(23),
        [aux_sym_decorated_definition_repeat1] = STATE(24),
        [ts_builtin_sym_end] = ACTIONS(77),
        [anon_sym_print] = ACTIONS(79),
        [anon_sym_return] = ACTIONS(81),
        [anon_sym_del] = ACTIONS(83),
        [sym_pass_statement] = ACTIONS(85),
        [sym_break_statement] = ACTIONS(85),
        [sym_continue_statement] = ACTIONS(85),
        [anon_sym_if] = ACTIONS(87),
        [anon_sym_for] = ACTIONS(89),
        [anon_sym_while] = ACTIONS(91),
        [anon_sym_try] = ACTIONS(93),
        [anon_sym_with] = ACTIONS(95),
        [anon_sym_def] = ACTIONS(97),
        [anon_sym_class] = ACTIONS(99),
        [anon_sym_AT] = ACTIONS(101),
        [anon_sym_LBRACK] = ACTIONS(103),
        [sym_number] = ACTIONS(105),
        [sym_identifier] = ACTIONS(107),
        [sym_comment] = ACTIONS(69),
    },
    [2] = {
        [sym__expression] = STATE(367),
        [sym_binary_operator] = STATE(15),
        [sym_subscript] = STATE(15),
        [sym_call] = STATE(15),
        [sym_list] = STATE(15),
        [sym_list_comprehension] = STATE(15),
        [anon_sym_LBRACK] = ACTIONS(103),
        [sym_number] = ACTIONS(105),
        [sym_identifier] = ACTIONS(105),
        [sym_comment] = ACTIONS(69),
    },
    [3] = {
        [sym_expression_list] = STATE(366),
        [sym__expression] = STATE(360),
        [sym_binary_operator] = STATE(15),
        [sym_subscript] = STATE(15),
        [sym_call] = STATE(15),
        [sym_list] = STATE(15),
        [sym_list_comprehension] = STATE(15),
        [anon_sym_LBRACK] = ACTIONS(103),
        [sym_number] = ACTIONS(105),
        [sym_identifier] = ACTIONS(105),
        [sym_comment] = ACTIONS(69),
    },
    [4] = {
        [sym_expression_list] = STATE(359),
        [sym__expression] = STATE(360),
        [sym_binary_operator] = STATE(15),
        [sym_subscript] = STATE(15),
        [sym_call] = STATE(15),
        [sym_list] = STATE(15),
        [sym_list_comprehension] = STATE(15),
        [anon_sym_LBRACK] = ACTIONS(103),
        [sym_number] = ACTIONS(105),
        [sym_identifier] = ACTIONS(105),
        [sym_comment] = ACTIONS(69),
    },
    [5] = {
        [sym_comment] = ACTIONS(69),
        [sym__newline] = ACTIONS(109),
    },
    [6] = {
        [sym__expression] = STATE(347),
        [sym_binary_operator] = STATE(34),
        [sym_subscript] = STATE(34),
        [sym_call] = STATE(34),
        [sym_list] = STATE(34),
        [sym_list_comprehension] = STATE(34),
        [anon_sym_LBRACK] = ACTIONS(111),
        [sym_number] = ACTIONS(113),
        [sym_identifier] = ACTIONS(113),
        [sym_comment] = ACTIONS(69),
    },
    [7] = {
        [sym_expression_list] = STATE(341),
        [sym__expression] = STATE(104),
        [sym_binary_operator] = STATE(34),
        [sym_subscript] = STATE(34),
        [sym_call] = STATE(34),
        [sym_list] = STATE(34),
        [sym_list_comprehension] = STATE(34),
        [anon_sym_LBRACK] = ACTIONS(111),
        [sym_number] = ACTIONS(113),
        [sym_identifier] = ACTIONS(113),
        [sym_comment] = ACTIONS(69),
    },
    [8] = {
        [sym__expression] = STATE(337),
        [sym_binary_operator] = STATE(34),
        [sym_subscript] = STATE(34),
        [sym_call] = STATE(34),
        [sym_list] = STATE(34),
        [sym_list_comprehension] = STATE(34),
        [anon_sym_LBRACK] = ACTIONS(111),
        [sym_number] = ACTIONS(113),
        [sym_identifier] = ACTIONS(113),
        [sym_comment] = ACTIONS(69),
    },
    [9] = {
        [anon_sym_COLON] = ACTIONS(115),
        [sym_comment] = ACTIONS(69),
    },
    [10] = {
        [sym_with_item] = STATE(308),
        [sym__expression] = STATE(241),
        [sym_binary_operator] = STATE(34),
        [sym_subscript] = STATE(34),
        [sym_call] = STATE(34),
        [sym_list] = STATE(34),
        [sym_list_comprehension] = STATE(34),
        [anon_sym_LBRACK] = ACTIONS(111),
        [sym_number] = ACTIONS(113),
        [sym_identifier] = ACTIONS(113),
        [sym_comment] = ACTIONS(69),
    },
    [11] = {
        [sym_identifier] = ACTIONS(117),
        [sym_comment] = ACTIONS(69),
    },
    [12] = {
        [sym_identifier] = ACTIONS(119),
        [sym_comment] = ACTIONS(69),
    },
    [13] = {
        [sym_dotted_name] = STATE(154),
        [sym_identifier] = ACTIONS(121),
        [sym_comment] = ACTIONS(69),
    },
    [14] = {
        [sym__expression] = STATE(141),
        [sym_binary_operator] = STATE(34),
        [sym_subscript] = STATE(34),
        [sym_call] = STATE(34),
        [sym_list] = STATE(34),
        [sym_list_comprehension] = STATE(34),
        [anon_sym_LBRACK] = ACTIONS(111),
        [anon_sym_RBRACK] = ACTIONS(123),
        [sym_number] = ACTIONS(113),
        [sym_identifier] = ACTIONS(113),
        [sym_comment] = ACTIONS(69),
    },
    [15] = {
        [anon_sym_COMMA] = ACTIONS(125),
        [anon_sym_COLON] = ACTIONS(125),
        [anon_sym_for] = ACTIONS(125),
        [anon_sym_in] = ACTIONS(125),
        [anon_sym_as] = ACTIONS(125),
        [anon_sym_LPAREN] = ACTIONS(125),
        [anon_sym_RPAREN] = ACTIONS(125),
        [anon_sym_PLUS] = ACTIONS(125),
        [anon_sym_LBRACK] = ACTIONS(125),
        [anon_sym_RBRACK] = ACTIONS(125),
        [sym_comment] = ACTIONS(69),
        [sym__newline] = ACTIONS(125),
    },
    [16] = {
        [ts_builtin_sym_end] = ACTIONS(127),
        [sym_comment] = ACTIONS(69),
    },
    [17] = {
        [ts_builtin_sym_end] = ACTIONS(129),
        [anon_sym_SEMI] = ACTIONS(129),
        [anon_sym_print] = ACTIONS(131),
        [anon_sym_return] = ACTIONS(131),
        [anon_sym_del] = ACTIONS(131),
        [sym_pass_statement] = ACTIONS(131),
        [sym_break_statement] = ACTIONS(131),
        [sym_continue_statement] = ACTIONS(131),
        [anon_sym_if] = ACTIONS(131),
        [anon_sym_for] = ACTIONS(131),
        [anon_sym_while] = ACTIONS(131),
        [anon_sym_try] = ACTIONS(131),
        [anon_sym_with] = ACTIONS(131),
        [anon_sym_def] = ACTIONS(131),
        [anon_sym_class] = ACTIONS(131),
        [anon_sym_AT] = ACTIONS(129),
        [anon_sym_LBRACK] = ACTIONS(129),
        [sym_number] = ACTIONS(131),
        [sym_identifier] = ACTIONS(133),
        [sym_comment] = ACTIONS(69),
        [sym__newline] = ACTIONS(129),
    },
    [18] = {
        [sym_comment] = ACTIONS(69),
        [sym__newline] = ACTIONS(135),
    },
    [19] = {
        [ts_builtin_sym_end] = ACTIONS(137),
        [anon_sym_SEMI] = ACTIONS(137),
        [anon_sym_print] = ACTIONS(139),
        [anon_sym_return] = ACTIONS(139),
        [anon_sym_del] = ACTIONS(139),
        [sym_pass_statement] = ACTIONS(139),
        [sym_break_statement] = ACTIONS(139),
        [sym_continue_statement] = ACTIONS(139),
        [anon_sym_if] = ACTIONS(139),
        [anon_sym_for] = ACTIONS(139),
        [anon_sym_while] = ACTIONS(139),
        [anon_sym_try] = ACTIONS(139),
        [anon_sym_with] = ACTIONS(139),
        [anon_sym_def] = ACTIONS(139),
        [anon_sym_class] = ACTIONS(139),
        [anon_sym_AT] = ACTIONS(137),
        [anon_sym_LBRACK] = ACTIONS(137),
        [sym_number] = ACTIONS(139),
        [sym_identifier] = ACTIONS(141),
        [sym_comment] = ACTIONS(69),
        [sym__newline] = ACTIONS(137),
    },
    [20] = {
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
        [sym_number] = ACTIONS(145),
        [sym_identifier] = ACTIONS(147),
        [sym_comment] = ACTIONS(69),
        [sym__newline] = ACTIONS(143),
    },
    [21] = {
        [anon_sym_def] = ACTIONS(149),
        [anon_sym_class] = ACTIONS(149),
        [anon_sym_AT] = ACTIONS(149),
        [sym_comment] = ACTIONS(69),
    },
    [22] = {
        [anon_sym_LPAREN] = ACTIONS(151),
        [anon_sym_PLUS] = ACTIONS(153),
        [anon_sym_LBRACK] = ACTIONS(155),
        [sym_comment] = ACTIONS(69),
        [sym__newline] = ACTIONS(157),
    },
    [23] = {
        [sym__statement] = STATE(28),
        [sym__simple_statement] = STATE(18),
        [sym_print_statement] = STATE(5),
        [sym_expression_statement] = STATE(5),
        [sym_return_statement] = STATE(5),
        [sym_delete_statement] = STATE(5),
        [sym__compound_statement] = STATE(19),
        [sym_if_statement] = STATE(20),
        [sym_for_statement] = STATE(20),
        [sym_while_statement] = STATE(20),
        [sym_try_statement] = STATE(20),
        [sym_with_statement] = STATE(20),
        [sym_function_definition] = STATE(20),
        [sym_class_definition] = STATE(20),
        [sym_decorated_definition] = STATE(20),
        [sym_decorator] = STATE(21),
        [sym__expression] = STATE(22),
        [sym_binary_operator] = STATE(15),
        [sym_subscript] = STATE(15),
        [sym_call] = STATE(15),
        [sym_list] = STATE(15),
        [sym_list_comprehension] = STATE(15),
        [aux_sym_decorated_definition_repeat1] = STATE(24),
        [ts_builtin_sym_end] = ACTIONS(159),
        [anon_sym_SEMI] = ACTIONS(161),
        [anon_sym_print] = ACTIONS(79),
        [anon_sym_return] = ACTIONS(81),
        [anon_sym_del] = ACTIONS(83),
        [sym_pass_statement] = ACTIONS(85),
        [sym_break_statement] = ACTIONS(85),
        [sym_continue_statement] = ACTIONS(85),
        [anon_sym_if] = ACTIONS(87),
        [anon_sym_for] = ACTIONS(89),
        [anon_sym_while] = ACTIONS(91),
        [anon_sym_try] = ACTIONS(93),
        [anon_sym_with] = ACTIONS(95),
        [anon_sym_def] = ACTIONS(97),
        [anon_sym_class] = ACTIONS(99),
        [anon_sym_AT] = ACTIONS(101),
        [anon_sym_LBRACK] = ACTIONS(103),
        [sym_number] = ACTIONS(105),
        [sym_identifier] = ACTIONS(107),
        [sym_comment] = ACTIONS(69),
        [sym__newline] = ACTIONS(161),
    },
    [24] = {
        [sym_function_definition] = STATE(25),
        [sym_class_definition] = STATE(25),
        [sym_decorator] = STATE(26),
        [anon_sym_def] = ACTIONS(163),
        [anon_sym_class] = ACTIONS(165),
        [anon_sym_AT] = ACTIONS(101),
        [sym_comment] = ACTIONS(69),
    },
    [25] = {
        [ts_builtin_sym_end] = ACTIONS(167),
        [anon_sym_SEMI] = ACTIONS(167),
        [anon_sym_print] = ACTIONS(169),
        [anon_sym_return] = ACTIONS(169),
        [anon_sym_del] = ACTIONS(169),
        [sym_pass_statement] = ACTIONS(169),
        [sym_break_statement] = ACTIONS(169),
        [sym_continue_statement] = ACTIONS(169),
        [anon_sym_if] = ACTIONS(169),
        [anon_sym_for] = ACTIONS(169),
        [anon_sym_while] = ACTIONS(169),
        [anon_sym_try] = ACTIONS(169),
        [anon_sym_with] = ACTIONS(169),
        [anon_sym_def] = ACTIONS(169),
        [anon_sym_class] = ACTIONS(169),
        [anon_sym_AT] = ACTIONS(167),
        [anon_sym_LBRACK] = ACTIONS(167),
        [sym_number] = ACTIONS(169),
        [sym_identifier] = ACTIONS(171),
        [sym_comment] = ACTIONS(69),
        [sym__newline] = ACTIONS(167),
    },
    [26] = {
        [anon_sym_def] = ACTIONS(173),
        [anon_sym_class] = ACTIONS(173),
        [anon_sym_AT] = ACTIONS(173),
        [sym_comment] = ACTIONS(69),
    },
    [27] = {
        [ts_builtin_sym_end] = ACTIONS(175),
        [sym_comment] = ACTIONS(69),
    },
    [28] = {
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
        [sym_number] = ACTIONS(179),
        [sym_identifier] = ACTIONS(181),
        [sym_comment] = ACTIONS(69),
        [sym__newline] = ACTIONS(177),
    },
    [29] = {
        [sym__expression] = STATE(114),
        [sym_binary_operator] = STATE(34),
        [sym_subscript] = STATE(34),
        [sym_call] = STATE(34),
        [sym_keyword_argument] = STATE(115),
        [sym_list_splat_argument] = STATE(116),
        [sym_dictionary_splat_argument] = STATE(117),
        [sym_list] = STATE(34),
        [sym_list_comprehension] = STATE(34),
        [aux_sym_call_repeat1] = STATE(118),
        [anon_sym_STAR] = ACTIONS(183),
        [anon_sym_LBRACK] = ACTIONS(111),
        [anon_sym_STAR_STAR] = ACTIONS(185),
        [sym_number] = ACTIONS(113),
        [sym_identifier] = ACTIONS(187),
        [sym_comment] = ACTIONS(69),
    },
    [30] = {
        [sym__expression] = STATE(113),
        [sym_binary_operator] = STATE(15),
        [sym_subscript] = STATE(15),
        [sym_call] = STATE(15),
        [sym_list] = STATE(15),
        [sym_list_comprehension] = STATE(15),
        [anon_sym_LBRACK] = ACTIONS(103),
        [sym_number] = ACTIONS(105),
        [sym_identifier] = ACTIONS(105),
        [sym_comment] = ACTIONS(69),
    },
    [31] = {
        [sym__expression] = STATE(35),
        [sym_binary_operator] = STATE(34),
        [sym_subscript] = STATE(34),
        [sym_call] = STATE(34),
        [sym_list] = STATE(34),
        [sym_list_comprehension] = STATE(34),
        [anon_sym_LBRACK] = ACTIONS(111),
        [anon_sym_DOT_DOT_DOT] = ACTIONS(189),
        [sym_number] = ACTIONS(113),
        [sym_identifier] = ACTIONS(113),
        [sym_comment] = ACTIONS(69),
    },
    [32] = {
        [sym__expression] = STATE(94),
        [sym_binary_operator] = STATE(34),
        [sym_subscript] = STATE(34),
        [sym_call] = STATE(34),
        [sym_list] = STATE(34),
        [sym_list_comprehension] = STATE(34),
        [anon_sym_LBRACK] = ACTIONS(111),
        [anon_sym_RBRACK] = ACTIONS(191),
        [sym_number] = ACTIONS(113),
        [sym_identifier] = ACTIONS(113),
        [sym_comment] = ACTIONS(69),
    },
    [33] = {
        [aux_sym_subscript_repeat1] = STATE(41),
        [anon_sym_COMMA] = ACTIONS(193),
        [anon_sym_RBRACK] = ACTIONS(195),
        [sym_comment] = ACTIONS(69),
    },
    [34] = {
        [anon_sym_COMMA] = ACTIONS(125),
        [anon_sym_COLON] = ACTIONS(125),
        [anon_sym_for] = ACTIONS(125),
        [anon_sym_in] = ACTIONS(125),
        [anon_sym_as] = ACTIONS(125),
        [anon_sym_LPAREN] = ACTIONS(125),
        [anon_sym_RPAREN] = ACTIONS(125),
        [anon_sym_PLUS] = ACTIONS(125),
        [anon_sym_LBRACK] = ACTIONS(125),
        [anon_sym_RBRACK] = ACTIONS(125),
        [sym_comment] = ACTIONS(69),
    },
    [35] = {
        [aux_sym_subscript_repeat1] = STATE(41),
        [anon_sym_COMMA] = ACTIONS(193),
        [anon_sym_LPAREN] = ACTIONS(197),
        [anon_sym_PLUS] = ACTIONS(199),
        [anon_sym_LBRACK] = ACTIONS(201),
        [anon_sym_RBRACK] = ACTIONS(195),
        [sym_comment] = ACTIONS(69),
    },
    [36] = {
        [sym__expression] = STATE(56),
        [sym_binary_operator] = STATE(34),
        [sym_subscript] = STATE(34),
        [sym_call] = STATE(34),
        [sym_list] = STATE(34),
        [sym_list_comprehension] = STATE(34),
        [anon_sym_LBRACK] = ACTIONS(111),
        [anon_sym_DOT_DOT_DOT] = ACTIONS(203),
        [anon_sym_RBRACK] = ACTIONS(205),
        [sym_number] = ACTIONS(113),
        [sym_identifier] = ACTIONS(113),
        [sym_comment] = ACTIONS(69),
    },
    [37] = {
        [sym__expression] = STATE(61),
        [sym_binary_operator] = STATE(34),
        [sym_subscript] = STATE(34),
        [sym_call] = STATE(34),
        [sym_keyword_argument] = STATE(62),
        [sym_list_splat_argument] = STATE(63),
        [sym_dictionary_splat_argument] = STATE(64),
        [sym_list] = STATE(34),
        [sym_list_comprehension] = STATE(34),
        [aux_sym_call_repeat1] = STATE(65),
        [anon_sym_STAR] = ACTIONS(183),
        [anon_sym_LBRACK] = ACTIONS(111),
        [anon_sym_STAR_STAR] = ACTIONS(185),
        [sym_number] = ACTIONS(113),
        [sym_identifier] = ACTIONS(187),
        [sym_comment] = ACTIONS(69),
    },
    [38] = {
        [sym__expression] = STATE(57),
        [sym_binary_operator] = STATE(34),
        [sym_subscript] = STATE(34),
        [sym_call] = STATE(34),
        [sym_list] = STATE(34),
        [sym_list_comprehension] = STATE(34),
        [anon_sym_LBRACK] = ACTIONS(111),
        [sym_number] = ACTIONS(113),
        [sym_identifier] = ACTIONS(113),
        [sym_comment] = ACTIONS(69),
    },
    [39] = {
        [sym__expression] = STATE(48),
        [sym_binary_operator] = STATE(34),
        [sym_subscript] = STATE(34),
        [sym_call] = STATE(34),
        [sym_list] = STATE(34),
        [sym_list_comprehension] = STATE(34),
        [anon_sym_LBRACK] = ACTIONS(111),
        [anon_sym_DOT_DOT_DOT] = ACTIONS(207),
        [sym_number] = ACTIONS(113),
        [sym_identifier] = ACTIONS(113),
        [sym_comment] = ACTIONS(69),
    },
    [40] = {
        [anon_sym_COMMA] = ACTIONS(209),
        [anon_sym_COLON] = ACTIONS(209),
        [anon_sym_for] = ACTIONS(209),
        [anon_sym_in] = ACTIONS(209),
        [anon_sym_as] = ACTIONS(209),
        [anon_sym_LPAREN] = ACTIONS(209),
        [anon_sym_RPAREN] = ACTIONS(209),
        [anon_sym_PLUS] = ACTIONS(209),
        [anon_sym_LBRACK] = ACTIONS(209),
        [anon_sym_RBRACK] = ACTIONS(209),
        [sym_comment] = ACTIONS(69),
        [sym__newline] = ACTIONS(209),
    },
    [41] = {
        [anon_sym_COMMA] = ACTIONS(211),
        [anon_sym_RBRACK] = ACTIONS(205),
        [sym_comment] = ACTIONS(69),
    },
    [42] = {
        [sym__expression] = STATE(46),
        [sym_binary_operator] = STATE(34),
        [sym_subscript] = STATE(34),
        [sym_call] = STATE(34),
        [sym_list] = STATE(34),
        [sym_list_comprehension] = STATE(34),
        [anon_sym_LBRACK] = ACTIONS(111),
        [anon_sym_DOT_DOT_DOT] = ACTIONS(213),
        [anon_sym_RBRACK] = ACTIONS(215),
        [sym_number] = ACTIONS(113),
        [sym_identifier] = ACTIONS(113),
        [sym_comment] = ACTIONS(69),
    },
    [43] = {
        [anon_sym_COMMA] = ACTIONS(217),
        [anon_sym_COLON] = ACTIONS(217),
        [anon_sym_for] = ACTIONS(217),
        [anon_sym_in] = ACTIONS(217),
        [anon_sym_as] = ACTIONS(217),
        [anon_sym_LPAREN] = ACTIONS(217),
        [anon_sym_RPAREN] = ACTIONS(217),
        [anon_sym_PLUS] = ACTIONS(217),
        [anon_sym_LBRACK] = ACTIONS(217),
        [anon_sym_RBRACK] = ACTIONS(217),
        [sym_comment] = ACTIONS(69),
        [sym__newline] = ACTIONS(217),
    },
    [44] = {
        [anon_sym_COMMA] = ACTIONS(219),
        [anon_sym_RBRACK] = ACTIONS(219),
        [sym_comment] = ACTIONS(69),
    },
    [45] = {
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
        [sym_comment] = ACTIONS(69),
        [sym__newline] = ACTIONS(221),
    },
    [46] = {
        [anon_sym_COMMA] = ACTIONS(219),
        [anon_sym_LPAREN] = ACTIONS(197),
        [anon_sym_PLUS] = ACTIONS(199),
        [anon_sym_LBRACK] = ACTIONS(201),
        [anon_sym_RBRACK] = ACTIONS(219),
        [sym_comment] = ACTIONS(69),
    },
    [47] = {
        [aux_sym_subscript_repeat1] = STATE(51),
        [anon_sym_COMMA] = ACTIONS(223),
        [anon_sym_RBRACK] = ACTIONS(225),
        [sym_comment] = ACTIONS(69),
    },
    [48] = {
        [aux_sym_subscript_repeat1] = STATE(51),
        [anon_sym_COMMA] = ACTIONS(223),
        [anon_sym_LPAREN] = ACTIONS(197),
        [anon_sym_PLUS] = ACTIONS(199),
        [anon_sym_LBRACK] = ACTIONS(201),
        [anon_sym_RBRACK] = ACTIONS(225),
        [sym_comment] = ACTIONS(69),
    },
    [49] = {
        [sym__expression] = STATE(56),
        [sym_binary_operator] = STATE(34),
        [sym_subscript] = STATE(34),
        [sym_call] = STATE(34),
        [sym_list] = STATE(34),
        [sym_list_comprehension] = STATE(34),
        [anon_sym_LBRACK] = ACTIONS(111),
        [anon_sym_DOT_DOT_DOT] = ACTIONS(203),
        [anon_sym_RBRACK] = ACTIONS(227),
        [sym_number] = ACTIONS(113),
        [sym_identifier] = ACTIONS(113),
        [sym_comment] = ACTIONS(69),
    },
    [50] = {
        [anon_sym_COMMA] = ACTIONS(209),
        [anon_sym_COLON] = ACTIONS(209),
        [anon_sym_for] = ACTIONS(209),
        [anon_sym_in] = ACTIONS(209),
        [anon_sym_as] = ACTIONS(209),
        [anon_sym_LPAREN] = ACTIONS(209),
        [anon_sym_RPAREN] = ACTIONS(209),
        [anon_sym_PLUS] = ACTIONS(209),
        [anon_sym_LBRACK] = ACTIONS(209),
        [anon_sym_RBRACK] = ACTIONS(209),
        [sym_comment] = ACTIONS(69),
    },
    [51] = {
        [anon_sym_COMMA] = ACTIONS(229),
        [anon_sym_RBRACK] = ACTIONS(227),
        [sym_comment] = ACTIONS(69),
    },
    [52] = {
        [sym__expression] = STATE(46),
        [sym_binary_operator] = STATE(34),
        [sym_subscript] = STATE(34),
        [sym_call] = STATE(34),
        [sym_list] = STATE(34),
        [sym_list_comprehension] = STATE(34),
        [anon_sym_LBRACK] = ACTIONS(111),
        [anon_sym_DOT_DOT_DOT] = ACTIONS(213),
        [anon_sym_RBRACK] = ACTIONS(231),
        [sym_number] = ACTIONS(113),
        [sym_identifier] = ACTIONS(113),
        [sym_comment] = ACTIONS(69),
    },
    [53] = {
        [anon_sym_COMMA] = ACTIONS(217),
        [anon_sym_COLON] = ACTIONS(217),
        [anon_sym_for] = ACTIONS(217),
        [anon_sym_in] = ACTIONS(217),
        [anon_sym_as] = ACTIONS(217),
        [anon_sym_LPAREN] = ACTIONS(217),
        [anon_sym_RPAREN] = ACTIONS(217),
        [anon_sym_PLUS] = ACTIONS(217),
        [anon_sym_LBRACK] = ACTIONS(217),
        [anon_sym_RBRACK] = ACTIONS(217),
        [sym_comment] = ACTIONS(69),
    },
    [54] = {
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
        [sym_comment] = ACTIONS(69),
    },
    [55] = {
        [anon_sym_COMMA] = ACTIONS(233),
        [anon_sym_RBRACK] = ACTIONS(233),
        [sym_comment] = ACTIONS(69),
    },
    [56] = {
        [anon_sym_COMMA] = ACTIONS(233),
        [anon_sym_LPAREN] = ACTIONS(197),
        [anon_sym_PLUS] = ACTIONS(199),
        [anon_sym_LBRACK] = ACTIONS(201),
        [anon_sym_RBRACK] = ACTIONS(233),
        [sym_comment] = ACTIONS(69),
    },
    [57] = {
        [anon_sym_COMMA] = ACTIONS(235),
        [anon_sym_COLON] = ACTIONS(235),
        [anon_sym_for] = ACTIONS(235),
        [anon_sym_in] = ACTIONS(235),
        [anon_sym_as] = ACTIONS(235),
        [anon_sym_LPAREN] = ACTIONS(235),
        [anon_sym_RPAREN] = ACTIONS(235),
        [anon_sym_PLUS] = ACTIONS(235),
        [anon_sym_LBRACK] = ACTIONS(235),
        [anon_sym_RBRACK] = ACTIONS(235),
        [sym_comment] = ACTIONS(69),
    },
    [58] = {
        [sym__expression] = STATE(112),
        [sym_binary_operator] = STATE(34),
        [sym_subscript] = STATE(34),
        [sym_call] = STATE(34),
        [sym_list] = STATE(34),
        [sym_list_comprehension] = STATE(34),
        [anon_sym_LBRACK] = ACTIONS(111),
        [sym_number] = ACTIONS(113),
        [sym_identifier] = ACTIONS(113),
        [sym_comment] = ACTIONS(69),
    },
    [59] = {
        [sym__expression] = STATE(92),
        [sym_binary_operator] = STATE(34),
        [sym_subscript] = STATE(34),
        [sym_call] = STATE(34),
        [sym_list] = STATE(34),
        [sym_list_comprehension] = STATE(34),
        [anon_sym_LBRACK] = ACTIONS(111),
        [sym_number] = ACTIONS(113),
        [sym_identifier] = ACTIONS(113),
        [sym_comment] = ACTIONS(69),
    },
    [60] = {
        [anon_sym_COMMA] = ACTIONS(125),
        [anon_sym_LPAREN] = ACTIONS(125),
        [anon_sym_RPAREN] = ACTIONS(125),
        [anon_sym_EQ] = ACTIONS(237),
        [anon_sym_PLUS] = ACTIONS(125),
        [anon_sym_LBRACK] = ACTIONS(125),
        [sym_comment] = ACTIONS(69),
    },
    [61] = {
        [anon_sym_COMMA] = ACTIONS(239),
        [anon_sym_LPAREN] = ACTIONS(197),
        [anon_sym_RPAREN] = ACTIONS(241),
        [anon_sym_PLUS] = ACTIONS(199),
        [anon_sym_LBRACK] = ACTIONS(201),
        [sym_comment] = ACTIONS(69),
    },
    [62] = {
        [anon_sym_COMMA] = ACTIONS(239),
        [anon_sym_RPAREN] = ACTIONS(241),
        [sym_comment] = ACTIONS(69),
    },
    [63] = {
        [aux_sym_call_repeat2] = STATE(86),
        [anon_sym_COMMA] = ACTIONS(243),
        [anon_sym_RPAREN] = ACTIONS(241),
        [sym_comment] = ACTIONS(69),
    },
    [64] = {
        [anon_sym_RPAREN] = ACTIONS(241),
        [sym_comment] = ACTIONS(69),
    },
    [65] = {
        [sym__expression] = STATE(66),
        [sym_binary_operator] = STATE(34),
        [sym_subscript] = STATE(34),
        [sym_call] = STATE(34),
        [sym_keyword_argument] = STATE(67),
        [sym_list_splat_argument] = STATE(68),
        [sym_dictionary_splat_argument] = STATE(69),
        [sym_list] = STATE(34),
        [sym_list_comprehension] = STATE(34),
        [anon_sym_STAR] = ACTIONS(183),
        [anon_sym_LBRACK] = ACTIONS(111),
        [anon_sym_STAR_STAR] = ACTIONS(185),
        [sym_number] = ACTIONS(113),
        [sym_identifier] = ACTIONS(187),
        [sym_comment] = ACTIONS(69),
    },
    [66] = {
        [anon_sym_COMMA] = ACTIONS(245),
        [anon_sym_LPAREN] = ACTIONS(197),
        [anon_sym_RPAREN] = ACTIONS(247),
        [anon_sym_PLUS] = ACTIONS(199),
        [anon_sym_LBRACK] = ACTIONS(201),
        [sym_comment] = ACTIONS(69),
    },
    [67] = {
        [anon_sym_COMMA] = ACTIONS(245),
        [anon_sym_RPAREN] = ACTIONS(247),
        [sym_comment] = ACTIONS(69),
    },
    [68] = {
        [aux_sym_call_repeat2] = STATE(72),
        [anon_sym_COMMA] = ACTIONS(249),
        [anon_sym_RPAREN] = ACTIONS(247),
        [sym_comment] = ACTIONS(69),
    },
    [69] = {
        [anon_sym_RPAREN] = ACTIONS(247),
        [sym_comment] = ACTIONS(69),
    },
    [70] = {
        [anon_sym_COMMA] = ACTIONS(251),
        [anon_sym_COLON] = ACTIONS(251),
        [anon_sym_for] = ACTIONS(251),
        [anon_sym_in] = ACTIONS(251),
        [anon_sym_as] = ACTIONS(251),
        [anon_sym_LPAREN] = ACTIONS(251),
        [anon_sym_RPAREN] = ACTIONS(251),
        [anon_sym_PLUS] = ACTIONS(251),
        [anon_sym_LBRACK] = ACTIONS(251),
        [anon_sym_RBRACK] = ACTIONS(251),
        [sym_comment] = ACTIONS(69),
    },
    [71] = {
        [sym__expression] = STATE(79),
        [sym_binary_operator] = STATE(34),
        [sym_subscript] = STATE(34),
        [sym_call] = STATE(34),
        [sym_keyword_argument] = STATE(80),
        [sym_dictionary_splat_argument] = STATE(81),
        [sym_list] = STATE(34),
        [sym_list_comprehension] = STATE(34),
        [anon_sym_LBRACK] = ACTIONS(111),
        [anon_sym_STAR_STAR] = ACTIONS(185),
        [sym_number] = ACTIONS(113),
        [sym_identifier] = ACTIONS(187),
        [sym_comment] = ACTIONS(69),
    },
    [72] = {
        [anon_sym_COMMA] = ACTIONS(253),
        [anon_sym_RPAREN] = ACTIONS(255),
        [sym_comment] = ACTIONS(69),
    },
    [73] = {
        [sym__expression] = STATE(75),
        [sym_binary_operator] = STATE(34),
        [sym_subscript] = STATE(34),
        [sym_call] = STATE(34),
        [sym_keyword_argument] = STATE(76),
        [sym_dictionary_splat_argument] = STATE(77),
        [sym_list] = STATE(34),
        [sym_list_comprehension] = STATE(34),
        [anon_sym_LBRACK] = ACTIONS(111),
        [anon_sym_STAR_STAR] = ACTIONS(185),
        [sym_number] = ACTIONS(113),
        [sym_identifier] = ACTIONS(187),
        [sym_comment] = ACTIONS(69),
    },
    [74] = {
        [anon_sym_COMMA] = ACTIONS(257),
        [anon_sym_COLON] = ACTIONS(257),
        [anon_sym_for] = ACTIONS(257),
        [anon_sym_in] = ACTIONS(257),
        [anon_sym_as] = ACTIONS(257),
        [anon_sym_LPAREN] = ACTIONS(257),
        [anon_sym_RPAREN] = ACTIONS(257),
        [anon_sym_PLUS] = ACTIONS(257),
        [anon_sym_LBRACK] = ACTIONS(257),
        [anon_sym_RBRACK] = ACTIONS(257),
        [sym_comment] = ACTIONS(69),
    },
    [75] = {
        [anon_sym_COMMA] = ACTIONS(259),
        [anon_sym_LPAREN] = ACTIONS(197),
        [anon_sym_RPAREN] = ACTIONS(259),
        [anon_sym_PLUS] = ACTIONS(199),
        [anon_sym_LBRACK] = ACTIONS(201),
        [sym_comment] = ACTIONS(69),
    },
    [76] = {
        [anon_sym_COMMA] = ACTIONS(259),
        [anon_sym_RPAREN] = ACTIONS(259),
        [sym_comment] = ACTIONS(69),
    },
    [77] = {
        [anon_sym_RPAREN] = ACTIONS(261),
        [sym_comment] = ACTIONS(69),
    },
    [78] = {
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
        [sym_comment] = ACTIONS(69),
    },
    [79] = {
        [anon_sym_COMMA] = ACTIONS(265),
        [anon_sym_LPAREN] = ACTIONS(197),
        [anon_sym_RPAREN] = ACTIONS(265),
        [anon_sym_PLUS] = ACTIONS(199),
        [anon_sym_LBRACK] = ACTIONS(201),
        [sym_comment] = ACTIONS(69),
    },
    [80] = {
        [anon_sym_COMMA] = ACTIONS(265),
        [anon_sym_RPAREN] = ACTIONS(265),
        [sym_comment] = ACTIONS(69),
    },
    [81] = {
        [anon_sym_RPAREN] = ACTIONS(267),
        [sym_comment] = ACTIONS(69),
    },
    [82] = {
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
        [sym_comment] = ACTIONS(69),
    },
    [83] = {
        [anon_sym_RPAREN] = ACTIONS(255),
        [anon_sym_STAR] = ACTIONS(271),
        [anon_sym_LBRACK] = ACTIONS(273),
        [anon_sym_STAR_STAR] = ACTIONS(273),
        [sym_number] = ACTIONS(271),
        [sym_identifier] = ACTIONS(271),
        [sym_comment] = ACTIONS(69),
    },
    [84] = {
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
        [sym_comment] = ACTIONS(69),
    },
    [85] = {
        [sym__expression] = STATE(79),
        [sym_binary_operator] = STATE(34),
        [sym_subscript] = STATE(34),
        [sym_call] = STATE(34),
        [sym_keyword_argument] = STATE(80),
        [sym_dictionary_splat_argument] = STATE(88),
        [sym_list] = STATE(34),
        [sym_list_comprehension] = STATE(34),
        [anon_sym_LBRACK] = ACTIONS(111),
        [anon_sym_STAR_STAR] = ACTIONS(185),
        [sym_number] = ACTIONS(113),
        [sym_identifier] = ACTIONS(187),
        [sym_comment] = ACTIONS(69),
    },
    [86] = {
        [anon_sym_COMMA] = ACTIONS(277),
        [anon_sym_RPAREN] = ACTIONS(247),
        [sym_comment] = ACTIONS(69),
    },
    [87] = {
        [sym__expression] = STATE(75),
        [sym_binary_operator] = STATE(34),
        [sym_subscript] = STATE(34),
        [sym_call] = STATE(34),
        [sym_keyword_argument] = STATE(76),
        [sym_dictionary_splat_argument] = STATE(81),
        [sym_list] = STATE(34),
        [sym_list_comprehension] = STATE(34),
        [anon_sym_LBRACK] = ACTIONS(111),
        [anon_sym_STAR_STAR] = ACTIONS(185),
        [sym_number] = ACTIONS(113),
        [sym_identifier] = ACTIONS(187),
        [sym_comment] = ACTIONS(69),
    },
    [88] = {
        [anon_sym_RPAREN] = ACTIONS(255),
        [sym_comment] = ACTIONS(69),
    },
    [89] = {
        [anon_sym_RPAREN] = ACTIONS(247),
        [anon_sym_STAR] = ACTIONS(279),
        [anon_sym_LBRACK] = ACTIONS(281),
        [anon_sym_STAR_STAR] = ACTIONS(281),
        [sym_number] = ACTIONS(279),
        [sym_identifier] = ACTIONS(279),
        [sym_comment] = ACTIONS(69),
    },
    [90] = {
        [sym__expression] = STATE(91),
        [sym_binary_operator] = STATE(34),
        [sym_subscript] = STATE(34),
        [sym_call] = STATE(34),
        [sym_list] = STATE(34),
        [sym_list_comprehension] = STATE(34),
        [anon_sym_LBRACK] = ACTIONS(111),
        [sym_number] = ACTIONS(113),
        [sym_identifier] = ACTIONS(113),
        [sym_comment] = ACTIONS(69),
    },
    [91] = {
        [anon_sym_COMMA] = ACTIONS(283),
        [anon_sym_LPAREN] = ACTIONS(197),
        [anon_sym_RPAREN] = ACTIONS(283),
        [anon_sym_PLUS] = ACTIONS(199),
        [anon_sym_LBRACK] = ACTIONS(201),
        [sym_comment] = ACTIONS(69),
    },
    [92] = {
        [anon_sym_LPAREN] = ACTIONS(197),
        [anon_sym_RPAREN] = ACTIONS(285),
        [anon_sym_PLUS] = ACTIONS(199),
        [anon_sym_LBRACK] = ACTIONS(201),
        [sym_comment] = ACTIONS(69),
    },
    [93] = {
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
        [sym_comment] = ACTIONS(69),
    },
    [94] = {
        [aux_sym_print_statement_repeat1] = STATE(98),
        [anon_sym_COMMA] = ACTIONS(289),
        [anon_sym_for] = ACTIONS(291),
        [anon_sym_LPAREN] = ACTIONS(197),
        [anon_sym_PLUS] = ACTIONS(199),
        [anon_sym_LBRACK] = ACTIONS(201),
        [anon_sym_RBRACK] = ACTIONS(293),
        [sym_comment] = ACTIONS(69),
    },
    [95] = {
        [sym__expression] = STATE(108),
        [sym_binary_operator] = STATE(34),
        [sym_subscript] = STATE(34),
        [sym_call] = STATE(34),
        [sym_list] = STATE(34),
        [sym_list_comprehension] = STATE(34),
        [anon_sym_LBRACK] = ACTIONS(111),
        [anon_sym_RBRACK] = ACTIONS(295),
        [sym_number] = ACTIONS(113),
        [sym_identifier] = ACTIONS(113),
        [sym_comment] = ACTIONS(69),
    },
    [96] = {
        [sym_expression_list] = STATE(103),
        [sym__expression] = STATE(104),
        [sym_binary_operator] = STATE(34),
        [sym_subscript] = STATE(34),
        [sym_call] = STATE(34),
        [sym_list] = STATE(34),
        [sym_list_comprehension] = STATE(34),
        [anon_sym_LBRACK] = ACTIONS(111),
        [sym_number] = ACTIONS(113),
        [sym_identifier] = ACTIONS(113),
        [sym_comment] = ACTIONS(69),
    },
    [97] = {
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
        [sym_comment] = ACTIONS(69),
    },
    [98] = {
        [anon_sym_COMMA] = ACTIONS(299),
        [anon_sym_RBRACK] = ACTIONS(295),
        [sym_comment] = ACTIONS(69),
    },
    [99] = {
        [sym__expression] = STATE(102),
        [sym_binary_operator] = STATE(34),
        [sym_subscript] = STATE(34),
        [sym_call] = STATE(34),
        [sym_list] = STATE(34),
        [sym_list_comprehension] = STATE(34),
        [anon_sym_LBRACK] = ACTIONS(111),
        [anon_sym_RBRACK] = ACTIONS(301),
        [sym_number] = ACTIONS(113),
        [sym_identifier] = ACTIONS(113),
        [sym_comment] = ACTIONS(69),
    },
    [100] = {
        [anon_sym_COMMA] = ACTIONS(303),
        [anon_sym_COLON] = ACTIONS(303),
        [anon_sym_for] = ACTIONS(303),
        [anon_sym_in] = ACTIONS(303),
        [anon_sym_as] = ACTIONS(303),
        [anon_sym_LPAREN] = ACTIONS(303),
        [anon_sym_RPAREN] = ACTIONS(303),
        [anon_sym_PLUS] = ACTIONS(303),
        [anon_sym_LBRACK] = ACTIONS(303),
        [anon_sym_RBRACK] = ACTIONS(303),
        [sym_comment] = ACTIONS(69),
    },
    [101] = {
        [anon_sym_COMMA] = ACTIONS(305),
        [anon_sym_COLON] = ACTIONS(305),
        [anon_sym_for] = ACTIONS(305),
        [anon_sym_in] = ACTIONS(305),
        [anon_sym_as] = ACTIONS(305),
        [anon_sym_LPAREN] = ACTIONS(305),
        [anon_sym_RPAREN] = ACTIONS(305),
        [anon_sym_PLUS] = ACTIONS(305),
        [anon_sym_LBRACK] = ACTIONS(305),
        [anon_sym_RBRACK] = ACTIONS(305),
        [sym_comment] = ACTIONS(69),
    },
    [102] = {
        [anon_sym_COMMA] = ACTIONS(307),
        [anon_sym_COLON] = ACTIONS(307),
        [anon_sym_in] = ACTIONS(307),
        [anon_sym_LPAREN] = ACTIONS(197),
        [anon_sym_RPAREN] = ACTIONS(307),
        [anon_sym_PLUS] = ACTIONS(199),
        [anon_sym_LBRACK] = ACTIONS(201),
        [anon_sym_RBRACK] = ACTIONS(307),
        [sym_comment] = ACTIONS(69),
    },
    [103] = {
        [anon_sym_in] = ACTIONS(309),
        [sym_comment] = ACTIONS(69),
    },
    [104] = {
        [aux_sym_print_statement_repeat1] = STATE(106),
        [anon_sym_COMMA] = ACTIONS(311),
        [anon_sym_COLON] = ACTIONS(313),
        [anon_sym_in] = ACTIONS(313),
        [anon_sym_LPAREN] = ACTIONS(197),
        [anon_sym_RPAREN] = ACTIONS(313),
        [anon_sym_PLUS] = ACTIONS(199),
        [anon_sym_LBRACK] = ACTIONS(201),
        [sym_comment] = ACTIONS(69),
    },
    [105] = {
        [sym__expression] = STATE(108),
        [sym_binary_operator] = STATE(34),
        [sym_subscript] = STATE(34),
        [sym_call] = STATE(34),
        [sym_list] = STATE(34),
        [sym_list_comprehension] = STATE(34),
        [anon_sym_LBRACK] = ACTIONS(111),
        [sym_number] = ACTIONS(113),
        [sym_identifier] = ACTIONS(113),
        [sym_comment] = ACTIONS(69),
    },
    [106] = {
        [anon_sym_COMMA] = ACTIONS(315),
        [anon_sym_COLON] = ACTIONS(317),
        [anon_sym_in] = ACTIONS(317),
        [anon_sym_RPAREN] = ACTIONS(317),
        [sym_comment] = ACTIONS(69),
    },
    [107] = {
        [sym__expression] = STATE(102),
        [sym_binary_operator] = STATE(34),
        [sym_subscript] = STATE(34),
        [sym_call] = STATE(34),
        [sym_list] = STATE(34),
        [sym_list_comprehension] = STATE(34),
        [anon_sym_LBRACK] = ACTIONS(111),
        [sym_number] = ACTIONS(113),
        [sym_identifier] = ACTIONS(113),
        [sym_comment] = ACTIONS(69),
    },
    [108] = {
        [anon_sym_COMMA] = ACTIONS(319),
        [anon_sym_COLON] = ACTIONS(319),
        [anon_sym_in] = ACTIONS(319),
        [anon_sym_LPAREN] = ACTIONS(197),
        [anon_sym_RPAREN] = ACTIONS(319),
        [anon_sym_PLUS] = ACTIONS(199),
        [anon_sym_LBRACK] = ACTIONS(201),
        [anon_sym_RBRACK] = ACTIONS(319),
        [sym_comment] = ACTIONS(69),
    },
    [109] = {
        [sym__expression] = STATE(110),
        [sym_binary_operator] = STATE(34),
        [sym_subscript] = STATE(34),
        [sym_call] = STATE(34),
        [sym_list] = STATE(34),
        [sym_list_comprehension] = STATE(34),
        [anon_sym_LBRACK] = ACTIONS(111),
        [sym_number] = ACTIONS(113),
        [sym_identifier] = ACTIONS(113),
        [sym_comment] = ACTIONS(69),
    },
    [110] = {
        [anon_sym_LPAREN] = ACTIONS(197),
        [anon_sym_PLUS] = ACTIONS(199),
        [anon_sym_LBRACK] = ACTIONS(201),
        [anon_sym_RBRACK] = ACTIONS(321),
        [sym_comment] = ACTIONS(69),
    },
    [111] = {
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
        [sym_comment] = ACTIONS(69),
    },
    [112] = {
        [anon_sym_COMMA] = ACTIONS(325),
        [anon_sym_LPAREN] = ACTIONS(197),
        [anon_sym_RPAREN] = ACTIONS(325),
        [anon_sym_PLUS] = ACTIONS(199),
        [anon_sym_LBRACK] = ACTIONS(201),
        [sym_comment] = ACTIONS(69),
    },
    [113] = {
        [anon_sym_COMMA] = ACTIONS(235),
        [anon_sym_LPAREN] = ACTIONS(235),
        [anon_sym_PLUS] = ACTIONS(235),
        [anon_sym_LBRACK] = ACTIONS(235),
        [sym_comment] = ACTIONS(69),
        [sym__newline] = ACTIONS(235),
    },
    [114] = {
        [anon_sym_COMMA] = ACTIONS(327),
        [anon_sym_LPAREN] = ACTIONS(197),
        [anon_sym_RPAREN] = ACTIONS(329),
        [anon_sym_PLUS] = ACTIONS(199),
        [anon_sym_LBRACK] = ACTIONS(201),
        [sym_comment] = ACTIONS(69),
    },
    [115] = {
        [anon_sym_COMMA] = ACTIONS(327),
        [anon_sym_RPAREN] = ACTIONS(329),
        [sym_comment] = ACTIONS(69),
    },
    [116] = {
        [aux_sym_call_repeat2] = STATE(135),
        [anon_sym_COMMA] = ACTIONS(331),
        [anon_sym_RPAREN] = ACTIONS(329),
        [sym_comment] = ACTIONS(69),
    },
    [117] = {
        [anon_sym_RPAREN] = ACTIONS(329),
        [sym_comment] = ACTIONS(69),
    },
    [118] = {
        [sym__expression] = STATE(119),
        [sym_binary_operator] = STATE(34),
        [sym_subscript] = STATE(34),
        [sym_call] = STATE(34),
        [sym_keyword_argument] = STATE(120),
        [sym_list_splat_argument] = STATE(121),
        [sym_dictionary_splat_argument] = STATE(122),
        [sym_list] = STATE(34),
        [sym_list_comprehension] = STATE(34),
        [anon_sym_STAR] = ACTIONS(183),
        [anon_sym_LBRACK] = ACTIONS(111),
        [anon_sym_STAR_STAR] = ACTIONS(185),
        [sym_number] = ACTIONS(113),
        [sym_identifier] = ACTIONS(187),
        [sym_comment] = ACTIONS(69),
    },
    [119] = {
        [anon_sym_COMMA] = ACTIONS(333),
        [anon_sym_LPAREN] = ACTIONS(197),
        [anon_sym_RPAREN] = ACTIONS(335),
        [anon_sym_PLUS] = ACTIONS(199),
        [anon_sym_LBRACK] = ACTIONS(201),
        [sym_comment] = ACTIONS(69),
    },
    [120] = {
        [anon_sym_COMMA] = ACTIONS(333),
        [anon_sym_RPAREN] = ACTIONS(335),
        [sym_comment] = ACTIONS(69),
    },
    [121] = {
        [aux_sym_call_repeat2] = STATE(125),
        [anon_sym_COMMA] = ACTIONS(337),
        [anon_sym_RPAREN] = ACTIONS(335),
        [sym_comment] = ACTIONS(69),
    },
    [122] = {
        [anon_sym_RPAREN] = ACTIONS(335),
        [sym_comment] = ACTIONS(69),
    },
    [123] = {
        [anon_sym_COMMA] = ACTIONS(251),
        [anon_sym_COLON] = ACTIONS(251),
        [anon_sym_for] = ACTIONS(251),
        [anon_sym_in] = ACTIONS(251),
        [anon_sym_as] = ACTIONS(251),
        [anon_sym_LPAREN] = ACTIONS(251),
        [anon_sym_RPAREN] = ACTIONS(251),
        [anon_sym_PLUS] = ACTIONS(251),
        [anon_sym_LBRACK] = ACTIONS(251),
        [anon_sym_RBRACK] = ACTIONS(251),
        [sym_comment] = ACTIONS(69),
        [sym__newline] = ACTIONS(251),
    },
    [124] = {
        [sym__expression] = STATE(79),
        [sym_binary_operator] = STATE(34),
        [sym_subscript] = STATE(34),
        [sym_call] = STATE(34),
        [sym_keyword_argument] = STATE(80),
        [sym_dictionary_splat_argument] = STATE(130),
        [sym_list] = STATE(34),
        [sym_list_comprehension] = STATE(34),
        [anon_sym_LBRACK] = ACTIONS(111),
        [anon_sym_STAR_STAR] = ACTIONS(185),
        [sym_number] = ACTIONS(113),
        [sym_identifier] = ACTIONS(187),
        [sym_comment] = ACTIONS(69),
    },
    [125] = {
        [anon_sym_COMMA] = ACTIONS(339),
        [anon_sym_RPAREN] = ACTIONS(341),
        [sym_comment] = ACTIONS(69),
    },
    [126] = {
        [sym__expression] = STATE(75),
        [sym_binary_operator] = STATE(34),
        [sym_subscript] = STATE(34),
        [sym_call] = STATE(34),
        [sym_keyword_argument] = STATE(76),
        [sym_dictionary_splat_argument] = STATE(128),
        [sym_list] = STATE(34),
        [sym_list_comprehension] = STATE(34),
        [anon_sym_LBRACK] = ACTIONS(111),
        [anon_sym_STAR_STAR] = ACTIONS(185),
        [sym_number] = ACTIONS(113),
        [sym_identifier] = ACTIONS(187),
        [sym_comment] = ACTIONS(69),
    },
    [127] = {
        [anon_sym_COMMA] = ACTIONS(257),
        [anon_sym_COLON] = ACTIONS(257),
        [anon_sym_for] = ACTIONS(257),
        [anon_sym_in] = ACTIONS(257),
        [anon_sym_as] = ACTIONS(257),
        [anon_sym_LPAREN] = ACTIONS(257),
        [anon_sym_RPAREN] = ACTIONS(257),
        [anon_sym_PLUS] = ACTIONS(257),
        [anon_sym_LBRACK] = ACTIONS(257),
        [anon_sym_RBRACK] = ACTIONS(257),
        [sym_comment] = ACTIONS(69),
        [sym__newline] = ACTIONS(257),
    },
    [128] = {
        [anon_sym_RPAREN] = ACTIONS(343),
        [sym_comment] = ACTIONS(69),
    },
    [129] = {
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
        [sym_comment] = ACTIONS(69),
        [sym__newline] = ACTIONS(263),
    },
    [130] = {
        [anon_sym_RPAREN] = ACTIONS(345),
        [sym_comment] = ACTIONS(69),
    },
    [131] = {
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
        [sym_comment] = ACTIONS(69),
        [sym__newline] = ACTIONS(269),
    },
    [132] = {
        [anon_sym_RPAREN] = ACTIONS(341),
        [anon_sym_STAR] = ACTIONS(271),
        [anon_sym_LBRACK] = ACTIONS(273),
        [anon_sym_STAR_STAR] = ACTIONS(273),
        [sym_number] = ACTIONS(271),
        [sym_identifier] = ACTIONS(271),
        [sym_comment] = ACTIONS(69),
    },
    [133] = {
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
        [sym_comment] = ACTIONS(69),
        [sym__newline] = ACTIONS(275),
    },
    [134] = {
        [sym__expression] = STATE(79),
        [sym_binary_operator] = STATE(34),
        [sym_subscript] = STATE(34),
        [sym_call] = STATE(34),
        [sym_keyword_argument] = STATE(80),
        [sym_dictionary_splat_argument] = STATE(137),
        [sym_list] = STATE(34),
        [sym_list_comprehension] = STATE(34),
        [anon_sym_LBRACK] = ACTIONS(111),
        [anon_sym_STAR_STAR] = ACTIONS(185),
        [sym_number] = ACTIONS(113),
        [sym_identifier] = ACTIONS(187),
        [sym_comment] = ACTIONS(69),
    },
    [135] = {
        [anon_sym_COMMA] = ACTIONS(347),
        [anon_sym_RPAREN] = ACTIONS(335),
        [sym_comment] = ACTIONS(69),
    },
    [136] = {
        [sym__expression] = STATE(75),
        [sym_binary_operator] = STATE(34),
        [sym_subscript] = STATE(34),
        [sym_call] = STATE(34),
        [sym_keyword_argument] = STATE(76),
        [sym_dictionary_splat_argument] = STATE(130),
        [sym_list] = STATE(34),
        [sym_list_comprehension] = STATE(34),
        [anon_sym_LBRACK] = ACTIONS(111),
        [anon_sym_STAR_STAR] = ACTIONS(185),
        [sym_number] = ACTIONS(113),
        [sym_identifier] = ACTIONS(187),
        [sym_comment] = ACTIONS(69),
    },
    [137] = {
        [anon_sym_RPAREN] = ACTIONS(341),
        [sym_comment] = ACTIONS(69),
    },
    [138] = {
        [anon_sym_RPAREN] = ACTIONS(335),
        [anon_sym_STAR] = ACTIONS(279),
        [anon_sym_LBRACK] = ACTIONS(281),
        [anon_sym_STAR_STAR] = ACTIONS(281),
        [sym_number] = ACTIONS(279),
        [sym_identifier] = ACTIONS(279),
        [sym_comment] = ACTIONS(69),
    },
    [139] = {
        [ts_builtin_sym_end] = ACTIONS(349),
        [anon_sym_SEMI] = ACTIONS(349),
        [anon_sym_print] = ACTIONS(351),
        [anon_sym_return] = ACTIONS(351),
        [anon_sym_del] = ACTIONS(351),
        [sym_pass_statement] = ACTIONS(351),
        [sym_break_statement] = ACTIONS(351),
        [sym_continue_statement] = ACTIONS(351),
        [anon_sym_if] = ACTIONS(351),
        [anon_sym_for] = ACTIONS(351),
        [anon_sym_while] = ACTIONS(351),
        [anon_sym_try] = ACTIONS(351),
        [anon_sym_with] = ACTIONS(351),
        [anon_sym_def] = ACTIONS(351),
        [anon_sym_class] = ACTIONS(351),
        [anon_sym_AT] = ACTIONS(349),
        [anon_sym_LBRACK] = ACTIONS(349),
        [sym_number] = ACTIONS(351),
        [sym_identifier] = ACTIONS(353),
        [sym_comment] = ACTIONS(69),
        [sym__newline] = ACTIONS(349),
    },
    [140] = {
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
        [sym_comment] = ACTIONS(69),
        [sym__newline] = ACTIONS(287),
    },
    [141] = {
        [aux_sym_print_statement_repeat1] = STATE(145),
        [anon_sym_COMMA] = ACTIONS(355),
        [anon_sym_for] = ACTIONS(357),
        [anon_sym_LPAREN] = ACTIONS(197),
        [anon_sym_PLUS] = ACTIONS(199),
        [anon_sym_LBRACK] = ACTIONS(201),
        [anon_sym_RBRACK] = ACTIONS(359),
        [sym_comment] = ACTIONS(69),
    },
    [142] = {
        [sym__expression] = STATE(108),
        [sym_binary_operator] = STATE(34),
        [sym_subscript] = STATE(34),
        [sym_call] = STATE(34),
        [sym_list] = STATE(34),
        [sym_list_comprehension] = STATE(34),
        [anon_sym_LBRACK] = ACTIONS(111),
        [anon_sym_RBRACK] = ACTIONS(361),
        [sym_number] = ACTIONS(113),
        [sym_identifier] = ACTIONS(113),
        [sym_comment] = ACTIONS(69),
    },
    [143] = {
        [sym_expression_list] = STATE(149),
        [sym__expression] = STATE(104),
        [sym_binary_operator] = STATE(34),
        [sym_subscript] = STATE(34),
        [sym_call] = STATE(34),
        [sym_list] = STATE(34),
        [sym_list_comprehension] = STATE(34),
        [anon_sym_LBRACK] = ACTIONS(111),
        [sym_number] = ACTIONS(113),
        [sym_identifier] = ACTIONS(113),
        [sym_comment] = ACTIONS(69),
    },
    [144] = {
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
        [sym_comment] = ACTIONS(69),
        [sym__newline] = ACTIONS(297),
    },
    [145] = {
        [anon_sym_COMMA] = ACTIONS(363),
        [anon_sym_RBRACK] = ACTIONS(361),
        [sym_comment] = ACTIONS(69),
    },
    [146] = {
        [sym__expression] = STATE(102),
        [sym_binary_operator] = STATE(34),
        [sym_subscript] = STATE(34),
        [sym_call] = STATE(34),
        [sym_list] = STATE(34),
        [sym_list_comprehension] = STATE(34),
        [anon_sym_LBRACK] = ACTIONS(111),
        [anon_sym_RBRACK] = ACTIONS(365),
        [sym_number] = ACTIONS(113),
        [sym_identifier] = ACTIONS(113),
        [sym_comment] = ACTIONS(69),
    },
    [147] = {
        [anon_sym_COMMA] = ACTIONS(303),
        [anon_sym_COLON] = ACTIONS(303),
        [anon_sym_for] = ACTIONS(303),
        [anon_sym_in] = ACTIONS(303),
        [anon_sym_as] = ACTIONS(303),
        [anon_sym_LPAREN] = ACTIONS(303),
        [anon_sym_RPAREN] = ACTIONS(303),
        [anon_sym_PLUS] = ACTIONS(303),
        [anon_sym_LBRACK] = ACTIONS(303),
        [anon_sym_RBRACK] = ACTIONS(303),
        [sym_comment] = ACTIONS(69),
        [sym__newline] = ACTIONS(303),
    },
    [148] = {
        [anon_sym_COMMA] = ACTIONS(305),
        [anon_sym_COLON] = ACTIONS(305),
        [anon_sym_for] = ACTIONS(305),
        [anon_sym_in] = ACTIONS(305),
        [anon_sym_as] = ACTIONS(305),
        [anon_sym_LPAREN] = ACTIONS(305),
        [anon_sym_RPAREN] = ACTIONS(305),
        [anon_sym_PLUS] = ACTIONS(305),
        [anon_sym_LBRACK] = ACTIONS(305),
        [anon_sym_RBRACK] = ACTIONS(305),
        [sym_comment] = ACTIONS(69),
        [sym__newline] = ACTIONS(305),
    },
    [149] = {
        [anon_sym_in] = ACTIONS(367),
        [sym_comment] = ACTIONS(69),
    },
    [150] = {
        [sym__expression] = STATE(151),
        [sym_binary_operator] = STATE(34),
        [sym_subscript] = STATE(34),
        [sym_call] = STATE(34),
        [sym_list] = STATE(34),
        [sym_list_comprehension] = STATE(34),
        [anon_sym_LBRACK] = ACTIONS(111),
        [sym_number] = ACTIONS(113),
        [sym_identifier] = ACTIONS(113),
        [sym_comment] = ACTIONS(69),
    },
    [151] = {
        [anon_sym_LPAREN] = ACTIONS(197),
        [anon_sym_PLUS] = ACTIONS(199),
        [anon_sym_LBRACK] = ACTIONS(201),
        [anon_sym_RBRACK] = ACTIONS(369),
        [sym_comment] = ACTIONS(69),
    },
    [152] = {
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
        [sym_comment] = ACTIONS(69),
        [sym__newline] = ACTIONS(323),
    },
    [153] = {
        [aux_sym_dotted_name_repeat1] = STATE(164),
        [anon_sym_LPAREN] = ACTIONS(371),
        [anon_sym_DOT] = ACTIONS(373),
        [sym_comment] = ACTIONS(69),
        [sym__newline] = ACTIONS(371),
    },
    [154] = {
        [sym_arguments] = STATE(157),
        [anon_sym_LPAREN] = ACTIONS(375),
        [sym_comment] = ACTIONS(69),
        [sym__newline] = ACTIONS(377),
    },
    [155] = {
        [sym__expression] = STATE(159),
        [sym_binary_operator] = STATE(34),
        [sym_subscript] = STATE(34),
        [sym_call] = STATE(34),
        [sym_list] = STATE(34),
        [sym_list_comprehension] = STATE(34),
        [anon_sym_LBRACK] = ACTIONS(111),
        [sym_number] = ACTIONS(113),
        [sym_identifier] = ACTIONS(113),
        [sym_comment] = ACTIONS(69),
    },
    [156] = {
        [anon_sym_def] = ACTIONS(379),
        [anon_sym_class] = ACTIONS(379),
        [anon_sym_AT] = ACTIONS(379),
        [sym_comment] = ACTIONS(69),
    },
    [157] = {
        [sym_comment] = ACTIONS(69),
        [sym__newline] = ACTIONS(381),
    },
    [158] = {
        [anon_sym_def] = ACTIONS(383),
        [anon_sym_class] = ACTIONS(383),
        [anon_sym_AT] = ACTIONS(383),
        [sym_comment] = ACTIONS(69),
    },
    [159] = {
        [aux_sym_print_statement_repeat1] = STATE(161),
        [anon_sym_COMMA] = ACTIONS(311),
        [anon_sym_LPAREN] = ACTIONS(197),
        [anon_sym_RPAREN] = ACTIONS(385),
        [anon_sym_PLUS] = ACTIONS(199),
        [anon_sym_LBRACK] = ACTIONS(201),
        [sym_comment] = ACTIONS(69),
    },
    [160] = {
        [sym_comment] = ACTIONS(69),
        [sym__newline] = ACTIONS(387),
    },
    [161] = {
        [anon_sym_COMMA] = ACTIONS(315),
        [anon_sym_RPAREN] = ACTIONS(389),
        [sym_comment] = ACTIONS(69),
    },
    [162] = {
        [sym_comment] = ACTIONS(69),
        [sym__newline] = ACTIONS(391),
    },
    [163] = {
        [sym_identifier] = ACTIONS(393),
        [sym_comment] = ACTIONS(69),
    },
    [164] = {
        [anon_sym_LPAREN] = ACTIONS(395),
        [anon_sym_DOT] = ACTIONS(397),
        [sym_comment] = ACTIONS(69),
        [sym__newline] = ACTIONS(395),
    },
    [165] = {
        [sym_identifier] = ACTIONS(399),
        [sym_comment] = ACTIONS(69),
    },
    [166] = {
        [anon_sym_LPAREN] = ACTIONS(401),
        [anon_sym_DOT] = ACTIONS(401),
        [sym_comment] = ACTIONS(69),
        [sym__newline] = ACTIONS(401),
    },
    [167] = {
        [anon_sym_LPAREN] = ACTIONS(403),
        [anon_sym_DOT] = ACTIONS(403),
        [sym_comment] = ACTIONS(69),
        [sym__newline] = ACTIONS(403),
    },
    [168] = {
        [anon_sym_COLON] = ACTIONS(405),
        [anon_sym_LPAREN] = ACTIONS(407),
        [sym_comment] = ACTIONS(69),
    },
    [169] = {
        [sym__simple_statement] = STATE(175),
        [sym_print_statement] = STATE(5),
        [sym_expression_statement] = STATE(5),
        [sym_return_statement] = STATE(5),
        [sym_delete_statement] = STATE(5),
        [sym__suite] = STATE(303),
        [sym__expression] = STATE(22),
        [sym_binary_operator] = STATE(15),
        [sym_subscript] = STATE(15),
        [sym_call] = STATE(15),
        [sym_list] = STATE(15),
        [sym_list_comprehension] = STATE(15),
        [anon_sym_print] = ACTIONS(79),
        [anon_sym_return] = ACTIONS(81),
        [anon_sym_del] = ACTIONS(83),
        [sym_pass_statement] = ACTIONS(85),
        [sym_break_statement] = ACTIONS(85),
        [sym_continue_statement] = ACTIONS(85),
        [anon_sym_LBRACK] = ACTIONS(103),
        [sym_number] = ACTIONS(105),
        [sym_identifier] = ACTIONS(107),
        [sym_comment] = ACTIONS(69),
        [sym__indent] = ACTIONS(409),
    },
    [170] = {
        [sym_expression_list] = STATE(171),
        [sym__expression] = STATE(104),
        [sym_binary_operator] = STATE(34),
        [sym_subscript] = STATE(34),
        [sym_call] = STATE(34),
        [sym_list] = STATE(34),
        [sym_list_comprehension] = STATE(34),
        [anon_sym_LBRACK] = ACTIONS(111),
        [sym_number] = ACTIONS(113),
        [sym_identifier] = ACTIONS(113),
        [sym_comment] = ACTIONS(69),
    },
    [171] = {
        [anon_sym_RPAREN] = ACTIONS(411),
        [sym_comment] = ACTIONS(69),
    },
    [172] = {
        [anon_sym_COLON] = ACTIONS(413),
        [sym_comment] = ACTIONS(69),
    },
    [173] = {
        [sym__simple_statement] = STATE(175),
        [sym_print_statement] = STATE(5),
        [sym_expression_statement] = STATE(5),
        [sym_return_statement] = STATE(5),
        [sym_delete_statement] = STATE(5),
        [sym__suite] = STATE(176),
        [sym__expression] = STATE(22),
        [sym_binary_operator] = STATE(15),
        [sym_subscript] = STATE(15),
        [sym_call] = STATE(15),
        [sym_list] = STATE(15),
        [sym_list_comprehension] = STATE(15),
        [anon_sym_print] = ACTIONS(79),
        [anon_sym_return] = ACTIONS(81),
        [anon_sym_del] = ACTIONS(83),
        [sym_pass_statement] = ACTIONS(85),
        [sym_break_statement] = ACTIONS(85),
        [sym_continue_statement] = ACTIONS(85),
        [anon_sym_LBRACK] = ACTIONS(103),
        [sym_number] = ACTIONS(105),
        [sym_identifier] = ACTIONS(107),
        [sym_comment] = ACTIONS(69),
        [sym__indent] = ACTIONS(409),
    },
    [174] = {
        [sym__statement] = STATE(185),
        [sym__simple_statement] = STATE(186),
        [sym_print_statement] = STATE(5),
        [sym_expression_statement] = STATE(5),
        [sym_return_statement] = STATE(5),
        [sym_delete_statement] = STATE(5),
        [sym__compound_statement] = STATE(187),
        [sym_if_statement] = STATE(188),
        [sym_for_statement] = STATE(188),
        [sym_while_statement] = STATE(188),
        [sym_try_statement] = STATE(188),
        [sym_with_statement] = STATE(188),
        [sym_function_definition] = STATE(188),
        [sym_class_definition] = STATE(188),
        [sym_decorated_definition] = STATE(188),
        [sym_decorator] = STATE(21),
        [sym__expression] = STATE(22),
        [sym_binary_operator] = STATE(15),
        [sym_subscript] = STATE(15),
        [sym_call] = STATE(15),
        [sym_list] = STATE(15),
        [sym_list_comprehension] = STATE(15),
        [aux_sym_module_repeat1] = STATE(189),
        [aux_sym_decorated_definition_repeat1] = STATE(190),
        [anon_sym_print] = ACTIONS(79),
        [anon_sym_return] = ACTIONS(81),
        [anon_sym_del] = ACTIONS(83),
        [sym_pass_statement] = ACTIONS(85),
        [sym_break_statement] = ACTIONS(85),
        [sym_continue_statement] = ACTIONS(85),
        [anon_sym_if] = ACTIONS(415),
        [anon_sym_for] = ACTIONS(417),
        [anon_sym_while] = ACTIONS(419),
        [anon_sym_try] = ACTIONS(421),
        [anon_sym_with] = ACTIONS(423),
        [anon_sym_def] = ACTIONS(425),
        [anon_sym_class] = ACTIONS(427),
        [anon_sym_AT] = ACTIONS(101),
        [anon_sym_LBRACK] = ACTIONS(103),
        [sym_number] = ACTIONS(105),
        [sym_identifier] = ACTIONS(107),
        [sym_comment] = ACTIONS(69),
        [sym__dedent] = ACTIONS(429),
    },
    [175] = {
        [sym_comment] = ACTIONS(69),
        [sym__newline] = ACTIONS(429),
    },
    [176] = {
        [ts_builtin_sym_end] = ACTIONS(431),
        [anon_sym_SEMI] = ACTIONS(431),
        [anon_sym_print] = ACTIONS(433),
        [anon_sym_return] = ACTIONS(433),
        [anon_sym_del] = ACTIONS(433),
        [sym_pass_statement] = ACTIONS(433),
        [sym_break_statement] = ACTIONS(433),
        [sym_continue_statement] = ACTIONS(433),
        [anon_sym_if] = ACTIONS(433),
        [anon_sym_for] = ACTIONS(433),
        [anon_sym_while] = ACTIONS(433),
        [anon_sym_try] = ACTIONS(433),
        [anon_sym_with] = ACTIONS(433),
        [anon_sym_def] = ACTIONS(433),
        [anon_sym_class] = ACTIONS(433),
        [anon_sym_AT] = ACTIONS(431),
        [anon_sym_LBRACK] = ACTIONS(431),
        [sym_number] = ACTIONS(433),
        [sym_identifier] = ACTIONS(435),
        [sym_comment] = ACTIONS(69),
        [sym__newline] = ACTIONS(431),
    },
    [177] = {
        [ts_builtin_sym_end] = ACTIONS(437),
        [anon_sym_SEMI] = ACTIONS(437),
        [anon_sym_print] = ACTIONS(439),
        [anon_sym_return] = ACTIONS(439),
        [anon_sym_del] = ACTIONS(439),
        [sym_pass_statement] = ACTIONS(439),
        [sym_break_statement] = ACTIONS(439),
        [sym_continue_statement] = ACTIONS(439),
        [anon_sym_if] = ACTIONS(439),
        [anon_sym_elif] = ACTIONS(439),
        [anon_sym_else] = ACTIONS(439),
        [anon_sym_for] = ACTIONS(439),
        [anon_sym_while] = ACTIONS(439),
        [anon_sym_try] = ACTIONS(439),
        [anon_sym_except] = ACTIONS(439),
        [anon_sym_finally] = ACTIONS(439),
        [anon_sym_with] = ACTIONS(439),
        [anon_sym_def] = ACTIONS(439),
        [anon_sym_class] = ACTIONS(439),
        [anon_sym_AT] = ACTIONS(437),
        [anon_sym_LBRACK] = ACTIONS(437),
        [sym_number] = ACTIONS(439),
        [sym_identifier] = ACTIONS(441),
        [sym_comment] = ACTIONS(69),
        [sym__newline] = ACTIONS(437),
    },
    [178] = {
        [sym__expression] = STATE(291),
        [sym_binary_operator] = STATE(34),
        [sym_subscript] = STATE(34),
        [sym_call] = STATE(34),
        [sym_list] = STATE(34),
        [sym_list_comprehension] = STATE(34),
        [anon_sym_LBRACK] = ACTIONS(111),
        [sym_number] = ACTIONS(113),
        [sym_identifier] = ACTIONS(113),
        [sym_comment] = ACTIONS(69),
    },
    [179] = {
        [sym_expression_list] = STATE(285),
        [sym__expression] = STATE(104),
        [sym_binary_operator] = STATE(34),
        [sym_subscript] = STATE(34),
        [sym_call] = STATE(34),
        [sym_list] = STATE(34),
        [sym_list_comprehension] = STATE(34),
        [anon_sym_LBRACK] = ACTIONS(111),
        [sym_number] = ACTIONS(113),
        [sym_identifier] = ACTIONS(113),
        [sym_comment] = ACTIONS(69),
    },
    [180] = {
        [sym__expression] = STATE(281),
        [sym_binary_operator] = STATE(34),
        [sym_subscript] = STATE(34),
        [sym_call] = STATE(34),
        [sym_list] = STATE(34),
        [sym_list_comprehension] = STATE(34),
        [anon_sym_LBRACK] = ACTIONS(111),
        [sym_number] = ACTIONS(113),
        [sym_identifier] = ACTIONS(113),
        [sym_comment] = ACTIONS(69),
    },
    [181] = {
        [anon_sym_COLON] = ACTIONS(443),
        [sym_comment] = ACTIONS(69),
    },
    [182] = {
        [sym_with_item] = STATE(240),
        [sym__expression] = STATE(241),
        [sym_binary_operator] = STATE(34),
        [sym_subscript] = STATE(34),
        [sym_call] = STATE(34),
        [sym_list] = STATE(34),
        [sym_list_comprehension] = STATE(34),
        [anon_sym_LBRACK] = ACTIONS(111),
        [sym_number] = ACTIONS(113),
        [sym_identifier] = ACTIONS(113),
        [sym_comment] = ACTIONS(69),
    },
    [183] = {
        [sym_identifier] = ACTIONS(445),
        [sym_comment] = ACTIONS(69),
    },
    [184] = {
        [sym_identifier] = ACTIONS(447),
        [sym_comment] = ACTIONS(69),
    },
    [185] = {
        [anon_sym_print] = ACTIONS(131),
        [anon_sym_return] = ACTIONS(131),
        [anon_sym_del] = ACTIONS(131),
        [sym_pass_statement] = ACTIONS(131),
        [sym_break_statement] = ACTIONS(131),
        [sym_continue_statement] = ACTIONS(131),
        [anon_sym_if] = ACTIONS(131),
        [anon_sym_for] = ACTIONS(131),
        [anon_sym_while] = ACTIONS(131),
        [anon_sym_try] = ACTIONS(131),
        [anon_sym_with] = ACTIONS(131),
        [anon_sym_def] = ACTIONS(131),
        [anon_sym_class] = ACTIONS(131),
        [anon_sym_AT] = ACTIONS(129),
        [anon_sym_LBRACK] = ACTIONS(129),
        [sym_number] = ACTIONS(131),
        [sym_identifier] = ACTIONS(133),
        [sym_comment] = ACTIONS(69),
        [sym__dedent] = ACTIONS(129),
    },
    [186] = {
        [sym_comment] = ACTIONS(69),
        [sym__newline] = ACTIONS(449),
    },
    [187] = {
        [anon_sym_print] = ACTIONS(139),
        [anon_sym_return] = ACTIONS(139),
        [anon_sym_del] = ACTIONS(139),
        [sym_pass_statement] = ACTIONS(139),
        [sym_break_statement] = ACTIONS(139),
        [sym_continue_statement] = ACTIONS(139),
        [anon_sym_if] = ACTIONS(139),
        [anon_sym_for] = ACTIONS(139),
        [anon_sym_while] = ACTIONS(139),
        [anon_sym_try] = ACTIONS(139),
        [anon_sym_with] = ACTIONS(139),
        [anon_sym_def] = ACTIONS(139),
        [anon_sym_class] = ACTIONS(139),
        [anon_sym_AT] = ACTIONS(137),
        [anon_sym_LBRACK] = ACTIONS(137),
        [sym_number] = ACTIONS(139),
        [sym_identifier] = ACTIONS(141),
        [sym_comment] = ACTIONS(69),
        [sym__dedent] = ACTIONS(137),
    },
    [188] = {
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
        [sym_number] = ACTIONS(145),
        [sym_identifier] = ACTIONS(147),
        [sym_comment] = ACTIONS(69),
        [sym__dedent] = ACTIONS(143),
    },
    [189] = {
        [sym__statement] = STATE(193),
        [sym__simple_statement] = STATE(186),
        [sym_print_statement] = STATE(5),
        [sym_expression_statement] = STATE(5),
        [sym_return_statement] = STATE(5),
        [sym_delete_statement] = STATE(5),
        [sym__compound_statement] = STATE(187),
        [sym_if_statement] = STATE(188),
        [sym_for_statement] = STATE(188),
        [sym_while_statement] = STATE(188),
        [sym_try_statement] = STATE(188),
        [sym_with_statement] = STATE(188),
        [sym_function_definition] = STATE(188),
        [sym_class_definition] = STATE(188),
        [sym_decorated_definition] = STATE(188),
        [sym_decorator] = STATE(21),
        [sym__expression] = STATE(22),
        [sym_binary_operator] = STATE(15),
        [sym_subscript] = STATE(15),
        [sym_call] = STATE(15),
        [sym_list] = STATE(15),
        [sym_list_comprehension] = STATE(15),
        [aux_sym_decorated_definition_repeat1] = STATE(190),
        [anon_sym_print] = ACTIONS(79),
        [anon_sym_return] = ACTIONS(81),
        [anon_sym_del] = ACTIONS(83),
        [sym_pass_statement] = ACTIONS(85),
        [sym_break_statement] = ACTIONS(85),
        [sym_continue_statement] = ACTIONS(85),
        [anon_sym_if] = ACTIONS(415),
        [anon_sym_for] = ACTIONS(417),
        [anon_sym_while] = ACTIONS(419),
        [anon_sym_try] = ACTIONS(421),
        [anon_sym_with] = ACTIONS(423),
        [anon_sym_def] = ACTIONS(425),
        [anon_sym_class] = ACTIONS(427),
        [anon_sym_AT] = ACTIONS(101),
        [anon_sym_LBRACK] = ACTIONS(103),
        [sym_number] = ACTIONS(105),
        [sym_identifier] = ACTIONS(107),
        [sym_comment] = ACTIONS(69),
        [sym__dedent] = ACTIONS(451),
    },
    [190] = {
        [sym_function_definition] = STATE(191),
        [sym_class_definition] = STATE(191),
        [sym_decorator] = STATE(26),
        [anon_sym_def] = ACTIONS(453),
        [anon_sym_class] = ACTIONS(455),
        [anon_sym_AT] = ACTIONS(101),
        [sym_comment] = ACTIONS(69),
    },
    [191] = {
        [anon_sym_print] = ACTIONS(169),
        [anon_sym_return] = ACTIONS(169),
        [anon_sym_del] = ACTIONS(169),
        [sym_pass_statement] = ACTIONS(169),
        [sym_break_statement] = ACTIONS(169),
        [sym_continue_statement] = ACTIONS(169),
        [anon_sym_if] = ACTIONS(169),
        [anon_sym_for] = ACTIONS(169),
        [anon_sym_while] = ACTIONS(169),
        [anon_sym_try] = ACTIONS(169),
        [anon_sym_with] = ACTIONS(169),
        [anon_sym_def] = ACTIONS(169),
        [anon_sym_class] = ACTIONS(169),
        [anon_sym_AT] = ACTIONS(167),
        [anon_sym_LBRACK] = ACTIONS(167),
        [sym_number] = ACTIONS(169),
        [sym_identifier] = ACTIONS(171),
        [sym_comment] = ACTIONS(69),
        [sym__dedent] = ACTIONS(167),
    },
    [192] = {
        [ts_builtin_sym_end] = ACTIONS(457),
        [anon_sym_SEMI] = ACTIONS(457),
        [anon_sym_print] = ACTIONS(459),
        [anon_sym_return] = ACTIONS(459),
        [anon_sym_del] = ACTIONS(459),
        [sym_pass_statement] = ACTIONS(459),
        [sym_break_statement] = ACTIONS(459),
        [sym_continue_statement] = ACTIONS(459),
        [anon_sym_if] = ACTIONS(459),
        [anon_sym_elif] = ACTIONS(459),
        [anon_sym_else] = ACTIONS(459),
        [anon_sym_for] = ACTIONS(459),
        [anon_sym_while] = ACTIONS(459),
        [anon_sym_try] = ACTIONS(459),
        [anon_sym_except] = ACTIONS(459),
        [anon_sym_finally] = ACTIONS(459),
        [anon_sym_with] = ACTIONS(459),
        [anon_sym_def] = ACTIONS(459),
        [anon_sym_class] = ACTIONS(459),
        [anon_sym_AT] = ACTIONS(457),
        [anon_sym_LBRACK] = ACTIONS(457),
        [sym_number] = ACTIONS(459),
        [sym_identifier] = ACTIONS(461),
        [sym_comment] = ACTIONS(69),
        [sym__newline] = ACTIONS(457),
    },
    [193] = {
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
        [sym_number] = ACTIONS(179),
        [sym_identifier] = ACTIONS(181),
        [sym_comment] = ACTIONS(69),
        [sym__dedent] = ACTIONS(177),
    },
    [194] = {
        [anon_sym_print] = ACTIONS(351),
        [anon_sym_return] = ACTIONS(351),
        [anon_sym_del] = ACTIONS(351),
        [sym_pass_statement] = ACTIONS(351),
        [sym_break_statement] = ACTIONS(351),
        [sym_continue_statement] = ACTIONS(351),
        [anon_sym_if] = ACTIONS(351),
        [anon_sym_for] = ACTIONS(351),
        [anon_sym_while] = ACTIONS(351),
        [anon_sym_try] = ACTIONS(351),
        [anon_sym_with] = ACTIONS(351),
        [anon_sym_def] = ACTIONS(351),
        [anon_sym_class] = ACTIONS(351),
        [anon_sym_AT] = ACTIONS(349),
        [anon_sym_LBRACK] = ACTIONS(349),
        [sym_number] = ACTIONS(351),
        [sym_identifier] = ACTIONS(353),
        [sym_comment] = ACTIONS(69),
        [sym__dedent] = ACTIONS(349),
    },
    [195] = {
        [anon_sym_COLON] = ACTIONS(463),
        [anon_sym_LPAREN] = ACTIONS(465),
        [sym_comment] = ACTIONS(69),
    },
    [196] = {
        [sym__simple_statement] = STATE(202),
        [sym_print_statement] = STATE(5),
        [sym_expression_statement] = STATE(5),
        [sym_return_statement] = STATE(5),
        [sym_delete_statement] = STATE(5),
        [sym__suite] = STATE(207),
        [sym__expression] = STATE(22),
        [sym_binary_operator] = STATE(15),
        [sym_subscript] = STATE(15),
        [sym_call] = STATE(15),
        [sym_list] = STATE(15),
        [sym_list_comprehension] = STATE(15),
        [anon_sym_print] = ACTIONS(79),
        [anon_sym_return] = ACTIONS(81),
        [anon_sym_del] = ACTIONS(83),
        [sym_pass_statement] = ACTIONS(85),
        [sym_break_statement] = ACTIONS(85),
        [sym_continue_statement] = ACTIONS(85),
        [anon_sym_LBRACK] = ACTIONS(103),
        [sym_number] = ACTIONS(105),
        [sym_identifier] = ACTIONS(107),
        [sym_comment] = ACTIONS(69),
        [sym__indent] = ACTIONS(467),
    },
    [197] = {
        [sym_expression_list] = STATE(198),
        [sym__expression] = STATE(104),
        [sym_binary_operator] = STATE(34),
        [sym_subscript] = STATE(34),
        [sym_call] = STATE(34),
        [sym_list] = STATE(34),
        [sym_list_comprehension] = STATE(34),
        [anon_sym_LBRACK] = ACTIONS(111),
        [sym_number] = ACTIONS(113),
        [sym_identifier] = ACTIONS(113),
        [sym_comment] = ACTIONS(69),
    },
    [198] = {
        [anon_sym_RPAREN] = ACTIONS(469),
        [sym_comment] = ACTIONS(69),
    },
    [199] = {
        [anon_sym_COLON] = ACTIONS(471),
        [sym_comment] = ACTIONS(69),
    },
    [200] = {
        [sym__simple_statement] = STATE(202),
        [sym_print_statement] = STATE(5),
        [sym_expression_statement] = STATE(5),
        [sym_return_statement] = STATE(5),
        [sym_delete_statement] = STATE(5),
        [sym__suite] = STATE(203),
        [sym__expression] = STATE(22),
        [sym_binary_operator] = STATE(15),
        [sym_subscript] = STATE(15),
        [sym_call] = STATE(15),
        [sym_list] = STATE(15),
        [sym_list_comprehension] = STATE(15),
        [anon_sym_print] = ACTIONS(79),
        [anon_sym_return] = ACTIONS(81),
        [anon_sym_del] = ACTIONS(83),
        [sym_pass_statement] = ACTIONS(85),
        [sym_break_statement] = ACTIONS(85),
        [sym_continue_statement] = ACTIONS(85),
        [anon_sym_LBRACK] = ACTIONS(103),
        [sym_number] = ACTIONS(105),
        [sym_identifier] = ACTIONS(107),
        [sym_comment] = ACTIONS(69),
        [sym__indent] = ACTIONS(467),
    },
    [201] = {
        [sym__statement] = STATE(185),
        [sym__simple_statement] = STATE(186),
        [sym_print_statement] = STATE(5),
        [sym_expression_statement] = STATE(5),
        [sym_return_statement] = STATE(5),
        [sym_delete_statement] = STATE(5),
        [sym__compound_statement] = STATE(187),
        [sym_if_statement] = STATE(188),
        [sym_for_statement] = STATE(188),
        [sym_while_statement] = STATE(188),
        [sym_try_statement] = STATE(188),
        [sym_with_statement] = STATE(188),
        [sym_function_definition] = STATE(188),
        [sym_class_definition] = STATE(188),
        [sym_decorated_definition] = STATE(188),
        [sym_decorator] = STATE(21),
        [sym__expression] = STATE(22),
        [sym_binary_operator] = STATE(15),
        [sym_subscript] = STATE(15),
        [sym_call] = STATE(15),
        [sym_list] = STATE(15),
        [sym_list_comprehension] = STATE(15),
        [aux_sym_module_repeat1] = STATE(205),
        [aux_sym_decorated_definition_repeat1] = STATE(190),
        [anon_sym_print] = ACTIONS(79),
        [anon_sym_return] = ACTIONS(81),
        [anon_sym_del] = ACTIONS(83),
        [sym_pass_statement] = ACTIONS(85),
        [sym_break_statement] = ACTIONS(85),
        [sym_continue_statement] = ACTIONS(85),
        [anon_sym_if] = ACTIONS(415),
        [anon_sym_for] = ACTIONS(417),
        [anon_sym_while] = ACTIONS(419),
        [anon_sym_try] = ACTIONS(421),
        [anon_sym_with] = ACTIONS(423),
        [anon_sym_def] = ACTIONS(425),
        [anon_sym_class] = ACTIONS(427),
        [anon_sym_AT] = ACTIONS(101),
        [anon_sym_LBRACK] = ACTIONS(103),
        [sym_number] = ACTIONS(105),
        [sym_identifier] = ACTIONS(107),
        [sym_comment] = ACTIONS(69),
        [sym__dedent] = ACTIONS(473),
    },
    [202] = {
        [sym_comment] = ACTIONS(69),
        [sym__newline] = ACTIONS(473),
    },
    [203] = {
        [anon_sym_print] = ACTIONS(433),
        [anon_sym_return] = ACTIONS(433),
        [anon_sym_del] = ACTIONS(433),
        [sym_pass_statement] = ACTIONS(433),
        [sym_break_statement] = ACTIONS(433),
        [sym_continue_statement] = ACTIONS(433),
        [anon_sym_if] = ACTIONS(433),
        [anon_sym_for] = ACTIONS(433),
        [anon_sym_while] = ACTIONS(433),
        [anon_sym_try] = ACTIONS(433),
        [anon_sym_with] = ACTIONS(433),
        [anon_sym_def] = ACTIONS(433),
        [anon_sym_class] = ACTIONS(433),
        [anon_sym_AT] = ACTIONS(431),
        [anon_sym_LBRACK] = ACTIONS(431),
        [sym_number] = ACTIONS(433),
        [sym_identifier] = ACTIONS(435),
        [sym_comment] = ACTIONS(69),
        [sym__dedent] = ACTIONS(431),
    },
    [204] = {
        [anon_sym_print] = ACTIONS(439),
        [anon_sym_return] = ACTIONS(439),
        [anon_sym_del] = ACTIONS(439),
        [sym_pass_statement] = ACTIONS(439),
        [sym_break_statement] = ACTIONS(439),
        [sym_continue_statement] = ACTIONS(439),
        [anon_sym_if] = ACTIONS(439),
        [anon_sym_elif] = ACTIONS(439),
        [anon_sym_else] = ACTIONS(439),
        [anon_sym_for] = ACTIONS(439),
        [anon_sym_while] = ACTIONS(439),
        [anon_sym_try] = ACTIONS(439),
        [anon_sym_except] = ACTIONS(439),
        [anon_sym_finally] = ACTIONS(439),
        [anon_sym_with] = ACTIONS(439),
        [anon_sym_def] = ACTIONS(439),
        [anon_sym_class] = ACTIONS(439),
        [anon_sym_AT] = ACTIONS(437),
        [anon_sym_LBRACK] = ACTIONS(437),
        [sym_number] = ACTIONS(439),
        [sym_identifier] = ACTIONS(441),
        [sym_comment] = ACTIONS(69),
        [sym__dedent] = ACTIONS(437),
    },
    [205] = {
        [sym__statement] = STATE(193),
        [sym__simple_statement] = STATE(186),
        [sym_print_statement] = STATE(5),
        [sym_expression_statement] = STATE(5),
        [sym_return_statement] = STATE(5),
        [sym_delete_statement] = STATE(5),
        [sym__compound_statement] = STATE(187),
        [sym_if_statement] = STATE(188),
        [sym_for_statement] = STATE(188),
        [sym_while_statement] = STATE(188),
        [sym_try_statement] = STATE(188),
        [sym_with_statement] = STATE(188),
        [sym_function_definition] = STATE(188),
        [sym_class_definition] = STATE(188),
        [sym_decorated_definition] = STATE(188),
        [sym_decorator] = STATE(21),
        [sym__expression] = STATE(22),
        [sym_binary_operator] = STATE(15),
        [sym_subscript] = STATE(15),
        [sym_call] = STATE(15),
        [sym_list] = STATE(15),
        [sym_list_comprehension] = STATE(15),
        [aux_sym_decorated_definition_repeat1] = STATE(190),
        [anon_sym_print] = ACTIONS(79),
        [anon_sym_return] = ACTIONS(81),
        [anon_sym_del] = ACTIONS(83),
        [sym_pass_statement] = ACTIONS(85),
        [sym_break_statement] = ACTIONS(85),
        [sym_continue_statement] = ACTIONS(85),
        [anon_sym_if] = ACTIONS(415),
        [anon_sym_for] = ACTIONS(417),
        [anon_sym_while] = ACTIONS(419),
        [anon_sym_try] = ACTIONS(421),
        [anon_sym_with] = ACTIONS(423),
        [anon_sym_def] = ACTIONS(425),
        [anon_sym_class] = ACTIONS(427),
        [anon_sym_AT] = ACTIONS(101),
        [anon_sym_LBRACK] = ACTIONS(103),
        [sym_number] = ACTIONS(105),
        [sym_identifier] = ACTIONS(107),
        [sym_comment] = ACTIONS(69),
        [sym__dedent] = ACTIONS(475),
    },
    [206] = {
        [anon_sym_print] = ACTIONS(459),
        [anon_sym_return] = ACTIONS(459),
        [anon_sym_del] = ACTIONS(459),
        [sym_pass_statement] = ACTIONS(459),
        [sym_break_statement] = ACTIONS(459),
        [sym_continue_statement] = ACTIONS(459),
        [anon_sym_if] = ACTIONS(459),
        [anon_sym_elif] = ACTIONS(459),
        [anon_sym_else] = ACTIONS(459),
        [anon_sym_for] = ACTIONS(459),
        [anon_sym_while] = ACTIONS(459),
        [anon_sym_try] = ACTIONS(459),
        [anon_sym_except] = ACTIONS(459),
        [anon_sym_finally] = ACTIONS(459),
        [anon_sym_with] = ACTIONS(459),
        [anon_sym_def] = ACTIONS(459),
        [anon_sym_class] = ACTIONS(459),
        [anon_sym_AT] = ACTIONS(457),
        [anon_sym_LBRACK] = ACTIONS(457),
        [sym_number] = ACTIONS(459),
        [sym_identifier] = ACTIONS(461),
        [sym_comment] = ACTIONS(69),
        [sym__dedent] = ACTIONS(457),
    },
    [207] = {
        [anon_sym_print] = ACTIONS(477),
        [anon_sym_return] = ACTIONS(477),
        [anon_sym_del] = ACTIONS(477),
        [sym_pass_statement] = ACTIONS(477),
        [sym_break_statement] = ACTIONS(477),
        [sym_continue_statement] = ACTIONS(477),
        [anon_sym_if] = ACTIONS(477),
        [anon_sym_for] = ACTIONS(477),
        [anon_sym_while] = ACTIONS(477),
        [anon_sym_try] = ACTIONS(477),
        [anon_sym_with] = ACTIONS(477),
        [anon_sym_def] = ACTIONS(477),
        [anon_sym_class] = ACTIONS(477),
        [anon_sym_AT] = ACTIONS(479),
        [anon_sym_LBRACK] = ACTIONS(479),
        [sym_number] = ACTIONS(477),
        [sym_identifier] = ACTIONS(481),
        [sym_comment] = ACTIONS(69),
        [sym__dedent] = ACTIONS(479),
    },
    [208] = {
        [sym_parameters] = STATE(210),
        [anon_sym_LPAREN] = ACTIONS(483),
        [sym_comment] = ACTIONS(69),
    },
    [209] = {
        [sym_default_parameter] = STATE(216),
        [sym_list_splat_parameter] = STATE(217),
        [sym_dictionary_splat_parameter] = STATE(218),
        [aux_sym_parameters_repeat1] = STATE(219),
        [anon_sym_RPAREN] = ACTIONS(485),
        [anon_sym_STAR] = ACTIONS(487),
        [sym_identifier] = ACTIONS(489),
        [sym_comment] = ACTIONS(69),
    },
    [210] = {
        [anon_sym_COLON] = ACTIONS(491),
        [sym_comment] = ACTIONS(69),
    },
    [211] = {
        [sym__simple_statement] = STATE(202),
        [sym_print_statement] = STATE(5),
        [sym_expression_statement] = STATE(5),
        [sym_return_statement] = STATE(5),
        [sym_delete_statement] = STATE(5),
        [sym__suite] = STATE(212),
        [sym__expression] = STATE(22),
        [sym_binary_operator] = STATE(15),
        [sym_subscript] = STATE(15),
        [sym_call] = STATE(15),
        [sym_list] = STATE(15),
        [sym_list_comprehension] = STATE(15),
        [anon_sym_print] = ACTIONS(79),
        [anon_sym_return] = ACTIONS(81),
        [anon_sym_del] = ACTIONS(83),
        [sym_pass_statement] = ACTIONS(85),
        [sym_break_statement] = ACTIONS(85),
        [sym_continue_statement] = ACTIONS(85),
        [anon_sym_LBRACK] = ACTIONS(103),
        [sym_number] = ACTIONS(105),
        [sym_identifier] = ACTIONS(107),
        [sym_comment] = ACTIONS(69),
        [sym__indent] = ACTIONS(467),
    },
    [212] = {
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
        [anon_sym_AT] = ACTIONS(495),
        [anon_sym_LBRACK] = ACTIONS(495),
        [sym_number] = ACTIONS(493),
        [sym_identifier] = ACTIONS(497),
        [sym_comment] = ACTIONS(69),
        [sym__dedent] = ACTIONS(495),
    },
    [213] = {
        [anon_sym_COLON] = ACTIONS(499),
        [sym_comment] = ACTIONS(69),
    },
    [214] = {
        [anon_sym_STAR] = ACTIONS(501),
        [sym_identifier] = ACTIONS(503),
        [sym_comment] = ACTIONS(69),
    },
    [215] = {
        [anon_sym_COMMA] = ACTIONS(505),
        [anon_sym_RPAREN] = ACTIONS(507),
        [anon_sym_EQ] = ACTIONS(509),
        [sym_comment] = ACTIONS(69),
    },
    [216] = {
        [anon_sym_COMMA] = ACTIONS(505),
        [anon_sym_RPAREN] = ACTIONS(507),
        [sym_comment] = ACTIONS(69),
    },
    [217] = {
        [anon_sym_COMMA] = ACTIONS(511),
        [anon_sym_RPAREN] = ACTIONS(507),
        [sym_comment] = ACTIONS(69),
    },
    [218] = {
        [anon_sym_RPAREN] = ACTIONS(507),
        [sym_comment] = ACTIONS(69),
    },
    [219] = {
        [sym_default_parameter] = STATE(221),
        [sym_list_splat_parameter] = STATE(222),
        [sym_dictionary_splat_parameter] = STATE(223),
        [anon_sym_STAR] = ACTIONS(487),
        [sym_identifier] = ACTIONS(513),
        [sym_comment] = ACTIONS(69),
    },
    [220] = {
        [anon_sym_COMMA] = ACTIONS(515),
        [anon_sym_RPAREN] = ACTIONS(517),
        [anon_sym_EQ] = ACTIONS(509),
        [sym_comment] = ACTIONS(69),
    },
    [221] = {
        [anon_sym_COMMA] = ACTIONS(515),
        [anon_sym_RPAREN] = ACTIONS(517),
        [sym_comment] = ACTIONS(69),
    },
    [222] = {
        [anon_sym_COMMA] = ACTIONS(519),
        [anon_sym_RPAREN] = ACTIONS(517),
        [sym_comment] = ACTIONS(69),
    },
    [223] = {
        [anon_sym_RPAREN] = ACTIONS(517),
        [sym_comment] = ACTIONS(69),
    },
    [224] = {
        [anon_sym_COLON] = ACTIONS(521),
        [sym_comment] = ACTIONS(69),
    },
    [225] = {
        [sym_dictionary_splat_parameter] = STATE(227),
        [anon_sym_STAR] = ACTIONS(523),
        [sym_comment] = ACTIONS(69),
    },
    [226] = {
        [anon_sym_STAR] = ACTIONS(501),
        [sym_comment] = ACTIONS(69),
    },
    [227] = {
        [anon_sym_RPAREN] = ACTIONS(525),
        [sym_comment] = ACTIONS(69),
    },
    [228] = {
        [anon_sym_COLON] = ACTIONS(527),
        [sym_comment] = ACTIONS(69),
    },
    [229] = {
        [sym_identifier] = ACTIONS(529),
        [sym_comment] = ACTIONS(69),
    },
    [230] = {
        [anon_sym_RPAREN] = ACTIONS(531),
        [sym_comment] = ACTIONS(69),
    },
    [231] = {
        [anon_sym_RPAREN] = ACTIONS(533),
        [anon_sym_STAR] = ACTIONS(535),
        [sym_identifier] = ACTIONS(537),
        [sym_comment] = ACTIONS(69),
    },
    [232] = {
        [anon_sym_COLON] = ACTIONS(539),
        [sym_comment] = ACTIONS(69),
    },
    [233] = {
        [sym__expression] = STATE(234),
        [sym_binary_operator] = STATE(34),
        [sym_subscript] = STATE(34),
        [sym_call] = STATE(34),
        [sym_list] = STATE(34),
        [sym_list_comprehension] = STATE(34),
        [anon_sym_LBRACK] = ACTIONS(111),
        [sym_number] = ACTIONS(113),
        [sym_identifier] = ACTIONS(113),
        [sym_comment] = ACTIONS(69),
    },
    [234] = {
        [anon_sym_COMMA] = ACTIONS(541),
        [anon_sym_LPAREN] = ACTIONS(197),
        [anon_sym_RPAREN] = ACTIONS(541),
        [anon_sym_PLUS] = ACTIONS(199),
        [anon_sym_LBRACK] = ACTIONS(201),
        [sym_comment] = ACTIONS(69),
    },
    [235] = {
        [anon_sym_COLON] = ACTIONS(543),
        [sym_comment] = ACTIONS(69),
    },
    [236] = {
        [sym_dictionary_splat_parameter] = STATE(237),
        [anon_sym_STAR] = ACTIONS(523),
        [sym_comment] = ACTIONS(69),
    },
    [237] = {
        [anon_sym_RPAREN] = ACTIONS(533),
        [sym_comment] = ACTIONS(69),
    },
    [238] = {
        [anon_sym_RPAREN] = ACTIONS(517),
        [anon_sym_STAR] = ACTIONS(545),
        [sym_identifier] = ACTIONS(547),
        [sym_comment] = ACTIONS(69),
    },
    [239] = {
        [anon_sym_COMMA] = ACTIONS(549),
        [anon_sym_RPAREN] = ACTIONS(549),
        [sym_comment] = ACTIONS(69),
    },
    [240] = {
        [aux_sym_with_statement_repeat1] = STATE(246),
        [anon_sym_COMMA] = ACTIONS(551),
        [anon_sym_COLON] = ACTIONS(553),
        [sym_comment] = ACTIONS(69),
    },
    [241] = {
        [anon_sym_COMMA] = ACTIONS(555),
        [anon_sym_COLON] = ACTIONS(555),
        [anon_sym_as] = ACTIONS(557),
        [anon_sym_LPAREN] = ACTIONS(197),
        [anon_sym_PLUS] = ACTIONS(199),
        [anon_sym_LBRACK] = ACTIONS(201),
        [sym_comment] = ACTIONS(69),
    },
    [242] = {
        [sym__expression] = STATE(243),
        [sym_binary_operator] = STATE(34),
        [sym_subscript] = STATE(34),
        [sym_call] = STATE(34),
        [sym_list] = STATE(34),
        [sym_list_comprehension] = STATE(34),
        [anon_sym_LBRACK] = ACTIONS(111),
        [sym_number] = ACTIONS(113),
        [sym_identifier] = ACTIONS(113),
        [sym_comment] = ACTIONS(69),
    },
    [243] = {
        [anon_sym_COMMA] = ACTIONS(559),
        [anon_sym_COLON] = ACTIONS(559),
        [anon_sym_LPAREN] = ACTIONS(197),
        [anon_sym_PLUS] = ACTIONS(199),
        [anon_sym_LBRACK] = ACTIONS(201),
        [sym_comment] = ACTIONS(69),
    },
    [244] = {
        [sym_with_item] = STATE(252),
        [sym__expression] = STATE(241),
        [sym_binary_operator] = STATE(34),
        [sym_subscript] = STATE(34),
        [sym_call] = STATE(34),
        [sym_list] = STATE(34),
        [sym_list_comprehension] = STATE(34),
        [anon_sym_LBRACK] = ACTIONS(111),
        [sym_number] = ACTIONS(113),
        [sym_identifier] = ACTIONS(113),
        [sym_comment] = ACTIONS(69),
    },
    [245] = {
        [sym__simple_statement] = STATE(202),
        [sym_print_statement] = STATE(5),
        [sym_expression_statement] = STATE(5),
        [sym_return_statement] = STATE(5),
        [sym_delete_statement] = STATE(5),
        [sym__suite] = STATE(251),
        [sym__expression] = STATE(22),
        [sym_binary_operator] = STATE(15),
        [sym_subscript] = STATE(15),
        [sym_call] = STATE(15),
        [sym_list] = STATE(15),
        [sym_list_comprehension] = STATE(15),
        [anon_sym_print] = ACTIONS(79),
        [anon_sym_return] = ACTIONS(81),
        [anon_sym_del] = ACTIONS(83),
        [sym_pass_statement] = ACTIONS(85),
        [sym_break_statement] = ACTIONS(85),
        [sym_continue_statement] = ACTIONS(85),
        [anon_sym_LBRACK] = ACTIONS(103),
        [sym_number] = ACTIONS(105),
        [sym_identifier] = ACTIONS(107),
        [sym_comment] = ACTIONS(69),
        [sym__indent] = ACTIONS(467),
    },
    [246] = {
        [anon_sym_COMMA] = ACTIONS(561),
        [anon_sym_COLON] = ACTIONS(563),
        [sym_comment] = ACTIONS(69),
    },
    [247] = {
        [sym_with_item] = STATE(250),
        [sym__expression] = STATE(241),
        [sym_binary_operator] = STATE(34),
        [sym_subscript] = STATE(34),
        [sym_call] = STATE(34),
        [sym_list] = STATE(34),
        [sym_list_comprehension] = STATE(34),
        [anon_sym_LBRACK] = ACTIONS(111),
        [sym_number] = ACTIONS(113),
        [sym_identifier] = ACTIONS(113),
        [sym_comment] = ACTIONS(69),
    },
    [248] = {
        [sym__simple_statement] = STATE(202),
        [sym_print_statement] = STATE(5),
        [sym_expression_statement] = STATE(5),
        [sym_return_statement] = STATE(5),
        [sym_delete_statement] = STATE(5),
        [sym__suite] = STATE(249),
        [sym__expression] = STATE(22),
        [sym_binary_operator] = STATE(15),
        [sym_subscript] = STATE(15),
        [sym_call] = STATE(15),
        [sym_list] = STATE(15),
        [sym_list_comprehension] = STATE(15),
        [anon_sym_print] = ACTIONS(79),
        [anon_sym_return] = ACTIONS(81),
        [anon_sym_del] = ACTIONS(83),
        [sym_pass_statement] = ACTIONS(85),
        [sym_break_statement] = ACTIONS(85),
        [sym_continue_statement] = ACTIONS(85),
        [anon_sym_LBRACK] = ACTIONS(103),
        [sym_number] = ACTIONS(105),
        [sym_identifier] = ACTIONS(107),
        [sym_comment] = ACTIONS(69),
        [sym__indent] = ACTIONS(467),
    },
    [249] = {
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
        [sym_number] = ACTIONS(565),
        [sym_identifier] = ACTIONS(569),
        [sym_comment] = ACTIONS(69),
        [sym__dedent] = ACTIONS(567),
    },
    [250] = {
        [anon_sym_COMMA] = ACTIONS(571),
        [anon_sym_COLON] = ACTIONS(571),
        [sym_comment] = ACTIONS(69),
    },
    [251] = {
        [anon_sym_print] = ACTIONS(573),
        [anon_sym_return] = ACTIONS(573),
        [anon_sym_del] = ACTIONS(573),
        [sym_pass_statement] = ACTIONS(573),
        [sym_break_statement] = ACTIONS(573),
        [sym_continue_statement] = ACTIONS(573),
        [anon_sym_if] = ACTIONS(573),
        [anon_sym_for] = ACTIONS(573),
        [anon_sym_while] = ACTIONS(573),
        [anon_sym_try] = ACTIONS(573),
        [anon_sym_with] = ACTIONS(573),
        [anon_sym_def] = ACTIONS(573),
        [anon_sym_class] = ACTIONS(573),
        [anon_sym_AT] = ACTIONS(575),
        [anon_sym_LBRACK] = ACTIONS(575),
        [sym_number] = ACTIONS(573),
        [sym_identifier] = ACTIONS(577),
        [sym_comment] = ACTIONS(69),
        [sym__dedent] = ACTIONS(575),
    },
    [252] = {
        [anon_sym_COMMA] = ACTIONS(579),
        [anon_sym_COLON] = ACTIONS(579),
        [sym_comment] = ACTIONS(69),
    },
    [253] = {
        [sym__simple_statement] = STATE(255),
        [sym_print_statement] = STATE(5),
        [sym_expression_statement] = STATE(5),
        [sym_return_statement] = STATE(5),
        [sym_delete_statement] = STATE(5),
        [sym__suite] = STATE(256),
        [sym__expression] = STATE(22),
        [sym_binary_operator] = STATE(15),
        [sym_subscript] = STATE(15),
        [sym_call] = STATE(15),
        [sym_list] = STATE(15),
        [sym_list_comprehension] = STATE(15),
        [anon_sym_print] = ACTIONS(79),
        [anon_sym_return] = ACTIONS(81),
        [anon_sym_del] = ACTIONS(83),
        [sym_pass_statement] = ACTIONS(85),
        [sym_break_statement] = ACTIONS(85),
        [sym_continue_statement] = ACTIONS(85),
        [anon_sym_LBRACK] = ACTIONS(103),
        [sym_number] = ACTIONS(105),
        [sym_identifier] = ACTIONS(107),
        [sym_comment] = ACTIONS(69),
        [sym__indent] = ACTIONS(581),
    },
    [254] = {
        [sym__statement] = STATE(185),
        [sym__simple_statement] = STATE(186),
        [sym_print_statement] = STATE(5),
        [sym_expression_statement] = STATE(5),
        [sym_return_statement] = STATE(5),
        [sym_delete_statement] = STATE(5),
        [sym__compound_statement] = STATE(187),
        [sym_if_statement] = STATE(188),
        [sym_for_statement] = STATE(188),
        [sym_while_statement] = STATE(188),
        [sym_try_statement] = STATE(188),
        [sym_with_statement] = STATE(188),
        [sym_function_definition] = STATE(188),
        [sym_class_definition] = STATE(188),
        [sym_decorated_definition] = STATE(188),
        [sym_decorator] = STATE(21),
        [sym__expression] = STATE(22),
        [sym_binary_operator] = STATE(15),
        [sym_subscript] = STATE(15),
        [sym_call] = STATE(15),
        [sym_list] = STATE(15),
        [sym_list_comprehension] = STATE(15),
        [aux_sym_module_repeat1] = STATE(279),
        [aux_sym_decorated_definition_repeat1] = STATE(190),
        [anon_sym_print] = ACTIONS(79),
        [anon_sym_return] = ACTIONS(81),
        [anon_sym_del] = ACTIONS(83),
        [sym_pass_statement] = ACTIONS(85),
        [sym_break_statement] = ACTIONS(85),
        [sym_continue_statement] = ACTIONS(85),
        [anon_sym_if] = ACTIONS(415),
        [anon_sym_for] = ACTIONS(417),
        [anon_sym_while] = ACTIONS(419),
        [anon_sym_try] = ACTIONS(421),
        [anon_sym_with] = ACTIONS(423),
        [anon_sym_def] = ACTIONS(425),
        [anon_sym_class] = ACTIONS(427),
        [anon_sym_AT] = ACTIONS(101),
        [anon_sym_LBRACK] = ACTIONS(103),
        [sym_number] = ACTIONS(105),
        [sym_identifier] = ACTIONS(107),
        [sym_comment] = ACTIONS(69),
        [sym__dedent] = ACTIONS(583),
    },
    [255] = {
        [sym_comment] = ACTIONS(69),
        [sym__newline] = ACTIONS(583),
    },
    [256] = {
        [sym_except_clause] = STATE(259),
        [sym_finally_clause] = STATE(260),
        [aux_sym_try_statement_repeat1] = STATE(261),
        [anon_sym_except] = ACTIONS(585),
        [anon_sym_finally] = ACTIONS(587),
        [sym_comment] = ACTIONS(69),
    },
    [257] = {
        [sym__expression] = STATE(271),
        [sym_binary_operator] = STATE(34),
        [sym_subscript] = STATE(34),
        [sym_call] = STATE(34),
        [sym_list] = STATE(34),
        [sym_list_comprehension] = STATE(34),
        [anon_sym_LBRACK] = ACTIONS(111),
        [sym_number] = ACTIONS(113),
        [sym_identifier] = ACTIONS(113),
        [sym_comment] = ACTIONS(69),
    },
    [258] = {
        [anon_sym_COLON] = ACTIONS(589),
        [sym_comment] = ACTIONS(69),
    },
    [259] = {
        [anon_sym_print] = ACTIONS(591),
        [anon_sym_return] = ACTIONS(591),
        [anon_sym_del] = ACTIONS(591),
        [sym_pass_statement] = ACTIONS(591),
        [sym_break_statement] = ACTIONS(591),
        [sym_continue_statement] = ACTIONS(591),
        [anon_sym_if] = ACTIONS(591),
        [anon_sym_else] = ACTIONS(591),
        [anon_sym_for] = ACTIONS(591),
        [anon_sym_while] = ACTIONS(591),
        [anon_sym_try] = ACTIONS(591),
        [anon_sym_except] = ACTIONS(591),
        [anon_sym_finally] = ACTIONS(591),
        [anon_sym_with] = ACTIONS(591),
        [anon_sym_def] = ACTIONS(591),
        [anon_sym_class] = ACTIONS(591),
        [anon_sym_AT] = ACTIONS(593),
        [anon_sym_LBRACK] = ACTIONS(593),
        [sym_number] = ACTIONS(591),
        [sym_identifier] = ACTIONS(595),
        [sym_comment] = ACTIONS(69),
        [sym__dedent] = ACTIONS(593),
    },
    [260] = {
        [anon_sym_print] = ACTIONS(597),
        [anon_sym_return] = ACTIONS(597),
        [anon_sym_del] = ACTIONS(597),
        [sym_pass_statement] = ACTIONS(597),
        [sym_break_statement] = ACTIONS(597),
        [sym_continue_statement] = ACTIONS(597),
        [anon_sym_if] = ACTIONS(597),
        [anon_sym_for] = ACTIONS(597),
        [anon_sym_while] = ACTIONS(597),
        [anon_sym_try] = ACTIONS(597),
        [anon_sym_with] = ACTIONS(597),
        [anon_sym_def] = ACTIONS(597),
        [anon_sym_class] = ACTIONS(597),
        [anon_sym_AT] = ACTIONS(599),
        [anon_sym_LBRACK] = ACTIONS(599),
        [sym_number] = ACTIONS(597),
        [sym_identifier] = ACTIONS(601),
        [sym_comment] = ACTIONS(69),
        [sym__dedent] = ACTIONS(599),
    },
    [261] = {
        [sym_else_clause] = STATE(263),
        [sym_except_clause] = STATE(264),
        [sym_finally_clause] = STATE(265),
        [anon_sym_print] = ACTIONS(597),
        [anon_sym_return] = ACTIONS(597),
        [anon_sym_del] = ACTIONS(597),
        [sym_pass_statement] = ACTIONS(597),
        [sym_break_statement] = ACTIONS(597),
        [sym_continue_statement] = ACTIONS(597),
        [anon_sym_if] = ACTIONS(597),
        [anon_sym_else] = ACTIONS(603),
        [anon_sym_for] = ACTIONS(597),
        [anon_sym_while] = ACTIONS(597),
        [anon_sym_try] = ACTIONS(597),
        [anon_sym_except] = ACTIONS(605),
        [anon_sym_finally] = ACTIONS(607),
        [anon_sym_with] = ACTIONS(597),
        [anon_sym_def] = ACTIONS(597),
        [anon_sym_class] = ACTIONS(597),
        [anon_sym_AT] = ACTIONS(599),
        [anon_sym_LBRACK] = ACTIONS(599),
        [sym_number] = ACTIONS(597),
        [sym_identifier] = ACTIONS(601),
        [sym_comment] = ACTIONS(69),
        [sym__dedent] = ACTIONS(599),
    },
    [262] = {
        [anon_sym_COLON] = ACTIONS(609),
        [sym_comment] = ACTIONS(69),
    },
    [263] = {
        [sym_finally_clause] = STATE(266),
        [anon_sym_print] = ACTIONS(611),
        [anon_sym_return] = ACTIONS(611),
        [anon_sym_del] = ACTIONS(611),
        [sym_pass_statement] = ACTIONS(611),
        [sym_break_statement] = ACTIONS(611),
        [sym_continue_statement] = ACTIONS(611),
        [anon_sym_if] = ACTIONS(611),
        [anon_sym_for] = ACTIONS(611),
        [anon_sym_while] = ACTIONS(611),
        [anon_sym_try] = ACTIONS(611),
        [anon_sym_finally] = ACTIONS(607),
        [anon_sym_with] = ACTIONS(611),
        [anon_sym_def] = ACTIONS(611),
        [anon_sym_class] = ACTIONS(611),
        [anon_sym_AT] = ACTIONS(613),
        [anon_sym_LBRACK] = ACTIONS(613),
        [sym_number] = ACTIONS(611),
        [sym_identifier] = ACTIONS(615),
        [sym_comment] = ACTIONS(69),
        [sym__dedent] = ACTIONS(613),
    },
    [264] = {
        [anon_sym_print] = ACTIONS(617),
        [anon_sym_return] = ACTIONS(617),
        [anon_sym_del] = ACTIONS(617),
        [sym_pass_statement] = ACTIONS(617),
        [sym_break_statement] = ACTIONS(617),
        [sym_continue_statement] = ACTIONS(617),
        [anon_sym_if] = ACTIONS(617),
        [anon_sym_else] = ACTIONS(617),
        [anon_sym_for] = ACTIONS(617),
        [anon_sym_while] = ACTIONS(617),
        [anon_sym_try] = ACTIONS(617),
        [anon_sym_except] = ACTIONS(617),
        [anon_sym_finally] = ACTIONS(617),
        [anon_sym_with] = ACTIONS(617),
        [anon_sym_def] = ACTIONS(617),
        [anon_sym_class] = ACTIONS(617),
        [anon_sym_AT] = ACTIONS(619),
        [anon_sym_LBRACK] = ACTIONS(619),
        [sym_number] = ACTIONS(617),
        [sym_identifier] = ACTIONS(621),
        [sym_comment] = ACTIONS(69),
        [sym__dedent] = ACTIONS(619),
    },
    [265] = {
        [anon_sym_print] = ACTIONS(611),
        [anon_sym_return] = ACTIONS(611),
        [anon_sym_del] = ACTIONS(611),
        [sym_pass_statement] = ACTIONS(611),
        [sym_break_statement] = ACTIONS(611),
        [sym_continue_statement] = ACTIONS(611),
        [anon_sym_if] = ACTIONS(611),
        [anon_sym_for] = ACTIONS(611),
        [anon_sym_while] = ACTIONS(611),
        [anon_sym_try] = ACTIONS(611),
        [anon_sym_with] = ACTIONS(611),
        [anon_sym_def] = ACTIONS(611),
        [anon_sym_class] = ACTIONS(611),
        [anon_sym_AT] = ACTIONS(613),
        [anon_sym_LBRACK] = ACTIONS(613),
        [sym_number] = ACTIONS(611),
        [sym_identifier] = ACTIONS(615),
        [sym_comment] = ACTIONS(69),
        [sym__dedent] = ACTIONS(613),
    },
    [266] = {
        [anon_sym_print] = ACTIONS(623),
        [anon_sym_return] = ACTIONS(623),
        [anon_sym_del] = ACTIONS(623),
        [sym_pass_statement] = ACTIONS(623),
        [sym_break_statement] = ACTIONS(623),
        [sym_continue_statement] = ACTIONS(623),
        [anon_sym_if] = ACTIONS(623),
        [anon_sym_for] = ACTIONS(623),
        [anon_sym_while] = ACTIONS(623),
        [anon_sym_try] = ACTIONS(623),
        [anon_sym_with] = ACTIONS(623),
        [anon_sym_def] = ACTIONS(623),
        [anon_sym_class] = ACTIONS(623),
        [anon_sym_AT] = ACTIONS(625),
        [anon_sym_LBRACK] = ACTIONS(625),
        [sym_number] = ACTIONS(623),
        [sym_identifier] = ACTIONS(627),
        [sym_comment] = ACTIONS(69),
        [sym__dedent] = ACTIONS(625),
    },
    [267] = {
        [sym__simple_statement] = STATE(202),
        [sym_print_statement] = STATE(5),
        [sym_expression_statement] = STATE(5),
        [sym_return_statement] = STATE(5),
        [sym_delete_statement] = STATE(5),
        [sym__suite] = STATE(268),
        [sym__expression] = STATE(22),
        [sym_binary_operator] = STATE(15),
        [sym_subscript] = STATE(15),
        [sym_call] = STATE(15),
        [sym_list] = STATE(15),
        [sym_list_comprehension] = STATE(15),
        [anon_sym_print] = ACTIONS(79),
        [anon_sym_return] = ACTIONS(81),
        [anon_sym_del] = ACTIONS(83),
        [sym_pass_statement] = ACTIONS(85),
        [sym_break_statement] = ACTIONS(85),
        [sym_continue_statement] = ACTIONS(85),
        [anon_sym_LBRACK] = ACTIONS(103),
        [sym_number] = ACTIONS(105),
        [sym_identifier] = ACTIONS(107),
        [sym_comment] = ACTIONS(69),
        [sym__indent] = ACTIONS(467),
    },
    [268] = {
        [anon_sym_print] = ACTIONS(629),
        [anon_sym_return] = ACTIONS(629),
        [anon_sym_del] = ACTIONS(629),
        [sym_pass_statement] = ACTIONS(629),
        [sym_break_statement] = ACTIONS(629),
        [sym_continue_statement] = ACTIONS(629),
        [anon_sym_if] = ACTIONS(629),
        [anon_sym_for] = ACTIONS(629),
        [anon_sym_while] = ACTIONS(629),
        [anon_sym_try] = ACTIONS(629),
        [anon_sym_finally] = ACTIONS(629),
        [anon_sym_with] = ACTIONS(629),
        [anon_sym_def] = ACTIONS(629),
        [anon_sym_class] = ACTIONS(629),
        [anon_sym_AT] = ACTIONS(631),
        [anon_sym_LBRACK] = ACTIONS(631),
        [sym_number] = ACTIONS(629),
        [sym_identifier] = ACTIONS(633),
        [sym_comment] = ACTIONS(69),
        [sym__dedent] = ACTIONS(631),
    },
    [269] = {
        [sym__simple_statement] = STATE(202),
        [sym_print_statement] = STATE(5),
        [sym_expression_statement] = STATE(5),
        [sym_return_statement] = STATE(5),
        [sym_delete_statement] = STATE(5),
        [sym__suite] = STATE(270),
        [sym__expression] = STATE(22),
        [sym_binary_operator] = STATE(15),
        [sym_subscript] = STATE(15),
        [sym_call] = STATE(15),
        [sym_list] = STATE(15),
        [sym_list_comprehension] = STATE(15),
        [anon_sym_print] = ACTIONS(79),
        [anon_sym_return] = ACTIONS(81),
        [anon_sym_del] = ACTIONS(83),
        [sym_pass_statement] = ACTIONS(85),
        [sym_break_statement] = ACTIONS(85),
        [sym_continue_statement] = ACTIONS(85),
        [anon_sym_LBRACK] = ACTIONS(103),
        [sym_number] = ACTIONS(105),
        [sym_identifier] = ACTIONS(107),
        [sym_comment] = ACTIONS(69),
        [sym__indent] = ACTIONS(467),
    },
    [270] = {
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
        [sym_number] = ACTIONS(635),
        [sym_identifier] = ACTIONS(639),
        [sym_comment] = ACTIONS(69),
        [sym__dedent] = ACTIONS(637),
    },
    [271] = {
        [anon_sym_COMMA] = ACTIONS(641),
        [anon_sym_COLON] = ACTIONS(643),
        [anon_sym_as] = ACTIONS(641),
        [anon_sym_LPAREN] = ACTIONS(197),
        [anon_sym_PLUS] = ACTIONS(199),
        [anon_sym_LBRACK] = ACTIONS(201),
        [sym_comment] = ACTIONS(69),
    },
    [272] = {
        [sym__expression] = STATE(274),
        [sym_binary_operator] = STATE(34),
        [sym_subscript] = STATE(34),
        [sym_call] = STATE(34),
        [sym_list] = STATE(34),
        [sym_list_comprehension] = STATE(34),
        [anon_sym_LBRACK] = ACTIONS(111),
        [sym_number] = ACTIONS(113),
        [sym_identifier] = ACTIONS(113),
        [sym_comment] = ACTIONS(69),
    },
    [273] = {
        [sym__simple_statement] = STATE(202),
        [sym_print_statement] = STATE(5),
        [sym_expression_statement] = STATE(5),
        [sym_return_statement] = STATE(5),
        [sym_delete_statement] = STATE(5),
        [sym__suite] = STATE(277),
        [sym__expression] = STATE(22),
        [sym_binary_operator] = STATE(15),
        [sym_subscript] = STATE(15),
        [sym_call] = STATE(15),
        [sym_list] = STATE(15),
        [sym_list_comprehension] = STATE(15),
        [anon_sym_print] = ACTIONS(79),
        [anon_sym_return] = ACTIONS(81),
        [anon_sym_del] = ACTIONS(83),
        [sym_pass_statement] = ACTIONS(85),
        [sym_break_statement] = ACTIONS(85),
        [sym_continue_statement] = ACTIONS(85),
        [anon_sym_LBRACK] = ACTIONS(103),
        [sym_number] = ACTIONS(105),
        [sym_identifier] = ACTIONS(107),
        [sym_comment] = ACTIONS(69),
        [sym__indent] = ACTIONS(467),
    },
    [274] = {
        [anon_sym_COLON] = ACTIONS(645),
        [anon_sym_LPAREN] = ACTIONS(197),
        [anon_sym_PLUS] = ACTIONS(199),
        [anon_sym_LBRACK] = ACTIONS(201),
        [sym_comment] = ACTIONS(69),
    },
    [275] = {
        [sym__simple_statement] = STATE(202),
        [sym_print_statement] = STATE(5),
        [sym_expression_statement] = STATE(5),
        [sym_return_statement] = STATE(5),
        [sym_delete_statement] = STATE(5),
        [sym__suite] = STATE(276),
        [sym__expression] = STATE(22),
        [sym_binary_operator] = STATE(15),
        [sym_subscript] = STATE(15),
        [sym_call] = STATE(15),
        [sym_list] = STATE(15),
        [sym_list_comprehension] = STATE(15),
        [anon_sym_print] = ACTIONS(79),
        [anon_sym_return] = ACTIONS(81),
        [anon_sym_del] = ACTIONS(83),
        [sym_pass_statement] = ACTIONS(85),
        [sym_break_statement] = ACTIONS(85),
        [sym_continue_statement] = ACTIONS(85),
        [anon_sym_LBRACK] = ACTIONS(103),
        [sym_number] = ACTIONS(105),
        [sym_identifier] = ACTIONS(107),
        [sym_comment] = ACTIONS(69),
        [sym__indent] = ACTIONS(467),
    },
    [276] = {
        [anon_sym_print] = ACTIONS(647),
        [anon_sym_return] = ACTIONS(647),
        [anon_sym_del] = ACTIONS(647),
        [sym_pass_statement] = ACTIONS(647),
        [sym_break_statement] = ACTIONS(647),
        [sym_continue_statement] = ACTIONS(647),
        [anon_sym_if] = ACTIONS(647),
        [anon_sym_else] = ACTIONS(647),
        [anon_sym_for] = ACTIONS(647),
        [anon_sym_while] = ACTIONS(647),
        [anon_sym_try] = ACTIONS(647),
        [anon_sym_except] = ACTIONS(647),
        [anon_sym_finally] = ACTIONS(647),
        [anon_sym_with] = ACTIONS(647),
        [anon_sym_def] = ACTIONS(647),
        [anon_sym_class] = ACTIONS(647),
        [anon_sym_AT] = ACTIONS(649),
        [anon_sym_LBRACK] = ACTIONS(649),
        [sym_number] = ACTIONS(647),
        [sym_identifier] = ACTIONS(651),
        [sym_comment] = ACTIONS(69),
        [sym__dedent] = ACTIONS(649),
    },
    [277] = {
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
        [sym_number] = ACTIONS(653),
        [sym_identifier] = ACTIONS(657),
        [sym_comment] = ACTIONS(69),
        [sym__dedent] = ACTIONS(655),
    },
    [278] = {
        [anon_sym_except] = ACTIONS(437),
        [anon_sym_finally] = ACTIONS(437),
        [sym_comment] = ACTIONS(69),
    },
    [279] = {
        [sym__statement] = STATE(193),
        [sym__simple_statement] = STATE(186),
        [sym_print_statement] = STATE(5),
        [sym_expression_statement] = STATE(5),
        [sym_return_statement] = STATE(5),
        [sym_delete_statement] = STATE(5),
        [sym__compound_statement] = STATE(187),
        [sym_if_statement] = STATE(188),
        [sym_for_statement] = STATE(188),
        [sym_while_statement] = STATE(188),
        [sym_try_statement] = STATE(188),
        [sym_with_statement] = STATE(188),
        [sym_function_definition] = STATE(188),
        [sym_class_definition] = STATE(188),
        [sym_decorated_definition] = STATE(188),
        [sym_decorator] = STATE(21),
        [sym__expression] = STATE(22),
        [sym_binary_operator] = STATE(15),
        [sym_subscript] = STATE(15),
        [sym_call] = STATE(15),
        [sym_list] = STATE(15),
        [sym_list_comprehension] = STATE(15),
        [aux_sym_decorated_definition_repeat1] = STATE(190),
        [anon_sym_print] = ACTIONS(79),
        [anon_sym_return] = ACTIONS(81),
        [anon_sym_del] = ACTIONS(83),
        [sym_pass_statement] = ACTIONS(85),
        [sym_break_statement] = ACTIONS(85),
        [sym_continue_statement] = ACTIONS(85),
        [anon_sym_if] = ACTIONS(415),
        [anon_sym_for] = ACTIONS(417),
        [anon_sym_while] = ACTIONS(419),
        [anon_sym_try] = ACTIONS(421),
        [anon_sym_with] = ACTIONS(423),
        [anon_sym_def] = ACTIONS(425),
        [anon_sym_class] = ACTIONS(427),
        [anon_sym_AT] = ACTIONS(101),
        [anon_sym_LBRACK] = ACTIONS(103),
        [sym_number] = ACTIONS(105),
        [sym_identifier] = ACTIONS(107),
        [sym_comment] = ACTIONS(69),
        [sym__dedent] = ACTIONS(659),
    },
    [280] = {
        [anon_sym_except] = ACTIONS(457),
        [anon_sym_finally] = ACTIONS(457),
        [sym_comment] = ACTIONS(69),
    },
    [281] = {
        [anon_sym_COLON] = ACTIONS(661),
        [anon_sym_LPAREN] = ACTIONS(197),
        [anon_sym_PLUS] = ACTIONS(199),
        [anon_sym_LBRACK] = ACTIONS(201),
        [sym_comment] = ACTIONS(69),
    },
    [282] = {
        [sym__simple_statement] = STATE(202),
        [sym_print_statement] = STATE(5),
        [sym_expression_statement] = STATE(5),
        [sym_return_statement] = STATE(5),
        [sym_delete_statement] = STATE(5),
        [sym__suite] = STATE(283),
        [sym__expression] = STATE(22),
        [sym_binary_operator] = STATE(15),
        [sym_subscript] = STATE(15),
        [sym_call] = STATE(15),
        [sym_list] = STATE(15),
        [sym_list_comprehension] = STATE(15),
        [anon_sym_print] = ACTIONS(79),
        [anon_sym_return] = ACTIONS(81),
        [anon_sym_del] = ACTIONS(83),
        [sym_pass_statement] = ACTIONS(85),
        [sym_break_statement] = ACTIONS(85),
        [sym_continue_statement] = ACTIONS(85),
        [anon_sym_LBRACK] = ACTIONS(103),
        [sym_number] = ACTIONS(105),
        [sym_identifier] = ACTIONS(107),
        [sym_comment] = ACTIONS(69),
        [sym__indent] = ACTIONS(467),
    },
    [283] = {
        [sym_else_clause] = STATE(284),
        [anon_sym_print] = ACTIONS(663),
        [anon_sym_return] = ACTIONS(663),
        [anon_sym_del] = ACTIONS(663),
        [sym_pass_statement] = ACTIONS(663),
        [sym_break_statement] = ACTIONS(663),
        [sym_continue_statement] = ACTIONS(663),
        [anon_sym_if] = ACTIONS(663),
        [anon_sym_else] = ACTIONS(603),
        [anon_sym_for] = ACTIONS(663),
        [anon_sym_while] = ACTIONS(663),
        [anon_sym_try] = ACTIONS(663),
        [anon_sym_with] = ACTIONS(663),
        [anon_sym_def] = ACTIONS(663),
        [anon_sym_class] = ACTIONS(663),
        [anon_sym_AT] = ACTIONS(665),
        [anon_sym_LBRACK] = ACTIONS(665),
        [sym_number] = ACTIONS(663),
        [sym_identifier] = ACTIONS(667),
        [sym_comment] = ACTIONS(69),
        [sym__dedent] = ACTIONS(665),
    },
    [284] = {
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
        [sym_number] = ACTIONS(669),
        [sym_identifier] = ACTIONS(673),
        [sym_comment] = ACTIONS(69),
        [sym__dedent] = ACTIONS(671),
    },
    [285] = {
        [anon_sym_in] = ACTIONS(675),
        [sym_comment] = ACTIONS(69),
    },
    [286] = {
        [sym_expression_list] = STATE(287),
        [sym__expression] = STATE(104),
        [sym_binary_operator] = STATE(34),
        [sym_subscript] = STATE(34),
        [sym_call] = STATE(34),
        [sym_list] = STATE(34),
        [sym_list_comprehension] = STATE(34),
        [anon_sym_LBRACK] = ACTIONS(111),
        [sym_number] = ACTIONS(113),
        [sym_identifier] = ACTIONS(113),
        [sym_comment] = ACTIONS(69),
    },
    [287] = {
        [anon_sym_COLON] = ACTIONS(677),
        [sym_comment] = ACTIONS(69),
    },
    [288] = {
        [sym__simple_statement] = STATE(202),
        [sym_print_statement] = STATE(5),
        [sym_expression_statement] = STATE(5),
        [sym_return_statement] = STATE(5),
        [sym_delete_statement] = STATE(5),
        [sym__suite] = STATE(289),
        [sym__expression] = STATE(22),
        [sym_binary_operator] = STATE(15),
        [sym_subscript] = STATE(15),
        [sym_call] = STATE(15),
        [sym_list] = STATE(15),
        [sym_list_comprehension] = STATE(15),
        [anon_sym_print] = ACTIONS(79),
        [anon_sym_return] = ACTIONS(81),
        [anon_sym_del] = ACTIONS(83),
        [sym_pass_statement] = ACTIONS(85),
        [sym_break_statement] = ACTIONS(85),
        [sym_continue_statement] = ACTIONS(85),
        [anon_sym_LBRACK] = ACTIONS(103),
        [sym_number] = ACTIONS(105),
        [sym_identifier] = ACTIONS(107),
        [sym_comment] = ACTIONS(69),
        [sym__indent] = ACTIONS(467),
    },
    [289] = {
        [sym_else_clause] = STATE(290),
        [anon_sym_print] = ACTIONS(679),
        [anon_sym_return] = ACTIONS(679),
        [anon_sym_del] = ACTIONS(679),
        [sym_pass_statement] = ACTIONS(679),
        [sym_break_statement] = ACTIONS(679),
        [sym_continue_statement] = ACTIONS(679),
        [anon_sym_if] = ACTIONS(679),
        [anon_sym_else] = ACTIONS(603),
        [anon_sym_for] = ACTIONS(679),
        [anon_sym_while] = ACTIONS(679),
        [anon_sym_try] = ACTIONS(679),
        [anon_sym_with] = ACTIONS(679),
        [anon_sym_def] = ACTIONS(679),
        [anon_sym_class] = ACTIONS(679),
        [anon_sym_AT] = ACTIONS(681),
        [anon_sym_LBRACK] = ACTIONS(681),
        [sym_number] = ACTIONS(679),
        [sym_identifier] = ACTIONS(683),
        [sym_comment] = ACTIONS(69),
        [sym__dedent] = ACTIONS(681),
    },
    [290] = {
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
        [sym_number] = ACTIONS(685),
        [sym_identifier] = ACTIONS(689),
        [sym_comment] = ACTIONS(69),
        [sym__dedent] = ACTIONS(687),
    },
    [291] = {
        [anon_sym_COLON] = ACTIONS(691),
        [anon_sym_LPAREN] = ACTIONS(197),
        [anon_sym_PLUS] = ACTIONS(199),
        [anon_sym_LBRACK] = ACTIONS(201),
        [sym_comment] = ACTIONS(69),
    },
    [292] = {
        [sym__simple_statement] = STATE(202),
        [sym_print_statement] = STATE(5),
        [sym_expression_statement] = STATE(5),
        [sym_return_statement] = STATE(5),
        [sym_delete_statement] = STATE(5),
        [sym__suite] = STATE(293),
        [sym__expression] = STATE(22),
        [sym_binary_operator] = STATE(15),
        [sym_subscript] = STATE(15),
        [sym_call] = STATE(15),
        [sym_list] = STATE(15),
        [sym_list_comprehension] = STATE(15),
        [anon_sym_print] = ACTIONS(79),
        [anon_sym_return] = ACTIONS(81),
        [anon_sym_del] = ACTIONS(83),
        [sym_pass_statement] = ACTIONS(85),
        [sym_break_statement] = ACTIONS(85),
        [sym_continue_statement] = ACTIONS(85),
        [anon_sym_LBRACK] = ACTIONS(103),
        [sym_number] = ACTIONS(105),
        [sym_identifier] = ACTIONS(107),
        [sym_comment] = ACTIONS(69),
        [sym__indent] = ACTIONS(467),
    },
    [293] = {
        [sym_elif_clause] = STATE(295),
        [sym_else_clause] = STATE(296),
        [aux_sym_if_statement_repeat1] = STATE(297),
        [anon_sym_print] = ACTIONS(693),
        [anon_sym_return] = ACTIONS(693),
        [anon_sym_del] = ACTIONS(693),
        [sym_pass_statement] = ACTIONS(693),
        [sym_break_statement] = ACTIONS(693),
        [sym_continue_statement] = ACTIONS(693),
        [anon_sym_if] = ACTIONS(693),
        [anon_sym_elif] = ACTIONS(695),
        [anon_sym_else] = ACTIONS(603),
        [anon_sym_for] = ACTIONS(693),
        [anon_sym_while] = ACTIONS(693),
        [anon_sym_try] = ACTIONS(693),
        [anon_sym_with] = ACTIONS(693),
        [anon_sym_def] = ACTIONS(693),
        [anon_sym_class] = ACTIONS(693),
        [anon_sym_AT] = ACTIONS(697),
        [anon_sym_LBRACK] = ACTIONS(697),
        [sym_number] = ACTIONS(693),
        [sym_identifier] = ACTIONS(699),
        [sym_comment] = ACTIONS(69),
        [sym__dedent] = ACTIONS(697),
    },
    [294] = {
        [sym__expression] = STATE(300),
        [sym_binary_operator] = STATE(34),
        [sym_subscript] = STATE(34),
        [sym_call] = STATE(34),
        [sym_list] = STATE(34),
        [sym_list_comprehension] = STATE(34),
        [anon_sym_LBRACK] = ACTIONS(111),
        [sym_number] = ACTIONS(113),
        [sym_identifier] = ACTIONS(113),
        [sym_comment] = ACTIONS(69),
    },
    [295] = {
        [anon_sym_print] = ACTIONS(701),
        [anon_sym_return] = ACTIONS(701),
        [anon_sym_del] = ACTIONS(701),
        [sym_pass_statement] = ACTIONS(701),
        [sym_break_statement] = ACTIONS(701),
        [sym_continue_statement] = ACTIONS(701),
        [anon_sym_if] = ACTIONS(701),
        [anon_sym_elif] = ACTIONS(701),
        [anon_sym_else] = ACTIONS(701),
        [anon_sym_for] = ACTIONS(701),
        [anon_sym_while] = ACTIONS(701),
        [anon_sym_try] = ACTIONS(701),
        [anon_sym_with] = ACTIONS(701),
        [anon_sym_def] = ACTIONS(701),
        [anon_sym_class] = ACTIONS(701),
        [anon_sym_AT] = ACTIONS(703),
        [anon_sym_LBRACK] = ACTIONS(703),
        [sym_number] = ACTIONS(701),
        [sym_identifier] = ACTIONS(705),
        [sym_comment] = ACTIONS(69),
        [sym__dedent] = ACTIONS(703),
    },
    [296] = {
        [anon_sym_print] = ACTIONS(707),
        [anon_sym_return] = ACTIONS(707),
        [anon_sym_del] = ACTIONS(707),
        [sym_pass_statement] = ACTIONS(707),
        [sym_break_statement] = ACTIONS(707),
        [sym_continue_statement] = ACTIONS(707),
        [anon_sym_if] = ACTIONS(707),
        [anon_sym_for] = ACTIONS(707),
        [anon_sym_while] = ACTIONS(707),
        [anon_sym_try] = ACTIONS(707),
        [anon_sym_with] = ACTIONS(707),
        [anon_sym_def] = ACTIONS(707),
        [anon_sym_class] = ACTIONS(707),
        [anon_sym_AT] = ACTIONS(709),
        [anon_sym_LBRACK] = ACTIONS(709),
        [sym_number] = ACTIONS(707),
        [sym_identifier] = ACTIONS(711),
        [sym_comment] = ACTIONS(69),
        [sym__dedent] = ACTIONS(709),
    },
    [297] = {
        [sym_elif_clause] = STATE(298),
        [sym_else_clause] = STATE(299),
        [anon_sym_print] = ACTIONS(707),
        [anon_sym_return] = ACTIONS(707),
        [anon_sym_del] = ACTIONS(707),
        [sym_pass_statement] = ACTIONS(707),
        [sym_break_statement] = ACTIONS(707),
        [sym_continue_statement] = ACTIONS(707),
        [anon_sym_if] = ACTIONS(707),
        [anon_sym_elif] = ACTIONS(695),
        [anon_sym_else] = ACTIONS(603),
        [anon_sym_for] = ACTIONS(707),
        [anon_sym_while] = ACTIONS(707),
        [anon_sym_try] = ACTIONS(707),
        [anon_sym_with] = ACTIONS(707),
        [anon_sym_def] = ACTIONS(707),
        [anon_sym_class] = ACTIONS(707),
        [anon_sym_AT] = ACTIONS(709),
        [anon_sym_LBRACK] = ACTIONS(709),
        [sym_number] = ACTIONS(707),
        [sym_identifier] = ACTIONS(711),
        [sym_comment] = ACTIONS(69),
        [sym__dedent] = ACTIONS(709),
    },
    [298] = {
        [anon_sym_print] = ACTIONS(713),
        [anon_sym_return] = ACTIONS(713),
        [anon_sym_del] = ACTIONS(713),
        [sym_pass_statement] = ACTIONS(713),
        [sym_break_statement] = ACTIONS(713),
        [sym_continue_statement] = ACTIONS(713),
        [anon_sym_if] = ACTIONS(713),
        [anon_sym_elif] = ACTIONS(713),
        [anon_sym_else] = ACTIONS(713),
        [anon_sym_for] = ACTIONS(713),
        [anon_sym_while] = ACTIONS(713),
        [anon_sym_try] = ACTIONS(713),
        [anon_sym_with] = ACTIONS(713),
        [anon_sym_def] = ACTIONS(713),
        [anon_sym_class] = ACTIONS(713),
        [anon_sym_AT] = ACTIONS(715),
        [anon_sym_LBRACK] = ACTIONS(715),
        [sym_number] = ACTIONS(713),
        [sym_identifier] = ACTIONS(717),
        [sym_comment] = ACTIONS(69),
        [sym__dedent] = ACTIONS(715),
    },
    [299] = {
        [anon_sym_print] = ACTIONS(719),
        [anon_sym_return] = ACTIONS(719),
        [anon_sym_del] = ACTIONS(719),
        [sym_pass_statement] = ACTIONS(719),
        [sym_break_statement] = ACTIONS(719),
        [sym_continue_statement] = ACTIONS(719),
        [anon_sym_if] = ACTIONS(719),
        [anon_sym_for] = ACTIONS(719),
        [anon_sym_while] = ACTIONS(719),
        [anon_sym_try] = ACTIONS(719),
        [anon_sym_with] = ACTIONS(719),
        [anon_sym_def] = ACTIONS(719),
        [anon_sym_class] = ACTIONS(719),
        [anon_sym_AT] = ACTIONS(721),
        [anon_sym_LBRACK] = ACTIONS(721),
        [sym_number] = ACTIONS(719),
        [sym_identifier] = ACTIONS(723),
        [sym_comment] = ACTIONS(69),
        [sym__dedent] = ACTIONS(721),
    },
    [300] = {
        [anon_sym_COLON] = ACTIONS(725),
        [anon_sym_LPAREN] = ACTIONS(197),
        [anon_sym_PLUS] = ACTIONS(199),
        [anon_sym_LBRACK] = ACTIONS(201),
        [sym_comment] = ACTIONS(69),
    },
    [301] = {
        [sym__simple_statement] = STATE(202),
        [sym_print_statement] = STATE(5),
        [sym_expression_statement] = STATE(5),
        [sym_return_statement] = STATE(5),
        [sym_delete_statement] = STATE(5),
        [sym__suite] = STATE(302),
        [sym__expression] = STATE(22),
        [sym_binary_operator] = STATE(15),
        [sym_subscript] = STATE(15),
        [sym_call] = STATE(15),
        [sym_list] = STATE(15),
        [sym_list_comprehension] = STATE(15),
        [anon_sym_print] = ACTIONS(79),
        [anon_sym_return] = ACTIONS(81),
        [anon_sym_del] = ACTIONS(83),
        [sym_pass_statement] = ACTIONS(85),
        [sym_break_statement] = ACTIONS(85),
        [sym_continue_statement] = ACTIONS(85),
        [anon_sym_LBRACK] = ACTIONS(103),
        [sym_number] = ACTIONS(105),
        [sym_identifier] = ACTIONS(107),
        [sym_comment] = ACTIONS(69),
        [sym__indent] = ACTIONS(467),
    },
    [302] = {
        [anon_sym_print] = ACTIONS(727),
        [anon_sym_return] = ACTIONS(727),
        [anon_sym_del] = ACTIONS(727),
        [sym_pass_statement] = ACTIONS(727),
        [sym_break_statement] = ACTIONS(727),
        [sym_continue_statement] = ACTIONS(727),
        [anon_sym_if] = ACTIONS(727),
        [anon_sym_elif] = ACTIONS(727),
        [anon_sym_else] = ACTIONS(727),
        [anon_sym_for] = ACTIONS(727),
        [anon_sym_while] = ACTIONS(727),
        [anon_sym_try] = ACTIONS(727),
        [anon_sym_with] = ACTIONS(727),
        [anon_sym_def] = ACTIONS(727),
        [anon_sym_class] = ACTIONS(727),
        [anon_sym_AT] = ACTIONS(729),
        [anon_sym_LBRACK] = ACTIONS(729),
        [sym_number] = ACTIONS(727),
        [sym_identifier] = ACTIONS(731),
        [sym_comment] = ACTIONS(69),
        [sym__dedent] = ACTIONS(729),
    },
    [303] = {
        [ts_builtin_sym_end] = ACTIONS(479),
        [anon_sym_SEMI] = ACTIONS(479),
        [anon_sym_print] = ACTIONS(477),
        [anon_sym_return] = ACTIONS(477),
        [anon_sym_del] = ACTIONS(477),
        [sym_pass_statement] = ACTIONS(477),
        [sym_break_statement] = ACTIONS(477),
        [sym_continue_statement] = ACTIONS(477),
        [anon_sym_if] = ACTIONS(477),
        [anon_sym_for] = ACTIONS(477),
        [anon_sym_while] = ACTIONS(477),
        [anon_sym_try] = ACTIONS(477),
        [anon_sym_with] = ACTIONS(477),
        [anon_sym_def] = ACTIONS(477),
        [anon_sym_class] = ACTIONS(477),
        [anon_sym_AT] = ACTIONS(479),
        [anon_sym_LBRACK] = ACTIONS(479),
        [sym_number] = ACTIONS(477),
        [sym_identifier] = ACTIONS(481),
        [sym_comment] = ACTIONS(69),
        [sym__newline] = ACTIONS(479),
    },
    [304] = {
        [sym_parameters] = STATE(305),
        [anon_sym_LPAREN] = ACTIONS(483),
        [sym_comment] = ACTIONS(69),
    },
    [305] = {
        [anon_sym_COLON] = ACTIONS(733),
        [sym_comment] = ACTIONS(69),
    },
    [306] = {
        [sym__simple_statement] = STATE(175),
        [sym_print_statement] = STATE(5),
        [sym_expression_statement] = STATE(5),
        [sym_return_statement] = STATE(5),
        [sym_delete_statement] = STATE(5),
        [sym__suite] = STATE(307),
        [sym__expression] = STATE(22),
        [sym_binary_operator] = STATE(15),
        [sym_subscript] = STATE(15),
        [sym_call] = STATE(15),
        [sym_list] = STATE(15),
        [sym_list_comprehension] = STATE(15),
        [anon_sym_print] = ACTIONS(79),
        [anon_sym_return] = ACTIONS(81),
        [anon_sym_del] = ACTIONS(83),
        [sym_pass_statement] = ACTIONS(85),
        [sym_break_statement] = ACTIONS(85),
        [sym_continue_statement] = ACTIONS(85),
        [anon_sym_LBRACK] = ACTIONS(103),
        [sym_number] = ACTIONS(105),
        [sym_identifier] = ACTIONS(107),
        [sym_comment] = ACTIONS(69),
        [sym__indent] = ACTIONS(409),
    },
    [307] = {
        [ts_builtin_sym_end] = ACTIONS(495),
        [anon_sym_SEMI] = ACTIONS(495),
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
        [anon_sym_AT] = ACTIONS(495),
        [anon_sym_LBRACK] = ACTIONS(495),
        [sym_number] = ACTIONS(493),
        [sym_identifier] = ACTIONS(497),
        [sym_comment] = ACTIONS(69),
        [sym__newline] = ACTIONS(495),
    },
    [308] = {
        [aux_sym_with_statement_repeat1] = STATE(310),
        [anon_sym_COMMA] = ACTIONS(551),
        [anon_sym_COLON] = ACTIONS(735),
        [sym_comment] = ACTIONS(69),
    },
    [309] = {
        [sym__simple_statement] = STATE(175),
        [sym_print_statement] = STATE(5),
        [sym_expression_statement] = STATE(5),
        [sym_return_statement] = STATE(5),
        [sym_delete_statement] = STATE(5),
        [sym__suite] = STATE(313),
        [sym__expression] = STATE(22),
        [sym_binary_operator] = STATE(15),
        [sym_subscript] = STATE(15),
        [sym_call] = STATE(15),
        [sym_list] = STATE(15),
        [sym_list_comprehension] = STATE(15),
        [anon_sym_print] = ACTIONS(79),
        [anon_sym_return] = ACTIONS(81),
        [anon_sym_del] = ACTIONS(83),
        [sym_pass_statement] = ACTIONS(85),
        [sym_break_statement] = ACTIONS(85),
        [sym_continue_statement] = ACTIONS(85),
        [anon_sym_LBRACK] = ACTIONS(103),
        [sym_number] = ACTIONS(105),
        [sym_identifier] = ACTIONS(107),
        [sym_comment] = ACTIONS(69),
        [sym__indent] = ACTIONS(409),
    },
    [310] = {
        [anon_sym_COMMA] = ACTIONS(561),
        [anon_sym_COLON] = ACTIONS(737),
        [sym_comment] = ACTIONS(69),
    },
    [311] = {
        [sym__simple_statement] = STATE(175),
        [sym_print_statement] = STATE(5),
        [sym_expression_statement] = STATE(5),
        [sym_return_statement] = STATE(5),
        [sym_delete_statement] = STATE(5),
        [sym__suite] = STATE(312),
        [sym__expression] = STATE(22),
        [sym_binary_operator] = STATE(15),
        [sym_subscript] = STATE(15),
        [sym_call] = STATE(15),
        [sym_list] = STATE(15),
        [sym_list_comprehension] = STATE(15),
        [anon_sym_print] = ACTIONS(79),
        [anon_sym_return] = ACTIONS(81),
        [anon_sym_del] = ACTIONS(83),
        [sym_pass_statement] = ACTIONS(85),
        [sym_break_statement] = ACTIONS(85),
        [sym_continue_statement] = ACTIONS(85),
        [anon_sym_LBRACK] = ACTIONS(103),
        [sym_number] = ACTIONS(105),
        [sym_identifier] = ACTIONS(107),
        [sym_comment] = ACTIONS(69),
        [sym__indent] = ACTIONS(409),
    },
    [312] = {
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
        [sym_number] = ACTIONS(565),
        [sym_identifier] = ACTIONS(569),
        [sym_comment] = ACTIONS(69),
        [sym__newline] = ACTIONS(567),
    },
    [313] = {
        [ts_builtin_sym_end] = ACTIONS(575),
        [anon_sym_SEMI] = ACTIONS(575),
        [anon_sym_print] = ACTIONS(573),
        [anon_sym_return] = ACTIONS(573),
        [anon_sym_del] = ACTIONS(573),
        [sym_pass_statement] = ACTIONS(573),
        [sym_break_statement] = ACTIONS(573),
        [sym_continue_statement] = ACTIONS(573),
        [anon_sym_if] = ACTIONS(573),
        [anon_sym_for] = ACTIONS(573),
        [anon_sym_while] = ACTIONS(573),
        [anon_sym_try] = ACTIONS(573),
        [anon_sym_with] = ACTIONS(573),
        [anon_sym_def] = ACTIONS(573),
        [anon_sym_class] = ACTIONS(573),
        [anon_sym_AT] = ACTIONS(575),
        [anon_sym_LBRACK] = ACTIONS(575),
        [sym_number] = ACTIONS(573),
        [sym_identifier] = ACTIONS(577),
        [sym_comment] = ACTIONS(69),
        [sym__newline] = ACTIONS(575),
    },
    [314] = {
        [sym__simple_statement] = STATE(255),
        [sym_print_statement] = STATE(5),
        [sym_expression_statement] = STATE(5),
        [sym_return_statement] = STATE(5),
        [sym_delete_statement] = STATE(5),
        [sym__suite] = STATE(315),
        [sym__expression] = STATE(22),
        [sym_binary_operator] = STATE(15),
        [sym_subscript] = STATE(15),
        [sym_call] = STATE(15),
        [sym_list] = STATE(15),
        [sym_list_comprehension] = STATE(15),
        [anon_sym_print] = ACTIONS(79),
        [anon_sym_return] = ACTIONS(81),
        [anon_sym_del] = ACTIONS(83),
        [sym_pass_statement] = ACTIONS(85),
        [sym_break_statement] = ACTIONS(85),
        [sym_continue_statement] = ACTIONS(85),
        [anon_sym_LBRACK] = ACTIONS(103),
        [sym_number] = ACTIONS(105),
        [sym_identifier] = ACTIONS(107),
        [sym_comment] = ACTIONS(69),
        [sym__indent] = ACTIONS(581),
    },
    [315] = {
        [sym_except_clause] = STATE(318),
        [sym_finally_clause] = STATE(319),
        [aux_sym_try_statement_repeat1] = STATE(320),
        [anon_sym_except] = ACTIONS(739),
        [anon_sym_finally] = ACTIONS(741),
        [sym_comment] = ACTIONS(69),
    },
    [316] = {
        [sym__expression] = STATE(330),
        [sym_binary_operator] = STATE(34),
        [sym_subscript] = STATE(34),
        [sym_call] = STATE(34),
        [sym_list] = STATE(34),
        [sym_list_comprehension] = STATE(34),
        [anon_sym_LBRACK] = ACTIONS(111),
        [sym_number] = ACTIONS(113),
        [sym_identifier] = ACTIONS(113),
        [sym_comment] = ACTIONS(69),
    },
    [317] = {
        [anon_sym_COLON] = ACTIONS(743),
        [sym_comment] = ACTIONS(69),
    },
    [318] = {
        [ts_builtin_sym_end] = ACTIONS(593),
        [anon_sym_SEMI] = ACTIONS(593),
        [anon_sym_print] = ACTIONS(591),
        [anon_sym_return] = ACTIONS(591),
        [anon_sym_del] = ACTIONS(591),
        [sym_pass_statement] = ACTIONS(591),
        [sym_break_statement] = ACTIONS(591),
        [sym_continue_statement] = ACTIONS(591),
        [anon_sym_if] = ACTIONS(591),
        [anon_sym_else] = ACTIONS(591),
        [anon_sym_for] = ACTIONS(591),
        [anon_sym_while] = ACTIONS(591),
        [anon_sym_try] = ACTIONS(591),
        [anon_sym_except] = ACTIONS(591),
        [anon_sym_finally] = ACTIONS(591),
        [anon_sym_with] = ACTIONS(591),
        [anon_sym_def] = ACTIONS(591),
        [anon_sym_class] = ACTIONS(591),
        [anon_sym_AT] = ACTIONS(593),
        [anon_sym_LBRACK] = ACTIONS(593),
        [sym_number] = ACTIONS(591),
        [sym_identifier] = ACTIONS(595),
        [sym_comment] = ACTIONS(69),
        [sym__newline] = ACTIONS(593),
    },
    [319] = {
        [ts_builtin_sym_end] = ACTIONS(599),
        [anon_sym_SEMI] = ACTIONS(599),
        [anon_sym_print] = ACTIONS(597),
        [anon_sym_return] = ACTIONS(597),
        [anon_sym_del] = ACTIONS(597),
        [sym_pass_statement] = ACTIONS(597),
        [sym_break_statement] = ACTIONS(597),
        [sym_continue_statement] = ACTIONS(597),
        [anon_sym_if] = ACTIONS(597),
        [anon_sym_for] = ACTIONS(597),
        [anon_sym_while] = ACTIONS(597),
        [anon_sym_try] = ACTIONS(597),
        [anon_sym_with] = ACTIONS(597),
        [anon_sym_def] = ACTIONS(597),
        [anon_sym_class] = ACTIONS(597),
        [anon_sym_AT] = ACTIONS(599),
        [anon_sym_LBRACK] = ACTIONS(599),
        [sym_number] = ACTIONS(597),
        [sym_identifier] = ACTIONS(601),
        [sym_comment] = ACTIONS(69),
        [sym__newline] = ACTIONS(599),
    },
    [320] = {
        [sym_else_clause] = STATE(322),
        [sym_except_clause] = STATE(323),
        [sym_finally_clause] = STATE(324),
        [ts_builtin_sym_end] = ACTIONS(599),
        [anon_sym_SEMI] = ACTIONS(599),
        [anon_sym_print] = ACTIONS(597),
        [anon_sym_return] = ACTIONS(597),
        [anon_sym_del] = ACTIONS(597),
        [sym_pass_statement] = ACTIONS(597),
        [sym_break_statement] = ACTIONS(597),
        [sym_continue_statement] = ACTIONS(597),
        [anon_sym_if] = ACTIONS(597),
        [anon_sym_else] = ACTIONS(745),
        [anon_sym_for] = ACTIONS(597),
        [anon_sym_while] = ACTIONS(597),
        [anon_sym_try] = ACTIONS(597),
        [anon_sym_except] = ACTIONS(747),
        [anon_sym_finally] = ACTIONS(749),
        [anon_sym_with] = ACTIONS(597),
        [anon_sym_def] = ACTIONS(597),
        [anon_sym_class] = ACTIONS(597),
        [anon_sym_AT] = ACTIONS(599),
        [anon_sym_LBRACK] = ACTIONS(599),
        [sym_number] = ACTIONS(597),
        [sym_identifier] = ACTIONS(601),
        [sym_comment] = ACTIONS(69),
        [sym__newline] = ACTIONS(599),
    },
    [321] = {
        [anon_sym_COLON] = ACTIONS(751),
        [sym_comment] = ACTIONS(69),
    },
    [322] = {
        [sym_finally_clause] = STATE(325),
        [ts_builtin_sym_end] = ACTIONS(613),
        [anon_sym_SEMI] = ACTIONS(613),
        [anon_sym_print] = ACTIONS(611),
        [anon_sym_return] = ACTIONS(611),
        [anon_sym_del] = ACTIONS(611),
        [sym_pass_statement] = ACTIONS(611),
        [sym_break_statement] = ACTIONS(611),
        [sym_continue_statement] = ACTIONS(611),
        [anon_sym_if] = ACTIONS(611),
        [anon_sym_for] = ACTIONS(611),
        [anon_sym_while] = ACTIONS(611),
        [anon_sym_try] = ACTIONS(611),
        [anon_sym_finally] = ACTIONS(749),
        [anon_sym_with] = ACTIONS(611),
        [anon_sym_def] = ACTIONS(611),
        [anon_sym_class] = ACTIONS(611),
        [anon_sym_AT] = ACTIONS(613),
        [anon_sym_LBRACK] = ACTIONS(613),
        [sym_number] = ACTIONS(611),
        [sym_identifier] = ACTIONS(615),
        [sym_comment] = ACTIONS(69),
        [sym__newline] = ACTIONS(613),
    },
    [323] = {
        [ts_builtin_sym_end] = ACTIONS(619),
        [anon_sym_SEMI] = ACTIONS(619),
        [anon_sym_print] = ACTIONS(617),
        [anon_sym_return] = ACTIONS(617),
        [anon_sym_del] = ACTIONS(617),
        [sym_pass_statement] = ACTIONS(617),
        [sym_break_statement] = ACTIONS(617),
        [sym_continue_statement] = ACTIONS(617),
        [anon_sym_if] = ACTIONS(617),
        [anon_sym_else] = ACTIONS(617),
        [anon_sym_for] = ACTIONS(617),
        [anon_sym_while] = ACTIONS(617),
        [anon_sym_try] = ACTIONS(617),
        [anon_sym_except] = ACTIONS(617),
        [anon_sym_finally] = ACTIONS(617),
        [anon_sym_with] = ACTIONS(617),
        [anon_sym_def] = ACTIONS(617),
        [anon_sym_class] = ACTIONS(617),
        [anon_sym_AT] = ACTIONS(619),
        [anon_sym_LBRACK] = ACTIONS(619),
        [sym_number] = ACTIONS(617),
        [sym_identifier] = ACTIONS(621),
        [sym_comment] = ACTIONS(69),
        [sym__newline] = ACTIONS(619),
    },
    [324] = {
        [ts_builtin_sym_end] = ACTIONS(613),
        [anon_sym_SEMI] = ACTIONS(613),
        [anon_sym_print] = ACTIONS(611),
        [anon_sym_return] = ACTIONS(611),
        [anon_sym_del] = ACTIONS(611),
        [sym_pass_statement] = ACTIONS(611),
        [sym_break_statement] = ACTIONS(611),
        [sym_continue_statement] = ACTIONS(611),
        [anon_sym_if] = ACTIONS(611),
        [anon_sym_for] = ACTIONS(611),
        [anon_sym_while] = ACTIONS(611),
        [anon_sym_try] = ACTIONS(611),
        [anon_sym_with] = ACTIONS(611),
        [anon_sym_def] = ACTIONS(611),
        [anon_sym_class] = ACTIONS(611),
        [anon_sym_AT] = ACTIONS(613),
        [anon_sym_LBRACK] = ACTIONS(613),
        [sym_number] = ACTIONS(611),
        [sym_identifier] = ACTIONS(615),
        [sym_comment] = ACTIONS(69),
        [sym__newline] = ACTIONS(613),
    },
    [325] = {
        [ts_builtin_sym_end] = ACTIONS(625),
        [anon_sym_SEMI] = ACTIONS(625),
        [anon_sym_print] = ACTIONS(623),
        [anon_sym_return] = ACTIONS(623),
        [anon_sym_del] = ACTIONS(623),
        [sym_pass_statement] = ACTIONS(623),
        [sym_break_statement] = ACTIONS(623),
        [sym_continue_statement] = ACTIONS(623),
        [anon_sym_if] = ACTIONS(623),
        [anon_sym_for] = ACTIONS(623),
        [anon_sym_while] = ACTIONS(623),
        [anon_sym_try] = ACTIONS(623),
        [anon_sym_with] = ACTIONS(623),
        [anon_sym_def] = ACTIONS(623),
        [anon_sym_class] = ACTIONS(623),
        [anon_sym_AT] = ACTIONS(625),
        [anon_sym_LBRACK] = ACTIONS(625),
        [sym_number] = ACTIONS(623),
        [sym_identifier] = ACTIONS(627),
        [sym_comment] = ACTIONS(69),
        [sym__newline] = ACTIONS(625),
    },
    [326] = {
        [sym__simple_statement] = STATE(175),
        [sym_print_statement] = STATE(5),
        [sym_expression_statement] = STATE(5),
        [sym_return_statement] = STATE(5),
        [sym_delete_statement] = STATE(5),
        [sym__suite] = STATE(327),
        [sym__expression] = STATE(22),
        [sym_binary_operator] = STATE(15),
        [sym_subscript] = STATE(15),
        [sym_call] = STATE(15),
        [sym_list] = STATE(15),
        [sym_list_comprehension] = STATE(15),
        [anon_sym_print] = ACTIONS(79),
        [anon_sym_return] = ACTIONS(81),
        [anon_sym_del] = ACTIONS(83),
        [sym_pass_statement] = ACTIONS(85),
        [sym_break_statement] = ACTIONS(85),
        [sym_continue_statement] = ACTIONS(85),
        [anon_sym_LBRACK] = ACTIONS(103),
        [sym_number] = ACTIONS(105),
        [sym_identifier] = ACTIONS(107),
        [sym_comment] = ACTIONS(69),
        [sym__indent] = ACTIONS(409),
    },
    [327] = {
        [ts_builtin_sym_end] = ACTIONS(631),
        [anon_sym_SEMI] = ACTIONS(631),
        [anon_sym_print] = ACTIONS(629),
        [anon_sym_return] = ACTIONS(629),
        [anon_sym_del] = ACTIONS(629),
        [sym_pass_statement] = ACTIONS(629),
        [sym_break_statement] = ACTIONS(629),
        [sym_continue_statement] = ACTIONS(629),
        [anon_sym_if] = ACTIONS(629),
        [anon_sym_for] = ACTIONS(629),
        [anon_sym_while] = ACTIONS(629),
        [anon_sym_try] = ACTIONS(629),
        [anon_sym_finally] = ACTIONS(629),
        [anon_sym_with] = ACTIONS(629),
        [anon_sym_def] = ACTIONS(629),
        [anon_sym_class] = ACTIONS(629),
        [anon_sym_AT] = ACTIONS(631),
        [anon_sym_LBRACK] = ACTIONS(631),
        [sym_number] = ACTIONS(629),
        [sym_identifier] = ACTIONS(633),
        [sym_comment] = ACTIONS(69),
        [sym__newline] = ACTIONS(631),
    },
    [328] = {
        [sym__simple_statement] = STATE(175),
        [sym_print_statement] = STATE(5),
        [sym_expression_statement] = STATE(5),
        [sym_return_statement] = STATE(5),
        [sym_delete_statement] = STATE(5),
        [sym__suite] = STATE(329),
        [sym__expression] = STATE(22),
        [sym_binary_operator] = STATE(15),
        [sym_subscript] = STATE(15),
        [sym_call] = STATE(15),
        [sym_list] = STATE(15),
        [sym_list_comprehension] = STATE(15),
        [anon_sym_print] = ACTIONS(79),
        [anon_sym_return] = ACTIONS(81),
        [anon_sym_del] = ACTIONS(83),
        [sym_pass_statement] = ACTIONS(85),
        [sym_break_statement] = ACTIONS(85),
        [sym_continue_statement] = ACTIONS(85),
        [anon_sym_LBRACK] = ACTIONS(103),
        [sym_number] = ACTIONS(105),
        [sym_identifier] = ACTIONS(107),
        [sym_comment] = ACTIONS(69),
        [sym__indent] = ACTIONS(409),
    },
    [329] = {
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
        [sym_number] = ACTIONS(635),
        [sym_identifier] = ACTIONS(639),
        [sym_comment] = ACTIONS(69),
        [sym__newline] = ACTIONS(637),
    },
    [330] = {
        [anon_sym_COMMA] = ACTIONS(753),
        [anon_sym_COLON] = ACTIONS(755),
        [anon_sym_as] = ACTIONS(753),
        [anon_sym_LPAREN] = ACTIONS(197),
        [anon_sym_PLUS] = ACTIONS(199),
        [anon_sym_LBRACK] = ACTIONS(201),
        [sym_comment] = ACTIONS(69),
    },
    [331] = {
        [sym__expression] = STATE(333),
        [sym_binary_operator] = STATE(34),
        [sym_subscript] = STATE(34),
        [sym_call] = STATE(34),
        [sym_list] = STATE(34),
        [sym_list_comprehension] = STATE(34),
        [anon_sym_LBRACK] = ACTIONS(111),
        [sym_number] = ACTIONS(113),
        [sym_identifier] = ACTIONS(113),
        [sym_comment] = ACTIONS(69),
    },
    [332] = {
        [sym__simple_statement] = STATE(175),
        [sym_print_statement] = STATE(5),
        [sym_expression_statement] = STATE(5),
        [sym_return_statement] = STATE(5),
        [sym_delete_statement] = STATE(5),
        [sym__suite] = STATE(336),
        [sym__expression] = STATE(22),
        [sym_binary_operator] = STATE(15),
        [sym_subscript] = STATE(15),
        [sym_call] = STATE(15),
        [sym_list] = STATE(15),
        [sym_list_comprehension] = STATE(15),
        [anon_sym_print] = ACTIONS(79),
        [anon_sym_return] = ACTIONS(81),
        [anon_sym_del] = ACTIONS(83),
        [sym_pass_statement] = ACTIONS(85),
        [sym_break_statement] = ACTIONS(85),
        [sym_continue_statement] = ACTIONS(85),
        [anon_sym_LBRACK] = ACTIONS(103),
        [sym_number] = ACTIONS(105),
        [sym_identifier] = ACTIONS(107),
        [sym_comment] = ACTIONS(69),
        [sym__indent] = ACTIONS(409),
    },
    [333] = {
        [anon_sym_COLON] = ACTIONS(757),
        [anon_sym_LPAREN] = ACTIONS(197),
        [anon_sym_PLUS] = ACTIONS(199),
        [anon_sym_LBRACK] = ACTIONS(201),
        [sym_comment] = ACTIONS(69),
    },
    [334] = {
        [sym__simple_statement] = STATE(175),
        [sym_print_statement] = STATE(5),
        [sym_expression_statement] = STATE(5),
        [sym_return_statement] = STATE(5),
        [sym_delete_statement] = STATE(5),
        [sym__suite] = STATE(335),
        [sym__expression] = STATE(22),
        [sym_binary_operator] = STATE(15),
        [sym_subscript] = STATE(15),
        [sym_call] = STATE(15),
        [sym_list] = STATE(15),
        [sym_list_comprehension] = STATE(15),
        [anon_sym_print] = ACTIONS(79),
        [anon_sym_return] = ACTIONS(81),
        [anon_sym_del] = ACTIONS(83),
        [sym_pass_statement] = ACTIONS(85),
        [sym_break_statement] = ACTIONS(85),
        [sym_continue_statement] = ACTIONS(85),
        [anon_sym_LBRACK] = ACTIONS(103),
        [sym_number] = ACTIONS(105),
        [sym_identifier] = ACTIONS(107),
        [sym_comment] = ACTIONS(69),
        [sym__indent] = ACTIONS(409),
    },
    [335] = {
        [ts_builtin_sym_end] = ACTIONS(649),
        [anon_sym_SEMI] = ACTIONS(649),
        [anon_sym_print] = ACTIONS(647),
        [anon_sym_return] = ACTIONS(647),
        [anon_sym_del] = ACTIONS(647),
        [sym_pass_statement] = ACTIONS(647),
        [sym_break_statement] = ACTIONS(647),
        [sym_continue_statement] = ACTIONS(647),
        [anon_sym_if] = ACTIONS(647),
        [anon_sym_else] = ACTIONS(647),
        [anon_sym_for] = ACTIONS(647),
        [anon_sym_while] = ACTIONS(647),
        [anon_sym_try] = ACTIONS(647),
        [anon_sym_except] = ACTIONS(647),
        [anon_sym_finally] = ACTIONS(647),
        [anon_sym_with] = ACTIONS(647),
        [anon_sym_def] = ACTIONS(647),
        [anon_sym_class] = ACTIONS(647),
        [anon_sym_AT] = ACTIONS(649),
        [anon_sym_LBRACK] = ACTIONS(649),
        [sym_number] = ACTIONS(647),
        [sym_identifier] = ACTIONS(651),
        [sym_comment] = ACTIONS(69),
        [sym__newline] = ACTIONS(649),
    },
    [336] = {
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
        [sym_number] = ACTIONS(653),
        [sym_identifier] = ACTIONS(657),
        [sym_comment] = ACTIONS(69),
        [sym__newline] = ACTIONS(655),
    },
    [337] = {
        [anon_sym_COLON] = ACTIONS(759),
        [anon_sym_LPAREN] = ACTIONS(197),
        [anon_sym_PLUS] = ACTIONS(199),
        [anon_sym_LBRACK] = ACTIONS(201),
        [sym_comment] = ACTIONS(69),
    },
    [338] = {
        [sym__simple_statement] = STATE(175),
        [sym_print_statement] = STATE(5),
        [sym_expression_statement] = STATE(5),
        [sym_return_statement] = STATE(5),
        [sym_delete_statement] = STATE(5),
        [sym__suite] = STATE(339),
        [sym__expression] = STATE(22),
        [sym_binary_operator] = STATE(15),
        [sym_subscript] = STATE(15),
        [sym_call] = STATE(15),
        [sym_list] = STATE(15),
        [sym_list_comprehension] = STATE(15),
        [anon_sym_print] = ACTIONS(79),
        [anon_sym_return] = ACTIONS(81),
        [anon_sym_del] = ACTIONS(83),
        [sym_pass_statement] = ACTIONS(85),
        [sym_break_statement] = ACTIONS(85),
        [sym_continue_statement] = ACTIONS(85),
        [anon_sym_LBRACK] = ACTIONS(103),
        [sym_number] = ACTIONS(105),
        [sym_identifier] = ACTIONS(107),
        [sym_comment] = ACTIONS(69),
        [sym__indent] = ACTIONS(409),
    },
    [339] = {
        [sym_else_clause] = STATE(340),
        [ts_builtin_sym_end] = ACTIONS(665),
        [anon_sym_SEMI] = ACTIONS(665),
        [anon_sym_print] = ACTIONS(663),
        [anon_sym_return] = ACTIONS(663),
        [anon_sym_del] = ACTIONS(663),
        [sym_pass_statement] = ACTIONS(663),
        [sym_break_statement] = ACTIONS(663),
        [sym_continue_statement] = ACTIONS(663),
        [anon_sym_if] = ACTIONS(663),
        [anon_sym_else] = ACTIONS(745),
        [anon_sym_for] = ACTIONS(663),
        [anon_sym_while] = ACTIONS(663),
        [anon_sym_try] = ACTIONS(663),
        [anon_sym_with] = ACTIONS(663),
        [anon_sym_def] = ACTIONS(663),
        [anon_sym_class] = ACTIONS(663),
        [anon_sym_AT] = ACTIONS(665),
        [anon_sym_LBRACK] = ACTIONS(665),
        [sym_number] = ACTIONS(663),
        [sym_identifier] = ACTIONS(667),
        [sym_comment] = ACTIONS(69),
        [sym__newline] = ACTIONS(665),
    },
    [340] = {
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
        [sym_number] = ACTIONS(669),
        [sym_identifier] = ACTIONS(673),
        [sym_comment] = ACTIONS(69),
        [sym__newline] = ACTIONS(671),
    },
    [341] = {
        [anon_sym_in] = ACTIONS(761),
        [sym_comment] = ACTIONS(69),
    },
    [342] = {
        [sym_expression_list] = STATE(343),
        [sym__expression] = STATE(104),
        [sym_binary_operator] = STATE(34),
        [sym_subscript] = STATE(34),
        [sym_call] = STATE(34),
        [sym_list] = STATE(34),
        [sym_list_comprehension] = STATE(34),
        [anon_sym_LBRACK] = ACTIONS(111),
        [sym_number] = ACTIONS(113),
        [sym_identifier] = ACTIONS(113),
        [sym_comment] = ACTIONS(69),
    },
    [343] = {
        [anon_sym_COLON] = ACTIONS(763),
        [sym_comment] = ACTIONS(69),
    },
    [344] = {
        [sym__simple_statement] = STATE(175),
        [sym_print_statement] = STATE(5),
        [sym_expression_statement] = STATE(5),
        [sym_return_statement] = STATE(5),
        [sym_delete_statement] = STATE(5),
        [sym__suite] = STATE(345),
        [sym__expression] = STATE(22),
        [sym_binary_operator] = STATE(15),
        [sym_subscript] = STATE(15),
        [sym_call] = STATE(15),
        [sym_list] = STATE(15),
        [sym_list_comprehension] = STATE(15),
        [anon_sym_print] = ACTIONS(79),
        [anon_sym_return] = ACTIONS(81),
        [anon_sym_del] = ACTIONS(83),
        [sym_pass_statement] = ACTIONS(85),
        [sym_break_statement] = ACTIONS(85),
        [sym_continue_statement] = ACTIONS(85),
        [anon_sym_LBRACK] = ACTIONS(103),
        [sym_number] = ACTIONS(105),
        [sym_identifier] = ACTIONS(107),
        [sym_comment] = ACTIONS(69),
        [sym__indent] = ACTIONS(409),
    },
    [345] = {
        [sym_else_clause] = STATE(346),
        [ts_builtin_sym_end] = ACTIONS(681),
        [anon_sym_SEMI] = ACTIONS(681),
        [anon_sym_print] = ACTIONS(679),
        [anon_sym_return] = ACTIONS(679),
        [anon_sym_del] = ACTIONS(679),
        [sym_pass_statement] = ACTIONS(679),
        [sym_break_statement] = ACTIONS(679),
        [sym_continue_statement] = ACTIONS(679),
        [anon_sym_if] = ACTIONS(679),
        [anon_sym_else] = ACTIONS(745),
        [anon_sym_for] = ACTIONS(679),
        [anon_sym_while] = ACTIONS(679),
        [anon_sym_try] = ACTIONS(679),
        [anon_sym_with] = ACTIONS(679),
        [anon_sym_def] = ACTIONS(679),
        [anon_sym_class] = ACTIONS(679),
        [anon_sym_AT] = ACTIONS(681),
        [anon_sym_LBRACK] = ACTIONS(681),
        [sym_number] = ACTIONS(679),
        [sym_identifier] = ACTIONS(683),
        [sym_comment] = ACTIONS(69),
        [sym__newline] = ACTIONS(681),
    },
    [346] = {
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
        [sym_number] = ACTIONS(685),
        [sym_identifier] = ACTIONS(689),
        [sym_comment] = ACTIONS(69),
        [sym__newline] = ACTIONS(687),
    },
    [347] = {
        [anon_sym_COLON] = ACTIONS(765),
        [anon_sym_LPAREN] = ACTIONS(197),
        [anon_sym_PLUS] = ACTIONS(199),
        [anon_sym_LBRACK] = ACTIONS(201),
        [sym_comment] = ACTIONS(69),
    },
    [348] = {
        [sym__simple_statement] = STATE(175),
        [sym_print_statement] = STATE(5),
        [sym_expression_statement] = STATE(5),
        [sym_return_statement] = STATE(5),
        [sym_delete_statement] = STATE(5),
        [sym__suite] = STATE(349),
        [sym__expression] = STATE(22),
        [sym_binary_operator] = STATE(15),
        [sym_subscript] = STATE(15),
        [sym_call] = STATE(15),
        [sym_list] = STATE(15),
        [sym_list_comprehension] = STATE(15),
        [anon_sym_print] = ACTIONS(79),
        [anon_sym_return] = ACTIONS(81),
        [anon_sym_del] = ACTIONS(83),
        [sym_pass_statement] = ACTIONS(85),
        [sym_break_statement] = ACTIONS(85),
        [sym_continue_statement] = ACTIONS(85),
        [anon_sym_LBRACK] = ACTIONS(103),
        [sym_number] = ACTIONS(105),
        [sym_identifier] = ACTIONS(107),
        [sym_comment] = ACTIONS(69),
        [sym__indent] = ACTIONS(409),
    },
    [349] = {
        [sym_elif_clause] = STATE(351),
        [sym_else_clause] = STATE(352),
        [aux_sym_if_statement_repeat1] = STATE(353),
        [ts_builtin_sym_end] = ACTIONS(697),
        [anon_sym_SEMI] = ACTIONS(697),
        [anon_sym_print] = ACTIONS(693),
        [anon_sym_return] = ACTIONS(693),
        [anon_sym_del] = ACTIONS(693),
        [sym_pass_statement] = ACTIONS(693),
        [sym_break_statement] = ACTIONS(693),
        [sym_continue_statement] = ACTIONS(693),
        [anon_sym_if] = ACTIONS(693),
        [anon_sym_elif] = ACTIONS(767),
        [anon_sym_else] = ACTIONS(745),
        [anon_sym_for] = ACTIONS(693),
        [anon_sym_while] = ACTIONS(693),
        [anon_sym_try] = ACTIONS(693),
        [anon_sym_with] = ACTIONS(693),
        [anon_sym_def] = ACTIONS(693),
        [anon_sym_class] = ACTIONS(693),
        [anon_sym_AT] = ACTIONS(697),
        [anon_sym_LBRACK] = ACTIONS(697),
        [sym_number] = ACTIONS(693),
        [sym_identifier] = ACTIONS(699),
        [sym_comment] = ACTIONS(69),
        [sym__newline] = ACTIONS(697),
    },
    [350] = {
        [sym__expression] = STATE(356),
        [sym_binary_operator] = STATE(34),
        [sym_subscript] = STATE(34),
        [sym_call] = STATE(34),
        [sym_list] = STATE(34),
        [sym_list_comprehension] = STATE(34),
        [anon_sym_LBRACK] = ACTIONS(111),
        [sym_number] = ACTIONS(113),
        [sym_identifier] = ACTIONS(113),
        [sym_comment] = ACTIONS(69),
    },
    [351] = {
        [ts_builtin_sym_end] = ACTIONS(703),
        [anon_sym_SEMI] = ACTIONS(703),
        [anon_sym_print] = ACTIONS(701),
        [anon_sym_return] = ACTIONS(701),
        [anon_sym_del] = ACTIONS(701),
        [sym_pass_statement] = ACTIONS(701),
        [sym_break_statement] = ACTIONS(701),
        [sym_continue_statement] = ACTIONS(701),
        [anon_sym_if] = ACTIONS(701),
        [anon_sym_elif] = ACTIONS(701),
        [anon_sym_else] = ACTIONS(701),
        [anon_sym_for] = ACTIONS(701),
        [anon_sym_while] = ACTIONS(701),
        [anon_sym_try] = ACTIONS(701),
        [anon_sym_with] = ACTIONS(701),
        [anon_sym_def] = ACTIONS(701),
        [anon_sym_class] = ACTIONS(701),
        [anon_sym_AT] = ACTIONS(703),
        [anon_sym_LBRACK] = ACTIONS(703),
        [sym_number] = ACTIONS(701),
        [sym_identifier] = ACTIONS(705),
        [sym_comment] = ACTIONS(69),
        [sym__newline] = ACTIONS(703),
    },
    [352] = {
        [ts_builtin_sym_end] = ACTIONS(709),
        [anon_sym_SEMI] = ACTIONS(709),
        [anon_sym_print] = ACTIONS(707),
        [anon_sym_return] = ACTIONS(707),
        [anon_sym_del] = ACTIONS(707),
        [sym_pass_statement] = ACTIONS(707),
        [sym_break_statement] = ACTIONS(707),
        [sym_continue_statement] = ACTIONS(707),
        [anon_sym_if] = ACTIONS(707),
        [anon_sym_for] = ACTIONS(707),
        [anon_sym_while] = ACTIONS(707),
        [anon_sym_try] = ACTIONS(707),
        [anon_sym_with] = ACTIONS(707),
        [anon_sym_def] = ACTIONS(707),
        [anon_sym_class] = ACTIONS(707),
        [anon_sym_AT] = ACTIONS(709),
        [anon_sym_LBRACK] = ACTIONS(709),
        [sym_number] = ACTIONS(707),
        [sym_identifier] = ACTIONS(711),
        [sym_comment] = ACTIONS(69),
        [sym__newline] = ACTIONS(709),
    },
    [353] = {
        [sym_elif_clause] = STATE(354),
        [sym_else_clause] = STATE(355),
        [ts_builtin_sym_end] = ACTIONS(709),
        [anon_sym_SEMI] = ACTIONS(709),
        [anon_sym_print] = ACTIONS(707),
        [anon_sym_return] = ACTIONS(707),
        [anon_sym_del] = ACTIONS(707),
        [sym_pass_statement] = ACTIONS(707),
        [sym_break_statement] = ACTIONS(707),
        [sym_continue_statement] = ACTIONS(707),
        [anon_sym_if] = ACTIONS(707),
        [anon_sym_elif] = ACTIONS(767),
        [anon_sym_else] = ACTIONS(745),
        [anon_sym_for] = ACTIONS(707),
        [anon_sym_while] = ACTIONS(707),
        [anon_sym_try] = ACTIONS(707),
        [anon_sym_with] = ACTIONS(707),
        [anon_sym_def] = ACTIONS(707),
        [anon_sym_class] = ACTIONS(707),
        [anon_sym_AT] = ACTIONS(709),
        [anon_sym_LBRACK] = ACTIONS(709),
        [sym_number] = ACTIONS(707),
        [sym_identifier] = ACTIONS(711),
        [sym_comment] = ACTIONS(69),
        [sym__newline] = ACTIONS(709),
    },
    [354] = {
        [ts_builtin_sym_end] = ACTIONS(715),
        [anon_sym_SEMI] = ACTIONS(715),
        [anon_sym_print] = ACTIONS(713),
        [anon_sym_return] = ACTIONS(713),
        [anon_sym_del] = ACTIONS(713),
        [sym_pass_statement] = ACTIONS(713),
        [sym_break_statement] = ACTIONS(713),
        [sym_continue_statement] = ACTIONS(713),
        [anon_sym_if] = ACTIONS(713),
        [anon_sym_elif] = ACTIONS(713),
        [anon_sym_else] = ACTIONS(713),
        [anon_sym_for] = ACTIONS(713),
        [anon_sym_while] = ACTIONS(713),
        [anon_sym_try] = ACTIONS(713),
        [anon_sym_with] = ACTIONS(713),
        [anon_sym_def] = ACTIONS(713),
        [anon_sym_class] = ACTIONS(713),
        [anon_sym_AT] = ACTIONS(715),
        [anon_sym_LBRACK] = ACTIONS(715),
        [sym_number] = ACTIONS(713),
        [sym_identifier] = ACTIONS(717),
        [sym_comment] = ACTIONS(69),
        [sym__newline] = ACTIONS(715),
    },
    [355] = {
        [ts_builtin_sym_end] = ACTIONS(721),
        [anon_sym_SEMI] = ACTIONS(721),
        [anon_sym_print] = ACTIONS(719),
        [anon_sym_return] = ACTIONS(719),
        [anon_sym_del] = ACTIONS(719),
        [sym_pass_statement] = ACTIONS(719),
        [sym_break_statement] = ACTIONS(719),
        [sym_continue_statement] = ACTIONS(719),
        [anon_sym_if] = ACTIONS(719),
        [anon_sym_for] = ACTIONS(719),
        [anon_sym_while] = ACTIONS(719),
        [anon_sym_try] = ACTIONS(719),
        [anon_sym_with] = ACTIONS(719),
        [anon_sym_def] = ACTIONS(719),
        [anon_sym_class] = ACTIONS(719),
        [anon_sym_AT] = ACTIONS(721),
        [anon_sym_LBRACK] = ACTIONS(721),
        [sym_number] = ACTIONS(719),
        [sym_identifier] = ACTIONS(723),
        [sym_comment] = ACTIONS(69),
        [sym__newline] = ACTIONS(721),
    },
    [356] = {
        [anon_sym_COLON] = ACTIONS(769),
        [anon_sym_LPAREN] = ACTIONS(197),
        [anon_sym_PLUS] = ACTIONS(199),
        [anon_sym_LBRACK] = ACTIONS(201),
        [sym_comment] = ACTIONS(69),
    },
    [357] = {
        [sym__simple_statement] = STATE(175),
        [sym_print_statement] = STATE(5),
        [sym_expression_statement] = STATE(5),
        [sym_return_statement] = STATE(5),
        [sym_delete_statement] = STATE(5),
        [sym__suite] = STATE(358),
        [sym__expression] = STATE(22),
        [sym_binary_operator] = STATE(15),
        [sym_subscript] = STATE(15),
        [sym_call] = STATE(15),
        [sym_list] = STATE(15),
        [sym_list_comprehension] = STATE(15),
        [anon_sym_print] = ACTIONS(79),
        [anon_sym_return] = ACTIONS(81),
        [anon_sym_del] = ACTIONS(83),
        [sym_pass_statement] = ACTIONS(85),
        [sym_break_statement] = ACTIONS(85),
        [sym_continue_statement] = ACTIONS(85),
        [anon_sym_LBRACK] = ACTIONS(103),
        [sym_number] = ACTIONS(105),
        [sym_identifier] = ACTIONS(107),
        [sym_comment] = ACTIONS(69),
        [sym__indent] = ACTIONS(409),
    },
    [358] = {
        [ts_builtin_sym_end] = ACTIONS(729),
        [anon_sym_SEMI] = ACTIONS(729),
        [anon_sym_print] = ACTIONS(727),
        [anon_sym_return] = ACTIONS(727),
        [anon_sym_del] = ACTIONS(727),
        [sym_pass_statement] = ACTIONS(727),
        [sym_break_statement] = ACTIONS(727),
        [sym_continue_statement] = ACTIONS(727),
        [anon_sym_if] = ACTIONS(727),
        [anon_sym_elif] = ACTIONS(727),
        [anon_sym_else] = ACTIONS(727),
        [anon_sym_for] = ACTIONS(727),
        [anon_sym_while] = ACTIONS(727),
        [anon_sym_try] = ACTIONS(727),
        [anon_sym_with] = ACTIONS(727),
        [anon_sym_def] = ACTIONS(727),
        [anon_sym_class] = ACTIONS(727),
        [anon_sym_AT] = ACTIONS(729),
        [anon_sym_LBRACK] = ACTIONS(729),
        [sym_number] = ACTIONS(727),
        [sym_identifier] = ACTIONS(731),
        [sym_comment] = ACTIONS(69),
        [sym__newline] = ACTIONS(729),
    },
    [359] = {
        [sym_comment] = ACTIONS(69),
        [sym__newline] = ACTIONS(771),
    },
    [360] = {
        [aux_sym_print_statement_repeat1] = STATE(362),
        [anon_sym_COMMA] = ACTIONS(773),
        [anon_sym_LPAREN] = ACTIONS(151),
        [anon_sym_PLUS] = ACTIONS(153),
        [anon_sym_LBRACK] = ACTIONS(155),
        [sym_comment] = ACTIONS(69),
        [sym__newline] = ACTIONS(313),
    },
    [361] = {
        [sym__expression] = STATE(365),
        [sym_binary_operator] = STATE(15),
        [sym_subscript] = STATE(15),
        [sym_call] = STATE(15),
        [sym_list] = STATE(15),
        [sym_list_comprehension] = STATE(15),
        [anon_sym_LBRACK] = ACTIONS(103),
        [sym_number] = ACTIONS(105),
        [sym_identifier] = ACTIONS(105),
        [sym_comment] = ACTIONS(69),
    },
    [362] = {
        [anon_sym_COMMA] = ACTIONS(775),
        [sym_comment] = ACTIONS(69),
        [sym__newline] = ACTIONS(317),
    },
    [363] = {
        [sym__expression] = STATE(364),
        [sym_binary_operator] = STATE(15),
        [sym_subscript] = STATE(15),
        [sym_call] = STATE(15),
        [sym_list] = STATE(15),
        [sym_list_comprehension] = STATE(15),
        [anon_sym_LBRACK] = ACTIONS(103),
        [sym_number] = ACTIONS(105),
        [sym_identifier] = ACTIONS(105),
        [sym_comment] = ACTIONS(69),
    },
    [364] = {
        [anon_sym_COMMA] = ACTIONS(307),
        [anon_sym_LPAREN] = ACTIONS(151),
        [anon_sym_PLUS] = ACTIONS(153),
        [anon_sym_LBRACK] = ACTIONS(155),
        [sym_comment] = ACTIONS(69),
        [sym__newline] = ACTIONS(307),
    },
    [365] = {
        [anon_sym_COMMA] = ACTIONS(319),
        [anon_sym_LPAREN] = ACTIONS(151),
        [anon_sym_PLUS] = ACTIONS(153),
        [anon_sym_LBRACK] = ACTIONS(155),
        [sym_comment] = ACTIONS(69),
        [sym__newline] = ACTIONS(319),
    },
    [366] = {
        [sym_comment] = ACTIONS(69),
        [sym__newline] = ACTIONS(777),
    },
    [367] = {
        [aux_sym_print_statement_repeat1] = STATE(368),
        [anon_sym_COMMA] = ACTIONS(773),
        [anon_sym_LPAREN] = ACTIONS(151),
        [anon_sym_PLUS] = ACTIONS(153),
        [anon_sym_LBRACK] = ACTIONS(155),
        [sym_comment] = ACTIONS(69),
        [sym__newline] = ACTIONS(779),
    },
    [368] = {
        [anon_sym_COMMA] = ACTIONS(775),
        [sym_comment] = ACTIONS(69),
        [sym__newline] = ACTIONS(781),
    },
    [369] = {
        [sym_with_item] = STATE(546),
        [sym_dictionary_splat_parameter] = STATE(484),
        [sym__expression] = STATE(547),
        [sym_binary_operator] = STATE(15),
        [sym_subscript] = STATE(15),
        [sym_call] = STATE(15),
        [sym_keyword_argument] = STATE(548),
        [sym_dictionary_splat_argument] = STATE(549),
        [sym_list] = STATE(15),
        [sym_list_comprehension] = STATE(15),
        [anon_sym_RPAREN] = ACTIONS(783),
        [anon_sym_STAR] = ACTIONS(785),
        [anon_sym_LBRACK] = ACTIONS(791),
        [anon_sym_DOT_DOT_DOT] = ACTIONS(795),
        [anon_sym_RBRACK] = ACTIONS(797),
        [anon_sym_STAR_STAR] = ACTIONS(799),
        [sym_number] = ACTIONS(803),
        [sym_identifier] = ACTIONS(807),
        [sym_comment] = ACTIONS(69),
    },
    [370] = {
        [sym__expression] = STATE(538),
        [sym_binary_operator] = STATE(34),
        [sym_subscript] = STATE(34),
        [sym_call] = STATE(34),
        [sym_list] = STATE(34),
        [sym_list_comprehension] = STATE(34),
        [anon_sym_LBRACK] = ACTIONS(111),
        [sym_number] = ACTIONS(113),
        [sym_identifier] = ACTIONS(113),
        [sym_comment] = ACTIONS(69),
    },
    [371] = {
        [sym__simple_statement] = STATE(431),
        [sym_print_statement] = STATE(5),
        [sym_expression_statement] = STATE(5),
        [sym_return_statement] = STATE(5),
        [sym_delete_statement] = STATE(5),
        [sym__suite] = STATE(412),
        [sym__expression] = STATE(22),
        [sym_binary_operator] = STATE(15),
        [sym_subscript] = STATE(15),
        [sym_call] = STATE(15),
        [sym_list] = STATE(15),
        [sym_list_comprehension] = STATE(15),
        [anon_sym_print] = ACTIONS(79),
        [anon_sym_return] = ACTIONS(81),
        [anon_sym_del] = ACTIONS(83),
        [sym_pass_statement] = ACTIONS(85),
        [sym_break_statement] = ACTIONS(85),
        [sym_continue_statement] = ACTIONS(85),
        [anon_sym_LBRACK] = ACTIONS(103),
        [sym_number] = ACTIONS(105),
        [sym_identifier] = ACTIONS(107),
        [sym_comment] = ACTIONS(69),
        [sym__indent] = ACTIONS(813),
    },
    [372] = {
        [sym__expression] = STATE(535),
        [sym_binary_operator] = STATE(34),
        [sym_subscript] = STATE(34),
        [sym_call] = STATE(34),
        [sym_list] = STATE(34),
        [sym_list_comprehension] = STATE(34),
        [anon_sym_LBRACK] = ACTIONS(111),
        [sym_number] = ACTIONS(113),
        [sym_identifier] = ACTIONS(113),
        [sym_comment] = ACTIONS(69),
    },
    [373] = {
        [anon_sym_COLON] = ACTIONS(815),
        [sym_comment] = ACTIONS(69),
    },
    [374] = {
        [sym_expression_list] = STATE(534),
        [sym__expression] = STATE(104),
        [sym_binary_operator] = STATE(34),
        [sym_subscript] = STATE(34),
        [sym_call] = STATE(34),
        [sym_list] = STATE(34),
        [sym_list_comprehension] = STATE(34),
        [anon_sym_LBRACK] = ACTIONS(111),
        [sym_number] = ACTIONS(113),
        [sym_identifier] = ACTIONS(113),
        [sym_comment] = ACTIONS(69),
    },
    [375] = {
        [sym_expression_list] = STATE(454),
        [sym__expression] = STATE(531),
        [sym_binary_operator] = STATE(34),
        [sym_subscript] = STATE(34),
        [sym_call] = STATE(34),
        [sym_list] = STATE(34),
        [sym_list_comprehension] = STATE(34),
        [anon_sym_LBRACK] = ACTIONS(111),
        [sym_number] = ACTIONS(113),
        [sym_identifier] = ACTIONS(113),
        [sym_comment] = ACTIONS(69),
    },
    [376] = {
        [sym__expression] = STATE(527),
        [sym_binary_operator] = STATE(34),
        [sym_subscript] = STATE(34),
        [sym_call] = STATE(34),
        [sym_list] = STATE(34),
        [sym_list_comprehension] = STATE(34),
        [anon_sym_LBRACK] = ACTIONS(111),
        [sym_number] = ACTIONS(113),
        [sym_identifier] = ACTIONS(113),
        [sym_comment] = ACTIONS(69),
    },
    [377] = {
        [anon_sym_COLON] = ACTIONS(817),
        [sym_comment] = ACTIONS(69),
    },
    [378] = {
        [sym__expression] = STATE(520),
        [sym_binary_operator] = STATE(34),
        [sym_subscript] = STATE(34),
        [sym_call] = STATE(34),
        [sym_list] = STATE(34),
        [sym_list_comprehension] = STATE(34),
        [anon_sym_LBRACK] = ACTIONS(111),
        [sym_number] = ACTIONS(113),
        [sym_identifier] = ACTIONS(113),
        [sym_comment] = ACTIONS(69),
    },
    [379] = {
        [sym__expression] = STATE(519),
        [sym_binary_operator] = STATE(34),
        [sym_subscript] = STATE(34),
        [sym_call] = STATE(34),
        [sym_list] = STATE(34),
        [sym_list_comprehension] = STATE(34),
        [anon_sym_LBRACK] = ACTIONS(111),
        [sym_number] = ACTIONS(113),
        [sym_identifier] = ACTIONS(113),
        [sym_comment] = ACTIONS(69),
    },
    [380] = {
        [anon_sym_COLON] = ACTIONS(819),
        [sym_comment] = ACTIONS(69),
    },
    [381] = {
        [sym_with_item] = STATE(516),
        [sym__expression] = STATE(241),
        [sym_binary_operator] = STATE(34),
        [sym_subscript] = STATE(34),
        [sym_call] = STATE(34),
        [sym_list] = STATE(34),
        [sym_list_comprehension] = STATE(34),
        [anon_sym_LBRACK] = ACTIONS(111),
        [sym_number] = ACTIONS(113),
        [sym_identifier] = ACTIONS(113),
        [sym_comment] = ACTIONS(69),
    },
    [382] = {
        [sym_identifier] = ACTIONS(821),
        [sym_comment] = ACTIONS(69),
    },
    [383] = {
        [sym_default_parameter] = STATE(216),
        [sym_list_splat_parameter] = STATE(217),
        [sym_dictionary_splat_parameter] = STATE(218),
        [sym_expression_list] = STATE(496),
        [sym__expression] = STATE(510),
        [sym_binary_operator] = STATE(34),
        [sym_subscript] = STATE(34),
        [sym_call] = STATE(34),
        [sym_keyword_argument] = STATE(115),
        [sym_list_splat_argument] = STATE(116),
        [sym_dictionary_splat_argument] = STATE(117),
        [sym_list] = STATE(34),
        [sym_list_comprehension] = STATE(34),
        [aux_sym_parameters_repeat1] = STATE(219),
        [aux_sym_call_repeat1] = STATE(118),
        [anon_sym_RPAREN] = ACTIONS(485),
        [anon_sym_STAR] = ACTIONS(823),
        [anon_sym_LBRACK] = ACTIONS(111),
        [anon_sym_STAR_STAR] = ACTIONS(185),
        [sym_number] = ACTIONS(113),
        [sym_identifier] = ACTIONS(825),
        [sym_comment] = ACTIONS(69),
    },
    [384] = {
        [anon_sym_COMMA] = ACTIONS(827),
        [anon_sym_COLON] = ACTIONS(833),
        [anon_sym_for] = ACTIONS(827),
        [anon_sym_in] = ACTIONS(827),
        [anon_sym_as] = ACTIONS(827),
        [anon_sym_LPAREN] = ACTIONS(827),
        [anon_sym_RPAREN] = ACTIONS(827),
        [anon_sym_PLUS] = ACTIONS(827),
        [anon_sym_LBRACK] = ACTIONS(827),
        [anon_sym_RBRACK] = ACTIONS(827),
        [sym_comment] = ACTIONS(69),
        [sym__newline] = ACTIONS(845),
    },
    [385] = {
        [sym__expression] = STATE(507),
        [sym_binary_operator] = STATE(34),
        [sym_subscript] = STATE(34),
        [sym_call] = STATE(34),
        [sym_list] = STATE(34),
        [sym_list_comprehension] = STATE(34),
        [anon_sym_LBRACK] = ACTIONS(111),
        [sym_number] = ACTIONS(113),
        [sym_identifier] = ACTIONS(113),
        [sym_comment] = ACTIONS(69),
    },
    [386] = {
        [sym__expression] = STATE(112),
        [sym_binary_operator] = STATE(34),
        [sym_subscript] = STATE(34),
        [sym_call] = STATE(34),
        [sym_list] = STATE(34),
        [sym_list_comprehension] = STATE(34),
        [anon_sym_STAR] = ACTIONS(501),
        [anon_sym_LBRACK] = ACTIONS(111),
        [sym_number] = ACTIONS(113),
        [sym_identifier] = ACTIONS(853),
        [sym_comment] = ACTIONS(69),
    },
    [387] = {
        [sym_identifier] = ACTIONS(855),
        [sym_comment] = ACTIONS(69),
    },
    [388] = {
        [sym_identifier] = ACTIONS(857),
        [sym_comment] = ACTIONS(69),
    },
    [389] = {
        [sym__expression] = STATE(502),
        [sym_binary_operator] = STATE(15),
        [sym_subscript] = STATE(15),
        [sym_call] = STATE(15),
        [sym_list] = STATE(15),
        [sym_list_comprehension] = STATE(15),
        [anon_sym_LBRACK] = ACTIONS(103),
        [sym_number] = ACTIONS(105),
        [sym_identifier] = ACTIONS(105),
        [sym_comment] = ACTIONS(69),
    },
    [390] = {
        [sym__expression] = STATE(498),
        [sym_binary_operator] = STATE(34),
        [sym_subscript] = STATE(34),
        [sym_call] = STATE(34),
        [sym_list] = STATE(34),
        [sym_list_comprehension] = STATE(34),
        [anon_sym_LBRACK] = ACTIONS(111),
        [anon_sym_DOT_DOT_DOT] = ACTIONS(189),
        [anon_sym_RBRACK] = ACTIONS(123),
        [sym_number] = ACTIONS(113),
        [sym_identifier] = ACTIONS(113),
        [sym_comment] = ACTIONS(69),
    },
    [391] = {
        [aux_sym_subscript_repeat1] = STATE(41),
        [anon_sym_COMMA] = ACTIONS(859),
        [anon_sym_RBRACK] = ACTIONS(863),
        [sym_comment] = ACTIONS(69),
    },
    [392] = {
        [anon_sym_COMMA] = ACTIONS(867),
        [anon_sym_COLON] = ACTIONS(867),
        [anon_sym_for] = ACTIONS(867),
        [anon_sym_in] = ACTIONS(867),
        [anon_sym_as] = ACTIONS(867),
        [anon_sym_LPAREN] = ACTIONS(867),
        [anon_sym_RPAREN] = ACTIONS(867),
        [anon_sym_PLUS] = ACTIONS(867),
        [anon_sym_LBRACK] = ACTIONS(867),
        [anon_sym_RBRACK] = ACTIONS(867),
        [sym_comment] = ACTIONS(69),
        [sym__newline] = ACTIONS(867),
    },
    [393] = {
        [sym_parameters] = STATE(407),
        [aux_sym_dotted_name_repeat1] = STATE(164),
        [anon_sym_COMMA] = ACTIONS(876),
        [anon_sym_COLON] = ACTIONS(880),
        [anon_sym_for] = ACTIONS(125),
        [anon_sym_in] = ACTIONS(125),
        [anon_sym_as] = ACTIONS(125),
        [anon_sym_LPAREN] = ACTIONS(883),
        [anon_sym_RPAREN] = ACTIONS(889),
        [anon_sym_EQ] = ACTIONS(894),
        [anon_sym_DOT] = ACTIONS(896),
        [anon_sym_PLUS] = ACTIONS(125),
        [anon_sym_LBRACK] = ACTIONS(125),
        [anon_sym_RBRACK] = ACTIONS(125),
        [sym_comment] = ACTIONS(69),
        [sym__newline] = ACTIONS(900),
    },
    [394] = {
        [ts_builtin_sym_end] = ACTIONS(905),
        [anon_sym_SEMI] = ACTIONS(909),
        [anon_sym_print] = ACTIONS(912),
        [anon_sym_return] = ACTIONS(912),
        [anon_sym_del] = ACTIONS(912),
        [sym_pass_statement] = ACTIONS(912),
        [sym_break_statement] = ACTIONS(912),
        [sym_continue_statement] = ACTIONS(912),
        [anon_sym_if] = ACTIONS(912),
        [anon_sym_elif] = ACTIONS(439),
        [anon_sym_else] = ACTIONS(439),
        [anon_sym_for] = ACTIONS(912),
        [anon_sym_while] = ACTIONS(912),
        [anon_sym_try] = ACTIONS(912),
        [anon_sym_except] = ACTIONS(439),
        [anon_sym_finally] = ACTIONS(439),
        [anon_sym_with] = ACTIONS(912),
        [anon_sym_def] = ACTIONS(915),
        [anon_sym_class] = ACTIONS(915),
        [anon_sym_AT] = ACTIONS(920),
        [anon_sym_LBRACK] = ACTIONS(909),
        [sym_number] = ACTIONS(912),
        [sym_identifier] = ACTIONS(925),
        [sym_comment] = ACTIONS(69),
        [sym__newline] = ACTIONS(909),
        [sym__dedent] = ACTIONS(909),
    },
    [395] = {
        [sym__statement] = STATE(185),
        [sym__simple_statement] = STATE(186),
        [sym_print_statement] = STATE(5),
        [sym_expression_statement] = STATE(5),
        [sym_return_statement] = STATE(5),
        [sym_delete_statement] = STATE(5),
        [sym__compound_statement] = STATE(187),
        [sym_if_statement] = STATE(188),
        [sym_for_statement] = STATE(188),
        [sym_while_statement] = STATE(188),
        [sym_try_statement] = STATE(188),
        [sym_with_statement] = STATE(188),
        [sym_function_definition] = STATE(188),
        [sym_class_definition] = STATE(188),
        [sym_decorated_definition] = STATE(188),
        [sym_decorator] = STATE(21),
        [sym__expression] = STATE(22),
        [sym_binary_operator] = STATE(15),
        [sym_subscript] = STATE(15),
        [sym_call] = STATE(15),
        [sym_list] = STATE(15),
        [sym_list_comprehension] = STATE(15),
        [aux_sym_module_repeat1] = STATE(434),
        [aux_sym_decorated_definition_repeat1] = STATE(190),
        [anon_sym_print] = ACTIONS(79),
        [anon_sym_return] = ACTIONS(81),
        [anon_sym_del] = ACTIONS(83),
        [sym_pass_statement] = ACTIONS(85),
        [sym_break_statement] = ACTIONS(85),
        [sym_continue_statement] = ACTIONS(85),
        [anon_sym_if] = ACTIONS(415),
        [anon_sym_for] = ACTIONS(417),
        [anon_sym_while] = ACTIONS(419),
        [anon_sym_try] = ACTIONS(421),
        [anon_sym_with] = ACTIONS(423),
        [anon_sym_def] = ACTIONS(425),
        [anon_sym_class] = ACTIONS(427),
        [anon_sym_AT] = ACTIONS(101),
        [anon_sym_LBRACK] = ACTIONS(103),
        [sym_number] = ACTIONS(105),
        [sym_identifier] = ACTIONS(107),
        [sym_comment] = ACTIONS(69),
        [sym__dedent] = ACTIONS(928),
    },
    [396] = {
        [ts_builtin_sym_end] = ACTIONS(930),
        [anon_sym_SEMI] = ACTIONS(930),
        [anon_sym_print] = ACTIONS(933),
        [anon_sym_return] = ACTIONS(933),
        [anon_sym_del] = ACTIONS(933),
        [sym_pass_statement] = ACTIONS(933),
        [sym_break_statement] = ACTIONS(933),
        [sym_continue_statement] = ACTIONS(933),
        [anon_sym_if] = ACTIONS(933),
        [anon_sym_elif] = ACTIONS(933),
        [anon_sym_else] = ACTIONS(933),
        [anon_sym_for] = ACTIONS(933),
        [anon_sym_while] = ACTIONS(933),
        [anon_sym_try] = ACTIONS(933),
        [anon_sym_except] = ACTIONS(933),
        [anon_sym_finally] = ACTIONS(933),
        [anon_sym_with] = ACTIONS(933),
        [anon_sym_def] = ACTIONS(933),
        [anon_sym_class] = ACTIONS(933),
        [anon_sym_AT] = ACTIONS(930),
        [anon_sym_LBRACK] = ACTIONS(930),
        [sym_number] = ACTIONS(933),
        [sym_identifier] = ACTIONS(936),
        [sym_comment] = ACTIONS(69),
        [sym__newline] = ACTIONS(930),
        [sym__dedent] = ACTIONS(930),
    },
    [397] = {
        [ts_builtin_sym_end] = ACTIONS(939),
        [anon_sym_SEMI] = ACTIONS(939),
        [anon_sym_print] = ACTIONS(942),
        [anon_sym_return] = ACTIONS(942),
        [anon_sym_del] = ACTIONS(942),
        [sym_pass_statement] = ACTIONS(942),
        [sym_break_statement] = ACTIONS(942),
        [sym_continue_statement] = ACTIONS(942),
        [anon_sym_if] = ACTIONS(942),
        [anon_sym_for] = ACTIONS(942),
        [anon_sym_while] = ACTIONS(942),
        [anon_sym_try] = ACTIONS(942),
        [anon_sym_with] = ACTIONS(942),
        [anon_sym_def] = ACTIONS(942),
        [anon_sym_class] = ACTIONS(942),
        [anon_sym_AT] = ACTIONS(939),
        [anon_sym_LBRACK] = ACTIONS(939),
        [sym_number] = ACTIONS(942),
        [sym_identifier] = ACTIONS(945),
        [sym_comment] = ACTIONS(69),
        [sym__newline] = ACTIONS(939),
        [sym__dedent] = ACTIONS(939),
    },
    [398] = {
        [sym_comment] = ACTIONS(69),
        [sym__newline] = ACTIONS(948),
    },
    [399] = {
        [ts_builtin_sym_end] = ACTIONS(137),
        [anon_sym_SEMI] = ACTIONS(137),
        [anon_sym_print] = ACTIONS(139),
        [anon_sym_return] = ACTIONS(139),
        [anon_sym_del] = ACTIONS(139),
        [sym_pass_statement] = ACTIONS(139),
        [sym_break_statement] = ACTIONS(139),
        [sym_continue_statement] = ACTIONS(139),
        [anon_sym_if] = ACTIONS(139),
        [anon_sym_for] = ACTIONS(139),
        [anon_sym_while] = ACTIONS(139),
        [anon_sym_try] = ACTIONS(139),
        [anon_sym_with] = ACTIONS(139),
        [anon_sym_def] = ACTIONS(139),
        [anon_sym_class] = ACTIONS(139),
        [anon_sym_AT] = ACTIONS(137),
        [anon_sym_LBRACK] = ACTIONS(137),
        [sym_number] = ACTIONS(139),
        [sym_identifier] = ACTIONS(141),
        [sym_comment] = ACTIONS(69),
        [sym__newline] = ACTIONS(137),
        [sym__dedent] = ACTIONS(137),
    },
    [400] = {
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
        [sym_number] = ACTIONS(145),
        [sym_identifier] = ACTIONS(147),
        [sym_comment] = ACTIONS(69),
        [sym__newline] = ACTIONS(143),
        [sym__dedent] = ACTIONS(143),
    },
    [401] = {
        [ts_builtin_sym_end] = ACTIONS(950),
        [anon_sym_SEMI] = ACTIONS(950),
        [anon_sym_print] = ACTIONS(953),
        [anon_sym_return] = ACTIONS(953),
        [anon_sym_del] = ACTIONS(953),
        [sym_pass_statement] = ACTIONS(953),
        [sym_break_statement] = ACTIONS(953),
        [sym_continue_statement] = ACTIONS(953),
        [anon_sym_if] = ACTIONS(953),
        [anon_sym_elif] = ACTIONS(953),
        [anon_sym_else] = ACTIONS(953),
        [anon_sym_for] = ACTIONS(953),
        [anon_sym_while] = ACTIONS(953),
        [anon_sym_try] = ACTIONS(953),
        [anon_sym_with] = ACTIONS(953),
        [anon_sym_def] = ACTIONS(953),
        [anon_sym_class] = ACTIONS(953),
        [anon_sym_AT] = ACTIONS(950),
        [anon_sym_LBRACK] = ACTIONS(950),
        [sym_number] = ACTIONS(953),
        [sym_identifier] = ACTIONS(956),
        [sym_comment] = ACTIONS(69),
        [sym__newline] = ACTIONS(950),
        [sym__dedent] = ACTIONS(950),
    },
    [402] = {
        [sym_finally_clause] = STATE(439),
        [ts_builtin_sym_end] = ACTIONS(959),
        [anon_sym_SEMI] = ACTIONS(959),
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
        [anon_sym_finally] = ACTIONS(971),
        [anon_sym_with] = ACTIONS(965),
        [anon_sym_def] = ACTIONS(965),
        [anon_sym_class] = ACTIONS(965),
        [anon_sym_AT] = ACTIONS(959),
        [anon_sym_LBRACK] = ACTIONS(959),
        [sym_number] = ACTIONS(965),
        [sym_identifier] = ACTIONS(973),
        [sym_comment] = ACTIONS(69),
        [sym__newline] = ACTIONS(959),
        [sym__dedent] = ACTIONS(959),
    },
    [403] = {
        [ts_builtin_sym_end] = ACTIONS(979),
        [anon_sym_SEMI] = ACTIONS(979),
        [anon_sym_print] = ACTIONS(982),
        [anon_sym_return] = ACTIONS(982),
        [anon_sym_del] = ACTIONS(982),
        [sym_pass_statement] = ACTIONS(982),
        [sym_break_statement] = ACTIONS(982),
        [sym_continue_statement] = ACTIONS(982),
        [anon_sym_if] = ACTIONS(982),
        [anon_sym_else] = ACTIONS(982),
        [anon_sym_for] = ACTIONS(982),
        [anon_sym_while] = ACTIONS(982),
        [anon_sym_try] = ACTIONS(982),
        [anon_sym_except] = ACTIONS(982),
        [anon_sym_finally] = ACTIONS(982),
        [anon_sym_with] = ACTIONS(982),
        [anon_sym_def] = ACTIONS(982),
        [anon_sym_class] = ACTIONS(982),
        [anon_sym_AT] = ACTIONS(979),
        [anon_sym_LBRACK] = ACTIONS(979),
        [sym_number] = ACTIONS(982),
        [sym_identifier] = ACTIONS(985),
        [sym_comment] = ACTIONS(69),
        [sym__newline] = ACTIONS(979),
        [sym__dedent] = ACTIONS(979),
    },
    [404] = {
        [ts_builtin_sym_end] = ACTIONS(988),
        [anon_sym_SEMI] = ACTIONS(988),
        [anon_sym_print] = ACTIONS(992),
        [anon_sym_return] = ACTIONS(992),
        [anon_sym_del] = ACTIONS(992),
        [sym_pass_statement] = ACTIONS(992),
        [sym_break_statement] = ACTIONS(992),
        [sym_continue_statement] = ACTIONS(992),
        [anon_sym_if] = ACTIONS(992),
        [anon_sym_for] = ACTIONS(992),
        [anon_sym_while] = ACTIONS(992),
        [anon_sym_try] = ACTIONS(992),
        [anon_sym_with] = ACTIONS(992),
        [anon_sym_def] = ACTIONS(992),
        [anon_sym_class] = ACTIONS(992),
        [anon_sym_AT] = ACTIONS(988),
        [anon_sym_LBRACK] = ACTIONS(988),
        [sym_number] = ACTIONS(992),
        [sym_identifier] = ACTIONS(996),
        [sym_comment] = ACTIONS(69),
        [sym__newline] = ACTIONS(988),
        [sym__dedent] = ACTIONS(988),
    },
    [405] = {
        [aux_sym_with_statement_repeat1] = STATE(422),
        [anon_sym_COMMA] = ACTIONS(1000),
        [anon_sym_COLON] = ACTIONS(1004),
        [sym_comment] = ACTIONS(69),
    },
    [406] = {
        [ts_builtin_sym_end] = ACTIONS(1008),
        [anon_sym_SEMI] = ACTIONS(1008),
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
        [anon_sym_AT] = ACTIONS(1008),
        [anon_sym_LBRACK] = ACTIONS(1008),
        [sym_number] = ACTIONS(1011),
        [sym_identifier] = ACTIONS(1014),
        [sym_comment] = ACTIONS(69),
        [sym__newline] = ACTIONS(1008),
        [sym__dedent] = ACTIONS(1008),
    },
    [407] = {
        [anon_sym_COLON] = ACTIONS(1017),
        [sym_comment] = ACTIONS(69),
    },
    [408] = {
        [anon_sym_COMMA] = ACTIONS(1019),
        [anon_sym_RPAREN] = ACTIONS(1021),
        [sym_comment] = ACTIONS(69),
    },
    [409] = {
        [anon_sym_COMMA] = ACTIONS(1023),
        [anon_sym_RPAREN] = ACTIONS(1021),
        [sym_comment] = ACTIONS(69),
    },
    [410] = {
        [anon_sym_RPAREN] = ACTIONS(1025),
        [sym_comment] = ACTIONS(69),
    },
    [411] = {
        [anon_sym_def] = ACTIONS(1027),
        [anon_sym_class] = ACTIONS(1027),
        [anon_sym_AT] = ACTIONS(1027),
        [sym_comment] = ACTIONS(69),
    },
    [412] = {
        [sym_elif_clause] = STATE(469),
        [sym_else_clause] = STATE(478),
        [sym_except_clause] = STATE(479),
        [sym_finally_clause] = STATE(480),
        [aux_sym_if_statement_repeat1] = STATE(420),
        [aux_sym_try_statement_repeat1] = STATE(421),
        [ts_builtin_sym_end] = ACTIONS(1030),
        [anon_sym_SEMI] = ACTIONS(1030),
        [anon_sym_print] = ACTIONS(1044),
        [anon_sym_return] = ACTIONS(1044),
        [anon_sym_del] = ACTIONS(1044),
        [sym_pass_statement] = ACTIONS(1044),
        [sym_break_statement] = ACTIONS(1044),
        [sym_continue_statement] = ACTIONS(1044),
        [anon_sym_if] = ACTIONS(1044),
        [anon_sym_elif] = ACTIONS(1058),
        [anon_sym_else] = ACTIONS(1061),
        [anon_sym_for] = ACTIONS(1044),
        [anon_sym_while] = ACTIONS(1044),
        [anon_sym_try] = ACTIONS(1044),
        [anon_sym_except] = ACTIONS(1066),
        [anon_sym_finally] = ACTIONS(1070),
        [anon_sym_with] = ACTIONS(1044),
        [anon_sym_def] = ACTIONS(1044),
        [anon_sym_class] = ACTIONS(1044),
        [anon_sym_AT] = ACTIONS(1030),
        [anon_sym_LBRACK] = ACTIONS(1030),
        [sym_number] = ACTIONS(1044),
        [sym_identifier] = ACTIONS(1075),
        [sym_comment] = ACTIONS(69),
        [sym__newline] = ACTIONS(1030),
        [sym__dedent] = ACTIONS(1030),
    },
    [413] = {
        [anon_sym_COLON] = ACTIONS(1089),
        [anon_sym_in] = ACTIONS(1091),
        [anon_sym_RPAREN] = ACTIONS(1093),
        [sym_comment] = ACTIONS(69),
        [sym__newline] = ACTIONS(1095),
    },
    [414] = {
        [aux_sym_print_statement_repeat1] = STATE(419),
        [aux_sym_subscript_repeat1] = STATE(41),
        [anon_sym_COMMA] = ACTIONS(1098),
        [anon_sym_COLON] = ACTIONS(1112),
        [anon_sym_for] = ACTIONS(1120),
        [anon_sym_in] = ACTIONS(1123),
        [anon_sym_as] = ACTIONS(1128),
        [anon_sym_LPAREN] = ACTIONS(1131),
        [anon_sym_RPAREN] = ACTIONS(1134),
        [anon_sym_PLUS] = ACTIONS(1146),
        [anon_sym_LBRACK] = ACTIONS(1149),
        [anon_sym_RBRACK] = ACTIONS(1152),
        [sym_comment] = ACTIONS(69),
        [sym__newline] = ACTIONS(1159),
    },
    [415] = {
        [anon_sym_COMMA] = ACTIONS(1166),
        [anon_sym_RPAREN] = ACTIONS(1170),
        [sym_comment] = ACTIONS(69),
    },
    [416] = {
        [aux_sym_call_repeat2] = STATE(424),
        [anon_sym_COMMA] = ACTIONS(1174),
        [anon_sym_RPAREN] = ACTIONS(1176),
        [sym_comment] = ACTIONS(69),
    },
    [417] = {
        [anon_sym_RPAREN] = ACTIONS(1178),
        [sym_comment] = ACTIONS(69),
    },
    [418] = {
        [sym__statement] = STATE(449),
        [sym__simple_statement] = STATE(450),
        [sym_print_statement] = STATE(5),
        [sym_expression_statement] = STATE(5),
        [sym_return_statement] = STATE(5),
        [sym_delete_statement] = STATE(5),
        [sym__compound_statement] = STATE(399),
        [sym_if_statement] = STATE(400),
        [sym_for_statement] = STATE(400),
        [sym_while_statement] = STATE(400),
        [sym_try_statement] = STATE(400),
        [sym_with_statement] = STATE(400),
        [sym_function_definition] = STATE(400),
        [sym_class_definition] = STATE(400),
        [sym_decorated_definition] = STATE(400),
        [sym_decorator] = STATE(21),
        [sym__expression] = STATE(22),
        [sym_binary_operator] = STATE(15),
        [sym_subscript] = STATE(15),
        [sym_call] = STATE(15),
        [sym_list] = STATE(15),
        [sym_list_comprehension] = STATE(15),
        [aux_sym_decorated_definition_repeat1] = STATE(423),
        [ts_builtin_sym_end] = ACTIONS(159),
        [anon_sym_SEMI] = ACTIONS(161),
        [anon_sym_print] = ACTIONS(79),
        [anon_sym_return] = ACTIONS(81),
        [anon_sym_del] = ACTIONS(83),
        [sym_pass_statement] = ACTIONS(85),
        [sym_break_statement] = ACTIONS(85),
        [sym_continue_statement] = ACTIONS(85),
        [anon_sym_if] = ACTIONS(1180),
        [anon_sym_for] = ACTIONS(1182),
        [anon_sym_while] = ACTIONS(1184),
        [anon_sym_try] = ACTIONS(1186),
        [anon_sym_with] = ACTIONS(1188),
        [anon_sym_def] = ACTIONS(1190),
        [anon_sym_class] = ACTIONS(1192),
        [anon_sym_AT] = ACTIONS(101),
        [anon_sym_LBRACK] = ACTIONS(103),
        [sym_number] = ACTIONS(105),
        [sym_identifier] = ACTIONS(107),
        [sym_comment] = ACTIONS(69),
        [sym__newline] = ACTIONS(161),
        [sym__dedent] = ACTIONS(1194),
    },
    [419] = {
        [anon_sym_COMMA] = ACTIONS(1196),
        [anon_sym_COLON] = ACTIONS(317),
        [anon_sym_in] = ACTIONS(317),
        [anon_sym_RPAREN] = ACTIONS(1198),
        [anon_sym_RBRACK] = ACTIONS(361),
        [sym_comment] = ACTIONS(69),
        [sym__newline] = ACTIONS(1201),
    },
    [420] = {
        [sym_elif_clause] = STATE(440),
        [sym_else_clause] = STATE(441),
        [ts_builtin_sym_end] = ACTIONS(709),
        [anon_sym_SEMI] = ACTIONS(709),
        [anon_sym_print] = ACTIONS(707),
        [anon_sym_return] = ACTIONS(707),
        [anon_sym_del] = ACTIONS(707),
        [sym_pass_statement] = ACTIONS(707),
        [sym_break_statement] = ACTIONS(707),
        [sym_continue_statement] = ACTIONS(707),
        [anon_sym_if] = ACTIONS(707),
        [anon_sym_elif] = ACTIONS(1204),
        [anon_sym_else] = ACTIONS(1206),
        [anon_sym_for] = ACTIONS(707),
        [anon_sym_while] = ACTIONS(707),
        [anon_sym_try] = ACTIONS(707),
        [anon_sym_with] = ACTIONS(707),
        [anon_sym_def] = ACTIONS(707),
        [anon_sym_class] = ACTIONS(707),
        [anon_sym_AT] = ACTIONS(709),
        [anon_sym_LBRACK] = ACTIONS(709),
        [sym_number] = ACTIONS(707),
        [sym_identifier] = ACTIONS(711),
        [sym_comment] = ACTIONS(69),
        [sym__newline] = ACTIONS(709),
        [sym__dedent] = ACTIONS(709),
    },
    [421] = {
        [sym_else_clause] = STATE(436),
        [sym_except_clause] = STATE(437),
        [sym_finally_clause] = STATE(438),
        [ts_builtin_sym_end] = ACTIONS(599),
        [anon_sym_SEMI] = ACTIONS(599),
        [anon_sym_print] = ACTIONS(597),
        [anon_sym_return] = ACTIONS(597),
        [anon_sym_del] = ACTIONS(597),
        [sym_pass_statement] = ACTIONS(597),
        [sym_break_statement] = ACTIONS(597),
        [sym_continue_statement] = ACTIONS(597),
        [anon_sym_if] = ACTIONS(597),
        [anon_sym_else] = ACTIONS(1206),
        [anon_sym_for] = ACTIONS(597),
        [anon_sym_while] = ACTIONS(597),
        [anon_sym_try] = ACTIONS(597),
        [anon_sym_except] = ACTIONS(1208),
        [anon_sym_finally] = ACTIONS(971),
        [anon_sym_with] = ACTIONS(597),
        [anon_sym_def] = ACTIONS(597),
        [anon_sym_class] = ACTIONS(597),
        [anon_sym_AT] = ACTIONS(599),
        [anon_sym_LBRACK] = ACTIONS(599),
        [sym_number] = ACTIONS(597),
        [sym_identifier] = ACTIONS(601),
        [sym_comment] = ACTIONS(69),
        [sym__newline] = ACTIONS(599),
        [sym__dedent] = ACTIONS(599),
    },
    [422] = {
        [anon_sym_COMMA] = ACTIONS(561),
        [anon_sym_COLON] = ACTIONS(1210),
        [sym_comment] = ACTIONS(69),
    },
    [423] = {
        [sym_function_definition] = STATE(429),
        [sym_class_definition] = STATE(429),
        [sym_decorator] = STATE(26),
        [anon_sym_def] = ACTIONS(1212),
        [anon_sym_class] = ACTIONS(1214),
        [anon_sym_AT] = ACTIONS(101),
        [sym_comment] = ACTIONS(69),
    },
    [424] = {
        [anon_sym_COMMA] = ACTIONS(1216),
        [anon_sym_RPAREN] = ACTIONS(1218),
        [sym_comment] = ACTIONS(69),
    },
    [425] = {
        [sym__expression] = STATE(75),
        [sym_binary_operator] = STATE(34),
        [sym_subscript] = STATE(34),
        [sym_call] = STATE(34),
        [sym_keyword_argument] = STATE(76),
        [sym_dictionary_splat_argument] = STATE(427),
        [sym_list] = STATE(34),
        [sym_list_comprehension] = STATE(34),
        [anon_sym_LBRACK] = ACTIONS(111),
        [anon_sym_STAR_STAR] = ACTIONS(185),
        [sym_number] = ACTIONS(113),
        [sym_identifier] = ACTIONS(187),
        [sym_comment] = ACTIONS(69),
    },
    [426] = {
        [anon_sym_COMMA] = ACTIONS(1220),
        [anon_sym_COLON] = ACTIONS(1220),
        [anon_sym_for] = ACTIONS(1220),
        [anon_sym_in] = ACTIONS(1220),
        [anon_sym_as] = ACTIONS(1220),
        [anon_sym_LPAREN] = ACTIONS(1220),
        [anon_sym_RPAREN] = ACTIONS(1220),
        [anon_sym_PLUS] = ACTIONS(1220),
        [anon_sym_LBRACK] = ACTIONS(1220),
        [anon_sym_RBRACK] = ACTIONS(1220),
        [sym_comment] = ACTIONS(69),
        [sym__newline] = ACTIONS(1220),
    },
    [427] = {
        [anon_sym_RPAREN] = ACTIONS(1223),
        [sym_comment] = ACTIONS(69),
    },
    [428] = {
        [anon_sym_COMMA] = ACTIONS(1225),
        [anon_sym_COLON] = ACTIONS(1225),
        [anon_sym_for] = ACTIONS(1225),
        [anon_sym_in] = ACTIONS(1225),
        [anon_sym_as] = ACTIONS(1225),
        [anon_sym_LPAREN] = ACTIONS(1225),
        [anon_sym_RPAREN] = ACTIONS(1225),
        [anon_sym_PLUS] = ACTIONS(1225),
        [anon_sym_LBRACK] = ACTIONS(1225),
        [anon_sym_RBRACK] = ACTIONS(1225),
        [sym_comment] = ACTIONS(69),
        [sym__newline] = ACTIONS(1225),
    },
    [429] = {
        [ts_builtin_sym_end] = ACTIONS(167),
        [anon_sym_SEMI] = ACTIONS(167),
        [anon_sym_print] = ACTIONS(169),
        [anon_sym_return] = ACTIONS(169),
        [anon_sym_del] = ACTIONS(169),
        [sym_pass_statement] = ACTIONS(169),
        [sym_break_statement] = ACTIONS(169),
        [sym_continue_statement] = ACTIONS(169),
        [anon_sym_if] = ACTIONS(169),
        [anon_sym_for] = ACTIONS(169),
        [anon_sym_while] = ACTIONS(169),
        [anon_sym_try] = ACTIONS(169),
        [anon_sym_with] = ACTIONS(169),
        [anon_sym_def] = ACTIONS(169),
        [anon_sym_class] = ACTIONS(169),
        [anon_sym_AT] = ACTIONS(167),
        [anon_sym_LBRACK] = ACTIONS(167),
        [sym_number] = ACTIONS(169),
        [sym_identifier] = ACTIONS(171),
        [sym_comment] = ACTIONS(69),
        [sym__newline] = ACTIONS(167),
        [sym__dedent] = ACTIONS(167),
    },
    [430] = {
        [sym__simple_statement] = STATE(431),
        [sym_print_statement] = STATE(5),
        [sym_expression_statement] = STATE(5),
        [sym_return_statement] = STATE(5),
        [sym_delete_statement] = STATE(5),
        [sym__suite] = STATE(432),
        [sym__expression] = STATE(22),
        [sym_binary_operator] = STATE(15),
        [sym_subscript] = STATE(15),
        [sym_call] = STATE(15),
        [sym_list] = STATE(15),
        [sym_list_comprehension] = STATE(15),
        [anon_sym_print] = ACTIONS(79),
        [anon_sym_return] = ACTIONS(81),
        [anon_sym_del] = ACTIONS(83),
        [sym_pass_statement] = ACTIONS(85),
        [sym_break_statement] = ACTIONS(85),
        [sym_continue_statement] = ACTIONS(85),
        [anon_sym_LBRACK] = ACTIONS(103),
        [sym_number] = ACTIONS(105),
        [sym_identifier] = ACTIONS(107),
        [sym_comment] = ACTIONS(69),
        [sym__indent] = ACTIONS(813),
    },
    [431] = {
        [sym_comment] = ACTIONS(69),
        [sym__newline] = ACTIONS(928),
    },
    [432] = {
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
        [sym_number] = ACTIONS(565),
        [sym_identifier] = ACTIONS(569),
        [sym_comment] = ACTIONS(69),
        [sym__newline] = ACTIONS(567),
        [sym__dedent] = ACTIONS(567),
    },
    [433] = {
        [ts_builtin_sym_end] = ACTIONS(437),
        [anon_sym_SEMI] = ACTIONS(437),
        [anon_sym_print] = ACTIONS(439),
        [anon_sym_return] = ACTIONS(439),
        [anon_sym_del] = ACTIONS(439),
        [sym_pass_statement] = ACTIONS(439),
        [sym_break_statement] = ACTIONS(439),
        [sym_continue_statement] = ACTIONS(439),
        [anon_sym_if] = ACTIONS(439),
        [anon_sym_elif] = ACTIONS(439),
        [anon_sym_else] = ACTIONS(439),
        [anon_sym_for] = ACTIONS(439),
        [anon_sym_while] = ACTIONS(439),
        [anon_sym_try] = ACTIONS(439),
        [anon_sym_except] = ACTIONS(439),
        [anon_sym_finally] = ACTIONS(439),
        [anon_sym_with] = ACTIONS(439),
        [anon_sym_def] = ACTIONS(439),
        [anon_sym_class] = ACTIONS(439),
        [anon_sym_AT] = ACTIONS(437),
        [anon_sym_LBRACK] = ACTIONS(437),
        [sym_number] = ACTIONS(439),
        [sym_identifier] = ACTIONS(441),
        [sym_comment] = ACTIONS(69),
        [sym__newline] = ACTIONS(437),
        [sym__dedent] = ACTIONS(437),
    },
    [434] = {
        [sym__statement] = STATE(193),
        [sym__simple_statement] = STATE(186),
        [sym_print_statement] = STATE(5),
        [sym_expression_statement] = STATE(5),
        [sym_return_statement] = STATE(5),
        [sym_delete_statement] = STATE(5),
        [sym__compound_statement] = STATE(187),
        [sym_if_statement] = STATE(188),
        [sym_for_statement] = STATE(188),
        [sym_while_statement] = STATE(188),
        [sym_try_statement] = STATE(188),
        [sym_with_statement] = STATE(188),
        [sym_function_definition] = STATE(188),
        [sym_class_definition] = STATE(188),
        [sym_decorated_definition] = STATE(188),
        [sym_decorator] = STATE(21),
        [sym__expression] = STATE(22),
        [sym_binary_operator] = STATE(15),
        [sym_subscript] = STATE(15),
        [sym_call] = STATE(15),
        [sym_list] = STATE(15),
        [sym_list_comprehension] = STATE(15),
        [aux_sym_decorated_definition_repeat1] = STATE(190),
        [anon_sym_print] = ACTIONS(79),
        [anon_sym_return] = ACTIONS(81),
        [anon_sym_del] = ACTIONS(83),
        [sym_pass_statement] = ACTIONS(85),
        [sym_break_statement] = ACTIONS(85),
        [sym_continue_statement] = ACTIONS(85),
        [anon_sym_if] = ACTIONS(415),
        [anon_sym_for] = ACTIONS(417),
        [anon_sym_while] = ACTIONS(419),
        [anon_sym_try] = ACTIONS(421),
        [anon_sym_with] = ACTIONS(423),
        [anon_sym_def] = ACTIONS(425),
        [anon_sym_class] = ACTIONS(427),
        [anon_sym_AT] = ACTIONS(101),
        [anon_sym_LBRACK] = ACTIONS(103),
        [sym_number] = ACTIONS(105),
        [sym_identifier] = ACTIONS(107),
        [sym_comment] = ACTIONS(69),
        [sym__dedent] = ACTIONS(1194),
    },
    [435] = {
        [ts_builtin_sym_end] = ACTIONS(457),
        [anon_sym_SEMI] = ACTIONS(457),
        [anon_sym_print] = ACTIONS(459),
        [anon_sym_return] = ACTIONS(459),
        [anon_sym_del] = ACTIONS(459),
        [sym_pass_statement] = ACTIONS(459),
        [sym_break_statement] = ACTIONS(459),
        [sym_continue_statement] = ACTIONS(459),
        [anon_sym_if] = ACTIONS(459),
        [anon_sym_elif] = ACTIONS(459),
        [anon_sym_else] = ACTIONS(459),
        [anon_sym_for] = ACTIONS(459),
        [anon_sym_while] = ACTIONS(459),
        [anon_sym_try] = ACTIONS(459),
        [anon_sym_except] = ACTIONS(459),
        [anon_sym_finally] = ACTIONS(459),
        [anon_sym_with] = ACTIONS(459),
        [anon_sym_def] = ACTIONS(459),
        [anon_sym_class] = ACTIONS(459),
        [anon_sym_AT] = ACTIONS(457),
        [anon_sym_LBRACK] = ACTIONS(457),
        [sym_number] = ACTIONS(459),
        [sym_identifier] = ACTIONS(461),
        [sym_comment] = ACTIONS(69),
        [sym__newline] = ACTIONS(457),
        [sym__dedent] = ACTIONS(457),
    },
    [436] = {
        [sym_finally_clause] = STATE(439),
        [ts_builtin_sym_end] = ACTIONS(613),
        [anon_sym_SEMI] = ACTIONS(613),
        [anon_sym_print] = ACTIONS(611),
        [anon_sym_return] = ACTIONS(611),
        [anon_sym_del] = ACTIONS(611),
        [sym_pass_statement] = ACTIONS(611),
        [sym_break_statement] = ACTIONS(611),
        [sym_continue_statement] = ACTIONS(611),
        [anon_sym_if] = ACTIONS(611),
        [anon_sym_for] = ACTIONS(611),
        [anon_sym_while] = ACTIONS(611),
        [anon_sym_try] = ACTIONS(611),
        [anon_sym_finally] = ACTIONS(971),
        [anon_sym_with] = ACTIONS(611),
        [anon_sym_def] = ACTIONS(611),
        [anon_sym_class] = ACTIONS(611),
        [anon_sym_AT] = ACTIONS(613),
        [anon_sym_LBRACK] = ACTIONS(613),
        [sym_number] = ACTIONS(611),
        [sym_identifier] = ACTIONS(615),
        [sym_comment] = ACTIONS(69),
        [sym__newline] = ACTIONS(613),
        [sym__dedent] = ACTIONS(613),
    },
    [437] = {
        [ts_builtin_sym_end] = ACTIONS(619),
        [anon_sym_SEMI] = ACTIONS(619),
        [anon_sym_print] = ACTIONS(617),
        [anon_sym_return] = ACTIONS(617),
        [anon_sym_del] = ACTIONS(617),
        [sym_pass_statement] = ACTIONS(617),
        [sym_break_statement] = ACTIONS(617),
        [sym_continue_statement] = ACTIONS(617),
        [anon_sym_if] = ACTIONS(617),
        [anon_sym_else] = ACTIONS(617),
        [anon_sym_for] = ACTIONS(617),
        [anon_sym_while] = ACTIONS(617),
        [anon_sym_try] = ACTIONS(617),
        [anon_sym_except] = ACTIONS(617),
        [anon_sym_finally] = ACTIONS(617),
        [anon_sym_with] = ACTIONS(617),
        [anon_sym_def] = ACTIONS(617),
        [anon_sym_class] = ACTIONS(617),
        [anon_sym_AT] = ACTIONS(619),
        [anon_sym_LBRACK] = ACTIONS(619),
        [sym_number] = ACTIONS(617),
        [sym_identifier] = ACTIONS(621),
        [sym_comment] = ACTIONS(69),
        [sym__newline] = ACTIONS(619),
        [sym__dedent] = ACTIONS(619),
    },
    [438] = {
        [ts_builtin_sym_end] = ACTIONS(613),
        [anon_sym_SEMI] = ACTIONS(613),
        [anon_sym_print] = ACTIONS(611),
        [anon_sym_return] = ACTIONS(611),
        [anon_sym_del] = ACTIONS(611),
        [sym_pass_statement] = ACTIONS(611),
        [sym_break_statement] = ACTIONS(611),
        [sym_continue_statement] = ACTIONS(611),
        [anon_sym_if] = ACTIONS(611),
        [anon_sym_for] = ACTIONS(611),
        [anon_sym_while] = ACTIONS(611),
        [anon_sym_try] = ACTIONS(611),
        [anon_sym_with] = ACTIONS(611),
        [anon_sym_def] = ACTIONS(611),
        [anon_sym_class] = ACTIONS(611),
        [anon_sym_AT] = ACTIONS(613),
        [anon_sym_LBRACK] = ACTIONS(613),
        [sym_number] = ACTIONS(611),
        [sym_identifier] = ACTIONS(615),
        [sym_comment] = ACTIONS(69),
        [sym__newline] = ACTIONS(613),
        [sym__dedent] = ACTIONS(613),
    },
    [439] = {
        [ts_builtin_sym_end] = ACTIONS(625),
        [anon_sym_SEMI] = ACTIONS(625),
        [anon_sym_print] = ACTIONS(623),
        [anon_sym_return] = ACTIONS(623),
        [anon_sym_del] = ACTIONS(623),
        [sym_pass_statement] = ACTIONS(623),
        [sym_break_statement] = ACTIONS(623),
        [sym_continue_statement] = ACTIONS(623),
        [anon_sym_if] = ACTIONS(623),
        [anon_sym_for] = ACTIONS(623),
        [anon_sym_while] = ACTIONS(623),
        [anon_sym_try] = ACTIONS(623),
        [anon_sym_with] = ACTIONS(623),
        [anon_sym_def] = ACTIONS(623),
        [anon_sym_class] = ACTIONS(623),
        [anon_sym_AT] = ACTIONS(625),
        [anon_sym_LBRACK] = ACTIONS(625),
        [sym_number] = ACTIONS(623),
        [sym_identifier] = ACTIONS(627),
        [sym_comment] = ACTIONS(69),
        [sym__newline] = ACTIONS(625),
        [sym__dedent] = ACTIONS(625),
    },
    [440] = {
        [ts_builtin_sym_end] = ACTIONS(715),
        [anon_sym_SEMI] = ACTIONS(715),
        [anon_sym_print] = ACTIONS(713),
        [anon_sym_return] = ACTIONS(713),
        [anon_sym_del] = ACTIONS(713),
        [sym_pass_statement] = ACTIONS(713),
        [sym_break_statement] = ACTIONS(713),
        [sym_continue_statement] = ACTIONS(713),
        [anon_sym_if] = ACTIONS(713),
        [anon_sym_elif] = ACTIONS(713),
        [anon_sym_else] = ACTIONS(713),
        [anon_sym_for] = ACTIONS(713),
        [anon_sym_while] = ACTIONS(713),
        [anon_sym_try] = ACTIONS(713),
        [anon_sym_with] = ACTIONS(713),
        [anon_sym_def] = ACTIONS(713),
        [anon_sym_class] = ACTIONS(713),
        [anon_sym_AT] = ACTIONS(715),
        [anon_sym_LBRACK] = ACTIONS(715),
        [sym_number] = ACTIONS(713),
        [sym_identifier] = ACTIONS(717),
        [sym_comment] = ACTIONS(69),
        [sym__newline] = ACTIONS(715),
        [sym__dedent] = ACTIONS(715),
    },
    [441] = {
        [ts_builtin_sym_end] = ACTIONS(721),
        [anon_sym_SEMI] = ACTIONS(721),
        [anon_sym_print] = ACTIONS(719),
        [anon_sym_return] = ACTIONS(719),
        [anon_sym_del] = ACTIONS(719),
        [sym_pass_statement] = ACTIONS(719),
        [sym_break_statement] = ACTIONS(719),
        [sym_continue_statement] = ACTIONS(719),
        [anon_sym_if] = ACTIONS(719),
        [anon_sym_for] = ACTIONS(719),
        [anon_sym_while] = ACTIONS(719),
        [anon_sym_try] = ACTIONS(719),
        [anon_sym_with] = ACTIONS(719),
        [anon_sym_def] = ACTIONS(719),
        [anon_sym_class] = ACTIONS(719),
        [anon_sym_AT] = ACTIONS(721),
        [anon_sym_LBRACK] = ACTIONS(721),
        [sym_number] = ACTIONS(719),
        [sym_identifier] = ACTIONS(723),
        [sym_comment] = ACTIONS(69),
        [sym__newline] = ACTIONS(721),
        [sym__dedent] = ACTIONS(721),
    },
    [442] = {
        [sym__simple_statement] = STATE(431),
        [sym_print_statement] = STATE(5),
        [sym_expression_statement] = STATE(5),
        [sym_return_statement] = STATE(5),
        [sym_delete_statement] = STATE(5),
        [sym__suite] = STATE(443),
        [sym__expression] = STATE(22),
        [sym_binary_operator] = STATE(15),
        [sym_subscript] = STATE(15),
        [sym_call] = STATE(15),
        [sym_list] = STATE(15),
        [sym_list_comprehension] = STATE(15),
        [anon_sym_print] = ACTIONS(79),
        [anon_sym_return] = ACTIONS(81),
        [anon_sym_del] = ACTIONS(83),
        [sym_pass_statement] = ACTIONS(85),
        [sym_break_statement] = ACTIONS(85),
        [sym_continue_statement] = ACTIONS(85),
        [anon_sym_LBRACK] = ACTIONS(103),
        [sym_number] = ACTIONS(105),
        [sym_identifier] = ACTIONS(107),
        [sym_comment] = ACTIONS(69),
        [sym__indent] = ACTIONS(813),
    },
    [443] = {
        [ts_builtin_sym_end] = ACTIONS(631),
        [anon_sym_SEMI] = ACTIONS(631),
        [anon_sym_print] = ACTIONS(629),
        [anon_sym_return] = ACTIONS(629),
        [anon_sym_del] = ACTIONS(629),
        [sym_pass_statement] = ACTIONS(629),
        [sym_break_statement] = ACTIONS(629),
        [sym_continue_statement] = ACTIONS(629),
        [anon_sym_if] = ACTIONS(629),
        [anon_sym_for] = ACTIONS(629),
        [anon_sym_while] = ACTIONS(629),
        [anon_sym_try] = ACTIONS(629),
        [anon_sym_finally] = ACTIONS(629),
        [anon_sym_with] = ACTIONS(629),
        [anon_sym_def] = ACTIONS(629),
        [anon_sym_class] = ACTIONS(629),
        [anon_sym_AT] = ACTIONS(631),
        [anon_sym_LBRACK] = ACTIONS(631),
        [sym_number] = ACTIONS(629),
        [sym_identifier] = ACTIONS(633),
        [sym_comment] = ACTIONS(69),
        [sym__newline] = ACTIONS(631),
        [sym__dedent] = ACTIONS(631),
    },
    [444] = {
        [sym__expression] = STATE(445),
        [sym_binary_operator] = STATE(15),
        [sym_subscript] = STATE(15),
        [sym_call] = STATE(15),
        [sym_list] = STATE(15),
        [sym_list_comprehension] = STATE(15),
        [anon_sym_LBRACK] = ACTIONS(103),
        [anon_sym_RBRACK] = ACTIONS(365),
        [sym_number] = ACTIONS(105),
        [sym_identifier] = ACTIONS(105),
        [sym_comment] = ACTIONS(69),
    },
    [445] = {
        [anon_sym_COMMA] = ACTIONS(307),
        [anon_sym_COLON] = ACTIONS(307),
        [anon_sym_in] = ACTIONS(307),
        [anon_sym_LPAREN] = ACTIONS(151),
        [anon_sym_RPAREN] = ACTIONS(307),
        [anon_sym_PLUS] = ACTIONS(1228),
        [anon_sym_LBRACK] = ACTIONS(155),
        [anon_sym_RBRACK] = ACTIONS(307),
        [sym_comment] = ACTIONS(69),
        [sym__newline] = ACTIONS(307),
    },
    [446] = {
        [sym__expression] = STATE(447),
        [sym_binary_operator] = STATE(15),
        [sym_subscript] = STATE(15),
        [sym_call] = STATE(15),
        [sym_list] = STATE(15),
        [sym_list_comprehension] = STATE(15),
        [anon_sym_LBRACK] = ACTIONS(103),
        [sym_number] = ACTIONS(105),
        [sym_identifier] = ACTIONS(105),
        [sym_comment] = ACTIONS(69),
    },
    [447] = {
        [anon_sym_COMMA] = ACTIONS(235),
        [anon_sym_COLON] = ACTIONS(235),
        [anon_sym_in] = ACTIONS(235),
        [anon_sym_LPAREN] = ACTIONS(1131),
        [anon_sym_RPAREN] = ACTIONS(235),
        [anon_sym_PLUS] = ACTIONS(1230),
        [anon_sym_LBRACK] = ACTIONS(1149),
        [anon_sym_RBRACK] = ACTIONS(235),
        [sym_comment] = ACTIONS(69),
        [sym__newline] = ACTIONS(235),
    },
    [448] = {
        [sym_expression_list] = STATE(452),
        [sym__expression] = STATE(104),
        [sym_binary_operator] = STATE(34),
        [sym_subscript] = STATE(34),
        [sym_call] = STATE(34),
        [sym_list] = STATE(34),
        [sym_list_comprehension] = STATE(34),
        [anon_sym_LBRACK] = ACTIONS(111),
        [sym_number] = ACTIONS(113),
        [sym_identifier] = ACTIONS(113),
        [sym_comment] = ACTIONS(69),
    },
    [449] = {
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
        [sym_number] = ACTIONS(179),
        [sym_identifier] = ACTIONS(181),
        [sym_comment] = ACTIONS(69),
        [sym__newline] = ACTIONS(177),
        [sym__dedent] = ACTIONS(177),
    },
    [450] = {
        [sym_comment] = ACTIONS(69),
        [sym__newline] = ACTIONS(1233),
    },
    [451] = {
        [ts_builtin_sym_end] = ACTIONS(349),
        [anon_sym_SEMI] = ACTIONS(349),
        [anon_sym_print] = ACTIONS(351),
        [anon_sym_return] = ACTIONS(351),
        [anon_sym_del] = ACTIONS(351),
        [sym_pass_statement] = ACTIONS(351),
        [sym_break_statement] = ACTIONS(351),
        [sym_continue_statement] = ACTIONS(351),
        [anon_sym_if] = ACTIONS(351),
        [anon_sym_for] = ACTIONS(351),
        [anon_sym_while] = ACTIONS(351),
        [anon_sym_try] = ACTIONS(351),
        [anon_sym_with] = ACTIONS(351),
        [anon_sym_def] = ACTIONS(351),
        [anon_sym_class] = ACTIONS(351),
        [anon_sym_AT] = ACTIONS(349),
        [anon_sym_LBRACK] = ACTIONS(349),
        [sym_number] = ACTIONS(351),
        [sym_identifier] = ACTIONS(353),
        [sym_comment] = ACTIONS(69),
        [sym__newline] = ACTIONS(349),
        [sym__dedent] = ACTIONS(349),
    },
    [452] = {
        [anon_sym_in] = ACTIONS(1235),
        [sym_comment] = ACTIONS(69),
    },
    [453] = {
        [sym_expression_list] = STATE(454),
        [sym__expression] = STATE(104),
        [sym_binary_operator] = STATE(34),
        [sym_subscript] = STATE(34),
        [sym_call] = STATE(34),
        [sym_list] = STATE(34),
        [sym_list_comprehension] = STATE(34),
        [anon_sym_LBRACK] = ACTIONS(111),
        [sym_number] = ACTIONS(113),
        [sym_identifier] = ACTIONS(113),
        [sym_comment] = ACTIONS(69),
    },
    [454] = {
        [anon_sym_COLON] = ACTIONS(1089),
        [sym_comment] = ACTIONS(69),
    },
    [455] = {
        [sym__simple_statement] = STATE(431),
        [sym_print_statement] = STATE(5),
        [sym_expression_statement] = STATE(5),
        [sym_return_statement] = STATE(5),
        [sym_delete_statement] = STATE(5),
        [sym__suite] = STATE(456),
        [sym__expression] = STATE(22),
        [sym_binary_operator] = STATE(15),
        [sym_subscript] = STATE(15),
        [sym_call] = STATE(15),
        [sym_list] = STATE(15),
        [sym_list_comprehension] = STATE(15),
        [anon_sym_print] = ACTIONS(79),
        [anon_sym_return] = ACTIONS(81),
        [anon_sym_del] = ACTIONS(83),
        [sym_pass_statement] = ACTIONS(85),
        [sym_break_statement] = ACTIONS(85),
        [sym_continue_statement] = ACTIONS(85),
        [anon_sym_LBRACK] = ACTIONS(103),
        [sym_number] = ACTIONS(105),
        [sym_identifier] = ACTIONS(107),
        [sym_comment] = ACTIONS(69),
        [sym__indent] = ACTIONS(813),
    },
    [456] = {
        [sym_else_clause] = STATE(457),
        [ts_builtin_sym_end] = ACTIONS(681),
        [anon_sym_SEMI] = ACTIONS(681),
        [anon_sym_print] = ACTIONS(679),
        [anon_sym_return] = ACTIONS(679),
        [anon_sym_del] = ACTIONS(679),
        [sym_pass_statement] = ACTIONS(679),
        [sym_break_statement] = ACTIONS(679),
        [sym_continue_statement] = ACTIONS(679),
        [anon_sym_if] = ACTIONS(679),
        [anon_sym_else] = ACTIONS(1206),
        [anon_sym_for] = ACTIONS(679),
        [anon_sym_while] = ACTIONS(679),
        [anon_sym_try] = ACTIONS(679),
        [anon_sym_with] = ACTIONS(679),
        [anon_sym_def] = ACTIONS(679),
        [anon_sym_class] = ACTIONS(679),
        [anon_sym_AT] = ACTIONS(681),
        [anon_sym_LBRACK] = ACTIONS(681),
        [sym_number] = ACTIONS(679),
        [sym_identifier] = ACTIONS(683),
        [sym_comment] = ACTIONS(69),
        [sym__newline] = ACTIONS(681),
        [sym__dedent] = ACTIONS(681),
    },
    [457] = {
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
        [sym_number] = ACTIONS(685),
        [sym_identifier] = ACTIONS(689),
        [sym_comment] = ACTIONS(69),
        [sym__newline] = ACTIONS(687),
        [sym__dedent] = ACTIONS(687),
    },
    [458] = {
        [anon_sym_COMMA] = ACTIONS(827),
        [anon_sym_COLON] = ACTIONS(827),
        [anon_sym_for] = ACTIONS(827),
        [anon_sym_in] = ACTIONS(827),
        [anon_sym_as] = ACTIONS(827),
        [anon_sym_LPAREN] = ACTIONS(827),
        [anon_sym_RPAREN] = ACTIONS(827),
        [anon_sym_PLUS] = ACTIONS(827),
        [anon_sym_LBRACK] = ACTIONS(827),
        [anon_sym_RBRACK] = ACTIONS(827),
        [sym_comment] = ACTIONS(69),
        [sym__newline] = ACTIONS(827),
    },
    [459] = {
        [sym__expression] = STATE(79),
        [sym_binary_operator] = STATE(34),
        [sym_subscript] = STATE(34),
        [sym_call] = STATE(34),
        [sym_keyword_argument] = STATE(80),
        [sym_dictionary_splat_argument] = STATE(461),
        [sym_list] = STATE(34),
        [sym_list_comprehension] = STATE(34),
        [anon_sym_LBRACK] = ACTIONS(111),
        [anon_sym_STAR_STAR] = ACTIONS(185),
        [sym_number] = ACTIONS(113),
        [sym_identifier] = ACTIONS(187),
        [sym_comment] = ACTIONS(69),
    },
    [460] = {
        [anon_sym_COMMA] = ACTIONS(1237),
        [anon_sym_COLON] = ACTIONS(1237),
        [anon_sym_for] = ACTIONS(1237),
        [anon_sym_in] = ACTIONS(1237),
        [anon_sym_as] = ACTIONS(1237),
        [anon_sym_LPAREN] = ACTIONS(1237),
        [anon_sym_RPAREN] = ACTIONS(1237),
        [anon_sym_PLUS] = ACTIONS(1237),
        [anon_sym_LBRACK] = ACTIONS(1237),
        [anon_sym_RBRACK] = ACTIONS(1237),
        [sym_comment] = ACTIONS(69),
        [sym__newline] = ACTIONS(1237),
    },
    [461] = {
        [anon_sym_RPAREN] = ACTIONS(1240),
        [sym_comment] = ACTIONS(69),
    },
    [462] = {
        [anon_sym_COMMA] = ACTIONS(1242),
        [anon_sym_COLON] = ACTIONS(1242),
        [anon_sym_for] = ACTIONS(1242),
        [anon_sym_in] = ACTIONS(1242),
        [anon_sym_as] = ACTIONS(1242),
        [anon_sym_LPAREN] = ACTIONS(1242),
        [anon_sym_RPAREN] = ACTIONS(1242),
        [anon_sym_PLUS] = ACTIONS(1242),
        [anon_sym_LBRACK] = ACTIONS(1242),
        [anon_sym_RBRACK] = ACTIONS(1242),
        [sym_comment] = ACTIONS(69),
        [sym__newline] = ACTIONS(1242),
    },
    [463] = {
        [anon_sym_RPAREN] = ACTIONS(1218),
        [anon_sym_STAR] = ACTIONS(1245),
        [anon_sym_LBRACK] = ACTIONS(1248),
        [anon_sym_STAR_STAR] = ACTIONS(1248),
        [sym_number] = ACTIONS(1245),
        [sym_identifier] = ACTIONS(1245),
        [sym_comment] = ACTIONS(69),
    },
    [464] = {
        [sym__expression] = STATE(472),
        [sym_binary_operator] = STATE(15),
        [sym_subscript] = STATE(15),
        [sym_call] = STATE(15),
        [sym_list] = STATE(15),
        [sym_list_comprehension] = STATE(15),
        [anon_sym_RPAREN] = ACTIONS(1218),
        [anon_sym_STAR] = ACTIONS(1245),
        [anon_sym_LBRACK] = ACTIONS(791),
        [anon_sym_DOT_DOT_DOT] = ACTIONS(203),
        [anon_sym_RBRACK] = ACTIONS(1251),
        [anon_sym_STAR_STAR] = ACTIONS(1248),
        [sym_number] = ACTIONS(803),
        [sym_identifier] = ACTIONS(803),
        [sym_comment] = ACTIONS(69),
    },
    [465] = {
        [sym__simple_statement] = STATE(431),
        [sym_print_statement] = STATE(5),
        [sym_expression_statement] = STATE(5),
        [sym_return_statement] = STATE(5),
        [sym_delete_statement] = STATE(5),
        [sym__suite] = STATE(468),
        [sym__expression] = STATE(22),
        [sym_binary_operator] = STATE(15),
        [sym_subscript] = STATE(15),
        [sym_call] = STATE(15),
        [sym_list] = STATE(15),
        [sym_list_comprehension] = STATE(15),
        [anon_sym_print] = ACTIONS(79),
        [anon_sym_return] = ACTIONS(81),
        [anon_sym_del] = ACTIONS(83),
        [sym_pass_statement] = ACTIONS(85),
        [sym_break_statement] = ACTIONS(85),
        [sym_continue_statement] = ACTIONS(85),
        [anon_sym_LBRACK] = ACTIONS(103),
        [sym_number] = ACTIONS(105),
        [sym_identifier] = ACTIONS(107),
        [sym_comment] = ACTIONS(69),
        [sym__indent] = ACTIONS(813),
    },
    [466] = {
        [anon_sym_COMMA] = ACTIONS(1237),
        [anon_sym_COLON] = ACTIONS(1237),
        [anon_sym_for] = ACTIONS(1237),
        [anon_sym_in] = ACTIONS(1237),
        [anon_sym_as] = ACTIONS(1237),
        [anon_sym_LPAREN] = ACTIONS(1237),
        [anon_sym_RPAREN] = ACTIONS(1237),
        [anon_sym_PLUS] = ACTIONS(1237),
        [anon_sym_LBRACK] = ACTIONS(1237),
        [anon_sym_RBRACK] = ACTIONS(1237),
        [sym_comment] = ACTIONS(69),
        [sym__newline] = ACTIONS(1253),
    },
    [467] = {
        [anon_sym_COMMA] = ACTIONS(1257),
        [anon_sym_COLON] = ACTIONS(1257),
        [anon_sym_for] = ACTIONS(1257),
        [anon_sym_in] = ACTIONS(1257),
        [anon_sym_as] = ACTIONS(1257),
        [anon_sym_LPAREN] = ACTIONS(1257),
        [anon_sym_RPAREN] = ACTIONS(1257),
        [anon_sym_PLUS] = ACTIONS(1257),
        [anon_sym_LBRACK] = ACTIONS(1257),
        [anon_sym_RBRACK] = ACTIONS(1257),
        [sym_comment] = ACTIONS(69),
        [sym__newline] = ACTIONS(1257),
    },
    [468] = {
        [sym_elif_clause] = STATE(469),
        [sym_else_clause] = STATE(470),
        [aux_sym_if_statement_repeat1] = STATE(420),
        [ts_builtin_sym_end] = ACTIONS(1261),
        [anon_sym_SEMI] = ACTIONS(1261),
        [anon_sym_print] = ACTIONS(1267),
        [anon_sym_return] = ACTIONS(1267),
        [anon_sym_del] = ACTIONS(1267),
        [sym_pass_statement] = ACTIONS(1267),
        [sym_break_statement] = ACTIONS(1267),
        [sym_continue_statement] = ACTIONS(1267),
        [anon_sym_if] = ACTIONS(1267),
        [anon_sym_elif] = ACTIONS(1058),
        [anon_sym_else] = ACTIONS(1061),
        [anon_sym_for] = ACTIONS(1267),
        [anon_sym_while] = ACTIONS(1267),
        [anon_sym_try] = ACTIONS(1267),
        [anon_sym_except] = ACTIONS(1273),
        [anon_sym_finally] = ACTIONS(1273),
        [anon_sym_with] = ACTIONS(1267),
        [anon_sym_def] = ACTIONS(1267),
        [anon_sym_class] = ACTIONS(1267),
        [anon_sym_AT] = ACTIONS(1261),
        [anon_sym_LBRACK] = ACTIONS(1261),
        [sym_number] = ACTIONS(1267),
        [sym_identifier] = ACTIONS(1276),
        [sym_comment] = ACTIONS(69),
        [sym__newline] = ACTIONS(1261),
        [sym__dedent] = ACTIONS(1261),
    },
    [469] = {
        [ts_builtin_sym_end] = ACTIONS(703),
        [anon_sym_SEMI] = ACTIONS(703),
        [anon_sym_print] = ACTIONS(701),
        [anon_sym_return] = ACTIONS(701),
        [anon_sym_del] = ACTIONS(701),
        [sym_pass_statement] = ACTIONS(701),
        [sym_break_statement] = ACTIONS(701),
        [sym_continue_statement] = ACTIONS(701),
        [anon_sym_if] = ACTIONS(701),
        [anon_sym_elif] = ACTIONS(701),
        [anon_sym_else] = ACTIONS(701),
        [anon_sym_for] = ACTIONS(701),
        [anon_sym_while] = ACTIONS(701),
        [anon_sym_try] = ACTIONS(701),
        [anon_sym_with] = ACTIONS(701),
        [anon_sym_def] = ACTIONS(701),
        [anon_sym_class] = ACTIONS(701),
        [anon_sym_AT] = ACTIONS(703),
        [anon_sym_LBRACK] = ACTIONS(703),
        [sym_number] = ACTIONS(701),
        [sym_identifier] = ACTIONS(705),
        [sym_comment] = ACTIONS(69),
        [sym__newline] = ACTIONS(703),
        [sym__dedent] = ACTIONS(703),
    },
    [470] = {
        [ts_builtin_sym_end] = ACTIONS(1282),
        [anon_sym_SEMI] = ACTIONS(1282),
        [anon_sym_print] = ACTIONS(1285),
        [anon_sym_return] = ACTIONS(1285),
        [anon_sym_del] = ACTIONS(1285),
        [sym_pass_statement] = ACTIONS(1285),
        [sym_break_statement] = ACTIONS(1285),
        [sym_continue_statement] = ACTIONS(1285),
        [anon_sym_if] = ACTIONS(1285),
        [anon_sym_for] = ACTIONS(1285),
        [anon_sym_while] = ACTIONS(1285),
        [anon_sym_try] = ACTIONS(1285),
        [anon_sym_with] = ACTIONS(1285),
        [anon_sym_def] = ACTIONS(1285),
        [anon_sym_class] = ACTIONS(1285),
        [anon_sym_AT] = ACTIONS(1282),
        [anon_sym_LBRACK] = ACTIONS(1282),
        [sym_number] = ACTIONS(1285),
        [sym_identifier] = ACTIONS(1288),
        [sym_comment] = ACTIONS(69),
        [sym__newline] = ACTIONS(1282),
        [sym__dedent] = ACTIONS(1282),
    },
    [471] = {
        [anon_sym_COMMA] = ACTIONS(1291),
        [anon_sym_COLON] = ACTIONS(1291),
        [anon_sym_for] = ACTIONS(1291),
        [anon_sym_in] = ACTIONS(1291),
        [anon_sym_as] = ACTIONS(1291),
        [anon_sym_LPAREN] = ACTIONS(1291),
        [anon_sym_RPAREN] = ACTIONS(1291),
        [anon_sym_PLUS] = ACTIONS(1291),
        [anon_sym_LBRACK] = ACTIONS(1291),
        [anon_sym_RBRACK] = ACTIONS(1291),
        [sym_comment] = ACTIONS(69),
        [sym__newline] = ACTIONS(1291),
    },
    [472] = {
        [anon_sym_COMMA] = ACTIONS(1294),
        [anon_sym_COLON] = ACTIONS(1297),
        [anon_sym_in] = ACTIONS(319),
        [anon_sym_LPAREN] = ACTIONS(151),
        [anon_sym_RPAREN] = ACTIONS(319),
        [anon_sym_PLUS] = ACTIONS(1228),
        [anon_sym_LBRACK] = ACTIONS(155),
        [anon_sym_RBRACK] = ACTIONS(1294),
        [sym_comment] = ACTIONS(69),
        [sym__newline] = ACTIONS(319),
    },
    [473] = {
        [sym__simple_statement] = STATE(431),
        [sym_print_statement] = STATE(5),
        [sym_expression_statement] = STATE(5),
        [sym_return_statement] = STATE(5),
        [sym_delete_statement] = STATE(5),
        [sym__suite] = STATE(474),
        [sym__expression] = STATE(22),
        [sym_binary_operator] = STATE(15),
        [sym_subscript] = STATE(15),
        [sym_call] = STATE(15),
        [sym_list] = STATE(15),
        [sym_list_comprehension] = STATE(15),
        [anon_sym_print] = ACTIONS(79),
        [anon_sym_return] = ACTIONS(81),
        [anon_sym_del] = ACTIONS(83),
        [sym_pass_statement] = ACTIONS(85),
        [sym_break_statement] = ACTIONS(85),
        [sym_continue_statement] = ACTIONS(85),
        [anon_sym_LBRACK] = ACTIONS(103),
        [sym_number] = ACTIONS(105),
        [sym_identifier] = ACTIONS(107),
        [sym_comment] = ACTIONS(69),
        [sym__indent] = ACTIONS(813),
    },
    [474] = {
        [ts_builtin_sym_end] = ACTIONS(649),
        [anon_sym_SEMI] = ACTIONS(649),
        [anon_sym_print] = ACTIONS(647),
        [anon_sym_return] = ACTIONS(647),
        [anon_sym_del] = ACTIONS(647),
        [sym_pass_statement] = ACTIONS(647),
        [sym_break_statement] = ACTIONS(647),
        [sym_continue_statement] = ACTIONS(647),
        [anon_sym_if] = ACTIONS(647),
        [anon_sym_else] = ACTIONS(647),
        [anon_sym_for] = ACTIONS(647),
        [anon_sym_while] = ACTIONS(647),
        [anon_sym_try] = ACTIONS(647),
        [anon_sym_except] = ACTIONS(647),
        [anon_sym_finally] = ACTIONS(647),
        [anon_sym_with] = ACTIONS(647),
        [anon_sym_def] = ACTIONS(647),
        [anon_sym_class] = ACTIONS(647),
        [anon_sym_AT] = ACTIONS(649),
        [anon_sym_LBRACK] = ACTIONS(649),
        [sym_number] = ACTIONS(647),
        [sym_identifier] = ACTIONS(651),
        [sym_comment] = ACTIONS(69),
        [sym__newline] = ACTIONS(649),
        [sym__dedent] = ACTIONS(649),
    },
    [475] = {
        [anon_sym_COLON] = ACTIONS(1300),
        [sym_comment] = ACTIONS(69),
    },
    [476] = {
        [sym__simple_statement] = STATE(431),
        [sym_print_statement] = STATE(5),
        [sym_expression_statement] = STATE(5),
        [sym_return_statement] = STATE(5),
        [sym_delete_statement] = STATE(5),
        [sym__suite] = STATE(477),
        [sym__expression] = STATE(22),
        [sym_binary_operator] = STATE(15),
        [sym_subscript] = STATE(15),
        [sym_call] = STATE(15),
        [sym_list] = STATE(15),
        [sym_list_comprehension] = STATE(15),
        [anon_sym_print] = ACTIONS(79),
        [anon_sym_return] = ACTIONS(81),
        [anon_sym_del] = ACTIONS(83),
        [sym_pass_statement] = ACTIONS(85),
        [sym_break_statement] = ACTIONS(85),
        [sym_continue_statement] = ACTIONS(85),
        [anon_sym_LBRACK] = ACTIONS(103),
        [sym_number] = ACTIONS(105),
        [sym_identifier] = ACTIONS(107),
        [sym_comment] = ACTIONS(69),
        [sym__indent] = ACTIONS(813),
    },
    [477] = {
        [ts_builtin_sym_end] = ACTIONS(431),
        [anon_sym_SEMI] = ACTIONS(431),
        [anon_sym_print] = ACTIONS(433),
        [anon_sym_return] = ACTIONS(433),
        [anon_sym_del] = ACTIONS(433),
        [sym_pass_statement] = ACTIONS(433),
        [sym_break_statement] = ACTIONS(433),
        [sym_continue_statement] = ACTIONS(433),
        [anon_sym_if] = ACTIONS(433),
        [anon_sym_for] = ACTIONS(433),
        [anon_sym_while] = ACTIONS(433),
        [anon_sym_try] = ACTIONS(433),
        [anon_sym_with] = ACTIONS(433),
        [anon_sym_def] = ACTIONS(433),
        [anon_sym_class] = ACTIONS(433),
        [anon_sym_AT] = ACTIONS(431),
        [anon_sym_LBRACK] = ACTIONS(431),
        [sym_number] = ACTIONS(433),
        [sym_identifier] = ACTIONS(435),
        [sym_comment] = ACTIONS(69),
        [sym__newline] = ACTIONS(431),
        [sym__dedent] = ACTIONS(431),
    },
    [478] = {
        [ts_builtin_sym_end] = ACTIONS(1302),
        [anon_sym_SEMI] = ACTIONS(1302),
        [anon_sym_print] = ACTIONS(1306),
        [anon_sym_return] = ACTIONS(1306),
        [anon_sym_del] = ACTIONS(1306),
        [sym_pass_statement] = ACTIONS(1306),
        [sym_break_statement] = ACTIONS(1306),
        [sym_continue_statement] = ACTIONS(1306),
        [anon_sym_if] = ACTIONS(1306),
        [anon_sym_for] = ACTIONS(1306),
        [anon_sym_while] = ACTIONS(1306),
        [anon_sym_try] = ACTIONS(1306),
        [anon_sym_with] = ACTIONS(1306),
        [anon_sym_def] = ACTIONS(1306),
        [anon_sym_class] = ACTIONS(1306),
        [anon_sym_AT] = ACTIONS(1302),
        [anon_sym_LBRACK] = ACTIONS(1302),
        [sym_number] = ACTIONS(1306),
        [sym_identifier] = ACTIONS(1310),
        [sym_comment] = ACTIONS(69),
        [sym__newline] = ACTIONS(1302),
        [sym__dedent] = ACTIONS(1302),
    },
    [479] = {
        [ts_builtin_sym_end] = ACTIONS(593),
        [anon_sym_SEMI] = ACTIONS(593),
        [anon_sym_print] = ACTIONS(591),
        [anon_sym_return] = ACTIONS(591),
        [anon_sym_del] = ACTIONS(591),
        [sym_pass_statement] = ACTIONS(591),
        [sym_break_statement] = ACTIONS(591),
        [sym_continue_statement] = ACTIONS(591),
        [anon_sym_if] = ACTIONS(591),
        [anon_sym_else] = ACTIONS(591),
        [anon_sym_for] = ACTIONS(591),
        [anon_sym_while] = ACTIONS(591),
        [anon_sym_try] = ACTIONS(591),
        [anon_sym_except] = ACTIONS(591),
        [anon_sym_finally] = ACTIONS(591),
        [anon_sym_with] = ACTIONS(591),
        [anon_sym_def] = ACTIONS(591),
        [anon_sym_class] = ACTIONS(591),
        [anon_sym_AT] = ACTIONS(593),
        [anon_sym_LBRACK] = ACTIONS(593),
        [sym_number] = ACTIONS(591),
        [sym_identifier] = ACTIONS(595),
        [sym_comment] = ACTIONS(69),
        [sym__newline] = ACTIONS(593),
        [sym__dedent] = ACTIONS(593),
    },
    [480] = {
        [ts_builtin_sym_end] = ACTIONS(599),
        [anon_sym_SEMI] = ACTIONS(599),
        [anon_sym_print] = ACTIONS(597),
        [anon_sym_return] = ACTIONS(597),
        [anon_sym_del] = ACTIONS(597),
        [sym_pass_statement] = ACTIONS(597),
        [sym_break_statement] = ACTIONS(597),
        [sym_continue_statement] = ACTIONS(597),
        [anon_sym_if] = ACTIONS(597),
        [anon_sym_for] = ACTIONS(597),
        [anon_sym_while] = ACTIONS(597),
        [anon_sym_try] = ACTIONS(597),
        [anon_sym_with] = ACTIONS(597),
        [anon_sym_def] = ACTIONS(597),
        [anon_sym_class] = ACTIONS(597),
        [anon_sym_AT] = ACTIONS(599),
        [anon_sym_LBRACK] = ACTIONS(599),
        [sym_number] = ACTIONS(597),
        [sym_identifier] = ACTIONS(601),
        [sym_comment] = ACTIONS(69),
        [sym__newline] = ACTIONS(599),
        [sym__dedent] = ACTIONS(599),
    },
    [481] = {
        [anon_sym_COLON] = ACTIONS(1314),
        [sym_comment] = ACTIONS(69),
    },
    [482] = {
        [sym_dictionary_splat_parameter] = STATE(484),
        [anon_sym_STAR] = ACTIONS(523),
        [sym_comment] = ACTIONS(69),
    },
    [483] = {
        [anon_sym_COLON] = ACTIONS(1319),
        [sym_comment] = ACTIONS(69),
    },
    [484] = {
        [anon_sym_RPAREN] = ACTIONS(1322),
        [sym_comment] = ACTIONS(69),
    },
    [485] = {
        [anon_sym_COLON] = ACTIONS(1324),
        [sym_comment] = ACTIONS(69),
    },
    [486] = {
        [anon_sym_RPAREN] = ACTIONS(1327),
        [anon_sym_STAR] = ACTIONS(1329),
        [sym_identifier] = ACTIONS(1332),
        [sym_comment] = ACTIONS(69),
    },
    [487] = {
        [anon_sym_COLON] = ACTIONS(1335),
        [sym_comment] = ACTIONS(69),
    },
    [488] = {
        [sym__simple_statement] = STATE(431),
        [sym_print_statement] = STATE(5),
        [sym_expression_statement] = STATE(5),
        [sym_return_statement] = STATE(5),
        [sym_delete_statement] = STATE(5),
        [sym__suite] = STATE(489),
        [sym__expression] = STATE(22),
        [sym_binary_operator] = STATE(15),
        [sym_subscript] = STATE(15),
        [sym_call] = STATE(15),
        [sym_list] = STATE(15),
        [sym_list_comprehension] = STATE(15),
        [anon_sym_print] = ACTIONS(79),
        [anon_sym_return] = ACTIONS(81),
        [anon_sym_del] = ACTIONS(83),
        [sym_pass_statement] = ACTIONS(85),
        [sym_break_statement] = ACTIONS(85),
        [sym_continue_statement] = ACTIONS(85),
        [anon_sym_LBRACK] = ACTIONS(103),
        [sym_number] = ACTIONS(105),
        [sym_identifier] = ACTIONS(107),
        [sym_comment] = ACTIONS(69),
        [sym__indent] = ACTIONS(813),
    },
    [489] = {
        [ts_builtin_sym_end] = ACTIONS(495),
        [anon_sym_SEMI] = ACTIONS(495),
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
        [anon_sym_AT] = ACTIONS(495),
        [anon_sym_LBRACK] = ACTIONS(495),
        [sym_number] = ACTIONS(493),
        [sym_identifier] = ACTIONS(497),
        [sym_comment] = ACTIONS(69),
        [sym__newline] = ACTIONS(495),
        [sym__dedent] = ACTIONS(495),
    },
    [490] = {
        [sym__simple_statement] = STATE(431),
        [sym_print_statement] = STATE(5),
        [sym_expression_statement] = STATE(5),
        [sym_return_statement] = STATE(5),
        [sym_delete_statement] = STATE(5),
        [sym__suite] = STATE(491),
        [sym__expression] = STATE(22),
        [sym_binary_operator] = STATE(15),
        [sym_subscript] = STATE(15),
        [sym_call] = STATE(15),
        [sym_list] = STATE(15),
        [sym_list_comprehension] = STATE(15),
        [anon_sym_print] = ACTIONS(79),
        [anon_sym_return] = ACTIONS(81),
        [anon_sym_del] = ACTIONS(83),
        [sym_pass_statement] = ACTIONS(85),
        [sym_break_statement] = ACTIONS(85),
        [sym_continue_statement] = ACTIONS(85),
        [anon_sym_LBRACK] = ACTIONS(103),
        [sym_number] = ACTIONS(105),
        [sym_identifier] = ACTIONS(107),
        [sym_comment] = ACTIONS(69),
        [sym__indent] = ACTIONS(813),
    },
    [491] = {
        [ts_builtin_sym_end] = ACTIONS(575),
        [anon_sym_SEMI] = ACTIONS(575),
        [anon_sym_print] = ACTIONS(573),
        [anon_sym_return] = ACTIONS(573),
        [anon_sym_del] = ACTIONS(573),
        [sym_pass_statement] = ACTIONS(573),
        [sym_break_statement] = ACTIONS(573),
        [sym_continue_statement] = ACTIONS(573),
        [anon_sym_if] = ACTIONS(573),
        [anon_sym_for] = ACTIONS(573),
        [anon_sym_while] = ACTIONS(573),
        [anon_sym_try] = ACTIONS(573),
        [anon_sym_with] = ACTIONS(573),
        [anon_sym_def] = ACTIONS(573),
        [anon_sym_class] = ACTIONS(573),
        [anon_sym_AT] = ACTIONS(575),
        [anon_sym_LBRACK] = ACTIONS(575),
        [sym_number] = ACTIONS(573),
        [sym_identifier] = ACTIONS(577),
        [sym_comment] = ACTIONS(69),
        [sym__newline] = ACTIONS(575),
        [sym__dedent] = ACTIONS(575),
    },
    [492] = {
        [ts_builtin_sym_end] = ACTIONS(909),
        [anon_sym_SEMI] = ACTIONS(909),
        [anon_sym_print] = ACTIONS(912),
        [anon_sym_return] = ACTIONS(912),
        [anon_sym_del] = ACTIONS(912),
        [sym_pass_statement] = ACTIONS(912),
        [sym_break_statement] = ACTIONS(912),
        [sym_continue_statement] = ACTIONS(912),
        [anon_sym_if] = ACTIONS(912),
        [anon_sym_elif] = ACTIONS(439),
        [anon_sym_else] = ACTIONS(439),
        [anon_sym_for] = ACTIONS(912),
        [anon_sym_while] = ACTIONS(912),
        [anon_sym_try] = ACTIONS(912),
        [anon_sym_except] = ACTIONS(439),
        [anon_sym_finally] = ACTIONS(439),
        [anon_sym_with] = ACTIONS(912),
        [anon_sym_def] = ACTIONS(912),
        [anon_sym_class] = ACTIONS(912),
        [anon_sym_AT] = ACTIONS(909),
        [anon_sym_LBRACK] = ACTIONS(909),
        [sym_number] = ACTIONS(912),
        [sym_identifier] = ACTIONS(925),
        [sym_comment] = ACTIONS(69),
        [sym__newline] = ACTIONS(909),
        [sym__dedent] = ACTIONS(909),
    },
    [493] = {
        [sym__simple_statement] = STATE(431),
        [sym_print_statement] = STATE(5),
        [sym_expression_statement] = STATE(5),
        [sym_return_statement] = STATE(5),
        [sym_delete_statement] = STATE(5),
        [sym__suite] = STATE(497),
        [sym__expression] = STATE(22),
        [sym_binary_operator] = STATE(15),
        [sym_subscript] = STATE(15),
        [sym_call] = STATE(15),
        [sym_list] = STATE(15),
        [sym_list_comprehension] = STATE(15),
        [anon_sym_print] = ACTIONS(79),
        [anon_sym_return] = ACTIONS(81),
        [anon_sym_del] = ACTIONS(83),
        [sym_pass_statement] = ACTIONS(85),
        [sym_break_statement] = ACTIONS(85),
        [sym_continue_statement] = ACTIONS(85),
        [anon_sym_LBRACK] = ACTIONS(103),
        [sym_number] = ACTIONS(105),
        [sym_identifier] = ACTIONS(107),
        [sym_comment] = ACTIONS(69),
        [sym__indent] = ACTIONS(813),
    },
    [494] = {
        [sym_default_parameter] = STATE(216),
        [sym_list_splat_parameter] = STATE(217),
        [sym_dictionary_splat_parameter] = STATE(218),
        [sym_expression_list] = STATE(496),
        [sym__expression] = STATE(104),
        [sym_binary_operator] = STATE(34),
        [sym_subscript] = STATE(34),
        [sym_call] = STATE(34),
        [sym_list] = STATE(34),
        [sym_list_comprehension] = STATE(34),
        [aux_sym_parameters_repeat1] = STATE(219),
        [anon_sym_RPAREN] = ACTIONS(485),
        [anon_sym_STAR] = ACTIONS(487),
        [anon_sym_LBRACK] = ACTIONS(111),
        [sym_number] = ACTIONS(113),
        [sym_identifier] = ACTIONS(1338),
        [sym_comment] = ACTIONS(69),
    },
    [495] = {
        [anon_sym_COMMA] = ACTIONS(1340),
        [anon_sym_LPAREN] = ACTIONS(125),
        [anon_sym_RPAREN] = ACTIONS(1343),
        [anon_sym_EQ] = ACTIONS(509),
        [anon_sym_PLUS] = ACTIONS(125),
        [anon_sym_LBRACK] = ACTIONS(125),
        [sym_comment] = ACTIONS(69),
    },
    [496] = {
        [anon_sym_RPAREN] = ACTIONS(1093),
        [sym_comment] = ACTIONS(69),
    },
    [497] = {
        [ts_builtin_sym_end] = ACTIONS(479),
        [anon_sym_SEMI] = ACTIONS(479),
        [anon_sym_print] = ACTIONS(477),
        [anon_sym_return] = ACTIONS(477),
        [anon_sym_del] = ACTIONS(477),
        [sym_pass_statement] = ACTIONS(477),
        [sym_break_statement] = ACTIONS(477),
        [sym_continue_statement] = ACTIONS(477),
        [anon_sym_if] = ACTIONS(477),
        [anon_sym_for] = ACTIONS(477),
        [anon_sym_while] = ACTIONS(477),
        [anon_sym_try] = ACTIONS(477),
        [anon_sym_with] = ACTIONS(477),
        [anon_sym_def] = ACTIONS(477),
        [anon_sym_class] = ACTIONS(477),
        [anon_sym_AT] = ACTIONS(479),
        [anon_sym_LBRACK] = ACTIONS(479),
        [sym_number] = ACTIONS(477),
        [sym_identifier] = ACTIONS(481),
        [sym_comment] = ACTIONS(69),
        [sym__newline] = ACTIONS(479),
        [sym__dedent] = ACTIONS(479),
    },
    [498] = {
        [aux_sym_print_statement_repeat1] = STATE(145),
        [aux_sym_subscript_repeat1] = STATE(41),
        [anon_sym_COMMA] = ACTIONS(1346),
        [anon_sym_for] = ACTIONS(357),
        [anon_sym_LPAREN] = ACTIONS(197),
        [anon_sym_PLUS] = ACTIONS(199),
        [anon_sym_LBRACK] = ACTIONS(201),
        [anon_sym_RBRACK] = ACTIONS(1348),
        [sym_comment] = ACTIONS(69),
    },
    [499] = {
        [sym__expression] = STATE(501),
        [sym_binary_operator] = STATE(34),
        [sym_subscript] = STATE(34),
        [sym_call] = STATE(34),
        [sym_list] = STATE(34),
        [sym_list_comprehension] = STATE(34),
        [anon_sym_LBRACK] = ACTIONS(111),
        [anon_sym_DOT_DOT_DOT] = ACTIONS(203),
        [anon_sym_RBRACK] = ACTIONS(1251),
        [sym_number] = ACTIONS(113),
        [sym_identifier] = ACTIONS(113),
        [sym_comment] = ACTIONS(69),
    },
    [500] = {
        [anon_sym_COMMA] = ACTIONS(1350),
        [anon_sym_COLON] = ACTIONS(1350),
        [anon_sym_for] = ACTIONS(1350),
        [anon_sym_in] = ACTIONS(1350),
        [anon_sym_as] = ACTIONS(1350),
        [anon_sym_LPAREN] = ACTIONS(1350),
        [anon_sym_RPAREN] = ACTIONS(1350),
        [anon_sym_PLUS] = ACTIONS(1350),
        [anon_sym_LBRACK] = ACTIONS(1350),
        [anon_sym_RBRACK] = ACTIONS(1350),
        [sym_comment] = ACTIONS(69),
        [sym__newline] = ACTIONS(1350),
    },
    [501] = {
        [anon_sym_COMMA] = ACTIONS(1294),
        [anon_sym_LPAREN] = ACTIONS(197),
        [anon_sym_PLUS] = ACTIONS(199),
        [anon_sym_LBRACK] = ACTIONS(201),
        [anon_sym_RBRACK] = ACTIONS(1294),
        [sym_comment] = ACTIONS(69),
    },
    [502] = {
        [anon_sym_COMMA] = ACTIONS(235),
        [anon_sym_COLON] = ACTIONS(235),
        [anon_sym_for] = ACTIONS(235),
        [anon_sym_in] = ACTIONS(235),
        [anon_sym_as] = ACTIONS(235),
        [anon_sym_LPAREN] = ACTIONS(1131),
        [anon_sym_RPAREN] = ACTIONS(235),
        [anon_sym_PLUS] = ACTIONS(1146),
        [anon_sym_LBRACK] = ACTIONS(1149),
        [anon_sym_RBRACK] = ACTIONS(235),
        [sym_comment] = ACTIONS(69),
        [sym__newline] = ACTIONS(235),
    },
    [503] = {
        [anon_sym_LPAREN] = ACTIONS(1353),
        [anon_sym_DOT] = ACTIONS(1353),
        [sym_comment] = ACTIONS(69),
        [sym__newline] = ACTIONS(1353),
    },
    [504] = {
        [anon_sym_COLON] = ACTIONS(1356),
        [anon_sym_LPAREN] = ACTIONS(1358),
        [sym_comment] = ACTIONS(69),
    },
    [505] = {
        [sym_expression_list] = STATE(496),
        [sym__expression] = STATE(104),
        [sym_binary_operator] = STATE(34),
        [sym_subscript] = STATE(34),
        [sym_call] = STATE(34),
        [sym_list] = STATE(34),
        [sym_list_comprehension] = STATE(34),
        [anon_sym_LBRACK] = ACTIONS(111),
        [sym_number] = ACTIONS(113),
        [sym_identifier] = ACTIONS(113),
        [sym_comment] = ACTIONS(69),
    },
    [506] = {
        [anon_sym_COMMA] = ACTIONS(1360),
        [anon_sym_LPAREN] = ACTIONS(125),
        [anon_sym_RPAREN] = ACTIONS(1363),
        [anon_sym_PLUS] = ACTIONS(125),
        [anon_sym_LBRACK] = ACTIONS(125),
        [sym_comment] = ACTIONS(69),
    },
    [507] = {
        [anon_sym_COMMA] = ACTIONS(1367),
        [anon_sym_LPAREN] = ACTIONS(197),
        [anon_sym_RPAREN] = ACTIONS(1367),
        [anon_sym_PLUS] = ACTIONS(199),
        [anon_sym_LBRACK] = ACTIONS(201),
        [sym_comment] = ACTIONS(69),
    },
    [508] = {
        [sym__expression] = STATE(112),
        [sym_binary_operator] = STATE(34),
        [sym_subscript] = STATE(34),
        [sym_call] = STATE(34),
        [sym_list] = STATE(34),
        [sym_list_comprehension] = STATE(34),
        [anon_sym_STAR] = ACTIONS(501),
        [anon_sym_LBRACK] = ACTIONS(111),
        [sym_number] = ACTIONS(113),
        [sym_identifier] = ACTIONS(1370),
        [sym_comment] = ACTIONS(69),
    },
    [509] = {
        [anon_sym_COMMA] = ACTIONS(1340),
        [anon_sym_LPAREN] = ACTIONS(125),
        [anon_sym_RPAREN] = ACTIONS(1343),
        [anon_sym_EQ] = ACTIONS(894),
        [anon_sym_PLUS] = ACTIONS(125),
        [anon_sym_LBRACK] = ACTIONS(125),
        [sym_comment] = ACTIONS(69),
    },
    [510] = {
        [aux_sym_print_statement_repeat1] = STATE(513),
        [anon_sym_COMMA] = ACTIONS(1372),
        [anon_sym_LPAREN] = ACTIONS(197),
        [anon_sym_RPAREN] = ACTIONS(1374),
        [anon_sym_PLUS] = ACTIONS(199),
        [anon_sym_LBRACK] = ACTIONS(201),
        [sym_comment] = ACTIONS(69),
    },
    [511] = {
        [sym__expression] = STATE(108),
        [sym_binary_operator] = STATE(34),
        [sym_subscript] = STATE(34),
        [sym_call] = STATE(34),
        [sym_list] = STATE(34),
        [sym_list_comprehension] = STATE(34),
        [anon_sym_RPAREN] = ACTIONS(335),
        [anon_sym_STAR] = ACTIONS(279),
        [anon_sym_LBRACK] = ACTIONS(1377),
        [anon_sym_STAR_STAR] = ACTIONS(281),
        [sym_number] = ACTIONS(1380),
        [sym_identifier] = ACTIONS(1380),
        [sym_comment] = ACTIONS(69),
    },
    [512] = {
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
        [sym_comment] = ACTIONS(69),
        [sym__newline] = ACTIONS(1383),
    },
    [513] = {
        [anon_sym_COMMA] = ACTIONS(315),
        [anon_sym_RPAREN] = ACTIONS(1198),
        [sym_comment] = ACTIONS(69),
    },
    [514] = {
        [anon_sym_COMMA] = ACTIONS(1360),
        [anon_sym_LPAREN] = ACTIONS(125),
        [anon_sym_RPAREN] = ACTIONS(1360),
        [anon_sym_PLUS] = ACTIONS(125),
        [anon_sym_LBRACK] = ACTIONS(125),
        [sym_comment] = ACTIONS(69),
    },
    [515] = {
        [sym_parameters] = STATE(407),
        [anon_sym_LPAREN] = ACTIONS(483),
        [sym_comment] = ACTIONS(69),
    },
    [516] = {
        [aux_sym_with_statement_repeat1] = STATE(422),
        [anon_sym_COMMA] = ACTIONS(551),
        [anon_sym_COLON] = ACTIONS(1386),
        [sym_comment] = ACTIONS(69),
    },
    [517] = {
        [sym__simple_statement] = STATE(431),
        [sym_print_statement] = STATE(5),
        [sym_expression_statement] = STATE(5),
        [sym_return_statement] = STATE(5),
        [sym_delete_statement] = STATE(5),
        [sym__suite] = STATE(518),
        [sym__expression] = STATE(22),
        [sym_binary_operator] = STATE(15),
        [sym_subscript] = STATE(15),
        [sym_call] = STATE(15),
        [sym_list] = STATE(15),
        [sym_list_comprehension] = STATE(15),
        [anon_sym_print] = ACTIONS(79),
        [anon_sym_return] = ACTIONS(81),
        [anon_sym_del] = ACTIONS(83),
        [sym_pass_statement] = ACTIONS(85),
        [sym_break_statement] = ACTIONS(85),
        [sym_continue_statement] = ACTIONS(85),
        [anon_sym_LBRACK] = ACTIONS(103),
        [sym_number] = ACTIONS(105),
        [sym_identifier] = ACTIONS(107),
        [sym_comment] = ACTIONS(69),
        [sym__indent] = ACTIONS(813),
    },
    [518] = {
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
        [sym_number] = ACTIONS(635),
        [sym_identifier] = ACTIONS(639),
        [sym_comment] = ACTIONS(69),
        [sym__newline] = ACTIONS(637),
        [sym__dedent] = ACTIONS(637),
    },
    [519] = {
        [anon_sym_COMMA] = ACTIONS(559),
        [anon_sym_COLON] = ACTIONS(1388),
        [anon_sym_LPAREN] = ACTIONS(197),
        [anon_sym_PLUS] = ACTIONS(199),
        [anon_sym_LBRACK] = ACTIONS(201),
        [sym_comment] = ACTIONS(69),
    },
    [520] = {
        [anon_sym_COMMA] = ACTIONS(1391),
        [anon_sym_COLON] = ACTIONS(1393),
        [anon_sym_as] = ACTIONS(1391),
        [anon_sym_LPAREN] = ACTIONS(197),
        [anon_sym_PLUS] = ACTIONS(199),
        [anon_sym_LBRACK] = ACTIONS(201),
        [sym_comment] = ACTIONS(69),
    },
    [521] = {
        [sym__expression] = STATE(523),
        [sym_binary_operator] = STATE(34),
        [sym_subscript] = STATE(34),
        [sym_call] = STATE(34),
        [sym_list] = STATE(34),
        [sym_list_comprehension] = STATE(34),
        [anon_sym_LBRACK] = ACTIONS(111),
        [sym_number] = ACTIONS(113),
        [sym_identifier] = ACTIONS(113),
        [sym_comment] = ACTIONS(69),
    },
    [522] = {
        [sym__simple_statement] = STATE(431),
        [sym_print_statement] = STATE(5),
        [sym_expression_statement] = STATE(5),
        [sym_return_statement] = STATE(5),
        [sym_delete_statement] = STATE(5),
        [sym__suite] = STATE(524),
        [sym__expression] = STATE(22),
        [sym_binary_operator] = STATE(15),
        [sym_subscript] = STATE(15),
        [sym_call] = STATE(15),
        [sym_list] = STATE(15),
        [sym_list_comprehension] = STATE(15),
        [anon_sym_print] = ACTIONS(79),
        [anon_sym_return] = ACTIONS(81),
        [anon_sym_del] = ACTIONS(83),
        [sym_pass_statement] = ACTIONS(85),
        [sym_break_statement] = ACTIONS(85),
        [sym_continue_statement] = ACTIONS(85),
        [anon_sym_LBRACK] = ACTIONS(103),
        [sym_number] = ACTIONS(105),
        [sym_identifier] = ACTIONS(107),
        [sym_comment] = ACTIONS(69),
        [sym__indent] = ACTIONS(813),
    },
    [523] = {
        [anon_sym_COLON] = ACTIONS(1395),
        [anon_sym_LPAREN] = ACTIONS(197),
        [anon_sym_PLUS] = ACTIONS(199),
        [anon_sym_LBRACK] = ACTIONS(201),
        [sym_comment] = ACTIONS(69),
    },
    [524] = {
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
        [sym_number] = ACTIONS(653),
        [sym_identifier] = ACTIONS(657),
        [sym_comment] = ACTIONS(69),
        [sym__newline] = ACTIONS(655),
        [sym__dedent] = ACTIONS(655),
    },
    [525] = {
        [sym__simple_statement] = STATE(255),
        [sym_print_statement] = STATE(5),
        [sym_expression_statement] = STATE(5),
        [sym_return_statement] = STATE(5),
        [sym_delete_statement] = STATE(5),
        [sym__suite] = STATE(526),
        [sym__expression] = STATE(22),
        [sym_binary_operator] = STATE(15),
        [sym_subscript] = STATE(15),
        [sym_call] = STATE(15),
        [sym_list] = STATE(15),
        [sym_list_comprehension] = STATE(15),
        [anon_sym_print] = ACTIONS(79),
        [anon_sym_return] = ACTIONS(81),
        [anon_sym_del] = ACTIONS(83),
        [sym_pass_statement] = ACTIONS(85),
        [sym_break_statement] = ACTIONS(85),
        [sym_continue_statement] = ACTIONS(85),
        [anon_sym_LBRACK] = ACTIONS(103),
        [sym_number] = ACTIONS(105),
        [sym_identifier] = ACTIONS(107),
        [sym_comment] = ACTIONS(69),
        [sym__indent] = ACTIONS(581),
    },
    [526] = {
        [sym_except_clause] = STATE(479),
        [sym_finally_clause] = STATE(480),
        [aux_sym_try_statement_repeat1] = STATE(421),
        [anon_sym_except] = ACTIONS(1397),
        [anon_sym_finally] = ACTIONS(1399),
        [sym_comment] = ACTIONS(69),
    },
    [527] = {
        [anon_sym_COLON] = ACTIONS(1401),
        [anon_sym_LPAREN] = ACTIONS(197),
        [anon_sym_PLUS] = ACTIONS(199),
        [anon_sym_LBRACK] = ACTIONS(201),
        [sym_comment] = ACTIONS(69),
    },
    [528] = {
        [sym__simple_statement] = STATE(431),
        [sym_print_statement] = STATE(5),
        [sym_expression_statement] = STATE(5),
        [sym_return_statement] = STATE(5),
        [sym_delete_statement] = STATE(5),
        [sym__suite] = STATE(529),
        [sym__expression] = STATE(22),
        [sym_binary_operator] = STATE(15),
        [sym_subscript] = STATE(15),
        [sym_call] = STATE(15),
        [sym_list] = STATE(15),
        [sym_list_comprehension] = STATE(15),
        [anon_sym_print] = ACTIONS(79),
        [anon_sym_return] = ACTIONS(81),
        [anon_sym_del] = ACTIONS(83),
        [sym_pass_statement] = ACTIONS(85),
        [sym_break_statement] = ACTIONS(85),
        [sym_continue_statement] = ACTIONS(85),
        [anon_sym_LBRACK] = ACTIONS(103),
        [sym_number] = ACTIONS(105),
        [sym_identifier] = ACTIONS(107),
        [sym_comment] = ACTIONS(69),
        [sym__indent] = ACTIONS(813),
    },
    [529] = {
        [sym_else_clause] = STATE(530),
        [ts_builtin_sym_end] = ACTIONS(665),
        [anon_sym_SEMI] = ACTIONS(665),
        [anon_sym_print] = ACTIONS(663),
        [anon_sym_return] = ACTIONS(663),
        [anon_sym_del] = ACTIONS(663),
        [sym_pass_statement] = ACTIONS(663),
        [sym_break_statement] = ACTIONS(663),
        [sym_continue_statement] = ACTIONS(663),
        [anon_sym_if] = ACTIONS(663),
        [anon_sym_else] = ACTIONS(1206),
        [anon_sym_for] = ACTIONS(663),
        [anon_sym_while] = ACTIONS(663),
        [anon_sym_try] = ACTIONS(663),
        [anon_sym_with] = ACTIONS(663),
        [anon_sym_def] = ACTIONS(663),
        [anon_sym_class] = ACTIONS(663),
        [anon_sym_AT] = ACTIONS(665),
        [anon_sym_LBRACK] = ACTIONS(665),
        [sym_number] = ACTIONS(663),
        [sym_identifier] = ACTIONS(667),
        [sym_comment] = ACTIONS(69),
        [sym__newline] = ACTIONS(665),
        [sym__dedent] = ACTIONS(665),
    },
    [530] = {
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
        [sym_number] = ACTIONS(669),
        [sym_identifier] = ACTIONS(673),
        [sym_comment] = ACTIONS(69),
        [sym__newline] = ACTIONS(671),
        [sym__dedent] = ACTIONS(671),
    },
    [531] = {
        [aux_sym_print_statement_repeat1] = STATE(106),
        [anon_sym_COMMA] = ACTIONS(311),
        [anon_sym_COLON] = ACTIONS(313),
        [anon_sym_LPAREN] = ACTIONS(197),
        [anon_sym_PLUS] = ACTIONS(1403),
        [anon_sym_LBRACK] = ACTIONS(201),
        [anon_sym_RBRACK] = ACTIONS(369),
        [sym_comment] = ACTIONS(69),
    },
    [532] = {
        [sym__expression] = STATE(533),
        [sym_binary_operator] = STATE(34),
        [sym_subscript] = STATE(34),
        [sym_call] = STATE(34),
        [sym_list] = STATE(34),
        [sym_list_comprehension] = STATE(34),
        [anon_sym_LBRACK] = ACTIONS(111),
        [sym_number] = ACTIONS(113),
        [sym_identifier] = ACTIONS(113),
        [sym_comment] = ACTIONS(69),
    },
    [533] = {
        [anon_sym_COMMA] = ACTIONS(235),
        [anon_sym_COLON] = ACTIONS(235),
        [anon_sym_LPAREN] = ACTIONS(1405),
        [anon_sym_PLUS] = ACTIONS(1408),
        [anon_sym_LBRACK] = ACTIONS(1411),
        [anon_sym_RBRACK] = ACTIONS(235),
        [sym_comment] = ACTIONS(69),
    },
    [534] = {
        [anon_sym_in] = ACTIONS(1091),
        [sym_comment] = ACTIONS(69),
    },
    [535] = {
        [anon_sym_COLON] = ACTIONS(1414),
        [anon_sym_LPAREN] = ACTIONS(197),
        [anon_sym_PLUS] = ACTIONS(199),
        [anon_sym_LBRACK] = ACTIONS(201),
        [sym_comment] = ACTIONS(69),
    },
    [536] = {
        [sym__simple_statement] = STATE(431),
        [sym_print_statement] = STATE(5),
        [sym_expression_statement] = STATE(5),
        [sym_return_statement] = STATE(5),
        [sym_delete_statement] = STATE(5),
        [sym__suite] = STATE(537),
        [sym__expression] = STATE(22),
        [sym_binary_operator] = STATE(15),
        [sym_subscript] = STATE(15),
        [sym_call] = STATE(15),
        [sym_list] = STATE(15),
        [sym_list_comprehension] = STATE(15),
        [anon_sym_print] = ACTIONS(79),
        [anon_sym_return] = ACTIONS(81),
        [anon_sym_del] = ACTIONS(83),
        [sym_pass_statement] = ACTIONS(85),
        [sym_break_statement] = ACTIONS(85),
        [sym_continue_statement] = ACTIONS(85),
        [anon_sym_LBRACK] = ACTIONS(103),
        [sym_number] = ACTIONS(105),
        [sym_identifier] = ACTIONS(107),
        [sym_comment] = ACTIONS(69),
        [sym__indent] = ACTIONS(813),
    },
    [537] = {
        [ts_builtin_sym_end] = ACTIONS(729),
        [anon_sym_SEMI] = ACTIONS(729),
        [anon_sym_print] = ACTIONS(727),
        [anon_sym_return] = ACTIONS(727),
        [anon_sym_del] = ACTIONS(727),
        [sym_pass_statement] = ACTIONS(727),
        [sym_break_statement] = ACTIONS(727),
        [sym_continue_statement] = ACTIONS(727),
        [anon_sym_if] = ACTIONS(727),
        [anon_sym_elif] = ACTIONS(727),
        [anon_sym_else] = ACTIONS(727),
        [anon_sym_for] = ACTIONS(727),
        [anon_sym_while] = ACTIONS(727),
        [anon_sym_try] = ACTIONS(727),
        [anon_sym_with] = ACTIONS(727),
        [anon_sym_def] = ACTIONS(727),
        [anon_sym_class] = ACTIONS(727),
        [anon_sym_AT] = ACTIONS(729),
        [anon_sym_LBRACK] = ACTIONS(729),
        [sym_number] = ACTIONS(727),
        [sym_identifier] = ACTIONS(731),
        [sym_comment] = ACTIONS(69),
        [sym__newline] = ACTIONS(729),
        [sym__dedent] = ACTIONS(729),
    },
    [538] = {
        [anon_sym_COLON] = ACTIONS(1416),
        [anon_sym_LPAREN] = ACTIONS(197),
        [anon_sym_PLUS] = ACTIONS(199),
        [anon_sym_LBRACK] = ACTIONS(201),
        [sym_comment] = ACTIONS(69),
    },
    [539] = {
        [sym__simple_statement] = STATE(431),
        [sym_print_statement] = STATE(5),
        [sym_expression_statement] = STATE(5),
        [sym_return_statement] = STATE(5),
        [sym_delete_statement] = STATE(5),
        [sym__suite] = STATE(540),
        [sym__expression] = STATE(22),
        [sym_binary_operator] = STATE(15),
        [sym_subscript] = STATE(15),
        [sym_call] = STATE(15),
        [sym_list] = STATE(15),
        [sym_list_comprehension] = STATE(15),
        [anon_sym_print] = ACTIONS(79),
        [anon_sym_return] = ACTIONS(81),
        [anon_sym_del] = ACTIONS(83),
        [sym_pass_statement] = ACTIONS(85),
        [sym_break_statement] = ACTIONS(85),
        [sym_continue_statement] = ACTIONS(85),
        [anon_sym_LBRACK] = ACTIONS(103),
        [sym_number] = ACTIONS(105),
        [sym_identifier] = ACTIONS(107),
        [sym_comment] = ACTIONS(69),
        [sym__indent] = ACTIONS(813),
    },
    [540] = {
        [sym_elif_clause] = STATE(469),
        [sym_else_clause] = STATE(541),
        [aux_sym_if_statement_repeat1] = STATE(420),
        [ts_builtin_sym_end] = ACTIONS(697),
        [anon_sym_SEMI] = ACTIONS(697),
        [anon_sym_print] = ACTIONS(693),
        [anon_sym_return] = ACTIONS(693),
        [anon_sym_del] = ACTIONS(693),
        [sym_pass_statement] = ACTIONS(693),
        [sym_break_statement] = ACTIONS(693),
        [sym_continue_statement] = ACTIONS(693),
        [anon_sym_if] = ACTIONS(693),
        [anon_sym_elif] = ACTIONS(1204),
        [anon_sym_else] = ACTIONS(1206),
        [anon_sym_for] = ACTIONS(693),
        [anon_sym_while] = ACTIONS(693),
        [anon_sym_try] = ACTIONS(693),
        [anon_sym_with] = ACTIONS(693),
        [anon_sym_def] = ACTIONS(693),
        [anon_sym_class] = ACTIONS(693),
        [anon_sym_AT] = ACTIONS(697),
        [anon_sym_LBRACK] = ACTIONS(697),
        [sym_number] = ACTIONS(693),
        [sym_identifier] = ACTIONS(699),
        [sym_comment] = ACTIONS(69),
        [sym__newline] = ACTIONS(697),
        [sym__dedent] = ACTIONS(697),
    },
    [541] = {
        [ts_builtin_sym_end] = ACTIONS(709),
        [anon_sym_SEMI] = ACTIONS(709),
        [anon_sym_print] = ACTIONS(707),
        [anon_sym_return] = ACTIONS(707),
        [anon_sym_del] = ACTIONS(707),
        [sym_pass_statement] = ACTIONS(707),
        [sym_break_statement] = ACTIONS(707),
        [sym_continue_statement] = ACTIONS(707),
        [anon_sym_if] = ACTIONS(707),
        [anon_sym_for] = ACTIONS(707),
        [anon_sym_while] = ACTIONS(707),
        [anon_sym_try] = ACTIONS(707),
        [anon_sym_with] = ACTIONS(707),
        [anon_sym_def] = ACTIONS(707),
        [anon_sym_class] = ACTIONS(707),
        [anon_sym_AT] = ACTIONS(709),
        [anon_sym_LBRACK] = ACTIONS(709),
        [sym_number] = ACTIONS(707),
        [sym_identifier] = ACTIONS(711),
        [sym_comment] = ACTIONS(69),
        [sym__newline] = ACTIONS(709),
        [sym__dedent] = ACTIONS(709),
    },
    [542] = {
        [anon_sym_COMMA] = ACTIONS(1220),
        [anon_sym_COLON] = ACTIONS(1418),
        [anon_sym_for] = ACTIONS(1220),
        [anon_sym_in] = ACTIONS(1220),
        [anon_sym_as] = ACTIONS(1220),
        [anon_sym_LPAREN] = ACTIONS(1220),
        [anon_sym_RPAREN] = ACTIONS(1220),
        [anon_sym_PLUS] = ACTIONS(1220),
        [anon_sym_LBRACK] = ACTIONS(1220),
        [anon_sym_RBRACK] = ACTIONS(1220),
        [sym_comment] = ACTIONS(69),
        [sym__newline] = ACTIONS(1220),
    },
    [543] = {
        [anon_sym_COMMA] = ACTIONS(1423),
        [anon_sym_RBRACK] = ACTIONS(1423),
        [sym_comment] = ACTIONS(69),
    },
    [544] = {
        [anon_sym_COMMA] = ACTIONS(1426),
        [anon_sym_COLON] = ACTIONS(1426),
        [anon_sym_for] = ACTIONS(1426),
        [anon_sym_in] = ACTIONS(1426),
        [anon_sym_as] = ACTIONS(1426),
        [anon_sym_LPAREN] = ACTIONS(1426),
        [anon_sym_RPAREN] = ACTIONS(1426),
        [anon_sym_PLUS] = ACTIONS(1426),
        [anon_sym_LBRACK] = ACTIONS(1426),
        [anon_sym_RBRACK] = ACTIONS(1426),
        [sym_comment] = ACTIONS(69),
        [sym__newline] = ACTIONS(1426),
    },
    [545] = {
        [anon_sym_COMMA] = ACTIONS(125),
        [anon_sym_COLON] = ACTIONS(125),
        [anon_sym_in] = ACTIONS(125),
        [anon_sym_as] = ACTIONS(125),
        [anon_sym_LPAREN] = ACTIONS(125),
        [anon_sym_RPAREN] = ACTIONS(125),
        [anon_sym_EQ] = ACTIONS(237),
        [anon_sym_PLUS] = ACTIONS(125),
        [anon_sym_LBRACK] = ACTIONS(125),
        [anon_sym_RBRACK] = ACTIONS(125),
        [sym_comment] = ACTIONS(69),
        [sym__newline] = ACTIONS(125),
    },
    [546] = {
        [anon_sym_COMMA] = ACTIONS(1431),
        [anon_sym_COLON] = ACTIONS(1431),
        [sym_comment] = ACTIONS(69),
    },
    [547] = {
        [anon_sym_COMMA] = ACTIONS(1434),
        [anon_sym_COLON] = ACTIONS(1442),
        [anon_sym_in] = ACTIONS(1447),
        [anon_sym_as] = ACTIONS(557),
        [anon_sym_LPAREN] = ACTIONS(151),
        [anon_sym_RPAREN] = ACTIONS(1450),
        [anon_sym_PLUS] = ACTIONS(1455),
        [anon_sym_LBRACK] = ACTIONS(155),
        [anon_sym_RBRACK] = ACTIONS(1457),
        [sym_comment] = ACTIONS(69),
        [sym__newline] = ACTIONS(1447),
    },
    [548] = {
        [anon_sym_COMMA] = ACTIONS(1462),
        [anon_sym_RPAREN] = ACTIONS(1462),
        [sym_comment] = ACTIONS(69),
    },
    [549] = {
        [anon_sym_RPAREN] = ACTIONS(1465),
        [sym_comment] = ACTIONS(69),
    },
    [550] = {
        [anon_sym_COMMA] = ACTIONS(1467),
        [anon_sym_COLON] = ACTIONS(1467),
        [anon_sym_for] = ACTIONS(1467),
        [anon_sym_in] = ACTIONS(1467),
        [anon_sym_as] = ACTIONS(1467),
        [anon_sym_LPAREN] = ACTIONS(1467),
        [anon_sym_RPAREN] = ACTIONS(1467),
        [anon_sym_PLUS] = ACTIONS(1467),
        [anon_sym_LBRACK] = ACTIONS(1467),
        [anon_sym_RBRACK] = ACTIONS(1467),
        [sym_comment] = ACTIONS(69),
        [sym__newline] = ACTIONS(1467),
    },
    [551] = {
        [sym__expression] = STATE(552),
        [sym_binary_operator] = STATE(15),
        [sym_subscript] = STATE(15),
        [sym_call] = STATE(15),
        [sym_list] = STATE(15),
        [sym_list_comprehension] = STATE(15),
        [anon_sym_LBRACK] = ACTIONS(103),
        [sym_number] = ACTIONS(105),
        [sym_identifier] = ACTIONS(105),
        [sym_comment] = ACTIONS(69),
    },
    [552] = {
        [anon_sym_COMMA] = ACTIONS(235),
        [anon_sym_COLON] = ACTIONS(235),
        [anon_sym_in] = ACTIONS(235),
        [anon_sym_as] = ACTIONS(235),
        [anon_sym_LPAREN] = ACTIONS(1131),
        [anon_sym_RPAREN] = ACTIONS(235),
        [anon_sym_PLUS] = ACTIONS(1471),
        [anon_sym_LBRACK] = ACTIONS(1149),
        [anon_sym_RBRACK] = ACTIONS(235),
        [sym_comment] = ACTIONS(69),
        [sym__newline] = ACTIONS(235),
    },
};

static TSParseActionEntry ts_parse_actions[] = {
    [0] = {.count = 0, .reusable = false, .depends_on_lookahead = false},
    [1] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(0),
    [3] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(27),
    [5] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(2),
    [7] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(369),
    [9] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(3),
    [11] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(4),
    [13] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(5),
    [15] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(370),
    [17] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(371),
    [19] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(372),
    [21] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(373),
    [23] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(374),
    [25] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(375),
    [27] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(376),
    [29] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(377),
    [31] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(378),
    [33] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(379),
    [35] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(380),
    [37] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(381),
    [39] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(382),
    [41] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(383),
    [43] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(384),
    [45] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(385),
    [47] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(386),
    [49] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(387),
    [51] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(13),
    [53] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(388),
    [55] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(389),
    [57] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(390),
    [59] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(391),
    [61] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(392),
    [63] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(59),
    [65] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(15),
    [67] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, RECOVER(393),
    [69] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT_EXTRA(),
    [71] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(394),
    [73] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(395),
    [75] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(396),
    [77] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_module, 0),
    [79] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(2),
    [81] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(3),
    [83] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(4),
    [85] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(5),
    [87] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(6),
    [89] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(7),
    [91] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(8),
    [93] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(9),
    [95] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(10),
    [97] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(11),
    [99] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(12),
    [101] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(13),
    [103] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(14),
    [105] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(15),
    [107] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(15),
    [109] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__simple_statement, 1),
    [111] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(32),
    [113] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(34),
    [115] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(314),
    [117] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(304),
    [119] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(168),
    [121] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(153),
    [123] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(140),
    [125] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__expression, 1),
    [127] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, ACCEPT_INPUT(),
    [129] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_module_repeat1, 1),
    [131] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_module_repeat1, 1),
    [133] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_module_repeat1, 1),
    [135] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(139),
    [137] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__statement, 1),
    [139] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__statement, 1),
    [141] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__statement, 1),
    [143] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__compound_statement, 1),
    [145] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__compound_statement, 1),
    [147] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__compound_statement, 1),
    [149] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_decorated_definition_repeat1, 1),
    [151] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(29),
    [153] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(30),
    [155] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(31),
    [157] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_expression_statement, 1),
    [159] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_module, 1),
    [161] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(27),
    [163] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(11),
    [165] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(12),
    [167] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_decorated_definition, 2),
    [169] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_decorated_definition, 2),
    [171] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_decorated_definition, 2),
    [173] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_decorated_definition_repeat1, 2),
    [175] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_module, 2),
    [177] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_module_repeat1, 2),
    [179] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_module_repeat1, 2),
    [181] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_module_repeat1, 2),
    [183] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(58),
    [185] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(59),
    [187] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(60),
    [189] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(33),
    [191] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(93),
    [193] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(36),
    [195] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(40),
    [197] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(37),
    [199] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(38),
    [201] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(39),
    [203] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(55),
    [205] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(43),
    [207] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(47),
    [209] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_subscript, 4),
    [211] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(42),
    [213] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(44),
    [215] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(45),
    [217] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_subscript, 5),
    [219] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_subscript_repeat1, 3),
    [221] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_subscript, 6),
    [223] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(49),
    [225] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(50),
    [227] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(53),
    [229] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(52),
    [231] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(54),
    [233] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_subscript_repeat1, 2),
    [235] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE_FRAGILE(sym_binary_operator, 3),
    [237] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(90),
    [239] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(89),
    [241] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(84),
    [243] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(85),
    [245] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(83),
    [247] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(70),
    [249] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(71),
    [251] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_call, 5),
    [253] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(73),
    [255] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(74),
    [257] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_call, 6),
    [259] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_call_repeat2, 3),
    [261] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(78),
    [263] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_call, 8),
    [265] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_call_repeat2, 2),
    [267] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(82),
    [269] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_call, 7),
    [271] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_call_repeat1, 3),
    [273] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_call_repeat1, 3),
    [275] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_call, 4),
    [277] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(87),
    [279] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_call_repeat1, 2),
    [281] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_call_repeat1, 2),
    [283] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_keyword_argument, 3),
    [285] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_dictionary_splat_argument, 2),
    [287] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_list, 2),
    [289] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(95),
    [291] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(96),
    [293] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(97),
    [295] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(100),
    [297] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_list, 3),
    [299] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(99),
    [301] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(101),
    [303] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_list, 4),
    [305] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_list, 5),
    [307] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_print_statement_repeat1, 3),
    [309] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(109),
    [311] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(105),
    [313] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_expression_list, 1),
    [315] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(107),
    [317] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_expression_list, 2),
    [319] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_print_statement_repeat1, 2),
    [321] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(111),
    [323] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_list_comprehension, 7),
    [325] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_list_splat_argument, 2),
    [327] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(138),
    [329] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(133),
    [331] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(134),
    [333] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(132),
    [335] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(123),
    [337] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(124),
    [339] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(126),
    [341] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(127),
    [343] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(129),
    [345] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(131),
    [347] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(136),
    [349] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__statement, 2),
    [351] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__statement, 2),
    [353] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__statement, 2),
    [355] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(142),
    [357] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(143),
    [359] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(144),
    [361] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(147),
    [363] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(146),
    [365] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(148),
    [367] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(150),
    [369] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(152),
    [371] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_dotted_name, 1),
    [373] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(163),
    [375] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(155),
    [377] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(156),
    [379] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_decorator, 3),
    [381] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(158),
    [383] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_decorator, 4),
    [385] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(160),
    [387] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_arguments, 3),
    [389] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(162),
    [391] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_arguments, 4),
    [393] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(167),
    [395] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_dotted_name, 2),
    [397] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(165),
    [399] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(166),
    [401] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_dotted_name_repeat1, 3),
    [403] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_dotted_name_repeat1, 2),
    [405] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(169),
    [407] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(170),
    [409] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(174),
    [411] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(172),
    [413] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(173),
    [415] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(178),
    [417] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(179),
    [419] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(180),
    [421] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(181),
    [423] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(182),
    [425] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(183),
    [427] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(184),
    [429] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(177),
    [431] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_class_definition, 7),
    [433] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_class_definition, 7),
    [435] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_class_definition, 7),
    [437] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__suite, 2),
    [439] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__suite, 2),
    [441] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__suite, 2),
    [443] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(253),
    [445] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(208),
    [447] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(195),
    [449] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(194),
    [451] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(192),
    [453] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(183),
    [455] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(184),
    [457] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__suite, 3),
    [459] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__suite, 3),
    [461] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__suite, 3),
    [463] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(196),
    [465] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(197),
    [467] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(201),
    [469] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(199),
    [471] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(200),
    [473] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(204),
    [475] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(206),
    [477] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_class_definition, 4),
    [479] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_class_definition, 4),
    [481] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_class_definition, 4),
    [483] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(209),
    [485] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(213),
    [487] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(214),
    [489] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(215),
    [491] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(211),
    [493] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_function_definition, 5),
    [495] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_function_definition, 5),
    [497] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_function_definition, 5),
    [499] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_parameters, 2),
    [501] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(229),
    [503] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(239),
    [505] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(238),
    [507] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(235),
    [509] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(233),
    [511] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(236),
    [513] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(220),
    [515] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(231),
    [517] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(224),
    [519] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(225),
    [521] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_parameters, 4),
    [523] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(226),
    [525] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(228),
    [527] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_parameters, 6),
    [529] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(230),
    [531] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_dictionary_splat_parameter, 3),
    [533] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(232),
    [535] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_parameters_repeat1, 3),
    [537] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_parameters_repeat1, 3),
    [539] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_parameters, 5),
    [541] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_default_parameter, 3),
    [543] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_parameters, 3),
    [545] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_parameters_repeat1, 2),
    [547] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_parameters_repeat1, 2),
    [549] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_list_splat_parameter, 2),
    [551] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(244),
    [553] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(245),
    [555] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_with_item, 1),
    [557] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(242),
    [559] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_with_item, 3),
    [561] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(247),
    [563] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(248),
    [565] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_with_statement, 5),
    [567] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_with_statement, 5),
    [569] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_with_statement, 5),
    [571] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_with_statement_repeat1, 3),
    [573] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_with_statement, 4),
    [575] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_with_statement, 4),
    [577] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_with_statement, 4),
    [579] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_with_statement_repeat1, 2),
    [581] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(254),
    [583] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(278),
    [585] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(257),
    [587] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(258),
    [589] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(269),
    [591] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_try_statement_repeat1, 1),
    [593] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_try_statement_repeat1, 1),
    [595] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_try_statement_repeat1, 1),
    [597] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_try_statement, 4),
    [599] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_try_statement, 4),
    [601] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_try_statement, 4),
    [603] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(262),
    [605] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(257),
    [607] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(258),
    [609] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(267),
    [611] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_try_statement, 5),
    [613] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_try_statement, 5),
    [615] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_try_statement, 5),
    [617] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_try_statement_repeat1, 2),
    [619] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_try_statement_repeat1, 2),
    [621] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_try_statement_repeat1, 2),
    [623] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_try_statement, 6),
    [625] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_try_statement, 6),
    [627] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_try_statement, 6),
    [629] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_else_clause, 3),
    [631] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_else_clause, 3),
    [633] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_else_clause, 3),
    [635] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_finally_clause, 3),
    [637] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_finally_clause, 3),
    [639] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_finally_clause, 3),
    [641] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(272),
    [643] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(273),
    [645] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(275),
    [647] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_except_clause, 6),
    [649] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_except_clause, 6),
    [651] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_except_clause, 6),
    [653] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_except_clause, 4),
    [655] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_except_clause, 4),
    [657] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_except_clause, 4),
    [659] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(280),
    [661] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(282),
    [663] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_while_statement, 4),
    [665] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_while_statement, 4),
    [667] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_while_statement, 4),
    [669] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_while_statement, 5),
    [671] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_while_statement, 5),
    [673] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_while_statement, 5),
    [675] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(286),
    [677] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(288),
    [679] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_for_statement, 6),
    [681] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_for_statement, 6),
    [683] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_for_statement, 6),
    [685] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_for_statement, 7),
    [687] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_for_statement, 7),
    [689] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_for_statement, 7),
    [691] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(292),
    [693] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_if_statement, 4),
    [695] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(294),
    [697] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_if_statement, 4),
    [699] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_if_statement, 4),
    [701] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_if_statement_repeat1, 1),
    [703] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_if_statement_repeat1, 1),
    [705] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_if_statement_repeat1, 1),
    [707] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_if_statement, 5),
    [709] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_if_statement, 5),
    [711] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_if_statement, 5),
    [713] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_if_statement_repeat1, 2),
    [715] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_if_statement_repeat1, 2),
    [717] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_if_statement_repeat1, 2),
    [719] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_if_statement, 6),
    [721] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_if_statement, 6),
    [723] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_if_statement, 6),
    [725] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(301),
    [727] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_elif_clause, 4),
    [729] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_elif_clause, 4),
    [731] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_elif_clause, 4),
    [733] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(306),
    [735] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(309),
    [737] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(311),
    [739] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(316),
    [741] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(317),
    [743] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(328),
    [745] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(321),
    [747] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(316),
    [749] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(317),
    [751] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(326),
    [753] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(331),
    [755] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(332),
    [757] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(334),
    [759] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(338),
    [761] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(342),
    [763] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(344),
    [765] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(348),
    [767] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(350),
    [769] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(357),
    [771] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_delete_statement, 2),
    [773] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(361),
    [775] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(363),
    [777] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_return_statement, 2),
    [779] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_print_statement, 2),
    [781] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_print_statement, 3),
    [783] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(542),
    [785] = {.count = 5, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_parameters_repeat1, 2), REDUCE(aux_sym_call_repeat1, 2), REDUCE(aux_sym_parameters_repeat1, 3), REDUCE(aux_sym_call_repeat1, 3), SHIFT(226),
    [791] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_call_repeat1, 2), REDUCE(aux_sym_call_repeat1, 3), SHIFT(14),
    [795] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(543),
    [797] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(544),
    [799] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_call_repeat1, 2), REDUCE(aux_sym_call_repeat1, 3), SHIFT(59),
    [803] = {.count = 3, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_call_repeat1, 2), REDUCE(aux_sym_call_repeat1, 3), SHIFT(15),
    [807] = {.count = 5, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_parameters_repeat1, 2), REDUCE(aux_sym_call_repeat1, 2), REDUCE(aux_sym_parameters_repeat1, 3), REDUCE(aux_sym_call_repeat1, 3), SHIFT(545),
    [813] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(395),
    [815] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(442),
    [817] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(525),
    [819] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(517),
    [821] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(515),
    [823] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(508),
    [825] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(509),
    [827] = {.count = 5, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_call, 4), REDUCE(sym_call, 5), REDUCE(sym_call, 6), REDUCE(sym_call, 7), REDUCE(sym_call, 8),
    [833] = {.count = 11, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_parameters, 2), REDUCE(sym_parameters, 3), REDUCE(sym_parameters, 4), REDUCE(sym_call, 4), REDUCE(sym_parameters, 5), REDUCE(sym_call, 5), REDUCE(sym_parameters, 6), REDUCE(sym_call, 6), REDUCE(sym_call, 7), REDUCE(sym_call, 8), SHIFT(476),
    [845] = {.count = 7, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_arguments, 3), REDUCE(sym_arguments, 4), REDUCE(sym_call, 4), REDUCE(sym_call, 5), REDUCE(sym_call, 6), REDUCE(sym_call, 7), REDUCE(sym_call, 8),
    [853] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(506),
    [855] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(504),
    [857] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(503),
    [859] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_subscript_repeat1, 2), REDUCE(aux_sym_subscript_repeat1, 3), SHIFT(36),
    [863] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_subscript_repeat1, 2), REDUCE(aux_sym_subscript_repeat1, 3), SHIFT(40),
    [867] = {.count = 8, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_list, 2), REDUCE(sym_list, 3), REDUCE(sym_subscript, 4), REDUCE(sym_list, 4), REDUCE(sym_subscript, 5), REDUCE(sym_list, 5), REDUCE(sym_subscript, 6), REDUCE(sym_list_comprehension, 7),
    [876] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__expression, 1), REDUCE(sym_list_splat_parameter, 2), SHIFT(486),
    [880] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__expression, 1), SHIFT(493),
    [883] = {.count = 5, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_dotted_name, 1), REDUCE(sym__expression, 1), REDUCE(aux_sym_dotted_name_repeat1, 2), REDUCE(aux_sym_dotted_name_repeat1, 3), SHIFT(494),
    [889] = {.count = 4, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__expression, 1), REDUCE(sym_list_splat_parameter, 2), REDUCE(sym_dictionary_splat_parameter, 3), SHIFT(483),
    [894] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(385),
    [896] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_dotted_name_repeat1, 2), REDUCE(aux_sym_dotted_name_repeat1, 3), SHIFT(163),
    [900] = {.count = 4, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_dotted_name, 1), REDUCE(sym__expression, 1), REDUCE(aux_sym_dotted_name_repeat1, 2), REDUCE(aux_sym_dotted_name_repeat1, 3),
    [905] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_module, 2), REDUCE(sym__statement, 2), REDUCE(sym__suite, 2),
    [909] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__statement, 2), REDUCE(sym__suite, 2),
    [912] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__statement, 2), REDUCE(sym__suite, 2),
    [915] = {.count = 4, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__statement, 2), REDUCE(sym__suite, 2), REDUCE(sym_decorator, 3), REDUCE(sym_decorator, 4),
    [920] = {.count = 4, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__statement, 2), REDUCE(sym__suite, 2), REDUCE(sym_decorator, 3), REDUCE(sym_decorator, 4),
    [925] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__statement, 2), REDUCE(sym__suite, 2),
    [928] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(433),
    [930] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__suite, 2), REDUCE(sym__suite, 3),
    [933] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__suite, 2), REDUCE(sym__suite, 3),
    [936] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__suite, 2), REDUCE(sym__suite, 3),
    [939] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_module_repeat1, 1), REDUCE(aux_sym_module_repeat1, 2),
    [942] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_module_repeat1, 1), REDUCE(aux_sym_module_repeat1, 2),
    [945] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_module_repeat1, 1), REDUCE(aux_sym_module_repeat1, 2),
    [948] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(492),
    [950] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_if_statement_repeat1, 1), REDUCE(aux_sym_if_statement_repeat1, 2),
    [953] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_if_statement_repeat1, 1), REDUCE(aux_sym_if_statement_repeat1, 2),
    [956] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_if_statement_repeat1, 1), REDUCE(aux_sym_if_statement_repeat1, 2),
    [959] = {.count = 5, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_if_statement, 5), REDUCE(sym_while_statement, 5), REDUCE(sym_try_statement, 5), REDUCE(sym_if_statement, 6), REDUCE(sym_for_statement, 7),
    [965] = {.count = 5, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_if_statement, 5), REDUCE(sym_while_statement, 5), REDUCE(sym_try_statement, 5), REDUCE(sym_if_statement, 6), REDUCE(sym_for_statement, 7),
    [971] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(380),
    [973] = {.count = 5, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_if_statement, 5), REDUCE(sym_while_statement, 5), REDUCE(sym_try_statement, 5), REDUCE(sym_if_statement, 6), REDUCE(sym_for_statement, 7),
    [979] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_try_statement_repeat1, 1), REDUCE(aux_sym_try_statement_repeat1, 2),
    [982] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_try_statement_repeat1, 1), REDUCE(aux_sym_try_statement_repeat1, 2),
    [985] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_try_statement_repeat1, 1), REDUCE(aux_sym_try_statement_repeat1, 2),
    [988] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_try_statement, 4), REDUCE(sym_try_statement, 5), REDUCE(sym_try_statement, 6),
    [992] = {.count = 3, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_try_statement, 4), REDUCE(sym_try_statement, 5), REDUCE(sym_try_statement, 6),
    [996] = {.count = 3, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_try_statement, 4), REDUCE(sym_try_statement, 5), REDUCE(sym_try_statement, 6),
    [1000] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_with_statement_repeat1, 2), REDUCE(aux_sym_with_statement_repeat1, 3), SHIFT(244),
    [1004] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_with_statement_repeat1, 2), REDUCE(aux_sym_with_statement_repeat1, 3), SHIFT(490),
    [1008] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__compound_statement, 1), REDUCE(sym_decorated_definition, 2),
    [1011] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__compound_statement, 1), REDUCE(sym_decorated_definition, 2),
    [1014] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__compound_statement, 1), REDUCE(sym_decorated_definition, 2),
    [1017] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(488),
    [1019] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(486),
    [1021] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(483),
    [1023] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(482),
    [1025] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(481),
    [1027] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_decorated_definition_repeat1, 1), REDUCE(aux_sym_decorated_definition_repeat1, 2),
    [1030] = {.count = 13, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_else_clause, 3), REDUCE(sym_finally_clause, 3), REDUCE(sym_if_statement, 4), REDUCE(sym_elif_clause, 4), REDUCE(sym_while_statement, 4), REDUCE(sym_except_clause, 4), REDUCE(sym_with_statement, 4), REDUCE(sym_class_definition, 4), REDUCE(sym_with_statement, 5), REDUCE(sym_function_definition, 5), REDUCE(sym_for_statement, 6), REDUCE(sym_except_clause, 6), REDUCE(sym_class_definition, 7),
    [1044] = {.count = 13, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_else_clause, 3), REDUCE(sym_finally_clause, 3), REDUCE(sym_if_statement, 4), REDUCE(sym_elif_clause, 4), REDUCE(sym_while_statement, 4), REDUCE(sym_except_clause, 4), REDUCE(sym_with_statement, 4), REDUCE(sym_class_definition, 4), REDUCE(sym_with_statement, 5), REDUCE(sym_function_definition, 5), REDUCE(sym_for_statement, 6), REDUCE(sym_except_clause, 6), REDUCE(sym_class_definition, 7),
    [1058] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_elif_clause, 4), SHIFT(372),
    [1061] = {.count = 4, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_elif_clause, 4), REDUCE(sym_except_clause, 4), REDUCE(sym_except_clause, 6), SHIFT(373),
    [1066] = {.count = 3, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_except_clause, 4), REDUCE(sym_except_clause, 6), SHIFT(378),
    [1070] = {.count = 4, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_else_clause, 3), REDUCE(sym_except_clause, 4), REDUCE(sym_except_clause, 6), SHIFT(380),
    [1075] = {.count = 13, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_else_clause, 3), REDUCE(sym_finally_clause, 3), REDUCE(sym_if_statement, 4), REDUCE(sym_elif_clause, 4), REDUCE(sym_while_statement, 4), REDUCE(sym_except_clause, 4), REDUCE(sym_with_statement, 4), REDUCE(sym_class_definition, 4), REDUCE(sym_with_statement, 5), REDUCE(sym_function_definition, 5), REDUCE(sym_for_statement, 6), REDUCE(sym_except_clause, 6), REDUCE(sym_class_definition, 7),
    [1089] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(455),
    [1091] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(375),
    [1093] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(475),
    [1095] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_return_statement, 2), REDUCE(sym_delete_statement, 2),
    [1098] = {.count = 13, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_with_item, 1), REDUCE(sym_list_splat_argument, 2), REDUCE(aux_sym_print_statement_repeat1, 2), REDUCE(aux_sym_subscript_repeat1, 2), REDUCE(aux_sym_call_repeat2, 2), REDUCE(sym_with_item, 3), REDUCE(sym_default_parameter, 3), REDUCE_FRAGILE(sym_binary_operator, 3), REDUCE(sym_keyword_argument, 3), REDUCE(aux_sym_print_statement_repeat1, 3), REDUCE(aux_sym_subscript_repeat1, 3), REDUCE(aux_sym_call_repeat2, 3), SHIFT(464),
    [1112] = {.count = 7, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_with_item, 1), REDUCE(sym_expression_list, 1), REDUCE(aux_sym_print_statement_repeat1, 2), REDUCE(sym_with_item, 3), REDUCE_FRAGILE(sym_binary_operator, 3), REDUCE(aux_sym_print_statement_repeat1, 3), SHIFT(465),
    [1120] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE_FRAGILE(sym_binary_operator, 3), SHIFT(143),
    [1123] = {.count = 4, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_expression_list, 1), REDUCE(aux_sym_print_statement_repeat1, 2), REDUCE_FRAGILE(sym_binary_operator, 3), REDUCE(aux_sym_print_statement_repeat1, 3),
    [1128] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE_FRAGILE(sym_binary_operator, 3), SHIFT(379),
    [1131] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE_FRAGILE(sym_binary_operator, 3), SHIFT(29),
    [1134] = {.count = 11, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_expression_list, 1), REDUCE(sym_list_splat_argument, 2), REDUCE(sym_dictionary_splat_argument, 2), REDUCE(aux_sym_print_statement_repeat1, 2), REDUCE(aux_sym_call_repeat2, 2), REDUCE(sym_default_parameter, 3), REDUCE_FRAGILE(sym_binary_operator, 3), REDUCE(sym_keyword_argument, 3), REDUCE(aux_sym_print_statement_repeat1, 3), REDUCE(aux_sym_call_repeat2, 3), SHIFT(466),
    [1146] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE_FRAGILE(sym_binary_operator, 3), SHIFT(389),
    [1149] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE_FRAGILE(sym_binary_operator, 3), SHIFT(31),
    [1152] = {.count = 6, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_print_statement_repeat1, 2), REDUCE(aux_sym_subscript_repeat1, 2), REDUCE_FRAGILE(sym_binary_operator, 3), REDUCE(aux_sym_print_statement_repeat1, 3), REDUCE(aux_sym_subscript_repeat1, 3), SHIFT(467),
    [1159] = {.count = 6, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_expression_statement, 1), REDUCE(sym_expression_list, 1), REDUCE(sym_print_statement, 2), REDUCE(aux_sym_print_statement_repeat1, 2), REDUCE_FRAGILE(sym_binary_operator, 3), REDUCE(aux_sym_print_statement_repeat1, 3),
    [1166] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_call_repeat2, 2), REDUCE(aux_sym_call_repeat2, 3), SHIFT(463),
    [1170] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_call_repeat2, 2), REDUCE(aux_sym_call_repeat2, 3), SHIFT(460),
    [1174] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(459),
    [1176] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(460),
    [1178] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(458),
    [1180] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(370),
    [1182] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(448),
    [1184] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(376),
    [1186] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(377),
    [1188] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(381),
    [1190] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(382),
    [1192] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(387),
    [1194] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(435),
    [1196] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(444),
    [1198] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_expression_list, 2), SHIFT(162),
    [1201] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_expression_list, 2), REDUCE(sym_print_statement, 3),
    [1204] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(372),
    [1206] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(373),
    [1208] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(378),
    [1210] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(430),
    [1212] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(382),
    [1214] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(387),
    [1216] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(425),
    [1218] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(426),
    [1220] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_call, 5), REDUCE(sym_call, 6),
    [1223] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(428),
    [1225] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_call, 7), REDUCE(sym_call, 8),
    [1228] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(446),
    [1230] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE_FRAGILE(sym_binary_operator, 3), SHIFT(446),
    [1233] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(451),
    [1235] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(453),
    [1237] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_call, 4), REDUCE(sym_call, 5),
    [1240] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(462),
    [1242] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_call, 6), REDUCE(sym_call, 7),
    [1245] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_call_repeat1, 2), REDUCE(aux_sym_call_repeat1, 3),
    [1248] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_call_repeat1, 2), REDUCE(aux_sym_call_repeat1, 3),
    [1251] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(471),
    [1253] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_arguments, 3), REDUCE(sym_call, 4), REDUCE(sym_call, 5),
    [1257] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_list, 3), REDUCE(sym_subscript, 4), REDUCE(sym_list_comprehension, 7),
    [1261] = {.count = 5, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_if_statement, 4), REDUCE(sym_elif_clause, 4), REDUCE(sym_while_statement, 4), REDUCE(sym_except_clause, 4), REDUCE(sym_except_clause, 6),
    [1267] = {.count = 5, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_if_statement, 4), REDUCE(sym_elif_clause, 4), REDUCE(sym_while_statement, 4), REDUCE(sym_except_clause, 4), REDUCE(sym_except_clause, 6),
    [1273] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_except_clause, 4), REDUCE(sym_except_clause, 6),
    [1276] = {.count = 5, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_if_statement, 4), REDUCE(sym_elif_clause, 4), REDUCE(sym_while_statement, 4), REDUCE(sym_except_clause, 4), REDUCE(sym_except_clause, 6),
    [1282] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_if_statement, 5), REDUCE(sym_while_statement, 5),
    [1285] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_if_statement, 5), REDUCE(sym_while_statement, 5),
    [1288] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_if_statement, 5), REDUCE(sym_while_statement, 5),
    [1291] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_list, 4), REDUCE(sym_subscript, 5),
    [1294] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_print_statement_repeat1, 2), REDUCE(aux_sym_subscript_repeat1, 2),
    [1297] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_print_statement_repeat1, 2), SHIFT(473),
    [1300] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(476),
    [1302] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_if_statement, 5), REDUCE(sym_while_statement, 5), REDUCE(sym_for_statement, 7),
    [1306] = {.count = 3, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_if_statement, 5), REDUCE(sym_while_statement, 5), REDUCE(sym_for_statement, 7),
    [1310] = {.count = 3, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_if_statement, 5), REDUCE(sym_while_statement, 5), REDUCE(sym_for_statement, 7),
    [1314] = {.count = 4, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_parameters, 3), REDUCE(sym_parameters, 4), REDUCE(sym_parameters, 5), REDUCE(sym_parameters, 6),
    [1319] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_parameters, 3), REDUCE(sym_parameters, 4),
    [1322] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(485),
    [1324] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_parameters, 5), REDUCE(sym_parameters, 6),
    [1327] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(487),
    [1329] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_parameters_repeat1, 2), REDUCE(aux_sym_parameters_repeat1, 3),
    [1332] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_parameters_repeat1, 2), REDUCE(aux_sym_parameters_repeat1, 3),
    [1335] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_parameters, 4), REDUCE(sym_parameters, 5),
    [1338] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(495),
    [1340] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__expression, 1), SHIFT(238),
    [1343] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__expression, 1), SHIFT(235),
    [1346] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(499),
    [1348] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(500),
    [1350] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_list, 3), REDUCE(sym_subscript, 4),
    [1353] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_dotted_name_repeat1, 2), REDUCE(aux_sym_dotted_name_repeat1, 3),
    [1356] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(493),
    [1358] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(505),
    [1360] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__expression, 1), REDUCE(sym_list_splat_parameter, 2),
    [1363] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__expression, 1), REDUCE(sym_list_splat_parameter, 2), REDUCE(sym_dictionary_splat_parameter, 3),
    [1367] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_default_parameter, 3), REDUCE(sym_keyword_argument, 3),
    [1370] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(514),
    [1372] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(511),
    [1374] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_expression_list, 1), SHIFT(512),
    [1377] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_call_repeat1, 2), SHIFT(32),
    [1380] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_call_repeat1, 2), SHIFT(34),
    [1383] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_arguments, 3), REDUCE(sym_call, 4),
    [1386] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(490),
    [1388] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_with_item, 3), SHIFT(473),
    [1391] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(521),
    [1393] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(522),
    [1395] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(473),
    [1397] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(378),
    [1399] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(380),
    [1401] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(528),
    [1403] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(532),
    [1405] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE_FRAGILE(sym_binary_operator, 3), SHIFT(37),
    [1408] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE_FRAGILE(sym_binary_operator, 3), SHIFT(532),
    [1411] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE_FRAGILE(sym_binary_operator, 3), SHIFT(39),
    [1414] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(536),
    [1416] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(539),
    [1418] = {.count = 4, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_parameters, 4), REDUCE(sym_parameters, 5), REDUCE(sym_call, 5), REDUCE(sym_call, 6),
    [1423] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_subscript_repeat1, 2), REDUCE(aux_sym_subscript_repeat1, 3),
    [1426] = {.count = 4, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_list, 4), REDUCE(sym_subscript, 5), REDUCE(sym_list, 5), REDUCE(sym_subscript, 6),
    [1431] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_with_statement_repeat1, 2), REDUCE(aux_sym_with_statement_repeat1, 3),
    [1434] = {.count = 7, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_with_item, 1), REDUCE(aux_sym_print_statement_repeat1, 2), REDUCE(aux_sym_subscript_repeat1, 2), REDUCE(aux_sym_call_repeat2, 2), REDUCE(aux_sym_print_statement_repeat1, 3), REDUCE(aux_sym_subscript_repeat1, 3), REDUCE(aux_sym_call_repeat2, 3),
    [1442] = {.count = 4, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_with_item, 1), REDUCE(aux_sym_print_statement_repeat1, 2), REDUCE(aux_sym_print_statement_repeat1, 3), SHIFT(473),
    [1447] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_print_statement_repeat1, 2), REDUCE(aux_sym_print_statement_repeat1, 3),
    [1450] = {.count = 4, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_print_statement_repeat1, 2), REDUCE(aux_sym_call_repeat2, 2), REDUCE(aux_sym_print_statement_repeat1, 3), REDUCE(aux_sym_call_repeat2, 3),
    [1455] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(551),
    [1457] = {.count = 4, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_print_statement_repeat1, 2), REDUCE(aux_sym_subscript_repeat1, 2), REDUCE(aux_sym_print_statement_repeat1, 3), REDUCE(aux_sym_subscript_repeat1, 3),
    [1462] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_call_repeat2, 2), REDUCE(aux_sym_call_repeat2, 3),
    [1465] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(550),
    [1467] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_call, 6), REDUCE(sym_call, 7), REDUCE(sym_call, 8),
    [1471] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE_FRAGILE(sym_binary_operator, 3), SHIFT(551),
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
