#include <tree_sitter/parser.h>

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"

#define STATE_COUNT 568
#define SYMBOL_COUNT 81
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
    aux_sym_module_repeat1 = 72,
    aux_sym_print_statement_repeat1 = 73,
    aux_sym_if_statement_repeat1 = 74,
    aux_sym_try_statement_repeat1 = 75,
    aux_sym_with_statement_repeat1 = 76,
    aux_sym_parameters_repeat1 = 77,
    aux_sym_decorated_definition_repeat1 = 78,
    aux_sym_dotted_name_repeat1 = 79,
    aux_sym_subscript_repeat1 = 80,
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
    [aux_sym_module_repeat1] = "module_repeat1",
    [aux_sym_print_statement_repeat1] = "print_statement_repeat1",
    [aux_sym_if_statement_repeat1] = "if_statement_repeat1",
    [aux_sym_try_statement_repeat1] = "try_statement_repeat1",
    [aux_sym_with_statement_repeat1] = "with_statement_repeat1",
    [aux_sym_parameters_repeat1] = "parameters_repeat1",
    [aux_sym_decorated_definition_repeat1] = "decorated_definition_repeat1",
    [aux_sym_dotted_name_repeat1] = "dotted_name_repeat1",
    [aux_sym_subscript_repeat1] = "subscript_repeat1",
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
            if (lookahead == '.')
                ADVANCE(137);
            LEX_ERROR();
        case 137:
            ACCEPT_TOKEN(anon_sym_DOT);
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
            if (lookahead == '+')
                ADVANCE(7);
            if (lookahead == ',')
                ADVANCE(8);
            if (lookahead == '[')
                ADVANCE(19);
            LEX_ERROR();
        case 140:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(140);
            if (lookahead == '#')
                ADVANCE(2);
            if (lookahead == ')')
                ADVANCE(5);
            if (lookahead == ',')
                ADVANCE(8);
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
            if (lookahead == ':')
                ADVANCE(14);
            LEX_ERROR();
        case 143:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(143);
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
                ADVANCE(144);
            if (lookahead == 'd')
                ADVANCE(145);
            if (lookahead == 'p')
                ADVANCE(67);
            if (lookahead == 'r')
                ADVANCE(75);
            LEX_ERROR();
        case 144:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'n') ||
                ('p' <= lookahead && lookahead <= 'z'))
                ADVANCE(18);
            if (lookahead == 'o')
                ADVANCE(33);
            ACCEPT_TOKEN(sym_identifier);
        case 145:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'z'))
                ADVANCE(18);
            if (lookahead == 'e')
                ADVANCE(146);
            ACCEPT_TOKEN(sym_identifier);
        case 146:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'k') ||
                ('m' <= lookahead && lookahead <= 'z'))
                ADVANCE(18);
            if (lookahead == 'l')
                ADVANCE(43);
            ACCEPT_TOKEN(sym_identifier);
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
            LEX_ERROR();
        case 148:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(148);
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
        case 149:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(149);
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
        case 150:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(150);
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
        case 151:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(151);
            if (lookahead == '#')
                ADVANCE(2);
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
        case 152:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(152);
            if (lookahead == '#')
                ADVANCE(2);
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
        case 153:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(153);
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
        case 154:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(154);
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
        case 155:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(155);
            if (lookahead == '#')
                ADVANCE(2);
            if (lookahead == '*')
                ADVANCE(6);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(18);
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
                ADVANCE(8);
            if (lookahead == '=')
                ADVANCE(16);
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
                ADVANCE(8);
            if (lookahead == ':')
                ADVANCE(14);
            LEX_ERROR();
        case 159:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(159);
            if (lookahead == '#')
                ADVANCE(2);
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
        case 160:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(160);
            if (lookahead == '#')
                ADVANCE(2);
            if (lookahead == '+')
                ADVANCE(7);
            if (lookahead == ',')
                ADVANCE(8);
            if (lookahead == ':')
                ADVANCE(14);
            if (lookahead == '[')
                ADVANCE(19);
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
                ADVANCE(119);
            if (lookahead == 'f')
                ADVANCE(125);
            LEX_ERROR();
        case 162:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(162);
            if (lookahead == '#')
                ADVANCE(2);
            if (lookahead == '+')
                ADVANCE(7);
            if (lookahead == '[')
                ADVANCE(19);
            if (lookahead == 'e')
                ADVANCE(119);
            if (lookahead == 'f')
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
                ADVANCE(164);
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
        case 164:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'k') ||
                ('m' <= lookahead && lookahead <= 'w') ||
                (lookahead == 'y') ||
                (lookahead == 'z'))
                ADVANCE(18);
            if (lookahead == 'l')
                ADVANCE(165);
            if (lookahead == 'x')
                ADVANCE(50);
            ACCEPT_TOKEN(sym_identifier);
        case 165:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'r') ||
                ('t' <= lookahead && lookahead <= 'z'))
                ADVANCE(18);
            if (lookahead == 's')
                ADVANCE(48);
            ACCEPT_TOKEN(sym_identifier);
        case 166:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(166);
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
        case 167:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(167);
            if (lookahead == '#')
                ADVANCE(2);
            if (lookahead == '+')
                ADVANCE(7);
            if (lookahead == ':')
                ADVANCE(14);
            if (lookahead == '[')
                ADVANCE(19);
            LEX_ERROR();
        case 168:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(168);
            if (lookahead == '#')
                ADVANCE(2);
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
        case 169:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(169);
            if (lookahead == '#')
                ADVANCE(2);
            if (lookahead == ',')
                ADVANCE(8);
            if (lookahead == 'e')
                ADVANCE(119);
            if (lookahead == 'f')
                ADVANCE(125);
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
                ADVANCE(171);
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
        case 171:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'k') ||
                ('m' <= lookahead && lookahead <= 'z'))
                ADVANCE(18);
            if (lookahead == 'l')
                ADVANCE(165);
            ACCEPT_TOKEN(sym_identifier);
        case 172:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(172);
            if (lookahead == '#')
                ADVANCE(2);
            if (lookahead == 'i')
                ADVANCE(132);
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
                ADVANCE(174);
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
        case 174:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'k') ||
                ('m' <= lookahead && lookahead <= 'z'))
                ADVANCE(18);
            if (lookahead == 'l')
                ADVANCE(45);
            ACCEPT_TOKEN(sym_identifier);
        case 175:
            if (lookahead == 0)
                ADVANCE(1);
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(175);
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
        case 176:
            if (lookahead == 0)
                ADVANCE(1);
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(176);
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
                ADVANCE(164);
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
                ADVANCE(171);
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
                ADVANCE(174);
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
        case 180:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(180);
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
        case 181:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(181);
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
        case 183:
            if (lookahead == 0)
                ADVANCE(1);
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(183);
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
                ADVANCE(137);
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
                ADVANCE(164);
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
                ADVANCE(164);
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
                ADVANCE(164);
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
                ADVANCE(171);
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
                ADVANCE(171);
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
                ADVANCE(171);
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
            if (lookahead == '+')
                ADVANCE(7);
            if (lookahead == ',')
                ADVANCE(8);
            if (lookahead == '=')
                ADVANCE(16);
            if (lookahead == '[')
                ADVANCE(19);
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
                ADVANCE(174);
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
                ADVANCE(174);
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
                ADVANCE(174);
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
    [29] = {.lex_state = 113},
    [30] = {.lex_state = 115},
    [31] = {.lex_state = 116},
    [32] = {.lex_state = 134},
    [33] = {.lex_state = 135},
    [34] = {.lex_state = 95},
    [35] = {.lex_state = 113},
    [36] = {.lex_state = 99, .external_tokens = 2},
    [37] = {.lex_state = 115},
    [38] = {.lex_state = 135},
    [39] = {.lex_state = 99, .external_tokens = 2},
    [40] = {.lex_state = 115},
    [41] = {.lex_state = 99, .external_tokens = 2},
    [42] = {.lex_state = 134},
    [43] = {.lex_state = 115},
    [44] = {.lex_state = 134},
    [45] = {.lex_state = 135},
    [46] = {.lex_state = 116},
    [47] = {.lex_state = 115},
    [48] = {.lex_state = 135},
    [49] = {.lex_state = 116},
    [50] = {.lex_state = 116},
    [51] = {.lex_state = 115},
    [52] = {.lex_state = 134},
    [53] = {.lex_state = 116},
    [54] = {.lex_state = 99, .external_tokens = 2},
    [55] = {.lex_state = 101, .external_tokens = 2},
    [56] = {.lex_state = 136, .external_tokens = 2},
    [57] = {.lex_state = 138, .external_tokens = 2},
    [58] = {.lex_state = 95},
    [59] = {.lex_state = 103},
    [60] = {.lex_state = 102, .external_tokens = 2},
    [61] = {.lex_state = 103},
    [62] = {.lex_state = 139},
    [63] = {.lex_state = 95},
    [64] = {.lex_state = 102, .external_tokens = 2},
    [65] = {.lex_state = 140},
    [66] = {.lex_state = 95},
    [67] = {.lex_state = 102, .external_tokens = 2},
    [68] = {.lex_state = 141},
    [69] = {.lex_state = 141},
    [70] = {.lex_state = 98},
    [71] = {.lex_state = 136, .external_tokens = 2},
    [72] = {.lex_state = 98},
    [73] = {.lex_state = 136, .external_tokens = 2},
    [74] = {.lex_state = 136, .external_tokens = 2},
    [75] = {.lex_state = 142},
    [76] = {.lex_state = 143, .external_tokens = 3},
    [77] = {.lex_state = 95},
    [78] = {.lex_state = 147},
    [79] = {.lex_state = 141},
    [80] = {.lex_state = 148},
    [81] = {.lex_state = 97},
    [82] = {.lex_state = 143, .external_tokens = 3},
    [83] = {.lex_state = 149, .external_tokens = 4},
    [84] = {.lex_state = 96, .external_tokens = 2},
    [85] = {.lex_state = 101, .external_tokens = 2},
    [86] = {.lex_state = 95},
    [87] = {.lex_state = 95},
    [88] = {.lex_state = 95},
    [89] = {.lex_state = 97},
    [90] = {.lex_state = 95},
    [91] = {.lex_state = 98},
    [92] = {.lex_state = 98},
    [93] = {.lex_state = 96, .external_tokens = 2},
    [94] = {.lex_state = 149, .external_tokens = 4},
    [95] = {.lex_state = 102, .external_tokens = 2},
    [96] = {.lex_state = 149, .external_tokens = 4},
    [97] = {.lex_state = 149, .external_tokens = 4},
    [98] = {.lex_state = 149, .external_tokens = 4},
    [99] = {.lex_state = 103},
    [100] = {.lex_state = 149, .external_tokens = 4},
    [101] = {.lex_state = 96, .external_tokens = 2},
    [102] = {.lex_state = 149, .external_tokens = 4},
    [103] = {.lex_state = 149, .external_tokens = 4},
    [104] = {.lex_state = 142},
    [105] = {.lex_state = 143, .external_tokens = 3},
    [106] = {.lex_state = 95},
    [107] = {.lex_state = 147},
    [108] = {.lex_state = 97},
    [109] = {.lex_state = 143, .external_tokens = 3},
    [110] = {.lex_state = 95},
    [111] = {.lex_state = 95},
    [112] = {.lex_state = 95},
    [113] = {.lex_state = 150, .external_tokens = 4},
    [114] = {.lex_state = 151, .external_tokens = 4},
    [115] = {.lex_state = 149, .external_tokens = 4},
    [116] = {.lex_state = 150, .external_tokens = 4},
    [117] = {.lex_state = 149, .external_tokens = 4},
    [118] = {.lex_state = 152, .external_tokens = 4},
    [119] = {.lex_state = 95},
    [120] = {.lex_state = 113},
    [121] = {.lex_state = 115},
    [122] = {.lex_state = 134},
    [123] = {.lex_state = 135},
    [124] = {.lex_state = 151, .external_tokens = 4},
    [125] = {.lex_state = 115},
    [126] = {.lex_state = 135},
    [127] = {.lex_state = 151, .external_tokens = 4},
    [128] = {.lex_state = 151, .external_tokens = 4},
    [129] = {.lex_state = 151, .external_tokens = 4},
    [130] = {.lex_state = 150, .external_tokens = 4},
    [131] = {.lex_state = 149, .external_tokens = 4},
    [132] = {.lex_state = 150, .external_tokens = 4},
    [133] = {.lex_state = 150, .external_tokens = 4},
    [134] = {.lex_state = 151, .external_tokens = 4},
    [135] = {.lex_state = 95},
    [136] = {.lex_state = 153, .external_tokens = 4},
    [137] = {.lex_state = 95},
    [138] = {.lex_state = 151, .external_tokens = 4},
    [139] = {.lex_state = 151, .external_tokens = 4},
    [140] = {.lex_state = 150, .external_tokens = 4},
    [141] = {.lex_state = 151, .external_tokens = 4},
    [142] = {.lex_state = 153, .external_tokens = 4},
    [143] = {.lex_state = 149, .external_tokens = 4},
    [144] = {.lex_state = 138},
    [145] = {.lex_state = 154},
    [146] = {.lex_state = 97},
    [147] = {.lex_state = 143, .external_tokens = 3},
    [148] = {.lex_state = 149, .external_tokens = 4},
    [149] = {.lex_state = 97},
    [150] = {.lex_state = 155},
    [151] = {.lex_state = 156},
    [152] = {.lex_state = 140},
    [153] = {.lex_state = 140},
    [154] = {.lex_state = 147},
    [155] = {.lex_state = 155},
    [156] = {.lex_state = 156},
    [157] = {.lex_state = 140},
    [158] = {.lex_state = 140},
    [159] = {.lex_state = 147},
    [160] = {.lex_state = 97},
    [161] = {.lex_state = 157},
    [162] = {.lex_state = 157},
    [163] = {.lex_state = 147},
    [164] = {.lex_state = 97},
    [165] = {.lex_state = 98},
    [166] = {.lex_state = 147},
    [167] = {.lex_state = 154},
    [168] = {.lex_state = 97},
    [169] = {.lex_state = 95},
    [170] = {.lex_state = 139},
    [171] = {.lex_state = 97},
    [172] = {.lex_state = 157},
    [173] = {.lex_state = 147},
    [174] = {.lex_state = 154},
    [175] = {.lex_state = 140},
    [176] = {.lex_state = 158},
    [177] = {.lex_state = 159},
    [178] = {.lex_state = 95},
    [179] = {.lex_state = 160},
    [180] = {.lex_state = 95},
    [181] = {.lex_state = 143, .external_tokens = 3},
    [182] = {.lex_state = 158},
    [183] = {.lex_state = 95},
    [184] = {.lex_state = 143, .external_tokens = 3},
    [185] = {.lex_state = 149, .external_tokens = 4},
    [186] = {.lex_state = 158},
    [187] = {.lex_state = 149, .external_tokens = 4},
    [188] = {.lex_state = 158},
    [189] = {.lex_state = 143, .external_tokens = 3},
    [190] = {.lex_state = 95},
    [191] = {.lex_state = 95},
    [192] = {.lex_state = 95},
    [193] = {.lex_state = 161},
    [194] = {.lex_state = 149, .external_tokens = 4},
    [195] = {.lex_state = 161},
    [196] = {.lex_state = 161},
    [197] = {.lex_state = 162},
    [198] = {.lex_state = 95},
    [199] = {.lex_state = 97},
    [200] = {.lex_state = 163, .external_tokens = 4},
    [201] = {.lex_state = 149, .external_tokens = 4},
    [202] = {.lex_state = 163, .external_tokens = 4},
    [203] = {.lex_state = 97},
    [204] = {.lex_state = 166, .external_tokens = 4},
    [205] = {.lex_state = 163, .external_tokens = 4},
    [206] = {.lex_state = 149, .external_tokens = 4},
    [207] = {.lex_state = 149, .external_tokens = 4},
    [208] = {.lex_state = 143, .external_tokens = 3},
    [209] = {.lex_state = 166, .external_tokens = 4},
    [210] = {.lex_state = 143, .external_tokens = 3},
    [211] = {.lex_state = 149, .external_tokens = 4},
    [212] = {.lex_state = 159},
    [213] = {.lex_state = 95},
    [214] = {.lex_state = 143, .external_tokens = 3},
    [215] = {.lex_state = 167},
    [216] = {.lex_state = 143, .external_tokens = 3},
    [217] = {.lex_state = 163, .external_tokens = 4},
    [218] = {.lex_state = 163, .external_tokens = 4},
    [219] = {.lex_state = 161},
    [220] = {.lex_state = 149, .external_tokens = 4},
    [221] = {.lex_state = 161},
    [222] = {.lex_state = 161},
    [223] = {.lex_state = 161},
    [224] = {.lex_state = 168},
    [225] = {.lex_state = 169},
    [226] = {.lex_state = 167},
    [227] = {.lex_state = 143, .external_tokens = 3},
    [228] = {.lex_state = 170, .external_tokens = 4},
    [229] = {.lex_state = 149, .external_tokens = 4},
    [230] = {.lex_state = 172},
    [231] = {.lex_state = 95},
    [232] = {.lex_state = 97},
    [233] = {.lex_state = 143, .external_tokens = 3},
    [234] = {.lex_state = 170, .external_tokens = 4},
    [235] = {.lex_state = 149, .external_tokens = 4},
    [236] = {.lex_state = 167},
    [237] = {.lex_state = 143, .external_tokens = 3},
    [238] = {.lex_state = 173, .external_tokens = 4},
    [239] = {.lex_state = 95},
    [240] = {.lex_state = 173, .external_tokens = 4},
    [241] = {.lex_state = 149, .external_tokens = 4},
    [242] = {.lex_state = 173, .external_tokens = 4},
    [243] = {.lex_state = 173, .external_tokens = 4},
    [244] = {.lex_state = 149, .external_tokens = 4},
    [245] = {.lex_state = 167},
    [246] = {.lex_state = 143, .external_tokens = 3},
    [247] = {.lex_state = 173, .external_tokens = 4},
    [248] = {.lex_state = 96, .external_tokens = 2},
    [249] = {.lex_state = 99, .external_tokens = 2},
    [250] = {.lex_state = 95},
    [251] = {.lex_state = 175, .external_tokens = 2},
    [252] = {.lex_state = 95},
    [253] = {.lex_state = 99, .external_tokens = 2},
    [254] = {.lex_state = 99, .external_tokens = 2},
    [255] = {.lex_state = 96, .external_tokens = 2},
    [256] = {.lex_state = 99, .external_tokens = 2},
    [257] = {.lex_state = 175, .external_tokens = 2},
    [258] = {.lex_state = 101, .external_tokens = 2},
    [259] = {.lex_state = 138},
    [260] = {.lex_state = 97},
    [261] = {.lex_state = 143, .external_tokens = 3},
    [262] = {.lex_state = 101, .external_tokens = 2},
    [263] = {.lex_state = 158},
    [264] = {.lex_state = 143, .external_tokens = 3},
    [265] = {.lex_state = 158},
    [266] = {.lex_state = 143, .external_tokens = 3},
    [267] = {.lex_state = 101, .external_tokens = 2},
    [268] = {.lex_state = 101, .external_tokens = 2},
    [269] = {.lex_state = 143, .external_tokens = 3},
    [270] = {.lex_state = 161},
    [271] = {.lex_state = 95},
    [272] = {.lex_state = 97},
    [273] = {.lex_state = 176, .external_tokens = 2},
    [274] = {.lex_state = 101, .external_tokens = 2},
    [275] = {.lex_state = 176, .external_tokens = 2},
    [276] = {.lex_state = 97},
    [277] = {.lex_state = 177, .external_tokens = 2},
    [278] = {.lex_state = 176, .external_tokens = 2},
    [279] = {.lex_state = 101, .external_tokens = 2},
    [280] = {.lex_state = 101, .external_tokens = 2},
    [281] = {.lex_state = 143, .external_tokens = 3},
    [282] = {.lex_state = 177, .external_tokens = 2},
    [283] = {.lex_state = 143, .external_tokens = 3},
    [284] = {.lex_state = 101, .external_tokens = 2},
    [285] = {.lex_state = 159},
    [286] = {.lex_state = 95},
    [287] = {.lex_state = 143, .external_tokens = 3},
    [288] = {.lex_state = 167},
    [289] = {.lex_state = 143, .external_tokens = 3},
    [290] = {.lex_state = 176, .external_tokens = 2},
    [291] = {.lex_state = 176, .external_tokens = 2},
    [292] = {.lex_state = 167},
    [293] = {.lex_state = 143, .external_tokens = 3},
    [294] = {.lex_state = 178, .external_tokens = 2},
    [295] = {.lex_state = 101, .external_tokens = 2},
    [296] = {.lex_state = 172},
    [297] = {.lex_state = 95},
    [298] = {.lex_state = 97},
    [299] = {.lex_state = 143, .external_tokens = 3},
    [300] = {.lex_state = 178, .external_tokens = 2},
    [301] = {.lex_state = 101, .external_tokens = 2},
    [302] = {.lex_state = 167},
    [303] = {.lex_state = 143, .external_tokens = 3},
    [304] = {.lex_state = 179, .external_tokens = 2},
    [305] = {.lex_state = 95},
    [306] = {.lex_state = 179, .external_tokens = 2},
    [307] = {.lex_state = 101, .external_tokens = 2},
    [308] = {.lex_state = 179, .external_tokens = 2},
    [309] = {.lex_state = 179, .external_tokens = 2},
    [310] = {.lex_state = 101, .external_tokens = 2},
    [311] = {.lex_state = 167},
    [312] = {.lex_state = 143, .external_tokens = 3},
    [313] = {.lex_state = 179, .external_tokens = 2},
    [314] = {.lex_state = 95},
    [315] = {.lex_state = 180},
    [316] = {.lex_state = 95},
    [317] = {.lex_state = 95},
    [318] = {.lex_state = 96, .external_tokens = 5},
    [319] = {.lex_state = 95},
    [320] = {.lex_state = 143, .external_tokens = 3},
    [321] = {.lex_state = 95},
    [322] = {.lex_state = 97},
    [323] = {.lex_state = 95},
    [324] = {.lex_state = 95},
    [325] = {.lex_state = 95},
    [326] = {.lex_state = 97},
    [327] = {.lex_state = 95},
    [328] = {.lex_state = 95},
    [329] = {.lex_state = 97},
    [330] = {.lex_state = 95},
    [331] = {.lex_state = 98},
    [332] = {.lex_state = 181},
    [333] = {.lex_state = 97, .external_tokens = 2},
    [334] = {.lex_state = 155},
    [335] = {.lex_state = 98},
    [336] = {.lex_state = 98},
    [337] = {.lex_state = 95},
    [338] = {.lex_state = 113},
    [339] = {.lex_state = 115},
    [340] = {.lex_state = 182, .external_tokens = 5},
    [341] = {.lex_state = 182, .external_tokens = 5},
    [342] = {.lex_state = 183, .external_tokens = 5},
    [343] = {.lex_state = 101, .external_tokens = 5},
    [344] = {.lex_state = 149, .external_tokens = 4},
    [345] = {.lex_state = 96, .external_tokens = 5},
    [346] = {.lex_state = 101, .external_tokens = 5},
    [347] = {.lex_state = 96, .external_tokens = 5},
    [348] = {.lex_state = 101, .external_tokens = 5},
    [349] = {.lex_state = 101, .external_tokens = 5},
    [350] = {.lex_state = 179, .external_tokens = 5},
    [351] = {.lex_state = 177, .external_tokens = 5},
    [352] = {.lex_state = 176, .external_tokens = 5},
    [353] = {.lex_state = 101, .external_tokens = 5},
    [354] = {.lex_state = 158},
    [355] = {.lex_state = 101, .external_tokens = 5},
    [356] = {.lex_state = 97},
    [357] = {.lex_state = 140},
    [358] = {.lex_state = 140},
    [359] = {.lex_state = 147},
    [360] = {.lex_state = 103},
    [361] = {.lex_state = 96, .external_tokens = 5},
    [362] = {.lex_state = 184, .external_tokens = 5},
    [363] = {.lex_state = 182, .external_tokens = 5},
    [364] = {.lex_state = 101, .external_tokens = 5},
    [365] = {.lex_state = 185, .external_tokens = 5},
    [366] = {.lex_state = 179, .external_tokens = 5},
    [367] = {.lex_state = 176, .external_tokens = 5},
    [368] = {.lex_state = 158},
    [369] = {.lex_state = 103},
    [370] = {.lex_state = 115},
    [371] = {.lex_state = 135},
    [372] = {.lex_state = 182, .external_tokens = 5},
    [373] = {.lex_state = 182, .external_tokens = 5},
    [374] = {.lex_state = 101, .external_tokens = 5},
    [375] = {.lex_state = 143, .external_tokens = 3},
    [376] = {.lex_state = 95},
    [377] = {.lex_state = 95},
    [378] = {.lex_state = 95},
    [379] = {.lex_state = 96, .external_tokens = 5},
    [380] = {.lex_state = 101, .external_tokens = 5},
    [381] = {.lex_state = 186, .external_tokens = 5},
    [382] = {.lex_state = 95},
    [383] = {.lex_state = 115},
    [384] = {.lex_state = 134},
    [385] = {.lex_state = 135},
    [386] = {.lex_state = 182, .external_tokens = 5},
    [387] = {.lex_state = 186, .external_tokens = 5},
    [388] = {.lex_state = 96, .external_tokens = 5},
    [389] = {.lex_state = 149, .external_tokens = 4},
    [390] = {.lex_state = 96, .external_tokens = 5},
    [391] = {.lex_state = 96, .external_tokens = 5},
    [392] = {.lex_state = 187, .external_tokens = 5},
    [393] = {.lex_state = 95},
    [394] = {.lex_state = 95},
    [395] = {.lex_state = 188, .external_tokens = 5},
    [396] = {.lex_state = 95},
    [397] = {.lex_state = 187, .external_tokens = 5},
    [398] = {.lex_state = 187, .external_tokens = 5},
    [399] = {.lex_state = 187, .external_tokens = 5},
    [400] = {.lex_state = 96, .external_tokens = 5},
    [401] = {.lex_state = 187, .external_tokens = 5},
    [402] = {.lex_state = 188, .external_tokens = 5},
    [403] = {.lex_state = 177, .external_tokens = 5},
    [404] = {.lex_state = 176, .external_tokens = 5},
    [405] = {.lex_state = 101, .external_tokens = 5},
    [406] = {.lex_state = 101, .external_tokens = 5},
    [407] = {.lex_state = 97},
    [408] = {.lex_state = 179, .external_tokens = 5},
    [409] = {.lex_state = 101, .external_tokens = 5},
    [410] = {.lex_state = 143, .external_tokens = 3},
    [411] = {.lex_state = 177, .external_tokens = 5},
    [412] = {.lex_state = 95},
    [413] = {.lex_state = 189, .external_tokens = 5},
    [414] = {.lex_state = 95},
    [415] = {.lex_state = 189, .external_tokens = 5},
    [416] = {.lex_state = 101, .external_tokens = 5},
    [417] = {.lex_state = 102, .external_tokens = 2},
    [418] = {.lex_state = 101, .external_tokens = 5},
    [419] = {.lex_state = 135},
    [420] = {.lex_state = 143, .external_tokens = 3},
    [421] = {.lex_state = 96, .external_tokens = 5},
    [422] = {.lex_state = 112, .external_tokens = 5},
    [423] = {.lex_state = 95},
    [424] = {.lex_state = 112, .external_tokens = 5},
    [425] = {.lex_state = 179, .external_tokens = 5},
    [426] = {.lex_state = 101, .external_tokens = 5},
    [427] = {.lex_state = 190, .external_tokens = 5},
    [428] = {.lex_state = 143, .external_tokens = 3},
    [429] = {.lex_state = 95},
    [430] = {.lex_state = 190, .external_tokens = 5},
    [431] = {.lex_state = 95},
    [432] = {.lex_state = 95},
    [433] = {.lex_state = 95},
    [434] = {.lex_state = 176, .external_tokens = 5},
    [435] = {.lex_state = 191, .external_tokens = 5},
    [436] = {.lex_state = 95},
    [437] = {.lex_state = 191, .external_tokens = 5},
    [438] = {.lex_state = 192, .external_tokens = 5},
    [439] = {.lex_state = 95},
    [440] = {.lex_state = 95},
    [441] = {.lex_state = 193, .external_tokens = 5},
    [442] = {.lex_state = 95},
    [443] = {.lex_state = 192, .external_tokens = 5},
    [444] = {.lex_state = 192, .external_tokens = 5},
    [445] = {.lex_state = 192, .external_tokens = 5},
    [446] = {.lex_state = 192, .external_tokens = 5},
    [447] = {.lex_state = 193, .external_tokens = 5},
    [448] = {.lex_state = 143, .external_tokens = 3},
    [449] = {.lex_state = 97},
    [450] = {.lex_state = 143, .external_tokens = 3},
    [451] = {.lex_state = 101, .external_tokens = 5},
    [452] = {.lex_state = 95},
    [453] = {.lex_state = 95},
    [454] = {.lex_state = 95},
    [455] = {.lex_state = 178, .external_tokens = 5},
    [456] = {.lex_state = 194, .external_tokens = 5},
    [457] = {.lex_state = 95},
    [458] = {.lex_state = 194, .external_tokens = 5},
    [459] = {.lex_state = 101, .external_tokens = 5},
    [460] = {.lex_state = 195, .external_tokens = 5},
    [461] = {.lex_state = 95},
    [462] = {.lex_state = 95},
    [463] = {.lex_state = 196, .external_tokens = 5},
    [464] = {.lex_state = 95},
    [465] = {.lex_state = 195, .external_tokens = 5},
    [466] = {.lex_state = 195, .external_tokens = 5},
    [467] = {.lex_state = 195, .external_tokens = 5},
    [468] = {.lex_state = 195, .external_tokens = 5},
    [469] = {.lex_state = 196, .external_tokens = 5},
    [470] = {.lex_state = 101, .external_tokens = 5},
    [471] = {.lex_state = 176, .external_tokens = 5},
    [472] = {.lex_state = 101, .external_tokens = 5},
    [473] = {.lex_state = 97},
    [474] = {.lex_state = 157},
    [475] = {.lex_state = 97},
    [476] = {.lex_state = 147},
    [477] = {.lex_state = 97},
    [478] = {.lex_state = 154},
    [479] = {.lex_state = 97},
    [480] = {.lex_state = 143, .external_tokens = 3},
    [481] = {.lex_state = 101, .external_tokens = 5},
    [482] = {.lex_state = 143, .external_tokens = 3},
    [483] = {.lex_state = 101, .external_tokens = 5},
    [484] = {.lex_state = 143, .external_tokens = 3},
    [485] = {.lex_state = 181},
    [486] = {.lex_state = 197},
    [487] = {.lex_state = 147},
    [488] = {.lex_state = 101, .external_tokens = 5},
    [489] = {.lex_state = 182, .external_tokens = 5},
    [490] = {.lex_state = 136, .external_tokens = 2},
    [491] = {.lex_state = 142},
    [492] = {.lex_state = 95},
    [493] = {.lex_state = 140},
    [494] = {.lex_state = 139},
    [495] = {.lex_state = 140},
    [496] = {.lex_state = 138},
    [497] = {.lex_state = 158},
    [498] = {.lex_state = 143, .external_tokens = 3},
    [499] = {.lex_state = 101, .external_tokens = 5},
    [500] = {.lex_state = 160},
    [501] = {.lex_state = 159},
    [502] = {.lex_state = 95},
    [503] = {.lex_state = 143, .external_tokens = 3},
    [504] = {.lex_state = 167},
    [505] = {.lex_state = 176, .external_tokens = 5},
    [506] = {.lex_state = 143, .external_tokens = 3},
    [507] = {.lex_state = 161},
    [508] = {.lex_state = 167},
    [509] = {.lex_state = 143, .external_tokens = 3},
    [510] = {.lex_state = 178, .external_tokens = 5},
    [511] = {.lex_state = 101, .external_tokens = 5},
    [512] = {.lex_state = 97},
    [513] = {.lex_state = 172},
    [514] = {.lex_state = 143, .external_tokens = 3},
    [515] = {.lex_state = 95},
    [516] = {.lex_state = 95},
    [517] = {.lex_state = 95},
    [518] = {.lex_state = 198, .external_tokens = 5},
    [519] = {.lex_state = 95},
    [520] = {.lex_state = 198, .external_tokens = 5},
    [521] = {.lex_state = 199, .external_tokens = 5},
    [522] = {.lex_state = 95},
    [523] = {.lex_state = 95},
    [524] = {.lex_state = 200, .external_tokens = 5},
    [525] = {.lex_state = 95},
    [526] = {.lex_state = 199, .external_tokens = 5},
    [527] = {.lex_state = 199, .external_tokens = 5},
    [528] = {.lex_state = 199, .external_tokens = 5},
    [529] = {.lex_state = 199, .external_tokens = 5},
    [530] = {.lex_state = 200, .external_tokens = 5},
    [531] = {.lex_state = 167},
    [532] = {.lex_state = 143, .external_tokens = 3},
    [533] = {.lex_state = 95},
    [534] = {.lex_state = 95},
    [535] = {.lex_state = 95},
    [536] = {.lex_state = 179, .external_tokens = 5},
    [537] = {.lex_state = 201, .external_tokens = 5},
    [538] = {.lex_state = 95},
    [539] = {.lex_state = 201, .external_tokens = 5},
    [540] = {.lex_state = 202, .external_tokens = 5},
    [541] = {.lex_state = 95},
    [542] = {.lex_state = 95},
    [543] = {.lex_state = 203, .external_tokens = 5},
    [544] = {.lex_state = 95},
    [545] = {.lex_state = 202, .external_tokens = 5},
    [546] = {.lex_state = 202, .external_tokens = 5},
    [547] = {.lex_state = 202, .external_tokens = 5},
    [548] = {.lex_state = 202, .external_tokens = 5},
    [549] = {.lex_state = 203, .external_tokens = 5},
    [550] = {.lex_state = 167},
    [551] = {.lex_state = 143, .external_tokens = 3},
    [552] = {.lex_state = 179, .external_tokens = 5},
    [553] = {.lex_state = 101, .external_tokens = 5},
    [554] = {.lex_state = 99, .external_tokens = 5},
    [555] = {.lex_state = 95},
    [556] = {.lex_state = 95},
    [557] = {.lex_state = 175, .external_tokens = 5},
    [558] = {.lex_state = 95},
    [559] = {.lex_state = 99, .external_tokens = 5},
    [560] = {.lex_state = 99, .external_tokens = 5},
    [561] = {.lex_state = 99, .external_tokens = 5},
    [562] = {.lex_state = 115},
    [563] = {.lex_state = 182, .external_tokens = 5},
    [564] = {.lex_state = 158},
    [565] = {.lex_state = 182, .external_tokens = 5},
    [566] = {.lex_state = 99, .external_tokens = 5},
    [567] = {.lex_state = 175, .external_tokens = 5},
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
        [sym__statement] = STATE(346),
        [sym__simple_statement] = STATE(347),
        [sym_print_statement] = STATE(318),
        [sym_expression_statement] = STATE(318),
        [sym_return_statement] = STATE(318),
        [sym_delete_statement] = STATE(318),
        [sym__compound_statement] = STATE(348),
        [sym_if_statement] = STATE(349),
        [sym_elif_clause] = STATE(350),
        [sym_else_clause] = STATE(351),
        [sym_for_statement] = STATE(349),
        [sym_while_statement] = STATE(349),
        [sym_try_statement] = STATE(349),
        [sym_except_clause] = STATE(352),
        [sym_finally_clause] = STATE(353),
        [sym_with_statement] = STATE(349),
        [sym_with_item] = STATE(354),
        [sym_function_definition] = STATE(355),
        [sym_parameters] = STATE(356),
        [sym_default_parameter] = STATE(357),
        [sym_list_splat_parameter] = STATE(358),
        [sym_dictionary_splat_parameter] = STATE(359),
        [sym_class_definition] = STATE(355),
        [sym_decorated_definition] = STATE(349),
        [sym_decorator] = STATE(360),
        [sym__suite] = STATE(361),
        [sym_arguments] = STATE(60),
        [sym_expression_list] = STATE(362),
        [sym_dotted_name] = STATE(57),
        [sym__expression] = STATE(363),
        [sym_binary_operator] = STATE(341),
        [sym_subscript] = STATE(341),
        [aux_sym_module_repeat1] = STATE(364),
        [aux_sym_print_statement_repeat1] = STATE(365),
        [aux_sym_if_statement_repeat1] = STATE(366),
        [aux_sym_try_statement_repeat1] = STATE(367),
        [aux_sym_with_statement_repeat1] = STATE(368),
        [aux_sym_parameters_repeat1] = STATE(155),
        [aux_sym_decorated_definition_repeat1] = STATE(369),
        [aux_sym_dotted_name_repeat1] = STATE(71),
        [aux_sym_subscript_repeat1] = STATE(370),
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
        [sym__expression] = STATE(256),
        [sym_binary_operator] = STATE(14),
        [sym_subscript] = STATE(14),
        [sym_number] = ACTIONS(101),
        [sym_identifier] = ACTIONS(101),
        [sym_comment] = ACTIONS(67),
    },
    [3] = {
        [sym_expression_list] = STATE(255),
        [sym__expression] = STATE(249),
        [sym_binary_operator] = STATE(14),
        [sym_subscript] = STATE(14),
        [sym_number] = ACTIONS(101),
        [sym_identifier] = ACTIONS(101),
        [sym_comment] = ACTIONS(67),
    },
    [4] = {
        [sym_expression_list] = STATE(248),
        [sym__expression] = STATE(249),
        [sym_binary_operator] = STATE(14),
        [sym_subscript] = STATE(14),
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
        [sym__expression] = STATE(302),
        [sym_binary_operator] = STATE(31),
        [sym_subscript] = STATE(31),
        [sym_number] = ACTIONS(111),
        [sym_identifier] = ACTIONS(111),
        [sym_comment] = ACTIONS(67),
    },
    [7] = {
        [sym_expression_list] = STATE(296),
        [sym__expression] = STATE(79),
        [sym_binary_operator] = STATE(31),
        [sym_subscript] = STATE(31),
        [sym_number] = ACTIONS(111),
        [sym_identifier] = ACTIONS(111),
        [sym_comment] = ACTIONS(67),
    },
    [8] = {
        [sym__expression] = STATE(292),
        [sym_binary_operator] = STATE(31),
        [sym_subscript] = STATE(31),
        [sym_number] = ACTIONS(111),
        [sym_identifier] = ACTIONS(111),
        [sym_comment] = ACTIONS(67),
    },
    [9] = {
        [anon_sym_COLON] = ACTIONS(113),
        [sym_comment] = ACTIONS(67),
    },
    [10] = {
        [sym_with_item] = STATE(263),
        [sym__expression] = STATE(177),
        [sym_binary_operator] = STATE(31),
        [sym_subscript] = STATE(31),
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
        [sym_dotted_name] = STATE(57),
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
        [anon_sym_class] = ACTIONS(153),
        [anon_sym_AT] = ACTIONS(151),
        [anon_sym_PLUS] = ACTIONS(155),
        [anon_sym_LBRACK] = ACTIONS(157),
        [sym_number] = ACTIONS(153),
        [sym_identifier] = ACTIONS(159),
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
        [aux_sym_decorated_definition_repeat1] = STATE(23),
        [ts_builtin_sym_end] = ACTIONS(161),
        [anon_sym_SEMI] = ACTIONS(163),
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
        [sym__newline] = ACTIONS(163),
    },
    [23] = {
        [sym_function_definition] = STATE(24),
        [sym_class_definition] = STATE(24),
        [sym_decorator] = STATE(25),
        [anon_sym_def] = ACTIONS(165),
        [anon_sym_class] = ACTIONS(167),
        [anon_sym_AT] = ACTIONS(99),
        [sym_comment] = ACTIONS(67),
    },
    [24] = {
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
        [sym_number] = ACTIONS(171),
        [sym_identifier] = ACTIONS(173),
        [sym_comment] = ACTIONS(67),
        [sym__newline] = ACTIONS(169),
    },
    [25] = {
        [anon_sym_def] = ACTIONS(175),
        [anon_sym_class] = ACTIONS(175),
        [anon_sym_AT] = ACTIONS(175),
        [sym_comment] = ACTIONS(67),
    },
    [26] = {
        [ts_builtin_sym_end] = ACTIONS(177),
        [sym_comment] = ACTIONS(67),
    },
    [27] = {
        [ts_builtin_sym_end] = ACTIONS(179),
        [anon_sym_SEMI] = ACTIONS(179),
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
        [sym_number] = ACTIONS(181),
        [sym_identifier] = ACTIONS(183),
        [sym_comment] = ACTIONS(67),
        [sym__newline] = ACTIONS(179),
    },
    [28] = {
        [sym__expression] = STATE(54),
        [sym_binary_operator] = STATE(14),
        [sym_subscript] = STATE(14),
        [sym_number] = ACTIONS(101),
        [sym_identifier] = ACTIONS(101),
        [sym_comment] = ACTIONS(67),
    },
    [29] = {
        [sym__expression] = STATE(32),
        [sym_binary_operator] = STATE(31),
        [sym_subscript] = STATE(31),
        [anon_sym_DOT_DOT_DOT] = ACTIONS(185),
        [sym_number] = ACTIONS(111),
        [sym_identifier] = ACTIONS(111),
        [sym_comment] = ACTIONS(67),
    },
    [30] = {
        [aux_sym_subscript_repeat1] = STATE(37),
        [anon_sym_COMMA] = ACTIONS(187),
        [anon_sym_RBRACK] = ACTIONS(189),
        [sym_comment] = ACTIONS(67),
    },
    [31] = {
        [anon_sym_COMMA] = ACTIONS(121),
        [anon_sym_COLON] = ACTIONS(121),
        [anon_sym_in] = ACTIONS(121),
        [anon_sym_except] = ACTIONS(121),
        [anon_sym_as] = ACTIONS(121),
        [anon_sym_finally] = ACTIONS(121),
        [anon_sym_RPAREN] = ACTIONS(121),
        [anon_sym_PLUS] = ACTIONS(121),
        [anon_sym_LBRACK] = ACTIONS(121),
        [anon_sym_RBRACK] = ACTIONS(121),
        [sym_comment] = ACTIONS(67),
    },
    [32] = {
        [aux_sym_subscript_repeat1] = STATE(37),
        [anon_sym_COMMA] = ACTIONS(187),
        [anon_sym_PLUS] = ACTIONS(191),
        [anon_sym_LBRACK] = ACTIONS(193),
        [anon_sym_RBRACK] = ACTIONS(189),
        [sym_comment] = ACTIONS(67),
    },
    [33] = {
        [sym__expression] = STATE(52),
        [sym_binary_operator] = STATE(31),
        [sym_subscript] = STATE(31),
        [anon_sym_DOT_DOT_DOT] = ACTIONS(195),
        [anon_sym_RBRACK] = ACTIONS(197),
        [sym_number] = ACTIONS(111),
        [sym_identifier] = ACTIONS(111),
        [sym_comment] = ACTIONS(67),
    },
    [34] = {
        [sym__expression] = STATE(53),
        [sym_binary_operator] = STATE(31),
        [sym_subscript] = STATE(31),
        [sym_number] = ACTIONS(111),
        [sym_identifier] = ACTIONS(111),
        [sym_comment] = ACTIONS(67),
    },
    [35] = {
        [sym__expression] = STATE(44),
        [sym_binary_operator] = STATE(31),
        [sym_subscript] = STATE(31),
        [anon_sym_DOT_DOT_DOT] = ACTIONS(199),
        [sym_number] = ACTIONS(111),
        [sym_identifier] = ACTIONS(111),
        [sym_comment] = ACTIONS(67),
    },
    [36] = {
        [ts_builtin_sym_end] = ACTIONS(201),
        [anon_sym_SEMI] = ACTIONS(201),
        [anon_sym_print] = ACTIONS(203),
        [anon_sym_COMMA] = ACTIONS(201),
        [anon_sym_return] = ACTIONS(203),
        [anon_sym_del] = ACTIONS(203),
        [sym_pass_statement] = ACTIONS(203),
        [sym_break_statement] = ACTIONS(203),
        [sym_continue_statement] = ACTIONS(203),
        [anon_sym_if] = ACTIONS(203),
        [anon_sym_elif] = ACTIONS(203),
        [anon_sym_else] = ACTIONS(203),
        [anon_sym_for] = ACTIONS(203),
        [anon_sym_while] = ACTIONS(203),
        [anon_sym_try] = ACTIONS(203),
        [anon_sym_except] = ACTIONS(203),
        [anon_sym_finally] = ACTIONS(203),
        [anon_sym_with] = ACTIONS(203),
        [anon_sym_def] = ACTIONS(203),
        [anon_sym_class] = ACTIONS(203),
        [anon_sym_AT] = ACTIONS(201),
        [anon_sym_PLUS] = ACTIONS(201),
        [anon_sym_LBRACK] = ACTIONS(201),
        [sym_number] = ACTIONS(203),
        [sym_identifier] = ACTIONS(205),
        [sym_comment] = ACTIONS(67),
        [sym__newline] = ACTIONS(201),
    },
    [37] = {
        [anon_sym_COMMA] = ACTIONS(207),
        [anon_sym_RBRACK] = ACTIONS(197),
        [sym_comment] = ACTIONS(67),
    },
    [38] = {
        [sym__expression] = STATE(42),
        [sym_binary_operator] = STATE(31),
        [sym_subscript] = STATE(31),
        [anon_sym_DOT_DOT_DOT] = ACTIONS(209),
        [anon_sym_RBRACK] = ACTIONS(211),
        [sym_number] = ACTIONS(111),
        [sym_identifier] = ACTIONS(111),
        [sym_comment] = ACTIONS(67),
    },
    [39] = {
        [ts_builtin_sym_end] = ACTIONS(213),
        [anon_sym_SEMI] = ACTIONS(213),
        [anon_sym_print] = ACTIONS(215),
        [anon_sym_COMMA] = ACTIONS(213),
        [anon_sym_return] = ACTIONS(215),
        [anon_sym_del] = ACTIONS(215),
        [sym_pass_statement] = ACTIONS(215),
        [sym_break_statement] = ACTIONS(215),
        [sym_continue_statement] = ACTIONS(215),
        [anon_sym_if] = ACTIONS(215),
        [anon_sym_elif] = ACTIONS(215),
        [anon_sym_else] = ACTIONS(215),
        [anon_sym_for] = ACTIONS(215),
        [anon_sym_while] = ACTIONS(215),
        [anon_sym_try] = ACTIONS(215),
        [anon_sym_except] = ACTIONS(215),
        [anon_sym_finally] = ACTIONS(215),
        [anon_sym_with] = ACTIONS(215),
        [anon_sym_def] = ACTIONS(215),
        [anon_sym_class] = ACTIONS(215),
        [anon_sym_AT] = ACTIONS(213),
        [anon_sym_PLUS] = ACTIONS(213),
        [anon_sym_LBRACK] = ACTIONS(213),
        [sym_number] = ACTIONS(215),
        [sym_identifier] = ACTIONS(217),
        [sym_comment] = ACTIONS(67),
        [sym__newline] = ACTIONS(213),
    },
    [40] = {
        [anon_sym_COMMA] = ACTIONS(219),
        [anon_sym_RBRACK] = ACTIONS(219),
        [sym_comment] = ACTIONS(67),
    },
    [41] = {
        [ts_builtin_sym_end] = ACTIONS(221),
        [anon_sym_SEMI] = ACTIONS(221),
        [anon_sym_print] = ACTIONS(223),
        [anon_sym_COMMA] = ACTIONS(221),
        [anon_sym_return] = ACTIONS(223),
        [anon_sym_del] = ACTIONS(223),
        [sym_pass_statement] = ACTIONS(223),
        [sym_break_statement] = ACTIONS(223),
        [sym_continue_statement] = ACTIONS(223),
        [anon_sym_if] = ACTIONS(223),
        [anon_sym_elif] = ACTIONS(223),
        [anon_sym_else] = ACTIONS(223),
        [anon_sym_for] = ACTIONS(223),
        [anon_sym_while] = ACTIONS(223),
        [anon_sym_try] = ACTIONS(223),
        [anon_sym_except] = ACTIONS(223),
        [anon_sym_finally] = ACTIONS(223),
        [anon_sym_with] = ACTIONS(223),
        [anon_sym_def] = ACTIONS(223),
        [anon_sym_class] = ACTIONS(223),
        [anon_sym_AT] = ACTIONS(221),
        [anon_sym_PLUS] = ACTIONS(221),
        [anon_sym_LBRACK] = ACTIONS(221),
        [sym_number] = ACTIONS(223),
        [sym_identifier] = ACTIONS(225),
        [sym_comment] = ACTIONS(67),
        [sym__newline] = ACTIONS(221),
    },
    [42] = {
        [anon_sym_COMMA] = ACTIONS(219),
        [anon_sym_PLUS] = ACTIONS(191),
        [anon_sym_LBRACK] = ACTIONS(193),
        [anon_sym_RBRACK] = ACTIONS(219),
        [sym_comment] = ACTIONS(67),
    },
    [43] = {
        [aux_sym_subscript_repeat1] = STATE(47),
        [anon_sym_COMMA] = ACTIONS(227),
        [anon_sym_RBRACK] = ACTIONS(229),
        [sym_comment] = ACTIONS(67),
    },
    [44] = {
        [aux_sym_subscript_repeat1] = STATE(47),
        [anon_sym_COMMA] = ACTIONS(227),
        [anon_sym_PLUS] = ACTIONS(191),
        [anon_sym_LBRACK] = ACTIONS(193),
        [anon_sym_RBRACK] = ACTIONS(229),
        [sym_comment] = ACTIONS(67),
    },
    [45] = {
        [sym__expression] = STATE(52),
        [sym_binary_operator] = STATE(31),
        [sym_subscript] = STATE(31),
        [anon_sym_DOT_DOT_DOT] = ACTIONS(195),
        [anon_sym_RBRACK] = ACTIONS(231),
        [sym_number] = ACTIONS(111),
        [sym_identifier] = ACTIONS(111),
        [sym_comment] = ACTIONS(67),
    },
    [46] = {
        [anon_sym_COMMA] = ACTIONS(201),
        [anon_sym_COLON] = ACTIONS(201),
        [anon_sym_in] = ACTIONS(201),
        [anon_sym_except] = ACTIONS(201),
        [anon_sym_as] = ACTIONS(201),
        [anon_sym_finally] = ACTIONS(201),
        [anon_sym_RPAREN] = ACTIONS(201),
        [anon_sym_PLUS] = ACTIONS(201),
        [anon_sym_LBRACK] = ACTIONS(201),
        [anon_sym_RBRACK] = ACTIONS(201),
        [sym_comment] = ACTIONS(67),
    },
    [47] = {
        [anon_sym_COMMA] = ACTIONS(233),
        [anon_sym_RBRACK] = ACTIONS(231),
        [sym_comment] = ACTIONS(67),
    },
    [48] = {
        [sym__expression] = STATE(42),
        [sym_binary_operator] = STATE(31),
        [sym_subscript] = STATE(31),
        [anon_sym_DOT_DOT_DOT] = ACTIONS(209),
        [anon_sym_RBRACK] = ACTIONS(235),
        [sym_number] = ACTIONS(111),
        [sym_identifier] = ACTIONS(111),
        [sym_comment] = ACTIONS(67),
    },
    [49] = {
        [anon_sym_COMMA] = ACTIONS(213),
        [anon_sym_COLON] = ACTIONS(213),
        [anon_sym_in] = ACTIONS(213),
        [anon_sym_except] = ACTIONS(213),
        [anon_sym_as] = ACTIONS(213),
        [anon_sym_finally] = ACTIONS(213),
        [anon_sym_RPAREN] = ACTIONS(213),
        [anon_sym_PLUS] = ACTIONS(213),
        [anon_sym_LBRACK] = ACTIONS(213),
        [anon_sym_RBRACK] = ACTIONS(213),
        [sym_comment] = ACTIONS(67),
    },
    [50] = {
        [anon_sym_COMMA] = ACTIONS(221),
        [anon_sym_COLON] = ACTIONS(221),
        [anon_sym_in] = ACTIONS(221),
        [anon_sym_except] = ACTIONS(221),
        [anon_sym_as] = ACTIONS(221),
        [anon_sym_finally] = ACTIONS(221),
        [anon_sym_RPAREN] = ACTIONS(221),
        [anon_sym_PLUS] = ACTIONS(221),
        [anon_sym_LBRACK] = ACTIONS(221),
        [anon_sym_RBRACK] = ACTIONS(221),
        [sym_comment] = ACTIONS(67),
    },
    [51] = {
        [anon_sym_COMMA] = ACTIONS(237),
        [anon_sym_RBRACK] = ACTIONS(237),
        [sym_comment] = ACTIONS(67),
    },
    [52] = {
        [anon_sym_COMMA] = ACTIONS(237),
        [anon_sym_PLUS] = ACTIONS(191),
        [anon_sym_LBRACK] = ACTIONS(193),
        [anon_sym_RBRACK] = ACTIONS(237),
        [sym_comment] = ACTIONS(67),
    },
    [53] = {
        [anon_sym_COMMA] = ACTIONS(239),
        [anon_sym_COLON] = ACTIONS(239),
        [anon_sym_in] = ACTIONS(239),
        [anon_sym_except] = ACTIONS(239),
        [anon_sym_as] = ACTIONS(239),
        [anon_sym_finally] = ACTIONS(239),
        [anon_sym_RPAREN] = ACTIONS(239),
        [anon_sym_PLUS] = ACTIONS(239),
        [anon_sym_LBRACK] = ACTIONS(239),
        [anon_sym_RBRACK] = ACTIONS(239),
        [sym_comment] = ACTIONS(67),
    },
    [54] = {
        [ts_builtin_sym_end] = ACTIONS(239),
        [anon_sym_SEMI] = ACTIONS(239),
        [anon_sym_print] = ACTIONS(241),
        [anon_sym_COMMA] = ACTIONS(239),
        [anon_sym_return] = ACTIONS(241),
        [anon_sym_del] = ACTIONS(241),
        [sym_pass_statement] = ACTIONS(241),
        [sym_break_statement] = ACTIONS(241),
        [sym_continue_statement] = ACTIONS(241),
        [anon_sym_if] = ACTIONS(241),
        [anon_sym_elif] = ACTIONS(241),
        [anon_sym_else] = ACTIONS(241),
        [anon_sym_for] = ACTIONS(241),
        [anon_sym_while] = ACTIONS(241),
        [anon_sym_try] = ACTIONS(241),
        [anon_sym_except] = ACTIONS(241),
        [anon_sym_finally] = ACTIONS(241),
        [anon_sym_with] = ACTIONS(241),
        [anon_sym_def] = ACTIONS(241),
        [anon_sym_class] = ACTIONS(241),
        [anon_sym_AT] = ACTIONS(239),
        [anon_sym_PLUS] = ACTIONS(239),
        [anon_sym_LBRACK] = ACTIONS(239),
        [sym_number] = ACTIONS(241),
        [sym_identifier] = ACTIONS(243),
        [sym_comment] = ACTIONS(67),
        [sym__newline] = ACTIONS(239),
    },
    [55] = {
        [ts_builtin_sym_end] = ACTIONS(245),
        [anon_sym_SEMI] = ACTIONS(245),
        [anon_sym_print] = ACTIONS(247),
        [anon_sym_return] = ACTIONS(247),
        [anon_sym_del] = ACTIONS(247),
        [sym_pass_statement] = ACTIONS(247),
        [sym_break_statement] = ACTIONS(247),
        [sym_continue_statement] = ACTIONS(247),
        [anon_sym_if] = ACTIONS(247),
        [anon_sym_for] = ACTIONS(247),
        [anon_sym_while] = ACTIONS(247),
        [anon_sym_try] = ACTIONS(247),
        [anon_sym_with] = ACTIONS(247),
        [anon_sym_def] = ACTIONS(247),
        [anon_sym_class] = ACTIONS(247),
        [anon_sym_AT] = ACTIONS(245),
        [sym_number] = ACTIONS(247),
        [sym_identifier] = ACTIONS(249),
        [sym_comment] = ACTIONS(67),
        [sym__newline] = ACTIONS(245),
    },
    [56] = {
        [aux_sym_dotted_name_repeat1] = STATE(71),
        [anon_sym_LPAREN] = ACTIONS(251),
        [anon_sym_DOT] = ACTIONS(253),
        [sym_comment] = ACTIONS(67),
        [sym__newline] = ACTIONS(251),
    },
    [57] = {
        [sym_arguments] = STATE(60),
        [anon_sym_LPAREN] = ACTIONS(255),
        [sym_comment] = ACTIONS(67),
        [sym__newline] = ACTIONS(257),
    },
    [58] = {
        [sym__expression] = STATE(62),
        [sym_binary_operator] = STATE(31),
        [sym_subscript] = STATE(31),
        [sym_number] = ACTIONS(111),
        [sym_identifier] = ACTIONS(111),
        [sym_comment] = ACTIONS(67),
    },
    [59] = {
        [anon_sym_def] = ACTIONS(259),
        [anon_sym_class] = ACTIONS(259),
        [anon_sym_AT] = ACTIONS(259),
        [sym_comment] = ACTIONS(67),
    },
    [60] = {
        [sym_comment] = ACTIONS(67),
        [sym__newline] = ACTIONS(261),
    },
    [61] = {
        [anon_sym_def] = ACTIONS(263),
        [anon_sym_class] = ACTIONS(263),
        [anon_sym_AT] = ACTIONS(263),
        [sym_comment] = ACTIONS(67),
    },
    [62] = {
        [aux_sym_print_statement_repeat1] = STATE(65),
        [anon_sym_COMMA] = ACTIONS(265),
        [anon_sym_RPAREN] = ACTIONS(267),
        [anon_sym_PLUS] = ACTIONS(191),
        [anon_sym_LBRACK] = ACTIONS(193),
        [sym_comment] = ACTIONS(67),
    },
    [63] = {
        [sym__expression] = STATE(69),
        [sym_binary_operator] = STATE(31),
        [sym_subscript] = STATE(31),
        [sym_number] = ACTIONS(111),
        [sym_identifier] = ACTIONS(111),
        [sym_comment] = ACTIONS(67),
    },
    [64] = {
        [sym_comment] = ACTIONS(67),
        [sym__newline] = ACTIONS(269),
    },
    [65] = {
        [anon_sym_COMMA] = ACTIONS(271),
        [anon_sym_RPAREN] = ACTIONS(273),
        [sym_comment] = ACTIONS(67),
    },
    [66] = {
        [sym__expression] = STATE(68),
        [sym_binary_operator] = STATE(31),
        [sym_subscript] = STATE(31),
        [sym_number] = ACTIONS(111),
        [sym_identifier] = ACTIONS(111),
        [sym_comment] = ACTIONS(67),
    },
    [67] = {
        [sym_comment] = ACTIONS(67),
        [sym__newline] = ACTIONS(275),
    },
    [68] = {
        [anon_sym_COMMA] = ACTIONS(277),
        [anon_sym_COLON] = ACTIONS(277),
        [anon_sym_in] = ACTIONS(277),
        [anon_sym_except] = ACTIONS(277),
        [anon_sym_finally] = ACTIONS(277),
        [anon_sym_RPAREN] = ACTIONS(277),
        [anon_sym_PLUS] = ACTIONS(191),
        [anon_sym_LBRACK] = ACTIONS(193),
        [sym_comment] = ACTIONS(67),
    },
    [69] = {
        [anon_sym_COMMA] = ACTIONS(279),
        [anon_sym_COLON] = ACTIONS(279),
        [anon_sym_in] = ACTIONS(279),
        [anon_sym_except] = ACTIONS(279),
        [anon_sym_finally] = ACTIONS(279),
        [anon_sym_RPAREN] = ACTIONS(279),
        [anon_sym_PLUS] = ACTIONS(191),
        [anon_sym_LBRACK] = ACTIONS(193),
        [sym_comment] = ACTIONS(67),
    },
    [70] = {
        [sym_identifier] = ACTIONS(281),
        [sym_comment] = ACTIONS(67),
    },
    [71] = {
        [anon_sym_LPAREN] = ACTIONS(283),
        [anon_sym_DOT] = ACTIONS(285),
        [sym_comment] = ACTIONS(67),
        [sym__newline] = ACTIONS(283),
    },
    [72] = {
        [sym_identifier] = ACTIONS(287),
        [sym_comment] = ACTIONS(67),
    },
    [73] = {
        [anon_sym_LPAREN] = ACTIONS(289),
        [anon_sym_DOT] = ACTIONS(289),
        [sym_comment] = ACTIONS(67),
        [sym__newline] = ACTIONS(289),
    },
    [74] = {
        [anon_sym_LPAREN] = ACTIONS(291),
        [anon_sym_DOT] = ACTIONS(291),
        [sym_comment] = ACTIONS(67),
        [sym__newline] = ACTIONS(291),
    },
    [75] = {
        [anon_sym_COLON] = ACTIONS(293),
        [anon_sym_LPAREN] = ACTIONS(295),
        [sym_comment] = ACTIONS(67),
    },
    [76] = {
        [sym__simple_statement] = STATE(84),
        [sym_print_statement] = STATE(5),
        [sym_expression_statement] = STATE(5),
        [sym_return_statement] = STATE(5),
        [sym_delete_statement] = STATE(5),
        [sym__suite] = STATE(258),
        [sym__expression] = STATE(21),
        [sym_binary_operator] = STATE(14),
        [sym_subscript] = STATE(14),
        [anon_sym_print] = ACTIONS(77),
        [anon_sym_return] = ACTIONS(79),
        [anon_sym_del] = ACTIONS(81),
        [sym_pass_statement] = ACTIONS(83),
        [sym_break_statement] = ACTIONS(83),
        [sym_continue_statement] = ACTIONS(83),
        [sym_number] = ACTIONS(101),
        [sym_identifier] = ACTIONS(103),
        [sym_comment] = ACTIONS(67),
        [sym__indent] = ACTIONS(297),
    },
    [77] = {
        [sym_expression_list] = STATE(78),
        [sym__expression] = STATE(79),
        [sym_binary_operator] = STATE(31),
        [sym_subscript] = STATE(31),
        [sym_number] = ACTIONS(111),
        [sym_identifier] = ACTIONS(111),
        [sym_comment] = ACTIONS(67),
    },
    [78] = {
        [anon_sym_RPAREN] = ACTIONS(299),
        [sym_comment] = ACTIONS(67),
    },
    [79] = {
        [aux_sym_print_statement_repeat1] = STATE(80),
        [anon_sym_COMMA] = ACTIONS(265),
        [anon_sym_COLON] = ACTIONS(301),
        [anon_sym_in] = ACTIONS(301),
        [anon_sym_except] = ACTIONS(301),
        [anon_sym_finally] = ACTIONS(301),
        [anon_sym_RPAREN] = ACTIONS(301),
        [anon_sym_PLUS] = ACTIONS(191),
        [anon_sym_LBRACK] = ACTIONS(193),
        [sym_comment] = ACTIONS(67),
    },
    [80] = {
        [anon_sym_COMMA] = ACTIONS(271),
        [anon_sym_COLON] = ACTIONS(303),
        [anon_sym_in] = ACTIONS(303),
        [anon_sym_except] = ACTIONS(303),
        [anon_sym_finally] = ACTIONS(303),
        [anon_sym_RPAREN] = ACTIONS(303),
        [sym_comment] = ACTIONS(67),
    },
    [81] = {
        [anon_sym_COLON] = ACTIONS(305),
        [sym_comment] = ACTIONS(67),
    },
    [82] = {
        [sym__simple_statement] = STATE(84),
        [sym_print_statement] = STATE(5),
        [sym_expression_statement] = STATE(5),
        [sym_return_statement] = STATE(5),
        [sym_delete_statement] = STATE(5),
        [sym__suite] = STATE(85),
        [sym__expression] = STATE(21),
        [sym_binary_operator] = STATE(14),
        [sym_subscript] = STATE(14),
        [anon_sym_print] = ACTIONS(77),
        [anon_sym_return] = ACTIONS(79),
        [anon_sym_del] = ACTIONS(81),
        [sym_pass_statement] = ACTIONS(83),
        [sym_break_statement] = ACTIONS(83),
        [sym_continue_statement] = ACTIONS(83),
        [sym_number] = ACTIONS(101),
        [sym_identifier] = ACTIONS(103),
        [sym_comment] = ACTIONS(67),
        [sym__indent] = ACTIONS(297),
    },
    [83] = {
        [sym__statement] = STATE(94),
        [sym__simple_statement] = STATE(95),
        [sym_print_statement] = STATE(5),
        [sym_expression_statement] = STATE(5),
        [sym_return_statement] = STATE(5),
        [sym_delete_statement] = STATE(5),
        [sym__compound_statement] = STATE(96),
        [sym_if_statement] = STATE(97),
        [sym_for_statement] = STATE(97),
        [sym_while_statement] = STATE(97),
        [sym_try_statement] = STATE(97),
        [sym_with_statement] = STATE(97),
        [sym_function_definition] = STATE(97),
        [sym_class_definition] = STATE(97),
        [sym_decorated_definition] = STATE(97),
        [sym_decorator] = STATE(20),
        [sym__expression] = STATE(21),
        [sym_binary_operator] = STATE(14),
        [sym_subscript] = STATE(14),
        [aux_sym_module_repeat1] = STATE(98),
        [aux_sym_decorated_definition_repeat1] = STATE(99),
        [anon_sym_print] = ACTIONS(77),
        [anon_sym_return] = ACTIONS(79),
        [anon_sym_del] = ACTIONS(81),
        [sym_pass_statement] = ACTIONS(83),
        [sym_break_statement] = ACTIONS(83),
        [sym_continue_statement] = ACTIONS(83),
        [anon_sym_if] = ACTIONS(307),
        [anon_sym_for] = ACTIONS(309),
        [anon_sym_while] = ACTIONS(311),
        [anon_sym_try] = ACTIONS(313),
        [anon_sym_with] = ACTIONS(315),
        [anon_sym_def] = ACTIONS(317),
        [anon_sym_class] = ACTIONS(319),
        [anon_sym_AT] = ACTIONS(99),
        [sym_number] = ACTIONS(101),
        [sym_identifier] = ACTIONS(103),
        [sym_comment] = ACTIONS(67),
        [sym__dedent] = ACTIONS(321),
    },
    [84] = {
        [ts_builtin_sym_end] = ACTIONS(323),
        [anon_sym_SEMI] = ACTIONS(323),
        [anon_sym_print] = ACTIONS(325),
        [anon_sym_return] = ACTIONS(325),
        [anon_sym_del] = ACTIONS(325),
        [sym_pass_statement] = ACTIONS(325),
        [sym_break_statement] = ACTIONS(325),
        [sym_continue_statement] = ACTIONS(325),
        [anon_sym_if] = ACTIONS(325),
        [anon_sym_elif] = ACTIONS(325),
        [anon_sym_else] = ACTIONS(325),
        [anon_sym_for] = ACTIONS(325),
        [anon_sym_while] = ACTIONS(325),
        [anon_sym_try] = ACTIONS(325),
        [anon_sym_except] = ACTIONS(325),
        [anon_sym_finally] = ACTIONS(325),
        [anon_sym_with] = ACTIONS(325),
        [anon_sym_def] = ACTIONS(325),
        [anon_sym_class] = ACTIONS(325),
        [anon_sym_AT] = ACTIONS(323),
        [sym_number] = ACTIONS(325),
        [sym_identifier] = ACTIONS(327),
        [sym_comment] = ACTIONS(67),
        [sym__newline] = ACTIONS(323),
    },
    [85] = {
        [ts_builtin_sym_end] = ACTIONS(329),
        [anon_sym_SEMI] = ACTIONS(329),
        [anon_sym_print] = ACTIONS(331),
        [anon_sym_return] = ACTIONS(331),
        [anon_sym_del] = ACTIONS(331),
        [sym_pass_statement] = ACTIONS(331),
        [sym_break_statement] = ACTIONS(331),
        [sym_continue_statement] = ACTIONS(331),
        [anon_sym_if] = ACTIONS(331),
        [anon_sym_for] = ACTIONS(331),
        [anon_sym_while] = ACTIONS(331),
        [anon_sym_try] = ACTIONS(331),
        [anon_sym_with] = ACTIONS(331),
        [anon_sym_def] = ACTIONS(331),
        [anon_sym_class] = ACTIONS(331),
        [anon_sym_AT] = ACTIONS(329),
        [sym_number] = ACTIONS(331),
        [sym_identifier] = ACTIONS(333),
        [sym_comment] = ACTIONS(67),
        [sym__newline] = ACTIONS(329),
    },
    [86] = {
        [sym__expression] = STATE(236),
        [sym_binary_operator] = STATE(31),
        [sym_subscript] = STATE(31),
        [sym_number] = ACTIONS(111),
        [sym_identifier] = ACTIONS(111),
        [sym_comment] = ACTIONS(67),
    },
    [87] = {
        [sym_expression_list] = STATE(230),
        [sym__expression] = STATE(79),
        [sym_binary_operator] = STATE(31),
        [sym_subscript] = STATE(31),
        [sym_number] = ACTIONS(111),
        [sym_identifier] = ACTIONS(111),
        [sym_comment] = ACTIONS(67),
    },
    [88] = {
        [sym__expression] = STATE(226),
        [sym_binary_operator] = STATE(31),
        [sym_subscript] = STATE(31),
        [sym_number] = ACTIONS(111),
        [sym_identifier] = ACTIONS(111),
        [sym_comment] = ACTIONS(67),
    },
    [89] = {
        [anon_sym_COLON] = ACTIONS(335),
        [sym_comment] = ACTIONS(67),
    },
    [90] = {
        [sym_with_item] = STATE(176),
        [sym__expression] = STATE(177),
        [sym_binary_operator] = STATE(31),
        [sym_subscript] = STATE(31),
        [sym_number] = ACTIONS(111),
        [sym_identifier] = ACTIONS(111),
        [sym_comment] = ACTIONS(67),
    },
    [91] = {
        [sym_identifier] = ACTIONS(337),
        [sym_comment] = ACTIONS(67),
    },
    [92] = {
        [sym_identifier] = ACTIONS(339),
        [sym_comment] = ACTIONS(67),
    },
    [93] = {
        [ts_builtin_sym_end] = ACTIONS(341),
        [anon_sym_SEMI] = ACTIONS(341),
        [anon_sym_print] = ACTIONS(343),
        [anon_sym_return] = ACTIONS(343),
        [anon_sym_del] = ACTIONS(343),
        [sym_pass_statement] = ACTIONS(343),
        [sym_break_statement] = ACTIONS(343),
        [sym_continue_statement] = ACTIONS(343),
        [anon_sym_if] = ACTIONS(343),
        [anon_sym_elif] = ACTIONS(343),
        [anon_sym_else] = ACTIONS(343),
        [anon_sym_for] = ACTIONS(343),
        [anon_sym_while] = ACTIONS(343),
        [anon_sym_try] = ACTIONS(343),
        [anon_sym_except] = ACTIONS(343),
        [anon_sym_finally] = ACTIONS(343),
        [anon_sym_with] = ACTIONS(343),
        [anon_sym_def] = ACTIONS(343),
        [anon_sym_class] = ACTIONS(343),
        [anon_sym_AT] = ACTIONS(341),
        [sym_number] = ACTIONS(343),
        [sym_identifier] = ACTIONS(345),
        [sym_comment] = ACTIONS(67),
        [sym__newline] = ACTIONS(341),
    },
    [94] = {
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
    [95] = {
        [sym_comment] = ACTIONS(67),
        [sym__newline] = ACTIONS(347),
    },
    [96] = {
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
    [97] = {
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
    [98] = {
        [sym__statement] = STATE(102),
        [sym__simple_statement] = STATE(95),
        [sym_print_statement] = STATE(5),
        [sym_expression_statement] = STATE(5),
        [sym_return_statement] = STATE(5),
        [sym_delete_statement] = STATE(5),
        [sym__compound_statement] = STATE(96),
        [sym_if_statement] = STATE(97),
        [sym_for_statement] = STATE(97),
        [sym_while_statement] = STATE(97),
        [sym_try_statement] = STATE(97),
        [sym_with_statement] = STATE(97),
        [sym_function_definition] = STATE(97),
        [sym_class_definition] = STATE(97),
        [sym_decorated_definition] = STATE(97),
        [sym_decorator] = STATE(20),
        [sym__expression] = STATE(21),
        [sym_binary_operator] = STATE(14),
        [sym_subscript] = STATE(14),
        [aux_sym_decorated_definition_repeat1] = STATE(99),
        [anon_sym_print] = ACTIONS(77),
        [anon_sym_return] = ACTIONS(79),
        [anon_sym_del] = ACTIONS(81),
        [sym_pass_statement] = ACTIONS(83),
        [sym_break_statement] = ACTIONS(83),
        [sym_continue_statement] = ACTIONS(83),
        [anon_sym_if] = ACTIONS(307),
        [anon_sym_for] = ACTIONS(309),
        [anon_sym_while] = ACTIONS(311),
        [anon_sym_try] = ACTIONS(313),
        [anon_sym_with] = ACTIONS(315),
        [anon_sym_def] = ACTIONS(317),
        [anon_sym_class] = ACTIONS(319),
        [anon_sym_AT] = ACTIONS(99),
        [sym_number] = ACTIONS(101),
        [sym_identifier] = ACTIONS(103),
        [sym_comment] = ACTIONS(67),
        [sym__dedent] = ACTIONS(349),
    },
    [99] = {
        [sym_function_definition] = STATE(100),
        [sym_class_definition] = STATE(100),
        [sym_decorator] = STATE(25),
        [anon_sym_def] = ACTIONS(351),
        [anon_sym_class] = ACTIONS(353),
        [anon_sym_AT] = ACTIONS(99),
        [sym_comment] = ACTIONS(67),
    },
    [100] = {
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
        [sym_number] = ACTIONS(171),
        [sym_identifier] = ACTIONS(173),
        [sym_comment] = ACTIONS(67),
        [sym__dedent] = ACTIONS(169),
    },
    [101] = {
        [ts_builtin_sym_end] = ACTIONS(355),
        [anon_sym_SEMI] = ACTIONS(355),
        [anon_sym_print] = ACTIONS(357),
        [anon_sym_return] = ACTIONS(357),
        [anon_sym_del] = ACTIONS(357),
        [sym_pass_statement] = ACTIONS(357),
        [sym_break_statement] = ACTIONS(357),
        [sym_continue_statement] = ACTIONS(357),
        [anon_sym_if] = ACTIONS(357),
        [anon_sym_elif] = ACTIONS(357),
        [anon_sym_else] = ACTIONS(357),
        [anon_sym_for] = ACTIONS(357),
        [anon_sym_while] = ACTIONS(357),
        [anon_sym_try] = ACTIONS(357),
        [anon_sym_except] = ACTIONS(357),
        [anon_sym_finally] = ACTIONS(357),
        [anon_sym_with] = ACTIONS(357),
        [anon_sym_def] = ACTIONS(357),
        [anon_sym_class] = ACTIONS(357),
        [anon_sym_AT] = ACTIONS(355),
        [sym_number] = ACTIONS(357),
        [sym_identifier] = ACTIONS(359),
        [sym_comment] = ACTIONS(67),
        [sym__newline] = ACTIONS(355),
    },
    [102] = {
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
        [sym_number] = ACTIONS(181),
        [sym_identifier] = ACTIONS(183),
        [sym_comment] = ACTIONS(67),
        [sym__dedent] = ACTIONS(179),
    },
    [103] = {
        [anon_sym_print] = ACTIONS(247),
        [anon_sym_return] = ACTIONS(247),
        [anon_sym_del] = ACTIONS(247),
        [sym_pass_statement] = ACTIONS(247),
        [sym_break_statement] = ACTIONS(247),
        [sym_continue_statement] = ACTIONS(247),
        [anon_sym_if] = ACTIONS(247),
        [anon_sym_for] = ACTIONS(247),
        [anon_sym_while] = ACTIONS(247),
        [anon_sym_try] = ACTIONS(247),
        [anon_sym_with] = ACTIONS(247),
        [anon_sym_def] = ACTIONS(247),
        [anon_sym_class] = ACTIONS(247),
        [anon_sym_AT] = ACTIONS(245),
        [sym_number] = ACTIONS(247),
        [sym_identifier] = ACTIONS(249),
        [sym_comment] = ACTIONS(67),
        [sym__dedent] = ACTIONS(245),
    },
    [104] = {
        [anon_sym_COLON] = ACTIONS(361),
        [anon_sym_LPAREN] = ACTIONS(363),
        [sym_comment] = ACTIONS(67),
    },
    [105] = {
        [sym__simple_statement] = STATE(116),
        [sym_print_statement] = STATE(113),
        [sym_expression_statement] = STATE(113),
        [sym_return_statement] = STATE(113),
        [sym_delete_statement] = STATE(113),
        [sym__suite] = STATE(143),
        [sym__expression] = STATE(118),
        [sym_binary_operator] = STATE(114),
        [sym_subscript] = STATE(114),
        [anon_sym_print] = ACTIONS(365),
        [anon_sym_return] = ACTIONS(367),
        [anon_sym_del] = ACTIONS(369),
        [sym_pass_statement] = ACTIONS(371),
        [sym_break_statement] = ACTIONS(371),
        [sym_continue_statement] = ACTIONS(371),
        [sym_number] = ACTIONS(373),
        [sym_identifier] = ACTIONS(375),
        [sym_comment] = ACTIONS(67),
        [sym__indent] = ACTIONS(377),
    },
    [106] = {
        [sym_expression_list] = STATE(107),
        [sym__expression] = STATE(79),
        [sym_binary_operator] = STATE(31),
        [sym_subscript] = STATE(31),
        [sym_number] = ACTIONS(111),
        [sym_identifier] = ACTIONS(111),
        [sym_comment] = ACTIONS(67),
    },
    [107] = {
        [anon_sym_RPAREN] = ACTIONS(379),
        [sym_comment] = ACTIONS(67),
    },
    [108] = {
        [anon_sym_COLON] = ACTIONS(381),
        [sym_comment] = ACTIONS(67),
    },
    [109] = {
        [sym__simple_statement] = STATE(116),
        [sym_print_statement] = STATE(113),
        [sym_expression_statement] = STATE(113),
        [sym_return_statement] = STATE(113),
        [sym_delete_statement] = STATE(113),
        [sym__suite] = STATE(117),
        [sym__expression] = STATE(118),
        [sym_binary_operator] = STATE(114),
        [sym_subscript] = STATE(114),
        [anon_sym_print] = ACTIONS(365),
        [anon_sym_return] = ACTIONS(367),
        [anon_sym_del] = ACTIONS(369),
        [sym_pass_statement] = ACTIONS(371),
        [sym_break_statement] = ACTIONS(371),
        [sym_continue_statement] = ACTIONS(371),
        [sym_number] = ACTIONS(373),
        [sym_identifier] = ACTIONS(375),
        [sym_comment] = ACTIONS(67),
        [sym__indent] = ACTIONS(377),
    },
    [110] = {
        [sym__expression] = STATE(141),
        [sym_binary_operator] = STATE(114),
        [sym_subscript] = STATE(114),
        [sym_number] = ACTIONS(373),
        [sym_identifier] = ACTIONS(373),
        [sym_comment] = ACTIONS(67),
    },
    [111] = {
        [sym_expression_list] = STATE(140),
        [sym__expression] = STATE(134),
        [sym_binary_operator] = STATE(114),
        [sym_subscript] = STATE(114),
        [sym_number] = ACTIONS(373),
        [sym_identifier] = ACTIONS(373),
        [sym_comment] = ACTIONS(67),
    },
    [112] = {
        [sym_expression_list] = STATE(133),
        [sym__expression] = STATE(134),
        [sym_binary_operator] = STATE(114),
        [sym_subscript] = STATE(114),
        [sym_number] = ACTIONS(373),
        [sym_identifier] = ACTIONS(373),
        [sym_comment] = ACTIONS(67),
    },
    [113] = {
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
    [114] = {
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
        [anon_sym_class] = ACTIONS(123),
        [anon_sym_AT] = ACTIONS(121),
        [anon_sym_PLUS] = ACTIONS(121),
        [anon_sym_LBRACK] = ACTIONS(121),
        [sym_number] = ACTIONS(123),
        [sym_identifier] = ACTIONS(125),
        [sym_comment] = ACTIONS(67),
        [sym__dedent] = ACTIONS(121),
    },
    [115] = {
        [sym__statement] = STATE(94),
        [sym__simple_statement] = STATE(95),
        [sym_print_statement] = STATE(5),
        [sym_expression_statement] = STATE(5),
        [sym_return_statement] = STATE(5),
        [sym_delete_statement] = STATE(5),
        [sym__compound_statement] = STATE(96),
        [sym_if_statement] = STATE(97),
        [sym_for_statement] = STATE(97),
        [sym_while_statement] = STATE(97),
        [sym_try_statement] = STATE(97),
        [sym_with_statement] = STATE(97),
        [sym_function_definition] = STATE(97),
        [sym_class_definition] = STATE(97),
        [sym_decorated_definition] = STATE(97),
        [sym_decorator] = STATE(20),
        [sym__expression] = STATE(21),
        [sym_binary_operator] = STATE(14),
        [sym_subscript] = STATE(14),
        [aux_sym_module_repeat1] = STATE(131),
        [aux_sym_decorated_definition_repeat1] = STATE(99),
        [anon_sym_print] = ACTIONS(77),
        [anon_sym_return] = ACTIONS(79),
        [anon_sym_del] = ACTIONS(81),
        [sym_pass_statement] = ACTIONS(83),
        [sym_break_statement] = ACTIONS(83),
        [sym_continue_statement] = ACTIONS(83),
        [anon_sym_if] = ACTIONS(307),
        [anon_sym_for] = ACTIONS(309),
        [anon_sym_while] = ACTIONS(311),
        [anon_sym_try] = ACTIONS(313),
        [anon_sym_with] = ACTIONS(315),
        [anon_sym_def] = ACTIONS(317),
        [anon_sym_class] = ACTIONS(319),
        [anon_sym_AT] = ACTIONS(99),
        [sym_number] = ACTIONS(101),
        [sym_identifier] = ACTIONS(103),
        [sym_comment] = ACTIONS(67),
        [sym__dedent] = ACTIONS(383),
    },
    [116] = {
        [anon_sym_print] = ACTIONS(325),
        [anon_sym_return] = ACTIONS(325),
        [anon_sym_del] = ACTIONS(325),
        [sym_pass_statement] = ACTIONS(325),
        [sym_break_statement] = ACTIONS(325),
        [sym_continue_statement] = ACTIONS(325),
        [anon_sym_if] = ACTIONS(325),
        [anon_sym_elif] = ACTIONS(325),
        [anon_sym_else] = ACTIONS(325),
        [anon_sym_for] = ACTIONS(325),
        [anon_sym_while] = ACTIONS(325),
        [anon_sym_try] = ACTIONS(325),
        [anon_sym_except] = ACTIONS(325),
        [anon_sym_finally] = ACTIONS(325),
        [anon_sym_with] = ACTIONS(325),
        [anon_sym_def] = ACTIONS(325),
        [anon_sym_class] = ACTIONS(325),
        [anon_sym_AT] = ACTIONS(323),
        [sym_number] = ACTIONS(325),
        [sym_identifier] = ACTIONS(327),
        [sym_comment] = ACTIONS(67),
        [sym__dedent] = ACTIONS(323),
    },
    [117] = {
        [anon_sym_print] = ACTIONS(331),
        [anon_sym_return] = ACTIONS(331),
        [anon_sym_del] = ACTIONS(331),
        [sym_pass_statement] = ACTIONS(331),
        [sym_break_statement] = ACTIONS(331),
        [sym_continue_statement] = ACTIONS(331),
        [anon_sym_if] = ACTIONS(331),
        [anon_sym_for] = ACTIONS(331),
        [anon_sym_while] = ACTIONS(331),
        [anon_sym_try] = ACTIONS(331),
        [anon_sym_with] = ACTIONS(331),
        [anon_sym_def] = ACTIONS(331),
        [anon_sym_class] = ACTIONS(331),
        [anon_sym_AT] = ACTIONS(329),
        [sym_number] = ACTIONS(331),
        [sym_identifier] = ACTIONS(333),
        [sym_comment] = ACTIONS(67),
        [sym__dedent] = ACTIONS(329),
    },
    [118] = {
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
        [anon_sym_class] = ACTIONS(153),
        [anon_sym_AT] = ACTIONS(151),
        [anon_sym_PLUS] = ACTIONS(385),
        [anon_sym_LBRACK] = ACTIONS(387),
        [sym_number] = ACTIONS(153),
        [sym_identifier] = ACTIONS(159),
        [sym_comment] = ACTIONS(67),
        [sym__dedent] = ACTIONS(151),
    },
    [119] = {
        [sym__expression] = STATE(129),
        [sym_binary_operator] = STATE(114),
        [sym_subscript] = STATE(114),
        [sym_number] = ACTIONS(373),
        [sym_identifier] = ACTIONS(373),
        [sym_comment] = ACTIONS(67),
    },
    [120] = {
        [sym__expression] = STATE(122),
        [sym_binary_operator] = STATE(31),
        [sym_subscript] = STATE(31),
        [anon_sym_DOT_DOT_DOT] = ACTIONS(389),
        [sym_number] = ACTIONS(111),
        [sym_identifier] = ACTIONS(111),
        [sym_comment] = ACTIONS(67),
    },
    [121] = {
        [aux_sym_subscript_repeat1] = STATE(125),
        [anon_sym_COMMA] = ACTIONS(391),
        [anon_sym_RBRACK] = ACTIONS(393),
        [sym_comment] = ACTIONS(67),
    },
    [122] = {
        [aux_sym_subscript_repeat1] = STATE(125),
        [anon_sym_COMMA] = ACTIONS(391),
        [anon_sym_PLUS] = ACTIONS(191),
        [anon_sym_LBRACK] = ACTIONS(193),
        [anon_sym_RBRACK] = ACTIONS(393),
        [sym_comment] = ACTIONS(67),
    },
    [123] = {
        [sym__expression] = STATE(52),
        [sym_binary_operator] = STATE(31),
        [sym_subscript] = STATE(31),
        [anon_sym_DOT_DOT_DOT] = ACTIONS(195),
        [anon_sym_RBRACK] = ACTIONS(395),
        [sym_number] = ACTIONS(111),
        [sym_identifier] = ACTIONS(111),
        [sym_comment] = ACTIONS(67),
    },
    [124] = {
        [anon_sym_print] = ACTIONS(203),
        [anon_sym_COMMA] = ACTIONS(201),
        [anon_sym_return] = ACTIONS(203),
        [anon_sym_del] = ACTIONS(203),
        [sym_pass_statement] = ACTIONS(203),
        [sym_break_statement] = ACTIONS(203),
        [sym_continue_statement] = ACTIONS(203),
        [anon_sym_if] = ACTIONS(203),
        [anon_sym_elif] = ACTIONS(203),
        [anon_sym_else] = ACTIONS(203),
        [anon_sym_for] = ACTIONS(203),
        [anon_sym_while] = ACTIONS(203),
        [anon_sym_try] = ACTIONS(203),
        [anon_sym_except] = ACTIONS(203),
        [anon_sym_finally] = ACTIONS(203),
        [anon_sym_with] = ACTIONS(203),
        [anon_sym_def] = ACTIONS(203),
        [anon_sym_class] = ACTIONS(203),
        [anon_sym_AT] = ACTIONS(201),
        [anon_sym_PLUS] = ACTIONS(201),
        [anon_sym_LBRACK] = ACTIONS(201),
        [sym_number] = ACTIONS(203),
        [sym_identifier] = ACTIONS(205),
        [sym_comment] = ACTIONS(67),
        [sym__dedent] = ACTIONS(201),
    },
    [125] = {
        [anon_sym_COMMA] = ACTIONS(397),
        [anon_sym_RBRACK] = ACTIONS(395),
        [sym_comment] = ACTIONS(67),
    },
    [126] = {
        [sym__expression] = STATE(42),
        [sym_binary_operator] = STATE(31),
        [sym_subscript] = STATE(31),
        [anon_sym_DOT_DOT_DOT] = ACTIONS(209),
        [anon_sym_RBRACK] = ACTIONS(399),
        [sym_number] = ACTIONS(111),
        [sym_identifier] = ACTIONS(111),
        [sym_comment] = ACTIONS(67),
    },
    [127] = {
        [anon_sym_print] = ACTIONS(215),
        [anon_sym_COMMA] = ACTIONS(213),
        [anon_sym_return] = ACTIONS(215),
        [anon_sym_del] = ACTIONS(215),
        [sym_pass_statement] = ACTIONS(215),
        [sym_break_statement] = ACTIONS(215),
        [sym_continue_statement] = ACTIONS(215),
        [anon_sym_if] = ACTIONS(215),
        [anon_sym_elif] = ACTIONS(215),
        [anon_sym_else] = ACTIONS(215),
        [anon_sym_for] = ACTIONS(215),
        [anon_sym_while] = ACTIONS(215),
        [anon_sym_try] = ACTIONS(215),
        [anon_sym_except] = ACTIONS(215),
        [anon_sym_finally] = ACTIONS(215),
        [anon_sym_with] = ACTIONS(215),
        [anon_sym_def] = ACTIONS(215),
        [anon_sym_class] = ACTIONS(215),
        [anon_sym_AT] = ACTIONS(213),
        [anon_sym_PLUS] = ACTIONS(213),
        [anon_sym_LBRACK] = ACTIONS(213),
        [sym_number] = ACTIONS(215),
        [sym_identifier] = ACTIONS(217),
        [sym_comment] = ACTIONS(67),
        [sym__dedent] = ACTIONS(213),
    },
    [128] = {
        [anon_sym_print] = ACTIONS(223),
        [anon_sym_COMMA] = ACTIONS(221),
        [anon_sym_return] = ACTIONS(223),
        [anon_sym_del] = ACTIONS(223),
        [sym_pass_statement] = ACTIONS(223),
        [sym_break_statement] = ACTIONS(223),
        [sym_continue_statement] = ACTIONS(223),
        [anon_sym_if] = ACTIONS(223),
        [anon_sym_elif] = ACTIONS(223),
        [anon_sym_else] = ACTIONS(223),
        [anon_sym_for] = ACTIONS(223),
        [anon_sym_while] = ACTIONS(223),
        [anon_sym_try] = ACTIONS(223),
        [anon_sym_except] = ACTIONS(223),
        [anon_sym_finally] = ACTIONS(223),
        [anon_sym_with] = ACTIONS(223),
        [anon_sym_def] = ACTIONS(223),
        [anon_sym_class] = ACTIONS(223),
        [anon_sym_AT] = ACTIONS(221),
        [anon_sym_PLUS] = ACTIONS(221),
        [anon_sym_LBRACK] = ACTIONS(221),
        [sym_number] = ACTIONS(223),
        [sym_identifier] = ACTIONS(225),
        [sym_comment] = ACTIONS(67),
        [sym__dedent] = ACTIONS(221),
    },
    [129] = {
        [anon_sym_print] = ACTIONS(241),
        [anon_sym_COMMA] = ACTIONS(239),
        [anon_sym_return] = ACTIONS(241),
        [anon_sym_del] = ACTIONS(241),
        [sym_pass_statement] = ACTIONS(241),
        [sym_break_statement] = ACTIONS(241),
        [sym_continue_statement] = ACTIONS(241),
        [anon_sym_if] = ACTIONS(241),
        [anon_sym_elif] = ACTIONS(241),
        [anon_sym_else] = ACTIONS(241),
        [anon_sym_for] = ACTIONS(241),
        [anon_sym_while] = ACTIONS(241),
        [anon_sym_try] = ACTIONS(241),
        [anon_sym_except] = ACTIONS(241),
        [anon_sym_finally] = ACTIONS(241),
        [anon_sym_with] = ACTIONS(241),
        [anon_sym_def] = ACTIONS(241),
        [anon_sym_class] = ACTIONS(241),
        [anon_sym_AT] = ACTIONS(239),
        [anon_sym_PLUS] = ACTIONS(239),
        [anon_sym_LBRACK] = ACTIONS(239),
        [sym_number] = ACTIONS(241),
        [sym_identifier] = ACTIONS(243),
        [sym_comment] = ACTIONS(67),
        [sym__dedent] = ACTIONS(239),
    },
    [130] = {
        [anon_sym_print] = ACTIONS(343),
        [anon_sym_return] = ACTIONS(343),
        [anon_sym_del] = ACTIONS(343),
        [sym_pass_statement] = ACTIONS(343),
        [sym_break_statement] = ACTIONS(343),
        [sym_continue_statement] = ACTIONS(343),
        [anon_sym_if] = ACTIONS(343),
        [anon_sym_elif] = ACTIONS(343),
        [anon_sym_else] = ACTIONS(343),
        [anon_sym_for] = ACTIONS(343),
        [anon_sym_while] = ACTIONS(343),
        [anon_sym_try] = ACTIONS(343),
        [anon_sym_except] = ACTIONS(343),
        [anon_sym_finally] = ACTIONS(343),
        [anon_sym_with] = ACTIONS(343),
        [anon_sym_def] = ACTIONS(343),
        [anon_sym_class] = ACTIONS(343),
        [anon_sym_AT] = ACTIONS(341),
        [sym_number] = ACTIONS(343),
        [sym_identifier] = ACTIONS(345),
        [sym_comment] = ACTIONS(67),
        [sym__dedent] = ACTIONS(341),
    },
    [131] = {
        [sym__statement] = STATE(102),
        [sym__simple_statement] = STATE(95),
        [sym_print_statement] = STATE(5),
        [sym_expression_statement] = STATE(5),
        [sym_return_statement] = STATE(5),
        [sym_delete_statement] = STATE(5),
        [sym__compound_statement] = STATE(96),
        [sym_if_statement] = STATE(97),
        [sym_for_statement] = STATE(97),
        [sym_while_statement] = STATE(97),
        [sym_try_statement] = STATE(97),
        [sym_with_statement] = STATE(97),
        [sym_function_definition] = STATE(97),
        [sym_class_definition] = STATE(97),
        [sym_decorated_definition] = STATE(97),
        [sym_decorator] = STATE(20),
        [sym__expression] = STATE(21),
        [sym_binary_operator] = STATE(14),
        [sym_subscript] = STATE(14),
        [aux_sym_decorated_definition_repeat1] = STATE(99),
        [anon_sym_print] = ACTIONS(77),
        [anon_sym_return] = ACTIONS(79),
        [anon_sym_del] = ACTIONS(81),
        [sym_pass_statement] = ACTIONS(83),
        [sym_break_statement] = ACTIONS(83),
        [sym_continue_statement] = ACTIONS(83),
        [anon_sym_if] = ACTIONS(307),
        [anon_sym_for] = ACTIONS(309),
        [anon_sym_while] = ACTIONS(311),
        [anon_sym_try] = ACTIONS(313),
        [anon_sym_with] = ACTIONS(315),
        [anon_sym_def] = ACTIONS(317),
        [anon_sym_class] = ACTIONS(319),
        [anon_sym_AT] = ACTIONS(99),
        [sym_number] = ACTIONS(101),
        [sym_identifier] = ACTIONS(103),
        [sym_comment] = ACTIONS(67),
        [sym__dedent] = ACTIONS(401),
    },
    [132] = {
        [anon_sym_print] = ACTIONS(357),
        [anon_sym_return] = ACTIONS(357),
        [anon_sym_del] = ACTIONS(357),
        [sym_pass_statement] = ACTIONS(357),
        [sym_break_statement] = ACTIONS(357),
        [sym_continue_statement] = ACTIONS(357),
        [anon_sym_if] = ACTIONS(357),
        [anon_sym_elif] = ACTIONS(357),
        [anon_sym_else] = ACTIONS(357),
        [anon_sym_for] = ACTIONS(357),
        [anon_sym_while] = ACTIONS(357),
        [anon_sym_try] = ACTIONS(357),
        [anon_sym_except] = ACTIONS(357),
        [anon_sym_finally] = ACTIONS(357),
        [anon_sym_with] = ACTIONS(357),
        [anon_sym_def] = ACTIONS(357),
        [anon_sym_class] = ACTIONS(357),
        [anon_sym_AT] = ACTIONS(355),
        [sym_number] = ACTIONS(357),
        [sym_identifier] = ACTIONS(359),
        [sym_comment] = ACTIONS(67),
        [sym__dedent] = ACTIONS(355),
    },
    [133] = {
        [anon_sym_print] = ACTIONS(403),
        [anon_sym_return] = ACTIONS(403),
        [anon_sym_del] = ACTIONS(403),
        [sym_pass_statement] = ACTIONS(403),
        [sym_break_statement] = ACTIONS(403),
        [sym_continue_statement] = ACTIONS(403),
        [anon_sym_if] = ACTIONS(403),
        [anon_sym_elif] = ACTIONS(403),
        [anon_sym_else] = ACTIONS(403),
        [anon_sym_for] = ACTIONS(403),
        [anon_sym_while] = ACTIONS(403),
        [anon_sym_try] = ACTIONS(403),
        [anon_sym_except] = ACTIONS(403),
        [anon_sym_finally] = ACTIONS(403),
        [anon_sym_with] = ACTIONS(403),
        [anon_sym_def] = ACTIONS(403),
        [anon_sym_class] = ACTIONS(403),
        [anon_sym_AT] = ACTIONS(405),
        [sym_number] = ACTIONS(403),
        [sym_identifier] = ACTIONS(407),
        [sym_comment] = ACTIONS(67),
        [sym__dedent] = ACTIONS(405),
    },
    [134] = {
        [aux_sym_print_statement_repeat1] = STATE(136),
        [anon_sym_print] = ACTIONS(409),
        [anon_sym_COMMA] = ACTIONS(411),
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
        [anon_sym_AT] = ACTIONS(301),
        [anon_sym_PLUS] = ACTIONS(385),
        [anon_sym_LBRACK] = ACTIONS(387),
        [sym_number] = ACTIONS(409),
        [sym_identifier] = ACTIONS(413),
        [sym_comment] = ACTIONS(67),
        [sym__dedent] = ACTIONS(301),
    },
    [135] = {
        [sym__expression] = STATE(139),
        [sym_binary_operator] = STATE(114),
        [sym_subscript] = STATE(114),
        [sym_number] = ACTIONS(373),
        [sym_identifier] = ACTIONS(373),
        [sym_comment] = ACTIONS(67),
    },
    [136] = {
        [anon_sym_print] = ACTIONS(415),
        [anon_sym_COMMA] = ACTIONS(417),
        [anon_sym_return] = ACTIONS(415),
        [anon_sym_del] = ACTIONS(415),
        [sym_pass_statement] = ACTIONS(415),
        [sym_break_statement] = ACTIONS(415),
        [sym_continue_statement] = ACTIONS(415),
        [anon_sym_if] = ACTIONS(415),
        [anon_sym_elif] = ACTIONS(415),
        [anon_sym_else] = ACTIONS(415),
        [anon_sym_for] = ACTIONS(415),
        [anon_sym_while] = ACTIONS(415),
        [anon_sym_try] = ACTIONS(415),
        [anon_sym_except] = ACTIONS(415),
        [anon_sym_finally] = ACTIONS(415),
        [anon_sym_with] = ACTIONS(415),
        [anon_sym_def] = ACTIONS(415),
        [anon_sym_class] = ACTIONS(415),
        [anon_sym_AT] = ACTIONS(303),
        [sym_number] = ACTIONS(415),
        [sym_identifier] = ACTIONS(419),
        [sym_comment] = ACTIONS(67),
        [sym__dedent] = ACTIONS(303),
    },
    [137] = {
        [sym__expression] = STATE(138),
        [sym_binary_operator] = STATE(114),
        [sym_subscript] = STATE(114),
        [sym_number] = ACTIONS(373),
        [sym_identifier] = ACTIONS(373),
        [sym_comment] = ACTIONS(67),
    },
    [138] = {
        [anon_sym_print] = ACTIONS(421),
        [anon_sym_COMMA] = ACTIONS(277),
        [anon_sym_return] = ACTIONS(421),
        [anon_sym_del] = ACTIONS(421),
        [sym_pass_statement] = ACTIONS(421),
        [sym_break_statement] = ACTIONS(421),
        [sym_continue_statement] = ACTIONS(421),
        [anon_sym_if] = ACTIONS(421),
        [anon_sym_elif] = ACTIONS(421),
        [anon_sym_else] = ACTIONS(421),
        [anon_sym_for] = ACTIONS(421),
        [anon_sym_while] = ACTIONS(421),
        [anon_sym_try] = ACTIONS(421),
        [anon_sym_except] = ACTIONS(421),
        [anon_sym_finally] = ACTIONS(421),
        [anon_sym_with] = ACTIONS(421),
        [anon_sym_def] = ACTIONS(421),
        [anon_sym_class] = ACTIONS(421),
        [anon_sym_AT] = ACTIONS(277),
        [anon_sym_PLUS] = ACTIONS(385),
        [anon_sym_LBRACK] = ACTIONS(387),
        [sym_number] = ACTIONS(421),
        [sym_identifier] = ACTIONS(423),
        [sym_comment] = ACTIONS(67),
        [sym__dedent] = ACTIONS(277),
    },
    [139] = {
        [anon_sym_print] = ACTIONS(425),
        [anon_sym_COMMA] = ACTIONS(279),
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
        [anon_sym_AT] = ACTIONS(279),
        [anon_sym_PLUS] = ACTIONS(385),
        [anon_sym_LBRACK] = ACTIONS(387),
        [sym_number] = ACTIONS(425),
        [sym_identifier] = ACTIONS(427),
        [sym_comment] = ACTIONS(67),
        [sym__dedent] = ACTIONS(279),
    },
    [140] = {
        [anon_sym_print] = ACTIONS(429),
        [anon_sym_return] = ACTIONS(429),
        [anon_sym_del] = ACTIONS(429),
        [sym_pass_statement] = ACTIONS(429),
        [sym_break_statement] = ACTIONS(429),
        [sym_continue_statement] = ACTIONS(429),
        [anon_sym_if] = ACTIONS(429),
        [anon_sym_elif] = ACTIONS(429),
        [anon_sym_else] = ACTIONS(429),
        [anon_sym_for] = ACTIONS(429),
        [anon_sym_while] = ACTIONS(429),
        [anon_sym_try] = ACTIONS(429),
        [anon_sym_except] = ACTIONS(429),
        [anon_sym_finally] = ACTIONS(429),
        [anon_sym_with] = ACTIONS(429),
        [anon_sym_def] = ACTIONS(429),
        [anon_sym_class] = ACTIONS(429),
        [anon_sym_AT] = ACTIONS(431),
        [sym_number] = ACTIONS(429),
        [sym_identifier] = ACTIONS(433),
        [sym_comment] = ACTIONS(67),
        [sym__dedent] = ACTIONS(431),
    },
    [141] = {
        [aux_sym_print_statement_repeat1] = STATE(142),
        [anon_sym_print] = ACTIONS(435),
        [anon_sym_COMMA] = ACTIONS(411),
        [anon_sym_return] = ACTIONS(435),
        [anon_sym_del] = ACTIONS(435),
        [sym_pass_statement] = ACTIONS(435),
        [sym_break_statement] = ACTIONS(435),
        [sym_continue_statement] = ACTIONS(435),
        [anon_sym_if] = ACTIONS(435),
        [anon_sym_elif] = ACTIONS(435),
        [anon_sym_else] = ACTIONS(435),
        [anon_sym_for] = ACTIONS(435),
        [anon_sym_while] = ACTIONS(435),
        [anon_sym_try] = ACTIONS(435),
        [anon_sym_except] = ACTIONS(435),
        [anon_sym_finally] = ACTIONS(435),
        [anon_sym_with] = ACTIONS(435),
        [anon_sym_def] = ACTIONS(435),
        [anon_sym_class] = ACTIONS(435),
        [anon_sym_AT] = ACTIONS(437),
        [anon_sym_PLUS] = ACTIONS(385),
        [anon_sym_LBRACK] = ACTIONS(387),
        [sym_number] = ACTIONS(435),
        [sym_identifier] = ACTIONS(439),
        [sym_comment] = ACTIONS(67),
        [sym__dedent] = ACTIONS(437),
    },
    [142] = {
        [anon_sym_print] = ACTIONS(441),
        [anon_sym_COMMA] = ACTIONS(417),
        [anon_sym_return] = ACTIONS(441),
        [anon_sym_del] = ACTIONS(441),
        [sym_pass_statement] = ACTIONS(441),
        [sym_break_statement] = ACTIONS(441),
        [sym_continue_statement] = ACTIONS(441),
        [anon_sym_if] = ACTIONS(441),
        [anon_sym_elif] = ACTIONS(441),
        [anon_sym_else] = ACTIONS(441),
        [anon_sym_for] = ACTIONS(441),
        [anon_sym_while] = ACTIONS(441),
        [anon_sym_try] = ACTIONS(441),
        [anon_sym_except] = ACTIONS(441),
        [anon_sym_finally] = ACTIONS(441),
        [anon_sym_with] = ACTIONS(441),
        [anon_sym_def] = ACTIONS(441),
        [anon_sym_class] = ACTIONS(441),
        [anon_sym_AT] = ACTIONS(443),
        [sym_number] = ACTIONS(441),
        [sym_identifier] = ACTIONS(445),
        [sym_comment] = ACTIONS(67),
        [sym__dedent] = ACTIONS(443),
    },
    [143] = {
        [anon_sym_print] = ACTIONS(447),
        [anon_sym_return] = ACTIONS(447),
        [anon_sym_del] = ACTIONS(447),
        [sym_pass_statement] = ACTIONS(447),
        [sym_break_statement] = ACTIONS(447),
        [sym_continue_statement] = ACTIONS(447),
        [anon_sym_if] = ACTIONS(447),
        [anon_sym_for] = ACTIONS(447),
        [anon_sym_while] = ACTIONS(447),
        [anon_sym_try] = ACTIONS(447),
        [anon_sym_with] = ACTIONS(447),
        [anon_sym_def] = ACTIONS(447),
        [anon_sym_class] = ACTIONS(447),
        [anon_sym_AT] = ACTIONS(449),
        [sym_number] = ACTIONS(447),
        [sym_identifier] = ACTIONS(451),
        [sym_comment] = ACTIONS(67),
        [sym__dedent] = ACTIONS(449),
    },
    [144] = {
        [sym_parameters] = STATE(146),
        [anon_sym_LPAREN] = ACTIONS(453),
        [sym_comment] = ACTIONS(67),
    },
    [145] = {
        [sym_default_parameter] = STATE(152),
        [sym_list_splat_parameter] = STATE(153),
        [sym_dictionary_splat_parameter] = STATE(154),
        [aux_sym_parameters_repeat1] = STATE(155),
        [anon_sym_RPAREN] = ACTIONS(455),
        [anon_sym_STAR] = ACTIONS(457),
        [sym_identifier] = ACTIONS(459),
        [sym_comment] = ACTIONS(67),
    },
    [146] = {
        [anon_sym_COLON] = ACTIONS(461),
        [sym_comment] = ACTIONS(67),
    },
    [147] = {
        [sym__simple_statement] = STATE(116),
        [sym_print_statement] = STATE(113),
        [sym_expression_statement] = STATE(113),
        [sym_return_statement] = STATE(113),
        [sym_delete_statement] = STATE(113),
        [sym__suite] = STATE(148),
        [sym__expression] = STATE(118),
        [sym_binary_operator] = STATE(114),
        [sym_subscript] = STATE(114),
        [anon_sym_print] = ACTIONS(365),
        [anon_sym_return] = ACTIONS(367),
        [anon_sym_del] = ACTIONS(369),
        [sym_pass_statement] = ACTIONS(371),
        [sym_break_statement] = ACTIONS(371),
        [sym_continue_statement] = ACTIONS(371),
        [sym_number] = ACTIONS(373),
        [sym_identifier] = ACTIONS(375),
        [sym_comment] = ACTIONS(67),
        [sym__indent] = ACTIONS(377),
    },
    [148] = {
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
        [sym_number] = ACTIONS(463),
        [sym_identifier] = ACTIONS(467),
        [sym_comment] = ACTIONS(67),
        [sym__dedent] = ACTIONS(465),
    },
    [149] = {
        [anon_sym_COLON] = ACTIONS(469),
        [sym_comment] = ACTIONS(67),
    },
    [150] = {
        [anon_sym_STAR] = ACTIONS(471),
        [sym_identifier] = ACTIONS(473),
        [sym_comment] = ACTIONS(67),
    },
    [151] = {
        [anon_sym_COMMA] = ACTIONS(475),
        [anon_sym_RPAREN] = ACTIONS(477),
        [anon_sym_EQ] = ACTIONS(479),
        [sym_comment] = ACTIONS(67),
    },
    [152] = {
        [anon_sym_COMMA] = ACTIONS(475),
        [anon_sym_RPAREN] = ACTIONS(477),
        [sym_comment] = ACTIONS(67),
    },
    [153] = {
        [anon_sym_COMMA] = ACTIONS(481),
        [anon_sym_RPAREN] = ACTIONS(477),
        [sym_comment] = ACTIONS(67),
    },
    [154] = {
        [anon_sym_RPAREN] = ACTIONS(477),
        [sym_comment] = ACTIONS(67),
    },
    [155] = {
        [sym_default_parameter] = STATE(157),
        [sym_list_splat_parameter] = STATE(158),
        [sym_dictionary_splat_parameter] = STATE(159),
        [anon_sym_STAR] = ACTIONS(457),
        [sym_identifier] = ACTIONS(483),
        [sym_comment] = ACTIONS(67),
    },
    [156] = {
        [anon_sym_COMMA] = ACTIONS(485),
        [anon_sym_RPAREN] = ACTIONS(487),
        [anon_sym_EQ] = ACTIONS(479),
        [sym_comment] = ACTIONS(67),
    },
    [157] = {
        [anon_sym_COMMA] = ACTIONS(485),
        [anon_sym_RPAREN] = ACTIONS(487),
        [sym_comment] = ACTIONS(67),
    },
    [158] = {
        [anon_sym_COMMA] = ACTIONS(489),
        [anon_sym_RPAREN] = ACTIONS(487),
        [sym_comment] = ACTIONS(67),
    },
    [159] = {
        [anon_sym_RPAREN] = ACTIONS(487),
        [sym_comment] = ACTIONS(67),
    },
    [160] = {
        [anon_sym_COLON] = ACTIONS(491),
        [sym_comment] = ACTIONS(67),
    },
    [161] = {
        [sym_dictionary_splat_parameter] = STATE(163),
        [anon_sym_STAR] = ACTIONS(493),
        [sym_comment] = ACTIONS(67),
    },
    [162] = {
        [anon_sym_STAR] = ACTIONS(471),
        [sym_comment] = ACTIONS(67),
    },
    [163] = {
        [anon_sym_RPAREN] = ACTIONS(495),
        [sym_comment] = ACTIONS(67),
    },
    [164] = {
        [anon_sym_COLON] = ACTIONS(497),
        [sym_comment] = ACTIONS(67),
    },
    [165] = {
        [sym_identifier] = ACTIONS(499),
        [sym_comment] = ACTIONS(67),
    },
    [166] = {
        [anon_sym_RPAREN] = ACTIONS(501),
        [sym_comment] = ACTIONS(67),
    },
    [167] = {
        [anon_sym_RPAREN] = ACTIONS(503),
        [anon_sym_STAR] = ACTIONS(505),
        [sym_identifier] = ACTIONS(507),
        [sym_comment] = ACTIONS(67),
    },
    [168] = {
        [anon_sym_COLON] = ACTIONS(509),
        [sym_comment] = ACTIONS(67),
    },
    [169] = {
        [sym__expression] = STATE(170),
        [sym_binary_operator] = STATE(31),
        [sym_subscript] = STATE(31),
        [sym_number] = ACTIONS(111),
        [sym_identifier] = ACTIONS(111),
        [sym_comment] = ACTIONS(67),
    },
    [170] = {
        [anon_sym_COMMA] = ACTIONS(511),
        [anon_sym_RPAREN] = ACTIONS(511),
        [anon_sym_PLUS] = ACTIONS(191),
        [anon_sym_LBRACK] = ACTIONS(193),
        [sym_comment] = ACTIONS(67),
    },
    [171] = {
        [anon_sym_COLON] = ACTIONS(513),
        [sym_comment] = ACTIONS(67),
    },
    [172] = {
        [sym_dictionary_splat_parameter] = STATE(173),
        [anon_sym_STAR] = ACTIONS(493),
        [sym_comment] = ACTIONS(67),
    },
    [173] = {
        [anon_sym_RPAREN] = ACTIONS(503),
        [sym_comment] = ACTIONS(67),
    },
    [174] = {
        [anon_sym_RPAREN] = ACTIONS(487),
        [anon_sym_STAR] = ACTIONS(515),
        [sym_identifier] = ACTIONS(517),
        [sym_comment] = ACTIONS(67),
    },
    [175] = {
        [anon_sym_COMMA] = ACTIONS(519),
        [anon_sym_RPAREN] = ACTIONS(519),
        [sym_comment] = ACTIONS(67),
    },
    [176] = {
        [aux_sym_with_statement_repeat1] = STATE(182),
        [anon_sym_COMMA] = ACTIONS(521),
        [anon_sym_COLON] = ACTIONS(523),
        [sym_comment] = ACTIONS(67),
    },
    [177] = {
        [anon_sym_COMMA] = ACTIONS(525),
        [anon_sym_COLON] = ACTIONS(525),
        [anon_sym_as] = ACTIONS(527),
        [anon_sym_PLUS] = ACTIONS(191),
        [anon_sym_LBRACK] = ACTIONS(193),
        [sym_comment] = ACTIONS(67),
    },
    [178] = {
        [sym__expression] = STATE(179),
        [sym_binary_operator] = STATE(31),
        [sym_subscript] = STATE(31),
        [sym_number] = ACTIONS(111),
        [sym_identifier] = ACTIONS(111),
        [sym_comment] = ACTIONS(67),
    },
    [179] = {
        [anon_sym_COMMA] = ACTIONS(529),
        [anon_sym_COLON] = ACTIONS(529),
        [anon_sym_PLUS] = ACTIONS(191),
        [anon_sym_LBRACK] = ACTIONS(193),
        [sym_comment] = ACTIONS(67),
    },
    [180] = {
        [sym_with_item] = STATE(188),
        [sym__expression] = STATE(177),
        [sym_binary_operator] = STATE(31),
        [sym_subscript] = STATE(31),
        [sym_number] = ACTIONS(111),
        [sym_identifier] = ACTIONS(111),
        [sym_comment] = ACTIONS(67),
    },
    [181] = {
        [sym__simple_statement] = STATE(116),
        [sym_print_statement] = STATE(113),
        [sym_expression_statement] = STATE(113),
        [sym_return_statement] = STATE(113),
        [sym_delete_statement] = STATE(113),
        [sym__suite] = STATE(187),
        [sym__expression] = STATE(118),
        [sym_binary_operator] = STATE(114),
        [sym_subscript] = STATE(114),
        [anon_sym_print] = ACTIONS(365),
        [anon_sym_return] = ACTIONS(367),
        [anon_sym_del] = ACTIONS(369),
        [sym_pass_statement] = ACTIONS(371),
        [sym_break_statement] = ACTIONS(371),
        [sym_continue_statement] = ACTIONS(371),
        [sym_number] = ACTIONS(373),
        [sym_identifier] = ACTIONS(375),
        [sym_comment] = ACTIONS(67),
        [sym__indent] = ACTIONS(377),
    },
    [182] = {
        [anon_sym_COMMA] = ACTIONS(531),
        [anon_sym_COLON] = ACTIONS(533),
        [sym_comment] = ACTIONS(67),
    },
    [183] = {
        [sym_with_item] = STATE(186),
        [sym__expression] = STATE(177),
        [sym_binary_operator] = STATE(31),
        [sym_subscript] = STATE(31),
        [sym_number] = ACTIONS(111),
        [sym_identifier] = ACTIONS(111),
        [sym_comment] = ACTIONS(67),
    },
    [184] = {
        [sym__simple_statement] = STATE(116),
        [sym_print_statement] = STATE(113),
        [sym_expression_statement] = STATE(113),
        [sym_return_statement] = STATE(113),
        [sym_delete_statement] = STATE(113),
        [sym__suite] = STATE(185),
        [sym__expression] = STATE(118),
        [sym_binary_operator] = STATE(114),
        [sym_subscript] = STATE(114),
        [anon_sym_print] = ACTIONS(365),
        [anon_sym_return] = ACTIONS(367),
        [anon_sym_del] = ACTIONS(369),
        [sym_pass_statement] = ACTIONS(371),
        [sym_break_statement] = ACTIONS(371),
        [sym_continue_statement] = ACTIONS(371),
        [sym_number] = ACTIONS(373),
        [sym_identifier] = ACTIONS(375),
        [sym_comment] = ACTIONS(67),
        [sym__indent] = ACTIONS(377),
    },
    [185] = {
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
        [anon_sym_AT] = ACTIONS(537),
        [sym_number] = ACTIONS(535),
        [sym_identifier] = ACTIONS(539),
        [sym_comment] = ACTIONS(67),
        [sym__dedent] = ACTIONS(537),
    },
    [186] = {
        [anon_sym_COMMA] = ACTIONS(541),
        [anon_sym_COLON] = ACTIONS(541),
        [sym_comment] = ACTIONS(67),
    },
    [187] = {
        [anon_sym_print] = ACTIONS(543),
        [anon_sym_return] = ACTIONS(543),
        [anon_sym_del] = ACTIONS(543),
        [sym_pass_statement] = ACTIONS(543),
        [sym_break_statement] = ACTIONS(543),
        [sym_continue_statement] = ACTIONS(543),
        [anon_sym_if] = ACTIONS(543),
        [anon_sym_for] = ACTIONS(543),
        [anon_sym_while] = ACTIONS(543),
        [anon_sym_try] = ACTIONS(543),
        [anon_sym_with] = ACTIONS(543),
        [anon_sym_def] = ACTIONS(543),
        [anon_sym_class] = ACTIONS(543),
        [anon_sym_AT] = ACTIONS(545),
        [sym_number] = ACTIONS(543),
        [sym_identifier] = ACTIONS(547),
        [sym_comment] = ACTIONS(67),
        [sym__dedent] = ACTIONS(545),
    },
    [188] = {
        [anon_sym_COMMA] = ACTIONS(549),
        [anon_sym_COLON] = ACTIONS(549),
        [sym_comment] = ACTIONS(67),
    },
    [189] = {
        [sym__simple_statement] = STATE(195),
        [sym_print_statement] = STATE(193),
        [sym_expression_statement] = STATE(193),
        [sym_return_statement] = STATE(193),
        [sym_delete_statement] = STATE(193),
        [sym__suite] = STATE(196),
        [sym__expression] = STATE(197),
        [sym_binary_operator] = STATE(31),
        [sym_subscript] = STATE(31),
        [anon_sym_print] = ACTIONS(551),
        [anon_sym_return] = ACTIONS(553),
        [anon_sym_del] = ACTIONS(555),
        [sym_pass_statement] = ACTIONS(557),
        [sym_break_statement] = ACTIONS(557),
        [sym_continue_statement] = ACTIONS(557),
        [sym_number] = ACTIONS(111),
        [sym_identifier] = ACTIONS(559),
        [sym_comment] = ACTIONS(67),
        [sym__indent] = ACTIONS(561),
    },
    [190] = {
        [sym__expression] = STATE(224),
        [sym_binary_operator] = STATE(31),
        [sym_subscript] = STATE(31),
        [sym_number] = ACTIONS(111),
        [sym_identifier] = ACTIONS(111),
        [sym_comment] = ACTIONS(67),
    },
    [191] = {
        [sym_expression_list] = STATE(223),
        [sym__expression] = STATE(79),
        [sym_binary_operator] = STATE(31),
        [sym_subscript] = STATE(31),
        [sym_number] = ACTIONS(111),
        [sym_identifier] = ACTIONS(111),
        [sym_comment] = ACTIONS(67),
    },
    [192] = {
        [sym_expression_list] = STATE(222),
        [sym__expression] = STATE(79),
        [sym_binary_operator] = STATE(31),
        [sym_subscript] = STATE(31),
        [sym_number] = ACTIONS(111),
        [sym_identifier] = ACTIONS(111),
        [sym_comment] = ACTIONS(67),
    },
    [193] = {
        [anon_sym_except] = ACTIONS(105),
        [anon_sym_finally] = ACTIONS(105),
        [sym_comment] = ACTIONS(67),
    },
    [194] = {
        [sym__statement] = STATE(94),
        [sym__simple_statement] = STATE(95),
        [sym_print_statement] = STATE(5),
        [sym_expression_statement] = STATE(5),
        [sym_return_statement] = STATE(5),
        [sym_delete_statement] = STATE(5),
        [sym__compound_statement] = STATE(96),
        [sym_if_statement] = STATE(97),
        [sym_for_statement] = STATE(97),
        [sym_while_statement] = STATE(97),
        [sym_try_statement] = STATE(97),
        [sym_with_statement] = STATE(97),
        [sym_function_definition] = STATE(97),
        [sym_class_definition] = STATE(97),
        [sym_decorated_definition] = STATE(97),
        [sym_decorator] = STATE(20),
        [sym__expression] = STATE(21),
        [sym_binary_operator] = STATE(14),
        [sym_subscript] = STATE(14),
        [aux_sym_module_repeat1] = STATE(220),
        [aux_sym_decorated_definition_repeat1] = STATE(99),
        [anon_sym_print] = ACTIONS(77),
        [anon_sym_return] = ACTIONS(79),
        [anon_sym_del] = ACTIONS(81),
        [sym_pass_statement] = ACTIONS(83),
        [sym_break_statement] = ACTIONS(83),
        [sym_continue_statement] = ACTIONS(83),
        [anon_sym_if] = ACTIONS(307),
        [anon_sym_for] = ACTIONS(309),
        [anon_sym_while] = ACTIONS(311),
        [anon_sym_try] = ACTIONS(313),
        [anon_sym_with] = ACTIONS(315),
        [anon_sym_def] = ACTIONS(317),
        [anon_sym_class] = ACTIONS(319),
        [anon_sym_AT] = ACTIONS(99),
        [sym_number] = ACTIONS(101),
        [sym_identifier] = ACTIONS(103),
        [sym_comment] = ACTIONS(67),
        [sym__dedent] = ACTIONS(563),
    },
    [195] = {
        [anon_sym_except] = ACTIONS(323),
        [anon_sym_finally] = ACTIONS(323),
        [sym_comment] = ACTIONS(67),
    },
    [196] = {
        [sym_except_clause] = STATE(200),
        [sym_finally_clause] = STATE(201),
        [aux_sym_try_statement_repeat1] = STATE(202),
        [anon_sym_except] = ACTIONS(565),
        [anon_sym_finally] = ACTIONS(567),
        [sym_comment] = ACTIONS(67),
    },
    [197] = {
        [anon_sym_except] = ACTIONS(151),
        [anon_sym_finally] = ACTIONS(151),
        [anon_sym_PLUS] = ACTIONS(191),
        [anon_sym_LBRACK] = ACTIONS(193),
        [sym_comment] = ACTIONS(67),
    },
    [198] = {
        [sym__expression] = STATE(212),
        [sym_binary_operator] = STATE(31),
        [sym_subscript] = STATE(31),
        [sym_number] = ACTIONS(111),
        [sym_identifier] = ACTIONS(111),
        [sym_comment] = ACTIONS(67),
    },
    [199] = {
        [anon_sym_COLON] = ACTIONS(569),
        [sym_comment] = ACTIONS(67),
    },
    [200] = {
        [anon_sym_print] = ACTIONS(571),
        [anon_sym_return] = ACTIONS(571),
        [anon_sym_del] = ACTIONS(571),
        [sym_pass_statement] = ACTIONS(571),
        [sym_break_statement] = ACTIONS(571),
        [sym_continue_statement] = ACTIONS(571),
        [anon_sym_if] = ACTIONS(571),
        [anon_sym_else] = ACTIONS(571),
        [anon_sym_for] = ACTIONS(571),
        [anon_sym_while] = ACTIONS(571),
        [anon_sym_try] = ACTIONS(571),
        [anon_sym_except] = ACTIONS(571),
        [anon_sym_finally] = ACTIONS(571),
        [anon_sym_with] = ACTIONS(571),
        [anon_sym_def] = ACTIONS(571),
        [anon_sym_class] = ACTIONS(571),
        [anon_sym_AT] = ACTIONS(573),
        [sym_number] = ACTIONS(571),
        [sym_identifier] = ACTIONS(575),
        [sym_comment] = ACTIONS(67),
        [sym__dedent] = ACTIONS(573),
    },
    [201] = {
        [anon_sym_print] = ACTIONS(577),
        [anon_sym_return] = ACTIONS(577),
        [anon_sym_del] = ACTIONS(577),
        [sym_pass_statement] = ACTIONS(577),
        [sym_break_statement] = ACTIONS(577),
        [sym_continue_statement] = ACTIONS(577),
        [anon_sym_if] = ACTIONS(577),
        [anon_sym_for] = ACTIONS(577),
        [anon_sym_while] = ACTIONS(577),
        [anon_sym_try] = ACTIONS(577),
        [anon_sym_with] = ACTIONS(577),
        [anon_sym_def] = ACTIONS(577),
        [anon_sym_class] = ACTIONS(577),
        [anon_sym_AT] = ACTIONS(579),
        [sym_number] = ACTIONS(577),
        [sym_identifier] = ACTIONS(581),
        [sym_comment] = ACTIONS(67),
        [sym__dedent] = ACTIONS(579),
    },
    [202] = {
        [sym_else_clause] = STATE(204),
        [sym_except_clause] = STATE(205),
        [sym_finally_clause] = STATE(206),
        [anon_sym_print] = ACTIONS(577),
        [anon_sym_return] = ACTIONS(577),
        [anon_sym_del] = ACTIONS(577),
        [sym_pass_statement] = ACTIONS(577),
        [sym_break_statement] = ACTIONS(577),
        [sym_continue_statement] = ACTIONS(577),
        [anon_sym_if] = ACTIONS(577),
        [anon_sym_else] = ACTIONS(583),
        [anon_sym_for] = ACTIONS(577),
        [anon_sym_while] = ACTIONS(577),
        [anon_sym_try] = ACTIONS(577),
        [anon_sym_except] = ACTIONS(585),
        [anon_sym_finally] = ACTIONS(587),
        [anon_sym_with] = ACTIONS(577),
        [anon_sym_def] = ACTIONS(577),
        [anon_sym_class] = ACTIONS(577),
        [anon_sym_AT] = ACTIONS(579),
        [sym_number] = ACTIONS(577),
        [sym_identifier] = ACTIONS(581),
        [sym_comment] = ACTIONS(67),
        [sym__dedent] = ACTIONS(579),
    },
    [203] = {
        [anon_sym_COLON] = ACTIONS(589),
        [sym_comment] = ACTIONS(67),
    },
    [204] = {
        [sym_finally_clause] = STATE(207),
        [anon_sym_print] = ACTIONS(591),
        [anon_sym_return] = ACTIONS(591),
        [anon_sym_del] = ACTIONS(591),
        [sym_pass_statement] = ACTIONS(591),
        [sym_break_statement] = ACTIONS(591),
        [sym_continue_statement] = ACTIONS(591),
        [anon_sym_if] = ACTIONS(591),
        [anon_sym_for] = ACTIONS(591),
        [anon_sym_while] = ACTIONS(591),
        [anon_sym_try] = ACTIONS(591),
        [anon_sym_finally] = ACTIONS(587),
        [anon_sym_with] = ACTIONS(591),
        [anon_sym_def] = ACTIONS(591),
        [anon_sym_class] = ACTIONS(591),
        [anon_sym_AT] = ACTIONS(593),
        [sym_number] = ACTIONS(591),
        [sym_identifier] = ACTIONS(595),
        [sym_comment] = ACTIONS(67),
        [sym__dedent] = ACTIONS(593),
    },
    [205] = {
        [anon_sym_print] = ACTIONS(597),
        [anon_sym_return] = ACTIONS(597),
        [anon_sym_del] = ACTIONS(597),
        [sym_pass_statement] = ACTIONS(597),
        [sym_break_statement] = ACTIONS(597),
        [sym_continue_statement] = ACTIONS(597),
        [anon_sym_if] = ACTIONS(597),
        [anon_sym_else] = ACTIONS(597),
        [anon_sym_for] = ACTIONS(597),
        [anon_sym_while] = ACTIONS(597),
        [anon_sym_try] = ACTIONS(597),
        [anon_sym_except] = ACTIONS(597),
        [anon_sym_finally] = ACTIONS(597),
        [anon_sym_with] = ACTIONS(597),
        [anon_sym_def] = ACTIONS(597),
        [anon_sym_class] = ACTIONS(597),
        [anon_sym_AT] = ACTIONS(599),
        [sym_number] = ACTIONS(597),
        [sym_identifier] = ACTIONS(601),
        [sym_comment] = ACTIONS(67),
        [sym__dedent] = ACTIONS(599),
    },
    [206] = {
        [anon_sym_print] = ACTIONS(591),
        [anon_sym_return] = ACTIONS(591),
        [anon_sym_del] = ACTIONS(591),
        [sym_pass_statement] = ACTIONS(591),
        [sym_break_statement] = ACTIONS(591),
        [sym_continue_statement] = ACTIONS(591),
        [anon_sym_if] = ACTIONS(591),
        [anon_sym_for] = ACTIONS(591),
        [anon_sym_while] = ACTIONS(591),
        [anon_sym_try] = ACTIONS(591),
        [anon_sym_with] = ACTIONS(591),
        [anon_sym_def] = ACTIONS(591),
        [anon_sym_class] = ACTIONS(591),
        [anon_sym_AT] = ACTIONS(593),
        [sym_number] = ACTIONS(591),
        [sym_identifier] = ACTIONS(595),
        [sym_comment] = ACTIONS(67),
        [sym__dedent] = ACTIONS(593),
    },
    [207] = {
        [anon_sym_print] = ACTIONS(603),
        [anon_sym_return] = ACTIONS(603),
        [anon_sym_del] = ACTIONS(603),
        [sym_pass_statement] = ACTIONS(603),
        [sym_break_statement] = ACTIONS(603),
        [sym_continue_statement] = ACTIONS(603),
        [anon_sym_if] = ACTIONS(603),
        [anon_sym_for] = ACTIONS(603),
        [anon_sym_while] = ACTIONS(603),
        [anon_sym_try] = ACTIONS(603),
        [anon_sym_with] = ACTIONS(603),
        [anon_sym_def] = ACTIONS(603),
        [anon_sym_class] = ACTIONS(603),
        [anon_sym_AT] = ACTIONS(605),
        [sym_number] = ACTIONS(603),
        [sym_identifier] = ACTIONS(607),
        [sym_comment] = ACTIONS(67),
        [sym__dedent] = ACTIONS(605),
    },
    [208] = {
        [sym__simple_statement] = STATE(116),
        [sym_print_statement] = STATE(113),
        [sym_expression_statement] = STATE(113),
        [sym_return_statement] = STATE(113),
        [sym_delete_statement] = STATE(113),
        [sym__suite] = STATE(209),
        [sym__expression] = STATE(118),
        [sym_binary_operator] = STATE(114),
        [sym_subscript] = STATE(114),
        [anon_sym_print] = ACTIONS(365),
        [anon_sym_return] = ACTIONS(367),
        [anon_sym_del] = ACTIONS(369),
        [sym_pass_statement] = ACTIONS(371),
        [sym_break_statement] = ACTIONS(371),
        [sym_continue_statement] = ACTIONS(371),
        [sym_number] = ACTIONS(373),
        [sym_identifier] = ACTIONS(375),
        [sym_comment] = ACTIONS(67),
        [sym__indent] = ACTIONS(377),
    },
    [209] = {
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
        [anon_sym_finally] = ACTIONS(609),
        [anon_sym_with] = ACTIONS(609),
        [anon_sym_def] = ACTIONS(609),
        [anon_sym_class] = ACTIONS(609),
        [anon_sym_AT] = ACTIONS(611),
        [sym_number] = ACTIONS(609),
        [sym_identifier] = ACTIONS(613),
        [sym_comment] = ACTIONS(67),
        [sym__dedent] = ACTIONS(611),
    },
    [210] = {
        [sym__simple_statement] = STATE(116),
        [sym_print_statement] = STATE(113),
        [sym_expression_statement] = STATE(113),
        [sym_return_statement] = STATE(113),
        [sym_delete_statement] = STATE(113),
        [sym__suite] = STATE(211),
        [sym__expression] = STATE(118),
        [sym_binary_operator] = STATE(114),
        [sym_subscript] = STATE(114),
        [anon_sym_print] = ACTIONS(365),
        [anon_sym_return] = ACTIONS(367),
        [anon_sym_del] = ACTIONS(369),
        [sym_pass_statement] = ACTIONS(371),
        [sym_break_statement] = ACTIONS(371),
        [sym_continue_statement] = ACTIONS(371),
        [sym_number] = ACTIONS(373),
        [sym_identifier] = ACTIONS(375),
        [sym_comment] = ACTIONS(67),
        [sym__indent] = ACTIONS(377),
    },
    [211] = {
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
        [anon_sym_with] = ACTIONS(615),
        [anon_sym_def] = ACTIONS(615),
        [anon_sym_class] = ACTIONS(615),
        [anon_sym_AT] = ACTIONS(617),
        [sym_number] = ACTIONS(615),
        [sym_identifier] = ACTIONS(619),
        [sym_comment] = ACTIONS(67),
        [sym__dedent] = ACTIONS(617),
    },
    [212] = {
        [anon_sym_COMMA] = ACTIONS(621),
        [anon_sym_COLON] = ACTIONS(623),
        [anon_sym_as] = ACTIONS(621),
        [anon_sym_PLUS] = ACTIONS(191),
        [anon_sym_LBRACK] = ACTIONS(193),
        [sym_comment] = ACTIONS(67),
    },
    [213] = {
        [sym__expression] = STATE(215),
        [sym_binary_operator] = STATE(31),
        [sym_subscript] = STATE(31),
        [sym_number] = ACTIONS(111),
        [sym_identifier] = ACTIONS(111),
        [sym_comment] = ACTIONS(67),
    },
    [214] = {
        [sym__simple_statement] = STATE(116),
        [sym_print_statement] = STATE(113),
        [sym_expression_statement] = STATE(113),
        [sym_return_statement] = STATE(113),
        [sym_delete_statement] = STATE(113),
        [sym__suite] = STATE(218),
        [sym__expression] = STATE(118),
        [sym_binary_operator] = STATE(114),
        [sym_subscript] = STATE(114),
        [anon_sym_print] = ACTIONS(365),
        [anon_sym_return] = ACTIONS(367),
        [anon_sym_del] = ACTIONS(369),
        [sym_pass_statement] = ACTIONS(371),
        [sym_break_statement] = ACTIONS(371),
        [sym_continue_statement] = ACTIONS(371),
        [sym_number] = ACTIONS(373),
        [sym_identifier] = ACTIONS(375),
        [sym_comment] = ACTIONS(67),
        [sym__indent] = ACTIONS(377),
    },
    [215] = {
        [anon_sym_COLON] = ACTIONS(625),
        [anon_sym_PLUS] = ACTIONS(191),
        [anon_sym_LBRACK] = ACTIONS(193),
        [sym_comment] = ACTIONS(67),
    },
    [216] = {
        [sym__simple_statement] = STATE(116),
        [sym_print_statement] = STATE(113),
        [sym_expression_statement] = STATE(113),
        [sym_return_statement] = STATE(113),
        [sym_delete_statement] = STATE(113),
        [sym__suite] = STATE(217),
        [sym__expression] = STATE(118),
        [sym_binary_operator] = STATE(114),
        [sym_subscript] = STATE(114),
        [anon_sym_print] = ACTIONS(365),
        [anon_sym_return] = ACTIONS(367),
        [anon_sym_del] = ACTIONS(369),
        [sym_pass_statement] = ACTIONS(371),
        [sym_break_statement] = ACTIONS(371),
        [sym_continue_statement] = ACTIONS(371),
        [sym_number] = ACTIONS(373),
        [sym_identifier] = ACTIONS(375),
        [sym_comment] = ACTIONS(67),
        [sym__indent] = ACTIONS(377),
    },
    [217] = {
        [anon_sym_print] = ACTIONS(627),
        [anon_sym_return] = ACTIONS(627),
        [anon_sym_del] = ACTIONS(627),
        [sym_pass_statement] = ACTIONS(627),
        [sym_break_statement] = ACTIONS(627),
        [sym_continue_statement] = ACTIONS(627),
        [anon_sym_if] = ACTIONS(627),
        [anon_sym_else] = ACTIONS(627),
        [anon_sym_for] = ACTIONS(627),
        [anon_sym_while] = ACTIONS(627),
        [anon_sym_try] = ACTIONS(627),
        [anon_sym_except] = ACTIONS(627),
        [anon_sym_finally] = ACTIONS(627),
        [anon_sym_with] = ACTIONS(627),
        [anon_sym_def] = ACTIONS(627),
        [anon_sym_class] = ACTIONS(627),
        [anon_sym_AT] = ACTIONS(629),
        [sym_number] = ACTIONS(627),
        [sym_identifier] = ACTIONS(631),
        [sym_comment] = ACTIONS(67),
        [sym__dedent] = ACTIONS(629),
    },
    [218] = {
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
        [sym_number] = ACTIONS(633),
        [sym_identifier] = ACTIONS(637),
        [sym_comment] = ACTIONS(67),
        [sym__dedent] = ACTIONS(635),
    },
    [219] = {
        [anon_sym_except] = ACTIONS(341),
        [anon_sym_finally] = ACTIONS(341),
        [sym_comment] = ACTIONS(67),
    },
    [220] = {
        [sym__statement] = STATE(102),
        [sym__simple_statement] = STATE(95),
        [sym_print_statement] = STATE(5),
        [sym_expression_statement] = STATE(5),
        [sym_return_statement] = STATE(5),
        [sym_delete_statement] = STATE(5),
        [sym__compound_statement] = STATE(96),
        [sym_if_statement] = STATE(97),
        [sym_for_statement] = STATE(97),
        [sym_while_statement] = STATE(97),
        [sym_try_statement] = STATE(97),
        [sym_with_statement] = STATE(97),
        [sym_function_definition] = STATE(97),
        [sym_class_definition] = STATE(97),
        [sym_decorated_definition] = STATE(97),
        [sym_decorator] = STATE(20),
        [sym__expression] = STATE(21),
        [sym_binary_operator] = STATE(14),
        [sym_subscript] = STATE(14),
        [aux_sym_decorated_definition_repeat1] = STATE(99),
        [anon_sym_print] = ACTIONS(77),
        [anon_sym_return] = ACTIONS(79),
        [anon_sym_del] = ACTIONS(81),
        [sym_pass_statement] = ACTIONS(83),
        [sym_break_statement] = ACTIONS(83),
        [sym_continue_statement] = ACTIONS(83),
        [anon_sym_if] = ACTIONS(307),
        [anon_sym_for] = ACTIONS(309),
        [anon_sym_while] = ACTIONS(311),
        [anon_sym_try] = ACTIONS(313),
        [anon_sym_with] = ACTIONS(315),
        [anon_sym_def] = ACTIONS(317),
        [anon_sym_class] = ACTIONS(319),
        [anon_sym_AT] = ACTIONS(99),
        [sym_number] = ACTIONS(101),
        [sym_identifier] = ACTIONS(103),
        [sym_comment] = ACTIONS(67),
        [sym__dedent] = ACTIONS(639),
    },
    [221] = {
        [anon_sym_except] = ACTIONS(355),
        [anon_sym_finally] = ACTIONS(355),
        [sym_comment] = ACTIONS(67),
    },
    [222] = {
        [anon_sym_except] = ACTIONS(405),
        [anon_sym_finally] = ACTIONS(405),
        [sym_comment] = ACTIONS(67),
    },
    [223] = {
        [anon_sym_except] = ACTIONS(431),
        [anon_sym_finally] = ACTIONS(431),
        [sym_comment] = ACTIONS(67),
    },
    [224] = {
        [aux_sym_print_statement_repeat1] = STATE(225),
        [anon_sym_COMMA] = ACTIONS(265),
        [anon_sym_except] = ACTIONS(437),
        [anon_sym_finally] = ACTIONS(437),
        [anon_sym_PLUS] = ACTIONS(191),
        [anon_sym_LBRACK] = ACTIONS(193),
        [sym_comment] = ACTIONS(67),
    },
    [225] = {
        [anon_sym_COMMA] = ACTIONS(271),
        [anon_sym_except] = ACTIONS(443),
        [anon_sym_finally] = ACTIONS(443),
        [sym_comment] = ACTIONS(67),
    },
    [226] = {
        [anon_sym_COLON] = ACTIONS(641),
        [anon_sym_PLUS] = ACTIONS(191),
        [anon_sym_LBRACK] = ACTIONS(193),
        [sym_comment] = ACTIONS(67),
    },
    [227] = {
        [sym__simple_statement] = STATE(116),
        [sym_print_statement] = STATE(113),
        [sym_expression_statement] = STATE(113),
        [sym_return_statement] = STATE(113),
        [sym_delete_statement] = STATE(113),
        [sym__suite] = STATE(228),
        [sym__expression] = STATE(118),
        [sym_binary_operator] = STATE(114),
        [sym_subscript] = STATE(114),
        [anon_sym_print] = ACTIONS(365),
        [anon_sym_return] = ACTIONS(367),
        [anon_sym_del] = ACTIONS(369),
        [sym_pass_statement] = ACTIONS(371),
        [sym_break_statement] = ACTIONS(371),
        [sym_continue_statement] = ACTIONS(371),
        [sym_number] = ACTIONS(373),
        [sym_identifier] = ACTIONS(375),
        [sym_comment] = ACTIONS(67),
        [sym__indent] = ACTIONS(377),
    },
    [228] = {
        [sym_else_clause] = STATE(229),
        [anon_sym_print] = ACTIONS(643),
        [anon_sym_return] = ACTIONS(643),
        [anon_sym_del] = ACTIONS(643),
        [sym_pass_statement] = ACTIONS(643),
        [sym_break_statement] = ACTIONS(643),
        [sym_continue_statement] = ACTIONS(643),
        [anon_sym_if] = ACTIONS(643),
        [anon_sym_else] = ACTIONS(583),
        [anon_sym_for] = ACTIONS(643),
        [anon_sym_while] = ACTIONS(643),
        [anon_sym_try] = ACTIONS(643),
        [anon_sym_with] = ACTIONS(643),
        [anon_sym_def] = ACTIONS(643),
        [anon_sym_class] = ACTIONS(643),
        [anon_sym_AT] = ACTIONS(645),
        [sym_number] = ACTIONS(643),
        [sym_identifier] = ACTIONS(647),
        [sym_comment] = ACTIONS(67),
        [sym__dedent] = ACTIONS(645),
    },
    [229] = {
        [anon_sym_print] = ACTIONS(649),
        [anon_sym_return] = ACTIONS(649),
        [anon_sym_del] = ACTIONS(649),
        [sym_pass_statement] = ACTIONS(649),
        [sym_break_statement] = ACTIONS(649),
        [sym_continue_statement] = ACTIONS(649),
        [anon_sym_if] = ACTIONS(649),
        [anon_sym_for] = ACTIONS(649),
        [anon_sym_while] = ACTIONS(649),
        [anon_sym_try] = ACTIONS(649),
        [anon_sym_with] = ACTIONS(649),
        [anon_sym_def] = ACTIONS(649),
        [anon_sym_class] = ACTIONS(649),
        [anon_sym_AT] = ACTIONS(651),
        [sym_number] = ACTIONS(649),
        [sym_identifier] = ACTIONS(653),
        [sym_comment] = ACTIONS(67),
        [sym__dedent] = ACTIONS(651),
    },
    [230] = {
        [anon_sym_in] = ACTIONS(655),
        [sym_comment] = ACTIONS(67),
    },
    [231] = {
        [sym_expression_list] = STATE(232),
        [sym__expression] = STATE(79),
        [sym_binary_operator] = STATE(31),
        [sym_subscript] = STATE(31),
        [sym_number] = ACTIONS(111),
        [sym_identifier] = ACTIONS(111),
        [sym_comment] = ACTIONS(67),
    },
    [232] = {
        [anon_sym_COLON] = ACTIONS(657),
        [sym_comment] = ACTIONS(67),
    },
    [233] = {
        [sym__simple_statement] = STATE(116),
        [sym_print_statement] = STATE(113),
        [sym_expression_statement] = STATE(113),
        [sym_return_statement] = STATE(113),
        [sym_delete_statement] = STATE(113),
        [sym__suite] = STATE(234),
        [sym__expression] = STATE(118),
        [sym_binary_operator] = STATE(114),
        [sym_subscript] = STATE(114),
        [anon_sym_print] = ACTIONS(365),
        [anon_sym_return] = ACTIONS(367),
        [anon_sym_del] = ACTIONS(369),
        [sym_pass_statement] = ACTIONS(371),
        [sym_break_statement] = ACTIONS(371),
        [sym_continue_statement] = ACTIONS(371),
        [sym_number] = ACTIONS(373),
        [sym_identifier] = ACTIONS(375),
        [sym_comment] = ACTIONS(67),
        [sym__indent] = ACTIONS(377),
    },
    [234] = {
        [sym_else_clause] = STATE(235),
        [anon_sym_print] = ACTIONS(659),
        [anon_sym_return] = ACTIONS(659),
        [anon_sym_del] = ACTIONS(659),
        [sym_pass_statement] = ACTIONS(659),
        [sym_break_statement] = ACTIONS(659),
        [sym_continue_statement] = ACTIONS(659),
        [anon_sym_if] = ACTIONS(659),
        [anon_sym_else] = ACTIONS(583),
        [anon_sym_for] = ACTIONS(659),
        [anon_sym_while] = ACTIONS(659),
        [anon_sym_try] = ACTIONS(659),
        [anon_sym_with] = ACTIONS(659),
        [anon_sym_def] = ACTIONS(659),
        [anon_sym_class] = ACTIONS(659),
        [anon_sym_AT] = ACTIONS(661),
        [sym_number] = ACTIONS(659),
        [sym_identifier] = ACTIONS(663),
        [sym_comment] = ACTIONS(67),
        [sym__dedent] = ACTIONS(661),
    },
    [235] = {
        [anon_sym_print] = ACTIONS(665),
        [anon_sym_return] = ACTIONS(665),
        [anon_sym_del] = ACTIONS(665),
        [sym_pass_statement] = ACTIONS(665),
        [sym_break_statement] = ACTIONS(665),
        [sym_continue_statement] = ACTIONS(665),
        [anon_sym_if] = ACTIONS(665),
        [anon_sym_for] = ACTIONS(665),
        [anon_sym_while] = ACTIONS(665),
        [anon_sym_try] = ACTIONS(665),
        [anon_sym_with] = ACTIONS(665),
        [anon_sym_def] = ACTIONS(665),
        [anon_sym_class] = ACTIONS(665),
        [anon_sym_AT] = ACTIONS(667),
        [sym_number] = ACTIONS(665),
        [sym_identifier] = ACTIONS(669),
        [sym_comment] = ACTIONS(67),
        [sym__dedent] = ACTIONS(667),
    },
    [236] = {
        [anon_sym_COLON] = ACTIONS(671),
        [anon_sym_PLUS] = ACTIONS(191),
        [anon_sym_LBRACK] = ACTIONS(193),
        [sym_comment] = ACTIONS(67),
    },
    [237] = {
        [sym__simple_statement] = STATE(116),
        [sym_print_statement] = STATE(113),
        [sym_expression_statement] = STATE(113),
        [sym_return_statement] = STATE(113),
        [sym_delete_statement] = STATE(113),
        [sym__suite] = STATE(238),
        [sym__expression] = STATE(118),
        [sym_binary_operator] = STATE(114),
        [sym_subscript] = STATE(114),
        [anon_sym_print] = ACTIONS(365),
        [anon_sym_return] = ACTIONS(367),
        [anon_sym_del] = ACTIONS(369),
        [sym_pass_statement] = ACTIONS(371),
        [sym_break_statement] = ACTIONS(371),
        [sym_continue_statement] = ACTIONS(371),
        [sym_number] = ACTIONS(373),
        [sym_identifier] = ACTIONS(375),
        [sym_comment] = ACTIONS(67),
        [sym__indent] = ACTIONS(377),
    },
    [238] = {
        [sym_elif_clause] = STATE(240),
        [sym_else_clause] = STATE(241),
        [aux_sym_if_statement_repeat1] = STATE(242),
        [anon_sym_print] = ACTIONS(673),
        [anon_sym_return] = ACTIONS(673),
        [anon_sym_del] = ACTIONS(673),
        [sym_pass_statement] = ACTIONS(673),
        [sym_break_statement] = ACTIONS(673),
        [sym_continue_statement] = ACTIONS(673),
        [anon_sym_if] = ACTIONS(673),
        [anon_sym_elif] = ACTIONS(675),
        [anon_sym_else] = ACTIONS(583),
        [anon_sym_for] = ACTIONS(673),
        [anon_sym_while] = ACTIONS(673),
        [anon_sym_try] = ACTIONS(673),
        [anon_sym_with] = ACTIONS(673),
        [anon_sym_def] = ACTIONS(673),
        [anon_sym_class] = ACTIONS(673),
        [anon_sym_AT] = ACTIONS(677),
        [sym_number] = ACTIONS(673),
        [sym_identifier] = ACTIONS(679),
        [sym_comment] = ACTIONS(67),
        [sym__dedent] = ACTIONS(677),
    },
    [239] = {
        [sym__expression] = STATE(245),
        [sym_binary_operator] = STATE(31),
        [sym_subscript] = STATE(31),
        [sym_number] = ACTIONS(111),
        [sym_identifier] = ACTIONS(111),
        [sym_comment] = ACTIONS(67),
    },
    [240] = {
        [anon_sym_print] = ACTIONS(681),
        [anon_sym_return] = ACTIONS(681),
        [anon_sym_del] = ACTIONS(681),
        [sym_pass_statement] = ACTIONS(681),
        [sym_break_statement] = ACTIONS(681),
        [sym_continue_statement] = ACTIONS(681),
        [anon_sym_if] = ACTIONS(681),
        [anon_sym_elif] = ACTIONS(681),
        [anon_sym_else] = ACTIONS(681),
        [anon_sym_for] = ACTIONS(681),
        [anon_sym_while] = ACTIONS(681),
        [anon_sym_try] = ACTIONS(681),
        [anon_sym_with] = ACTIONS(681),
        [anon_sym_def] = ACTIONS(681),
        [anon_sym_class] = ACTIONS(681),
        [anon_sym_AT] = ACTIONS(683),
        [sym_number] = ACTIONS(681),
        [sym_identifier] = ACTIONS(685),
        [sym_comment] = ACTIONS(67),
        [sym__dedent] = ACTIONS(683),
    },
    [241] = {
        [anon_sym_print] = ACTIONS(687),
        [anon_sym_return] = ACTIONS(687),
        [anon_sym_del] = ACTIONS(687),
        [sym_pass_statement] = ACTIONS(687),
        [sym_break_statement] = ACTIONS(687),
        [sym_continue_statement] = ACTIONS(687),
        [anon_sym_if] = ACTIONS(687),
        [anon_sym_for] = ACTIONS(687),
        [anon_sym_while] = ACTIONS(687),
        [anon_sym_try] = ACTIONS(687),
        [anon_sym_with] = ACTIONS(687),
        [anon_sym_def] = ACTIONS(687),
        [anon_sym_class] = ACTIONS(687),
        [anon_sym_AT] = ACTIONS(689),
        [sym_number] = ACTIONS(687),
        [sym_identifier] = ACTIONS(691),
        [sym_comment] = ACTIONS(67),
        [sym__dedent] = ACTIONS(689),
    },
    [242] = {
        [sym_elif_clause] = STATE(243),
        [sym_else_clause] = STATE(244),
        [anon_sym_print] = ACTIONS(687),
        [anon_sym_return] = ACTIONS(687),
        [anon_sym_del] = ACTIONS(687),
        [sym_pass_statement] = ACTIONS(687),
        [sym_break_statement] = ACTIONS(687),
        [sym_continue_statement] = ACTIONS(687),
        [anon_sym_if] = ACTIONS(687),
        [anon_sym_elif] = ACTIONS(675),
        [anon_sym_else] = ACTIONS(583),
        [anon_sym_for] = ACTIONS(687),
        [anon_sym_while] = ACTIONS(687),
        [anon_sym_try] = ACTIONS(687),
        [anon_sym_with] = ACTIONS(687),
        [anon_sym_def] = ACTIONS(687),
        [anon_sym_class] = ACTIONS(687),
        [anon_sym_AT] = ACTIONS(689),
        [sym_number] = ACTIONS(687),
        [sym_identifier] = ACTIONS(691),
        [sym_comment] = ACTIONS(67),
        [sym__dedent] = ACTIONS(689),
    },
    [243] = {
        [anon_sym_print] = ACTIONS(693),
        [anon_sym_return] = ACTIONS(693),
        [anon_sym_del] = ACTIONS(693),
        [sym_pass_statement] = ACTIONS(693),
        [sym_break_statement] = ACTIONS(693),
        [sym_continue_statement] = ACTIONS(693),
        [anon_sym_if] = ACTIONS(693),
        [anon_sym_elif] = ACTIONS(693),
        [anon_sym_else] = ACTIONS(693),
        [anon_sym_for] = ACTIONS(693),
        [anon_sym_while] = ACTIONS(693),
        [anon_sym_try] = ACTIONS(693),
        [anon_sym_with] = ACTIONS(693),
        [anon_sym_def] = ACTIONS(693),
        [anon_sym_class] = ACTIONS(693),
        [anon_sym_AT] = ACTIONS(695),
        [sym_number] = ACTIONS(693),
        [sym_identifier] = ACTIONS(697),
        [sym_comment] = ACTIONS(67),
        [sym__dedent] = ACTIONS(695),
    },
    [244] = {
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
        [sym_number] = ACTIONS(699),
        [sym_identifier] = ACTIONS(703),
        [sym_comment] = ACTIONS(67),
        [sym__dedent] = ACTIONS(701),
    },
    [245] = {
        [anon_sym_COLON] = ACTIONS(705),
        [anon_sym_PLUS] = ACTIONS(191),
        [anon_sym_LBRACK] = ACTIONS(193),
        [sym_comment] = ACTIONS(67),
    },
    [246] = {
        [sym__simple_statement] = STATE(116),
        [sym_print_statement] = STATE(113),
        [sym_expression_statement] = STATE(113),
        [sym_return_statement] = STATE(113),
        [sym_delete_statement] = STATE(113),
        [sym__suite] = STATE(247),
        [sym__expression] = STATE(118),
        [sym_binary_operator] = STATE(114),
        [sym_subscript] = STATE(114),
        [anon_sym_print] = ACTIONS(365),
        [anon_sym_return] = ACTIONS(367),
        [anon_sym_del] = ACTIONS(369),
        [sym_pass_statement] = ACTIONS(371),
        [sym_break_statement] = ACTIONS(371),
        [sym_continue_statement] = ACTIONS(371),
        [sym_number] = ACTIONS(373),
        [sym_identifier] = ACTIONS(375),
        [sym_comment] = ACTIONS(67),
        [sym__indent] = ACTIONS(377),
    },
    [247] = {
        [anon_sym_print] = ACTIONS(707),
        [anon_sym_return] = ACTIONS(707),
        [anon_sym_del] = ACTIONS(707),
        [sym_pass_statement] = ACTIONS(707),
        [sym_break_statement] = ACTIONS(707),
        [sym_continue_statement] = ACTIONS(707),
        [anon_sym_if] = ACTIONS(707),
        [anon_sym_elif] = ACTIONS(707),
        [anon_sym_else] = ACTIONS(707),
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
    [248] = {
        [ts_builtin_sym_end] = ACTIONS(405),
        [anon_sym_SEMI] = ACTIONS(405),
        [anon_sym_print] = ACTIONS(403),
        [anon_sym_return] = ACTIONS(403),
        [anon_sym_del] = ACTIONS(403),
        [sym_pass_statement] = ACTIONS(403),
        [sym_break_statement] = ACTIONS(403),
        [sym_continue_statement] = ACTIONS(403),
        [anon_sym_if] = ACTIONS(403),
        [anon_sym_elif] = ACTIONS(403),
        [anon_sym_else] = ACTIONS(403),
        [anon_sym_for] = ACTIONS(403),
        [anon_sym_while] = ACTIONS(403),
        [anon_sym_try] = ACTIONS(403),
        [anon_sym_except] = ACTIONS(403),
        [anon_sym_finally] = ACTIONS(403),
        [anon_sym_with] = ACTIONS(403),
        [anon_sym_def] = ACTIONS(403),
        [anon_sym_class] = ACTIONS(403),
        [anon_sym_AT] = ACTIONS(405),
        [sym_number] = ACTIONS(403),
        [sym_identifier] = ACTIONS(407),
        [sym_comment] = ACTIONS(67),
        [sym__newline] = ACTIONS(405),
    },
    [249] = {
        [aux_sym_print_statement_repeat1] = STATE(251),
        [ts_builtin_sym_end] = ACTIONS(301),
        [anon_sym_SEMI] = ACTIONS(301),
        [anon_sym_print] = ACTIONS(409),
        [anon_sym_COMMA] = ACTIONS(713),
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
        [anon_sym_AT] = ACTIONS(301),
        [anon_sym_PLUS] = ACTIONS(155),
        [anon_sym_LBRACK] = ACTIONS(157),
        [sym_number] = ACTIONS(409),
        [sym_identifier] = ACTIONS(413),
        [sym_comment] = ACTIONS(67),
        [sym__newline] = ACTIONS(301),
    },
    [250] = {
        [sym__expression] = STATE(254),
        [sym_binary_operator] = STATE(14),
        [sym_subscript] = STATE(14),
        [sym_number] = ACTIONS(101),
        [sym_identifier] = ACTIONS(101),
        [sym_comment] = ACTIONS(67),
    },
    [251] = {
        [ts_builtin_sym_end] = ACTIONS(303),
        [anon_sym_SEMI] = ACTIONS(303),
        [anon_sym_print] = ACTIONS(415),
        [anon_sym_COMMA] = ACTIONS(715),
        [anon_sym_return] = ACTIONS(415),
        [anon_sym_del] = ACTIONS(415),
        [sym_pass_statement] = ACTIONS(415),
        [sym_break_statement] = ACTIONS(415),
        [sym_continue_statement] = ACTIONS(415),
        [anon_sym_if] = ACTIONS(415),
        [anon_sym_elif] = ACTIONS(415),
        [anon_sym_else] = ACTIONS(415),
        [anon_sym_for] = ACTIONS(415),
        [anon_sym_while] = ACTIONS(415),
        [anon_sym_try] = ACTIONS(415),
        [anon_sym_except] = ACTIONS(415),
        [anon_sym_finally] = ACTIONS(415),
        [anon_sym_with] = ACTIONS(415),
        [anon_sym_def] = ACTIONS(415),
        [anon_sym_class] = ACTIONS(415),
        [anon_sym_AT] = ACTIONS(303),
        [sym_number] = ACTIONS(415),
        [sym_identifier] = ACTIONS(419),
        [sym_comment] = ACTIONS(67),
        [sym__newline] = ACTIONS(303),
    },
    [252] = {
        [sym__expression] = STATE(253),
        [sym_binary_operator] = STATE(14),
        [sym_subscript] = STATE(14),
        [sym_number] = ACTIONS(101),
        [sym_identifier] = ACTIONS(101),
        [sym_comment] = ACTIONS(67),
    },
    [253] = {
        [ts_builtin_sym_end] = ACTIONS(277),
        [anon_sym_SEMI] = ACTIONS(277),
        [anon_sym_print] = ACTIONS(421),
        [anon_sym_COMMA] = ACTIONS(277),
        [anon_sym_return] = ACTIONS(421),
        [anon_sym_del] = ACTIONS(421),
        [sym_pass_statement] = ACTIONS(421),
        [sym_break_statement] = ACTIONS(421),
        [sym_continue_statement] = ACTIONS(421),
        [anon_sym_if] = ACTIONS(421),
        [anon_sym_elif] = ACTIONS(421),
        [anon_sym_else] = ACTIONS(421),
        [anon_sym_for] = ACTIONS(421),
        [anon_sym_while] = ACTIONS(421),
        [anon_sym_try] = ACTIONS(421),
        [anon_sym_except] = ACTIONS(421),
        [anon_sym_finally] = ACTIONS(421),
        [anon_sym_with] = ACTIONS(421),
        [anon_sym_def] = ACTIONS(421),
        [anon_sym_class] = ACTIONS(421),
        [anon_sym_AT] = ACTIONS(277),
        [anon_sym_PLUS] = ACTIONS(155),
        [anon_sym_LBRACK] = ACTIONS(157),
        [sym_number] = ACTIONS(421),
        [sym_identifier] = ACTIONS(423),
        [sym_comment] = ACTIONS(67),
        [sym__newline] = ACTIONS(277),
    },
    [254] = {
        [ts_builtin_sym_end] = ACTIONS(279),
        [anon_sym_SEMI] = ACTIONS(279),
        [anon_sym_print] = ACTIONS(425),
        [anon_sym_COMMA] = ACTIONS(279),
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
        [anon_sym_AT] = ACTIONS(279),
        [anon_sym_PLUS] = ACTIONS(155),
        [anon_sym_LBRACK] = ACTIONS(157),
        [sym_number] = ACTIONS(425),
        [sym_identifier] = ACTIONS(427),
        [sym_comment] = ACTIONS(67),
        [sym__newline] = ACTIONS(279),
    },
    [255] = {
        [ts_builtin_sym_end] = ACTIONS(431),
        [anon_sym_SEMI] = ACTIONS(431),
        [anon_sym_print] = ACTIONS(429),
        [anon_sym_return] = ACTIONS(429),
        [anon_sym_del] = ACTIONS(429),
        [sym_pass_statement] = ACTIONS(429),
        [sym_break_statement] = ACTIONS(429),
        [sym_continue_statement] = ACTIONS(429),
        [anon_sym_if] = ACTIONS(429),
        [anon_sym_elif] = ACTIONS(429),
        [anon_sym_else] = ACTIONS(429),
        [anon_sym_for] = ACTIONS(429),
        [anon_sym_while] = ACTIONS(429),
        [anon_sym_try] = ACTIONS(429),
        [anon_sym_except] = ACTIONS(429),
        [anon_sym_finally] = ACTIONS(429),
        [anon_sym_with] = ACTIONS(429),
        [anon_sym_def] = ACTIONS(429),
        [anon_sym_class] = ACTIONS(429),
        [anon_sym_AT] = ACTIONS(431),
        [sym_number] = ACTIONS(429),
        [sym_identifier] = ACTIONS(433),
        [sym_comment] = ACTIONS(67),
        [sym__newline] = ACTIONS(431),
    },
    [256] = {
        [aux_sym_print_statement_repeat1] = STATE(257),
        [ts_builtin_sym_end] = ACTIONS(437),
        [anon_sym_SEMI] = ACTIONS(437),
        [anon_sym_print] = ACTIONS(435),
        [anon_sym_COMMA] = ACTIONS(713),
        [anon_sym_return] = ACTIONS(435),
        [anon_sym_del] = ACTIONS(435),
        [sym_pass_statement] = ACTIONS(435),
        [sym_break_statement] = ACTIONS(435),
        [sym_continue_statement] = ACTIONS(435),
        [anon_sym_if] = ACTIONS(435),
        [anon_sym_elif] = ACTIONS(435),
        [anon_sym_else] = ACTIONS(435),
        [anon_sym_for] = ACTIONS(435),
        [anon_sym_while] = ACTIONS(435),
        [anon_sym_try] = ACTIONS(435),
        [anon_sym_except] = ACTIONS(435),
        [anon_sym_finally] = ACTIONS(435),
        [anon_sym_with] = ACTIONS(435),
        [anon_sym_def] = ACTIONS(435),
        [anon_sym_class] = ACTIONS(435),
        [anon_sym_AT] = ACTIONS(437),
        [anon_sym_PLUS] = ACTIONS(155),
        [anon_sym_LBRACK] = ACTIONS(157),
        [sym_number] = ACTIONS(435),
        [sym_identifier] = ACTIONS(439),
        [sym_comment] = ACTIONS(67),
        [sym__newline] = ACTIONS(437),
    },
    [257] = {
        [ts_builtin_sym_end] = ACTIONS(443),
        [anon_sym_SEMI] = ACTIONS(443),
        [anon_sym_print] = ACTIONS(441),
        [anon_sym_COMMA] = ACTIONS(715),
        [anon_sym_return] = ACTIONS(441),
        [anon_sym_del] = ACTIONS(441),
        [sym_pass_statement] = ACTIONS(441),
        [sym_break_statement] = ACTIONS(441),
        [sym_continue_statement] = ACTIONS(441),
        [anon_sym_if] = ACTIONS(441),
        [anon_sym_elif] = ACTIONS(441),
        [anon_sym_else] = ACTIONS(441),
        [anon_sym_for] = ACTIONS(441),
        [anon_sym_while] = ACTIONS(441),
        [anon_sym_try] = ACTIONS(441),
        [anon_sym_except] = ACTIONS(441),
        [anon_sym_finally] = ACTIONS(441),
        [anon_sym_with] = ACTIONS(441),
        [anon_sym_def] = ACTIONS(441),
        [anon_sym_class] = ACTIONS(441),
        [anon_sym_AT] = ACTIONS(443),
        [sym_number] = ACTIONS(441),
        [sym_identifier] = ACTIONS(445),
        [sym_comment] = ACTIONS(67),
        [sym__newline] = ACTIONS(443),
    },
    [258] = {
        [ts_builtin_sym_end] = ACTIONS(449),
        [anon_sym_SEMI] = ACTIONS(449),
        [anon_sym_print] = ACTIONS(447),
        [anon_sym_return] = ACTIONS(447),
        [anon_sym_del] = ACTIONS(447),
        [sym_pass_statement] = ACTIONS(447),
        [sym_break_statement] = ACTIONS(447),
        [sym_continue_statement] = ACTIONS(447),
        [anon_sym_if] = ACTIONS(447),
        [anon_sym_for] = ACTIONS(447),
        [anon_sym_while] = ACTIONS(447),
        [anon_sym_try] = ACTIONS(447),
        [anon_sym_with] = ACTIONS(447),
        [anon_sym_def] = ACTIONS(447),
        [anon_sym_class] = ACTIONS(447),
        [anon_sym_AT] = ACTIONS(449),
        [sym_number] = ACTIONS(447),
        [sym_identifier] = ACTIONS(451),
        [sym_comment] = ACTIONS(67),
        [sym__newline] = ACTIONS(449),
    },
    [259] = {
        [sym_parameters] = STATE(260),
        [anon_sym_LPAREN] = ACTIONS(453),
        [sym_comment] = ACTIONS(67),
    },
    [260] = {
        [anon_sym_COLON] = ACTIONS(717),
        [sym_comment] = ACTIONS(67),
    },
    [261] = {
        [sym__simple_statement] = STATE(84),
        [sym_print_statement] = STATE(5),
        [sym_expression_statement] = STATE(5),
        [sym_return_statement] = STATE(5),
        [sym_delete_statement] = STATE(5),
        [sym__suite] = STATE(262),
        [sym__expression] = STATE(21),
        [sym_binary_operator] = STATE(14),
        [sym_subscript] = STATE(14),
        [anon_sym_print] = ACTIONS(77),
        [anon_sym_return] = ACTIONS(79),
        [anon_sym_del] = ACTIONS(81),
        [sym_pass_statement] = ACTIONS(83),
        [sym_break_statement] = ACTIONS(83),
        [sym_continue_statement] = ACTIONS(83),
        [sym_number] = ACTIONS(101),
        [sym_identifier] = ACTIONS(103),
        [sym_comment] = ACTIONS(67),
        [sym__indent] = ACTIONS(297),
    },
    [262] = {
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
        [sym_number] = ACTIONS(463),
        [sym_identifier] = ACTIONS(467),
        [sym_comment] = ACTIONS(67),
        [sym__newline] = ACTIONS(465),
    },
    [263] = {
        [aux_sym_with_statement_repeat1] = STATE(265),
        [anon_sym_COMMA] = ACTIONS(521),
        [anon_sym_COLON] = ACTIONS(719),
        [sym_comment] = ACTIONS(67),
    },
    [264] = {
        [sym__simple_statement] = STATE(84),
        [sym_print_statement] = STATE(5),
        [sym_expression_statement] = STATE(5),
        [sym_return_statement] = STATE(5),
        [sym_delete_statement] = STATE(5),
        [sym__suite] = STATE(268),
        [sym__expression] = STATE(21),
        [sym_binary_operator] = STATE(14),
        [sym_subscript] = STATE(14),
        [anon_sym_print] = ACTIONS(77),
        [anon_sym_return] = ACTIONS(79),
        [anon_sym_del] = ACTIONS(81),
        [sym_pass_statement] = ACTIONS(83),
        [sym_break_statement] = ACTIONS(83),
        [sym_continue_statement] = ACTIONS(83),
        [sym_number] = ACTIONS(101),
        [sym_identifier] = ACTIONS(103),
        [sym_comment] = ACTIONS(67),
        [sym__indent] = ACTIONS(297),
    },
    [265] = {
        [anon_sym_COMMA] = ACTIONS(531),
        [anon_sym_COLON] = ACTIONS(721),
        [sym_comment] = ACTIONS(67),
    },
    [266] = {
        [sym__simple_statement] = STATE(84),
        [sym_print_statement] = STATE(5),
        [sym_expression_statement] = STATE(5),
        [sym_return_statement] = STATE(5),
        [sym_delete_statement] = STATE(5),
        [sym__suite] = STATE(267),
        [sym__expression] = STATE(21),
        [sym_binary_operator] = STATE(14),
        [sym_subscript] = STATE(14),
        [anon_sym_print] = ACTIONS(77),
        [anon_sym_return] = ACTIONS(79),
        [anon_sym_del] = ACTIONS(81),
        [sym_pass_statement] = ACTIONS(83),
        [sym_break_statement] = ACTIONS(83),
        [sym_continue_statement] = ACTIONS(83),
        [sym_number] = ACTIONS(101),
        [sym_identifier] = ACTIONS(103),
        [sym_comment] = ACTIONS(67),
        [sym__indent] = ACTIONS(297),
    },
    [267] = {
        [ts_builtin_sym_end] = ACTIONS(537),
        [anon_sym_SEMI] = ACTIONS(537),
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
        [anon_sym_AT] = ACTIONS(537),
        [sym_number] = ACTIONS(535),
        [sym_identifier] = ACTIONS(539),
        [sym_comment] = ACTIONS(67),
        [sym__newline] = ACTIONS(537),
    },
    [268] = {
        [ts_builtin_sym_end] = ACTIONS(545),
        [anon_sym_SEMI] = ACTIONS(545),
        [anon_sym_print] = ACTIONS(543),
        [anon_sym_return] = ACTIONS(543),
        [anon_sym_del] = ACTIONS(543),
        [sym_pass_statement] = ACTIONS(543),
        [sym_break_statement] = ACTIONS(543),
        [sym_continue_statement] = ACTIONS(543),
        [anon_sym_if] = ACTIONS(543),
        [anon_sym_for] = ACTIONS(543),
        [anon_sym_while] = ACTIONS(543),
        [anon_sym_try] = ACTIONS(543),
        [anon_sym_with] = ACTIONS(543),
        [anon_sym_def] = ACTIONS(543),
        [anon_sym_class] = ACTIONS(543),
        [anon_sym_AT] = ACTIONS(545),
        [sym_number] = ACTIONS(543),
        [sym_identifier] = ACTIONS(547),
        [sym_comment] = ACTIONS(67),
        [sym__newline] = ACTIONS(545),
    },
    [269] = {
        [sym__simple_statement] = STATE(195),
        [sym_print_statement] = STATE(193),
        [sym_expression_statement] = STATE(193),
        [sym_return_statement] = STATE(193),
        [sym_delete_statement] = STATE(193),
        [sym__suite] = STATE(270),
        [sym__expression] = STATE(197),
        [sym_binary_operator] = STATE(31),
        [sym_subscript] = STATE(31),
        [anon_sym_print] = ACTIONS(551),
        [anon_sym_return] = ACTIONS(553),
        [anon_sym_del] = ACTIONS(555),
        [sym_pass_statement] = ACTIONS(557),
        [sym_break_statement] = ACTIONS(557),
        [sym_continue_statement] = ACTIONS(557),
        [sym_number] = ACTIONS(111),
        [sym_identifier] = ACTIONS(559),
        [sym_comment] = ACTIONS(67),
        [sym__indent] = ACTIONS(561),
    },
    [270] = {
        [sym_except_clause] = STATE(273),
        [sym_finally_clause] = STATE(274),
        [aux_sym_try_statement_repeat1] = STATE(275),
        [anon_sym_except] = ACTIONS(723),
        [anon_sym_finally] = ACTIONS(725),
        [sym_comment] = ACTIONS(67),
    },
    [271] = {
        [sym__expression] = STATE(285),
        [sym_binary_operator] = STATE(31),
        [sym_subscript] = STATE(31),
        [sym_number] = ACTIONS(111),
        [sym_identifier] = ACTIONS(111),
        [sym_comment] = ACTIONS(67),
    },
    [272] = {
        [anon_sym_COLON] = ACTIONS(727),
        [sym_comment] = ACTIONS(67),
    },
    [273] = {
        [ts_builtin_sym_end] = ACTIONS(573),
        [anon_sym_SEMI] = ACTIONS(573),
        [anon_sym_print] = ACTIONS(571),
        [anon_sym_return] = ACTIONS(571),
        [anon_sym_del] = ACTIONS(571),
        [sym_pass_statement] = ACTIONS(571),
        [sym_break_statement] = ACTIONS(571),
        [sym_continue_statement] = ACTIONS(571),
        [anon_sym_if] = ACTIONS(571),
        [anon_sym_else] = ACTIONS(571),
        [anon_sym_for] = ACTIONS(571),
        [anon_sym_while] = ACTIONS(571),
        [anon_sym_try] = ACTIONS(571),
        [anon_sym_except] = ACTIONS(571),
        [anon_sym_finally] = ACTIONS(571),
        [anon_sym_with] = ACTIONS(571),
        [anon_sym_def] = ACTIONS(571),
        [anon_sym_class] = ACTIONS(571),
        [anon_sym_AT] = ACTIONS(573),
        [sym_number] = ACTIONS(571),
        [sym_identifier] = ACTIONS(575),
        [sym_comment] = ACTIONS(67),
        [sym__newline] = ACTIONS(573),
    },
    [274] = {
        [ts_builtin_sym_end] = ACTIONS(579),
        [anon_sym_SEMI] = ACTIONS(579),
        [anon_sym_print] = ACTIONS(577),
        [anon_sym_return] = ACTIONS(577),
        [anon_sym_del] = ACTIONS(577),
        [sym_pass_statement] = ACTIONS(577),
        [sym_break_statement] = ACTIONS(577),
        [sym_continue_statement] = ACTIONS(577),
        [anon_sym_if] = ACTIONS(577),
        [anon_sym_for] = ACTIONS(577),
        [anon_sym_while] = ACTIONS(577),
        [anon_sym_try] = ACTIONS(577),
        [anon_sym_with] = ACTIONS(577),
        [anon_sym_def] = ACTIONS(577),
        [anon_sym_class] = ACTIONS(577),
        [anon_sym_AT] = ACTIONS(579),
        [sym_number] = ACTIONS(577),
        [sym_identifier] = ACTIONS(581),
        [sym_comment] = ACTIONS(67),
        [sym__newline] = ACTIONS(579),
    },
    [275] = {
        [sym_else_clause] = STATE(277),
        [sym_except_clause] = STATE(278),
        [sym_finally_clause] = STATE(279),
        [ts_builtin_sym_end] = ACTIONS(579),
        [anon_sym_SEMI] = ACTIONS(579),
        [anon_sym_print] = ACTIONS(577),
        [anon_sym_return] = ACTIONS(577),
        [anon_sym_del] = ACTIONS(577),
        [sym_pass_statement] = ACTIONS(577),
        [sym_break_statement] = ACTIONS(577),
        [sym_continue_statement] = ACTIONS(577),
        [anon_sym_if] = ACTIONS(577),
        [anon_sym_else] = ACTIONS(729),
        [anon_sym_for] = ACTIONS(577),
        [anon_sym_while] = ACTIONS(577),
        [anon_sym_try] = ACTIONS(577),
        [anon_sym_except] = ACTIONS(731),
        [anon_sym_finally] = ACTIONS(733),
        [anon_sym_with] = ACTIONS(577),
        [anon_sym_def] = ACTIONS(577),
        [anon_sym_class] = ACTIONS(577),
        [anon_sym_AT] = ACTIONS(579),
        [sym_number] = ACTIONS(577),
        [sym_identifier] = ACTIONS(581),
        [sym_comment] = ACTIONS(67),
        [sym__newline] = ACTIONS(579),
    },
    [276] = {
        [anon_sym_COLON] = ACTIONS(735),
        [sym_comment] = ACTIONS(67),
    },
    [277] = {
        [sym_finally_clause] = STATE(280),
        [ts_builtin_sym_end] = ACTIONS(593),
        [anon_sym_SEMI] = ACTIONS(593),
        [anon_sym_print] = ACTIONS(591),
        [anon_sym_return] = ACTIONS(591),
        [anon_sym_del] = ACTIONS(591),
        [sym_pass_statement] = ACTIONS(591),
        [sym_break_statement] = ACTIONS(591),
        [sym_continue_statement] = ACTIONS(591),
        [anon_sym_if] = ACTIONS(591),
        [anon_sym_for] = ACTIONS(591),
        [anon_sym_while] = ACTIONS(591),
        [anon_sym_try] = ACTIONS(591),
        [anon_sym_finally] = ACTIONS(733),
        [anon_sym_with] = ACTIONS(591),
        [anon_sym_def] = ACTIONS(591),
        [anon_sym_class] = ACTIONS(591),
        [anon_sym_AT] = ACTIONS(593),
        [sym_number] = ACTIONS(591),
        [sym_identifier] = ACTIONS(595),
        [sym_comment] = ACTIONS(67),
        [sym__newline] = ACTIONS(593),
    },
    [278] = {
        [ts_builtin_sym_end] = ACTIONS(599),
        [anon_sym_SEMI] = ACTIONS(599),
        [anon_sym_print] = ACTIONS(597),
        [anon_sym_return] = ACTIONS(597),
        [anon_sym_del] = ACTIONS(597),
        [sym_pass_statement] = ACTIONS(597),
        [sym_break_statement] = ACTIONS(597),
        [sym_continue_statement] = ACTIONS(597),
        [anon_sym_if] = ACTIONS(597),
        [anon_sym_else] = ACTIONS(597),
        [anon_sym_for] = ACTIONS(597),
        [anon_sym_while] = ACTIONS(597),
        [anon_sym_try] = ACTIONS(597),
        [anon_sym_except] = ACTIONS(597),
        [anon_sym_finally] = ACTIONS(597),
        [anon_sym_with] = ACTIONS(597),
        [anon_sym_def] = ACTIONS(597),
        [anon_sym_class] = ACTIONS(597),
        [anon_sym_AT] = ACTIONS(599),
        [sym_number] = ACTIONS(597),
        [sym_identifier] = ACTIONS(601),
        [sym_comment] = ACTIONS(67),
        [sym__newline] = ACTIONS(599),
    },
    [279] = {
        [ts_builtin_sym_end] = ACTIONS(593),
        [anon_sym_SEMI] = ACTIONS(593),
        [anon_sym_print] = ACTIONS(591),
        [anon_sym_return] = ACTIONS(591),
        [anon_sym_del] = ACTIONS(591),
        [sym_pass_statement] = ACTIONS(591),
        [sym_break_statement] = ACTIONS(591),
        [sym_continue_statement] = ACTIONS(591),
        [anon_sym_if] = ACTIONS(591),
        [anon_sym_for] = ACTIONS(591),
        [anon_sym_while] = ACTIONS(591),
        [anon_sym_try] = ACTIONS(591),
        [anon_sym_with] = ACTIONS(591),
        [anon_sym_def] = ACTIONS(591),
        [anon_sym_class] = ACTIONS(591),
        [anon_sym_AT] = ACTIONS(593),
        [sym_number] = ACTIONS(591),
        [sym_identifier] = ACTIONS(595),
        [sym_comment] = ACTIONS(67),
        [sym__newline] = ACTIONS(593),
    },
    [280] = {
        [ts_builtin_sym_end] = ACTIONS(605),
        [anon_sym_SEMI] = ACTIONS(605),
        [anon_sym_print] = ACTIONS(603),
        [anon_sym_return] = ACTIONS(603),
        [anon_sym_del] = ACTIONS(603),
        [sym_pass_statement] = ACTIONS(603),
        [sym_break_statement] = ACTIONS(603),
        [sym_continue_statement] = ACTIONS(603),
        [anon_sym_if] = ACTIONS(603),
        [anon_sym_for] = ACTIONS(603),
        [anon_sym_while] = ACTIONS(603),
        [anon_sym_try] = ACTIONS(603),
        [anon_sym_with] = ACTIONS(603),
        [anon_sym_def] = ACTIONS(603),
        [anon_sym_class] = ACTIONS(603),
        [anon_sym_AT] = ACTIONS(605),
        [sym_number] = ACTIONS(603),
        [sym_identifier] = ACTIONS(607),
        [sym_comment] = ACTIONS(67),
        [sym__newline] = ACTIONS(605),
    },
    [281] = {
        [sym__simple_statement] = STATE(84),
        [sym_print_statement] = STATE(5),
        [sym_expression_statement] = STATE(5),
        [sym_return_statement] = STATE(5),
        [sym_delete_statement] = STATE(5),
        [sym__suite] = STATE(282),
        [sym__expression] = STATE(21),
        [sym_binary_operator] = STATE(14),
        [sym_subscript] = STATE(14),
        [anon_sym_print] = ACTIONS(77),
        [anon_sym_return] = ACTIONS(79),
        [anon_sym_del] = ACTIONS(81),
        [sym_pass_statement] = ACTIONS(83),
        [sym_break_statement] = ACTIONS(83),
        [sym_continue_statement] = ACTIONS(83),
        [sym_number] = ACTIONS(101),
        [sym_identifier] = ACTIONS(103),
        [sym_comment] = ACTIONS(67),
        [sym__indent] = ACTIONS(297),
    },
    [282] = {
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
        [anon_sym_finally] = ACTIONS(609),
        [anon_sym_with] = ACTIONS(609),
        [anon_sym_def] = ACTIONS(609),
        [anon_sym_class] = ACTIONS(609),
        [anon_sym_AT] = ACTIONS(611),
        [sym_number] = ACTIONS(609),
        [sym_identifier] = ACTIONS(613),
        [sym_comment] = ACTIONS(67),
        [sym__newline] = ACTIONS(611),
    },
    [283] = {
        [sym__simple_statement] = STATE(84),
        [sym_print_statement] = STATE(5),
        [sym_expression_statement] = STATE(5),
        [sym_return_statement] = STATE(5),
        [sym_delete_statement] = STATE(5),
        [sym__suite] = STATE(284),
        [sym__expression] = STATE(21),
        [sym_binary_operator] = STATE(14),
        [sym_subscript] = STATE(14),
        [anon_sym_print] = ACTIONS(77),
        [anon_sym_return] = ACTIONS(79),
        [anon_sym_del] = ACTIONS(81),
        [sym_pass_statement] = ACTIONS(83),
        [sym_break_statement] = ACTIONS(83),
        [sym_continue_statement] = ACTIONS(83),
        [sym_number] = ACTIONS(101),
        [sym_identifier] = ACTIONS(103),
        [sym_comment] = ACTIONS(67),
        [sym__indent] = ACTIONS(297),
    },
    [284] = {
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
        [anon_sym_with] = ACTIONS(615),
        [anon_sym_def] = ACTIONS(615),
        [anon_sym_class] = ACTIONS(615),
        [anon_sym_AT] = ACTIONS(617),
        [sym_number] = ACTIONS(615),
        [sym_identifier] = ACTIONS(619),
        [sym_comment] = ACTIONS(67),
        [sym__newline] = ACTIONS(617),
    },
    [285] = {
        [anon_sym_COMMA] = ACTIONS(737),
        [anon_sym_COLON] = ACTIONS(739),
        [anon_sym_as] = ACTIONS(737),
        [anon_sym_PLUS] = ACTIONS(191),
        [anon_sym_LBRACK] = ACTIONS(193),
        [sym_comment] = ACTIONS(67),
    },
    [286] = {
        [sym__expression] = STATE(288),
        [sym_binary_operator] = STATE(31),
        [sym_subscript] = STATE(31),
        [sym_number] = ACTIONS(111),
        [sym_identifier] = ACTIONS(111),
        [sym_comment] = ACTIONS(67),
    },
    [287] = {
        [sym__simple_statement] = STATE(84),
        [sym_print_statement] = STATE(5),
        [sym_expression_statement] = STATE(5),
        [sym_return_statement] = STATE(5),
        [sym_delete_statement] = STATE(5),
        [sym__suite] = STATE(291),
        [sym__expression] = STATE(21),
        [sym_binary_operator] = STATE(14),
        [sym_subscript] = STATE(14),
        [anon_sym_print] = ACTIONS(77),
        [anon_sym_return] = ACTIONS(79),
        [anon_sym_del] = ACTIONS(81),
        [sym_pass_statement] = ACTIONS(83),
        [sym_break_statement] = ACTIONS(83),
        [sym_continue_statement] = ACTIONS(83),
        [sym_number] = ACTIONS(101),
        [sym_identifier] = ACTIONS(103),
        [sym_comment] = ACTIONS(67),
        [sym__indent] = ACTIONS(297),
    },
    [288] = {
        [anon_sym_COLON] = ACTIONS(741),
        [anon_sym_PLUS] = ACTIONS(191),
        [anon_sym_LBRACK] = ACTIONS(193),
        [sym_comment] = ACTIONS(67),
    },
    [289] = {
        [sym__simple_statement] = STATE(84),
        [sym_print_statement] = STATE(5),
        [sym_expression_statement] = STATE(5),
        [sym_return_statement] = STATE(5),
        [sym_delete_statement] = STATE(5),
        [sym__suite] = STATE(290),
        [sym__expression] = STATE(21),
        [sym_binary_operator] = STATE(14),
        [sym_subscript] = STATE(14),
        [anon_sym_print] = ACTIONS(77),
        [anon_sym_return] = ACTIONS(79),
        [anon_sym_del] = ACTIONS(81),
        [sym_pass_statement] = ACTIONS(83),
        [sym_break_statement] = ACTIONS(83),
        [sym_continue_statement] = ACTIONS(83),
        [sym_number] = ACTIONS(101),
        [sym_identifier] = ACTIONS(103),
        [sym_comment] = ACTIONS(67),
        [sym__indent] = ACTIONS(297),
    },
    [290] = {
        [ts_builtin_sym_end] = ACTIONS(629),
        [anon_sym_SEMI] = ACTIONS(629),
        [anon_sym_print] = ACTIONS(627),
        [anon_sym_return] = ACTIONS(627),
        [anon_sym_del] = ACTIONS(627),
        [sym_pass_statement] = ACTIONS(627),
        [sym_break_statement] = ACTIONS(627),
        [sym_continue_statement] = ACTIONS(627),
        [anon_sym_if] = ACTIONS(627),
        [anon_sym_else] = ACTIONS(627),
        [anon_sym_for] = ACTIONS(627),
        [anon_sym_while] = ACTIONS(627),
        [anon_sym_try] = ACTIONS(627),
        [anon_sym_except] = ACTIONS(627),
        [anon_sym_finally] = ACTIONS(627),
        [anon_sym_with] = ACTIONS(627),
        [anon_sym_def] = ACTIONS(627),
        [anon_sym_class] = ACTIONS(627),
        [anon_sym_AT] = ACTIONS(629),
        [sym_number] = ACTIONS(627),
        [sym_identifier] = ACTIONS(631),
        [sym_comment] = ACTIONS(67),
        [sym__newline] = ACTIONS(629),
    },
    [291] = {
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
        [sym_number] = ACTIONS(633),
        [sym_identifier] = ACTIONS(637),
        [sym_comment] = ACTIONS(67),
        [sym__newline] = ACTIONS(635),
    },
    [292] = {
        [anon_sym_COLON] = ACTIONS(743),
        [anon_sym_PLUS] = ACTIONS(191),
        [anon_sym_LBRACK] = ACTIONS(193),
        [sym_comment] = ACTIONS(67),
    },
    [293] = {
        [sym__simple_statement] = STATE(84),
        [sym_print_statement] = STATE(5),
        [sym_expression_statement] = STATE(5),
        [sym_return_statement] = STATE(5),
        [sym_delete_statement] = STATE(5),
        [sym__suite] = STATE(294),
        [sym__expression] = STATE(21),
        [sym_binary_operator] = STATE(14),
        [sym_subscript] = STATE(14),
        [anon_sym_print] = ACTIONS(77),
        [anon_sym_return] = ACTIONS(79),
        [anon_sym_del] = ACTIONS(81),
        [sym_pass_statement] = ACTIONS(83),
        [sym_break_statement] = ACTIONS(83),
        [sym_continue_statement] = ACTIONS(83),
        [sym_number] = ACTIONS(101),
        [sym_identifier] = ACTIONS(103),
        [sym_comment] = ACTIONS(67),
        [sym__indent] = ACTIONS(297),
    },
    [294] = {
        [sym_else_clause] = STATE(295),
        [ts_builtin_sym_end] = ACTIONS(645),
        [anon_sym_SEMI] = ACTIONS(645),
        [anon_sym_print] = ACTIONS(643),
        [anon_sym_return] = ACTIONS(643),
        [anon_sym_del] = ACTIONS(643),
        [sym_pass_statement] = ACTIONS(643),
        [sym_break_statement] = ACTIONS(643),
        [sym_continue_statement] = ACTIONS(643),
        [anon_sym_if] = ACTIONS(643),
        [anon_sym_else] = ACTIONS(729),
        [anon_sym_for] = ACTIONS(643),
        [anon_sym_while] = ACTIONS(643),
        [anon_sym_try] = ACTIONS(643),
        [anon_sym_with] = ACTIONS(643),
        [anon_sym_def] = ACTIONS(643),
        [anon_sym_class] = ACTIONS(643),
        [anon_sym_AT] = ACTIONS(645),
        [sym_number] = ACTIONS(643),
        [sym_identifier] = ACTIONS(647),
        [sym_comment] = ACTIONS(67),
        [sym__newline] = ACTIONS(645),
    },
    [295] = {
        [ts_builtin_sym_end] = ACTIONS(651),
        [anon_sym_SEMI] = ACTIONS(651),
        [anon_sym_print] = ACTIONS(649),
        [anon_sym_return] = ACTIONS(649),
        [anon_sym_del] = ACTIONS(649),
        [sym_pass_statement] = ACTIONS(649),
        [sym_break_statement] = ACTIONS(649),
        [sym_continue_statement] = ACTIONS(649),
        [anon_sym_if] = ACTIONS(649),
        [anon_sym_for] = ACTIONS(649),
        [anon_sym_while] = ACTIONS(649),
        [anon_sym_try] = ACTIONS(649),
        [anon_sym_with] = ACTIONS(649),
        [anon_sym_def] = ACTIONS(649),
        [anon_sym_class] = ACTIONS(649),
        [anon_sym_AT] = ACTIONS(651),
        [sym_number] = ACTIONS(649),
        [sym_identifier] = ACTIONS(653),
        [sym_comment] = ACTIONS(67),
        [sym__newline] = ACTIONS(651),
    },
    [296] = {
        [anon_sym_in] = ACTIONS(745),
        [sym_comment] = ACTIONS(67),
    },
    [297] = {
        [sym_expression_list] = STATE(298),
        [sym__expression] = STATE(79),
        [sym_binary_operator] = STATE(31),
        [sym_subscript] = STATE(31),
        [sym_number] = ACTIONS(111),
        [sym_identifier] = ACTIONS(111),
        [sym_comment] = ACTIONS(67),
    },
    [298] = {
        [anon_sym_COLON] = ACTIONS(747),
        [sym_comment] = ACTIONS(67),
    },
    [299] = {
        [sym__simple_statement] = STATE(84),
        [sym_print_statement] = STATE(5),
        [sym_expression_statement] = STATE(5),
        [sym_return_statement] = STATE(5),
        [sym_delete_statement] = STATE(5),
        [sym__suite] = STATE(300),
        [sym__expression] = STATE(21),
        [sym_binary_operator] = STATE(14),
        [sym_subscript] = STATE(14),
        [anon_sym_print] = ACTIONS(77),
        [anon_sym_return] = ACTIONS(79),
        [anon_sym_del] = ACTIONS(81),
        [sym_pass_statement] = ACTIONS(83),
        [sym_break_statement] = ACTIONS(83),
        [sym_continue_statement] = ACTIONS(83),
        [sym_number] = ACTIONS(101),
        [sym_identifier] = ACTIONS(103),
        [sym_comment] = ACTIONS(67),
        [sym__indent] = ACTIONS(297),
    },
    [300] = {
        [sym_else_clause] = STATE(301),
        [ts_builtin_sym_end] = ACTIONS(661),
        [anon_sym_SEMI] = ACTIONS(661),
        [anon_sym_print] = ACTIONS(659),
        [anon_sym_return] = ACTIONS(659),
        [anon_sym_del] = ACTIONS(659),
        [sym_pass_statement] = ACTIONS(659),
        [sym_break_statement] = ACTIONS(659),
        [sym_continue_statement] = ACTIONS(659),
        [anon_sym_if] = ACTIONS(659),
        [anon_sym_else] = ACTIONS(729),
        [anon_sym_for] = ACTIONS(659),
        [anon_sym_while] = ACTIONS(659),
        [anon_sym_try] = ACTIONS(659),
        [anon_sym_with] = ACTIONS(659),
        [anon_sym_def] = ACTIONS(659),
        [anon_sym_class] = ACTIONS(659),
        [anon_sym_AT] = ACTIONS(661),
        [sym_number] = ACTIONS(659),
        [sym_identifier] = ACTIONS(663),
        [sym_comment] = ACTIONS(67),
        [sym__newline] = ACTIONS(661),
    },
    [301] = {
        [ts_builtin_sym_end] = ACTIONS(667),
        [anon_sym_SEMI] = ACTIONS(667),
        [anon_sym_print] = ACTIONS(665),
        [anon_sym_return] = ACTIONS(665),
        [anon_sym_del] = ACTIONS(665),
        [sym_pass_statement] = ACTIONS(665),
        [sym_break_statement] = ACTIONS(665),
        [sym_continue_statement] = ACTIONS(665),
        [anon_sym_if] = ACTIONS(665),
        [anon_sym_for] = ACTIONS(665),
        [anon_sym_while] = ACTIONS(665),
        [anon_sym_try] = ACTIONS(665),
        [anon_sym_with] = ACTIONS(665),
        [anon_sym_def] = ACTIONS(665),
        [anon_sym_class] = ACTIONS(665),
        [anon_sym_AT] = ACTIONS(667),
        [sym_number] = ACTIONS(665),
        [sym_identifier] = ACTIONS(669),
        [sym_comment] = ACTIONS(67),
        [sym__newline] = ACTIONS(667),
    },
    [302] = {
        [anon_sym_COLON] = ACTIONS(749),
        [anon_sym_PLUS] = ACTIONS(191),
        [anon_sym_LBRACK] = ACTIONS(193),
        [sym_comment] = ACTIONS(67),
    },
    [303] = {
        [sym__simple_statement] = STATE(84),
        [sym_print_statement] = STATE(5),
        [sym_expression_statement] = STATE(5),
        [sym_return_statement] = STATE(5),
        [sym_delete_statement] = STATE(5),
        [sym__suite] = STATE(304),
        [sym__expression] = STATE(21),
        [sym_binary_operator] = STATE(14),
        [sym_subscript] = STATE(14),
        [anon_sym_print] = ACTIONS(77),
        [anon_sym_return] = ACTIONS(79),
        [anon_sym_del] = ACTIONS(81),
        [sym_pass_statement] = ACTIONS(83),
        [sym_break_statement] = ACTIONS(83),
        [sym_continue_statement] = ACTIONS(83),
        [sym_number] = ACTIONS(101),
        [sym_identifier] = ACTIONS(103),
        [sym_comment] = ACTIONS(67),
        [sym__indent] = ACTIONS(297),
    },
    [304] = {
        [sym_elif_clause] = STATE(306),
        [sym_else_clause] = STATE(307),
        [aux_sym_if_statement_repeat1] = STATE(308),
        [ts_builtin_sym_end] = ACTIONS(677),
        [anon_sym_SEMI] = ACTIONS(677),
        [anon_sym_print] = ACTIONS(673),
        [anon_sym_return] = ACTIONS(673),
        [anon_sym_del] = ACTIONS(673),
        [sym_pass_statement] = ACTIONS(673),
        [sym_break_statement] = ACTIONS(673),
        [sym_continue_statement] = ACTIONS(673),
        [anon_sym_if] = ACTIONS(673),
        [anon_sym_elif] = ACTIONS(751),
        [anon_sym_else] = ACTIONS(729),
        [anon_sym_for] = ACTIONS(673),
        [anon_sym_while] = ACTIONS(673),
        [anon_sym_try] = ACTIONS(673),
        [anon_sym_with] = ACTIONS(673),
        [anon_sym_def] = ACTIONS(673),
        [anon_sym_class] = ACTIONS(673),
        [anon_sym_AT] = ACTIONS(677),
        [sym_number] = ACTIONS(673),
        [sym_identifier] = ACTIONS(679),
        [sym_comment] = ACTIONS(67),
        [sym__newline] = ACTIONS(677),
    },
    [305] = {
        [sym__expression] = STATE(311),
        [sym_binary_operator] = STATE(31),
        [sym_subscript] = STATE(31),
        [sym_number] = ACTIONS(111),
        [sym_identifier] = ACTIONS(111),
        [sym_comment] = ACTIONS(67),
    },
    [306] = {
        [ts_builtin_sym_end] = ACTIONS(683),
        [anon_sym_SEMI] = ACTIONS(683),
        [anon_sym_print] = ACTIONS(681),
        [anon_sym_return] = ACTIONS(681),
        [anon_sym_del] = ACTIONS(681),
        [sym_pass_statement] = ACTIONS(681),
        [sym_break_statement] = ACTIONS(681),
        [sym_continue_statement] = ACTIONS(681),
        [anon_sym_if] = ACTIONS(681),
        [anon_sym_elif] = ACTIONS(681),
        [anon_sym_else] = ACTIONS(681),
        [anon_sym_for] = ACTIONS(681),
        [anon_sym_while] = ACTIONS(681),
        [anon_sym_try] = ACTIONS(681),
        [anon_sym_with] = ACTIONS(681),
        [anon_sym_def] = ACTIONS(681),
        [anon_sym_class] = ACTIONS(681),
        [anon_sym_AT] = ACTIONS(683),
        [sym_number] = ACTIONS(681),
        [sym_identifier] = ACTIONS(685),
        [sym_comment] = ACTIONS(67),
        [sym__newline] = ACTIONS(683),
    },
    [307] = {
        [ts_builtin_sym_end] = ACTIONS(689),
        [anon_sym_SEMI] = ACTIONS(689),
        [anon_sym_print] = ACTIONS(687),
        [anon_sym_return] = ACTIONS(687),
        [anon_sym_del] = ACTIONS(687),
        [sym_pass_statement] = ACTIONS(687),
        [sym_break_statement] = ACTIONS(687),
        [sym_continue_statement] = ACTIONS(687),
        [anon_sym_if] = ACTIONS(687),
        [anon_sym_for] = ACTIONS(687),
        [anon_sym_while] = ACTIONS(687),
        [anon_sym_try] = ACTIONS(687),
        [anon_sym_with] = ACTIONS(687),
        [anon_sym_def] = ACTIONS(687),
        [anon_sym_class] = ACTIONS(687),
        [anon_sym_AT] = ACTIONS(689),
        [sym_number] = ACTIONS(687),
        [sym_identifier] = ACTIONS(691),
        [sym_comment] = ACTIONS(67),
        [sym__newline] = ACTIONS(689),
    },
    [308] = {
        [sym_elif_clause] = STATE(309),
        [sym_else_clause] = STATE(310),
        [ts_builtin_sym_end] = ACTIONS(689),
        [anon_sym_SEMI] = ACTIONS(689),
        [anon_sym_print] = ACTIONS(687),
        [anon_sym_return] = ACTIONS(687),
        [anon_sym_del] = ACTIONS(687),
        [sym_pass_statement] = ACTIONS(687),
        [sym_break_statement] = ACTIONS(687),
        [sym_continue_statement] = ACTIONS(687),
        [anon_sym_if] = ACTIONS(687),
        [anon_sym_elif] = ACTIONS(751),
        [anon_sym_else] = ACTIONS(729),
        [anon_sym_for] = ACTIONS(687),
        [anon_sym_while] = ACTIONS(687),
        [anon_sym_try] = ACTIONS(687),
        [anon_sym_with] = ACTIONS(687),
        [anon_sym_def] = ACTIONS(687),
        [anon_sym_class] = ACTIONS(687),
        [anon_sym_AT] = ACTIONS(689),
        [sym_number] = ACTIONS(687),
        [sym_identifier] = ACTIONS(691),
        [sym_comment] = ACTIONS(67),
        [sym__newline] = ACTIONS(689),
    },
    [309] = {
        [ts_builtin_sym_end] = ACTIONS(695),
        [anon_sym_SEMI] = ACTIONS(695),
        [anon_sym_print] = ACTIONS(693),
        [anon_sym_return] = ACTIONS(693),
        [anon_sym_del] = ACTIONS(693),
        [sym_pass_statement] = ACTIONS(693),
        [sym_break_statement] = ACTIONS(693),
        [sym_continue_statement] = ACTIONS(693),
        [anon_sym_if] = ACTIONS(693),
        [anon_sym_elif] = ACTIONS(693),
        [anon_sym_else] = ACTIONS(693),
        [anon_sym_for] = ACTIONS(693),
        [anon_sym_while] = ACTIONS(693),
        [anon_sym_try] = ACTIONS(693),
        [anon_sym_with] = ACTIONS(693),
        [anon_sym_def] = ACTIONS(693),
        [anon_sym_class] = ACTIONS(693),
        [anon_sym_AT] = ACTIONS(695),
        [sym_number] = ACTIONS(693),
        [sym_identifier] = ACTIONS(697),
        [sym_comment] = ACTIONS(67),
        [sym__newline] = ACTIONS(695),
    },
    [310] = {
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
        [sym_number] = ACTIONS(699),
        [sym_identifier] = ACTIONS(703),
        [sym_comment] = ACTIONS(67),
        [sym__newline] = ACTIONS(701),
    },
    [311] = {
        [anon_sym_COLON] = ACTIONS(753),
        [anon_sym_PLUS] = ACTIONS(191),
        [anon_sym_LBRACK] = ACTIONS(193),
        [sym_comment] = ACTIONS(67),
    },
    [312] = {
        [sym__simple_statement] = STATE(84),
        [sym_print_statement] = STATE(5),
        [sym_expression_statement] = STATE(5),
        [sym_return_statement] = STATE(5),
        [sym_delete_statement] = STATE(5),
        [sym__suite] = STATE(313),
        [sym__expression] = STATE(21),
        [sym_binary_operator] = STATE(14),
        [sym_subscript] = STATE(14),
        [anon_sym_print] = ACTIONS(77),
        [anon_sym_return] = ACTIONS(79),
        [anon_sym_del] = ACTIONS(81),
        [sym_pass_statement] = ACTIONS(83),
        [sym_break_statement] = ACTIONS(83),
        [sym_continue_statement] = ACTIONS(83),
        [sym_number] = ACTIONS(101),
        [sym_identifier] = ACTIONS(103),
        [sym_comment] = ACTIONS(67),
        [sym__indent] = ACTIONS(297),
    },
    [313] = {
        [ts_builtin_sym_end] = ACTIONS(709),
        [anon_sym_SEMI] = ACTIONS(709),
        [anon_sym_print] = ACTIONS(707),
        [anon_sym_return] = ACTIONS(707),
        [anon_sym_del] = ACTIONS(707),
        [sym_pass_statement] = ACTIONS(707),
        [sym_break_statement] = ACTIONS(707),
        [sym_continue_statement] = ACTIONS(707),
        [anon_sym_if] = ACTIONS(707),
        [anon_sym_elif] = ACTIONS(707),
        [anon_sym_else] = ACTIONS(707),
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
    [314] = {
        [sym__expression] = STATE(566),
        [sym_binary_operator] = STATE(341),
        [sym_subscript] = STATE(341),
        [sym_number] = ACTIONS(755),
        [sym_identifier] = ACTIONS(755),
        [sym_comment] = ACTIONS(67),
    },
    [315] = {
        [sym_with_item] = STATE(564),
        [sym_dictionary_splat_parameter] = STATE(476),
        [sym__expression] = STATE(565),
        [sym_binary_operator] = STATE(341),
        [sym_subscript] = STATE(341),
        [anon_sym_RPAREN] = ACTIONS(757),
        [anon_sym_STAR] = ACTIONS(759),
        [anon_sym_DOT_DOT_DOT] = ACTIONS(763),
        [anon_sym_RBRACK] = ACTIONS(765),
        [sym_number] = ACTIONS(755),
        [sym_identifier] = ACTIONS(767),
        [sym_comment] = ACTIONS(67),
    },
    [316] = {
        [sym_expression_list] = STATE(400),
        [sym__expression] = STATE(554),
        [sym_binary_operator] = STATE(341),
        [sym_subscript] = STATE(341),
        [sym_number] = ACTIONS(755),
        [sym_identifier] = ACTIONS(755),
        [sym_comment] = ACTIONS(67),
    },
    [317] = {
        [sym_expression_list] = STATE(391),
        [sym__expression] = STATE(554),
        [sym_binary_operator] = STATE(341),
        [sym_subscript] = STATE(341),
        [sym_number] = ACTIONS(755),
        [sym_identifier] = ACTIONS(755),
        [sym_comment] = ACTIONS(67),
    },
    [318] = {
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
    [319] = {
        [sym__expression] = STATE(550),
        [sym_binary_operator] = STATE(31),
        [sym_subscript] = STATE(31),
        [sym_number] = ACTIONS(111),
        [sym_identifier] = ACTIONS(111),
        [sym_comment] = ACTIONS(67),
    },
    [320] = {
        [sym__simple_statement] = STATE(379),
        [sym_print_statement] = STATE(318),
        [sym_expression_statement] = STATE(318),
        [sym_return_statement] = STATE(318),
        [sym_delete_statement] = STATE(318),
        [sym__suite] = STATE(361),
        [sym__expression] = STATE(422),
        [sym_binary_operator] = STATE(341),
        [sym_subscript] = STATE(341),
        [anon_sym_print] = ACTIONS(771),
        [anon_sym_return] = ACTIONS(773),
        [anon_sym_del] = ACTIONS(775),
        [sym_pass_statement] = ACTIONS(777),
        [sym_break_statement] = ACTIONS(777),
        [sym_continue_statement] = ACTIONS(777),
        [sym_number] = ACTIONS(755),
        [sym_identifier] = ACTIONS(779),
        [sym_comment] = ACTIONS(67),
        [sym__indent] = ACTIONS(781),
    },
    [321] = {
        [sym__expression] = STATE(531),
        [sym_binary_operator] = STATE(31),
        [sym_subscript] = STATE(31),
        [sym_number] = ACTIONS(111),
        [sym_identifier] = ACTIONS(111),
        [sym_comment] = ACTIONS(67),
    },
    [322] = {
        [anon_sym_COLON] = ACTIONS(783),
        [sym_comment] = ACTIONS(67),
    },
    [323] = {
        [sym_expression_list] = STATE(513),
        [sym__expression] = STATE(79),
        [sym_binary_operator] = STATE(31),
        [sym_subscript] = STATE(31),
        [sym_number] = ACTIONS(111),
        [sym_identifier] = ACTIONS(111),
        [sym_comment] = ACTIONS(67),
    },
    [324] = {
        [sym_expression_list] = STATE(512),
        [sym__expression] = STATE(79),
        [sym_binary_operator] = STATE(31),
        [sym_subscript] = STATE(31),
        [sym_number] = ACTIONS(111),
        [sym_identifier] = ACTIONS(111),
        [sym_comment] = ACTIONS(67),
    },
    [325] = {
        [sym__expression] = STATE(508),
        [sym_binary_operator] = STATE(31),
        [sym_subscript] = STATE(31),
        [sym_number] = ACTIONS(111),
        [sym_identifier] = ACTIONS(111),
        [sym_comment] = ACTIONS(67),
    },
    [326] = {
        [anon_sym_COLON] = ACTIONS(785),
        [sym_comment] = ACTIONS(67),
    },
    [327] = {
        [sym__expression] = STATE(501),
        [sym_binary_operator] = STATE(31),
        [sym_subscript] = STATE(31),
        [sym_number] = ACTIONS(111),
        [sym_identifier] = ACTIONS(111),
        [sym_comment] = ACTIONS(67),
    },
    [328] = {
        [sym__expression] = STATE(500),
        [sym_binary_operator] = STATE(31),
        [sym_subscript] = STATE(31),
        [sym_number] = ACTIONS(111),
        [sym_identifier] = ACTIONS(111),
        [sym_comment] = ACTIONS(67),
    },
    [329] = {
        [anon_sym_COLON] = ACTIONS(787),
        [sym_comment] = ACTIONS(67),
    },
    [330] = {
        [sym_with_item] = STATE(497),
        [sym__expression] = STATE(177),
        [sym_binary_operator] = STATE(31),
        [sym_subscript] = STATE(31),
        [sym_number] = ACTIONS(111),
        [sym_identifier] = ACTIONS(111),
        [sym_comment] = ACTIONS(67),
    },
    [331] = {
        [sym_identifier] = ACTIONS(789),
        [sym_comment] = ACTIONS(67),
    },
    [332] = {
        [sym_default_parameter] = STATE(152),
        [sym_list_splat_parameter] = STATE(153),
        [sym_dictionary_splat_parameter] = STATE(154),
        [sym_expression_list] = STATE(487),
        [sym__expression] = STATE(494),
        [sym_binary_operator] = STATE(31),
        [sym_subscript] = STATE(31),
        [aux_sym_parameters_repeat1] = STATE(155),
        [anon_sym_RPAREN] = ACTIONS(455),
        [anon_sym_STAR] = ACTIONS(457),
        [sym_number] = ACTIONS(111),
        [sym_identifier] = ACTIONS(791),
        [sym_comment] = ACTIONS(67),
    },
    [333] = {
        [anon_sym_COLON] = ACTIONS(793),
        [sym_comment] = ACTIONS(67),
        [sym__newline] = ACTIONS(800),
    },
    [334] = {
        [anon_sym_STAR] = ACTIONS(471),
        [sym_identifier] = ACTIONS(803),
        [sym_comment] = ACTIONS(67),
    },
    [335] = {
        [sym_identifier] = ACTIONS(805),
        [sym_comment] = ACTIONS(67),
    },
    [336] = {
        [sym_identifier] = ACTIONS(807),
        [sym_comment] = ACTIONS(67),
    },
    [337] = {
        [sym__expression] = STATE(489),
        [sym_binary_operator] = STATE(341),
        [sym_subscript] = STATE(341),
        [sym_number] = ACTIONS(755),
        [sym_identifier] = ACTIONS(755),
        [sym_comment] = ACTIONS(67),
    },
    [338] = {
        [sym__expression] = STATE(384),
        [sym_binary_operator] = STATE(31),
        [sym_subscript] = STATE(31),
        [anon_sym_DOT_DOT_DOT] = ACTIONS(809),
        [sym_number] = ACTIONS(111),
        [sym_identifier] = ACTIONS(111),
        [sym_comment] = ACTIONS(67),
    },
    [339] = {
        [aux_sym_subscript_repeat1] = STATE(370),
        [anon_sym_COMMA] = ACTIONS(811),
        [anon_sym_RBRACK] = ACTIONS(815),
        [sym_comment] = ACTIONS(67),
    },
    [340] = {
        [ts_builtin_sym_end] = ACTIONS(819),
        [anon_sym_SEMI] = ACTIONS(819),
        [anon_sym_print] = ACTIONS(823),
        [anon_sym_COMMA] = ACTIONS(819),
        [anon_sym_return] = ACTIONS(823),
        [anon_sym_del] = ACTIONS(823),
        [sym_pass_statement] = ACTIONS(823),
        [sym_break_statement] = ACTIONS(823),
        [sym_continue_statement] = ACTIONS(823),
        [anon_sym_if] = ACTIONS(823),
        [anon_sym_COLON] = ACTIONS(819),
        [anon_sym_elif] = ACTIONS(823),
        [anon_sym_else] = ACTIONS(823),
        [anon_sym_for] = ACTIONS(823),
        [anon_sym_in] = ACTIONS(823),
        [anon_sym_while] = ACTIONS(823),
        [anon_sym_try] = ACTIONS(823),
        [anon_sym_except] = ACTIONS(823),
        [anon_sym_as] = ACTIONS(823),
        [anon_sym_finally] = ACTIONS(823),
        [anon_sym_with] = ACTIONS(823),
        [anon_sym_def] = ACTIONS(823),
        [anon_sym_RPAREN] = ACTIONS(819),
        [anon_sym_class] = ACTIONS(823),
        [anon_sym_AT] = ACTIONS(819),
        [anon_sym_PLUS] = ACTIONS(819),
        [anon_sym_LBRACK] = ACTIONS(819),
        [anon_sym_RBRACK] = ACTIONS(819),
        [sym_number] = ACTIONS(823),
        [sym_identifier] = ACTIONS(827),
        [sym_comment] = ACTIONS(67),
        [sym__newline] = ACTIONS(819),
        [sym__dedent] = ACTIONS(819),
    },
    [341] = {
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
    [342] = {
        [sym_parameters] = STATE(356),
        [aux_sym_dotted_name_repeat1] = STATE(71),
        [ts_builtin_sym_end] = ACTIONS(121),
        [anon_sym_SEMI] = ACTIONS(121),
        [anon_sym_print] = ACTIONS(123),
        [anon_sym_COMMA] = ACTIONS(831),
        [anon_sym_return] = ACTIONS(123),
        [anon_sym_del] = ACTIONS(123),
        [sym_pass_statement] = ACTIONS(123),
        [sym_break_statement] = ACTIONS(123),
        [sym_continue_statement] = ACTIONS(123),
        [anon_sym_if] = ACTIONS(123),
        [anon_sym_COLON] = ACTIONS(835),
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
        [anon_sym_LPAREN] = ACTIONS(838),
        [anon_sym_RPAREN] = ACTIONS(843),
        [anon_sym_EQ] = ACTIONS(479),
        [anon_sym_class] = ACTIONS(123),
        [anon_sym_AT] = ACTIONS(121),
        [anon_sym_DOT] = ACTIONS(848),
        [anon_sym_PLUS] = ACTIONS(121),
        [anon_sym_LBRACK] = ACTIONS(121),
        [anon_sym_RBRACK] = ACTIONS(121),
        [sym_number] = ACTIONS(123),
        [sym_identifier] = ACTIONS(125),
        [sym_comment] = ACTIONS(67),
        [sym__newline] = ACTIONS(852),
        [sym__dedent] = ACTIONS(121),
    },
    [343] = {
        [ts_builtin_sym_end] = ACTIONS(857),
        [anon_sym_SEMI] = ACTIONS(245),
        [anon_sym_print] = ACTIONS(247),
        [anon_sym_return] = ACTIONS(247),
        [anon_sym_del] = ACTIONS(247),
        [sym_pass_statement] = ACTIONS(247),
        [sym_break_statement] = ACTIONS(247),
        [sym_continue_statement] = ACTIONS(247),
        [anon_sym_if] = ACTIONS(247),
        [anon_sym_for] = ACTIONS(247),
        [anon_sym_while] = ACTIONS(247),
        [anon_sym_try] = ACTIONS(247),
        [anon_sym_with] = ACTIONS(247),
        [anon_sym_def] = ACTIONS(860),
        [anon_sym_class] = ACTIONS(860),
        [anon_sym_AT] = ACTIONS(864),
        [sym_number] = ACTIONS(247),
        [sym_identifier] = ACTIONS(249),
        [sym_comment] = ACTIONS(67),
        [sym__newline] = ACTIONS(245),
        [sym__dedent] = ACTIONS(245),
    },
    [344] = {
        [sym__statement] = STATE(94),
        [sym__simple_statement] = STATE(95),
        [sym_print_statement] = STATE(5),
        [sym_expression_statement] = STATE(5),
        [sym_return_statement] = STATE(5),
        [sym_delete_statement] = STATE(5),
        [sym__compound_statement] = STATE(96),
        [sym_if_statement] = STATE(97),
        [sym_for_statement] = STATE(97),
        [sym_while_statement] = STATE(97),
        [sym_try_statement] = STATE(97),
        [sym_with_statement] = STATE(97),
        [sym_function_definition] = STATE(97),
        [sym_class_definition] = STATE(97),
        [sym_decorated_definition] = STATE(97),
        [sym_decorator] = STATE(20),
        [sym__expression] = STATE(21),
        [sym_binary_operator] = STATE(14),
        [sym_subscript] = STATE(14),
        [aux_sym_module_repeat1] = STATE(389),
        [aux_sym_decorated_definition_repeat1] = STATE(99),
        [anon_sym_print] = ACTIONS(77),
        [anon_sym_return] = ACTIONS(79),
        [anon_sym_del] = ACTIONS(81),
        [sym_pass_statement] = ACTIONS(83),
        [sym_break_statement] = ACTIONS(83),
        [sym_continue_statement] = ACTIONS(83),
        [anon_sym_if] = ACTIONS(307),
        [anon_sym_for] = ACTIONS(309),
        [anon_sym_while] = ACTIONS(311),
        [anon_sym_try] = ACTIONS(313),
        [anon_sym_with] = ACTIONS(315),
        [anon_sym_def] = ACTIONS(317),
        [anon_sym_class] = ACTIONS(319),
        [anon_sym_AT] = ACTIONS(99),
        [sym_number] = ACTIONS(101),
        [sym_identifier] = ACTIONS(103),
        [sym_comment] = ACTIONS(67),
        [sym__dedent] = ACTIONS(868),
    },
    [345] = {
        [ts_builtin_sym_end] = ACTIONS(870),
        [anon_sym_SEMI] = ACTIONS(870),
        [anon_sym_print] = ACTIONS(873),
        [anon_sym_return] = ACTIONS(873),
        [anon_sym_del] = ACTIONS(873),
        [sym_pass_statement] = ACTIONS(873),
        [sym_break_statement] = ACTIONS(873),
        [sym_continue_statement] = ACTIONS(873),
        [anon_sym_if] = ACTIONS(873),
        [anon_sym_elif] = ACTIONS(873),
        [anon_sym_else] = ACTIONS(873),
        [anon_sym_for] = ACTIONS(873),
        [anon_sym_while] = ACTIONS(873),
        [anon_sym_try] = ACTIONS(873),
        [anon_sym_except] = ACTIONS(873),
        [anon_sym_finally] = ACTIONS(873),
        [anon_sym_with] = ACTIONS(873),
        [anon_sym_def] = ACTIONS(873),
        [anon_sym_class] = ACTIONS(873),
        [anon_sym_AT] = ACTIONS(870),
        [sym_number] = ACTIONS(873),
        [sym_identifier] = ACTIONS(876),
        [sym_comment] = ACTIONS(67),
        [sym__newline] = ACTIONS(870),
        [sym__dedent] = ACTIONS(870),
    },
    [346] = {
        [ts_builtin_sym_end] = ACTIONS(879),
        [anon_sym_SEMI] = ACTIONS(879),
        [anon_sym_print] = ACTIONS(882),
        [anon_sym_return] = ACTIONS(882),
        [anon_sym_del] = ACTIONS(882),
        [sym_pass_statement] = ACTIONS(882),
        [sym_break_statement] = ACTIONS(882),
        [sym_continue_statement] = ACTIONS(882),
        [anon_sym_if] = ACTIONS(882),
        [anon_sym_for] = ACTIONS(882),
        [anon_sym_while] = ACTIONS(882),
        [anon_sym_try] = ACTIONS(882),
        [anon_sym_with] = ACTIONS(882),
        [anon_sym_def] = ACTIONS(882),
        [anon_sym_class] = ACTIONS(882),
        [anon_sym_AT] = ACTIONS(879),
        [sym_number] = ACTIONS(882),
        [sym_identifier] = ACTIONS(885),
        [sym_comment] = ACTIONS(67),
        [sym__newline] = ACTIONS(879),
        [sym__dedent] = ACTIONS(879),
    },
    [347] = {
        [ts_builtin_sym_end] = ACTIONS(323),
        [anon_sym_SEMI] = ACTIONS(323),
        [anon_sym_print] = ACTIONS(325),
        [anon_sym_return] = ACTIONS(325),
        [anon_sym_del] = ACTIONS(325),
        [sym_pass_statement] = ACTIONS(325),
        [sym_break_statement] = ACTIONS(325),
        [sym_continue_statement] = ACTIONS(325),
        [anon_sym_if] = ACTIONS(325),
        [anon_sym_elif] = ACTIONS(325),
        [anon_sym_else] = ACTIONS(325),
        [anon_sym_for] = ACTIONS(325),
        [anon_sym_while] = ACTIONS(325),
        [anon_sym_try] = ACTIONS(325),
        [anon_sym_except] = ACTIONS(325),
        [anon_sym_finally] = ACTIONS(325),
        [anon_sym_with] = ACTIONS(325),
        [anon_sym_def] = ACTIONS(325),
        [anon_sym_class] = ACTIONS(325),
        [anon_sym_AT] = ACTIONS(323),
        [sym_number] = ACTIONS(325),
        [sym_identifier] = ACTIONS(327),
        [sym_comment] = ACTIONS(67),
        [sym__newline] = ACTIONS(888),
        [sym__dedent] = ACTIONS(323),
    },
    [348] = {
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
    [349] = {
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
    [350] = {
        [ts_builtin_sym_end] = ACTIONS(891),
        [anon_sym_SEMI] = ACTIONS(891),
        [anon_sym_print] = ACTIONS(894),
        [anon_sym_return] = ACTIONS(894),
        [anon_sym_del] = ACTIONS(894),
        [sym_pass_statement] = ACTIONS(894),
        [sym_break_statement] = ACTIONS(894),
        [sym_continue_statement] = ACTIONS(894),
        [anon_sym_if] = ACTIONS(894),
        [anon_sym_elif] = ACTIONS(894),
        [anon_sym_else] = ACTIONS(894),
        [anon_sym_for] = ACTIONS(894),
        [anon_sym_while] = ACTIONS(894),
        [anon_sym_try] = ACTIONS(894),
        [anon_sym_with] = ACTIONS(894),
        [anon_sym_def] = ACTIONS(894),
        [anon_sym_class] = ACTIONS(894),
        [anon_sym_AT] = ACTIONS(891),
        [sym_number] = ACTIONS(894),
        [sym_identifier] = ACTIONS(897),
        [sym_comment] = ACTIONS(67),
        [sym__newline] = ACTIONS(891),
        [sym__dedent] = ACTIONS(891),
    },
    [351] = {
        [sym_finally_clause] = STATE(406),
        [ts_builtin_sym_end] = ACTIONS(900),
        [anon_sym_SEMI] = ACTIONS(900),
        [anon_sym_print] = ACTIONS(906),
        [anon_sym_return] = ACTIONS(906),
        [anon_sym_del] = ACTIONS(906),
        [sym_pass_statement] = ACTIONS(906),
        [sym_break_statement] = ACTIONS(906),
        [sym_continue_statement] = ACTIONS(906),
        [anon_sym_if] = ACTIONS(906),
        [anon_sym_for] = ACTIONS(906),
        [anon_sym_while] = ACTIONS(906),
        [anon_sym_try] = ACTIONS(906),
        [anon_sym_finally] = ACTIONS(912),
        [anon_sym_with] = ACTIONS(906),
        [anon_sym_def] = ACTIONS(906),
        [anon_sym_class] = ACTIONS(906),
        [anon_sym_AT] = ACTIONS(900),
        [sym_number] = ACTIONS(906),
        [sym_identifier] = ACTIONS(914),
        [sym_comment] = ACTIONS(67),
        [sym__newline] = ACTIONS(900),
        [sym__dedent] = ACTIONS(900),
    },
    [352] = {
        [ts_builtin_sym_end] = ACTIONS(920),
        [anon_sym_SEMI] = ACTIONS(920),
        [anon_sym_print] = ACTIONS(923),
        [anon_sym_return] = ACTIONS(923),
        [anon_sym_del] = ACTIONS(923),
        [sym_pass_statement] = ACTIONS(923),
        [sym_break_statement] = ACTIONS(923),
        [sym_continue_statement] = ACTIONS(923),
        [anon_sym_if] = ACTIONS(923),
        [anon_sym_else] = ACTIONS(923),
        [anon_sym_for] = ACTIONS(923),
        [anon_sym_while] = ACTIONS(923),
        [anon_sym_try] = ACTIONS(923),
        [anon_sym_except] = ACTIONS(923),
        [anon_sym_finally] = ACTIONS(923),
        [anon_sym_with] = ACTIONS(923),
        [anon_sym_def] = ACTIONS(923),
        [anon_sym_class] = ACTIONS(923),
        [anon_sym_AT] = ACTIONS(920),
        [sym_number] = ACTIONS(923),
        [sym_identifier] = ACTIONS(926),
        [sym_comment] = ACTIONS(67),
        [sym__newline] = ACTIONS(920),
        [sym__dedent] = ACTIONS(920),
    },
    [353] = {
        [ts_builtin_sym_end] = ACTIONS(929),
        [anon_sym_SEMI] = ACTIONS(929),
        [anon_sym_print] = ACTIONS(933),
        [anon_sym_return] = ACTIONS(933),
        [anon_sym_del] = ACTIONS(933),
        [sym_pass_statement] = ACTIONS(933),
        [sym_break_statement] = ACTIONS(933),
        [sym_continue_statement] = ACTIONS(933),
        [anon_sym_if] = ACTIONS(933),
        [anon_sym_for] = ACTIONS(933),
        [anon_sym_while] = ACTIONS(933),
        [anon_sym_try] = ACTIONS(933),
        [anon_sym_with] = ACTIONS(933),
        [anon_sym_def] = ACTIONS(933),
        [anon_sym_class] = ACTIONS(933),
        [anon_sym_AT] = ACTIONS(929),
        [sym_number] = ACTIONS(933),
        [sym_identifier] = ACTIONS(937),
        [sym_comment] = ACTIONS(67),
        [sym__newline] = ACTIONS(929),
        [sym__dedent] = ACTIONS(929),
    },
    [354] = {
        [aux_sym_with_statement_repeat1] = STATE(368),
        [anon_sym_COMMA] = ACTIONS(941),
        [anon_sym_COLON] = ACTIONS(945),
        [sym_comment] = ACTIONS(67),
    },
    [355] = {
        [ts_builtin_sym_end] = ACTIONS(949),
        [anon_sym_SEMI] = ACTIONS(949),
        [anon_sym_print] = ACTIONS(952),
        [anon_sym_return] = ACTIONS(952),
        [anon_sym_del] = ACTIONS(952),
        [sym_pass_statement] = ACTIONS(952),
        [sym_break_statement] = ACTIONS(952),
        [sym_continue_statement] = ACTIONS(952),
        [anon_sym_if] = ACTIONS(952),
        [anon_sym_for] = ACTIONS(952),
        [anon_sym_while] = ACTIONS(952),
        [anon_sym_try] = ACTIONS(952),
        [anon_sym_with] = ACTIONS(952),
        [anon_sym_def] = ACTIONS(952),
        [anon_sym_class] = ACTIONS(952),
        [anon_sym_AT] = ACTIONS(949),
        [sym_number] = ACTIONS(952),
        [sym_identifier] = ACTIONS(955),
        [sym_comment] = ACTIONS(67),
        [sym__newline] = ACTIONS(949),
        [sym__dedent] = ACTIONS(949),
    },
    [356] = {
        [anon_sym_COLON] = ACTIONS(958),
        [sym_comment] = ACTIONS(67),
    },
    [357] = {
        [anon_sym_COMMA] = ACTIONS(960),
        [anon_sym_RPAREN] = ACTIONS(962),
        [sym_comment] = ACTIONS(67),
    },
    [358] = {
        [anon_sym_COMMA] = ACTIONS(964),
        [anon_sym_RPAREN] = ACTIONS(962),
        [sym_comment] = ACTIONS(67),
    },
    [359] = {
        [anon_sym_RPAREN] = ACTIONS(966),
        [sym_comment] = ACTIONS(67),
    },
    [360] = {
        [anon_sym_def] = ACTIONS(968),
        [anon_sym_class] = ACTIONS(968),
        [anon_sym_AT] = ACTIONS(968),
        [sym_comment] = ACTIONS(67),
    },
    [361] = {
        [sym_elif_clause] = STATE(425),
        [sym_else_clause] = STATE(470),
        [sym_except_clause] = STATE(471),
        [sym_finally_clause] = STATE(472),
        [aux_sym_if_statement_repeat1] = STATE(366),
        [aux_sym_try_statement_repeat1] = STATE(367),
        [ts_builtin_sym_end] = ACTIONS(971),
        [anon_sym_SEMI] = ACTIONS(971),
        [anon_sym_print] = ACTIONS(985),
        [anon_sym_return] = ACTIONS(985),
        [anon_sym_del] = ACTIONS(985),
        [sym_pass_statement] = ACTIONS(985),
        [sym_break_statement] = ACTIONS(985),
        [sym_continue_statement] = ACTIONS(985),
        [anon_sym_if] = ACTIONS(985),
        [anon_sym_elif] = ACTIONS(999),
        [anon_sym_else] = ACTIONS(1002),
        [anon_sym_for] = ACTIONS(985),
        [anon_sym_while] = ACTIONS(985),
        [anon_sym_try] = ACTIONS(985),
        [anon_sym_except] = ACTIONS(1007),
        [anon_sym_finally] = ACTIONS(1011),
        [anon_sym_with] = ACTIONS(985),
        [anon_sym_def] = ACTIONS(985),
        [anon_sym_class] = ACTIONS(985),
        [anon_sym_AT] = ACTIONS(971),
        [sym_number] = ACTIONS(985),
        [sym_identifier] = ACTIONS(1016),
        [sym_comment] = ACTIONS(67),
        [sym__newline] = ACTIONS(971),
        [sym__dedent] = ACTIONS(971),
    },
    [362] = {
        [ts_builtin_sym_end] = ACTIONS(1030),
        [anon_sym_SEMI] = ACTIONS(1030),
        [anon_sym_print] = ACTIONS(1033),
        [anon_sym_return] = ACTIONS(1033),
        [anon_sym_del] = ACTIONS(1033),
        [sym_pass_statement] = ACTIONS(1033),
        [sym_break_statement] = ACTIONS(1033),
        [sym_continue_statement] = ACTIONS(1033),
        [anon_sym_if] = ACTIONS(1033),
        [anon_sym_COLON] = ACTIONS(1036),
        [anon_sym_elif] = ACTIONS(1033),
        [anon_sym_else] = ACTIONS(1033),
        [anon_sym_for] = ACTIONS(1033),
        [anon_sym_in] = ACTIONS(1038),
        [anon_sym_while] = ACTIONS(1033),
        [anon_sym_try] = ACTIONS(1033),
        [anon_sym_except] = ACTIONS(1033),
        [anon_sym_finally] = ACTIONS(1033),
        [anon_sym_with] = ACTIONS(1033),
        [anon_sym_def] = ACTIONS(1033),
        [anon_sym_RPAREN] = ACTIONS(1040),
        [anon_sym_class] = ACTIONS(1033),
        [anon_sym_AT] = ACTIONS(1030),
        [sym_number] = ACTIONS(1033),
        [sym_identifier] = ACTIONS(1042),
        [sym_comment] = ACTIONS(67),
        [sym__newline] = ACTIONS(1030),
        [sym__dedent] = ACTIONS(1030),
    },
    [363] = {
        [aux_sym_print_statement_repeat1] = STATE(365),
        [aux_sym_subscript_repeat1] = STATE(370),
        [ts_builtin_sym_end] = ACTIONS(1045),
        [anon_sym_SEMI] = ACTIONS(1045),
        [anon_sym_print] = ACTIONS(1052),
        [anon_sym_COMMA] = ACTIONS(1059),
        [anon_sym_return] = ACTIONS(1052),
        [anon_sym_del] = ACTIONS(1052),
        [sym_pass_statement] = ACTIONS(1052),
        [sym_break_statement] = ACTIONS(1052),
        [sym_continue_statement] = ACTIONS(1052),
        [anon_sym_if] = ACTIONS(1052),
        [anon_sym_COLON] = ACTIONS(1069),
        [anon_sym_elif] = ACTIONS(1052),
        [anon_sym_else] = ACTIONS(1052),
        [anon_sym_for] = ACTIONS(1052),
        [anon_sym_in] = ACTIONS(1077),
        [anon_sym_while] = ACTIONS(1052),
        [anon_sym_try] = ACTIONS(1052),
        [anon_sym_except] = ACTIONS(1052),
        [anon_sym_as] = ACTIONS(1082),
        [anon_sym_finally] = ACTIONS(1052),
        [anon_sym_with] = ACTIONS(1052),
        [anon_sym_def] = ACTIONS(1052),
        [anon_sym_RPAREN] = ACTIONS(1085),
        [anon_sym_class] = ACTIONS(1052),
        [anon_sym_AT] = ACTIONS(1045),
        [anon_sym_PLUS] = ACTIONS(1092),
        [anon_sym_LBRACK] = ACTIONS(1095),
        [anon_sym_RBRACK] = ACTIONS(1098),
        [sym_number] = ACTIONS(1052),
        [sym_identifier] = ACTIONS(1103),
        [sym_comment] = ACTIONS(67),
        [sym__newline] = ACTIONS(1045),
        [sym__dedent] = ACTIONS(1045),
    },
    [364] = {
        [sym__statement] = STATE(416),
        [sym__simple_statement] = STATE(417),
        [sym_print_statement] = STATE(5),
        [sym_expression_statement] = STATE(5),
        [sym_return_statement] = STATE(5),
        [sym_delete_statement] = STATE(5),
        [sym__compound_statement] = STATE(348),
        [sym_if_statement] = STATE(349),
        [sym_for_statement] = STATE(349),
        [sym_while_statement] = STATE(349),
        [sym_try_statement] = STATE(349),
        [sym_with_statement] = STATE(349),
        [sym_function_definition] = STATE(349),
        [sym_class_definition] = STATE(349),
        [sym_decorated_definition] = STATE(349),
        [sym_decorator] = STATE(20),
        [sym__expression] = STATE(21),
        [sym_binary_operator] = STATE(14),
        [sym_subscript] = STATE(14),
        [aux_sym_decorated_definition_repeat1] = STATE(369),
        [ts_builtin_sym_end] = ACTIONS(161),
        [anon_sym_SEMI] = ACTIONS(163),
        [anon_sym_print] = ACTIONS(77),
        [anon_sym_return] = ACTIONS(79),
        [anon_sym_del] = ACTIONS(81),
        [sym_pass_statement] = ACTIONS(83),
        [sym_break_statement] = ACTIONS(83),
        [sym_continue_statement] = ACTIONS(83),
        [anon_sym_if] = ACTIONS(1110),
        [anon_sym_for] = ACTIONS(1112),
        [anon_sym_while] = ACTIONS(1114),
        [anon_sym_try] = ACTIONS(1116),
        [anon_sym_with] = ACTIONS(1118),
        [anon_sym_def] = ACTIONS(1120),
        [anon_sym_class] = ACTIONS(1122),
        [anon_sym_AT] = ACTIONS(99),
        [sym_number] = ACTIONS(101),
        [sym_identifier] = ACTIONS(103),
        [sym_comment] = ACTIONS(67),
        [sym__newline] = ACTIONS(163),
        [sym__dedent] = ACTIONS(1124),
    },
    [365] = {
        [ts_builtin_sym_end] = ACTIONS(1126),
        [anon_sym_SEMI] = ACTIONS(1126),
        [anon_sym_print] = ACTIONS(1129),
        [anon_sym_COMMA] = ACTIONS(1132),
        [anon_sym_return] = ACTIONS(1129),
        [anon_sym_del] = ACTIONS(1129),
        [sym_pass_statement] = ACTIONS(1129),
        [sym_break_statement] = ACTIONS(1129),
        [sym_continue_statement] = ACTIONS(1129),
        [anon_sym_if] = ACTIONS(1129),
        [anon_sym_COLON] = ACTIONS(303),
        [anon_sym_elif] = ACTIONS(1129),
        [anon_sym_else] = ACTIONS(1129),
        [anon_sym_for] = ACTIONS(1129),
        [anon_sym_in] = ACTIONS(415),
        [anon_sym_while] = ACTIONS(1129),
        [anon_sym_try] = ACTIONS(1129),
        [anon_sym_except] = ACTIONS(1129),
        [anon_sym_finally] = ACTIONS(1129),
        [anon_sym_with] = ACTIONS(1129),
        [anon_sym_def] = ACTIONS(1129),
        [anon_sym_RPAREN] = ACTIONS(1134),
        [anon_sym_class] = ACTIONS(1129),
        [anon_sym_AT] = ACTIONS(1126),
        [sym_number] = ACTIONS(1129),
        [sym_identifier] = ACTIONS(1137),
        [sym_comment] = ACTIONS(67),
        [sym__newline] = ACTIONS(1126),
        [sym__dedent] = ACTIONS(1126),
    },
    [366] = {
        [sym_elif_clause] = STATE(408),
        [sym_else_clause] = STATE(409),
        [ts_builtin_sym_end] = ACTIONS(689),
        [anon_sym_SEMI] = ACTIONS(689),
        [anon_sym_print] = ACTIONS(687),
        [anon_sym_return] = ACTIONS(687),
        [anon_sym_del] = ACTIONS(687),
        [sym_pass_statement] = ACTIONS(687),
        [sym_break_statement] = ACTIONS(687),
        [sym_continue_statement] = ACTIONS(687),
        [anon_sym_if] = ACTIONS(687),
        [anon_sym_elif] = ACTIONS(1140),
        [anon_sym_else] = ACTIONS(1142),
        [anon_sym_for] = ACTIONS(687),
        [anon_sym_while] = ACTIONS(687),
        [anon_sym_try] = ACTIONS(687),
        [anon_sym_with] = ACTIONS(687),
        [anon_sym_def] = ACTIONS(687),
        [anon_sym_class] = ACTIONS(687),
        [anon_sym_AT] = ACTIONS(689),
        [sym_number] = ACTIONS(687),
        [sym_identifier] = ACTIONS(691),
        [sym_comment] = ACTIONS(67),
        [sym__newline] = ACTIONS(689),
        [sym__dedent] = ACTIONS(689),
    },
    [367] = {
        [sym_else_clause] = STATE(403),
        [sym_except_clause] = STATE(404),
        [sym_finally_clause] = STATE(405),
        [ts_builtin_sym_end] = ACTIONS(579),
        [anon_sym_SEMI] = ACTIONS(579),
        [anon_sym_print] = ACTIONS(577),
        [anon_sym_return] = ACTIONS(577),
        [anon_sym_del] = ACTIONS(577),
        [sym_pass_statement] = ACTIONS(577),
        [sym_break_statement] = ACTIONS(577),
        [sym_continue_statement] = ACTIONS(577),
        [anon_sym_if] = ACTIONS(577),
        [anon_sym_else] = ACTIONS(1144),
        [anon_sym_for] = ACTIONS(577),
        [anon_sym_while] = ACTIONS(577),
        [anon_sym_try] = ACTIONS(577),
        [anon_sym_except] = ACTIONS(1146),
        [anon_sym_finally] = ACTIONS(912),
        [anon_sym_with] = ACTIONS(577),
        [anon_sym_def] = ACTIONS(577),
        [anon_sym_class] = ACTIONS(577),
        [anon_sym_AT] = ACTIONS(579),
        [sym_number] = ACTIONS(577),
        [sym_identifier] = ACTIONS(581),
        [sym_comment] = ACTIONS(67),
        [sym__newline] = ACTIONS(579),
        [sym__dedent] = ACTIONS(579),
    },
    [368] = {
        [anon_sym_COMMA] = ACTIONS(531),
        [anon_sym_COLON] = ACTIONS(1148),
        [sym_comment] = ACTIONS(67),
    },
    [369] = {
        [sym_function_definition] = STATE(374),
        [sym_class_definition] = STATE(374),
        [sym_decorator] = STATE(25),
        [anon_sym_def] = ACTIONS(1150),
        [anon_sym_class] = ACTIONS(1152),
        [anon_sym_AT] = ACTIONS(99),
        [sym_comment] = ACTIONS(67),
    },
    [370] = {
        [anon_sym_COMMA] = ACTIONS(1154),
        [anon_sym_RBRACK] = ACTIONS(1156),
        [sym_comment] = ACTIONS(67),
    },
    [371] = {
        [sym__expression] = STATE(42),
        [sym_binary_operator] = STATE(31),
        [sym_subscript] = STATE(31),
        [anon_sym_DOT_DOT_DOT] = ACTIONS(209),
        [anon_sym_RBRACK] = ACTIONS(1158),
        [sym_number] = ACTIONS(111),
        [sym_identifier] = ACTIONS(111),
        [sym_comment] = ACTIONS(67),
    },
    [372] = {
        [ts_builtin_sym_end] = ACTIONS(213),
        [anon_sym_SEMI] = ACTIONS(213),
        [anon_sym_print] = ACTIONS(215),
        [anon_sym_COMMA] = ACTIONS(213),
        [anon_sym_return] = ACTIONS(215),
        [anon_sym_del] = ACTIONS(215),
        [sym_pass_statement] = ACTIONS(215),
        [sym_break_statement] = ACTIONS(215),
        [sym_continue_statement] = ACTIONS(215),
        [anon_sym_if] = ACTIONS(215),
        [anon_sym_COLON] = ACTIONS(213),
        [anon_sym_elif] = ACTIONS(215),
        [anon_sym_else] = ACTIONS(215),
        [anon_sym_for] = ACTIONS(215),
        [anon_sym_in] = ACTIONS(215),
        [anon_sym_while] = ACTIONS(215),
        [anon_sym_try] = ACTIONS(215),
        [anon_sym_except] = ACTIONS(215),
        [anon_sym_as] = ACTIONS(215),
        [anon_sym_finally] = ACTIONS(215),
        [anon_sym_with] = ACTIONS(215),
        [anon_sym_def] = ACTIONS(215),
        [anon_sym_RPAREN] = ACTIONS(213),
        [anon_sym_class] = ACTIONS(215),
        [anon_sym_AT] = ACTIONS(213),
        [anon_sym_PLUS] = ACTIONS(213),
        [anon_sym_LBRACK] = ACTIONS(213),
        [anon_sym_RBRACK] = ACTIONS(213),
        [sym_number] = ACTIONS(215),
        [sym_identifier] = ACTIONS(217),
        [sym_comment] = ACTIONS(67),
        [sym__newline] = ACTIONS(213),
        [sym__dedent] = ACTIONS(213),
    },
    [373] = {
        [ts_builtin_sym_end] = ACTIONS(221),
        [anon_sym_SEMI] = ACTIONS(221),
        [anon_sym_print] = ACTIONS(223),
        [anon_sym_COMMA] = ACTIONS(221),
        [anon_sym_return] = ACTIONS(223),
        [anon_sym_del] = ACTIONS(223),
        [sym_pass_statement] = ACTIONS(223),
        [sym_break_statement] = ACTIONS(223),
        [sym_continue_statement] = ACTIONS(223),
        [anon_sym_if] = ACTIONS(223),
        [anon_sym_COLON] = ACTIONS(221),
        [anon_sym_elif] = ACTIONS(223),
        [anon_sym_else] = ACTIONS(223),
        [anon_sym_for] = ACTIONS(223),
        [anon_sym_in] = ACTIONS(223),
        [anon_sym_while] = ACTIONS(223),
        [anon_sym_try] = ACTIONS(223),
        [anon_sym_except] = ACTIONS(223),
        [anon_sym_as] = ACTIONS(223),
        [anon_sym_finally] = ACTIONS(223),
        [anon_sym_with] = ACTIONS(223),
        [anon_sym_def] = ACTIONS(223),
        [anon_sym_RPAREN] = ACTIONS(221),
        [anon_sym_class] = ACTIONS(223),
        [anon_sym_AT] = ACTIONS(221),
        [anon_sym_PLUS] = ACTIONS(221),
        [anon_sym_LBRACK] = ACTIONS(221),
        [anon_sym_RBRACK] = ACTIONS(221),
        [sym_number] = ACTIONS(223),
        [sym_identifier] = ACTIONS(225),
        [sym_comment] = ACTIONS(67),
        [sym__newline] = ACTIONS(221),
        [sym__dedent] = ACTIONS(221),
    },
    [374] = {
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
        [sym_number] = ACTIONS(171),
        [sym_identifier] = ACTIONS(173),
        [sym_comment] = ACTIONS(67),
        [sym__newline] = ACTIONS(169),
        [sym__dedent] = ACTIONS(169),
    },
    [375] = {
        [sym__simple_statement] = STATE(379),
        [sym_print_statement] = STATE(318),
        [sym_expression_statement] = STATE(318),
        [sym_return_statement] = STATE(318),
        [sym_delete_statement] = STATE(318),
        [sym__suite] = STATE(380),
        [sym__expression] = STATE(381),
        [sym_binary_operator] = STATE(341),
        [sym_subscript] = STATE(341),
        [anon_sym_print] = ACTIONS(1160),
        [anon_sym_return] = ACTIONS(1162),
        [anon_sym_del] = ACTIONS(1164),
        [sym_pass_statement] = ACTIONS(777),
        [sym_break_statement] = ACTIONS(777),
        [sym_continue_statement] = ACTIONS(777),
        [sym_number] = ACTIONS(755),
        [sym_identifier] = ACTIONS(779),
        [sym_comment] = ACTIONS(67),
        [sym__indent] = ACTIONS(781),
    },
    [376] = {
        [sym__expression] = STATE(401),
        [sym_binary_operator] = STATE(341),
        [sym_subscript] = STATE(341),
        [sym_number] = ACTIONS(755),
        [sym_identifier] = ACTIONS(755),
        [sym_comment] = ACTIONS(67),
    },
    [377] = {
        [sym_expression_list] = STATE(400),
        [sym__expression] = STATE(392),
        [sym_binary_operator] = STATE(341),
        [sym_subscript] = STATE(341),
        [sym_number] = ACTIONS(755),
        [sym_identifier] = ACTIONS(755),
        [sym_comment] = ACTIONS(67),
    },
    [378] = {
        [sym_expression_list] = STATE(391),
        [sym__expression] = STATE(392),
        [sym_binary_operator] = STATE(341),
        [sym_subscript] = STATE(341),
        [sym_number] = ACTIONS(755),
        [sym_identifier] = ACTIONS(755),
        [sym_comment] = ACTIONS(67),
    },
    [379] = {
        [ts_builtin_sym_end] = ACTIONS(323),
        [anon_sym_SEMI] = ACTIONS(323),
        [anon_sym_print] = ACTIONS(325),
        [anon_sym_return] = ACTIONS(325),
        [anon_sym_del] = ACTIONS(325),
        [sym_pass_statement] = ACTIONS(325),
        [sym_break_statement] = ACTIONS(325),
        [sym_continue_statement] = ACTIONS(325),
        [anon_sym_if] = ACTIONS(325),
        [anon_sym_elif] = ACTIONS(325),
        [anon_sym_else] = ACTIONS(325),
        [anon_sym_for] = ACTIONS(325),
        [anon_sym_while] = ACTIONS(325),
        [anon_sym_try] = ACTIONS(325),
        [anon_sym_except] = ACTIONS(325),
        [anon_sym_finally] = ACTIONS(325),
        [anon_sym_with] = ACTIONS(325),
        [anon_sym_def] = ACTIONS(325),
        [anon_sym_class] = ACTIONS(325),
        [anon_sym_AT] = ACTIONS(323),
        [sym_number] = ACTIONS(325),
        [sym_identifier] = ACTIONS(327),
        [sym_comment] = ACTIONS(67),
        [sym__newline] = ACTIONS(323),
        [sym__dedent] = ACTIONS(323),
    },
    [380] = {
        [ts_builtin_sym_end] = ACTIONS(537),
        [anon_sym_SEMI] = ACTIONS(537),
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
        [anon_sym_AT] = ACTIONS(537),
        [sym_number] = ACTIONS(535),
        [sym_identifier] = ACTIONS(539),
        [sym_comment] = ACTIONS(67),
        [sym__newline] = ACTIONS(537),
        [sym__dedent] = ACTIONS(537),
    },
    [381] = {
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
        [anon_sym_PLUS] = ACTIONS(1166),
        [anon_sym_LBRACK] = ACTIONS(1168),
        [sym_number] = ACTIONS(153),
        [sym_identifier] = ACTIONS(159),
        [sym_comment] = ACTIONS(67),
        [sym__newline] = ACTIONS(151),
        [sym__dedent] = ACTIONS(151),
    },
    [382] = {
        [sym__expression] = STATE(387),
        [sym_binary_operator] = STATE(341),
        [sym_subscript] = STATE(341),
        [sym_number] = ACTIONS(755),
        [sym_identifier] = ACTIONS(755),
        [sym_comment] = ACTIONS(67),
    },
    [383] = {
        [aux_sym_subscript_repeat1] = STATE(370),
        [anon_sym_COMMA] = ACTIONS(1170),
        [anon_sym_RBRACK] = ACTIONS(1172),
        [sym_comment] = ACTIONS(67),
    },
    [384] = {
        [aux_sym_subscript_repeat1] = STATE(370),
        [anon_sym_COMMA] = ACTIONS(1170),
        [anon_sym_PLUS] = ACTIONS(191),
        [anon_sym_LBRACK] = ACTIONS(193),
        [anon_sym_RBRACK] = ACTIONS(1172),
        [sym_comment] = ACTIONS(67),
    },
    [385] = {
        [sym__expression] = STATE(52),
        [sym_binary_operator] = STATE(31),
        [sym_subscript] = STATE(31),
        [anon_sym_DOT_DOT_DOT] = ACTIONS(195),
        [anon_sym_RBRACK] = ACTIONS(1156),
        [sym_number] = ACTIONS(111),
        [sym_identifier] = ACTIONS(111),
        [sym_comment] = ACTIONS(67),
    },
    [386] = {
        [ts_builtin_sym_end] = ACTIONS(201),
        [anon_sym_SEMI] = ACTIONS(201),
        [anon_sym_print] = ACTIONS(203),
        [anon_sym_COMMA] = ACTIONS(201),
        [anon_sym_return] = ACTIONS(203),
        [anon_sym_del] = ACTIONS(203),
        [sym_pass_statement] = ACTIONS(203),
        [sym_break_statement] = ACTIONS(203),
        [sym_continue_statement] = ACTIONS(203),
        [anon_sym_if] = ACTIONS(203),
        [anon_sym_COLON] = ACTIONS(201),
        [anon_sym_elif] = ACTIONS(203),
        [anon_sym_else] = ACTIONS(203),
        [anon_sym_for] = ACTIONS(203),
        [anon_sym_in] = ACTIONS(203),
        [anon_sym_while] = ACTIONS(203),
        [anon_sym_try] = ACTIONS(203),
        [anon_sym_except] = ACTIONS(203),
        [anon_sym_as] = ACTIONS(203),
        [anon_sym_finally] = ACTIONS(203),
        [anon_sym_with] = ACTIONS(203),
        [anon_sym_def] = ACTIONS(203),
        [anon_sym_RPAREN] = ACTIONS(201),
        [anon_sym_class] = ACTIONS(203),
        [anon_sym_AT] = ACTIONS(201),
        [anon_sym_PLUS] = ACTIONS(201),
        [anon_sym_LBRACK] = ACTIONS(201),
        [anon_sym_RBRACK] = ACTIONS(201),
        [sym_number] = ACTIONS(203),
        [sym_identifier] = ACTIONS(205),
        [sym_comment] = ACTIONS(67),
        [sym__newline] = ACTIONS(201),
        [sym__dedent] = ACTIONS(201),
    },
    [387] = {
        [ts_builtin_sym_end] = ACTIONS(239),
        [anon_sym_SEMI] = ACTIONS(239),
        [anon_sym_print] = ACTIONS(241),
        [anon_sym_return] = ACTIONS(241),
        [anon_sym_del] = ACTIONS(241),
        [sym_pass_statement] = ACTIONS(241),
        [sym_break_statement] = ACTIONS(241),
        [sym_continue_statement] = ACTIONS(241),
        [anon_sym_if] = ACTIONS(241),
        [anon_sym_for] = ACTIONS(241),
        [anon_sym_while] = ACTIONS(241),
        [anon_sym_try] = ACTIONS(241),
        [anon_sym_with] = ACTIONS(241),
        [anon_sym_def] = ACTIONS(241),
        [anon_sym_class] = ACTIONS(241),
        [anon_sym_AT] = ACTIONS(239),
        [anon_sym_PLUS] = ACTIONS(1174),
        [anon_sym_LBRACK] = ACTIONS(1095),
        [sym_number] = ACTIONS(241),
        [sym_identifier] = ACTIONS(243),
        [sym_comment] = ACTIONS(67),
        [sym__newline] = ACTIONS(239),
        [sym__dedent] = ACTIONS(239),
    },
    [388] = {
        [ts_builtin_sym_end] = ACTIONS(341),
        [anon_sym_SEMI] = ACTIONS(341),
        [anon_sym_print] = ACTIONS(343),
        [anon_sym_return] = ACTIONS(343),
        [anon_sym_del] = ACTIONS(343),
        [sym_pass_statement] = ACTIONS(343),
        [sym_break_statement] = ACTIONS(343),
        [sym_continue_statement] = ACTIONS(343),
        [anon_sym_if] = ACTIONS(343),
        [anon_sym_elif] = ACTIONS(343),
        [anon_sym_else] = ACTIONS(343),
        [anon_sym_for] = ACTIONS(343),
        [anon_sym_while] = ACTIONS(343),
        [anon_sym_try] = ACTIONS(343),
        [anon_sym_except] = ACTIONS(343),
        [anon_sym_finally] = ACTIONS(343),
        [anon_sym_with] = ACTIONS(343),
        [anon_sym_def] = ACTIONS(343),
        [anon_sym_class] = ACTIONS(343),
        [anon_sym_AT] = ACTIONS(341),
        [sym_number] = ACTIONS(343),
        [sym_identifier] = ACTIONS(345),
        [sym_comment] = ACTIONS(67),
        [sym__newline] = ACTIONS(341),
        [sym__dedent] = ACTIONS(341),
    },
    [389] = {
        [sym__statement] = STATE(102),
        [sym__simple_statement] = STATE(95),
        [sym_print_statement] = STATE(5),
        [sym_expression_statement] = STATE(5),
        [sym_return_statement] = STATE(5),
        [sym_delete_statement] = STATE(5),
        [sym__compound_statement] = STATE(96),
        [sym_if_statement] = STATE(97),
        [sym_for_statement] = STATE(97),
        [sym_while_statement] = STATE(97),
        [sym_try_statement] = STATE(97),
        [sym_with_statement] = STATE(97),
        [sym_function_definition] = STATE(97),
        [sym_class_definition] = STATE(97),
        [sym_decorated_definition] = STATE(97),
        [sym_decorator] = STATE(20),
        [sym__expression] = STATE(21),
        [sym_binary_operator] = STATE(14),
        [sym_subscript] = STATE(14),
        [aux_sym_decorated_definition_repeat1] = STATE(99),
        [anon_sym_print] = ACTIONS(77),
        [anon_sym_return] = ACTIONS(79),
        [anon_sym_del] = ACTIONS(81),
        [sym_pass_statement] = ACTIONS(83),
        [sym_break_statement] = ACTIONS(83),
        [sym_continue_statement] = ACTIONS(83),
        [anon_sym_if] = ACTIONS(307),
        [anon_sym_for] = ACTIONS(309),
        [anon_sym_while] = ACTIONS(311),
        [anon_sym_try] = ACTIONS(313),
        [anon_sym_with] = ACTIONS(315),
        [anon_sym_def] = ACTIONS(317),
        [anon_sym_class] = ACTIONS(319),
        [anon_sym_AT] = ACTIONS(99),
        [sym_number] = ACTIONS(101),
        [sym_identifier] = ACTIONS(103),
        [sym_comment] = ACTIONS(67),
        [sym__dedent] = ACTIONS(1124),
    },
    [390] = {
        [ts_builtin_sym_end] = ACTIONS(355),
        [anon_sym_SEMI] = ACTIONS(355),
        [anon_sym_print] = ACTIONS(357),
        [anon_sym_return] = ACTIONS(357),
        [anon_sym_del] = ACTIONS(357),
        [sym_pass_statement] = ACTIONS(357),
        [sym_break_statement] = ACTIONS(357),
        [sym_continue_statement] = ACTIONS(357),
        [anon_sym_if] = ACTIONS(357),
        [anon_sym_elif] = ACTIONS(357),
        [anon_sym_else] = ACTIONS(357),
        [anon_sym_for] = ACTIONS(357),
        [anon_sym_while] = ACTIONS(357),
        [anon_sym_try] = ACTIONS(357),
        [anon_sym_except] = ACTIONS(357),
        [anon_sym_finally] = ACTIONS(357),
        [anon_sym_with] = ACTIONS(357),
        [anon_sym_def] = ACTIONS(357),
        [anon_sym_class] = ACTIONS(357),
        [anon_sym_AT] = ACTIONS(355),
        [sym_number] = ACTIONS(357),
        [sym_identifier] = ACTIONS(359),
        [sym_comment] = ACTIONS(67),
        [sym__newline] = ACTIONS(355),
        [sym__dedent] = ACTIONS(355),
    },
    [391] = {
        [ts_builtin_sym_end] = ACTIONS(405),
        [anon_sym_SEMI] = ACTIONS(405),
        [anon_sym_print] = ACTIONS(403),
        [anon_sym_return] = ACTIONS(403),
        [anon_sym_del] = ACTIONS(403),
        [sym_pass_statement] = ACTIONS(403),
        [sym_break_statement] = ACTIONS(403),
        [sym_continue_statement] = ACTIONS(403),
        [anon_sym_if] = ACTIONS(403),
        [anon_sym_elif] = ACTIONS(403),
        [anon_sym_else] = ACTIONS(403),
        [anon_sym_for] = ACTIONS(403),
        [anon_sym_while] = ACTIONS(403),
        [anon_sym_try] = ACTIONS(403),
        [anon_sym_except] = ACTIONS(403),
        [anon_sym_finally] = ACTIONS(403),
        [anon_sym_with] = ACTIONS(403),
        [anon_sym_def] = ACTIONS(403),
        [anon_sym_class] = ACTIONS(403),
        [anon_sym_AT] = ACTIONS(405),
        [sym_number] = ACTIONS(403),
        [sym_identifier] = ACTIONS(407),
        [sym_comment] = ACTIONS(67),
        [sym__newline] = ACTIONS(405),
        [sym__dedent] = ACTIONS(405),
    },
    [392] = {
        [aux_sym_print_statement_repeat1] = STATE(395),
        [ts_builtin_sym_end] = ACTIONS(301),
        [anon_sym_SEMI] = ACTIONS(301),
        [anon_sym_print] = ACTIONS(409),
        [anon_sym_COMMA] = ACTIONS(1177),
        [anon_sym_return] = ACTIONS(409),
        [anon_sym_del] = ACTIONS(409),
        [sym_pass_statement] = ACTIONS(409),
        [sym_break_statement] = ACTIONS(409),
        [sym_continue_statement] = ACTIONS(409),
        [anon_sym_if] = ACTIONS(409),
        [anon_sym_for] = ACTIONS(409),
        [anon_sym_while] = ACTIONS(409),
        [anon_sym_try] = ACTIONS(409),
        [anon_sym_with] = ACTIONS(409),
        [anon_sym_def] = ACTIONS(409),
        [anon_sym_class] = ACTIONS(409),
        [anon_sym_AT] = ACTIONS(301),
        [anon_sym_PLUS] = ACTIONS(1179),
        [anon_sym_LBRACK] = ACTIONS(1168),
        [sym_number] = ACTIONS(409),
        [sym_identifier] = ACTIONS(413),
        [sym_comment] = ACTIONS(67),
        [sym__newline] = ACTIONS(301),
        [sym__dedent] = ACTIONS(301),
    },
    [393] = {
        [sym__expression] = STATE(399),
        [sym_binary_operator] = STATE(341),
        [sym_subscript] = STATE(341),
        [sym_number] = ACTIONS(755),
        [sym_identifier] = ACTIONS(755),
        [sym_comment] = ACTIONS(67),
    },
    [394] = {
        [sym__expression] = STATE(398),
        [sym_binary_operator] = STATE(341),
        [sym_subscript] = STATE(341),
        [sym_number] = ACTIONS(755),
        [sym_identifier] = ACTIONS(755),
        [sym_comment] = ACTIONS(67),
    },
    [395] = {
        [ts_builtin_sym_end] = ACTIONS(303),
        [anon_sym_SEMI] = ACTIONS(303),
        [anon_sym_print] = ACTIONS(415),
        [anon_sym_COMMA] = ACTIONS(1181),
        [anon_sym_return] = ACTIONS(415),
        [anon_sym_del] = ACTIONS(415),
        [sym_pass_statement] = ACTIONS(415),
        [sym_break_statement] = ACTIONS(415),
        [sym_continue_statement] = ACTIONS(415),
        [anon_sym_if] = ACTIONS(415),
        [anon_sym_for] = ACTIONS(415),
        [anon_sym_while] = ACTIONS(415),
        [anon_sym_try] = ACTIONS(415),
        [anon_sym_with] = ACTIONS(415),
        [anon_sym_def] = ACTIONS(415),
        [anon_sym_class] = ACTIONS(415),
        [anon_sym_AT] = ACTIONS(303),
        [sym_number] = ACTIONS(415),
        [sym_identifier] = ACTIONS(419),
        [sym_comment] = ACTIONS(67),
        [sym__newline] = ACTIONS(303),
        [sym__dedent] = ACTIONS(303),
    },
    [396] = {
        [sym__expression] = STATE(397),
        [sym_binary_operator] = STATE(341),
        [sym_subscript] = STATE(341),
        [sym_number] = ACTIONS(755),
        [sym_identifier] = ACTIONS(755),
        [sym_comment] = ACTIONS(67),
    },
    [397] = {
        [ts_builtin_sym_end] = ACTIONS(277),
        [anon_sym_SEMI] = ACTIONS(277),
        [anon_sym_print] = ACTIONS(421),
        [anon_sym_COMMA] = ACTIONS(277),
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
        [anon_sym_AT] = ACTIONS(277),
        [anon_sym_PLUS] = ACTIONS(1179),
        [anon_sym_LBRACK] = ACTIONS(1168),
        [sym_number] = ACTIONS(421),
        [sym_identifier] = ACTIONS(423),
        [sym_comment] = ACTIONS(67),
        [sym__newline] = ACTIONS(277),
        [sym__dedent] = ACTIONS(277),
    },
    [398] = {
        [ts_builtin_sym_end] = ACTIONS(239),
        [anon_sym_SEMI] = ACTIONS(239),
        [anon_sym_print] = ACTIONS(241),
        [anon_sym_COMMA] = ACTIONS(239),
        [anon_sym_return] = ACTIONS(241),
        [anon_sym_del] = ACTIONS(241),
        [sym_pass_statement] = ACTIONS(241),
        [sym_break_statement] = ACTIONS(241),
        [sym_continue_statement] = ACTIONS(241),
        [anon_sym_if] = ACTIONS(241),
        [anon_sym_for] = ACTIONS(241),
        [anon_sym_while] = ACTIONS(241),
        [anon_sym_try] = ACTIONS(241),
        [anon_sym_with] = ACTIONS(241),
        [anon_sym_def] = ACTIONS(241),
        [anon_sym_class] = ACTIONS(241),
        [anon_sym_AT] = ACTIONS(239),
        [anon_sym_PLUS] = ACTIONS(1183),
        [anon_sym_LBRACK] = ACTIONS(1095),
        [sym_number] = ACTIONS(241),
        [sym_identifier] = ACTIONS(243),
        [sym_comment] = ACTIONS(67),
        [sym__newline] = ACTIONS(239),
        [sym__dedent] = ACTIONS(239),
    },
    [399] = {
        [ts_builtin_sym_end] = ACTIONS(279),
        [anon_sym_SEMI] = ACTIONS(279),
        [anon_sym_print] = ACTIONS(425),
        [anon_sym_COMMA] = ACTIONS(279),
        [anon_sym_return] = ACTIONS(425),
        [anon_sym_del] = ACTIONS(425),
        [sym_pass_statement] = ACTIONS(425),
        [sym_break_statement] = ACTIONS(425),
        [sym_continue_statement] = ACTIONS(425),
        [anon_sym_if] = ACTIONS(425),
        [anon_sym_for] = ACTIONS(425),
        [anon_sym_while] = ACTIONS(425),
        [anon_sym_try] = ACTIONS(425),
        [anon_sym_with] = ACTIONS(425),
        [anon_sym_def] = ACTIONS(425),
        [anon_sym_class] = ACTIONS(425),
        [anon_sym_AT] = ACTIONS(279),
        [anon_sym_PLUS] = ACTIONS(1179),
        [anon_sym_LBRACK] = ACTIONS(1168),
        [sym_number] = ACTIONS(425),
        [sym_identifier] = ACTIONS(427),
        [sym_comment] = ACTIONS(67),
        [sym__newline] = ACTIONS(279),
        [sym__dedent] = ACTIONS(279),
    },
    [400] = {
        [ts_builtin_sym_end] = ACTIONS(431),
        [anon_sym_SEMI] = ACTIONS(431),
        [anon_sym_print] = ACTIONS(429),
        [anon_sym_return] = ACTIONS(429),
        [anon_sym_del] = ACTIONS(429),
        [sym_pass_statement] = ACTIONS(429),
        [sym_break_statement] = ACTIONS(429),
        [sym_continue_statement] = ACTIONS(429),
        [anon_sym_if] = ACTIONS(429),
        [anon_sym_elif] = ACTIONS(429),
        [anon_sym_else] = ACTIONS(429),
        [anon_sym_for] = ACTIONS(429),
        [anon_sym_while] = ACTIONS(429),
        [anon_sym_try] = ACTIONS(429),
        [anon_sym_except] = ACTIONS(429),
        [anon_sym_finally] = ACTIONS(429),
        [anon_sym_with] = ACTIONS(429),
        [anon_sym_def] = ACTIONS(429),
        [anon_sym_class] = ACTIONS(429),
        [anon_sym_AT] = ACTIONS(431),
        [sym_number] = ACTIONS(429),
        [sym_identifier] = ACTIONS(433),
        [sym_comment] = ACTIONS(67),
        [sym__newline] = ACTIONS(431),
        [sym__dedent] = ACTIONS(431),
    },
    [401] = {
        [aux_sym_print_statement_repeat1] = STATE(402),
        [ts_builtin_sym_end] = ACTIONS(437),
        [anon_sym_SEMI] = ACTIONS(437),
        [anon_sym_print] = ACTIONS(435),
        [anon_sym_COMMA] = ACTIONS(1177),
        [anon_sym_return] = ACTIONS(435),
        [anon_sym_del] = ACTIONS(435),
        [sym_pass_statement] = ACTIONS(435),
        [sym_break_statement] = ACTIONS(435),
        [sym_continue_statement] = ACTIONS(435),
        [anon_sym_if] = ACTIONS(435),
        [anon_sym_for] = ACTIONS(435),
        [anon_sym_while] = ACTIONS(435),
        [anon_sym_try] = ACTIONS(435),
        [anon_sym_with] = ACTIONS(435),
        [anon_sym_def] = ACTIONS(435),
        [anon_sym_class] = ACTIONS(435),
        [anon_sym_AT] = ACTIONS(437),
        [anon_sym_PLUS] = ACTIONS(1179),
        [anon_sym_LBRACK] = ACTIONS(1168),
        [sym_number] = ACTIONS(435),
        [sym_identifier] = ACTIONS(439),
        [sym_comment] = ACTIONS(67),
        [sym__newline] = ACTIONS(437),
        [sym__dedent] = ACTIONS(437),
    },
    [402] = {
        [ts_builtin_sym_end] = ACTIONS(443),
        [anon_sym_SEMI] = ACTIONS(443),
        [anon_sym_print] = ACTIONS(441),
        [anon_sym_COMMA] = ACTIONS(1181),
        [anon_sym_return] = ACTIONS(441),
        [anon_sym_del] = ACTIONS(441),
        [sym_pass_statement] = ACTIONS(441),
        [sym_break_statement] = ACTIONS(441),
        [sym_continue_statement] = ACTIONS(441),
        [anon_sym_if] = ACTIONS(441),
        [anon_sym_for] = ACTIONS(441),
        [anon_sym_while] = ACTIONS(441),
        [anon_sym_try] = ACTIONS(441),
        [anon_sym_with] = ACTIONS(441),
        [anon_sym_def] = ACTIONS(441),
        [anon_sym_class] = ACTIONS(441),
        [anon_sym_AT] = ACTIONS(443),
        [sym_number] = ACTIONS(441),
        [sym_identifier] = ACTIONS(445),
        [sym_comment] = ACTIONS(67),
        [sym__newline] = ACTIONS(443),
        [sym__dedent] = ACTIONS(443),
    },
    [403] = {
        [sym_finally_clause] = STATE(406),
        [ts_builtin_sym_end] = ACTIONS(593),
        [anon_sym_SEMI] = ACTIONS(593),
        [anon_sym_print] = ACTIONS(591),
        [anon_sym_return] = ACTIONS(591),
        [anon_sym_del] = ACTIONS(591),
        [sym_pass_statement] = ACTIONS(591),
        [sym_break_statement] = ACTIONS(591),
        [sym_continue_statement] = ACTIONS(591),
        [anon_sym_if] = ACTIONS(591),
        [anon_sym_for] = ACTIONS(591),
        [anon_sym_while] = ACTIONS(591),
        [anon_sym_try] = ACTIONS(591),
        [anon_sym_finally] = ACTIONS(912),
        [anon_sym_with] = ACTIONS(591),
        [anon_sym_def] = ACTIONS(591),
        [anon_sym_class] = ACTIONS(591),
        [anon_sym_AT] = ACTIONS(593),
        [sym_number] = ACTIONS(591),
        [sym_identifier] = ACTIONS(595),
        [sym_comment] = ACTIONS(67),
        [sym__newline] = ACTIONS(593),
        [sym__dedent] = ACTIONS(593),
    },
    [404] = {
        [ts_builtin_sym_end] = ACTIONS(599),
        [anon_sym_SEMI] = ACTIONS(599),
        [anon_sym_print] = ACTIONS(597),
        [anon_sym_return] = ACTIONS(597),
        [anon_sym_del] = ACTIONS(597),
        [sym_pass_statement] = ACTIONS(597),
        [sym_break_statement] = ACTIONS(597),
        [sym_continue_statement] = ACTIONS(597),
        [anon_sym_if] = ACTIONS(597),
        [anon_sym_else] = ACTIONS(597),
        [anon_sym_for] = ACTIONS(597),
        [anon_sym_while] = ACTIONS(597),
        [anon_sym_try] = ACTIONS(597),
        [anon_sym_except] = ACTIONS(597),
        [anon_sym_finally] = ACTIONS(597),
        [anon_sym_with] = ACTIONS(597),
        [anon_sym_def] = ACTIONS(597),
        [anon_sym_class] = ACTIONS(597),
        [anon_sym_AT] = ACTIONS(599),
        [sym_number] = ACTIONS(597),
        [sym_identifier] = ACTIONS(601),
        [sym_comment] = ACTIONS(67),
        [sym__newline] = ACTIONS(599),
        [sym__dedent] = ACTIONS(599),
    },
    [405] = {
        [ts_builtin_sym_end] = ACTIONS(593),
        [anon_sym_SEMI] = ACTIONS(593),
        [anon_sym_print] = ACTIONS(591),
        [anon_sym_return] = ACTIONS(591),
        [anon_sym_del] = ACTIONS(591),
        [sym_pass_statement] = ACTIONS(591),
        [sym_break_statement] = ACTIONS(591),
        [sym_continue_statement] = ACTIONS(591),
        [anon_sym_if] = ACTIONS(591),
        [anon_sym_for] = ACTIONS(591),
        [anon_sym_while] = ACTIONS(591),
        [anon_sym_try] = ACTIONS(591),
        [anon_sym_with] = ACTIONS(591),
        [anon_sym_def] = ACTIONS(591),
        [anon_sym_class] = ACTIONS(591),
        [anon_sym_AT] = ACTIONS(593),
        [sym_number] = ACTIONS(591),
        [sym_identifier] = ACTIONS(595),
        [sym_comment] = ACTIONS(67),
        [sym__newline] = ACTIONS(593),
        [sym__dedent] = ACTIONS(593),
    },
    [406] = {
        [ts_builtin_sym_end] = ACTIONS(605),
        [anon_sym_SEMI] = ACTIONS(605),
        [anon_sym_print] = ACTIONS(603),
        [anon_sym_return] = ACTIONS(603),
        [anon_sym_del] = ACTIONS(603),
        [sym_pass_statement] = ACTIONS(603),
        [sym_break_statement] = ACTIONS(603),
        [sym_continue_statement] = ACTIONS(603),
        [anon_sym_if] = ACTIONS(603),
        [anon_sym_for] = ACTIONS(603),
        [anon_sym_while] = ACTIONS(603),
        [anon_sym_try] = ACTIONS(603),
        [anon_sym_with] = ACTIONS(603),
        [anon_sym_def] = ACTIONS(603),
        [anon_sym_class] = ACTIONS(603),
        [anon_sym_AT] = ACTIONS(605),
        [sym_number] = ACTIONS(603),
        [sym_identifier] = ACTIONS(607),
        [sym_comment] = ACTIONS(67),
        [sym__newline] = ACTIONS(605),
        [sym__dedent] = ACTIONS(605),
    },
    [407] = {
        [anon_sym_COLON] = ACTIONS(1186),
        [sym_comment] = ACTIONS(67),
    },
    [408] = {
        [ts_builtin_sym_end] = ACTIONS(695),
        [anon_sym_SEMI] = ACTIONS(695),
        [anon_sym_print] = ACTIONS(693),
        [anon_sym_return] = ACTIONS(693),
        [anon_sym_del] = ACTIONS(693),
        [sym_pass_statement] = ACTIONS(693),
        [sym_break_statement] = ACTIONS(693),
        [sym_continue_statement] = ACTIONS(693),
        [anon_sym_if] = ACTIONS(693),
        [anon_sym_elif] = ACTIONS(693),
        [anon_sym_else] = ACTIONS(693),
        [anon_sym_for] = ACTIONS(693),
        [anon_sym_while] = ACTIONS(693),
        [anon_sym_try] = ACTIONS(693),
        [anon_sym_with] = ACTIONS(693),
        [anon_sym_def] = ACTIONS(693),
        [anon_sym_class] = ACTIONS(693),
        [anon_sym_AT] = ACTIONS(695),
        [sym_number] = ACTIONS(693),
        [sym_identifier] = ACTIONS(697),
        [sym_comment] = ACTIONS(67),
        [sym__newline] = ACTIONS(695),
        [sym__dedent] = ACTIONS(695),
    },
    [409] = {
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
        [sym_number] = ACTIONS(699),
        [sym_identifier] = ACTIONS(703),
        [sym_comment] = ACTIONS(67),
        [sym__newline] = ACTIONS(701),
        [sym__dedent] = ACTIONS(701),
    },
    [410] = {
        [sym__simple_statement] = STATE(379),
        [sym_print_statement] = STATE(318),
        [sym_expression_statement] = STATE(318),
        [sym_return_statement] = STATE(318),
        [sym_delete_statement] = STATE(318),
        [sym__suite] = STATE(411),
        [sym__expression] = STATE(381),
        [sym_binary_operator] = STATE(341),
        [sym_subscript] = STATE(341),
        [anon_sym_print] = ACTIONS(1160),
        [anon_sym_return] = ACTIONS(1162),
        [anon_sym_del] = ACTIONS(1164),
        [sym_pass_statement] = ACTIONS(777),
        [sym_break_statement] = ACTIONS(777),
        [sym_continue_statement] = ACTIONS(777),
        [sym_number] = ACTIONS(755),
        [sym_identifier] = ACTIONS(779),
        [sym_comment] = ACTIONS(67),
        [sym__indent] = ACTIONS(781),
    },
    [411] = {
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
        [anon_sym_finally] = ACTIONS(609),
        [anon_sym_with] = ACTIONS(609),
        [anon_sym_def] = ACTIONS(609),
        [anon_sym_class] = ACTIONS(609),
        [anon_sym_AT] = ACTIONS(611),
        [sym_number] = ACTIONS(609),
        [sym_identifier] = ACTIONS(613),
        [sym_comment] = ACTIONS(67),
        [sym__newline] = ACTIONS(611),
        [sym__dedent] = ACTIONS(611),
    },
    [412] = {
        [sym__expression] = STATE(413),
        [sym_binary_operator] = STATE(341),
        [sym_subscript] = STATE(341),
        [sym_number] = ACTIONS(755),
        [sym_identifier] = ACTIONS(755),
        [sym_comment] = ACTIONS(67),
    },
    [413] = {
        [ts_builtin_sym_end] = ACTIONS(277),
        [anon_sym_SEMI] = ACTIONS(277),
        [anon_sym_print] = ACTIONS(421),
        [anon_sym_COMMA] = ACTIONS(277),
        [anon_sym_return] = ACTIONS(421),
        [anon_sym_del] = ACTIONS(421),
        [sym_pass_statement] = ACTIONS(421),
        [sym_break_statement] = ACTIONS(421),
        [sym_continue_statement] = ACTIONS(421),
        [anon_sym_if] = ACTIONS(421),
        [anon_sym_COLON] = ACTIONS(277),
        [anon_sym_elif] = ACTIONS(421),
        [anon_sym_else] = ACTIONS(421),
        [anon_sym_for] = ACTIONS(421),
        [anon_sym_in] = ACTIONS(421),
        [anon_sym_while] = ACTIONS(421),
        [anon_sym_try] = ACTIONS(421),
        [anon_sym_except] = ACTIONS(421),
        [anon_sym_finally] = ACTIONS(421),
        [anon_sym_with] = ACTIONS(421),
        [anon_sym_def] = ACTIONS(421),
        [anon_sym_RPAREN] = ACTIONS(277),
        [anon_sym_class] = ACTIONS(421),
        [anon_sym_AT] = ACTIONS(277),
        [anon_sym_PLUS] = ACTIONS(1188),
        [anon_sym_LBRACK] = ACTIONS(1168),
        [sym_number] = ACTIONS(421),
        [sym_identifier] = ACTIONS(423),
        [sym_comment] = ACTIONS(67),
        [sym__newline] = ACTIONS(277),
        [sym__dedent] = ACTIONS(277),
    },
    [414] = {
        [sym__expression] = STATE(415),
        [sym_binary_operator] = STATE(341),
        [sym_subscript] = STATE(341),
        [sym_number] = ACTIONS(755),
        [sym_identifier] = ACTIONS(755),
        [sym_comment] = ACTIONS(67),
    },
    [415] = {
        [ts_builtin_sym_end] = ACTIONS(239),
        [anon_sym_SEMI] = ACTIONS(239),
        [anon_sym_print] = ACTIONS(241),
        [anon_sym_COMMA] = ACTIONS(239),
        [anon_sym_return] = ACTIONS(241),
        [anon_sym_del] = ACTIONS(241),
        [sym_pass_statement] = ACTIONS(241),
        [sym_break_statement] = ACTIONS(241),
        [sym_continue_statement] = ACTIONS(241),
        [anon_sym_if] = ACTIONS(241),
        [anon_sym_COLON] = ACTIONS(239),
        [anon_sym_elif] = ACTIONS(241),
        [anon_sym_else] = ACTIONS(241),
        [anon_sym_for] = ACTIONS(241),
        [anon_sym_in] = ACTIONS(241),
        [anon_sym_while] = ACTIONS(241),
        [anon_sym_try] = ACTIONS(241),
        [anon_sym_except] = ACTIONS(241),
        [anon_sym_finally] = ACTIONS(241),
        [anon_sym_with] = ACTIONS(241),
        [anon_sym_def] = ACTIONS(241),
        [anon_sym_RPAREN] = ACTIONS(239),
        [anon_sym_class] = ACTIONS(241),
        [anon_sym_AT] = ACTIONS(239),
        [anon_sym_PLUS] = ACTIONS(1190),
        [anon_sym_LBRACK] = ACTIONS(1095),
        [sym_number] = ACTIONS(241),
        [sym_identifier] = ACTIONS(243),
        [sym_comment] = ACTIONS(67),
        [sym__newline] = ACTIONS(239),
        [sym__dedent] = ACTIONS(239),
    },
    [416] = {
        [ts_builtin_sym_end] = ACTIONS(179),
        [anon_sym_SEMI] = ACTIONS(179),
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
        [sym_number] = ACTIONS(181),
        [sym_identifier] = ACTIONS(183),
        [sym_comment] = ACTIONS(67),
        [sym__newline] = ACTIONS(179),
        [sym__dedent] = ACTIONS(179),
    },
    [417] = {
        [sym_comment] = ACTIONS(67),
        [sym__newline] = ACTIONS(1193),
    },
    [418] = {
        [ts_builtin_sym_end] = ACTIONS(245),
        [anon_sym_SEMI] = ACTIONS(245),
        [anon_sym_print] = ACTIONS(247),
        [anon_sym_return] = ACTIONS(247),
        [anon_sym_del] = ACTIONS(247),
        [sym_pass_statement] = ACTIONS(247),
        [sym_break_statement] = ACTIONS(247),
        [sym_continue_statement] = ACTIONS(247),
        [anon_sym_if] = ACTIONS(247),
        [anon_sym_for] = ACTIONS(247),
        [anon_sym_while] = ACTIONS(247),
        [anon_sym_try] = ACTIONS(247),
        [anon_sym_with] = ACTIONS(247),
        [anon_sym_def] = ACTIONS(247),
        [anon_sym_class] = ACTIONS(247),
        [anon_sym_AT] = ACTIONS(245),
        [sym_number] = ACTIONS(247),
        [sym_identifier] = ACTIONS(249),
        [sym_comment] = ACTIONS(67),
        [sym__newline] = ACTIONS(245),
        [sym__dedent] = ACTIONS(245),
    },
    [419] = {
        [sym__expression] = STATE(427),
        [sym_binary_operator] = STATE(341),
        [sym_subscript] = STATE(341),
        [anon_sym_DOT_DOT_DOT] = ACTIONS(195),
        [anon_sym_RBRACK] = ACTIONS(1156),
        [sym_number] = ACTIONS(755),
        [sym_identifier] = ACTIONS(755),
        [sym_comment] = ACTIONS(67),
    },
    [420] = {
        [sym__simple_statement] = STATE(379),
        [sym_print_statement] = STATE(318),
        [sym_expression_statement] = STATE(318),
        [sym_return_statement] = STATE(318),
        [sym_delete_statement] = STATE(318),
        [sym__suite] = STATE(421),
        [sym__expression] = STATE(422),
        [sym_binary_operator] = STATE(341),
        [sym_subscript] = STATE(341),
        [anon_sym_print] = ACTIONS(771),
        [anon_sym_return] = ACTIONS(773),
        [anon_sym_del] = ACTIONS(775),
        [sym_pass_statement] = ACTIONS(777),
        [sym_break_statement] = ACTIONS(777),
        [sym_continue_statement] = ACTIONS(777),
        [sym_number] = ACTIONS(755),
        [sym_identifier] = ACTIONS(779),
        [sym_comment] = ACTIONS(67),
        [sym__indent] = ACTIONS(781),
    },
    [421] = {
        [sym_elif_clause] = STATE(425),
        [sym_else_clause] = STATE(426),
        [aux_sym_if_statement_repeat1] = STATE(366),
        [ts_builtin_sym_end] = ACTIONS(1195),
        [anon_sym_SEMI] = ACTIONS(1195),
        [anon_sym_print] = ACTIONS(1201),
        [anon_sym_return] = ACTIONS(1201),
        [anon_sym_del] = ACTIONS(1201),
        [sym_pass_statement] = ACTIONS(1201),
        [sym_break_statement] = ACTIONS(1201),
        [sym_continue_statement] = ACTIONS(1201),
        [anon_sym_if] = ACTIONS(1201),
        [anon_sym_elif] = ACTIONS(999),
        [anon_sym_else] = ACTIONS(1002),
        [anon_sym_for] = ACTIONS(1201),
        [anon_sym_while] = ACTIONS(1201),
        [anon_sym_try] = ACTIONS(1201),
        [anon_sym_except] = ACTIONS(1207),
        [anon_sym_finally] = ACTIONS(1207),
        [anon_sym_with] = ACTIONS(1201),
        [anon_sym_def] = ACTIONS(1201),
        [anon_sym_class] = ACTIONS(1201),
        [anon_sym_AT] = ACTIONS(1195),
        [sym_number] = ACTIONS(1201),
        [sym_identifier] = ACTIONS(1210),
        [sym_comment] = ACTIONS(67),
        [sym__newline] = ACTIONS(1195),
        [sym__dedent] = ACTIONS(1195),
    },
    [422] = {
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
        [anon_sym_class] = ACTIONS(153),
        [anon_sym_AT] = ACTIONS(151),
        [anon_sym_PLUS] = ACTIONS(1216),
        [anon_sym_LBRACK] = ACTIONS(1168),
        [sym_number] = ACTIONS(153),
        [sym_identifier] = ACTIONS(159),
        [sym_comment] = ACTIONS(67),
        [sym__newline] = ACTIONS(151),
        [sym__dedent] = ACTIONS(151),
    },
    [423] = {
        [sym__expression] = STATE(424),
        [sym_binary_operator] = STATE(341),
        [sym_subscript] = STATE(341),
        [sym_number] = ACTIONS(755),
        [sym_identifier] = ACTIONS(755),
        [sym_comment] = ACTIONS(67),
    },
    [424] = {
        [ts_builtin_sym_end] = ACTIONS(239),
        [anon_sym_SEMI] = ACTIONS(239),
        [anon_sym_print] = ACTIONS(241),
        [anon_sym_return] = ACTIONS(241),
        [anon_sym_del] = ACTIONS(241),
        [sym_pass_statement] = ACTIONS(241),
        [sym_break_statement] = ACTIONS(241),
        [sym_continue_statement] = ACTIONS(241),
        [anon_sym_if] = ACTIONS(241),
        [anon_sym_elif] = ACTIONS(241),
        [anon_sym_else] = ACTIONS(241),
        [anon_sym_for] = ACTIONS(241),
        [anon_sym_while] = ACTIONS(241),
        [anon_sym_try] = ACTIONS(241),
        [anon_sym_except] = ACTIONS(241),
        [anon_sym_finally] = ACTIONS(241),
        [anon_sym_with] = ACTIONS(241),
        [anon_sym_def] = ACTIONS(241),
        [anon_sym_class] = ACTIONS(241),
        [anon_sym_AT] = ACTIONS(239),
        [anon_sym_PLUS] = ACTIONS(1218),
        [anon_sym_LBRACK] = ACTIONS(1095),
        [sym_number] = ACTIONS(241),
        [sym_identifier] = ACTIONS(243),
        [sym_comment] = ACTIONS(67),
        [sym__newline] = ACTIONS(239),
        [sym__dedent] = ACTIONS(239),
    },
    [425] = {
        [ts_builtin_sym_end] = ACTIONS(683),
        [anon_sym_SEMI] = ACTIONS(683),
        [anon_sym_print] = ACTIONS(681),
        [anon_sym_return] = ACTIONS(681),
        [anon_sym_del] = ACTIONS(681),
        [sym_pass_statement] = ACTIONS(681),
        [sym_break_statement] = ACTIONS(681),
        [sym_continue_statement] = ACTIONS(681),
        [anon_sym_if] = ACTIONS(681),
        [anon_sym_elif] = ACTIONS(681),
        [anon_sym_else] = ACTIONS(681),
        [anon_sym_for] = ACTIONS(681),
        [anon_sym_while] = ACTIONS(681),
        [anon_sym_try] = ACTIONS(681),
        [anon_sym_with] = ACTIONS(681),
        [anon_sym_def] = ACTIONS(681),
        [anon_sym_class] = ACTIONS(681),
        [anon_sym_AT] = ACTIONS(683),
        [sym_number] = ACTIONS(681),
        [sym_identifier] = ACTIONS(685),
        [sym_comment] = ACTIONS(67),
        [sym__newline] = ACTIONS(683),
        [sym__dedent] = ACTIONS(683),
    },
    [426] = {
        [ts_builtin_sym_end] = ACTIONS(1221),
        [anon_sym_SEMI] = ACTIONS(1221),
        [anon_sym_print] = ACTIONS(1224),
        [anon_sym_return] = ACTIONS(1224),
        [anon_sym_del] = ACTIONS(1224),
        [sym_pass_statement] = ACTIONS(1224),
        [sym_break_statement] = ACTIONS(1224),
        [sym_continue_statement] = ACTIONS(1224),
        [anon_sym_if] = ACTIONS(1224),
        [anon_sym_for] = ACTIONS(1224),
        [anon_sym_while] = ACTIONS(1224),
        [anon_sym_try] = ACTIONS(1224),
        [anon_sym_with] = ACTIONS(1224),
        [anon_sym_def] = ACTIONS(1224),
        [anon_sym_class] = ACTIONS(1224),
        [anon_sym_AT] = ACTIONS(1221),
        [sym_number] = ACTIONS(1224),
        [sym_identifier] = ACTIONS(1227),
        [sym_comment] = ACTIONS(67),
        [sym__newline] = ACTIONS(1221),
        [sym__dedent] = ACTIONS(1221),
    },
    [427] = {
        [ts_builtin_sym_end] = ACTIONS(279),
        [anon_sym_SEMI] = ACTIONS(279),
        [anon_sym_print] = ACTIONS(425),
        [anon_sym_COMMA] = ACTIONS(1230),
        [anon_sym_return] = ACTIONS(425),
        [anon_sym_del] = ACTIONS(425),
        [sym_pass_statement] = ACTIONS(425),
        [sym_break_statement] = ACTIONS(425),
        [sym_continue_statement] = ACTIONS(425),
        [anon_sym_if] = ACTIONS(425),
        [anon_sym_COLON] = ACTIONS(1233),
        [anon_sym_elif] = ACTIONS(425),
        [anon_sym_else] = ACTIONS(425),
        [anon_sym_for] = ACTIONS(425),
        [anon_sym_in] = ACTIONS(425),
        [anon_sym_while] = ACTIONS(425),
        [anon_sym_try] = ACTIONS(425),
        [anon_sym_except] = ACTIONS(425),
        [anon_sym_finally] = ACTIONS(425),
        [anon_sym_with] = ACTIONS(425),
        [anon_sym_def] = ACTIONS(425),
        [anon_sym_RPAREN] = ACTIONS(279),
        [anon_sym_class] = ACTIONS(425),
        [anon_sym_AT] = ACTIONS(279),
        [anon_sym_PLUS] = ACTIONS(1236),
        [anon_sym_LBRACK] = ACTIONS(1168),
        [anon_sym_RBRACK] = ACTIONS(237),
        [sym_number] = ACTIONS(425),
        [sym_identifier] = ACTIONS(427),
        [sym_comment] = ACTIONS(67),
        [sym__newline] = ACTIONS(279),
        [sym__dedent] = ACTIONS(279),
    },
    [428] = {
        [sym__simple_statement] = STATE(379),
        [sym_print_statement] = STATE(318),
        [sym_expression_statement] = STATE(318),
        [sym_return_statement] = STATE(318),
        [sym_delete_statement] = STATE(318),
        [sym__suite] = STATE(434),
        [sym__expression] = STATE(435),
        [sym_binary_operator] = STATE(341),
        [sym_subscript] = STATE(341),
        [anon_sym_print] = ACTIONS(1238),
        [anon_sym_return] = ACTIONS(1240),
        [anon_sym_del] = ACTIONS(1242),
        [sym_pass_statement] = ACTIONS(777),
        [sym_break_statement] = ACTIONS(777),
        [sym_continue_statement] = ACTIONS(777),
        [sym_number] = ACTIONS(755),
        [sym_identifier] = ACTIONS(779),
        [sym_comment] = ACTIONS(67),
        [sym__indent] = ACTIONS(781),
    },
    [429] = {
        [sym__expression] = STATE(430),
        [sym_binary_operator] = STATE(341),
        [sym_subscript] = STATE(341),
        [sym_number] = ACTIONS(755),
        [sym_identifier] = ACTIONS(755),
        [sym_comment] = ACTIONS(67),
    },
    [430] = {
        [ts_builtin_sym_end] = ACTIONS(239),
        [anon_sym_SEMI] = ACTIONS(239),
        [anon_sym_print] = ACTIONS(241),
        [anon_sym_COMMA] = ACTIONS(239),
        [anon_sym_return] = ACTIONS(241),
        [anon_sym_del] = ACTIONS(241),
        [sym_pass_statement] = ACTIONS(241),
        [sym_break_statement] = ACTIONS(241),
        [sym_continue_statement] = ACTIONS(241),
        [anon_sym_if] = ACTIONS(241),
        [anon_sym_COLON] = ACTIONS(239),
        [anon_sym_elif] = ACTIONS(241),
        [anon_sym_else] = ACTIONS(241),
        [anon_sym_for] = ACTIONS(241),
        [anon_sym_in] = ACTIONS(241),
        [anon_sym_while] = ACTIONS(241),
        [anon_sym_try] = ACTIONS(241),
        [anon_sym_except] = ACTIONS(241),
        [anon_sym_finally] = ACTIONS(241),
        [anon_sym_with] = ACTIONS(241),
        [anon_sym_def] = ACTIONS(241),
        [anon_sym_RPAREN] = ACTIONS(239),
        [anon_sym_class] = ACTIONS(241),
        [anon_sym_AT] = ACTIONS(239),
        [anon_sym_PLUS] = ACTIONS(1244),
        [anon_sym_LBRACK] = ACTIONS(1095),
        [anon_sym_RBRACK] = ACTIONS(239),
        [sym_number] = ACTIONS(241),
        [sym_identifier] = ACTIONS(243),
        [sym_comment] = ACTIONS(67),
        [sym__newline] = ACTIONS(239),
        [sym__dedent] = ACTIONS(239),
    },
    [431] = {
        [sym__expression] = STATE(446),
        [sym_binary_operator] = STATE(341),
        [sym_subscript] = STATE(341),
        [sym_number] = ACTIONS(755),
        [sym_identifier] = ACTIONS(755),
        [sym_comment] = ACTIONS(67),
    },
    [432] = {
        [sym_expression_list] = STATE(400),
        [sym__expression] = STATE(438),
        [sym_binary_operator] = STATE(341),
        [sym_subscript] = STATE(341),
        [sym_number] = ACTIONS(755),
        [sym_identifier] = ACTIONS(755),
        [sym_comment] = ACTIONS(67),
    },
    [433] = {
        [sym_expression_list] = STATE(391),
        [sym__expression] = STATE(438),
        [sym_binary_operator] = STATE(341),
        [sym_subscript] = STATE(341),
        [sym_number] = ACTIONS(755),
        [sym_identifier] = ACTIONS(755),
        [sym_comment] = ACTIONS(67),
    },
    [434] = {
        [ts_builtin_sym_end] = ACTIONS(629),
        [anon_sym_SEMI] = ACTIONS(629),
        [anon_sym_print] = ACTIONS(627),
        [anon_sym_return] = ACTIONS(627),
        [anon_sym_del] = ACTIONS(627),
        [sym_pass_statement] = ACTIONS(627),
        [sym_break_statement] = ACTIONS(627),
        [sym_continue_statement] = ACTIONS(627),
        [anon_sym_if] = ACTIONS(627),
        [anon_sym_else] = ACTIONS(627),
        [anon_sym_for] = ACTIONS(627),
        [anon_sym_while] = ACTIONS(627),
        [anon_sym_try] = ACTIONS(627),
        [anon_sym_except] = ACTIONS(627),
        [anon_sym_finally] = ACTIONS(627),
        [anon_sym_with] = ACTIONS(627),
        [anon_sym_def] = ACTIONS(627),
        [anon_sym_class] = ACTIONS(627),
        [anon_sym_AT] = ACTIONS(629),
        [sym_number] = ACTIONS(627),
        [sym_identifier] = ACTIONS(631),
        [sym_comment] = ACTIONS(67),
        [sym__newline] = ACTIONS(629),
        [sym__dedent] = ACTIONS(629),
    },
    [435] = {
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
        [anon_sym_class] = ACTIONS(153),
        [anon_sym_AT] = ACTIONS(151),
        [anon_sym_PLUS] = ACTIONS(1247),
        [anon_sym_LBRACK] = ACTIONS(1168),
        [sym_number] = ACTIONS(153),
        [sym_identifier] = ACTIONS(159),
        [sym_comment] = ACTIONS(67),
        [sym__newline] = ACTIONS(151),
        [sym__dedent] = ACTIONS(151),
    },
    [436] = {
        [sym__expression] = STATE(437),
        [sym_binary_operator] = STATE(341),
        [sym_subscript] = STATE(341),
        [sym_number] = ACTIONS(755),
        [sym_identifier] = ACTIONS(755),
        [sym_comment] = ACTIONS(67),
    },
    [437] = {
        [ts_builtin_sym_end] = ACTIONS(239),
        [anon_sym_SEMI] = ACTIONS(239),
        [anon_sym_print] = ACTIONS(241),
        [anon_sym_return] = ACTIONS(241),
        [anon_sym_del] = ACTIONS(241),
        [sym_pass_statement] = ACTIONS(241),
        [sym_break_statement] = ACTIONS(241),
        [sym_continue_statement] = ACTIONS(241),
        [anon_sym_if] = ACTIONS(241),
        [anon_sym_else] = ACTIONS(241),
        [anon_sym_for] = ACTIONS(241),
        [anon_sym_while] = ACTIONS(241),
        [anon_sym_try] = ACTIONS(241),
        [anon_sym_except] = ACTIONS(241),
        [anon_sym_finally] = ACTIONS(241),
        [anon_sym_with] = ACTIONS(241),
        [anon_sym_def] = ACTIONS(241),
        [anon_sym_class] = ACTIONS(241),
        [anon_sym_AT] = ACTIONS(239),
        [anon_sym_PLUS] = ACTIONS(1249),
        [anon_sym_LBRACK] = ACTIONS(1095),
        [sym_number] = ACTIONS(241),
        [sym_identifier] = ACTIONS(243),
        [sym_comment] = ACTIONS(67),
        [sym__newline] = ACTIONS(239),
        [sym__dedent] = ACTIONS(239),
    },
    [438] = {
        [aux_sym_print_statement_repeat1] = STATE(441),
        [ts_builtin_sym_end] = ACTIONS(301),
        [anon_sym_SEMI] = ACTIONS(301),
        [anon_sym_print] = ACTIONS(409),
        [anon_sym_COMMA] = ACTIONS(1252),
        [anon_sym_return] = ACTIONS(409),
        [anon_sym_del] = ACTIONS(409),
        [sym_pass_statement] = ACTIONS(409),
        [sym_break_statement] = ACTIONS(409),
        [sym_continue_statement] = ACTIONS(409),
        [anon_sym_if] = ACTIONS(409),
        [anon_sym_else] = ACTIONS(409),
        [anon_sym_for] = ACTIONS(409),
        [anon_sym_while] = ACTIONS(409),
        [anon_sym_try] = ACTIONS(409),
        [anon_sym_except] = ACTIONS(409),
        [anon_sym_finally] = ACTIONS(409),
        [anon_sym_with] = ACTIONS(409),
        [anon_sym_def] = ACTIONS(409),
        [anon_sym_class] = ACTIONS(409),
        [anon_sym_AT] = ACTIONS(301),
        [anon_sym_PLUS] = ACTIONS(1254),
        [anon_sym_LBRACK] = ACTIONS(1168),
        [sym_number] = ACTIONS(409),
        [sym_identifier] = ACTIONS(413),
        [sym_comment] = ACTIONS(67),
        [sym__newline] = ACTIONS(301),
        [sym__dedent] = ACTIONS(301),
    },
    [439] = {
        [sym__expression] = STATE(445),
        [sym_binary_operator] = STATE(341),
        [sym_subscript] = STATE(341),
        [sym_number] = ACTIONS(755),
        [sym_identifier] = ACTIONS(755),
        [sym_comment] = ACTIONS(67),
    },
    [440] = {
        [sym__expression] = STATE(444),
        [sym_binary_operator] = STATE(341),
        [sym_subscript] = STATE(341),
        [sym_number] = ACTIONS(755),
        [sym_identifier] = ACTIONS(755),
        [sym_comment] = ACTIONS(67),
    },
    [441] = {
        [ts_builtin_sym_end] = ACTIONS(303),
        [anon_sym_SEMI] = ACTIONS(303),
        [anon_sym_print] = ACTIONS(415),
        [anon_sym_COMMA] = ACTIONS(1256),
        [anon_sym_return] = ACTIONS(415),
        [anon_sym_del] = ACTIONS(415),
        [sym_pass_statement] = ACTIONS(415),
        [sym_break_statement] = ACTIONS(415),
        [sym_continue_statement] = ACTIONS(415),
        [anon_sym_if] = ACTIONS(415),
        [anon_sym_else] = ACTIONS(415),
        [anon_sym_for] = ACTIONS(415),
        [anon_sym_while] = ACTIONS(415),
        [anon_sym_try] = ACTIONS(415),
        [anon_sym_except] = ACTIONS(415),
        [anon_sym_finally] = ACTIONS(415),
        [anon_sym_with] = ACTIONS(415),
        [anon_sym_def] = ACTIONS(415),
        [anon_sym_class] = ACTIONS(415),
        [anon_sym_AT] = ACTIONS(303),
        [sym_number] = ACTIONS(415),
        [sym_identifier] = ACTIONS(419),
        [sym_comment] = ACTIONS(67),
        [sym__newline] = ACTIONS(303),
        [sym__dedent] = ACTIONS(303),
    },
    [442] = {
        [sym__expression] = STATE(443),
        [sym_binary_operator] = STATE(341),
        [sym_subscript] = STATE(341),
        [sym_number] = ACTIONS(755),
        [sym_identifier] = ACTIONS(755),
        [sym_comment] = ACTIONS(67),
    },
    [443] = {
        [ts_builtin_sym_end] = ACTIONS(277),
        [anon_sym_SEMI] = ACTIONS(277),
        [anon_sym_print] = ACTIONS(421),
        [anon_sym_COMMA] = ACTIONS(277),
        [anon_sym_return] = ACTIONS(421),
        [anon_sym_del] = ACTIONS(421),
        [sym_pass_statement] = ACTIONS(421),
        [sym_break_statement] = ACTIONS(421),
        [sym_continue_statement] = ACTIONS(421),
        [anon_sym_if] = ACTIONS(421),
        [anon_sym_else] = ACTIONS(421),
        [anon_sym_for] = ACTIONS(421),
        [anon_sym_while] = ACTIONS(421),
        [anon_sym_try] = ACTIONS(421),
        [anon_sym_except] = ACTIONS(421),
        [anon_sym_finally] = ACTIONS(421),
        [anon_sym_with] = ACTIONS(421),
        [anon_sym_def] = ACTIONS(421),
        [anon_sym_class] = ACTIONS(421),
        [anon_sym_AT] = ACTIONS(277),
        [anon_sym_PLUS] = ACTIONS(1254),
        [anon_sym_LBRACK] = ACTIONS(1168),
        [sym_number] = ACTIONS(421),
        [sym_identifier] = ACTIONS(423),
        [sym_comment] = ACTIONS(67),
        [sym__newline] = ACTIONS(277),
        [sym__dedent] = ACTIONS(277),
    },
    [444] = {
        [ts_builtin_sym_end] = ACTIONS(239),
        [anon_sym_SEMI] = ACTIONS(239),
        [anon_sym_print] = ACTIONS(241),
        [anon_sym_COMMA] = ACTIONS(239),
        [anon_sym_return] = ACTIONS(241),
        [anon_sym_del] = ACTIONS(241),
        [sym_pass_statement] = ACTIONS(241),
        [sym_break_statement] = ACTIONS(241),
        [sym_continue_statement] = ACTIONS(241),
        [anon_sym_if] = ACTIONS(241),
        [anon_sym_else] = ACTIONS(241),
        [anon_sym_for] = ACTIONS(241),
        [anon_sym_while] = ACTIONS(241),
        [anon_sym_try] = ACTIONS(241),
        [anon_sym_except] = ACTIONS(241),
        [anon_sym_finally] = ACTIONS(241),
        [anon_sym_with] = ACTIONS(241),
        [anon_sym_def] = ACTIONS(241),
        [anon_sym_class] = ACTIONS(241),
        [anon_sym_AT] = ACTIONS(239),
        [anon_sym_PLUS] = ACTIONS(1258),
        [anon_sym_LBRACK] = ACTIONS(1095),
        [sym_number] = ACTIONS(241),
        [sym_identifier] = ACTIONS(243),
        [sym_comment] = ACTIONS(67),
        [sym__newline] = ACTIONS(239),
        [sym__dedent] = ACTIONS(239),
    },
    [445] = {
        [ts_builtin_sym_end] = ACTIONS(279),
        [anon_sym_SEMI] = ACTIONS(279),
        [anon_sym_print] = ACTIONS(425),
        [anon_sym_COMMA] = ACTIONS(279),
        [anon_sym_return] = ACTIONS(425),
        [anon_sym_del] = ACTIONS(425),
        [sym_pass_statement] = ACTIONS(425),
        [sym_break_statement] = ACTIONS(425),
        [sym_continue_statement] = ACTIONS(425),
        [anon_sym_if] = ACTIONS(425),
        [anon_sym_else] = ACTIONS(425),
        [anon_sym_for] = ACTIONS(425),
        [anon_sym_while] = ACTIONS(425),
        [anon_sym_try] = ACTIONS(425),
        [anon_sym_except] = ACTIONS(425),
        [anon_sym_finally] = ACTIONS(425),
        [anon_sym_with] = ACTIONS(425),
        [anon_sym_def] = ACTIONS(425),
        [anon_sym_class] = ACTIONS(425),
        [anon_sym_AT] = ACTIONS(279),
        [anon_sym_PLUS] = ACTIONS(1254),
        [anon_sym_LBRACK] = ACTIONS(1168),
        [sym_number] = ACTIONS(425),
        [sym_identifier] = ACTIONS(427),
        [sym_comment] = ACTIONS(67),
        [sym__newline] = ACTIONS(279),
        [sym__dedent] = ACTIONS(279),
    },
    [446] = {
        [aux_sym_print_statement_repeat1] = STATE(447),
        [ts_builtin_sym_end] = ACTIONS(437),
        [anon_sym_SEMI] = ACTIONS(437),
        [anon_sym_print] = ACTIONS(435),
        [anon_sym_COMMA] = ACTIONS(1252),
        [anon_sym_return] = ACTIONS(435),
        [anon_sym_del] = ACTIONS(435),
        [sym_pass_statement] = ACTIONS(435),
        [sym_break_statement] = ACTIONS(435),
        [sym_continue_statement] = ACTIONS(435),
        [anon_sym_if] = ACTIONS(435),
        [anon_sym_else] = ACTIONS(435),
        [anon_sym_for] = ACTIONS(435),
        [anon_sym_while] = ACTIONS(435),
        [anon_sym_try] = ACTIONS(435),
        [anon_sym_except] = ACTIONS(435),
        [anon_sym_finally] = ACTIONS(435),
        [anon_sym_with] = ACTIONS(435),
        [anon_sym_def] = ACTIONS(435),
        [anon_sym_class] = ACTIONS(435),
        [anon_sym_AT] = ACTIONS(437),
        [anon_sym_PLUS] = ACTIONS(1254),
        [anon_sym_LBRACK] = ACTIONS(1168),
        [sym_number] = ACTIONS(435),
        [sym_identifier] = ACTIONS(439),
        [sym_comment] = ACTIONS(67),
        [sym__newline] = ACTIONS(437),
        [sym__dedent] = ACTIONS(437),
    },
    [447] = {
        [ts_builtin_sym_end] = ACTIONS(443),
        [anon_sym_SEMI] = ACTIONS(443),
        [anon_sym_print] = ACTIONS(441),
        [anon_sym_COMMA] = ACTIONS(1256),
        [anon_sym_return] = ACTIONS(441),
        [anon_sym_del] = ACTIONS(441),
        [sym_pass_statement] = ACTIONS(441),
        [sym_break_statement] = ACTIONS(441),
        [sym_continue_statement] = ACTIONS(441),
        [anon_sym_if] = ACTIONS(441),
        [anon_sym_else] = ACTIONS(441),
        [anon_sym_for] = ACTIONS(441),
        [anon_sym_while] = ACTIONS(441),
        [anon_sym_try] = ACTIONS(441),
        [anon_sym_except] = ACTIONS(441),
        [anon_sym_finally] = ACTIONS(441),
        [anon_sym_with] = ACTIONS(441),
        [anon_sym_def] = ACTIONS(441),
        [anon_sym_class] = ACTIONS(441),
        [anon_sym_AT] = ACTIONS(443),
        [sym_number] = ACTIONS(441),
        [sym_identifier] = ACTIONS(445),
        [sym_comment] = ACTIONS(67),
        [sym__newline] = ACTIONS(443),
        [sym__dedent] = ACTIONS(443),
    },
    [448] = {
        [sym__simple_statement] = STATE(379),
        [sym_print_statement] = STATE(318),
        [sym_expression_statement] = STATE(318),
        [sym_return_statement] = STATE(318),
        [sym_delete_statement] = STATE(318),
        [sym__suite] = STATE(455),
        [sym__expression] = STATE(456),
        [sym_binary_operator] = STATE(341),
        [sym_subscript] = STATE(341),
        [anon_sym_print] = ACTIONS(1261),
        [anon_sym_return] = ACTIONS(1263),
        [anon_sym_del] = ACTIONS(1265),
        [sym_pass_statement] = ACTIONS(777),
        [sym_break_statement] = ACTIONS(777),
        [sym_continue_statement] = ACTIONS(777),
        [sym_number] = ACTIONS(755),
        [sym_identifier] = ACTIONS(779),
        [sym_comment] = ACTIONS(67),
        [sym__indent] = ACTIONS(781),
    },
    [449] = {
        [anon_sym_COLON] = ACTIONS(1267),
        [sym_comment] = ACTIONS(67),
    },
    [450] = {
        [sym__simple_statement] = STATE(379),
        [sym_print_statement] = STATE(318),
        [sym_expression_statement] = STATE(318),
        [sym_return_statement] = STATE(318),
        [sym_delete_statement] = STATE(318),
        [sym__suite] = STATE(451),
        [sym__expression] = STATE(381),
        [sym_binary_operator] = STATE(341),
        [sym_subscript] = STATE(341),
        [anon_sym_print] = ACTIONS(1160),
        [anon_sym_return] = ACTIONS(1162),
        [anon_sym_del] = ACTIONS(1164),
        [sym_pass_statement] = ACTIONS(777),
        [sym_break_statement] = ACTIONS(777),
        [sym_continue_statement] = ACTIONS(777),
        [sym_number] = ACTIONS(755),
        [sym_identifier] = ACTIONS(779),
        [sym_comment] = ACTIONS(67),
        [sym__indent] = ACTIONS(781),
    },
    [451] = {
        [ts_builtin_sym_end] = ACTIONS(329),
        [anon_sym_SEMI] = ACTIONS(329),
        [anon_sym_print] = ACTIONS(331),
        [anon_sym_return] = ACTIONS(331),
        [anon_sym_del] = ACTIONS(331),
        [sym_pass_statement] = ACTIONS(331),
        [sym_break_statement] = ACTIONS(331),
        [sym_continue_statement] = ACTIONS(331),
        [anon_sym_if] = ACTIONS(331),
        [anon_sym_for] = ACTIONS(331),
        [anon_sym_while] = ACTIONS(331),
        [anon_sym_try] = ACTIONS(331),
        [anon_sym_with] = ACTIONS(331),
        [anon_sym_def] = ACTIONS(331),
        [anon_sym_class] = ACTIONS(331),
        [anon_sym_AT] = ACTIONS(329),
        [sym_number] = ACTIONS(331),
        [sym_identifier] = ACTIONS(333),
        [sym_comment] = ACTIONS(67),
        [sym__newline] = ACTIONS(329),
        [sym__dedent] = ACTIONS(329),
    },
    [452] = {
        [sym__expression] = STATE(468),
        [sym_binary_operator] = STATE(341),
        [sym_subscript] = STATE(341),
        [sym_number] = ACTIONS(755),
        [sym_identifier] = ACTIONS(755),
        [sym_comment] = ACTIONS(67),
    },
    [453] = {
        [sym_expression_list] = STATE(400),
        [sym__expression] = STATE(460),
        [sym_binary_operator] = STATE(341),
        [sym_subscript] = STATE(341),
        [sym_number] = ACTIONS(755),
        [sym_identifier] = ACTIONS(755),
        [sym_comment] = ACTIONS(67),
    },
    [454] = {
        [sym_expression_list] = STATE(391),
        [sym__expression] = STATE(460),
        [sym_binary_operator] = STATE(341),
        [sym_subscript] = STATE(341),
        [sym_number] = ACTIONS(755),
        [sym_identifier] = ACTIONS(755),
        [sym_comment] = ACTIONS(67),
    },
    [455] = {
        [sym_else_clause] = STATE(459),
        [ts_builtin_sym_end] = ACTIONS(661),
        [anon_sym_SEMI] = ACTIONS(661),
        [anon_sym_print] = ACTIONS(659),
        [anon_sym_return] = ACTIONS(659),
        [anon_sym_del] = ACTIONS(659),
        [sym_pass_statement] = ACTIONS(659),
        [sym_break_statement] = ACTIONS(659),
        [sym_continue_statement] = ACTIONS(659),
        [anon_sym_if] = ACTIONS(659),
        [anon_sym_else] = ACTIONS(1142),
        [anon_sym_for] = ACTIONS(659),
        [anon_sym_while] = ACTIONS(659),
        [anon_sym_try] = ACTIONS(659),
        [anon_sym_with] = ACTIONS(659),
        [anon_sym_def] = ACTIONS(659),
        [anon_sym_class] = ACTIONS(659),
        [anon_sym_AT] = ACTIONS(661),
        [sym_number] = ACTIONS(659),
        [sym_identifier] = ACTIONS(663),
        [sym_comment] = ACTIONS(67),
        [sym__newline] = ACTIONS(661),
        [sym__dedent] = ACTIONS(661),
    },
    [456] = {
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
        [anon_sym_class] = ACTIONS(153),
        [anon_sym_AT] = ACTIONS(151),
        [anon_sym_PLUS] = ACTIONS(1269),
        [anon_sym_LBRACK] = ACTIONS(1168),
        [sym_number] = ACTIONS(153),
        [sym_identifier] = ACTIONS(159),
        [sym_comment] = ACTIONS(67),
        [sym__newline] = ACTIONS(151),
        [sym__dedent] = ACTIONS(151),
    },
    [457] = {
        [sym__expression] = STATE(458),
        [sym_binary_operator] = STATE(341),
        [sym_subscript] = STATE(341),
        [sym_number] = ACTIONS(755),
        [sym_identifier] = ACTIONS(755),
        [sym_comment] = ACTIONS(67),
    },
    [458] = {
        [ts_builtin_sym_end] = ACTIONS(239),
        [anon_sym_SEMI] = ACTIONS(239),
        [anon_sym_print] = ACTIONS(241),
        [anon_sym_return] = ACTIONS(241),
        [anon_sym_del] = ACTIONS(241),
        [sym_pass_statement] = ACTIONS(241),
        [sym_break_statement] = ACTIONS(241),
        [sym_continue_statement] = ACTIONS(241),
        [anon_sym_if] = ACTIONS(241),
        [anon_sym_else] = ACTIONS(241),
        [anon_sym_for] = ACTIONS(241),
        [anon_sym_while] = ACTIONS(241),
        [anon_sym_try] = ACTIONS(241),
        [anon_sym_with] = ACTIONS(241),
        [anon_sym_def] = ACTIONS(241),
        [anon_sym_class] = ACTIONS(241),
        [anon_sym_AT] = ACTIONS(239),
        [anon_sym_PLUS] = ACTIONS(1271),
        [anon_sym_LBRACK] = ACTIONS(1095),
        [sym_number] = ACTIONS(241),
        [sym_identifier] = ACTIONS(243),
        [sym_comment] = ACTIONS(67),
        [sym__newline] = ACTIONS(239),
        [sym__dedent] = ACTIONS(239),
    },
    [459] = {
        [ts_builtin_sym_end] = ACTIONS(667),
        [anon_sym_SEMI] = ACTIONS(667),
        [anon_sym_print] = ACTIONS(665),
        [anon_sym_return] = ACTIONS(665),
        [anon_sym_del] = ACTIONS(665),
        [sym_pass_statement] = ACTIONS(665),
        [sym_break_statement] = ACTIONS(665),
        [sym_continue_statement] = ACTIONS(665),
        [anon_sym_if] = ACTIONS(665),
        [anon_sym_for] = ACTIONS(665),
        [anon_sym_while] = ACTIONS(665),
        [anon_sym_try] = ACTIONS(665),
        [anon_sym_with] = ACTIONS(665),
        [anon_sym_def] = ACTIONS(665),
        [anon_sym_class] = ACTIONS(665),
        [anon_sym_AT] = ACTIONS(667),
        [sym_number] = ACTIONS(665),
        [sym_identifier] = ACTIONS(669),
        [sym_comment] = ACTIONS(67),
        [sym__newline] = ACTIONS(667),
        [sym__dedent] = ACTIONS(667),
    },
    [460] = {
        [aux_sym_print_statement_repeat1] = STATE(463),
        [ts_builtin_sym_end] = ACTIONS(301),
        [anon_sym_SEMI] = ACTIONS(301),
        [anon_sym_print] = ACTIONS(409),
        [anon_sym_COMMA] = ACTIONS(1274),
        [anon_sym_return] = ACTIONS(409),
        [anon_sym_del] = ACTIONS(409),
        [sym_pass_statement] = ACTIONS(409),
        [sym_break_statement] = ACTIONS(409),
        [sym_continue_statement] = ACTIONS(409),
        [anon_sym_if] = ACTIONS(409),
        [anon_sym_else] = ACTIONS(409),
        [anon_sym_for] = ACTIONS(409),
        [anon_sym_while] = ACTIONS(409),
        [anon_sym_try] = ACTIONS(409),
        [anon_sym_with] = ACTIONS(409),
        [anon_sym_def] = ACTIONS(409),
        [anon_sym_class] = ACTIONS(409),
        [anon_sym_AT] = ACTIONS(301),
        [anon_sym_PLUS] = ACTIONS(1276),
        [anon_sym_LBRACK] = ACTIONS(1168),
        [sym_number] = ACTIONS(409),
        [sym_identifier] = ACTIONS(413),
        [sym_comment] = ACTIONS(67),
        [sym__newline] = ACTIONS(301),
        [sym__dedent] = ACTIONS(301),
    },
    [461] = {
        [sym__expression] = STATE(467),
        [sym_binary_operator] = STATE(341),
        [sym_subscript] = STATE(341),
        [sym_number] = ACTIONS(755),
        [sym_identifier] = ACTIONS(755),
        [sym_comment] = ACTIONS(67),
    },
    [462] = {
        [sym__expression] = STATE(466),
        [sym_binary_operator] = STATE(341),
        [sym_subscript] = STATE(341),
        [sym_number] = ACTIONS(755),
        [sym_identifier] = ACTIONS(755),
        [sym_comment] = ACTIONS(67),
    },
    [463] = {
        [ts_builtin_sym_end] = ACTIONS(303),
        [anon_sym_SEMI] = ACTIONS(303),
        [anon_sym_print] = ACTIONS(415),
        [anon_sym_COMMA] = ACTIONS(1278),
        [anon_sym_return] = ACTIONS(415),
        [anon_sym_del] = ACTIONS(415),
        [sym_pass_statement] = ACTIONS(415),
        [sym_break_statement] = ACTIONS(415),
        [sym_continue_statement] = ACTIONS(415),
        [anon_sym_if] = ACTIONS(415),
        [anon_sym_else] = ACTIONS(415),
        [anon_sym_for] = ACTIONS(415),
        [anon_sym_while] = ACTIONS(415),
        [anon_sym_try] = ACTIONS(415),
        [anon_sym_with] = ACTIONS(415),
        [anon_sym_def] = ACTIONS(415),
        [anon_sym_class] = ACTIONS(415),
        [anon_sym_AT] = ACTIONS(303),
        [sym_number] = ACTIONS(415),
        [sym_identifier] = ACTIONS(419),
        [sym_comment] = ACTIONS(67),
        [sym__newline] = ACTIONS(303),
        [sym__dedent] = ACTIONS(303),
    },
    [464] = {
        [sym__expression] = STATE(465),
        [sym_binary_operator] = STATE(341),
        [sym_subscript] = STATE(341),
        [sym_number] = ACTIONS(755),
        [sym_identifier] = ACTIONS(755),
        [sym_comment] = ACTIONS(67),
    },
    [465] = {
        [ts_builtin_sym_end] = ACTIONS(277),
        [anon_sym_SEMI] = ACTIONS(277),
        [anon_sym_print] = ACTIONS(421),
        [anon_sym_COMMA] = ACTIONS(277),
        [anon_sym_return] = ACTIONS(421),
        [anon_sym_del] = ACTIONS(421),
        [sym_pass_statement] = ACTIONS(421),
        [sym_break_statement] = ACTIONS(421),
        [sym_continue_statement] = ACTIONS(421),
        [anon_sym_if] = ACTIONS(421),
        [anon_sym_else] = ACTIONS(421),
        [anon_sym_for] = ACTIONS(421),
        [anon_sym_while] = ACTIONS(421),
        [anon_sym_try] = ACTIONS(421),
        [anon_sym_with] = ACTIONS(421),
        [anon_sym_def] = ACTIONS(421),
        [anon_sym_class] = ACTIONS(421),
        [anon_sym_AT] = ACTIONS(277),
        [anon_sym_PLUS] = ACTIONS(1276),
        [anon_sym_LBRACK] = ACTIONS(1168),
        [sym_number] = ACTIONS(421),
        [sym_identifier] = ACTIONS(423),
        [sym_comment] = ACTIONS(67),
        [sym__newline] = ACTIONS(277),
        [sym__dedent] = ACTIONS(277),
    },
    [466] = {
        [ts_builtin_sym_end] = ACTIONS(239),
        [anon_sym_SEMI] = ACTIONS(239),
        [anon_sym_print] = ACTIONS(241),
        [anon_sym_COMMA] = ACTIONS(239),
        [anon_sym_return] = ACTIONS(241),
        [anon_sym_del] = ACTIONS(241),
        [sym_pass_statement] = ACTIONS(241),
        [sym_break_statement] = ACTIONS(241),
        [sym_continue_statement] = ACTIONS(241),
        [anon_sym_if] = ACTIONS(241),
        [anon_sym_else] = ACTIONS(241),
        [anon_sym_for] = ACTIONS(241),
        [anon_sym_while] = ACTIONS(241),
        [anon_sym_try] = ACTIONS(241),
        [anon_sym_with] = ACTIONS(241),
        [anon_sym_def] = ACTIONS(241),
        [anon_sym_class] = ACTIONS(241),
        [anon_sym_AT] = ACTIONS(239),
        [anon_sym_PLUS] = ACTIONS(1280),
        [anon_sym_LBRACK] = ACTIONS(1095),
        [sym_number] = ACTIONS(241),
        [sym_identifier] = ACTIONS(243),
        [sym_comment] = ACTIONS(67),
        [sym__newline] = ACTIONS(239),
        [sym__dedent] = ACTIONS(239),
    },
    [467] = {
        [ts_builtin_sym_end] = ACTIONS(279),
        [anon_sym_SEMI] = ACTIONS(279),
        [anon_sym_print] = ACTIONS(425),
        [anon_sym_COMMA] = ACTIONS(279),
        [anon_sym_return] = ACTIONS(425),
        [anon_sym_del] = ACTIONS(425),
        [sym_pass_statement] = ACTIONS(425),
        [sym_break_statement] = ACTIONS(425),
        [sym_continue_statement] = ACTIONS(425),
        [anon_sym_if] = ACTIONS(425),
        [anon_sym_else] = ACTIONS(425),
        [anon_sym_for] = ACTIONS(425),
        [anon_sym_while] = ACTIONS(425),
        [anon_sym_try] = ACTIONS(425),
        [anon_sym_with] = ACTIONS(425),
        [anon_sym_def] = ACTIONS(425),
        [anon_sym_class] = ACTIONS(425),
        [anon_sym_AT] = ACTIONS(279),
        [anon_sym_PLUS] = ACTIONS(1276),
        [anon_sym_LBRACK] = ACTIONS(1168),
        [sym_number] = ACTIONS(425),
        [sym_identifier] = ACTIONS(427),
        [sym_comment] = ACTIONS(67),
        [sym__newline] = ACTIONS(279),
        [sym__dedent] = ACTIONS(279),
    },
    [468] = {
        [aux_sym_print_statement_repeat1] = STATE(469),
        [ts_builtin_sym_end] = ACTIONS(437),
        [anon_sym_SEMI] = ACTIONS(437),
        [anon_sym_print] = ACTIONS(435),
        [anon_sym_COMMA] = ACTIONS(1274),
        [anon_sym_return] = ACTIONS(435),
        [anon_sym_del] = ACTIONS(435),
        [sym_pass_statement] = ACTIONS(435),
        [sym_break_statement] = ACTIONS(435),
        [sym_continue_statement] = ACTIONS(435),
        [anon_sym_if] = ACTIONS(435),
        [anon_sym_else] = ACTIONS(435),
        [anon_sym_for] = ACTIONS(435),
        [anon_sym_while] = ACTIONS(435),
        [anon_sym_try] = ACTIONS(435),
        [anon_sym_with] = ACTIONS(435),
        [anon_sym_def] = ACTIONS(435),
        [anon_sym_class] = ACTIONS(435),
        [anon_sym_AT] = ACTIONS(437),
        [anon_sym_PLUS] = ACTIONS(1276),
        [anon_sym_LBRACK] = ACTIONS(1168),
        [sym_number] = ACTIONS(435),
        [sym_identifier] = ACTIONS(439),
        [sym_comment] = ACTIONS(67),
        [sym__newline] = ACTIONS(437),
        [sym__dedent] = ACTIONS(437),
    },
    [469] = {
        [ts_builtin_sym_end] = ACTIONS(443),
        [anon_sym_SEMI] = ACTIONS(443),
        [anon_sym_print] = ACTIONS(441),
        [anon_sym_COMMA] = ACTIONS(1278),
        [anon_sym_return] = ACTIONS(441),
        [anon_sym_del] = ACTIONS(441),
        [sym_pass_statement] = ACTIONS(441),
        [sym_break_statement] = ACTIONS(441),
        [sym_continue_statement] = ACTIONS(441),
        [anon_sym_if] = ACTIONS(441),
        [anon_sym_else] = ACTIONS(441),
        [anon_sym_for] = ACTIONS(441),
        [anon_sym_while] = ACTIONS(441),
        [anon_sym_try] = ACTIONS(441),
        [anon_sym_with] = ACTIONS(441),
        [anon_sym_def] = ACTIONS(441),
        [anon_sym_class] = ACTIONS(441),
        [anon_sym_AT] = ACTIONS(443),
        [sym_number] = ACTIONS(441),
        [sym_identifier] = ACTIONS(445),
        [sym_comment] = ACTIONS(67),
        [sym__newline] = ACTIONS(443),
        [sym__dedent] = ACTIONS(443),
    },
    [470] = {
        [ts_builtin_sym_end] = ACTIONS(1283),
        [anon_sym_SEMI] = ACTIONS(1283),
        [anon_sym_print] = ACTIONS(1287),
        [anon_sym_return] = ACTIONS(1287),
        [anon_sym_del] = ACTIONS(1287),
        [sym_pass_statement] = ACTIONS(1287),
        [sym_break_statement] = ACTIONS(1287),
        [sym_continue_statement] = ACTIONS(1287),
        [anon_sym_if] = ACTIONS(1287),
        [anon_sym_for] = ACTIONS(1287),
        [anon_sym_while] = ACTIONS(1287),
        [anon_sym_try] = ACTIONS(1287),
        [anon_sym_with] = ACTIONS(1287),
        [anon_sym_def] = ACTIONS(1287),
        [anon_sym_class] = ACTIONS(1287),
        [anon_sym_AT] = ACTIONS(1283),
        [sym_number] = ACTIONS(1287),
        [sym_identifier] = ACTIONS(1291),
        [sym_comment] = ACTIONS(67),
        [sym__newline] = ACTIONS(1283),
        [sym__dedent] = ACTIONS(1283),
    },
    [471] = {
        [ts_builtin_sym_end] = ACTIONS(573),
        [anon_sym_SEMI] = ACTIONS(573),
        [anon_sym_print] = ACTIONS(571),
        [anon_sym_return] = ACTIONS(571),
        [anon_sym_del] = ACTIONS(571),
        [sym_pass_statement] = ACTIONS(571),
        [sym_break_statement] = ACTIONS(571),
        [sym_continue_statement] = ACTIONS(571),
        [anon_sym_if] = ACTIONS(571),
        [anon_sym_else] = ACTIONS(571),
        [anon_sym_for] = ACTIONS(571),
        [anon_sym_while] = ACTIONS(571),
        [anon_sym_try] = ACTIONS(571),
        [anon_sym_except] = ACTIONS(571),
        [anon_sym_finally] = ACTIONS(571),
        [anon_sym_with] = ACTIONS(571),
        [anon_sym_def] = ACTIONS(571),
        [anon_sym_class] = ACTIONS(571),
        [anon_sym_AT] = ACTIONS(573),
        [sym_number] = ACTIONS(571),
        [sym_identifier] = ACTIONS(575),
        [sym_comment] = ACTIONS(67),
        [sym__newline] = ACTIONS(573),
        [sym__dedent] = ACTIONS(573),
    },
    [472] = {
        [ts_builtin_sym_end] = ACTIONS(579),
        [anon_sym_SEMI] = ACTIONS(579),
        [anon_sym_print] = ACTIONS(577),
        [anon_sym_return] = ACTIONS(577),
        [anon_sym_del] = ACTIONS(577),
        [sym_pass_statement] = ACTIONS(577),
        [sym_break_statement] = ACTIONS(577),
        [sym_continue_statement] = ACTIONS(577),
        [anon_sym_if] = ACTIONS(577),
        [anon_sym_for] = ACTIONS(577),
        [anon_sym_while] = ACTIONS(577),
        [anon_sym_try] = ACTIONS(577),
        [anon_sym_with] = ACTIONS(577),
        [anon_sym_def] = ACTIONS(577),
        [anon_sym_class] = ACTIONS(577),
        [anon_sym_AT] = ACTIONS(579),
        [sym_number] = ACTIONS(577),
        [sym_identifier] = ACTIONS(581),
        [sym_comment] = ACTIONS(67),
        [sym__newline] = ACTIONS(579),
        [sym__dedent] = ACTIONS(579),
    },
    [473] = {
        [anon_sym_COLON] = ACTIONS(1295),
        [sym_comment] = ACTIONS(67),
    },
    [474] = {
        [sym_dictionary_splat_parameter] = STATE(476),
        [anon_sym_STAR] = ACTIONS(493),
        [sym_comment] = ACTIONS(67),
    },
    [475] = {
        [anon_sym_COLON] = ACTIONS(1300),
        [sym_comment] = ACTIONS(67),
    },
    [476] = {
        [anon_sym_RPAREN] = ACTIONS(1303),
        [sym_comment] = ACTIONS(67),
    },
    [477] = {
        [anon_sym_COLON] = ACTIONS(1305),
        [sym_comment] = ACTIONS(67),
    },
    [478] = {
        [anon_sym_RPAREN] = ACTIONS(757),
        [anon_sym_STAR] = ACTIONS(1308),
        [sym_identifier] = ACTIONS(1311),
        [sym_comment] = ACTIONS(67),
    },
    [479] = {
        [anon_sym_COLON] = ACTIONS(1314),
        [sym_comment] = ACTIONS(67),
    },
    [480] = {
        [sym__simple_statement] = STATE(379),
        [sym_print_statement] = STATE(318),
        [sym_expression_statement] = STATE(318),
        [sym_return_statement] = STATE(318),
        [sym_delete_statement] = STATE(318),
        [sym__suite] = STATE(481),
        [sym__expression] = STATE(381),
        [sym_binary_operator] = STATE(341),
        [sym_subscript] = STATE(341),
        [anon_sym_print] = ACTIONS(1160),
        [anon_sym_return] = ACTIONS(1162),
        [anon_sym_del] = ACTIONS(1164),
        [sym_pass_statement] = ACTIONS(777),
        [sym_break_statement] = ACTIONS(777),
        [sym_continue_statement] = ACTIONS(777),
        [sym_number] = ACTIONS(755),
        [sym_identifier] = ACTIONS(779),
        [sym_comment] = ACTIONS(67),
        [sym__indent] = ACTIONS(781),
    },
    [481] = {
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
        [sym_number] = ACTIONS(463),
        [sym_identifier] = ACTIONS(467),
        [sym_comment] = ACTIONS(67),
        [sym__newline] = ACTIONS(465),
        [sym__dedent] = ACTIONS(465),
    },
    [482] = {
        [sym__simple_statement] = STATE(379),
        [sym_print_statement] = STATE(318),
        [sym_expression_statement] = STATE(318),
        [sym_return_statement] = STATE(318),
        [sym_delete_statement] = STATE(318),
        [sym__suite] = STATE(483),
        [sym__expression] = STATE(381),
        [sym_binary_operator] = STATE(341),
        [sym_subscript] = STATE(341),
        [anon_sym_print] = ACTIONS(1160),
        [anon_sym_return] = ACTIONS(1162),
        [anon_sym_del] = ACTIONS(1164),
        [sym_pass_statement] = ACTIONS(777),
        [sym_break_statement] = ACTIONS(777),
        [sym_continue_statement] = ACTIONS(777),
        [sym_number] = ACTIONS(755),
        [sym_identifier] = ACTIONS(779),
        [sym_comment] = ACTIONS(67),
        [sym__indent] = ACTIONS(781),
    },
    [483] = {
        [ts_builtin_sym_end] = ACTIONS(545),
        [anon_sym_SEMI] = ACTIONS(545),
        [anon_sym_print] = ACTIONS(543),
        [anon_sym_return] = ACTIONS(543),
        [anon_sym_del] = ACTIONS(543),
        [sym_pass_statement] = ACTIONS(543),
        [sym_break_statement] = ACTIONS(543),
        [sym_continue_statement] = ACTIONS(543),
        [anon_sym_if] = ACTIONS(543),
        [anon_sym_for] = ACTIONS(543),
        [anon_sym_while] = ACTIONS(543),
        [anon_sym_try] = ACTIONS(543),
        [anon_sym_with] = ACTIONS(543),
        [anon_sym_def] = ACTIONS(543),
        [anon_sym_class] = ACTIONS(543),
        [anon_sym_AT] = ACTIONS(545),
        [sym_number] = ACTIONS(543),
        [sym_identifier] = ACTIONS(547),
        [sym_comment] = ACTIONS(67),
        [sym__newline] = ACTIONS(545),
        [sym__dedent] = ACTIONS(545),
    },
    [484] = {
        [sym__simple_statement] = STATE(379),
        [sym_print_statement] = STATE(318),
        [sym_expression_statement] = STATE(318),
        [sym_return_statement] = STATE(318),
        [sym_delete_statement] = STATE(318),
        [sym__suite] = STATE(488),
        [sym__expression] = STATE(381),
        [sym_binary_operator] = STATE(341),
        [sym_subscript] = STATE(341),
        [anon_sym_print] = ACTIONS(1160),
        [anon_sym_return] = ACTIONS(1162),
        [anon_sym_del] = ACTIONS(1164),
        [sym_pass_statement] = ACTIONS(777),
        [sym_break_statement] = ACTIONS(777),
        [sym_continue_statement] = ACTIONS(777),
        [sym_number] = ACTIONS(755),
        [sym_identifier] = ACTIONS(779),
        [sym_comment] = ACTIONS(67),
        [sym__indent] = ACTIONS(781),
    },
    [485] = {
        [sym_default_parameter] = STATE(152),
        [sym_list_splat_parameter] = STATE(153),
        [sym_dictionary_splat_parameter] = STATE(154),
        [sym_expression_list] = STATE(487),
        [sym__expression] = STATE(79),
        [sym_binary_operator] = STATE(31),
        [sym_subscript] = STATE(31),
        [aux_sym_parameters_repeat1] = STATE(155),
        [anon_sym_RPAREN] = ACTIONS(455),
        [anon_sym_STAR] = ACTIONS(457),
        [sym_number] = ACTIONS(111),
        [sym_identifier] = ACTIONS(791),
        [sym_comment] = ACTIONS(67),
    },
    [486] = {
        [anon_sym_COMMA] = ACTIONS(1317),
        [anon_sym_RPAREN] = ACTIONS(1320),
        [anon_sym_EQ] = ACTIONS(479),
        [anon_sym_PLUS] = ACTIONS(121),
        [anon_sym_LBRACK] = ACTIONS(121),
        [sym_comment] = ACTIONS(67),
    },
    [487] = {
        [anon_sym_RPAREN] = ACTIONS(1040),
        [sym_comment] = ACTIONS(67),
    },
    [488] = {
        [ts_builtin_sym_end] = ACTIONS(449),
        [anon_sym_SEMI] = ACTIONS(449),
        [anon_sym_print] = ACTIONS(447),
        [anon_sym_return] = ACTIONS(447),
        [anon_sym_del] = ACTIONS(447),
        [sym_pass_statement] = ACTIONS(447),
        [sym_break_statement] = ACTIONS(447),
        [sym_continue_statement] = ACTIONS(447),
        [anon_sym_if] = ACTIONS(447),
        [anon_sym_for] = ACTIONS(447),
        [anon_sym_while] = ACTIONS(447),
        [anon_sym_try] = ACTIONS(447),
        [anon_sym_with] = ACTIONS(447),
        [anon_sym_def] = ACTIONS(447),
        [anon_sym_class] = ACTIONS(447),
        [anon_sym_AT] = ACTIONS(449),
        [sym_number] = ACTIONS(447),
        [sym_identifier] = ACTIONS(451),
        [sym_comment] = ACTIONS(67),
        [sym__newline] = ACTIONS(449),
        [sym__dedent] = ACTIONS(449),
    },
    [489] = {
        [ts_builtin_sym_end] = ACTIONS(239),
        [anon_sym_SEMI] = ACTIONS(239),
        [anon_sym_print] = ACTIONS(241),
        [anon_sym_COMMA] = ACTIONS(239),
        [anon_sym_return] = ACTIONS(241),
        [anon_sym_del] = ACTIONS(241),
        [sym_pass_statement] = ACTIONS(241),
        [sym_break_statement] = ACTIONS(241),
        [sym_continue_statement] = ACTIONS(241),
        [anon_sym_if] = ACTIONS(241),
        [anon_sym_COLON] = ACTIONS(239),
        [anon_sym_elif] = ACTIONS(241),
        [anon_sym_else] = ACTIONS(241),
        [anon_sym_for] = ACTIONS(241),
        [anon_sym_in] = ACTIONS(241),
        [anon_sym_while] = ACTIONS(241),
        [anon_sym_try] = ACTIONS(241),
        [anon_sym_except] = ACTIONS(241),
        [anon_sym_as] = ACTIONS(241),
        [anon_sym_finally] = ACTIONS(241),
        [anon_sym_with] = ACTIONS(241),
        [anon_sym_def] = ACTIONS(241),
        [anon_sym_RPAREN] = ACTIONS(239),
        [anon_sym_class] = ACTIONS(241),
        [anon_sym_AT] = ACTIONS(239),
        [anon_sym_PLUS] = ACTIONS(1092),
        [anon_sym_LBRACK] = ACTIONS(1095),
        [anon_sym_RBRACK] = ACTIONS(239),
        [sym_number] = ACTIONS(241),
        [sym_identifier] = ACTIONS(243),
        [sym_comment] = ACTIONS(67),
        [sym__newline] = ACTIONS(239),
        [sym__dedent] = ACTIONS(239),
    },
    [490] = {
        [anon_sym_LPAREN] = ACTIONS(1323),
        [anon_sym_DOT] = ACTIONS(1323),
        [sym_comment] = ACTIONS(67),
        [sym__newline] = ACTIONS(1323),
    },
    [491] = {
        [anon_sym_COLON] = ACTIONS(1326),
        [anon_sym_LPAREN] = ACTIONS(1328),
        [sym_comment] = ACTIONS(67),
    },
    [492] = {
        [sym_expression_list] = STATE(487),
        [sym__expression] = STATE(79),
        [sym_binary_operator] = STATE(31),
        [sym_subscript] = STATE(31),
        [sym_number] = ACTIONS(111),
        [sym_identifier] = ACTIONS(111),
        [sym_comment] = ACTIONS(67),
    },
    [493] = {
        [anon_sym_COMMA] = ACTIONS(519),
        [anon_sym_RPAREN] = ACTIONS(1330),
        [sym_comment] = ACTIONS(67),
    },
    [494] = {
        [aux_sym_print_statement_repeat1] = STATE(495),
        [anon_sym_COMMA] = ACTIONS(265),
        [anon_sym_RPAREN] = ACTIONS(1333),
        [anon_sym_PLUS] = ACTIONS(191),
        [anon_sym_LBRACK] = ACTIONS(193),
        [sym_comment] = ACTIONS(67),
    },
    [495] = {
        [anon_sym_COMMA] = ACTIONS(271),
        [anon_sym_RPAREN] = ACTIONS(1134),
        [sym_comment] = ACTIONS(67),
    },
    [496] = {
        [sym_parameters] = STATE(356),
        [anon_sym_LPAREN] = ACTIONS(453),
        [sym_comment] = ACTIONS(67),
    },
    [497] = {
        [aux_sym_with_statement_repeat1] = STATE(368),
        [anon_sym_COMMA] = ACTIONS(521),
        [anon_sym_COLON] = ACTIONS(1336),
        [sym_comment] = ACTIONS(67),
    },
    [498] = {
        [sym__simple_statement] = STATE(379),
        [sym_print_statement] = STATE(318),
        [sym_expression_statement] = STATE(318),
        [sym_return_statement] = STATE(318),
        [sym_delete_statement] = STATE(318),
        [sym__suite] = STATE(499),
        [sym__expression] = STATE(381),
        [sym_binary_operator] = STATE(341),
        [sym_subscript] = STATE(341),
        [anon_sym_print] = ACTIONS(1160),
        [anon_sym_return] = ACTIONS(1162),
        [anon_sym_del] = ACTIONS(1164),
        [sym_pass_statement] = ACTIONS(777),
        [sym_break_statement] = ACTIONS(777),
        [sym_continue_statement] = ACTIONS(777),
        [sym_number] = ACTIONS(755),
        [sym_identifier] = ACTIONS(779),
        [sym_comment] = ACTIONS(67),
        [sym__indent] = ACTIONS(781),
    },
    [499] = {
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
        [anon_sym_with] = ACTIONS(615),
        [anon_sym_def] = ACTIONS(615),
        [anon_sym_class] = ACTIONS(615),
        [anon_sym_AT] = ACTIONS(617),
        [sym_number] = ACTIONS(615),
        [sym_identifier] = ACTIONS(619),
        [sym_comment] = ACTIONS(67),
        [sym__newline] = ACTIONS(617),
        [sym__dedent] = ACTIONS(617),
    },
    [500] = {
        [anon_sym_COMMA] = ACTIONS(529),
        [anon_sym_COLON] = ACTIONS(1338),
        [anon_sym_PLUS] = ACTIONS(191),
        [anon_sym_LBRACK] = ACTIONS(193),
        [sym_comment] = ACTIONS(67),
    },
    [501] = {
        [anon_sym_COMMA] = ACTIONS(1341),
        [anon_sym_COLON] = ACTIONS(1343),
        [anon_sym_as] = ACTIONS(1341),
        [anon_sym_PLUS] = ACTIONS(191),
        [anon_sym_LBRACK] = ACTIONS(193),
        [sym_comment] = ACTIONS(67),
    },
    [502] = {
        [sym__expression] = STATE(504),
        [sym_binary_operator] = STATE(31),
        [sym_subscript] = STATE(31),
        [sym_number] = ACTIONS(111),
        [sym_identifier] = ACTIONS(111),
        [sym_comment] = ACTIONS(67),
    },
    [503] = {
        [sym__simple_statement] = STATE(379),
        [sym_print_statement] = STATE(318),
        [sym_expression_statement] = STATE(318),
        [sym_return_statement] = STATE(318),
        [sym_delete_statement] = STATE(318),
        [sym__suite] = STATE(505),
        [sym__expression] = STATE(435),
        [sym_binary_operator] = STATE(341),
        [sym_subscript] = STATE(341),
        [anon_sym_print] = ACTIONS(1238),
        [anon_sym_return] = ACTIONS(1240),
        [anon_sym_del] = ACTIONS(1242),
        [sym_pass_statement] = ACTIONS(777),
        [sym_break_statement] = ACTIONS(777),
        [sym_continue_statement] = ACTIONS(777),
        [sym_number] = ACTIONS(755),
        [sym_identifier] = ACTIONS(779),
        [sym_comment] = ACTIONS(67),
        [sym__indent] = ACTIONS(781),
    },
    [504] = {
        [anon_sym_COLON] = ACTIONS(1345),
        [anon_sym_PLUS] = ACTIONS(191),
        [anon_sym_LBRACK] = ACTIONS(193),
        [sym_comment] = ACTIONS(67),
    },
    [505] = {
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
        [sym_number] = ACTIONS(633),
        [sym_identifier] = ACTIONS(637),
        [sym_comment] = ACTIONS(67),
        [sym__newline] = ACTIONS(635),
        [sym__dedent] = ACTIONS(635),
    },
    [506] = {
        [sym__simple_statement] = STATE(195),
        [sym_print_statement] = STATE(193),
        [sym_expression_statement] = STATE(193),
        [sym_return_statement] = STATE(193),
        [sym_delete_statement] = STATE(193),
        [sym__suite] = STATE(507),
        [sym__expression] = STATE(197),
        [sym_binary_operator] = STATE(31),
        [sym_subscript] = STATE(31),
        [anon_sym_print] = ACTIONS(551),
        [anon_sym_return] = ACTIONS(553),
        [anon_sym_del] = ACTIONS(555),
        [sym_pass_statement] = ACTIONS(557),
        [sym_break_statement] = ACTIONS(557),
        [sym_continue_statement] = ACTIONS(557),
        [sym_number] = ACTIONS(111),
        [sym_identifier] = ACTIONS(559),
        [sym_comment] = ACTIONS(67),
        [sym__indent] = ACTIONS(561),
    },
    [507] = {
        [sym_except_clause] = STATE(471),
        [sym_finally_clause] = STATE(472),
        [aux_sym_try_statement_repeat1] = STATE(367),
        [anon_sym_except] = ACTIONS(1347),
        [anon_sym_finally] = ACTIONS(1349),
        [sym_comment] = ACTIONS(67),
    },
    [508] = {
        [anon_sym_COLON] = ACTIONS(1351),
        [anon_sym_PLUS] = ACTIONS(191),
        [anon_sym_LBRACK] = ACTIONS(193),
        [sym_comment] = ACTIONS(67),
    },
    [509] = {
        [sym__simple_statement] = STATE(379),
        [sym_print_statement] = STATE(318),
        [sym_expression_statement] = STATE(318),
        [sym_return_statement] = STATE(318),
        [sym_delete_statement] = STATE(318),
        [sym__suite] = STATE(510),
        [sym__expression] = STATE(456),
        [sym_binary_operator] = STATE(341),
        [sym_subscript] = STATE(341),
        [anon_sym_print] = ACTIONS(1261),
        [anon_sym_return] = ACTIONS(1263),
        [anon_sym_del] = ACTIONS(1265),
        [sym_pass_statement] = ACTIONS(777),
        [sym_break_statement] = ACTIONS(777),
        [sym_continue_statement] = ACTIONS(777),
        [sym_number] = ACTIONS(755),
        [sym_identifier] = ACTIONS(779),
        [sym_comment] = ACTIONS(67),
        [sym__indent] = ACTIONS(781),
    },
    [510] = {
        [sym_else_clause] = STATE(511),
        [ts_builtin_sym_end] = ACTIONS(645),
        [anon_sym_SEMI] = ACTIONS(645),
        [anon_sym_print] = ACTIONS(643),
        [anon_sym_return] = ACTIONS(643),
        [anon_sym_del] = ACTIONS(643),
        [sym_pass_statement] = ACTIONS(643),
        [sym_break_statement] = ACTIONS(643),
        [sym_continue_statement] = ACTIONS(643),
        [anon_sym_if] = ACTIONS(643),
        [anon_sym_else] = ACTIONS(1142),
        [anon_sym_for] = ACTIONS(643),
        [anon_sym_while] = ACTIONS(643),
        [anon_sym_try] = ACTIONS(643),
        [anon_sym_with] = ACTIONS(643),
        [anon_sym_def] = ACTIONS(643),
        [anon_sym_class] = ACTIONS(643),
        [anon_sym_AT] = ACTIONS(645),
        [sym_number] = ACTIONS(643),
        [sym_identifier] = ACTIONS(647),
        [sym_comment] = ACTIONS(67),
        [sym__newline] = ACTIONS(645),
        [sym__dedent] = ACTIONS(645),
    },
    [511] = {
        [ts_builtin_sym_end] = ACTIONS(651),
        [anon_sym_SEMI] = ACTIONS(651),
        [anon_sym_print] = ACTIONS(649),
        [anon_sym_return] = ACTIONS(649),
        [anon_sym_del] = ACTIONS(649),
        [sym_pass_statement] = ACTIONS(649),
        [sym_break_statement] = ACTIONS(649),
        [sym_continue_statement] = ACTIONS(649),
        [anon_sym_if] = ACTIONS(649),
        [anon_sym_for] = ACTIONS(649),
        [anon_sym_while] = ACTIONS(649),
        [anon_sym_try] = ACTIONS(649),
        [anon_sym_with] = ACTIONS(649),
        [anon_sym_def] = ACTIONS(649),
        [anon_sym_class] = ACTIONS(649),
        [anon_sym_AT] = ACTIONS(651),
        [sym_number] = ACTIONS(649),
        [sym_identifier] = ACTIONS(653),
        [sym_comment] = ACTIONS(67),
        [sym__newline] = ACTIONS(651),
        [sym__dedent] = ACTIONS(651),
    },
    [512] = {
        [anon_sym_COLON] = ACTIONS(1036),
        [sym_comment] = ACTIONS(67),
    },
    [513] = {
        [anon_sym_in] = ACTIONS(1353),
        [sym_comment] = ACTIONS(67),
    },
    [514] = {
        [sym__simple_statement] = STATE(379),
        [sym_print_statement] = STATE(318),
        [sym_expression_statement] = STATE(318),
        [sym_return_statement] = STATE(318),
        [sym_delete_statement] = STATE(318),
        [sym__suite] = STATE(411),
        [sym__expression] = STATE(518),
        [sym_binary_operator] = STATE(341),
        [sym_subscript] = STATE(341),
        [anon_sym_print] = ACTIONS(1355),
        [anon_sym_return] = ACTIONS(1357),
        [anon_sym_del] = ACTIONS(1359),
        [sym_pass_statement] = ACTIONS(777),
        [sym_break_statement] = ACTIONS(777),
        [sym_continue_statement] = ACTIONS(777),
        [sym_number] = ACTIONS(755),
        [sym_identifier] = ACTIONS(779),
        [sym_comment] = ACTIONS(67),
        [sym__indent] = ACTIONS(781),
    },
    [515] = {
        [sym__expression] = STATE(529),
        [sym_binary_operator] = STATE(341),
        [sym_subscript] = STATE(341),
        [sym_number] = ACTIONS(755),
        [sym_identifier] = ACTIONS(755),
        [sym_comment] = ACTIONS(67),
    },
    [516] = {
        [sym_expression_list] = STATE(400),
        [sym__expression] = STATE(521),
        [sym_binary_operator] = STATE(341),
        [sym_subscript] = STATE(341),
        [sym_number] = ACTIONS(755),
        [sym_identifier] = ACTIONS(755),
        [sym_comment] = ACTIONS(67),
    },
    [517] = {
        [sym_expression_list] = STATE(391),
        [sym__expression] = STATE(521),
        [sym_binary_operator] = STATE(341),
        [sym_subscript] = STATE(341),
        [sym_number] = ACTIONS(755),
        [sym_identifier] = ACTIONS(755),
        [sym_comment] = ACTIONS(67),
    },
    [518] = {
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
        [anon_sym_class] = ACTIONS(153),
        [anon_sym_AT] = ACTIONS(151),
        [anon_sym_PLUS] = ACTIONS(1361),
        [anon_sym_LBRACK] = ACTIONS(1168),
        [sym_number] = ACTIONS(153),
        [sym_identifier] = ACTIONS(159),
        [sym_comment] = ACTIONS(67),
        [sym__newline] = ACTIONS(151),
        [sym__dedent] = ACTIONS(151),
    },
    [519] = {
        [sym__expression] = STATE(520),
        [sym_binary_operator] = STATE(341),
        [sym_subscript] = STATE(341),
        [sym_number] = ACTIONS(755),
        [sym_identifier] = ACTIONS(755),
        [sym_comment] = ACTIONS(67),
    },
    [520] = {
        [ts_builtin_sym_end] = ACTIONS(239),
        [anon_sym_SEMI] = ACTIONS(239),
        [anon_sym_print] = ACTIONS(241),
        [anon_sym_return] = ACTIONS(241),
        [anon_sym_del] = ACTIONS(241),
        [sym_pass_statement] = ACTIONS(241),
        [sym_break_statement] = ACTIONS(241),
        [sym_continue_statement] = ACTIONS(241),
        [anon_sym_if] = ACTIONS(241),
        [anon_sym_for] = ACTIONS(241),
        [anon_sym_while] = ACTIONS(241),
        [anon_sym_try] = ACTIONS(241),
        [anon_sym_finally] = ACTIONS(241),
        [anon_sym_with] = ACTIONS(241),
        [anon_sym_def] = ACTIONS(241),
        [anon_sym_class] = ACTIONS(241),
        [anon_sym_AT] = ACTIONS(239),
        [anon_sym_PLUS] = ACTIONS(1363),
        [anon_sym_LBRACK] = ACTIONS(1095),
        [sym_number] = ACTIONS(241),
        [sym_identifier] = ACTIONS(243),
        [sym_comment] = ACTIONS(67),
        [sym__newline] = ACTIONS(239),
        [sym__dedent] = ACTIONS(239),
    },
    [521] = {
        [aux_sym_print_statement_repeat1] = STATE(524),
        [ts_builtin_sym_end] = ACTIONS(301),
        [anon_sym_SEMI] = ACTIONS(301),
        [anon_sym_print] = ACTIONS(409),
        [anon_sym_COMMA] = ACTIONS(1366),
        [anon_sym_return] = ACTIONS(409),
        [anon_sym_del] = ACTIONS(409),
        [sym_pass_statement] = ACTIONS(409),
        [sym_break_statement] = ACTIONS(409),
        [sym_continue_statement] = ACTIONS(409),
        [anon_sym_if] = ACTIONS(409),
        [anon_sym_for] = ACTIONS(409),
        [anon_sym_while] = ACTIONS(409),
        [anon_sym_try] = ACTIONS(409),
        [anon_sym_finally] = ACTIONS(409),
        [anon_sym_with] = ACTIONS(409),
        [anon_sym_def] = ACTIONS(409),
        [anon_sym_class] = ACTIONS(409),
        [anon_sym_AT] = ACTIONS(301),
        [anon_sym_PLUS] = ACTIONS(1368),
        [anon_sym_LBRACK] = ACTIONS(1168),
        [sym_number] = ACTIONS(409),
        [sym_identifier] = ACTIONS(413),
        [sym_comment] = ACTIONS(67),
        [sym__newline] = ACTIONS(301),
        [sym__dedent] = ACTIONS(301),
    },
    [522] = {
        [sym__expression] = STATE(528),
        [sym_binary_operator] = STATE(341),
        [sym_subscript] = STATE(341),
        [sym_number] = ACTIONS(755),
        [sym_identifier] = ACTIONS(755),
        [sym_comment] = ACTIONS(67),
    },
    [523] = {
        [sym__expression] = STATE(527),
        [sym_binary_operator] = STATE(341),
        [sym_subscript] = STATE(341),
        [sym_number] = ACTIONS(755),
        [sym_identifier] = ACTIONS(755),
        [sym_comment] = ACTIONS(67),
    },
    [524] = {
        [ts_builtin_sym_end] = ACTIONS(303),
        [anon_sym_SEMI] = ACTIONS(303),
        [anon_sym_print] = ACTIONS(415),
        [anon_sym_COMMA] = ACTIONS(1370),
        [anon_sym_return] = ACTIONS(415),
        [anon_sym_del] = ACTIONS(415),
        [sym_pass_statement] = ACTIONS(415),
        [sym_break_statement] = ACTIONS(415),
        [sym_continue_statement] = ACTIONS(415),
        [anon_sym_if] = ACTIONS(415),
        [anon_sym_for] = ACTIONS(415),
        [anon_sym_while] = ACTIONS(415),
        [anon_sym_try] = ACTIONS(415),
        [anon_sym_finally] = ACTIONS(415),
        [anon_sym_with] = ACTIONS(415),
        [anon_sym_def] = ACTIONS(415),
        [anon_sym_class] = ACTIONS(415),
        [anon_sym_AT] = ACTIONS(303),
        [sym_number] = ACTIONS(415),
        [sym_identifier] = ACTIONS(419),
        [sym_comment] = ACTIONS(67),
        [sym__newline] = ACTIONS(303),
        [sym__dedent] = ACTIONS(303),
    },
    [525] = {
        [sym__expression] = STATE(526),
        [sym_binary_operator] = STATE(341),
        [sym_subscript] = STATE(341),
        [sym_number] = ACTIONS(755),
        [sym_identifier] = ACTIONS(755),
        [sym_comment] = ACTIONS(67),
    },
    [526] = {
        [ts_builtin_sym_end] = ACTIONS(277),
        [anon_sym_SEMI] = ACTIONS(277),
        [anon_sym_print] = ACTIONS(421),
        [anon_sym_COMMA] = ACTIONS(277),
        [anon_sym_return] = ACTIONS(421),
        [anon_sym_del] = ACTIONS(421),
        [sym_pass_statement] = ACTIONS(421),
        [sym_break_statement] = ACTIONS(421),
        [sym_continue_statement] = ACTIONS(421),
        [anon_sym_if] = ACTIONS(421),
        [anon_sym_for] = ACTIONS(421),
        [anon_sym_while] = ACTIONS(421),
        [anon_sym_try] = ACTIONS(421),
        [anon_sym_finally] = ACTIONS(421),
        [anon_sym_with] = ACTIONS(421),
        [anon_sym_def] = ACTIONS(421),
        [anon_sym_class] = ACTIONS(421),
        [anon_sym_AT] = ACTIONS(277),
        [anon_sym_PLUS] = ACTIONS(1368),
        [anon_sym_LBRACK] = ACTIONS(1168),
        [sym_number] = ACTIONS(421),
        [sym_identifier] = ACTIONS(423),
        [sym_comment] = ACTIONS(67),
        [sym__newline] = ACTIONS(277),
        [sym__dedent] = ACTIONS(277),
    },
    [527] = {
        [ts_builtin_sym_end] = ACTIONS(239),
        [anon_sym_SEMI] = ACTIONS(239),
        [anon_sym_print] = ACTIONS(241),
        [anon_sym_COMMA] = ACTIONS(239),
        [anon_sym_return] = ACTIONS(241),
        [anon_sym_del] = ACTIONS(241),
        [sym_pass_statement] = ACTIONS(241),
        [sym_break_statement] = ACTIONS(241),
        [sym_continue_statement] = ACTIONS(241),
        [anon_sym_if] = ACTIONS(241),
        [anon_sym_for] = ACTIONS(241),
        [anon_sym_while] = ACTIONS(241),
        [anon_sym_try] = ACTIONS(241),
        [anon_sym_finally] = ACTIONS(241),
        [anon_sym_with] = ACTIONS(241),
        [anon_sym_def] = ACTIONS(241),
        [anon_sym_class] = ACTIONS(241),
        [anon_sym_AT] = ACTIONS(239),
        [anon_sym_PLUS] = ACTIONS(1372),
        [anon_sym_LBRACK] = ACTIONS(1095),
        [sym_number] = ACTIONS(241),
        [sym_identifier] = ACTIONS(243),
        [sym_comment] = ACTIONS(67),
        [sym__newline] = ACTIONS(239),
        [sym__dedent] = ACTIONS(239),
    },
    [528] = {
        [ts_builtin_sym_end] = ACTIONS(279),
        [anon_sym_SEMI] = ACTIONS(279),
        [anon_sym_print] = ACTIONS(425),
        [anon_sym_COMMA] = ACTIONS(279),
        [anon_sym_return] = ACTIONS(425),
        [anon_sym_del] = ACTIONS(425),
        [sym_pass_statement] = ACTIONS(425),
        [sym_break_statement] = ACTIONS(425),
        [sym_continue_statement] = ACTIONS(425),
        [anon_sym_if] = ACTIONS(425),
        [anon_sym_for] = ACTIONS(425),
        [anon_sym_while] = ACTIONS(425),
        [anon_sym_try] = ACTIONS(425),
        [anon_sym_finally] = ACTIONS(425),
        [anon_sym_with] = ACTIONS(425),
        [anon_sym_def] = ACTIONS(425),
        [anon_sym_class] = ACTIONS(425),
        [anon_sym_AT] = ACTIONS(279),
        [anon_sym_PLUS] = ACTIONS(1368),
        [anon_sym_LBRACK] = ACTIONS(1168),
        [sym_number] = ACTIONS(425),
        [sym_identifier] = ACTIONS(427),
        [sym_comment] = ACTIONS(67),
        [sym__newline] = ACTIONS(279),
        [sym__dedent] = ACTIONS(279),
    },
    [529] = {
        [aux_sym_print_statement_repeat1] = STATE(530),
        [ts_builtin_sym_end] = ACTIONS(437),
        [anon_sym_SEMI] = ACTIONS(437),
        [anon_sym_print] = ACTIONS(435),
        [anon_sym_COMMA] = ACTIONS(1366),
        [anon_sym_return] = ACTIONS(435),
        [anon_sym_del] = ACTIONS(435),
        [sym_pass_statement] = ACTIONS(435),
        [sym_break_statement] = ACTIONS(435),
        [sym_continue_statement] = ACTIONS(435),
        [anon_sym_if] = ACTIONS(435),
        [anon_sym_for] = ACTIONS(435),
        [anon_sym_while] = ACTIONS(435),
        [anon_sym_try] = ACTIONS(435),
        [anon_sym_finally] = ACTIONS(435),
        [anon_sym_with] = ACTIONS(435),
        [anon_sym_def] = ACTIONS(435),
        [anon_sym_class] = ACTIONS(435),
        [anon_sym_AT] = ACTIONS(437),
        [anon_sym_PLUS] = ACTIONS(1368),
        [anon_sym_LBRACK] = ACTIONS(1168),
        [sym_number] = ACTIONS(435),
        [sym_identifier] = ACTIONS(439),
        [sym_comment] = ACTIONS(67),
        [sym__newline] = ACTIONS(437),
        [sym__dedent] = ACTIONS(437),
    },
    [530] = {
        [ts_builtin_sym_end] = ACTIONS(443),
        [anon_sym_SEMI] = ACTIONS(443),
        [anon_sym_print] = ACTIONS(441),
        [anon_sym_COMMA] = ACTIONS(1370),
        [anon_sym_return] = ACTIONS(441),
        [anon_sym_del] = ACTIONS(441),
        [sym_pass_statement] = ACTIONS(441),
        [sym_break_statement] = ACTIONS(441),
        [sym_continue_statement] = ACTIONS(441),
        [anon_sym_if] = ACTIONS(441),
        [anon_sym_for] = ACTIONS(441),
        [anon_sym_while] = ACTIONS(441),
        [anon_sym_try] = ACTIONS(441),
        [anon_sym_finally] = ACTIONS(441),
        [anon_sym_with] = ACTIONS(441),
        [anon_sym_def] = ACTIONS(441),
        [anon_sym_class] = ACTIONS(441),
        [anon_sym_AT] = ACTIONS(443),
        [sym_number] = ACTIONS(441),
        [sym_identifier] = ACTIONS(445),
        [sym_comment] = ACTIONS(67),
        [sym__newline] = ACTIONS(443),
        [sym__dedent] = ACTIONS(443),
    },
    [531] = {
        [anon_sym_COLON] = ACTIONS(1375),
        [anon_sym_PLUS] = ACTIONS(191),
        [anon_sym_LBRACK] = ACTIONS(193),
        [sym_comment] = ACTIONS(67),
    },
    [532] = {
        [sym__simple_statement] = STATE(379),
        [sym_print_statement] = STATE(318),
        [sym_expression_statement] = STATE(318),
        [sym_return_statement] = STATE(318),
        [sym_delete_statement] = STATE(318),
        [sym__suite] = STATE(536),
        [sym__expression] = STATE(537),
        [sym_binary_operator] = STATE(341),
        [sym_subscript] = STATE(341),
        [anon_sym_print] = ACTIONS(1377),
        [anon_sym_return] = ACTIONS(1379),
        [anon_sym_del] = ACTIONS(1381),
        [sym_pass_statement] = ACTIONS(777),
        [sym_break_statement] = ACTIONS(777),
        [sym_continue_statement] = ACTIONS(777),
        [sym_number] = ACTIONS(755),
        [sym_identifier] = ACTIONS(779),
        [sym_comment] = ACTIONS(67),
        [sym__indent] = ACTIONS(781),
    },
    [533] = {
        [sym__expression] = STATE(548),
        [sym_binary_operator] = STATE(341),
        [sym_subscript] = STATE(341),
        [sym_number] = ACTIONS(755),
        [sym_identifier] = ACTIONS(755),
        [sym_comment] = ACTIONS(67),
    },
    [534] = {
        [sym_expression_list] = STATE(400),
        [sym__expression] = STATE(540),
        [sym_binary_operator] = STATE(341),
        [sym_subscript] = STATE(341),
        [sym_number] = ACTIONS(755),
        [sym_identifier] = ACTIONS(755),
        [sym_comment] = ACTIONS(67),
    },
    [535] = {
        [sym_expression_list] = STATE(391),
        [sym__expression] = STATE(540),
        [sym_binary_operator] = STATE(341),
        [sym_subscript] = STATE(341),
        [sym_number] = ACTIONS(755),
        [sym_identifier] = ACTIONS(755),
        [sym_comment] = ACTIONS(67),
    },
    [536] = {
        [ts_builtin_sym_end] = ACTIONS(709),
        [anon_sym_SEMI] = ACTIONS(709),
        [anon_sym_print] = ACTIONS(707),
        [anon_sym_return] = ACTIONS(707),
        [anon_sym_del] = ACTIONS(707),
        [sym_pass_statement] = ACTIONS(707),
        [sym_break_statement] = ACTIONS(707),
        [sym_continue_statement] = ACTIONS(707),
        [anon_sym_if] = ACTIONS(707),
        [anon_sym_elif] = ACTIONS(707),
        [anon_sym_else] = ACTIONS(707),
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
    [537] = {
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
        [anon_sym_class] = ACTIONS(153),
        [anon_sym_AT] = ACTIONS(151),
        [anon_sym_PLUS] = ACTIONS(1383),
        [anon_sym_LBRACK] = ACTIONS(1168),
        [sym_number] = ACTIONS(153),
        [sym_identifier] = ACTIONS(159),
        [sym_comment] = ACTIONS(67),
        [sym__newline] = ACTIONS(151),
        [sym__dedent] = ACTIONS(151),
    },
    [538] = {
        [sym__expression] = STATE(539),
        [sym_binary_operator] = STATE(341),
        [sym_subscript] = STATE(341),
        [sym_number] = ACTIONS(755),
        [sym_identifier] = ACTIONS(755),
        [sym_comment] = ACTIONS(67),
    },
    [539] = {
        [ts_builtin_sym_end] = ACTIONS(239),
        [anon_sym_SEMI] = ACTIONS(239),
        [anon_sym_print] = ACTIONS(241),
        [anon_sym_return] = ACTIONS(241),
        [anon_sym_del] = ACTIONS(241),
        [sym_pass_statement] = ACTIONS(241),
        [sym_break_statement] = ACTIONS(241),
        [sym_continue_statement] = ACTIONS(241),
        [anon_sym_if] = ACTIONS(241),
        [anon_sym_elif] = ACTIONS(241),
        [anon_sym_else] = ACTIONS(241),
        [anon_sym_for] = ACTIONS(241),
        [anon_sym_while] = ACTIONS(241),
        [anon_sym_try] = ACTIONS(241),
        [anon_sym_with] = ACTIONS(241),
        [anon_sym_def] = ACTIONS(241),
        [anon_sym_class] = ACTIONS(241),
        [anon_sym_AT] = ACTIONS(239),
        [anon_sym_PLUS] = ACTIONS(1385),
        [anon_sym_LBRACK] = ACTIONS(1095),
        [sym_number] = ACTIONS(241),
        [sym_identifier] = ACTIONS(243),
        [sym_comment] = ACTIONS(67),
        [sym__newline] = ACTIONS(239),
        [sym__dedent] = ACTIONS(239),
    },
    [540] = {
        [aux_sym_print_statement_repeat1] = STATE(543),
        [ts_builtin_sym_end] = ACTIONS(301),
        [anon_sym_SEMI] = ACTIONS(301),
        [anon_sym_print] = ACTIONS(409),
        [anon_sym_COMMA] = ACTIONS(1388),
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
        [anon_sym_with] = ACTIONS(409),
        [anon_sym_def] = ACTIONS(409),
        [anon_sym_class] = ACTIONS(409),
        [anon_sym_AT] = ACTIONS(301),
        [anon_sym_PLUS] = ACTIONS(1390),
        [anon_sym_LBRACK] = ACTIONS(1168),
        [sym_number] = ACTIONS(409),
        [sym_identifier] = ACTIONS(413),
        [sym_comment] = ACTIONS(67),
        [sym__newline] = ACTIONS(301),
        [sym__dedent] = ACTIONS(301),
    },
    [541] = {
        [sym__expression] = STATE(547),
        [sym_binary_operator] = STATE(341),
        [sym_subscript] = STATE(341),
        [sym_number] = ACTIONS(755),
        [sym_identifier] = ACTIONS(755),
        [sym_comment] = ACTIONS(67),
    },
    [542] = {
        [sym__expression] = STATE(546),
        [sym_binary_operator] = STATE(341),
        [sym_subscript] = STATE(341),
        [sym_number] = ACTIONS(755),
        [sym_identifier] = ACTIONS(755),
        [sym_comment] = ACTIONS(67),
    },
    [543] = {
        [ts_builtin_sym_end] = ACTIONS(303),
        [anon_sym_SEMI] = ACTIONS(303),
        [anon_sym_print] = ACTIONS(415),
        [anon_sym_COMMA] = ACTIONS(1392),
        [anon_sym_return] = ACTIONS(415),
        [anon_sym_del] = ACTIONS(415),
        [sym_pass_statement] = ACTIONS(415),
        [sym_break_statement] = ACTIONS(415),
        [sym_continue_statement] = ACTIONS(415),
        [anon_sym_if] = ACTIONS(415),
        [anon_sym_elif] = ACTIONS(415),
        [anon_sym_else] = ACTIONS(415),
        [anon_sym_for] = ACTIONS(415),
        [anon_sym_while] = ACTIONS(415),
        [anon_sym_try] = ACTIONS(415),
        [anon_sym_with] = ACTIONS(415),
        [anon_sym_def] = ACTIONS(415),
        [anon_sym_class] = ACTIONS(415),
        [anon_sym_AT] = ACTIONS(303),
        [sym_number] = ACTIONS(415),
        [sym_identifier] = ACTIONS(419),
        [sym_comment] = ACTIONS(67),
        [sym__newline] = ACTIONS(303),
        [sym__dedent] = ACTIONS(303),
    },
    [544] = {
        [sym__expression] = STATE(545),
        [sym_binary_operator] = STATE(341),
        [sym_subscript] = STATE(341),
        [sym_number] = ACTIONS(755),
        [sym_identifier] = ACTIONS(755),
        [sym_comment] = ACTIONS(67),
    },
    [545] = {
        [ts_builtin_sym_end] = ACTIONS(277),
        [anon_sym_SEMI] = ACTIONS(277),
        [anon_sym_print] = ACTIONS(421),
        [anon_sym_COMMA] = ACTIONS(277),
        [anon_sym_return] = ACTIONS(421),
        [anon_sym_del] = ACTIONS(421),
        [sym_pass_statement] = ACTIONS(421),
        [sym_break_statement] = ACTIONS(421),
        [sym_continue_statement] = ACTIONS(421),
        [anon_sym_if] = ACTIONS(421),
        [anon_sym_elif] = ACTIONS(421),
        [anon_sym_else] = ACTIONS(421),
        [anon_sym_for] = ACTIONS(421),
        [anon_sym_while] = ACTIONS(421),
        [anon_sym_try] = ACTIONS(421),
        [anon_sym_with] = ACTIONS(421),
        [anon_sym_def] = ACTIONS(421),
        [anon_sym_class] = ACTIONS(421),
        [anon_sym_AT] = ACTIONS(277),
        [anon_sym_PLUS] = ACTIONS(1390),
        [anon_sym_LBRACK] = ACTIONS(1168),
        [sym_number] = ACTIONS(421),
        [sym_identifier] = ACTIONS(423),
        [sym_comment] = ACTIONS(67),
        [sym__newline] = ACTIONS(277),
        [sym__dedent] = ACTIONS(277),
    },
    [546] = {
        [ts_builtin_sym_end] = ACTIONS(239),
        [anon_sym_SEMI] = ACTIONS(239),
        [anon_sym_print] = ACTIONS(241),
        [anon_sym_COMMA] = ACTIONS(239),
        [anon_sym_return] = ACTIONS(241),
        [anon_sym_del] = ACTIONS(241),
        [sym_pass_statement] = ACTIONS(241),
        [sym_break_statement] = ACTIONS(241),
        [sym_continue_statement] = ACTIONS(241),
        [anon_sym_if] = ACTIONS(241),
        [anon_sym_elif] = ACTIONS(241),
        [anon_sym_else] = ACTIONS(241),
        [anon_sym_for] = ACTIONS(241),
        [anon_sym_while] = ACTIONS(241),
        [anon_sym_try] = ACTIONS(241),
        [anon_sym_with] = ACTIONS(241),
        [anon_sym_def] = ACTIONS(241),
        [anon_sym_class] = ACTIONS(241),
        [anon_sym_AT] = ACTIONS(239),
        [anon_sym_PLUS] = ACTIONS(1394),
        [anon_sym_LBRACK] = ACTIONS(1095),
        [sym_number] = ACTIONS(241),
        [sym_identifier] = ACTIONS(243),
        [sym_comment] = ACTIONS(67),
        [sym__newline] = ACTIONS(239),
        [sym__dedent] = ACTIONS(239),
    },
    [547] = {
        [ts_builtin_sym_end] = ACTIONS(279),
        [anon_sym_SEMI] = ACTIONS(279),
        [anon_sym_print] = ACTIONS(425),
        [anon_sym_COMMA] = ACTIONS(279),
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
        [anon_sym_with] = ACTIONS(425),
        [anon_sym_def] = ACTIONS(425),
        [anon_sym_class] = ACTIONS(425),
        [anon_sym_AT] = ACTIONS(279),
        [anon_sym_PLUS] = ACTIONS(1390),
        [anon_sym_LBRACK] = ACTIONS(1168),
        [sym_number] = ACTIONS(425),
        [sym_identifier] = ACTIONS(427),
        [sym_comment] = ACTIONS(67),
        [sym__newline] = ACTIONS(279),
        [sym__dedent] = ACTIONS(279),
    },
    [548] = {
        [aux_sym_print_statement_repeat1] = STATE(549),
        [ts_builtin_sym_end] = ACTIONS(437),
        [anon_sym_SEMI] = ACTIONS(437),
        [anon_sym_print] = ACTIONS(435),
        [anon_sym_COMMA] = ACTIONS(1388),
        [anon_sym_return] = ACTIONS(435),
        [anon_sym_del] = ACTIONS(435),
        [sym_pass_statement] = ACTIONS(435),
        [sym_break_statement] = ACTIONS(435),
        [sym_continue_statement] = ACTIONS(435),
        [anon_sym_if] = ACTIONS(435),
        [anon_sym_elif] = ACTIONS(435),
        [anon_sym_else] = ACTIONS(435),
        [anon_sym_for] = ACTIONS(435),
        [anon_sym_while] = ACTIONS(435),
        [anon_sym_try] = ACTIONS(435),
        [anon_sym_with] = ACTIONS(435),
        [anon_sym_def] = ACTIONS(435),
        [anon_sym_class] = ACTIONS(435),
        [anon_sym_AT] = ACTIONS(437),
        [anon_sym_PLUS] = ACTIONS(1390),
        [anon_sym_LBRACK] = ACTIONS(1168),
        [sym_number] = ACTIONS(435),
        [sym_identifier] = ACTIONS(439),
        [sym_comment] = ACTIONS(67),
        [sym__newline] = ACTIONS(437),
        [sym__dedent] = ACTIONS(437),
    },
    [549] = {
        [ts_builtin_sym_end] = ACTIONS(443),
        [anon_sym_SEMI] = ACTIONS(443),
        [anon_sym_print] = ACTIONS(441),
        [anon_sym_COMMA] = ACTIONS(1392),
        [anon_sym_return] = ACTIONS(441),
        [anon_sym_del] = ACTIONS(441),
        [sym_pass_statement] = ACTIONS(441),
        [sym_break_statement] = ACTIONS(441),
        [sym_continue_statement] = ACTIONS(441),
        [anon_sym_if] = ACTIONS(441),
        [anon_sym_elif] = ACTIONS(441),
        [anon_sym_else] = ACTIONS(441),
        [anon_sym_for] = ACTIONS(441),
        [anon_sym_while] = ACTIONS(441),
        [anon_sym_try] = ACTIONS(441),
        [anon_sym_with] = ACTIONS(441),
        [anon_sym_def] = ACTIONS(441),
        [anon_sym_class] = ACTIONS(441),
        [anon_sym_AT] = ACTIONS(443),
        [sym_number] = ACTIONS(441),
        [sym_identifier] = ACTIONS(445),
        [sym_comment] = ACTIONS(67),
        [sym__newline] = ACTIONS(443),
        [sym__dedent] = ACTIONS(443),
    },
    [550] = {
        [anon_sym_COLON] = ACTIONS(1397),
        [anon_sym_PLUS] = ACTIONS(191),
        [anon_sym_LBRACK] = ACTIONS(193),
        [sym_comment] = ACTIONS(67),
    },
    [551] = {
        [sym__simple_statement] = STATE(379),
        [sym_print_statement] = STATE(318),
        [sym_expression_statement] = STATE(318),
        [sym_return_statement] = STATE(318),
        [sym_delete_statement] = STATE(318),
        [sym__suite] = STATE(552),
        [sym__expression] = STATE(537),
        [sym_binary_operator] = STATE(341),
        [sym_subscript] = STATE(341),
        [anon_sym_print] = ACTIONS(1377),
        [anon_sym_return] = ACTIONS(1379),
        [anon_sym_del] = ACTIONS(1381),
        [sym_pass_statement] = ACTIONS(777),
        [sym_break_statement] = ACTIONS(777),
        [sym_continue_statement] = ACTIONS(777),
        [sym_number] = ACTIONS(755),
        [sym_identifier] = ACTIONS(779),
        [sym_comment] = ACTIONS(67),
        [sym__indent] = ACTIONS(781),
    },
    [552] = {
        [sym_elif_clause] = STATE(425),
        [sym_else_clause] = STATE(553),
        [aux_sym_if_statement_repeat1] = STATE(366),
        [ts_builtin_sym_end] = ACTIONS(677),
        [anon_sym_SEMI] = ACTIONS(677),
        [anon_sym_print] = ACTIONS(673),
        [anon_sym_return] = ACTIONS(673),
        [anon_sym_del] = ACTIONS(673),
        [sym_pass_statement] = ACTIONS(673),
        [sym_break_statement] = ACTIONS(673),
        [sym_continue_statement] = ACTIONS(673),
        [anon_sym_if] = ACTIONS(673),
        [anon_sym_elif] = ACTIONS(1140),
        [anon_sym_else] = ACTIONS(1142),
        [anon_sym_for] = ACTIONS(673),
        [anon_sym_while] = ACTIONS(673),
        [anon_sym_try] = ACTIONS(673),
        [anon_sym_with] = ACTIONS(673),
        [anon_sym_def] = ACTIONS(673),
        [anon_sym_class] = ACTIONS(673),
        [anon_sym_AT] = ACTIONS(677),
        [sym_number] = ACTIONS(673),
        [sym_identifier] = ACTIONS(679),
        [sym_comment] = ACTIONS(67),
        [sym__newline] = ACTIONS(677),
        [sym__dedent] = ACTIONS(677),
    },
    [553] = {
        [ts_builtin_sym_end] = ACTIONS(689),
        [anon_sym_SEMI] = ACTIONS(689),
        [anon_sym_print] = ACTIONS(687),
        [anon_sym_return] = ACTIONS(687),
        [anon_sym_del] = ACTIONS(687),
        [sym_pass_statement] = ACTIONS(687),
        [sym_break_statement] = ACTIONS(687),
        [sym_continue_statement] = ACTIONS(687),
        [anon_sym_if] = ACTIONS(687),
        [anon_sym_for] = ACTIONS(687),
        [anon_sym_while] = ACTIONS(687),
        [anon_sym_try] = ACTIONS(687),
        [anon_sym_with] = ACTIONS(687),
        [anon_sym_def] = ACTIONS(687),
        [anon_sym_class] = ACTIONS(687),
        [anon_sym_AT] = ACTIONS(689),
        [sym_number] = ACTIONS(687),
        [sym_identifier] = ACTIONS(691),
        [sym_comment] = ACTIONS(67),
        [sym__newline] = ACTIONS(689),
        [sym__dedent] = ACTIONS(689),
    },
    [554] = {
        [aux_sym_print_statement_repeat1] = STATE(557),
        [ts_builtin_sym_end] = ACTIONS(301),
        [anon_sym_SEMI] = ACTIONS(301),
        [anon_sym_print] = ACTIONS(409),
        [anon_sym_COMMA] = ACTIONS(1399),
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
        [anon_sym_AT] = ACTIONS(301),
        [anon_sym_PLUS] = ACTIONS(1401),
        [anon_sym_LBRACK] = ACTIONS(1168),
        [sym_number] = ACTIONS(409),
        [sym_identifier] = ACTIONS(413),
        [sym_comment] = ACTIONS(67),
        [sym__newline] = ACTIONS(301),
        [sym__dedent] = ACTIONS(301),
    },
    [555] = {
        [sym__expression] = STATE(561),
        [sym_binary_operator] = STATE(341),
        [sym_subscript] = STATE(341),
        [sym_number] = ACTIONS(755),
        [sym_identifier] = ACTIONS(755),
        [sym_comment] = ACTIONS(67),
    },
    [556] = {
        [sym__expression] = STATE(560),
        [sym_binary_operator] = STATE(341),
        [sym_subscript] = STATE(341),
        [sym_number] = ACTIONS(755),
        [sym_identifier] = ACTIONS(755),
        [sym_comment] = ACTIONS(67),
    },
    [557] = {
        [ts_builtin_sym_end] = ACTIONS(303),
        [anon_sym_SEMI] = ACTIONS(303),
        [anon_sym_print] = ACTIONS(415),
        [anon_sym_COMMA] = ACTIONS(1403),
        [anon_sym_return] = ACTIONS(415),
        [anon_sym_del] = ACTIONS(415),
        [sym_pass_statement] = ACTIONS(415),
        [sym_break_statement] = ACTIONS(415),
        [sym_continue_statement] = ACTIONS(415),
        [anon_sym_if] = ACTIONS(415),
        [anon_sym_elif] = ACTIONS(415),
        [anon_sym_else] = ACTIONS(415),
        [anon_sym_for] = ACTIONS(415),
        [anon_sym_while] = ACTIONS(415),
        [anon_sym_try] = ACTIONS(415),
        [anon_sym_except] = ACTIONS(415),
        [anon_sym_finally] = ACTIONS(415),
        [anon_sym_with] = ACTIONS(415),
        [anon_sym_def] = ACTIONS(415),
        [anon_sym_class] = ACTIONS(415),
        [anon_sym_AT] = ACTIONS(303),
        [sym_number] = ACTIONS(415),
        [sym_identifier] = ACTIONS(419),
        [sym_comment] = ACTIONS(67),
        [sym__newline] = ACTIONS(303),
        [sym__dedent] = ACTIONS(303),
    },
    [558] = {
        [sym__expression] = STATE(559),
        [sym_binary_operator] = STATE(341),
        [sym_subscript] = STATE(341),
        [sym_number] = ACTIONS(755),
        [sym_identifier] = ACTIONS(755),
        [sym_comment] = ACTIONS(67),
    },
    [559] = {
        [ts_builtin_sym_end] = ACTIONS(277),
        [anon_sym_SEMI] = ACTIONS(277),
        [anon_sym_print] = ACTIONS(421),
        [anon_sym_COMMA] = ACTIONS(277),
        [anon_sym_return] = ACTIONS(421),
        [anon_sym_del] = ACTIONS(421),
        [sym_pass_statement] = ACTIONS(421),
        [sym_break_statement] = ACTIONS(421),
        [sym_continue_statement] = ACTIONS(421),
        [anon_sym_if] = ACTIONS(421),
        [anon_sym_elif] = ACTIONS(421),
        [anon_sym_else] = ACTIONS(421),
        [anon_sym_for] = ACTIONS(421),
        [anon_sym_while] = ACTIONS(421),
        [anon_sym_try] = ACTIONS(421),
        [anon_sym_except] = ACTIONS(421),
        [anon_sym_finally] = ACTIONS(421),
        [anon_sym_with] = ACTIONS(421),
        [anon_sym_def] = ACTIONS(421),
        [anon_sym_class] = ACTIONS(421),
        [anon_sym_AT] = ACTIONS(277),
        [anon_sym_PLUS] = ACTIONS(1401),
        [anon_sym_LBRACK] = ACTIONS(1168),
        [sym_number] = ACTIONS(421),
        [sym_identifier] = ACTIONS(423),
        [sym_comment] = ACTIONS(67),
        [sym__newline] = ACTIONS(277),
        [sym__dedent] = ACTIONS(277),
    },
    [560] = {
        [ts_builtin_sym_end] = ACTIONS(239),
        [anon_sym_SEMI] = ACTIONS(239),
        [anon_sym_print] = ACTIONS(241),
        [anon_sym_COMMA] = ACTIONS(239),
        [anon_sym_return] = ACTIONS(241),
        [anon_sym_del] = ACTIONS(241),
        [sym_pass_statement] = ACTIONS(241),
        [sym_break_statement] = ACTIONS(241),
        [sym_continue_statement] = ACTIONS(241),
        [anon_sym_if] = ACTIONS(241),
        [anon_sym_elif] = ACTIONS(241),
        [anon_sym_else] = ACTIONS(241),
        [anon_sym_for] = ACTIONS(241),
        [anon_sym_while] = ACTIONS(241),
        [anon_sym_try] = ACTIONS(241),
        [anon_sym_except] = ACTIONS(241),
        [anon_sym_finally] = ACTIONS(241),
        [anon_sym_with] = ACTIONS(241),
        [anon_sym_def] = ACTIONS(241),
        [anon_sym_class] = ACTIONS(241),
        [anon_sym_AT] = ACTIONS(239),
        [anon_sym_PLUS] = ACTIONS(1405),
        [anon_sym_LBRACK] = ACTIONS(1095),
        [sym_number] = ACTIONS(241),
        [sym_identifier] = ACTIONS(243),
        [sym_comment] = ACTIONS(67),
        [sym__newline] = ACTIONS(239),
        [sym__dedent] = ACTIONS(239),
    },
    [561] = {
        [ts_builtin_sym_end] = ACTIONS(279),
        [anon_sym_SEMI] = ACTIONS(279),
        [anon_sym_print] = ACTIONS(425),
        [anon_sym_COMMA] = ACTIONS(279),
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
        [anon_sym_AT] = ACTIONS(279),
        [anon_sym_PLUS] = ACTIONS(1401),
        [anon_sym_LBRACK] = ACTIONS(1168),
        [sym_number] = ACTIONS(425),
        [sym_identifier] = ACTIONS(427),
        [sym_comment] = ACTIONS(67),
        [sym__newline] = ACTIONS(279),
        [sym__dedent] = ACTIONS(279),
    },
    [562] = {
        [anon_sym_COMMA] = ACTIONS(1408),
        [anon_sym_RBRACK] = ACTIONS(1408),
        [sym_comment] = ACTIONS(67),
    },
    [563] = {
        [ts_builtin_sym_end] = ACTIONS(1411),
        [anon_sym_SEMI] = ACTIONS(1411),
        [anon_sym_print] = ACTIONS(1414),
        [anon_sym_COMMA] = ACTIONS(1411),
        [anon_sym_return] = ACTIONS(1414),
        [anon_sym_del] = ACTIONS(1414),
        [sym_pass_statement] = ACTIONS(1414),
        [sym_break_statement] = ACTIONS(1414),
        [sym_continue_statement] = ACTIONS(1414),
        [anon_sym_if] = ACTIONS(1414),
        [anon_sym_COLON] = ACTIONS(1411),
        [anon_sym_elif] = ACTIONS(1414),
        [anon_sym_else] = ACTIONS(1414),
        [anon_sym_for] = ACTIONS(1414),
        [anon_sym_in] = ACTIONS(1414),
        [anon_sym_while] = ACTIONS(1414),
        [anon_sym_try] = ACTIONS(1414),
        [anon_sym_except] = ACTIONS(1414),
        [anon_sym_as] = ACTIONS(1414),
        [anon_sym_finally] = ACTIONS(1414),
        [anon_sym_with] = ACTIONS(1414),
        [anon_sym_def] = ACTIONS(1414),
        [anon_sym_RPAREN] = ACTIONS(1411),
        [anon_sym_class] = ACTIONS(1414),
        [anon_sym_AT] = ACTIONS(1411),
        [anon_sym_PLUS] = ACTIONS(1411),
        [anon_sym_LBRACK] = ACTIONS(1411),
        [anon_sym_RBRACK] = ACTIONS(1411),
        [sym_number] = ACTIONS(1414),
        [sym_identifier] = ACTIONS(1417),
        [sym_comment] = ACTIONS(67),
        [sym__newline] = ACTIONS(1411),
        [sym__dedent] = ACTIONS(1411),
    },
    [564] = {
        [anon_sym_COMMA] = ACTIONS(1420),
        [anon_sym_COLON] = ACTIONS(1420),
        [sym_comment] = ACTIONS(67),
    },
    [565] = {
        [ts_builtin_sym_end] = ACTIONS(1423),
        [anon_sym_SEMI] = ACTIONS(1423),
        [anon_sym_print] = ACTIONS(1426),
        [anon_sym_COMMA] = ACTIONS(1429),
        [anon_sym_return] = ACTIONS(1426),
        [anon_sym_del] = ACTIONS(1426),
        [sym_pass_statement] = ACTIONS(1426),
        [sym_break_statement] = ACTIONS(1426),
        [sym_continue_statement] = ACTIONS(1426),
        [anon_sym_if] = ACTIONS(1426),
        [anon_sym_COLON] = ACTIONS(1435),
        [anon_sym_elif] = ACTIONS(1426),
        [anon_sym_else] = ACTIONS(1426),
        [anon_sym_for] = ACTIONS(1426),
        [anon_sym_in] = ACTIONS(1426),
        [anon_sym_while] = ACTIONS(1426),
        [anon_sym_try] = ACTIONS(1426),
        [anon_sym_except] = ACTIONS(1426),
        [anon_sym_as] = ACTIONS(1440),
        [anon_sym_finally] = ACTIONS(1426),
        [anon_sym_with] = ACTIONS(1426),
        [anon_sym_def] = ACTIONS(1426),
        [anon_sym_RPAREN] = ACTIONS(1423),
        [anon_sym_class] = ACTIONS(1426),
        [anon_sym_AT] = ACTIONS(1423),
        [anon_sym_PLUS] = ACTIONS(1442),
        [anon_sym_LBRACK] = ACTIONS(1168),
        [anon_sym_RBRACK] = ACTIONS(1408),
        [sym_number] = ACTIONS(1426),
        [sym_identifier] = ACTIONS(1444),
        [sym_comment] = ACTIONS(67),
        [sym__newline] = ACTIONS(1423),
        [sym__dedent] = ACTIONS(1423),
    },
    [566] = {
        [aux_sym_print_statement_repeat1] = STATE(567),
        [ts_builtin_sym_end] = ACTIONS(437),
        [anon_sym_SEMI] = ACTIONS(437),
        [anon_sym_print] = ACTIONS(435),
        [anon_sym_COMMA] = ACTIONS(1399),
        [anon_sym_return] = ACTIONS(435),
        [anon_sym_del] = ACTIONS(435),
        [sym_pass_statement] = ACTIONS(435),
        [sym_break_statement] = ACTIONS(435),
        [sym_continue_statement] = ACTIONS(435),
        [anon_sym_if] = ACTIONS(435),
        [anon_sym_elif] = ACTIONS(435),
        [anon_sym_else] = ACTIONS(435),
        [anon_sym_for] = ACTIONS(435),
        [anon_sym_while] = ACTIONS(435),
        [anon_sym_try] = ACTIONS(435),
        [anon_sym_except] = ACTIONS(435),
        [anon_sym_finally] = ACTIONS(435),
        [anon_sym_with] = ACTIONS(435),
        [anon_sym_def] = ACTIONS(435),
        [anon_sym_class] = ACTIONS(435),
        [anon_sym_AT] = ACTIONS(437),
        [anon_sym_PLUS] = ACTIONS(1401),
        [anon_sym_LBRACK] = ACTIONS(1168),
        [sym_number] = ACTIONS(435),
        [sym_identifier] = ACTIONS(439),
        [sym_comment] = ACTIONS(67),
        [sym__newline] = ACTIONS(437),
        [sym__dedent] = ACTIONS(437),
    },
    [567] = {
        [ts_builtin_sym_end] = ACTIONS(443),
        [anon_sym_SEMI] = ACTIONS(443),
        [anon_sym_print] = ACTIONS(441),
        [anon_sym_COMMA] = ACTIONS(1403),
        [anon_sym_return] = ACTIONS(441),
        [anon_sym_del] = ACTIONS(441),
        [sym_pass_statement] = ACTIONS(441),
        [sym_break_statement] = ACTIONS(441),
        [sym_continue_statement] = ACTIONS(441),
        [anon_sym_if] = ACTIONS(441),
        [anon_sym_elif] = ACTIONS(441),
        [anon_sym_else] = ACTIONS(441),
        [anon_sym_for] = ACTIONS(441),
        [anon_sym_while] = ACTIONS(441),
        [anon_sym_try] = ACTIONS(441),
        [anon_sym_except] = ACTIONS(441),
        [anon_sym_finally] = ACTIONS(441),
        [anon_sym_with] = ACTIONS(441),
        [anon_sym_def] = ACTIONS(441),
        [anon_sym_class] = ACTIONS(441),
        [anon_sym_AT] = ACTIONS(443),
        [sym_number] = ACTIONS(441),
        [sym_identifier] = ACTIONS(445),
        [sym_comment] = ACTIONS(67),
        [sym__newline] = ACTIONS(443),
        [sym__dedent] = ACTIONS(443),
    },
};

static TSParseActionEntry ts_parse_actions[] = {
    [0] = {.count = 0, .reusable = false, .depends_on_lookahead = false},
    [1] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(0),
    [3] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(26),
    [5] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(314),
    [7] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(315),
    [9] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(316),
    [11] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(317),
    [13] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(318),
    [15] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(319),
    [17] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(320),
    [19] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(321),
    [21] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(322),
    [23] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(323),
    [25] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(324),
    [27] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(325),
    [29] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(326),
    [31] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(327),
    [33] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(328),
    [35] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(329),
    [37] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(330),
    [39] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(331),
    [41] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(332),
    [43] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(333),
    [45] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(169),
    [47] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(334),
    [49] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(335),
    [51] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(13),
    [53] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(336),
    [55] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(337),
    [57] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(338),
    [59] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(339),
    [61] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(340),
    [63] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(341),
    [65] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, RECOVER(342),
    [67] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT_EXTRA(),
    [69] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(343),
    [71] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(344),
    [73] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(345),
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
    [111] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(31),
    [113] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(269),
    [115] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(259),
    [117] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(75),
    [119] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(56),
    [121] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__expression, 1),
    [123] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__expression, 1),
    [125] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__expression, 1),
    [127] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, ACCEPT_INPUT(),
    [129] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_module_repeat1, 1),
    [131] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_module_repeat1, 1),
    [133] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_module_repeat1, 1),
    [135] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(55),
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
    [159] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_expression_statement, 1),
    [161] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_module, 1),
    [163] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(26),
    [165] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(11),
    [167] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(12),
    [169] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_decorated_definition, 2),
    [171] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_decorated_definition, 2),
    [173] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_decorated_definition, 2),
    [175] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_decorated_definition_repeat1, 2),
    [177] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_module, 2),
    [179] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_module_repeat1, 2),
    [181] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_module_repeat1, 2),
    [183] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_module_repeat1, 2),
    [185] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(30),
    [187] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(33),
    [189] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(36),
    [191] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(34),
    [193] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(35),
    [195] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(51),
    [197] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(39),
    [199] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(43),
    [201] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_subscript, 4),
    [203] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_subscript, 4),
    [205] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_subscript, 4),
    [207] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(38),
    [209] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(40),
    [211] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(41),
    [213] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_subscript, 5),
    [215] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_subscript, 5),
    [217] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_subscript, 5),
    [219] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_subscript_repeat1, 3),
    [221] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_subscript, 6),
    [223] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_subscript, 6),
    [225] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_subscript, 6),
    [227] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(45),
    [229] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(46),
    [231] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(49),
    [233] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(48),
    [235] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(50),
    [237] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_subscript_repeat1, 2),
    [239] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE_FRAGILE(sym_binary_operator, 3),
    [241] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE_FRAGILE(sym_binary_operator, 3),
    [243] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE_FRAGILE(sym_binary_operator, 3),
    [245] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__statement, 2),
    [247] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__statement, 2),
    [249] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__statement, 2),
    [251] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_dotted_name, 1),
    [253] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(70),
    [255] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(58),
    [257] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(59),
    [259] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_decorator, 3),
    [261] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(61),
    [263] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_decorator, 4),
    [265] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(63),
    [267] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(64),
    [269] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_arguments, 3),
    [271] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(66),
    [273] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(67),
    [275] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_arguments, 4),
    [277] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_print_statement_repeat1, 3),
    [279] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_print_statement_repeat1, 2),
    [281] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(74),
    [283] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_dotted_name, 2),
    [285] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(72),
    [287] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(73),
    [289] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_dotted_name_repeat1, 3),
    [291] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_dotted_name_repeat1, 2),
    [293] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(76),
    [295] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(77),
    [297] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(83),
    [299] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(81),
    [301] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_expression_list, 1),
    [303] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_expression_list, 2),
    [305] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(82),
    [307] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(86),
    [309] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(87),
    [311] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(88),
    [313] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(89),
    [315] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(90),
    [317] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(91),
    [319] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(92),
    [321] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(93),
    [323] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__suite, 1),
    [325] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__suite, 1),
    [327] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__suite, 1),
    [329] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_class_definition, 7),
    [331] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_class_definition, 7),
    [333] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_class_definition, 7),
    [335] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(189),
    [337] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(144),
    [339] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(104),
    [341] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__suite, 2),
    [343] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__suite, 2),
    [345] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__suite, 2),
    [347] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(103),
    [349] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(101),
    [351] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(91),
    [353] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(92),
    [355] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__suite, 3),
    [357] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__suite, 3),
    [359] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__suite, 3),
    [361] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(105),
    [363] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(106),
    [365] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(110),
    [367] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(111),
    [369] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(112),
    [371] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(113),
    [373] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(114),
    [375] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(114),
    [377] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(115),
    [379] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(108),
    [381] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(109),
    [383] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(130),
    [385] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(119),
    [387] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(120),
    [389] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(121),
    [391] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(123),
    [393] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(124),
    [395] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(127),
    [397] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(126),
    [399] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(128),
    [401] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(132),
    [403] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_delete_statement, 2),
    [405] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_delete_statement, 2),
    [407] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_delete_statement, 2),
    [409] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_expression_list, 1),
    [411] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(135),
    [413] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_expression_list, 1),
    [415] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_expression_list, 2),
    [417] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(137),
    [419] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_expression_list, 2),
    [421] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_print_statement_repeat1, 3),
    [423] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_print_statement_repeat1, 3),
    [425] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_print_statement_repeat1, 2),
    [427] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_print_statement_repeat1, 2),
    [429] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_return_statement, 2),
    [431] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_return_statement, 2),
    [433] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_return_statement, 2),
    [435] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_print_statement, 2),
    [437] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_print_statement, 2),
    [439] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_print_statement, 2),
    [441] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_print_statement, 3),
    [443] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_print_statement, 3),
    [445] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_print_statement, 3),
    [447] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_class_definition, 4),
    [449] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_class_definition, 4),
    [451] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_class_definition, 4),
    [453] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(145),
    [455] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(149),
    [457] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(150),
    [459] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(151),
    [461] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(147),
    [463] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_function_definition, 5),
    [465] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_function_definition, 5),
    [467] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_function_definition, 5),
    [469] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_parameters, 2),
    [471] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(165),
    [473] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(175),
    [475] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(174),
    [477] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(171),
    [479] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(169),
    [481] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(172),
    [483] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(156),
    [485] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(167),
    [487] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(160),
    [489] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(161),
    [491] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_parameters, 4),
    [493] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(162),
    [495] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(164),
    [497] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_parameters, 6),
    [499] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(166),
    [501] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_dictionary_splat_parameter, 3),
    [503] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(168),
    [505] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_parameters_repeat1, 3),
    [507] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_parameters_repeat1, 3),
    [509] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_parameters, 5),
    [511] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_default_parameter, 3),
    [513] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_parameters, 3),
    [515] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_parameters_repeat1, 2),
    [517] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_parameters_repeat1, 2),
    [519] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_list_splat_parameter, 2),
    [521] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(180),
    [523] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(181),
    [525] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_with_item, 1),
    [527] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(178),
    [529] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_with_item, 3),
    [531] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(183),
    [533] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(184),
    [535] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_with_statement, 5),
    [537] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_with_statement, 5),
    [539] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_with_statement, 5),
    [541] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_with_statement_repeat1, 3),
    [543] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_with_statement, 4),
    [545] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_with_statement, 4),
    [547] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_with_statement, 4),
    [549] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_with_statement_repeat1, 2),
    [551] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(190),
    [553] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(191),
    [555] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(192),
    [557] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(193),
    [559] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(31),
    [561] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(194),
    [563] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(219),
    [565] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(198),
    [567] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(199),
    [569] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(210),
    [571] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_try_statement_repeat1, 1),
    [573] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_try_statement_repeat1, 1),
    [575] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_try_statement_repeat1, 1),
    [577] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_try_statement, 4),
    [579] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_try_statement, 4),
    [581] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_try_statement, 4),
    [583] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(203),
    [585] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(198),
    [587] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(199),
    [589] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(208),
    [591] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_try_statement, 5),
    [593] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_try_statement, 5),
    [595] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_try_statement, 5),
    [597] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_try_statement_repeat1, 2),
    [599] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_try_statement_repeat1, 2),
    [601] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_try_statement_repeat1, 2),
    [603] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_try_statement, 6),
    [605] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_try_statement, 6),
    [607] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_try_statement, 6),
    [609] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_else_clause, 3),
    [611] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_else_clause, 3),
    [613] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_else_clause, 3),
    [615] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_finally_clause, 3),
    [617] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_finally_clause, 3),
    [619] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_finally_clause, 3),
    [621] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(213),
    [623] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(214),
    [625] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(216),
    [627] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_except_clause, 6),
    [629] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_except_clause, 6),
    [631] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_except_clause, 6),
    [633] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_except_clause, 4),
    [635] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_except_clause, 4),
    [637] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_except_clause, 4),
    [639] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(221),
    [641] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(227),
    [643] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_while_statement, 4),
    [645] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_while_statement, 4),
    [647] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_while_statement, 4),
    [649] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_while_statement, 5),
    [651] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_while_statement, 5),
    [653] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_while_statement, 5),
    [655] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(231),
    [657] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(233),
    [659] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_for_statement, 6),
    [661] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_for_statement, 6),
    [663] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_for_statement, 6),
    [665] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_for_statement, 7),
    [667] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_for_statement, 7),
    [669] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_for_statement, 7),
    [671] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(237),
    [673] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_if_statement, 4),
    [675] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(239),
    [677] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_if_statement, 4),
    [679] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_if_statement, 4),
    [681] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_if_statement_repeat1, 1),
    [683] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_if_statement_repeat1, 1),
    [685] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_if_statement_repeat1, 1),
    [687] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_if_statement, 5),
    [689] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_if_statement, 5),
    [691] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_if_statement, 5),
    [693] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_if_statement_repeat1, 2),
    [695] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_if_statement_repeat1, 2),
    [697] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_if_statement_repeat1, 2),
    [699] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_if_statement, 6),
    [701] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_if_statement, 6),
    [703] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_if_statement, 6),
    [705] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(246),
    [707] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_elif_clause, 4),
    [709] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_elif_clause, 4),
    [711] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_elif_clause, 4),
    [713] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(250),
    [715] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(252),
    [717] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(261),
    [719] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(264),
    [721] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(266),
    [723] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(271),
    [725] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(272),
    [727] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(283),
    [729] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(276),
    [731] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(271),
    [733] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(272),
    [735] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(281),
    [737] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(286),
    [739] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(287),
    [741] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(289),
    [743] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(293),
    [745] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(297),
    [747] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(299),
    [749] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(303),
    [751] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(305),
    [753] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(312),
    [755] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(341),
    [757] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(479),
    [759] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_parameters_repeat1, 2), REDUCE(aux_sym_parameters_repeat1, 3), SHIFT(162),
    [763] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(562),
    [765] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(563),
    [767] = {.count = 3, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_parameters_repeat1, 2), REDUCE(aux_sym_parameters_repeat1, 3), SHIFT(341),
    [771] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(314),
    [773] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(316),
    [775] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(317),
    [777] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(318),
    [779] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(341),
    [781] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(344),
    [783] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(514),
    [785] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(506),
    [787] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(498),
    [789] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(496),
    [791] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(486),
    [793] = {.count = 6, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_parameters, 2), REDUCE(sym_parameters, 3), REDUCE(sym_parameters, 4), REDUCE(sym_parameters, 5), REDUCE(sym_parameters, 6), SHIFT(450),
    [800] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_arguments, 3), REDUCE(sym_arguments, 4),
    [803] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(493),
    [805] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(491),
    [807] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(490),
    [809] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(383),
    [811] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_subscript_repeat1, 2), REDUCE(aux_sym_subscript_repeat1, 3), SHIFT(385),
    [815] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_subscript_repeat1, 2), REDUCE(aux_sym_subscript_repeat1, 3), SHIFT(386),
    [819] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_subscript, 4), REDUCE(sym_subscript, 5), REDUCE(sym_subscript, 6),
    [823] = {.count = 3, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_subscript, 4), REDUCE(sym_subscript, 5), REDUCE(sym_subscript, 6),
    [827] = {.count = 3, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_subscript, 4), REDUCE(sym_subscript, 5), REDUCE(sym_subscript, 6),
    [831] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__expression, 1), REDUCE(sym_list_splat_parameter, 2), SHIFT(478),
    [835] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__expression, 1), SHIFT(484),
    [838] = {.count = 4, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_dotted_name, 1), REDUCE(aux_sym_dotted_name_repeat1, 2), REDUCE(aux_sym_dotted_name_repeat1, 3), SHIFT(485),
    [843] = {.count = 4, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__expression, 1), REDUCE(sym_list_splat_parameter, 2), REDUCE(sym_dictionary_splat_parameter, 3), SHIFT(475),
    [848] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_dotted_name_repeat1, 2), REDUCE(aux_sym_dotted_name_repeat1, 3), SHIFT(70),
    [852] = {.count = 4, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_dotted_name, 1), REDUCE(sym__expression, 1), REDUCE(aux_sym_dotted_name_repeat1, 2), REDUCE(aux_sym_dotted_name_repeat1, 3),
    [857] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_module, 2), REDUCE(sym__statement, 2),
    [860] = {.count = 3, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__statement, 2), REDUCE(sym_decorator, 3), REDUCE(sym_decorator, 4),
    [864] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__statement, 2), REDUCE(sym_decorator, 3), REDUCE(sym_decorator, 4),
    [868] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(388),
    [870] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__suite, 2), REDUCE(sym__suite, 3),
    [873] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__suite, 2), REDUCE(sym__suite, 3),
    [876] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__suite, 2), REDUCE(sym__suite, 3),
    [879] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_module_repeat1, 1), REDUCE(aux_sym_module_repeat1, 2),
    [882] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_module_repeat1, 1), REDUCE(aux_sym_module_repeat1, 2),
    [885] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_module_repeat1, 1), REDUCE(aux_sym_module_repeat1, 2),
    [888] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__suite, 1), SHIFT(418),
    [891] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_if_statement_repeat1, 1), REDUCE(aux_sym_if_statement_repeat1, 2),
    [894] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_if_statement_repeat1, 1), REDUCE(aux_sym_if_statement_repeat1, 2),
    [897] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_if_statement_repeat1, 1), REDUCE(aux_sym_if_statement_repeat1, 2),
    [900] = {.count = 5, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_if_statement, 5), REDUCE(sym_while_statement, 5), REDUCE(sym_try_statement, 5), REDUCE(sym_if_statement, 6), REDUCE(sym_for_statement, 7),
    [906] = {.count = 5, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_if_statement, 5), REDUCE(sym_while_statement, 5), REDUCE(sym_try_statement, 5), REDUCE(sym_if_statement, 6), REDUCE(sym_for_statement, 7),
    [912] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(329),
    [914] = {.count = 5, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_if_statement, 5), REDUCE(sym_while_statement, 5), REDUCE(sym_try_statement, 5), REDUCE(sym_if_statement, 6), REDUCE(sym_for_statement, 7),
    [920] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_try_statement_repeat1, 1), REDUCE(aux_sym_try_statement_repeat1, 2),
    [923] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_try_statement_repeat1, 1), REDUCE(aux_sym_try_statement_repeat1, 2),
    [926] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_try_statement_repeat1, 1), REDUCE(aux_sym_try_statement_repeat1, 2),
    [929] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_try_statement, 4), REDUCE(sym_try_statement, 5), REDUCE(sym_try_statement, 6),
    [933] = {.count = 3, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_try_statement, 4), REDUCE(sym_try_statement, 5), REDUCE(sym_try_statement, 6),
    [937] = {.count = 3, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_try_statement, 4), REDUCE(sym_try_statement, 5), REDUCE(sym_try_statement, 6),
    [941] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_with_statement_repeat1, 2), REDUCE(aux_sym_with_statement_repeat1, 3), SHIFT(180),
    [945] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_with_statement_repeat1, 2), REDUCE(aux_sym_with_statement_repeat1, 3), SHIFT(482),
    [949] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__compound_statement, 1), REDUCE(sym_decorated_definition, 2),
    [952] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__compound_statement, 1), REDUCE(sym_decorated_definition, 2),
    [955] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__compound_statement, 1), REDUCE(sym_decorated_definition, 2),
    [958] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(480),
    [960] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(478),
    [962] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(475),
    [964] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(474),
    [966] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(473),
    [968] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_decorated_definition_repeat1, 1), REDUCE(aux_sym_decorated_definition_repeat1, 2),
    [971] = {.count = 13, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_else_clause, 3), REDUCE(sym_finally_clause, 3), REDUCE(sym_if_statement, 4), REDUCE(sym_elif_clause, 4), REDUCE(sym_while_statement, 4), REDUCE(sym_except_clause, 4), REDUCE(sym_with_statement, 4), REDUCE(sym_class_definition, 4), REDUCE(sym_with_statement, 5), REDUCE(sym_function_definition, 5), REDUCE(sym_for_statement, 6), REDUCE(sym_except_clause, 6), REDUCE(sym_class_definition, 7),
    [985] = {.count = 13, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_else_clause, 3), REDUCE(sym_finally_clause, 3), REDUCE(sym_if_statement, 4), REDUCE(sym_elif_clause, 4), REDUCE(sym_while_statement, 4), REDUCE(sym_except_clause, 4), REDUCE(sym_with_statement, 4), REDUCE(sym_class_definition, 4), REDUCE(sym_with_statement, 5), REDUCE(sym_function_definition, 5), REDUCE(sym_for_statement, 6), REDUCE(sym_except_clause, 6), REDUCE(sym_class_definition, 7),
    [999] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_elif_clause, 4), SHIFT(321),
    [1002] = {.count = 4, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_elif_clause, 4), REDUCE(sym_except_clause, 4), REDUCE(sym_except_clause, 6), SHIFT(407),
    [1007] = {.count = 3, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_except_clause, 4), REDUCE(sym_except_clause, 6), SHIFT(327),
    [1011] = {.count = 4, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_else_clause, 3), REDUCE(sym_except_clause, 4), REDUCE(sym_except_clause, 6), SHIFT(329),
    [1016] = {.count = 13, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_else_clause, 3), REDUCE(sym_finally_clause, 3), REDUCE(sym_if_statement, 4), REDUCE(sym_elif_clause, 4), REDUCE(sym_while_statement, 4), REDUCE(sym_except_clause, 4), REDUCE(sym_with_statement, 4), REDUCE(sym_class_definition, 4), REDUCE(sym_with_statement, 5), REDUCE(sym_function_definition, 5), REDUCE(sym_for_statement, 6), REDUCE(sym_except_clause, 6), REDUCE(sym_class_definition, 7),
    [1030] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_return_statement, 2), REDUCE(sym_delete_statement, 2),
    [1033] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_return_statement, 2), REDUCE(sym_delete_statement, 2),
    [1036] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(448),
    [1038] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(324),
    [1040] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(449),
    [1042] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_return_statement, 2), REDUCE(sym_delete_statement, 2),
    [1045] = {.count = 6, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_expression_statement, 1), REDUCE(sym_expression_list, 1), REDUCE(sym_print_statement, 2), REDUCE(aux_sym_print_statement_repeat1, 2), REDUCE_FRAGILE(sym_binary_operator, 3), REDUCE(aux_sym_print_statement_repeat1, 3),
    [1052] = {.count = 6, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_expression_statement, 1), REDUCE(sym_expression_list, 1), REDUCE(sym_print_statement, 2), REDUCE(aux_sym_print_statement_repeat1, 2), REDUCE_FRAGILE(sym_binary_operator, 3), REDUCE(aux_sym_print_statement_repeat1, 3),
    [1059] = {.count = 9, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_with_item, 1), REDUCE(aux_sym_print_statement_repeat1, 2), REDUCE(aux_sym_subscript_repeat1, 2), REDUCE(sym_with_item, 3), REDUCE(sym_default_parameter, 3), REDUCE_FRAGILE(sym_binary_operator, 3), REDUCE(aux_sym_print_statement_repeat1, 3), REDUCE(aux_sym_subscript_repeat1, 3), SHIFT(419),
    [1069] = {.count = 7, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_with_item, 1), REDUCE(sym_expression_list, 1), REDUCE(aux_sym_print_statement_repeat1, 2), REDUCE(sym_with_item, 3), REDUCE_FRAGILE(sym_binary_operator, 3), REDUCE(aux_sym_print_statement_repeat1, 3), SHIFT(420),
    [1077] = {.count = 4, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_expression_list, 1), REDUCE(aux_sym_print_statement_repeat1, 2), REDUCE_FRAGILE(sym_binary_operator, 3), REDUCE(aux_sym_print_statement_repeat1, 3),
    [1082] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE_FRAGILE(sym_binary_operator, 3), SHIFT(328),
    [1085] = {.count = 6, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_expression_list, 1), REDUCE(aux_sym_print_statement_repeat1, 2), REDUCE(sym_default_parameter, 3), REDUCE_FRAGILE(sym_binary_operator, 3), REDUCE(aux_sym_print_statement_repeat1, 3), SHIFT(64),
    [1092] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE_FRAGILE(sym_binary_operator, 3), SHIFT(337),
    [1095] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE_FRAGILE(sym_binary_operator, 3), SHIFT(338),
    [1098] = {.count = 4, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_subscript_repeat1, 2), REDUCE_FRAGILE(sym_binary_operator, 3), REDUCE(aux_sym_subscript_repeat1, 3), SHIFT(386),
    [1103] = {.count = 6, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_expression_statement, 1), REDUCE(sym_expression_list, 1), REDUCE(sym_print_statement, 2), REDUCE(aux_sym_print_statement_repeat1, 2), REDUCE_FRAGILE(sym_binary_operator, 3), REDUCE(aux_sym_print_statement_repeat1, 3),
    [1110] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(319),
    [1112] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(323),
    [1114] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(325),
    [1116] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(326),
    [1118] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(330),
    [1120] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(331),
    [1122] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(335),
    [1124] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(390),
    [1126] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_expression_list, 2), REDUCE(sym_print_statement, 3),
    [1129] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_expression_list, 2), REDUCE(sym_print_statement, 3),
    [1132] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(412),
    [1134] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_expression_list, 2), SHIFT(67),
    [1137] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_expression_list, 2), REDUCE(sym_print_statement, 3),
    [1140] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(321),
    [1142] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(407),
    [1144] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(322),
    [1146] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(327),
    [1148] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(375),
    [1150] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(331),
    [1152] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(335),
    [1154] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(371),
    [1156] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(372),
    [1158] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(373),
    [1160] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(376),
    [1162] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(377),
    [1164] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(378),
    [1166] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(382),
    [1168] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(338),
    [1170] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(385),
    [1172] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(386),
    [1174] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE_FRAGILE(sym_binary_operator, 3), SHIFT(382),
    [1177] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(393),
    [1179] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(394),
    [1181] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(396),
    [1183] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE_FRAGILE(sym_binary_operator, 3), SHIFT(394),
    [1186] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(410),
    [1188] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(414),
    [1190] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE_FRAGILE(sym_binary_operator, 3), SHIFT(414),
    [1193] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(418),
    [1195] = {.count = 5, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_if_statement, 4), REDUCE(sym_elif_clause, 4), REDUCE(sym_while_statement, 4), REDUCE(sym_except_clause, 4), REDUCE(sym_except_clause, 6),
    [1201] = {.count = 5, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_if_statement, 4), REDUCE(sym_elif_clause, 4), REDUCE(sym_while_statement, 4), REDUCE(sym_except_clause, 4), REDUCE(sym_except_clause, 6),
    [1207] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_except_clause, 4), REDUCE(sym_except_clause, 6),
    [1210] = {.count = 5, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_if_statement, 4), REDUCE(sym_elif_clause, 4), REDUCE(sym_while_statement, 4), REDUCE(sym_except_clause, 4), REDUCE(sym_except_clause, 6),
    [1216] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(423),
    [1218] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE_FRAGILE(sym_binary_operator, 3), SHIFT(423),
    [1221] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_if_statement, 5), REDUCE(sym_while_statement, 5),
    [1224] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_if_statement, 5), REDUCE(sym_while_statement, 5),
    [1227] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_if_statement, 5), REDUCE(sym_while_statement, 5),
    [1230] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_print_statement_repeat1, 2), REDUCE(aux_sym_subscript_repeat1, 2),
    [1233] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_print_statement_repeat1, 2), SHIFT(428),
    [1236] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(429),
    [1238] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(431),
    [1240] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(432),
    [1242] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(433),
    [1244] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE_FRAGILE(sym_binary_operator, 3), SHIFT(429),
    [1247] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(436),
    [1249] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE_FRAGILE(sym_binary_operator, 3), SHIFT(436),
    [1252] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(439),
    [1254] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(440),
    [1256] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(442),
    [1258] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE_FRAGILE(sym_binary_operator, 3), SHIFT(440),
    [1261] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(452),
    [1263] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(453),
    [1265] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(454),
    [1267] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(450),
    [1269] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(457),
    [1271] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE_FRAGILE(sym_binary_operator, 3), SHIFT(457),
    [1274] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(461),
    [1276] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(462),
    [1278] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(464),
    [1280] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE_FRAGILE(sym_binary_operator, 3), SHIFT(462),
    [1283] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_if_statement, 5), REDUCE(sym_while_statement, 5), REDUCE(sym_for_statement, 7),
    [1287] = {.count = 3, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_if_statement, 5), REDUCE(sym_while_statement, 5), REDUCE(sym_for_statement, 7),
    [1291] = {.count = 3, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_if_statement, 5), REDUCE(sym_while_statement, 5), REDUCE(sym_for_statement, 7),
    [1295] = {.count = 4, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_parameters, 3), REDUCE(sym_parameters, 4), REDUCE(sym_parameters, 5), REDUCE(sym_parameters, 6),
    [1300] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_parameters, 3), REDUCE(sym_parameters, 4),
    [1303] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(477),
    [1305] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_parameters, 5), REDUCE(sym_parameters, 6),
    [1308] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_parameters_repeat1, 2), REDUCE(aux_sym_parameters_repeat1, 3),
    [1311] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_parameters_repeat1, 2), REDUCE(aux_sym_parameters_repeat1, 3),
    [1314] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_parameters, 4), REDUCE(sym_parameters, 5),
    [1317] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__expression, 1), SHIFT(174),
    [1320] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__expression, 1), SHIFT(171),
    [1323] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_dotted_name_repeat1, 2), REDUCE(aux_sym_dotted_name_repeat1, 3),
    [1326] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(484),
    [1328] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(492),
    [1330] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_list_splat_parameter, 2), REDUCE(sym_dictionary_splat_parameter, 3),
    [1333] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_expression_list, 1), SHIFT(64),
    [1336] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(482),
    [1338] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_with_item, 3), SHIFT(428),
    [1341] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(502),
    [1343] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(503),
    [1345] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(428),
    [1347] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(327),
    [1349] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(329),
    [1351] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(509),
    [1353] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(324),
    [1355] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(515),
    [1357] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(516),
    [1359] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(517),
    [1361] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(519),
    [1363] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE_FRAGILE(sym_binary_operator, 3), SHIFT(519),
    [1366] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(522),
    [1368] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(523),
    [1370] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(525),
    [1372] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE_FRAGILE(sym_binary_operator, 3), SHIFT(523),
    [1375] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(532),
    [1377] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(533),
    [1379] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(534),
    [1381] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(535),
    [1383] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(538),
    [1385] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE_FRAGILE(sym_binary_operator, 3), SHIFT(538),
    [1388] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(541),
    [1390] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(542),
    [1392] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(544),
    [1394] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE_FRAGILE(sym_binary_operator, 3), SHIFT(542),
    [1397] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(551),
    [1399] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(555),
    [1401] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(556),
    [1403] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(558),
    [1405] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE_FRAGILE(sym_binary_operator, 3), SHIFT(556),
    [1408] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_subscript_repeat1, 2), REDUCE(aux_sym_subscript_repeat1, 3),
    [1411] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_subscript, 5), REDUCE(sym_subscript, 6),
    [1414] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_subscript, 5), REDUCE(sym_subscript, 6),
    [1417] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_subscript, 5), REDUCE(sym_subscript, 6),
    [1420] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_with_statement_repeat1, 2), REDUCE(aux_sym_with_statement_repeat1, 3),
    [1423] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_print_statement_repeat1, 2), REDUCE(aux_sym_print_statement_repeat1, 3),
    [1426] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_print_statement_repeat1, 2), REDUCE(aux_sym_print_statement_repeat1, 3),
    [1429] = {.count = 5, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_with_item, 1), REDUCE(aux_sym_print_statement_repeat1, 2), REDUCE(aux_sym_subscript_repeat1, 2), REDUCE(aux_sym_print_statement_repeat1, 3), REDUCE(aux_sym_subscript_repeat1, 3),
    [1435] = {.count = 4, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_with_item, 1), REDUCE(aux_sym_print_statement_repeat1, 2), REDUCE(aux_sym_print_statement_repeat1, 3), SHIFT(428),
    [1440] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(178),
    [1442] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(337),
    [1444] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_print_statement_repeat1, 2), REDUCE(aux_sym_print_statement_repeat1, 3),
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
