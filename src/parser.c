#include <tree_sitter/parser.h>

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"

#define STATE_COUNT 621
#define SYMBOL_COUNT 84
#define TOKEN_COUNT 39
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
    sym_number = 33,
    sym_identifier = 34,
    sym_comment = 35,
    sym__newline = 36,
    sym__indent = 37,
    sym__dedent = 38,
    sym_module = 39,
    sym__statement = 40,
    sym__simple_statement = 41,
    sym_print_statement = 42,
    sym_expression_statement = 43,
    sym_return_statement = 44,
    sym_delete_statement = 45,
    sym__compound_statement = 46,
    sym_if_statement = 47,
    sym_elif_clause = 48,
    sym_else_clause = 49,
    sym_for_statement = 50,
    sym_while_statement = 51,
    sym_try_statement = 52,
    sym_except_clause = 53,
    sym_finally_clause = 54,
    sym_with_statement = 55,
    sym_with_item = 56,
    sym_function_definition = 57,
    sym_parameters = 58,
    sym_default_parameter = 59,
    sym_list_splat_parameter = 60,
    sym_dictionary_splat_parameter = 61,
    sym_class_definition = 62,
    sym_decorated_definition = 63,
    sym_decorator = 64,
    sym__suite = 65,
    sym_arguments = 66,
    sym_expression_list = 67,
    sym_dotted_name = 68,
    sym__expression = 69,
    sym_binary_operator = 70,
    sym_subscript = 71,
    sym_call = 72,
    sym_keyword_argument = 73,
    aux_sym_module_repeat1 = 74,
    aux_sym_print_statement_repeat1 = 75,
    aux_sym_if_statement_repeat1 = 76,
    aux_sym_try_statement_repeat1 = 77,
    aux_sym_with_statement_repeat1 = 78,
    aux_sym_parameters_repeat1 = 79,
    aux_sym_decorated_definition_repeat1 = 80,
    aux_sym_dotted_name_repeat1 = 81,
    aux_sym_subscript_repeat1 = 82,
    aux_sym_call_repeat1 = 83,
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
                ADVANCE(7);
            if (lookahead == ',')
                ADVANCE(8);
            if (lookahead == '.')
                ADVANCE(9);
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(12);
            if (lookahead == ':')
                ADVANCE(14);
            if (lookahead == ';')
                ADVANCE(15);
            if (lookahead == '=')
                ADVANCE(16);
            if (lookahead == '@')
                ADVANCE(17);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == 'g') ||
                (lookahead == 'h') ||
                ('j' <= lookahead && lookahead <= 'o') ||
                (lookahead == 'q') ||
                (lookahead == 's') ||
                (lookahead == 'u') ||
                (lookahead == 'v') ||
                ('x' <= lookahead && lookahead <= 'z'))
                ADVANCE(18);
            if (lookahead == '[')
                ADVANCE(19);
            if (lookahead == ']')
                ADVANCE(20);
            if (lookahead == 'a')
                ADVANCE(21);
            if (lookahead == 'b')
                ADVANCE(23);
            if (lookahead == 'c')
                ADVANCE(28);
            if (lookahead == 'd')
                ADVANCE(40);
            if (lookahead == 'e')
                ADVANCE(44);
            if (lookahead == 'f')
                ADVANCE(55);
            if (lookahead == 'i')
                ADVANCE(64);
            if (lookahead == 'p')
                ADVANCE(67);
            if (lookahead == 'r')
                ADVANCE(75);
            if (lookahead == 't')
                ADVANCE(81);
            if (lookahead == 'w')
                ADVANCE(84);
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
            ACCEPT_TOKEN(anon_sym_STAR);
        case 7:
            ACCEPT_TOKEN(anon_sym_PLUS);
        case 8:
            ACCEPT_TOKEN(anon_sym_COMMA);
        case 9:
            if (lookahead == '.')
                ADVANCE(10);
            ACCEPT_TOKEN(anon_sym_DOT);
        case 10:
            if (lookahead == '.')
                ADVANCE(11);
            LEX_ERROR();
        case 11:
            ACCEPT_TOKEN(anon_sym_DOT_DOT_DOT);
        case 12:
            if (lookahead == '.')
                ADVANCE(13);
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(12);
            ACCEPT_TOKEN(sym_number);
        case 13:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(13);
            ACCEPT_TOKEN(sym_number);
        case 14:
            ACCEPT_TOKEN(anon_sym_COLON);
        case 15:
            ACCEPT_TOKEN(anon_sym_SEMI);
        case 16:
            ACCEPT_TOKEN(anon_sym_EQ);
        case 17:
            ACCEPT_TOKEN(anon_sym_AT);
        case 18:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(18);
            ACCEPT_TOKEN(sym_identifier);
        case 19:
            ACCEPT_TOKEN(anon_sym_LBRACK);
        case 20:
            ACCEPT_TOKEN(anon_sym_RBRACK);
        case 21:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'r') ||
                ('t' <= lookahead && lookahead <= 'z'))
                ADVANCE(18);
            if (lookahead == 's')
                ADVANCE(22);
            ACCEPT_TOKEN(sym_identifier);
        case 22:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(18);
            ACCEPT_TOKEN(anon_sym_as);
        case 23:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'q') ||
                ('s' <= lookahead && lookahead <= 'z'))
                ADVANCE(18);
            if (lookahead == 'r')
                ADVANCE(24);
            ACCEPT_TOKEN(sym_identifier);
        case 24:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'z'))
                ADVANCE(18);
            if (lookahead == 'e')
                ADVANCE(25);
            ACCEPT_TOKEN(sym_identifier);
        case 25:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(18);
            if (lookahead == 'a')
                ADVANCE(26);
            ACCEPT_TOKEN(sym_identifier);
        case 26:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'j') ||
                ('l' <= lookahead && lookahead <= 'z'))
                ADVANCE(18);
            if (lookahead == 'k')
                ADVANCE(27);
            ACCEPT_TOKEN(sym_identifier);
        case 27:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(18);
            ACCEPT_TOKEN(sym_break_statement);
        case 28:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'k') ||
                (lookahead == 'm') ||
                (lookahead == 'n') ||
                ('p' <= lookahead && lookahead <= 'z'))
                ADVANCE(18);
            if (lookahead == 'l')
                ADVANCE(29);
            if (lookahead == 'o')
                ADVANCE(33);
            ACCEPT_TOKEN(sym_identifier);
        case 29:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(18);
            if (lookahead == 'a')
                ADVANCE(30);
            ACCEPT_TOKEN(sym_identifier);
        case 30:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'r') ||
                ('t' <= lookahead && lookahead <= 'z'))
                ADVANCE(18);
            if (lookahead == 's')
                ADVANCE(31);
            ACCEPT_TOKEN(sym_identifier);
        case 31:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'r') ||
                ('t' <= lookahead && lookahead <= 'z'))
                ADVANCE(18);
            if (lookahead == 's')
                ADVANCE(32);
            ACCEPT_TOKEN(sym_identifier);
        case 32:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(18);
            ACCEPT_TOKEN(anon_sym_class);
        case 33:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'm') ||
                ('o' <= lookahead && lookahead <= 'z'))
                ADVANCE(18);
            if (lookahead == 'n')
                ADVANCE(34);
            ACCEPT_TOKEN(sym_identifier);
        case 34:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 's') ||
                ('u' <= lookahead && lookahead <= 'z'))
                ADVANCE(18);
            if (lookahead == 't')
                ADVANCE(35);
            ACCEPT_TOKEN(sym_identifier);
        case 35:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'h') ||
                ('j' <= lookahead && lookahead <= 'z'))
                ADVANCE(18);
            if (lookahead == 'i')
                ADVANCE(36);
            ACCEPT_TOKEN(sym_identifier);
        case 36:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'm') ||
                ('o' <= lookahead && lookahead <= 'z'))
                ADVANCE(18);
            if (lookahead == 'n')
                ADVANCE(37);
            ACCEPT_TOKEN(sym_identifier);
        case 37:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 't') ||
                ('v' <= lookahead && lookahead <= 'z'))
                ADVANCE(18);
            if (lookahead == 'u')
                ADVANCE(38);
            ACCEPT_TOKEN(sym_identifier);
        case 38:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'z'))
                ADVANCE(18);
            if (lookahead == 'e')
                ADVANCE(39);
            ACCEPT_TOKEN(sym_identifier);
        case 39:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(18);
            ACCEPT_TOKEN(sym_continue_statement);
        case 40:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'z'))
                ADVANCE(18);
            if (lookahead == 'e')
                ADVANCE(41);
            ACCEPT_TOKEN(sym_identifier);
        case 41:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'e') ||
                ('g' <= lookahead && lookahead <= 'k') ||
                ('m' <= lookahead && lookahead <= 'z'))
                ADVANCE(18);
            if (lookahead == 'f')
                ADVANCE(42);
            if (lookahead == 'l')
                ADVANCE(43);
            ACCEPT_TOKEN(sym_identifier);
        case 42:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(18);
            ACCEPT_TOKEN(anon_sym_def);
        case 43:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(18);
            ACCEPT_TOKEN(anon_sym_del);
        case 44:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'k') ||
                ('m' <= lookahead && lookahead <= 'w') ||
                (lookahead == 'y') ||
                (lookahead == 'z'))
                ADVANCE(18);
            if (lookahead == 'l')
                ADVANCE(45);
            if (lookahead == 'x')
                ADVANCE(50);
            ACCEPT_TOKEN(sym_identifier);
        case 45:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'h') ||
                ('j' <= lookahead && lookahead <= 'r') ||
                ('t' <= lookahead && lookahead <= 'z'))
                ADVANCE(18);
            if (lookahead == 'i')
                ADVANCE(46);
            if (lookahead == 's')
                ADVANCE(48);
            ACCEPT_TOKEN(sym_identifier);
        case 46:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'e') ||
                ('g' <= lookahead && lookahead <= 'z'))
                ADVANCE(18);
            if (lookahead == 'f')
                ADVANCE(47);
            ACCEPT_TOKEN(sym_identifier);
        case 47:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(18);
            ACCEPT_TOKEN(anon_sym_elif);
        case 48:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'z'))
                ADVANCE(18);
            if (lookahead == 'e')
                ADVANCE(49);
            ACCEPT_TOKEN(sym_identifier);
        case 49:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(18);
            ACCEPT_TOKEN(anon_sym_else);
        case 50:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                (lookahead == 'a') ||
                (lookahead == 'b') ||
                ('d' <= lookahead && lookahead <= 'z'))
                ADVANCE(18);
            if (lookahead == 'c')
                ADVANCE(51);
            ACCEPT_TOKEN(sym_identifier);
        case 51:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'z'))
                ADVANCE(18);
            if (lookahead == 'e')
                ADVANCE(52);
            ACCEPT_TOKEN(sym_identifier);
        case 52:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'o') ||
                ('q' <= lookahead && lookahead <= 'z'))
                ADVANCE(18);
            if (lookahead == 'p')
                ADVANCE(53);
            ACCEPT_TOKEN(sym_identifier);
        case 53:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 's') ||
                ('u' <= lookahead && lookahead <= 'z'))
                ADVANCE(18);
            if (lookahead == 't')
                ADVANCE(54);
            ACCEPT_TOKEN(sym_identifier);
        case 54:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(18);
            ACCEPT_TOKEN(anon_sym_except);
        case 55:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'h') ||
                ('j' <= lookahead && lookahead <= 'n') ||
                ('p' <= lookahead && lookahead <= 'z'))
                ADVANCE(18);
            if (lookahead == 'i')
                ADVANCE(56);
            if (lookahead == 'o')
                ADVANCE(62);
            ACCEPT_TOKEN(sym_identifier);
        case 56:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'm') ||
                ('o' <= lookahead && lookahead <= 'z'))
                ADVANCE(18);
            if (lookahead == 'n')
                ADVANCE(57);
            ACCEPT_TOKEN(sym_identifier);
        case 57:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(18);
            if (lookahead == 'a')
                ADVANCE(58);
            ACCEPT_TOKEN(sym_identifier);
        case 58:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'k') ||
                ('m' <= lookahead && lookahead <= 'z'))
                ADVANCE(18);
            if (lookahead == 'l')
                ADVANCE(59);
            ACCEPT_TOKEN(sym_identifier);
        case 59:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'k') ||
                ('m' <= lookahead && lookahead <= 'z'))
                ADVANCE(18);
            if (lookahead == 'l')
                ADVANCE(60);
            ACCEPT_TOKEN(sym_identifier);
        case 60:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'x') ||
                (lookahead == 'z'))
                ADVANCE(18);
            if (lookahead == 'y')
                ADVANCE(61);
            ACCEPT_TOKEN(sym_identifier);
        case 61:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(18);
            ACCEPT_TOKEN(anon_sym_finally);
        case 62:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'q') ||
                ('s' <= lookahead && lookahead <= 'z'))
                ADVANCE(18);
            if (lookahead == 'r')
                ADVANCE(63);
            ACCEPT_TOKEN(sym_identifier);
        case 63:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(18);
            ACCEPT_TOKEN(anon_sym_for);
        case 64:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'e') ||
                ('g' <= lookahead && lookahead <= 'm') ||
                ('o' <= lookahead && lookahead <= 'z'))
                ADVANCE(18);
            if (lookahead == 'f')
                ADVANCE(65);
            if (lookahead == 'n')
                ADVANCE(66);
            ACCEPT_TOKEN(sym_identifier);
        case 65:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(18);
            ACCEPT_TOKEN(anon_sym_if);
        case 66:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(18);
            ACCEPT_TOKEN(anon_sym_in);
        case 67:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('b' <= lookahead && lookahead <= 'q') ||
                ('s' <= lookahead && lookahead <= 'z'))
                ADVANCE(18);
            if (lookahead == 'a')
                ADVANCE(68);
            if (lookahead == 'r')
                ADVANCE(71);
            ACCEPT_TOKEN(sym_identifier);
        case 68:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'r') ||
                ('t' <= lookahead && lookahead <= 'z'))
                ADVANCE(18);
            if (lookahead == 's')
                ADVANCE(69);
            ACCEPT_TOKEN(sym_identifier);
        case 69:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'r') ||
                ('t' <= lookahead && lookahead <= 'z'))
                ADVANCE(18);
            if (lookahead == 's')
                ADVANCE(70);
            ACCEPT_TOKEN(sym_identifier);
        case 70:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(18);
            ACCEPT_TOKEN(sym_pass_statement);
        case 71:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'h') ||
                ('j' <= lookahead && lookahead <= 'z'))
                ADVANCE(18);
            if (lookahead == 'i')
                ADVANCE(72);
            ACCEPT_TOKEN(sym_identifier);
        case 72:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'm') ||
                ('o' <= lookahead && lookahead <= 'z'))
                ADVANCE(18);
            if (lookahead == 'n')
                ADVANCE(73);
            ACCEPT_TOKEN(sym_identifier);
        case 73:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 's') ||
                ('u' <= lookahead && lookahead <= 'z'))
                ADVANCE(18);
            if (lookahead == 't')
                ADVANCE(74);
            ACCEPT_TOKEN(sym_identifier);
        case 74:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(18);
            ACCEPT_TOKEN(anon_sym_print);
        case 75:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'z'))
                ADVANCE(18);
            if (lookahead == 'e')
                ADVANCE(76);
            ACCEPT_TOKEN(sym_identifier);
        case 76:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 's') ||
                ('u' <= lookahead && lookahead <= 'z'))
                ADVANCE(18);
            if (lookahead == 't')
                ADVANCE(77);
            ACCEPT_TOKEN(sym_identifier);
        case 77:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 't') ||
                ('v' <= lookahead && lookahead <= 'z'))
                ADVANCE(18);
            if (lookahead == 'u')
                ADVANCE(78);
            ACCEPT_TOKEN(sym_identifier);
        case 78:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'q') ||
                ('s' <= lookahead && lookahead <= 'z'))
                ADVANCE(18);
            if (lookahead == 'r')
                ADVANCE(79);
            ACCEPT_TOKEN(sym_identifier);
        case 79:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'm') ||
                ('o' <= lookahead && lookahead <= 'z'))
                ADVANCE(18);
            if (lookahead == 'n')
                ADVANCE(80);
            ACCEPT_TOKEN(sym_identifier);
        case 80:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(18);
            ACCEPT_TOKEN(anon_sym_return);
        case 81:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'q') ||
                ('s' <= lookahead && lookahead <= 'z'))
                ADVANCE(18);
            if (lookahead == 'r')
                ADVANCE(82);
            ACCEPT_TOKEN(sym_identifier);
        case 82:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'x') ||
                (lookahead == 'z'))
                ADVANCE(18);
            if (lookahead == 'y')
                ADVANCE(83);
            ACCEPT_TOKEN(sym_identifier);
        case 83:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(18);
            ACCEPT_TOKEN(anon_sym_try);
        case 84:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'g') ||
                ('j' <= lookahead && lookahead <= 'z'))
                ADVANCE(18);
            if (lookahead == 'h')
                ADVANCE(85);
            if (lookahead == 'i')
                ADVANCE(89);
            ACCEPT_TOKEN(sym_identifier);
        case 85:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'h') ||
                ('j' <= lookahead && lookahead <= 'z'))
                ADVANCE(18);
            if (lookahead == 'i')
                ADVANCE(86);
            ACCEPT_TOKEN(sym_identifier);
        case 86:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'k') ||
                ('m' <= lookahead && lookahead <= 'z'))
                ADVANCE(18);
            if (lookahead == 'l')
                ADVANCE(87);
            ACCEPT_TOKEN(sym_identifier);
        case 87:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'z'))
                ADVANCE(18);
            if (lookahead == 'e')
                ADVANCE(88);
            ACCEPT_TOKEN(sym_identifier);
        case 88:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(18);
            ACCEPT_TOKEN(anon_sym_while);
        case 89:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 's') ||
                ('u' <= lookahead && lookahead <= 'z'))
                ADVANCE(18);
            if (lookahead == 't')
                ADVANCE(90);
            ACCEPT_TOKEN(sym_identifier);
        case 90:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'g') ||
                ('i' <= lookahead && lookahead <= 'z'))
                ADVANCE(18);
            if (lookahead == 'h')
                ADVANCE(91);
            ACCEPT_TOKEN(sym_identifier);
        case 91:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(18);
            ACCEPT_TOKEN(anon_sym_with);
        case 92:
            if (lookahead == 0)
                ADVANCE(1);
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(92);
            if (lookahead == '#')
                ADVANCE(2);
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(12);
            if (lookahead == '@')
                ADVANCE(17);
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
                ADVANCE(18);
            if (lookahead == 'b')
                ADVANCE(23);
            if (lookahead == 'c')
                ADVANCE(28);
            if (lookahead == 'd')
                ADVANCE(40);
            if (lookahead == 'f')
                ADVANCE(93);
            if (lookahead == 'i')
                ADVANCE(94);
            if (lookahead == 'p')
                ADVANCE(67);
            if (lookahead == 'r')
                ADVANCE(75);
            if (lookahead == 't')
                ADVANCE(81);
            if (lookahead == 'w')
                ADVANCE(84);
            LEX_ERROR();
        case 93:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'n') ||
                ('p' <= lookahead && lookahead <= 'z'))
                ADVANCE(18);
            if (lookahead == 'o')
                ADVANCE(62);
            ACCEPT_TOKEN(sym_identifier);
        case 94:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'e') ||
                ('g' <= lookahead && lookahead <= 'z'))
                ADVANCE(18);
            if (lookahead == 'f')
                ADVANCE(65);
            ACCEPT_TOKEN(sym_identifier);
        case 95:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(95);
            if (lookahead == '#')
                ADVANCE(2);
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(12);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(18);
            LEX_ERROR();
        case 96:
            if (lookahead == 0)
                ADVANCE(1);
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(96);
            if (lookahead == '#')
                ADVANCE(2);
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(12);
            if (lookahead == ';')
                ADVANCE(15);
            if (lookahead == '@')
                ADVANCE(17);
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
                ADVANCE(18);
            if (lookahead == 'b')
                ADVANCE(23);
            if (lookahead == 'c')
                ADVANCE(28);
            if (lookahead == 'd')
                ADVANCE(40);
            if (lookahead == 'e')
                ADVANCE(44);
            if (lookahead == 'f')
                ADVANCE(55);
            if (lookahead == 'i')
                ADVANCE(94);
            if (lookahead == 'p')
                ADVANCE(67);
            if (lookahead == 'r')
                ADVANCE(75);
            if (lookahead == 't')
                ADVANCE(81);
            if (lookahead == 'w')
                ADVANCE(84);
            LEX_ERROR();
        case 97:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(97);
            if (lookahead == '#')
                ADVANCE(2);
            if (lookahead == ':')
                ADVANCE(14);
            LEX_ERROR();
        case 98:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(98);
            if (lookahead == '#')
                ADVANCE(2);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(18);
            LEX_ERROR();
        case 99:
            if (lookahead == 0)
                ADVANCE(1);
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(99);
            if (lookahead == '#')
                ADVANCE(2);
            if (lookahead == '(')
                ADVANCE(4);
            if (lookahead == '+')
                ADVANCE(7);
            if (lookahead == ',')
                ADVANCE(8);
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(12);
            if (lookahead == ';')
                ADVANCE(15);
            if (lookahead == '@')
                ADVANCE(17);
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
                ADVANCE(18);
            if (lookahead == '[')
                ADVANCE(19);
            if (lookahead == 'b')
                ADVANCE(23);
            if (lookahead == 'c')
                ADVANCE(28);
            if (lookahead == 'd')
                ADVANCE(40);
            if (lookahead == 'e')
                ADVANCE(44);
            if (lookahead == 'f')
                ADVANCE(55);
            if (lookahead == 'i')
                ADVANCE(94);
            if (lookahead == 'p')
                ADVANCE(67);
            if (lookahead == 'r')
                ADVANCE(75);
            if (lookahead == 't')
                ADVANCE(81);
            if (lookahead == 'w')
                ADVANCE(84);
            LEX_ERROR();
        case 100:
            if (lookahead == 0)
                ADVANCE(1);
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(100);
            if (lookahead == '#')
                ADVANCE(2);
            LEX_ERROR();
        case 101:
            if (lookahead == 0)
                ADVANCE(1);
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(101);
            if (lookahead == '#')
                ADVANCE(2);
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(12);
            if (lookahead == ';')
                ADVANCE(15);
            if (lookahead == '@')
                ADVANCE(17);
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
                ADVANCE(18);
            if (lookahead == 'b')
                ADVANCE(23);
            if (lookahead == 'c')
                ADVANCE(28);
            if (lookahead == 'd')
                ADVANCE(40);
            if (lookahead == 'f')
                ADVANCE(93);
            if (lookahead == 'i')
                ADVANCE(94);
            if (lookahead == 'p')
                ADVANCE(67);
            if (lookahead == 'r')
                ADVANCE(75);
            if (lookahead == 't')
                ADVANCE(81);
            if (lookahead == 'w')
                ADVANCE(84);
            LEX_ERROR();
        case 102:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(102);
            if (lookahead == '#')
                ADVANCE(2);
            LEX_ERROR();
        case 103:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(103);
            if (lookahead == '#')
                ADVANCE(2);
            if (lookahead == '@')
                ADVANCE(17);
            if (lookahead == 'c')
                ADVANCE(104);
            if (lookahead == 'd')
                ADVANCE(109);
            LEX_ERROR();
        case 104:
            if (lookahead == 'l')
                ADVANCE(105);
            LEX_ERROR();
        case 105:
            if (lookahead == 'a')
                ADVANCE(106);
            LEX_ERROR();
        case 106:
            if (lookahead == 's')
                ADVANCE(107);
            LEX_ERROR();
        case 107:
            if (lookahead == 's')
                ADVANCE(108);
            LEX_ERROR();
        case 108:
            ACCEPT_TOKEN(anon_sym_class);
        case 109:
            if (lookahead == 'e')
                ADVANCE(110);
            LEX_ERROR();
        case 110:
            if (lookahead == 'f')
                ADVANCE(111);
            LEX_ERROR();
        case 111:
            ACCEPT_TOKEN(anon_sym_def);
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
            if (lookahead == '(')
                ADVANCE(4);
            if (lookahead == '+')
                ADVANCE(7);
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(12);
            if (lookahead == ';')
                ADVANCE(15);
            if (lookahead == '@')
                ADVANCE(17);
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
                ADVANCE(18);
            if (lookahead == '[')
                ADVANCE(19);
            if (lookahead == 'b')
                ADVANCE(23);
            if (lookahead == 'c')
                ADVANCE(28);
            if (lookahead == 'd')
                ADVANCE(40);
            if (lookahead == 'e')
                ADVANCE(44);
            if (lookahead == 'f')
                ADVANCE(55);
            if (lookahead == 'i')
                ADVANCE(94);
            if (lookahead == 'p')
                ADVANCE(67);
            if (lookahead == 'r')
                ADVANCE(75);
            if (lookahead == 't')
                ADVANCE(81);
            if (lookahead == 'w')
                ADVANCE(84);
            LEX_ERROR();
        case 113:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(113);
            if (lookahead == '#')
                ADVANCE(2);
            if (lookahead == '.')
                ADVANCE(114);
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(12);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(18);
            LEX_ERROR();
        case 114:
            if (lookahead == '.')
                ADVANCE(10);
            LEX_ERROR();
        case 115:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(115);
            if (lookahead == '#')
                ADVANCE(2);
            if (lookahead == ',')
                ADVANCE(8);
            if (lookahead == ']')
                ADVANCE(20);
            LEX_ERROR();
        case 116:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(116);
            if (lookahead == '#')
                ADVANCE(2);
            if (lookahead == '(')
                ADVANCE(4);
            if (lookahead == ')')
                ADVANCE(5);
            if (lookahead == '+')
                ADVANCE(7);
            if (lookahead == ',')
                ADVANCE(8);
            if (lookahead == ':')
                ADVANCE(14);
            if (lookahead == '[')
                ADVANCE(19);
            if (lookahead == ']')
                ADVANCE(20);
            if (lookahead == 'a')
                ADVANCE(117);
            if (lookahead == 'e')
                ADVANCE(119);
            if (lookahead == 'f')
                ADVANCE(125);
            if (lookahead == 'i')
                ADVANCE(132);
            LEX_ERROR();
        case 117:
            if (lookahead == 's')
                ADVANCE(118);
            LEX_ERROR();
        case 118:
            ACCEPT_TOKEN(anon_sym_as);
        case 119:
            if (lookahead == 'x')
                ADVANCE(120);
            LEX_ERROR();
        case 120:
            if (lookahead == 'c')
                ADVANCE(121);
            LEX_ERROR();
        case 121:
            if (lookahead == 'e')
                ADVANCE(122);
            LEX_ERROR();
        case 122:
            if (lookahead == 'p')
                ADVANCE(123);
            LEX_ERROR();
        case 123:
            if (lookahead == 't')
                ADVANCE(124);
            LEX_ERROR();
        case 124:
            ACCEPT_TOKEN(anon_sym_except);
        case 125:
            if (lookahead == 'i')
                ADVANCE(126);
            LEX_ERROR();
        case 126:
            if (lookahead == 'n')
                ADVANCE(127);
            LEX_ERROR();
        case 127:
            if (lookahead == 'a')
                ADVANCE(128);
            LEX_ERROR();
        case 128:
            if (lookahead == 'l')
                ADVANCE(129);
            LEX_ERROR();
        case 129:
            if (lookahead == 'l')
                ADVANCE(130);
            LEX_ERROR();
        case 130:
            if (lookahead == 'y')
                ADVANCE(131);
            LEX_ERROR();
        case 131:
            ACCEPT_TOKEN(anon_sym_finally);
        case 132:
            if (lookahead == 'n')
                ADVANCE(133);
            LEX_ERROR();
        case 133:
            ACCEPT_TOKEN(anon_sym_in);
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
            if (lookahead == '+')
                ADVANCE(7);
            if (lookahead == ',')
                ADVANCE(8);
            if (lookahead == '[')
                ADVANCE(19);
            if (lookahead == ']')
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
            if (lookahead == '.')
                ADVANCE(114);
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(12);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(18);
            if (lookahead == ']')
                ADVANCE(20);
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
                ADVANCE(7);
            if (lookahead == ',')
                ADVANCE(8);
            if (lookahead == '=')
                ADVANCE(16);
            if (lookahead == '[')
                ADVANCE(19);
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
            if (lookahead == ')')
                ADVANCE(5);
            if (lookahead == '+')
                ADVANCE(7);
            if (lookahead == ',')
                ADVANCE(8);
            if (lookahead == '[')
                ADVANCE(19);
            LEX_ERROR();
        case 138:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(138);
            if (lookahead == '#')
                ADVANCE(2);
            if (lookahead == ')')
                ADVANCE(5);
            if (lookahead == ',')
                ADVANCE(8);
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
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(12);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(18);
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
            if (lookahead == '.')
                ADVANCE(141);
            LEX_ERROR();
        case 141:
            ACCEPT_TOKEN(anon_sym_DOT);
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
                ADVANCE(7);
            if (lookahead == ',')
                ADVANCE(8);
            if (lookahead == ':')
                ADVANCE(14);
            if (lookahead == '[')
                ADVANCE(19);
            if (lookahead == 'e')
                ADVANCE(119);
            if (lookahead == 'f')
                ADVANCE(125);
            if (lookahead == 'i')
                ADVANCE(132);
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
            if (lookahead == ':')
                ADVANCE(14);
            LEX_ERROR();
        case 145:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(145);
            if (lookahead == '#')
                ADVANCE(2);
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(12);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == 'a') ||
                ('e' <= lookahead && lookahead <= 'o') ||
                (lookahead == 'q') ||
                ('s' <= lookahead && lookahead <= 'z'))
                ADVANCE(18);
            if (lookahead == 'b')
                ADVANCE(23);
            if (lookahead == 'c')
                ADVANCE(146);
            if (lookahead == 'd')
                ADVANCE(147);
            if (lookahead == 'p')
                ADVANCE(67);
            if (lookahead == 'r')
                ADVANCE(75);
            LEX_ERROR();
        case 146:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'n') ||
                ('p' <= lookahead && lookahead <= 'z'))
                ADVANCE(18);
            if (lookahead == 'o')
                ADVANCE(33);
            ACCEPT_TOKEN(sym_identifier);
        case 147:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'z'))
                ADVANCE(18);
            if (lookahead == 'e')
                ADVANCE(148);
            ACCEPT_TOKEN(sym_identifier);
        case 148:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'k') ||
                ('m' <= lookahead && lookahead <= 'z'))
                ADVANCE(18);
            if (lookahead == 'l')
                ADVANCE(43);
            ACCEPT_TOKEN(sym_identifier);
        case 149:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(149);
            if (lookahead == '#')
                ADVANCE(2);
            if (lookahead == ')')
                ADVANCE(5);
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
                ADVANCE(8);
            if (lookahead == ':')
                ADVANCE(14);
            if (lookahead == 'e')
                ADVANCE(119);
            if (lookahead == 'f')
                ADVANCE(125);
            if (lookahead == 'i')
                ADVANCE(132);
            LEX_ERROR();
        case 151:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(151);
            if (lookahead == '#')
                ADVANCE(2);
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(12);
            if (lookahead == '@')
                ADVANCE(17);
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
                ADVANCE(18);
            if (lookahead == 'b')
                ADVANCE(23);
            if (lookahead == 'c')
                ADVANCE(28);
            if (lookahead == 'd')
                ADVANCE(40);
            if (lookahead == 'f')
                ADVANCE(93);
            if (lookahead == 'i')
                ADVANCE(94);
            if (lookahead == 'p')
                ADVANCE(67);
            if (lookahead == 'r')
                ADVANCE(75);
            if (lookahead == 't')
                ADVANCE(81);
            if (lookahead == 'w')
                ADVANCE(84);
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
                ADVANCE(12);
            if (lookahead == '@')
                ADVANCE(17);
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
                ADVANCE(18);
            if (lookahead == 'b')
                ADVANCE(23);
            if (lookahead == 'c')
                ADVANCE(28);
            if (lookahead == 'd')
                ADVANCE(40);
            if (lookahead == 'e')
                ADVANCE(44);
            if (lookahead == 'f')
                ADVANCE(55);
            if (lookahead == 'i')
                ADVANCE(94);
            if (lookahead == 'p')
                ADVANCE(67);
            if (lookahead == 'r')
                ADVANCE(75);
            if (lookahead == 't')
                ADVANCE(81);
            if (lookahead == 'w')
                ADVANCE(84);
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
                ADVANCE(7);
            if (lookahead == ',')
                ADVANCE(8);
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(12);
            if (lookahead == '@')
                ADVANCE(17);
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
                ADVANCE(18);
            if (lookahead == '[')
                ADVANCE(19);
            if (lookahead == 'b')
                ADVANCE(23);
            if (lookahead == 'c')
                ADVANCE(28);
            if (lookahead == 'd')
                ADVANCE(40);
            if (lookahead == 'e')
                ADVANCE(44);
            if (lookahead == 'f')
                ADVANCE(55);
            if (lookahead == 'i')
                ADVANCE(94);
            if (lookahead == 'p')
                ADVANCE(67);
            if (lookahead == 'r')
                ADVANCE(75);
            if (lookahead == 't')
                ADVANCE(81);
            if (lookahead == 'w')
                ADVANCE(84);
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
                ADVANCE(7);
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(12);
            if (lookahead == '@')
                ADVANCE(17);
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
                ADVANCE(18);
            if (lookahead == '[')
                ADVANCE(19);
            if (lookahead == 'b')
                ADVANCE(23);
            if (lookahead == 'c')
                ADVANCE(28);
            if (lookahead == 'd')
                ADVANCE(40);
            if (lookahead == 'e')
                ADVANCE(44);
            if (lookahead == 'f')
                ADVANCE(55);
            if (lookahead == 'i')
                ADVANCE(94);
            if (lookahead == 'p')
                ADVANCE(67);
            if (lookahead == 'r')
                ADVANCE(75);
            if (lookahead == 't')
                ADVANCE(81);
            if (lookahead == 'w')
                ADVANCE(84);
            LEX_ERROR();
        case 155:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(155);
            if (lookahead == '#')
                ADVANCE(2);
            if (lookahead == ',')
                ADVANCE(8);
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(12);
            if (lookahead == '@')
                ADVANCE(17);
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
                ADVANCE(18);
            if (lookahead == 'b')
                ADVANCE(23);
            if (lookahead == 'c')
                ADVANCE(28);
            if (lookahead == 'd')
                ADVANCE(40);
            if (lookahead == 'e')
                ADVANCE(44);
            if (lookahead == 'f')
                ADVANCE(55);
            if (lookahead == 'i')
                ADVANCE(94);
            if (lookahead == 'p')
                ADVANCE(67);
            if (lookahead == 'r')
                ADVANCE(75);
            if (lookahead == 't')
                ADVANCE(81);
            if (lookahead == 'w')
                ADVANCE(84);
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
            if (lookahead == '*')
                ADVANCE(6);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(18);
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
                ADVANCE(6);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(18);
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
                ADVANCE(5);
            if (lookahead == ',')
                ADVANCE(8);
            if (lookahead == '=')
                ADVANCE(16);
            LEX_ERROR();
        case 159:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(159);
            if (lookahead == '#')
                ADVANCE(2);
            if (lookahead == '*')
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
            if (lookahead == ',')
                ADVANCE(8);
            if (lookahead == ':')
                ADVANCE(14);
            LEX_ERROR();
        case 161:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(161);
            if (lookahead == '#')
                ADVANCE(2);
            if (lookahead == '(')
                ADVANCE(4);
            if (lookahead == '+')
                ADVANCE(7);
            if (lookahead == ',')
                ADVANCE(8);
            if (lookahead == ':')
                ADVANCE(14);
            if (lookahead == '[')
                ADVANCE(19);
            if (lookahead == 'a')
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
            if (lookahead == '(')
                ADVANCE(4);
            if (lookahead == '+')
                ADVANCE(7);
            if (lookahead == ',')
                ADVANCE(8);
            if (lookahead == ':')
                ADVANCE(14);
            if (lookahead == '[')
                ADVANCE(19);
            LEX_ERROR();
        case 163:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(163);
            if (lookahead == '#')
                ADVANCE(2);
            if (lookahead == 'e')
                ADVANCE(119);
            if (lookahead == 'f')
                ADVANCE(125);
            LEX_ERROR();
        case 164:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(164);
            if (lookahead == '#')
                ADVANCE(2);
            if (lookahead == '(')
                ADVANCE(4);
            if (lookahead == '+')
                ADVANCE(7);
            if (lookahead == '[')
                ADVANCE(19);
            if (lookahead == 'e')
                ADVANCE(119);
            if (lookahead == 'f')
                ADVANCE(125);
            LEX_ERROR();
        case 165:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(165);
            if (lookahead == '#')
                ADVANCE(2);
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(12);
            if (lookahead == '@')
                ADVANCE(17);
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
                ADVANCE(18);
            if (lookahead == 'b')
                ADVANCE(23);
            if (lookahead == 'c')
                ADVANCE(28);
            if (lookahead == 'd')
                ADVANCE(40);
            if (lookahead == 'e')
                ADVANCE(166);
            if (lookahead == 'f')
                ADVANCE(55);
            if (lookahead == 'i')
                ADVANCE(94);
            if (lookahead == 'p')
                ADVANCE(67);
            if (lookahead == 'r')
                ADVANCE(75);
            if (lookahead == 't')
                ADVANCE(81);
            if (lookahead == 'w')
                ADVANCE(84);
            LEX_ERROR();
        case 166:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'k') ||
                ('m' <= lookahead && lookahead <= 'w') ||
                (lookahead == 'y') ||
                (lookahead == 'z'))
                ADVANCE(18);
            if (lookahead == 'l')
                ADVANCE(167);
            if (lookahead == 'x')
                ADVANCE(50);
            ACCEPT_TOKEN(sym_identifier);
        case 167:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'r') ||
                ('t' <= lookahead && lookahead <= 'z'))
                ADVANCE(18);
            if (lookahead == 's')
                ADVANCE(48);
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
                ADVANCE(12);
            if (lookahead == '@')
                ADVANCE(17);
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
                ADVANCE(18);
            if (lookahead == 'b')
                ADVANCE(23);
            if (lookahead == 'c')
                ADVANCE(28);
            if (lookahead == 'd')
                ADVANCE(40);
            if (lookahead == 'f')
                ADVANCE(55);
            if (lookahead == 'i')
                ADVANCE(94);
            if (lookahead == 'p')
                ADVANCE(67);
            if (lookahead == 'r')
                ADVANCE(75);
            if (lookahead == 't')
                ADVANCE(81);
            if (lookahead == 'w')
                ADVANCE(84);
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
                ADVANCE(7);
            if (lookahead == ':')
                ADVANCE(14);
            if (lookahead == '[')
                ADVANCE(19);
            LEX_ERROR();
        case 170:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(170);
            if (lookahead == '#')
                ADVANCE(2);
            if (lookahead == '(')
                ADVANCE(4);
            if (lookahead == '+')
                ADVANCE(7);
            if (lookahead == ',')
                ADVANCE(8);
            if (lookahead == '[')
                ADVANCE(19);
            if (lookahead == 'e')
                ADVANCE(119);
            if (lookahead == 'f')
                ADVANCE(125);
            LEX_ERROR();
        case 171:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(171);
            if (lookahead == '#')
                ADVANCE(2);
            if (lookahead == ',')
                ADVANCE(8);
            if (lookahead == 'e')
                ADVANCE(119);
            if (lookahead == 'f')
                ADVANCE(125);
            LEX_ERROR();
        case 172:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(172);
            if (lookahead == '#')
                ADVANCE(2);
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(12);
            if (lookahead == '@')
                ADVANCE(17);
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
                ADVANCE(18);
            if (lookahead == 'b')
                ADVANCE(23);
            if (lookahead == 'c')
                ADVANCE(28);
            if (lookahead == 'd')
                ADVANCE(40);
            if (lookahead == 'e')
                ADVANCE(173);
            if (lookahead == 'f')
                ADVANCE(93);
            if (lookahead == 'i')
                ADVANCE(94);
            if (lookahead == 'p')
                ADVANCE(67);
            if (lookahead == 'r')
                ADVANCE(75);
            if (lookahead == 't')
                ADVANCE(81);
            if (lookahead == 'w')
                ADVANCE(84);
            LEX_ERROR();
        case 173:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'k') ||
                ('m' <= lookahead && lookahead <= 'z'))
                ADVANCE(18);
            if (lookahead == 'l')
                ADVANCE(167);
            ACCEPT_TOKEN(sym_identifier);
        case 174:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(174);
            if (lookahead == '#')
                ADVANCE(2);
            if (lookahead == 'i')
                ADVANCE(132);
            LEX_ERROR();
        case 175:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(175);
            if (lookahead == '#')
                ADVANCE(2);
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(12);
            if (lookahead == '@')
                ADVANCE(17);
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
                ADVANCE(18);
            if (lookahead == 'b')
                ADVANCE(23);
            if (lookahead == 'c')
                ADVANCE(28);
            if (lookahead == 'd')
                ADVANCE(40);
            if (lookahead == 'e')
                ADVANCE(176);
            if (lookahead == 'f')
                ADVANCE(93);
            if (lookahead == 'i')
                ADVANCE(94);
            if (lookahead == 'p')
                ADVANCE(67);
            if (lookahead == 'r')
                ADVANCE(75);
            if (lookahead == 't')
                ADVANCE(81);
            if (lookahead == 'w')
                ADVANCE(84);
            LEX_ERROR();
        case 176:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'k') ||
                ('m' <= lookahead && lookahead <= 'z'))
                ADVANCE(18);
            if (lookahead == 'l')
                ADVANCE(45);
            ACCEPT_TOKEN(sym_identifier);
        case 177:
            if (lookahead == 0)
                ADVANCE(1);
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(177);
            if (lookahead == '#')
                ADVANCE(2);
            if (lookahead == ',')
                ADVANCE(8);
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(12);
            if (lookahead == ';')
                ADVANCE(15);
            if (lookahead == '@')
                ADVANCE(17);
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
                ADVANCE(18);
            if (lookahead == 'b')
                ADVANCE(23);
            if (lookahead == 'c')
                ADVANCE(28);
            if (lookahead == 'd')
                ADVANCE(40);
            if (lookahead == 'e')
                ADVANCE(44);
            if (lookahead == 'f')
                ADVANCE(55);
            if (lookahead == 'i')
                ADVANCE(94);
            if (lookahead == 'p')
                ADVANCE(67);
            if (lookahead == 'r')
                ADVANCE(75);
            if (lookahead == 't')
                ADVANCE(81);
            if (lookahead == 'w')
                ADVANCE(84);
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
                ADVANCE(12);
            if (lookahead == ';')
                ADVANCE(15);
            if (lookahead == '@')
                ADVANCE(17);
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
                ADVANCE(18);
            if (lookahead == 'b')
                ADVANCE(23);
            if (lookahead == 'c')
                ADVANCE(28);
            if (lookahead == 'd')
                ADVANCE(40);
            if (lookahead == 'e')
                ADVANCE(166);
            if (lookahead == 'f')
                ADVANCE(55);
            if (lookahead == 'i')
                ADVANCE(94);
            if (lookahead == 'p')
                ADVANCE(67);
            if (lookahead == 'r')
                ADVANCE(75);
            if (lookahead == 't')
                ADVANCE(81);
            if (lookahead == 'w')
                ADVANCE(84);
            LEX_ERROR();
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
                ADVANCE(12);
            if (lookahead == ';')
                ADVANCE(15);
            if (lookahead == '@')
                ADVANCE(17);
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
                ADVANCE(18);
            if (lookahead == 'b')
                ADVANCE(23);
            if (lookahead == 'c')
                ADVANCE(28);
            if (lookahead == 'd')
                ADVANCE(40);
            if (lookahead == 'f')
                ADVANCE(55);
            if (lookahead == 'i')
                ADVANCE(94);
            if (lookahead == 'p')
                ADVANCE(67);
            if (lookahead == 'r')
                ADVANCE(75);
            if (lookahead == 't')
                ADVANCE(81);
            if (lookahead == 'w')
                ADVANCE(84);
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
                ADVANCE(12);
            if (lookahead == ';')
                ADVANCE(15);
            if (lookahead == '@')
                ADVANCE(17);
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
                ADVANCE(18);
            if (lookahead == 'b')
                ADVANCE(23);
            if (lookahead == 'c')
                ADVANCE(28);
            if (lookahead == 'd')
                ADVANCE(40);
            if (lookahead == 'e')
                ADVANCE(173);
            if (lookahead == 'f')
                ADVANCE(93);
            if (lookahead == 'i')
                ADVANCE(94);
            if (lookahead == 'p')
                ADVANCE(67);
            if (lookahead == 'r')
                ADVANCE(75);
            if (lookahead == 't')
                ADVANCE(81);
            if (lookahead == 'w')
                ADVANCE(84);
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
                ADVANCE(12);
            if (lookahead == ';')
                ADVANCE(15);
            if (lookahead == '@')
                ADVANCE(17);
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
                ADVANCE(18);
            if (lookahead == 'b')
                ADVANCE(23);
            if (lookahead == 'c')
                ADVANCE(28);
            if (lookahead == 'd')
                ADVANCE(40);
            if (lookahead == 'e')
                ADVANCE(176);
            if (lookahead == 'f')
                ADVANCE(93);
            if (lookahead == 'i')
                ADVANCE(94);
            if (lookahead == 'p')
                ADVANCE(67);
            if (lookahead == 'r')
                ADVANCE(75);
            if (lookahead == 't')
                ADVANCE(81);
            if (lookahead == 'w')
                ADVANCE(84);
            LEX_ERROR();
        case 182:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(182);
            if (lookahead == '#')
                ADVANCE(2);
            if (lookahead == ')')
                ADVANCE(5);
            if (lookahead == '*')
                ADVANCE(6);
            if (lookahead == '.')
                ADVANCE(114);
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(12);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(18);
            if (lookahead == ']')
                ADVANCE(20);
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
                ADVANCE(5);
            if (lookahead == '*')
                ADVANCE(6);
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(12);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(18);
            LEX_ERROR();
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
            if (lookahead == '(')
                ADVANCE(4);
            if (lookahead == ')')
                ADVANCE(5);
            if (lookahead == '+')
                ADVANCE(7);
            if (lookahead == ',')
                ADVANCE(8);
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(12);
            if (lookahead == ':')
                ADVANCE(14);
            if (lookahead == ';')
                ADVANCE(15);
            if (lookahead == '@')
                ADVANCE(17);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == 'g') ||
                (lookahead == 'h') ||
                ('j' <= lookahead && lookahead <= 'o') ||
                (lookahead == 'q') ||
                (lookahead == 's') ||
                (lookahead == 'u') ||
                (lookahead == 'v') ||
                ('x' <= lookahead && lookahead <= 'z'))
                ADVANCE(18);
            if (lookahead == '[')
                ADVANCE(19);
            if (lookahead == ']')
                ADVANCE(20);
            if (lookahead == 'a')
                ADVANCE(21);
            if (lookahead == 'b')
                ADVANCE(23);
            if (lookahead == 'c')
                ADVANCE(28);
            if (lookahead == 'd')
                ADVANCE(40);
            if (lookahead == 'e')
                ADVANCE(44);
            if (lookahead == 'f')
                ADVANCE(55);
            if (lookahead == 'i')
                ADVANCE(64);
            if (lookahead == 'p')
                ADVANCE(67);
            if (lookahead == 'r')
                ADVANCE(75);
            if (lookahead == 't')
                ADVANCE(81);
            if (lookahead == 'w')
                ADVANCE(84);
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
            if (lookahead == '(')
                ADVANCE(4);
            if (lookahead == ')')
                ADVANCE(5);
            if (lookahead == '+')
                ADVANCE(7);
            if (lookahead == ',')
                ADVANCE(8);
            if (lookahead == '.')
                ADVANCE(141);
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(12);
            if (lookahead == ':')
                ADVANCE(14);
            if (lookahead == ';')
                ADVANCE(15);
            if (lookahead == '=')
                ADVANCE(16);
            if (lookahead == '@')
                ADVANCE(17);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == 'g') ||
                (lookahead == 'h') ||
                ('j' <= lookahead && lookahead <= 'o') ||
                (lookahead == 'q') ||
                (lookahead == 's') ||
                (lookahead == 'u') ||
                (lookahead == 'v') ||
                ('x' <= lookahead && lookahead <= 'z'))
                ADVANCE(18);
            if (lookahead == '[')
                ADVANCE(19);
            if (lookahead == ']')
                ADVANCE(20);
            if (lookahead == 'a')
                ADVANCE(21);
            if (lookahead == 'b')
                ADVANCE(23);
            if (lookahead == 'c')
                ADVANCE(28);
            if (lookahead == 'd')
                ADVANCE(40);
            if (lookahead == 'e')
                ADVANCE(44);
            if (lookahead == 'f')
                ADVANCE(55);
            if (lookahead == 'i')
                ADVANCE(64);
            if (lookahead == 'p')
                ADVANCE(67);
            if (lookahead == 'r')
                ADVANCE(75);
            if (lookahead == 't')
                ADVANCE(81);
            if (lookahead == 'w')
                ADVANCE(84);
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
            if (lookahead == ')')
                ADVANCE(5);
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(12);
            if (lookahead == ':')
                ADVANCE(14);
            if (lookahead == ';')
                ADVANCE(15);
            if (lookahead == '@')
                ADVANCE(17);
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
                ADVANCE(18);
            if (lookahead == 'b')
                ADVANCE(23);
            if (lookahead == 'c')
                ADVANCE(28);
            if (lookahead == 'd')
                ADVANCE(40);
            if (lookahead == 'e')
                ADVANCE(44);
            if (lookahead == 'f')
                ADVANCE(55);
            if (lookahead == 'i')
                ADVANCE(64);
            if (lookahead == 'p')
                ADVANCE(67);
            if (lookahead == 'r')
                ADVANCE(75);
            if (lookahead == 't')
                ADVANCE(81);
            if (lookahead == 'w')
                ADVANCE(84);
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
            if (lookahead == ')')
                ADVANCE(5);
            if (lookahead == ',')
                ADVANCE(8);
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(12);
            if (lookahead == ':')
                ADVANCE(14);
            if (lookahead == ';')
                ADVANCE(15);
            if (lookahead == '@')
                ADVANCE(17);
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
                ADVANCE(18);
            if (lookahead == 'b')
                ADVANCE(23);
            if (lookahead == 'c')
                ADVANCE(28);
            if (lookahead == 'd')
                ADVANCE(40);
            if (lookahead == 'e')
                ADVANCE(44);
            if (lookahead == 'f')
                ADVANCE(55);
            if (lookahead == 'i')
                ADVANCE(64);
            if (lookahead == 'p')
                ADVANCE(67);
            if (lookahead == 'r')
                ADVANCE(75);
            if (lookahead == 't')
                ADVANCE(81);
            if (lookahead == 'w')
                ADVANCE(84);
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
            if (lookahead == '(')
                ADVANCE(4);
            if (lookahead == '+')
                ADVANCE(7);
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(12);
            if (lookahead == ';')
                ADVANCE(15);
            if (lookahead == '@')
                ADVANCE(17);
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
                ADVANCE(18);
            if (lookahead == '[')
                ADVANCE(19);
            if (lookahead == 'b')
                ADVANCE(23);
            if (lookahead == 'c')
                ADVANCE(28);
            if (lookahead == 'd')
                ADVANCE(40);
            if (lookahead == 'f')
                ADVANCE(93);
            if (lookahead == 'i')
                ADVANCE(94);
            if (lookahead == 'p')
                ADVANCE(67);
            if (lookahead == 'r')
                ADVANCE(75);
            if (lookahead == 't')
                ADVANCE(81);
            if (lookahead == 'w')
                ADVANCE(84);
            LEX_ERROR();
        case 189:
            if (lookahead == 0)
                ADVANCE(1);
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(189);
            if (lookahead == '#')
                ADVANCE(2);
            if (lookahead == '(')
                ADVANCE(4);
            if (lookahead == '+')
                ADVANCE(7);
            if (lookahead == ',')
                ADVANCE(8);
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(12);
            if (lookahead == ';')
                ADVANCE(15);
            if (lookahead == '@')
                ADVANCE(17);
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
                ADVANCE(18);
            if (lookahead == '[')
                ADVANCE(19);
            if (lookahead == 'b')
                ADVANCE(23);
            if (lookahead == 'c')
                ADVANCE(28);
            if (lookahead == 'd')
                ADVANCE(40);
            if (lookahead == 'f')
                ADVANCE(93);
            if (lookahead == 'i')
                ADVANCE(94);
            if (lookahead == 'p')
                ADVANCE(67);
            if (lookahead == 'r')
                ADVANCE(75);
            if (lookahead == 't')
                ADVANCE(81);
            if (lookahead == 'w')
                ADVANCE(84);
            LEX_ERROR();
        case 190:
            if (lookahead == 0)
                ADVANCE(1);
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(190);
            if (lookahead == '#')
                ADVANCE(2);
            if (lookahead == ',')
                ADVANCE(8);
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(12);
            if (lookahead == ';')
                ADVANCE(15);
            if (lookahead == '@')
                ADVANCE(17);
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
                ADVANCE(18);
            if (lookahead == 'b')
                ADVANCE(23);
            if (lookahead == 'c')
                ADVANCE(28);
            if (lookahead == 'd')
                ADVANCE(40);
            if (lookahead == 'f')
                ADVANCE(93);
            if (lookahead == 'i')
                ADVANCE(94);
            if (lookahead == 'p')
                ADVANCE(67);
            if (lookahead == 'r')
                ADVANCE(75);
            if (lookahead == 't')
                ADVANCE(81);
            if (lookahead == 'w')
                ADVANCE(84);
            LEX_ERROR();
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
            if (lookahead == '(')
                ADVANCE(4);
            if (lookahead == ')')
                ADVANCE(5);
            if (lookahead == '+')
                ADVANCE(7);
            if (lookahead == ',')
                ADVANCE(8);
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(12);
            if (lookahead == ':')
                ADVANCE(14);
            if (lookahead == ';')
                ADVANCE(15);
            if (lookahead == '@')
                ADVANCE(17);
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
                ADVANCE(18);
            if (lookahead == '[')
                ADVANCE(19);
            if (lookahead == 'b')
                ADVANCE(23);
            if (lookahead == 'c')
                ADVANCE(28);
            if (lookahead == 'd')
                ADVANCE(40);
            if (lookahead == 'e')
                ADVANCE(44);
            if (lookahead == 'f')
                ADVANCE(55);
            if (lookahead == 'i')
                ADVANCE(64);
            if (lookahead == 'p')
                ADVANCE(67);
            if (lookahead == 'r')
                ADVANCE(75);
            if (lookahead == 't')
                ADVANCE(81);
            if (lookahead == 'w')
                ADVANCE(84);
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
            if (lookahead == '.')
                ADVANCE(114);
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(12);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(18);
            if (lookahead == ']')
                ADVANCE(20);
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
            if (lookahead == '(')
                ADVANCE(4);
            if (lookahead == ')')
                ADVANCE(5);
            if (lookahead == '+')
                ADVANCE(7);
            if (lookahead == ',')
                ADVANCE(8);
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(12);
            if (lookahead == ':')
                ADVANCE(14);
            if (lookahead == ';')
                ADVANCE(15);
            if (lookahead == '=')
                ADVANCE(16);
            if (lookahead == '@')
                ADVANCE(17);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == 'g') ||
                (lookahead == 'h') ||
                ('j' <= lookahead && lookahead <= 'o') ||
                (lookahead == 'q') ||
                (lookahead == 's') ||
                (lookahead == 'u') ||
                (lookahead == 'v') ||
                ('x' <= lookahead && lookahead <= 'z'))
                ADVANCE(18);
            if (lookahead == '[')
                ADVANCE(19);
            if (lookahead == ']')
                ADVANCE(20);
            if (lookahead == 'a')
                ADVANCE(21);
            if (lookahead == 'b')
                ADVANCE(23);
            if (lookahead == 'c')
                ADVANCE(28);
            if (lookahead == 'd')
                ADVANCE(40);
            if (lookahead == 'e')
                ADVANCE(44);
            if (lookahead == 'f')
                ADVANCE(55);
            if (lookahead == 'i')
                ADVANCE(64);
            if (lookahead == 'p')
                ADVANCE(67);
            if (lookahead == 'r')
                ADVANCE(75);
            if (lookahead == 't')
                ADVANCE(81);
            if (lookahead == 'w')
                ADVANCE(84);
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
            if (lookahead == '(')
                ADVANCE(4);
            if (lookahead == ')')
                ADVANCE(5);
            if (lookahead == '+')
                ADVANCE(7);
            if (lookahead == ',')
                ADVANCE(8);
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(12);
            if (lookahead == ':')
                ADVANCE(14);
            if (lookahead == ';')
                ADVANCE(15);
            if (lookahead == '@')
                ADVANCE(17);
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
                ADVANCE(18);
            if (lookahead == '[')
                ADVANCE(19);
            if (lookahead == ']')
                ADVANCE(20);
            if (lookahead == 'b')
                ADVANCE(23);
            if (lookahead == 'c')
                ADVANCE(28);
            if (lookahead == 'd')
                ADVANCE(40);
            if (lookahead == 'e')
                ADVANCE(44);
            if (lookahead == 'f')
                ADVANCE(55);
            if (lookahead == 'i')
                ADVANCE(64);
            if (lookahead == 'p')
                ADVANCE(67);
            if (lookahead == 'r')
                ADVANCE(75);
            if (lookahead == 't')
                ADVANCE(81);
            if (lookahead == 'w')
                ADVANCE(84);
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
            if (lookahead == '(')
                ADVANCE(4);
            if (lookahead == '+')
                ADVANCE(7);
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(12);
            if (lookahead == ';')
                ADVANCE(15);
            if (lookahead == '@')
                ADVANCE(17);
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
                ADVANCE(18);
            if (lookahead == '[')
                ADVANCE(19);
            if (lookahead == 'b')
                ADVANCE(23);
            if (lookahead == 'c')
                ADVANCE(28);
            if (lookahead == 'd')
                ADVANCE(40);
            if (lookahead == 'e')
                ADVANCE(166);
            if (lookahead == 'f')
                ADVANCE(55);
            if (lookahead == 'i')
                ADVANCE(94);
            if (lookahead == 'p')
                ADVANCE(67);
            if (lookahead == 'r')
                ADVANCE(75);
            if (lookahead == 't')
                ADVANCE(81);
            if (lookahead == 'w')
                ADVANCE(84);
            LEX_ERROR();
        case 196:
            if (lookahead == 0)
                ADVANCE(1);
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(196);
            if (lookahead == '#')
                ADVANCE(2);
            if (lookahead == '(')
                ADVANCE(4);
            if (lookahead == '+')
                ADVANCE(7);
            if (lookahead == ',')
                ADVANCE(8);
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(12);
            if (lookahead == ';')
                ADVANCE(15);
            if (lookahead == '@')
                ADVANCE(17);
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
                ADVANCE(18);
            if (lookahead == '[')
                ADVANCE(19);
            if (lookahead == 'b')
                ADVANCE(23);
            if (lookahead == 'c')
                ADVANCE(28);
            if (lookahead == 'd')
                ADVANCE(40);
            if (lookahead == 'e')
                ADVANCE(166);
            if (lookahead == 'f')
                ADVANCE(55);
            if (lookahead == 'i')
                ADVANCE(94);
            if (lookahead == 'p')
                ADVANCE(67);
            if (lookahead == 'r')
                ADVANCE(75);
            if (lookahead == 't')
                ADVANCE(81);
            if (lookahead == 'w')
                ADVANCE(84);
            LEX_ERROR();
        case 197:
            if (lookahead == 0)
                ADVANCE(1);
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(197);
            if (lookahead == '#')
                ADVANCE(2);
            if (lookahead == ',')
                ADVANCE(8);
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(12);
            if (lookahead == ';')
                ADVANCE(15);
            if (lookahead == '@')
                ADVANCE(17);
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
                ADVANCE(18);
            if (lookahead == 'b')
                ADVANCE(23);
            if (lookahead == 'c')
                ADVANCE(28);
            if (lookahead == 'd')
                ADVANCE(40);
            if (lookahead == 'e')
                ADVANCE(166);
            if (lookahead == 'f')
                ADVANCE(55);
            if (lookahead == 'i')
                ADVANCE(94);
            if (lookahead == 'p')
                ADVANCE(67);
            if (lookahead == 'r')
                ADVANCE(75);
            if (lookahead == 't')
                ADVANCE(81);
            if (lookahead == 'w')
                ADVANCE(84);
            LEX_ERROR();
        case 198:
            if (lookahead == 0)
                ADVANCE(1);
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(198);
            if (lookahead == '#')
                ADVANCE(2);
            if (lookahead == '(')
                ADVANCE(4);
            if (lookahead == '+')
                ADVANCE(7);
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(12);
            if (lookahead == ';')
                ADVANCE(15);
            if (lookahead == '@')
                ADVANCE(17);
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
                ADVANCE(18);
            if (lookahead == '[')
                ADVANCE(19);
            if (lookahead == 'b')
                ADVANCE(23);
            if (lookahead == 'c')
                ADVANCE(28);
            if (lookahead == 'd')
                ADVANCE(40);
            if (lookahead == 'e')
                ADVANCE(173);
            if (lookahead == 'f')
                ADVANCE(93);
            if (lookahead == 'i')
                ADVANCE(94);
            if (lookahead == 'p')
                ADVANCE(67);
            if (lookahead == 'r')
                ADVANCE(75);
            if (lookahead == 't')
                ADVANCE(81);
            if (lookahead == 'w')
                ADVANCE(84);
            LEX_ERROR();
        case 199:
            if (lookahead == 0)
                ADVANCE(1);
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(199);
            if (lookahead == '#')
                ADVANCE(2);
            if (lookahead == '(')
                ADVANCE(4);
            if (lookahead == '+')
                ADVANCE(7);
            if (lookahead == ',')
                ADVANCE(8);
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(12);
            if (lookahead == ';')
                ADVANCE(15);
            if (lookahead == '@')
                ADVANCE(17);
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
                ADVANCE(18);
            if (lookahead == '[')
                ADVANCE(19);
            if (lookahead == 'b')
                ADVANCE(23);
            if (lookahead == 'c')
                ADVANCE(28);
            if (lookahead == 'd')
                ADVANCE(40);
            if (lookahead == 'e')
                ADVANCE(173);
            if (lookahead == 'f')
                ADVANCE(93);
            if (lookahead == 'i')
                ADVANCE(94);
            if (lookahead == 'p')
                ADVANCE(67);
            if (lookahead == 'r')
                ADVANCE(75);
            if (lookahead == 't')
                ADVANCE(81);
            if (lookahead == 'w')
                ADVANCE(84);
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
            if (lookahead == ',')
                ADVANCE(8);
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(12);
            if (lookahead == ';')
                ADVANCE(15);
            if (lookahead == '@')
                ADVANCE(17);
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
                ADVANCE(18);
            if (lookahead == 'b')
                ADVANCE(23);
            if (lookahead == 'c')
                ADVANCE(28);
            if (lookahead == 'd')
                ADVANCE(40);
            if (lookahead == 'e')
                ADVANCE(173);
            if (lookahead == 'f')
                ADVANCE(93);
            if (lookahead == 'i')
                ADVANCE(94);
            if (lookahead == 'p')
                ADVANCE(67);
            if (lookahead == 'r')
                ADVANCE(75);
            if (lookahead == 't')
                ADVANCE(81);
            if (lookahead == 'w')
                ADVANCE(84);
            LEX_ERROR();
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
            if (lookahead == '(')
                ADVANCE(4);
            if (lookahead == '+')
                ADVANCE(7);
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(12);
            if (lookahead == ';')
                ADVANCE(15);
            if (lookahead == '@')
                ADVANCE(17);
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
                ADVANCE(18);
            if (lookahead == '[')
                ADVANCE(19);
            if (lookahead == 'b')
                ADVANCE(23);
            if (lookahead == 'c')
                ADVANCE(28);
            if (lookahead == 'd')
                ADVANCE(40);
            if (lookahead == 'f')
                ADVANCE(55);
            if (lookahead == 'i')
                ADVANCE(94);
            if (lookahead == 'p')
                ADVANCE(67);
            if (lookahead == 'r')
                ADVANCE(75);
            if (lookahead == 't')
                ADVANCE(81);
            if (lookahead == 'w')
                ADVANCE(84);
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
            if (lookahead == '(')
                ADVANCE(4);
            if (lookahead == '+')
                ADVANCE(7);
            if (lookahead == ',')
                ADVANCE(8);
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(12);
            if (lookahead == ';')
                ADVANCE(15);
            if (lookahead == '@')
                ADVANCE(17);
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
                ADVANCE(18);
            if (lookahead == '[')
                ADVANCE(19);
            if (lookahead == 'b')
                ADVANCE(23);
            if (lookahead == 'c')
                ADVANCE(28);
            if (lookahead == 'd')
                ADVANCE(40);
            if (lookahead == 'f')
                ADVANCE(55);
            if (lookahead == 'i')
                ADVANCE(94);
            if (lookahead == 'p')
                ADVANCE(67);
            if (lookahead == 'r')
                ADVANCE(75);
            if (lookahead == 't')
                ADVANCE(81);
            if (lookahead == 'w')
                ADVANCE(84);
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
            if (lookahead == ',')
                ADVANCE(8);
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(12);
            if (lookahead == ';')
                ADVANCE(15);
            if (lookahead == '@')
                ADVANCE(17);
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
                ADVANCE(18);
            if (lookahead == 'b')
                ADVANCE(23);
            if (lookahead == 'c')
                ADVANCE(28);
            if (lookahead == 'd')
                ADVANCE(40);
            if (lookahead == 'f')
                ADVANCE(55);
            if (lookahead == 'i')
                ADVANCE(94);
            if (lookahead == 'p')
                ADVANCE(67);
            if (lookahead == 'r')
                ADVANCE(75);
            if (lookahead == 't')
                ADVANCE(81);
            if (lookahead == 'w')
                ADVANCE(84);
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
            if (lookahead == '(')
                ADVANCE(4);
            if (lookahead == '+')
                ADVANCE(7);
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(12);
            if (lookahead == ';')
                ADVANCE(15);
            if (lookahead == '@')
                ADVANCE(17);
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
                ADVANCE(18);
            if (lookahead == '[')
                ADVANCE(19);
            if (lookahead == 'b')
                ADVANCE(23);
            if (lookahead == 'c')
                ADVANCE(28);
            if (lookahead == 'd')
                ADVANCE(40);
            if (lookahead == 'e')
                ADVANCE(176);
            if (lookahead == 'f')
                ADVANCE(93);
            if (lookahead == 'i')
                ADVANCE(94);
            if (lookahead == 'p')
                ADVANCE(67);
            if (lookahead == 'r')
                ADVANCE(75);
            if (lookahead == 't')
                ADVANCE(81);
            if (lookahead == 'w')
                ADVANCE(84);
            LEX_ERROR();
        case 205:
            if (lookahead == 0)
                ADVANCE(1);
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
                ADVANCE(7);
            if (lookahead == ',')
                ADVANCE(8);
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(12);
            if (lookahead == ';')
                ADVANCE(15);
            if (lookahead == '@')
                ADVANCE(17);
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
                ADVANCE(18);
            if (lookahead == '[')
                ADVANCE(19);
            if (lookahead == 'b')
                ADVANCE(23);
            if (lookahead == 'c')
                ADVANCE(28);
            if (lookahead == 'd')
                ADVANCE(40);
            if (lookahead == 'e')
                ADVANCE(176);
            if (lookahead == 'f')
                ADVANCE(93);
            if (lookahead == 'i')
                ADVANCE(94);
            if (lookahead == 'p')
                ADVANCE(67);
            if (lookahead == 'r')
                ADVANCE(75);
            if (lookahead == 't')
                ADVANCE(81);
            if (lookahead == 'w')
                ADVANCE(84);
            LEX_ERROR();
        case 206:
            if (lookahead == 0)
                ADVANCE(1);
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(206);
            if (lookahead == '#')
                ADVANCE(2);
            if (lookahead == ',')
                ADVANCE(8);
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(12);
            if (lookahead == ';')
                ADVANCE(15);
            if (lookahead == '@')
                ADVANCE(17);
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
                ADVANCE(18);
            if (lookahead == 'b')
                ADVANCE(23);
            if (lookahead == 'c')
                ADVANCE(28);
            if (lookahead == 'd')
                ADVANCE(40);
            if (lookahead == 'e')
                ADVANCE(176);
            if (lookahead == 'f')
                ADVANCE(93);
            if (lookahead == 'i')
                ADVANCE(94);
            if (lookahead == 'p')
                ADVANCE(67);
            if (lookahead == 'r')
                ADVANCE(75);
            if (lookahead == 't')
                ADVANCE(81);
            if (lookahead == 'w')
                ADVANCE(84);
            LEX_ERROR();
        default:
            LEX_ERROR();
    }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
    [0] = {.lex_state = 0, .external_tokens = 1},
    [1] = {.lex_state = 92},
    [2] = {.lex_state = 95},
    [3] = {.lex_state = 95},
    [4] = {.lex_state = 95},
    [5] = {.lex_state = 96, .external_tokens = 2},
    [6] = {.lex_state = 95},
    [7] = {.lex_state = 95},
    [8] = {.lex_state = 95},
    [9] = {.lex_state = 97},
    [10] = {.lex_state = 95},
    [11] = {.lex_state = 98},
    [12] = {.lex_state = 98},
    [13] = {.lex_state = 98},
    [14] = {.lex_state = 99, .external_tokens = 2},
    [15] = {.lex_state = 100},
    [16] = {.lex_state = 101, .external_tokens = 2},
    [17] = {.lex_state = 102, .external_tokens = 2},
    [18] = {.lex_state = 101, .external_tokens = 2},
    [19] = {.lex_state = 101, .external_tokens = 2},
    [20] = {.lex_state = 103},
    [21] = {.lex_state = 112, .external_tokens = 2},
    [22] = {.lex_state = 101, .external_tokens = 2},
    [23] = {.lex_state = 103},
    [24] = {.lex_state = 101, .external_tokens = 2},
    [25] = {.lex_state = 103},
    [26] = {.lex_state = 100},
    [27] = {.lex_state = 101, .external_tokens = 2},
    [28] = {.lex_state = 95},
    [29] = {.lex_state = 95},
    [30] = {.lex_state = 113},
    [31] = {.lex_state = 115},
    [32] = {.lex_state = 116},
    [33] = {.lex_state = 134},
    [34] = {.lex_state = 135},
    [35] = {.lex_state = 95},
    [36] = {.lex_state = 95},
    [37] = {.lex_state = 113},
    [38] = {.lex_state = 99, .external_tokens = 2},
    [39] = {.lex_state = 115},
    [40] = {.lex_state = 135},
    [41] = {.lex_state = 99, .external_tokens = 2},
    [42] = {.lex_state = 115},
    [43] = {.lex_state = 99, .external_tokens = 2},
    [44] = {.lex_state = 134},
    [45] = {.lex_state = 115},
    [46] = {.lex_state = 134},
    [47] = {.lex_state = 135},
    [48] = {.lex_state = 116},
    [49] = {.lex_state = 115},
    [50] = {.lex_state = 135},
    [51] = {.lex_state = 116},
    [52] = {.lex_state = 116},
    [53] = {.lex_state = 115},
    [54] = {.lex_state = 134},
    [55] = {.lex_state = 116},
    [56] = {.lex_state = 136},
    [57] = {.lex_state = 137},
    [58] = {.lex_state = 138},
    [59] = {.lex_state = 139},
    [60] = {.lex_state = 116},
    [61] = {.lex_state = 138},
    [62] = {.lex_state = 139},
    [63] = {.lex_state = 116},
    [64] = {.lex_state = 116},
    [65] = {.lex_state = 137},
    [66] = {.lex_state = 138},
    [67] = {.lex_state = 137},
    [68] = {.lex_state = 138},
    [69] = {.lex_state = 95},
    [70] = {.lex_state = 137},
    [71] = {.lex_state = 99, .external_tokens = 2},
    [72] = {.lex_state = 137},
    [73] = {.lex_state = 138},
    [74] = {.lex_state = 139},
    [75] = {.lex_state = 99, .external_tokens = 2},
    [76] = {.lex_state = 138},
    [77] = {.lex_state = 139},
    [78] = {.lex_state = 99, .external_tokens = 2},
    [79] = {.lex_state = 99, .external_tokens = 2},
    [80] = {.lex_state = 101, .external_tokens = 2},
    [81] = {.lex_state = 140, .external_tokens = 2},
    [82] = {.lex_state = 142, .external_tokens = 2},
    [83] = {.lex_state = 95},
    [84] = {.lex_state = 103},
    [85] = {.lex_state = 102, .external_tokens = 2},
    [86] = {.lex_state = 103},
    [87] = {.lex_state = 137},
    [88] = {.lex_state = 95},
    [89] = {.lex_state = 102, .external_tokens = 2},
    [90] = {.lex_state = 138},
    [91] = {.lex_state = 95},
    [92] = {.lex_state = 102, .external_tokens = 2},
    [93] = {.lex_state = 143},
    [94] = {.lex_state = 143},
    [95] = {.lex_state = 98},
    [96] = {.lex_state = 140, .external_tokens = 2},
    [97] = {.lex_state = 98},
    [98] = {.lex_state = 140, .external_tokens = 2},
    [99] = {.lex_state = 140, .external_tokens = 2},
    [100] = {.lex_state = 144},
    [101] = {.lex_state = 145, .external_tokens = 3},
    [102] = {.lex_state = 95},
    [103] = {.lex_state = 149},
    [104] = {.lex_state = 143},
    [105] = {.lex_state = 150},
    [106] = {.lex_state = 97},
    [107] = {.lex_state = 145, .external_tokens = 3},
    [108] = {.lex_state = 151, .external_tokens = 4},
    [109] = {.lex_state = 96, .external_tokens = 2},
    [110] = {.lex_state = 101, .external_tokens = 2},
    [111] = {.lex_state = 95},
    [112] = {.lex_state = 95},
    [113] = {.lex_state = 95},
    [114] = {.lex_state = 97},
    [115] = {.lex_state = 95},
    [116] = {.lex_state = 98},
    [117] = {.lex_state = 98},
    [118] = {.lex_state = 96, .external_tokens = 2},
    [119] = {.lex_state = 151, .external_tokens = 4},
    [120] = {.lex_state = 102, .external_tokens = 2},
    [121] = {.lex_state = 151, .external_tokens = 4},
    [122] = {.lex_state = 151, .external_tokens = 4},
    [123] = {.lex_state = 151, .external_tokens = 4},
    [124] = {.lex_state = 103},
    [125] = {.lex_state = 151, .external_tokens = 4},
    [126] = {.lex_state = 96, .external_tokens = 2},
    [127] = {.lex_state = 151, .external_tokens = 4},
    [128] = {.lex_state = 151, .external_tokens = 4},
    [129] = {.lex_state = 144},
    [130] = {.lex_state = 145, .external_tokens = 3},
    [131] = {.lex_state = 95},
    [132] = {.lex_state = 149},
    [133] = {.lex_state = 97},
    [134] = {.lex_state = 145, .external_tokens = 3},
    [135] = {.lex_state = 95},
    [136] = {.lex_state = 95},
    [137] = {.lex_state = 95},
    [138] = {.lex_state = 152, .external_tokens = 4},
    [139] = {.lex_state = 153, .external_tokens = 4},
    [140] = {.lex_state = 151, .external_tokens = 4},
    [141] = {.lex_state = 152, .external_tokens = 4},
    [142] = {.lex_state = 151, .external_tokens = 4},
    [143] = {.lex_state = 154, .external_tokens = 4},
    [144] = {.lex_state = 95},
    [145] = {.lex_state = 95},
    [146] = {.lex_state = 113},
    [147] = {.lex_state = 115},
    [148] = {.lex_state = 134},
    [149] = {.lex_state = 135},
    [150] = {.lex_state = 153, .external_tokens = 4},
    [151] = {.lex_state = 115},
    [152] = {.lex_state = 135},
    [153] = {.lex_state = 153, .external_tokens = 4},
    [154] = {.lex_state = 153, .external_tokens = 4},
    [155] = {.lex_state = 153, .external_tokens = 4},
    [156] = {.lex_state = 137},
    [157] = {.lex_state = 138},
    [158] = {.lex_state = 139},
    [159] = {.lex_state = 153, .external_tokens = 4},
    [160] = {.lex_state = 138},
    [161] = {.lex_state = 139},
    [162] = {.lex_state = 153, .external_tokens = 4},
    [163] = {.lex_state = 153, .external_tokens = 4},
    [164] = {.lex_state = 152, .external_tokens = 4},
    [165] = {.lex_state = 151, .external_tokens = 4},
    [166] = {.lex_state = 152, .external_tokens = 4},
    [167] = {.lex_state = 152, .external_tokens = 4},
    [168] = {.lex_state = 153, .external_tokens = 4},
    [169] = {.lex_state = 95},
    [170] = {.lex_state = 155, .external_tokens = 4},
    [171] = {.lex_state = 95},
    [172] = {.lex_state = 153, .external_tokens = 4},
    [173] = {.lex_state = 153, .external_tokens = 4},
    [174] = {.lex_state = 152, .external_tokens = 4},
    [175] = {.lex_state = 153, .external_tokens = 4},
    [176] = {.lex_state = 155, .external_tokens = 4},
    [177] = {.lex_state = 151, .external_tokens = 4},
    [178] = {.lex_state = 142},
    [179] = {.lex_state = 156},
    [180] = {.lex_state = 97},
    [181] = {.lex_state = 145, .external_tokens = 3},
    [182] = {.lex_state = 151, .external_tokens = 4},
    [183] = {.lex_state = 97},
    [184] = {.lex_state = 157},
    [185] = {.lex_state = 158},
    [186] = {.lex_state = 138},
    [187] = {.lex_state = 138},
    [188] = {.lex_state = 149},
    [189] = {.lex_state = 157},
    [190] = {.lex_state = 158},
    [191] = {.lex_state = 138},
    [192] = {.lex_state = 138},
    [193] = {.lex_state = 149},
    [194] = {.lex_state = 97},
    [195] = {.lex_state = 159},
    [196] = {.lex_state = 159},
    [197] = {.lex_state = 149},
    [198] = {.lex_state = 97},
    [199] = {.lex_state = 98},
    [200] = {.lex_state = 149},
    [201] = {.lex_state = 156},
    [202] = {.lex_state = 97},
    [203] = {.lex_state = 95},
    [204] = {.lex_state = 137},
    [205] = {.lex_state = 97},
    [206] = {.lex_state = 159},
    [207] = {.lex_state = 149},
    [208] = {.lex_state = 156},
    [209] = {.lex_state = 138},
    [210] = {.lex_state = 160},
    [211] = {.lex_state = 161},
    [212] = {.lex_state = 95},
    [213] = {.lex_state = 162},
    [214] = {.lex_state = 95},
    [215] = {.lex_state = 145, .external_tokens = 3},
    [216] = {.lex_state = 160},
    [217] = {.lex_state = 95},
    [218] = {.lex_state = 145, .external_tokens = 3},
    [219] = {.lex_state = 151, .external_tokens = 4},
    [220] = {.lex_state = 160},
    [221] = {.lex_state = 151, .external_tokens = 4},
    [222] = {.lex_state = 160},
    [223] = {.lex_state = 145, .external_tokens = 3},
    [224] = {.lex_state = 95},
    [225] = {.lex_state = 95},
    [226] = {.lex_state = 95},
    [227] = {.lex_state = 163},
    [228] = {.lex_state = 151, .external_tokens = 4},
    [229] = {.lex_state = 163},
    [230] = {.lex_state = 163},
    [231] = {.lex_state = 164},
    [232] = {.lex_state = 95},
    [233] = {.lex_state = 97},
    [234] = {.lex_state = 165, .external_tokens = 4},
    [235] = {.lex_state = 151, .external_tokens = 4},
    [236] = {.lex_state = 165, .external_tokens = 4},
    [237] = {.lex_state = 97},
    [238] = {.lex_state = 168, .external_tokens = 4},
    [239] = {.lex_state = 165, .external_tokens = 4},
    [240] = {.lex_state = 151, .external_tokens = 4},
    [241] = {.lex_state = 151, .external_tokens = 4},
    [242] = {.lex_state = 145, .external_tokens = 3},
    [243] = {.lex_state = 168, .external_tokens = 4},
    [244] = {.lex_state = 145, .external_tokens = 3},
    [245] = {.lex_state = 151, .external_tokens = 4},
    [246] = {.lex_state = 161},
    [247] = {.lex_state = 95},
    [248] = {.lex_state = 145, .external_tokens = 3},
    [249] = {.lex_state = 169},
    [250] = {.lex_state = 145, .external_tokens = 3},
    [251] = {.lex_state = 165, .external_tokens = 4},
    [252] = {.lex_state = 165, .external_tokens = 4},
    [253] = {.lex_state = 163},
    [254] = {.lex_state = 151, .external_tokens = 4},
    [255] = {.lex_state = 163},
    [256] = {.lex_state = 163},
    [257] = {.lex_state = 163},
    [258] = {.lex_state = 170},
    [259] = {.lex_state = 171},
    [260] = {.lex_state = 169},
    [261] = {.lex_state = 145, .external_tokens = 3},
    [262] = {.lex_state = 172, .external_tokens = 4},
    [263] = {.lex_state = 151, .external_tokens = 4},
    [264] = {.lex_state = 174},
    [265] = {.lex_state = 95},
    [266] = {.lex_state = 97},
    [267] = {.lex_state = 145, .external_tokens = 3},
    [268] = {.lex_state = 172, .external_tokens = 4},
    [269] = {.lex_state = 151, .external_tokens = 4},
    [270] = {.lex_state = 169},
    [271] = {.lex_state = 145, .external_tokens = 3},
    [272] = {.lex_state = 175, .external_tokens = 4},
    [273] = {.lex_state = 95},
    [274] = {.lex_state = 175, .external_tokens = 4},
    [275] = {.lex_state = 151, .external_tokens = 4},
    [276] = {.lex_state = 175, .external_tokens = 4},
    [277] = {.lex_state = 175, .external_tokens = 4},
    [278] = {.lex_state = 151, .external_tokens = 4},
    [279] = {.lex_state = 169},
    [280] = {.lex_state = 145, .external_tokens = 3},
    [281] = {.lex_state = 175, .external_tokens = 4},
    [282] = {.lex_state = 96, .external_tokens = 2},
    [283] = {.lex_state = 99, .external_tokens = 2},
    [284] = {.lex_state = 95},
    [285] = {.lex_state = 177, .external_tokens = 2},
    [286] = {.lex_state = 95},
    [287] = {.lex_state = 99, .external_tokens = 2},
    [288] = {.lex_state = 99, .external_tokens = 2},
    [289] = {.lex_state = 96, .external_tokens = 2},
    [290] = {.lex_state = 99, .external_tokens = 2},
    [291] = {.lex_state = 177, .external_tokens = 2},
    [292] = {.lex_state = 101, .external_tokens = 2},
    [293] = {.lex_state = 142},
    [294] = {.lex_state = 97},
    [295] = {.lex_state = 145, .external_tokens = 3},
    [296] = {.lex_state = 101, .external_tokens = 2},
    [297] = {.lex_state = 160},
    [298] = {.lex_state = 145, .external_tokens = 3},
    [299] = {.lex_state = 160},
    [300] = {.lex_state = 145, .external_tokens = 3},
    [301] = {.lex_state = 101, .external_tokens = 2},
    [302] = {.lex_state = 101, .external_tokens = 2},
    [303] = {.lex_state = 145, .external_tokens = 3},
    [304] = {.lex_state = 163},
    [305] = {.lex_state = 95},
    [306] = {.lex_state = 97},
    [307] = {.lex_state = 178, .external_tokens = 2},
    [308] = {.lex_state = 101, .external_tokens = 2},
    [309] = {.lex_state = 178, .external_tokens = 2},
    [310] = {.lex_state = 97},
    [311] = {.lex_state = 179, .external_tokens = 2},
    [312] = {.lex_state = 178, .external_tokens = 2},
    [313] = {.lex_state = 101, .external_tokens = 2},
    [314] = {.lex_state = 101, .external_tokens = 2},
    [315] = {.lex_state = 145, .external_tokens = 3},
    [316] = {.lex_state = 179, .external_tokens = 2},
    [317] = {.lex_state = 145, .external_tokens = 3},
    [318] = {.lex_state = 101, .external_tokens = 2},
    [319] = {.lex_state = 161},
    [320] = {.lex_state = 95},
    [321] = {.lex_state = 145, .external_tokens = 3},
    [322] = {.lex_state = 169},
    [323] = {.lex_state = 145, .external_tokens = 3},
    [324] = {.lex_state = 178, .external_tokens = 2},
    [325] = {.lex_state = 178, .external_tokens = 2},
    [326] = {.lex_state = 169},
    [327] = {.lex_state = 145, .external_tokens = 3},
    [328] = {.lex_state = 180, .external_tokens = 2},
    [329] = {.lex_state = 101, .external_tokens = 2},
    [330] = {.lex_state = 174},
    [331] = {.lex_state = 95},
    [332] = {.lex_state = 97},
    [333] = {.lex_state = 145, .external_tokens = 3},
    [334] = {.lex_state = 180, .external_tokens = 2},
    [335] = {.lex_state = 101, .external_tokens = 2},
    [336] = {.lex_state = 169},
    [337] = {.lex_state = 145, .external_tokens = 3},
    [338] = {.lex_state = 181, .external_tokens = 2},
    [339] = {.lex_state = 95},
    [340] = {.lex_state = 181, .external_tokens = 2},
    [341] = {.lex_state = 101, .external_tokens = 2},
    [342] = {.lex_state = 181, .external_tokens = 2},
    [343] = {.lex_state = 181, .external_tokens = 2},
    [344] = {.lex_state = 101, .external_tokens = 2},
    [345] = {.lex_state = 169},
    [346] = {.lex_state = 145, .external_tokens = 3},
    [347] = {.lex_state = 181, .external_tokens = 2},
    [348] = {.lex_state = 95},
    [349] = {.lex_state = 182},
    [350] = {.lex_state = 95},
    [351] = {.lex_state = 95},
    [352] = {.lex_state = 96, .external_tokens = 5},
    [353] = {.lex_state = 95},
    [354] = {.lex_state = 145, .external_tokens = 3},
    [355] = {.lex_state = 95},
    [356] = {.lex_state = 97},
    [357] = {.lex_state = 95},
    [358] = {.lex_state = 95},
    [359] = {.lex_state = 95},
    [360] = {.lex_state = 97},
    [361] = {.lex_state = 95},
    [362] = {.lex_state = 95},
    [363] = {.lex_state = 97},
    [364] = {.lex_state = 95},
    [365] = {.lex_state = 98},
    [366] = {.lex_state = 183},
    [367] = {.lex_state = 184, .external_tokens = 5},
    [368] = {.lex_state = 95},
    [369] = {.lex_state = 157},
    [370] = {.lex_state = 98},
    [371] = {.lex_state = 98},
    [372] = {.lex_state = 95},
    [373] = {.lex_state = 113},
    [374] = {.lex_state = 115},
    [375] = {.lex_state = 184, .external_tokens = 5},
    [376] = {.lex_state = 184, .external_tokens = 5},
    [377] = {.lex_state = 185, .external_tokens = 5},
    [378] = {.lex_state = 101, .external_tokens = 5},
    [379] = {.lex_state = 151, .external_tokens = 4},
    [380] = {.lex_state = 96, .external_tokens = 5},
    [381] = {.lex_state = 101, .external_tokens = 5},
    [382] = {.lex_state = 96, .external_tokens = 5},
    [383] = {.lex_state = 101, .external_tokens = 5},
    [384] = {.lex_state = 101, .external_tokens = 5},
    [385] = {.lex_state = 181, .external_tokens = 5},
    [386] = {.lex_state = 179, .external_tokens = 5},
    [387] = {.lex_state = 178, .external_tokens = 5},
    [388] = {.lex_state = 101, .external_tokens = 5},
    [389] = {.lex_state = 160},
    [390] = {.lex_state = 101, .external_tokens = 5},
    [391] = {.lex_state = 97},
    [392] = {.lex_state = 138},
    [393] = {.lex_state = 138},
    [394] = {.lex_state = 149},
    [395] = {.lex_state = 103},
    [396] = {.lex_state = 96, .external_tokens = 5},
    [397] = {.lex_state = 186, .external_tokens = 5},
    [398] = {.lex_state = 184, .external_tokens = 5},
    [399] = {.lex_state = 138},
    [400] = {.lex_state = 101, .external_tokens = 5},
    [401] = {.lex_state = 187, .external_tokens = 5},
    [402] = {.lex_state = 181, .external_tokens = 5},
    [403] = {.lex_state = 178, .external_tokens = 5},
    [404] = {.lex_state = 160},
    [405] = {.lex_state = 103},
    [406] = {.lex_state = 115},
    [407] = {.lex_state = 138},
    [408] = {.lex_state = 139},
    [409] = {.lex_state = 184, .external_tokens = 5},
    [410] = {.lex_state = 184, .external_tokens = 5},
    [411] = {.lex_state = 135},
    [412] = {.lex_state = 184, .external_tokens = 5},
    [413] = {.lex_state = 184, .external_tokens = 5},
    [414] = {.lex_state = 101, .external_tokens = 5},
    [415] = {.lex_state = 145, .external_tokens = 3},
    [416] = {.lex_state = 95},
    [417] = {.lex_state = 95},
    [418] = {.lex_state = 95},
    [419] = {.lex_state = 96, .external_tokens = 5},
    [420] = {.lex_state = 101, .external_tokens = 5},
    [421] = {.lex_state = 188, .external_tokens = 5},
    [422] = {.lex_state = 95},
    [423] = {.lex_state = 95},
    [424] = {.lex_state = 115},
    [425] = {.lex_state = 134},
    [426] = {.lex_state = 135},
    [427] = {.lex_state = 184, .external_tokens = 5},
    [428] = {.lex_state = 188, .external_tokens = 5},
    [429] = {.lex_state = 137},
    [430] = {.lex_state = 138},
    [431] = {.lex_state = 139},
    [432] = {.lex_state = 184, .external_tokens = 5},
    [433] = {.lex_state = 96, .external_tokens = 5},
    [434] = {.lex_state = 151, .external_tokens = 4},
    [435] = {.lex_state = 96, .external_tokens = 5},
    [436] = {.lex_state = 96, .external_tokens = 5},
    [437] = {.lex_state = 189, .external_tokens = 5},
    [438] = {.lex_state = 95},
    [439] = {.lex_state = 95},
    [440] = {.lex_state = 190, .external_tokens = 5},
    [441] = {.lex_state = 95},
    [442] = {.lex_state = 189, .external_tokens = 5},
    [443] = {.lex_state = 189, .external_tokens = 5},
    [444] = {.lex_state = 189, .external_tokens = 5},
    [445] = {.lex_state = 96, .external_tokens = 5},
    [446] = {.lex_state = 189, .external_tokens = 5},
    [447] = {.lex_state = 190, .external_tokens = 5},
    [448] = {.lex_state = 179, .external_tokens = 5},
    [449] = {.lex_state = 178, .external_tokens = 5},
    [450] = {.lex_state = 101, .external_tokens = 5},
    [451] = {.lex_state = 101, .external_tokens = 5},
    [452] = {.lex_state = 97},
    [453] = {.lex_state = 181, .external_tokens = 5},
    [454] = {.lex_state = 101, .external_tokens = 5},
    [455] = {.lex_state = 145, .external_tokens = 3},
    [456] = {.lex_state = 179, .external_tokens = 5},
    [457] = {.lex_state = 95},
    [458] = {.lex_state = 191, .external_tokens = 5},
    [459] = {.lex_state = 95},
    [460] = {.lex_state = 191, .external_tokens = 5},
    [461] = {.lex_state = 101, .external_tokens = 5},
    [462] = {.lex_state = 102, .external_tokens = 2},
    [463] = {.lex_state = 101, .external_tokens = 5},
    [464] = {.lex_state = 192},
    [465] = {.lex_state = 145, .external_tokens = 3},
    [466] = {.lex_state = 184, .external_tokens = 5},
    [467] = {.lex_state = 96, .external_tokens = 5},
    [468] = {.lex_state = 112, .external_tokens = 5},
    [469] = {.lex_state = 95},
    [470] = {.lex_state = 112, .external_tokens = 5},
    [471] = {.lex_state = 181, .external_tokens = 5},
    [472] = {.lex_state = 101, .external_tokens = 5},
    [473] = {.lex_state = 193, .external_tokens = 5},
    [474] = {.lex_state = 194, .external_tokens = 5},
    [475] = {.lex_state = 145, .external_tokens = 3},
    [476] = {.lex_state = 95},
    [477] = {.lex_state = 194, .external_tokens = 5},
    [478] = {.lex_state = 95},
    [479] = {.lex_state = 95},
    [480] = {.lex_state = 95},
    [481] = {.lex_state = 178, .external_tokens = 5},
    [482] = {.lex_state = 195, .external_tokens = 5},
    [483] = {.lex_state = 95},
    [484] = {.lex_state = 195, .external_tokens = 5},
    [485] = {.lex_state = 196, .external_tokens = 5},
    [486] = {.lex_state = 95},
    [487] = {.lex_state = 95},
    [488] = {.lex_state = 197, .external_tokens = 5},
    [489] = {.lex_state = 95},
    [490] = {.lex_state = 196, .external_tokens = 5},
    [491] = {.lex_state = 196, .external_tokens = 5},
    [492] = {.lex_state = 196, .external_tokens = 5},
    [493] = {.lex_state = 196, .external_tokens = 5},
    [494] = {.lex_state = 197, .external_tokens = 5},
    [495] = {.lex_state = 145, .external_tokens = 3},
    [496] = {.lex_state = 97},
    [497] = {.lex_state = 145, .external_tokens = 3},
    [498] = {.lex_state = 101, .external_tokens = 5},
    [499] = {.lex_state = 95},
    [500] = {.lex_state = 95},
    [501] = {.lex_state = 95},
    [502] = {.lex_state = 180, .external_tokens = 5},
    [503] = {.lex_state = 198, .external_tokens = 5},
    [504] = {.lex_state = 95},
    [505] = {.lex_state = 198, .external_tokens = 5},
    [506] = {.lex_state = 101, .external_tokens = 5},
    [507] = {.lex_state = 199, .external_tokens = 5},
    [508] = {.lex_state = 95},
    [509] = {.lex_state = 95},
    [510] = {.lex_state = 200, .external_tokens = 5},
    [511] = {.lex_state = 95},
    [512] = {.lex_state = 199, .external_tokens = 5},
    [513] = {.lex_state = 199, .external_tokens = 5},
    [514] = {.lex_state = 199, .external_tokens = 5},
    [515] = {.lex_state = 199, .external_tokens = 5},
    [516] = {.lex_state = 200, .external_tokens = 5},
    [517] = {.lex_state = 101, .external_tokens = 5},
    [518] = {.lex_state = 178, .external_tokens = 5},
    [519] = {.lex_state = 101, .external_tokens = 5},
    [520] = {.lex_state = 97},
    [521] = {.lex_state = 159},
    [522] = {.lex_state = 97},
    [523] = {.lex_state = 149},
    [524] = {.lex_state = 97},
    [525] = {.lex_state = 156},
    [526] = {.lex_state = 97},
    [527] = {.lex_state = 145, .external_tokens = 3},
    [528] = {.lex_state = 101, .external_tokens = 5},
    [529] = {.lex_state = 145, .external_tokens = 3},
    [530] = {.lex_state = 101, .external_tokens = 5},
    [531] = {.lex_state = 145, .external_tokens = 3},
    [532] = {.lex_state = 183},
    [533] = {.lex_state = 136},
    [534] = {.lex_state = 149},
    [535] = {.lex_state = 101, .external_tokens = 5},
    [536] = {.lex_state = 184, .external_tokens = 5},
    [537] = {.lex_state = 140, .external_tokens = 2},
    [538] = {.lex_state = 144},
    [539] = {.lex_state = 95},
    [540] = {.lex_state = 138},
    [541] = {.lex_state = 137},
    [542] = {.lex_state = 136},
    [543] = {.lex_state = 137},
    [544] = {.lex_state = 139},
    [545] = {.lex_state = 138},
    [546] = {.lex_state = 137},
    [547] = {.lex_state = 142},
    [548] = {.lex_state = 160},
    [549] = {.lex_state = 145, .external_tokens = 3},
    [550] = {.lex_state = 101, .external_tokens = 5},
    [551] = {.lex_state = 162},
    [552] = {.lex_state = 161},
    [553] = {.lex_state = 95},
    [554] = {.lex_state = 145, .external_tokens = 3},
    [555] = {.lex_state = 169},
    [556] = {.lex_state = 178, .external_tokens = 5},
    [557] = {.lex_state = 145, .external_tokens = 3},
    [558] = {.lex_state = 163},
    [559] = {.lex_state = 169},
    [560] = {.lex_state = 145, .external_tokens = 3},
    [561] = {.lex_state = 180, .external_tokens = 5},
    [562] = {.lex_state = 101, .external_tokens = 5},
    [563] = {.lex_state = 97},
    [564] = {.lex_state = 174},
    [565] = {.lex_state = 145, .external_tokens = 3},
    [566] = {.lex_state = 95},
    [567] = {.lex_state = 95},
    [568] = {.lex_state = 95},
    [569] = {.lex_state = 201, .external_tokens = 5},
    [570] = {.lex_state = 95},
    [571] = {.lex_state = 201, .external_tokens = 5},
    [572] = {.lex_state = 202, .external_tokens = 5},
    [573] = {.lex_state = 95},
    [574] = {.lex_state = 95},
    [575] = {.lex_state = 203, .external_tokens = 5},
    [576] = {.lex_state = 95},
    [577] = {.lex_state = 202, .external_tokens = 5},
    [578] = {.lex_state = 202, .external_tokens = 5},
    [579] = {.lex_state = 202, .external_tokens = 5},
    [580] = {.lex_state = 202, .external_tokens = 5},
    [581] = {.lex_state = 203, .external_tokens = 5},
    [582] = {.lex_state = 169},
    [583] = {.lex_state = 145, .external_tokens = 3},
    [584] = {.lex_state = 95},
    [585] = {.lex_state = 95},
    [586] = {.lex_state = 95},
    [587] = {.lex_state = 181, .external_tokens = 5},
    [588] = {.lex_state = 204, .external_tokens = 5},
    [589] = {.lex_state = 95},
    [590] = {.lex_state = 204, .external_tokens = 5},
    [591] = {.lex_state = 205, .external_tokens = 5},
    [592] = {.lex_state = 95},
    [593] = {.lex_state = 95},
    [594] = {.lex_state = 206, .external_tokens = 5},
    [595] = {.lex_state = 95},
    [596] = {.lex_state = 205, .external_tokens = 5},
    [597] = {.lex_state = 205, .external_tokens = 5},
    [598] = {.lex_state = 205, .external_tokens = 5},
    [599] = {.lex_state = 205, .external_tokens = 5},
    [600] = {.lex_state = 206, .external_tokens = 5},
    [601] = {.lex_state = 169},
    [602] = {.lex_state = 145, .external_tokens = 3},
    [603] = {.lex_state = 181, .external_tokens = 5},
    [604] = {.lex_state = 101, .external_tokens = 5},
    [605] = {.lex_state = 99, .external_tokens = 5},
    [606] = {.lex_state = 95},
    [607] = {.lex_state = 95},
    [608] = {.lex_state = 177, .external_tokens = 5},
    [609] = {.lex_state = 95},
    [610] = {.lex_state = 99, .external_tokens = 5},
    [611] = {.lex_state = 99, .external_tokens = 5},
    [612] = {.lex_state = 99, .external_tokens = 5},
    [613] = {.lex_state = 184, .external_tokens = 5},
    [614] = {.lex_state = 115},
    [615] = {.lex_state = 184, .external_tokens = 5},
    [616] = {.lex_state = 160},
    [617] = {.lex_state = 184, .external_tokens = 5},
    [618] = {.lex_state = 138},
    [619] = {.lex_state = 99, .external_tokens = 5},
    [620] = {.lex_state = 177, .external_tokens = 5},
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
        [sym_module] = STATE(15),
        [sym__statement] = STATE(381),
        [sym__simple_statement] = STATE(382),
        [sym_print_statement] = STATE(352),
        [sym_expression_statement] = STATE(352),
        [sym_return_statement] = STATE(352),
        [sym_delete_statement] = STATE(352),
        [sym__compound_statement] = STATE(383),
        [sym_if_statement] = STATE(384),
        [sym_elif_clause] = STATE(385),
        [sym_else_clause] = STATE(386),
        [sym_for_statement] = STATE(384),
        [sym_while_statement] = STATE(384),
        [sym_try_statement] = STATE(384),
        [sym_except_clause] = STATE(387),
        [sym_finally_clause] = STATE(388),
        [sym_with_statement] = STATE(384),
        [sym_with_item] = STATE(389),
        [sym_function_definition] = STATE(390),
        [sym_parameters] = STATE(391),
        [sym_default_parameter] = STATE(392),
        [sym_list_splat_parameter] = STATE(393),
        [sym_dictionary_splat_parameter] = STATE(394),
        [sym_class_definition] = STATE(390),
        [sym_decorated_definition] = STATE(384),
        [sym_decorator] = STATE(395),
        [sym__suite] = STATE(396),
        [sym_arguments] = STATE(85),
        [sym_expression_list] = STATE(397),
        [sym_dotted_name] = STATE(82),
        [sym__expression] = STATE(398),
        [sym_binary_operator] = STATE(376),
        [sym_subscript] = STATE(376),
        [sym_call] = STATE(376),
        [sym_keyword_argument] = STATE(399),
        [aux_sym_module_repeat1] = STATE(400),
        [aux_sym_print_statement_repeat1] = STATE(401),
        [aux_sym_if_statement_repeat1] = STATE(402),
        [aux_sym_try_statement_repeat1] = STATE(403),
        [aux_sym_with_statement_repeat1] = STATE(404),
        [aux_sym_parameters_repeat1] = STATE(189),
        [aux_sym_decorated_definition_repeat1] = STATE(405),
        [aux_sym_dotted_name_repeat1] = STATE(96),
        [aux_sym_subscript_repeat1] = STATE(406),
        [aux_sym_call_repeat1] = STATE(407),
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
        [sym_number] = ACTIONS(63),
        [sym_identifier] = ACTIONS(65),
        [sym_comment] = ACTIONS(67),
        [sym__newline] = ACTIONS(69),
        [sym__indent] = ACTIONS(71),
        [sym__dedent] = ACTIONS(73),
    },
    [1] = {
        [sym_module] = STATE(15),
        [sym__statement] = STATE(16),
        [sym__simple_statement] = STATE(17),
        [sym_print_statement] = STATE(5),
        [sym_expression_statement] = STATE(5),
        [sym_return_statement] = STATE(5),
        [sym_delete_statement] = STATE(5),
        [sym__compound_statement] = STATE(18),
        [sym_if_statement] = STATE(19),
        [sym_for_statement] = STATE(19),
        [sym_while_statement] = STATE(19),
        [sym_try_statement] = STATE(19),
        [sym_with_statement] = STATE(19),
        [sym_function_definition] = STATE(19),
        [sym_class_definition] = STATE(19),
        [sym_decorated_definition] = STATE(19),
        [sym_decorator] = STATE(20),
        [sym__expression] = STATE(21),
        [sym_binary_operator] = STATE(14),
        [sym_subscript] = STATE(14),
        [sym_call] = STATE(14),
        [aux_sym_module_repeat1] = STATE(22),
        [aux_sym_decorated_definition_repeat1] = STATE(23),
        [ts_builtin_sym_end] = ACTIONS(75),
        [anon_sym_print] = ACTIONS(77),
        [anon_sym_return] = ACTIONS(79),
        [anon_sym_del] = ACTIONS(81),
        [sym_pass_statement] = ACTIONS(83),
        [sym_break_statement] = ACTIONS(83),
        [sym_continue_statement] = ACTIONS(83),
        [anon_sym_if] = ACTIONS(85),
        [anon_sym_for] = ACTIONS(87),
        [anon_sym_while] = ACTIONS(89),
        [anon_sym_try] = ACTIONS(91),
        [anon_sym_with] = ACTIONS(93),
        [anon_sym_def] = ACTIONS(95),
        [anon_sym_class] = ACTIONS(97),
        [anon_sym_AT] = ACTIONS(99),
        [sym_number] = ACTIONS(101),
        [sym_identifier] = ACTIONS(103),
        [sym_comment] = ACTIONS(67),
    },
    [2] = {
        [sym__expression] = STATE(290),
        [sym_binary_operator] = STATE(14),
        [sym_subscript] = STATE(14),
        [sym_call] = STATE(14),
        [sym_number] = ACTIONS(101),
        [sym_identifier] = ACTIONS(101),
        [sym_comment] = ACTIONS(67),
    },
    [3] = {
        [sym_expression_list] = STATE(289),
        [sym__expression] = STATE(283),
        [sym_binary_operator] = STATE(14),
        [sym_subscript] = STATE(14),
        [sym_call] = STATE(14),
        [sym_number] = ACTIONS(101),
        [sym_identifier] = ACTIONS(101),
        [sym_comment] = ACTIONS(67),
    },
    [4] = {
        [sym_expression_list] = STATE(282),
        [sym__expression] = STATE(283),
        [sym_binary_operator] = STATE(14),
        [sym_subscript] = STATE(14),
        [sym_call] = STATE(14),
        [sym_number] = ACTIONS(101),
        [sym_identifier] = ACTIONS(101),
        [sym_comment] = ACTIONS(67),
    },
    [5] = {
        [ts_builtin_sym_end] = ACTIONS(105),
        [anon_sym_SEMI] = ACTIONS(105),
        [anon_sym_print] = ACTIONS(107),
        [anon_sym_return] = ACTIONS(107),
        [anon_sym_del] = ACTIONS(107),
        [sym_pass_statement] = ACTIONS(107),
        [sym_break_statement] = ACTIONS(107),
        [sym_continue_statement] = ACTIONS(107),
        [anon_sym_if] = ACTIONS(107),
        [anon_sym_elif] = ACTIONS(107),
        [anon_sym_else] = ACTIONS(107),
        [anon_sym_for] = ACTIONS(107),
        [anon_sym_while] = ACTIONS(107),
        [anon_sym_try] = ACTIONS(107),
        [anon_sym_except] = ACTIONS(107),
        [anon_sym_finally] = ACTIONS(107),
        [anon_sym_with] = ACTIONS(107),
        [anon_sym_def] = ACTIONS(107),
        [anon_sym_class] = ACTIONS(107),
        [anon_sym_AT] = ACTIONS(105),
        [sym_number] = ACTIONS(107),
        [sym_identifier] = ACTIONS(109),
        [sym_comment] = ACTIONS(67),
        [sym__newline] = ACTIONS(105),
    },
    [6] = {
        [sym__expression] = STATE(336),
        [sym_binary_operator] = STATE(32),
        [sym_subscript] = STATE(32),
        [sym_call] = STATE(32),
        [sym_number] = ACTIONS(111),
        [sym_identifier] = ACTIONS(111),
        [sym_comment] = ACTIONS(67),
    },
    [7] = {
        [sym_expression_list] = STATE(330),
        [sym__expression] = STATE(104),
        [sym_binary_operator] = STATE(32),
        [sym_subscript] = STATE(32),
        [sym_call] = STATE(32),
        [sym_number] = ACTIONS(111),
        [sym_identifier] = ACTIONS(111),
        [sym_comment] = ACTIONS(67),
    },
    [8] = {
        [sym__expression] = STATE(326),
        [sym_binary_operator] = STATE(32),
        [sym_subscript] = STATE(32),
        [sym_call] = STATE(32),
        [sym_number] = ACTIONS(111),
        [sym_identifier] = ACTIONS(111),
        [sym_comment] = ACTIONS(67),
    },
    [9] = {
        [anon_sym_COLON] = ACTIONS(113),
        [sym_comment] = ACTIONS(67),
    },
    [10] = {
        [sym_with_item] = STATE(297),
        [sym__expression] = STATE(211),
        [sym_binary_operator] = STATE(32),
        [sym_subscript] = STATE(32),
        [sym_call] = STATE(32),
        [sym_number] = ACTIONS(111),
        [sym_identifier] = ACTIONS(111),
        [sym_comment] = ACTIONS(67),
    },
    [11] = {
        [sym_identifier] = ACTIONS(115),
        [sym_comment] = ACTIONS(67),
    },
    [12] = {
        [sym_identifier] = ACTIONS(117),
        [sym_comment] = ACTIONS(67),
    },
    [13] = {
        [sym_dotted_name] = STATE(82),
        [sym_identifier] = ACTIONS(119),
        [sym_comment] = ACTIONS(67),
    },
    [14] = {
        [ts_builtin_sym_end] = ACTIONS(121),
        [anon_sym_SEMI] = ACTIONS(121),
        [anon_sym_print] = ACTIONS(123),
        [anon_sym_COMMA] = ACTIONS(121),
        [anon_sym_return] = ACTIONS(123),
        [anon_sym_del] = ACTIONS(123),
        [sym_pass_statement] = ACTIONS(123),
        [sym_break_statement] = ACTIONS(123),
        [sym_continue_statement] = ACTIONS(123),
        [anon_sym_if] = ACTIONS(123),
        [anon_sym_elif] = ACTIONS(123),
        [anon_sym_else] = ACTIONS(123),
        [anon_sym_for] = ACTIONS(123),
        [anon_sym_while] = ACTIONS(123),
        [anon_sym_try] = ACTIONS(123),
        [anon_sym_except] = ACTIONS(123),
        [anon_sym_finally] = ACTIONS(123),
        [anon_sym_with] = ACTIONS(123),
        [anon_sym_def] = ACTIONS(123),
        [anon_sym_LPAREN] = ACTIONS(121),
        [anon_sym_class] = ACTIONS(123),
        [anon_sym_AT] = ACTIONS(121),
        [anon_sym_PLUS] = ACTIONS(121),
        [anon_sym_LBRACK] = ACTIONS(121),
        [sym_number] = ACTIONS(123),
        [sym_identifier] = ACTIONS(125),
        [sym_comment] = ACTIONS(67),
        [sym__newline] = ACTIONS(121),
    },
    [15] = {
        [ts_builtin_sym_end] = ACTIONS(127),
        [sym_comment] = ACTIONS(67),
    },
    [16] = {
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
        [sym_number] = ACTIONS(131),
        [sym_identifier] = ACTIONS(133),
        [sym_comment] = ACTIONS(67),
        [sym__newline] = ACTIONS(129),
    },
    [17] = {
        [sym_comment] = ACTIONS(67),
        [sym__newline] = ACTIONS(135),
    },
    [18] = {
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
        [sym_number] = ACTIONS(139),
        [sym_identifier] = ACTIONS(141),
        [sym_comment] = ACTIONS(67),
        [sym__newline] = ACTIONS(137),
    },
    [19] = {
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
        [sym_number] = ACTIONS(145),
        [sym_identifier] = ACTIONS(147),
        [sym_comment] = ACTIONS(67),
        [sym__newline] = ACTIONS(143),
    },
    [20] = {
        [anon_sym_def] = ACTIONS(149),
        [anon_sym_class] = ACTIONS(149),
        [anon_sym_AT] = ACTIONS(149),
        [sym_comment] = ACTIONS(67),
    },
    [21] = {
        [ts_builtin_sym_end] = ACTIONS(151),
        [anon_sym_SEMI] = ACTIONS(151),
        [anon_sym_print] = ACTIONS(153),
        [anon_sym_return] = ACTIONS(153),
        [anon_sym_del] = ACTIONS(153),
        [sym_pass_statement] = ACTIONS(153),
        [sym_break_statement] = ACTIONS(153),
        [sym_continue_statement] = ACTIONS(153),
        [anon_sym_if] = ACTIONS(153),
        [anon_sym_elif] = ACTIONS(153),
        [anon_sym_else] = ACTIONS(153),
        [anon_sym_for] = ACTIONS(153),
        [anon_sym_while] = ACTIONS(153),
        [anon_sym_try] = ACTIONS(153),
        [anon_sym_except] = ACTIONS(153),
        [anon_sym_finally] = ACTIONS(153),
        [anon_sym_with] = ACTIONS(153),
        [anon_sym_def] = ACTIONS(153),
        [anon_sym_LPAREN] = ACTIONS(155),
        [anon_sym_class] = ACTIONS(153),
        [anon_sym_AT] = ACTIONS(151),
        [anon_sym_PLUS] = ACTIONS(157),
        [anon_sym_LBRACK] = ACTIONS(159),
        [sym_number] = ACTIONS(153),
        [sym_identifier] = ACTIONS(161),
        [sym_comment] = ACTIONS(67),
        [sym__newline] = ACTIONS(151),
    },
    [22] = {
        [sym__statement] = STATE(27),
        [sym__simple_statement] = STATE(17),
        [sym_print_statement] = STATE(5),
        [sym_expression_statement] = STATE(5),
        [sym_return_statement] = STATE(5),
        [sym_delete_statement] = STATE(5),
        [sym__compound_statement] = STATE(18),
        [sym_if_statement] = STATE(19),
        [sym_for_statement] = STATE(19),
        [sym_while_statement] = STATE(19),
        [sym_try_statement] = STATE(19),
        [sym_with_statement] = STATE(19),
        [sym_function_definition] = STATE(19),
        [sym_class_definition] = STATE(19),
        [sym_decorated_definition] = STATE(19),
        [sym_decorator] = STATE(20),
        [sym__expression] = STATE(21),
        [sym_binary_operator] = STATE(14),
        [sym_subscript] = STATE(14),
        [sym_call] = STATE(14),
        [aux_sym_decorated_definition_repeat1] = STATE(23),
        [ts_builtin_sym_end] = ACTIONS(163),
        [anon_sym_SEMI] = ACTIONS(165),
        [anon_sym_print] = ACTIONS(77),
        [anon_sym_return] = ACTIONS(79),
        [anon_sym_del] = ACTIONS(81),
        [sym_pass_statement] = ACTIONS(83),
        [sym_break_statement] = ACTIONS(83),
        [sym_continue_statement] = ACTIONS(83),
        [anon_sym_if] = ACTIONS(85),
        [anon_sym_for] = ACTIONS(87),
        [anon_sym_while] = ACTIONS(89),
        [anon_sym_try] = ACTIONS(91),
        [anon_sym_with] = ACTIONS(93),
        [anon_sym_def] = ACTIONS(95),
        [anon_sym_class] = ACTIONS(97),
        [anon_sym_AT] = ACTIONS(99),
        [sym_number] = ACTIONS(101),
        [sym_identifier] = ACTIONS(103),
        [sym_comment] = ACTIONS(67),
        [sym__newline] = ACTIONS(165),
    },
    [23] = {
        [sym_function_definition] = STATE(24),
        [sym_class_definition] = STATE(24),
        [sym_decorator] = STATE(25),
        [anon_sym_def] = ACTIONS(167),
        [anon_sym_class] = ACTIONS(169),
        [anon_sym_AT] = ACTIONS(99),
        [sym_comment] = ACTIONS(67),
    },
    [24] = {
        [ts_builtin_sym_end] = ACTIONS(171),
        [anon_sym_SEMI] = ACTIONS(171),
        [anon_sym_print] = ACTIONS(173),
        [anon_sym_return] = ACTIONS(173),
        [anon_sym_del] = ACTIONS(173),
        [sym_pass_statement] = ACTIONS(173),
        [sym_break_statement] = ACTIONS(173),
        [sym_continue_statement] = ACTIONS(173),
        [anon_sym_if] = ACTIONS(173),
        [anon_sym_for] = ACTIONS(173),
        [anon_sym_while] = ACTIONS(173),
        [anon_sym_try] = ACTIONS(173),
        [anon_sym_with] = ACTIONS(173),
        [anon_sym_def] = ACTIONS(173),
        [anon_sym_class] = ACTIONS(173),
        [anon_sym_AT] = ACTIONS(171),
        [sym_number] = ACTIONS(173),
        [sym_identifier] = ACTIONS(175),
        [sym_comment] = ACTIONS(67),
        [sym__newline] = ACTIONS(171),
    },
    [25] = {
        [anon_sym_def] = ACTIONS(177),
        [anon_sym_class] = ACTIONS(177),
        [anon_sym_AT] = ACTIONS(177),
        [sym_comment] = ACTIONS(67),
    },
    [26] = {
        [ts_builtin_sym_end] = ACTIONS(179),
        [sym_comment] = ACTIONS(67),
    },
    [27] = {
        [ts_builtin_sym_end] = ACTIONS(181),
        [anon_sym_SEMI] = ACTIONS(181),
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
        [sym_number] = ACTIONS(183),
        [sym_identifier] = ACTIONS(185),
        [sym_comment] = ACTIONS(67),
        [sym__newline] = ACTIONS(181),
    },
    [28] = {
        [sym__expression] = STATE(72),
        [sym_binary_operator] = STATE(32),
        [sym_subscript] = STATE(32),
        [sym_call] = STATE(32),
        [sym_keyword_argument] = STATE(73),
        [sym_number] = ACTIONS(111),
        [sym_identifier] = ACTIONS(187),
        [sym_comment] = ACTIONS(67),
    },
    [29] = {
        [sym__expression] = STATE(71),
        [sym_binary_operator] = STATE(14),
        [sym_subscript] = STATE(14),
        [sym_call] = STATE(14),
        [sym_number] = ACTIONS(101),
        [sym_identifier] = ACTIONS(101),
        [sym_comment] = ACTIONS(67),
    },
    [30] = {
        [sym__expression] = STATE(33),
        [sym_binary_operator] = STATE(32),
        [sym_subscript] = STATE(32),
        [sym_call] = STATE(32),
        [anon_sym_DOT_DOT_DOT] = ACTIONS(189),
        [sym_number] = ACTIONS(111),
        [sym_identifier] = ACTIONS(111),
        [sym_comment] = ACTIONS(67),
    },
    [31] = {
        [aux_sym_subscript_repeat1] = STATE(39),
        [anon_sym_COMMA] = ACTIONS(191),
        [anon_sym_RBRACK] = ACTIONS(193),
        [sym_comment] = ACTIONS(67),
    },
    [32] = {
        [anon_sym_COMMA] = ACTIONS(121),
        [anon_sym_COLON] = ACTIONS(121),
        [anon_sym_in] = ACTIONS(121),
        [anon_sym_except] = ACTIONS(121),
        [anon_sym_as] = ACTIONS(121),
        [anon_sym_finally] = ACTIONS(121),
        [anon_sym_LPAREN] = ACTIONS(121),
        [anon_sym_RPAREN] = ACTIONS(121),
        [anon_sym_PLUS] = ACTIONS(121),
        [anon_sym_LBRACK] = ACTIONS(121),
        [anon_sym_RBRACK] = ACTIONS(121),
        [sym_comment] = ACTIONS(67),
    },
    [33] = {
        [aux_sym_subscript_repeat1] = STATE(39),
        [anon_sym_COMMA] = ACTIONS(191),
        [anon_sym_LPAREN] = ACTIONS(195),
        [anon_sym_PLUS] = ACTIONS(197),
        [anon_sym_LBRACK] = ACTIONS(199),
        [anon_sym_RBRACK] = ACTIONS(193),
        [sym_comment] = ACTIONS(67),
    },
    [34] = {
        [sym__expression] = STATE(54),
        [sym_binary_operator] = STATE(32),
        [sym_subscript] = STATE(32),
        [sym_call] = STATE(32),
        [anon_sym_DOT_DOT_DOT] = ACTIONS(201),
        [anon_sym_RBRACK] = ACTIONS(203),
        [sym_number] = ACTIONS(111),
        [sym_identifier] = ACTIONS(111),
        [sym_comment] = ACTIONS(67),
    },
    [35] = {
        [sym__expression] = STATE(57),
        [sym_binary_operator] = STATE(32),
        [sym_subscript] = STATE(32),
        [sym_call] = STATE(32),
        [sym_keyword_argument] = STATE(58),
        [sym_number] = ACTIONS(111),
        [sym_identifier] = ACTIONS(187),
        [sym_comment] = ACTIONS(67),
    },
    [36] = {
        [sym__expression] = STATE(55),
        [sym_binary_operator] = STATE(32),
        [sym_subscript] = STATE(32),
        [sym_call] = STATE(32),
        [sym_number] = ACTIONS(111),
        [sym_identifier] = ACTIONS(111),
        [sym_comment] = ACTIONS(67),
    },
    [37] = {
        [sym__expression] = STATE(46),
        [sym_binary_operator] = STATE(32),
        [sym_subscript] = STATE(32),
        [sym_call] = STATE(32),
        [anon_sym_DOT_DOT_DOT] = ACTIONS(205),
        [sym_number] = ACTIONS(111),
        [sym_identifier] = ACTIONS(111),
        [sym_comment] = ACTIONS(67),
    },
    [38] = {
        [ts_builtin_sym_end] = ACTIONS(207),
        [anon_sym_SEMI] = ACTIONS(207),
        [anon_sym_print] = ACTIONS(209),
        [anon_sym_COMMA] = ACTIONS(207),
        [anon_sym_return] = ACTIONS(209),
        [anon_sym_del] = ACTIONS(209),
        [sym_pass_statement] = ACTIONS(209),
        [sym_break_statement] = ACTIONS(209),
        [sym_continue_statement] = ACTIONS(209),
        [anon_sym_if] = ACTIONS(209),
        [anon_sym_elif] = ACTIONS(209),
        [anon_sym_else] = ACTIONS(209),
        [anon_sym_for] = ACTIONS(209),
        [anon_sym_while] = ACTIONS(209),
        [anon_sym_try] = ACTIONS(209),
        [anon_sym_except] = ACTIONS(209),
        [anon_sym_finally] = ACTIONS(209),
        [anon_sym_with] = ACTIONS(209),
        [anon_sym_def] = ACTIONS(209),
        [anon_sym_LPAREN] = ACTIONS(207),
        [anon_sym_class] = ACTIONS(209),
        [anon_sym_AT] = ACTIONS(207),
        [anon_sym_PLUS] = ACTIONS(207),
        [anon_sym_LBRACK] = ACTIONS(207),
        [sym_number] = ACTIONS(209),
        [sym_identifier] = ACTIONS(211),
        [sym_comment] = ACTIONS(67),
        [sym__newline] = ACTIONS(207),
    },
    [39] = {
        [anon_sym_COMMA] = ACTIONS(213),
        [anon_sym_RBRACK] = ACTIONS(203),
        [sym_comment] = ACTIONS(67),
    },
    [40] = {
        [sym__expression] = STATE(44),
        [sym_binary_operator] = STATE(32),
        [sym_subscript] = STATE(32),
        [sym_call] = STATE(32),
        [anon_sym_DOT_DOT_DOT] = ACTIONS(215),
        [anon_sym_RBRACK] = ACTIONS(217),
        [sym_number] = ACTIONS(111),
        [sym_identifier] = ACTIONS(111),
        [sym_comment] = ACTIONS(67),
    },
    [41] = {
        [ts_builtin_sym_end] = ACTIONS(219),
        [anon_sym_SEMI] = ACTIONS(219),
        [anon_sym_print] = ACTIONS(221),
        [anon_sym_COMMA] = ACTIONS(219),
        [anon_sym_return] = ACTIONS(221),
        [anon_sym_del] = ACTIONS(221),
        [sym_pass_statement] = ACTIONS(221),
        [sym_break_statement] = ACTIONS(221),
        [sym_continue_statement] = ACTIONS(221),
        [anon_sym_if] = ACTIONS(221),
        [anon_sym_elif] = ACTIONS(221),
        [anon_sym_else] = ACTIONS(221),
        [anon_sym_for] = ACTIONS(221),
        [anon_sym_while] = ACTIONS(221),
        [anon_sym_try] = ACTIONS(221),
        [anon_sym_except] = ACTIONS(221),
        [anon_sym_finally] = ACTIONS(221),
        [anon_sym_with] = ACTIONS(221),
        [anon_sym_def] = ACTIONS(221),
        [anon_sym_LPAREN] = ACTIONS(219),
        [anon_sym_class] = ACTIONS(221),
        [anon_sym_AT] = ACTIONS(219),
        [anon_sym_PLUS] = ACTIONS(219),
        [anon_sym_LBRACK] = ACTIONS(219),
        [sym_number] = ACTIONS(221),
        [sym_identifier] = ACTIONS(223),
        [sym_comment] = ACTIONS(67),
        [sym__newline] = ACTIONS(219),
    },
    [42] = {
        [anon_sym_COMMA] = ACTIONS(225),
        [anon_sym_RBRACK] = ACTIONS(225),
        [sym_comment] = ACTIONS(67),
    },
    [43] = {
        [ts_builtin_sym_end] = ACTIONS(227),
        [anon_sym_SEMI] = ACTIONS(227),
        [anon_sym_print] = ACTIONS(229),
        [anon_sym_COMMA] = ACTIONS(227),
        [anon_sym_return] = ACTIONS(229),
        [anon_sym_del] = ACTIONS(229),
        [sym_pass_statement] = ACTIONS(229),
        [sym_break_statement] = ACTIONS(229),
        [sym_continue_statement] = ACTIONS(229),
        [anon_sym_if] = ACTIONS(229),
        [anon_sym_elif] = ACTIONS(229),
        [anon_sym_else] = ACTIONS(229),
        [anon_sym_for] = ACTIONS(229),
        [anon_sym_while] = ACTIONS(229),
        [anon_sym_try] = ACTIONS(229),
        [anon_sym_except] = ACTIONS(229),
        [anon_sym_finally] = ACTIONS(229),
        [anon_sym_with] = ACTIONS(229),
        [anon_sym_def] = ACTIONS(229),
        [anon_sym_LPAREN] = ACTIONS(227),
        [anon_sym_class] = ACTIONS(229),
        [anon_sym_AT] = ACTIONS(227),
        [anon_sym_PLUS] = ACTIONS(227),
        [anon_sym_LBRACK] = ACTIONS(227),
        [sym_number] = ACTIONS(229),
        [sym_identifier] = ACTIONS(231),
        [sym_comment] = ACTIONS(67),
        [sym__newline] = ACTIONS(227),
    },
    [44] = {
        [anon_sym_COMMA] = ACTIONS(225),
        [anon_sym_LPAREN] = ACTIONS(195),
        [anon_sym_PLUS] = ACTIONS(197),
        [anon_sym_LBRACK] = ACTIONS(199),
        [anon_sym_RBRACK] = ACTIONS(225),
        [sym_comment] = ACTIONS(67),
    },
    [45] = {
        [aux_sym_subscript_repeat1] = STATE(49),
        [anon_sym_COMMA] = ACTIONS(233),
        [anon_sym_RBRACK] = ACTIONS(235),
        [sym_comment] = ACTIONS(67),
    },
    [46] = {
        [aux_sym_subscript_repeat1] = STATE(49),
        [anon_sym_COMMA] = ACTIONS(233),
        [anon_sym_LPAREN] = ACTIONS(195),
        [anon_sym_PLUS] = ACTIONS(197),
        [anon_sym_LBRACK] = ACTIONS(199),
        [anon_sym_RBRACK] = ACTIONS(235),
        [sym_comment] = ACTIONS(67),
    },
    [47] = {
        [sym__expression] = STATE(54),
        [sym_binary_operator] = STATE(32),
        [sym_subscript] = STATE(32),
        [sym_call] = STATE(32),
        [anon_sym_DOT_DOT_DOT] = ACTIONS(201),
        [anon_sym_RBRACK] = ACTIONS(237),
        [sym_number] = ACTIONS(111),
        [sym_identifier] = ACTIONS(111),
        [sym_comment] = ACTIONS(67),
    },
    [48] = {
        [anon_sym_COMMA] = ACTIONS(207),
        [anon_sym_COLON] = ACTIONS(207),
        [anon_sym_in] = ACTIONS(207),
        [anon_sym_except] = ACTIONS(207),
        [anon_sym_as] = ACTIONS(207),
        [anon_sym_finally] = ACTIONS(207),
        [anon_sym_LPAREN] = ACTIONS(207),
        [anon_sym_RPAREN] = ACTIONS(207),
        [anon_sym_PLUS] = ACTIONS(207),
        [anon_sym_LBRACK] = ACTIONS(207),
        [anon_sym_RBRACK] = ACTIONS(207),
        [sym_comment] = ACTIONS(67),
    },
    [49] = {
        [anon_sym_COMMA] = ACTIONS(239),
        [anon_sym_RBRACK] = ACTIONS(237),
        [sym_comment] = ACTIONS(67),
    },
    [50] = {
        [sym__expression] = STATE(44),
        [sym_binary_operator] = STATE(32),
        [sym_subscript] = STATE(32),
        [sym_call] = STATE(32),
        [anon_sym_DOT_DOT_DOT] = ACTIONS(215),
        [anon_sym_RBRACK] = ACTIONS(241),
        [sym_number] = ACTIONS(111),
        [sym_identifier] = ACTIONS(111),
        [sym_comment] = ACTIONS(67),
    },
    [51] = {
        [anon_sym_COMMA] = ACTIONS(219),
        [anon_sym_COLON] = ACTIONS(219),
        [anon_sym_in] = ACTIONS(219),
        [anon_sym_except] = ACTIONS(219),
        [anon_sym_as] = ACTIONS(219),
        [anon_sym_finally] = ACTIONS(219),
        [anon_sym_LPAREN] = ACTIONS(219),
        [anon_sym_RPAREN] = ACTIONS(219),
        [anon_sym_PLUS] = ACTIONS(219),
        [anon_sym_LBRACK] = ACTIONS(219),
        [anon_sym_RBRACK] = ACTIONS(219),
        [sym_comment] = ACTIONS(67),
    },
    [52] = {
        [anon_sym_COMMA] = ACTIONS(227),
        [anon_sym_COLON] = ACTIONS(227),
        [anon_sym_in] = ACTIONS(227),
        [anon_sym_except] = ACTIONS(227),
        [anon_sym_as] = ACTIONS(227),
        [anon_sym_finally] = ACTIONS(227),
        [anon_sym_LPAREN] = ACTIONS(227),
        [anon_sym_RPAREN] = ACTIONS(227),
        [anon_sym_PLUS] = ACTIONS(227),
        [anon_sym_LBRACK] = ACTIONS(227),
        [anon_sym_RBRACK] = ACTIONS(227),
        [sym_comment] = ACTIONS(67),
    },
    [53] = {
        [anon_sym_COMMA] = ACTIONS(243),
        [anon_sym_RBRACK] = ACTIONS(243),
        [sym_comment] = ACTIONS(67),
    },
    [54] = {
        [anon_sym_COMMA] = ACTIONS(243),
        [anon_sym_LPAREN] = ACTIONS(195),
        [anon_sym_PLUS] = ACTIONS(197),
        [anon_sym_LBRACK] = ACTIONS(199),
        [anon_sym_RBRACK] = ACTIONS(243),
        [sym_comment] = ACTIONS(67),
    },
    [55] = {
        [anon_sym_COMMA] = ACTIONS(245),
        [anon_sym_COLON] = ACTIONS(245),
        [anon_sym_in] = ACTIONS(245),
        [anon_sym_except] = ACTIONS(245),
        [anon_sym_as] = ACTIONS(245),
        [anon_sym_finally] = ACTIONS(245),
        [anon_sym_LPAREN] = ACTIONS(245),
        [anon_sym_RPAREN] = ACTIONS(245),
        [anon_sym_PLUS] = ACTIONS(245),
        [anon_sym_LBRACK] = ACTIONS(245),
        [anon_sym_RBRACK] = ACTIONS(245),
        [sym_comment] = ACTIONS(67),
    },
    [56] = {
        [anon_sym_COMMA] = ACTIONS(121),
        [anon_sym_LPAREN] = ACTIONS(121),
        [anon_sym_RPAREN] = ACTIONS(121),
        [anon_sym_EQ] = ACTIONS(247),
        [anon_sym_PLUS] = ACTIONS(121),
        [anon_sym_LBRACK] = ACTIONS(121),
        [sym_comment] = ACTIONS(67),
    },
    [57] = {
        [aux_sym_call_repeat1] = STATE(61),
        [anon_sym_COMMA] = ACTIONS(249),
        [anon_sym_LPAREN] = ACTIONS(195),
        [anon_sym_RPAREN] = ACTIONS(251),
        [anon_sym_PLUS] = ACTIONS(197),
        [anon_sym_LBRACK] = ACTIONS(199),
        [sym_comment] = ACTIONS(67),
    },
    [58] = {
        [aux_sym_call_repeat1] = STATE(61),
        [anon_sym_COMMA] = ACTIONS(249),
        [anon_sym_RPAREN] = ACTIONS(251),
        [sym_comment] = ACTIONS(67),
    },
    [59] = {
        [sym__expression] = STATE(67),
        [sym_binary_operator] = STATE(32),
        [sym_subscript] = STATE(32),
        [sym_call] = STATE(32),
        [sym_keyword_argument] = STATE(68),
        [anon_sym_RPAREN] = ACTIONS(253),
        [sym_number] = ACTIONS(111),
        [sym_identifier] = ACTIONS(187),
        [sym_comment] = ACTIONS(67),
    },
    [60] = {
        [anon_sym_COMMA] = ACTIONS(255),
        [anon_sym_COLON] = ACTIONS(255),
        [anon_sym_in] = ACTIONS(255),
        [anon_sym_except] = ACTIONS(255),
        [anon_sym_as] = ACTIONS(255),
        [anon_sym_finally] = ACTIONS(255),
        [anon_sym_LPAREN] = ACTIONS(255),
        [anon_sym_RPAREN] = ACTIONS(255),
        [anon_sym_PLUS] = ACTIONS(255),
        [anon_sym_LBRACK] = ACTIONS(255),
        [anon_sym_RBRACK] = ACTIONS(255),
        [sym_comment] = ACTIONS(67),
    },
    [61] = {
        [anon_sym_COMMA] = ACTIONS(257),
        [anon_sym_RPAREN] = ACTIONS(253),
        [sym_comment] = ACTIONS(67),
    },
    [62] = {
        [sym__expression] = STATE(65),
        [sym_binary_operator] = STATE(32),
        [sym_subscript] = STATE(32),
        [sym_call] = STATE(32),
        [sym_keyword_argument] = STATE(66),
        [anon_sym_RPAREN] = ACTIONS(259),
        [sym_number] = ACTIONS(111),
        [sym_identifier] = ACTIONS(187),
        [sym_comment] = ACTIONS(67),
    },
    [63] = {
        [anon_sym_COMMA] = ACTIONS(261),
        [anon_sym_COLON] = ACTIONS(261),
        [anon_sym_in] = ACTIONS(261),
        [anon_sym_except] = ACTIONS(261),
        [anon_sym_as] = ACTIONS(261),
        [anon_sym_finally] = ACTIONS(261),
        [anon_sym_LPAREN] = ACTIONS(261),
        [anon_sym_RPAREN] = ACTIONS(261),
        [anon_sym_PLUS] = ACTIONS(261),
        [anon_sym_LBRACK] = ACTIONS(261),
        [anon_sym_RBRACK] = ACTIONS(261),
        [sym_comment] = ACTIONS(67),
    },
    [64] = {
        [anon_sym_COMMA] = ACTIONS(263),
        [anon_sym_COLON] = ACTIONS(263),
        [anon_sym_in] = ACTIONS(263),
        [anon_sym_except] = ACTIONS(263),
        [anon_sym_as] = ACTIONS(263),
        [anon_sym_finally] = ACTIONS(263),
        [anon_sym_LPAREN] = ACTIONS(263),
        [anon_sym_RPAREN] = ACTIONS(263),
        [anon_sym_PLUS] = ACTIONS(263),
        [anon_sym_LBRACK] = ACTIONS(263),
        [anon_sym_RBRACK] = ACTIONS(263),
        [sym_comment] = ACTIONS(67),
    },
    [65] = {
        [anon_sym_COMMA] = ACTIONS(265),
        [anon_sym_LPAREN] = ACTIONS(195),
        [anon_sym_RPAREN] = ACTIONS(265),
        [anon_sym_PLUS] = ACTIONS(197),
        [anon_sym_LBRACK] = ACTIONS(199),
        [sym_comment] = ACTIONS(67),
    },
    [66] = {
        [anon_sym_COMMA] = ACTIONS(265),
        [anon_sym_RPAREN] = ACTIONS(265),
        [sym_comment] = ACTIONS(67),
    },
    [67] = {
        [anon_sym_COMMA] = ACTIONS(267),
        [anon_sym_LPAREN] = ACTIONS(195),
        [anon_sym_RPAREN] = ACTIONS(267),
        [anon_sym_PLUS] = ACTIONS(197),
        [anon_sym_LBRACK] = ACTIONS(199),
        [sym_comment] = ACTIONS(67),
    },
    [68] = {
        [anon_sym_COMMA] = ACTIONS(267),
        [anon_sym_RPAREN] = ACTIONS(267),
        [sym_comment] = ACTIONS(67),
    },
    [69] = {
        [sym__expression] = STATE(70),
        [sym_binary_operator] = STATE(32),
        [sym_subscript] = STATE(32),
        [sym_call] = STATE(32),
        [sym_number] = ACTIONS(111),
        [sym_identifier] = ACTIONS(111),
        [sym_comment] = ACTIONS(67),
    },
    [70] = {
        [anon_sym_COMMA] = ACTIONS(269),
        [anon_sym_LPAREN] = ACTIONS(195),
        [anon_sym_RPAREN] = ACTIONS(269),
        [anon_sym_PLUS] = ACTIONS(197),
        [anon_sym_LBRACK] = ACTIONS(199),
        [sym_comment] = ACTIONS(67),
    },
    [71] = {
        [ts_builtin_sym_end] = ACTIONS(245),
        [anon_sym_SEMI] = ACTIONS(245),
        [anon_sym_print] = ACTIONS(271),
        [anon_sym_COMMA] = ACTIONS(245),
        [anon_sym_return] = ACTIONS(271),
        [anon_sym_del] = ACTIONS(271),
        [sym_pass_statement] = ACTIONS(271),
        [sym_break_statement] = ACTIONS(271),
        [sym_continue_statement] = ACTIONS(271),
        [anon_sym_if] = ACTIONS(271),
        [anon_sym_elif] = ACTIONS(271),
        [anon_sym_else] = ACTIONS(271),
        [anon_sym_for] = ACTIONS(271),
        [anon_sym_while] = ACTIONS(271),
        [anon_sym_try] = ACTIONS(271),
        [anon_sym_except] = ACTIONS(271),
        [anon_sym_finally] = ACTIONS(271),
        [anon_sym_with] = ACTIONS(271),
        [anon_sym_def] = ACTIONS(271),
        [anon_sym_LPAREN] = ACTIONS(245),
        [anon_sym_class] = ACTIONS(271),
        [anon_sym_AT] = ACTIONS(245),
        [anon_sym_PLUS] = ACTIONS(245),
        [anon_sym_LBRACK] = ACTIONS(245),
        [sym_number] = ACTIONS(271),
        [sym_identifier] = ACTIONS(273),
        [sym_comment] = ACTIONS(67),
        [sym__newline] = ACTIONS(245),
    },
    [72] = {
        [aux_sym_call_repeat1] = STATE(76),
        [anon_sym_COMMA] = ACTIONS(275),
        [anon_sym_LPAREN] = ACTIONS(195),
        [anon_sym_RPAREN] = ACTIONS(277),
        [anon_sym_PLUS] = ACTIONS(197),
        [anon_sym_LBRACK] = ACTIONS(199),
        [sym_comment] = ACTIONS(67),
    },
    [73] = {
        [aux_sym_call_repeat1] = STATE(76),
        [anon_sym_COMMA] = ACTIONS(275),
        [anon_sym_RPAREN] = ACTIONS(277),
        [sym_comment] = ACTIONS(67),
    },
    [74] = {
        [sym__expression] = STATE(67),
        [sym_binary_operator] = STATE(32),
        [sym_subscript] = STATE(32),
        [sym_call] = STATE(32),
        [sym_keyword_argument] = STATE(68),
        [anon_sym_RPAREN] = ACTIONS(279),
        [sym_number] = ACTIONS(111),
        [sym_identifier] = ACTIONS(187),
        [sym_comment] = ACTIONS(67),
    },
    [75] = {
        [ts_builtin_sym_end] = ACTIONS(255),
        [anon_sym_SEMI] = ACTIONS(255),
        [anon_sym_print] = ACTIONS(281),
        [anon_sym_COMMA] = ACTIONS(255),
        [anon_sym_return] = ACTIONS(281),
        [anon_sym_del] = ACTIONS(281),
        [sym_pass_statement] = ACTIONS(281),
        [sym_break_statement] = ACTIONS(281),
        [sym_continue_statement] = ACTIONS(281),
        [anon_sym_if] = ACTIONS(281),
        [anon_sym_elif] = ACTIONS(281),
        [anon_sym_else] = ACTIONS(281),
        [anon_sym_for] = ACTIONS(281),
        [anon_sym_while] = ACTIONS(281),
        [anon_sym_try] = ACTIONS(281),
        [anon_sym_except] = ACTIONS(281),
        [anon_sym_finally] = ACTIONS(281),
        [anon_sym_with] = ACTIONS(281),
        [anon_sym_def] = ACTIONS(281),
        [anon_sym_LPAREN] = ACTIONS(255),
        [anon_sym_class] = ACTIONS(281),
        [anon_sym_AT] = ACTIONS(255),
        [anon_sym_PLUS] = ACTIONS(255),
        [anon_sym_LBRACK] = ACTIONS(255),
        [sym_number] = ACTIONS(281),
        [sym_identifier] = ACTIONS(283),
        [sym_comment] = ACTIONS(67),
        [sym__newline] = ACTIONS(255),
    },
    [76] = {
        [anon_sym_COMMA] = ACTIONS(285),
        [anon_sym_RPAREN] = ACTIONS(279),
        [sym_comment] = ACTIONS(67),
    },
    [77] = {
        [sym__expression] = STATE(65),
        [sym_binary_operator] = STATE(32),
        [sym_subscript] = STATE(32),
        [sym_call] = STATE(32),
        [sym_keyword_argument] = STATE(66),
        [anon_sym_RPAREN] = ACTIONS(287),
        [sym_number] = ACTIONS(111),
        [sym_identifier] = ACTIONS(187),
        [sym_comment] = ACTIONS(67),
    },
    [78] = {
        [ts_builtin_sym_end] = ACTIONS(261),
        [anon_sym_SEMI] = ACTIONS(261),
        [anon_sym_print] = ACTIONS(289),
        [anon_sym_COMMA] = ACTIONS(261),
        [anon_sym_return] = ACTIONS(289),
        [anon_sym_del] = ACTIONS(289),
        [sym_pass_statement] = ACTIONS(289),
        [sym_break_statement] = ACTIONS(289),
        [sym_continue_statement] = ACTIONS(289),
        [anon_sym_if] = ACTIONS(289),
        [anon_sym_elif] = ACTIONS(289),
        [anon_sym_else] = ACTIONS(289),
        [anon_sym_for] = ACTIONS(289),
        [anon_sym_while] = ACTIONS(289),
        [anon_sym_try] = ACTIONS(289),
        [anon_sym_except] = ACTIONS(289),
        [anon_sym_finally] = ACTIONS(289),
        [anon_sym_with] = ACTIONS(289),
        [anon_sym_def] = ACTIONS(289),
        [anon_sym_LPAREN] = ACTIONS(261),
        [anon_sym_class] = ACTIONS(289),
        [anon_sym_AT] = ACTIONS(261),
        [anon_sym_PLUS] = ACTIONS(261),
        [anon_sym_LBRACK] = ACTIONS(261),
        [sym_number] = ACTIONS(289),
        [sym_identifier] = ACTIONS(291),
        [sym_comment] = ACTIONS(67),
        [sym__newline] = ACTIONS(261),
    },
    [79] = {
        [ts_builtin_sym_end] = ACTIONS(263),
        [anon_sym_SEMI] = ACTIONS(263),
        [anon_sym_print] = ACTIONS(293),
        [anon_sym_COMMA] = ACTIONS(263),
        [anon_sym_return] = ACTIONS(293),
        [anon_sym_del] = ACTIONS(293),
        [sym_pass_statement] = ACTIONS(293),
        [sym_break_statement] = ACTIONS(293),
        [sym_continue_statement] = ACTIONS(293),
        [anon_sym_if] = ACTIONS(293),
        [anon_sym_elif] = ACTIONS(293),
        [anon_sym_else] = ACTIONS(293),
        [anon_sym_for] = ACTIONS(293),
        [anon_sym_while] = ACTIONS(293),
        [anon_sym_try] = ACTIONS(293),
        [anon_sym_except] = ACTIONS(293),
        [anon_sym_finally] = ACTIONS(293),
        [anon_sym_with] = ACTIONS(293),
        [anon_sym_def] = ACTIONS(293),
        [anon_sym_LPAREN] = ACTIONS(263),
        [anon_sym_class] = ACTIONS(293),
        [anon_sym_AT] = ACTIONS(263),
        [anon_sym_PLUS] = ACTIONS(263),
        [anon_sym_LBRACK] = ACTIONS(263),
        [sym_number] = ACTIONS(293),
        [sym_identifier] = ACTIONS(295),
        [sym_comment] = ACTIONS(67),
        [sym__newline] = ACTIONS(263),
    },
    [80] = {
        [ts_builtin_sym_end] = ACTIONS(297),
        [anon_sym_SEMI] = ACTIONS(297),
        [anon_sym_print] = ACTIONS(299),
        [anon_sym_return] = ACTIONS(299),
        [anon_sym_del] = ACTIONS(299),
        [sym_pass_statement] = ACTIONS(299),
        [sym_break_statement] = ACTIONS(299),
        [sym_continue_statement] = ACTIONS(299),
        [anon_sym_if] = ACTIONS(299),
        [anon_sym_for] = ACTIONS(299),
        [anon_sym_while] = ACTIONS(299),
        [anon_sym_try] = ACTIONS(299),
        [anon_sym_with] = ACTIONS(299),
        [anon_sym_def] = ACTIONS(299),
        [anon_sym_class] = ACTIONS(299),
        [anon_sym_AT] = ACTIONS(297),
        [sym_number] = ACTIONS(299),
        [sym_identifier] = ACTIONS(301),
        [sym_comment] = ACTIONS(67),
        [sym__newline] = ACTIONS(297),
    },
    [81] = {
        [aux_sym_dotted_name_repeat1] = STATE(96),
        [anon_sym_LPAREN] = ACTIONS(303),
        [anon_sym_DOT] = ACTIONS(305),
        [sym_comment] = ACTIONS(67),
        [sym__newline] = ACTIONS(303),
    },
    [82] = {
        [sym_arguments] = STATE(85),
        [anon_sym_LPAREN] = ACTIONS(307),
        [sym_comment] = ACTIONS(67),
        [sym__newline] = ACTIONS(309),
    },
    [83] = {
        [sym__expression] = STATE(87),
        [sym_binary_operator] = STATE(32),
        [sym_subscript] = STATE(32),
        [sym_call] = STATE(32),
        [sym_number] = ACTIONS(111),
        [sym_identifier] = ACTIONS(111),
        [sym_comment] = ACTIONS(67),
    },
    [84] = {
        [anon_sym_def] = ACTIONS(311),
        [anon_sym_class] = ACTIONS(311),
        [anon_sym_AT] = ACTIONS(311),
        [sym_comment] = ACTIONS(67),
    },
    [85] = {
        [sym_comment] = ACTIONS(67),
        [sym__newline] = ACTIONS(313),
    },
    [86] = {
        [anon_sym_def] = ACTIONS(315),
        [anon_sym_class] = ACTIONS(315),
        [anon_sym_AT] = ACTIONS(315),
        [sym_comment] = ACTIONS(67),
    },
    [87] = {
        [aux_sym_print_statement_repeat1] = STATE(90),
        [anon_sym_COMMA] = ACTIONS(317),
        [anon_sym_LPAREN] = ACTIONS(195),
        [anon_sym_RPAREN] = ACTIONS(319),
        [anon_sym_PLUS] = ACTIONS(197),
        [anon_sym_LBRACK] = ACTIONS(199),
        [sym_comment] = ACTIONS(67),
    },
    [88] = {
        [sym__expression] = STATE(94),
        [sym_binary_operator] = STATE(32),
        [sym_subscript] = STATE(32),
        [sym_call] = STATE(32),
        [sym_number] = ACTIONS(111),
        [sym_identifier] = ACTIONS(111),
        [sym_comment] = ACTIONS(67),
    },
    [89] = {
        [sym_comment] = ACTIONS(67),
        [sym__newline] = ACTIONS(321),
    },
    [90] = {
        [anon_sym_COMMA] = ACTIONS(323),
        [anon_sym_RPAREN] = ACTIONS(325),
        [sym_comment] = ACTIONS(67),
    },
    [91] = {
        [sym__expression] = STATE(93),
        [sym_binary_operator] = STATE(32),
        [sym_subscript] = STATE(32),
        [sym_call] = STATE(32),
        [sym_number] = ACTIONS(111),
        [sym_identifier] = ACTIONS(111),
        [sym_comment] = ACTIONS(67),
    },
    [92] = {
        [sym_comment] = ACTIONS(67),
        [sym__newline] = ACTIONS(327),
    },
    [93] = {
        [anon_sym_COMMA] = ACTIONS(329),
        [anon_sym_COLON] = ACTIONS(329),
        [anon_sym_in] = ACTIONS(329),
        [anon_sym_except] = ACTIONS(329),
        [anon_sym_finally] = ACTIONS(329),
        [anon_sym_LPAREN] = ACTIONS(195),
        [anon_sym_RPAREN] = ACTIONS(329),
        [anon_sym_PLUS] = ACTIONS(197),
        [anon_sym_LBRACK] = ACTIONS(199),
        [sym_comment] = ACTIONS(67),
    },
    [94] = {
        [anon_sym_COMMA] = ACTIONS(331),
        [anon_sym_COLON] = ACTIONS(331),
        [anon_sym_in] = ACTIONS(331),
        [anon_sym_except] = ACTIONS(331),
        [anon_sym_finally] = ACTIONS(331),
        [anon_sym_LPAREN] = ACTIONS(195),
        [anon_sym_RPAREN] = ACTIONS(331),
        [anon_sym_PLUS] = ACTIONS(197),
        [anon_sym_LBRACK] = ACTIONS(199),
        [sym_comment] = ACTIONS(67),
    },
    [95] = {
        [sym_identifier] = ACTIONS(333),
        [sym_comment] = ACTIONS(67),
    },
    [96] = {
        [anon_sym_LPAREN] = ACTIONS(335),
        [anon_sym_DOT] = ACTIONS(337),
        [sym_comment] = ACTIONS(67),
        [sym__newline] = ACTIONS(335),
    },
    [97] = {
        [sym_identifier] = ACTIONS(339),
        [sym_comment] = ACTIONS(67),
    },
    [98] = {
        [anon_sym_LPAREN] = ACTIONS(341),
        [anon_sym_DOT] = ACTIONS(341),
        [sym_comment] = ACTIONS(67),
        [sym__newline] = ACTIONS(341),
    },
    [99] = {
        [anon_sym_LPAREN] = ACTIONS(343),
        [anon_sym_DOT] = ACTIONS(343),
        [sym_comment] = ACTIONS(67),
        [sym__newline] = ACTIONS(343),
    },
    [100] = {
        [anon_sym_COLON] = ACTIONS(345),
        [anon_sym_LPAREN] = ACTIONS(347),
        [sym_comment] = ACTIONS(67),
    },
    [101] = {
        [sym__simple_statement] = STATE(109),
        [sym_print_statement] = STATE(5),
        [sym_expression_statement] = STATE(5),
        [sym_return_statement] = STATE(5),
        [sym_delete_statement] = STATE(5),
        [sym__suite] = STATE(292),
        [sym__expression] = STATE(21),
        [sym_binary_operator] = STATE(14),
        [sym_subscript] = STATE(14),
        [sym_call] = STATE(14),
        [anon_sym_print] = ACTIONS(77),
        [anon_sym_return] = ACTIONS(79),
        [anon_sym_del] = ACTIONS(81),
        [sym_pass_statement] = ACTIONS(83),
        [sym_break_statement] = ACTIONS(83),
        [sym_continue_statement] = ACTIONS(83),
        [sym_number] = ACTIONS(101),
        [sym_identifier] = ACTIONS(103),
        [sym_comment] = ACTIONS(67),
        [sym__indent] = ACTIONS(349),
    },
    [102] = {
        [sym_expression_list] = STATE(103),
        [sym__expression] = STATE(104),
        [sym_binary_operator] = STATE(32),
        [sym_subscript] = STATE(32),
        [sym_call] = STATE(32),
        [sym_number] = ACTIONS(111),
        [sym_identifier] = ACTIONS(111),
        [sym_comment] = ACTIONS(67),
    },
    [103] = {
        [anon_sym_RPAREN] = ACTIONS(351),
        [sym_comment] = ACTIONS(67),
    },
    [104] = {
        [aux_sym_print_statement_repeat1] = STATE(105),
        [anon_sym_COMMA] = ACTIONS(317),
        [anon_sym_COLON] = ACTIONS(353),
        [anon_sym_in] = ACTIONS(353),
        [anon_sym_except] = ACTIONS(353),
        [anon_sym_finally] = ACTIONS(353),
        [anon_sym_LPAREN] = ACTIONS(195),
        [anon_sym_RPAREN] = ACTIONS(353),
        [anon_sym_PLUS] = ACTIONS(197),
        [anon_sym_LBRACK] = ACTIONS(199),
        [sym_comment] = ACTIONS(67),
    },
    [105] = {
        [anon_sym_COMMA] = ACTIONS(323),
        [anon_sym_COLON] = ACTIONS(355),
        [anon_sym_in] = ACTIONS(355),
        [anon_sym_except] = ACTIONS(355),
        [anon_sym_finally] = ACTIONS(355),
        [anon_sym_RPAREN] = ACTIONS(355),
        [sym_comment] = ACTIONS(67),
    },
    [106] = {
        [anon_sym_COLON] = ACTIONS(357),
        [sym_comment] = ACTIONS(67),
    },
    [107] = {
        [sym__simple_statement] = STATE(109),
        [sym_print_statement] = STATE(5),
        [sym_expression_statement] = STATE(5),
        [sym_return_statement] = STATE(5),
        [sym_delete_statement] = STATE(5),
        [sym__suite] = STATE(110),
        [sym__expression] = STATE(21),
        [sym_binary_operator] = STATE(14),
        [sym_subscript] = STATE(14),
        [sym_call] = STATE(14),
        [anon_sym_print] = ACTIONS(77),
        [anon_sym_return] = ACTIONS(79),
        [anon_sym_del] = ACTIONS(81),
        [sym_pass_statement] = ACTIONS(83),
        [sym_break_statement] = ACTIONS(83),
        [sym_continue_statement] = ACTIONS(83),
        [sym_number] = ACTIONS(101),
        [sym_identifier] = ACTIONS(103),
        [sym_comment] = ACTIONS(67),
        [sym__indent] = ACTIONS(349),
    },
    [108] = {
        [sym__statement] = STATE(119),
        [sym__simple_statement] = STATE(120),
        [sym_print_statement] = STATE(5),
        [sym_expression_statement] = STATE(5),
        [sym_return_statement] = STATE(5),
        [sym_delete_statement] = STATE(5),
        [sym__compound_statement] = STATE(121),
        [sym_if_statement] = STATE(122),
        [sym_for_statement] = STATE(122),
        [sym_while_statement] = STATE(122),
        [sym_try_statement] = STATE(122),
        [sym_with_statement] = STATE(122),
        [sym_function_definition] = STATE(122),
        [sym_class_definition] = STATE(122),
        [sym_decorated_definition] = STATE(122),
        [sym_decorator] = STATE(20),
        [sym__expression] = STATE(21),
        [sym_binary_operator] = STATE(14),
        [sym_subscript] = STATE(14),
        [sym_call] = STATE(14),
        [aux_sym_module_repeat1] = STATE(123),
        [aux_sym_decorated_definition_repeat1] = STATE(124),
        [anon_sym_print] = ACTIONS(77),
        [anon_sym_return] = ACTIONS(79),
        [anon_sym_del] = ACTIONS(81),
        [sym_pass_statement] = ACTIONS(83),
        [sym_break_statement] = ACTIONS(83),
        [sym_continue_statement] = ACTIONS(83),
        [anon_sym_if] = ACTIONS(359),
        [anon_sym_for] = ACTIONS(361),
        [anon_sym_while] = ACTIONS(363),
        [anon_sym_try] = ACTIONS(365),
        [anon_sym_with] = ACTIONS(367),
        [anon_sym_def] = ACTIONS(369),
        [anon_sym_class] = ACTIONS(371),
        [anon_sym_AT] = ACTIONS(99),
        [sym_number] = ACTIONS(101),
        [sym_identifier] = ACTIONS(103),
        [sym_comment] = ACTIONS(67),
        [sym__dedent] = ACTIONS(373),
    },
    [109] = {
        [ts_builtin_sym_end] = ACTIONS(375),
        [anon_sym_SEMI] = ACTIONS(375),
        [anon_sym_print] = ACTIONS(377),
        [anon_sym_return] = ACTIONS(377),
        [anon_sym_del] = ACTIONS(377),
        [sym_pass_statement] = ACTIONS(377),
        [sym_break_statement] = ACTIONS(377),
        [sym_continue_statement] = ACTIONS(377),
        [anon_sym_if] = ACTIONS(377),
        [anon_sym_elif] = ACTIONS(377),
        [anon_sym_else] = ACTIONS(377),
        [anon_sym_for] = ACTIONS(377),
        [anon_sym_while] = ACTIONS(377),
        [anon_sym_try] = ACTIONS(377),
        [anon_sym_except] = ACTIONS(377),
        [anon_sym_finally] = ACTIONS(377),
        [anon_sym_with] = ACTIONS(377),
        [anon_sym_def] = ACTIONS(377),
        [anon_sym_class] = ACTIONS(377),
        [anon_sym_AT] = ACTIONS(375),
        [sym_number] = ACTIONS(377),
        [sym_identifier] = ACTIONS(379),
        [sym_comment] = ACTIONS(67),
        [sym__newline] = ACTIONS(375),
    },
    [110] = {
        [ts_builtin_sym_end] = ACTIONS(381),
        [anon_sym_SEMI] = ACTIONS(381),
        [anon_sym_print] = ACTIONS(383),
        [anon_sym_return] = ACTIONS(383),
        [anon_sym_del] = ACTIONS(383),
        [sym_pass_statement] = ACTIONS(383),
        [sym_break_statement] = ACTIONS(383),
        [sym_continue_statement] = ACTIONS(383),
        [anon_sym_if] = ACTIONS(383),
        [anon_sym_for] = ACTIONS(383),
        [anon_sym_while] = ACTIONS(383),
        [anon_sym_try] = ACTIONS(383),
        [anon_sym_with] = ACTIONS(383),
        [anon_sym_def] = ACTIONS(383),
        [anon_sym_class] = ACTIONS(383),
        [anon_sym_AT] = ACTIONS(381),
        [sym_number] = ACTIONS(383),
        [sym_identifier] = ACTIONS(385),
        [sym_comment] = ACTIONS(67),
        [sym__newline] = ACTIONS(381),
    },
    [111] = {
        [sym__expression] = STATE(270),
        [sym_binary_operator] = STATE(32),
        [sym_subscript] = STATE(32),
        [sym_call] = STATE(32),
        [sym_number] = ACTIONS(111),
        [sym_identifier] = ACTIONS(111),
        [sym_comment] = ACTIONS(67),
    },
    [112] = {
        [sym_expression_list] = STATE(264),
        [sym__expression] = STATE(104),
        [sym_binary_operator] = STATE(32),
        [sym_subscript] = STATE(32),
        [sym_call] = STATE(32),
        [sym_number] = ACTIONS(111),
        [sym_identifier] = ACTIONS(111),
        [sym_comment] = ACTIONS(67),
    },
    [113] = {
        [sym__expression] = STATE(260),
        [sym_binary_operator] = STATE(32),
        [sym_subscript] = STATE(32),
        [sym_call] = STATE(32),
        [sym_number] = ACTIONS(111),
        [sym_identifier] = ACTIONS(111),
        [sym_comment] = ACTIONS(67),
    },
    [114] = {
        [anon_sym_COLON] = ACTIONS(387),
        [sym_comment] = ACTIONS(67),
    },
    [115] = {
        [sym_with_item] = STATE(210),
        [sym__expression] = STATE(211),
        [sym_binary_operator] = STATE(32),
        [sym_subscript] = STATE(32),
        [sym_call] = STATE(32),
        [sym_number] = ACTIONS(111),
        [sym_identifier] = ACTIONS(111),
        [sym_comment] = ACTIONS(67),
    },
    [116] = {
        [sym_identifier] = ACTIONS(389),
        [sym_comment] = ACTIONS(67),
    },
    [117] = {
        [sym_identifier] = ACTIONS(391),
        [sym_comment] = ACTIONS(67),
    },
    [118] = {
        [ts_builtin_sym_end] = ACTIONS(393),
        [anon_sym_SEMI] = ACTIONS(393),
        [anon_sym_print] = ACTIONS(395),
        [anon_sym_return] = ACTIONS(395),
        [anon_sym_del] = ACTIONS(395),
        [sym_pass_statement] = ACTIONS(395),
        [sym_break_statement] = ACTIONS(395),
        [sym_continue_statement] = ACTIONS(395),
        [anon_sym_if] = ACTIONS(395),
        [anon_sym_elif] = ACTIONS(395),
        [anon_sym_else] = ACTIONS(395),
        [anon_sym_for] = ACTIONS(395),
        [anon_sym_while] = ACTIONS(395),
        [anon_sym_try] = ACTIONS(395),
        [anon_sym_except] = ACTIONS(395),
        [anon_sym_finally] = ACTIONS(395),
        [anon_sym_with] = ACTIONS(395),
        [anon_sym_def] = ACTIONS(395),
        [anon_sym_class] = ACTIONS(395),
        [anon_sym_AT] = ACTIONS(393),
        [sym_number] = ACTIONS(395),
        [sym_identifier] = ACTIONS(397),
        [sym_comment] = ACTIONS(67),
        [sym__newline] = ACTIONS(393),
    },
    [119] = {
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
        [sym_number] = ACTIONS(131),
        [sym_identifier] = ACTIONS(133),
        [sym_comment] = ACTIONS(67),
        [sym__dedent] = ACTIONS(129),
    },
    [120] = {
        [sym_comment] = ACTIONS(67),
        [sym__newline] = ACTIONS(399),
    },
    [121] = {
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
        [sym_number] = ACTIONS(139),
        [sym_identifier] = ACTIONS(141),
        [sym_comment] = ACTIONS(67),
        [sym__dedent] = ACTIONS(137),
    },
    [122] = {
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
        [sym_number] = ACTIONS(145),
        [sym_identifier] = ACTIONS(147),
        [sym_comment] = ACTIONS(67),
        [sym__dedent] = ACTIONS(143),
    },
    [123] = {
        [sym__statement] = STATE(127),
        [sym__simple_statement] = STATE(120),
        [sym_print_statement] = STATE(5),
        [sym_expression_statement] = STATE(5),
        [sym_return_statement] = STATE(5),
        [sym_delete_statement] = STATE(5),
        [sym__compound_statement] = STATE(121),
        [sym_if_statement] = STATE(122),
        [sym_for_statement] = STATE(122),
        [sym_while_statement] = STATE(122),
        [sym_try_statement] = STATE(122),
        [sym_with_statement] = STATE(122),
        [sym_function_definition] = STATE(122),
        [sym_class_definition] = STATE(122),
        [sym_decorated_definition] = STATE(122),
        [sym_decorator] = STATE(20),
        [sym__expression] = STATE(21),
        [sym_binary_operator] = STATE(14),
        [sym_subscript] = STATE(14),
        [sym_call] = STATE(14),
        [aux_sym_decorated_definition_repeat1] = STATE(124),
        [anon_sym_print] = ACTIONS(77),
        [anon_sym_return] = ACTIONS(79),
        [anon_sym_del] = ACTIONS(81),
        [sym_pass_statement] = ACTIONS(83),
        [sym_break_statement] = ACTIONS(83),
        [sym_continue_statement] = ACTIONS(83),
        [anon_sym_if] = ACTIONS(359),
        [anon_sym_for] = ACTIONS(361),
        [anon_sym_while] = ACTIONS(363),
        [anon_sym_try] = ACTIONS(365),
        [anon_sym_with] = ACTIONS(367),
        [anon_sym_def] = ACTIONS(369),
        [anon_sym_class] = ACTIONS(371),
        [anon_sym_AT] = ACTIONS(99),
        [sym_number] = ACTIONS(101),
        [sym_identifier] = ACTIONS(103),
        [sym_comment] = ACTIONS(67),
        [sym__dedent] = ACTIONS(401),
    },
    [124] = {
        [sym_function_definition] = STATE(125),
        [sym_class_definition] = STATE(125),
        [sym_decorator] = STATE(25),
        [anon_sym_def] = ACTIONS(403),
        [anon_sym_class] = ACTIONS(405),
        [anon_sym_AT] = ACTIONS(99),
        [sym_comment] = ACTIONS(67),
    },
    [125] = {
        [anon_sym_print] = ACTIONS(173),
        [anon_sym_return] = ACTIONS(173),
        [anon_sym_del] = ACTIONS(173),
        [sym_pass_statement] = ACTIONS(173),
        [sym_break_statement] = ACTIONS(173),
        [sym_continue_statement] = ACTIONS(173),
        [anon_sym_if] = ACTIONS(173),
        [anon_sym_for] = ACTIONS(173),
        [anon_sym_while] = ACTIONS(173),
        [anon_sym_try] = ACTIONS(173),
        [anon_sym_with] = ACTIONS(173),
        [anon_sym_def] = ACTIONS(173),
        [anon_sym_class] = ACTIONS(173),
        [anon_sym_AT] = ACTIONS(171),
        [sym_number] = ACTIONS(173),
        [sym_identifier] = ACTIONS(175),
        [sym_comment] = ACTIONS(67),
        [sym__dedent] = ACTIONS(171),
    },
    [126] = {
        [ts_builtin_sym_end] = ACTIONS(407),
        [anon_sym_SEMI] = ACTIONS(407),
        [anon_sym_print] = ACTIONS(409),
        [anon_sym_return] = ACTIONS(409),
        [anon_sym_del] = ACTIONS(409),
        [sym_pass_statement] = ACTIONS(409),
        [sym_break_statement] = ACTIONS(409),
        [sym_continue_statement] = ACTIONS(409),
        [anon_sym_if] = ACTIONS(409),
        [anon_sym_elif] = ACTIONS(409),
        [anon_sym_else] = ACTIONS(409),
        [anon_sym_for] = ACTIONS(409),
        [anon_sym_while] = ACTIONS(409),
        [anon_sym_try] = ACTIONS(409),
        [anon_sym_except] = ACTIONS(409),
        [anon_sym_finally] = ACTIONS(409),
        [anon_sym_with] = ACTIONS(409),
        [anon_sym_def] = ACTIONS(409),
        [anon_sym_class] = ACTIONS(409),
        [anon_sym_AT] = ACTIONS(407),
        [sym_number] = ACTIONS(409),
        [sym_identifier] = ACTIONS(411),
        [sym_comment] = ACTIONS(67),
        [sym__newline] = ACTIONS(407),
    },
    [127] = {
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
        [sym_number] = ACTIONS(183),
        [sym_identifier] = ACTIONS(185),
        [sym_comment] = ACTIONS(67),
        [sym__dedent] = ACTIONS(181),
    },
    [128] = {
        [anon_sym_print] = ACTIONS(299),
        [anon_sym_return] = ACTIONS(299),
        [anon_sym_del] = ACTIONS(299),
        [sym_pass_statement] = ACTIONS(299),
        [sym_break_statement] = ACTIONS(299),
        [sym_continue_statement] = ACTIONS(299),
        [anon_sym_if] = ACTIONS(299),
        [anon_sym_for] = ACTIONS(299),
        [anon_sym_while] = ACTIONS(299),
        [anon_sym_try] = ACTIONS(299),
        [anon_sym_with] = ACTIONS(299),
        [anon_sym_def] = ACTIONS(299),
        [anon_sym_class] = ACTIONS(299),
        [anon_sym_AT] = ACTIONS(297),
        [sym_number] = ACTIONS(299),
        [sym_identifier] = ACTIONS(301),
        [sym_comment] = ACTIONS(67),
        [sym__dedent] = ACTIONS(297),
    },
    [129] = {
        [anon_sym_COLON] = ACTIONS(413),
        [anon_sym_LPAREN] = ACTIONS(415),
        [sym_comment] = ACTIONS(67),
    },
    [130] = {
        [sym__simple_statement] = STATE(141),
        [sym_print_statement] = STATE(138),
        [sym_expression_statement] = STATE(138),
        [sym_return_statement] = STATE(138),
        [sym_delete_statement] = STATE(138),
        [sym__suite] = STATE(177),
        [sym__expression] = STATE(143),
        [sym_binary_operator] = STATE(139),
        [sym_subscript] = STATE(139),
        [sym_call] = STATE(139),
        [anon_sym_print] = ACTIONS(417),
        [anon_sym_return] = ACTIONS(419),
        [anon_sym_del] = ACTIONS(421),
        [sym_pass_statement] = ACTIONS(423),
        [sym_break_statement] = ACTIONS(423),
        [sym_continue_statement] = ACTIONS(423),
        [sym_number] = ACTIONS(425),
        [sym_identifier] = ACTIONS(427),
        [sym_comment] = ACTIONS(67),
        [sym__indent] = ACTIONS(429),
    },
    [131] = {
        [sym_expression_list] = STATE(132),
        [sym__expression] = STATE(104),
        [sym_binary_operator] = STATE(32),
        [sym_subscript] = STATE(32),
        [sym_call] = STATE(32),
        [sym_number] = ACTIONS(111),
        [sym_identifier] = ACTIONS(111),
        [sym_comment] = ACTIONS(67),
    },
    [132] = {
        [anon_sym_RPAREN] = ACTIONS(431),
        [sym_comment] = ACTIONS(67),
    },
    [133] = {
        [anon_sym_COLON] = ACTIONS(433),
        [sym_comment] = ACTIONS(67),
    },
    [134] = {
        [sym__simple_statement] = STATE(141),
        [sym_print_statement] = STATE(138),
        [sym_expression_statement] = STATE(138),
        [sym_return_statement] = STATE(138),
        [sym_delete_statement] = STATE(138),
        [sym__suite] = STATE(142),
        [sym__expression] = STATE(143),
        [sym_binary_operator] = STATE(139),
        [sym_subscript] = STATE(139),
        [sym_call] = STATE(139),
        [anon_sym_print] = ACTIONS(417),
        [anon_sym_return] = ACTIONS(419),
        [anon_sym_del] = ACTIONS(421),
        [sym_pass_statement] = ACTIONS(423),
        [sym_break_statement] = ACTIONS(423),
        [sym_continue_statement] = ACTIONS(423),
        [sym_number] = ACTIONS(425),
        [sym_identifier] = ACTIONS(427),
        [sym_comment] = ACTIONS(67),
        [sym__indent] = ACTIONS(429),
    },
    [135] = {
        [sym__expression] = STATE(175),
        [sym_binary_operator] = STATE(139),
        [sym_subscript] = STATE(139),
        [sym_call] = STATE(139),
        [sym_number] = ACTIONS(425),
        [sym_identifier] = ACTIONS(425),
        [sym_comment] = ACTIONS(67),
    },
    [136] = {
        [sym_expression_list] = STATE(174),
        [sym__expression] = STATE(168),
        [sym_binary_operator] = STATE(139),
        [sym_subscript] = STATE(139),
        [sym_call] = STATE(139),
        [sym_number] = ACTIONS(425),
        [sym_identifier] = ACTIONS(425),
        [sym_comment] = ACTIONS(67),
    },
    [137] = {
        [sym_expression_list] = STATE(167),
        [sym__expression] = STATE(168),
        [sym_binary_operator] = STATE(139),
        [sym_subscript] = STATE(139),
        [sym_call] = STATE(139),
        [sym_number] = ACTIONS(425),
        [sym_identifier] = ACTIONS(425),
        [sym_comment] = ACTIONS(67),
    },
    [138] = {
        [anon_sym_print] = ACTIONS(107),
        [anon_sym_return] = ACTIONS(107),
        [anon_sym_del] = ACTIONS(107),
        [sym_pass_statement] = ACTIONS(107),
        [sym_break_statement] = ACTIONS(107),
        [sym_continue_statement] = ACTIONS(107),
        [anon_sym_if] = ACTIONS(107),
        [anon_sym_elif] = ACTIONS(107),
        [anon_sym_else] = ACTIONS(107),
        [anon_sym_for] = ACTIONS(107),
        [anon_sym_while] = ACTIONS(107),
        [anon_sym_try] = ACTIONS(107),
        [anon_sym_except] = ACTIONS(107),
        [anon_sym_finally] = ACTIONS(107),
        [anon_sym_with] = ACTIONS(107),
        [anon_sym_def] = ACTIONS(107),
        [anon_sym_class] = ACTIONS(107),
        [anon_sym_AT] = ACTIONS(105),
        [sym_number] = ACTIONS(107),
        [sym_identifier] = ACTIONS(109),
        [sym_comment] = ACTIONS(67),
        [sym__dedent] = ACTIONS(105),
    },
    [139] = {
        [anon_sym_print] = ACTIONS(123),
        [anon_sym_COMMA] = ACTIONS(121),
        [anon_sym_return] = ACTIONS(123),
        [anon_sym_del] = ACTIONS(123),
        [sym_pass_statement] = ACTIONS(123),
        [sym_break_statement] = ACTIONS(123),
        [sym_continue_statement] = ACTIONS(123),
        [anon_sym_if] = ACTIONS(123),
        [anon_sym_elif] = ACTIONS(123),
        [anon_sym_else] = ACTIONS(123),
        [anon_sym_for] = ACTIONS(123),
        [anon_sym_while] = ACTIONS(123),
        [anon_sym_try] = ACTIONS(123),
        [anon_sym_except] = ACTIONS(123),
        [anon_sym_finally] = ACTIONS(123),
        [anon_sym_with] = ACTIONS(123),
        [anon_sym_def] = ACTIONS(123),
        [anon_sym_LPAREN] = ACTIONS(121),
        [anon_sym_class] = ACTIONS(123),
        [anon_sym_AT] = ACTIONS(121),
        [anon_sym_PLUS] = ACTIONS(121),
        [anon_sym_LBRACK] = ACTIONS(121),
        [sym_number] = ACTIONS(123),
        [sym_identifier] = ACTIONS(125),
        [sym_comment] = ACTIONS(67),
        [sym__dedent] = ACTIONS(121),
    },
    [140] = {
        [sym__statement] = STATE(119),
        [sym__simple_statement] = STATE(120),
        [sym_print_statement] = STATE(5),
        [sym_expression_statement] = STATE(5),
        [sym_return_statement] = STATE(5),
        [sym_delete_statement] = STATE(5),
        [sym__compound_statement] = STATE(121),
        [sym_if_statement] = STATE(122),
        [sym_for_statement] = STATE(122),
        [sym_while_statement] = STATE(122),
        [sym_try_statement] = STATE(122),
        [sym_with_statement] = STATE(122),
        [sym_function_definition] = STATE(122),
        [sym_class_definition] = STATE(122),
        [sym_decorated_definition] = STATE(122),
        [sym_decorator] = STATE(20),
        [sym__expression] = STATE(21),
        [sym_binary_operator] = STATE(14),
        [sym_subscript] = STATE(14),
        [sym_call] = STATE(14),
        [aux_sym_module_repeat1] = STATE(165),
        [aux_sym_decorated_definition_repeat1] = STATE(124),
        [anon_sym_print] = ACTIONS(77),
        [anon_sym_return] = ACTIONS(79),
        [anon_sym_del] = ACTIONS(81),
        [sym_pass_statement] = ACTIONS(83),
        [sym_break_statement] = ACTIONS(83),
        [sym_continue_statement] = ACTIONS(83),
        [anon_sym_if] = ACTIONS(359),
        [anon_sym_for] = ACTIONS(361),
        [anon_sym_while] = ACTIONS(363),
        [anon_sym_try] = ACTIONS(365),
        [anon_sym_with] = ACTIONS(367),
        [anon_sym_def] = ACTIONS(369),
        [anon_sym_class] = ACTIONS(371),
        [anon_sym_AT] = ACTIONS(99),
        [sym_number] = ACTIONS(101),
        [sym_identifier] = ACTIONS(103),
        [sym_comment] = ACTIONS(67),
        [sym__dedent] = ACTIONS(435),
    },
    [141] = {
        [anon_sym_print] = ACTIONS(377),
        [anon_sym_return] = ACTIONS(377),
        [anon_sym_del] = ACTIONS(377),
        [sym_pass_statement] = ACTIONS(377),
        [sym_break_statement] = ACTIONS(377),
        [sym_continue_statement] = ACTIONS(377),
        [anon_sym_if] = ACTIONS(377),
        [anon_sym_elif] = ACTIONS(377),
        [anon_sym_else] = ACTIONS(377),
        [anon_sym_for] = ACTIONS(377),
        [anon_sym_while] = ACTIONS(377),
        [anon_sym_try] = ACTIONS(377),
        [anon_sym_except] = ACTIONS(377),
        [anon_sym_finally] = ACTIONS(377),
        [anon_sym_with] = ACTIONS(377),
        [anon_sym_def] = ACTIONS(377),
        [anon_sym_class] = ACTIONS(377),
        [anon_sym_AT] = ACTIONS(375),
        [sym_number] = ACTIONS(377),
        [sym_identifier] = ACTIONS(379),
        [sym_comment] = ACTIONS(67),
        [sym__dedent] = ACTIONS(375),
    },
    [142] = {
        [anon_sym_print] = ACTIONS(383),
        [anon_sym_return] = ACTIONS(383),
        [anon_sym_del] = ACTIONS(383),
        [sym_pass_statement] = ACTIONS(383),
        [sym_break_statement] = ACTIONS(383),
        [sym_continue_statement] = ACTIONS(383),
        [anon_sym_if] = ACTIONS(383),
        [anon_sym_for] = ACTIONS(383),
        [anon_sym_while] = ACTIONS(383),
        [anon_sym_try] = ACTIONS(383),
        [anon_sym_with] = ACTIONS(383),
        [anon_sym_def] = ACTIONS(383),
        [anon_sym_class] = ACTIONS(383),
        [anon_sym_AT] = ACTIONS(381),
        [sym_number] = ACTIONS(383),
        [sym_identifier] = ACTIONS(385),
        [sym_comment] = ACTIONS(67),
        [sym__dedent] = ACTIONS(381),
    },
    [143] = {
        [anon_sym_print] = ACTIONS(153),
        [anon_sym_return] = ACTIONS(153),
        [anon_sym_del] = ACTIONS(153),
        [sym_pass_statement] = ACTIONS(153),
        [sym_break_statement] = ACTIONS(153),
        [sym_continue_statement] = ACTIONS(153),
        [anon_sym_if] = ACTIONS(153),
        [anon_sym_elif] = ACTIONS(153),
        [anon_sym_else] = ACTIONS(153),
        [anon_sym_for] = ACTIONS(153),
        [anon_sym_while] = ACTIONS(153),
        [anon_sym_try] = ACTIONS(153),
        [anon_sym_except] = ACTIONS(153),
        [anon_sym_finally] = ACTIONS(153),
        [anon_sym_with] = ACTIONS(153),
        [anon_sym_def] = ACTIONS(153),
        [anon_sym_LPAREN] = ACTIONS(437),
        [anon_sym_class] = ACTIONS(153),
        [anon_sym_AT] = ACTIONS(151),
        [anon_sym_PLUS] = ACTIONS(439),
        [anon_sym_LBRACK] = ACTIONS(441),
        [sym_number] = ACTIONS(153),
        [sym_identifier] = ACTIONS(161),
        [sym_comment] = ACTIONS(67),
        [sym__dedent] = ACTIONS(151),
    },
    [144] = {
        [sym__expression] = STATE(156),
        [sym_binary_operator] = STATE(32),
        [sym_subscript] = STATE(32),
        [sym_call] = STATE(32),
        [sym_keyword_argument] = STATE(157),
        [sym_number] = ACTIONS(111),
        [sym_identifier] = ACTIONS(187),
        [sym_comment] = ACTIONS(67),
    },
    [145] = {
        [sym__expression] = STATE(155),
        [sym_binary_operator] = STATE(139),
        [sym_subscript] = STATE(139),
        [sym_call] = STATE(139),
        [sym_number] = ACTIONS(425),
        [sym_identifier] = ACTIONS(425),
        [sym_comment] = ACTIONS(67),
    },
    [146] = {
        [sym__expression] = STATE(148),
        [sym_binary_operator] = STATE(32),
        [sym_subscript] = STATE(32),
        [sym_call] = STATE(32),
        [anon_sym_DOT_DOT_DOT] = ACTIONS(443),
        [sym_number] = ACTIONS(111),
        [sym_identifier] = ACTIONS(111),
        [sym_comment] = ACTIONS(67),
    },
    [147] = {
        [aux_sym_subscript_repeat1] = STATE(151),
        [anon_sym_COMMA] = ACTIONS(445),
        [anon_sym_RBRACK] = ACTIONS(447),
        [sym_comment] = ACTIONS(67),
    },
    [148] = {
        [aux_sym_subscript_repeat1] = STATE(151),
        [anon_sym_COMMA] = ACTIONS(445),
        [anon_sym_LPAREN] = ACTIONS(195),
        [anon_sym_PLUS] = ACTIONS(197),
        [anon_sym_LBRACK] = ACTIONS(199),
        [anon_sym_RBRACK] = ACTIONS(447),
        [sym_comment] = ACTIONS(67),
    },
    [149] = {
        [sym__expression] = STATE(54),
        [sym_binary_operator] = STATE(32),
        [sym_subscript] = STATE(32),
        [sym_call] = STATE(32),
        [anon_sym_DOT_DOT_DOT] = ACTIONS(201),
        [anon_sym_RBRACK] = ACTIONS(449),
        [sym_number] = ACTIONS(111),
        [sym_identifier] = ACTIONS(111),
        [sym_comment] = ACTIONS(67),
    },
    [150] = {
        [anon_sym_print] = ACTIONS(209),
        [anon_sym_COMMA] = ACTIONS(207),
        [anon_sym_return] = ACTIONS(209),
        [anon_sym_del] = ACTIONS(209),
        [sym_pass_statement] = ACTIONS(209),
        [sym_break_statement] = ACTIONS(209),
        [sym_continue_statement] = ACTIONS(209),
        [anon_sym_if] = ACTIONS(209),
        [anon_sym_elif] = ACTIONS(209),
        [anon_sym_else] = ACTIONS(209),
        [anon_sym_for] = ACTIONS(209),
        [anon_sym_while] = ACTIONS(209),
        [anon_sym_try] = ACTIONS(209),
        [anon_sym_except] = ACTIONS(209),
        [anon_sym_finally] = ACTIONS(209),
        [anon_sym_with] = ACTIONS(209),
        [anon_sym_def] = ACTIONS(209),
        [anon_sym_LPAREN] = ACTIONS(207),
        [anon_sym_class] = ACTIONS(209),
        [anon_sym_AT] = ACTIONS(207),
        [anon_sym_PLUS] = ACTIONS(207),
        [anon_sym_LBRACK] = ACTIONS(207),
        [sym_number] = ACTIONS(209),
        [sym_identifier] = ACTIONS(211),
        [sym_comment] = ACTIONS(67),
        [sym__dedent] = ACTIONS(207),
    },
    [151] = {
        [anon_sym_COMMA] = ACTIONS(451),
        [anon_sym_RBRACK] = ACTIONS(449),
        [sym_comment] = ACTIONS(67),
    },
    [152] = {
        [sym__expression] = STATE(44),
        [sym_binary_operator] = STATE(32),
        [sym_subscript] = STATE(32),
        [sym_call] = STATE(32),
        [anon_sym_DOT_DOT_DOT] = ACTIONS(215),
        [anon_sym_RBRACK] = ACTIONS(453),
        [sym_number] = ACTIONS(111),
        [sym_identifier] = ACTIONS(111),
        [sym_comment] = ACTIONS(67),
    },
    [153] = {
        [anon_sym_print] = ACTIONS(221),
        [anon_sym_COMMA] = ACTIONS(219),
        [anon_sym_return] = ACTIONS(221),
        [anon_sym_del] = ACTIONS(221),
        [sym_pass_statement] = ACTIONS(221),
        [sym_break_statement] = ACTIONS(221),
        [sym_continue_statement] = ACTIONS(221),
        [anon_sym_if] = ACTIONS(221),
        [anon_sym_elif] = ACTIONS(221),
        [anon_sym_else] = ACTIONS(221),
        [anon_sym_for] = ACTIONS(221),
        [anon_sym_while] = ACTIONS(221),
        [anon_sym_try] = ACTIONS(221),
        [anon_sym_except] = ACTIONS(221),
        [anon_sym_finally] = ACTIONS(221),
        [anon_sym_with] = ACTIONS(221),
        [anon_sym_def] = ACTIONS(221),
        [anon_sym_LPAREN] = ACTIONS(219),
        [anon_sym_class] = ACTIONS(221),
        [anon_sym_AT] = ACTIONS(219),
        [anon_sym_PLUS] = ACTIONS(219),
        [anon_sym_LBRACK] = ACTIONS(219),
        [sym_number] = ACTIONS(221),
        [sym_identifier] = ACTIONS(223),
        [sym_comment] = ACTIONS(67),
        [sym__dedent] = ACTIONS(219),
    },
    [154] = {
        [anon_sym_print] = ACTIONS(229),
        [anon_sym_COMMA] = ACTIONS(227),
        [anon_sym_return] = ACTIONS(229),
        [anon_sym_del] = ACTIONS(229),
        [sym_pass_statement] = ACTIONS(229),
        [sym_break_statement] = ACTIONS(229),
        [sym_continue_statement] = ACTIONS(229),
        [anon_sym_if] = ACTIONS(229),
        [anon_sym_elif] = ACTIONS(229),
        [anon_sym_else] = ACTIONS(229),
        [anon_sym_for] = ACTIONS(229),
        [anon_sym_while] = ACTIONS(229),
        [anon_sym_try] = ACTIONS(229),
        [anon_sym_except] = ACTIONS(229),
        [anon_sym_finally] = ACTIONS(229),
        [anon_sym_with] = ACTIONS(229),
        [anon_sym_def] = ACTIONS(229),
        [anon_sym_LPAREN] = ACTIONS(227),
        [anon_sym_class] = ACTIONS(229),
        [anon_sym_AT] = ACTIONS(227),
        [anon_sym_PLUS] = ACTIONS(227),
        [anon_sym_LBRACK] = ACTIONS(227),
        [sym_number] = ACTIONS(229),
        [sym_identifier] = ACTIONS(231),
        [sym_comment] = ACTIONS(67),
        [sym__dedent] = ACTIONS(227),
    },
    [155] = {
        [anon_sym_print] = ACTIONS(271),
        [anon_sym_COMMA] = ACTIONS(245),
        [anon_sym_return] = ACTIONS(271),
        [anon_sym_del] = ACTIONS(271),
        [sym_pass_statement] = ACTIONS(271),
        [sym_break_statement] = ACTIONS(271),
        [sym_continue_statement] = ACTIONS(271),
        [anon_sym_if] = ACTIONS(271),
        [anon_sym_elif] = ACTIONS(271),
        [anon_sym_else] = ACTIONS(271),
        [anon_sym_for] = ACTIONS(271),
        [anon_sym_while] = ACTIONS(271),
        [anon_sym_try] = ACTIONS(271),
        [anon_sym_except] = ACTIONS(271),
        [anon_sym_finally] = ACTIONS(271),
        [anon_sym_with] = ACTIONS(271),
        [anon_sym_def] = ACTIONS(271),
        [anon_sym_LPAREN] = ACTIONS(245),
        [anon_sym_class] = ACTIONS(271),
        [anon_sym_AT] = ACTIONS(245),
        [anon_sym_PLUS] = ACTIONS(245),
        [anon_sym_LBRACK] = ACTIONS(245),
        [sym_number] = ACTIONS(271),
        [sym_identifier] = ACTIONS(273),
        [sym_comment] = ACTIONS(67),
        [sym__dedent] = ACTIONS(245),
    },
    [156] = {
        [aux_sym_call_repeat1] = STATE(160),
        [anon_sym_COMMA] = ACTIONS(455),
        [anon_sym_LPAREN] = ACTIONS(195),
        [anon_sym_RPAREN] = ACTIONS(457),
        [anon_sym_PLUS] = ACTIONS(197),
        [anon_sym_LBRACK] = ACTIONS(199),
        [sym_comment] = ACTIONS(67),
    },
    [157] = {
        [aux_sym_call_repeat1] = STATE(160),
        [anon_sym_COMMA] = ACTIONS(455),
        [anon_sym_RPAREN] = ACTIONS(457),
        [sym_comment] = ACTIONS(67),
    },
    [158] = {
        [sym__expression] = STATE(67),
        [sym_binary_operator] = STATE(32),
        [sym_subscript] = STATE(32),
        [sym_call] = STATE(32),
        [sym_keyword_argument] = STATE(68),
        [anon_sym_RPAREN] = ACTIONS(459),
        [sym_number] = ACTIONS(111),
        [sym_identifier] = ACTIONS(187),
        [sym_comment] = ACTIONS(67),
    },
    [159] = {
        [anon_sym_print] = ACTIONS(281),
        [anon_sym_COMMA] = ACTIONS(255),
        [anon_sym_return] = ACTIONS(281),
        [anon_sym_del] = ACTIONS(281),
        [sym_pass_statement] = ACTIONS(281),
        [sym_break_statement] = ACTIONS(281),
        [sym_continue_statement] = ACTIONS(281),
        [anon_sym_if] = ACTIONS(281),
        [anon_sym_elif] = ACTIONS(281),
        [anon_sym_else] = ACTIONS(281),
        [anon_sym_for] = ACTIONS(281),
        [anon_sym_while] = ACTIONS(281),
        [anon_sym_try] = ACTIONS(281),
        [anon_sym_except] = ACTIONS(281),
        [anon_sym_finally] = ACTIONS(281),
        [anon_sym_with] = ACTIONS(281),
        [anon_sym_def] = ACTIONS(281),
        [anon_sym_LPAREN] = ACTIONS(255),
        [anon_sym_class] = ACTIONS(281),
        [anon_sym_AT] = ACTIONS(255),
        [anon_sym_PLUS] = ACTIONS(255),
        [anon_sym_LBRACK] = ACTIONS(255),
        [sym_number] = ACTIONS(281),
        [sym_identifier] = ACTIONS(283),
        [sym_comment] = ACTIONS(67),
        [sym__dedent] = ACTIONS(255),
    },
    [160] = {
        [anon_sym_COMMA] = ACTIONS(461),
        [anon_sym_RPAREN] = ACTIONS(459),
        [sym_comment] = ACTIONS(67),
    },
    [161] = {
        [sym__expression] = STATE(65),
        [sym_binary_operator] = STATE(32),
        [sym_subscript] = STATE(32),
        [sym_call] = STATE(32),
        [sym_keyword_argument] = STATE(66),
        [anon_sym_RPAREN] = ACTIONS(463),
        [sym_number] = ACTIONS(111),
        [sym_identifier] = ACTIONS(187),
        [sym_comment] = ACTIONS(67),
    },
    [162] = {
        [anon_sym_print] = ACTIONS(289),
        [anon_sym_COMMA] = ACTIONS(261),
        [anon_sym_return] = ACTIONS(289),
        [anon_sym_del] = ACTIONS(289),
        [sym_pass_statement] = ACTIONS(289),
        [sym_break_statement] = ACTIONS(289),
        [sym_continue_statement] = ACTIONS(289),
        [anon_sym_if] = ACTIONS(289),
        [anon_sym_elif] = ACTIONS(289),
        [anon_sym_else] = ACTIONS(289),
        [anon_sym_for] = ACTIONS(289),
        [anon_sym_while] = ACTIONS(289),
        [anon_sym_try] = ACTIONS(289),
        [anon_sym_except] = ACTIONS(289),
        [anon_sym_finally] = ACTIONS(289),
        [anon_sym_with] = ACTIONS(289),
        [anon_sym_def] = ACTIONS(289),
        [anon_sym_LPAREN] = ACTIONS(261),
        [anon_sym_class] = ACTIONS(289),
        [anon_sym_AT] = ACTIONS(261),
        [anon_sym_PLUS] = ACTIONS(261),
        [anon_sym_LBRACK] = ACTIONS(261),
        [sym_number] = ACTIONS(289),
        [sym_identifier] = ACTIONS(291),
        [sym_comment] = ACTIONS(67),
        [sym__dedent] = ACTIONS(261),
    },
    [163] = {
        [anon_sym_print] = ACTIONS(293),
        [anon_sym_COMMA] = ACTIONS(263),
        [anon_sym_return] = ACTIONS(293),
        [anon_sym_del] = ACTIONS(293),
        [sym_pass_statement] = ACTIONS(293),
        [sym_break_statement] = ACTIONS(293),
        [sym_continue_statement] = ACTIONS(293),
        [anon_sym_if] = ACTIONS(293),
        [anon_sym_elif] = ACTIONS(293),
        [anon_sym_else] = ACTIONS(293),
        [anon_sym_for] = ACTIONS(293),
        [anon_sym_while] = ACTIONS(293),
        [anon_sym_try] = ACTIONS(293),
        [anon_sym_except] = ACTIONS(293),
        [anon_sym_finally] = ACTIONS(293),
        [anon_sym_with] = ACTIONS(293),
        [anon_sym_def] = ACTIONS(293),
        [anon_sym_LPAREN] = ACTIONS(263),
        [anon_sym_class] = ACTIONS(293),
        [anon_sym_AT] = ACTIONS(263),
        [anon_sym_PLUS] = ACTIONS(263),
        [anon_sym_LBRACK] = ACTIONS(263),
        [sym_number] = ACTIONS(293),
        [sym_identifier] = ACTIONS(295),
        [sym_comment] = ACTIONS(67),
        [sym__dedent] = ACTIONS(263),
    },
    [164] = {
        [anon_sym_print] = ACTIONS(395),
        [anon_sym_return] = ACTIONS(395),
        [anon_sym_del] = ACTIONS(395),
        [sym_pass_statement] = ACTIONS(395),
        [sym_break_statement] = ACTIONS(395),
        [sym_continue_statement] = ACTIONS(395),
        [anon_sym_if] = ACTIONS(395),
        [anon_sym_elif] = ACTIONS(395),
        [anon_sym_else] = ACTIONS(395),
        [anon_sym_for] = ACTIONS(395),
        [anon_sym_while] = ACTIONS(395),
        [anon_sym_try] = ACTIONS(395),
        [anon_sym_except] = ACTIONS(395),
        [anon_sym_finally] = ACTIONS(395),
        [anon_sym_with] = ACTIONS(395),
        [anon_sym_def] = ACTIONS(395),
        [anon_sym_class] = ACTIONS(395),
        [anon_sym_AT] = ACTIONS(393),
        [sym_number] = ACTIONS(395),
        [sym_identifier] = ACTIONS(397),
        [sym_comment] = ACTIONS(67),
        [sym__dedent] = ACTIONS(393),
    },
    [165] = {
        [sym__statement] = STATE(127),
        [sym__simple_statement] = STATE(120),
        [sym_print_statement] = STATE(5),
        [sym_expression_statement] = STATE(5),
        [sym_return_statement] = STATE(5),
        [sym_delete_statement] = STATE(5),
        [sym__compound_statement] = STATE(121),
        [sym_if_statement] = STATE(122),
        [sym_for_statement] = STATE(122),
        [sym_while_statement] = STATE(122),
        [sym_try_statement] = STATE(122),
        [sym_with_statement] = STATE(122),
        [sym_function_definition] = STATE(122),
        [sym_class_definition] = STATE(122),
        [sym_decorated_definition] = STATE(122),
        [sym_decorator] = STATE(20),
        [sym__expression] = STATE(21),
        [sym_binary_operator] = STATE(14),
        [sym_subscript] = STATE(14),
        [sym_call] = STATE(14),
        [aux_sym_decorated_definition_repeat1] = STATE(124),
        [anon_sym_print] = ACTIONS(77),
        [anon_sym_return] = ACTIONS(79),
        [anon_sym_del] = ACTIONS(81),
        [sym_pass_statement] = ACTIONS(83),
        [sym_break_statement] = ACTIONS(83),
        [sym_continue_statement] = ACTIONS(83),
        [anon_sym_if] = ACTIONS(359),
        [anon_sym_for] = ACTIONS(361),
        [anon_sym_while] = ACTIONS(363),
        [anon_sym_try] = ACTIONS(365),
        [anon_sym_with] = ACTIONS(367),
        [anon_sym_def] = ACTIONS(369),
        [anon_sym_class] = ACTIONS(371),
        [anon_sym_AT] = ACTIONS(99),
        [sym_number] = ACTIONS(101),
        [sym_identifier] = ACTIONS(103),
        [sym_comment] = ACTIONS(67),
        [sym__dedent] = ACTIONS(465),
    },
    [166] = {
        [anon_sym_print] = ACTIONS(409),
        [anon_sym_return] = ACTIONS(409),
        [anon_sym_del] = ACTIONS(409),
        [sym_pass_statement] = ACTIONS(409),
        [sym_break_statement] = ACTIONS(409),
        [sym_continue_statement] = ACTIONS(409),
        [anon_sym_if] = ACTIONS(409),
        [anon_sym_elif] = ACTIONS(409),
        [anon_sym_else] = ACTIONS(409),
        [anon_sym_for] = ACTIONS(409),
        [anon_sym_while] = ACTIONS(409),
        [anon_sym_try] = ACTIONS(409),
        [anon_sym_except] = ACTIONS(409),
        [anon_sym_finally] = ACTIONS(409),
        [anon_sym_with] = ACTIONS(409),
        [anon_sym_def] = ACTIONS(409),
        [anon_sym_class] = ACTIONS(409),
        [anon_sym_AT] = ACTIONS(407),
        [sym_number] = ACTIONS(409),
        [sym_identifier] = ACTIONS(411),
        [sym_comment] = ACTIONS(67),
        [sym__dedent] = ACTIONS(407),
    },
    [167] = {
        [anon_sym_print] = ACTIONS(467),
        [anon_sym_return] = ACTIONS(467),
        [anon_sym_del] = ACTIONS(467),
        [sym_pass_statement] = ACTIONS(467),
        [sym_break_statement] = ACTIONS(467),
        [sym_continue_statement] = ACTIONS(467),
        [anon_sym_if] = ACTIONS(467),
        [anon_sym_elif] = ACTIONS(467),
        [anon_sym_else] = ACTIONS(467),
        [anon_sym_for] = ACTIONS(467),
        [anon_sym_while] = ACTIONS(467),
        [anon_sym_try] = ACTIONS(467),
        [anon_sym_except] = ACTIONS(467),
        [anon_sym_finally] = ACTIONS(467),
        [anon_sym_with] = ACTIONS(467),
        [anon_sym_def] = ACTIONS(467),
        [anon_sym_class] = ACTIONS(467),
        [anon_sym_AT] = ACTIONS(469),
        [sym_number] = ACTIONS(467),
        [sym_identifier] = ACTIONS(471),
        [sym_comment] = ACTIONS(67),
        [sym__dedent] = ACTIONS(469),
    },
    [168] = {
        [aux_sym_print_statement_repeat1] = STATE(170),
        [anon_sym_print] = ACTIONS(473),
        [anon_sym_COMMA] = ACTIONS(475),
        [anon_sym_return] = ACTIONS(473),
        [anon_sym_del] = ACTIONS(473),
        [sym_pass_statement] = ACTIONS(473),
        [sym_break_statement] = ACTIONS(473),
        [sym_continue_statement] = ACTIONS(473),
        [anon_sym_if] = ACTIONS(473),
        [anon_sym_elif] = ACTIONS(473),
        [anon_sym_else] = ACTIONS(473),
        [anon_sym_for] = ACTIONS(473),
        [anon_sym_while] = ACTIONS(473),
        [anon_sym_try] = ACTIONS(473),
        [anon_sym_except] = ACTIONS(473),
        [anon_sym_finally] = ACTIONS(473),
        [anon_sym_with] = ACTIONS(473),
        [anon_sym_def] = ACTIONS(473),
        [anon_sym_LPAREN] = ACTIONS(437),
        [anon_sym_class] = ACTIONS(473),
        [anon_sym_AT] = ACTIONS(353),
        [anon_sym_PLUS] = ACTIONS(439),
        [anon_sym_LBRACK] = ACTIONS(441),
        [sym_number] = ACTIONS(473),
        [sym_identifier] = ACTIONS(477),
        [sym_comment] = ACTIONS(67),
        [sym__dedent] = ACTIONS(353),
    },
    [169] = {
        [sym__expression] = STATE(173),
        [sym_binary_operator] = STATE(139),
        [sym_subscript] = STATE(139),
        [sym_call] = STATE(139),
        [sym_number] = ACTIONS(425),
        [sym_identifier] = ACTIONS(425),
        [sym_comment] = ACTIONS(67),
    },
    [170] = {
        [anon_sym_print] = ACTIONS(479),
        [anon_sym_COMMA] = ACTIONS(481),
        [anon_sym_return] = ACTIONS(479),
        [anon_sym_del] = ACTIONS(479),
        [sym_pass_statement] = ACTIONS(479),
        [sym_break_statement] = ACTIONS(479),
        [sym_continue_statement] = ACTIONS(479),
        [anon_sym_if] = ACTIONS(479),
        [anon_sym_elif] = ACTIONS(479),
        [anon_sym_else] = ACTIONS(479),
        [anon_sym_for] = ACTIONS(479),
        [anon_sym_while] = ACTIONS(479),
        [anon_sym_try] = ACTIONS(479),
        [anon_sym_except] = ACTIONS(479),
        [anon_sym_finally] = ACTIONS(479),
        [anon_sym_with] = ACTIONS(479),
        [anon_sym_def] = ACTIONS(479),
        [anon_sym_class] = ACTIONS(479),
        [anon_sym_AT] = ACTIONS(355),
        [sym_number] = ACTIONS(479),
        [sym_identifier] = ACTIONS(483),
        [sym_comment] = ACTIONS(67),
        [sym__dedent] = ACTIONS(355),
    },
    [171] = {
        [sym__expression] = STATE(172),
        [sym_binary_operator] = STATE(139),
        [sym_subscript] = STATE(139),
        [sym_call] = STATE(139),
        [sym_number] = ACTIONS(425),
        [sym_identifier] = ACTIONS(425),
        [sym_comment] = ACTIONS(67),
    },
    [172] = {
        [anon_sym_print] = ACTIONS(485),
        [anon_sym_COMMA] = ACTIONS(329),
        [anon_sym_return] = ACTIONS(485),
        [anon_sym_del] = ACTIONS(485),
        [sym_pass_statement] = ACTIONS(485),
        [sym_break_statement] = ACTIONS(485),
        [sym_continue_statement] = ACTIONS(485),
        [anon_sym_if] = ACTIONS(485),
        [anon_sym_elif] = ACTIONS(485),
        [anon_sym_else] = ACTIONS(485),
        [anon_sym_for] = ACTIONS(485),
        [anon_sym_while] = ACTIONS(485),
        [anon_sym_try] = ACTIONS(485),
        [anon_sym_except] = ACTIONS(485),
        [anon_sym_finally] = ACTIONS(485),
        [anon_sym_with] = ACTIONS(485),
        [anon_sym_def] = ACTIONS(485),
        [anon_sym_LPAREN] = ACTIONS(437),
        [anon_sym_class] = ACTIONS(485),
        [anon_sym_AT] = ACTIONS(329),
        [anon_sym_PLUS] = ACTIONS(439),
        [anon_sym_LBRACK] = ACTIONS(441),
        [sym_number] = ACTIONS(485),
        [sym_identifier] = ACTIONS(487),
        [sym_comment] = ACTIONS(67),
        [sym__dedent] = ACTIONS(329),
    },
    [173] = {
        [anon_sym_print] = ACTIONS(489),
        [anon_sym_COMMA] = ACTIONS(331),
        [anon_sym_return] = ACTIONS(489),
        [anon_sym_del] = ACTIONS(489),
        [sym_pass_statement] = ACTIONS(489),
        [sym_break_statement] = ACTIONS(489),
        [sym_continue_statement] = ACTIONS(489),
        [anon_sym_if] = ACTIONS(489),
        [anon_sym_elif] = ACTIONS(489),
        [anon_sym_else] = ACTIONS(489),
        [anon_sym_for] = ACTIONS(489),
        [anon_sym_while] = ACTIONS(489),
        [anon_sym_try] = ACTIONS(489),
        [anon_sym_except] = ACTIONS(489),
        [anon_sym_finally] = ACTIONS(489),
        [anon_sym_with] = ACTIONS(489),
        [anon_sym_def] = ACTIONS(489),
        [anon_sym_LPAREN] = ACTIONS(437),
        [anon_sym_class] = ACTIONS(489),
        [anon_sym_AT] = ACTIONS(331),
        [anon_sym_PLUS] = ACTIONS(439),
        [anon_sym_LBRACK] = ACTIONS(441),
        [sym_number] = ACTIONS(489),
        [sym_identifier] = ACTIONS(491),
        [sym_comment] = ACTIONS(67),
        [sym__dedent] = ACTIONS(331),
    },
    [174] = {
        [anon_sym_print] = ACTIONS(493),
        [anon_sym_return] = ACTIONS(493),
        [anon_sym_del] = ACTIONS(493),
        [sym_pass_statement] = ACTIONS(493),
        [sym_break_statement] = ACTIONS(493),
        [sym_continue_statement] = ACTIONS(493),
        [anon_sym_if] = ACTIONS(493),
        [anon_sym_elif] = ACTIONS(493),
        [anon_sym_else] = ACTIONS(493),
        [anon_sym_for] = ACTIONS(493),
        [anon_sym_while] = ACTIONS(493),
        [anon_sym_try] = ACTIONS(493),
        [anon_sym_except] = ACTIONS(493),
        [anon_sym_finally] = ACTIONS(493),
        [anon_sym_with] = ACTIONS(493),
        [anon_sym_def] = ACTIONS(493),
        [anon_sym_class] = ACTIONS(493),
        [anon_sym_AT] = ACTIONS(495),
        [sym_number] = ACTIONS(493),
        [sym_identifier] = ACTIONS(497),
        [sym_comment] = ACTIONS(67),
        [sym__dedent] = ACTIONS(495),
    },
    [175] = {
        [aux_sym_print_statement_repeat1] = STATE(176),
        [anon_sym_print] = ACTIONS(499),
        [anon_sym_COMMA] = ACTIONS(475),
        [anon_sym_return] = ACTIONS(499),
        [anon_sym_del] = ACTIONS(499),
        [sym_pass_statement] = ACTIONS(499),
        [sym_break_statement] = ACTIONS(499),
        [sym_continue_statement] = ACTIONS(499),
        [anon_sym_if] = ACTIONS(499),
        [anon_sym_elif] = ACTIONS(499),
        [anon_sym_else] = ACTIONS(499),
        [anon_sym_for] = ACTIONS(499),
        [anon_sym_while] = ACTIONS(499),
        [anon_sym_try] = ACTIONS(499),
        [anon_sym_except] = ACTIONS(499),
        [anon_sym_finally] = ACTIONS(499),
        [anon_sym_with] = ACTIONS(499),
        [anon_sym_def] = ACTIONS(499),
        [anon_sym_LPAREN] = ACTIONS(437),
        [anon_sym_class] = ACTIONS(499),
        [anon_sym_AT] = ACTIONS(501),
        [anon_sym_PLUS] = ACTIONS(439),
        [anon_sym_LBRACK] = ACTIONS(441),
        [sym_number] = ACTIONS(499),
        [sym_identifier] = ACTIONS(503),
        [sym_comment] = ACTIONS(67),
        [sym__dedent] = ACTIONS(501),
    },
    [176] = {
        [anon_sym_print] = ACTIONS(505),
        [anon_sym_COMMA] = ACTIONS(481),
        [anon_sym_return] = ACTIONS(505),
        [anon_sym_del] = ACTIONS(505),
        [sym_pass_statement] = ACTIONS(505),
        [sym_break_statement] = ACTIONS(505),
        [sym_continue_statement] = ACTIONS(505),
        [anon_sym_if] = ACTIONS(505),
        [anon_sym_elif] = ACTIONS(505),
        [anon_sym_else] = ACTIONS(505),
        [anon_sym_for] = ACTIONS(505),
        [anon_sym_while] = ACTIONS(505),
        [anon_sym_try] = ACTIONS(505),
        [anon_sym_except] = ACTIONS(505),
        [anon_sym_finally] = ACTIONS(505),
        [anon_sym_with] = ACTIONS(505),
        [anon_sym_def] = ACTIONS(505),
        [anon_sym_class] = ACTIONS(505),
        [anon_sym_AT] = ACTIONS(507),
        [sym_number] = ACTIONS(505),
        [sym_identifier] = ACTIONS(509),
        [sym_comment] = ACTIONS(67),
        [sym__dedent] = ACTIONS(507),
    },
    [177] = {
        [anon_sym_print] = ACTIONS(511),
        [anon_sym_return] = ACTIONS(511),
        [anon_sym_del] = ACTIONS(511),
        [sym_pass_statement] = ACTIONS(511),
        [sym_break_statement] = ACTIONS(511),
        [sym_continue_statement] = ACTIONS(511),
        [anon_sym_if] = ACTIONS(511),
        [anon_sym_for] = ACTIONS(511),
        [anon_sym_while] = ACTIONS(511),
        [anon_sym_try] = ACTIONS(511),
        [anon_sym_with] = ACTIONS(511),
        [anon_sym_def] = ACTIONS(511),
        [anon_sym_class] = ACTIONS(511),
        [anon_sym_AT] = ACTIONS(513),
        [sym_number] = ACTIONS(511),
        [sym_identifier] = ACTIONS(515),
        [sym_comment] = ACTIONS(67),
        [sym__dedent] = ACTIONS(513),
    },
    [178] = {
        [sym_parameters] = STATE(180),
        [anon_sym_LPAREN] = ACTIONS(517),
        [sym_comment] = ACTIONS(67),
    },
    [179] = {
        [sym_default_parameter] = STATE(186),
        [sym_list_splat_parameter] = STATE(187),
        [sym_dictionary_splat_parameter] = STATE(188),
        [aux_sym_parameters_repeat1] = STATE(189),
        [anon_sym_RPAREN] = ACTIONS(519),
        [anon_sym_STAR] = ACTIONS(521),
        [sym_identifier] = ACTIONS(523),
        [sym_comment] = ACTIONS(67),
    },
    [180] = {
        [anon_sym_COLON] = ACTIONS(525),
        [sym_comment] = ACTIONS(67),
    },
    [181] = {
        [sym__simple_statement] = STATE(141),
        [sym_print_statement] = STATE(138),
        [sym_expression_statement] = STATE(138),
        [sym_return_statement] = STATE(138),
        [sym_delete_statement] = STATE(138),
        [sym__suite] = STATE(182),
        [sym__expression] = STATE(143),
        [sym_binary_operator] = STATE(139),
        [sym_subscript] = STATE(139),
        [sym_call] = STATE(139),
        [anon_sym_print] = ACTIONS(417),
        [anon_sym_return] = ACTIONS(419),
        [anon_sym_del] = ACTIONS(421),
        [sym_pass_statement] = ACTIONS(423),
        [sym_break_statement] = ACTIONS(423),
        [sym_continue_statement] = ACTIONS(423),
        [sym_number] = ACTIONS(425),
        [sym_identifier] = ACTIONS(427),
        [sym_comment] = ACTIONS(67),
        [sym__indent] = ACTIONS(429),
    },
    [182] = {
        [anon_sym_print] = ACTIONS(527),
        [anon_sym_return] = ACTIONS(527),
        [anon_sym_del] = ACTIONS(527),
        [sym_pass_statement] = ACTIONS(527),
        [sym_break_statement] = ACTIONS(527),
        [sym_continue_statement] = ACTIONS(527),
        [anon_sym_if] = ACTIONS(527),
        [anon_sym_for] = ACTIONS(527),
        [anon_sym_while] = ACTIONS(527),
        [anon_sym_try] = ACTIONS(527),
        [anon_sym_with] = ACTIONS(527),
        [anon_sym_def] = ACTIONS(527),
        [anon_sym_class] = ACTIONS(527),
        [anon_sym_AT] = ACTIONS(529),
        [sym_number] = ACTIONS(527),
        [sym_identifier] = ACTIONS(531),
        [sym_comment] = ACTIONS(67),
        [sym__dedent] = ACTIONS(529),
    },
    [183] = {
        [anon_sym_COLON] = ACTIONS(533),
        [sym_comment] = ACTIONS(67),
    },
    [184] = {
        [anon_sym_STAR] = ACTIONS(535),
        [sym_identifier] = ACTIONS(537),
        [sym_comment] = ACTIONS(67),
    },
    [185] = {
        [anon_sym_COMMA] = ACTIONS(539),
        [anon_sym_RPAREN] = ACTIONS(541),
        [anon_sym_EQ] = ACTIONS(543),
        [sym_comment] = ACTIONS(67),
    },
    [186] = {
        [anon_sym_COMMA] = ACTIONS(539),
        [anon_sym_RPAREN] = ACTIONS(541),
        [sym_comment] = ACTIONS(67),
    },
    [187] = {
        [anon_sym_COMMA] = ACTIONS(545),
        [anon_sym_RPAREN] = ACTIONS(541),
        [sym_comment] = ACTIONS(67),
    },
    [188] = {
        [anon_sym_RPAREN] = ACTIONS(541),
        [sym_comment] = ACTIONS(67),
    },
    [189] = {
        [sym_default_parameter] = STATE(191),
        [sym_list_splat_parameter] = STATE(192),
        [sym_dictionary_splat_parameter] = STATE(193),
        [anon_sym_STAR] = ACTIONS(521),
        [sym_identifier] = ACTIONS(547),
        [sym_comment] = ACTIONS(67),
    },
    [190] = {
        [anon_sym_COMMA] = ACTIONS(549),
        [anon_sym_RPAREN] = ACTIONS(551),
        [anon_sym_EQ] = ACTIONS(543),
        [sym_comment] = ACTIONS(67),
    },
    [191] = {
        [anon_sym_COMMA] = ACTIONS(549),
        [anon_sym_RPAREN] = ACTIONS(551),
        [sym_comment] = ACTIONS(67),
    },
    [192] = {
        [anon_sym_COMMA] = ACTIONS(553),
        [anon_sym_RPAREN] = ACTIONS(551),
        [sym_comment] = ACTIONS(67),
    },
    [193] = {
        [anon_sym_RPAREN] = ACTIONS(551),
        [sym_comment] = ACTIONS(67),
    },
    [194] = {
        [anon_sym_COLON] = ACTIONS(555),
        [sym_comment] = ACTIONS(67),
    },
    [195] = {
        [sym_dictionary_splat_parameter] = STATE(197),
        [anon_sym_STAR] = ACTIONS(557),
        [sym_comment] = ACTIONS(67),
    },
    [196] = {
        [anon_sym_STAR] = ACTIONS(535),
        [sym_comment] = ACTIONS(67),
    },
    [197] = {
        [anon_sym_RPAREN] = ACTIONS(559),
        [sym_comment] = ACTIONS(67),
    },
    [198] = {
        [anon_sym_COLON] = ACTIONS(561),
        [sym_comment] = ACTIONS(67),
    },
    [199] = {
        [sym_identifier] = ACTIONS(563),
        [sym_comment] = ACTIONS(67),
    },
    [200] = {
        [anon_sym_RPAREN] = ACTIONS(565),
        [sym_comment] = ACTIONS(67),
    },
    [201] = {
        [anon_sym_RPAREN] = ACTIONS(567),
        [anon_sym_STAR] = ACTIONS(569),
        [sym_identifier] = ACTIONS(571),
        [sym_comment] = ACTIONS(67),
    },
    [202] = {
        [anon_sym_COLON] = ACTIONS(573),
        [sym_comment] = ACTIONS(67),
    },
    [203] = {
        [sym__expression] = STATE(204),
        [sym_binary_operator] = STATE(32),
        [sym_subscript] = STATE(32),
        [sym_call] = STATE(32),
        [sym_number] = ACTIONS(111),
        [sym_identifier] = ACTIONS(111),
        [sym_comment] = ACTIONS(67),
    },
    [204] = {
        [anon_sym_COMMA] = ACTIONS(575),
        [anon_sym_LPAREN] = ACTIONS(195),
        [anon_sym_RPAREN] = ACTIONS(575),
        [anon_sym_PLUS] = ACTIONS(197),
        [anon_sym_LBRACK] = ACTIONS(199),
        [sym_comment] = ACTIONS(67),
    },
    [205] = {
        [anon_sym_COLON] = ACTIONS(577),
        [sym_comment] = ACTIONS(67),
    },
    [206] = {
        [sym_dictionary_splat_parameter] = STATE(207),
        [anon_sym_STAR] = ACTIONS(557),
        [sym_comment] = ACTIONS(67),
    },
    [207] = {
        [anon_sym_RPAREN] = ACTIONS(567),
        [sym_comment] = ACTIONS(67),
    },
    [208] = {
        [anon_sym_RPAREN] = ACTIONS(551),
        [anon_sym_STAR] = ACTIONS(579),
        [sym_identifier] = ACTIONS(581),
        [sym_comment] = ACTIONS(67),
    },
    [209] = {
        [anon_sym_COMMA] = ACTIONS(583),
        [anon_sym_RPAREN] = ACTIONS(583),
        [sym_comment] = ACTIONS(67),
    },
    [210] = {
        [aux_sym_with_statement_repeat1] = STATE(216),
        [anon_sym_COMMA] = ACTIONS(585),
        [anon_sym_COLON] = ACTIONS(587),
        [sym_comment] = ACTIONS(67),
    },
    [211] = {
        [anon_sym_COMMA] = ACTIONS(589),
        [anon_sym_COLON] = ACTIONS(589),
        [anon_sym_as] = ACTIONS(591),
        [anon_sym_LPAREN] = ACTIONS(195),
        [anon_sym_PLUS] = ACTIONS(197),
        [anon_sym_LBRACK] = ACTIONS(199),
        [sym_comment] = ACTIONS(67),
    },
    [212] = {
        [sym__expression] = STATE(213),
        [sym_binary_operator] = STATE(32),
        [sym_subscript] = STATE(32),
        [sym_call] = STATE(32),
        [sym_number] = ACTIONS(111),
        [sym_identifier] = ACTIONS(111),
        [sym_comment] = ACTIONS(67),
    },
    [213] = {
        [anon_sym_COMMA] = ACTIONS(593),
        [anon_sym_COLON] = ACTIONS(593),
        [anon_sym_LPAREN] = ACTIONS(195),
        [anon_sym_PLUS] = ACTIONS(197),
        [anon_sym_LBRACK] = ACTIONS(199),
        [sym_comment] = ACTIONS(67),
    },
    [214] = {
        [sym_with_item] = STATE(222),
        [sym__expression] = STATE(211),
        [sym_binary_operator] = STATE(32),
        [sym_subscript] = STATE(32),
        [sym_call] = STATE(32),
        [sym_number] = ACTIONS(111),
        [sym_identifier] = ACTIONS(111),
        [sym_comment] = ACTIONS(67),
    },
    [215] = {
        [sym__simple_statement] = STATE(141),
        [sym_print_statement] = STATE(138),
        [sym_expression_statement] = STATE(138),
        [sym_return_statement] = STATE(138),
        [sym_delete_statement] = STATE(138),
        [sym__suite] = STATE(221),
        [sym__expression] = STATE(143),
        [sym_binary_operator] = STATE(139),
        [sym_subscript] = STATE(139),
        [sym_call] = STATE(139),
        [anon_sym_print] = ACTIONS(417),
        [anon_sym_return] = ACTIONS(419),
        [anon_sym_del] = ACTIONS(421),
        [sym_pass_statement] = ACTIONS(423),
        [sym_break_statement] = ACTIONS(423),
        [sym_continue_statement] = ACTIONS(423),
        [sym_number] = ACTIONS(425),
        [sym_identifier] = ACTIONS(427),
        [sym_comment] = ACTIONS(67),
        [sym__indent] = ACTIONS(429),
    },
    [216] = {
        [anon_sym_COMMA] = ACTIONS(595),
        [anon_sym_COLON] = ACTIONS(597),
        [sym_comment] = ACTIONS(67),
    },
    [217] = {
        [sym_with_item] = STATE(220),
        [sym__expression] = STATE(211),
        [sym_binary_operator] = STATE(32),
        [sym_subscript] = STATE(32),
        [sym_call] = STATE(32),
        [sym_number] = ACTIONS(111),
        [sym_identifier] = ACTIONS(111),
        [sym_comment] = ACTIONS(67),
    },
    [218] = {
        [sym__simple_statement] = STATE(141),
        [sym_print_statement] = STATE(138),
        [sym_expression_statement] = STATE(138),
        [sym_return_statement] = STATE(138),
        [sym_delete_statement] = STATE(138),
        [sym__suite] = STATE(219),
        [sym__expression] = STATE(143),
        [sym_binary_operator] = STATE(139),
        [sym_subscript] = STATE(139),
        [sym_call] = STATE(139),
        [anon_sym_print] = ACTIONS(417),
        [anon_sym_return] = ACTIONS(419),
        [anon_sym_del] = ACTIONS(421),
        [sym_pass_statement] = ACTIONS(423),
        [sym_break_statement] = ACTIONS(423),
        [sym_continue_statement] = ACTIONS(423),
        [sym_number] = ACTIONS(425),
        [sym_identifier] = ACTIONS(427),
        [sym_comment] = ACTIONS(67),
        [sym__indent] = ACTIONS(429),
    },
    [219] = {
        [anon_sym_print] = ACTIONS(599),
        [anon_sym_return] = ACTIONS(599),
        [anon_sym_del] = ACTIONS(599),
        [sym_pass_statement] = ACTIONS(599),
        [sym_break_statement] = ACTIONS(599),
        [sym_continue_statement] = ACTIONS(599),
        [anon_sym_if] = ACTIONS(599),
        [anon_sym_for] = ACTIONS(599),
        [anon_sym_while] = ACTIONS(599),
        [anon_sym_try] = ACTIONS(599),
        [anon_sym_with] = ACTIONS(599),
        [anon_sym_def] = ACTIONS(599),
        [anon_sym_class] = ACTIONS(599),
        [anon_sym_AT] = ACTIONS(601),
        [sym_number] = ACTIONS(599),
        [sym_identifier] = ACTIONS(603),
        [sym_comment] = ACTIONS(67),
        [sym__dedent] = ACTIONS(601),
    },
    [220] = {
        [anon_sym_COMMA] = ACTIONS(605),
        [anon_sym_COLON] = ACTIONS(605),
        [sym_comment] = ACTIONS(67),
    },
    [221] = {
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
        [anon_sym_AT] = ACTIONS(609),
        [sym_number] = ACTIONS(607),
        [sym_identifier] = ACTIONS(611),
        [sym_comment] = ACTIONS(67),
        [sym__dedent] = ACTIONS(609),
    },
    [222] = {
        [anon_sym_COMMA] = ACTIONS(613),
        [anon_sym_COLON] = ACTIONS(613),
        [sym_comment] = ACTIONS(67),
    },
    [223] = {
        [sym__simple_statement] = STATE(229),
        [sym_print_statement] = STATE(227),
        [sym_expression_statement] = STATE(227),
        [sym_return_statement] = STATE(227),
        [sym_delete_statement] = STATE(227),
        [sym__suite] = STATE(230),
        [sym__expression] = STATE(231),
        [sym_binary_operator] = STATE(32),
        [sym_subscript] = STATE(32),
        [sym_call] = STATE(32),
        [anon_sym_print] = ACTIONS(615),
        [anon_sym_return] = ACTIONS(617),
        [anon_sym_del] = ACTIONS(619),
        [sym_pass_statement] = ACTIONS(621),
        [sym_break_statement] = ACTIONS(621),
        [sym_continue_statement] = ACTIONS(621),
        [sym_number] = ACTIONS(111),
        [sym_identifier] = ACTIONS(623),
        [sym_comment] = ACTIONS(67),
        [sym__indent] = ACTIONS(625),
    },
    [224] = {
        [sym__expression] = STATE(258),
        [sym_binary_operator] = STATE(32),
        [sym_subscript] = STATE(32),
        [sym_call] = STATE(32),
        [sym_number] = ACTIONS(111),
        [sym_identifier] = ACTIONS(111),
        [sym_comment] = ACTIONS(67),
    },
    [225] = {
        [sym_expression_list] = STATE(257),
        [sym__expression] = STATE(104),
        [sym_binary_operator] = STATE(32),
        [sym_subscript] = STATE(32),
        [sym_call] = STATE(32),
        [sym_number] = ACTIONS(111),
        [sym_identifier] = ACTIONS(111),
        [sym_comment] = ACTIONS(67),
    },
    [226] = {
        [sym_expression_list] = STATE(256),
        [sym__expression] = STATE(104),
        [sym_binary_operator] = STATE(32),
        [sym_subscript] = STATE(32),
        [sym_call] = STATE(32),
        [sym_number] = ACTIONS(111),
        [sym_identifier] = ACTIONS(111),
        [sym_comment] = ACTIONS(67),
    },
    [227] = {
        [anon_sym_except] = ACTIONS(105),
        [anon_sym_finally] = ACTIONS(105),
        [sym_comment] = ACTIONS(67),
    },
    [228] = {
        [sym__statement] = STATE(119),
        [sym__simple_statement] = STATE(120),
        [sym_print_statement] = STATE(5),
        [sym_expression_statement] = STATE(5),
        [sym_return_statement] = STATE(5),
        [sym_delete_statement] = STATE(5),
        [sym__compound_statement] = STATE(121),
        [sym_if_statement] = STATE(122),
        [sym_for_statement] = STATE(122),
        [sym_while_statement] = STATE(122),
        [sym_try_statement] = STATE(122),
        [sym_with_statement] = STATE(122),
        [sym_function_definition] = STATE(122),
        [sym_class_definition] = STATE(122),
        [sym_decorated_definition] = STATE(122),
        [sym_decorator] = STATE(20),
        [sym__expression] = STATE(21),
        [sym_binary_operator] = STATE(14),
        [sym_subscript] = STATE(14),
        [sym_call] = STATE(14),
        [aux_sym_module_repeat1] = STATE(254),
        [aux_sym_decorated_definition_repeat1] = STATE(124),
        [anon_sym_print] = ACTIONS(77),
        [anon_sym_return] = ACTIONS(79),
        [anon_sym_del] = ACTIONS(81),
        [sym_pass_statement] = ACTIONS(83),
        [sym_break_statement] = ACTIONS(83),
        [sym_continue_statement] = ACTIONS(83),
        [anon_sym_if] = ACTIONS(359),
        [anon_sym_for] = ACTIONS(361),
        [anon_sym_while] = ACTIONS(363),
        [anon_sym_try] = ACTIONS(365),
        [anon_sym_with] = ACTIONS(367),
        [anon_sym_def] = ACTIONS(369),
        [anon_sym_class] = ACTIONS(371),
        [anon_sym_AT] = ACTIONS(99),
        [sym_number] = ACTIONS(101),
        [sym_identifier] = ACTIONS(103),
        [sym_comment] = ACTIONS(67),
        [sym__dedent] = ACTIONS(627),
    },
    [229] = {
        [anon_sym_except] = ACTIONS(375),
        [anon_sym_finally] = ACTIONS(375),
        [sym_comment] = ACTIONS(67),
    },
    [230] = {
        [sym_except_clause] = STATE(234),
        [sym_finally_clause] = STATE(235),
        [aux_sym_try_statement_repeat1] = STATE(236),
        [anon_sym_except] = ACTIONS(629),
        [anon_sym_finally] = ACTIONS(631),
        [sym_comment] = ACTIONS(67),
    },
    [231] = {
        [anon_sym_except] = ACTIONS(151),
        [anon_sym_finally] = ACTIONS(151),
        [anon_sym_LPAREN] = ACTIONS(195),
        [anon_sym_PLUS] = ACTIONS(197),
        [anon_sym_LBRACK] = ACTIONS(199),
        [sym_comment] = ACTIONS(67),
    },
    [232] = {
        [sym__expression] = STATE(246),
        [sym_binary_operator] = STATE(32),
        [sym_subscript] = STATE(32),
        [sym_call] = STATE(32),
        [sym_number] = ACTIONS(111),
        [sym_identifier] = ACTIONS(111),
        [sym_comment] = ACTIONS(67),
    },
    [233] = {
        [anon_sym_COLON] = ACTIONS(633),
        [sym_comment] = ACTIONS(67),
    },
    [234] = {
        [anon_sym_print] = ACTIONS(635),
        [anon_sym_return] = ACTIONS(635),
        [anon_sym_del] = ACTIONS(635),
        [sym_pass_statement] = ACTIONS(635),
        [sym_break_statement] = ACTIONS(635),
        [sym_continue_statement] = ACTIONS(635),
        [anon_sym_if] = ACTIONS(635),
        [anon_sym_else] = ACTIONS(635),
        [anon_sym_for] = ACTIONS(635),
        [anon_sym_while] = ACTIONS(635),
        [anon_sym_try] = ACTIONS(635),
        [anon_sym_except] = ACTIONS(635),
        [anon_sym_finally] = ACTIONS(635),
        [anon_sym_with] = ACTIONS(635),
        [anon_sym_def] = ACTIONS(635),
        [anon_sym_class] = ACTIONS(635),
        [anon_sym_AT] = ACTIONS(637),
        [sym_number] = ACTIONS(635),
        [sym_identifier] = ACTIONS(639),
        [sym_comment] = ACTIONS(67),
        [sym__dedent] = ACTIONS(637),
    },
    [235] = {
        [anon_sym_print] = ACTIONS(641),
        [anon_sym_return] = ACTIONS(641),
        [anon_sym_del] = ACTIONS(641),
        [sym_pass_statement] = ACTIONS(641),
        [sym_break_statement] = ACTIONS(641),
        [sym_continue_statement] = ACTIONS(641),
        [anon_sym_if] = ACTIONS(641),
        [anon_sym_for] = ACTIONS(641),
        [anon_sym_while] = ACTIONS(641),
        [anon_sym_try] = ACTIONS(641),
        [anon_sym_with] = ACTIONS(641),
        [anon_sym_def] = ACTIONS(641),
        [anon_sym_class] = ACTIONS(641),
        [anon_sym_AT] = ACTIONS(643),
        [sym_number] = ACTIONS(641),
        [sym_identifier] = ACTIONS(645),
        [sym_comment] = ACTIONS(67),
        [sym__dedent] = ACTIONS(643),
    },
    [236] = {
        [sym_else_clause] = STATE(238),
        [sym_except_clause] = STATE(239),
        [sym_finally_clause] = STATE(240),
        [anon_sym_print] = ACTIONS(641),
        [anon_sym_return] = ACTIONS(641),
        [anon_sym_del] = ACTIONS(641),
        [sym_pass_statement] = ACTIONS(641),
        [sym_break_statement] = ACTIONS(641),
        [sym_continue_statement] = ACTIONS(641),
        [anon_sym_if] = ACTIONS(641),
        [anon_sym_else] = ACTIONS(647),
        [anon_sym_for] = ACTIONS(641),
        [anon_sym_while] = ACTIONS(641),
        [anon_sym_try] = ACTIONS(641),
        [anon_sym_except] = ACTIONS(649),
        [anon_sym_finally] = ACTIONS(651),
        [anon_sym_with] = ACTIONS(641),
        [anon_sym_def] = ACTIONS(641),
        [anon_sym_class] = ACTIONS(641),
        [anon_sym_AT] = ACTIONS(643),
        [sym_number] = ACTIONS(641),
        [sym_identifier] = ACTIONS(645),
        [sym_comment] = ACTIONS(67),
        [sym__dedent] = ACTIONS(643),
    },
    [237] = {
        [anon_sym_COLON] = ACTIONS(653),
        [sym_comment] = ACTIONS(67),
    },
    [238] = {
        [sym_finally_clause] = STATE(241),
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
        [anon_sym_finally] = ACTIONS(651),
        [anon_sym_with] = ACTIONS(655),
        [anon_sym_def] = ACTIONS(655),
        [anon_sym_class] = ACTIONS(655),
        [anon_sym_AT] = ACTIONS(657),
        [sym_number] = ACTIONS(655),
        [sym_identifier] = ACTIONS(659),
        [sym_comment] = ACTIONS(67),
        [sym__dedent] = ACTIONS(657),
    },
    [239] = {
        [anon_sym_print] = ACTIONS(661),
        [anon_sym_return] = ACTIONS(661),
        [anon_sym_del] = ACTIONS(661),
        [sym_pass_statement] = ACTIONS(661),
        [sym_break_statement] = ACTIONS(661),
        [sym_continue_statement] = ACTIONS(661),
        [anon_sym_if] = ACTIONS(661),
        [anon_sym_else] = ACTIONS(661),
        [anon_sym_for] = ACTIONS(661),
        [anon_sym_while] = ACTIONS(661),
        [anon_sym_try] = ACTIONS(661),
        [anon_sym_except] = ACTIONS(661),
        [anon_sym_finally] = ACTIONS(661),
        [anon_sym_with] = ACTIONS(661),
        [anon_sym_def] = ACTIONS(661),
        [anon_sym_class] = ACTIONS(661),
        [anon_sym_AT] = ACTIONS(663),
        [sym_number] = ACTIONS(661),
        [sym_identifier] = ACTIONS(665),
        [sym_comment] = ACTIONS(67),
        [sym__dedent] = ACTIONS(663),
    },
    [240] = {
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
        [sym_number] = ACTIONS(655),
        [sym_identifier] = ACTIONS(659),
        [sym_comment] = ACTIONS(67),
        [sym__dedent] = ACTIONS(657),
    },
    [241] = {
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
        [sym_number] = ACTIONS(667),
        [sym_identifier] = ACTIONS(671),
        [sym_comment] = ACTIONS(67),
        [sym__dedent] = ACTIONS(669),
    },
    [242] = {
        [sym__simple_statement] = STATE(141),
        [sym_print_statement] = STATE(138),
        [sym_expression_statement] = STATE(138),
        [sym_return_statement] = STATE(138),
        [sym_delete_statement] = STATE(138),
        [sym__suite] = STATE(243),
        [sym__expression] = STATE(143),
        [sym_binary_operator] = STATE(139),
        [sym_subscript] = STATE(139),
        [sym_call] = STATE(139),
        [anon_sym_print] = ACTIONS(417),
        [anon_sym_return] = ACTIONS(419),
        [anon_sym_del] = ACTIONS(421),
        [sym_pass_statement] = ACTIONS(423),
        [sym_break_statement] = ACTIONS(423),
        [sym_continue_statement] = ACTIONS(423),
        [sym_number] = ACTIONS(425),
        [sym_identifier] = ACTIONS(427),
        [sym_comment] = ACTIONS(67),
        [sym__indent] = ACTIONS(429),
    },
    [243] = {
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
        [anon_sym_finally] = ACTIONS(673),
        [anon_sym_with] = ACTIONS(673),
        [anon_sym_def] = ACTIONS(673),
        [anon_sym_class] = ACTIONS(673),
        [anon_sym_AT] = ACTIONS(675),
        [sym_number] = ACTIONS(673),
        [sym_identifier] = ACTIONS(677),
        [sym_comment] = ACTIONS(67),
        [sym__dedent] = ACTIONS(675),
    },
    [244] = {
        [sym__simple_statement] = STATE(141),
        [sym_print_statement] = STATE(138),
        [sym_expression_statement] = STATE(138),
        [sym_return_statement] = STATE(138),
        [sym_delete_statement] = STATE(138),
        [sym__suite] = STATE(245),
        [sym__expression] = STATE(143),
        [sym_binary_operator] = STATE(139),
        [sym_subscript] = STATE(139),
        [sym_call] = STATE(139),
        [anon_sym_print] = ACTIONS(417),
        [anon_sym_return] = ACTIONS(419),
        [anon_sym_del] = ACTIONS(421),
        [sym_pass_statement] = ACTIONS(423),
        [sym_break_statement] = ACTIONS(423),
        [sym_continue_statement] = ACTIONS(423),
        [sym_number] = ACTIONS(425),
        [sym_identifier] = ACTIONS(427),
        [sym_comment] = ACTIONS(67),
        [sym__indent] = ACTIONS(429),
    },
    [245] = {
        [anon_sym_print] = ACTIONS(679),
        [anon_sym_return] = ACTIONS(679),
        [anon_sym_del] = ACTIONS(679),
        [sym_pass_statement] = ACTIONS(679),
        [sym_break_statement] = ACTIONS(679),
        [sym_continue_statement] = ACTIONS(679),
        [anon_sym_if] = ACTIONS(679),
        [anon_sym_for] = ACTIONS(679),
        [anon_sym_while] = ACTIONS(679),
        [anon_sym_try] = ACTIONS(679),
        [anon_sym_with] = ACTIONS(679),
        [anon_sym_def] = ACTIONS(679),
        [anon_sym_class] = ACTIONS(679),
        [anon_sym_AT] = ACTIONS(681),
        [sym_number] = ACTIONS(679),
        [sym_identifier] = ACTIONS(683),
        [sym_comment] = ACTIONS(67),
        [sym__dedent] = ACTIONS(681),
    },
    [246] = {
        [anon_sym_COMMA] = ACTIONS(685),
        [anon_sym_COLON] = ACTIONS(687),
        [anon_sym_as] = ACTIONS(685),
        [anon_sym_LPAREN] = ACTIONS(195),
        [anon_sym_PLUS] = ACTIONS(197),
        [anon_sym_LBRACK] = ACTIONS(199),
        [sym_comment] = ACTIONS(67),
    },
    [247] = {
        [sym__expression] = STATE(249),
        [sym_binary_operator] = STATE(32),
        [sym_subscript] = STATE(32),
        [sym_call] = STATE(32),
        [sym_number] = ACTIONS(111),
        [sym_identifier] = ACTIONS(111),
        [sym_comment] = ACTIONS(67),
    },
    [248] = {
        [sym__simple_statement] = STATE(141),
        [sym_print_statement] = STATE(138),
        [sym_expression_statement] = STATE(138),
        [sym_return_statement] = STATE(138),
        [sym_delete_statement] = STATE(138),
        [sym__suite] = STATE(252),
        [sym__expression] = STATE(143),
        [sym_binary_operator] = STATE(139),
        [sym_subscript] = STATE(139),
        [sym_call] = STATE(139),
        [anon_sym_print] = ACTIONS(417),
        [anon_sym_return] = ACTIONS(419),
        [anon_sym_del] = ACTIONS(421),
        [sym_pass_statement] = ACTIONS(423),
        [sym_break_statement] = ACTIONS(423),
        [sym_continue_statement] = ACTIONS(423),
        [sym_number] = ACTIONS(425),
        [sym_identifier] = ACTIONS(427),
        [sym_comment] = ACTIONS(67),
        [sym__indent] = ACTIONS(429),
    },
    [249] = {
        [anon_sym_COLON] = ACTIONS(689),
        [anon_sym_LPAREN] = ACTIONS(195),
        [anon_sym_PLUS] = ACTIONS(197),
        [anon_sym_LBRACK] = ACTIONS(199),
        [sym_comment] = ACTIONS(67),
    },
    [250] = {
        [sym__simple_statement] = STATE(141),
        [sym_print_statement] = STATE(138),
        [sym_expression_statement] = STATE(138),
        [sym_return_statement] = STATE(138),
        [sym_delete_statement] = STATE(138),
        [sym__suite] = STATE(251),
        [sym__expression] = STATE(143),
        [sym_binary_operator] = STATE(139),
        [sym_subscript] = STATE(139),
        [sym_call] = STATE(139),
        [anon_sym_print] = ACTIONS(417),
        [anon_sym_return] = ACTIONS(419),
        [anon_sym_del] = ACTIONS(421),
        [sym_pass_statement] = ACTIONS(423),
        [sym_break_statement] = ACTIONS(423),
        [sym_continue_statement] = ACTIONS(423),
        [sym_number] = ACTIONS(425),
        [sym_identifier] = ACTIONS(427),
        [sym_comment] = ACTIONS(67),
        [sym__indent] = ACTIONS(429),
    },
    [251] = {
        [anon_sym_print] = ACTIONS(691),
        [anon_sym_return] = ACTIONS(691),
        [anon_sym_del] = ACTIONS(691),
        [sym_pass_statement] = ACTIONS(691),
        [sym_break_statement] = ACTIONS(691),
        [sym_continue_statement] = ACTIONS(691),
        [anon_sym_if] = ACTIONS(691),
        [anon_sym_else] = ACTIONS(691),
        [anon_sym_for] = ACTIONS(691),
        [anon_sym_while] = ACTIONS(691),
        [anon_sym_try] = ACTIONS(691),
        [anon_sym_except] = ACTIONS(691),
        [anon_sym_finally] = ACTIONS(691),
        [anon_sym_with] = ACTIONS(691),
        [anon_sym_def] = ACTIONS(691),
        [anon_sym_class] = ACTIONS(691),
        [anon_sym_AT] = ACTIONS(693),
        [sym_number] = ACTIONS(691),
        [sym_identifier] = ACTIONS(695),
        [sym_comment] = ACTIONS(67),
        [sym__dedent] = ACTIONS(693),
    },
    [252] = {
        [anon_sym_print] = ACTIONS(697),
        [anon_sym_return] = ACTIONS(697),
        [anon_sym_del] = ACTIONS(697),
        [sym_pass_statement] = ACTIONS(697),
        [sym_break_statement] = ACTIONS(697),
        [sym_continue_statement] = ACTIONS(697),
        [anon_sym_if] = ACTIONS(697),
        [anon_sym_else] = ACTIONS(697),
        [anon_sym_for] = ACTIONS(697),
        [anon_sym_while] = ACTIONS(697),
        [anon_sym_try] = ACTIONS(697),
        [anon_sym_except] = ACTIONS(697),
        [anon_sym_finally] = ACTIONS(697),
        [anon_sym_with] = ACTIONS(697),
        [anon_sym_def] = ACTIONS(697),
        [anon_sym_class] = ACTIONS(697),
        [anon_sym_AT] = ACTIONS(699),
        [sym_number] = ACTIONS(697),
        [sym_identifier] = ACTIONS(701),
        [sym_comment] = ACTIONS(67),
        [sym__dedent] = ACTIONS(699),
    },
    [253] = {
        [anon_sym_except] = ACTIONS(393),
        [anon_sym_finally] = ACTIONS(393),
        [sym_comment] = ACTIONS(67),
    },
    [254] = {
        [sym__statement] = STATE(127),
        [sym__simple_statement] = STATE(120),
        [sym_print_statement] = STATE(5),
        [sym_expression_statement] = STATE(5),
        [sym_return_statement] = STATE(5),
        [sym_delete_statement] = STATE(5),
        [sym__compound_statement] = STATE(121),
        [sym_if_statement] = STATE(122),
        [sym_for_statement] = STATE(122),
        [sym_while_statement] = STATE(122),
        [sym_try_statement] = STATE(122),
        [sym_with_statement] = STATE(122),
        [sym_function_definition] = STATE(122),
        [sym_class_definition] = STATE(122),
        [sym_decorated_definition] = STATE(122),
        [sym_decorator] = STATE(20),
        [sym__expression] = STATE(21),
        [sym_binary_operator] = STATE(14),
        [sym_subscript] = STATE(14),
        [sym_call] = STATE(14),
        [aux_sym_decorated_definition_repeat1] = STATE(124),
        [anon_sym_print] = ACTIONS(77),
        [anon_sym_return] = ACTIONS(79),
        [anon_sym_del] = ACTIONS(81),
        [sym_pass_statement] = ACTIONS(83),
        [sym_break_statement] = ACTIONS(83),
        [sym_continue_statement] = ACTIONS(83),
        [anon_sym_if] = ACTIONS(359),
        [anon_sym_for] = ACTIONS(361),
        [anon_sym_while] = ACTIONS(363),
        [anon_sym_try] = ACTIONS(365),
        [anon_sym_with] = ACTIONS(367),
        [anon_sym_def] = ACTIONS(369),
        [anon_sym_class] = ACTIONS(371),
        [anon_sym_AT] = ACTIONS(99),
        [sym_number] = ACTIONS(101),
        [sym_identifier] = ACTIONS(103),
        [sym_comment] = ACTIONS(67),
        [sym__dedent] = ACTIONS(703),
    },
    [255] = {
        [anon_sym_except] = ACTIONS(407),
        [anon_sym_finally] = ACTIONS(407),
        [sym_comment] = ACTIONS(67),
    },
    [256] = {
        [anon_sym_except] = ACTIONS(469),
        [anon_sym_finally] = ACTIONS(469),
        [sym_comment] = ACTIONS(67),
    },
    [257] = {
        [anon_sym_except] = ACTIONS(495),
        [anon_sym_finally] = ACTIONS(495),
        [sym_comment] = ACTIONS(67),
    },
    [258] = {
        [aux_sym_print_statement_repeat1] = STATE(259),
        [anon_sym_COMMA] = ACTIONS(317),
        [anon_sym_except] = ACTIONS(501),
        [anon_sym_finally] = ACTIONS(501),
        [anon_sym_LPAREN] = ACTIONS(195),
        [anon_sym_PLUS] = ACTIONS(197),
        [anon_sym_LBRACK] = ACTIONS(199),
        [sym_comment] = ACTIONS(67),
    },
    [259] = {
        [anon_sym_COMMA] = ACTIONS(323),
        [anon_sym_except] = ACTIONS(507),
        [anon_sym_finally] = ACTIONS(507),
        [sym_comment] = ACTIONS(67),
    },
    [260] = {
        [anon_sym_COLON] = ACTIONS(705),
        [anon_sym_LPAREN] = ACTIONS(195),
        [anon_sym_PLUS] = ACTIONS(197),
        [anon_sym_LBRACK] = ACTIONS(199),
        [sym_comment] = ACTIONS(67),
    },
    [261] = {
        [sym__simple_statement] = STATE(141),
        [sym_print_statement] = STATE(138),
        [sym_expression_statement] = STATE(138),
        [sym_return_statement] = STATE(138),
        [sym_delete_statement] = STATE(138),
        [sym__suite] = STATE(262),
        [sym__expression] = STATE(143),
        [sym_binary_operator] = STATE(139),
        [sym_subscript] = STATE(139),
        [sym_call] = STATE(139),
        [anon_sym_print] = ACTIONS(417),
        [anon_sym_return] = ACTIONS(419),
        [anon_sym_del] = ACTIONS(421),
        [sym_pass_statement] = ACTIONS(423),
        [sym_break_statement] = ACTIONS(423),
        [sym_continue_statement] = ACTIONS(423),
        [sym_number] = ACTIONS(425),
        [sym_identifier] = ACTIONS(427),
        [sym_comment] = ACTIONS(67),
        [sym__indent] = ACTIONS(429),
    },
    [262] = {
        [sym_else_clause] = STATE(263),
        [anon_sym_print] = ACTIONS(707),
        [anon_sym_return] = ACTIONS(707),
        [anon_sym_del] = ACTIONS(707),
        [sym_pass_statement] = ACTIONS(707),
        [sym_break_statement] = ACTIONS(707),
        [sym_continue_statement] = ACTIONS(707),
        [anon_sym_if] = ACTIONS(707),
        [anon_sym_else] = ACTIONS(647),
        [anon_sym_for] = ACTIONS(707),
        [anon_sym_while] = ACTIONS(707),
        [anon_sym_try] = ACTIONS(707),
        [anon_sym_with] = ACTIONS(707),
        [anon_sym_def] = ACTIONS(707),
        [anon_sym_class] = ACTIONS(707),
        [anon_sym_AT] = ACTIONS(709),
        [sym_number] = ACTIONS(707),
        [sym_identifier] = ACTIONS(711),
        [sym_comment] = ACTIONS(67),
        [sym__dedent] = ACTIONS(709),
    },
    [263] = {
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
        [sym_number] = ACTIONS(713),
        [sym_identifier] = ACTIONS(717),
        [sym_comment] = ACTIONS(67),
        [sym__dedent] = ACTIONS(715),
    },
    [264] = {
        [anon_sym_in] = ACTIONS(719),
        [sym_comment] = ACTIONS(67),
    },
    [265] = {
        [sym_expression_list] = STATE(266),
        [sym__expression] = STATE(104),
        [sym_binary_operator] = STATE(32),
        [sym_subscript] = STATE(32),
        [sym_call] = STATE(32),
        [sym_number] = ACTIONS(111),
        [sym_identifier] = ACTIONS(111),
        [sym_comment] = ACTIONS(67),
    },
    [266] = {
        [anon_sym_COLON] = ACTIONS(721),
        [sym_comment] = ACTIONS(67),
    },
    [267] = {
        [sym__simple_statement] = STATE(141),
        [sym_print_statement] = STATE(138),
        [sym_expression_statement] = STATE(138),
        [sym_return_statement] = STATE(138),
        [sym_delete_statement] = STATE(138),
        [sym__suite] = STATE(268),
        [sym__expression] = STATE(143),
        [sym_binary_operator] = STATE(139),
        [sym_subscript] = STATE(139),
        [sym_call] = STATE(139),
        [anon_sym_print] = ACTIONS(417),
        [anon_sym_return] = ACTIONS(419),
        [anon_sym_del] = ACTIONS(421),
        [sym_pass_statement] = ACTIONS(423),
        [sym_break_statement] = ACTIONS(423),
        [sym_continue_statement] = ACTIONS(423),
        [sym_number] = ACTIONS(425),
        [sym_identifier] = ACTIONS(427),
        [sym_comment] = ACTIONS(67),
        [sym__indent] = ACTIONS(429),
    },
    [268] = {
        [sym_else_clause] = STATE(269),
        [anon_sym_print] = ACTIONS(723),
        [anon_sym_return] = ACTIONS(723),
        [anon_sym_del] = ACTIONS(723),
        [sym_pass_statement] = ACTIONS(723),
        [sym_break_statement] = ACTIONS(723),
        [sym_continue_statement] = ACTIONS(723),
        [anon_sym_if] = ACTIONS(723),
        [anon_sym_else] = ACTIONS(647),
        [anon_sym_for] = ACTIONS(723),
        [anon_sym_while] = ACTIONS(723),
        [anon_sym_try] = ACTIONS(723),
        [anon_sym_with] = ACTIONS(723),
        [anon_sym_def] = ACTIONS(723),
        [anon_sym_class] = ACTIONS(723),
        [anon_sym_AT] = ACTIONS(725),
        [sym_number] = ACTIONS(723),
        [sym_identifier] = ACTIONS(727),
        [sym_comment] = ACTIONS(67),
        [sym__dedent] = ACTIONS(725),
    },
    [269] = {
        [anon_sym_print] = ACTIONS(729),
        [anon_sym_return] = ACTIONS(729),
        [anon_sym_del] = ACTIONS(729),
        [sym_pass_statement] = ACTIONS(729),
        [sym_break_statement] = ACTIONS(729),
        [sym_continue_statement] = ACTIONS(729),
        [anon_sym_if] = ACTIONS(729),
        [anon_sym_for] = ACTIONS(729),
        [anon_sym_while] = ACTIONS(729),
        [anon_sym_try] = ACTIONS(729),
        [anon_sym_with] = ACTIONS(729),
        [anon_sym_def] = ACTIONS(729),
        [anon_sym_class] = ACTIONS(729),
        [anon_sym_AT] = ACTIONS(731),
        [sym_number] = ACTIONS(729),
        [sym_identifier] = ACTIONS(733),
        [sym_comment] = ACTIONS(67),
        [sym__dedent] = ACTIONS(731),
    },
    [270] = {
        [anon_sym_COLON] = ACTIONS(735),
        [anon_sym_LPAREN] = ACTIONS(195),
        [anon_sym_PLUS] = ACTIONS(197),
        [anon_sym_LBRACK] = ACTIONS(199),
        [sym_comment] = ACTIONS(67),
    },
    [271] = {
        [sym__simple_statement] = STATE(141),
        [sym_print_statement] = STATE(138),
        [sym_expression_statement] = STATE(138),
        [sym_return_statement] = STATE(138),
        [sym_delete_statement] = STATE(138),
        [sym__suite] = STATE(272),
        [sym__expression] = STATE(143),
        [sym_binary_operator] = STATE(139),
        [sym_subscript] = STATE(139),
        [sym_call] = STATE(139),
        [anon_sym_print] = ACTIONS(417),
        [anon_sym_return] = ACTIONS(419),
        [anon_sym_del] = ACTIONS(421),
        [sym_pass_statement] = ACTIONS(423),
        [sym_break_statement] = ACTIONS(423),
        [sym_continue_statement] = ACTIONS(423),
        [sym_number] = ACTIONS(425),
        [sym_identifier] = ACTIONS(427),
        [sym_comment] = ACTIONS(67),
        [sym__indent] = ACTIONS(429),
    },
    [272] = {
        [sym_elif_clause] = STATE(274),
        [sym_else_clause] = STATE(275),
        [aux_sym_if_statement_repeat1] = STATE(276),
        [anon_sym_print] = ACTIONS(737),
        [anon_sym_return] = ACTIONS(737),
        [anon_sym_del] = ACTIONS(737),
        [sym_pass_statement] = ACTIONS(737),
        [sym_break_statement] = ACTIONS(737),
        [sym_continue_statement] = ACTIONS(737),
        [anon_sym_if] = ACTIONS(737),
        [anon_sym_elif] = ACTIONS(739),
        [anon_sym_else] = ACTIONS(647),
        [anon_sym_for] = ACTIONS(737),
        [anon_sym_while] = ACTIONS(737),
        [anon_sym_try] = ACTIONS(737),
        [anon_sym_with] = ACTIONS(737),
        [anon_sym_def] = ACTIONS(737),
        [anon_sym_class] = ACTIONS(737),
        [anon_sym_AT] = ACTIONS(741),
        [sym_number] = ACTIONS(737),
        [sym_identifier] = ACTIONS(743),
        [sym_comment] = ACTIONS(67),
        [sym__dedent] = ACTIONS(741),
    },
    [273] = {
        [sym__expression] = STATE(279),
        [sym_binary_operator] = STATE(32),
        [sym_subscript] = STATE(32),
        [sym_call] = STATE(32),
        [sym_number] = ACTIONS(111),
        [sym_identifier] = ACTIONS(111),
        [sym_comment] = ACTIONS(67),
    },
    [274] = {
        [anon_sym_print] = ACTIONS(745),
        [anon_sym_return] = ACTIONS(745),
        [anon_sym_del] = ACTIONS(745),
        [sym_pass_statement] = ACTIONS(745),
        [sym_break_statement] = ACTIONS(745),
        [sym_continue_statement] = ACTIONS(745),
        [anon_sym_if] = ACTIONS(745),
        [anon_sym_elif] = ACTIONS(745),
        [anon_sym_else] = ACTIONS(745),
        [anon_sym_for] = ACTIONS(745),
        [anon_sym_while] = ACTIONS(745),
        [anon_sym_try] = ACTIONS(745),
        [anon_sym_with] = ACTIONS(745),
        [anon_sym_def] = ACTIONS(745),
        [anon_sym_class] = ACTIONS(745),
        [anon_sym_AT] = ACTIONS(747),
        [sym_number] = ACTIONS(745),
        [sym_identifier] = ACTIONS(749),
        [sym_comment] = ACTIONS(67),
        [sym__dedent] = ACTIONS(747),
    },
    [275] = {
        [anon_sym_print] = ACTIONS(751),
        [anon_sym_return] = ACTIONS(751),
        [anon_sym_del] = ACTIONS(751),
        [sym_pass_statement] = ACTIONS(751),
        [sym_break_statement] = ACTIONS(751),
        [sym_continue_statement] = ACTIONS(751),
        [anon_sym_if] = ACTIONS(751),
        [anon_sym_for] = ACTIONS(751),
        [anon_sym_while] = ACTIONS(751),
        [anon_sym_try] = ACTIONS(751),
        [anon_sym_with] = ACTIONS(751),
        [anon_sym_def] = ACTIONS(751),
        [anon_sym_class] = ACTIONS(751),
        [anon_sym_AT] = ACTIONS(753),
        [sym_number] = ACTIONS(751),
        [sym_identifier] = ACTIONS(755),
        [sym_comment] = ACTIONS(67),
        [sym__dedent] = ACTIONS(753),
    },
    [276] = {
        [sym_elif_clause] = STATE(277),
        [sym_else_clause] = STATE(278),
        [anon_sym_print] = ACTIONS(751),
        [anon_sym_return] = ACTIONS(751),
        [anon_sym_del] = ACTIONS(751),
        [sym_pass_statement] = ACTIONS(751),
        [sym_break_statement] = ACTIONS(751),
        [sym_continue_statement] = ACTIONS(751),
        [anon_sym_if] = ACTIONS(751),
        [anon_sym_elif] = ACTIONS(739),
        [anon_sym_else] = ACTIONS(647),
        [anon_sym_for] = ACTIONS(751),
        [anon_sym_while] = ACTIONS(751),
        [anon_sym_try] = ACTIONS(751),
        [anon_sym_with] = ACTIONS(751),
        [anon_sym_def] = ACTIONS(751),
        [anon_sym_class] = ACTIONS(751),
        [anon_sym_AT] = ACTIONS(753),
        [sym_number] = ACTIONS(751),
        [sym_identifier] = ACTIONS(755),
        [sym_comment] = ACTIONS(67),
        [sym__dedent] = ACTIONS(753),
    },
    [277] = {
        [anon_sym_print] = ACTIONS(757),
        [anon_sym_return] = ACTIONS(757),
        [anon_sym_del] = ACTIONS(757),
        [sym_pass_statement] = ACTIONS(757),
        [sym_break_statement] = ACTIONS(757),
        [sym_continue_statement] = ACTIONS(757),
        [anon_sym_if] = ACTIONS(757),
        [anon_sym_elif] = ACTIONS(757),
        [anon_sym_else] = ACTIONS(757),
        [anon_sym_for] = ACTIONS(757),
        [anon_sym_while] = ACTIONS(757),
        [anon_sym_try] = ACTIONS(757),
        [anon_sym_with] = ACTIONS(757),
        [anon_sym_def] = ACTIONS(757),
        [anon_sym_class] = ACTIONS(757),
        [anon_sym_AT] = ACTIONS(759),
        [sym_number] = ACTIONS(757),
        [sym_identifier] = ACTIONS(761),
        [sym_comment] = ACTIONS(67),
        [sym__dedent] = ACTIONS(759),
    },
    [278] = {
        [anon_sym_print] = ACTIONS(763),
        [anon_sym_return] = ACTIONS(763),
        [anon_sym_del] = ACTIONS(763),
        [sym_pass_statement] = ACTIONS(763),
        [sym_break_statement] = ACTIONS(763),
        [sym_continue_statement] = ACTIONS(763),
        [anon_sym_if] = ACTIONS(763),
        [anon_sym_for] = ACTIONS(763),
        [anon_sym_while] = ACTIONS(763),
        [anon_sym_try] = ACTIONS(763),
        [anon_sym_with] = ACTIONS(763),
        [anon_sym_def] = ACTIONS(763),
        [anon_sym_class] = ACTIONS(763),
        [anon_sym_AT] = ACTIONS(765),
        [sym_number] = ACTIONS(763),
        [sym_identifier] = ACTIONS(767),
        [sym_comment] = ACTIONS(67),
        [sym__dedent] = ACTIONS(765),
    },
    [279] = {
        [anon_sym_COLON] = ACTIONS(769),
        [anon_sym_LPAREN] = ACTIONS(195),
        [anon_sym_PLUS] = ACTIONS(197),
        [anon_sym_LBRACK] = ACTIONS(199),
        [sym_comment] = ACTIONS(67),
    },
    [280] = {
        [sym__simple_statement] = STATE(141),
        [sym_print_statement] = STATE(138),
        [sym_expression_statement] = STATE(138),
        [sym_return_statement] = STATE(138),
        [sym_delete_statement] = STATE(138),
        [sym__suite] = STATE(281),
        [sym__expression] = STATE(143),
        [sym_binary_operator] = STATE(139),
        [sym_subscript] = STATE(139),
        [sym_call] = STATE(139),
        [anon_sym_print] = ACTIONS(417),
        [anon_sym_return] = ACTIONS(419),
        [anon_sym_del] = ACTIONS(421),
        [sym_pass_statement] = ACTIONS(423),
        [sym_break_statement] = ACTIONS(423),
        [sym_continue_statement] = ACTIONS(423),
        [sym_number] = ACTIONS(425),
        [sym_identifier] = ACTIONS(427),
        [sym_comment] = ACTIONS(67),
        [sym__indent] = ACTIONS(429),
    },
    [281] = {
        [anon_sym_print] = ACTIONS(771),
        [anon_sym_return] = ACTIONS(771),
        [anon_sym_del] = ACTIONS(771),
        [sym_pass_statement] = ACTIONS(771),
        [sym_break_statement] = ACTIONS(771),
        [sym_continue_statement] = ACTIONS(771),
        [anon_sym_if] = ACTIONS(771),
        [anon_sym_elif] = ACTIONS(771),
        [anon_sym_else] = ACTIONS(771),
        [anon_sym_for] = ACTIONS(771),
        [anon_sym_while] = ACTIONS(771),
        [anon_sym_try] = ACTIONS(771),
        [anon_sym_with] = ACTIONS(771),
        [anon_sym_def] = ACTIONS(771),
        [anon_sym_class] = ACTIONS(771),
        [anon_sym_AT] = ACTIONS(773),
        [sym_number] = ACTIONS(771),
        [sym_identifier] = ACTIONS(775),
        [sym_comment] = ACTIONS(67),
        [sym__dedent] = ACTIONS(773),
    },
    [282] = {
        [ts_builtin_sym_end] = ACTIONS(469),
        [anon_sym_SEMI] = ACTIONS(469),
        [anon_sym_print] = ACTIONS(467),
        [anon_sym_return] = ACTIONS(467),
        [anon_sym_del] = ACTIONS(467),
        [sym_pass_statement] = ACTIONS(467),
        [sym_break_statement] = ACTIONS(467),
        [sym_continue_statement] = ACTIONS(467),
        [anon_sym_if] = ACTIONS(467),
        [anon_sym_elif] = ACTIONS(467),
        [anon_sym_else] = ACTIONS(467),
        [anon_sym_for] = ACTIONS(467),
        [anon_sym_while] = ACTIONS(467),
        [anon_sym_try] = ACTIONS(467),
        [anon_sym_except] = ACTIONS(467),
        [anon_sym_finally] = ACTIONS(467),
        [anon_sym_with] = ACTIONS(467),
        [anon_sym_def] = ACTIONS(467),
        [anon_sym_class] = ACTIONS(467),
        [anon_sym_AT] = ACTIONS(469),
        [sym_number] = ACTIONS(467),
        [sym_identifier] = ACTIONS(471),
        [sym_comment] = ACTIONS(67),
        [sym__newline] = ACTIONS(469),
    },
    [283] = {
        [aux_sym_print_statement_repeat1] = STATE(285),
        [ts_builtin_sym_end] = ACTIONS(353),
        [anon_sym_SEMI] = ACTIONS(353),
        [anon_sym_print] = ACTIONS(473),
        [anon_sym_COMMA] = ACTIONS(777),
        [anon_sym_return] = ACTIONS(473),
        [anon_sym_del] = ACTIONS(473),
        [sym_pass_statement] = ACTIONS(473),
        [sym_break_statement] = ACTIONS(473),
        [sym_continue_statement] = ACTIONS(473),
        [anon_sym_if] = ACTIONS(473),
        [anon_sym_elif] = ACTIONS(473),
        [anon_sym_else] = ACTIONS(473),
        [anon_sym_for] = ACTIONS(473),
        [anon_sym_while] = ACTIONS(473),
        [anon_sym_try] = ACTIONS(473),
        [anon_sym_except] = ACTIONS(473),
        [anon_sym_finally] = ACTIONS(473),
        [anon_sym_with] = ACTIONS(473),
        [anon_sym_def] = ACTIONS(473),
        [anon_sym_LPAREN] = ACTIONS(155),
        [anon_sym_class] = ACTIONS(473),
        [anon_sym_AT] = ACTIONS(353),
        [anon_sym_PLUS] = ACTIONS(157),
        [anon_sym_LBRACK] = ACTIONS(159),
        [sym_number] = ACTIONS(473),
        [sym_identifier] = ACTIONS(477),
        [sym_comment] = ACTIONS(67),
        [sym__newline] = ACTIONS(353),
    },
    [284] = {
        [sym__expression] = STATE(288),
        [sym_binary_operator] = STATE(14),
        [sym_subscript] = STATE(14),
        [sym_call] = STATE(14),
        [sym_number] = ACTIONS(101),
        [sym_identifier] = ACTIONS(101),
        [sym_comment] = ACTIONS(67),
    },
    [285] = {
        [ts_builtin_sym_end] = ACTIONS(355),
        [anon_sym_SEMI] = ACTIONS(355),
        [anon_sym_print] = ACTIONS(479),
        [anon_sym_COMMA] = ACTIONS(779),
        [anon_sym_return] = ACTIONS(479),
        [anon_sym_del] = ACTIONS(479),
        [sym_pass_statement] = ACTIONS(479),
        [sym_break_statement] = ACTIONS(479),
        [sym_continue_statement] = ACTIONS(479),
        [anon_sym_if] = ACTIONS(479),
        [anon_sym_elif] = ACTIONS(479),
        [anon_sym_else] = ACTIONS(479),
        [anon_sym_for] = ACTIONS(479),
        [anon_sym_while] = ACTIONS(479),
        [anon_sym_try] = ACTIONS(479),
        [anon_sym_except] = ACTIONS(479),
        [anon_sym_finally] = ACTIONS(479),
        [anon_sym_with] = ACTIONS(479),
        [anon_sym_def] = ACTIONS(479),
        [anon_sym_class] = ACTIONS(479),
        [anon_sym_AT] = ACTIONS(355),
        [sym_number] = ACTIONS(479),
        [sym_identifier] = ACTIONS(483),
        [sym_comment] = ACTIONS(67),
        [sym__newline] = ACTIONS(355),
    },
    [286] = {
        [sym__expression] = STATE(287),
        [sym_binary_operator] = STATE(14),
        [sym_subscript] = STATE(14),
        [sym_call] = STATE(14),
        [sym_number] = ACTIONS(101),
        [sym_identifier] = ACTIONS(101),
        [sym_comment] = ACTIONS(67),
    },
    [287] = {
        [ts_builtin_sym_end] = ACTIONS(329),
        [anon_sym_SEMI] = ACTIONS(329),
        [anon_sym_print] = ACTIONS(485),
        [anon_sym_COMMA] = ACTIONS(329),
        [anon_sym_return] = ACTIONS(485),
        [anon_sym_del] = ACTIONS(485),
        [sym_pass_statement] = ACTIONS(485),
        [sym_break_statement] = ACTIONS(485),
        [sym_continue_statement] = ACTIONS(485),
        [anon_sym_if] = ACTIONS(485),
        [anon_sym_elif] = ACTIONS(485),
        [anon_sym_else] = ACTIONS(485),
        [anon_sym_for] = ACTIONS(485),
        [anon_sym_while] = ACTIONS(485),
        [anon_sym_try] = ACTIONS(485),
        [anon_sym_except] = ACTIONS(485),
        [anon_sym_finally] = ACTIONS(485),
        [anon_sym_with] = ACTIONS(485),
        [anon_sym_def] = ACTIONS(485),
        [anon_sym_LPAREN] = ACTIONS(155),
        [anon_sym_class] = ACTIONS(485),
        [anon_sym_AT] = ACTIONS(329),
        [anon_sym_PLUS] = ACTIONS(157),
        [anon_sym_LBRACK] = ACTIONS(159),
        [sym_number] = ACTIONS(485),
        [sym_identifier] = ACTIONS(487),
        [sym_comment] = ACTIONS(67),
        [sym__newline] = ACTIONS(329),
    },
    [288] = {
        [ts_builtin_sym_end] = ACTIONS(331),
        [anon_sym_SEMI] = ACTIONS(331),
        [anon_sym_print] = ACTIONS(489),
        [anon_sym_COMMA] = ACTIONS(331),
        [anon_sym_return] = ACTIONS(489),
        [anon_sym_del] = ACTIONS(489),
        [sym_pass_statement] = ACTIONS(489),
        [sym_break_statement] = ACTIONS(489),
        [sym_continue_statement] = ACTIONS(489),
        [anon_sym_if] = ACTIONS(489),
        [anon_sym_elif] = ACTIONS(489),
        [anon_sym_else] = ACTIONS(489),
        [anon_sym_for] = ACTIONS(489),
        [anon_sym_while] = ACTIONS(489),
        [anon_sym_try] = ACTIONS(489),
        [anon_sym_except] = ACTIONS(489),
        [anon_sym_finally] = ACTIONS(489),
        [anon_sym_with] = ACTIONS(489),
        [anon_sym_def] = ACTIONS(489),
        [anon_sym_LPAREN] = ACTIONS(155),
        [anon_sym_class] = ACTIONS(489),
        [anon_sym_AT] = ACTIONS(331),
        [anon_sym_PLUS] = ACTIONS(157),
        [anon_sym_LBRACK] = ACTIONS(159),
        [sym_number] = ACTIONS(489),
        [sym_identifier] = ACTIONS(491),
        [sym_comment] = ACTIONS(67),
        [sym__newline] = ACTIONS(331),
    },
    [289] = {
        [ts_builtin_sym_end] = ACTIONS(495),
        [anon_sym_SEMI] = ACTIONS(495),
        [anon_sym_print] = ACTIONS(493),
        [anon_sym_return] = ACTIONS(493),
        [anon_sym_del] = ACTIONS(493),
        [sym_pass_statement] = ACTIONS(493),
        [sym_break_statement] = ACTIONS(493),
        [sym_continue_statement] = ACTIONS(493),
        [anon_sym_if] = ACTIONS(493),
        [anon_sym_elif] = ACTIONS(493),
        [anon_sym_else] = ACTIONS(493),
        [anon_sym_for] = ACTIONS(493),
        [anon_sym_while] = ACTIONS(493),
        [anon_sym_try] = ACTIONS(493),
        [anon_sym_except] = ACTIONS(493),
        [anon_sym_finally] = ACTIONS(493),
        [anon_sym_with] = ACTIONS(493),
        [anon_sym_def] = ACTIONS(493),
        [anon_sym_class] = ACTIONS(493),
        [anon_sym_AT] = ACTIONS(495),
        [sym_number] = ACTIONS(493),
        [sym_identifier] = ACTIONS(497),
        [sym_comment] = ACTIONS(67),
        [sym__newline] = ACTIONS(495),
    },
    [290] = {
        [aux_sym_print_statement_repeat1] = STATE(291),
        [ts_builtin_sym_end] = ACTIONS(501),
        [anon_sym_SEMI] = ACTIONS(501),
        [anon_sym_print] = ACTIONS(499),
        [anon_sym_COMMA] = ACTIONS(777),
        [anon_sym_return] = ACTIONS(499),
        [anon_sym_del] = ACTIONS(499),
        [sym_pass_statement] = ACTIONS(499),
        [sym_break_statement] = ACTIONS(499),
        [sym_continue_statement] = ACTIONS(499),
        [anon_sym_if] = ACTIONS(499),
        [anon_sym_elif] = ACTIONS(499),
        [anon_sym_else] = ACTIONS(499),
        [anon_sym_for] = ACTIONS(499),
        [anon_sym_while] = ACTIONS(499),
        [anon_sym_try] = ACTIONS(499),
        [anon_sym_except] = ACTIONS(499),
        [anon_sym_finally] = ACTIONS(499),
        [anon_sym_with] = ACTIONS(499),
        [anon_sym_def] = ACTIONS(499),
        [anon_sym_LPAREN] = ACTIONS(155),
        [anon_sym_class] = ACTIONS(499),
        [anon_sym_AT] = ACTIONS(501),
        [anon_sym_PLUS] = ACTIONS(157),
        [anon_sym_LBRACK] = ACTIONS(159),
        [sym_number] = ACTIONS(499),
        [sym_identifier] = ACTIONS(503),
        [sym_comment] = ACTIONS(67),
        [sym__newline] = ACTIONS(501),
    },
    [291] = {
        [ts_builtin_sym_end] = ACTIONS(507),
        [anon_sym_SEMI] = ACTIONS(507),
        [anon_sym_print] = ACTIONS(505),
        [anon_sym_COMMA] = ACTIONS(779),
        [anon_sym_return] = ACTIONS(505),
        [anon_sym_del] = ACTIONS(505),
        [sym_pass_statement] = ACTIONS(505),
        [sym_break_statement] = ACTIONS(505),
        [sym_continue_statement] = ACTIONS(505),
        [anon_sym_if] = ACTIONS(505),
        [anon_sym_elif] = ACTIONS(505),
        [anon_sym_else] = ACTIONS(505),
        [anon_sym_for] = ACTIONS(505),
        [anon_sym_while] = ACTIONS(505),
        [anon_sym_try] = ACTIONS(505),
        [anon_sym_except] = ACTIONS(505),
        [anon_sym_finally] = ACTIONS(505),
        [anon_sym_with] = ACTIONS(505),
        [anon_sym_def] = ACTIONS(505),
        [anon_sym_class] = ACTIONS(505),
        [anon_sym_AT] = ACTIONS(507),
        [sym_number] = ACTIONS(505),
        [sym_identifier] = ACTIONS(509),
        [sym_comment] = ACTIONS(67),
        [sym__newline] = ACTIONS(507),
    },
    [292] = {
        [ts_builtin_sym_end] = ACTIONS(513),
        [anon_sym_SEMI] = ACTIONS(513),
        [anon_sym_print] = ACTIONS(511),
        [anon_sym_return] = ACTIONS(511),
        [anon_sym_del] = ACTIONS(511),
        [sym_pass_statement] = ACTIONS(511),
        [sym_break_statement] = ACTIONS(511),
        [sym_continue_statement] = ACTIONS(511),
        [anon_sym_if] = ACTIONS(511),
        [anon_sym_for] = ACTIONS(511),
        [anon_sym_while] = ACTIONS(511),
        [anon_sym_try] = ACTIONS(511),
        [anon_sym_with] = ACTIONS(511),
        [anon_sym_def] = ACTIONS(511),
        [anon_sym_class] = ACTIONS(511),
        [anon_sym_AT] = ACTIONS(513),
        [sym_number] = ACTIONS(511),
        [sym_identifier] = ACTIONS(515),
        [sym_comment] = ACTIONS(67),
        [sym__newline] = ACTIONS(513),
    },
    [293] = {
        [sym_parameters] = STATE(294),
        [anon_sym_LPAREN] = ACTIONS(517),
        [sym_comment] = ACTIONS(67),
    },
    [294] = {
        [anon_sym_COLON] = ACTIONS(781),
        [sym_comment] = ACTIONS(67),
    },
    [295] = {
        [sym__simple_statement] = STATE(109),
        [sym_print_statement] = STATE(5),
        [sym_expression_statement] = STATE(5),
        [sym_return_statement] = STATE(5),
        [sym_delete_statement] = STATE(5),
        [sym__suite] = STATE(296),
        [sym__expression] = STATE(21),
        [sym_binary_operator] = STATE(14),
        [sym_subscript] = STATE(14),
        [sym_call] = STATE(14),
        [anon_sym_print] = ACTIONS(77),
        [anon_sym_return] = ACTIONS(79),
        [anon_sym_del] = ACTIONS(81),
        [sym_pass_statement] = ACTIONS(83),
        [sym_break_statement] = ACTIONS(83),
        [sym_continue_statement] = ACTIONS(83),
        [sym_number] = ACTIONS(101),
        [sym_identifier] = ACTIONS(103),
        [sym_comment] = ACTIONS(67),
        [sym__indent] = ACTIONS(349),
    },
    [296] = {
        [ts_builtin_sym_end] = ACTIONS(529),
        [anon_sym_SEMI] = ACTIONS(529),
        [anon_sym_print] = ACTIONS(527),
        [anon_sym_return] = ACTIONS(527),
        [anon_sym_del] = ACTIONS(527),
        [sym_pass_statement] = ACTIONS(527),
        [sym_break_statement] = ACTIONS(527),
        [sym_continue_statement] = ACTIONS(527),
        [anon_sym_if] = ACTIONS(527),
        [anon_sym_for] = ACTIONS(527),
        [anon_sym_while] = ACTIONS(527),
        [anon_sym_try] = ACTIONS(527),
        [anon_sym_with] = ACTIONS(527),
        [anon_sym_def] = ACTIONS(527),
        [anon_sym_class] = ACTIONS(527),
        [anon_sym_AT] = ACTIONS(529),
        [sym_number] = ACTIONS(527),
        [sym_identifier] = ACTIONS(531),
        [sym_comment] = ACTIONS(67),
        [sym__newline] = ACTIONS(529),
    },
    [297] = {
        [aux_sym_with_statement_repeat1] = STATE(299),
        [anon_sym_COMMA] = ACTIONS(585),
        [anon_sym_COLON] = ACTIONS(783),
        [sym_comment] = ACTIONS(67),
    },
    [298] = {
        [sym__simple_statement] = STATE(109),
        [sym_print_statement] = STATE(5),
        [sym_expression_statement] = STATE(5),
        [sym_return_statement] = STATE(5),
        [sym_delete_statement] = STATE(5),
        [sym__suite] = STATE(302),
        [sym__expression] = STATE(21),
        [sym_binary_operator] = STATE(14),
        [sym_subscript] = STATE(14),
        [sym_call] = STATE(14),
        [anon_sym_print] = ACTIONS(77),
        [anon_sym_return] = ACTIONS(79),
        [anon_sym_del] = ACTIONS(81),
        [sym_pass_statement] = ACTIONS(83),
        [sym_break_statement] = ACTIONS(83),
        [sym_continue_statement] = ACTIONS(83),
        [sym_number] = ACTIONS(101),
        [sym_identifier] = ACTIONS(103),
        [sym_comment] = ACTIONS(67),
        [sym__indent] = ACTIONS(349),
    },
    [299] = {
        [anon_sym_COMMA] = ACTIONS(595),
        [anon_sym_COLON] = ACTIONS(785),
        [sym_comment] = ACTIONS(67),
    },
    [300] = {
        [sym__simple_statement] = STATE(109),
        [sym_print_statement] = STATE(5),
        [sym_expression_statement] = STATE(5),
        [sym_return_statement] = STATE(5),
        [sym_delete_statement] = STATE(5),
        [sym__suite] = STATE(301),
        [sym__expression] = STATE(21),
        [sym_binary_operator] = STATE(14),
        [sym_subscript] = STATE(14),
        [sym_call] = STATE(14),
        [anon_sym_print] = ACTIONS(77),
        [anon_sym_return] = ACTIONS(79),
        [anon_sym_del] = ACTIONS(81),
        [sym_pass_statement] = ACTIONS(83),
        [sym_break_statement] = ACTIONS(83),
        [sym_continue_statement] = ACTIONS(83),
        [sym_number] = ACTIONS(101),
        [sym_identifier] = ACTIONS(103),
        [sym_comment] = ACTIONS(67),
        [sym__indent] = ACTIONS(349),
    },
    [301] = {
        [ts_builtin_sym_end] = ACTIONS(601),
        [anon_sym_SEMI] = ACTIONS(601),
        [anon_sym_print] = ACTIONS(599),
        [anon_sym_return] = ACTIONS(599),
        [anon_sym_del] = ACTIONS(599),
        [sym_pass_statement] = ACTIONS(599),
        [sym_break_statement] = ACTIONS(599),
        [sym_continue_statement] = ACTIONS(599),
        [anon_sym_if] = ACTIONS(599),
        [anon_sym_for] = ACTIONS(599),
        [anon_sym_while] = ACTIONS(599),
        [anon_sym_try] = ACTIONS(599),
        [anon_sym_with] = ACTIONS(599),
        [anon_sym_def] = ACTIONS(599),
        [anon_sym_class] = ACTIONS(599),
        [anon_sym_AT] = ACTIONS(601),
        [sym_number] = ACTIONS(599),
        [sym_identifier] = ACTIONS(603),
        [sym_comment] = ACTIONS(67),
        [sym__newline] = ACTIONS(601),
    },
    [302] = {
        [ts_builtin_sym_end] = ACTIONS(609),
        [anon_sym_SEMI] = ACTIONS(609),
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
        [anon_sym_AT] = ACTIONS(609),
        [sym_number] = ACTIONS(607),
        [sym_identifier] = ACTIONS(611),
        [sym_comment] = ACTIONS(67),
        [sym__newline] = ACTIONS(609),
    },
    [303] = {
        [sym__simple_statement] = STATE(229),
        [sym_print_statement] = STATE(227),
        [sym_expression_statement] = STATE(227),
        [sym_return_statement] = STATE(227),
        [sym_delete_statement] = STATE(227),
        [sym__suite] = STATE(304),
        [sym__expression] = STATE(231),
        [sym_binary_operator] = STATE(32),
        [sym_subscript] = STATE(32),
        [sym_call] = STATE(32),
        [anon_sym_print] = ACTIONS(615),
        [anon_sym_return] = ACTIONS(617),
        [anon_sym_del] = ACTIONS(619),
        [sym_pass_statement] = ACTIONS(621),
        [sym_break_statement] = ACTIONS(621),
        [sym_continue_statement] = ACTIONS(621),
        [sym_number] = ACTIONS(111),
        [sym_identifier] = ACTIONS(623),
        [sym_comment] = ACTIONS(67),
        [sym__indent] = ACTIONS(625),
    },
    [304] = {
        [sym_except_clause] = STATE(307),
        [sym_finally_clause] = STATE(308),
        [aux_sym_try_statement_repeat1] = STATE(309),
        [anon_sym_except] = ACTIONS(787),
        [anon_sym_finally] = ACTIONS(789),
        [sym_comment] = ACTIONS(67),
    },
    [305] = {
        [sym__expression] = STATE(319),
        [sym_binary_operator] = STATE(32),
        [sym_subscript] = STATE(32),
        [sym_call] = STATE(32),
        [sym_number] = ACTIONS(111),
        [sym_identifier] = ACTIONS(111),
        [sym_comment] = ACTIONS(67),
    },
    [306] = {
        [anon_sym_COLON] = ACTIONS(791),
        [sym_comment] = ACTIONS(67),
    },
    [307] = {
        [ts_builtin_sym_end] = ACTIONS(637),
        [anon_sym_SEMI] = ACTIONS(637),
        [anon_sym_print] = ACTIONS(635),
        [anon_sym_return] = ACTIONS(635),
        [anon_sym_del] = ACTIONS(635),
        [sym_pass_statement] = ACTIONS(635),
        [sym_break_statement] = ACTIONS(635),
        [sym_continue_statement] = ACTIONS(635),
        [anon_sym_if] = ACTIONS(635),
        [anon_sym_else] = ACTIONS(635),
        [anon_sym_for] = ACTIONS(635),
        [anon_sym_while] = ACTIONS(635),
        [anon_sym_try] = ACTIONS(635),
        [anon_sym_except] = ACTIONS(635),
        [anon_sym_finally] = ACTIONS(635),
        [anon_sym_with] = ACTIONS(635),
        [anon_sym_def] = ACTIONS(635),
        [anon_sym_class] = ACTIONS(635),
        [anon_sym_AT] = ACTIONS(637),
        [sym_number] = ACTIONS(635),
        [sym_identifier] = ACTIONS(639),
        [sym_comment] = ACTIONS(67),
        [sym__newline] = ACTIONS(637),
    },
    [308] = {
        [ts_builtin_sym_end] = ACTIONS(643),
        [anon_sym_SEMI] = ACTIONS(643),
        [anon_sym_print] = ACTIONS(641),
        [anon_sym_return] = ACTIONS(641),
        [anon_sym_del] = ACTIONS(641),
        [sym_pass_statement] = ACTIONS(641),
        [sym_break_statement] = ACTIONS(641),
        [sym_continue_statement] = ACTIONS(641),
        [anon_sym_if] = ACTIONS(641),
        [anon_sym_for] = ACTIONS(641),
        [anon_sym_while] = ACTIONS(641),
        [anon_sym_try] = ACTIONS(641),
        [anon_sym_with] = ACTIONS(641),
        [anon_sym_def] = ACTIONS(641),
        [anon_sym_class] = ACTIONS(641),
        [anon_sym_AT] = ACTIONS(643),
        [sym_number] = ACTIONS(641),
        [sym_identifier] = ACTIONS(645),
        [sym_comment] = ACTIONS(67),
        [sym__newline] = ACTIONS(643),
    },
    [309] = {
        [sym_else_clause] = STATE(311),
        [sym_except_clause] = STATE(312),
        [sym_finally_clause] = STATE(313),
        [ts_builtin_sym_end] = ACTIONS(643),
        [anon_sym_SEMI] = ACTIONS(643),
        [anon_sym_print] = ACTIONS(641),
        [anon_sym_return] = ACTIONS(641),
        [anon_sym_del] = ACTIONS(641),
        [sym_pass_statement] = ACTIONS(641),
        [sym_break_statement] = ACTIONS(641),
        [sym_continue_statement] = ACTIONS(641),
        [anon_sym_if] = ACTIONS(641),
        [anon_sym_else] = ACTIONS(793),
        [anon_sym_for] = ACTIONS(641),
        [anon_sym_while] = ACTIONS(641),
        [anon_sym_try] = ACTIONS(641),
        [anon_sym_except] = ACTIONS(795),
        [anon_sym_finally] = ACTIONS(797),
        [anon_sym_with] = ACTIONS(641),
        [anon_sym_def] = ACTIONS(641),
        [anon_sym_class] = ACTIONS(641),
        [anon_sym_AT] = ACTIONS(643),
        [sym_number] = ACTIONS(641),
        [sym_identifier] = ACTIONS(645),
        [sym_comment] = ACTIONS(67),
        [sym__newline] = ACTIONS(643),
    },
    [310] = {
        [anon_sym_COLON] = ACTIONS(799),
        [sym_comment] = ACTIONS(67),
    },
    [311] = {
        [sym_finally_clause] = STATE(314),
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
        [anon_sym_finally] = ACTIONS(797),
        [anon_sym_with] = ACTIONS(655),
        [anon_sym_def] = ACTIONS(655),
        [anon_sym_class] = ACTIONS(655),
        [anon_sym_AT] = ACTIONS(657),
        [sym_number] = ACTIONS(655),
        [sym_identifier] = ACTIONS(659),
        [sym_comment] = ACTIONS(67),
        [sym__newline] = ACTIONS(657),
    },
    [312] = {
        [ts_builtin_sym_end] = ACTIONS(663),
        [anon_sym_SEMI] = ACTIONS(663),
        [anon_sym_print] = ACTIONS(661),
        [anon_sym_return] = ACTIONS(661),
        [anon_sym_del] = ACTIONS(661),
        [sym_pass_statement] = ACTIONS(661),
        [sym_break_statement] = ACTIONS(661),
        [sym_continue_statement] = ACTIONS(661),
        [anon_sym_if] = ACTIONS(661),
        [anon_sym_else] = ACTIONS(661),
        [anon_sym_for] = ACTIONS(661),
        [anon_sym_while] = ACTIONS(661),
        [anon_sym_try] = ACTIONS(661),
        [anon_sym_except] = ACTIONS(661),
        [anon_sym_finally] = ACTIONS(661),
        [anon_sym_with] = ACTIONS(661),
        [anon_sym_def] = ACTIONS(661),
        [anon_sym_class] = ACTIONS(661),
        [anon_sym_AT] = ACTIONS(663),
        [sym_number] = ACTIONS(661),
        [sym_identifier] = ACTIONS(665),
        [sym_comment] = ACTIONS(67),
        [sym__newline] = ACTIONS(663),
    },
    [313] = {
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
        [sym_number] = ACTIONS(655),
        [sym_identifier] = ACTIONS(659),
        [sym_comment] = ACTIONS(67),
        [sym__newline] = ACTIONS(657),
    },
    [314] = {
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
        [sym_number] = ACTIONS(667),
        [sym_identifier] = ACTIONS(671),
        [sym_comment] = ACTIONS(67),
        [sym__newline] = ACTIONS(669),
    },
    [315] = {
        [sym__simple_statement] = STATE(109),
        [sym_print_statement] = STATE(5),
        [sym_expression_statement] = STATE(5),
        [sym_return_statement] = STATE(5),
        [sym_delete_statement] = STATE(5),
        [sym__suite] = STATE(316),
        [sym__expression] = STATE(21),
        [sym_binary_operator] = STATE(14),
        [sym_subscript] = STATE(14),
        [sym_call] = STATE(14),
        [anon_sym_print] = ACTIONS(77),
        [anon_sym_return] = ACTIONS(79),
        [anon_sym_del] = ACTIONS(81),
        [sym_pass_statement] = ACTIONS(83),
        [sym_break_statement] = ACTIONS(83),
        [sym_continue_statement] = ACTIONS(83),
        [sym_number] = ACTIONS(101),
        [sym_identifier] = ACTIONS(103),
        [sym_comment] = ACTIONS(67),
        [sym__indent] = ACTIONS(349),
    },
    [316] = {
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
        [anon_sym_finally] = ACTIONS(673),
        [anon_sym_with] = ACTIONS(673),
        [anon_sym_def] = ACTIONS(673),
        [anon_sym_class] = ACTIONS(673),
        [anon_sym_AT] = ACTIONS(675),
        [sym_number] = ACTIONS(673),
        [sym_identifier] = ACTIONS(677),
        [sym_comment] = ACTIONS(67),
        [sym__newline] = ACTIONS(675),
    },
    [317] = {
        [sym__simple_statement] = STATE(109),
        [sym_print_statement] = STATE(5),
        [sym_expression_statement] = STATE(5),
        [sym_return_statement] = STATE(5),
        [sym_delete_statement] = STATE(5),
        [sym__suite] = STATE(318),
        [sym__expression] = STATE(21),
        [sym_binary_operator] = STATE(14),
        [sym_subscript] = STATE(14),
        [sym_call] = STATE(14),
        [anon_sym_print] = ACTIONS(77),
        [anon_sym_return] = ACTIONS(79),
        [anon_sym_del] = ACTIONS(81),
        [sym_pass_statement] = ACTIONS(83),
        [sym_break_statement] = ACTIONS(83),
        [sym_continue_statement] = ACTIONS(83),
        [sym_number] = ACTIONS(101),
        [sym_identifier] = ACTIONS(103),
        [sym_comment] = ACTIONS(67),
        [sym__indent] = ACTIONS(349),
    },
    [318] = {
        [ts_builtin_sym_end] = ACTIONS(681),
        [anon_sym_SEMI] = ACTIONS(681),
        [anon_sym_print] = ACTIONS(679),
        [anon_sym_return] = ACTIONS(679),
        [anon_sym_del] = ACTIONS(679),
        [sym_pass_statement] = ACTIONS(679),
        [sym_break_statement] = ACTIONS(679),
        [sym_continue_statement] = ACTIONS(679),
        [anon_sym_if] = ACTIONS(679),
        [anon_sym_for] = ACTIONS(679),
        [anon_sym_while] = ACTIONS(679),
        [anon_sym_try] = ACTIONS(679),
        [anon_sym_with] = ACTIONS(679),
        [anon_sym_def] = ACTIONS(679),
        [anon_sym_class] = ACTIONS(679),
        [anon_sym_AT] = ACTIONS(681),
        [sym_number] = ACTIONS(679),
        [sym_identifier] = ACTIONS(683),
        [sym_comment] = ACTIONS(67),
        [sym__newline] = ACTIONS(681),
    },
    [319] = {
        [anon_sym_COMMA] = ACTIONS(801),
        [anon_sym_COLON] = ACTIONS(803),
        [anon_sym_as] = ACTIONS(801),
        [anon_sym_LPAREN] = ACTIONS(195),
        [anon_sym_PLUS] = ACTIONS(197),
        [anon_sym_LBRACK] = ACTIONS(199),
        [sym_comment] = ACTIONS(67),
    },
    [320] = {
        [sym__expression] = STATE(322),
        [sym_binary_operator] = STATE(32),
        [sym_subscript] = STATE(32),
        [sym_call] = STATE(32),
        [sym_number] = ACTIONS(111),
        [sym_identifier] = ACTIONS(111),
        [sym_comment] = ACTIONS(67),
    },
    [321] = {
        [sym__simple_statement] = STATE(109),
        [sym_print_statement] = STATE(5),
        [sym_expression_statement] = STATE(5),
        [sym_return_statement] = STATE(5),
        [sym_delete_statement] = STATE(5),
        [sym__suite] = STATE(325),
        [sym__expression] = STATE(21),
        [sym_binary_operator] = STATE(14),
        [sym_subscript] = STATE(14),
        [sym_call] = STATE(14),
        [anon_sym_print] = ACTIONS(77),
        [anon_sym_return] = ACTIONS(79),
        [anon_sym_del] = ACTIONS(81),
        [sym_pass_statement] = ACTIONS(83),
        [sym_break_statement] = ACTIONS(83),
        [sym_continue_statement] = ACTIONS(83),
        [sym_number] = ACTIONS(101),
        [sym_identifier] = ACTIONS(103),
        [sym_comment] = ACTIONS(67),
        [sym__indent] = ACTIONS(349),
    },
    [322] = {
        [anon_sym_COLON] = ACTIONS(805),
        [anon_sym_LPAREN] = ACTIONS(195),
        [anon_sym_PLUS] = ACTIONS(197),
        [anon_sym_LBRACK] = ACTIONS(199),
        [sym_comment] = ACTIONS(67),
    },
    [323] = {
        [sym__simple_statement] = STATE(109),
        [sym_print_statement] = STATE(5),
        [sym_expression_statement] = STATE(5),
        [sym_return_statement] = STATE(5),
        [sym_delete_statement] = STATE(5),
        [sym__suite] = STATE(324),
        [sym__expression] = STATE(21),
        [sym_binary_operator] = STATE(14),
        [sym_subscript] = STATE(14),
        [sym_call] = STATE(14),
        [anon_sym_print] = ACTIONS(77),
        [anon_sym_return] = ACTIONS(79),
        [anon_sym_del] = ACTIONS(81),
        [sym_pass_statement] = ACTIONS(83),
        [sym_break_statement] = ACTIONS(83),
        [sym_continue_statement] = ACTIONS(83),
        [sym_number] = ACTIONS(101),
        [sym_identifier] = ACTIONS(103),
        [sym_comment] = ACTIONS(67),
        [sym__indent] = ACTIONS(349),
    },
    [324] = {
        [ts_builtin_sym_end] = ACTIONS(693),
        [anon_sym_SEMI] = ACTIONS(693),
        [anon_sym_print] = ACTIONS(691),
        [anon_sym_return] = ACTIONS(691),
        [anon_sym_del] = ACTIONS(691),
        [sym_pass_statement] = ACTIONS(691),
        [sym_break_statement] = ACTIONS(691),
        [sym_continue_statement] = ACTIONS(691),
        [anon_sym_if] = ACTIONS(691),
        [anon_sym_else] = ACTIONS(691),
        [anon_sym_for] = ACTIONS(691),
        [anon_sym_while] = ACTIONS(691),
        [anon_sym_try] = ACTIONS(691),
        [anon_sym_except] = ACTIONS(691),
        [anon_sym_finally] = ACTIONS(691),
        [anon_sym_with] = ACTIONS(691),
        [anon_sym_def] = ACTIONS(691),
        [anon_sym_class] = ACTIONS(691),
        [anon_sym_AT] = ACTIONS(693),
        [sym_number] = ACTIONS(691),
        [sym_identifier] = ACTIONS(695),
        [sym_comment] = ACTIONS(67),
        [sym__newline] = ACTIONS(693),
    },
    [325] = {
        [ts_builtin_sym_end] = ACTIONS(699),
        [anon_sym_SEMI] = ACTIONS(699),
        [anon_sym_print] = ACTIONS(697),
        [anon_sym_return] = ACTIONS(697),
        [anon_sym_del] = ACTIONS(697),
        [sym_pass_statement] = ACTIONS(697),
        [sym_break_statement] = ACTIONS(697),
        [sym_continue_statement] = ACTIONS(697),
        [anon_sym_if] = ACTIONS(697),
        [anon_sym_else] = ACTIONS(697),
        [anon_sym_for] = ACTIONS(697),
        [anon_sym_while] = ACTIONS(697),
        [anon_sym_try] = ACTIONS(697),
        [anon_sym_except] = ACTIONS(697),
        [anon_sym_finally] = ACTIONS(697),
        [anon_sym_with] = ACTIONS(697),
        [anon_sym_def] = ACTIONS(697),
        [anon_sym_class] = ACTIONS(697),
        [anon_sym_AT] = ACTIONS(699),
        [sym_number] = ACTIONS(697),
        [sym_identifier] = ACTIONS(701),
        [sym_comment] = ACTIONS(67),
        [sym__newline] = ACTIONS(699),
    },
    [326] = {
        [anon_sym_COLON] = ACTIONS(807),
        [anon_sym_LPAREN] = ACTIONS(195),
        [anon_sym_PLUS] = ACTIONS(197),
        [anon_sym_LBRACK] = ACTIONS(199),
        [sym_comment] = ACTIONS(67),
    },
    [327] = {
        [sym__simple_statement] = STATE(109),
        [sym_print_statement] = STATE(5),
        [sym_expression_statement] = STATE(5),
        [sym_return_statement] = STATE(5),
        [sym_delete_statement] = STATE(5),
        [sym__suite] = STATE(328),
        [sym__expression] = STATE(21),
        [sym_binary_operator] = STATE(14),
        [sym_subscript] = STATE(14),
        [sym_call] = STATE(14),
        [anon_sym_print] = ACTIONS(77),
        [anon_sym_return] = ACTIONS(79),
        [anon_sym_del] = ACTIONS(81),
        [sym_pass_statement] = ACTIONS(83),
        [sym_break_statement] = ACTIONS(83),
        [sym_continue_statement] = ACTIONS(83),
        [sym_number] = ACTIONS(101),
        [sym_identifier] = ACTIONS(103),
        [sym_comment] = ACTIONS(67),
        [sym__indent] = ACTIONS(349),
    },
    [328] = {
        [sym_else_clause] = STATE(329),
        [ts_builtin_sym_end] = ACTIONS(709),
        [anon_sym_SEMI] = ACTIONS(709),
        [anon_sym_print] = ACTIONS(707),
        [anon_sym_return] = ACTIONS(707),
        [anon_sym_del] = ACTIONS(707),
        [sym_pass_statement] = ACTIONS(707),
        [sym_break_statement] = ACTIONS(707),
        [sym_continue_statement] = ACTIONS(707),
        [anon_sym_if] = ACTIONS(707),
        [anon_sym_else] = ACTIONS(793),
        [anon_sym_for] = ACTIONS(707),
        [anon_sym_while] = ACTIONS(707),
        [anon_sym_try] = ACTIONS(707),
        [anon_sym_with] = ACTIONS(707),
        [anon_sym_def] = ACTIONS(707),
        [anon_sym_class] = ACTIONS(707),
        [anon_sym_AT] = ACTIONS(709),
        [sym_number] = ACTIONS(707),
        [sym_identifier] = ACTIONS(711),
        [sym_comment] = ACTIONS(67),
        [sym__newline] = ACTIONS(709),
    },
    [329] = {
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
        [sym_number] = ACTIONS(713),
        [sym_identifier] = ACTIONS(717),
        [sym_comment] = ACTIONS(67),
        [sym__newline] = ACTIONS(715),
    },
    [330] = {
        [anon_sym_in] = ACTIONS(809),
        [sym_comment] = ACTIONS(67),
    },
    [331] = {
        [sym_expression_list] = STATE(332),
        [sym__expression] = STATE(104),
        [sym_binary_operator] = STATE(32),
        [sym_subscript] = STATE(32),
        [sym_call] = STATE(32),
        [sym_number] = ACTIONS(111),
        [sym_identifier] = ACTIONS(111),
        [sym_comment] = ACTIONS(67),
    },
    [332] = {
        [anon_sym_COLON] = ACTIONS(811),
        [sym_comment] = ACTIONS(67),
    },
    [333] = {
        [sym__simple_statement] = STATE(109),
        [sym_print_statement] = STATE(5),
        [sym_expression_statement] = STATE(5),
        [sym_return_statement] = STATE(5),
        [sym_delete_statement] = STATE(5),
        [sym__suite] = STATE(334),
        [sym__expression] = STATE(21),
        [sym_binary_operator] = STATE(14),
        [sym_subscript] = STATE(14),
        [sym_call] = STATE(14),
        [anon_sym_print] = ACTIONS(77),
        [anon_sym_return] = ACTIONS(79),
        [anon_sym_del] = ACTIONS(81),
        [sym_pass_statement] = ACTIONS(83),
        [sym_break_statement] = ACTIONS(83),
        [sym_continue_statement] = ACTIONS(83),
        [sym_number] = ACTIONS(101),
        [sym_identifier] = ACTIONS(103),
        [sym_comment] = ACTIONS(67),
        [sym__indent] = ACTIONS(349),
    },
    [334] = {
        [sym_else_clause] = STATE(335),
        [ts_builtin_sym_end] = ACTIONS(725),
        [anon_sym_SEMI] = ACTIONS(725),
        [anon_sym_print] = ACTIONS(723),
        [anon_sym_return] = ACTIONS(723),
        [anon_sym_del] = ACTIONS(723),
        [sym_pass_statement] = ACTIONS(723),
        [sym_break_statement] = ACTIONS(723),
        [sym_continue_statement] = ACTIONS(723),
        [anon_sym_if] = ACTIONS(723),
        [anon_sym_else] = ACTIONS(793),
        [anon_sym_for] = ACTIONS(723),
        [anon_sym_while] = ACTIONS(723),
        [anon_sym_try] = ACTIONS(723),
        [anon_sym_with] = ACTIONS(723),
        [anon_sym_def] = ACTIONS(723),
        [anon_sym_class] = ACTIONS(723),
        [anon_sym_AT] = ACTIONS(725),
        [sym_number] = ACTIONS(723),
        [sym_identifier] = ACTIONS(727),
        [sym_comment] = ACTIONS(67),
        [sym__newline] = ACTIONS(725),
    },
    [335] = {
        [ts_builtin_sym_end] = ACTIONS(731),
        [anon_sym_SEMI] = ACTIONS(731),
        [anon_sym_print] = ACTIONS(729),
        [anon_sym_return] = ACTIONS(729),
        [anon_sym_del] = ACTIONS(729),
        [sym_pass_statement] = ACTIONS(729),
        [sym_break_statement] = ACTIONS(729),
        [sym_continue_statement] = ACTIONS(729),
        [anon_sym_if] = ACTIONS(729),
        [anon_sym_for] = ACTIONS(729),
        [anon_sym_while] = ACTIONS(729),
        [anon_sym_try] = ACTIONS(729),
        [anon_sym_with] = ACTIONS(729),
        [anon_sym_def] = ACTIONS(729),
        [anon_sym_class] = ACTIONS(729),
        [anon_sym_AT] = ACTIONS(731),
        [sym_number] = ACTIONS(729),
        [sym_identifier] = ACTIONS(733),
        [sym_comment] = ACTIONS(67),
        [sym__newline] = ACTIONS(731),
    },
    [336] = {
        [anon_sym_COLON] = ACTIONS(813),
        [anon_sym_LPAREN] = ACTIONS(195),
        [anon_sym_PLUS] = ACTIONS(197),
        [anon_sym_LBRACK] = ACTIONS(199),
        [sym_comment] = ACTIONS(67),
    },
    [337] = {
        [sym__simple_statement] = STATE(109),
        [sym_print_statement] = STATE(5),
        [sym_expression_statement] = STATE(5),
        [sym_return_statement] = STATE(5),
        [sym_delete_statement] = STATE(5),
        [sym__suite] = STATE(338),
        [sym__expression] = STATE(21),
        [sym_binary_operator] = STATE(14),
        [sym_subscript] = STATE(14),
        [sym_call] = STATE(14),
        [anon_sym_print] = ACTIONS(77),
        [anon_sym_return] = ACTIONS(79),
        [anon_sym_del] = ACTIONS(81),
        [sym_pass_statement] = ACTIONS(83),
        [sym_break_statement] = ACTIONS(83),
        [sym_continue_statement] = ACTIONS(83),
        [sym_number] = ACTIONS(101),
        [sym_identifier] = ACTIONS(103),
        [sym_comment] = ACTIONS(67),
        [sym__indent] = ACTIONS(349),
    },
    [338] = {
        [sym_elif_clause] = STATE(340),
        [sym_else_clause] = STATE(341),
        [aux_sym_if_statement_repeat1] = STATE(342),
        [ts_builtin_sym_end] = ACTIONS(741),
        [anon_sym_SEMI] = ACTIONS(741),
        [anon_sym_print] = ACTIONS(737),
        [anon_sym_return] = ACTIONS(737),
        [anon_sym_del] = ACTIONS(737),
        [sym_pass_statement] = ACTIONS(737),
        [sym_break_statement] = ACTIONS(737),
        [sym_continue_statement] = ACTIONS(737),
        [anon_sym_if] = ACTIONS(737),
        [anon_sym_elif] = ACTIONS(815),
        [anon_sym_else] = ACTIONS(793),
        [anon_sym_for] = ACTIONS(737),
        [anon_sym_while] = ACTIONS(737),
        [anon_sym_try] = ACTIONS(737),
        [anon_sym_with] = ACTIONS(737),
        [anon_sym_def] = ACTIONS(737),
        [anon_sym_class] = ACTIONS(737),
        [anon_sym_AT] = ACTIONS(741),
        [sym_number] = ACTIONS(737),
        [sym_identifier] = ACTIONS(743),
        [sym_comment] = ACTIONS(67),
        [sym__newline] = ACTIONS(741),
    },
    [339] = {
        [sym__expression] = STATE(345),
        [sym_binary_operator] = STATE(32),
        [sym_subscript] = STATE(32),
        [sym_call] = STATE(32),
        [sym_number] = ACTIONS(111),
        [sym_identifier] = ACTIONS(111),
        [sym_comment] = ACTIONS(67),
    },
    [340] = {
        [ts_builtin_sym_end] = ACTIONS(747),
        [anon_sym_SEMI] = ACTIONS(747),
        [anon_sym_print] = ACTIONS(745),
        [anon_sym_return] = ACTIONS(745),
        [anon_sym_del] = ACTIONS(745),
        [sym_pass_statement] = ACTIONS(745),
        [sym_break_statement] = ACTIONS(745),
        [sym_continue_statement] = ACTIONS(745),
        [anon_sym_if] = ACTIONS(745),
        [anon_sym_elif] = ACTIONS(745),
        [anon_sym_else] = ACTIONS(745),
        [anon_sym_for] = ACTIONS(745),
        [anon_sym_while] = ACTIONS(745),
        [anon_sym_try] = ACTIONS(745),
        [anon_sym_with] = ACTIONS(745),
        [anon_sym_def] = ACTIONS(745),
        [anon_sym_class] = ACTIONS(745),
        [anon_sym_AT] = ACTIONS(747),
        [sym_number] = ACTIONS(745),
        [sym_identifier] = ACTIONS(749),
        [sym_comment] = ACTIONS(67),
        [sym__newline] = ACTIONS(747),
    },
    [341] = {
        [ts_builtin_sym_end] = ACTIONS(753),
        [anon_sym_SEMI] = ACTIONS(753),
        [anon_sym_print] = ACTIONS(751),
        [anon_sym_return] = ACTIONS(751),
        [anon_sym_del] = ACTIONS(751),
        [sym_pass_statement] = ACTIONS(751),
        [sym_break_statement] = ACTIONS(751),
        [sym_continue_statement] = ACTIONS(751),
        [anon_sym_if] = ACTIONS(751),
        [anon_sym_for] = ACTIONS(751),
        [anon_sym_while] = ACTIONS(751),
        [anon_sym_try] = ACTIONS(751),
        [anon_sym_with] = ACTIONS(751),
        [anon_sym_def] = ACTIONS(751),
        [anon_sym_class] = ACTIONS(751),
        [anon_sym_AT] = ACTIONS(753),
        [sym_number] = ACTIONS(751),
        [sym_identifier] = ACTIONS(755),
        [sym_comment] = ACTIONS(67),
        [sym__newline] = ACTIONS(753),
    },
    [342] = {
        [sym_elif_clause] = STATE(343),
        [sym_else_clause] = STATE(344),
        [ts_builtin_sym_end] = ACTIONS(753),
        [anon_sym_SEMI] = ACTIONS(753),
        [anon_sym_print] = ACTIONS(751),
        [anon_sym_return] = ACTIONS(751),
        [anon_sym_del] = ACTIONS(751),
        [sym_pass_statement] = ACTIONS(751),
        [sym_break_statement] = ACTIONS(751),
        [sym_continue_statement] = ACTIONS(751),
        [anon_sym_if] = ACTIONS(751),
        [anon_sym_elif] = ACTIONS(815),
        [anon_sym_else] = ACTIONS(793),
        [anon_sym_for] = ACTIONS(751),
        [anon_sym_while] = ACTIONS(751),
        [anon_sym_try] = ACTIONS(751),
        [anon_sym_with] = ACTIONS(751),
        [anon_sym_def] = ACTIONS(751),
        [anon_sym_class] = ACTIONS(751),
        [anon_sym_AT] = ACTIONS(753),
        [sym_number] = ACTIONS(751),
        [sym_identifier] = ACTIONS(755),
        [sym_comment] = ACTIONS(67),
        [sym__newline] = ACTIONS(753),
    },
    [343] = {
        [ts_builtin_sym_end] = ACTIONS(759),
        [anon_sym_SEMI] = ACTIONS(759),
        [anon_sym_print] = ACTIONS(757),
        [anon_sym_return] = ACTIONS(757),
        [anon_sym_del] = ACTIONS(757),
        [sym_pass_statement] = ACTIONS(757),
        [sym_break_statement] = ACTIONS(757),
        [sym_continue_statement] = ACTIONS(757),
        [anon_sym_if] = ACTIONS(757),
        [anon_sym_elif] = ACTIONS(757),
        [anon_sym_else] = ACTIONS(757),
        [anon_sym_for] = ACTIONS(757),
        [anon_sym_while] = ACTIONS(757),
        [anon_sym_try] = ACTIONS(757),
        [anon_sym_with] = ACTIONS(757),
        [anon_sym_def] = ACTIONS(757),
        [anon_sym_class] = ACTIONS(757),
        [anon_sym_AT] = ACTIONS(759),
        [sym_number] = ACTIONS(757),
        [sym_identifier] = ACTIONS(761),
        [sym_comment] = ACTIONS(67),
        [sym__newline] = ACTIONS(759),
    },
    [344] = {
        [ts_builtin_sym_end] = ACTIONS(765),
        [anon_sym_SEMI] = ACTIONS(765),
        [anon_sym_print] = ACTIONS(763),
        [anon_sym_return] = ACTIONS(763),
        [anon_sym_del] = ACTIONS(763),
        [sym_pass_statement] = ACTIONS(763),
        [sym_break_statement] = ACTIONS(763),
        [sym_continue_statement] = ACTIONS(763),
        [anon_sym_if] = ACTIONS(763),
        [anon_sym_for] = ACTIONS(763),
        [anon_sym_while] = ACTIONS(763),
        [anon_sym_try] = ACTIONS(763),
        [anon_sym_with] = ACTIONS(763),
        [anon_sym_def] = ACTIONS(763),
        [anon_sym_class] = ACTIONS(763),
        [anon_sym_AT] = ACTIONS(765),
        [sym_number] = ACTIONS(763),
        [sym_identifier] = ACTIONS(767),
        [sym_comment] = ACTIONS(67),
        [sym__newline] = ACTIONS(765),
    },
    [345] = {
        [anon_sym_COLON] = ACTIONS(817),
        [anon_sym_LPAREN] = ACTIONS(195),
        [anon_sym_PLUS] = ACTIONS(197),
        [anon_sym_LBRACK] = ACTIONS(199),
        [sym_comment] = ACTIONS(67),
    },
    [346] = {
        [sym__simple_statement] = STATE(109),
        [sym_print_statement] = STATE(5),
        [sym_expression_statement] = STATE(5),
        [sym_return_statement] = STATE(5),
        [sym_delete_statement] = STATE(5),
        [sym__suite] = STATE(347),
        [sym__expression] = STATE(21),
        [sym_binary_operator] = STATE(14),
        [sym_subscript] = STATE(14),
        [sym_call] = STATE(14),
        [anon_sym_print] = ACTIONS(77),
        [anon_sym_return] = ACTIONS(79),
        [anon_sym_del] = ACTIONS(81),
        [sym_pass_statement] = ACTIONS(83),
        [sym_break_statement] = ACTIONS(83),
        [sym_continue_statement] = ACTIONS(83),
        [sym_number] = ACTIONS(101),
        [sym_identifier] = ACTIONS(103),
        [sym_comment] = ACTIONS(67),
        [sym__indent] = ACTIONS(349),
    },
    [347] = {
        [ts_builtin_sym_end] = ACTIONS(773),
        [anon_sym_SEMI] = ACTIONS(773),
        [anon_sym_print] = ACTIONS(771),
        [anon_sym_return] = ACTIONS(771),
        [anon_sym_del] = ACTIONS(771),
        [sym_pass_statement] = ACTIONS(771),
        [sym_break_statement] = ACTIONS(771),
        [sym_continue_statement] = ACTIONS(771),
        [anon_sym_if] = ACTIONS(771),
        [anon_sym_elif] = ACTIONS(771),
        [anon_sym_else] = ACTIONS(771),
        [anon_sym_for] = ACTIONS(771),
        [anon_sym_while] = ACTIONS(771),
        [anon_sym_try] = ACTIONS(771),
        [anon_sym_with] = ACTIONS(771),
        [anon_sym_def] = ACTIONS(771),
        [anon_sym_class] = ACTIONS(771),
        [anon_sym_AT] = ACTIONS(773),
        [sym_number] = ACTIONS(771),
        [sym_identifier] = ACTIONS(775),
        [sym_comment] = ACTIONS(67),
        [sym__newline] = ACTIONS(773),
    },
    [348] = {
        [sym__expression] = STATE(619),
        [sym_binary_operator] = STATE(376),
        [sym_subscript] = STATE(376),
        [sym_call] = STATE(376),
        [sym_number] = ACTIONS(819),
        [sym_identifier] = ACTIONS(819),
        [sym_comment] = ACTIONS(67),
    },
    [349] = {
        [sym_with_item] = STATE(616),
        [sym_dictionary_splat_parameter] = STATE(523),
        [sym__expression] = STATE(617),
        [sym_binary_operator] = STATE(376),
        [sym_subscript] = STATE(376),
        [sym_call] = STATE(376),
        [sym_keyword_argument] = STATE(618),
        [anon_sym_RPAREN] = ACTIONS(821),
        [anon_sym_STAR] = ACTIONS(823),
        [anon_sym_DOT_DOT_DOT] = ACTIONS(827),
        [anon_sym_RBRACK] = ACTIONS(829),
        [sym_number] = ACTIONS(819),
        [sym_identifier] = ACTIONS(831),
        [sym_comment] = ACTIONS(67),
    },
    [350] = {
        [sym_expression_list] = STATE(445),
        [sym__expression] = STATE(605),
        [sym_binary_operator] = STATE(376),
        [sym_subscript] = STATE(376),
        [sym_call] = STATE(376),
        [sym_number] = ACTIONS(819),
        [sym_identifier] = ACTIONS(819),
        [sym_comment] = ACTIONS(67),
    },
    [351] = {
        [sym_expression_list] = STATE(436),
        [sym__expression] = STATE(605),
        [sym_binary_operator] = STATE(376),
        [sym_subscript] = STATE(376),
        [sym_call] = STATE(376),
        [sym_number] = ACTIONS(819),
        [sym_identifier] = ACTIONS(819),
        [sym_comment] = ACTIONS(67),
    },
    [352] = {
        [ts_builtin_sym_end] = ACTIONS(105),
        [anon_sym_SEMI] = ACTIONS(105),
        [anon_sym_print] = ACTIONS(107),
        [anon_sym_return] = ACTIONS(107),
        [anon_sym_del] = ACTIONS(107),
        [sym_pass_statement] = ACTIONS(107),
        [sym_break_statement] = ACTIONS(107),
        [sym_continue_statement] = ACTIONS(107),
        [anon_sym_if] = ACTIONS(107),
        [anon_sym_elif] = ACTIONS(107),
        [anon_sym_else] = ACTIONS(107),
        [anon_sym_for] = ACTIONS(107),
        [anon_sym_while] = ACTIONS(107),
        [anon_sym_try] = ACTIONS(107),
        [anon_sym_except] = ACTIONS(107),
        [anon_sym_finally] = ACTIONS(107),
        [anon_sym_with] = ACTIONS(107),
        [anon_sym_def] = ACTIONS(107),
        [anon_sym_class] = ACTIONS(107),
        [anon_sym_AT] = ACTIONS(105),
        [sym_number] = ACTIONS(107),
        [sym_identifier] = ACTIONS(109),
        [sym_comment] = ACTIONS(67),
        [sym__newline] = ACTIONS(105),
        [sym__dedent] = ACTIONS(105),
    },
    [353] = {
        [sym__expression] = STATE(601),
        [sym_binary_operator] = STATE(32),
        [sym_subscript] = STATE(32),
        [sym_call] = STATE(32),
        [sym_number] = ACTIONS(111),
        [sym_identifier] = ACTIONS(111),
        [sym_comment] = ACTIONS(67),
    },
    [354] = {
        [sym__simple_statement] = STATE(419),
        [sym_print_statement] = STATE(352),
        [sym_expression_statement] = STATE(352),
        [sym_return_statement] = STATE(352),
        [sym_delete_statement] = STATE(352),
        [sym__suite] = STATE(396),
        [sym__expression] = STATE(468),
        [sym_binary_operator] = STATE(376),
        [sym_subscript] = STATE(376),
        [sym_call] = STATE(376),
        [anon_sym_print] = ACTIONS(835),
        [anon_sym_return] = ACTIONS(837),
        [anon_sym_del] = ACTIONS(839),
        [sym_pass_statement] = ACTIONS(841),
        [sym_break_statement] = ACTIONS(841),
        [sym_continue_statement] = ACTIONS(841),
        [sym_number] = ACTIONS(819),
        [sym_identifier] = ACTIONS(843),
        [sym_comment] = ACTIONS(67),
        [sym__indent] = ACTIONS(845),
    },
    [355] = {
        [sym__expression] = STATE(582),
        [sym_binary_operator] = STATE(32),
        [sym_subscript] = STATE(32),
        [sym_call] = STATE(32),
        [sym_number] = ACTIONS(111),
        [sym_identifier] = ACTIONS(111),
        [sym_comment] = ACTIONS(67),
    },
    [356] = {
        [anon_sym_COLON] = ACTIONS(847),
        [sym_comment] = ACTIONS(67),
    },
    [357] = {
        [sym_expression_list] = STATE(564),
        [sym__expression] = STATE(104),
        [sym_binary_operator] = STATE(32),
        [sym_subscript] = STATE(32),
        [sym_call] = STATE(32),
        [sym_number] = ACTIONS(111),
        [sym_identifier] = ACTIONS(111),
        [sym_comment] = ACTIONS(67),
    },
    [358] = {
        [sym_expression_list] = STATE(563),
        [sym__expression] = STATE(104),
        [sym_binary_operator] = STATE(32),
        [sym_subscript] = STATE(32),
        [sym_call] = STATE(32),
        [sym_number] = ACTIONS(111),
        [sym_identifier] = ACTIONS(111),
        [sym_comment] = ACTIONS(67),
    },
    [359] = {
        [sym__expression] = STATE(559),
        [sym_binary_operator] = STATE(32),
        [sym_subscript] = STATE(32),
        [sym_call] = STATE(32),
        [sym_number] = ACTIONS(111),
        [sym_identifier] = ACTIONS(111),
        [sym_comment] = ACTIONS(67),
    },
    [360] = {
        [anon_sym_COLON] = ACTIONS(849),
        [sym_comment] = ACTIONS(67),
    },
    [361] = {
        [sym__expression] = STATE(552),
        [sym_binary_operator] = STATE(32),
        [sym_subscript] = STATE(32),
        [sym_call] = STATE(32),
        [sym_number] = ACTIONS(111),
        [sym_identifier] = ACTIONS(111),
        [sym_comment] = ACTIONS(67),
    },
    [362] = {
        [sym__expression] = STATE(551),
        [sym_binary_operator] = STATE(32),
        [sym_subscript] = STATE(32),
        [sym_call] = STATE(32),
        [sym_number] = ACTIONS(111),
        [sym_identifier] = ACTIONS(111),
        [sym_comment] = ACTIONS(67),
    },
    [363] = {
        [anon_sym_COLON] = ACTIONS(851),
        [sym_comment] = ACTIONS(67),
    },
    [364] = {
        [sym_with_item] = STATE(548),
        [sym__expression] = STATE(211),
        [sym_binary_operator] = STATE(32),
        [sym_subscript] = STATE(32),
        [sym_call] = STATE(32),
        [sym_number] = ACTIONS(111),
        [sym_identifier] = ACTIONS(111),
        [sym_comment] = ACTIONS(67),
    },
    [365] = {
        [sym_identifier] = ACTIONS(853),
        [sym_comment] = ACTIONS(67),
    },
    [366] = {
        [sym_default_parameter] = STATE(186),
        [sym_list_splat_parameter] = STATE(187),
        [sym_dictionary_splat_parameter] = STATE(188),
        [sym_expression_list] = STATE(534),
        [sym__expression] = STATE(543),
        [sym_binary_operator] = STATE(32),
        [sym_subscript] = STATE(32),
        [sym_call] = STATE(32),
        [sym_keyword_argument] = STATE(430),
        [aux_sym_parameters_repeat1] = STATE(189),
        [anon_sym_RPAREN] = ACTIONS(519),
        [anon_sym_STAR] = ACTIONS(521),
        [sym_number] = ACTIONS(111),
        [sym_identifier] = ACTIONS(855),
        [sym_comment] = ACTIONS(67),
    },
    [367] = {
        [ts_builtin_sym_end] = ACTIONS(857),
        [anon_sym_SEMI] = ACTIONS(857),
        [anon_sym_print] = ACTIONS(861),
        [anon_sym_COMMA] = ACTIONS(857),
        [anon_sym_return] = ACTIONS(861),
        [anon_sym_del] = ACTIONS(861),
        [sym_pass_statement] = ACTIONS(861),
        [sym_break_statement] = ACTIONS(861),
        [sym_continue_statement] = ACTIONS(861),
        [anon_sym_if] = ACTIONS(861),
        [anon_sym_COLON] = ACTIONS(865),
        [anon_sym_elif] = ACTIONS(861),
        [anon_sym_else] = ACTIONS(861),
        [anon_sym_for] = ACTIONS(861),
        [anon_sym_in] = ACTIONS(861),
        [anon_sym_while] = ACTIONS(861),
        [anon_sym_try] = ACTIONS(861),
        [anon_sym_except] = ACTIONS(861),
        [anon_sym_as] = ACTIONS(861),
        [anon_sym_finally] = ACTIONS(861),
        [anon_sym_with] = ACTIONS(861),
        [anon_sym_def] = ACTIONS(861),
        [anon_sym_LPAREN] = ACTIONS(857),
        [anon_sym_RPAREN] = ACTIONS(857),
        [anon_sym_class] = ACTIONS(861),
        [anon_sym_AT] = ACTIONS(857),
        [anon_sym_PLUS] = ACTIONS(857),
        [anon_sym_LBRACK] = ACTIONS(857),
        [anon_sym_RBRACK] = ACTIONS(857),
        [sym_number] = ACTIONS(861),
        [sym_identifier] = ACTIONS(875),
        [sym_comment] = ACTIONS(67),
        [sym__newline] = ACTIONS(879),
        [sym__dedent] = ACTIONS(857),
    },
    [368] = {
        [sym__expression] = STATE(541),
        [sym_binary_operator] = STATE(32),
        [sym_subscript] = STATE(32),
        [sym_call] = STATE(32),
        [sym_number] = ACTIONS(111),
        [sym_identifier] = ACTIONS(111),
        [sym_comment] = ACTIONS(67),
    },
    [369] = {
        [anon_sym_STAR] = ACTIONS(535),
        [sym_identifier] = ACTIONS(885),
        [sym_comment] = ACTIONS(67),
    },
    [370] = {
        [sym_identifier] = ACTIONS(887),
        [sym_comment] = ACTIONS(67),
    },
    [371] = {
        [sym_identifier] = ACTIONS(889),
        [sym_comment] = ACTIONS(67),
    },
    [372] = {
        [sym__expression] = STATE(536),
        [sym_binary_operator] = STATE(376),
        [sym_subscript] = STATE(376),
        [sym_call] = STATE(376),
        [sym_number] = ACTIONS(819),
        [sym_identifier] = ACTIONS(819),
        [sym_comment] = ACTIONS(67),
    },
    [373] = {
        [sym__expression] = STATE(425),
        [sym_binary_operator] = STATE(32),
        [sym_subscript] = STATE(32),
        [sym_call] = STATE(32),
        [anon_sym_DOT_DOT_DOT] = ACTIONS(891),
        [sym_number] = ACTIONS(111),
        [sym_identifier] = ACTIONS(111),
        [sym_comment] = ACTIONS(67),
    },
    [374] = {
        [aux_sym_subscript_repeat1] = STATE(406),
        [anon_sym_COMMA] = ACTIONS(893),
        [anon_sym_RBRACK] = ACTIONS(897),
        [sym_comment] = ACTIONS(67),
    },
    [375] = {
        [ts_builtin_sym_end] = ACTIONS(901),
        [anon_sym_SEMI] = ACTIONS(901),
        [anon_sym_print] = ACTIONS(905),
        [anon_sym_COMMA] = ACTIONS(901),
        [anon_sym_return] = ACTIONS(905),
        [anon_sym_del] = ACTIONS(905),
        [sym_pass_statement] = ACTIONS(905),
        [sym_break_statement] = ACTIONS(905),
        [sym_continue_statement] = ACTIONS(905),
        [anon_sym_if] = ACTIONS(905),
        [anon_sym_COLON] = ACTIONS(901),
        [anon_sym_elif] = ACTIONS(905),
        [anon_sym_else] = ACTIONS(905),
        [anon_sym_for] = ACTIONS(905),
        [anon_sym_in] = ACTIONS(905),
        [anon_sym_while] = ACTIONS(905),
        [anon_sym_try] = ACTIONS(905),
        [anon_sym_except] = ACTIONS(905),
        [anon_sym_as] = ACTIONS(905),
        [anon_sym_finally] = ACTIONS(905),
        [anon_sym_with] = ACTIONS(905),
        [anon_sym_def] = ACTIONS(905),
        [anon_sym_LPAREN] = ACTIONS(901),
        [anon_sym_RPAREN] = ACTIONS(901),
        [anon_sym_class] = ACTIONS(905),
        [anon_sym_AT] = ACTIONS(901),
        [anon_sym_PLUS] = ACTIONS(901),
        [anon_sym_LBRACK] = ACTIONS(901),
        [anon_sym_RBRACK] = ACTIONS(901),
        [sym_number] = ACTIONS(905),
        [sym_identifier] = ACTIONS(909),
        [sym_comment] = ACTIONS(67),
        [sym__newline] = ACTIONS(901),
        [sym__dedent] = ACTIONS(901),
    },
    [376] = {
        [ts_builtin_sym_end] = ACTIONS(121),
        [anon_sym_SEMI] = ACTIONS(121),
        [anon_sym_print] = ACTIONS(123),
        [anon_sym_COMMA] = ACTIONS(121),
        [anon_sym_return] = ACTIONS(123),
        [anon_sym_del] = ACTIONS(123),
        [sym_pass_statement] = ACTIONS(123),
        [sym_break_statement] = ACTIONS(123),
        [sym_continue_statement] = ACTIONS(123),
        [anon_sym_if] = ACTIONS(123),
        [anon_sym_COLON] = ACTIONS(121),
        [anon_sym_elif] = ACTIONS(123),
        [anon_sym_else] = ACTIONS(123),
        [anon_sym_for] = ACTIONS(123),
        [anon_sym_in] = ACTIONS(123),
        [anon_sym_while] = ACTIONS(123),
        [anon_sym_try] = ACTIONS(123),
        [anon_sym_except] = ACTIONS(123),
        [anon_sym_as] = ACTIONS(123),
        [anon_sym_finally] = ACTIONS(123),
        [anon_sym_with] = ACTIONS(123),
        [anon_sym_def] = ACTIONS(123),
        [anon_sym_LPAREN] = ACTIONS(121),
        [anon_sym_RPAREN] = ACTIONS(121),
        [anon_sym_class] = ACTIONS(123),
        [anon_sym_AT] = ACTIONS(121),
        [anon_sym_PLUS] = ACTIONS(121),
        [anon_sym_LBRACK] = ACTIONS(121),
        [anon_sym_RBRACK] = ACTIONS(121),
        [sym_number] = ACTIONS(123),
        [sym_identifier] = ACTIONS(125),
        [sym_comment] = ACTIONS(67),
        [sym__newline] = ACTIONS(121),
        [sym__dedent] = ACTIONS(121),
    },
    [377] = {
        [sym_parameters] = STATE(391),
        [aux_sym_dotted_name_repeat1] = STATE(96),
        [ts_builtin_sym_end] = ACTIONS(121),
        [anon_sym_SEMI] = ACTIONS(121),
        [anon_sym_print] = ACTIONS(123),
        [anon_sym_COMMA] = ACTIONS(913),
        [anon_sym_return] = ACTIONS(123),
        [anon_sym_del] = ACTIONS(123),
        [sym_pass_statement] = ACTIONS(123),
        [sym_break_statement] = ACTIONS(123),
        [sym_continue_statement] = ACTIONS(123),
        [anon_sym_if] = ACTIONS(123),
        [anon_sym_COLON] = ACTIONS(917),
        [anon_sym_elif] = ACTIONS(123),
        [anon_sym_else] = ACTIONS(123),
        [anon_sym_for] = ACTIONS(123),
        [anon_sym_in] = ACTIONS(123),
        [anon_sym_while] = ACTIONS(123),
        [anon_sym_try] = ACTIONS(123),
        [anon_sym_except] = ACTIONS(123),
        [anon_sym_as] = ACTIONS(123),
        [anon_sym_finally] = ACTIONS(123),
        [anon_sym_with] = ACTIONS(123),
        [anon_sym_def] = ACTIONS(123),
        [anon_sym_LPAREN] = ACTIONS(920),
        [anon_sym_RPAREN] = ACTIONS(926),
        [anon_sym_EQ] = ACTIONS(931),
        [anon_sym_class] = ACTIONS(123),
        [anon_sym_AT] = ACTIONS(121),
        [anon_sym_DOT] = ACTIONS(933),
        [anon_sym_PLUS] = ACTIONS(121),
        [anon_sym_LBRACK] = ACTIONS(121),
        [anon_sym_RBRACK] = ACTIONS(121),
        [sym_number] = ACTIONS(123),
        [sym_identifier] = ACTIONS(125),
        [sym_comment] = ACTIONS(67),
        [sym__newline] = ACTIONS(937),
        [sym__dedent] = ACTIONS(121),
    },
    [378] = {
        [ts_builtin_sym_end] = ACTIONS(942),
        [anon_sym_SEMI] = ACTIONS(297),
        [anon_sym_print] = ACTIONS(299),
        [anon_sym_return] = ACTIONS(299),
        [anon_sym_del] = ACTIONS(299),
        [sym_pass_statement] = ACTIONS(299),
        [sym_break_statement] = ACTIONS(299),
        [sym_continue_statement] = ACTIONS(299),
        [anon_sym_if] = ACTIONS(299),
        [anon_sym_for] = ACTIONS(299),
        [anon_sym_while] = ACTIONS(299),
        [anon_sym_try] = ACTIONS(299),
        [anon_sym_with] = ACTIONS(299),
        [anon_sym_def] = ACTIONS(945),
        [anon_sym_class] = ACTIONS(945),
        [anon_sym_AT] = ACTIONS(949),
        [sym_number] = ACTIONS(299),
        [sym_identifier] = ACTIONS(301),
        [sym_comment] = ACTIONS(67),
        [sym__newline] = ACTIONS(297),
        [sym__dedent] = ACTIONS(297),
    },
    [379] = {
        [sym__statement] = STATE(119),
        [sym__simple_statement] = STATE(120),
        [sym_print_statement] = STATE(5),
        [sym_expression_statement] = STATE(5),
        [sym_return_statement] = STATE(5),
        [sym_delete_statement] = STATE(5),
        [sym__compound_statement] = STATE(121),
        [sym_if_statement] = STATE(122),
        [sym_for_statement] = STATE(122),
        [sym_while_statement] = STATE(122),
        [sym_try_statement] = STATE(122),
        [sym_with_statement] = STATE(122),
        [sym_function_definition] = STATE(122),
        [sym_class_definition] = STATE(122),
        [sym_decorated_definition] = STATE(122),
        [sym_decorator] = STATE(20),
        [sym__expression] = STATE(21),
        [sym_binary_operator] = STATE(14),
        [sym_subscript] = STATE(14),
        [sym_call] = STATE(14),
        [aux_sym_module_repeat1] = STATE(434),
        [aux_sym_decorated_definition_repeat1] = STATE(124),
        [anon_sym_print] = ACTIONS(77),
        [anon_sym_return] = ACTIONS(79),
        [anon_sym_del] = ACTIONS(81),
        [sym_pass_statement] = ACTIONS(83),
        [sym_break_statement] = ACTIONS(83),
        [sym_continue_statement] = ACTIONS(83),
        [anon_sym_if] = ACTIONS(359),
        [anon_sym_for] = ACTIONS(361),
        [anon_sym_while] = ACTIONS(363),
        [anon_sym_try] = ACTIONS(365),
        [anon_sym_with] = ACTIONS(367),
        [anon_sym_def] = ACTIONS(369),
        [anon_sym_class] = ACTIONS(371),
        [anon_sym_AT] = ACTIONS(99),
        [sym_number] = ACTIONS(101),
        [sym_identifier] = ACTIONS(103),
        [sym_comment] = ACTIONS(67),
        [sym__dedent] = ACTIONS(953),
    },
    [380] = {
        [ts_builtin_sym_end] = ACTIONS(955),
        [anon_sym_SEMI] = ACTIONS(955),
        [anon_sym_print] = ACTIONS(958),
        [anon_sym_return] = ACTIONS(958),
        [anon_sym_del] = ACTIONS(958),
        [sym_pass_statement] = ACTIONS(958),
        [sym_break_statement] = ACTIONS(958),
        [sym_continue_statement] = ACTIONS(958),
        [anon_sym_if] = ACTIONS(958),
        [anon_sym_elif] = ACTIONS(958),
        [anon_sym_else] = ACTIONS(958),
        [anon_sym_for] = ACTIONS(958),
        [anon_sym_while] = ACTIONS(958),
        [anon_sym_try] = ACTIONS(958),
        [anon_sym_except] = ACTIONS(958),
        [anon_sym_finally] = ACTIONS(958),
        [anon_sym_with] = ACTIONS(958),
        [anon_sym_def] = ACTIONS(958),
        [anon_sym_class] = ACTIONS(958),
        [anon_sym_AT] = ACTIONS(955),
        [sym_number] = ACTIONS(958),
        [sym_identifier] = ACTIONS(961),
        [sym_comment] = ACTIONS(67),
        [sym__newline] = ACTIONS(955),
        [sym__dedent] = ACTIONS(955),
    },
    [381] = {
        [ts_builtin_sym_end] = ACTIONS(964),
        [anon_sym_SEMI] = ACTIONS(964),
        [anon_sym_print] = ACTIONS(967),
        [anon_sym_return] = ACTIONS(967),
        [anon_sym_del] = ACTIONS(967),
        [sym_pass_statement] = ACTIONS(967),
        [sym_break_statement] = ACTIONS(967),
        [sym_continue_statement] = ACTIONS(967),
        [anon_sym_if] = ACTIONS(967),
        [anon_sym_for] = ACTIONS(967),
        [anon_sym_while] = ACTIONS(967),
        [anon_sym_try] = ACTIONS(967),
        [anon_sym_with] = ACTIONS(967),
        [anon_sym_def] = ACTIONS(967),
        [anon_sym_class] = ACTIONS(967),
        [anon_sym_AT] = ACTIONS(964),
        [sym_number] = ACTIONS(967),
        [sym_identifier] = ACTIONS(970),
        [sym_comment] = ACTIONS(67),
        [sym__newline] = ACTIONS(964),
        [sym__dedent] = ACTIONS(964),
    },
    [382] = {
        [ts_builtin_sym_end] = ACTIONS(375),
        [anon_sym_SEMI] = ACTIONS(375),
        [anon_sym_print] = ACTIONS(377),
        [anon_sym_return] = ACTIONS(377),
        [anon_sym_del] = ACTIONS(377),
        [sym_pass_statement] = ACTIONS(377),
        [sym_break_statement] = ACTIONS(377),
        [sym_continue_statement] = ACTIONS(377),
        [anon_sym_if] = ACTIONS(377),
        [anon_sym_elif] = ACTIONS(377),
        [anon_sym_else] = ACTIONS(377),
        [anon_sym_for] = ACTIONS(377),
        [anon_sym_while] = ACTIONS(377),
        [anon_sym_try] = ACTIONS(377),
        [anon_sym_except] = ACTIONS(377),
        [anon_sym_finally] = ACTIONS(377),
        [anon_sym_with] = ACTIONS(377),
        [anon_sym_def] = ACTIONS(377),
        [anon_sym_class] = ACTIONS(377),
        [anon_sym_AT] = ACTIONS(375),
        [sym_number] = ACTIONS(377),
        [sym_identifier] = ACTIONS(379),
        [sym_comment] = ACTIONS(67),
        [sym__newline] = ACTIONS(973),
        [sym__dedent] = ACTIONS(375),
    },
    [383] = {
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
        [sym_number] = ACTIONS(139),
        [sym_identifier] = ACTIONS(141),
        [sym_comment] = ACTIONS(67),
        [sym__newline] = ACTIONS(137),
        [sym__dedent] = ACTIONS(137),
    },
    [384] = {
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
        [sym_number] = ACTIONS(145),
        [sym_identifier] = ACTIONS(147),
        [sym_comment] = ACTIONS(67),
        [sym__newline] = ACTIONS(143),
        [sym__dedent] = ACTIONS(143),
    },
    [385] = {
        [ts_builtin_sym_end] = ACTIONS(976),
        [anon_sym_SEMI] = ACTIONS(976),
        [anon_sym_print] = ACTIONS(979),
        [anon_sym_return] = ACTIONS(979),
        [anon_sym_del] = ACTIONS(979),
        [sym_pass_statement] = ACTIONS(979),
        [sym_break_statement] = ACTIONS(979),
        [sym_continue_statement] = ACTIONS(979),
        [anon_sym_if] = ACTIONS(979),
        [anon_sym_elif] = ACTIONS(979),
        [anon_sym_else] = ACTIONS(979),
        [anon_sym_for] = ACTIONS(979),
        [anon_sym_while] = ACTIONS(979),
        [anon_sym_try] = ACTIONS(979),
        [anon_sym_with] = ACTIONS(979),
        [anon_sym_def] = ACTIONS(979),
        [anon_sym_class] = ACTIONS(979),
        [anon_sym_AT] = ACTIONS(976),
        [sym_number] = ACTIONS(979),
        [sym_identifier] = ACTIONS(982),
        [sym_comment] = ACTIONS(67),
        [sym__newline] = ACTIONS(976),
        [sym__dedent] = ACTIONS(976),
    },
    [386] = {
        [sym_finally_clause] = STATE(451),
        [ts_builtin_sym_end] = ACTIONS(985),
        [anon_sym_SEMI] = ACTIONS(985),
        [anon_sym_print] = ACTIONS(991),
        [anon_sym_return] = ACTIONS(991),
        [anon_sym_del] = ACTIONS(991),
        [sym_pass_statement] = ACTIONS(991),
        [sym_break_statement] = ACTIONS(991),
        [sym_continue_statement] = ACTIONS(991),
        [anon_sym_if] = ACTIONS(991),
        [anon_sym_for] = ACTIONS(991),
        [anon_sym_while] = ACTIONS(991),
        [anon_sym_try] = ACTIONS(991),
        [anon_sym_finally] = ACTIONS(997),
        [anon_sym_with] = ACTIONS(991),
        [anon_sym_def] = ACTIONS(991),
        [anon_sym_class] = ACTIONS(991),
        [anon_sym_AT] = ACTIONS(985),
        [sym_number] = ACTIONS(991),
        [sym_identifier] = ACTIONS(999),
        [sym_comment] = ACTIONS(67),
        [sym__newline] = ACTIONS(985),
        [sym__dedent] = ACTIONS(985),
    },
    [387] = {
        [ts_builtin_sym_end] = ACTIONS(1005),
        [anon_sym_SEMI] = ACTIONS(1005),
        [anon_sym_print] = ACTIONS(1008),
        [anon_sym_return] = ACTIONS(1008),
        [anon_sym_del] = ACTIONS(1008),
        [sym_pass_statement] = ACTIONS(1008),
        [sym_break_statement] = ACTIONS(1008),
        [sym_continue_statement] = ACTIONS(1008),
        [anon_sym_if] = ACTIONS(1008),
        [anon_sym_else] = ACTIONS(1008),
        [anon_sym_for] = ACTIONS(1008),
        [anon_sym_while] = ACTIONS(1008),
        [anon_sym_try] = ACTIONS(1008),
        [anon_sym_except] = ACTIONS(1008),
        [anon_sym_finally] = ACTIONS(1008),
        [anon_sym_with] = ACTIONS(1008),
        [anon_sym_def] = ACTIONS(1008),
        [anon_sym_class] = ACTIONS(1008),
        [anon_sym_AT] = ACTIONS(1005),
        [sym_number] = ACTIONS(1008),
        [sym_identifier] = ACTIONS(1011),
        [sym_comment] = ACTIONS(67),
        [sym__newline] = ACTIONS(1005),
        [sym__dedent] = ACTIONS(1005),
    },
    [388] = {
        [ts_builtin_sym_end] = ACTIONS(1014),
        [anon_sym_SEMI] = ACTIONS(1014),
        [anon_sym_print] = ACTIONS(1018),
        [anon_sym_return] = ACTIONS(1018),
        [anon_sym_del] = ACTIONS(1018),
        [sym_pass_statement] = ACTIONS(1018),
        [sym_break_statement] = ACTIONS(1018),
        [sym_continue_statement] = ACTIONS(1018),
        [anon_sym_if] = ACTIONS(1018),
        [anon_sym_for] = ACTIONS(1018),
        [anon_sym_while] = ACTIONS(1018),
        [anon_sym_try] = ACTIONS(1018),
        [anon_sym_with] = ACTIONS(1018),
        [anon_sym_def] = ACTIONS(1018),
        [anon_sym_class] = ACTIONS(1018),
        [anon_sym_AT] = ACTIONS(1014),
        [sym_number] = ACTIONS(1018),
        [sym_identifier] = ACTIONS(1022),
        [sym_comment] = ACTIONS(67),
        [sym__newline] = ACTIONS(1014),
        [sym__dedent] = ACTIONS(1014),
    },
    [389] = {
        [aux_sym_with_statement_repeat1] = STATE(404),
        [anon_sym_COMMA] = ACTIONS(1026),
        [anon_sym_COLON] = ACTIONS(1030),
        [sym_comment] = ACTIONS(67),
    },
    [390] = {
        [ts_builtin_sym_end] = ACTIONS(1034),
        [anon_sym_SEMI] = ACTIONS(1034),
        [anon_sym_print] = ACTIONS(1037),
        [anon_sym_return] = ACTIONS(1037),
        [anon_sym_del] = ACTIONS(1037),
        [sym_pass_statement] = ACTIONS(1037),
        [sym_break_statement] = ACTIONS(1037),
        [sym_continue_statement] = ACTIONS(1037),
        [anon_sym_if] = ACTIONS(1037),
        [anon_sym_for] = ACTIONS(1037),
        [anon_sym_while] = ACTIONS(1037),
        [anon_sym_try] = ACTIONS(1037),
        [anon_sym_with] = ACTIONS(1037),
        [anon_sym_def] = ACTIONS(1037),
        [anon_sym_class] = ACTIONS(1037),
        [anon_sym_AT] = ACTIONS(1034),
        [sym_number] = ACTIONS(1037),
        [sym_identifier] = ACTIONS(1040),
        [sym_comment] = ACTIONS(67),
        [sym__newline] = ACTIONS(1034),
        [sym__dedent] = ACTIONS(1034),
    },
    [391] = {
        [anon_sym_COLON] = ACTIONS(1043),
        [sym_comment] = ACTIONS(67),
    },
    [392] = {
        [anon_sym_COMMA] = ACTIONS(1045),
        [anon_sym_RPAREN] = ACTIONS(1047),
        [sym_comment] = ACTIONS(67),
    },
    [393] = {
        [anon_sym_COMMA] = ACTIONS(1049),
        [anon_sym_RPAREN] = ACTIONS(1047),
        [sym_comment] = ACTIONS(67),
    },
    [394] = {
        [anon_sym_RPAREN] = ACTIONS(1051),
        [sym_comment] = ACTIONS(67),
    },
    [395] = {
        [anon_sym_def] = ACTIONS(1053),
        [anon_sym_class] = ACTIONS(1053),
        [anon_sym_AT] = ACTIONS(1053),
        [sym_comment] = ACTIONS(67),
    },
    [396] = {
        [sym_elif_clause] = STATE(471),
        [sym_else_clause] = STATE(517),
        [sym_except_clause] = STATE(518),
        [sym_finally_clause] = STATE(519),
        [aux_sym_if_statement_repeat1] = STATE(402),
        [aux_sym_try_statement_repeat1] = STATE(403),
        [ts_builtin_sym_end] = ACTIONS(1056),
        [anon_sym_SEMI] = ACTIONS(1056),
        [anon_sym_print] = ACTIONS(1070),
        [anon_sym_return] = ACTIONS(1070),
        [anon_sym_del] = ACTIONS(1070),
        [sym_pass_statement] = ACTIONS(1070),
        [sym_break_statement] = ACTIONS(1070),
        [sym_continue_statement] = ACTIONS(1070),
        [anon_sym_if] = ACTIONS(1070),
        [anon_sym_elif] = ACTIONS(1084),
        [anon_sym_else] = ACTIONS(1087),
        [anon_sym_for] = ACTIONS(1070),
        [anon_sym_while] = ACTIONS(1070),
        [anon_sym_try] = ACTIONS(1070),
        [anon_sym_except] = ACTIONS(1092),
        [anon_sym_finally] = ACTIONS(1096),
        [anon_sym_with] = ACTIONS(1070),
        [anon_sym_def] = ACTIONS(1070),
        [anon_sym_class] = ACTIONS(1070),
        [anon_sym_AT] = ACTIONS(1056),
        [sym_number] = ACTIONS(1070),
        [sym_identifier] = ACTIONS(1101),
        [sym_comment] = ACTIONS(67),
        [sym__newline] = ACTIONS(1056),
        [sym__dedent] = ACTIONS(1056),
    },
    [397] = {
        [ts_builtin_sym_end] = ACTIONS(1115),
        [anon_sym_SEMI] = ACTIONS(1115),
        [anon_sym_print] = ACTIONS(1118),
        [anon_sym_return] = ACTIONS(1118),
        [anon_sym_del] = ACTIONS(1118),
        [sym_pass_statement] = ACTIONS(1118),
        [sym_break_statement] = ACTIONS(1118),
        [sym_continue_statement] = ACTIONS(1118),
        [anon_sym_if] = ACTIONS(1118),
        [anon_sym_COLON] = ACTIONS(1121),
        [anon_sym_elif] = ACTIONS(1118),
        [anon_sym_else] = ACTIONS(1118),
        [anon_sym_for] = ACTIONS(1118),
        [anon_sym_in] = ACTIONS(1123),
        [anon_sym_while] = ACTIONS(1118),
        [anon_sym_try] = ACTIONS(1118),
        [anon_sym_except] = ACTIONS(1118),
        [anon_sym_finally] = ACTIONS(1118),
        [anon_sym_with] = ACTIONS(1118),
        [anon_sym_def] = ACTIONS(1118),
        [anon_sym_RPAREN] = ACTIONS(1125),
        [anon_sym_class] = ACTIONS(1118),
        [anon_sym_AT] = ACTIONS(1115),
        [sym_number] = ACTIONS(1118),
        [sym_identifier] = ACTIONS(1127),
        [sym_comment] = ACTIONS(67),
        [sym__newline] = ACTIONS(1115),
        [sym__dedent] = ACTIONS(1115),
    },
    [398] = {
        [aux_sym_print_statement_repeat1] = STATE(401),
        [aux_sym_subscript_repeat1] = STATE(406),
        [aux_sym_call_repeat1] = STATE(407),
        [ts_builtin_sym_end] = ACTIONS(1130),
        [anon_sym_SEMI] = ACTIONS(1130),
        [anon_sym_print] = ACTIONS(1137),
        [anon_sym_COMMA] = ACTIONS(1144),
        [anon_sym_return] = ACTIONS(1137),
        [anon_sym_del] = ACTIONS(1137),
        [sym_pass_statement] = ACTIONS(1137),
        [sym_break_statement] = ACTIONS(1137),
        [sym_continue_statement] = ACTIONS(1137),
        [anon_sym_if] = ACTIONS(1137),
        [anon_sym_COLON] = ACTIONS(1157),
        [anon_sym_elif] = ACTIONS(1137),
        [anon_sym_else] = ACTIONS(1137),
        [anon_sym_for] = ACTIONS(1137),
        [anon_sym_in] = ACTIONS(1165),
        [anon_sym_while] = ACTIONS(1137),
        [anon_sym_try] = ACTIONS(1137),
        [anon_sym_except] = ACTIONS(1137),
        [anon_sym_as] = ACTIONS(1170),
        [anon_sym_finally] = ACTIONS(1137),
        [anon_sym_with] = ACTIONS(1137),
        [anon_sym_def] = ACTIONS(1137),
        [anon_sym_LPAREN] = ACTIONS(1173),
        [anon_sym_RPAREN] = ACTIONS(1176),
        [anon_sym_class] = ACTIONS(1137),
        [anon_sym_AT] = ACTIONS(1130),
        [anon_sym_PLUS] = ACTIONS(1186),
        [anon_sym_LBRACK] = ACTIONS(1189),
        [anon_sym_RBRACK] = ACTIONS(1192),
        [sym_number] = ACTIONS(1137),
        [sym_identifier] = ACTIONS(1197),
        [sym_comment] = ACTIONS(67),
        [sym__newline] = ACTIONS(1130),
        [sym__dedent] = ACTIONS(1130),
    },
    [399] = {
        [aux_sym_call_repeat1] = STATE(407),
        [anon_sym_COMMA] = ACTIONS(1204),
        [anon_sym_RPAREN] = ACTIONS(1208),
        [sym_comment] = ACTIONS(67),
    },
    [400] = {
        [sym__statement] = STATE(461),
        [sym__simple_statement] = STATE(462),
        [sym_print_statement] = STATE(5),
        [sym_expression_statement] = STATE(5),
        [sym_return_statement] = STATE(5),
        [sym_delete_statement] = STATE(5),
        [sym__compound_statement] = STATE(383),
        [sym_if_statement] = STATE(384),
        [sym_for_statement] = STATE(384),
        [sym_while_statement] = STATE(384),
        [sym_try_statement] = STATE(384),
        [sym_with_statement] = STATE(384),
        [sym_function_definition] = STATE(384),
        [sym_class_definition] = STATE(384),
        [sym_decorated_definition] = STATE(384),
        [sym_decorator] = STATE(20),
        [sym__expression] = STATE(21),
        [sym_binary_operator] = STATE(14),
        [sym_subscript] = STATE(14),
        [sym_call] = STATE(14),
        [aux_sym_decorated_definition_repeat1] = STATE(405),
        [ts_builtin_sym_end] = ACTIONS(163),
        [anon_sym_SEMI] = ACTIONS(165),
        [anon_sym_print] = ACTIONS(77),
        [anon_sym_return] = ACTIONS(79),
        [anon_sym_del] = ACTIONS(81),
        [sym_pass_statement] = ACTIONS(83),
        [sym_break_statement] = ACTIONS(83),
        [sym_continue_statement] = ACTIONS(83),
        [anon_sym_if] = ACTIONS(1212),
        [anon_sym_for] = ACTIONS(1214),
        [anon_sym_while] = ACTIONS(1216),
        [anon_sym_try] = ACTIONS(1218),
        [anon_sym_with] = ACTIONS(1220),
        [anon_sym_def] = ACTIONS(1222),
        [anon_sym_class] = ACTIONS(1224),
        [anon_sym_AT] = ACTIONS(99),
        [sym_number] = ACTIONS(101),
        [sym_identifier] = ACTIONS(103),
        [sym_comment] = ACTIONS(67),
        [sym__newline] = ACTIONS(165),
        [sym__dedent] = ACTIONS(1226),
    },
    [401] = {
        [ts_builtin_sym_end] = ACTIONS(1228),
        [anon_sym_SEMI] = ACTIONS(1228),
        [anon_sym_print] = ACTIONS(1231),
        [anon_sym_COMMA] = ACTIONS(1234),
        [anon_sym_return] = ACTIONS(1231),
        [anon_sym_del] = ACTIONS(1231),
        [sym_pass_statement] = ACTIONS(1231),
        [sym_break_statement] = ACTIONS(1231),
        [sym_continue_statement] = ACTIONS(1231),
        [anon_sym_if] = ACTIONS(1231),
        [anon_sym_COLON] = ACTIONS(355),
        [anon_sym_elif] = ACTIONS(1231),
        [anon_sym_else] = ACTIONS(1231),
        [anon_sym_for] = ACTIONS(1231),
        [anon_sym_in] = ACTIONS(479),
        [anon_sym_while] = ACTIONS(1231),
        [anon_sym_try] = ACTIONS(1231),
        [anon_sym_except] = ACTIONS(1231),
        [anon_sym_finally] = ACTIONS(1231),
        [anon_sym_with] = ACTIONS(1231),
        [anon_sym_def] = ACTIONS(1231),
        [anon_sym_RPAREN] = ACTIONS(1236),
        [anon_sym_class] = ACTIONS(1231),
        [anon_sym_AT] = ACTIONS(1228),
        [sym_number] = ACTIONS(1231),
        [sym_identifier] = ACTIONS(1239),
        [sym_comment] = ACTIONS(67),
        [sym__newline] = ACTIONS(1228),
        [sym__dedent] = ACTIONS(1228),
    },
    [402] = {
        [sym_elif_clause] = STATE(453),
        [sym_else_clause] = STATE(454),
        [ts_builtin_sym_end] = ACTIONS(753),
        [anon_sym_SEMI] = ACTIONS(753),
        [anon_sym_print] = ACTIONS(751),
        [anon_sym_return] = ACTIONS(751),
        [anon_sym_del] = ACTIONS(751),
        [sym_pass_statement] = ACTIONS(751),
        [sym_break_statement] = ACTIONS(751),
        [sym_continue_statement] = ACTIONS(751),
        [anon_sym_if] = ACTIONS(751),
        [anon_sym_elif] = ACTIONS(1242),
        [anon_sym_else] = ACTIONS(1244),
        [anon_sym_for] = ACTIONS(751),
        [anon_sym_while] = ACTIONS(751),
        [anon_sym_try] = ACTIONS(751),
        [anon_sym_with] = ACTIONS(751),
        [anon_sym_def] = ACTIONS(751),
        [anon_sym_class] = ACTIONS(751),
        [anon_sym_AT] = ACTIONS(753),
        [sym_number] = ACTIONS(751),
        [sym_identifier] = ACTIONS(755),
        [sym_comment] = ACTIONS(67),
        [sym__newline] = ACTIONS(753),
        [sym__dedent] = ACTIONS(753),
    },
    [403] = {
        [sym_else_clause] = STATE(448),
        [sym_except_clause] = STATE(449),
        [sym_finally_clause] = STATE(450),
        [ts_builtin_sym_end] = ACTIONS(643),
        [anon_sym_SEMI] = ACTIONS(643),
        [anon_sym_print] = ACTIONS(641),
        [anon_sym_return] = ACTIONS(641),
        [anon_sym_del] = ACTIONS(641),
        [sym_pass_statement] = ACTIONS(641),
        [sym_break_statement] = ACTIONS(641),
        [sym_continue_statement] = ACTIONS(641),
        [anon_sym_if] = ACTIONS(641),
        [anon_sym_else] = ACTIONS(1246),
        [anon_sym_for] = ACTIONS(641),
        [anon_sym_while] = ACTIONS(641),
        [anon_sym_try] = ACTIONS(641),
        [anon_sym_except] = ACTIONS(1248),
        [anon_sym_finally] = ACTIONS(997),
        [anon_sym_with] = ACTIONS(641),
        [anon_sym_def] = ACTIONS(641),
        [anon_sym_class] = ACTIONS(641),
        [anon_sym_AT] = ACTIONS(643),
        [sym_number] = ACTIONS(641),
        [sym_identifier] = ACTIONS(645),
        [sym_comment] = ACTIONS(67),
        [sym__newline] = ACTIONS(643),
        [sym__dedent] = ACTIONS(643),
    },
    [404] = {
        [anon_sym_COMMA] = ACTIONS(595),
        [anon_sym_COLON] = ACTIONS(1250),
        [sym_comment] = ACTIONS(67),
    },
    [405] = {
        [sym_function_definition] = STATE(414),
        [sym_class_definition] = STATE(414),
        [sym_decorator] = STATE(25),
        [anon_sym_def] = ACTIONS(1252),
        [anon_sym_class] = ACTIONS(1254),
        [anon_sym_AT] = ACTIONS(99),
        [sym_comment] = ACTIONS(67),
    },
    [406] = {
        [anon_sym_COMMA] = ACTIONS(1256),
        [anon_sym_RBRACK] = ACTIONS(1258),
        [sym_comment] = ACTIONS(67),
    },
    [407] = {
        [anon_sym_COMMA] = ACTIONS(1260),
        [anon_sym_RPAREN] = ACTIONS(1262),
        [sym_comment] = ACTIONS(67),
    },
    [408] = {
        [sym__expression] = STATE(65),
        [sym_binary_operator] = STATE(32),
        [sym_subscript] = STATE(32),
        [sym_call] = STATE(32),
        [sym_keyword_argument] = STATE(66),
        [anon_sym_RPAREN] = ACTIONS(1264),
        [sym_number] = ACTIONS(111),
        [sym_identifier] = ACTIONS(187),
        [sym_comment] = ACTIONS(67),
    },
    [409] = {
        [ts_builtin_sym_end] = ACTIONS(261),
        [anon_sym_SEMI] = ACTIONS(261),
        [anon_sym_print] = ACTIONS(289),
        [anon_sym_COMMA] = ACTIONS(261),
        [anon_sym_return] = ACTIONS(289),
        [anon_sym_del] = ACTIONS(289),
        [sym_pass_statement] = ACTIONS(289),
        [sym_break_statement] = ACTIONS(289),
        [sym_continue_statement] = ACTIONS(289),
        [anon_sym_if] = ACTIONS(289),
        [anon_sym_COLON] = ACTIONS(261),
        [anon_sym_elif] = ACTIONS(289),
        [anon_sym_else] = ACTIONS(289),
        [anon_sym_for] = ACTIONS(289),
        [anon_sym_in] = ACTIONS(289),
        [anon_sym_while] = ACTIONS(289),
        [anon_sym_try] = ACTIONS(289),
        [anon_sym_except] = ACTIONS(289),
        [anon_sym_as] = ACTIONS(289),
        [anon_sym_finally] = ACTIONS(289),
        [anon_sym_with] = ACTIONS(289),
        [anon_sym_def] = ACTIONS(289),
        [anon_sym_LPAREN] = ACTIONS(261),
        [anon_sym_RPAREN] = ACTIONS(261),
        [anon_sym_class] = ACTIONS(289),
        [anon_sym_AT] = ACTIONS(261),
        [anon_sym_PLUS] = ACTIONS(261),
        [anon_sym_LBRACK] = ACTIONS(261),
        [anon_sym_RBRACK] = ACTIONS(261),
        [sym_number] = ACTIONS(289),
        [sym_identifier] = ACTIONS(291),
        [sym_comment] = ACTIONS(67),
        [sym__newline] = ACTIONS(261),
        [sym__dedent] = ACTIONS(261),
    },
    [410] = {
        [ts_builtin_sym_end] = ACTIONS(263),
        [anon_sym_SEMI] = ACTIONS(263),
        [anon_sym_print] = ACTIONS(293),
        [anon_sym_COMMA] = ACTIONS(263),
        [anon_sym_return] = ACTIONS(293),
        [anon_sym_del] = ACTIONS(293),
        [sym_pass_statement] = ACTIONS(293),
        [sym_break_statement] = ACTIONS(293),
        [sym_continue_statement] = ACTIONS(293),
        [anon_sym_if] = ACTIONS(293),
        [anon_sym_COLON] = ACTIONS(263),
        [anon_sym_elif] = ACTIONS(293),
        [anon_sym_else] = ACTIONS(293),
        [anon_sym_for] = ACTIONS(293),
        [anon_sym_in] = ACTIONS(293),
        [anon_sym_while] = ACTIONS(293),
        [anon_sym_try] = ACTIONS(293),
        [anon_sym_except] = ACTIONS(293),
        [anon_sym_as] = ACTIONS(293),
        [anon_sym_finally] = ACTIONS(293),
        [anon_sym_with] = ACTIONS(293),
        [anon_sym_def] = ACTIONS(293),
        [anon_sym_LPAREN] = ACTIONS(263),
        [anon_sym_RPAREN] = ACTIONS(263),
        [anon_sym_class] = ACTIONS(293),
        [anon_sym_AT] = ACTIONS(263),
        [anon_sym_PLUS] = ACTIONS(263),
        [anon_sym_LBRACK] = ACTIONS(263),
        [anon_sym_RBRACK] = ACTIONS(263),
        [sym_number] = ACTIONS(293),
        [sym_identifier] = ACTIONS(295),
        [sym_comment] = ACTIONS(67),
        [sym__newline] = ACTIONS(263),
        [sym__dedent] = ACTIONS(263),
    },
    [411] = {
        [sym__expression] = STATE(44),
        [sym_binary_operator] = STATE(32),
        [sym_subscript] = STATE(32),
        [sym_call] = STATE(32),
        [anon_sym_DOT_DOT_DOT] = ACTIONS(215),
        [anon_sym_RBRACK] = ACTIONS(1266),
        [sym_number] = ACTIONS(111),
        [sym_identifier] = ACTIONS(111),
        [sym_comment] = ACTIONS(67),
    },
    [412] = {
        [ts_builtin_sym_end] = ACTIONS(219),
        [anon_sym_SEMI] = ACTIONS(219),
        [anon_sym_print] = ACTIONS(221),
        [anon_sym_COMMA] = ACTIONS(219),
        [anon_sym_return] = ACTIONS(221),
        [anon_sym_del] = ACTIONS(221),
        [sym_pass_statement] = ACTIONS(221),
        [sym_break_statement] = ACTIONS(221),
        [sym_continue_statement] = ACTIONS(221),
        [anon_sym_if] = ACTIONS(221),
        [anon_sym_COLON] = ACTIONS(219),
        [anon_sym_elif] = ACTIONS(221),
        [anon_sym_else] = ACTIONS(221),
        [anon_sym_for] = ACTIONS(221),
        [anon_sym_in] = ACTIONS(221),
        [anon_sym_while] = ACTIONS(221),
        [anon_sym_try] = ACTIONS(221),
        [anon_sym_except] = ACTIONS(221),
        [anon_sym_as] = ACTIONS(221),
        [anon_sym_finally] = ACTIONS(221),
        [anon_sym_with] = ACTIONS(221),
        [anon_sym_def] = ACTIONS(221),
        [anon_sym_LPAREN] = ACTIONS(219),
        [anon_sym_RPAREN] = ACTIONS(219),
        [anon_sym_class] = ACTIONS(221),
        [anon_sym_AT] = ACTIONS(219),
        [anon_sym_PLUS] = ACTIONS(219),
        [anon_sym_LBRACK] = ACTIONS(219),
        [anon_sym_RBRACK] = ACTIONS(219),
        [sym_number] = ACTIONS(221),
        [sym_identifier] = ACTIONS(223),
        [sym_comment] = ACTIONS(67),
        [sym__newline] = ACTIONS(219),
        [sym__dedent] = ACTIONS(219),
    },
    [413] = {
        [ts_builtin_sym_end] = ACTIONS(227),
        [anon_sym_SEMI] = ACTIONS(227),
        [anon_sym_print] = ACTIONS(229),
        [anon_sym_COMMA] = ACTIONS(227),
        [anon_sym_return] = ACTIONS(229),
        [anon_sym_del] = ACTIONS(229),
        [sym_pass_statement] = ACTIONS(229),
        [sym_break_statement] = ACTIONS(229),
        [sym_continue_statement] = ACTIONS(229),
        [anon_sym_if] = ACTIONS(229),
        [anon_sym_COLON] = ACTIONS(227),
        [anon_sym_elif] = ACTIONS(229),
        [anon_sym_else] = ACTIONS(229),
        [anon_sym_for] = ACTIONS(229),
        [anon_sym_in] = ACTIONS(229),
        [anon_sym_while] = ACTIONS(229),
        [anon_sym_try] = ACTIONS(229),
        [anon_sym_except] = ACTIONS(229),
        [anon_sym_as] = ACTIONS(229),
        [anon_sym_finally] = ACTIONS(229),
        [anon_sym_with] = ACTIONS(229),
        [anon_sym_def] = ACTIONS(229),
        [anon_sym_LPAREN] = ACTIONS(227),
        [anon_sym_RPAREN] = ACTIONS(227),
        [anon_sym_class] = ACTIONS(229),
        [anon_sym_AT] = ACTIONS(227),
        [anon_sym_PLUS] = ACTIONS(227),
        [anon_sym_LBRACK] = ACTIONS(227),
        [anon_sym_RBRACK] = ACTIONS(227),
        [sym_number] = ACTIONS(229),
        [sym_identifier] = ACTIONS(231),
        [sym_comment] = ACTIONS(67),
        [sym__newline] = ACTIONS(227),
        [sym__dedent] = ACTIONS(227),
    },
    [414] = {
        [ts_builtin_sym_end] = ACTIONS(171),
        [anon_sym_SEMI] = ACTIONS(171),
        [anon_sym_print] = ACTIONS(173),
        [anon_sym_return] = ACTIONS(173),
        [anon_sym_del] = ACTIONS(173),
        [sym_pass_statement] = ACTIONS(173),
        [sym_break_statement] = ACTIONS(173),
        [sym_continue_statement] = ACTIONS(173),
        [anon_sym_if] = ACTIONS(173),
        [anon_sym_for] = ACTIONS(173),
        [anon_sym_while] = ACTIONS(173),
        [anon_sym_try] = ACTIONS(173),
        [anon_sym_with] = ACTIONS(173),
        [anon_sym_def] = ACTIONS(173),
        [anon_sym_class] = ACTIONS(173),
        [anon_sym_AT] = ACTIONS(171),
        [sym_number] = ACTIONS(173),
        [sym_identifier] = ACTIONS(175),
        [sym_comment] = ACTIONS(67),
        [sym__newline] = ACTIONS(171),
        [sym__dedent] = ACTIONS(171),
    },
    [415] = {
        [sym__simple_statement] = STATE(419),
        [sym_print_statement] = STATE(352),
        [sym_expression_statement] = STATE(352),
        [sym_return_statement] = STATE(352),
        [sym_delete_statement] = STATE(352),
        [sym__suite] = STATE(420),
        [sym__expression] = STATE(421),
        [sym_binary_operator] = STATE(376),
        [sym_subscript] = STATE(376),
        [sym_call] = STATE(376),
        [anon_sym_print] = ACTIONS(1268),
        [anon_sym_return] = ACTIONS(1270),
        [anon_sym_del] = ACTIONS(1272),
        [sym_pass_statement] = ACTIONS(841),
        [sym_break_statement] = ACTIONS(841),
        [sym_continue_statement] = ACTIONS(841),
        [sym_number] = ACTIONS(819),
        [sym_identifier] = ACTIONS(843),
        [sym_comment] = ACTIONS(67),
        [sym__indent] = ACTIONS(845),
    },
    [416] = {
        [sym__expression] = STATE(446),
        [sym_binary_operator] = STATE(376),
        [sym_subscript] = STATE(376),
        [sym_call] = STATE(376),
        [sym_number] = ACTIONS(819),
        [sym_identifier] = ACTIONS(819),
        [sym_comment] = ACTIONS(67),
    },
    [417] = {
        [sym_expression_list] = STATE(445),
        [sym__expression] = STATE(437),
        [sym_binary_operator] = STATE(376),
        [sym_subscript] = STATE(376),
        [sym_call] = STATE(376),
        [sym_number] = ACTIONS(819),
        [sym_identifier] = ACTIONS(819),
        [sym_comment] = ACTIONS(67),
    },
    [418] = {
        [sym_expression_list] = STATE(436),
        [sym__expression] = STATE(437),
        [sym_binary_operator] = STATE(376),
        [sym_subscript] = STATE(376),
        [sym_call] = STATE(376),
        [sym_number] = ACTIONS(819),
        [sym_identifier] = ACTIONS(819),
        [sym_comment] = ACTIONS(67),
    },
    [419] = {
        [ts_builtin_sym_end] = ACTIONS(375),
        [anon_sym_SEMI] = ACTIONS(375),
        [anon_sym_print] = ACTIONS(377),
        [anon_sym_return] = ACTIONS(377),
        [anon_sym_del] = ACTIONS(377),
        [sym_pass_statement] = ACTIONS(377),
        [sym_break_statement] = ACTIONS(377),
        [sym_continue_statement] = ACTIONS(377),
        [anon_sym_if] = ACTIONS(377),
        [anon_sym_elif] = ACTIONS(377),
        [anon_sym_else] = ACTIONS(377),
        [anon_sym_for] = ACTIONS(377),
        [anon_sym_while] = ACTIONS(377),
        [anon_sym_try] = ACTIONS(377),
        [anon_sym_except] = ACTIONS(377),
        [anon_sym_finally] = ACTIONS(377),
        [anon_sym_with] = ACTIONS(377),
        [anon_sym_def] = ACTIONS(377),
        [anon_sym_class] = ACTIONS(377),
        [anon_sym_AT] = ACTIONS(375),
        [sym_number] = ACTIONS(377),
        [sym_identifier] = ACTIONS(379),
        [sym_comment] = ACTIONS(67),
        [sym__newline] = ACTIONS(375),
        [sym__dedent] = ACTIONS(375),
    },
    [420] = {
        [ts_builtin_sym_end] = ACTIONS(601),
        [anon_sym_SEMI] = ACTIONS(601),
        [anon_sym_print] = ACTIONS(599),
        [anon_sym_return] = ACTIONS(599),
        [anon_sym_del] = ACTIONS(599),
        [sym_pass_statement] = ACTIONS(599),
        [sym_break_statement] = ACTIONS(599),
        [sym_continue_statement] = ACTIONS(599),
        [anon_sym_if] = ACTIONS(599),
        [anon_sym_for] = ACTIONS(599),
        [anon_sym_while] = ACTIONS(599),
        [anon_sym_try] = ACTIONS(599),
        [anon_sym_with] = ACTIONS(599),
        [anon_sym_def] = ACTIONS(599),
        [anon_sym_class] = ACTIONS(599),
        [anon_sym_AT] = ACTIONS(601),
        [sym_number] = ACTIONS(599),
        [sym_identifier] = ACTIONS(603),
        [sym_comment] = ACTIONS(67),
        [sym__newline] = ACTIONS(601),
        [sym__dedent] = ACTIONS(601),
    },
    [421] = {
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
        [anon_sym_LPAREN] = ACTIONS(1274),
        [anon_sym_class] = ACTIONS(153),
        [anon_sym_AT] = ACTIONS(151),
        [anon_sym_PLUS] = ACTIONS(1276),
        [anon_sym_LBRACK] = ACTIONS(1278),
        [sym_number] = ACTIONS(153),
        [sym_identifier] = ACTIONS(161),
        [sym_comment] = ACTIONS(67),
        [sym__newline] = ACTIONS(151),
        [sym__dedent] = ACTIONS(151),
    },
    [422] = {
        [sym__expression] = STATE(429),
        [sym_binary_operator] = STATE(32),
        [sym_subscript] = STATE(32),
        [sym_call] = STATE(32),
        [sym_keyword_argument] = STATE(430),
        [sym_number] = ACTIONS(111),
        [sym_identifier] = ACTIONS(187),
        [sym_comment] = ACTIONS(67),
    },
    [423] = {
        [sym__expression] = STATE(428),
        [sym_binary_operator] = STATE(376),
        [sym_subscript] = STATE(376),
        [sym_call] = STATE(376),
        [sym_number] = ACTIONS(819),
        [sym_identifier] = ACTIONS(819),
        [sym_comment] = ACTIONS(67),
    },
    [424] = {
        [aux_sym_subscript_repeat1] = STATE(406),
        [anon_sym_COMMA] = ACTIONS(1280),
        [anon_sym_RBRACK] = ACTIONS(1282),
        [sym_comment] = ACTIONS(67),
    },
    [425] = {
        [aux_sym_subscript_repeat1] = STATE(406),
        [anon_sym_COMMA] = ACTIONS(1280),
        [anon_sym_LPAREN] = ACTIONS(195),
        [anon_sym_PLUS] = ACTIONS(197),
        [anon_sym_LBRACK] = ACTIONS(199),
        [anon_sym_RBRACK] = ACTIONS(1282),
        [sym_comment] = ACTIONS(67),
    },
    [426] = {
        [sym__expression] = STATE(54),
        [sym_binary_operator] = STATE(32),
        [sym_subscript] = STATE(32),
        [sym_call] = STATE(32),
        [anon_sym_DOT_DOT_DOT] = ACTIONS(201),
        [anon_sym_RBRACK] = ACTIONS(1258),
        [sym_number] = ACTIONS(111),
        [sym_identifier] = ACTIONS(111),
        [sym_comment] = ACTIONS(67),
    },
    [427] = {
        [ts_builtin_sym_end] = ACTIONS(207),
        [anon_sym_SEMI] = ACTIONS(207),
        [anon_sym_print] = ACTIONS(209),
        [anon_sym_COMMA] = ACTIONS(207),
        [anon_sym_return] = ACTIONS(209),
        [anon_sym_del] = ACTIONS(209),
        [sym_pass_statement] = ACTIONS(209),
        [sym_break_statement] = ACTIONS(209),
        [sym_continue_statement] = ACTIONS(209),
        [anon_sym_if] = ACTIONS(209),
        [anon_sym_COLON] = ACTIONS(207),
        [anon_sym_elif] = ACTIONS(209),
        [anon_sym_else] = ACTIONS(209),
        [anon_sym_for] = ACTIONS(209),
        [anon_sym_in] = ACTIONS(209),
        [anon_sym_while] = ACTIONS(209),
        [anon_sym_try] = ACTIONS(209),
        [anon_sym_except] = ACTIONS(209),
        [anon_sym_as] = ACTIONS(209),
        [anon_sym_finally] = ACTIONS(209),
        [anon_sym_with] = ACTIONS(209),
        [anon_sym_def] = ACTIONS(209),
        [anon_sym_LPAREN] = ACTIONS(207),
        [anon_sym_RPAREN] = ACTIONS(207),
        [anon_sym_class] = ACTIONS(209),
        [anon_sym_AT] = ACTIONS(207),
        [anon_sym_PLUS] = ACTIONS(207),
        [anon_sym_LBRACK] = ACTIONS(207),
        [anon_sym_RBRACK] = ACTIONS(207),
        [sym_number] = ACTIONS(209),
        [sym_identifier] = ACTIONS(211),
        [sym_comment] = ACTIONS(67),
        [sym__newline] = ACTIONS(207),
        [sym__dedent] = ACTIONS(207),
    },
    [428] = {
        [ts_builtin_sym_end] = ACTIONS(245),
        [anon_sym_SEMI] = ACTIONS(245),
        [anon_sym_print] = ACTIONS(271),
        [anon_sym_return] = ACTIONS(271),
        [anon_sym_del] = ACTIONS(271),
        [sym_pass_statement] = ACTIONS(271),
        [sym_break_statement] = ACTIONS(271),
        [sym_continue_statement] = ACTIONS(271),
        [anon_sym_if] = ACTIONS(271),
        [anon_sym_for] = ACTIONS(271),
        [anon_sym_while] = ACTIONS(271),
        [anon_sym_try] = ACTIONS(271),
        [anon_sym_with] = ACTIONS(271),
        [anon_sym_def] = ACTIONS(271),
        [anon_sym_LPAREN] = ACTIONS(1173),
        [anon_sym_class] = ACTIONS(271),
        [anon_sym_AT] = ACTIONS(245),
        [anon_sym_PLUS] = ACTIONS(1284),
        [anon_sym_LBRACK] = ACTIONS(1189),
        [sym_number] = ACTIONS(271),
        [sym_identifier] = ACTIONS(273),
        [sym_comment] = ACTIONS(67),
        [sym__newline] = ACTIONS(245),
        [sym__dedent] = ACTIONS(245),
    },
    [429] = {
        [aux_sym_call_repeat1] = STATE(407),
        [anon_sym_COMMA] = ACTIONS(1287),
        [anon_sym_LPAREN] = ACTIONS(195),
        [anon_sym_RPAREN] = ACTIONS(1289),
        [anon_sym_PLUS] = ACTIONS(197),
        [anon_sym_LBRACK] = ACTIONS(199),
        [sym_comment] = ACTIONS(67),
    },
    [430] = {
        [aux_sym_call_repeat1] = STATE(407),
        [anon_sym_COMMA] = ACTIONS(1287),
        [anon_sym_RPAREN] = ACTIONS(1289),
        [sym_comment] = ACTIONS(67),
    },
    [431] = {
        [sym__expression] = STATE(67),
        [sym_binary_operator] = STATE(32),
        [sym_subscript] = STATE(32),
        [sym_call] = STATE(32),
        [sym_keyword_argument] = STATE(68),
        [anon_sym_RPAREN] = ACTIONS(1262),
        [sym_number] = ACTIONS(111),
        [sym_identifier] = ACTIONS(187),
        [sym_comment] = ACTIONS(67),
    },
    [432] = {
        [ts_builtin_sym_end] = ACTIONS(255),
        [anon_sym_SEMI] = ACTIONS(255),
        [anon_sym_print] = ACTIONS(281),
        [anon_sym_COMMA] = ACTIONS(255),
        [anon_sym_return] = ACTIONS(281),
        [anon_sym_del] = ACTIONS(281),
        [sym_pass_statement] = ACTIONS(281),
        [sym_break_statement] = ACTIONS(281),
        [sym_continue_statement] = ACTIONS(281),
        [anon_sym_if] = ACTIONS(281),
        [anon_sym_COLON] = ACTIONS(255),
        [anon_sym_elif] = ACTIONS(281),
        [anon_sym_else] = ACTIONS(281),
        [anon_sym_for] = ACTIONS(281),
        [anon_sym_in] = ACTIONS(281),
        [anon_sym_while] = ACTIONS(281),
        [anon_sym_try] = ACTIONS(281),
        [anon_sym_except] = ACTIONS(281),
        [anon_sym_as] = ACTIONS(281),
        [anon_sym_finally] = ACTIONS(281),
        [anon_sym_with] = ACTIONS(281),
        [anon_sym_def] = ACTIONS(281),
        [anon_sym_LPAREN] = ACTIONS(255),
        [anon_sym_RPAREN] = ACTIONS(255),
        [anon_sym_class] = ACTIONS(281),
        [anon_sym_AT] = ACTIONS(255),
        [anon_sym_PLUS] = ACTIONS(255),
        [anon_sym_LBRACK] = ACTIONS(255),
        [anon_sym_RBRACK] = ACTIONS(255),
        [sym_number] = ACTIONS(281),
        [sym_identifier] = ACTIONS(283),
        [sym_comment] = ACTIONS(67),
        [sym__newline] = ACTIONS(255),
        [sym__dedent] = ACTIONS(255),
    },
    [433] = {
        [ts_builtin_sym_end] = ACTIONS(393),
        [anon_sym_SEMI] = ACTIONS(393),
        [anon_sym_print] = ACTIONS(395),
        [anon_sym_return] = ACTIONS(395),
        [anon_sym_del] = ACTIONS(395),
        [sym_pass_statement] = ACTIONS(395),
        [sym_break_statement] = ACTIONS(395),
        [sym_continue_statement] = ACTIONS(395),
        [anon_sym_if] = ACTIONS(395),
        [anon_sym_elif] = ACTIONS(395),
        [anon_sym_else] = ACTIONS(395),
        [anon_sym_for] = ACTIONS(395),
        [anon_sym_while] = ACTIONS(395),
        [anon_sym_try] = ACTIONS(395),
        [anon_sym_except] = ACTIONS(395),
        [anon_sym_finally] = ACTIONS(395),
        [anon_sym_with] = ACTIONS(395),
        [anon_sym_def] = ACTIONS(395),
        [anon_sym_class] = ACTIONS(395),
        [anon_sym_AT] = ACTIONS(393),
        [sym_number] = ACTIONS(395),
        [sym_identifier] = ACTIONS(397),
        [sym_comment] = ACTIONS(67),
        [sym__newline] = ACTIONS(393),
        [sym__dedent] = ACTIONS(393),
    },
    [434] = {
        [sym__statement] = STATE(127),
        [sym__simple_statement] = STATE(120),
        [sym_print_statement] = STATE(5),
        [sym_expression_statement] = STATE(5),
        [sym_return_statement] = STATE(5),
        [sym_delete_statement] = STATE(5),
        [sym__compound_statement] = STATE(121),
        [sym_if_statement] = STATE(122),
        [sym_for_statement] = STATE(122),
        [sym_while_statement] = STATE(122),
        [sym_try_statement] = STATE(122),
        [sym_with_statement] = STATE(122),
        [sym_function_definition] = STATE(122),
        [sym_class_definition] = STATE(122),
        [sym_decorated_definition] = STATE(122),
        [sym_decorator] = STATE(20),
        [sym__expression] = STATE(21),
        [sym_binary_operator] = STATE(14),
        [sym_subscript] = STATE(14),
        [sym_call] = STATE(14),
        [aux_sym_decorated_definition_repeat1] = STATE(124),
        [anon_sym_print] = ACTIONS(77),
        [anon_sym_return] = ACTIONS(79),
        [anon_sym_del] = ACTIONS(81),
        [sym_pass_statement] = ACTIONS(83),
        [sym_break_statement] = ACTIONS(83),
        [sym_continue_statement] = ACTIONS(83),
        [anon_sym_if] = ACTIONS(359),
        [anon_sym_for] = ACTIONS(361),
        [anon_sym_while] = ACTIONS(363),
        [anon_sym_try] = ACTIONS(365),
        [anon_sym_with] = ACTIONS(367),
        [anon_sym_def] = ACTIONS(369),
        [anon_sym_class] = ACTIONS(371),
        [anon_sym_AT] = ACTIONS(99),
        [sym_number] = ACTIONS(101),
        [sym_identifier] = ACTIONS(103),
        [sym_comment] = ACTIONS(67),
        [sym__dedent] = ACTIONS(1226),
    },
    [435] = {
        [ts_builtin_sym_end] = ACTIONS(407),
        [anon_sym_SEMI] = ACTIONS(407),
        [anon_sym_print] = ACTIONS(409),
        [anon_sym_return] = ACTIONS(409),
        [anon_sym_del] = ACTIONS(409),
        [sym_pass_statement] = ACTIONS(409),
        [sym_break_statement] = ACTIONS(409),
        [sym_continue_statement] = ACTIONS(409),
        [anon_sym_if] = ACTIONS(409),
        [anon_sym_elif] = ACTIONS(409),
        [anon_sym_else] = ACTIONS(409),
        [anon_sym_for] = ACTIONS(409),
        [anon_sym_while] = ACTIONS(409),
        [anon_sym_try] = ACTIONS(409),
        [anon_sym_except] = ACTIONS(409),
        [anon_sym_finally] = ACTIONS(409),
        [anon_sym_with] = ACTIONS(409),
        [anon_sym_def] = ACTIONS(409),
        [anon_sym_class] = ACTIONS(409),
        [anon_sym_AT] = ACTIONS(407),
        [sym_number] = ACTIONS(409),
        [sym_identifier] = ACTIONS(411),
        [sym_comment] = ACTIONS(67),
        [sym__newline] = ACTIONS(407),
        [sym__dedent] = ACTIONS(407),
    },
    [436] = {
        [ts_builtin_sym_end] = ACTIONS(469),
        [anon_sym_SEMI] = ACTIONS(469),
        [anon_sym_print] = ACTIONS(467),
        [anon_sym_return] = ACTIONS(467),
        [anon_sym_del] = ACTIONS(467),
        [sym_pass_statement] = ACTIONS(467),
        [sym_break_statement] = ACTIONS(467),
        [sym_continue_statement] = ACTIONS(467),
        [anon_sym_if] = ACTIONS(467),
        [anon_sym_elif] = ACTIONS(467),
        [anon_sym_else] = ACTIONS(467),
        [anon_sym_for] = ACTIONS(467),
        [anon_sym_while] = ACTIONS(467),
        [anon_sym_try] = ACTIONS(467),
        [anon_sym_except] = ACTIONS(467),
        [anon_sym_finally] = ACTIONS(467),
        [anon_sym_with] = ACTIONS(467),
        [anon_sym_def] = ACTIONS(467),
        [anon_sym_class] = ACTIONS(467),
        [anon_sym_AT] = ACTIONS(469),
        [sym_number] = ACTIONS(467),
        [sym_identifier] = ACTIONS(471),
        [sym_comment] = ACTIONS(67),
        [sym__newline] = ACTIONS(469),
        [sym__dedent] = ACTIONS(469),
    },
    [437] = {
        [aux_sym_print_statement_repeat1] = STATE(440),
        [ts_builtin_sym_end] = ACTIONS(353),
        [anon_sym_SEMI] = ACTIONS(353),
        [anon_sym_print] = ACTIONS(473),
        [anon_sym_COMMA] = ACTIONS(1291),
        [anon_sym_return] = ACTIONS(473),
        [anon_sym_del] = ACTIONS(473),
        [sym_pass_statement] = ACTIONS(473),
        [sym_break_statement] = ACTIONS(473),
        [sym_continue_statement] = ACTIONS(473),
        [anon_sym_if] = ACTIONS(473),
        [anon_sym_for] = ACTIONS(473),
        [anon_sym_while] = ACTIONS(473),
        [anon_sym_try] = ACTIONS(473),
        [anon_sym_with] = ACTIONS(473),
        [anon_sym_def] = ACTIONS(473),
        [anon_sym_LPAREN] = ACTIONS(1274),
        [anon_sym_class] = ACTIONS(473),
        [anon_sym_AT] = ACTIONS(353),
        [anon_sym_PLUS] = ACTIONS(1293),
        [anon_sym_LBRACK] = ACTIONS(1278),
        [sym_number] = ACTIONS(473),
        [sym_identifier] = ACTIONS(477),
        [sym_comment] = ACTIONS(67),
        [sym__newline] = ACTIONS(353),
        [sym__dedent] = ACTIONS(353),
    },
    [438] = {
        [sym__expression] = STATE(444),
        [sym_binary_operator] = STATE(376),
        [sym_subscript] = STATE(376),
        [sym_call] = STATE(376),
        [sym_number] = ACTIONS(819),
        [sym_identifier] = ACTIONS(819),
        [sym_comment] = ACTIONS(67),
    },
    [439] = {
        [sym__expression] = STATE(443),
        [sym_binary_operator] = STATE(376),
        [sym_subscript] = STATE(376),
        [sym_call] = STATE(376),
        [sym_number] = ACTIONS(819),
        [sym_identifier] = ACTIONS(819),
        [sym_comment] = ACTIONS(67),
    },
    [440] = {
        [ts_builtin_sym_end] = ACTIONS(355),
        [anon_sym_SEMI] = ACTIONS(355),
        [anon_sym_print] = ACTIONS(479),
        [anon_sym_COMMA] = ACTIONS(1295),
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
        [anon_sym_AT] = ACTIONS(355),
        [sym_number] = ACTIONS(479),
        [sym_identifier] = ACTIONS(483),
        [sym_comment] = ACTIONS(67),
        [sym__newline] = ACTIONS(355),
        [sym__dedent] = ACTIONS(355),
    },
    [441] = {
        [sym__expression] = STATE(442),
        [sym_binary_operator] = STATE(376),
        [sym_subscript] = STATE(376),
        [sym_call] = STATE(376),
        [sym_number] = ACTIONS(819),
        [sym_identifier] = ACTIONS(819),
        [sym_comment] = ACTIONS(67),
    },
    [442] = {
        [ts_builtin_sym_end] = ACTIONS(329),
        [anon_sym_SEMI] = ACTIONS(329),
        [anon_sym_print] = ACTIONS(485),
        [anon_sym_COMMA] = ACTIONS(329),
        [anon_sym_return] = ACTIONS(485),
        [anon_sym_del] = ACTIONS(485),
        [sym_pass_statement] = ACTIONS(485),
        [sym_break_statement] = ACTIONS(485),
        [sym_continue_statement] = ACTIONS(485),
        [anon_sym_if] = ACTIONS(485),
        [anon_sym_for] = ACTIONS(485),
        [anon_sym_while] = ACTIONS(485),
        [anon_sym_try] = ACTIONS(485),
        [anon_sym_with] = ACTIONS(485),
        [anon_sym_def] = ACTIONS(485),
        [anon_sym_LPAREN] = ACTIONS(1274),
        [anon_sym_class] = ACTIONS(485),
        [anon_sym_AT] = ACTIONS(329),
        [anon_sym_PLUS] = ACTIONS(1293),
        [anon_sym_LBRACK] = ACTIONS(1278),
        [sym_number] = ACTIONS(485),
        [sym_identifier] = ACTIONS(487),
        [sym_comment] = ACTIONS(67),
        [sym__newline] = ACTIONS(329),
        [sym__dedent] = ACTIONS(329),
    },
    [443] = {
        [ts_builtin_sym_end] = ACTIONS(245),
        [anon_sym_SEMI] = ACTIONS(245),
        [anon_sym_print] = ACTIONS(271),
        [anon_sym_COMMA] = ACTIONS(245),
        [anon_sym_return] = ACTIONS(271),
        [anon_sym_del] = ACTIONS(271),
        [sym_pass_statement] = ACTIONS(271),
        [sym_break_statement] = ACTIONS(271),
        [sym_continue_statement] = ACTIONS(271),
        [anon_sym_if] = ACTIONS(271),
        [anon_sym_for] = ACTIONS(271),
        [anon_sym_while] = ACTIONS(271),
        [anon_sym_try] = ACTIONS(271),
        [anon_sym_with] = ACTIONS(271),
        [anon_sym_def] = ACTIONS(271),
        [anon_sym_LPAREN] = ACTIONS(1173),
        [anon_sym_class] = ACTIONS(271),
        [anon_sym_AT] = ACTIONS(245),
        [anon_sym_PLUS] = ACTIONS(1297),
        [anon_sym_LBRACK] = ACTIONS(1189),
        [sym_number] = ACTIONS(271),
        [sym_identifier] = ACTIONS(273),
        [sym_comment] = ACTIONS(67),
        [sym__newline] = ACTIONS(245),
        [sym__dedent] = ACTIONS(245),
    },
    [444] = {
        [ts_builtin_sym_end] = ACTIONS(331),
        [anon_sym_SEMI] = ACTIONS(331),
        [anon_sym_print] = ACTIONS(489),
        [anon_sym_COMMA] = ACTIONS(331),
        [anon_sym_return] = ACTIONS(489),
        [anon_sym_del] = ACTIONS(489),
        [sym_pass_statement] = ACTIONS(489),
        [sym_break_statement] = ACTIONS(489),
        [sym_continue_statement] = ACTIONS(489),
        [anon_sym_if] = ACTIONS(489),
        [anon_sym_for] = ACTIONS(489),
        [anon_sym_while] = ACTIONS(489),
        [anon_sym_try] = ACTIONS(489),
        [anon_sym_with] = ACTIONS(489),
        [anon_sym_def] = ACTIONS(489),
        [anon_sym_LPAREN] = ACTIONS(1274),
        [anon_sym_class] = ACTIONS(489),
        [anon_sym_AT] = ACTIONS(331),
        [anon_sym_PLUS] = ACTIONS(1293),
        [anon_sym_LBRACK] = ACTIONS(1278),
        [sym_number] = ACTIONS(489),
        [sym_identifier] = ACTIONS(491),
        [sym_comment] = ACTIONS(67),
        [sym__newline] = ACTIONS(331),
        [sym__dedent] = ACTIONS(331),
    },
    [445] = {
        [ts_builtin_sym_end] = ACTIONS(495),
        [anon_sym_SEMI] = ACTIONS(495),
        [anon_sym_print] = ACTIONS(493),
        [anon_sym_return] = ACTIONS(493),
        [anon_sym_del] = ACTIONS(493),
        [sym_pass_statement] = ACTIONS(493),
        [sym_break_statement] = ACTIONS(493),
        [sym_continue_statement] = ACTIONS(493),
        [anon_sym_if] = ACTIONS(493),
        [anon_sym_elif] = ACTIONS(493),
        [anon_sym_else] = ACTIONS(493),
        [anon_sym_for] = ACTIONS(493),
        [anon_sym_while] = ACTIONS(493),
        [anon_sym_try] = ACTIONS(493),
        [anon_sym_except] = ACTIONS(493),
        [anon_sym_finally] = ACTIONS(493),
        [anon_sym_with] = ACTIONS(493),
        [anon_sym_def] = ACTIONS(493),
        [anon_sym_class] = ACTIONS(493),
        [anon_sym_AT] = ACTIONS(495),
        [sym_number] = ACTIONS(493),
        [sym_identifier] = ACTIONS(497),
        [sym_comment] = ACTIONS(67),
        [sym__newline] = ACTIONS(495),
        [sym__dedent] = ACTIONS(495),
    },
    [446] = {
        [aux_sym_print_statement_repeat1] = STATE(447),
        [ts_builtin_sym_end] = ACTIONS(501),
        [anon_sym_SEMI] = ACTIONS(501),
        [anon_sym_print] = ACTIONS(499),
        [anon_sym_COMMA] = ACTIONS(1291),
        [anon_sym_return] = ACTIONS(499),
        [anon_sym_del] = ACTIONS(499),
        [sym_pass_statement] = ACTIONS(499),
        [sym_break_statement] = ACTIONS(499),
        [sym_continue_statement] = ACTIONS(499),
        [anon_sym_if] = ACTIONS(499),
        [anon_sym_for] = ACTIONS(499),
        [anon_sym_while] = ACTIONS(499),
        [anon_sym_try] = ACTIONS(499),
        [anon_sym_with] = ACTIONS(499),
        [anon_sym_def] = ACTIONS(499),
        [anon_sym_LPAREN] = ACTIONS(1274),
        [anon_sym_class] = ACTIONS(499),
        [anon_sym_AT] = ACTIONS(501),
        [anon_sym_PLUS] = ACTIONS(1293),
        [anon_sym_LBRACK] = ACTIONS(1278),
        [sym_number] = ACTIONS(499),
        [sym_identifier] = ACTIONS(503),
        [sym_comment] = ACTIONS(67),
        [sym__newline] = ACTIONS(501),
        [sym__dedent] = ACTIONS(501),
    },
    [447] = {
        [ts_builtin_sym_end] = ACTIONS(507),
        [anon_sym_SEMI] = ACTIONS(507),
        [anon_sym_print] = ACTIONS(505),
        [anon_sym_COMMA] = ACTIONS(1295),
        [anon_sym_return] = ACTIONS(505),
        [anon_sym_del] = ACTIONS(505),
        [sym_pass_statement] = ACTIONS(505),
        [sym_break_statement] = ACTIONS(505),
        [sym_continue_statement] = ACTIONS(505),
        [anon_sym_if] = ACTIONS(505),
        [anon_sym_for] = ACTIONS(505),
        [anon_sym_while] = ACTIONS(505),
        [anon_sym_try] = ACTIONS(505),
        [anon_sym_with] = ACTIONS(505),
        [anon_sym_def] = ACTIONS(505),
        [anon_sym_class] = ACTIONS(505),
        [anon_sym_AT] = ACTIONS(507),
        [sym_number] = ACTIONS(505),
        [sym_identifier] = ACTIONS(509),
        [sym_comment] = ACTIONS(67),
        [sym__newline] = ACTIONS(507),
        [sym__dedent] = ACTIONS(507),
    },
    [448] = {
        [sym_finally_clause] = STATE(451),
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
        [anon_sym_finally] = ACTIONS(997),
        [anon_sym_with] = ACTIONS(655),
        [anon_sym_def] = ACTIONS(655),
        [anon_sym_class] = ACTIONS(655),
        [anon_sym_AT] = ACTIONS(657),
        [sym_number] = ACTIONS(655),
        [sym_identifier] = ACTIONS(659),
        [sym_comment] = ACTIONS(67),
        [sym__newline] = ACTIONS(657),
        [sym__dedent] = ACTIONS(657),
    },
    [449] = {
        [ts_builtin_sym_end] = ACTIONS(663),
        [anon_sym_SEMI] = ACTIONS(663),
        [anon_sym_print] = ACTIONS(661),
        [anon_sym_return] = ACTIONS(661),
        [anon_sym_del] = ACTIONS(661),
        [sym_pass_statement] = ACTIONS(661),
        [sym_break_statement] = ACTIONS(661),
        [sym_continue_statement] = ACTIONS(661),
        [anon_sym_if] = ACTIONS(661),
        [anon_sym_else] = ACTIONS(661),
        [anon_sym_for] = ACTIONS(661),
        [anon_sym_while] = ACTIONS(661),
        [anon_sym_try] = ACTIONS(661),
        [anon_sym_except] = ACTIONS(661),
        [anon_sym_finally] = ACTIONS(661),
        [anon_sym_with] = ACTIONS(661),
        [anon_sym_def] = ACTIONS(661),
        [anon_sym_class] = ACTIONS(661),
        [anon_sym_AT] = ACTIONS(663),
        [sym_number] = ACTIONS(661),
        [sym_identifier] = ACTIONS(665),
        [sym_comment] = ACTIONS(67),
        [sym__newline] = ACTIONS(663),
        [sym__dedent] = ACTIONS(663),
    },
    [450] = {
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
        [sym_number] = ACTIONS(655),
        [sym_identifier] = ACTIONS(659),
        [sym_comment] = ACTIONS(67),
        [sym__newline] = ACTIONS(657),
        [sym__dedent] = ACTIONS(657),
    },
    [451] = {
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
        [sym_number] = ACTIONS(667),
        [sym_identifier] = ACTIONS(671),
        [sym_comment] = ACTIONS(67),
        [sym__newline] = ACTIONS(669),
        [sym__dedent] = ACTIONS(669),
    },
    [452] = {
        [anon_sym_COLON] = ACTIONS(1300),
        [sym_comment] = ACTIONS(67),
    },
    [453] = {
        [ts_builtin_sym_end] = ACTIONS(759),
        [anon_sym_SEMI] = ACTIONS(759),
        [anon_sym_print] = ACTIONS(757),
        [anon_sym_return] = ACTIONS(757),
        [anon_sym_del] = ACTIONS(757),
        [sym_pass_statement] = ACTIONS(757),
        [sym_break_statement] = ACTIONS(757),
        [sym_continue_statement] = ACTIONS(757),
        [anon_sym_if] = ACTIONS(757),
        [anon_sym_elif] = ACTIONS(757),
        [anon_sym_else] = ACTIONS(757),
        [anon_sym_for] = ACTIONS(757),
        [anon_sym_while] = ACTIONS(757),
        [anon_sym_try] = ACTIONS(757),
        [anon_sym_with] = ACTIONS(757),
        [anon_sym_def] = ACTIONS(757),
        [anon_sym_class] = ACTIONS(757),
        [anon_sym_AT] = ACTIONS(759),
        [sym_number] = ACTIONS(757),
        [sym_identifier] = ACTIONS(761),
        [sym_comment] = ACTIONS(67),
        [sym__newline] = ACTIONS(759),
        [sym__dedent] = ACTIONS(759),
    },
    [454] = {
        [ts_builtin_sym_end] = ACTIONS(765),
        [anon_sym_SEMI] = ACTIONS(765),
        [anon_sym_print] = ACTIONS(763),
        [anon_sym_return] = ACTIONS(763),
        [anon_sym_del] = ACTIONS(763),
        [sym_pass_statement] = ACTIONS(763),
        [sym_break_statement] = ACTIONS(763),
        [sym_continue_statement] = ACTIONS(763),
        [anon_sym_if] = ACTIONS(763),
        [anon_sym_for] = ACTIONS(763),
        [anon_sym_while] = ACTIONS(763),
        [anon_sym_try] = ACTIONS(763),
        [anon_sym_with] = ACTIONS(763),
        [anon_sym_def] = ACTIONS(763),
        [anon_sym_class] = ACTIONS(763),
        [anon_sym_AT] = ACTIONS(765),
        [sym_number] = ACTIONS(763),
        [sym_identifier] = ACTIONS(767),
        [sym_comment] = ACTIONS(67),
        [sym__newline] = ACTIONS(765),
        [sym__dedent] = ACTIONS(765),
    },
    [455] = {
        [sym__simple_statement] = STATE(419),
        [sym_print_statement] = STATE(352),
        [sym_expression_statement] = STATE(352),
        [sym_return_statement] = STATE(352),
        [sym_delete_statement] = STATE(352),
        [sym__suite] = STATE(456),
        [sym__expression] = STATE(421),
        [sym_binary_operator] = STATE(376),
        [sym_subscript] = STATE(376),
        [sym_call] = STATE(376),
        [anon_sym_print] = ACTIONS(1268),
        [anon_sym_return] = ACTIONS(1270),
        [anon_sym_del] = ACTIONS(1272),
        [sym_pass_statement] = ACTIONS(841),
        [sym_break_statement] = ACTIONS(841),
        [sym_continue_statement] = ACTIONS(841),
        [sym_number] = ACTIONS(819),
        [sym_identifier] = ACTIONS(843),
        [sym_comment] = ACTIONS(67),
        [sym__indent] = ACTIONS(845),
    },
    [456] = {
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
        [anon_sym_finally] = ACTIONS(673),
        [anon_sym_with] = ACTIONS(673),
        [anon_sym_def] = ACTIONS(673),
        [anon_sym_class] = ACTIONS(673),
        [anon_sym_AT] = ACTIONS(675),
        [sym_number] = ACTIONS(673),
        [sym_identifier] = ACTIONS(677),
        [sym_comment] = ACTIONS(67),
        [sym__newline] = ACTIONS(675),
        [sym__dedent] = ACTIONS(675),
    },
    [457] = {
        [sym__expression] = STATE(458),
        [sym_binary_operator] = STATE(376),
        [sym_subscript] = STATE(376),
        [sym_call] = STATE(376),
        [sym_number] = ACTIONS(819),
        [sym_identifier] = ACTIONS(819),
        [sym_comment] = ACTIONS(67),
    },
    [458] = {
        [ts_builtin_sym_end] = ACTIONS(329),
        [anon_sym_SEMI] = ACTIONS(329),
        [anon_sym_print] = ACTIONS(485),
        [anon_sym_COMMA] = ACTIONS(329),
        [anon_sym_return] = ACTIONS(485),
        [anon_sym_del] = ACTIONS(485),
        [sym_pass_statement] = ACTIONS(485),
        [sym_break_statement] = ACTIONS(485),
        [sym_continue_statement] = ACTIONS(485),
        [anon_sym_if] = ACTIONS(485),
        [anon_sym_COLON] = ACTIONS(329),
        [anon_sym_elif] = ACTIONS(485),
        [anon_sym_else] = ACTIONS(485),
        [anon_sym_for] = ACTIONS(485),
        [anon_sym_in] = ACTIONS(485),
        [anon_sym_while] = ACTIONS(485),
        [anon_sym_try] = ACTIONS(485),
        [anon_sym_except] = ACTIONS(485),
        [anon_sym_finally] = ACTIONS(485),
        [anon_sym_with] = ACTIONS(485),
        [anon_sym_def] = ACTIONS(485),
        [anon_sym_LPAREN] = ACTIONS(1274),
        [anon_sym_RPAREN] = ACTIONS(329),
        [anon_sym_class] = ACTIONS(485),
        [anon_sym_AT] = ACTIONS(329),
        [anon_sym_PLUS] = ACTIONS(1302),
        [anon_sym_LBRACK] = ACTIONS(1278),
        [sym_number] = ACTIONS(485),
        [sym_identifier] = ACTIONS(487),
        [sym_comment] = ACTIONS(67),
        [sym__newline] = ACTIONS(329),
        [sym__dedent] = ACTIONS(329),
    },
    [459] = {
        [sym__expression] = STATE(460),
        [sym_binary_operator] = STATE(376),
        [sym_subscript] = STATE(376),
        [sym_call] = STATE(376),
        [sym_number] = ACTIONS(819),
        [sym_identifier] = ACTIONS(819),
        [sym_comment] = ACTIONS(67),
    },
    [460] = {
        [ts_builtin_sym_end] = ACTIONS(245),
        [anon_sym_SEMI] = ACTIONS(245),
        [anon_sym_print] = ACTIONS(271),
        [anon_sym_COMMA] = ACTIONS(245),
        [anon_sym_return] = ACTIONS(271),
        [anon_sym_del] = ACTIONS(271),
        [sym_pass_statement] = ACTIONS(271),
        [sym_break_statement] = ACTIONS(271),
        [sym_continue_statement] = ACTIONS(271),
        [anon_sym_if] = ACTIONS(271),
        [anon_sym_COLON] = ACTIONS(245),
        [anon_sym_elif] = ACTIONS(271),
        [anon_sym_else] = ACTIONS(271),
        [anon_sym_for] = ACTIONS(271),
        [anon_sym_in] = ACTIONS(271),
        [anon_sym_while] = ACTIONS(271),
        [anon_sym_try] = ACTIONS(271),
        [anon_sym_except] = ACTIONS(271),
        [anon_sym_finally] = ACTIONS(271),
        [anon_sym_with] = ACTIONS(271),
        [anon_sym_def] = ACTIONS(271),
        [anon_sym_LPAREN] = ACTIONS(1173),
        [anon_sym_RPAREN] = ACTIONS(245),
        [anon_sym_class] = ACTIONS(271),
        [anon_sym_AT] = ACTIONS(245),
        [anon_sym_PLUS] = ACTIONS(1304),
        [anon_sym_LBRACK] = ACTIONS(1189),
        [sym_number] = ACTIONS(271),
        [sym_identifier] = ACTIONS(273),
        [sym_comment] = ACTIONS(67),
        [sym__newline] = ACTIONS(245),
        [sym__dedent] = ACTIONS(245),
    },
    [461] = {
        [ts_builtin_sym_end] = ACTIONS(181),
        [anon_sym_SEMI] = ACTIONS(181),
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
        [sym_number] = ACTIONS(183),
        [sym_identifier] = ACTIONS(185),
        [sym_comment] = ACTIONS(67),
        [sym__newline] = ACTIONS(181),
        [sym__dedent] = ACTIONS(181),
    },
    [462] = {
        [sym_comment] = ACTIONS(67),
        [sym__newline] = ACTIONS(1307),
    },
    [463] = {
        [ts_builtin_sym_end] = ACTIONS(297),
        [anon_sym_SEMI] = ACTIONS(297),
        [anon_sym_print] = ACTIONS(299),
        [anon_sym_return] = ACTIONS(299),
        [anon_sym_del] = ACTIONS(299),
        [sym_pass_statement] = ACTIONS(299),
        [sym_break_statement] = ACTIONS(299),
        [sym_continue_statement] = ACTIONS(299),
        [anon_sym_if] = ACTIONS(299),
        [anon_sym_for] = ACTIONS(299),
        [anon_sym_while] = ACTIONS(299),
        [anon_sym_try] = ACTIONS(299),
        [anon_sym_with] = ACTIONS(299),
        [anon_sym_def] = ACTIONS(299),
        [anon_sym_class] = ACTIONS(299),
        [anon_sym_AT] = ACTIONS(297),
        [sym_number] = ACTIONS(299),
        [sym_identifier] = ACTIONS(301),
        [sym_comment] = ACTIONS(67),
        [sym__newline] = ACTIONS(297),
        [sym__dedent] = ACTIONS(297),
    },
    [464] = {
        [sym__expression] = STATE(474),
        [sym_binary_operator] = STATE(376),
        [sym_subscript] = STATE(376),
        [sym_call] = STATE(376),
        [sym_keyword_argument] = STATE(68),
        [anon_sym_RPAREN] = ACTIONS(1262),
        [anon_sym_DOT_DOT_DOT] = ACTIONS(201),
        [anon_sym_RBRACK] = ACTIONS(1258),
        [sym_number] = ACTIONS(819),
        [sym_identifier] = ACTIONS(1309),
        [sym_comment] = ACTIONS(67),
    },
    [465] = {
        [sym__simple_statement] = STATE(419),
        [sym_print_statement] = STATE(352),
        [sym_expression_statement] = STATE(352),
        [sym_return_statement] = STATE(352),
        [sym_delete_statement] = STATE(352),
        [sym__suite] = STATE(467),
        [sym__expression] = STATE(468),
        [sym_binary_operator] = STATE(376),
        [sym_subscript] = STATE(376),
        [sym_call] = STATE(376),
        [anon_sym_print] = ACTIONS(835),
        [anon_sym_return] = ACTIONS(837),
        [anon_sym_del] = ACTIONS(839),
        [sym_pass_statement] = ACTIONS(841),
        [sym_break_statement] = ACTIONS(841),
        [sym_continue_statement] = ACTIONS(841),
        [sym_number] = ACTIONS(819),
        [sym_identifier] = ACTIONS(843),
        [sym_comment] = ACTIONS(67),
        [sym__indent] = ACTIONS(845),
    },
    [466] = {
        [ts_builtin_sym_end] = ACTIONS(255),
        [anon_sym_SEMI] = ACTIONS(255),
        [anon_sym_print] = ACTIONS(281),
        [anon_sym_COMMA] = ACTIONS(255),
        [anon_sym_return] = ACTIONS(281),
        [anon_sym_del] = ACTIONS(281),
        [sym_pass_statement] = ACTIONS(281),
        [sym_break_statement] = ACTIONS(281),
        [sym_continue_statement] = ACTIONS(281),
        [anon_sym_if] = ACTIONS(281),
        [anon_sym_COLON] = ACTIONS(255),
        [anon_sym_elif] = ACTIONS(281),
        [anon_sym_else] = ACTIONS(281),
        [anon_sym_for] = ACTIONS(281),
        [anon_sym_in] = ACTIONS(281),
        [anon_sym_while] = ACTIONS(281),
        [anon_sym_try] = ACTIONS(281),
        [anon_sym_except] = ACTIONS(281),
        [anon_sym_as] = ACTIONS(281),
        [anon_sym_finally] = ACTIONS(281),
        [anon_sym_with] = ACTIONS(281),
        [anon_sym_def] = ACTIONS(281),
        [anon_sym_LPAREN] = ACTIONS(255),
        [anon_sym_RPAREN] = ACTIONS(255),
        [anon_sym_class] = ACTIONS(281),
        [anon_sym_AT] = ACTIONS(255),
        [anon_sym_PLUS] = ACTIONS(255),
        [anon_sym_LBRACK] = ACTIONS(255),
        [anon_sym_RBRACK] = ACTIONS(255),
        [sym_number] = ACTIONS(281),
        [sym_identifier] = ACTIONS(283),
        [sym_comment] = ACTIONS(67),
        [sym__newline] = ACTIONS(1311),
        [sym__dedent] = ACTIONS(255),
    },
    [467] = {
        [sym_elif_clause] = STATE(471),
        [sym_else_clause] = STATE(472),
        [aux_sym_if_statement_repeat1] = STATE(402),
        [ts_builtin_sym_end] = ACTIONS(1314),
        [anon_sym_SEMI] = ACTIONS(1314),
        [anon_sym_print] = ACTIONS(1320),
        [anon_sym_return] = ACTIONS(1320),
        [anon_sym_del] = ACTIONS(1320),
        [sym_pass_statement] = ACTIONS(1320),
        [sym_break_statement] = ACTIONS(1320),
        [sym_continue_statement] = ACTIONS(1320),
        [anon_sym_if] = ACTIONS(1320),
        [anon_sym_elif] = ACTIONS(1084),
        [anon_sym_else] = ACTIONS(1087),
        [anon_sym_for] = ACTIONS(1320),
        [anon_sym_while] = ACTIONS(1320),
        [anon_sym_try] = ACTIONS(1320),
        [anon_sym_except] = ACTIONS(1326),
        [anon_sym_finally] = ACTIONS(1326),
        [anon_sym_with] = ACTIONS(1320),
        [anon_sym_def] = ACTIONS(1320),
        [anon_sym_class] = ACTIONS(1320),
        [anon_sym_AT] = ACTIONS(1314),
        [sym_number] = ACTIONS(1320),
        [sym_identifier] = ACTIONS(1329),
        [sym_comment] = ACTIONS(67),
        [sym__newline] = ACTIONS(1314),
        [sym__dedent] = ACTIONS(1314),
    },
    [468] = {
        [ts_builtin_sym_end] = ACTIONS(151),
        [anon_sym_SEMI] = ACTIONS(151),
        [anon_sym_print] = ACTIONS(153),
        [anon_sym_return] = ACTIONS(153),
        [anon_sym_del] = ACTIONS(153),
        [sym_pass_statement] = ACTIONS(153),
        [sym_break_statement] = ACTIONS(153),
        [sym_continue_statement] = ACTIONS(153),
        [anon_sym_if] = ACTIONS(153),
        [anon_sym_elif] = ACTIONS(153),
        [anon_sym_else] = ACTIONS(153),
        [anon_sym_for] = ACTIONS(153),
        [anon_sym_while] = ACTIONS(153),
        [anon_sym_try] = ACTIONS(153),
        [anon_sym_except] = ACTIONS(153),
        [anon_sym_finally] = ACTIONS(153),
        [anon_sym_with] = ACTIONS(153),
        [anon_sym_def] = ACTIONS(153),
        [anon_sym_LPAREN] = ACTIONS(1274),
        [anon_sym_class] = ACTIONS(153),
        [anon_sym_AT] = ACTIONS(151),
        [anon_sym_PLUS] = ACTIONS(1335),
        [anon_sym_LBRACK] = ACTIONS(1278),
        [sym_number] = ACTIONS(153),
        [sym_identifier] = ACTIONS(161),
        [sym_comment] = ACTIONS(67),
        [sym__newline] = ACTIONS(151),
        [sym__dedent] = ACTIONS(151),
    },
    [469] = {
        [sym__expression] = STATE(470),
        [sym_binary_operator] = STATE(376),
        [sym_subscript] = STATE(376),
        [sym_call] = STATE(376),
        [sym_number] = ACTIONS(819),
        [sym_identifier] = ACTIONS(819),
        [sym_comment] = ACTIONS(67),
    },
    [470] = {
        [ts_builtin_sym_end] = ACTIONS(245),
        [anon_sym_SEMI] = ACTIONS(245),
        [anon_sym_print] = ACTIONS(271),
        [anon_sym_return] = ACTIONS(271),
        [anon_sym_del] = ACTIONS(271),
        [sym_pass_statement] = ACTIONS(271),
        [sym_break_statement] = ACTIONS(271),
        [sym_continue_statement] = ACTIONS(271),
        [anon_sym_if] = ACTIONS(271),
        [anon_sym_elif] = ACTIONS(271),
        [anon_sym_else] = ACTIONS(271),
        [anon_sym_for] = ACTIONS(271),
        [anon_sym_while] = ACTIONS(271),
        [anon_sym_try] = ACTIONS(271),
        [anon_sym_except] = ACTIONS(271),
        [anon_sym_finally] = ACTIONS(271),
        [anon_sym_with] = ACTIONS(271),
        [anon_sym_def] = ACTIONS(271),
        [anon_sym_LPAREN] = ACTIONS(1173),
        [anon_sym_class] = ACTIONS(271),
        [anon_sym_AT] = ACTIONS(245),
        [anon_sym_PLUS] = ACTIONS(1337),
        [anon_sym_LBRACK] = ACTIONS(1189),
        [sym_number] = ACTIONS(271),
        [sym_identifier] = ACTIONS(273),
        [sym_comment] = ACTIONS(67),
        [sym__newline] = ACTIONS(245),
        [sym__dedent] = ACTIONS(245),
    },
    [471] = {
        [ts_builtin_sym_end] = ACTIONS(747),
        [anon_sym_SEMI] = ACTIONS(747),
        [anon_sym_print] = ACTIONS(745),
        [anon_sym_return] = ACTIONS(745),
        [anon_sym_del] = ACTIONS(745),
        [sym_pass_statement] = ACTIONS(745),
        [sym_break_statement] = ACTIONS(745),
        [sym_continue_statement] = ACTIONS(745),
        [anon_sym_if] = ACTIONS(745),
        [anon_sym_elif] = ACTIONS(745),
        [anon_sym_else] = ACTIONS(745),
        [anon_sym_for] = ACTIONS(745),
        [anon_sym_while] = ACTIONS(745),
        [anon_sym_try] = ACTIONS(745),
        [anon_sym_with] = ACTIONS(745),
        [anon_sym_def] = ACTIONS(745),
        [anon_sym_class] = ACTIONS(745),
        [anon_sym_AT] = ACTIONS(747),
        [sym_number] = ACTIONS(745),
        [sym_identifier] = ACTIONS(749),
        [sym_comment] = ACTIONS(67),
        [sym__newline] = ACTIONS(747),
        [sym__dedent] = ACTIONS(747),
    },
    [472] = {
        [ts_builtin_sym_end] = ACTIONS(1340),
        [anon_sym_SEMI] = ACTIONS(1340),
        [anon_sym_print] = ACTIONS(1343),
        [anon_sym_return] = ACTIONS(1343),
        [anon_sym_del] = ACTIONS(1343),
        [sym_pass_statement] = ACTIONS(1343),
        [sym_break_statement] = ACTIONS(1343),
        [sym_continue_statement] = ACTIONS(1343),
        [anon_sym_if] = ACTIONS(1343),
        [anon_sym_for] = ACTIONS(1343),
        [anon_sym_while] = ACTIONS(1343),
        [anon_sym_try] = ACTIONS(1343),
        [anon_sym_with] = ACTIONS(1343),
        [anon_sym_def] = ACTIONS(1343),
        [anon_sym_class] = ACTIONS(1343),
        [anon_sym_AT] = ACTIONS(1340),
        [sym_number] = ACTIONS(1343),
        [sym_identifier] = ACTIONS(1346),
        [sym_comment] = ACTIONS(67),
        [sym__newline] = ACTIONS(1340),
        [sym__dedent] = ACTIONS(1340),
    },
    [473] = {
        [ts_builtin_sym_end] = ACTIONS(121),
        [anon_sym_SEMI] = ACTIONS(121),
        [anon_sym_print] = ACTIONS(123),
        [anon_sym_COMMA] = ACTIONS(121),
        [anon_sym_return] = ACTIONS(123),
        [anon_sym_del] = ACTIONS(123),
        [sym_pass_statement] = ACTIONS(123),
        [sym_break_statement] = ACTIONS(123),
        [sym_continue_statement] = ACTIONS(123),
        [anon_sym_if] = ACTIONS(123),
        [anon_sym_COLON] = ACTIONS(121),
        [anon_sym_elif] = ACTIONS(123),
        [anon_sym_else] = ACTIONS(123),
        [anon_sym_for] = ACTIONS(123),
        [anon_sym_in] = ACTIONS(123),
        [anon_sym_while] = ACTIONS(123),
        [anon_sym_try] = ACTIONS(123),
        [anon_sym_except] = ACTIONS(123),
        [anon_sym_as] = ACTIONS(123),
        [anon_sym_finally] = ACTIONS(123),
        [anon_sym_with] = ACTIONS(123),
        [anon_sym_def] = ACTIONS(123),
        [anon_sym_LPAREN] = ACTIONS(121),
        [anon_sym_RPAREN] = ACTIONS(121),
        [anon_sym_EQ] = ACTIONS(247),
        [anon_sym_class] = ACTIONS(123),
        [anon_sym_AT] = ACTIONS(121),
        [anon_sym_PLUS] = ACTIONS(121),
        [anon_sym_LBRACK] = ACTIONS(121),
        [anon_sym_RBRACK] = ACTIONS(121),
        [sym_number] = ACTIONS(123),
        [sym_identifier] = ACTIONS(125),
        [sym_comment] = ACTIONS(67),
        [sym__newline] = ACTIONS(121),
        [sym__dedent] = ACTIONS(121),
    },
    [474] = {
        [ts_builtin_sym_end] = ACTIONS(331),
        [anon_sym_SEMI] = ACTIONS(331),
        [anon_sym_print] = ACTIONS(489),
        [anon_sym_COMMA] = ACTIONS(1349),
        [anon_sym_return] = ACTIONS(489),
        [anon_sym_del] = ACTIONS(489),
        [sym_pass_statement] = ACTIONS(489),
        [sym_break_statement] = ACTIONS(489),
        [sym_continue_statement] = ACTIONS(489),
        [anon_sym_if] = ACTIONS(489),
        [anon_sym_COLON] = ACTIONS(1353),
        [anon_sym_elif] = ACTIONS(489),
        [anon_sym_else] = ACTIONS(489),
        [anon_sym_for] = ACTIONS(489),
        [anon_sym_in] = ACTIONS(489),
        [anon_sym_while] = ACTIONS(489),
        [anon_sym_try] = ACTIONS(489),
        [anon_sym_except] = ACTIONS(489),
        [anon_sym_finally] = ACTIONS(489),
        [anon_sym_with] = ACTIONS(489),
        [anon_sym_def] = ACTIONS(489),
        [anon_sym_LPAREN] = ACTIONS(1274),
        [anon_sym_RPAREN] = ACTIONS(1356),
        [anon_sym_class] = ACTIONS(489),
        [anon_sym_AT] = ACTIONS(331),
        [anon_sym_PLUS] = ACTIONS(1359),
        [anon_sym_LBRACK] = ACTIONS(1278),
        [anon_sym_RBRACK] = ACTIONS(243),
        [sym_number] = ACTIONS(489),
        [sym_identifier] = ACTIONS(491),
        [sym_comment] = ACTIONS(67),
        [sym__newline] = ACTIONS(331),
        [sym__dedent] = ACTIONS(331),
    },
    [475] = {
        [sym__simple_statement] = STATE(419),
        [sym_print_statement] = STATE(352),
        [sym_expression_statement] = STATE(352),
        [sym_return_statement] = STATE(352),
        [sym_delete_statement] = STATE(352),
        [sym__suite] = STATE(481),
        [sym__expression] = STATE(482),
        [sym_binary_operator] = STATE(376),
        [sym_subscript] = STATE(376),
        [sym_call] = STATE(376),
        [anon_sym_print] = ACTIONS(1361),
        [anon_sym_return] = ACTIONS(1363),
        [anon_sym_del] = ACTIONS(1365),
        [sym_pass_statement] = ACTIONS(841),
        [sym_break_statement] = ACTIONS(841),
        [sym_continue_statement] = ACTIONS(841),
        [sym_number] = ACTIONS(819),
        [sym_identifier] = ACTIONS(843),
        [sym_comment] = ACTIONS(67),
        [sym__indent] = ACTIONS(845),
    },
    [476] = {
        [sym__expression] = STATE(477),
        [sym_binary_operator] = STATE(376),
        [sym_subscript] = STATE(376),
        [sym_call] = STATE(376),
        [sym_number] = ACTIONS(819),
        [sym_identifier] = ACTIONS(819),
        [sym_comment] = ACTIONS(67),
    },
    [477] = {
        [ts_builtin_sym_end] = ACTIONS(245),
        [anon_sym_SEMI] = ACTIONS(245),
        [anon_sym_print] = ACTIONS(271),
        [anon_sym_COMMA] = ACTIONS(245),
        [anon_sym_return] = ACTIONS(271),
        [anon_sym_del] = ACTIONS(271),
        [sym_pass_statement] = ACTIONS(271),
        [sym_break_statement] = ACTIONS(271),
        [sym_continue_statement] = ACTIONS(271),
        [anon_sym_if] = ACTIONS(271),
        [anon_sym_COLON] = ACTIONS(245),
        [anon_sym_elif] = ACTIONS(271),
        [anon_sym_else] = ACTIONS(271),
        [anon_sym_for] = ACTIONS(271),
        [anon_sym_in] = ACTIONS(271),
        [anon_sym_while] = ACTIONS(271),
        [anon_sym_try] = ACTIONS(271),
        [anon_sym_except] = ACTIONS(271),
        [anon_sym_finally] = ACTIONS(271),
        [anon_sym_with] = ACTIONS(271),
        [anon_sym_def] = ACTIONS(271),
        [anon_sym_LPAREN] = ACTIONS(1173),
        [anon_sym_RPAREN] = ACTIONS(245),
        [anon_sym_class] = ACTIONS(271),
        [anon_sym_AT] = ACTIONS(245),
        [anon_sym_PLUS] = ACTIONS(1367),
        [anon_sym_LBRACK] = ACTIONS(1189),
        [anon_sym_RBRACK] = ACTIONS(245),
        [sym_number] = ACTIONS(271),
        [sym_identifier] = ACTIONS(273),
        [sym_comment] = ACTIONS(67),
        [sym__newline] = ACTIONS(245),
        [sym__dedent] = ACTIONS(245),
    },
    [478] = {
        [sym__expression] = STATE(493),
        [sym_binary_operator] = STATE(376),
        [sym_subscript] = STATE(376),
        [sym_call] = STATE(376),
        [sym_number] = ACTIONS(819),
        [sym_identifier] = ACTIONS(819),
        [sym_comment] = ACTIONS(67),
    },
    [479] = {
        [sym_expression_list] = STATE(445),
        [sym__expression] = STATE(485),
        [sym_binary_operator] = STATE(376),
        [sym_subscript] = STATE(376),
        [sym_call] = STATE(376),
        [sym_number] = ACTIONS(819),
        [sym_identifier] = ACTIONS(819),
        [sym_comment] = ACTIONS(67),
    },
    [480] = {
        [sym_expression_list] = STATE(436),
        [sym__expression] = STATE(485),
        [sym_binary_operator] = STATE(376),
        [sym_subscript] = STATE(376),
        [sym_call] = STATE(376),
        [sym_number] = ACTIONS(819),
        [sym_identifier] = ACTIONS(819),
        [sym_comment] = ACTIONS(67),
    },
    [481] = {
        [ts_builtin_sym_end] = ACTIONS(693),
        [anon_sym_SEMI] = ACTIONS(693),
        [anon_sym_print] = ACTIONS(691),
        [anon_sym_return] = ACTIONS(691),
        [anon_sym_del] = ACTIONS(691),
        [sym_pass_statement] = ACTIONS(691),
        [sym_break_statement] = ACTIONS(691),
        [sym_continue_statement] = ACTIONS(691),
        [anon_sym_if] = ACTIONS(691),
        [anon_sym_else] = ACTIONS(691),
        [anon_sym_for] = ACTIONS(691),
        [anon_sym_while] = ACTIONS(691),
        [anon_sym_try] = ACTIONS(691),
        [anon_sym_except] = ACTIONS(691),
        [anon_sym_finally] = ACTIONS(691),
        [anon_sym_with] = ACTIONS(691),
        [anon_sym_def] = ACTIONS(691),
        [anon_sym_class] = ACTIONS(691),
        [anon_sym_AT] = ACTIONS(693),
        [sym_number] = ACTIONS(691),
        [sym_identifier] = ACTIONS(695),
        [sym_comment] = ACTIONS(67),
        [sym__newline] = ACTIONS(693),
        [sym__dedent] = ACTIONS(693),
    },
    [482] = {
        [ts_builtin_sym_end] = ACTIONS(151),
        [anon_sym_SEMI] = ACTIONS(151),
        [anon_sym_print] = ACTIONS(153),
        [anon_sym_return] = ACTIONS(153),
        [anon_sym_del] = ACTIONS(153),
        [sym_pass_statement] = ACTIONS(153),
        [sym_break_statement] = ACTIONS(153),
        [sym_continue_statement] = ACTIONS(153),
        [anon_sym_if] = ACTIONS(153),
        [anon_sym_else] = ACTIONS(153),
        [anon_sym_for] = ACTIONS(153),
        [anon_sym_while] = ACTIONS(153),
        [anon_sym_try] = ACTIONS(153),
        [anon_sym_except] = ACTIONS(153),
        [anon_sym_finally] = ACTIONS(153),
        [anon_sym_with] = ACTIONS(153),
        [anon_sym_def] = ACTIONS(153),
        [anon_sym_LPAREN] = ACTIONS(1274),
        [anon_sym_class] = ACTIONS(153),
        [anon_sym_AT] = ACTIONS(151),
        [anon_sym_PLUS] = ACTIONS(1370),
        [anon_sym_LBRACK] = ACTIONS(1278),
        [sym_number] = ACTIONS(153),
        [sym_identifier] = ACTIONS(161),
        [sym_comment] = ACTIONS(67),
        [sym__newline] = ACTIONS(151),
        [sym__dedent] = ACTIONS(151),
    },
    [483] = {
        [sym__expression] = STATE(484),
        [sym_binary_operator] = STATE(376),
        [sym_subscript] = STATE(376),
        [sym_call] = STATE(376),
        [sym_number] = ACTIONS(819),
        [sym_identifier] = ACTIONS(819),
        [sym_comment] = ACTIONS(67),
    },
    [484] = {
        [ts_builtin_sym_end] = ACTIONS(245),
        [anon_sym_SEMI] = ACTIONS(245),
        [anon_sym_print] = ACTIONS(271),
        [anon_sym_return] = ACTIONS(271),
        [anon_sym_del] = ACTIONS(271),
        [sym_pass_statement] = ACTIONS(271),
        [sym_break_statement] = ACTIONS(271),
        [sym_continue_statement] = ACTIONS(271),
        [anon_sym_if] = ACTIONS(271),
        [anon_sym_else] = ACTIONS(271),
        [anon_sym_for] = ACTIONS(271),
        [anon_sym_while] = ACTIONS(271),
        [anon_sym_try] = ACTIONS(271),
        [anon_sym_except] = ACTIONS(271),
        [anon_sym_finally] = ACTIONS(271),
        [anon_sym_with] = ACTIONS(271),
        [anon_sym_def] = ACTIONS(271),
        [anon_sym_LPAREN] = ACTIONS(1173),
        [anon_sym_class] = ACTIONS(271),
        [anon_sym_AT] = ACTIONS(245),
        [anon_sym_PLUS] = ACTIONS(1372),
        [anon_sym_LBRACK] = ACTIONS(1189),
        [sym_number] = ACTIONS(271),
        [sym_identifier] = ACTIONS(273),
        [sym_comment] = ACTIONS(67),
        [sym__newline] = ACTIONS(245),
        [sym__dedent] = ACTIONS(245),
    },
    [485] = {
        [aux_sym_print_statement_repeat1] = STATE(488),
        [ts_builtin_sym_end] = ACTIONS(353),
        [anon_sym_SEMI] = ACTIONS(353),
        [anon_sym_print] = ACTIONS(473),
        [anon_sym_COMMA] = ACTIONS(1375),
        [anon_sym_return] = ACTIONS(473),
        [anon_sym_del] = ACTIONS(473),
        [sym_pass_statement] = ACTIONS(473),
        [sym_break_statement] = ACTIONS(473),
        [sym_continue_statement] = ACTIONS(473),
        [anon_sym_if] = ACTIONS(473),
        [anon_sym_else] = ACTIONS(473),
        [anon_sym_for] = ACTIONS(473),
        [anon_sym_while] = ACTIONS(473),
        [anon_sym_try] = ACTIONS(473),
        [anon_sym_except] = ACTIONS(473),
        [anon_sym_finally] = ACTIONS(473),
        [anon_sym_with] = ACTIONS(473),
        [anon_sym_def] = ACTIONS(473),
        [anon_sym_LPAREN] = ACTIONS(1274),
        [anon_sym_class] = ACTIONS(473),
        [anon_sym_AT] = ACTIONS(353),
        [anon_sym_PLUS] = ACTIONS(1377),
        [anon_sym_LBRACK] = ACTIONS(1278),
        [sym_number] = ACTIONS(473),
        [sym_identifier] = ACTIONS(477),
        [sym_comment] = ACTIONS(67),
        [sym__newline] = ACTIONS(353),
        [sym__dedent] = ACTIONS(353),
    },
    [486] = {
        [sym__expression] = STATE(492),
        [sym_binary_operator] = STATE(376),
        [sym_subscript] = STATE(376),
        [sym_call] = STATE(376),
        [sym_number] = ACTIONS(819),
        [sym_identifier] = ACTIONS(819),
        [sym_comment] = ACTIONS(67),
    },
    [487] = {
        [sym__expression] = STATE(491),
        [sym_binary_operator] = STATE(376),
        [sym_subscript] = STATE(376),
        [sym_call] = STATE(376),
        [sym_number] = ACTIONS(819),
        [sym_identifier] = ACTIONS(819),
        [sym_comment] = ACTIONS(67),
    },
    [488] = {
        [ts_builtin_sym_end] = ACTIONS(355),
        [anon_sym_SEMI] = ACTIONS(355),
        [anon_sym_print] = ACTIONS(479),
        [anon_sym_COMMA] = ACTIONS(1379),
        [anon_sym_return] = ACTIONS(479),
        [anon_sym_del] = ACTIONS(479),
        [sym_pass_statement] = ACTIONS(479),
        [sym_break_statement] = ACTIONS(479),
        [sym_continue_statement] = ACTIONS(479),
        [anon_sym_if] = ACTIONS(479),
        [anon_sym_else] = ACTIONS(479),
        [anon_sym_for] = ACTIONS(479),
        [anon_sym_while] = ACTIONS(479),
        [anon_sym_try] = ACTIONS(479),
        [anon_sym_except] = ACTIONS(479),
        [anon_sym_finally] = ACTIONS(479),
        [anon_sym_with] = ACTIONS(479),
        [anon_sym_def] = ACTIONS(479),
        [anon_sym_class] = ACTIONS(479),
        [anon_sym_AT] = ACTIONS(355),
        [sym_number] = ACTIONS(479),
        [sym_identifier] = ACTIONS(483),
        [sym_comment] = ACTIONS(67),
        [sym__newline] = ACTIONS(355),
        [sym__dedent] = ACTIONS(355),
    },
    [489] = {
        [sym__expression] = STATE(490),
        [sym_binary_operator] = STATE(376),
        [sym_subscript] = STATE(376),
        [sym_call] = STATE(376),
        [sym_number] = ACTIONS(819),
        [sym_identifier] = ACTIONS(819),
        [sym_comment] = ACTIONS(67),
    },
    [490] = {
        [ts_builtin_sym_end] = ACTIONS(329),
        [anon_sym_SEMI] = ACTIONS(329),
        [anon_sym_print] = ACTIONS(485),
        [anon_sym_COMMA] = ACTIONS(329),
        [anon_sym_return] = ACTIONS(485),
        [anon_sym_del] = ACTIONS(485),
        [sym_pass_statement] = ACTIONS(485),
        [sym_break_statement] = ACTIONS(485),
        [sym_continue_statement] = ACTIONS(485),
        [anon_sym_if] = ACTIONS(485),
        [anon_sym_else] = ACTIONS(485),
        [anon_sym_for] = ACTIONS(485),
        [anon_sym_while] = ACTIONS(485),
        [anon_sym_try] = ACTIONS(485),
        [anon_sym_except] = ACTIONS(485),
        [anon_sym_finally] = ACTIONS(485),
        [anon_sym_with] = ACTIONS(485),
        [anon_sym_def] = ACTIONS(485),
        [anon_sym_LPAREN] = ACTIONS(1274),
        [anon_sym_class] = ACTIONS(485),
        [anon_sym_AT] = ACTIONS(329),
        [anon_sym_PLUS] = ACTIONS(1377),
        [anon_sym_LBRACK] = ACTIONS(1278),
        [sym_number] = ACTIONS(485),
        [sym_identifier] = ACTIONS(487),
        [sym_comment] = ACTIONS(67),
        [sym__newline] = ACTIONS(329),
        [sym__dedent] = ACTIONS(329),
    },
    [491] = {
        [ts_builtin_sym_end] = ACTIONS(245),
        [anon_sym_SEMI] = ACTIONS(245),
        [anon_sym_print] = ACTIONS(271),
        [anon_sym_COMMA] = ACTIONS(245),
        [anon_sym_return] = ACTIONS(271),
        [anon_sym_del] = ACTIONS(271),
        [sym_pass_statement] = ACTIONS(271),
        [sym_break_statement] = ACTIONS(271),
        [sym_continue_statement] = ACTIONS(271),
        [anon_sym_if] = ACTIONS(271),
        [anon_sym_else] = ACTIONS(271),
        [anon_sym_for] = ACTIONS(271),
        [anon_sym_while] = ACTIONS(271),
        [anon_sym_try] = ACTIONS(271),
        [anon_sym_except] = ACTIONS(271),
        [anon_sym_finally] = ACTIONS(271),
        [anon_sym_with] = ACTIONS(271),
        [anon_sym_def] = ACTIONS(271),
        [anon_sym_LPAREN] = ACTIONS(1173),
        [anon_sym_class] = ACTIONS(271),
        [anon_sym_AT] = ACTIONS(245),
        [anon_sym_PLUS] = ACTIONS(1381),
        [anon_sym_LBRACK] = ACTIONS(1189),
        [sym_number] = ACTIONS(271),
        [sym_identifier] = ACTIONS(273),
        [sym_comment] = ACTIONS(67),
        [sym__newline] = ACTIONS(245),
        [sym__dedent] = ACTIONS(245),
    },
    [492] = {
        [ts_builtin_sym_end] = ACTIONS(331),
        [anon_sym_SEMI] = ACTIONS(331),
        [anon_sym_print] = ACTIONS(489),
        [anon_sym_COMMA] = ACTIONS(331),
        [anon_sym_return] = ACTIONS(489),
        [anon_sym_del] = ACTIONS(489),
        [sym_pass_statement] = ACTIONS(489),
        [sym_break_statement] = ACTIONS(489),
        [sym_continue_statement] = ACTIONS(489),
        [anon_sym_if] = ACTIONS(489),
        [anon_sym_else] = ACTIONS(489),
        [anon_sym_for] = ACTIONS(489),
        [anon_sym_while] = ACTIONS(489),
        [anon_sym_try] = ACTIONS(489),
        [anon_sym_except] = ACTIONS(489),
        [anon_sym_finally] = ACTIONS(489),
        [anon_sym_with] = ACTIONS(489),
        [anon_sym_def] = ACTIONS(489),
        [anon_sym_LPAREN] = ACTIONS(1274),
        [anon_sym_class] = ACTIONS(489),
        [anon_sym_AT] = ACTIONS(331),
        [anon_sym_PLUS] = ACTIONS(1377),
        [anon_sym_LBRACK] = ACTIONS(1278),
        [sym_number] = ACTIONS(489),
        [sym_identifier] = ACTIONS(491),
        [sym_comment] = ACTIONS(67),
        [sym__newline] = ACTIONS(331),
        [sym__dedent] = ACTIONS(331),
    },
    [493] = {
        [aux_sym_print_statement_repeat1] = STATE(494),
        [ts_builtin_sym_end] = ACTIONS(501),
        [anon_sym_SEMI] = ACTIONS(501),
        [anon_sym_print] = ACTIONS(499),
        [anon_sym_COMMA] = ACTIONS(1375),
        [anon_sym_return] = ACTIONS(499),
        [anon_sym_del] = ACTIONS(499),
        [sym_pass_statement] = ACTIONS(499),
        [sym_break_statement] = ACTIONS(499),
        [sym_continue_statement] = ACTIONS(499),
        [anon_sym_if] = ACTIONS(499),
        [anon_sym_else] = ACTIONS(499),
        [anon_sym_for] = ACTIONS(499),
        [anon_sym_while] = ACTIONS(499),
        [anon_sym_try] = ACTIONS(499),
        [anon_sym_except] = ACTIONS(499),
        [anon_sym_finally] = ACTIONS(499),
        [anon_sym_with] = ACTIONS(499),
        [anon_sym_def] = ACTIONS(499),
        [anon_sym_LPAREN] = ACTIONS(1274),
        [anon_sym_class] = ACTIONS(499),
        [anon_sym_AT] = ACTIONS(501),
        [anon_sym_PLUS] = ACTIONS(1377),
        [anon_sym_LBRACK] = ACTIONS(1278),
        [sym_number] = ACTIONS(499),
        [sym_identifier] = ACTIONS(503),
        [sym_comment] = ACTIONS(67),
        [sym__newline] = ACTIONS(501),
        [sym__dedent] = ACTIONS(501),
    },
    [494] = {
        [ts_builtin_sym_end] = ACTIONS(507),
        [anon_sym_SEMI] = ACTIONS(507),
        [anon_sym_print] = ACTIONS(505),
        [anon_sym_COMMA] = ACTIONS(1379),
        [anon_sym_return] = ACTIONS(505),
        [anon_sym_del] = ACTIONS(505),
        [sym_pass_statement] = ACTIONS(505),
        [sym_break_statement] = ACTIONS(505),
        [sym_continue_statement] = ACTIONS(505),
        [anon_sym_if] = ACTIONS(505),
        [anon_sym_else] = ACTIONS(505),
        [anon_sym_for] = ACTIONS(505),
        [anon_sym_while] = ACTIONS(505),
        [anon_sym_try] = ACTIONS(505),
        [anon_sym_except] = ACTIONS(505),
        [anon_sym_finally] = ACTIONS(505),
        [anon_sym_with] = ACTIONS(505),
        [anon_sym_def] = ACTIONS(505),
        [anon_sym_class] = ACTIONS(505),
        [anon_sym_AT] = ACTIONS(507),
        [sym_number] = ACTIONS(505),
        [sym_identifier] = ACTIONS(509),
        [sym_comment] = ACTIONS(67),
        [sym__newline] = ACTIONS(507),
        [sym__dedent] = ACTIONS(507),
    },
    [495] = {
        [sym__simple_statement] = STATE(419),
        [sym_print_statement] = STATE(352),
        [sym_expression_statement] = STATE(352),
        [sym_return_statement] = STATE(352),
        [sym_delete_statement] = STATE(352),
        [sym__suite] = STATE(502),
        [sym__expression] = STATE(503),
        [sym_binary_operator] = STATE(376),
        [sym_subscript] = STATE(376),
        [sym_call] = STATE(376),
        [anon_sym_print] = ACTIONS(1384),
        [anon_sym_return] = ACTIONS(1386),
        [anon_sym_del] = ACTIONS(1388),
        [sym_pass_statement] = ACTIONS(841),
        [sym_break_statement] = ACTIONS(841),
        [sym_continue_statement] = ACTIONS(841),
        [sym_number] = ACTIONS(819),
        [sym_identifier] = ACTIONS(843),
        [sym_comment] = ACTIONS(67),
        [sym__indent] = ACTIONS(845),
    },
    [496] = {
        [anon_sym_COLON] = ACTIONS(1390),
        [sym_comment] = ACTIONS(67),
    },
    [497] = {
        [sym__simple_statement] = STATE(419),
        [sym_print_statement] = STATE(352),
        [sym_expression_statement] = STATE(352),
        [sym_return_statement] = STATE(352),
        [sym_delete_statement] = STATE(352),
        [sym__suite] = STATE(498),
        [sym__expression] = STATE(421),
        [sym_binary_operator] = STATE(376),
        [sym_subscript] = STATE(376),
        [sym_call] = STATE(376),
        [anon_sym_print] = ACTIONS(1268),
        [anon_sym_return] = ACTIONS(1270),
        [anon_sym_del] = ACTIONS(1272),
        [sym_pass_statement] = ACTIONS(841),
        [sym_break_statement] = ACTIONS(841),
        [sym_continue_statement] = ACTIONS(841),
        [sym_number] = ACTIONS(819),
        [sym_identifier] = ACTIONS(843),
        [sym_comment] = ACTIONS(67),
        [sym__indent] = ACTIONS(845),
    },
    [498] = {
        [ts_builtin_sym_end] = ACTIONS(381),
        [anon_sym_SEMI] = ACTIONS(381),
        [anon_sym_print] = ACTIONS(383),
        [anon_sym_return] = ACTIONS(383),
        [anon_sym_del] = ACTIONS(383),
        [sym_pass_statement] = ACTIONS(383),
        [sym_break_statement] = ACTIONS(383),
        [sym_continue_statement] = ACTIONS(383),
        [anon_sym_if] = ACTIONS(383),
        [anon_sym_for] = ACTIONS(383),
        [anon_sym_while] = ACTIONS(383),
        [anon_sym_try] = ACTIONS(383),
        [anon_sym_with] = ACTIONS(383),
        [anon_sym_def] = ACTIONS(383),
        [anon_sym_class] = ACTIONS(383),
        [anon_sym_AT] = ACTIONS(381),
        [sym_number] = ACTIONS(383),
        [sym_identifier] = ACTIONS(385),
        [sym_comment] = ACTIONS(67),
        [sym__newline] = ACTIONS(381),
        [sym__dedent] = ACTIONS(381),
    },
    [499] = {
        [sym__expression] = STATE(515),
        [sym_binary_operator] = STATE(376),
        [sym_subscript] = STATE(376),
        [sym_call] = STATE(376),
        [sym_number] = ACTIONS(819),
        [sym_identifier] = ACTIONS(819),
        [sym_comment] = ACTIONS(67),
    },
    [500] = {
        [sym_expression_list] = STATE(445),
        [sym__expression] = STATE(507),
        [sym_binary_operator] = STATE(376),
        [sym_subscript] = STATE(376),
        [sym_call] = STATE(376),
        [sym_number] = ACTIONS(819),
        [sym_identifier] = ACTIONS(819),
        [sym_comment] = ACTIONS(67),
    },
    [501] = {
        [sym_expression_list] = STATE(436),
        [sym__expression] = STATE(507),
        [sym_binary_operator] = STATE(376),
        [sym_subscript] = STATE(376),
        [sym_call] = STATE(376),
        [sym_number] = ACTIONS(819),
        [sym_identifier] = ACTIONS(819),
        [sym_comment] = ACTIONS(67),
    },
    [502] = {
        [sym_else_clause] = STATE(506),
        [ts_builtin_sym_end] = ACTIONS(725),
        [anon_sym_SEMI] = ACTIONS(725),
        [anon_sym_print] = ACTIONS(723),
        [anon_sym_return] = ACTIONS(723),
        [anon_sym_del] = ACTIONS(723),
        [sym_pass_statement] = ACTIONS(723),
        [sym_break_statement] = ACTIONS(723),
        [sym_continue_statement] = ACTIONS(723),
        [anon_sym_if] = ACTIONS(723),
        [anon_sym_else] = ACTIONS(1244),
        [anon_sym_for] = ACTIONS(723),
        [anon_sym_while] = ACTIONS(723),
        [anon_sym_try] = ACTIONS(723),
        [anon_sym_with] = ACTIONS(723),
        [anon_sym_def] = ACTIONS(723),
        [anon_sym_class] = ACTIONS(723),
        [anon_sym_AT] = ACTIONS(725),
        [sym_number] = ACTIONS(723),
        [sym_identifier] = ACTIONS(727),
        [sym_comment] = ACTIONS(67),
        [sym__newline] = ACTIONS(725),
        [sym__dedent] = ACTIONS(725),
    },
    [503] = {
        [ts_builtin_sym_end] = ACTIONS(151),
        [anon_sym_SEMI] = ACTIONS(151),
        [anon_sym_print] = ACTIONS(153),
        [anon_sym_return] = ACTIONS(153),
        [anon_sym_del] = ACTIONS(153),
        [sym_pass_statement] = ACTIONS(153),
        [sym_break_statement] = ACTIONS(153),
        [sym_continue_statement] = ACTIONS(153),
        [anon_sym_if] = ACTIONS(153),
        [anon_sym_else] = ACTIONS(153),
        [anon_sym_for] = ACTIONS(153),
        [anon_sym_while] = ACTIONS(153),
        [anon_sym_try] = ACTIONS(153),
        [anon_sym_with] = ACTIONS(153),
        [anon_sym_def] = ACTIONS(153),
        [anon_sym_LPAREN] = ACTIONS(1274),
        [anon_sym_class] = ACTIONS(153),
        [anon_sym_AT] = ACTIONS(151),
        [anon_sym_PLUS] = ACTIONS(1392),
        [anon_sym_LBRACK] = ACTIONS(1278),
        [sym_number] = ACTIONS(153),
        [sym_identifier] = ACTIONS(161),
        [sym_comment] = ACTIONS(67),
        [sym__newline] = ACTIONS(151),
        [sym__dedent] = ACTIONS(151),
    },
    [504] = {
        [sym__expression] = STATE(505),
        [sym_binary_operator] = STATE(376),
        [sym_subscript] = STATE(376),
        [sym_call] = STATE(376),
        [sym_number] = ACTIONS(819),
        [sym_identifier] = ACTIONS(819),
        [sym_comment] = ACTIONS(67),
    },
    [505] = {
        [ts_builtin_sym_end] = ACTIONS(245),
        [anon_sym_SEMI] = ACTIONS(245),
        [anon_sym_print] = ACTIONS(271),
        [anon_sym_return] = ACTIONS(271),
        [anon_sym_del] = ACTIONS(271),
        [sym_pass_statement] = ACTIONS(271),
        [sym_break_statement] = ACTIONS(271),
        [sym_continue_statement] = ACTIONS(271),
        [anon_sym_if] = ACTIONS(271),
        [anon_sym_else] = ACTIONS(271),
        [anon_sym_for] = ACTIONS(271),
        [anon_sym_while] = ACTIONS(271),
        [anon_sym_try] = ACTIONS(271),
        [anon_sym_with] = ACTIONS(271),
        [anon_sym_def] = ACTIONS(271),
        [anon_sym_LPAREN] = ACTIONS(1173),
        [anon_sym_class] = ACTIONS(271),
        [anon_sym_AT] = ACTIONS(245),
        [anon_sym_PLUS] = ACTIONS(1394),
        [anon_sym_LBRACK] = ACTIONS(1189),
        [sym_number] = ACTIONS(271),
        [sym_identifier] = ACTIONS(273),
        [sym_comment] = ACTIONS(67),
        [sym__newline] = ACTIONS(245),
        [sym__dedent] = ACTIONS(245),
    },
    [506] = {
        [ts_builtin_sym_end] = ACTIONS(731),
        [anon_sym_SEMI] = ACTIONS(731),
        [anon_sym_print] = ACTIONS(729),
        [anon_sym_return] = ACTIONS(729),
        [anon_sym_del] = ACTIONS(729),
        [sym_pass_statement] = ACTIONS(729),
        [sym_break_statement] = ACTIONS(729),
        [sym_continue_statement] = ACTIONS(729),
        [anon_sym_if] = ACTIONS(729),
        [anon_sym_for] = ACTIONS(729),
        [anon_sym_while] = ACTIONS(729),
        [anon_sym_try] = ACTIONS(729),
        [anon_sym_with] = ACTIONS(729),
        [anon_sym_def] = ACTIONS(729),
        [anon_sym_class] = ACTIONS(729),
        [anon_sym_AT] = ACTIONS(731),
        [sym_number] = ACTIONS(729),
        [sym_identifier] = ACTIONS(733),
        [sym_comment] = ACTIONS(67),
        [sym__newline] = ACTIONS(731),
        [sym__dedent] = ACTIONS(731),
    },
    [507] = {
        [aux_sym_print_statement_repeat1] = STATE(510),
        [ts_builtin_sym_end] = ACTIONS(353),
        [anon_sym_SEMI] = ACTIONS(353),
        [anon_sym_print] = ACTIONS(473),
        [anon_sym_COMMA] = ACTIONS(1397),
        [anon_sym_return] = ACTIONS(473),
        [anon_sym_del] = ACTIONS(473),
        [sym_pass_statement] = ACTIONS(473),
        [sym_break_statement] = ACTIONS(473),
        [sym_continue_statement] = ACTIONS(473),
        [anon_sym_if] = ACTIONS(473),
        [anon_sym_else] = ACTIONS(473),
        [anon_sym_for] = ACTIONS(473),
        [anon_sym_while] = ACTIONS(473),
        [anon_sym_try] = ACTIONS(473),
        [anon_sym_with] = ACTIONS(473),
        [anon_sym_def] = ACTIONS(473),
        [anon_sym_LPAREN] = ACTIONS(1274),
        [anon_sym_class] = ACTIONS(473),
        [anon_sym_AT] = ACTIONS(353),
        [anon_sym_PLUS] = ACTIONS(1399),
        [anon_sym_LBRACK] = ACTIONS(1278),
        [sym_number] = ACTIONS(473),
        [sym_identifier] = ACTIONS(477),
        [sym_comment] = ACTIONS(67),
        [sym__newline] = ACTIONS(353),
        [sym__dedent] = ACTIONS(353),
    },
    [508] = {
        [sym__expression] = STATE(514),
        [sym_binary_operator] = STATE(376),
        [sym_subscript] = STATE(376),
        [sym_call] = STATE(376),
        [sym_number] = ACTIONS(819),
        [sym_identifier] = ACTIONS(819),
        [sym_comment] = ACTIONS(67),
    },
    [509] = {
        [sym__expression] = STATE(513),
        [sym_binary_operator] = STATE(376),
        [sym_subscript] = STATE(376),
        [sym_call] = STATE(376),
        [sym_number] = ACTIONS(819),
        [sym_identifier] = ACTIONS(819),
        [sym_comment] = ACTIONS(67),
    },
    [510] = {
        [ts_builtin_sym_end] = ACTIONS(355),
        [anon_sym_SEMI] = ACTIONS(355),
        [anon_sym_print] = ACTIONS(479),
        [anon_sym_COMMA] = ACTIONS(1401),
        [anon_sym_return] = ACTIONS(479),
        [anon_sym_del] = ACTIONS(479),
        [sym_pass_statement] = ACTIONS(479),
        [sym_break_statement] = ACTIONS(479),
        [sym_continue_statement] = ACTIONS(479),
        [anon_sym_if] = ACTIONS(479),
        [anon_sym_else] = ACTIONS(479),
        [anon_sym_for] = ACTIONS(479),
        [anon_sym_while] = ACTIONS(479),
        [anon_sym_try] = ACTIONS(479),
        [anon_sym_with] = ACTIONS(479),
        [anon_sym_def] = ACTIONS(479),
        [anon_sym_class] = ACTIONS(479),
        [anon_sym_AT] = ACTIONS(355),
        [sym_number] = ACTIONS(479),
        [sym_identifier] = ACTIONS(483),
        [sym_comment] = ACTIONS(67),
        [sym__newline] = ACTIONS(355),
        [sym__dedent] = ACTIONS(355),
    },
    [511] = {
        [sym__expression] = STATE(512),
        [sym_binary_operator] = STATE(376),
        [sym_subscript] = STATE(376),
        [sym_call] = STATE(376),
        [sym_number] = ACTIONS(819),
        [sym_identifier] = ACTIONS(819),
        [sym_comment] = ACTIONS(67),
    },
    [512] = {
        [ts_builtin_sym_end] = ACTIONS(329),
        [anon_sym_SEMI] = ACTIONS(329),
        [anon_sym_print] = ACTIONS(485),
        [anon_sym_COMMA] = ACTIONS(329),
        [anon_sym_return] = ACTIONS(485),
        [anon_sym_del] = ACTIONS(485),
        [sym_pass_statement] = ACTIONS(485),
        [sym_break_statement] = ACTIONS(485),
        [sym_continue_statement] = ACTIONS(485),
        [anon_sym_if] = ACTIONS(485),
        [anon_sym_else] = ACTIONS(485),
        [anon_sym_for] = ACTIONS(485),
        [anon_sym_while] = ACTIONS(485),
        [anon_sym_try] = ACTIONS(485),
        [anon_sym_with] = ACTIONS(485),
        [anon_sym_def] = ACTIONS(485),
        [anon_sym_LPAREN] = ACTIONS(1274),
        [anon_sym_class] = ACTIONS(485),
        [anon_sym_AT] = ACTIONS(329),
        [anon_sym_PLUS] = ACTIONS(1399),
        [anon_sym_LBRACK] = ACTIONS(1278),
        [sym_number] = ACTIONS(485),
        [sym_identifier] = ACTIONS(487),
        [sym_comment] = ACTIONS(67),
        [sym__newline] = ACTIONS(329),
        [sym__dedent] = ACTIONS(329),
    },
    [513] = {
        [ts_builtin_sym_end] = ACTIONS(245),
        [anon_sym_SEMI] = ACTIONS(245),
        [anon_sym_print] = ACTIONS(271),
        [anon_sym_COMMA] = ACTIONS(245),
        [anon_sym_return] = ACTIONS(271),
        [anon_sym_del] = ACTIONS(271),
        [sym_pass_statement] = ACTIONS(271),
        [sym_break_statement] = ACTIONS(271),
        [sym_continue_statement] = ACTIONS(271),
        [anon_sym_if] = ACTIONS(271),
        [anon_sym_else] = ACTIONS(271),
        [anon_sym_for] = ACTIONS(271),
        [anon_sym_while] = ACTIONS(271),
        [anon_sym_try] = ACTIONS(271),
        [anon_sym_with] = ACTIONS(271),
        [anon_sym_def] = ACTIONS(271),
        [anon_sym_LPAREN] = ACTIONS(1173),
        [anon_sym_class] = ACTIONS(271),
        [anon_sym_AT] = ACTIONS(245),
        [anon_sym_PLUS] = ACTIONS(1403),
        [anon_sym_LBRACK] = ACTIONS(1189),
        [sym_number] = ACTIONS(271),
        [sym_identifier] = ACTIONS(273),
        [sym_comment] = ACTIONS(67),
        [sym__newline] = ACTIONS(245),
        [sym__dedent] = ACTIONS(245),
    },
    [514] = {
        [ts_builtin_sym_end] = ACTIONS(331),
        [anon_sym_SEMI] = ACTIONS(331),
        [anon_sym_print] = ACTIONS(489),
        [anon_sym_COMMA] = ACTIONS(331),
        [anon_sym_return] = ACTIONS(489),
        [anon_sym_del] = ACTIONS(489),
        [sym_pass_statement] = ACTIONS(489),
        [sym_break_statement] = ACTIONS(489),
        [sym_continue_statement] = ACTIONS(489),
        [anon_sym_if] = ACTIONS(489),
        [anon_sym_else] = ACTIONS(489),
        [anon_sym_for] = ACTIONS(489),
        [anon_sym_while] = ACTIONS(489),
        [anon_sym_try] = ACTIONS(489),
        [anon_sym_with] = ACTIONS(489),
        [anon_sym_def] = ACTIONS(489),
        [anon_sym_LPAREN] = ACTIONS(1274),
        [anon_sym_class] = ACTIONS(489),
        [anon_sym_AT] = ACTIONS(331),
        [anon_sym_PLUS] = ACTIONS(1399),
        [anon_sym_LBRACK] = ACTIONS(1278),
        [sym_number] = ACTIONS(489),
        [sym_identifier] = ACTIONS(491),
        [sym_comment] = ACTIONS(67),
        [sym__newline] = ACTIONS(331),
        [sym__dedent] = ACTIONS(331),
    },
    [515] = {
        [aux_sym_print_statement_repeat1] = STATE(516),
        [ts_builtin_sym_end] = ACTIONS(501),
        [anon_sym_SEMI] = ACTIONS(501),
        [anon_sym_print] = ACTIONS(499),
        [anon_sym_COMMA] = ACTIONS(1397),
        [anon_sym_return] = ACTIONS(499),
        [anon_sym_del] = ACTIONS(499),
        [sym_pass_statement] = ACTIONS(499),
        [sym_break_statement] = ACTIONS(499),
        [sym_continue_statement] = ACTIONS(499),
        [anon_sym_if] = ACTIONS(499),
        [anon_sym_else] = ACTIONS(499),
        [anon_sym_for] = ACTIONS(499),
        [anon_sym_while] = ACTIONS(499),
        [anon_sym_try] = ACTIONS(499),
        [anon_sym_with] = ACTIONS(499),
        [anon_sym_def] = ACTIONS(499),
        [anon_sym_LPAREN] = ACTIONS(1274),
        [anon_sym_class] = ACTIONS(499),
        [anon_sym_AT] = ACTIONS(501),
        [anon_sym_PLUS] = ACTIONS(1399),
        [anon_sym_LBRACK] = ACTIONS(1278),
        [sym_number] = ACTIONS(499),
        [sym_identifier] = ACTIONS(503),
        [sym_comment] = ACTIONS(67),
        [sym__newline] = ACTIONS(501),
        [sym__dedent] = ACTIONS(501),
    },
    [516] = {
        [ts_builtin_sym_end] = ACTIONS(507),
        [anon_sym_SEMI] = ACTIONS(507),
        [anon_sym_print] = ACTIONS(505),
        [anon_sym_COMMA] = ACTIONS(1401),
        [anon_sym_return] = ACTIONS(505),
        [anon_sym_del] = ACTIONS(505),
        [sym_pass_statement] = ACTIONS(505),
        [sym_break_statement] = ACTIONS(505),
        [sym_continue_statement] = ACTIONS(505),
        [anon_sym_if] = ACTIONS(505),
        [anon_sym_else] = ACTIONS(505),
        [anon_sym_for] = ACTIONS(505),
        [anon_sym_while] = ACTIONS(505),
        [anon_sym_try] = ACTIONS(505),
        [anon_sym_with] = ACTIONS(505),
        [anon_sym_def] = ACTIONS(505),
        [anon_sym_class] = ACTIONS(505),
        [anon_sym_AT] = ACTIONS(507),
        [sym_number] = ACTIONS(505),
        [sym_identifier] = ACTIONS(509),
        [sym_comment] = ACTIONS(67),
        [sym__newline] = ACTIONS(507),
        [sym__dedent] = ACTIONS(507),
    },
    [517] = {
        [ts_builtin_sym_end] = ACTIONS(1406),
        [anon_sym_SEMI] = ACTIONS(1406),
        [anon_sym_print] = ACTIONS(1410),
        [anon_sym_return] = ACTIONS(1410),
        [anon_sym_del] = ACTIONS(1410),
        [sym_pass_statement] = ACTIONS(1410),
        [sym_break_statement] = ACTIONS(1410),
        [sym_continue_statement] = ACTIONS(1410),
        [anon_sym_if] = ACTIONS(1410),
        [anon_sym_for] = ACTIONS(1410),
        [anon_sym_while] = ACTIONS(1410),
        [anon_sym_try] = ACTIONS(1410),
        [anon_sym_with] = ACTIONS(1410),
        [anon_sym_def] = ACTIONS(1410),
        [anon_sym_class] = ACTIONS(1410),
        [anon_sym_AT] = ACTIONS(1406),
        [sym_number] = ACTIONS(1410),
        [sym_identifier] = ACTIONS(1414),
        [sym_comment] = ACTIONS(67),
        [sym__newline] = ACTIONS(1406),
        [sym__dedent] = ACTIONS(1406),
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
        [anon_sym_else] = ACTIONS(635),
        [anon_sym_for] = ACTIONS(635),
        [anon_sym_while] = ACTIONS(635),
        [anon_sym_try] = ACTIONS(635),
        [anon_sym_except] = ACTIONS(635),
        [anon_sym_finally] = ACTIONS(635),
        [anon_sym_with] = ACTIONS(635),
        [anon_sym_def] = ACTIONS(635),
        [anon_sym_class] = ACTIONS(635),
        [anon_sym_AT] = ACTIONS(637),
        [sym_number] = ACTIONS(635),
        [sym_identifier] = ACTIONS(639),
        [sym_comment] = ACTIONS(67),
        [sym__newline] = ACTIONS(637),
        [sym__dedent] = ACTIONS(637),
    },
    [519] = {
        [ts_builtin_sym_end] = ACTIONS(643),
        [anon_sym_SEMI] = ACTIONS(643),
        [anon_sym_print] = ACTIONS(641),
        [anon_sym_return] = ACTIONS(641),
        [anon_sym_del] = ACTIONS(641),
        [sym_pass_statement] = ACTIONS(641),
        [sym_break_statement] = ACTIONS(641),
        [sym_continue_statement] = ACTIONS(641),
        [anon_sym_if] = ACTIONS(641),
        [anon_sym_for] = ACTIONS(641),
        [anon_sym_while] = ACTIONS(641),
        [anon_sym_try] = ACTIONS(641),
        [anon_sym_with] = ACTIONS(641),
        [anon_sym_def] = ACTIONS(641),
        [anon_sym_class] = ACTIONS(641),
        [anon_sym_AT] = ACTIONS(643),
        [sym_number] = ACTIONS(641),
        [sym_identifier] = ACTIONS(645),
        [sym_comment] = ACTIONS(67),
        [sym__newline] = ACTIONS(643),
        [sym__dedent] = ACTIONS(643),
    },
    [520] = {
        [anon_sym_COLON] = ACTIONS(1418),
        [sym_comment] = ACTIONS(67),
    },
    [521] = {
        [sym_dictionary_splat_parameter] = STATE(523),
        [anon_sym_STAR] = ACTIONS(557),
        [sym_comment] = ACTIONS(67),
    },
    [522] = {
        [anon_sym_COLON] = ACTIONS(1423),
        [sym_comment] = ACTIONS(67),
    },
    [523] = {
        [anon_sym_RPAREN] = ACTIONS(1426),
        [sym_comment] = ACTIONS(67),
    },
    [524] = {
        [anon_sym_COLON] = ACTIONS(1428),
        [sym_comment] = ACTIONS(67),
    },
    [525] = {
        [anon_sym_RPAREN] = ACTIONS(1431),
        [anon_sym_STAR] = ACTIONS(1433),
        [sym_identifier] = ACTIONS(1436),
        [sym_comment] = ACTIONS(67),
    },
    [526] = {
        [anon_sym_COLON] = ACTIONS(1439),
        [sym_comment] = ACTIONS(67),
    },
    [527] = {
        [sym__simple_statement] = STATE(419),
        [sym_print_statement] = STATE(352),
        [sym_expression_statement] = STATE(352),
        [sym_return_statement] = STATE(352),
        [sym_delete_statement] = STATE(352),
        [sym__suite] = STATE(528),
        [sym__expression] = STATE(421),
        [sym_binary_operator] = STATE(376),
        [sym_subscript] = STATE(376),
        [sym_call] = STATE(376),
        [anon_sym_print] = ACTIONS(1268),
        [anon_sym_return] = ACTIONS(1270),
        [anon_sym_del] = ACTIONS(1272),
        [sym_pass_statement] = ACTIONS(841),
        [sym_break_statement] = ACTIONS(841),
        [sym_continue_statement] = ACTIONS(841),
        [sym_number] = ACTIONS(819),
        [sym_identifier] = ACTIONS(843),
        [sym_comment] = ACTIONS(67),
        [sym__indent] = ACTIONS(845),
    },
    [528] = {
        [ts_builtin_sym_end] = ACTIONS(529),
        [anon_sym_SEMI] = ACTIONS(529),
        [anon_sym_print] = ACTIONS(527),
        [anon_sym_return] = ACTIONS(527),
        [anon_sym_del] = ACTIONS(527),
        [sym_pass_statement] = ACTIONS(527),
        [sym_break_statement] = ACTIONS(527),
        [sym_continue_statement] = ACTIONS(527),
        [anon_sym_if] = ACTIONS(527),
        [anon_sym_for] = ACTIONS(527),
        [anon_sym_while] = ACTIONS(527),
        [anon_sym_try] = ACTIONS(527),
        [anon_sym_with] = ACTIONS(527),
        [anon_sym_def] = ACTIONS(527),
        [anon_sym_class] = ACTIONS(527),
        [anon_sym_AT] = ACTIONS(529),
        [sym_number] = ACTIONS(527),
        [sym_identifier] = ACTIONS(531),
        [sym_comment] = ACTIONS(67),
        [sym__newline] = ACTIONS(529),
        [sym__dedent] = ACTIONS(529),
    },
    [529] = {
        [sym__simple_statement] = STATE(419),
        [sym_print_statement] = STATE(352),
        [sym_expression_statement] = STATE(352),
        [sym_return_statement] = STATE(352),
        [sym_delete_statement] = STATE(352),
        [sym__suite] = STATE(530),
        [sym__expression] = STATE(421),
        [sym_binary_operator] = STATE(376),
        [sym_subscript] = STATE(376),
        [sym_call] = STATE(376),
        [anon_sym_print] = ACTIONS(1268),
        [anon_sym_return] = ACTIONS(1270),
        [anon_sym_del] = ACTIONS(1272),
        [sym_pass_statement] = ACTIONS(841),
        [sym_break_statement] = ACTIONS(841),
        [sym_continue_statement] = ACTIONS(841),
        [sym_number] = ACTIONS(819),
        [sym_identifier] = ACTIONS(843),
        [sym_comment] = ACTIONS(67),
        [sym__indent] = ACTIONS(845),
    },
    [530] = {
        [ts_builtin_sym_end] = ACTIONS(609),
        [anon_sym_SEMI] = ACTIONS(609),
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
        [anon_sym_AT] = ACTIONS(609),
        [sym_number] = ACTIONS(607),
        [sym_identifier] = ACTIONS(611),
        [sym_comment] = ACTIONS(67),
        [sym__newline] = ACTIONS(609),
        [sym__dedent] = ACTIONS(609),
    },
    [531] = {
        [sym__simple_statement] = STATE(419),
        [sym_print_statement] = STATE(352),
        [sym_expression_statement] = STATE(352),
        [sym_return_statement] = STATE(352),
        [sym_delete_statement] = STATE(352),
        [sym__suite] = STATE(535),
        [sym__expression] = STATE(421),
        [sym_binary_operator] = STATE(376),
        [sym_subscript] = STATE(376),
        [sym_call] = STATE(376),
        [anon_sym_print] = ACTIONS(1268),
        [anon_sym_return] = ACTIONS(1270),
        [anon_sym_del] = ACTIONS(1272),
        [sym_pass_statement] = ACTIONS(841),
        [sym_break_statement] = ACTIONS(841),
        [sym_continue_statement] = ACTIONS(841),
        [sym_number] = ACTIONS(819),
        [sym_identifier] = ACTIONS(843),
        [sym_comment] = ACTIONS(67),
        [sym__indent] = ACTIONS(845),
    },
    [532] = {
        [sym_default_parameter] = STATE(186),
        [sym_list_splat_parameter] = STATE(187),
        [sym_dictionary_splat_parameter] = STATE(188),
        [sym_expression_list] = STATE(534),
        [sym__expression] = STATE(104),
        [sym_binary_operator] = STATE(32),
        [sym_subscript] = STATE(32),
        [sym_call] = STATE(32),
        [aux_sym_parameters_repeat1] = STATE(189),
        [anon_sym_RPAREN] = ACTIONS(519),
        [anon_sym_STAR] = ACTIONS(521),
        [sym_number] = ACTIONS(111),
        [sym_identifier] = ACTIONS(1442),
        [sym_comment] = ACTIONS(67),
    },
    [533] = {
        [anon_sym_COMMA] = ACTIONS(1444),
        [anon_sym_LPAREN] = ACTIONS(121),
        [anon_sym_RPAREN] = ACTIONS(1447),
        [anon_sym_EQ] = ACTIONS(543),
        [anon_sym_PLUS] = ACTIONS(121),
        [anon_sym_LBRACK] = ACTIONS(121),
        [sym_comment] = ACTIONS(67),
    },
    [534] = {
        [anon_sym_RPAREN] = ACTIONS(1125),
        [sym_comment] = ACTIONS(67),
    },
    [535] = {
        [ts_builtin_sym_end] = ACTIONS(513),
        [anon_sym_SEMI] = ACTIONS(513),
        [anon_sym_print] = ACTIONS(511),
        [anon_sym_return] = ACTIONS(511),
        [anon_sym_del] = ACTIONS(511),
        [sym_pass_statement] = ACTIONS(511),
        [sym_break_statement] = ACTIONS(511),
        [sym_continue_statement] = ACTIONS(511),
        [anon_sym_if] = ACTIONS(511),
        [anon_sym_for] = ACTIONS(511),
        [anon_sym_while] = ACTIONS(511),
        [anon_sym_try] = ACTIONS(511),
        [anon_sym_with] = ACTIONS(511),
        [anon_sym_def] = ACTIONS(511),
        [anon_sym_class] = ACTIONS(511),
        [anon_sym_AT] = ACTIONS(513),
        [sym_number] = ACTIONS(511),
        [sym_identifier] = ACTIONS(515),
        [sym_comment] = ACTIONS(67),
        [sym__newline] = ACTIONS(513),
        [sym__dedent] = ACTIONS(513),
    },
    [536] = {
        [ts_builtin_sym_end] = ACTIONS(245),
        [anon_sym_SEMI] = ACTIONS(245),
        [anon_sym_print] = ACTIONS(271),
        [anon_sym_COMMA] = ACTIONS(245),
        [anon_sym_return] = ACTIONS(271),
        [anon_sym_del] = ACTIONS(271),
        [sym_pass_statement] = ACTIONS(271),
        [sym_break_statement] = ACTIONS(271),
        [sym_continue_statement] = ACTIONS(271),
        [anon_sym_if] = ACTIONS(271),
        [anon_sym_COLON] = ACTIONS(245),
        [anon_sym_elif] = ACTIONS(271),
        [anon_sym_else] = ACTIONS(271),
        [anon_sym_for] = ACTIONS(271),
        [anon_sym_in] = ACTIONS(271),
        [anon_sym_while] = ACTIONS(271),
        [anon_sym_try] = ACTIONS(271),
        [anon_sym_except] = ACTIONS(271),
        [anon_sym_as] = ACTIONS(271),
        [anon_sym_finally] = ACTIONS(271),
        [anon_sym_with] = ACTIONS(271),
        [anon_sym_def] = ACTIONS(271),
        [anon_sym_LPAREN] = ACTIONS(1173),
        [anon_sym_RPAREN] = ACTIONS(245),
        [anon_sym_class] = ACTIONS(271),
        [anon_sym_AT] = ACTIONS(245),
        [anon_sym_PLUS] = ACTIONS(1186),
        [anon_sym_LBRACK] = ACTIONS(1189),
        [anon_sym_RBRACK] = ACTIONS(245),
        [sym_number] = ACTIONS(271),
        [sym_identifier] = ACTIONS(273),
        [sym_comment] = ACTIONS(67),
        [sym__newline] = ACTIONS(245),
        [sym__dedent] = ACTIONS(245),
    },
    [537] = {
        [anon_sym_LPAREN] = ACTIONS(1450),
        [anon_sym_DOT] = ACTIONS(1450),
        [sym_comment] = ACTIONS(67),
        [sym__newline] = ACTIONS(1450),
    },
    [538] = {
        [anon_sym_COLON] = ACTIONS(1453),
        [anon_sym_LPAREN] = ACTIONS(1455),
        [sym_comment] = ACTIONS(67),
    },
    [539] = {
        [sym_expression_list] = STATE(534),
        [sym__expression] = STATE(104),
        [sym_binary_operator] = STATE(32),
        [sym_subscript] = STATE(32),
        [sym_call] = STATE(32),
        [sym_number] = ACTIONS(111),
        [sym_identifier] = ACTIONS(111),
        [sym_comment] = ACTIONS(67),
    },
    [540] = {
        [anon_sym_COMMA] = ACTIONS(583),
        [anon_sym_RPAREN] = ACTIONS(1457),
        [sym_comment] = ACTIONS(67),
    },
    [541] = {
        [anon_sym_COMMA] = ACTIONS(1460),
        [anon_sym_LPAREN] = ACTIONS(195),
        [anon_sym_RPAREN] = ACTIONS(1460),
        [anon_sym_PLUS] = ACTIONS(197),
        [anon_sym_LBRACK] = ACTIONS(199),
        [sym_comment] = ACTIONS(67),
    },
    [542] = {
        [anon_sym_COMMA] = ACTIONS(1444),
        [anon_sym_LPAREN] = ACTIONS(121),
        [anon_sym_RPAREN] = ACTIONS(1447),
        [anon_sym_EQ] = ACTIONS(931),
        [anon_sym_PLUS] = ACTIONS(121),
        [anon_sym_LBRACK] = ACTIONS(121),
        [sym_comment] = ACTIONS(67),
    },
    [543] = {
        [aux_sym_print_statement_repeat1] = STATE(545),
        [aux_sym_call_repeat1] = STATE(407),
        [anon_sym_COMMA] = ACTIONS(1463),
        [anon_sym_LPAREN] = ACTIONS(195),
        [anon_sym_RPAREN] = ACTIONS(1465),
        [anon_sym_PLUS] = ACTIONS(197),
        [anon_sym_LBRACK] = ACTIONS(199),
        [sym_comment] = ACTIONS(67),
    },
    [544] = {
        [sym__expression] = STATE(546),
        [sym_binary_operator] = STATE(32),
        [sym_subscript] = STATE(32),
        [sym_call] = STATE(32),
        [sym_keyword_argument] = STATE(68),
        [anon_sym_RPAREN] = ACTIONS(1262),
        [sym_number] = ACTIONS(111),
        [sym_identifier] = ACTIONS(187),
        [sym_comment] = ACTIONS(67),
    },
    [545] = {
        [anon_sym_COMMA] = ACTIONS(323),
        [anon_sym_RPAREN] = ACTIONS(1236),
        [sym_comment] = ACTIONS(67),
    },
    [546] = {
        [anon_sym_COMMA] = ACTIONS(1356),
        [anon_sym_LPAREN] = ACTIONS(195),
        [anon_sym_RPAREN] = ACTIONS(1356),
        [anon_sym_PLUS] = ACTIONS(197),
        [anon_sym_LBRACK] = ACTIONS(199),
        [sym_comment] = ACTIONS(67),
    },
    [547] = {
        [sym_parameters] = STATE(391),
        [anon_sym_LPAREN] = ACTIONS(517),
        [sym_comment] = ACTIONS(67),
    },
    [548] = {
        [aux_sym_with_statement_repeat1] = STATE(404),
        [anon_sym_COMMA] = ACTIONS(585),
        [anon_sym_COLON] = ACTIONS(1468),
        [sym_comment] = ACTIONS(67),
    },
    [549] = {
        [sym__simple_statement] = STATE(419),
        [sym_print_statement] = STATE(352),
        [sym_expression_statement] = STATE(352),
        [sym_return_statement] = STATE(352),
        [sym_delete_statement] = STATE(352),
        [sym__suite] = STATE(550),
        [sym__expression] = STATE(421),
        [sym_binary_operator] = STATE(376),
        [sym_subscript] = STATE(376),
        [sym_call] = STATE(376),
        [anon_sym_print] = ACTIONS(1268),
        [anon_sym_return] = ACTIONS(1270),
        [anon_sym_del] = ACTIONS(1272),
        [sym_pass_statement] = ACTIONS(841),
        [sym_break_statement] = ACTIONS(841),
        [sym_continue_statement] = ACTIONS(841),
        [sym_number] = ACTIONS(819),
        [sym_identifier] = ACTIONS(843),
        [sym_comment] = ACTIONS(67),
        [sym__indent] = ACTIONS(845),
    },
    [550] = {
        [ts_builtin_sym_end] = ACTIONS(681),
        [anon_sym_SEMI] = ACTIONS(681),
        [anon_sym_print] = ACTIONS(679),
        [anon_sym_return] = ACTIONS(679),
        [anon_sym_del] = ACTIONS(679),
        [sym_pass_statement] = ACTIONS(679),
        [sym_break_statement] = ACTIONS(679),
        [sym_continue_statement] = ACTIONS(679),
        [anon_sym_if] = ACTIONS(679),
        [anon_sym_for] = ACTIONS(679),
        [anon_sym_while] = ACTIONS(679),
        [anon_sym_try] = ACTIONS(679),
        [anon_sym_with] = ACTIONS(679),
        [anon_sym_def] = ACTIONS(679),
        [anon_sym_class] = ACTIONS(679),
        [anon_sym_AT] = ACTIONS(681),
        [sym_number] = ACTIONS(679),
        [sym_identifier] = ACTIONS(683),
        [sym_comment] = ACTIONS(67),
        [sym__newline] = ACTIONS(681),
        [sym__dedent] = ACTIONS(681),
    },
    [551] = {
        [anon_sym_COMMA] = ACTIONS(593),
        [anon_sym_COLON] = ACTIONS(1470),
        [anon_sym_LPAREN] = ACTIONS(195),
        [anon_sym_PLUS] = ACTIONS(197),
        [anon_sym_LBRACK] = ACTIONS(199),
        [sym_comment] = ACTIONS(67),
    },
    [552] = {
        [anon_sym_COMMA] = ACTIONS(1473),
        [anon_sym_COLON] = ACTIONS(1475),
        [anon_sym_as] = ACTIONS(1473),
        [anon_sym_LPAREN] = ACTIONS(195),
        [anon_sym_PLUS] = ACTIONS(197),
        [anon_sym_LBRACK] = ACTIONS(199),
        [sym_comment] = ACTIONS(67),
    },
    [553] = {
        [sym__expression] = STATE(555),
        [sym_binary_operator] = STATE(32),
        [sym_subscript] = STATE(32),
        [sym_call] = STATE(32),
        [sym_number] = ACTIONS(111),
        [sym_identifier] = ACTIONS(111),
        [sym_comment] = ACTIONS(67),
    },
    [554] = {
        [sym__simple_statement] = STATE(419),
        [sym_print_statement] = STATE(352),
        [sym_expression_statement] = STATE(352),
        [sym_return_statement] = STATE(352),
        [sym_delete_statement] = STATE(352),
        [sym__suite] = STATE(556),
        [sym__expression] = STATE(482),
        [sym_binary_operator] = STATE(376),
        [sym_subscript] = STATE(376),
        [sym_call] = STATE(376),
        [anon_sym_print] = ACTIONS(1361),
        [anon_sym_return] = ACTIONS(1363),
        [anon_sym_del] = ACTIONS(1365),
        [sym_pass_statement] = ACTIONS(841),
        [sym_break_statement] = ACTIONS(841),
        [sym_continue_statement] = ACTIONS(841),
        [sym_number] = ACTIONS(819),
        [sym_identifier] = ACTIONS(843),
        [sym_comment] = ACTIONS(67),
        [sym__indent] = ACTIONS(845),
    },
    [555] = {
        [anon_sym_COLON] = ACTIONS(1477),
        [anon_sym_LPAREN] = ACTIONS(195),
        [anon_sym_PLUS] = ACTIONS(197),
        [anon_sym_LBRACK] = ACTIONS(199),
        [sym_comment] = ACTIONS(67),
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
        [anon_sym_else] = ACTIONS(697),
        [anon_sym_for] = ACTIONS(697),
        [anon_sym_while] = ACTIONS(697),
        [anon_sym_try] = ACTIONS(697),
        [anon_sym_except] = ACTIONS(697),
        [anon_sym_finally] = ACTIONS(697),
        [anon_sym_with] = ACTIONS(697),
        [anon_sym_def] = ACTIONS(697),
        [anon_sym_class] = ACTIONS(697),
        [anon_sym_AT] = ACTIONS(699),
        [sym_number] = ACTIONS(697),
        [sym_identifier] = ACTIONS(701),
        [sym_comment] = ACTIONS(67),
        [sym__newline] = ACTIONS(699),
        [sym__dedent] = ACTIONS(699),
    },
    [557] = {
        [sym__simple_statement] = STATE(229),
        [sym_print_statement] = STATE(227),
        [sym_expression_statement] = STATE(227),
        [sym_return_statement] = STATE(227),
        [sym_delete_statement] = STATE(227),
        [sym__suite] = STATE(558),
        [sym__expression] = STATE(231),
        [sym_binary_operator] = STATE(32),
        [sym_subscript] = STATE(32),
        [sym_call] = STATE(32),
        [anon_sym_print] = ACTIONS(615),
        [anon_sym_return] = ACTIONS(617),
        [anon_sym_del] = ACTIONS(619),
        [sym_pass_statement] = ACTIONS(621),
        [sym_break_statement] = ACTIONS(621),
        [sym_continue_statement] = ACTIONS(621),
        [sym_number] = ACTIONS(111),
        [sym_identifier] = ACTIONS(623),
        [sym_comment] = ACTIONS(67),
        [sym__indent] = ACTIONS(625),
    },
    [558] = {
        [sym_except_clause] = STATE(518),
        [sym_finally_clause] = STATE(519),
        [aux_sym_try_statement_repeat1] = STATE(403),
        [anon_sym_except] = ACTIONS(1479),
        [anon_sym_finally] = ACTIONS(1481),
        [sym_comment] = ACTIONS(67),
    },
    [559] = {
        [anon_sym_COLON] = ACTIONS(1483),
        [anon_sym_LPAREN] = ACTIONS(195),
        [anon_sym_PLUS] = ACTIONS(197),
        [anon_sym_LBRACK] = ACTIONS(199),
        [sym_comment] = ACTIONS(67),
    },
    [560] = {
        [sym__simple_statement] = STATE(419),
        [sym_print_statement] = STATE(352),
        [sym_expression_statement] = STATE(352),
        [sym_return_statement] = STATE(352),
        [sym_delete_statement] = STATE(352),
        [sym__suite] = STATE(561),
        [sym__expression] = STATE(503),
        [sym_binary_operator] = STATE(376),
        [sym_subscript] = STATE(376),
        [sym_call] = STATE(376),
        [anon_sym_print] = ACTIONS(1384),
        [anon_sym_return] = ACTIONS(1386),
        [anon_sym_del] = ACTIONS(1388),
        [sym_pass_statement] = ACTIONS(841),
        [sym_break_statement] = ACTIONS(841),
        [sym_continue_statement] = ACTIONS(841),
        [sym_number] = ACTIONS(819),
        [sym_identifier] = ACTIONS(843),
        [sym_comment] = ACTIONS(67),
        [sym__indent] = ACTIONS(845),
    },
    [561] = {
        [sym_else_clause] = STATE(562),
        [ts_builtin_sym_end] = ACTIONS(709),
        [anon_sym_SEMI] = ACTIONS(709),
        [anon_sym_print] = ACTIONS(707),
        [anon_sym_return] = ACTIONS(707),
        [anon_sym_del] = ACTIONS(707),
        [sym_pass_statement] = ACTIONS(707),
        [sym_break_statement] = ACTIONS(707),
        [sym_continue_statement] = ACTIONS(707),
        [anon_sym_if] = ACTIONS(707),
        [anon_sym_else] = ACTIONS(1244),
        [anon_sym_for] = ACTIONS(707),
        [anon_sym_while] = ACTIONS(707),
        [anon_sym_try] = ACTIONS(707),
        [anon_sym_with] = ACTIONS(707),
        [anon_sym_def] = ACTIONS(707),
        [anon_sym_class] = ACTIONS(707),
        [anon_sym_AT] = ACTIONS(709),
        [sym_number] = ACTIONS(707),
        [sym_identifier] = ACTIONS(711),
        [sym_comment] = ACTIONS(67),
        [sym__newline] = ACTIONS(709),
        [sym__dedent] = ACTIONS(709),
    },
    [562] = {
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
        [sym_number] = ACTIONS(713),
        [sym_identifier] = ACTIONS(717),
        [sym_comment] = ACTIONS(67),
        [sym__newline] = ACTIONS(715),
        [sym__dedent] = ACTIONS(715),
    },
    [563] = {
        [anon_sym_COLON] = ACTIONS(1121),
        [sym_comment] = ACTIONS(67),
    },
    [564] = {
        [anon_sym_in] = ACTIONS(1485),
        [sym_comment] = ACTIONS(67),
    },
    [565] = {
        [sym__simple_statement] = STATE(419),
        [sym_print_statement] = STATE(352),
        [sym_expression_statement] = STATE(352),
        [sym_return_statement] = STATE(352),
        [sym_delete_statement] = STATE(352),
        [sym__suite] = STATE(456),
        [sym__expression] = STATE(569),
        [sym_binary_operator] = STATE(376),
        [sym_subscript] = STATE(376),
        [sym_call] = STATE(376),
        [anon_sym_print] = ACTIONS(1487),
        [anon_sym_return] = ACTIONS(1489),
        [anon_sym_del] = ACTIONS(1491),
        [sym_pass_statement] = ACTIONS(841),
        [sym_break_statement] = ACTIONS(841),
        [sym_continue_statement] = ACTIONS(841),
        [sym_number] = ACTIONS(819),
        [sym_identifier] = ACTIONS(843),
        [sym_comment] = ACTIONS(67),
        [sym__indent] = ACTIONS(845),
    },
    [566] = {
        [sym__expression] = STATE(580),
        [sym_binary_operator] = STATE(376),
        [sym_subscript] = STATE(376),
        [sym_call] = STATE(376),
        [sym_number] = ACTIONS(819),
        [sym_identifier] = ACTIONS(819),
        [sym_comment] = ACTIONS(67),
    },
    [567] = {
        [sym_expression_list] = STATE(445),
        [sym__expression] = STATE(572),
        [sym_binary_operator] = STATE(376),
        [sym_subscript] = STATE(376),
        [sym_call] = STATE(376),
        [sym_number] = ACTIONS(819),
        [sym_identifier] = ACTIONS(819),
        [sym_comment] = ACTIONS(67),
    },
    [568] = {
        [sym_expression_list] = STATE(436),
        [sym__expression] = STATE(572),
        [sym_binary_operator] = STATE(376),
        [sym_subscript] = STATE(376),
        [sym_call] = STATE(376),
        [sym_number] = ACTIONS(819),
        [sym_identifier] = ACTIONS(819),
        [sym_comment] = ACTIONS(67),
    },
    [569] = {
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
        [anon_sym_finally] = ACTIONS(153),
        [anon_sym_with] = ACTIONS(153),
        [anon_sym_def] = ACTIONS(153),
        [anon_sym_LPAREN] = ACTIONS(1274),
        [anon_sym_class] = ACTIONS(153),
        [anon_sym_AT] = ACTIONS(151),
        [anon_sym_PLUS] = ACTIONS(1493),
        [anon_sym_LBRACK] = ACTIONS(1278),
        [sym_number] = ACTIONS(153),
        [sym_identifier] = ACTIONS(161),
        [sym_comment] = ACTIONS(67),
        [sym__newline] = ACTIONS(151),
        [sym__dedent] = ACTIONS(151),
    },
    [570] = {
        [sym__expression] = STATE(571),
        [sym_binary_operator] = STATE(376),
        [sym_subscript] = STATE(376),
        [sym_call] = STATE(376),
        [sym_number] = ACTIONS(819),
        [sym_identifier] = ACTIONS(819),
        [sym_comment] = ACTIONS(67),
    },
    [571] = {
        [ts_builtin_sym_end] = ACTIONS(245),
        [anon_sym_SEMI] = ACTIONS(245),
        [anon_sym_print] = ACTIONS(271),
        [anon_sym_return] = ACTIONS(271),
        [anon_sym_del] = ACTIONS(271),
        [sym_pass_statement] = ACTIONS(271),
        [sym_break_statement] = ACTIONS(271),
        [sym_continue_statement] = ACTIONS(271),
        [anon_sym_if] = ACTIONS(271),
        [anon_sym_for] = ACTIONS(271),
        [anon_sym_while] = ACTIONS(271),
        [anon_sym_try] = ACTIONS(271),
        [anon_sym_finally] = ACTIONS(271),
        [anon_sym_with] = ACTIONS(271),
        [anon_sym_def] = ACTIONS(271),
        [anon_sym_LPAREN] = ACTIONS(1173),
        [anon_sym_class] = ACTIONS(271),
        [anon_sym_AT] = ACTIONS(245),
        [anon_sym_PLUS] = ACTIONS(1495),
        [anon_sym_LBRACK] = ACTIONS(1189),
        [sym_number] = ACTIONS(271),
        [sym_identifier] = ACTIONS(273),
        [sym_comment] = ACTIONS(67),
        [sym__newline] = ACTIONS(245),
        [sym__dedent] = ACTIONS(245),
    },
    [572] = {
        [aux_sym_print_statement_repeat1] = STATE(575),
        [ts_builtin_sym_end] = ACTIONS(353),
        [anon_sym_SEMI] = ACTIONS(353),
        [anon_sym_print] = ACTIONS(473),
        [anon_sym_COMMA] = ACTIONS(1498),
        [anon_sym_return] = ACTIONS(473),
        [anon_sym_del] = ACTIONS(473),
        [sym_pass_statement] = ACTIONS(473),
        [sym_break_statement] = ACTIONS(473),
        [sym_continue_statement] = ACTIONS(473),
        [anon_sym_if] = ACTIONS(473),
        [anon_sym_for] = ACTIONS(473),
        [anon_sym_while] = ACTIONS(473),
        [anon_sym_try] = ACTIONS(473),
        [anon_sym_finally] = ACTIONS(473),
        [anon_sym_with] = ACTIONS(473),
        [anon_sym_def] = ACTIONS(473),
        [anon_sym_LPAREN] = ACTIONS(1274),
        [anon_sym_class] = ACTIONS(473),
        [anon_sym_AT] = ACTIONS(353),
        [anon_sym_PLUS] = ACTIONS(1500),
        [anon_sym_LBRACK] = ACTIONS(1278),
        [sym_number] = ACTIONS(473),
        [sym_identifier] = ACTIONS(477),
        [sym_comment] = ACTIONS(67),
        [sym__newline] = ACTIONS(353),
        [sym__dedent] = ACTIONS(353),
    },
    [573] = {
        [sym__expression] = STATE(579),
        [sym_binary_operator] = STATE(376),
        [sym_subscript] = STATE(376),
        [sym_call] = STATE(376),
        [sym_number] = ACTIONS(819),
        [sym_identifier] = ACTIONS(819),
        [sym_comment] = ACTIONS(67),
    },
    [574] = {
        [sym__expression] = STATE(578),
        [sym_binary_operator] = STATE(376),
        [sym_subscript] = STATE(376),
        [sym_call] = STATE(376),
        [sym_number] = ACTIONS(819),
        [sym_identifier] = ACTIONS(819),
        [sym_comment] = ACTIONS(67),
    },
    [575] = {
        [ts_builtin_sym_end] = ACTIONS(355),
        [anon_sym_SEMI] = ACTIONS(355),
        [anon_sym_print] = ACTIONS(479),
        [anon_sym_COMMA] = ACTIONS(1502),
        [anon_sym_return] = ACTIONS(479),
        [anon_sym_del] = ACTIONS(479),
        [sym_pass_statement] = ACTIONS(479),
        [sym_break_statement] = ACTIONS(479),
        [sym_continue_statement] = ACTIONS(479),
        [anon_sym_if] = ACTIONS(479),
        [anon_sym_for] = ACTIONS(479),
        [anon_sym_while] = ACTIONS(479),
        [anon_sym_try] = ACTIONS(479),
        [anon_sym_finally] = ACTIONS(479),
        [anon_sym_with] = ACTIONS(479),
        [anon_sym_def] = ACTIONS(479),
        [anon_sym_class] = ACTIONS(479),
        [anon_sym_AT] = ACTIONS(355),
        [sym_number] = ACTIONS(479),
        [sym_identifier] = ACTIONS(483),
        [sym_comment] = ACTIONS(67),
        [sym__newline] = ACTIONS(355),
        [sym__dedent] = ACTIONS(355),
    },
    [576] = {
        [sym__expression] = STATE(577),
        [sym_binary_operator] = STATE(376),
        [sym_subscript] = STATE(376),
        [sym_call] = STATE(376),
        [sym_number] = ACTIONS(819),
        [sym_identifier] = ACTIONS(819),
        [sym_comment] = ACTIONS(67),
    },
    [577] = {
        [ts_builtin_sym_end] = ACTIONS(329),
        [anon_sym_SEMI] = ACTIONS(329),
        [anon_sym_print] = ACTIONS(485),
        [anon_sym_COMMA] = ACTIONS(329),
        [anon_sym_return] = ACTIONS(485),
        [anon_sym_del] = ACTIONS(485),
        [sym_pass_statement] = ACTIONS(485),
        [sym_break_statement] = ACTIONS(485),
        [sym_continue_statement] = ACTIONS(485),
        [anon_sym_if] = ACTIONS(485),
        [anon_sym_for] = ACTIONS(485),
        [anon_sym_while] = ACTIONS(485),
        [anon_sym_try] = ACTIONS(485),
        [anon_sym_finally] = ACTIONS(485),
        [anon_sym_with] = ACTIONS(485),
        [anon_sym_def] = ACTIONS(485),
        [anon_sym_LPAREN] = ACTIONS(1274),
        [anon_sym_class] = ACTIONS(485),
        [anon_sym_AT] = ACTIONS(329),
        [anon_sym_PLUS] = ACTIONS(1500),
        [anon_sym_LBRACK] = ACTIONS(1278),
        [sym_number] = ACTIONS(485),
        [sym_identifier] = ACTIONS(487),
        [sym_comment] = ACTIONS(67),
        [sym__newline] = ACTIONS(329),
        [sym__dedent] = ACTIONS(329),
    },
    [578] = {
        [ts_builtin_sym_end] = ACTIONS(245),
        [anon_sym_SEMI] = ACTIONS(245),
        [anon_sym_print] = ACTIONS(271),
        [anon_sym_COMMA] = ACTIONS(245),
        [anon_sym_return] = ACTIONS(271),
        [anon_sym_del] = ACTIONS(271),
        [sym_pass_statement] = ACTIONS(271),
        [sym_break_statement] = ACTIONS(271),
        [sym_continue_statement] = ACTIONS(271),
        [anon_sym_if] = ACTIONS(271),
        [anon_sym_for] = ACTIONS(271),
        [anon_sym_while] = ACTIONS(271),
        [anon_sym_try] = ACTIONS(271),
        [anon_sym_finally] = ACTIONS(271),
        [anon_sym_with] = ACTIONS(271),
        [anon_sym_def] = ACTIONS(271),
        [anon_sym_LPAREN] = ACTIONS(1173),
        [anon_sym_class] = ACTIONS(271),
        [anon_sym_AT] = ACTIONS(245),
        [anon_sym_PLUS] = ACTIONS(1504),
        [anon_sym_LBRACK] = ACTIONS(1189),
        [sym_number] = ACTIONS(271),
        [sym_identifier] = ACTIONS(273),
        [sym_comment] = ACTIONS(67),
        [sym__newline] = ACTIONS(245),
        [sym__dedent] = ACTIONS(245),
    },
    [579] = {
        [ts_builtin_sym_end] = ACTIONS(331),
        [anon_sym_SEMI] = ACTIONS(331),
        [anon_sym_print] = ACTIONS(489),
        [anon_sym_COMMA] = ACTIONS(331),
        [anon_sym_return] = ACTIONS(489),
        [anon_sym_del] = ACTIONS(489),
        [sym_pass_statement] = ACTIONS(489),
        [sym_break_statement] = ACTIONS(489),
        [sym_continue_statement] = ACTIONS(489),
        [anon_sym_if] = ACTIONS(489),
        [anon_sym_for] = ACTIONS(489),
        [anon_sym_while] = ACTIONS(489),
        [anon_sym_try] = ACTIONS(489),
        [anon_sym_finally] = ACTIONS(489),
        [anon_sym_with] = ACTIONS(489),
        [anon_sym_def] = ACTIONS(489),
        [anon_sym_LPAREN] = ACTIONS(1274),
        [anon_sym_class] = ACTIONS(489),
        [anon_sym_AT] = ACTIONS(331),
        [anon_sym_PLUS] = ACTIONS(1500),
        [anon_sym_LBRACK] = ACTIONS(1278),
        [sym_number] = ACTIONS(489),
        [sym_identifier] = ACTIONS(491),
        [sym_comment] = ACTIONS(67),
        [sym__newline] = ACTIONS(331),
        [sym__dedent] = ACTIONS(331),
    },
    [580] = {
        [aux_sym_print_statement_repeat1] = STATE(581),
        [ts_builtin_sym_end] = ACTIONS(501),
        [anon_sym_SEMI] = ACTIONS(501),
        [anon_sym_print] = ACTIONS(499),
        [anon_sym_COMMA] = ACTIONS(1498),
        [anon_sym_return] = ACTIONS(499),
        [anon_sym_del] = ACTIONS(499),
        [sym_pass_statement] = ACTIONS(499),
        [sym_break_statement] = ACTIONS(499),
        [sym_continue_statement] = ACTIONS(499),
        [anon_sym_if] = ACTIONS(499),
        [anon_sym_for] = ACTIONS(499),
        [anon_sym_while] = ACTIONS(499),
        [anon_sym_try] = ACTIONS(499),
        [anon_sym_finally] = ACTIONS(499),
        [anon_sym_with] = ACTIONS(499),
        [anon_sym_def] = ACTIONS(499),
        [anon_sym_LPAREN] = ACTIONS(1274),
        [anon_sym_class] = ACTIONS(499),
        [anon_sym_AT] = ACTIONS(501),
        [anon_sym_PLUS] = ACTIONS(1500),
        [anon_sym_LBRACK] = ACTIONS(1278),
        [sym_number] = ACTIONS(499),
        [sym_identifier] = ACTIONS(503),
        [sym_comment] = ACTIONS(67),
        [sym__newline] = ACTIONS(501),
        [sym__dedent] = ACTIONS(501),
    },
    [581] = {
        [ts_builtin_sym_end] = ACTIONS(507),
        [anon_sym_SEMI] = ACTIONS(507),
        [anon_sym_print] = ACTIONS(505),
        [anon_sym_COMMA] = ACTIONS(1502),
        [anon_sym_return] = ACTIONS(505),
        [anon_sym_del] = ACTIONS(505),
        [sym_pass_statement] = ACTIONS(505),
        [sym_break_statement] = ACTIONS(505),
        [sym_continue_statement] = ACTIONS(505),
        [anon_sym_if] = ACTIONS(505),
        [anon_sym_for] = ACTIONS(505),
        [anon_sym_while] = ACTIONS(505),
        [anon_sym_try] = ACTIONS(505),
        [anon_sym_finally] = ACTIONS(505),
        [anon_sym_with] = ACTIONS(505),
        [anon_sym_def] = ACTIONS(505),
        [anon_sym_class] = ACTIONS(505),
        [anon_sym_AT] = ACTIONS(507),
        [sym_number] = ACTIONS(505),
        [sym_identifier] = ACTIONS(509),
        [sym_comment] = ACTIONS(67),
        [sym__newline] = ACTIONS(507),
        [sym__dedent] = ACTIONS(507),
    },
    [582] = {
        [anon_sym_COLON] = ACTIONS(1507),
        [anon_sym_LPAREN] = ACTIONS(195),
        [anon_sym_PLUS] = ACTIONS(197),
        [anon_sym_LBRACK] = ACTIONS(199),
        [sym_comment] = ACTIONS(67),
    },
    [583] = {
        [sym__simple_statement] = STATE(419),
        [sym_print_statement] = STATE(352),
        [sym_expression_statement] = STATE(352),
        [sym_return_statement] = STATE(352),
        [sym_delete_statement] = STATE(352),
        [sym__suite] = STATE(587),
        [sym__expression] = STATE(588),
        [sym_binary_operator] = STATE(376),
        [sym_subscript] = STATE(376),
        [sym_call] = STATE(376),
        [anon_sym_print] = ACTIONS(1509),
        [anon_sym_return] = ACTIONS(1511),
        [anon_sym_del] = ACTIONS(1513),
        [sym_pass_statement] = ACTIONS(841),
        [sym_break_statement] = ACTIONS(841),
        [sym_continue_statement] = ACTIONS(841),
        [sym_number] = ACTIONS(819),
        [sym_identifier] = ACTIONS(843),
        [sym_comment] = ACTIONS(67),
        [sym__indent] = ACTIONS(845),
    },
    [584] = {
        [sym__expression] = STATE(599),
        [sym_binary_operator] = STATE(376),
        [sym_subscript] = STATE(376),
        [sym_call] = STATE(376),
        [sym_number] = ACTIONS(819),
        [sym_identifier] = ACTIONS(819),
        [sym_comment] = ACTIONS(67),
    },
    [585] = {
        [sym_expression_list] = STATE(445),
        [sym__expression] = STATE(591),
        [sym_binary_operator] = STATE(376),
        [sym_subscript] = STATE(376),
        [sym_call] = STATE(376),
        [sym_number] = ACTIONS(819),
        [sym_identifier] = ACTIONS(819),
        [sym_comment] = ACTIONS(67),
    },
    [586] = {
        [sym_expression_list] = STATE(436),
        [sym__expression] = STATE(591),
        [sym_binary_operator] = STATE(376),
        [sym_subscript] = STATE(376),
        [sym_call] = STATE(376),
        [sym_number] = ACTIONS(819),
        [sym_identifier] = ACTIONS(819),
        [sym_comment] = ACTIONS(67),
    },
    [587] = {
        [ts_builtin_sym_end] = ACTIONS(773),
        [anon_sym_SEMI] = ACTIONS(773),
        [anon_sym_print] = ACTIONS(771),
        [anon_sym_return] = ACTIONS(771),
        [anon_sym_del] = ACTIONS(771),
        [sym_pass_statement] = ACTIONS(771),
        [sym_break_statement] = ACTIONS(771),
        [sym_continue_statement] = ACTIONS(771),
        [anon_sym_if] = ACTIONS(771),
        [anon_sym_elif] = ACTIONS(771),
        [anon_sym_else] = ACTIONS(771),
        [anon_sym_for] = ACTIONS(771),
        [anon_sym_while] = ACTIONS(771),
        [anon_sym_try] = ACTIONS(771),
        [anon_sym_with] = ACTIONS(771),
        [anon_sym_def] = ACTIONS(771),
        [anon_sym_class] = ACTIONS(771),
        [anon_sym_AT] = ACTIONS(773),
        [sym_number] = ACTIONS(771),
        [sym_identifier] = ACTIONS(775),
        [sym_comment] = ACTIONS(67),
        [sym__newline] = ACTIONS(773),
        [sym__dedent] = ACTIONS(773),
    },
    [588] = {
        [ts_builtin_sym_end] = ACTIONS(151),
        [anon_sym_SEMI] = ACTIONS(151),
        [anon_sym_print] = ACTIONS(153),
        [anon_sym_return] = ACTIONS(153),
        [anon_sym_del] = ACTIONS(153),
        [sym_pass_statement] = ACTIONS(153),
        [sym_break_statement] = ACTIONS(153),
        [sym_continue_statement] = ACTIONS(153),
        [anon_sym_if] = ACTIONS(153),
        [anon_sym_elif] = ACTIONS(153),
        [anon_sym_else] = ACTIONS(153),
        [anon_sym_for] = ACTIONS(153),
        [anon_sym_while] = ACTIONS(153),
        [anon_sym_try] = ACTIONS(153),
        [anon_sym_with] = ACTIONS(153),
        [anon_sym_def] = ACTIONS(153),
        [anon_sym_LPAREN] = ACTIONS(1274),
        [anon_sym_class] = ACTIONS(153),
        [anon_sym_AT] = ACTIONS(151),
        [anon_sym_PLUS] = ACTIONS(1515),
        [anon_sym_LBRACK] = ACTIONS(1278),
        [sym_number] = ACTIONS(153),
        [sym_identifier] = ACTIONS(161),
        [sym_comment] = ACTIONS(67),
        [sym__newline] = ACTIONS(151),
        [sym__dedent] = ACTIONS(151),
    },
    [589] = {
        [sym__expression] = STATE(590),
        [sym_binary_operator] = STATE(376),
        [sym_subscript] = STATE(376),
        [sym_call] = STATE(376),
        [sym_number] = ACTIONS(819),
        [sym_identifier] = ACTIONS(819),
        [sym_comment] = ACTIONS(67),
    },
    [590] = {
        [ts_builtin_sym_end] = ACTIONS(245),
        [anon_sym_SEMI] = ACTIONS(245),
        [anon_sym_print] = ACTIONS(271),
        [anon_sym_return] = ACTIONS(271),
        [anon_sym_del] = ACTIONS(271),
        [sym_pass_statement] = ACTIONS(271),
        [sym_break_statement] = ACTIONS(271),
        [sym_continue_statement] = ACTIONS(271),
        [anon_sym_if] = ACTIONS(271),
        [anon_sym_elif] = ACTIONS(271),
        [anon_sym_else] = ACTIONS(271),
        [anon_sym_for] = ACTIONS(271),
        [anon_sym_while] = ACTIONS(271),
        [anon_sym_try] = ACTIONS(271),
        [anon_sym_with] = ACTIONS(271),
        [anon_sym_def] = ACTIONS(271),
        [anon_sym_LPAREN] = ACTIONS(1173),
        [anon_sym_class] = ACTIONS(271),
        [anon_sym_AT] = ACTIONS(245),
        [anon_sym_PLUS] = ACTIONS(1517),
        [anon_sym_LBRACK] = ACTIONS(1189),
        [sym_number] = ACTIONS(271),
        [sym_identifier] = ACTIONS(273),
        [sym_comment] = ACTIONS(67),
        [sym__newline] = ACTIONS(245),
        [sym__dedent] = ACTIONS(245),
    },
    [591] = {
        [aux_sym_print_statement_repeat1] = STATE(594),
        [ts_builtin_sym_end] = ACTIONS(353),
        [anon_sym_SEMI] = ACTIONS(353),
        [anon_sym_print] = ACTIONS(473),
        [anon_sym_COMMA] = ACTIONS(1520),
        [anon_sym_return] = ACTIONS(473),
        [anon_sym_del] = ACTIONS(473),
        [sym_pass_statement] = ACTIONS(473),
        [sym_break_statement] = ACTIONS(473),
        [sym_continue_statement] = ACTIONS(473),
        [anon_sym_if] = ACTIONS(473),
        [anon_sym_elif] = ACTIONS(473),
        [anon_sym_else] = ACTIONS(473),
        [anon_sym_for] = ACTIONS(473),
        [anon_sym_while] = ACTIONS(473),
        [anon_sym_try] = ACTIONS(473),
        [anon_sym_with] = ACTIONS(473),
        [anon_sym_def] = ACTIONS(473),
        [anon_sym_LPAREN] = ACTIONS(1274),
        [anon_sym_class] = ACTIONS(473),
        [anon_sym_AT] = ACTIONS(353),
        [anon_sym_PLUS] = ACTIONS(1522),
        [anon_sym_LBRACK] = ACTIONS(1278),
        [sym_number] = ACTIONS(473),
        [sym_identifier] = ACTIONS(477),
        [sym_comment] = ACTIONS(67),
        [sym__newline] = ACTIONS(353),
        [sym__dedent] = ACTIONS(353),
    },
    [592] = {
        [sym__expression] = STATE(598),
        [sym_binary_operator] = STATE(376),
        [sym_subscript] = STATE(376),
        [sym_call] = STATE(376),
        [sym_number] = ACTIONS(819),
        [sym_identifier] = ACTIONS(819),
        [sym_comment] = ACTIONS(67),
    },
    [593] = {
        [sym__expression] = STATE(597),
        [sym_binary_operator] = STATE(376),
        [sym_subscript] = STATE(376),
        [sym_call] = STATE(376),
        [sym_number] = ACTIONS(819),
        [sym_identifier] = ACTIONS(819),
        [sym_comment] = ACTIONS(67),
    },
    [594] = {
        [ts_builtin_sym_end] = ACTIONS(355),
        [anon_sym_SEMI] = ACTIONS(355),
        [anon_sym_print] = ACTIONS(479),
        [anon_sym_COMMA] = ACTIONS(1524),
        [anon_sym_return] = ACTIONS(479),
        [anon_sym_del] = ACTIONS(479),
        [sym_pass_statement] = ACTIONS(479),
        [sym_break_statement] = ACTIONS(479),
        [sym_continue_statement] = ACTIONS(479),
        [anon_sym_if] = ACTIONS(479),
        [anon_sym_elif] = ACTIONS(479),
        [anon_sym_else] = ACTIONS(479),
        [anon_sym_for] = ACTIONS(479),
        [anon_sym_while] = ACTIONS(479),
        [anon_sym_try] = ACTIONS(479),
        [anon_sym_with] = ACTIONS(479),
        [anon_sym_def] = ACTIONS(479),
        [anon_sym_class] = ACTIONS(479),
        [anon_sym_AT] = ACTIONS(355),
        [sym_number] = ACTIONS(479),
        [sym_identifier] = ACTIONS(483),
        [sym_comment] = ACTIONS(67),
        [sym__newline] = ACTIONS(355),
        [sym__dedent] = ACTIONS(355),
    },
    [595] = {
        [sym__expression] = STATE(596),
        [sym_binary_operator] = STATE(376),
        [sym_subscript] = STATE(376),
        [sym_call] = STATE(376),
        [sym_number] = ACTIONS(819),
        [sym_identifier] = ACTIONS(819),
        [sym_comment] = ACTIONS(67),
    },
    [596] = {
        [ts_builtin_sym_end] = ACTIONS(329),
        [anon_sym_SEMI] = ACTIONS(329),
        [anon_sym_print] = ACTIONS(485),
        [anon_sym_COMMA] = ACTIONS(329),
        [anon_sym_return] = ACTIONS(485),
        [anon_sym_del] = ACTIONS(485),
        [sym_pass_statement] = ACTIONS(485),
        [sym_break_statement] = ACTIONS(485),
        [sym_continue_statement] = ACTIONS(485),
        [anon_sym_if] = ACTIONS(485),
        [anon_sym_elif] = ACTIONS(485),
        [anon_sym_else] = ACTIONS(485),
        [anon_sym_for] = ACTIONS(485),
        [anon_sym_while] = ACTIONS(485),
        [anon_sym_try] = ACTIONS(485),
        [anon_sym_with] = ACTIONS(485),
        [anon_sym_def] = ACTIONS(485),
        [anon_sym_LPAREN] = ACTIONS(1274),
        [anon_sym_class] = ACTIONS(485),
        [anon_sym_AT] = ACTIONS(329),
        [anon_sym_PLUS] = ACTIONS(1522),
        [anon_sym_LBRACK] = ACTIONS(1278),
        [sym_number] = ACTIONS(485),
        [sym_identifier] = ACTIONS(487),
        [sym_comment] = ACTIONS(67),
        [sym__newline] = ACTIONS(329),
        [sym__dedent] = ACTIONS(329),
    },
    [597] = {
        [ts_builtin_sym_end] = ACTIONS(245),
        [anon_sym_SEMI] = ACTIONS(245),
        [anon_sym_print] = ACTIONS(271),
        [anon_sym_COMMA] = ACTIONS(245),
        [anon_sym_return] = ACTIONS(271),
        [anon_sym_del] = ACTIONS(271),
        [sym_pass_statement] = ACTIONS(271),
        [sym_break_statement] = ACTIONS(271),
        [sym_continue_statement] = ACTIONS(271),
        [anon_sym_if] = ACTIONS(271),
        [anon_sym_elif] = ACTIONS(271),
        [anon_sym_else] = ACTIONS(271),
        [anon_sym_for] = ACTIONS(271),
        [anon_sym_while] = ACTIONS(271),
        [anon_sym_try] = ACTIONS(271),
        [anon_sym_with] = ACTIONS(271),
        [anon_sym_def] = ACTIONS(271),
        [anon_sym_LPAREN] = ACTIONS(1173),
        [anon_sym_class] = ACTIONS(271),
        [anon_sym_AT] = ACTIONS(245),
        [anon_sym_PLUS] = ACTIONS(1526),
        [anon_sym_LBRACK] = ACTIONS(1189),
        [sym_number] = ACTIONS(271),
        [sym_identifier] = ACTIONS(273),
        [sym_comment] = ACTIONS(67),
        [sym__newline] = ACTIONS(245),
        [sym__dedent] = ACTIONS(245),
    },
    [598] = {
        [ts_builtin_sym_end] = ACTIONS(331),
        [anon_sym_SEMI] = ACTIONS(331),
        [anon_sym_print] = ACTIONS(489),
        [anon_sym_COMMA] = ACTIONS(331),
        [anon_sym_return] = ACTIONS(489),
        [anon_sym_del] = ACTIONS(489),
        [sym_pass_statement] = ACTIONS(489),
        [sym_break_statement] = ACTIONS(489),
        [sym_continue_statement] = ACTIONS(489),
        [anon_sym_if] = ACTIONS(489),
        [anon_sym_elif] = ACTIONS(489),
        [anon_sym_else] = ACTIONS(489),
        [anon_sym_for] = ACTIONS(489),
        [anon_sym_while] = ACTIONS(489),
        [anon_sym_try] = ACTIONS(489),
        [anon_sym_with] = ACTIONS(489),
        [anon_sym_def] = ACTIONS(489),
        [anon_sym_LPAREN] = ACTIONS(1274),
        [anon_sym_class] = ACTIONS(489),
        [anon_sym_AT] = ACTIONS(331),
        [anon_sym_PLUS] = ACTIONS(1522),
        [anon_sym_LBRACK] = ACTIONS(1278),
        [sym_number] = ACTIONS(489),
        [sym_identifier] = ACTIONS(491),
        [sym_comment] = ACTIONS(67),
        [sym__newline] = ACTIONS(331),
        [sym__dedent] = ACTIONS(331),
    },
    [599] = {
        [aux_sym_print_statement_repeat1] = STATE(600),
        [ts_builtin_sym_end] = ACTIONS(501),
        [anon_sym_SEMI] = ACTIONS(501),
        [anon_sym_print] = ACTIONS(499),
        [anon_sym_COMMA] = ACTIONS(1520),
        [anon_sym_return] = ACTIONS(499),
        [anon_sym_del] = ACTIONS(499),
        [sym_pass_statement] = ACTIONS(499),
        [sym_break_statement] = ACTIONS(499),
        [sym_continue_statement] = ACTIONS(499),
        [anon_sym_if] = ACTIONS(499),
        [anon_sym_elif] = ACTIONS(499),
        [anon_sym_else] = ACTIONS(499),
        [anon_sym_for] = ACTIONS(499),
        [anon_sym_while] = ACTIONS(499),
        [anon_sym_try] = ACTIONS(499),
        [anon_sym_with] = ACTIONS(499),
        [anon_sym_def] = ACTIONS(499),
        [anon_sym_LPAREN] = ACTIONS(1274),
        [anon_sym_class] = ACTIONS(499),
        [anon_sym_AT] = ACTIONS(501),
        [anon_sym_PLUS] = ACTIONS(1522),
        [anon_sym_LBRACK] = ACTIONS(1278),
        [sym_number] = ACTIONS(499),
        [sym_identifier] = ACTIONS(503),
        [sym_comment] = ACTIONS(67),
        [sym__newline] = ACTIONS(501),
        [sym__dedent] = ACTIONS(501),
    },
    [600] = {
        [ts_builtin_sym_end] = ACTIONS(507),
        [anon_sym_SEMI] = ACTIONS(507),
        [anon_sym_print] = ACTIONS(505),
        [anon_sym_COMMA] = ACTIONS(1524),
        [anon_sym_return] = ACTIONS(505),
        [anon_sym_del] = ACTIONS(505),
        [sym_pass_statement] = ACTIONS(505),
        [sym_break_statement] = ACTIONS(505),
        [sym_continue_statement] = ACTIONS(505),
        [anon_sym_if] = ACTIONS(505),
        [anon_sym_elif] = ACTIONS(505),
        [anon_sym_else] = ACTIONS(505),
        [anon_sym_for] = ACTIONS(505),
        [anon_sym_while] = ACTIONS(505),
        [anon_sym_try] = ACTIONS(505),
        [anon_sym_with] = ACTIONS(505),
        [anon_sym_def] = ACTIONS(505),
        [anon_sym_class] = ACTIONS(505),
        [anon_sym_AT] = ACTIONS(507),
        [sym_number] = ACTIONS(505),
        [sym_identifier] = ACTIONS(509),
        [sym_comment] = ACTIONS(67),
        [sym__newline] = ACTIONS(507),
        [sym__dedent] = ACTIONS(507),
    },
    [601] = {
        [anon_sym_COLON] = ACTIONS(1529),
        [anon_sym_LPAREN] = ACTIONS(195),
        [anon_sym_PLUS] = ACTIONS(197),
        [anon_sym_LBRACK] = ACTIONS(199),
        [sym_comment] = ACTIONS(67),
    },
    [602] = {
        [sym__simple_statement] = STATE(419),
        [sym_print_statement] = STATE(352),
        [sym_expression_statement] = STATE(352),
        [sym_return_statement] = STATE(352),
        [sym_delete_statement] = STATE(352),
        [sym__suite] = STATE(603),
        [sym__expression] = STATE(588),
        [sym_binary_operator] = STATE(376),
        [sym_subscript] = STATE(376),
        [sym_call] = STATE(376),
        [anon_sym_print] = ACTIONS(1509),
        [anon_sym_return] = ACTIONS(1511),
        [anon_sym_del] = ACTIONS(1513),
        [sym_pass_statement] = ACTIONS(841),
        [sym_break_statement] = ACTIONS(841),
        [sym_continue_statement] = ACTIONS(841),
        [sym_number] = ACTIONS(819),
        [sym_identifier] = ACTIONS(843),
        [sym_comment] = ACTIONS(67),
        [sym__indent] = ACTIONS(845),
    },
    [603] = {
        [sym_elif_clause] = STATE(471),
        [sym_else_clause] = STATE(604),
        [aux_sym_if_statement_repeat1] = STATE(402),
        [ts_builtin_sym_end] = ACTIONS(741),
        [anon_sym_SEMI] = ACTIONS(741),
        [anon_sym_print] = ACTIONS(737),
        [anon_sym_return] = ACTIONS(737),
        [anon_sym_del] = ACTIONS(737),
        [sym_pass_statement] = ACTIONS(737),
        [sym_break_statement] = ACTIONS(737),
        [sym_continue_statement] = ACTIONS(737),
        [anon_sym_if] = ACTIONS(737),
        [anon_sym_elif] = ACTIONS(1242),
        [anon_sym_else] = ACTIONS(1244),
        [anon_sym_for] = ACTIONS(737),
        [anon_sym_while] = ACTIONS(737),
        [anon_sym_try] = ACTIONS(737),
        [anon_sym_with] = ACTIONS(737),
        [anon_sym_def] = ACTIONS(737),
        [anon_sym_class] = ACTIONS(737),
        [anon_sym_AT] = ACTIONS(741),
        [sym_number] = ACTIONS(737),
        [sym_identifier] = ACTIONS(743),
        [sym_comment] = ACTIONS(67),
        [sym__newline] = ACTIONS(741),
        [sym__dedent] = ACTIONS(741),
    },
    [604] = {
        [ts_builtin_sym_end] = ACTIONS(753),
        [anon_sym_SEMI] = ACTIONS(753),
        [anon_sym_print] = ACTIONS(751),
        [anon_sym_return] = ACTIONS(751),
        [anon_sym_del] = ACTIONS(751),
        [sym_pass_statement] = ACTIONS(751),
        [sym_break_statement] = ACTIONS(751),
        [sym_continue_statement] = ACTIONS(751),
        [anon_sym_if] = ACTIONS(751),
        [anon_sym_for] = ACTIONS(751),
        [anon_sym_while] = ACTIONS(751),
        [anon_sym_try] = ACTIONS(751),
        [anon_sym_with] = ACTIONS(751),
        [anon_sym_def] = ACTIONS(751),
        [anon_sym_class] = ACTIONS(751),
        [anon_sym_AT] = ACTIONS(753),
        [sym_number] = ACTIONS(751),
        [sym_identifier] = ACTIONS(755),
        [sym_comment] = ACTIONS(67),
        [sym__newline] = ACTIONS(753),
        [sym__dedent] = ACTIONS(753),
    },
    [605] = {
        [aux_sym_print_statement_repeat1] = STATE(608),
        [ts_builtin_sym_end] = ACTIONS(353),
        [anon_sym_SEMI] = ACTIONS(353),
        [anon_sym_print] = ACTIONS(473),
        [anon_sym_COMMA] = ACTIONS(1531),
        [anon_sym_return] = ACTIONS(473),
        [anon_sym_del] = ACTIONS(473),
        [sym_pass_statement] = ACTIONS(473),
        [sym_break_statement] = ACTIONS(473),
        [sym_continue_statement] = ACTIONS(473),
        [anon_sym_if] = ACTIONS(473),
        [anon_sym_elif] = ACTIONS(473),
        [anon_sym_else] = ACTIONS(473),
        [anon_sym_for] = ACTIONS(473),
        [anon_sym_while] = ACTIONS(473),
        [anon_sym_try] = ACTIONS(473),
        [anon_sym_except] = ACTIONS(473),
        [anon_sym_finally] = ACTIONS(473),
        [anon_sym_with] = ACTIONS(473),
        [anon_sym_def] = ACTIONS(473),
        [anon_sym_LPAREN] = ACTIONS(1274),
        [anon_sym_class] = ACTIONS(473),
        [anon_sym_AT] = ACTIONS(353),
        [anon_sym_PLUS] = ACTIONS(1533),
        [anon_sym_LBRACK] = ACTIONS(1278),
        [sym_number] = ACTIONS(473),
        [sym_identifier] = ACTIONS(477),
        [sym_comment] = ACTIONS(67),
        [sym__newline] = ACTIONS(353),
        [sym__dedent] = ACTIONS(353),
    },
    [606] = {
        [sym__expression] = STATE(612),
        [sym_binary_operator] = STATE(376),
        [sym_subscript] = STATE(376),
        [sym_call] = STATE(376),
        [sym_number] = ACTIONS(819),
        [sym_identifier] = ACTIONS(819),
        [sym_comment] = ACTIONS(67),
    },
    [607] = {
        [sym__expression] = STATE(611),
        [sym_binary_operator] = STATE(376),
        [sym_subscript] = STATE(376),
        [sym_call] = STATE(376),
        [sym_number] = ACTIONS(819),
        [sym_identifier] = ACTIONS(819),
        [sym_comment] = ACTIONS(67),
    },
    [608] = {
        [ts_builtin_sym_end] = ACTIONS(355),
        [anon_sym_SEMI] = ACTIONS(355),
        [anon_sym_print] = ACTIONS(479),
        [anon_sym_COMMA] = ACTIONS(1535),
        [anon_sym_return] = ACTIONS(479),
        [anon_sym_del] = ACTIONS(479),
        [sym_pass_statement] = ACTIONS(479),
        [sym_break_statement] = ACTIONS(479),
        [sym_continue_statement] = ACTIONS(479),
        [anon_sym_if] = ACTIONS(479),
        [anon_sym_elif] = ACTIONS(479),
        [anon_sym_else] = ACTIONS(479),
        [anon_sym_for] = ACTIONS(479),
        [anon_sym_while] = ACTIONS(479),
        [anon_sym_try] = ACTIONS(479),
        [anon_sym_except] = ACTIONS(479),
        [anon_sym_finally] = ACTIONS(479),
        [anon_sym_with] = ACTIONS(479),
        [anon_sym_def] = ACTIONS(479),
        [anon_sym_class] = ACTIONS(479),
        [anon_sym_AT] = ACTIONS(355),
        [sym_number] = ACTIONS(479),
        [sym_identifier] = ACTIONS(483),
        [sym_comment] = ACTIONS(67),
        [sym__newline] = ACTIONS(355),
        [sym__dedent] = ACTIONS(355),
    },
    [609] = {
        [sym__expression] = STATE(610),
        [sym_binary_operator] = STATE(376),
        [sym_subscript] = STATE(376),
        [sym_call] = STATE(376),
        [sym_number] = ACTIONS(819),
        [sym_identifier] = ACTIONS(819),
        [sym_comment] = ACTIONS(67),
    },
    [610] = {
        [ts_builtin_sym_end] = ACTIONS(329),
        [anon_sym_SEMI] = ACTIONS(329),
        [anon_sym_print] = ACTIONS(485),
        [anon_sym_COMMA] = ACTIONS(329),
        [anon_sym_return] = ACTIONS(485),
        [anon_sym_del] = ACTIONS(485),
        [sym_pass_statement] = ACTIONS(485),
        [sym_break_statement] = ACTIONS(485),
        [sym_continue_statement] = ACTIONS(485),
        [anon_sym_if] = ACTIONS(485),
        [anon_sym_elif] = ACTIONS(485),
        [anon_sym_else] = ACTIONS(485),
        [anon_sym_for] = ACTIONS(485),
        [anon_sym_while] = ACTIONS(485),
        [anon_sym_try] = ACTIONS(485),
        [anon_sym_except] = ACTIONS(485),
        [anon_sym_finally] = ACTIONS(485),
        [anon_sym_with] = ACTIONS(485),
        [anon_sym_def] = ACTIONS(485),
        [anon_sym_LPAREN] = ACTIONS(1274),
        [anon_sym_class] = ACTIONS(485),
        [anon_sym_AT] = ACTIONS(329),
        [anon_sym_PLUS] = ACTIONS(1533),
        [anon_sym_LBRACK] = ACTIONS(1278),
        [sym_number] = ACTIONS(485),
        [sym_identifier] = ACTIONS(487),
        [sym_comment] = ACTIONS(67),
        [sym__newline] = ACTIONS(329),
        [sym__dedent] = ACTIONS(329),
    },
    [611] = {
        [ts_builtin_sym_end] = ACTIONS(245),
        [anon_sym_SEMI] = ACTIONS(245),
        [anon_sym_print] = ACTIONS(271),
        [anon_sym_COMMA] = ACTIONS(245),
        [anon_sym_return] = ACTIONS(271),
        [anon_sym_del] = ACTIONS(271),
        [sym_pass_statement] = ACTIONS(271),
        [sym_break_statement] = ACTIONS(271),
        [sym_continue_statement] = ACTIONS(271),
        [anon_sym_if] = ACTIONS(271),
        [anon_sym_elif] = ACTIONS(271),
        [anon_sym_else] = ACTIONS(271),
        [anon_sym_for] = ACTIONS(271),
        [anon_sym_while] = ACTIONS(271),
        [anon_sym_try] = ACTIONS(271),
        [anon_sym_except] = ACTIONS(271),
        [anon_sym_finally] = ACTIONS(271),
        [anon_sym_with] = ACTIONS(271),
        [anon_sym_def] = ACTIONS(271),
        [anon_sym_LPAREN] = ACTIONS(1173),
        [anon_sym_class] = ACTIONS(271),
        [anon_sym_AT] = ACTIONS(245),
        [anon_sym_PLUS] = ACTIONS(1537),
        [anon_sym_LBRACK] = ACTIONS(1189),
        [sym_number] = ACTIONS(271),
        [sym_identifier] = ACTIONS(273),
        [sym_comment] = ACTIONS(67),
        [sym__newline] = ACTIONS(245),
        [sym__dedent] = ACTIONS(245),
    },
    [612] = {
        [ts_builtin_sym_end] = ACTIONS(331),
        [anon_sym_SEMI] = ACTIONS(331),
        [anon_sym_print] = ACTIONS(489),
        [anon_sym_COMMA] = ACTIONS(331),
        [anon_sym_return] = ACTIONS(489),
        [anon_sym_del] = ACTIONS(489),
        [sym_pass_statement] = ACTIONS(489),
        [sym_break_statement] = ACTIONS(489),
        [sym_continue_statement] = ACTIONS(489),
        [anon_sym_if] = ACTIONS(489),
        [anon_sym_elif] = ACTIONS(489),
        [anon_sym_else] = ACTIONS(489),
        [anon_sym_for] = ACTIONS(489),
        [anon_sym_while] = ACTIONS(489),
        [anon_sym_try] = ACTIONS(489),
        [anon_sym_except] = ACTIONS(489),
        [anon_sym_finally] = ACTIONS(489),
        [anon_sym_with] = ACTIONS(489),
        [anon_sym_def] = ACTIONS(489),
        [anon_sym_LPAREN] = ACTIONS(1274),
        [anon_sym_class] = ACTIONS(489),
        [anon_sym_AT] = ACTIONS(331),
        [anon_sym_PLUS] = ACTIONS(1533),
        [anon_sym_LBRACK] = ACTIONS(1278),
        [sym_number] = ACTIONS(489),
        [sym_identifier] = ACTIONS(491),
        [sym_comment] = ACTIONS(67),
        [sym__newline] = ACTIONS(331),
        [sym__dedent] = ACTIONS(331),
    },
    [613] = {
        [ts_builtin_sym_end] = ACTIONS(1540),
        [anon_sym_SEMI] = ACTIONS(1540),
        [anon_sym_print] = ACTIONS(1543),
        [anon_sym_COMMA] = ACTIONS(1540),
        [anon_sym_return] = ACTIONS(1543),
        [anon_sym_del] = ACTIONS(1543),
        [sym_pass_statement] = ACTIONS(1543),
        [sym_break_statement] = ACTIONS(1543),
        [sym_continue_statement] = ACTIONS(1543),
        [anon_sym_if] = ACTIONS(1543),
        [anon_sym_COLON] = ACTIONS(1546),
        [anon_sym_elif] = ACTIONS(1543),
        [anon_sym_else] = ACTIONS(1543),
        [anon_sym_for] = ACTIONS(1543),
        [anon_sym_in] = ACTIONS(1543),
        [anon_sym_while] = ACTIONS(1543),
        [anon_sym_try] = ACTIONS(1543),
        [anon_sym_except] = ACTIONS(1543),
        [anon_sym_as] = ACTIONS(1543),
        [anon_sym_finally] = ACTIONS(1543),
        [anon_sym_with] = ACTIONS(1543),
        [anon_sym_def] = ACTIONS(1543),
        [anon_sym_LPAREN] = ACTIONS(1540),
        [anon_sym_RPAREN] = ACTIONS(1540),
        [anon_sym_class] = ACTIONS(1543),
        [anon_sym_AT] = ACTIONS(1540),
        [anon_sym_PLUS] = ACTIONS(1540),
        [anon_sym_LBRACK] = ACTIONS(1540),
        [anon_sym_RBRACK] = ACTIONS(1540),
        [sym_number] = ACTIONS(1543),
        [sym_identifier] = ACTIONS(1551),
        [sym_comment] = ACTIONS(67),
        [sym__newline] = ACTIONS(1540),
        [sym__dedent] = ACTIONS(1540),
    },
    [614] = {
        [anon_sym_COMMA] = ACTIONS(1554),
        [anon_sym_RBRACK] = ACTIONS(1554),
        [sym_comment] = ACTIONS(67),
    },
    [615] = {
        [ts_builtin_sym_end] = ACTIONS(1557),
        [anon_sym_SEMI] = ACTIONS(1557),
        [anon_sym_print] = ACTIONS(1560),
        [anon_sym_COMMA] = ACTIONS(1557),
        [anon_sym_return] = ACTIONS(1560),
        [anon_sym_del] = ACTIONS(1560),
        [sym_pass_statement] = ACTIONS(1560),
        [sym_break_statement] = ACTIONS(1560),
        [sym_continue_statement] = ACTIONS(1560),
        [anon_sym_if] = ACTIONS(1560),
        [anon_sym_COLON] = ACTIONS(1557),
        [anon_sym_elif] = ACTIONS(1560),
        [anon_sym_else] = ACTIONS(1560),
        [anon_sym_for] = ACTIONS(1560),
        [anon_sym_in] = ACTIONS(1560),
        [anon_sym_while] = ACTIONS(1560),
        [anon_sym_try] = ACTIONS(1560),
        [anon_sym_except] = ACTIONS(1560),
        [anon_sym_as] = ACTIONS(1560),
        [anon_sym_finally] = ACTIONS(1560),
        [anon_sym_with] = ACTIONS(1560),
        [anon_sym_def] = ACTIONS(1560),
        [anon_sym_LPAREN] = ACTIONS(1557),
        [anon_sym_RPAREN] = ACTIONS(1557),
        [anon_sym_class] = ACTIONS(1560),
        [anon_sym_AT] = ACTIONS(1557),
        [anon_sym_PLUS] = ACTIONS(1557),
        [anon_sym_LBRACK] = ACTIONS(1557),
        [anon_sym_RBRACK] = ACTIONS(1557),
        [sym_number] = ACTIONS(1560),
        [sym_identifier] = ACTIONS(1563),
        [sym_comment] = ACTIONS(67),
        [sym__newline] = ACTIONS(1557),
        [sym__dedent] = ACTIONS(1557),
    },
    [616] = {
        [anon_sym_COMMA] = ACTIONS(1566),
        [anon_sym_COLON] = ACTIONS(1566),
        [sym_comment] = ACTIONS(67),
    },
    [617] = {
        [ts_builtin_sym_end] = ACTIONS(1569),
        [anon_sym_SEMI] = ACTIONS(1569),
        [anon_sym_print] = ACTIONS(1572),
        [anon_sym_COMMA] = ACTIONS(1575),
        [anon_sym_return] = ACTIONS(1572),
        [anon_sym_del] = ACTIONS(1572),
        [sym_pass_statement] = ACTIONS(1572),
        [sym_break_statement] = ACTIONS(1572),
        [sym_continue_statement] = ACTIONS(1572),
        [anon_sym_if] = ACTIONS(1572),
        [anon_sym_COLON] = ACTIONS(1583),
        [anon_sym_elif] = ACTIONS(1572),
        [anon_sym_else] = ACTIONS(1572),
        [anon_sym_for] = ACTIONS(1572),
        [anon_sym_in] = ACTIONS(1572),
        [anon_sym_while] = ACTIONS(1572),
        [anon_sym_try] = ACTIONS(1572),
        [anon_sym_except] = ACTIONS(1572),
        [anon_sym_as] = ACTIONS(1588),
        [anon_sym_finally] = ACTIONS(1572),
        [anon_sym_with] = ACTIONS(1572),
        [anon_sym_def] = ACTIONS(1572),
        [anon_sym_LPAREN] = ACTIONS(1274),
        [anon_sym_RPAREN] = ACTIONS(1590),
        [anon_sym_class] = ACTIONS(1572),
        [anon_sym_AT] = ACTIONS(1569),
        [anon_sym_PLUS] = ACTIONS(1595),
        [anon_sym_LBRACK] = ACTIONS(1278),
        [anon_sym_RBRACK] = ACTIONS(1554),
        [sym_number] = ACTIONS(1572),
        [sym_identifier] = ACTIONS(1597),
        [sym_comment] = ACTIONS(67),
        [sym__newline] = ACTIONS(1569),
        [sym__dedent] = ACTIONS(1569),
    },
    [618] = {
        [anon_sym_COMMA] = ACTIONS(1600),
        [anon_sym_RPAREN] = ACTIONS(1600),
        [sym_comment] = ACTIONS(67),
    },
    [619] = {
        [aux_sym_print_statement_repeat1] = STATE(620),
        [ts_builtin_sym_end] = ACTIONS(501),
        [anon_sym_SEMI] = ACTIONS(501),
        [anon_sym_print] = ACTIONS(499),
        [anon_sym_COMMA] = ACTIONS(1531),
        [anon_sym_return] = ACTIONS(499),
        [anon_sym_del] = ACTIONS(499),
        [sym_pass_statement] = ACTIONS(499),
        [sym_break_statement] = ACTIONS(499),
        [sym_continue_statement] = ACTIONS(499),
        [anon_sym_if] = ACTIONS(499),
        [anon_sym_elif] = ACTIONS(499),
        [anon_sym_else] = ACTIONS(499),
        [anon_sym_for] = ACTIONS(499),
        [anon_sym_while] = ACTIONS(499),
        [anon_sym_try] = ACTIONS(499),
        [anon_sym_except] = ACTIONS(499),
        [anon_sym_finally] = ACTIONS(499),
        [anon_sym_with] = ACTIONS(499),
        [anon_sym_def] = ACTIONS(499),
        [anon_sym_LPAREN] = ACTIONS(1274),
        [anon_sym_class] = ACTIONS(499),
        [anon_sym_AT] = ACTIONS(501),
        [anon_sym_PLUS] = ACTIONS(1533),
        [anon_sym_LBRACK] = ACTIONS(1278),
        [sym_number] = ACTIONS(499),
        [sym_identifier] = ACTIONS(503),
        [sym_comment] = ACTIONS(67),
        [sym__newline] = ACTIONS(501),
        [sym__dedent] = ACTIONS(501),
    },
    [620] = {
        [ts_builtin_sym_end] = ACTIONS(507),
        [anon_sym_SEMI] = ACTIONS(507),
        [anon_sym_print] = ACTIONS(505),
        [anon_sym_COMMA] = ACTIONS(1535),
        [anon_sym_return] = ACTIONS(505),
        [anon_sym_del] = ACTIONS(505),
        [sym_pass_statement] = ACTIONS(505),
        [sym_break_statement] = ACTIONS(505),
        [sym_continue_statement] = ACTIONS(505),
        [anon_sym_if] = ACTIONS(505),
        [anon_sym_elif] = ACTIONS(505),
        [anon_sym_else] = ACTIONS(505),
        [anon_sym_for] = ACTIONS(505),
        [anon_sym_while] = ACTIONS(505),
        [anon_sym_try] = ACTIONS(505),
        [anon_sym_except] = ACTIONS(505),
        [anon_sym_finally] = ACTIONS(505),
        [anon_sym_with] = ACTIONS(505),
        [anon_sym_def] = ACTIONS(505),
        [anon_sym_class] = ACTIONS(505),
        [anon_sym_AT] = ACTIONS(507),
        [sym_number] = ACTIONS(505),
        [sym_identifier] = ACTIONS(509),
        [sym_comment] = ACTIONS(67),
        [sym__newline] = ACTIONS(507),
        [sym__dedent] = ACTIONS(507),
    },
};

static TSParseActionEntry ts_parse_actions[] = {
    [0] = {.count = 0, .reusable = false, .depends_on_lookahead = false},
    [1] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(0),
    [3] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(26),
    [5] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(348),
    [7] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(349),
    [9] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(350),
    [11] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(351),
    [13] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(352),
    [15] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(353),
    [17] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(354),
    [19] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(355),
    [21] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(356),
    [23] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(357),
    [25] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(358),
    [27] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(359),
    [29] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(360),
    [31] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(361),
    [33] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(362),
    [35] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(363),
    [37] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(364),
    [39] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(365),
    [41] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(366),
    [43] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(367),
    [45] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(368),
    [47] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(369),
    [49] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(370),
    [51] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(13),
    [53] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(371),
    [55] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(372),
    [57] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(373),
    [59] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(374),
    [61] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(375),
    [63] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(376),
    [65] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, RECOVER(377),
    [67] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT_EXTRA(),
    [69] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(378),
    [71] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(379),
    [73] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(380),
    [75] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_module, 0),
    [77] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(2),
    [79] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(3),
    [81] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(4),
    [83] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(5),
    [85] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(6),
    [87] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(7),
    [89] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(8),
    [91] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(9),
    [93] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(10),
    [95] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(11),
    [97] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(12),
    [99] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(13),
    [101] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(14),
    [103] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(14),
    [105] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__simple_statement, 1),
    [107] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__simple_statement, 1),
    [109] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__simple_statement, 1),
    [111] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(32),
    [113] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(303),
    [115] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(293),
    [117] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(100),
    [119] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(81),
    [121] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__expression, 1),
    [123] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__expression, 1),
    [125] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__expression, 1),
    [127] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, ACCEPT_INPUT(),
    [129] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_module_repeat1, 1),
    [131] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_module_repeat1, 1),
    [133] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_module_repeat1, 1),
    [135] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(80),
    [137] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__statement, 1),
    [139] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__statement, 1),
    [141] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__statement, 1),
    [143] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__compound_statement, 1),
    [145] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__compound_statement, 1),
    [147] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__compound_statement, 1),
    [149] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_decorated_definition_repeat1, 1),
    [151] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_expression_statement, 1),
    [153] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_expression_statement, 1),
    [155] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(28),
    [157] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(29),
    [159] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(30),
    [161] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_expression_statement, 1),
    [163] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_module, 1),
    [165] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(26),
    [167] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(11),
    [169] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(12),
    [171] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_decorated_definition, 2),
    [173] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_decorated_definition, 2),
    [175] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_decorated_definition, 2),
    [177] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_decorated_definition_repeat1, 2),
    [179] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_module, 2),
    [181] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_module_repeat1, 2),
    [183] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_module_repeat1, 2),
    [185] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_module_repeat1, 2),
    [187] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(56),
    [189] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(31),
    [191] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(34),
    [193] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(38),
    [195] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(35),
    [197] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(36),
    [199] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(37),
    [201] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(53),
    [203] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(41),
    [205] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(45),
    [207] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_subscript, 4),
    [209] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_subscript, 4),
    [211] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_subscript, 4),
    [213] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(40),
    [215] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(42),
    [217] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(43),
    [219] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_subscript, 5),
    [221] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_subscript, 5),
    [223] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_subscript, 5),
    [225] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_subscript_repeat1, 3),
    [227] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_subscript, 6),
    [229] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_subscript, 6),
    [231] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_subscript, 6),
    [233] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(47),
    [235] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(48),
    [237] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(51),
    [239] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(50),
    [241] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(52),
    [243] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_subscript_repeat1, 2),
    [245] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE_FRAGILE(sym_binary_operator, 3),
    [247] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(69),
    [249] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(59),
    [251] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(60),
    [253] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(63),
    [255] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_call, 4),
    [257] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(62),
    [259] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(64),
    [261] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_call, 5),
    [263] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_call, 6),
    [265] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_call_repeat1, 3),
    [267] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_call_repeat1, 2),
    [269] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_keyword_argument, 3),
    [271] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE_FRAGILE(sym_binary_operator, 3),
    [273] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE_FRAGILE(sym_binary_operator, 3),
    [275] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(74),
    [277] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(75),
    [279] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(78),
    [281] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_call, 4),
    [283] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_call, 4),
    [285] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(77),
    [287] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(79),
    [289] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_call, 5),
    [291] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_call, 5),
    [293] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_call, 6),
    [295] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_call, 6),
    [297] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__statement, 2),
    [299] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__statement, 2),
    [301] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__statement, 2),
    [303] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_dotted_name, 1),
    [305] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(95),
    [307] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(83),
    [309] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(84),
    [311] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_decorator, 3),
    [313] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(86),
    [315] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_decorator, 4),
    [317] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(88),
    [319] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(89),
    [321] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_arguments, 3),
    [323] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(91),
    [325] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(92),
    [327] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_arguments, 4),
    [329] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_print_statement_repeat1, 3),
    [331] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_print_statement_repeat1, 2),
    [333] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(99),
    [335] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_dotted_name, 2),
    [337] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(97),
    [339] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(98),
    [341] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_dotted_name_repeat1, 3),
    [343] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_dotted_name_repeat1, 2),
    [345] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(101),
    [347] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(102),
    [349] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(108),
    [351] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(106),
    [353] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_expression_list, 1),
    [355] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_expression_list, 2),
    [357] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(107),
    [359] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(111),
    [361] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(112),
    [363] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(113),
    [365] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(114),
    [367] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(115),
    [369] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(116),
    [371] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(117),
    [373] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(118),
    [375] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__suite, 1),
    [377] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__suite, 1),
    [379] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__suite, 1),
    [381] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_class_definition, 7),
    [383] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_class_definition, 7),
    [385] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_class_definition, 7),
    [387] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(223),
    [389] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(178),
    [391] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(129),
    [393] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__suite, 2),
    [395] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__suite, 2),
    [397] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__suite, 2),
    [399] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(128),
    [401] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(126),
    [403] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(116),
    [405] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(117),
    [407] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__suite, 3),
    [409] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__suite, 3),
    [411] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__suite, 3),
    [413] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(130),
    [415] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(131),
    [417] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(135),
    [419] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(136),
    [421] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(137),
    [423] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(138),
    [425] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(139),
    [427] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(139),
    [429] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(140),
    [431] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(133),
    [433] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(134),
    [435] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(164),
    [437] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(144),
    [439] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(145),
    [441] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(146),
    [443] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(147),
    [445] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(149),
    [447] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(150),
    [449] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(153),
    [451] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(152),
    [453] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(154),
    [455] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(158),
    [457] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(159),
    [459] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(162),
    [461] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(161),
    [463] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(163),
    [465] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(166),
    [467] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_delete_statement, 2),
    [469] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_delete_statement, 2),
    [471] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_delete_statement, 2),
    [473] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_expression_list, 1),
    [475] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(169),
    [477] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_expression_list, 1),
    [479] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_expression_list, 2),
    [481] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(171),
    [483] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_expression_list, 2),
    [485] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_print_statement_repeat1, 3),
    [487] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_print_statement_repeat1, 3),
    [489] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_print_statement_repeat1, 2),
    [491] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_print_statement_repeat1, 2),
    [493] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_return_statement, 2),
    [495] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_return_statement, 2),
    [497] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_return_statement, 2),
    [499] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_print_statement, 2),
    [501] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_print_statement, 2),
    [503] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_print_statement, 2),
    [505] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_print_statement, 3),
    [507] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_print_statement, 3),
    [509] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_print_statement, 3),
    [511] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_class_definition, 4),
    [513] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_class_definition, 4),
    [515] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_class_definition, 4),
    [517] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(179),
    [519] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(183),
    [521] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(184),
    [523] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(185),
    [525] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(181),
    [527] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_function_definition, 5),
    [529] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_function_definition, 5),
    [531] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_function_definition, 5),
    [533] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_parameters, 2),
    [535] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(199),
    [537] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(209),
    [539] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(208),
    [541] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(205),
    [543] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(203),
    [545] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(206),
    [547] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(190),
    [549] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(201),
    [551] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(194),
    [553] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(195),
    [555] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_parameters, 4),
    [557] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(196),
    [559] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(198),
    [561] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_parameters, 6),
    [563] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(200),
    [565] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_dictionary_splat_parameter, 3),
    [567] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(202),
    [569] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_parameters_repeat1, 3),
    [571] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_parameters_repeat1, 3),
    [573] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_parameters, 5),
    [575] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_default_parameter, 3),
    [577] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_parameters, 3),
    [579] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_parameters_repeat1, 2),
    [581] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_parameters_repeat1, 2),
    [583] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_list_splat_parameter, 2),
    [585] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(214),
    [587] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(215),
    [589] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_with_item, 1),
    [591] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(212),
    [593] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_with_item, 3),
    [595] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(217),
    [597] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(218),
    [599] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_with_statement, 5),
    [601] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_with_statement, 5),
    [603] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_with_statement, 5),
    [605] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_with_statement_repeat1, 3),
    [607] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_with_statement, 4),
    [609] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_with_statement, 4),
    [611] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_with_statement, 4),
    [613] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_with_statement_repeat1, 2),
    [615] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(224),
    [617] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(225),
    [619] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(226),
    [621] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(227),
    [623] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(32),
    [625] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(228),
    [627] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(253),
    [629] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(232),
    [631] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(233),
    [633] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(244),
    [635] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_try_statement_repeat1, 1),
    [637] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_try_statement_repeat1, 1),
    [639] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_try_statement_repeat1, 1),
    [641] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_try_statement, 4),
    [643] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_try_statement, 4),
    [645] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_try_statement, 4),
    [647] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(237),
    [649] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(232),
    [651] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(233),
    [653] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(242),
    [655] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_try_statement, 5),
    [657] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_try_statement, 5),
    [659] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_try_statement, 5),
    [661] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_try_statement_repeat1, 2),
    [663] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_try_statement_repeat1, 2),
    [665] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_try_statement_repeat1, 2),
    [667] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_try_statement, 6),
    [669] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_try_statement, 6),
    [671] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_try_statement, 6),
    [673] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_else_clause, 3),
    [675] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_else_clause, 3),
    [677] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_else_clause, 3),
    [679] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_finally_clause, 3),
    [681] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_finally_clause, 3),
    [683] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_finally_clause, 3),
    [685] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(247),
    [687] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(248),
    [689] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(250),
    [691] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_except_clause, 6),
    [693] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_except_clause, 6),
    [695] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_except_clause, 6),
    [697] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_except_clause, 4),
    [699] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_except_clause, 4),
    [701] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_except_clause, 4),
    [703] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(255),
    [705] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(261),
    [707] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_while_statement, 4),
    [709] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_while_statement, 4),
    [711] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_while_statement, 4),
    [713] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_while_statement, 5),
    [715] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_while_statement, 5),
    [717] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_while_statement, 5),
    [719] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(265),
    [721] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(267),
    [723] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_for_statement, 6),
    [725] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_for_statement, 6),
    [727] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_for_statement, 6),
    [729] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_for_statement, 7),
    [731] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_for_statement, 7),
    [733] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_for_statement, 7),
    [735] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(271),
    [737] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_if_statement, 4),
    [739] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(273),
    [741] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_if_statement, 4),
    [743] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_if_statement, 4),
    [745] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_if_statement_repeat1, 1),
    [747] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_if_statement_repeat1, 1),
    [749] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_if_statement_repeat1, 1),
    [751] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_if_statement, 5),
    [753] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_if_statement, 5),
    [755] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_if_statement, 5),
    [757] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_if_statement_repeat1, 2),
    [759] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_if_statement_repeat1, 2),
    [761] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_if_statement_repeat1, 2),
    [763] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_if_statement, 6),
    [765] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_if_statement, 6),
    [767] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_if_statement, 6),
    [769] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(280),
    [771] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_elif_clause, 4),
    [773] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_elif_clause, 4),
    [775] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_elif_clause, 4),
    [777] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(284),
    [779] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(286),
    [781] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(295),
    [783] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(298),
    [785] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(300),
    [787] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(305),
    [789] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(306),
    [791] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(317),
    [793] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(310),
    [795] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(305),
    [797] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(306),
    [799] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(315),
    [801] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(320),
    [803] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(321),
    [805] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(323),
    [807] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(327),
    [809] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(331),
    [811] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(333),
    [813] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(337),
    [815] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(339),
    [817] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(346),
    [819] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(376),
    [821] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(613),
    [823] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_parameters_repeat1, 2), REDUCE(aux_sym_parameters_repeat1, 3), SHIFT(196),
    [827] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(614),
    [829] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(615),
    [831] = {.count = 3, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_parameters_repeat1, 2), REDUCE(aux_sym_parameters_repeat1, 3), SHIFT(473),
    [835] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(348),
    [837] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(350),
    [839] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(351),
    [841] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(352),
    [843] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(376),
    [845] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(379),
    [847] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(565),
    [849] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(557),
    [851] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(549),
    [853] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(547),
    [855] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(542),
    [857] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_call, 4), REDUCE(sym_call, 5), REDUCE(sym_call, 6),
    [861] = {.count = 3, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_call, 4), REDUCE(sym_call, 5), REDUCE(sym_call, 6),
    [865] = {.count = 9, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_parameters, 2), REDUCE(sym_parameters, 3), REDUCE(sym_parameters, 4), REDUCE(sym_call, 4), REDUCE(sym_parameters, 5), REDUCE(sym_call, 5), REDUCE(sym_parameters, 6), REDUCE(sym_call, 6), SHIFT(497),
    [875] = {.count = 3, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_call, 4), REDUCE(sym_call, 5), REDUCE(sym_call, 6),
    [879] = {.count = 5, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_arguments, 3), REDUCE(sym_arguments, 4), REDUCE(sym_call, 4), REDUCE(sym_call, 5), REDUCE(sym_call, 6),
    [885] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(540),
    [887] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(538),
    [889] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(537),
    [891] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(424),
    [893] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_subscript_repeat1, 2), REDUCE(aux_sym_subscript_repeat1, 3), SHIFT(426),
    [897] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_subscript_repeat1, 2), REDUCE(aux_sym_subscript_repeat1, 3), SHIFT(427),
    [901] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_subscript, 4), REDUCE(sym_subscript, 5), REDUCE(sym_subscript, 6),
    [905] = {.count = 3, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_subscript, 4), REDUCE(sym_subscript, 5), REDUCE(sym_subscript, 6),
    [909] = {.count = 3, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_subscript, 4), REDUCE(sym_subscript, 5), REDUCE(sym_subscript, 6),
    [913] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__expression, 1), REDUCE(sym_list_splat_parameter, 2), SHIFT(525),
    [917] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__expression, 1), SHIFT(531),
    [920] = {.count = 5, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_dotted_name, 1), REDUCE(sym__expression, 1), REDUCE(aux_sym_dotted_name_repeat1, 2), REDUCE(aux_sym_dotted_name_repeat1, 3), SHIFT(532),
    [926] = {.count = 4, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__expression, 1), REDUCE(sym_list_splat_parameter, 2), REDUCE(sym_dictionary_splat_parameter, 3), SHIFT(522),
    [931] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(368),
    [933] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_dotted_name_repeat1, 2), REDUCE(aux_sym_dotted_name_repeat1, 3), SHIFT(95),
    [937] = {.count = 4, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_dotted_name, 1), REDUCE(sym__expression, 1), REDUCE(aux_sym_dotted_name_repeat1, 2), REDUCE(aux_sym_dotted_name_repeat1, 3),
    [942] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_module, 2), REDUCE(sym__statement, 2),
    [945] = {.count = 3, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__statement, 2), REDUCE(sym_decorator, 3), REDUCE(sym_decorator, 4),
    [949] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__statement, 2), REDUCE(sym_decorator, 3), REDUCE(sym_decorator, 4),
    [953] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(433),
    [955] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__suite, 2), REDUCE(sym__suite, 3),
    [958] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__suite, 2), REDUCE(sym__suite, 3),
    [961] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__suite, 2), REDUCE(sym__suite, 3),
    [964] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_module_repeat1, 1), REDUCE(aux_sym_module_repeat1, 2),
    [967] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_module_repeat1, 1), REDUCE(aux_sym_module_repeat1, 2),
    [970] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_module_repeat1, 1), REDUCE(aux_sym_module_repeat1, 2),
    [973] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__suite, 1), SHIFT(463),
    [976] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_if_statement_repeat1, 1), REDUCE(aux_sym_if_statement_repeat1, 2),
    [979] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_if_statement_repeat1, 1), REDUCE(aux_sym_if_statement_repeat1, 2),
    [982] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_if_statement_repeat1, 1), REDUCE(aux_sym_if_statement_repeat1, 2),
    [985] = {.count = 5, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_if_statement, 5), REDUCE(sym_while_statement, 5), REDUCE(sym_try_statement, 5), REDUCE(sym_if_statement, 6), REDUCE(sym_for_statement, 7),
    [991] = {.count = 5, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_if_statement, 5), REDUCE(sym_while_statement, 5), REDUCE(sym_try_statement, 5), REDUCE(sym_if_statement, 6), REDUCE(sym_for_statement, 7),
    [997] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(363),
    [999] = {.count = 5, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_if_statement, 5), REDUCE(sym_while_statement, 5), REDUCE(sym_try_statement, 5), REDUCE(sym_if_statement, 6), REDUCE(sym_for_statement, 7),
    [1005] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_try_statement_repeat1, 1), REDUCE(aux_sym_try_statement_repeat1, 2),
    [1008] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_try_statement_repeat1, 1), REDUCE(aux_sym_try_statement_repeat1, 2),
    [1011] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_try_statement_repeat1, 1), REDUCE(aux_sym_try_statement_repeat1, 2),
    [1014] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_try_statement, 4), REDUCE(sym_try_statement, 5), REDUCE(sym_try_statement, 6),
    [1018] = {.count = 3, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_try_statement, 4), REDUCE(sym_try_statement, 5), REDUCE(sym_try_statement, 6),
    [1022] = {.count = 3, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_try_statement, 4), REDUCE(sym_try_statement, 5), REDUCE(sym_try_statement, 6),
    [1026] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_with_statement_repeat1, 2), REDUCE(aux_sym_with_statement_repeat1, 3), SHIFT(214),
    [1030] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_with_statement_repeat1, 2), REDUCE(aux_sym_with_statement_repeat1, 3), SHIFT(529),
    [1034] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__compound_statement, 1), REDUCE(sym_decorated_definition, 2),
    [1037] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__compound_statement, 1), REDUCE(sym_decorated_definition, 2),
    [1040] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__compound_statement, 1), REDUCE(sym_decorated_definition, 2),
    [1043] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(527),
    [1045] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(525),
    [1047] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(522),
    [1049] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(521),
    [1051] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(520),
    [1053] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_decorated_definition_repeat1, 1), REDUCE(aux_sym_decorated_definition_repeat1, 2),
    [1056] = {.count = 13, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_else_clause, 3), REDUCE(sym_finally_clause, 3), REDUCE(sym_if_statement, 4), REDUCE(sym_elif_clause, 4), REDUCE(sym_while_statement, 4), REDUCE(sym_except_clause, 4), REDUCE(sym_with_statement, 4), REDUCE(sym_class_definition, 4), REDUCE(sym_with_statement, 5), REDUCE(sym_function_definition, 5), REDUCE(sym_for_statement, 6), REDUCE(sym_except_clause, 6), REDUCE(sym_class_definition, 7),
    [1070] = {.count = 13, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_else_clause, 3), REDUCE(sym_finally_clause, 3), REDUCE(sym_if_statement, 4), REDUCE(sym_elif_clause, 4), REDUCE(sym_while_statement, 4), REDUCE(sym_except_clause, 4), REDUCE(sym_with_statement, 4), REDUCE(sym_class_definition, 4), REDUCE(sym_with_statement, 5), REDUCE(sym_function_definition, 5), REDUCE(sym_for_statement, 6), REDUCE(sym_except_clause, 6), REDUCE(sym_class_definition, 7),
    [1084] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_elif_clause, 4), SHIFT(355),
    [1087] = {.count = 4, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_elif_clause, 4), REDUCE(sym_except_clause, 4), REDUCE(sym_except_clause, 6), SHIFT(452),
    [1092] = {.count = 3, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_except_clause, 4), REDUCE(sym_except_clause, 6), SHIFT(361),
    [1096] = {.count = 4, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_else_clause, 3), REDUCE(sym_except_clause, 4), REDUCE(sym_except_clause, 6), SHIFT(363),
    [1101] = {.count = 13, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_else_clause, 3), REDUCE(sym_finally_clause, 3), REDUCE(sym_if_statement, 4), REDUCE(sym_elif_clause, 4), REDUCE(sym_while_statement, 4), REDUCE(sym_except_clause, 4), REDUCE(sym_with_statement, 4), REDUCE(sym_class_definition, 4), REDUCE(sym_with_statement, 5), REDUCE(sym_function_definition, 5), REDUCE(sym_for_statement, 6), REDUCE(sym_except_clause, 6), REDUCE(sym_class_definition, 7),
    [1115] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_return_statement, 2), REDUCE(sym_delete_statement, 2),
    [1118] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_return_statement, 2), REDUCE(sym_delete_statement, 2),
    [1121] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(495),
    [1123] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(358),
    [1125] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(496),
    [1127] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_return_statement, 2), REDUCE(sym_delete_statement, 2),
    [1130] = {.count = 6, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_expression_statement, 1), REDUCE(sym_expression_list, 1), REDUCE(sym_print_statement, 2), REDUCE(aux_sym_print_statement_repeat1, 2), REDUCE_FRAGILE(sym_binary_operator, 3), REDUCE(aux_sym_print_statement_repeat1, 3),
    [1137] = {.count = 6, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_expression_statement, 1), REDUCE(sym_expression_list, 1), REDUCE(sym_print_statement, 2), REDUCE(aux_sym_print_statement_repeat1, 2), REDUCE_FRAGILE(sym_binary_operator, 3), REDUCE(aux_sym_print_statement_repeat1, 3),
    [1144] = {.count = 12, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_with_item, 1), REDUCE(aux_sym_print_statement_repeat1, 2), REDUCE(aux_sym_subscript_repeat1, 2), REDUCE(aux_sym_call_repeat1, 2), REDUCE(sym_with_item, 3), REDUCE(sym_default_parameter, 3), REDUCE_FRAGILE(sym_binary_operator, 3), REDUCE(sym_keyword_argument, 3), REDUCE(aux_sym_print_statement_repeat1, 3), REDUCE(aux_sym_subscript_repeat1, 3), REDUCE(aux_sym_call_repeat1, 3), SHIFT(464),
    [1157] = {.count = 7, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_with_item, 1), REDUCE(sym_expression_list, 1), REDUCE(aux_sym_print_statement_repeat1, 2), REDUCE(sym_with_item, 3), REDUCE_FRAGILE(sym_binary_operator, 3), REDUCE(aux_sym_print_statement_repeat1, 3), SHIFT(465),
    [1165] = {.count = 4, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_expression_list, 1), REDUCE(aux_sym_print_statement_repeat1, 2), REDUCE_FRAGILE(sym_binary_operator, 3), REDUCE(aux_sym_print_statement_repeat1, 3),
    [1170] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE_FRAGILE(sym_binary_operator, 3), SHIFT(362),
    [1173] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE_FRAGILE(sym_binary_operator, 3), SHIFT(422),
    [1176] = {.count = 9, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_expression_list, 1), REDUCE(aux_sym_print_statement_repeat1, 2), REDUCE(aux_sym_call_repeat1, 2), REDUCE(sym_default_parameter, 3), REDUCE_FRAGILE(sym_binary_operator, 3), REDUCE(sym_keyword_argument, 3), REDUCE(aux_sym_print_statement_repeat1, 3), REDUCE(aux_sym_call_repeat1, 3), SHIFT(466),
    [1186] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE_FRAGILE(sym_binary_operator, 3), SHIFT(372),
    [1189] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE_FRAGILE(sym_binary_operator, 3), SHIFT(373),
    [1192] = {.count = 4, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_subscript_repeat1, 2), REDUCE_FRAGILE(sym_binary_operator, 3), REDUCE(aux_sym_subscript_repeat1, 3), SHIFT(427),
    [1197] = {.count = 6, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_expression_statement, 1), REDUCE(sym_expression_list, 1), REDUCE(sym_print_statement, 2), REDUCE(aux_sym_print_statement_repeat1, 2), REDUCE_FRAGILE(sym_binary_operator, 3), REDUCE(aux_sym_print_statement_repeat1, 3),
    [1204] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_call_repeat1, 2), REDUCE(aux_sym_call_repeat1, 3), SHIFT(431),
    [1208] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_call_repeat1, 2), REDUCE(aux_sym_call_repeat1, 3), SHIFT(432),
    [1212] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(353),
    [1214] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(357),
    [1216] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(359),
    [1218] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(360),
    [1220] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(364),
    [1222] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(365),
    [1224] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(370),
    [1226] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(435),
    [1228] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_expression_list, 2), REDUCE(sym_print_statement, 3),
    [1231] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_expression_list, 2), REDUCE(sym_print_statement, 3),
    [1234] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(457),
    [1236] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_expression_list, 2), SHIFT(92),
    [1239] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_expression_list, 2), REDUCE(sym_print_statement, 3),
    [1242] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(355),
    [1244] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(452),
    [1246] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(356),
    [1248] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(361),
    [1250] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(415),
    [1252] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(365),
    [1254] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(370),
    [1256] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(411),
    [1258] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(412),
    [1260] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(408),
    [1262] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(409),
    [1264] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(410),
    [1266] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(413),
    [1268] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(416),
    [1270] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(417),
    [1272] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(418),
    [1274] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(422),
    [1276] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(423),
    [1278] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(373),
    [1280] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(426),
    [1282] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(427),
    [1284] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE_FRAGILE(sym_binary_operator, 3), SHIFT(423),
    [1287] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(431),
    [1289] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(432),
    [1291] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(438),
    [1293] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(439),
    [1295] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(441),
    [1297] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE_FRAGILE(sym_binary_operator, 3), SHIFT(439),
    [1300] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(455),
    [1302] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(459),
    [1304] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE_FRAGILE(sym_binary_operator, 3), SHIFT(459),
    [1307] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(463),
    [1309] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(473),
    [1311] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_arguments, 3), REDUCE(sym_call, 4),
    [1314] = {.count = 5, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_if_statement, 4), REDUCE(sym_elif_clause, 4), REDUCE(sym_while_statement, 4), REDUCE(sym_except_clause, 4), REDUCE(sym_except_clause, 6),
    [1320] = {.count = 5, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_if_statement, 4), REDUCE(sym_elif_clause, 4), REDUCE(sym_while_statement, 4), REDUCE(sym_except_clause, 4), REDUCE(sym_except_clause, 6),
    [1326] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_except_clause, 4), REDUCE(sym_except_clause, 6),
    [1329] = {.count = 5, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_if_statement, 4), REDUCE(sym_elif_clause, 4), REDUCE(sym_while_statement, 4), REDUCE(sym_except_clause, 4), REDUCE(sym_except_clause, 6),
    [1335] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(469),
    [1337] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE_FRAGILE(sym_binary_operator, 3), SHIFT(469),
    [1340] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_if_statement, 5), REDUCE(sym_while_statement, 5),
    [1343] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_if_statement, 5), REDUCE(sym_while_statement, 5),
    [1346] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_if_statement, 5), REDUCE(sym_while_statement, 5),
    [1349] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_print_statement_repeat1, 2), REDUCE(aux_sym_subscript_repeat1, 2), REDUCE(aux_sym_call_repeat1, 2),
    [1353] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_print_statement_repeat1, 2), SHIFT(475),
    [1356] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_print_statement_repeat1, 2), REDUCE(aux_sym_call_repeat1, 2),
    [1359] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(476),
    [1361] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(478),
    [1363] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(479),
    [1365] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(480),
    [1367] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE_FRAGILE(sym_binary_operator, 3), SHIFT(476),
    [1370] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(483),
    [1372] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE_FRAGILE(sym_binary_operator, 3), SHIFT(483),
    [1375] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(486),
    [1377] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(487),
    [1379] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(489),
    [1381] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE_FRAGILE(sym_binary_operator, 3), SHIFT(487),
    [1384] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(499),
    [1386] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(500),
    [1388] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(501),
    [1390] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(497),
    [1392] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(504),
    [1394] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE_FRAGILE(sym_binary_operator, 3), SHIFT(504),
    [1397] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(508),
    [1399] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(509),
    [1401] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(511),
    [1403] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE_FRAGILE(sym_binary_operator, 3), SHIFT(509),
    [1406] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_if_statement, 5), REDUCE(sym_while_statement, 5), REDUCE(sym_for_statement, 7),
    [1410] = {.count = 3, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_if_statement, 5), REDUCE(sym_while_statement, 5), REDUCE(sym_for_statement, 7),
    [1414] = {.count = 3, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_if_statement, 5), REDUCE(sym_while_statement, 5), REDUCE(sym_for_statement, 7),
    [1418] = {.count = 4, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_parameters, 3), REDUCE(sym_parameters, 4), REDUCE(sym_parameters, 5), REDUCE(sym_parameters, 6),
    [1423] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_parameters, 3), REDUCE(sym_parameters, 4),
    [1426] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(524),
    [1428] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_parameters, 5), REDUCE(sym_parameters, 6),
    [1431] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(526),
    [1433] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_parameters_repeat1, 2), REDUCE(aux_sym_parameters_repeat1, 3),
    [1436] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_parameters_repeat1, 2), REDUCE(aux_sym_parameters_repeat1, 3),
    [1439] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_parameters, 4), REDUCE(sym_parameters, 5),
    [1442] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(533),
    [1444] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__expression, 1), SHIFT(208),
    [1447] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__expression, 1), SHIFT(205),
    [1450] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_dotted_name_repeat1, 2), REDUCE(aux_sym_dotted_name_repeat1, 3),
    [1453] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(531),
    [1455] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(539),
    [1457] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_list_splat_parameter, 2), REDUCE(sym_dictionary_splat_parameter, 3),
    [1460] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_default_parameter, 3), REDUCE(sym_keyword_argument, 3),
    [1463] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(544),
    [1465] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_expression_list, 1), SHIFT(466),
    [1468] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(529),
    [1470] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_with_item, 3), SHIFT(475),
    [1473] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(553),
    [1475] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(554),
    [1477] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(475),
    [1479] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(361),
    [1481] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(363),
    [1483] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(560),
    [1485] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(358),
    [1487] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(566),
    [1489] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(567),
    [1491] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(568),
    [1493] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(570),
    [1495] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE_FRAGILE(sym_binary_operator, 3), SHIFT(570),
    [1498] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(573),
    [1500] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(574),
    [1502] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(576),
    [1504] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE_FRAGILE(sym_binary_operator, 3), SHIFT(574),
    [1507] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(583),
    [1509] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(584),
    [1511] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(585),
    [1513] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(586),
    [1515] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(589),
    [1517] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE_FRAGILE(sym_binary_operator, 3), SHIFT(589),
    [1520] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(592),
    [1522] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(593),
    [1524] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(595),
    [1526] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE_FRAGILE(sym_binary_operator, 3), SHIFT(593),
    [1529] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(602),
    [1531] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(606),
    [1533] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(607),
    [1535] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(609),
    [1537] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE_FRAGILE(sym_binary_operator, 3), SHIFT(607),
    [1540] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_call, 5), REDUCE(sym_call, 6),
    [1543] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_call, 5), REDUCE(sym_call, 6),
    [1546] = {.count = 4, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_parameters, 4), REDUCE(sym_parameters, 5), REDUCE(sym_call, 5), REDUCE(sym_call, 6),
    [1551] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_call, 5), REDUCE(sym_call, 6),
    [1554] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_subscript_repeat1, 2), REDUCE(aux_sym_subscript_repeat1, 3),
    [1557] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_subscript, 5), REDUCE(sym_subscript, 6),
    [1560] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_subscript, 5), REDUCE(sym_subscript, 6),
    [1563] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_subscript, 5), REDUCE(sym_subscript, 6),
    [1566] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_with_statement_repeat1, 2), REDUCE(aux_sym_with_statement_repeat1, 3),
    [1569] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_print_statement_repeat1, 2), REDUCE(aux_sym_print_statement_repeat1, 3),
    [1572] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_print_statement_repeat1, 2), REDUCE(aux_sym_print_statement_repeat1, 3),
    [1575] = {.count = 7, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_with_item, 1), REDUCE(aux_sym_print_statement_repeat1, 2), REDUCE(aux_sym_subscript_repeat1, 2), REDUCE(aux_sym_call_repeat1, 2), REDUCE(aux_sym_print_statement_repeat1, 3), REDUCE(aux_sym_subscript_repeat1, 3), REDUCE(aux_sym_call_repeat1, 3),
    [1583] = {.count = 4, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_with_item, 1), REDUCE(aux_sym_print_statement_repeat1, 2), REDUCE(aux_sym_print_statement_repeat1, 3), SHIFT(475),
    [1588] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(212),
    [1590] = {.count = 4, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_print_statement_repeat1, 2), REDUCE(aux_sym_call_repeat1, 2), REDUCE(aux_sym_print_statement_repeat1, 3), REDUCE(aux_sym_call_repeat1, 3),
    [1595] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(372),
    [1597] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_print_statement_repeat1, 2), REDUCE(aux_sym_print_statement_repeat1, 3),
    [1600] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_call_repeat1, 2), REDUCE(aux_sym_call_repeat1, 3),
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
