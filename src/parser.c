#include <tree_sitter/parser.h>

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"

#define STATE_COUNT 534
#define SYMBOL_COUNT 89
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
    aux_sym_module_repeat1 = 78,
    aux_sym_print_statement_repeat1 = 79,
    aux_sym_if_statement_repeat1 = 80,
    aux_sym_try_statement_repeat1 = 81,
    aux_sym_with_statement_repeat1 = 82,
    aux_sym_parameters_repeat1 = 83,
    aux_sym_decorated_definition_repeat1 = 84,
    aux_sym_dotted_name_repeat1 = 85,
    aux_sym_subscript_repeat1 = 86,
    aux_sym_call_repeat1 = 87,
    aux_sym_call_repeat2 = 88,
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
            if (lookahead == 'i')
                ADVANCE(104);
            LEX_ERROR();
        case 102:
            if (lookahead == 's')
                ADVANCE(103);
            LEX_ERROR();
        case 103:
            ACCEPT_TOKEN(anon_sym_as);
        case 104:
            if (lookahead == 'n')
                ADVANCE(105);
            LEX_ERROR();
        case 105:
            ACCEPT_TOKEN(anon_sym_in);
        case 106:
            if (lookahead == 0)
                ADVANCE(1);
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(106);
            if (lookahead == '#')
                ADVANCE(2);
            LEX_ERROR();
        case 107:
            if (lookahead == 0)
                ADVANCE(1);
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(107);
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
        case 108:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(108);
            if (lookahead == '#')
                ADVANCE(2);
            if (lookahead == '@')
                ADVANCE(18);
            if (lookahead == 'c')
                ADVANCE(109);
            if (lookahead == 'd')
                ADVANCE(114);
            LEX_ERROR();
        case 109:
            if (lookahead == 'l')
                ADVANCE(110);
            LEX_ERROR();
        case 110:
            if (lookahead == 'a')
                ADVANCE(111);
            LEX_ERROR();
        case 111:
            if (lookahead == 's')
                ADVANCE(112);
            LEX_ERROR();
        case 112:
            if (lookahead == 's')
                ADVANCE(113);
            LEX_ERROR();
        case 113:
            ACCEPT_TOKEN(anon_sym_class);
        case 114:
            if (lookahead == 'e')
                ADVANCE(115);
            LEX_ERROR();
        case 115:
            if (lookahead == 'f')
                ADVANCE(116);
            LEX_ERROR();
        case 116:
            ACCEPT_TOKEN(anon_sym_def);
        case 117:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(117);
            if (lookahead == '#')
                ADVANCE(2);
            if (lookahead == '(')
                ADVANCE(4);
            if (lookahead == '+')
                ADVANCE(8);
            if (lookahead == '[')
                ADVANCE(20);
            LEX_ERROR();
        case 118:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(118);
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
        case 119:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(119);
            if (lookahead == '#')
                ADVANCE(2);
            if (lookahead == '.')
                ADVANCE(120);
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(13);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(19);
            if (lookahead == '[')
                ADVANCE(20);
            LEX_ERROR();
        case 120:
            if (lookahead == '.')
                ADVANCE(11);
            LEX_ERROR();
        case 121:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(121);
            if (lookahead == '#')
                ADVANCE(2);
            if (lookahead == ',')
                ADVANCE(9);
            if (lookahead == ']')
                ADVANCE(21);
            LEX_ERROR();
        case 122:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(122);
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
        case 123:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(123);
            if (lookahead == '#')
                ADVANCE(2);
            if (lookahead == '.')
                ADVANCE(120);
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
        case 124:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(124);
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
            if (lookahead == ')')
                ADVANCE(5);
            if (lookahead == '+')
                ADVANCE(8);
            if (lookahead == ',')
                ADVANCE(9);
            if (lookahead == '[')
                ADVANCE(20);
            LEX_ERROR();
        case 126:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(126);
            if (lookahead == '#')
                ADVANCE(2);
            if (lookahead == ')')
                ADVANCE(5);
            if (lookahead == ',')
                ADVANCE(9);
            LEX_ERROR();
        case 127:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(127);
            if (lookahead == '#')
                ADVANCE(2);
            if (lookahead == ')')
                ADVANCE(5);
            LEX_ERROR();
        case 128:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(128);
            if (lookahead == '#')
                ADVANCE(2);
            if (lookahead == '*')
                ADVANCE(129);
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(13);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(19);
            if (lookahead == '[')
                ADVANCE(20);
            LEX_ERROR();
        case 129:
            if (lookahead == '*')
                ADVANCE(7);
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
                ADVANCE(104);
            LEX_ERROR();
        case 133:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(133);
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
            if (lookahead == '.')
                ADVANCE(135);
            LEX_ERROR();
        case 135:
            ACCEPT_TOKEN(anon_sym_DOT);
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
            if (lookahead == ':')
                ADVANCE(15);
            LEX_ERROR();
        case 138:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(138);
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
                ADVANCE(139);
            if (lookahead == 'd')
                ADVANCE(140);
            if (lookahead == 'p')
                ADVANCE(68);
            if (lookahead == 'r')
                ADVANCE(76);
            LEX_ERROR();
        case 139:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'n') ||
                ('p' <= lookahead && lookahead <= 'z'))
                ADVANCE(19);
            if (lookahead == 'o')
                ADVANCE(34);
            ACCEPT_TOKEN(sym_identifier);
        case 140:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'z'))
                ADVANCE(19);
            if (lookahead == 'e')
                ADVANCE(141);
            ACCEPT_TOKEN(sym_identifier);
        case 141:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'k') ||
                ('m' <= lookahead && lookahead <= 'z'))
                ADVANCE(19);
            if (lookahead == 'l')
                ADVANCE(44);
            ACCEPT_TOKEN(sym_identifier);
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
                ADVANCE(104);
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
                ADVANCE(104);
            LEX_ERROR();
        case 144:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(144);
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
        case 145:
            if (lookahead == 0)
                ADVANCE(1);
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(145);
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
        case 147:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(147);
            if (lookahead == '#')
                ADVANCE(2);
            if (lookahead == ')')
                ADVANCE(5);
            if (lookahead == '*')
                ADVANCE(148);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(19);
            LEX_ERROR();
        case 148:
            ACCEPT_TOKEN(anon_sym_STAR);
        case 149:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(149);
            if (lookahead == '#')
                ADVANCE(2);
            if (lookahead == '*')
                ADVANCE(148);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(19);
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
                ADVANCE(5);
            if (lookahead == ',')
                ADVANCE(9);
            if (lookahead == '=')
                ADVANCE(17);
            LEX_ERROR();
        case 151:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(151);
            if (lookahead == '#')
                ADVANCE(2);
            if (lookahead == '*')
                ADVANCE(148);
            LEX_ERROR();
        case 152:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(152);
            if (lookahead == '#')
                ADVANCE(2);
            if (lookahead == ',')
                ADVANCE(9);
            if (lookahead == ':')
                ADVANCE(15);
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
            if (lookahead == '+')
                ADVANCE(8);
            if (lookahead == ',')
                ADVANCE(9);
            if (lookahead == ':')
                ADVANCE(15);
            if (lookahead == '[')
                ADVANCE(20);
            LEX_ERROR();
        case 155:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(155);
            if (lookahead == '#')
                ADVANCE(2);
            if (lookahead == 'e')
                ADVANCE(156);
            if (lookahead == 'f')
                ADVANCE(162);
            LEX_ERROR();
        case 156:
            if (lookahead == 'x')
                ADVANCE(157);
            LEX_ERROR();
        case 157:
            if (lookahead == 'c')
                ADVANCE(158);
            LEX_ERROR();
        case 158:
            if (lookahead == 'e')
                ADVANCE(159);
            LEX_ERROR();
        case 159:
            if (lookahead == 'p')
                ADVANCE(160);
            LEX_ERROR();
        case 160:
            if (lookahead == 't')
                ADVANCE(161);
            LEX_ERROR();
        case 161:
            ACCEPT_TOKEN(anon_sym_except);
        case 162:
            if (lookahead == 'i')
                ADVANCE(163);
            LEX_ERROR();
        case 163:
            if (lookahead == 'n')
                ADVANCE(164);
            LEX_ERROR();
        case 164:
            if (lookahead == 'a')
                ADVANCE(165);
            LEX_ERROR();
        case 165:
            if (lookahead == 'l')
                ADVANCE(166);
            LEX_ERROR();
        case 166:
            if (lookahead == 'l')
                ADVANCE(167);
            LEX_ERROR();
        case 167:
            if (lookahead == 'y')
                ADVANCE(168);
            LEX_ERROR();
        case 168:
            ACCEPT_TOKEN(anon_sym_finally);
        case 169:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(169);
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
                ADVANCE(170);
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
        case 170:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'k') ||
                ('m' <= lookahead && lookahead <= 'w') ||
                (lookahead == 'y') ||
                (lookahead == 'z'))
                ADVANCE(19);
            if (lookahead == 'l')
                ADVANCE(171);
            if (lookahead == 'x')
                ADVANCE(51);
            ACCEPT_TOKEN(sym_identifier);
        case 171:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'r') ||
                ('t' <= lookahead && lookahead <= 'z'))
                ADVANCE(19);
            if (lookahead == 's')
                ADVANCE(49);
            ACCEPT_TOKEN(sym_identifier);
        case 172:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(172);
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
        case 173:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(173);
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
        case 174:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(174);
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
                ADVANCE(175);
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
        case 175:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'k') ||
                ('m' <= lookahead && lookahead <= 'z'))
                ADVANCE(19);
            if (lookahead == 'l')
                ADVANCE(171);
            ACCEPT_TOKEN(sym_identifier);
        case 176:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(176);
            if (lookahead == '#')
                ADVANCE(2);
            if (lookahead == 'i')
                ADVANCE(104);
            LEX_ERROR();
        case 177:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(177);
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
                ADVANCE(178);
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
        case 178:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'k') ||
                ('m' <= lookahead && lookahead <= 'z'))
                ADVANCE(19);
            if (lookahead == 'l')
                ADVANCE(46);
            ACCEPT_TOKEN(sym_identifier);
        case 179:
            if (lookahead == 0)
                ADVANCE(1);
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(179);
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
                ADVANCE(170);
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
        case 180:
            if (lookahead == 0)
                ADVANCE(1);
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(180);
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
                ADVANCE(175);
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
        case 182:
            if (lookahead == 0)
                ADVANCE(1);
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(182);
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
                ADVANCE(178);
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
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(183);
            if (lookahead == '#')
                ADVANCE(2);
            if (lookahead == ',')
                ADVANCE(9);
            LEX_ERROR();
        case 184:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(184);
            if (lookahead == '#')
                ADVANCE(2);
            if (lookahead == ')')
                ADVANCE(5);
            if (lookahead == '*')
                ADVANCE(6);
            if (lookahead == '.')
                ADVANCE(120);
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
        case 185:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(185);
            if (lookahead == '#')
                ADVANCE(2);
            if (lookahead == '*')
                ADVANCE(148);
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(13);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(19);
            if (lookahead == '[')
                ADVANCE(20);
            LEX_ERROR();
        case 186:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(186);
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
                ADVANCE(135);
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
                ADVANCE(104);
            LEX_ERROR();
        case 187:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(187);
            if (lookahead == '#')
                ADVANCE(2);
            if (lookahead == ')')
                ADVANCE(5);
            if (lookahead == ':')
                ADVANCE(15);
            if (lookahead == 'i')
                ADVANCE(104);
            LEX_ERROR();
        case 188:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(188);
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
                ADVANCE(104);
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
                ADVANCE(148);
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(13);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(19);
            if (lookahead == '[')
                ADVANCE(20);
            LEX_ERROR();
        case 190:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(190);
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
                ADVANCE(104);
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
    [16] = {.lex_state = 106},
    [17] = {.lex_state = 107, .external_tokens = 2},
    [18] = {.lex_state = 97, .external_tokens = 2},
    [19] = {.lex_state = 107, .external_tokens = 2},
    [20] = {.lex_state = 107, .external_tokens = 2},
    [21] = {.lex_state = 108},
    [22] = {.lex_state = 117, .external_tokens = 2},
    [23] = {.lex_state = 107, .external_tokens = 2},
    [24] = {.lex_state = 108},
    [25] = {.lex_state = 107, .external_tokens = 2},
    [26] = {.lex_state = 108},
    [27] = {.lex_state = 106},
    [28] = {.lex_state = 107, .external_tokens = 2},
    [29] = {.lex_state = 118},
    [30] = {.lex_state = 96},
    [31] = {.lex_state = 119},
    [32] = {.lex_state = 100},
    [33] = {.lex_state = 121},
    [34] = {.lex_state = 101},
    [35] = {.lex_state = 122},
    [36] = {.lex_state = 123},
    [37] = {.lex_state = 118},
    [38] = {.lex_state = 96},
    [39] = {.lex_state = 119},
    [40] = {.lex_state = 101, .external_tokens = 2},
    [41] = {.lex_state = 121},
    [42] = {.lex_state = 123},
    [43] = {.lex_state = 101, .external_tokens = 2},
    [44] = {.lex_state = 121},
    [45] = {.lex_state = 101, .external_tokens = 2},
    [46] = {.lex_state = 122},
    [47] = {.lex_state = 121},
    [48] = {.lex_state = 122},
    [49] = {.lex_state = 123},
    [50] = {.lex_state = 101},
    [51] = {.lex_state = 121},
    [52] = {.lex_state = 123},
    [53] = {.lex_state = 101},
    [54] = {.lex_state = 101},
    [55] = {.lex_state = 121},
    [56] = {.lex_state = 122},
    [57] = {.lex_state = 101},
    [58] = {.lex_state = 96},
    [59] = {.lex_state = 96},
    [60] = {.lex_state = 124},
    [61] = {.lex_state = 125},
    [62] = {.lex_state = 126},
    [63] = {.lex_state = 126},
    [64] = {.lex_state = 127},
    [65] = {.lex_state = 118},
    [66] = {.lex_state = 125},
    [67] = {.lex_state = 126},
    [68] = {.lex_state = 126},
    [69] = {.lex_state = 127},
    [70] = {.lex_state = 101},
    [71] = {.lex_state = 128},
    [72] = {.lex_state = 126},
    [73] = {.lex_state = 128},
    [74] = {.lex_state = 101},
    [75] = {.lex_state = 125},
    [76] = {.lex_state = 126},
    [77] = {.lex_state = 127},
    [78] = {.lex_state = 101},
    [79] = {.lex_state = 125},
    [80] = {.lex_state = 126},
    [81] = {.lex_state = 127},
    [82] = {.lex_state = 101},
    [83] = {.lex_state = 130},
    [84] = {.lex_state = 101},
    [85] = {.lex_state = 128},
    [86] = {.lex_state = 126},
    [87] = {.lex_state = 128},
    [88] = {.lex_state = 127},
    [89] = {.lex_state = 130},
    [90] = {.lex_state = 96},
    [91] = {.lex_state = 125},
    [92] = {.lex_state = 131},
    [93] = {.lex_state = 101},
    [94] = {.lex_state = 122},
    [95] = {.lex_state = 100},
    [96] = {.lex_state = 101},
    [97] = {.lex_state = 121},
    [98] = {.lex_state = 100},
    [99] = {.lex_state = 101},
    [100] = {.lex_state = 101},
    [101] = {.lex_state = 132},
    [102] = {.lex_state = 132},
    [103] = {.lex_state = 125},
    [104] = {.lex_state = 133, .external_tokens = 2},
    [105] = {.lex_state = 125},
    [106] = {.lex_state = 126},
    [107] = {.lex_state = 126},
    [108] = {.lex_state = 127},
    [109] = {.lex_state = 118},
    [110] = {.lex_state = 125},
    [111] = {.lex_state = 126},
    [112] = {.lex_state = 126},
    [113] = {.lex_state = 127},
    [114] = {.lex_state = 101, .external_tokens = 2},
    [115] = {.lex_state = 128},
    [116] = {.lex_state = 126},
    [117] = {.lex_state = 128},
    [118] = {.lex_state = 101, .external_tokens = 2},
    [119] = {.lex_state = 127},
    [120] = {.lex_state = 101, .external_tokens = 2},
    [121] = {.lex_state = 127},
    [122] = {.lex_state = 101, .external_tokens = 2},
    [123] = {.lex_state = 130},
    [124] = {.lex_state = 101, .external_tokens = 2},
    [125] = {.lex_state = 128},
    [126] = {.lex_state = 126},
    [127] = {.lex_state = 128},
    [128] = {.lex_state = 127},
    [129] = {.lex_state = 130},
    [130] = {.lex_state = 107, .external_tokens = 2},
    [131] = {.lex_state = 101, .external_tokens = 2},
    [132] = {.lex_state = 122},
    [133] = {.lex_state = 100},
    [134] = {.lex_state = 101, .external_tokens = 2},
    [135] = {.lex_state = 121},
    [136] = {.lex_state = 100},
    [137] = {.lex_state = 101, .external_tokens = 2},
    [138] = {.lex_state = 101, .external_tokens = 2},
    [139] = {.lex_state = 134, .external_tokens = 2},
    [140] = {.lex_state = 136, .external_tokens = 2},
    [141] = {.lex_state = 96},
    [142] = {.lex_state = 108},
    [143] = {.lex_state = 97, .external_tokens = 2},
    [144] = {.lex_state = 108},
    [145] = {.lex_state = 125},
    [146] = {.lex_state = 96},
    [147] = {.lex_state = 97, .external_tokens = 2},
    [148] = {.lex_state = 126},
    [149] = {.lex_state = 96},
    [150] = {.lex_state = 97, .external_tokens = 2},
    [151] = {.lex_state = 99},
    [152] = {.lex_state = 134, .external_tokens = 2},
    [153] = {.lex_state = 99},
    [154] = {.lex_state = 134, .external_tokens = 2},
    [155] = {.lex_state = 134, .external_tokens = 2},
    [156] = {.lex_state = 137},
    [157] = {.lex_state = 138, .external_tokens = 3},
    [158] = {.lex_state = 96},
    [159] = {.lex_state = 127},
    [160] = {.lex_state = 142},
    [161] = {.lex_state = 143},
    [162] = {.lex_state = 98},
    [163] = {.lex_state = 138, .external_tokens = 3},
    [164] = {.lex_state = 144, .external_tokens = 4},
    [165] = {.lex_state = 97, .external_tokens = 2},
    [166] = {.lex_state = 107, .external_tokens = 2},
    [167] = {.lex_state = 145, .external_tokens = 2},
    [168] = {.lex_state = 96},
    [169] = {.lex_state = 96},
    [170] = {.lex_state = 96},
    [171] = {.lex_state = 98},
    [172] = {.lex_state = 96},
    [173] = {.lex_state = 99},
    [174] = {.lex_state = 99},
    [175] = {.lex_state = 144, .external_tokens = 4},
    [176] = {.lex_state = 97, .external_tokens = 2},
    [177] = {.lex_state = 144, .external_tokens = 4},
    [178] = {.lex_state = 144, .external_tokens = 4},
    [179] = {.lex_state = 144, .external_tokens = 4},
    [180] = {.lex_state = 108},
    [181] = {.lex_state = 144, .external_tokens = 4},
    [182] = {.lex_state = 145, .external_tokens = 2},
    [183] = {.lex_state = 144, .external_tokens = 4},
    [184] = {.lex_state = 144, .external_tokens = 4},
    [185] = {.lex_state = 137},
    [186] = {.lex_state = 138, .external_tokens = 3},
    [187] = {.lex_state = 96},
    [188] = {.lex_state = 127},
    [189] = {.lex_state = 98},
    [190] = {.lex_state = 138, .external_tokens = 3},
    [191] = {.lex_state = 144, .external_tokens = 4},
    [192] = {.lex_state = 97, .external_tokens = 2},
    [193] = {.lex_state = 144, .external_tokens = 4},
    [194] = {.lex_state = 146, .external_tokens = 4},
    [195] = {.lex_state = 144, .external_tokens = 4},
    [196] = {.lex_state = 146, .external_tokens = 4},
    [197] = {.lex_state = 144, .external_tokens = 4},
    [198] = {.lex_state = 136},
    [199] = {.lex_state = 147},
    [200] = {.lex_state = 98},
    [201] = {.lex_state = 138, .external_tokens = 3},
    [202] = {.lex_state = 144, .external_tokens = 4},
    [203] = {.lex_state = 98},
    [204] = {.lex_state = 149},
    [205] = {.lex_state = 150},
    [206] = {.lex_state = 126},
    [207] = {.lex_state = 126},
    [208] = {.lex_state = 127},
    [209] = {.lex_state = 149},
    [210] = {.lex_state = 150},
    [211] = {.lex_state = 126},
    [212] = {.lex_state = 126},
    [213] = {.lex_state = 127},
    [214] = {.lex_state = 98},
    [215] = {.lex_state = 151},
    [216] = {.lex_state = 151},
    [217] = {.lex_state = 127},
    [218] = {.lex_state = 98},
    [219] = {.lex_state = 99},
    [220] = {.lex_state = 127},
    [221] = {.lex_state = 147},
    [222] = {.lex_state = 98},
    [223] = {.lex_state = 96},
    [224] = {.lex_state = 125},
    [225] = {.lex_state = 98},
    [226] = {.lex_state = 151},
    [227] = {.lex_state = 127},
    [228] = {.lex_state = 147},
    [229] = {.lex_state = 126},
    [230] = {.lex_state = 152},
    [231] = {.lex_state = 153},
    [232] = {.lex_state = 96},
    [233] = {.lex_state = 154},
    [234] = {.lex_state = 96},
    [235] = {.lex_state = 138, .external_tokens = 3},
    [236] = {.lex_state = 152},
    [237] = {.lex_state = 96},
    [238] = {.lex_state = 138, .external_tokens = 3},
    [239] = {.lex_state = 144, .external_tokens = 4},
    [240] = {.lex_state = 152},
    [241] = {.lex_state = 144, .external_tokens = 4},
    [242] = {.lex_state = 152},
    [243] = {.lex_state = 138, .external_tokens = 3},
    [244] = {.lex_state = 144, .external_tokens = 4},
    [245] = {.lex_state = 97, .external_tokens = 2},
    [246] = {.lex_state = 155},
    [247] = {.lex_state = 96},
    [248] = {.lex_state = 98},
    [249] = {.lex_state = 169, .external_tokens = 4},
    [250] = {.lex_state = 144, .external_tokens = 4},
    [251] = {.lex_state = 169, .external_tokens = 4},
    [252] = {.lex_state = 98},
    [253] = {.lex_state = 172, .external_tokens = 4},
    [254] = {.lex_state = 169, .external_tokens = 4},
    [255] = {.lex_state = 144, .external_tokens = 4},
    [256] = {.lex_state = 144, .external_tokens = 4},
    [257] = {.lex_state = 138, .external_tokens = 3},
    [258] = {.lex_state = 172, .external_tokens = 4},
    [259] = {.lex_state = 138, .external_tokens = 3},
    [260] = {.lex_state = 144, .external_tokens = 4},
    [261] = {.lex_state = 153},
    [262] = {.lex_state = 96},
    [263] = {.lex_state = 138, .external_tokens = 3},
    [264] = {.lex_state = 173},
    [265] = {.lex_state = 138, .external_tokens = 3},
    [266] = {.lex_state = 169, .external_tokens = 4},
    [267] = {.lex_state = 169, .external_tokens = 4},
    [268] = {.lex_state = 155},
    [269] = {.lex_state = 144, .external_tokens = 4},
    [270] = {.lex_state = 155},
    [271] = {.lex_state = 173},
    [272] = {.lex_state = 138, .external_tokens = 3},
    [273] = {.lex_state = 174, .external_tokens = 4},
    [274] = {.lex_state = 144, .external_tokens = 4},
    [275] = {.lex_state = 176},
    [276] = {.lex_state = 96},
    [277] = {.lex_state = 98},
    [278] = {.lex_state = 138, .external_tokens = 3},
    [279] = {.lex_state = 174, .external_tokens = 4},
    [280] = {.lex_state = 144, .external_tokens = 4},
    [281] = {.lex_state = 173},
    [282] = {.lex_state = 138, .external_tokens = 3},
    [283] = {.lex_state = 177, .external_tokens = 4},
    [284] = {.lex_state = 96},
    [285] = {.lex_state = 177, .external_tokens = 4},
    [286] = {.lex_state = 144, .external_tokens = 4},
    [287] = {.lex_state = 177, .external_tokens = 4},
    [288] = {.lex_state = 177, .external_tokens = 4},
    [289] = {.lex_state = 144, .external_tokens = 4},
    [290] = {.lex_state = 173},
    [291] = {.lex_state = 138, .external_tokens = 3},
    [292] = {.lex_state = 177, .external_tokens = 4},
    [293] = {.lex_state = 107, .external_tokens = 2},
    [294] = {.lex_state = 136},
    [295] = {.lex_state = 98},
    [296] = {.lex_state = 138, .external_tokens = 3},
    [297] = {.lex_state = 107, .external_tokens = 2},
    [298] = {.lex_state = 152},
    [299] = {.lex_state = 138, .external_tokens = 3},
    [300] = {.lex_state = 152},
    [301] = {.lex_state = 138, .external_tokens = 3},
    [302] = {.lex_state = 107, .external_tokens = 2},
    [303] = {.lex_state = 107, .external_tokens = 2},
    [304] = {.lex_state = 138, .external_tokens = 3},
    [305] = {.lex_state = 155},
    [306] = {.lex_state = 96},
    [307] = {.lex_state = 98},
    [308] = {.lex_state = 179, .external_tokens = 2},
    [309] = {.lex_state = 107, .external_tokens = 2},
    [310] = {.lex_state = 179, .external_tokens = 2},
    [311] = {.lex_state = 98},
    [312] = {.lex_state = 180, .external_tokens = 2},
    [313] = {.lex_state = 179, .external_tokens = 2},
    [314] = {.lex_state = 107, .external_tokens = 2},
    [315] = {.lex_state = 107, .external_tokens = 2},
    [316] = {.lex_state = 138, .external_tokens = 3},
    [317] = {.lex_state = 180, .external_tokens = 2},
    [318] = {.lex_state = 138, .external_tokens = 3},
    [319] = {.lex_state = 107, .external_tokens = 2},
    [320] = {.lex_state = 153},
    [321] = {.lex_state = 96},
    [322] = {.lex_state = 138, .external_tokens = 3},
    [323] = {.lex_state = 173},
    [324] = {.lex_state = 138, .external_tokens = 3},
    [325] = {.lex_state = 179, .external_tokens = 2},
    [326] = {.lex_state = 179, .external_tokens = 2},
    [327] = {.lex_state = 173},
    [328] = {.lex_state = 138, .external_tokens = 3},
    [329] = {.lex_state = 181, .external_tokens = 2},
    [330] = {.lex_state = 107, .external_tokens = 2},
    [331] = {.lex_state = 176},
    [332] = {.lex_state = 96},
    [333] = {.lex_state = 98},
    [334] = {.lex_state = 138, .external_tokens = 3},
    [335] = {.lex_state = 181, .external_tokens = 2},
    [336] = {.lex_state = 107, .external_tokens = 2},
    [337] = {.lex_state = 173},
    [338] = {.lex_state = 138, .external_tokens = 3},
    [339] = {.lex_state = 182, .external_tokens = 2},
    [340] = {.lex_state = 96},
    [341] = {.lex_state = 182, .external_tokens = 2},
    [342] = {.lex_state = 107, .external_tokens = 2},
    [343] = {.lex_state = 182, .external_tokens = 2},
    [344] = {.lex_state = 182, .external_tokens = 2},
    [345] = {.lex_state = 107, .external_tokens = 2},
    [346] = {.lex_state = 173},
    [347] = {.lex_state = 138, .external_tokens = 3},
    [348] = {.lex_state = 182, .external_tokens = 2},
    [349] = {.lex_state = 97, .external_tokens = 2},
    [350] = {.lex_state = 133, .external_tokens = 2},
    [351] = {.lex_state = 96},
    [352] = {.lex_state = 183, .external_tokens = 2},
    [353] = {.lex_state = 96},
    [354] = {.lex_state = 133, .external_tokens = 2},
    [355] = {.lex_state = 133, .external_tokens = 2},
    [356] = {.lex_state = 97, .external_tokens = 2},
    [357] = {.lex_state = 133, .external_tokens = 2},
    [358] = {.lex_state = 183, .external_tokens = 2},
    [359] = {.lex_state = 184},
    [360] = {.lex_state = 96},
    [361] = {.lex_state = 138, .external_tokens = 3},
    [362] = {.lex_state = 96},
    [363] = {.lex_state = 98},
    [364] = {.lex_state = 96},
    [365] = {.lex_state = 96},
    [366] = {.lex_state = 96},
    [367] = {.lex_state = 98},
    [368] = {.lex_state = 96},
    [369] = {.lex_state = 96},
    [370] = {.lex_state = 98},
    [371] = {.lex_state = 96},
    [372] = {.lex_state = 99},
    [373] = {.lex_state = 130},
    [374] = {.lex_state = 101, .external_tokens = 2},
    [375] = {.lex_state = 96},
    [376] = {.lex_state = 185},
    [377] = {.lex_state = 99},
    [378] = {.lex_state = 99},
    [379] = {.lex_state = 96},
    [380] = {.lex_state = 123},
    [381] = {.lex_state = 121},
    [382] = {.lex_state = 101, .external_tokens = 2},
    [383] = {.lex_state = 186, .external_tokens = 2},
    [384] = {.lex_state = 145, .external_tokens = 5},
    [385] = {.lex_state = 144, .external_tokens = 4},
    [386] = {.lex_state = 145, .external_tokens = 5},
    [387] = {.lex_state = 107, .external_tokens = 5},
    [388] = {.lex_state = 97, .external_tokens = 2},
    [389] = {.lex_state = 107, .external_tokens = 5},
    [390] = {.lex_state = 107, .external_tokens = 5},
    [391] = {.lex_state = 182, .external_tokens = 5},
    [392] = {.lex_state = 180, .external_tokens = 5},
    [393] = {.lex_state = 179, .external_tokens = 5},
    [394] = {.lex_state = 107, .external_tokens = 5},
    [395] = {.lex_state = 152},
    [396] = {.lex_state = 107, .external_tokens = 5},
    [397] = {.lex_state = 98},
    [398] = {.lex_state = 126},
    [399] = {.lex_state = 126},
    [400] = {.lex_state = 127},
    [401] = {.lex_state = 108},
    [402] = {.lex_state = 145, .external_tokens = 5},
    [403] = {.lex_state = 187, .external_tokens = 2},
    [404] = {.lex_state = 101, .external_tokens = 2},
    [405] = {.lex_state = 126},
    [406] = {.lex_state = 126},
    [407] = {.lex_state = 127},
    [408] = {.lex_state = 107, .external_tokens = 5},
    [409] = {.lex_state = 188, .external_tokens = 2},
    [410] = {.lex_state = 182, .external_tokens = 5},
    [411] = {.lex_state = 179, .external_tokens = 5},
    [412] = {.lex_state = 152},
    [413] = {.lex_state = 108},
    [414] = {.lex_state = 126},
    [415] = {.lex_state = 128},
    [416] = {.lex_state = 101, .external_tokens = 2},
    [417] = {.lex_state = 127},
    [418] = {.lex_state = 101, .external_tokens = 2},
    [419] = {.lex_state = 107, .external_tokens = 5},
    [420] = {.lex_state = 138, .external_tokens = 3},
    [421] = {.lex_state = 97, .external_tokens = 2},
    [422] = {.lex_state = 107, .external_tokens = 5},
    [423] = {.lex_state = 145, .external_tokens = 5},
    [424] = {.lex_state = 144, .external_tokens = 4},
    [425] = {.lex_state = 145, .external_tokens = 5},
    [426] = {.lex_state = 180, .external_tokens = 5},
    [427] = {.lex_state = 179, .external_tokens = 5},
    [428] = {.lex_state = 107, .external_tokens = 5},
    [429] = {.lex_state = 107, .external_tokens = 5},
    [430] = {.lex_state = 182, .external_tokens = 5},
    [431] = {.lex_state = 107, .external_tokens = 5},
    [432] = {.lex_state = 138, .external_tokens = 3},
    [433] = {.lex_state = 180, .external_tokens = 5},
    [434] = {.lex_state = 100},
    [435] = {.lex_state = 132, .external_tokens = 2},
    [436] = {.lex_state = 96},
    [437] = {.lex_state = 132, .external_tokens = 2},
    [438] = {.lex_state = 107, .external_tokens = 5},
    [439] = {.lex_state = 97, .external_tokens = 2},
    [440] = {.lex_state = 107, .external_tokens = 5},
    [441] = {.lex_state = 101, .external_tokens = 2},
    [442] = {.lex_state = 128},
    [443] = {.lex_state = 101, .external_tokens = 2},
    [444] = {.lex_state = 127},
    [445] = {.lex_state = 101, .external_tokens = 2},
    [446] = {.lex_state = 130},
    [447] = {.lex_state = 184},
    [448] = {.lex_state = 138, .external_tokens = 3},
    [449] = {.lex_state = 101, .external_tokens = 2},
    [450] = {.lex_state = 101, .external_tokens = 2},
    [451] = {.lex_state = 145, .external_tokens = 5},
    [452] = {.lex_state = 182, .external_tokens = 5},
    [453] = {.lex_state = 107, .external_tokens = 5},
    [454] = {.lex_state = 101, .external_tokens = 2},
    [455] = {.lex_state = 132, .external_tokens = 2},
    [456] = {.lex_state = 138, .external_tokens = 3},
    [457] = {.lex_state = 179, .external_tokens = 5},
    [458] = {.lex_state = 138, .external_tokens = 3},
    [459] = {.lex_state = 98},
    [460] = {.lex_state = 138, .external_tokens = 3},
    [461] = {.lex_state = 107, .external_tokens = 5},
    [462] = {.lex_state = 181, .external_tokens = 5},
    [463] = {.lex_state = 107, .external_tokens = 5},
    [464] = {.lex_state = 107, .external_tokens = 5},
    [465] = {.lex_state = 179, .external_tokens = 5},
    [466] = {.lex_state = 107, .external_tokens = 5},
    [467] = {.lex_state = 98},
    [468] = {.lex_state = 151},
    [469] = {.lex_state = 98},
    [470] = {.lex_state = 127},
    [471] = {.lex_state = 98},
    [472] = {.lex_state = 147},
    [473] = {.lex_state = 98},
    [474] = {.lex_state = 138, .external_tokens = 3},
    [475] = {.lex_state = 107, .external_tokens = 5},
    [476] = {.lex_state = 138, .external_tokens = 3},
    [477] = {.lex_state = 107, .external_tokens = 5},
    [478] = {.lex_state = 145, .external_tokens = 5},
    [479] = {.lex_state = 138, .external_tokens = 3},
    [480] = {.lex_state = 189},
    [481] = {.lex_state = 124},
    [482] = {.lex_state = 127},
    [483] = {.lex_state = 107, .external_tokens = 5},
    [484] = {.lex_state = 122},
    [485] = {.lex_state = 123},
    [486] = {.lex_state = 122},
    [487] = {.lex_state = 101, .external_tokens = 2},
    [488] = {.lex_state = 134, .external_tokens = 2},
    [489] = {.lex_state = 137},
    [490] = {.lex_state = 96},
    [491] = {.lex_state = 125},
    [492] = {.lex_state = 125},
    [493] = {.lex_state = 185},
    [494] = {.lex_state = 124},
    [495] = {.lex_state = 125},
    [496] = {.lex_state = 130},
    [497] = {.lex_state = 101, .external_tokens = 2},
    [498] = {.lex_state = 126},
    [499] = {.lex_state = 125},
    [500] = {.lex_state = 136},
    [501] = {.lex_state = 152},
    [502] = {.lex_state = 138, .external_tokens = 3},
    [503] = {.lex_state = 107, .external_tokens = 5},
    [504] = {.lex_state = 154},
    [505] = {.lex_state = 153},
    [506] = {.lex_state = 96},
    [507] = {.lex_state = 138, .external_tokens = 3},
    [508] = {.lex_state = 173},
    [509] = {.lex_state = 179, .external_tokens = 5},
    [510] = {.lex_state = 138, .external_tokens = 3},
    [511] = {.lex_state = 155},
    [512] = {.lex_state = 173},
    [513] = {.lex_state = 138, .external_tokens = 3},
    [514] = {.lex_state = 181, .external_tokens = 5},
    [515] = {.lex_state = 107, .external_tokens = 5},
    [516] = {.lex_state = 98},
    [517] = {.lex_state = 176},
    [518] = {.lex_state = 173},
    [519] = {.lex_state = 138, .external_tokens = 3},
    [520] = {.lex_state = 182, .external_tokens = 5},
    [521] = {.lex_state = 173},
    [522] = {.lex_state = 138, .external_tokens = 3},
    [523] = {.lex_state = 182, .external_tokens = 5},
    [524] = {.lex_state = 107, .external_tokens = 5},
    [525] = {.lex_state = 101, .external_tokens = 2},
    [526] = {.lex_state = 121},
    [527] = {.lex_state = 101, .external_tokens = 2},
    [528] = {.lex_state = 190, .external_tokens = 2},
    [529] = {.lex_state = 152},
    [530] = {.lex_state = 101, .external_tokens = 2},
    [531] = {.lex_state = 126},
    [532] = {.lex_state = 127},
    [533] = {.lex_state = 101, .external_tokens = 2},
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
        [sym__statement] = STATE(387),
        [sym__simple_statement] = STATE(388),
        [sym_print_statement] = STATE(5),
        [sym_expression_statement] = STATE(5),
        [sym_return_statement] = STATE(5),
        [sym_delete_statement] = STATE(5),
        [sym__compound_statement] = STATE(389),
        [sym_if_statement] = STATE(390),
        [sym_elif_clause] = STATE(391),
        [sym_else_clause] = STATE(392),
        [sym_for_statement] = STATE(390),
        [sym_while_statement] = STATE(390),
        [sym_try_statement] = STATE(390),
        [sym_except_clause] = STATE(393),
        [sym_finally_clause] = STATE(394),
        [sym_with_statement] = STATE(390),
        [sym_with_item] = STATE(395),
        [sym_function_definition] = STATE(396),
        [sym_parameters] = STATE(397),
        [sym_default_parameter] = STATE(398),
        [sym_list_splat_parameter] = STATE(399),
        [sym_dictionary_splat_parameter] = STATE(400),
        [sym_class_definition] = STATE(396),
        [sym_decorated_definition] = STATE(390),
        [sym_decorator] = STATE(401),
        [sym__suite] = STATE(402),
        [sym_arguments] = STATE(143),
        [sym_expression_list] = STATE(403),
        [sym_dotted_name] = STATE(140),
        [sym__expression] = STATE(404),
        [sym_binary_operator] = STATE(15),
        [sym_subscript] = STATE(15),
        [sym_call] = STATE(15),
        [sym_keyword_argument] = STATE(405),
        [sym_list_splat_argument] = STATE(406),
        [sym_dictionary_splat_argument] = STATE(407),
        [sym_list] = STATE(15),
        [aux_sym_module_repeat1] = STATE(408),
        [aux_sym_print_statement_repeat1] = STATE(409),
        [aux_sym_if_statement_repeat1] = STATE(410),
        [aux_sym_try_statement_repeat1] = STATE(411),
        [aux_sym_with_statement_repeat1] = STATE(412),
        [aux_sym_parameters_repeat1] = STATE(209),
        [aux_sym_decorated_definition_repeat1] = STATE(413),
        [aux_sym_dotted_name_repeat1] = STATE(152),
        [aux_sym_subscript_repeat1] = STATE(41),
        [aux_sym_call_repeat1] = STATE(109),
        [aux_sym_call_repeat2] = STATE(414),
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
        [sym__expression] = STATE(357),
        [sym_binary_operator] = STATE(15),
        [sym_subscript] = STATE(15),
        [sym_call] = STATE(15),
        [sym_list] = STATE(15),
        [anon_sym_LBRACK] = ACTIONS(103),
        [sym_number] = ACTIONS(105),
        [sym_identifier] = ACTIONS(105),
        [sym_comment] = ACTIONS(69),
    },
    [3] = {
        [sym_expression_list] = STATE(356),
        [sym__expression] = STATE(350),
        [sym_binary_operator] = STATE(15),
        [sym_subscript] = STATE(15),
        [sym_call] = STATE(15),
        [sym_list] = STATE(15),
        [anon_sym_LBRACK] = ACTIONS(103),
        [sym_number] = ACTIONS(105),
        [sym_identifier] = ACTIONS(105),
        [sym_comment] = ACTIONS(69),
    },
    [4] = {
        [sym_expression_list] = STATE(349),
        [sym__expression] = STATE(350),
        [sym_binary_operator] = STATE(15),
        [sym_subscript] = STATE(15),
        [sym_call] = STATE(15),
        [sym_list] = STATE(15),
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
        [sym__expression] = STATE(337),
        [sym_binary_operator] = STATE(34),
        [sym_subscript] = STATE(34),
        [sym_call] = STATE(34),
        [sym_list] = STATE(34),
        [anon_sym_LBRACK] = ACTIONS(111),
        [sym_number] = ACTIONS(113),
        [sym_identifier] = ACTIONS(113),
        [sym_comment] = ACTIONS(69),
    },
    [7] = {
        [sym_expression_list] = STATE(331),
        [sym__expression] = STATE(160),
        [sym_binary_operator] = STATE(34),
        [sym_subscript] = STATE(34),
        [sym_call] = STATE(34),
        [sym_list] = STATE(34),
        [anon_sym_LBRACK] = ACTIONS(111),
        [sym_number] = ACTIONS(113),
        [sym_identifier] = ACTIONS(113),
        [sym_comment] = ACTIONS(69),
    },
    [8] = {
        [sym__expression] = STATE(327),
        [sym_binary_operator] = STATE(34),
        [sym_subscript] = STATE(34),
        [sym_call] = STATE(34),
        [sym_list] = STATE(34),
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
        [sym_with_item] = STATE(298),
        [sym__expression] = STATE(231),
        [sym_binary_operator] = STATE(34),
        [sym_subscript] = STATE(34),
        [sym_call] = STATE(34),
        [sym_list] = STATE(34),
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
        [sym_dotted_name] = STATE(140),
        [sym_identifier] = ACTIONS(121),
        [sym_comment] = ACTIONS(69),
    },
    [14] = {
        [sym__expression] = STATE(132),
        [sym_binary_operator] = STATE(34),
        [sym_subscript] = STATE(34),
        [sym_call] = STATE(34),
        [sym_list] = STATE(34),
        [anon_sym_LBRACK] = ACTIONS(111),
        [anon_sym_RBRACK] = ACTIONS(123),
        [sym_number] = ACTIONS(113),
        [sym_identifier] = ACTIONS(113),
        [sym_comment] = ACTIONS(69),
    },
    [15] = {
        [anon_sym_COMMA] = ACTIONS(125),
        [anon_sym_COLON] = ACTIONS(125),
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
        [sym__expression] = STATE(105),
        [sym_binary_operator] = STATE(34),
        [sym_subscript] = STATE(34),
        [sym_call] = STATE(34),
        [sym_keyword_argument] = STATE(106),
        [sym_list_splat_argument] = STATE(107),
        [sym_dictionary_splat_argument] = STATE(108),
        [sym_list] = STATE(34),
        [aux_sym_call_repeat1] = STATE(109),
        [anon_sym_STAR] = ACTIONS(183),
        [anon_sym_LBRACK] = ACTIONS(111),
        [anon_sym_STAR_STAR] = ACTIONS(185),
        [sym_number] = ACTIONS(113),
        [sym_identifier] = ACTIONS(187),
        [sym_comment] = ACTIONS(69),
    },
    [30] = {
        [sym__expression] = STATE(104),
        [sym_binary_operator] = STATE(15),
        [sym_subscript] = STATE(15),
        [sym_call] = STATE(15),
        [sym_list] = STATE(15),
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
        [anon_sym_LBRACK] = ACTIONS(111),
        [anon_sym_DOT_DOT_DOT] = ACTIONS(207),
        [sym_number] = ACTIONS(113),
        [sym_identifier] = ACTIONS(113),
        [sym_comment] = ACTIONS(69),
    },
    [40] = {
        [anon_sym_COMMA] = ACTIONS(209),
        [anon_sym_COLON] = ACTIONS(209),
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
        [sym__expression] = STATE(103),
        [sym_binary_operator] = STATE(34),
        [sym_subscript] = STATE(34),
        [sym_call] = STATE(34),
        [sym_list] = STATE(34),
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
        [anon_sym_LBRACK] = ACTIONS(111),
        [anon_sym_STAR_STAR] = ACTIONS(185),
        [sym_number] = ACTIONS(113),
        [sym_identifier] = ACTIONS(187),
        [sym_comment] = ACTIONS(69),
    },
    [74] = {
        [anon_sym_COMMA] = ACTIONS(257),
        [anon_sym_COLON] = ACTIONS(257),
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
        [aux_sym_print_statement_repeat1] = STATE(97),
        [anon_sym_COMMA] = ACTIONS(289),
        [anon_sym_LPAREN] = ACTIONS(197),
        [anon_sym_PLUS] = ACTIONS(199),
        [anon_sym_LBRACK] = ACTIONS(201),
        [anon_sym_RBRACK] = ACTIONS(291),
        [sym_comment] = ACTIONS(69),
    },
    [95] = {
        [sym__expression] = STATE(102),
        [sym_binary_operator] = STATE(34),
        [sym_subscript] = STATE(34),
        [sym_call] = STATE(34),
        [sym_list] = STATE(34),
        [anon_sym_LBRACK] = ACTIONS(111),
        [anon_sym_RBRACK] = ACTIONS(293),
        [sym_number] = ACTIONS(113),
        [sym_identifier] = ACTIONS(113),
        [sym_comment] = ACTIONS(69),
    },
    [96] = {
        [anon_sym_COMMA] = ACTIONS(295),
        [anon_sym_COLON] = ACTIONS(295),
        [anon_sym_in] = ACTIONS(295),
        [anon_sym_as] = ACTIONS(295),
        [anon_sym_LPAREN] = ACTIONS(295),
        [anon_sym_RPAREN] = ACTIONS(295),
        [anon_sym_PLUS] = ACTIONS(295),
        [anon_sym_LBRACK] = ACTIONS(295),
        [anon_sym_RBRACK] = ACTIONS(295),
        [sym_comment] = ACTIONS(69),
    },
    [97] = {
        [anon_sym_COMMA] = ACTIONS(297),
        [anon_sym_RBRACK] = ACTIONS(293),
        [sym_comment] = ACTIONS(69),
    },
    [98] = {
        [sym__expression] = STATE(101),
        [sym_binary_operator] = STATE(34),
        [sym_subscript] = STATE(34),
        [sym_call] = STATE(34),
        [sym_list] = STATE(34),
        [anon_sym_LBRACK] = ACTIONS(111),
        [anon_sym_RBRACK] = ACTIONS(299),
        [sym_number] = ACTIONS(113),
        [sym_identifier] = ACTIONS(113),
        [sym_comment] = ACTIONS(69),
    },
    [99] = {
        [anon_sym_COMMA] = ACTIONS(301),
        [anon_sym_COLON] = ACTIONS(301),
        [anon_sym_in] = ACTIONS(301),
        [anon_sym_as] = ACTIONS(301),
        [anon_sym_LPAREN] = ACTIONS(301),
        [anon_sym_RPAREN] = ACTIONS(301),
        [anon_sym_PLUS] = ACTIONS(301),
        [anon_sym_LBRACK] = ACTIONS(301),
        [anon_sym_RBRACK] = ACTIONS(301),
        [sym_comment] = ACTIONS(69),
    },
    [100] = {
        [anon_sym_COMMA] = ACTIONS(303),
        [anon_sym_COLON] = ACTIONS(303),
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
        [anon_sym_in] = ACTIONS(305),
        [anon_sym_LPAREN] = ACTIONS(197),
        [anon_sym_RPAREN] = ACTIONS(305),
        [anon_sym_PLUS] = ACTIONS(199),
        [anon_sym_LBRACK] = ACTIONS(201),
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
        [anon_sym_COMMA] = ACTIONS(309),
        [anon_sym_LPAREN] = ACTIONS(197),
        [anon_sym_RPAREN] = ACTIONS(309),
        [anon_sym_PLUS] = ACTIONS(199),
        [anon_sym_LBRACK] = ACTIONS(201),
        [sym_comment] = ACTIONS(69),
    },
    [104] = {
        [anon_sym_COMMA] = ACTIONS(235),
        [anon_sym_LPAREN] = ACTIONS(235),
        [anon_sym_PLUS] = ACTIONS(235),
        [anon_sym_LBRACK] = ACTIONS(235),
        [sym_comment] = ACTIONS(69),
        [sym__newline] = ACTIONS(235),
    },
    [105] = {
        [anon_sym_COMMA] = ACTIONS(311),
        [anon_sym_LPAREN] = ACTIONS(197),
        [anon_sym_RPAREN] = ACTIONS(313),
        [anon_sym_PLUS] = ACTIONS(199),
        [anon_sym_LBRACK] = ACTIONS(201),
        [sym_comment] = ACTIONS(69),
    },
    [106] = {
        [anon_sym_COMMA] = ACTIONS(311),
        [anon_sym_RPAREN] = ACTIONS(313),
        [sym_comment] = ACTIONS(69),
    },
    [107] = {
        [aux_sym_call_repeat2] = STATE(126),
        [anon_sym_COMMA] = ACTIONS(315),
        [anon_sym_RPAREN] = ACTIONS(313),
        [sym_comment] = ACTIONS(69),
    },
    [108] = {
        [anon_sym_RPAREN] = ACTIONS(313),
        [sym_comment] = ACTIONS(69),
    },
    [109] = {
        [sym__expression] = STATE(110),
        [sym_binary_operator] = STATE(34),
        [sym_subscript] = STATE(34),
        [sym_call] = STATE(34),
        [sym_keyword_argument] = STATE(111),
        [sym_list_splat_argument] = STATE(112),
        [sym_dictionary_splat_argument] = STATE(113),
        [sym_list] = STATE(34),
        [anon_sym_STAR] = ACTIONS(183),
        [anon_sym_LBRACK] = ACTIONS(111),
        [anon_sym_STAR_STAR] = ACTIONS(185),
        [sym_number] = ACTIONS(113),
        [sym_identifier] = ACTIONS(187),
        [sym_comment] = ACTIONS(69),
    },
    [110] = {
        [anon_sym_COMMA] = ACTIONS(317),
        [anon_sym_LPAREN] = ACTIONS(197),
        [anon_sym_RPAREN] = ACTIONS(319),
        [anon_sym_PLUS] = ACTIONS(199),
        [anon_sym_LBRACK] = ACTIONS(201),
        [sym_comment] = ACTIONS(69),
    },
    [111] = {
        [anon_sym_COMMA] = ACTIONS(317),
        [anon_sym_RPAREN] = ACTIONS(319),
        [sym_comment] = ACTIONS(69),
    },
    [112] = {
        [aux_sym_call_repeat2] = STATE(116),
        [anon_sym_COMMA] = ACTIONS(321),
        [anon_sym_RPAREN] = ACTIONS(319),
        [sym_comment] = ACTIONS(69),
    },
    [113] = {
        [anon_sym_RPAREN] = ACTIONS(319),
        [sym_comment] = ACTIONS(69),
    },
    [114] = {
        [anon_sym_COMMA] = ACTIONS(251),
        [anon_sym_COLON] = ACTIONS(251),
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
    [115] = {
        [sym__expression] = STATE(79),
        [sym_binary_operator] = STATE(34),
        [sym_subscript] = STATE(34),
        [sym_call] = STATE(34),
        [sym_keyword_argument] = STATE(80),
        [sym_dictionary_splat_argument] = STATE(121),
        [sym_list] = STATE(34),
        [anon_sym_LBRACK] = ACTIONS(111),
        [anon_sym_STAR_STAR] = ACTIONS(185),
        [sym_number] = ACTIONS(113),
        [sym_identifier] = ACTIONS(187),
        [sym_comment] = ACTIONS(69),
    },
    [116] = {
        [anon_sym_COMMA] = ACTIONS(323),
        [anon_sym_RPAREN] = ACTIONS(325),
        [sym_comment] = ACTIONS(69),
    },
    [117] = {
        [sym__expression] = STATE(75),
        [sym_binary_operator] = STATE(34),
        [sym_subscript] = STATE(34),
        [sym_call] = STATE(34),
        [sym_keyword_argument] = STATE(76),
        [sym_dictionary_splat_argument] = STATE(119),
        [sym_list] = STATE(34),
        [anon_sym_LBRACK] = ACTIONS(111),
        [anon_sym_STAR_STAR] = ACTIONS(185),
        [sym_number] = ACTIONS(113),
        [sym_identifier] = ACTIONS(187),
        [sym_comment] = ACTIONS(69),
    },
    [118] = {
        [anon_sym_COMMA] = ACTIONS(257),
        [anon_sym_COLON] = ACTIONS(257),
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
    [119] = {
        [anon_sym_RPAREN] = ACTIONS(327),
        [sym_comment] = ACTIONS(69),
    },
    [120] = {
        [anon_sym_COMMA] = ACTIONS(263),
        [anon_sym_COLON] = ACTIONS(263),
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
    [121] = {
        [anon_sym_RPAREN] = ACTIONS(329),
        [sym_comment] = ACTIONS(69),
    },
    [122] = {
        [anon_sym_COMMA] = ACTIONS(269),
        [anon_sym_COLON] = ACTIONS(269),
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
    [123] = {
        [anon_sym_RPAREN] = ACTIONS(325),
        [anon_sym_STAR] = ACTIONS(271),
        [anon_sym_LBRACK] = ACTIONS(273),
        [anon_sym_STAR_STAR] = ACTIONS(273),
        [sym_number] = ACTIONS(271),
        [sym_identifier] = ACTIONS(271),
        [sym_comment] = ACTIONS(69),
    },
    [124] = {
        [anon_sym_COMMA] = ACTIONS(275),
        [anon_sym_COLON] = ACTIONS(275),
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
    [125] = {
        [sym__expression] = STATE(79),
        [sym_binary_operator] = STATE(34),
        [sym_subscript] = STATE(34),
        [sym_call] = STATE(34),
        [sym_keyword_argument] = STATE(80),
        [sym_dictionary_splat_argument] = STATE(128),
        [sym_list] = STATE(34),
        [anon_sym_LBRACK] = ACTIONS(111),
        [anon_sym_STAR_STAR] = ACTIONS(185),
        [sym_number] = ACTIONS(113),
        [sym_identifier] = ACTIONS(187),
        [sym_comment] = ACTIONS(69),
    },
    [126] = {
        [anon_sym_COMMA] = ACTIONS(331),
        [anon_sym_RPAREN] = ACTIONS(319),
        [sym_comment] = ACTIONS(69),
    },
    [127] = {
        [sym__expression] = STATE(75),
        [sym_binary_operator] = STATE(34),
        [sym_subscript] = STATE(34),
        [sym_call] = STATE(34),
        [sym_keyword_argument] = STATE(76),
        [sym_dictionary_splat_argument] = STATE(121),
        [sym_list] = STATE(34),
        [anon_sym_LBRACK] = ACTIONS(111),
        [anon_sym_STAR_STAR] = ACTIONS(185),
        [sym_number] = ACTIONS(113),
        [sym_identifier] = ACTIONS(187),
        [sym_comment] = ACTIONS(69),
    },
    [128] = {
        [anon_sym_RPAREN] = ACTIONS(325),
        [sym_comment] = ACTIONS(69),
    },
    [129] = {
        [anon_sym_RPAREN] = ACTIONS(319),
        [anon_sym_STAR] = ACTIONS(279),
        [anon_sym_LBRACK] = ACTIONS(281),
        [anon_sym_STAR_STAR] = ACTIONS(281),
        [sym_number] = ACTIONS(279),
        [sym_identifier] = ACTIONS(279),
        [sym_comment] = ACTIONS(69),
    },
    [130] = {
        [ts_builtin_sym_end] = ACTIONS(333),
        [anon_sym_SEMI] = ACTIONS(333),
        [anon_sym_print] = ACTIONS(335),
        [anon_sym_return] = ACTIONS(335),
        [anon_sym_del] = ACTIONS(335),
        [sym_pass_statement] = ACTIONS(335),
        [sym_break_statement] = ACTIONS(335),
        [sym_continue_statement] = ACTIONS(335),
        [anon_sym_if] = ACTIONS(335),
        [anon_sym_for] = ACTIONS(335),
        [anon_sym_while] = ACTIONS(335),
        [anon_sym_try] = ACTIONS(335),
        [anon_sym_with] = ACTIONS(335),
        [anon_sym_def] = ACTIONS(335),
        [anon_sym_class] = ACTIONS(335),
        [anon_sym_AT] = ACTIONS(333),
        [anon_sym_LBRACK] = ACTIONS(333),
        [sym_number] = ACTIONS(335),
        [sym_identifier] = ACTIONS(337),
        [sym_comment] = ACTIONS(69),
        [sym__newline] = ACTIONS(333),
    },
    [131] = {
        [anon_sym_COMMA] = ACTIONS(287),
        [anon_sym_COLON] = ACTIONS(287),
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
    [132] = {
        [aux_sym_print_statement_repeat1] = STATE(135),
        [anon_sym_COMMA] = ACTIONS(339),
        [anon_sym_LPAREN] = ACTIONS(197),
        [anon_sym_PLUS] = ACTIONS(199),
        [anon_sym_LBRACK] = ACTIONS(201),
        [anon_sym_RBRACK] = ACTIONS(341),
        [sym_comment] = ACTIONS(69),
    },
    [133] = {
        [sym__expression] = STATE(102),
        [sym_binary_operator] = STATE(34),
        [sym_subscript] = STATE(34),
        [sym_call] = STATE(34),
        [sym_list] = STATE(34),
        [anon_sym_LBRACK] = ACTIONS(111),
        [anon_sym_RBRACK] = ACTIONS(343),
        [sym_number] = ACTIONS(113),
        [sym_identifier] = ACTIONS(113),
        [sym_comment] = ACTIONS(69),
    },
    [134] = {
        [anon_sym_COMMA] = ACTIONS(295),
        [anon_sym_COLON] = ACTIONS(295),
        [anon_sym_in] = ACTIONS(295),
        [anon_sym_as] = ACTIONS(295),
        [anon_sym_LPAREN] = ACTIONS(295),
        [anon_sym_RPAREN] = ACTIONS(295),
        [anon_sym_PLUS] = ACTIONS(295),
        [anon_sym_LBRACK] = ACTIONS(295),
        [anon_sym_RBRACK] = ACTIONS(295),
        [sym_comment] = ACTIONS(69),
        [sym__newline] = ACTIONS(295),
    },
    [135] = {
        [anon_sym_COMMA] = ACTIONS(345),
        [anon_sym_RBRACK] = ACTIONS(343),
        [sym_comment] = ACTIONS(69),
    },
    [136] = {
        [sym__expression] = STATE(101),
        [sym_binary_operator] = STATE(34),
        [sym_subscript] = STATE(34),
        [sym_call] = STATE(34),
        [sym_list] = STATE(34),
        [anon_sym_LBRACK] = ACTIONS(111),
        [anon_sym_RBRACK] = ACTIONS(347),
        [sym_number] = ACTIONS(113),
        [sym_identifier] = ACTIONS(113),
        [sym_comment] = ACTIONS(69),
    },
    [137] = {
        [anon_sym_COMMA] = ACTIONS(301),
        [anon_sym_COLON] = ACTIONS(301),
        [anon_sym_in] = ACTIONS(301),
        [anon_sym_as] = ACTIONS(301),
        [anon_sym_LPAREN] = ACTIONS(301),
        [anon_sym_RPAREN] = ACTIONS(301),
        [anon_sym_PLUS] = ACTIONS(301),
        [anon_sym_LBRACK] = ACTIONS(301),
        [anon_sym_RBRACK] = ACTIONS(301),
        [sym_comment] = ACTIONS(69),
        [sym__newline] = ACTIONS(301),
    },
    [138] = {
        [anon_sym_COMMA] = ACTIONS(303),
        [anon_sym_COLON] = ACTIONS(303),
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
    [139] = {
        [aux_sym_dotted_name_repeat1] = STATE(152),
        [anon_sym_LPAREN] = ACTIONS(349),
        [anon_sym_DOT] = ACTIONS(351),
        [sym_comment] = ACTIONS(69),
        [sym__newline] = ACTIONS(349),
    },
    [140] = {
        [sym_arguments] = STATE(143),
        [anon_sym_LPAREN] = ACTIONS(353),
        [sym_comment] = ACTIONS(69),
        [sym__newline] = ACTIONS(355),
    },
    [141] = {
        [sym__expression] = STATE(145),
        [sym_binary_operator] = STATE(34),
        [sym_subscript] = STATE(34),
        [sym_call] = STATE(34),
        [sym_list] = STATE(34),
        [anon_sym_LBRACK] = ACTIONS(111),
        [sym_number] = ACTIONS(113),
        [sym_identifier] = ACTIONS(113),
        [sym_comment] = ACTIONS(69),
    },
    [142] = {
        [anon_sym_def] = ACTIONS(357),
        [anon_sym_class] = ACTIONS(357),
        [anon_sym_AT] = ACTIONS(357),
        [sym_comment] = ACTIONS(69),
    },
    [143] = {
        [sym_comment] = ACTIONS(69),
        [sym__newline] = ACTIONS(359),
    },
    [144] = {
        [anon_sym_def] = ACTIONS(361),
        [anon_sym_class] = ACTIONS(361),
        [anon_sym_AT] = ACTIONS(361),
        [sym_comment] = ACTIONS(69),
    },
    [145] = {
        [aux_sym_print_statement_repeat1] = STATE(148),
        [anon_sym_COMMA] = ACTIONS(363),
        [anon_sym_LPAREN] = ACTIONS(197),
        [anon_sym_RPAREN] = ACTIONS(365),
        [anon_sym_PLUS] = ACTIONS(199),
        [anon_sym_LBRACK] = ACTIONS(201),
        [sym_comment] = ACTIONS(69),
    },
    [146] = {
        [sym__expression] = STATE(102),
        [sym_binary_operator] = STATE(34),
        [sym_subscript] = STATE(34),
        [sym_call] = STATE(34),
        [sym_list] = STATE(34),
        [anon_sym_LBRACK] = ACTIONS(111),
        [sym_number] = ACTIONS(113),
        [sym_identifier] = ACTIONS(113),
        [sym_comment] = ACTIONS(69),
    },
    [147] = {
        [sym_comment] = ACTIONS(69),
        [sym__newline] = ACTIONS(367),
    },
    [148] = {
        [anon_sym_COMMA] = ACTIONS(369),
        [anon_sym_RPAREN] = ACTIONS(371),
        [sym_comment] = ACTIONS(69),
    },
    [149] = {
        [sym__expression] = STATE(101),
        [sym_binary_operator] = STATE(34),
        [sym_subscript] = STATE(34),
        [sym_call] = STATE(34),
        [sym_list] = STATE(34),
        [anon_sym_LBRACK] = ACTIONS(111),
        [sym_number] = ACTIONS(113),
        [sym_identifier] = ACTIONS(113),
        [sym_comment] = ACTIONS(69),
    },
    [150] = {
        [sym_comment] = ACTIONS(69),
        [sym__newline] = ACTIONS(373),
    },
    [151] = {
        [sym_identifier] = ACTIONS(375),
        [sym_comment] = ACTIONS(69),
    },
    [152] = {
        [anon_sym_LPAREN] = ACTIONS(377),
        [anon_sym_DOT] = ACTIONS(379),
        [sym_comment] = ACTIONS(69),
        [sym__newline] = ACTIONS(377),
    },
    [153] = {
        [sym_identifier] = ACTIONS(381),
        [sym_comment] = ACTIONS(69),
    },
    [154] = {
        [anon_sym_LPAREN] = ACTIONS(383),
        [anon_sym_DOT] = ACTIONS(383),
        [sym_comment] = ACTIONS(69),
        [sym__newline] = ACTIONS(383),
    },
    [155] = {
        [anon_sym_LPAREN] = ACTIONS(385),
        [anon_sym_DOT] = ACTIONS(385),
        [sym_comment] = ACTIONS(69),
        [sym__newline] = ACTIONS(385),
    },
    [156] = {
        [anon_sym_COLON] = ACTIONS(387),
        [anon_sym_LPAREN] = ACTIONS(389),
        [sym_comment] = ACTIONS(69),
    },
    [157] = {
        [sym__simple_statement] = STATE(165),
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
        [sym__indent] = ACTIONS(391),
    },
    [158] = {
        [sym_expression_list] = STATE(159),
        [sym__expression] = STATE(160),
        [sym_binary_operator] = STATE(34),
        [sym_subscript] = STATE(34),
        [sym_call] = STATE(34),
        [sym_list] = STATE(34),
        [anon_sym_LBRACK] = ACTIONS(111),
        [sym_number] = ACTIONS(113),
        [sym_identifier] = ACTIONS(113),
        [sym_comment] = ACTIONS(69),
    },
    [159] = {
        [anon_sym_RPAREN] = ACTIONS(393),
        [sym_comment] = ACTIONS(69),
    },
    [160] = {
        [aux_sym_print_statement_repeat1] = STATE(161),
        [anon_sym_COMMA] = ACTIONS(363),
        [anon_sym_COLON] = ACTIONS(395),
        [anon_sym_in] = ACTIONS(395),
        [anon_sym_LPAREN] = ACTIONS(197),
        [anon_sym_RPAREN] = ACTIONS(395),
        [anon_sym_PLUS] = ACTIONS(199),
        [anon_sym_LBRACK] = ACTIONS(201),
        [sym_comment] = ACTIONS(69),
    },
    [161] = {
        [anon_sym_COMMA] = ACTIONS(369),
        [anon_sym_COLON] = ACTIONS(397),
        [anon_sym_in] = ACTIONS(397),
        [anon_sym_RPAREN] = ACTIONS(397),
        [sym_comment] = ACTIONS(69),
    },
    [162] = {
        [anon_sym_COLON] = ACTIONS(399),
        [sym_comment] = ACTIONS(69),
    },
    [163] = {
        [sym__simple_statement] = STATE(165),
        [sym_print_statement] = STATE(5),
        [sym_expression_statement] = STATE(5),
        [sym_return_statement] = STATE(5),
        [sym_delete_statement] = STATE(5),
        [sym__suite] = STATE(166),
        [sym__expression] = STATE(22),
        [sym_binary_operator] = STATE(15),
        [sym_subscript] = STATE(15),
        [sym_call] = STATE(15),
        [sym_list] = STATE(15),
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
        [sym__indent] = ACTIONS(391),
    },
    [164] = {
        [sym__statement] = STATE(175),
        [sym__simple_statement] = STATE(176),
        [sym_print_statement] = STATE(5),
        [sym_expression_statement] = STATE(5),
        [sym_return_statement] = STATE(5),
        [sym_delete_statement] = STATE(5),
        [sym__compound_statement] = STATE(177),
        [sym_if_statement] = STATE(178),
        [sym_for_statement] = STATE(178),
        [sym_while_statement] = STATE(178),
        [sym_try_statement] = STATE(178),
        [sym_with_statement] = STATE(178),
        [sym_function_definition] = STATE(178),
        [sym_class_definition] = STATE(178),
        [sym_decorated_definition] = STATE(178),
        [sym_decorator] = STATE(21),
        [sym__expression] = STATE(22),
        [sym_binary_operator] = STATE(15),
        [sym_subscript] = STATE(15),
        [sym_call] = STATE(15),
        [sym_list] = STATE(15),
        [aux_sym_module_repeat1] = STATE(179),
        [aux_sym_decorated_definition_repeat1] = STATE(180),
        [anon_sym_print] = ACTIONS(79),
        [anon_sym_return] = ACTIONS(81),
        [anon_sym_del] = ACTIONS(83),
        [sym_pass_statement] = ACTIONS(85),
        [sym_break_statement] = ACTIONS(85),
        [sym_continue_statement] = ACTIONS(85),
        [anon_sym_if] = ACTIONS(401),
        [anon_sym_for] = ACTIONS(403),
        [anon_sym_while] = ACTIONS(405),
        [anon_sym_try] = ACTIONS(407),
        [anon_sym_with] = ACTIONS(409),
        [anon_sym_def] = ACTIONS(411),
        [anon_sym_class] = ACTIONS(413),
        [anon_sym_AT] = ACTIONS(101),
        [anon_sym_LBRACK] = ACTIONS(103),
        [sym_number] = ACTIONS(105),
        [sym_identifier] = ACTIONS(107),
        [sym_comment] = ACTIONS(69),
        [sym__dedent] = ACTIONS(415),
    },
    [165] = {
        [sym_comment] = ACTIONS(69),
        [sym__newline] = ACTIONS(415),
    },
    [166] = {
        [ts_builtin_sym_end] = ACTIONS(417),
        [anon_sym_SEMI] = ACTIONS(417),
        [anon_sym_print] = ACTIONS(419),
        [anon_sym_return] = ACTIONS(419),
        [anon_sym_del] = ACTIONS(419),
        [sym_pass_statement] = ACTIONS(419),
        [sym_break_statement] = ACTIONS(419),
        [sym_continue_statement] = ACTIONS(419),
        [anon_sym_if] = ACTIONS(419),
        [anon_sym_for] = ACTIONS(419),
        [anon_sym_while] = ACTIONS(419),
        [anon_sym_try] = ACTIONS(419),
        [anon_sym_with] = ACTIONS(419),
        [anon_sym_def] = ACTIONS(419),
        [anon_sym_class] = ACTIONS(419),
        [anon_sym_AT] = ACTIONS(417),
        [anon_sym_LBRACK] = ACTIONS(417),
        [sym_number] = ACTIONS(419),
        [sym_identifier] = ACTIONS(421),
        [sym_comment] = ACTIONS(69),
        [sym__newline] = ACTIONS(417),
    },
    [167] = {
        [ts_builtin_sym_end] = ACTIONS(423),
        [anon_sym_SEMI] = ACTIONS(423),
        [anon_sym_print] = ACTIONS(425),
        [anon_sym_return] = ACTIONS(425),
        [anon_sym_del] = ACTIONS(425),
        [sym_pass_statement] = ACTIONS(425),
        [sym_break_statement] = ACTIONS(425),
        [sym_continue_statement] = ACTIONS(425),
        [anon_sym_if] = ACTIONS(425),
        [anon_sym_elif] = ACTIONS(425),
        [anon_sym_else] = ACTIONS(425),
        [anon_sym_for] = ACTIONS(425),
        [anon_sym_while] = ACTIONS(425),
        [anon_sym_try] = ACTIONS(425),
        [anon_sym_except] = ACTIONS(425),
        [anon_sym_finally] = ACTIONS(425),
        [anon_sym_with] = ACTIONS(425),
        [anon_sym_def] = ACTIONS(425),
        [anon_sym_class] = ACTIONS(425),
        [anon_sym_AT] = ACTIONS(423),
        [anon_sym_LBRACK] = ACTIONS(423),
        [sym_number] = ACTIONS(425),
        [sym_identifier] = ACTIONS(427),
        [sym_comment] = ACTIONS(69),
        [sym__newline] = ACTIONS(423),
    },
    [168] = {
        [sym__expression] = STATE(281),
        [sym_binary_operator] = STATE(34),
        [sym_subscript] = STATE(34),
        [sym_call] = STATE(34),
        [sym_list] = STATE(34),
        [anon_sym_LBRACK] = ACTIONS(111),
        [sym_number] = ACTIONS(113),
        [sym_identifier] = ACTIONS(113),
        [sym_comment] = ACTIONS(69),
    },
    [169] = {
        [sym_expression_list] = STATE(275),
        [sym__expression] = STATE(160),
        [sym_binary_operator] = STATE(34),
        [sym_subscript] = STATE(34),
        [sym_call] = STATE(34),
        [sym_list] = STATE(34),
        [anon_sym_LBRACK] = ACTIONS(111),
        [sym_number] = ACTIONS(113),
        [sym_identifier] = ACTIONS(113),
        [sym_comment] = ACTIONS(69),
    },
    [170] = {
        [sym__expression] = STATE(271),
        [sym_binary_operator] = STATE(34),
        [sym_subscript] = STATE(34),
        [sym_call] = STATE(34),
        [sym_list] = STATE(34),
        [anon_sym_LBRACK] = ACTIONS(111),
        [sym_number] = ACTIONS(113),
        [sym_identifier] = ACTIONS(113),
        [sym_comment] = ACTIONS(69),
    },
    [171] = {
        [anon_sym_COLON] = ACTIONS(429),
        [sym_comment] = ACTIONS(69),
    },
    [172] = {
        [sym_with_item] = STATE(230),
        [sym__expression] = STATE(231),
        [sym_binary_operator] = STATE(34),
        [sym_subscript] = STATE(34),
        [sym_call] = STATE(34),
        [sym_list] = STATE(34),
        [anon_sym_LBRACK] = ACTIONS(111),
        [sym_number] = ACTIONS(113),
        [sym_identifier] = ACTIONS(113),
        [sym_comment] = ACTIONS(69),
    },
    [173] = {
        [sym_identifier] = ACTIONS(431),
        [sym_comment] = ACTIONS(69),
    },
    [174] = {
        [sym_identifier] = ACTIONS(433),
        [sym_comment] = ACTIONS(69),
    },
    [175] = {
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
    [176] = {
        [sym_comment] = ACTIONS(69),
        [sym__newline] = ACTIONS(435),
    },
    [177] = {
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
    [178] = {
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
    [179] = {
        [sym__statement] = STATE(183),
        [sym__simple_statement] = STATE(176),
        [sym_print_statement] = STATE(5),
        [sym_expression_statement] = STATE(5),
        [sym_return_statement] = STATE(5),
        [sym_delete_statement] = STATE(5),
        [sym__compound_statement] = STATE(177),
        [sym_if_statement] = STATE(178),
        [sym_for_statement] = STATE(178),
        [sym_while_statement] = STATE(178),
        [sym_try_statement] = STATE(178),
        [sym_with_statement] = STATE(178),
        [sym_function_definition] = STATE(178),
        [sym_class_definition] = STATE(178),
        [sym_decorated_definition] = STATE(178),
        [sym_decorator] = STATE(21),
        [sym__expression] = STATE(22),
        [sym_binary_operator] = STATE(15),
        [sym_subscript] = STATE(15),
        [sym_call] = STATE(15),
        [sym_list] = STATE(15),
        [aux_sym_decorated_definition_repeat1] = STATE(180),
        [anon_sym_print] = ACTIONS(79),
        [anon_sym_return] = ACTIONS(81),
        [anon_sym_del] = ACTIONS(83),
        [sym_pass_statement] = ACTIONS(85),
        [sym_break_statement] = ACTIONS(85),
        [sym_continue_statement] = ACTIONS(85),
        [anon_sym_if] = ACTIONS(401),
        [anon_sym_for] = ACTIONS(403),
        [anon_sym_while] = ACTIONS(405),
        [anon_sym_try] = ACTIONS(407),
        [anon_sym_with] = ACTIONS(409),
        [anon_sym_def] = ACTIONS(411),
        [anon_sym_class] = ACTIONS(413),
        [anon_sym_AT] = ACTIONS(101),
        [anon_sym_LBRACK] = ACTIONS(103),
        [sym_number] = ACTIONS(105),
        [sym_identifier] = ACTIONS(107),
        [sym_comment] = ACTIONS(69),
        [sym__dedent] = ACTIONS(437),
    },
    [180] = {
        [sym_function_definition] = STATE(181),
        [sym_class_definition] = STATE(181),
        [sym_decorator] = STATE(26),
        [anon_sym_def] = ACTIONS(439),
        [anon_sym_class] = ACTIONS(441),
        [anon_sym_AT] = ACTIONS(101),
        [sym_comment] = ACTIONS(69),
    },
    [181] = {
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
    [182] = {
        [ts_builtin_sym_end] = ACTIONS(443),
        [anon_sym_SEMI] = ACTIONS(443),
        [anon_sym_print] = ACTIONS(445),
        [anon_sym_return] = ACTIONS(445),
        [anon_sym_del] = ACTIONS(445),
        [sym_pass_statement] = ACTIONS(445),
        [sym_break_statement] = ACTIONS(445),
        [sym_continue_statement] = ACTIONS(445),
        [anon_sym_if] = ACTIONS(445),
        [anon_sym_elif] = ACTIONS(445),
        [anon_sym_else] = ACTIONS(445),
        [anon_sym_for] = ACTIONS(445),
        [anon_sym_while] = ACTIONS(445),
        [anon_sym_try] = ACTIONS(445),
        [anon_sym_except] = ACTIONS(445),
        [anon_sym_finally] = ACTIONS(445),
        [anon_sym_with] = ACTIONS(445),
        [anon_sym_def] = ACTIONS(445),
        [anon_sym_class] = ACTIONS(445),
        [anon_sym_AT] = ACTIONS(443),
        [anon_sym_LBRACK] = ACTIONS(443),
        [sym_number] = ACTIONS(445),
        [sym_identifier] = ACTIONS(447),
        [sym_comment] = ACTIONS(69),
        [sym__newline] = ACTIONS(443),
    },
    [183] = {
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
    [184] = {
        [anon_sym_print] = ACTIONS(335),
        [anon_sym_return] = ACTIONS(335),
        [anon_sym_del] = ACTIONS(335),
        [sym_pass_statement] = ACTIONS(335),
        [sym_break_statement] = ACTIONS(335),
        [sym_continue_statement] = ACTIONS(335),
        [anon_sym_if] = ACTIONS(335),
        [anon_sym_for] = ACTIONS(335),
        [anon_sym_while] = ACTIONS(335),
        [anon_sym_try] = ACTIONS(335),
        [anon_sym_with] = ACTIONS(335),
        [anon_sym_def] = ACTIONS(335),
        [anon_sym_class] = ACTIONS(335),
        [anon_sym_AT] = ACTIONS(333),
        [anon_sym_LBRACK] = ACTIONS(333),
        [sym_number] = ACTIONS(335),
        [sym_identifier] = ACTIONS(337),
        [sym_comment] = ACTIONS(69),
        [sym__dedent] = ACTIONS(333),
    },
    [185] = {
        [anon_sym_COLON] = ACTIONS(449),
        [anon_sym_LPAREN] = ACTIONS(451),
        [sym_comment] = ACTIONS(69),
    },
    [186] = {
        [sym__simple_statement] = STATE(192),
        [sym_print_statement] = STATE(5),
        [sym_expression_statement] = STATE(5),
        [sym_return_statement] = STATE(5),
        [sym_delete_statement] = STATE(5),
        [sym__suite] = STATE(197),
        [sym__expression] = STATE(22),
        [sym_binary_operator] = STATE(15),
        [sym_subscript] = STATE(15),
        [sym_call] = STATE(15),
        [sym_list] = STATE(15),
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
        [sym__indent] = ACTIONS(453),
    },
    [187] = {
        [sym_expression_list] = STATE(188),
        [sym__expression] = STATE(160),
        [sym_binary_operator] = STATE(34),
        [sym_subscript] = STATE(34),
        [sym_call] = STATE(34),
        [sym_list] = STATE(34),
        [anon_sym_LBRACK] = ACTIONS(111),
        [sym_number] = ACTIONS(113),
        [sym_identifier] = ACTIONS(113),
        [sym_comment] = ACTIONS(69),
    },
    [188] = {
        [anon_sym_RPAREN] = ACTIONS(455),
        [sym_comment] = ACTIONS(69),
    },
    [189] = {
        [anon_sym_COLON] = ACTIONS(457),
        [sym_comment] = ACTIONS(69),
    },
    [190] = {
        [sym__simple_statement] = STATE(192),
        [sym_print_statement] = STATE(5),
        [sym_expression_statement] = STATE(5),
        [sym_return_statement] = STATE(5),
        [sym_delete_statement] = STATE(5),
        [sym__suite] = STATE(193),
        [sym__expression] = STATE(22),
        [sym_binary_operator] = STATE(15),
        [sym_subscript] = STATE(15),
        [sym_call] = STATE(15),
        [sym_list] = STATE(15),
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
        [sym__indent] = ACTIONS(453),
    },
    [191] = {
        [sym__statement] = STATE(175),
        [sym__simple_statement] = STATE(176),
        [sym_print_statement] = STATE(5),
        [sym_expression_statement] = STATE(5),
        [sym_return_statement] = STATE(5),
        [sym_delete_statement] = STATE(5),
        [sym__compound_statement] = STATE(177),
        [sym_if_statement] = STATE(178),
        [sym_for_statement] = STATE(178),
        [sym_while_statement] = STATE(178),
        [sym_try_statement] = STATE(178),
        [sym_with_statement] = STATE(178),
        [sym_function_definition] = STATE(178),
        [sym_class_definition] = STATE(178),
        [sym_decorated_definition] = STATE(178),
        [sym_decorator] = STATE(21),
        [sym__expression] = STATE(22),
        [sym_binary_operator] = STATE(15),
        [sym_subscript] = STATE(15),
        [sym_call] = STATE(15),
        [sym_list] = STATE(15),
        [aux_sym_module_repeat1] = STATE(195),
        [aux_sym_decorated_definition_repeat1] = STATE(180),
        [anon_sym_print] = ACTIONS(79),
        [anon_sym_return] = ACTIONS(81),
        [anon_sym_del] = ACTIONS(83),
        [sym_pass_statement] = ACTIONS(85),
        [sym_break_statement] = ACTIONS(85),
        [sym_continue_statement] = ACTIONS(85),
        [anon_sym_if] = ACTIONS(401),
        [anon_sym_for] = ACTIONS(403),
        [anon_sym_while] = ACTIONS(405),
        [anon_sym_try] = ACTIONS(407),
        [anon_sym_with] = ACTIONS(409),
        [anon_sym_def] = ACTIONS(411),
        [anon_sym_class] = ACTIONS(413),
        [anon_sym_AT] = ACTIONS(101),
        [anon_sym_LBRACK] = ACTIONS(103),
        [sym_number] = ACTIONS(105),
        [sym_identifier] = ACTIONS(107),
        [sym_comment] = ACTIONS(69),
        [sym__dedent] = ACTIONS(459),
    },
    [192] = {
        [sym_comment] = ACTIONS(69),
        [sym__newline] = ACTIONS(459),
    },
    [193] = {
        [anon_sym_print] = ACTIONS(419),
        [anon_sym_return] = ACTIONS(419),
        [anon_sym_del] = ACTIONS(419),
        [sym_pass_statement] = ACTIONS(419),
        [sym_break_statement] = ACTIONS(419),
        [sym_continue_statement] = ACTIONS(419),
        [anon_sym_if] = ACTIONS(419),
        [anon_sym_for] = ACTIONS(419),
        [anon_sym_while] = ACTIONS(419),
        [anon_sym_try] = ACTIONS(419),
        [anon_sym_with] = ACTIONS(419),
        [anon_sym_def] = ACTIONS(419),
        [anon_sym_class] = ACTIONS(419),
        [anon_sym_AT] = ACTIONS(417),
        [anon_sym_LBRACK] = ACTIONS(417),
        [sym_number] = ACTIONS(419),
        [sym_identifier] = ACTIONS(421),
        [sym_comment] = ACTIONS(69),
        [sym__dedent] = ACTIONS(417),
    },
    [194] = {
        [anon_sym_print] = ACTIONS(425),
        [anon_sym_return] = ACTIONS(425),
        [anon_sym_del] = ACTIONS(425),
        [sym_pass_statement] = ACTIONS(425),
        [sym_break_statement] = ACTIONS(425),
        [sym_continue_statement] = ACTIONS(425),
        [anon_sym_if] = ACTIONS(425),
        [anon_sym_elif] = ACTIONS(425),
        [anon_sym_else] = ACTIONS(425),
        [anon_sym_for] = ACTIONS(425),
        [anon_sym_while] = ACTIONS(425),
        [anon_sym_try] = ACTIONS(425),
        [anon_sym_except] = ACTIONS(425),
        [anon_sym_finally] = ACTIONS(425),
        [anon_sym_with] = ACTIONS(425),
        [anon_sym_def] = ACTIONS(425),
        [anon_sym_class] = ACTIONS(425),
        [anon_sym_AT] = ACTIONS(423),
        [anon_sym_LBRACK] = ACTIONS(423),
        [sym_number] = ACTIONS(425),
        [sym_identifier] = ACTIONS(427),
        [sym_comment] = ACTIONS(69),
        [sym__dedent] = ACTIONS(423),
    },
    [195] = {
        [sym__statement] = STATE(183),
        [sym__simple_statement] = STATE(176),
        [sym_print_statement] = STATE(5),
        [sym_expression_statement] = STATE(5),
        [sym_return_statement] = STATE(5),
        [sym_delete_statement] = STATE(5),
        [sym__compound_statement] = STATE(177),
        [sym_if_statement] = STATE(178),
        [sym_for_statement] = STATE(178),
        [sym_while_statement] = STATE(178),
        [sym_try_statement] = STATE(178),
        [sym_with_statement] = STATE(178),
        [sym_function_definition] = STATE(178),
        [sym_class_definition] = STATE(178),
        [sym_decorated_definition] = STATE(178),
        [sym_decorator] = STATE(21),
        [sym__expression] = STATE(22),
        [sym_binary_operator] = STATE(15),
        [sym_subscript] = STATE(15),
        [sym_call] = STATE(15),
        [sym_list] = STATE(15),
        [aux_sym_decorated_definition_repeat1] = STATE(180),
        [anon_sym_print] = ACTIONS(79),
        [anon_sym_return] = ACTIONS(81),
        [anon_sym_del] = ACTIONS(83),
        [sym_pass_statement] = ACTIONS(85),
        [sym_break_statement] = ACTIONS(85),
        [sym_continue_statement] = ACTIONS(85),
        [anon_sym_if] = ACTIONS(401),
        [anon_sym_for] = ACTIONS(403),
        [anon_sym_while] = ACTIONS(405),
        [anon_sym_try] = ACTIONS(407),
        [anon_sym_with] = ACTIONS(409),
        [anon_sym_def] = ACTIONS(411),
        [anon_sym_class] = ACTIONS(413),
        [anon_sym_AT] = ACTIONS(101),
        [anon_sym_LBRACK] = ACTIONS(103),
        [sym_number] = ACTIONS(105),
        [sym_identifier] = ACTIONS(107),
        [sym_comment] = ACTIONS(69),
        [sym__dedent] = ACTIONS(461),
    },
    [196] = {
        [anon_sym_print] = ACTIONS(445),
        [anon_sym_return] = ACTIONS(445),
        [anon_sym_del] = ACTIONS(445),
        [sym_pass_statement] = ACTIONS(445),
        [sym_break_statement] = ACTIONS(445),
        [sym_continue_statement] = ACTIONS(445),
        [anon_sym_if] = ACTIONS(445),
        [anon_sym_elif] = ACTIONS(445),
        [anon_sym_else] = ACTIONS(445),
        [anon_sym_for] = ACTIONS(445),
        [anon_sym_while] = ACTIONS(445),
        [anon_sym_try] = ACTIONS(445),
        [anon_sym_except] = ACTIONS(445),
        [anon_sym_finally] = ACTIONS(445),
        [anon_sym_with] = ACTIONS(445),
        [anon_sym_def] = ACTIONS(445),
        [anon_sym_class] = ACTIONS(445),
        [anon_sym_AT] = ACTIONS(443),
        [anon_sym_LBRACK] = ACTIONS(443),
        [sym_number] = ACTIONS(445),
        [sym_identifier] = ACTIONS(447),
        [sym_comment] = ACTIONS(69),
        [sym__dedent] = ACTIONS(443),
    },
    [197] = {
        [anon_sym_print] = ACTIONS(463),
        [anon_sym_return] = ACTIONS(463),
        [anon_sym_del] = ACTIONS(463),
        [sym_pass_statement] = ACTIONS(463),
        [sym_break_statement] = ACTIONS(463),
        [sym_continue_statement] = ACTIONS(463),
        [anon_sym_if] = ACTIONS(463),
        [anon_sym_for] = ACTIONS(463),
        [anon_sym_while] = ACTIONS(463),
        [anon_sym_try] = ACTIONS(463),
        [anon_sym_with] = ACTIONS(463),
        [anon_sym_def] = ACTIONS(463),
        [anon_sym_class] = ACTIONS(463),
        [anon_sym_AT] = ACTIONS(465),
        [anon_sym_LBRACK] = ACTIONS(465),
        [sym_number] = ACTIONS(463),
        [sym_identifier] = ACTIONS(467),
        [sym_comment] = ACTIONS(69),
        [sym__dedent] = ACTIONS(465),
    },
    [198] = {
        [sym_parameters] = STATE(200),
        [anon_sym_LPAREN] = ACTIONS(469),
        [sym_comment] = ACTIONS(69),
    },
    [199] = {
        [sym_default_parameter] = STATE(206),
        [sym_list_splat_parameter] = STATE(207),
        [sym_dictionary_splat_parameter] = STATE(208),
        [aux_sym_parameters_repeat1] = STATE(209),
        [anon_sym_RPAREN] = ACTIONS(471),
        [anon_sym_STAR] = ACTIONS(473),
        [sym_identifier] = ACTIONS(475),
        [sym_comment] = ACTIONS(69),
    },
    [200] = {
        [anon_sym_COLON] = ACTIONS(477),
        [sym_comment] = ACTIONS(69),
    },
    [201] = {
        [sym__simple_statement] = STATE(192),
        [sym_print_statement] = STATE(5),
        [sym_expression_statement] = STATE(5),
        [sym_return_statement] = STATE(5),
        [sym_delete_statement] = STATE(5),
        [sym__suite] = STATE(202),
        [sym__expression] = STATE(22),
        [sym_binary_operator] = STATE(15),
        [sym_subscript] = STATE(15),
        [sym_call] = STATE(15),
        [sym_list] = STATE(15),
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
        [sym__indent] = ACTIONS(453),
    },
    [202] = {
        [anon_sym_print] = ACTIONS(479),
        [anon_sym_return] = ACTIONS(479),
        [anon_sym_del] = ACTIONS(479),
        [sym_pass_statement] = ACTIONS(479),
        [sym_break_statement] = ACTIONS(479),
        [sym_continue_statement] = ACTIONS(479),
        [anon_sym_if] = ACTIONS(479),
        [anon_sym_for] = ACTIONS(479),
        [anon_sym_while] = ACTIONS(479),
        [anon_sym_try] = ACTIONS(479),
        [anon_sym_with] = ACTIONS(479),
        [anon_sym_def] = ACTIONS(479),
        [anon_sym_class] = ACTIONS(479),
        [anon_sym_AT] = ACTIONS(481),
        [anon_sym_LBRACK] = ACTIONS(481),
        [sym_number] = ACTIONS(479),
        [sym_identifier] = ACTIONS(483),
        [sym_comment] = ACTIONS(69),
        [sym__dedent] = ACTIONS(481),
    },
    [203] = {
        [anon_sym_COLON] = ACTIONS(485),
        [sym_comment] = ACTIONS(69),
    },
    [204] = {
        [anon_sym_STAR] = ACTIONS(487),
        [sym_identifier] = ACTIONS(489),
        [sym_comment] = ACTIONS(69),
    },
    [205] = {
        [anon_sym_COMMA] = ACTIONS(491),
        [anon_sym_RPAREN] = ACTIONS(493),
        [anon_sym_EQ] = ACTIONS(495),
        [sym_comment] = ACTIONS(69),
    },
    [206] = {
        [anon_sym_COMMA] = ACTIONS(491),
        [anon_sym_RPAREN] = ACTIONS(493),
        [sym_comment] = ACTIONS(69),
    },
    [207] = {
        [anon_sym_COMMA] = ACTIONS(497),
        [anon_sym_RPAREN] = ACTIONS(493),
        [sym_comment] = ACTIONS(69),
    },
    [208] = {
        [anon_sym_RPAREN] = ACTIONS(493),
        [sym_comment] = ACTIONS(69),
    },
    [209] = {
        [sym_default_parameter] = STATE(211),
        [sym_list_splat_parameter] = STATE(212),
        [sym_dictionary_splat_parameter] = STATE(213),
        [anon_sym_STAR] = ACTIONS(473),
        [sym_identifier] = ACTIONS(499),
        [sym_comment] = ACTIONS(69),
    },
    [210] = {
        [anon_sym_COMMA] = ACTIONS(501),
        [anon_sym_RPAREN] = ACTIONS(503),
        [anon_sym_EQ] = ACTIONS(495),
        [sym_comment] = ACTIONS(69),
    },
    [211] = {
        [anon_sym_COMMA] = ACTIONS(501),
        [anon_sym_RPAREN] = ACTIONS(503),
        [sym_comment] = ACTIONS(69),
    },
    [212] = {
        [anon_sym_COMMA] = ACTIONS(505),
        [anon_sym_RPAREN] = ACTIONS(503),
        [sym_comment] = ACTIONS(69),
    },
    [213] = {
        [anon_sym_RPAREN] = ACTIONS(503),
        [sym_comment] = ACTIONS(69),
    },
    [214] = {
        [anon_sym_COLON] = ACTIONS(507),
        [sym_comment] = ACTIONS(69),
    },
    [215] = {
        [sym_dictionary_splat_parameter] = STATE(217),
        [anon_sym_STAR] = ACTIONS(509),
        [sym_comment] = ACTIONS(69),
    },
    [216] = {
        [anon_sym_STAR] = ACTIONS(487),
        [sym_comment] = ACTIONS(69),
    },
    [217] = {
        [anon_sym_RPAREN] = ACTIONS(511),
        [sym_comment] = ACTIONS(69),
    },
    [218] = {
        [anon_sym_COLON] = ACTIONS(513),
        [sym_comment] = ACTIONS(69),
    },
    [219] = {
        [sym_identifier] = ACTIONS(515),
        [sym_comment] = ACTIONS(69),
    },
    [220] = {
        [anon_sym_RPAREN] = ACTIONS(517),
        [sym_comment] = ACTIONS(69),
    },
    [221] = {
        [anon_sym_RPAREN] = ACTIONS(519),
        [anon_sym_STAR] = ACTIONS(521),
        [sym_identifier] = ACTIONS(523),
        [sym_comment] = ACTIONS(69),
    },
    [222] = {
        [anon_sym_COLON] = ACTIONS(525),
        [sym_comment] = ACTIONS(69),
    },
    [223] = {
        [sym__expression] = STATE(224),
        [sym_binary_operator] = STATE(34),
        [sym_subscript] = STATE(34),
        [sym_call] = STATE(34),
        [sym_list] = STATE(34),
        [anon_sym_LBRACK] = ACTIONS(111),
        [sym_number] = ACTIONS(113),
        [sym_identifier] = ACTIONS(113),
        [sym_comment] = ACTIONS(69),
    },
    [224] = {
        [anon_sym_COMMA] = ACTIONS(527),
        [anon_sym_LPAREN] = ACTIONS(197),
        [anon_sym_RPAREN] = ACTIONS(527),
        [anon_sym_PLUS] = ACTIONS(199),
        [anon_sym_LBRACK] = ACTIONS(201),
        [sym_comment] = ACTIONS(69),
    },
    [225] = {
        [anon_sym_COLON] = ACTIONS(529),
        [sym_comment] = ACTIONS(69),
    },
    [226] = {
        [sym_dictionary_splat_parameter] = STATE(227),
        [anon_sym_STAR] = ACTIONS(509),
        [sym_comment] = ACTIONS(69),
    },
    [227] = {
        [anon_sym_RPAREN] = ACTIONS(519),
        [sym_comment] = ACTIONS(69),
    },
    [228] = {
        [anon_sym_RPAREN] = ACTIONS(503),
        [anon_sym_STAR] = ACTIONS(531),
        [sym_identifier] = ACTIONS(533),
        [sym_comment] = ACTIONS(69),
    },
    [229] = {
        [anon_sym_COMMA] = ACTIONS(535),
        [anon_sym_RPAREN] = ACTIONS(535),
        [sym_comment] = ACTIONS(69),
    },
    [230] = {
        [aux_sym_with_statement_repeat1] = STATE(236),
        [anon_sym_COMMA] = ACTIONS(537),
        [anon_sym_COLON] = ACTIONS(539),
        [sym_comment] = ACTIONS(69),
    },
    [231] = {
        [anon_sym_COMMA] = ACTIONS(541),
        [anon_sym_COLON] = ACTIONS(541),
        [anon_sym_as] = ACTIONS(543),
        [anon_sym_LPAREN] = ACTIONS(197),
        [anon_sym_PLUS] = ACTIONS(199),
        [anon_sym_LBRACK] = ACTIONS(201),
        [sym_comment] = ACTIONS(69),
    },
    [232] = {
        [sym__expression] = STATE(233),
        [sym_binary_operator] = STATE(34),
        [sym_subscript] = STATE(34),
        [sym_call] = STATE(34),
        [sym_list] = STATE(34),
        [anon_sym_LBRACK] = ACTIONS(111),
        [sym_number] = ACTIONS(113),
        [sym_identifier] = ACTIONS(113),
        [sym_comment] = ACTIONS(69),
    },
    [233] = {
        [anon_sym_COMMA] = ACTIONS(545),
        [anon_sym_COLON] = ACTIONS(545),
        [anon_sym_LPAREN] = ACTIONS(197),
        [anon_sym_PLUS] = ACTIONS(199),
        [anon_sym_LBRACK] = ACTIONS(201),
        [sym_comment] = ACTIONS(69),
    },
    [234] = {
        [sym_with_item] = STATE(242),
        [sym__expression] = STATE(231),
        [sym_binary_operator] = STATE(34),
        [sym_subscript] = STATE(34),
        [sym_call] = STATE(34),
        [sym_list] = STATE(34),
        [anon_sym_LBRACK] = ACTIONS(111),
        [sym_number] = ACTIONS(113),
        [sym_identifier] = ACTIONS(113),
        [sym_comment] = ACTIONS(69),
    },
    [235] = {
        [sym__simple_statement] = STATE(192),
        [sym_print_statement] = STATE(5),
        [sym_expression_statement] = STATE(5),
        [sym_return_statement] = STATE(5),
        [sym_delete_statement] = STATE(5),
        [sym__suite] = STATE(241),
        [sym__expression] = STATE(22),
        [sym_binary_operator] = STATE(15),
        [sym_subscript] = STATE(15),
        [sym_call] = STATE(15),
        [sym_list] = STATE(15),
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
        [sym__indent] = ACTIONS(453),
    },
    [236] = {
        [anon_sym_COMMA] = ACTIONS(547),
        [anon_sym_COLON] = ACTIONS(549),
        [sym_comment] = ACTIONS(69),
    },
    [237] = {
        [sym_with_item] = STATE(240),
        [sym__expression] = STATE(231),
        [sym_binary_operator] = STATE(34),
        [sym_subscript] = STATE(34),
        [sym_call] = STATE(34),
        [sym_list] = STATE(34),
        [anon_sym_LBRACK] = ACTIONS(111),
        [sym_number] = ACTIONS(113),
        [sym_identifier] = ACTIONS(113),
        [sym_comment] = ACTIONS(69),
    },
    [238] = {
        [sym__simple_statement] = STATE(192),
        [sym_print_statement] = STATE(5),
        [sym_expression_statement] = STATE(5),
        [sym_return_statement] = STATE(5),
        [sym_delete_statement] = STATE(5),
        [sym__suite] = STATE(239),
        [sym__expression] = STATE(22),
        [sym_binary_operator] = STATE(15),
        [sym_subscript] = STATE(15),
        [sym_call] = STATE(15),
        [sym_list] = STATE(15),
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
        [sym__indent] = ACTIONS(453),
    },
    [239] = {
        [anon_sym_print] = ACTIONS(551),
        [anon_sym_return] = ACTIONS(551),
        [anon_sym_del] = ACTIONS(551),
        [sym_pass_statement] = ACTIONS(551),
        [sym_break_statement] = ACTIONS(551),
        [sym_continue_statement] = ACTIONS(551),
        [anon_sym_if] = ACTIONS(551),
        [anon_sym_for] = ACTIONS(551),
        [anon_sym_while] = ACTIONS(551),
        [anon_sym_try] = ACTIONS(551),
        [anon_sym_with] = ACTIONS(551),
        [anon_sym_def] = ACTIONS(551),
        [anon_sym_class] = ACTIONS(551),
        [anon_sym_AT] = ACTIONS(553),
        [anon_sym_LBRACK] = ACTIONS(553),
        [sym_number] = ACTIONS(551),
        [sym_identifier] = ACTIONS(555),
        [sym_comment] = ACTIONS(69),
        [sym__dedent] = ACTIONS(553),
    },
    [240] = {
        [anon_sym_COMMA] = ACTIONS(557),
        [anon_sym_COLON] = ACTIONS(557),
        [sym_comment] = ACTIONS(69),
    },
    [241] = {
        [anon_sym_print] = ACTIONS(559),
        [anon_sym_return] = ACTIONS(559),
        [anon_sym_del] = ACTIONS(559),
        [sym_pass_statement] = ACTIONS(559),
        [sym_break_statement] = ACTIONS(559),
        [sym_continue_statement] = ACTIONS(559),
        [anon_sym_if] = ACTIONS(559),
        [anon_sym_for] = ACTIONS(559),
        [anon_sym_while] = ACTIONS(559),
        [anon_sym_try] = ACTIONS(559),
        [anon_sym_with] = ACTIONS(559),
        [anon_sym_def] = ACTIONS(559),
        [anon_sym_class] = ACTIONS(559),
        [anon_sym_AT] = ACTIONS(561),
        [anon_sym_LBRACK] = ACTIONS(561),
        [sym_number] = ACTIONS(559),
        [sym_identifier] = ACTIONS(563),
        [sym_comment] = ACTIONS(69),
        [sym__dedent] = ACTIONS(561),
    },
    [242] = {
        [anon_sym_COMMA] = ACTIONS(565),
        [anon_sym_COLON] = ACTIONS(565),
        [sym_comment] = ACTIONS(69),
    },
    [243] = {
        [sym__simple_statement] = STATE(245),
        [sym_print_statement] = STATE(5),
        [sym_expression_statement] = STATE(5),
        [sym_return_statement] = STATE(5),
        [sym_delete_statement] = STATE(5),
        [sym__suite] = STATE(246),
        [sym__expression] = STATE(22),
        [sym_binary_operator] = STATE(15),
        [sym_subscript] = STATE(15),
        [sym_call] = STATE(15),
        [sym_list] = STATE(15),
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
        [sym__indent] = ACTIONS(567),
    },
    [244] = {
        [sym__statement] = STATE(175),
        [sym__simple_statement] = STATE(176),
        [sym_print_statement] = STATE(5),
        [sym_expression_statement] = STATE(5),
        [sym_return_statement] = STATE(5),
        [sym_delete_statement] = STATE(5),
        [sym__compound_statement] = STATE(177),
        [sym_if_statement] = STATE(178),
        [sym_for_statement] = STATE(178),
        [sym_while_statement] = STATE(178),
        [sym_try_statement] = STATE(178),
        [sym_with_statement] = STATE(178),
        [sym_function_definition] = STATE(178),
        [sym_class_definition] = STATE(178),
        [sym_decorated_definition] = STATE(178),
        [sym_decorator] = STATE(21),
        [sym__expression] = STATE(22),
        [sym_binary_operator] = STATE(15),
        [sym_subscript] = STATE(15),
        [sym_call] = STATE(15),
        [sym_list] = STATE(15),
        [aux_sym_module_repeat1] = STATE(269),
        [aux_sym_decorated_definition_repeat1] = STATE(180),
        [anon_sym_print] = ACTIONS(79),
        [anon_sym_return] = ACTIONS(81),
        [anon_sym_del] = ACTIONS(83),
        [sym_pass_statement] = ACTIONS(85),
        [sym_break_statement] = ACTIONS(85),
        [sym_continue_statement] = ACTIONS(85),
        [anon_sym_if] = ACTIONS(401),
        [anon_sym_for] = ACTIONS(403),
        [anon_sym_while] = ACTIONS(405),
        [anon_sym_try] = ACTIONS(407),
        [anon_sym_with] = ACTIONS(409),
        [anon_sym_def] = ACTIONS(411),
        [anon_sym_class] = ACTIONS(413),
        [anon_sym_AT] = ACTIONS(101),
        [anon_sym_LBRACK] = ACTIONS(103),
        [sym_number] = ACTIONS(105),
        [sym_identifier] = ACTIONS(107),
        [sym_comment] = ACTIONS(69),
        [sym__dedent] = ACTIONS(569),
    },
    [245] = {
        [sym_comment] = ACTIONS(69),
        [sym__newline] = ACTIONS(569),
    },
    [246] = {
        [sym_except_clause] = STATE(249),
        [sym_finally_clause] = STATE(250),
        [aux_sym_try_statement_repeat1] = STATE(251),
        [anon_sym_except] = ACTIONS(571),
        [anon_sym_finally] = ACTIONS(573),
        [sym_comment] = ACTIONS(69),
    },
    [247] = {
        [sym__expression] = STATE(261),
        [sym_binary_operator] = STATE(34),
        [sym_subscript] = STATE(34),
        [sym_call] = STATE(34),
        [sym_list] = STATE(34),
        [anon_sym_LBRACK] = ACTIONS(111),
        [sym_number] = ACTIONS(113),
        [sym_identifier] = ACTIONS(113),
        [sym_comment] = ACTIONS(69),
    },
    [248] = {
        [anon_sym_COLON] = ACTIONS(575),
        [sym_comment] = ACTIONS(69),
    },
    [249] = {
        [anon_sym_print] = ACTIONS(577),
        [anon_sym_return] = ACTIONS(577),
        [anon_sym_del] = ACTIONS(577),
        [sym_pass_statement] = ACTIONS(577),
        [sym_break_statement] = ACTIONS(577),
        [sym_continue_statement] = ACTIONS(577),
        [anon_sym_if] = ACTIONS(577),
        [anon_sym_else] = ACTIONS(577),
        [anon_sym_for] = ACTIONS(577),
        [anon_sym_while] = ACTIONS(577),
        [anon_sym_try] = ACTIONS(577),
        [anon_sym_except] = ACTIONS(577),
        [anon_sym_finally] = ACTIONS(577),
        [anon_sym_with] = ACTIONS(577),
        [anon_sym_def] = ACTIONS(577),
        [anon_sym_class] = ACTIONS(577),
        [anon_sym_AT] = ACTIONS(579),
        [anon_sym_LBRACK] = ACTIONS(579),
        [sym_number] = ACTIONS(577),
        [sym_identifier] = ACTIONS(581),
        [sym_comment] = ACTIONS(69),
        [sym__dedent] = ACTIONS(579),
    },
    [250] = {
        [anon_sym_print] = ACTIONS(583),
        [anon_sym_return] = ACTIONS(583),
        [anon_sym_del] = ACTIONS(583),
        [sym_pass_statement] = ACTIONS(583),
        [sym_break_statement] = ACTIONS(583),
        [sym_continue_statement] = ACTIONS(583),
        [anon_sym_if] = ACTIONS(583),
        [anon_sym_for] = ACTIONS(583),
        [anon_sym_while] = ACTIONS(583),
        [anon_sym_try] = ACTIONS(583),
        [anon_sym_with] = ACTIONS(583),
        [anon_sym_def] = ACTIONS(583),
        [anon_sym_class] = ACTIONS(583),
        [anon_sym_AT] = ACTIONS(585),
        [anon_sym_LBRACK] = ACTIONS(585),
        [sym_number] = ACTIONS(583),
        [sym_identifier] = ACTIONS(587),
        [sym_comment] = ACTIONS(69),
        [sym__dedent] = ACTIONS(585),
    },
    [251] = {
        [sym_else_clause] = STATE(253),
        [sym_except_clause] = STATE(254),
        [sym_finally_clause] = STATE(255),
        [anon_sym_print] = ACTIONS(583),
        [anon_sym_return] = ACTIONS(583),
        [anon_sym_del] = ACTIONS(583),
        [sym_pass_statement] = ACTIONS(583),
        [sym_break_statement] = ACTIONS(583),
        [sym_continue_statement] = ACTIONS(583),
        [anon_sym_if] = ACTIONS(583),
        [anon_sym_else] = ACTIONS(589),
        [anon_sym_for] = ACTIONS(583),
        [anon_sym_while] = ACTIONS(583),
        [anon_sym_try] = ACTIONS(583),
        [anon_sym_except] = ACTIONS(591),
        [anon_sym_finally] = ACTIONS(593),
        [anon_sym_with] = ACTIONS(583),
        [anon_sym_def] = ACTIONS(583),
        [anon_sym_class] = ACTIONS(583),
        [anon_sym_AT] = ACTIONS(585),
        [anon_sym_LBRACK] = ACTIONS(585),
        [sym_number] = ACTIONS(583),
        [sym_identifier] = ACTIONS(587),
        [sym_comment] = ACTIONS(69),
        [sym__dedent] = ACTIONS(585),
    },
    [252] = {
        [anon_sym_COLON] = ACTIONS(595),
        [sym_comment] = ACTIONS(69),
    },
    [253] = {
        [sym_finally_clause] = STATE(256),
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
        [anon_sym_finally] = ACTIONS(593),
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
    [254] = {
        [anon_sym_print] = ACTIONS(603),
        [anon_sym_return] = ACTIONS(603),
        [anon_sym_del] = ACTIONS(603),
        [sym_pass_statement] = ACTIONS(603),
        [sym_break_statement] = ACTIONS(603),
        [sym_continue_statement] = ACTIONS(603),
        [anon_sym_if] = ACTIONS(603),
        [anon_sym_else] = ACTIONS(603),
        [anon_sym_for] = ACTIONS(603),
        [anon_sym_while] = ACTIONS(603),
        [anon_sym_try] = ACTIONS(603),
        [anon_sym_except] = ACTIONS(603),
        [anon_sym_finally] = ACTIONS(603),
        [anon_sym_with] = ACTIONS(603),
        [anon_sym_def] = ACTIONS(603),
        [anon_sym_class] = ACTIONS(603),
        [anon_sym_AT] = ACTIONS(605),
        [anon_sym_LBRACK] = ACTIONS(605),
        [sym_number] = ACTIONS(603),
        [sym_identifier] = ACTIONS(607),
        [sym_comment] = ACTIONS(69),
        [sym__dedent] = ACTIONS(605),
    },
    [255] = {
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
    [256] = {
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
        [anon_sym_AT] = ACTIONS(611),
        [anon_sym_LBRACK] = ACTIONS(611),
        [sym_number] = ACTIONS(609),
        [sym_identifier] = ACTIONS(613),
        [sym_comment] = ACTIONS(69),
        [sym__dedent] = ACTIONS(611),
    },
    [257] = {
        [sym__simple_statement] = STATE(192),
        [sym_print_statement] = STATE(5),
        [sym_expression_statement] = STATE(5),
        [sym_return_statement] = STATE(5),
        [sym_delete_statement] = STATE(5),
        [sym__suite] = STATE(258),
        [sym__expression] = STATE(22),
        [sym_binary_operator] = STATE(15),
        [sym_subscript] = STATE(15),
        [sym_call] = STATE(15),
        [sym_list] = STATE(15),
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
        [sym__indent] = ACTIONS(453),
    },
    [258] = {
        [anon_sym_print] = ACTIONS(615),
        [anon_sym_return] = ACTIONS(615),
        [anon_sym_del] = ACTIONS(615),
        [sym_pass_statement] = ACTIONS(615),
        [sym_break_statement] = ACTIONS(615),
        [sym_continue_statement] = ACTIONS(615),
        [anon_sym_if] = ACTIONS(615),
        [anon_sym_for] = ACTIONS(615),
        [anon_sym_while] = ACTIONS(615),
        [anon_sym_try] = ACTIONS(615),
        [anon_sym_finally] = ACTIONS(615),
        [anon_sym_with] = ACTIONS(615),
        [anon_sym_def] = ACTIONS(615),
        [anon_sym_class] = ACTIONS(615),
        [anon_sym_AT] = ACTIONS(617),
        [anon_sym_LBRACK] = ACTIONS(617),
        [sym_number] = ACTIONS(615),
        [sym_identifier] = ACTIONS(619),
        [sym_comment] = ACTIONS(69),
        [sym__dedent] = ACTIONS(617),
    },
    [259] = {
        [sym__simple_statement] = STATE(192),
        [sym_print_statement] = STATE(5),
        [sym_expression_statement] = STATE(5),
        [sym_return_statement] = STATE(5),
        [sym_delete_statement] = STATE(5),
        [sym__suite] = STATE(260),
        [sym__expression] = STATE(22),
        [sym_binary_operator] = STATE(15),
        [sym_subscript] = STATE(15),
        [sym_call] = STATE(15),
        [sym_list] = STATE(15),
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
        [sym__indent] = ACTIONS(453),
    },
    [260] = {
        [anon_sym_print] = ACTIONS(621),
        [anon_sym_return] = ACTIONS(621),
        [anon_sym_del] = ACTIONS(621),
        [sym_pass_statement] = ACTIONS(621),
        [sym_break_statement] = ACTIONS(621),
        [sym_continue_statement] = ACTIONS(621),
        [anon_sym_if] = ACTIONS(621),
        [anon_sym_for] = ACTIONS(621),
        [anon_sym_while] = ACTIONS(621),
        [anon_sym_try] = ACTIONS(621),
        [anon_sym_with] = ACTIONS(621),
        [anon_sym_def] = ACTIONS(621),
        [anon_sym_class] = ACTIONS(621),
        [anon_sym_AT] = ACTIONS(623),
        [anon_sym_LBRACK] = ACTIONS(623),
        [sym_number] = ACTIONS(621),
        [sym_identifier] = ACTIONS(625),
        [sym_comment] = ACTIONS(69),
        [sym__dedent] = ACTIONS(623),
    },
    [261] = {
        [anon_sym_COMMA] = ACTIONS(627),
        [anon_sym_COLON] = ACTIONS(629),
        [anon_sym_as] = ACTIONS(627),
        [anon_sym_LPAREN] = ACTIONS(197),
        [anon_sym_PLUS] = ACTIONS(199),
        [anon_sym_LBRACK] = ACTIONS(201),
        [sym_comment] = ACTIONS(69),
    },
    [262] = {
        [sym__expression] = STATE(264),
        [sym_binary_operator] = STATE(34),
        [sym_subscript] = STATE(34),
        [sym_call] = STATE(34),
        [sym_list] = STATE(34),
        [anon_sym_LBRACK] = ACTIONS(111),
        [sym_number] = ACTIONS(113),
        [sym_identifier] = ACTIONS(113),
        [sym_comment] = ACTIONS(69),
    },
    [263] = {
        [sym__simple_statement] = STATE(192),
        [sym_print_statement] = STATE(5),
        [sym_expression_statement] = STATE(5),
        [sym_return_statement] = STATE(5),
        [sym_delete_statement] = STATE(5),
        [sym__suite] = STATE(267),
        [sym__expression] = STATE(22),
        [sym_binary_operator] = STATE(15),
        [sym_subscript] = STATE(15),
        [sym_call] = STATE(15),
        [sym_list] = STATE(15),
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
        [sym__indent] = ACTIONS(453),
    },
    [264] = {
        [anon_sym_COLON] = ACTIONS(631),
        [anon_sym_LPAREN] = ACTIONS(197),
        [anon_sym_PLUS] = ACTIONS(199),
        [anon_sym_LBRACK] = ACTIONS(201),
        [sym_comment] = ACTIONS(69),
    },
    [265] = {
        [sym__simple_statement] = STATE(192),
        [sym_print_statement] = STATE(5),
        [sym_expression_statement] = STATE(5),
        [sym_return_statement] = STATE(5),
        [sym_delete_statement] = STATE(5),
        [sym__suite] = STATE(266),
        [sym__expression] = STATE(22),
        [sym_binary_operator] = STATE(15),
        [sym_subscript] = STATE(15),
        [sym_call] = STATE(15),
        [sym_list] = STATE(15),
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
        [sym__indent] = ACTIONS(453),
    },
    [266] = {
        [anon_sym_print] = ACTIONS(633),
        [anon_sym_return] = ACTIONS(633),
        [anon_sym_del] = ACTIONS(633),
        [sym_pass_statement] = ACTIONS(633),
        [sym_break_statement] = ACTIONS(633),
        [sym_continue_statement] = ACTIONS(633),
        [anon_sym_if] = ACTIONS(633),
        [anon_sym_else] = ACTIONS(633),
        [anon_sym_for] = ACTIONS(633),
        [anon_sym_while] = ACTIONS(633),
        [anon_sym_try] = ACTIONS(633),
        [anon_sym_except] = ACTIONS(633),
        [anon_sym_finally] = ACTIONS(633),
        [anon_sym_with] = ACTIONS(633),
        [anon_sym_def] = ACTIONS(633),
        [anon_sym_class] = ACTIONS(633),
        [anon_sym_AT] = ACTIONS(635),
        [anon_sym_LBRACK] = ACTIONS(635),
        [sym_number] = ACTIONS(633),
        [sym_identifier] = ACTIONS(637),
        [sym_comment] = ACTIONS(69),
        [sym__dedent] = ACTIONS(635),
    },
    [267] = {
        [anon_sym_print] = ACTIONS(639),
        [anon_sym_return] = ACTIONS(639),
        [anon_sym_del] = ACTIONS(639),
        [sym_pass_statement] = ACTIONS(639),
        [sym_break_statement] = ACTIONS(639),
        [sym_continue_statement] = ACTIONS(639),
        [anon_sym_if] = ACTIONS(639),
        [anon_sym_else] = ACTIONS(639),
        [anon_sym_for] = ACTIONS(639),
        [anon_sym_while] = ACTIONS(639),
        [anon_sym_try] = ACTIONS(639),
        [anon_sym_except] = ACTIONS(639),
        [anon_sym_finally] = ACTIONS(639),
        [anon_sym_with] = ACTIONS(639),
        [anon_sym_def] = ACTIONS(639),
        [anon_sym_class] = ACTIONS(639),
        [anon_sym_AT] = ACTIONS(641),
        [anon_sym_LBRACK] = ACTIONS(641),
        [sym_number] = ACTIONS(639),
        [sym_identifier] = ACTIONS(643),
        [sym_comment] = ACTIONS(69),
        [sym__dedent] = ACTIONS(641),
    },
    [268] = {
        [anon_sym_except] = ACTIONS(423),
        [anon_sym_finally] = ACTIONS(423),
        [sym_comment] = ACTIONS(69),
    },
    [269] = {
        [sym__statement] = STATE(183),
        [sym__simple_statement] = STATE(176),
        [sym_print_statement] = STATE(5),
        [sym_expression_statement] = STATE(5),
        [sym_return_statement] = STATE(5),
        [sym_delete_statement] = STATE(5),
        [sym__compound_statement] = STATE(177),
        [sym_if_statement] = STATE(178),
        [sym_for_statement] = STATE(178),
        [sym_while_statement] = STATE(178),
        [sym_try_statement] = STATE(178),
        [sym_with_statement] = STATE(178),
        [sym_function_definition] = STATE(178),
        [sym_class_definition] = STATE(178),
        [sym_decorated_definition] = STATE(178),
        [sym_decorator] = STATE(21),
        [sym__expression] = STATE(22),
        [sym_binary_operator] = STATE(15),
        [sym_subscript] = STATE(15),
        [sym_call] = STATE(15),
        [sym_list] = STATE(15),
        [aux_sym_decorated_definition_repeat1] = STATE(180),
        [anon_sym_print] = ACTIONS(79),
        [anon_sym_return] = ACTIONS(81),
        [anon_sym_del] = ACTIONS(83),
        [sym_pass_statement] = ACTIONS(85),
        [sym_break_statement] = ACTIONS(85),
        [sym_continue_statement] = ACTIONS(85),
        [anon_sym_if] = ACTIONS(401),
        [anon_sym_for] = ACTIONS(403),
        [anon_sym_while] = ACTIONS(405),
        [anon_sym_try] = ACTIONS(407),
        [anon_sym_with] = ACTIONS(409),
        [anon_sym_def] = ACTIONS(411),
        [anon_sym_class] = ACTIONS(413),
        [anon_sym_AT] = ACTIONS(101),
        [anon_sym_LBRACK] = ACTIONS(103),
        [sym_number] = ACTIONS(105),
        [sym_identifier] = ACTIONS(107),
        [sym_comment] = ACTIONS(69),
        [sym__dedent] = ACTIONS(645),
    },
    [270] = {
        [anon_sym_except] = ACTIONS(443),
        [anon_sym_finally] = ACTIONS(443),
        [sym_comment] = ACTIONS(69),
    },
    [271] = {
        [anon_sym_COLON] = ACTIONS(647),
        [anon_sym_LPAREN] = ACTIONS(197),
        [anon_sym_PLUS] = ACTIONS(199),
        [anon_sym_LBRACK] = ACTIONS(201),
        [sym_comment] = ACTIONS(69),
    },
    [272] = {
        [sym__simple_statement] = STATE(192),
        [sym_print_statement] = STATE(5),
        [sym_expression_statement] = STATE(5),
        [sym_return_statement] = STATE(5),
        [sym_delete_statement] = STATE(5),
        [sym__suite] = STATE(273),
        [sym__expression] = STATE(22),
        [sym_binary_operator] = STATE(15),
        [sym_subscript] = STATE(15),
        [sym_call] = STATE(15),
        [sym_list] = STATE(15),
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
        [sym__indent] = ACTIONS(453),
    },
    [273] = {
        [sym_else_clause] = STATE(274),
        [anon_sym_print] = ACTIONS(649),
        [anon_sym_return] = ACTIONS(649),
        [anon_sym_del] = ACTIONS(649),
        [sym_pass_statement] = ACTIONS(649),
        [sym_break_statement] = ACTIONS(649),
        [sym_continue_statement] = ACTIONS(649),
        [anon_sym_if] = ACTIONS(649),
        [anon_sym_else] = ACTIONS(589),
        [anon_sym_for] = ACTIONS(649),
        [anon_sym_while] = ACTIONS(649),
        [anon_sym_try] = ACTIONS(649),
        [anon_sym_with] = ACTIONS(649),
        [anon_sym_def] = ACTIONS(649),
        [anon_sym_class] = ACTIONS(649),
        [anon_sym_AT] = ACTIONS(651),
        [anon_sym_LBRACK] = ACTIONS(651),
        [sym_number] = ACTIONS(649),
        [sym_identifier] = ACTIONS(653),
        [sym_comment] = ACTIONS(69),
        [sym__dedent] = ACTIONS(651),
    },
    [274] = {
        [anon_sym_print] = ACTIONS(655),
        [anon_sym_return] = ACTIONS(655),
        [anon_sym_del] = ACTIONS(655),
        [sym_pass_statement] = ACTIONS(655),
        [sym_break_statement] = ACTIONS(655),
        [sym_continue_statement] = ACTIONS(655),
        [anon_sym_if] = ACTIONS(655),
        [anon_sym_for] = ACTIONS(655),
        [anon_sym_while] = ACTIONS(655),
        [anon_sym_try] = ACTIONS(655),
        [anon_sym_with] = ACTIONS(655),
        [anon_sym_def] = ACTIONS(655),
        [anon_sym_class] = ACTIONS(655),
        [anon_sym_AT] = ACTIONS(657),
        [anon_sym_LBRACK] = ACTIONS(657),
        [sym_number] = ACTIONS(655),
        [sym_identifier] = ACTIONS(659),
        [sym_comment] = ACTIONS(69),
        [sym__dedent] = ACTIONS(657),
    },
    [275] = {
        [anon_sym_in] = ACTIONS(661),
        [sym_comment] = ACTIONS(69),
    },
    [276] = {
        [sym_expression_list] = STATE(277),
        [sym__expression] = STATE(160),
        [sym_binary_operator] = STATE(34),
        [sym_subscript] = STATE(34),
        [sym_call] = STATE(34),
        [sym_list] = STATE(34),
        [anon_sym_LBRACK] = ACTIONS(111),
        [sym_number] = ACTIONS(113),
        [sym_identifier] = ACTIONS(113),
        [sym_comment] = ACTIONS(69),
    },
    [277] = {
        [anon_sym_COLON] = ACTIONS(663),
        [sym_comment] = ACTIONS(69),
    },
    [278] = {
        [sym__simple_statement] = STATE(192),
        [sym_print_statement] = STATE(5),
        [sym_expression_statement] = STATE(5),
        [sym_return_statement] = STATE(5),
        [sym_delete_statement] = STATE(5),
        [sym__suite] = STATE(279),
        [sym__expression] = STATE(22),
        [sym_binary_operator] = STATE(15),
        [sym_subscript] = STATE(15),
        [sym_call] = STATE(15),
        [sym_list] = STATE(15),
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
        [sym__indent] = ACTIONS(453),
    },
    [279] = {
        [sym_else_clause] = STATE(280),
        [anon_sym_print] = ACTIONS(665),
        [anon_sym_return] = ACTIONS(665),
        [anon_sym_del] = ACTIONS(665),
        [sym_pass_statement] = ACTIONS(665),
        [sym_break_statement] = ACTIONS(665),
        [sym_continue_statement] = ACTIONS(665),
        [anon_sym_if] = ACTIONS(665),
        [anon_sym_else] = ACTIONS(589),
        [anon_sym_for] = ACTIONS(665),
        [anon_sym_while] = ACTIONS(665),
        [anon_sym_try] = ACTIONS(665),
        [anon_sym_with] = ACTIONS(665),
        [anon_sym_def] = ACTIONS(665),
        [anon_sym_class] = ACTIONS(665),
        [anon_sym_AT] = ACTIONS(667),
        [anon_sym_LBRACK] = ACTIONS(667),
        [sym_number] = ACTIONS(665),
        [sym_identifier] = ACTIONS(669),
        [sym_comment] = ACTIONS(69),
        [sym__dedent] = ACTIONS(667),
    },
    [280] = {
        [anon_sym_print] = ACTIONS(671),
        [anon_sym_return] = ACTIONS(671),
        [anon_sym_del] = ACTIONS(671),
        [sym_pass_statement] = ACTIONS(671),
        [sym_break_statement] = ACTIONS(671),
        [sym_continue_statement] = ACTIONS(671),
        [anon_sym_if] = ACTIONS(671),
        [anon_sym_for] = ACTIONS(671),
        [anon_sym_while] = ACTIONS(671),
        [anon_sym_try] = ACTIONS(671),
        [anon_sym_with] = ACTIONS(671),
        [anon_sym_def] = ACTIONS(671),
        [anon_sym_class] = ACTIONS(671),
        [anon_sym_AT] = ACTIONS(673),
        [anon_sym_LBRACK] = ACTIONS(673),
        [sym_number] = ACTIONS(671),
        [sym_identifier] = ACTIONS(675),
        [sym_comment] = ACTIONS(69),
        [sym__dedent] = ACTIONS(673),
    },
    [281] = {
        [anon_sym_COLON] = ACTIONS(677),
        [anon_sym_LPAREN] = ACTIONS(197),
        [anon_sym_PLUS] = ACTIONS(199),
        [anon_sym_LBRACK] = ACTIONS(201),
        [sym_comment] = ACTIONS(69),
    },
    [282] = {
        [sym__simple_statement] = STATE(192),
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
        [sym__indent] = ACTIONS(453),
    },
    [283] = {
        [sym_elif_clause] = STATE(285),
        [sym_else_clause] = STATE(286),
        [aux_sym_if_statement_repeat1] = STATE(287),
        [anon_sym_print] = ACTIONS(679),
        [anon_sym_return] = ACTIONS(679),
        [anon_sym_del] = ACTIONS(679),
        [sym_pass_statement] = ACTIONS(679),
        [sym_break_statement] = ACTIONS(679),
        [sym_continue_statement] = ACTIONS(679),
        [anon_sym_if] = ACTIONS(679),
        [anon_sym_elif] = ACTIONS(681),
        [anon_sym_else] = ACTIONS(589),
        [anon_sym_for] = ACTIONS(679),
        [anon_sym_while] = ACTIONS(679),
        [anon_sym_try] = ACTIONS(679),
        [anon_sym_with] = ACTIONS(679),
        [anon_sym_def] = ACTIONS(679),
        [anon_sym_class] = ACTIONS(679),
        [anon_sym_AT] = ACTIONS(683),
        [anon_sym_LBRACK] = ACTIONS(683),
        [sym_number] = ACTIONS(679),
        [sym_identifier] = ACTIONS(685),
        [sym_comment] = ACTIONS(69),
        [sym__dedent] = ACTIONS(683),
    },
    [284] = {
        [sym__expression] = STATE(290),
        [sym_binary_operator] = STATE(34),
        [sym_subscript] = STATE(34),
        [sym_call] = STATE(34),
        [sym_list] = STATE(34),
        [anon_sym_LBRACK] = ACTIONS(111),
        [sym_number] = ACTIONS(113),
        [sym_identifier] = ACTIONS(113),
        [sym_comment] = ACTIONS(69),
    },
    [285] = {
        [anon_sym_print] = ACTIONS(687),
        [anon_sym_return] = ACTIONS(687),
        [anon_sym_del] = ACTIONS(687),
        [sym_pass_statement] = ACTIONS(687),
        [sym_break_statement] = ACTIONS(687),
        [sym_continue_statement] = ACTIONS(687),
        [anon_sym_if] = ACTIONS(687),
        [anon_sym_elif] = ACTIONS(687),
        [anon_sym_else] = ACTIONS(687),
        [anon_sym_for] = ACTIONS(687),
        [anon_sym_while] = ACTIONS(687),
        [anon_sym_try] = ACTIONS(687),
        [anon_sym_with] = ACTIONS(687),
        [anon_sym_def] = ACTIONS(687),
        [anon_sym_class] = ACTIONS(687),
        [anon_sym_AT] = ACTIONS(689),
        [anon_sym_LBRACK] = ACTIONS(689),
        [sym_number] = ACTIONS(687),
        [sym_identifier] = ACTIONS(691),
        [sym_comment] = ACTIONS(69),
        [sym__dedent] = ACTIONS(689),
    },
    [286] = {
        [anon_sym_print] = ACTIONS(693),
        [anon_sym_return] = ACTIONS(693),
        [anon_sym_del] = ACTIONS(693),
        [sym_pass_statement] = ACTIONS(693),
        [sym_break_statement] = ACTIONS(693),
        [sym_continue_statement] = ACTIONS(693),
        [anon_sym_if] = ACTIONS(693),
        [anon_sym_for] = ACTIONS(693),
        [anon_sym_while] = ACTIONS(693),
        [anon_sym_try] = ACTIONS(693),
        [anon_sym_with] = ACTIONS(693),
        [anon_sym_def] = ACTIONS(693),
        [anon_sym_class] = ACTIONS(693),
        [anon_sym_AT] = ACTIONS(695),
        [anon_sym_LBRACK] = ACTIONS(695),
        [sym_number] = ACTIONS(693),
        [sym_identifier] = ACTIONS(697),
        [sym_comment] = ACTIONS(69),
        [sym__dedent] = ACTIONS(695),
    },
    [287] = {
        [sym_elif_clause] = STATE(288),
        [sym_else_clause] = STATE(289),
        [anon_sym_print] = ACTIONS(693),
        [anon_sym_return] = ACTIONS(693),
        [anon_sym_del] = ACTIONS(693),
        [sym_pass_statement] = ACTIONS(693),
        [sym_break_statement] = ACTIONS(693),
        [sym_continue_statement] = ACTIONS(693),
        [anon_sym_if] = ACTIONS(693),
        [anon_sym_elif] = ACTIONS(681),
        [anon_sym_else] = ACTIONS(589),
        [anon_sym_for] = ACTIONS(693),
        [anon_sym_while] = ACTIONS(693),
        [anon_sym_try] = ACTIONS(693),
        [anon_sym_with] = ACTIONS(693),
        [anon_sym_def] = ACTIONS(693),
        [anon_sym_class] = ACTIONS(693),
        [anon_sym_AT] = ACTIONS(695),
        [anon_sym_LBRACK] = ACTIONS(695),
        [sym_number] = ACTIONS(693),
        [sym_identifier] = ACTIONS(697),
        [sym_comment] = ACTIONS(69),
        [sym__dedent] = ACTIONS(695),
    },
    [288] = {
        [anon_sym_print] = ACTIONS(699),
        [anon_sym_return] = ACTIONS(699),
        [anon_sym_del] = ACTIONS(699),
        [sym_pass_statement] = ACTIONS(699),
        [sym_break_statement] = ACTIONS(699),
        [sym_continue_statement] = ACTIONS(699),
        [anon_sym_if] = ACTIONS(699),
        [anon_sym_elif] = ACTIONS(699),
        [anon_sym_else] = ACTIONS(699),
        [anon_sym_for] = ACTIONS(699),
        [anon_sym_while] = ACTIONS(699),
        [anon_sym_try] = ACTIONS(699),
        [anon_sym_with] = ACTIONS(699),
        [anon_sym_def] = ACTIONS(699),
        [anon_sym_class] = ACTIONS(699),
        [anon_sym_AT] = ACTIONS(701),
        [anon_sym_LBRACK] = ACTIONS(701),
        [sym_number] = ACTIONS(699),
        [sym_identifier] = ACTIONS(703),
        [sym_comment] = ACTIONS(69),
        [sym__dedent] = ACTIONS(701),
    },
    [289] = {
        [anon_sym_print] = ACTIONS(705),
        [anon_sym_return] = ACTIONS(705),
        [anon_sym_del] = ACTIONS(705),
        [sym_pass_statement] = ACTIONS(705),
        [sym_break_statement] = ACTIONS(705),
        [sym_continue_statement] = ACTIONS(705),
        [anon_sym_if] = ACTIONS(705),
        [anon_sym_for] = ACTIONS(705),
        [anon_sym_while] = ACTIONS(705),
        [anon_sym_try] = ACTIONS(705),
        [anon_sym_with] = ACTIONS(705),
        [anon_sym_def] = ACTIONS(705),
        [anon_sym_class] = ACTIONS(705),
        [anon_sym_AT] = ACTIONS(707),
        [anon_sym_LBRACK] = ACTIONS(707),
        [sym_number] = ACTIONS(705),
        [sym_identifier] = ACTIONS(709),
        [sym_comment] = ACTIONS(69),
        [sym__dedent] = ACTIONS(707),
    },
    [290] = {
        [anon_sym_COLON] = ACTIONS(711),
        [anon_sym_LPAREN] = ACTIONS(197),
        [anon_sym_PLUS] = ACTIONS(199),
        [anon_sym_LBRACK] = ACTIONS(201),
        [sym_comment] = ACTIONS(69),
    },
    [291] = {
        [sym__simple_statement] = STATE(192),
        [sym_print_statement] = STATE(5),
        [sym_expression_statement] = STATE(5),
        [sym_return_statement] = STATE(5),
        [sym_delete_statement] = STATE(5),
        [sym__suite] = STATE(292),
        [sym__expression] = STATE(22),
        [sym_binary_operator] = STATE(15),
        [sym_subscript] = STATE(15),
        [sym_call] = STATE(15),
        [sym_list] = STATE(15),
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
        [sym__indent] = ACTIONS(453),
    },
    [292] = {
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
    [293] = {
        [ts_builtin_sym_end] = ACTIONS(465),
        [anon_sym_SEMI] = ACTIONS(465),
        [anon_sym_print] = ACTIONS(463),
        [anon_sym_return] = ACTIONS(463),
        [anon_sym_del] = ACTIONS(463),
        [sym_pass_statement] = ACTIONS(463),
        [sym_break_statement] = ACTIONS(463),
        [sym_continue_statement] = ACTIONS(463),
        [anon_sym_if] = ACTIONS(463),
        [anon_sym_for] = ACTIONS(463),
        [anon_sym_while] = ACTIONS(463),
        [anon_sym_try] = ACTIONS(463),
        [anon_sym_with] = ACTIONS(463),
        [anon_sym_def] = ACTIONS(463),
        [anon_sym_class] = ACTIONS(463),
        [anon_sym_AT] = ACTIONS(465),
        [anon_sym_LBRACK] = ACTIONS(465),
        [sym_number] = ACTIONS(463),
        [sym_identifier] = ACTIONS(467),
        [sym_comment] = ACTIONS(69),
        [sym__newline] = ACTIONS(465),
    },
    [294] = {
        [sym_parameters] = STATE(295),
        [anon_sym_LPAREN] = ACTIONS(469),
        [sym_comment] = ACTIONS(69),
    },
    [295] = {
        [anon_sym_COLON] = ACTIONS(719),
        [sym_comment] = ACTIONS(69),
    },
    [296] = {
        [sym__simple_statement] = STATE(165),
        [sym_print_statement] = STATE(5),
        [sym_expression_statement] = STATE(5),
        [sym_return_statement] = STATE(5),
        [sym_delete_statement] = STATE(5),
        [sym__suite] = STATE(297),
        [sym__expression] = STATE(22),
        [sym_binary_operator] = STATE(15),
        [sym_subscript] = STATE(15),
        [sym_call] = STATE(15),
        [sym_list] = STATE(15),
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
        [sym__indent] = ACTIONS(391),
    },
    [297] = {
        [ts_builtin_sym_end] = ACTIONS(481),
        [anon_sym_SEMI] = ACTIONS(481),
        [anon_sym_print] = ACTIONS(479),
        [anon_sym_return] = ACTIONS(479),
        [anon_sym_del] = ACTIONS(479),
        [sym_pass_statement] = ACTIONS(479),
        [sym_break_statement] = ACTIONS(479),
        [sym_continue_statement] = ACTIONS(479),
        [anon_sym_if] = ACTIONS(479),
        [anon_sym_for] = ACTIONS(479),
        [anon_sym_while] = ACTIONS(479),
        [anon_sym_try] = ACTIONS(479),
        [anon_sym_with] = ACTIONS(479),
        [anon_sym_def] = ACTIONS(479),
        [anon_sym_class] = ACTIONS(479),
        [anon_sym_AT] = ACTIONS(481),
        [anon_sym_LBRACK] = ACTIONS(481),
        [sym_number] = ACTIONS(479),
        [sym_identifier] = ACTIONS(483),
        [sym_comment] = ACTIONS(69),
        [sym__newline] = ACTIONS(481),
    },
    [298] = {
        [aux_sym_with_statement_repeat1] = STATE(300),
        [anon_sym_COMMA] = ACTIONS(537),
        [anon_sym_COLON] = ACTIONS(721),
        [sym_comment] = ACTIONS(69),
    },
    [299] = {
        [sym__simple_statement] = STATE(165),
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
        [sym__indent] = ACTIONS(391),
    },
    [300] = {
        [anon_sym_COMMA] = ACTIONS(547),
        [anon_sym_COLON] = ACTIONS(723),
        [sym_comment] = ACTIONS(69),
    },
    [301] = {
        [sym__simple_statement] = STATE(165),
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
        [sym__indent] = ACTIONS(391),
    },
    [302] = {
        [ts_builtin_sym_end] = ACTIONS(553),
        [anon_sym_SEMI] = ACTIONS(553),
        [anon_sym_print] = ACTIONS(551),
        [anon_sym_return] = ACTIONS(551),
        [anon_sym_del] = ACTIONS(551),
        [sym_pass_statement] = ACTIONS(551),
        [sym_break_statement] = ACTIONS(551),
        [sym_continue_statement] = ACTIONS(551),
        [anon_sym_if] = ACTIONS(551),
        [anon_sym_for] = ACTIONS(551),
        [anon_sym_while] = ACTIONS(551),
        [anon_sym_try] = ACTIONS(551),
        [anon_sym_with] = ACTIONS(551),
        [anon_sym_def] = ACTIONS(551),
        [anon_sym_class] = ACTIONS(551),
        [anon_sym_AT] = ACTIONS(553),
        [anon_sym_LBRACK] = ACTIONS(553),
        [sym_number] = ACTIONS(551),
        [sym_identifier] = ACTIONS(555),
        [sym_comment] = ACTIONS(69),
        [sym__newline] = ACTIONS(553),
    },
    [303] = {
        [ts_builtin_sym_end] = ACTIONS(561),
        [anon_sym_SEMI] = ACTIONS(561),
        [anon_sym_print] = ACTIONS(559),
        [anon_sym_return] = ACTIONS(559),
        [anon_sym_del] = ACTIONS(559),
        [sym_pass_statement] = ACTIONS(559),
        [sym_break_statement] = ACTIONS(559),
        [sym_continue_statement] = ACTIONS(559),
        [anon_sym_if] = ACTIONS(559),
        [anon_sym_for] = ACTIONS(559),
        [anon_sym_while] = ACTIONS(559),
        [anon_sym_try] = ACTIONS(559),
        [anon_sym_with] = ACTIONS(559),
        [anon_sym_def] = ACTIONS(559),
        [anon_sym_class] = ACTIONS(559),
        [anon_sym_AT] = ACTIONS(561),
        [anon_sym_LBRACK] = ACTIONS(561),
        [sym_number] = ACTIONS(559),
        [sym_identifier] = ACTIONS(563),
        [sym_comment] = ACTIONS(69),
        [sym__newline] = ACTIONS(561),
    },
    [304] = {
        [sym__simple_statement] = STATE(245),
        [sym_print_statement] = STATE(5),
        [sym_expression_statement] = STATE(5),
        [sym_return_statement] = STATE(5),
        [sym_delete_statement] = STATE(5),
        [sym__suite] = STATE(305),
        [sym__expression] = STATE(22),
        [sym_binary_operator] = STATE(15),
        [sym_subscript] = STATE(15),
        [sym_call] = STATE(15),
        [sym_list] = STATE(15),
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
        [sym__indent] = ACTIONS(567),
    },
    [305] = {
        [sym_except_clause] = STATE(308),
        [sym_finally_clause] = STATE(309),
        [aux_sym_try_statement_repeat1] = STATE(310),
        [anon_sym_except] = ACTIONS(725),
        [anon_sym_finally] = ACTIONS(727),
        [sym_comment] = ACTIONS(69),
    },
    [306] = {
        [sym__expression] = STATE(320),
        [sym_binary_operator] = STATE(34),
        [sym_subscript] = STATE(34),
        [sym_call] = STATE(34),
        [sym_list] = STATE(34),
        [anon_sym_LBRACK] = ACTIONS(111),
        [sym_number] = ACTIONS(113),
        [sym_identifier] = ACTIONS(113),
        [sym_comment] = ACTIONS(69),
    },
    [307] = {
        [anon_sym_COLON] = ACTIONS(729),
        [sym_comment] = ACTIONS(69),
    },
    [308] = {
        [ts_builtin_sym_end] = ACTIONS(579),
        [anon_sym_SEMI] = ACTIONS(579),
        [anon_sym_print] = ACTIONS(577),
        [anon_sym_return] = ACTIONS(577),
        [anon_sym_del] = ACTIONS(577),
        [sym_pass_statement] = ACTIONS(577),
        [sym_break_statement] = ACTIONS(577),
        [sym_continue_statement] = ACTIONS(577),
        [anon_sym_if] = ACTIONS(577),
        [anon_sym_else] = ACTIONS(577),
        [anon_sym_for] = ACTIONS(577),
        [anon_sym_while] = ACTIONS(577),
        [anon_sym_try] = ACTIONS(577),
        [anon_sym_except] = ACTIONS(577),
        [anon_sym_finally] = ACTIONS(577),
        [anon_sym_with] = ACTIONS(577),
        [anon_sym_def] = ACTIONS(577),
        [anon_sym_class] = ACTIONS(577),
        [anon_sym_AT] = ACTIONS(579),
        [anon_sym_LBRACK] = ACTIONS(579),
        [sym_number] = ACTIONS(577),
        [sym_identifier] = ACTIONS(581),
        [sym_comment] = ACTIONS(69),
        [sym__newline] = ACTIONS(579),
    },
    [309] = {
        [ts_builtin_sym_end] = ACTIONS(585),
        [anon_sym_SEMI] = ACTIONS(585),
        [anon_sym_print] = ACTIONS(583),
        [anon_sym_return] = ACTIONS(583),
        [anon_sym_del] = ACTIONS(583),
        [sym_pass_statement] = ACTIONS(583),
        [sym_break_statement] = ACTIONS(583),
        [sym_continue_statement] = ACTIONS(583),
        [anon_sym_if] = ACTIONS(583),
        [anon_sym_for] = ACTIONS(583),
        [anon_sym_while] = ACTIONS(583),
        [anon_sym_try] = ACTIONS(583),
        [anon_sym_with] = ACTIONS(583),
        [anon_sym_def] = ACTIONS(583),
        [anon_sym_class] = ACTIONS(583),
        [anon_sym_AT] = ACTIONS(585),
        [anon_sym_LBRACK] = ACTIONS(585),
        [sym_number] = ACTIONS(583),
        [sym_identifier] = ACTIONS(587),
        [sym_comment] = ACTIONS(69),
        [sym__newline] = ACTIONS(585),
    },
    [310] = {
        [sym_else_clause] = STATE(312),
        [sym_except_clause] = STATE(313),
        [sym_finally_clause] = STATE(314),
        [ts_builtin_sym_end] = ACTIONS(585),
        [anon_sym_SEMI] = ACTIONS(585),
        [anon_sym_print] = ACTIONS(583),
        [anon_sym_return] = ACTIONS(583),
        [anon_sym_del] = ACTIONS(583),
        [sym_pass_statement] = ACTIONS(583),
        [sym_break_statement] = ACTIONS(583),
        [sym_continue_statement] = ACTIONS(583),
        [anon_sym_if] = ACTIONS(583),
        [anon_sym_else] = ACTIONS(731),
        [anon_sym_for] = ACTIONS(583),
        [anon_sym_while] = ACTIONS(583),
        [anon_sym_try] = ACTIONS(583),
        [anon_sym_except] = ACTIONS(733),
        [anon_sym_finally] = ACTIONS(735),
        [anon_sym_with] = ACTIONS(583),
        [anon_sym_def] = ACTIONS(583),
        [anon_sym_class] = ACTIONS(583),
        [anon_sym_AT] = ACTIONS(585),
        [anon_sym_LBRACK] = ACTIONS(585),
        [sym_number] = ACTIONS(583),
        [sym_identifier] = ACTIONS(587),
        [sym_comment] = ACTIONS(69),
        [sym__newline] = ACTIONS(585),
    },
    [311] = {
        [anon_sym_COLON] = ACTIONS(737),
        [sym_comment] = ACTIONS(69),
    },
    [312] = {
        [sym_finally_clause] = STATE(315),
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
        [anon_sym_finally] = ACTIONS(735),
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
    [313] = {
        [ts_builtin_sym_end] = ACTIONS(605),
        [anon_sym_SEMI] = ACTIONS(605),
        [anon_sym_print] = ACTIONS(603),
        [anon_sym_return] = ACTIONS(603),
        [anon_sym_del] = ACTIONS(603),
        [sym_pass_statement] = ACTIONS(603),
        [sym_break_statement] = ACTIONS(603),
        [sym_continue_statement] = ACTIONS(603),
        [anon_sym_if] = ACTIONS(603),
        [anon_sym_else] = ACTIONS(603),
        [anon_sym_for] = ACTIONS(603),
        [anon_sym_while] = ACTIONS(603),
        [anon_sym_try] = ACTIONS(603),
        [anon_sym_except] = ACTIONS(603),
        [anon_sym_finally] = ACTIONS(603),
        [anon_sym_with] = ACTIONS(603),
        [anon_sym_def] = ACTIONS(603),
        [anon_sym_class] = ACTIONS(603),
        [anon_sym_AT] = ACTIONS(605),
        [anon_sym_LBRACK] = ACTIONS(605),
        [sym_number] = ACTIONS(603),
        [sym_identifier] = ACTIONS(607),
        [sym_comment] = ACTIONS(69),
        [sym__newline] = ACTIONS(605),
    },
    [314] = {
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
    [315] = {
        [ts_builtin_sym_end] = ACTIONS(611),
        [anon_sym_SEMI] = ACTIONS(611),
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
        [anon_sym_AT] = ACTIONS(611),
        [anon_sym_LBRACK] = ACTIONS(611),
        [sym_number] = ACTIONS(609),
        [sym_identifier] = ACTIONS(613),
        [sym_comment] = ACTIONS(69),
        [sym__newline] = ACTIONS(611),
    },
    [316] = {
        [sym__simple_statement] = STATE(165),
        [sym_print_statement] = STATE(5),
        [sym_expression_statement] = STATE(5),
        [sym_return_statement] = STATE(5),
        [sym_delete_statement] = STATE(5),
        [sym__suite] = STATE(317),
        [sym__expression] = STATE(22),
        [sym_binary_operator] = STATE(15),
        [sym_subscript] = STATE(15),
        [sym_call] = STATE(15),
        [sym_list] = STATE(15),
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
        [sym__indent] = ACTIONS(391),
    },
    [317] = {
        [ts_builtin_sym_end] = ACTIONS(617),
        [anon_sym_SEMI] = ACTIONS(617),
        [anon_sym_print] = ACTIONS(615),
        [anon_sym_return] = ACTIONS(615),
        [anon_sym_del] = ACTIONS(615),
        [sym_pass_statement] = ACTIONS(615),
        [sym_break_statement] = ACTIONS(615),
        [sym_continue_statement] = ACTIONS(615),
        [anon_sym_if] = ACTIONS(615),
        [anon_sym_for] = ACTIONS(615),
        [anon_sym_while] = ACTIONS(615),
        [anon_sym_try] = ACTIONS(615),
        [anon_sym_finally] = ACTIONS(615),
        [anon_sym_with] = ACTIONS(615),
        [anon_sym_def] = ACTIONS(615),
        [anon_sym_class] = ACTIONS(615),
        [anon_sym_AT] = ACTIONS(617),
        [anon_sym_LBRACK] = ACTIONS(617),
        [sym_number] = ACTIONS(615),
        [sym_identifier] = ACTIONS(619),
        [sym_comment] = ACTIONS(69),
        [sym__newline] = ACTIONS(617),
    },
    [318] = {
        [sym__simple_statement] = STATE(165),
        [sym_print_statement] = STATE(5),
        [sym_expression_statement] = STATE(5),
        [sym_return_statement] = STATE(5),
        [sym_delete_statement] = STATE(5),
        [sym__suite] = STATE(319),
        [sym__expression] = STATE(22),
        [sym_binary_operator] = STATE(15),
        [sym_subscript] = STATE(15),
        [sym_call] = STATE(15),
        [sym_list] = STATE(15),
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
        [sym__indent] = ACTIONS(391),
    },
    [319] = {
        [ts_builtin_sym_end] = ACTIONS(623),
        [anon_sym_SEMI] = ACTIONS(623),
        [anon_sym_print] = ACTIONS(621),
        [anon_sym_return] = ACTIONS(621),
        [anon_sym_del] = ACTIONS(621),
        [sym_pass_statement] = ACTIONS(621),
        [sym_break_statement] = ACTIONS(621),
        [sym_continue_statement] = ACTIONS(621),
        [anon_sym_if] = ACTIONS(621),
        [anon_sym_for] = ACTIONS(621),
        [anon_sym_while] = ACTIONS(621),
        [anon_sym_try] = ACTIONS(621),
        [anon_sym_with] = ACTIONS(621),
        [anon_sym_def] = ACTIONS(621),
        [anon_sym_class] = ACTIONS(621),
        [anon_sym_AT] = ACTIONS(623),
        [anon_sym_LBRACK] = ACTIONS(623),
        [sym_number] = ACTIONS(621),
        [sym_identifier] = ACTIONS(625),
        [sym_comment] = ACTIONS(69),
        [sym__newline] = ACTIONS(623),
    },
    [320] = {
        [anon_sym_COMMA] = ACTIONS(739),
        [anon_sym_COLON] = ACTIONS(741),
        [anon_sym_as] = ACTIONS(739),
        [anon_sym_LPAREN] = ACTIONS(197),
        [anon_sym_PLUS] = ACTIONS(199),
        [anon_sym_LBRACK] = ACTIONS(201),
        [sym_comment] = ACTIONS(69),
    },
    [321] = {
        [sym__expression] = STATE(323),
        [sym_binary_operator] = STATE(34),
        [sym_subscript] = STATE(34),
        [sym_call] = STATE(34),
        [sym_list] = STATE(34),
        [anon_sym_LBRACK] = ACTIONS(111),
        [sym_number] = ACTIONS(113),
        [sym_identifier] = ACTIONS(113),
        [sym_comment] = ACTIONS(69),
    },
    [322] = {
        [sym__simple_statement] = STATE(165),
        [sym_print_statement] = STATE(5),
        [sym_expression_statement] = STATE(5),
        [sym_return_statement] = STATE(5),
        [sym_delete_statement] = STATE(5),
        [sym__suite] = STATE(326),
        [sym__expression] = STATE(22),
        [sym_binary_operator] = STATE(15),
        [sym_subscript] = STATE(15),
        [sym_call] = STATE(15),
        [sym_list] = STATE(15),
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
        [sym__indent] = ACTIONS(391),
    },
    [323] = {
        [anon_sym_COLON] = ACTIONS(743),
        [anon_sym_LPAREN] = ACTIONS(197),
        [anon_sym_PLUS] = ACTIONS(199),
        [anon_sym_LBRACK] = ACTIONS(201),
        [sym_comment] = ACTIONS(69),
    },
    [324] = {
        [sym__simple_statement] = STATE(165),
        [sym_print_statement] = STATE(5),
        [sym_expression_statement] = STATE(5),
        [sym_return_statement] = STATE(5),
        [sym_delete_statement] = STATE(5),
        [sym__suite] = STATE(325),
        [sym__expression] = STATE(22),
        [sym_binary_operator] = STATE(15),
        [sym_subscript] = STATE(15),
        [sym_call] = STATE(15),
        [sym_list] = STATE(15),
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
        [sym__indent] = ACTIONS(391),
    },
    [325] = {
        [ts_builtin_sym_end] = ACTIONS(635),
        [anon_sym_SEMI] = ACTIONS(635),
        [anon_sym_print] = ACTIONS(633),
        [anon_sym_return] = ACTIONS(633),
        [anon_sym_del] = ACTIONS(633),
        [sym_pass_statement] = ACTIONS(633),
        [sym_break_statement] = ACTIONS(633),
        [sym_continue_statement] = ACTIONS(633),
        [anon_sym_if] = ACTIONS(633),
        [anon_sym_else] = ACTIONS(633),
        [anon_sym_for] = ACTIONS(633),
        [anon_sym_while] = ACTIONS(633),
        [anon_sym_try] = ACTIONS(633),
        [anon_sym_except] = ACTIONS(633),
        [anon_sym_finally] = ACTIONS(633),
        [anon_sym_with] = ACTIONS(633),
        [anon_sym_def] = ACTIONS(633),
        [anon_sym_class] = ACTIONS(633),
        [anon_sym_AT] = ACTIONS(635),
        [anon_sym_LBRACK] = ACTIONS(635),
        [sym_number] = ACTIONS(633),
        [sym_identifier] = ACTIONS(637),
        [sym_comment] = ACTIONS(69),
        [sym__newline] = ACTIONS(635),
    },
    [326] = {
        [ts_builtin_sym_end] = ACTIONS(641),
        [anon_sym_SEMI] = ACTIONS(641),
        [anon_sym_print] = ACTIONS(639),
        [anon_sym_return] = ACTIONS(639),
        [anon_sym_del] = ACTIONS(639),
        [sym_pass_statement] = ACTIONS(639),
        [sym_break_statement] = ACTIONS(639),
        [sym_continue_statement] = ACTIONS(639),
        [anon_sym_if] = ACTIONS(639),
        [anon_sym_else] = ACTIONS(639),
        [anon_sym_for] = ACTIONS(639),
        [anon_sym_while] = ACTIONS(639),
        [anon_sym_try] = ACTIONS(639),
        [anon_sym_except] = ACTIONS(639),
        [anon_sym_finally] = ACTIONS(639),
        [anon_sym_with] = ACTIONS(639),
        [anon_sym_def] = ACTIONS(639),
        [anon_sym_class] = ACTIONS(639),
        [anon_sym_AT] = ACTIONS(641),
        [anon_sym_LBRACK] = ACTIONS(641),
        [sym_number] = ACTIONS(639),
        [sym_identifier] = ACTIONS(643),
        [sym_comment] = ACTIONS(69),
        [sym__newline] = ACTIONS(641),
    },
    [327] = {
        [anon_sym_COLON] = ACTIONS(745),
        [anon_sym_LPAREN] = ACTIONS(197),
        [anon_sym_PLUS] = ACTIONS(199),
        [anon_sym_LBRACK] = ACTIONS(201),
        [sym_comment] = ACTIONS(69),
    },
    [328] = {
        [sym__simple_statement] = STATE(165),
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
        [sym__indent] = ACTIONS(391),
    },
    [329] = {
        [sym_else_clause] = STATE(330),
        [ts_builtin_sym_end] = ACTIONS(651),
        [anon_sym_SEMI] = ACTIONS(651),
        [anon_sym_print] = ACTIONS(649),
        [anon_sym_return] = ACTIONS(649),
        [anon_sym_del] = ACTIONS(649),
        [sym_pass_statement] = ACTIONS(649),
        [sym_break_statement] = ACTIONS(649),
        [sym_continue_statement] = ACTIONS(649),
        [anon_sym_if] = ACTIONS(649),
        [anon_sym_else] = ACTIONS(731),
        [anon_sym_for] = ACTIONS(649),
        [anon_sym_while] = ACTIONS(649),
        [anon_sym_try] = ACTIONS(649),
        [anon_sym_with] = ACTIONS(649),
        [anon_sym_def] = ACTIONS(649),
        [anon_sym_class] = ACTIONS(649),
        [anon_sym_AT] = ACTIONS(651),
        [anon_sym_LBRACK] = ACTIONS(651),
        [sym_number] = ACTIONS(649),
        [sym_identifier] = ACTIONS(653),
        [sym_comment] = ACTIONS(69),
        [sym__newline] = ACTIONS(651),
    },
    [330] = {
        [ts_builtin_sym_end] = ACTIONS(657),
        [anon_sym_SEMI] = ACTIONS(657),
        [anon_sym_print] = ACTIONS(655),
        [anon_sym_return] = ACTIONS(655),
        [anon_sym_del] = ACTIONS(655),
        [sym_pass_statement] = ACTIONS(655),
        [sym_break_statement] = ACTIONS(655),
        [sym_continue_statement] = ACTIONS(655),
        [anon_sym_if] = ACTIONS(655),
        [anon_sym_for] = ACTIONS(655),
        [anon_sym_while] = ACTIONS(655),
        [anon_sym_try] = ACTIONS(655),
        [anon_sym_with] = ACTIONS(655),
        [anon_sym_def] = ACTIONS(655),
        [anon_sym_class] = ACTIONS(655),
        [anon_sym_AT] = ACTIONS(657),
        [anon_sym_LBRACK] = ACTIONS(657),
        [sym_number] = ACTIONS(655),
        [sym_identifier] = ACTIONS(659),
        [sym_comment] = ACTIONS(69),
        [sym__newline] = ACTIONS(657),
    },
    [331] = {
        [anon_sym_in] = ACTIONS(747),
        [sym_comment] = ACTIONS(69),
    },
    [332] = {
        [sym_expression_list] = STATE(333),
        [sym__expression] = STATE(160),
        [sym_binary_operator] = STATE(34),
        [sym_subscript] = STATE(34),
        [sym_call] = STATE(34),
        [sym_list] = STATE(34),
        [anon_sym_LBRACK] = ACTIONS(111),
        [sym_number] = ACTIONS(113),
        [sym_identifier] = ACTIONS(113),
        [sym_comment] = ACTIONS(69),
    },
    [333] = {
        [anon_sym_COLON] = ACTIONS(749),
        [sym_comment] = ACTIONS(69),
    },
    [334] = {
        [sym__simple_statement] = STATE(165),
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
        [sym__indent] = ACTIONS(391),
    },
    [335] = {
        [sym_else_clause] = STATE(336),
        [ts_builtin_sym_end] = ACTIONS(667),
        [anon_sym_SEMI] = ACTIONS(667),
        [anon_sym_print] = ACTIONS(665),
        [anon_sym_return] = ACTIONS(665),
        [anon_sym_del] = ACTIONS(665),
        [sym_pass_statement] = ACTIONS(665),
        [sym_break_statement] = ACTIONS(665),
        [sym_continue_statement] = ACTIONS(665),
        [anon_sym_if] = ACTIONS(665),
        [anon_sym_else] = ACTIONS(731),
        [anon_sym_for] = ACTIONS(665),
        [anon_sym_while] = ACTIONS(665),
        [anon_sym_try] = ACTIONS(665),
        [anon_sym_with] = ACTIONS(665),
        [anon_sym_def] = ACTIONS(665),
        [anon_sym_class] = ACTIONS(665),
        [anon_sym_AT] = ACTIONS(667),
        [anon_sym_LBRACK] = ACTIONS(667),
        [sym_number] = ACTIONS(665),
        [sym_identifier] = ACTIONS(669),
        [sym_comment] = ACTIONS(69),
        [sym__newline] = ACTIONS(667),
    },
    [336] = {
        [ts_builtin_sym_end] = ACTIONS(673),
        [anon_sym_SEMI] = ACTIONS(673),
        [anon_sym_print] = ACTIONS(671),
        [anon_sym_return] = ACTIONS(671),
        [anon_sym_del] = ACTIONS(671),
        [sym_pass_statement] = ACTIONS(671),
        [sym_break_statement] = ACTIONS(671),
        [sym_continue_statement] = ACTIONS(671),
        [anon_sym_if] = ACTIONS(671),
        [anon_sym_for] = ACTIONS(671),
        [anon_sym_while] = ACTIONS(671),
        [anon_sym_try] = ACTIONS(671),
        [anon_sym_with] = ACTIONS(671),
        [anon_sym_def] = ACTIONS(671),
        [anon_sym_class] = ACTIONS(671),
        [anon_sym_AT] = ACTIONS(673),
        [anon_sym_LBRACK] = ACTIONS(673),
        [sym_number] = ACTIONS(671),
        [sym_identifier] = ACTIONS(675),
        [sym_comment] = ACTIONS(69),
        [sym__newline] = ACTIONS(673),
    },
    [337] = {
        [anon_sym_COLON] = ACTIONS(751),
        [anon_sym_LPAREN] = ACTIONS(197),
        [anon_sym_PLUS] = ACTIONS(199),
        [anon_sym_LBRACK] = ACTIONS(201),
        [sym_comment] = ACTIONS(69),
    },
    [338] = {
        [sym__simple_statement] = STATE(165),
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
        [sym__indent] = ACTIONS(391),
    },
    [339] = {
        [sym_elif_clause] = STATE(341),
        [sym_else_clause] = STATE(342),
        [aux_sym_if_statement_repeat1] = STATE(343),
        [ts_builtin_sym_end] = ACTIONS(683),
        [anon_sym_SEMI] = ACTIONS(683),
        [anon_sym_print] = ACTIONS(679),
        [anon_sym_return] = ACTIONS(679),
        [anon_sym_del] = ACTIONS(679),
        [sym_pass_statement] = ACTIONS(679),
        [sym_break_statement] = ACTIONS(679),
        [sym_continue_statement] = ACTIONS(679),
        [anon_sym_if] = ACTIONS(679),
        [anon_sym_elif] = ACTIONS(753),
        [anon_sym_else] = ACTIONS(731),
        [anon_sym_for] = ACTIONS(679),
        [anon_sym_while] = ACTIONS(679),
        [anon_sym_try] = ACTIONS(679),
        [anon_sym_with] = ACTIONS(679),
        [anon_sym_def] = ACTIONS(679),
        [anon_sym_class] = ACTIONS(679),
        [anon_sym_AT] = ACTIONS(683),
        [anon_sym_LBRACK] = ACTIONS(683),
        [sym_number] = ACTIONS(679),
        [sym_identifier] = ACTIONS(685),
        [sym_comment] = ACTIONS(69),
        [sym__newline] = ACTIONS(683),
    },
    [340] = {
        [sym__expression] = STATE(346),
        [sym_binary_operator] = STATE(34),
        [sym_subscript] = STATE(34),
        [sym_call] = STATE(34),
        [sym_list] = STATE(34),
        [anon_sym_LBRACK] = ACTIONS(111),
        [sym_number] = ACTIONS(113),
        [sym_identifier] = ACTIONS(113),
        [sym_comment] = ACTIONS(69),
    },
    [341] = {
        [ts_builtin_sym_end] = ACTIONS(689),
        [anon_sym_SEMI] = ACTIONS(689),
        [anon_sym_print] = ACTIONS(687),
        [anon_sym_return] = ACTIONS(687),
        [anon_sym_del] = ACTIONS(687),
        [sym_pass_statement] = ACTIONS(687),
        [sym_break_statement] = ACTIONS(687),
        [sym_continue_statement] = ACTIONS(687),
        [anon_sym_if] = ACTIONS(687),
        [anon_sym_elif] = ACTIONS(687),
        [anon_sym_else] = ACTIONS(687),
        [anon_sym_for] = ACTIONS(687),
        [anon_sym_while] = ACTIONS(687),
        [anon_sym_try] = ACTIONS(687),
        [anon_sym_with] = ACTIONS(687),
        [anon_sym_def] = ACTIONS(687),
        [anon_sym_class] = ACTIONS(687),
        [anon_sym_AT] = ACTIONS(689),
        [anon_sym_LBRACK] = ACTIONS(689),
        [sym_number] = ACTIONS(687),
        [sym_identifier] = ACTIONS(691),
        [sym_comment] = ACTIONS(69),
        [sym__newline] = ACTIONS(689),
    },
    [342] = {
        [ts_builtin_sym_end] = ACTIONS(695),
        [anon_sym_SEMI] = ACTIONS(695),
        [anon_sym_print] = ACTIONS(693),
        [anon_sym_return] = ACTIONS(693),
        [anon_sym_del] = ACTIONS(693),
        [sym_pass_statement] = ACTIONS(693),
        [sym_break_statement] = ACTIONS(693),
        [sym_continue_statement] = ACTIONS(693),
        [anon_sym_if] = ACTIONS(693),
        [anon_sym_for] = ACTIONS(693),
        [anon_sym_while] = ACTIONS(693),
        [anon_sym_try] = ACTIONS(693),
        [anon_sym_with] = ACTIONS(693),
        [anon_sym_def] = ACTIONS(693),
        [anon_sym_class] = ACTIONS(693),
        [anon_sym_AT] = ACTIONS(695),
        [anon_sym_LBRACK] = ACTIONS(695),
        [sym_number] = ACTIONS(693),
        [sym_identifier] = ACTIONS(697),
        [sym_comment] = ACTIONS(69),
        [sym__newline] = ACTIONS(695),
    },
    [343] = {
        [sym_elif_clause] = STATE(344),
        [sym_else_clause] = STATE(345),
        [ts_builtin_sym_end] = ACTIONS(695),
        [anon_sym_SEMI] = ACTIONS(695),
        [anon_sym_print] = ACTIONS(693),
        [anon_sym_return] = ACTIONS(693),
        [anon_sym_del] = ACTIONS(693),
        [sym_pass_statement] = ACTIONS(693),
        [sym_break_statement] = ACTIONS(693),
        [sym_continue_statement] = ACTIONS(693),
        [anon_sym_if] = ACTIONS(693),
        [anon_sym_elif] = ACTIONS(753),
        [anon_sym_else] = ACTIONS(731),
        [anon_sym_for] = ACTIONS(693),
        [anon_sym_while] = ACTIONS(693),
        [anon_sym_try] = ACTIONS(693),
        [anon_sym_with] = ACTIONS(693),
        [anon_sym_def] = ACTIONS(693),
        [anon_sym_class] = ACTIONS(693),
        [anon_sym_AT] = ACTIONS(695),
        [anon_sym_LBRACK] = ACTIONS(695),
        [sym_number] = ACTIONS(693),
        [sym_identifier] = ACTIONS(697),
        [sym_comment] = ACTIONS(69),
        [sym__newline] = ACTIONS(695),
    },
    [344] = {
        [ts_builtin_sym_end] = ACTIONS(701),
        [anon_sym_SEMI] = ACTIONS(701),
        [anon_sym_print] = ACTIONS(699),
        [anon_sym_return] = ACTIONS(699),
        [anon_sym_del] = ACTIONS(699),
        [sym_pass_statement] = ACTIONS(699),
        [sym_break_statement] = ACTIONS(699),
        [sym_continue_statement] = ACTIONS(699),
        [anon_sym_if] = ACTIONS(699),
        [anon_sym_elif] = ACTIONS(699),
        [anon_sym_else] = ACTIONS(699),
        [anon_sym_for] = ACTIONS(699),
        [anon_sym_while] = ACTIONS(699),
        [anon_sym_try] = ACTIONS(699),
        [anon_sym_with] = ACTIONS(699),
        [anon_sym_def] = ACTIONS(699),
        [anon_sym_class] = ACTIONS(699),
        [anon_sym_AT] = ACTIONS(701),
        [anon_sym_LBRACK] = ACTIONS(701),
        [sym_number] = ACTIONS(699),
        [sym_identifier] = ACTIONS(703),
        [sym_comment] = ACTIONS(69),
        [sym__newline] = ACTIONS(701),
    },
    [345] = {
        [ts_builtin_sym_end] = ACTIONS(707),
        [anon_sym_SEMI] = ACTIONS(707),
        [anon_sym_print] = ACTIONS(705),
        [anon_sym_return] = ACTIONS(705),
        [anon_sym_del] = ACTIONS(705),
        [sym_pass_statement] = ACTIONS(705),
        [sym_break_statement] = ACTIONS(705),
        [sym_continue_statement] = ACTIONS(705),
        [anon_sym_if] = ACTIONS(705),
        [anon_sym_for] = ACTIONS(705),
        [anon_sym_while] = ACTIONS(705),
        [anon_sym_try] = ACTIONS(705),
        [anon_sym_with] = ACTIONS(705),
        [anon_sym_def] = ACTIONS(705),
        [anon_sym_class] = ACTIONS(705),
        [anon_sym_AT] = ACTIONS(707),
        [anon_sym_LBRACK] = ACTIONS(707),
        [sym_number] = ACTIONS(705),
        [sym_identifier] = ACTIONS(709),
        [sym_comment] = ACTIONS(69),
        [sym__newline] = ACTIONS(707),
    },
    [346] = {
        [anon_sym_COLON] = ACTIONS(755),
        [anon_sym_LPAREN] = ACTIONS(197),
        [anon_sym_PLUS] = ACTIONS(199),
        [anon_sym_LBRACK] = ACTIONS(201),
        [sym_comment] = ACTIONS(69),
    },
    [347] = {
        [sym__simple_statement] = STATE(165),
        [sym_print_statement] = STATE(5),
        [sym_expression_statement] = STATE(5),
        [sym_return_statement] = STATE(5),
        [sym_delete_statement] = STATE(5),
        [sym__suite] = STATE(348),
        [sym__expression] = STATE(22),
        [sym_binary_operator] = STATE(15),
        [sym_subscript] = STATE(15),
        [sym_call] = STATE(15),
        [sym_list] = STATE(15),
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
        [sym__indent] = ACTIONS(391),
    },
    [348] = {
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
    [349] = {
        [sym_comment] = ACTIONS(69),
        [sym__newline] = ACTIONS(757),
    },
    [350] = {
        [aux_sym_print_statement_repeat1] = STATE(352),
        [anon_sym_COMMA] = ACTIONS(759),
        [anon_sym_LPAREN] = ACTIONS(151),
        [anon_sym_PLUS] = ACTIONS(153),
        [anon_sym_LBRACK] = ACTIONS(155),
        [sym_comment] = ACTIONS(69),
        [sym__newline] = ACTIONS(395),
    },
    [351] = {
        [sym__expression] = STATE(355),
        [sym_binary_operator] = STATE(15),
        [sym_subscript] = STATE(15),
        [sym_call] = STATE(15),
        [sym_list] = STATE(15),
        [anon_sym_LBRACK] = ACTIONS(103),
        [sym_number] = ACTIONS(105),
        [sym_identifier] = ACTIONS(105),
        [sym_comment] = ACTIONS(69),
    },
    [352] = {
        [anon_sym_COMMA] = ACTIONS(761),
        [sym_comment] = ACTIONS(69),
        [sym__newline] = ACTIONS(397),
    },
    [353] = {
        [sym__expression] = STATE(354),
        [sym_binary_operator] = STATE(15),
        [sym_subscript] = STATE(15),
        [sym_call] = STATE(15),
        [sym_list] = STATE(15),
        [anon_sym_LBRACK] = ACTIONS(103),
        [sym_number] = ACTIONS(105),
        [sym_identifier] = ACTIONS(105),
        [sym_comment] = ACTIONS(69),
    },
    [354] = {
        [anon_sym_COMMA] = ACTIONS(305),
        [anon_sym_LPAREN] = ACTIONS(151),
        [anon_sym_PLUS] = ACTIONS(153),
        [anon_sym_LBRACK] = ACTIONS(155),
        [sym_comment] = ACTIONS(69),
        [sym__newline] = ACTIONS(305),
    },
    [355] = {
        [anon_sym_COMMA] = ACTIONS(307),
        [anon_sym_LPAREN] = ACTIONS(151),
        [anon_sym_PLUS] = ACTIONS(153),
        [anon_sym_LBRACK] = ACTIONS(155),
        [sym_comment] = ACTIONS(69),
        [sym__newline] = ACTIONS(307),
    },
    [356] = {
        [sym_comment] = ACTIONS(69),
        [sym__newline] = ACTIONS(763),
    },
    [357] = {
        [aux_sym_print_statement_repeat1] = STATE(358),
        [anon_sym_COMMA] = ACTIONS(759),
        [anon_sym_LPAREN] = ACTIONS(151),
        [anon_sym_PLUS] = ACTIONS(153),
        [anon_sym_LBRACK] = ACTIONS(155),
        [sym_comment] = ACTIONS(69),
        [sym__newline] = ACTIONS(765),
    },
    [358] = {
        [anon_sym_COMMA] = ACTIONS(761),
        [sym_comment] = ACTIONS(69),
        [sym__newline] = ACTIONS(767),
    },
    [359] = {
        [sym_with_item] = STATE(529),
        [sym_dictionary_splat_parameter] = STATE(470),
        [sym__expression] = STATE(530),
        [sym_binary_operator] = STATE(15),
        [sym_subscript] = STATE(15),
        [sym_call] = STATE(15),
        [sym_keyword_argument] = STATE(531),
        [sym_dictionary_splat_argument] = STATE(532),
        [sym_list] = STATE(15),
        [anon_sym_RPAREN] = ACTIONS(769),
        [anon_sym_STAR] = ACTIONS(771),
        [anon_sym_LBRACK] = ACTIONS(777),
        [anon_sym_DOT_DOT_DOT] = ACTIONS(781),
        [anon_sym_RBRACK] = ACTIONS(783),
        [anon_sym_STAR_STAR] = ACTIONS(785),
        [sym_number] = ACTIONS(789),
        [sym_identifier] = ACTIONS(793),
        [sym_comment] = ACTIONS(69),
    },
    [360] = {
        [sym__expression] = STATE(521),
        [sym_binary_operator] = STATE(34),
        [sym_subscript] = STATE(34),
        [sym_call] = STATE(34),
        [sym_list] = STATE(34),
        [anon_sym_LBRACK] = ACTIONS(111),
        [sym_number] = ACTIONS(113),
        [sym_identifier] = ACTIONS(113),
        [sym_comment] = ACTIONS(69),
    },
    [361] = {
        [sym__simple_statement] = STATE(421),
        [sym_print_statement] = STATE(5),
        [sym_expression_statement] = STATE(5),
        [sym_return_statement] = STATE(5),
        [sym_delete_statement] = STATE(5),
        [sym__suite] = STATE(402),
        [sym__expression] = STATE(22),
        [sym_binary_operator] = STATE(15),
        [sym_subscript] = STATE(15),
        [sym_call] = STATE(15),
        [sym_list] = STATE(15),
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
        [sym__indent] = ACTIONS(799),
    },
    [362] = {
        [sym__expression] = STATE(518),
        [sym_binary_operator] = STATE(34),
        [sym_subscript] = STATE(34),
        [sym_call] = STATE(34),
        [sym_list] = STATE(34),
        [anon_sym_LBRACK] = ACTIONS(111),
        [sym_number] = ACTIONS(113),
        [sym_identifier] = ACTIONS(113),
        [sym_comment] = ACTIONS(69),
    },
    [363] = {
        [anon_sym_COLON] = ACTIONS(801),
        [sym_comment] = ACTIONS(69),
    },
    [364] = {
        [sym_expression_list] = STATE(517),
        [sym__expression] = STATE(160),
        [sym_binary_operator] = STATE(34),
        [sym_subscript] = STATE(34),
        [sym_call] = STATE(34),
        [sym_list] = STATE(34),
        [anon_sym_LBRACK] = ACTIONS(111),
        [sym_number] = ACTIONS(113),
        [sym_identifier] = ACTIONS(113),
        [sym_comment] = ACTIONS(69),
    },
    [365] = {
        [sym_expression_list] = STATE(516),
        [sym__expression] = STATE(160),
        [sym_binary_operator] = STATE(34),
        [sym_subscript] = STATE(34),
        [sym_call] = STATE(34),
        [sym_list] = STATE(34),
        [anon_sym_LBRACK] = ACTIONS(111),
        [sym_number] = ACTIONS(113),
        [sym_identifier] = ACTIONS(113),
        [sym_comment] = ACTIONS(69),
    },
    [366] = {
        [sym__expression] = STATE(512),
        [sym_binary_operator] = STATE(34),
        [sym_subscript] = STATE(34),
        [sym_call] = STATE(34),
        [sym_list] = STATE(34),
        [anon_sym_LBRACK] = ACTIONS(111),
        [sym_number] = ACTIONS(113),
        [sym_identifier] = ACTIONS(113),
        [sym_comment] = ACTIONS(69),
    },
    [367] = {
        [anon_sym_COLON] = ACTIONS(803),
        [sym_comment] = ACTIONS(69),
    },
    [368] = {
        [sym__expression] = STATE(505),
        [sym_binary_operator] = STATE(34),
        [sym_subscript] = STATE(34),
        [sym_call] = STATE(34),
        [sym_list] = STATE(34),
        [anon_sym_LBRACK] = ACTIONS(111),
        [sym_number] = ACTIONS(113),
        [sym_identifier] = ACTIONS(113),
        [sym_comment] = ACTIONS(69),
    },
    [369] = {
        [sym__expression] = STATE(504),
        [sym_binary_operator] = STATE(34),
        [sym_subscript] = STATE(34),
        [sym_call] = STATE(34),
        [sym_list] = STATE(34),
        [anon_sym_LBRACK] = ACTIONS(111),
        [sym_number] = ACTIONS(113),
        [sym_identifier] = ACTIONS(113),
        [sym_comment] = ACTIONS(69),
    },
    [370] = {
        [anon_sym_COLON] = ACTIONS(805),
        [sym_comment] = ACTIONS(69),
    },
    [371] = {
        [sym_with_item] = STATE(501),
        [sym__expression] = STATE(231),
        [sym_binary_operator] = STATE(34),
        [sym_subscript] = STATE(34),
        [sym_call] = STATE(34),
        [sym_list] = STATE(34),
        [anon_sym_LBRACK] = ACTIONS(111),
        [sym_number] = ACTIONS(113),
        [sym_identifier] = ACTIONS(113),
        [sym_comment] = ACTIONS(69),
    },
    [372] = {
        [sym_identifier] = ACTIONS(807),
        [sym_comment] = ACTIONS(69),
    },
    [373] = {
        [sym_default_parameter] = STATE(206),
        [sym_list_splat_parameter] = STATE(207),
        [sym_dictionary_splat_parameter] = STATE(208),
        [sym_expression_list] = STATE(482),
        [sym__expression] = STATE(495),
        [sym_binary_operator] = STATE(34),
        [sym_subscript] = STATE(34),
        [sym_call] = STATE(34),
        [sym_keyword_argument] = STATE(106),
        [sym_list_splat_argument] = STATE(107),
        [sym_dictionary_splat_argument] = STATE(108),
        [sym_list] = STATE(34),
        [aux_sym_parameters_repeat1] = STATE(209),
        [aux_sym_call_repeat1] = STATE(109),
        [anon_sym_RPAREN] = ACTIONS(471),
        [anon_sym_STAR] = ACTIONS(809),
        [anon_sym_LBRACK] = ACTIONS(111),
        [anon_sym_STAR_STAR] = ACTIONS(185),
        [sym_number] = ACTIONS(113),
        [sym_identifier] = ACTIONS(811),
        [sym_comment] = ACTIONS(69),
    },
    [374] = {
        [anon_sym_COMMA] = ACTIONS(813),
        [anon_sym_COLON] = ACTIONS(819),
        [anon_sym_in] = ACTIONS(813),
        [anon_sym_as] = ACTIONS(813),
        [anon_sym_LPAREN] = ACTIONS(813),
        [anon_sym_RPAREN] = ACTIONS(813),
        [anon_sym_PLUS] = ACTIONS(813),
        [anon_sym_LBRACK] = ACTIONS(813),
        [anon_sym_RBRACK] = ACTIONS(813),
        [sym_comment] = ACTIONS(69),
        [sym__newline] = ACTIONS(831),
    },
    [375] = {
        [sym__expression] = STATE(492),
        [sym_binary_operator] = STATE(34),
        [sym_subscript] = STATE(34),
        [sym_call] = STATE(34),
        [sym_list] = STATE(34),
        [anon_sym_LBRACK] = ACTIONS(111),
        [sym_number] = ACTIONS(113),
        [sym_identifier] = ACTIONS(113),
        [sym_comment] = ACTIONS(69),
    },
    [376] = {
        [sym__expression] = STATE(103),
        [sym_binary_operator] = STATE(34),
        [sym_subscript] = STATE(34),
        [sym_call] = STATE(34),
        [sym_list] = STATE(34),
        [anon_sym_STAR] = ACTIONS(487),
        [anon_sym_LBRACK] = ACTIONS(111),
        [sym_number] = ACTIONS(113),
        [sym_identifier] = ACTIONS(839),
        [sym_comment] = ACTIONS(69),
    },
    [377] = {
        [sym_identifier] = ACTIONS(841),
        [sym_comment] = ACTIONS(69),
    },
    [378] = {
        [sym_identifier] = ACTIONS(843),
        [sym_comment] = ACTIONS(69),
    },
    [379] = {
        [sym__expression] = STATE(487),
        [sym_binary_operator] = STATE(15),
        [sym_subscript] = STATE(15),
        [sym_call] = STATE(15),
        [sym_list] = STATE(15),
        [anon_sym_LBRACK] = ACTIONS(103),
        [sym_number] = ACTIONS(105),
        [sym_identifier] = ACTIONS(105),
        [sym_comment] = ACTIONS(69),
    },
    [380] = {
        [sym__expression] = STATE(484),
        [sym_binary_operator] = STATE(34),
        [sym_subscript] = STATE(34),
        [sym_call] = STATE(34),
        [sym_list] = STATE(34),
        [anon_sym_LBRACK] = ACTIONS(111),
        [anon_sym_DOT_DOT_DOT] = ACTIONS(189),
        [anon_sym_RBRACK] = ACTIONS(123),
        [sym_number] = ACTIONS(113),
        [sym_identifier] = ACTIONS(113),
        [sym_comment] = ACTIONS(69),
    },
    [381] = {
        [aux_sym_subscript_repeat1] = STATE(41),
        [anon_sym_COMMA] = ACTIONS(845),
        [anon_sym_RBRACK] = ACTIONS(849),
        [sym_comment] = ACTIONS(69),
    },
    [382] = {
        [anon_sym_COMMA] = ACTIONS(853),
        [anon_sym_COLON] = ACTIONS(853),
        [anon_sym_in] = ACTIONS(853),
        [anon_sym_as] = ACTIONS(853),
        [anon_sym_LPAREN] = ACTIONS(853),
        [anon_sym_RPAREN] = ACTIONS(853),
        [anon_sym_PLUS] = ACTIONS(853),
        [anon_sym_LBRACK] = ACTIONS(853),
        [anon_sym_RBRACK] = ACTIONS(853),
        [sym_comment] = ACTIONS(69),
        [sym__newline] = ACTIONS(853),
    },
    [383] = {
        [sym_parameters] = STATE(397),
        [aux_sym_dotted_name_repeat1] = STATE(152),
        [anon_sym_COMMA] = ACTIONS(861),
        [anon_sym_COLON] = ACTIONS(865),
        [anon_sym_in] = ACTIONS(125),
        [anon_sym_as] = ACTIONS(125),
        [anon_sym_LPAREN] = ACTIONS(868),
        [anon_sym_RPAREN] = ACTIONS(874),
        [anon_sym_EQ] = ACTIONS(879),
        [anon_sym_DOT] = ACTIONS(881),
        [anon_sym_PLUS] = ACTIONS(125),
        [anon_sym_LBRACK] = ACTIONS(125),
        [anon_sym_RBRACK] = ACTIONS(125),
        [sym_comment] = ACTIONS(69),
        [sym__newline] = ACTIONS(885),
    },
    [384] = {
        [ts_builtin_sym_end] = ACTIONS(890),
        [anon_sym_SEMI] = ACTIONS(894),
        [anon_sym_print] = ACTIONS(897),
        [anon_sym_return] = ACTIONS(897),
        [anon_sym_del] = ACTIONS(897),
        [sym_pass_statement] = ACTIONS(897),
        [sym_break_statement] = ACTIONS(897),
        [sym_continue_statement] = ACTIONS(897),
        [anon_sym_if] = ACTIONS(897),
        [anon_sym_elif] = ACTIONS(425),
        [anon_sym_else] = ACTIONS(425),
        [anon_sym_for] = ACTIONS(897),
        [anon_sym_while] = ACTIONS(897),
        [anon_sym_try] = ACTIONS(897),
        [anon_sym_except] = ACTIONS(425),
        [anon_sym_finally] = ACTIONS(425),
        [anon_sym_with] = ACTIONS(897),
        [anon_sym_def] = ACTIONS(900),
        [anon_sym_class] = ACTIONS(900),
        [anon_sym_AT] = ACTIONS(905),
        [anon_sym_LBRACK] = ACTIONS(894),
        [sym_number] = ACTIONS(897),
        [sym_identifier] = ACTIONS(910),
        [sym_comment] = ACTIONS(69),
        [sym__newline] = ACTIONS(894),
        [sym__dedent] = ACTIONS(894),
    },
    [385] = {
        [sym__statement] = STATE(175),
        [sym__simple_statement] = STATE(176),
        [sym_print_statement] = STATE(5),
        [sym_expression_statement] = STATE(5),
        [sym_return_statement] = STATE(5),
        [sym_delete_statement] = STATE(5),
        [sym__compound_statement] = STATE(177),
        [sym_if_statement] = STATE(178),
        [sym_for_statement] = STATE(178),
        [sym_while_statement] = STATE(178),
        [sym_try_statement] = STATE(178),
        [sym_with_statement] = STATE(178),
        [sym_function_definition] = STATE(178),
        [sym_class_definition] = STATE(178),
        [sym_decorated_definition] = STATE(178),
        [sym_decorator] = STATE(21),
        [sym__expression] = STATE(22),
        [sym_binary_operator] = STATE(15),
        [sym_subscript] = STATE(15),
        [sym_call] = STATE(15),
        [sym_list] = STATE(15),
        [aux_sym_module_repeat1] = STATE(424),
        [aux_sym_decorated_definition_repeat1] = STATE(180),
        [anon_sym_print] = ACTIONS(79),
        [anon_sym_return] = ACTIONS(81),
        [anon_sym_del] = ACTIONS(83),
        [sym_pass_statement] = ACTIONS(85),
        [sym_break_statement] = ACTIONS(85),
        [sym_continue_statement] = ACTIONS(85),
        [anon_sym_if] = ACTIONS(401),
        [anon_sym_for] = ACTIONS(403),
        [anon_sym_while] = ACTIONS(405),
        [anon_sym_try] = ACTIONS(407),
        [anon_sym_with] = ACTIONS(409),
        [anon_sym_def] = ACTIONS(411),
        [anon_sym_class] = ACTIONS(413),
        [anon_sym_AT] = ACTIONS(101),
        [anon_sym_LBRACK] = ACTIONS(103),
        [sym_number] = ACTIONS(105),
        [sym_identifier] = ACTIONS(107),
        [sym_comment] = ACTIONS(69),
        [sym__dedent] = ACTIONS(913),
    },
    [386] = {
        [ts_builtin_sym_end] = ACTIONS(915),
        [anon_sym_SEMI] = ACTIONS(915),
        [anon_sym_print] = ACTIONS(918),
        [anon_sym_return] = ACTIONS(918),
        [anon_sym_del] = ACTIONS(918),
        [sym_pass_statement] = ACTIONS(918),
        [sym_break_statement] = ACTIONS(918),
        [sym_continue_statement] = ACTIONS(918),
        [anon_sym_if] = ACTIONS(918),
        [anon_sym_elif] = ACTIONS(918),
        [anon_sym_else] = ACTIONS(918),
        [anon_sym_for] = ACTIONS(918),
        [anon_sym_while] = ACTIONS(918),
        [anon_sym_try] = ACTIONS(918),
        [anon_sym_except] = ACTIONS(918),
        [anon_sym_finally] = ACTIONS(918),
        [anon_sym_with] = ACTIONS(918),
        [anon_sym_def] = ACTIONS(918),
        [anon_sym_class] = ACTIONS(918),
        [anon_sym_AT] = ACTIONS(915),
        [anon_sym_LBRACK] = ACTIONS(915),
        [sym_number] = ACTIONS(918),
        [sym_identifier] = ACTIONS(921),
        [sym_comment] = ACTIONS(69),
        [sym__newline] = ACTIONS(915),
        [sym__dedent] = ACTIONS(915),
    },
    [387] = {
        [ts_builtin_sym_end] = ACTIONS(924),
        [anon_sym_SEMI] = ACTIONS(924),
        [anon_sym_print] = ACTIONS(927),
        [anon_sym_return] = ACTIONS(927),
        [anon_sym_del] = ACTIONS(927),
        [sym_pass_statement] = ACTIONS(927),
        [sym_break_statement] = ACTIONS(927),
        [sym_continue_statement] = ACTIONS(927),
        [anon_sym_if] = ACTIONS(927),
        [anon_sym_for] = ACTIONS(927),
        [anon_sym_while] = ACTIONS(927),
        [anon_sym_try] = ACTIONS(927),
        [anon_sym_with] = ACTIONS(927),
        [anon_sym_def] = ACTIONS(927),
        [anon_sym_class] = ACTIONS(927),
        [anon_sym_AT] = ACTIONS(924),
        [anon_sym_LBRACK] = ACTIONS(924),
        [sym_number] = ACTIONS(927),
        [sym_identifier] = ACTIONS(930),
        [sym_comment] = ACTIONS(69),
        [sym__newline] = ACTIONS(924),
        [sym__dedent] = ACTIONS(924),
    },
    [388] = {
        [sym_comment] = ACTIONS(69),
        [sym__newline] = ACTIONS(933),
    },
    [389] = {
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
    [390] = {
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
    [391] = {
        [ts_builtin_sym_end] = ACTIONS(935),
        [anon_sym_SEMI] = ACTIONS(935),
        [anon_sym_print] = ACTIONS(938),
        [anon_sym_return] = ACTIONS(938),
        [anon_sym_del] = ACTIONS(938),
        [sym_pass_statement] = ACTIONS(938),
        [sym_break_statement] = ACTIONS(938),
        [sym_continue_statement] = ACTIONS(938),
        [anon_sym_if] = ACTIONS(938),
        [anon_sym_elif] = ACTIONS(938),
        [anon_sym_else] = ACTIONS(938),
        [anon_sym_for] = ACTIONS(938),
        [anon_sym_while] = ACTIONS(938),
        [anon_sym_try] = ACTIONS(938),
        [anon_sym_with] = ACTIONS(938),
        [anon_sym_def] = ACTIONS(938),
        [anon_sym_class] = ACTIONS(938),
        [anon_sym_AT] = ACTIONS(935),
        [anon_sym_LBRACK] = ACTIONS(935),
        [sym_number] = ACTIONS(938),
        [sym_identifier] = ACTIONS(941),
        [sym_comment] = ACTIONS(69),
        [sym__newline] = ACTIONS(935),
        [sym__dedent] = ACTIONS(935),
    },
    [392] = {
        [sym_finally_clause] = STATE(429),
        [ts_builtin_sym_end] = ACTIONS(944),
        [anon_sym_SEMI] = ACTIONS(944),
        [anon_sym_print] = ACTIONS(950),
        [anon_sym_return] = ACTIONS(950),
        [anon_sym_del] = ACTIONS(950),
        [sym_pass_statement] = ACTIONS(950),
        [sym_break_statement] = ACTIONS(950),
        [sym_continue_statement] = ACTIONS(950),
        [anon_sym_if] = ACTIONS(950),
        [anon_sym_for] = ACTIONS(950),
        [anon_sym_while] = ACTIONS(950),
        [anon_sym_try] = ACTIONS(950),
        [anon_sym_finally] = ACTIONS(956),
        [anon_sym_with] = ACTIONS(950),
        [anon_sym_def] = ACTIONS(950),
        [anon_sym_class] = ACTIONS(950),
        [anon_sym_AT] = ACTIONS(944),
        [anon_sym_LBRACK] = ACTIONS(944),
        [sym_number] = ACTIONS(950),
        [sym_identifier] = ACTIONS(958),
        [sym_comment] = ACTIONS(69),
        [sym__newline] = ACTIONS(944),
        [sym__dedent] = ACTIONS(944),
    },
    [393] = {
        [ts_builtin_sym_end] = ACTIONS(964),
        [anon_sym_SEMI] = ACTIONS(964),
        [anon_sym_print] = ACTIONS(967),
        [anon_sym_return] = ACTIONS(967),
        [anon_sym_del] = ACTIONS(967),
        [sym_pass_statement] = ACTIONS(967),
        [sym_break_statement] = ACTIONS(967),
        [sym_continue_statement] = ACTIONS(967),
        [anon_sym_if] = ACTIONS(967),
        [anon_sym_else] = ACTIONS(967),
        [anon_sym_for] = ACTIONS(967),
        [anon_sym_while] = ACTIONS(967),
        [anon_sym_try] = ACTIONS(967),
        [anon_sym_except] = ACTIONS(967),
        [anon_sym_finally] = ACTIONS(967),
        [anon_sym_with] = ACTIONS(967),
        [anon_sym_def] = ACTIONS(967),
        [anon_sym_class] = ACTIONS(967),
        [anon_sym_AT] = ACTIONS(964),
        [anon_sym_LBRACK] = ACTIONS(964),
        [sym_number] = ACTIONS(967),
        [sym_identifier] = ACTIONS(970),
        [sym_comment] = ACTIONS(69),
        [sym__newline] = ACTIONS(964),
        [sym__dedent] = ACTIONS(964),
    },
    [394] = {
        [ts_builtin_sym_end] = ACTIONS(973),
        [anon_sym_SEMI] = ACTIONS(973),
        [anon_sym_print] = ACTIONS(977),
        [anon_sym_return] = ACTIONS(977),
        [anon_sym_del] = ACTIONS(977),
        [sym_pass_statement] = ACTIONS(977),
        [sym_break_statement] = ACTIONS(977),
        [sym_continue_statement] = ACTIONS(977),
        [anon_sym_if] = ACTIONS(977),
        [anon_sym_for] = ACTIONS(977),
        [anon_sym_while] = ACTIONS(977),
        [anon_sym_try] = ACTIONS(977),
        [anon_sym_with] = ACTIONS(977),
        [anon_sym_def] = ACTIONS(977),
        [anon_sym_class] = ACTIONS(977),
        [anon_sym_AT] = ACTIONS(973),
        [anon_sym_LBRACK] = ACTIONS(973),
        [sym_number] = ACTIONS(977),
        [sym_identifier] = ACTIONS(981),
        [sym_comment] = ACTIONS(69),
        [sym__newline] = ACTIONS(973),
        [sym__dedent] = ACTIONS(973),
    },
    [395] = {
        [aux_sym_with_statement_repeat1] = STATE(412),
        [anon_sym_COMMA] = ACTIONS(985),
        [anon_sym_COLON] = ACTIONS(989),
        [sym_comment] = ACTIONS(69),
    },
    [396] = {
        [ts_builtin_sym_end] = ACTIONS(993),
        [anon_sym_SEMI] = ACTIONS(993),
        [anon_sym_print] = ACTIONS(996),
        [anon_sym_return] = ACTIONS(996),
        [anon_sym_del] = ACTIONS(996),
        [sym_pass_statement] = ACTIONS(996),
        [sym_break_statement] = ACTIONS(996),
        [sym_continue_statement] = ACTIONS(996),
        [anon_sym_if] = ACTIONS(996),
        [anon_sym_for] = ACTIONS(996),
        [anon_sym_while] = ACTIONS(996),
        [anon_sym_try] = ACTIONS(996),
        [anon_sym_with] = ACTIONS(996),
        [anon_sym_def] = ACTIONS(996),
        [anon_sym_class] = ACTIONS(996),
        [anon_sym_AT] = ACTIONS(993),
        [anon_sym_LBRACK] = ACTIONS(993),
        [sym_number] = ACTIONS(996),
        [sym_identifier] = ACTIONS(999),
        [sym_comment] = ACTIONS(69),
        [sym__newline] = ACTIONS(993),
        [sym__dedent] = ACTIONS(993),
    },
    [397] = {
        [anon_sym_COLON] = ACTIONS(1002),
        [sym_comment] = ACTIONS(69),
    },
    [398] = {
        [anon_sym_COMMA] = ACTIONS(1004),
        [anon_sym_RPAREN] = ACTIONS(1006),
        [sym_comment] = ACTIONS(69),
    },
    [399] = {
        [anon_sym_COMMA] = ACTIONS(1008),
        [anon_sym_RPAREN] = ACTIONS(1006),
        [sym_comment] = ACTIONS(69),
    },
    [400] = {
        [anon_sym_RPAREN] = ACTIONS(1010),
        [sym_comment] = ACTIONS(69),
    },
    [401] = {
        [anon_sym_def] = ACTIONS(1012),
        [anon_sym_class] = ACTIONS(1012),
        [anon_sym_AT] = ACTIONS(1012),
        [sym_comment] = ACTIONS(69),
    },
    [402] = {
        [sym_elif_clause] = STATE(452),
        [sym_else_clause] = STATE(464),
        [sym_except_clause] = STATE(465),
        [sym_finally_clause] = STATE(466),
        [aux_sym_if_statement_repeat1] = STATE(410),
        [aux_sym_try_statement_repeat1] = STATE(411),
        [ts_builtin_sym_end] = ACTIONS(1015),
        [anon_sym_SEMI] = ACTIONS(1015),
        [anon_sym_print] = ACTIONS(1029),
        [anon_sym_return] = ACTIONS(1029),
        [anon_sym_del] = ACTIONS(1029),
        [sym_pass_statement] = ACTIONS(1029),
        [sym_break_statement] = ACTIONS(1029),
        [sym_continue_statement] = ACTIONS(1029),
        [anon_sym_if] = ACTIONS(1029),
        [anon_sym_elif] = ACTIONS(1043),
        [anon_sym_else] = ACTIONS(1046),
        [anon_sym_for] = ACTIONS(1029),
        [anon_sym_while] = ACTIONS(1029),
        [anon_sym_try] = ACTIONS(1029),
        [anon_sym_except] = ACTIONS(1051),
        [anon_sym_finally] = ACTIONS(1055),
        [anon_sym_with] = ACTIONS(1029),
        [anon_sym_def] = ACTIONS(1029),
        [anon_sym_class] = ACTIONS(1029),
        [anon_sym_AT] = ACTIONS(1015),
        [anon_sym_LBRACK] = ACTIONS(1015),
        [sym_number] = ACTIONS(1029),
        [sym_identifier] = ACTIONS(1060),
        [sym_comment] = ACTIONS(69),
        [sym__newline] = ACTIONS(1015),
        [sym__dedent] = ACTIONS(1015),
    },
    [403] = {
        [anon_sym_COLON] = ACTIONS(1074),
        [anon_sym_in] = ACTIONS(1076),
        [anon_sym_RPAREN] = ACTIONS(1078),
        [sym_comment] = ACTIONS(69),
        [sym__newline] = ACTIONS(1080),
    },
    [404] = {
        [aux_sym_print_statement_repeat1] = STATE(409),
        [aux_sym_subscript_repeat1] = STATE(41),
        [anon_sym_COMMA] = ACTIONS(1083),
        [anon_sym_COLON] = ACTIONS(1097),
        [anon_sym_in] = ACTIONS(1105),
        [anon_sym_as] = ACTIONS(1110),
        [anon_sym_LPAREN] = ACTIONS(1113),
        [anon_sym_RPAREN] = ACTIONS(1116),
        [anon_sym_PLUS] = ACTIONS(1128),
        [anon_sym_LBRACK] = ACTIONS(1131),
        [anon_sym_RBRACK] = ACTIONS(1134),
        [sym_comment] = ACTIONS(69),
        [sym__newline] = ACTIONS(1141),
    },
    [405] = {
        [anon_sym_COMMA] = ACTIONS(1148),
        [anon_sym_RPAREN] = ACTIONS(1152),
        [sym_comment] = ACTIONS(69),
    },
    [406] = {
        [aux_sym_call_repeat2] = STATE(414),
        [anon_sym_COMMA] = ACTIONS(1156),
        [anon_sym_RPAREN] = ACTIONS(1158),
        [sym_comment] = ACTIONS(69),
    },
    [407] = {
        [anon_sym_RPAREN] = ACTIONS(1160),
        [sym_comment] = ACTIONS(69),
    },
    [408] = {
        [sym__statement] = STATE(438),
        [sym__simple_statement] = STATE(439),
        [sym_print_statement] = STATE(5),
        [sym_expression_statement] = STATE(5),
        [sym_return_statement] = STATE(5),
        [sym_delete_statement] = STATE(5),
        [sym__compound_statement] = STATE(389),
        [sym_if_statement] = STATE(390),
        [sym_for_statement] = STATE(390),
        [sym_while_statement] = STATE(390),
        [sym_try_statement] = STATE(390),
        [sym_with_statement] = STATE(390),
        [sym_function_definition] = STATE(390),
        [sym_class_definition] = STATE(390),
        [sym_decorated_definition] = STATE(390),
        [sym_decorator] = STATE(21),
        [sym__expression] = STATE(22),
        [sym_binary_operator] = STATE(15),
        [sym_subscript] = STATE(15),
        [sym_call] = STATE(15),
        [sym_list] = STATE(15),
        [aux_sym_decorated_definition_repeat1] = STATE(413),
        [ts_builtin_sym_end] = ACTIONS(159),
        [anon_sym_SEMI] = ACTIONS(161),
        [anon_sym_print] = ACTIONS(79),
        [anon_sym_return] = ACTIONS(81),
        [anon_sym_del] = ACTIONS(83),
        [sym_pass_statement] = ACTIONS(85),
        [sym_break_statement] = ACTIONS(85),
        [sym_continue_statement] = ACTIONS(85),
        [anon_sym_if] = ACTIONS(1162),
        [anon_sym_for] = ACTIONS(1164),
        [anon_sym_while] = ACTIONS(1166),
        [anon_sym_try] = ACTIONS(1168),
        [anon_sym_with] = ACTIONS(1170),
        [anon_sym_def] = ACTIONS(1172),
        [anon_sym_class] = ACTIONS(1174),
        [anon_sym_AT] = ACTIONS(101),
        [anon_sym_LBRACK] = ACTIONS(103),
        [sym_number] = ACTIONS(105),
        [sym_identifier] = ACTIONS(107),
        [sym_comment] = ACTIONS(69),
        [sym__newline] = ACTIONS(161),
        [sym__dedent] = ACTIONS(1176),
    },
    [409] = {
        [anon_sym_COMMA] = ACTIONS(1178),
        [anon_sym_COLON] = ACTIONS(397),
        [anon_sym_in] = ACTIONS(397),
        [anon_sym_RPAREN] = ACTIONS(1180),
        [anon_sym_RBRACK] = ACTIONS(343),
        [sym_comment] = ACTIONS(69),
        [sym__newline] = ACTIONS(1183),
    },
    [410] = {
        [sym_elif_clause] = STATE(430),
        [sym_else_clause] = STATE(431),
        [ts_builtin_sym_end] = ACTIONS(695),
        [anon_sym_SEMI] = ACTIONS(695),
        [anon_sym_print] = ACTIONS(693),
        [anon_sym_return] = ACTIONS(693),
        [anon_sym_del] = ACTIONS(693),
        [sym_pass_statement] = ACTIONS(693),
        [sym_break_statement] = ACTIONS(693),
        [sym_continue_statement] = ACTIONS(693),
        [anon_sym_if] = ACTIONS(693),
        [anon_sym_elif] = ACTIONS(1186),
        [anon_sym_else] = ACTIONS(1188),
        [anon_sym_for] = ACTIONS(693),
        [anon_sym_while] = ACTIONS(693),
        [anon_sym_try] = ACTIONS(693),
        [anon_sym_with] = ACTIONS(693),
        [anon_sym_def] = ACTIONS(693),
        [anon_sym_class] = ACTIONS(693),
        [anon_sym_AT] = ACTIONS(695),
        [anon_sym_LBRACK] = ACTIONS(695),
        [sym_number] = ACTIONS(693),
        [sym_identifier] = ACTIONS(697),
        [sym_comment] = ACTIONS(69),
        [sym__newline] = ACTIONS(695),
        [sym__dedent] = ACTIONS(695),
    },
    [411] = {
        [sym_else_clause] = STATE(426),
        [sym_except_clause] = STATE(427),
        [sym_finally_clause] = STATE(428),
        [ts_builtin_sym_end] = ACTIONS(585),
        [anon_sym_SEMI] = ACTIONS(585),
        [anon_sym_print] = ACTIONS(583),
        [anon_sym_return] = ACTIONS(583),
        [anon_sym_del] = ACTIONS(583),
        [sym_pass_statement] = ACTIONS(583),
        [sym_break_statement] = ACTIONS(583),
        [sym_continue_statement] = ACTIONS(583),
        [anon_sym_if] = ACTIONS(583),
        [anon_sym_else] = ACTIONS(1188),
        [anon_sym_for] = ACTIONS(583),
        [anon_sym_while] = ACTIONS(583),
        [anon_sym_try] = ACTIONS(583),
        [anon_sym_except] = ACTIONS(1190),
        [anon_sym_finally] = ACTIONS(956),
        [anon_sym_with] = ACTIONS(583),
        [anon_sym_def] = ACTIONS(583),
        [anon_sym_class] = ACTIONS(583),
        [anon_sym_AT] = ACTIONS(585),
        [anon_sym_LBRACK] = ACTIONS(585),
        [sym_number] = ACTIONS(583),
        [sym_identifier] = ACTIONS(587),
        [sym_comment] = ACTIONS(69),
        [sym__newline] = ACTIONS(585),
        [sym__dedent] = ACTIONS(585),
    },
    [412] = {
        [anon_sym_COMMA] = ACTIONS(547),
        [anon_sym_COLON] = ACTIONS(1192),
        [sym_comment] = ACTIONS(69),
    },
    [413] = {
        [sym_function_definition] = STATE(419),
        [sym_class_definition] = STATE(419),
        [sym_decorator] = STATE(26),
        [anon_sym_def] = ACTIONS(1194),
        [anon_sym_class] = ACTIONS(1196),
        [anon_sym_AT] = ACTIONS(101),
        [sym_comment] = ACTIONS(69),
    },
    [414] = {
        [anon_sym_COMMA] = ACTIONS(1198),
        [anon_sym_RPAREN] = ACTIONS(1200),
        [sym_comment] = ACTIONS(69),
    },
    [415] = {
        [sym__expression] = STATE(75),
        [sym_binary_operator] = STATE(34),
        [sym_subscript] = STATE(34),
        [sym_call] = STATE(34),
        [sym_keyword_argument] = STATE(76),
        [sym_dictionary_splat_argument] = STATE(417),
        [sym_list] = STATE(34),
        [anon_sym_LBRACK] = ACTIONS(111),
        [anon_sym_STAR_STAR] = ACTIONS(185),
        [sym_number] = ACTIONS(113),
        [sym_identifier] = ACTIONS(187),
        [sym_comment] = ACTIONS(69),
    },
    [416] = {
        [anon_sym_COMMA] = ACTIONS(1202),
        [anon_sym_COLON] = ACTIONS(1202),
        [anon_sym_in] = ACTIONS(1202),
        [anon_sym_as] = ACTIONS(1202),
        [anon_sym_LPAREN] = ACTIONS(1202),
        [anon_sym_RPAREN] = ACTIONS(1202),
        [anon_sym_PLUS] = ACTIONS(1202),
        [anon_sym_LBRACK] = ACTIONS(1202),
        [anon_sym_RBRACK] = ACTIONS(1202),
        [sym_comment] = ACTIONS(69),
        [sym__newline] = ACTIONS(1202),
    },
    [417] = {
        [anon_sym_RPAREN] = ACTIONS(1205),
        [sym_comment] = ACTIONS(69),
    },
    [418] = {
        [anon_sym_COMMA] = ACTIONS(1207),
        [anon_sym_COLON] = ACTIONS(1207),
        [anon_sym_in] = ACTIONS(1207),
        [anon_sym_as] = ACTIONS(1207),
        [anon_sym_LPAREN] = ACTIONS(1207),
        [anon_sym_RPAREN] = ACTIONS(1207),
        [anon_sym_PLUS] = ACTIONS(1207),
        [anon_sym_LBRACK] = ACTIONS(1207),
        [anon_sym_RBRACK] = ACTIONS(1207),
        [sym_comment] = ACTIONS(69),
        [sym__newline] = ACTIONS(1207),
    },
    [419] = {
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
    [420] = {
        [sym__simple_statement] = STATE(421),
        [sym_print_statement] = STATE(5),
        [sym_expression_statement] = STATE(5),
        [sym_return_statement] = STATE(5),
        [sym_delete_statement] = STATE(5),
        [sym__suite] = STATE(422),
        [sym__expression] = STATE(22),
        [sym_binary_operator] = STATE(15),
        [sym_subscript] = STATE(15),
        [sym_call] = STATE(15),
        [sym_list] = STATE(15),
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
        [sym__indent] = ACTIONS(799),
    },
    [421] = {
        [sym_comment] = ACTIONS(69),
        [sym__newline] = ACTIONS(913),
    },
    [422] = {
        [ts_builtin_sym_end] = ACTIONS(553),
        [anon_sym_SEMI] = ACTIONS(553),
        [anon_sym_print] = ACTIONS(551),
        [anon_sym_return] = ACTIONS(551),
        [anon_sym_del] = ACTIONS(551),
        [sym_pass_statement] = ACTIONS(551),
        [sym_break_statement] = ACTIONS(551),
        [sym_continue_statement] = ACTIONS(551),
        [anon_sym_if] = ACTIONS(551),
        [anon_sym_for] = ACTIONS(551),
        [anon_sym_while] = ACTIONS(551),
        [anon_sym_try] = ACTIONS(551),
        [anon_sym_with] = ACTIONS(551),
        [anon_sym_def] = ACTIONS(551),
        [anon_sym_class] = ACTIONS(551),
        [anon_sym_AT] = ACTIONS(553),
        [anon_sym_LBRACK] = ACTIONS(553),
        [sym_number] = ACTIONS(551),
        [sym_identifier] = ACTIONS(555),
        [sym_comment] = ACTIONS(69),
        [sym__newline] = ACTIONS(553),
        [sym__dedent] = ACTIONS(553),
    },
    [423] = {
        [ts_builtin_sym_end] = ACTIONS(423),
        [anon_sym_SEMI] = ACTIONS(423),
        [anon_sym_print] = ACTIONS(425),
        [anon_sym_return] = ACTIONS(425),
        [anon_sym_del] = ACTIONS(425),
        [sym_pass_statement] = ACTIONS(425),
        [sym_break_statement] = ACTIONS(425),
        [sym_continue_statement] = ACTIONS(425),
        [anon_sym_if] = ACTIONS(425),
        [anon_sym_elif] = ACTIONS(425),
        [anon_sym_else] = ACTIONS(425),
        [anon_sym_for] = ACTIONS(425),
        [anon_sym_while] = ACTIONS(425),
        [anon_sym_try] = ACTIONS(425),
        [anon_sym_except] = ACTIONS(425),
        [anon_sym_finally] = ACTIONS(425),
        [anon_sym_with] = ACTIONS(425),
        [anon_sym_def] = ACTIONS(425),
        [anon_sym_class] = ACTIONS(425),
        [anon_sym_AT] = ACTIONS(423),
        [anon_sym_LBRACK] = ACTIONS(423),
        [sym_number] = ACTIONS(425),
        [sym_identifier] = ACTIONS(427),
        [sym_comment] = ACTIONS(69),
        [sym__newline] = ACTIONS(423),
        [sym__dedent] = ACTIONS(423),
    },
    [424] = {
        [sym__statement] = STATE(183),
        [sym__simple_statement] = STATE(176),
        [sym_print_statement] = STATE(5),
        [sym_expression_statement] = STATE(5),
        [sym_return_statement] = STATE(5),
        [sym_delete_statement] = STATE(5),
        [sym__compound_statement] = STATE(177),
        [sym_if_statement] = STATE(178),
        [sym_for_statement] = STATE(178),
        [sym_while_statement] = STATE(178),
        [sym_try_statement] = STATE(178),
        [sym_with_statement] = STATE(178),
        [sym_function_definition] = STATE(178),
        [sym_class_definition] = STATE(178),
        [sym_decorated_definition] = STATE(178),
        [sym_decorator] = STATE(21),
        [sym__expression] = STATE(22),
        [sym_binary_operator] = STATE(15),
        [sym_subscript] = STATE(15),
        [sym_call] = STATE(15),
        [sym_list] = STATE(15),
        [aux_sym_decorated_definition_repeat1] = STATE(180),
        [anon_sym_print] = ACTIONS(79),
        [anon_sym_return] = ACTIONS(81),
        [anon_sym_del] = ACTIONS(83),
        [sym_pass_statement] = ACTIONS(85),
        [sym_break_statement] = ACTIONS(85),
        [sym_continue_statement] = ACTIONS(85),
        [anon_sym_if] = ACTIONS(401),
        [anon_sym_for] = ACTIONS(403),
        [anon_sym_while] = ACTIONS(405),
        [anon_sym_try] = ACTIONS(407),
        [anon_sym_with] = ACTIONS(409),
        [anon_sym_def] = ACTIONS(411),
        [anon_sym_class] = ACTIONS(413),
        [anon_sym_AT] = ACTIONS(101),
        [anon_sym_LBRACK] = ACTIONS(103),
        [sym_number] = ACTIONS(105),
        [sym_identifier] = ACTIONS(107),
        [sym_comment] = ACTIONS(69),
        [sym__dedent] = ACTIONS(1176),
    },
    [425] = {
        [ts_builtin_sym_end] = ACTIONS(443),
        [anon_sym_SEMI] = ACTIONS(443),
        [anon_sym_print] = ACTIONS(445),
        [anon_sym_return] = ACTIONS(445),
        [anon_sym_del] = ACTIONS(445),
        [sym_pass_statement] = ACTIONS(445),
        [sym_break_statement] = ACTIONS(445),
        [sym_continue_statement] = ACTIONS(445),
        [anon_sym_if] = ACTIONS(445),
        [anon_sym_elif] = ACTIONS(445),
        [anon_sym_else] = ACTIONS(445),
        [anon_sym_for] = ACTIONS(445),
        [anon_sym_while] = ACTIONS(445),
        [anon_sym_try] = ACTIONS(445),
        [anon_sym_except] = ACTIONS(445),
        [anon_sym_finally] = ACTIONS(445),
        [anon_sym_with] = ACTIONS(445),
        [anon_sym_def] = ACTIONS(445),
        [anon_sym_class] = ACTIONS(445),
        [anon_sym_AT] = ACTIONS(443),
        [anon_sym_LBRACK] = ACTIONS(443),
        [sym_number] = ACTIONS(445),
        [sym_identifier] = ACTIONS(447),
        [sym_comment] = ACTIONS(69),
        [sym__newline] = ACTIONS(443),
        [sym__dedent] = ACTIONS(443),
    },
    [426] = {
        [sym_finally_clause] = STATE(429),
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
        [anon_sym_finally] = ACTIONS(956),
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
    [427] = {
        [ts_builtin_sym_end] = ACTIONS(605),
        [anon_sym_SEMI] = ACTIONS(605),
        [anon_sym_print] = ACTIONS(603),
        [anon_sym_return] = ACTIONS(603),
        [anon_sym_del] = ACTIONS(603),
        [sym_pass_statement] = ACTIONS(603),
        [sym_break_statement] = ACTIONS(603),
        [sym_continue_statement] = ACTIONS(603),
        [anon_sym_if] = ACTIONS(603),
        [anon_sym_else] = ACTIONS(603),
        [anon_sym_for] = ACTIONS(603),
        [anon_sym_while] = ACTIONS(603),
        [anon_sym_try] = ACTIONS(603),
        [anon_sym_except] = ACTIONS(603),
        [anon_sym_finally] = ACTIONS(603),
        [anon_sym_with] = ACTIONS(603),
        [anon_sym_def] = ACTIONS(603),
        [anon_sym_class] = ACTIONS(603),
        [anon_sym_AT] = ACTIONS(605),
        [anon_sym_LBRACK] = ACTIONS(605),
        [sym_number] = ACTIONS(603),
        [sym_identifier] = ACTIONS(607),
        [sym_comment] = ACTIONS(69),
        [sym__newline] = ACTIONS(605),
        [sym__dedent] = ACTIONS(605),
    },
    [428] = {
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
    [429] = {
        [ts_builtin_sym_end] = ACTIONS(611),
        [anon_sym_SEMI] = ACTIONS(611),
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
        [anon_sym_AT] = ACTIONS(611),
        [anon_sym_LBRACK] = ACTIONS(611),
        [sym_number] = ACTIONS(609),
        [sym_identifier] = ACTIONS(613),
        [sym_comment] = ACTIONS(69),
        [sym__newline] = ACTIONS(611),
        [sym__dedent] = ACTIONS(611),
    },
    [430] = {
        [ts_builtin_sym_end] = ACTIONS(701),
        [anon_sym_SEMI] = ACTIONS(701),
        [anon_sym_print] = ACTIONS(699),
        [anon_sym_return] = ACTIONS(699),
        [anon_sym_del] = ACTIONS(699),
        [sym_pass_statement] = ACTIONS(699),
        [sym_break_statement] = ACTIONS(699),
        [sym_continue_statement] = ACTIONS(699),
        [anon_sym_if] = ACTIONS(699),
        [anon_sym_elif] = ACTIONS(699),
        [anon_sym_else] = ACTIONS(699),
        [anon_sym_for] = ACTIONS(699),
        [anon_sym_while] = ACTIONS(699),
        [anon_sym_try] = ACTIONS(699),
        [anon_sym_with] = ACTIONS(699),
        [anon_sym_def] = ACTIONS(699),
        [anon_sym_class] = ACTIONS(699),
        [anon_sym_AT] = ACTIONS(701),
        [anon_sym_LBRACK] = ACTIONS(701),
        [sym_number] = ACTIONS(699),
        [sym_identifier] = ACTIONS(703),
        [sym_comment] = ACTIONS(69),
        [sym__newline] = ACTIONS(701),
        [sym__dedent] = ACTIONS(701),
    },
    [431] = {
        [ts_builtin_sym_end] = ACTIONS(707),
        [anon_sym_SEMI] = ACTIONS(707),
        [anon_sym_print] = ACTIONS(705),
        [anon_sym_return] = ACTIONS(705),
        [anon_sym_del] = ACTIONS(705),
        [sym_pass_statement] = ACTIONS(705),
        [sym_break_statement] = ACTIONS(705),
        [sym_continue_statement] = ACTIONS(705),
        [anon_sym_if] = ACTIONS(705),
        [anon_sym_for] = ACTIONS(705),
        [anon_sym_while] = ACTIONS(705),
        [anon_sym_try] = ACTIONS(705),
        [anon_sym_with] = ACTIONS(705),
        [anon_sym_def] = ACTIONS(705),
        [anon_sym_class] = ACTIONS(705),
        [anon_sym_AT] = ACTIONS(707),
        [anon_sym_LBRACK] = ACTIONS(707),
        [sym_number] = ACTIONS(705),
        [sym_identifier] = ACTIONS(709),
        [sym_comment] = ACTIONS(69),
        [sym__newline] = ACTIONS(707),
        [sym__dedent] = ACTIONS(707),
    },
    [432] = {
        [sym__simple_statement] = STATE(421),
        [sym_print_statement] = STATE(5),
        [sym_expression_statement] = STATE(5),
        [sym_return_statement] = STATE(5),
        [sym_delete_statement] = STATE(5),
        [sym__suite] = STATE(433),
        [sym__expression] = STATE(22),
        [sym_binary_operator] = STATE(15),
        [sym_subscript] = STATE(15),
        [sym_call] = STATE(15),
        [sym_list] = STATE(15),
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
        [sym__indent] = ACTIONS(799),
    },
    [433] = {
        [ts_builtin_sym_end] = ACTIONS(617),
        [anon_sym_SEMI] = ACTIONS(617),
        [anon_sym_print] = ACTIONS(615),
        [anon_sym_return] = ACTIONS(615),
        [anon_sym_del] = ACTIONS(615),
        [sym_pass_statement] = ACTIONS(615),
        [sym_break_statement] = ACTIONS(615),
        [sym_continue_statement] = ACTIONS(615),
        [anon_sym_if] = ACTIONS(615),
        [anon_sym_for] = ACTIONS(615),
        [anon_sym_while] = ACTIONS(615),
        [anon_sym_try] = ACTIONS(615),
        [anon_sym_finally] = ACTIONS(615),
        [anon_sym_with] = ACTIONS(615),
        [anon_sym_def] = ACTIONS(615),
        [anon_sym_class] = ACTIONS(615),
        [anon_sym_AT] = ACTIONS(617),
        [anon_sym_LBRACK] = ACTIONS(617),
        [sym_number] = ACTIONS(615),
        [sym_identifier] = ACTIONS(619),
        [sym_comment] = ACTIONS(69),
        [sym__newline] = ACTIONS(617),
        [sym__dedent] = ACTIONS(617),
    },
    [434] = {
        [sym__expression] = STATE(435),
        [sym_binary_operator] = STATE(15),
        [sym_subscript] = STATE(15),
        [sym_call] = STATE(15),
        [sym_list] = STATE(15),
        [anon_sym_LBRACK] = ACTIONS(103),
        [anon_sym_RBRACK] = ACTIONS(347),
        [sym_number] = ACTIONS(105),
        [sym_identifier] = ACTIONS(105),
        [sym_comment] = ACTIONS(69),
    },
    [435] = {
        [anon_sym_COMMA] = ACTIONS(305),
        [anon_sym_COLON] = ACTIONS(305),
        [anon_sym_in] = ACTIONS(305),
        [anon_sym_LPAREN] = ACTIONS(151),
        [anon_sym_RPAREN] = ACTIONS(305),
        [anon_sym_PLUS] = ACTIONS(1210),
        [anon_sym_LBRACK] = ACTIONS(155),
        [anon_sym_RBRACK] = ACTIONS(305),
        [sym_comment] = ACTIONS(69),
        [sym__newline] = ACTIONS(305),
    },
    [436] = {
        [sym__expression] = STATE(437),
        [sym_binary_operator] = STATE(15),
        [sym_subscript] = STATE(15),
        [sym_call] = STATE(15),
        [sym_list] = STATE(15),
        [anon_sym_LBRACK] = ACTIONS(103),
        [sym_number] = ACTIONS(105),
        [sym_identifier] = ACTIONS(105),
        [sym_comment] = ACTIONS(69),
    },
    [437] = {
        [anon_sym_COMMA] = ACTIONS(235),
        [anon_sym_COLON] = ACTIONS(235),
        [anon_sym_in] = ACTIONS(235),
        [anon_sym_LPAREN] = ACTIONS(1113),
        [anon_sym_RPAREN] = ACTIONS(235),
        [anon_sym_PLUS] = ACTIONS(1212),
        [anon_sym_LBRACK] = ACTIONS(1131),
        [anon_sym_RBRACK] = ACTIONS(235),
        [sym_comment] = ACTIONS(69),
        [sym__newline] = ACTIONS(235),
    },
    [438] = {
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
    [439] = {
        [sym_comment] = ACTIONS(69),
        [sym__newline] = ACTIONS(1215),
    },
    [440] = {
        [ts_builtin_sym_end] = ACTIONS(333),
        [anon_sym_SEMI] = ACTIONS(333),
        [anon_sym_print] = ACTIONS(335),
        [anon_sym_return] = ACTIONS(335),
        [anon_sym_del] = ACTIONS(335),
        [sym_pass_statement] = ACTIONS(335),
        [sym_break_statement] = ACTIONS(335),
        [sym_continue_statement] = ACTIONS(335),
        [anon_sym_if] = ACTIONS(335),
        [anon_sym_for] = ACTIONS(335),
        [anon_sym_while] = ACTIONS(335),
        [anon_sym_try] = ACTIONS(335),
        [anon_sym_with] = ACTIONS(335),
        [anon_sym_def] = ACTIONS(335),
        [anon_sym_class] = ACTIONS(335),
        [anon_sym_AT] = ACTIONS(333),
        [anon_sym_LBRACK] = ACTIONS(333),
        [sym_number] = ACTIONS(335),
        [sym_identifier] = ACTIONS(337),
        [sym_comment] = ACTIONS(69),
        [sym__newline] = ACTIONS(333),
        [sym__dedent] = ACTIONS(333),
    },
    [441] = {
        [anon_sym_COMMA] = ACTIONS(813),
        [anon_sym_COLON] = ACTIONS(813),
        [anon_sym_in] = ACTIONS(813),
        [anon_sym_as] = ACTIONS(813),
        [anon_sym_LPAREN] = ACTIONS(813),
        [anon_sym_RPAREN] = ACTIONS(813),
        [anon_sym_PLUS] = ACTIONS(813),
        [anon_sym_LBRACK] = ACTIONS(813),
        [anon_sym_RBRACK] = ACTIONS(813),
        [sym_comment] = ACTIONS(69),
        [sym__newline] = ACTIONS(813),
    },
    [442] = {
        [sym__expression] = STATE(79),
        [sym_binary_operator] = STATE(34),
        [sym_subscript] = STATE(34),
        [sym_call] = STATE(34),
        [sym_keyword_argument] = STATE(80),
        [sym_dictionary_splat_argument] = STATE(444),
        [sym_list] = STATE(34),
        [anon_sym_LBRACK] = ACTIONS(111),
        [anon_sym_STAR_STAR] = ACTIONS(185),
        [sym_number] = ACTIONS(113),
        [sym_identifier] = ACTIONS(187),
        [sym_comment] = ACTIONS(69),
    },
    [443] = {
        [anon_sym_COMMA] = ACTIONS(1217),
        [anon_sym_COLON] = ACTIONS(1217),
        [anon_sym_in] = ACTIONS(1217),
        [anon_sym_as] = ACTIONS(1217),
        [anon_sym_LPAREN] = ACTIONS(1217),
        [anon_sym_RPAREN] = ACTIONS(1217),
        [anon_sym_PLUS] = ACTIONS(1217),
        [anon_sym_LBRACK] = ACTIONS(1217),
        [anon_sym_RBRACK] = ACTIONS(1217),
        [sym_comment] = ACTIONS(69),
        [sym__newline] = ACTIONS(1217),
    },
    [444] = {
        [anon_sym_RPAREN] = ACTIONS(1220),
        [sym_comment] = ACTIONS(69),
    },
    [445] = {
        [anon_sym_COMMA] = ACTIONS(1222),
        [anon_sym_COLON] = ACTIONS(1222),
        [anon_sym_in] = ACTIONS(1222),
        [anon_sym_as] = ACTIONS(1222),
        [anon_sym_LPAREN] = ACTIONS(1222),
        [anon_sym_RPAREN] = ACTIONS(1222),
        [anon_sym_PLUS] = ACTIONS(1222),
        [anon_sym_LBRACK] = ACTIONS(1222),
        [anon_sym_RBRACK] = ACTIONS(1222),
        [sym_comment] = ACTIONS(69),
        [sym__newline] = ACTIONS(1222),
    },
    [446] = {
        [anon_sym_RPAREN] = ACTIONS(1200),
        [anon_sym_STAR] = ACTIONS(1225),
        [anon_sym_LBRACK] = ACTIONS(1228),
        [anon_sym_STAR_STAR] = ACTIONS(1228),
        [sym_number] = ACTIONS(1225),
        [sym_identifier] = ACTIONS(1225),
        [sym_comment] = ACTIONS(69),
    },
    [447] = {
        [sym__expression] = STATE(455),
        [sym_binary_operator] = STATE(15),
        [sym_subscript] = STATE(15),
        [sym_call] = STATE(15),
        [sym_list] = STATE(15),
        [anon_sym_RPAREN] = ACTIONS(1200),
        [anon_sym_STAR] = ACTIONS(1225),
        [anon_sym_LBRACK] = ACTIONS(777),
        [anon_sym_DOT_DOT_DOT] = ACTIONS(203),
        [anon_sym_RBRACK] = ACTIONS(1231),
        [anon_sym_STAR_STAR] = ACTIONS(1228),
        [sym_number] = ACTIONS(789),
        [sym_identifier] = ACTIONS(789),
        [sym_comment] = ACTIONS(69),
    },
    [448] = {
        [sym__simple_statement] = STATE(421),
        [sym_print_statement] = STATE(5),
        [sym_expression_statement] = STATE(5),
        [sym_return_statement] = STATE(5),
        [sym_delete_statement] = STATE(5),
        [sym__suite] = STATE(451),
        [sym__expression] = STATE(22),
        [sym_binary_operator] = STATE(15),
        [sym_subscript] = STATE(15),
        [sym_call] = STATE(15),
        [sym_list] = STATE(15),
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
        [sym__indent] = ACTIONS(799),
    },
    [449] = {
        [anon_sym_COMMA] = ACTIONS(1217),
        [anon_sym_COLON] = ACTIONS(1217),
        [anon_sym_in] = ACTIONS(1217),
        [anon_sym_as] = ACTIONS(1217),
        [anon_sym_LPAREN] = ACTIONS(1217),
        [anon_sym_RPAREN] = ACTIONS(1217),
        [anon_sym_PLUS] = ACTIONS(1217),
        [anon_sym_LBRACK] = ACTIONS(1217),
        [anon_sym_RBRACK] = ACTIONS(1217),
        [sym_comment] = ACTIONS(69),
        [sym__newline] = ACTIONS(1233),
    },
    [450] = {
        [anon_sym_COMMA] = ACTIONS(1237),
        [anon_sym_COLON] = ACTIONS(1237),
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
    [451] = {
        [sym_elif_clause] = STATE(452),
        [sym_else_clause] = STATE(453),
        [aux_sym_if_statement_repeat1] = STATE(410),
        [ts_builtin_sym_end] = ACTIONS(1240),
        [anon_sym_SEMI] = ACTIONS(1240),
        [anon_sym_print] = ACTIONS(1246),
        [anon_sym_return] = ACTIONS(1246),
        [anon_sym_del] = ACTIONS(1246),
        [sym_pass_statement] = ACTIONS(1246),
        [sym_break_statement] = ACTIONS(1246),
        [sym_continue_statement] = ACTIONS(1246),
        [anon_sym_if] = ACTIONS(1246),
        [anon_sym_elif] = ACTIONS(1043),
        [anon_sym_else] = ACTIONS(1046),
        [anon_sym_for] = ACTIONS(1246),
        [anon_sym_while] = ACTIONS(1246),
        [anon_sym_try] = ACTIONS(1246),
        [anon_sym_except] = ACTIONS(1252),
        [anon_sym_finally] = ACTIONS(1252),
        [anon_sym_with] = ACTIONS(1246),
        [anon_sym_def] = ACTIONS(1246),
        [anon_sym_class] = ACTIONS(1246),
        [anon_sym_AT] = ACTIONS(1240),
        [anon_sym_LBRACK] = ACTIONS(1240),
        [sym_number] = ACTIONS(1246),
        [sym_identifier] = ACTIONS(1255),
        [sym_comment] = ACTIONS(69),
        [sym__newline] = ACTIONS(1240),
        [sym__dedent] = ACTIONS(1240),
    },
    [452] = {
        [ts_builtin_sym_end] = ACTIONS(689),
        [anon_sym_SEMI] = ACTIONS(689),
        [anon_sym_print] = ACTIONS(687),
        [anon_sym_return] = ACTIONS(687),
        [anon_sym_del] = ACTIONS(687),
        [sym_pass_statement] = ACTIONS(687),
        [sym_break_statement] = ACTIONS(687),
        [sym_continue_statement] = ACTIONS(687),
        [anon_sym_if] = ACTIONS(687),
        [anon_sym_elif] = ACTIONS(687),
        [anon_sym_else] = ACTIONS(687),
        [anon_sym_for] = ACTIONS(687),
        [anon_sym_while] = ACTIONS(687),
        [anon_sym_try] = ACTIONS(687),
        [anon_sym_with] = ACTIONS(687),
        [anon_sym_def] = ACTIONS(687),
        [anon_sym_class] = ACTIONS(687),
        [anon_sym_AT] = ACTIONS(689),
        [anon_sym_LBRACK] = ACTIONS(689),
        [sym_number] = ACTIONS(687),
        [sym_identifier] = ACTIONS(691),
        [sym_comment] = ACTIONS(69),
        [sym__newline] = ACTIONS(689),
        [sym__dedent] = ACTIONS(689),
    },
    [453] = {
        [ts_builtin_sym_end] = ACTIONS(1261),
        [anon_sym_SEMI] = ACTIONS(1261),
        [anon_sym_print] = ACTIONS(1264),
        [anon_sym_return] = ACTIONS(1264),
        [anon_sym_del] = ACTIONS(1264),
        [sym_pass_statement] = ACTIONS(1264),
        [sym_break_statement] = ACTIONS(1264),
        [sym_continue_statement] = ACTIONS(1264),
        [anon_sym_if] = ACTIONS(1264),
        [anon_sym_for] = ACTIONS(1264),
        [anon_sym_while] = ACTIONS(1264),
        [anon_sym_try] = ACTIONS(1264),
        [anon_sym_with] = ACTIONS(1264),
        [anon_sym_def] = ACTIONS(1264),
        [anon_sym_class] = ACTIONS(1264),
        [anon_sym_AT] = ACTIONS(1261),
        [anon_sym_LBRACK] = ACTIONS(1261),
        [sym_number] = ACTIONS(1264),
        [sym_identifier] = ACTIONS(1267),
        [sym_comment] = ACTIONS(69),
        [sym__newline] = ACTIONS(1261),
        [sym__dedent] = ACTIONS(1261),
    },
    [454] = {
        [anon_sym_COMMA] = ACTIONS(1270),
        [anon_sym_COLON] = ACTIONS(1270),
        [anon_sym_in] = ACTIONS(1270),
        [anon_sym_as] = ACTIONS(1270),
        [anon_sym_LPAREN] = ACTIONS(1270),
        [anon_sym_RPAREN] = ACTIONS(1270),
        [anon_sym_PLUS] = ACTIONS(1270),
        [anon_sym_LBRACK] = ACTIONS(1270),
        [anon_sym_RBRACK] = ACTIONS(1270),
        [sym_comment] = ACTIONS(69),
        [sym__newline] = ACTIONS(1270),
    },
    [455] = {
        [anon_sym_COMMA] = ACTIONS(1273),
        [anon_sym_COLON] = ACTIONS(1276),
        [anon_sym_in] = ACTIONS(307),
        [anon_sym_LPAREN] = ACTIONS(151),
        [anon_sym_RPAREN] = ACTIONS(307),
        [anon_sym_PLUS] = ACTIONS(1210),
        [anon_sym_LBRACK] = ACTIONS(155),
        [anon_sym_RBRACK] = ACTIONS(1273),
        [sym_comment] = ACTIONS(69),
        [sym__newline] = ACTIONS(307),
    },
    [456] = {
        [sym__simple_statement] = STATE(421),
        [sym_print_statement] = STATE(5),
        [sym_expression_statement] = STATE(5),
        [sym_return_statement] = STATE(5),
        [sym_delete_statement] = STATE(5),
        [sym__suite] = STATE(457),
        [sym__expression] = STATE(22),
        [sym_binary_operator] = STATE(15),
        [sym_subscript] = STATE(15),
        [sym_call] = STATE(15),
        [sym_list] = STATE(15),
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
        [sym__indent] = ACTIONS(799),
    },
    [457] = {
        [ts_builtin_sym_end] = ACTIONS(635),
        [anon_sym_SEMI] = ACTIONS(635),
        [anon_sym_print] = ACTIONS(633),
        [anon_sym_return] = ACTIONS(633),
        [anon_sym_del] = ACTIONS(633),
        [sym_pass_statement] = ACTIONS(633),
        [sym_break_statement] = ACTIONS(633),
        [sym_continue_statement] = ACTIONS(633),
        [anon_sym_if] = ACTIONS(633),
        [anon_sym_else] = ACTIONS(633),
        [anon_sym_for] = ACTIONS(633),
        [anon_sym_while] = ACTIONS(633),
        [anon_sym_try] = ACTIONS(633),
        [anon_sym_except] = ACTIONS(633),
        [anon_sym_finally] = ACTIONS(633),
        [anon_sym_with] = ACTIONS(633),
        [anon_sym_def] = ACTIONS(633),
        [anon_sym_class] = ACTIONS(633),
        [anon_sym_AT] = ACTIONS(635),
        [anon_sym_LBRACK] = ACTIONS(635),
        [sym_number] = ACTIONS(633),
        [sym_identifier] = ACTIONS(637),
        [sym_comment] = ACTIONS(69),
        [sym__newline] = ACTIONS(635),
        [sym__dedent] = ACTIONS(635),
    },
    [458] = {
        [sym__simple_statement] = STATE(421),
        [sym_print_statement] = STATE(5),
        [sym_expression_statement] = STATE(5),
        [sym_return_statement] = STATE(5),
        [sym_delete_statement] = STATE(5),
        [sym__suite] = STATE(462),
        [sym__expression] = STATE(22),
        [sym_binary_operator] = STATE(15),
        [sym_subscript] = STATE(15),
        [sym_call] = STATE(15),
        [sym_list] = STATE(15),
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
        [sym__indent] = ACTIONS(799),
    },
    [459] = {
        [anon_sym_COLON] = ACTIONS(1279),
        [sym_comment] = ACTIONS(69),
    },
    [460] = {
        [sym__simple_statement] = STATE(421),
        [sym_print_statement] = STATE(5),
        [sym_expression_statement] = STATE(5),
        [sym_return_statement] = STATE(5),
        [sym_delete_statement] = STATE(5),
        [sym__suite] = STATE(461),
        [sym__expression] = STATE(22),
        [sym_binary_operator] = STATE(15),
        [sym_subscript] = STATE(15),
        [sym_call] = STATE(15),
        [sym_list] = STATE(15),
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
        [sym__indent] = ACTIONS(799),
    },
    [461] = {
        [ts_builtin_sym_end] = ACTIONS(417),
        [anon_sym_SEMI] = ACTIONS(417),
        [anon_sym_print] = ACTIONS(419),
        [anon_sym_return] = ACTIONS(419),
        [anon_sym_del] = ACTIONS(419),
        [sym_pass_statement] = ACTIONS(419),
        [sym_break_statement] = ACTIONS(419),
        [sym_continue_statement] = ACTIONS(419),
        [anon_sym_if] = ACTIONS(419),
        [anon_sym_for] = ACTIONS(419),
        [anon_sym_while] = ACTIONS(419),
        [anon_sym_try] = ACTIONS(419),
        [anon_sym_with] = ACTIONS(419),
        [anon_sym_def] = ACTIONS(419),
        [anon_sym_class] = ACTIONS(419),
        [anon_sym_AT] = ACTIONS(417),
        [anon_sym_LBRACK] = ACTIONS(417),
        [sym_number] = ACTIONS(419),
        [sym_identifier] = ACTIONS(421),
        [sym_comment] = ACTIONS(69),
        [sym__newline] = ACTIONS(417),
        [sym__dedent] = ACTIONS(417),
    },
    [462] = {
        [sym_else_clause] = STATE(463),
        [ts_builtin_sym_end] = ACTIONS(667),
        [anon_sym_SEMI] = ACTIONS(667),
        [anon_sym_print] = ACTIONS(665),
        [anon_sym_return] = ACTIONS(665),
        [anon_sym_del] = ACTIONS(665),
        [sym_pass_statement] = ACTIONS(665),
        [sym_break_statement] = ACTIONS(665),
        [sym_continue_statement] = ACTIONS(665),
        [anon_sym_if] = ACTIONS(665),
        [anon_sym_else] = ACTIONS(1188),
        [anon_sym_for] = ACTIONS(665),
        [anon_sym_while] = ACTIONS(665),
        [anon_sym_try] = ACTIONS(665),
        [anon_sym_with] = ACTIONS(665),
        [anon_sym_def] = ACTIONS(665),
        [anon_sym_class] = ACTIONS(665),
        [anon_sym_AT] = ACTIONS(667),
        [anon_sym_LBRACK] = ACTIONS(667),
        [sym_number] = ACTIONS(665),
        [sym_identifier] = ACTIONS(669),
        [sym_comment] = ACTIONS(69),
        [sym__newline] = ACTIONS(667),
        [sym__dedent] = ACTIONS(667),
    },
    [463] = {
        [ts_builtin_sym_end] = ACTIONS(673),
        [anon_sym_SEMI] = ACTIONS(673),
        [anon_sym_print] = ACTIONS(671),
        [anon_sym_return] = ACTIONS(671),
        [anon_sym_del] = ACTIONS(671),
        [sym_pass_statement] = ACTIONS(671),
        [sym_break_statement] = ACTIONS(671),
        [sym_continue_statement] = ACTIONS(671),
        [anon_sym_if] = ACTIONS(671),
        [anon_sym_for] = ACTIONS(671),
        [anon_sym_while] = ACTIONS(671),
        [anon_sym_try] = ACTIONS(671),
        [anon_sym_with] = ACTIONS(671),
        [anon_sym_def] = ACTIONS(671),
        [anon_sym_class] = ACTIONS(671),
        [anon_sym_AT] = ACTIONS(673),
        [anon_sym_LBRACK] = ACTIONS(673),
        [sym_number] = ACTIONS(671),
        [sym_identifier] = ACTIONS(675),
        [sym_comment] = ACTIONS(69),
        [sym__newline] = ACTIONS(673),
        [sym__dedent] = ACTIONS(673),
    },
    [464] = {
        [ts_builtin_sym_end] = ACTIONS(1281),
        [anon_sym_SEMI] = ACTIONS(1281),
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
        [anon_sym_AT] = ACTIONS(1281),
        [anon_sym_LBRACK] = ACTIONS(1281),
        [sym_number] = ACTIONS(1285),
        [sym_identifier] = ACTIONS(1289),
        [sym_comment] = ACTIONS(69),
        [sym__newline] = ACTIONS(1281),
        [sym__dedent] = ACTIONS(1281),
    },
    [465] = {
        [ts_builtin_sym_end] = ACTIONS(579),
        [anon_sym_SEMI] = ACTIONS(579),
        [anon_sym_print] = ACTIONS(577),
        [anon_sym_return] = ACTIONS(577),
        [anon_sym_del] = ACTIONS(577),
        [sym_pass_statement] = ACTIONS(577),
        [sym_break_statement] = ACTIONS(577),
        [sym_continue_statement] = ACTIONS(577),
        [anon_sym_if] = ACTIONS(577),
        [anon_sym_else] = ACTIONS(577),
        [anon_sym_for] = ACTIONS(577),
        [anon_sym_while] = ACTIONS(577),
        [anon_sym_try] = ACTIONS(577),
        [anon_sym_except] = ACTIONS(577),
        [anon_sym_finally] = ACTIONS(577),
        [anon_sym_with] = ACTIONS(577),
        [anon_sym_def] = ACTIONS(577),
        [anon_sym_class] = ACTIONS(577),
        [anon_sym_AT] = ACTIONS(579),
        [anon_sym_LBRACK] = ACTIONS(579),
        [sym_number] = ACTIONS(577),
        [sym_identifier] = ACTIONS(581),
        [sym_comment] = ACTIONS(69),
        [sym__newline] = ACTIONS(579),
        [sym__dedent] = ACTIONS(579),
    },
    [466] = {
        [ts_builtin_sym_end] = ACTIONS(585),
        [anon_sym_SEMI] = ACTIONS(585),
        [anon_sym_print] = ACTIONS(583),
        [anon_sym_return] = ACTIONS(583),
        [anon_sym_del] = ACTIONS(583),
        [sym_pass_statement] = ACTIONS(583),
        [sym_break_statement] = ACTIONS(583),
        [sym_continue_statement] = ACTIONS(583),
        [anon_sym_if] = ACTIONS(583),
        [anon_sym_for] = ACTIONS(583),
        [anon_sym_while] = ACTIONS(583),
        [anon_sym_try] = ACTIONS(583),
        [anon_sym_with] = ACTIONS(583),
        [anon_sym_def] = ACTIONS(583),
        [anon_sym_class] = ACTIONS(583),
        [anon_sym_AT] = ACTIONS(585),
        [anon_sym_LBRACK] = ACTIONS(585),
        [sym_number] = ACTIONS(583),
        [sym_identifier] = ACTIONS(587),
        [sym_comment] = ACTIONS(69),
        [sym__newline] = ACTIONS(585),
        [sym__dedent] = ACTIONS(585),
    },
    [467] = {
        [anon_sym_COLON] = ACTIONS(1293),
        [sym_comment] = ACTIONS(69),
    },
    [468] = {
        [sym_dictionary_splat_parameter] = STATE(470),
        [anon_sym_STAR] = ACTIONS(509),
        [sym_comment] = ACTIONS(69),
    },
    [469] = {
        [anon_sym_COLON] = ACTIONS(1298),
        [sym_comment] = ACTIONS(69),
    },
    [470] = {
        [anon_sym_RPAREN] = ACTIONS(1301),
        [sym_comment] = ACTIONS(69),
    },
    [471] = {
        [anon_sym_COLON] = ACTIONS(1303),
        [sym_comment] = ACTIONS(69),
    },
    [472] = {
        [anon_sym_RPAREN] = ACTIONS(1306),
        [anon_sym_STAR] = ACTIONS(1308),
        [sym_identifier] = ACTIONS(1311),
        [sym_comment] = ACTIONS(69),
    },
    [473] = {
        [anon_sym_COLON] = ACTIONS(1314),
        [sym_comment] = ACTIONS(69),
    },
    [474] = {
        [sym__simple_statement] = STATE(421),
        [sym_print_statement] = STATE(5),
        [sym_expression_statement] = STATE(5),
        [sym_return_statement] = STATE(5),
        [sym_delete_statement] = STATE(5),
        [sym__suite] = STATE(475),
        [sym__expression] = STATE(22),
        [sym_binary_operator] = STATE(15),
        [sym_subscript] = STATE(15),
        [sym_call] = STATE(15),
        [sym_list] = STATE(15),
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
        [sym__indent] = ACTIONS(799),
    },
    [475] = {
        [ts_builtin_sym_end] = ACTIONS(481),
        [anon_sym_SEMI] = ACTIONS(481),
        [anon_sym_print] = ACTIONS(479),
        [anon_sym_return] = ACTIONS(479),
        [anon_sym_del] = ACTIONS(479),
        [sym_pass_statement] = ACTIONS(479),
        [sym_break_statement] = ACTIONS(479),
        [sym_continue_statement] = ACTIONS(479),
        [anon_sym_if] = ACTIONS(479),
        [anon_sym_for] = ACTIONS(479),
        [anon_sym_while] = ACTIONS(479),
        [anon_sym_try] = ACTIONS(479),
        [anon_sym_with] = ACTIONS(479),
        [anon_sym_def] = ACTIONS(479),
        [anon_sym_class] = ACTIONS(479),
        [anon_sym_AT] = ACTIONS(481),
        [anon_sym_LBRACK] = ACTIONS(481),
        [sym_number] = ACTIONS(479),
        [sym_identifier] = ACTIONS(483),
        [sym_comment] = ACTIONS(69),
        [sym__newline] = ACTIONS(481),
        [sym__dedent] = ACTIONS(481),
    },
    [476] = {
        [sym__simple_statement] = STATE(421),
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
        [sym__indent] = ACTIONS(799),
    },
    [477] = {
        [ts_builtin_sym_end] = ACTIONS(561),
        [anon_sym_SEMI] = ACTIONS(561),
        [anon_sym_print] = ACTIONS(559),
        [anon_sym_return] = ACTIONS(559),
        [anon_sym_del] = ACTIONS(559),
        [sym_pass_statement] = ACTIONS(559),
        [sym_break_statement] = ACTIONS(559),
        [sym_continue_statement] = ACTIONS(559),
        [anon_sym_if] = ACTIONS(559),
        [anon_sym_for] = ACTIONS(559),
        [anon_sym_while] = ACTIONS(559),
        [anon_sym_try] = ACTIONS(559),
        [anon_sym_with] = ACTIONS(559),
        [anon_sym_def] = ACTIONS(559),
        [anon_sym_class] = ACTIONS(559),
        [anon_sym_AT] = ACTIONS(561),
        [anon_sym_LBRACK] = ACTIONS(561),
        [sym_number] = ACTIONS(559),
        [sym_identifier] = ACTIONS(563),
        [sym_comment] = ACTIONS(69),
        [sym__newline] = ACTIONS(561),
        [sym__dedent] = ACTIONS(561),
    },
    [478] = {
        [ts_builtin_sym_end] = ACTIONS(894),
        [anon_sym_SEMI] = ACTIONS(894),
        [anon_sym_print] = ACTIONS(897),
        [anon_sym_return] = ACTIONS(897),
        [anon_sym_del] = ACTIONS(897),
        [sym_pass_statement] = ACTIONS(897),
        [sym_break_statement] = ACTIONS(897),
        [sym_continue_statement] = ACTIONS(897),
        [anon_sym_if] = ACTIONS(897),
        [anon_sym_elif] = ACTIONS(425),
        [anon_sym_else] = ACTIONS(425),
        [anon_sym_for] = ACTIONS(897),
        [anon_sym_while] = ACTIONS(897),
        [anon_sym_try] = ACTIONS(897),
        [anon_sym_except] = ACTIONS(425),
        [anon_sym_finally] = ACTIONS(425),
        [anon_sym_with] = ACTIONS(897),
        [anon_sym_def] = ACTIONS(897),
        [anon_sym_class] = ACTIONS(897),
        [anon_sym_AT] = ACTIONS(894),
        [anon_sym_LBRACK] = ACTIONS(894),
        [sym_number] = ACTIONS(897),
        [sym_identifier] = ACTIONS(910),
        [sym_comment] = ACTIONS(69),
        [sym__newline] = ACTIONS(894),
        [sym__dedent] = ACTIONS(894),
    },
    [479] = {
        [sym__simple_statement] = STATE(421),
        [sym_print_statement] = STATE(5),
        [sym_expression_statement] = STATE(5),
        [sym_return_statement] = STATE(5),
        [sym_delete_statement] = STATE(5),
        [sym__suite] = STATE(483),
        [sym__expression] = STATE(22),
        [sym_binary_operator] = STATE(15),
        [sym_subscript] = STATE(15),
        [sym_call] = STATE(15),
        [sym_list] = STATE(15),
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
        [sym__indent] = ACTIONS(799),
    },
    [480] = {
        [sym_default_parameter] = STATE(206),
        [sym_list_splat_parameter] = STATE(207),
        [sym_dictionary_splat_parameter] = STATE(208),
        [sym_expression_list] = STATE(482),
        [sym__expression] = STATE(160),
        [sym_binary_operator] = STATE(34),
        [sym_subscript] = STATE(34),
        [sym_call] = STATE(34),
        [sym_list] = STATE(34),
        [aux_sym_parameters_repeat1] = STATE(209),
        [anon_sym_RPAREN] = ACTIONS(471),
        [anon_sym_STAR] = ACTIONS(473),
        [anon_sym_LBRACK] = ACTIONS(111),
        [sym_number] = ACTIONS(113),
        [sym_identifier] = ACTIONS(1317),
        [sym_comment] = ACTIONS(69),
    },
    [481] = {
        [anon_sym_COMMA] = ACTIONS(1319),
        [anon_sym_LPAREN] = ACTIONS(125),
        [anon_sym_RPAREN] = ACTIONS(1322),
        [anon_sym_EQ] = ACTIONS(495),
        [anon_sym_PLUS] = ACTIONS(125),
        [anon_sym_LBRACK] = ACTIONS(125),
        [sym_comment] = ACTIONS(69),
    },
    [482] = {
        [anon_sym_RPAREN] = ACTIONS(1078),
        [sym_comment] = ACTIONS(69),
    },
    [483] = {
        [ts_builtin_sym_end] = ACTIONS(465),
        [anon_sym_SEMI] = ACTIONS(465),
        [anon_sym_print] = ACTIONS(463),
        [anon_sym_return] = ACTIONS(463),
        [anon_sym_del] = ACTIONS(463),
        [sym_pass_statement] = ACTIONS(463),
        [sym_break_statement] = ACTIONS(463),
        [sym_continue_statement] = ACTIONS(463),
        [anon_sym_if] = ACTIONS(463),
        [anon_sym_for] = ACTIONS(463),
        [anon_sym_while] = ACTIONS(463),
        [anon_sym_try] = ACTIONS(463),
        [anon_sym_with] = ACTIONS(463),
        [anon_sym_def] = ACTIONS(463),
        [anon_sym_class] = ACTIONS(463),
        [anon_sym_AT] = ACTIONS(465),
        [anon_sym_LBRACK] = ACTIONS(465),
        [sym_number] = ACTIONS(463),
        [sym_identifier] = ACTIONS(467),
        [sym_comment] = ACTIONS(69),
        [sym__newline] = ACTIONS(465),
        [sym__dedent] = ACTIONS(465),
    },
    [484] = {
        [aux_sym_print_statement_repeat1] = STATE(135),
        [aux_sym_subscript_repeat1] = STATE(41),
        [anon_sym_COMMA] = ACTIONS(1325),
        [anon_sym_LPAREN] = ACTIONS(197),
        [anon_sym_PLUS] = ACTIONS(199),
        [anon_sym_LBRACK] = ACTIONS(201),
        [anon_sym_RBRACK] = ACTIONS(1327),
        [sym_comment] = ACTIONS(69),
    },
    [485] = {
        [sym__expression] = STATE(486),
        [sym_binary_operator] = STATE(34),
        [sym_subscript] = STATE(34),
        [sym_call] = STATE(34),
        [sym_list] = STATE(34),
        [anon_sym_LBRACK] = ACTIONS(111),
        [anon_sym_DOT_DOT_DOT] = ACTIONS(203),
        [anon_sym_RBRACK] = ACTIONS(1231),
        [sym_number] = ACTIONS(113),
        [sym_identifier] = ACTIONS(113),
        [sym_comment] = ACTIONS(69),
    },
    [486] = {
        [anon_sym_COMMA] = ACTIONS(1273),
        [anon_sym_LPAREN] = ACTIONS(197),
        [anon_sym_PLUS] = ACTIONS(199),
        [anon_sym_LBRACK] = ACTIONS(201),
        [anon_sym_RBRACK] = ACTIONS(1273),
        [sym_comment] = ACTIONS(69),
    },
    [487] = {
        [anon_sym_COMMA] = ACTIONS(235),
        [anon_sym_COLON] = ACTIONS(235),
        [anon_sym_in] = ACTIONS(235),
        [anon_sym_as] = ACTIONS(235),
        [anon_sym_LPAREN] = ACTIONS(1113),
        [anon_sym_RPAREN] = ACTIONS(235),
        [anon_sym_PLUS] = ACTIONS(1128),
        [anon_sym_LBRACK] = ACTIONS(1131),
        [anon_sym_RBRACK] = ACTIONS(235),
        [sym_comment] = ACTIONS(69),
        [sym__newline] = ACTIONS(235),
    },
    [488] = {
        [anon_sym_LPAREN] = ACTIONS(1329),
        [anon_sym_DOT] = ACTIONS(1329),
        [sym_comment] = ACTIONS(69),
        [sym__newline] = ACTIONS(1329),
    },
    [489] = {
        [anon_sym_COLON] = ACTIONS(1332),
        [anon_sym_LPAREN] = ACTIONS(1334),
        [sym_comment] = ACTIONS(69),
    },
    [490] = {
        [sym_expression_list] = STATE(482),
        [sym__expression] = STATE(160),
        [sym_binary_operator] = STATE(34),
        [sym_subscript] = STATE(34),
        [sym_call] = STATE(34),
        [sym_list] = STATE(34),
        [anon_sym_LBRACK] = ACTIONS(111),
        [sym_number] = ACTIONS(113),
        [sym_identifier] = ACTIONS(113),
        [sym_comment] = ACTIONS(69),
    },
    [491] = {
        [anon_sym_COMMA] = ACTIONS(1336),
        [anon_sym_LPAREN] = ACTIONS(125),
        [anon_sym_RPAREN] = ACTIONS(1339),
        [anon_sym_PLUS] = ACTIONS(125),
        [anon_sym_LBRACK] = ACTIONS(125),
        [sym_comment] = ACTIONS(69),
    },
    [492] = {
        [anon_sym_COMMA] = ACTIONS(1343),
        [anon_sym_LPAREN] = ACTIONS(197),
        [anon_sym_RPAREN] = ACTIONS(1343),
        [anon_sym_PLUS] = ACTIONS(199),
        [anon_sym_LBRACK] = ACTIONS(201),
        [sym_comment] = ACTIONS(69),
    },
    [493] = {
        [sym__expression] = STATE(103),
        [sym_binary_operator] = STATE(34),
        [sym_subscript] = STATE(34),
        [sym_call] = STATE(34),
        [sym_list] = STATE(34),
        [anon_sym_STAR] = ACTIONS(487),
        [anon_sym_LBRACK] = ACTIONS(111),
        [sym_number] = ACTIONS(113),
        [sym_identifier] = ACTIONS(1346),
        [sym_comment] = ACTIONS(69),
    },
    [494] = {
        [anon_sym_COMMA] = ACTIONS(1319),
        [anon_sym_LPAREN] = ACTIONS(125),
        [anon_sym_RPAREN] = ACTIONS(1322),
        [anon_sym_EQ] = ACTIONS(879),
        [anon_sym_PLUS] = ACTIONS(125),
        [anon_sym_LBRACK] = ACTIONS(125),
        [sym_comment] = ACTIONS(69),
    },
    [495] = {
        [aux_sym_print_statement_repeat1] = STATE(498),
        [anon_sym_COMMA] = ACTIONS(1348),
        [anon_sym_LPAREN] = ACTIONS(197),
        [anon_sym_RPAREN] = ACTIONS(1350),
        [anon_sym_PLUS] = ACTIONS(199),
        [anon_sym_LBRACK] = ACTIONS(201),
        [sym_comment] = ACTIONS(69),
    },
    [496] = {
        [sym__expression] = STATE(102),
        [sym_binary_operator] = STATE(34),
        [sym_subscript] = STATE(34),
        [sym_call] = STATE(34),
        [sym_list] = STATE(34),
        [anon_sym_RPAREN] = ACTIONS(319),
        [anon_sym_STAR] = ACTIONS(279),
        [anon_sym_LBRACK] = ACTIONS(1353),
        [anon_sym_STAR_STAR] = ACTIONS(281),
        [sym_number] = ACTIONS(1356),
        [sym_identifier] = ACTIONS(1356),
        [sym_comment] = ACTIONS(69),
    },
    [497] = {
        [anon_sym_COMMA] = ACTIONS(275),
        [anon_sym_COLON] = ACTIONS(275),
        [anon_sym_in] = ACTIONS(275),
        [anon_sym_as] = ACTIONS(275),
        [anon_sym_LPAREN] = ACTIONS(275),
        [anon_sym_RPAREN] = ACTIONS(275),
        [anon_sym_PLUS] = ACTIONS(275),
        [anon_sym_LBRACK] = ACTIONS(275),
        [anon_sym_RBRACK] = ACTIONS(275),
        [sym_comment] = ACTIONS(69),
        [sym__newline] = ACTIONS(1359),
    },
    [498] = {
        [anon_sym_COMMA] = ACTIONS(369),
        [anon_sym_RPAREN] = ACTIONS(1180),
        [sym_comment] = ACTIONS(69),
    },
    [499] = {
        [anon_sym_COMMA] = ACTIONS(1336),
        [anon_sym_LPAREN] = ACTIONS(125),
        [anon_sym_RPAREN] = ACTIONS(1336),
        [anon_sym_PLUS] = ACTIONS(125),
        [anon_sym_LBRACK] = ACTIONS(125),
        [sym_comment] = ACTIONS(69),
    },
    [500] = {
        [sym_parameters] = STATE(397),
        [anon_sym_LPAREN] = ACTIONS(469),
        [sym_comment] = ACTIONS(69),
    },
    [501] = {
        [aux_sym_with_statement_repeat1] = STATE(412),
        [anon_sym_COMMA] = ACTIONS(537),
        [anon_sym_COLON] = ACTIONS(1362),
        [sym_comment] = ACTIONS(69),
    },
    [502] = {
        [sym__simple_statement] = STATE(421),
        [sym_print_statement] = STATE(5),
        [sym_expression_statement] = STATE(5),
        [sym_return_statement] = STATE(5),
        [sym_delete_statement] = STATE(5),
        [sym__suite] = STATE(503),
        [sym__expression] = STATE(22),
        [sym_binary_operator] = STATE(15),
        [sym_subscript] = STATE(15),
        [sym_call] = STATE(15),
        [sym_list] = STATE(15),
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
        [sym__indent] = ACTIONS(799),
    },
    [503] = {
        [ts_builtin_sym_end] = ACTIONS(623),
        [anon_sym_SEMI] = ACTIONS(623),
        [anon_sym_print] = ACTIONS(621),
        [anon_sym_return] = ACTIONS(621),
        [anon_sym_del] = ACTIONS(621),
        [sym_pass_statement] = ACTIONS(621),
        [sym_break_statement] = ACTIONS(621),
        [sym_continue_statement] = ACTIONS(621),
        [anon_sym_if] = ACTIONS(621),
        [anon_sym_for] = ACTIONS(621),
        [anon_sym_while] = ACTIONS(621),
        [anon_sym_try] = ACTIONS(621),
        [anon_sym_with] = ACTIONS(621),
        [anon_sym_def] = ACTIONS(621),
        [anon_sym_class] = ACTIONS(621),
        [anon_sym_AT] = ACTIONS(623),
        [anon_sym_LBRACK] = ACTIONS(623),
        [sym_number] = ACTIONS(621),
        [sym_identifier] = ACTIONS(625),
        [sym_comment] = ACTIONS(69),
        [sym__newline] = ACTIONS(623),
        [sym__dedent] = ACTIONS(623),
    },
    [504] = {
        [anon_sym_COMMA] = ACTIONS(545),
        [anon_sym_COLON] = ACTIONS(1364),
        [anon_sym_LPAREN] = ACTIONS(197),
        [anon_sym_PLUS] = ACTIONS(199),
        [anon_sym_LBRACK] = ACTIONS(201),
        [sym_comment] = ACTIONS(69),
    },
    [505] = {
        [anon_sym_COMMA] = ACTIONS(1367),
        [anon_sym_COLON] = ACTIONS(1369),
        [anon_sym_as] = ACTIONS(1367),
        [anon_sym_LPAREN] = ACTIONS(197),
        [anon_sym_PLUS] = ACTIONS(199),
        [anon_sym_LBRACK] = ACTIONS(201),
        [sym_comment] = ACTIONS(69),
    },
    [506] = {
        [sym__expression] = STATE(508),
        [sym_binary_operator] = STATE(34),
        [sym_subscript] = STATE(34),
        [sym_call] = STATE(34),
        [sym_list] = STATE(34),
        [anon_sym_LBRACK] = ACTIONS(111),
        [sym_number] = ACTIONS(113),
        [sym_identifier] = ACTIONS(113),
        [sym_comment] = ACTIONS(69),
    },
    [507] = {
        [sym__simple_statement] = STATE(421),
        [sym_print_statement] = STATE(5),
        [sym_expression_statement] = STATE(5),
        [sym_return_statement] = STATE(5),
        [sym_delete_statement] = STATE(5),
        [sym__suite] = STATE(509),
        [sym__expression] = STATE(22),
        [sym_binary_operator] = STATE(15),
        [sym_subscript] = STATE(15),
        [sym_call] = STATE(15),
        [sym_list] = STATE(15),
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
        [sym__indent] = ACTIONS(799),
    },
    [508] = {
        [anon_sym_COLON] = ACTIONS(1371),
        [anon_sym_LPAREN] = ACTIONS(197),
        [anon_sym_PLUS] = ACTIONS(199),
        [anon_sym_LBRACK] = ACTIONS(201),
        [sym_comment] = ACTIONS(69),
    },
    [509] = {
        [ts_builtin_sym_end] = ACTIONS(641),
        [anon_sym_SEMI] = ACTIONS(641),
        [anon_sym_print] = ACTIONS(639),
        [anon_sym_return] = ACTIONS(639),
        [anon_sym_del] = ACTIONS(639),
        [sym_pass_statement] = ACTIONS(639),
        [sym_break_statement] = ACTIONS(639),
        [sym_continue_statement] = ACTIONS(639),
        [anon_sym_if] = ACTIONS(639),
        [anon_sym_else] = ACTIONS(639),
        [anon_sym_for] = ACTIONS(639),
        [anon_sym_while] = ACTIONS(639),
        [anon_sym_try] = ACTIONS(639),
        [anon_sym_except] = ACTIONS(639),
        [anon_sym_finally] = ACTIONS(639),
        [anon_sym_with] = ACTIONS(639),
        [anon_sym_def] = ACTIONS(639),
        [anon_sym_class] = ACTIONS(639),
        [anon_sym_AT] = ACTIONS(641),
        [anon_sym_LBRACK] = ACTIONS(641),
        [sym_number] = ACTIONS(639),
        [sym_identifier] = ACTIONS(643),
        [sym_comment] = ACTIONS(69),
        [sym__newline] = ACTIONS(641),
        [sym__dedent] = ACTIONS(641),
    },
    [510] = {
        [sym__simple_statement] = STATE(245),
        [sym_print_statement] = STATE(5),
        [sym_expression_statement] = STATE(5),
        [sym_return_statement] = STATE(5),
        [sym_delete_statement] = STATE(5),
        [sym__suite] = STATE(511),
        [sym__expression] = STATE(22),
        [sym_binary_operator] = STATE(15),
        [sym_subscript] = STATE(15),
        [sym_call] = STATE(15),
        [sym_list] = STATE(15),
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
        [sym__indent] = ACTIONS(567),
    },
    [511] = {
        [sym_except_clause] = STATE(465),
        [sym_finally_clause] = STATE(466),
        [aux_sym_try_statement_repeat1] = STATE(411),
        [anon_sym_except] = ACTIONS(1373),
        [anon_sym_finally] = ACTIONS(1375),
        [sym_comment] = ACTIONS(69),
    },
    [512] = {
        [anon_sym_COLON] = ACTIONS(1377),
        [anon_sym_LPAREN] = ACTIONS(197),
        [anon_sym_PLUS] = ACTIONS(199),
        [anon_sym_LBRACK] = ACTIONS(201),
        [sym_comment] = ACTIONS(69),
    },
    [513] = {
        [sym__simple_statement] = STATE(421),
        [sym_print_statement] = STATE(5),
        [sym_expression_statement] = STATE(5),
        [sym_return_statement] = STATE(5),
        [sym_delete_statement] = STATE(5),
        [sym__suite] = STATE(514),
        [sym__expression] = STATE(22),
        [sym_binary_operator] = STATE(15),
        [sym_subscript] = STATE(15),
        [sym_call] = STATE(15),
        [sym_list] = STATE(15),
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
        [sym__indent] = ACTIONS(799),
    },
    [514] = {
        [sym_else_clause] = STATE(515),
        [ts_builtin_sym_end] = ACTIONS(651),
        [anon_sym_SEMI] = ACTIONS(651),
        [anon_sym_print] = ACTIONS(649),
        [anon_sym_return] = ACTIONS(649),
        [anon_sym_del] = ACTIONS(649),
        [sym_pass_statement] = ACTIONS(649),
        [sym_break_statement] = ACTIONS(649),
        [sym_continue_statement] = ACTIONS(649),
        [anon_sym_if] = ACTIONS(649),
        [anon_sym_else] = ACTIONS(1188),
        [anon_sym_for] = ACTIONS(649),
        [anon_sym_while] = ACTIONS(649),
        [anon_sym_try] = ACTIONS(649),
        [anon_sym_with] = ACTIONS(649),
        [anon_sym_def] = ACTIONS(649),
        [anon_sym_class] = ACTIONS(649),
        [anon_sym_AT] = ACTIONS(651),
        [anon_sym_LBRACK] = ACTIONS(651),
        [sym_number] = ACTIONS(649),
        [sym_identifier] = ACTIONS(653),
        [sym_comment] = ACTIONS(69),
        [sym__newline] = ACTIONS(651),
        [sym__dedent] = ACTIONS(651),
    },
    [515] = {
        [ts_builtin_sym_end] = ACTIONS(657),
        [anon_sym_SEMI] = ACTIONS(657),
        [anon_sym_print] = ACTIONS(655),
        [anon_sym_return] = ACTIONS(655),
        [anon_sym_del] = ACTIONS(655),
        [sym_pass_statement] = ACTIONS(655),
        [sym_break_statement] = ACTIONS(655),
        [sym_continue_statement] = ACTIONS(655),
        [anon_sym_if] = ACTIONS(655),
        [anon_sym_for] = ACTIONS(655),
        [anon_sym_while] = ACTIONS(655),
        [anon_sym_try] = ACTIONS(655),
        [anon_sym_with] = ACTIONS(655),
        [anon_sym_def] = ACTIONS(655),
        [anon_sym_class] = ACTIONS(655),
        [anon_sym_AT] = ACTIONS(657),
        [anon_sym_LBRACK] = ACTIONS(657),
        [sym_number] = ACTIONS(655),
        [sym_identifier] = ACTIONS(659),
        [sym_comment] = ACTIONS(69),
        [sym__newline] = ACTIONS(657),
        [sym__dedent] = ACTIONS(657),
    },
    [516] = {
        [anon_sym_COLON] = ACTIONS(1074),
        [sym_comment] = ACTIONS(69),
    },
    [517] = {
        [anon_sym_in] = ACTIONS(1076),
        [sym_comment] = ACTIONS(69),
    },
    [518] = {
        [anon_sym_COLON] = ACTIONS(1379),
        [anon_sym_LPAREN] = ACTIONS(197),
        [anon_sym_PLUS] = ACTIONS(199),
        [anon_sym_LBRACK] = ACTIONS(201),
        [sym_comment] = ACTIONS(69),
    },
    [519] = {
        [sym__simple_statement] = STATE(421),
        [sym_print_statement] = STATE(5),
        [sym_expression_statement] = STATE(5),
        [sym_return_statement] = STATE(5),
        [sym_delete_statement] = STATE(5),
        [sym__suite] = STATE(520),
        [sym__expression] = STATE(22),
        [sym_binary_operator] = STATE(15),
        [sym_subscript] = STATE(15),
        [sym_call] = STATE(15),
        [sym_list] = STATE(15),
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
        [sym__indent] = ACTIONS(799),
    },
    [520] = {
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
    [521] = {
        [anon_sym_COLON] = ACTIONS(1381),
        [anon_sym_LPAREN] = ACTIONS(197),
        [anon_sym_PLUS] = ACTIONS(199),
        [anon_sym_LBRACK] = ACTIONS(201),
        [sym_comment] = ACTIONS(69),
    },
    [522] = {
        [sym__simple_statement] = STATE(421),
        [sym_print_statement] = STATE(5),
        [sym_expression_statement] = STATE(5),
        [sym_return_statement] = STATE(5),
        [sym_delete_statement] = STATE(5),
        [sym__suite] = STATE(523),
        [sym__expression] = STATE(22),
        [sym_binary_operator] = STATE(15),
        [sym_subscript] = STATE(15),
        [sym_call] = STATE(15),
        [sym_list] = STATE(15),
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
        [sym__indent] = ACTIONS(799),
    },
    [523] = {
        [sym_elif_clause] = STATE(452),
        [sym_else_clause] = STATE(524),
        [aux_sym_if_statement_repeat1] = STATE(410),
        [ts_builtin_sym_end] = ACTIONS(683),
        [anon_sym_SEMI] = ACTIONS(683),
        [anon_sym_print] = ACTIONS(679),
        [anon_sym_return] = ACTIONS(679),
        [anon_sym_del] = ACTIONS(679),
        [sym_pass_statement] = ACTIONS(679),
        [sym_break_statement] = ACTIONS(679),
        [sym_continue_statement] = ACTIONS(679),
        [anon_sym_if] = ACTIONS(679),
        [anon_sym_elif] = ACTIONS(1186),
        [anon_sym_else] = ACTIONS(1188),
        [anon_sym_for] = ACTIONS(679),
        [anon_sym_while] = ACTIONS(679),
        [anon_sym_try] = ACTIONS(679),
        [anon_sym_with] = ACTIONS(679),
        [anon_sym_def] = ACTIONS(679),
        [anon_sym_class] = ACTIONS(679),
        [anon_sym_AT] = ACTIONS(683),
        [anon_sym_LBRACK] = ACTIONS(683),
        [sym_number] = ACTIONS(679),
        [sym_identifier] = ACTIONS(685),
        [sym_comment] = ACTIONS(69),
        [sym__newline] = ACTIONS(683),
        [sym__dedent] = ACTIONS(683),
    },
    [524] = {
        [ts_builtin_sym_end] = ACTIONS(695),
        [anon_sym_SEMI] = ACTIONS(695),
        [anon_sym_print] = ACTIONS(693),
        [anon_sym_return] = ACTIONS(693),
        [anon_sym_del] = ACTIONS(693),
        [sym_pass_statement] = ACTIONS(693),
        [sym_break_statement] = ACTIONS(693),
        [sym_continue_statement] = ACTIONS(693),
        [anon_sym_if] = ACTIONS(693),
        [anon_sym_for] = ACTIONS(693),
        [anon_sym_while] = ACTIONS(693),
        [anon_sym_try] = ACTIONS(693),
        [anon_sym_with] = ACTIONS(693),
        [anon_sym_def] = ACTIONS(693),
        [anon_sym_class] = ACTIONS(693),
        [anon_sym_AT] = ACTIONS(695),
        [anon_sym_LBRACK] = ACTIONS(695),
        [sym_number] = ACTIONS(693),
        [sym_identifier] = ACTIONS(697),
        [sym_comment] = ACTIONS(69),
        [sym__newline] = ACTIONS(695),
        [sym__dedent] = ACTIONS(695),
    },
    [525] = {
        [anon_sym_COMMA] = ACTIONS(1202),
        [anon_sym_COLON] = ACTIONS(1383),
        [anon_sym_in] = ACTIONS(1202),
        [anon_sym_as] = ACTIONS(1202),
        [anon_sym_LPAREN] = ACTIONS(1202),
        [anon_sym_RPAREN] = ACTIONS(1202),
        [anon_sym_PLUS] = ACTIONS(1202),
        [anon_sym_LBRACK] = ACTIONS(1202),
        [anon_sym_RBRACK] = ACTIONS(1202),
        [sym_comment] = ACTIONS(69),
        [sym__newline] = ACTIONS(1202),
    },
    [526] = {
        [anon_sym_COMMA] = ACTIONS(1388),
        [anon_sym_RBRACK] = ACTIONS(1388),
        [sym_comment] = ACTIONS(69),
    },
    [527] = {
        [anon_sym_COMMA] = ACTIONS(1391),
        [anon_sym_COLON] = ACTIONS(1391),
        [anon_sym_in] = ACTIONS(1391),
        [anon_sym_as] = ACTIONS(1391),
        [anon_sym_LPAREN] = ACTIONS(1391),
        [anon_sym_RPAREN] = ACTIONS(1391),
        [anon_sym_PLUS] = ACTIONS(1391),
        [anon_sym_LBRACK] = ACTIONS(1391),
        [anon_sym_RBRACK] = ACTIONS(1391),
        [sym_comment] = ACTIONS(69),
        [sym__newline] = ACTIONS(1391),
    },
    [528] = {
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
    [529] = {
        [anon_sym_COMMA] = ACTIONS(1396),
        [anon_sym_COLON] = ACTIONS(1396),
        [sym_comment] = ACTIONS(69),
    },
    [530] = {
        [anon_sym_COMMA] = ACTIONS(1399),
        [anon_sym_COLON] = ACTIONS(1407),
        [anon_sym_in] = ACTIONS(1412),
        [anon_sym_as] = ACTIONS(543),
        [anon_sym_LPAREN] = ACTIONS(151),
        [anon_sym_RPAREN] = ACTIONS(1415),
        [anon_sym_PLUS] = ACTIONS(1420),
        [anon_sym_LBRACK] = ACTIONS(155),
        [anon_sym_RBRACK] = ACTIONS(1422),
        [sym_comment] = ACTIONS(69),
        [sym__newline] = ACTIONS(1412),
    },
    [531] = {
        [anon_sym_COMMA] = ACTIONS(1427),
        [anon_sym_RPAREN] = ACTIONS(1427),
        [sym_comment] = ACTIONS(69),
    },
    [532] = {
        [anon_sym_RPAREN] = ACTIONS(1430),
        [sym_comment] = ACTIONS(69),
    },
    [533] = {
        [anon_sym_COMMA] = ACTIONS(1432),
        [anon_sym_COLON] = ACTIONS(1432),
        [anon_sym_in] = ACTIONS(1432),
        [anon_sym_as] = ACTIONS(1432),
        [anon_sym_LPAREN] = ACTIONS(1432),
        [anon_sym_RPAREN] = ACTIONS(1432),
        [anon_sym_PLUS] = ACTIONS(1432),
        [anon_sym_LBRACK] = ACTIONS(1432),
        [anon_sym_RBRACK] = ACTIONS(1432),
        [sym_comment] = ACTIONS(69),
        [sym__newline] = ACTIONS(1432),
    },
};

static TSParseActionEntry ts_parse_actions[] = {
    [0] = {.count = 0, .reusable = false, .depends_on_lookahead = false},
    [1] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(0),
    [3] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(27),
    [5] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(2),
    [7] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(359),
    [9] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(3),
    [11] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(4),
    [13] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(5),
    [15] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(360),
    [17] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(361),
    [19] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(362),
    [21] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(363),
    [23] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(364),
    [25] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(365),
    [27] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(366),
    [29] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(367),
    [31] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(368),
    [33] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(369),
    [35] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(370),
    [37] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(371),
    [39] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(372),
    [41] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(373),
    [43] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(374),
    [45] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(375),
    [47] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(376),
    [49] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(377),
    [51] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(13),
    [53] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(378),
    [55] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(379),
    [57] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(380),
    [59] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(381),
    [61] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(382),
    [63] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(59),
    [65] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(15),
    [67] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, RECOVER(383),
    [69] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT_EXTRA(),
    [71] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(384),
    [73] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(385),
    [75] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(386),
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
    [115] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(304),
    [117] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(294),
    [119] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(156),
    [121] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(139),
    [123] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(131),
    [125] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__expression, 1),
    [127] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, ACCEPT_INPUT(),
    [129] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_module_repeat1, 1),
    [131] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_module_repeat1, 1),
    [133] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_module_repeat1, 1),
    [135] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(130),
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
    [293] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(99),
    [295] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_list, 3),
    [297] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(98),
    [299] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(100),
    [301] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_list, 4),
    [303] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_list, 5),
    [305] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_print_statement_repeat1, 3),
    [307] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_print_statement_repeat1, 2),
    [309] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_list_splat_argument, 2),
    [311] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(129),
    [313] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(124),
    [315] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(125),
    [317] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(123),
    [319] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(114),
    [321] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(115),
    [323] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(117),
    [325] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(118),
    [327] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(120),
    [329] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(122),
    [331] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(127),
    [333] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__statement, 2),
    [335] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__statement, 2),
    [337] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__statement, 2),
    [339] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(133),
    [341] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(134),
    [343] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(137),
    [345] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(136),
    [347] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(138),
    [349] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_dotted_name, 1),
    [351] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(151),
    [353] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(141),
    [355] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(142),
    [357] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_decorator, 3),
    [359] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(144),
    [361] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_decorator, 4),
    [363] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(146),
    [365] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(147),
    [367] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_arguments, 3),
    [369] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(149),
    [371] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(150),
    [373] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_arguments, 4),
    [375] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(155),
    [377] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_dotted_name, 2),
    [379] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(153),
    [381] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(154),
    [383] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_dotted_name_repeat1, 3),
    [385] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_dotted_name_repeat1, 2),
    [387] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(157),
    [389] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(158),
    [391] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(164),
    [393] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(162),
    [395] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_expression_list, 1),
    [397] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_expression_list, 2),
    [399] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(163),
    [401] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(168),
    [403] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(169),
    [405] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(170),
    [407] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(171),
    [409] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(172),
    [411] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(173),
    [413] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(174),
    [415] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(167),
    [417] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_class_definition, 7),
    [419] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_class_definition, 7),
    [421] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_class_definition, 7),
    [423] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__suite, 2),
    [425] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__suite, 2),
    [427] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__suite, 2),
    [429] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(243),
    [431] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(198),
    [433] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(185),
    [435] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(184),
    [437] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(182),
    [439] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(173),
    [441] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(174),
    [443] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__suite, 3),
    [445] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__suite, 3),
    [447] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__suite, 3),
    [449] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(186),
    [451] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(187),
    [453] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(191),
    [455] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(189),
    [457] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(190),
    [459] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(194),
    [461] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(196),
    [463] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_class_definition, 4),
    [465] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_class_definition, 4),
    [467] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_class_definition, 4),
    [469] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(199),
    [471] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(203),
    [473] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(204),
    [475] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(205),
    [477] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(201),
    [479] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_function_definition, 5),
    [481] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_function_definition, 5),
    [483] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_function_definition, 5),
    [485] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_parameters, 2),
    [487] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(219),
    [489] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(229),
    [491] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(228),
    [493] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(225),
    [495] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(223),
    [497] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(226),
    [499] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(210),
    [501] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(221),
    [503] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(214),
    [505] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(215),
    [507] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_parameters, 4),
    [509] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(216),
    [511] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(218),
    [513] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_parameters, 6),
    [515] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(220),
    [517] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_dictionary_splat_parameter, 3),
    [519] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(222),
    [521] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_parameters_repeat1, 3),
    [523] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_parameters_repeat1, 3),
    [525] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_parameters, 5),
    [527] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_default_parameter, 3),
    [529] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_parameters, 3),
    [531] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_parameters_repeat1, 2),
    [533] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_parameters_repeat1, 2),
    [535] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_list_splat_parameter, 2),
    [537] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(234),
    [539] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(235),
    [541] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_with_item, 1),
    [543] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(232),
    [545] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_with_item, 3),
    [547] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(237),
    [549] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(238),
    [551] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_with_statement, 5),
    [553] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_with_statement, 5),
    [555] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_with_statement, 5),
    [557] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_with_statement_repeat1, 3),
    [559] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_with_statement, 4),
    [561] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_with_statement, 4),
    [563] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_with_statement, 4),
    [565] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_with_statement_repeat1, 2),
    [567] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(244),
    [569] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(268),
    [571] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(247),
    [573] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(248),
    [575] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(259),
    [577] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_try_statement_repeat1, 1),
    [579] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_try_statement_repeat1, 1),
    [581] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_try_statement_repeat1, 1),
    [583] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_try_statement, 4),
    [585] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_try_statement, 4),
    [587] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_try_statement, 4),
    [589] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(252),
    [591] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(247),
    [593] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(248),
    [595] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(257),
    [597] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_try_statement, 5),
    [599] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_try_statement, 5),
    [601] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_try_statement, 5),
    [603] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_try_statement_repeat1, 2),
    [605] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_try_statement_repeat1, 2),
    [607] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_try_statement_repeat1, 2),
    [609] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_try_statement, 6),
    [611] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_try_statement, 6),
    [613] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_try_statement, 6),
    [615] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_else_clause, 3),
    [617] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_else_clause, 3),
    [619] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_else_clause, 3),
    [621] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_finally_clause, 3),
    [623] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_finally_clause, 3),
    [625] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_finally_clause, 3),
    [627] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(262),
    [629] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(263),
    [631] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(265),
    [633] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_except_clause, 6),
    [635] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_except_clause, 6),
    [637] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_except_clause, 6),
    [639] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_except_clause, 4),
    [641] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_except_clause, 4),
    [643] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_except_clause, 4),
    [645] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(270),
    [647] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(272),
    [649] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_while_statement, 4),
    [651] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_while_statement, 4),
    [653] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_while_statement, 4),
    [655] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_while_statement, 5),
    [657] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_while_statement, 5),
    [659] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_while_statement, 5),
    [661] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(276),
    [663] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(278),
    [665] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_for_statement, 6),
    [667] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_for_statement, 6),
    [669] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_for_statement, 6),
    [671] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_for_statement, 7),
    [673] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_for_statement, 7),
    [675] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_for_statement, 7),
    [677] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(282),
    [679] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_if_statement, 4),
    [681] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(284),
    [683] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_if_statement, 4),
    [685] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_if_statement, 4),
    [687] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_if_statement_repeat1, 1),
    [689] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_if_statement_repeat1, 1),
    [691] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_if_statement_repeat1, 1),
    [693] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_if_statement, 5),
    [695] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_if_statement, 5),
    [697] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_if_statement, 5),
    [699] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_if_statement_repeat1, 2),
    [701] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_if_statement_repeat1, 2),
    [703] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_if_statement_repeat1, 2),
    [705] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_if_statement, 6),
    [707] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_if_statement, 6),
    [709] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_if_statement, 6),
    [711] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(291),
    [713] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_elif_clause, 4),
    [715] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_elif_clause, 4),
    [717] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_elif_clause, 4),
    [719] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(296),
    [721] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(299),
    [723] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(301),
    [725] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(306),
    [727] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(307),
    [729] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(318),
    [731] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(311),
    [733] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(306),
    [735] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(307),
    [737] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(316),
    [739] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(321),
    [741] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(322),
    [743] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(324),
    [745] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(328),
    [747] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(332),
    [749] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(334),
    [751] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(338),
    [753] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(340),
    [755] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(347),
    [757] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_delete_statement, 2),
    [759] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(351),
    [761] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(353),
    [763] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_return_statement, 2),
    [765] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_print_statement, 2),
    [767] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_print_statement, 3),
    [769] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(525),
    [771] = {.count = 5, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_parameters_repeat1, 2), REDUCE(aux_sym_call_repeat1, 2), REDUCE(aux_sym_parameters_repeat1, 3), REDUCE(aux_sym_call_repeat1, 3), SHIFT(216),
    [777] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_call_repeat1, 2), REDUCE(aux_sym_call_repeat1, 3), SHIFT(14),
    [781] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(526),
    [783] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(527),
    [785] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_call_repeat1, 2), REDUCE(aux_sym_call_repeat1, 3), SHIFT(59),
    [789] = {.count = 3, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_call_repeat1, 2), REDUCE(aux_sym_call_repeat1, 3), SHIFT(15),
    [793] = {.count = 5, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_parameters_repeat1, 2), REDUCE(aux_sym_call_repeat1, 2), REDUCE(aux_sym_parameters_repeat1, 3), REDUCE(aux_sym_call_repeat1, 3), SHIFT(528),
    [799] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(385),
    [801] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(432),
    [803] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(510),
    [805] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(502),
    [807] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(500),
    [809] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(493),
    [811] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(494),
    [813] = {.count = 5, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_call, 4), REDUCE(sym_call, 5), REDUCE(sym_call, 6), REDUCE(sym_call, 7), REDUCE(sym_call, 8),
    [819] = {.count = 11, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_parameters, 2), REDUCE(sym_parameters, 3), REDUCE(sym_parameters, 4), REDUCE(sym_call, 4), REDUCE(sym_parameters, 5), REDUCE(sym_call, 5), REDUCE(sym_parameters, 6), REDUCE(sym_call, 6), REDUCE(sym_call, 7), REDUCE(sym_call, 8), SHIFT(460),
    [831] = {.count = 7, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_arguments, 3), REDUCE(sym_arguments, 4), REDUCE(sym_call, 4), REDUCE(sym_call, 5), REDUCE(sym_call, 6), REDUCE(sym_call, 7), REDUCE(sym_call, 8),
    [839] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(491),
    [841] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(489),
    [843] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(488),
    [845] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_subscript_repeat1, 2), REDUCE(aux_sym_subscript_repeat1, 3), SHIFT(36),
    [849] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_subscript_repeat1, 2), REDUCE(aux_sym_subscript_repeat1, 3), SHIFT(40),
    [853] = {.count = 7, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_list, 2), REDUCE(sym_list, 3), REDUCE(sym_subscript, 4), REDUCE(sym_list, 4), REDUCE(sym_subscript, 5), REDUCE(sym_list, 5), REDUCE(sym_subscript, 6),
    [861] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__expression, 1), REDUCE(sym_list_splat_parameter, 2), SHIFT(472),
    [865] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__expression, 1), SHIFT(479),
    [868] = {.count = 5, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_dotted_name, 1), REDUCE(sym__expression, 1), REDUCE(aux_sym_dotted_name_repeat1, 2), REDUCE(aux_sym_dotted_name_repeat1, 3), SHIFT(480),
    [874] = {.count = 4, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__expression, 1), REDUCE(sym_list_splat_parameter, 2), REDUCE(sym_dictionary_splat_parameter, 3), SHIFT(469),
    [879] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(375),
    [881] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_dotted_name_repeat1, 2), REDUCE(aux_sym_dotted_name_repeat1, 3), SHIFT(151),
    [885] = {.count = 4, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_dotted_name, 1), REDUCE(sym__expression, 1), REDUCE(aux_sym_dotted_name_repeat1, 2), REDUCE(aux_sym_dotted_name_repeat1, 3),
    [890] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_module, 2), REDUCE(sym__statement, 2), REDUCE(sym__suite, 2),
    [894] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__statement, 2), REDUCE(sym__suite, 2),
    [897] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__statement, 2), REDUCE(sym__suite, 2),
    [900] = {.count = 4, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__statement, 2), REDUCE(sym__suite, 2), REDUCE(sym_decorator, 3), REDUCE(sym_decorator, 4),
    [905] = {.count = 4, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__statement, 2), REDUCE(sym__suite, 2), REDUCE(sym_decorator, 3), REDUCE(sym_decorator, 4),
    [910] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__statement, 2), REDUCE(sym__suite, 2),
    [913] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(423),
    [915] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__suite, 2), REDUCE(sym__suite, 3),
    [918] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__suite, 2), REDUCE(sym__suite, 3),
    [921] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__suite, 2), REDUCE(sym__suite, 3),
    [924] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_module_repeat1, 1), REDUCE(aux_sym_module_repeat1, 2),
    [927] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_module_repeat1, 1), REDUCE(aux_sym_module_repeat1, 2),
    [930] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_module_repeat1, 1), REDUCE(aux_sym_module_repeat1, 2),
    [933] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(478),
    [935] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_if_statement_repeat1, 1), REDUCE(aux_sym_if_statement_repeat1, 2),
    [938] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_if_statement_repeat1, 1), REDUCE(aux_sym_if_statement_repeat1, 2),
    [941] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_if_statement_repeat1, 1), REDUCE(aux_sym_if_statement_repeat1, 2),
    [944] = {.count = 5, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_if_statement, 5), REDUCE(sym_while_statement, 5), REDUCE(sym_try_statement, 5), REDUCE(sym_if_statement, 6), REDUCE(sym_for_statement, 7),
    [950] = {.count = 5, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_if_statement, 5), REDUCE(sym_while_statement, 5), REDUCE(sym_try_statement, 5), REDUCE(sym_if_statement, 6), REDUCE(sym_for_statement, 7),
    [956] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(370),
    [958] = {.count = 5, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_if_statement, 5), REDUCE(sym_while_statement, 5), REDUCE(sym_try_statement, 5), REDUCE(sym_if_statement, 6), REDUCE(sym_for_statement, 7),
    [964] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_try_statement_repeat1, 1), REDUCE(aux_sym_try_statement_repeat1, 2),
    [967] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_try_statement_repeat1, 1), REDUCE(aux_sym_try_statement_repeat1, 2),
    [970] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_try_statement_repeat1, 1), REDUCE(aux_sym_try_statement_repeat1, 2),
    [973] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_try_statement, 4), REDUCE(sym_try_statement, 5), REDUCE(sym_try_statement, 6),
    [977] = {.count = 3, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_try_statement, 4), REDUCE(sym_try_statement, 5), REDUCE(sym_try_statement, 6),
    [981] = {.count = 3, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_try_statement, 4), REDUCE(sym_try_statement, 5), REDUCE(sym_try_statement, 6),
    [985] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_with_statement_repeat1, 2), REDUCE(aux_sym_with_statement_repeat1, 3), SHIFT(234),
    [989] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_with_statement_repeat1, 2), REDUCE(aux_sym_with_statement_repeat1, 3), SHIFT(476),
    [993] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__compound_statement, 1), REDUCE(sym_decorated_definition, 2),
    [996] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__compound_statement, 1), REDUCE(sym_decorated_definition, 2),
    [999] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__compound_statement, 1), REDUCE(sym_decorated_definition, 2),
    [1002] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(474),
    [1004] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(472),
    [1006] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(469),
    [1008] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(468),
    [1010] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(467),
    [1012] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_decorated_definition_repeat1, 1), REDUCE(aux_sym_decorated_definition_repeat1, 2),
    [1015] = {.count = 13, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_else_clause, 3), REDUCE(sym_finally_clause, 3), REDUCE(sym_if_statement, 4), REDUCE(sym_elif_clause, 4), REDUCE(sym_while_statement, 4), REDUCE(sym_except_clause, 4), REDUCE(sym_with_statement, 4), REDUCE(sym_class_definition, 4), REDUCE(sym_with_statement, 5), REDUCE(sym_function_definition, 5), REDUCE(sym_for_statement, 6), REDUCE(sym_except_clause, 6), REDUCE(sym_class_definition, 7),
    [1029] = {.count = 13, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_else_clause, 3), REDUCE(sym_finally_clause, 3), REDUCE(sym_if_statement, 4), REDUCE(sym_elif_clause, 4), REDUCE(sym_while_statement, 4), REDUCE(sym_except_clause, 4), REDUCE(sym_with_statement, 4), REDUCE(sym_class_definition, 4), REDUCE(sym_with_statement, 5), REDUCE(sym_function_definition, 5), REDUCE(sym_for_statement, 6), REDUCE(sym_except_clause, 6), REDUCE(sym_class_definition, 7),
    [1043] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_elif_clause, 4), SHIFT(362),
    [1046] = {.count = 4, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_elif_clause, 4), REDUCE(sym_except_clause, 4), REDUCE(sym_except_clause, 6), SHIFT(363),
    [1051] = {.count = 3, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_except_clause, 4), REDUCE(sym_except_clause, 6), SHIFT(368),
    [1055] = {.count = 4, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_else_clause, 3), REDUCE(sym_except_clause, 4), REDUCE(sym_except_clause, 6), SHIFT(370),
    [1060] = {.count = 13, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_else_clause, 3), REDUCE(sym_finally_clause, 3), REDUCE(sym_if_statement, 4), REDUCE(sym_elif_clause, 4), REDUCE(sym_while_statement, 4), REDUCE(sym_except_clause, 4), REDUCE(sym_with_statement, 4), REDUCE(sym_class_definition, 4), REDUCE(sym_with_statement, 5), REDUCE(sym_function_definition, 5), REDUCE(sym_for_statement, 6), REDUCE(sym_except_clause, 6), REDUCE(sym_class_definition, 7),
    [1074] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(458),
    [1076] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(365),
    [1078] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(459),
    [1080] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_return_statement, 2), REDUCE(sym_delete_statement, 2),
    [1083] = {.count = 13, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_with_item, 1), REDUCE(sym_list_splat_argument, 2), REDUCE(aux_sym_print_statement_repeat1, 2), REDUCE(aux_sym_subscript_repeat1, 2), REDUCE(aux_sym_call_repeat2, 2), REDUCE(sym_with_item, 3), REDUCE(sym_default_parameter, 3), REDUCE_FRAGILE(sym_binary_operator, 3), REDUCE(sym_keyword_argument, 3), REDUCE(aux_sym_print_statement_repeat1, 3), REDUCE(aux_sym_subscript_repeat1, 3), REDUCE(aux_sym_call_repeat2, 3), SHIFT(447),
    [1097] = {.count = 7, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_with_item, 1), REDUCE(sym_expression_list, 1), REDUCE(aux_sym_print_statement_repeat1, 2), REDUCE(sym_with_item, 3), REDUCE_FRAGILE(sym_binary_operator, 3), REDUCE(aux_sym_print_statement_repeat1, 3), SHIFT(448),
    [1105] = {.count = 4, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_expression_list, 1), REDUCE(aux_sym_print_statement_repeat1, 2), REDUCE_FRAGILE(sym_binary_operator, 3), REDUCE(aux_sym_print_statement_repeat1, 3),
    [1110] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE_FRAGILE(sym_binary_operator, 3), SHIFT(369),
    [1113] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE_FRAGILE(sym_binary_operator, 3), SHIFT(29),
    [1116] = {.count = 11, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_expression_list, 1), REDUCE(sym_list_splat_argument, 2), REDUCE(sym_dictionary_splat_argument, 2), REDUCE(aux_sym_print_statement_repeat1, 2), REDUCE(aux_sym_call_repeat2, 2), REDUCE(sym_default_parameter, 3), REDUCE_FRAGILE(sym_binary_operator, 3), REDUCE(sym_keyword_argument, 3), REDUCE(aux_sym_print_statement_repeat1, 3), REDUCE(aux_sym_call_repeat2, 3), SHIFT(449),
    [1128] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE_FRAGILE(sym_binary_operator, 3), SHIFT(379),
    [1131] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE_FRAGILE(sym_binary_operator, 3), SHIFT(31),
    [1134] = {.count = 6, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_print_statement_repeat1, 2), REDUCE(aux_sym_subscript_repeat1, 2), REDUCE_FRAGILE(sym_binary_operator, 3), REDUCE(aux_sym_print_statement_repeat1, 3), REDUCE(aux_sym_subscript_repeat1, 3), SHIFT(450),
    [1141] = {.count = 6, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_expression_statement, 1), REDUCE(sym_expression_list, 1), REDUCE(sym_print_statement, 2), REDUCE(aux_sym_print_statement_repeat1, 2), REDUCE_FRAGILE(sym_binary_operator, 3), REDUCE(aux_sym_print_statement_repeat1, 3),
    [1148] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_call_repeat2, 2), REDUCE(aux_sym_call_repeat2, 3), SHIFT(446),
    [1152] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_call_repeat2, 2), REDUCE(aux_sym_call_repeat2, 3), SHIFT(443),
    [1156] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(442),
    [1158] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(443),
    [1160] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(441),
    [1162] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(360),
    [1164] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(364),
    [1166] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(366),
    [1168] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(367),
    [1170] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(371),
    [1172] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(372),
    [1174] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(377),
    [1176] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(425),
    [1178] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(434),
    [1180] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_expression_list, 2), SHIFT(150),
    [1183] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_expression_list, 2), REDUCE(sym_print_statement, 3),
    [1186] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(362),
    [1188] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(363),
    [1190] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(368),
    [1192] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(420),
    [1194] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(372),
    [1196] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(377),
    [1198] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(415),
    [1200] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(416),
    [1202] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_call, 5), REDUCE(sym_call, 6),
    [1205] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(418),
    [1207] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_call, 7), REDUCE(sym_call, 8),
    [1210] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(436),
    [1212] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE_FRAGILE(sym_binary_operator, 3), SHIFT(436),
    [1215] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(440),
    [1217] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_call, 4), REDUCE(sym_call, 5),
    [1220] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(445),
    [1222] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_call, 6), REDUCE(sym_call, 7),
    [1225] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_call_repeat1, 2), REDUCE(aux_sym_call_repeat1, 3),
    [1228] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_call_repeat1, 2), REDUCE(aux_sym_call_repeat1, 3),
    [1231] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(454),
    [1233] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_arguments, 3), REDUCE(sym_call, 4), REDUCE(sym_call, 5),
    [1237] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_list, 3), REDUCE(sym_subscript, 4),
    [1240] = {.count = 5, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_if_statement, 4), REDUCE(sym_elif_clause, 4), REDUCE(sym_while_statement, 4), REDUCE(sym_except_clause, 4), REDUCE(sym_except_clause, 6),
    [1246] = {.count = 5, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_if_statement, 4), REDUCE(sym_elif_clause, 4), REDUCE(sym_while_statement, 4), REDUCE(sym_except_clause, 4), REDUCE(sym_except_clause, 6),
    [1252] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_except_clause, 4), REDUCE(sym_except_clause, 6),
    [1255] = {.count = 5, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_if_statement, 4), REDUCE(sym_elif_clause, 4), REDUCE(sym_while_statement, 4), REDUCE(sym_except_clause, 4), REDUCE(sym_except_clause, 6),
    [1261] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_if_statement, 5), REDUCE(sym_while_statement, 5),
    [1264] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_if_statement, 5), REDUCE(sym_while_statement, 5),
    [1267] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_if_statement, 5), REDUCE(sym_while_statement, 5),
    [1270] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_list, 4), REDUCE(sym_subscript, 5),
    [1273] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_print_statement_repeat1, 2), REDUCE(aux_sym_subscript_repeat1, 2),
    [1276] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_print_statement_repeat1, 2), SHIFT(456),
    [1279] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(460),
    [1281] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_if_statement, 5), REDUCE(sym_while_statement, 5), REDUCE(sym_for_statement, 7),
    [1285] = {.count = 3, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_if_statement, 5), REDUCE(sym_while_statement, 5), REDUCE(sym_for_statement, 7),
    [1289] = {.count = 3, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_if_statement, 5), REDUCE(sym_while_statement, 5), REDUCE(sym_for_statement, 7),
    [1293] = {.count = 4, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_parameters, 3), REDUCE(sym_parameters, 4), REDUCE(sym_parameters, 5), REDUCE(sym_parameters, 6),
    [1298] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_parameters, 3), REDUCE(sym_parameters, 4),
    [1301] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(471),
    [1303] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_parameters, 5), REDUCE(sym_parameters, 6),
    [1306] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(473),
    [1308] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_parameters_repeat1, 2), REDUCE(aux_sym_parameters_repeat1, 3),
    [1311] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_parameters_repeat1, 2), REDUCE(aux_sym_parameters_repeat1, 3),
    [1314] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_parameters, 4), REDUCE(sym_parameters, 5),
    [1317] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(481),
    [1319] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__expression, 1), SHIFT(228),
    [1322] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__expression, 1), SHIFT(225),
    [1325] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(485),
    [1327] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(450),
    [1329] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_dotted_name_repeat1, 2), REDUCE(aux_sym_dotted_name_repeat1, 3),
    [1332] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(479),
    [1334] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(490),
    [1336] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__expression, 1), REDUCE(sym_list_splat_parameter, 2),
    [1339] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__expression, 1), REDUCE(sym_list_splat_parameter, 2), REDUCE(sym_dictionary_splat_parameter, 3),
    [1343] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_default_parameter, 3), REDUCE(sym_keyword_argument, 3),
    [1346] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(499),
    [1348] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(496),
    [1350] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_expression_list, 1), SHIFT(497),
    [1353] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_call_repeat1, 2), SHIFT(32),
    [1356] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_call_repeat1, 2), SHIFT(34),
    [1359] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_arguments, 3), REDUCE(sym_call, 4),
    [1362] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(476),
    [1364] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_with_item, 3), SHIFT(456),
    [1367] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(506),
    [1369] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(507),
    [1371] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(456),
    [1373] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(368),
    [1375] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(370),
    [1377] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(513),
    [1379] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(519),
    [1381] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(522),
    [1383] = {.count = 4, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_parameters, 4), REDUCE(sym_parameters, 5), REDUCE(sym_call, 5), REDUCE(sym_call, 6),
    [1388] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_subscript_repeat1, 2), REDUCE(aux_sym_subscript_repeat1, 3),
    [1391] = {.count = 4, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_list, 4), REDUCE(sym_subscript, 5), REDUCE(sym_list, 5), REDUCE(sym_subscript, 6),
    [1396] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_with_statement_repeat1, 2), REDUCE(aux_sym_with_statement_repeat1, 3),
    [1399] = {.count = 7, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_with_item, 1), REDUCE(aux_sym_print_statement_repeat1, 2), REDUCE(aux_sym_subscript_repeat1, 2), REDUCE(aux_sym_call_repeat2, 2), REDUCE(aux_sym_print_statement_repeat1, 3), REDUCE(aux_sym_subscript_repeat1, 3), REDUCE(aux_sym_call_repeat2, 3),
    [1407] = {.count = 4, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_with_item, 1), REDUCE(aux_sym_print_statement_repeat1, 2), REDUCE(aux_sym_print_statement_repeat1, 3), SHIFT(456),
    [1412] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_print_statement_repeat1, 2), REDUCE(aux_sym_print_statement_repeat1, 3),
    [1415] = {.count = 4, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_print_statement_repeat1, 2), REDUCE(aux_sym_call_repeat2, 2), REDUCE(aux_sym_print_statement_repeat1, 3), REDUCE(aux_sym_call_repeat2, 3),
    [1420] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(379),
    [1422] = {.count = 4, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_print_statement_repeat1, 2), REDUCE(aux_sym_subscript_repeat1, 2), REDUCE(aux_sym_print_statement_repeat1, 3), REDUCE(aux_sym_subscript_repeat1, 3),
    [1427] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_call_repeat2, 2), REDUCE(aux_sym_call_repeat2, 3),
    [1430] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(533),
    [1432] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_call, 6), REDUCE(sym_call, 7), REDUCE(sym_call, 8),
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
