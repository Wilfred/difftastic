#include <tree_sitter/parser.h>

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"

#define STATE_COUNT 400
#define SYMBOL_COUNT 55
#define TOKEN_COUNT 26
#define EXTERNAL_TOKEN_COUNT 3

enum {
    anon_sym_SEMI = 1,
    anon_sym_print = 2,
    anon_sym_COMMA = 3,
    anon_sym_if = 4,
    anon_sym_COLON = 5,
    anon_sym_elif = 6,
    anon_sym_else = 7,
    anon_sym_for = 8,
    anon_sym_in = 9,
    anon_sym_while = 10,
    anon_sym_try = 11,
    anon_sym_except = 12,
    anon_sym_as = 13,
    anon_sym_finally = 14,
    anon_sym_with = 15,
    anon_sym_def = 16,
    anon_sym_LPAREN = 17,
    anon_sym_RPAREN = 18,
    anon_sym_EQ = 19,
    anon_sym_PLUS = 20,
    sym_identifier = 21,
    sym_comment = 22,
    sym__newline = 23,
    sym__indent = 24,
    sym__dedent = 25,
    sym_module = 26,
    sym__statement = 27,
    sym__simple_statement = 28,
    sym_print_statement = 29,
    sym_expression_statement = 30,
    sym__compound_statement = 31,
    sym_if_statement = 32,
    sym_elif_clause = 33,
    sym_else_clause = 34,
    sym_for_statement = 35,
    sym_while_statement = 36,
    sym_try_statement = 37,
    sym_except_clause = 38,
    sym_finally_clause = 39,
    sym_with_statement = 40,
    sym_with_item = 41,
    sym_function_definition = 42,
    sym_parameters = 43,
    sym_default_parameter = 44,
    sym__suite = 45,
    sym_expression_list = 46,
    sym__expression = 47,
    sym_binary_operator = 48,
    aux_sym_module_repeat1 = 49,
    aux_sym_print_statement_repeat1 = 50,
    aux_sym_if_statement_repeat1 = 51,
    aux_sym_try_statement_repeat1 = 52,
    aux_sym_with_statement_repeat1 = 53,
    aux_sym_parameters_repeat1 = 54,
};

static const char *ts_symbol_names[] = {
    [ts_builtin_sym_end] = "END",
    [anon_sym_SEMI] = ";",
    [anon_sym_print] = "print",
    [anon_sym_COMMA] = ",",
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
    [anon_sym_PLUS] = "+",
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
    [sym__suite] = "_suite",
    [sym_expression_list] = "expression_list",
    [sym__expression] = "_expression",
    [sym_binary_operator] = "binary_operator",
    [aux_sym_module_repeat1] = "module_repeat1",
    [aux_sym_print_statement_repeat1] = "print_statement_repeat1",
    [aux_sym_if_statement_repeat1] = "if_statement_repeat1",
    [aux_sym_try_statement_repeat1] = "try_statement_repeat1",
    [aux_sym_with_statement_repeat1] = "with_statement_repeat1",
    [aux_sym_parameters_repeat1] = "parameters_repeat1",
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
    [anon_sym_PLUS] = {
        .visible = true,
        .named = false,
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
    [sym__suite] = {
        .visible = false,
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
            if (lookahead == '+')
                ADVANCE(6);
            if (lookahead == ',')
                ADVANCE(7);
            if (lookahead == ':')
                ADVANCE(8);
            if (lookahead == ';')
                ADVANCE(9);
            if (lookahead == '=')
                ADVANCE(10);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == 'b') ||
                (lookahead == 'c') ||
                (lookahead == 'g') ||
                (lookahead == 'h') ||
                ('j' <= lookahead && lookahead <= 'o') ||
                ('q' <= lookahead && lookahead <= 's') ||
                (lookahead == 'u') ||
                (lookahead == 'v') ||
                ('x' <= lookahead && lookahead <= 'z'))
                ADVANCE(11);
            if (lookahead == 'a')
                ADVANCE(12);
            if (lookahead == 'd')
                ADVANCE(14);
            if (lookahead == 'e')
                ADVANCE(17);
            if (lookahead == 'f')
                ADVANCE(28);
            if (lookahead == 'i')
                ADVANCE(37);
            if (lookahead == 'p')
                ADVANCE(40);
            if (lookahead == 't')
                ADVANCE(45);
            if (lookahead == 'w')
                ADVANCE(48);
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
            ACCEPT_TOKEN(anon_sym_PLUS);
        case 7:
            ACCEPT_TOKEN(anon_sym_COMMA);
        case 8:
            ACCEPT_TOKEN(anon_sym_COLON);
        case 9:
            ACCEPT_TOKEN(anon_sym_SEMI);
        case 10:
            ACCEPT_TOKEN(anon_sym_EQ);
        case 11:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(11);
            ACCEPT_TOKEN(sym_identifier);
        case 12:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'r') ||
                ('t' <= lookahead && lookahead <= 'z'))
                ADVANCE(11);
            if (lookahead == 's')
                ADVANCE(13);
            ACCEPT_TOKEN(sym_identifier);
        case 13:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(11);
            ACCEPT_TOKEN(anon_sym_as);
        case 14:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'z'))
                ADVANCE(11);
            if (lookahead == 'e')
                ADVANCE(15);
            ACCEPT_TOKEN(sym_identifier);
        case 15:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'e') ||
                ('g' <= lookahead && lookahead <= 'z'))
                ADVANCE(11);
            if (lookahead == 'f')
                ADVANCE(16);
            ACCEPT_TOKEN(sym_identifier);
        case 16:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(11);
            ACCEPT_TOKEN(anon_sym_def);
        case 17:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'k') ||
                ('m' <= lookahead && lookahead <= 'w') ||
                (lookahead == 'y') ||
                (lookahead == 'z'))
                ADVANCE(11);
            if (lookahead == 'l')
                ADVANCE(18);
            if (lookahead == 'x')
                ADVANCE(23);
            ACCEPT_TOKEN(sym_identifier);
        case 18:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'h') ||
                ('j' <= lookahead && lookahead <= 'r') ||
                ('t' <= lookahead && lookahead <= 'z'))
                ADVANCE(11);
            if (lookahead == 'i')
                ADVANCE(19);
            if (lookahead == 's')
                ADVANCE(21);
            ACCEPT_TOKEN(sym_identifier);
        case 19:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'e') ||
                ('g' <= lookahead && lookahead <= 'z'))
                ADVANCE(11);
            if (lookahead == 'f')
                ADVANCE(20);
            ACCEPT_TOKEN(sym_identifier);
        case 20:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(11);
            ACCEPT_TOKEN(anon_sym_elif);
        case 21:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'z'))
                ADVANCE(11);
            if (lookahead == 'e')
                ADVANCE(22);
            ACCEPT_TOKEN(sym_identifier);
        case 22:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(11);
            ACCEPT_TOKEN(anon_sym_else);
        case 23:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                (lookahead == 'a') ||
                (lookahead == 'b') ||
                ('d' <= lookahead && lookahead <= 'z'))
                ADVANCE(11);
            if (lookahead == 'c')
                ADVANCE(24);
            ACCEPT_TOKEN(sym_identifier);
        case 24:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'z'))
                ADVANCE(11);
            if (lookahead == 'e')
                ADVANCE(25);
            ACCEPT_TOKEN(sym_identifier);
        case 25:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'o') ||
                ('q' <= lookahead && lookahead <= 'z'))
                ADVANCE(11);
            if (lookahead == 'p')
                ADVANCE(26);
            ACCEPT_TOKEN(sym_identifier);
        case 26:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 's') ||
                ('u' <= lookahead && lookahead <= 'z'))
                ADVANCE(11);
            if (lookahead == 't')
                ADVANCE(27);
            ACCEPT_TOKEN(sym_identifier);
        case 27:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(11);
            ACCEPT_TOKEN(anon_sym_except);
        case 28:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'h') ||
                ('j' <= lookahead && lookahead <= 'n') ||
                ('p' <= lookahead && lookahead <= 'z'))
                ADVANCE(11);
            if (lookahead == 'i')
                ADVANCE(29);
            if (lookahead == 'o')
                ADVANCE(35);
            ACCEPT_TOKEN(sym_identifier);
        case 29:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'm') ||
                ('o' <= lookahead && lookahead <= 'z'))
                ADVANCE(11);
            if (lookahead == 'n')
                ADVANCE(30);
            ACCEPT_TOKEN(sym_identifier);
        case 30:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(11);
            if (lookahead == 'a')
                ADVANCE(31);
            ACCEPT_TOKEN(sym_identifier);
        case 31:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'k') ||
                ('m' <= lookahead && lookahead <= 'z'))
                ADVANCE(11);
            if (lookahead == 'l')
                ADVANCE(32);
            ACCEPT_TOKEN(sym_identifier);
        case 32:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'k') ||
                ('m' <= lookahead && lookahead <= 'z'))
                ADVANCE(11);
            if (lookahead == 'l')
                ADVANCE(33);
            ACCEPT_TOKEN(sym_identifier);
        case 33:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'x') ||
                (lookahead == 'z'))
                ADVANCE(11);
            if (lookahead == 'y')
                ADVANCE(34);
            ACCEPT_TOKEN(sym_identifier);
        case 34:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(11);
            ACCEPT_TOKEN(anon_sym_finally);
        case 35:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'q') ||
                ('s' <= lookahead && lookahead <= 'z'))
                ADVANCE(11);
            if (lookahead == 'r')
                ADVANCE(36);
            ACCEPT_TOKEN(sym_identifier);
        case 36:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(11);
            ACCEPT_TOKEN(anon_sym_for);
        case 37:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'e') ||
                ('g' <= lookahead && lookahead <= 'm') ||
                ('o' <= lookahead && lookahead <= 'z'))
                ADVANCE(11);
            if (lookahead == 'f')
                ADVANCE(38);
            if (lookahead == 'n')
                ADVANCE(39);
            ACCEPT_TOKEN(sym_identifier);
        case 38:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(11);
            ACCEPT_TOKEN(anon_sym_if);
        case 39:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(11);
            ACCEPT_TOKEN(anon_sym_in);
        case 40:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'q') ||
                ('s' <= lookahead && lookahead <= 'z'))
                ADVANCE(11);
            if (lookahead == 'r')
                ADVANCE(41);
            ACCEPT_TOKEN(sym_identifier);
        case 41:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'h') ||
                ('j' <= lookahead && lookahead <= 'z'))
                ADVANCE(11);
            if (lookahead == 'i')
                ADVANCE(42);
            ACCEPT_TOKEN(sym_identifier);
        case 42:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'm') ||
                ('o' <= lookahead && lookahead <= 'z'))
                ADVANCE(11);
            if (lookahead == 'n')
                ADVANCE(43);
            ACCEPT_TOKEN(sym_identifier);
        case 43:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 's') ||
                ('u' <= lookahead && lookahead <= 'z'))
                ADVANCE(11);
            if (lookahead == 't')
                ADVANCE(44);
            ACCEPT_TOKEN(sym_identifier);
        case 44:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(11);
            ACCEPT_TOKEN(anon_sym_print);
        case 45:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'q') ||
                ('s' <= lookahead && lookahead <= 'z'))
                ADVANCE(11);
            if (lookahead == 'r')
                ADVANCE(46);
            ACCEPT_TOKEN(sym_identifier);
        case 46:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'x') ||
                (lookahead == 'z'))
                ADVANCE(11);
            if (lookahead == 'y')
                ADVANCE(47);
            ACCEPT_TOKEN(sym_identifier);
        case 47:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(11);
            ACCEPT_TOKEN(anon_sym_try);
        case 48:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'g') ||
                ('j' <= lookahead && lookahead <= 'z'))
                ADVANCE(11);
            if (lookahead == 'h')
                ADVANCE(49);
            if (lookahead == 'i')
                ADVANCE(53);
            ACCEPT_TOKEN(sym_identifier);
        case 49:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'h') ||
                ('j' <= lookahead && lookahead <= 'z'))
                ADVANCE(11);
            if (lookahead == 'i')
                ADVANCE(50);
            ACCEPT_TOKEN(sym_identifier);
        case 50:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'k') ||
                ('m' <= lookahead && lookahead <= 'z'))
                ADVANCE(11);
            if (lookahead == 'l')
                ADVANCE(51);
            ACCEPT_TOKEN(sym_identifier);
        case 51:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'z'))
                ADVANCE(11);
            if (lookahead == 'e')
                ADVANCE(52);
            ACCEPT_TOKEN(sym_identifier);
        case 52:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(11);
            ACCEPT_TOKEN(anon_sym_while);
        case 53:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 's') ||
                ('u' <= lookahead && lookahead <= 'z'))
                ADVANCE(11);
            if (lookahead == 't')
                ADVANCE(54);
            ACCEPT_TOKEN(sym_identifier);
        case 54:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'g') ||
                ('i' <= lookahead && lookahead <= 'z'))
                ADVANCE(11);
            if (lookahead == 'h')
                ADVANCE(55);
            ACCEPT_TOKEN(sym_identifier);
        case 55:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(11);
            ACCEPT_TOKEN(anon_sym_with);
        case 56:
            if (lookahead == 0)
                ADVANCE(1);
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(56);
            if (lookahead == '#')
                ADVANCE(2);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'c') ||
                (lookahead == 'e') ||
                (lookahead == 'g') ||
                (lookahead == 'h') ||
                ('j' <= lookahead && lookahead <= 'o') ||
                ('q' <= lookahead && lookahead <= 's') ||
                (lookahead == 'u') ||
                (lookahead == 'v') ||
                ('x' <= lookahead && lookahead <= 'z'))
                ADVANCE(11);
            if (lookahead == 'd')
                ADVANCE(14);
            if (lookahead == 'f')
                ADVANCE(57);
            if (lookahead == 'i')
                ADVANCE(58);
            if (lookahead == 'p')
                ADVANCE(40);
            if (lookahead == 't')
                ADVANCE(45);
            if (lookahead == 'w')
                ADVANCE(48);
            LEX_ERROR();
        case 57:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'n') ||
                ('p' <= lookahead && lookahead <= 'z'))
                ADVANCE(11);
            if (lookahead == 'o')
                ADVANCE(35);
            ACCEPT_TOKEN(sym_identifier);
        case 58:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'e') ||
                ('g' <= lookahead && lookahead <= 'z'))
                ADVANCE(11);
            if (lookahead == 'f')
                ADVANCE(38);
            ACCEPT_TOKEN(sym_identifier);
        case 59:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(59);
            if (lookahead == '#')
                ADVANCE(2);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(11);
            LEX_ERROR();
        case 60:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(60);
            if (lookahead == '#')
                ADVANCE(2);
            if (lookahead == ':')
                ADVANCE(8);
            LEX_ERROR();
        case 61:
            if (lookahead == 0)
                ADVANCE(1);
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(61);
            if (lookahead == '#')
                ADVANCE(2);
            if (lookahead == '+')
                ADVANCE(6);
            if (lookahead == ',')
                ADVANCE(7);
            if (lookahead == ';')
                ADVANCE(9);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'c') ||
                (lookahead == 'g') ||
                (lookahead == 'h') ||
                ('j' <= lookahead && lookahead <= 'o') ||
                ('q' <= lookahead && lookahead <= 's') ||
                (lookahead == 'u') ||
                (lookahead == 'v') ||
                ('x' <= lookahead && lookahead <= 'z'))
                ADVANCE(11);
            if (lookahead == 'd')
                ADVANCE(14);
            if (lookahead == 'e')
                ADVANCE(17);
            if (lookahead == 'f')
                ADVANCE(28);
            if (lookahead == 'i')
                ADVANCE(58);
            if (lookahead == 'p')
                ADVANCE(40);
            if (lookahead == 't')
                ADVANCE(45);
            if (lookahead == 'w')
                ADVANCE(48);
            LEX_ERROR();
        case 62:
            if (lookahead == 0)
                ADVANCE(1);
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(62);
            if (lookahead == '#')
                ADVANCE(2);
            LEX_ERROR();
        case 63:
            if (lookahead == 0)
                ADVANCE(1);
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(63);
            if (lookahead == '#')
                ADVANCE(2);
            if (lookahead == ';')
                ADVANCE(9);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'c') ||
                (lookahead == 'e') ||
                (lookahead == 'g') ||
                (lookahead == 'h') ||
                ('j' <= lookahead && lookahead <= 'o') ||
                ('q' <= lookahead && lookahead <= 's') ||
                (lookahead == 'u') ||
                (lookahead == 'v') ||
                ('x' <= lookahead && lookahead <= 'z'))
                ADVANCE(11);
            if (lookahead == 'd')
                ADVANCE(14);
            if (lookahead == 'f')
                ADVANCE(57);
            if (lookahead == 'i')
                ADVANCE(58);
            if (lookahead == 'p')
                ADVANCE(40);
            if (lookahead == 't')
                ADVANCE(45);
            if (lookahead == 'w')
                ADVANCE(48);
            LEX_ERROR();
        case 64:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(64);
            if (lookahead == '#')
                ADVANCE(2);
            LEX_ERROR();
        case 65:
            if (lookahead == 0)
                ADVANCE(1);
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(65);
            if (lookahead == '#')
                ADVANCE(2);
            if (lookahead == ';')
                ADVANCE(9);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'c') ||
                (lookahead == 'g') ||
                (lookahead == 'h') ||
                ('j' <= lookahead && lookahead <= 'o') ||
                ('q' <= lookahead && lookahead <= 's') ||
                (lookahead == 'u') ||
                (lookahead == 'v') ||
                ('x' <= lookahead && lookahead <= 'z'))
                ADVANCE(11);
            if (lookahead == 'd')
                ADVANCE(14);
            if (lookahead == 'e')
                ADVANCE(17);
            if (lookahead == 'f')
                ADVANCE(28);
            if (lookahead == 'i')
                ADVANCE(58);
            if (lookahead == 'p')
                ADVANCE(40);
            if (lookahead == 't')
                ADVANCE(45);
            if (lookahead == 'w')
                ADVANCE(48);
            LEX_ERROR();
        case 66:
            if (lookahead == 0)
                ADVANCE(1);
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(66);
            if (lookahead == '#')
                ADVANCE(2);
            if (lookahead == '+')
                ADVANCE(6);
            if (lookahead == ';')
                ADVANCE(9);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'c') ||
                (lookahead == 'g') ||
                (lookahead == 'h') ||
                ('j' <= lookahead && lookahead <= 'o') ||
                ('q' <= lookahead && lookahead <= 's') ||
                (lookahead == 'u') ||
                (lookahead == 'v') ||
                ('x' <= lookahead && lookahead <= 'z'))
                ADVANCE(11);
            if (lookahead == 'd')
                ADVANCE(14);
            if (lookahead == 'e')
                ADVANCE(17);
            if (lookahead == 'f')
                ADVANCE(28);
            if (lookahead == 'i')
                ADVANCE(58);
            if (lookahead == 'p')
                ADVANCE(40);
            if (lookahead == 't')
                ADVANCE(45);
            if (lookahead == 'w')
                ADVANCE(48);
            LEX_ERROR();
        case 67:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(67);
            if (lookahead == '#')
                ADVANCE(2);
            if (lookahead == '(')
                ADVANCE(4);
            LEX_ERROR();
        case 68:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(68);
            if (lookahead == '#')
                ADVANCE(2);
            if (lookahead == ')')
                ADVANCE(5);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(11);
            LEX_ERROR();
        case 69:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(69);
            if (lookahead == '#')
                ADVANCE(2);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'o') ||
                ('q' <= lookahead && lookahead <= 'z'))
                ADVANCE(11);
            if (lookahead == 'p')
                ADVANCE(40);
            LEX_ERROR();
        case 70:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(70);
            if (lookahead == '#')
                ADVANCE(2);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'c') ||
                (lookahead == 'e') ||
                (lookahead == 'g') ||
                (lookahead == 'h') ||
                ('j' <= lookahead && lookahead <= 'o') ||
                ('q' <= lookahead && lookahead <= 's') ||
                (lookahead == 'u') ||
                (lookahead == 'v') ||
                ('x' <= lookahead && lookahead <= 'z'))
                ADVANCE(11);
            if (lookahead == 'd')
                ADVANCE(14);
            if (lookahead == 'f')
                ADVANCE(57);
            if (lookahead == 'i')
                ADVANCE(58);
            if (lookahead == 'p')
                ADVANCE(40);
            if (lookahead == 't')
                ADVANCE(45);
            if (lookahead == 'w')
                ADVANCE(48);
            LEX_ERROR();
        case 71:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(71);
            if (lookahead == '#')
                ADVANCE(2);
            if (lookahead == '+')
                ADVANCE(6);
            if (lookahead == ',')
                ADVANCE(7);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'c') ||
                (lookahead == 'g') ||
                (lookahead == 'h') ||
                ('j' <= lookahead && lookahead <= 'o') ||
                ('q' <= lookahead && lookahead <= 's') ||
                (lookahead == 'u') ||
                (lookahead == 'v') ||
                ('x' <= lookahead && lookahead <= 'z'))
                ADVANCE(11);
            if (lookahead == 'd')
                ADVANCE(14);
            if (lookahead == 'e')
                ADVANCE(17);
            if (lookahead == 'f')
                ADVANCE(28);
            if (lookahead == 'i')
                ADVANCE(58);
            if (lookahead == 'p')
                ADVANCE(40);
            if (lookahead == 't')
                ADVANCE(45);
            if (lookahead == 'w')
                ADVANCE(48);
            LEX_ERROR();
        case 72:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(72);
            if (lookahead == '#')
                ADVANCE(2);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'c') ||
                (lookahead == 'g') ||
                (lookahead == 'h') ||
                ('j' <= lookahead && lookahead <= 'o') ||
                ('q' <= lookahead && lookahead <= 's') ||
                (lookahead == 'u') ||
                (lookahead == 'v') ||
                ('x' <= lookahead && lookahead <= 'z'))
                ADVANCE(11);
            if (lookahead == 'd')
                ADVANCE(14);
            if (lookahead == 'e')
                ADVANCE(17);
            if (lookahead == 'f')
                ADVANCE(28);
            if (lookahead == 'i')
                ADVANCE(58);
            if (lookahead == 'p')
                ADVANCE(40);
            if (lookahead == 't')
                ADVANCE(45);
            if (lookahead == 'w')
                ADVANCE(48);
            LEX_ERROR();
        case 73:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(73);
            if (lookahead == '#')
                ADVANCE(2);
            if (lookahead == '+')
                ADVANCE(6);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'c') ||
                (lookahead == 'g') ||
                (lookahead == 'h') ||
                ('j' <= lookahead && lookahead <= 'o') ||
                ('q' <= lookahead && lookahead <= 's') ||
                (lookahead == 'u') ||
                (lookahead == 'v') ||
                ('x' <= lookahead && lookahead <= 'z'))
                ADVANCE(11);
            if (lookahead == 'd')
                ADVANCE(14);
            if (lookahead == 'e')
                ADVANCE(17);
            if (lookahead == 'f')
                ADVANCE(28);
            if (lookahead == 'i')
                ADVANCE(58);
            if (lookahead == 'p')
                ADVANCE(40);
            if (lookahead == 't')
                ADVANCE(45);
            if (lookahead == 'w')
                ADVANCE(48);
            LEX_ERROR();
        case 74:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(74);
            if (lookahead == '#')
                ADVANCE(2);
            if (lookahead == ',')
                ADVANCE(7);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'c') ||
                (lookahead == 'g') ||
                (lookahead == 'h') ||
                ('j' <= lookahead && lookahead <= 'o') ||
                ('q' <= lookahead && lookahead <= 's') ||
                (lookahead == 'u') ||
                (lookahead == 'v') ||
                ('x' <= lookahead && lookahead <= 'z'))
                ADVANCE(11);
            if (lookahead == 'd')
                ADVANCE(14);
            if (lookahead == 'e')
                ADVANCE(17);
            if (lookahead == 'f')
                ADVANCE(28);
            if (lookahead == 'i')
                ADVANCE(58);
            if (lookahead == 'p')
                ADVANCE(40);
            if (lookahead == 't')
                ADVANCE(45);
            if (lookahead == 'w')
                ADVANCE(48);
            LEX_ERROR();
        case 75:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(75);
            if (lookahead == '#')
                ADVANCE(2);
            if (lookahead == ')')
                ADVANCE(5);
            if (lookahead == '+')
                ADVANCE(6);
            if (lookahead == ',')
                ADVANCE(7);
            if (lookahead == ':')
                ADVANCE(8);
            if (lookahead == 'a')
                ADVANCE(76);
            if (lookahead == 'e')
                ADVANCE(78);
            if (lookahead == 'f')
                ADVANCE(84);
            if (lookahead == 'i')
                ADVANCE(91);
            LEX_ERROR();
        case 76:
            if (lookahead == 's')
                ADVANCE(77);
            LEX_ERROR();
        case 77:
            ACCEPT_TOKEN(anon_sym_as);
        case 78:
            if (lookahead == 'x')
                ADVANCE(79);
            LEX_ERROR();
        case 79:
            if (lookahead == 'c')
                ADVANCE(80);
            LEX_ERROR();
        case 80:
            if (lookahead == 'e')
                ADVANCE(81);
            LEX_ERROR();
        case 81:
            if (lookahead == 'p')
                ADVANCE(82);
            LEX_ERROR();
        case 82:
            if (lookahead == 't')
                ADVANCE(83);
            LEX_ERROR();
        case 83:
            ACCEPT_TOKEN(anon_sym_except);
        case 84:
            if (lookahead == 'i')
                ADVANCE(85);
            LEX_ERROR();
        case 85:
            if (lookahead == 'n')
                ADVANCE(86);
            LEX_ERROR();
        case 86:
            if (lookahead == 'a')
                ADVANCE(87);
            LEX_ERROR();
        case 87:
            if (lookahead == 'l')
                ADVANCE(88);
            LEX_ERROR();
        case 88:
            if (lookahead == 'l')
                ADVANCE(89);
            LEX_ERROR();
        case 89:
            if (lookahead == 'y')
                ADVANCE(90);
            LEX_ERROR();
        case 90:
            ACCEPT_TOKEN(anon_sym_finally);
        case 91:
            if (lookahead == 'n')
                ADVANCE(92);
            LEX_ERROR();
        case 92:
            ACCEPT_TOKEN(anon_sym_in);
        case 93:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(93);
            if (lookahead == '#')
                ADVANCE(2);
            if (lookahead == ',')
                ADVANCE(7);
            if (lookahead == ':')
                ADVANCE(8);
            LEX_ERROR();
        case 94:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(94);
            if (lookahead == '#')
                ADVANCE(2);
            if (lookahead == '+')
                ADVANCE(6);
            if (lookahead == ',')
                ADVANCE(7);
            if (lookahead == ':')
                ADVANCE(8);
            if (lookahead == 'a')
                ADVANCE(76);
            LEX_ERROR();
        case 95:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(95);
            if (lookahead == '#')
                ADVANCE(2);
            if (lookahead == '+')
                ADVANCE(6);
            if (lookahead == ',')
                ADVANCE(7);
            if (lookahead == ':')
                ADVANCE(8);
            LEX_ERROR();
        case 96:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(96);
            if (lookahead == '#')
                ADVANCE(2);
            if (lookahead == 'e')
                ADVANCE(78);
            if (lookahead == 'f')
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
            if (lookahead == '+')
                ADVANCE(6);
            if (lookahead == 'e')
                ADVANCE(78);
            if (lookahead == 'f')
                ADVANCE(84);
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
                ('a' <= lookahead && lookahead <= 'c') ||
                (lookahead == 'g') ||
                (lookahead == 'h') ||
                ('j' <= lookahead && lookahead <= 'o') ||
                ('q' <= lookahead && lookahead <= 's') ||
                (lookahead == 'u') ||
                (lookahead == 'v') ||
                ('x' <= lookahead && lookahead <= 'z'))
                ADVANCE(11);
            if (lookahead == 'd')
                ADVANCE(14);
            if (lookahead == 'e')
                ADVANCE(99);
            if (lookahead == 'f')
                ADVANCE(28);
            if (lookahead == 'i')
                ADVANCE(58);
            if (lookahead == 'p')
                ADVANCE(40);
            if (lookahead == 't')
                ADVANCE(45);
            if (lookahead == 'w')
                ADVANCE(48);
            LEX_ERROR();
        case 99:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'k') ||
                ('m' <= lookahead && lookahead <= 'w') ||
                (lookahead == 'y') ||
                (lookahead == 'z'))
                ADVANCE(11);
            if (lookahead == 'l')
                ADVANCE(100);
            if (lookahead == 'x')
                ADVANCE(23);
            ACCEPT_TOKEN(sym_identifier);
        case 100:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'r') ||
                ('t' <= lookahead && lookahead <= 'z'))
                ADVANCE(11);
            if (lookahead == 's')
                ADVANCE(21);
            ACCEPT_TOKEN(sym_identifier);
        case 101:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(101);
            if (lookahead == '#')
                ADVANCE(2);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'c') ||
                (lookahead == 'e') ||
                (lookahead == 'g') ||
                (lookahead == 'h') ||
                ('j' <= lookahead && lookahead <= 'o') ||
                ('q' <= lookahead && lookahead <= 's') ||
                (lookahead == 'u') ||
                (lookahead == 'v') ||
                ('x' <= lookahead && lookahead <= 'z'))
                ADVANCE(11);
            if (lookahead == 'd')
                ADVANCE(14);
            if (lookahead == 'f')
                ADVANCE(28);
            if (lookahead == 'i')
                ADVANCE(58);
            if (lookahead == 'p')
                ADVANCE(40);
            if (lookahead == 't')
                ADVANCE(45);
            if (lookahead == 'w')
                ADVANCE(48);
            LEX_ERROR();
        case 102:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(102);
            if (lookahead == '#')
                ADVANCE(2);
            if (lookahead == '+')
                ADVANCE(6);
            if (lookahead == ':')
                ADVANCE(8);
            LEX_ERROR();
        case 103:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(103);
            if (lookahead == '#')
                ADVANCE(2);
            if (lookahead == '+')
                ADVANCE(6);
            if (lookahead == ',')
                ADVANCE(7);
            if (lookahead == 'e')
                ADVANCE(78);
            if (lookahead == 'f')
                ADVANCE(84);
            LEX_ERROR();
        case 104:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(104);
            if (lookahead == '#')
                ADVANCE(2);
            if (lookahead == ',')
                ADVANCE(7);
            if (lookahead == 'e')
                ADVANCE(78);
            if (lookahead == 'f')
                ADVANCE(84);
            LEX_ERROR();
        case 105:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(105);
            if (lookahead == '#')
                ADVANCE(2);
            if (lookahead == '+')
                ADVANCE(6);
            if (lookahead == ',')
                ADVANCE(7);
            if (lookahead == ':')
                ADVANCE(8);
            if (lookahead == 'e')
                ADVANCE(78);
            if (lookahead == 'f')
                ADVANCE(84);
            if (lookahead == 'i')
                ADVANCE(91);
            LEX_ERROR();
        case 106:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(106);
            if (lookahead == '#')
                ADVANCE(2);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'c') ||
                (lookahead == 'g') ||
                (lookahead == 'h') ||
                ('j' <= lookahead && lookahead <= 'o') ||
                ('q' <= lookahead && lookahead <= 's') ||
                (lookahead == 'u') ||
                (lookahead == 'v') ||
                ('x' <= lookahead && lookahead <= 'z'))
                ADVANCE(11);
            if (lookahead == 'd')
                ADVANCE(14);
            if (lookahead == 'e')
                ADVANCE(107);
            if (lookahead == 'f')
                ADVANCE(57);
            if (lookahead == 'i')
                ADVANCE(58);
            if (lookahead == 'p')
                ADVANCE(40);
            if (lookahead == 't')
                ADVANCE(45);
            if (lookahead == 'w')
                ADVANCE(48);
            LEX_ERROR();
        case 107:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'k') ||
                ('m' <= lookahead && lookahead <= 'z'))
                ADVANCE(11);
            if (lookahead == 'l')
                ADVANCE(100);
            ACCEPT_TOKEN(sym_identifier);
        case 108:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(108);
            if (lookahead == '#')
                ADVANCE(2);
            if (lookahead == 'i')
                ADVANCE(91);
            LEX_ERROR();
        case 109:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(109);
            if (lookahead == '#')
                ADVANCE(2);
            if (lookahead == '+')
                ADVANCE(6);
            if (lookahead == ',')
                ADVANCE(7);
            if (lookahead == ':')
                ADVANCE(8);
            if (lookahead == 'i')
                ADVANCE(91);
            LEX_ERROR();
        case 110:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(110);
            if (lookahead == '#')
                ADVANCE(2);
            if (lookahead == ',')
                ADVANCE(7);
            if (lookahead == ':')
                ADVANCE(8);
            if (lookahead == 'i')
                ADVANCE(91);
            LEX_ERROR();
        case 111:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(111);
            if (lookahead == '#')
                ADVANCE(2);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'c') ||
                (lookahead == 'g') ||
                (lookahead == 'h') ||
                ('j' <= lookahead && lookahead <= 'o') ||
                ('q' <= lookahead && lookahead <= 's') ||
                (lookahead == 'u') ||
                (lookahead == 'v') ||
                ('x' <= lookahead && lookahead <= 'z'))
                ADVANCE(11);
            if (lookahead == 'd')
                ADVANCE(14);
            if (lookahead == 'e')
                ADVANCE(112);
            if (lookahead == 'f')
                ADVANCE(57);
            if (lookahead == 'i')
                ADVANCE(58);
            if (lookahead == 'p')
                ADVANCE(40);
            if (lookahead == 't')
                ADVANCE(45);
            if (lookahead == 'w')
                ADVANCE(48);
            LEX_ERROR();
        case 112:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'k') ||
                ('m' <= lookahead && lookahead <= 'z'))
                ADVANCE(11);
            if (lookahead == 'l')
                ADVANCE(18);
            ACCEPT_TOKEN(sym_identifier);
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
            if (lookahead == ',')
                ADVANCE(7);
            if (lookahead == ';')
                ADVANCE(9);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'c') ||
                (lookahead == 'g') ||
                (lookahead == 'h') ||
                ('j' <= lookahead && lookahead <= 'o') ||
                ('q' <= lookahead && lookahead <= 's') ||
                (lookahead == 'u') ||
                (lookahead == 'v') ||
                ('x' <= lookahead && lookahead <= 'z'))
                ADVANCE(11);
            if (lookahead == 'd')
                ADVANCE(14);
            if (lookahead == 'e')
                ADVANCE(17);
            if (lookahead == 'f')
                ADVANCE(28);
            if (lookahead == 'i')
                ADVANCE(58);
            if (lookahead == 'p')
                ADVANCE(40);
            if (lookahead == 't')
                ADVANCE(45);
            if (lookahead == 'w')
                ADVANCE(48);
            LEX_ERROR();
        case 114:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(114);
            if (lookahead == '#')
                ADVANCE(2);
            if (lookahead == ')')
                ADVANCE(5);
            if (lookahead == ',')
                ADVANCE(7);
            if (lookahead == '=')
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
            if (lookahead == ')')
                ADVANCE(5);
            if (lookahead == ',')
                ADVANCE(7);
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
                ADVANCE(6);
            if (lookahead == ',')
                ADVANCE(7);
            LEX_ERROR();
        case 117:
            if (lookahead == 0)
                ADVANCE(1);
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(117);
            if (lookahead == '#')
                ADVANCE(2);
            if (lookahead == ';')
                ADVANCE(9);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'c') ||
                (lookahead == 'g') ||
                (lookahead == 'h') ||
                ('j' <= lookahead && lookahead <= 'o') ||
                ('q' <= lookahead && lookahead <= 's') ||
                (lookahead == 'u') ||
                (lookahead == 'v') ||
                ('x' <= lookahead && lookahead <= 'z'))
                ADVANCE(11);
            if (lookahead == 'd')
                ADVANCE(14);
            if (lookahead == 'e')
                ADVANCE(99);
            if (lookahead == 'f')
                ADVANCE(28);
            if (lookahead == 'i')
                ADVANCE(58);
            if (lookahead == 'p')
                ADVANCE(40);
            if (lookahead == 't')
                ADVANCE(45);
            if (lookahead == 'w')
                ADVANCE(48);
            LEX_ERROR();
        case 118:
            if (lookahead == 0)
                ADVANCE(1);
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(118);
            if (lookahead == '#')
                ADVANCE(2);
            if (lookahead == ';')
                ADVANCE(9);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'c') ||
                (lookahead == 'e') ||
                (lookahead == 'g') ||
                (lookahead == 'h') ||
                ('j' <= lookahead && lookahead <= 'o') ||
                ('q' <= lookahead && lookahead <= 's') ||
                (lookahead == 'u') ||
                (lookahead == 'v') ||
                ('x' <= lookahead && lookahead <= 'z'))
                ADVANCE(11);
            if (lookahead == 'd')
                ADVANCE(14);
            if (lookahead == 'f')
                ADVANCE(28);
            if (lookahead == 'i')
                ADVANCE(58);
            if (lookahead == 'p')
                ADVANCE(40);
            if (lookahead == 't')
                ADVANCE(45);
            if (lookahead == 'w')
                ADVANCE(48);
            LEX_ERROR();
        case 119:
            if (lookahead == 0)
                ADVANCE(1);
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(119);
            if (lookahead == '#')
                ADVANCE(2);
            if (lookahead == ';')
                ADVANCE(9);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'c') ||
                (lookahead == 'g') ||
                (lookahead == 'h') ||
                ('j' <= lookahead && lookahead <= 'o') ||
                ('q' <= lookahead && lookahead <= 's') ||
                (lookahead == 'u') ||
                (lookahead == 'v') ||
                ('x' <= lookahead && lookahead <= 'z'))
                ADVANCE(11);
            if (lookahead == 'd')
                ADVANCE(14);
            if (lookahead == 'e')
                ADVANCE(107);
            if (lookahead == 'f')
                ADVANCE(57);
            if (lookahead == 'i')
                ADVANCE(58);
            if (lookahead == 'p')
                ADVANCE(40);
            if (lookahead == 't')
                ADVANCE(45);
            if (lookahead == 'w')
                ADVANCE(48);
            LEX_ERROR();
        case 120:
            if (lookahead == 0)
                ADVANCE(1);
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(120);
            if (lookahead == '#')
                ADVANCE(2);
            if (lookahead == ';')
                ADVANCE(9);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'c') ||
                (lookahead == 'g') ||
                (lookahead == 'h') ||
                ('j' <= lookahead && lookahead <= 'o') ||
                ('q' <= lookahead && lookahead <= 's') ||
                (lookahead == 'u') ||
                (lookahead == 'v') ||
                ('x' <= lookahead && lookahead <= 'z'))
                ADVANCE(11);
            if (lookahead == 'd')
                ADVANCE(14);
            if (lookahead == 'e')
                ADVANCE(112);
            if (lookahead == 'f')
                ADVANCE(57);
            if (lookahead == 'i')
                ADVANCE(58);
            if (lookahead == 'p')
                ADVANCE(40);
            if (lookahead == 't')
                ADVANCE(45);
            if (lookahead == 'w')
                ADVANCE(48);
            LEX_ERROR();
        case 121:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(121);
            if (lookahead == '#')
                ADVANCE(2);
            if (lookahead == ':')
                ADVANCE(8);
            if (lookahead == 'i')
                ADVANCE(91);
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
            if (lookahead == ')')
                ADVANCE(5);
            if (lookahead == '+')
                ADVANCE(6);
            if (lookahead == ',')
                ADVANCE(7);
            if (lookahead == ':')
                ADVANCE(8);
            if (lookahead == ';')
                ADVANCE(9);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == 'b') ||
                (lookahead == 'c') ||
                (lookahead == 'g') ||
                (lookahead == 'h') ||
                ('j' <= lookahead && lookahead <= 'o') ||
                ('q' <= lookahead && lookahead <= 's') ||
                (lookahead == 'u') ||
                (lookahead == 'v') ||
                ('x' <= lookahead && lookahead <= 'z'))
                ADVANCE(11);
            if (lookahead == 'a')
                ADVANCE(12);
            if (lookahead == 'd')
                ADVANCE(14);
            if (lookahead == 'e')
                ADVANCE(17);
            if (lookahead == 'f')
                ADVANCE(28);
            if (lookahead == 'i')
                ADVANCE(37);
            if (lookahead == 'p')
                ADVANCE(40);
            if (lookahead == 't')
                ADVANCE(45);
            if (lookahead == 'w')
                ADVANCE(48);
            LEX_ERROR();
        case 123:
            if (lookahead == 0)
                ADVANCE(1);
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(123);
            if (lookahead == '#')
                ADVANCE(2);
            if (lookahead == ',')
                ADVANCE(7);
            if (lookahead == ':')
                ADVANCE(8);
            if (lookahead == ';')
                ADVANCE(9);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'c') ||
                (lookahead == 'g') ||
                (lookahead == 'h') ||
                ('j' <= lookahead && lookahead <= 'o') ||
                ('q' <= lookahead && lookahead <= 's') ||
                (lookahead == 'u') ||
                (lookahead == 'v') ||
                ('x' <= lookahead && lookahead <= 'z'))
                ADVANCE(11);
            if (lookahead == 'd')
                ADVANCE(14);
            if (lookahead == 'e')
                ADVANCE(17);
            if (lookahead == 'f')
                ADVANCE(28);
            if (lookahead == 'i')
                ADVANCE(37);
            if (lookahead == 'p')
                ADVANCE(40);
            if (lookahead == 't')
                ADVANCE(45);
            if (lookahead == 'w')
                ADVANCE(48);
            LEX_ERROR();
        case 124:
            if (lookahead == 0)
                ADVANCE(1);
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(124);
            if (lookahead == '#')
                ADVANCE(2);
            if (lookahead == '+')
                ADVANCE(6);
            if (lookahead == ';')
                ADVANCE(9);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'c') ||
                (lookahead == 'e') ||
                (lookahead == 'g') ||
                (lookahead == 'h') ||
                ('j' <= lookahead && lookahead <= 'o') ||
                ('q' <= lookahead && lookahead <= 's') ||
                (lookahead == 'u') ||
                (lookahead == 'v') ||
                ('x' <= lookahead && lookahead <= 'z'))
                ADVANCE(11);
            if (lookahead == 'd')
                ADVANCE(14);
            if (lookahead == 'f')
                ADVANCE(57);
            if (lookahead == 'i')
                ADVANCE(58);
            if (lookahead == 'p')
                ADVANCE(40);
            if (lookahead == 't')
                ADVANCE(45);
            if (lookahead == 'w')
                ADVANCE(48);
            LEX_ERROR();
        case 125:
            if (lookahead == 0)
                ADVANCE(1);
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(125);
            if (lookahead == '#')
                ADVANCE(2);
            if (lookahead == '+')
                ADVANCE(6);
            if (lookahead == ',')
                ADVANCE(7);
            if (lookahead == ';')
                ADVANCE(9);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'c') ||
                (lookahead == 'e') ||
                (lookahead == 'g') ||
                (lookahead == 'h') ||
                ('j' <= lookahead && lookahead <= 'o') ||
                ('q' <= lookahead && lookahead <= 's') ||
                (lookahead == 'u') ||
                (lookahead == 'v') ||
                ('x' <= lookahead && lookahead <= 'z'))
                ADVANCE(11);
            if (lookahead == 'd')
                ADVANCE(14);
            if (lookahead == 'f')
                ADVANCE(57);
            if (lookahead == 'i')
                ADVANCE(58);
            if (lookahead == 'p')
                ADVANCE(40);
            if (lookahead == 't')
                ADVANCE(45);
            if (lookahead == 'w')
                ADVANCE(48);
            LEX_ERROR();
        case 126:
            if (lookahead == 0)
                ADVANCE(1);
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(126);
            if (lookahead == '#')
                ADVANCE(2);
            if (lookahead == ',')
                ADVANCE(7);
            if (lookahead == ';')
                ADVANCE(9);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'c') ||
                (lookahead == 'e') ||
                (lookahead == 'g') ||
                (lookahead == 'h') ||
                ('j' <= lookahead && lookahead <= 'o') ||
                ('q' <= lookahead && lookahead <= 's') ||
                (lookahead == 'u') ||
                (lookahead == 'v') ||
                ('x' <= lookahead && lookahead <= 'z'))
                ADVANCE(11);
            if (lookahead == 'd')
                ADVANCE(14);
            if (lookahead == 'f')
                ADVANCE(57);
            if (lookahead == 'i')
                ADVANCE(58);
            if (lookahead == 'p')
                ADVANCE(40);
            if (lookahead == 't')
                ADVANCE(45);
            if (lookahead == 'w')
                ADVANCE(48);
            LEX_ERROR();
        case 127:
            if (lookahead == 0)
                ADVANCE(1);
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(127);
            if (lookahead == '#')
                ADVANCE(2);
            if (lookahead == '+')
                ADVANCE(6);
            if (lookahead == ',')
                ADVANCE(7);
            if (lookahead == ':')
                ADVANCE(8);
            if (lookahead == ';')
                ADVANCE(9);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'c') ||
                (lookahead == 'g') ||
                (lookahead == 'h') ||
                ('j' <= lookahead && lookahead <= 'o') ||
                ('q' <= lookahead && lookahead <= 's') ||
                (lookahead == 'u') ||
                (lookahead == 'v') ||
                ('x' <= lookahead && lookahead <= 'z'))
                ADVANCE(11);
            if (lookahead == 'd')
                ADVANCE(14);
            if (lookahead == 'e')
                ADVANCE(17);
            if (lookahead == 'f')
                ADVANCE(28);
            if (lookahead == 'i')
                ADVANCE(37);
            if (lookahead == 'p')
                ADVANCE(40);
            if (lookahead == 't')
                ADVANCE(45);
            if (lookahead == 'w')
                ADVANCE(48);
            LEX_ERROR();
        case 128:
            if (lookahead == 0)
                ADVANCE(1);
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(128);
            if (lookahead == '#')
                ADVANCE(2);
            if (lookahead == '+')
                ADVANCE(6);
            if (lookahead == ';')
                ADVANCE(9);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'c') ||
                (lookahead == 'g') ||
                (lookahead == 'h') ||
                ('j' <= lookahead && lookahead <= 'o') ||
                ('q' <= lookahead && lookahead <= 's') ||
                (lookahead == 'u') ||
                (lookahead == 'v') ||
                ('x' <= lookahead && lookahead <= 'z'))
                ADVANCE(11);
            if (lookahead == 'd')
                ADVANCE(14);
            if (lookahead == 'e')
                ADVANCE(99);
            if (lookahead == 'f')
                ADVANCE(28);
            if (lookahead == 'i')
                ADVANCE(58);
            if (lookahead == 'p')
                ADVANCE(40);
            if (lookahead == 't')
                ADVANCE(45);
            if (lookahead == 'w')
                ADVANCE(48);
            LEX_ERROR();
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
            if (lookahead == '+')
                ADVANCE(6);
            if (lookahead == ',')
                ADVANCE(7);
            if (lookahead == ';')
                ADVANCE(9);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'c') ||
                (lookahead == 'g') ||
                (lookahead == 'h') ||
                ('j' <= lookahead && lookahead <= 'o') ||
                ('q' <= lookahead && lookahead <= 's') ||
                (lookahead == 'u') ||
                (lookahead == 'v') ||
                ('x' <= lookahead && lookahead <= 'z'))
                ADVANCE(11);
            if (lookahead == 'd')
                ADVANCE(14);
            if (lookahead == 'e')
                ADVANCE(99);
            if (lookahead == 'f')
                ADVANCE(28);
            if (lookahead == 'i')
                ADVANCE(58);
            if (lookahead == 'p')
                ADVANCE(40);
            if (lookahead == 't')
                ADVANCE(45);
            if (lookahead == 'w')
                ADVANCE(48);
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
            if (lookahead == ',')
                ADVANCE(7);
            if (lookahead == ';')
                ADVANCE(9);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'c') ||
                (lookahead == 'g') ||
                (lookahead == 'h') ||
                ('j' <= lookahead && lookahead <= 'o') ||
                ('q' <= lookahead && lookahead <= 's') ||
                (lookahead == 'u') ||
                (lookahead == 'v') ||
                ('x' <= lookahead && lookahead <= 'z'))
                ADVANCE(11);
            if (lookahead == 'd')
                ADVANCE(14);
            if (lookahead == 'e')
                ADVANCE(99);
            if (lookahead == 'f')
                ADVANCE(28);
            if (lookahead == 'i')
                ADVANCE(58);
            if (lookahead == 'p')
                ADVANCE(40);
            if (lookahead == 't')
                ADVANCE(45);
            if (lookahead == 'w')
                ADVANCE(48);
            LEX_ERROR();
        case 131:
            if (lookahead == 0)
                ADVANCE(1);
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(131);
            if (lookahead == '#')
                ADVANCE(2);
            if (lookahead == '+')
                ADVANCE(6);
            if (lookahead == ';')
                ADVANCE(9);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'c') ||
                (lookahead == 'g') ||
                (lookahead == 'h') ||
                ('j' <= lookahead && lookahead <= 'o') ||
                ('q' <= lookahead && lookahead <= 's') ||
                (lookahead == 'u') ||
                (lookahead == 'v') ||
                ('x' <= lookahead && lookahead <= 'z'))
                ADVANCE(11);
            if (lookahead == 'd')
                ADVANCE(14);
            if (lookahead == 'e')
                ADVANCE(107);
            if (lookahead == 'f')
                ADVANCE(57);
            if (lookahead == 'i')
                ADVANCE(58);
            if (lookahead == 'p')
                ADVANCE(40);
            if (lookahead == 't')
                ADVANCE(45);
            if (lookahead == 'w')
                ADVANCE(48);
            LEX_ERROR();
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
            if (lookahead == '+')
                ADVANCE(6);
            if (lookahead == ',')
                ADVANCE(7);
            if (lookahead == ';')
                ADVANCE(9);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'c') ||
                (lookahead == 'g') ||
                (lookahead == 'h') ||
                ('j' <= lookahead && lookahead <= 'o') ||
                ('q' <= lookahead && lookahead <= 's') ||
                (lookahead == 'u') ||
                (lookahead == 'v') ||
                ('x' <= lookahead && lookahead <= 'z'))
                ADVANCE(11);
            if (lookahead == 'd')
                ADVANCE(14);
            if (lookahead == 'e')
                ADVANCE(107);
            if (lookahead == 'f')
                ADVANCE(57);
            if (lookahead == 'i')
                ADVANCE(58);
            if (lookahead == 'p')
                ADVANCE(40);
            if (lookahead == 't')
                ADVANCE(45);
            if (lookahead == 'w')
                ADVANCE(48);
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
            if (lookahead == ',')
                ADVANCE(7);
            if (lookahead == ';')
                ADVANCE(9);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'c') ||
                (lookahead == 'g') ||
                (lookahead == 'h') ||
                ('j' <= lookahead && lookahead <= 'o') ||
                ('q' <= lookahead && lookahead <= 's') ||
                (lookahead == 'u') ||
                (lookahead == 'v') ||
                ('x' <= lookahead && lookahead <= 'z'))
                ADVANCE(11);
            if (lookahead == 'd')
                ADVANCE(14);
            if (lookahead == 'e')
                ADVANCE(107);
            if (lookahead == 'f')
                ADVANCE(57);
            if (lookahead == 'i')
                ADVANCE(58);
            if (lookahead == 'p')
                ADVANCE(40);
            if (lookahead == 't')
                ADVANCE(45);
            if (lookahead == 'w')
                ADVANCE(48);
            LEX_ERROR();
        case 134:
            if (lookahead == 0)
                ADVANCE(1);
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(134);
            if (lookahead == '#')
                ADVANCE(2);
            if (lookahead == '+')
                ADVANCE(6);
            if (lookahead == ';')
                ADVANCE(9);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'c') ||
                (lookahead == 'e') ||
                (lookahead == 'g') ||
                (lookahead == 'h') ||
                ('j' <= lookahead && lookahead <= 'o') ||
                ('q' <= lookahead && lookahead <= 's') ||
                (lookahead == 'u') ||
                (lookahead == 'v') ||
                ('x' <= lookahead && lookahead <= 'z'))
                ADVANCE(11);
            if (lookahead == 'd')
                ADVANCE(14);
            if (lookahead == 'f')
                ADVANCE(28);
            if (lookahead == 'i')
                ADVANCE(58);
            if (lookahead == 'p')
                ADVANCE(40);
            if (lookahead == 't')
                ADVANCE(45);
            if (lookahead == 'w')
                ADVANCE(48);
            LEX_ERROR();
        case 135:
            if (lookahead == 0)
                ADVANCE(1);
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(135);
            if (lookahead == '#')
                ADVANCE(2);
            if (lookahead == '+')
                ADVANCE(6);
            if (lookahead == ',')
                ADVANCE(7);
            if (lookahead == ';')
                ADVANCE(9);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'c') ||
                (lookahead == 'e') ||
                (lookahead == 'g') ||
                (lookahead == 'h') ||
                ('j' <= lookahead && lookahead <= 'o') ||
                ('q' <= lookahead && lookahead <= 's') ||
                (lookahead == 'u') ||
                (lookahead == 'v') ||
                ('x' <= lookahead && lookahead <= 'z'))
                ADVANCE(11);
            if (lookahead == 'd')
                ADVANCE(14);
            if (lookahead == 'f')
                ADVANCE(28);
            if (lookahead == 'i')
                ADVANCE(58);
            if (lookahead == 'p')
                ADVANCE(40);
            if (lookahead == 't')
                ADVANCE(45);
            if (lookahead == 'w')
                ADVANCE(48);
            LEX_ERROR();
        case 136:
            if (lookahead == 0)
                ADVANCE(1);
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(136);
            if (lookahead == '#')
                ADVANCE(2);
            if (lookahead == ',')
                ADVANCE(7);
            if (lookahead == ';')
                ADVANCE(9);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'c') ||
                (lookahead == 'e') ||
                (lookahead == 'g') ||
                (lookahead == 'h') ||
                ('j' <= lookahead && lookahead <= 'o') ||
                ('q' <= lookahead && lookahead <= 's') ||
                (lookahead == 'u') ||
                (lookahead == 'v') ||
                ('x' <= lookahead && lookahead <= 'z'))
                ADVANCE(11);
            if (lookahead == 'd')
                ADVANCE(14);
            if (lookahead == 'f')
                ADVANCE(28);
            if (lookahead == 'i')
                ADVANCE(58);
            if (lookahead == 'p')
                ADVANCE(40);
            if (lookahead == 't')
                ADVANCE(45);
            if (lookahead == 'w')
                ADVANCE(48);
            LEX_ERROR();
        case 137:
            if (lookahead == 0)
                ADVANCE(1);
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(137);
            if (lookahead == '#')
                ADVANCE(2);
            if (lookahead == '+')
                ADVANCE(6);
            if (lookahead == ';')
                ADVANCE(9);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'c') ||
                (lookahead == 'g') ||
                (lookahead == 'h') ||
                ('j' <= lookahead && lookahead <= 'o') ||
                ('q' <= lookahead && lookahead <= 's') ||
                (lookahead == 'u') ||
                (lookahead == 'v') ||
                ('x' <= lookahead && lookahead <= 'z'))
                ADVANCE(11);
            if (lookahead == 'd')
                ADVANCE(14);
            if (lookahead == 'e')
                ADVANCE(112);
            if (lookahead == 'f')
                ADVANCE(57);
            if (lookahead == 'i')
                ADVANCE(58);
            if (lookahead == 'p')
                ADVANCE(40);
            if (lookahead == 't')
                ADVANCE(45);
            if (lookahead == 'w')
                ADVANCE(48);
            LEX_ERROR();
        case 138:
            if (lookahead == 0)
                ADVANCE(1);
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(138);
            if (lookahead == '#')
                ADVANCE(2);
            if (lookahead == '+')
                ADVANCE(6);
            if (lookahead == ',')
                ADVANCE(7);
            if (lookahead == ';')
                ADVANCE(9);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'c') ||
                (lookahead == 'g') ||
                (lookahead == 'h') ||
                ('j' <= lookahead && lookahead <= 'o') ||
                ('q' <= lookahead && lookahead <= 's') ||
                (lookahead == 'u') ||
                (lookahead == 'v') ||
                ('x' <= lookahead && lookahead <= 'z'))
                ADVANCE(11);
            if (lookahead == 'd')
                ADVANCE(14);
            if (lookahead == 'e')
                ADVANCE(112);
            if (lookahead == 'f')
                ADVANCE(57);
            if (lookahead == 'i')
                ADVANCE(58);
            if (lookahead == 'p')
                ADVANCE(40);
            if (lookahead == 't')
                ADVANCE(45);
            if (lookahead == 'w')
                ADVANCE(48);
            LEX_ERROR();
        case 139:
            if (lookahead == 0)
                ADVANCE(1);
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(139);
            if (lookahead == '#')
                ADVANCE(2);
            if (lookahead == ',')
                ADVANCE(7);
            if (lookahead == ';')
                ADVANCE(9);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'c') ||
                (lookahead == 'g') ||
                (lookahead == 'h') ||
                ('j' <= lookahead && lookahead <= 'o') ||
                ('q' <= lookahead && lookahead <= 's') ||
                (lookahead == 'u') ||
                (lookahead == 'v') ||
                ('x' <= lookahead && lookahead <= 'z'))
                ADVANCE(11);
            if (lookahead == 'd')
                ADVANCE(14);
            if (lookahead == 'e')
                ADVANCE(112);
            if (lookahead == 'f')
                ADVANCE(57);
            if (lookahead == 'i')
                ADVANCE(58);
            if (lookahead == 'p')
                ADVANCE(40);
            if (lookahead == 't')
                ADVANCE(45);
            if (lookahead == 'w')
                ADVANCE(48);
            LEX_ERROR();
        case 140:
            if (lookahead == 0)
                ADVANCE(1);
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(140);
            if (lookahead == '#')
                ADVANCE(2);
            if (lookahead == '+')
                ADVANCE(6);
            if (lookahead == ',')
                ADVANCE(7);
            if (lookahead == ':')
                ADVANCE(8);
            if (lookahead == ';')
                ADVANCE(9);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == 'b') ||
                (lookahead == 'c') ||
                (lookahead == 'g') ||
                (lookahead == 'h') ||
                ('j' <= lookahead && lookahead <= 'o') ||
                ('q' <= lookahead && lookahead <= 's') ||
                (lookahead == 'u') ||
                (lookahead == 'v') ||
                ('x' <= lookahead && lookahead <= 'z'))
                ADVANCE(11);
            if (lookahead == 'a')
                ADVANCE(12);
            if (lookahead == 'd')
                ADVANCE(14);
            if (lookahead == 'e')
                ADVANCE(17);
            if (lookahead == 'f')
                ADVANCE(28);
            if (lookahead == 'i')
                ADVANCE(37);
            if (lookahead == 'p')
                ADVANCE(40);
            if (lookahead == 't')
                ADVANCE(45);
            if (lookahead == 'w')
                ADVANCE(48);
            LEX_ERROR();
        default:
            LEX_ERROR();
    }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
    [0] = {.lex_state = 0, .external_tokens = 1},
    [1] = {.lex_state = 56},
    [2] = {.lex_state = 59},
    [3] = {.lex_state = 59},
    [4] = {.lex_state = 59},
    [5] = {.lex_state = 59},
    [6] = {.lex_state = 60},
    [7] = {.lex_state = 59},
    [8] = {.lex_state = 59},
    [9] = {.lex_state = 61, .external_tokens = 2},
    [10] = {.lex_state = 62},
    [11] = {.lex_state = 63, .external_tokens = 2},
    [12] = {.lex_state = 64, .external_tokens = 2},
    [13] = {.lex_state = 65, .external_tokens = 2},
    [14] = {.lex_state = 63, .external_tokens = 2},
    [15] = {.lex_state = 63, .external_tokens = 2},
    [16] = {.lex_state = 66, .external_tokens = 2},
    [17] = {.lex_state = 63, .external_tokens = 2},
    [18] = {.lex_state = 62},
    [19] = {.lex_state = 63, .external_tokens = 2},
    [20] = {.lex_state = 59},
    [21] = {.lex_state = 61, .external_tokens = 2},
    [22] = {.lex_state = 63, .external_tokens = 2},
    [23] = {.lex_state = 67},
    [24] = {.lex_state = 68},
    [25] = {.lex_state = 60},
    [26] = {.lex_state = 69, .external_tokens = 3},
    [27] = {.lex_state = 70, .external_tokens = 4},
    [28] = {.lex_state = 65, .external_tokens = 2},
    [29] = {.lex_state = 63, .external_tokens = 2},
    [30] = {.lex_state = 59},
    [31] = {.lex_state = 59},
    [32] = {.lex_state = 59},
    [33] = {.lex_state = 60},
    [34] = {.lex_state = 59},
    [35] = {.lex_state = 59},
    [36] = {.lex_state = 65, .external_tokens = 2},
    [37] = {.lex_state = 70, .external_tokens = 4},
    [38] = {.lex_state = 64, .external_tokens = 2},
    [39] = {.lex_state = 70, .external_tokens = 4},
    [40] = {.lex_state = 70, .external_tokens = 4},
    [41] = {.lex_state = 70, .external_tokens = 4},
    [42] = {.lex_state = 65, .external_tokens = 2},
    [43] = {.lex_state = 70, .external_tokens = 4},
    [44] = {.lex_state = 70, .external_tokens = 4},
    [45] = {.lex_state = 67},
    [46] = {.lex_state = 60},
    [47] = {.lex_state = 69, .external_tokens = 3},
    [48] = {.lex_state = 59},
    [49] = {.lex_state = 71, .external_tokens = 4},
    [50] = {.lex_state = 70, .external_tokens = 4},
    [51] = {.lex_state = 72, .external_tokens = 4},
    [52] = {.lex_state = 72, .external_tokens = 4},
    [53] = {.lex_state = 70, .external_tokens = 4},
    [54] = {.lex_state = 73, .external_tokens = 4},
    [55] = {.lex_state = 59},
    [56] = {.lex_state = 71, .external_tokens = 4},
    [57] = {.lex_state = 72, .external_tokens = 4},
    [58] = {.lex_state = 70, .external_tokens = 4},
    [59] = {.lex_state = 72, .external_tokens = 4},
    [60] = {.lex_state = 71, .external_tokens = 4},
    [61] = {.lex_state = 59},
    [62] = {.lex_state = 74, .external_tokens = 4},
    [63] = {.lex_state = 59},
    [64] = {.lex_state = 71, .external_tokens = 4},
    [65] = {.lex_state = 71, .external_tokens = 4},
    [66] = {.lex_state = 75},
    [67] = {.lex_state = 93},
    [68] = {.lex_state = 94},
    [69] = {.lex_state = 59},
    [70] = {.lex_state = 59},
    [71] = {.lex_state = 75},
    [72] = {.lex_state = 95},
    [73] = {.lex_state = 59},
    [74] = {.lex_state = 69, .external_tokens = 3},
    [75] = {.lex_state = 93},
    [76] = {.lex_state = 59},
    [77] = {.lex_state = 69, .external_tokens = 3},
    [78] = {.lex_state = 70, .external_tokens = 4},
    [79] = {.lex_state = 93},
    [80] = {.lex_state = 70, .external_tokens = 4},
    [81] = {.lex_state = 93},
    [82] = {.lex_state = 69, .external_tokens = 3},
    [83] = {.lex_state = 59},
    [84] = {.lex_state = 70, .external_tokens = 4},
    [85] = {.lex_state = 96},
    [86] = {.lex_state = 96},
    [87] = {.lex_state = 96},
    [88] = {.lex_state = 97},
    [89] = {.lex_state = 59},
    [90] = {.lex_state = 60},
    [91] = {.lex_state = 98, .external_tokens = 4},
    [92] = {.lex_state = 70, .external_tokens = 4},
    [93] = {.lex_state = 98, .external_tokens = 4},
    [94] = {.lex_state = 60},
    [95] = {.lex_state = 101, .external_tokens = 4},
    [96] = {.lex_state = 98, .external_tokens = 4},
    [97] = {.lex_state = 70, .external_tokens = 4},
    [98] = {.lex_state = 70, .external_tokens = 4},
    [99] = {.lex_state = 69, .external_tokens = 3},
    [100] = {.lex_state = 101, .external_tokens = 4},
    [101] = {.lex_state = 69, .external_tokens = 3},
    [102] = {.lex_state = 70, .external_tokens = 4},
    [103] = {.lex_state = 94},
    [104] = {.lex_state = 59},
    [105] = {.lex_state = 69, .external_tokens = 3},
    [106] = {.lex_state = 102},
    [107] = {.lex_state = 69, .external_tokens = 3},
    [108] = {.lex_state = 98, .external_tokens = 4},
    [109] = {.lex_state = 98, .external_tokens = 4},
    [110] = {.lex_state = 96},
    [111] = {.lex_state = 70, .external_tokens = 4},
    [112] = {.lex_state = 96},
    [113] = {.lex_state = 103},
    [114] = {.lex_state = 59},
    [115] = {.lex_state = 104},
    [116] = {.lex_state = 59},
    [117] = {.lex_state = 105},
    [118] = {.lex_state = 105},
    [119] = {.lex_state = 102},
    [120] = {.lex_state = 69, .external_tokens = 3},
    [121] = {.lex_state = 106, .external_tokens = 4},
    [122] = {.lex_state = 70, .external_tokens = 4},
    [123] = {.lex_state = 108},
    [124] = {.lex_state = 109},
    [125] = {.lex_state = 110},
    [126] = {.lex_state = 59},
    [127] = {.lex_state = 60},
    [128] = {.lex_state = 69, .external_tokens = 3},
    [129] = {.lex_state = 106, .external_tokens = 4},
    [130] = {.lex_state = 70, .external_tokens = 4},
    [131] = {.lex_state = 102},
    [132] = {.lex_state = 69, .external_tokens = 3},
    [133] = {.lex_state = 111, .external_tokens = 4},
    [134] = {.lex_state = 59},
    [135] = {.lex_state = 111, .external_tokens = 4},
    [136] = {.lex_state = 70, .external_tokens = 4},
    [137] = {.lex_state = 111, .external_tokens = 4},
    [138] = {.lex_state = 111, .external_tokens = 4},
    [139] = {.lex_state = 70, .external_tokens = 4},
    [140] = {.lex_state = 102},
    [141] = {.lex_state = 69, .external_tokens = 3},
    [142] = {.lex_state = 111, .external_tokens = 4},
    [143] = {.lex_state = 61, .external_tokens = 2},
    [144] = {.lex_state = 59},
    [145] = {.lex_state = 113, .external_tokens = 2},
    [146] = {.lex_state = 59},
    [147] = {.lex_state = 61, .external_tokens = 2},
    [148] = {.lex_state = 61, .external_tokens = 2},
    [149] = {.lex_state = 60},
    [150] = {.lex_state = 114},
    [151] = {.lex_state = 115},
    [152] = {.lex_state = 59},
    [153] = {.lex_state = 114},
    [154] = {.lex_state = 115},
    [155] = {.lex_state = 68},
    [156] = {.lex_state = 60},
    [157] = {.lex_state = 60},
    [158] = {.lex_state = 59},
    [159] = {.lex_state = 116},
    [160] = {.lex_state = 68},
    [161] = {.lex_state = 60},
    [162] = {.lex_state = 93},
    [163] = {.lex_state = 69, .external_tokens = 3},
    [164] = {.lex_state = 93},
    [165] = {.lex_state = 69, .external_tokens = 3},
    [166] = {.lex_state = 63, .external_tokens = 2},
    [167] = {.lex_state = 63, .external_tokens = 2},
    [168] = {.lex_state = 69, .external_tokens = 3},
    [169] = {.lex_state = 96},
    [170] = {.lex_state = 59},
    [171] = {.lex_state = 60},
    [172] = {.lex_state = 117, .external_tokens = 2},
    [173] = {.lex_state = 63, .external_tokens = 2},
    [174] = {.lex_state = 117, .external_tokens = 2},
    [175] = {.lex_state = 60},
    [176] = {.lex_state = 118, .external_tokens = 2},
    [177] = {.lex_state = 117, .external_tokens = 2},
    [178] = {.lex_state = 63, .external_tokens = 2},
    [179] = {.lex_state = 63, .external_tokens = 2},
    [180] = {.lex_state = 69, .external_tokens = 3},
    [181] = {.lex_state = 118, .external_tokens = 2},
    [182] = {.lex_state = 69, .external_tokens = 3},
    [183] = {.lex_state = 63, .external_tokens = 2},
    [184] = {.lex_state = 94},
    [185] = {.lex_state = 59},
    [186] = {.lex_state = 69, .external_tokens = 3},
    [187] = {.lex_state = 102},
    [188] = {.lex_state = 69, .external_tokens = 3},
    [189] = {.lex_state = 117, .external_tokens = 2},
    [190] = {.lex_state = 117, .external_tokens = 2},
    [191] = {.lex_state = 102},
    [192] = {.lex_state = 69, .external_tokens = 3},
    [193] = {.lex_state = 119, .external_tokens = 2},
    [194] = {.lex_state = 63, .external_tokens = 2},
    [195] = {.lex_state = 108},
    [196] = {.lex_state = 59},
    [197] = {.lex_state = 60},
    [198] = {.lex_state = 69, .external_tokens = 3},
    [199] = {.lex_state = 119, .external_tokens = 2},
    [200] = {.lex_state = 63, .external_tokens = 2},
    [201] = {.lex_state = 102},
    [202] = {.lex_state = 69, .external_tokens = 3},
    [203] = {.lex_state = 120, .external_tokens = 2},
    [204] = {.lex_state = 59},
    [205] = {.lex_state = 120, .external_tokens = 2},
    [206] = {.lex_state = 63, .external_tokens = 2},
    [207] = {.lex_state = 120, .external_tokens = 2},
    [208] = {.lex_state = 120, .external_tokens = 2},
    [209] = {.lex_state = 63, .external_tokens = 2},
    [210] = {.lex_state = 102},
    [211] = {.lex_state = 69, .external_tokens = 3},
    [212] = {.lex_state = 120, .external_tokens = 2},
    [213] = {.lex_state = 59},
    [214] = {.lex_state = 68},
    [215] = {.lex_state = 59},
    [216] = {.lex_state = 69, .external_tokens = 3},
    [217] = {.lex_state = 59},
    [218] = {.lex_state = 60},
    [219] = {.lex_state = 59},
    [220] = {.lex_state = 59},
    [221] = {.lex_state = 59},
    [222] = {.lex_state = 60},
    [223] = {.lex_state = 59},
    [224] = {.lex_state = 59},
    [225] = {.lex_state = 60},
    [226] = {.lex_state = 59},
    [227] = {.lex_state = 59},
    [228] = {.lex_state = 60},
    [229] = {.lex_state = 59},
    [230] = {.lex_state = 0, .external_tokens = 5},
    [231] = {.lex_state = 63, .external_tokens = 5},
    [232] = {.lex_state = 70, .external_tokens = 4},
    [233] = {.lex_state = 65, .external_tokens = 5},
    [234] = {.lex_state = 63, .external_tokens = 5},
    [235] = {.lex_state = 65, .external_tokens = 5},
    [236] = {.lex_state = 65, .external_tokens = 5},
    [237] = {.lex_state = 63, .external_tokens = 5},
    [238] = {.lex_state = 63, .external_tokens = 5},
    [239] = {.lex_state = 120, .external_tokens = 5},
    [240] = {.lex_state = 118, .external_tokens = 5},
    [241] = {.lex_state = 117, .external_tokens = 5},
    [242] = {.lex_state = 63, .external_tokens = 5},
    [243] = {.lex_state = 93},
    [244] = {.lex_state = 60},
    [245] = {.lex_state = 115},
    [246] = {.lex_state = 65, .external_tokens = 5},
    [247] = {.lex_state = 121},
    [248] = {.lex_state = 122, .external_tokens = 5},
    [249] = {.lex_state = 122, .external_tokens = 5},
    [250] = {.lex_state = 63, .external_tokens = 5},
    [251] = {.lex_state = 123, .external_tokens = 5},
    [252] = {.lex_state = 120, .external_tokens = 5},
    [253] = {.lex_state = 117, .external_tokens = 5},
    [254] = {.lex_state = 93},
    [255] = {.lex_state = 69, .external_tokens = 3},
    [256] = {.lex_state = 59},
    [257] = {.lex_state = 65, .external_tokens = 5},
    [258] = {.lex_state = 63, .external_tokens = 5},
    [259] = {.lex_state = 124, .external_tokens = 5},
    [260] = {.lex_state = 59},
    [261] = {.lex_state = 124, .external_tokens = 5},
    [262] = {.lex_state = 65, .external_tokens = 5},
    [263] = {.lex_state = 70, .external_tokens = 4},
    [264] = {.lex_state = 65, .external_tokens = 5},
    [265] = {.lex_state = 125, .external_tokens = 5},
    [266] = {.lex_state = 59},
    [267] = {.lex_state = 59},
    [268] = {.lex_state = 126, .external_tokens = 5},
    [269] = {.lex_state = 59},
    [270] = {.lex_state = 125, .external_tokens = 5},
    [271] = {.lex_state = 125, .external_tokens = 5},
    [272] = {.lex_state = 125, .external_tokens = 5},
    [273] = {.lex_state = 118, .external_tokens = 5},
    [274] = {.lex_state = 117, .external_tokens = 5},
    [275] = {.lex_state = 63, .external_tokens = 5},
    [276] = {.lex_state = 63, .external_tokens = 5},
    [277] = {.lex_state = 60},
    [278] = {.lex_state = 120, .external_tokens = 5},
    [279] = {.lex_state = 63, .external_tokens = 5},
    [280] = {.lex_state = 69, .external_tokens = 3},
    [281] = {.lex_state = 118, .external_tokens = 5},
    [282] = {.lex_state = 59},
    [283] = {.lex_state = 127, .external_tokens = 5},
    [284] = {.lex_state = 59},
    [285] = {.lex_state = 127, .external_tokens = 5},
    [286] = {.lex_state = 63, .external_tokens = 5},
    [287] = {.lex_state = 64, .external_tokens = 2},
    [288] = {.lex_state = 63, .external_tokens = 5},
    [289] = {.lex_state = 59},
    [290] = {.lex_state = 69, .external_tokens = 3},
    [291] = {.lex_state = 65, .external_tokens = 5},
    [292] = {.lex_state = 66, .external_tokens = 5},
    [293] = {.lex_state = 59},
    [294] = {.lex_state = 66, .external_tokens = 5},
    [295] = {.lex_state = 120, .external_tokens = 5},
    [296] = {.lex_state = 63, .external_tokens = 5},
    [297] = {.lex_state = 127, .external_tokens = 5},
    [298] = {.lex_state = 69, .external_tokens = 3},
    [299] = {.lex_state = 59},
    [300] = {.lex_state = 117, .external_tokens = 5},
    [301] = {.lex_state = 128, .external_tokens = 5},
    [302] = {.lex_state = 59},
    [303] = {.lex_state = 128, .external_tokens = 5},
    [304] = {.lex_state = 129, .external_tokens = 5},
    [305] = {.lex_state = 59},
    [306] = {.lex_state = 59},
    [307] = {.lex_state = 130, .external_tokens = 5},
    [308] = {.lex_state = 59},
    [309] = {.lex_state = 129, .external_tokens = 5},
    [310] = {.lex_state = 129, .external_tokens = 5},
    [311] = {.lex_state = 129, .external_tokens = 5},
    [312] = {.lex_state = 69, .external_tokens = 3},
    [313] = {.lex_state = 59},
    [314] = {.lex_state = 119, .external_tokens = 5},
    [315] = {.lex_state = 131, .external_tokens = 5},
    [316] = {.lex_state = 59},
    [317] = {.lex_state = 131, .external_tokens = 5},
    [318] = {.lex_state = 63, .external_tokens = 5},
    [319] = {.lex_state = 132, .external_tokens = 5},
    [320] = {.lex_state = 59},
    [321] = {.lex_state = 59},
    [322] = {.lex_state = 133, .external_tokens = 5},
    [323] = {.lex_state = 59},
    [324] = {.lex_state = 132, .external_tokens = 5},
    [325] = {.lex_state = 132, .external_tokens = 5},
    [326] = {.lex_state = 132, .external_tokens = 5},
    [327] = {.lex_state = 63, .external_tokens = 5},
    [328] = {.lex_state = 117, .external_tokens = 5},
    [329] = {.lex_state = 63, .external_tokens = 5},
    [330] = {.lex_state = 68},
    [331] = {.lex_state = 60},
    [332] = {.lex_state = 60},
    [333] = {.lex_state = 69, .external_tokens = 3},
    [334] = {.lex_state = 63, .external_tokens = 5},
    [335] = {.lex_state = 69, .external_tokens = 3},
    [336] = {.lex_state = 63, .external_tokens = 5},
    [337] = {.lex_state = 122, .external_tokens = 5},
    [338] = {.lex_state = 67},
    [339] = {.lex_state = 93},
    [340] = {.lex_state = 69, .external_tokens = 3},
    [341] = {.lex_state = 63, .external_tokens = 5},
    [342] = {.lex_state = 95},
    [343] = {.lex_state = 94},
    [344] = {.lex_state = 59},
    [345] = {.lex_state = 69, .external_tokens = 3},
    [346] = {.lex_state = 102},
    [347] = {.lex_state = 117, .external_tokens = 5},
    [348] = {.lex_state = 69, .external_tokens = 3},
    [349] = {.lex_state = 96},
    [350] = {.lex_state = 102},
    [351] = {.lex_state = 69, .external_tokens = 3},
    [352] = {.lex_state = 119, .external_tokens = 5},
    [353] = {.lex_state = 63, .external_tokens = 5},
    [354] = {.lex_state = 60},
    [355] = {.lex_state = 108},
    [356] = {.lex_state = 69, .external_tokens = 3},
    [357] = {.lex_state = 59},
    [358] = {.lex_state = 134, .external_tokens = 5},
    [359] = {.lex_state = 59},
    [360] = {.lex_state = 134, .external_tokens = 5},
    [361] = {.lex_state = 135, .external_tokens = 5},
    [362] = {.lex_state = 59},
    [363] = {.lex_state = 59},
    [364] = {.lex_state = 136, .external_tokens = 5},
    [365] = {.lex_state = 59},
    [366] = {.lex_state = 135, .external_tokens = 5},
    [367] = {.lex_state = 135, .external_tokens = 5},
    [368] = {.lex_state = 135, .external_tokens = 5},
    [369] = {.lex_state = 102},
    [370] = {.lex_state = 69, .external_tokens = 3},
    [371] = {.lex_state = 59},
    [372] = {.lex_state = 120, .external_tokens = 5},
    [373] = {.lex_state = 137, .external_tokens = 5},
    [374] = {.lex_state = 59},
    [375] = {.lex_state = 137, .external_tokens = 5},
    [376] = {.lex_state = 138, .external_tokens = 5},
    [377] = {.lex_state = 59},
    [378] = {.lex_state = 59},
    [379] = {.lex_state = 139, .external_tokens = 5},
    [380] = {.lex_state = 59},
    [381] = {.lex_state = 138, .external_tokens = 5},
    [382] = {.lex_state = 138, .external_tokens = 5},
    [383] = {.lex_state = 138, .external_tokens = 5},
    [384] = {.lex_state = 102},
    [385] = {.lex_state = 69, .external_tokens = 3},
    [386] = {.lex_state = 120, .external_tokens = 5},
    [387] = {.lex_state = 63, .external_tokens = 5},
    [388] = {.lex_state = 93},
    [389] = {.lex_state = 140, .external_tokens = 5},
    [390] = {.lex_state = 59},
    [391] = {.lex_state = 140, .external_tokens = 5},
    [392] = {.lex_state = 61, .external_tokens = 5},
    [393] = {.lex_state = 59},
    [394] = {.lex_state = 59},
    [395] = {.lex_state = 113, .external_tokens = 5},
    [396] = {.lex_state = 59},
    [397] = {.lex_state = 61, .external_tokens = 5},
    [398] = {.lex_state = 61, .external_tokens = 5},
    [399] = {.lex_state = 61, .external_tokens = 5},
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
        [sym_module] = STATE(10),
        [sym__statement] = STATE(234),
        [sym__simple_statement] = STATE(235),
        [sym_print_statement] = STATE(236),
        [sym_expression_statement] = STATE(236),
        [sym__compound_statement] = STATE(237),
        [sym_if_statement] = STATE(238),
        [sym_elif_clause] = STATE(239),
        [sym_else_clause] = STATE(240),
        [sym_for_statement] = STATE(238),
        [sym_while_statement] = STATE(238),
        [sym_try_statement] = STATE(238),
        [sym_except_clause] = STATE(241),
        [sym_finally_clause] = STATE(242),
        [sym_with_statement] = STATE(238),
        [sym_with_item] = STATE(243),
        [sym_function_definition] = STATE(238),
        [sym_parameters] = STATE(244),
        [sym_default_parameter] = STATE(245),
        [sym__suite] = STATE(246),
        [sym_expression_list] = STATE(247),
        [sym__expression] = STATE(248),
        [sym_binary_operator] = STATE(249),
        [aux_sym_module_repeat1] = STATE(250),
        [aux_sym_print_statement_repeat1] = STATE(251),
        [aux_sym_if_statement_repeat1] = STATE(252),
        [aux_sym_try_statement_repeat1] = STATE(253),
        [aux_sym_with_statement_repeat1] = STATE(254),
        [aux_sym_parameters_repeat1] = STATE(152),
        [ts_builtin_sym_end] = ACTIONS(1),
        [anon_sym_SEMI] = ACTIONS(3),
        [anon_sym_print] = ACTIONS(5),
        [anon_sym_COMMA] = ACTIONS(7),
        [anon_sym_if] = ACTIONS(9),
        [anon_sym_COLON] = ACTIONS(11),
        [anon_sym_elif] = ACTIONS(13),
        [anon_sym_else] = ACTIONS(15),
        [anon_sym_for] = ACTIONS(17),
        [anon_sym_in] = ACTIONS(19),
        [anon_sym_while] = ACTIONS(21),
        [anon_sym_try] = ACTIONS(23),
        [anon_sym_except] = ACTIONS(25),
        [anon_sym_as] = ACTIONS(27),
        [anon_sym_finally] = ACTIONS(29),
        [anon_sym_with] = ACTIONS(31),
        [anon_sym_def] = ACTIONS(33),
        [anon_sym_LPAREN] = ACTIONS(35),
        [anon_sym_RPAREN] = ACTIONS(37),
        [anon_sym_EQ] = ACTIONS(39),
        [anon_sym_PLUS] = ACTIONS(41),
        [sym_identifier] = ACTIONS(43),
        [sym_comment] = ACTIONS(45),
        [sym__newline] = ACTIONS(47),
        [sym__indent] = ACTIONS(49),
        [sym__dedent] = ACTIONS(51),
    },
    [1] = {
        [sym_module] = STATE(10),
        [sym__statement] = STATE(11),
        [sym__simple_statement] = STATE(12),
        [sym_print_statement] = STATE(13),
        [sym_expression_statement] = STATE(13),
        [sym__compound_statement] = STATE(14),
        [sym_if_statement] = STATE(15),
        [sym_for_statement] = STATE(15),
        [sym_while_statement] = STATE(15),
        [sym_try_statement] = STATE(15),
        [sym_with_statement] = STATE(15),
        [sym_function_definition] = STATE(15),
        [sym__expression] = STATE(16),
        [sym_binary_operator] = STATE(9),
        [aux_sym_module_repeat1] = STATE(17),
        [ts_builtin_sym_end] = ACTIONS(53),
        [anon_sym_print] = ACTIONS(55),
        [anon_sym_if] = ACTIONS(57),
        [anon_sym_for] = ACTIONS(59),
        [anon_sym_while] = ACTIONS(61),
        [anon_sym_try] = ACTIONS(63),
        [anon_sym_with] = ACTIONS(65),
        [anon_sym_def] = ACTIONS(67),
        [sym_identifier] = ACTIONS(69),
        [sym_comment] = ACTIONS(45),
    },
    [2] = {
        [sym__expression] = STATE(143),
        [sym_binary_operator] = STATE(9),
        [sym_identifier] = ACTIONS(71),
        [sym_comment] = ACTIONS(45),
    },
    [3] = {
        [sym__expression] = STATE(201),
        [sym_binary_operator] = STATE(66),
        [sym_identifier] = ACTIONS(73),
        [sym_comment] = ACTIONS(45),
    },
    [4] = {
        [sym_expression_list] = STATE(195),
        [sym__expression] = STATE(124),
        [sym_binary_operator] = STATE(66),
        [sym_identifier] = ACTIONS(73),
        [sym_comment] = ACTIONS(45),
    },
    [5] = {
        [sym__expression] = STATE(191),
        [sym_binary_operator] = STATE(66),
        [sym_identifier] = ACTIONS(73),
        [sym_comment] = ACTIONS(45),
    },
    [6] = {
        [anon_sym_COLON] = ACTIONS(75),
        [sym_comment] = ACTIONS(45),
    },
    [7] = {
        [sym_with_item] = STATE(162),
        [sym__expression] = STATE(68),
        [sym_binary_operator] = STATE(66),
        [sym_identifier] = ACTIONS(73),
        [sym_comment] = ACTIONS(45),
    },
    [8] = {
        [sym_identifier] = ACTIONS(77),
        [sym_comment] = ACTIONS(45),
    },
    [9] = {
        [ts_builtin_sym_end] = ACTIONS(79),
        [anon_sym_SEMI] = ACTIONS(79),
        [anon_sym_print] = ACTIONS(81),
        [anon_sym_COMMA] = ACTIONS(79),
        [anon_sym_if] = ACTIONS(81),
        [anon_sym_elif] = ACTIONS(81),
        [anon_sym_else] = ACTIONS(81),
        [anon_sym_for] = ACTIONS(81),
        [anon_sym_while] = ACTIONS(81),
        [anon_sym_try] = ACTIONS(81),
        [anon_sym_except] = ACTIONS(81),
        [anon_sym_finally] = ACTIONS(81),
        [anon_sym_with] = ACTIONS(81),
        [anon_sym_def] = ACTIONS(81),
        [anon_sym_PLUS] = ACTIONS(79),
        [sym_identifier] = ACTIONS(83),
        [sym_comment] = ACTIONS(45),
        [sym__newline] = ACTIONS(79),
    },
    [10] = {
        [ts_builtin_sym_end] = ACTIONS(85),
        [sym_comment] = ACTIONS(45),
    },
    [11] = {
        [ts_builtin_sym_end] = ACTIONS(87),
        [anon_sym_SEMI] = ACTIONS(87),
        [anon_sym_print] = ACTIONS(89),
        [anon_sym_if] = ACTIONS(89),
        [anon_sym_for] = ACTIONS(89),
        [anon_sym_while] = ACTIONS(89),
        [anon_sym_try] = ACTIONS(89),
        [anon_sym_with] = ACTIONS(89),
        [anon_sym_def] = ACTIONS(89),
        [sym_identifier] = ACTIONS(91),
        [sym_comment] = ACTIONS(45),
        [sym__newline] = ACTIONS(87),
    },
    [12] = {
        [sym_comment] = ACTIONS(45),
        [sym__newline] = ACTIONS(93),
    },
    [13] = {
        [ts_builtin_sym_end] = ACTIONS(95),
        [anon_sym_SEMI] = ACTIONS(95),
        [anon_sym_print] = ACTIONS(97),
        [anon_sym_if] = ACTIONS(97),
        [anon_sym_elif] = ACTIONS(97),
        [anon_sym_else] = ACTIONS(97),
        [anon_sym_for] = ACTIONS(97),
        [anon_sym_while] = ACTIONS(97),
        [anon_sym_try] = ACTIONS(97),
        [anon_sym_except] = ACTIONS(97),
        [anon_sym_finally] = ACTIONS(97),
        [anon_sym_with] = ACTIONS(97),
        [anon_sym_def] = ACTIONS(97),
        [sym_identifier] = ACTIONS(99),
        [sym_comment] = ACTIONS(45),
        [sym__newline] = ACTIONS(95),
    },
    [14] = {
        [ts_builtin_sym_end] = ACTIONS(101),
        [anon_sym_SEMI] = ACTIONS(101),
        [anon_sym_print] = ACTIONS(103),
        [anon_sym_if] = ACTIONS(103),
        [anon_sym_for] = ACTIONS(103),
        [anon_sym_while] = ACTIONS(103),
        [anon_sym_try] = ACTIONS(103),
        [anon_sym_with] = ACTIONS(103),
        [anon_sym_def] = ACTIONS(103),
        [sym_identifier] = ACTIONS(105),
        [sym_comment] = ACTIONS(45),
        [sym__newline] = ACTIONS(101),
    },
    [15] = {
        [ts_builtin_sym_end] = ACTIONS(107),
        [anon_sym_SEMI] = ACTIONS(107),
        [anon_sym_print] = ACTIONS(109),
        [anon_sym_if] = ACTIONS(109),
        [anon_sym_for] = ACTIONS(109),
        [anon_sym_while] = ACTIONS(109),
        [anon_sym_try] = ACTIONS(109),
        [anon_sym_with] = ACTIONS(109),
        [anon_sym_def] = ACTIONS(109),
        [sym_identifier] = ACTIONS(111),
        [sym_comment] = ACTIONS(45),
        [sym__newline] = ACTIONS(107),
    },
    [16] = {
        [ts_builtin_sym_end] = ACTIONS(113),
        [anon_sym_SEMI] = ACTIONS(113),
        [anon_sym_print] = ACTIONS(115),
        [anon_sym_if] = ACTIONS(115),
        [anon_sym_elif] = ACTIONS(115),
        [anon_sym_else] = ACTIONS(115),
        [anon_sym_for] = ACTIONS(115),
        [anon_sym_while] = ACTIONS(115),
        [anon_sym_try] = ACTIONS(115),
        [anon_sym_except] = ACTIONS(115),
        [anon_sym_finally] = ACTIONS(115),
        [anon_sym_with] = ACTIONS(115),
        [anon_sym_def] = ACTIONS(115),
        [anon_sym_PLUS] = ACTIONS(117),
        [sym_identifier] = ACTIONS(119),
        [sym_comment] = ACTIONS(45),
        [sym__newline] = ACTIONS(113),
    },
    [17] = {
        [sym__statement] = STATE(19),
        [sym__simple_statement] = STATE(12),
        [sym_print_statement] = STATE(13),
        [sym_expression_statement] = STATE(13),
        [sym__compound_statement] = STATE(14),
        [sym_if_statement] = STATE(15),
        [sym_for_statement] = STATE(15),
        [sym_while_statement] = STATE(15),
        [sym_try_statement] = STATE(15),
        [sym_with_statement] = STATE(15),
        [sym_function_definition] = STATE(15),
        [sym__expression] = STATE(16),
        [sym_binary_operator] = STATE(9),
        [ts_builtin_sym_end] = ACTIONS(121),
        [anon_sym_SEMI] = ACTIONS(123),
        [anon_sym_print] = ACTIONS(55),
        [anon_sym_if] = ACTIONS(57),
        [anon_sym_for] = ACTIONS(59),
        [anon_sym_while] = ACTIONS(61),
        [anon_sym_try] = ACTIONS(63),
        [anon_sym_with] = ACTIONS(65),
        [anon_sym_def] = ACTIONS(67),
        [sym_identifier] = ACTIONS(69),
        [sym_comment] = ACTIONS(45),
        [sym__newline] = ACTIONS(123),
    },
    [18] = {
        [ts_builtin_sym_end] = ACTIONS(125),
        [sym_comment] = ACTIONS(45),
    },
    [19] = {
        [ts_builtin_sym_end] = ACTIONS(127),
        [anon_sym_SEMI] = ACTIONS(127),
        [anon_sym_print] = ACTIONS(129),
        [anon_sym_if] = ACTIONS(129),
        [anon_sym_for] = ACTIONS(129),
        [anon_sym_while] = ACTIONS(129),
        [anon_sym_try] = ACTIONS(129),
        [anon_sym_with] = ACTIONS(129),
        [anon_sym_def] = ACTIONS(129),
        [sym_identifier] = ACTIONS(131),
        [sym_comment] = ACTIONS(45),
        [sym__newline] = ACTIONS(127),
    },
    [20] = {
        [sym__expression] = STATE(21),
        [sym_binary_operator] = STATE(9),
        [sym_identifier] = ACTIONS(71),
        [sym_comment] = ACTIONS(45),
    },
    [21] = {
        [ts_builtin_sym_end] = ACTIONS(133),
        [anon_sym_SEMI] = ACTIONS(133),
        [anon_sym_print] = ACTIONS(135),
        [anon_sym_COMMA] = ACTIONS(133),
        [anon_sym_if] = ACTIONS(135),
        [anon_sym_elif] = ACTIONS(135),
        [anon_sym_else] = ACTIONS(135),
        [anon_sym_for] = ACTIONS(135),
        [anon_sym_while] = ACTIONS(135),
        [anon_sym_try] = ACTIONS(135),
        [anon_sym_except] = ACTIONS(135),
        [anon_sym_finally] = ACTIONS(135),
        [anon_sym_with] = ACTIONS(135),
        [anon_sym_def] = ACTIONS(135),
        [anon_sym_PLUS] = ACTIONS(133),
        [sym_identifier] = ACTIONS(137),
        [sym_comment] = ACTIONS(45),
        [sym__newline] = ACTIONS(133),
    },
    [22] = {
        [ts_builtin_sym_end] = ACTIONS(139),
        [anon_sym_SEMI] = ACTIONS(139),
        [anon_sym_print] = ACTIONS(141),
        [anon_sym_if] = ACTIONS(141),
        [anon_sym_for] = ACTIONS(141),
        [anon_sym_while] = ACTIONS(141),
        [anon_sym_try] = ACTIONS(141),
        [anon_sym_with] = ACTIONS(141),
        [anon_sym_def] = ACTIONS(141),
        [sym_identifier] = ACTIONS(143),
        [sym_comment] = ACTIONS(45),
        [sym__newline] = ACTIONS(139),
    },
    [23] = {
        [sym_parameters] = STATE(25),
        [anon_sym_LPAREN] = ACTIONS(145),
        [sym_comment] = ACTIONS(45),
    },
    [24] = {
        [sym_default_parameter] = STATE(151),
        [aux_sym_parameters_repeat1] = STATE(152),
        [anon_sym_RPAREN] = ACTIONS(147),
        [sym_identifier] = ACTIONS(149),
        [sym_comment] = ACTIONS(45),
    },
    [25] = {
        [anon_sym_COLON] = ACTIONS(151),
        [sym_comment] = ACTIONS(45),
    },
    [26] = {
        [sym__simple_statement] = STATE(28),
        [sym_print_statement] = STATE(13),
        [sym_expression_statement] = STATE(13),
        [sym__suite] = STATE(29),
        [sym__expression] = STATE(16),
        [sym_binary_operator] = STATE(9),
        [anon_sym_print] = ACTIONS(55),
        [sym_identifier] = ACTIONS(69),
        [sym_comment] = ACTIONS(45),
        [sym__indent] = ACTIONS(153),
    },
    [27] = {
        [sym__statement] = STATE(37),
        [sym__simple_statement] = STATE(38),
        [sym_print_statement] = STATE(13),
        [sym_expression_statement] = STATE(13),
        [sym__compound_statement] = STATE(39),
        [sym_if_statement] = STATE(40),
        [sym_for_statement] = STATE(40),
        [sym_while_statement] = STATE(40),
        [sym_try_statement] = STATE(40),
        [sym_with_statement] = STATE(40),
        [sym_function_definition] = STATE(40),
        [sym__expression] = STATE(16),
        [sym_binary_operator] = STATE(9),
        [aux_sym_module_repeat1] = STATE(41),
        [anon_sym_print] = ACTIONS(55),
        [anon_sym_if] = ACTIONS(155),
        [anon_sym_for] = ACTIONS(157),
        [anon_sym_while] = ACTIONS(159),
        [anon_sym_try] = ACTIONS(161),
        [anon_sym_with] = ACTIONS(163),
        [anon_sym_def] = ACTIONS(165),
        [sym_identifier] = ACTIONS(69),
        [sym_comment] = ACTIONS(45),
        [sym__dedent] = ACTIONS(167),
    },
    [28] = {
        [ts_builtin_sym_end] = ACTIONS(169),
        [anon_sym_SEMI] = ACTIONS(169),
        [anon_sym_print] = ACTIONS(171),
        [anon_sym_if] = ACTIONS(171),
        [anon_sym_elif] = ACTIONS(171),
        [anon_sym_else] = ACTIONS(171),
        [anon_sym_for] = ACTIONS(171),
        [anon_sym_while] = ACTIONS(171),
        [anon_sym_try] = ACTIONS(171),
        [anon_sym_except] = ACTIONS(171),
        [anon_sym_finally] = ACTIONS(171),
        [anon_sym_with] = ACTIONS(171),
        [anon_sym_def] = ACTIONS(171),
        [sym_identifier] = ACTIONS(173),
        [sym_comment] = ACTIONS(45),
        [sym__newline] = ACTIONS(169),
    },
    [29] = {
        [ts_builtin_sym_end] = ACTIONS(175),
        [anon_sym_SEMI] = ACTIONS(175),
        [anon_sym_print] = ACTIONS(177),
        [anon_sym_if] = ACTIONS(177),
        [anon_sym_for] = ACTIONS(177),
        [anon_sym_while] = ACTIONS(177),
        [anon_sym_try] = ACTIONS(177),
        [anon_sym_with] = ACTIONS(177),
        [anon_sym_def] = ACTIONS(177),
        [sym_identifier] = ACTIONS(179),
        [sym_comment] = ACTIONS(45),
        [sym__newline] = ACTIONS(175),
    },
    [30] = {
        [sym__expression] = STATE(131),
        [sym_binary_operator] = STATE(66),
        [sym_identifier] = ACTIONS(73),
        [sym_comment] = ACTIONS(45),
    },
    [31] = {
        [sym_expression_list] = STATE(123),
        [sym__expression] = STATE(124),
        [sym_binary_operator] = STATE(66),
        [sym_identifier] = ACTIONS(73),
        [sym_comment] = ACTIONS(45),
    },
    [32] = {
        [sym__expression] = STATE(119),
        [sym_binary_operator] = STATE(66),
        [sym_identifier] = ACTIONS(73),
        [sym_comment] = ACTIONS(45),
    },
    [33] = {
        [anon_sym_COLON] = ACTIONS(181),
        [sym_comment] = ACTIONS(45),
    },
    [34] = {
        [sym_with_item] = STATE(67),
        [sym__expression] = STATE(68),
        [sym_binary_operator] = STATE(66),
        [sym_identifier] = ACTIONS(73),
        [sym_comment] = ACTIONS(45),
    },
    [35] = {
        [sym_identifier] = ACTIONS(183),
        [sym_comment] = ACTIONS(45),
    },
    [36] = {
        [ts_builtin_sym_end] = ACTIONS(185),
        [anon_sym_SEMI] = ACTIONS(185),
        [anon_sym_print] = ACTIONS(187),
        [anon_sym_if] = ACTIONS(187),
        [anon_sym_elif] = ACTIONS(187),
        [anon_sym_else] = ACTIONS(187),
        [anon_sym_for] = ACTIONS(187),
        [anon_sym_while] = ACTIONS(187),
        [anon_sym_try] = ACTIONS(187),
        [anon_sym_except] = ACTIONS(187),
        [anon_sym_finally] = ACTIONS(187),
        [anon_sym_with] = ACTIONS(187),
        [anon_sym_def] = ACTIONS(187),
        [sym_identifier] = ACTIONS(189),
        [sym_comment] = ACTIONS(45),
        [sym__newline] = ACTIONS(185),
    },
    [37] = {
        [anon_sym_print] = ACTIONS(89),
        [anon_sym_if] = ACTIONS(89),
        [anon_sym_for] = ACTIONS(89),
        [anon_sym_while] = ACTIONS(89),
        [anon_sym_try] = ACTIONS(89),
        [anon_sym_with] = ACTIONS(89),
        [anon_sym_def] = ACTIONS(89),
        [sym_identifier] = ACTIONS(91),
        [sym_comment] = ACTIONS(45),
        [sym__dedent] = ACTIONS(87),
    },
    [38] = {
        [sym_comment] = ACTIONS(45),
        [sym__newline] = ACTIONS(191),
    },
    [39] = {
        [anon_sym_print] = ACTIONS(103),
        [anon_sym_if] = ACTIONS(103),
        [anon_sym_for] = ACTIONS(103),
        [anon_sym_while] = ACTIONS(103),
        [anon_sym_try] = ACTIONS(103),
        [anon_sym_with] = ACTIONS(103),
        [anon_sym_def] = ACTIONS(103),
        [sym_identifier] = ACTIONS(105),
        [sym_comment] = ACTIONS(45),
        [sym__dedent] = ACTIONS(101),
    },
    [40] = {
        [anon_sym_print] = ACTIONS(109),
        [anon_sym_if] = ACTIONS(109),
        [anon_sym_for] = ACTIONS(109),
        [anon_sym_while] = ACTIONS(109),
        [anon_sym_try] = ACTIONS(109),
        [anon_sym_with] = ACTIONS(109),
        [anon_sym_def] = ACTIONS(109),
        [sym_identifier] = ACTIONS(111),
        [sym_comment] = ACTIONS(45),
        [sym__dedent] = ACTIONS(107),
    },
    [41] = {
        [sym__statement] = STATE(43),
        [sym__simple_statement] = STATE(38),
        [sym_print_statement] = STATE(13),
        [sym_expression_statement] = STATE(13),
        [sym__compound_statement] = STATE(39),
        [sym_if_statement] = STATE(40),
        [sym_for_statement] = STATE(40),
        [sym_while_statement] = STATE(40),
        [sym_try_statement] = STATE(40),
        [sym_with_statement] = STATE(40),
        [sym_function_definition] = STATE(40),
        [sym__expression] = STATE(16),
        [sym_binary_operator] = STATE(9),
        [anon_sym_print] = ACTIONS(55),
        [anon_sym_if] = ACTIONS(155),
        [anon_sym_for] = ACTIONS(157),
        [anon_sym_while] = ACTIONS(159),
        [anon_sym_try] = ACTIONS(161),
        [anon_sym_with] = ACTIONS(163),
        [anon_sym_def] = ACTIONS(165),
        [sym_identifier] = ACTIONS(69),
        [sym_comment] = ACTIONS(45),
        [sym__dedent] = ACTIONS(193),
    },
    [42] = {
        [ts_builtin_sym_end] = ACTIONS(195),
        [anon_sym_SEMI] = ACTIONS(195),
        [anon_sym_print] = ACTIONS(197),
        [anon_sym_if] = ACTIONS(197),
        [anon_sym_elif] = ACTIONS(197),
        [anon_sym_else] = ACTIONS(197),
        [anon_sym_for] = ACTIONS(197),
        [anon_sym_while] = ACTIONS(197),
        [anon_sym_try] = ACTIONS(197),
        [anon_sym_except] = ACTIONS(197),
        [anon_sym_finally] = ACTIONS(197),
        [anon_sym_with] = ACTIONS(197),
        [anon_sym_def] = ACTIONS(197),
        [sym_identifier] = ACTIONS(199),
        [sym_comment] = ACTIONS(45),
        [sym__newline] = ACTIONS(195),
    },
    [43] = {
        [anon_sym_print] = ACTIONS(129),
        [anon_sym_if] = ACTIONS(129),
        [anon_sym_for] = ACTIONS(129),
        [anon_sym_while] = ACTIONS(129),
        [anon_sym_try] = ACTIONS(129),
        [anon_sym_with] = ACTIONS(129),
        [anon_sym_def] = ACTIONS(129),
        [sym_identifier] = ACTIONS(131),
        [sym_comment] = ACTIONS(45),
        [sym__dedent] = ACTIONS(127),
    },
    [44] = {
        [anon_sym_print] = ACTIONS(141),
        [anon_sym_if] = ACTIONS(141),
        [anon_sym_for] = ACTIONS(141),
        [anon_sym_while] = ACTIONS(141),
        [anon_sym_try] = ACTIONS(141),
        [anon_sym_with] = ACTIONS(141),
        [anon_sym_def] = ACTIONS(141),
        [sym_identifier] = ACTIONS(143),
        [sym_comment] = ACTIONS(45),
        [sym__dedent] = ACTIONS(139),
    },
    [45] = {
        [sym_parameters] = STATE(46),
        [anon_sym_LPAREN] = ACTIONS(145),
        [sym_comment] = ACTIONS(45),
    },
    [46] = {
        [anon_sym_COLON] = ACTIONS(201),
        [sym_comment] = ACTIONS(45),
    },
    [47] = {
        [sym__simple_statement] = STATE(51),
        [sym_print_statement] = STATE(52),
        [sym_expression_statement] = STATE(52),
        [sym__suite] = STATE(53),
        [sym__expression] = STATE(54),
        [sym_binary_operator] = STATE(49),
        [anon_sym_print] = ACTIONS(203),
        [sym_identifier] = ACTIONS(205),
        [sym_comment] = ACTIONS(45),
        [sym__indent] = ACTIONS(207),
    },
    [48] = {
        [sym__expression] = STATE(60),
        [sym_binary_operator] = STATE(49),
        [sym_identifier] = ACTIONS(209),
        [sym_comment] = ACTIONS(45),
    },
    [49] = {
        [anon_sym_print] = ACTIONS(81),
        [anon_sym_COMMA] = ACTIONS(79),
        [anon_sym_if] = ACTIONS(81),
        [anon_sym_elif] = ACTIONS(81),
        [anon_sym_else] = ACTIONS(81),
        [anon_sym_for] = ACTIONS(81),
        [anon_sym_while] = ACTIONS(81),
        [anon_sym_try] = ACTIONS(81),
        [anon_sym_except] = ACTIONS(81),
        [anon_sym_finally] = ACTIONS(81),
        [anon_sym_with] = ACTIONS(81),
        [anon_sym_def] = ACTIONS(81),
        [anon_sym_PLUS] = ACTIONS(79),
        [sym_identifier] = ACTIONS(83),
        [sym_comment] = ACTIONS(45),
        [sym__dedent] = ACTIONS(79),
    },
    [50] = {
        [sym__statement] = STATE(37),
        [sym__simple_statement] = STATE(38),
        [sym_print_statement] = STATE(13),
        [sym_expression_statement] = STATE(13),
        [sym__compound_statement] = STATE(39),
        [sym_if_statement] = STATE(40),
        [sym_for_statement] = STATE(40),
        [sym_while_statement] = STATE(40),
        [sym_try_statement] = STATE(40),
        [sym_with_statement] = STATE(40),
        [sym_function_definition] = STATE(40),
        [sym__expression] = STATE(16),
        [sym_binary_operator] = STATE(9),
        [aux_sym_module_repeat1] = STATE(58),
        [anon_sym_print] = ACTIONS(55),
        [anon_sym_if] = ACTIONS(155),
        [anon_sym_for] = ACTIONS(157),
        [anon_sym_while] = ACTIONS(159),
        [anon_sym_try] = ACTIONS(161),
        [anon_sym_with] = ACTIONS(163),
        [anon_sym_def] = ACTIONS(165),
        [sym_identifier] = ACTIONS(69),
        [sym_comment] = ACTIONS(45),
        [sym__dedent] = ACTIONS(211),
    },
    [51] = {
        [anon_sym_print] = ACTIONS(171),
        [anon_sym_if] = ACTIONS(171),
        [anon_sym_elif] = ACTIONS(171),
        [anon_sym_else] = ACTIONS(171),
        [anon_sym_for] = ACTIONS(171),
        [anon_sym_while] = ACTIONS(171),
        [anon_sym_try] = ACTIONS(171),
        [anon_sym_except] = ACTIONS(171),
        [anon_sym_finally] = ACTIONS(171),
        [anon_sym_with] = ACTIONS(171),
        [anon_sym_def] = ACTIONS(171),
        [sym_identifier] = ACTIONS(173),
        [sym_comment] = ACTIONS(45),
        [sym__dedent] = ACTIONS(169),
    },
    [52] = {
        [anon_sym_print] = ACTIONS(97),
        [anon_sym_if] = ACTIONS(97),
        [anon_sym_elif] = ACTIONS(97),
        [anon_sym_else] = ACTIONS(97),
        [anon_sym_for] = ACTIONS(97),
        [anon_sym_while] = ACTIONS(97),
        [anon_sym_try] = ACTIONS(97),
        [anon_sym_except] = ACTIONS(97),
        [anon_sym_finally] = ACTIONS(97),
        [anon_sym_with] = ACTIONS(97),
        [anon_sym_def] = ACTIONS(97),
        [sym_identifier] = ACTIONS(99),
        [sym_comment] = ACTIONS(45),
        [sym__dedent] = ACTIONS(95),
    },
    [53] = {
        [anon_sym_print] = ACTIONS(177),
        [anon_sym_if] = ACTIONS(177),
        [anon_sym_for] = ACTIONS(177),
        [anon_sym_while] = ACTIONS(177),
        [anon_sym_try] = ACTIONS(177),
        [anon_sym_with] = ACTIONS(177),
        [anon_sym_def] = ACTIONS(177),
        [sym_identifier] = ACTIONS(179),
        [sym_comment] = ACTIONS(45),
        [sym__dedent] = ACTIONS(175),
    },
    [54] = {
        [anon_sym_print] = ACTIONS(115),
        [anon_sym_if] = ACTIONS(115),
        [anon_sym_elif] = ACTIONS(115),
        [anon_sym_else] = ACTIONS(115),
        [anon_sym_for] = ACTIONS(115),
        [anon_sym_while] = ACTIONS(115),
        [anon_sym_try] = ACTIONS(115),
        [anon_sym_except] = ACTIONS(115),
        [anon_sym_finally] = ACTIONS(115),
        [anon_sym_with] = ACTIONS(115),
        [anon_sym_def] = ACTIONS(115),
        [anon_sym_PLUS] = ACTIONS(213),
        [sym_identifier] = ACTIONS(119),
        [sym_comment] = ACTIONS(45),
        [sym__dedent] = ACTIONS(113),
    },
    [55] = {
        [sym__expression] = STATE(56),
        [sym_binary_operator] = STATE(49),
        [sym_identifier] = ACTIONS(209),
        [sym_comment] = ACTIONS(45),
    },
    [56] = {
        [anon_sym_print] = ACTIONS(135),
        [anon_sym_COMMA] = ACTIONS(133),
        [anon_sym_if] = ACTIONS(135),
        [anon_sym_elif] = ACTIONS(135),
        [anon_sym_else] = ACTIONS(135),
        [anon_sym_for] = ACTIONS(135),
        [anon_sym_while] = ACTIONS(135),
        [anon_sym_try] = ACTIONS(135),
        [anon_sym_except] = ACTIONS(135),
        [anon_sym_finally] = ACTIONS(135),
        [anon_sym_with] = ACTIONS(135),
        [anon_sym_def] = ACTIONS(135),
        [anon_sym_PLUS] = ACTIONS(133),
        [sym_identifier] = ACTIONS(137),
        [sym_comment] = ACTIONS(45),
        [sym__dedent] = ACTIONS(133),
    },
    [57] = {
        [anon_sym_print] = ACTIONS(187),
        [anon_sym_if] = ACTIONS(187),
        [anon_sym_elif] = ACTIONS(187),
        [anon_sym_else] = ACTIONS(187),
        [anon_sym_for] = ACTIONS(187),
        [anon_sym_while] = ACTIONS(187),
        [anon_sym_try] = ACTIONS(187),
        [anon_sym_except] = ACTIONS(187),
        [anon_sym_finally] = ACTIONS(187),
        [anon_sym_with] = ACTIONS(187),
        [anon_sym_def] = ACTIONS(187),
        [sym_identifier] = ACTIONS(189),
        [sym_comment] = ACTIONS(45),
        [sym__dedent] = ACTIONS(185),
    },
    [58] = {
        [sym__statement] = STATE(43),
        [sym__simple_statement] = STATE(38),
        [sym_print_statement] = STATE(13),
        [sym_expression_statement] = STATE(13),
        [sym__compound_statement] = STATE(39),
        [sym_if_statement] = STATE(40),
        [sym_for_statement] = STATE(40),
        [sym_while_statement] = STATE(40),
        [sym_try_statement] = STATE(40),
        [sym_with_statement] = STATE(40),
        [sym_function_definition] = STATE(40),
        [sym__expression] = STATE(16),
        [sym_binary_operator] = STATE(9),
        [anon_sym_print] = ACTIONS(55),
        [anon_sym_if] = ACTIONS(155),
        [anon_sym_for] = ACTIONS(157),
        [anon_sym_while] = ACTIONS(159),
        [anon_sym_try] = ACTIONS(161),
        [anon_sym_with] = ACTIONS(163),
        [anon_sym_def] = ACTIONS(165),
        [sym_identifier] = ACTIONS(69),
        [sym_comment] = ACTIONS(45),
        [sym__dedent] = ACTIONS(215),
    },
    [59] = {
        [anon_sym_print] = ACTIONS(197),
        [anon_sym_if] = ACTIONS(197),
        [anon_sym_elif] = ACTIONS(197),
        [anon_sym_else] = ACTIONS(197),
        [anon_sym_for] = ACTIONS(197),
        [anon_sym_while] = ACTIONS(197),
        [anon_sym_try] = ACTIONS(197),
        [anon_sym_except] = ACTIONS(197),
        [anon_sym_finally] = ACTIONS(197),
        [anon_sym_with] = ACTIONS(197),
        [anon_sym_def] = ACTIONS(197),
        [sym_identifier] = ACTIONS(199),
        [sym_comment] = ACTIONS(45),
        [sym__dedent] = ACTIONS(195),
    },
    [60] = {
        [aux_sym_print_statement_repeat1] = STATE(62),
        [anon_sym_print] = ACTIONS(217),
        [anon_sym_COMMA] = ACTIONS(219),
        [anon_sym_if] = ACTIONS(217),
        [anon_sym_elif] = ACTIONS(217),
        [anon_sym_else] = ACTIONS(217),
        [anon_sym_for] = ACTIONS(217),
        [anon_sym_while] = ACTIONS(217),
        [anon_sym_try] = ACTIONS(217),
        [anon_sym_except] = ACTIONS(217),
        [anon_sym_finally] = ACTIONS(217),
        [anon_sym_with] = ACTIONS(217),
        [anon_sym_def] = ACTIONS(217),
        [anon_sym_PLUS] = ACTIONS(213),
        [sym_identifier] = ACTIONS(221),
        [sym_comment] = ACTIONS(45),
        [sym__dedent] = ACTIONS(223),
    },
    [61] = {
        [sym__expression] = STATE(65),
        [sym_binary_operator] = STATE(49),
        [sym_identifier] = ACTIONS(209),
        [sym_comment] = ACTIONS(45),
    },
    [62] = {
        [anon_sym_print] = ACTIONS(225),
        [anon_sym_COMMA] = ACTIONS(227),
        [anon_sym_if] = ACTIONS(225),
        [anon_sym_elif] = ACTIONS(225),
        [anon_sym_else] = ACTIONS(225),
        [anon_sym_for] = ACTIONS(225),
        [anon_sym_while] = ACTIONS(225),
        [anon_sym_try] = ACTIONS(225),
        [anon_sym_except] = ACTIONS(225),
        [anon_sym_finally] = ACTIONS(225),
        [anon_sym_with] = ACTIONS(225),
        [anon_sym_def] = ACTIONS(225),
        [sym_identifier] = ACTIONS(229),
        [sym_comment] = ACTIONS(45),
        [sym__dedent] = ACTIONS(231),
    },
    [63] = {
        [sym__expression] = STATE(64),
        [sym_binary_operator] = STATE(49),
        [sym_identifier] = ACTIONS(209),
        [sym_comment] = ACTIONS(45),
    },
    [64] = {
        [anon_sym_print] = ACTIONS(233),
        [anon_sym_COMMA] = ACTIONS(235),
        [anon_sym_if] = ACTIONS(233),
        [anon_sym_elif] = ACTIONS(233),
        [anon_sym_else] = ACTIONS(233),
        [anon_sym_for] = ACTIONS(233),
        [anon_sym_while] = ACTIONS(233),
        [anon_sym_try] = ACTIONS(233),
        [anon_sym_except] = ACTIONS(233),
        [anon_sym_finally] = ACTIONS(233),
        [anon_sym_with] = ACTIONS(233),
        [anon_sym_def] = ACTIONS(233),
        [anon_sym_PLUS] = ACTIONS(213),
        [sym_identifier] = ACTIONS(237),
        [sym_comment] = ACTIONS(45),
        [sym__dedent] = ACTIONS(235),
    },
    [65] = {
        [anon_sym_print] = ACTIONS(239),
        [anon_sym_COMMA] = ACTIONS(241),
        [anon_sym_if] = ACTIONS(239),
        [anon_sym_elif] = ACTIONS(239),
        [anon_sym_else] = ACTIONS(239),
        [anon_sym_for] = ACTIONS(239),
        [anon_sym_while] = ACTIONS(239),
        [anon_sym_try] = ACTIONS(239),
        [anon_sym_except] = ACTIONS(239),
        [anon_sym_finally] = ACTIONS(239),
        [anon_sym_with] = ACTIONS(239),
        [anon_sym_def] = ACTIONS(239),
        [anon_sym_PLUS] = ACTIONS(213),
        [sym_identifier] = ACTIONS(243),
        [sym_comment] = ACTIONS(45),
        [sym__dedent] = ACTIONS(241),
    },
    [66] = {
        [anon_sym_COMMA] = ACTIONS(79),
        [anon_sym_COLON] = ACTIONS(79),
        [anon_sym_in] = ACTIONS(79),
        [anon_sym_except] = ACTIONS(79),
        [anon_sym_as] = ACTIONS(79),
        [anon_sym_finally] = ACTIONS(79),
        [anon_sym_RPAREN] = ACTIONS(79),
        [anon_sym_PLUS] = ACTIONS(79),
        [sym_comment] = ACTIONS(45),
    },
    [67] = {
        [aux_sym_with_statement_repeat1] = STATE(75),
        [anon_sym_COMMA] = ACTIONS(245),
        [anon_sym_COLON] = ACTIONS(247),
        [sym_comment] = ACTIONS(45),
    },
    [68] = {
        [anon_sym_COMMA] = ACTIONS(249),
        [anon_sym_COLON] = ACTIONS(249),
        [anon_sym_as] = ACTIONS(251),
        [anon_sym_PLUS] = ACTIONS(253),
        [sym_comment] = ACTIONS(45),
    },
    [69] = {
        [sym__expression] = STATE(72),
        [sym_binary_operator] = STATE(66),
        [sym_identifier] = ACTIONS(73),
        [sym_comment] = ACTIONS(45),
    },
    [70] = {
        [sym__expression] = STATE(71),
        [sym_binary_operator] = STATE(66),
        [sym_identifier] = ACTIONS(73),
        [sym_comment] = ACTIONS(45),
    },
    [71] = {
        [anon_sym_COMMA] = ACTIONS(133),
        [anon_sym_COLON] = ACTIONS(133),
        [anon_sym_in] = ACTIONS(133),
        [anon_sym_except] = ACTIONS(133),
        [anon_sym_as] = ACTIONS(133),
        [anon_sym_finally] = ACTIONS(133),
        [anon_sym_RPAREN] = ACTIONS(133),
        [anon_sym_PLUS] = ACTIONS(133),
        [sym_comment] = ACTIONS(45),
    },
    [72] = {
        [anon_sym_COMMA] = ACTIONS(255),
        [anon_sym_COLON] = ACTIONS(255),
        [anon_sym_PLUS] = ACTIONS(253),
        [sym_comment] = ACTIONS(45),
    },
    [73] = {
        [sym_with_item] = STATE(81),
        [sym__expression] = STATE(68),
        [sym_binary_operator] = STATE(66),
        [sym_identifier] = ACTIONS(73),
        [sym_comment] = ACTIONS(45),
    },
    [74] = {
        [sym__simple_statement] = STATE(51),
        [sym_print_statement] = STATE(52),
        [sym_expression_statement] = STATE(52),
        [sym__suite] = STATE(80),
        [sym__expression] = STATE(54),
        [sym_binary_operator] = STATE(49),
        [anon_sym_print] = ACTIONS(203),
        [sym_identifier] = ACTIONS(205),
        [sym_comment] = ACTIONS(45),
        [sym__indent] = ACTIONS(207),
    },
    [75] = {
        [anon_sym_COMMA] = ACTIONS(257),
        [anon_sym_COLON] = ACTIONS(259),
        [sym_comment] = ACTIONS(45),
    },
    [76] = {
        [sym_with_item] = STATE(79),
        [sym__expression] = STATE(68),
        [sym_binary_operator] = STATE(66),
        [sym_identifier] = ACTIONS(73),
        [sym_comment] = ACTIONS(45),
    },
    [77] = {
        [sym__simple_statement] = STATE(51),
        [sym_print_statement] = STATE(52),
        [sym_expression_statement] = STATE(52),
        [sym__suite] = STATE(78),
        [sym__expression] = STATE(54),
        [sym_binary_operator] = STATE(49),
        [anon_sym_print] = ACTIONS(203),
        [sym_identifier] = ACTIONS(205),
        [sym_comment] = ACTIONS(45),
        [sym__indent] = ACTIONS(207),
    },
    [78] = {
        [anon_sym_print] = ACTIONS(261),
        [anon_sym_if] = ACTIONS(261),
        [anon_sym_for] = ACTIONS(261),
        [anon_sym_while] = ACTIONS(261),
        [anon_sym_try] = ACTIONS(261),
        [anon_sym_with] = ACTIONS(261),
        [anon_sym_def] = ACTIONS(261),
        [sym_identifier] = ACTIONS(263),
        [sym_comment] = ACTIONS(45),
        [sym__dedent] = ACTIONS(265),
    },
    [79] = {
        [anon_sym_COMMA] = ACTIONS(267),
        [anon_sym_COLON] = ACTIONS(267),
        [sym_comment] = ACTIONS(45),
    },
    [80] = {
        [anon_sym_print] = ACTIONS(269),
        [anon_sym_if] = ACTIONS(269),
        [anon_sym_for] = ACTIONS(269),
        [anon_sym_while] = ACTIONS(269),
        [anon_sym_try] = ACTIONS(269),
        [anon_sym_with] = ACTIONS(269),
        [anon_sym_def] = ACTIONS(269),
        [sym_identifier] = ACTIONS(271),
        [sym_comment] = ACTIONS(45),
        [sym__dedent] = ACTIONS(273),
    },
    [81] = {
        [anon_sym_COMMA] = ACTIONS(275),
        [anon_sym_COLON] = ACTIONS(275),
        [sym_comment] = ACTIONS(45),
    },
    [82] = {
        [sym__simple_statement] = STATE(85),
        [sym_print_statement] = STATE(86),
        [sym_expression_statement] = STATE(86),
        [sym__suite] = STATE(87),
        [sym__expression] = STATE(88),
        [sym_binary_operator] = STATE(66),
        [anon_sym_print] = ACTIONS(277),
        [sym_identifier] = ACTIONS(279),
        [sym_comment] = ACTIONS(45),
        [sym__indent] = ACTIONS(281),
    },
    [83] = {
        [sym__expression] = STATE(113),
        [sym_binary_operator] = STATE(66),
        [sym_identifier] = ACTIONS(73),
        [sym_comment] = ACTIONS(45),
    },
    [84] = {
        [sym__statement] = STATE(37),
        [sym__simple_statement] = STATE(38),
        [sym_print_statement] = STATE(13),
        [sym_expression_statement] = STATE(13),
        [sym__compound_statement] = STATE(39),
        [sym_if_statement] = STATE(40),
        [sym_for_statement] = STATE(40),
        [sym_while_statement] = STATE(40),
        [sym_try_statement] = STATE(40),
        [sym_with_statement] = STATE(40),
        [sym_function_definition] = STATE(40),
        [sym__expression] = STATE(16),
        [sym_binary_operator] = STATE(9),
        [aux_sym_module_repeat1] = STATE(111),
        [anon_sym_print] = ACTIONS(55),
        [anon_sym_if] = ACTIONS(155),
        [anon_sym_for] = ACTIONS(157),
        [anon_sym_while] = ACTIONS(159),
        [anon_sym_try] = ACTIONS(161),
        [anon_sym_with] = ACTIONS(163),
        [anon_sym_def] = ACTIONS(165),
        [sym_identifier] = ACTIONS(69),
        [sym_comment] = ACTIONS(45),
        [sym__dedent] = ACTIONS(283),
    },
    [85] = {
        [anon_sym_except] = ACTIONS(169),
        [anon_sym_finally] = ACTIONS(169),
        [sym_comment] = ACTIONS(45),
    },
    [86] = {
        [anon_sym_except] = ACTIONS(95),
        [anon_sym_finally] = ACTIONS(95),
        [sym_comment] = ACTIONS(45),
    },
    [87] = {
        [sym_except_clause] = STATE(91),
        [sym_finally_clause] = STATE(92),
        [aux_sym_try_statement_repeat1] = STATE(93),
        [anon_sym_except] = ACTIONS(285),
        [anon_sym_finally] = ACTIONS(287),
        [sym_comment] = ACTIONS(45),
    },
    [88] = {
        [anon_sym_except] = ACTIONS(113),
        [anon_sym_finally] = ACTIONS(113),
        [anon_sym_PLUS] = ACTIONS(253),
        [sym_comment] = ACTIONS(45),
    },
    [89] = {
        [sym__expression] = STATE(103),
        [sym_binary_operator] = STATE(66),
        [sym_identifier] = ACTIONS(73),
        [sym_comment] = ACTIONS(45),
    },
    [90] = {
        [anon_sym_COLON] = ACTIONS(289),
        [sym_comment] = ACTIONS(45),
    },
    [91] = {
        [anon_sym_print] = ACTIONS(291),
        [anon_sym_if] = ACTIONS(291),
        [anon_sym_else] = ACTIONS(291),
        [anon_sym_for] = ACTIONS(291),
        [anon_sym_while] = ACTIONS(291),
        [anon_sym_try] = ACTIONS(291),
        [anon_sym_except] = ACTIONS(291),
        [anon_sym_finally] = ACTIONS(291),
        [anon_sym_with] = ACTIONS(291),
        [anon_sym_def] = ACTIONS(291),
        [sym_identifier] = ACTIONS(293),
        [sym_comment] = ACTIONS(45),
        [sym__dedent] = ACTIONS(295),
    },
    [92] = {
        [anon_sym_print] = ACTIONS(297),
        [anon_sym_if] = ACTIONS(297),
        [anon_sym_for] = ACTIONS(297),
        [anon_sym_while] = ACTIONS(297),
        [anon_sym_try] = ACTIONS(297),
        [anon_sym_with] = ACTIONS(297),
        [anon_sym_def] = ACTIONS(297),
        [sym_identifier] = ACTIONS(299),
        [sym_comment] = ACTIONS(45),
        [sym__dedent] = ACTIONS(301),
    },
    [93] = {
        [sym_else_clause] = STATE(95),
        [sym_except_clause] = STATE(96),
        [sym_finally_clause] = STATE(97),
        [anon_sym_print] = ACTIONS(297),
        [anon_sym_if] = ACTIONS(297),
        [anon_sym_else] = ACTIONS(303),
        [anon_sym_for] = ACTIONS(297),
        [anon_sym_while] = ACTIONS(297),
        [anon_sym_try] = ACTIONS(297),
        [anon_sym_except] = ACTIONS(305),
        [anon_sym_finally] = ACTIONS(307),
        [anon_sym_with] = ACTIONS(297),
        [anon_sym_def] = ACTIONS(297),
        [sym_identifier] = ACTIONS(299),
        [sym_comment] = ACTIONS(45),
        [sym__dedent] = ACTIONS(301),
    },
    [94] = {
        [anon_sym_COLON] = ACTIONS(309),
        [sym_comment] = ACTIONS(45),
    },
    [95] = {
        [sym_finally_clause] = STATE(98),
        [anon_sym_print] = ACTIONS(311),
        [anon_sym_if] = ACTIONS(311),
        [anon_sym_for] = ACTIONS(311),
        [anon_sym_while] = ACTIONS(311),
        [anon_sym_try] = ACTIONS(311),
        [anon_sym_finally] = ACTIONS(307),
        [anon_sym_with] = ACTIONS(311),
        [anon_sym_def] = ACTIONS(311),
        [sym_identifier] = ACTIONS(313),
        [sym_comment] = ACTIONS(45),
        [sym__dedent] = ACTIONS(315),
    },
    [96] = {
        [anon_sym_print] = ACTIONS(317),
        [anon_sym_if] = ACTIONS(317),
        [anon_sym_else] = ACTIONS(317),
        [anon_sym_for] = ACTIONS(317),
        [anon_sym_while] = ACTIONS(317),
        [anon_sym_try] = ACTIONS(317),
        [anon_sym_except] = ACTIONS(317),
        [anon_sym_finally] = ACTIONS(317),
        [anon_sym_with] = ACTIONS(317),
        [anon_sym_def] = ACTIONS(317),
        [sym_identifier] = ACTIONS(319),
        [sym_comment] = ACTIONS(45),
        [sym__dedent] = ACTIONS(321),
    },
    [97] = {
        [anon_sym_print] = ACTIONS(311),
        [anon_sym_if] = ACTIONS(311),
        [anon_sym_for] = ACTIONS(311),
        [anon_sym_while] = ACTIONS(311),
        [anon_sym_try] = ACTIONS(311),
        [anon_sym_with] = ACTIONS(311),
        [anon_sym_def] = ACTIONS(311),
        [sym_identifier] = ACTIONS(313),
        [sym_comment] = ACTIONS(45),
        [sym__dedent] = ACTIONS(315),
    },
    [98] = {
        [anon_sym_print] = ACTIONS(323),
        [anon_sym_if] = ACTIONS(323),
        [anon_sym_for] = ACTIONS(323),
        [anon_sym_while] = ACTIONS(323),
        [anon_sym_try] = ACTIONS(323),
        [anon_sym_with] = ACTIONS(323),
        [anon_sym_def] = ACTIONS(323),
        [sym_identifier] = ACTIONS(325),
        [sym_comment] = ACTIONS(45),
        [sym__dedent] = ACTIONS(327),
    },
    [99] = {
        [sym__simple_statement] = STATE(51),
        [sym_print_statement] = STATE(52),
        [sym_expression_statement] = STATE(52),
        [sym__suite] = STATE(100),
        [sym__expression] = STATE(54),
        [sym_binary_operator] = STATE(49),
        [anon_sym_print] = ACTIONS(203),
        [sym_identifier] = ACTIONS(205),
        [sym_comment] = ACTIONS(45),
        [sym__indent] = ACTIONS(207),
    },
    [100] = {
        [anon_sym_print] = ACTIONS(329),
        [anon_sym_if] = ACTIONS(329),
        [anon_sym_for] = ACTIONS(329),
        [anon_sym_while] = ACTIONS(329),
        [anon_sym_try] = ACTIONS(329),
        [anon_sym_finally] = ACTIONS(329),
        [anon_sym_with] = ACTIONS(329),
        [anon_sym_def] = ACTIONS(329),
        [sym_identifier] = ACTIONS(331),
        [sym_comment] = ACTIONS(45),
        [sym__dedent] = ACTIONS(333),
    },
    [101] = {
        [sym__simple_statement] = STATE(51),
        [sym_print_statement] = STATE(52),
        [sym_expression_statement] = STATE(52),
        [sym__suite] = STATE(102),
        [sym__expression] = STATE(54),
        [sym_binary_operator] = STATE(49),
        [anon_sym_print] = ACTIONS(203),
        [sym_identifier] = ACTIONS(205),
        [sym_comment] = ACTIONS(45),
        [sym__indent] = ACTIONS(207),
    },
    [102] = {
        [anon_sym_print] = ACTIONS(335),
        [anon_sym_if] = ACTIONS(335),
        [anon_sym_for] = ACTIONS(335),
        [anon_sym_while] = ACTIONS(335),
        [anon_sym_try] = ACTIONS(335),
        [anon_sym_with] = ACTIONS(335),
        [anon_sym_def] = ACTIONS(335),
        [sym_identifier] = ACTIONS(337),
        [sym_comment] = ACTIONS(45),
        [sym__dedent] = ACTIONS(339),
    },
    [103] = {
        [anon_sym_COMMA] = ACTIONS(341),
        [anon_sym_COLON] = ACTIONS(343),
        [anon_sym_as] = ACTIONS(341),
        [anon_sym_PLUS] = ACTIONS(253),
        [sym_comment] = ACTIONS(45),
    },
    [104] = {
        [sym__expression] = STATE(106),
        [sym_binary_operator] = STATE(66),
        [sym_identifier] = ACTIONS(73),
        [sym_comment] = ACTIONS(45),
    },
    [105] = {
        [sym__simple_statement] = STATE(51),
        [sym_print_statement] = STATE(52),
        [sym_expression_statement] = STATE(52),
        [sym__suite] = STATE(109),
        [sym__expression] = STATE(54),
        [sym_binary_operator] = STATE(49),
        [anon_sym_print] = ACTIONS(203),
        [sym_identifier] = ACTIONS(205),
        [sym_comment] = ACTIONS(45),
        [sym__indent] = ACTIONS(207),
    },
    [106] = {
        [anon_sym_COLON] = ACTIONS(345),
        [anon_sym_PLUS] = ACTIONS(253),
        [sym_comment] = ACTIONS(45),
    },
    [107] = {
        [sym__simple_statement] = STATE(51),
        [sym_print_statement] = STATE(52),
        [sym_expression_statement] = STATE(52),
        [sym__suite] = STATE(108),
        [sym__expression] = STATE(54),
        [sym_binary_operator] = STATE(49),
        [anon_sym_print] = ACTIONS(203),
        [sym_identifier] = ACTIONS(205),
        [sym_comment] = ACTIONS(45),
        [sym__indent] = ACTIONS(207),
    },
    [108] = {
        [anon_sym_print] = ACTIONS(347),
        [anon_sym_if] = ACTIONS(347),
        [anon_sym_else] = ACTIONS(347),
        [anon_sym_for] = ACTIONS(347),
        [anon_sym_while] = ACTIONS(347),
        [anon_sym_try] = ACTIONS(347),
        [anon_sym_except] = ACTIONS(347),
        [anon_sym_finally] = ACTIONS(347),
        [anon_sym_with] = ACTIONS(347),
        [anon_sym_def] = ACTIONS(347),
        [sym_identifier] = ACTIONS(349),
        [sym_comment] = ACTIONS(45),
        [sym__dedent] = ACTIONS(351),
    },
    [109] = {
        [anon_sym_print] = ACTIONS(353),
        [anon_sym_if] = ACTIONS(353),
        [anon_sym_else] = ACTIONS(353),
        [anon_sym_for] = ACTIONS(353),
        [anon_sym_while] = ACTIONS(353),
        [anon_sym_try] = ACTIONS(353),
        [anon_sym_except] = ACTIONS(353),
        [anon_sym_finally] = ACTIONS(353),
        [anon_sym_with] = ACTIONS(353),
        [anon_sym_def] = ACTIONS(353),
        [sym_identifier] = ACTIONS(355),
        [sym_comment] = ACTIONS(45),
        [sym__dedent] = ACTIONS(357),
    },
    [110] = {
        [anon_sym_except] = ACTIONS(185),
        [anon_sym_finally] = ACTIONS(185),
        [sym_comment] = ACTIONS(45),
    },
    [111] = {
        [sym__statement] = STATE(43),
        [sym__simple_statement] = STATE(38),
        [sym_print_statement] = STATE(13),
        [sym_expression_statement] = STATE(13),
        [sym__compound_statement] = STATE(39),
        [sym_if_statement] = STATE(40),
        [sym_for_statement] = STATE(40),
        [sym_while_statement] = STATE(40),
        [sym_try_statement] = STATE(40),
        [sym_with_statement] = STATE(40),
        [sym_function_definition] = STATE(40),
        [sym__expression] = STATE(16),
        [sym_binary_operator] = STATE(9),
        [anon_sym_print] = ACTIONS(55),
        [anon_sym_if] = ACTIONS(155),
        [anon_sym_for] = ACTIONS(157),
        [anon_sym_while] = ACTIONS(159),
        [anon_sym_try] = ACTIONS(161),
        [anon_sym_with] = ACTIONS(163),
        [anon_sym_def] = ACTIONS(165),
        [sym_identifier] = ACTIONS(69),
        [sym_comment] = ACTIONS(45),
        [sym__dedent] = ACTIONS(359),
    },
    [112] = {
        [anon_sym_except] = ACTIONS(195),
        [anon_sym_finally] = ACTIONS(195),
        [sym_comment] = ACTIONS(45),
    },
    [113] = {
        [aux_sym_print_statement_repeat1] = STATE(115),
        [anon_sym_COMMA] = ACTIONS(361),
        [anon_sym_except] = ACTIONS(223),
        [anon_sym_finally] = ACTIONS(223),
        [anon_sym_PLUS] = ACTIONS(253),
        [sym_comment] = ACTIONS(45),
    },
    [114] = {
        [sym__expression] = STATE(118),
        [sym_binary_operator] = STATE(66),
        [sym_identifier] = ACTIONS(73),
        [sym_comment] = ACTIONS(45),
    },
    [115] = {
        [anon_sym_COMMA] = ACTIONS(363),
        [anon_sym_except] = ACTIONS(231),
        [anon_sym_finally] = ACTIONS(231),
        [sym_comment] = ACTIONS(45),
    },
    [116] = {
        [sym__expression] = STATE(117),
        [sym_binary_operator] = STATE(66),
        [sym_identifier] = ACTIONS(73),
        [sym_comment] = ACTIONS(45),
    },
    [117] = {
        [anon_sym_COMMA] = ACTIONS(235),
        [anon_sym_COLON] = ACTIONS(235),
        [anon_sym_in] = ACTIONS(235),
        [anon_sym_except] = ACTIONS(235),
        [anon_sym_finally] = ACTIONS(235),
        [anon_sym_PLUS] = ACTIONS(253),
        [sym_comment] = ACTIONS(45),
    },
    [118] = {
        [anon_sym_COMMA] = ACTIONS(241),
        [anon_sym_COLON] = ACTIONS(241),
        [anon_sym_in] = ACTIONS(241),
        [anon_sym_except] = ACTIONS(241),
        [anon_sym_finally] = ACTIONS(241),
        [anon_sym_PLUS] = ACTIONS(253),
        [sym_comment] = ACTIONS(45),
    },
    [119] = {
        [anon_sym_COLON] = ACTIONS(365),
        [anon_sym_PLUS] = ACTIONS(253),
        [sym_comment] = ACTIONS(45),
    },
    [120] = {
        [sym__simple_statement] = STATE(51),
        [sym_print_statement] = STATE(52),
        [sym_expression_statement] = STATE(52),
        [sym__suite] = STATE(121),
        [sym__expression] = STATE(54),
        [sym_binary_operator] = STATE(49),
        [anon_sym_print] = ACTIONS(203),
        [sym_identifier] = ACTIONS(205),
        [sym_comment] = ACTIONS(45),
        [sym__indent] = ACTIONS(207),
    },
    [121] = {
        [sym_else_clause] = STATE(122),
        [anon_sym_print] = ACTIONS(367),
        [anon_sym_if] = ACTIONS(367),
        [anon_sym_else] = ACTIONS(303),
        [anon_sym_for] = ACTIONS(367),
        [anon_sym_while] = ACTIONS(367),
        [anon_sym_try] = ACTIONS(367),
        [anon_sym_with] = ACTIONS(367),
        [anon_sym_def] = ACTIONS(367),
        [sym_identifier] = ACTIONS(369),
        [sym_comment] = ACTIONS(45),
        [sym__dedent] = ACTIONS(371),
    },
    [122] = {
        [anon_sym_print] = ACTIONS(373),
        [anon_sym_if] = ACTIONS(373),
        [anon_sym_for] = ACTIONS(373),
        [anon_sym_while] = ACTIONS(373),
        [anon_sym_try] = ACTIONS(373),
        [anon_sym_with] = ACTIONS(373),
        [anon_sym_def] = ACTIONS(373),
        [sym_identifier] = ACTIONS(375),
        [sym_comment] = ACTIONS(45),
        [sym__dedent] = ACTIONS(377),
    },
    [123] = {
        [anon_sym_in] = ACTIONS(379),
        [sym_comment] = ACTIONS(45),
    },
    [124] = {
        [aux_sym_print_statement_repeat1] = STATE(125),
        [anon_sym_COMMA] = ACTIONS(361),
        [anon_sym_COLON] = ACTIONS(381),
        [anon_sym_in] = ACTIONS(381),
        [anon_sym_PLUS] = ACTIONS(253),
        [sym_comment] = ACTIONS(45),
    },
    [125] = {
        [anon_sym_COMMA] = ACTIONS(363),
        [anon_sym_COLON] = ACTIONS(383),
        [anon_sym_in] = ACTIONS(383),
        [sym_comment] = ACTIONS(45),
    },
    [126] = {
        [sym_expression_list] = STATE(127),
        [sym__expression] = STATE(124),
        [sym_binary_operator] = STATE(66),
        [sym_identifier] = ACTIONS(73),
        [sym_comment] = ACTIONS(45),
    },
    [127] = {
        [anon_sym_COLON] = ACTIONS(385),
        [sym_comment] = ACTIONS(45),
    },
    [128] = {
        [sym__simple_statement] = STATE(51),
        [sym_print_statement] = STATE(52),
        [sym_expression_statement] = STATE(52),
        [sym__suite] = STATE(129),
        [sym__expression] = STATE(54),
        [sym_binary_operator] = STATE(49),
        [anon_sym_print] = ACTIONS(203),
        [sym_identifier] = ACTIONS(205),
        [sym_comment] = ACTIONS(45),
        [sym__indent] = ACTIONS(207),
    },
    [129] = {
        [sym_else_clause] = STATE(130),
        [anon_sym_print] = ACTIONS(387),
        [anon_sym_if] = ACTIONS(387),
        [anon_sym_else] = ACTIONS(303),
        [anon_sym_for] = ACTIONS(387),
        [anon_sym_while] = ACTIONS(387),
        [anon_sym_try] = ACTIONS(387),
        [anon_sym_with] = ACTIONS(387),
        [anon_sym_def] = ACTIONS(387),
        [sym_identifier] = ACTIONS(389),
        [sym_comment] = ACTIONS(45),
        [sym__dedent] = ACTIONS(391),
    },
    [130] = {
        [anon_sym_print] = ACTIONS(393),
        [anon_sym_if] = ACTIONS(393),
        [anon_sym_for] = ACTIONS(393),
        [anon_sym_while] = ACTIONS(393),
        [anon_sym_try] = ACTIONS(393),
        [anon_sym_with] = ACTIONS(393),
        [anon_sym_def] = ACTIONS(393),
        [sym_identifier] = ACTIONS(395),
        [sym_comment] = ACTIONS(45),
        [sym__dedent] = ACTIONS(397),
    },
    [131] = {
        [anon_sym_COLON] = ACTIONS(399),
        [anon_sym_PLUS] = ACTIONS(253),
        [sym_comment] = ACTIONS(45),
    },
    [132] = {
        [sym__simple_statement] = STATE(51),
        [sym_print_statement] = STATE(52),
        [sym_expression_statement] = STATE(52),
        [sym__suite] = STATE(133),
        [sym__expression] = STATE(54),
        [sym_binary_operator] = STATE(49),
        [anon_sym_print] = ACTIONS(203),
        [sym_identifier] = ACTIONS(205),
        [sym_comment] = ACTIONS(45),
        [sym__indent] = ACTIONS(207),
    },
    [133] = {
        [sym_elif_clause] = STATE(135),
        [sym_else_clause] = STATE(136),
        [aux_sym_if_statement_repeat1] = STATE(137),
        [anon_sym_print] = ACTIONS(401),
        [anon_sym_if] = ACTIONS(401),
        [anon_sym_elif] = ACTIONS(403),
        [anon_sym_else] = ACTIONS(303),
        [anon_sym_for] = ACTIONS(401),
        [anon_sym_while] = ACTIONS(401),
        [anon_sym_try] = ACTIONS(401),
        [anon_sym_with] = ACTIONS(401),
        [anon_sym_def] = ACTIONS(401),
        [sym_identifier] = ACTIONS(405),
        [sym_comment] = ACTIONS(45),
        [sym__dedent] = ACTIONS(407),
    },
    [134] = {
        [sym__expression] = STATE(140),
        [sym_binary_operator] = STATE(66),
        [sym_identifier] = ACTIONS(73),
        [sym_comment] = ACTIONS(45),
    },
    [135] = {
        [anon_sym_print] = ACTIONS(409),
        [anon_sym_if] = ACTIONS(409),
        [anon_sym_elif] = ACTIONS(409),
        [anon_sym_else] = ACTIONS(409),
        [anon_sym_for] = ACTIONS(409),
        [anon_sym_while] = ACTIONS(409),
        [anon_sym_try] = ACTIONS(409),
        [anon_sym_with] = ACTIONS(409),
        [anon_sym_def] = ACTIONS(409),
        [sym_identifier] = ACTIONS(411),
        [sym_comment] = ACTIONS(45),
        [sym__dedent] = ACTIONS(413),
    },
    [136] = {
        [anon_sym_print] = ACTIONS(415),
        [anon_sym_if] = ACTIONS(415),
        [anon_sym_for] = ACTIONS(415),
        [anon_sym_while] = ACTIONS(415),
        [anon_sym_try] = ACTIONS(415),
        [anon_sym_with] = ACTIONS(415),
        [anon_sym_def] = ACTIONS(415),
        [sym_identifier] = ACTIONS(417),
        [sym_comment] = ACTIONS(45),
        [sym__dedent] = ACTIONS(419),
    },
    [137] = {
        [sym_elif_clause] = STATE(138),
        [sym_else_clause] = STATE(139),
        [anon_sym_print] = ACTIONS(415),
        [anon_sym_if] = ACTIONS(415),
        [anon_sym_elif] = ACTIONS(403),
        [anon_sym_else] = ACTIONS(303),
        [anon_sym_for] = ACTIONS(415),
        [anon_sym_while] = ACTIONS(415),
        [anon_sym_try] = ACTIONS(415),
        [anon_sym_with] = ACTIONS(415),
        [anon_sym_def] = ACTIONS(415),
        [sym_identifier] = ACTIONS(417),
        [sym_comment] = ACTIONS(45),
        [sym__dedent] = ACTIONS(419),
    },
    [138] = {
        [anon_sym_print] = ACTIONS(421),
        [anon_sym_if] = ACTIONS(421),
        [anon_sym_elif] = ACTIONS(421),
        [anon_sym_else] = ACTIONS(421),
        [anon_sym_for] = ACTIONS(421),
        [anon_sym_while] = ACTIONS(421),
        [anon_sym_try] = ACTIONS(421),
        [anon_sym_with] = ACTIONS(421),
        [anon_sym_def] = ACTIONS(421),
        [sym_identifier] = ACTIONS(423),
        [sym_comment] = ACTIONS(45),
        [sym__dedent] = ACTIONS(425),
    },
    [139] = {
        [anon_sym_print] = ACTIONS(427),
        [anon_sym_if] = ACTIONS(427),
        [anon_sym_for] = ACTIONS(427),
        [anon_sym_while] = ACTIONS(427),
        [anon_sym_try] = ACTIONS(427),
        [anon_sym_with] = ACTIONS(427),
        [anon_sym_def] = ACTIONS(427),
        [sym_identifier] = ACTIONS(429),
        [sym_comment] = ACTIONS(45),
        [sym__dedent] = ACTIONS(431),
    },
    [140] = {
        [anon_sym_COLON] = ACTIONS(433),
        [anon_sym_PLUS] = ACTIONS(253),
        [sym_comment] = ACTIONS(45),
    },
    [141] = {
        [sym__simple_statement] = STATE(51),
        [sym_print_statement] = STATE(52),
        [sym_expression_statement] = STATE(52),
        [sym__suite] = STATE(142),
        [sym__expression] = STATE(54),
        [sym_binary_operator] = STATE(49),
        [anon_sym_print] = ACTIONS(203),
        [sym_identifier] = ACTIONS(205),
        [sym_comment] = ACTIONS(45),
        [sym__indent] = ACTIONS(207),
    },
    [142] = {
        [anon_sym_print] = ACTIONS(435),
        [anon_sym_if] = ACTIONS(435),
        [anon_sym_elif] = ACTIONS(435),
        [anon_sym_else] = ACTIONS(435),
        [anon_sym_for] = ACTIONS(435),
        [anon_sym_while] = ACTIONS(435),
        [anon_sym_try] = ACTIONS(435),
        [anon_sym_with] = ACTIONS(435),
        [anon_sym_def] = ACTIONS(435),
        [sym_identifier] = ACTIONS(437),
        [sym_comment] = ACTIONS(45),
        [sym__dedent] = ACTIONS(439),
    },
    [143] = {
        [aux_sym_print_statement_repeat1] = STATE(145),
        [ts_builtin_sym_end] = ACTIONS(223),
        [anon_sym_SEMI] = ACTIONS(223),
        [anon_sym_print] = ACTIONS(217),
        [anon_sym_COMMA] = ACTIONS(441),
        [anon_sym_if] = ACTIONS(217),
        [anon_sym_elif] = ACTIONS(217),
        [anon_sym_else] = ACTIONS(217),
        [anon_sym_for] = ACTIONS(217),
        [anon_sym_while] = ACTIONS(217),
        [anon_sym_try] = ACTIONS(217),
        [anon_sym_except] = ACTIONS(217),
        [anon_sym_finally] = ACTIONS(217),
        [anon_sym_with] = ACTIONS(217),
        [anon_sym_def] = ACTIONS(217),
        [anon_sym_PLUS] = ACTIONS(117),
        [sym_identifier] = ACTIONS(221),
        [sym_comment] = ACTIONS(45),
        [sym__newline] = ACTIONS(223),
    },
    [144] = {
        [sym__expression] = STATE(148),
        [sym_binary_operator] = STATE(9),
        [sym_identifier] = ACTIONS(71),
        [sym_comment] = ACTIONS(45),
    },
    [145] = {
        [ts_builtin_sym_end] = ACTIONS(231),
        [anon_sym_SEMI] = ACTIONS(231),
        [anon_sym_print] = ACTIONS(225),
        [anon_sym_COMMA] = ACTIONS(443),
        [anon_sym_if] = ACTIONS(225),
        [anon_sym_elif] = ACTIONS(225),
        [anon_sym_else] = ACTIONS(225),
        [anon_sym_for] = ACTIONS(225),
        [anon_sym_while] = ACTIONS(225),
        [anon_sym_try] = ACTIONS(225),
        [anon_sym_except] = ACTIONS(225),
        [anon_sym_finally] = ACTIONS(225),
        [anon_sym_with] = ACTIONS(225),
        [anon_sym_def] = ACTIONS(225),
        [sym_identifier] = ACTIONS(229),
        [sym_comment] = ACTIONS(45),
        [sym__newline] = ACTIONS(231),
    },
    [146] = {
        [sym__expression] = STATE(147),
        [sym_binary_operator] = STATE(9),
        [sym_identifier] = ACTIONS(71),
        [sym_comment] = ACTIONS(45),
    },
    [147] = {
        [ts_builtin_sym_end] = ACTIONS(235),
        [anon_sym_SEMI] = ACTIONS(235),
        [anon_sym_print] = ACTIONS(233),
        [anon_sym_COMMA] = ACTIONS(235),
        [anon_sym_if] = ACTIONS(233),
        [anon_sym_elif] = ACTIONS(233),
        [anon_sym_else] = ACTIONS(233),
        [anon_sym_for] = ACTIONS(233),
        [anon_sym_while] = ACTIONS(233),
        [anon_sym_try] = ACTIONS(233),
        [anon_sym_except] = ACTIONS(233),
        [anon_sym_finally] = ACTIONS(233),
        [anon_sym_with] = ACTIONS(233),
        [anon_sym_def] = ACTIONS(233),
        [anon_sym_PLUS] = ACTIONS(117),
        [sym_identifier] = ACTIONS(237),
        [sym_comment] = ACTIONS(45),
        [sym__newline] = ACTIONS(235),
    },
    [148] = {
        [ts_builtin_sym_end] = ACTIONS(241),
        [anon_sym_SEMI] = ACTIONS(241),
        [anon_sym_print] = ACTIONS(239),
        [anon_sym_COMMA] = ACTIONS(241),
        [anon_sym_if] = ACTIONS(239),
        [anon_sym_elif] = ACTIONS(239),
        [anon_sym_else] = ACTIONS(239),
        [anon_sym_for] = ACTIONS(239),
        [anon_sym_while] = ACTIONS(239),
        [anon_sym_try] = ACTIONS(239),
        [anon_sym_except] = ACTIONS(239),
        [anon_sym_finally] = ACTIONS(239),
        [anon_sym_with] = ACTIONS(239),
        [anon_sym_def] = ACTIONS(239),
        [anon_sym_PLUS] = ACTIONS(117),
        [sym_identifier] = ACTIONS(243),
        [sym_comment] = ACTIONS(45),
        [sym__newline] = ACTIONS(241),
    },
    [149] = {
        [anon_sym_COLON] = ACTIONS(445),
        [sym_comment] = ACTIONS(45),
    },
    [150] = {
        [anon_sym_COMMA] = ACTIONS(447),
        [anon_sym_RPAREN] = ACTIONS(449),
        [anon_sym_EQ] = ACTIONS(451),
        [sym_comment] = ACTIONS(45),
    },
    [151] = {
        [anon_sym_COMMA] = ACTIONS(447),
        [anon_sym_RPAREN] = ACTIONS(449),
        [sym_comment] = ACTIONS(45),
    },
    [152] = {
        [sym_default_parameter] = STATE(154),
        [sym_identifier] = ACTIONS(453),
        [sym_comment] = ACTIONS(45),
    },
    [153] = {
        [anon_sym_COMMA] = ACTIONS(455),
        [anon_sym_RPAREN] = ACTIONS(457),
        [anon_sym_EQ] = ACTIONS(451),
        [sym_comment] = ACTIONS(45),
    },
    [154] = {
        [anon_sym_COMMA] = ACTIONS(455),
        [anon_sym_RPAREN] = ACTIONS(457),
        [sym_comment] = ACTIONS(45),
    },
    [155] = {
        [anon_sym_RPAREN] = ACTIONS(459),
        [sym_identifier] = ACTIONS(461),
        [sym_comment] = ACTIONS(45),
    },
    [156] = {
        [anon_sym_COLON] = ACTIONS(463),
        [sym_comment] = ACTIONS(45),
    },
    [157] = {
        [anon_sym_COLON] = ACTIONS(465),
        [sym_comment] = ACTIONS(45),
    },
    [158] = {
        [sym__expression] = STATE(159),
        [sym_binary_operator] = STATE(66),
        [sym_identifier] = ACTIONS(73),
        [sym_comment] = ACTIONS(45),
    },
    [159] = {
        [anon_sym_COMMA] = ACTIONS(467),
        [anon_sym_RPAREN] = ACTIONS(467),
        [anon_sym_PLUS] = ACTIONS(253),
        [sym_comment] = ACTIONS(45),
    },
    [160] = {
        [anon_sym_RPAREN] = ACTIONS(457),
        [sym_identifier] = ACTIONS(469),
        [sym_comment] = ACTIONS(45),
    },
    [161] = {
        [anon_sym_COLON] = ACTIONS(471),
        [sym_comment] = ACTIONS(45),
    },
    [162] = {
        [aux_sym_with_statement_repeat1] = STATE(164),
        [anon_sym_COMMA] = ACTIONS(245),
        [anon_sym_COLON] = ACTIONS(473),
        [sym_comment] = ACTIONS(45),
    },
    [163] = {
        [sym__simple_statement] = STATE(28),
        [sym_print_statement] = STATE(13),
        [sym_expression_statement] = STATE(13),
        [sym__suite] = STATE(167),
        [sym__expression] = STATE(16),
        [sym_binary_operator] = STATE(9),
        [anon_sym_print] = ACTIONS(55),
        [sym_identifier] = ACTIONS(69),
        [sym_comment] = ACTIONS(45),
        [sym__indent] = ACTIONS(153),
    },
    [164] = {
        [anon_sym_COMMA] = ACTIONS(257),
        [anon_sym_COLON] = ACTIONS(475),
        [sym_comment] = ACTIONS(45),
    },
    [165] = {
        [sym__simple_statement] = STATE(28),
        [sym_print_statement] = STATE(13),
        [sym_expression_statement] = STATE(13),
        [sym__suite] = STATE(166),
        [sym__expression] = STATE(16),
        [sym_binary_operator] = STATE(9),
        [anon_sym_print] = ACTIONS(55),
        [sym_identifier] = ACTIONS(69),
        [sym_comment] = ACTIONS(45),
        [sym__indent] = ACTIONS(153),
    },
    [166] = {
        [ts_builtin_sym_end] = ACTIONS(265),
        [anon_sym_SEMI] = ACTIONS(265),
        [anon_sym_print] = ACTIONS(261),
        [anon_sym_if] = ACTIONS(261),
        [anon_sym_for] = ACTIONS(261),
        [anon_sym_while] = ACTIONS(261),
        [anon_sym_try] = ACTIONS(261),
        [anon_sym_with] = ACTIONS(261),
        [anon_sym_def] = ACTIONS(261),
        [sym_identifier] = ACTIONS(263),
        [sym_comment] = ACTIONS(45),
        [sym__newline] = ACTIONS(265),
    },
    [167] = {
        [ts_builtin_sym_end] = ACTIONS(273),
        [anon_sym_SEMI] = ACTIONS(273),
        [anon_sym_print] = ACTIONS(269),
        [anon_sym_if] = ACTIONS(269),
        [anon_sym_for] = ACTIONS(269),
        [anon_sym_while] = ACTIONS(269),
        [anon_sym_try] = ACTIONS(269),
        [anon_sym_with] = ACTIONS(269),
        [anon_sym_def] = ACTIONS(269),
        [sym_identifier] = ACTIONS(271),
        [sym_comment] = ACTIONS(45),
        [sym__newline] = ACTIONS(273),
    },
    [168] = {
        [sym__simple_statement] = STATE(85),
        [sym_print_statement] = STATE(86),
        [sym_expression_statement] = STATE(86),
        [sym__suite] = STATE(169),
        [sym__expression] = STATE(88),
        [sym_binary_operator] = STATE(66),
        [anon_sym_print] = ACTIONS(277),
        [sym_identifier] = ACTIONS(279),
        [sym_comment] = ACTIONS(45),
        [sym__indent] = ACTIONS(281),
    },
    [169] = {
        [sym_except_clause] = STATE(172),
        [sym_finally_clause] = STATE(173),
        [aux_sym_try_statement_repeat1] = STATE(174),
        [anon_sym_except] = ACTIONS(477),
        [anon_sym_finally] = ACTIONS(479),
        [sym_comment] = ACTIONS(45),
    },
    [170] = {
        [sym__expression] = STATE(184),
        [sym_binary_operator] = STATE(66),
        [sym_identifier] = ACTIONS(73),
        [sym_comment] = ACTIONS(45),
    },
    [171] = {
        [anon_sym_COLON] = ACTIONS(481),
        [sym_comment] = ACTIONS(45),
    },
    [172] = {
        [ts_builtin_sym_end] = ACTIONS(295),
        [anon_sym_SEMI] = ACTIONS(295),
        [anon_sym_print] = ACTIONS(291),
        [anon_sym_if] = ACTIONS(291),
        [anon_sym_else] = ACTIONS(291),
        [anon_sym_for] = ACTIONS(291),
        [anon_sym_while] = ACTIONS(291),
        [anon_sym_try] = ACTIONS(291),
        [anon_sym_except] = ACTIONS(291),
        [anon_sym_finally] = ACTIONS(291),
        [anon_sym_with] = ACTIONS(291),
        [anon_sym_def] = ACTIONS(291),
        [sym_identifier] = ACTIONS(293),
        [sym_comment] = ACTIONS(45),
        [sym__newline] = ACTIONS(295),
    },
    [173] = {
        [ts_builtin_sym_end] = ACTIONS(301),
        [anon_sym_SEMI] = ACTIONS(301),
        [anon_sym_print] = ACTIONS(297),
        [anon_sym_if] = ACTIONS(297),
        [anon_sym_for] = ACTIONS(297),
        [anon_sym_while] = ACTIONS(297),
        [anon_sym_try] = ACTIONS(297),
        [anon_sym_with] = ACTIONS(297),
        [anon_sym_def] = ACTIONS(297),
        [sym_identifier] = ACTIONS(299),
        [sym_comment] = ACTIONS(45),
        [sym__newline] = ACTIONS(301),
    },
    [174] = {
        [sym_else_clause] = STATE(176),
        [sym_except_clause] = STATE(177),
        [sym_finally_clause] = STATE(178),
        [ts_builtin_sym_end] = ACTIONS(301),
        [anon_sym_SEMI] = ACTIONS(301),
        [anon_sym_print] = ACTIONS(297),
        [anon_sym_if] = ACTIONS(297),
        [anon_sym_else] = ACTIONS(483),
        [anon_sym_for] = ACTIONS(297),
        [anon_sym_while] = ACTIONS(297),
        [anon_sym_try] = ACTIONS(297),
        [anon_sym_except] = ACTIONS(485),
        [anon_sym_finally] = ACTIONS(487),
        [anon_sym_with] = ACTIONS(297),
        [anon_sym_def] = ACTIONS(297),
        [sym_identifier] = ACTIONS(299),
        [sym_comment] = ACTIONS(45),
        [sym__newline] = ACTIONS(301),
    },
    [175] = {
        [anon_sym_COLON] = ACTIONS(489),
        [sym_comment] = ACTIONS(45),
    },
    [176] = {
        [sym_finally_clause] = STATE(179),
        [ts_builtin_sym_end] = ACTIONS(315),
        [anon_sym_SEMI] = ACTIONS(315),
        [anon_sym_print] = ACTIONS(311),
        [anon_sym_if] = ACTIONS(311),
        [anon_sym_for] = ACTIONS(311),
        [anon_sym_while] = ACTIONS(311),
        [anon_sym_try] = ACTIONS(311),
        [anon_sym_finally] = ACTIONS(487),
        [anon_sym_with] = ACTIONS(311),
        [anon_sym_def] = ACTIONS(311),
        [sym_identifier] = ACTIONS(313),
        [sym_comment] = ACTIONS(45),
        [sym__newline] = ACTIONS(315),
    },
    [177] = {
        [ts_builtin_sym_end] = ACTIONS(321),
        [anon_sym_SEMI] = ACTIONS(321),
        [anon_sym_print] = ACTIONS(317),
        [anon_sym_if] = ACTIONS(317),
        [anon_sym_else] = ACTIONS(317),
        [anon_sym_for] = ACTIONS(317),
        [anon_sym_while] = ACTIONS(317),
        [anon_sym_try] = ACTIONS(317),
        [anon_sym_except] = ACTIONS(317),
        [anon_sym_finally] = ACTIONS(317),
        [anon_sym_with] = ACTIONS(317),
        [anon_sym_def] = ACTIONS(317),
        [sym_identifier] = ACTIONS(319),
        [sym_comment] = ACTIONS(45),
        [sym__newline] = ACTIONS(321),
    },
    [178] = {
        [ts_builtin_sym_end] = ACTIONS(315),
        [anon_sym_SEMI] = ACTIONS(315),
        [anon_sym_print] = ACTIONS(311),
        [anon_sym_if] = ACTIONS(311),
        [anon_sym_for] = ACTIONS(311),
        [anon_sym_while] = ACTIONS(311),
        [anon_sym_try] = ACTIONS(311),
        [anon_sym_with] = ACTIONS(311),
        [anon_sym_def] = ACTIONS(311),
        [sym_identifier] = ACTIONS(313),
        [sym_comment] = ACTIONS(45),
        [sym__newline] = ACTIONS(315),
    },
    [179] = {
        [ts_builtin_sym_end] = ACTIONS(327),
        [anon_sym_SEMI] = ACTIONS(327),
        [anon_sym_print] = ACTIONS(323),
        [anon_sym_if] = ACTIONS(323),
        [anon_sym_for] = ACTIONS(323),
        [anon_sym_while] = ACTIONS(323),
        [anon_sym_try] = ACTIONS(323),
        [anon_sym_with] = ACTIONS(323),
        [anon_sym_def] = ACTIONS(323),
        [sym_identifier] = ACTIONS(325),
        [sym_comment] = ACTIONS(45),
        [sym__newline] = ACTIONS(327),
    },
    [180] = {
        [sym__simple_statement] = STATE(28),
        [sym_print_statement] = STATE(13),
        [sym_expression_statement] = STATE(13),
        [sym__suite] = STATE(181),
        [sym__expression] = STATE(16),
        [sym_binary_operator] = STATE(9),
        [anon_sym_print] = ACTIONS(55),
        [sym_identifier] = ACTIONS(69),
        [sym_comment] = ACTIONS(45),
        [sym__indent] = ACTIONS(153),
    },
    [181] = {
        [ts_builtin_sym_end] = ACTIONS(333),
        [anon_sym_SEMI] = ACTIONS(333),
        [anon_sym_print] = ACTIONS(329),
        [anon_sym_if] = ACTIONS(329),
        [anon_sym_for] = ACTIONS(329),
        [anon_sym_while] = ACTIONS(329),
        [anon_sym_try] = ACTIONS(329),
        [anon_sym_finally] = ACTIONS(329),
        [anon_sym_with] = ACTIONS(329),
        [anon_sym_def] = ACTIONS(329),
        [sym_identifier] = ACTIONS(331),
        [sym_comment] = ACTIONS(45),
        [sym__newline] = ACTIONS(333),
    },
    [182] = {
        [sym__simple_statement] = STATE(28),
        [sym_print_statement] = STATE(13),
        [sym_expression_statement] = STATE(13),
        [sym__suite] = STATE(183),
        [sym__expression] = STATE(16),
        [sym_binary_operator] = STATE(9),
        [anon_sym_print] = ACTIONS(55),
        [sym_identifier] = ACTIONS(69),
        [sym_comment] = ACTIONS(45),
        [sym__indent] = ACTIONS(153),
    },
    [183] = {
        [ts_builtin_sym_end] = ACTIONS(339),
        [anon_sym_SEMI] = ACTIONS(339),
        [anon_sym_print] = ACTIONS(335),
        [anon_sym_if] = ACTIONS(335),
        [anon_sym_for] = ACTIONS(335),
        [anon_sym_while] = ACTIONS(335),
        [anon_sym_try] = ACTIONS(335),
        [anon_sym_with] = ACTIONS(335),
        [anon_sym_def] = ACTIONS(335),
        [sym_identifier] = ACTIONS(337),
        [sym_comment] = ACTIONS(45),
        [sym__newline] = ACTIONS(339),
    },
    [184] = {
        [anon_sym_COMMA] = ACTIONS(491),
        [anon_sym_COLON] = ACTIONS(493),
        [anon_sym_as] = ACTIONS(491),
        [anon_sym_PLUS] = ACTIONS(253),
        [sym_comment] = ACTIONS(45),
    },
    [185] = {
        [sym__expression] = STATE(187),
        [sym_binary_operator] = STATE(66),
        [sym_identifier] = ACTIONS(73),
        [sym_comment] = ACTIONS(45),
    },
    [186] = {
        [sym__simple_statement] = STATE(28),
        [sym_print_statement] = STATE(13),
        [sym_expression_statement] = STATE(13),
        [sym__suite] = STATE(190),
        [sym__expression] = STATE(16),
        [sym_binary_operator] = STATE(9),
        [anon_sym_print] = ACTIONS(55),
        [sym_identifier] = ACTIONS(69),
        [sym_comment] = ACTIONS(45),
        [sym__indent] = ACTIONS(153),
    },
    [187] = {
        [anon_sym_COLON] = ACTIONS(495),
        [anon_sym_PLUS] = ACTIONS(253),
        [sym_comment] = ACTIONS(45),
    },
    [188] = {
        [sym__simple_statement] = STATE(28),
        [sym_print_statement] = STATE(13),
        [sym_expression_statement] = STATE(13),
        [sym__suite] = STATE(189),
        [sym__expression] = STATE(16),
        [sym_binary_operator] = STATE(9),
        [anon_sym_print] = ACTIONS(55),
        [sym_identifier] = ACTIONS(69),
        [sym_comment] = ACTIONS(45),
        [sym__indent] = ACTIONS(153),
    },
    [189] = {
        [ts_builtin_sym_end] = ACTIONS(351),
        [anon_sym_SEMI] = ACTIONS(351),
        [anon_sym_print] = ACTIONS(347),
        [anon_sym_if] = ACTIONS(347),
        [anon_sym_else] = ACTIONS(347),
        [anon_sym_for] = ACTIONS(347),
        [anon_sym_while] = ACTIONS(347),
        [anon_sym_try] = ACTIONS(347),
        [anon_sym_except] = ACTIONS(347),
        [anon_sym_finally] = ACTIONS(347),
        [anon_sym_with] = ACTIONS(347),
        [anon_sym_def] = ACTIONS(347),
        [sym_identifier] = ACTIONS(349),
        [sym_comment] = ACTIONS(45),
        [sym__newline] = ACTIONS(351),
    },
    [190] = {
        [ts_builtin_sym_end] = ACTIONS(357),
        [anon_sym_SEMI] = ACTIONS(357),
        [anon_sym_print] = ACTIONS(353),
        [anon_sym_if] = ACTIONS(353),
        [anon_sym_else] = ACTIONS(353),
        [anon_sym_for] = ACTIONS(353),
        [anon_sym_while] = ACTIONS(353),
        [anon_sym_try] = ACTIONS(353),
        [anon_sym_except] = ACTIONS(353),
        [anon_sym_finally] = ACTIONS(353),
        [anon_sym_with] = ACTIONS(353),
        [anon_sym_def] = ACTIONS(353),
        [sym_identifier] = ACTIONS(355),
        [sym_comment] = ACTIONS(45),
        [sym__newline] = ACTIONS(357),
    },
    [191] = {
        [anon_sym_COLON] = ACTIONS(497),
        [anon_sym_PLUS] = ACTIONS(253),
        [sym_comment] = ACTIONS(45),
    },
    [192] = {
        [sym__simple_statement] = STATE(28),
        [sym_print_statement] = STATE(13),
        [sym_expression_statement] = STATE(13),
        [sym__suite] = STATE(193),
        [sym__expression] = STATE(16),
        [sym_binary_operator] = STATE(9),
        [anon_sym_print] = ACTIONS(55),
        [sym_identifier] = ACTIONS(69),
        [sym_comment] = ACTIONS(45),
        [sym__indent] = ACTIONS(153),
    },
    [193] = {
        [sym_else_clause] = STATE(194),
        [ts_builtin_sym_end] = ACTIONS(371),
        [anon_sym_SEMI] = ACTIONS(371),
        [anon_sym_print] = ACTIONS(367),
        [anon_sym_if] = ACTIONS(367),
        [anon_sym_else] = ACTIONS(483),
        [anon_sym_for] = ACTIONS(367),
        [anon_sym_while] = ACTIONS(367),
        [anon_sym_try] = ACTIONS(367),
        [anon_sym_with] = ACTIONS(367),
        [anon_sym_def] = ACTIONS(367),
        [sym_identifier] = ACTIONS(369),
        [sym_comment] = ACTIONS(45),
        [sym__newline] = ACTIONS(371),
    },
    [194] = {
        [ts_builtin_sym_end] = ACTIONS(377),
        [anon_sym_SEMI] = ACTIONS(377),
        [anon_sym_print] = ACTIONS(373),
        [anon_sym_if] = ACTIONS(373),
        [anon_sym_for] = ACTIONS(373),
        [anon_sym_while] = ACTIONS(373),
        [anon_sym_try] = ACTIONS(373),
        [anon_sym_with] = ACTIONS(373),
        [anon_sym_def] = ACTIONS(373),
        [sym_identifier] = ACTIONS(375),
        [sym_comment] = ACTIONS(45),
        [sym__newline] = ACTIONS(377),
    },
    [195] = {
        [anon_sym_in] = ACTIONS(499),
        [sym_comment] = ACTIONS(45),
    },
    [196] = {
        [sym_expression_list] = STATE(197),
        [sym__expression] = STATE(124),
        [sym_binary_operator] = STATE(66),
        [sym_identifier] = ACTIONS(73),
        [sym_comment] = ACTIONS(45),
    },
    [197] = {
        [anon_sym_COLON] = ACTIONS(501),
        [sym_comment] = ACTIONS(45),
    },
    [198] = {
        [sym__simple_statement] = STATE(28),
        [sym_print_statement] = STATE(13),
        [sym_expression_statement] = STATE(13),
        [sym__suite] = STATE(199),
        [sym__expression] = STATE(16),
        [sym_binary_operator] = STATE(9),
        [anon_sym_print] = ACTIONS(55),
        [sym_identifier] = ACTIONS(69),
        [sym_comment] = ACTIONS(45),
        [sym__indent] = ACTIONS(153),
    },
    [199] = {
        [sym_else_clause] = STATE(200),
        [ts_builtin_sym_end] = ACTIONS(391),
        [anon_sym_SEMI] = ACTIONS(391),
        [anon_sym_print] = ACTIONS(387),
        [anon_sym_if] = ACTIONS(387),
        [anon_sym_else] = ACTIONS(483),
        [anon_sym_for] = ACTIONS(387),
        [anon_sym_while] = ACTIONS(387),
        [anon_sym_try] = ACTIONS(387),
        [anon_sym_with] = ACTIONS(387),
        [anon_sym_def] = ACTIONS(387),
        [sym_identifier] = ACTIONS(389),
        [sym_comment] = ACTIONS(45),
        [sym__newline] = ACTIONS(391),
    },
    [200] = {
        [ts_builtin_sym_end] = ACTIONS(397),
        [anon_sym_SEMI] = ACTIONS(397),
        [anon_sym_print] = ACTIONS(393),
        [anon_sym_if] = ACTIONS(393),
        [anon_sym_for] = ACTIONS(393),
        [anon_sym_while] = ACTIONS(393),
        [anon_sym_try] = ACTIONS(393),
        [anon_sym_with] = ACTIONS(393),
        [anon_sym_def] = ACTIONS(393),
        [sym_identifier] = ACTIONS(395),
        [sym_comment] = ACTIONS(45),
        [sym__newline] = ACTIONS(397),
    },
    [201] = {
        [anon_sym_COLON] = ACTIONS(503),
        [anon_sym_PLUS] = ACTIONS(253),
        [sym_comment] = ACTIONS(45),
    },
    [202] = {
        [sym__simple_statement] = STATE(28),
        [sym_print_statement] = STATE(13),
        [sym_expression_statement] = STATE(13),
        [sym__suite] = STATE(203),
        [sym__expression] = STATE(16),
        [sym_binary_operator] = STATE(9),
        [anon_sym_print] = ACTIONS(55),
        [sym_identifier] = ACTIONS(69),
        [sym_comment] = ACTIONS(45),
        [sym__indent] = ACTIONS(153),
    },
    [203] = {
        [sym_elif_clause] = STATE(205),
        [sym_else_clause] = STATE(206),
        [aux_sym_if_statement_repeat1] = STATE(207),
        [ts_builtin_sym_end] = ACTIONS(407),
        [anon_sym_SEMI] = ACTIONS(407),
        [anon_sym_print] = ACTIONS(401),
        [anon_sym_if] = ACTIONS(401),
        [anon_sym_elif] = ACTIONS(505),
        [anon_sym_else] = ACTIONS(483),
        [anon_sym_for] = ACTIONS(401),
        [anon_sym_while] = ACTIONS(401),
        [anon_sym_try] = ACTIONS(401),
        [anon_sym_with] = ACTIONS(401),
        [anon_sym_def] = ACTIONS(401),
        [sym_identifier] = ACTIONS(405),
        [sym_comment] = ACTIONS(45),
        [sym__newline] = ACTIONS(407),
    },
    [204] = {
        [sym__expression] = STATE(210),
        [sym_binary_operator] = STATE(66),
        [sym_identifier] = ACTIONS(73),
        [sym_comment] = ACTIONS(45),
    },
    [205] = {
        [ts_builtin_sym_end] = ACTIONS(413),
        [anon_sym_SEMI] = ACTIONS(413),
        [anon_sym_print] = ACTIONS(409),
        [anon_sym_if] = ACTIONS(409),
        [anon_sym_elif] = ACTIONS(409),
        [anon_sym_else] = ACTIONS(409),
        [anon_sym_for] = ACTIONS(409),
        [anon_sym_while] = ACTIONS(409),
        [anon_sym_try] = ACTIONS(409),
        [anon_sym_with] = ACTIONS(409),
        [anon_sym_def] = ACTIONS(409),
        [sym_identifier] = ACTIONS(411),
        [sym_comment] = ACTIONS(45),
        [sym__newline] = ACTIONS(413),
    },
    [206] = {
        [ts_builtin_sym_end] = ACTIONS(419),
        [anon_sym_SEMI] = ACTIONS(419),
        [anon_sym_print] = ACTIONS(415),
        [anon_sym_if] = ACTIONS(415),
        [anon_sym_for] = ACTIONS(415),
        [anon_sym_while] = ACTIONS(415),
        [anon_sym_try] = ACTIONS(415),
        [anon_sym_with] = ACTIONS(415),
        [anon_sym_def] = ACTIONS(415),
        [sym_identifier] = ACTIONS(417),
        [sym_comment] = ACTIONS(45),
        [sym__newline] = ACTIONS(419),
    },
    [207] = {
        [sym_elif_clause] = STATE(208),
        [sym_else_clause] = STATE(209),
        [ts_builtin_sym_end] = ACTIONS(419),
        [anon_sym_SEMI] = ACTIONS(419),
        [anon_sym_print] = ACTIONS(415),
        [anon_sym_if] = ACTIONS(415),
        [anon_sym_elif] = ACTIONS(505),
        [anon_sym_else] = ACTIONS(483),
        [anon_sym_for] = ACTIONS(415),
        [anon_sym_while] = ACTIONS(415),
        [anon_sym_try] = ACTIONS(415),
        [anon_sym_with] = ACTIONS(415),
        [anon_sym_def] = ACTIONS(415),
        [sym_identifier] = ACTIONS(417),
        [sym_comment] = ACTIONS(45),
        [sym__newline] = ACTIONS(419),
    },
    [208] = {
        [ts_builtin_sym_end] = ACTIONS(425),
        [anon_sym_SEMI] = ACTIONS(425),
        [anon_sym_print] = ACTIONS(421),
        [anon_sym_if] = ACTIONS(421),
        [anon_sym_elif] = ACTIONS(421),
        [anon_sym_else] = ACTIONS(421),
        [anon_sym_for] = ACTIONS(421),
        [anon_sym_while] = ACTIONS(421),
        [anon_sym_try] = ACTIONS(421),
        [anon_sym_with] = ACTIONS(421),
        [anon_sym_def] = ACTIONS(421),
        [sym_identifier] = ACTIONS(423),
        [sym_comment] = ACTIONS(45),
        [sym__newline] = ACTIONS(425),
    },
    [209] = {
        [ts_builtin_sym_end] = ACTIONS(431),
        [anon_sym_SEMI] = ACTIONS(431),
        [anon_sym_print] = ACTIONS(427),
        [anon_sym_if] = ACTIONS(427),
        [anon_sym_for] = ACTIONS(427),
        [anon_sym_while] = ACTIONS(427),
        [anon_sym_try] = ACTIONS(427),
        [anon_sym_with] = ACTIONS(427),
        [anon_sym_def] = ACTIONS(427),
        [sym_identifier] = ACTIONS(429),
        [sym_comment] = ACTIONS(45),
        [sym__newline] = ACTIONS(431),
    },
    [210] = {
        [anon_sym_COLON] = ACTIONS(507),
        [anon_sym_PLUS] = ACTIONS(253),
        [sym_comment] = ACTIONS(45),
    },
    [211] = {
        [sym__simple_statement] = STATE(28),
        [sym_print_statement] = STATE(13),
        [sym_expression_statement] = STATE(13),
        [sym__suite] = STATE(212),
        [sym__expression] = STATE(16),
        [sym_binary_operator] = STATE(9),
        [anon_sym_print] = ACTIONS(55),
        [sym_identifier] = ACTIONS(69),
        [sym_comment] = ACTIONS(45),
        [sym__indent] = ACTIONS(153),
    },
    [212] = {
        [ts_builtin_sym_end] = ACTIONS(439),
        [anon_sym_SEMI] = ACTIONS(439),
        [anon_sym_print] = ACTIONS(435),
        [anon_sym_if] = ACTIONS(435),
        [anon_sym_elif] = ACTIONS(435),
        [anon_sym_else] = ACTIONS(435),
        [anon_sym_for] = ACTIONS(435),
        [anon_sym_while] = ACTIONS(435),
        [anon_sym_try] = ACTIONS(435),
        [anon_sym_with] = ACTIONS(435),
        [anon_sym_def] = ACTIONS(435),
        [sym_identifier] = ACTIONS(437),
        [sym_comment] = ACTIONS(45),
        [sym__newline] = ACTIONS(439),
    },
    [213] = {
        [sym__expression] = STATE(392),
        [sym_binary_operator] = STATE(249),
        [sym_identifier] = ACTIONS(509),
        [sym_comment] = ACTIONS(45),
    },
    [214] = {
        [sym_with_item] = STATE(388),
        [sym__expression] = STATE(389),
        [sym_binary_operator] = STATE(249),
        [anon_sym_RPAREN] = ACTIONS(511),
        [sym_identifier] = ACTIONS(513),
        [sym_comment] = ACTIONS(45),
    },
    [215] = {
        [sym__expression] = STATE(384),
        [sym_binary_operator] = STATE(66),
        [sym_identifier] = ACTIONS(73),
        [sym_comment] = ACTIONS(45),
    },
    [216] = {
        [sym__simple_statement] = STATE(257),
        [sym_print_statement] = STATE(236),
        [sym_expression_statement] = STATE(236),
        [sym__suite] = STATE(246),
        [sym__expression] = STATE(292),
        [sym_binary_operator] = STATE(249),
        [anon_sym_print] = ACTIONS(517),
        [sym_identifier] = ACTIONS(519),
        [sym_comment] = ACTIONS(45),
        [sym__indent] = ACTIONS(521),
    },
    [217] = {
        [sym__expression] = STATE(369),
        [sym_binary_operator] = STATE(66),
        [sym_identifier] = ACTIONS(73),
        [sym_comment] = ACTIONS(45),
    },
    [218] = {
        [anon_sym_COLON] = ACTIONS(523),
        [sym_comment] = ACTIONS(45),
    },
    [219] = {
        [sym_expression_list] = STATE(355),
        [sym__expression] = STATE(124),
        [sym_binary_operator] = STATE(66),
        [sym_identifier] = ACTIONS(73),
        [sym_comment] = ACTIONS(45),
    },
    [220] = {
        [sym_expression_list] = STATE(354),
        [sym__expression] = STATE(124),
        [sym_binary_operator] = STATE(66),
        [sym_identifier] = ACTIONS(73),
        [sym_comment] = ACTIONS(45),
    },
    [221] = {
        [sym__expression] = STATE(350),
        [sym_binary_operator] = STATE(66),
        [sym_identifier] = ACTIONS(73),
        [sym_comment] = ACTIONS(45),
    },
    [222] = {
        [anon_sym_COLON] = ACTIONS(525),
        [sym_comment] = ACTIONS(45),
    },
    [223] = {
        [sym__expression] = STATE(343),
        [sym_binary_operator] = STATE(66),
        [sym_identifier] = ACTIONS(73),
        [sym_comment] = ACTIONS(45),
    },
    [224] = {
        [sym__expression] = STATE(342),
        [sym_binary_operator] = STATE(66),
        [sym_identifier] = ACTIONS(73),
        [sym_comment] = ACTIONS(45),
    },
    [225] = {
        [anon_sym_COLON] = ACTIONS(527),
        [sym_comment] = ACTIONS(45),
    },
    [226] = {
        [sym_with_item] = STATE(339),
        [sym__expression] = STATE(68),
        [sym_binary_operator] = STATE(66),
        [sym_identifier] = ACTIONS(73),
        [sym_comment] = ACTIONS(45),
    },
    [227] = {
        [sym_identifier] = ACTIONS(529),
        [sym_comment] = ACTIONS(45),
    },
    [228] = {
        [anon_sym_COLON] = ACTIONS(531),
        [sym_comment] = ACTIONS(45),
    },
    [229] = {
        [sym__expression] = STATE(337),
        [sym_binary_operator] = STATE(249),
        [sym_identifier] = ACTIONS(509),
        [sym_comment] = ACTIONS(45),
    },
    [230] = {
        [sym_parameters] = STATE(244),
        [ts_builtin_sym_end] = ACTIONS(79),
        [anon_sym_SEMI] = ACTIONS(79),
        [anon_sym_print] = ACTIONS(81),
        [anon_sym_COMMA] = ACTIONS(536),
        [anon_sym_if] = ACTIONS(81),
        [anon_sym_COLON] = ACTIONS(79),
        [anon_sym_elif] = ACTIONS(81),
        [anon_sym_else] = ACTIONS(81),
        [anon_sym_for] = ACTIONS(81),
        [anon_sym_in] = ACTIONS(81),
        [anon_sym_while] = ACTIONS(81),
        [anon_sym_try] = ACTIONS(81),
        [anon_sym_except] = ACTIONS(81),
        [anon_sym_as] = ACTIONS(81),
        [anon_sym_finally] = ACTIONS(81),
        [anon_sym_with] = ACTIONS(81),
        [anon_sym_def] = ACTIONS(81),
        [anon_sym_LPAREN] = ACTIONS(145),
        [anon_sym_RPAREN] = ACTIONS(539),
        [anon_sym_EQ] = ACTIONS(451),
        [anon_sym_PLUS] = ACTIONS(79),
        [sym_identifier] = ACTIONS(83),
        [sym_comment] = ACTIONS(45),
        [sym__newline] = ACTIONS(79),
        [sym__dedent] = ACTIONS(79),
    },
    [231] = {
        [ts_builtin_sym_end] = ACTIONS(542),
        [anon_sym_SEMI] = ACTIONS(139),
        [anon_sym_print] = ACTIONS(141),
        [anon_sym_if] = ACTIONS(141),
        [anon_sym_for] = ACTIONS(141),
        [anon_sym_while] = ACTIONS(141),
        [anon_sym_try] = ACTIONS(141),
        [anon_sym_with] = ACTIONS(141),
        [anon_sym_def] = ACTIONS(141),
        [sym_identifier] = ACTIONS(143),
        [sym_comment] = ACTIONS(45),
        [sym__newline] = ACTIONS(139),
        [sym__dedent] = ACTIONS(139),
    },
    [232] = {
        [sym__statement] = STATE(37),
        [sym__simple_statement] = STATE(38),
        [sym_print_statement] = STATE(13),
        [sym_expression_statement] = STATE(13),
        [sym__compound_statement] = STATE(39),
        [sym_if_statement] = STATE(40),
        [sym_for_statement] = STATE(40),
        [sym_while_statement] = STATE(40),
        [sym_try_statement] = STATE(40),
        [sym_with_statement] = STATE(40),
        [sym_function_definition] = STATE(40),
        [sym__expression] = STATE(16),
        [sym_binary_operator] = STATE(9),
        [aux_sym_module_repeat1] = STATE(263),
        [anon_sym_print] = ACTIONS(55),
        [anon_sym_if] = ACTIONS(155),
        [anon_sym_for] = ACTIONS(157),
        [anon_sym_while] = ACTIONS(159),
        [anon_sym_try] = ACTIONS(161),
        [anon_sym_with] = ACTIONS(163),
        [anon_sym_def] = ACTIONS(165),
        [sym_identifier] = ACTIONS(69),
        [sym_comment] = ACTIONS(45),
        [sym__dedent] = ACTIONS(545),
    },
    [233] = {
        [ts_builtin_sym_end] = ACTIONS(547),
        [anon_sym_SEMI] = ACTIONS(547),
        [anon_sym_print] = ACTIONS(550),
        [anon_sym_if] = ACTIONS(550),
        [anon_sym_elif] = ACTIONS(550),
        [anon_sym_else] = ACTIONS(550),
        [anon_sym_for] = ACTIONS(550),
        [anon_sym_while] = ACTIONS(550),
        [anon_sym_try] = ACTIONS(550),
        [anon_sym_except] = ACTIONS(550),
        [anon_sym_finally] = ACTIONS(550),
        [anon_sym_with] = ACTIONS(550),
        [anon_sym_def] = ACTIONS(550),
        [sym_identifier] = ACTIONS(553),
        [sym_comment] = ACTIONS(45),
        [sym__newline] = ACTIONS(547),
        [sym__dedent] = ACTIONS(547),
    },
    [234] = {
        [ts_builtin_sym_end] = ACTIONS(556),
        [anon_sym_SEMI] = ACTIONS(556),
        [anon_sym_print] = ACTIONS(559),
        [anon_sym_if] = ACTIONS(559),
        [anon_sym_for] = ACTIONS(559),
        [anon_sym_while] = ACTIONS(559),
        [anon_sym_try] = ACTIONS(559),
        [anon_sym_with] = ACTIONS(559),
        [anon_sym_def] = ACTIONS(559),
        [sym_identifier] = ACTIONS(562),
        [sym_comment] = ACTIONS(45),
        [sym__newline] = ACTIONS(556),
        [sym__dedent] = ACTIONS(556),
    },
    [235] = {
        [ts_builtin_sym_end] = ACTIONS(169),
        [anon_sym_SEMI] = ACTIONS(169),
        [anon_sym_print] = ACTIONS(171),
        [anon_sym_if] = ACTIONS(171),
        [anon_sym_elif] = ACTIONS(171),
        [anon_sym_else] = ACTIONS(171),
        [anon_sym_for] = ACTIONS(171),
        [anon_sym_while] = ACTIONS(171),
        [anon_sym_try] = ACTIONS(171),
        [anon_sym_except] = ACTIONS(171),
        [anon_sym_finally] = ACTIONS(171),
        [anon_sym_with] = ACTIONS(171),
        [anon_sym_def] = ACTIONS(171),
        [sym_identifier] = ACTIONS(173),
        [sym_comment] = ACTIONS(45),
        [sym__newline] = ACTIONS(565),
        [sym__dedent] = ACTIONS(169),
    },
    [236] = {
        [ts_builtin_sym_end] = ACTIONS(95),
        [anon_sym_SEMI] = ACTIONS(95),
        [anon_sym_print] = ACTIONS(97),
        [anon_sym_if] = ACTIONS(97),
        [anon_sym_elif] = ACTIONS(97),
        [anon_sym_else] = ACTIONS(97),
        [anon_sym_for] = ACTIONS(97),
        [anon_sym_while] = ACTIONS(97),
        [anon_sym_try] = ACTIONS(97),
        [anon_sym_except] = ACTIONS(97),
        [anon_sym_finally] = ACTIONS(97),
        [anon_sym_with] = ACTIONS(97),
        [anon_sym_def] = ACTIONS(97),
        [sym_identifier] = ACTIONS(99),
        [sym_comment] = ACTIONS(45),
        [sym__newline] = ACTIONS(95),
        [sym__dedent] = ACTIONS(95),
    },
    [237] = {
        [ts_builtin_sym_end] = ACTIONS(101),
        [anon_sym_SEMI] = ACTIONS(101),
        [anon_sym_print] = ACTIONS(103),
        [anon_sym_if] = ACTIONS(103),
        [anon_sym_for] = ACTIONS(103),
        [anon_sym_while] = ACTIONS(103),
        [anon_sym_try] = ACTIONS(103),
        [anon_sym_with] = ACTIONS(103),
        [anon_sym_def] = ACTIONS(103),
        [sym_identifier] = ACTIONS(105),
        [sym_comment] = ACTIONS(45),
        [sym__newline] = ACTIONS(101),
        [sym__dedent] = ACTIONS(101),
    },
    [238] = {
        [ts_builtin_sym_end] = ACTIONS(107),
        [anon_sym_SEMI] = ACTIONS(107),
        [anon_sym_print] = ACTIONS(109),
        [anon_sym_if] = ACTIONS(109),
        [anon_sym_for] = ACTIONS(109),
        [anon_sym_while] = ACTIONS(109),
        [anon_sym_try] = ACTIONS(109),
        [anon_sym_with] = ACTIONS(109),
        [anon_sym_def] = ACTIONS(109),
        [sym_identifier] = ACTIONS(111),
        [sym_comment] = ACTIONS(45),
        [sym__newline] = ACTIONS(107),
        [sym__dedent] = ACTIONS(107),
    },
    [239] = {
        [ts_builtin_sym_end] = ACTIONS(568),
        [anon_sym_SEMI] = ACTIONS(568),
        [anon_sym_print] = ACTIONS(571),
        [anon_sym_if] = ACTIONS(571),
        [anon_sym_elif] = ACTIONS(571),
        [anon_sym_else] = ACTIONS(571),
        [anon_sym_for] = ACTIONS(571),
        [anon_sym_while] = ACTIONS(571),
        [anon_sym_try] = ACTIONS(571),
        [anon_sym_with] = ACTIONS(571),
        [anon_sym_def] = ACTIONS(571),
        [sym_identifier] = ACTIONS(574),
        [sym_comment] = ACTIONS(45),
        [sym__newline] = ACTIONS(568),
        [sym__dedent] = ACTIONS(568),
    },
    [240] = {
        [sym_finally_clause] = STATE(276),
        [ts_builtin_sym_end] = ACTIONS(577),
        [anon_sym_SEMI] = ACTIONS(577),
        [anon_sym_print] = ACTIONS(583),
        [anon_sym_if] = ACTIONS(583),
        [anon_sym_for] = ACTIONS(583),
        [anon_sym_while] = ACTIONS(583),
        [anon_sym_try] = ACTIONS(583),
        [anon_sym_finally] = ACTIONS(589),
        [anon_sym_with] = ACTIONS(583),
        [anon_sym_def] = ACTIONS(583),
        [sym_identifier] = ACTIONS(591),
        [sym_comment] = ACTIONS(45),
        [sym__newline] = ACTIONS(577),
        [sym__dedent] = ACTIONS(577),
    },
    [241] = {
        [ts_builtin_sym_end] = ACTIONS(597),
        [anon_sym_SEMI] = ACTIONS(597),
        [anon_sym_print] = ACTIONS(600),
        [anon_sym_if] = ACTIONS(600),
        [anon_sym_else] = ACTIONS(600),
        [anon_sym_for] = ACTIONS(600),
        [anon_sym_while] = ACTIONS(600),
        [anon_sym_try] = ACTIONS(600),
        [anon_sym_except] = ACTIONS(600),
        [anon_sym_finally] = ACTIONS(600),
        [anon_sym_with] = ACTIONS(600),
        [anon_sym_def] = ACTIONS(600),
        [sym_identifier] = ACTIONS(603),
        [sym_comment] = ACTIONS(45),
        [sym__newline] = ACTIONS(597),
        [sym__dedent] = ACTIONS(597),
    },
    [242] = {
        [ts_builtin_sym_end] = ACTIONS(606),
        [anon_sym_SEMI] = ACTIONS(606),
        [anon_sym_print] = ACTIONS(610),
        [anon_sym_if] = ACTIONS(610),
        [anon_sym_for] = ACTIONS(610),
        [anon_sym_while] = ACTIONS(610),
        [anon_sym_try] = ACTIONS(610),
        [anon_sym_with] = ACTIONS(610),
        [anon_sym_def] = ACTIONS(610),
        [sym_identifier] = ACTIONS(614),
        [sym_comment] = ACTIONS(45),
        [sym__newline] = ACTIONS(606),
        [sym__dedent] = ACTIONS(606),
    },
    [243] = {
        [aux_sym_with_statement_repeat1] = STATE(254),
        [anon_sym_COMMA] = ACTIONS(618),
        [anon_sym_COLON] = ACTIONS(622),
        [sym_comment] = ACTIONS(45),
    },
    [244] = {
        [anon_sym_COLON] = ACTIONS(626),
        [sym_comment] = ACTIONS(45),
    },
    [245] = {
        [anon_sym_COMMA] = ACTIONS(628),
        [anon_sym_RPAREN] = ACTIONS(630),
        [sym_comment] = ACTIONS(45),
    },
    [246] = {
        [sym_elif_clause] = STATE(295),
        [sym_else_clause] = STATE(327),
        [sym_except_clause] = STATE(328),
        [sym_finally_clause] = STATE(329),
        [aux_sym_if_statement_repeat1] = STATE(252),
        [aux_sym_try_statement_repeat1] = STATE(253),
        [ts_builtin_sym_end] = ACTIONS(632),
        [anon_sym_SEMI] = ACTIONS(632),
        [anon_sym_print] = ACTIONS(644),
        [anon_sym_if] = ACTIONS(644),
        [anon_sym_elif] = ACTIONS(656),
        [anon_sym_else] = ACTIONS(659),
        [anon_sym_for] = ACTIONS(644),
        [anon_sym_while] = ACTIONS(644),
        [anon_sym_try] = ACTIONS(644),
        [anon_sym_except] = ACTIONS(664),
        [anon_sym_finally] = ACTIONS(668),
        [anon_sym_with] = ACTIONS(644),
        [anon_sym_def] = ACTIONS(644),
        [sym_identifier] = ACTIONS(673),
        [sym_comment] = ACTIONS(45),
        [sym__newline] = ACTIONS(632),
        [sym__dedent] = ACTIONS(632),
    },
    [247] = {
        [anon_sym_COLON] = ACTIONS(685),
        [anon_sym_in] = ACTIONS(687),
        [sym_comment] = ACTIONS(45),
    },
    [248] = {
        [aux_sym_print_statement_repeat1] = STATE(251),
        [ts_builtin_sym_end] = ACTIONS(689),
        [anon_sym_SEMI] = ACTIONS(689),
        [anon_sym_print] = ACTIONS(695),
        [anon_sym_COMMA] = ACTIONS(701),
        [anon_sym_if] = ACTIONS(695),
        [anon_sym_COLON] = ACTIONS(709),
        [anon_sym_elif] = ACTIONS(695),
        [anon_sym_else] = ACTIONS(695),
        [anon_sym_for] = ACTIONS(695),
        [anon_sym_in] = ACTIONS(717),
        [anon_sym_while] = ACTIONS(695),
        [anon_sym_try] = ACTIONS(695),
        [anon_sym_except] = ACTIONS(695),
        [anon_sym_as] = ACTIONS(722),
        [anon_sym_finally] = ACTIONS(695),
        [anon_sym_with] = ACTIONS(695),
        [anon_sym_def] = ACTIONS(695),
        [anon_sym_RPAREN] = ACTIONS(725),
        [anon_sym_PLUS] = ACTIONS(728),
        [sym_identifier] = ACTIONS(731),
        [sym_comment] = ACTIONS(45),
        [sym__newline] = ACTIONS(689),
        [sym__dedent] = ACTIONS(689),
    },
    [249] = {
        [ts_builtin_sym_end] = ACTIONS(79),
        [anon_sym_SEMI] = ACTIONS(79),
        [anon_sym_print] = ACTIONS(81),
        [anon_sym_COMMA] = ACTIONS(79),
        [anon_sym_if] = ACTIONS(81),
        [anon_sym_COLON] = ACTIONS(79),
        [anon_sym_elif] = ACTIONS(81),
        [anon_sym_else] = ACTIONS(81),
        [anon_sym_for] = ACTIONS(81),
        [anon_sym_in] = ACTIONS(81),
        [anon_sym_while] = ACTIONS(81),
        [anon_sym_try] = ACTIONS(81),
        [anon_sym_except] = ACTIONS(81),
        [anon_sym_as] = ACTIONS(81),
        [anon_sym_finally] = ACTIONS(81),
        [anon_sym_with] = ACTIONS(81),
        [anon_sym_def] = ACTIONS(81),
        [anon_sym_RPAREN] = ACTIONS(79),
        [anon_sym_PLUS] = ACTIONS(79),
        [sym_identifier] = ACTIONS(83),
        [sym_comment] = ACTIONS(45),
        [sym__newline] = ACTIONS(79),
        [sym__dedent] = ACTIONS(79),
    },
    [250] = {
        [sym__statement] = STATE(286),
        [sym__simple_statement] = STATE(287),
        [sym_print_statement] = STATE(13),
        [sym_expression_statement] = STATE(13),
        [sym__compound_statement] = STATE(237),
        [sym_if_statement] = STATE(238),
        [sym_for_statement] = STATE(238),
        [sym_while_statement] = STATE(238),
        [sym_try_statement] = STATE(238),
        [sym_with_statement] = STATE(238),
        [sym_function_definition] = STATE(238),
        [sym__expression] = STATE(16),
        [sym_binary_operator] = STATE(9),
        [ts_builtin_sym_end] = ACTIONS(121),
        [anon_sym_SEMI] = ACTIONS(123),
        [anon_sym_print] = ACTIONS(55),
        [anon_sym_if] = ACTIONS(737),
        [anon_sym_for] = ACTIONS(739),
        [anon_sym_while] = ACTIONS(741),
        [anon_sym_try] = ACTIONS(743),
        [anon_sym_with] = ACTIONS(745),
        [anon_sym_def] = ACTIONS(747),
        [sym_identifier] = ACTIONS(69),
        [sym_comment] = ACTIONS(45),
        [sym__newline] = ACTIONS(123),
        [sym__dedent] = ACTIONS(749),
    },
    [251] = {
        [ts_builtin_sym_end] = ACTIONS(231),
        [anon_sym_SEMI] = ACTIONS(231),
        [anon_sym_print] = ACTIONS(225),
        [anon_sym_COMMA] = ACTIONS(751),
        [anon_sym_if] = ACTIONS(225),
        [anon_sym_COLON] = ACTIONS(383),
        [anon_sym_elif] = ACTIONS(225),
        [anon_sym_else] = ACTIONS(225),
        [anon_sym_for] = ACTIONS(225),
        [anon_sym_in] = ACTIONS(753),
        [anon_sym_while] = ACTIONS(225),
        [anon_sym_try] = ACTIONS(225),
        [anon_sym_except] = ACTIONS(225),
        [anon_sym_finally] = ACTIONS(225),
        [anon_sym_with] = ACTIONS(225),
        [anon_sym_def] = ACTIONS(225),
        [sym_identifier] = ACTIONS(229),
        [sym_comment] = ACTIONS(45),
        [sym__newline] = ACTIONS(231),
        [sym__dedent] = ACTIONS(231),
    },
    [252] = {
        [sym_elif_clause] = STATE(278),
        [sym_else_clause] = STATE(279),
        [ts_builtin_sym_end] = ACTIONS(419),
        [anon_sym_SEMI] = ACTIONS(419),
        [anon_sym_print] = ACTIONS(415),
        [anon_sym_if] = ACTIONS(415),
        [anon_sym_elif] = ACTIONS(755),
        [anon_sym_else] = ACTIONS(757),
        [anon_sym_for] = ACTIONS(415),
        [anon_sym_while] = ACTIONS(415),
        [anon_sym_try] = ACTIONS(415),
        [anon_sym_with] = ACTIONS(415),
        [anon_sym_def] = ACTIONS(415),
        [sym_identifier] = ACTIONS(417),
        [sym_comment] = ACTIONS(45),
        [sym__newline] = ACTIONS(419),
        [sym__dedent] = ACTIONS(419),
    },
    [253] = {
        [sym_else_clause] = STATE(273),
        [sym_except_clause] = STATE(274),
        [sym_finally_clause] = STATE(275),
        [ts_builtin_sym_end] = ACTIONS(301),
        [anon_sym_SEMI] = ACTIONS(301),
        [anon_sym_print] = ACTIONS(297),
        [anon_sym_if] = ACTIONS(297),
        [anon_sym_else] = ACTIONS(759),
        [anon_sym_for] = ACTIONS(297),
        [anon_sym_while] = ACTIONS(297),
        [anon_sym_try] = ACTIONS(297),
        [anon_sym_except] = ACTIONS(761),
        [anon_sym_finally] = ACTIONS(589),
        [anon_sym_with] = ACTIONS(297),
        [anon_sym_def] = ACTIONS(297),
        [sym_identifier] = ACTIONS(299),
        [sym_comment] = ACTIONS(45),
        [sym__newline] = ACTIONS(301),
        [sym__dedent] = ACTIONS(301),
    },
    [254] = {
        [anon_sym_COMMA] = ACTIONS(257),
        [anon_sym_COLON] = ACTIONS(763),
        [sym_comment] = ACTIONS(45),
    },
    [255] = {
        [sym__simple_statement] = STATE(257),
        [sym_print_statement] = STATE(236),
        [sym_expression_statement] = STATE(236),
        [sym__suite] = STATE(258),
        [sym__expression] = STATE(259),
        [sym_binary_operator] = STATE(249),
        [anon_sym_print] = ACTIONS(765),
        [sym_identifier] = ACTIONS(519),
        [sym_comment] = ACTIONS(45),
        [sym__indent] = ACTIONS(521),
    },
    [256] = {
        [sym__expression] = STATE(265),
        [sym_binary_operator] = STATE(249),
        [sym_identifier] = ACTIONS(509),
        [sym_comment] = ACTIONS(45),
    },
    [257] = {
        [ts_builtin_sym_end] = ACTIONS(169),
        [anon_sym_SEMI] = ACTIONS(169),
        [anon_sym_print] = ACTIONS(171),
        [anon_sym_if] = ACTIONS(171),
        [anon_sym_elif] = ACTIONS(171),
        [anon_sym_else] = ACTIONS(171),
        [anon_sym_for] = ACTIONS(171),
        [anon_sym_while] = ACTIONS(171),
        [anon_sym_try] = ACTIONS(171),
        [anon_sym_except] = ACTIONS(171),
        [anon_sym_finally] = ACTIONS(171),
        [anon_sym_with] = ACTIONS(171),
        [anon_sym_def] = ACTIONS(171),
        [sym_identifier] = ACTIONS(173),
        [sym_comment] = ACTIONS(45),
        [sym__newline] = ACTIONS(169),
        [sym__dedent] = ACTIONS(169),
    },
    [258] = {
        [ts_builtin_sym_end] = ACTIONS(265),
        [anon_sym_SEMI] = ACTIONS(265),
        [anon_sym_print] = ACTIONS(261),
        [anon_sym_if] = ACTIONS(261),
        [anon_sym_for] = ACTIONS(261),
        [anon_sym_while] = ACTIONS(261),
        [anon_sym_try] = ACTIONS(261),
        [anon_sym_with] = ACTIONS(261),
        [anon_sym_def] = ACTIONS(261),
        [sym_identifier] = ACTIONS(263),
        [sym_comment] = ACTIONS(45),
        [sym__newline] = ACTIONS(265),
        [sym__dedent] = ACTIONS(265),
    },
    [259] = {
        [ts_builtin_sym_end] = ACTIONS(113),
        [anon_sym_SEMI] = ACTIONS(113),
        [anon_sym_print] = ACTIONS(115),
        [anon_sym_if] = ACTIONS(115),
        [anon_sym_for] = ACTIONS(115),
        [anon_sym_while] = ACTIONS(115),
        [anon_sym_try] = ACTIONS(115),
        [anon_sym_with] = ACTIONS(115),
        [anon_sym_def] = ACTIONS(115),
        [anon_sym_PLUS] = ACTIONS(767),
        [sym_identifier] = ACTIONS(119),
        [sym_comment] = ACTIONS(45),
        [sym__newline] = ACTIONS(113),
        [sym__dedent] = ACTIONS(113),
    },
    [260] = {
        [sym__expression] = STATE(261),
        [sym_binary_operator] = STATE(249),
        [sym_identifier] = ACTIONS(509),
        [sym_comment] = ACTIONS(45),
    },
    [261] = {
        [ts_builtin_sym_end] = ACTIONS(133),
        [anon_sym_SEMI] = ACTIONS(133),
        [anon_sym_print] = ACTIONS(135),
        [anon_sym_if] = ACTIONS(135),
        [anon_sym_for] = ACTIONS(135),
        [anon_sym_while] = ACTIONS(135),
        [anon_sym_try] = ACTIONS(135),
        [anon_sym_with] = ACTIONS(135),
        [anon_sym_def] = ACTIONS(135),
        [anon_sym_PLUS] = ACTIONS(769),
        [sym_identifier] = ACTIONS(137),
        [sym_comment] = ACTIONS(45),
        [sym__newline] = ACTIONS(133),
        [sym__dedent] = ACTIONS(133),
    },
    [262] = {
        [ts_builtin_sym_end] = ACTIONS(185),
        [anon_sym_SEMI] = ACTIONS(185),
        [anon_sym_print] = ACTIONS(187),
        [anon_sym_if] = ACTIONS(187),
        [anon_sym_elif] = ACTIONS(187),
        [anon_sym_else] = ACTIONS(187),
        [anon_sym_for] = ACTIONS(187),
        [anon_sym_while] = ACTIONS(187),
        [anon_sym_try] = ACTIONS(187),
        [anon_sym_except] = ACTIONS(187),
        [anon_sym_finally] = ACTIONS(187),
        [anon_sym_with] = ACTIONS(187),
        [anon_sym_def] = ACTIONS(187),
        [sym_identifier] = ACTIONS(189),
        [sym_comment] = ACTIONS(45),
        [sym__newline] = ACTIONS(185),
        [sym__dedent] = ACTIONS(185),
    },
    [263] = {
        [sym__statement] = STATE(43),
        [sym__simple_statement] = STATE(38),
        [sym_print_statement] = STATE(13),
        [sym_expression_statement] = STATE(13),
        [sym__compound_statement] = STATE(39),
        [sym_if_statement] = STATE(40),
        [sym_for_statement] = STATE(40),
        [sym_while_statement] = STATE(40),
        [sym_try_statement] = STATE(40),
        [sym_with_statement] = STATE(40),
        [sym_function_definition] = STATE(40),
        [sym__expression] = STATE(16),
        [sym_binary_operator] = STATE(9),
        [anon_sym_print] = ACTIONS(55),
        [anon_sym_if] = ACTIONS(155),
        [anon_sym_for] = ACTIONS(157),
        [anon_sym_while] = ACTIONS(159),
        [anon_sym_try] = ACTIONS(161),
        [anon_sym_with] = ACTIONS(163),
        [anon_sym_def] = ACTIONS(165),
        [sym_identifier] = ACTIONS(69),
        [sym_comment] = ACTIONS(45),
        [sym__dedent] = ACTIONS(749),
    },
    [264] = {
        [ts_builtin_sym_end] = ACTIONS(195),
        [anon_sym_SEMI] = ACTIONS(195),
        [anon_sym_print] = ACTIONS(197),
        [anon_sym_if] = ACTIONS(197),
        [anon_sym_elif] = ACTIONS(197),
        [anon_sym_else] = ACTIONS(197),
        [anon_sym_for] = ACTIONS(197),
        [anon_sym_while] = ACTIONS(197),
        [anon_sym_try] = ACTIONS(197),
        [anon_sym_except] = ACTIONS(197),
        [anon_sym_finally] = ACTIONS(197),
        [anon_sym_with] = ACTIONS(197),
        [anon_sym_def] = ACTIONS(197),
        [sym_identifier] = ACTIONS(199),
        [sym_comment] = ACTIONS(45),
        [sym__newline] = ACTIONS(195),
        [sym__dedent] = ACTIONS(195),
    },
    [265] = {
        [aux_sym_print_statement_repeat1] = STATE(268),
        [ts_builtin_sym_end] = ACTIONS(223),
        [anon_sym_SEMI] = ACTIONS(223),
        [anon_sym_print] = ACTIONS(217),
        [anon_sym_COMMA] = ACTIONS(772),
        [anon_sym_if] = ACTIONS(217),
        [anon_sym_for] = ACTIONS(217),
        [anon_sym_while] = ACTIONS(217),
        [anon_sym_try] = ACTIONS(217),
        [anon_sym_with] = ACTIONS(217),
        [anon_sym_def] = ACTIONS(217),
        [anon_sym_PLUS] = ACTIONS(774),
        [sym_identifier] = ACTIONS(221),
        [sym_comment] = ACTIONS(45),
        [sym__newline] = ACTIONS(223),
        [sym__dedent] = ACTIONS(223),
    },
    [266] = {
        [sym__expression] = STATE(272),
        [sym_binary_operator] = STATE(249),
        [sym_identifier] = ACTIONS(509),
        [sym_comment] = ACTIONS(45),
    },
    [267] = {
        [sym__expression] = STATE(271),
        [sym_binary_operator] = STATE(249),
        [sym_identifier] = ACTIONS(509),
        [sym_comment] = ACTIONS(45),
    },
    [268] = {
        [ts_builtin_sym_end] = ACTIONS(231),
        [anon_sym_SEMI] = ACTIONS(231),
        [anon_sym_print] = ACTIONS(225),
        [anon_sym_COMMA] = ACTIONS(776),
        [anon_sym_if] = ACTIONS(225),
        [anon_sym_for] = ACTIONS(225),
        [anon_sym_while] = ACTIONS(225),
        [anon_sym_try] = ACTIONS(225),
        [anon_sym_with] = ACTIONS(225),
        [anon_sym_def] = ACTIONS(225),
        [sym_identifier] = ACTIONS(229),
        [sym_comment] = ACTIONS(45),
        [sym__newline] = ACTIONS(231),
        [sym__dedent] = ACTIONS(231),
    },
    [269] = {
        [sym__expression] = STATE(270),
        [sym_binary_operator] = STATE(249),
        [sym_identifier] = ACTIONS(509),
        [sym_comment] = ACTIONS(45),
    },
    [270] = {
        [ts_builtin_sym_end] = ACTIONS(235),
        [anon_sym_SEMI] = ACTIONS(235),
        [anon_sym_print] = ACTIONS(233),
        [anon_sym_COMMA] = ACTIONS(235),
        [anon_sym_if] = ACTIONS(233),
        [anon_sym_for] = ACTIONS(233),
        [anon_sym_while] = ACTIONS(233),
        [anon_sym_try] = ACTIONS(233),
        [anon_sym_with] = ACTIONS(233),
        [anon_sym_def] = ACTIONS(233),
        [anon_sym_PLUS] = ACTIONS(774),
        [sym_identifier] = ACTIONS(237),
        [sym_comment] = ACTIONS(45),
        [sym__newline] = ACTIONS(235),
        [sym__dedent] = ACTIONS(235),
    },
    [271] = {
        [ts_builtin_sym_end] = ACTIONS(133),
        [anon_sym_SEMI] = ACTIONS(133),
        [anon_sym_print] = ACTIONS(135),
        [anon_sym_COMMA] = ACTIONS(133),
        [anon_sym_if] = ACTIONS(135),
        [anon_sym_for] = ACTIONS(135),
        [anon_sym_while] = ACTIONS(135),
        [anon_sym_try] = ACTIONS(135),
        [anon_sym_with] = ACTIONS(135),
        [anon_sym_def] = ACTIONS(135),
        [anon_sym_PLUS] = ACTIONS(778),
        [sym_identifier] = ACTIONS(137),
        [sym_comment] = ACTIONS(45),
        [sym__newline] = ACTIONS(133),
        [sym__dedent] = ACTIONS(133),
    },
    [272] = {
        [ts_builtin_sym_end] = ACTIONS(241),
        [anon_sym_SEMI] = ACTIONS(241),
        [anon_sym_print] = ACTIONS(239),
        [anon_sym_COMMA] = ACTIONS(241),
        [anon_sym_if] = ACTIONS(239),
        [anon_sym_for] = ACTIONS(239),
        [anon_sym_while] = ACTIONS(239),
        [anon_sym_try] = ACTIONS(239),
        [anon_sym_with] = ACTIONS(239),
        [anon_sym_def] = ACTIONS(239),
        [anon_sym_PLUS] = ACTIONS(774),
        [sym_identifier] = ACTIONS(243),
        [sym_comment] = ACTIONS(45),
        [sym__newline] = ACTIONS(241),
        [sym__dedent] = ACTIONS(241),
    },
    [273] = {
        [sym_finally_clause] = STATE(276),
        [ts_builtin_sym_end] = ACTIONS(315),
        [anon_sym_SEMI] = ACTIONS(315),
        [anon_sym_print] = ACTIONS(311),
        [anon_sym_if] = ACTIONS(311),
        [anon_sym_for] = ACTIONS(311),
        [anon_sym_while] = ACTIONS(311),
        [anon_sym_try] = ACTIONS(311),
        [anon_sym_finally] = ACTIONS(589),
        [anon_sym_with] = ACTIONS(311),
        [anon_sym_def] = ACTIONS(311),
        [sym_identifier] = ACTIONS(313),
        [sym_comment] = ACTIONS(45),
        [sym__newline] = ACTIONS(315),
        [sym__dedent] = ACTIONS(315),
    },
    [274] = {
        [ts_builtin_sym_end] = ACTIONS(321),
        [anon_sym_SEMI] = ACTIONS(321),
        [anon_sym_print] = ACTIONS(317),
        [anon_sym_if] = ACTIONS(317),
        [anon_sym_else] = ACTIONS(317),
        [anon_sym_for] = ACTIONS(317),
        [anon_sym_while] = ACTIONS(317),
        [anon_sym_try] = ACTIONS(317),
        [anon_sym_except] = ACTIONS(317),
        [anon_sym_finally] = ACTIONS(317),
        [anon_sym_with] = ACTIONS(317),
        [anon_sym_def] = ACTIONS(317),
        [sym_identifier] = ACTIONS(319),
        [sym_comment] = ACTIONS(45),
        [sym__newline] = ACTIONS(321),
        [sym__dedent] = ACTIONS(321),
    },
    [275] = {
        [ts_builtin_sym_end] = ACTIONS(315),
        [anon_sym_SEMI] = ACTIONS(315),
        [anon_sym_print] = ACTIONS(311),
        [anon_sym_if] = ACTIONS(311),
        [anon_sym_for] = ACTIONS(311),
        [anon_sym_while] = ACTIONS(311),
        [anon_sym_try] = ACTIONS(311),
        [anon_sym_with] = ACTIONS(311),
        [anon_sym_def] = ACTIONS(311),
        [sym_identifier] = ACTIONS(313),
        [sym_comment] = ACTIONS(45),
        [sym__newline] = ACTIONS(315),
        [sym__dedent] = ACTIONS(315),
    },
    [276] = {
        [ts_builtin_sym_end] = ACTIONS(327),
        [anon_sym_SEMI] = ACTIONS(327),
        [anon_sym_print] = ACTIONS(323),
        [anon_sym_if] = ACTIONS(323),
        [anon_sym_for] = ACTIONS(323),
        [anon_sym_while] = ACTIONS(323),
        [anon_sym_try] = ACTIONS(323),
        [anon_sym_with] = ACTIONS(323),
        [anon_sym_def] = ACTIONS(323),
        [sym_identifier] = ACTIONS(325),
        [sym_comment] = ACTIONS(45),
        [sym__newline] = ACTIONS(327),
        [sym__dedent] = ACTIONS(327),
    },
    [277] = {
        [anon_sym_COLON] = ACTIONS(781),
        [sym_comment] = ACTIONS(45),
    },
    [278] = {
        [ts_builtin_sym_end] = ACTIONS(425),
        [anon_sym_SEMI] = ACTIONS(425),
        [anon_sym_print] = ACTIONS(421),
        [anon_sym_if] = ACTIONS(421),
        [anon_sym_elif] = ACTIONS(421),
        [anon_sym_else] = ACTIONS(421),
        [anon_sym_for] = ACTIONS(421),
        [anon_sym_while] = ACTIONS(421),
        [anon_sym_try] = ACTIONS(421),
        [anon_sym_with] = ACTIONS(421),
        [anon_sym_def] = ACTIONS(421),
        [sym_identifier] = ACTIONS(423),
        [sym_comment] = ACTIONS(45),
        [sym__newline] = ACTIONS(425),
        [sym__dedent] = ACTIONS(425),
    },
    [279] = {
        [ts_builtin_sym_end] = ACTIONS(431),
        [anon_sym_SEMI] = ACTIONS(431),
        [anon_sym_print] = ACTIONS(427),
        [anon_sym_if] = ACTIONS(427),
        [anon_sym_for] = ACTIONS(427),
        [anon_sym_while] = ACTIONS(427),
        [anon_sym_try] = ACTIONS(427),
        [anon_sym_with] = ACTIONS(427),
        [anon_sym_def] = ACTIONS(427),
        [sym_identifier] = ACTIONS(429),
        [sym_comment] = ACTIONS(45),
        [sym__newline] = ACTIONS(431),
        [sym__dedent] = ACTIONS(431),
    },
    [280] = {
        [sym__simple_statement] = STATE(257),
        [sym_print_statement] = STATE(236),
        [sym_expression_statement] = STATE(236),
        [sym__suite] = STATE(281),
        [sym__expression] = STATE(259),
        [sym_binary_operator] = STATE(249),
        [anon_sym_print] = ACTIONS(765),
        [sym_identifier] = ACTIONS(519),
        [sym_comment] = ACTIONS(45),
        [sym__indent] = ACTIONS(521),
    },
    [281] = {
        [ts_builtin_sym_end] = ACTIONS(333),
        [anon_sym_SEMI] = ACTIONS(333),
        [anon_sym_print] = ACTIONS(329),
        [anon_sym_if] = ACTIONS(329),
        [anon_sym_for] = ACTIONS(329),
        [anon_sym_while] = ACTIONS(329),
        [anon_sym_try] = ACTIONS(329),
        [anon_sym_finally] = ACTIONS(329),
        [anon_sym_with] = ACTIONS(329),
        [anon_sym_def] = ACTIONS(329),
        [sym_identifier] = ACTIONS(331),
        [sym_comment] = ACTIONS(45),
        [sym__newline] = ACTIONS(333),
        [sym__dedent] = ACTIONS(333),
    },
    [282] = {
        [sym__expression] = STATE(283),
        [sym_binary_operator] = STATE(249),
        [sym_identifier] = ACTIONS(509),
        [sym_comment] = ACTIONS(45),
    },
    [283] = {
        [ts_builtin_sym_end] = ACTIONS(235),
        [anon_sym_SEMI] = ACTIONS(235),
        [anon_sym_print] = ACTIONS(233),
        [anon_sym_COMMA] = ACTIONS(235),
        [anon_sym_if] = ACTIONS(233),
        [anon_sym_COLON] = ACTIONS(235),
        [anon_sym_elif] = ACTIONS(233),
        [anon_sym_else] = ACTIONS(233),
        [anon_sym_for] = ACTIONS(233),
        [anon_sym_in] = ACTIONS(233),
        [anon_sym_while] = ACTIONS(233),
        [anon_sym_try] = ACTIONS(233),
        [anon_sym_except] = ACTIONS(233),
        [anon_sym_finally] = ACTIONS(233),
        [anon_sym_with] = ACTIONS(233),
        [anon_sym_def] = ACTIONS(233),
        [anon_sym_PLUS] = ACTIONS(783),
        [sym_identifier] = ACTIONS(237),
        [sym_comment] = ACTIONS(45),
        [sym__newline] = ACTIONS(235),
        [sym__dedent] = ACTIONS(235),
    },
    [284] = {
        [sym__expression] = STATE(285),
        [sym_binary_operator] = STATE(249),
        [sym_identifier] = ACTIONS(509),
        [sym_comment] = ACTIONS(45),
    },
    [285] = {
        [ts_builtin_sym_end] = ACTIONS(133),
        [anon_sym_SEMI] = ACTIONS(133),
        [anon_sym_print] = ACTIONS(135),
        [anon_sym_COMMA] = ACTIONS(133),
        [anon_sym_if] = ACTIONS(135),
        [anon_sym_COLON] = ACTIONS(133),
        [anon_sym_elif] = ACTIONS(135),
        [anon_sym_else] = ACTIONS(135),
        [anon_sym_for] = ACTIONS(135),
        [anon_sym_in] = ACTIONS(135),
        [anon_sym_while] = ACTIONS(135),
        [anon_sym_try] = ACTIONS(135),
        [anon_sym_except] = ACTIONS(135),
        [anon_sym_finally] = ACTIONS(135),
        [anon_sym_with] = ACTIONS(135),
        [anon_sym_def] = ACTIONS(135),
        [anon_sym_PLUS] = ACTIONS(785),
        [sym_identifier] = ACTIONS(137),
        [sym_comment] = ACTIONS(45),
        [sym__newline] = ACTIONS(133),
        [sym__dedent] = ACTIONS(133),
    },
    [286] = {
        [ts_builtin_sym_end] = ACTIONS(127),
        [anon_sym_SEMI] = ACTIONS(127),
        [anon_sym_print] = ACTIONS(129),
        [anon_sym_if] = ACTIONS(129),
        [anon_sym_for] = ACTIONS(129),
        [anon_sym_while] = ACTIONS(129),
        [anon_sym_try] = ACTIONS(129),
        [anon_sym_with] = ACTIONS(129),
        [anon_sym_def] = ACTIONS(129),
        [sym_identifier] = ACTIONS(131),
        [sym_comment] = ACTIONS(45),
        [sym__newline] = ACTIONS(127),
        [sym__dedent] = ACTIONS(127),
    },
    [287] = {
        [sym_comment] = ACTIONS(45),
        [sym__newline] = ACTIONS(788),
    },
    [288] = {
        [ts_builtin_sym_end] = ACTIONS(139),
        [anon_sym_SEMI] = ACTIONS(139),
        [anon_sym_print] = ACTIONS(141),
        [anon_sym_if] = ACTIONS(141),
        [anon_sym_for] = ACTIONS(141),
        [anon_sym_while] = ACTIONS(141),
        [anon_sym_try] = ACTIONS(141),
        [anon_sym_with] = ACTIONS(141),
        [anon_sym_def] = ACTIONS(141),
        [sym_identifier] = ACTIONS(143),
        [sym_comment] = ACTIONS(45),
        [sym__newline] = ACTIONS(139),
        [sym__dedent] = ACTIONS(139),
    },
    [289] = {
        [sym__expression] = STATE(297),
        [sym_binary_operator] = STATE(249),
        [sym_identifier] = ACTIONS(509),
        [sym_comment] = ACTIONS(45),
    },
    [290] = {
        [sym__simple_statement] = STATE(257),
        [sym_print_statement] = STATE(236),
        [sym_expression_statement] = STATE(236),
        [sym__suite] = STATE(291),
        [sym__expression] = STATE(292),
        [sym_binary_operator] = STATE(249),
        [anon_sym_print] = ACTIONS(517),
        [sym_identifier] = ACTIONS(519),
        [sym_comment] = ACTIONS(45),
        [sym__indent] = ACTIONS(521),
    },
    [291] = {
        [sym_elif_clause] = STATE(295),
        [sym_else_clause] = STATE(296),
        [aux_sym_if_statement_repeat1] = STATE(252),
        [ts_builtin_sym_end] = ACTIONS(790),
        [anon_sym_SEMI] = ACTIONS(790),
        [anon_sym_print] = ACTIONS(796),
        [anon_sym_if] = ACTIONS(796),
        [anon_sym_elif] = ACTIONS(656),
        [anon_sym_else] = ACTIONS(659),
        [anon_sym_for] = ACTIONS(796),
        [anon_sym_while] = ACTIONS(796),
        [anon_sym_try] = ACTIONS(796),
        [anon_sym_except] = ACTIONS(802),
        [anon_sym_finally] = ACTIONS(802),
        [anon_sym_with] = ACTIONS(796),
        [anon_sym_def] = ACTIONS(796),
        [sym_identifier] = ACTIONS(805),
        [sym_comment] = ACTIONS(45),
        [sym__newline] = ACTIONS(790),
        [sym__dedent] = ACTIONS(790),
    },
    [292] = {
        [ts_builtin_sym_end] = ACTIONS(113),
        [anon_sym_SEMI] = ACTIONS(113),
        [anon_sym_print] = ACTIONS(115),
        [anon_sym_if] = ACTIONS(115),
        [anon_sym_elif] = ACTIONS(115),
        [anon_sym_else] = ACTIONS(115),
        [anon_sym_for] = ACTIONS(115),
        [anon_sym_while] = ACTIONS(115),
        [anon_sym_try] = ACTIONS(115),
        [anon_sym_except] = ACTIONS(115),
        [anon_sym_finally] = ACTIONS(115),
        [anon_sym_with] = ACTIONS(115),
        [anon_sym_def] = ACTIONS(115),
        [anon_sym_PLUS] = ACTIONS(811),
        [sym_identifier] = ACTIONS(119),
        [sym_comment] = ACTIONS(45),
        [sym__newline] = ACTIONS(113),
        [sym__dedent] = ACTIONS(113),
    },
    [293] = {
        [sym__expression] = STATE(294),
        [sym_binary_operator] = STATE(249),
        [sym_identifier] = ACTIONS(509),
        [sym_comment] = ACTIONS(45),
    },
    [294] = {
        [ts_builtin_sym_end] = ACTIONS(133),
        [anon_sym_SEMI] = ACTIONS(133),
        [anon_sym_print] = ACTIONS(135),
        [anon_sym_if] = ACTIONS(135),
        [anon_sym_elif] = ACTIONS(135),
        [anon_sym_else] = ACTIONS(135),
        [anon_sym_for] = ACTIONS(135),
        [anon_sym_while] = ACTIONS(135),
        [anon_sym_try] = ACTIONS(135),
        [anon_sym_except] = ACTIONS(135),
        [anon_sym_finally] = ACTIONS(135),
        [anon_sym_with] = ACTIONS(135),
        [anon_sym_def] = ACTIONS(135),
        [anon_sym_PLUS] = ACTIONS(813),
        [sym_identifier] = ACTIONS(137),
        [sym_comment] = ACTIONS(45),
        [sym__newline] = ACTIONS(133),
        [sym__dedent] = ACTIONS(133),
    },
    [295] = {
        [ts_builtin_sym_end] = ACTIONS(413),
        [anon_sym_SEMI] = ACTIONS(413),
        [anon_sym_print] = ACTIONS(409),
        [anon_sym_if] = ACTIONS(409),
        [anon_sym_elif] = ACTIONS(409),
        [anon_sym_else] = ACTIONS(409),
        [anon_sym_for] = ACTIONS(409),
        [anon_sym_while] = ACTIONS(409),
        [anon_sym_try] = ACTIONS(409),
        [anon_sym_with] = ACTIONS(409),
        [anon_sym_def] = ACTIONS(409),
        [sym_identifier] = ACTIONS(411),
        [sym_comment] = ACTIONS(45),
        [sym__newline] = ACTIONS(413),
        [sym__dedent] = ACTIONS(413),
    },
    [296] = {
        [ts_builtin_sym_end] = ACTIONS(816),
        [anon_sym_SEMI] = ACTIONS(816),
        [anon_sym_print] = ACTIONS(819),
        [anon_sym_if] = ACTIONS(819),
        [anon_sym_for] = ACTIONS(819),
        [anon_sym_while] = ACTIONS(819),
        [anon_sym_try] = ACTIONS(819),
        [anon_sym_with] = ACTIONS(819),
        [anon_sym_def] = ACTIONS(819),
        [sym_identifier] = ACTIONS(822),
        [sym_comment] = ACTIONS(45),
        [sym__newline] = ACTIONS(816),
        [sym__dedent] = ACTIONS(816),
    },
    [297] = {
        [ts_builtin_sym_end] = ACTIONS(241),
        [anon_sym_SEMI] = ACTIONS(241),
        [anon_sym_print] = ACTIONS(239),
        [anon_sym_COMMA] = ACTIONS(241),
        [anon_sym_if] = ACTIONS(239),
        [anon_sym_COLON] = ACTIONS(825),
        [anon_sym_elif] = ACTIONS(239),
        [anon_sym_else] = ACTIONS(239),
        [anon_sym_for] = ACTIONS(239),
        [anon_sym_in] = ACTIONS(239),
        [anon_sym_while] = ACTIONS(239),
        [anon_sym_try] = ACTIONS(239),
        [anon_sym_except] = ACTIONS(239),
        [anon_sym_finally] = ACTIONS(239),
        [anon_sym_with] = ACTIONS(239),
        [anon_sym_def] = ACTIONS(239),
        [anon_sym_PLUS] = ACTIONS(783),
        [sym_identifier] = ACTIONS(243),
        [sym_comment] = ACTIONS(45),
        [sym__newline] = ACTIONS(241),
        [sym__dedent] = ACTIONS(241),
    },
    [298] = {
        [sym__simple_statement] = STATE(257),
        [sym_print_statement] = STATE(236),
        [sym_expression_statement] = STATE(236),
        [sym__suite] = STATE(300),
        [sym__expression] = STATE(301),
        [sym_binary_operator] = STATE(249),
        [anon_sym_print] = ACTIONS(828),
        [sym_identifier] = ACTIONS(519),
        [sym_comment] = ACTIONS(45),
        [sym__indent] = ACTIONS(521),
    },
    [299] = {
        [sym__expression] = STATE(304),
        [sym_binary_operator] = STATE(249),
        [sym_identifier] = ACTIONS(509),
        [sym_comment] = ACTIONS(45),
    },
    [300] = {
        [ts_builtin_sym_end] = ACTIONS(351),
        [anon_sym_SEMI] = ACTIONS(351),
        [anon_sym_print] = ACTIONS(347),
        [anon_sym_if] = ACTIONS(347),
        [anon_sym_else] = ACTIONS(347),
        [anon_sym_for] = ACTIONS(347),
        [anon_sym_while] = ACTIONS(347),
        [anon_sym_try] = ACTIONS(347),
        [anon_sym_except] = ACTIONS(347),
        [anon_sym_finally] = ACTIONS(347),
        [anon_sym_with] = ACTIONS(347),
        [anon_sym_def] = ACTIONS(347),
        [sym_identifier] = ACTIONS(349),
        [sym_comment] = ACTIONS(45),
        [sym__newline] = ACTIONS(351),
        [sym__dedent] = ACTIONS(351),
    },
    [301] = {
        [ts_builtin_sym_end] = ACTIONS(113),
        [anon_sym_SEMI] = ACTIONS(113),
        [anon_sym_print] = ACTIONS(115),
        [anon_sym_if] = ACTIONS(115),
        [anon_sym_else] = ACTIONS(115),
        [anon_sym_for] = ACTIONS(115),
        [anon_sym_while] = ACTIONS(115),
        [anon_sym_try] = ACTIONS(115),
        [anon_sym_except] = ACTIONS(115),
        [anon_sym_finally] = ACTIONS(115),
        [anon_sym_with] = ACTIONS(115),
        [anon_sym_def] = ACTIONS(115),
        [anon_sym_PLUS] = ACTIONS(830),
        [sym_identifier] = ACTIONS(119),
        [sym_comment] = ACTIONS(45),
        [sym__newline] = ACTIONS(113),
        [sym__dedent] = ACTIONS(113),
    },
    [302] = {
        [sym__expression] = STATE(303),
        [sym_binary_operator] = STATE(249),
        [sym_identifier] = ACTIONS(509),
        [sym_comment] = ACTIONS(45),
    },
    [303] = {
        [ts_builtin_sym_end] = ACTIONS(133),
        [anon_sym_SEMI] = ACTIONS(133),
        [anon_sym_print] = ACTIONS(135),
        [anon_sym_if] = ACTIONS(135),
        [anon_sym_else] = ACTIONS(135),
        [anon_sym_for] = ACTIONS(135),
        [anon_sym_while] = ACTIONS(135),
        [anon_sym_try] = ACTIONS(135),
        [anon_sym_except] = ACTIONS(135),
        [anon_sym_finally] = ACTIONS(135),
        [anon_sym_with] = ACTIONS(135),
        [anon_sym_def] = ACTIONS(135),
        [anon_sym_PLUS] = ACTIONS(832),
        [sym_identifier] = ACTIONS(137),
        [sym_comment] = ACTIONS(45),
        [sym__newline] = ACTIONS(133),
        [sym__dedent] = ACTIONS(133),
    },
    [304] = {
        [aux_sym_print_statement_repeat1] = STATE(307),
        [ts_builtin_sym_end] = ACTIONS(223),
        [anon_sym_SEMI] = ACTIONS(223),
        [anon_sym_print] = ACTIONS(217),
        [anon_sym_COMMA] = ACTIONS(835),
        [anon_sym_if] = ACTIONS(217),
        [anon_sym_else] = ACTIONS(217),
        [anon_sym_for] = ACTIONS(217),
        [anon_sym_while] = ACTIONS(217),
        [anon_sym_try] = ACTIONS(217),
        [anon_sym_except] = ACTIONS(217),
        [anon_sym_finally] = ACTIONS(217),
        [anon_sym_with] = ACTIONS(217),
        [anon_sym_def] = ACTIONS(217),
        [anon_sym_PLUS] = ACTIONS(837),
        [sym_identifier] = ACTIONS(221),
        [sym_comment] = ACTIONS(45),
        [sym__newline] = ACTIONS(223),
        [sym__dedent] = ACTIONS(223),
    },
    [305] = {
        [sym__expression] = STATE(311),
        [sym_binary_operator] = STATE(249),
        [sym_identifier] = ACTIONS(509),
        [sym_comment] = ACTIONS(45),
    },
    [306] = {
        [sym__expression] = STATE(310),
        [sym_binary_operator] = STATE(249),
        [sym_identifier] = ACTIONS(509),
        [sym_comment] = ACTIONS(45),
    },
    [307] = {
        [ts_builtin_sym_end] = ACTIONS(231),
        [anon_sym_SEMI] = ACTIONS(231),
        [anon_sym_print] = ACTIONS(225),
        [anon_sym_COMMA] = ACTIONS(839),
        [anon_sym_if] = ACTIONS(225),
        [anon_sym_else] = ACTIONS(225),
        [anon_sym_for] = ACTIONS(225),
        [anon_sym_while] = ACTIONS(225),
        [anon_sym_try] = ACTIONS(225),
        [anon_sym_except] = ACTIONS(225),
        [anon_sym_finally] = ACTIONS(225),
        [anon_sym_with] = ACTIONS(225),
        [anon_sym_def] = ACTIONS(225),
        [sym_identifier] = ACTIONS(229),
        [sym_comment] = ACTIONS(45),
        [sym__newline] = ACTIONS(231),
        [sym__dedent] = ACTIONS(231),
    },
    [308] = {
        [sym__expression] = STATE(309),
        [sym_binary_operator] = STATE(249),
        [sym_identifier] = ACTIONS(509),
        [sym_comment] = ACTIONS(45),
    },
    [309] = {
        [ts_builtin_sym_end] = ACTIONS(235),
        [anon_sym_SEMI] = ACTIONS(235),
        [anon_sym_print] = ACTIONS(233),
        [anon_sym_COMMA] = ACTIONS(235),
        [anon_sym_if] = ACTIONS(233),
        [anon_sym_else] = ACTIONS(233),
        [anon_sym_for] = ACTIONS(233),
        [anon_sym_while] = ACTIONS(233),
        [anon_sym_try] = ACTIONS(233),
        [anon_sym_except] = ACTIONS(233),
        [anon_sym_finally] = ACTIONS(233),
        [anon_sym_with] = ACTIONS(233),
        [anon_sym_def] = ACTIONS(233),
        [anon_sym_PLUS] = ACTIONS(837),
        [sym_identifier] = ACTIONS(237),
        [sym_comment] = ACTIONS(45),
        [sym__newline] = ACTIONS(235),
        [sym__dedent] = ACTIONS(235),
    },
    [310] = {
        [ts_builtin_sym_end] = ACTIONS(133),
        [anon_sym_SEMI] = ACTIONS(133),
        [anon_sym_print] = ACTIONS(135),
        [anon_sym_COMMA] = ACTIONS(133),
        [anon_sym_if] = ACTIONS(135),
        [anon_sym_else] = ACTIONS(135),
        [anon_sym_for] = ACTIONS(135),
        [anon_sym_while] = ACTIONS(135),
        [anon_sym_try] = ACTIONS(135),
        [anon_sym_except] = ACTIONS(135),
        [anon_sym_finally] = ACTIONS(135),
        [anon_sym_with] = ACTIONS(135),
        [anon_sym_def] = ACTIONS(135),
        [anon_sym_PLUS] = ACTIONS(841),
        [sym_identifier] = ACTIONS(137),
        [sym_comment] = ACTIONS(45),
        [sym__newline] = ACTIONS(133),
        [sym__dedent] = ACTIONS(133),
    },
    [311] = {
        [ts_builtin_sym_end] = ACTIONS(241),
        [anon_sym_SEMI] = ACTIONS(241),
        [anon_sym_print] = ACTIONS(239),
        [anon_sym_COMMA] = ACTIONS(241),
        [anon_sym_if] = ACTIONS(239),
        [anon_sym_else] = ACTIONS(239),
        [anon_sym_for] = ACTIONS(239),
        [anon_sym_while] = ACTIONS(239),
        [anon_sym_try] = ACTIONS(239),
        [anon_sym_except] = ACTIONS(239),
        [anon_sym_finally] = ACTIONS(239),
        [anon_sym_with] = ACTIONS(239),
        [anon_sym_def] = ACTIONS(239),
        [anon_sym_PLUS] = ACTIONS(837),
        [sym_identifier] = ACTIONS(243),
        [sym_comment] = ACTIONS(45),
        [sym__newline] = ACTIONS(241),
        [sym__dedent] = ACTIONS(241),
    },
    [312] = {
        [sym__simple_statement] = STATE(257),
        [sym_print_statement] = STATE(236),
        [sym_expression_statement] = STATE(236),
        [sym__suite] = STATE(314),
        [sym__expression] = STATE(315),
        [sym_binary_operator] = STATE(249),
        [anon_sym_print] = ACTIONS(844),
        [sym_identifier] = ACTIONS(519),
        [sym_comment] = ACTIONS(45),
        [sym__indent] = ACTIONS(521),
    },
    [313] = {
        [sym__expression] = STATE(319),
        [sym_binary_operator] = STATE(249),
        [sym_identifier] = ACTIONS(509),
        [sym_comment] = ACTIONS(45),
    },
    [314] = {
        [sym_else_clause] = STATE(318),
        [ts_builtin_sym_end] = ACTIONS(391),
        [anon_sym_SEMI] = ACTIONS(391),
        [anon_sym_print] = ACTIONS(387),
        [anon_sym_if] = ACTIONS(387),
        [anon_sym_else] = ACTIONS(757),
        [anon_sym_for] = ACTIONS(387),
        [anon_sym_while] = ACTIONS(387),
        [anon_sym_try] = ACTIONS(387),
        [anon_sym_with] = ACTIONS(387),
        [anon_sym_def] = ACTIONS(387),
        [sym_identifier] = ACTIONS(389),
        [sym_comment] = ACTIONS(45),
        [sym__newline] = ACTIONS(391),
        [sym__dedent] = ACTIONS(391),
    },
    [315] = {
        [ts_builtin_sym_end] = ACTIONS(113),
        [anon_sym_SEMI] = ACTIONS(113),
        [anon_sym_print] = ACTIONS(115),
        [anon_sym_if] = ACTIONS(115),
        [anon_sym_else] = ACTIONS(115),
        [anon_sym_for] = ACTIONS(115),
        [anon_sym_while] = ACTIONS(115),
        [anon_sym_try] = ACTIONS(115),
        [anon_sym_with] = ACTIONS(115),
        [anon_sym_def] = ACTIONS(115),
        [anon_sym_PLUS] = ACTIONS(846),
        [sym_identifier] = ACTIONS(119),
        [sym_comment] = ACTIONS(45),
        [sym__newline] = ACTIONS(113),
        [sym__dedent] = ACTIONS(113),
    },
    [316] = {
        [sym__expression] = STATE(317),
        [sym_binary_operator] = STATE(249),
        [sym_identifier] = ACTIONS(509),
        [sym_comment] = ACTIONS(45),
    },
    [317] = {
        [ts_builtin_sym_end] = ACTIONS(133),
        [anon_sym_SEMI] = ACTIONS(133),
        [anon_sym_print] = ACTIONS(135),
        [anon_sym_if] = ACTIONS(135),
        [anon_sym_else] = ACTIONS(135),
        [anon_sym_for] = ACTIONS(135),
        [anon_sym_while] = ACTIONS(135),
        [anon_sym_try] = ACTIONS(135),
        [anon_sym_with] = ACTIONS(135),
        [anon_sym_def] = ACTIONS(135),
        [anon_sym_PLUS] = ACTIONS(848),
        [sym_identifier] = ACTIONS(137),
        [sym_comment] = ACTIONS(45),
        [sym__newline] = ACTIONS(133),
        [sym__dedent] = ACTIONS(133),
    },
    [318] = {
        [ts_builtin_sym_end] = ACTIONS(397),
        [anon_sym_SEMI] = ACTIONS(397),
        [anon_sym_print] = ACTIONS(393),
        [anon_sym_if] = ACTIONS(393),
        [anon_sym_for] = ACTIONS(393),
        [anon_sym_while] = ACTIONS(393),
        [anon_sym_try] = ACTIONS(393),
        [anon_sym_with] = ACTIONS(393),
        [anon_sym_def] = ACTIONS(393),
        [sym_identifier] = ACTIONS(395),
        [sym_comment] = ACTIONS(45),
        [sym__newline] = ACTIONS(397),
        [sym__dedent] = ACTIONS(397),
    },
    [319] = {
        [aux_sym_print_statement_repeat1] = STATE(322),
        [ts_builtin_sym_end] = ACTIONS(223),
        [anon_sym_SEMI] = ACTIONS(223),
        [anon_sym_print] = ACTIONS(217),
        [anon_sym_COMMA] = ACTIONS(851),
        [anon_sym_if] = ACTIONS(217),
        [anon_sym_else] = ACTIONS(217),
        [anon_sym_for] = ACTIONS(217),
        [anon_sym_while] = ACTIONS(217),
        [anon_sym_try] = ACTIONS(217),
        [anon_sym_with] = ACTIONS(217),
        [anon_sym_def] = ACTIONS(217),
        [anon_sym_PLUS] = ACTIONS(853),
        [sym_identifier] = ACTIONS(221),
        [sym_comment] = ACTIONS(45),
        [sym__newline] = ACTIONS(223),
        [sym__dedent] = ACTIONS(223),
    },
    [320] = {
        [sym__expression] = STATE(326),
        [sym_binary_operator] = STATE(249),
        [sym_identifier] = ACTIONS(509),
        [sym_comment] = ACTIONS(45),
    },
    [321] = {
        [sym__expression] = STATE(325),
        [sym_binary_operator] = STATE(249),
        [sym_identifier] = ACTIONS(509),
        [sym_comment] = ACTIONS(45),
    },
    [322] = {
        [ts_builtin_sym_end] = ACTIONS(231),
        [anon_sym_SEMI] = ACTIONS(231),
        [anon_sym_print] = ACTIONS(225),
        [anon_sym_COMMA] = ACTIONS(855),
        [anon_sym_if] = ACTIONS(225),
        [anon_sym_else] = ACTIONS(225),
        [anon_sym_for] = ACTIONS(225),
        [anon_sym_while] = ACTIONS(225),
        [anon_sym_try] = ACTIONS(225),
        [anon_sym_with] = ACTIONS(225),
        [anon_sym_def] = ACTIONS(225),
        [sym_identifier] = ACTIONS(229),
        [sym_comment] = ACTIONS(45),
        [sym__newline] = ACTIONS(231),
        [sym__dedent] = ACTIONS(231),
    },
    [323] = {
        [sym__expression] = STATE(324),
        [sym_binary_operator] = STATE(249),
        [sym_identifier] = ACTIONS(509),
        [sym_comment] = ACTIONS(45),
    },
    [324] = {
        [ts_builtin_sym_end] = ACTIONS(235),
        [anon_sym_SEMI] = ACTIONS(235),
        [anon_sym_print] = ACTIONS(233),
        [anon_sym_COMMA] = ACTIONS(235),
        [anon_sym_if] = ACTIONS(233),
        [anon_sym_else] = ACTIONS(233),
        [anon_sym_for] = ACTIONS(233),
        [anon_sym_while] = ACTIONS(233),
        [anon_sym_try] = ACTIONS(233),
        [anon_sym_with] = ACTIONS(233),
        [anon_sym_def] = ACTIONS(233),
        [anon_sym_PLUS] = ACTIONS(853),
        [sym_identifier] = ACTIONS(237),
        [sym_comment] = ACTIONS(45),
        [sym__newline] = ACTIONS(235),
        [sym__dedent] = ACTIONS(235),
    },
    [325] = {
        [ts_builtin_sym_end] = ACTIONS(133),
        [anon_sym_SEMI] = ACTIONS(133),
        [anon_sym_print] = ACTIONS(135),
        [anon_sym_COMMA] = ACTIONS(133),
        [anon_sym_if] = ACTIONS(135),
        [anon_sym_else] = ACTIONS(135),
        [anon_sym_for] = ACTIONS(135),
        [anon_sym_while] = ACTIONS(135),
        [anon_sym_try] = ACTIONS(135),
        [anon_sym_with] = ACTIONS(135),
        [anon_sym_def] = ACTIONS(135),
        [anon_sym_PLUS] = ACTIONS(857),
        [sym_identifier] = ACTIONS(137),
        [sym_comment] = ACTIONS(45),
        [sym__newline] = ACTIONS(133),
        [sym__dedent] = ACTIONS(133),
    },
    [326] = {
        [ts_builtin_sym_end] = ACTIONS(241),
        [anon_sym_SEMI] = ACTIONS(241),
        [anon_sym_print] = ACTIONS(239),
        [anon_sym_COMMA] = ACTIONS(241),
        [anon_sym_if] = ACTIONS(239),
        [anon_sym_else] = ACTIONS(239),
        [anon_sym_for] = ACTIONS(239),
        [anon_sym_while] = ACTIONS(239),
        [anon_sym_try] = ACTIONS(239),
        [anon_sym_with] = ACTIONS(239),
        [anon_sym_def] = ACTIONS(239),
        [anon_sym_PLUS] = ACTIONS(853),
        [sym_identifier] = ACTIONS(243),
        [sym_comment] = ACTIONS(45),
        [sym__newline] = ACTIONS(241),
        [sym__dedent] = ACTIONS(241),
    },
    [327] = {
        [ts_builtin_sym_end] = ACTIONS(860),
        [anon_sym_SEMI] = ACTIONS(860),
        [anon_sym_print] = ACTIONS(864),
        [anon_sym_if] = ACTIONS(864),
        [anon_sym_for] = ACTIONS(864),
        [anon_sym_while] = ACTIONS(864),
        [anon_sym_try] = ACTIONS(864),
        [anon_sym_with] = ACTIONS(864),
        [anon_sym_def] = ACTIONS(864),
        [sym_identifier] = ACTIONS(868),
        [sym_comment] = ACTIONS(45),
        [sym__newline] = ACTIONS(860),
        [sym__dedent] = ACTIONS(860),
    },
    [328] = {
        [ts_builtin_sym_end] = ACTIONS(295),
        [anon_sym_SEMI] = ACTIONS(295),
        [anon_sym_print] = ACTIONS(291),
        [anon_sym_if] = ACTIONS(291),
        [anon_sym_else] = ACTIONS(291),
        [anon_sym_for] = ACTIONS(291),
        [anon_sym_while] = ACTIONS(291),
        [anon_sym_try] = ACTIONS(291),
        [anon_sym_except] = ACTIONS(291),
        [anon_sym_finally] = ACTIONS(291),
        [anon_sym_with] = ACTIONS(291),
        [anon_sym_def] = ACTIONS(291),
        [sym_identifier] = ACTIONS(293),
        [sym_comment] = ACTIONS(45),
        [sym__newline] = ACTIONS(295),
        [sym__dedent] = ACTIONS(295),
    },
    [329] = {
        [ts_builtin_sym_end] = ACTIONS(301),
        [anon_sym_SEMI] = ACTIONS(301),
        [anon_sym_print] = ACTIONS(297),
        [anon_sym_if] = ACTIONS(297),
        [anon_sym_for] = ACTIONS(297),
        [anon_sym_while] = ACTIONS(297),
        [anon_sym_try] = ACTIONS(297),
        [anon_sym_with] = ACTIONS(297),
        [anon_sym_def] = ACTIONS(297),
        [sym_identifier] = ACTIONS(299),
        [sym_comment] = ACTIONS(45),
        [sym__newline] = ACTIONS(301),
        [sym__dedent] = ACTIONS(301),
    },
    [330] = {
        [anon_sym_RPAREN] = ACTIONS(511),
        [sym_identifier] = ACTIONS(872),
        [sym_comment] = ACTIONS(45),
    },
    [331] = {
        [anon_sym_COLON] = ACTIONS(875),
        [sym_comment] = ACTIONS(45),
    },
    [332] = {
        [anon_sym_COLON] = ACTIONS(878),
        [sym_comment] = ACTIONS(45),
    },
    [333] = {
        [sym__simple_statement] = STATE(257),
        [sym_print_statement] = STATE(236),
        [sym_expression_statement] = STATE(236),
        [sym__suite] = STATE(334),
        [sym__expression] = STATE(259),
        [sym_binary_operator] = STATE(249),
        [anon_sym_print] = ACTIONS(765),
        [sym_identifier] = ACTIONS(519),
        [sym_comment] = ACTIONS(45),
        [sym__indent] = ACTIONS(521),
    },
    [334] = {
        [ts_builtin_sym_end] = ACTIONS(175),
        [anon_sym_SEMI] = ACTIONS(175),
        [anon_sym_print] = ACTIONS(177),
        [anon_sym_if] = ACTIONS(177),
        [anon_sym_for] = ACTIONS(177),
        [anon_sym_while] = ACTIONS(177),
        [anon_sym_try] = ACTIONS(177),
        [anon_sym_with] = ACTIONS(177),
        [anon_sym_def] = ACTIONS(177),
        [sym_identifier] = ACTIONS(179),
        [sym_comment] = ACTIONS(45),
        [sym__newline] = ACTIONS(175),
        [sym__dedent] = ACTIONS(175),
    },
    [335] = {
        [sym__simple_statement] = STATE(257),
        [sym_print_statement] = STATE(236),
        [sym_expression_statement] = STATE(236),
        [sym__suite] = STATE(336),
        [sym__expression] = STATE(259),
        [sym_binary_operator] = STATE(249),
        [anon_sym_print] = ACTIONS(765),
        [sym_identifier] = ACTIONS(519),
        [sym_comment] = ACTIONS(45),
        [sym__indent] = ACTIONS(521),
    },
    [336] = {
        [ts_builtin_sym_end] = ACTIONS(273),
        [anon_sym_SEMI] = ACTIONS(273),
        [anon_sym_print] = ACTIONS(269),
        [anon_sym_if] = ACTIONS(269),
        [anon_sym_for] = ACTIONS(269),
        [anon_sym_while] = ACTIONS(269),
        [anon_sym_try] = ACTIONS(269),
        [anon_sym_with] = ACTIONS(269),
        [anon_sym_def] = ACTIONS(269),
        [sym_identifier] = ACTIONS(271),
        [sym_comment] = ACTIONS(45),
        [sym__newline] = ACTIONS(273),
        [sym__dedent] = ACTIONS(273),
    },
    [337] = {
        [ts_builtin_sym_end] = ACTIONS(133),
        [anon_sym_SEMI] = ACTIONS(133),
        [anon_sym_print] = ACTIONS(135),
        [anon_sym_COMMA] = ACTIONS(133),
        [anon_sym_if] = ACTIONS(135),
        [anon_sym_COLON] = ACTIONS(133),
        [anon_sym_elif] = ACTIONS(135),
        [anon_sym_else] = ACTIONS(135),
        [anon_sym_for] = ACTIONS(135),
        [anon_sym_in] = ACTIONS(135),
        [anon_sym_while] = ACTIONS(135),
        [anon_sym_try] = ACTIONS(135),
        [anon_sym_except] = ACTIONS(135),
        [anon_sym_as] = ACTIONS(135),
        [anon_sym_finally] = ACTIONS(135),
        [anon_sym_with] = ACTIONS(135),
        [anon_sym_def] = ACTIONS(135),
        [anon_sym_RPAREN] = ACTIONS(133),
        [anon_sym_PLUS] = ACTIONS(728),
        [sym_identifier] = ACTIONS(137),
        [sym_comment] = ACTIONS(45),
        [sym__newline] = ACTIONS(133),
        [sym__dedent] = ACTIONS(133),
    },
    [338] = {
        [sym_parameters] = STATE(244),
        [anon_sym_LPAREN] = ACTIONS(145),
        [sym_comment] = ACTIONS(45),
    },
    [339] = {
        [aux_sym_with_statement_repeat1] = STATE(254),
        [anon_sym_COMMA] = ACTIONS(245),
        [anon_sym_COLON] = ACTIONS(881),
        [sym_comment] = ACTIONS(45),
    },
    [340] = {
        [sym__simple_statement] = STATE(257),
        [sym_print_statement] = STATE(236),
        [sym_expression_statement] = STATE(236),
        [sym__suite] = STATE(341),
        [sym__expression] = STATE(259),
        [sym_binary_operator] = STATE(249),
        [anon_sym_print] = ACTIONS(765),
        [sym_identifier] = ACTIONS(519),
        [sym_comment] = ACTIONS(45),
        [sym__indent] = ACTIONS(521),
    },
    [341] = {
        [ts_builtin_sym_end] = ACTIONS(339),
        [anon_sym_SEMI] = ACTIONS(339),
        [anon_sym_print] = ACTIONS(335),
        [anon_sym_if] = ACTIONS(335),
        [anon_sym_for] = ACTIONS(335),
        [anon_sym_while] = ACTIONS(335),
        [anon_sym_try] = ACTIONS(335),
        [anon_sym_with] = ACTIONS(335),
        [anon_sym_def] = ACTIONS(335),
        [sym_identifier] = ACTIONS(337),
        [sym_comment] = ACTIONS(45),
        [sym__newline] = ACTIONS(339),
        [sym__dedent] = ACTIONS(339),
    },
    [342] = {
        [anon_sym_COMMA] = ACTIONS(255),
        [anon_sym_COLON] = ACTIONS(883),
        [anon_sym_PLUS] = ACTIONS(253),
        [sym_comment] = ACTIONS(45),
    },
    [343] = {
        [anon_sym_COMMA] = ACTIONS(886),
        [anon_sym_COLON] = ACTIONS(888),
        [anon_sym_as] = ACTIONS(886),
        [anon_sym_PLUS] = ACTIONS(253),
        [sym_comment] = ACTIONS(45),
    },
    [344] = {
        [sym__expression] = STATE(346),
        [sym_binary_operator] = STATE(66),
        [sym_identifier] = ACTIONS(73),
        [sym_comment] = ACTIONS(45),
    },
    [345] = {
        [sym__simple_statement] = STATE(257),
        [sym_print_statement] = STATE(236),
        [sym_expression_statement] = STATE(236),
        [sym__suite] = STATE(347),
        [sym__expression] = STATE(301),
        [sym_binary_operator] = STATE(249),
        [anon_sym_print] = ACTIONS(828),
        [sym_identifier] = ACTIONS(519),
        [sym_comment] = ACTIONS(45),
        [sym__indent] = ACTIONS(521),
    },
    [346] = {
        [anon_sym_COLON] = ACTIONS(890),
        [anon_sym_PLUS] = ACTIONS(253),
        [sym_comment] = ACTIONS(45),
    },
    [347] = {
        [ts_builtin_sym_end] = ACTIONS(357),
        [anon_sym_SEMI] = ACTIONS(357),
        [anon_sym_print] = ACTIONS(353),
        [anon_sym_if] = ACTIONS(353),
        [anon_sym_else] = ACTIONS(353),
        [anon_sym_for] = ACTIONS(353),
        [anon_sym_while] = ACTIONS(353),
        [anon_sym_try] = ACTIONS(353),
        [anon_sym_except] = ACTIONS(353),
        [anon_sym_finally] = ACTIONS(353),
        [anon_sym_with] = ACTIONS(353),
        [anon_sym_def] = ACTIONS(353),
        [sym_identifier] = ACTIONS(355),
        [sym_comment] = ACTIONS(45),
        [sym__newline] = ACTIONS(357),
        [sym__dedent] = ACTIONS(357),
    },
    [348] = {
        [sym__simple_statement] = STATE(85),
        [sym_print_statement] = STATE(86),
        [sym_expression_statement] = STATE(86),
        [sym__suite] = STATE(349),
        [sym__expression] = STATE(88),
        [sym_binary_operator] = STATE(66),
        [anon_sym_print] = ACTIONS(277),
        [sym_identifier] = ACTIONS(279),
        [sym_comment] = ACTIONS(45),
        [sym__indent] = ACTIONS(281),
    },
    [349] = {
        [sym_except_clause] = STATE(328),
        [sym_finally_clause] = STATE(329),
        [aux_sym_try_statement_repeat1] = STATE(253),
        [anon_sym_except] = ACTIONS(892),
        [anon_sym_finally] = ACTIONS(894),
        [sym_comment] = ACTIONS(45),
    },
    [350] = {
        [anon_sym_COLON] = ACTIONS(896),
        [anon_sym_PLUS] = ACTIONS(253),
        [sym_comment] = ACTIONS(45),
    },
    [351] = {
        [sym__simple_statement] = STATE(257),
        [sym_print_statement] = STATE(236),
        [sym_expression_statement] = STATE(236),
        [sym__suite] = STATE(352),
        [sym__expression] = STATE(315),
        [sym_binary_operator] = STATE(249),
        [anon_sym_print] = ACTIONS(844),
        [sym_identifier] = ACTIONS(519),
        [sym_comment] = ACTIONS(45),
        [sym__indent] = ACTIONS(521),
    },
    [352] = {
        [sym_else_clause] = STATE(353),
        [ts_builtin_sym_end] = ACTIONS(371),
        [anon_sym_SEMI] = ACTIONS(371),
        [anon_sym_print] = ACTIONS(367),
        [anon_sym_if] = ACTIONS(367),
        [anon_sym_else] = ACTIONS(757),
        [anon_sym_for] = ACTIONS(367),
        [anon_sym_while] = ACTIONS(367),
        [anon_sym_try] = ACTIONS(367),
        [anon_sym_with] = ACTIONS(367),
        [anon_sym_def] = ACTIONS(367),
        [sym_identifier] = ACTIONS(369),
        [sym_comment] = ACTIONS(45),
        [sym__newline] = ACTIONS(371),
        [sym__dedent] = ACTIONS(371),
    },
    [353] = {
        [ts_builtin_sym_end] = ACTIONS(377),
        [anon_sym_SEMI] = ACTIONS(377),
        [anon_sym_print] = ACTIONS(373),
        [anon_sym_if] = ACTIONS(373),
        [anon_sym_for] = ACTIONS(373),
        [anon_sym_while] = ACTIONS(373),
        [anon_sym_try] = ACTIONS(373),
        [anon_sym_with] = ACTIONS(373),
        [anon_sym_def] = ACTIONS(373),
        [sym_identifier] = ACTIONS(375),
        [sym_comment] = ACTIONS(45),
        [sym__newline] = ACTIONS(377),
        [sym__dedent] = ACTIONS(377),
    },
    [354] = {
        [anon_sym_COLON] = ACTIONS(685),
        [sym_comment] = ACTIONS(45),
    },
    [355] = {
        [anon_sym_in] = ACTIONS(687),
        [sym_comment] = ACTIONS(45),
    },
    [356] = {
        [sym__simple_statement] = STATE(257),
        [sym_print_statement] = STATE(236),
        [sym_expression_statement] = STATE(236),
        [sym__suite] = STATE(281),
        [sym__expression] = STATE(358),
        [sym_binary_operator] = STATE(249),
        [anon_sym_print] = ACTIONS(898),
        [sym_identifier] = ACTIONS(519),
        [sym_comment] = ACTIONS(45),
        [sym__indent] = ACTIONS(521),
    },
    [357] = {
        [sym__expression] = STATE(361),
        [sym_binary_operator] = STATE(249),
        [sym_identifier] = ACTIONS(509),
        [sym_comment] = ACTIONS(45),
    },
    [358] = {
        [ts_builtin_sym_end] = ACTIONS(113),
        [anon_sym_SEMI] = ACTIONS(113),
        [anon_sym_print] = ACTIONS(115),
        [anon_sym_if] = ACTIONS(115),
        [anon_sym_for] = ACTIONS(115),
        [anon_sym_while] = ACTIONS(115),
        [anon_sym_try] = ACTIONS(115),
        [anon_sym_finally] = ACTIONS(115),
        [anon_sym_with] = ACTIONS(115),
        [anon_sym_def] = ACTIONS(115),
        [anon_sym_PLUS] = ACTIONS(900),
        [sym_identifier] = ACTIONS(119),
        [sym_comment] = ACTIONS(45),
        [sym__newline] = ACTIONS(113),
        [sym__dedent] = ACTIONS(113),
    },
    [359] = {
        [sym__expression] = STATE(360),
        [sym_binary_operator] = STATE(249),
        [sym_identifier] = ACTIONS(509),
        [sym_comment] = ACTIONS(45),
    },
    [360] = {
        [ts_builtin_sym_end] = ACTIONS(133),
        [anon_sym_SEMI] = ACTIONS(133),
        [anon_sym_print] = ACTIONS(135),
        [anon_sym_if] = ACTIONS(135),
        [anon_sym_for] = ACTIONS(135),
        [anon_sym_while] = ACTIONS(135),
        [anon_sym_try] = ACTIONS(135),
        [anon_sym_finally] = ACTIONS(135),
        [anon_sym_with] = ACTIONS(135),
        [anon_sym_def] = ACTIONS(135),
        [anon_sym_PLUS] = ACTIONS(902),
        [sym_identifier] = ACTIONS(137),
        [sym_comment] = ACTIONS(45),
        [sym__newline] = ACTIONS(133),
        [sym__dedent] = ACTIONS(133),
    },
    [361] = {
        [aux_sym_print_statement_repeat1] = STATE(364),
        [ts_builtin_sym_end] = ACTIONS(223),
        [anon_sym_SEMI] = ACTIONS(223),
        [anon_sym_print] = ACTIONS(217),
        [anon_sym_COMMA] = ACTIONS(905),
        [anon_sym_if] = ACTIONS(217),
        [anon_sym_for] = ACTIONS(217),
        [anon_sym_while] = ACTIONS(217),
        [anon_sym_try] = ACTIONS(217),
        [anon_sym_finally] = ACTIONS(217),
        [anon_sym_with] = ACTIONS(217),
        [anon_sym_def] = ACTIONS(217),
        [anon_sym_PLUS] = ACTIONS(907),
        [sym_identifier] = ACTIONS(221),
        [sym_comment] = ACTIONS(45),
        [sym__newline] = ACTIONS(223),
        [sym__dedent] = ACTIONS(223),
    },
    [362] = {
        [sym__expression] = STATE(368),
        [sym_binary_operator] = STATE(249),
        [sym_identifier] = ACTIONS(509),
        [sym_comment] = ACTIONS(45),
    },
    [363] = {
        [sym__expression] = STATE(367),
        [sym_binary_operator] = STATE(249),
        [sym_identifier] = ACTIONS(509),
        [sym_comment] = ACTIONS(45),
    },
    [364] = {
        [ts_builtin_sym_end] = ACTIONS(231),
        [anon_sym_SEMI] = ACTIONS(231),
        [anon_sym_print] = ACTIONS(225),
        [anon_sym_COMMA] = ACTIONS(909),
        [anon_sym_if] = ACTIONS(225),
        [anon_sym_for] = ACTIONS(225),
        [anon_sym_while] = ACTIONS(225),
        [anon_sym_try] = ACTIONS(225),
        [anon_sym_finally] = ACTIONS(225),
        [anon_sym_with] = ACTIONS(225),
        [anon_sym_def] = ACTIONS(225),
        [sym_identifier] = ACTIONS(229),
        [sym_comment] = ACTIONS(45),
        [sym__newline] = ACTIONS(231),
        [sym__dedent] = ACTIONS(231),
    },
    [365] = {
        [sym__expression] = STATE(366),
        [sym_binary_operator] = STATE(249),
        [sym_identifier] = ACTIONS(509),
        [sym_comment] = ACTIONS(45),
    },
    [366] = {
        [ts_builtin_sym_end] = ACTIONS(235),
        [anon_sym_SEMI] = ACTIONS(235),
        [anon_sym_print] = ACTIONS(233),
        [anon_sym_COMMA] = ACTIONS(235),
        [anon_sym_if] = ACTIONS(233),
        [anon_sym_for] = ACTIONS(233),
        [anon_sym_while] = ACTIONS(233),
        [anon_sym_try] = ACTIONS(233),
        [anon_sym_finally] = ACTIONS(233),
        [anon_sym_with] = ACTIONS(233),
        [anon_sym_def] = ACTIONS(233),
        [anon_sym_PLUS] = ACTIONS(907),
        [sym_identifier] = ACTIONS(237),
        [sym_comment] = ACTIONS(45),
        [sym__newline] = ACTIONS(235),
        [sym__dedent] = ACTIONS(235),
    },
    [367] = {
        [ts_builtin_sym_end] = ACTIONS(133),
        [anon_sym_SEMI] = ACTIONS(133),
        [anon_sym_print] = ACTIONS(135),
        [anon_sym_COMMA] = ACTIONS(133),
        [anon_sym_if] = ACTIONS(135),
        [anon_sym_for] = ACTIONS(135),
        [anon_sym_while] = ACTIONS(135),
        [anon_sym_try] = ACTIONS(135),
        [anon_sym_finally] = ACTIONS(135),
        [anon_sym_with] = ACTIONS(135),
        [anon_sym_def] = ACTIONS(135),
        [anon_sym_PLUS] = ACTIONS(911),
        [sym_identifier] = ACTIONS(137),
        [sym_comment] = ACTIONS(45),
        [sym__newline] = ACTIONS(133),
        [sym__dedent] = ACTIONS(133),
    },
    [368] = {
        [ts_builtin_sym_end] = ACTIONS(241),
        [anon_sym_SEMI] = ACTIONS(241),
        [anon_sym_print] = ACTIONS(239),
        [anon_sym_COMMA] = ACTIONS(241),
        [anon_sym_if] = ACTIONS(239),
        [anon_sym_for] = ACTIONS(239),
        [anon_sym_while] = ACTIONS(239),
        [anon_sym_try] = ACTIONS(239),
        [anon_sym_finally] = ACTIONS(239),
        [anon_sym_with] = ACTIONS(239),
        [anon_sym_def] = ACTIONS(239),
        [anon_sym_PLUS] = ACTIONS(907),
        [sym_identifier] = ACTIONS(243),
        [sym_comment] = ACTIONS(45),
        [sym__newline] = ACTIONS(241),
        [sym__dedent] = ACTIONS(241),
    },
    [369] = {
        [anon_sym_COLON] = ACTIONS(914),
        [anon_sym_PLUS] = ACTIONS(253),
        [sym_comment] = ACTIONS(45),
    },
    [370] = {
        [sym__simple_statement] = STATE(257),
        [sym_print_statement] = STATE(236),
        [sym_expression_statement] = STATE(236),
        [sym__suite] = STATE(372),
        [sym__expression] = STATE(373),
        [sym_binary_operator] = STATE(249),
        [anon_sym_print] = ACTIONS(916),
        [sym_identifier] = ACTIONS(519),
        [sym_comment] = ACTIONS(45),
        [sym__indent] = ACTIONS(521),
    },
    [371] = {
        [sym__expression] = STATE(376),
        [sym_binary_operator] = STATE(249),
        [sym_identifier] = ACTIONS(509),
        [sym_comment] = ACTIONS(45),
    },
    [372] = {
        [ts_builtin_sym_end] = ACTIONS(439),
        [anon_sym_SEMI] = ACTIONS(439),
        [anon_sym_print] = ACTIONS(435),
        [anon_sym_if] = ACTIONS(435),
        [anon_sym_elif] = ACTIONS(435),
        [anon_sym_else] = ACTIONS(435),
        [anon_sym_for] = ACTIONS(435),
        [anon_sym_while] = ACTIONS(435),
        [anon_sym_try] = ACTIONS(435),
        [anon_sym_with] = ACTIONS(435),
        [anon_sym_def] = ACTIONS(435),
        [sym_identifier] = ACTIONS(437),
        [sym_comment] = ACTIONS(45),
        [sym__newline] = ACTIONS(439),
        [sym__dedent] = ACTIONS(439),
    },
    [373] = {
        [ts_builtin_sym_end] = ACTIONS(113),
        [anon_sym_SEMI] = ACTIONS(113),
        [anon_sym_print] = ACTIONS(115),
        [anon_sym_if] = ACTIONS(115),
        [anon_sym_elif] = ACTIONS(115),
        [anon_sym_else] = ACTIONS(115),
        [anon_sym_for] = ACTIONS(115),
        [anon_sym_while] = ACTIONS(115),
        [anon_sym_try] = ACTIONS(115),
        [anon_sym_with] = ACTIONS(115),
        [anon_sym_def] = ACTIONS(115),
        [anon_sym_PLUS] = ACTIONS(918),
        [sym_identifier] = ACTIONS(119),
        [sym_comment] = ACTIONS(45),
        [sym__newline] = ACTIONS(113),
        [sym__dedent] = ACTIONS(113),
    },
    [374] = {
        [sym__expression] = STATE(375),
        [sym_binary_operator] = STATE(249),
        [sym_identifier] = ACTIONS(509),
        [sym_comment] = ACTIONS(45),
    },
    [375] = {
        [ts_builtin_sym_end] = ACTIONS(133),
        [anon_sym_SEMI] = ACTIONS(133),
        [anon_sym_print] = ACTIONS(135),
        [anon_sym_if] = ACTIONS(135),
        [anon_sym_elif] = ACTIONS(135),
        [anon_sym_else] = ACTIONS(135),
        [anon_sym_for] = ACTIONS(135),
        [anon_sym_while] = ACTIONS(135),
        [anon_sym_try] = ACTIONS(135),
        [anon_sym_with] = ACTIONS(135),
        [anon_sym_def] = ACTIONS(135),
        [anon_sym_PLUS] = ACTIONS(920),
        [sym_identifier] = ACTIONS(137),
        [sym_comment] = ACTIONS(45),
        [sym__newline] = ACTIONS(133),
        [sym__dedent] = ACTIONS(133),
    },
    [376] = {
        [aux_sym_print_statement_repeat1] = STATE(379),
        [ts_builtin_sym_end] = ACTIONS(223),
        [anon_sym_SEMI] = ACTIONS(223),
        [anon_sym_print] = ACTIONS(217),
        [anon_sym_COMMA] = ACTIONS(923),
        [anon_sym_if] = ACTIONS(217),
        [anon_sym_elif] = ACTIONS(217),
        [anon_sym_else] = ACTIONS(217),
        [anon_sym_for] = ACTIONS(217),
        [anon_sym_while] = ACTIONS(217),
        [anon_sym_try] = ACTIONS(217),
        [anon_sym_with] = ACTIONS(217),
        [anon_sym_def] = ACTIONS(217),
        [anon_sym_PLUS] = ACTIONS(925),
        [sym_identifier] = ACTIONS(221),
        [sym_comment] = ACTIONS(45),
        [sym__newline] = ACTIONS(223),
        [sym__dedent] = ACTIONS(223),
    },
    [377] = {
        [sym__expression] = STATE(383),
        [sym_binary_operator] = STATE(249),
        [sym_identifier] = ACTIONS(509),
        [sym_comment] = ACTIONS(45),
    },
    [378] = {
        [sym__expression] = STATE(382),
        [sym_binary_operator] = STATE(249),
        [sym_identifier] = ACTIONS(509),
        [sym_comment] = ACTIONS(45),
    },
    [379] = {
        [ts_builtin_sym_end] = ACTIONS(231),
        [anon_sym_SEMI] = ACTIONS(231),
        [anon_sym_print] = ACTIONS(225),
        [anon_sym_COMMA] = ACTIONS(927),
        [anon_sym_if] = ACTIONS(225),
        [anon_sym_elif] = ACTIONS(225),
        [anon_sym_else] = ACTIONS(225),
        [anon_sym_for] = ACTIONS(225),
        [anon_sym_while] = ACTIONS(225),
        [anon_sym_try] = ACTIONS(225),
        [anon_sym_with] = ACTIONS(225),
        [anon_sym_def] = ACTIONS(225),
        [sym_identifier] = ACTIONS(229),
        [sym_comment] = ACTIONS(45),
        [sym__newline] = ACTIONS(231),
        [sym__dedent] = ACTIONS(231),
    },
    [380] = {
        [sym__expression] = STATE(381),
        [sym_binary_operator] = STATE(249),
        [sym_identifier] = ACTIONS(509),
        [sym_comment] = ACTIONS(45),
    },
    [381] = {
        [ts_builtin_sym_end] = ACTIONS(235),
        [anon_sym_SEMI] = ACTIONS(235),
        [anon_sym_print] = ACTIONS(233),
        [anon_sym_COMMA] = ACTIONS(235),
        [anon_sym_if] = ACTIONS(233),
        [anon_sym_elif] = ACTIONS(233),
        [anon_sym_else] = ACTIONS(233),
        [anon_sym_for] = ACTIONS(233),
        [anon_sym_while] = ACTIONS(233),
        [anon_sym_try] = ACTIONS(233),
        [anon_sym_with] = ACTIONS(233),
        [anon_sym_def] = ACTIONS(233),
        [anon_sym_PLUS] = ACTIONS(925),
        [sym_identifier] = ACTIONS(237),
        [sym_comment] = ACTIONS(45),
        [sym__newline] = ACTIONS(235),
        [sym__dedent] = ACTIONS(235),
    },
    [382] = {
        [ts_builtin_sym_end] = ACTIONS(133),
        [anon_sym_SEMI] = ACTIONS(133),
        [anon_sym_print] = ACTIONS(135),
        [anon_sym_COMMA] = ACTIONS(133),
        [anon_sym_if] = ACTIONS(135),
        [anon_sym_elif] = ACTIONS(135),
        [anon_sym_else] = ACTIONS(135),
        [anon_sym_for] = ACTIONS(135),
        [anon_sym_while] = ACTIONS(135),
        [anon_sym_try] = ACTIONS(135),
        [anon_sym_with] = ACTIONS(135),
        [anon_sym_def] = ACTIONS(135),
        [anon_sym_PLUS] = ACTIONS(929),
        [sym_identifier] = ACTIONS(137),
        [sym_comment] = ACTIONS(45),
        [sym__newline] = ACTIONS(133),
        [sym__dedent] = ACTIONS(133),
    },
    [383] = {
        [ts_builtin_sym_end] = ACTIONS(241),
        [anon_sym_SEMI] = ACTIONS(241),
        [anon_sym_print] = ACTIONS(239),
        [anon_sym_COMMA] = ACTIONS(241),
        [anon_sym_if] = ACTIONS(239),
        [anon_sym_elif] = ACTIONS(239),
        [anon_sym_else] = ACTIONS(239),
        [anon_sym_for] = ACTIONS(239),
        [anon_sym_while] = ACTIONS(239),
        [anon_sym_try] = ACTIONS(239),
        [anon_sym_with] = ACTIONS(239),
        [anon_sym_def] = ACTIONS(239),
        [anon_sym_PLUS] = ACTIONS(925),
        [sym_identifier] = ACTIONS(243),
        [sym_comment] = ACTIONS(45),
        [sym__newline] = ACTIONS(241),
        [sym__dedent] = ACTIONS(241),
    },
    [384] = {
        [anon_sym_COLON] = ACTIONS(932),
        [anon_sym_PLUS] = ACTIONS(253),
        [sym_comment] = ACTIONS(45),
    },
    [385] = {
        [sym__simple_statement] = STATE(257),
        [sym_print_statement] = STATE(236),
        [sym_expression_statement] = STATE(236),
        [sym__suite] = STATE(386),
        [sym__expression] = STATE(373),
        [sym_binary_operator] = STATE(249),
        [anon_sym_print] = ACTIONS(916),
        [sym_identifier] = ACTIONS(519),
        [sym_comment] = ACTIONS(45),
        [sym__indent] = ACTIONS(521),
    },
    [386] = {
        [sym_elif_clause] = STATE(295),
        [sym_else_clause] = STATE(387),
        [aux_sym_if_statement_repeat1] = STATE(252),
        [ts_builtin_sym_end] = ACTIONS(407),
        [anon_sym_SEMI] = ACTIONS(407),
        [anon_sym_print] = ACTIONS(401),
        [anon_sym_if] = ACTIONS(401),
        [anon_sym_elif] = ACTIONS(755),
        [anon_sym_else] = ACTIONS(757),
        [anon_sym_for] = ACTIONS(401),
        [anon_sym_while] = ACTIONS(401),
        [anon_sym_try] = ACTIONS(401),
        [anon_sym_with] = ACTIONS(401),
        [anon_sym_def] = ACTIONS(401),
        [sym_identifier] = ACTIONS(405),
        [sym_comment] = ACTIONS(45),
        [sym__newline] = ACTIONS(407),
        [sym__dedent] = ACTIONS(407),
    },
    [387] = {
        [ts_builtin_sym_end] = ACTIONS(419),
        [anon_sym_SEMI] = ACTIONS(419),
        [anon_sym_print] = ACTIONS(415),
        [anon_sym_if] = ACTIONS(415),
        [anon_sym_for] = ACTIONS(415),
        [anon_sym_while] = ACTIONS(415),
        [anon_sym_try] = ACTIONS(415),
        [anon_sym_with] = ACTIONS(415),
        [anon_sym_def] = ACTIONS(415),
        [sym_identifier] = ACTIONS(417),
        [sym_comment] = ACTIONS(45),
        [sym__newline] = ACTIONS(419),
        [sym__dedent] = ACTIONS(419),
    },
    [388] = {
        [anon_sym_COMMA] = ACTIONS(934),
        [anon_sym_COLON] = ACTIONS(934),
        [sym_comment] = ACTIONS(45),
    },
    [389] = {
        [ts_builtin_sym_end] = ACTIONS(937),
        [anon_sym_SEMI] = ACTIONS(937),
        [anon_sym_print] = ACTIONS(940),
        [anon_sym_COMMA] = ACTIONS(943),
        [anon_sym_if] = ACTIONS(940),
        [anon_sym_COLON] = ACTIONS(947),
        [anon_sym_elif] = ACTIONS(940),
        [anon_sym_else] = ACTIONS(940),
        [anon_sym_for] = ACTIONS(940),
        [anon_sym_in] = ACTIONS(940),
        [anon_sym_while] = ACTIONS(940),
        [anon_sym_try] = ACTIONS(940),
        [anon_sym_except] = ACTIONS(940),
        [anon_sym_as] = ACTIONS(952),
        [anon_sym_finally] = ACTIONS(940),
        [anon_sym_with] = ACTIONS(940),
        [anon_sym_def] = ACTIONS(940),
        [anon_sym_PLUS] = ACTIONS(954),
        [sym_identifier] = ACTIONS(956),
        [sym_comment] = ACTIONS(45),
        [sym__newline] = ACTIONS(937),
        [sym__dedent] = ACTIONS(937),
    },
    [390] = {
        [sym__expression] = STATE(391),
        [sym_binary_operator] = STATE(249),
        [sym_identifier] = ACTIONS(509),
        [sym_comment] = ACTIONS(45),
    },
    [391] = {
        [ts_builtin_sym_end] = ACTIONS(133),
        [anon_sym_SEMI] = ACTIONS(133),
        [anon_sym_print] = ACTIONS(135),
        [anon_sym_COMMA] = ACTIONS(133),
        [anon_sym_if] = ACTIONS(135),
        [anon_sym_COLON] = ACTIONS(133),
        [anon_sym_elif] = ACTIONS(135),
        [anon_sym_else] = ACTIONS(135),
        [anon_sym_for] = ACTIONS(135),
        [anon_sym_in] = ACTIONS(135),
        [anon_sym_while] = ACTIONS(135),
        [anon_sym_try] = ACTIONS(135),
        [anon_sym_except] = ACTIONS(135),
        [anon_sym_as] = ACTIONS(135),
        [anon_sym_finally] = ACTIONS(135),
        [anon_sym_with] = ACTIONS(135),
        [anon_sym_def] = ACTIONS(135),
        [anon_sym_PLUS] = ACTIONS(959),
        [sym_identifier] = ACTIONS(137),
        [sym_comment] = ACTIONS(45),
        [sym__newline] = ACTIONS(133),
        [sym__dedent] = ACTIONS(133),
    },
    [392] = {
        [aux_sym_print_statement_repeat1] = STATE(395),
        [ts_builtin_sym_end] = ACTIONS(223),
        [anon_sym_SEMI] = ACTIONS(223),
        [anon_sym_print] = ACTIONS(217),
        [anon_sym_COMMA] = ACTIONS(962),
        [anon_sym_if] = ACTIONS(217),
        [anon_sym_elif] = ACTIONS(217),
        [anon_sym_else] = ACTIONS(217),
        [anon_sym_for] = ACTIONS(217),
        [anon_sym_while] = ACTIONS(217),
        [anon_sym_try] = ACTIONS(217),
        [anon_sym_except] = ACTIONS(217),
        [anon_sym_finally] = ACTIONS(217),
        [anon_sym_with] = ACTIONS(217),
        [anon_sym_def] = ACTIONS(217),
        [anon_sym_PLUS] = ACTIONS(964),
        [sym_identifier] = ACTIONS(221),
        [sym_comment] = ACTIONS(45),
        [sym__newline] = ACTIONS(223),
        [sym__dedent] = ACTIONS(223),
    },
    [393] = {
        [sym__expression] = STATE(399),
        [sym_binary_operator] = STATE(249),
        [sym_identifier] = ACTIONS(509),
        [sym_comment] = ACTIONS(45),
    },
    [394] = {
        [sym__expression] = STATE(398),
        [sym_binary_operator] = STATE(249),
        [sym_identifier] = ACTIONS(509),
        [sym_comment] = ACTIONS(45),
    },
    [395] = {
        [ts_builtin_sym_end] = ACTIONS(231),
        [anon_sym_SEMI] = ACTIONS(231),
        [anon_sym_print] = ACTIONS(225),
        [anon_sym_COMMA] = ACTIONS(966),
        [anon_sym_if] = ACTIONS(225),
        [anon_sym_elif] = ACTIONS(225),
        [anon_sym_else] = ACTIONS(225),
        [anon_sym_for] = ACTIONS(225),
        [anon_sym_while] = ACTIONS(225),
        [anon_sym_try] = ACTIONS(225),
        [anon_sym_except] = ACTIONS(225),
        [anon_sym_finally] = ACTIONS(225),
        [anon_sym_with] = ACTIONS(225),
        [anon_sym_def] = ACTIONS(225),
        [sym_identifier] = ACTIONS(229),
        [sym_comment] = ACTIONS(45),
        [sym__newline] = ACTIONS(231),
        [sym__dedent] = ACTIONS(231),
    },
    [396] = {
        [sym__expression] = STATE(397),
        [sym_binary_operator] = STATE(249),
        [sym_identifier] = ACTIONS(509),
        [sym_comment] = ACTIONS(45),
    },
    [397] = {
        [ts_builtin_sym_end] = ACTIONS(235),
        [anon_sym_SEMI] = ACTIONS(235),
        [anon_sym_print] = ACTIONS(233),
        [anon_sym_COMMA] = ACTIONS(235),
        [anon_sym_if] = ACTIONS(233),
        [anon_sym_elif] = ACTIONS(233),
        [anon_sym_else] = ACTIONS(233),
        [anon_sym_for] = ACTIONS(233),
        [anon_sym_while] = ACTIONS(233),
        [anon_sym_try] = ACTIONS(233),
        [anon_sym_except] = ACTIONS(233),
        [anon_sym_finally] = ACTIONS(233),
        [anon_sym_with] = ACTIONS(233),
        [anon_sym_def] = ACTIONS(233),
        [anon_sym_PLUS] = ACTIONS(964),
        [sym_identifier] = ACTIONS(237),
        [sym_comment] = ACTIONS(45),
        [sym__newline] = ACTIONS(235),
        [sym__dedent] = ACTIONS(235),
    },
    [398] = {
        [ts_builtin_sym_end] = ACTIONS(133),
        [anon_sym_SEMI] = ACTIONS(133),
        [anon_sym_print] = ACTIONS(135),
        [anon_sym_COMMA] = ACTIONS(133),
        [anon_sym_if] = ACTIONS(135),
        [anon_sym_elif] = ACTIONS(135),
        [anon_sym_else] = ACTIONS(135),
        [anon_sym_for] = ACTIONS(135),
        [anon_sym_while] = ACTIONS(135),
        [anon_sym_try] = ACTIONS(135),
        [anon_sym_except] = ACTIONS(135),
        [anon_sym_finally] = ACTIONS(135),
        [anon_sym_with] = ACTIONS(135),
        [anon_sym_def] = ACTIONS(135),
        [anon_sym_PLUS] = ACTIONS(968),
        [sym_identifier] = ACTIONS(137),
        [sym_comment] = ACTIONS(45),
        [sym__newline] = ACTIONS(133),
        [sym__dedent] = ACTIONS(133),
    },
    [399] = {
        [ts_builtin_sym_end] = ACTIONS(241),
        [anon_sym_SEMI] = ACTIONS(241),
        [anon_sym_print] = ACTIONS(239),
        [anon_sym_COMMA] = ACTIONS(241),
        [anon_sym_if] = ACTIONS(239),
        [anon_sym_elif] = ACTIONS(239),
        [anon_sym_else] = ACTIONS(239),
        [anon_sym_for] = ACTIONS(239),
        [anon_sym_while] = ACTIONS(239),
        [anon_sym_try] = ACTIONS(239),
        [anon_sym_except] = ACTIONS(239),
        [anon_sym_finally] = ACTIONS(239),
        [anon_sym_with] = ACTIONS(239),
        [anon_sym_def] = ACTIONS(239),
        [anon_sym_PLUS] = ACTIONS(964),
        [sym_identifier] = ACTIONS(243),
        [sym_comment] = ACTIONS(45),
        [sym__newline] = ACTIONS(241),
        [sym__dedent] = ACTIONS(241),
    },
};

static TSParseActionEntry ts_parse_actions[] = {
    [0] = {.count = 0, .reusable = false, .depends_on_lookahead = false},
    [1] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(0),
    [3] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(18),
    [5] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(213),
    [7] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(214),
    [9] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(215),
    [11] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(216),
    [13] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(217),
    [15] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(218),
    [17] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(219),
    [19] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(220),
    [21] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(221),
    [23] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(222),
    [25] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(223),
    [27] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(224),
    [29] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(225),
    [31] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(226),
    [33] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(227),
    [35] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(24),
    [37] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(228),
    [39] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(158),
    [41] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(229),
    [43] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, RECOVER(230),
    [45] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT_EXTRA(),
    [47] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(231),
    [49] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(232),
    [51] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(233),
    [53] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_module, 0),
    [55] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(2),
    [57] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(3),
    [59] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(4),
    [61] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(5),
    [63] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(6),
    [65] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(7),
    [67] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(8),
    [69] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(9),
    [71] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(9),
    [73] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(66),
    [75] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(168),
    [77] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(23),
    [79] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__expression, 1),
    [81] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__expression, 1),
    [83] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__expression, 1),
    [85] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, ACCEPT_INPUT(),
    [87] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_module_repeat1, 1),
    [89] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_module_repeat1, 1),
    [91] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_module_repeat1, 1),
    [93] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(22),
    [95] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__simple_statement, 1),
    [97] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__simple_statement, 1),
    [99] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__simple_statement, 1),
    [101] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__statement, 1),
    [103] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__statement, 1),
    [105] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__statement, 1),
    [107] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__compound_statement, 1),
    [109] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__compound_statement, 1),
    [111] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__compound_statement, 1),
    [113] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_expression_statement, 1),
    [115] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_expression_statement, 1),
    [117] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(20),
    [119] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_expression_statement, 1),
    [121] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_module, 1),
    [123] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(18),
    [125] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_module, 2),
    [127] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_module_repeat1, 2),
    [129] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_module_repeat1, 2),
    [131] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_module_repeat1, 2),
    [133] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE_FRAGILE(sym_binary_operator, 3),
    [135] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE_FRAGILE(sym_binary_operator, 3),
    [137] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE_FRAGILE(sym_binary_operator, 3),
    [139] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__statement, 2),
    [141] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__statement, 2),
    [143] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__statement, 2),
    [145] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(24),
    [147] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(149),
    [149] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(150),
    [151] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(26),
    [153] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(27),
    [155] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(30),
    [157] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(31),
    [159] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(32),
    [161] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(33),
    [163] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(34),
    [165] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(35),
    [167] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(36),
    [169] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__suite, 1),
    [171] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__suite, 1),
    [173] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__suite, 1),
    [175] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_function_definition, 5),
    [177] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_function_definition, 5),
    [179] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_function_definition, 5),
    [181] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(82),
    [183] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(45),
    [185] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__suite, 2),
    [187] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__suite, 2),
    [189] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__suite, 2),
    [191] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(44),
    [193] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(42),
    [195] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__suite, 3),
    [197] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__suite, 3),
    [199] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__suite, 3),
    [201] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(47),
    [203] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(48),
    [205] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(49),
    [207] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(50),
    [209] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(49),
    [211] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(57),
    [213] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(55),
    [215] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(59),
    [217] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_print_statement, 2),
    [219] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(61),
    [221] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_print_statement, 2),
    [223] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_print_statement, 2),
    [225] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_print_statement, 3),
    [227] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(63),
    [229] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_print_statement, 3),
    [231] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_print_statement, 3),
    [233] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_print_statement_repeat1, 3),
    [235] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_print_statement_repeat1, 3),
    [237] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_print_statement_repeat1, 3),
    [239] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_print_statement_repeat1, 2),
    [241] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_print_statement_repeat1, 2),
    [243] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_print_statement_repeat1, 2),
    [245] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(73),
    [247] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(74),
    [249] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_with_item, 1),
    [251] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(69),
    [253] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(70),
    [255] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_with_item, 3),
    [257] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(76),
    [259] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(77),
    [261] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_with_statement, 5),
    [263] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_with_statement, 5),
    [265] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_with_statement, 5),
    [267] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_with_statement_repeat1, 3),
    [269] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_with_statement, 4),
    [271] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_with_statement, 4),
    [273] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_with_statement, 4),
    [275] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_with_statement_repeat1, 2),
    [277] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(83),
    [279] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(66),
    [281] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(84),
    [283] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(110),
    [285] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(89),
    [287] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(90),
    [289] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(101),
    [291] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_try_statement_repeat1, 1),
    [293] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_try_statement_repeat1, 1),
    [295] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_try_statement_repeat1, 1),
    [297] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_try_statement, 4),
    [299] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_try_statement, 4),
    [301] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_try_statement, 4),
    [303] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(94),
    [305] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(89),
    [307] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(90),
    [309] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(99),
    [311] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_try_statement, 5),
    [313] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_try_statement, 5),
    [315] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_try_statement, 5),
    [317] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_try_statement_repeat1, 2),
    [319] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_try_statement_repeat1, 2),
    [321] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_try_statement_repeat1, 2),
    [323] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_try_statement, 6),
    [325] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_try_statement, 6),
    [327] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_try_statement, 6),
    [329] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_else_clause, 3),
    [331] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_else_clause, 3),
    [333] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_else_clause, 3),
    [335] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_finally_clause, 3),
    [337] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_finally_clause, 3),
    [339] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_finally_clause, 3),
    [341] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(104),
    [343] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(105),
    [345] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(107),
    [347] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_except_clause, 6),
    [349] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_except_clause, 6),
    [351] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_except_clause, 6),
    [353] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_except_clause, 4),
    [355] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_except_clause, 4),
    [357] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_except_clause, 4),
    [359] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(112),
    [361] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(114),
    [363] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(116),
    [365] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(120),
    [367] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_while_statement, 4),
    [369] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_while_statement, 4),
    [371] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_while_statement, 4),
    [373] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_while_statement, 5),
    [375] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_while_statement, 5),
    [377] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_while_statement, 5),
    [379] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(126),
    [381] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_expression_list, 1),
    [383] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_expression_list, 2),
    [385] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(128),
    [387] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_for_statement, 6),
    [389] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_for_statement, 6),
    [391] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_for_statement, 6),
    [393] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_for_statement, 7),
    [395] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_for_statement, 7),
    [397] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_for_statement, 7),
    [399] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(132),
    [401] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_if_statement, 4),
    [403] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(134),
    [405] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_if_statement, 4),
    [407] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_if_statement, 4),
    [409] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_if_statement_repeat1, 1),
    [411] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_if_statement_repeat1, 1),
    [413] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_if_statement_repeat1, 1),
    [415] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_if_statement, 5),
    [417] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_if_statement, 5),
    [419] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_if_statement, 5),
    [421] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_if_statement_repeat1, 2),
    [423] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_if_statement_repeat1, 2),
    [425] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_if_statement_repeat1, 2),
    [427] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_if_statement, 6),
    [429] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_if_statement, 6),
    [431] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_if_statement, 6),
    [433] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(141),
    [435] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_elif_clause, 4),
    [437] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_elif_clause, 4),
    [439] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_elif_clause, 4),
    [441] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(144),
    [443] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(146),
    [445] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_parameters, 2),
    [447] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(160),
    [449] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(161),
    [451] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(158),
    [453] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(153),
    [455] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(155),
    [457] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(156),
    [459] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(157),
    [461] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_parameters_repeat1, 3),
    [463] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_parameters, 4),
    [465] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_parameters, 5),
    [467] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_default_parameter, 3),
    [469] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_parameters_repeat1, 2),
    [471] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_parameters, 3),
    [473] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(163),
    [475] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(165),
    [477] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(170),
    [479] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(171),
    [481] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(182),
    [483] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(175),
    [485] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(170),
    [487] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(171),
    [489] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(180),
    [491] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(185),
    [493] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(186),
    [495] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(188),
    [497] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(192),
    [499] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(196),
    [501] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(198),
    [503] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(202),
    [505] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(204),
    [507] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(211),
    [509] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(249),
    [511] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(332),
    [513] = {.count = 3, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_parameters_repeat1, 2), REDUCE(aux_sym_parameters_repeat1, 3), SHIFT(249),
    [517] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(213),
    [519] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(249),
    [521] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(232),
    [523] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(356),
    [525] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(348),
    [527] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(340),
    [529] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(338),
    [531] = {.count = 4, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_parameters, 2), REDUCE(sym_parameters, 3), REDUCE(sym_parameters, 4), REDUCE(sym_parameters, 5),
    [536] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__expression, 1), SHIFT(330),
    [539] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__expression, 1), SHIFT(331),
    [542] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_module, 2), REDUCE(sym__statement, 2),
    [545] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(262),
    [547] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__suite, 2), REDUCE(sym__suite, 3),
    [550] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__suite, 2), REDUCE(sym__suite, 3),
    [553] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__suite, 2), REDUCE(sym__suite, 3),
    [556] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_module_repeat1, 1), REDUCE(aux_sym_module_repeat1, 2),
    [559] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_module_repeat1, 1), REDUCE(aux_sym_module_repeat1, 2),
    [562] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_module_repeat1, 1), REDUCE(aux_sym_module_repeat1, 2),
    [565] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__suite, 1), SHIFT(288),
    [568] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_if_statement_repeat1, 1), REDUCE(aux_sym_if_statement_repeat1, 2),
    [571] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_if_statement_repeat1, 1), REDUCE(aux_sym_if_statement_repeat1, 2),
    [574] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_if_statement_repeat1, 1), REDUCE(aux_sym_if_statement_repeat1, 2),
    [577] = {.count = 5, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_if_statement, 5), REDUCE(sym_while_statement, 5), REDUCE(sym_try_statement, 5), REDUCE(sym_if_statement, 6), REDUCE(sym_for_statement, 7),
    [583] = {.count = 5, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_if_statement, 5), REDUCE(sym_while_statement, 5), REDUCE(sym_try_statement, 5), REDUCE(sym_if_statement, 6), REDUCE(sym_for_statement, 7),
    [589] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(225),
    [591] = {.count = 5, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_if_statement, 5), REDUCE(sym_while_statement, 5), REDUCE(sym_try_statement, 5), REDUCE(sym_if_statement, 6), REDUCE(sym_for_statement, 7),
    [597] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_try_statement_repeat1, 1), REDUCE(aux_sym_try_statement_repeat1, 2),
    [600] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_try_statement_repeat1, 1), REDUCE(aux_sym_try_statement_repeat1, 2),
    [603] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_try_statement_repeat1, 1), REDUCE(aux_sym_try_statement_repeat1, 2),
    [606] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_try_statement, 4), REDUCE(sym_try_statement, 5), REDUCE(sym_try_statement, 6),
    [610] = {.count = 3, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_try_statement, 4), REDUCE(sym_try_statement, 5), REDUCE(sym_try_statement, 6),
    [614] = {.count = 3, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_try_statement, 4), REDUCE(sym_try_statement, 5), REDUCE(sym_try_statement, 6),
    [618] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_with_statement_repeat1, 2), REDUCE(aux_sym_with_statement_repeat1, 3), SHIFT(73),
    [622] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_with_statement_repeat1, 2), REDUCE(aux_sym_with_statement_repeat1, 3), SHIFT(335),
    [626] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(333),
    [628] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(330),
    [630] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(331),
    [632] = {.count = 11, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_else_clause, 3), REDUCE(sym_finally_clause, 3), REDUCE(sym_if_statement, 4), REDUCE(sym_elif_clause, 4), REDUCE(sym_while_statement, 4), REDUCE(sym_except_clause, 4), REDUCE(sym_with_statement, 4), REDUCE(sym_with_statement, 5), REDUCE(sym_function_definition, 5), REDUCE(sym_for_statement, 6), REDUCE(sym_except_clause, 6),
    [644] = {.count = 11, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_else_clause, 3), REDUCE(sym_finally_clause, 3), REDUCE(sym_if_statement, 4), REDUCE(sym_elif_clause, 4), REDUCE(sym_while_statement, 4), REDUCE(sym_except_clause, 4), REDUCE(sym_with_statement, 4), REDUCE(sym_with_statement, 5), REDUCE(sym_function_definition, 5), REDUCE(sym_for_statement, 6), REDUCE(sym_except_clause, 6),
    [656] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_elif_clause, 4), SHIFT(217),
    [659] = {.count = 4, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_elif_clause, 4), REDUCE(sym_except_clause, 4), REDUCE(sym_except_clause, 6), SHIFT(277),
    [664] = {.count = 3, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_except_clause, 4), REDUCE(sym_except_clause, 6), SHIFT(223),
    [668] = {.count = 4, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_else_clause, 3), REDUCE(sym_except_clause, 4), REDUCE(sym_except_clause, 6), SHIFT(225),
    [673] = {.count = 11, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_else_clause, 3), REDUCE(sym_finally_clause, 3), REDUCE(sym_if_statement, 4), REDUCE(sym_elif_clause, 4), REDUCE(sym_while_statement, 4), REDUCE(sym_except_clause, 4), REDUCE(sym_with_statement, 4), REDUCE(sym_with_statement, 5), REDUCE(sym_function_definition, 5), REDUCE(sym_for_statement, 6), REDUCE(sym_except_clause, 6),
    [685] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(312),
    [687] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(220),
    [689] = {.count = 5, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_expression_statement, 1), REDUCE(sym_print_statement, 2), REDUCE(aux_sym_print_statement_repeat1, 2), REDUCE_FRAGILE(sym_binary_operator, 3), REDUCE(aux_sym_print_statement_repeat1, 3),
    [695] = {.count = 5, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_expression_statement, 1), REDUCE(sym_print_statement, 2), REDUCE(aux_sym_print_statement_repeat1, 2), REDUCE_FRAGILE(sym_binary_operator, 3), REDUCE(aux_sym_print_statement_repeat1, 3),
    [701] = {.count = 7, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_with_item, 1), REDUCE(aux_sym_print_statement_repeat1, 2), REDUCE(sym_with_item, 3), REDUCE(sym_default_parameter, 3), REDUCE_FRAGILE(sym_binary_operator, 3), REDUCE(aux_sym_print_statement_repeat1, 3), SHIFT(289),
    [709] = {.count = 7, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_with_item, 1), REDUCE(sym_expression_list, 1), REDUCE(aux_sym_print_statement_repeat1, 2), REDUCE(sym_with_item, 3), REDUCE_FRAGILE(sym_binary_operator, 3), REDUCE(aux_sym_print_statement_repeat1, 3), SHIFT(290),
    [717] = {.count = 4, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_expression_list, 1), REDUCE(aux_sym_print_statement_repeat1, 2), REDUCE_FRAGILE(sym_binary_operator, 3), REDUCE(aux_sym_print_statement_repeat1, 3),
    [722] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE_FRAGILE(sym_binary_operator, 3), SHIFT(224),
    [725] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_default_parameter, 3), REDUCE_FRAGILE(sym_binary_operator, 3),
    [728] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE_FRAGILE(sym_binary_operator, 3), SHIFT(229),
    [731] = {.count = 5, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_expression_statement, 1), REDUCE(sym_print_statement, 2), REDUCE(aux_sym_print_statement_repeat1, 2), REDUCE_FRAGILE(sym_binary_operator, 3), REDUCE(aux_sym_print_statement_repeat1, 3),
    [737] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(215),
    [739] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(219),
    [741] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(221),
    [743] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(222),
    [745] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(226),
    [747] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(227),
    [749] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(264),
    [751] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(282),
    [753] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_expression_list, 2),
    [755] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(217),
    [757] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(277),
    [759] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(218),
    [761] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(223),
    [763] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(255),
    [765] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(256),
    [767] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(260),
    [769] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE_FRAGILE(sym_binary_operator, 3), SHIFT(260),
    [772] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(266),
    [774] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(267),
    [776] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(269),
    [778] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE_FRAGILE(sym_binary_operator, 3), SHIFT(267),
    [781] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(280),
    [783] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(284),
    [785] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE_FRAGILE(sym_binary_operator, 3), SHIFT(284),
    [788] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(288),
    [790] = {.count = 5, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_if_statement, 4), REDUCE(sym_elif_clause, 4), REDUCE(sym_while_statement, 4), REDUCE(sym_except_clause, 4), REDUCE(sym_except_clause, 6),
    [796] = {.count = 5, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_if_statement, 4), REDUCE(sym_elif_clause, 4), REDUCE(sym_while_statement, 4), REDUCE(sym_except_clause, 4), REDUCE(sym_except_clause, 6),
    [802] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_except_clause, 4), REDUCE(sym_except_clause, 6),
    [805] = {.count = 5, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_if_statement, 4), REDUCE(sym_elif_clause, 4), REDUCE(sym_while_statement, 4), REDUCE(sym_except_clause, 4), REDUCE(sym_except_clause, 6),
    [811] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(293),
    [813] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE_FRAGILE(sym_binary_operator, 3), SHIFT(293),
    [816] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_if_statement, 5), REDUCE(sym_while_statement, 5),
    [819] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_if_statement, 5), REDUCE(sym_while_statement, 5),
    [822] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_if_statement, 5), REDUCE(sym_while_statement, 5),
    [825] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_print_statement_repeat1, 2), SHIFT(298),
    [828] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(299),
    [830] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(302),
    [832] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE_FRAGILE(sym_binary_operator, 3), SHIFT(302),
    [835] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(305),
    [837] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(306),
    [839] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(308),
    [841] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE_FRAGILE(sym_binary_operator, 3), SHIFT(306),
    [844] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(313),
    [846] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(316),
    [848] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE_FRAGILE(sym_binary_operator, 3), SHIFT(316),
    [851] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(320),
    [853] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(321),
    [855] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(323),
    [857] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE_FRAGILE(sym_binary_operator, 3), SHIFT(321),
    [860] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_if_statement, 5), REDUCE(sym_while_statement, 5), REDUCE(sym_for_statement, 7),
    [864] = {.count = 3, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_if_statement, 5), REDUCE(sym_while_statement, 5), REDUCE(sym_for_statement, 7),
    [868] = {.count = 3, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_if_statement, 5), REDUCE(sym_while_statement, 5), REDUCE(sym_for_statement, 7),
    [872] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_parameters_repeat1, 2), REDUCE(aux_sym_parameters_repeat1, 3),
    [875] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_parameters, 3), REDUCE(sym_parameters, 4),
    [878] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_parameters, 4), REDUCE(sym_parameters, 5),
    [881] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(335),
    [883] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_with_item, 3), SHIFT(298),
    [886] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(344),
    [888] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(345),
    [890] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(298),
    [892] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(223),
    [894] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(225),
    [896] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(351),
    [898] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(357),
    [900] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(359),
    [902] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE_FRAGILE(sym_binary_operator, 3), SHIFT(359),
    [905] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(362),
    [907] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(363),
    [909] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(365),
    [911] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE_FRAGILE(sym_binary_operator, 3), SHIFT(363),
    [914] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(370),
    [916] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(371),
    [918] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(374),
    [920] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE_FRAGILE(sym_binary_operator, 3), SHIFT(374),
    [923] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(377),
    [925] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(378),
    [927] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(380),
    [929] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE_FRAGILE(sym_binary_operator, 3), SHIFT(378),
    [932] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(385),
    [934] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_with_statement_repeat1, 2), REDUCE(aux_sym_with_statement_repeat1, 3),
    [937] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_print_statement_repeat1, 2), REDUCE(aux_sym_print_statement_repeat1, 3),
    [940] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_print_statement_repeat1, 2), REDUCE(aux_sym_print_statement_repeat1, 3),
    [943] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_with_item, 1), REDUCE(aux_sym_print_statement_repeat1, 2), REDUCE(aux_sym_print_statement_repeat1, 3),
    [947] = {.count = 4, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_with_item, 1), REDUCE(aux_sym_print_statement_repeat1, 2), REDUCE(aux_sym_print_statement_repeat1, 3), SHIFT(298),
    [952] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(69),
    [954] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(390),
    [956] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_print_statement_repeat1, 2), REDUCE(aux_sym_print_statement_repeat1, 3),
    [959] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE_FRAGILE(sym_binary_operator, 3), SHIFT(390),
    [962] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(393),
    [964] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(394),
    [966] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(396),
    [968] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE_FRAGILE(sym_binary_operator, 3), SHIFT(394),
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
